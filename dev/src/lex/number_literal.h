#pragma once

#include <cstdint>
#include <string>

#include "types/fundamental_type.h"

// The phase-7 form of a pp-number ([lex.icon] 2.14.2, [lex.fcon] 2.14.4,
// [lex.ext] 2.14.8).
enum class NumberLiteralKind : uint8_t
{
	Invalid,
	Integer,
	Floating,
	UserDefinedInteger,
	UserDefinedFloating
};

struct NumberLiteral
{
	NumberLiteralKind kind;
	// Integer and Floating: the literal's type.
	FundamentalType type;
	// UserDefined*: where the ud-suffix begins. Floating: where the
	// floating-suffix begins, that is, the end of the text of the value.
	uint32_t suffix_begin;
	// Integer: the value.
	uint64_t integer;
};

// The literal forms a reader accepts: C++11's grammars alone (the
// standalone PA2-PA4 tools, which reject the GNU forms below: 2.14.2,
// 2.14.4); GCC's dialect too (binary literals, hexadecimal floating
// literals, the q/Q and f16 ... f64x suffixes) as the compiler reads it,
// q/Q naming __float128 as in GCC; or that dialect with the course's
// preprocessor stream conventions (cppgm -E). Numeric types agree in
// both GNU modes; strict C++11 tools still reject GNU literal forms.
namespace number_syntax {

enum Feature : uint8_t
{
	Binary = 1 << 0,
	Separators = 1 << 1,
	HexFloat = 1 << 2,
	ExtendedFloat = 1 << 3,
	ReservedSuffix = 1 << 4,
	GnuCharacter = 1 << 5,
	Hosted = ExtendedFloat | ReservedSuffix | GnuCharacter
};

} // namespace number_syntax

enum class NumberDialect : uint8_t
{
	Cxx11 = 0,
	Cxx14 = number_syntax::Binary | number_syntax::Separators,
	Cxx17 = static_cast<uint8_t>(Cxx14) | number_syntax::HexFloat,
	Gnu = static_cast<uint8_t>(Cxx17) | number_syntax::Hosted,
	GnuStream = static_cast<uint8_t>(Gnu) & ~number_syntax::ReservedSuffix,
	HostedCxx11 = static_cast<uint8_t>(Gnu) & ~number_syntax::Separators,
	StrictHostedCxx11 = number_syntax::Hosted,
	StrictHostedCxx14 = static_cast<uint8_t>(Cxx14) | number_syntax::Hosted
};

inline bool HasNumberSyntax(NumberDialect dialect, number_syntax::Feature feature)
{
	return (static_cast<uint8_t>(dialect) & feature) != 0;
}

inline NumberDialect NumberStreamDialect(NumberDialect dialect)
{
	return static_cast<NumberDialect>(static_cast<uint8_t>(dialect) & ~number_syntax::ReservedSuffix);
}

// Classifies a pp-number spelling. An integer literal also gets its value
// and its type from [lex.icon] 2.14.2 Table 6; one that no type in its list
// can represent is Invalid. A floating literal's value is scanned separately
// by ScanFloatingValue.
NumberLiteral ClassifyNumber(const char* spelling, uint32_t length, NumberDialect dialect = NumberDialect::Gnu,
	target_model::Target target = target_model::Target::Linux);

// The value of a user-defined-integer-literal's digits (its spelling
// before the ud-suffix at `suffix_begin`) as `n ULL` has it (2.14.8p3):
// decimal, octal or hexadecimal; false if unsigned long long cannot
// represent it.
bool UserIntegerValue(const char* spelling, uint32_t suffix_begin, uint64_t& value);

// Scans the value of a floating literal of `type` (a standard or extended
// floating type) from `text`, its spelling without the floating-suffix,
// into `bytes`: FundamentalTypeSize(type) bytes in the x86-64
// representation, with the padding of long double zeroed. Returns false if the value is
// outside the range of the type ([lex.fcon] 2.14.4p1). `scratch` receives
// the NUL-terminated copy of `text` that the C library scanner needs.
bool ScanFloatingValue(const char* text, uint32_t length, FundamentalType type, std::string& scratch,
	unsigned char* bytes, target_model::Target target = target_model::Target::Linux);
