#include "wasm/object.h"

#include <algorithm>
#include <iomanip>
#include <locale>
#include <sstream>

namespace wasm {

namespace {

std::string quoted(const std::string& value)
{
	std::string output = "\"";
	for (unsigned char c : value)
	{
		if (c == '"' || c == '\\')
			output += '\\';
		if (c >= 32 && c <= 126)
			output += static_cast<char>(c);
		else
		{
			output += '\\';
			output += static_cast<char>('0' + (c >> 6));
			output += static_cast<char>('0' + ((c >> 3) & 7));
			output += static_cast<char>('0' + (c & 7));
		}
	}
	return output + '"';
}

std::string name(const std::string& symbol)
{
	if (!symbol.empty() &&
		symbol.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_.$") ==
			std::string::npos &&
		(symbol.front() < '0' || symbol.front() > '9'))
		return symbol;
	return quoted(symbol);
}

void type_list(std::string& text, const std::vector<ValueType>& types)
{
	text += '(';
	for (uint32_t i = 0; i < types.size(); ++i)
	{
		if (i != 0)
			text += ", ";
		text += spelling(types[i]);
	}
	text += ')';
}

void signature(std::string& text, const Signature& type)
{
	type_list(text, type.parameters);
	text += " -> ";
	type_list(text, type.results);
}

std::string reference(const Object& object, const Relocation& relocation)
{
	std::string result = name(object.symbols.at(relocation.index).name);
	if (relocation.addend > 0)
		result += '+';
	if (relocation.addend != 0)
		result += std::to_string(relocation.addend);
	return result;
}

std::string floating(uint64_t bits, bool single)
{
	const unsigned precision = single ? 23 : 52;
	const uint64_t mask = (uint64_t(1) << precision) - 1;
	const uint64_t exponent = (bits >> precision) & (single ? 255 : 2047);
	std::ostringstream out;
	out.imbue(std::locale::classic());
	if (exponent == (single ? 255u : 2047u))
	{
		if ((bits >> (single ? 31 : 63)) != 0)
			out << '-';
		if (bits & mask)
			out << "nan:0x" << std::hex << (bits & mask);
		else
			out << "infinity";
	}
	else if (single)
	{
		const auto word = static_cast<uint32_t>(bits);
		float value;
		__builtin_memcpy(&value, &word, sizeof(value));
		out << std::hexfloat << value;
	}
	else
	{
		double value;
		__builtin_memcpy(&value, &bits, sizeof(value));
		out << std::hexfloat << value;
	}
	return out.str();
}

class BodyWriter
{
public:
	BodyWriter(const Function& function, const Object& object, std::string& text)
		: function_(function), object_(object), text_(text)
	{}
	void run();

private:
	uint64_t number(uint32_t i) const { return function_.operands[first_ + i]; }
	const Relocation* relocation(uint32_t i);
	void operand(uint32_t i, bool signed_value = false);
	void block_type();
	void instruction(const Instruction& inst);

	const Function& function_;
	const Object& object_;
	std::string& text_;
	std::vector<Op> blocks_;
	size_t next_relocation_ = 0;
	uint32_t first_ = 0;
};

const Relocation* BodyWriter::relocation(uint32_t i)
{
	if (next_relocation_ < function_.relocations.size() && function_.relocations[next_relocation_].offset == first_ + i)
		return &function_.relocations[next_relocation_++];
	return nullptr;
}

void BodyWriter::operand(uint32_t i, bool signed_value)
{
	if (const auto* fixup = relocation(i))
		text_ += reference(object_, *fixup);
	else if (signed_value)
		text_ += std::to_string(static_cast<int64_t>(number(i)));
	else
		text_ += std::to_string(number(i));
}

void BodyWriter::block_type()
{
	const auto type = static_cast<int64_t>(number(0));
	if (type >= 0)
	{
		const auto* fixup = relocation(0);
		text_ += ' ';
		signature(text_, object_.types.at(fixup ? fixup->index : static_cast<uint32_t>(type)));
	}
	else if (type != static_cast<int64_t>(wasm_model::block_type(ValueType::Void)))
	{
		text_ += ' ';
		text_ += spelling(static_cast<ValueType>(type + 128));
	}
}

void BodyWriter::instruction(const Instruction& inst)
{
	first_ = inst.operands.first;
	const Op op = inst.op;
	const Immediate form = immediate_form(op);
	text_ += '\t';
	if (op == Op::End)
	{
		const auto opening = blocks_.back();
		blocks_.pop_back();
		text_ += opening == Op::Block ? "end_block"
			: opening == Op::If       ? "end_if"
			: opening == Op::Loop     ? "end_loop"
			: opening == Op::TryTable ? "end_try_table"
									  : "end_function";
	}
	else
		text_ += spelling(op);
	if (op == Op::CallIndirect || op == Op::ReturnCallIndirect)
	{
		const auto* type = relocation(0);
		text_ += ' ';
		operand(1);
		text_ += ", ";
		signature(text_, object_.types.at(type ? type->index : number(0)));
	}
	else if (form == Immediate::BlockType || form == Immediate::TryTable)
	{
		blocks_.push_back(op);
		block_type();
		if (form == Immediate::TryTable)
		{
			for (uint32_t i = 2; i < inst.operands.count;)
			{
				const char* const names[] = { "catch ", "catch_ref ", "catch_all ", "catch_all_ref " };
				const auto kind = number(i++);
				text_ += " (";
				text_ += names[kind];
				if (kind <= static_cast<uint8_t>(CatchKind::TagRef))
				{
					operand(i++);
					text_ += ' ';
				}
				operand(i++);
				text_ += ')';
			}
		}
	}
	else if (form == Immediate::Memory || form == Immediate::MemoryLane)
	{
		text_ += ' ';
		operand(1);
		if (number(0) != natural_memory_alignment(op))
			text_ += ":p2align=" + std::to_string(number(0));
		if (form == Immediate::MemoryLane)
			text_ += ", " + std::to_string(number(2));
	}
	else if (form == Immediate::Float32 || form == Immediate::Float64)
		text_ += " " + floating(number(0), form == Immediate::Float32);
	else if (form == Immediate::Types)
		text_ += std::string(" ") + spelling(static_cast<ValueType>(number(0)));
	else if (op == Op::RefNull)
		text_ += std::string(" ") + spelling(static_cast<ValueType>(static_cast<int64_t>(number(0)) + 128));
	else
	{
		if (form == Immediate::Table)
			text_ += " {";
		for (uint32_t i = 0; i < inst.operands.count; ++i)
		{
			if (i != 0)
				text_ += ", ";
			else if (form != Immediate::Table)
				text_ += ' ';
			operand(i, form == Immediate::Signed);
		}
		if (form == Immediate::Table)
			text_ += '}';
	}
	text_ += '\n';
}

void BodyWriter::run()
{
	if (function_.parameter_count < function_.locals.size())
	{
		text_ += "\t.local ";
		for (uint32_t i = function_.parameter_count; i < function_.locals.size(); ++i)
		{
			if (i != function_.parameter_count)
				text_ += ", ";
			text_ += spelling(function_.locals[i]);
		}
		text_ += '\n';
	}
	blocks_.push_back(Op::Nop); // The function's implicit outer block.
	for (const auto& inst : function_.instructions)
		instruction(inst);
	if (next_relocation_ != function_.relocations.size())
		throw WasmError("unsupported relocation in Wasm assembly output");
	if (!function_.assembly_directives.empty())
	{
		text_ += "\t.section .rodata.cppgm_asm,\"\",@\n";
		for (size_t begin = 0; begin < function_.assembly_directives.size();)
		{
			const auto end = function_.assembly_directives.find('\n', begin);
			text_ += "\t.ascii " + quoted(function_.assembly_directives.substr(begin, end - begin)) + '\n';
			begin = end + 1;
		}
	}
}

void symbol_directives(const ObjectSymbol& symbol, std::string& text)
{
	const auto identity = name(symbol.name);
	if (symbol.weak())
		text += "\t.weak " + identity + '\n';
	else if (!symbol.local() && !symbol.undefined())
		text += "\t.globl " + identity + '\n';
	if ((symbol.flags & 4) != 0)
		text += "\t.hidden " + identity + '\n';
	if ((symbol.flags & 0x80) != 0)
		text += "\t.no_dead_strip " + identity + '\n';
}

void data_bytes(const Object& object, const ObjectData& data, std::string& text)
{
	const auto& bytes = data.contents.bytes.data;
	size_t position = 0;
	const auto literal = [&](size_t end) {
		while (position < end)
		{
			const auto length = std::min(end - position, size_t(64));
			std::string chunk(bytes.begin() + position, bytes.begin() + position + length);
			text += "\t.ascii " + quoted(chunk) + '\n';
			position += length;
		}
	};
	for (const auto& relocation : data.contents.relocations)
	{
		literal(relocation.offset);
		const bool wide = wide_relocation(relocation.kind);
		text += std::string(wide ? "\t.int64 " : "\t.int32 ") + reference(object, relocation) + '\n';
		position += wide ? 8 : 4;
	}
	literal(bytes.size());
}

void emit_data(const Object& object, std::string& text)
{
	std::vector<const ObjectSymbol*> owners(object.data.size());
	for (const auto& symbol : object.symbols)
		if (symbol.kind == 1 && !symbol.undefined())
		{
			if (owners[symbol.index] == nullptr && symbol.offset == 0)
				owners[symbol.index] = &symbol;
		}
	for (uint32_t i = 0; i < object.data.size(); ++i)
	{
		const auto* symbol = owners[i];
		if (symbol == nullptr)
			throw WasmError("Wasm assembly requires a data symbol at the start of each segment");
		const auto& data = object.data[i];
		const auto identity = name(symbol->name);
		std::string section = data.name;
		if (section.empty() || section.front() != '.')
			section.insert(0, ".data.");
		text += "\t.section " + name(section) + ",\"\",@\n";
		text += "\t.type " + identity + ",@object\n";
		text += "\t.p2align " + std::to_string(data.alignment) + '\n';
		text += identity + ":\n";
		if (section.compare(0, 4, ".bss") == 0 && data.contents.relocations.empty() &&
			std::all_of(data.contents.bytes.data.begin(), data.contents.bytes.data.end(),
				[](uint8_t byte) { return byte == 0; }))
			text += "\t.skip " + std::to_string(data.contents.bytes.data.size()) + '\n';
		else
			data_bytes(object, data, text);
		text += "\t.size " + identity + ", " + std::to_string(symbol->size) + '\n';
	}
	for (const auto& symbol : object.symbols)
		if (symbol.kind == 1 && !symbol.undefined() && &symbol != owners[symbol.index])
		{
			text += "\t.type " + name(symbol.name) + ",@object\n";
			text += "\t.set " + name(symbol.name) + ", " + name(owners[symbol.index]->name);
			if (symbol.offset != 0)
				text += "+" + std::to_string(symbol.offset);
			text += '\n';
		}
}

} // namespace

void write_assembly_body(const Function& function, const Object& object, std::string& output)
{
	BodyWriter(function, object, output).run();
}

void write_assembly(const Object& object, std::string& text)
{
	text = "\t.text\n\t.tabletype __indirect_function_table, funcref\n";
	for (const auto& global : object.global_imports)
		text += "\t.globaltype " + name(global.name) + ", " + spelling(global.type) +
			(global.mutable_value ? "\n" : ", immutable\n");
	for (const auto& symbol : object.symbols)
	{
		symbol_directives(symbol, text);
		const auto identity = name(symbol.name);
		if (symbol.kind == 0)
		{
			const auto& function = object.functions[symbol.index];
			if (function.imported && (symbol.flags & 0x40) != 0)
			{
				text += "\t.import_module " + identity + ", " + name(function.module) + '\n';
				text += "\t.import_name " + identity + ", " + name(function.name) + '\n';
			}
			if (!function.imported && function.name != symbol.name)
			{
				text += "\t.type " + identity + ",@function\n";
				text += "\t.set " + identity + ", " + name(function.name) + '\n';
				continue;
			}
			text += "\t.functype " + identity + ' ';
			signature(text, object.types[function.type]);
			text += '\n';
		}
		else if (symbol.kind == 4)
		{
			text += "\t.tagtype " + identity;
			for (auto type : object.types[object.tags[symbol.index].type].parameters)
				text += std::string(" ") + spelling(type);
			text += '\n';
		}
	}
	for (const auto& entry : object.exports)
		if (entry.kind == 0)
			text += "\t.export_name " + name(object.functions[entry.index].name) + ", " + name(entry.name) + '\n';
	for (uint32_t i = 0; i < object.functions.size(); ++i)
	{
		const auto& function = object.functions[i];
		if (function.imported)
			continue;
		const auto identity = name(function.name);
		text += "\t.section " + name(".text." + function.name) + ",\"\",@\n";
		text += "\t.type " + identity + ",@function\n" + identity + ":\n";
		text += "\t.functype " + identity + ' ';
		signature(text, object.types[function.type]);
		text += '\n';
		if (i >= object.assembly_bodies.size() || object.assembly_bodies[i].empty())
			throw WasmError("assembly output is unavailable for generated Wasm function: " + function.name);
		text += object.assembly_bodies[i];
	}
	emit_data(object, text);
	for (auto initializer : object.initializers)
	{
		text += "\t.section .init_array." + std::to_string(initializer.first) + ",\"\",@\n";
		text += std::string(object.wide_addresses ? "\t.int64 " : "\t.int32 ") +
			name(object.symbols[initializer.second].name) + '\n';
	}
	text += "\t.section .custom_section.target_features,\"\",@\n";
	Bytes features;
	features.unsigned_leb(object.features.size());
	for (const auto& feature : object.features)
	{
		features.byte(feature.first);
		features.string(feature.second);
	}
	text += "\t.ascii " + quoted(std::string(features.data.begin(), features.data.end())) + '\n';
}

} // namespace wasm
