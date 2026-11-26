#include "asm/module_expand.h"

#include "asm/module_expression.h"
#include "asm/registers.h"

#include <cctype>

namespace assembly {
namespace {
class ExpansionConstants final : public ExpressionSymbols
{
public:
	explicit ExpansionConstants(const PersistentMap<uint64_t>& values) : values_(values) {}
	ModuleValue expression_symbol(ModuleCursor& cursor) override
	{
		if (const SymbolUse* typed = cursor.symbol_use())
			cursor.advance(typed->count);
		else if (const uint64_t* found = values_.lookup(cursor.word()))
			return ModuleValue(*found);
		ModuleValue unknown;
		unknown.positive = 0;
		return unknown;
	}
	void fold_difference(ModuleValue&) const override {}

private:
	const PersistentMap<uint64_t>& values_;
};

bool loop(const std::string& name)
{
	return name == ".rept" || name == ".rep" || name == ".irp" || name == ".irpc";
}
std::string head(const ModuleLine& line)
{
	ModuleCursor cursor(line);
	cursor.space();
	if (cursor.end() || line.text[cursor.position()] == '\\')
		return {};
	return cursor.word();
}
}
std::string module_macro_name(std::string name)
{
	for (char& c : name)
		if (c >= 'A' && c <= 'Z')
			c = static_cast<char>(c + ('a' - 'A'));
	return name;
}
size_t module_block_end(const std::vector<ModuleLine>& input, size_t first, size_t last)
{
	std::vector<std::string> closing;
	for (size_t i = first; i < last; ++i)
	{
		const std::string name = head(input[i]);
		if (name == ".macro")
			closing.push_back(".endm");
		else if (loop(name))
			closing.push_back(".endr");
		else if (name == ".endm" || name == ".endr")
		{
			if (closing.empty() || closing.back() != name)
				throw AssemblyError{ "mismatched module expansion block", input[i].line, 1 };
			closing.pop_back();
			if (closing.empty())
				return i;
		}
		if (closing.size() > 64)
			throw AssemblyError{ "module block nesting exceeds limit", input[i].line, 1 };
	}
	throw AssemblyError{ "unterminated module expansion block", input[first].line, 1 };
}
std::vector<ModuleLine> ModuleExpander::expand(const std::vector<ModuleLine>& input, ExpansionLayout* layout)
{
	Output result{ {}, layout };
	for (const ModuleLine& line : input)
		account(line.text.size() + 1, line);
	if (range(input, 0, input.size(), result, 0))
		throw AssemblyError{ ".exitm outside macro expansion", 1, 1 };
	return std::move(result.lines);
}
void ModuleExpander::account(uint64_t bytes, const ModuleLine& line)
{
	const uint64_t limit = 64u * 1024u * 1024u;
	if (bytes > limit || budget_->bytes > limit - bytes)
		throw AssemblyError{ "module expansion exceeds byte budget", line.line, 1 };
	budget_->bytes += bytes;
}
void ModuleExpander::emit(ModuleLine line, Output& output)
{
	account(line.text.size() + 1, line);
	if (output.layout)
		output.layout->emit_expanded(line);
	else
		output.lines.push_back(std::move(line));
}
uint64_t ModuleExpander::expression(const ModuleLine& line, uint32_t first, const Output& output) const
{
	if (output.layout)
		return output.layout->expansion_expression(line, first);
	ExpansionConstants constants(constants_);
	return module_expression(line, first, &constants);
}
void ModuleExpander::assignment(const std::string& name, ModuleCursor& cursor, ModuleLine& line)
{
	if (name == ".")
		return; // The location counter belongs to object layout.
	if (cursor.take('%'))
	{
		const std::string spelling = cursor.word();
		if (!parse_register(spelling.data(), spelling.size(), line.register_assignment))
			cursor.fail("unknown register in assembly alias: " + spelling);
	}
	else if (std::isalpha(static_cast<unsigned char>(cursor.current())) || cursor.current() == '_')
	{
		ModuleCursor reference = cursor;
		if (const asm_model::Register* alias = registers_.lookup(reference.word()))
		{
			line.register_assignment = *alias;
			cursor.advance(reference.position() - cursor.position());
		}
	}
	if (line.register_assignment.bits != 0)
	{
		cursor.finish();
		constants_.erase(name);
		registers_.set(name, line.register_assignment);
		return;
	}
	registers_.erase(name);
	ExpansionConstants constants(constants_);
	const ModuleExpression plan = parse_module_expression(cursor, constants);
	cursor.finish();
	if (plan.has_symbols)
	{
		constants_.erase(name);
		return;
	}
	line.absolute_assignment = true;
	line.assignment = evaluate_module_expression(plan, constants).bits;
	constants_.set(name, line.assignment);
}
bool ModuleExpander::range(
	const std::vector<ModuleLine>& input, size_t first, size_t last, Output& output, unsigned depth)
{
	if (depth > 64)
		throw AssemblyError{ "module expansion nesting exceeds limit", 1, 1 };
	for (size_t i = first; i < last; ++i)
	{
		const ModuleLine& line = input[i];
		if (++budget_->work > 1000000)
			throw AssemblyError{ "module expansion work exceeds limit", line.line, 1 };
		ModuleCursor cursor(line);
		const std::string name = cursor.word();
		if (name == ".macro" || loop(name))
		{
			const size_t end = module_block_end(input, i, last);
			if (name == ".macro")
				define(line, input, i + 1, end);
			else
				repeat(
					name, line, std::vector<ModuleLine>(input.begin() + i + 1, input.begin() + end), output, depth + 1);
			i = end;
		}
		else if (name.compare(0, 3, ".if") == 0)
		{
			bool taken = false, after_else = false;
			ExpansionConstants constants(constants_);
			const auto evaluate = [&](const std::string& kind, ModuleCursor& position, const ModuleLine& part) {
				return output.layout ? output.layout->expansion_condition(kind, part, position.position())
									 : module_condition(kind, position, part, constants);
			};
			bool enabled;
			if (name == ".ifdef" || name == ".ifndef")
			{
				const std::string symbol = cursor.word();
				cursor.finish();
				const bool defined = constants_.lookup(symbol) != nullptr || registers_.lookup(symbol) != nullptr ||
					(output.layout && output.layout->expansion_defined(symbol));
				enabled = defined == (name == ".ifdef");
			}
			else
				enabled = evaluate(name, cursor, line);
			size_t begin = i + 1;
			unsigned nested = 0;
			bool closed = false;
			for (size_t j = begin; j < last; ++j)
			{
				ModuleCursor branch(input[j]);
				const std::string part = head(input[j]);
				if (part.empty())
					continue;
				branch.word();
				if (part == ".macro" || loop(part))
				{
					j = module_block_end(input, j, last);
					continue;
				}
				if (part.compare(0, 3, ".if") == 0)
				{
					if (++nested > 64)
						branch.fail("module conditional nesting exceeds limit");
				}
				else if (part == ".endif" && nested != 0)
					--nested;
				else if (nested == 0 && (part == ".else" || part == ".elseif" || part == ".endif"))
				{
					if (enabled && !taken)
					{
						if (range(input, begin, j, output, depth + 1))
							return true;
						taken = true;
					}
					if (part == ".endif")
					{
						branch.finish();
						i = j;
						closed = true;
						break;
					}
					if (after_else)
						branch.fail("conditional branch after .else");
					after_else = part == ".else";
					if (after_else)
					{
						branch.finish();
						enabled = true;
					}
					else
						enabled = !taken && evaluate(".if", branch, input[j]);
					begin = j + 1;
				}
			}
			if (!closed)
				cursor.fail("unterminated module conditional");
		}
		else if (name == ".endm" || name == ".endr" || name == ".else" || name == ".elseif" || name == ".endif")
			cursor.fail("unmatched module expansion directive");
		else if (name == ".exitm")
		{
			cursor.finish();
			return true;
		}
		else if (name == ".purgem")
		{
			if (macros_.erase(module_macro_name(cursor.word())) == 0)
				cursor.fail("cannot purge an undefined macro");
			cursor.finish();
		}
		else if (name == ".error")
			cursor.fail(cursor.quoted());
		else
		{
			const auto macro = macros_.find(module_macro_name(name));
			if (macro && !cursor.take(':'))
				invoke(line, cursor.position(), macro, output, depth + 1);
			else
			{
				ModuleLine emitted = line;
				if (name == ".set" || name == ".equ")
				{
					const std::string symbol = cursor.word();
					if (cursor.take(','))
						assignment(symbol, cursor, emitted);
				}
				else if (cursor.take('='))
					assignment(name, cursor, emitted);
				else if (dialect_ == asm_model::Dialect::AArch64 && name == ".unreq")
				{
					registers_.erase(cursor.word());
					cursor.finish();
				}
				else if (dialect_ == asm_model::Dialect::AArch64 && cursor.starts_with(".req", 4) &&
					cursor.word() == ".req")
				{
					const std::string spelling = cursor.word();
					auto& reg = emitted.register_assignment;
					if (const auto* prior = registers_.lookup(spelling))
						reg = *prior;
					else if (!parse_aarch64_register(spelling.data(), spelling.size(), reg))
						cursor.fail("unknown AArch64 register in alias: " + spelling);
					cursor.finish();
					registers_.set(name, reg);
				}
				emit(std::move(emitted), output);
			}
		}
	}
	return false;
}
} // namespace assembly
