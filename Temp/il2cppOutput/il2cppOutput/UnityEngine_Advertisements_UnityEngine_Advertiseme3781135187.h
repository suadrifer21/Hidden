#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.WebRequest
struct WebRequest_t1365124353;
// System.String
struct String_t;
// UnityEngine.Advertisements.Editor.Platform
struct Platform_t568704329;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Editor.Platform/<Initialize>c__AnonStorey0
struct  U3CInitializeU3Ec__AnonStorey0_t3781135187  : public Il2CppObject
{
public:
	// System.Net.WebRequest UnityEngine.Advertisements.Editor.Platform/<Initialize>c__AnonStorey0::request
	WebRequest_t1365124353 * ___request_0;
	// System.String UnityEngine.Advertisements.Editor.Platform/<Initialize>c__AnonStorey0::gameId
	String_t* ___gameId_1;
	// UnityEngine.Advertisements.Editor.Platform UnityEngine.Advertisements.Editor.Platform/<Initialize>c__AnonStorey0::$this
	Platform_t568704329 * ___U24this_2;

public:
	inline static int32_t get_offset_of_request_0() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ec__AnonStorey0_t3781135187, ___request_0)); }
	inline WebRequest_t1365124353 * get_request_0() const { return ___request_0; }
	inline WebRequest_t1365124353 ** get_address_of_request_0() { return &___request_0; }
	inline void set_request_0(WebRequest_t1365124353 * value)
	{
		___request_0 = value;
		Il2CppCodeGenWriteBarrier(&___request_0, value);
	}

	inline static int32_t get_offset_of_gameId_1() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ec__AnonStorey0_t3781135187, ___gameId_1)); }
	inline String_t* get_gameId_1() const { return ___gameId_1; }
	inline String_t** get_address_of_gameId_1() { return &___gameId_1; }
	inline void set_gameId_1(String_t* value)
	{
		___gameId_1 = value;
		Il2CppCodeGenWriteBarrier(&___gameId_1, value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CInitializeU3Ec__AnonStorey0_t3781135187, ___U24this_2)); }
	inline Platform_t568704329 * get_U24this_2() const { return ___U24this_2; }
	inline Platform_t568704329 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(Platform_t568704329 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
