#include "aarch64/selector.h"
#include <algorithm>
#include "opt/loops.h"
#include "machine/frame_lifetimes.h"

namespace aarch64 {
using lowir::kNoId;

// Up to 32 bytes fit in two registers. Load both ends before either store,
// including when the two accesses overlap. Neither access crosses the object.
void Selector::copy_piece(unsigned dst, unsigned src, unsigned offset, unsigned bytes)
{
	if (!bytes)
		return;
	if (!general_regs_only_ && level_ && bytes == 32 && offset % 16 == 0)
	{
		const auto pair = (offset / 16) << 15;
		if (src != 31)
			out_.emit(Op::LdpQ, 16, src, 0, pair | (17u << 10));
		out_.emit(Op::StpQ, 16, dst, 0, pair | ((src == 31 ? 16u : 17u) << 10));
		return;
	}
	const unsigned index = std::min(general_regs_only_ ? 3 : 4, 31 - __builtin_clz(bytes));
	const unsigned step = 1u << index;
	const Op loads[] = { Op::LdurB, Op::LdurH, Op::LdurW, Op::LdurX, Op::LdurQ };
	const Op stores[] = { Op::SturB, Op::SturH, Op::SturW, Op::SturX, Op::SturQ };
	const unsigned first = index == 4 ? 16 : 9, second = index == 4 ? 17 : 15;
	const unsigned end = offset + bytes - step;
	if (src != 31)
	{
		out_.emit(loads[index], first, src, 0, offset << 12);
		if (end != offset)
			out_.emit(loads[index], second, src, 0, end << 12);
	}
	const unsigned zero = index == 4 ? 16 : 31;
	out_.emit(stores[index], src == 31 ? zero : first, dst, 0, offset << 12);
	if (end != offset)
		out_.emit(stores[index], src == 31 ? zero : second, dst, 0, end << 12);
}

void Selector::copy_integer_run(unsigned dst, unsigned src, uint64_t bytes, bool backward)
{
	const unsigned tail = bytes % 8;
	if (bytes <= 64)
	{
		const unsigned words = static_cast<unsigned>(bytes / 8);
		for (unsigned i = 0; i < words; ++i)
			copy_piece(dst, src, (backward ? words - 1 - i : i) * 8 + (backward ? tail : 0), 8);
		copy_piece(dst, src, backward ? 0 : words * 8, tail);
		return;
	}
	if (backward)
	{
		constant(9, bytes);
		out_.emit(Op::Add, 16, dst, 9);
		out_.emit(Op::Add, 17, src, 9);
	}
	else
	{
		move(16, dst);
		if (src != 31)
			move(17, src);
	}
	constant(9, bytes / 8);
	const uint32_t loop = out_.labels.size();
	out_.labels.push_back(kNoId);
	out_.bind(loop);
	const auto advance = [&]() {
		out_.emit(backward ? Op::SubI : Op::AddI, 16, 16, 0, 8 << 10);
		if (src != 31)
			out_.emit(backward ? Op::SubI : Op::AddI, 17, 17, 0, 8 << 10);
	};
	if (backward)
		advance();
	if (src != 31)
		access(false, 15, 17, 0, 8);
	access(true, src == 31 ? 31 : 15, 16, 0, 8);
	if (!backward)
		advance();
	out_.emit(Op::SubI, 9, 9, 0, 1 << 10);
	out_.reference(Op::Cbnz, Fixup::Block, loop, 9);
	copy_piece(backward ? dst : 16, backward || src == 31 ? src : 17, 0, tail);
}

void Selector::copy_run(unsigned dst, unsigned src, uint64_t bytes, bool backward)
{
	if (general_regs_only_)
		return copy_integer_run(dst, src, bytes, backward);
	const unsigned tail = bytes % 32;
	if (bytes <= 128)
	{
		const unsigned count = bytes / 32;
		if (backward)
			copy_piece(dst, src, 32 * count, tail);
		for (unsigned i = 0; i < count; ++i)
			copy_piece(dst, src, 32 * (backward ? count - 1 - i : i), 32);
		if (!backward)
			copy_piece(dst, src, 32 * count, tail);
		return;
	}
	if (backward)
	{
		constant(9, bytes);
		out_.emit(Op::Add, 16, dst, 9);
		out_.emit(Op::Add, 17, src, 9);
	}
	else
	{
		move(16, dst);
		if (src != 31)
			move(17, src);
	}
	constant(9, bytes / 32);
	const uint32_t loop = out_.labels.size();
	out_.labels.push_back(kNoId);
	out_.bind(loop);
	const unsigned step = (backward ? 126u : 2u) << 15;
	if (src != 31)
		out_.emit(backward ? Op::LdpQPre : Op::LdpQPost, 16, 17, 0, step | (17u << 10));
	out_.emit(backward ? Op::StpQPre : Op::StpQPost, 16, 16, 0, step | ((src == 31 ? 16u : 17u) << 10));
	out_.emit(Op::SubI, 9, 9, 0, 1 << 10);
	out_.reference(Op::Cbnz, Fixup::Block, loop, 9);
	copy_piece(backward ? dst : 16, backward || src == 31 ? src : 17, 0, tail);
}

// With 33 to 64 bytes, keep the first 32 in q16/q17 and the rest in the
// four reserved integer scratch registers. Both pointers are allocated
// registers or x10/x11. The last word may overlap the preceding transfer.
void Selector::copy_staged(unsigned dst, unsigned src, unsigned bytes)
{
	const unsigned scratch[] = { 9, 15, 16, 17 };
	const unsigned words = (bytes - 32 + 7) / 8;
	for (bool store : { false, true })
	{
		const unsigned base = store ? dst : src;
		out_.emit(store ? Op::StpQ : Op::LdpQ, 16, base, 0, 17u << 10);
		for (unsigned i = 0; i < words; ++i)
		{
			const unsigned offset = std::min(32u + 8 * i, bytes - 8);
			if (i + 1 < words && offset + 16 <= bytes)
			{
				out_.emit(
					store ? Op::StpX : Op::LdpX, scratch[i], base, 0, ((offset / 8) << 15) | (scratch[i + 1] << 10));
				++i;
			}
			else
				out_.emit(store ? Op::SturX : Op::LdurX, scratch[i], base, 0, offset << 12);
		}
	}
}

void Selector::copy_bytes(unsigned dst, unsigned src, uint64_t size)
{
	if (!size || dst == src)
		return;
	if (level_ && src == 31 && (size == 16 || size == 24 || size == 32))
	{
		out_.emit(Op::StpX, 31, dst, 0, 31u << 10);
		if (size == 24)
			out_.emit(Op::StrX, 31, dst, 0, 2u << 10);
		else if (size == 32)
			out_.emit(Op::StpX, 31, dst, 0, (2u << 15) | (31u << 10));
		return;
	}
	if (!general_regs_only_ && src == 31 && size >= 16)
		out_.emit(Op::VEor, 16, 16, 16);
	if (size <= (general_regs_only_ ? 16 : 32))
	{
		copy_piece(dst, src, 0, size);
		return;
	}
	if (src == 31)
	{
		copy_run(dst, src, size, false);
		return;
	}
	if (!general_regs_only_ && level_ && size <= 64)
	{
		copy_staged(dst, src, static_cast<unsigned>(size));
		return;
	}
	const uint32_t forward = out_.labels.size(), done = forward + 1;
	out_.labels.resize(done + 1, kNoId);
	out_.emit(Op::Subs, 31, dst, src);
	out_.reference(Op::BCond, Fixup::Block, forward, 9); // destination <= source
	copy_run(dst, src, size, true);
	out_.reference(Op::B, Fixup::Block, done);
	out_.bind(forward);
	copy_run(dst, src, size, false);
	out_.bind(done);
}
// A leaf with unused caller-saved registers can keep a private two-word
// record there, including the copies at its incoming and outgoing ABI
// boundaries. A pointer use other than one of the modeled accesses pins it.
void Selector::register_objects()
{
	using namespace lowir;
	if (level_ < 2 || !calls_.empty() || out_.exceptions || dynamic_stack_ || named_.darwin || body_.slots.empty() ||
		body_.slots.size() > 32 || !body_.code_labels.empty())
		return;
	uint32_t free = 0xfcu | (7u << 12);
	for (unsigned reg : registers_)
		if (reg < 32)
			free &= ~(1u << reg);
	const uint32_t unallocated = free;
	Arguments args(false);
	for (unsigned i = 0; i < body_.parameter_count; ++i)
	{
		const auto& p = program_.parameters_of(signature_)[i];
		if (p.pass == ir_model::PPM_INDIRECT_RESULT)
			continue;
		const auto arg = args.next(p.type, p.shape);
		if (arg.bank == Bank::General)
			free &= ~(((1u << arg.pieces) - 1) << arg.first);
	}
	if (!(unallocated & (unallocated >> 1)))
		return;
	uint32_t live = 0;
	for (unsigned i = 0; i < slots_.size(); ++i)
		if (body_.slots[i].type.is_object() && storage_bytes(body_.slots[i].type) == 16 && i != result_slot_ &&
			std::count(slots_.begin(), slots_.end(), slots_[i]) == 1)
			live |= 1u << i;
	if (!live)
		return;
	struct Use
	{
		InstId at;
		SlotId slot;
		unsigned word;
	};
	std::vector<Use> uses;
	std::vector<uint32_t> parameters(slots_.size(), kNoId), incoming_pairs(slots_.size(), kNoId);
	for (auto block : body_.layout)
		for (auto at = body_.blocks[block].first; at != kNoId && live; at = body_.instructions[at].next)
		{
			const auto& inst = body_.instructions[at];
			for (unsigned k = 0; k < 3 + inst.extra_count; ++k)
			{
				const auto v = k < 3 ? inst.ops[k] : body_.operands[inst.extra_first + k - 3];
				if (!v.is(ValueKind::Slot) && !v.is(ValueKind::Temp))
					continue;
				const auto a = opt::locate(body_, v);
				if (!a.root.is(ValueKind::Slot) || !(live & (1u << a.root.index)))
					continue;
				const auto slot = a.root.index;
				bool ok = false;
				if (inst.op == Opcode::Addr && !k && v.is(ValueKind::Slot))
					ok = true;
				if (inst.op == Opcode::Index && !k && inst.ops[1].is(ValueKind::Integer) &&
					(v.is(ValueKind::Slot) ||
						(v.is(ValueKind::Temp) && body_.temps[v.index].def != kNoId &&
							body_.instructions[body_.temps[v.index].def].op == Opcode::Addr)))
					ok = true;
				if (((inst.op == Opcode::Load && !k) || (inst.op == Opcode::Store && k == 1)) &&
					(inst.type.is_integer() || inst.type.is_pointer()) && storage_bytes(inst.type) == 8 &&
					!(inst.flags & IF_VOLATILE) && a.known && (a.offset == 0 || a.offset == 8))
					ok = true;
				if (ok)
				{
					uses.push_back({ at, slot, static_cast<unsigned>(a.offset == 8) });
					continue;
				}
				if (inst.op == Opcode::Return && !k && v.is(ValueKind::Slot) && result_.bank == Bank::General &&
					!result_.indirect && result_.pieces == 2)
					continue;
				if (inst.op == Opcode::CopyObject && k == 1 &&
					std::find(entry_elided_.begin(), entry_elided_.end(), at) != entry_elided_.end())
				{
					const auto id = inst.ops[0].index;
					const auto& param = program_.parameters_of(signature_)[id];
					Arguments incoming(false);
					Argument arg{};
					for (unsigned i = 0; i <= id; ++i)
					{
						const auto& p = program_.parameters_of(signature_)[i];
						if (p.pass != ir_model::PPM_INDIRECT_RESULT)
							arg = incoming.next(p.type, p.shape);
					}
					if (param.type == body_.slots[slot].type && arg.bank == Bank::General && arg.pieces == 2 &&
						!arg.indirect)
					{
						parameters[slot] = id;
						incoming_pairs[slot] = arg.first;
						continue;
					}
				}
				live &= ~(1u << slot);
			}
		}
	if (!live)
		return;
	object_words_.resize(slots_.size());
	for (; live; live &= live - 1)
	{
		const auto slot = __builtin_ctz(live);
		const unsigned preferred = incoming_pairs[slot];
		const uint32_t pairs = free & (free >> 1);
		const bool incoming = preferred < 7 && ((unallocated >> preferred) & 3) == 3;
		if (!incoming && !pairs)
			continue;
		const unsigned reg = incoming ? preferred : static_cast<unsigned>(__builtin_ctz(pairs));
		object_words_[slot] = reg;
		free &= ~(3u << reg);
		if (parameters[slot] != kNoId)
		{
			if (parameter_words_.empty())
				parameter_words_.resize(body_.parameter_count);
			parameter_words_[parameters[slot]] = reg;
		}
	}
	word_accesses_.resize(body_.instructions.size());
	for (auto use : uses)
		if (object_words_[use.slot])
			word_accesses_[use.at] = object_words_[use.slot] + use.word;
}

bool Selector::register_access(const lowir::Instruction& inst)
{
	using namespace lowir;
	const unsigned reg = word_accesses_[&inst - body_.instructions.data()];
	if (inst.op == Opcode::Load)
		save(reg, inst.result, true);
	else if (inst.op == Opcode::Store)
		move(reg, zero_or_register(inst.ops[0], inst.type, 10));
	return true;
}
} // namespace aarch64
