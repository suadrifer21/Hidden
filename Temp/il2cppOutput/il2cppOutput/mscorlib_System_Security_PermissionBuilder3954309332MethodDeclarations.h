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

// System.Security.IPermission
struct IPermission_t182075948;
// System.String
struct String_t;
// System.Security.SecurityElement
struct SecurityElement_t2325568386;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Security_Permissions_PermissionSta3557289502.h"
#include "mscorlib_System_Security_SecurityElement2325568386.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void System.Security.PermissionBuilder::.cctor()
extern "C"  void PermissionBuilder__cctor_m4211719202 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionBuilder::Create(System.String,System.Security.Permissions.PermissionState)
extern "C"  Il2CppObject * PermissionBuilder_Create_m2085370112 (Il2CppObject * __this /* static, unused */, String_t* ___fullname0, int32_t ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionBuilder::Create(System.Security.SecurityElement)
extern "C"  Il2CppObject * PermissionBuilder_Create_m4163673188 (Il2CppObject * __this /* static, unused */, SecurityElement_t2325568386 * ___se0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionBuilder::Create(System.String,System.Security.SecurityElement)
extern "C"  Il2CppObject * PermissionBuilder_Create_m1633853692 (Il2CppObject * __this /* static, unused */, String_t* ___fullname0, SecurityElement_t2325568386 * ___se1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionBuilder::Create(System.Type)
extern "C"  Il2CppObject * PermissionBuilder_Create_m3724973246 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionBuilder::CreatePermission(System.String,System.Security.SecurityElement)
extern "C"  Il2CppObject * PermissionBuilder_CreatePermission_m2550422833 (Il2CppObject * __this /* static, unused */, String_t* ___fullname0, SecurityElement_t2325568386 * ___se1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
