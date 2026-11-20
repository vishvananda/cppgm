#pragma once

#include <functional>

#include "opt/call_graph.h"
#include "opt/passes.h"

// Bounded inlining of direct calls (PA33 O1+). Three waves over the
// callee-first call graph (opt/call_graph.h):
//   ordinary   small callees within a per-caller growth budget; a loop may
//              absorb forwarding layers on its call cycle
//              (trivial leaves exempt), plus single-call discardable
//              callees within their own caller and unit budgets;
//   once       after pruning, the single-call policy alone with fresh
//              budgets (pruning dead callers exposes new single calls);
//   late       a fresh budget for small optimized bodies.
// A callee with EH instructions, va_start/va_arg or stack_alloc, a
// mismatched boundary, recursion, no_inline or GNU replaceability stays a
// call; a call in handler code needs a callee that cannot unwind. A
// variadic body that never reads unnamed arguments may substitute its named
// parameters: extra arguments have already been evaluated in the caller.
// Each caller is simplified (`simplify`) after it changes, before its own
// callers decide, so a whole wave is one traversal; at -O3 the calls of a
// copy at a call site in a loop of a loop are visited again (their growth
// has a unit budget of its own). The budgets, in copied
// instructions, are the constants at the top of opt/inliner.cpp.
namespace opt {

enum class InlineWave
{
	Ordinary,
	Once,
	Late
};

struct InlineBudgets
{
	uint64_t once_unit = 0;   // remaining single-call work for the unit
	uint64_t growth_unit = 0; // remaining instructions the other policies may copy into the unit
	uint64_t force_unit = 0;  // remaining instructions force-inline callees may copy
	uint64_t nest_unit = 0;   // remaining instructions the calls of copies visited again may copy
};

// Runs one wave. `simplify` cleans one function after inlining (and, in
// the ordinary wave, every function once in callee-first order);
// `original_size` holds each definition's input size by symbol,
// `unrolled_size` the instructions that unrolling its loops added, its
// inlined callees' included (the ordinary allowance judges a callee without
// them: the callee is as large as it would be with the loops unrolled in
// the caller; a caller gains what its inlined callees hold) and `nounwind`
// the definitions proved nonthrowing so far.
void run_inline_wave(lowir::Program& program, const OptimizerOptions& options, OptimizerStats& stats, InlineWave wave,
	InlineBudgets& budgets, const std::vector<uint32_t>& original_size, std::vector<uint32_t>& unrolled_size,
	const std::vector<uint8_t>& nounwind, const std::function<void(lowir::SymbolId)>& simplify);

// Materialize a call's by-address scalar arguments before substituting it.
void materialize_call_arguments(
	lowir::Program& program, lowir::FunctionBody& body, lowir::BlockId block, lowir::InstId& prev, lowir::InstId call);

// Source-required calls use temporary force flags supplied by the lowering.
// Their exception regions remain nested in the caller. This is separate from
// the optional, budgeted LowIR force_inline optimization contract.
void inline_source_required(lowir::Program& program);
void run_source_inline_wave(lowir::Program& program, const std::function<void(lowir::SymbolId)>& simplify);

} // namespace opt
