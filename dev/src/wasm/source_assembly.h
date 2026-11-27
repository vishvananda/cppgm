#pragma once

#include "wasm/module.h"

namespace wasm {

struct AssemblyGlobalType
{
	std::string name;
	ValueType type;
	bool mutable_value;
};

struct InlineStatement
{
	Op op;
	uint32_t index = 0; // a GNU operand or a Wasm global
};

struct InlineTemplate
{
	std::vector<InlineStatement> statements;
	std::string directive;
	uint32_t immediate_operand = lowir::kNoId;
};

struct SourceAssembly
{
	std::vector<AssemblyGlobalType> globals;
	std::vector<InlineTemplate> templates;
};

void prepare_source_assembly(lowir::Program& program, SourceAssembly& output, bool assembly_text);

} // namespace wasm
