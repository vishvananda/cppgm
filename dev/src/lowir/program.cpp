#include "lowir/program.h"

#include <cstring>

#include "lowir/assembly.h"

namespace lowir {

Program::Program() : names(arena)
{}

Program::~Program() = default;

bool Program::literal_assembly_root(SymbolId symbol) const
{
	const SymbolMetadata& metadata = symbols[symbol].metadata;
	// File-local C names used solely as literal x86 ELF assembly text need a
	// used declaration. A typed assembly operand preserves its own target.
	return target != target_model::Target::Linux || metadata.linkage != ir_model::LLM_C ||
		metadata.binding != ir_model::SBM_INTERNAL || metadata.object != 0 || (metadata.flags & SF_OBJECT_ROOT) != 0;
}

bool Program::has_local_elf_visibility(SymbolId id) const
{
	const Symbol& symbol = symbols[id];
	if (symbol.metadata.visibility == ir_model::SV_DEFAULT ||
		target_model::describe(target).object_format != target_model::ObjectFormat::Elf)
		return false;
	// An undefined weak reference can be absent. A GOT slot can hold that
	// null address even in a shared object far from virtual address zero.
	const bool weak = symbol.metadata.binding == ir_model::SBM_WEAK ||
		(symbol.kind == SymbolKind::Unresolved && forward_binding(id) == ir_model::SBM_WEAK);
	return !weak || symbol.kind == SymbolKind::GlobalDefinition || symbol.kind == SymbolKind::FunctionDefinition ||
		(symbol.kind == SymbolKind::Unresolved && forward_defined(id));
}

bool Program::same_entry_abi(SymbolId first, SymbolId second) const
{
	if (first >= symbols.size() || second >= symbols.size() || !is_function_kind(symbols[first].kind) ||
		!is_function_kind(symbols[second].kind))
		return false;
	if (functions[symbols[first].detail].signature == kNoId || functions[symbols[second].detail].signature == kNoId)
		return false;
	const Signature& a = signatures[functions[symbols[first].detail].signature];
	const Signature& b = signatures[functions[symbols[second].detail].signature];
	if (a.result != b.result || a.parameter_count != b.parameter_count || a.boundary.arity != b.boundary.arity ||
		a.boundary.this_return != b.boundary.this_return || a.boundary.result_classes != b.boundary.result_classes ||
		a.boundary.result_shape != b.boundary.result_shape)
		return false;
	const Parameter* ap = parameters_of(a);
	const Parameter* bp = parameters_of(b);
	for (uint32_t i = 0; i < a.parameter_count; ++i)
		if (ap[i].type != bp[i].type || ap[i].pass != bp[i].pass || ap[i].classes != bp[i].classes ||
			ap[i].shape != bp[i].shape)
			return false;
	return true;
}

SymbolId Program::symbol_for(NameId name)
{
	if (name >= symbol_by_name.size())
		symbol_by_name.resize(names.size() > name ? names.size() : name + 1, kNoId);
	SymbolId& entry = symbol_by_name[name];
	if (entry == kNoId)
	{
		entry = static_cast<SymbolId>(symbols.size());
		Symbol symbol;
		symbol.name = name;
		symbol.kind = SymbolKind::Unresolved;
		symbol.detail = kNoId;
		symbols.push_back(symbol);
	}
	return entry;
}

void order_as_written(Program& program)
{
	std::vector<SymbolId> written;
	written.reserve(program.order.size());
	for (SymbolKind kind : kWrittenSymbolKinds)
		for (SymbolId id : program.order)
			if (program.symbols[id].kind == kind)
				written.push_back(id);
	program.order.swap(written);
}

void number_temps_as_defined(FunctionBody& body)
{
	std::vector<TempId> map(body.temps.size(), kNoId);
	TempId next = body.parameter_count;
	bool moved = false;
	for (TempId t = 0; t < body.parameter_count; ++t)
		map[t] = t;
	for (BlockId b : body.layout)
		for (InstId i = body.blocks[b].first; i != kNoId; i = body.instructions[i].next)
		{
			const TempId result = body.instructions[i].result;
			if (result == kNoId)
				continue;
			moved = moved || result != next;
			map[result] = next++;
		}
	if (!moved)
		return;
	// (A temporary no placed instruction defines keeps its order, after
	// the others.)
	for (TempId& t : map)
		if (t == kNoId)
			t = next++;
	std::vector<Temp> temps(body.temps.size());
	for (TempId t = 0; t < body.temps.size(); ++t)
		temps[map[t]] = body.temps[t];
	body.temps.swap(temps);
	auto remap = [&](Value& v) {
		if (v.kind == ValueKind::Temp)
			v.index = map[v.index];
	};
	for (Instruction& inst : body.instructions)
	{
		if (inst.result != kNoId)
			inst.result = map[inst.result];
		for (Value& v : inst.ops)
			remap(v);
	}
	for (Value& v : body.operands)
		remap(v);
}

void Program::declare_global(SymbolId id, SymbolKind kind, const Global& global)
{
	Symbol& symbol = symbols[id];
	symbol.kind = kind;
	symbol.detail = static_cast<uint32_t>(globals.size());
	globals.push_back(global);
	order.push_back(id);
}

void Program::declare_function(SymbolId id, SymbolKind kind, SignatureId signature)
{
	Symbol& symbol = symbols[id];
	symbol.kind = kind;
	symbol.detail = static_cast<uint32_t>(functions.size());
	Function function;
	function.signature = signature;
	function.location = DebugLocation{ 0, 0, 0 };
	if (kind == SymbolKind::FunctionDefinition)
	{
		function.body.reset(new FunctionBody());
		function.body->pointer_bytes = target_model::data_layout(target).pointer_bytes;
	}
	functions.push_back(std::move(function));
	order.push_back(id);
}

const Signature* Program::call_boundary(const Instruction& call) const
{
	if ((call.flags & IF_SIGNATURE) != 0)
		return &signatures[static_cast<SignatureId>(call.immediate)];
	if (!call.ops[0].is(ValueKind::Symbol))
		return nullptr;
	const Symbol& callee = symbols[call.ops[0].index];
	if (!is_function_kind(callee.kind))
	{
		const SignatureId forward = callee.kind == SymbolKind::Unresolved ? forward_boundary(call.ops[0].index) : kNoId;
		return forward != kNoId ? &signatures[forward] : nullptr;
	}
	const SignatureId signature = functions[callee.detail].signature;
	return signature != kNoId ? &signatures[signature] : nullptr;
}

void Program::set_forward_boundary(SymbolId symbol, SignatureId signature)
{
	if (symbol >= forward_boundaries.size())
		forward_boundaries.resize(symbols.size() > symbol ? symbols.size() : symbol + 1, kNoId);
	forward_boundaries[symbol] = signature;
}

void Program::set_forward_global(SymbolId symbol, uint8_t binding, uint8_t storage, bool defined)
{
	if (symbol >= forward_globals.size())
		forward_globals.resize(symbols.size() > symbol ? symbols.size() : symbol + 1, 0);
	forward_globals[symbol] = static_cast<uint8_t>(binding | (defined ? 8 : 0) | (storage << 4));
}

uint8_t Program::forward_binding(SymbolId symbol) const
{
	return symbol < forward_globals.size() ? forward_globals[symbol] & 7 : 0;
}

uint8_t Program::forward_storage(SymbolId symbol) const
{
	return symbol < forward_globals.size() ? forward_globals[symbol] >> 4 : 0;
}

bool Program::forward_defined(SymbolId symbol) const
{
	return symbol < forward_globals.size() && (forward_globals[symbol] & 8) != 0;
}

bool Program::may_end_block(const Instruction& inst) const
{
	if (is_terminator(inst.op))
		return true;
	if (inst.op != Opcode::Call)
		return false;
	const Signature* boundary = call_boundary(inst);
	return boundary != nullptr && boundary->boundary.returns == ir_model::CRM_NORETURN;
}

bool Program::cold_call(const Instruction& inst) const
{
	return inst.op == Opcode::Call && inst.ops[0].is(ValueKind::Symbol) &&
		(symbols[inst.ops[0].index].metadata.flags & SF_COLD) != 0;
}

bool Program::rare_call(const Instruction& inst) const
{
	return inst.op == Opcode::Call && (cold_call(inst) || may_end_block(inst));
}

bool Program::strlen_function(SymbolId symbol) const
{
	const Symbol& callee = symbols[symbol];
	if (!is_function_kind(callee.kind))
		return false;
	const char* spelling = this->spelling(callee.metadata.object != 0 ? callee.metadata.object : callee.name);
	return (callee.metadata.object != 0 && std::strcmp(spelling, "cppgm_builtin_strlen") == 0) ||
		(callee.metadata.linkage == ir_model::LLM_C && !callee.metadata.no_builtin &&
			std::strcmp(spelling, "strlen") == 0);
}

bool Program::builtin_memcpy(SymbolId symbol) const
{
	const Symbol& callee = symbols[symbol];
	return is_function_kind(callee.kind) && callee.metadata.object != 0 &&
		std::strcmp(spelling(callee.metadata.object), "cppgm_builtin_memcpy") == 0;
}

bool Program::trap_function(SymbolId symbol) const
{
	const Symbol& callee = symbols[symbol];
	return is_function_kind(callee.kind) && callee.metadata.object != 0 &&
		std::strcmp(spelling(callee.metadata.object), "cppgm_builtin_trap") == 0;
}

bool Program::memset_function(SymbolId symbol) const
{
	const Symbol& callee = symbols[symbol];
	if (!is_function_kind(callee.kind))
		return false;
	const char* spelling = this->spelling(callee.metadata.object != 0 ? callee.metadata.object : callee.name);
	return (callee.metadata.object != 0 && std::strcmp(spelling, "cppgm_builtin_memset") == 0) ||
		(callee.metadata.linkage == ir_model::LLM_C && !callee.metadata.no_builtin &&
			std::strcmp(spelling, "memset") == 0);
}

bool Program::memcpy_function(SymbolId symbol) const
{
	const Symbol& callee = symbols[symbol];
	// A streamed body can call a typed forward declaration whose final
	// declaration has not yet been appended to the program.
	if (!is_function_kind(callee.kind) && (callee.kind != SymbolKind::Unresolved || forward_boundary(symbol) == kNoId))
		return false;
	const char* spelling = this->spelling(callee.metadata.object != 0 ? callee.metadata.object : callee.name);
	return (callee.metadata.object != 0 && std::strcmp(spelling, "cppgm_builtin_memcpy") == 0) ||
		(callee.metadata.linkage == ir_model::LLM_C && !callee.metadata.no_builtin &&
			std::strcmp(spelling, "memcpy") == 0);
}

bool Program::memmove_function(SymbolId symbol) const
{
	const Symbol& callee = symbols[symbol];
	if (!is_function_kind(callee.kind))
		return false;
	const char* spelling = this->spelling(callee.metadata.object != 0 ? callee.metadata.object : callee.name);
	return (callee.metadata.object != 0 && std::strcmp(spelling, "cppgm_builtin_memmove") == 0) ||
		(callee.metadata.linkage == ir_model::LLM_C && !callee.metadata.no_builtin &&
			std::strcmp(spelling, "memmove") == 0);
}

bool Program::memcmp_function(SymbolId symbol) const
{
	const Symbol& callee = symbols[symbol];
	if (!is_function_kind(callee.kind))
		return false;
	const char* spelling = this->spelling(callee.metadata.object != 0 ? callee.metadata.object : callee.name);
	return (callee.metadata.object != 0 && std::strcmp(spelling, "cppgm_builtin_memcmp") == 0) ||
		(callee.metadata.linkage == ir_model::LLM_C && !callee.metadata.no_builtin &&
			std::strcmp(spelling, "memcmp") == 0);
}

MathFunction Program::math_function(SymbolId symbol) const
{
	const Symbol& callee = symbols[symbol];
	return callee.kind == SymbolKind::FunctionDeclaration ? declared_math_function(symbol, callee.metadata)
														  : MathFunction::None;
}

MathFunction Program::declared_math_function(SymbolId symbol, const SymbolMetadata& metadata) const
{
	if (metadata.linkage != ir_model::LLM_C || metadata.no_builtin)
		return MathFunction::None;
	static const struct
	{
		const char* name;
		MathFunction function;
	} kFunctions[] = { { "fabs", MathFunction::Fabs }, { "fabsf", MathFunction::Fabs }, { "abs", MathFunction::Abs },
		{ "labs", MathFunction::Abs }, { "llabs", MathFunction::Abs }, { "pow", MathFunction::Pow },
		{ "powf", MathFunction::Pow }, { "sqrt", MathFunction::Sqrt }, { "sqrtf", MathFunction::Sqrt },
		{ "sin", MathFunction::Sin }, { "sinf", MathFunction::Sin }, { "cos", MathFunction::Cos },
		{ "cosf", MathFunction::Cos } };
	const char* spelling = this->spelling(metadata.object != 0 ? metadata.object : symbols[symbol].name);
	for (const auto& f : kFunctions)
		if (std::strcmp(spelling, f.name) == 0)
			return f.function;
	return MathFunction::None;
}

NonlocalFunction Program::nonlocal_function(SymbolId symbol) const
{
	const Symbol& callee = symbols[symbol];
	if (!is_function_kind(callee.kind) || callee.metadata.linkage != ir_model::LLM_C || callee.metadata.no_builtin ||
		callee.metadata.binding == ir_model::SBM_INTERNAL)
		return NonlocalFunction::None;
	const char* name = spelling(callee.metadata.object != 0 ? callee.metadata.object : callee.name);
	for (const char* candidate : { "setjmp", "_setjmp", "sigsetjmp", "__sigsetjmp" })
		if (std::strcmp(name, candidate) == 0)
			return NonlocalFunction::Setjmp;
	for (const char* candidate : { "longjmp", "_longjmp", "siglongjmp", "__longjmp_chk", "__wasm_longjmp" })
		if (std::strcmp(name, candidate) == 0)
			return NonlocalFunction::Longjmp;
	for (const char* candidate : { "savectx", "getcontext", "vfork" })
		if (std::strcmp(name, candidate) == 0)
			return NonlocalFunction::ReturnsTwice;
	return NonlocalFunction::None;
}

SignatureId Program::add_signature(const Signature& signature)
{
	signatures.push_back(signature);
	return static_cast<SignatureId>(signatures.size() - 1);
}

SymbolId object_alias_targets(
	const lowir::Program& program, const std::vector<lowir::SymbolId>& canonical, std::vector<lowir::SymbolId>& targets)
{
	using namespace lowir;
	targets.assign(program.symbols.size(), kNoId);
	if (program.aliases.empty())
		return kNoId;
	std::vector<SymbolId> names(program.names.size(), kNoId);
	for (const ObjectAlias& alias : program.aliases)
		names[alias.object] = canonical.empty() ? alias.target : canonical[alias.target];
	for (SymbolId id : program.order)
	{
		const Symbol& symbol = program.symbols[id];
		if (!is_global_kind(symbol.kind) && !is_function_kind(symbol.kind))
			continue;
		const auto target = names[symbol.metadata.object != 0 ? symbol.metadata.object : symbol.name];
		if (target == kNoId)
			continue;
		if (symbol.kind == SymbolKind::FunctionDefinition || symbol.kind == SymbolKind::GlobalDefinition)
			return id;
		targets[id] = target;
	}
	std::vector<uint8_t> state(program.symbols.size(), 0);
	std::vector<SymbolId> path;
	for (SymbolId id : program.order)
	{
		if (targets[id] == kNoId || state[id] == 2)
			continue;
		SymbolId target = id;
		path.clear();
		while (targets[target] != kNoId && state[target] == 0)
		{
			state[target] = 1;
			path.push_back(target);
			target = targets[target];
		}
		if (state[target] == 1)
			return id;
		if (state[target] == 2)
			target = targets[target];
		const auto kind = program.symbols[target].kind;
		if (kind != SymbolKind::FunctionDefinition && kind != SymbolKind::GlobalDefinition)
			return id;
		for (SymbolId source : path)
		{
			if (is_function_kind(program.symbols[source].kind) != is_function_kind(kind))
				return source;
			targets[source] = target;
			state[source] = 2;
		}
	}
	return kNoId;
}

} // namespace lowir
