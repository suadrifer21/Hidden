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

// System.Security.Permissions.FileIOPermission
struct FileIOPermission_t3702443043;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Security.IPermission
struct IPermission_t182075948;
// System.Security.SecurityElement
struct SecurityElement_t2325568386;
// System.Object
struct Il2CppObject;
// System.Collections.IList
struct IList_t3321498491;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionSta3557289502.h"
#include "mscorlib_System_Security_Permissions_FileIOPermiss1079931101.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Security_SecurityElement2325568386.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Security.Permissions.FileIOPermission::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void FileIOPermission__ctor_m3996156195 (FileIOPermission_t3702443043 * __this, int32_t ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::.ctor(System.Security.Permissions.FileIOPermissionAccess,System.String)
extern "C"  void FileIOPermission__ctor_m3433048118 (FileIOPermission_t3702443043 * __this, int32_t ___access0, String_t* ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::.cctor()
extern "C"  void FileIOPermission__cctor_m3187115541 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::CreateLists()
extern "C"  void FileIOPermission_CreateLists_m1880106379 (FileIOPermission_t3702443043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.FileIOPermissionAccess System.Security.Permissions.FileIOPermission::get_AllFiles()
extern "C"  int32_t FileIOPermission_get_AllFiles_m3493432258 (FileIOPermission_t3702443043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::set_AllFiles(System.Security.Permissions.FileIOPermissionAccess)
extern "C"  void FileIOPermission_set_AllFiles_m3339095873 (FileIOPermission_t3702443043 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.FileIOPermissionAccess System.Security.Permissions.FileIOPermission::get_AllLocalFiles()
extern "C"  int32_t FileIOPermission_get_AllLocalFiles_m202392739 (FileIOPermission_t3702443043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::set_AllLocalFiles(System.Security.Permissions.FileIOPermissionAccess)
extern "C"  void FileIOPermission_set_AllLocalFiles_m858575532 (FileIOPermission_t3702443043 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::AddPathList(System.Security.Permissions.FileIOPermissionAccess,System.String)
extern "C"  void FileIOPermission_AddPathList_m91339654 (FileIOPermission_t3702443043 * __this, int32_t ___access0, String_t* ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::AddPathList(System.Security.Permissions.FileIOPermissionAccess,System.String[])
extern "C"  void FileIOPermission_AddPathList_m243885994 (FileIOPermission_t3702443043 * __this, int32_t ___access0, StringU5BU5D_t1642385972* ___pathList1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::AddPathInternal(System.Security.Permissions.FileIOPermissionAccess,System.String)
extern "C"  void FileIOPermission_AddPathInternal_m4062248273 (FileIOPermission_t3702443043 * __this, int32_t ___access0, String_t* ___path1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.FileIOPermission::Copy()
extern "C"  Il2CppObject * FileIOPermission_Copy_m702826169 (FileIOPermission_t3702443043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::FromXml(System.Security.SecurityElement)
extern "C"  void FileIOPermission_FromXml_m1059098116 (FileIOPermission_t3702443043 * __this, SecurityElement_t2325568386 * ___esd0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Security.Permissions.FileIOPermission::GetPathList(System.Security.Permissions.FileIOPermissionAccess)
extern "C"  StringU5BU5D_t1642385972* FileIOPermission_GetPathList_m1433869230 (FileIOPermission_t3702443043 * __this, int32_t ___access0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.FileIOPermission::Intersect(System.Security.IPermission)
extern "C"  Il2CppObject * FileIOPermission_Intersect_m2932605400 (FileIOPermission_t3702443043 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.FileIOPermission::IsSubsetOf(System.Security.IPermission)
extern "C"  bool FileIOPermission_IsSubsetOf_m1182877398 (FileIOPermission_t3702443043 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.FileIOPermission::IsUnrestricted()
extern "C"  bool FileIOPermission_IsUnrestricted_m1763197220 (FileIOPermission_t3702443043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.Permissions.FileIOPermission::ToXml()
extern "C"  SecurityElement_t2325568386 * FileIOPermission_ToXml_m4019197510 (FileIOPermission_t3702443043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.Permissions.FileIOPermission::Union(System.Security.IPermission)
extern "C"  Il2CppObject * FileIOPermission_Union_m1369920862 (FileIOPermission_t3702443043 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.FileIOPermission::Equals(System.Object)
extern "C"  bool FileIOPermission_Equals_m279904699 (FileIOPermission_t3702443043 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Permissions.FileIOPermission::GetHashCode()
extern "C"  int32_t FileIOPermission_GetHashCode_m540449549 (FileIOPermission_t3702443043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.FileIOPermission::IsEmpty()
extern "C"  bool FileIOPermission_IsEmpty_m2754099181 (FileIOPermission_t3702443043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.FileIOPermission System.Security.Permissions.FileIOPermission::Cast(System.Security.IPermission)
extern "C"  FileIOPermission_t3702443043 * FileIOPermission_Cast_m1500453319 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::ThrowInvalidFlag(System.Security.Permissions.FileIOPermissionAccess,System.Boolean)
extern "C"  void FileIOPermission_ThrowInvalidFlag_m3641784676 (Il2CppObject * __this /* static, unused */, int32_t ___access0, bool ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::ThrowIfInvalidPath(System.String)
extern "C"  void FileIOPermission_ThrowIfInvalidPath_m3274737461 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::ThrowIfInvalidPath(System.String[])
extern "C"  void FileIOPermission_ThrowIfInvalidPath_m2957918743 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t1642385972* ___paths0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Permissions.FileIOPermission::KeyIsSubsetOf(System.Collections.IList,System.Collections.IList)
extern "C"  bool FileIOPermission_KeyIsSubsetOf_m4105800236 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___local0, Il2CppObject * ___target1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::UnionKeys(System.Collections.IList,System.String[])
extern "C"  void FileIOPermission_UnionKeys_m2565783690 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___list0, StringU5BU5D_t1642385972* ___paths1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Permissions.FileIOPermission::IntersectKeys(System.Collections.IList,System.Collections.IList,System.Collections.IList)
extern "C"  void FileIOPermission_IntersectKeys_m2098290822 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___local0, Il2CppObject * ___target1, Il2CppObject * ___result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
