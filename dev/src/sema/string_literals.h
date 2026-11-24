#pragma once

#include <cstdint>
#include <vector>

#include "lex/string_literal_value.h"
#include "lex/token_spelling.h"
#include "types/fundamental_type.h"

namespace syntax {
struct Expr;
struct LiteralExpr;
}

namespace sema {

struct Type;

// Whether an array of this element type is a character array, one a
// string literal initializes by its code units (8.5.2p1).
// Includes the underlying integer types of C prefixed literals. Semantic
// initialization still requires the literal's actual element type to match.
bool IsCharacterArrayElement(const Type* type);

// C's prefixed literals use the compatible integer typedef types, rather
// than C++'s distinct wchar_t/char16_t/char32_t fundamental types.
inline FundamentalType CCharacterType(FundamentalType type, target_model::Target target)
{
	return type == FundamentalType::WcharT
		? (target == target_model::Target::AArch64Linux ? FundamentalType::UnsignedInt : FundamentalType::Int)
		: type == FundamentalType::Char8T  ? FundamentalType::UnsignedChar
		: type == FundamentalType::Char16T ? FundamentalType::UnsignedShortInt
		: type == FundamentalType::Char32T ? FundamentalType::UnsignedInt
										   : type;
}

// The array a string literal denotes (2.14.5p8, p13-p15): its element type
// from the encoding prefix, and its length in code units of that encoding
// with the terminating null. A literal of concatenated pieces is spelled
// with single spaces between them.
struct StringLiteralFacts
{
	FundamentalType element;
	// Numeric escapes are forbidden in an unevaluated attribute string.
	bool numeric_escapes;
	uint64_t units;
	// A user-defined string literal's ud-suffix (2.14.8p8: the pieces'
	// suffixes agree), else empty.
	const char* suffix;
	uint32_t suffix_length;
};

// Input has passed lexical validation for its source dialect; decode any
// conditional escapes accepted there without repeating dialect checks.
// False for a malformed literal, pieces with different encoding prefixes
// or different ud-suffixes.
bool AnalyzeStringLiteral(const TokenSpelling& spelling, StringLiteralFacts& out, bool cxx20 = false);

bool AnalyzeStringLiteral(const syntax::LiteralExpr& literal, StringLiteralFacts& out, bool cxx20 = false);

// Also the code units' values, the terminating null included.
bool StringLiteralUnits(const TokenSpelling& spelling, StringLiteralFacts& out, std::vector<uint64_t>& units);

// Borrow the token converter's compact code units or the caller's
// scratch storage when a literal has only a spelling.
class StringCodeUnits
{
public:
	StringCodeUnits() = default;
	explicit StringCodeUnits(const StringLiteralValue& value) : encoded_(&value), count_(value.count) {}
	explicit StringCodeUnits(const std::vector<uint64_t>& units) : wide_(units.data()), count_(units.size()) {}

	explicit operator bool() const { return count_ != 0; }
	std::size_t size() const { return count_; }
	uint64_t operator[](std::size_t index) const { return encoded_ != nullptr ? encoded_->unit(index) : wide_[index]; }

private:
	const StringLiteralValue* encoded_ = nullptr;
	const uint64_t* wide_ = nullptr;
	std::size_t count_ = 0;
};

StringCodeUnits ReadStringCodeUnits(
	const syntax::LiteralExpr& literal, std::vector<uint64_t>& scratch, StringLiteralFacts* facts = nullptr);

// GCC's __builtin_nan[f|l](text) of floating type `type`: a quiet NaN
// whose significand holds, below its quiet bit, the number a string
// literal `text` spells as strtoull reads it (a 0x or 0 prefix selecting
// the base); 0 for other text. As a long double whose conversion to the
// type keeps those bits.
long double BuiltinNan(FundamentalType type, const syntax::Expr& text);
// The payload number `text` spells that way (0 for other text).
uint64_t BuiltinNanPayload(const syntax::Expr& text);
// Whether `text` is a string literal GCC folds a NaN of (its payload
// read as above): an ordinary literal of the number's digits, optionally
// after white space and a sign.
bool BuiltinNanText(const syntax::Expr& text, uint64_t& payload);
// GCC's __builtin_nans[f|l](text): a signaling NaN, its quiet bit clear and
// the payload below it (the bit below the quiet bit for none), as a long
// double whose bit-preserving narrowing (lowir::float_literal) keeps them.
long double BuiltinSignalingNan(FundamentalType type, const syntax::Expr& text);

} // namespace sema
