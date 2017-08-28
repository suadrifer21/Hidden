using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerPrefsEditor : MonoBehaviour {

	public List<string> prefs = new List<string>();

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void EnableAll(){
		for(int i = 0; i < prefs.Count; i++){
			
			PlayerPrefs.SetInt(prefs[i], 1);
		}
	}

	public void ClearAll(){
		PlayerPrefs.DeleteAll ();
	}
}
