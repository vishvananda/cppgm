#include "driver/wasm_environment.h"

#include "driver/binary128_predefines.h"
#include "driver/integer_predefines.h"

namespace driver {

void add_wasm_headers(PreprocessorOptions& options, const std::string& sysroot, const std::string& resource_directory,
	StandardIncludes includes)
{
	if (includes == StandardIncludes::None)
		return;
	if (includes == StandardIncludes::All && !sysroot.empty() && options.language != SourceLanguage::C)
	{
		if (options.target != target_model::Target::Emscripten)
		{
			options.system_include_paths.push_back(
				sysroot + "/include/wasm32-wasip1/" + (options.modes.exceptions ? "eh" : "noeh") + "/c++/v1");
			options.system_include_paths.push_back(sysroot + "/include/wasm32-wasip1/c++/v1");
		}
		options.system_include_paths.push_back(sysroot + "/include/c++/v1");
	}
	if (!resource_directory.empty())
		options.system_include_paths.push_back(resource_directory + "/include");
	if (!sysroot.empty())
	{
		if (options.target != target_model::Target::Emscripten)
			options.system_include_paths.push_back(sysroot + "/include/wasm32-wasip1");
		options.system_include_paths.push_back(sysroot + "/include");
	}
}

void configure_wasm_environment(PreprocessorOptions& options)
{
	// Host predefined macros, include directories and va_list declarations
	// cannot describe a cross target. Target headers are supplied explicitly.
	options.host_predefines.clear();
	options.hosted = true;
	options.builtin_declarations = "typedef char* __builtin_va_list;\n";
	if (options.language != SourceLanguage::C)
		options.builtin_declarations += builtin_template_declarations();
	options.popcnt = false;
	options.sse_level = 0;
	std::string text = "#undef __linux__\n#undef __linux\n#undef __gnu_linux__\n#undef __ELF__\n"
					   "#undef __APPLE__\n#undef __MACH__\n#undef __x86_64__\n#undef __SSE__\n#undef __SSE2__\n"
					   "#define __wasm__ 1\n#define __wasm32__ 1\n#define __ILP32__ 1\n"
					   "#define __SIZEOF_FLOAT__ 4\n#define __SIZEOF_DOUBLE__ 8\n#define __SIZEOF_LONG_DOUBLE__ 16\n"
					   "#define __ATOMIC_RELAXED 0\n#define __ATOMIC_CONSUME 1\n#define __ATOMIC_ACQUIRE 2\n"
					   "#define __ATOMIC_RELEASE 3\n#define __ATOMIC_ACQ_REL 4\n#define __ATOMIC_SEQ_CST 5\n"
					   "#define __GCC_CONSTRUCTIVE_SIZE 64\n#define __GCC_DESTRUCTIVE_SIZE 64\n"
					   "#define __ORDER_LITTLE_ENDIAN__ 1234\n#define __ORDER_BIG_ENDIAN__ 4321\n"
					   "#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__\n";
	text += target_integer_predefines(options.target);
	text += kFloatingNumericPredefines;
	text += kBinary128NumericPredefines;
	if (options.target == target_model::Target::Wasi)
		text += "#define __wasi__ 1\n";
	if (options.target == target_model::Target::Emscripten)
		text += "#define __EMSCRIPTEN__ 1\n#define __unix__ 1\n#define __unix 1\n";
	options.command_line.insert(0, text);
}

} // namespace driver
