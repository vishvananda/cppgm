#include "driver/toolchain.h"

#include <algorithm>
#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <limits>
#include <sys/stat.h>
#include <utility>
#include <vector>

#include "abi/itanium/abi_encoding_error.h"
#include "driver/host_environment.h"
#include "driver/make_dependencies.h"
#include "driver/native_assembly.h"
#include "driver/aarch64_environment.h"
#include "aarch64/backend.h"
#include "aarch64/link.h"
#include "driver/wasm_environment.h"
#include "driver/wasm_link_options.h"
#include "lex/post_token_writer.h"
#include "lex/language_mode.h"
#include "lex/post_tokenizer.h"
#include "lower/program_lowering.h"
#include "lowir/text_reader.h"
#include "lowir/text_writer.h"
#include "native/backend_error.h"
#include "native/link/linker.h"
#include "native/object/elf_object.h"
#include "native/object/macho_object.h"
#include "native/object/object_compiler.h"
#include "opt/optimizer.h"
#include "sema/analyzer.h"
#include "support/internal_error.h"
#include "support/telemetry.h"
#include "support/tool_errors.h"
#include "syntax/syntax_unit.h"
#include "wasm/backend.h"
#include "wasm/assembly.h"

#if CPPGM_TELEMETRY_ENABLED
#include <sys/resource.h>
#endif

namespace driver {

// Source dialect and feature gates share the token tools' standard names.
void language_standard(const std::string& standard, PreprocessorOptions& options)
{
	static const struct
	{
		const char* spelling;
		CEdition edition;
		bool strict;
	} c_modes[] = { { "c99", CEdition::C99, true }, { "gnu99", CEdition::C99, false }, { "c11", CEdition::C11, true },
		{ "gnu11", CEdition::C11, false }, { "c17", CEdition::C17, true }, { "gnu17", CEdition::C17, false },
		{ "c18", CEdition::C17, true }, { "gnu18", CEdition::C17, false }, { "iso9899:1999", CEdition::C99, true },
		{ "iso9899:2011", CEdition::C11, true }, { "iso9899:2017", CEdition::C17, true },
		{ "iso9899:2018", CEdition::C17, true } };
	for (const auto& mode : c_modes)
		if (standard == mode.spelling)
		{
			options.language = SourceLanguage::C;
			options.cxx_edition = 0;
			options.c_edition = mode.edition;
			options.strict = mode.strict;
			return;
		}
	options.language = SourceLanguage::Cxx;
	const LanguageMode mode = ReadLanguageMode(standard);
	options.cxx_edition = mode.edition;
	options.strict = mode.strict;
}

static NumberDialect hosted_number_dialect(const PreprocessorOptions& options)
{
	const bool pedantic = options.extension_warnings == ExtensionWarnings::Errors;
	if (options.cxx_edition == 11)
		return pedantic ? NumberDialect::StrictHostedCxx11 : NumberDialect::HostedCxx11;
	if (options.cxx_edition == 14 && pedantic)
		return NumberDialect::StrictHostedCxx14;
	return NumberDialect::Gnu;
}

bool c_environment_option(const std::string& option, CEnvironment& environment)
{
	if (option == "-ffreestanding" || option == "-fno-hosted")
		environment = CEnvironment::Freestanding;
	else if (option == "-fhosted" || option == "-fno-freestanding")
		environment = CEnvironment::Hosted;
	else
		return false;
	return true;
}

void configure_c_environment(PreprocessorOptions& options, target_model::Target target, CEnvironment environment)
{
	if (options.language != SourceLanguage::C)
	{
		if (environment == CEnvironment::Freestanding)
			throw InvocationError("a freestanding environment is supported only for C input");
		return;
	}
	const bool bare_wasm = target == target_model::Target::Wasm32;
	if (bare_wasm && environment == CEnvironment::Hosted)
		throw InvocationError("a hosted C environment requires WASI instead of the bare Wasm target");
	options.c_freestanding = bare_wasm || environment == CEnvironment::Freestanding;
}

void configure_source_language(
	const std::string& language, const std::string& standard, SourceExceptions exceptions, PreprocessorOptions& options)
{
	if (language == "assembler-with-cpp")
	{
		language_standard("gnu17", options);
		options.assembler = true;
		options.modes.exceptions = exceptions != SourceExceptions::Disabled;
		return;
	}

	if (!standard.empty())
		language_standard(standard, options);
	else if (language == "c")
		language_standard("gnu17", options);
	if (!language.empty() && language != "c" && language != "c++")
		throw InvocationError("unsupported language: " + language);
	if (!language.empty() && (language == "c") != (options.language == SourceLanguage::C))
		throw InvocationError("language standard does not match -x " + language);
	options.modes.exceptions = exceptions == SourceExceptions::Default ? options.language == SourceLanguage::Cxx
																	   : exceptions == SourceExceptions::Enabled;
	if (options.language == SourceLanguage::Cxx)
	{
		options.literals = hosted_number_dialect(options);
		if (options.strict)
			options.literals = static_cast<NumberDialect>(
				static_cast<uint8_t>(options.literals) & ~number_syntax::QuadSuffix);
	}
}

bool diagnostic_option(
	const std::string& arg, ExtensionWarnings& warnings, bool& system_headers, bool* ignore_narrowing)
{
	if (arg == "-pedantic-errors")
		warnings = ExtensionWarnings::Errors;
	else if (arg == "-pedantic")
	{
		if (warnings != ExtensionWarnings::Errors)
			warnings = ExtensionWarnings::Pedantic;
	}
	else if (arg == "-Wsystem-headers" || arg == "-Wno-system-headers")
		system_headers = arg == "-Wsystem-headers";
	else if (ignore_narrowing != nullptr &&
		(arg == "-Wno-narrowing" || arg == "-Wnarrowing" || arg == "-Werror=narrowing"))
		*ignore_narrowing = arg == "-Wno-narrowing";
	else
		return false;
	return true;
}

bool fixed_x18_option(const std::string& option, bool* fixed)
{
	if (option != "-ffixed-x18" &&
		(option.compare(0, 11, "-fsanitize=") != 0 ||
			("," + option.substr(11) + ",").find(",shadow-call-stack,") == std::string::npos))
		return false;
	if (fixed != nullptr)
		*fixed = true;
	return true;
}

bool float_contract_option(const std::string& option, bool* enabled)
{
	const bool fast = option == "-ffast-math" || option == "-ffp-contract=fast";
	if (!fast && option != "-fno-fast-math" && option.compare(0, 14, "-ffp-contract=") != 0 &&
		option != "-frounding-math" && option != "-ftrapping-math" && option != "-ffp-exception-behavior=strict" &&
		option != "-ffp-exception-behavior=maytrap" && option != "-ffp-model=strict" && option != "-ffp-model=precise")
		return false;
	if (enabled != nullptr)
		*enabled = fast;
	return true;
}

bool sse_option(const std::string& option, uint8_t& level)
{
	const bool disable = option.compare(0, 5, "-mno-") == 0;
	if (!disable && option.compare(0, 2, "-m") != 0)
		return false;
	const std::string feature = option.substr(disable ? 5 : 2);
	const char* names[] = { "sse3", "ssse3", "sse4.1", "sse4.2" };
	for (uint8_t i = 0; i < 4; ++i)
		if (feature == names[i] || (feature == "sse4" && i == (disable ? 2 : 3)))
		{
			level = disable ? std::min(level, i) : std::max(level, static_cast<uint8_t>(i + 1));
			return true;
		}
	return false;
}

namespace {

// An input in command-line order: a source, serialized LowIR (`.lowir`,
// PA33), an object, or a -l library.
struct Input
{
	enum class Kind
	{
		Source,
		Assembly,
		LowIR,
		Object,
		Library
	};

	Kind kind;
	std::string name;
};

struct Invocation
{
	std::string source_language;
	std::string standard;
	SourceExceptions exceptions = SourceExceptions::Default;
	CEnvironment c_environment = CEnvironment::TargetDefault;
	native::Target target = native::host_target();
	bool compile_only = false;
	// -S -emit-lowir: each input's program as -c compiles it, after the
	// LowIR optimizer, written as LowIR text instead of an object (clang's
	// -S -emit-llvm).
	bool emit_lowir = false;
	// -fno-lowir-passes: the program goes to the back end (or to the text)
	// without the LowIR optimizer; the back end still runs at the -O level.
	// A program -S -emit-lowir wrote compiles so to the object -c gives.
	bool lowir_passes = true;
	bool position_independent = false;
	bool red_zone = true;
	bool contract_float = false;
	bool fixed_x18 = false;
	// -ffunction-sections: each function in a section of its own.
	bool function_sections = false;
	bool preprocess_only = false;
	bool dump_macros = false;
	bool trace_includes = false;
	MakeDependencies dependencies;
	ir_model::SymbolVisibility visibility = ir_model::SV_DEFAULT;
	bool visibility_inlines_hidden = false;
	// -fsyntax-only: each source analyzed, nothing lowered or written.
	bool syntax_only = false;
	uint64_t constexpr_step_limit = sema::Analyzer::default_constexpr_step_limit;
	bool ignore_narrowing = false;
	bool debug_info = false;
	bool debug_types = false;
	bool debug_optimization = false;
	bool stats = false;
	bool strict_aliasing = true;
	// --stats-functions: the object back end's per-function census
	// (native/object/function_census.h), after each unit's compilation.
	bool function_census = false;
	// -O<n>: the LowIR optimization level before object
	// generation; omitted, -O0.
	opt::OptimizerOptions optimizer;
	std::string output;
	std::string sysroot;
	std::string resource_directory;
	bool no_standard_libraries = false;
	bool no_startfiles = false;
	uint32_t wasm_stack_size = 0;
	bool wasm_atomics = true;
	bool wasm_atomics_explicit = false;
	backend::WasmLinkOptions wasm_link;
	bool whole_source_lto = false;
	std::vector<Input> inputs;
	std::vector<std::string> library_paths;
	std::vector<std::string> exports;
	PreprocessorOptions preprocessor;
};

double milliseconds_since(std::chrono::steady_clock::time_point start)
{
	return std::chrono::duration<double, std::milli>(std::chrono::steady_clock::now() - start).count();
}

#if CPPGM_TELEMETRY_ENABLED
long peak_rss_kb()
{
	struct rusage usage;
	getrusage(RUSAGE_SELF, &usage);
	return usage.ru_maxrss;
}
#endif

bool starts_with(const std::string& value, const char* prefix)
{
	return value.compare(0, std::char_traits<char>::length(prefix), prefix) == 0;
}

bool ends_with(const std::string& value, const char* suffix)
{
	const size_t length = std::char_traits<char>::length(suffix);
	return value.size() >= length && value.compare(value.size() - length, length, suffix) == 0;
}

bool object_name(const std::string& name)
{
	return ends_with(name, ".o") || ends_with(name, ".obj") || ends_with(name, ".a");
}

// -O<level> as GCC reads it: -O is -O1, -Os, -Oz and -Og keep their nearest
// level, -Ofast and -O4 and beyond are -O3. Returns -1 for no -O option.
int optimization_level(const std::string& arg)
{
	if (!starts_with(arg, "-O"))
		return -1;
	const std::string level = arg.substr(2);
	if (level.empty() || level == "g")
		return 1;
	if (level == "s" || level == "z")
		return 2;
	if (level == "fast")
		return 3;
	for (char c : level)
		if (c < '0' || c > '9')
			throw InvocationError("unsupported option: " + arg);
	const unsigned long n = std::strtoul(level.c_str(), nullptr, 10);
	return n > 3 ? 3 : static_cast<int>(n);
}

uint64_t constexpr_step_limit(const std::string& option)
{
	const size_t first = option.find('=') + 1;
	const uint64_t max = std::numeric_limits<uint64_t>::max();
	uint64_t value = 0;
	if (first == option.size())
		throw InvocationError("missing operation limit in " + option);
	for (size_t i = first; i < option.size(); ++i)
	{
		const unsigned digit = static_cast<unsigned>(option[i] - '0');
		if (digit > 9 || value > (max - digit) / 10)
			throw InvocationError("invalid operation limit in " + option);
		value = value * 10 + digit;
	}
	return value;
}

// The value of an option given as `-X value` or `-Xvalue`; false when
// args[i] is not the option.
bool option_value(const std::vector<std::string>& args, size_t& i, const char* option, std::string& value)
{
	const std::string& arg = args[i];
	if (arg == option)
	{
		if (i + 1 >= args.size())
			throw InvocationError(std::string("missing argument after ") + option);
		value = args[++i];
		return true;
	}
	if (starts_with(arg, option) && arg.size() > std::char_traits<char>::length(option))
	{
		value = arg.substr(std::char_traits<char>::length(option));
		return true;
	}
	return false;
}

bool parse_include_option(const std::vector<std::string>& args, size_t& i, PreprocessorOptions& options)
{
	std::string value;
	if (option_value(args, i, "-iquote", value))
		options.quote_include_paths.push_back(std::move(value));
	else if (option_value(args, i, "-isystem", value))
		options.system_include_paths.push_back(std::move(value));
	else if (option_value(args, i, "-I", value))
		options.include_paths.push_back(std::move(value));
	else
		return false;
	return true;
}

// GCC flags that change the program's types, layout, ABI or observable
// behavior, which this compiler does not honor: refused rather than
// accepted with another meaning (README: build-system flags are honored or
// harmless).
bool refused_flag(const std::string& arg)
{
	static const char* const kRefused[] = { "-fshort-wchar", "-fshort-enums", "-fpack-struct", "-funsigned-bitfields",
		"-fno-signed-bitfields", "-fno-elide-constructors", "-m32", "-mx32", "-m16", "-mlong-double-64",
		"-mlong-double-128", "-msoft-float", "-mno-sse", "-mno-sse2", "-mno-80387", "-mno-fp-ret-in-387",
		"-mfpmath=387" };
	for (const char* refused : kRefused)
	{
		if (arg == refused)
			return true;
	}
	return starts_with(arg, "-fpack-struct=") || starts_with(arg, "-mabi=");
}

bool accepted_flag(const std::string& arg)
{
	return starts_with(arg, "-O") || starts_with(arg, "-g") || starts_with(arg, "-W") || starts_with(arg, "-f") ||
		starts_with(arg, "-m") || arg == "-pedantic" || arg == "-pedantic-errors" || arg == "-w" || arg == "-pipe";
}

bool visibility_option(const std::string& arg, Invocation& invocation)
{
	if (starts_with(arg, "-fvisibility="))
	{
		const std::string spelling = arg.substr(13);
		if (!ir_model::source_visibility(spelling.data(), spelling.size(), &invocation.visibility))
			throw InvocationError("invalid symbol visibility: " + spelling);
	}
	else if (arg == "-fvisibility-inlines-hidden" || arg == "-fno-visibility-inlines-hidden")
		invocation.visibility_inlines_hidden = arg == "-fvisibility-inlines-hidden";
	else
		return false;
	return true;
}

bool parse_dependency_option(const std::vector<std::string>& args, size_t& i, MakeDependencies& options)
{
	const std::string& arg = args[i];
	if (arg == "-M" || arg == "-MM" || arg == "-MD" || arg == "-MMD")
	{
		options.mode = arg == "-M" || arg == "-MM" ? MakeDependencies::Mode::Only : MakeDependencies::Mode::SideFile;
		options.include_system = arg == "-M" || arg == "-MD";
	}
	else if (arg == "-MP")
		options.phony = true;
	else if (option_value(args, i, "-MF", options.file))
	{
		if (options.file.empty())
			throw InvocationError("missing dependency output file after -MF");
	}
	else
	{
		std::string target;
		const bool quoted = option_value(args, i, "-MQ", target);
		if (!quoted && !option_value(args, i, "-MT", target))
			return false;
		if (target.empty())
			throw InvocationError("empty dependency target");
		options.targets.push_back(quoted ? quote_make_name(target) : std::move(target));
	}
	return true;
}

void configure_target_runtime(Invocation& invocation, StandardIncludes includes)
{
	configure_target_environment(invocation.preprocessor, invocation.target);
	invocation.optimizer.has_gnu_sincos = target_model::has_gnu_sincos(invocation.target);
	// Darwin objects are position independent even without an explicit -fPIC.
	if (target_model::is_darwin(invocation.target))
		invocation.position_independent = true;
	if (target_model::is_wasm(invocation.target))
	{
		if (invocation.wasm_atomics)
			invocation.preprocessor.command_line.insert(0, "#define __wasm_atomics__ 1\n");
		add_wasm_headers(invocation.preprocessor, invocation.sysroot, invocation.resource_directory, includes);
		if (!invocation.sysroot.empty())
			invocation.library_paths.push_back(invocation.sysroot + "/lib/wasm32-wasip1");
	}
	else if (target_model::is_aarch64(invocation.target) && !invocation.wasm_link.requested() &&
		invocation.wasm_stack_size == 0 && !invocation.wasm_atomics_explicit)
	{
		add_aarch64_headers(invocation.preprocessor, invocation.sysroot, invocation.resource_directory, includes);
	}
	else if (!invocation.sysroot.empty() || !invocation.resource_directory.empty() || invocation.wasm_stack_size != 0 ||
		(invocation.wasm_atomics_explicit && invocation.wasm_atomics) || invocation.wasm_link.requested())
		throw InvocationError("target runtime directory/options currently require a Wasm target");
}

Input source_input(const std::string& name)
{
	const Input::Kind kind = object_name(name) ? Input::Kind::Object
		: ends_with(name, ".S")                ? Input::Kind::Assembly
		: ends_with(name, ".lowir")            ? Input::Kind::LowIR
											   : Input::Kind::Source;
	return Input{ kind, name };
}

void input_language(Invocation& invocation)
{
	if (invocation.source_language.empty())
		return;
	for (Input& input : invocation.inputs)
		if (input.kind == Input::Kind::Source || input.kind == Input::Kind::Assembly)
			input.kind = invocation.source_language == "assembler-with-cpp" ? Input::Kind::Assembly
																			: Input::Kind::Source;
}

uint32_t parse_wasm_stack_size(const std::string& size)
{
	uint64_t bytes = 0;
	for (char digit : size)
	{
		if (digit < '0' || digit > '9' || bytes > 0x7fffffffu / 10)
			throw InvocationError("invalid Wasm stack size");
		bytes = bytes * 10 + static_cast<unsigned>(digit - '0');
	}
	if (bytes == 0 || bytes > 0x7fffffffu || bytes % 16 != 0)
		throw InvocationError("Wasm stack size must be a positive multiple of 16 below 2 GiB");
	return static_cast<uint32_t>(bytes);
}

// -S -emit-lowir compiles as -c does: LowIR is the only assembly form this
// driver writes.
void lowir_output(Invocation& invocation, bool assembly_output)
{
	if (assembly_output != invocation.emit_lowir)
		throw InvocationError(assembly_output ? "-S requires -emit-lowir" : "-emit-lowir requires -S");
	invocation.compile_only = invocation.compile_only || invocation.emit_lowir;
}

void configure_mode_macros(Invocation& invocation, bool optimize_size, unsigned pic_level, unsigned pie_level)
{
	// These macros describe this invocation. Explicit -D/-U retain their
	// precedence over target and optimization defaults.
	std::string mode_macros = invocation.optimizer.level > 0 ? "#define __OPTIMIZE__ 1\n" : "";
	if (invocation.optimizer.level == 0 || !invocation.optimizer.optional_inlining)
		mode_macros += "#define __NO_INLINE__ 1\n";
	if (optimize_size)
		mode_macros += "#define __OPTIMIZE_SIZE__ 1\n";
	if (target_model::is_darwin(invocation.target) && pic_level == 0)
		pic_level = 2;
	if (pic_level != 0)
		mode_macros += "#define __PIC__ " + std::to_string(pic_level) + "\n#define __pic__ " +
			std::to_string(pic_level) + "\n";
	if (pie_level != 0)
		mode_macros += "#define __PIE__ " + std::to_string(pie_level) + "\n#define __pie__ " +
			std::to_string(pie_level) + "\n";
	invocation.preprocessor.command_line.insert(0, mode_macros);
}

void configure_preprocessor(Invocation& invocation, StandardIncludes includes, const std::string& gcc_install_dir)
{
	const MakeDependencies& dependencies = invocation.dependencies;
	if (dependencies.mode == MakeDependencies::Mode::None &&
		(dependencies.phony || !dependencies.file.empty() || !dependencies.targets.empty()))
		throw InvocationError("-MF, -MT, -MQ and -MP require a dependency generation mode");
	const bool preprocess_only = invocation.preprocess_only || dependencies.mode == MakeDependencies::Mode::Only;
	if (!preprocess_only && (invocation.dump_macros || invocation.trace_includes))
		throw InvocationError("-dM and -H require -E");
	for (const Input& input : invocation.inputs)
		if (input.name == "-" && !preprocess_only)
			throw InvocationError("standard input requires -E");
	configure_source_language(
		invocation.source_language, invocation.standard, invocation.exceptions, invocation.preprocessor);
	configure_c_environment(invocation.preprocessor, invocation.target, invocation.c_environment);
	std::string host_error;
	if (!add_host_environment(invocation.preprocessor,
			invocation.target == native::host_target() ? includes : StandardIncludes::None, gcc_install_dir,
			host_error))
		throw InvocationError(host_error);
	configure_target_runtime(invocation, includes);
	prune_include_paths(invocation.preprocessor);
	if (preprocess_only)
		invocation.preprocessor.builtin_declarations.clear();
}

Invocation parse(const std::vector<std::string>& args, const PreprocessorOptions& base)
{
	Invocation invocation;
	invocation.preprocessor = base;
	std::string value;
	std::string forced_includes;
	std::string gcc_install_dir;
	StandardIncludes includes = StandardIncludes::All;
	bool pthread = false;
	bool default_lto = false;
	bool optimize_size = false, popcnt_explicit = false, char_signedness_explicit = false;
	unsigned pic_level = 0, pie_level = 0;
	bool assembly_output = false;
	const size_t base_defines = invocation.preprocessor.command_line.size();
	for (size_t i = 0; i < args.size(); ++i)
	{
		const std::string& arg = args[i];
		if (arg == "-c")
			invocation.compile_only = true;
		else if (arg == "-S")
			assembly_output = true;
		else if (arg == "-emit-lowir")
			invocation.emit_lowir = true;
		else if (arg == "-flowir-passes" || arg == "-fno-lowir-passes")
			invocation.lowir_passes = arg == "-flowir-passes";
		else if (float_contract_option(arg, &invocation.contract_float) || fixed_x18_option(arg, &invocation.fixed_x18))
			continue;
		else if (arg == "-fPIC" || arg == "-fpic" || arg == "-fPIE" || arg == "-fpie")
		{
			invocation.position_independent = true;
			pic_level = arg == "-fPIC" || arg == "-fPIE" ? 2 : 1;
			pie_level = arg == "-fPIE" || arg == "-fpie" ? pic_level : 0;
		}
		else if (arg == "-fno-PIC" || arg == "-fno-pic" || arg == "-fno-PIE" || arg == "-fno-pie")
		{
			invocation.position_independent = false;
			pic_level = pie_level = 0;
		}
		else if (arg == "-mred-zone" || arg == "-mno-red-zone")
			invocation.red_zone = arg == "-mred-zone";
		else if (arg == "-ffunction-sections" || arg == "-fno-function-sections")
			invocation.function_sections = arg == "-ffunction-sections";
		else if (arg == "-pthread")
			pthread = true;
		else if (parse_wasm_link_option(args, i, invocation.wasm_link))
			continue;
		else if (arg == "-matomics" || arg == "-mno-atomics")
		{
			invocation.wasm_atomics = arg == "-matomics";
			invocation.wasm_atomics_explicit = true;
		}
		else if (arg == "-E")
			invocation.preprocess_only = true;
		else if (arg == "-dM")
			invocation.dump_macros = true;
		else if (arg == "-H")
			invocation.trace_includes = true;
		else if (select_standard_includes(arg, includes))
			continue;
		else if (starts_with(arg, "--gcc-install-dir="))
			gcc_install_dir = arg.substr(arg.find('=') + 1);
		else if (starts_with(arg, "-Wl,-z,stack-size="))
			invocation.wasm_stack_size = parse_wasm_stack_size(arg.substr(18));
		else if (arg == "--sysroot" || starts_with(arg, "--sysroot=") || arg == "-resource-dir" ||
			starts_with(arg, "-resource-dir="))
		{
			const bool root = starts_with(arg, "--sysroot");
			const size_t equal = arg.find('=');
			if (equal == std::string::npos && i + 1 >= args.size())
				throw InvocationError("missing directory after " + arg);
			const std::string directory = equal == std::string::npos ? args[++i] : arg.substr(equal + 1);
			if (directory.empty())
				throw InvocationError("empty target directory");
			(root ? invocation.sysroot : invocation.resource_directory) = directory;
		}
		else if (arg == "-nostdlib" || arg == "-nodefaultlibs")
		{
			invocation.no_standard_libraries = true;
			invocation.no_startfiles = invocation.no_startfiles || arg == "-nostdlib";
		}
		else if (arg == "-nostartfiles")
			invocation.no_startfiles = true;
		else if (arg == "-include")
		{
			if (i + 1 >= args.size())
				throw InvocationError("missing file after -include");
			// GCC: read after every -D and -U, found from the working
			// directory first.
			forced_includes += "#include \"" + args[++i] + "\"\n";
		}
		else if (starts_with(arg, "-std="))
			invocation.standard = arg.substr(5);
		else if (starts_with(arg, "-fconstexpr-ops-limit="))
			invocation.constexpr_step_limit = constexpr_step_limit(arg);
		else if (starts_with(arg, "-stdlib="))
		{
			if (!host_stdlib_selected(arg.substr(8)))
				throw InvocationError("this compiler was not built for " + arg + " (CPPGM_STDLIB_FLAGS)");
		}
		else if (arg == "-x")
		{
			if (i + 1 >= args.size())
				throw InvocationError("missing language after -x");
			invocation.source_language = args[++i];
		}
		else if (arg == "-fno-exceptions" || arg == "-fexceptions")
			invocation.exceptions = arg == "-fexceptions" ? SourceExceptions::Enabled : SourceExceptions::Disabled;
		else if (visibility_option(arg, invocation))
			continue;
		else if (arg == "-fno-strict-aliasing" || arg == "-fstrict-aliasing")
			invocation.strict_aliasing = arg == "-fstrict-aliasing";
		else if (arg == "-mpopcnt" || arg == "-mno-popcnt")
		{
			invocation.preprocessor.popcnt = arg == "-mpopcnt";
			popcnt_explicit = true;
		}
		else if (sse_option(arg, invocation.preprocessor.sse_level))
		{
		}
		else if (arg == "-fno-rtti" || arg == "-frtti")
			invocation.preprocessor.modes.rtti = arg == "-frtti";
		else if (arg == "-funsigned-char" || arg == "-fno-signed-char" || arg == "-fsigned-char" ||
			arg == "-fno-unsigned-char")
		{
			char_signedness_explicit = true;
			invocation.preprocessor.plain_char_unsigned = arg == "-funsigned-char" || arg == "-fno-signed-char";
		}
		else if (c_environment_option(arg, invocation.c_environment) ||
			diagnostic_option(arg, invocation.preprocessor.extension_warnings,
				invocation.preprocessor.warn_system_headers, &invocation.ignore_narrowing))
			continue;
		else if (arg == "--stats")
			invocation.stats = true;
		else if (arg == "--stats-functions")
			invocation.function_census = true;
		else if (starts_with(arg, "-g"))
		{
			const int request = debug_info_request(arg);
			if (request >= 0)
			{
				invocation.debug_info = request != 0;
				invocation.debug_types = debug_type_request(arg) != 0;
			}
		}
		else if (optimization_level(arg) >= 0)
		{
			invocation.optimizer.level = optimization_level(arg);
			optimize_size = arg == "-Os" || arg == "-Oz";
			invocation.optimizer.minimize_size = arg == "-Oz";
			invocation.debug_optimization = arg == "-Og";
		}
		else if (arg == "-flto" || arg == "-flto=full" || arg == "-fno-lto")
		{
			default_lto = arg == "-flto";
			invocation.whole_source_lto = arg == "-flto=full";
		}
		else if (arg == "-fno-inline" || arg == "-finline")
			invocation.optimizer.optional_inlining = arg == "-finline";
		else if (arg == "--inline-limit")
		{
			if (i + 1 >= args.size() || !opt::parse_inline_limit(args[++i], invocation.optimizer.limits))
				throw InvocationError("invalid --inline-limit");
		}
		else if (arg == "--verify-passes")
			invocation.optimizer.verify_passes = true;
		else if (arg.compare(0, 16, "--verify-passes=") == 0)
		{
			invocation.optimizer.verify_passes = true;
			invocation.optimizer.verify_dump = arg.substr(16);
		}
		else if (arg == "-fsyntax-only")
			invocation.syntax_only = true;
		else if (arg == "-o")
		{
			if (i + 1 >= args.size())
				throw InvocationError("missing output file after -o");
			invocation.output = args[++i];
		}
		else if (arg == "--export" || starts_with(arg, "--export=") || starts_with(arg, "-Wl,--export="))
		{
			if (arg == "--export" && i + 1 >= args.size())
				throw InvocationError("missing export name");
			const std::string name = arg == "--export" ? args[++i] : arg.substr(starts_with(arg, "-Wl,") ? 13 : 9);
			if (name.empty())
				throw InvocationError("missing export name");
			invocation.exports.push_back(name);
		}
		else if (arg == "--target" || starts_with(arg, "--target="))
		{
			if (arg == "--target" && i + 1 >= args.size())
				throw InvocationError("missing target after --target");
			const std::string target = arg == "--target" ? args[++i] : arg.substr(9);
			if (!native::parse_target(target, invocation.target))
				throw InvocationError("unsupported target: " + target);
		}
		else if (parse_include_option(args, i, invocation.preprocessor))
			continue;
		else if (option_value(args, i, "-D", value))
		{
			const size_t equals = value.find('=');
			invocation.preprocessor.command_line += "#define " +
				(equals == std::string::npos ? value + " 1"
											 : value.substr(0, equals) + " " + value.substr(equals + 1)) +
				"\n";
		}
		else if (option_value(args, i, "-U", value))
			invocation.preprocessor.command_line += "#undef " + value + "\n";
		else if (option_value(args, i, "-L", value))
			invocation.library_paths.push_back(value);
		else if (option_value(args, i, "-l", value))
			invocation.inputs.push_back(Input{ Input::Kind::Library, value });
		else if (parse_dependency_option(args, i, invocation.dependencies))
			continue;
		else if (refused_flag(arg))
			throw InvocationError("unsupported option (it changes the program's meaning): " + arg);
		else if (accepted_flag(arg))
			continue;
		else if (arg != "-" && starts_with(arg, "-"))
			throw InvocationError("unsupported option: " + arg);
		else
			invocation.inputs.push_back(source_input(arg));
	}
	if (default_lto && target_model::is_aarch64(invocation.target))
		invocation.whole_source_lto = true;
	else
		invocation.wasm_link.fold_functions = default_lto;
	input_language(invocation);
	if (invocation.inputs.empty())
		throw InvocationError("no input files");
	lowir_output(invocation, assembly_output);
	// GCC's -pthread defines _REENTRANT ahead of every -D and -U wherever
	// it is written (the host link adds the thread library; link mode's
	// runtime needs nothing).
	if (pthread)
		invocation.preprocessor.command_line.insert(base_defines, "#define _REENTRANT 1\n");
	invocation.preprocessor.command_line += forced_includes;
	if (!char_signedness_explicit && invocation.target == native::Target::AArch64Linux)
		invocation.preprocessor.plain_char_unsigned = true;
	if (!popcnt_explicit)
		invocation.preprocessor.popcnt = invocation.preprocessor.sse_level >= 4;
	configure_mode_macros(invocation, optimize_size, pic_level, pie_level);
	// Preserve named objects and statement boundaries in the debugging level.
	// Preprocessing still observes GCC's __OPTIMIZE__ for -Og.
	if (invocation.debug_optimization && invocation.debug_types)
		invocation.optimizer.level = 0;
	configure_preprocessor(invocation, includes, gcc_install_dir);
	return invocation;
}

struct SourceInputs
{
	const Input* begin;
	const Input* end;
};

SourceInputs source_lto_inputs(const Invocation& invocation)
{
	const Input* end = invocation.inputs.data() + invocation.inputs.size();
	if (!invocation.whole_source_lto)
		return { end, end };
	const auto is_source = [](const Input& input) { return input.kind == Input::Kind::Source; };
	const Input* first = std::find_if(invocation.inputs.data(), end, is_source);
	const Input* after = std::find_if_not(first, end, is_source);
	if (first == after || std::find_if(after, end, is_source) != end)
		throw InvocationError("-flto=full needs consecutive source inputs");
	return { first, after };
}

// The semantic graph's template and evaluation work for a unit's stats
// line (hosted compilations have no --emit-lowir view of it).
struct UnitWork
{
	telemetry::Counter specializations = 0;
	telemetry::Counter instantiated_classes = 0;
	telemetry::Counter instantiated_functions = 0;
	telemetry::Counter instantiated_variables = 0;
	telemetry::Counter constant_evaluations = 0;
	telemetry::Counter resolutions = 0;
	telemetry::Counter candidates = 0;
};

void report_unit(const std::string& path, double front_ms, double back_ms, const native::ObjectStats& stats,
	const UnitWork& work, const native::object::ObjectFile& object)
{
#if CPPGM_TELEMETRY_ENABLED
	uint64_t bytes = 0;
	for (const native::object::Section& section : object.sections)
		bytes += section.bytes.size();
	std::cerr << "cppgm compile stats " << path << ": functions=" << stats.select.functions
			  << " lowir_instructions=" << stats.select.lowir_instructions
			  << " mir_instructions=" << stats.select.mir_instructions << " code_bytes=" << stats.emit.code_bytes
			  << " sections=" << stats.sections << " symbols=" << stats.symbols << " relocations=" << stats.relocations
			  << " landings=" << stats.landings << " lsdas=" << stats.lsdas << " unwind_bytes=" << stats.unwind_bytes
			  << " eh_walks=" << stats.select.eh_walks << " eh_states=" << stats.select.eh_states
			  << " pruned_functions=" << stats.pruned_functions << " specializations=" << work.specializations
			  << " instantiated_classes=" << work.instantiated_classes
			  << " instantiated_functions=" << work.instantiated_functions
			  << " instantiated_variables=" << work.instantiated_variables
			  << " constant_evaluations=" << work.constant_evaluations << " resolutions=" << work.resolutions
			  << " candidates=" << work.candidates << " section_bytes=" << bytes << " front_ms=" << front_ms
			  << " lower_and_object_ms=" << back_ms << " select_ms=" << stats.select_ms
			  << " encode_ms=" << stats.encode_ms << " peak_rss_kb=" << peak_rss_kb() << std::endl;
#endif
}

// --stats-functions: the unit's census lines on standard error.
void report_census(const native::ObjectStats& stats)
{
	if (stats.census_lines.empty())
		return;
	for (const std::string& line : stats.census_lines)
		std::cerr << line << '\n';
	std::cerr.flush();
}

// One translation unit through the whole pipeline into `object`: each
// function definition is encoded as the lowering completes it and its
// LowIR body released; the unit's syntax and semantic graph are released
// before the remaining definitions are encoded and the object is built.
// Optimizes `program` at the invocation's level (a course object's
// thunks given their targets: OptimizerOptions::inline_thunk_targets). A
// jump thunk is then what its optimized body says: Program::jump_thunks,
// not in the LowIR text, is recognized again from the bodies as an object
// compile of the optimized LowIR recognizes it
// (native::recover_jump_thunks), so a thunk whose target was inlined into
// it is encoded as written, and a host object is the one compiled from
// the optimized text (lowiropt and --emit-lowir keep thunks as lowered).
void optimize_unit(lowir::Program& program, const Invocation& invocation, native::EhModel eh_model)
{
	if (invocation.optimizer.level == 0 || !invocation.lowir_passes)
		return;
	opt::OptimizerOptions options = invocation.optimizer;
	options.inline_thunk_targets = eh_model == native::EhModel::Course;
	opt::optimize_program(program, options, nullptr);
	program.jump_thunks.clear();
	if (!target_model::is_aarch64(invocation.target))
		native::recover_jump_thunks(program, eh_model);
}

void write_side_dependencies(
	const Invocation& invocation, const std::string& path, const std::vector<std::string>& headers);

bool lower_source(const std::string& path, const Invocation& invocation, lower::ProgramLowering& lowering,
	UnitWork& work, double& front_ms, std::chrono::steady_clock::time_point start)
{
	{
		syntax::SyntaxUnit unit(invocation.preprocessor, path);
		if (!unit.parse())
		{
			std::cerr << "ERROR: " << unit.error() << std::endl;
			return false;
		}
		sema::SemanticGraph graph(invocation.preprocessor.plain_char_unsigned, invocation.target);
		graph.names.reserve(unit.counters().bindings);
		sema::Analyzer analyzer(graph, unit.identifiers(), sema::AnalysisMode::Semantics);
		analyzer.set_source_language(
			invocation.preprocessor.language, invocation.preprocessor.gnu_c(), invocation.preprocessor.c_freestanding);
		if (invocation.preprocessor.language == SourceLanguage::Cxx)
			analyzer.set_number_dialect(invocation.preprocessor.literals);
		analyzer.set_hosted(invocation.preprocessor.hosted);
		analyzer.set_host_objects(lowering.host_objects());
		analyzer.set_cxx_edition(
			invocation.preprocessor.cxx_edition, invocation.preprocessor.diagnose_cxx_extensions());
		analyzer.set_exceptions(invocation.preprocessor.modes.exceptions);
		analyzer.set_constexpr_step_limit(invocation.constexpr_step_limit);
		analyzer.set_ignore_narrowing(invocation.ignore_narrowing);
		analyzer.set_source_positions(&unit.positions());
		try
		{
			analyzer.analyze(unit.tree());
			if (invocation.dependencies.mode == MakeDependencies::Mode::SideFile)
				write_side_dependencies(
					invocation, path, unit.dependency_headers(invocation.dependencies.include_system));
			front_ms += milliseconds_since(start);
			if (invocation.syntax_only)
				return true;
			lowering.lower_unit(unit.tree(), graph, analyzer);
			work.specializations += graph.specializations;
			work.instantiated_classes += graph.instantiated_classes;
			work.instantiated_functions += graph.instantiated_functions;
			work.instantiated_variables += graph.instantiated_variables;
			work.constant_evaluations += graph.constant_evaluations;
			work.resolutions += graph.resolutions;
			work.candidates += graph.candidates;
		}
		catch (const sema::SemanticError& e)
		{
			std::cerr << "ERROR: " << unit.describe(e.location(), e.what()) << std::endl;
			return false;
		}
		catch (const lower::LoweringError& e)
		{
			std::cerr << "ERROR: " << unit.describe(e.location(), e.what()) << std::endl;
			return false;
		}
		catch (const InternalError& e)
		{
			throw unit.locate(e);
		}
	}
	return true;
}

// -S -emit-lowir: a unit's program as the back end would take it, written
// to `output` (at -O0 each definition as the lowering completes it, as -c
// encodes it).
bool write_unit_lowir(const lowir::Program& program, lowir::DefinitionStream* definitions, const std::string& output)
{
	if (definitions != nullptr ? lowir::write_program_file(program, *definitions, output)
							   : lowir::write_program_file(program, output))
		return true;
	std::cerr << "ERROR: cannot write " << output << std::endl;
	return false;
}

// With `lowir_output`, -S -emit-lowir: the program is written there as text
// instead of compiled. A source LTO group shares the program and the lowering.
bool compile_native_sources(SourceInputs sources, const Invocation& invocation, native::EhModel eh_model,
	native::object::ObjectFile& object, const std::string* lowir_output = nullptr)
{
	const std::chrono::steady_clock::time_point start = std::chrono::steady_clock::now();
	lowir::Program program;
	lower::ProgramLowering lowering(program);
	native::ObjectStats stats;
	stats.clocks = invocation.stats;
	stats.census = invocation.function_census;
	const bool arm = target_model::is_aarch64(invocation.target);
	std::unique_ptr<native::ObjectBuilder> builder;
	if (!arm)
		builder.reset(new native::ObjectBuilder(program, stats, eh_model, invocation.optimizer.level,
			invocation.position_independent, invocation.target, invocation.red_zone, invocation.function_sections));
	// At -O0 each definition is encoded (or written) as the lowering
	// completes it; an optimizing level keeps the program until the
	// optimizer has run.
	lowir::DefinitionStream definitions;
	const bool streaming = invocation.optimizer.level == 0 && (!arm || lowir_output != nullptr);
	if (streaming)
		lowering.set_definition_stream(
			lowir_output != nullptr ? static_cast<lowir::DefinitionSink*>(&definitions) : builder.get());
	lowering.set_object_mode(true);
	lowering.set_debug_locations(invocation.debug_info);
	lowering.set_debug_types(invocation.debug_types);
	lowering.set_host_objects(eh_model == native::EhModel::Host);
	lowering.set_macho_objects(target_model::is_darwin(invocation.target));
	lowering.set_optimizing(true);
	lowering.set_strict_aliasing(invocation.strict_aliasing);
	lowering.set_symbol_visibility(invocation.visibility, invocation.visibility_inlines_hidden);
	lowering.set_popcnt(invocation.preprocessor.popcnt);
	lowering.set_exceptions(invocation.preprocessor.modes.exceptions);
	if (invocation.whole_source_lto)
		lowering.merge_inline_variables();
	double front_ms = 0;
	UnitWork work;
	const Input* input = sources.begin;
	try
	{
		auto unit_start = start;
		for (const Input* source = sources.begin; source != sources.end; ++source)
		{
			input = source;
			if (!lower_source(input->name, invocation, lowering, work, front_ms, unit_start))
				return false;
			if (source + 1 != sources.end)
				unit_start = std::chrono::steady_clock::now();
		}
		if (invocation.syntax_only)
			return true;
		lowering.finish();
		optimize_unit(program, invocation, eh_model);
		if (lowir_output != nullptr)
			return write_unit_lowir(program, streaming ? &definitions : nullptr, *lowir_output);
		object.path = sources.begin->name;
		if (arm)
			aarch64::compile_object(program, object, invocation.optimizer.level, invocation.position_independent,
				nullptr, invocation.function_sections, eh_model == native::EhModel::Host,
				invocation.optimizer.minimize_size, invocation.contract_float, invocation.fixed_x18);
		else
			builder->finish(object);
	}
	// The unit's errors without a source position. An InternalError (a
	// compiler bug, not an error of the program) leaves for the tool to
	// report.
	catch (const PreprocessError& e)
	{
		std::cerr << "ERROR: " << input->name << ": " << e.what() << std::endl;
		return false;
	}
	catch (const lower::LoweringError& e)
	{
		std::cerr << "ERROR: " << input->name << ": " << e.what() << std::endl;
		return false;
	}
	catch (const native::BackendError& e)
	{
		std::cerr << "ERROR: " << input->name << ": " << e.what() << std::endl;
		return false;
	}
	catch (const abi_mangle::EncodingError& e)
	{
		std::cerr << "ERROR: " << input->name << ": " << e.what() << std::endl;
		return false;
	}
	catch (const LimitError& e)
	{
		std::cerr << "ERROR: " << input->name << ": " << e.what() << std::endl;
		return false;
	}
	if (invocation.stats)
		report_unit(object.path, front_ms, milliseconds_since(start) - front_ms, stats, work, object);
	report_census(stats);
	return true;
}

// One serialized LowIR unit (PA33's LowIR object input): read and
// validated, optimized at the invocation's level, then compiled by the same
// object back end as a source's program.
bool compile_lowir_unit(const std::string& path, const Invocation& invocation, native::EhModel eh_model,
	native::object::ObjectFile& object, const std::string* lowir_output)
{
	lowir::Program program;
	std::string error;
	if (!lowir::read_program_files(program, std::vector<std::string>(1, path), error))
	{
		std::cerr << "ERROR: " << error << std::endl;
		return false;
	}
	if (program.explicit_target && program.target != invocation.target)
		throw InvocationError("input and output target profiles differ");
	program.target = invocation.target;
	if (!target_model::is_aarch64(invocation.target))
		native::recover_jump_thunks(program, eh_model);
	optimize_unit(program, invocation, eh_model);
	if (lowir_output != nullptr)
		return write_unit_lowir(program, nullptr, *lowir_output);
	native::ObjectStats stats;
	stats.clocks = invocation.stats;
	stats.census = invocation.function_census;
	object.path = path;
	if (target_model::is_aarch64(invocation.target))
	{
		try
		{
			aarch64::compile_object(program, object, invocation.optimizer.level, invocation.position_independent,
				nullptr, invocation.function_sections, eh_model == native::EhModel::Host,
				invocation.optimizer.minimize_size, invocation.contract_float, invocation.fixed_x18);
		}
		catch (const native::BackendError& e)
		{
			throw InvocationError(e.what());
		}
		return true;
	}
	if (!native::compile_object(program, object, error, &stats, eh_model, invocation.optimizer.level,
			invocation.position_independent, invocation.target, invocation.red_zone, invocation.function_sections))
	{
		std::cerr << "ERROR: " << path << ": " << error << std::endl;
		return false;
	}
	report_census(stats);
	return true;
}

bool compile_input(const Input& input, const Invocation& invocation, native::EhModel eh_model,
	native::object::ObjectFile& object, const std::string* lowir_output = nullptr)
{
	if (input.kind == Input::Kind::Assembly)
	{
		if (target_model::is_aarch64(invocation.target))
			throw InvocationError(
				"the integrated module assembler supports x86-64 assembly; pass an assembled AArch64 object");
		return compile_native_assembly(input.name, invocation.preprocessor, invocation.target, object);
	}
	return input.kind == Input::Kind::LowIR
		? compile_lowir_unit(input.name, invocation, eh_model, object, lowir_output)
		: compile_native_sources({ &input, &input + 1 }, invocation, eh_model, object, lowir_output);
}

bool regular_file(const std::string& path)
{
	struct stat status;
	return stat(path.c_str(), &status) == 0 && S_ISREG(status.st_mode);
}

// An output that names one of the inputs would destroy it (host compilers
// refuse too).
void check_output(const Invocation& invocation, const std::string& output)
{
	struct stat out;
	if (stat(output.c_str(), &out) != 0)
		return;
	for (const Input& input : invocation.inputs)
	{
		struct stat in;
		if (input.kind != Input::Kind::Library && stat(input.name.c_str(), &in) == 0 && in.st_dev == out.st_dev &&
			in.st_ino == out.st_ino)
			throw InvocationError("input file " + input.name + " is the same as the output file");
	}
}

std::string output_name(const std::string& source, const char* suffix)
{
	std::string name = source.substr(source.rfind('/') == std::string::npos ? 0 : source.rfind('/') + 1);
	const size_t dot = name.rfind('.');
	if (dot != std::string::npos && dot != 0)
		name.erase(dot);
	return name + suffix;
}

void write_side_dependencies(
	const Invocation& invocation, const std::string& path, const std::vector<std::string>& headers)
{
	const MakeDependencies& options = invocation.dependencies;
	const std::string source = path == "-" ? "<stdin>" : path;
	const std::string default_target = output_name(source, invocation.emit_lowir ? ".lowir" : ".o");
	const std::string& output = invocation.output;
	const std::string& target = output.empty() || invocation.preprocess_only ? default_target : output;
	std::string file = options.file;
	if (file.empty())
	{
		if (output.empty())
			file = output_name(source, ".d");
		else
		{
			const size_t slash = output.rfind('/');
			const size_t prefix = slash == std::string::npos ? 0 : slash + 1;
			file = output.substr(0, prefix) + output_name(output, ".d");
		}
	}
	if (file == "-")
	{
		write_make_rule(std::cout, options, target, source, headers);
		if (!std::cout)
			throw InputOutputError("cannot write dependencies to standard output");
		return;
	}
	if (file == output || (!invocation.preprocess_only && file == target))
		throw InvocationError("dependency file is the same as the primary output");
	check_output(invocation, file);
	std::ofstream stream(file);
	write_make_rule(stream, options, target, source, headers);
	stream.close();
	if (!stream)
		throw InputOutputError("cannot write " + file);
}

// -c's output for an input, or -S -emit-lowir's (<input>.lowir).
std::string default_output_name(const Invocation& invocation, const Input& input)
{
	if (!invocation.output.empty())
		return invocation.output;
	return output_name(input.name, invocation.emit_lowir ? ".lowir" : ".o");
}

// The exception model of a -c object: a course object (`.obj`, PA25's
// encoding for link mode) keeps the course's runtime ABI; any other
// object is a host object the host toolchain links, with host EH tables.
native::EhModel object_eh_model(const std::string& output)
{
	return ends_with(output, ".obj") ? native::EhModel::Course : native::EhModel::Host;
}

bool write_native_object(const native::object::ObjectFile& object, const std::string& output, native::Target target)
{
	std::string error;
	if (target_model::is_darwin(target) ? native::object::write_macho_object(object, output, error)
										: native::object::write_elf_object(object, output, error))
		return true;
	std::cerr << "ERROR: " << error << std::endl;
	return false;
}

int compile_lto_object(const Invocation& invocation)
{
	const SourceInputs sources = source_lto_inputs(invocation);
	const std::string& output = invocation.output;
	if (output.empty() || sources.begin != invocation.inputs.data() ||
		sources.end != invocation.inputs.data() + invocation.inputs.size())
		throw InvocationError("-flto=full -c requires source inputs and an explicit -o");
	check_output(invocation, output);
	native::object::ObjectFile object;
	if (!compile_native_sources(sources, invocation, object_eh_model(output), object))
		return EXIT_FAILURE;
	return write_native_object(object, output, invocation.target) ? EXIT_SUCCESS : EXIT_FAILURE;
}

// Libraries are link inputs: -c compiles the sources and ignores them.
int compile_mode(const Invocation& invocation)
{
	if (invocation.whole_source_lto)
		return compile_lto_object(invocation);
	size_t sources = 0;
	for (const Input& input : invocation.inputs)
		sources += input.kind != Input::Kind::Library ? 1 : 0;
	if (sources != 1 && !invocation.output.empty())
		throw InvocationError("cannot specify -o with -c and several inputs");
	for (const Input& input : invocation.inputs)
	{
		if (input.kind == Input::Kind::Library)
			continue;
		if (input.kind == Input::Kind::Object)
			throw InvocationError("-c needs source, assembly or LowIR inputs: " + input.name);
		native::object::ObjectFile object;
		const std::string output = default_output_name(invocation, input);
		if (invocation.emit_lowir)
		{
			check_output(invocation, output);
			// (Lowered as a host object is, whatever the output's name.)
			if (!compile_input(input, invocation, native::EhModel::Host, object, &output))
				return EXIT_FAILURE;
			continue;
		}
		if (!compile_input(input, invocation, object_eh_model(output), object))
			return EXIT_FAILURE;
		check_output(invocation, output);
		if (!write_native_object(object, output, invocation.target))
			return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}

// -l<name>: lib<name>.o or lib<name>.obj in the first -L directory that has one.
std::string find_library(const Invocation& invocation, const std::string& name)
{
	for (const std::string& directory : invocation.library_paths)
	{
		const std::string base = directory + (ends_with(directory, "/") ? "" : "/") + "lib" + name;
		for (const char* suffix : { ".o", ".obj", ".a" })
		{
			if ((std::string(suffix) != ".a" || target_model::is_wasm(invocation.target) ||
					target_model::is_aarch64(invocation.target)) &&
				regular_file(base + suffix))
				return base + suffix;
		}
	}
	throw InvocationError("library not found: -l" + name);
}

int link_mode(const Invocation& invocation)
{
	const std::string output = invocation.output.empty() ? "a.out" : invocation.output;
	check_output(invocation, output);
	std::vector<native::object::ObjectFile> objects;
	objects.reserve(invocation.inputs.size() + 2);
	const auto eh_model = invocation.target == native::Target::AArch64MacOS ? native::EhModel::Host
																			: native::EhModel::Course;
	const SourceInputs sources = source_lto_inputs(invocation);
	const Input* end = invocation.inputs.data() + invocation.inputs.size();
	for (const Input* next = invocation.inputs.data(); next != end;)
	{
		if (next == sources.begin)
		{
			objects.emplace_back();
			if (!compile_native_sources(sources, invocation, eh_model, objects.back()))
				return EXIT_FAILURE;
			next = sources.end;
			continue;
		}
		const Input& input = *next++;
		if (input.kind == Input::Kind::Source || input.kind == Input::Kind::LowIR ||
			input.kind == Input::Kind::Assembly)
		{
			objects.emplace_back();
			if (!compile_input(input, invocation, eh_model, objects.back()))
				return EXIT_FAILURE;
			continue;
		}
		const std::string path = input.kind == Input::Kind::Library ? find_library(invocation, input.name) : input.name;
		std::string error;
		bool loaded;
		if (target_model::is_aarch64(invocation.target))
			loaded = aarch64::read_input(path, objects, error, target_model::is_darwin(invocation.target));
		else
		{
			objects.emplace_back();
			loaded = target_model::is_darwin(invocation.target)
				? native::object::read_macho_object(path, objects.back(), error)
				: native::object::read_elf_object(path, objects.back(), error);
		}
		if (!loaded)
		{
			std::cerr << "ERROR: " << error << std::endl;
			return EXIT_FAILURE;
		}
	}
	native::LinkStats stats;
	std::string error;
	if (!native::link_executable(objects, output, error, &stats, invocation.target, !invocation.no_startfiles,
			!invocation.no_standard_libraries))
	{
		// No stale executable is left behind (as the host linker removes it).
		std::remove(output.c_str());
		std::cerr << "ERROR: " << error << std::endl;
		return EXIT_FAILURE;
	}
#if CPPGM_TELEMETRY_ENABLED
	if (invocation.stats)
		std::cerr << "cppgm link stats: objects=" << stats.objects << " sections=" << stats.sections
				  << " discarded_groups=" << stats.discarded_groups << " symbols=" << stats.symbols
				  << " relocations=" << stats.relocations << " got_slots=" << stats.got_slots
				  << " runtime_names=" << stats.runtime_members << " text_bytes=" << stats.text_bytes
				  << " rodata_bytes=" << stats.rodata_bytes << " data_bytes=" << stats.data_bytes
				  << " bss_bytes=" << stats.bss_bytes << " runtime_ms=" << stats.runtime_ms
				  << " link_ms=" << stats.link_ms << " peak_rss_kb=" << peak_rss_kb() << std::endl;
#endif
	return EXIT_SUCCESS;
}

bool wasm_assembly(const Input& input, const Invocation& invocation, wasm::LinkInputs& inputs, std::string& error)
{
	PreprocessorOptions options = invocation.preprocessor;
	options.assembler = true;
	options.language = SourceLanguage::C;
	options.cxx_edition = 0;
	options.builtin_declarations.clear();
	try
	{
		Preprocessor preprocessor(options, input.name);
		uint32_t location = 0;
		try
		{
			wasm::Object object;
			wasm::assemble(preprocessor, object, location);
			inputs.objects.push_back(std::move(object));
			return true;
		}
		catch (const wasm::WasmError& failure)
		{
			error = preprocessor.describe(location, failure.what());
		}
		catch (const PreprocessError& failure)
		{
			error = preprocessor.describe(failure);
		}
		catch (const SourceError& failure)
		{
			error = preprocessor.describe(failure);
		}
	}
	catch (const PreprocessError& failure)
	{
		error = input.name + ": " + failure.what();
	}
	catch (const SourceError& failure)
	{
		error = input.name + ": " + failure.what();
	}
	return false;
}

void configure_wasm_lowering(lower::ProgramLowering& lowering, const Invocation& invocation)
{
	// An object's LowIR before optimization is the same at every level.
	lowering.set_optimizing(true);
	lowering.set_exceptions(invocation.preprocessor.modes.exceptions);
	lowering.set_strict_aliasing(invocation.strict_aliasing);
	lowering.set_symbol_visibility(invocation.visibility, invocation.visibility_inlines_hidden);
}

bool lower_wasm_source(
	const Input& input, const Invocation& invocation, lower::ProgramLowering& lowering, bool final_source)
{
	UnitWork work;
	double front_ms = 0;
	const auto start = std::chrono::steady_clock::now();
	if (!lower_source(input.name, invocation, lowering, work, front_ms, start))
		return false;
	if (final_source)
		lowering.finish();
#if CPPGM_TELEMETRY_ENABLED
	if (invocation.stats)
		std::cerr << "cppgm wasm frontend stats " << input.name << ": front_ms=" << front_ms
				  << " lower_ms=" << milliseconds_since(start) - front_ms << " specializations=" << work.specializations
				  << " instantiated_functions=" << work.instantiated_functions << " resolutions=" << work.resolutions
				  << " candidates=" << work.candidates << std::endl;
#endif
	return true;
}

bool add_wasm_object(
	lowir::Program& program, const backend::Options& options, wasm::LinkInputs& inputs, std::string& error)
{
	std::string dump = "machine_ir wasm32 1\n";
	wasm::Object object;
	if (!wasm::compile_object(program, options, object, dump, error))
		return false;
	inputs.objects.push_back(std::move(object));
	return true;
}

// One translation unit's posttoken records (`sof`, the PA2 tokens, `eof`);
// false after an error.
// With `lowir_output`, -S -emit-lowir: the program is written there as text
// instead of compiled.
bool wasm_input(const Input& input, const Invocation& invocation, const backend::Options& options,
	wasm::LinkInputs& inputs, std::string& error, const std::string* lowir_output)
{
	if (input.kind == Input::Kind::Assembly)
		return wasm_assembly(input, invocation, inputs, error);
	if (input.kind == Input::Kind::Object || input.kind == Input::Kind::Library)
	{
		if (invocation.compile_only)
			throw InvocationError("-c requires a source or LowIR input");
		try
		{
			wasm::read_link_inputs(
				input.kind == Input::Kind::Library ? find_library(invocation, input.name) : input.name, inputs);
			return true;
		}
		catch (const wasm::WasmError& failure)
		{
			error = failure.what();
			return false;
		}
	}
	lowir::Program program;
	if (input.kind == Input::Kind::LowIR)
	{
		if (!lowir::read_program_files(program, { input.name }, error))
			return false;
	}
	else
	{
		program.target = invocation.target;
		program.explicit_target = true;
		lower::ProgramLowering lowering(program);
		configure_wasm_lowering(lowering, invocation);
		if (!lower_wasm_source(input, invocation, lowering, true))
			return false;
	}
	if (lowir_output != nullptr)
	{
		wasm::optimize_object_program(program, options, nullptr);
		if (lowir::write_program_file(program, *lowir_output))
			return true;
		error = "cannot write " + *lowir_output;
		return false;
	}
	return add_wasm_object(program, options, inputs, error);
}

bool compile_wasm_sources(SourceInputs sources, const Invocation& invocation, const backend::Options& options,
	wasm::LinkInputs& inputs, std::string& error)
{
	lowir::Program program;
	program.target = invocation.target;
	program.explicit_target = true;
	lower::ProgramLowering lowering(program);
	configure_wasm_lowering(lowering, invocation);
	lowering.merge_inline_variables();
	for (const Input* input = sources.begin; input != sources.end; ++input)
		if (!lower_wasm_source(*input, invocation, lowering, input + 1 == sources.end))
			return false;
	return add_wasm_object(program, options, inputs, error);
}

int wasm_mode(const Invocation& invocation)
{
	if (invocation.compile_only && invocation.inputs.size() != 1 && !invocation.output.empty())
		throw InvocationError("cannot specify -o with -c and several inputs");
	backend::Options options;
	options.target = invocation.target;
	options.output = invocation.output.empty() ? "a.wasm" : invocation.output;
	options.optimization_level = invocation.optimizer.level;
	options.stats = invocation.stats;
	options.exports = invocation.exports;
	options.sysroot = invocation.sysroot;
	options.resource_directory = invocation.resource_directory;
	options.cxx_runtime = true;
	options.exceptions = invocation.preprocessor.modes.exceptions;
	options.no_standard_libraries = invocation.no_standard_libraries;
	options.no_startfiles = invocation.no_startfiles;
	options.wasm_atomics = invocation.wasm_atomics;
	options.wasm_link = invocation.wasm_link;
	options.wasm_link.fold_functions |= invocation.whole_source_lto;
	options.wasm_link.compact_relocations = invocation.optimizer.minimize_size;
	if (invocation.wasm_stack_size != 0)
		options.wasm_stack_size = invocation.wasm_stack_size;
	options.optimizer = &invocation.optimizer;
	options.lowir_passes = invocation.lowir_passes;
	std::string error;
	wasm::LinkInputs objects;
	const SourceInputs sources = source_lto_inputs(invocation);
	const Input* end = invocation.inputs.data() + invocation.inputs.size();
	for (const Input* next = invocation.inputs.data(); next != end;)
	{
		if (next == sources.begin)
		{
			if (!compile_wasm_sources(sources, invocation, options, objects, error))
			{
				if (!error.empty())
					std::cerr << "ERROR: " << error << std::endl;
				return EXIT_FAILURE;
			}
			next = sources.end;
			continue;
		}
		const Input& input = *next++;
		const std::string lowir_output = invocation.emit_lowir ? default_output_name(invocation, input) : "";
		if (invocation.emit_lowir)
			check_output(invocation, lowir_output);
		if (!wasm_input(input, invocation, options, objects, error, invocation.emit_lowir ? &lowir_output : nullptr))
		{
			std::cerr << "ERROR: " << error << std::endl;
			return EXIT_FAILURE;
		}
		if (invocation.compile_only && !invocation.emit_lowir)
		{
			options.output = default_output_name(invocation, input);
			check_output(invocation, options.output);
			if (!wasm::output_objects(objects, options, true, error))
			{
				std::cerr << "ERROR: " << error << std::endl;
				return EXIT_FAILURE;
			}
			objects.objects.clear();
		}
	}
	if (!invocation.compile_only)
	{
		check_output(invocation, options.output);
		if (!wasm::output_objects(objects, options, false, error))
		{
			std::cerr << "ERROR: " << error << std::endl;
			return EXIT_FAILURE;
		}
	}
	return EXIT_SUCCESS;
}

bool preprocess_tokens(
	Preprocessor& preprocessor, const std::string& path, const Invocation& invocation, PostTokenWriter& output)
{
	// The stream types literals as the course's preprocessor does.
	PostTokenizer tokens(preprocessor, nullptr, NumberStreamDialect(invocation.preprocessor.literals),
		invocation.target, invocation.preprocessor.gnu_c(), invocation.preprocessor.cxx_edition);
	for (;;)
	{
		const PostToken& token = tokens.next();
		if (token.kind == PostTokenKind::Invalid)
		{
			std::cerr << "ERROR: " << path << ": invalid phase-7 token" << std::endl;
			return false;
		}
		output.write(token);
		if (token.kind == PostTokenKind::EndOfFile)
			return true;
	}
}

bool preprocess_unit(const Input& source, const Invocation& invocation, std::ostream& out, PostTokenWriter& output)
{
	const std::string& input = source.name;
	const std::string path = input == "-" ? "<stdin>" : input;
	const MakeDependencies& dependencies = invocation.dependencies;
	const bool only_dependencies = dependencies.mode == MakeDependencies::Mode::Only;
	if (!only_dependencies && !invocation.dump_macros)
		output.write_line("sof " + path);
	try
	{
		std::ifstream empty;
		if (input == "/dev/null")
			empty.open(input);
		std::istream* stream = input == "-" ? &std::cin : empty.is_open() ? &empty : nullptr;
		PreprocessorOptions assembly_options;
		if (source.kind == Input::Kind::Assembly)
		{
			assembly_options = invocation.preprocessor;
			assembly_options.assembler = true;
			assembly_options.language = SourceLanguage::C;
			assembly_options.cxx_edition = 0;
			assembly_options.builtin_declarations.clear();
		}
		Preprocessor preprocessor(
			source.kind == Input::Kind::Assembly ? assembly_options : invocation.preprocessor, path, stream);
		try
		{
			if (only_dependencies || invocation.dump_macros)
			{
				while (preprocessor.next().kind != PPTokenKind::EndOfFile)
				{
				}
				if (only_dependencies)
					write_make_rule(out, dependencies, output_name(path, ".o"), path,
						preprocessor.dependency_headers(dependencies.include_system));
				else
					preprocessor.dump_macros(out);
			}
			else if (!preprocess_tokens(preprocessor, path, invocation, output))
				return false;
			if (invocation.trace_includes)
				preprocessor.trace_includes(std::cerr);
			if (dependencies.mode == MakeDependencies::Mode::SideFile)
				write_side_dependencies(
					invocation, input, preprocessor.dependency_headers(dependencies.include_system));
			return true;
		}
		catch (const PreprocessError& e)
		{
			std::cerr << "ERROR: " << preprocessor.describe(e) << std::endl;
		}
		catch (const SourceError& e)
		{
			std::cerr << "ERROR: " << preprocessor.describe(e) << std::endl;
		}
	}
	catch (const PreprocessError& e)
	{
		std::cerr << "ERROR: " << path << ": " << e.what() << std::endl;
	}
	return false;
}

// -E: the PA4 preproc stream of every source. -M/-MM: make rules in
// dependency order. Each mode can direct its output to a file.
int preprocess_mode(const Invocation& invocation)
{
	const MakeDependencies& dependencies = invocation.dependencies;
	const bool only_dependencies = dependencies.mode == MakeDependencies::Mode::Only;
	const std::string& path = only_dependencies && !dependencies.file.empty() ? dependencies.file : invocation.output;
	std::vector<const Input*> sources;
	for (const Input& input : invocation.inputs)
	{
		if (input.kind == Input::Kind::Source || (only_dependencies && input.kind == Input::Kind::Assembly))
			sources.push_back(&input);
		else if (only_dependencies || input.kind != Input::Kind::Library)
			throw InvocationError("preprocessing requires source inputs: " + input.name);
	}
	if (!only_dependencies && sources.size() != 1 && !path.empty())
		throw InvocationError("cannot specify -o with -E and several inputs");
	std::ofstream file;
	if (!path.empty() && (!only_dependencies || path != "-"))
	{
		check_output(invocation, path);
		file.open(path, std::ios::binary);
		if (!file)
			throw InputOutputError("cannot write " + path);
	}
	std::ostream& out = file.is_open() ? file : std::cout;
	PostTokenWriter output(out);
	if (!only_dependencies && !invocation.dump_macros)
		output.write_line("preproc " + std::to_string(sources.size()));
	for (const Input* source : sources)
		if (!preprocess_unit(*source, invocation, out, output))
			return EXIT_FAILURE;
	output.flush();
	out.flush();
	return out ? EXIT_SUCCESS : EXIT_FAILURE;
}

} // namespace

int debug_info_request(const std::string& arg)
{
	if (arg == "-g0" || arg == "-ggdb0")
		return 0;
	if (starts_with(arg, "-gno-") || starts_with(arg, "-gz") || arg == "-gcolumn-info" || arg == "-gpubnames" ||
		arg == "-gsplit-dwarf" || starts_with(arg, "-gstrict-dwarf") || arg == "-grecord-gcc-switches")
		return -1;
	return 1;
}

int debug_type_request(const std::string& arg)
{
	const int level = debug_info_request(arg);
	if (level <= 0)
		return level;
	return arg == "-gline-tables-only" || arg == "-g1" || arg == "-ggdb1" ? 0 : 1;
}

int run_toolchain(const std::vector<std::string>& args, const PreprocessorOptions& base)
{
	const Invocation invocation = parse(args, base);
	if (invocation.dependencies.mode == MakeDependencies::Mode::Only)
		return preprocess_mode(invocation);
	const bool wasm_target = target_model::is_wasm(invocation.target);
	if (invocation.whole_source_lto)
	{
		if (!wasm_target && !target_model::is_aarch64(invocation.target) && invocation.target != native::Target::Linux)
			throw InvocationError("-flto=full requires an AArch64, Linux x86-64 or Wasm target");
		if (invocation.preprocess_only || invocation.syntax_only || invocation.emit_lowir ||
			(wasm_target && invocation.compile_only))
			throw InvocationError("-flto=full requires a link command or a supported native object build");
	}
	for (const Input& input : invocation.inputs)
		if (input.kind == Input::Kind::Assembly &&
			(invocation.preprocess_only || invocation.syntax_only || invocation.emit_lowir))
			throw InvocationError("assembly input requires a compile or link invocation");

	if (!wasm_target && !invocation.exports.empty())
		throw InvocationError("explicit function exports require a Wasm target");
	if (invocation.preprocess_only)
		return preprocess_mode(invocation);
	if (invocation.syntax_only)
	{
		for (const Input& input : invocation.inputs)
		{
			native::object::ObjectFile object;
			if (input.kind == Input::Kind::Source &&
				!compile_native_sources({ &input, &input + 1 }, invocation, native::EhModel::Host, object))
				return EXIT_FAILURE;
		}
		return EXIT_SUCCESS;
	}
	if (wasm_target)
		return wasm_mode(invocation);
	return invocation.compile_only ? compile_mode(invocation) : link_mode(invocation);
}

int run_query(const std::string& flag)
{
	std::cout << host_query(flag);
	std::cout.flush();
	return std::cout ? EXIT_SUCCESS : EXIT_FAILURE;
}

} // namespace driver
