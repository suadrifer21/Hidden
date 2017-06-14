#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// EnergySystem
struct EnergySystem_t3995178833;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3839502067;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "mscorlib_System_DateTime693205669.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnergySystem
struct  EnergySystem_t3995178833  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 EnergySystem::energy
	int32_t ___energy_3;
	// System.Int32 EnergySystem::maxEnergy
	int32_t ___maxEnergy_4;
	// System.Boolean EnergySystem::isTimeSelected
	bool ___isTimeSelected_5;
	// System.Int32 EnergySystem::minutesForRestore
	int32_t ___minutesForRestore_6;
	// System.DateTime EnergySystem::nextTime
	DateTime_t693205669  ___nextTime_7;
	// UnityEngine.WaitForSeconds EnergySystem::CheckTicks
	WaitForSeconds_t3839502067 * ___CheckTicks_8;
	// System.DateTime EnergySystem::timeLast
	DateTime_t693205669  ___timeLast_9;
	// System.Int32 EnergySystem::coin
	int32_t ___coin_10;
	// System.Int32 EnergySystem::energyBought
	int32_t ___energyBought_11;
	// System.Collections.Generic.List`1<System.String> EnergySystem::a
	List_1_t1398341365 * ___a_12;

public:
	inline static int32_t get_offset_of_energy_3() { return static_cast<int32_t>(offsetof(EnergySystem_t3995178833, ___energy_3)); }
	inline int32_t get_energy_3() const { return ___energy_3; }
	inline int32_t* get_address_of_energy_3() { return &___energy_3; }
	inline void set_energy_3(int32_t value)
	{
		___energy_3 = value;
	}

	inline static int32_t get_offset_of_maxEnergy_4() { return static_cast<int32_t>(offsetof(EnergySystem_t3995178833, ___maxEnergy_4)); }
	inline int32_t get_maxEnergy_4() const { return ___maxEnergy_4; }
	inline int32_t* get_address_of_maxEnergy_4() { return &___maxEnergy_4; }
	inline void set_maxEnergy_4(int32_t value)
	{
		___maxEnergy_4 = value;
	}

	inline static int32_t get_offset_of_isTimeSelected_5() { return static_cast<int32_t>(offsetof(EnergySystem_t3995178833, ___isTimeSelected_5)); }
	inline bool get_isTimeSelected_5() const { return ___isTimeSelected_5; }
	inline bool* get_address_of_isTimeSelected_5() { return &___isTimeSelected_5; }
	inline void set_isTimeSelected_5(bool value)
	{
		___isTimeSelected_5 = value;
	}

	inline static int32_t get_offset_of_minutesForRestore_6() { return static_cast<int32_t>(offsetof(EnergySystem_t3995178833, ___minutesForRestore_6)); }
	inline int32_t get_minutesForRestore_6() const { return ___minutesForRestore_6; }
	inline int32_t* get_address_of_minutesForRestore_6() { return &___minutesForRestore_6; }
	inline void set_minutesForRestore_6(int32_t value)
	{
		___minutesForRestore_6 = value;
	}

	inline static int32_t get_offset_of_nextTime_7() { return static_cast<int32_t>(offsetof(EnergySystem_t3995178833, ___nextTime_7)); }
	inline DateTime_t693205669  get_nextTime_7() const { return ___nextTime_7; }
	inline DateTime_t693205669 * get_address_of_nextTime_7() { return &___nextTime_7; }
	inline void set_nextTime_7(DateTime_t693205669  value)
	{
		___nextTime_7 = value;
	}

	inline static int32_t get_offset_of_CheckTicks_8() { return static_cast<int32_t>(offsetof(EnergySystem_t3995178833, ___CheckTicks_8)); }
	inline WaitForSeconds_t3839502067 * get_CheckTicks_8() const { return ___CheckTicks_8; }
	inline WaitForSeconds_t3839502067 ** get_address_of_CheckTicks_8() { return &___CheckTicks_8; }
	inline void set_CheckTicks_8(WaitForSeconds_t3839502067 * value)
	{
		___CheckTicks_8 = value;
		Il2CppCodeGenWriteBarrier(&___CheckTicks_8, value);
	}

	inline static int32_t get_offset_of_timeLast_9() { return static_cast<int32_t>(offsetof(EnergySystem_t3995178833, ___timeLast_9)); }
	inline DateTime_t693205669  get_timeLast_9() const { return ___timeLast_9; }
	inline DateTime_t693205669 * get_address_of_timeLast_9() { return &___timeLast_9; }
	inline void set_timeLast_9(DateTime_t693205669  value)
	{
		___timeLast_9 = value;
	}

	inline static int32_t get_offset_of_coin_10() { return static_cast<int32_t>(offsetof(EnergySystem_t3995178833, ___coin_10)); }
	inline int32_t get_coin_10() const { return ___coin_10; }
	inline int32_t* get_address_of_coin_10() { return &___coin_10; }
	inline void set_coin_10(int32_t value)
	{
		___coin_10 = value;
	}

	inline static int32_t get_offset_of_energyBought_11() { return static_cast<int32_t>(offsetof(EnergySystem_t3995178833, ___energyBought_11)); }
	inline int32_t get_energyBought_11() const { return ___energyBought_11; }
	inline int32_t* get_address_of_energyBought_11() { return &___energyBought_11; }
	inline void set_energyBought_11(int32_t value)
	{
		___energyBought_11 = value;
	}

	inline static int32_t get_offset_of_a_12() { return static_cast<int32_t>(offsetof(EnergySystem_t3995178833, ___a_12)); }
	inline List_1_t1398341365 * get_a_12() const { return ___a_12; }
	inline List_1_t1398341365 ** get_address_of_a_12() { return &___a_12; }
	inline void set_a_12(List_1_t1398341365 * value)
	{
		___a_12 = value;
		Il2CppCodeGenWriteBarrier(&___a_12, value);
	}
};

struct EnergySystem_t3995178833_StaticFields
{
public:
	// EnergySystem EnergySystem::instance
	EnergySystem_t3995178833 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(EnergySystem_t3995178833_StaticFields, ___instance_2)); }
	inline EnergySystem_t3995178833 * get_instance_2() const { return ___instance_2; }
	inline EnergySystem_t3995178833 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(EnergySystem_t3995178833 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
