#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Purchasing.PurchaseEventArgs
struct PurchaseEventArgs_t547992434;
// IAPDemo
struct IAPDemo_t823941185;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IAPDemo/<ProcessPurchase>c__AnonStorey0
struct  U3CProcessPurchaseU3Ec__AnonStorey0_t1218622627  : public Il2CppObject
{
public:
	// UnityEngine.Purchasing.PurchaseEventArgs IAPDemo/<ProcessPurchase>c__AnonStorey0::e
	PurchaseEventArgs_t547992434 * ___e_0;
	// IAPDemo IAPDemo/<ProcessPurchase>c__AnonStorey0::$this
	IAPDemo_t823941185 * ___U24this_1;

public:
	inline static int32_t get_offset_of_e_0() { return static_cast<int32_t>(offsetof(U3CProcessPurchaseU3Ec__AnonStorey0_t1218622627, ___e_0)); }
	inline PurchaseEventArgs_t547992434 * get_e_0() const { return ___e_0; }
	inline PurchaseEventArgs_t547992434 ** get_address_of_e_0() { return &___e_0; }
	inline void set_e_0(PurchaseEventArgs_t547992434 * value)
	{
		___e_0 = value;
		Il2CppCodeGenWriteBarrier(&___e_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CProcessPurchaseU3Ec__AnonStorey0_t1218622627, ___U24this_1)); }
	inline IAPDemo_t823941185 * get_U24this_1() const { return ___U24this_1; }
	inline IAPDemo_t823941185 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(IAPDemo_t823941185 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
