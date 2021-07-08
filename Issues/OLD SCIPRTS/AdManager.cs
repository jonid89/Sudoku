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
        this.CreateRewardedAd(CreateRequest());

        hintRewardedAd.OnUserEarnedReward += OnUserEarnedHintReward;
        hintRewardedAd.OnAdOpening += OnUserEarnedHintAdOpening;
    }

    private void OnDestroy()
    {
        hintRewardedAd.OnUserEarnedReward -= OnUserEarnedHintReward;
        hintRewardedAd.OnAdOpening -= OnUserEarnedHintAdOpening;
    }

    private void OnUserEarnedHintAdOpening(object sender, EventArgs e)
    {
        GameEvents.OnGiveAHintAdOpeningMethod();
    }

    private void OnUserEarnedHintReward(object sender, Reward e)
    {
        GameEvents.OnGiveAHintMethod();
    }

    private AdRequest CreateRequest()
    {
        AdRequest request;

        if (TestDevice)
            request = new AdRequest.Builder().AddTestDevice(SystemInfo.deviceUniqueIdentifier).Build();
        else
            request = new AdRequest.Builder().Build();

        return request;
    }

    #region RewardedAd

    public void CreateRewardedAd(AdRequest request)
    {
        this.hintRewardedAd = new RewardedAd(RewardedAdsId);
        this.hintRewardedAd.LoadAd(request);
    }

    public void ShowRewardedAd()
    {
        if (this.hintRewardedAd.IsLoaded())
        {
            this.hintRewardedAd.Show();
        }
    }

    public bool IsRewardedAdLoaded()
    {
        return this.hintRewardedAd.IsLoaded();
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

        this._interstitial.LoadAd(CreateRequest());
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
