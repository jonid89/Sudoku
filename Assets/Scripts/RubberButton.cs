using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class RubberButton : Selectable, IPointerClickHandler
{
    public AudioClip sound;
    public AudioSource audioSource;

    public void OnPointerClick(PointerEventData eventData)
    {
        audioSource.PlayOneShot(sound);
        GameEvents.OnClearNumberMethod();
        GameEvents.OnSaveOrResetMethod();
    }


    
}
