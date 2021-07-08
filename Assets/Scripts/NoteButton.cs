using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class NoteButton : Selectable, IPointerClickHandler
{
    public Sprite on_image;
    public Sprite off_image;
    private bool active_;


    void Start()
    {
        active_ = false;
    }

    /*private void OnEnable()
    {
        GameEvents.OnSquareSelected += OnSquareSelected;
    }

    private void DisEnable()
    {
        GameEvents.OnSquareSelected -= OnSquareSelected;
    }
    */

    public void OnPointerClick(PointerEventData eventData)
    {
        HandleChange();   
    }

    public void OnAd()
    {
        if (active_ == true) HandleChange();
    }

    private void HandleChange()
    {
        active_ = !active_;

        if (active_)
            GetComponent<Image>().sprite = on_image;
        else
            GetComponent<Image>().sprite = off_image;

        GameEvents.OnNotesActiveMethod(active_);
        GameEvents.SquareSelectedMethod(-1);
    }

}
