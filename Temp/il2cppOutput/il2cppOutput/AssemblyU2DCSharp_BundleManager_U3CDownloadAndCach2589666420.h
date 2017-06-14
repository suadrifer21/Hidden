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

// BundleManager/<DownloadAndCache>c__Iterator2
struct  U3CDownloadAndCacheU3Ec__Iterator2_t2589666420  : public Il2CppObject
{
public:
	// UnityEngine.WWW BundleManager/<DownloadAndCache>c__Iterator2::<download>__0
	WWW_t2919945039 * ___U3CdownloadU3E__0_0;
	// BundleManager BundleManager/<DownloadAndCache>c__Iterator2::$this
	BundleManager_t1368323489 * ___U24this_1;
	// System.Object BundleManager/<DownloadAndCache>c__Iterator2::$current
	Il2CppObject * ___U24current_2;
	// System.Boolean BundleManager/<DownloadAndCache>c__Iterator2::$disposing
	bool ___U24disposing_3;
	// System.Int32 BundleManager/<DownloadAndCache>c__Iterator2::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_U3CdownloadU3E__0_0() { return static_cast<int32_t>(offsetof(U3CDownloadAndCacheU3Ec__Iterator2_t2589666420, ___U3CdownloadU3E__0_0)); }
	inline WWW_t2919945039 * get_U3CdownloadU3E__0_0() const { return ___U3CdownloadU3E__0_0; }
	inline WWW_t2919945039 ** get_address_of_U3CdownloadU3E__0_0() { return &___U3CdownloadU3E__0_0; }
	inline void set_U3CdownloadU3E__0_0(WWW_t2919945039 * value)
	{
		___U3CdownloadU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CdownloadU3E__0_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CDownloadAndCacheU3Ec__Iterator2_t2589666420, ___U24this_1)); }
	inline BundleManager_t1368323489 * get_U24this_1() const { return ___U24this_1; }
	inline BundleManager_t1368323489 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(BundleManager_t1368323489 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CDownloadAndCacheU3Ec__Iterator2_t2589666420, ___U24current_2)); }
	inline Il2CppObject * get_U24current_2() const { return ___U24current_2; }
	inline Il2CppObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(Il2CppObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_2, value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CDownloadAndCacheU3Ec__Iterator2_t2589666420, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CDownloadAndCacheU3Ec__Iterator2_t2589666420, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
