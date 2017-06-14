#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerResourceUI
struct  PlayerResourceUI_t691965611  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text PlayerResourceUI::energyNow
	Text_t356221433 * ___energyNow_2;
	// UnityEngine.UI.Text PlayerResourceUI::nextEnergy
	Text_t356221433 * ___nextEnergy_3;
	// UnityEngine.UI.Text PlayerResourceUI::coin
	Text_t356221433 * ___coin_4;

public:
	inline static int32_t get_offset_of_energyNow_2() { return static_cast<int32_t>(offsetof(PlayerResourceUI_t691965611, ___energyNow_2)); }
	inline Text_t356221433 * get_energyNow_2() const { return ___energyNow_2; }
	inline Text_t356221433 ** get_address_of_energyNow_2() { return &___energyNow_2; }
	inline void set_energyNow_2(Text_t356221433 * value)
	{
		___energyNow_2 = value;
		Il2CppCodeGenWriteBarrier(&___energyNow_2, value);
	}

	inline static int32_t get_offset_of_nextEnergy_3() { return static_cast<int32_t>(offsetof(PlayerResourceUI_t691965611, ___nextEnergy_3)); }
	inline Text_t356221433 * get_nextEnergy_3() const { return ___nextEnergy_3; }
	inline Text_t356221433 ** get_address_of_nextEnergy_3() { return &___nextEnergy_3; }
	inline void set_nextEnergy_3(Text_t356221433 * value)
	{
		___nextEnergy_3 = value;
		Il2CppCodeGenWriteBarrier(&___nextEnergy_3, value);
	}

	inline static int32_t get_offset_of_coin_4() { return static_cast<int32_t>(offsetof(PlayerResourceUI_t691965611, ___coin_4)); }
	inline Text_t356221433 * get_coin_4() const { return ___coin_4; }
	inline Text_t356221433 ** get_address_of_coin_4() { return &___coin_4; }
	inline void set_coin_4(Text_t356221433 * value)
	{
		___coin_4 = value;
		Il2CppCodeGenWriteBarrier(&___coin_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
