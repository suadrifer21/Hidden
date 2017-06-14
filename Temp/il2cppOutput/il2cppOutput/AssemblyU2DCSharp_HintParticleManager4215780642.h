#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// HintParticleManager
struct HintParticleManager_t4215780642;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HintParticleManager
struct  HintParticleManager_t4215780642  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject HintParticleManager::hintedObject
	GameObject_t1756533147 * ___hintedObject_3;
	// UnityEngine.UI.Button HintParticleManager::hintButton
	Button_t2872111280 * ___hintButton_4;
	// UnityEngine.GameObject HintParticleManager::getMoreHintButton
	GameObject_t1756533147 * ___getMoreHintButton_5;
	// System.Boolean HintParticleManager::sparkleActive
	bool ___sparkleActive_6;
	// UnityEngine.Color HintParticleManager::color
	Color_t2020392075  ___color_7;
	// UnityEngine.GameObject HintParticleManager::pointer
	GameObject_t1756533147 * ___pointer_8;
	// System.Boolean HintParticleManager::isPointing
	bool ___isPointing_9;
	// System.Int32 HintParticleManager::hintRemaining
	int32_t ___hintRemaining_10;
	// UnityEngine.UI.Text HintParticleManager::hintRemainingText
	Text_t356221433 * ___hintRemainingText_11;
	// UnityEngine.GameObject HintParticleManager::confirmationDialog
	GameObject_t1756533147 * ___confirmationDialog_12;

public:
	inline static int32_t get_offset_of_hintedObject_3() { return static_cast<int32_t>(offsetof(HintParticleManager_t4215780642, ___hintedObject_3)); }
	inline GameObject_t1756533147 * get_hintedObject_3() const { return ___hintedObject_3; }
	inline GameObject_t1756533147 ** get_address_of_hintedObject_3() { return &___hintedObject_3; }
	inline void set_hintedObject_3(GameObject_t1756533147 * value)
	{
		___hintedObject_3 = value;
		Il2CppCodeGenWriteBarrier(&___hintedObject_3, value);
	}

	inline static int32_t get_offset_of_hintButton_4() { return static_cast<int32_t>(offsetof(HintParticleManager_t4215780642, ___hintButton_4)); }
	inline Button_t2872111280 * get_hintButton_4() const { return ___hintButton_4; }
	inline Button_t2872111280 ** get_address_of_hintButton_4() { return &___hintButton_4; }
	inline void set_hintButton_4(Button_t2872111280 * value)
	{
		___hintButton_4 = value;
		Il2CppCodeGenWriteBarrier(&___hintButton_4, value);
	}

	inline static int32_t get_offset_of_getMoreHintButton_5() { return static_cast<int32_t>(offsetof(HintParticleManager_t4215780642, ___getMoreHintButton_5)); }
	inline GameObject_t1756533147 * get_getMoreHintButton_5() const { return ___getMoreHintButton_5; }
	inline GameObject_t1756533147 ** get_address_of_getMoreHintButton_5() { return &___getMoreHintButton_5; }
	inline void set_getMoreHintButton_5(GameObject_t1756533147 * value)
	{
		___getMoreHintButton_5 = value;
		Il2CppCodeGenWriteBarrier(&___getMoreHintButton_5, value);
	}

	inline static int32_t get_offset_of_sparkleActive_6() { return static_cast<int32_t>(offsetof(HintParticleManager_t4215780642, ___sparkleActive_6)); }
	inline bool get_sparkleActive_6() const { return ___sparkleActive_6; }
	inline bool* get_address_of_sparkleActive_6() { return &___sparkleActive_6; }
	inline void set_sparkleActive_6(bool value)
	{
		___sparkleActive_6 = value;
	}

	inline static int32_t get_offset_of_color_7() { return static_cast<int32_t>(offsetof(HintParticleManager_t4215780642, ___color_7)); }
	inline Color_t2020392075  get_color_7() const { return ___color_7; }
	inline Color_t2020392075 * get_address_of_color_7() { return &___color_7; }
	inline void set_color_7(Color_t2020392075  value)
	{
		___color_7 = value;
	}

	inline static int32_t get_offset_of_pointer_8() { return static_cast<int32_t>(offsetof(HintParticleManager_t4215780642, ___pointer_8)); }
	inline GameObject_t1756533147 * get_pointer_8() const { return ___pointer_8; }
	inline GameObject_t1756533147 ** get_address_of_pointer_8() { return &___pointer_8; }
	inline void set_pointer_8(GameObject_t1756533147 * value)
	{
		___pointer_8 = value;
		Il2CppCodeGenWriteBarrier(&___pointer_8, value);
	}

	inline static int32_t get_offset_of_isPointing_9() { return static_cast<int32_t>(offsetof(HintParticleManager_t4215780642, ___isPointing_9)); }
	inline bool get_isPointing_9() const { return ___isPointing_9; }
	inline bool* get_address_of_isPointing_9() { return &___isPointing_9; }
	inline void set_isPointing_9(bool value)
	{
		___isPointing_9 = value;
	}

	inline static int32_t get_offset_of_hintRemaining_10() { return static_cast<int32_t>(offsetof(HintParticleManager_t4215780642, ___hintRemaining_10)); }
	inline int32_t get_hintRemaining_10() const { return ___hintRemaining_10; }
	inline int32_t* get_address_of_hintRemaining_10() { return &___hintRemaining_10; }
	inline void set_hintRemaining_10(int32_t value)
	{
		___hintRemaining_10 = value;
	}

	inline static int32_t get_offset_of_hintRemainingText_11() { return static_cast<int32_t>(offsetof(HintParticleManager_t4215780642, ___hintRemainingText_11)); }
	inline Text_t356221433 * get_hintRemainingText_11() const { return ___hintRemainingText_11; }
	inline Text_t356221433 ** get_address_of_hintRemainingText_11() { return &___hintRemainingText_11; }
	inline void set_hintRemainingText_11(Text_t356221433 * value)
	{
		___hintRemainingText_11 = value;
		Il2CppCodeGenWriteBarrier(&___hintRemainingText_11, value);
	}

	inline static int32_t get_offset_of_confirmationDialog_12() { return static_cast<int32_t>(offsetof(HintParticleManager_t4215780642, ___confirmationDialog_12)); }
	inline GameObject_t1756533147 * get_confirmationDialog_12() const { return ___confirmationDialog_12; }
	inline GameObject_t1756533147 ** get_address_of_confirmationDialog_12() { return &___confirmationDialog_12; }
	inline void set_confirmationDialog_12(GameObject_t1756533147 * value)
	{
		___confirmationDialog_12 = value;
		Il2CppCodeGenWriteBarrier(&___confirmationDialog_12, value);
	}
};

struct HintParticleManager_t4215780642_StaticFields
{
public:
	// HintParticleManager HintParticleManager::instance
	HintParticleManager_t4215780642 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(HintParticleManager_t4215780642_StaticFields, ___instance_2)); }
	inline HintParticleManager_t4215780642 * get_instance_2() const { return ___instance_2; }
	inline HintParticleManager_t4215780642 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(HintParticleManager_t4215780642 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
