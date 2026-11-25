#pragma once

#include <string>
#include <vector>

#include "native/target.h"

struct PreprocessorOptions;
class Preprocessor;

namespace native {
namespace object {
struct ObjectFile;
}
}

namespace driver {

PreprocessorOptions assembly_preprocessor_options(const PreprocessorOptions& base);
std::string assembly_source(Preprocessor& preprocessor);
bool compile_native_assembly(const std::string& path, const PreprocessorOptions& base, native::Target target,
	native::object::ObjectFile& object, std::vector<std::string>* headers, bool include_system_headers, bool code16gcc);

} // namespace driver
