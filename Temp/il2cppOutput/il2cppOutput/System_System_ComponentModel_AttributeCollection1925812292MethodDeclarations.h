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

// System.ComponentModel.AttributeCollection
struct AttributeCollection_t1925812292;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Attribute[]
struct AttributeU5BU5D_t4255796347;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Object
struct Il2CppObject;
// System.Attribute
struct Attribute_t542643598;
// System.Array
struct Il2CppArray;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_ArrayList4252133567.h"
#include "mscorlib_System_Attribute542643598.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void System.ComponentModel.AttributeCollection::.ctor(System.Collections.ArrayList)
extern "C"  void AttributeCollection__ctor_m7557454 (AttributeCollection_t1925812292 * __this, ArrayList_t4252133567 * ___attributes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AttributeCollection::.ctor(System.Attribute[])
extern "C"  void AttributeCollection__ctor_m701388612 (AttributeCollection_t1925812292 * __this, AttributeU5BU5D_t4255796347* ___attributes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AttributeCollection::.cctor()
extern "C"  void AttributeCollection__cctor_m2801958540 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.ComponentModel.AttributeCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * AttributeCollection_System_Collections_IEnumerable_GetEnumerator_m4186702062 (AttributeCollection_t1925812292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.AttributeCollection::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool AttributeCollection_System_Collections_ICollection_get_IsSynchronized_m451528281 (AttributeCollection_t1925812292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.AttributeCollection::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * AttributeCollection_System_Collections_ICollection_get_SyncRoot_m2339323621 (AttributeCollection_t1925812292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.AttributeCollection::System.Collections.ICollection.get_Count()
extern "C"  int32_t AttributeCollection_System_Collections_ICollection_get_Count_m598416648 (AttributeCollection_t1925812292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.AttributeCollection::Contains(System.Attribute)
extern "C"  bool AttributeCollection_Contains_m2815867945 (AttributeCollection_t1925812292 * __this, Attribute_t542643598 * ___attr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.AttributeCollection::Contains(System.Attribute[])
extern "C"  bool AttributeCollection_Contains_m1687486531 (AttributeCollection_t1925812292 * __this, AttributeU5BU5D_t4255796347* ___attributes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AttributeCollection::CopyTo(System.Array,System.Int32)
extern "C"  void AttributeCollection_CopyTo_m910034722 (AttributeCollection_t1925812292 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.ComponentModel.AttributeCollection::GetEnumerator()
extern "C"  Il2CppObject * AttributeCollection_GetEnumerator_m3823368357 (AttributeCollection_t1925812292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.ComponentModel.AttributeCollection::GetDefaultAttribute(System.Type)
extern "C"  Attribute_t542643598 * AttributeCollection_GetDefaultAttribute_m841052095 (AttributeCollection_t1925812292 * __this, Type_t * ___attributeType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.AttributeCollection::get_Count()
extern "C"  int32_t AttributeCollection_get_Count_m2462658365 (AttributeCollection_t1925812292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.ComponentModel.AttributeCollection::get_Item(System.Type)
extern "C"  Attribute_t542643598 * AttributeCollection_get_Item_m3713562356 (AttributeCollection_t1925812292 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
