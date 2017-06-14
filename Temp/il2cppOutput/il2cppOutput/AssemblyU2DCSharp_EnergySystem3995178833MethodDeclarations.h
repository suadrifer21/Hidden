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

// EnergySystem
struct EnergySystem_t3995178833;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"

// System.Void EnergySystem::.ctor()
extern "C"  void EnergySystem__ctor_m3313746192 (EnergySystem_t3995178833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnergySystem::Awake()
extern "C"  void EnergySystem_Awake_m3940885757 (EnergySystem_t3995178833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnergySystem::LoseEnergy(System.Int32)
extern "C"  void EnergySystem_LoseEnergy_m142435778 (EnergySystem_t3995178833 * __this, int32_t ___cost0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EnergySystem::GetFirstEmptyPref()
extern "C"  int32_t EnergySystem_GetFirstEmptyPref_m89944616 (EnergySystem_t3995178833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnergySystem::BuyAllEnergy()
extern "C"  void EnergySystem_BuyAllEnergy_m440471305 (EnergySystem_t3995178833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EnergySystem::CheckEnergy()
extern "C"  bool EnergySystem_CheckEnergy_m1405237634 (EnergySystem_t3995178833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnergySystem::AddEnergy()
extern "C"  void EnergySystem_AddEnergy_m474607811 (EnergySystem_t3995178833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String EnergySystem::GetNextTime()
extern "C"  String_t* EnergySystem_GetNextTime_m1450513941 (EnergySystem_t3995178833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator EnergySystem::Check()
extern "C"  Il2CppObject * EnergySystem_Check_m2395351888 (EnergySystem_t3995178833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnergySystem::BuyEnergy(System.Int32)
extern "C"  void EnergySystem_BuyEnergy_m3764891141 (EnergySystem_t3995178833 * __this, int32_t ___buyAmount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnergySystem::SetTimeLast()
extern "C"  void EnergySystem_SetTimeLast_m1956116769 (EnergySystem_t3995178833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnergySystem::AddCoin(System.Int32)
extern "C"  void EnergySystem_AddCoin_m2828015179 (EnergySystem_t3995178833 * __this, int32_t ___added0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnergySystem::LoseCoin(System.Int32)
extern "C"  void EnergySystem_LoseCoin_m4017860787 (EnergySystem_t3995178833 * __this, int32_t ___minus0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnergySystem::ShopEnergy(System.Int32)
extern "C"  void EnergySystem_ShopEnergy_m3250037371 (EnergySystem_t3995178833 * __this, int32_t ___cost0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnergySystem::SetEnergyBought(System.Int32)
extern "C"  void EnergySystem_SetEnergyBought_m3729296150 (EnergySystem_t3995178833 * __this, int32_t ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnergySystem::Save()
extern "C"  void EnergySystem_Save_m1381087977 (EnergySystem_t3995178833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnergySystem::Start()
extern "C"  void EnergySystem_Start_m4140839248 (EnergySystem_t3995178833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnergySystem::Update()
extern "C"  void EnergySystem_Update_m2121581305 (EnergySystem_t3995178833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnergySystem::Reset()
extern "C"  void EnergySystem_Reset_m3494996073 (EnergySystem_t3995178833 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
