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

// System.Configuration.ExeConfigurationHost
struct ExeConfigurationHost_t2778769322;
// System.Configuration.Internal.IInternalConfigRoot
struct IInternalConfigRoot_t3316671250;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Configuration.ExeConfigurationHost::.ctor()
extern "C"  void ExeConfigurationHost__ctor_m2672717525 (ExeConfigurationHost_t2778769322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ExeConfigurationHost::Init(System.Configuration.Internal.IInternalConfigRoot,System.Object[])
extern "C"  void ExeConfigurationHost_Init_m1279008829 (ExeConfigurationHost_t2778769322 * __this, Il2CppObject * ___root0, ObjectU5BU5D_t3614634134* ___hostInitParams1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Configuration.ExeConfigurationHost::GetStreamName(System.String)
extern "C"  String_t* ExeConfigurationHost_GetStreamName_m4070417723 (ExeConfigurationHost_t2778769322 * __this, String_t* ___configPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ExeConfigurationHost::InitForConfiguration(System.String&,System.String&,System.String&,System.Configuration.Internal.IInternalConfigRoot,System.Object[])
extern "C"  void ExeConfigurationHost_InitForConfiguration_m442278400 (ExeConfigurationHost_t2778769322 * __this, String_t** ___locationSubPath0, String_t** ___configPath1, String_t** ___locationConfigPath2, Il2CppObject * ___root3, ObjectU5BU5D_t3614634134* ___hostInitConfigurationParams4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
