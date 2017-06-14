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

// UnityEngine.Purchasing.IAPButton
struct IAPButton_t3077837360;
// UnityEngine.Purchasing.PurchaseEventArgs
struct PurchaseEventArgs_t547992434;
// UnityEngine.Purchasing.Product
struct Product_t1203687971;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purc2407199463.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purch547992434.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod1203687971.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purc1322959839.h"
#include "Stores_UnityEngine_Purchasing_RestoreTransactionID2487303652.h"

// System.Void UnityEngine.Purchasing.IAPButton::.ctor()
extern "C"  void IAPButton__ctor_m3388164132 (IAPButton_t3077837360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.IAPButton::Start()
extern "C"  void IAPButton_Start_m3426314436 (IAPButton_t3077837360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.IAPButton::OnEnable()
extern "C"  void IAPButton_OnEnable_m935239492 (IAPButton_t3077837360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.IAPButton::OnDisable()
extern "C"  void IAPButton_OnDisable_m1628155281 (IAPButton_t3077837360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.IAPButton::PurchaseProduct()
extern "C"  void IAPButton_PurchaseProduct_m225290346 (IAPButton_t3077837360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.IAPButton::Restore()
extern "C"  void IAPButton_Restore_m2361172162 (IAPButton_t3077837360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.IAPButton::OnTransactionsRestored(System.Boolean)
extern "C"  void IAPButton_OnTransactionsRestored_m3924036197 (IAPButton_t3077837360 * __this, bool ___success0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.PurchaseProcessingResult UnityEngine.Purchasing.IAPButton::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
extern "C"  int32_t IAPButton_ProcessPurchase_m705789944 (IAPButton_t3077837360 * __this, PurchaseEventArgs_t547992434 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.IAPButton::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
extern "C"  void IAPButton_OnPurchaseFailed_m2148672501 (IAPButton_t3077837360 * __this, Product_t1203687971 * ___product0, int32_t ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.IAPButton::UpdateText()
extern "C"  void IAPButton_UpdateText_m1500550460 (IAPButton_t3077837360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.IAPButton::<Restore>m__0(UnityEngine.Purchasing.RestoreTransactionIDState)
extern "C"  void IAPButton_U3CRestoreU3Em__0_m4194234704 (IAPButton_t3077837360 * __this, int32_t ___restoreTransactionIDState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
