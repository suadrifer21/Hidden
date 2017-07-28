using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SocialPlatforms.GameCenter;
using UnityEngine.SocialPlatforms;
using UnityEngine.UI;
using GooglePlayGames;
using GooglePlayGames.BasicApi;
using GooglePlayGames.BasicApi.SavedGame;
using System;


public class SocialPlatformManager : MonoBehaviour {

	public static SocialPlatformManager instance;

	void Awake(){
		if (!instance) {
			instance = this;
			DontDestroyOnLoad (gameObject);
		} 
		else
			Destroy (gameObject);
	}

	public void ArrangeButton(){
		if (loginButton != null && logoutButton != null && leadButton != null) {
			//			if (!PlayGamesPlatform.Instance.localUser.authenticated) {
			if(!Social.localUser.authenticated){
				loginButton.SetActive(true);
				logoutButton.SetActive(false);
				leadButton.SetActive(false);
			} else {
				loginButton.SetActive(false);
				leadButton.SetActive(true);
				#if UNITY_ANDROID
				logoutButton.SetActive(true);
				#endif
			}
		}
	}

	public GameObject loginButton;
	public GameObject logoutButton;
	public GameObject leadButton;


#if UNITY_ANDROID

	//bool userSignedIn = false;
	ISavedGameMetadata currentGame = null;

	void Start () {

		PlayGamesClientConfiguration config = new PlayGamesClientConfiguration.Builder ()
		.EnableSavedGames ()
		.Build ();



		PlayGamesPlatform.InitializeInstance (config);
		PlayGamesPlatform.DebugLogEnabled = true;
		PlayGamesPlatform.Activate ();

//		if (!PlayGamesPlatform.Instance.localUser.authenticated) {
//			loginButton.SetActive(true);
//			logoutButton.SetActive(false);
//		} else {
//			loginButton.SetActive(false);
//			logoutButton.SetActive(true);
//		}
	}
//
//	public void ArrangeButton(){
//		if (loginButton != null && logoutButton != null && leadButton != null) {
//			//			if (!PlayGamesPlatform.Instance.localUser.authenticated) {
//			if(!Social.localUser.authenticated){
//				loginButton.SetActive(true);
//				logoutButton.SetActive(false);
//				leadButton.SetActive(false);
//			} else {
//				loginButton.SetActive(false);
//				logoutButton.SetActive(true);
//				leadButton.SetActive(true);
//			}
//		}
//	}
//
//	public GameObject loginButton;
//	public GameObject logoutButton;
//	public GameObject leadButton;


	void Update() {
//		if(loginButton != null && logoutButton != null){
//			if (!PlayGamesPlatform.Instance.localUser.authenticated) {
////			if(!Social.localUser.authenticated){
//				loginButton.SetActive(true);
//				logoutButton.SetActive(false);
//			} else {
//				loginButton.SetActive(false);
//				logoutButton.SetActive(true);
//			}
//		}

//		Debug.Log (Social.localUser.authenticated +"  "+ PlayGamesPlatform.Instance.localUser.authenticated);
//
//		if (Social.localUser.authenticated){
//			Debug.Log (Social.Active.localUser.userName);
//		}
	}


	// Sign in the user
	public void SignInUser () {

		if (!PlayGamesPlatform.Instance.localUser.authenticated)

			try{

			PlayGamesPlatform.Instance.Authenticate (CallbackSignInUser);

			} catch(Exception e){
			
//				t1.text = e.Message;
			}
//		else
//			t1.text = "udah login";
	}

	public void SignOut () {
		if (PlayGamesPlatform.Instance.localUser.authenticated) {





			   // 	J A N G A N   L U P A   S A V E /////////////////////////////////////////




			//s a v e
			try{
				print("save");
				SaveGame();
			}catch(System.Exception e){
				Debug.Log (e.Message);
			}

//			SaveGame();

			// Sign out of play games
			PlayGamesPlatform.Instance.SignOut ();
			loginButton.SetActive (true);
			logoutButton.SetActive (false);
			leadButton.SetActive (false);


//			t1.text = "Signed out";
		} else {
//			t1.text = "fail to sign out ";

		}
	}

//	public Text t1;
//	public Text t2;
//	public Text t3;
//
	// The sign in callback
	void CallbackSignInUser (bool success) {

		if (success) {
			//userSignedIn = true;
//			print (Social.localUser.userName);
//			t1.text = PlayGamesPlatform.Instance.localUser.userName;
			loginButton.SetActive(false);
			logoutButton.SetActive(true);
			leadButton.SetActive (true);


			//LOAD
			try{
				LoadGame();
			} catch(Exception e){
				
			}




		} else {
//			t2.text = "gagal";
			//PlayGamesPlatform.Instance.SignOut ();
			//t1.text = "sign out";
		}
	}

	// Read the save game
	void ReadSaveGame (string filename, Action<SavedGameRequestStatus, ISavedGameMetadata> callback) {

		// Check if signed in
		if (PlayGamesPlatform.Instance.localUser.authenticated) {
//			print ("6");
			ISavedGameClient savedGameClient = PlayGamesPlatform.Instance.SavedGame;
			 
			savedGameClient.OpenWithAutomaticConflictResolution (filename,
				DataSource.ReadCacheOrNetwork,
				ConflictResolutionStrategy.UseLongestPlaytime,
//				ConflictResolutionStrategy.UseOriginal,
				callback);
		}
	}

	// Write the save game
	void WriteSaveGame (ISavedGameMetadata game, byte [] savedData, Action<SavedGameRequestStatus, ISavedGameMetadata> callback) {

		// Check if signed in
		if (PlayGamesPlatform.Instance.localUser.authenticated) {

			SavedGameMetadataUpdate updatedMetadata = new SavedGameMetadataUpdate.Builder ()
				.WithUpdatedPlayedTime (TimeSpan.FromMinutes (game.TotalTimePlayed.Minutes + 1))
				.WithUpdatedDescription ("Saved at: " + DateTime.Now)
				.Build ();

			ISavedGameClient savedGameClient = PlayGamesPlatform.Instance.SavedGame;
			savedGameClient.CommitUpdate (game, updatedMetadata, savedData, callback);


//			print ("write success");
//			t2.text = "write success";
//			SaveDataManager.instance.ToJSON ();
//			t2.text = t2.text + " " + SaveDataManager.instance.json;
		} else {
//			t2.text = "sign in first";
		}
	}

	// Save the game
	public void SaveGame () {
		//SaveDataManager.instance.ResolveDataConflict ();
		SaveDataManager.instance.ApplyPlayerPrefs ();

//		print ("1");

		// Check if signed in
		if (PlayGamesPlatform.Instance.localUser.authenticated) {
//			print ("2");
			// Save game callback
			Action<SavedGameRequestStatus, ISavedGameMetadata> writeCallback =
				(SavedGameRequestStatus status, ISavedGameMetadata game) => {

			};

			// Read binary callback
			Action<SavedGameRequestStatus, byte []> readBinaryCallback =
				(SavedGameRequestStatus status, byte [] data) => {

			};

			// Read game callback
			Action<SavedGameRequestStatus, ISavedGameMetadata> readCallback =
				(SavedGameRequestStatus status, ISavedGameMetadata game) => {

				// Check if read was successful
				if (status == SavedGameRequestStatus.Success) {
//					print ("3");
					currentGame = game;
					PlayGamesPlatform.Instance.SavedGame.ReadBinaryData (game, readBinaryCallback);
				}
			};

			// Create new save data
			//			SaveData saveData = new SaveData {
			//
			//				// These values are hard coded for the purpose of this tutorial.
			//				// Normally, you would replace these values with whatever you want to save.
			//				playerName   = "Borris",
			//				playerHealth = 72.5f,
			//				playerScore  = 99245
			//			};




			// Replace "MySaveGame" with whatever you would like to save file to be called
			//for TEST
//			try{ReadSaveGame ("MySaveGameTest2", readCallback);}

			//for  R E A L   S  A  V  E
//			try{ReadSaveGame ("SaveGameProgress", readCallback);}
//			catch(Exception e){
////				t2.text = e.Message;
//				print ("5");
//				print (e.Message);
//			}
//			try{
//				WriteSaveGame (currentGame, SaveDataManager.ToBytes (SaveDataManager.instance.internalPlayerSavedData), writeCallback);
//			} catch(Exception e){
//				print ("55");
//				print (e.Message);
//			}


			ReadSaveGame ("SaveGameProgress", readCallback);
			WriteSaveGame (currentGame, SaveDataManager.ToBytes (SaveDataManager.instance.internalPlayerSavedData), writeCallback);
		} //else
//			t2.text = "sign in first";
	}

	// Load the game
	public void LoadGame () {

//		print ("load");
		// Check if signed in
		if (PlayGamesPlatform.Instance.localUser.authenticated) {


//			print ("auth");
			// Read binary callback
			Action<SavedGameRequestStatus, byte[]> readBinaryCallback =
				(SavedGameRequestStatus status, byte[] data) => {

//					print (status + " " + SavedGameRequestStatus.Success);

					// Check if read was successful
					if (status == SavedGameRequestStatus.Success) {

						// Load game data
//						try {
//							print ("7");

							//SaveData saveData = SaveData.FromBytes (data);

							SaveDataManager.instance.cloudPlayerSavedData = SaveDataManager.FromBytes (data);
							SaveDataManager.instance.ResolveDataConflict ();
							SaveDataManager.instance.ToJSON ();
//							print (SaveDataManager.instance.json);
//						t1.text = SaveDataManager.instance.json;
//							t3.text = SaveDataManager.instance.json; 
							
							//	SaveDataManager.instance.OverridePlayerPrefs();

							//
							//						// We are displaying these values for the purpose of the tutorial.
							//						// Normally you would set the values here.
							//						Debug.Log ("Player name = " + saveData.playerName);
							//						Debug.Log ("Player health = " + saveData.playerHealth);
							//						Debug.Log ("Player score = " + saveData.playerScore);
							//Debug.Log(saveData);
//						} catch (Exception e) {
//
//							print ("77"+e.Message);
////							Debug.LogError ("Failed to read binary data: " + e.ToString ());
////							t1.text = "Failed to read binary data: " + e.ToString ();
//						}
					} else {
//						print (status);
//						print (status + " " + SavedGameRequestStatus.Success);
					}
				};

			// Read game callback
			Action<SavedGameRequestStatus, ISavedGameMetadata> readCallback =
				(SavedGameRequestStatus status, ISavedGameMetadata game) => {

					// Check if read was successful
					if (status == SavedGameRequestStatus.Success) {

						currentGame = game;
						PlayGamesPlatform.Instance.SavedGame.ReadBinaryData (game, readBinaryCallback);
					}
				};

//			// Replace "MySaveGame" with whatever you would like to save file to be called
//			ReadSaveGame ("MySaveGameTest1", readCallback);


//			// for T E S T
//			try{ReadSaveGame ("MySaveGameTest3", readCallback);

			// for R E A L   S A V E
//			try {
//				ReadSaveGame ("SaveGameProgress", readCallback);
//			} catch (Exception e) {
////				t2.text = e.Message;	
//				print (e.Message);
//			}


			ReadSaveGame ("SaveGameProgress", readCallback);
		} else {
//			print ("blom auth");
		}
	}

	public void ShowLeaderboard () {
		Social.ShowLeaderboardUI();
	}



//	/////ha pusssss
//	public void DeleteSavedGame() {
//		string filename = "MySaveGameTest1";
//		ISavedGameClient savedGameClient = PlayGamesPlatform.Instance.SavedGame;
//		savedGameClient.OpenWithAutomaticConflictResolution(filename, DataSource.ReadCacheOrNetwork,
//			ConflictResolutionStrategy.UseLongestPlaytime, OnDeleteSavedGame);
//	}
//
//	public void OnDeleteSavedGame(SavedGameRequestStatus status, ISavedGameMetadata game) {
//		ISavedGameClient savedGameClient = PlayGamesPlatform.Instance.SavedGame;
//		if (status == SavedGameRequestStatus.Success) {
//			// delete the game.
//			savedGameClient.Delete(game);
//		} else {
//			// handle error
//		}
//	}
//
//
//
//	void Update() {
//		if(t1 != null){
//			t1.text = Social.localUser.userName;
//		}
//	}



	
#endif

#if UNITY_IOS
	public void SignInUser () {
		Social.localUser.Authenticate(success => {
		if(success){
				ArrangeButton();
		}
		else{
		//authStatus.text = "Authentication failed";
		//Debug.Log ("Authentication failed");
		}
		});
	}

	public void SignOut () {

	}

	public void ShowLeaderboard() {
		Social.ShowLeaderboardUI ();
	}
//	public void ArrangeButton(){
//		if (loginButton != null ) {
//	//			if (!PlayGamesPlatform.Instance.localUser.authenticated) {
//			if(!Social.localUser.authenticated){
//				loginButton.SetActive(true);
//				//logoutButton.SetActive(false);
//			} else {
//				loginButton.SetActive(false);
//			}
//		}
//	}
//
//	public GameObject loginButton;
//	//public GameObject logoutButton;

#endif



}



