using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SoundInterface : MonoBehaviour {
	//public static SoundInterface instance;
	public Slider bgmSlider;
	public Slider sfxSlider;

//	void Awake () {
//		if (!instance) {
//			instance = this;
//		}
//	}
	// Use this for initialization
	void Start () {
		if(bgmSlider != null ){
			Sound.instance.MusicSlider = bgmSlider;
			bgmSlider.value = Sound.instance.GetMusicVolume ();
		}

		if (sfxSlider != null) {
			Sound.instance.SoundSlider = sfxSlider;
			sfxSlider.value = Sound.instance.GetSoundVolume ();		
		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void PlayStartMusic(int startMusic, int loopMusic){
//		print ("start");
		Sound.instance.PlayStartMusic (startMusic, loopMusic);
	}

	public void SoundVolumeChanged()
	{
		Sound.instance.SoundVolumeChanged ();
	}

	public void MusicVolumeChanged()
	{
		Sound.instance.MusicVolumeChanged ();
	}

	public void PlaySound(int index)
	{
		Sound.instance.PlaySound (index);
	}

	public void PlayMusic(int index)
	{
		Sound.instance.PlayMusic (index);
	}

	public float GetSoundVolume(){
		return Sound.instance.GetSoundVolume();
	}

	public float GetMusicVolume(){
		return Sound.instance.GetSoundVolume ();
	}
}
