#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SearchListController
struct SearchListController_t3630409576;
// ItemController[]
struct ItemControllerU5BU5D_t4270552110;
// SearchListController/UpdateDelegate
struct UpdateDelegate_t3237366539;
// System.Collections.Generic.List`1<ItemController>
struct List_1_t2755808515;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SearchListController
struct  SearchListController_t3630409576  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 SearchListController::MAX_ITEMS_TO_FIND
	int32_t ___MAX_ITEMS_TO_FIND_2;
	// System.Int32 SearchListController::totalItemCount
	int32_t ___totalItemCount_4;
	// ItemController[] SearchListController::searchItemControllers
	ItemControllerU5BU5D_t4270552110* ___searchItemControllers_5;
	// SearchListController/UpdateDelegate SearchListController::updateDelegate
	UpdateDelegate_t3237366539 * ___updateDelegate_6;
	// System.Collections.Generic.List`1<ItemController> SearchListController::itemNotFound
	List_1_t2755808515 * ___itemNotFound_7;
	// UnityEngine.GameObject SearchListController::panel
	GameObject_t1756533147 * ___panel_8;

public:
	inline static int32_t get_offset_of_MAX_ITEMS_TO_FIND_2() { return static_cast<int32_t>(offsetof(SearchListController_t3630409576, ___MAX_ITEMS_TO_FIND_2)); }
	inline int32_t get_MAX_ITEMS_TO_FIND_2() const { return ___MAX_ITEMS_TO_FIND_2; }
	inline int32_t* get_address_of_MAX_ITEMS_TO_FIND_2() { return &___MAX_ITEMS_TO_FIND_2; }
	inline void set_MAX_ITEMS_TO_FIND_2(int32_t value)
	{
		___MAX_ITEMS_TO_FIND_2 = value;
	}

	inline static int32_t get_offset_of_totalItemCount_4() { return static_cast<int32_t>(offsetof(SearchListController_t3630409576, ___totalItemCount_4)); }
	inline int32_t get_totalItemCount_4() const { return ___totalItemCount_4; }
	inline int32_t* get_address_of_totalItemCount_4() { return &___totalItemCount_4; }
	inline void set_totalItemCount_4(int32_t value)
	{
		___totalItemCount_4 = value;
	}

	inline static int32_t get_offset_of_searchItemControllers_5() { return static_cast<int32_t>(offsetof(SearchListController_t3630409576, ___searchItemControllers_5)); }
	inline ItemControllerU5BU5D_t4270552110* get_searchItemControllers_5() const { return ___searchItemControllers_5; }
	inline ItemControllerU5BU5D_t4270552110** get_address_of_searchItemControllers_5() { return &___searchItemControllers_5; }
	inline void set_searchItemControllers_5(ItemControllerU5BU5D_t4270552110* value)
	{
		___searchItemControllers_5 = value;
		Il2CppCodeGenWriteBarrier(&___searchItemControllers_5, value);
	}

	inline static int32_t get_offset_of_updateDelegate_6() { return static_cast<int32_t>(offsetof(SearchListController_t3630409576, ___updateDelegate_6)); }
	inline UpdateDelegate_t3237366539 * get_updateDelegate_6() const { return ___updateDelegate_6; }
	inline UpdateDelegate_t3237366539 ** get_address_of_updateDelegate_6() { return &___updateDelegate_6; }
	inline void set_updateDelegate_6(UpdateDelegate_t3237366539 * value)
	{
		___updateDelegate_6 = value;
		Il2CppCodeGenWriteBarrier(&___updateDelegate_6, value);
	}

	inline static int32_t get_offset_of_itemNotFound_7() { return static_cast<int32_t>(offsetof(SearchListController_t3630409576, ___itemNotFound_7)); }
	inline List_1_t2755808515 * get_itemNotFound_7() const { return ___itemNotFound_7; }
	inline List_1_t2755808515 ** get_address_of_itemNotFound_7() { return &___itemNotFound_7; }
	inline void set_itemNotFound_7(List_1_t2755808515 * value)
	{
		___itemNotFound_7 = value;
		Il2CppCodeGenWriteBarrier(&___itemNotFound_7, value);
	}

	inline static int32_t get_offset_of_panel_8() { return static_cast<int32_t>(offsetof(SearchListController_t3630409576, ___panel_8)); }
	inline GameObject_t1756533147 * get_panel_8() const { return ___panel_8; }
	inline GameObject_t1756533147 ** get_address_of_panel_8() { return &___panel_8; }
	inline void set_panel_8(GameObject_t1756533147 * value)
	{
		___panel_8 = value;
		Il2CppCodeGenWriteBarrier(&___panel_8, value);
	}
};

struct SearchListController_t3630409576_StaticFields
{
public:
	// SearchListController SearchListController::searchListController
	SearchListController_t3630409576 * ___searchListController_3;

public:
	inline static int32_t get_offset_of_searchListController_3() { return static_cast<int32_t>(offsetof(SearchListController_t3630409576_StaticFields, ___searchListController_3)); }
	inline SearchListController_t3630409576 * get_searchListController_3() const { return ___searchListController_3; }
	inline SearchListController_t3630409576 ** get_address_of_searchListController_3() { return &___searchListController_3; }
	inline void set_searchListController_3(SearchListController_t3630409576 * value)
	{
		___searchListController_3 = value;
		Il2CppCodeGenWriteBarrier(&___searchListController_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
