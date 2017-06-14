#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Button
struct Button_t2872111280;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HintButtonEffect
struct  HintButtonEffect_t1666913156  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject HintButtonEffect::hintedObject
	GameObject_t1756533147 * ___hintedObject_2;
	// UnityEngine.UI.Button HintButtonEffect::hintButton
	Button_t2872111280 * ___hintButton_3;

public:
	inline static int32_t get_offset_of_hintedObject_2() { return static_cast<int32_t>(offsetof(HintButtonEffect_t1666913156, ___hintedObject_2)); }
	inline GameObject_t1756533147 * get_hintedObject_2() const { return ___hintedObject_2; }
	inline GameObject_t1756533147 ** get_address_of_hintedObject_2() { return &___hintedObject_2; }
	inline void set_hintedObject_2(GameObject_t1756533147 * value)
	{
		___hintedObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___hintedObject_2, value);
	}

	inline static int32_t get_offset_of_hintButton_3() { return static_cast<int32_t>(offsetof(HintButtonEffect_t1666913156, ___hintButton_3)); }
	inline Button_t2872111280 * get_hintButton_3() const { return ___hintButton_3; }
	inline Button_t2872111280 ** get_address_of_hintButton_3() { return &___hintButton_3; }
	inline void set_hintButton_3(Button_t2872111280 * value)
	{
		___hintButton_3 = value;
		Il2CppCodeGenWriteBarrier(&___hintButton_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
