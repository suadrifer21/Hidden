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

// System.ComponentModel.MemberDescriptor
struct MemberDescriptor_t3749827553;
// System.String
struct String_t;
// System.Attribute[]
struct AttributeU5BU5D_t4255796347;
// System.Collections.IList
struct IList_t3321498491;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t1925812292;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.ComponentModel.MemberDescriptor::.ctor(System.String,System.Attribute[])
extern "C"  void MemberDescriptor__ctor_m3542507155 (MemberDescriptor_t3749827553 * __this, String_t* ___name0, AttributeU5BU5D_t4255796347* ___attrs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] System.ComponentModel.MemberDescriptor::get_AttributeArray()
extern "C"  AttributeU5BU5D_t4255796347* MemberDescriptor_get_AttributeArray_m1073039082 (MemberDescriptor_t3749827553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MemberDescriptor::FillAttributes(System.Collections.IList)
extern "C"  void MemberDescriptor_FillAttributes_m1330134695 (MemberDescriptor_t3749827553 * __this, Il2CppObject * ___attributeList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::get_Attributes()
extern "C"  AttributeCollection_t1925812292 * MemberDescriptor_get_Attributes_m217354542 (MemberDescriptor_t3749827553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::CreateAttributeCollection()
extern "C"  AttributeCollection_t1925812292 * MemberDescriptor_CreateAttributeCollection_m1853675332 (MemberDescriptor_t3749827553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MemberDescriptor::get_Name()
extern "C"  String_t* MemberDescriptor_get_Name_m1191562727 (MemberDescriptor_t3749827553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MemberDescriptor::GetHashCode()
extern "C"  int32_t MemberDescriptor_GetHashCode_m573108599 (MemberDescriptor_t3749827553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MemberDescriptor::Equals(System.Object)
extern "C"  bool MemberDescriptor_Equals_m2946310549 (MemberDescriptor_t3749827553 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
