using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ChangeMode : MonoBehaviour {

	bool storyMode = true;

	public GameObject storyGroup;
	public GameObject challengeGroup;
	public Text modeText;

	int story = 0;
	Transform t;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void SwitchMode () {
		if (storyMode) {
			storyGroup.SetActive(false);
			challengeGroup.SetActive(true);
			storyMode = false;

			SetPanel ();

			modeText.text = "CHALLENGE MODE";

		} else {
			storyGroup.SetActive(true);
			challengeGroup.SetActive(false);
			storyMode = true;

			SetPanel ();

			modeText.text = "STORY MODE";

		}
	}

	public void SetPanel () {
		if (storyMode) {
			t = storyGroup.transform.GetChild (0).GetChild (0).GetChild (0);
			for(int i = 0; i < t.childCount; i++){
				t.GetChild (i).gameObject.SetActive (false);
			}
			t.GetChild (story).gameObject.SetActive (true);
			print(t.GetChild (story).gameObject.name);
		} else {
			t = challengeGroup.transform.GetChild (0).GetChild (0).GetChild (0);
			for(int i = 0; i < t.childCount; i++){
				t.GetChild (i).gameObject.SetActive (false);
			}
			t.GetChild (story).gameObject.SetActive (true);
		}
	}

	public void SetStory(int x){
		story = x;
	}
}
