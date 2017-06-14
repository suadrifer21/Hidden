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
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Image
struct Image_t2042527209;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AchievementPageItem
struct  AchievementPageItem_t3302422319  : public MonoBehaviour_t1158329972
{
public:
	// System.String AchievementPageItem::achiName
	String_t* ___achiName_2;
	// System.Int32 AchievementPageItem::isActive
	int32_t ___isActive_3;
	// UnityEngine.UI.Text AchievementPageItem::achiTitleText
	Text_t356221433 * ___achiTitleText_4;
	// UnityEngine.UI.Text AchievementPageItem::achiDescText
	Text_t356221433 * ___achiDescText_5;
	// UnityEngine.GameObject AchievementPageItem::achievementPanel
	GameObject_t1756533147 * ___achievementPanel_6;
	// UnityEngine.UI.Image AchievementPageItem::achiIcon
	Image_t2042527209 * ___achiIcon_7;

public:
	inline static int32_t get_offset_of_achiName_2() { return static_cast<int32_t>(offsetof(AchievementPageItem_t3302422319, ___achiName_2)); }
	inline String_t* get_achiName_2() const { return ___achiName_2; }
	inline String_t** get_address_of_achiName_2() { return &___achiName_2; }
	inline void set_achiName_2(String_t* value)
	{
		___achiName_2 = value;
		Il2CppCodeGenWriteBarrier(&___achiName_2, value);
	}

	inline static int32_t get_offset_of_isActive_3() { return static_cast<int32_t>(offsetof(AchievementPageItem_t3302422319, ___isActive_3)); }
	inline int32_t get_isActive_3() const { return ___isActive_3; }
	inline int32_t* get_address_of_isActive_3() { return &___isActive_3; }
	inline void set_isActive_3(int32_t value)
	{
		___isActive_3 = value;
	}

	inline static int32_t get_offset_of_achiTitleText_4() { return static_cast<int32_t>(offsetof(AchievementPageItem_t3302422319, ___achiTitleText_4)); }
	inline Text_t356221433 * get_achiTitleText_4() const { return ___achiTitleText_4; }
	inline Text_t356221433 ** get_address_of_achiTitleText_4() { return &___achiTitleText_4; }
	inline void set_achiTitleText_4(Text_t356221433 * value)
	{
		___achiTitleText_4 = value;
		Il2CppCodeGenWriteBarrier(&___achiTitleText_4, value);
	}

	inline static int32_t get_offset_of_achiDescText_5() { return static_cast<int32_t>(offsetof(AchievementPageItem_t3302422319, ___achiDescText_5)); }
	inline Text_t356221433 * get_achiDescText_5() const { return ___achiDescText_5; }
	inline Text_t356221433 ** get_address_of_achiDescText_5() { return &___achiDescText_5; }
	inline void set_achiDescText_5(Text_t356221433 * value)
	{
		___achiDescText_5 = value;
		Il2CppCodeGenWriteBarrier(&___achiDescText_5, value);
	}

	inline static int32_t get_offset_of_achievementPanel_6() { return static_cast<int32_t>(offsetof(AchievementPageItem_t3302422319, ___achievementPanel_6)); }
	inline GameObject_t1756533147 * get_achievementPanel_6() const { return ___achievementPanel_6; }
	inline GameObject_t1756533147 ** get_address_of_achievementPanel_6() { return &___achievementPanel_6; }
	inline void set_achievementPanel_6(GameObject_t1756533147 * value)
	{
		___achievementPanel_6 = value;
		Il2CppCodeGenWriteBarrier(&___achievementPanel_6, value);
	}

	inline static int32_t get_offset_of_achiIcon_7() { return static_cast<int32_t>(offsetof(AchievementPageItem_t3302422319, ___achiIcon_7)); }
	inline Image_t2042527209 * get_achiIcon_7() const { return ___achiIcon_7; }
	inline Image_t2042527209 ** get_address_of_achiIcon_7() { return &___achiIcon_7; }
	inline void set_achiIcon_7(Image_t2042527209 * value)
	{
		___achiIcon_7 = value;
		Il2CppCodeGenWriteBarrier(&___achiIcon_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
