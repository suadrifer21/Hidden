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

// System.Configuration.ProtectedConfigurationProviderCollection
struct ProtectedConfigurationProviderCollection_t388338823;
// System.Configuration.ProtectedConfigurationSection
struct ProtectedConfigurationSection_t3541826375;
// System.Configuration.ProtectedConfigurationProvider
struct ProtectedConfigurationProvider_t3971982415;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Configuration.ProtectedConfigurationProviderCollection System.Configuration.ProtectedConfiguration::get_Providers()
extern "C"  ProtectedConfigurationProviderCollection_t388338823 * ProtectedConfiguration_get_Providers_m2677655615 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProtectedConfigurationSection System.Configuration.ProtectedConfiguration::get_Section()
extern "C"  ProtectedConfigurationSection_t3541826375 * ProtectedConfiguration_get_Section_m2417461286 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProtectedConfigurationProvider System.Configuration.ProtectedConfiguration::GetProvider(System.String,System.Boolean)
extern "C"  ProtectedConfigurationProvider_t3971982415 * ProtectedConfiguration_GetProvider_m659380218 (Il2CppObject * __this /* static, unused */, String_t* ___name0, bool ___throwOnError1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
