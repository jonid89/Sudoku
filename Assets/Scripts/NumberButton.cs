using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;
using UnityEngine.EventSystems;


public class NumberButton : Selectable, IPointerClickHandler, ISubmitHandler, IPointerUpHandler, IPointerExitHandler
{
    public int value = 0;
    private Sprite[] spriteArray;
    public AudioClip sound;
    public AudioSource audioSource;


    void Start()
    {
        spriteArray = Symbols.Instance.GetSpriteArray();
        this.image.sprite = spriteArray[value-1];
    }


    public void OnPointerClick(PointerEventData eventData)
    {
        audioSource.PlayOneShot(sound);
        GameEvents.UpdateSquareNumberMethod(value);
        GameEvents.OnSaveOrResetMethod();
    }

    public void OnSubmit(BaseEventData eventData)
    {

    }



}
