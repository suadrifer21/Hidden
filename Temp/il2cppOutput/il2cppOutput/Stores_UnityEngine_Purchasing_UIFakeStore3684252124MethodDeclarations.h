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

// UnityEngine.Purchasing.UIFakeStore
struct UIFakeStore_t3684252124;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Action`2<System.Boolean,System.Int32>
struct Action_2_t1907880187;
// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_t1942475268;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>
struct ReadOnlyCollection_1_t2128260960;
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Dropdown
struct Dropdown_t1985816271;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod1942475268.h"

// System.Void UnityEngine.Purchasing.UIFakeStore::.ctor()
extern "C"  void UIFakeStore__ctor_m4281629614 (UIFakeStore_t3684252124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.UIFakeStore::StartUI(System.String,System.String,System.String,System.Collections.Generic.List`1<System.String>,System.Action`2<System.Boolean,System.Int32>)
extern "C"  bool UIFakeStore_StartUI_m2569939907 (UIFakeStore_t3684252124 * __this, String_t* ___queryText0, String_t* ___okayButtonText1, String_t* ___cancelButtonText2, List_1_t1398341365 * ___options3, Action_2_t1907880187 * ___callback4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.UIFakeStore::InstantiateDialog()
extern "C"  void UIFakeStore_InstantiateDialog_m26685090 (UIFakeStore_t3684252124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.UIFakeStore::CreatePurchaseQuestion(UnityEngine.Purchasing.ProductDefinition)
extern "C"  String_t* UIFakeStore_CreatePurchaseQuestion_m2287137335 (UIFakeStore_t3684252124 * __this, ProductDefinition_t1942475268 * ___definition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.UIFakeStore::CreateRetrieveProductsQuestion(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
extern "C"  String_t* UIFakeStore_CreateRetrieveProductsQuestion_m4106290161 (UIFakeStore_t3684252124 * __this, ReadOnlyCollection_1_t2128260960 * ___definitions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button UnityEngine.Purchasing.UIFakeStore::GetOkayButton()
extern "C"  Button_t2872111280 * UIFakeStore_GetOkayButton_m2121832312 (UIFakeStore_t3684252124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button UnityEngine.Purchasing.UIFakeStore::GetCancelButton()
extern "C"  Button_t2872111280 * UIFakeStore_GetCancelButton_m1851079754 (UIFakeStore_t3684252124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Purchasing.UIFakeStore::GetCancelButtonGameObject()
extern "C"  GameObject_t1756533147 * UIFakeStore_GetCancelButtonGameObject_m4002152618 (UIFakeStore_t3684252124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Text UnityEngine.Purchasing.UIFakeStore::GetOkayButtonText()
extern "C"  Text_t356221433 * UIFakeStore_GetOkayButtonText_m6562956 (UIFakeStore_t3684252124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Text UnityEngine.Purchasing.UIFakeStore::GetCancelButtonText()
extern "C"  Text_t356221433 * UIFakeStore_GetCancelButtonText_m1587731078 (UIFakeStore_t3684252124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Dropdown UnityEngine.Purchasing.UIFakeStore::GetDropdown()
extern "C"  Dropdown_t1985816271 * UIFakeStore_GetDropdown_m651796348 (UIFakeStore_t3684252124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Purchasing.UIFakeStore::GetDropdownContainerGameObject()
extern "C"  GameObject_t1756533147 * UIFakeStore_GetDropdownContainerGameObject_m2190404260 (UIFakeStore_t3684252124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.UIFakeStore::OkayButtonClicked()
extern "C"  void UIFakeStore_OkayButtonClicked_m1579250743 (UIFakeStore_t3684252124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.UIFakeStore::CancelButtonClicked()
extern "C"  void UIFakeStore_CancelButtonClicked_m1822980185 (UIFakeStore_t3684252124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.UIFakeStore::DropdownValueChanged(System.Int32)
extern "C"  void UIFakeStore_DropdownValueChanged_m3219846161 (UIFakeStore_t3684252124 * __this, int32_t ___selectedItem0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.UIFakeStore::CloseDialog()
extern "C"  void UIFakeStore_CloseDialog_m4132523490 (UIFakeStore_t3684252124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.UIFakeStore::IsShowingDialog()
extern "C"  bool UIFakeStore_IsShowingDialog_m1285492143 (UIFakeStore_t3684252124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.UIFakeStore::<InstantiateDialog>m__0()
extern "C"  void UIFakeStore_U3CInstantiateDialogU3Em__0_m1757237127 (UIFakeStore_t3684252124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.UIFakeStore::<InstantiateDialog>m__1()
extern "C"  void UIFakeStore_U3CInstantiateDialogU3Em__1_m3303118092 (UIFakeStore_t3684252124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.UIFakeStore::<InstantiateDialog>m__2()
extern "C"  void UIFakeStore_U3CInstantiateDialogU3Em__2_m2039562129 (UIFakeStore_t3684252124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.UIFakeStore::<InstantiateDialog>m__3(System.Int32)
extern "C"  void UIFakeStore_U3CInstantiateDialogU3Em__3_m322601745 (UIFakeStore_t3684252124 * __this, int32_t ___selectedItem0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.UIFakeStore::<CreateRetrieveProductsQuestion>m__4(UnityEngine.Purchasing.ProductDefinition)
extern "C"  String_t* UIFakeStore_U3CCreateRetrieveProductsQuestionU3Em__4_m1781217237 (Il2CppObject * __this /* static, unused */, ProductDefinition_t1942475268 * ___pid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
