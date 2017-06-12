using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using UnityEngine.UI;

public class Story : MonoBehaviour {

	public static Story instance;

	public string storyChapter;
	public Text storyPanel;
	public List<StoryContent> storyContentList = new List<StoryContent>();
	string storyText = "";
	public string story;
	int n;

	public string achiChapter;
	public List<AchievementContent> achiContentList = new List<AchievementContent>();

	public bool hideStory = false;
	public bool showTuts = false;


	void Awake(){
		if (!instance)
			instance = this;	
	}

	// Use this for initialization
	void Start () {
		foreach(TextAsset t in Resources.LoadAll<TextAsset>("Story/"+storyChapter)){
			StoryContent s = StoryContent.CreateFromJSON (t.text);
			storyContentList.Add (s);
		}

		for(int i = 0; i < storyContentList.Count; i++){
			if(storyContentList[i].title.Equals(story)){
				n = i;
				break;
			}
		}

		foreach(TextAsset t in Resources.LoadAll<TextAsset>("Achievement/"+achiChapter)){
			AchievementContent a = AchievementContent.CreateFromJSON (t.text);
			achiContentList.Add (a);
		}

		if (!hideStory)
			StartCoroutine ("ShowContent");
		else {
			if (Menu.instance != null) {
				storyPanel.transform.parent.gameObject.SetActive (false);
				Menu.instance.isGameOn = true;
			}
		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	IEnumerator ShowContent () {
		for(int i = 0; i < storyContentList[n].text.Length; i++){
			if(storyText.Equals("")){
				storyText = storyContentList[n].text[i];	
			} else 
				storyText = storyText+"\n"+storyContentList[n].text [i];
			storyPanel.text = storyText;

		}

		if (Menu.instance) {
			yield return new WaitForSeconds (5);
			storyPanel.transform.parent.gameObject.SetActive (false);
			storyText = "";

			if (showTuts) { 
				//&& ChangeScene.instance.confirmationDialog.transform.GetChild (4) != null) {
				ChangeScene.instance.confirmationDialog.SetActive (true);
				ChangeScene.instance.confirmationDialog.transform.GetChild (0).GetComponent<Text> ().text = "Show Tutorial?";
				ChangeScene.instance.confirmationDialog.transform.GetChild (4).gameObject.SetActive (true);


			} else {				
				Menu.instance.isGameOn = true;
			}




//			storyPanel.transform.parent.gameObject.SetActive (false);
//			storyText = "";
//			Menu.instance.isGameOn = true;
		} else
			yield return null;
	}
		





}

[System.Serializable]
public class StoryContent {
	public string title;
	public string[] text;

	public static  StoryContent CreateFromJSON (string jsonString) {
		return JsonUtility.FromJson<StoryContent> (jsonString);
	}
}

[System.Serializable]
public class AchievementContent {
	public string title;
	public string[] text;

	public static  AchievementContent CreateFromJSON (string jsonString) {
		return JsonUtility.FromJson<AchievementContent> (jsonString);
	}
}