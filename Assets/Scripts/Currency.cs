using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Currency : MonoBehaviour
{
    public Text _coinsText;
    public AudioClip sound;
    public AudioSource audioSource;

    private int _rewardamount = 25;


    void Start()
    {
        GameControl.control.Load();
        _coinsText.text = GameControl.control._coins.ToString();
    }


    private void OnEnable()
    {
        GameEvents.OnGiveCoins += GiveReward;
    }

    private void OnDisable()
    {

        GameEvents.OnGiveCoins -= GiveReward;
    }

    public void GiveReward()
    {
        audioSource.PlayOneShot(sound);

        GameControl.control._coins += _rewardamount;
        _coinsText.text = GameControl.control._coins.ToString();
        GameControl.control.Save();
    }

    public void BuySymbol()
    {
        audioSource.PlayOneShot(sound);

        GameControl.control._coins -= 100;
        _coinsText.text = GameControl.control._coins.ToString();
        GameControl.control.Save();
    }


}
