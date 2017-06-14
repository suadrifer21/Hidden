#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs>
struct EventHandler_1_t3917218901;
// System.String
struct String_t;
// UnityEngine.Advertisements.Android.Platform
struct Platform_t3070849459;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Android.Platform/<onUnityAdsStart>c__AnonStorey1
struct  U3ConUnityAdsStartU3Ec__AnonStorey1_t3624852620  : public Il2CppObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.StartEventArgs> UnityEngine.Advertisements.Android.Platform/<onUnityAdsStart>c__AnonStorey1::handler
	EventHandler_1_t3917218901 * ___handler_0;
	// System.String UnityEngine.Advertisements.Android.Platform/<onUnityAdsStart>c__AnonStorey1::placementId
	String_t* ___placementId_1;
	// UnityEngine.Advertisements.Android.Platform UnityEngine.Advertisements.Android.Platform/<onUnityAdsStart>c__AnonStorey1::$this
	Platform_t3070849459 * ___U24this_2;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(U3ConUnityAdsStartU3Ec__AnonStorey1_t3624852620, ___handler_0)); }
	inline EventHandler_1_t3917218901 * get_handler_0() const { return ___handler_0; }
	inline EventHandler_1_t3917218901 ** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(EventHandler_1_t3917218901 * value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier(&___handler_0, value);
	}

	inline static int32_t get_offset_of_placementId_1() { return static_cast<int32_t>(offsetof(U3ConUnityAdsStartU3Ec__AnonStorey1_t3624852620, ___placementId_1)); }
	inline String_t* get_placementId_1() const { return ___placementId_1; }
	inline String_t** get_address_of_placementId_1() { return &___placementId_1; }
	inline void set_placementId_1(String_t* value)
	{
		___placementId_1 = value;
		Il2CppCodeGenWriteBarrier(&___placementId_1, value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3ConUnityAdsStartU3Ec__AnonStorey1_t3624852620, ___U24this_2)); }
	inline Platform_t3070849459 * get_U24this_2() const { return ___U24this_2; }
	inline Platform_t3070849459 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(Platform_t3070849459 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
