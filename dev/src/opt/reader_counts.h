#pragma once

#include "opt/function_ir.h"

namespace opt {

// The readers of each temporary while a pass walks a body over the dominator
// tree in preorder (cfg.dom_in), editing the instruction it visits: the
// operand slots of linked instructions, each counted under the value it
// resolves to through `replacements` (a temporary's value from here on; none
// when it keeps its own). The first readers() of a run counts them exactly,
// recording the operands it counted for each instruction. Each later
// readers() counts the instructions appended since the one before (linked or
// not) and recounts, against its record, each instruction the walk has
// visited since then: the earlier one's block from its visited instruction
// (the whole block once the walk has left it), the blocks between, and the
// current block up to the visited instruction. The pass reports each other
// instruction whose operands it changes, or that it moves back in its block
// (edited()), the visited instruction leaving the body (unlink()), and each
// replacement it makes (replaced()). A count may then exceed the readers (an
// appended instruction left unlinked, a reader unlinked without unlink()),
// never fall below them, so a count of one for a temporary that one
// instruction reads means no other reader. Where the walk is not as recorded
// (a block before the earlier one, or the visited instruction not after the
// earlier one in its block), readers() counts afresh. Until the first
// readers() of a run a report costs a test.
class ReaderCounts
{
public:
	ReaderCounts(const lowir::FunctionBody& body, std::vector<lowir::Value>& replacements)
		: body_(body), replacements_(replacements)
	{}
	~ReaderCounts()
	{
		if (tally_ != nullptr)
			release();
	}
	ReaderCounts(const ReaderCounts&) = delete;
	ReaderCounts& operator=(const ReaderCounts&) = delete;
	// The operands of `id` (not the visited one) have changed, or it has
	// moved back in its block.
	void edited(lowir::InstId id)
	{
		if (reports_ != nullptr)
			reports_->edited.push_back(id);
	}
	// The visited instruction leaves its block.
	void unlink(lowir::FunctionBody& body, lowir::BlockId block, lowir::InstId prev, lowir::InstId id)
	{
		if (reports_ != nullptr)
		{
			reports_->removed.push_back(id);
			if (id == reports_->marker)
				reports_->marker = prev;
		}
		unlink_after(body, block, prev, id);
	}
	// `temp` has a replacement (its readers read that from here on).
	void replaced(lowir::TempId temp)
	{
		if (reports_ != nullptr)
			reports_->replaced.push_back(temp);
	}
	// The readers of `temp`, asked while visiting `visited` in `block` (of
	// the walk over `cfg`). With `verify` every count is checked against a
	// fresh one, and a count below it stops the process (status 3).
	uint32_t readers(lowir::TempId temp, lowir::InstId visited, lowir::BlockId block, const Cfg& cfg, bool verify);

	class Tally; // the counts, from the first readers() of a run

private:
	// The reports since the last readers(), and where in its block to
	// recount from: its visited instruction, or the one before that once it
	// left (kNoId: the block's first).
	struct Reports
	{
		std::vector<lowir::InstId> edited, removed;
		std::vector<lowir::TempId> replaced;
		lowir::InstId marker = lowir::kNoId;
	};
	void release();
	const lowir::FunctionBody& body_;
	std::vector<lowir::Value>& replacements_;
	Tally* tally_ = nullptr;     // (made at the first readers(), released with this)
	Reports* reports_ = nullptr; // the tally's
};

} // namespace opt
