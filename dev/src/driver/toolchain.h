#pragma once

#include <string>
#include <vector>

#include "preprocess/preprocessor.h"

// cppgm's compile (-c) and link modes: each C++ source is its own
// translation unit, compiled through the whole pipeline (preprocessing,
// parsing, semantic analysis, LowIR lowering, the native back end) into a
// relocatable object; link mode compiles its source inputs the same way,
// reads its object inputs (.o, .obj) and the -l libraries found in the -L
// directories (lib<name>.o, lib<name>.obj), and links them all with the
// runtime library into a static executable (native/link/linker.h).
//
// -E preprocesses each source in hosted mode into the PA4 preproc
// stream (`preproc <n>`, then `sof`/posttoken/`eof` records per source).
// -dM with -E writes the active macro definitions in source form. -H
// with -E writes the header trace to standard error.
//
// Options: -c, -E, -o <file>, -I <dir>, -isystem <dir>, -D <name>[=<value>],
// -U <name>, -L <dir>, -l <name> (each also joined), -include <file>,
// -nostdinc, -nostdinc++, --gcc-install-dir=<dir> (the GCC installation whose headers
// are the standard ones), -x c++, --target <target> (or =),
// --sysroot <dir>, -resource-dir <dir> (Wasm and AArch64), -nostartfiles,
// -nodefaultlibs and -nostdlib (supplied runtime selection),
// -ffreestanding/-fhosted (C execution environment),
// -std=<c++11, c++14, c++17 or c++20, and their gnu and draft names> (__cplusplus;
// c++NN the strict ISO dialect's host macros, __STRICT_ANSI__),
// -stdlib=<the build's selection>, -f(no-)exceptions and -f(no-)rtti (the
// hosted predefined macros and feature probes), -fPIC/-fpic (host objects),
// -fno-PIC/-fno-pic (direct access to defined data),
// -ffp-contract=fast/-ffp-contract=off (optional scalar Arm contraction),
// -ffunction-sections/-fno-function-sections (a text section per function
// in ELF objects), --stats,
// -mpopcnt/-mno-popcnt (explicit population-count ISA and __POPCNT__),
// -Wno-narrowing (suppress list-narrowing diagnostics outside SFINAE;
// -Wnarrowing/-Werror=narrowing restore them), -pedantic(-errors),
// -Wsystem-headers; -O*, -g*, other -W*,
// other -f* and -m*, -w, -pipe and dependency-file
// options are accepted and do not change the output.
//
// Objects: -c writes a course object for an output named *.obj (the
// course's EH runtime ABI, PA25's link mode input) and a host object
// otherwise (host EH tables and runtime names, pa26: linked by the host
// toolchain); link mode compiles its sources as course objects.
namespace driver {

// Runs a preprocess (-E), compile or link invocation; `base` supplies
// __DATE__ and friends. Returns the process exit status.
int run_toolchain(const std::vector<std::string>& args, const PreprocessorOptions& base);

// Select the supported language mode and the host macro dialect.
void language_standard(const std::string& standard, PreprocessorOptions& options);
enum class SourceExceptions : uint8_t
{
	Default,
	Enabled,
	Disabled
};
enum class CEnvironment : uint8_t
{
	TargetDefault,
	Hosted,
	Freestanding
};
bool c_environment_option(const std::string& option, CEnvironment& environment);
void configure_c_environment(PreprocessorOptions& options, target_model::Target target, CEnvironment environment);
void configure_source_language(const std::string& language, const std::string& standard, SourceExceptions exceptions,
	PreprocessorOptions& options);

// Select how to report C++ language extension diagnostics.
bool diagnostic_option(
	const std::string& option, ExtensionWarnings& warnings, bool& system_headers, bool* ignore_narrowing = nullptr);
bool source_lex_option(const std::string& option, SourceLexOptions& options);

// Enable an SSE extension and its prerequisites, or disable it and dependents.
bool sse_option(const std::string& option, uint8_t& level);
bool embed_directory_option(const std::string& option, std::vector<std::string>* paths = nullptr);

enum class FloatContract : uint8_t
{
	Off,
	Scoped,
	Fast
};
bool float_contract_option(const std::string& option, FloatContract& mode);

// -ffixed-x18, or a -fsanitize= list with shadow-call-stack, whose stack
// pointer lives in x18: AArch64 Linux code leaves x18 alone. Sets `fixed`
// if supplied.
bool fixed_x18_option(const std::string& option, bool* fixed = nullptr);

// A -g option's request: 0 disables debug information, 1 enables it,
// -1 is a modifier that leaves the current request unchanged.
int debug_info_request(const std::string& arg);
int debug_type_request(const std::string& arg);

// A direct driver query (--version, -v, -dumpmachine, -dumpversion,
// -print-search-dirs, PA30), answered on standard output.
int run_query(const std::string& flag);

} // namespace driver
