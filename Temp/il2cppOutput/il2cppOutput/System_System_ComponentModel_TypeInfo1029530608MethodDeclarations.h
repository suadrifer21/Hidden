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

// System.ComponentModel.TypeInfo
struct TypeInfo_t1029530608;
// System.Type
struct Type_t;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t1925812292;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3166009492;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void System.ComponentModel.TypeInfo::.ctor(System.Type)
extern "C"  void TypeInfo__ctor_m3413990130 (TypeInfo_t1029530608 * __this, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeInfo::GetAttributes()
extern "C"  AttributeCollection_t1925812292 * TypeInfo_GetAttributes_m879230336 (TypeInfo_t1029530608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeInfo::GetProperties()
extern "C"  PropertyDescriptorCollection_t3166009492 * TypeInfo_GetProperties_m223272986 (TypeInfo_t1029530608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
