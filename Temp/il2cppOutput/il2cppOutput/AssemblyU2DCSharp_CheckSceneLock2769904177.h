#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<LevelLock>
struct List_1_t616880127;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CheckSceneLock
struct  CheckSceneLock_t2769904177  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<LevelLock> CheckSceneLock::levelLockList
	List_1_t616880127 * ___levelLockList_2;

public:
	inline static int32_t get_offset_of_levelLockList_2() { return static_cast<int32_t>(offsetof(CheckSceneLock_t2769904177, ___levelLockList_2)); }
	inline List_1_t616880127 * get_levelLockList_2() const { return ___levelLockList_2; }
	inline List_1_t616880127 ** get_address_of_levelLockList_2() { return &___levelLockList_2; }
	inline void set_levelLockList_2(List_1_t616880127 * value)
	{
		___levelLockList_2 = value;
		Il2CppCodeGenWriteBarrier(&___levelLockList_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
