using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CheckAchievementLock : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void Check(){
		for(int i = 0; i < transform.childCount; i++){
			transform.GetChild (i).GetComponent<AchievementPageItem> ().SetLock ();
			
		}
	}
}
