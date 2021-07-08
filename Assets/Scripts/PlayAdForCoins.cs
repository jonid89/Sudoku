using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(Button))]
public class PlayAdForCoins : MonoBehaviour
{
    private Button button;

    void Start()
    {
        button = GetComponent<Button>();
        button.onClick.AddListener(OnButtonClicked);
        button.interactable = true;

    }


    private void OnButtonClicked()
    {
        /*if (Application.isEditor)
        {
            //GameEvents.OnGiveCoinsMethod();
            AdManager.Instance.ShowCoinRewardedAd();
        }
        else*/ 
        AdManager.Instance.ShowCoinRewardedAd();

    }

  
}
