#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs>
struct EventHandler_1_t2737845578;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.iOS.Platform/<UnityAdsReady>c__AnonStorey0
struct  U3CUnityAdsReadyU3Ec__AnonStorey0_t1627639653  : public Il2CppObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.ReadyEventArgs> UnityEngine.Advertisements.iOS.Platform/<UnityAdsReady>c__AnonStorey0::handler
	EventHandler_1_t2737845578 * ___handler_0;
	// System.String UnityEngine.Advertisements.iOS.Platform/<UnityAdsReady>c__AnonStorey0::placementId
	String_t* ___placementId_1;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(U3CUnityAdsReadyU3Ec__AnonStorey0_t1627639653, ___handler_0)); }
	inline EventHandler_1_t2737845578 * get_handler_0() const { return ___handler_0; }
	inline EventHandler_1_t2737845578 ** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(EventHandler_1_t2737845578 * value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier(&___handler_0, value);
	}

	inline static int32_t get_offset_of_placementId_1() { return static_cast<int32_t>(offsetof(U3CUnityAdsReadyU3Ec__AnonStorey0_t1627639653, ___placementId_1)); }
	inline String_t* get_placementId_1() const { return ___placementId_1; }
	inline String_t** get_address_of_placementId_1() { return &___placementId_1; }
	inline void set_placementId_1(String_t* value)
	{
		___placementId_1 = value;
		Il2CppCodeGenWriteBarrier(&___placementId_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
