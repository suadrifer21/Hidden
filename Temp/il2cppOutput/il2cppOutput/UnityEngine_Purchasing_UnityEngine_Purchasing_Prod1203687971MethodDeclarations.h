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

// UnityEngine.Purchasing.Product
struct Product_t1203687971;
// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_t1942475268;
// UnityEngine.Purchasing.ProductMetadata
struct ProductMetadata_t1573242544;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod1942475268.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod1573242544.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void UnityEngine.Purchasing.Product::.ctor(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.ProductMetadata,System.String)
extern "C"  void Product__ctor_m1458419694 (Product_t1203687971 * __this, ProductDefinition_t1942475268 * ___definition0, ProductMetadata_t1573242544 * ___metadata1, String_t* ___receipt2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Product::.ctor(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.ProductMetadata)
extern "C"  void Product__ctor_m2882740182 (Product_t1203687971 * __this, ProductDefinition_t1942475268 * ___definition0, ProductMetadata_t1573242544 * ___metadata1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.Product::get_definition()
extern "C"  ProductDefinition_t1942475268 * Product_get_definition_m2035415516 (Product_t1203687971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Product::set_definition(UnityEngine.Purchasing.ProductDefinition)
extern "C"  void Product_set_definition_m4221555959 (Product_t1203687971 * __this, ProductDefinition_t1942475268 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Product::get_metadata()
extern "C"  ProductMetadata_t1573242544 * Product_get_metadata_m263398044 (Product_t1203687971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Product::set_metadata(UnityEngine.Purchasing.ProductMetadata)
extern "C"  void Product_set_metadata_m420583943 (Product_t1203687971 * __this, ProductMetadata_t1573242544 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.Product::get_availableToPurchase()
extern "C"  bool Product_get_availableToPurchase_m3285924692 (Product_t1203687971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Product::set_availableToPurchase(System.Boolean)
extern "C"  void Product_set_availableToPurchase_m1257297781 (Product_t1203687971 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.Product::get_transactionID()
extern "C"  String_t* Product_get_transactionID_m2023701007 (Product_t1203687971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Product::set_transactionID(System.String)
extern "C"  void Product_set_transactionID_m2662157962 (Product_t1203687971 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.Product::get_hasReceipt()
extern "C"  bool Product_get_hasReceipt_m617723237 (Product_t1203687971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.Product::get_receipt()
extern "C"  String_t* Product_get_receipt_m1045158498 (Product_t1203687971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Product::set_receipt(System.String)
extern "C"  void Product_set_receipt_m933674681 (Product_t1203687971 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.Product::Equals(System.Object)
extern "C"  bool Product_Equals_m1444807307 (Product_t1203687971 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Purchasing.Product::GetHashCode()
extern "C"  int32_t Product_GetHashCode_m2764553653 (Product_t1203687971 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
