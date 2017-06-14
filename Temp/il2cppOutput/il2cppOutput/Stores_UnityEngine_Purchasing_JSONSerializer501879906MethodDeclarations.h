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

// System.String
struct String_t;
// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_t1942475268;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.ProductDefinition>
struct IEnumerable_1_t2234602313;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>
struct List_1_t2687388655;
// UnityEngine.Purchasing.Extension.PurchaseFailureDescription
struct PurchaseFailureDescription_t1607114611;
// UnityEngine.Purchasing.ProductMetadata
struct ProductMetadata_t1573242544;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod1942475268.h"
#include "mscorlib_System_String2029220233.h"

// System.String UnityEngine.Purchasing.JSONSerializer::SerializeProductDef(UnityEngine.Purchasing.ProductDefinition)
extern "C"  String_t* JSONSerializer_SerializeProductDef_m3948994734 (Il2CppObject * __this /* static, unused */, ProductDefinition_t1942475268 * ___product0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.JSONSerializer::SerializeProductDefs(System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.ProductDefinition>)
extern "C"  String_t* JSONSerializer_SerializeProductDefs_m2515728532 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___products0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription> UnityEngine.Purchasing.JSONSerializer::DeserializeProductDescriptions(System.String)
extern "C"  List_1_t2687388655 * JSONSerializer_DeserializeProductDescriptions_m2762227127 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Extension.PurchaseFailureDescription UnityEngine.Purchasing.JSONSerializer::DeserializeFailureReason(System.String)
extern "C"  PurchaseFailureDescription_t1607114611 * JSONSerializer_DeserializeFailureReason_m1834198275 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.JSONSerializer::DeserializeMetadata(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  ProductMetadata_t1573242544 * JSONSerializer_DeserializeMetadata_m540119287 (Il2CppObject * __this /* static, unused */, Dictionary_2_t309261261 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.JSONSerializer::EncodeProductDef(UnityEngine.Purchasing.ProductDefinition)
extern "C"  Dictionary_2_t309261261 * JSONSerializer_EncodeProductDef_m2253177235 (Il2CppObject * __this /* static, unused */, ProductDefinition_t1942475268 * ___product0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
