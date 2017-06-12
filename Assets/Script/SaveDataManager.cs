using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Text;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;

public class SaveDataManager : MonoBehaviour {

	public static SaveDataManager instance;

	void Awake(){
		if (!instance) {
			instance = this;
			DontDestroyOnLoad (gameObject);
		} 
		else
			Destroy (gameObject);
	}

	//public PlayerSaveData playerData;

	public PlayerSaveData tempPlayerSavedData;
	public PlayerSaveData internalPlayerSavedData;
	public PlayerSaveData cloudPlayerSavedData;

	public string json;

	public List<Scene> sceneList = new List<Scene>();
	public List<Achievement> achievementList = new List<Achievement>();

	bool newPlayer;

	void Start () {
//		int j = 999;
//		playerData = new PlayerSaveData ();
//		for(int i = 0; i < sceneList.Count; i++){
//			j = PlayerPrefs.GetInt (sceneList[i].name, 0);
//			if (j == 1)
//				sceneList [i].isOpen = true;
//			else
//				sceneList [i].isOpen = false;
//			playerData.sceneList.Add (sceneList[i]);
//		}
//
//		for(int i = 0; i < achievementList.Count; i++){
//			j = PlayerPrefs.GetInt (achievementList[i].name, 0);
//			if (j == 1)
//				achievementList [i].isOpen = true;
//			else
//				achievementList [i].isOpen = false;
//			playerData.achievementList.Add (achievementList[i]);
//		}


		#if UNITY_ANDROID
		ApplyPlayerPrefs ();
		#endif

	}

	public void ToJSON () {
		//json = JsonUtility.ToJson (playerData);
		json = JsonUtility.ToJson (tempPlayerSavedData);
	}

	// Convert class instance to byte array
	public static byte [] ToBytes (PlayerSaveData data) {

		var formatter = new BinaryFormatter ();

		using (var stream = new MemoryStream ()) {

			formatter.Serialize (stream, data);
			return stream.ToArray ();
		}
	}

	// Convert byte array to class instance
	public static PlayerSaveData FromBytes (byte [] data) {

		using (var stream = new MemoryStream ()) {

			var formatter = new BinaryFormatter ();
			stream.Write (data, 0, data.Length);
			stream.Seek (0, SeekOrigin.Begin);

			PlayerSaveData block = (PlayerSaveData) formatter.Deserialize (stream);
			return block;
		}
	}

	//public UnityEngine.UI.Text t2;

//	public void OverridePlayerPrefs () {
//
//		//t2.text = "override";
//
//		int j = 999;
//		for(int i = 0; i < playerData.sceneList.Count; i++){
//			if (playerData.sceneList [i].isOpen)
//				j = 1;
//			else
//				j = 0;
//
//			PlayerPrefs.SetInt (playerData.sceneList [i].name, j);
//
//		}
//
//		for(int i = 0; i < playerData.achievementList.Count; i++){
//			if (playerData.achievementList [i].isOpen)
//				j = 1;
//			else
//				j = 0;
//
//			PlayerPrefs.SetInt (playerData.achievementList [i].name, j);
//		}
//	}

	public void ApplyPlayerPrefs () {
		int isNew = PlayerPrefs.GetInt ("NewPlayer", 1);
		if (isNew == 1)
			newPlayer = true;
		else
			newPlayer = false;
		//t2.text = "apply";

		int j = 999;
		//playerData = new PlayerSaveData ();
		internalPlayerSavedData = new PlayerSaveData () ;
		for(int i = 0; i < sceneList.Count; i++){
			j = PlayerPrefs.GetInt (sceneList[i].name, 0);
			if (j == 1)
				sceneList [i].isOpen = true;
			else
				sceneList [i].isOpen = false;
			//playerData.sceneList.Add (sceneList[i]);
			internalPlayerSavedData.sceneList.Add (sceneList[i]);
		}

		for(int i = 0; i < achievementList.Count; i++){
			j = PlayerPrefs.GetInt (achievementList[i].name, 0);
			if (j == 1)
				achievementList [i].isOpen = true;
			else
				achievementList [i].isOpen = false;
			//playerData.achievementList.Add (achievementList[i]);
			internalPlayerSavedData.achievementList.Add (achievementList[i]);
		}


		internalPlayerSavedData.energy = PlayerPrefs.GetInt("Energy", EnergySystem.instance.maxEnergy);
		internalPlayerSavedData.coin = PlayerPrefs.GetInt("Coin", 0);
		print (internalPlayerSavedData.coin);

		for (int i = 0; i <= EnergySystem.instance.maxEnergy+1; i++) {
			string z = PlayerPrefs.GetString ("EnergyTime" + (i), "empty");
				
			internalPlayerSavedData.energyTimeList.Add (z);
		}

		internalPlayerSavedData.newPlayer = newPlayer;

//		print ("apply");
//		print (internalPlayerSavedData.sceneList[2].name+" "+internalPlayerSavedData.sceneList[2].isOpen);

	}

	public void ResolveDataConflict () {

//		json = JsonUtility.ToJson (internalPlayerSavedData);
//		print (json);
//		json = JsonUtility.ToJson (cloudPlayerSavedData);
//		print (json);

		tempPlayerSavedData = new PlayerSaveData ();

		for(int i = 0; i < cloudPlayerSavedData.sceneList.Count; i++){

			tempPlayerSavedData.sceneList.Add (internalPlayerSavedData.sceneList[i]);

			if(cloudPlayerSavedData.sceneList [i].isOpen || internalPlayerSavedData.sceneList[i].isOpen){
				tempPlayerSavedData.sceneList [i].isOpen = true;
				cloudPlayerSavedData.sceneList [i].isOpen = true;
				internalPlayerSavedData.sceneList [i].isOpen = true;

				PlayerPrefs.SetInt (internalPlayerSavedData.sceneList [i].name, 1);
			}
		}

		for(int i = 0; i < cloudPlayerSavedData.achievementList.Count; i++){

			tempPlayerSavedData.achievementList.Add (internalPlayerSavedData.achievementList[i]);

			if(cloudPlayerSavedData.achievementList [i].isOpen || internalPlayerSavedData.achievementList[i].isOpen){
				tempPlayerSavedData.achievementList [i].isOpen = true;
				cloudPlayerSavedData.achievementList [i].isOpen = true;
				internalPlayerSavedData.achievementList [i].isOpen = true;

				PlayerPrefs.SetInt (internalPlayerSavedData.achievementList [i].name, 1);
			}
		}


		print ("c :"+cloudPlayerSavedData.coin);
		print(cloudPlayerSavedData.newPlayer);
		if (cloudPlayerSavedData.newPlayer == true || (cloudPlayerSavedData.newPlayer == false && internalPlayerSavedData.newPlayer == true)) 
			internalPlayerSavedData.coin += cloudPlayerSavedData.coin;
		
			
		newPlayer = false;
		internalPlayerSavedData.newPlayer = false;
		PlayerPrefs.SetInt ("NewPlayer", 0);

//		string x = "empty";
//
//		if(cloudPlayerSavedData.energyTimeList.Count > 1){
//			for(int i = 1; i< cloudPlayerSavedData.energyTimeList.Count; i++){
//				if (cloudPlayerSavedData.energyTimeList [i] != "empty")
//					x = cloudPlayerSavedData.energyTimeList [i];
//			}
//		}
//
//		DateTime cloudDate = DateTime.Now;
//		if (x != "empty") {
//			x = x.Replace('_', ':');
//			x = x.Replace('-', '/');
//			cloudDate = Convert.ToDateTime(x);
//		}
//
//
//		string y = "empty";
//
//		if(internalPlayerSavedData.energyTimeList.Count > 1){
//			for(int i = 1; i< internalPlayerSavedData.energyTimeList.Count; i++){
//				if (internalPlayerSavedData.energyTimeList [i] != "empty")
//					y = internalPlayerSavedData.energyTimeList [i];
//			}
//		}
//
//		DateTime internalDate = DateTime.Now;
//		if (y != "empty") {
//			y = y.Replace('_', ':');
//			y = y.Replace('-', '/');
//			internalDate= Convert.ToDateTime(x);
//		}
//
//		print(cloudPlayerSavedData.energy);
//		print(cloudPlayerSavedData.coin);
//		print (x);
//		print (y);
//		if (x != "empty" && y == "empty") {
//			internalPlayerSavedData.energy = cloudPlayerSavedData.energy;
//			internalPlayerSavedData.coin = cloudPlayerSavedData.coin;
//
//			internalPlayerSavedData.energyTimeList.Clear ();
//			for(int i =0; i < cloudPlayerSavedData.energyTimeList.Count; i++){
//				internalPlayerSavedData.energyTimeList.Add (cloudPlayerSavedData.energyTimeList[i]);
//				PlayerPrefs.SetString ("EnergyTime" + i, cloudPlayerSavedData.energyTimeList[i]);
//			}
//		} else if(x != "empty" && y != "empty") {
//
//			if (cloudDate.CompareTo (internalDate) > 0) {
//				internalPlayerSavedData.energy = cloudPlayerSavedData.energy;
//				internalPlayerSavedData.coin = cloudPlayerSavedData.coin;
//
//				internalPlayerSavedData.energyTimeList.Clear ();
//				for(int i =0; i < cloudPlayerSavedData.energyTimeList.Count; i++){
//					internalPlayerSavedData.energyTimeList.Add (cloudPlayerSavedData.energyTimeList[i]);
//					PlayerPrefs.SetString ("EnergyTime" + i, cloudPlayerSavedData.energyTimeList[i]);
//				}
//			}
//		}
			
		EnergySystem.instance.coin = internalPlayerSavedData.coin;
		EnergySystem.instance.energy = internalPlayerSavedData.energy; 

//		print ("resolved");
//		json = JsonUtility.ToJson (internalPlayerSavedData);
//		print (json);
//		json = JsonUtility.ToJson (cloudPlayerSavedData);
//		print (json);
//		json = JsonUtility.ToJson (tempPlayerSavedData);
//		print (json);
		//////////////score juga diresolve

		#if UNITY_ANDROID
		SocialPlatformManager.instance.SaveGame ();
		#endif
		//sync cloud
		//symc internal
	}

	public int currentLevelScore = 0;
	public int currentLevelHint = 3;
}
	

[Serializable]
public class PlayerSaveData {
	public List<Scene> sceneList = new List<Scene>();
	public List<Achievement> achievementList = new List<Achievement>();

	public int energy;
	public int coin;

	public List<string> energyTimeList = new List<string> (); 

	public bool newPlayer;
}


[Serializable]
public class Scene {

	public string name;
	public bool isOpen;

	//public int bestScore;

	//public Scene(string name, bool isLock, int bestScore = 0){
	public Scene(string name, bool isOpen){
		this.name = name;
		this.isOpen = isOpen;
		//this.bestScore = bestScore;
	}
}

[System.Serializable]
public class Achievement {

	public string name;
	public bool isOpen;

	public Achievement(string name, bool isOpen){
		this.name = name;
		this.isOpen = isOpen;
	}
}