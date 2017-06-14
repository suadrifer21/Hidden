#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Purchasing.RawStoreProvider
struct RawStoreProvider_t3477922056;
// UnityEngine.Purchasing.INativeStore
struct INativeStore_t3203646079;
// UnityEngine.Purchasing.IUnityCallback
struct IUnityCallback_t1155931721;
// UnityEngine.Purchasing.Extension.IPurchasingBinder
struct IPurchasingBinder_t2054654539;
// Uniject.IUtil
struct IUtil_t2188430191;
// UnityEngine.Purchasing.INativeAppleStore
struct INativeAppleStore_t2240226449;
// UnityEngine.Purchasing.INativeTizenStore
struct INativeTizenStore_t513596045;
// UnityEngine.Purchasing.INativeFacebookStore
struct INativeFacebookStore_t3367400535;

#include "codegen/il2cpp-codegen.h"
#include "Stores_UnityEngine_Purchasing_AndroidStore3203055206.h"

// System.Void UnityEngine.Purchasing.RawStoreProvider::.ctor()
extern "C"  void RawStoreProvider__ctor_m2614959374 (RawStoreProvider_t3477922056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.INativeStore UnityEngine.Purchasing.RawStoreProvider::GetAndroidStore(UnityEngine.Purchasing.IUnityCallback,UnityEngine.Purchasing.AndroidStore,UnityEngine.Purchasing.Extension.IPurchasingBinder,Uniject.IUtil)
extern "C"  Il2CppObject * RawStoreProvider_GetAndroidStore_m2680390634 (RawStoreProvider_t3477922056 * __this, Il2CppObject * ___callback0, int32_t ___store1, Il2CppObject * ___binder2, Il2CppObject * ___util3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.INativeAppleStore UnityEngine.Purchasing.RawStoreProvider::GetStorekit(UnityEngine.Purchasing.IUnityCallback)
extern "C"  Il2CppObject * RawStoreProvider_GetStorekit_m1533139424 (RawStoreProvider_t3477922056 * __this, Il2CppObject * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.INativeTizenStore UnityEngine.Purchasing.RawStoreProvider::GetTizenStore(UnityEngine.Purchasing.IUnityCallback,UnityEngine.Purchasing.Extension.IPurchasingBinder)
extern "C"  Il2CppObject * RawStoreProvider_GetTizenStore_m900806873 (RawStoreProvider_t3477922056 * __this, Il2CppObject * ___callback0, Il2CppObject * ___binder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.INativeFacebookStore UnityEngine.Purchasing.RawStoreProvider::GetFacebookStore()
extern "C"  Il2CppObject * RawStoreProvider_GetFacebookStore_m1782970492 (RawStoreProvider_t3477922056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
