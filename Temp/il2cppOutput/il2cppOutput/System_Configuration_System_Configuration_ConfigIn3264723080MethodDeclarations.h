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

// System.Configuration.ConfigInfoCollection
struct ConfigInfoCollection_t3264723080;
// System.Collections.ICollection
struct ICollection_t91669223;
// System.Configuration.ConfigInfo
struct ConfigInfo_t546730838;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Configuration_System_Configuration_ConfigInf546730838.h"

// System.Void System.Configuration.ConfigInfoCollection::.ctor()
extern "C"  void ConfigInfoCollection__ctor_m2267743875 (ConfigInfoCollection_t3264723080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Configuration.ConfigInfoCollection::get_AllKeys()
extern "C"  Il2CppObject * ConfigInfoCollection_get_AllKeys_m3546771423 (ConfigInfoCollection_t3264723080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigInfo System.Configuration.ConfigInfoCollection::get_Item(System.String)
extern "C"  ConfigInfo_t546730838 * ConfigInfoCollection_get_Item_m4196945655 (ConfigInfoCollection_t3264723080 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigInfoCollection::set_Item(System.String,System.Configuration.ConfigInfo)
extern "C"  void ConfigInfoCollection_set_Item_m406516082 (ConfigInfoCollection_t3264723080 * __this, String_t* ___name0, ConfigInfo_t546730838 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigInfoCollection::Add(System.String,System.Configuration.ConfigInfo)
extern "C"  void ConfigInfoCollection_Add_m1288541941 (ConfigInfoCollection_t3264723080 * __this, String_t* ___name0, ConfigInfo_t546730838 * ___config1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigInfoCollection::Clear()
extern "C"  void ConfigInfoCollection_Clear_m1297066444 (ConfigInfoCollection_t3264723080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigInfoCollection::Remove(System.String)
extern "C"  void ConfigInfoCollection_Remove_m1334699295 (ConfigInfoCollection_t3264723080 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
