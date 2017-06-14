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

// System.Configuration.ConfigurationSectionGroupCollection
struct ConfigurationSectionGroupCollection_t575145286;
// System.Configuration.Configuration
struct Configuration_t3335372970;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t2346323570;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t633582367;
// System.Configuration.ConfigurationSectionGroup
struct ConfigurationSectionGroup_t2230982736;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configur3335372970.h"
#include "System_Configuration_System_Configuration_SectionG2346323570.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"

// System.Void System.Configuration.ConfigurationSectionGroupCollection::.ctor(System.Configuration.Configuration,System.Configuration.SectionGroupInfo)
extern "C"  void ConfigurationSectionGroupCollection__ctor_m2237904677 (ConfigurationSectionGroupCollection_t575145286 * __this, Configuration_t3335372970 * ___config0, SectionGroupInfo_t2346323570 * ___group1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Configuration.ConfigurationSectionGroupCollection::get_Keys()
extern "C"  KeysCollection_t633582367 * ConfigurationSectionGroupCollection_get_Keys_m3664428060 (ConfigurationSectionGroupCollection_t575145286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationSectionGroupCollection::get_Count()
extern "C"  int32_t ConfigurationSectionGroupCollection_get_Count_m447488593 (ConfigurationSectionGroupCollection_t575145286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSectionGroup System.Configuration.ConfigurationSectionGroupCollection::get_Item(System.String)
extern "C"  ConfigurationSectionGroup_t2230982736 * ConfigurationSectionGroupCollection_get_Item_m4125903849 (ConfigurationSectionGroupCollection_t575145286 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.ConfigurationSectionGroupCollection::GetEnumerator()
extern "C"  Il2CppObject * ConfigurationSectionGroupCollection_GetEnumerator_m2684317377 (ConfigurationSectionGroupCollection_t575145286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSectionGroupCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ConfigurationSectionGroupCollection_GetObjectData_m378227929 (ConfigurationSectionGroupCollection_t575145286 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
