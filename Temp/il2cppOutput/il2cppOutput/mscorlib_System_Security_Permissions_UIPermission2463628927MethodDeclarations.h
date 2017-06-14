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

// System.Security.Permissions.UIPermission
struct UIPermission_t2463628927;
// System.Security.IPermission
struct IPermission_t182075948;
// System.Security.SecurityElement
struct SecurityElement_t2325568386;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta3557289502.h"
#include "mscorlib_System_Security_Permissions_UIPermissionW3535816307.h"
#include "mscorlib_System_Security_Permissions_UIPermissionC1473065281.h"
#include "mscorlib_System_Security_SecurityElement2325568386.h"

// System.Void System.Security.Permissions.UIPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void UIPermission__ctor_m1145269367 (UIPermission_t2463628927 * __this, int32_t ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.UIPermission::.ctor(System.Security.Permissions.UIPermissionWindow,System.Security.Permissions.UIPermissionClipboard)
extern "C"  void UIPermission__ctor_m352514230 (UIPermission_t2463628927 * __this, int32_t ___windowFlag0, int32_t ___clipboardFlag1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.UIPermission::set_Clipboard(System.Security.Permissions.UIPermissionClipboard)
extern "C"  void UIPermission_set_Clipboard_m2145644125 (UIPermission_t2463628927 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.UIPermission::set_Window(System.Security.Permissions.UIPermissionWindow)
extern "C"  void UIPermission_set_Window_m2559394185 (UIPermission_t2463628927 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.UIPermission::Copy()
extern "C"  Il2CppObject * UIPermission_Copy_m2442521401 (UIPermission_t2463628927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.UIPermission::FromXml(System.Security.SecurityElement)
extern "C"  void UIPermission_FromXml_m2184924528 (UIPermission_t2463628927 * __this, SecurityElement_t2325568386 * ___esd0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.UIPermission::Intersect(System.Security.IPermission)
extern "C"  Il2CppObject * UIPermission_Intersect_m3238947456 (UIPermission_t2463628927 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.UIPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool UIPermission_IsSubsetOf_m3947235314 (UIPermission_t2463628927 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.UIPermission::IsUnrestricted()
extern "C"  bool UIPermission_IsUnrestricted_m3807039400 (UIPermission_t2463628927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.UIPermission::ToXml()
extern "C"  SecurityElement_t2325568386 * UIPermission_ToXml_m3922126390 (UIPermission_t2463628927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.UIPermission::Union(System.Security.IPermission)
extern "C"  Il2CppObject * UIPermission_Union_m2336788842 (UIPermission_t2463628927 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.UIPermission::IsEmpty(System.Security.Permissions.UIPermissionWindow,System.Security.Permissions.UIPermissionClipboard)
extern "C"  bool UIPermission_IsEmpty_m822735005 (UIPermission_t2463628927 * __this, int32_t ___w0, int32_t ___c1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.UIPermission System.Security.Permissions.UIPermission::Cast(System.Security.IPermission)
extern "C"  UIPermission_t2463628927 * UIPermission_Cast_m3255181351 (UIPermission_t2463628927 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
