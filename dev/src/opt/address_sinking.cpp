#include <vector>

#include "lowir/builder.h"
#include "opt/loops.h"
#include "opt/passes.h"

namespace opt {

using namespace lowir;

namespace {

// The most places an address is formed again (blocks, and edges out of its
// own block).
const unsigned kSites = 3;
// The greatest byte distance an address expression's displacement takes.
const int64_t kDisplacement = int64_t(1) << 30;

// O2+, last: an address (an `index`) that its own block only reads memory
// through, and other blocks read, is formed again where those blocks read
// it. Its own block then needs it in no register: every access there takes
// the address expression itself (a hash table's probe reads the bucket's
// key through base + index * scale, and the bucket's address forms where
// the probe ends). The copies read the base and the offset, which reach
// every block the address did. No copy goes into a loop the address is
// formed outside of.
class AddressSinking
{
public:
	explicit AddressSinking(FunctionContext& context) : c_(context), body_(context.body), cfg_(context.cfg) {}
	bool run();

private:
	struct Site
	{
		BlockId block; // where the copy goes; for an edge, the block the edge enters
		bool edge;     // on the edge from the address's block
		TempId copy;
	};
	struct Info
	{
		TempId temp = kNoId;
		uint32_t reads = 0; // loads and stores through it in its own block, and fields' addresses
		bool held = false;  // some use needs it where it is (or no copy can serve one)
		unsigned count = 0;
		Site sites[kSites];
	};

	bool candidate(const Instruction& inst) const;
	// The address `v` is (or names, as a copy of one in the address's own
	// block), or kNoId.
	TempId root(Value v) const
	{
		if (!v.is(ValueKind::Temp) || v.index >= info_of_.size())
			return kNoId;
		const TempId t = alias_[v.index] != kNoId ? alias_[v.index] : v.index;
		return info_of_[t] != kNoId ? t : kNoId;
	}
	Info& info(TempId address) { return infos_[info_of_[address]]; }
	BlockId home(TempId address) const { return block_of_[body_.temps[address].def]; }
	bool placeable(BlockId at, BlockId home) const;
	void outside(Info& info, BlockId at, bool edge, BlockId home);
	void note(TempId address, const Instruction& user, unsigned slot, BlockId at);
	Value copy_for(TempId address, BlockId at, bool edge);
	bool chosen(const Info& info) const { return !info.held && info.reads != 0 && info.count != 0; }
	InstId make_copy(TempId address, BlockId at, bool edge);

	FunctionContext& c_;
	FunctionBody& body_;
	Cfg& cfg_;
	LoopForest forest_;
	std::vector<BlockId> block_of_;
	std::vector<uint32_t> info_of_; // per temp: its entry of infos_, or kNoId
	std::vector<TempId> alias_;     // per temp: the address it copies in that one's block, or kNoId
	std::vector<Info> infos_;
	std::vector<InstId> tail_; // per block: the last copy placed at its top
};

// An index whose address a memory operand can hold: a literal offset in
// reach, or a register offset at a scale of 1, 2, 4 or 8 on a base that is a
// value.
bool AddressSinking::candidate(const Instruction& inst) const
{
	if (inst.op != Opcode::Index || inst.result == kNoId)
		return false;
	const int64_t size = static_cast<int64_t>(storage_bytes(inst.type));
	const Value base = inst.ops[0], offset = inst.ops[1];
	if (offset.is(ValueKind::Integer))
	{
		const Literal k = body_.literals[offset.index];
		const int64_t count = static_cast<int64_t>(k.low);
		return (base.is(ValueKind::Temp) || base.is(ValueKind::Slot)) && size != 0 && count < kDisplacement / size &&
			count > -kDisplacement / size;
	}
	return base.is(ValueKind::Temp) && offset.is(ValueKind::Temp) && (size == 1 || size == 2 || size == 4 || size == 8);
}

// Whether a copy may go at the top of `at` (or on an edge into it): not in
// a handler, nor in a loop that does not hold `home`.
bool AddressSinking::placeable(BlockId at, BlockId home) const
{
	if (!cfg_.reachable(at) || (cfg_.flags[at] & BF_HANDLER) != 0 || forest_.dropped[at] != 0)
		return false;
	const uint32_t loop = forest_.innermost[at];
	return loop == kNoId || in_loop(forest_, loop, home);
}

// A use outside the address's block: served by a site that dominates it,
// or a new site (which serves the sites it dominates).
void AddressSinking::outside(Info& info, BlockId at, bool edge, BlockId home)
{
	if (info.held || !placeable(at, home))
	{
		info.held = true;
		return;
	}
	unsigned kept = 0;
	for (unsigned k = 0; k < info.count; ++k)
	{
		const Site& site = info.sites[k];
		if (edge ? site.edge && site.block == at : !site.edge && cfg_.dominates(site.block, at))
			return;
		if (edge || site.edge || !cfg_.dominates(at, site.block))
			info.sites[kept++] = site;
	}
	if (kept == kSites)
	{
		info.held = true;
		return;
	}
	info.sites[kept] = Site{ at, edge, kNoId };
	info.count = kept + 1;
}

// One read of `address` by operand `slot` of `user` in block `at` (for a
// phi, the predecessor the value comes from).
void AddressSinking::note(TempId address, const Instruction& user, unsigned slot, BlockId at)
{
	Info& info = this->info(address);
	const BlockId home = this->home(address);
	if (user.op == Opcode::Phi)
	{
		if (at != home)
		{
			outside(info, at, false, home);
			return;
		}
		// Read at the end of its own block: on the edge, when the block
		// branches two ways and the edge is not a loop's back edge (whose
		// copy would run as often as the block).
		const Instruction& term = body_.instructions[body_.blocks[home].last];
		const BlockId to = block_of_[static_cast<InstId>(&user - body_.instructions.data())];
		if (term.op != Opcode::Branch || term.ops[1].index == term.ops[2].index || cfg_.dominates(to, home))
			info.held = true;
		else
			outside(info, to, true, home);
		return;
	}
	if (at != home)
	{
		outside(info, at, false, home);
		return;
	}
	if ((user.op == Opcode::Load && slot == 0) || (user.op == Opcode::Store && slot == 1))
	{
		if ((user.flags & IF_VOLATILE) == 0 && !user.type.is_object())
			++info.reads;
		else
			info.held = true;
		return;
	}
	// A copy of it there is the address by another name: its readers count.
	if (user.op == Opcode::Copy && slot == 0 && user.result != kNoId && alias_[user.result] == address)
		return;
	// A field's address composes with it (and forms from its parts).
	if (user.op == Opcode::Index && slot == 0 && user.ops[1].is(ValueKind::Integer) && candidate(user))
	{
		// A64 loads accept a register index or a field displacement. An
		// array element's address is already needed to read its field.
		const auto& base = body_.instructions[body_.temps[address].def];
		if (target_model::is_aarch64(c_.program.target) && !base.ops[1].is(ValueKind::Integer) &&
			body_.literals[user.ops[1].index].low != 0)
			info.held = true;
		else
			++info.reads;
	}
	else
		info.held = true;
}

// A copy of `address` for a site (not yet in a block). Its base, when that
// is a chosen address of the same block, is that one's copy for the site,
// placed first.
InstId AddressSinking::make_copy(TempId address, BlockId at, bool edge)
{
	Instruction copy = body_.instructions[body_.temps[address].def];
	copy.next = kNoId;
	const TempId base = root(copy.ops[0]);
	if (base != kNoId && chosen(info(base)) && home(base) == home(address))
		copy.ops[0] = copy_for(base, at, edge);
	const InstId id = append_instruction(body_, copy);
	body_.instructions[id].result = append_temp(body_, body_.temps[address].type, id);
	return id;
}

// The copy of `address` that serves a use in `at` (on the edge into `at`).
Value AddressSinking::copy_for(TempId address, BlockId at, bool edge)
{
	for (unsigned k = 0; k < info(address).count; ++k)
	{
		const Site site = info(address).sites[k];
		if (edge ? !(site.edge && site.block == at) : site.edge || !cfg_.dominates(site.block, at))
			continue;
		if (site.copy != kNoId || edge)
			return site.copy == kNoId ? Value::temp(address) : Value::temp(site.copy);
		// At the block's top, after its phis and the copies before it (its
		// base's among them).
		const InstId id = make_copy(address, site.block, false);
		InstId after = tail_[site.block];
		if (after == kNoId)
			for (InstId i = body_.blocks[site.block].first; i != kNoId && body_.instructions[i].op == Opcode::Phi;
				i = body_.instructions[i].next)
				after = i;
		insert_after(body_, site.block, after, id);
		tail_[site.block] = id;
		info(address).sites[k].copy = body_.instructions[id].result;
		return Value::temp(body_.instructions[id].result);
	}
	return Value::temp(address);
}

bool AddressSinking::run()
{
	if (body_.layout.size() == 1)
		return false;
	c_.ensure_cfg();
	find_loops(body_, cfg_, forest_);
	if (forest_.partial)
		return false;
	map_instruction_blocks(body_, block_of_);
	info_of_.assign(body_.temps.size(), kNoId);
	infos_.clear();
	alias_.assign(body_.temps.size(), kNoId);
	for (BlockId b : cfg_.rpo)
		for (InstId i = body_.blocks[b].first; i != kNoId; i = body_.instructions[i].next)
		{
			const Instruction& inst = body_.instructions[i];
			if (candidate(inst))
			{
				info_of_[inst.result] = static_cast<uint32_t>(infos_.size());
				infos_.push_back(Info());
				infos_.back().temp = inst.result;
			}
			else if (inst.op == Opcode::Copy && inst.result != kNoId && inst.type.is_pointer() &&
				root(inst.ops[0]) != kNoId && home(root(inst.ops[0])) == b)
				alias_[inst.result] = root(inst.ops[0]);
		}
	if (infos_.empty())
		return false;
	for (BlockId b : body_.layout)
	{
		const bool reachable = cfg_.reachable(b);
		for (InstId i = body_.blocks[b].first; i != kNoId; i = body_.instructions[i].next)
		{
			const Instruction& inst = body_.instructions[i];
			auto read = [&](Value v, unsigned slot, BlockId at) {
				const TempId address = root(v);
				if (address == kNoId)
					return;
				if (!reachable)
					info(address).held = true;
				else
					note(address, inst, slot, at);
			};
			for (unsigned k = 0; k < 3; ++k)
				read(inst.ops[k], k, b);
			for (uint32_t k = 0; k < inst.extra_count; ++k)
				if (inst.op != Opcode::Phi)
					read(body_.operands[inst.extra_first + k], 3 + k, b);
				else if (k % 2 == 1)
					read(body_.operands[inst.extra_first + k], 3 + k, body_.operands[inst.extra_first + k - 1].index);
		}
	}
	// A chosen field's address forms from its base at each of its sites:
	// they are the base's too (later addresses first: a field of a field).
	bool any = false;
	for (size_t k = infos_.size(); k-- > 0;)
	{
		if (!chosen(infos_[k]))
			continue;
		any = true;
		const InstId def = body_.temps[infos_[k].temp].def;
		const TempId base = root(body_.instructions[def].ops[0]);
		if (base == kNoId || home(base) != block_of_[def])
			continue;
		for (unsigned e = 0; e < infos_[k].count; ++e)
			outside(info(base), infos_[k].sites[e].block, infos_[k].sites[e].edge, block_of_[def]);
	}
	if (!any)
		return false;
	// The edges' blocks first (each holds its copies and a jump), then the
	// uses.
	tail_.assign(body_.blocks.size(), kNoId);
	struct Edge
	{
		BlockId from, to, block;
		InstId tail;
	};
	std::vector<Edge> edges;
	for (BlockId b : cfg_.rpo)
		for (InstId i = body_.blocks[b].first; i != kNoId; i = body_.instructions[i].next)
		{
			const TempId t = body_.instructions[i].result;
			if (t == kNoId || t >= info_of_.size() || info_of_[t] == kNoId || !chosen(infos_[info_of_[t]]))
				continue;
			Info& info = infos_[info_of_[t]];
			for (unsigned k = 0; k < info.count; ++k)
			{
				Site& site = info.sites[k];
				if (!site.edge)
					continue;
				size_t e = 0;
				while (e < edges.size() && !(edges[e].from == b && edges[e].to == site.block))
					++e;
				if (e == edges.size())
					edges.push_back(Edge{ b, site.block, kNoId, kNoId });
				const InstId id = make_copy(t, site.block, true);
				if (edges[e].block == kNoId)
					edges[e].block = append_block(body_, BlockKind::Split);
				insert_after(body_, edges[e].block, edges[e].tail, id);
				edges[e].tail = id;
				site.copy = body_.instructions[id].result;
			}
		}
	// (A copy's instruction may move the instructions: each operand is read
	// and written by its place.)
	for (BlockId b : cfg_.rpo)
		for (InstId i = body_.blocks[b].first; i != kNoId; i = body_.instructions[i].next)
		{
			// (A copy took its operands as it was made.)
			if (i >= block_of_.size())
				continue;
			auto replaced = [&](Value v, BlockId at, bool phi) {
				const TempId address = root(v);
				if (address == kNoId || !chosen(info(address)))
					return v;
				if (phi && at == home(address))
					return copy_for(address, b, true);
				return at != home(address) ? copy_for(address, at, false) : v;
			};
			const bool phi = body_.instructions[i].op == Opcode::Phi;
			for (unsigned k = 0; k < 3; ++k)
			{
				const Value v = replaced(body_.instructions[i].ops[k], b, false);
				body_.instructions[i].ops[k] = v;
			}
			const uint32_t first = body_.instructions[i].extra_first, count = body_.instructions[i].extra_count;
			for (uint32_t k = phi ? 1 : 0; k < count; k += phi ? 2 : 1)
			{
				const BlockId at = phi ? body_.operands[first + k - 1].index : b;
				const Value v = replaced(body_.operands[first + k], at, phi);
				body_.operands[first + k] = v;
			}
		}
	for (const Edge& edge : edges)
	{
		Instruction jump = make_instruction(Opcode::Jump, Type::scalar(TypeKind::Void));
		jump.ops[0] = Value::block(edge.to);
		jump.location = body_.instructions[body_.blocks[edge.from].last].location;
		insert_after(body_, edge.block, edge.tail, append_instruction(body_, jump));
		Instruction& term = body_.instructions[body_.blocks[edge.from].last];
		for (unsigned k = 1; k < 3; ++k)
			if (term.ops[k].index == edge.to)
				term.ops[k] = Value::block(edge.block);
		rename_phi_incoming(body_, edge.to, edge.from, edge.block);
		std::vector<BlockId>& layout = body_.layout;
		size_t at = 0;
		while (at < layout.size() && layout[at] != edge.from)
			++at;
		layout.insert(layout.begin() + static_cast<std::ptrdiff_t>(at < layout.size() ? at + 1 : at), edge.block);
	}
	if (!edges.empty())
		c_.invalidate_cfg();
	c_.invalidate_block_of();
	c_.invalidate_uses();
	return true;
}

// Arm's shifted ADD can form base + (element << shift) at the same cost
// as an ordinary addition. Express a scaled byte index as a typed index
// even if several bases use the same product in different blocks.
bool fold_index_scales(FunctionContext& context)
{
	bool changed = false;
	auto& body = context.body;
	for (auto b : body.layout)
		for (auto i = body.blocks[b].first; i != kNoId; i = body.instructions[i].next)
		{
			auto& index = body.instructions[i];
			if (index.op != Opcode::Index || storage_bytes(index.type) != 1 || !index.ops[1].is(ValueKind::Temp))
				continue;
			const auto def = body.temps[index.ops[1].index].def;
			if (def == kNoId)
				continue;
			const auto& product = body.instructions[def];
			if (product.op != Opcode::Binary || integer_bits(product.type.kind()) != 64)
				continue;
			auto element = product.ops[0], factor = product.ops[1];
			const auto op = static_cast<BinaryOp>(product.sub);
			if (op == BinaryOp::Mul && element.is(ValueKind::Integer))
				std::swap(element, factor);
			if (!element.is(ValueKind::Temp) || !factor.is(ValueKind::Integer) ||
				(op != BinaryOp::Mul && op != BinaryOp::Shl) || body.temps[element.index].type != product.type)
				continue;
			const auto literal = body.literals[factor.index].low;
			const auto scale = op == BinaryOp::Mul ? literal : literal < 31 ? uint64_t(1) << literal : 0;
			if (scale < 2 || scale > (uint64_t(1) << 30) || (scale & (scale - 1)))
				continue;
			if (scale != 16 && index.next != kNoId)
			{
				const Instruction& use = body.instructions[index.next];
				const bool store = use.op == Opcode::Store;
				// Q accesses encode a byte offset or a shift by four only.
				if ((store || use.op == Opcode::Load) && use.type.kind() == TypeKind::V128 &&
					use.ops[store ? 1 : 0] == Value::temp(index.result))
					continue;
			}
			index.type = Type::object(scale, 0);
			index.ops[1] = element;
			// The original product could wrap before the inbounds byte index.
			index.set_index_bounds(IndexBounds::None);
			changed = true;
		}
	if (changed)
	{
		context.invalidate_uses();
		remove_dead_code(context);
	}
	return changed;
}

// An SSA index can be recomputed in each consuming block if every use
// encodes its displacement or scale. Its inputs dominate the original
// definition and its uses. Loads and stores stay in their original order.
bool encodable_access(const FunctionBody& body, const Instruction& field, const Instruction& use)
{
	const bool store = use.op == Opcode::Store;
	if ((!store && use.op != Opcode::Load) || !(use.ops[store ? 1 : 0] == Value::temp(field.result)))
		return false;
	const auto bytes = storage_bytes(use.type), scale = storage_bytes(field.type);
	if (!bytes || use.type.is_object() || (bytes > 8 && use.type.kind() != TypeKind::V128))
		return false;
	if (field.ops[1].is(ValueKind::Integer))
	{
		const auto offset = body.literals[field.ops[1].index].low * scale;
		return (offset % bytes == 0 && offset / bytes < 4096) || offset + 256 < 512;
	}
	return field.ops[1].is(ValueKind::Temp) && (scale == 1 || scale == bytes) &&
		(bytes <= 8 || integer_bits(body.temps[field.ops[1].index].type.kind()) == 64);
}

bool place_memory_addresses(FunctionContext& context)
{
	auto& body = context.body;
	const auto& uses = context.entry_uses(sink_addresses);
	std::vector<uint32_t> encodable;
	// The complete use count includes calls, phi edges, comparisons, and
	// storing the pointer itself. Only purely memory-address uses qualify.
	for (auto block : body.layout)
		for (auto i = body.blocks[block].first; i != kNoId; i = body.instructions[i].next)
		{
			const auto& use = body.instructions[i];
			if (use.op != Opcode::Load && use.op != Opcode::Store)
				continue;
			const auto v = use.ops[use.op == Opcode::Store ? 1 : 0];
			if (!v.is(ValueKind::Temp) || v.index < body.parameter_count || body.temps[v.index].def == kNoId)
				continue;
			const auto& index = body.instructions[body.temps[v.index].def];
			if (index.op != Opcode::Index || !index.ops[0].is(ValueKind::Temp) ||
				(index.next == i && uses[v.index] == 1) || !encodable_access(body, index, use))
				continue;
			if (encodable.empty())
				encodable.resize(body.temps.size());
			++encodable[v.index];
		}
	if (encodable.empty())
		return false;
	bool changed = false;
	const auto chosen = [&](TempId t) { return t < encodable.size() && encodable[t] && encodable[t] == uses[t]; };
	for (auto block : body.layout)
	{
		InstId prev = kNoId;
		for (auto i = body.blocks[block].first; i != kNoId;)
		{
			const auto inst = body.instructions[i];
			const auto next = inst.next;
			if (inst.op == Opcode::Index && chosen(inst.result))
			{
				unlink_after(body, block, prev, i);
				changed = true;
			}
			else
			{
				const bool store = inst.op == Opcode::Store;
				if (store || inst.op == Opcode::Load)
				{
					const auto v = inst.ops[store ? 1 : 0];
					if (v.is(ValueKind::Temp) && chosen(v.index))
					{
						const auto copied = body.instructions[body.temps[v.index].def];
						const auto id = append_instruction(body, copied);
						const auto tmp = append_temp(body, body.pointer_type(), id);
						body.instructions[id].result = tmp;
						insert_after(body, block, prev, id);
						body.instructions[i].ops[store ? 1 : 0] = Value::temp(tmp);
					}
				}
				prev = i;
			}
			i = next;
		}
	}
	if (changed)
	{
		context.invalidate_uses();
		context.invalidate_block_of();
	}
	return changed;
}

// When a block needs several nearby elements, one explicit scaled base
// replaces two or more separate additions to the subscript.
bool share_index_bases(FunctionContext& context)
{
	auto& body = context.body;
	const auto& uses = context.entry_uses(sink_addresses);
	bool changed = false;
	for (BlockId block : body.layout)
	{
		constexpr unsigned kGroups = 8, kOffsets = 4, kDistance = 32;
		struct Group
		{
			Value base, counter;
			Type type;
			InstId anchor;
			unsigned first;
			InstId fields[kOffsets];
			uint64_t offsets[kOffsets];
			unsigned count;
		};
		Group groups[kGroups];
		unsigned group_count = 0, position = 0;
		for (InstId id = body.blocks[block].first; id != kNoId; id = body.instructions[id].next, ++position)
		{
			const Instruction& index = body.instructions[id];
			if (index.op != Opcode::Index || !index.ops[0].is(ValueKind::Temp) || !index.ops[1].is(ValueKind::Temp) ||
				index.next == kNoId || uses[index.result] != 1)
				continue;
			const uint64_t scale = storage_bytes(index.type);
			if ((scale != 1 && scale != 2 && scale != 4 && scale != 8) ||
				!encodable_access(body, index, body.instructions[index.next]))
				continue;
			Value counter = index.ops[1];
			if (integer_bits(body.temps[counter.index].type.kind()) != 64)
				continue;
			uint64_t offset = 0;
			const InstId def = body.temps[counter.index].def;
			if (def != kNoId)
			{
				const auto& add = body.instructions[def];
				if (add.op == Opcode::Binary && add.sub == static_cast<unsigned>(BinaryOp::Add) &&
					add.ops[0].is(ValueKind::Temp) && add.ops[1].is(ValueKind::Integer) && uses[counter.index] == 1)
				{
					offset = body.literals[add.ops[1].index].low;
					counter = add.ops[0];
				}
			}
			unsigned first = 0;
			for (; first < group_count; ++first)
			{
				Group& g = groups[first];
				if (g.base == index.ops[0] && g.counter == counter && g.type == index.type &&
					position - g.first <= kDistance && (offset * scale + 256) < 512)
				{
					if (g.count < kOffsets && offset)
					{
						g.fields[g.count] = id;
						g.offsets[g.count++] = offset;
					}
					break;
				}
			}
			if (first == group_count && first < kGroups && offset == 0)
				groups[group_count++] = Group{ index.ops[0], counter, index.type, id, position, {}, {}, 0 };
		}
		for (unsigned k = 0; k < group_count; ++k)
		{
			const auto& g = groups[k];
			if (g.count < 2)
				continue;
			for (unsigned j = 0; j < g.count; ++j)
			{
				const auto bytes = static_cast<int64_t>(g.offsets[j] * storage_bytes(g.type));
				const auto displacement = integer_value(body, integer_literal(bytes));
				Instruction& index = body.instructions[g.fields[j]];
				index.type = Type::scalar(TypeKind::I8);
				index.ops[0] = Value::temp(body.instructions[g.anchor].result);
				index.ops[1] = displacement;
				index.set_index_bounds(IndexBounds::None);
			}
			changed = true;
		}
	}
	if (changed)
	{
		context.invalidate_uses();
		remove_dead_code(context);
	}
	return changed;
}

// Whether instruction `id` indexes a base by an element value (scaled by
// two, four or eight bytes) for the vector load or store that follows it
// alone.
bool vector_indexed(const FunctionBody& body, const std::vector<uint32_t>& uses, InstId id)
{
	const Instruction& index = body.instructions[id];
	if (index.op != Opcode::Index || index.next == kNoId || index.result == kNoId || uses[index.result] != 1 ||
		!index.ops[0].is(ValueKind::Temp) || !index.ops[1].is(ValueKind::Temp) ||
		integer_bits(body.temps[index.ops[1].index].type.kind()) != 64)
		return false;
	const uint64_t scale = storage_bytes(index.type);
	const Instruction& use = body.instructions[index.next];
	const bool store = use.op == Opcode::Store;
	return (scale == 2 || scale == 4 || scale == 8) && (store || use.op == Opcode::Load) &&
		use.type.kind() == TypeKind::V128 && use.ops[store ? 1 : 0] == Value::temp(index.result) &&
		!(store && use.ops[0] == Value::temp(index.result));
}

// A Q access takes a register offset in bytes, or one scaled by sixteen,
// but not an element index: each such access first adds the scaled index to
// its base. Two or more vector accesses of a block that index bases by one
// element value read its byte offset instead, computed once in the block
// (a vector loop over rows of a matrix reads many rows at one column).
bool share_vector_offsets(FunctionContext& context)
{
	auto& body = context.body;
	const auto& uses = context.entry_uses(sink_addresses);
	constexpr unsigned kOffsets = 8;
	struct Offset
	{
		Value element;
		uint64_t scale;
		unsigned count;
		Value bytes;
	};
	bool changed = false;
	for (BlockId block : body.layout)
	{
		Offset offsets[kOffsets];
		unsigned found = 0;
		const auto lookup = [&](const Instruction& index) {
			unsigned k = 0;
			while (k < found && !(offsets[k].element == index.ops[1] && offsets[k].scale == storage_bytes(index.type)))
				++k;
			return k;
		};
		for (InstId id = body.blocks[block].first; id != kNoId; id = body.instructions[id].next)
		{
			if (!vector_indexed(body, uses, id))
				continue;
			const Instruction& index = body.instructions[id];
			const unsigned k = lookup(index);
			if (k < found)
				++offsets[k].count;
			else if (found < kOffsets)
				offsets[found++] = Offset{ index.ops[1], storage_bytes(index.type), 1, Value::none() };
		}
		InstId prev = kNoId;
		for (InstId id = body.blocks[block].first; id != kNoId; prev = id, id = body.instructions[id].next)
		{
			if (!vector_indexed(body, uses, id))
				continue;
			const unsigned k = lookup(body.instructions[id]);
			if (k == found || offsets[k].count < 2)
				continue;
			Offset& offset = offsets[k];
			if (offset.bytes.is(ValueKind::None))
			{
				Instruction shift = make_instruction(Opcode::Binary, Type::scalar(TypeKind::I64));
				shift.sub = static_cast<uint8_t>(BinaryOp::Shl);
				shift.ops[0] = offset.element;
				shift.ops[1] = integer_value(body, integer_literal(__builtin_ctzll(offset.scale)));
				shift.location = body.instructions[id].location;
				const InstId made = append_instruction(body, shift);
				body.instructions[made].result = append_temp(body, shift.type, made);
				insert_after(body, block, prev, made);
				offset.bytes = Value::temp(body.instructions[made].result);
			}
			Instruction& index = body.instructions[id];
			index.type = Type::scalar(TypeKind::I8);
			index.ops[1] = offset.bytes;
			index.set_index_bounds(IndexBounds::None);
			changed = true;
		}
	}
	if (changed)
	{
		context.invalidate_uses();
		context.invalidate_block_of();
	}
	return changed;
}

} // namespace

bool sink_addresses(FunctionContext& context)
{
	if (!context.costs.scaled_memory_operands)
		return false;
	// (Again for a copy that its own block reads memory through.)
	const bool changed = AddressSinking(context).run();
	if (changed)
		AddressSinking(context).run();
	if (!target_model::is_aarch64(context.program.target))
		return changed;
	const bool scaled = fold_index_scales(context);
	const bool placed = place_memory_addresses(context);
	const bool shared = share_index_bases(context);
	return share_vector_offsets(context) || shared || placed || scaled || changed;
}

} // namespace opt
