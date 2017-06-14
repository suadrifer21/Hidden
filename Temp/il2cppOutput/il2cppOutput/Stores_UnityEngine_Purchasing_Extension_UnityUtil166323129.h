#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Action>
struct List_1_t2595592884;
// System.Collections.Generic.List`1<UnityEngine.RuntimePlatform>
struct List_1_t1238706099;
// System.Collections.Generic.List`1<System.Action`1<System.Boolean>>
struct List_1_t2996495232;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "mscorlib_System_Boolean3825574718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.Extension.UnityUtil
struct  UnityUtil_t166323129  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<System.Action`1<System.Boolean>> UnityEngine.Purchasing.Extension.UnityUtil::pauseListeners
	List_1_t2996495232 * ___pauseListeners_5;

public:
	inline static int32_t get_offset_of_pauseListeners_5() { return static_cast<int32_t>(offsetof(UnityUtil_t166323129, ___pauseListeners_5)); }
	inline List_1_t2996495232 * get_pauseListeners_5() const { return ___pauseListeners_5; }
	inline List_1_t2996495232 ** get_address_of_pauseListeners_5() { return &___pauseListeners_5; }
	inline void set_pauseListeners_5(List_1_t2996495232 * value)
	{
		___pauseListeners_5 = value;
		Il2CppCodeGenWriteBarrier(&___pauseListeners_5, value);
	}
};

struct UnityUtil_t166323129_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.Action> UnityEngine.Purchasing.Extension.UnityUtil::s_Callbacks
	List_1_t2595592884 * ___s_Callbacks_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngine.Purchasing.Extension.UnityUtil::s_CallbacksPending
	bool ___s_CallbacksPending_3;
	// System.Collections.Generic.List`1<UnityEngine.RuntimePlatform> UnityEngine.Purchasing.Extension.UnityUtil::s_PcControlledPlatforms
	List_1_t1238706099 * ___s_PcControlledPlatforms_4;

public:
	inline static int32_t get_offset_of_s_Callbacks_2() { return static_cast<int32_t>(offsetof(UnityUtil_t166323129_StaticFields, ___s_Callbacks_2)); }
	inline List_1_t2595592884 * get_s_Callbacks_2() const { return ___s_Callbacks_2; }
	inline List_1_t2595592884 ** get_address_of_s_Callbacks_2() { return &___s_Callbacks_2; }
	inline void set_s_Callbacks_2(List_1_t2595592884 * value)
	{
		___s_Callbacks_2 = value;
		Il2CppCodeGenWriteBarrier(&___s_Callbacks_2, value);
	}

	inline static int32_t get_offset_of_s_CallbacksPending_3() { return static_cast<int32_t>(offsetof(UnityUtil_t166323129_StaticFields, ___s_CallbacksPending_3)); }
	inline bool get_s_CallbacksPending_3() const { return ___s_CallbacksPending_3; }
	inline bool* get_address_of_s_CallbacksPending_3() { return &___s_CallbacksPending_3; }
	inline void set_s_CallbacksPending_3(bool value)
	{
		___s_CallbacksPending_3 = value;
	}

	inline static int32_t get_offset_of_s_PcControlledPlatforms_4() { return static_cast<int32_t>(offsetof(UnityUtil_t166323129_StaticFields, ___s_PcControlledPlatforms_4)); }
	inline List_1_t1238706099 * get_s_PcControlledPlatforms_4() const { return ___s_PcControlledPlatforms_4; }
	inline List_1_t1238706099 ** get_address_of_s_PcControlledPlatforms_4() { return &___s_PcControlledPlatforms_4; }
	inline void set_s_PcControlledPlatforms_4(List_1_t1238706099 * value)
	{
		___s_PcControlledPlatforms_4 = value;
		Il2CppCodeGenWriteBarrier(&___s_PcControlledPlatforms_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
