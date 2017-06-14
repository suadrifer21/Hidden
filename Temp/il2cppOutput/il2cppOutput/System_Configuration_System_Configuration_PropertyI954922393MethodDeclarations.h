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

// System.Configuration.PropertyInformationCollection
struct PropertyInformationCollection_t954922393;
// System.Configuration.PropertyInformation
struct PropertyInformation_t2089433965;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Configuration_System_Configuration_Property2089433965.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"

// System.Void System.Configuration.PropertyInformationCollection::.ctor()
extern "C"  void PropertyInformationCollection__ctor_m3360125324 (PropertyInformationCollection_t954922393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.PropertyInformation System.Configuration.PropertyInformationCollection::get_Item(System.String)
extern "C"  PropertyInformation_t2089433965 * PropertyInformationCollection_get_Item_m1640937095 (PropertyInformationCollection_t954922393 * __this, String_t* ___propertyName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.PropertyInformationCollection::GetEnumerator()
extern "C"  Il2CppObject * PropertyInformationCollection_GetEnumerator_m2342156100 (PropertyInformationCollection_t954922393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.PropertyInformationCollection::Add(System.Configuration.PropertyInformation)
extern "C"  void PropertyInformationCollection_Add_m3086044235 (PropertyInformationCollection_t954922393 * __this, PropertyInformation_t2089433965 * ___pi0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.PropertyInformationCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void PropertyInformationCollection_GetObjectData_m1752565104 (PropertyInformationCollection_t954922393 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
