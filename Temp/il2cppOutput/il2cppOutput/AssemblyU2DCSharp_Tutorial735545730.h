#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Tutorial
struct Tutorial_t735545730;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tutorial
struct  Tutorial_t735545730  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform Tutorial::tutorial
	Transform_t3275118058 * ___tutorial_3;
	// UnityEngine.GameObject Tutorial::curTutsPanel
	GameObject_t1756533147 * ___curTutsPanel_4;
	// UnityEngine.GameObject Tutorial::tutsScreenButton
	GameObject_t1756533147 * ___tutsScreenButton_5;
	// System.Int32 Tutorial::t
	int32_t ___t_6;

public:
	inline static int32_t get_offset_of_tutorial_3() { return static_cast<int32_t>(offsetof(Tutorial_t735545730, ___tutorial_3)); }
	inline Transform_t3275118058 * get_tutorial_3() const { return ___tutorial_3; }
	inline Transform_t3275118058 ** get_address_of_tutorial_3() { return &___tutorial_3; }
	inline void set_tutorial_3(Transform_t3275118058 * value)
	{
		___tutorial_3 = value;
		Il2CppCodeGenWriteBarrier(&___tutorial_3, value);
	}

	inline static int32_t get_offset_of_curTutsPanel_4() { return static_cast<int32_t>(offsetof(Tutorial_t735545730, ___curTutsPanel_4)); }
	inline GameObject_t1756533147 * get_curTutsPanel_4() const { return ___curTutsPanel_4; }
	inline GameObject_t1756533147 ** get_address_of_curTutsPanel_4() { return &___curTutsPanel_4; }
	inline void set_curTutsPanel_4(GameObject_t1756533147 * value)
	{
		___curTutsPanel_4 = value;
		Il2CppCodeGenWriteBarrier(&___curTutsPanel_4, value);
	}

	inline static int32_t get_offset_of_tutsScreenButton_5() { return static_cast<int32_t>(offsetof(Tutorial_t735545730, ___tutsScreenButton_5)); }
	inline GameObject_t1756533147 * get_tutsScreenButton_5() const { return ___tutsScreenButton_5; }
	inline GameObject_t1756533147 ** get_address_of_tutsScreenButton_5() { return &___tutsScreenButton_5; }
	inline void set_tutsScreenButton_5(GameObject_t1756533147 * value)
	{
		___tutsScreenButton_5 = value;
		Il2CppCodeGenWriteBarrier(&___tutsScreenButton_5, value);
	}

	inline static int32_t get_offset_of_t_6() { return static_cast<int32_t>(offsetof(Tutorial_t735545730, ___t_6)); }
	inline int32_t get_t_6() const { return ___t_6; }
	inline int32_t* get_address_of_t_6() { return &___t_6; }
	inline void set_t_6(int32_t value)
	{
		___t_6 = value;
	}
};

struct Tutorial_t735545730_StaticFields
{
public:
	// Tutorial Tutorial::instance
	Tutorial_t735545730 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(Tutorial_t735545730_StaticFields, ___instance_2)); }
	inline Tutorial_t735545730 * get_instance_2() const { return ___instance_2; }
	inline Tutorial_t735545730 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(Tutorial_t735545730 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
