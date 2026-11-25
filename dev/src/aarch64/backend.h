#pragma once

#include "lowir/program.h"
#include "native/object/object_file.h"

namespace aarch64 {

void compile_object(lowir::Program& program, native::object::ObjectFile& object, int level, bool pic = false,
	std::string* dump = nullptr, bool function_sections = false, bool host = false, bool minimize_size = false,
	bool contract_float = false, bool fixed_x18 = false, bool general_regs_only = false, bool unwind_tables = true);

} // namespace aarch64
