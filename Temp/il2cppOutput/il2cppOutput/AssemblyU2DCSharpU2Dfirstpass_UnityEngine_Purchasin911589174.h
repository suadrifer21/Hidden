#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager
struct IAPButtonStoreManager_t911589174;
// UnityEngine.Purchasing.ProductCatalog
struct ProductCatalog_t2667590766;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPButton>
struct List_1_t2446958492;
// UnityEngine.Purchasing.IStoreController
struct IStoreController_t92554892;
// UnityEngine.Purchasing.IExtensionProvider
struct IExtensionProvider_t2460996543;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager
struct  IAPButtonStoreManager_t911589174  : public Il2CppObject
{
public:
	// UnityEngine.Purchasing.ProductCatalog UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager::catalog
	ProductCatalog_t2667590766 * ___catalog_1;
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.IAPButton> UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager::activeButtons
	List_1_t2446958492 * ___activeButtons_2;
	// UnityEngine.Purchasing.IStoreController UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager::controller
	Il2CppObject * ___controller_3;
	// UnityEngine.Purchasing.IExtensionProvider UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager::extensions
	Il2CppObject * ___extensions_4;

public:
	inline static int32_t get_offset_of_catalog_1() { return static_cast<int32_t>(offsetof(IAPButtonStoreManager_t911589174, ___catalog_1)); }
	inline ProductCatalog_t2667590766 * get_catalog_1() const { return ___catalog_1; }
	inline ProductCatalog_t2667590766 ** get_address_of_catalog_1() { return &___catalog_1; }
	inline void set_catalog_1(ProductCatalog_t2667590766 * value)
	{
		___catalog_1 = value;
		Il2CppCodeGenWriteBarrier(&___catalog_1, value);
	}

	inline static int32_t get_offset_of_activeButtons_2() { return static_cast<int32_t>(offsetof(IAPButtonStoreManager_t911589174, ___activeButtons_2)); }
	inline List_1_t2446958492 * get_activeButtons_2() const { return ___activeButtons_2; }
	inline List_1_t2446958492 ** get_address_of_activeButtons_2() { return &___activeButtons_2; }
	inline void set_activeButtons_2(List_1_t2446958492 * value)
	{
		___activeButtons_2 = value;
		Il2CppCodeGenWriteBarrier(&___activeButtons_2, value);
	}

	inline static int32_t get_offset_of_controller_3() { return static_cast<int32_t>(offsetof(IAPButtonStoreManager_t911589174, ___controller_3)); }
	inline Il2CppObject * get_controller_3() const { return ___controller_3; }
	inline Il2CppObject ** get_address_of_controller_3() { return &___controller_3; }
	inline void set_controller_3(Il2CppObject * value)
	{
		___controller_3 = value;
		Il2CppCodeGenWriteBarrier(&___controller_3, value);
	}

	inline static int32_t get_offset_of_extensions_4() { return static_cast<int32_t>(offsetof(IAPButtonStoreManager_t911589174, ___extensions_4)); }
	inline Il2CppObject * get_extensions_4() const { return ___extensions_4; }
	inline Il2CppObject ** get_address_of_extensions_4() { return &___extensions_4; }
	inline void set_extensions_4(Il2CppObject * value)
	{
		___extensions_4 = value;
		Il2CppCodeGenWriteBarrier(&___extensions_4, value);
	}
};

struct IAPButtonStoreManager_t911589174_StaticFields
{
public:
	// UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager::instance
	IAPButtonStoreManager_t911589174 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(IAPButtonStoreManager_t911589174_StaticFields, ___instance_0)); }
	inline IAPButtonStoreManager_t911589174 * get_instance_0() const { return ___instance_0; }
	inline IAPButtonStoreManager_t911589174 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(IAPButtonStoreManager_t911589174 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___instance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
