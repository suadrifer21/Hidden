#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>
struct List_1_t2687388655;
// UnityEngine.Purchasing.FakeStore
struct FakeStore_t3882981564;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.FakeStore/<RetrieveProducts>c__AnonStorey0
struct  U3CRetrieveProductsU3Ec__AnonStorey0_t2692708567  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription> UnityEngine.Purchasing.FakeStore/<RetrieveProducts>c__AnonStorey0::products
	List_1_t2687388655 * ___products_0;
	// UnityEngine.Purchasing.FakeStore UnityEngine.Purchasing.FakeStore/<RetrieveProducts>c__AnonStorey0::$this
	FakeStore_t3882981564 * ___U24this_1;

public:
	inline static int32_t get_offset_of_products_0() { return static_cast<int32_t>(offsetof(U3CRetrieveProductsU3Ec__AnonStorey0_t2692708567, ___products_0)); }
	inline List_1_t2687388655 * get_products_0() const { return ___products_0; }
	inline List_1_t2687388655 ** get_address_of_products_0() { return &___products_0; }
	inline void set_products_0(List_1_t2687388655 * value)
	{
		___products_0 = value;
		Il2CppCodeGenWriteBarrier(&___products_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CRetrieveProductsU3Ec__AnonStorey0_t2692708567, ___U24this_1)); }
	inline FakeStore_t3882981564 * get_U24this_1() const { return ___U24this_1; }
	inline FakeStore_t3882981564 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(FakeStore_t3882981564 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
