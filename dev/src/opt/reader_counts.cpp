#include "opt/reader_counts.h"

#include <algorithm>
#include <cstdio>
#include <cstdlib>

namespace opt {

using namespace lowir;

namespace {

// A count that has absorbed more than it can hold (it stays above any
// reader count a body can have).
const uint32_t kUnknownReaders = 0x7fffffffu;

uint32_t plus(uint32_t a, uint32_t b)
{
	return static_cast<uint32_t>(std::min<uint64_t>(uint64_t(a) + b, kUnknownReaders));
}

} // namespace

class ReaderCounts::Tally
{
public:
	Tally(const FunctionBody& body, std::vector<Value>& replacements) : body_(body), replacements_(replacements) {}
	Reports& reports() { return reports_; }
	uint32_t readers(TempId temp, InstId visited, BlockId block, const Cfg& cfg, bool verify);
	void count_linked(const Cfg& cfg);
	uint32_t readers_now(TempId temp, bool verify);
	void set_marker(InstId visited, BlockId block)
	{
		marker_block_ = block;
		reports_.marker = visited;
	}

private:
	struct Record // an instruction's operands as counted: ops, and extras_ from `extra_at`
	{
		Value ops[3];
		uint32_t extra_at, extra_count;
	};
	// A value through the replacements (a chain of one step here).
	Value resolved(Value v)
	{
		if (!v.is(ValueKind::Temp) || v.index >= replacements_.size() || replacements_[v.index].is(ValueKind::None))
			return v;
		const Value r = replacements_[v.index];
		return r.is(ValueKind::Temp) && r.index < replacements_.size() && !replacements_[r.index].is(ValueKind::None)
			? resolve_chain(v)
			: r;
	}
	Value resolve_chain(Value v);
	// One more (or one fewer) reader of `r`, a resolved value; a count never
	// drops below zero (it stays an upper bound).
	void more(Value r)
	{
		if (r.is(ValueKind::Temp) && r.index < counts_.size() && counts_[r.index] < kUnknownReaders)
			++counts_[r.index];
	}
	void fewer(Value r)
	{
		if (r.is(ValueKind::Temp) && r.index < counts_.size() && counts_[r.index] != 0 &&
			counts_[r.index] != kUnknownReaders)
			--counts_[r.index];
	}
	// A slot that read `was` reads `now`.
	void exchange(Value was, Value now)
	{
		const Value from = resolved(was), to = resolved(now);
		if (from == to)
			return;
		more(to);
		fewer(from);
	}
	void settle(TempId temp);
	bool recount_block(BlockId block, InstId from, InstId until);
	bool recount_walked(InstId visited, BlockId block);
	void record(InstId id);
	void record_apart(InstId id);
	void recount(InstId id);
	void recount_extras(InstId id);
	void uncount(InstId id);
	const FunctionBody& body_;
	std::vector<Value>& replacements_;
	Reports reports_;
	std::vector<uint32_t> counts_;
	std::vector<Record> records_;    // per instruction counted (below records_.size())
	std::vector<Value> extras_;      // the body's operands at the first count, then records' own
	uint32_t shared_end_ = 0;        // the end of that copy
	std::vector<uint32_t> position_; // per block: its dom_in (kNoId: not walked)
	std::vector<BlockId> walk_;      // per dom_in: its block (kNoId: none)
	BlockId marker_block_ = kNoId;   // the block of the last readers()
};

// (Their chains shortened as the pass's own resolution does.)
Value ReaderCounts::Tally::resolve_chain(Value v)
{
	Value r = v;
	while (r.is(ValueKind::Temp) && r.index < replacements_.size() && !replacements_[r.index].is(ValueKind::None))
		r = replacements_[r.index];
	while (v.is(ValueKind::Temp) && v.index < replacements_.size() && !replacements_[v.index].is(ValueKind::None))
	{
		const Value next = replacements_[v.index];
		replacements_[v.index] = r;
		v = next;
	}
	return r;
}

// The readers of `temp` read its replacement from here on.
void ReaderCounts::Tally::settle(TempId temp)
{
	if (temp >= counts_.size() || counts_[temp] == 0)
		return;
	const Value target = resolved(Value::temp(temp));
	if (target.is(ValueKind::Temp) && target.index == temp)
		return;
	if (target.is(ValueKind::Temp) && target.index < counts_.size())
		counts_[target.index] = plus(counts_[target.index], counts_[temp]);
	counts_[temp] = 0;
}

// Records `id`'s operands, its extras where they are in the copy of the
// body's operands.
void ReaderCounts::Tally::record(InstId id)
{
	const Instruction& inst = body_.instructions[id];
	Record& r = records_[id];
	for (unsigned k = 0; k < 3; ++k)
		r.ops[k] = inst.ops[k];
	r.extra_at = inst.extra_first;
	r.extra_count = inst.extra_count;
}

// Records `id`'s operands, its extras copied to the end of extras_ (its
// own).
void ReaderCounts::Tally::record_apart(InstId id)
{
	const Instruction& inst = body_.instructions[id];
	record(id);
	records_[id].extra_at = static_cast<uint32_t>(extras_.size());
	for (uint32_t k = 0; k < inst.extra_count; ++k)
		extras_.push_back(body_.operands[inst.extra_first + k]);
}

// The readers over linked instructions, exactly: each operand slot counted
// under its temporary, then each replaced temporary's count moved to its
// value (one resolution per temporary). An unlinked instruction is recorded
// with no operands.
void ReaderCounts::Tally::count_linked(const Cfg& cfg)
{
	position_.assign(body_.blocks.size(), kNoId);
	walk_.assign(2 * body_.blocks.size() + 1, kNoId);
	for (BlockId b = 0; b < body_.blocks.size() && b < cfg.dom_in.size(); ++b)
		if (cfg.reachable(b) && cfg.dom_in[b] < walk_.size())
		{
			position_[b] = cfg.dom_in[b];
			walk_[cfg.dom_in[b]] = b;
		}
	reports_.edited.clear();
	reports_.removed.clear();
	reports_.replaced.clear();
	counts_.assign(body_.temps.size(), 0);
	records_.assign(body_.instructions.size(), Record{ { Value::none(), Value::none(), Value::none() }, 0, 0 });
	extras_ = body_.operands;
	shared_end_ = static_cast<uint32_t>(extras_.size());
	for (BlockId b : body_.layout)
		for (InstId i = body_.blocks[b].first; i != kNoId; i = body_.instructions[i].next)
		{
			record(i);
			for_each_operand(body_, body_.instructions[i], [&](const Value& v) {
				if (v.is(ValueKind::Temp) && v.index < counts_.size())
					++counts_[v.index];
			});
		}
	for (TempId t = 0; t < counts_.size() && t < replacements_.size(); ++t)
		if (counts_[t] != 0 && !replacements_[t].is(ValueKind::None))
			settle(t);
}

// The counts take `id`'s operands now for those recorded. An operand still
// the recorded one in its place is counted where it was (a replacement since
// moved its count).
void ReaderCounts::Tally::recount(InstId id)
{
	const Instruction& inst = body_.instructions[id];
	Record& r = records_[id];
	for (unsigned k = 0; k < 3; ++k)
		if (!(inst.ops[k] == r.ops[k]))
		{
			exchange(r.ops[k], inst.ops[k]);
			r.ops[k] = inst.ops[k];
		}
	if (inst.extra_count == 0 && r.extra_count == 0)
		return;
	bool same = inst.extra_count == r.extra_count;
	for (uint32_t k = 0; same && k < inst.extra_count; ++k)
		same = body_.operands[inst.extra_first + k] == extras_[r.extra_at + k];
	if (!same)
		recount_extras(id);
}

void ReaderCounts::Tally::recount_extras(InstId id)
{
	const Instruction& inst = body_.instructions[id];
	Record& r = records_[id];
	const uint32_t count = inst.extra_count;
	const uint32_t common = std::min(count, r.extra_count);
	for (uint32_t k = 0; k < common; ++k)
		if (!(extras_[r.extra_at + k] == body_.operands[inst.extra_first + k]))
			exchange(extras_[r.extra_at + k], body_.operands[inst.extra_first + k]);
	for (uint32_t k = common; k < count; ++k)
		more(resolved(body_.operands[inst.extra_first + k]));
	for (uint32_t k = common; k < r.extra_count; ++k)
		fewer(resolved(extras_[r.extra_at + k]));
	// (The copy of the body's operands stays as it was: records may share
	// it.)
	if (r.extra_at < shared_end_ || count > r.extra_count)
		r.extra_at = static_cast<uint32_t>(extras_.size());
	for (uint32_t k = 0; k < count; ++k)
		if (r.extra_at + k < extras_.size())
			extras_[r.extra_at + k] = body_.operands[inst.extra_first + k];
		else
			extras_.push_back(body_.operands[inst.extra_first + k]);
	r.extra_count = count;
}

// The counts drop `id`'s recorded operands (it has left the body).
void ReaderCounts::Tally::uncount(InstId id)
{
	Record& r = records_[id];
	for (unsigned k = 0; k < 3; ++k)
	{
		if (r.ops[k].is(ValueKind::Temp))
			fewer(resolved(r.ops[k]));
		r.ops[k] = Value::none();
	}
	for (uint32_t k = 0; k < r.extra_count; ++k)
		if (extras_[r.extra_at + k].is(ValueKind::Temp))
			fewer(resolved(extras_[r.extra_at + k]));
	r.extra_count = 0;
}

// Recounts `block` from `from` (kNoId: its first instruction) to `until`
// (kNoId: its last), or false when `until` is not there.
bool ReaderCounts::Tally::recount_block(BlockId block, InstId from, InstId until)
{
	for (InstId i = from == kNoId ? body_.blocks[block].first : from; i != kNoId; i = body_.instructions[i].next)
	{
		recount(i);
		if (i == until)
			return true;
	}
	return until == kNoId;
}

// Recounts what the walk has visited since the last readers(), or false
// when it is not as recorded.
bool ReaderCounts::Tally::recount_walked(InstId visited, BlockId block)
{
	const uint32_t from = marker_block_ < position_.size() ? position_[marker_block_] : kNoId;
	const uint32_t to = block < position_.size() ? position_[block] : kNoId;
	if (from == kNoId || to == kNoId || to < from)
		return false;
	if (to == from)
		return recount_block(block, reports_.marker, visited);
	for (uint32_t k = from; k < to; ++k)
		if (walk_[k] != kNoId)
			recount_block(walk_[k], kNoId, kNoId);
	return recount_block(block, kNoId, visited);
}

uint32_t ReaderCounts::Tally::readers(TempId temp, InstId visited, BlockId block, const Cfg& cfg, bool verify)
{
	if (counts_.size() < body_.temps.size())
		counts_.resize(body_.temps.size(), 0);
	// (Appended instructions first, linked or not: a later recount of one
	// finds it as recorded. Then replacements: a recount then finds each
	// count where its operand now resolves.)
	const InstId through = static_cast<InstId>(records_.size());
	records_.resize(body_.instructions.size());
	for (InstId i = through; i < records_.size(); ++i)
	{
		for_each_operand(body_, body_.instructions[i], [&](const Value& v) { more(resolved(v)); });
		record_apart(i);
	}
	for (const TempId t : reports_.replaced)
		settle(t);
	for (const InstId id : reports_.edited)
		recount(id);
	for (const InstId id : reports_.removed)
		uncount(id);
	reports_.edited.clear();
	reports_.removed.clear();
	reports_.replaced.clear();
	if (!recount_walked(visited, block))
		count_linked(cfg);
	// (The visited instruction's edits go on after this.)
	set_marker(visited, block);
	return readers_now(temp, verify);
}

uint32_t ReaderCounts::Tally::readers_now(TempId temp, bool verify)
{
	if (verify)
	{
		std::vector<uint32_t> fresh(body_.temps.size(), 0);
		for (BlockId b : body_.layout)
			for (InstId i = body_.blocks[b].first; i != kNoId; i = body_.instructions[i].next)
				for_each_operand(body_, body_.instructions[i], [&](const Value& v) {
					const Value r = resolved(v);
					if (r.is(ValueKind::Temp) && r.index < fresh.size())
						++fresh[r.index];
				});
		for (size_t t = 0; t < fresh.size(); ++t)
			if (fresh[t] > (t < counts_.size() ? counts_[t] : 0))
			{
				std::fprintf(stderr, "lowiropt verify: temporary %zu has %u readers, counted %u\n", t, fresh[t],
					t < counts_.size() ? counts_[t] : 0);
				std::exit(3);
			}
	}
	return temp < counts_.size() ? counts_[temp] : 0;
}

void ReaderCounts::release()
{
	delete tally_;
}

uint32_t ReaderCounts::readers(TempId temp, InstId visited, BlockId block, const Cfg& cfg, bool verify)
{
	if (tally_ != nullptr)
		return tally_->readers(temp, visited, block, cfg, verify);
	tally_ = new Tally(body_, replacements_);
	reports_ = &tally_->reports();
	tally_->count_linked(cfg);
	tally_->set_marker(visited, block);
	return tally_->readers_now(temp, verify);
}

} // namespace opt
