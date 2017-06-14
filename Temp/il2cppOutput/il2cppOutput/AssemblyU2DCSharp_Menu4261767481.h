#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Menu
struct Menu_t4261767481;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Menu
struct  Menu_t4261767481  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Menu::menu
	GameObject_t1756533147 * ___menu_3;
	// System.Boolean Menu::isGameOn
	bool ___isGameOn_4;
	// UnityEngine.GameObject Menu::bottomPanel
	GameObject_t1756533147 * ___bottomPanel_5;
	// UnityEngine.GameObject Menu::screenButton
	GameObject_t1756533147 * ___screenButton_6;
	// System.Boolean Menu::isTutorialOn
	bool ___isTutorialOn_7;

public:
	inline static int32_t get_offset_of_menu_3() { return static_cast<int32_t>(offsetof(Menu_t4261767481, ___menu_3)); }
	inline GameObject_t1756533147 * get_menu_3() const { return ___menu_3; }
	inline GameObject_t1756533147 ** get_address_of_menu_3() { return &___menu_3; }
	inline void set_menu_3(GameObject_t1756533147 * value)
	{
		___menu_3 = value;
		Il2CppCodeGenWriteBarrier(&___menu_3, value);
	}

	inline static int32_t get_offset_of_isGameOn_4() { return static_cast<int32_t>(offsetof(Menu_t4261767481, ___isGameOn_4)); }
	inline bool get_isGameOn_4() const { return ___isGameOn_4; }
	inline bool* get_address_of_isGameOn_4() { return &___isGameOn_4; }
	inline void set_isGameOn_4(bool value)
	{
		___isGameOn_4 = value;
	}

	inline static int32_t get_offset_of_bottomPanel_5() { return static_cast<int32_t>(offsetof(Menu_t4261767481, ___bottomPanel_5)); }
	inline GameObject_t1756533147 * get_bottomPanel_5() const { return ___bottomPanel_5; }
	inline GameObject_t1756533147 ** get_address_of_bottomPanel_5() { return &___bottomPanel_5; }
	inline void set_bottomPanel_5(GameObject_t1756533147 * value)
	{
		___bottomPanel_5 = value;
		Il2CppCodeGenWriteBarrier(&___bottomPanel_5, value);
	}

	inline static int32_t get_offset_of_screenButton_6() { return static_cast<int32_t>(offsetof(Menu_t4261767481, ___screenButton_6)); }
	inline GameObject_t1756533147 * get_screenButton_6() const { return ___screenButton_6; }
	inline GameObject_t1756533147 ** get_address_of_screenButton_6() { return &___screenButton_6; }
	inline void set_screenButton_6(GameObject_t1756533147 * value)
	{
		___screenButton_6 = value;
		Il2CppCodeGenWriteBarrier(&___screenButton_6, value);
	}

	inline static int32_t get_offset_of_isTutorialOn_7() { return static_cast<int32_t>(offsetof(Menu_t4261767481, ___isTutorialOn_7)); }
	inline bool get_isTutorialOn_7() const { return ___isTutorialOn_7; }
	inline bool* get_address_of_isTutorialOn_7() { return &___isTutorialOn_7; }
	inline void set_isTutorialOn_7(bool value)
	{
		___isTutorialOn_7 = value;
	}
};

struct Menu_t4261767481_StaticFields
{
public:
	// Menu Menu::instance
	Menu_t4261767481 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(Menu_t4261767481_StaticFields, ___instance_2)); }
	inline Menu_t4261767481 * get_instance_2() const { return ___instance_2; }
	inline Menu_t4261767481 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(Menu_t4261767481 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
