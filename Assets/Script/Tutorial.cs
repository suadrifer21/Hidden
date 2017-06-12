using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Tutorial : MonoBehaviour {
	public static Tutorial instance;

	public Transform tutorial;
	public GameObject curTutsPanel;
	public GameObject tutsScreenButton;
	int t = 0;


	void Awake(){
		if (!instance)
			instance = this;	
	}

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void ActivateTutorialZZ() {
		if (t > 0)
			tutorial.GetChild (t-1).gameObject.SetActive (false);

//		tutsScreenButton.SetActive (true);
//		Menu.instance.isTutorialOn = true;
//		Menu.instance.bottomPanel.SetActive (true);
//
//		curTutsPanel = tutorial.GetChild (t).gameObject;
//		curTutsPanel.SetActive (true);
//
//		t++;
//		print (t);
		if (t >= tutorial.childCount) {
			Menu.instance.isTutorialOn = false;
			Menu.instance.isGameOn = true;
			tutsScreenButton.SetActive (false);
			tutorial.GetChild (t - 1).gameObject.SetActive (false);
		} else {
			tutsScreenButton.SetActive (true);
			Menu.instance.isTutorialOn = true;
			Menu.instance.bottomPanel.SetActive (true);

			curTutsPanel = tutorial.GetChild (t).gameObject;
			curTutsPanel.SetActive (true);

			t++;
		}
	}

	public void ActivateTutorial() {
		if (t > 0)
			tutorial.GetChild (t-1).gameObject.SetActive (false);

		if (t == 1) {
			curTutsPanel = tutorial.GetChild (t).gameObject;
			curTutsPanel.SetActive (true);

			tutsScreenButton.SetActive (false);
			string text = tutorial.GetChild (1).GetChild (0).GetComponent<Text> ().text;
			tutorial.GetChild (1).GetChild (0).GetComponent<Text> ().text = text + SearchListController.searchListController.searchItemControllers [0].name;

			HintParticleManager.instance.ActivatePointer (SearchListController.searchListController.searchItemControllers [0].transform.GetChild(0));
			t++;
		} else if (t >= tutorial.childCount) {
			Menu.instance.isTutorialOn = false;
			Menu.instance.isGameOn = true;
			tutsScreenButton.SetActive (false);
			tutorial.GetChild (t - 1).gameObject.SetActive (false);
		} else {
			tutsScreenButton.SetActive (true);
			Menu.instance.isTutorialOn = true;
			Menu.instance.bottomPanel.SetActive (true);

			curTutsPanel = tutorial.GetChild (t).gameObject;
			curTutsPanel.SetActive (true);

			t++;
		}

	}

}
