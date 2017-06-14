#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t2048066811;

#include "mscorlib_System_Array3829468939.h"
#include "System_Configuration_System_Configuration_Configur2048066811.h"

#pragma once
// System.Configuration.ConfigurationProperty[]
struct ConfigurationPropertyU5BU5D_t3364493498  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) ConfigurationProperty_t2048066811 * m_Items[1];

public:
	inline ConfigurationProperty_t2048066811 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConfigurationProperty_t2048066811 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConfigurationProperty_t2048066811 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ConfigurationProperty_t2048066811 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConfigurationProperty_t2048066811 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConfigurationProperty_t2048066811 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
