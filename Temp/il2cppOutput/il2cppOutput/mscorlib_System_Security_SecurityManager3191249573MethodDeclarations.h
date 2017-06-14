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

// System.Reflection.Assembly
struct Assembly_t4268412390;
// System.Security.IPermission
struct IPermission_t182075948;
// System.Security.PermissionSet
struct PermissionSet_t1941658161;
// System.Security.Policy.Evidence
struct Evidence_t1407710183;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t43919632;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Reflection.MethodBase
struct MethodBase_t904190842;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Assembly4268412390.h"
#include "mscorlib_System_Security_PermissionSet1941658161.h"
#include "mscorlib_System_Security_Policy_Evidence1407710183.h"
#include "mscorlib_System_Security_Policy_PolicyLevel43919632.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Reflection_MethodBase904190842.h"
#include "mscorlib_System_Security_RuntimeDeclSecurityAction4265870207.h"

// System.Void System.Security.SecurityManager::.cctor()
extern "C"  void SecurityManager__cctor_m3929275401 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::get_CheckExecutionRights()
extern "C"  bool SecurityManager_get_CheckExecutionRights_m3149836832 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::get_SecurityEnabled()
extern "C"  bool SecurityManager_get_SecurityEnabled_m51574294 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::IsGranted(System.Reflection.Assembly,System.Security.IPermission)
extern "C"  bool SecurityManager_IsGranted_m2438055908 (Il2CppObject * __this /* static, unused */, Assembly_t4268412390 * ___a0, Il2CppObject * ___perm1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.SecurityManager::CheckPermissionSet(System.Reflection.Assembly,System.Security.PermissionSet,System.Boolean)
extern "C"  Il2CppObject * SecurityManager_CheckPermissionSet_m3892417640 (Il2CppObject * __this /* static, unused */, Assembly_t4268412390 * ___a0, PermissionSet_t1941658161 * ___ps1, bool ___noncas2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::ResolvePolicy(System.Security.Policy.Evidence)
extern "C"  PermissionSet_t1941658161 * SecurityManager_ResolvePolicy_m1347232993 (Il2CppObject * __this /* static, unused */, Evidence_t1407710183 * ___evidence0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::ResolvePolicy(System.Security.Policy.Evidence,System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet&)
extern "C"  PermissionSet_t1941658161 * SecurityManager_ResolvePolicy_m1069076191 (Il2CppObject * __this /* static, unused */, Evidence_t1407710183 * ___evidence0, PermissionSet_t1941658161 * ___reqdPset1, PermissionSet_t1941658161 * ___optPset2, PermissionSet_t1941658161 * ___denyPset3, PermissionSet_t1941658161 ** ___denied4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.SecurityManager::get_Hierarchy()
extern "C"  Il2CppObject * SecurityManager_get_Hierarchy_m2985322036 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityManager::InitializePolicyHierarchy()
extern "C"  void SecurityManager_InitializePolicyHierarchy_m3054073013 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::ResolvePolicyLevel(System.Security.PermissionSet&,System.Security.Policy.PolicyLevel,System.Security.Policy.Evidence)
extern "C"  bool SecurityManager_ResolvePolicyLevel_m3039881993 (Il2CppObject * __this /* static, unused */, PermissionSet_t1941658161 ** ___ps0, PolicyLevel_t43919632 * ___pl1, Evidence_t1407710183 * ___evidence2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityManager::ResolveIdentityPermissions(System.Security.PermissionSet,System.Security.Policy.Evidence)
extern "C"  void SecurityManager_ResolveIdentityPermissions_m1481575524 (Il2CppObject * __this /* static, unused */, PermissionSet_t1941658161 * ___ps0, Evidence_t1407710183 * ___evidence1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyLevel System.Security.SecurityManager::get_ResolvingPolicyLevel()
extern "C"  PolicyLevel_t43919632 * SecurityManager_get_ResolvingPolicyLevel_m158118460 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityManager::set_ResolvingPolicyLevel(System.Security.Policy.PolicyLevel)
extern "C"  void SecurityManager_set_ResolvingPolicyLevel_m18996727 (Il2CppObject * __this /* static, unused */, PolicyLevel_t43919632 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.IntPtr,System.Int32)
extern "C"  PermissionSet_t1941658161 * SecurityManager_Decode_m3784014484 (Il2CppObject * __this /* static, unused */, IntPtr_t ___permissions0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.Byte[])
extern "C"  PermissionSet_t1941658161 * SecurityManager_Decode_m470212436 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___encodedPermissions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::GetLinkDemandSecurity(System.Reflection.MethodBase,System.Security.RuntimeDeclSecurityActions*,System.Security.RuntimeDeclSecurityActions*)
extern "C"  bool SecurityManager_GetLinkDemandSecurity_m467965909 (Il2CppObject * __this /* static, unused */, MethodBase_t904190842 * ___method0, RuntimeDeclSecurityActions_t4265870207 * ___cdecl1, RuntimeDeclSecurityActions_t4265870207 * ___mdecl2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityManager::ReflectedLinkDemandInvoke(System.Reflection.MethodBase)
extern "C"  void SecurityManager_ReflectedLinkDemandInvoke_m2864340559 (Il2CppObject * __this /* static, unused */, MethodBase_t904190842 * ___mb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::ReflectedLinkDemandQuery(System.Reflection.MethodBase)
extern "C"  bool SecurityManager_ReflectedLinkDemandQuery_m2408661465 (Il2CppObject * __this /* static, unused */, MethodBase_t904190842 * ___mb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::LinkDemand(System.Reflection.Assembly,System.Security.RuntimeDeclSecurityActions*,System.Security.RuntimeDeclSecurityActions*)
extern "C"  bool SecurityManager_LinkDemand_m4132789037 (Il2CppObject * __this /* static, unused */, Assembly_t4268412390 * ___a0, RuntimeDeclSecurityActions_t4265870207 * ___klass1, RuntimeDeclSecurityActions_t4265870207 * ___method2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
