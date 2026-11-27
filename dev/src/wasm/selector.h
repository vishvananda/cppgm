#pragma once

#include "opt/loops.h"
#include "wasm/module.h"
#include "wasm/control.h"
#include "wasm/object_places.h"
#include "machine/switch_plan.h"
#include "machine/call_arguments.h"
#include "machine/phi_inputs.h"

namespace wasm {

struct ExceptionPlan;

class Selector
{
public:
	Selector(const lowir::Program& program, const Module& module, lowir::SymbolId symbol, Function& output,
		const ExceptionPlan* exceptions, bool minimize_size);
	void run();

private:
	void value(lowir::Value value, lowir::Type type);
	void address(lowir::Value value);
	uint32_t memory_address(lowir::Value value);
	// An address that the selector can write again: a base, which is the
	// local `local` or the address `base`, and a displacement that does not
	// wrap at 32 bits.
	struct Place
	{
		lowir::Value base;
		uint32_t local;
		uint32_t offset;
	};
	Place place_of(lowir::Value address) const;
	// The memory immediate of an access: an offset, and the global whose
	// address the linker adds to it (kNoId: none).
	struct Access
	{
		uint32_t offset;
		uint32_t symbol;
	};
	bool global_element(
		lowir::Value address, uint32_t& symbol, lowir::Value& index, uint64_t& scale, uint64_t& offset) const;
	Access memory_access(lowir::Value address);
	void access(Op op, const Access& access);
	Place frame_place(uint32_t offset) const;
	Place slot_place(uint32_t slot) const;
	uint32_t argument_slot(lowir::Value source) const;
	void reserve_objects();
	void place_base(const Place& place);
	void place_address(const Place& place);
	void copy_bytes(const Place& destination, const Place& source, uint64_t bytes);
	void zero_bytes(const Place& destination, uint64_t bytes);
	void constant(lowir::Literal bits, lowir::Type type);
	void instruction(const lowir::Instruction& inst);
	void atomic_instruction(const lowir::Instruction& inst);
	void inline_assembly(const lowir::Instruction& inst);
	void call(const lowir::Instruction& inst, bool protected_by_group = false);
	void plan_nonlocal_jumps();
	bool nonlocal_call(const lowir::Instruction& inst);
	void nonlocal_dispatch();
	void call_body(const lowir::Instruction& inst, const lowir::Signature& signature);
	void exception_call(const lowir::Instruction& inst, const lowir::Signature* signature, uint32_t landing);
	lowir::InstId grouped_exception_calls(lowir::InstId first);
	void save_exception_stack();
	void begin_exception_call();
	void end_exception_call(uint32_t landing);
	void exception_select(uint32_t landing);
	void exception_throw(const lowir::Instruction& inst);
	void exception_value(lowir::Type type);
	void exception_match(uint32_t landing);
	void exception_snapshot(uint32_t landing, bool restore);
	void restore_exception_context();
	void exception_resume(uint32_t site);
	bool exception_instruction(const lowir::Instruction& inst);
	void exception_address(uint32_t symbol, int64_t offset = 0);
	const VariadicPlan& variadic_plan(const lowir::Instruction& inst, const lowir::Signature& signature);
	void pack_variadic(const lowir::Instruction& inst, const lowir::Signature& signature);
	void variadic_start(const lowir::Instruction& inst);
	void variadic_argument(const lowir::Instruction& inst);
	bool builtin_call(const lowir::Instruction& inst, const lowir::Signature& signature);
	void return_value(const lowir::Instruction& inst);
	bool object_instruction(const lowir::Instruction& inst);
	bool wide_instruction(const lowir::Instruction& inst);
	void wide_part(lowir::Value value, unsigned part);
	void store_wide(lowir::Value destination);
	void wide_binary(const lowir::Instruction& inst);
	void wide_compare(const lowir::Instruction& inst);
	void wide_shift(const lowir::Instruction& inst);
	void wide_convert(const lowir::Instruction& inst);
	void prepare_locals();
	void plan_wide_locals();
	void prepare_frame();
	void frame_address(uint32_t offset);
	void address_constant(uint64_t value);
	lowir::Type address_integer() const;
	void copy_object(lowir::Value source, lowir::Value destination, uint64_t bytes);
	void unary(const lowir::Instruction& inst);
	void binary(const lowir::Instruction& inst);
	void compare(const lowir::Instruction& inst);
	void convert(const lowir::Instruction& inst);
	void normalize(lowir::Type type);
	void vector_instruction(const lowir::Instruction& inst);
	void vector_constant(lowir::Literal bits);
	void vector_shuffle(lowir::Value first, lowir::Value second, const uint8_t* lanes);
	void vector_permute(const lowir::Instruction& inst);
	void vector_scalar(const lowir::Instruction& inst);
	void vector_float(const lowir::Instruction& inst);
	void vector_shift(const lowir::Instruction& inst);
	void vector_compare(const lowir::Instruction& inst);
	void vector_blend_test(const lowir::Instruction& inst);
	void vector_convert(const lowir::Instruction& inst);
	void vector_horizontal(const lowir::Instruction& inst);
	void vector_integer_math(const lowir::Instruction& inst);
	void vector_shuffle_stack(const uint8_t* lanes);
	void vector_reciprocal(const lowir::Instruction& inst);
	void vector_minpos(const lowir::Instruction& inst);
	void vector_carryless(const lowir::Instruction& inst);
	void vector_dot(const lowir::Instruction& inst);
	uint32_t vector_immediate(const lowir::Instruction& inst) const;
	void integer_view(lowir::Type type, bool signed_view);
	bool in_view(lowir::Value operand, lowir::Type type, bool signed_view) const;
	void viewed(lowir::Value operand, lowir::Type type, bool signed_view);
	void condition(lowir::Value operand);
	void edge(lowir::BlockId from, lowir::BlockId to);
	bool conditional_branch(const lowir::Instruction& inst);
	bool branch_if_target(lowir::BlockId to, lowir::BlockId other, uint32_t& depth, bool& moves);
	void number_blocks(uint32_t region, uint32_t& next);
	void find_carried();
	bool read_after_leaving(lowir::BlockId header, lowir::BlockId other);
	void phi_copies(lowir::BlockId from, lowir::BlockId to);
	void block(lowir::BlockId block);
	void restore_stack();
	bool select_switch(const lowir::Instruction& inst);
	void indirect_jump(const lowir::Instruction& inst);
	void branch_table(const std::vector<lowir::BlockId>& targets, const std::vector<uint32_t>& table, uint32_t selector,
		bool wide, lowir::BlockId fallback);
	bool narrow_selector(const lowir::Instruction& inst, lowir::Value& operand, lowir::Type& type) const;
	void switch_tree(const std::vector<machine::CaseCluster>& clusters, uint32_t first, uint32_t past,
		uint32_t selector, lowir::Type type, lowir::BlockId fallback);
	void switch_table(const std::vector<std::pair<int64_t, uint32_t>>& cases, const std::vector<uint32_t>& targets,
		uint32_t selector, lowir::Type type, lowir::BlockId fallback);
	void dispatch();
	void simple();
	bool structured();
	void region(uint32_t region);
	void region_child(uint32_t child);
	void dispatch_region(uint32_t region);
	bool branch_label(uint32_t target);
	void open_label(Op op, lowir::BlockId target);
	void close_label();
	Op memory_op(lowir::Type type, bool store) const;
	lowir::Type operand_type(lowir::Value operand, lowir::Type fallback) const;
	uint32_t add_local(ValueType type);

	const lowir::Program& program_;
	const Module& module_;
	const lowir::FunctionBody& body_;
	const lowir::Signature& signature_;
	const Boundary& boundary_;
	Function& out_;
	const ExceptionPlan* exceptions_;
	bool minimize_size_;
	uint32_t exception_pointer_ = lowir::kNoId;
	uint32_t exception_high_ = lowir::kNoId;
	uint32_t exception_reference_ = lowir::kNoId;
	uint32_t exception_filter_ = lowir::kNoId;
	uint32_t exception_selector_ = lowir::kNoId;
	uint32_t exception_stack_ = lowir::kNoId;
	std::vector<uint32_t> exception_contexts_;
	lowir::InstId current_inst_ = lowir::kNoId;
	std::vector<uint32_t> slots_;
	// Per slot: the local that holds the base of the slot's storage (kNoId: the frame).
	std::vector<uint32_t> slot_locals_;
	ObjectPlaces places_;
	std::vector<uint32_t> locals_;
	std::vector<uint32_t> wide_locals_;
	std::vector<uint32_t> objects_;
	// The temporaries that locals and frame objects are given out for, in
	// order: the parameters, then as the layout defines them (as the body
	// read from its LowIR text numbers them). A temporary no placed
	// instruction defines has no reader and no local.
	std::vector<lowir::TempId> temp_order_;
	std::vector<uint32_t> incoming_;
	std::vector<uint32_t> call_areas_;
	std::vector<uint32_t> variadic_areas_;
	std::vector<uint32_t> variadic_copies_;
	std::vector<lowir::Type> argument_types_;
	machine::CallPlanCache<VariadicPlan> variadic_plans_;
	uint32_t wide_low_ = lowir::kNoId;
	uint32_t wide_high_ = lowir::kNoId;
	uint32_t variadic_parameter_ = lowir::kNoId;
	uint32_t hidden_result_ = lowir::kNoId;
	uint32_t frame_ = lowir::kNoId;
	uint32_t saved_stack_ = lowir::kNoId;
	bool keeps_stack_ = false; // the stack pointer stays where the function found it
	struct NonlocalFragment
	{
		uint32_t id;
		lowir::BlockId block;
		lowir::InstId first, past, result_call;
		uint32_t next;
	};
	std::vector<NonlocalFragment> nonlocal_fragments_;
	std::vector<uint32_t> nonlocal_sites_;
	uint32_t jump_result_ = lowir::kNoId;
	uint32_t jump_payload_ = lowir::kNoId;
	uint32_t jump_environment_ = lowir::kNoId;
	uint32_t jump_reference_ = lowir::kNoId;
	uint32_t pc_ = lowir::kNoId;
	// A block's value of pc_: its layout position, which the body read
	// from its LowIR text also gives it (its id can differ).
	std::vector<uint32_t> pc_cases_;
	void number_pc_cases();
	uint32_t nesting_ = 0;
	uint32_t dispatch_depth_ = 0;
	uint32_t current_block_ = 0;
	ControlPlan control_;
	machine::PhiInputs phi_inputs_;
	struct Label
	{
		lowir::BlockId target;
		uint32_t depth;
		bool loop;
	};
	// Structured emission: each block's position, and per loop header the
	// positions of its loop's first and last block.
	std::vector<uint32_t> position_, loop_first_, loop_last_;
	// Per loop header: one of its phis is read outside the loop (0 or 1; empty before the scan).
	std::vector<uint8_t> escaped_;
	// Each such read: by an instruction of `at` (`from` is then `at`), or by
	// a phi of `at` on its edge from `from`.
	struct CarriedRead
	{
		lowir::BlockId header, from, at;
	};
	std::vector<CarriedRead> carried_reads_;
	// The edges that the reads are followed over (built at the first question).
	opt::Cfg leaving_;
	std::vector<lowir::BlockId> leaving_seen_, leaving_work_;
	std::vector<Label> labels_;
	std::vector<Label> dispatch_labels_;
	std::vector<uint32_t> region_locals_;
};

} // namespace wasm
