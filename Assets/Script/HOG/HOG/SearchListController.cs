//#define LOG_TRACE_INFO
//#define LOG_EXTRA_INFO

using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;

//------------------------------------------------------------------------------
// class definition
//------------------------------------------------------------------------------
public class SearchListController : MonoBehaviour
{
	//public int MAX_ITEMS_IN_LEFTRIGHT_LIST = 9;
	//public int MAX_ITEMS_IN_TOPBOTTOM_LIST = 6;
	public int MAX_ITEMS_TO_FIND = 12;

	//private float SEARCH_ITEM_HEIGHT = 28;
	//private float SEARCH_ITEM_WIDTH = 124;
	//private float SEARCH_ITEM_PADDING = 8;

	static public SearchListController searchListController;
	
	[SerializeField]
	private int totalItemCount;

	//private Rect searchItemBounds;
	//private enum SearchListAnchor { Invisible, Bottom, Left, Right, Top };
	//private SearchListAnchor searchListAnchor;
	//private Rect searchListBounds;
	//private int searchListItemCount;

	//[SerializeField]
	//private ItemController[] searchItemControllers;
	public ItemController[] searchItemControllers;
	private delegate void UpdateDelegate();
	private UpdateDelegate updateDelegate;



	public List<ItemController> itemNotFound = new List<ItemController>();



	//public GameObject textPrefab;
	public GameObject panel;

	//----------------------------------------------------------------------
	// static public methods
	//----------------------------------------------------------------------
	//----------------------------------------------------------------------
	// public methods
	//----------------------------------------------------------------------
	public void SetTotalItemCount(int totalItemCount)
	{
		this.totalItemCount = totalItemCount;
	}
	
	//----------------------------------------------------------------------
	// protected mono methods
	//----------------------------------------------------------------------
	protected void Awake()
	{
		searchListController = this;
	}
	
	protected void OnDestroy()
	{
		if(searchListController != null)
		{
			searchListController = null;
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
		updateDelegate = UpdateSearchListInitialization;
	}

	protected void Update()
	{
		if(updateDelegate != null)
		{
			updateDelegate();
		}

	}

	private void UpdateSearchListInitialization()
	{
		if(ItemController.TotalItems() == totalItemCount)
		{
			searchItemControllers = ItemController.ChooseSearchItems(MAX_ITEMS_TO_FIND);

			for(int i = 0; i < searchItemControllers.Length; i++){
				itemNotFound.Add (searchItemControllers[i]);
			}


			updateDelegate = DrawSearchList;

		}
	}

		
	private void DrawSearchList() {
//		for(int i = 0; (i < searchItemControllers.Length) && (i < MAX_ITEMS_TO_FIND) && (i < panel.transform.childCount); i++)
//		{
//			if (searchItemControllers [i].gameObject.activeSelf == false) {
//				panel.transform.GetChild (i).GetComponent<Text> ().text = "";
//
//			}
//			else
//				panel.transform.GetChild (i).GetComponent<Text> ().text = searchItemControllers [i].name;
//			panel.transform.GetChild (i).gameObject.SetActive (true);
//		}










		for(int i = 0; i < panel.transform.childCount; i++){
			if (searchItemControllers [i].gameObject.activeSelf == false) {
				ItemController a = null;
				for (int j = panel.transform.childCount; j < searchItemControllers.Length; j++) {
					//print (j);
					if(searchItemControllers[j].gameObject.activeSelf == true){
						//print (j+" aa");
						a = searchItemControllers [j];
						searchItemControllers [j] = searchItemControllers [i];
						break;
					}
				}

				if (a == null) {
					panel.transform.GetChild (i).transform.GetChild(0).GetComponent<Text> ().text = "";
				} else {
					searchItemControllers [i] = a;
					panel.transform.GetChild (i).transform.GetChild(0).GetComponent<Text> ().text = searchItemControllers [i].name;
				}

			}
			else
				panel.transform.GetChild (i).transform.GetChild(0).GetComponent<Text> ().text = searchItemControllers [i].name;
		}


    }


}
