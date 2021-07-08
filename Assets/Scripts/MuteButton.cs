using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class MuteButton : Selectable, IPointerClickHandler
{
    public Sprite mute_image;
    public Sprite unmute_image;
   
    public AudioClip sound;
    public AudioSource audioSource;
    public AudioListener audioListener;
    
    private bool _mute;


    void Start()
    {
        GameControl.control.Load();
        _mute = GameControl.control._mute;

        if (_mute)
        {
            GetComponent<Image>().sprite = unmute_image;
            audioSource.volume = 0;
        }
        else
        {
            GetComponent<Image>().sprite = mute_image;
            audioSource.volume = 1;
        }
    }


    public void OnPointerClick(PointerEventData eventData)
    {
        HandleClick();
    }

    private void HandleClick()
    {
        _mute = !_mute;

        if (_mute)
        {
            GetComponent<Image>().sprite = unmute_image;
            audioSource.volume = 0;
        }
        else
        {
            GetComponent<Image>().sprite = mute_image;
            audioSource.volume = 1;
            audioSource.PlayOneShot(sound);
        }


        GameControl.control._mute = _mute;
        GameControl.control.Save();

    }
}
