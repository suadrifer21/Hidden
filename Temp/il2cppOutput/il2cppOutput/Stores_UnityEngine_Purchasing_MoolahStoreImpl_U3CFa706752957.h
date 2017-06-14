#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`2<UnityEngine.Purchasing.FastRegisterError,System.String>
struct Action_2_t2383075575;
// System.Action`1<System.String>
struct Action_1_t1831019615;
// UnityEngine.Purchasing.MoolahStoreImpl
struct MoolahStoreImpl_t4206626141;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.MoolahStoreImpl/<FastRegister>c__AnonStorey8
struct  U3CFastRegisterU3Ec__AnonStorey8_t706752957  : public Il2CppObject
{
public:
	// System.Action`2<UnityEngine.Purchasing.FastRegisterError,System.String> UnityEngine.Purchasing.MoolahStoreImpl/<FastRegister>c__AnonStorey8::RegisterFailed
	Action_2_t2383075575 * ___RegisterFailed_0;
	// System.Action`1<System.String> UnityEngine.Purchasing.MoolahStoreImpl/<FastRegister>c__AnonStorey8::RegisterSucceed
	Action_1_t1831019615 * ___RegisterSucceed_1;
	// UnityEngine.Purchasing.MoolahStoreImpl UnityEngine.Purchasing.MoolahStoreImpl/<FastRegister>c__AnonStorey8::$this
	MoolahStoreImpl_t4206626141 * ___U24this_2;

public:
	inline static int32_t get_offset_of_RegisterFailed_0() { return static_cast<int32_t>(offsetof(U3CFastRegisterU3Ec__AnonStorey8_t706752957, ___RegisterFailed_0)); }
	inline Action_2_t2383075575 * get_RegisterFailed_0() const { return ___RegisterFailed_0; }
	inline Action_2_t2383075575 ** get_address_of_RegisterFailed_0() { return &___RegisterFailed_0; }
	inline void set_RegisterFailed_0(Action_2_t2383075575 * value)
	{
		___RegisterFailed_0 = value;
		Il2CppCodeGenWriteBarrier(&___RegisterFailed_0, value);
	}

	inline static int32_t get_offset_of_RegisterSucceed_1() { return static_cast<int32_t>(offsetof(U3CFastRegisterU3Ec__AnonStorey8_t706752957, ___RegisterSucceed_1)); }
	inline Action_1_t1831019615 * get_RegisterSucceed_1() const { return ___RegisterSucceed_1; }
	inline Action_1_t1831019615 ** get_address_of_RegisterSucceed_1() { return &___RegisterSucceed_1; }
	inline void set_RegisterSucceed_1(Action_1_t1831019615 * value)
	{
		___RegisterSucceed_1 = value;
		Il2CppCodeGenWriteBarrier(&___RegisterSucceed_1, value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CFastRegisterU3Ec__AnonStorey8_t706752957, ___U24this_2)); }
	inline MoolahStoreImpl_t4206626141 * get_U24this_2() const { return ___U24this_2; }
	inline MoolahStoreImpl_t4206626141 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(MoolahStoreImpl_t4206626141 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
