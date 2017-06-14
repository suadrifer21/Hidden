#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Scoring
struct Scoring_t1196618371;
// UnityEngine.UI.Text
struct Text_t356221433;
// System.Collections.Generic.List`1<ScoringRule>
struct List_1_t2347291057;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.Collections.Generic.List`1<CoinGiven>
struct List_1_t3811551054;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scoring
struct  Scoring_t1196618371  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text Scoring::scoreText
	Text_t356221433 * ___scoreText_3;
	// System.Int32 Scoring::totalScore
	int32_t ___totalScore_4;
	// System.Int32 Scoring::streak
	int32_t ___streak_5;
	// System.Int32 Scoring::wrongStreak
	int32_t ___wrongStreak_6;
	// System.Collections.Generic.List`1<ScoringRule> Scoring::scoreRange
	List_1_t2347291057 * ___scoreRange_7;
	// System.Single Scoring::time
	float ___time_8;
	// System.Single Scoring::score
	float ___score_9;
	// System.Single Scoring::bonus
	float ___bonus_10;
	// UnityEngine.Transform Scoring::scorePopupGroup
	Transform_t3275118058 * ___scorePopupGroup_11;
	// System.Boolean Scoring::isCarryScore
	bool ___isCarryScore_12;
	// System.Collections.Generic.List`1<CoinGiven> Scoring::coinRange
	List_1_t3811551054 * ___coinRange_13;
	// UnityEngine.GameObject Scoring::streakText
	GameObject_t1756533147 * ___streakText_14;
	// System.Int32 Scoring::getCoin
	int32_t ___getCoin_15;

public:
	inline static int32_t get_offset_of_scoreText_3() { return static_cast<int32_t>(offsetof(Scoring_t1196618371, ___scoreText_3)); }
	inline Text_t356221433 * get_scoreText_3() const { return ___scoreText_3; }
	inline Text_t356221433 ** get_address_of_scoreText_3() { return &___scoreText_3; }
	inline void set_scoreText_3(Text_t356221433 * value)
	{
		___scoreText_3 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_3, value);
	}

	inline static int32_t get_offset_of_totalScore_4() { return static_cast<int32_t>(offsetof(Scoring_t1196618371, ___totalScore_4)); }
	inline int32_t get_totalScore_4() const { return ___totalScore_4; }
	inline int32_t* get_address_of_totalScore_4() { return &___totalScore_4; }
	inline void set_totalScore_4(int32_t value)
	{
		___totalScore_4 = value;
	}

	inline static int32_t get_offset_of_streak_5() { return static_cast<int32_t>(offsetof(Scoring_t1196618371, ___streak_5)); }
	inline int32_t get_streak_5() const { return ___streak_5; }
	inline int32_t* get_address_of_streak_5() { return &___streak_5; }
	inline void set_streak_5(int32_t value)
	{
		___streak_5 = value;
	}

	inline static int32_t get_offset_of_wrongStreak_6() { return static_cast<int32_t>(offsetof(Scoring_t1196618371, ___wrongStreak_6)); }
	inline int32_t get_wrongStreak_6() const { return ___wrongStreak_6; }
	inline int32_t* get_address_of_wrongStreak_6() { return &___wrongStreak_6; }
	inline void set_wrongStreak_6(int32_t value)
	{
		___wrongStreak_6 = value;
	}

	inline static int32_t get_offset_of_scoreRange_7() { return static_cast<int32_t>(offsetof(Scoring_t1196618371, ___scoreRange_7)); }
	inline List_1_t2347291057 * get_scoreRange_7() const { return ___scoreRange_7; }
	inline List_1_t2347291057 ** get_address_of_scoreRange_7() { return &___scoreRange_7; }
	inline void set_scoreRange_7(List_1_t2347291057 * value)
	{
		___scoreRange_7 = value;
		Il2CppCodeGenWriteBarrier(&___scoreRange_7, value);
	}

	inline static int32_t get_offset_of_time_8() { return static_cast<int32_t>(offsetof(Scoring_t1196618371, ___time_8)); }
	inline float get_time_8() const { return ___time_8; }
	inline float* get_address_of_time_8() { return &___time_8; }
	inline void set_time_8(float value)
	{
		___time_8 = value;
	}

	inline static int32_t get_offset_of_score_9() { return static_cast<int32_t>(offsetof(Scoring_t1196618371, ___score_9)); }
	inline float get_score_9() const { return ___score_9; }
	inline float* get_address_of_score_9() { return &___score_9; }
	inline void set_score_9(float value)
	{
		___score_9 = value;
	}

	inline static int32_t get_offset_of_bonus_10() { return static_cast<int32_t>(offsetof(Scoring_t1196618371, ___bonus_10)); }
	inline float get_bonus_10() const { return ___bonus_10; }
	inline float* get_address_of_bonus_10() { return &___bonus_10; }
	inline void set_bonus_10(float value)
	{
		___bonus_10 = value;
	}

	inline static int32_t get_offset_of_scorePopupGroup_11() { return static_cast<int32_t>(offsetof(Scoring_t1196618371, ___scorePopupGroup_11)); }
	inline Transform_t3275118058 * get_scorePopupGroup_11() const { return ___scorePopupGroup_11; }
	inline Transform_t3275118058 ** get_address_of_scorePopupGroup_11() { return &___scorePopupGroup_11; }
	inline void set_scorePopupGroup_11(Transform_t3275118058 * value)
	{
		___scorePopupGroup_11 = value;
		Il2CppCodeGenWriteBarrier(&___scorePopupGroup_11, value);
	}

	inline static int32_t get_offset_of_isCarryScore_12() { return static_cast<int32_t>(offsetof(Scoring_t1196618371, ___isCarryScore_12)); }
	inline bool get_isCarryScore_12() const { return ___isCarryScore_12; }
	inline bool* get_address_of_isCarryScore_12() { return &___isCarryScore_12; }
	inline void set_isCarryScore_12(bool value)
	{
		___isCarryScore_12 = value;
	}

	inline static int32_t get_offset_of_coinRange_13() { return static_cast<int32_t>(offsetof(Scoring_t1196618371, ___coinRange_13)); }
	inline List_1_t3811551054 * get_coinRange_13() const { return ___coinRange_13; }
	inline List_1_t3811551054 ** get_address_of_coinRange_13() { return &___coinRange_13; }
	inline void set_coinRange_13(List_1_t3811551054 * value)
	{
		___coinRange_13 = value;
		Il2CppCodeGenWriteBarrier(&___coinRange_13, value);
	}

	inline static int32_t get_offset_of_streakText_14() { return static_cast<int32_t>(offsetof(Scoring_t1196618371, ___streakText_14)); }
	inline GameObject_t1756533147 * get_streakText_14() const { return ___streakText_14; }
	inline GameObject_t1756533147 ** get_address_of_streakText_14() { return &___streakText_14; }
	inline void set_streakText_14(GameObject_t1756533147 * value)
	{
		___streakText_14 = value;
		Il2CppCodeGenWriteBarrier(&___streakText_14, value);
	}

	inline static int32_t get_offset_of_getCoin_15() { return static_cast<int32_t>(offsetof(Scoring_t1196618371, ___getCoin_15)); }
	inline int32_t get_getCoin_15() const { return ___getCoin_15; }
	inline int32_t* get_address_of_getCoin_15() { return &___getCoin_15; }
	inline void set_getCoin_15(int32_t value)
	{
		___getCoin_15 = value;
	}
};

struct Scoring_t1196618371_StaticFields
{
public:
	// Scoring Scoring::instance
	Scoring_t1196618371 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(Scoring_t1196618371_StaticFields, ___instance_2)); }
	inline Scoring_t1196618371 * get_instance_2() const { return ___instance_2; }
	inline Scoring_t1196618371 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(Scoring_t1196618371 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
