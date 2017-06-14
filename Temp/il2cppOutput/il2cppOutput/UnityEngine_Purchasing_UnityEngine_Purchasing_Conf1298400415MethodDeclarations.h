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

// UnityEngine.Purchasing.ConfigurationBuilder
struct ConfigurationBuilder_t1298400415;
// UnityEngine.Purchasing.PurchasingFactory
struct PurchasingFactory_t3525211160;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>
struct HashSet_1_t275936122;
// UnityEngine.Purchasing.Extension.IPurchasingModule
struct IPurchasingModule_t4085676839;
// UnityEngine.Purchasing.Extension.IPurchasingModule[]
struct IPurchasingModuleU5BU5D_t4128245854;
// System.String
struct String_t;
// UnityEngine.Purchasing.IDs
struct IDs_t3808979560;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purc3525211160.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod2754455291.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_IDs3808979560.h"

// System.Void UnityEngine.Purchasing.ConfigurationBuilder::.ctor(UnityEngine.Purchasing.PurchasingFactory)
extern "C"  void ConfigurationBuilder__ctor_m2335646725 (ConfigurationBuilder_t1298400415 * __this, PurchasingFactory_t3525211160 * ___factory0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.ConfigurationBuilder::get_useCloudCatalog()
extern "C"  bool ConfigurationBuilder_get_useCloudCatalog_m1226702680 (ConfigurationBuilder_t1298400415 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.ConfigurationBuilder::get_products()
extern "C"  HashSet_1_t275936122 * ConfigurationBuilder_get_products_m3201377931 (ConfigurationBuilder_t1298400415 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.PurchasingFactory UnityEngine.Purchasing.ConfigurationBuilder::get_factory()
extern "C"  PurchasingFactory_t3525211160 * ConfigurationBuilder_get_factory_m266218511 (ConfigurationBuilder_t1298400415 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ConfigurationBuilder UnityEngine.Purchasing.ConfigurationBuilder::Instance(UnityEngine.Purchasing.Extension.IPurchasingModule,UnityEngine.Purchasing.Extension.IPurchasingModule[])
extern "C"  ConfigurationBuilder_t1298400415 * ConfigurationBuilder_Instance_m4243979412 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___first0, IPurchasingModuleU5BU5D_t4128245854* ___rest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ConfigurationBuilder UnityEngine.Purchasing.ConfigurationBuilder::AddProduct(System.String,UnityEngine.Purchasing.ProductType)
extern "C"  ConfigurationBuilder_t1298400415 * ConfigurationBuilder_AddProduct_m3779153393 (ConfigurationBuilder_t1298400415 * __this, String_t* ___id0, int32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ConfigurationBuilder UnityEngine.Purchasing.ConfigurationBuilder::AddProduct(System.String,UnityEngine.Purchasing.ProductType,UnityEngine.Purchasing.IDs)
extern "C"  ConfigurationBuilder_t1298400415 * ConfigurationBuilder_AddProduct_m918244722 (ConfigurationBuilder_t1298400415 * __this, String_t* ___id0, int32_t ___type1, IDs_t3808979560 * ___storeIDs2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
