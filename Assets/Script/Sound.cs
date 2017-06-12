using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

using DigitalRuby.SoundManagerNamespace;

public class Sound : MonoBehaviour {

	public static Sound instance;

	public List<AudioSource> musicAudioSources = new List<AudioSource>();
	public List<AudioSource> soundAudioSources = new List<AudioSource>();

	public Transform bgm;
	public Transform sfx;

	//public int startMusic;
	public Slider SoundSlider;
	public Slider MusicSlider;

	public AudioSource playingMusic;

	void Awake(){
		if (!instance) {
			instance = this;
			DontDestroyOnLoad (gameObject);
		} 
		else
			Destroy (gameObject);
	}

	// Use this for initialization
	void Start () {
		for(int i = 0; i < bgm.childCount; i++){
			musicAudioSources.Add(bgm.GetChild (i).GetComponent<AudioSource> ());
		}

		for(int i = 0; i < sfx.childCount; i++){
			soundAudioSources.Add(sfx.GetChild (i).GetComponent<AudioSource> ());
		}

//		if(SoundSlider != null){
//			SoundSlider.value = SoundManager.MusicVolume;
//		}
//
//		if(MusicSlider != null){
//			MusicSlider.value = SoundManager.MusicVolume;
//		}

	
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	AudioSource start;

	public void PlayStartMusic(int startMusic, int loopingMusic){
		start = musicAudioSources [startMusic];
		musicAudioSources [startMusic].PlayOneShotMusicManaged (musicAudioSources[startMusic].clip);
		playingMusic = musicAudioSources [startMusic];
		StartCoroutine (PlayLoopAfterStart(loopingMusic));

	}

	IEnumerator PlayLoopAfterStart(int loopingMusic){
		while(start.isPlaying){
			yield return null;
		}
		playingMusic = musicAudioSources [loopingMusic];
		SoundManager.PlayLoopingMusic(musicAudioSources [loopingMusic]);
	}

	public void SoundVolumeChanged()
	{
		SoundManager.SoundVolume = SoundSlider.value;
	}

	public void MusicVolumeChanged()
	{
		SoundManager.MusicVolume = MusicSlider.value;
	}

	public void PlaySound(int index)
	{
		soundAudioSources[index].PlayOneShotSoundManaged(soundAudioSources[index].clip);
	}

	public void PlayMusic(int index)
	{
		musicAudioSources[index].PlayLoopingMusicManaged(1.0f, 1.0f, false);
		playingMusic = musicAudioSources [index];
	}

	public float GetSoundVolume(){
		return SoundManager.SoundVolume;
	}

	public float GetMusicVolume(){
		return SoundManager.MusicVolume;
	}

	public void StopLoopingMusic(){
		for(int i = 0; i < musicAudioSources.Count; i++){
			musicAudioSources [i].Stop ();
			musicAudioSources [i].StopLoopingMusicManaged ();
		}
	}

	public void PauseLoopingMusic(){
		playingMusic.Pause ();
	}

	public void ResumeLoopingMusic(){
		playingMusic.UnPause ();
	}
}
