using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Symbols : MonoBehaviour
{
    private string current_symbols;
    private string _toUnlock;
    private Sprite chosenImage;
    
    public Image confirmationImage;

    public GameObject Selected;
    
    public static Symbols Instance;
    public List<string> unlockedSymbols;
    public GameObject currency;
    public GameObject unlockSymbolPopUp;
    public GameObject menuButtons;
    public GameObject symbolsButtons;

    public Sprite[] spriteArray;
    public Sprite[] normalNumbers;
    public Sprite[] romanNumbers;
    public Sprite[] letters;
    public Sprite[] arabicNumbers;
    public Sprite[] shapes;
    public Sprite[] sports;
    public Sprite[] flowers;
    public Sprite[] plants;
    public Sprite[] foods;
    public Sprite[] instruments;
    public Sprite[] vehicles;
    public Sprite[] animals;
    public Sprite[] flags;
    public Sprite[] tools;
    public Sprite[] planets;
    public Sprite[] professions;



    private void Awake()
    {
        if (Instance == null)
            Instance = this;
        else
            Destroy(this);

        spriteArray = normalNumbers;
    }

    public void LoadSymbols()
    {
        GameControl.control.Load();
        unlockedSymbols = GameControl.control._symbols;
        SetUnlockedSymbols();
    }




    public Sprite[] GetSpriteArray()
    {
        return spriteArray;
    }

    public string GetSymbolsName()
    {
        return current_symbols;  
    }

    public void SetUnlockedSymbols()
    {
        if (!unlockedSymbols.Contains("NormalNumbers")) unlockedSymbols.Add("NormalNumbers");
        
        foreach (string symbol in unlockedSymbols)
        {
            GameObject symbolObj = GameObject.Find(symbol);
            
            symbolObj.GetComponent<Image>().color = new Color32(255,255,255,255);

            if (current_symbols == symbol) Selected.transform.position = symbolObj.transform.position;
        }
    }





    public void HandleClick(string symbols)
    {
        if (unlockedSymbols.Contains(symbols))
        {
            SetSymbols(symbols);
            symbolsButtons.SetActive(false);
            menuButtons.SetActive(true);
        }
        else
        {
            _toUnlock = symbols;
            unlockSymbolPopUp.transform.GetChild(1).gameObject.GetComponent<Text>().text = "Do you want to unlock this symbol for 100 coins?";

            chosenImage = GameObject.Find(_toUnlock).GetComponent<Image>().sprite;
            confirmationImage.sprite = chosenImage;
                   

            unlockSymbolPopUp.SetActive(true);
        }
    }

    public void ConfirmUnlock()
    {
        if (GameControl.control._coins >= 100)
        {
            currency.GetComponent<Currency>().BuySymbol();
            
            unlockedSymbols.Add(_toUnlock);
            unlockSymbolPopUp.SetActive(false);
            
            GameControl.control._symbols = unlockedSymbols;
            GameControl.control.Save();
            
            SetSymbols(_toUnlock);
            SetUnlockedSymbols();
        }
        else
        {
            unlockSymbolPopUp.transform.GetChild(1).gameObject.GetComponent<Text>().text = "You don't have enough coins.";
        }

    }


    public void SetSymbols(string symbols)
    {
        current_symbols = symbols;

        switch (symbols)
        {
            case "NormalNumbers":
                spriteArray = normalNumbers;
                break;
            case "RomanNumbers":
                spriteArray = romanNumbers;
                break;
            case "Letters":
                spriteArray = letters;
                break;
            case "ArabicNumbers":
                spriteArray = arabicNumbers;
                break;
            case "Shapes":
                spriteArray = shapes;
                break;
            case "Sports":
                spriteArray = sports;
                break;
            case "Flowers":
                spriteArray = flowers;
                break;
            case "Plants":
                spriteArray = plants;
                break;
            case "Foods":
                spriteArray = foods;
                break;
            case "Instruments":
                spriteArray = instruments;
                break;
            case "Vehicles":
                spriteArray = vehicles;
                break;
            case "Animals":
                spriteArray = animals;
                break;
            case "Flags":
                spriteArray = flags;
                break;
            case "Tools":
                spriteArray = tools;
                break;
            case "Planets":
                spriteArray = planets;
                break;
            case "Professions":
                spriteArray = professions;
                break;
        }
    }

}
