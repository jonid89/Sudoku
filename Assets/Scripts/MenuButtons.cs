﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuButtons : MonoBehaviour
{
    public GameObject newGamePopUp;
    public GameObject menuButtons;
    public GameObject setGamePanel;

    public void LoadScene(string name)
    {
        SceneManager.LoadScene(name);
    }

    public void LoadEasyGame(string name)
    {
        GameSettings.Instance.SetGameMode(GameSettings.EGameMode.EASY);
        SceneManager.LoadScene(name);
    }

    public void LoadMediumGame(string name)
    {
        GameSettings.Instance.SetGameMode(GameSettings.EGameMode.MEDIUM);
        SceneManager.LoadScene(name);
    }

    public void LoadHardGame(string name)
    {
        GameSettings.Instance.SetGameMode(GameSettings.EGameMode.HARD);
        SceneManager.LoadScene(name);
    }

    public void LoadVeryHardGame(string name)
    {
        GameSettings.Instance.SetGameMode(GameSettings.EGameMode.VERY_HARD);
        SceneManager.LoadScene(name);
    }

    public void ActivateObject(GameObject obj)
    {
        obj.SetActive(true);
    }

    public void DeActivateObject(GameObject obj)
    {
        obj.SetActive(false);
    }

    public void SetPause(bool paused)
    {
        GameSettings.Instance.SetPaused(paused);
    }

    public void ContinuePreviousGame(bool continue_game)
    {
        GameSettings.Instance.SetContinuePreviousGame(continue_game);
    }

    public void NewGameHandle()
    {
        if (Config.GameDataFileExist())
        {
            ActivateObject(newGamePopUp);
        }
        else
        {
            DeActivateObject(menuButtons);
            ActivateObject(setGamePanel);
        }

    }

    public void ExitAfterWon()
    {
        GameSettings.Instance.SetExitAfterWon(true);
    }

    public void ExitWithContinue()
    {
        GameSettings.Instance.SetExitAfterWon(false);
    }

    public void ContinueAfterGameOver()
    {
        AdManager.Instance.ShowInterstitialAd();
        Lives.instance.ResetLives();
    }

}
