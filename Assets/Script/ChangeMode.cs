using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ChangeMode : MonoBehaviour {

	bool storyMode = true;

	public GameObject storyGroup;
	public GameObject challengeGroup;
	public Text modeText;

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
			modeText.text = "CHALLENGE MODE";
		} else {
			storyGroup.SetActive(true);
			challengeGroup.SetActive(false);
			storyMode = true;
			modeText.text = "STORY MODE";
		}
	}
}
