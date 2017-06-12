using UnityEditor;

public class CreateAssetBundles {

	[MenuItem("Assets/Build AssetBundles/Android")]
	static void BuildAssetBundlesAndroid(){
		BuildPipeline.BuildAssetBundles ("Assets/AssetBundles/Android", BuildAssetBundleOptions.None, BuildTarget.Android);
	}

	[MenuItem("Assets/Build AssetBundles/OSX")]
	static void BuildAssetBundlesOSX(){
		BuildPipeline.BuildAssetBundles ("Assets/AssetBundles/OSX", BuildAssetBundleOptions.None, BuildTarget.StandaloneOSXUniversal);
	}

	[MenuItem("Assets/Build AssetBundles/iOS")]
	static void BuildAssetBundlesiOS(){
		BuildPipeline.BuildAssetBundles ("Assets/AssetBundles/iOS", BuildAssetBundleOptions.None, BuildTarget.iOS);
	}
}
