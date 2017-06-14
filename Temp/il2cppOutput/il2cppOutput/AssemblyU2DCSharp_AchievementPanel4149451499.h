#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// UnityEngine.UI.Image
struct Image_t2042527209;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AchievementPanel
struct  AchievementPanel_t4149451499  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean AchievementPanel::zoom
	bool ___zoom_2;
	// System.Single AchievementPanel::endAlpha
	float ___endAlpha_3;
	// System.Single AchievementPanel::alphaRate
	float ___alphaRate_4;
	// UnityEngine.Transform AchievementPanel::iconParent
	Transform_t3275118058 * ___iconParent_5;
	// UnityEngine.GameObject AchievementPanel::achiUi
	GameObject_t1756533147 * ___achiUi_6;
	// System.String AchievementPanel::title
	String_t* ___title_7;
	// UnityEngine.UI.Image AchievementPanel::icon
	Image_t2042527209 * ___icon_8;
	// UnityEngine.GameObject AchievementPanel::iconRef
	GameObject_t1756533147 * ___iconRef_9;
	// UnityEngine.GameObject AchievementPanel::screenButton
	GameObject_t1756533147 * ___screenButton_10;

public:
	inline static int32_t get_offset_of_zoom_2() { return static_cast<int32_t>(offsetof(AchievementPanel_t4149451499, ___zoom_2)); }
	inline bool get_zoom_2() const { return ___zoom_2; }
	inline bool* get_address_of_zoom_2() { return &___zoom_2; }
	inline void set_zoom_2(bool value)
	{
		___zoom_2 = value;
	}

	inline static int32_t get_offset_of_endAlpha_3() { return static_cast<int32_t>(offsetof(AchievementPanel_t4149451499, ___endAlpha_3)); }
	inline float get_endAlpha_3() const { return ___endAlpha_3; }
	inline float* get_address_of_endAlpha_3() { return &___endAlpha_3; }
	inline void set_endAlpha_3(float value)
	{
		___endAlpha_3 = value;
	}

	inline static int32_t get_offset_of_alphaRate_4() { return static_cast<int32_t>(offsetof(AchievementPanel_t4149451499, ___alphaRate_4)); }
	inline float get_alphaRate_4() const { return ___alphaRate_4; }
	inline float* get_address_of_alphaRate_4() { return &___alphaRate_4; }
	inline void set_alphaRate_4(float value)
	{
		___alphaRate_4 = value;
	}

	inline static int32_t get_offset_of_iconParent_5() { return static_cast<int32_t>(offsetof(AchievementPanel_t4149451499, ___iconParent_5)); }
	inline Transform_t3275118058 * get_iconParent_5() const { return ___iconParent_5; }
	inline Transform_t3275118058 ** get_address_of_iconParent_5() { return &___iconParent_5; }
	inline void set_iconParent_5(Transform_t3275118058 * value)
	{
		___iconParent_5 = value;
		Il2CppCodeGenWriteBarrier(&___iconParent_5, value);
	}

	inline static int32_t get_offset_of_achiUi_6() { return static_cast<int32_t>(offsetof(AchievementPanel_t4149451499, ___achiUi_6)); }
	inline GameObject_t1756533147 * get_achiUi_6() const { return ___achiUi_6; }
	inline GameObject_t1756533147 ** get_address_of_achiUi_6() { return &___achiUi_6; }
	inline void set_achiUi_6(GameObject_t1756533147 * value)
	{
		___achiUi_6 = value;
		Il2CppCodeGenWriteBarrier(&___achiUi_6, value);
	}

	inline static int32_t get_offset_of_title_7() { return static_cast<int32_t>(offsetof(AchievementPanel_t4149451499, ___title_7)); }
	inline String_t* get_title_7() const { return ___title_7; }
	inline String_t** get_address_of_title_7() { return &___title_7; }
	inline void set_title_7(String_t* value)
	{
		___title_7 = value;
		Il2CppCodeGenWriteBarrier(&___title_7, value);
	}

	inline static int32_t get_offset_of_icon_8() { return static_cast<int32_t>(offsetof(AchievementPanel_t4149451499, ___icon_8)); }
	inline Image_t2042527209 * get_icon_8() const { return ___icon_8; }
	inline Image_t2042527209 ** get_address_of_icon_8() { return &___icon_8; }
	inline void set_icon_8(Image_t2042527209 * value)
	{
		___icon_8 = value;
		Il2CppCodeGenWriteBarrier(&___icon_8, value);
	}

	inline static int32_t get_offset_of_iconRef_9() { return static_cast<int32_t>(offsetof(AchievementPanel_t4149451499, ___iconRef_9)); }
	inline GameObject_t1756533147 * get_iconRef_9() const { return ___iconRef_9; }
	inline GameObject_t1756533147 ** get_address_of_iconRef_9() { return &___iconRef_9; }
	inline void set_iconRef_9(GameObject_t1756533147 * value)
	{
		___iconRef_9 = value;
		Il2CppCodeGenWriteBarrier(&___iconRef_9, value);
	}

	inline static int32_t get_offset_of_screenButton_10() { return static_cast<int32_t>(offsetof(AchievementPanel_t4149451499, ___screenButton_10)); }
	inline GameObject_t1756533147 * get_screenButton_10() const { return ___screenButton_10; }
	inline GameObject_t1756533147 ** get_address_of_screenButton_10() { return &___screenButton_10; }
	inline void set_screenButton_10(GameObject_t1756533147 * value)
	{
		___screenButton_10 = value;
		Il2CppCodeGenWriteBarrier(&___screenButton_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
