#include "lowir/builder.h"
#include "opt/loops.h"
#include "opt/passes.h"
#include "opt/scalar_fold.h"
#include "opt/vector_lanes.h"

#include <algorithm>

namespace opt {

using namespace lowir;

namespace {

// The most stores of one block this pass reads, and the size of the tree one
// group of stores may pack.
const size_t kBlockStores = 64;
const uint32_t kMaxNodes = 24;
const unsigned kMaxDepth = 8;
const unsigned kMaxLanes = 4;
// The most links of one loop sum kept_sum follows.
const unsigned kSumLinks = 64;
// The most vectors one kept sum carries, fed in turn: combining a pack takes
// a lane addition (two cycles on AArch64) and a pass can make two packs a
// cycle, so four carried vectors let no pack wait on the one before it.
const unsigned kKeptVectors = 4;

// Block lanes at O3: adjacent stores of one block, f64 in twos and f32 or
// i32 in fours, become one sixteen-byte store when their values are worth
// computing in lanes. From the stores the pass walks up: lanes of one
// operation become a lane operation, loads of adjacent memory one load, and
// anything else the lanes of values computed as before. A value something
// else reads stays scalar too, so a group packs only if it removes more
// instructions than it adds. All of it happens just before the group's last
// store, where every value exists. A group that does not pay alone may pay
// with a later group of the block that reads the same lanes (the two halves
// of a butterfly read one loaded pair): the later group reuses the vectors
// the first made. Four contributions to an integer sum can use the same
// planner, paying for a horizontal sum instead of a vector store.
class BlockLanes
{
public:
	explicit BlockLanes(FunctionContext& context) : c_(context), body_(context.body) {}

	bool run();

private:
	enum class NodeKind : uint8_t
	{
		Gather,
		Splat,
		Loaded,
		Operation
	};
	struct Node
	{
		NodeKind kind = NodeKind::Gather;
		VectorOp op = VectorOp::Addpd;
		int immediate = -1;
		Value lanes[kMaxLanes];
		int left = -1, right = -1;
		Value made = Value::none();
	};
	struct Stored
	{
		InstId id;
		Located at;
	};
	// A loop sum kept in lanes: its scalar phi, the vectors the loop carries
	// to the next pass (packs feed them in turn), and on the edge out their
	// combination, which the fold's first two instructions read.
	struct Kept
	{
		TempId phi;
		BlockId entry, exit;
		Value identity;
		Value next[kKeptVectors];
		unsigned count, fed;
		Value joined;
		InstId fold[2];
	};

	bool block(BlockId b);
	void find_runs(const std::vector<Stored>& stores, std::vector<Stored>& lanes, std::vector<size_t>& runs) const;
	bool reduction(BlockId b);
	bool link(BlockId b, Value v, const Instruction& last) const;
	bool run_parts(BlockId b, InstId id, Value& carry, Value* parts);
	bool tree_parts(BlockId b, InstId id, Value& carry, Value* parts);
	InstId kept_sum(BlockId b, Value carry, InstId last, unsigned steps) const;
	void keep(BlockId b, InstId phi, Value carry, InstId last, Value lanes, VectorOp op);
	void feed(Kept& known, BlockId b, Value lanes, VectorOp op);
	Value carried_vector(BlockId b, BlockId entry, Value identity, Value lanes, VectorOp op);
	bool splat_offset(int root, int& varying, Value& offset);
	BlockId split_exit(BlockId from, BlockId to);
	Value fold_lanes(Value lanes, VectorOp op, Type type, InstId* reads = nullptr);
	bool reload(BlockId b, const std::vector<Stored>& stores, const std::vector<size_t>& runs);
	bool quiet(const Instruction& inst) const;
	int plan(BlockId b, const std::vector<Stored>& stores, size_t first, InstId& last);
	bool group(BlockId b, const std::vector<Stored>& stores, const std::vector<size_t>& runs, size_t run);
	void pack(BlockId b, const std::vector<Stored>& stores, size_t first, InstId last, int root);
	bool stores_move(const std::vector<Stored>& stores, size_t first, InstId last) const;
	bool pair_floats(BlockId b, const std::vector<Stored>& stores);
	bool load_moves(InstId load, const std::vector<Stored>& stores, size_t first, InstId last) const;
	int build(
		BlockId b, const Value* lanes, const std::vector<Stored>& stores, size_t first, InstId last, unsigned depth);
	int add_gather(const Value* lanes);
	bool same(Value a, Value b) const;
	bool same_block(BlockId b, Value v) const;
	int match_score(const Value* a, const Value* b) const;
	bool adjacent_loads(const Value* lanes) const;
	bool pure(const Instruction& inst) const;
	bool apart(const Instruction& store, Value address, const Located& at, uint64_t bytes, Type type, bool typed) const;
	int net_gain(BlockId b, const int* roots, size_t count);
	Value lane_value(Value v);
	Value make(int node);
	Value emit(Instruction inst, Type type);
	Value vector(VectorOp op, Value a, Value b = Value::none(), int immediate = -1);

	FunctionContext& c_;
	FunctionBody& body_;
	std::vector<uint32_t> position_; // per instruction, within the block being read
	std::vector<uint32_t> uses_;
	std::vector<uint8_t> escaped_;
	std::vector<Node> nodes_;
	std::vector<Kept> kept_;
	std::vector<InstId> ops_; // the operations a reduction's contributions leave
	size_t shared_ = 0;       // nodes_ below this belong to an earlier group a later one may reuse
	unsigned lanes_ = 2;
	Type lane_type_ = Type::scalar(TypeKind::F64);
	BlockId block_ = kNoId;
	InstId tail_ = kNoId;
};

bool BlockLanes::pure(const Instruction& inst) const
{
	switch (inst.op)
	{
	case Opcode::Binary:
	case Opcode::Unary:
	case Opcode::Convert:
	case Opcode::Compare:
	case Opcode::Index:
	case Opcode::Addr:
	case Opcode::Copy:
	case Opcode::Select:
	case Opcode::Vector:
		return true;
	default:
		return false;
	}
}

bool BlockLanes::apart(
	const Instruction& store, Value address, const Located& at, uint64_t bytes, Type type, bool typed) const
{
	const Located there = locate_steps(body_, store.ops[1]);
	const uint64_t size = storage_bytes(store.type);
	const bool named_a = there.root.is(ValueKind::Slot) || there.root.is(ValueKind::Symbol);
	const bool named_b = at.root.is(ValueKind::Slot) || at.root.is(ValueKind::Symbol);
	if (there.root == at.root)
		return there.known && at.known &&
			(there.offset >= at.offset + static_cast<int64_t>(bytes) ||
				at.offset >= there.offset + static_cast<int64_t>(size));
	if (named_a && named_b)
		return true;
	if ((there.root.is(ValueKind::Slot) && !escaped_[there.root.index]) ||
		(at.root.is(ValueKind::Slot) && !escaped_[at.root.index]))
		return true;
	if ((store.flags & IF_TYPED) != 0 && typed && typed_types_apart(store.type, type))
		return true;
	return strided_apart(strided_address(body_, store.ops[1]), size, strided_address(body_, address), bytes);
}

// Each store of the group but the last moves down to the last: nothing it
// passes reads or writes what it writes, and nothing it passes may leave.
bool BlockLanes::stores_move(const std::vector<Stored>& stores, size_t first, InstId last) const
{
	for (unsigned lane = 0; lane < lanes_; ++lane)
	{
		const InstId id = stores[first + lane].id;
		if (id == last)
			continue;
		const Instruction& store = body_.instructions[id];
		const uint64_t bytes = storage_bytes(store.type);
		const bool typed = (store.flags & IF_TYPED) != 0;
		for (InstId i = store.next; i != last; i = body_.instructions[i].next)
		{
			const Instruction& inst = body_.instructions[i];
			if (pure(inst))
				continue;
			bool ok = false;
			if (inst.op == Opcode::Load && (inst.flags & IF_VOLATILE) == 0)
			{
				// (A load overlapping nothing the store writes.)
				Instruction read = inst;
				read.ops[1] = inst.ops[0];
				ok = apart(read, store.ops[1], stores[first + lane].at, bytes, store.type, typed);
			}
			else if (inst.op == Opcode::Store && (inst.flags & IF_VOLATILE) == 0)
				ok = apart(inst, store.ops[1], stores[first + lane].at, bytes, store.type, typed);
			if (!ok)
				return false;
		}
	}
	return true;
}

// A load moves down to the group's last store, before the group's stores:
// nothing after it may write what it reads, and no store of the group that
// ran before it may have.
bool BlockLanes::load_moves(InstId load, const std::vector<Stored>& stores, size_t first, InstId last) const
{
	const Instruction& read = body_.instructions[load];
	const Located at = locate_steps(body_, read.ops[0]);
	const uint64_t bytes = storage_bytes(read.type);
	const bool typed = (read.flags & IF_TYPED) != 0;
	for (unsigned lane = 0; lane < lanes_ && first + lane < stores.size(); ++lane)
	{
		const InstId id = stores[first + lane].id;
		if (position_[id] < position_[load] && !apart(body_.instructions[id], read.ops[0], at, bytes, read.type, typed))
			return false;
	}
	for (InstId i = read.next; i != last; i = body_.instructions[i].next)
	{
		const Instruction& inst = body_.instructions[i];
		if (pure(inst) || (inst.op == Opcode::Load && (inst.flags & IF_VOLATILE) == 0))
			continue;
		if (inst.op != Opcode::Store || (inst.flags & IF_VOLATILE) != 0)
			return false;
		bool ours = false;
		for (unsigned lane = 0; lane < lanes_ && first + lane < stores.size(); ++lane)
			ours = ours || stores[first + lane].id == i;
		if (!ours && !apart(inst, read.ops[0], at, bytes, read.type, typed))
			return false;
	}
	return true;
}

bool BlockLanes::same_block(BlockId b, Value v) const
{
	return v.is(ValueKind::Temp) && v.index < body_.temps.size() && body_.temps[v.index].def != kNoId &&
		c_.block_of[body_.temps[v.index].def] == b;
}

bool BlockLanes::adjacent_loads(const Value* lanes) const
{
	Located base;
	for (unsigned lane = 0; lane < lanes_; ++lane)
	{
		const Instruction& inst = body_.instructions[body_.temps[lanes[lane].index].def];
		if (inst.op != Opcode::Load || (inst.flags & IF_VOLATILE) != 0 || inst.type != lane_type_)
			return false;
		const Located at = locate_steps(body_, inst.ops[0]);
		if (!at.known)
			return false;
		if (lane == 0)
			base = at;
		else if (!(at.root == base.root) ||
			at.offset != base.offset + static_cast<int64_t>(lane * storage_bytes(lane_type_)))
			return false;
	}
	return true;
}

int BlockLanes::add_gather(const Value* lanes)
{
	Node node;
	node.kind = NodeKind::Splat;
	for (unsigned lane = 0; lane < lanes_; ++lane)
	{
		node.lanes[lane] = lanes[lane];
		if (!same(lanes[lane], lanes[0]))
			node.kind = NodeKind::Gather;
	}
	nodes_.push_back(node);
	return static_cast<int>(nodes_.size()) - 1;
}

bool BlockLanes::same(Value a, Value b) const
{
	if (a == b)
		return true;
	Constant x, y;
	return literal_constant(body_, a, x) && literal_constant(body_, b, y) && same_constant(lane_type_, x, y);
}

// How well two lists of lanes would pack, for a commutative operation's
// choice of operands.
int BlockLanes::match_score(const Value* a, const Value* b) const
{
	int score = 0;
	for (const Value* lanes : { a, b })
	{
		bool temps = true, same = true, loads = true;
		for (unsigned lane = 0; lane < lanes_; ++lane)
		{
			temps = temps && lanes[lane].is(ValueKind::Temp) && lanes[lane].index < body_.temps.size() &&
				body_.temps[lanes[lane].index].def != kNoId;
			same = same && this->same(lanes[lane], lanes[0]);
		}
		if (same)
			score += 1;
		if (!temps)
			continue;
		loads = adjacent_loads(lanes);
		bool ops = true;
		const Instruction& first = body_.instructions[body_.temps[lanes[0].index].def];
		for (unsigned lane = 1; lane < lanes_; ++lane)
		{
			const Instruction& inst = body_.instructions[body_.temps[lanes[lane].index].def];
			ops = ops && inst.op == first.op && inst.sub == first.sub;
		}
		score += loads ? 4 : ops ? 2 : 0;
	}
	return score;
}

int BlockLanes::build(
	BlockId b, const Value* lanes, const std::vector<Stored>& stores, size_t first, InstId last, unsigned depth)
{
	if (depth >= kMaxDepth || nodes_.size() - shared_ >= kMaxNodes)
		return add_gather(lanes);
	bool here = true;
	for (unsigned lane = 0; lane < lanes_; ++lane)
		here = here && same_block(b, lanes[lane]);
	if (!here)
		return add_gather(lanes);
	// Identical ordered lanes share their vector, both within this tree and
	// with an earlier group. net_gain counts all parents before deciding
	// whether the scalar producers can disappear.
	for (size_t n = 0; n < nodes_.size(); ++n)
	{
		bool same = nodes_[n].kind >= NodeKind::Loaded;
		for (unsigned lane = 0; lane < lanes_ && same; ++lane)
			same = nodes_[n].lanes[lane] == lanes[lane];
		if (same)
			return static_cast<int>(n);
	}
	for (const Node& known : nodes_)
		for (unsigned lane = 0; lane < lanes_ && known.kind >= NodeKind::Loaded; ++lane)
			for (unsigned other = 0; other < lanes_; ++other)
				if (known.lanes[lane] == lanes[other])
					return add_gather(lanes);
	for (unsigned lane = 1; lane < lanes_; ++lane)
		if (lanes[lane] == lanes[0])
			return add_gather(lanes);
	if (adjacent_loads(lanes))
	{
		bool moves = true;
		for (unsigned lane = 0; lane < lanes_ && moves; ++lane)
			moves = load_moves(body_.temps[lanes[lane].index].def, stores, first, last);
		if (!moves)
			return add_gather(lanes);
		const int index = add_gather(lanes);
		nodes_[index].kind = NodeKind::Loaded;
		return index;
	}
	const Instruction& head = body_.instructions[body_.temps[lanes[0].index].def];
	const bool binary = head.op == Opcode::Binary && head.type == lane_type_;
	const bool root = head.op == Opcode::Unary && head.type == lane_type_ &&
		static_cast<UnaryOp>(head.sub) == UnaryOp::Sqrt;
	const BinaryOp binary_op = static_cast<BinaryOp>(head.sub);
	const bool shift = binary && lane_type_.is_integer() &&
		(binary_op == BinaryOp::Shl || binary_op == BinaryOp::UShr || binary_op == BinaryOp::Shr);
	if (!binary && !root)
		return add_gather(lanes);
	for (unsigned lane = 1; lane < lanes_; ++lane)
	{
		const Instruction& inst = body_.instructions[body_.temps[lanes[lane].index].def];
		if (inst.op != head.op || inst.sub != head.sub || inst.type != head.type)
			return add_gather(lanes);
		if (shift &&
			(!inst.ops[1].is(ValueKind::Integer) || !head.ops[1].is(ValueKind::Integer) ||
				body_.literals[inst.ops[1].index].low != body_.literals[head.ops[1].index].low ||
				body_.literals[inst.ops[1].index].high != body_.literals[head.ops[1].index].high))
			return add_gather(lanes);
	}
	VectorOp op;
	if (root)
		op = lanes_ == 2 ? VectorOp::Sqrtpd : VectorOp::Sqrtps;
	else if (shift)
	{
		if (!head.ops[1].is(ValueKind::Integer) || body_.literals[head.ops[1].index].low >= 32)
			return add_gather(lanes);
		op = binary_op == BinaryOp::Shl   ? VectorOp::Pslldi
			: binary_op == BinaryOp::UShr ? VectorOp::Psrldi
										  : VectorOp::Psradi;
	}
	else if (lane_type_.is_integer() && static_cast<BinaryOp>(head.sub) == BinaryOp::Mul &&
		c_.costs.packed_i32_multiply)
		op = VectorOp::Pmulld;
	else if (!lane_operation(static_cast<BinaryOp>(head.sub), lane_type_, op))
		return add_gather(lanes);
	const int index = add_gather(lanes);
	nodes_[index].kind = NodeKind::Operation;
	nodes_[index].op = op;
	if (shift)
		nodes_[index].immediate = static_cast<int>(body_.literals[head.ops[1].index].low);
	Value left[kMaxLanes], right[kMaxLanes];
	for (unsigned lane = 0; lane < lanes_; ++lane)
	{
		const Instruction& inst = body_.instructions[body_.temps[lanes[lane].index].def];
		left[lane] = inst.ops[0];
		right[lane] = root ? Value::none() : inst.ops[1];
	}
	if (root || shift)
	{
		const int child = build(b, left, stores, first, last, depth + 1);
		nodes_[index].left = child;
		return index;
	}
	// An addition or a product takes each lane's operands in either order.
	if (op == VectorOp::Addpd || op == VectorOp::Addps || op == VectorOp::Mulpd || op == VectorOp::Mulps ||
		op == VectorOp::Paddd || op == VectorOp::Pmulld || op == VectorOp::Pand || op == VectorOp::Por ||
		op == VectorOp::Pxor)
		for (unsigned lane = 1; lane < lanes_; ++lane)
		{
			const int kept = match_score(left, right);
			std::swap(left[lane], right[lane]);
			if (match_score(left, right) <= kept)
				std::swap(left[lane], right[lane]);
		}
	const int l = build(b, left, stores, first, last, depth + 1);
	nodes_[index].left = l;
	const int r = build(b, right, stores, first, last, depth + 1);
	nodes_[index].right = r;
	return index;
}

// What the trees in nodes_ from `roots` save, in instructions. A scalar
// another reader needs stays, and a node none of whose scalars go is better
// gathered. A node two trees share counts the readers of both; the nodes are
// read parents first (a later tree's nodes read only earlier nodes, which
// its own parents reach once theirs are read).
int BlockLanes::net_gain(BlockId b, const int* roots, size_t count)
{
	std::vector<uint32_t> removed(nodes_.size() * kMaxLanes, 0); // per node and lane: readers that go
	std::vector<uint32_t> parents(nodes_.size(), 0), seen(nodes_.size(), 0);
	std::vector<uint8_t> needed(nodes_.size(), 0); // a root, or read by a lane operation
	for (const Node& node : nodes_)
		if (node.kind == NodeKind::Operation)
		{
			if (node.left >= 0)
				++parents[node.left];
			if (node.right >= 0)
				++parents[node.right];
		}
	std::vector<int> ready;
	int gain = 0;
	for (size_t r = 0; r < count; ++r)
	{
		gain += static_cast<int>(lanes_) - 1;
		for (unsigned lane = 0; lane < lanes_; ++lane)
			++removed[roots[r] * kMaxLanes + lane];
		needed[roots[r]] = 1;
		if (parents[roots[r]] == 0)
			ready.push_back(roots[r]);
	}
	while (!ready.empty())
	{
		const int n = ready.back();
		ready.pop_back();
		Node& node = nodes_[n];
		const bool operation = node.kind == NodeKind::Operation;
		if (needed[n] == 0)
		{
			// (Nothing makes it: its children are not read through it.)
			for (const int child : { node.left, node.right })
				if (operation && child >= 0 && ++seen[child] == parents[child])
					ready.push_back(child);
			continue;
		}
		int going = 0;
		uint8_t goes = 0;
		for (unsigned lane = 0; lane < lanes_; ++lane)
		{
			const Value v = node.lanes[lane];
			const uint32_t r = removed[n * kMaxLanes + lane];
			if (r != 0 && v.is(ValueKind::Temp) && r == uses_[v.index])
			{
				++going;
				goes |= static_cast<uint8_t>(1u << lane);
			}
		}
		if (going == 0 && node.kind >= NodeKind::Loaded)
		{
			bool splat = true;
			for (unsigned lane = 1; lane < lanes_; ++lane)
				splat = splat && node.lanes[lane] == node.lanes[0];
			node.kind = splat ? NodeKind::Splat : NodeKind::Gather;
		}
		const bool reads = node.kind == NodeKind::Operation;
		if (node.kind == NodeKind::Gather || node.kind == NodeKind::Splat)
		{
			// A floating lane is already in a vector register; an integer
			// lane moves there before the shuffles (lane_value). Lanes made
			// before this block can be packed once, before a loop.
			const unsigned packed = node.kind == NodeKind::Splat ? 1 : lanes_;
			gain -= static_cast<int>(node.kind == NodeKind::Splat ? 1 : lanes_ - 1);
			for (unsigned lane = 0; lane < packed; ++lane)
			{
				if (!node.lanes[lane].is(ValueKind::Temp))
					gain -= 1;
				else if (lane_type_.is_integer() && same_block(b, node.lanes[lane]))
					gain -= 1;
			}
		}
		else
			gain += going - 1;
		// (A lane that stays still reads its operands.) A child is read once
		// all its parents are.
		for (const int child : { node.left, node.right })
		{
			if (!operation || child < 0)
				continue;
			if (reads)
			{
				needed[child] = 1;
				for (unsigned lane = 0; lane < lanes_; ++lane)
					if ((goes >> lane & 1) != 0)
						++removed[child * kMaxLanes + lane];
			}
			if (++seen[child] == parents[child])
				ready.push_back(child);
		}
	}
	return gain;
}

Value BlockLanes::emit(Instruction inst, Type type)
{
	const InstId id = append_instruction(body_, inst);
	Value out = Value::none();
	if (!type.is_void())
	{
		const TempId result = append_temp(body_, type, id);
		body_.instructions[id].result = result;
		out = Value::temp(result);
	}
	insert_after(body_, block_, tail_, id);
	c_.block_of.resize(body_.instructions.size(), kNoId);
	c_.block_of[id] = block_;
	tail_ = id;
	return out;
}

Value BlockLanes::vector(VectorOp op, Value a, Value b, int immediate)
{
	const Instruction inst = make_lane_instruction(body_, op, a, b, immediate);
	return emit(inst, inst.type);
}

Value BlockLanes::lane_value(Value v)
{
	if (lane_type_.is_integer())
	{
		Instruction copy = make_instruction(Opcode::Copy, Type::scalar(TypeKind::I32));
		copy.ops[0] = phi_input(body_, lane_type_, v);
		return vector(VectorOp::Fromi32, emit(copy, copy.type));
	}
	return vector(lanes_ == 2 ? VectorOp::Fromf64 : VectorOp::Fromf32, phi_input(body_, lane_type_, v));
}

Value BlockLanes::make(int index)
{
	if (!nodes_[index].made.is(ValueKind::None))
		return nodes_[index].made;
	const Node node = nodes_[index];
	Value out = Value::none();
	switch (node.kind)
	{
	case NodeKind::Splat:
		out = vector(VectorOp::Pshufd, lane_value(node.lanes[0]), Value::none(), lanes_ == 2 ? 0x44 : 0);
		break;
	case NodeKind::Gather:
		if (lanes_ == 2)
		{
			const Value low = lane_value(node.lanes[0]);
			const Value high = lane_value(node.lanes[1]);
			out = vector(VectorOp::Unpcklpd, low, high);
		}
		else
		{
			const Value a = lane_value(node.lanes[0]);
			const Value b = lane_value(node.lanes[1]);
			const Value c = lane_value(node.lanes[2]);
			const Value d = lane_value(node.lanes[3]);
			const bool integer = lane_type_.is_integer();
			const Value low = vector(integer ? VectorOp::Punpckldq : VectorOp::Unpcklps, a, b);
			const Value high = vector(integer ? VectorOp::Punpckldq : VectorOp::Unpcklps, c, d);
			out = vector(integer ? VectorOp::Punpcklqdq : VectorOp::Movlhps, low, high);
		}
		break;
	case NodeKind::Loaded:
	{
		Instruction load = make_instruction(Opcode::Load, Type::scalar(TypeKind::V128));
		const Instruction& first = body_.instructions[body_.temps[node.lanes[0].index].def];
		load.ops[0] = first.ops[0];
		load.location = first.location;
		out = emit(load, Type::scalar(TypeKind::V128));
		break;
	}
	case NodeKind::Operation:
	{
		const Value a = make(node.left);
		const Value b = node.right >= 0 ? make(node.right) : Value::none();
		out = vector(node.op, a, b, node.immediate);
		break;
	}
	}
	nodes_[index].made = out;
	return out;
}

// Builds the tree of the group of stores from `first` after nodes_ (the
// earlier group's, below shared_): its root, or -1 if the group cannot pack.
// `last` is the group's last store.
int BlockLanes::plan(BlockId b, const std::vector<Stored>& stores, size_t first, InstId& last)
{
	last = stores[first].id;
	for (unsigned lane = 1; lane < lanes_; ++lane)
		if (position_[stores[first + lane].id] > position_[last])
			last = stores[first + lane].id;
	if (!stores_move(stores, first, last))
		return -1;
	Value lanes[kMaxLanes];
	bool useful = false;
	for (unsigned lane = 0; lane < lanes_; ++lane)
	{
		lanes[lane] = body_.instructions[stores[first + lane].id].ops[0];
		useful = useful || same_block(b, lanes[lane]);
	}
	if (!useful)
		return -1;
	return build(b, lanes, stores, first, last, 0);
}

void BlockLanes::pack(BlockId b, const std::vector<Stored>& stores, size_t first, InstId last, int root)
{
	block_ = b;
	tail_ = previous_in_block(body_, b, last);
	const Value out = make(root);
	const Instruction& low = body_.instructions[stores[first].id];
	Instruction store = make_instruction(Opcode::Store, Type::scalar(TypeKind::V128));
	store.ops[0] = out;
	store.ops[1] = low.ops[1];
	store.location = low.location;
	emit(store, Type::scalar(TypeKind::Void));
	for (unsigned lane = 0; lane < lanes_; ++lane)
	{
		const InstId id = stores[first + lane].id;
		unlink_after(body_, b, previous_in_block(body_, b, id), id);
		c_.block_of[id] = kNoId;
	}
}

// The group of runs[run], alone or with another group whose stores all come
// after its own and whose tree reuses some of its nodes.
bool BlockLanes::group(BlockId b, const std::vector<Stored>& stores, const std::vector<size_t>& runs, size_t run)
{
	const size_t first = runs[run];
	nodes_.clear();
	shared_ = 0;
	InstId last = kNoId;
	const int root = plan(b, stores, first, last);
	if (root < 0)
		return false;
	const std::vector<Node> built = nodes_;
	if (net_gain(b, &root, 1) > 0 && nodes_[root].kind >= NodeKind::Loaded)
	{
		pack(b, stores, first, last, root);
		return true;
	}
	for (size_t other = 0; other < runs.size(); ++other)
	{
		const size_t second = runs[other];
		const Type type = body_.instructions[stores[second].id].type;
		bool after = type == lane_type_;
		for (unsigned lane = 0; lane < lanes_ && after; ++lane)
			after = position_[stores[second + lane].id] > position_[last];
		if (!after)
			continue;
		nodes_ = built;
		shared_ = built.size();
		InstId later = kNoId;
		const int next = plan(b, stores, second, later);
		bool reuses = false;
		for (size_t n = shared_; n < nodes_.size() && next >= 0; ++n)
			for (const int child : { nodes_[n].left, nodes_[n].right })
				reuses = reuses ||
					(nodes_[n].kind == NodeKind::Operation && child >= 0 && static_cast<size_t>(child) < shared_);
		if (next < 0 || !reuses)
			continue;
		const int roots[2] = { root, next };
		if (net_gain(b, roots, 2) <= 0 || nodes_[root].kind < NodeKind::Loaded || nodes_[next].kind < NodeKind::Loaded)
			continue;
		pack(b, stores, first, last, root);
		pack(b, stores, second, later, next);
		return true;
	}
	return false;
}

// An instruction that writes no memory and leaves its block only as its
// terminator.
bool BlockLanes::quiet(const Instruction& inst) const
{
	return pure(inst) || inst.op == Opcode::Load || inst.op == Opcode::Phi || inst.op == Opcode::Jump ||
		inst.op == Opcode::Branch;
}

// A one-block loop's phi that stands for a location a group stores: a load
// of the location before the loop gives its first value, and the loop's last
// store there its next. The loop reads the location instead, so that the
// group's lanes are loads of adjacent memory. Nothing between that load and
// the loop writes memory, and nothing after that store may write the
// location.
bool BlockLanes::reload(BlockId b, const std::vector<Stored>& stores, const std::vector<size_t>& runs)
{
	const Instruction& last = body_.instructions[body_.blocks[b].last];
	const InstId first = body_.blocks[b].first;
	if (last.op != Opcode::Branch || (last.ops[1].index != b && last.ops[2].index != b) ||
		body_.instructions[first].op != Opcode::Phi)
		return false;
	Cfg& cfg = c_.ensure_cfg_light();
	BlockId pre = kNoId;
	for (uint32_t k = cfg.pred_first[b]; k < cfg.pred_first[b + 1]; ++k)
		if (cfg.preds[k] != b)
		{
			if (pre != kNoId && pre != cfg.preds[k])
				return false;
			pre = cfg.preds[k];
		}
	if (pre == kNoId)
		return false;
	for (InstId prev = kNoId, i = first; i != kNoId && body_.instructions[i].op == Opcode::Phi;
		prev = i, i = body_.instructions[i].next)
	{
		const Instruction phi = body_.instructions[i];
		if (!phi.type.is_float() || phi.extra_count != 4)
			continue;
		const Value before = phi_incoming(body_, phi, pre), next = phi_incoming(body_, phi, b);
		// The last store of the next value, one of a group's.
		InstId store = kNoId;
		for (const size_t run : runs)
			for (unsigned lane = 0; lane < (body_.instructions[stores[run].id].type.kind() == TypeKind::F64 ? 2u : 4u);
				++lane)
			{
				const Instruction& s = body_.instructions[stores[run + lane].id];
				if (s.ops[0] == next && s.type == phi.type &&
					(store == kNoId || position_[stores[run + lane].id] > position_[store]))
					store = stores[run + lane].id;
			}
		if (store == kNoId || !before.is(ValueKind::Temp) || before.index < body_.parameter_count)
			continue;
		const Instruction written = body_.instructions[store];
		const Located at = locate_steps(body_, written.ops[1]);
		const bool typed = (written.flags & IF_TYPED) != 0;
		bool ok = !same_block(b, written.ops[1]);
		for (InstId j = written.next; j != kNoId && ok; j = body_.instructions[j].next)
		{
			const Instruction& inst = body_.instructions[j];
			ok = quiet(inst) ||
				(inst.op == Opcode::Store && (inst.flags & IF_VOLATILE) == 0 &&
					apart(inst, written.ops[1], at, storage_bytes(written.type), written.type, typed));
		}
		// The load before the loop, and the way from it to the loop.
		const InstId load = body_.temps[before.index].def;
		if (!ok || load == kNoId)
			continue;
		const Instruction read = body_.instructions[load];
		const Located from = locate_steps(body_, read.ops[0]);
		if (read.op != Opcode::Load || (read.flags & IF_VOLATILE) != 0 || read.type != phi.type ||
			typed != ((read.flags & IF_TYPED) != 0) || !at.known || !from.known || !(from.root == at.root) ||
			from.offset != at.offset)
			continue;
		BlockId p = pre;
		for (unsigned steps = 0; ok && p != c_.block_of[load]; ++steps)
		{
			for (InstId j = body_.blocks[p].first; j != kNoId && ok; j = body_.instructions[j].next)
				ok = quiet(body_.instructions[j]);
			ok = ok && steps < kMaxDepth && cfg.pred_count(p) == 1;
			if (ok)
				p = cfg.preds[cfg.pred_first[p]];
		}
		for (InstId j = read.next; j != kNoId && ok; j = body_.instructions[j].next)
			ok = quiet(body_.instructions[j]);
		if (!ok)
			continue;
		// The phi goes; its readers read the location at the block's start.
		InstId after = prev;
		for (InstId j = i; j != kNoId && body_.instructions[j].op == Opcode::Phi; j = body_.instructions[j].next)
			after = j;
		unlink_after(body_, b, prev, i);
		if (after == i)
			after = prev;
		Instruction again = read;
		again.next = kNoId;
		again.ops[0] = written.ops[1];
		const InstId id = append_instruction(body_, again);
		const TempId result = append_temp(body_, phi.type, id);
		body_.instructions[id].result = result;
		insert_after(body_, b, after, id);
		for (Instruction& inst : body_.instructions)
			for_each_operand(body_, inst, [&](Value& v) {
				if (v == Value::temp(phi.result))
					v = Value::temp(result);
			});
		map_instruction_blocks(body_, c_.block_of);
		count_uses(body_, uses_);
		return true;
	}
	return false;
}

// The lane form of an integer reduction that regroups exactly: addition
// modulo its width and the bitwise operations do, floating addition and
// subtraction do not.
bool reduction_lanes(BinaryOp op, VectorOp& out)
{
	switch (op)
	{
	case BinaryOp::Add:
		out = VectorOp::Paddd;
		return true;
	case BinaryOp::And:
		out = VectorOp::Pand;
		return true;
	case BinaryOp::Or:
		out = VectorOp::Por;
		return true;
	case BinaryOp::Xor:
		out = VectorOp::Pxor;
		return true;
	default:
		return false;
	}
}

// Whether v is an operation of `last`'s kind in b, read once.
bool BlockLanes::link(BlockId b, Value v, const Instruction& last) const
{
	if (!same_block(b, v) || uses_[v.index] != 1)
		return false;
	const Instruction& inst = body_.instructions[body_.temps[v.index].def];
	return inst.op == Opcode::Binary && inst.sub == last.sub && inst.type == last.type;
}

// The four contributions of a run of four operations of `last`'s kind from
// the carry to `last`, each adding one: `ops_` gets the four, from the carry
// on.
bool BlockLanes::run_parts(BlockId b, InstId id, Value& carry, Value* parts)
{
	const Instruction& last = body_.instructions[id];
	carry = Value::temp(last.result);
	ops_.clear();
	for (unsigned lane = 4; lane-- > 0;)
	{
		if (!same_block(b, carry))
			return false;
		const InstId def = body_.temps[carry.index].def;
		const Instruction& add = body_.instructions[def];
		if (add.op != Opcode::Binary || add.sub != last.sub || add.type != last.type ||
			(lane != 3 && uses_[carry.index] != 1))
			return false;
		// The earlier operation is the recurrence; its other operand is
		// this pass's contribution. Either source operand order is accepted.
		unsigned side = 0;
		if (lane == 0 && !same_block(b, add.ops[1]))
			side = 1;
		else if (same_block(b, add.ops[0]) && same_block(b, add.ops[1]) &&
			position_[body_.temps[add.ops[1].index].def] < position_[body_.temps[add.ops[0].index].def])
			side = 1;
		parts[lane] = add.ops[1 - side];
		carry = add.ops[side];
		ops_.insert(ops_.begin(), def);
	}
	return true;
}

// The four contributions of `last` = carry op tree, where three operations
// of its kind combine the four in any shape (`s += f(a) + f(b) + f(c) +
// f(d)`): the carry is the earlier operand, as for a run. The contributions
// are the tree's leaves in operand order, and all share one operation, which
// tells the tree's operations from contributions of the same kind. `ops_`
// gets the three and `last`.
bool BlockLanes::tree_parts(BlockId b, InstId id, Value& carry, Value* parts)
{
	const Instruction& last = body_.instructions[id];
	const unsigned side = !same_block(b, last.ops[1]) ||
			(same_block(b, last.ops[0]) &&
				position_[body_.temps[last.ops[1].index].def] < position_[body_.temps[last.ops[0].index].def])
		? 1
		: 0;
	carry = last.ops[side];
	const Value top = last.ops[1 - side];
	if (!link(b, top, last))
		return false;
	const Instruction& tree = body_.instructions[body_.temps[top.index].def];
	// Which operands of the tree are operations of it: both (a balanced
	// tree), or one, which has one (a chain), in either order.
	for (unsigned shape = 0; shape < 5; ++shape)
	{
		Value inner[2] = { Value::none(), Value::none() };
		if (shape == 0)
		{
			inner[0] = tree.ops[0];
			inner[1] = tree.ops[1];
		}
		else
		{
			inner[0] = tree.ops[(shape - 1) / 2];
			if (link(b, inner[0], last))
				inner[1] = body_.instructions[body_.temps[inner[0].index].def].ops[(shape - 1) % 2];
		}
		if (!link(b, inner[0], last) || !link(b, inner[1], last))
			continue;
		// (The leaves in operand order: a stack of what is left to visit.)
		unsigned count = 0;
		bool ok = true;
		Value pending[4] = { top };
		for (unsigned depth = 1; depth > 0 && ok;)
		{
			const Value v = pending[--depth];
			if (v == top || v == inner[0] || v == inner[1])
			{
				const Instruction& inst = body_.instructions[body_.temps[v.index].def];
				pending[depth++] = inst.ops[1];
				pending[depth++] = inst.ops[0];
			}
			else if (count == 4 || !same_block(b, v))
				ok = false;
			else
				parts[count++] = v;
		}
		for (unsigned lane = 1; ok && count == 4 && lane < 4; ++lane)
		{
			const Instruction& a = body_.instructions[body_.temps[parts[0].index].def];
			const Instruction& x = body_.instructions[body_.temps[parts[lane].index].def];
			ok = x.op == a.op && x.sub == a.sub && x.type == a.type;
		}
		if (!ok || count != 4)
			continue;
		// (The operation regroups exactly, so its leaves take the lanes in
		// the order the block computes them, as the elements are read.)
		for (unsigned lane = 1; lane < 4; ++lane)
			for (unsigned k = lane;
				k > 0 && position_[body_.temps[parts[k].index].def] < position_[body_.temps[parts[k - 1].index].def];
				--k)
				std::swap(parts[k], parts[k - 1]);
		ops_.assign(
			{ body_.temps[inner[1].index].def, body_.temps[inner[0].index].def, body_.temps[top.index].def, id });
		return true;
	}
	return false;
}

// Pack four contributions of an integer reduction (one operation of
// reduction_lanes): a run or a tree of operations of one kind. The lanes are
// combined on each pass and the scalar carry stays scalar, unless the sum is
// a loop's that kept_sum keeps in lanes. This also handles a loop the early
// unroller expanded.
bool BlockLanes::reduction(BlockId b)
{
	const std::vector<Stored> stores;
	for (InstId id = body_.blocks[b].first; id != kNoId; id = body_.instructions[id].next)
	{
		const Instruction last = body_.instructions[id];
		VectorOp op = VectorOp::Paddd;
		if (last.op != Opcode::Binary || !reduction_lanes(static_cast<BinaryOp>(last.sub), op) ||
			(last.type.kind() != TypeKind::I32 && last.type.kind() != TypeKind::U32))
			continue;
		Value carry, parts[kMaxLanes];
		const bool run = run_parts(b, id, carry, parts);
		if (!run && !tree_parts(b, id, carry, parts))
			continue;
		lanes_ = 4;
		lane_type_ = last.type;
		nodes_.clear();
		shared_ = 0;
		const int root = build(b, parts, stores, 0, id, 0);
		if (root < 0)
			continue;
		const int gain = net_gain(b, &root, 1);
		if (gain <= 0 || nodes_[root].kind < NodeKind::Loaded)
			continue;
		// Four scalar operations become one in lanes where the loop keeps
		// them; otherwise two shuffle/combine pairs, an extract and the carry
		// operation: five more instructions than store roots.
		const InstId phi = kept_sum(b, carry, id, run ? 4 : 1);
		if (gain <= (phi != kNoId ? 0 : 5))
			continue;
		block_ = b;
		tail_ = previous_in_block(body_, b, id);
		// (A splat offset joins the scalar carry before the lanes, which keeps
		// a product next to the addition that accumulates it.)
		int varying = root;
		Value offset = Value::none();
		if (phi != kNoId && op == VectorOp::Paddd && splat_offset(root, varying, offset))
		{
			Instruction add = make_instruction(Opcode::Binary, last.type);
			add.sub = last.sub;
			add.ops[0] = carry;
			add.ops[1] = offset;
			carry = emit(add, last.type);
		}
		const Value lanes = make(varying);
		if (phi != kNoId)
		{
			keep(b, phi, carry, id, lanes, op);
			return true;
		}
		const Value part = fold_lanes(lanes, op, last.type);
		body_.instructions[id].ops[0] = carry;
		body_.instructions[id].ops[1] = part;
		body_.instructions[id].flags &= static_cast<uint8_t>(~IF_NO_WRAP);
		return true;
	}
	return false;
}

// A kept sum's pack that adds a literal splat c to what varies: the lanes
// add 4c to the sum, which the scalar carry can take (addition regroups
// exactly), so the carried vectors take only `varying`, and a product
// accumulates straight into them. `offset` is 4c.
bool BlockLanes::splat_offset(int root, int& varying, Value& offset)
{
	const Node& node = nodes_[root];
	if (node.kind != NodeKind::Operation || node.op != VectorOp::Paddd || node.left < 0 || node.right < 0)
		return false;
	for (const int side : { node.left, node.right })
	{
		Constant c;
		if (nodes_[side].kind != NodeKind::Splat || !literal_constant(body_, nodes_[side].lanes[0], c) ||
			c.kind != ValueKind::Integer)
			continue;
		const uint32_t four = static_cast<uint32_t>(c.bits.low) * 4u;
		offset = integer_value(body_, normalize_integer(lane_type_, integer_literal(static_cast<int64_t>(four))));
		varying = side == node.left ? node.right : node.left;
		return true;
	}
	return false;
}

// The four i32 lanes of `lanes` combined by `op` into one `type` scalar,
// after tail_. `reads`, if given, gets the two instructions that read
// `lanes`.
Value BlockLanes::fold_lanes(Value lanes, VectorOp op, Type type, InstId* reads)
{
	const Value upper = vector(VectorOp::Pshufd, lanes, Value::none(), 0x4e);
	const Value half = vector(op, lanes, upper);
	if (reads != nullptr)
	{
		reads[0] = body_.temps[upper.index].def;
		reads[1] = body_.temps[half.index].def;
	}
	const Value odd = vector(VectorOp::Pshufd, half, Value::none(), 0xb1);
	const Value all = vector(op, half, odd);
	const Value scalar = vector(VectorOp::Toi32, all);
	Instruction cast = make_instruction(Opcode::Copy, type);
	cast.ops[0] = scalar;
	return emit(cast, type);
}

// The phi of a loop sum `b` keeps in lanes, or kNoId. `b` is a loop of one
// block with one edge out. The sum runs from a phi of `b` with two inputs,
// read once, through operations of `last`'s kind, each read once by the
// next, to the phi's input from `b`, which `b` reads in that phi alone:
// whatever reads the sum after the loop reads it on the edge out. `carry`
// lies on that run and `last` `steps` operations after it. Each pass then
// combines its lanes with a vector the loop carries, and one fold of that
// vector on the edge out completes the scalar; the operations regroup
// exactly (reduction_lanes).
InstId BlockLanes::kept_sum(BlockId b, Value carry, InstId last, unsigned steps) const
{
	const Instruction& term = body_.instructions[body_.blocks[b].last];
	if (term.op != Opcode::Branch || (term.ops[1].index == b) == (term.ops[2].index == b))
		return kNoId;
	const Instruction& tail = body_.instructions[last];
	for (InstId p = body_.blocks[b].first; p != kNoId && body_.instructions[p].op == Opcode::Phi;
		p = body_.instructions[p].next)
	{
		const Instruction& phi = body_.instructions[p];
		if (phi.type != tail.type || phi.extra_count != 4 || uses_[phi.result] != 1)
			continue;
		const Value back = phi_incoming(body_, phi, b);
		Value at = Value::temp(phi.result);
		int after = at == carry ? 0 : -1; // operations from the carry
		bool through = false;
		unsigned links = 0;
		for (InstId i = phi.next; i != kNoId && links < kSumLinks; i = body_.instructions[i].next)
		{
			const Instruction& inst = body_.instructions[i];
			if (inst.op != Opcode::Binary || inst.sub != tail.sub || inst.type != tail.type ||
				(!(inst.ops[0] == at) && !(inst.ops[1] == at)) || inst.ops[0] == inst.ops[1] || uses_[at.index] != 1)
				continue;
			at = Value::temp(inst.result);
			++links;
			after = after >= 0 ? after + 1 : at == carry ? 0 : -1;
			through = through || (i == last && after == static_cast<int>(steps));
		}
		if (!through || !(at == back))
			continue;
		unsigned reads = 0;
		for (InstId i = body_.blocks[b].first; i != kNoId; i = body_.instructions[i].next)
			for_each_operand(body_, body_.instructions[i], [&](const Value& v) { reads += v == back; });
		if (reads == 1)
			return p;
	}
	return kNoId;
}

// A block on the edge from `from` to `to`.
BlockId BlockLanes::split_exit(BlockId from, BlockId to)
{
	const BlockId exit = append_block(body_, BlockKind::LoopExit);
	Instruction jump = make_instruction(Opcode::Jump, Type::scalar(TypeKind::Void));
	jump.ops[0] = Value::block(to);
	jump.location = body_.instructions[body_.blocks[from].last].location;
	const InstId id = append_instruction(body_, jump);
	insert_after(body_, exit, kNoId, id);
	c_.block_of.resize(body_.instructions.size(), kNoId);
	c_.block_of[id] = exit;
	for_each_successor(body_, body_.instructions[body_.blocks[from].last], [&](BlockId& t) {
		if (t == to)
			t = exit;
	});
	rename_phi_incoming(body_, to, from, exit);
	const auto at = std::find(body_.layout.begin(), body_.layout.end(), from);
	body_.layout.insert(at == body_.layout.end() ? at : at + 1, exit);
	c_.invalidate_cfg();
	return exit;
}

// Keeps the sum of `phi` in lanes (kept_sum): the operations of the pack
// (ops_) leave the scalar run, and `lanes` joins a vector the loop carries.
// The first pack of a sum makes the first carried vector, starting from the
// operation's identity, and its fold on the edge out; later packs feed the
// carried vectors in turn (feed).
void BlockLanes::keep(BlockId b, InstId phi, Value carry, InstId last, Value lanes, VectorOp op)
{
	const Instruction sum = body_.instructions[phi];
	const uint8_t sub = body_.instructions[last].sub;
	const TempId result = body_.instructions[last].result;
	for (const InstId link : ops_)
	{
		unlink_after(body_, b, previous_in_block(body_, b, link), link);
		c_.block_of[link] = kNoId;
	}
	replace_all_uses(body_, result, carry);
	block_ = b;
	for (Kept& known : kept_)
		if (known.phi == sum.result)
		{
			feed(known, b, lanes, op);
			count_uses(body_, uses_);
			return;
		}
	Kept known;
	known.phi = sum.result;
	const Value entry = body_.operands[sum.extra_first] == Value::block(b) ? body_.operands[sum.extra_first + 2]
																		   : body_.operands[sum.extra_first];
	known.entry = entry.index;
	const InstId at = tail_;
	block_ = known.entry;
	tail_ = previous_in_block(body_, known.entry, body_.blocks[known.entry].last);
	const Value zero = vector(VectorOp::Pzero, Value::none());
	known.identity = op == VectorOp::Pand ? vector(VectorOp::Pcmpeqd, zero, zero) : zero;
	block_ = b;
	tail_ = at;
	const Value next = carried_vector(b, known.entry, known.identity, lanes, op);
	known.next[0] = next;
	known.count = known.fed = 1;
	const Instruction& term = body_.instructions[body_.blocks[b].last];
	const BlockId to = term.ops[1].index == b ? term.ops[2].index : term.ops[1].index;
	const InstId first = body_.blocks[to].first;
	const bool alone = c_.ensure_cfg_light().pred_count(to) == 1 && first != kNoId &&
		body_.instructions[first].op != Opcode::Phi;
	known.exit = block_ = alone ? to : split_exit(b, to);
	tail_ = kNoId;
	known.joined = next;
	const Value scalar = fold_lanes(next, op, sum.type, known.fold);
	const Value back = phi_incoming(body_, body_.instructions[phi], b);
	Instruction total = make_instruction(Opcode::Binary, sum.type);
	total.sub = sub;
	total.ops[0] = back;
	total.ops[1] = scalar;
	const Value whole = emit(total, sum.type);
	for (const BlockId x : body_.layout)
		if (x != b)
			for (InstId i = body_.blocks[x].first; i != kNoId; i = body_.instructions[i].next)
				if (i != tail_)
					for_each_operand(body_, body_.instructions[i], [&](Value& v) {
						if (v == back)
							v = whole;
					});
	kept_.push_back(known);
	count_uses(body_, uses_);
}

// A pack of a kept sum after its first: the next carried vector in turn
// takes `lanes`, where they are made or after what that vector carries if a
// later pack made it. A carried vector that does not exist yet starts from
// the identity, and the edge out combines it with the others before the
// fold.
void BlockLanes::feed(Kept& known, BlockId b, Value lanes, VectorOp op)
{
	const unsigned turn = known.fed++ % kKeptVectors;
	if (turn == known.count)
	{
		const Value next = carried_vector(b, known.entry, known.identity, lanes, op);
		known.next[known.count++] = next;
		block_ = known.exit;
		tail_ = previous_in_block(body_, known.exit, known.fold[0]);
		const Value joined = vector(op, known.joined, next);
		body_.instructions[known.fold[0]].ops[0] = joined;
		body_.instructions[known.fold[1]].ops[0] = joined;
		known.joined = joined;
		return;
	}
	const Value carried = known.next[turn];
	for (InstId i = tail_; i != kNoId; i = body_.instructions[i].next)
		if (i == body_.temps[carried.index].def)
			tail_ = i;
	const Value next = vector(op, carried, lanes);
	const InstId made = body_.temps[next.index].def;
	replace_all_uses(body_, carried.index, next);
	body_.instructions[made].ops[0] = carried;
	if (known.joined == carried)
		known.joined = next;
	known.next[turn] = next;
}

// Makes a vector phi of `b` that starts from `identity` on the edge from
// `entry` and, after tail_, its combination with `lanes`, which the phi takes
// on the back edge. Returns the combination.
Value BlockLanes::carried_vector(BlockId b, BlockId entry, Value identity, Value lanes, VectorOp op)
{
	const Type v128 = Type::scalar(TypeKind::V128);
	const InstId acc = append_instruction(body_, make_instruction(Opcode::Phi, v128));
	const TempId carried = append_temp(body_, v128, acc);
	body_.instructions[acc].result = carried;
	insert_after(body_, b, kNoId, acc);
	c_.block_of.resize(body_.instructions.size(), kNoId);
	c_.block_of[acc] = b;
	block_ = b;
	const Value next = vector(op, Value::temp(carried), lanes);
	const Value inputs[4] = { Value::block(b), next, Value::block(entry), identity };
	body_.instructions[acc].extra_first = append_operands(body_, inputs, 4);
	body_.instructions[acc].extra_count = 4;
	return next;
}

// The runs of adjacent stores of one type that may form a group, from the
// stores sorted by address: each run's stores are laid out in `lanes` from
// its index in `runs`. Any store to a run's first address may begin it and
// any store to its last address end it (each tried in block order), so no
// choice depends on how stores to one address sort; the addresses between
// have one store each.
void BlockLanes::find_runs(
	const std::vector<Stored>& stores, std::vector<Stored>& lanes, std::vector<size_t>& runs) const
{
	// Where each address's stores begin, then the end.
	std::vector<size_t> address;
	for (size_t i = 0; i < stores.size(); ++i)
		if (i == 0 || !(stores[i].at.root == stores[i - 1].at.root) || stores[i].at.offset != stores[i - 1].at.offset)
			address.push_back(i);
	address.push_back(stores.size());
	for (size_t a = 0; a + 1 < address.size(); ++a)
		for (size_t first = address[a]; first < address[a + 1]; ++first)
		{
			const Type type = body_.instructions[stores[first].id].type;
			const unsigned count = type.kind() == TypeKind::F64 ? 2 : 4;
			const int64_t step = type.kind() == TypeKind::F64 ? 8 : 4;
			bool run = a + count < address.size();
			for (unsigned lane = 1; lane < count && run; ++lane)
			{
				const Stored& there = stores[address[a + lane]];
				run = there.at.root == stores[first].at.root &&
					there.at.offset == stores[first].at.offset + lane * step &&
					(lane + 1 == count ||
						(address[a + lane + 1] - address[a + lane] == 1 && body_.instructions[there.id].type == type));
			}
			for (size_t last = run ? address[a + count - 1] : 0; run && last < address[a + count]; ++last)
			{
				if (body_.instructions[stores[last].id].type != type || runs.size() >= kBlockStores)
					continue;
				runs.push_back(lanes.size());
				lanes.push_back(stores[first]);
				for (unsigned lane = 1; lane + 1 < count; ++lane)
					lanes.push_back(stores[address[a + lane]]);
				lanes.push_back(stores[last]);
			}
		}
}

bool BlockLanes::block(BlockId b)
{
	std::vector<Stored> stores;
	uint32_t position = 0;
	for (InstId i = body_.blocks[b].first; i != kNoId; i = body_.instructions[i].next)
	{
		const Instruction& inst = body_.instructions[i];
		position_[i] = position++;
		if (inst.op == Opcode::Store && (inst.flags & IF_VOLATILE) == 0 &&
			(inst.type.kind() == TypeKind::F64 || inst.type.kind() == TypeKind::F32 ||
				inst.type.kind() == TypeKind::I32 || inst.type.kind() == TypeKind::U32) &&
			stores.size() < kBlockStores)
		{
			const Located at = locate_steps(body_, inst.ops[1]);
			if (at.known)
				stores.push_back(Stored{ i, at });
		}
	}
	if (reduction(b))
		return true;
	if (stores.size() < 2)
		return false;
	// Stores to one address stay in block order.
	std::sort(stores.begin(), stores.end(), [this](const Stored& a, const Stored& b) {
		if (a.at.root.kind != b.at.root.kind)
			return a.at.root.kind < b.at.root.kind;
		if (a.at.root.index != b.at.root.index)
			return a.at.root.index < b.at.root.index;
		if (a.at.offset != b.at.offset)
			return a.at.offset < b.at.offset;
		return position_[a.id] < position_[b.id];
	});
	std::vector<Stored> lanes;
	std::vector<size_t> runs;
	find_runs(stores, lanes, runs);
	if (!runs.empty() && reload(b, lanes, runs))
		return true;
	for (size_t r = 0; r < runs.size(); ++r)
	{
		const Type type = body_.instructions[lanes[runs[r]].id].type;
		lanes_ = type.kind() == TypeKind::F64 ? 2 : 4;
		lane_type_ = type;
		// (A group changes the block's order: it is read again.)
		if (group(b, lanes, runs, r))
			return true;
	}
	return c_.costs.pairs_float_stores && pair_floats(b, stores);
}

// Where the target pairs float stores (OptimizationModel::pairs_float_stores):
// two computed float stores to adjacent addresses that pack no further become
// one eight-byte store of their lanes, just before the later one, when nothing
// the earlier one passes reads or writes what it writes. The address of each
// has no other store in the block. An eight-byte copy of the pair then reads
// one store.
bool BlockLanes::pair_floats(BlockId b, const std::vector<Stored>& stores)
{
	const auto computed = [&](Value v) {
		if (!v.is(ValueKind::Temp) || v.index >= body_.temps.size() || body_.temps[v.index].def == kNoId)
			return false;
		const Opcode op = body_.instructions[body_.temps[v.index].def].op;
		return (op == Opcode::Binary || op == Opcode::Unary || op == Opcode::Convert) && v.index < uses_.size() &&
			uses_[v.index] == 1;
	};
	lanes_ = 2;
	lane_type_ = Type::scalar(TypeKind::F32);
	for (size_t i = 0; i + 1 < stores.size(); ++i)
	{
		const Stored& low = stores[i];
		const Stored& high = stores[i + 1];
		const Instruction& first = body_.instructions[low.id];
		const Instruction& second = body_.instructions[high.id];
		// (A literal stores as an immediate and a loaded float is a copy: it
		// would take a load into lanes or gain nothing. A value read again
		// would take a copy of its register.)
		if (first.type.kind() != TypeKind::F32 || second.type.kind() != TypeKind::F32 || !computed(first.ops[0]) ||
			!computed(second.ops[0]) || !(high.at.root == low.at.root) || high.at.offset != low.at.offset + 4 ||
			(i > 0 && stores[i - 1].at.root == low.at.root && stores[i - 1].at.offset == low.at.offset) ||
			(i + 2 < stores.size() && stores[i + 2].at.root == high.at.root &&
				stores[i + 2].at.offset == high.at.offset))
			continue;
		const InstId last = position_[low.id] < position_[high.id] ? high.id : low.id;
		const std::vector<Stored> pair = { low, high };
		if (!stores_move(pair, 0, last))
			continue;
		// (The values are read before the new instructions move the body.)
		const Value value0 = first.ops[0], value1 = second.ops[0];
		block_ = b;
		tail_ = previous_in_block(body_, b, last);
		const Value lane0 = vector(VectorOp::Fromf32, phi_input(body_, lane_type_, value0));
		const Value lane1 = vector(VectorOp::Fromf32, phi_input(body_, lane_type_, value1));
		const Value lanes = vector(VectorOp::Unpcklps, lane0, lane1);
		Instruction store = make_instruction(Opcode::Store, Type::scalar(TypeKind::F64));
		store.ops[0] = vector(VectorOp::Tof64, lanes);
		store.ops[1] = body_.instructions[low.id].ops[1];
		store.location = body_.instructions[low.id].location;
		emit(store, Type::scalar(TypeKind::Void));
		for (const Stored& s : pair)
		{
			unlink_after(body_, b, previous_in_block(body_, b, s.id), s.id);
			c_.block_of[s.id] = kNoId;
		}
		return true;
	}
	return false;
}

bool BlockLanes::run()
{
	// Avoid planning when there are neither packable stores nor integer sums.
	unsigned stores = 0, adds = 0, float_phis = 0;
	for (const Instruction& inst : body_.instructions)
	{
		stores += inst.op == Opcode::Store && (inst.type.is_float() || lane_bytes(inst.type) == 4);
		VectorOp op;
		adds += inst.op == Opcode::Binary && reduction_lanes(static_cast<BinaryOp>(inst.sub), op) &&
			(inst.type.kind() == TypeKind::I32 || inst.type.kind() == TypeKind::U32);
		float_phis += inst.op == Opcode::Phi && inst.type.kind() == TypeKind::F64;
	}
	if (stores < 2 && adds < 4)
		return false;
	position_.assign(body_.instructions.size(), 0);
	count_uses(body_, uses_);
	escaped_ = escaped_slots(body_);
	map_instruction_blocks(body_, c_.block_of);
	bool changed = false;
	// (A kept sum may add a block on its loop's edge out.)
	for (size_t n = 0; n < body_.layout.size(); ++n)
		for (unsigned round = 0; round < kBlockStores && block(body_.layout[n]); ++round)
		{
			position_.resize(body_.instructions.size(), 0);
			changed = true;
		}
	if (changed)
	{
		c_.invalidate_block_of();
		c_.invalidate_uses();
	}
	return (float_phis >= kMinLoopF64Phis && pack_loop_lanes(c_)) || changed;
}

} // namespace

bool pack_block_lanes(FunctionContext& context)
{
	BlockLanes pass(context);
	return pass.run();
}

} // namespace opt
