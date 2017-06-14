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

// System.String
struct String_t;
// System.Reflection.Assembly
struct Assembly_t4268412390;
// System.Configuration.Configuration
struct Configuration_t3335372970;
// System.Configuration.Internal.IInternalConfigConfigurationFactory
struct IInternalConfigConfigurationFactory_t2261973434;
// System.Configuration.Internal.IInternalConfigSystem
struct IInternalConfigSystem_t344849519;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Assembly4268412390.h"
#include "System_Configuration_System_Configuration_Configur1204907851.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Configuration.ConfigurationManager::.cctor()
extern "C"  void ConfigurationManager__cctor_m145104057 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ConfigurationManager::GetAssemblyInfo(System.Reflection.Assembly)
extern "C"  String_t* ConfigurationManager_GetAssemblyInfo_m1959334153 (Il2CppObject * __this /* static, unused */, Assembly_t4268412390 * ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.ConfigurationManager::OpenExeConfigurationInternal(System.Configuration.ConfigurationUserLevel,System.Reflection.Assembly,System.String)
extern "C"  Configuration_t3335372970 * ConfigurationManager_OpenExeConfigurationInternal_m2337857263 (Il2CppObject * __this /* static, unused */, int32_t ___userLevel0, Assembly_t4268412390 * ___calling_assembly1, String_t* ___exePath2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Internal.IInternalConfigConfigurationFactory System.Configuration.ConfigurationManager::get_ConfigurationFactory()
extern "C"  Il2CppObject * ConfigurationManager_get_ConfigurationFactory_m113132422 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Internal.IInternalConfigSystem System.Configuration.ConfigurationManager::get_ConfigurationSystem()
extern "C"  Il2CppObject * ConfigurationManager_get_ConfigurationSystem_m1820628092 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ConfigurationManager::GetSection(System.String)
extern "C"  Il2CppObject * ConfigurationManager_GetSection_m1187558274 (Il2CppObject * __this /* static, unused */, String_t* ___sectionName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
