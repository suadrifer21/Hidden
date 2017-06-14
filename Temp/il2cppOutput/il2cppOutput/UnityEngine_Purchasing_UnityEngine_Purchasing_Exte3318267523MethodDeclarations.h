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

// UnityEngine.Purchasing.Extension.ProductDescription
struct ProductDescription_t3318267523;
// System.String
struct String_t;
// UnityEngine.Purchasing.ProductMetadata
struct ProductMetadata_t1573242544;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod1573242544.h"

// System.Void UnityEngine.Purchasing.Extension.ProductDescription::.ctor(System.String,UnityEngine.Purchasing.ProductMetadata,System.String,System.String)
extern "C"  void ProductDescription__ctor_m2528687064 (ProductDescription_t3318267523 * __this, String_t* ___id0, ProductMetadata_t1573242544 * ___metadata1, String_t* ___receipt2, String_t* ___transactionId3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.ProductDescription::.ctor(System.String,UnityEngine.Purchasing.ProductMetadata)
extern "C"  void ProductDescription__ctor_m2055358744 (ProductDescription_t3318267523 * __this, String_t* ___id0, ProductMetadata_t1573242544 * ___metadata1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.Extension.ProductDescription::get_storeSpecificId()
extern "C"  String_t* ProductDescription_get_storeSpecificId_m1197727841 (ProductDescription_t3318267523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.ProductDescription::set_storeSpecificId(System.String)
extern "C"  void ProductDescription_set_storeSpecificId_m3762104324 (ProductDescription_t3318267523 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Extension.ProductDescription::get_metadata()
extern "C"  ProductMetadata_t1573242544 * ProductDescription_get_metadata_m197810193 (ProductDescription_t3318267523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.ProductDescription::set_metadata(UnityEngine.Purchasing.ProductMetadata)
extern "C"  void ProductDescription_set_metadata_m1245484364 (ProductDescription_t3318267523 * __this, ProductMetadata_t1573242544 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.Extension.ProductDescription::get_receipt()
extern "C"  String_t* ProductDescription_get_receipt_m2195649175 (ProductDescription_t3318267523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.ProductDescription::set_receipt(System.String)
extern "C"  void ProductDescription_set_receipt_m1412814936 (ProductDescription_t3318267523 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.Extension.ProductDescription::get_transactionId()
extern "C"  String_t* ProductDescription_get_transactionId_m1342480718 (ProductDescription_t3318267523 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.ProductDescription::set_transactionId(System.String)
extern "C"  void ProductDescription_set_transactionId_m3441716085 (ProductDescription_t3318267523 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
