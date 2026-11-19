# Per-tool implementation source lists for the compiler.
#
# Add dev/src/foo.cpp to the tools that use it by adding `foo` below. For
# subdirectories, use the path without `.cpp`, such as `parser/foo`.

FRONTEND_SOURCE_SET_TARGETS := abimangle pptoken posttoken ppexpr preproc cppgm lowiropt lowir lowir2native
FRONTEND_TEST_RUNNER_SOURCE_ID := support/testing/test_runner
# The one source that includes the generated cppgm_builtin_host_config.h
# (the host compiler's macros and include directories, probed at build time).
FRONTEND_BUILTIN_CONFIG_SOURCE_ID := driver/host_environment

# Shared phases: translation phases 1-3 (the pp-token lexer), literal and
# operator classification, phases 5-7 (post-tokens, with identifier
# interning and the arena it uses), controlling-expression
# evaluation and phase 4 (the preprocessor). Tool output adapters are listed
# only by their tools.
FRONTEND_PHASE_BASENAMES_pplex := support/unicode/utf8 preprocess/source/source_buffer preprocess/source/translation_reader preprocess/lexer/char_classes preprocess/lexer/pp_lexer preprocess/lexer/pp_lexer_literals preprocess/lexer/pp_lexer_punctuators
FRONTEND_PHASE_BASENAMES_literals := types/fundamental_type lex/gnu_builtins lex/token_kind lex/ud_suffix lex/number_literal lex/interchange_float lex/text_literal
FRONTEND_PHASE_BASENAMES_posttoken := support/memory/arena lex/identifier_table lex/string_concatenation lex/post_tokenizer
FRONTEND_PHASE_BASENAMES_ppexpr := preprocess/expr/pp_arithmetic preprocess/expr/controlling_expression
# Translation phase 4: directives, macro replacement and the file stack.
FRONTEND_PHASE_BASENAMES_preprocess := preprocess/preprocessor_names preprocess/source/source_files preprocess/source/source_stack preprocess/macro/hide_sets preprocess/macro/macro_definition preprocess/macro/feature_probes preprocess/macro/macro_expander preprocess/preprocessor preprocess/preprocessor_directives

# Translation phases 7-8 as far as PA5 goes: the parser and its tree, with
# the dump view.
FRONTEND_PHASE_BASENAMES_syntax := syntax/parse_token_stream syntax/name_scopes syntax/parser_state syntax/parser syntax/parser_names syntax/parser_declarators syntax/parser_c_functions syntax/parser_specifiers syntax/parser_declarations syntax/parser_statements syntax/parser_expressions syntax/parser_c_expressions syntax/parser_constraints syntax/generic_parameters syntax/syntax_unit

# PA6's semantic layer: interned types, scopes and lookup, the declaration
# analyzer and integral constant evaluation; PA7's expression typing,
# conversions, calls and initialization. The --emit-types and
# --emit-semantics dumps (sema/semantic_dump, sema/semantics_dump) are
# linked only by cppgm.
FRONTEND_PHASE_BASENAMES_sema := sema/type_table sema/lookup sema/integral_arithmetic sema/constant_evaluator sema/constant_interpreter sema/constant_allocation sema/constant_array_storage sema/constant_class_storage sema/constant_memo sema/constant_expressions sema/constant_floating sema/floating/binary128 sema/floating/binary128_wide sema/floating/binary128_host sema/constant_complex sema/constant_construction sema/constant_closures sema/constant_statements sema/layout sema/primary_bases sema/conversions sema/variadic sema/string_literals sema/analyzer sema/analyzer_types sema/gnu_mode_types sema/analyzer_declarations sema/wasm_bindings sema/object_aliases sema/startup_functions sema/analyzer_classes sema/analyzer_bodies sema/analyzer_expressions sema/analyzer_literals sema/analyzer_member_pointers sema/analyzer_calls sema/analyzer_builtins sema/analyzer_asm sema/analyzer_asm_data sema/analyzer_bindings sema/pretty_function sema/analyzer_initialization sema/c_designated_initialization sema/c_expressions sema/constraints sema/concepts sema/template_constraints sema/function_constraints sema/placeholder_constraints sema/constraint_normalization sema/analyzer_construction sema/analyzer_copy sema/analyzer_conversions sema/analyzer_operators sema/analyzer_access sema/analyzer_virtual sema/analyzer_constexpr sema/analyzer_traits sema/analyzer_exceptions sema/analyzer_exception_sets sema/analyzer_lambdas sema/abbreviated_functions sema/lambda_initializers sema/analyzer_range_for sema/analyzer_rtti sema/analyzer_initializer_lists sema/analyzer_handlers sema/function_templates sema/class_templates sema/template_specializations sema/template_packs sema/variable_templates sema/template_names sema/template_addresses sema/template_dependence sema/template_fixed_expressions sema/template_placeholders syntax/ast_clone asm/gnu_constraints asm/gnu_template sema/naked_functions sema/class_deduction sema/class_deduction_guides sema/declared_deduction_guides sema/aligned_allocation sema/three_way_comparisons sema/default_comparisons sema/default_comparison_shapes sema/default_comparison_fallback sema/comparison_operators sema/constant_comparisons sema/immediate_functions sema/immediate_names syntax/ast_clone_lambdas

# PA8's LowIR model: names, types, literals, the program and its builder,
# and the validator. The text reader and writer (lowir/text_*) are tool
# adapters, listed only by the tools that read or write LowIR text; the
# construction exercises only by lowir.
# LowIR preserves x87 extended literals on hosts with other long double formats.
FRONTEND_PHASE_BASENAMES_lowir := support/memory/arena lowir/name_table lowir/program lowir/startup_sections lowir/builder lowir/body_construction lowir/literals lowir/validator lowir/argument_facts lowir/debug_validation lowir/assembly_validation lowir/assembly_functions lowir/assembly_globals asm/registers lex/interchange_float preprocess/lexer/char_classes

# PA9's ABI naming: the canonical ABI graph, the vocabulary tables and the
# one Itanium encoder, which later stages link to name their symbols. The
# fact-file reader (abi/facts/) is the abimangle tool adapter.
FRONTEND_PHASE_BASENAMES_abi := support/memory/arena abi/itanium/abi_graph abi/itanium/abi_encoder

FRONTEND_OBJ_BASENAMES_abimangle := $(FRONTEND_PHASE_BASENAMES_abi) abi/facts/abi_fact_reader abi/facts/abi_fact_definitions
FRONTEND_OBJ_BASENAMES_pptoken := $(FRONTEND_PHASE_BASENAMES_pplex) preprocess/tokens/pp_token_emitter
FRONTEND_OBJ_BASENAMES_posttoken := $(FRONTEND_PHASE_BASENAMES_pplex) $(FRONTEND_PHASE_BASENAMES_literals) $(FRONTEND_PHASE_BASENAMES_posttoken) lex/post_token_writer
FRONTEND_OBJ_BASENAMES_ppexpr := $(FRONTEND_PHASE_BASENAMES_pplex) $(FRONTEND_PHASE_BASENAMES_literals) $(FRONTEND_PHASE_BASENAMES_ppexpr)
FRONTEND_OBJ_BASENAMES_preproc := $(FRONTEND_PHASE_BASENAMES_pplex) $(FRONTEND_PHASE_BASENAMES_literals) $(FRONTEND_PHASE_BASENAMES_posttoken) $(FRONTEND_PHASE_BASENAMES_ppexpr) $(FRONTEND_PHASE_BASENAMES_preprocess) lex/post_token_writer
# PA10's procedural lowering: the typed LowIR program built from the
# semantic facts (symbols through the PA9 encoder); the LowIR text writer is
# the --emit-lowir view.
FRONTEND_PHASE_BASENAMES_lower := lower/program_lowering lower/object_aliases lower/startup_functions lower/function_bindings lower/source_inlining lower/source_vectors lower/debug_info lower/debug_names lower/asm_data_lowering lower/asm_lowering lower/definition_order lower/symbol_lowering lower/aggregate_shape lower/placeholder_mangling lower/local_mangling lower/global_lowering lower/constant_lowering lower/local_static_lowering lower/function_lowering lower/debug_lexical_scopes lower/statement_lowering lower/object_lowering lower/c_compound_literals lower/c_runtime_arrays lower/copy_lowering lower/conversion_lowering lower/allocation_lowering lower/aggregate_lowering lower/array_tail_lowering lower/cleanup_lowering lower/expression_lowering lower/discard_lowering lower/intrinsic_lowering lower/atomic_runtime lower/soft_float_lowering lower/complex_lowering lower/vector_lowering lower/vector_immediates lower/vector_helpers lower/vector_construction lower/sse_lowering lower/sse_instructions lower/wide_vector_lowering lower/member_pointer_lowering lower/member_pointer_representation lower/condition_lowering lower/vtable_lowering lower/covariant_lowering lower/itanium_layout lower/virtual_base_lowering lower/rtti_lowering lower/dispatch_lowering lower/dynamic_type_lowering lower/initializer_list_lowering lower/exception_lowering lower/lexical_cleanup_lowering lower/tracked_lifetime_lowering lower/asm_output_places lower/asm_exit_lowering lower/naked_functions lower/numeric_literals lower/no_exceptions lower/comparison_lowering

FRONTEND_OBJ_BASENAMES_cppgm := $(FRONTEND_PHASE_BASENAMES_pplex) $(FRONTEND_PHASE_BASENAMES_literals) $(FRONTEND_PHASE_BASENAMES_posttoken) $(FRONTEND_PHASE_BASENAMES_ppexpr) $(FRONTEND_PHASE_BASENAMES_preprocess) $(FRONTEND_PHASE_BASENAMES_syntax) syntax/ast_render syntax/ast_printer $(FRONTEND_PHASE_BASENAMES_sema) sema/semantic_dump sema/semantics_dump abi/itanium/abi_graph abi/itanium/abi_encoder lowir/name_table lowir/program lowir/startup_sections lowir/builder lowir/body_construction lowir/literals lowir/validator lowir/argument_facts lowir/debug_validation lowir/assembly_validation lowir/assembly_functions lowir/assembly_globals lowir/assembly_builder lowir/text_writer lowir/assembly_writer lowir/local_names $(FRONTEND_PHASE_BASENAMES_lower) lex/post_token_writer
# PA33's LowIR optimizer: the passes over the typed program (opt/), linked
# by lowiropt and by cppgm's --emit-lowir and object paths.
FRONTEND_PHASE_BASENAMES_opt := opt/bit_recurrences opt/fixed_allocations opt/block_lanes opt/loop_lane_packing opt/vector_lanes opt/loop_interchange opt/loop_unswitch opt/strength_reduction opt/code_sinking opt/address_sinking opt/long_latency opt/loop_literals opt/vector_literals opt/counter_widening opt/counter_ranges opt/unsigned_ranges opt/tail_recursion opt/math_calls opt/function_ir opt/allocation_origins opt/scalar_fold opt/integer_patterns opt/field_access opt/packed_loads opt/phi_equivalence opt/value_simplify opt/dead_code opt/memory_forwarding opt/copy_coalescing opt/constant_propagation opt/cfg_cleanup opt/jump_threading opt/null_edges opt/aggregate_slots opt/aggregate_boundaries opt/wide_integers opt/value_reads opt/slot_promotion opt/eh_regions opt/loops opt/loop_passes opt/loop_motion opt/loop_load_cache opt/store_motion opt/loop_vectorizer opt/loop_rotation opt/loop_unrolling opt/switch_formation opt/return_tables opt/select_formation opt/test_merging opt/call_graph opt/target_cost opt/inliner opt/interprocedural opt/private_allocations opt/static_init opt/virtual_calls opt/optimizer opt/object_aliases
FRONTEND_OBJ_BASENAMES_lowiropt := $(FRONTEND_PHASE_BASENAMES_lowir) lowir/text_lexer lowir/text_parser lowir/text_parser_debug lowir/text_parser_debug_scopes lowir/text_parser_body lowir/text_parser_assembly lowir/text_reader lowir/text_writer lowir/assembly_writer lowir/local_names $(FRONTEND_PHASE_BASENAMES_opt)
FRONTEND_OBJ_BASENAMES_lowir := $(FRONTEND_PHASE_BASENAMES_lowir) lowir/text_lexer lowir/text_parser lowir/text_parser_debug lowir/text_parser_debug_scopes lowir/text_parser_body lowir/text_parser_assembly lowir/text_reader lowir/text_writer lowir/assembly_writer lowir/local_names lowir/exercises
# PA24's native backend: selection and allocation (native/select), x86-64
# emission, the runtime routines and the ELF image.
FRONTEND_PHASE_BASENAMES_native := asm/parser native/asm/forms native/asm/encoding native/asm/vex_forms native/asm/evex_forms native/asm/mask_forms native/asm/vector_operands native/asm/operands native/asm/integer_forms native/asm/binding native/asm/environment native/asm/exits native/asm/functions native/asm/module native/asm/module_symbols native/asm/module_unwind native/asm/unwind_rules native/asm/unwind_parser native/asm/module_directives asm/module_text asm/module_expand asm/module_macros asm/module_substitution asm/module_arguments asm/module_conditions asm/module_expression native/asm/control_forms native/asm/bit_forms native/asm/extend_forms native/asm/constraints native/select/emit_assembly native/select/assembly_transfers native/target target/target native/select/call_abi native/select/analysis native/select/allocation native/select/global_allocation native/select/register_allocation machine/register_pressure native/select/loop_split native/select/loop_layout native/select/operands native/select/emit_values native/select/emit_divide native/select/division_width native/select/emit_convert native/select/emit_vector native/select/emit_memory native/select/emit_calls native/select/emit_control native/select/host_eh native/select/host_eh_tables native/select/branch_layout native/select/block_placement native/select/frame_layout native/select/shrink_wrap native/select/constant_stores native/select/mir_cleanup native/select/edge_moves native/select/mir_facts native/select/upper_halves native/select/frame_extraction native/select/selector native/x86/assembler native/x86/emitter native/x86/emitter_floating native/x86/emitter_vector native/x86/emitter_memory native/image/executable_file native/image/macho_executable native/image/arm64_macho native/image/macho_signature machine/global_data machine/switch_plan machine/frame_lifetimes machine/phi_inputs machine/call_arguments machine/exception_regions machine/exception_tables native/image/image native/runtime/runtime native/runtime/tlv native/runtime/cpu_query
# lowir2native's whole-program pipeline and its MIR dump view.
FRONTEND_OBJ_BASENAMES_lowir2native := $(FRONTEND_PHASE_BASENAMES_lowir) lowir/text_lexer lowir/text_parser lowir/text_parser_debug lowir/text_parser_debug_scopes lowir/text_parser_body lowir/text_parser_assembly lowir/text_reader $(FRONTEND_PHASE_BASENAMES_native) native/backend native/mir/mir_writer
# PA25's compile and link modes: the relocatable object model, its ELF
# encoding and the object back end (native/object), the linker and its
# runtime library (native/link), and the driver that runs them.
FRONTEND_PHASE_BASENAMES_object := native/object/object_file native/object/elf_object_writer native/object/elf_object_reader native/object/macho_sections native/object/macho_relocations native/object/macho_object_writer native/object/macho_object_reader native/object/macho_input_relocations native/object/host_unwind native/object/function_census native/object/dwarf_bytes native/object/dwarf_lines native/object/dwarf_types native/object/dwarf_scopes native/object/object_compiler
FRONTEND_PHASE_BASENAMES_link := native/link/routine_builder native/link/runtime_support native/link/runtime_library native/link/linker
# lowir2native links an executable needing link mode's runtime library.
FRONTEND_OBJ_BASENAMES_lowir2native += $(FRONTEND_PHASE_BASENAMES_object) $(FRONTEND_PHASE_BASENAMES_link)
FRONTEND_OBJ_BASENAMES_cppgm += $(FRONTEND_PHASE_BASENAMES_native) $(FRONTEND_PHASE_BASENAMES_object) $(FRONTEND_PHASE_BASENAMES_link) driver/host_environment driver/aarch64_environment driver/wasm_environment driver/native_assembly driver/make_dependencies driver/toolchain
# PA33: the optimizer, and the LowIR reader for LowIR object inputs.
FRONTEND_OBJ_BASENAMES_cppgm += lowir/text_lexer lowir/text_parser lowir/text_parser_debug lowir/text_parser_debug_scopes lowir/text_parser_body lowir/text_parser_assembly lowir/text_reader $(FRONTEND_PHASE_BASENAMES_opt)
FRONTEND_OBJ_BASENAMES_cppgm += asm/registers

FRONTEND_PHASE_BASENAMES_aarch64 := machine/exception_layout aarch64/exception aarch64/allocation aarch64/lifetimes aarch64/addressing aarch64/combines aarch64/unwind aarch64/vector aarch64/wide aarch64/abi aarch64/mir_writer aarch64/integer aarch64/atomic aarch64/variadic aarch64/arguments aarch64/object_copy aarch64/floating aarch64/backend aarch64/encoder aarch64/block_placement aarch64/edges aarch64/frame aarch64/select
FRONTEND_PHASE_BASENAMES_aarch64_link := support/archive aarch64/inputs aarch64/link aarch64/runtime
FRONTEND_OBJ_BASENAMES_cppgm += $(FRONTEND_PHASE_BASENAMES_aarch64) $(FRONTEND_PHASE_BASENAMES_aarch64_link)
FRONTEND_OBJ_BASENAMES_lowir2native += $(FRONTEND_PHASE_BASENAMES_aarch64) $(FRONTEND_PHASE_BASENAMES_aarch64_link)

# Shared target dispatch and the wasm32 backend (PA37).
FRONTEND_PHASE_BASENAMES_wasm := wasm/bytes wasm/abi wasm/encoder wasm/mir_facts wasm/mir_writer wasm/local_cleanup wasm/local_lifetimes wasm/validation wasm/module wasm/exception_runtime wasm/exception_payload wasm/exception_plan wasm/select_exceptions wasm/selector wasm/object_places wasm/frame wasm/select_objects wasm/select_calls wasm/nonlocal_jumps wasm/select_varargs wasm/select_builtins wasm/control wasm/control_regions wasm/control_emission wasm/select_instructions wasm/select_atomics wasm/select_switch wasm/select_arithmetic wasm/select_vectors wasm/vector_permute wasm/vector_float wasm/vector_shift wasm/vector_compare wasm/vector_convert wasm/vector_horizontal wasm/vector_integer_math wasm/vector_reciprocal wasm/vector_reductions wasm/vector_carryless machine/wide_helpers wasm/select_wide wasm/wide_locals wasm/select_wide_arithmetic wasm/select_wide_shift wasm/object_lowering wasm/object_aliases wasm/object_startup wasm/finalization wasm/object_writer wasm/object_validation wasm/object_compiler
FRONTEND_PHASE_BASENAMES_wasm_tools := wasm/runtime_inputs wasm/object_reader wasm/object_constants wasm/object_customs wasm/object_elements wasm/object_expression_validation wasm/object_features wasm/archive wasm/object_metadata wasm/object_code wasm/linker wasm/link_folding wasm/link_relocations wasm/link_globals wasm/link_data_exports wasm/link_output wasm/backend wasm/assembly_tokens wasm/assembly_parser wasm/assembly_instructions wasm/assembly_object
FRONTEND_OBJ_BASENAMES_lowir2native += lowir/text_writer lowir/assembly_writer lowir/local_names backend/compile $(FRONTEND_PHASE_BASENAMES_wasm) $(FRONTEND_PHASE_BASENAMES_wasm_tools) $(FRONTEND_PHASE_BASENAMES_opt)
# Object names use the shared UTF-8 decoder without the source lexer.
FRONTEND_OBJ_BASENAMES_lowir2native += support/unicode/utf8
FRONTEND_OBJ_BASENAMES_cppgm += $(FRONTEND_PHASE_BASENAMES_wasm) $(FRONTEND_PHASE_BASENAMES_wasm_tools)
# Single-threaded WASI host heap; an empty translation unit on native hosts.
FRONTEND_OBJ_BASENAMES_cppgm += support/wasi_heap

# Optional foreign producer library: typed LowIR -> optimizer -> target object.
# No source frontend, text reader, linker, command-line driver, or test batch runner.
FRONTEND_LIBRARY_SOURCE_SET_TARGETS := lowir_library
FRONTEND_LIBRARY_SOURCE_IDS_lowir_library := $(FRONTEND_PHASE_BASENAMES_lowir) $(FRONTEND_PHASE_BASENAMES_native) $(FRONTEND_PHASE_BASENAMES_object) $(FRONTEND_PHASE_BASENAMES_opt) $(FRONTEND_PHASE_BASENAMES_aarch64) $(FRONTEND_PHASE_BASENAMES_wasm) lowir/text_writer lowir/assembly_writer lowir/local_names native/mir/mir_writer support/unicode/utf8 lowir/assembly_builder backend/lowir_c_module backend/lowir_c_direct backend/lowir_c_metadata backend/lowir_c_assembly backend/lowir_c_debug backend/lowir_c_records

# Explicit embedding link options shared by the source and LowIR drivers.
FRONTEND_OBJ_BASENAMES_cppgm += driver/wasm_link_options
FRONTEND_OBJ_BASENAMES_lowir2native += driver/wasm_link_options
