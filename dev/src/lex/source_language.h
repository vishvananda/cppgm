#pragma once

#include <cstdint>

// The input language is independent of the output target and of a C++
// declaration's language linkage (extern "C").
enum class SourceLanguage : uint8_t
{
	Cxx,
	C
};

enum class CEdition : uint8_t
{
	C90,
	C95,
	C99,
	C11,
	C17,
	C23
};
