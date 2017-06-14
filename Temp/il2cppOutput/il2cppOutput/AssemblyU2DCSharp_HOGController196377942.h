#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// HOGController
struct HOGController_t196377942;
// ItemController
struct ItemController_t3386687383;
// AchievementPanel
struct AchievementPanel_t4149451499;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HOGController
struct  HOGController_t196377942  : public MonoBehaviour_t1158329972
{
public:
	// ItemController HOGController::itemController
	ItemController_t3386687383 * ___itemController_3;
	// AchievementPanel HOGController::achievementPanel
	AchievementPanel_t4149451499 * ___achievementPanel_4;
	// UnityEngine.UI.Text HOGController::achiTitle
	Text_t356221433 * ___achiTitle_5;
	// UnityEngine.UI.Text HOGController::achiDesc
	Text_t356221433 * ___achiDesc_6;

public:
	inline static int32_t get_offset_of_itemController_3() { return static_cast<int32_t>(offsetof(HOGController_t196377942, ___itemController_3)); }
	inline ItemController_t3386687383 * get_itemController_3() const { return ___itemController_3; }
	inline ItemController_t3386687383 ** get_address_of_itemController_3() { return &___itemController_3; }
	inline void set_itemController_3(ItemController_t3386687383 * value)
	{
		___itemController_3 = value;
		Il2CppCodeGenWriteBarrier(&___itemController_3, value);
	}

	inline static int32_t get_offset_of_achievementPanel_4() { return static_cast<int32_t>(offsetof(HOGController_t196377942, ___achievementPanel_4)); }
	inline AchievementPanel_t4149451499 * get_achievementPanel_4() const { return ___achievementPanel_4; }
	inline AchievementPanel_t4149451499 ** get_address_of_achievementPanel_4() { return &___achievementPanel_4; }
	inline void set_achievementPanel_4(AchievementPanel_t4149451499 * value)
	{
		___achievementPanel_4 = value;
		Il2CppCodeGenWriteBarrier(&___achievementPanel_4, value);
	}

	inline static int32_t get_offset_of_achiTitle_5() { return static_cast<int32_t>(offsetof(HOGController_t196377942, ___achiTitle_5)); }
	inline Text_t356221433 * get_achiTitle_5() const { return ___achiTitle_5; }
	inline Text_t356221433 ** get_address_of_achiTitle_5() { return &___achiTitle_5; }
	inline void set_achiTitle_5(Text_t356221433 * value)
	{
		___achiTitle_5 = value;
		Il2CppCodeGenWriteBarrier(&___achiTitle_5, value);
	}

	inline static int32_t get_offset_of_achiDesc_6() { return static_cast<int32_t>(offsetof(HOGController_t196377942, ___achiDesc_6)); }
	inline Text_t356221433 * get_achiDesc_6() const { return ___achiDesc_6; }
	inline Text_t356221433 ** get_address_of_achiDesc_6() { return &___achiDesc_6; }
	inline void set_achiDesc_6(Text_t356221433 * value)
	{
		___achiDesc_6 = value;
		Il2CppCodeGenWriteBarrier(&___achiDesc_6, value);
	}
};

struct HOGController_t196377942_StaticFields
{
public:
	// HOGController HOGController::hogController
	HOGController_t196377942 * ___hogController_2;

public:
	inline static int32_t get_offset_of_hogController_2() { return static_cast<int32_t>(offsetof(HOGController_t196377942_StaticFields, ___hogController_2)); }
	inline HOGController_t196377942 * get_hogController_2() const { return ___hogController_2; }
	inline HOGController_t196377942 ** get_address_of_hogController_2() { return &___hogController_2; }
	inline void set_hogController_2(HOGController_t196377942 * value)
	{
		___hogController_2 = value;
		Il2CppCodeGenWriteBarrier(&___hogController_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
