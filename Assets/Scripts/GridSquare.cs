using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using System.Linq;
using UnityEngine.U2D;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;

public class GridSquare : Selectable, IPointerClickHandler, ISubmitHandler, IPointerUpHandler, IPointerExitHandler
{
    public GameObject number_text;
    public Image myImageComponent;
    public List<Image> notes_images;
    public Color on_wrong_color = Color.red;
    public Color hintColor = Color.blue;

    private Sprite[] spriteArray;
    
    private int[] number_notes;
    private bool note_active;
    private int number_ = 0;
    private int correct_number_ = 0;

    private bool selected_ = false;
    private int square_index_ = -1;
    private bool has_default_value_ = false;
    private bool has_wrong_value_ = false; 

    public int GetSquareNumber() { return number_; }
    public bool IsCorrectNumberSet() { return number_ == correct_number_; }

    public bool HasWrongValue() { return has_wrong_value_; }
    public void SetHasDefaultValue(bool has_default) { has_default_value_ = has_default;}
    public bool GetHasDefaultValue() { return has_default_value_;}


    public bool IsSelected() {return selected_; }
    public void SetSquareIndex(int index)
    {
        square_index_ = index;
    }

    public void SetCorrectNumber(int number)
    {
        correct_number_ = number;
        has_wrong_value_ = false;

        if(number_ != 0 && number_ != correct_number_)
        {
            has_wrong_value_ = true;
            SetSquareColour(on_wrong_color);
        }
    }

    public void SetCorrectNumber()
    {
        number_ = correct_number_;
        SetNoteNumberValue(0);
        //DisplayText();
        DisplayImage();
    }

    void Start()
    {
        number_notes = new int[9];
        selected_ = false;
        note_active = false;

        if (GameSettings.Instance.GetContinuePreviousGame() == false)
            SetNoteNumberValue(0);
        //else SetClearEmptyNotes();

    }


    public List<string> GetSquareNotes()
    {
        List<string> notes = new List<string>();

        for(int i=0; i < notes_images.Count; i++)
        {
            if (notes_images[i].enabled == true)
                notes.Add((i+1).ToString());
            else
                notes.Add("0");
        }
        return notes;
    }

    private void SetClearEmptyNotes()
    {
        foreach (var note in notes_images)
        {
            if (note.enabled == false)
                note.sprite = null;
        }
    }

    private void SetNoteNumberValue(int value)
    {
        for (int i = 0; i < number_notes.Length; i++)
        {
            if (value <= 0)
            {       //number.GetComponent<Text>().text = " ";
                number_notes[i] = 0;
                notes_images[i].enabled = false;
            }
            else
            //number.GetComponent<Text>().text = value.ToString();
            { 
                notes_images[i].enabled = true;
                number_notes[i] = value;
            }
        }
    }

    private void SetNoteSingleNumberValue(int value, bool force_update = false)
    {
        if (note_active == false && force_update == false)
            return;

        if (value <= 0)
        { 
            notes_images[value - 1].enabled = false;
            notes_images[value - 1].sprite = null; 
        }
        else
        {
            if (notes_images[value - 1].enabled == false || force_update)
            {
                notes_images[value - 1].enabled = true;
                spriteArray = Symbols.Instance.GetSpriteArray();
                notes_images[value - 1].sprite = spriteArray[value - 1];
            }
            else
                notes_images[value - 1].enabled = false;
        }
    }

    public void SetGridNotes (List<int> notes)
    {
        foreach (var note in notes)
        {
            SetNoteSingleNumberValue(note, force_update: true);
        }
    }

    public void OnNotesActive(bool active)
    {
        note_active = active;
    }

    public void DisplayText()
    {
        if (number_ <= 0)
            number_text.GetComponent<Text>().text = " ";
        else
            number_text.GetComponent<Text>().text = number_.ToString();

        if(has_default_value_)
        {
            number_text.GetComponent<Text>().fontStyle = FontStyle.Bold;
        }
    }

    public void SetNumber(int number)
    {
        number_ = number;
        //DisplayText();
        DisplayImage();
    }


    public void OnPointerClick(PointerEventData eventData)
    {
        selected_ = true;
        GameEvents.SquareSelectedMethod(square_index_);
    }

    public void OnSubmit(BaseEventData eventData)
    {

    }

    private void OnEnable()
    {
        GameEvents.OnUpdateSquareNumber += OnSetNumber;
        GameEvents.OnSquareSelected += OnSquareSelected;
        GameEvents.OnNotesActive += OnNotesActive;
        GameEvents.OnClearNumber += OnClearNumber;
        GameEvents.OnGameOver += OnGameOver;
    }

    private void OnDisable()
    {
        GameEvents.OnUpdateSquareNumber -= OnSetNumber;
        GameEvents.OnSquareSelected -= OnSquareSelected;
        GameEvents.OnNotesActive -= OnNotesActive;
        GameEvents.OnClearNumber -= OnClearNumber;
        GameEvents.OnGameOver -= OnGameOver;
    }

    private void OnGameOver()
    {
        //should be number_ == correct_number_ ??
        if(number_ != 0 && number_ != correct_number_)
        {
            has_wrong_value_ = false;
            SetSquareColour(Color.white);
            number_ = 0;
            DisplayImage();
        }
        SetSquareColour(Color.white);
    }

    public void OnClearNumber()
    {
        if(selected_ && !has_default_value_)
        {
            number_ = 0;
            has_wrong_value_ = false;
            SetSquareColour(Color.white);
            SetNoteNumberValue(0);
            DisplayImage();
        }
    }

    public void SetCorrectValueOnHint()
    {
        SetSquareNumber(correct_number_);
        SetSquareColour(hintColor);
        GameEvents.OnSaveOrResetMethod();
    }

    public void OnSetNumber(int number)
    {
        if (selected_ && has_default_value_ == false)
        {
            SetSquareNumber(number);
        }
    }

    private void SetSquareNumber(int number)
    {
        if (note_active == true && has_wrong_value_ == false)
        {
            SetNoteSingleNumberValue(number);
        }
        else if (note_active == false)
        {
            SetNoteNumberValue(0);
            SetNumber(number);

            if (number_ != correct_number_)
            {
                has_wrong_value_ = true;
                var colors = this.colors;
                colors.normalColor = on_wrong_color;
                this.colors = colors;

                GameEvents.OnWrongNumberMethod();
            }
            else
            {
                has_wrong_value_ = false;
                has_default_value_ = true;
                var colors = this.colors;
                colors.normalColor = Color.white;
                this.colors = colors;
            }
        }

        GameEvents.CheckBoardCompletedMethod();
    }

    public void OnSquareSelected(int square_index)
    {
        if(square_index_ != square_index)
        {
            selected_ = false;
        }
    }

    public void SetSquareColour(Color col)
    {
        var colors = this.colors;
        colors.normalColor = col;
        this.colors = colors;
    }

    
    public void DisplayImage()
    {
        if (number_ <= 0)
            myImageComponent.enabled = false;
        else
        {
            myImageComponent.enabled = true;
            spriteArray = Symbols.Instance.GetSpriteArray();
            myImageComponent.sprite = spriteArray[number_ - 1];
        }
    }

}
