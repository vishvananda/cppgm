#include "native/asm/module_layout.h"

#include <algorithm>

#include "native/backend_error.h"
#include "native/x86/assembler.h"
#include "support/internal_error.h"

namespace native {
namespace {
constexpr uint64_t kModuleByteLimit = 64u * 1024u * 1024u;
}

class ModuleLayout::Evaluator : public assembly::ExpressionSymbols
{
public:
	Evaluator(ModuleLayout& layout, uint32_t section, uint64_t offset)
		: layout_(layout), section_(section), offset_(offset)
	{}
	assembly::ModuleValue expression_symbol(assembly::ModuleCursor&) override
	{
		throw InternalError("layout expressions have already been parsed");
	}
	void fold_difference(assembly::ModuleValue& value) const override
	{
		fold_absolute(value.positive, value.bits, false);
		fold_absolute(value.negative, value.bits, true);
		if (value.positive == asm_model::kNoId || value.negative == asm_model::kNoId)
			return;
		const auto plus = anchor(value.positive);
		const auto minus = anchor(value.negative);
		if (plus.first == minus.first && plus.first != object::kUndefinedSection &&
			plus.first < object::kAbsoluteSection)
		{
			value.bits += plus.second - minus.second + layout_.shift(plus.first, minus.second, plus.second);
			value.positive = value.negative = asm_model::kNoId;
		}
	}
	uint64_t origin(assembly::ModuleValue value)
	{
		const uint64_t from = offset_ + layout_.shift(section_, 0, offset_);
		if (value.positive != asm_model::kNoId && value.negative == asm_model::kNoId)
		{
			value.negative = 0;
			fold_difference(value);
			value.bits += from;
		}
		if (value.relocatable() || value.bits < from)
			throw BackendError("module origin must advance within its section");
		return value.bits - from;
	}

private:
	void fold_absolute(uint32_t& id, uint64_t& bits, bool subtract) const
	{
		if (id == 0 || id == asm_model::kNoId)
			return;
		const object::Symbol& symbol = layout_.out_.symbols[id];
		if (symbol.section == object::kAbsoluteSection)
		{
			bits += subtract ? uint64_t(0) - symbol.value : symbol.value;
			id = asm_model::kNoId;
		}
	}
	std::pair<uint32_t, uint64_t> anchor(uint32_t id) const
	{
		if (id == 0)
			return { section_, offset_ };
		const object::Symbol& symbol = layout_.out_.symbols[id];
		return { symbol.section, symbol.value };
	}

	ModuleLayout& layout_;
	uint32_t section_;
	uint64_t offset_;
};

size_t ModuleLayout::Section::boundary(uint64_t offset) const
{
	return std::lower_bound(fragments.begin(), fragments.end(), offset, [](const Fragment& fragment, uint64_t at) {
		return fragment.offset < at;
	}) - fragments.begin();
}
int64_t ModuleLayout::Section::subtotal(size_t count) const
{
	int64_t result = 0;
	for (; count != 0; count &= count - 1)
		result += deltas[count];
	return result;
}
void ModuleLayout::Section::complete(size_t index, uint64_t size)
{
	fragments[index].size = size;
	unresolved.erase(index);
	const int64_t delta = static_cast<int64_t>(size) - fragments[index].original_size;
	for (++index; index < deltas.size(); index += index & (size_t(0) - index))
		deltas[index] += delta;
}
bool ModuleLayout::crosses(uint32_t section, uint64_t from, uint64_t to) const
{
	const auto found = sections_.find(section);
	return !fixed_ && found != sections_.end() && found->second.boundary(from) != found->second.boundary(to);
}
void ModuleLayout::append(uint32_t section, Fragment fragment)
{
	sections_[section].fragments.push_back(std::move(fragment));
}
bool ModuleLayout::record_labels(uint32_t section, const Assembler& assembler)
{
	return assembler.record_label_references(sections_[section].labels);
}
int64_t ModuleLayout::shift(uint32_t section, uint64_t from, uint64_t to)
{
	const auto found = sections_.find(section);
	if (found == sections_.end() || from == to)
		return 0;
	Section& layout = found->second;
	const size_t first = layout.boundary(std::min(from, to));
	const size_t end = layout.boundary(std::max(from, to));
	// Resolve each outstanding fragment once, even when many expressions span
	// the same interval. Fixed-size prefix queries then use the running sums.
	for (auto item = layout.unresolved.lower_bound(first); item != layout.unresolved.end() && *item < end;
		item = layout.unresolved.lower_bound(first))
		resolve(section, layout, *item);
	const int64_t delta = layout.subtotal(end) - layout.subtotal(first);
	return from < to ? delta : -delta;
}
void ModuleLayout::resolve(uint32_t section, Section& layout, size_t index)
{
	Fragment& fragment = layout.fragments[index];
	if (fragment.visiting)
		throw BackendError("cyclic module section layout");
	if (++depth_ > 1024)
		throw BackendError("module section layout dependency depth exceeds limit");
	fragment.visiting = true;
	uint64_t size = 0;
	if (fragment.kind == Kind::Jump)
		size = fragment.short_jump ? 2 : fragment.original_size;
	else if (fragment.kind == Kind::Align)
	{
		const uint64_t at = fragment.offset + shift(section, 0, fragment.offset);
		const uint64_t padding = (uint64_t(0) - at) & (fragment.alignment - 1);
		size = padding <= fragment.maximum ? padding : 0;
	}
	else
	{
		Evaluator evaluator(*this, section, fragment.offset);
		const auto value = assembly::evaluate_module_expression(fragment.expression, evaluator);
		if (fragment.kind == Kind::Origin)
			size = evaluator.origin(value);
		else if (!value.relocatable())
			size = value.bits;
		else
			throw BackendError("module space requires an absolute expression");
	}
	if (size > kModuleByteLimit)
		throw BackendError("module section exceeds the byte limit");
	layout.complete(index, size);
	fragment.visiting = false;
	--depth_;
}

int64_t ModuleLayout::jump_displacement(
	uint32_t id, const Section& layout, const Fragment& fragment, uint64_t origin) const
{
	const object::Relocation& relocation = out_.sections[id].relocations[fragment.jump_relocation];
	const uint64_t target = out_.symbols[relocation.symbol].value;
	const uint64_t destination = target + layout.subtotal(layout.boundary(target));
	return static_cast<int64_t>(destination - (origin + fragment.size) + relocation.addend + 4);
}

bool ModuleLayout::widen_jumps(uint32_t id, Section& layout)
{
	bool changed = false;
	int64_t delta = 0;
	for (Fragment& fragment : layout.fragments)
	{
		if (fragment.short_jump && !fits_i8(jump_displacement(id, layout, fragment, fragment.offset + delta)))
		{
			fragment.short_jump = false;
			changed = true;
		}
		delta += static_cast<int64_t>(fragment.size) - fragment.original_size;
	}
	return changed;
}

void ModuleLayout::materialize(uint32_t id, const Section& layout)
{
	object::Section& section = out_.sections[id];
	const uint64_t size = section.size + layout.prefix.back();
	if (size > kModuleByteLimit)
		throw BackendError("module section exceeds the byte limit");
	std::vector<uint32_t> folded_jumps;
	if (!layout.fragments.empty() && section.kind != object::SectionKind::Bss)
	{
		std::vector<uint8_t> bytes;
		bytes.reserve(size);
		Assembler code(bytes);
		uint64_t first = 0;
		for (const Fragment& fragment : layout.fragments)
		{
			bytes.insert(bytes.end(), section.bytes.begin() + first, section.bytes.begin() + fragment.offset);
			if (fragment.kind == Kind::Jump)
			{
				const int64_t displacement = fragment.local_jump ? jump_displacement(id, layout, fragment, bytes.size())
																 : INT64_MAX;
				if (displacement >= INT32_MIN && displacement <= INT32_MAX)
				{
					code.byte(fragment.short_jump ? 0xeb : 0xe9);
					code.imm(displacement, fragment.size - 1);
					folded_jumps.push_back(fragment.jump_relocation);
				}
				else
					bytes.insert(bytes.end(), section.bytes.begin() + fragment.offset,
						section.bytes.begin() + fragment.offset + fragment.original_size);
			}
			else if (fragment.fill < 0)
				code.nops(static_cast<uint32_t>(fragment.size));
			else
				bytes.insert(bytes.end(), fragment.size, static_cast<uint8_t>(fragment.fill));
			first = fragment.offset + fragment.original_size;
		}
		bytes.insert(bytes.end(), section.bytes.begin() + first, section.bytes.end());
		section.bytes.swap(bytes);
	}
	section.size = size;
	if (!folded_jumps.empty())
	{
		size_t next = 0, removed = 0;
		for (uint32_t i = 0; i < section.relocations.size(); ++i)
		{
			if (removed < folded_jumps.size() && i == folded_jumps[removed])
				++removed;
			else
				section.relocations[next++] = section.relocations[i];
		}
		section.relocations.resize(next);
	}
	for (object::Relocation& relocation : section.relocations)
		relocation.offset = position(id, relocation.offset);
	for (const CodeLabelReference& ref : layout.labels)
	{
		const int64_t displacement = static_cast<int64_t>(position(id, ref.target) - position(id, ref.base));
		if (ref.size == 1 && !fits_i8(displacement))
			throw BackendError("short local branch is out of range after module layout");
		const uint64_t offset = position(id, ref.offset);
		for (unsigned i = 0; i < ref.size; ++i)
			section.bytes[offset + i] = static_cast<uint8_t>(static_cast<uint64_t>(displacement) >> (8 * i));
	}
}
void ModuleLayout::finish()
{
	if (sections_.empty())
		return;
	for (auto& entry : sections_)
		for (Fragment& fragment : entry.second.fragments)
			if (fragment.kind == Kind::Jump)
			{
				const object::Relocation& relocation = out_.sections[entry.first].relocations[fragment.jump_relocation];
				const object::Symbol& target = out_.symbols[relocation.symbol];
				fragment.local_jump = target.section == entry.first && target.binding == object::Binding::Local;
				fragment.short_jump = fragment.local_jump;
			}
	bool widened;
	do
	{
		for (auto& entry : sections_)
		{
			Section& layout = entry.second;
			layout.deltas.assign(layout.fragments.size() + 1, 0);
			for (size_t i = 0; i < layout.fragments.size(); ++i)
				layout.unresolved.emplace_hint(layout.unresolved.end(), i);
		}
		for (auto& entry : sections_)
			while (!entry.second.unresolved.empty())
				resolve(entry.first, entry.second, *entry.second.unresolved.begin());
		widened = false;
		for (auto& entry : sections_)
			widened |= widen_jumps(entry.first, entry.second);
	} while (widened);
	for (auto& entry : sections_)
	{
		Section& layout = entry.second;
		layout.prefix.reserve(layout.fragments.size() + 1);
		layout.prefix.push_back(0);
		for (const Fragment& fragment : layout.fragments)
			layout.prefix.push_back(
				layout.prefix.back() + static_cast<int64_t>(fragment.size) - fragment.original_size);
		materialize(entry.first, layout);
	}
	fixed_ = true;
	for (object::Symbol& symbol : out_.symbols)
		symbol.value = position(symbol.section, symbol.value);
	for (object::AssemblyString& span : out_.assembly_strings)
		span.offset = position(span.section, span.offset);
}
uint64_t ModuleLayout::position(uint32_t section, uint64_t old) const
{
	const auto found = sections_.find(section);
	return found == sections_.end() ? old : old + found->second.prefix[found->second.boundary(old)];
}

} // namespace native
