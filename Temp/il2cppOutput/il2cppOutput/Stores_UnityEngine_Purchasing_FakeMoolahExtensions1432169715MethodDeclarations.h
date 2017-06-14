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

// UnityEngine.Purchasing.FakeMoolahExtensions
struct FakeMoolahExtensions_t1432169715;
// System.String
struct String_t;
// System.Action`2<UnityEngine.Purchasing.LoginResultState,System.String>
struct Action_2_t2420917363;
// System.Action`1<System.String>
struct Action_1_t1831019615;
// System.Action`2<UnityEngine.Purchasing.FastRegisterError,System.String>
struct Action_2_t2383075575;
// System.Action`1<UnityEngine.Purchasing.RestoreTransactionIDState>
struct Action_1_t2289103034;
// System.Action`3<System.String,UnityEngine.Purchasing.ValidateReceiptState,System.String>
struct Action_3_t681716397;
// System.Action`3<System.String,UnityEngine.Purchasing.RequestPayOutState,System.String>
struct Action_3_t3793203716;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UnityEngine.Purchasing.FakeMoolahExtensions::.ctor()
extern "C"  void FakeMoolahExtensions__ctor_m813897259 (FakeMoolahExtensions_t1432169715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.FakeMoolahExtensions::Login(System.String,System.String,System.Action`2<UnityEngine.Purchasing.LoginResultState,System.String>)
extern "C"  void FakeMoolahExtensions_Login_m1031657301 (FakeMoolahExtensions_t1432169715 * __this, String_t* ___CMUserName0, String_t* ___CMPassword1, Action_2_t2420917363 * ___LoginResult2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.FakeMoolahExtensions::FastRegister(System.String,System.Action`1<System.String>,System.Action`2<UnityEngine.Purchasing.FastRegisterError,System.String>)
extern "C"  void FakeMoolahExtensions_FastRegister_m2731945605 (FakeMoolahExtensions_t1432169715 * __this, String_t* ___CMPassword0, Action_1_t1831019615 * ___RegisterSucceed1, Action_2_t2383075575 * ___registerFailed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.FakeMoolahExtensions::RestoreTransactionID(System.Action`1<UnityEngine.Purchasing.RestoreTransactionIDState>)
extern "C"  void FakeMoolahExtensions_RestoreTransactionID_m3634146525 (FakeMoolahExtensions_t1432169715 * __this, Action_1_t2289103034 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.FakeMoolahExtensions::ValidateReceipt(System.String,System.String,System.Action`3<System.String,UnityEngine.Purchasing.ValidateReceiptState,System.String>)
extern "C"  void FakeMoolahExtensions_ValidateReceipt_m895790407 (FakeMoolahExtensions_t1432169715 * __this, String_t* ___transactionId0, String_t* ___receipt1, Action_3_t681716397 * ___result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.FakeMoolahExtensions::RequestPayOut(System.String,System.Action`3<System.String,UnityEngine.Purchasing.RequestPayOutState,System.String>)
extern "C"  void FakeMoolahExtensions_RequestPayOut_m3014039165 (FakeMoolahExtensions_t1432169715 * __this, String_t* ___transactionId0, Action_3_t3793203716 * ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
