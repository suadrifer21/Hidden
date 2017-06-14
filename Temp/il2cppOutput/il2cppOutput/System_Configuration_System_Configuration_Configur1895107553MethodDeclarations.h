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

// System.Configuration.ConfigurationLocation
struct ConfigurationLocation_t1895107553;
// System.String
struct String_t;
// System.Configuration.Configuration
struct Configuration_t3335372970;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Configuration_System_Configuration_Configur3335372970.h"

// System.Void System.Configuration.ConfigurationLocation::.ctor(System.String,System.String,System.Configuration.Configuration,System.Boolean)
extern "C"  void ConfigurationLocation__ctor_m3125296074 (ConfigurationLocation_t1895107553 * __this, String_t* ___path0, String_t* ___xmlContent1, Configuration_t3335372970 * ___parent2, bool ___allowOverride3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLocation::.cctor()
extern "C"  void ConfigurationLocation__cctor_m1384898491 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationLocation::get_Path()
extern "C"  String_t* ConfigurationLocation_get_Path_m2365456525 (ConfigurationLocation_t1895107553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.ConfigurationLocation::OpenConfiguration()
extern "C"  Configuration_t3335372970 * ConfigurationLocation_OpenConfiguration_m2905080700 (ConfigurationLocation_t1895107553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationLocation::SetParentConfiguration(System.Configuration.Configuration)
extern "C"  void ConfigurationLocation_SetParentConfiguration_m4197005207 (ConfigurationLocation_t1895107553 * __this, Configuration_t3335372970 * ___parent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
