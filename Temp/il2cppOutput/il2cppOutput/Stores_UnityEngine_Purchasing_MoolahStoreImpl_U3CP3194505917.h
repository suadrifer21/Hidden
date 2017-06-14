#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`3<System.String,System.String,System.String>
struct Action_3_t3256166369;
// System.Action`3<System.String,UnityEngine.Purchasing.PurchaseFailureReason,System.String>
struct Action_3_t4044292979;
// UnityEngine.Purchasing.MoolahStoreImpl
struct MoolahStoreImpl_t4206626141;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.MoolahStoreImpl/<Purchase>c__AnonStorey6
struct  U3CPurchaseU3Ec__AnonStorey6_t3194505917  : public Il2CppObject
{
public:
	// System.Action`3<System.String,System.String,System.String> UnityEngine.Purchasing.MoolahStoreImpl/<Purchase>c__AnonStorey6::purchaseSucceed
	Action_3_t3256166369 * ___purchaseSucceed_0;
	// System.Action`3<System.String,UnityEngine.Purchasing.PurchaseFailureReason,System.String> UnityEngine.Purchasing.MoolahStoreImpl/<Purchase>c__AnonStorey6::purchaseFailed
	Action_3_t4044292979 * ___purchaseFailed_1;
	// UnityEngine.Purchasing.MoolahStoreImpl UnityEngine.Purchasing.MoolahStoreImpl/<Purchase>c__AnonStorey6::$this
	MoolahStoreImpl_t4206626141 * ___U24this_2;

public:
	inline static int32_t get_offset_of_purchaseSucceed_0() { return static_cast<int32_t>(offsetof(U3CPurchaseU3Ec__AnonStorey6_t3194505917, ___purchaseSucceed_0)); }
	inline Action_3_t3256166369 * get_purchaseSucceed_0() const { return ___purchaseSucceed_0; }
	inline Action_3_t3256166369 ** get_address_of_purchaseSucceed_0() { return &___purchaseSucceed_0; }
	inline void set_purchaseSucceed_0(Action_3_t3256166369 * value)
	{
		___purchaseSucceed_0 = value;
		Il2CppCodeGenWriteBarrier(&___purchaseSucceed_0, value);
	}

	inline static int32_t get_offset_of_purchaseFailed_1() { return static_cast<int32_t>(offsetof(U3CPurchaseU3Ec__AnonStorey6_t3194505917, ___purchaseFailed_1)); }
	inline Action_3_t4044292979 * get_purchaseFailed_1() const { return ___purchaseFailed_1; }
	inline Action_3_t4044292979 ** get_address_of_purchaseFailed_1() { return &___purchaseFailed_1; }
	inline void set_purchaseFailed_1(Action_3_t4044292979 * value)
	{
		___purchaseFailed_1 = value;
		Il2CppCodeGenWriteBarrier(&___purchaseFailed_1, value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CPurchaseU3Ec__AnonStorey6_t3194505917, ___U24this_2)); }
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
