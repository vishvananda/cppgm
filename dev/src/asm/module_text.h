#pragma once

#include "asm/parser.h"

namespace assembly {

struct ModuleLine
{
	std::string text;
	std::vector<SymbolUse> symbols;
	std::vector<LabelUse> labels;
	uint32_t line = 1;
	bool absolute_assignment = false;
	uint64_t assignment = 0;
	asm_model::Register register_assignment = {};
};

// Retain source bytes and typed placeholder spans while splitting statements.
std::vector<ModuleLine> module_lines(
	const std::string& text, const std::vector<SymbolUse>& symbols, const std::vector<LabelUse>& labels = {});
ModuleLine module_slice(const ModuleLine& line, uint32_t first, uint32_t count);
void append_module_line(ModuleLine& target, const ModuleLine& source);
bool module_character(const std::string& source, size_t& position, uint8_t& value);

class ModuleCursor
{
public:
	explicit ModuleCursor(const ModuleLine& line) : source_(line.text), symbols_(&line.symbols), line_(line.line) {}
	ModuleCursor(const ModuleLine& line, const std::vector<SymbolUse>& symbols)
		: source_(line.text), symbols_(&symbols), line_(line.line)
	{}
	ModuleCursor(const std::string& source, uint32_t first, uint32_t line, uint32_t column,
		const std::vector<SymbolUse>* symbols = nullptr)
		: source_(source), symbols_(symbols), line_(line), first_(first), column_(column), position_(first)
	{}
	char current() const { return position_ < source_.size() ? source_[position_] : '\0'; }
	bool starts_with(const char* text, size_t size) const { return source_.compare(position_, size, text, size) == 0; }
	void space();
	bool take(char c);
	bool end();
	bool numeric();
	bool numbered_label();
	bool quoted_start();
	std::string word();
	std::string quoted();
	uint64_t number();
	asm_model::Bits wide_number();
	const SymbolUse* symbol_use() const;
	std::string rest();
	void finish();
	[[noreturn]] void fail(const std::string& message) const;
	uint32_t position() const { return position_; }
	uint32_t line() const { return line_; }
	uint32_t column() const { return column_ + position_ - first_; }
	void advance(uint32_t count) { position_ += count; }

private:
	template<typename UInt>
	UInt number_as();
	const std::string& source_;
	const std::vector<SymbolUse>* symbols_ = nullptr;
	uint32_t line_;
	uint32_t first_ = 0;
	uint32_t column_ = 1;
	uint32_t position_ = 0;
};

} // namespace assembly
