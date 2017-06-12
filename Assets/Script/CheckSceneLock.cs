using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CheckSceneLock : MonoBehaviour {

	//public Transform thumbGroup;

	public List<LevelLock> levelLockList = new List<LevelLock> ();


	void Start(){
		Check();
	}

	public void Check(){
		for(int i = 0; i < levelLockList.Count; i++){

			if (levelLockList [i].isDefaultActive)
				PlayerPrefs.SetInt (levelLockList[i].name, 1);
			int isActive = PlayerPrefs.GetInt (levelLockList[i].name, 0);


//			print (levelLockList[i].name+"  "+isActive   );
			if (isActive == 1) {
				levelLockList[i].overlay.SetActive(false);
			} else {
				levelLockList[i].overlay.SetActive(true);
			}
		}
	}



//	// Use this for initialization
//	void Start () {
//		//Check ();
////		PlayerPrefs.DeleteAll();
//	}
//	
//	// Update is called once per frame
//	void Update () {
//		
//	}
//
//	public void Check(){
//		for(int i = 0; i < transform.childCount; i++){
//		//for(int i = 0; i < thumbGroup.childCount; i++){
//			transform.GetChild (i).GetComponent<SceneThumb> ().SetLock ();
//
//		}
//	}
//		


}

[System.Serializable]
public class LevelLock {
	public string name;
	public GameObject overlay;
	public bool isDefaultActive;
}