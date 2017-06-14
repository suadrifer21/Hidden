#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs>
struct EventHandler_1_t4277752891;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidError>c__AnonStorey1
struct  U3CUnityAdsDidErrorU3Ec__AnonStorey1_t150098462  : public Il2CppObject
{
public:
	// System.EventHandler`1<UnityEngine.Advertisements.ErrorEventArgs> UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidError>c__AnonStorey1::handler
	EventHandler_1_t4277752891 * ___handler_0;
	// System.Int64 UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidError>c__AnonStorey1::rawError
	int64_t ___rawError_1;
	// System.String UnityEngine.Advertisements.iOS.Platform/<UnityAdsDidError>c__AnonStorey1::message
	String_t* ___message_2;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(U3CUnityAdsDidErrorU3Ec__AnonStorey1_t150098462, ___handler_0)); }
	inline EventHandler_1_t4277752891 * get_handler_0() const { return ___handler_0; }
	inline EventHandler_1_t4277752891 ** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(EventHandler_1_t4277752891 * value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier(&___handler_0, value);
	}

	inline static int32_t get_offset_of_rawError_1() { return static_cast<int32_t>(offsetof(U3CUnityAdsDidErrorU3Ec__AnonStorey1_t150098462, ___rawError_1)); }
	inline int64_t get_rawError_1() const { return ___rawError_1; }
	inline int64_t* get_address_of_rawError_1() { return &___rawError_1; }
	inline void set_rawError_1(int64_t value)
	{
		___rawError_1 = value;
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(U3CUnityAdsDidErrorU3Ec__AnonStorey1_t150098462, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier(&___message_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
