#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// HogScene/Layer[]
struct LayerU5BU5D_t1361142565;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HogScene
struct  HogScene_t1756825486  : public Il2CppObject
{
public:
	// HogScene/Layer[] HogScene::layers
	LayerU5BU5D_t1361142565* ___layers_0;

public:
	inline static int32_t get_offset_of_layers_0() { return static_cast<int32_t>(offsetof(HogScene_t1756825486, ___layers_0)); }
	inline LayerU5BU5D_t1361142565* get_layers_0() const { return ___layers_0; }
	inline LayerU5BU5D_t1361142565** get_address_of_layers_0() { return &___layers_0; }
	inline void set_layers_0(LayerU5BU5D_t1361142565* value)
	{
		___layers_0 = value;
		Il2CppCodeGenWriteBarrier(&___layers_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
