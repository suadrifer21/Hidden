#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.StoreID>
struct List_1_t4135540752;
// UnityEngine.Purchasing.LocalizedProductDescription
struct LocalizedProductDescription_t1525635964;
// UnityEngine.Purchasing.Price
struct Price_t1853024949;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.LocalizedProductDescription>
struct List_1_t894757096;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod2754455291.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.ProductCatalogItem
struct  ProductCatalogItem_t977711995  : public Il2CppObject
{
public:
	// System.String UnityEngine.Purchasing.ProductCatalogItem::id
	String_t* ___id_0;
	// UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.ProductCatalogItem::type
	int32_t ___type_1;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.StoreID> UnityEngine.Purchasing.ProductCatalogItem::storeIDs
	List_1_t4135540752 * ___storeIDs_2;
	// UnityEngine.Purchasing.LocalizedProductDescription UnityEngine.Purchasing.ProductCatalogItem::defaultDescription
	LocalizedProductDescription_t1525635964 * ___defaultDescription_3;
	// System.Int32 UnityEngine.Purchasing.ProductCatalogItem::applePriceTier
	int32_t ___applePriceTier_4;
	// UnityEngine.Purchasing.Price UnityEngine.Purchasing.ProductCatalogItem::googlePrice
	Price_t1853024949 * ___googlePrice_5;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.LocalizedProductDescription> UnityEngine.Purchasing.ProductCatalogItem::descriptions
	List_1_t894757096 * ___descriptions_6;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t977711995, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier(&___id_0, value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t977711995, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_storeIDs_2() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t977711995, ___storeIDs_2)); }
	inline List_1_t4135540752 * get_storeIDs_2() const { return ___storeIDs_2; }
	inline List_1_t4135540752 ** get_address_of_storeIDs_2() { return &___storeIDs_2; }
	inline void set_storeIDs_2(List_1_t4135540752 * value)
	{
		___storeIDs_2 = value;
		Il2CppCodeGenWriteBarrier(&___storeIDs_2, value);
	}

	inline static int32_t get_offset_of_defaultDescription_3() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t977711995, ___defaultDescription_3)); }
	inline LocalizedProductDescription_t1525635964 * get_defaultDescription_3() const { return ___defaultDescription_3; }
	inline LocalizedProductDescription_t1525635964 ** get_address_of_defaultDescription_3() { return &___defaultDescription_3; }
	inline void set_defaultDescription_3(LocalizedProductDescription_t1525635964 * value)
	{
		___defaultDescription_3 = value;
		Il2CppCodeGenWriteBarrier(&___defaultDescription_3, value);
	}

	inline static int32_t get_offset_of_applePriceTier_4() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t977711995, ___applePriceTier_4)); }
	inline int32_t get_applePriceTier_4() const { return ___applePriceTier_4; }
	inline int32_t* get_address_of_applePriceTier_4() { return &___applePriceTier_4; }
	inline void set_applePriceTier_4(int32_t value)
	{
		___applePriceTier_4 = value;
	}

	inline static int32_t get_offset_of_googlePrice_5() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t977711995, ___googlePrice_5)); }
	inline Price_t1853024949 * get_googlePrice_5() const { return ___googlePrice_5; }
	inline Price_t1853024949 ** get_address_of_googlePrice_5() { return &___googlePrice_5; }
	inline void set_googlePrice_5(Price_t1853024949 * value)
	{
		___googlePrice_5 = value;
		Il2CppCodeGenWriteBarrier(&___googlePrice_5, value);
	}

	inline static int32_t get_offset_of_descriptions_6() { return static_cast<int32_t>(offsetof(ProductCatalogItem_t977711995, ___descriptions_6)); }
	inline List_1_t894757096 * get_descriptions_6() const { return ___descriptions_6; }
	inline List_1_t894757096 ** get_address_of_descriptions_6() { return &___descriptions_6; }
	inline void set_descriptions_6(List_1_t894757096 * value)
	{
		___descriptions_6 = value;
		Il2CppCodeGenWriteBarrier(&___descriptions_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
