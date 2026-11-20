#include "driver/aarch64_environment.h"

#include "driver/binary128_predefines.h"
#include "native/target.h"

namespace driver {

void configure_aarch64_environment(PreprocessorOptions& options)
{
	const bool darwin = target_model::is_darwin(options.target);
	const bool native_darwin = darwin && options.target == native::host_target() && !options.host_predefines.empty();
	if (!native_darwin)
		options.host_predefines.clear();
	options.hosted = true;
	options.popcnt = false;
	options.sse_level = 0;
	const char* list =
		"struct __va_list { void* __stack; void* __gr_top; void* __vr_top; int __gr_offs; int __vr_offs; };";
	if (darwin)
	{
		options.builtin_declarations = "typedef char* __builtin_va_list;\n";
		if (options.language != SourceLanguage::C)
			options.builtin_declarations += builtin_template_declarations();
	}
	else if (options.language == SourceLanguage::C)
		options.builtin_declarations = std::string(list) + "typedef struct __va_list __builtin_va_list;\n";
	else
		options.builtin_declarations = std::string("namespace std { ") + list +
			"} typedef std::__va_list __builtin_va_list;\n" + builtin_template_declarations();
	// Retain Apple Clang's header configuration for native compilation.
	if (native_darwin)
	{
		options.command_line.insert(0,
			"#undef __x86_64__\n#undef __SSE__\n#undef __SSE2__\n"
			"#undef __linux__\n#undef __linux\n#undef __ELF__\n#undef __gnu_linux__\n");
		return;
	}
	std::string macros = "#undef __x86_64__\n#undef __SSE__\n#undef __SSE2__\n"
						 "#define __aarch64__ 1\n#define __AARCH64EL__ 1\n#define __ARM_ARCH 8\n#define __ARM_NEON 1\n"
						 "#define __ARM_PCS_AAPCS64 1\n"
						 "#define __LONG_MAX__ 9223372036854775807L\n#define __INTMAX_MAX__ 9223372036854775807L\n"
						 "#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1\n#define __GCC_ATOMIC_INT_LOCK_FREE 2\n"
						 "#define __ATOMIC_RELAXED 0\n#define __ATOMIC_CONSUME 1\n#define __ATOMIC_ACQUIRE 2\n"
						 "#define __ATOMIC_RELEASE 3\n#define __ATOMIC_ACQ_REL 4\n#define __ATOMIC_SEQ_CST 5\n"
						 "#define __GCC_CONSTRUCTIVE_SIZE 64\n"
						 "#define __LP64__ 1\n#define _LP64 1\n#define __CHAR_BIT__ 8\n"
						 "#define __SIZEOF_POINTER__ 8\n#define __SIZEOF_LONG__ 8\n#define __SIZEOF_LONG_LONG__ 8\n"
						 "#define __SIZEOF_SHORT__ 2\n#define __SIZEOF_INT__ 4\n#define __SIZEOF_INT128__ 16\n"
						 "#define __SIZEOF_FLOAT__ 4\n#define __SIZEOF_DOUBLE__ 8\n"
						 "#define __INT8_TYPE__ signed char\n#define __UINT8_TYPE__ unsigned char\n"
						 "#define __INT16_TYPE__ short int\n#define __UINT16_TYPE__ short unsigned int\n"
						 "#define __INT32_TYPE__ int\n#define __UINT32_TYPE__ unsigned int\n"
						 "#define __INT32_MAX__ 2147483647\n#define __UINT32_MAX__ 4294967295U\n"
						 "#define __SIZE_TYPE__ long unsigned int\n#define __PTRDIFF_TYPE__ long int\n"
						 "#define __INTPTR_TYPE__ long int\n#define __UINTPTR_TYPE__ long unsigned int\n"
						 "#define __ORDER_LITTLE_ENDIAN__ 1234\n#define __ORDER_BIG_ENDIAN__ 4321\n"
						 "#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__\n";
	macros += kFloatingNumericPredefines;
	if (darwin)
	{
		macros += "#undef __linux__\n#undef __linux\n#undef __ELF__\n#undef __gnu_linux__\n"
				  "#define __APPLE__ 1\n#define __MACH__ 1\n#define __arm64__ 1\n#define __arm64 1\n"
				  "#define __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ 110000\n#define __WCHAR_TYPE__ int\n"
				  "#define __WCHAR_MAX__ 2147483647\n#define __SIZEOF_LONG_DOUBLE__ 8\n"
				  "#define __INT64_TYPE__ long long int\n#define __UINT64_TYPE__ long long unsigned int\n"
				  "#define __INT64_MAX__ 9223372036854775807LL\n#define __UINT64_MAX__ 18446744073709551615ULL\n";
		macros += kBinary64LongDoublePredefines;
		macros += "#define __GCC_DESTRUCTIVE_SIZE 128\n";
	}
	else
	{
		// glibc keeps GNU attributes only when a compiler advertises GNU
		// compatibility. Advertise the GCC 4.8 GNU C++11 header interface.
		macros +=
			"#define __ELF__ 1\n#define __gnu_linux__ 1\n#define __unix__ 1\n"
			"#define __GNUC__ 4\n#define __GNUC_MINOR__ 8\n#define __GNUC_PATCHLEVEL__ 0\n"
			"#define __USER_LABEL_PREFIX__\n"
			"#define __WCHAR_TYPE__ unsigned int\n#define __WCHAR_UNSIGNED__ 1\n#define __WCHAR_MAX__ 4294967295U\n"
			"#define __SIZEOF_LONG_DOUBLE__ 16\n"
			"#define __INT64_TYPE__ long int\n#define __UINT64_TYPE__ long unsigned int\n"
			"#define __INT64_MAX__ 9223372036854775807L\n#define __UINT64_MAX__ 18446744073709551615UL\n";
		macros += kBinary128NumericPredefines;
		macros += "#define __GCC_DESTRUCTIVE_SIZE 256\n";
		if (options.language != SourceLanguage::C)
			macros += "#define _GNU_SOURCE 1\n#define __GNUG__ 4\n#define __GXX_WEAK__ 1\n";
	}
	options.command_line.insert(0, macros);
}

void add_aarch64_headers(PreprocessorOptions& options, const std::string& sysroot,
	const std::string& resource_directory, StandardIncludes includes)
{
	if (includes == StandardIncludes::None)
		return;
	if (!resource_directory.empty())
		options.system_include_paths.push_back(resource_directory + "/include");
	if (!sysroot.empty())
	{
		if (target_model::is_darwin(options.target))
		{
			if (includes == StandardIncludes::All && options.language != SourceLanguage::C)
				options.system_include_paths.push_back(sysroot + "/usr/include/c++/v1");
		}
		else
			options.system_include_paths.push_back(sysroot + "/usr/include/aarch64-linux-gnu");
		options.system_include_paths.push_back(sysroot + "/usr/include");
		options.system_include_paths.push_back(sysroot + "/include");
	}
}

} // namespace driver
