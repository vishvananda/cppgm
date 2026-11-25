#pragma once

#include "aarch64/opcodes.h"
#include "aarch64/link.h"
#include "lowir/program.h"
#include "machine/exception_layout.h"
#include "native/object/object_file.h"

namespace aarch64 {

// The base word identifies the A64 instruction. Registers and immediates
// remain separate until block placement fixes the branch displacements.
enum class Op : uint32_t
{
#define A64_OPCODE(name, bits) name = bits,
	CPPGM_AARCH64_OPCODES(A64_OPCODE)
#undef A64_OPCODE
};

enum class Fixup : uint16_t
{
	None,
	Block,
	Resume,
	Assembly,
	Call = Call26,
	Jump = Jump26,
	Page = AdrPrelPage21,
	PageOffset = AddLo12,
	GotPage = aarch64::GotPage,
	GotLoad = GotLo12,
	TlsPage = TlsGotPage,
	TlsGotLoad = TlsGotLo12,
	TlsHi = TlsAddHi12,
	TlsLo = TlsAddLo12,
	TlvPage = DarwinTlvPage,
	TlvLoad = DarwinTlvLo12,
	// The scaled :lo12: offset of a load or store of 1, 2, 4, 8 or 16 bytes.
	ByteOffset = Ldst8Lo12,
	HalfOffset = Ldst16Lo12,
	WordOffset = Ldst32Lo12,
	DoubleOffset = Ldst64Lo12,
	QuadOffset = Ldst128Lo12
};

struct Instruction
{
	Op op;
	unsigned rd, rn, rm;
	uint32_t field;
	Fixup fixup;
	// These comparisons may update the observable floating status flags.
	bool preserve_fenv;
	uint32_t target;
	int32_t addend; // a symbol fixup's addend; a block ADR's jump table entries (pack_tables)
};

enum class FrameRule
{
	Register,
	Offset,
	Save,
	Restore,
	RememberState,
	RestoreState
};
struct FrameEvent
{
	uint32_t pc;
	FrameRule rule;
	unsigned reg, offset;
};

struct Function
{
	std::vector<FrameEvent> frame_events;
	std::unique_ptr<machine::ExceptionLayout> exceptions;
	std::vector<machine::ExceptionCallSite> sites;
	std::vector<uint32_t> pads;
	bool needs_resume = false;
	void frame_rule(FrameRule rule, unsigned reg = 0, unsigned offset = 0);
	std::vector<Instruction> code;
	std::vector<std::string> assembly;
	std::vector<lowir::SymbolId> assembly_symbols;
	std::vector<uint32_t> labels;
	uint32_t last_bound = ~0u; // the code size at the latest bind
	void emit(Op op, unsigned rd = 0, unsigned rn = 0, unsigned rm = 0, uint32_t field = 0);
	void reference(Op op, Fixup fixup, uint32_t target, unsigned rd = 0, unsigned rn = 0);
	void bind(uint32_t label);
};

void emit_file_assembly(
	const lowir::Program& program, const std::vector<uint32_t>& symbols, native::object::ObjectFile& object);
void emit_unwind(const Function& function, uint32_t symbol, uint32_t shared_code_symbol, uint32_t shared_section,
	const std::vector<uint32_t>& symbols, native::object::ObjectFile& object, bool darwin);
uint32_t external_symbol(native::object::ObjectFile& object, const char* name);
uint32_t add_section_symbol(native::object::ObjectFile& object, uint32_t section);
void dump_function(const Function& function, const lowir::Program& program, const char* name, std::string& dump);

struct BitTest
{
	uint32_t pc, bit;
};
void fold_bit_tests(Function& function, const std::vector<BitTest>& tests);
void remove_instructions(Function& function, const std::vector<uint32_t>& removed);
void insert_instructions(
	Function& function, const std::vector<uint32_t>& places, const std::vector<Instruction>& added);
void relax_branches(Function& function);
void pack_tables(Function& function);
// The caller-saved registers (x2-x7, x12-x14) a function may hold a value in
// across a direct call to a function of its unit that leaves them alone.
constexpr uint32_t kLeafKept = 0xfcu | (7u << 12);
bool orders_memory(const lowir::FunctionBody& body);
void pair_accesses(Function& function, uint32_t first, std::vector<BitTest>& tests, bool ordered);
// Spill reloads from code at `first` on (reloads.cpp): `homes` marks, by
// 8-byte unit of the frame at `base`, the homes of scalar temps; with
// `thunks` an indirect call may be to a thread-local thunk, which keeps
// the registers a call does not.
void forward_reloads(Function& function, uint32_t first, unsigned base, const std::vector<uint8_t>& homes,
	std::vector<BitTest>& tests, bool thunks);
void share_edge_moves(Function& function, std::vector<BitTest>& tests);
void copy_short_tests(Function& function);
void simplify_branches(Function& function);
void return_directly(Function& function);
void drop_repeated_compares(Function& function);
void conditional_compares(Function& function, const std::vector<uint64_t>& block_frequency);

// A block's two-way branch: its destination blocks and the estimated
// executions of each edge.
struct BranchEstimate
{
	uint32_t yes = lowir::kNoId, no = lowir::kNoId;
	uint64_t to_yes = 0, to_no = 0;
};
void orient_branches(Function& function, const std::vector<BranchEstimate>& estimates);

// An NZCV value for which the A64 condition `condition` (EQ to LE) holds.
inline unsigned nzcv_satisfying(unsigned condition)
{
	static const unsigned flags[] = { 4, 0, 2, 0, 8, 0, 1, 0, 2, 0, 0, 8, 0, 4 };
	return flags[condition];
}

void place_short_loops(const Function& function, native::object::Section& text);
void encode(const Function& function, const std::vector<uint32_t>& symbols, native::object::ObjectFile& object,
	uint32_t section, uint32_t resume = lowir::kNoId);

} // namespace aarch64
