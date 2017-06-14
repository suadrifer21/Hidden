#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Queue`1<System.Action`1<UnityEngine.Advertisements.CallbackExecutor>>
struct Queue_1_t2568776653;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.CallbackExecutor
struct  CallbackExecutor_t2947320436  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.Queue`1<System.Action`1<UnityEngine.Advertisements.CallbackExecutor>> UnityEngine.Advertisements.CallbackExecutor::s_Queue
	Queue_1_t2568776653 * ___s_Queue_2;

public:
	inline static int32_t get_offset_of_s_Queue_2() { return static_cast<int32_t>(offsetof(CallbackExecutor_t2947320436, ___s_Queue_2)); }
	inline Queue_1_t2568776653 * get_s_Queue_2() const { return ___s_Queue_2; }
	inline Queue_1_t2568776653 ** get_address_of_s_Queue_2() { return &___s_Queue_2; }
	inline void set_s_Queue_2(Queue_1_t2568776653 * value)
	{
		___s_Queue_2 = value;
		Il2CppCodeGenWriteBarrier(&___s_Queue_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
