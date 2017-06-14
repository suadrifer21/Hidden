#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`2<UnityEngine.Purchasing.LoginResultState,System.String>
struct Action_2_t2420917363;
// UnityEngine.Purchasing.MoolahStoreImpl
struct MoolahStoreImpl_t4206626141;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.MoolahStoreImpl/<Login>c__AnonStorey7
struct  U3CLoginU3Ec__AnonStorey7_t3027540100  : public Il2CppObject
{
public:
	// System.Action`2<UnityEngine.Purchasing.LoginResultState,System.String> UnityEngine.Purchasing.MoolahStoreImpl/<Login>c__AnonStorey7::LoginResult
	Action_2_t2420917363 * ___LoginResult_0;
	// UnityEngine.Purchasing.MoolahStoreImpl UnityEngine.Purchasing.MoolahStoreImpl/<Login>c__AnonStorey7::$this
	MoolahStoreImpl_t4206626141 * ___U24this_1;

public:
	inline static int32_t get_offset_of_LoginResult_0() { return static_cast<int32_t>(offsetof(U3CLoginU3Ec__AnonStorey7_t3027540100, ___LoginResult_0)); }
	inline Action_2_t2420917363 * get_LoginResult_0() const { return ___LoginResult_0; }
	inline Action_2_t2420917363 ** get_address_of_LoginResult_0() { return &___LoginResult_0; }
	inline void set_LoginResult_0(Action_2_t2420917363 * value)
	{
		___LoginResult_0 = value;
		Il2CppCodeGenWriteBarrier(&___LoginResult_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CLoginU3Ec__AnonStorey7_t3027540100, ___U24this_1)); }
	inline MoolahStoreImpl_t4206626141 * get_U24this_1() const { return ___U24this_1; }
	inline MoolahStoreImpl_t4206626141 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(MoolahStoreImpl_t4206626141 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
