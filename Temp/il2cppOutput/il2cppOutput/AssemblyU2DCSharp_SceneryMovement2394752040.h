#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1612828712;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneryMovement
struct  SceneryMovement_t2394752040  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> SceneryMovement::movementPoint
	List_1_t1612828712 * ___movementPoint_2;
	// System.Int32 SceneryMovement::nextPoint
	int32_t ___nextPoint_3;
	// System.Single SceneryMovement::movSpeed
	float ___movSpeed_4;
	// System.Boolean SceneryMovement::moveOnlyOnce
	bool ___moveOnlyOnce_5;
	// UnityEngine.GameObject SceneryMovement::title
	GameObject_t1756533147 * ___title_6;

public:
	inline static int32_t get_offset_of_movementPoint_2() { return static_cast<int32_t>(offsetof(SceneryMovement_t2394752040, ___movementPoint_2)); }
	inline List_1_t1612828712 * get_movementPoint_2() const { return ___movementPoint_2; }
	inline List_1_t1612828712 ** get_address_of_movementPoint_2() { return &___movementPoint_2; }
	inline void set_movementPoint_2(List_1_t1612828712 * value)
	{
		___movementPoint_2 = value;
		Il2CppCodeGenWriteBarrier(&___movementPoint_2, value);
	}

	inline static int32_t get_offset_of_nextPoint_3() { return static_cast<int32_t>(offsetof(SceneryMovement_t2394752040, ___nextPoint_3)); }
	inline int32_t get_nextPoint_3() const { return ___nextPoint_3; }
	inline int32_t* get_address_of_nextPoint_3() { return &___nextPoint_3; }
	inline void set_nextPoint_3(int32_t value)
	{
		___nextPoint_3 = value;
	}

	inline static int32_t get_offset_of_movSpeed_4() { return static_cast<int32_t>(offsetof(SceneryMovement_t2394752040, ___movSpeed_4)); }
	inline float get_movSpeed_4() const { return ___movSpeed_4; }
	inline float* get_address_of_movSpeed_4() { return &___movSpeed_4; }
	inline void set_movSpeed_4(float value)
	{
		___movSpeed_4 = value;
	}

	inline static int32_t get_offset_of_moveOnlyOnce_5() { return static_cast<int32_t>(offsetof(SceneryMovement_t2394752040, ___moveOnlyOnce_5)); }
	inline bool get_moveOnlyOnce_5() const { return ___moveOnlyOnce_5; }
	inline bool* get_address_of_moveOnlyOnce_5() { return &___moveOnlyOnce_5; }
	inline void set_moveOnlyOnce_5(bool value)
	{
		___moveOnlyOnce_5 = value;
	}

	inline static int32_t get_offset_of_title_6() { return static_cast<int32_t>(offsetof(SceneryMovement_t2394752040, ___title_6)); }
	inline GameObject_t1756533147 * get_title_6() const { return ___title_6; }
	inline GameObject_t1756533147 ** get_address_of_title_6() { return &___title_6; }
	inline void set_title_6(GameObject_t1756533147 * value)
	{
		___title_6 = value;
		Il2CppCodeGenWriteBarrier(&___title_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
