#include "driver/host_environment.h"
#include "driver/aarch64_environment.h"
#include "driver/integer_predefines.h"

#include <dirent.h>
#include <sys/stat.h>
#include <unistd.h>

#include <algorithm>
#include <cstring>
#include <string>
#include <vector>

#include "cppgm_builtin_host_config.h"
#include "driver/wasm_environment.h"
#include "support/version.h"

namespace driver {

bool select_standard_includes(const std::string& arg, StandardIncludes& includes)
{
	if (arg == "-nostdinc")
		includes = StandardIncludes::None;
	else if (arg != "-nostdinc++")
		return false;
	else if (includes != StandardIncludes::None)
		includes = StandardIncludes::COnly;
	return true;
}

// GCC's include chain (cpplib's remove_duplicates): a directory named
// twice is searched at its first position only, and an -I directory that
// is also a system directory (-isystem or a standard one) is searched as
// that system directory ("the -I option is ignored"), so <stdlib.h> under
// -I/usr/include still finds libstdc++'s wrapper first. Directories are
// compared by device and inode.
void prune_include_paths(PreprocessorOptions& options)
{
	std::vector<std::pair<dev_t, ino_t>> seen;
	const auto identity = [](const std::string& path, std::pair<dev_t, ino_t>& id) {
		struct stat status;
		if (stat(path.c_str(), &status) != 0 || !S_ISDIR(status.st_mode))
			return false;
		id = std::make_pair(status.st_dev, status.st_ino);
		return true;
	};
	const auto first = [&](const std::string& path) {
		std::pair<dev_t, ino_t> id;
		if (!identity(path, id))
			return true;
		for (const std::pair<dev_t, ino_t>& other : seen)
		{
			if (other == id)
				return false;
		}
		seen.push_back(id);
		return true;
	};
	std::vector<std::string> system;
	for (const std::string& path : options.system_include_paths)
	{
		if (first(path))
			system.push_back(path);
	}
	std::vector<std::string> user;
	for (const std::string& path : options.include_paths)
	{
		if (first(path))
			user.push_back(path);
	}
	if (!options.quote_include_paths.empty())
	{
		seen.clear();
		std::vector<std::string> quote;
		for (const std::string& path : options.quote_include_paths)
			if (first(path))
				quote.push_back(path);
		// CPP joins the two chains, coalescing only a repeated boundary.
		const std::vector<std::string>& angle = user.empty() ? system : user;
		std::pair<dev_t, ino_t> before, after;
		if (!quote.empty() && !angle.empty() && identity(quote.back(), before) && identity(angle.front(), after) &&
			before == after)
			quote.pop_back();
		options.quote_include_paths.swap(quote);
	}
	options.system_include_paths.swap(system);
	options.include_paths.swap(user);
}

namespace {

#define CPPGM_ATOMIC_LOCK_FREE(NAME, VALUE) \
	"#define __GCC_ATOMIC_" #NAME "_LOCK_FREE " VALUE "\n" \
	"#define __CLANG_ATOMIC_" #NAME "_LOCK_FREE " VALUE "\n"
// clang-format off
#define CPPGM_SCALAR_ATOMICS(VALUE) \
	CPPGM_ATOMIC_LOCK_FREE(BOOL, VALUE) \
	CPPGM_ATOMIC_LOCK_FREE(CHAR, VALUE) \
	CPPGM_ATOMIC_LOCK_FREE(CHAR16_T, VALUE) \
	CPPGM_ATOMIC_LOCK_FREE(CHAR32_T, VALUE) \
	CPPGM_ATOMIC_LOCK_FREE(WCHAR_T, VALUE) \
	CPPGM_ATOMIC_LOCK_FREE(SHORT, VALUE) \
	CPPGM_ATOMIC_LOCK_FREE(INT, VALUE) \
	CPPGM_ATOMIC_LOCK_FREE(LONG, VALUE) \
	CPPGM_ATOMIC_LOCK_FREE(LLONG, VALUE) \
	CPPGM_ATOMIC_LOCK_FREE(POINTER, VALUE)
// clang-format on

void configure_target_atomics(PreprocessorOptions& options, bool wasm_atomics)
{
	const bool wasm = target_model::is_wasm(options.target);
	const bool c_source = options.language == SourceLanguage::C;
	options.atomics_enabled = !wasm || wasm_atomics;
	if (!c_source && options.target == native::host_target() && options.target != native::Target::AArch64Linux)
		return;
	// Every scalar type covered by these header macros fits in an inline
	// atomic on the enabled targets.
	static_assert(target_model::inline_atomic_max_bytes >= 8, "scalar atomics include long long");
	std::string text = options.atomics_enabled ? CPPGM_SCALAR_ATOMICS("2") : CPPGM_SCALAR_ATOMICS("0");
	text += "#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1\n";
	if (c_source ? options.c_edition >= CEdition::C23 : options.cxx_edition >= 20)
		text += options.atomics_enabled ? CPPGM_ATOMIC_LOCK_FREE(CHAR8_T, "2") : CPPGM_ATOMIC_LOCK_FREE(CHAR8_T, "0");
	if (wasm && wasm_atomics)
		text += "#define __wasm_atomics__ 1\n";
	if (!options.atomics_enabled && c_source && options.c_edition >= CEdition::C11)
		text += "#define __STDC_NO_ATOMICS__ 1\n";
	options.command_line.insert(0, text);
}

#undef CPPGM_SCALAR_ATOMICS
#undef CPPGM_ATOMIC_LOCK_FREE

} // namespace

void configure_target_environment(PreprocessorOptions& options, native::Target target, bool wasm_atomics)
{
	options.target = target;
	configure_target_atomics(options, wasm_atomics);
	if (target_model::is_aarch64(target))
	{
		configure_aarch64_environment(options);
		return;
	}
	if (target_model::is_wasm(target))
	{
		configure_wasm_environment(options);
		return;
	}
	// The course preprocessor starts with Linux target macros even when
	// this compiler is running on Darwin.
	if (target == native::Target::Linux && target == native::host_target())
		return;
	if (target != native::host_target())
		options.command_line.insert(0, target_integer_predefines(target));
	options.command_line.insert(0,
		target == native::Target::MacOS
			? "#undef __linux__\n#undef __linux\n#undef __gnu_linux__\n#undef __ELF__\n#define __APPLE__ 1\n#define "
			  "__MACH__ 1\n"
			: "#undef __APPLE__\n#undef __MACH__\n#define __linux__ 1\n#define __linux 1\n#define __ELF__ 1\n");
}

namespace {

// The names the preprocessor predefines itself (preprocess/preprocessor.cpp,
// [cpp.predefined] 16.8), whose host definitions are not read.
bool OwnMacro(const char* name, size_t length)
{
	if (IsLanguageFeatureMacro(name, static_cast<uint32_t>(length)))
		return true;
	static const char* const kOwn[] = { "__cplusplus", "__STDC_HOSTED__", "__DATE__", "__TIME__", "__FILE__",
		"__LINE__", "__CPPGM__", "__CPPGM_AUTHOR__", "__STDC__", "__STDC_VERSION__", "__STDC_NO_THREADS__",
		"__BITINT_MAXWIDTH__", "__CHAR_UNSIGNED__", "__POPCNT__", "__OPTIMIZE__", "__OPTIMIZE_SIZE__", "__NO_INLINE__",
		"__PIC__", "__pic__", "__PIE__", "__pie__", "__CET__", "__STDCPP_DEFAULT_NEW_ALIGNMENT__", "__cpp_aligned_new",
		"__cpp_deduction_guides", "__SSE__", "__SSE2__", "__SSE3__", "__SSSE3__", "__SSE4_1__", "__SSE4_2__",
		"__EXCEPTIONS", "__GXX_RTTI", "__FLT_EVAL_METHOD__" };
	for (const char* own : kOwn)
	{
		if (std::strlen(own) == length && std::memcmp(own, name, length) == 0)
			return true;
	}
	return false;
}

bool Named(const char* name, size_t length, const char* spelling)
{
	return std::strlen(spelling) == length && std::memcmp(name, spelling, length) == 0;
}

// Hosted libraries use the _FloatN limit families to enable their extended
// floating-point interfaces. Keep those interfaces filtered separately from
// __SIZEOF_FLOAT128__, which advertises the supported GNU type __float128.
bool UnsupportedTypeMacro(const char* name, size_t length)
{
	static const char* const kPrefixes[] = { "__BFLT16_", "__FLT16_", "__FLT32_", "__FLT64_", "__FLT128_", "__FLT32X_",
		"__FLT64X_", "__FLT128X_" };
	for (const char* prefix : kPrefixes)
	{
		const size_t size = std::strlen(prefix);
		if (length >= size && std::memcmp(name, prefix, size) == 0)
			return true;
	}
	return Named(name, length, "__SIZEOF_FLOAT80__");
}

// A C translation unit has no C++ host macros.
bool CxxMacro(const char* name, size_t length)
{
	return Named(name, length, "__GNUG__") || (length >= 5 && std::memcmp(name, "__GXX", 5) == 0) ||
		(length >= 6 && std::memcmp(name, "__cpp_", 6) == 0);
}

bool ReplacedCMacro(const char* name, size_t length)
{
	// C header support uses cppgm's target policy for both compiler
	// spellings. Keep only that definition in the initial macro input.
	static const char suffix[] = "_LOCK_FREE";
	static const char gcc[] = "__GCC_ATOMIC_";
	static const char clang[] = "__CLANG_ATOMIC_";
	const size_t suffix_size = sizeof suffix - 1;
	return (length > suffix_size && std::memcmp(name + length - suffix_size, suffix, suffix_size) == 0 &&
			   ((length >= sizeof gcc - 1 && std::memcmp(name, gcc, sizeof gcc - 1) == 0) ||
				   (length >= sizeof clang - 1 && std::memcmp(name, clang, sizeof clang - 1) == 0))) ||
		Named(name, length, "__GCC_ATOMIC_TEST_AND_SET_TRUEVAL") || Named(name, length, "__STDC_NO_ATOMICS__") ||
		Named(name, length, "__GNUC_GNU_INLINE__") || Named(name, length, "__GNUC_STDC_INLINE__") ||
		Named(name, length, "__STDC_EMBED_NOT_FOUND__") || Named(name, length, "__STDC_EMBED_FOUND__") ||
		Named(name, length, "__STDC_EMBED_EMPTY__");
}

// 16.8p4: an implementation's other predefined macro names begin with an
// underscore followed by an uppercase letter or a second underscore; the
// host dialect's others (gnu++11's `unix`, `linux`, `i386`) are the
// program's names.
bool ReservedMacro(const char* name, size_t length)
{
	return length >= 2 && name[0] == '_' && (name[1] == '_' || (name[1] >= 'A' && name[1] <= 'Z'));
}

// The host's `-dM -E` output for the dialect (GNU, or the strict ISO
// one's: __STRICT_ANSI__) without the definitions of unreserved,
// OwnMacro, UnsupportedTypeMacro and C++-only names in C mode, plus __STDC__, which
// GCC predefines without listing it. Language feature dates come from
// the selected cppgm language mode, independently of the host probe.
std::string HostMacroText(const FeatureModes& modes, bool strict)
{
	std::string text = "#define __STDC__ 1\n";
	const bool c_source = modes.language == 0;
	const char* line;
	if (c_source)
		line = strict ? cppgm_builtin_host_config::kHostStrictCPredefinedMacros
					  : cppgm_builtin_host_config::kHostCPredefinedMacros;
	else
		line = strict ? cppgm_builtin_host_config::kHostStrictPredefinedMacros
					  : cppgm_builtin_host_config::kHostPredefinedMacros;
	while (*line != '\0')
	{
		const char* end = std::strchr(line, '\n');
		if (end == nullptr)
			end = line + std::strlen(line);
		static const char kDefine[] = "#define ";
		const size_t prefix = sizeof kDefine - 1;
		if (static_cast<size_t>(end - line) > prefix && std::memcmp(line, kDefine, prefix) == 0)
		{
			const char* name = line + prefix;
			const char* name_end = name;
			while (name_end < end && *name_end != ' ' && *name_end != '(')
				++name_end;
			const size_t length = static_cast<size_t>(name_end - name);
			if (ReservedMacro(name, length) && !OwnMacro(name, length) && !UnsupportedTypeMacro(name, length) &&
				(!c_source || (!CxxMacro(name, length) && !ReplacedCMacro(name, length))))
			{
				text.append(line, end);
				text.push_back('\n');
			}
		}
		line = *end == '\n' ? end + 1 : end;
	}
	if (modes.language >= 20)
	{
		// The host probes run in C++11, where char8_t has no macro.
		// Its size and alignment match unsigned char on this target,
		// so it has the same lock-free classification as char.
		if (text.find("#define __GCC_ATOMIC_CHAR_LOCK_FREE ") != std::string::npos)
			text += "#define __GCC_ATOMIC_CHAR8_T_LOCK_FREE __GCC_ATOMIC_CHAR_LOCK_FREE\n";
		if (text.find("#define __CLANG_ATOMIC_CHAR_LOCK_FREE ") != std::string::npos)
			text += "#define __CLANG_ATOMIC_CHAR8_T_LOCK_FREE __CLANG_ATOMIC_CHAR_LOCK_FREE\n";
	}
	return text;
}

// GCC's builtin types: __builtin_va_list, as it declares it for the x86-64
// psABI (3.5.7), an array of one __va_list_tag (the library builtins whose
// types need it, __builtin_vsnprintf, are the registry's,
// lex/gnu_builtins.h; the ISO/IEC TS 18661-3 floating types glibc declares
// functions of are fundamental types, types/fundamental_type.h).
const char kBuiltinDeclarations[] =
	"struct __va_list_tag { unsigned int gp_offset; unsigned int fp_offset; void* overflow_arg_area; "
	"void* reg_save_area; };\n"
	"typedef __va_list_tag __builtin_va_list[1];\n";

const char kBuiltinTemplateDeclarations[] =
	// Clang's builtin templates (GCC 14's too) as alias templates:
	// __make_integer_seq<S, T, N> is S<T, 0, ..., N-1> (by __integer_pack)
	// and __type_pack_element<I, T...> the I-th type of the pack.
	"template<template<class _Tp, _Tp...> class _Sp, class _Tp, _Tp _Np> using __make_integer_seq = "
	"_Sp<_Tp, __integer_pack(_Np)...>;\n"
	"template<unsigned long _Ip, class... _Tp> struct __cppgm_type_pack_element;\n"
	"template<class _Hp, class... _Tp> struct __cppgm_type_pack_element<0, _Hp, _Tp...> { typedef _Hp type; };\n"
	"template<unsigned long _Ip, class _Hp, class... _Tp> struct __cppgm_type_pack_element<_Ip, _Hp, _Tp...> "
	": __cppgm_type_pack_element<_Ip - 1, _Tp...> {};\n"
	"template<unsigned long _Ip, class... _Tp> using __type_pack_element = "
	"typename __cppgm_type_pack_element<_Ip, _Tp...>::type;\n";

} // namespace

const char* builtin_template_declarations()
{
	return kBuiltinTemplateDeclarations;
}

namespace {

bool IsDirectory(const std::string& path)
{
	struct stat status;
	return stat(path.c_str(), &status) == 0 && S_ISDIR(status.st_mode);
}

// The names in `directory`, sorted; none if it cannot be read.
std::vector<std::string> Entries(const std::string& directory)
{
	std::vector<std::string> names;
	DIR* handle = opendir(directory.c_str());
	if (handle == nullptr)
		return names;
	for (dirent* entry = readdir(handle); entry != nullptr; entry = readdir(handle))
	{
		if (entry->d_name[0] != '.')
			names.push_back(entry->d_name);
	}
	closedir(handle);
	std::sort(names.begin(), names.end());
	return names;
}

// A GCC version as a directory names it: numbers joined by dots (15, 15.2.1).
bool IsVersion(const std::string& name)
{
	if (name.empty() || name[0] == '.' || name[name.size() - 1] == '.')
		return false;
	for (const char c : name)
	{
		if (c != '.' && (c < '0' || c > '9'))
			return false;
	}
	return true;
}

// Whether version `a` is older than `b`, number by number.
bool OlderVersion(const std::string& a, const std::string& b)
{
	size_t i = 0;
	size_t j = 0;
	while (i < a.size() || j < b.size())
	{
		unsigned long x = 0;
		unsigned long y = 0;
		for (; i < a.size() && a[i] != '.'; ++i)
			x = x * 10 + static_cast<unsigned long>(a[i] - '0');
		for (; j < b.size() && b[j] != '.'; ++j)
			y = y * 10 + static_cast<unsigned long>(b[j] - '0');
		if (x != y)
			return x < y;
		i += i < a.size();
		j += j < b.size();
	}
	return false;
}

// A GCC installation, <prefix>/<lib>/gcc/<triple>/<version> (GCC's
// -print-search-dirs `install:`, Clang's --gcc-install-dir), with its C++
// library's headers under <prefix>/include.
struct GccInstallation
{
	std::string directory;
	std::string prefix;
	std::string triple;
	std::string version;

	std::string library() const { return prefix + "/include/c++/" + version; }
	// The target's part of the library (bits/c++config.h): Debian's
	// directory, or GCC's own; "" if neither is there.
	std::string target_library() const
	{
		const std::string debian = prefix + "/include/" + triple + "/c++/" + version;
		if (IsDirectory(debian))
			return debian;
		const std::string own = library() + "/" + triple;
		return IsDirectory(own) ? own : std::string();
	}
	// The compiler's own headers and the whole library are there.
	bool usable(bool c_only) const
	{
		return IsDirectory(directory + "/include") && (c_only || (IsDirectory(library()) && !target_library().empty()));
	}
};

bool ParseInstallation(std::string directory, GccInstallation& out)
{
	while (directory.size() > 1 && directory[directory.size() - 1] == '/')
		directory.erase(directory.size() - 1);
	// The last four slashes: before <version>, <triple>, gcc and <lib>.
	size_t slash[4];
	size_t at = directory.size();
	for (size_t& found : slash)
	{
		at = at == 0 ? std::string::npos : directory.rfind('/', at - 1);
		if (at == std::string::npos)
			return false;
		found = at;
	}
	if (directory.compare(slash[2] + 1, slash[1] - slash[2] - 1, "gcc") != 0)
		return false;
	out.directory = directory;
	out.prefix = directory.substr(0, slash[3]);
	out.triple = directory.substr(slash[1] + 1, slash[0] - slash[1] - 1);
	out.version = directory.substr(slash[0] + 1);
	return !out.triple.empty() && !out.version.empty();
}

// The GCC installation whose headers the build found: the owner of its
// <installation>/include directory. False for a build with another
// compiler's headers.
bool BuiltInstallation(GccInstallation& out)
{
	static const char kInclude[] = "/include";
	const size_t suffix = sizeof kInclude - 1;
	for (const char* const* path = cppgm_builtin_host_config::kStandardIncludePaths; *path != nullptr; ++path)
	{
		const std::string directory = *path;
		if (directory.size() > suffix && directory.compare(directory.size() - suffix, suffix, kInclude) == 0 &&
			ParseInstallation(directory.substr(0, directory.size() - suffix), out))
			return true;
	}
	return false;
}

// The build's C++ library directory: its first .../c++/<name> one.
std::string BuiltLibrary()
{
	for (const char* const* path = cppgm_builtin_host_config::kStandardIncludePaths; *path != nullptr; ++path)
	{
		if (std::strstr(*path, "/c++/") != nullptr)
			return *path;
	}
	return std::string();
}

// The version that /usr/bin/g++ names: Debian's g++ is a link to
// g++-<version>. "" for a g++ that is not such a link.
std::string DefaultCompilerVersion()
{
	std::string path = "/usr/bin/g++";
	for (unsigned depth = 0; depth < 8; ++depth)
	{
		char target[1024];
		const ssize_t size = readlink(path.c_str(), target, sizeof target);
		if (size <= 0 || static_cast<size_t>(size) == sizeof target)
			break;
		const std::string link(target, static_cast<size_t>(size));
		path = link[0] == '/' ? link : path.substr(0, path.rfind('/') + 1) + link;
	}
	const size_t dash = path.rfind('-');
	const std::string version = dash == std::string::npos ? std::string() : path.substr(dash + 1);
	return IsVersion(version) ? version : std::string();
}

// The system's GCC installation for the build's architecture that has the
// C++ library's headers: the one of /usr/bin/g++, else the newest. Only
// directories are read; no program runs.
bool FindInstallation(const GccInstallation& built, GccInstallation& found, bool c_only)
{
	const std::string architecture = built.triple.substr(0, built.triple.find('-') + 1);
	const std::string wanted = DefaultCompilerVersion();
	const size_t triple_slash = built.directory.rfind('/', built.directory.rfind('/') - 1);
	const std::string roots[] = { built.directory.substr(0, triple_slash), "/usr/lib/gcc", "/usr/lib64/gcc",
		"/usr/local/lib/gcc", "/usr/local/lib64/gcc" };
	bool any = false;
	bool found_wanted = false;
	for (size_t r = 0; r < sizeof roots / sizeof roots[0]; ++r)
	{
		if (r != 0 && roots[r] == roots[0])
			continue;
		for (const std::string& triple : Entries(roots[r]))
		{
			if (triple.compare(0, architecture.size(), architecture) != 0)
				continue;
			for (const std::string& version : Entries(roots[r] + "/" + triple))
			{
				GccInstallation candidate;
				if (!IsVersion(version) || !ParseInstallation(roots[r] + "/" + triple + "/" + version, candidate) ||
					!candidate.usable(c_only))
					continue;
				const bool is_wanted = !wanted.empty() &&
					(version == wanted || version.compare(0, wanted.size() + 1, wanted + ".") == 0);
				if (!any || (is_wanted && !found_wanted) ||
					(is_wanted == found_wanted && OlderVersion(found.version, version)))
				{
					found = candidate;
					found_wanted = is_wanted;
					any = true;
				}
			}
		}
	}
	return any;
}

// The build's directories with those of installation `built` replaced by
// `use`'s, in GCC's order: the library's three, <installation>/include, and
// <installation>/include-fixed (where there is one) after the first system
// directory (/usr/local/include). The system directories stay.
void InstallationDirectories(const GccInstallation& built, const GccInstallation& use, const char* const* paths,
	std::vector<std::string>& directories)
{
	const std::string library = "/c++/" + built.version;
	const std::string internal = built.directory + "/";
	bool library_done = false;
	bool internal_done = false;
	bool fixed_done = false;
	for (const char* const* path = paths; *path != nullptr; ++path)
	{
		const std::string directory = *path;
		const size_t at = directory.find(library);
		const size_t end = at + library.size();
		if (at != std::string::npos && (end == directory.size() || directory[end] == '/'))
		{
			if (!library_done)
			{
				directories.push_back(use.library());
				directories.push_back(use.target_library());
				directories.push_back(use.library() + "/backward");
			}
			library_done = true;
		}
		else if (directory.compare(0, internal.size(), internal) == 0)
		{
			if (!internal_done)
				directories.push_back(use.directory + "/include");
			internal_done = true;
		}
		else
		{
			directories.push_back(directory);
			if (!fixed_done && IsDirectory(use.directory + "/include-fixed"))
				directories.push_back(use.directory + "/include-fixed");
			fixed_done = true;
		}
	}
}

} // namespace

bool add_host_environment(PreprocessorOptions& options, native::Target target, StandardIncludes includes,
	const std::string& gcc_install_dir, std::string& error)
{
	options.modes.language = options.cxx_edition;
	options.hosted = true;
	const native::Target host = native::host_target();
	// The Arm Linux and Wasm environments supply their own macros and
	// builtin declarations, as does a cross build for Apple Silicon.
	if (!target_model::is_wasm(target) && target != native::Target::AArch64Linux &&
		(target != native::Target::AArch64MacOS || target == host))
	{
		options.host_predefines = HostMacroText(options.modes, options.strict);
		if (options.language == SourceLanguage::C)
			options.builtin_declarations =
				"struct __va_list_tag { unsigned int gp_offset; unsigned int fp_offset; "
				"void* overflow_arg_area; void* reg_save_area; }; typedef struct __va_list_tag __builtin_va_list[1];\n";
		else
		{
			options.builtin_declarations = kBuiltinDeclarations;
			options.builtin_declarations += builtin_template_declarations();
		}
	}
	if (target != host || includes == StandardIncludes::None)
		return true;
	const bool c_only = options.language == SourceLanguage::C || includes == StandardIncludes::COnly;
	const char* const* paths = c_only ? cppgm_builtin_host_config::kCStandardIncludePaths
									  : cppgm_builtin_host_config::kStandardIncludePaths;
	GccInstallation built;
	const bool gcc = BuiltInstallation(built);
	const std::string library = BuiltLibrary();
	if (!gcc_install_dir.empty())
	{
		GccInstallation named;
		if (!gcc)
			error = "--gcc-install-dir needs a cppgm built with GCC's headers";
		else if (!ParseInstallation(gcc_install_dir, named))
			error = "not a GCC installation directory (<prefix>/lib/gcc/<triple>/<version>): " + gcc_install_dir;
		else if (!named.usable(c_only))
			error = c_only
				? "no builtin C headers for the GCC installation " + named.directory
				: "no C++ library headers for the GCC installation " + named.directory + " (" + named.library() + ")";
		if (!error.empty())
			return false;
		InstallationDirectories(built, named, paths, options.system_include_paths);
		return true;
	}
	const bool missing = c_only ? gcc && !built.usable(true) : !library.empty() && !IsDirectory(library);
	GccInstallation found;
	if (missing && gcc && FindInstallation(built, found, c_only))
	{
		InstallationDirectories(built, found, paths, options.system_include_paths);
		return true;
	}
	for (const char* const* path = paths; *path != nullptr; ++path)
		options.system_include_paths.push_back(*path);
	if (missing && !c_only)
		options.missing_headers_note = "note: the standard headers this cppgm was built with are not on this system: " +
			library +
			(gcc ? "\nnote: no GCC installation with C++ library headers was found; name one with "
				   "--gcc-install-dir=<dir>, or pass the header directories with -nostdinc -isystem <dir>"
				 : "\nnote: pass the header directories with -nostdinc -isystem <dir>");
	return true;
}

bool host_stdlib_selected(const std::string& name)
{
	// The build's flags, word by word: the last -stdlib= is its selection.
	const std::string flags = cppgm_builtin_host_config::kStdlibFlags;
	const std::string option = "-stdlib=";
	std::string selected;
	size_t begin = 0;
	while (begin < flags.size())
	{
		size_t end = flags.find(' ', begin);
		if (end == std::string::npos)
			end = flags.size();
		if (flags.compare(begin, option.size(), option) == 0 && end - begin >= option.size())
			selected = flags.substr(begin + option.size(), end - begin - option.size());
		begin = end + 1;
	}
	if (!selected.empty())
		return name == selected;
	// None: the host compiler's default library, the one whose headers the
	// build found (libc++'s directory is c++/v1, libstdc++'s c++/<version>).
	bool libcxx = false;
	bool libstdcxx = false;
	for (const char* const* path = cppgm_builtin_host_config::kStandardIncludePaths; *path != nullptr; ++path)
	{
		const std::string directory = *path;
		const size_t at = directory.find("/c++/");
		if (at == std::string::npos)
			continue;
		if (directory.compare(at, std::string::npos, "/c++/v1") == 0)
			libcxx = true;
		else
			libstdcxx = true;
	}
	return name == "libc++" ? libcxx : name == "libstdc++" && libstdcxx && !libcxx;
}

std::string host_query(const std::string& flag)
{
	if (flag == "--version" || flag == "-v")
		return std::string("cppgm " CPPGM_VERSION " (host configuration: ") + cppgm_builtin_host_config::kHostCxx +
			")\n";
	if (flag == "-dumpmachine")
		return cppgm_builtin_host_config::kTarget;
	if (flag == "-dumpversion")
		return cppgm_builtin_host_config::kVersion;
	return cppgm_builtin_host_config::kSearchDirs;
}

} // namespace driver
