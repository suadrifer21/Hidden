#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SaveDataManager
struct SaveDataManager_t1747023556;
// PlayerSaveData
struct PlayerSaveData_t3341996076;
// System.String
struct String_t;
// System.Collections.Generic.List`1<Scene>
struct List_1_t3569925524;
// System.Collections.Generic.List`1<Achievement>
struct List_1_t4002654229;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SaveDataManager
struct  SaveDataManager_t1747023556  : public MonoBehaviour_t1158329972
{
public:
	// PlayerSaveData SaveDataManager::tempPlayerSavedData
	PlayerSaveData_t3341996076 * ___tempPlayerSavedData_3;
	// PlayerSaveData SaveDataManager::internalPlayerSavedData
	PlayerSaveData_t3341996076 * ___internalPlayerSavedData_4;
	// PlayerSaveData SaveDataManager::cloudPlayerSavedData
	PlayerSaveData_t3341996076 * ___cloudPlayerSavedData_5;
	// System.String SaveDataManager::json
	String_t* ___json_6;
	// System.Collections.Generic.List`1<Scene> SaveDataManager::sceneList
	List_1_t3569925524 * ___sceneList_7;
	// System.Collections.Generic.List`1<Achievement> SaveDataManager::achievementList
	List_1_t4002654229 * ___achievementList_8;
	// System.Boolean SaveDataManager::newPlayer
	bool ___newPlayer_9;
	// System.Int32 SaveDataManager::currentLevelScore
	int32_t ___currentLevelScore_10;
	// System.Int32 SaveDataManager::currentLevelHint
	int32_t ___currentLevelHint_11;

public:
	inline static int32_t get_offset_of_tempPlayerSavedData_3() { return static_cast<int32_t>(offsetof(SaveDataManager_t1747023556, ___tempPlayerSavedData_3)); }
	inline PlayerSaveData_t3341996076 * get_tempPlayerSavedData_3() const { return ___tempPlayerSavedData_3; }
	inline PlayerSaveData_t3341996076 ** get_address_of_tempPlayerSavedData_3() { return &___tempPlayerSavedData_3; }
	inline void set_tempPlayerSavedData_3(PlayerSaveData_t3341996076 * value)
	{
		___tempPlayerSavedData_3 = value;
		Il2CppCodeGenWriteBarrier(&___tempPlayerSavedData_3, value);
	}

	inline static int32_t get_offset_of_internalPlayerSavedData_4() { return static_cast<int32_t>(offsetof(SaveDataManager_t1747023556, ___internalPlayerSavedData_4)); }
	inline PlayerSaveData_t3341996076 * get_internalPlayerSavedData_4() const { return ___internalPlayerSavedData_4; }
	inline PlayerSaveData_t3341996076 ** get_address_of_internalPlayerSavedData_4() { return &___internalPlayerSavedData_4; }
	inline void set_internalPlayerSavedData_4(PlayerSaveData_t3341996076 * value)
	{
		___internalPlayerSavedData_4 = value;
		Il2CppCodeGenWriteBarrier(&___internalPlayerSavedData_4, value);
	}

	inline static int32_t get_offset_of_cloudPlayerSavedData_5() { return static_cast<int32_t>(offsetof(SaveDataManager_t1747023556, ___cloudPlayerSavedData_5)); }
	inline PlayerSaveData_t3341996076 * get_cloudPlayerSavedData_5() const { return ___cloudPlayerSavedData_5; }
	inline PlayerSaveData_t3341996076 ** get_address_of_cloudPlayerSavedData_5() { return &___cloudPlayerSavedData_5; }
	inline void set_cloudPlayerSavedData_5(PlayerSaveData_t3341996076 * value)
	{
		___cloudPlayerSavedData_5 = value;
		Il2CppCodeGenWriteBarrier(&___cloudPlayerSavedData_5, value);
	}

	inline static int32_t get_offset_of_json_6() { return static_cast<int32_t>(offsetof(SaveDataManager_t1747023556, ___json_6)); }
	inline String_t* get_json_6() const { return ___json_6; }
	inline String_t** get_address_of_json_6() { return &___json_6; }
	inline void set_json_6(String_t* value)
	{
		___json_6 = value;
		Il2CppCodeGenWriteBarrier(&___json_6, value);
	}

	inline static int32_t get_offset_of_sceneList_7() { return static_cast<int32_t>(offsetof(SaveDataManager_t1747023556, ___sceneList_7)); }
	inline List_1_t3569925524 * get_sceneList_7() const { return ___sceneList_7; }
	inline List_1_t3569925524 ** get_address_of_sceneList_7() { return &___sceneList_7; }
	inline void set_sceneList_7(List_1_t3569925524 * value)
	{
		___sceneList_7 = value;
		Il2CppCodeGenWriteBarrier(&___sceneList_7, value);
	}

	inline static int32_t get_offset_of_achievementList_8() { return static_cast<int32_t>(offsetof(SaveDataManager_t1747023556, ___achievementList_8)); }
	inline List_1_t4002654229 * get_achievementList_8() const { return ___achievementList_8; }
	inline List_1_t4002654229 ** get_address_of_achievementList_8() { return &___achievementList_8; }
	inline void set_achievementList_8(List_1_t4002654229 * value)
	{
		___achievementList_8 = value;
		Il2CppCodeGenWriteBarrier(&___achievementList_8, value);
	}

	inline static int32_t get_offset_of_newPlayer_9() { return static_cast<int32_t>(offsetof(SaveDataManager_t1747023556, ___newPlayer_9)); }
	inline bool get_newPlayer_9() const { return ___newPlayer_9; }
	inline bool* get_address_of_newPlayer_9() { return &___newPlayer_9; }
	inline void set_newPlayer_9(bool value)
	{
		___newPlayer_9 = value;
	}

	inline static int32_t get_offset_of_currentLevelScore_10() { return static_cast<int32_t>(offsetof(SaveDataManager_t1747023556, ___currentLevelScore_10)); }
	inline int32_t get_currentLevelScore_10() const { return ___currentLevelScore_10; }
	inline int32_t* get_address_of_currentLevelScore_10() { return &___currentLevelScore_10; }
	inline void set_currentLevelScore_10(int32_t value)
	{
		___currentLevelScore_10 = value;
	}

	inline static int32_t get_offset_of_currentLevelHint_11() { return static_cast<int32_t>(offsetof(SaveDataManager_t1747023556, ___currentLevelHint_11)); }
	inline int32_t get_currentLevelHint_11() const { return ___currentLevelHint_11; }
	inline int32_t* get_address_of_currentLevelHint_11() { return &___currentLevelHint_11; }
	inline void set_currentLevelHint_11(int32_t value)
	{
		___currentLevelHint_11 = value;
	}
};

struct SaveDataManager_t1747023556_StaticFields
{
public:
	// SaveDataManager SaveDataManager::instance
	SaveDataManager_t1747023556 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(SaveDataManager_t1747023556_StaticFields, ___instance_2)); }
	inline SaveDataManager_t1747023556 * get_instance_2() const { return ___instance_2; }
	inline SaveDataManager_t1747023556 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(SaveDataManager_t1747023556 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
