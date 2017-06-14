#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<ItemController>
struct List_1_t2755808515;
// System.Boolean[]
struct BooleanU5BU5D_t3568034315;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1612828711;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_HogScene_LayerType813678172.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ItemController
struct  ItemController_t3386687383  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean[] ItemController::hitTestData
	BooleanU5BU5D_t3568034315* ___hitTestData_3;
	// System.Int32 ItemController::hitTestDataStride
	int32_t ___hitTestDataStride_4;
	// UnityEngine.GameObject[] ItemController::imageGos
	GameObjectU5BU5D_t3057952154* ___imageGos_5;
	// HogScene/LayerType ItemController::layerType
	int32_t ___layerType_6;
	// UnityEngine.Rect ItemController::worldSpaceRect
	Rect_t3681755626  ___worldSpaceRect_7;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> ItemController::pixels
	List_1_t1612828711 * ___pixels_8;
	// System.Boolean ItemController::isAchievement
	bool ___isAchievement_9;
	// System.String ItemController::achievementName
	String_t* ___achievementName_11;
	// System.Boolean ItemController::isScoreCounted
	bool ___isScoreCounted_12;

public:
	inline static int32_t get_offset_of_hitTestData_3() { return static_cast<int32_t>(offsetof(ItemController_t3386687383, ___hitTestData_3)); }
	inline BooleanU5BU5D_t3568034315* get_hitTestData_3() const { return ___hitTestData_3; }
	inline BooleanU5BU5D_t3568034315** get_address_of_hitTestData_3() { return &___hitTestData_3; }
	inline void set_hitTestData_3(BooleanU5BU5D_t3568034315* value)
	{
		___hitTestData_3 = value;
		Il2CppCodeGenWriteBarrier(&___hitTestData_3, value);
	}

	inline static int32_t get_offset_of_hitTestDataStride_4() { return static_cast<int32_t>(offsetof(ItemController_t3386687383, ___hitTestDataStride_4)); }
	inline int32_t get_hitTestDataStride_4() const { return ___hitTestDataStride_4; }
	inline int32_t* get_address_of_hitTestDataStride_4() { return &___hitTestDataStride_4; }
	inline void set_hitTestDataStride_4(int32_t value)
	{
		___hitTestDataStride_4 = value;
	}

	inline static int32_t get_offset_of_imageGos_5() { return static_cast<int32_t>(offsetof(ItemController_t3386687383, ___imageGos_5)); }
	inline GameObjectU5BU5D_t3057952154* get_imageGos_5() const { return ___imageGos_5; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_imageGos_5() { return &___imageGos_5; }
	inline void set_imageGos_5(GameObjectU5BU5D_t3057952154* value)
	{
		___imageGos_5 = value;
		Il2CppCodeGenWriteBarrier(&___imageGos_5, value);
	}

	inline static int32_t get_offset_of_layerType_6() { return static_cast<int32_t>(offsetof(ItemController_t3386687383, ___layerType_6)); }
	inline int32_t get_layerType_6() const { return ___layerType_6; }
	inline int32_t* get_address_of_layerType_6() { return &___layerType_6; }
	inline void set_layerType_6(int32_t value)
	{
		___layerType_6 = value;
	}

	inline static int32_t get_offset_of_worldSpaceRect_7() { return static_cast<int32_t>(offsetof(ItemController_t3386687383, ___worldSpaceRect_7)); }
	inline Rect_t3681755626  get_worldSpaceRect_7() const { return ___worldSpaceRect_7; }
	inline Rect_t3681755626 * get_address_of_worldSpaceRect_7() { return &___worldSpaceRect_7; }
	inline void set_worldSpaceRect_7(Rect_t3681755626  value)
	{
		___worldSpaceRect_7 = value;
	}

	inline static int32_t get_offset_of_pixels_8() { return static_cast<int32_t>(offsetof(ItemController_t3386687383, ___pixels_8)); }
	inline List_1_t1612828711 * get_pixels_8() const { return ___pixels_8; }
	inline List_1_t1612828711 ** get_address_of_pixels_8() { return &___pixels_8; }
	inline void set_pixels_8(List_1_t1612828711 * value)
	{
		___pixels_8 = value;
		Il2CppCodeGenWriteBarrier(&___pixels_8, value);
	}

	inline static int32_t get_offset_of_isAchievement_9() { return static_cast<int32_t>(offsetof(ItemController_t3386687383, ___isAchievement_9)); }
	inline bool get_isAchievement_9() const { return ___isAchievement_9; }
	inline bool* get_address_of_isAchievement_9() { return &___isAchievement_9; }
	inline void set_isAchievement_9(bool value)
	{
		___isAchievement_9 = value;
	}

	inline static int32_t get_offset_of_achievementName_11() { return static_cast<int32_t>(offsetof(ItemController_t3386687383, ___achievementName_11)); }
	inline String_t* get_achievementName_11() const { return ___achievementName_11; }
	inline String_t** get_address_of_achievementName_11() { return &___achievementName_11; }
	inline void set_achievementName_11(String_t* value)
	{
		___achievementName_11 = value;
		Il2CppCodeGenWriteBarrier(&___achievementName_11, value);
	}

	inline static int32_t get_offset_of_isScoreCounted_12() { return static_cast<int32_t>(offsetof(ItemController_t3386687383, ___isScoreCounted_12)); }
	inline bool get_isScoreCounted_12() const { return ___isScoreCounted_12; }
	inline bool* get_address_of_isScoreCounted_12() { return &___isScoreCounted_12; }
	inline void set_isScoreCounted_12(bool value)
	{
		___isScoreCounted_12 = value;
	}
};

struct ItemController_t3386687383_StaticFields
{
public:
	// System.Collections.Generic.List`1<ItemController> ItemController::itemControllers
	List_1_t2755808515 * ___itemControllers_2;
	// System.Collections.Generic.List`1<ItemController> ItemController::achievementList
	List_1_t2755808515 * ___achievementList_10;

public:
	inline static int32_t get_offset_of_itemControllers_2() { return static_cast<int32_t>(offsetof(ItemController_t3386687383_StaticFields, ___itemControllers_2)); }
	inline List_1_t2755808515 * get_itemControllers_2() const { return ___itemControllers_2; }
	inline List_1_t2755808515 ** get_address_of_itemControllers_2() { return &___itemControllers_2; }
	inline void set_itemControllers_2(List_1_t2755808515 * value)
	{
		___itemControllers_2 = value;
		Il2CppCodeGenWriteBarrier(&___itemControllers_2, value);
	}

	inline static int32_t get_offset_of_achievementList_10() { return static_cast<int32_t>(offsetof(ItemController_t3386687383_StaticFields, ___achievementList_10)); }
	inline List_1_t2755808515 * get_achievementList_10() const { return ___achievementList_10; }
	inline List_1_t2755808515 ** get_address_of_achievementList_10() { return &___achievementList_10; }
	inline void set_achievementList_10(List_1_t2755808515 * value)
	{
		___achievementList_10 = value;
		Il2CppCodeGenWriteBarrier(&___achievementList_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
