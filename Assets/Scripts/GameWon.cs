using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameWon : MonoBehaviour
{
    public GameObject WinPopup;
    public Text ClockText;
    private int _winreward = 25;
    public AudioClip sound;
    public AudioSource audioSource;

    void Start()
    {
        WinPopup.SetActive(false);
    }

    private void OnBoardCompleted()
    {
        WinPopup.SetActive(true);
        ClockText.text = Clock.instance.GetCurrentTimeText().text;
        
        audioSource.PlayOneShot(sound);
        
        GameControl.control.Load(); 
        GameControl.control._coins += _winreward;
        GameControl.control.Save();
    }

    private void OnEnable()
    {
        GameEvents.OnBoardCompleted += OnBoardCompleted;
    }

    private void OnDisable()
    {
        GameEvents.OnBoardCompleted -= OnBoardCompleted;
    }
}
