#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Purchasing.INativeFacebookStore
struct INativeFacebookStore_t3367400535;
// Uniject.IUtil
struct IUtil_t2188430191;
// UnityEngine.Purchasing.FacebookStoreImpl
struct FacebookStoreImpl_t1362794587;
// UnityEngine.Purchasing.UnityPurchasingCallback
struct UnityPurchasingCallback_t2635187846;

#include "Stores_UnityEngine_Purchasing_NativeJSONStore3685388740.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.FacebookStoreImpl
struct  FacebookStoreImpl_t1362794587  : public NativeJSONStore_t3685388740
{
public:
	// UnityEngine.Purchasing.INativeFacebookStore UnityEngine.Purchasing.FacebookStoreImpl::m_Native
	Il2CppObject * ___m_Native_2;

public:
	inline static int32_t get_offset_of_m_Native_2() { return static_cast<int32_t>(offsetof(FacebookStoreImpl_t1362794587, ___m_Native_2)); }
	inline Il2CppObject * get_m_Native_2() const { return ___m_Native_2; }
	inline Il2CppObject ** get_address_of_m_Native_2() { return &___m_Native_2; }
	inline void set_m_Native_2(Il2CppObject * value)
	{
		___m_Native_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Native_2, value);
	}
};

struct FacebookStoreImpl_t1362794587_StaticFields
{
public:
	// Uniject.IUtil UnityEngine.Purchasing.FacebookStoreImpl::util
	Il2CppObject * ___util_3;
	// UnityEngine.Purchasing.FacebookStoreImpl UnityEngine.Purchasing.FacebookStoreImpl::instance
	FacebookStoreImpl_t1362794587 * ___instance_4;
	// UnityEngine.Purchasing.UnityPurchasingCallback UnityEngine.Purchasing.FacebookStoreImpl::<>f__mg$cache0
	UnityPurchasingCallback_t2635187846 * ___U3CU3Ef__mgU24cache0_5;

public:
	inline static int32_t get_offset_of_util_3() { return static_cast<int32_t>(offsetof(FacebookStoreImpl_t1362794587_StaticFields, ___util_3)); }
	inline Il2CppObject * get_util_3() const { return ___util_3; }
	inline Il2CppObject ** get_address_of_util_3() { return &___util_3; }
	inline void set_util_3(Il2CppObject * value)
	{
		___util_3 = value;
		Il2CppCodeGenWriteBarrier(&___util_3, value);
	}

	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(FacebookStoreImpl_t1362794587_StaticFields, ___instance_4)); }
	inline FacebookStoreImpl_t1362794587 * get_instance_4() const { return ___instance_4; }
	inline FacebookStoreImpl_t1362794587 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(FacebookStoreImpl_t1362794587 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier(&___instance_4, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_5() { return static_cast<int32_t>(offsetof(FacebookStoreImpl_t1362794587_StaticFields, ___U3CU3Ef__mgU24cache0_5)); }
	inline UnityPurchasingCallback_t2635187846 * get_U3CU3Ef__mgU24cache0_5() const { return ___U3CU3Ef__mgU24cache0_5; }
	inline UnityPurchasingCallback_t2635187846 ** get_address_of_U3CU3Ef__mgU24cache0_5() { return &___U3CU3Ef__mgU24cache0_5; }
	inline void set_U3CU3Ef__mgU24cache0_5(UnityPurchasingCallback_t2635187846 * value)
	{
		___U3CU3Ef__mgU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
