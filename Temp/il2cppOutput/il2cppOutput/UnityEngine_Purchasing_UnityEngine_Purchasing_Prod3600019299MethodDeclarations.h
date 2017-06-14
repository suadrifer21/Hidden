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

// UnityEngine.Purchasing.ProductCollection
struct ProductCollection_t3600019299;
// UnityEngine.Purchasing.Product[]
struct ProductU5BU5D_t728099314;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Product>
struct IEnumerable_1_t1495815016;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Product>
struct HashSet_1_t3832116121;
// UnityEngine.Purchasing.Product
struct Product_t1203687971;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod1203687971.h"

// System.Void UnityEngine.Purchasing.ProductCollection::.ctor(UnityEngine.Purchasing.Product[])
extern "C"  void ProductCollection__ctor_m3622794372 (ProductCollection_t3600019299 * __this, ProductU5BU5D_t728099314* ___products0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.ProductCollection::AddProducts(System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Product>)
extern "C"  void ProductCollection_AddProducts_m76490526 (ProductCollection_t3600019299 * __this, Il2CppObject* ___products0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Product> UnityEngine.Purchasing.ProductCollection::get_set()
extern "C"  HashSet_1_t3832116121 * ProductCollection_get_set_m2585934998 (ProductCollection_t3600019299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Product[] UnityEngine.Purchasing.ProductCollection::get_all()
extern "C"  ProductU5BU5D_t728099314* ProductCollection_get_all_m3364167965 (ProductCollection_t3600019299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.ProductCollection::WithID(System.String)
extern "C"  Product_t1203687971 * ProductCollection_WithID_m3999574440 (ProductCollection_t3600019299 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.ProductCollection::WithStoreSpecificID(System.String)
extern "C"  Product_t1203687971 * ProductCollection_WithStoreSpecificID_m1010132077 (ProductCollection_t3600019299 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.ProductCollection::<AddProducts>m__0(UnityEngine.Purchasing.Product)
extern "C"  String_t* ProductCollection_U3CAddProductsU3Em__0_m1568647371 (Il2CppObject * __this /* static, unused */, Product_t1203687971 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.ProductCollection::<AddProducts>m__1(UnityEngine.Purchasing.Product)
extern "C"  String_t* ProductCollection_U3CAddProductsU3Em__1_m3101542192 (Il2CppObject * __this /* static, unused */, Product_t1203687971 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
