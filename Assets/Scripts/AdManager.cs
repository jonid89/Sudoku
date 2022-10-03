using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GoogleMobileAds.Api;
using System;

public class AdManager : MonoBehaviour
{
    public string AppID;
    public string BanerAdId;
    public string InterstitialAdId;
    public string RewardedAdsId;
    public AdPosition BanePosition;
    public bool TestDevice = false;

    public static AdManager Instance;

    private BannerView _baneView;
    private InterstitialAd _interstitial;
    private RewardedAd hintRewardedAd;
    private RewardedAd coinRewardedAd;

    public void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(this);
        }
        else
        {
            Destroy(this);
        }
    }

    void Start()
    {
        //MobileAds.Initialize(AppID);
        MobileAds.Initialize(initStatus => { });

        this.CreateBaner(CreateRequest());
        this.CreateInterstitialAd(CreateRequest());
        this.CreateHintRewardedAd(CreateRequest());
        this.CreateCoinRewardedAd(CreateRequest());

    }

    
    private void OnDestroy()
    {
        if (hintRewardedAd != null)
        {
            hintRewardedAd.OnUserEarnedReward -= OnUserEarnedHintReward;
        }

        if (coinRewardedAd != null)
        {
            coinRewardedAd.OnUserEarnedReward -= OnUserEarnedCoinReward;
        }
    }
    

    private AdRequest CreateRequest()
    {
        AdRequest request;

        /*if (TestDevice)
            request = new AdRequest.Builder().AddTestDevice(SystemInfo.deviceUniqueIdentifier).Build();
        else*/
            request = new AdRequest.Builder().Build();

        return request;
    }

    public bool IsRewardedAdLoaded()
    {
        return (this.hintRewardedAd.IsLoaded() || (this.coinRewardedAd.IsLoaded()));
    }


    #region HintRewardedAd
    private void OnUserEarnedHintReward(object sender, Reward e)
    {
        GameEvents.OnGiveAHintMethod();
    }

    public void CreateHintRewardedAd(AdRequest request)
    {
        this.hintRewardedAd = new RewardedAd(RewardedAdsId);
        this.hintRewardedAd.LoadAd(request);
        hintRewardedAd.OnUserEarnedReward += OnUserEarnedHintReward;
    }

    public void ShowHintRewardedAd()
    {
        if (this.hintRewardedAd.IsLoaded())
        {
            this.hintRewardedAd.Show();
        }
        this.CreateHintRewardedAd(CreateRequest());
    }
    #endregion

    
    #region CoinRewardedAd
    private void OnUserEarnedCoinReward(object sender, Reward e)
    {
        GameEvents.OnGiveCoinsMethod();
    }

    public void CreateCoinRewardedAd(AdRequest request)
    {
        this.coinRewardedAd = new RewardedAd(RewardedAdsId);
        this.coinRewardedAd.LoadAd(request);
        coinRewardedAd.OnUserEarnedReward += OnUserEarnedCoinReward;
    }

    public void ShowCoinRewardedAd()
    {
        if (this.coinRewardedAd.IsLoaded())
        {
            this.coinRewardedAd.Show();
        }
        this.CreateCoinRewardedAd(CreateRequest());     
    }

    #endregion
    


    #region InterstitialAd
    public void CreateInterstitialAd(AdRequest request)
    {
        this._interstitial = new InterstitialAd(InterstitialAdId);
        this._interstitial.LoadAd(request);
    }

    public void ShowInterstitialAd()
    {
        if(this._interstitial.IsLoaded())
        {
            this._interstitial.Show();
        }

        this.CreateInterstitialAd(CreateRequest());
    }

    #endregion


    #region BanerAd
    public void CreateBaner(AdRequest request)
    {
        this._baneView = new BannerView(BanerAdId, AdSize.SmartBanner, BanePosition);
        this._baneView.LoadAd(request);
        HideBaner();
    }

    public void HideBaner()
    {
        _baneView.Hide();
    }

    public void ShowBaner()
    {
        _baneView.Show();
    }

    #endregion

}
