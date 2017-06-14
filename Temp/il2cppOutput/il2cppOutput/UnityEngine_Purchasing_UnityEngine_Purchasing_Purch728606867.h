#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Purchasing.Extension.IStore
struct IStore_t3609486926;
// UnityEngine.Purchasing.IInternalStoreListener
struct IInternalStoreListener_t571122801;
// UnityEngine.ILogger
struct ILogger_t1425954571;
// UnityEngine.Purchasing.TransactionLog
struct TransactionLog_t45391254;
// System.String
struct String_t;
// System.Action
struct Action_t3226471752;
// System.Action`1<UnityEngine.Purchasing.InitializationFailureReason>
struct Action_1_t2755832024;
// UnityEngine.Purchasing.ProductCollection
struct ProductCollection_t3600019299;
// System.Func`2<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Product>
struct Func_2_t2133269344;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.PurchasingManager
struct  PurchasingManager_t728606867  : public Il2CppObject
{
public:
	// UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.PurchasingManager::m_Store
	Il2CppObject * ___m_Store_0;
	// UnityEngine.Purchasing.IInternalStoreListener UnityEngine.Purchasing.PurchasingManager::m_Listener
	Il2CppObject * ___m_Listener_1;
	// UnityEngine.ILogger UnityEngine.Purchasing.PurchasingManager::m_Logger
	Il2CppObject * ___m_Logger_2;
	// UnityEngine.Purchasing.TransactionLog UnityEngine.Purchasing.PurchasingManager::m_TransactionLog
	TransactionLog_t45391254 * ___m_TransactionLog_3;
	// System.String UnityEngine.Purchasing.PurchasingManager::m_StoreName
	String_t* ___m_StoreName_4;
	// System.Action UnityEngine.Purchasing.PurchasingManager::m_AdditionalProductsCallback
	Action_t3226471752 * ___m_AdditionalProductsCallback_5;
	// System.Action`1<UnityEngine.Purchasing.InitializationFailureReason> UnityEngine.Purchasing.PurchasingManager::m_AdditionalProductsFailCallback
	Action_1_t2755832024 * ___m_AdditionalProductsFailCallback_6;
	// System.Boolean UnityEngine.Purchasing.PurchasingManager::<useTransactionLog>k__BackingField
	bool ___U3CuseTransactionLogU3Ek__BackingField_7;
	// UnityEngine.Purchasing.ProductCollection UnityEngine.Purchasing.PurchasingManager::<products>k__BackingField
	ProductCollection_t3600019299 * ___U3CproductsU3Ek__BackingField_8;
	// System.Boolean UnityEngine.Purchasing.PurchasingManager::initialized
	bool ___initialized_9;

public:
	inline static int32_t get_offset_of_m_Store_0() { return static_cast<int32_t>(offsetof(PurchasingManager_t728606867, ___m_Store_0)); }
	inline Il2CppObject * get_m_Store_0() const { return ___m_Store_0; }
	inline Il2CppObject ** get_address_of_m_Store_0() { return &___m_Store_0; }
	inline void set_m_Store_0(Il2CppObject * value)
	{
		___m_Store_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Store_0, value);
	}

	inline static int32_t get_offset_of_m_Listener_1() { return static_cast<int32_t>(offsetof(PurchasingManager_t728606867, ___m_Listener_1)); }
	inline Il2CppObject * get_m_Listener_1() const { return ___m_Listener_1; }
	inline Il2CppObject ** get_address_of_m_Listener_1() { return &___m_Listener_1; }
	inline void set_m_Listener_1(Il2CppObject * value)
	{
		___m_Listener_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Listener_1, value);
	}

	inline static int32_t get_offset_of_m_Logger_2() { return static_cast<int32_t>(offsetof(PurchasingManager_t728606867, ___m_Logger_2)); }
	inline Il2CppObject * get_m_Logger_2() const { return ___m_Logger_2; }
	inline Il2CppObject ** get_address_of_m_Logger_2() { return &___m_Logger_2; }
	inline void set_m_Logger_2(Il2CppObject * value)
	{
		___m_Logger_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Logger_2, value);
	}

	inline static int32_t get_offset_of_m_TransactionLog_3() { return static_cast<int32_t>(offsetof(PurchasingManager_t728606867, ___m_TransactionLog_3)); }
	inline TransactionLog_t45391254 * get_m_TransactionLog_3() const { return ___m_TransactionLog_3; }
	inline TransactionLog_t45391254 ** get_address_of_m_TransactionLog_3() { return &___m_TransactionLog_3; }
	inline void set_m_TransactionLog_3(TransactionLog_t45391254 * value)
	{
		___m_TransactionLog_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_TransactionLog_3, value);
	}

	inline static int32_t get_offset_of_m_StoreName_4() { return static_cast<int32_t>(offsetof(PurchasingManager_t728606867, ___m_StoreName_4)); }
	inline String_t* get_m_StoreName_4() const { return ___m_StoreName_4; }
	inline String_t** get_address_of_m_StoreName_4() { return &___m_StoreName_4; }
	inline void set_m_StoreName_4(String_t* value)
	{
		___m_StoreName_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_StoreName_4, value);
	}

	inline static int32_t get_offset_of_m_AdditionalProductsCallback_5() { return static_cast<int32_t>(offsetof(PurchasingManager_t728606867, ___m_AdditionalProductsCallback_5)); }
	inline Action_t3226471752 * get_m_AdditionalProductsCallback_5() const { return ___m_AdditionalProductsCallback_5; }
	inline Action_t3226471752 ** get_address_of_m_AdditionalProductsCallback_5() { return &___m_AdditionalProductsCallback_5; }
	inline void set_m_AdditionalProductsCallback_5(Action_t3226471752 * value)
	{
		___m_AdditionalProductsCallback_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_AdditionalProductsCallback_5, value);
	}

	inline static int32_t get_offset_of_m_AdditionalProductsFailCallback_6() { return static_cast<int32_t>(offsetof(PurchasingManager_t728606867, ___m_AdditionalProductsFailCallback_6)); }
	inline Action_1_t2755832024 * get_m_AdditionalProductsFailCallback_6() const { return ___m_AdditionalProductsFailCallback_6; }
	inline Action_1_t2755832024 ** get_address_of_m_AdditionalProductsFailCallback_6() { return &___m_AdditionalProductsFailCallback_6; }
	inline void set_m_AdditionalProductsFailCallback_6(Action_1_t2755832024 * value)
	{
		___m_AdditionalProductsFailCallback_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_AdditionalProductsFailCallback_6, value);
	}

	inline static int32_t get_offset_of_U3CuseTransactionLogU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PurchasingManager_t728606867, ___U3CuseTransactionLogU3Ek__BackingField_7)); }
	inline bool get_U3CuseTransactionLogU3Ek__BackingField_7() const { return ___U3CuseTransactionLogU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CuseTransactionLogU3Ek__BackingField_7() { return &___U3CuseTransactionLogU3Ek__BackingField_7; }
	inline void set_U3CuseTransactionLogU3Ek__BackingField_7(bool value)
	{
		___U3CuseTransactionLogU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CproductsU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PurchasingManager_t728606867, ___U3CproductsU3Ek__BackingField_8)); }
	inline ProductCollection_t3600019299 * get_U3CproductsU3Ek__BackingField_8() const { return ___U3CproductsU3Ek__BackingField_8; }
	inline ProductCollection_t3600019299 ** get_address_of_U3CproductsU3Ek__BackingField_8() { return &___U3CproductsU3Ek__BackingField_8; }
	inline void set_U3CproductsU3Ek__BackingField_8(ProductCollection_t3600019299 * value)
	{
		___U3CproductsU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CproductsU3Ek__BackingField_8, value);
	}

	inline static int32_t get_offset_of_initialized_9() { return static_cast<int32_t>(offsetof(PurchasingManager_t728606867, ___initialized_9)); }
	inline bool get_initialized_9() const { return ___initialized_9; }
	inline bool* get_address_of_initialized_9() { return &___initialized_9; }
	inline void set_initialized_9(bool value)
	{
		___initialized_9 = value;
	}
};

struct PurchasingManager_t728606867_StaticFields
{
public:
	// System.Func`2<UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.Product> UnityEngine.Purchasing.PurchasingManager::<>f__am$cache1
	Func_2_t2133269344 * ___U3CU3Ef__amU24cache1_10;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_10() { return static_cast<int32_t>(offsetof(PurchasingManager_t728606867_StaticFields, ___U3CU3Ef__amU24cache1_10)); }
	inline Func_2_t2133269344 * get_U3CU3Ef__amU24cache1_10() const { return ___U3CU3Ef__amU24cache1_10; }
	inline Func_2_t2133269344 ** get_address_of_U3CU3Ef__amU24cache1_10() { return &___U3CU3Ef__amU24cache1_10; }
	inline void set_U3CU3Ef__amU24cache1_10(Func_2_t2133269344 * value)
	{
		___U3CU3Ef__amU24cache1_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
