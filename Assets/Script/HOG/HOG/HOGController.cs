using UnityEngine;
using System.Collections;
using UnityEngine.SocialPlatforms;
using GooglePlayGames;
using UnityEngine.UI;
using UnityEngine.EventSystems;

//------------------------------------------------------------------------------
// class definition
//------------------------------------------------------------------------------
public class HOGController : MonoBehaviour
{
	static private HOGController hogController;
	[SerializeField]
	private ItemController itemController;
	//private Rect screenRect;

	//----------------------------------------------------------------------
	// static public methods
	//----------------------------------------------------------------------
	//----------------------------------------------------------------------
	// public methods
	//----------------------------------------------------------------------
	//----------------------------------------------------------------------
	// protected mono methods
	//----------------------------------------------------------------------
	protected void Awake()
	{
		hogController = this;
	}
	
	protected void OnDestroy()
	{
		if(hogController != null)
		{
			hogController = null;
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
//		PlayerPrefs.DeleteAll ();
	}

	public AchievementPanel achievementPanel;
	public Text achiTitle;
	public Text achiDesc;

//public Text a;




	protected void  LateUpdate()	{



//		if (!EventSystem.current.IsPointerOverGameObject ())
//			print ("bukan ui");



		if(Menu.instance.isGameOn && !EventSystem.current.IsPointerOverGameObject() && !CameraControl.instance.isCameraMoving && !CameraControl.instance.isZoomPan) {
			itemController = ItemController.PickItem(Camera.main.ScreenToWorldPoint(Input.mousePosition));


//			print (itemController);

		

			if (itemController != null) {
				//		a.text = itemController.name;

				if ((Input.GetMouseButtonDown (0) == true) && (itemController.IsItem () == true)) {
					for (int i = 0; i < SearchListController.searchListController.searchItemControllers.Length; i++) {
						if (SearchListController.searchListController.searchItemControllers [i].Equals (itemController)) {
							if (i < 8)
								itemController.PickUpItem ();
						}
					}
				} else if ((Input.GetMouseButtonDown (0) == true) && (itemController.IsItem () != true)) {

					Scoring.instance.streak = 0;
					Scoring.instance.wrongStreak++;

					if (Scoring.instance.wrongStreak > 5) {
						Sound.instance.PlaySound (5);
						//print ("NGACOOOOOOOOO");

						if (Timer.instance != null) {
							Timer.instance.SubstractTime ();
						} else {
							Scoring.instance.AddStreakBonus ();
							
						}

						Scoring.instance.wrongStreak = 0;
					}
				}

				if ((Input.GetMouseButtonDown (0) == true) && (itemController.isAchievement)) {

					//print ("s");

					itemController.RemoveAchievemnt ();

					for (int i = 0; i < Story.instance.achiContentList.Count; i++) {
						string s = Story.instance.achiContentList [i].title;
						if (itemController.achievementName.Equals (s)) {
							achievementPanel.title = s;
							achiTitle.text = s;

							for (int j = 0; j < Story.instance.achiContentList [i].text.Length; j++) {
								if (j == 0) {
									achiDesc.text = Story.instance.achiContentList [i].text [0];
								} else {
									achiDesc.text = achiDesc.text + "\n" + Story.instance.achiContentList [i].text [j];
								}
							}
							achievementPanel.Activate ();

							Sound.instance.PlaySound (0);

							break;
						}
					}


					//				
					#if UNITY_ANDROID
					if (Social.localUser.authenticated || PlayGamesPlatform.Instance.localUser.authenticated) {
						SocialPlatformManager.instance.SaveGame ();
					} 
					#endif
					//				}

				}

				if (Input.GetKeyDown (KeyCode.D) == true) {
					ItemController.WriteItemListToConsole ();
				}
			} 

		}




		//tuts

		if (Menu.instance.isTutorialOn) {
			itemController = ItemController.PickItem(Camera.main.ScreenToWorldPoint(Input.mousePosition));


			if (itemController != null) {

				if ((Input.GetMouseButtonDown (0) == true) && (itemController.IsItem () == true)) {
					if (SearchListController.searchListController.searchItemControllers [0].Equals (itemController)) {
						itemController.PickUpItem ();


//						Tutorial.instance.ActivateTutorial ();
					}
				}
			}
					
		}
	}
	
	//----------------------------------------------------------------------
	// private methods
	//----------------------------------------------------------------------
}
