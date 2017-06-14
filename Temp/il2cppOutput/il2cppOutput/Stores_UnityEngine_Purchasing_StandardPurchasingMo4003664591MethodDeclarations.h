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

// UnityEngine.Purchasing.StandardPurchasingModule
struct StandardPurchasingModule_t4003664591;
// Uniject.IUtil
struct IUtil_t2188430191;
// UnityEngine.ILogger
struct ILogger_t1425954571;
// UnityEngine.Purchasing.IRawStoreProvider
struct IRawStoreProvider_t2441088289;
// UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance
struct StoreInstance_t107230755;
// UnityEngine.Purchasing.Extension.IStore
struct IStore_t3609486926;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RuntimePlatform1869584967.h"
#include "Stores_UnityEngine_Purchasing_AndroidStore3203055206.h"
#include "Stores_UnityEngine_Purchasing_FakeStoreUIMode2321492887.h"

// System.Void UnityEngine.Purchasing.StandardPurchasingModule::.ctor(Uniject.IUtil,UnityEngine.ILogger,UnityEngine.Purchasing.IRawStoreProvider,UnityEngine.RuntimePlatform,UnityEngine.Purchasing.AndroidStore)
extern "C"  void StandardPurchasingModule__ctor_m3405157511 (StandardPurchasingModule_t4003664591 * __this, Il2CppObject * ___util0, Il2CppObject * ___logger1, Il2CppObject * ___platformProvider2, int32_t ___platform3, int32_t ___android4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.AndroidStore UnityEngine.Purchasing.StandardPurchasingModule::get_androidStore()
extern "C"  int32_t StandardPurchasingModule_get_androidStore_m1436760510 (StandardPurchasingModule_t4003664591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.FakeStoreUIMode UnityEngine.Purchasing.StandardPurchasingModule::get_useFakeStoreUIMode()
extern "C"  int32_t StandardPurchasingModule_get_useFakeStoreUIMode_m1753364605 (StandardPurchasingModule_t4003664591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.StandardPurchasingModule::set_useFakeStoreUIMode(UnityEngine.Purchasing.FakeStoreUIMode)
extern "C"  void StandardPurchasingModule_set_useFakeStoreUIMode_m3278247934 (StandardPurchasingModule_t4003664591 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.StandardPurchasingModule::get_useFakeStoreAlways()
extern "C"  bool StandardPurchasingModule_get_useFakeStoreAlways_m2384103666 (StandardPurchasingModule_t4003664591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.StandardPurchasingModule::set_useFakeStoreAlways(System.Boolean)
extern "C"  void StandardPurchasingModule_set_useFakeStoreAlways_m2188294661 (StandardPurchasingModule_t4003664591 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.StandardPurchasingModule::Instance()
extern "C"  StandardPurchasingModule_t4003664591 * StandardPurchasingModule_Instance_m2889845773 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.StandardPurchasingModule::Instance(UnityEngine.Purchasing.AndroidStore)
extern "C"  StandardPurchasingModule_t4003664591 * StandardPurchasingModule_Instance_m1861703984 (Il2CppObject * __this /* static, unused */, int32_t ___androidStore0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.StandardPurchasingModule::Configure()
extern "C"  void StandardPurchasingModule_Configure_m2631124963 (StandardPurchasingModule_t4003664591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance UnityEngine.Purchasing.StandardPurchasingModule::InstantiateStore()
extern "C"  StoreInstance_t107230755 * StandardPurchasingModule_InstantiateStore_m84868782 (StandardPurchasingModule_t4003664591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::InstantiateAndroid()
extern "C"  Il2CppObject * StandardPurchasingModule_InstantiateAndroid_m3011531131 (StandardPurchasingModule_t4003664591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::InstantiateCloudMoolah()
extern "C"  Il2CppObject * StandardPurchasingModule_InstantiateCloudMoolah_m2742271561 (StandardPurchasingModule_t4003664591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::InstantiateApple()
extern "C"  Il2CppObject * StandardPurchasingModule_InstantiateApple_m1201056034 (StandardPurchasingModule_t4003664591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.StandardPurchasingModule::UseMockWindowsStore(System.Boolean)
extern "C"  void StandardPurchasingModule_UseMockWindowsStore_m536092621 (StandardPurchasingModule_t4003664591 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::instantiateWindowsStore()
extern "C"  Il2CppObject * StandardPurchasingModule_instantiateWindowsStore_m857429766 (StandardPurchasingModule_t4003664591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::InstantiateTizen()
extern "C"  Il2CppObject * StandardPurchasingModule_InstantiateTizen_m2777272342 (StandardPurchasingModule_t4003664591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::InstantiateFacebook()
extern "C"  Il2CppObject * StandardPurchasingModule_InstantiateFacebook_m440121676 (StandardPurchasingModule_t4003664591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule::InstantiateFakeStore()
extern "C"  Il2CppObject * StandardPurchasingModule_InstantiateFakeStore_m1788236408 (StandardPurchasingModule_t4003664591 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.StandardPurchasingModule::.cctor()
extern "C"  void StandardPurchasingModule__cctor_m1254625542 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
