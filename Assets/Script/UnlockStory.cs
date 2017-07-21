using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using GooglePlayGames;

public class UnlockStory : MonoBehaviour {

	int cost;
	string sceneName;
	public Text costText;

	bool clearManik;

	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void Check(string n){
		sceneName = n;
		if (PlayerPrefs.GetInt (sceneName, 0) != 1)
			gameObject.SetActive (true);
		else {
//			print ("a");
			g.SetActive (true);
			g.GetComponent<Button> ().onClick.Invoke ();
			g.SetActive (false);
		}
	}

	public void setCost(int i){
		cost = i;
		costText.text = cost.ToString();
	}

	GameObject g;
	public GameObject warningPanel;

	public void UnlockAsli(){
		if (EnergySystem.instance.coin >= cost) { 
			EnergySystem.instance.coin -= cost;
			PlayerPrefs.SetInt (sceneName, 1);

			Camera.main.GetComponent<CheckSceneLock> ().Check ();


			#if UNITY_ANDROID
			if (Social.localUser.authenticated || PlayGamesPlatform.Instance.localUser.authenticated) {
				SocialPlatformManager.instance.SaveGame();
			}
			#endif

			g.GetComponent<Button> ().onClick.Invoke ();

			gameObject.SetActive (false);

		} else {
			ShopCanvas.instance.transform.GetChild (2).gameObject.SetActive (true);
		}
	}

	public void Unlock(){
		if (EnergySystem.instance.coin >= cost) {
			int c = PlayerPrefs.GetInt ("Manik Cleared", 0);
			if (c != 0) {
				EnergySystem.instance.coin -= cost;
				PlayerPrefs.SetInt (sceneName, 1);

				Camera.main.GetComponent<CheckSceneLock> ().Check ();


				#if UNITY_ANDROID
				if (Social.localUser.authenticated || PlayGamesPlatform.Instance.localUser.authenticated) {
					SocialPlatformManager.instance.SaveGame ();
				}
				#endif

				g.GetComponent<Button> ().onClick.Invoke ();

				gameObject.SetActive (false);
			} else {
				warningPanel.SetActive (true);
			}



		} else {
			ShopCanvas.instance.transform.GetChild (2).gameObject.SetActive (true);
		}
	}

	public void SetObject(GameObject g){
		this.g = g;

	}

//	public void CheckReq (int i = 2) {
//		if (i == 2) { //cek balingkang
//			int c = PlayerPrefs.GetInt ("");
//			if (c == 0) { //belum clear manik
//				clearManik = true;
//			} else { 
//				clearManik = false;
//			}
//
//
//		} else if(i == 3){ //cek calon arang
//			
//		}
//
//
//	}
}
