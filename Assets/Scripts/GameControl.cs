using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Runtime.Serialization.Formatters.Binary;
using System.IO;

public class GameControl : MonoBehaviour
{

    public static GameControl control;

    public int _coins;
    public List<string> _symbols = new List<string>();
    public bool _mute;

    void Awake()
    {
        if (control == null)
        {
            DontDestroyOnLoad(gameObject);
            control = this;
        }
        else
            Destroy(this);

    }

    public void Save()
    {
        BinaryFormatter bf = new BinaryFormatter();
        FileStream file = File.Create(Application.persistentDataPath + "/playerInfo.dat");

        PlayerData data = new PlayerData();
        data._coins = _coins;
        data._symbols = _symbols;
        data._mute = _mute;

        bf.Serialize(file, data);
        file.Close();
    }


    public void Load()
    {
        if (File.Exists(Application.persistentDataPath + "/playerInfo.dat"))
        {
            BinaryFormatter bf = new BinaryFormatter();
            FileStream file = File.Open(Application.persistentDataPath + "/playerInfo.dat", FileMode.Open);
            PlayerData data = (PlayerData)bf.Deserialize(file);
            file.Close();

            _coins = data._coins;
            _symbols = data._symbols;
            _mute = data._mute;
        }

    }

}

[Serializable]
class PlayerData
{
    public int _coins;
    public List<string> _symbols = new List<string>();
    public bool _mute;
}


