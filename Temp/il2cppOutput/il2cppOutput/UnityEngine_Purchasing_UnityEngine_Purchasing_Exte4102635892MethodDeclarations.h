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

// UnityEngine.Purchasing.Extension.AbstractPurchasingModule
struct AbstractPurchasingModule_t4102635892;
// UnityEngine.Purchasing.Extension.IPurchasingBinder
struct IPurchasingBinder_t2054654539;
// System.String
struct String_t;
// UnityEngine.Purchasing.Extension.IStore
struct IStore_t3609486926;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UnityEngine.Purchasing.Extension.AbstractPurchasingModule::.ctor()
extern "C"  void AbstractPurchasingModule__ctor_m3505602562 (AbstractPurchasingModule_t4102635892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.AbstractPurchasingModule::Configure(UnityEngine.Purchasing.Extension.IPurchasingBinder)
extern "C"  void AbstractPurchasingModule_Configure_m561400887 (AbstractPurchasingModule_t4102635892 * __this, Il2CppObject * ___binder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Extension.AbstractPurchasingModule::RegisterStore(System.String,UnityEngine.Purchasing.Extension.IStore)
extern "C"  void AbstractPurchasingModule_RegisterStore_m1593178344 (AbstractPurchasingModule_t4102635892 * __this, String_t* ___name0, Il2CppObject * ___a1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
