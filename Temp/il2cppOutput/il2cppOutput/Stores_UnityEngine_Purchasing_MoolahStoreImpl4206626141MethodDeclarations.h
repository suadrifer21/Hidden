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

// UnityEngine.Purchasing.MoolahStoreImpl
struct MoolahStoreImpl_t4206626141;
// UnityEngine.Purchasing.Extension.IStoreCallback
struct IStoreCallback_t2691517565;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>
struct ReadOnlyCollection_1_t2128260960;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Action`2<System.Boolean,System.String>
struct Action_2_t1865222972;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>
struct List_1_t2687388655;
// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_t1942475268;
// System.Action`3<System.String,System.String,System.String>
struct Action_3_t3256166369;
// System.Action`2<System.String,System.String>
struct Action_2_t4234541925;
// UnityEngine.WWWForm
struct WWWForm_t3950226929;
// System.Action`3<System.String,UnityEngine.Purchasing.PurchaseFailureReason,System.String>
struct Action_3_t4044292979;
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
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod2754455291.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Init2954032642.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod1942475268.h"
#include "UnityEngine_UnityEngine_WWWForm3950226929.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purc1322959839.h"
#include "Stores_UnityEngine_Purchasing_CloudMoolahMode206291964.h"

// System.Void UnityEngine.Purchasing.MoolahStoreImpl::.ctor()
extern "C"  void MoolahStoreImpl__ctor_m3276971399 (MoolahStoreImpl_t4206626141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::Initialize(UnityEngine.Purchasing.Extension.IStoreCallback)
extern "C"  void MoolahStoreImpl_Initialize_m1203100780 (MoolahStoreImpl_t4206626141 * __this, Il2CppObject * ___m_callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
extern "C"  void MoolahStoreImpl_RetrieveProducts_m2316377667 (MoolahStoreImpl_t4206626141 * __this, ReadOnlyCollection_1_t2128260960 * ___productDefinitions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Purchasing.MoolahStoreImpl::getProductTypeIndex(UnityEngine.Purchasing.ProductType)
extern "C"  int32_t MoolahStoreImpl_getProductTypeIndex_m3234378012 (MoolahStoreImpl_t4206626141 * __this, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::VaildateProductProcess(System.Boolean,System.String)
extern "C"  void MoolahStoreImpl_VaildateProductProcess_m4038242844 (MoolahStoreImpl_t4206626141 * __this, bool ___state0, String_t* ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.MoolahStoreImpl::GetCurrentString(System.Object)
extern "C"  String_t* MoolahStoreImpl_GetCurrentString_m2150713696 (MoolahStoreImpl_t4206626141 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Purchasing.MoolahStoreImpl::VaildateProduct(System.String,System.String,System.Action`2<System.Boolean,System.String>)
extern "C"  Il2CppObject * MoolahStoreImpl_VaildateProduct_m2407891830 (MoolahStoreImpl_t4206626141 * __this, String_t* ___appkey0, String_t* ___productInfo1, Action_2_t1865222972 * ___result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::RetrieveProductsSucceeded(System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>)
extern "C"  void MoolahStoreImpl_RetrieveProductsSucceeded_m229749569 (MoolahStoreImpl_t4206626141 * __this, List_1_t2687388655 * ___products0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::RetrieveProductsFailed(UnityEngine.Purchasing.InitializationFailureReason)
extern "C"  void MoolahStoreImpl_RetrieveProductsFailed_m3189581201 (MoolahStoreImpl_t4206626141 * __this, int32_t ___reason0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::ClosePayWebView(System.String)
extern "C"  void MoolahStoreImpl_ClosePayWebView_m2851857714 (MoolahStoreImpl_t4206626141 * __this, String_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::PurchaseRusult(System.String)
extern "C"  void MoolahStoreImpl_PurchaseRusult_m2363779555 (MoolahStoreImpl_t4206626141 * __this, String_t* ___resultJson0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::Purchase(UnityEngine.Purchasing.ProductDefinition,System.String)
extern "C"  void MoolahStoreImpl_Purchase_m3152734947 (MoolahStoreImpl_t4206626141 * __this, ProductDefinition_t1942475268 * ___product0, String_t* ___developerPayload1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::RequestAuthCode(System.String,System.String,System.Action`3<System.String,System.String,System.String>,System.Action`2<System.String,System.String>)
extern "C"  void MoolahStoreImpl_RequestAuthCode_m204622236 (MoolahStoreImpl_t4206626141 * __this, String_t* ___productID0, String_t* ___payload1, Action_3_t3256166369 * ___succeed2, Action_2_t4234541925 * ___failed3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Purchasing.MoolahStoreImpl::RequestAuthCode(UnityEngine.WWWForm,System.String,System.String,System.Action`3<System.String,System.String,System.String>,System.Action`2<System.String,System.String>)
extern "C"  Il2CppObject * MoolahStoreImpl_RequestAuthCode_m3769834260 (MoolahStoreImpl_t4206626141 * __this, WWWForm_t3950226929 * ___wf0, String_t* ___productID1, String_t* ___transactionId2, Action_3_t3256166369 * ___succeed3, Action_2_t4234541925 * ___failed4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Purchasing.MoolahStoreImpl::StartPurchasePolling(System.String,System.String,System.Action`3<System.String,System.String,System.String>,System.Action`3<System.String,UnityEngine.Purchasing.PurchaseFailureReason,System.String>)
extern "C"  Il2CppObject * MoolahStoreImpl_StartPurchasePolling_m105039615 (MoolahStoreImpl_t4206626141 * __this, String_t* ___authGlobal0, String_t* ___transactionId1, Action_3_t3256166369 * ___purchaseSucceed2, Action_3_t4044292979 * ___purchaseFailed3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::PurchaseSucceed(System.String,System.String,System.String)
extern "C"  void MoolahStoreImpl_PurchaseSucceed_m2779188262 (MoolahStoreImpl_t4206626141 * __this, String_t* ___storeSpecificId0, String_t* ___receipt1, String_t* ___transactionId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::PurchaseFailed(System.String,UnityEngine.Purchasing.PurchaseFailureReason,System.String)
extern "C"  void MoolahStoreImpl_PurchaseFailed_m3351521511 (MoolahStoreImpl_t4206626141 * __this, String_t* ___storeSpecificId0, int32_t ___reason1, String_t* ___msg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
extern "C"  void MoolahStoreImpl_FinishTransaction_m3943652471 (MoolahStoreImpl_t4206626141 * __this, ProductDefinition_t1942475268 * ___product0, String_t* ___transactionId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.MoolahStoreImpl::GetStringMD5(System.String)
extern "C"  String_t* MoolahStoreImpl_GetStringMD5_m409701935 (MoolahStoreImpl_t4206626141 * __this, String_t* ___md5String0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.MoolahStoreImpl::GetStoreSpecificId(System.String)
extern "C"  String_t* MoolahStoreImpl_GetStoreSpecificId_m656551682 (MoolahStoreImpl_t4206626141 * __this, String_t* ___MD5productID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.MoolahStoreImpl::get_appKey()
extern "C"  String_t* MoolahStoreImpl_get_appKey_m2642618573 (MoolahStoreImpl_t4206626141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::set_appKey(System.String)
extern "C"  void MoolahStoreImpl_set_appKey_m1312584128 (MoolahStoreImpl_t4206626141 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.MoolahStoreImpl::get_hashKey()
extern "C"  String_t* MoolahStoreImpl_get_hashKey_m3245691010 (MoolahStoreImpl_t4206626141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::set_hashKey(System.String)
extern "C"  void MoolahStoreImpl_set_hashKey_m4233238009 (MoolahStoreImpl_t4206626141 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::SetMode(UnityEngine.Purchasing.CloudMoolahMode)
extern "C"  void MoolahStoreImpl_SetMode_m871747351 (MoolahStoreImpl_t4206626141 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.CloudMoolahMode UnityEngine.Purchasing.MoolahStoreImpl::GetMode()
extern "C"  int32_t MoolahStoreImpl_GetMode_m142105822 (MoolahStoreImpl_t4206626141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.MoolahStoreImpl::IsTestMode()
extern "C"  bool MoolahStoreImpl_IsTestMode_m814262472 (MoolahStoreImpl_t4206626141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::Login(System.String,System.String,System.Action`2<UnityEngine.Purchasing.LoginResultState,System.String>)
extern "C"  void MoolahStoreImpl_Login_m2738348253 (MoolahStoreImpl_t4206626141 * __this, String_t* ___CMUserName0, String_t* ___CMPassword1, Action_2_t2420917363 * ___LoginResult2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::LoginProcess(System.String,System.Action`2<UnityEngine.Purchasing.LoginResultState,System.String>)
extern "C"  void MoolahStoreImpl_LoginProcess_m452206786 (MoolahStoreImpl_t4206626141 * __this, String_t* ___result0, Action_2_t2420917363 * ___LoginResult1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::FastRegister(System.String,System.Action`1<System.String>,System.Action`2<UnityEngine.Purchasing.FastRegisterError,System.String>)
extern "C"  void MoolahStoreImpl_FastRegister_m2234311701 (MoolahStoreImpl_t4206626141 * __this, String_t* ___CMpassword0, Action_1_t1831019615 * ___RegisterSucceed1, Action_2_t2383075575 * ___RegisterFailed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::RegisterProcess(System.String,System.Action`1<System.String>,System.Action`2<UnityEngine.Purchasing.FastRegisterError,System.String>)
extern "C"  void MoolahStoreImpl_RegisterProcess_m3395543586 (MoolahStoreImpl_t4206626141 * __this, String_t* ___result0, Action_1_t1831019615 * ___RegisterSucceed1, Action_2_t2383075575 * ___RegisterFailed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::RestoreTransactionID(System.Action`1<UnityEngine.Purchasing.RestoreTransactionIDState>)
extern "C"  void MoolahStoreImpl_RestoreTransactionID_m1425291965 (MoolahStoreImpl_t4206626141 * __this, Action_1_t2289103034 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Purchasing.MoolahStoreImpl::RestoreTransactionIDProcess(System.Action`1<UnityEngine.Purchasing.RestoreTransactionIDState>)
extern "C"  Il2CppObject * MoolahStoreImpl_RestoreTransactionIDProcess_m2414573530 (MoolahStoreImpl_t4206626141 * __this, Action_1_t2289103034 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::ValidateReceipt(System.String,System.String,System.Action`3<System.String,UnityEngine.Purchasing.ValidateReceiptState,System.String>)
extern "C"  void MoolahStoreImpl_ValidateReceipt_m3902265371 (MoolahStoreImpl_t4206626141 * __this, String_t* ___transactionId0, String_t* ___receipt1, Action_3_t681716397 * ___result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Purchasing.MoolahStoreImpl::ValidateReceiptProcess(System.String,System.String,System.Action`3<System.String,UnityEngine.Purchasing.ValidateReceiptState,System.String>)
extern "C"  Il2CppObject * MoolahStoreImpl_ValidateReceiptProcess_m2325471906 (MoolahStoreImpl_t4206626141 * __this, String_t* ___transactionId0, String_t* ___receipt1, Action_3_t681716397 * ___result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::RequestPayOut(System.String,System.Action`3<System.String,UnityEngine.Purchasing.RequestPayOutState,System.String>)
extern "C"  void MoolahStoreImpl_RequestPayOut_m3105566101 (MoolahStoreImpl_t4206626141 * __this, String_t* ___transactionId0, Action_3_t3793203716 * ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Purchasing.MoolahStoreImpl::PayOutProcess(System.String,System.Action`3<System.String,UnityEngine.Purchasing.RequestPayOutState,System.String>)
extern "C"  Il2CppObject * MoolahStoreImpl_PayOutProcess_m3980236505 (MoolahStoreImpl_t4206626141 * __this, String_t* ___transactionId0, Action_3_t3793203716 * ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::RemoveAuthCode(System.String)
extern "C"  void MoolahStoreImpl_RemoveAuthCode_m2890508232 (MoolahStoreImpl_t4206626141 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::AddAuthCode(System.String,System.String)
extern "C"  void MoolahStoreImpl_AddAuthCode_m135651303 (MoolahStoreImpl_t4206626141 * __this, String_t* ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.MoolahStoreImpl::GetAuthCode(System.String)
extern "C"  String_t* MoolahStoreImpl_GetAuthCode_m2491239859 (MoolahStoreImpl_t4206626141 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::ClearAuthCode()
extern "C"  void MoolahStoreImpl_ClearAuthCode_m431920787 (MoolahStoreImpl_t4206626141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::.cctor()
extern "C"  void MoolahStoreImpl__cctor_m3449510588 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::<RetrieveProducts>m__0(System.Boolean,System.String)
extern "C"  void MoolahStoreImpl_U3CRetrieveProductsU3Em__0_m2488868947 (MoolahStoreImpl_t4206626141 * __this, bool ___state0, String_t* ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::<FastRegister>m__1(System.Object,System.Boolean)
extern "C"  void MoolahStoreImpl_U3CFastRegisterU3Em__1_m1531406641 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___state0, bool ___timeOut1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
