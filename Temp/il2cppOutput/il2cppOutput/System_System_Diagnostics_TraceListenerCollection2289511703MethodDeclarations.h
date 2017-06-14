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

// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t2289511703;
// System.Object
struct Il2CppObject;
// System.Array
struct Il2CppArray;
// System.Diagnostics.TraceListener
struct TraceListener_t3414949279;
// System.String
struct String_t;
// System.Diagnostics.TraceImplSettings
struct TraceImplSettings_t1186465586;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_String2029220233.h"
#include "System_System_Diagnostics_TraceListener3414949279.h"
#include "System_System_Diagnostics_TraceImplSettings1186465586.h"

// System.Void System.Diagnostics.TraceListenerCollection::.ctor()
extern "C"  void TraceListenerCollection__ctor_m612758122 (TraceListenerCollection_t2289511703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::.ctor(System.Boolean)
extern "C"  void TraceListenerCollection__ctor_m1111368365 (TraceListenerCollection_t2289511703 * __this, bool ___addDefault0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Diagnostics.TraceListenerCollection::System.Collections.IList.get_Item(System.Int32)
extern "C"  Il2CppObject * TraceListenerCollection_System_Collections_IList_get_Item_m2284809303 (TraceListenerCollection_t2289511703 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void TraceListenerCollection_System_Collections_IList_set_Item_m1205995108 (TraceListenerCollection_t2289511703 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.TraceListenerCollection::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool TraceListenerCollection_System_Collections_ICollection_get_IsSynchronized_m3012852146 (TraceListenerCollection_t2289511703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Diagnostics.TraceListenerCollection::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * TraceListenerCollection_System_Collections_ICollection_get_SyncRoot_m1482199550 (TraceListenerCollection_t2289511703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.TraceListenerCollection::System.Collections.IList.get_IsFixedSize()
extern "C"  bool TraceListenerCollection_System_Collections_IList_get_IsFixedSize_m3154681719 (TraceListenerCollection_t2289511703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.TraceListenerCollection::System.Collections.IList.get_IsReadOnly()
extern "C"  bool TraceListenerCollection_System_Collections_IList_get_IsReadOnly_m667078910 (TraceListenerCollection_t2289511703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void TraceListenerCollection_System_Collections_ICollection_CopyTo_m1594045198 (TraceListenerCollection_t2289511703 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.TraceListenerCollection::System.Collections.IList.Add(System.Object)
extern "C"  int32_t TraceListenerCollection_System_Collections_IList_Add_m251190826 (TraceListenerCollection_t2289511703 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.TraceListenerCollection::System.Collections.IList.Contains(System.Object)
extern "C"  bool TraceListenerCollection_System_Collections_IList_Contains_m4113625380 (TraceListenerCollection_t2289511703 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.TraceListenerCollection::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t TraceListenerCollection_System_Collections_IList_IndexOf_m3209030908 (TraceListenerCollection_t2289511703 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void TraceListenerCollection_System_Collections_IList_Insert_m2119006871 (TraceListenerCollection_t2289511703 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::System.Collections.IList.Remove(System.Object)
extern "C"  void TraceListenerCollection_System_Collections_IList_Remove_m3849427439 (TraceListenerCollection_t2289511703 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.TraceListenerCollection::get_Count()
extern "C"  int32_t TraceListenerCollection_get_Count_m2685164346 (TraceListenerCollection_t2289511703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.TraceListener System.Diagnostics.TraceListenerCollection::get_Item(System.String)
extern "C"  TraceListener_t3414949279 * TraceListenerCollection_get_Item_m177761381 (TraceListenerCollection_t2289511703 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::set_Item(System.Int32,System.Diagnostics.TraceListener)
extern "C"  void TraceListenerCollection_set_Item_m399246165 (TraceListenerCollection_t2289511703 * __this, int32_t ___index0, TraceListener_t3414949279 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.TraceListenerCollection::Add(System.Diagnostics.TraceListener)
extern "C"  int32_t TraceListenerCollection_Add_m1045233255 (TraceListenerCollection_t2289511703 * __this, TraceListener_t3414949279 * ___listener0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::Add(System.Diagnostics.TraceListener,System.Diagnostics.TraceImplSettings)
extern "C"  void TraceListenerCollection_Add_m968452600 (TraceListenerCollection_t2289511703 * __this, TraceListener_t3414949279 * ___listener0, TraceImplSettings_t1186465586 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::InitializeListener(System.Diagnostics.TraceListener)
extern "C"  void TraceListenerCollection_InitializeListener_m1688495150 (TraceListenerCollection_t2289511703 * __this, TraceListener_t3414949279 * ___listener0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::Clear()
extern "C"  void TraceListenerCollection_Clear_m102051271 (TraceListenerCollection_t2289511703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Diagnostics.TraceListenerCollection::GetEnumerator()
extern "C"  Il2CppObject * TraceListenerCollection_GetEnumerator_m4050199318 (TraceListenerCollection_t2289511703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::Insert(System.Int32,System.Diagnostics.TraceListener)
extern "C"  void TraceListenerCollection_Insert_m4009614426 (TraceListenerCollection_t2289511703 * __this, int32_t ___index0, TraceListener_t3414949279 * ___listener1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::Remove(System.String)
extern "C"  void TraceListenerCollection_Remove_m3313713630 (TraceListenerCollection_t2289511703 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceListenerCollection::RemoveAt(System.Int32)
extern "C"  void TraceListenerCollection_RemoveAt_m524598860 (TraceListenerCollection_t2289511703 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
