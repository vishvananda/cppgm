#include "native/asm/module.h"

#include <climits>
#include <fstream>

#include "asm/module_expression.h"
#include "native/backend_error.h"

namespace native {
namespace {
using object::SectionKind;
const uint64_t kModuleByteLimit = 64u * 1024u * 1024u;
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
uint32_t ModuleAssembler::data_symbol(assembly::ModuleCursor& cursor, uint64_t& addend, bool subtract)
{
	cursor.space();
	if (const assembly::SymbolUse* use = cursor.symbol_use())
	{
		cursor.advance(use->count);
		const uint64_t offset = static_cast<uint64_t>(use->reference.addend);
		addend += subtract ? uint64_t(0) - offset : offset;
		return use->reference.symbol;
	}
	const std::string name = cursor.word();
	// Symbol zero denotes this data field's position in its section.
	return name == "." ? 0 : symbols_.named(name);
}
void ModuleAssembler::data(assembly::ModuleCursor& cursor, unsigned bytes)
{
	do
	{
		uint64_t bits = 0;
		uint32_t positive = lowir::kNoId, negative = lowir::kNoId;
		if (cursor.numeric())
			bits = assembly::assembly_integer_expression(cursor);
		else
		{
			positive = data_symbol(cursor, bits, false);
			assembly::ModuleCursor next = cursor;
			if (next.take('-') && !next.numeric() && !next.end())
			{
				cursor.take('-');
				negative = data_symbol(cursor, bits, true);
			}
			cursor.space();
			if (cursor.current() == '+' || cursor.current() == '-')
				bits += assembly::assembly_integer_addend(cursor);
		}
		const uint64_t first = offset();
		reserve(bytes, 0);
		if (positive != lowir::kNoId)
		{
			if (out_.sections[section_].kind == SectionKind::Bss ||
				(target_ != Target::Linux && (negative != lowir::kNoId || bytes != 8)))
				cursor.fail("module symbol data expression is unavailable for this section or target");
			data_relocations_.push_back(DataRelocation{ first, bits, section_, positive, negative, bytes });
		}
		else if (out_.sections[section_].kind == SectionKind::Bss)
		{
			if (bits != 0)
				cursor.fail("nonzero module bss initializer");
		}
		else
			for (unsigned i = 0; i < bytes; ++i)
				out_.sections[section_].bytes[first + i] = static_cast<uint8_t>(bits >> (8 * i));
	} while (cursor.take(','));
}

namespace {

uint32_t data_relocation_type(unsigned bytes, bool relative)
{
	if (relative)
		return bytes == 8 ? object::R_X86_64_PC64
			: bytes == 4  ? object::R_X86_64_PC32
			: bytes == 2  ? object::R_X86_64_PC16
						  : object::R_X86_64_PC8;
	return bytes == 8 ? object::R_X86_64_64
		: bytes == 4  ? object::R_X86_64_32
		: bytes == 2  ? object::R_X86_64_16
					  : object::R_X86_64_8;
}

} // namespace

void ModuleAssembler::finish_data()
{
	if (data_relocations_.empty())
		return;
	std::vector<uint32_t> section_symbols(out_.sections.size(), 0);
	for (const DataRelocation& word : data_relocations_)
	{
		object::Section& section = out_.sections[word.section];
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
			addend += word.offset;
		}
		const object::Symbol& positive = out_.symbols[symbol];
		const bool relative = word.negative != lowir::kNoId;
		if (relative)
		{
			const uint32_t minus_section = word.negative == 0 ? word.section : out_.symbols[word.negative].section;
			const uint64_t minus_value = word.negative == 0 ? word.offset : out_.symbols[word.negative].value;
			if (positive.section == minus_section && minus_section != object::kUndefinedSection &&
				minus_section != object::kCommonSection)
			{
				const uint64_t bits = positive.value - minus_value + addend;
				for (unsigned i = 0; i < word.bytes; ++i)
					section.bytes[word.offset + i] = static_cast<uint8_t>(bits >> (8 * i));
				continue;
			}
			if (minus_section != word.section)
				throw BackendError("module symbol difference has no relocation for its subtrahend");
			addend += word.offset - minus_value;
		}
		section.relocations.push_back(object::Relocation{
			word.offset, data_relocation_type(word.bytes, relative), symbol, static_cast<int64_t>(addend) });
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
	uint64_t alignment = assembly::assembly_integer_expression(cursor);
	if (power)
	{
		if (alignment > 20)
			cursor.fail("module alignment exponent exceeds limit");
		alignment = uint64_t(1) << alignment;
	}
	if (alignment == 0 || alignment > (1u << 20) || (alignment & (alignment - 1)) != 0)
		cursor.fail("module alignment requires a bounded power of two");
	uint8_t fill = out_.sections[section_].kind == SectionKind::Text ? 0x90 : 0;
	uint64_t maximum = UINT64_MAX;
	if (cursor.take(','))
	{
		if (cursor.numeric())
			fill = static_cast<uint8_t>(assembly::assembly_integer_expression(cursor));
		if (cursor.take(','))
			maximum = assembly::assembly_integer_expression(cursor);
	}
	out_.sections[section_].align = std::max(out_.sections[section_].align, alignment);
	const uint64_t bytes = (uint64_t(0) - offset()) & (alignment - 1);
	if (bytes <= maximum)
		reserve(bytes, fill);
}
void ModuleAssembler::size(assembly::ModuleCursor& cursor)
{
	const uint32_t id = symbol(cursor);
	if (!cursor.take(','))
		cursor.fail("module size requires an expression");
	uint64_t bytes = 0;
	if (cursor.numeric())
		bytes = assembly::assembly_integer_expression(cursor);
	else
	{
		if (cursor.word() != "." || !cursor.take('-') || symbol(cursor) != id || out_.symbols[id].section != section_ ||
			out_.symbols[id].value > offset())
			cursor.fail("unsupported module size expression");
		bytes = offset() - out_.symbols[id].value;
	}
	out_.symbols[id].size = bytes;
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
	else if (name == ".byte" || name == ".word" || name == ".short" || name == ".long" || name == ".int" ||
		name == ".quad")
		data(cursor, name == ".byte" ? 1 : name == ".word" || name == ".short" ? 2 : name == ".quad" ? 8 : 4);
	else if (name == ".ascii" || name == ".asciz" || name == ".string")
		strings(cursor, name != ".ascii");
	else if (name == ".incbin")
		include_binary(cursor);
	else if (name == ".zero" || name == ".space" || name == ".skip")
	{
		const uint64_t bytes = assembly::assembly_integer_expression(cursor);
		const uint8_t fill = cursor.take(',') ? static_cast<uint8_t>(assembly::assembly_integer_expression(cursor)) : 0;
		reserve(bytes, fill);
	}
	else if (name == ".p2align" || name == ".balign" || name == ".align")
		alignment(cursor, name == ".p2align" || (name == ".align" && target_ == Target::MacOS));
	else if (name == ".code64" || name == ".subsections_via_symbols")
	{
	}
	else if (name == ".set" || name == ".equ")
	{
		const uint32_t id = symbol(cursor);
		if (!cursor.take(','))
			cursor.fail("module alias requires its target");
		const uint32_t target = symbol(cursor);
		int64_t addend = 0;
		if (cursor.current() == '+' || cursor.current() == '-')
			addend = static_cast<int64_t>(assembly::assembly_integer_addend(cursor));
		symbols_.alias(id, target, addend);
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
		SectionKind kind = SectionKind::Data;
		uint32_t merge_size = 0;
		bool merge_strings = false;
		if (cursor.take(','))
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
				if ((merge_strings && !merge) || (merge && target_ != Target::Linux))
					cursor.fail("mergeable section flags require ELF M or MS");
				if (cursor.take(','))
				{
					cursor.take('@');
					cursor.take('%');
					const std::string type = cursor.word();
					if (type == "nobits")
						kind = SectionKind::Bss;
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
		section(section_name, kind, merge_size, merge_strings);
	}
	else
		return false;
	return true;
}
} // namespace native
