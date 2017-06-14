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

// System.Configuration.ConfigurationSectionCollection
struct ConfigurationSectionCollection_t4261113299;
// System.Configuration.Configuration
struct Configuration_t3335372970;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t2346323570;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t633582367;
// System.Configuration.ConfigurationSection
struct ConfigurationSection_t2600766927;
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

// System.Void System.Configuration.ConfigurationSectionCollection::.ctor(System.Configuration.Configuration,System.Configuration.SectionGroupInfo)
extern "C"  void ConfigurationSectionCollection__ctor_m452173858 (ConfigurationSectionCollection_t4261113299 * __this, Configuration_t3335372970 * ___config0, SectionGroupInfo_t2346323570 * ___group1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Configuration.ConfigurationSectionCollection::get_Keys()
extern "C"  KeysCollection_t633582367 * ConfigurationSectionCollection_get_Keys_m1706717625 (ConfigurationSectionCollection_t4261113299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Configuration.ConfigurationSectionCollection::get_Count()
extern "C"  int32_t ConfigurationSectionCollection_get_Count_m3164332684 (ConfigurationSectionCollection_t4261113299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ConfigurationSection System.Configuration.ConfigurationSectionCollection::get_Item(System.String)
extern "C"  ConfigurationSection_t2600766927 * ConfigurationSectionCollection_get_Item_m3421303889 (ConfigurationSectionCollection_t4261113299 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Configuration.ConfigurationSectionCollection::GetEnumerator()
extern "C"  Il2CppObject * ConfigurationSectionCollection_GetEnumerator_m1242675576 (ConfigurationSectionCollection_t4261113299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationSectionCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ConfigurationSectionCollection_GetObjectData_m253846356 (ConfigurationSectionCollection_t4261113299 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
