#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.AssetBundle
struct AssetBundle_t2054978754;
// LevelData
struct LevelData_t4104249894;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Slider
struct Slider_t297367283;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BundleManager
struct  BundleManager_t1368323489  : public MonoBehaviour_t1158329972
{
public:
	// System.String BundleManager::versionURL
	String_t* ___versionURL_2;
	// System.String BundleManager::assetListURL
	String_t* ___assetListURL_3;
	// System.String BundleManager::assetBundleURL
	String_t* ___assetBundleURL_4;
	// System.Int32 BundleManager::version
	int32_t ___version_5;
	// UnityEngine.AssetBundle BundleManager::bundle
	AssetBundle_t2054978754 * ___bundle_6;
	// LevelData BundleManager::levelData
	LevelData_t4104249894 * ___levelData_7;
	// UnityEngine.GameObject BundleManager::askToDownload
	GameObject_t1756533147 * ___askToDownload_8;
	// UnityEngine.UI.Slider BundleManager::downloadProgress
	Slider_t297367283 * ___downloadProgress_9;

public:
	inline static int32_t get_offset_of_versionURL_2() { return static_cast<int32_t>(offsetof(BundleManager_t1368323489, ___versionURL_2)); }
	inline String_t* get_versionURL_2() const { return ___versionURL_2; }
	inline String_t** get_address_of_versionURL_2() { return &___versionURL_2; }
	inline void set_versionURL_2(String_t* value)
	{
		___versionURL_2 = value;
		Il2CppCodeGenWriteBarrier(&___versionURL_2, value);
	}

	inline static int32_t get_offset_of_assetListURL_3() { return static_cast<int32_t>(offsetof(BundleManager_t1368323489, ___assetListURL_3)); }
	inline String_t* get_assetListURL_3() const { return ___assetListURL_3; }
	inline String_t** get_address_of_assetListURL_3() { return &___assetListURL_3; }
	inline void set_assetListURL_3(String_t* value)
	{
		___assetListURL_3 = value;
		Il2CppCodeGenWriteBarrier(&___assetListURL_3, value);
	}

	inline static int32_t get_offset_of_assetBundleURL_4() { return static_cast<int32_t>(offsetof(BundleManager_t1368323489, ___assetBundleURL_4)); }
	inline String_t* get_assetBundleURL_4() const { return ___assetBundleURL_4; }
	inline String_t** get_address_of_assetBundleURL_4() { return &___assetBundleURL_4; }
	inline void set_assetBundleURL_4(String_t* value)
	{
		___assetBundleURL_4 = value;
		Il2CppCodeGenWriteBarrier(&___assetBundleURL_4, value);
	}

	inline static int32_t get_offset_of_version_5() { return static_cast<int32_t>(offsetof(BundleManager_t1368323489, ___version_5)); }
	inline int32_t get_version_5() const { return ___version_5; }
	inline int32_t* get_address_of_version_5() { return &___version_5; }
	inline void set_version_5(int32_t value)
	{
		___version_5 = value;
	}

	inline static int32_t get_offset_of_bundle_6() { return static_cast<int32_t>(offsetof(BundleManager_t1368323489, ___bundle_6)); }
	inline AssetBundle_t2054978754 * get_bundle_6() const { return ___bundle_6; }
	inline AssetBundle_t2054978754 ** get_address_of_bundle_6() { return &___bundle_6; }
	inline void set_bundle_6(AssetBundle_t2054978754 * value)
	{
		___bundle_6 = value;
		Il2CppCodeGenWriteBarrier(&___bundle_6, value);
	}

	inline static int32_t get_offset_of_levelData_7() { return static_cast<int32_t>(offsetof(BundleManager_t1368323489, ___levelData_7)); }
	inline LevelData_t4104249894 * get_levelData_7() const { return ___levelData_7; }
	inline LevelData_t4104249894 ** get_address_of_levelData_7() { return &___levelData_7; }
	inline void set_levelData_7(LevelData_t4104249894 * value)
	{
		___levelData_7 = value;
		Il2CppCodeGenWriteBarrier(&___levelData_7, value);
	}

	inline static int32_t get_offset_of_askToDownload_8() { return static_cast<int32_t>(offsetof(BundleManager_t1368323489, ___askToDownload_8)); }
	inline GameObject_t1756533147 * get_askToDownload_8() const { return ___askToDownload_8; }
	inline GameObject_t1756533147 ** get_address_of_askToDownload_8() { return &___askToDownload_8; }
	inline void set_askToDownload_8(GameObject_t1756533147 * value)
	{
		___askToDownload_8 = value;
		Il2CppCodeGenWriteBarrier(&___askToDownload_8, value);
	}

	inline static int32_t get_offset_of_downloadProgress_9() { return static_cast<int32_t>(offsetof(BundleManager_t1368323489, ___downloadProgress_9)); }
	inline Slider_t297367283 * get_downloadProgress_9() const { return ___downloadProgress_9; }
	inline Slider_t297367283 ** get_address_of_downloadProgress_9() { return &___downloadProgress_9; }
	inline void set_downloadProgress_9(Slider_t297367283 * value)
	{
		___downloadProgress_9 = value;
		Il2CppCodeGenWriteBarrier(&___downloadProgress_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
