#include "driver/integer_predefines.h"

#include "types/fundamental_type.h"

namespace driver {
namespace {

struct Integer
{
	FundamentalType type;
	const char* suffix;
	bool is_unsigned;
};

// Narrow unsigned constant macros have type int after integer promotion.
constexpr Integer kSignedChar{ FundamentalType::SignedChar, "", false };
constexpr Integer kUnsignedChar{ FundamentalType::UnsignedChar, "", true };
constexpr Integer kShort{ FundamentalType::ShortInt, "", false };
constexpr Integer kUnsignedShort{ FundamentalType::UnsignedShortInt, "", true };
constexpr Integer kInt{ FundamentalType::Int, "", false };
constexpr Integer kUnsignedInt{ FundamentalType::UnsignedInt, "U", true };
constexpr Integer kLong{ FundamentalType::LongInt, "L", false };
constexpr Integer kUnsignedLong{ FundamentalType::UnsignedLongInt, "UL", true };
constexpr Integer kLongLong{ FundamentalType::LongLongInt, "LL", false };
constexpr Integer kUnsignedLongLong{ FundamentalType::UnsignedLongLongInt, "ULL", true };

unsigned integer_width(Integer integer, target_model::Target target)
{
	return FundamentalTypeSize(integer.type, target) * 8;
}

std::string maximum(Integer integer, target_model::Target target)
{
	const unsigned value_bits = integer_width(integer, target) - !integer.is_unsigned;
	return std::to_string(uint64_t(-1) >> (64 - value_bits)) + integer.suffix;
}

void define(std::string& text, const std::string& name, const std::string& value)
{
	text.append("#define ").append(name).push_back(' ');
	text.append(value).push_back('\n');
}

void integer_role(std::string& text, const std::string& role, Integer integer, target_model::Target target)
{
	const std::string prefix = "__" + role;
	define(text, prefix + "_TYPE__", FundamentalTypeName(integer.type));
	define(text, prefix + "_WIDTH__", std::to_string(integer_width(integer, target)));
	define(text, prefix + "_MAX__", maximum(integer, target));
}

void integer_constant(std::string& text, const std::string& role, Integer integer)
{
	const std::string prefix = "__" + role;
	define(text, prefix + "_C_SUFFIX__", integer.suffix);
	define(text, prefix + "_C(c)", *integer.suffix == '\0' ? "c" : std::string("c ## ") + integer.suffix);
}

void fixed_width(
	std::string& text, const char* width, Integer signed_type, Integer unsigned_type, target_model::Target target)
{
	const std::string suffix = width;
	integer_role(text, "INT" + suffix, signed_type, target);
	integer_role(text, "UINT" + suffix, unsigned_type, target);
	integer_role(text, "INT_LEAST" + suffix, signed_type, target);
	integer_role(text, "UINT_LEAST" + suffix, unsigned_type, target);
	integer_role(text, "INT_FAST" + suffix, signed_type, target);
	integer_role(text, "UINT_FAST" + suffix, unsigned_type, target);
	integer_constant(text, "INT" + suffix, signed_type);
	integer_constant(text, "UINT" + suffix, unsigned_type);
}

void integer_range(std::string& text, const std::string& role, Integer integer, target_model::Target target)
{
	integer_role(text, role, integer, target);
	define(text, "__" + role + "_MIN__", integer.is_unsigned ? "0U" : "(-" + maximum(integer, target) + " - 1)");
}

void wide_character(std::string& text, const std::string& role, Integer integer, target_model::Target target)
{
	integer_range(text, role, integer, target);
	if (integer.is_unsigned)
		define(text, "__" + role + "_UNSIGNED__", "1");
	else
		text += "#undef __" + role + "_UNSIGNED__\n";
}

std::string integer_predefines(target_model::Target target)
{
	const auto layout = target_model::data_layout(target);
	const bool use_long_long = target_model::is_darwin(target) || layout.long_bytes == 4;
	const Integer intmax = layout.long_bytes == 4 ? kLongLong : kLong;
	const Integer uintmax = layout.long_bytes == 4 ? kUnsignedLongLong : kUnsignedLong;
	std::string text;
	text.reserve(4096);
	fixed_width(text, "8", kSignedChar, kUnsignedChar, target);
	fixed_width(text, "16", kShort, kUnsignedShort, target);
	fixed_width(text, "32", kInt, kUnsignedInt, target);
	fixed_width(
		text, "64", use_long_long ? kLongLong : kLong, use_long_long ? kUnsignedLongLong : kUnsignedLong, target);
	integer_role(text, "INTMAX", intmax, target);
	integer_role(text, "UINTMAX", uintmax, target);
	integer_constant(text, "INTMAX", intmax);
	integer_constant(text, "UINTMAX", uintmax);

	// long is the pointer-sized integer on the supported LP64 and wasm32 ABIs.
	integer_role(text, "INTPTR", kLong, target);
	integer_role(text, "UINTPTR", kUnsignedLong, target);
	integer_role(text, "PTRDIFF", kLong, target);
	integer_role(text, "SIZE", kUnsignedLong, target);
	const std::string pointer_bytes = std::to_string(layout.pointer_bytes);
	define(text, "__SIZEOF_POINTER__", pointer_bytes);
	define(text, "__SIZEOF_SIZE_T__", pointer_bytes);
	define(text, "__SIZEOF_PTRDIFF_T__", pointer_bytes);

	wide_character(text, "WCHAR", target == target_model::Target::AArch64Linux ? kUnsignedInt : kInt, target);
	const bool linux_target = target == target_model::Target::Linux || target == target_model::Target::AArch64Linux;
	wide_character(text, "WINT", linux_target ? kUnsignedInt : kInt, target);
	define(text, "__CHAR16_TYPE__", FundamentalTypeName(kUnsignedShort.type));
	define(text, "__CHAR32_TYPE__", FundamentalTypeName(kUnsignedInt.type));
	integer_range(text, "SIG_ATOMIC", target_model::is_wasm(target) ? kLong : kInt, target);
	define(text, "__CHAR_BIT__", "8");
	define(text, "__BOOL_WIDTH__", "1");
	define(text, "__SCHAR_MAX__", maximum(kSignedChar, target));
	define(text, "__SHRT_MAX__", maximum(kShort, target));
	define(text, "__INT_MAX__", maximum(kInt, target));
	define(text, "__LONG_MAX__", maximum(kLong, target));
	define(text, "__LONG_LONG_MAX__", maximum(kLongLong, target));
	define(text, "__SHRT_WIDTH__", std::to_string(integer_width(kShort, target)));
	define(text, "__INT_WIDTH__", std::to_string(integer_width(kInt, target)));
	define(text, "__LONG_WIDTH__", std::to_string(integer_width(kLong, target)));
	define(text, "__LLONG_WIDTH__", std::to_string(integer_width(kLongLong, target)));
	define(text, "__SIZEOF_SHORT__", std::to_string(FundamentalTypeSize(kShort.type, target)));
	define(text, "__SIZEOF_INT__", std::to_string(FundamentalTypeSize(kInt.type, target)));
	define(text, "__SIZEOF_LONG__", std::to_string(layout.long_bytes));
	define(text, "__SIZEOF_LONG_LONG__", std::to_string(FundamentalTypeSize(kLongLong.type, target)));
	return text;
}

} // namespace

const std::string& target_integer_predefines(target_model::Target target)
{
	if (target_model::is_wasm(target))
	{
		static const std::string wasm = integer_predefines(target_model::Target::Wasm32);
		return wasm;
	}
	if (target_model::is_darwin(target))
	{
		static const std::string darwin = integer_predefines(target_model::Target::MacOS);
		return darwin;
	}
	if (target == target_model::Target::AArch64Linux)
	{
		static const std::string aarch64 = integer_predefines(target_model::Target::AArch64Linux);
		return aarch64;
	}
	static const std::string x86_64 = integer_predefines(target_model::Target::Linux);
	return x86_64;
}

} // namespace driver
