#include "native/object/elf_object.h"

#include <algorithm>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <iostream>
#include <unordered_set>

#include "native/object/elf_format.h"
#include "support/flat_map.h"

namespace native {
namespace object {

namespace {

struct OutputSection
{
	uint32_t name; // offset in .shstrtab
	uint32_t type;
	uint64_t flags;
	uint64_t offset;
	uint64_t size;
	uint32_t link;
	uint32_t info;
	uint64_t align;
	uint64_t entry_size;
	// The contents: an input section's bytes, else `built` (NOBITS: none).
	const std::vector<uint8_t>* bytes;
	std::vector<uint8_t> built;
};

uint32_t section_type(SectionKind kind)
{
	switch (kind)
	{
	case SectionKind::Bss:
	case SectionKind::TlsBss:
		return kShtNobits;
	case SectionKind::InitArray:
		return kShtInitArray;
	case SectionKind::FiniArray:
		return kShtFiniArray;
	default:
		return kShtProgbits;
	}
}

uint64_t section_flags(SectionKind kind)
{
	switch (kind)
	{
	case SectionKind::Text:
		return kShfAlloc | kShfExecinstr;
	case SectionKind::Rodata:
		return kShfAlloc;
	case SectionKind::Null:
	case SectionKind::Metadata:
		return 0;
	case SectionKind::MetadataStrings:
		return kShfMerge | kShfStrings;
	case SectionKind::TlsData:
	case SectionKind::TlsBss:
		return kShfAlloc | kShfWrite | kShfTls;
	default:
		return kShfAlloc | kShfWrite;
	}
}

uint8_t binding_code(Binding binding)
{
	return binding == Binding::Local ? kStbLocal : (binding == Binding::Weak ? kStbWeak : kStbGlobal);
}

uint8_t type_code(SymbolType type)
{
	switch (type)
	{
	case SymbolType::Object:
		return kSttObject;
	case SymbolType::Function:
		return kSttFunc;
	case SymbolType::Section:
		return kSttSection;
	case SymbolType::File:
		return kSttFile;
	case SymbolType::Tls:
		return kSttTls;
	default:
		return kSttNotype;
	}
}

struct WordHash
{
	size_t operator()(uint64_t key) const { return static_cast<size_t>(key); }
};

// One encoding: the section order is null, the groups, the object's
// sections, their RELA tables, .symtab, .strtab, .symtab_shndx (extended
// numbering only), .shstrtab and .note.GNU-stack.
class Encoder
{
public:
	explicit Encoder(const ObjectFile& object) : object_(object), names_(1, '\0') {}

	void encode(std::vector<uint8_t>& out);

private:
	void number();
	void add_groups();
	void add_contents();
	void add_relocations();
	void add_symbols();
	void write(std::vector<uint8_t>& out);
	uint32_t name(const char* prefix, const char* text);
	uint32_t section_name(bool rela, uint32_t name);

	const ObjectFile& object_;
	std::vector<OutputSection> sections_;
	std::vector<char> names_;
	std::vector<uint32_t> content_index_;
	std::vector<uint32_t> rela_index_;
	std::vector<uint32_t> symbol_index_;
	// (RELA table?, object string offset) -> .shstrtab offset.
	FlatMap<uint64_t, uint32_t, WordHash> section_names_;
	uint32_t group_name_ = 0;
	uint32_t symbol_count_ = 1;
	uint32_t first_global_ = 1;
	uint32_t symtab_ = 0;
	uint32_t strtab_ = 0;
	uint32_t shstrtab_ = 0;
	bool extended_ = false;
	bool has_stack_note_ = false;
};

uint32_t Encoder::section_name(bool rela, uint32_t name)
{
	// Sections sharing a name share its .shstrtab entry.
	const uint64_t key = (static_cast<uint64_t>(rela) << 32) | name;
	if (const uint32_t* known = section_names_.find(key))
		return *known;
	const uint32_t offset = this->name(rela ? ".rela" : "", object_.string(name));
	section_names_.insert(key, offset);
	return offset;
}

uint32_t Encoder::name(const char* prefix, const char* text)
{
	const uint32_t offset = static_cast<uint32_t>(names_.size());
	names_.insert(names_.end(), prefix, prefix + std::strlen(prefix));
	names_.insert(names_.end(), text, text + std::strlen(text));
	names_.push_back('\0');
	return offset;
}

void Encoder::number()
{
	content_index_.assign(object_.sections.size(), 0);
	rela_index_.assign(object_.sections.size(), 0);
	uint32_t next = 1 + static_cast<uint32_t>(object_.groups.size());
	for (size_t s = 1; s < object_.sections.size(); ++s)
		content_index_[s] = next++;
	for (size_t s = 1; s < object_.sections.size(); ++s)
	{
		if (!object_.sections[s].relocations.empty())
			rela_index_[s] = next++;
	}
	// Symbols naming sections from SHN_LORESERVE on keep their indexes in
	// SHT_SYMTAB_SHNDX (the extended numbering).
	extended_ = next > kShnLoreserve;
	symtab_ = next++;
	strtab_ = next++;
	if (extended_)
		++next;
	shstrtab_ = next;
	// Symbols: the null symbol, the locals, then the others (sh_info).
	symbol_index_.assign(object_.symbols.size(), 0);
	for (size_t i = 1; i < object_.symbols.size(); ++i)
	{
		if (object_.symbols[i].binding == Binding::Local)
			symbol_index_[i] = symbol_count_++;
	}
	first_global_ = symbol_count_;
	for (size_t i = 1; i < object_.symbols.size(); ++i)
	{
		if (object_.symbols[i].binding != Binding::Local)
			symbol_index_[i] = symbol_count_++;
	}
}

void Encoder::add_groups()
{
	for (const Group& group : object_.groups)
	{
		OutputSection section = OutputSection();
		if (group_name_ == 0)
			group_name_ = name(".group", "");
		section.name = group_name_;
		section.type = kShtGroup;
		section.link = symtab_;
		section.info = symbol_index_[group.signature];
		section.align = 4;
		section.entry_size = 4;
		put32(section.built, kGrpComdat);
		// A member's relocation table belongs to the group too.
		for (const uint32_t member : group.sections)
		{
			put32(section.built, content_index_[member]);
			if (rela_index_[member] != 0)
				put32(section.built, rela_index_[member]);
		}
		sections_.push_back(std::move(section));
	}
}

void Encoder::add_contents()
{
	for (size_t s = 1; s < object_.sections.size(); ++s)
	{
		const Section& from = object_.sections[s];
		OutputSection section = OutputSection();
		section.name = section_name(false, from.name);
		if (from.kind == SectionKind::Metadata && std::strcmp(object_.string(from.name), ".note.GNU-stack") == 0)
			has_stack_note_ = true;
		section.type = section_type(from.kind);
		section.flags = section_flags(from.kind) | (from.group != kNoGroup ? kShfGroup : 0);
		const bool nobits = from.kind == SectionKind::Bss || from.kind == SectionKind::TlsBss;
		section.size = nobits ? from.size : from.bytes.size();
		section.align = from.align;
		section.entry_size = from.kind == SectionKind::InitArray || from.kind == SectionKind::FiniArray ? 8 : 0;
		if (from.kind == SectionKind::MetadataStrings)
			section.entry_size = 1;
		section.bytes = nobits ? nullptr : &from.bytes;
		sections_.push_back(std::move(section));
	}
}

void Encoder::add_relocations()
{
	for (size_t s = 1; s < object_.sections.size(); ++s)
	{
		const Section& from = object_.sections[s];
		if (from.relocations.empty())
			continue;
		OutputSection section = OutputSection();
		section.name = section_name(true, from.name);
		section.type = kShtRela;
		section.flags = kShfInfoLink | (from.group != kNoGroup ? kShfGroup : 0);
		section.link = symtab_;
		section.info = content_index_[s];
		section.align = 8;
		section.entry_size = 24;
		section.built.reserve(from.relocations.size() * 24);
		for (const Relocation& relocation : from.relocations)
		{
			put64(section.built, relocation.offset);
			put64(section.built, (static_cast<uint64_t>(symbol_index_[relocation.symbol]) << 32) | relocation.type);
			put64(section.built, static_cast<uint64_t>(relocation.addend));
		}
		sections_.push_back(std::move(section));
	}
}

void Encoder::add_symbols()
{
	OutputSection table = OutputSection();
	table.name = name(".symtab", "");
	table.type = kShtSymtab;
	table.link = strtab_;
	table.info = first_global_;
	table.align = 8;
	table.entry_size = 24;
	OutputSection indexes = OutputSection();
	std::vector<uint32_t> order(symbol_count_, 0);
	for (size_t i = 1; i < object_.symbols.size(); ++i)
		order[symbol_index_[i]] = static_cast<uint32_t>(i);
	table.built.reserve(24 * symbol_count_);
	table.built.resize(24, 0);
	if (extended_)
		put32(indexes.built, 0);
	for (uint32_t k = 1; k < symbol_count_; ++k)
	{
		const Symbol& symbol = object_.symbols[order[k]];
		uint32_t index = symbol.section;
		bool escaped = false;
		if (index == kAbsoluteSection || index == kCommonSection)
			index = index == kAbsoluteSection ? kShnAbs : kShnCommon;
		else if (index != kUndefinedSection)
		{
			index = content_index_[index];
			escaped = index >= kShnLoreserve;
		}
		put32(table.built, symbol.name);
		table.built.push_back(static_cast<uint8_t>((binding_code(symbol.binding) << 4) | type_code(symbol.type)));
		table.built.push_back(static_cast<uint8_t>(symbol.visibility));
		put16(table.built, escaped ? kShnXindex : index);
		put64(table.built, symbol.value);
		put64(table.built, symbol.size);
		if (extended_)
			put32(indexes.built, escaped ? index : 0);
	}
	sections_.push_back(std::move(table));
	OutputSection strings = OutputSection();
	strings.name = name(".strtab", "");
	strings.type = kShtStrtab;
	strings.align = 1;
	strings.built.assign(object_.strings.begin(), object_.strings.end());
	sections_.push_back(std::move(strings));
	if (extended_)
	{
		indexes.name = name(".symtab_shndx", "");
		indexes.type = kShtSymtabShndx;
		indexes.link = symtab_;
		indexes.align = 4;
		indexes.entry_size = 4;
		sections_.push_back(std::move(indexes));
	}
}

void Encoder::encode(std::vector<uint8_t>& out)
{
	number();
	sections_.push_back(OutputSection());
	add_groups();
	add_contents();
	add_relocations();
	add_symbols();
	OutputSection shstrtab = OutputSection();
	shstrtab.name = name(".shstrtab", "");
	shstrtab.type = kShtStrtab;
	shstrtab.align = 1;
	OutputSection stack = OutputSection();
	if (!has_stack_note_)
		stack.name = name(".note.GNU-stack", "");
	stack.type = kShtProgbits;
	stack.align = 1;
	shstrtab.built.assign(names_.begin(), names_.end());
	sections_.push_back(std::move(shstrtab));
	if (!has_stack_note_)
		sections_.push_back(std::move(stack));
	write(out);
}

void Encoder::write(std::vector<uint8_t>& out)
{
	// The header, each section's contents, then the section header table.
	uint64_t position = kElfHeaderBytes;
	for (size_t s = 1; s < sections_.size(); ++s)
	{
		OutputSection& section = sections_[s];
		if (section.bytes == nullptr && section.type != kShtNobits)
			section.size = section.built.size();
		const uint64_t align = section.align == 0 ? 1 : section.align;
		position = (position + align - 1) & ~(align - 1);
		section.offset = position;
		if (section.type != kShtNobits)
			position += section.size;
	}
	const uint64_t header_table = (position + 7) & ~static_cast<uint64_t>(7);
	const uint32_t count = static_cast<uint32_t>(sections_.size());
	if (count >= kShnLoreserve)
		sections_[0].size = count;
	if (shstrtab_ >= kShnLoreserve)
		sections_[0].link = shstrtab_;
	out.clear();
	out.reserve(header_table + kSectionHeaderBytes * count);
	put_elf_ident(out);
	put16(out, kEtRel);
	put16(out, object_.architecture == target_model::Architecture::AArch64 ? kEmAArch64 : kEmX86_64);
	put32(out, 1);
	put64(out, 0);
	put64(out, 0);
	put64(out, header_table);
	put32(out, 0);
	put16(out, kElfHeaderBytes);
	put16(out, 0);
	put16(out, 0);
	put16(out, kSectionHeaderBytes);
	put16(out, count >= kShnLoreserve ? 0 : count);
	put16(out, shstrtab_ >= kShnLoreserve ? kShnXindex : shstrtab_);
	for (size_t s = 1; s < sections_.size(); ++s)
	{
		const OutputSection& section = sections_[s];
		if (section.type == kShtNobits)
			continue;
		out.resize(section.offset, 0);
		const std::vector<uint8_t>& bytes = section.bytes != nullptr ? *section.bytes : section.built;
		out.insert(out.end(), bytes.begin(), bytes.end());
	}
	out.resize(header_table, 0);
	for (const OutputSection& section : sections_)
	{
		put32(out, section.name);
		put32(out, section.type);
		put64(out, section.flags);
		put64(out, 0);
		put64(out, section.offset);
		put64(out, section.size);
		put32(out, section.link);
		put32(out, section.info);
		put64(out, section.align);
		put64(out, section.entry_size);
	}
}

} // namespace

void encode_elf_object(const ObjectFile& object, std::vector<uint8_t>& out)
{
	Encoder encoder(object);
	encoder.encode(out);
}

bool write_elf_object(const ObjectFile& object, const std::string& path, std::string& error)
{
	std::vector<uint8_t> image;
	encode_elf_object(object, image);
	std::FILE* file = std::fopen(path.c_str(), "wb");
	if (file == nullptr)
	{
		error = "cannot write " + path;
		return false;
	}
	const bool written = std::fwrite(image.data(), 1, image.size(), file) == image.size();
	const bool closed = std::fclose(file) == 0;
	if (!written || !closed)
	{
		error = "cannot write " + path;
		return false;
	}
	return true;
}

namespace {

void assembly_quote(std::ostream& out, const char* first, size_t count)
{
	out << '"';
	for (size_t i = 0; i < count; ++i)
	{
		const unsigned char byte = static_cast<unsigned char>(first[i]);
		if (byte == '"' || byte == '\\')
			out << '\\' << char(byte);
		else if (byte >= 32 && byte < 127)
			out << char(byte);
		else
			out << '\\' << char('0' + (byte >> 6)) << char('0' + ((byte >> 3) & 7)) << char('0' + (byte & 7));
	}
	out << '"';
}

void assembly_quote(std::ostream& out, const std::string& text)
{
	assembly_quote(out, text.data(), text.size());
}

const char* assembly_relocation(uint32_t type)
{
#define RELOCATION(name) \
	case name: \
		return #name
	switch (type)
	{
		RELOCATION(R_X86_64_NONE);
		RELOCATION(R_X86_64_64);
		RELOCATION(R_X86_64_PC32);
		RELOCATION(R_X86_64_PLT32);
		RELOCATION(R_X86_64_GOTPCREL);
		RELOCATION(R_X86_64_32);
		RELOCATION(R_X86_64_32S);
		RELOCATION(R_X86_64_16);
		RELOCATION(R_X86_64_PC16);
		RELOCATION(R_X86_64_8);
		RELOCATION(R_X86_64_PC8);
		RELOCATION(R_X86_64_GOTTPOFF);
		RELOCATION(R_X86_64_TPOFF32);
		RELOCATION(R_X86_64_PC64);
		RELOCATION(R_X86_64_GOTOFF64);
		RELOCATION(R_X86_64_GOTPC32);
		RELOCATION(R_X86_64_GOTPC64);
		RELOCATION(R_X86_64_GOTPCRELX);
		RELOCATION(R_X86_64_REX_GOTPCRELX);
	default:
		return nullptr;
	}
#undef RELOCATION
}

class AssemblyWriter
{
public:
	AssemblyWriter(const ObjectFile& object, std::ostream& out);
	bool write(std::string& error);

private:
	void symbol(uint32_t index);
	void select_section(uint32_t index);
	void bytes(const Section& section, uint64_t first, uint64_t last);
	void contents(uint32_t index);
	bool relocations(uint32_t index, std::string& error);

	const ObjectFile& object_;
	std::ostream& out_;
	std::vector<std::string> symbols_, sections_;
	std::vector<std::vector<uint32_t>> definitions_;
	std::vector<std::vector<AssemblyString>> strings_;
};

AssemblyWriter::AssemblyWriter(const ObjectFile& object, std::ostream& out)
	: object_(object), out_(out), symbols_(object.symbols.size()), sections_(object.sections.size()),
	  definitions_(object.sections.size()), strings_(object.sections.size())
{
	std::unordered_set<std::string> used;
	for (uint32_t i = 1; i < object.symbols.size(); ++i)
	{
		symbols_[i] = object.symbol_name(i);
		used.insert(symbols_[i]);
		const uint32_t section = object.symbols[i].section;
		if (section < definitions_.size())
			definitions_[section].push_back(i);
	}
	size_t names = 0;
	auto local_name = [&]() {
		std::string name;
		do
			name = ".Lcppgm." + std::to_string(names++);
		while (!used.insert(name).second);
		return name;
	};
	for (size_t i = 1; i < sections_.size(); ++i)
	{
		sections_[i] = local_name();
		auto& symbols = definitions_[i];
		std::stable_sort(symbols.begin(), symbols.end(),
			[&](uint32_t a, uint32_t b) { return object.symbols[a].value < object.symbols[b].value; });
	}
	for (size_t i = 1; i < symbols_.size(); ++i)
		if (symbols_[i].empty())
			symbols_[i] = local_name();
	for (const AssemblyString& span : object.assembly_strings)
		strings_[span.section].push_back(span);
}

void AssemblyWriter::symbol(uint32_t index)
{
	const Symbol& symbol = object_.symbols[index];
	const std::string& name = symbols_[index];
	if (symbol.binding != Binding::Local)
	{
		out_ << (symbol.binding == Binding::Global ? "\t.globl " : "\t.weak ");
		assembly_quote(out_, name);
		out_ << '\n';
	}
	if (symbol.visibility != Visibility::Default)
	{
		const char* const visibility[] = { "", "\t.internal ", "\t.hidden ", "\t.protected " };
		out_ << visibility[static_cast<unsigned>(symbol.visibility)];
		assembly_quote(out_, name);
		out_ << '\n';
	}
	const char* type = symbol.type == SymbolType::Function ? "function"
		: symbol.type == SymbolType::Object                ? "object"
		: symbol.type == SymbolType::Tls                   ? "tls_object"
														   : nullptr;
	if (type != nullptr)
	{
		out_ << "\t.type ";
		assembly_quote(out_, name);
		out_ << ", @" << type << '\n';
	}
	if (symbol.section == kUndefinedSection)
		return;
	if (symbol.section == kCommonSection || symbol.section == kAbsoluteSection)
	{
		out_ << (symbol.section == kCommonSection ? "\t.comm " : "\t.set ");
		assembly_quote(out_, name);
		out_ << ", ";
		if (symbol.section == kCommonSection)
			out_ << symbol.size << ", ";
		out_ << symbol.value << '\n';
		return;
	}
	if (symbol.value > object_.sections[symbol.section].size)
	{
		// GNU .set may deliberately put an alias beyond its section.
		out_ << "\t.set ";
		assembly_quote(out_, name);
		out_ << ", " << sections_[symbol.section] << '+' << symbol.value << '\n';
	}
	else
	{
		assembly_quote(out_, name);
		out_ << ":\n";
	}
	if (symbol.size != 0)
	{
		out_ << "\t.size ";
		assembly_quote(out_, name);
		out_ << ", " << symbol.size << '\n';
	}
}

void AssemblyWriter::select_section(uint32_t index)
{
	const Section& section = object_.sections[index];
	const uint64_t flags = section_flags(section.kind);
	out_ << "\t.section ";
	assembly_quote(out_, object_.string(section.name));
	out_ << ",\"";
	const char attributes[] = { 'a', 'w', 'x', 'M', 'S', 'T' };
	const uint64_t bits[] = { kShfAlloc, kShfWrite, kShfExecinstr, kShfMerge, kShfStrings, kShfTls };
	for (size_t i = 0; i < sizeof attributes; ++i)
		if (flags & bits[i])
			out_ << attributes[i];
	if (section.group != kNoGroup)
		out_ << 'G';
	const uint32_t type = section_type(section.kind);
	out_ << "\",@"
		 << (type == kShtNobits             ? "nobits"
					: type == kShtInitArray ? "init_array"
					: type == kShtFiniArray ? "fini_array"
											: "progbits");
	if (flags & kShfMerge)
		out_ << ",1";
	if (section.group != kNoGroup)
	{
		out_ << ',';
		assembly_quote(out_, symbols_[object_.groups[section.group].signature]);
		out_ << ",comdat";
	}
	out_ << ",unique," << index << '\n';
	if (section.align > 1)
		out_ << "\t.balign " << section.align << '\n';
	out_ << sections_[index] << ":\n";
}

void AssemblyWriter::bytes(const Section& section, uint64_t first, uint64_t last)
{
	if (first == last)
		return;
	if (section.kind == SectionKind::Bss || section.kind == SectionKind::TlsBss)
	{
		out_ << "\t.zero " << last - first << '\n';
		return;
	}
	while (first < last)
	{
		out_ << "\t.byte " << unsigned(section.bytes[first++]);
		for (unsigned i = 1; i < 16 && first < last; ++i)
			out_ << ',' << unsigned(section.bytes[first++]);
		out_ << '\n';
	}
}

void AssemblyWriter::contents(uint32_t index)
{
	const Section& section = object_.sections[index];
	const auto& definitions = definitions_[index];
	const auto& strings = strings_[index];
	size_t d = 0, s = 0;
	uint64_t at = 0;
	while (d < definitions.size() || s < strings.size())
	{
		const uint64_t definition = d < definitions.size() ? object_.symbols[definitions[d]].value : UINT64_MAX;
		const uint64_t string = s < strings.size() ? std::max(at, strings[s].offset) : UINT64_MAX;
		if (definition <= string)
		{
			const uint64_t next = std::min(definition, section.size);
			bytes(section, at, next);
			at = next;
			symbol(definitions[d++]);
		}
		else
		{
			bytes(section, at, string);
			const uint64_t end = strings[s].offset + strings[s].size;
			at = std::min(definition, end);
			s += at == end;
			out_ << "\t.ascii ";
			assembly_quote(out_, reinterpret_cast<const char*>(section.bytes.data() + string), at - string);
			out_ << '\n';
		}
	}
	bytes(section, at, section.size);
}

bool AssemblyWriter::relocations(uint32_t index, std::string& error)
{
	for (const Relocation& relocation : object_.sections[index].relocations)
	{
		const char* name = assembly_relocation(relocation.type);
		if (name == nullptr)
		{
			error = "relocation has no x86 assembly spelling";
			return false;
		}
		out_ << "\t.reloc " << sections_[index] << '+' << relocation.offset << ", " << name;
		if (relocation.symbol != 0)
		{
			out_ << ", ";
			assembly_quote(out_, symbols_[relocation.symbol]);
			if (relocation.addend >= 0)
				out_ << '+';
			out_ << relocation.addend;
		}
		out_ << '\n';
	}
	return true;
}

bool AssemblyWriter::write(std::string& error)
{
	for (uint32_t i = 1; i < object_.symbols.size(); ++i)
		if (object_.symbols[i].section == kUndefinedSection || object_.symbols[i].section >= kAbsoluteSection)
			symbol(i);
	for (uint32_t i = 1; i < object_.sections.size(); ++i)
	{
		select_section(i);
		contents(i);
		if (!relocations(i, error))
			return false;
	}
	out_ << "\t.section .note.GNU-stack,\"\",@progbits\n";
	return true;
}

} // namespace

bool write_elf_assembly(const ObjectFile& object, const std::string& path, std::string& error)
{
	if (path == "-")
	{
		AssemblyWriter writer(object, std::cout);
		if (!writer.write(error))
			return false;
		std::cout.flush();
		if (std::cout)
			return true;
	}
	else
	{
		std::ofstream stream(path);
		if (stream)
		{
			AssemblyWriter writer(object, stream);
			if (!writer.write(error))
				return false;
			stream.close();
			if (stream)
				return true;
		}
	}
	error = "cannot write " + path;
	return false;
}

} // namespace object
} // namespace native
