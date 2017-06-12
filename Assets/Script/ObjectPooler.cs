using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectPooler : MonoBehaviour {

	public static ObjectPooler instance;

	private List<GameObject> pooledObjects;
	public List<GameObject> objectToPool = new List<GameObject>();
	public int amountToPool;

	void Awake() {
		instance = this;
	}
	// Use this for initialization
	void Start () {
		pooledObjects = new List<GameObject> ();
		int x = 0;
		for(int i = 0; i < amountToPool; i++){
			x = Random.Range(0, objectToPool.Count);
			GameObject obj = (GameObject)Instantiate (objectToPool[x]);
			obj.SetActive (false);
			pooledObjects.Add (obj);
		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public GameObject GetPooledObject(){
		for(int i = 0; i < pooledObjects.Count; i++){
			if(!pooledObjects[i].activeInHierarchy){
				return pooledObjects[i];
			}
		}

		return null;
	}
}
