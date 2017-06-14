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

// UnityEngine.Purchasing.IStoreListener
struct IStoreListener_t1538020378;
// UnityEngine.Purchasing.ConfigurationBuilder
struct ConfigurationBuilder_t1298400415;
// UnityEngine.ILogger
struct ILogger_t1425954571;
// System.String
struct String_t;
// UnityEngine.Purchasing.IUnityAnalytics
struct IUnityAnalytics_t2407131490;
// UnityEngine.Purchasing.CloudCatalogManager
struct CloudCatalogManager_t3988464631;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>
struct HashSet_1_t275936122;
// System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>
struct Action_1_t77735504;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Conf1298400415.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Clou3988464631.h"

// System.Void UnityEngine.Purchasing.UnityPurchasing::Initialize(UnityEngine.Purchasing.IStoreListener,UnityEngine.Purchasing.ConfigurationBuilder)
extern "C"  void UnityPurchasing_Initialize_m1012234273 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___listener0, ConfigurationBuilder_t1298400415 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.UnityPurchasing::Initialize(UnityEngine.Purchasing.IStoreListener,UnityEngine.Purchasing.ConfigurationBuilder,UnityEngine.ILogger,System.String,UnityEngine.Purchasing.IUnityAnalytics,UnityEngine.Purchasing.CloudCatalogManager)
extern "C"  void UnityPurchasing_Initialize_m2189631296 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___listener0, ConfigurationBuilder_t1298400415 * ___builder1, Il2CppObject * ___logger2, String_t* ___persistentDatapath3, Il2CppObject * ___analytics4, CloudCatalogManager_t3988464631 * ___catalog5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.UnityPurchasing::FetchAndMergeProducts(System.Boolean,System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>,UnityEngine.Purchasing.CloudCatalogManager,System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>)
extern "C"  void UnityPurchasing_FetchAndMergeProducts_m2399488614 (Il2CppObject * __this /* static, unused */, bool ___useCatalog0, HashSet_1_t275936122 * ___applicationProducts1, CloudCatalogManager_t3988464631 * ___catalog2, Action_1_t77735504 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.CloudCatalogManager UnityEngine.Purchasing.UnityPurchasing::InstantiateCatalog(System.String)
extern "C"  CloudCatalogManager_t3988464631 * UnityPurchasing_InstantiateCatalog_m324044656 (Il2CppObject * __this /* static, unused */, String_t* ___storeName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
