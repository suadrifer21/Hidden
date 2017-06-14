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

// IAPDemo
struct IAPDemo_t823941185;
// UnityEngine.Purchasing.IStoreController
struct IStoreController_t92554892;
// UnityEngine.Purchasing.IExtensionProvider
struct IExtensionProvider_t2460996543;
// UnityEngine.Purchasing.PurchaseEventArgs
struct PurchaseEventArgs_t547992434;
// UnityEngine.Purchasing.Product
struct Product_t1203687971;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Product>
struct IEnumerable_1_t1495815016;
// System.String
struct String_t;
// UnityEngine.UI.Dropdown
struct Dropdown_t1985816271;
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purc2407199463.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purch547992434.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod1203687971.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purc1322959839.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Init2954032642.h"
#include "Stores_UnityEngine_Purchasing_LoginResultState2459016979.h"
#include "mscorlib_System_String2029220233.h"
#include "Stores_UnityEngine_Purchasing_FastRegisterError341731807.h"
#include "Stores_UnityEngine_Purchasing_RestoreTransactionID2487303652.h"
#include "Stores_UnityEngine_Purchasing_ValidateReceiptState4359597.h"

// System.Void IAPDemo::.ctor()
extern "C"  void IAPDemo__ctor_m3267573714 (IAPDemo_t823941185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::OnInitialized(UnityEngine.Purchasing.IStoreController,UnityEngine.Purchasing.IExtensionProvider)
extern "C"  void IAPDemo_OnInitialized_m2628601748 (IAPDemo_t823941185 * __this, Il2CppObject * ___controller0, Il2CppObject * ___extensions1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.PurchaseProcessingResult IAPDemo::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
extern "C"  int32_t IAPDemo_ProcessPurchase_m3949646312 (IAPDemo_t823941185 * __this, PurchaseEventArgs_t547992434 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
extern "C"  void IAPDemo_OnPurchaseFailed_m2053066303 (IAPDemo_t823941185 * __this, Product_t1203687971 * ___item0, int32_t ___r1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::OnInitializeFailed(UnityEngine.Purchasing.InitializationFailureReason)
extern "C"  void IAPDemo_OnInitializeFailed_m1037377075 (IAPDemo_t823941185 * __this, int32_t ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::Awake()
extern "C"  void IAPDemo_Awake_m1872671099 (IAPDemo_t823941185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::OnTransactionsRestored(System.Boolean)
extern "C"  void IAPDemo_OnTransactionsRestored_m2633548551 (IAPDemo_t823941185 * __this, bool ___success0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::OnDeferred(UnityEngine.Purchasing.Product)
extern "C"  void IAPDemo_OnDeferred_m801123048 (IAPDemo_t823941185 * __this, Product_t1203687971 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::InitUI(System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Product>)
extern "C"  void IAPDemo_InitUI_m3350388155 (IAPDemo_t823941185 * __this, Il2CppObject* ___items0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::LoginResult(UnityEngine.Purchasing.LoginResultState,System.String)
extern "C"  void IAPDemo_LoginResult_m3307439430 (IAPDemo_t823941185 * __this, int32_t ___state0, String_t* ___errorMsg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::RegisterSucceeded(System.String)
extern "C"  void IAPDemo_RegisterSucceeded_m3917157810 (IAPDemo_t823941185 * __this, String_t* ___cmUserName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::RegisterFailed(UnityEngine.Purchasing.FastRegisterError,System.String)
extern "C"  void IAPDemo_RegisterFailed_m391306130 (IAPDemo_t823941185 * __this, int32_t ___error0, String_t* ___errorMessage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::UpdateHistoryUI()
extern "C"  void IAPDemo_UpdateHistoryUI_m2607563357 (IAPDemo_t823941185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::UpdateInteractable()
extern "C"  void IAPDemo_UpdateInteractable_m2228859499 (IAPDemo_t823941185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::Update()
extern "C"  void IAPDemo_Update_m412123535 (IAPDemo_t823941185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Dropdown IAPDemo::GetDropdown()
extern "C"  Dropdown_t1985816271 * IAPDemo_GetDropdown_m1658389538 (IAPDemo_t823941185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button IAPDemo::GetBuyButton()
extern "C"  Button_t2872111280 * IAPDemo_GetBuyButton_m514831370 (IAPDemo_t823941185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button IAPDemo::GetRestoreButton()
extern "C"  Button_t2872111280 * IAPDemo_GetRestoreButton_m3830435552 (IAPDemo_t823941185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button IAPDemo::GetRegisterButton()
extern "C"  Button_t2872111280 * IAPDemo_GetRegisterButton_m1221450815 (IAPDemo_t823941185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button IAPDemo::GetLoginButton()
extern "C"  Button_t2872111280 * IAPDemo_GetLoginButton_m4237916829 (IAPDemo_t823941185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button IAPDemo::GetValidateButton()
extern "C"  Button_t2872111280 * IAPDemo_GetValidateButton_m3687892462 (IAPDemo_t823941185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button IAPDemo::GetButton(System.String)
extern "C"  Button_t2872111280 * IAPDemo_GetButton_m892847222 (IAPDemo_t823941185 * __this, String_t* ___buttonName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Text IAPDemo::GetText(System.Boolean)
extern "C"  Text_t356221433 * IAPDemo_GetText_m3382056873 (IAPDemo_t823941185 * __this, bool ___right0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::LogProductDefinitions()
extern "C"  void IAPDemo_LogProductDefinitions_m1239761007 (IAPDemo_t823941185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::<InitUI>m__0(System.Int32)
extern "C"  void IAPDemo_U3CInitUIU3Em__0_m3848246332 (IAPDemo_t823941185 * __this, int32_t ___selectedItem0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::<InitUI>m__1()
extern "C"  void IAPDemo_U3CInitUIU3Em__1_m905417126 (IAPDemo_t823941185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::<InitUI>m__2()
extern "C"  void IAPDemo_U3CInitUIU3Em__2_m905417093 (IAPDemo_t823941185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::<InitUI>m__3()
extern "C"  void IAPDemo_U3CInitUIU3Em__3_m905417060 (IAPDemo_t823941185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::<InitUI>m__4()
extern "C"  void IAPDemo_U3CInitUIU3Em__4_m905417027 (IAPDemo_t823941185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::<InitUI>m__5()
extern "C"  void IAPDemo_U3CInitUIU3Em__5_m905416994 (IAPDemo_t823941185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::<InitUI>m__6(UnityEngine.Purchasing.RestoreTransactionIDState)
extern "C"  void IAPDemo_U3CInitUIU3Em__6_m494375636 (IAPDemo_t823941185 * __this, int32_t ___restoreTransactionIDState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::<InitUI>m__7(System.String,UnityEngine.Purchasing.ValidateReceiptState,System.String)
extern "C"  void IAPDemo_U3CInitUIU3Em__7_m3126507202 (Il2CppObject * __this /* static, unused */, String_t* ___transactionID0, int32_t ___state1, String_t* ___message2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
