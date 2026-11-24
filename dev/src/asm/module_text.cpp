#include "asm/module_text.h"

#include <algorithm>
#include <cctype>
#include <climits>

namespace assembly {
namespace {
bool identifier(const std::string& text)
{
	bool seen = false, trailing = false;
	for (char c : text)
	{
		if (c == ' ' || c == '\t' || c == '\r')
		{
			trailing = trailing || seen;
		}
		else if (std::isalnum(static_cast<unsigned char>(c)) || c == '_' || c == '.' || c == '$')
		{
			if (trailing)
				return false;
			seen = true;
		}
		else
			return false;
	}
	return seen;
}
unsigned digit(char c)
{
	return c >= '0' && c <= '9' ? static_cast<unsigned>(c - '0')
		: c >= 'a' && c <= 'f'  ? static_cast<unsigned>(c - 'a' + 10)
		: c >= 'A' && c <= 'F'  ? static_cast<unsigned>(c - 'A' + 10)
								: 16;
}

char named_escape(char c)
{
	switch (c)
	{
	case 'b':
		return '\b';
	case 'f':
		return '\f';
	case 'n':
		return '\n';
	case 'r':
		return '\r';
	case 't':
		return '\t';
	default:
		return c;
	}
}
}

bool module_character(const std::string& source, size_t& position, uint8_t& value)
{
	if (position + 1 >= source.size() || source[position] != '\'')
		return false;
	size_t end = position + 1;
	char c = source[end++];
	if (c == '\\')
	{
		if (end == source.size())
			return false;
		c = named_escape(source[end++]);
	}
	if (end < source.size() && source[end] == '\'')
		++end;
	position = end;
	value = static_cast<uint8_t>(c);
	return true;
}

namespace {
template<typename Use>
std::vector<Use> slice_spans(const std::vector<Use>& input, uint32_t first, uint32_t count, uint32_t line)
{
	const uint64_t end = uint64_t(first) + count;
	auto begin = std::lower_bound(
		input.begin(), input.end(), first, [](const Use& use, uint32_t offset) { return use.first < offset; });
	if (begin != input.begin() && uint64_t((begin - 1)->first) + (begin - 1)->count > first)
		throw AssemblyError{ "assembly slice splits a typed operand", line, 1 };
	std::vector<Use> output;
	for (auto at = begin; at != input.end() && at->first < end; ++at)
	{
		if (uint64_t(at->first) + at->count > end)
			throw AssemblyError{ "assembly slice splits a typed operand", line, 1 };
		Use use = *at;
		use.first -= first;
		output.push_back(use);
	}
	return output;
}
}
ModuleLine module_slice(const ModuleLine& line, uint32_t first, uint32_t count)
{
	ModuleLine result;
	result.line = line.line;
	result.text = line.text.substr(first, count);
	result.symbols = slice_spans(line.symbols, first, count, line.line);
	result.labels = slice_spans(line.labels, first, count, line.line);
	return result;
}
void append_module_line(ModuleLine& target, const ModuleLine& source)
{
	const uint32_t offset = static_cast<uint32_t>(target.text.size());
	target.text += source.text;
	for (SymbolUse use : source.symbols)
	{
		use.first += offset;
		target.symbols.push_back(use);
	}
	for (LabelUse use : source.labels)
	{
		use.first += offset;
		target.labels.push_back(use);
	}
}

std::vector<ModuleLine> module_lines(
	const std::string& text, const std::vector<SymbolUse>& symbols, const std::vector<LabelUse>& labels)
{
	std::vector<ModuleLine> result;
	std::string uncommented;
	size_t first = 0;
	uint32_t line = 1, first_line = 1;
	char quote = 0;
	bool escape = false;
	auto append = [&](size_t end) {
		ModuleLine entry;
		entry.text = (uncommented.empty() ? text : uncommented).substr(first, end - first);
		entry.line = first_line;
		entry.symbols = slice_spans(
			symbols, static_cast<uint32_t>(first), static_cast<uint32_t>(end - first), first_line);
		entry.labels = slice_spans(
			labels, static_cast<uint32_t>(first), static_cast<uint32_t>(end - first), first_line);
		if (entry.text.find_first_not_of(" \t\r") != std::string::npos)
			result.push_back(std::move(entry));
	};
	for (size_t i = 0; i < text.size(); ++i)
	{
		const char c = text[i];
		if (c == '\0')
			throw AssemblyError{ "NUL in module assembly", line, 1 };
		if (quote)
		{
			if (!escape && c == quote)
				quote = 0;
			escape = !escape && c == '\\';
		}
		else if (c == '"')
			quote = c;
		else if (c == '\'')
		{
			const std::string& current = uncommented.empty() ? text : uncommented;
			const size_t directive = current.find_first_not_of(" \t\r", first);
			if (directive < i &&
				(current.compare(directive, 5, ".ifc ") == 0 || current.compare(directive, 6, ".ifnc ") == 0 ||
					current.compare(directive, 5, ".ifc\t") == 0 || current.compare(directive, 6, ".ifnc\t") == 0))
				quote = c;
			else
			{
				size_t end = i;
				uint8_t value;
				if (!module_character(text, end, value))
					throw AssemblyError{ "incomplete assembly character constant", line, 1 };
				line += static_cast<uint32_t>(std::count(text.begin() + i, text.begin() + end, '\n'));
				i = end - 1;
			}
		}
		else if (c == '/' && i + 1 < text.size() && text[i + 1] == '*')
		{
			const size_t end = text.find("*/", i + 2);
			if (end == std::string::npos)
				throw AssemblyError{ "unterminated assembly block comment", line, 1 };
			if (uncommented.empty())
				uncommented = text;
			line += static_cast<uint32_t>(std::count(text.begin() + i, text.begin() + end, '\n'));
			std::fill(uncommented.begin() + i, uncommented.begin() + end + 2, ' ');
			i = end + 1;
		}
		else if (c == '#')
		{
			append(i);
			while (i < text.size() && text[i] != '\n')
				++i;
			if (i == text.size())
			{
				first = i;
				break;
			}
			first = i + 1;
			++line;
			first_line = line;
		}
		else if (c == '\n' || c == ';' ||
			(c == ':' && identifier((uncommented.empty() ? text : uncommented).substr(first, i - first))))
		{
			append(i + (c == ':'));
			first = i + 1;
			first_line = line + (c == '\n');
		}
		if (c == '\n')
			++line;
	}
	if (quote)
		throw AssemblyError{ "unterminated module string", line, 1 };
	append(text.size());
	return result;
}

void ModuleCursor::space()
{
	while (current() == ' ' || current() == '\t' || current() == '\r')
		++position_;
}
bool ModuleCursor::take(char c)
{
	space();
	if (position_ == source_.size() || source_[position_] != c)
		return false;
	++position_;
	return true;
}
bool ModuleCursor::end()
{
	space();
	return position_ == source_.size();
}
bool ModuleCursor::numeric()
{
	space();
	return position_ < source_.size() &&
		(std::isdigit(static_cast<unsigned char>(source_[position_])) || source_[position_] == '-' ||
			source_[position_] == '+' || source_[position_] == '(' || source_[position_] == '~' ||
			source_[position_] == '\'');
}
bool ModuleCursor::numbered_label()
{
	space();
	size_t end = position_;
	while (end < source_.size() && source_[end] >= '0' && source_[end] <= '9')
		++end;
	if (end == position_ || end == source_.size() || (source_[end] != 'f' && source_[end] != 'b'))
		return false;
	const char next = ++end == source_.size() ? '\0' : source_[end];
	return !std::isalnum(static_cast<unsigned char>(next)) && next != '_' && next != '.' && next != '$';
}
bool ModuleCursor::quoted_start()
{
	space();
	return position_ < source_.size() && source_[position_] == '"';
}
std::string ModuleCursor::word()
{
	space();
	const uint32_t first = position_;
	while (position_ < source_.size())
	{
		const char c = source_[position_];
		if (!std::isalnum(static_cast<unsigned char>(c)) && c != '_' && c != '.' && c != '$')
			break;
		++position_;
	}
	if (first == position_)
		fail("expected module assembly identifier");
	return source_.substr(first, position_ - first);
}
template<typename UInt>
UInt ModuleCursor::number_as()
{
	space();
	const bool negative = take('-');
	if (!negative)
		take('+');
	if (current() == '\'')
	{
		size_t end = position_;
		uint8_t value;
		if (!module_character(source_, end, value))
			fail("incomplete assembly character constant");
		position_ = static_cast<uint32_t>(end);
		return negative ? UInt(0) - value : value;
	}
	unsigned base = 10;
	if (position_ + 1 < source_.size() && source_[position_] == '0')
	{
		const char c = source_[position_ + 1];
		base = c == 'x' || c == 'X' ? 16 : c == 'b' || c == 'B' ? 2 : 8;
		if (base != 8)
			position_ += 2;
	}
	UInt value = 0;
	bool seen = false;
	while (position_ < source_.size() && digit(source_[position_]) < base)
	{
		const unsigned part = digit(source_[position_++]);
		if (value > (static_cast<UInt>(-1) - part) / base)
			fail(sizeof(UInt) == 8 ? "module integer exceeds 64 bits" : "module integer exceeds 128 bits");
		value = value * base + part;
		seen = true;
	}
	if (!seen)
		fail("expected module integer");
	// Macro-expanded assembler sources can retain C integer suffixes.
	bool unsigned_suffix = false;
	unsigned long_suffixes = 0;
	while (position_ < source_.size())
	{
		const char suffix = static_cast<char>(source_[position_] | 0x20);
		if (suffix == 'u' && !unsigned_suffix)
			unsigned_suffix = true;
		else if (suffix == 'l' && long_suffixes < 2)
			++long_suffixes;
		else
			break;
		++position_;
	}
	return negative ? UInt(0) - value : value;
}
uint64_t ModuleCursor::number()
{
	return number_as<uint64_t>();
}
asm_model::Bits ModuleCursor::wide_number()
{
	const __uint128_t value = number_as<__uint128_t>();
	return asm_model::Bits{ static_cast<uint64_t>(value), static_cast<uint64_t>(value >> 64) };
}
std::string ModuleCursor::quoted()
{
	if (!take('"'))
		fail("expected module string");
	std::string result;
	while (position_ < source_.size())
	{
		char c = source_[position_++];
		if (c == '"')
			return result;
		if (c == '\\')
		{
			if (position_ == source_.size())
				fail("unterminated module escape");
			c = source_[position_++];
			if (c >= '0' && c <= '7')
			{
				unsigned value = c - '0';
				for (unsigned i = 1;
					i < 3 && position_ < source_.size() && source_[position_] >= '0' && source_[position_] <= '7'; ++i)
					value = value * 8 + source_[position_++] - '0';
				c = static_cast<char>(value);
			}
			else if (c == 'x')
			{
				const uint32_t first = position_;
				unsigned value = 0;
				while (position_ < source_.size() && digit(source_[position_]) < 16)
					value = (value * 16 + digit(source_[position_++])) & 255u;
				if (position_ == first)
					fail("hexadecimal module escape requires a digit");
				c = static_cast<char>(value);
			}
			else if (c == 'b')
				c = '\b';
			else if (c == 'f')
				c = '\f';
			else if (c == 'n')
				c = '\n';
			else if (c == 'r')
				c = '\r';
			else if (c == 't')
				c = '\t';
			else if (c != '\\' && c != '"')
				fail("unsupported module string escape");
		}
		result += c;
	}
	fail("unterminated module string");
}
const SymbolUse* ModuleCursor::symbol_use() const
{
	if (symbols_ == nullptr)
		return nullptr;
	for (const SymbolUse& use : *symbols_)
		if (use.first == position_)
			return &use;
	return nullptr;
}
std::string ModuleCursor::rest()
{
	space();
	const std::string value = source_.substr(position_);
	position_ = static_cast<uint32_t>(source_.size());
	return value;
}
void ModuleCursor::finish()
{
	if (!end())
		fail("unexpected token in module directive");
}
void ModuleCursor::fail(const std::string& message) const
{
	throw AssemblyError{ message, line_, column_ + (position_ - first_) };
}
} // namespace assembly
