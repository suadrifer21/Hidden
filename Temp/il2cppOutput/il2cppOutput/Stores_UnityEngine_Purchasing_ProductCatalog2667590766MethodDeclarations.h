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

// UnityEngine.Purchasing.ProductCatalog
struct ProductCatalog_t2667590766;
// System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.ProductCatalogItem>
struct ICollection_1_t1929787300;
// System.String
struct String_t;
// UnityEngine.TextAsset
struct TextAsset_t3973159845;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_TextAsset3973159845.h"

// System.Void UnityEngine.Purchasing.ProductCatalog::.ctor()
extern "C"  void ProductCatalog__ctor_m611578634 (ProductCatalog_t2667590766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.ProductCatalogItem> UnityEngine.Purchasing.ProductCatalog::get_allProducts()
extern "C"  Il2CppObject* ProductCatalog_get_allProducts_m1511651788 (ProductCatalog_t2667590766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ProductCatalog UnityEngine.Purchasing.ProductCatalog::Deserialize(System.String)
extern "C"  ProductCatalog_t2667590766 * ProductCatalog_Deserialize_m2725556257 (Il2CppObject * __this /* static, unused */, String_t* ___catalogJSON0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ProductCatalog UnityEngine.Purchasing.ProductCatalog::FromTextAsset(UnityEngine.TextAsset)
extern "C"  ProductCatalog_t2667590766 * ProductCatalog_FromTextAsset_m2196170505 (Il2CppObject * __this /* static, unused */, TextAsset_t3973159845 * ___asset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ProductCatalog UnityEngine.Purchasing.ProductCatalog::LoadDefaultCatalog()
extern "C"  ProductCatalog_t2667590766 * ProductCatalog_LoadDefaultCatalog_m589345558 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
