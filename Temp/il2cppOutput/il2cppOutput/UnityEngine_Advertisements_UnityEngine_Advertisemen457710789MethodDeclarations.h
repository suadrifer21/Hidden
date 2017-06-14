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

// UnityEngine.Advertisements.MetaData
struct MetaData_t457710789;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void UnityEngine.Advertisements.MetaData::.ctor(System.String)
extern "C"  void MetaData__ctor_m2152562786 (MetaData_t457710789 * __this, String_t* ___category0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Advertisements.MetaData::get_category()
extern "C"  String_t* MetaData_get_category_m2189548888 (MetaData_t457710789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.MetaData::set_category(System.String)
extern "C"  void MetaData_set_category_m3460208887 (MetaData_t457710789 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.MetaData::Set(System.String,System.Object)
extern "C"  void MetaData_Set_m4109076716 (MetaData_t457710789 * __this, String_t* ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.Advertisements.MetaData::Get(System.String)
extern "C"  Il2CppObject * MetaData_Get_m2223534873 (MetaData_t457710789 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Advertisements.MetaData::get_Values()
extern "C"  Il2CppObject* MetaData_get_Values_m2105079684 (MetaData_t457710789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Advertisements.MetaData::ToJSON()
extern "C"  String_t* MetaData_ToJSON_m3720923466 (MetaData_t457710789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
