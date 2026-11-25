#include "driver/integer_predefines.h"

#include "types/fundamental_type.h"

namespace driver {
namespace {

struct Integer
{
	FundamentalType type;
	const char* suffix;
	const char* format_length;
	bool is_unsigned;
};

// Narrow unsigned constant macros have type int after integer promotion.
constexpr Integer kSignedChar{ FundamentalType::SignedChar, "", "hh", false };
constexpr Integer kUnsignedChar{ FundamentalType::UnsignedChar, "", "hh", true };
constexpr Integer kShort{ FundamentalType::ShortInt, "", "h", false };
constexpr Integer kUnsignedShort{ FundamentalType::UnsignedShortInt, "", "h", true };
constexpr Integer kInt{ FundamentalType::Int, "", "", false };
constexpr Integer kUnsignedInt{ FundamentalType::UnsignedInt, "U", "", true };
constexpr Integer kLong{ FundamentalType::LongInt, "L", "l", false };
constexpr Integer kUnsignedLong{ FundamentalType::UnsignedLongInt, "UL", "l", true };
constexpr Integer kLongLong{ FundamentalType::LongLongInt, "LL", "ll", false };
constexpr Integer kUnsignedLongLong{ FundamentalType::UnsignedLongLongInt, "ULL", "ll", true };

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

void formatted_integer_role(std::string& text, const std::string& role, Integer integer, target_model::Target target)
{
	integer_role(text, role, integer, target);
	// Clang-style WASI headers use these for both input and output.
	if (!target_model::is_wasm(target))
		return;
	const std::string prefix = "#define __" + role + "_FMT";
	for (const char* specifier = integer.is_unsigned ? "Xoux" : "di"; *specifier; ++specifier)
	{
		text.append(prefix).push_back(*specifier);
		text.append("__ \"").append(integer.format_length).push_back(*specifier);
		text.append("\"\n");
	}
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
	formatted_integer_role(text, "INT" + suffix, signed_type, target);
	formatted_integer_role(text, "UINT" + suffix, unsigned_type, target);
	formatted_integer_role(text, "INT_LEAST" + suffix, signed_type, target);
	formatted_integer_role(text, "UINT_LEAST" + suffix, unsigned_type, target);
	formatted_integer_role(text, "INT_FAST" + suffix, signed_type, target);
	formatted_integer_role(text, "UINT_FAST" + suffix, unsigned_type, target);
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
	text.reserve(target_model::is_wasm(target) ? 8192 : 4096);
	fixed_width(text, "8", kSignedChar, kUnsignedChar, target);
	fixed_width(text, "16", kShort, kUnsignedShort, target);
	fixed_width(text, "32", kInt, kUnsignedInt, target);
	fixed_width(
		text, "64", use_long_long ? kLongLong : kLong, use_long_long ? kUnsignedLongLong : kUnsignedLong, target);
	formatted_integer_role(text, "INTMAX", intmax, target);
	formatted_integer_role(text, "UINTMAX", uintmax, target);
	integer_constant(text, "INTMAX", intmax);
	integer_constant(text, "UINTMAX", uintmax);

	const bool i386 = target_model::is_i386(target);
	formatted_integer_role(text, "INTPTR", i386 ? kInt : kLong, target);
	formatted_integer_role(text, "UINTPTR", i386 ? kUnsignedInt : kUnsignedLong, target);
	formatted_integer_role(text, "PTRDIFF", i386 ? kInt : kLong, target);
	formatted_integer_role(text, "SIZE", i386 ? kUnsignedInt : kUnsignedLong, target);
	const std::string pointer_bytes = std::to_string(layout.pointer_bytes);
	define(text, "__SIZEOF_POINTER__", pointer_bytes);
	define(text, "__SIZEOF_SIZE_T__", pointer_bytes);
	define(text, "__SIZEOF_PTRDIFF_T__", pointer_bytes);

	wide_character(text, "WCHAR", target == target_model::Target::AArch64Linux ? kUnsignedInt : kInt, target);
	const bool linux_target = target_model::describe(target).environment == target_model::Environment::Linux;
	wide_character(text, "WINT", linux_target ? kUnsignedInt : kInt, target);
	define(text, "__CHAR16_TYPE__", FundamentalTypeName(kUnsignedShort.type));
	define(text, "__CHAR32_TYPE__", FundamentalTypeName(kUnsignedInt.type));
	integer_range(text, "SIG_ATOMIC", target_model::is_wasm(target) ? kLong : kInt, target);
	const std::string char_width = std::to_string(integer_width(kSignedChar, target));
	define(text, "__CHAR_BIT__", char_width);
	define(text, "__SCHAR_WIDTH__", char_width);
	define(text, "__BOOL_WIDTH__", "1");
	define(text, "__SCHAR_MAX__", maximum(kSignedChar, target));
	define(text, "__SHRT_MAX__", maximum(kShort, target));
	define(text, "__INT_MAX__", maximum(kInt, target));
	define(text, "__LONG_MAX__", maximum(kLong, target));
	define(text, "__LONG_LONG_MAX__", maximum(kLongLong, target));
	define(text, "__SHRT_WIDTH__", std::to_string(integer_width(kShort, target)));
	define(text, "__INT_WIDTH__", std::to_string(integer_width(kInt, target)));
	define(text, "__LONG_WIDTH__", std::to_string(integer_width(kLong, target)));
	// GCC and Clang resource headers spell this width differently.
	const std::string long_long_width = std::to_string(integer_width(kLongLong, target));
	define(text, "__LONG_LONG_WIDTH__", long_long_width);
	define(text, "__LLONG_WIDTH__", long_long_width);
	define(text, "__SIZEOF_SHORT__", std::to_string(FundamentalTypeSize(kShort.type, target)));
	define(text, "__SIZEOF_INT__", std::to_string(FundamentalTypeSize(kInt.type, target)));
	define(text, "__SIZEOF_LONG__", std::to_string(layout.long_bytes));
	define(text, "__SIZEOF_LONG_LONG__", std::to_string(FundamentalTypeSize(kLongLong.type, target)));
	return text;
}

} // namespace

const std::string& target_integer_predefines(target_model::Target target)
{
	if (target_model::is_i386(target))
	{
		static const std::string i386 = integer_predefines(target_model::Target::I386Linux);
		return i386;
	}
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
