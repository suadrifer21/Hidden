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

// System.Net.Configuration.ConnectionManagementElementCollection
struct ConnectionManagementElementCollection_t3244012643;
// System.Net.Configuration.ConnectionManagementElement
struct ConnectionManagementElement_t1734801665;
// System.String
struct String_t;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t1776195828;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Configuration_ConnectionManageme1734801665.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Configuration_System_Configuration_Configur1776195828.h"

// System.Void System.Net.Configuration.ConnectionManagementElementCollection::.ctor()
extern "C"  void ConnectionManagementElementCollection__ctor_m4117837667 (ConnectionManagementElementCollection_t3244012643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.ConnectionManagementElement System.Net.Configuration.ConnectionManagementElementCollection::get_Item(System.Int32)
extern "C"  ConnectionManagementElement_t1734801665 * ConnectionManagementElementCollection_get_Item_m919540048 (ConnectionManagementElementCollection_t3244012643 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::set_Item(System.Int32,System.Net.Configuration.ConnectionManagementElement)
extern "C"  void ConnectionManagementElementCollection_set_Item_m832723125 (ConnectionManagementElementCollection_t3244012643 * __this, int32_t ___index0, ConnectionManagementElement_t1734801665 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Configuration.ConnectionManagementElement System.Net.Configuration.ConnectionManagementElementCollection::get_Item(System.String)
extern "C"  ConnectionManagementElement_t1734801665 * ConnectionManagementElementCollection_get_Item_m3963988233 (ConnectionManagementElementCollection_t3244012643 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::set_Item(System.String,System.Net.Configuration.ConnectionManagementElement)
extern "C"  void ConnectionManagementElementCollection_set_Item_m107573368 (ConnectionManagementElementCollection_t3244012643 * __this, String_t* ___name0, ConnectionManagementElement_t1734801665 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::Add(System.Net.Configuration.ConnectionManagementElement)
extern "C"  void ConnectionManagementElementCollection_Add_m2390353861 (ConnectionManagementElementCollection_t3244012643 * __this, ConnectionManagementElement_t1734801665 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::Clear()
extern "C"  void ConnectionManagementElementCollection_Clear_m2744122510 (ConnectionManagementElementCollection_t3244012643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationElement System.Net.Configuration.ConnectionManagementElementCollection::CreateNewElement()
extern "C"  ConfigurationElement_t1776195828 * ConnectionManagementElementCollection_CreateNewElement_m3355159097 (ConnectionManagementElementCollection_t3244012643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Configuration.ConnectionManagementElementCollection::GetElementKey(System.Configuration.ConfigurationElement)
extern "C"  Il2CppObject * ConnectionManagementElementCollection_GetElementKey_m1261192496 (ConnectionManagementElementCollection_t3244012643 * __this, ConfigurationElement_t1776195828 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Configuration.ConnectionManagementElementCollection::IndexOf(System.Net.Configuration.ConnectionManagementElement)
extern "C"  int32_t ConnectionManagementElementCollection_IndexOf_m4160242901 (ConnectionManagementElementCollection_t3244012643 * __this, ConnectionManagementElement_t1734801665 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::Remove(System.Net.Configuration.ConnectionManagementElement)
extern "C"  void ConnectionManagementElementCollection_Remove_m1529105406 (ConnectionManagementElementCollection_t3244012643 * __this, ConnectionManagementElement_t1734801665 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::Remove(System.String)
extern "C"  void ConnectionManagementElementCollection_Remove_m3063300919 (ConnectionManagementElementCollection_t3244012643 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::RemoveAt(System.Int32)
extern "C"  void ConnectionManagementElementCollection_RemoveAt_m306840361 (ConnectionManagementElementCollection_t3244012643 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
