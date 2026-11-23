#pragma once

#include "preprocess/preprocessor.h"
#include "native/target.h"

namespace driver {

enum class StandardIncludes
{
	All,
	COnly, // -nostdinc++
	None   // -nostdinc
};

bool select_standard_includes(const std::string& arg, StandardIncludes& includes);

// The hosted environment of cppgm's preprocess, compile and link modes
// (PA26's hosted headers, PA30): the host C++ compiler's predefined macros
// (gnu++11) and standard include directories, discovered once when cppgm
// was built (dev/gen_builtin_host_config.pl) and baked in. Turns on
// hosted mode, sets the builtin declarations, and appends the selected
// standard directories after any -isystem ones.
//
// The standard directories are the build's when its C++ library directory
// is on this system. Otherwise a build with GCC's headers takes GCC's and
// the library's directories from a GCC installation of this system
// (<prefix>/lib/gcc/<triple>/<version>): the one of /usr/bin/g++, else the
// newest that has the library's headers. `gcc_install_dir`
// (--gcc-install-dir) names the installation instead. Only directories are
// read: no program runs. When no installation is found, the build's
// directories stay and an `#include <...>` that finds no file says so
// (PreprocessorOptions::missing_headers_note). Arm Linux, cross Apple Silicon
// and Wasm supply their own macro and builtin declarations during target setup.
//
// False, with `error`, for a `gcc_install_dir` that cannot be used.
bool add_host_environment(PreprocessorOptions& options, native::Target target, StandardIncludes includes,
	const std::string& gcc_install_dir, std::string& error);

// The selected target's platform macros, including the native host target.
// Foreign SDK paths must be explicit; baked host paths are not a foreign SDK.
void configure_target_environment(PreprocessorOptions& options, native::Target target);

// Canonicalize the GNU include search chains by filesystem identity.
void prune_include_paths(PreprocessorOptions& options);

// Builtin templates have language semantics independent of va_list or layout.
const char* builtin_template_declarations();

// Whether `-stdlib=<name>` agrees with the standard library selection
// cppgm was built with (CPPGM_STDLIB_FLAGS), or, for a build that made
// none, with the host's default library whose headers it found.
bool host_stdlib_selected(const std::string& name);

// The direct driver queries (--version, -v, -dumpmachine, -dumpversion,
// -print-search-dirs): this compiler's version line, then the host
// toolchain's answers as cppgm was built against them.
std::string host_query(const std::string& flag);

} // namespace driver
