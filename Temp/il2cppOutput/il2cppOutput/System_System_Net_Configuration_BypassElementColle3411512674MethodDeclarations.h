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

// System.Net.Configuration.BypassElementCollection
struct BypassElementCollection_t3411512674;
// System.Net.Configuration.BypassElement
struct BypassElement_t4253212366;
// System.String
struct String_t;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t1776195828;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Configuration_BypassElement4253212366.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Configuration_System_Configuration_Configur1776195828.h"

// System.Void System.Net.Configuration.BypassElementCollection::.ctor()
extern "C"  void BypassElementCollection__ctor_m2082761592 (BypassElementCollection_t3411512674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.BypassElement System.Net.Configuration.BypassElementCollection::get_Item(System.Int32)
extern "C"  BypassElement_t4253212366 * BypassElementCollection_get_Item_m1872697386 (BypassElementCollection_t3411512674 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.BypassElementCollection::set_Item(System.Int32,System.Net.Configuration.BypassElement)
extern "C"  void BypassElementCollection_set_Item_m3037756341 (BypassElementCollection_t3411512674 * __this, int32_t ___index0, BypassElement_t4253212366 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.BypassElement System.Net.Configuration.BypassElementCollection::get_Item(System.String)
extern "C"  BypassElement_t4253212366 * BypassElementCollection_get_Item_m3202907473 (BypassElementCollection_t3411512674 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.BypassElementCollection::set_Item(System.String,System.Net.Configuration.BypassElement)
extern "C"  void BypassElementCollection_set_Item_m1086668866 (BypassElementCollection_t3411512674 * __this, String_t* ___name0, BypassElement_t4253212366 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Configuration.BypassElementCollection::get_ThrowOnDuplicate()
extern "C"  bool BypassElementCollection_get_ThrowOnDuplicate_m2466830773 (BypassElementCollection_t3411512674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.BypassElementCollection::Add(System.Net.Configuration.BypassElement)
extern "C"  void BypassElementCollection_Add_m274913893 (BypassElementCollection_t3411512674 * __this, BypassElement_t4253212366 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.BypassElementCollection::Clear()
extern "C"  void BypassElementCollection_Clear_m3272795637 (BypassElementCollection_t3411512674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Net.Configuration.BypassElementCollection::CreateNewElement()
extern "C"  ConfigurationElement_t1776195828 * BypassElementCollection_CreateNewElement_m2736666232 (BypassElementCollection_t3411512674 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Configuration.BypassElementCollection::GetElementKey(System.Configuration.ConfigurationElement)
extern "C"  Il2CppObject * BypassElementCollection_GetElementKey_m3025198001 (BypassElementCollection_t3411512674 * __this, ConfigurationElement_t1776195828 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Configuration.BypassElementCollection::IndexOf(System.Net.Configuration.BypassElement)
extern "C"  int32_t BypassElementCollection_IndexOf_m1470360885 (BypassElementCollection_t3411512674 * __this, BypassElement_t4253212366 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.BypassElementCollection::Remove(System.Net.Configuration.BypassElement)
extern "C"  void BypassElementCollection_Remove_m3550349660 (BypassElementCollection_t3411512674 * __this, BypassElement_t4253212366 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.BypassElementCollection::Remove(System.String)
extern "C"  void BypassElementCollection_Remove_m3965073464 (BypassElementCollection_t3411512674 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.BypassElementCollection::RemoveAt(System.Int32)
extern "C"  void BypassElementCollection_RemoveAt_m2726576410 (BypassElementCollection_t3411512674 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
