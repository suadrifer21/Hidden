using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StoryClearMessage : MonoBehaviour {

	public string storyEndName;
	public int rewardPanelParentNum;
	public int rewardPanelChildNum;


	// NANTI IDUPIN LAGI
	// Use this for initialization
	void Start () {
		int i = PlayerPrefs.GetInt (storyEndName, 0);
		if (i == 1) {
			ShowMessage ();
		} else if (i == 0) {
			if(storyEndName.Equals("Manik Cleared")){
				int j = PlayerPrefs.GetInt ("Sangsit Village Time", 0);
				if (j == 1) {
					ShowMessage ();
				}
			}
		}

//		print (storyEndName);
//		print(PlayerPrefs.GetInt(storyEndName, 0));
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void ShowMessage () {
		transform.GetChild (0).gameObject.SetActive (true);
		PlayerPrefs.SetInt (storyEndName, 2);
		Invoke ("HideMessage", 5);
	}
	void HideMessage () {
		transform.GetChild (0).gameObject.SetActive (false);
		ShopCanvas.instance.transform.GetChild (6).GetChild (rewardPanelParentNum).GetChild (rewardPanelChildNum).gameObject.SetActive (true);
	}
}
