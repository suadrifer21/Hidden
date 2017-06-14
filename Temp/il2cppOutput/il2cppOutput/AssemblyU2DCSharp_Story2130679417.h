#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Story
struct Story_t2130679417;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t356221433;
// System.Collections.Generic.List`1<StoryContent>
struct List_1_t4179021574;
// System.Collections.Generic.List`1<AchievementContent>
struct List_1_t3415203900;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Story
struct  Story_t2130679417  : public MonoBehaviour_t1158329972
{
public:
	// System.String Story::storyChapter
	String_t* ___storyChapter_3;
	// UnityEngine.UI.Text Story::storyPanel
	Text_t356221433 * ___storyPanel_4;
	// System.Collections.Generic.List`1<StoryContent> Story::storyContentList
	List_1_t4179021574 * ___storyContentList_5;
	// System.String Story::storyText
	String_t* ___storyText_6;
	// System.String Story::story
	String_t* ___story_7;
	// System.Int32 Story::n
	int32_t ___n_8;
	// System.String Story::achiChapter
	String_t* ___achiChapter_9;
	// System.Collections.Generic.List`1<AchievementContent> Story::achiContentList
	List_1_t3415203900 * ___achiContentList_10;
	// System.Boolean Story::hideStory
	bool ___hideStory_11;
	// System.Boolean Story::showTuts
	bool ___showTuts_12;

public:
	inline static int32_t get_offset_of_storyChapter_3() { return static_cast<int32_t>(offsetof(Story_t2130679417, ___storyChapter_3)); }
	inline String_t* get_storyChapter_3() const { return ___storyChapter_3; }
	inline String_t** get_address_of_storyChapter_3() { return &___storyChapter_3; }
	inline void set_storyChapter_3(String_t* value)
	{
		___storyChapter_3 = value;
		Il2CppCodeGenWriteBarrier(&___storyChapter_3, value);
	}

	inline static int32_t get_offset_of_storyPanel_4() { return static_cast<int32_t>(offsetof(Story_t2130679417, ___storyPanel_4)); }
	inline Text_t356221433 * get_storyPanel_4() const { return ___storyPanel_4; }
	inline Text_t356221433 ** get_address_of_storyPanel_4() { return &___storyPanel_4; }
	inline void set_storyPanel_4(Text_t356221433 * value)
	{
		___storyPanel_4 = value;
		Il2CppCodeGenWriteBarrier(&___storyPanel_4, value);
	}

	inline static int32_t get_offset_of_storyContentList_5() { return static_cast<int32_t>(offsetof(Story_t2130679417, ___storyContentList_5)); }
	inline List_1_t4179021574 * get_storyContentList_5() const { return ___storyContentList_5; }
	inline List_1_t4179021574 ** get_address_of_storyContentList_5() { return &___storyContentList_5; }
	inline void set_storyContentList_5(List_1_t4179021574 * value)
	{
		___storyContentList_5 = value;
		Il2CppCodeGenWriteBarrier(&___storyContentList_5, value);
	}

	inline static int32_t get_offset_of_storyText_6() { return static_cast<int32_t>(offsetof(Story_t2130679417, ___storyText_6)); }
	inline String_t* get_storyText_6() const { return ___storyText_6; }
	inline String_t** get_address_of_storyText_6() { return &___storyText_6; }
	inline void set_storyText_6(String_t* value)
	{
		___storyText_6 = value;
		Il2CppCodeGenWriteBarrier(&___storyText_6, value);
	}

	inline static int32_t get_offset_of_story_7() { return static_cast<int32_t>(offsetof(Story_t2130679417, ___story_7)); }
	inline String_t* get_story_7() const { return ___story_7; }
	inline String_t** get_address_of_story_7() { return &___story_7; }
	inline void set_story_7(String_t* value)
	{
		___story_7 = value;
		Il2CppCodeGenWriteBarrier(&___story_7, value);
	}

	inline static int32_t get_offset_of_n_8() { return static_cast<int32_t>(offsetof(Story_t2130679417, ___n_8)); }
	inline int32_t get_n_8() const { return ___n_8; }
	inline int32_t* get_address_of_n_8() { return &___n_8; }
	inline void set_n_8(int32_t value)
	{
		___n_8 = value;
	}

	inline static int32_t get_offset_of_achiChapter_9() { return static_cast<int32_t>(offsetof(Story_t2130679417, ___achiChapter_9)); }
	inline String_t* get_achiChapter_9() const { return ___achiChapter_9; }
	inline String_t** get_address_of_achiChapter_9() { return &___achiChapter_9; }
	inline void set_achiChapter_9(String_t* value)
	{
		___achiChapter_9 = value;
		Il2CppCodeGenWriteBarrier(&___achiChapter_9, value);
	}

	inline static int32_t get_offset_of_achiContentList_10() { return static_cast<int32_t>(offsetof(Story_t2130679417, ___achiContentList_10)); }
	inline List_1_t3415203900 * get_achiContentList_10() const { return ___achiContentList_10; }
	inline List_1_t3415203900 ** get_address_of_achiContentList_10() { return &___achiContentList_10; }
	inline void set_achiContentList_10(List_1_t3415203900 * value)
	{
		___achiContentList_10 = value;
		Il2CppCodeGenWriteBarrier(&___achiContentList_10, value);
	}

	inline static int32_t get_offset_of_hideStory_11() { return static_cast<int32_t>(offsetof(Story_t2130679417, ___hideStory_11)); }
	inline bool get_hideStory_11() const { return ___hideStory_11; }
	inline bool* get_address_of_hideStory_11() { return &___hideStory_11; }
	inline void set_hideStory_11(bool value)
	{
		___hideStory_11 = value;
	}

	inline static int32_t get_offset_of_showTuts_12() { return static_cast<int32_t>(offsetof(Story_t2130679417, ___showTuts_12)); }
	inline bool get_showTuts_12() const { return ___showTuts_12; }
	inline bool* get_address_of_showTuts_12() { return &___showTuts_12; }
	inline void set_showTuts_12(bool value)
	{
		___showTuts_12 = value;
	}
};

struct Story_t2130679417_StaticFields
{
public:
	// Story Story::instance
	Story_t2130679417 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(Story_t2130679417_StaticFields, ___instance_2)); }
	inline Story_t2130679417 * get_instance_2() const { return ___instance_2; }
	inline Story_t2130679417 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(Story_t2130679417 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
