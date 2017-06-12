using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class Menu : MonoBehaviour {

	public static Menu instance; 
	public GameObject menu;
	public bool isGameOn = false;
	public GameObject bottomPanel;

	public GameObject screenButton;
	//public Slider bgmSlider;
	//public Slider sfxSlider;

	public bool isTutorialOn = false;

	void Awake () {
		if (!instance)
			instance = this;	
	}

	// Use this for initialization
	void Start () {
//		Sound.instance.MusicSlider = bgmSlider;
//		Sound.instance.SoundSlider = sfxSlider;
//		bgmSlider.value = Sound.instance.GetMusicVolume ();
//		sfxSlider.value = Sound.instance.GetSoundVolume ();
//		print (bgmSlider.value+" "+Sound.instance.GetMusicVolume());
	}
	
	// Update is called once per frame
	void Update () {
		if (isGameOn || isTutorialOn) {
			bottomPanel.SetActive (true);
		} else {
			bottomPanel.SetActive (false);


//			if ((Input.GetMouseButtonDown (0) == true) && menu.activeSelf) {
//				DeActivateMenu ();
//			}
		}
	}

	public void ActivateMenu() {
		if(isGameOn){
			menu.SetActive (true);
			isGameOn = false;
			screenButton.SetActive (true);


			//bagAnim.enabled = false;			
		}
	}

	public void DeActivateMenu() {
		menu.SetActive (false);
		isGameOn = true;
		screenButton.SetActive (false);


		//bagAnim.enabled = true;
	}

	public void GameOn () {
		isGameOn = true;
	}


	//public Animator bagAnim;
}
