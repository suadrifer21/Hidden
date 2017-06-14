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
// UnityEngine.Purchasing.Extension.IStoreCallback
struct IStoreCallback_t2691517565;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>
struct ReadOnlyCollection_1_t2128260960;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// UnityEngine.Purchasing.HttpManager
struct HttpManager_t2727579731;
// System.Action`2<System.Object,System.Boolean>
struct Action_2_t3708177276;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "Stores_UnityEngine_Purchasing_CloudMoolahMode206291964.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.MoolahStoreImpl
struct  MoolahStoreImpl_t4206626141  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Purchasing.Extension.IStoreCallback UnityEngine.Purchasing.MoolahStoreImpl::m_callback
	Il2CppObject * ___m_callback_7;
	// System.Boolean UnityEngine.Purchasing.MoolahStoreImpl::isNeedPolling
	bool ___isNeedPolling_8;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.MoolahStoreImpl::m_productDefinitions
	ReadOnlyCollection_1_t2128260960 * ___m_productDefinitions_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.Purchasing.MoolahStoreImpl::authCodeDic
	Dictionary_2_t3943999495 * ___authCodeDic_10;
	// System.String UnityEngine.Purchasing.MoolahStoreImpl::m_md5StoreProductID
	String_t* ___m_md5StoreProductID_11;
	// System.Boolean UnityEngine.Purchasing.MoolahStoreImpl::isRequestAuthCodeing
	bool ___isRequestAuthCodeing_12;
	// System.String UnityEngine.Purchasing.MoolahStoreImpl::m_appKey
	String_t* ___m_appKey_13;
	// System.String UnityEngine.Purchasing.MoolahStoreImpl::m_hashKey
	String_t* ___m_hashKey_14;
	// UnityEngine.Purchasing.CloudMoolahMode UnityEngine.Purchasing.MoolahStoreImpl::m_mode
	int32_t ___m_mode_15;
	// System.Boolean UnityEngine.Purchasing.MoolahStoreImpl::m_IsTestMode
	bool ___m_IsTestMode_16;
	// UnityEngine.Purchasing.HttpManager UnityEngine.Purchasing.MoolahStoreImpl::httpManager
	HttpManager_t2727579731 * ___httpManager_21;
	// System.Boolean UnityEngine.Purchasing.MoolahStoreImpl::isLogining
	bool ___isLogining_22;
	// System.Boolean UnityEngine.Purchasing.MoolahStoreImpl::isRegister
	bool ___isRegister_23;
	// System.String UnityEngine.Purchasing.MoolahStoreImpl::m_LoginToken
	String_t* ___m_LoginToken_24;
	// System.String UnityEngine.Purchasing.MoolahStoreImpl::m_CustomerID
	String_t* ___m_CustomerID_25;

public:
	inline static int32_t get_offset_of_m_callback_7() { return static_cast<int32_t>(offsetof(MoolahStoreImpl_t4206626141, ___m_callback_7)); }
	inline Il2CppObject * get_m_callback_7() const { return ___m_callback_7; }
	inline Il2CppObject ** get_address_of_m_callback_7() { return &___m_callback_7; }
	inline void set_m_callback_7(Il2CppObject * value)
	{
		___m_callback_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_callback_7, value);
	}

	inline static int32_t get_offset_of_isNeedPolling_8() { return static_cast<int32_t>(offsetof(MoolahStoreImpl_t4206626141, ___isNeedPolling_8)); }
	inline bool get_isNeedPolling_8() const { return ___isNeedPolling_8; }
	inline bool* get_address_of_isNeedPolling_8() { return &___isNeedPolling_8; }
	inline void set_isNeedPolling_8(bool value)
	{
		___isNeedPolling_8 = value;
	}

	inline static int32_t get_offset_of_m_productDefinitions_9() { return static_cast<int32_t>(offsetof(MoolahStoreImpl_t4206626141, ___m_productDefinitions_9)); }
	inline ReadOnlyCollection_1_t2128260960 * get_m_productDefinitions_9() const { return ___m_productDefinitions_9; }
	inline ReadOnlyCollection_1_t2128260960 ** get_address_of_m_productDefinitions_9() { return &___m_productDefinitions_9; }
	inline void set_m_productDefinitions_9(ReadOnlyCollection_1_t2128260960 * value)
	{
		___m_productDefinitions_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_productDefinitions_9, value);
	}

	inline static int32_t get_offset_of_authCodeDic_10() { return static_cast<int32_t>(offsetof(MoolahStoreImpl_t4206626141, ___authCodeDic_10)); }
	inline Dictionary_2_t3943999495 * get_authCodeDic_10() const { return ___authCodeDic_10; }
	inline Dictionary_2_t3943999495 ** get_address_of_authCodeDic_10() { return &___authCodeDic_10; }
	inline void set_authCodeDic_10(Dictionary_2_t3943999495 * value)
	{
		___authCodeDic_10 = value;
		Il2CppCodeGenWriteBarrier(&___authCodeDic_10, value);
	}

	inline static int32_t get_offset_of_m_md5StoreProductID_11() { return static_cast<int32_t>(offsetof(MoolahStoreImpl_t4206626141, ___m_md5StoreProductID_11)); }
	inline String_t* get_m_md5StoreProductID_11() const { return ___m_md5StoreProductID_11; }
	inline String_t** get_address_of_m_md5StoreProductID_11() { return &___m_md5StoreProductID_11; }
	inline void set_m_md5StoreProductID_11(String_t* value)
	{
		___m_md5StoreProductID_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_md5StoreProductID_11, value);
	}

	inline static int32_t get_offset_of_isRequestAuthCodeing_12() { return static_cast<int32_t>(offsetof(MoolahStoreImpl_t4206626141, ___isRequestAuthCodeing_12)); }
	inline bool get_isRequestAuthCodeing_12() const { return ___isRequestAuthCodeing_12; }
	inline bool* get_address_of_isRequestAuthCodeing_12() { return &___isRequestAuthCodeing_12; }
	inline void set_isRequestAuthCodeing_12(bool value)
	{
		___isRequestAuthCodeing_12 = value;
	}

	inline static int32_t get_offset_of_m_appKey_13() { return static_cast<int32_t>(offsetof(MoolahStoreImpl_t4206626141, ___m_appKey_13)); }
	inline String_t* get_m_appKey_13() const { return ___m_appKey_13; }
	inline String_t** get_address_of_m_appKey_13() { return &___m_appKey_13; }
	inline void set_m_appKey_13(String_t* value)
	{
		___m_appKey_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_appKey_13, value);
	}

	inline static int32_t get_offset_of_m_hashKey_14() { return static_cast<int32_t>(offsetof(MoolahStoreImpl_t4206626141, ___m_hashKey_14)); }
	inline String_t* get_m_hashKey_14() const { return ___m_hashKey_14; }
	inline String_t** get_address_of_m_hashKey_14() { return &___m_hashKey_14; }
	inline void set_m_hashKey_14(String_t* value)
	{
		___m_hashKey_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_hashKey_14, value);
	}

	inline static int32_t get_offset_of_m_mode_15() { return static_cast<int32_t>(offsetof(MoolahStoreImpl_t4206626141, ___m_mode_15)); }
	inline int32_t get_m_mode_15() const { return ___m_mode_15; }
	inline int32_t* get_address_of_m_mode_15() { return &___m_mode_15; }
	inline void set_m_mode_15(int32_t value)
	{
		___m_mode_15 = value;
	}

	inline static int32_t get_offset_of_m_IsTestMode_16() { return static_cast<int32_t>(offsetof(MoolahStoreImpl_t4206626141, ___m_IsTestMode_16)); }
	inline bool get_m_IsTestMode_16() const { return ___m_IsTestMode_16; }
	inline bool* get_address_of_m_IsTestMode_16() { return &___m_IsTestMode_16; }
	inline void set_m_IsTestMode_16(bool value)
	{
		___m_IsTestMode_16 = value;
	}

	inline static int32_t get_offset_of_httpManager_21() { return static_cast<int32_t>(offsetof(MoolahStoreImpl_t4206626141, ___httpManager_21)); }
	inline HttpManager_t2727579731 * get_httpManager_21() const { return ___httpManager_21; }
	inline HttpManager_t2727579731 ** get_address_of_httpManager_21() { return &___httpManager_21; }
	inline void set_httpManager_21(HttpManager_t2727579731 * value)
	{
		___httpManager_21 = value;
		Il2CppCodeGenWriteBarrier(&___httpManager_21, value);
	}

	inline static int32_t get_offset_of_isLogining_22() { return static_cast<int32_t>(offsetof(MoolahStoreImpl_t4206626141, ___isLogining_22)); }
	inline bool get_isLogining_22() const { return ___isLogining_22; }
	inline bool* get_address_of_isLogining_22() { return &___isLogining_22; }
	inline void set_isLogining_22(bool value)
	{
		___isLogining_22 = value;
	}

	inline static int32_t get_offset_of_isRegister_23() { return static_cast<int32_t>(offsetof(MoolahStoreImpl_t4206626141, ___isRegister_23)); }
	inline bool get_isRegister_23() const { return ___isRegister_23; }
	inline bool* get_address_of_isRegister_23() { return &___isRegister_23; }
	inline void set_isRegister_23(bool value)
	{
		___isRegister_23 = value;
	}

	inline static int32_t get_offset_of_m_LoginToken_24() { return static_cast<int32_t>(offsetof(MoolahStoreImpl_t4206626141, ___m_LoginToken_24)); }
	inline String_t* get_m_LoginToken_24() const { return ___m_LoginToken_24; }
	inline String_t** get_address_of_m_LoginToken_24() { return &___m_LoginToken_24; }
	inline void set_m_LoginToken_24(String_t* value)
	{
		___m_LoginToken_24 = value;
		Il2CppCodeGenWriteBarrier(&___m_LoginToken_24, value);
	}

	inline static int32_t get_offset_of_m_CustomerID_25() { return static_cast<int32_t>(offsetof(MoolahStoreImpl_t4206626141, ___m_CustomerID_25)); }
	inline String_t* get_m_CustomerID_25() const { return ___m_CustomerID_25; }
	inline String_t** get_address_of_m_CustomerID_25() { return &___m_CustomerID_25; }
	inline void set_m_CustomerID_25(String_t* value)
	{
		___m_CustomerID_25 = value;
		Il2CppCodeGenWriteBarrier(&___m_CustomerID_25, value);
	}
};

struct MoolahStoreImpl_t4206626141_StaticFields
{
public:
	// System.String UnityEngine.Purchasing.MoolahStoreImpl::pollingPath
	String_t* ___pollingPath_2;
	// System.String UnityEngine.Purchasing.MoolahStoreImpl::requestAuthCodePath
	String_t* ___requestAuthCodePath_3;
	// System.String UnityEngine.Purchasing.MoolahStoreImpl::requestRestoreTransactionUrl
	String_t* ___requestRestoreTransactionUrl_4;
	// System.String UnityEngine.Purchasing.MoolahStoreImpl::requestValidateReceiptUrl
	String_t* ___requestValidateReceiptUrl_5;
	// System.String UnityEngine.Purchasing.MoolahStoreImpl::requestProductValidateUrl
	String_t* ___requestProductValidateUrl_6;
	// System.String UnityEngine.Purchasing.MoolahStoreImpl::CM_PATH
	String_t* ___CM_PATH_18;
	// System.String UnityEngine.Purchasing.MoolahStoreImpl::REGISTER_OR_BINDING_PATH
	String_t* ___REGISTER_OR_BINDING_PATH_19;
	// System.String UnityEngine.Purchasing.MoolahStoreImpl::LOGIN_PATH
	String_t* ___LOGIN_PATH_20;
	// System.Action`2<System.Object,System.Boolean> UnityEngine.Purchasing.MoolahStoreImpl::<>f__am$cache0
	Action_2_t3708177276 * ___U3CU3Ef__amU24cache0_26;

public:
	inline static int32_t get_offset_of_pollingPath_2() { return static_cast<int32_t>(offsetof(MoolahStoreImpl_t4206626141_StaticFields, ___pollingPath_2)); }
	inline String_t* get_pollingPath_2() const { return ___pollingPath_2; }
	inline String_t** get_address_of_pollingPath_2() { return &___pollingPath_2; }
	inline void set_pollingPath_2(String_t* value)
	{
		___pollingPath_2 = value;
		Il2CppCodeGenWriteBarrier(&___pollingPath_2, value);
	}

	inline static int32_t get_offset_of_requestAuthCodePath_3() { return static_cast<int32_t>(offsetof(MoolahStoreImpl_t4206626141_StaticFields, ___requestAuthCodePath_3)); }
	inline String_t* get_requestAuthCodePath_3() const { return ___requestAuthCodePath_3; }
	inline String_t** get_address_of_requestAuthCodePath_3() { return &___requestAuthCodePath_3; }
	inline void set_requestAuthCodePath_3(String_t* value)
	{
		___requestAuthCodePath_3 = value;
		Il2CppCodeGenWriteBarrier(&___requestAuthCodePath_3, value);
	}

	inline static int32_t get_offset_of_requestRestoreTransactionUrl_4() { return static_cast<int32_t>(offsetof(MoolahStoreImpl_t4206626141_StaticFields, ___requestRestoreTransactionUrl_4)); }
	inline String_t* get_requestRestoreTransactionUrl_4() const { return ___requestRestoreTransactionUrl_4; }
	inline String_t** get_address_of_requestRestoreTransactionUrl_4() { return &___requestRestoreTransactionUrl_4; }
	inline void set_requestRestoreTransactionUrl_4(String_t* value)
	{
		___requestRestoreTransactionUrl_4 = value;
		Il2CppCodeGenWriteBarrier(&___requestRestoreTransactionUrl_4, value);
	}

	inline static int32_t get_offset_of_requestValidateReceiptUrl_5() { return static_cast<int32_t>(offsetof(MoolahStoreImpl_t4206626141_StaticFields, ___requestValidateReceiptUrl_5)); }
	inline String_t* get_requestValidateReceiptUrl_5() const { return ___requestValidateReceiptUrl_5; }
	inline String_t** get_address_of_requestValidateReceiptUrl_5() { return &___requestValidateReceiptUrl_5; }
	inline void set_requestValidateReceiptUrl_5(String_t* value)
	{
		___requestValidateReceiptUrl_5 = value;
		Il2CppCodeGenWriteBarrier(&___requestValidateReceiptUrl_5, value);
	}

	inline static int32_t get_offset_of_requestProductValidateUrl_6() { return static_cast<int32_t>(offsetof(MoolahStoreImpl_t4206626141_StaticFields, ___requestProductValidateUrl_6)); }
	inline String_t* get_requestProductValidateUrl_6() const { return ___requestProductValidateUrl_6; }
	inline String_t** get_address_of_requestProductValidateUrl_6() { return &___requestProductValidateUrl_6; }
	inline void set_requestProductValidateUrl_6(String_t* value)
	{
		___requestProductValidateUrl_6 = value;
		Il2CppCodeGenWriteBarrier(&___requestProductValidateUrl_6, value);
	}

	inline static int32_t get_offset_of_CM_PATH_18() { return static_cast<int32_t>(offsetof(MoolahStoreImpl_t4206626141_StaticFields, ___CM_PATH_18)); }
	inline String_t* get_CM_PATH_18() const { return ___CM_PATH_18; }
	inline String_t** get_address_of_CM_PATH_18() { return &___CM_PATH_18; }
	inline void set_CM_PATH_18(String_t* value)
	{
		___CM_PATH_18 = value;
		Il2CppCodeGenWriteBarrier(&___CM_PATH_18, value);
	}

	inline static int32_t get_offset_of_REGISTER_OR_BINDING_PATH_19() { return static_cast<int32_t>(offsetof(MoolahStoreImpl_t4206626141_StaticFields, ___REGISTER_OR_BINDING_PATH_19)); }
	inline String_t* get_REGISTER_OR_BINDING_PATH_19() const { return ___REGISTER_OR_BINDING_PATH_19; }
	inline String_t** get_address_of_REGISTER_OR_BINDING_PATH_19() { return &___REGISTER_OR_BINDING_PATH_19; }
	inline void set_REGISTER_OR_BINDING_PATH_19(String_t* value)
	{
		___REGISTER_OR_BINDING_PATH_19 = value;
		Il2CppCodeGenWriteBarrier(&___REGISTER_OR_BINDING_PATH_19, value);
	}

	inline static int32_t get_offset_of_LOGIN_PATH_20() { return static_cast<int32_t>(offsetof(MoolahStoreImpl_t4206626141_StaticFields, ___LOGIN_PATH_20)); }
	inline String_t* get_LOGIN_PATH_20() const { return ___LOGIN_PATH_20; }
	inline String_t** get_address_of_LOGIN_PATH_20() { return &___LOGIN_PATH_20; }
	inline void set_LOGIN_PATH_20(String_t* value)
	{
		___LOGIN_PATH_20 = value;
		Il2CppCodeGenWriteBarrier(&___LOGIN_PATH_20, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_26() { return static_cast<int32_t>(offsetof(MoolahStoreImpl_t4206626141_StaticFields, ___U3CU3Ef__amU24cache0_26)); }
	inline Action_2_t3708177276 * get_U3CU3Ef__amU24cache0_26() const { return ___U3CU3Ef__amU24cache0_26; }
	inline Action_2_t3708177276 ** get_address_of_U3CU3Ef__amU24cache0_26() { return &___U3CU3Ef__amU24cache0_26; }
	inline void set_U3CU3Ef__amU24cache0_26(Action_2_t3708177276 * value)
	{
		___U3CU3Ef__amU24cache0_26 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_26, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
