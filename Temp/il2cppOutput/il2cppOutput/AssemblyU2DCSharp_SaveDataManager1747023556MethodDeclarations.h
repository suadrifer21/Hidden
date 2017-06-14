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

// SaveDataManager
struct SaveDataManager_t1747023556;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// PlayerSaveData
struct PlayerSaveData_t3341996076;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PlayerSaveData3341996076.h"

// System.Void SaveDataManager::.ctor()
extern "C"  void SaveDataManager__ctor_m306681913 (SaveDataManager_t1747023556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SaveDataManager::Awake()
extern "C"  void SaveDataManager_Awake_m1853322224 (SaveDataManager_t1747023556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SaveDataManager::Start()
extern "C"  void SaveDataManager_Start_m1518962121 (SaveDataManager_t1747023556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SaveDataManager::ToJSON()
extern "C"  void SaveDataManager_ToJSON_m3240286408 (SaveDataManager_t1747023556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] SaveDataManager::ToBytes(PlayerSaveData)
extern "C"  ByteU5BU5D_t3397334013* SaveDataManager_ToBytes_m3393833545 (Il2CppObject * __this /* static, unused */, PlayerSaveData_t3341996076 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlayerSaveData SaveDataManager::FromBytes(System.Byte[])
extern "C"  PlayerSaveData_t3341996076 * SaveDataManager_FromBytes_m3280030826 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SaveDataManager::ApplyPlayerPrefs()
extern "C"  void SaveDataManager_ApplyPlayerPrefs_m1790192246 (SaveDataManager_t1747023556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SaveDataManager::ResolveDataConflict()
extern "C"  void SaveDataManager_ResolveDataConflict_m3604009087 (SaveDataManager_t1747023556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
