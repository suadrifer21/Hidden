#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.String
struct String_t;
// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs>
struct EventHandler_1_t3580441194;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.Editor.Placeholder
struct  Placeholder_t1837649965  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Texture2D UnityEngine.Advertisements.Editor.Placeholder::m_LandscapeTexture
	Texture2D_t3542995729 * ___m_LandscapeTexture_2;
	// UnityEngine.Texture2D UnityEngine.Advertisements.Editor.Placeholder::m_PortraitTexture
	Texture2D_t3542995729 * ___m_PortraitTexture_3;
	// System.Boolean UnityEngine.Advertisements.Editor.Placeholder::m_Showing
	bool ___m_Showing_4;
	// System.String UnityEngine.Advertisements.Editor.Placeholder::m_PlacementId
	String_t* ___m_PlacementId_5;
	// System.Boolean UnityEngine.Advertisements.Editor.Placeholder::m_AllowSkip
	bool ___m_AllowSkip_6;
	// System.EventHandler`1<UnityEngine.Advertisements.FinishEventArgs> UnityEngine.Advertisements.Editor.Placeholder::OnFinish
	EventHandler_1_t3580441194 * ___OnFinish_7;

public:
	inline static int32_t get_offset_of_m_LandscapeTexture_2() { return static_cast<int32_t>(offsetof(Placeholder_t1837649965, ___m_LandscapeTexture_2)); }
	inline Texture2D_t3542995729 * get_m_LandscapeTexture_2() const { return ___m_LandscapeTexture_2; }
	inline Texture2D_t3542995729 ** get_address_of_m_LandscapeTexture_2() { return &___m_LandscapeTexture_2; }
	inline void set_m_LandscapeTexture_2(Texture2D_t3542995729 * value)
	{
		___m_LandscapeTexture_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_LandscapeTexture_2, value);
	}

	inline static int32_t get_offset_of_m_PortraitTexture_3() { return static_cast<int32_t>(offsetof(Placeholder_t1837649965, ___m_PortraitTexture_3)); }
	inline Texture2D_t3542995729 * get_m_PortraitTexture_3() const { return ___m_PortraitTexture_3; }
	inline Texture2D_t3542995729 ** get_address_of_m_PortraitTexture_3() { return &___m_PortraitTexture_3; }
	inline void set_m_PortraitTexture_3(Texture2D_t3542995729 * value)
	{
		___m_PortraitTexture_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_PortraitTexture_3, value);
	}

	inline static int32_t get_offset_of_m_Showing_4() { return static_cast<int32_t>(offsetof(Placeholder_t1837649965, ___m_Showing_4)); }
	inline bool get_m_Showing_4() const { return ___m_Showing_4; }
	inline bool* get_address_of_m_Showing_4() { return &___m_Showing_4; }
	inline void set_m_Showing_4(bool value)
	{
		___m_Showing_4 = value;
	}

	inline static int32_t get_offset_of_m_PlacementId_5() { return static_cast<int32_t>(offsetof(Placeholder_t1837649965, ___m_PlacementId_5)); }
	inline String_t* get_m_PlacementId_5() const { return ___m_PlacementId_5; }
	inline String_t** get_address_of_m_PlacementId_5() { return &___m_PlacementId_5; }
	inline void set_m_PlacementId_5(String_t* value)
	{
		___m_PlacementId_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_PlacementId_5, value);
	}

	inline static int32_t get_offset_of_m_AllowSkip_6() { return static_cast<int32_t>(offsetof(Placeholder_t1837649965, ___m_AllowSkip_6)); }
	inline bool get_m_AllowSkip_6() const { return ___m_AllowSkip_6; }
	inline bool* get_address_of_m_AllowSkip_6() { return &___m_AllowSkip_6; }
	inline void set_m_AllowSkip_6(bool value)
	{
		___m_AllowSkip_6 = value;
	}

	inline static int32_t get_offset_of_OnFinish_7() { return static_cast<int32_t>(offsetof(Placeholder_t1837649965, ___OnFinish_7)); }
	inline EventHandler_1_t3580441194 * get_OnFinish_7() const { return ___OnFinish_7; }
	inline EventHandler_1_t3580441194 ** get_address_of_OnFinish_7() { return &___OnFinish_7; }
	inline void set_OnFinish_7(EventHandler_1_t3580441194 * value)
	{
		___OnFinish_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnFinish_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
