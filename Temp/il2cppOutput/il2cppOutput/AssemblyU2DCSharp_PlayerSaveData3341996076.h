#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Scene>
struct List_1_t3569925524;
// System.Collections.Generic.List`1<Achievement>
struct List_1_t4002654229;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerSaveData
struct  PlayerSaveData_t3341996076  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<Scene> PlayerSaveData::sceneList
	List_1_t3569925524 * ___sceneList_0;
	// System.Collections.Generic.List`1<Achievement> PlayerSaveData::achievementList
	List_1_t4002654229 * ___achievementList_1;
	// System.Int32 PlayerSaveData::energy
	int32_t ___energy_2;
	// System.Int32 PlayerSaveData::coin
	int32_t ___coin_3;
	// System.Collections.Generic.List`1<System.String> PlayerSaveData::energyTimeList
	List_1_t1398341365 * ___energyTimeList_4;
	// System.Boolean PlayerSaveData::newPlayer
	bool ___newPlayer_5;

public:
	inline static int32_t get_offset_of_sceneList_0() { return static_cast<int32_t>(offsetof(PlayerSaveData_t3341996076, ___sceneList_0)); }
	inline List_1_t3569925524 * get_sceneList_0() const { return ___sceneList_0; }
	inline List_1_t3569925524 ** get_address_of_sceneList_0() { return &___sceneList_0; }
	inline void set_sceneList_0(List_1_t3569925524 * value)
	{
		___sceneList_0 = value;
		Il2CppCodeGenWriteBarrier(&___sceneList_0, value);
	}

	inline static int32_t get_offset_of_achievementList_1() { return static_cast<int32_t>(offsetof(PlayerSaveData_t3341996076, ___achievementList_1)); }
	inline List_1_t4002654229 * get_achievementList_1() const { return ___achievementList_1; }
	inline List_1_t4002654229 ** get_address_of_achievementList_1() { return &___achievementList_1; }
	inline void set_achievementList_1(List_1_t4002654229 * value)
	{
		___achievementList_1 = value;
		Il2CppCodeGenWriteBarrier(&___achievementList_1, value);
	}

	inline static int32_t get_offset_of_energy_2() { return static_cast<int32_t>(offsetof(PlayerSaveData_t3341996076, ___energy_2)); }
	inline int32_t get_energy_2() const { return ___energy_2; }
	inline int32_t* get_address_of_energy_2() { return &___energy_2; }
	inline void set_energy_2(int32_t value)
	{
		___energy_2 = value;
	}

	inline static int32_t get_offset_of_coin_3() { return static_cast<int32_t>(offsetof(PlayerSaveData_t3341996076, ___coin_3)); }
	inline int32_t get_coin_3() const { return ___coin_3; }
	inline int32_t* get_address_of_coin_3() { return &___coin_3; }
	inline void set_coin_3(int32_t value)
	{
		___coin_3 = value;
	}

	inline static int32_t get_offset_of_energyTimeList_4() { return static_cast<int32_t>(offsetof(PlayerSaveData_t3341996076, ___energyTimeList_4)); }
	inline List_1_t1398341365 * get_energyTimeList_4() const { return ___energyTimeList_4; }
	inline List_1_t1398341365 ** get_address_of_energyTimeList_4() { return &___energyTimeList_4; }
	inline void set_energyTimeList_4(List_1_t1398341365 * value)
	{
		___energyTimeList_4 = value;
		Il2CppCodeGenWriteBarrier(&___energyTimeList_4, value);
	}

	inline static int32_t get_offset_of_newPlayer_5() { return static_cast<int32_t>(offsetof(PlayerSaveData_t3341996076, ___newPlayer_5)); }
	inline bool get_newPlayer_5() const { return ___newPlayer_5; }
	inline bool* get_address_of_newPlayer_5() { return &___newPlayer_5; }
	inline void set_newPlayer_5(bool value)
	{
		___newPlayer_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
