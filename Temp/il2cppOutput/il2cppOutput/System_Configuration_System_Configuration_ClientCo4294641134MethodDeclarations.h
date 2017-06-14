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

// System.Configuration.ClientConfigurationSystem
struct ClientConfigurationSystem_t4294641134;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Configuration.Configuration
struct Configuration_t3335372970;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Configuration.ClientConfigurationSystem::.ctor()
extern "C"  void ClientConfigurationSystem__ctor_m2508818941 (ClientConfigurationSystem_t4294641134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.ClientConfigurationSystem::System.Configuration.Internal.IInternalConfigSystem.GetSection(System.String)
extern "C"  Il2CppObject * ClientConfigurationSystem_System_Configuration_Internal_IInternalConfigSystem_GetSection_m2690705608 (ClientConfigurationSystem_t4294641134 * __this, String_t* ___configKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.Configuration System.Configuration.ClientConfigurationSystem::get_Configuration()
extern "C"  Configuration_t3335372970 * ClientConfigurationSystem_get_Configuration_m1415521026 (ClientConfigurationSystem_t4294641134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
