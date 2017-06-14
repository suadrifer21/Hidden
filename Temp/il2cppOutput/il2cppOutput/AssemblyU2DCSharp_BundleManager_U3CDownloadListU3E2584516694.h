#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.WWW
struct WWW_t2919945039;
// UnityEngine.TextAsset
struct TextAsset_t3973159845;
// BundleManager
struct BundleManager_t1368323489;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BundleManager/<DownloadList>c__Iterator1
struct  U3CDownloadListU3Ec__Iterator1_t2584516694  : public Il2CppObject
{
public:
	// UnityEngine.WWW BundleManager/<DownloadList>c__Iterator1::<www>__0
	WWW_t2919945039 * ___U3CwwwU3E__0_0;
	// UnityEngine.TextAsset BundleManager/<DownloadList>c__Iterator1::<asset>__1
	TextAsset_t3973159845 * ___U3CassetU3E__1_1;
	// BundleManager BundleManager/<DownloadList>c__Iterator1::$this
	BundleManager_t1368323489 * ___U24this_2;
	// System.Object BundleManager/<DownloadList>c__Iterator1::$current
	Il2CppObject * ___U24current_3;
	// System.Boolean BundleManager/<DownloadList>c__Iterator1::$disposing
	bool ___U24disposing_4;
	// System.Int32 BundleManager/<DownloadList>c__Iterator1::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U3CwwwU3E__0_0() { return static_cast<int32_t>(offsetof(U3CDownloadListU3Ec__Iterator1_t2584516694, ___U3CwwwU3E__0_0)); }
	inline WWW_t2919945039 * get_U3CwwwU3E__0_0() const { return ___U3CwwwU3E__0_0; }
	inline WWW_t2919945039 ** get_address_of_U3CwwwU3E__0_0() { return &___U3CwwwU3E__0_0; }
	inline void set_U3CwwwU3E__0_0(WWW_t2919945039 * value)
	{
		___U3CwwwU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CwwwU3E__0_0, value);
	}

	inline static int32_t get_offset_of_U3CassetU3E__1_1() { return static_cast<int32_t>(offsetof(U3CDownloadListU3Ec__Iterator1_t2584516694, ___U3CassetU3E__1_1)); }
	inline TextAsset_t3973159845 * get_U3CassetU3E__1_1() const { return ___U3CassetU3E__1_1; }
	inline TextAsset_t3973159845 ** get_address_of_U3CassetU3E__1_1() { return &___U3CassetU3E__1_1; }
	inline void set_U3CassetU3E__1_1(TextAsset_t3973159845 * value)
	{
		___U3CassetU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CassetU3E__1_1, value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CDownloadListU3Ec__Iterator1_t2584516694, ___U24this_2)); }
	inline BundleManager_t1368323489 * get_U24this_2() const { return ___U24this_2; }
	inline BundleManager_t1368323489 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(BundleManager_t1368323489 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_2, value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CDownloadListU3Ec__Iterator1_t2584516694, ___U24current_3)); }
	inline Il2CppObject * get_U24current_3() const { return ___U24current_3; }
	inline Il2CppObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(Il2CppObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CDownloadListU3Ec__Iterator1_t2584516694, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CDownloadListU3Ec__Iterator1_t2584516694, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
