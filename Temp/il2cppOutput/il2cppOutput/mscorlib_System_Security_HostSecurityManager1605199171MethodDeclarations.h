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

// System.Security.HostSecurityManager
struct HostSecurityManager_t1605199171;
// System.Security.Policy.Evidence
struct Evidence_t1407710183;
// System.Reflection.Assembly
struct Assembly_t4268412390;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_HostSecurityManagerOption2988201557.h"
#include "mscorlib_System_Reflection_Assembly4268412390.h"
#include "mscorlib_System_Security_Policy_Evidence1407710183.h"

// System.Void System.Security.HostSecurityManager::.ctor()
extern "C"  void HostSecurityManager__ctor_m3173864036 (HostSecurityManager_t1605199171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.HostSecurityManagerOptions System.Security.HostSecurityManager::get_Flags()
extern "C"  int32_t HostSecurityManager_get_Flags_m245873585 (HostSecurityManager_t1605199171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.Evidence System.Security.HostSecurityManager::ProvideAssemblyEvidence(System.Reflection.Assembly,System.Security.Policy.Evidence)
extern "C"  Evidence_t1407710183 * HostSecurityManager_ProvideAssemblyEvidence_m922894567 (HostSecurityManager_t1605199171 * __this, Assembly_t4268412390 * ___loadedAssembly0, Evidence_t1407710183 * ___inputEvidence1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
