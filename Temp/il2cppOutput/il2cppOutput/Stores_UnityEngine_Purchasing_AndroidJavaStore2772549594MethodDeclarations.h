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

// UnityEngine.Purchasing.AndroidJavaStore
struct AndroidJavaStore_t2772549594;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t4251328308;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AndroidJavaObject4251328308.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UnityEngine.Purchasing.AndroidJavaStore::.ctor(UnityEngine.AndroidJavaObject)
extern "C"  void AndroidJavaStore__ctor_m2037585869 (AndroidJavaStore_t2772549594 * __this, AndroidJavaObject_t4251328308 * ___store0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AndroidJavaObject UnityEngine.Purchasing.AndroidJavaStore::GetStore()
extern "C"  AndroidJavaObject_t4251328308 * AndroidJavaStore_GetStore_m1414346471 (AndroidJavaStore_t2772549594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AndroidJavaStore::RetrieveProducts(System.String)
extern "C"  void AndroidJavaStore_RetrieveProducts_m1546538144 (AndroidJavaStore_t2772549594 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AndroidJavaStore::Purchase(System.String,System.String)
extern "C"  void AndroidJavaStore_Purchase_m1901468879 (AndroidJavaStore_t2772549594 * __this, String_t* ___productJSON0, String_t* ___developerPayload1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.AndroidJavaStore::FinishTransaction(System.String,System.String)
extern "C"  void AndroidJavaStore_FinishTransaction_m4018781023 (AndroidJavaStore_t2772549594 * __this, String_t* ___productJSON0, String_t* ___transactionID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
