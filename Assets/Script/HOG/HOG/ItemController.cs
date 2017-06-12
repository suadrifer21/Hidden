using UnityEngine;
using System.Collections;
using System.Collections.Generic;

//------------------------------------------------------------------------------
// class definition
//------------------------------------------------------------------------------
public class ItemController : MonoBehaviour
{
	static private List<ItemController> itemControllers;
	
	[SerializeField][HideInInspector]
	private bool[] hitTestData;
	[SerializeField]
	private int hitTestDataStride;
	[SerializeField]
	private GameObject[] imageGos;
	public HogScene.LayerType layerType;
	//[SerializeField]
	//private HogScene.LayerType layerType;
	//[SerializeField]
	public Rect worldSpaceRect;
	//private Rect worldSpaceRect;
	//[SerializeField]
	[HideInInspector]
	public List<Vector2> pixels;

	//static int i = 0;

	public bool isAchievement;
	static public List<ItemController> achievementList = new List<ItemController>();
	public string achievementName;
	//public AchievementContent achiContent;
	
	//----------------------------------------------------------------------
	// static public methods
	//----------------------------------------------------------------------
	static public ItemController[] ChooseSearchItems(int maxItems)
	{
		// first make a copy of the list containing only items
		List<ItemController> searchItemControllers = new List<ItemController>();
		foreach(ItemController ic in itemControllers)
		{
			if(ic.layerType == HogScene.LayerType.Item)
			{
				// randomly insert the item so it's shuffled
				searchItemControllers.Insert(Random.Range((int)0, searchItemControllers.Count), ic);
			}
		}
		// now simply clip the list to the max items, disabling the real item list by changing type
		int maxIndex = searchItemControllers.Count - 1;
		for(; maxIndex >= maxItems; maxIndex--)
		{
			searchItemControllers[maxIndex].layerType = HogScene.LayerType.Scenery;
		}
		if(maxItems > maxIndex + 1)
		{
			maxItems = maxIndex + 1;
		}
		searchItemControllers.RemoveRange(maxItems, searchItemControllers.Count - maxItems);
		return searchItemControllers.ToArray();
	}
	
	static public int TotalItems()
	{
		if(itemControllers != null)
		{
			return itemControllers.Count;
		}
		return 0;
	}



	static public ItemController PickItem(Vector3 position)
	{
		if(itemControllers == null)
		{
			return null;
		}

//		print (position);

		// loop through list and do hit testing
		for(int i = 0; i < itemControllers.Count; i++)
		{
			// only process enabled objects
			if(itemControllers[i].gameObject.activeSelf == false)
			{
				continue;
			}
			
			// early out rectangle test first
			if(itemControllers[i].worldSpaceRect.Contains(position) == false)
			{
				continue;
			}
			// that passed, now do a hit test
			int y = (int)((position.y - itemControllers[i].worldSpaceRect.y)*100);
			if(y >= itemControllers[i].hitTestData.Length/itemControllers[i].hitTestDataStride)
			{
				Debug.Log (y + " exceeds array length of " + (itemControllers[i].hitTestData.Length/itemControllers[i].hitTestDataStride) + " for object " + itemControllers[i].name);
				y = (itemControllers[i].hitTestData.Length/itemControllers[i].hitTestDataStride) - 1;
			}
			int x = (int)((position.x - itemControllers[i].worldSpaceRect.x)*100);
			if(x >= itemControllers[i].hitTestDataStride)
			{
				Debug.Log (x + " exceeds array length of " + itemControllers[i].hitTestDataStride + " for object " + itemControllers[i].name);
				x = itemControllers[i].hitTestDataStride - 1;
			}
			if(itemControllers[i].hitTestData[((y * itemControllers[i].hitTestDataStride) + x)] == false)
			{
				continue;
			}
			return itemControllers[i];
		}
		
		// can get here when in edit mode because the camera update is still being called
		// and cursor outside the window
		return null;
	}
	
	static public void WriteItemListToConsole()
	{
		for(int i = 0; i < itemControllers.Count; i++)
		{
			Debug.Log (itemControllers[i].name + " has depth " + itemControllers[i].transform.position.z);
		}
	}
	
	//----------------------------------------------------------------------
	// public methods
	//----------------------------------------------------------------------
	public void AddHitTestData(bool[] newHitTestData, int newHitTestDataStride, Rect newWorldSpaceRect, List<Vector2> pixels)
	{
		hitTestData = newHitTestData;
		hitTestDataStride = newHitTestDataStride;
		worldSpaceRect = newWorldSpaceRect;
		this.pixels = pixels;
	}
	
	public void AddImage(HogScene.ImageType imageType, GameObject imageGo)
	{
		if(imageGos == null)
		{
			imageGos = new GameObject[(int)HogScene.ImageType.Count];
		}
		imageGos[(int)imageType] = imageGo;

		// if we have an obscured image, hide the whole
		if((imageGos[(int)HogScene.ImageType.Obscured] != null) && (imageGos[(int)HogScene.ImageType.Whole] != null))
		{
			imageGos[(int)HogScene.ImageType.Whole].SetActive(false);
		}
	}
	
	public void AddLayer(HogScene.LayerType layerType)
	{
		this.layerType = layerType;
	}
	
	public HogScene.ImageType BestHitTestImageType()
	{
		// the images are stored in order of hit test preference, so return first one
		for(int i = 0; i < imageGos.Length; i++)
		{
			if(imageGos[i] != null)
			{
				return (HogScene.ImageType)i;
			}
		}
		
		// should never get here
		Debug.Log ("No images found for item " + gameObject.name);
		return 0;
	}
	
	public bool IsItem()
	{
		return (layerType == HogScene.LayerType.Item);
	}
		
	bool isScoreCounted = false;

	public void PickUpItem()
	{
		Sound.instance.PlaySound (3);

		if (!isScoreCounted) {
			Scoring.instance.wrongStreak = 0;
			Scoring.instance.CheckScore (transform);
			isScoreCounted = true;
			Scoring.instance.streak++;
		}


		//gameObject.SetActive(false);


		SearchListController.searchListController.itemNotFound.Remove (this);

//		int z = 0;
//		for(int i = 0; i < SearchListController.searchListController.searchItemControllers.Length; i++){
//			if(SearchListController.searchListController.searchItemControllers[i].gameObject.name.Equals(gameObject.name)){
//				z = i;
//				break;
//			}
//		}
//		ItemController ic = SearchListController.searchListController.searchItemControllers[SearchListController.searchListController.searchItemControllers.Length - 1];
//		SearchListController.searchListController.searchItemControllers [z] = ic;





		if (HintParticleManager.instance.isPointing){
//			print (HintParticleManager.instance.hintedObject+" "+gameObject);
			if(HintParticleManager.instance.hintedObject.Equals(gameObject)){
				HintParticleManager.instance.pointer.SetActive (false);
				//HintParticleManager.instance.ResetTimer ();

				HintParticleManager.instance.ResetHint();
			}
		}
			
		for(int i = 1; i < transform.childCount; i++){
			transform.GetChild(i).gameObject.SetActive (false);
		}
		transform.GetChild(0).gameObject.SetActive (true);
		transform.GetChild(0).GetComponent<ItemScript>().Move();



		Bag.instance.OpenBag ();


	}
	
	//----------------------------------------------------------------------
	// protected mono methods
	//----------------------------------------------------------------------
	protected void Awake()
	{
		// does the pool exist yet?
		if(itemControllers == null)
		{
			// lazy initialize it
			itemControllers = new List<ItemController>();
		}
	}
	
	protected void OnDestroy()
	{
		if(itemControllers != null)
		{
			// remove myself from the pool
			itemControllers.Remove(this);
			// was I the last one?
			if(itemControllers.Count == 0)
			{
				// remove the pool itself
				itemControllers = null;
			}
		}
	}
	
	protected void OnDisable()
	{
	}
	
	protected void OnEnable()
	{
	}
	
	protected void Start()
	{
		// add myself, but sorted in the right place
		int insertionIndex = 0;
		for(; insertionIndex < itemControllers.Count; insertionIndex++)
		{
			if(transform.position.z < itemControllers[insertionIndex].transform.position.z)
			{
				break;
			}
		}
		itemControllers.Insert(insertionIndex, this);


//		PlayerPrefs.DeleteAll ();
		// p l a  y e r  p r e f s  se t

		if(isAchievement){
			int x = PlayerPrefs.GetInt (achievementName, 0);
			print (achievementName+"  "+x);
			if (x != 1) {
				achievementList.Add (this);
			} 
			else {
				isAchievement = false;
			}



			//StartCoroutine ("CopyAchiContent");
			//achiContent = Story.instance.achiContentList[0];
		}

		//Resize ();

		//PlayerPrefs.DeleteAll();

	}

//	IEnumerator CopyAchiContent(){
//		yield return new WaitForSeconds (0.001f);
//		achiContent = Story.instance.achiContentList[0];
//	}
	
	protected void Update()
	{
		
	}

	public void RemoveAchievemnt(){
		for(int i = 0; i < achievementList.Count; i++){
			//print (achievementList[i].achievementName);
			if(achievementList[i].achievementName.Equals(this.achievementName)){
				achievementList [i].isAchievement = false;
				//achievementList.RemoveAt (i);


			}
		}

		PlayerPrefs.SetInt (achievementName, 1);
	}


	void Resize(){
		SpriteRenderer sr=GetComponent<SpriteRenderer>();
		if(sr==null) return;

		transform.localScale=new Vector3(1,1,1);

		float width=sr.sprite.bounds.size.x;
		float height=sr.sprite.bounds.size.y;


		float worldScreenHeight=Camera.main.orthographicSize*2f;
		float worldScreenWidth=worldScreenHeight/Screen.height*Screen.width;

		Vector3 xWidth = transform.localScale;
		xWidth.x=worldScreenWidth / width;
		transform.localScale=xWidth;

		Vector3 yHeight = transform.localScale;
		yHeight.y=worldScreenHeight / height;
		transform.localScale=yHeight;

	}







	//----------------------------------------------------------------------
	// private methods
	//----------------------------------------------------------------------
}
