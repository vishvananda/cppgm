#include "wasm/assembly.h"
#include "wasm/assembly_parser.h"

namespace wasm {
namespace assembly {

uint32_t Parser::symbol(const std::string& spelling, Kind kind)
{
	const auto name = names_.intern(spelling.data(), spelling.size());
	if (by_name_.size() < names_.size())
		by_name_.resize(names_.size(), lowir::kNoId);
	uint32_t& id = by_name_[name];
	if (id == lowir::kNoId)
	{
		id = static_cast<uint32_t>(symbols_.size());
		Symbol record;
		record.name = name;
		symbols_.push_back(record);
	}
	Symbol& record = symbols_[id];
	if (kind == Kind::Unknown || record.kind == kind)
		return id;
	if (record.kind != Kind::Unknown)
		throw WasmError("conflicting Wasm assembly symbol kinds: " + spelling);
	record.kind = kind;
	if (kind == Kind::Function)
	{
		record.detail = static_cast<uint32_t>(functions_.size());
		FunctionRecord function;
		function.symbol = id;
		functions_.push_back(std::move(function));
	}
	else if (kind == Kind::Global)
	{
		record.detail = static_cast<uint32_t>(globals_.size());
		GlobalRecord global;
		global.symbol = id;
		globals_.push_back(global);
	}
	return id;
}

ValueType Parser::type(Line& line)
{
	const std::string name = line.word();
	const ValueType types[] = { ValueType::I32, ValueType::I64, ValueType::F32, ValueType::F64, ValueType::V128,
		ValueType::FuncRef, ValueType::ExternRef };
	for (ValueType type : types)
		if (name == spelling(type))
			return type;
	throw WasmError("unsupported Wasm assembly value type: " + name);
}

void Parser::type_list(Line& line, std::vector<ValueType>& types)
{
	line.expect("(");
	if (line.accept(")"))
		return;
	do
	{
		types.push_back(type(line));
	} while (line.accept(","));
	line.expect(")");
}

void Parser::label(Line& line)
{
	if (active_ != lowir::kNoId)
		throw WasmError("a Wasm assembly function must end before the next label");
	const auto id = symbol(line.word());
	line.expect(":");
	line.done();
	if (symbols_[id].defined)
		throw WasmError("duplicate Wasm assembly definition");
	symbols_[id].defined = true;
	pending_label_ = id;
	if (section_ == ".globals")
	{
		if (symbols_[id].kind != Kind::Global)
			throw WasmError("a Wasm global label requires .globaltype");
	}
	else if (section_.compare(0, 5, ".text") == 0)
	{
		const auto detail = symbols_[symbol(names_.spelling(symbols_[id].name), Kind::Function)].detail;
		active_ = detail;
		functions_[detail].body.location = location_;
	}
	else
		data_label(id);
}

void Parser::function_type(Line& line)
{
	const auto id = symbol(line.word(), Kind::Function);
	Signature signature;
	type_list(line, signature.parameters);
	line.expect("->");
	type_list(line, signature.results);
	auto& function = functions_[symbols_[id].detail];
	if (function.typed && !(signature == function.signature))
		throw WasmError("conflicting Wasm assembly function types");
	function.signature = std::move(signature);
	function.typed = true;
	function.body.parameter_count = static_cast<uint32_t>(function.signature.parameters.size());
}

void Parser::global_type(Line& line)
{
	const auto id = symbol(line.word(), Kind::Global);
	line.expect(",");
	const auto value = type(line);
	bool mutable_value = true;
	if (line.accept(","))
	{
		line.expect("immutable");
		mutable_value = false;
	}
	auto& global = globals_[symbols_[id].detail];
	if (global.typed && (global.type != value || global.mutable_value != mutable_value))
		throw WasmError("conflicting Wasm assembly global types");
	global.type = value;
	global.mutable_value = mutable_value;
	global.typed = true;
}

void Parser::import_binding(Line& line, bool module)
{
	const auto id = symbol(line.word(), Kind::Function);
	line.expect(",");
	auto& function = functions_[symbols_[id].detail];
	auto& explicit_binding = module ? function.explicit_module : function.explicit_name;
	auto& binding = module ? function.import_module : function.import_name;
	std::string value = line.token().kind == PPTokenKind::StringLiteral ? line.string() : line.word();
	if (explicit_binding && binding != value)
		throw WasmError("conflicting Wasm assembly import bindings");
	binding = std::move(value);
	explicit_binding = true;
}

void Parser::directive(const std::string& name, Line& line)
{
	if (name == ".globl" || name == ".global" || name == ".weak" || name == ".hidden")
	{
		do
		{
			auto& flags = symbols_[symbol(line.word())].flags;
			if (name == ".hidden")
				flags |= 4;
			else
				flags = (flags & ~3u) | (name == ".weak" ? 1u : 0u);
		} while (line.accept(","));
	}
	else if (name == ".functype")
		function_type(line);
	else if (name == ".globaltype")
		global_type(line);
	else if (name == ".import_module" || name == ".import_name")
		import_binding(line, name == ".import_module");
	else if (name == ".local")
	{
		if (active_ == lowir::kNoId)
			throw WasmError(".local outside a Wasm assembly function");
		do
		{
			functions_[active_].body.locals.push_back(type(line));
		} while (line.accept(","));
	}
	else if (name == ".text" || name == ".globals")
		section_ = name;
	else if (name == ".section")
	{
		section_ = line.word();
		if (line.accept(","))
		{
			line.string();
			line.expect(",");
			line.expect("@");
		}
	}

	else if (name == ".int8" && section_ == ".custom_section.target_features")
	{
		do
		{
			const auto byte = line.integer();
			if (byte > 255)
				throw WasmError("overflowing target feature byte");
			features_.byte(static_cast<uint8_t>(byte));
		} while (line.accept(","));
	}
	else if (name == ".ascii" && section_ == ".custom_section.target_features")
	{
		const auto text = line.string();
		features_.data.insert(features_.data.end(), text.begin(), text.end());
	}
	else if ((name == (wide_addresses_ ? ".int64" : ".int32") || name == (wide_addresses_ ? ".quad" : ".long")) &&
		section_.compare(0, 11, ".init_array") == 0)
	{
		uint32_t priority = 65535;
		if (section_.size() > 11)
		{
			priority = 0;
			if (section_[11] != '.' || section_.size() == 12)
				throw WasmError("invalid constructor priority section");
			for (size_t i = 12; i < section_.size(); ++i)
			{
				if (section_[i] < '0' || section_[i] > '9' || priority > 6553)
					throw WasmError("invalid constructor priority");
				priority = priority * 10 + section_[i] - '0';
			}
			if (priority > 65535)
				throw WasmError("overflowing constructor priority");
		}
		initializers_.push_back({ priority, symbol(line.word(), Kind::Function) });
	}
	else if (!data_directive(name, line))
		throw WasmError("unsupported Wasm assembly directive: " + name);
	line.done();
}

void Parser::run(Object& object)
{
	Line line;
	while (next_line(line))
	{
		if (line.tokens.size() >= 2 && line.tokens.back().length == 1 && line.tokens.back().spelling[0] == ':')
			label(line);
		else
		{
			const auto name = line.word();
			if (name[0] == '.')
				directive(name, line);
			else
				instruction(name, line);
		}
	}
	if (active_ != lowir::kNoId)
		throw WasmError("unterminated Wasm assembly function");
	emit(object);
}

} // namespace assembly

void assemble(PPTokenCursor& tokens, Object& object, target_model::Target target, uint32_t& location)
{
	assembly::Parser(tokens, location, target == target_model::Target::Wasm64).run(object);
}
} // namespace wasm
