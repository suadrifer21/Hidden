using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

using GooglePlayGames;
using GooglePlayGames.BasicApi;

public class SocialInterface : MonoBehaviour {
//	#if UNITY_ANDROID
//	public Text t1;
//	public Text t2;
//	public Text t3;
	public GameObject loginButton;
	public GameObject logoutButton;
	public GameObject leadButton;
	// Use this for initialization
	void Start () {
//		if(t1 != null){
//			SocialPlatformManager.instance.t1 = t1;
//		}
//		if(t2 != null){
//			SocialPlatformManager.instance.t2 = t2;
//		}
//		if(t3 != null){
//			SocialPlatformManager.instance.t3 = t3;
//		}
		if(loginButton != null){
			SocialPlatformManager.instance.loginButton = loginButton;
		}



		#if UNITY_ANDROID
		if(logoutButton != null){
			SocialPlatformManager.instance.logoutButton = logoutButton;
		}

		if(leadButton != null){
		SocialPlatformManager.instance.leadButton = leadButton;
		}
		#endif
		#if UNITY_IOS
		if(logoutButton != null){
			logoutButton.SetActive(false);
		}
		#endif

		SocialPlatformManager.instance.ArrangeButton ();

	}

	public void Login(){
		SocialPlatformManager.instance.SignInUser ();
	}

	public void Logout(){
		SocialPlatformManager.instance.SignOut ();
	}



	#if UNITY_ANDROID
	public void Save(){
		SocialPlatformManager.instance.SaveGame ();
	}
	public void ShowLeads() {
	SocialPlatformManager.instance.ShowLeaderboard ();
	}
	#endif

	// Update is called once per frame
	void Update () {
		
	}
//	#endif
}
