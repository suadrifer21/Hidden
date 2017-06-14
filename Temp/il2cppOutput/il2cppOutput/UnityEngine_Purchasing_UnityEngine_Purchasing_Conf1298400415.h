#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Purchasing.PurchasingFactory
struct PurchasingFactory_t3525211160;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>
struct HashSet_1_t275936122;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.ConfigurationBuilder
struct  ConfigurationBuilder_t1298400415  : public Il2CppObject
{
public:
	// UnityEngine.Purchasing.PurchasingFactory UnityEngine.Purchasing.ConfigurationBuilder::m_Factory
	PurchasingFactory_t3525211160 * ___m_Factory_0;
	// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.ConfigurationBuilder::m_Products
	HashSet_1_t275936122 * ___m_Products_1;
	// System.Boolean UnityEngine.Purchasing.ConfigurationBuilder::<useCloudCatalog>k__BackingField
	bool ___U3CuseCloudCatalogU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_m_Factory_0() { return static_cast<int32_t>(offsetof(ConfigurationBuilder_t1298400415, ___m_Factory_0)); }
	inline PurchasingFactory_t3525211160 * get_m_Factory_0() const { return ___m_Factory_0; }
	inline PurchasingFactory_t3525211160 ** get_address_of_m_Factory_0() { return &___m_Factory_0; }
	inline void set_m_Factory_0(PurchasingFactory_t3525211160 * value)
	{
		___m_Factory_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Factory_0, value);
	}

	inline static int32_t get_offset_of_m_Products_1() { return static_cast<int32_t>(offsetof(ConfigurationBuilder_t1298400415, ___m_Products_1)); }
	inline HashSet_1_t275936122 * get_m_Products_1() const { return ___m_Products_1; }
	inline HashSet_1_t275936122 ** get_address_of_m_Products_1() { return &___m_Products_1; }
	inline void set_m_Products_1(HashSet_1_t275936122 * value)
	{
		___m_Products_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Products_1, value);
	}

	inline static int32_t get_offset_of_U3CuseCloudCatalogU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ConfigurationBuilder_t1298400415, ___U3CuseCloudCatalogU3Ek__BackingField_2)); }
	inline bool get_U3CuseCloudCatalogU3Ek__BackingField_2() const { return ___U3CuseCloudCatalogU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CuseCloudCatalogU3Ek__BackingField_2() { return &___U3CuseCloudCatalogU3Ek__BackingField_2; }
	inline void set_U3CuseCloudCatalogU3Ek__BackingField_2(bool value)
	{
		___U3CuseCloudCatalogU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
