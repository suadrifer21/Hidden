using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SocialPlatforms.GameCenter;
using UnityEngine.SocialPlatforms;
using GooglePlayGames;
using GooglePlayGames.BasicApi;
using UnityEngine.UI;

public class GameCenter : MonoBehaviour {

	// H I L A N G I N
	public Text authStatus;
	public string userInfo;

	public GameObject loginButton;
	public GameObject logoutButton;

	// Use this for initialization
	void Start () {
		
	#if UNITY_IOS
		Social.localUser.Authenticate(success => {
			if(success){
				Debug.Log ("Authentication successful");
				userInfo = "Username: " + Social.localUser.userName + 
					"\nUser ID: " + Social.localUser.id + 
					"\nIsUnderage: " + Social.localUser.underage;
				Debug.Log (userInfo);
			}
			else
				Debug.Log ("Authentication failed");
		});
	#endif
	
		#if UNITY_ANDROID
		// Try silent sign-in (second parameter is isSilent)
		PlayGamesPlatform.Instance.Authenticate(SignInCallback, true);

		// ADD Play Game Services init code here.

		// Create client configuration
		PlayGamesClientConfiguration config = new 
			PlayGamesClientConfiguration.Builder()
			.Build();

		// Enable debugging output (recommended)
		PlayGamesPlatform.DebugLogEnabled = true;

		// Initialize and activate the platform
		PlayGamesPlatform.InitializeInstance(config);
		PlayGamesPlatform.Activate();


		#endif

		if (!Social.localUser.authenticated) {
			loginButton.SetActive(true);
			logoutButton.SetActive(false);
		} else {
			loginButton.SetActive(false);
			logoutButton.SetActive(true);
		}
	}

	public void LogIn() {
		#if UNITY_IOS
		Social.localUser.Authenticate(success => {
			if(success){
				//authStatus.text = Social.localUser.userName;
				loginButton.SetActive(false);
				logoutButton.SetActive(true);
			}
			else{
				//authStatus.text = "Authentication failed";
				//Debug.Log ("Authentication failed");
			}
		});
		#endif

		#if UNITY_ANDROID
		if (!PlayGamesPlatform.Instance.localUser.authenticated) {
			// Sign in with Play Game Services, showing the consent dialog
			// by setting the second parameter to isSilent=false.
			PlayGamesPlatform.Instance.Authenticate (SignInCallback, false);
		} else {
//			// Sign out of play games
//			PlayGamesPlatform.Instance.SignOut ();
//
//			// Reset UI
//			//signInButtonText.text = "Sign In";
//			//authStatus.text = "";
		}
		#endif


	

	}

	public void LogOut() {
		#if UNITY_ANDROID
		if (PlayGamesPlatform.Instance.localUser.authenticated) {
			// Sign out of play games
			PlayGamesPlatform.Instance.SignOut ();
			loginButton.SetActive(true);
			logoutButton.SetActive(false);


			authStatus.text = "";}
		#endif
	}

	public void SignInCallback(bool success) {
		if (success) {
			Debug.Log("(Lollygagger) Signed in!");

			// Change sign-in button text
			//signInButtonText.text = "Sign out";

			// Show the user's name
			authStatus.text = "Signed in as: " + Social.localUser.userName;
			loginButton.SetActive(false);
			logoutButton.SetActive(true);
		} else {
			Debug.Log("(Lollygagger) Sign-in failed...");

			// Show failure message
			//signInButtonText.text = "Sign in";
			//authStatus.text = "Sign-in failed";
		}
	}


}
