#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// ConfigXmlTextReader
struct ConfigXmlTextReader_t3212066157;
// System.IO.Stream
struct Stream_t3255436806;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t1561828458;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_IO_TextReader1561828458.h"

// System.Void ConfigXmlTextReader::.ctor(System.IO.Stream,System.String)
extern "C"  void ConfigXmlTextReader__ctor_m965728314 (ConfigXmlTextReader_t3212066157 * __this, Stream_t3255436806 * ___s0, String_t* ___fileName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConfigXmlTextReader::.ctor(System.IO.TextReader,System.String)
extern "C"  void ConfigXmlTextReader__ctor_m2778808542 (ConfigXmlTextReader_t3212066157 * __this, TextReader_t1561828458 * ___input0, String_t* ___fileName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ConfigXmlTextReader::get_Filename()
extern "C"  String_t* ConfigXmlTextReader_get_Filename_m3902945538 (ConfigXmlTextReader_t3212066157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
