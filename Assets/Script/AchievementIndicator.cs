using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AchievementIndicator : MonoBehaviour {

	public List<string> achiNameList = new List<string>();

	// Use this for initialization
	void Start () {
		int y = 0;
		for(int i = 0; i < achiNameList.Count; i++){
			int x = PlayerPrefs.GetInt (achiNameList[i],0);				
			if (x != 0) {
				transform.GetChild (y).GetChild (1).gameObject.SetActive (false);
				y++;	
			}
		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
