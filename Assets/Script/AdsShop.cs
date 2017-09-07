﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;

public class AdsShop : MonoBehaviour {
	public static AdsShop instance;

	private string appleStoreId = "1327329";
	private string googlePlayStoreId  = "1327328";
	private string gameId;

	float cooldown = 60;
	float remainingCooldown;

	public GameObject viewAdsButton;



	void Awake(){
		if (!instance)
			instance = this;
	}

	// Use this for initialization
	void Start () {
	#if UNITY_ANDROID
		gameId = googlePlayStoreId;
	#endif
	#if UNITY_IOS
		gameId = appleStoreId;
	#endif
		// true = test mode
		Advertisement.Initialize (gameId, true);

		CheckAdsButton ();

	}

	public void ShowAd(){
		if (Advertisement.IsReady ()) {
			Advertisement.Show();
		}
	}

	public void ShowRewardedAd(){
		bool b = IsReady ();
		//print (b);

		if (b) {
			if (Advertisement.IsReady ("rewardedVideo")) {
				var options = new ShowOptions{ resultCallback = HandleShowResult};
				Advertisement.Show("rewardedVideo", options);
			}


			if (Menu.instance != null) {
				Menu.instance.isGameOn = false;
			}

			if (Sound.instance != null){
				Sound.instance.PauseLoopingMusic ();
			}
		}
	}

	//public GameObject
	private void HandleShowResult(ShowResult result)
	{
		switch (result) {
		case ShowResult.Finished:
			Debug.Log ("The ad was successfully shown.");
			//
			// YOUR CODE TO REWARD THE GAMER
			// Give coins etc.


			print ("dpt energy");
			CheckAdsButton ();

			remainingCooldown = Time.time + cooldown;
			break;
		case ShowResult.Skipped:
			Debug.Log ("The ad was skipped before reaching the end.");
			break;
		case ShowResult.Failed:
			Debug.LogError ("The ad failed to be shown.");
			break;
		}

		if (Menu.instance != null) {
			Menu.instance.isGameOn = true;
		}

		if (Sound.instance != null){
			Sound.instance.ResumeLoopingMusic();
		}
	}

	// Update is called once per frame
	void Update () {
//		print ("a");
//		if (!Advertisement.IsReady ()) {
//			print ("b");
//			viewAdsButton.SetActive (false);
//		} else {
//			print ("c");
//			viewAdsButton.SetActive (true);
//		}
	}

	public bool IsReady (){
		if (Advertisement.IsReady ("rewardedVideo")) {
			if (Time.time > remainingCooldown) {
				return true;
			} else {
				return false;
			}
		} else {
			return false;
		}

			
	}
	public void CheckAdsButton(){
		print ("a");
		if (!Advertisement.IsReady ()) {
			print ("b");
			viewAdsButton.SetActive (false);
		} else {
			print ("c");
			viewAdsButton.SetActive (true);
		}

	}
}