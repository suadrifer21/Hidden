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

// System.Security.PermissionSet
struct PermissionSet_t1941658161;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Security.IPermission
struct IPermission_t182075948;
// System.Array
struct Il2CppArray;
// System.Security.SecurityElement
struct SecurityElement_t2325568386;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Type
struct Type_t;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t43919632;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta3557289502.h"
#include "mscorlib_System_Security_PermissionSet1941658161.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_Security_SecurityElement2325568386.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Security_Policy_PolicyLevel43919632.h"

// System.Void System.Security.PermissionSet::.ctor()
extern "C"  void PermissionSet__ctor_m3440100522 (PermissionSet_t1941658161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void PermissionSet__ctor_m3118504839 (PermissionSet_t1941658161 * __this, int32_t ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::.ctor(System.Security.PermissionSet)
extern "C"  void PermissionSet__ctor_m3936421588 (PermissionSet_t1941658161 * __this, PermissionSet_t1941658161 * ___permSet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::.ctor(System.String)
extern "C"  void PermissionSet__ctor_m4099742268 (PermissionSet_t1941658161 * __this, String_t* ___xml0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::.cctor()
extern "C"  void PermissionSet__cctor_m2055291581 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C"  void PermissionSet_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m1520701956 (PermissionSet_t1941658161 * __this, Il2CppObject * ___sender0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionSet::AddPermission(System.Security.IPermission)
extern "C"  Il2CppObject * PermissionSet_AddPermission_m105089679 (PermissionSet_t1941658161 * __this, Il2CppObject * ___perm0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.PermissionSet::Copy()
extern "C"  PermissionSet_t1941658161 * PermissionSet_Copy_m2800465550 (PermissionSet_t1941658161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::CopyTo(System.Array,System.Int32)
extern "C"  void PermissionSet_CopyTo_m3028011007 (PermissionSet_t1941658161 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::Demand()
extern "C"  void PermissionSet_Demand_m2709283193 (PermissionSet_t1941658161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::FromXml(System.Security.SecurityElement)
extern "C"  void PermissionSet_FromXml_m2882734554 (PermissionSet_t1941658161 * __this, SecurityElement_t2325568386 * ___et0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.PermissionSet::GetEnumerator()
extern "C"  Il2CppObject * PermissionSet_GetEnumerator_m4272244758 (PermissionSet_t1941658161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.PermissionSet::IsSubsetOf(System.Security.PermissionSet)
extern "C"  bool PermissionSet_IsSubsetOf_m535103249 (PermissionSet_t1941658161 * __this, PermissionSet_t1941658161 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionSet::GetPermission(System.Type)
extern "C"  Il2CppObject * PermissionSet_GetPermission_m609165172 (PermissionSet_t1941658161 * __this, Type_t * ___permClass0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.PermissionSet::Intersect(System.Security.PermissionSet)
extern "C"  PermissionSet_t1941658161 * PermissionSet_Intersect_m1732433896 (PermissionSet_t1941658161 * __this, PermissionSet_t1941658161 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::InternalIntersect(System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet,System.Boolean)
extern "C"  void PermissionSet_InternalIntersect_m1940589741 (PermissionSet_t1941658161 * __this, PermissionSet_t1941658161 * ___intersect0, PermissionSet_t1941658161 * ___a1, PermissionSet_t1941658161 * ___b2, bool ___unrestricted3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.PermissionSet::IsEmpty()
extern "C"  bool PermissionSet_IsEmpty_m1041996493 (PermissionSet_t1941658161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.PermissionSet::IsUnrestricted()
extern "C"  bool PermissionSet_IsUnrestricted_m3966666674 (PermissionSet_t1941658161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionSet::RemovePermission(System.Type)
extern "C"  Il2CppObject * PermissionSet_RemovePermission_m3147593206 (PermissionSet_t1941658161 * __this, Type_t * ___permClass0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.PermissionSet::ToString()
extern "C"  String_t* PermissionSet_ToString_m3194075209 (PermissionSet_t1941658161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.PermissionSet::ToXml()
extern "C"  SecurityElement_t2325568386 * PermissionSet_ToXml_m3312410464 (PermissionSet_t1941658161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.PermissionSet::Union(System.Security.PermissionSet)
extern "C"  PermissionSet_t1941658161 * PermissionSet_Union_m2363188946 (PermissionSet_t1941658161 * __this, PermissionSet_t1941658161 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.PermissionSet::get_Count()
extern "C"  int32_t PermissionSet_get_Count_m304938402 (PermissionSet_t1941658161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.PermissionSet::get_IsSynchronized()
extern "C"  bool PermissionSet_get_IsSynchronized_m1237814815 (PermissionSet_t1941658161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.PermissionSet::get_SyncRoot()
extern "C"  Il2CppObject * PermissionSet_get_SyncRoot_m900105327 (PermissionSet_t1941658161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::set_DeclarativeSecurity(System.Boolean)
extern "C"  void PermissionSet_set_DeclarativeSecurity_m3993468766 (PermissionSet_t1941658161 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.PermissionSet::Equals(System.Object)
extern "C"  bool PermissionSet_Equals_m3750769023 (PermissionSet_t1941658161 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.PermissionSet::GetHashCode()
extern "C"  int32_t PermissionSet_GetHashCode_m1962951241 (PermissionSet_t1941658161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyLevel System.Security.PermissionSet::get_Resolver()
extern "C"  PolicyLevel_t43919632 * PermissionSet_get_Resolver_m2271756985 (PermissionSet_t1941658161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::set_Resolver(System.Security.Policy.PolicyLevel)
extern "C"  void PermissionSet_set_Resolver_m3778792926 (PermissionSet_t1941658161 * __this, PolicyLevel_t43919632 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::SetReadOnly(System.Boolean)
extern "C"  void PermissionSet_SetReadOnly_m1151866929 (PermissionSet_t1941658161 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.PermissionSet::CreateFromBinaryFormat(System.Byte[])
extern "C"  PermissionSet_t1941658161 * PermissionSet_CreateFromBinaryFormat_m981771376 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.PermissionSet::ReadEncodedInt(System.Byte[],System.Int32&)
extern "C"  int32_t PermissionSet_ReadEncodedInt_m2425461503 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, int32_t* ___position1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionSet::ProcessAttribute(System.Byte[],System.Int32&)
extern "C"  Il2CppObject * PermissionSet_ProcessAttribute_m140489331 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, int32_t* ___position1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
