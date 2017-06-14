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

// System.Configuration.InternalConfigurationHost
struct InternalConfigurationHost_t547577555;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.IO.Stream
struct Stream_t3255436806;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Configuration_System_Configuration_Configur3250313246.h"
#include "System_Configuration_System_Configuration_Configur3860111898.h"

// System.Void System.Configuration.InternalConfigurationHost::.ctor()
extern "C"  void InternalConfigurationHost__ctor_m1120670670 (InternalConfigurationHost_t547577555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.InternalConfigurationHost::CreateDeprecatedConfigContext(System.String)
extern "C"  Il2CppObject * InternalConfigurationHost_CreateDeprecatedConfigContext_m3055903953 (InternalConfigurationHost_t547577555 * __this, String_t* ___configPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.InternalConfigurationHost::GetConfigPathFromLocationSubPath(System.String,System.String)
extern "C"  String_t* InternalConfigurationHost_GetConfigPathFromLocationSubPath_m3102336364 (InternalConfigurationHost_t547577555 * __this, String_t* ___configPath0, String_t* ___locationSubPath1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Configuration.InternalConfigurationHost::GetConfigType(System.String,System.Boolean)
extern "C"  Type_t * InternalConfigurationHost_GetConfigType_m2265190311 (InternalConfigurationHost_t547577555 * __this, String_t* ___typeName0, bool ___throwOnError1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Configuration.InternalConfigurationHost::IsDefinitionAllowed(System.String,System.Configuration.ConfigurationAllowDefinition,System.Configuration.ConfigurationAllowExeDefinition)
extern "C"  bool InternalConfigurationHost_IsDefinitionAllowed_m2472316359 (InternalConfigurationHost_t547577555 * __this, String_t* ___configPath0, int32_t ___allowDefinition1, int32_t ___allowExeDefinition2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.InternalConfigurationHost::get_bundled_machine_config()
extern "C"  String_t* InternalConfigurationHost_get_bundled_machine_config_m171293269 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Configuration.InternalConfigurationHost::OpenStreamForRead(System.String)
extern "C"  Stream_t3255436806 * InternalConfigurationHost_OpenStreamForRead_m1823276945 (InternalConfigurationHost_t547577555 * __this, String_t* ___streamName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
