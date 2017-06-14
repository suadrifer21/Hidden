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

// System.Configuration.ProtectedConfigurationProviderCollection
struct ProtectedConfigurationProviderCollection_t388338823;
// System.Configuration.ProtectedConfigurationProvider
struct ProtectedConfigurationProvider_t3971982415;
// System.String
struct String_t;
// System.Configuration.Provider.ProviderBase
struct ProviderBase_t2882126354;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "System_Configuration_System_Configuration_Provider2882126354.h"

// System.Void System.Configuration.ProtectedConfigurationProviderCollection::.ctor()
extern "C"  void ProtectedConfigurationProviderCollection__ctor_m2871984156 (ProtectedConfigurationProviderCollection_t388338823 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProtectedConfigurationProvider System.Configuration.ProtectedConfigurationProviderCollection::get_Item(System.String)
extern "C"  ProtectedConfigurationProvider_t3971982415 * ProtectedConfigurationProviderCollection_get_Item_m2881465527 (ProtectedConfigurationProviderCollection_t388338823 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ProtectedConfigurationProviderCollection::Add(System.Configuration.Provider.ProviderBase)
extern "C"  void ProtectedConfigurationProviderCollection_Add_m1943221191 (ProtectedConfigurationProviderCollection_t388338823 * __this, ProviderBase_t2882126354 * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
