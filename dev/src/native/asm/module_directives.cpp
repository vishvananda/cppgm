#include "native/asm/module.h"

#include <climits>
#include <fstream>

#include "aarch64/assembler.h"
#include "aarch64/link.h"
#include "asm/module_expression.h"
#include "native/backend_error.h"

namespace native {
namespace {
using object::SectionKind;
const uint64_t kModuleByteLimit = 64u * 1024u * 1024u;

unsigned scalar_data_width(const std::string& name, Target target)
{
	if (name == ".quad" || name == ".8byte")
		return 8;
	if (name == ".long" || name == ".int" || name == ".4byte" || (name == ".word" && target_model::is_aarch64(target)))
		return 4;
	if (name == ".short" || name == ".word" || name == ".value" || name == ".2byte" ||
		(name == ".hword" && target_model::is_aarch64(target)))
		return 2;
	return name == ".byte" ? 1 : 0;
}

SectionKind elf_section_default(const std::string& name)
{
	if (name == ".text" || name.compare(0, 6, ".text.") == 0 || name == ".init" || name == ".fini")
		return SectionKind::Text;
	if (name == ".data" || name.compare(0, 6, ".data.") == 0)
		return SectionKind::Data;
	if (name == ".bss" || name.compare(0, 5, ".bss.") == 0)
		return SectionKind::Bss;
	if (name == ".rodata" || name.compare(0, 8, ".rodata.") == 0)
		return SectionKind::Rodata;
	return SectionKind::Metadata;
}
}
void ModuleAssembler::reserve(uint64_t count, uint8_t fill)
{
	object::Section& section = out_.sections[section_];
	if (count > kModuleByteLimit || section.size > kModuleByteLimit - count)
		throw BackendError("module section exceeds the byte limit");
	section.size += count;
	if (section.kind != SectionKind::Bss)
		section.bytes.resize(section.size, fill);
	else if (fill != 0)
		throw BackendError("nonzero initialization in module bss section");
}
void ModuleAssembler::stage(ModuleLayout::Fragment fragment)
{
	const auto& section = out_.sections[section_];
	if ((section.kind == SectionKind::Bss || section.kind == SectionKind::TlsBss) && fragment.fill != 0)
		throw BackendError("nonzero initialization in module bss section");
	layout_.append(section_, std::move(fragment));
	reserve(1, 0);
}
assembly::ModuleValue ModuleAssembler::expression_symbol(assembly::ModuleCursor& cursor)
{
	cursor.space();
	assembly::ModuleValue result;
	if (const assembly::SymbolUse* use = cursor.symbol_use())
	{
		cursor.advance(use->count);
		result.positive = use->reference.symbol;
		result.bits = static_cast<uint64_t>(use->reference.addend);
	}
	else
	{
		const std::string name = cursor.word();
		result.positive = name == "." ? 0 : symbols_.named(name);
	}
	if (result.positive != 0 && out_.symbols[result.positive].section == object::kAbsoluteSection)
	{
		result.bits += out_.symbols[result.positive].value;
		result.positive = lowir::kNoId;
	}
	return result;
}
void ModuleAssembler::fold_difference(assembly::ModuleValue& value) const
{
	fold_at(value, section_, offset());
}
void ModuleAssembler::fold_at(assembly::ModuleValue& value, uint32_t section, uint64_t at) const
{
	if (value.positive != 0 && value.positive != lowir::kNoId &&
		out_.symbols[value.positive].section == object::kAbsoluteSection)
	{
		value.bits += out_.symbols[value.positive].value;
		value.positive = lowir::kNoId;
	}
	if (value.negative != 0 && value.negative != lowir::kNoId &&
		out_.symbols[value.negative].section == object::kAbsoluteSection)
	{
		value.bits -= out_.symbols[value.negative].value;
		value.negative = lowir::kNoId;
	}
	if (value.positive == lowir::kNoId || value.negative == lowir::kNoId)
		return;
	const uint32_t plus_section = value.positive == 0 ? section : out_.symbols[value.positive].section;
	const uint32_t minus_section = value.negative == 0 ? section : out_.symbols[value.negative].section;
	if (plus_section != minus_section || plus_section == object::kUndefinedSection ||
		plus_section == object::kCommonSection)
		return;
	const uint64_t plus = value.positive == 0 ? at : out_.symbols[value.positive].value;
	const uint64_t minus = value.negative == 0 ? at : out_.symbols[value.negative].value;
	if (layout_.crosses(plus_section, minus, plus))
		return;
	value.bits += plus - minus;
	value.positive = value.negative = lowir::kNoId;
}
uint32_t ModuleAssembler::queue_literal(const aarch64::AssemblyWord& instruction, uint64_t site)
{
	if (out_.assembly_text)
		throw BackendError("AArch64 inline assembly requires an explicit literal load and data label");
	uint32_t target = instruction.symbol;
	if (target == 0)
	{
		object::Symbol anchor;
		anchor.section = section_;
		anchor.value = site;
		target = out_.add_symbol(anchor);
	}
	const uint32_t id = out_.add_symbol(object::Symbol{});
	literal_pools_[section_].push_back({ id, target, instruction.addend, instruction.literal_width });
	return id;
}

void ModuleAssembler::literal_pool(uint32_t section)
{
	const auto found = literal_pools_.find(section);
	if (found == literal_pools_.end() || found->second.empty())
		return;
	const uint32_t previous = section_;
	section_ = section;
	auto& contents = out_.sections[section_];
	using Key = std::tuple<unsigned, uint32_t, int64_t>;
	std::map<Key, uint64_t> positions;
	for (const auto& literal : found->second)
	{
		const auto shared = positions.emplace(Key{ literal.width, literal.value_symbol, literal.bits }, offset());
		if (shared.second)
		{
			contents.align = std::max<uint64_t>(contents.align, literal.width);
			if (layout_.pending(section_))
				stage({ offset(), 0, literal.width, UINT64_MAX });
			else
				reserve((uint64_t(0) - offset()) & (literal.width - 1), 0);
			const uint64_t at = offset();
			shared.first->second = at;
			reserve(literal.width, 0);
			if (literal.value_symbol == lowir::kNoId)
				for (unsigned i = 0; i < literal.width; ++i)
					contents.bytes[at + i] = static_cast<uint8_t>(uint64_t(literal.bits) >> (8 * i));
			else
				contents.relocations.push_back(
					{ at, literal.width == 4 ? aarch64::Abs32 : aarch64::Abs64, literal.value_symbol, literal.bits });
		}
		symbols_.define(literal.symbol, section_, shared.first->second);
	}
	found->second.clear();
	section_ = previous;
}

void ModuleAssembler::data(assembly::ModuleCursor& cursor, unsigned bytes)
{
	do
	{
		cursor.space();
		if (cursor.current() == '(')
		{
			auto expression = assembly::parse_module_expression(cursor, *this);
			const uint64_t first = offset();
			reserve(bytes, 0);
			DataRelocation word = { first, first, 0, section_, lowir::kNoId, lowir::kNoId, bytes, 0,
				static_cast<uint32_t>(data_expressions_.size()) };
			data_expressions_.push_back(std::move(expression));
			data_relocations_.push_back(word);
			continue;
		}
		const assembly::ModuleValue value = assembly::assembly_module_expression(cursor, *this);
		const uint64_t first = offset();
		reserve(bytes, 0);
		if (value.relocatable())
		{
			if (value.positive == lowir::kNoId || out_.sections[section_].kind == SectionKind::Bss ||
				(target_model::is_darwin(target_) && (value.negative != lowir::kNoId || bytes != 8)))
				cursor.fail("module symbol data expression is unavailable for this section or target");
			data_relocations_.push_back(DataRelocation{
				first, first, value.bits, section_, value.positive, value.negative, bytes, 0, lowir::kNoId });
		}
		else if (out_.sections[section_].kind == SectionKind::Bss)
		{
			if (value.bits != 0)
				cursor.fail("nonzero module bss initializer");
		}
		else
			for (unsigned i = 0; i < bytes; ++i)
				out_.sections[section_].bytes[first + i] = static_cast<uint8_t>(value.bits >> (8 * i));
	} while (cursor.take(','));
}

void ModuleAssembler::wide_data(assembly::ModuleCursor& cursor)
{
	if (out_.sections[section_].kind == SectionKind::Bss)
		cursor.fail("128-bit data requires a file-backed section");
	do
	{
		const asm_model::Bits value = cursor.wide_number();
		const uint64_t first = offset();
		reserve(16, 0);
		auto& bytes = out_.sections[section_].bytes;
		for (unsigned i = 0; i < 8; ++i)
		{
			bytes[first + i] = static_cast<uint8_t>(value.low >> (i * 8));
			bytes[first + 8 + i] = static_cast<uint8_t>(value.high >> (i * 8));
		}
	} while (cursor.take(','));
}

void ModuleAssembler::repeat_fill(assembly::ModuleCursor& cursor)
{
	auto expression = assembly::parse_module_expression(cursor, *this);
	const uint64_t size = cursor.take(',') ? assembly::assembly_integer_expression(cursor) : 1;
	const uint64_t value = cursor.take(',') ? assembly::assembly_integer_expression(cursor) : 0;
	if (static_cast<int64_t>(size) <= 0)
		return;
	if (expression.has_symbols)
	{
		if (size != 1)
			cursor.fail("a deferred .fill requires byte-sized elements");
		stage({ offset(), ModuleLayout::Kind::Space, static_cast<uint8_t>(value), std::move(expression) });
		return;
	}
	const uint64_t repetitions = assembly::evaluate_module_expression(expression, *this).bits;
	if (static_cast<int64_t>(repetitions) <= 0)
		return;
	const unsigned width = size > 8 ? 8 : static_cast<unsigned>(size);
	const uint32_t bits = static_cast<uint32_t>(value) & (UINT32_MAX >> (8 * (4 - std::min(width, 4u))));
	if (repetitions > kModuleByteLimit / width)
		cursor.fail("module .fill exceeds the byte limit");
	const uint64_t count = repetitions * width;
	if (bits == 0 || width == 1)
		return reserve(count, static_cast<uint8_t>(bits));
	if (out_.sections[section_].kind == SectionKind::Bss)
		cursor.fail("nonzero module bss initializer");
	const uint64_t first = offset();
	reserve(count, 0);
	auto& bytes = out_.sections[section_].bytes;
	const unsigned encoded = std::min(width, 4u);
	for (uint64_t i = first; i < first + count; i += width)
		for (unsigned j = 0; j < encoded; ++j)
			bytes[i + j] = static_cast<uint8_t>(bits >> (8 * j));
}

namespace {

uint32_t data_relocation_type(unsigned bytes, bool relative, Target target)
{
	if (target_model::is_aarch64(target))
	{
		if (bytes == 4)
			return relative ? aarch64::Prel32 : aarch64::Abs32;
		if (bytes == 8)
			return relative ? aarch64::Prel64 : aarch64::Abs64;
		throw BackendError("unsupported AArch64 assembly data relocation width");
	}
	if (relative)
		return bytes == 8 ? object::R_X86_64_PC64
			: bytes == 4  ? object::R_X86_64_PC32
			: bytes == 2  ? object::R_X86_64_PC16
						  : object::R_X86_64_PC8;
	return object::x86_absolute_relocation(bytes);
}

} // namespace

void ModuleAssembler::finish_data()
{
	if (data_relocations_.empty())
		return;
	std::vector<uint32_t> section_symbols(out_.sections.size(), 0);
	for (DataRelocation& word : data_relocations_)
	{
		word.offset = layout_.position(word.section, word.offset);
		if (word.positive == 0 || word.negative == 0)
			word.anchor = layout_.position(word.section, word.anchor);
		object::Section& section = out_.sections[word.section];
		if (word.expression != lowir::kNoId)
		{
			const auto value = layout_.evaluate_fixed(data_expressions_[word.expression], word.section, word.offset);
			if (!value.relocatable())
			{
				if (section.kind == object::SectionKind::Bss)
				{
					if (value.bits != 0)
						throw BackendError("nonzero module bss initializer");
				}
				else
					for (unsigned i = 0; i < word.bytes; ++i)
						section.bytes[word.offset + i] = static_cast<uint8_t>(value.bits >> (8 * i));
				continue;
			}
			if (value.positive == lowir::kNoId || section.kind == object::SectionKind::Bss ||
				(target_model::is_darwin(target_) && (value.negative != lowir::kNoId || word.bytes != 8)))
				throw BackendError("module symbol data expression is unavailable for this section or target");
			word.positive = value.positive;
			word.negative = value.negative;
			word.addend = value.bits;
			word.anchor = word.offset;
		}
		uint64_t addend = word.addend;
		uint32_t symbol = word.positive;
		if (symbol == 0)
		{
			uint32_t& cached = section_symbols[word.section];
			if (cached == 0)
			{
				object::Symbol entry;
				entry.section = word.section;
				entry.type = object::SymbolType::Section;
				cached = out_.add_symbol(entry);
			}
			symbol = cached;
			addend += word.anchor;
		}
		const object::Symbol& positive = out_.symbols[symbol];
		const bool subtract_absolute = word.negative != 0 && word.negative != lowir::kNoId &&
			out_.symbols[word.negative].section == object::kAbsoluteSection;
		const bool relative = word.negative != lowir::kNoId && !subtract_absolute;
		if (subtract_absolute)
			addend -= out_.symbols[word.negative].value;
		if (!relative && positive.section == object::kAbsoluteSection)
		{
			const uint64_t bits = positive.value + addend;
			for (unsigned i = 0; i < word.bytes; ++i)
				section.bytes[word.offset + i] = static_cast<uint8_t>(bits >> (8 * i));
			continue;
		}
		if (relative)
		{
			const uint32_t minus_section = word.negative == 0 ? word.section : out_.symbols[word.negative].section;
			const uint64_t minus_value = word.negative == 0 ? word.anchor : out_.symbols[word.negative].value;
			if (positive.section == minus_section && minus_section != object::kUndefinedSection &&
				minus_section != object::kCommonSection)
			{
				const uint64_t bits = positive.value - minus_value + addend;
				if (word.absolute_type == object::R_X86_64_32S &&
					static_cast<int64_t>(bits) != static_cast<int32_t>(bits))
					throw BackendError("assembly instruction symbol difference exceeds a signed 32-bit field");
				for (unsigned i = 0; i < word.bytes; ++i)
					section.bytes[word.offset + i] = static_cast<uint8_t>(bits >> (8 * i));
				continue;
			}
			if (minus_section != word.section)
				throw BackendError("module symbol difference has no relocation for its subtrahend");
			addend += word.offset - minus_value;
		}
		const uint32_t type = relative || word.absolute_type == 0 ? data_relocation_type(word.bytes, relative, target_)
																  : word.absolute_type;
		section.relocations.push_back(object::Relocation{ word.offset, type, symbol, static_cast<int64_t>(addend) });
	}
}

void ModuleAssembler::strings(assembly::ModuleCursor& cursor, bool terminate)
{
	do
	{
		std::string value = cursor.quoted();
		while (cursor.quoted_start())
			value += cursor.quoted();
		const uint64_t first = offset();
		reserve(value.size() + terminate, 0);
		if (out_.sections[section_].kind == SectionKind::Bss)
			cursor.fail("string in module bss");
		std::copy(value.begin(), value.end(), out_.sections[section_].bytes.begin() + first);
		if (out_.assembly_text && (!value.empty() || terminate))
			out_.assembly_strings.push_back(
				object::AssemblyString{ section_, first, static_cast<uint32_t>(value.size()) + terminate });
	} while (cursor.take(','));
}
void ModuleAssembler::include_binary(assembly::ModuleCursor& cursor)
{
	const std::string path = cursor.quoted();
	if (path.find('\0') != std::string::npos || path.empty())
		cursor.fail("invalid module binary file name");
	const uint64_t skip = cursor.take(',') ? assembly::assembly_integer_expression(cursor) : 0;
	const bool explicit_count = cursor.take(',');
	const uint64_t count = explicit_count ? assembly::assembly_integer_expression(cursor) : 0;
	if (out_.sections[section_].kind == SectionKind::Bss)
		cursor.fail("binary data in module bss");
	std::ifstream stream(path, std::ios::binary | std::ios::ate);
	if (!stream)
		cursor.fail("cannot open module binary file " + path);
	const std::streamoff file_size = stream.tellg();
	if (file_size < 0 || skip > static_cast<uint64_t>(file_size))
		cursor.fail("module binary offset exceeds file size");
	const uint64_t available = static_cast<uint64_t>(file_size) - skip;
	const uint64_t bytes = explicit_count ? count : available;
	if (bytes > available)
		cursor.fail("module binary count exceeds file size");
	const uint64_t first = offset();
	reserve(bytes, 0);
	stream.seekg(static_cast<std::streamoff>(skip));
	if (bytes != 0 && !stream.read(reinterpret_cast<char*>(out_.sections[section_].bytes.data() + first), bytes))
		cursor.fail("cannot read module binary file " + path);
}
void ModuleAssembler::alignment(assembly::ModuleCursor& cursor, bool power)
{
	const auto expression = assembly::assembly_module_expression(cursor, *this);
	if (expression.relocatable())
		cursor.fail("module alignment requires an absolute value");
	uint64_t alignment = expression.bits;
	if (power)
	{
		if (alignment > 20)
			cursor.fail("module alignment exponent exceeds limit");
		alignment = uint64_t(1) << alignment;
	}
	if (alignment == 0 || alignment > (1u << 20) || (alignment & (alignment - 1)) != 0)
		cursor.fail("module alignment requires a bounded power of two");
	const bool text = out_.sections[section_].kind == SectionKind::Text;
	int16_t fill = text ? (syntax_.code_bits == 16 ? 0x90 : -1) : 0;
	uint64_t maximum = UINT64_MAX;
	if (cursor.take(','))
	{
		if (cursor.numeric())
			fill = static_cast<uint8_t>(assembly::assembly_integer_expression(cursor));
		if (cursor.take(','))
			maximum = assembly::assembly_integer_expression(cursor);
	}
	out_.sections[section_].align = std::max(out_.sections[section_].align, alignment);
	if (layout_.pending(section_))
		stage({ offset(), fill, alignment, maximum });
	else
	{
		const uint64_t bytes = (uint64_t(0) - offset()) & (alignment - 1);
		if (bytes <= maximum)
		{
			if (fill < 0 && target_model::is_aarch64(target_))
			{
				auto& section = out_.sections[section_];
				if (section.size + bytes > kModuleByteLimit)
					cursor.fail("module section exceeds the byte limit");
				aarch64::append_code_padding(section.bytes, bytes);
				section.size = section.bytes.size();
			}
			else
				reserve(bytes, text && fill < 0 ? 0x90 : fill);
		}
	}
}
void ModuleAssembler::size(assembly::ModuleCursor& cursor)
{
	const uint32_t id = symbol(cursor);
	if (!cursor.take(','))
		cursor.fail("module size requires an expression");
	const assembly::ModuleValue bytes = assembly::assembly_module_expression(cursor, *this);
	if (bytes.relocatable())
		sizes_.push_back({ id, section_, offset(), bytes });
	else if (bytes.bits > INT64_MAX)
		cursor.fail("module size requires a nonnegative absolute expression");
	else
		out_.symbols[id].size = bytes.bits;
}
void ModuleAssembler::finish_symbols()
{
	for (DeferredSymbolValue& entry : absolute_definitions_)
	{
		fold_at(entry.value, entry.section, layout_.position(entry.section, entry.offset));
		if (entry.value.relocatable())
			throw BackendError("module symbol assignment requires an absolute value or one address");
		symbols_.define_absolute(entry.symbol, entry.value.bits);
	}
	for (const RawSize& entry : raw_sizes_)
		out_.symbols[entry.symbol].size = layout_.position(entry.section, entry.end) -
			layout_.position(entry.section, entry.first);
	for (DeferredSymbolValue& entry : sizes_)
	{
		fold_at(entry.value, entry.section, layout_.position(entry.section, entry.offset));
		if (entry.value.relocatable() || entry.value.bits > INT64_MAX)
			throw BackendError("module size requires a nonnegative absolute expression");
		out_.symbols[entry.symbol].size = entry.value.bits;
	}
}
void ModuleAssembler::origin(assembly::ModuleCursor& cursor, bool explicit_fill)
{
	if (layout_.pending(section_))
	{
		auto expression = assembly::parse_module_expression(cursor, *this);
		const uint8_t fill = explicit_fill && cursor.take(',') ? assembly::assembly_integer_expression(cursor) : 0;
		stage({ offset(), ModuleLayout::Kind::Origin, fill, std::move(expression) });
		return;
	}
	assembly::ModuleValue end = assembly::assembly_module_expression(cursor, *this);
	if (end.positive != lowir::kNoId && end.negative == lowir::kNoId)
	{
		end.negative = 0;
		fold_difference(end);
		end.bits += offset();
	}
	if (end.relocatable() || end.bits < offset())
		cursor.fail("module origin must advance within its section");
	const uint8_t fill = explicit_fill && cursor.take(',') ? assembly::assembly_integer_expression(cursor) : 0;
	reserve(end.bits - offset(), fill);
}

void ModuleAssembler::assign(uint32_t id, assembly::ModuleCursor& cursor)
{
	const assembly::ModuleValue value = assembly::assembly_module_expression(cursor, *this);
	if (value.negative != lowir::kNoId)
		absolute_definitions_.push_back({ id, section_, offset(), value });
	else if (value.positive == lowir::kNoId)
		symbols_.define_absolute(id, value.bits);
	else if (value.positive == 0)
	{
		object::Symbol anchor;
		anchor.section = section_;
		anchor.value = offset();
		symbols_.alias(id, out_.add_symbol(anchor), static_cast<int64_t>(value.bits));
	}
	else
		symbols_.alias(id, value.positive, static_cast<int64_t>(value.bits));
}
void ModuleAssembler::type(assembly::ModuleCursor& cursor)
{
	const uint32_t id = symbol(cursor);
	cursor.take(',');
	cursor.take('@');
	cursor.take('%');
	const std::string kind = cursor.word();
	if (kind == "function" || kind == "STT_FUNC")
		symbols_.type(id, object::SymbolType::Function);
	else if (kind == "object" || kind == "STT_OBJECT")
		symbols_.type(id, object::SymbolType::Object);
	else if (kind == "notype" || kind == "STT_NOTYPE")
		symbols_.type(id, object::SymbolType::None);
	else if (kind == "gnu_indirect_function")
		cursor.fail("indirect function module definition is not implemented");
	else
		cursor.fail("unsupported module symbol type");
}
bool ModuleAssembler::directive(const std::string& name, assembly::ModuleCursor& cursor)
{
	if (name == ".text" || name == ".data" || name == ".bss" || name == ".rodata")
		section(name,
			name == ".text"         ? SectionKind::Text
				: name == ".bss"    ? SectionKind::Bss
				: name == ".rodata" ? SectionKind::Rodata
									: SectionKind::Data);
	else if (name == ".globl" || name == ".global" || name == ".weak" || name == ".weak_definition" ||
		name == ".local" || name == ".hidden" || name == ".private_extern")
	{
		do
		{
			const uint32_t id = symbol(cursor);
			if (name == ".hidden" || name == ".private_extern")
				out_.symbols[id].visibility = object::Visibility::Hidden;
			else
				symbols_.bind(id,
					name == ".local"                                    ? object::Binding::Local
						: name == ".weak" || name == ".weak_definition" ? object::Binding::Weak
																		: object::Binding::Global);
		} while (cursor.take(','));
	}
	else if (name == ".type")
		type(cursor);
	else if (name == ".size")
		size(cursor);
	else if (const unsigned width = scalar_data_width(name, target_))
		data(cursor, width);
	else if (name == ".octa")
		wide_data(cursor);
	else if (name == ".ascii" || name == ".asciz" || name == ".string")
		strings(cursor, name != ".ascii");
	else if (name == ".incbin")
		include_binary(cursor);
	else if (name == ".fill")
		repeat_fill(cursor);
	else if (name == ".zero" || name == ".space" || name == ".skip")
	{
		auto expression = assembly::parse_module_expression(cursor, *this);
		const int16_t fill = cursor.take(',') ? static_cast<uint8_t>(assembly::assembly_integer_expression(cursor)) : 0;
		if (expression.has_symbols)
			stage({ offset(), ModuleLayout::Kind::Space, fill, std::move(expression) });
		else
			reserve(assembly::evaluate_module_expression(expression, *this).bits, fill);
	}
	else if (name == ".org")
		origin(cursor, true);
	else if ((name == ".ltorg" || name == ".pool") && target_model::is_aarch64(target_))
		literal_pool(section_);
	else if (name == ".p2align" || name == ".balign" || name == ".align")
		alignment(cursor,
			name == ".p2align" ||
				(name == ".align" && (target_ == Target::MacOS || target_model::is_aarch64(target_))));
	else if (name == ".code16" || name == ".code16gcc" || name == ".code32" || name == ".code64")
	{
		if (target_model::is_aarch64(target_))
			cursor.fail("x86 assembly code mode on AArch64");
		syntax_.code_bits = name == ".code64" ? 64 : name == ".code32" ? 32 : 16;
		syntax_.code16gcc = name == ".code16gcc";
	}
	else if (name == ".subsections_via_symbols")
	{
	}
	else if (name == ".extern")
	{
		do
			cursor.word();
		while (cursor.take(','));
	}
	else if (name == ".unreq" && target_model::is_aarch64(target_))
		symbols_.remove_register_alias(cursor.word());
	else if (name == ".set" || name == ".equ")
	{
		assembly::ModuleCursor position = cursor;
		const bool location = position.word() == "." && position.take(',');
		if (location)
		{
			cursor.advance(position.position() - cursor.position());
			origin(cursor, false);
			return true;
		}
		const uint32_t id = symbol(cursor);
		if (!cursor.take(','))
			cursor.fail("module alias requires its target");
		assign(id, cursor);
	}
	else if ((name == ".arch" || name == ".arch_extension" || name == ".cpu") && target_model::is_aarch64(target_))
		aarch64::set_assembly_features(aarch64_features_, name, cursor);
	else if (name == ".subsection" && target_model::is_aarch64(target_))
	{
		const auto number = assembly::assembly_module_expression(cursor, *this);
		if (number.relocatable() || number.bits > UINT32_MAX)
			cursor.fail("module subsection requires a nonnegative 32-bit number");
		subsection(static_cast<uint32_t>(number.bits));
	}
	else if (name == ".previous")
	{
		if (previous_ == 0)
			cursor.fail("no previous module section");
		std::swap(section_, previous_);
	}
	else if (name == ".popsection")
	{
		if (section_stack_.empty())
			cursor.fail("empty module section stack");
		previous_ = section_;
		section_ = section_stack_.back();
		section_stack_.pop_back();
	}
	else if (name == ".section" || name == ".pushsection")
	{
		if (name == ".pushsection")
			section_stack_.push_back(section_);
		const bool quoted = cursor.quoted_start();
		std::string section_name = quoted ? cursor.quoted() : cursor.word();
		while (!quoted && cursor.take('-'))
			section_name += "-" + cursor.word();
		if (section_name.empty())
			cursor.fail("module section name cannot be empty");
		const bool attributes = cursor.take(',');
		const bool elf = !target_model::is_darwin(target_);
		const bool inherit = elf && !attributes;
		SectionKind kind = inherit ? elf_section_default(section_name) : SectionKind::Data;
		uint32_t merge_size = 0;
		bool merge_strings = false;
		bool note = false;
		if (attributes)
		{
			if (target_ == Target::MacOS && section_name.compare(0, 2, "__") == 0)
			{
				const std::string item = cursor.word();
				kind = section_name == "__TEXT" ? (item == "__text" ? SectionKind::Text : SectionKind::Rodata)
					: item == "__bss"           ? SectionKind::Bss
												: SectionKind::Data;
				section_name = item == "__text" ? ".text"
					: item == "__const"         ? ".rodata"
					: item == "__data"          ? ".data"
					: item == "__bss"           ? ".bss"
												: item;
				if (cursor.take(','))
					cursor.fail("Mach-O section attributes are not implemented yet");
			}
			else
			{
				const std::string flags = cursor.quoted();
				if (flags.find_first_not_of("awxMS") != std::string::npos)
					cursor.fail("module section flags are not implemented");
				kind = flags.find('x') != std::string::npos ? SectionKind::Text
					: flags.find('w') != std::string::npos  ? SectionKind::Data
					: flags.find('a') != std::string::npos  ? SectionKind::Rodata
															: SectionKind::Metadata;
				const bool merge = flags.find('M') != std::string::npos;
				merge_strings = flags.find('S') != std::string::npos;
				if ((merge_strings && !merge) || (merge && !elf))
					cursor.fail("mergeable section flags require ELF M or MS");
				if (cursor.take(','))
				{
					cursor.take('@');
					cursor.take('%');
					const std::string type = cursor.word();
					if (type == "nobits")
						kind = SectionKind::Bss;
					else if (type == "note" && elf && !merge)
						note = true;
					else if (type != "progbits")
						cursor.fail("unsupported module section type");
					if (merge)
					{
						if (type != "progbits" || !cursor.take(','))
							cursor.fail("mergeable section requires a progbits entry size");
						const uint64_t size = assembly::assembly_integer_expression(cursor);
						if (size == 0 || size > kModuleByteLimit)
							cursor.fail("mergeable section entry size is out of range");
						merge_size = static_cast<uint32_t>(size);
					}
				}
				else if (merge)
					cursor.fail("mergeable section requires a section type and entry size");
			}
		}
		if (section_name == ".text")
			kind = SectionKind::Text;
		else if (section_name == ".rodata")
			kind = SectionKind::Rodata;
		else if (section_name == ".bss")
			kind = SectionKind::Bss;
		if (note && kind == SectionKind::Bss)
			cursor.fail("a note section requires file contents");
		section(section_name, kind, merge_size, merge_strings, note, inherit);
	}
	else
		return false;
	return true;
}
} // namespace native
