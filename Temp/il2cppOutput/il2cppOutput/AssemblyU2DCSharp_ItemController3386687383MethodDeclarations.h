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

// ItemController
struct ItemController_t3386687383;
// ItemController[]
struct ItemControllerU5BU5D_t4270552110;
// System.Boolean[]
struct BooleanU5BU5D_t3568034315;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1612828711;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "AssemblyU2DCSharp_HogScene_ImageType3696727544.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_HogScene_LayerType813678172.h"

// System.Void ItemController::.ctor()
extern "C"  void ItemController__ctor_m1533786246 (ItemController_t3386687383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ItemController[] ItemController::ChooseSearchItems(System.Int32)
extern "C"  ItemControllerU5BU5D_t4270552110* ItemController_ChooseSearchItems_m2662768790 (Il2CppObject * __this /* static, unused */, int32_t ___maxItems0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ItemController::TotalItems()
extern "C"  int32_t ItemController_TotalItems_m559279500 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ItemController ItemController::PickItem(UnityEngine.Vector3)
extern "C"  ItemController_t3386687383 * ItemController_PickItem_m1030582425 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemController::WriteItemListToConsole()
extern "C"  void ItemController_WriteItemListToConsole_m1946293410 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemController::AddHitTestData(System.Boolean[],System.Int32,UnityEngine.Rect,System.Collections.Generic.List`1<UnityEngine.Vector2>)
extern "C"  void ItemController_AddHitTestData_m3478099097 (ItemController_t3386687383 * __this, BooleanU5BU5D_t3568034315* ___newHitTestData0, int32_t ___newHitTestDataStride1, Rect_t3681755626  ___newWorldSpaceRect2, List_1_t1612828711 * ___pixels3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemController::AddImage(HogScene/ImageType,UnityEngine.GameObject)
extern "C"  void ItemController_AddImage_m886747064 (ItemController_t3386687383 * __this, int32_t ___imageType0, GameObject_t1756533147 * ___imageGo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemController::AddLayer(HogScene/LayerType)
extern "C"  void ItemController_AddLayer_m398737456 (ItemController_t3386687383 * __this, int32_t ___layerType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HogScene/ImageType ItemController::BestHitTestImageType()
extern "C"  int32_t ItemController_BestHitTestImageType_m3112309155 (ItemController_t3386687383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ItemController::IsItem()
extern "C"  bool ItemController_IsItem_m1446057333 (ItemController_t3386687383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemController::PickUpItem()
extern "C"  void ItemController_PickUpItem_m2444377803 (ItemController_t3386687383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemController::Awake()
extern "C"  void ItemController_Awake_m899533539 (ItemController_t3386687383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemController::OnDestroy()
extern "C"  void ItemController_OnDestroy_m3023070005 (ItemController_t3386687383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemController::OnDisable()
extern "C"  void ItemController_OnDisable_m783144703 (ItemController_t3386687383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemController::OnEnable()
extern "C"  void ItemController_OnEnable_m1461393026 (ItemController_t3386687383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemController::Start()
extern "C"  void ItemController_Start_m1644851778 (ItemController_t3386687383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemController::Update()
extern "C"  void ItemController_Update_m2701948319 (ItemController_t3386687383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemController::RemoveAchievemnt()
extern "C"  void ItemController_RemoveAchievemnt_m572519572 (ItemController_t3386687383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemController::Resize()
extern "C"  void ItemController_Resize_m1574387844 (ItemController_t3386687383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemController::.cctor()
extern "C"  void ItemController__cctor_m2981272361 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
