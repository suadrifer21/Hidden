using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AchievementScroller : MonoBehaviour {

	int cur = 0;
	public Transform titleGroup;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void Next(){
		if ((cur+1) < transform.childCount) {
			transform.GetChild (cur).gameObject.SetActive (false);
			titleGroup.GetChild (cur).gameObject.SetActive (false);
			cur++;
			transform.GetChild (cur).gameObject.SetActive (true);
			titleGroup.GetChild (cur).gameObject.SetActive (true);
			transform.GetChild (cur).GetComponent<CheckAchievementLock> ().Check ();
		}
			
	}

	public void Prev(){
		if (cur > 0) {
			transform.GetChild (cur).gameObject.SetActive (false);
			titleGroup.GetChild (cur).gameObject.SetActive (false);
			cur--;
			transform.GetChild (cur).gameObject.SetActive (true);
			titleGroup.GetChild (cur).gameObject.SetActive (true);
			transform.GetChild (cur).GetComponent<CheckAchievementLock> ().Check ();
		}
	}
}
