using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AchievementReward : MonoBehaviour {

	// Use this for initialization
	void Start () {
		AchiRewardCheck ();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public GameObject manikLock;
	public GameObject balingkangLock;
	public GameObject calonLock;

	public void AchiRewardCheck(){
		List<Achievement> achiList = SaveDataManager.instance.achievementList;
		//Cek Manik
		int m = PlayerPrefs.GetInt ("Manik Achievement Cleared", 0);
		if (m == 0) {
			for (int i = 0; i < 7; i++) {
				if (!achiList [i].isOpen)
					break;

				if (i == 6) //tambah cek apa udah di claim
					manikLock.SetActive (false);

			}
		} else {
			manikLock.transform.parent.GetChild (0).gameObject.SetActive (false);
			manikLock.gameObject.SetActive (false);
		}

		//Cek Balingkang
		m = PlayerPrefs.GetInt ("Balingkang Achievement Cleared", 0);
		if (m == 0) {
			for (int i = 8; i < 14; i++) {
				if (!achiList [i].isOpen)
					break;

				if (i == 13) //tambah cek apa udah di claim
					balingkangLock.SetActive (false);

			}
		} else {
			balingkangLock.transform.parent.GetChild (0).gameObject.SetActive (false);
			balingkangLock.gameObject.SetActive (false);
		}
		//Cek Calon
	}

	public void ClaimReward(int n){
		print (n);
		switch (n) {
		case 0:
			ShopCanvas.instance.transform.GetChild (6).GetChild (2).GetChild (0).gameObject.SetActive (true);
			PlayerPrefs.SetInt ("Manik Achievement Cleared", 1);
			break;
		case 1:
			ShopCanvas.instance.transform.GetChild (6).GetChild (2).GetChild (1).gameObject.SetActive (true);
			PlayerPrefs.SetInt ("Balingkang Achievement Cleared", 1);
			break;
		case 2:
			ShopCanvas.instance.transform.GetChild (6).GetChild (2).GetChild (2).gameObject.SetActive (true);
			PlayerPrefs.SetInt ("Calon Achievement Cleared", 1);
			break;
		
		}
		AchiRewardCheck ();
	}


}
