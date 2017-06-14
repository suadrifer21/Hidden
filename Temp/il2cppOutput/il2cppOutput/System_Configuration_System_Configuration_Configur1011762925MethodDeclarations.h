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

// System.Configuration.ConfigurationLockCollection
struct ConfigurationLockCollection_t1011762925;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t1776195828;
// System.Array
struct Il2CppArray;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configur1776195828.h"
#include "System_Configuration_System_Configuration_Configura131834733.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Configuration.ConfigurationLockCollection::.ctor(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationLockType)
extern "C"  void ConfigurationLockCollection__ctor_m870306509 (ConfigurationLockCollection_t1011762925 * __this, ConfigurationElement_t1776195828 * ___element0, int32_t ___lockType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLockCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void ConfigurationLockCollection_System_Collections_ICollection_CopyTo_m3497490008 (ConfigurationLockCollection_t1011762925 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLockCollection::CheckName(System.String)
extern "C"  void ConfigurationLockCollection_CheckName_m2810988355 (ConfigurationLockCollection_t1011762925 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLockCollection::Add(System.String)
extern "C"  void ConfigurationLockCollection_Add_m3416925987 (ConfigurationLockCollection_t1011762925 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLockCollection::Clear()
extern "C"  void ConfigurationLockCollection_Clear_m2378334261 (ConfigurationLockCollection_t1011762925 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.ConfigurationLockCollection::GetEnumerator()
extern "C"  Il2CppObject * ConfigurationLockCollection_GetEnumerator_m3742833280 (ConfigurationLockCollection_t1011762925 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLockCollection::SetFromList(System.String)
extern "C"  void ConfigurationLockCollection_SetFromList_m2739237306 (ConfigurationLockCollection_t1011762925 * __this, String_t* ___attributeList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationLockCollection::get_Count()
extern "C"  int32_t ConfigurationLockCollection_get_Count_m3926033248 (ConfigurationLockCollection_t1011762925 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.ConfigurationLockCollection::get_IsSynchronized()
extern "C"  bool ConfigurationLockCollection_get_IsSynchronized_m1658122353 (ConfigurationLockCollection_t1011762925 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationLockCollection::get_SyncRoot()
extern "C"  Il2CppObject * ConfigurationLockCollection_get_SyncRoot_m1477706993 (ConfigurationLockCollection_t1011762925 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
