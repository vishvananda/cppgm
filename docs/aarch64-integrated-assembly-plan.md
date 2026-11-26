# Integrated AArch64 assembly

## Assignment scope

Add an integrated assembly section to [PA39](../pa39/README.md). PA39 already
owns AArch64 Linux ELF and Apple Silicon Mach-O. It can use [PA29's assembly
contract](../pa29/assembly.md) for constraints, inline effects, source
expansion and relocatable objects. Keep required PA29 qualification on its
existing x86 profiles. Land target-independent fixes and regressions in
PA29, and put the AArch64 instruction forms, relocations and interoperability
fixtures in PA39. A new assignment would repeat prerequisites and test
infrastructure.

Cover the existing x86 entry points on the two AArch64 targets. Compile
standalone `.S` and `-x assembler-with-cpp` input directly to objects, including
stdin and dependency generation. Accept assembly alongside source and object
inputs in the existing link modes. Emit C and C++ inline assembly, `asm goto`,
file-scope assembly and raw assembly functions from source and LowIR. Preserve
the Linux `-S` listing path. Publish the supported instruction and directive
profile in the PA39 handout. Give students a bounded set of representative
instruction forms, ABI behavior and fixups. Use the broader kernel build to
qualify the reference compiler. Preserve the existing PA29 boundary for
raw-function CFI and compiler-owned inline frames. AArch32 and Thumb,
including the AArch32 compat vDSO, are a separate target scope.

## Reuse and target-specific work

| Boundary | Reuse | AArch64 work |
| --- | --- | --- |
| Source and directives | The native assembly driver's preprocessor, diagnostics and dependency collector. PA29's line reader, macro expansion, bounded repetition and conditionals, expression evaluator, and typed symbol and label spans. | Select comment and immediate rules by dialect. Both the standalone preprocessor adapter and the module line reader currently strip `#`. Preserve it in AArch64 immediates such as `#1` and test that behavior alongside x86 comments. |
| Sections, symbols and layout | PA29's ordered module assembly, section stack, data and alignment directives, local labels, symbol assignments, and deferred fixup model. Share their implementations where the semantics agree. | Extract target choices for directive widths and alignment, relocation selection and patching, and unwind register numbering. For example, the ELF `.word` directive emits four bytes on AArch64 and two on x86. PA29's current module assembler calls the x86 encoder and its data relocation helpers use x86 relocation constants. Keep x86 branch relaxation and code modes in that target. |
| Inline operands and effects | The PA29 LowIR assembly packet, GNU constraint solver, fixed register, tie and clobber handling, and Arm's existing operand staging and `asm goto` transfer logic. | Carry bound operands and typed references to the AArch64 instruction parser. Use the same parsing and assembling path for inline, file-scope, raw-function and standalone assembly. Preserve memory effects, register outputs, and the reachability of every declared goto destination. |
| Instruction forms | The AArch64 backend's opcode definitions, immediate checks, instruction field encoders and fixup kinds. | Add an AArch64 instruction parser and form validation for registers, immediates, shifts, extensions, addresses, aliases and symbolic operands. Parse each supplied instruction once after binding or macro expansion. Share encoding field routines with codegen where applicable. |
| Output and unwind | The existing `ObjectFile` model, ELF and Mach-O writers, AArch64 relocation kinds and CFI emission utilities. | Map source modifiers and directives to typed relocations and unwind rules. Add any missing relocation through object writing, reading, and the course linker as required by the advertised driver mode. Keep target instruction encoding separate from object format choices. |

The shared code should dispatch on target policy where syntax or object
semantics diverge. Keep x86 operand parsing and encoding in their current
target implementation. Extend shared module code around demonstrated use
by both targets. Ordinary C and C++ instructions continue through typed LowIR
and machine IR. Allocate assembler state on the assembly path so an ordinary
translation unit pays the same parsing and allocation costs. [Compiler
architecture](../spec.md)

The critical layout change is in [Arm inline assembly lowering](../dev/src/aarch64/assembly.cpp).
It currently inserts a single placeholder instruction and attaches text for
the external assembler. Use the integrated assembler's actual instruction
count, alignment and section contributions before finalizing machine block
offsets, branch ranges, symbols, relocations, unwind PCs and exception
call-site ranges. Retain typed labels or anchors through layout and resolve
their positions once. Exercise a multi-instruction packet, local labels that
repeat in separate invocations, and forward and backward branches spanning a
packet. Start with the existing compiler-owned inline frame contract and
qualify explicit CFI in module and raw-function assembly.

## Implementation order

1. **Separate shared assembly from the x86 target choices.** Inventory the
   current PA29 and PA40 behavior and capture the existing object and runtime
   results. Reuse `dev/src/asm/` for text slices, source expansion and
   expressions. Extract narrow target choices from `dev/src/native/asm/` for
   instruction parsing and emission, section and data fixups, and CFI. Cover
   the `#` distinction before enabling AArch64 standalone input. The PA29 and
   PA40 suites should pass before growing the Arm target.

2. **Emit the first Linux ELF objects.** Route AArch64 standalone input
   through the native driver and shared module assembler. Start with scalar
   moves and arithmetic, loads and stores, local branches, calls and returns,
   data and section directives, symbols, alignment, and branches or address
   pairs that cross objects. Support AArch64 page and low-12 relocation
   expressions using existing fixup kinds where possible. The first test
   should directly assemble a preprocessed `.S` callee, link it to an
   independently compiled caller and run it under QEMU on x86. Check
   dependency output and inspect the unresolved relocation before linking.
   [AArch64 ELF ABI](https://github.com/ARM-software/abi-aa/blob/main/aaelf64/aaelf64.rst)

3. **Integrate Linux inline, file-scope and raw assembly.** Replace the
   inline text placeholder for object builds with the measured assembly
   contribution. Exercise operand alternatives, early clobbers, flags,
   GPR and SIMD inputs and outputs, memory operands, fixed registers and
   `asm goto` edges. Validate local and externally visible data referenced
   across inline and file-scope assembly, weak references, and raw functions
   with CFI. Compile the same fixture from C or C++ source and from serialized
   LowIR. Retain PA39's existing listing test as a separate interoperability
   check and add direct `-c` coverage.

4. **Close the native Arm kernel profile.** Freeze the previous Linux 7.3.6
   AArch64 config and build commands. The previous build used Clang's
   assembler for 76 AArch64 `.S` objects and for cppgm's C output. Use the
   captured commands to replay both paths independently.
   Inventory the actual inputs, group failures by instruction or directive
   family, and add minimized regressions as each group closes. Expect to cover
   system registers, barriers, atomics, SIMD, register aliases, architecture
   extensions, and the sections and relocations used by alternatives and
   exception tables. Lay out numbered subsections in order and place inline
   replacement instructions outside the compiler's fall-through code. Fix up
   the alternative records only once section and symbol positions are known.
   Keep the compat vDSO disabled for this qualification
   so target assembly is entirely AArch64. Build the image and configured
   modules with cppgm for target compilation and assembly, verify the build
   commands, then boot in QEMU and check native userspace and the vDSO. Use
   the pinned configuration to define this milestone's breadth.
   [GNU AArch64 machine directives](https://sourceware.org/binutils/docs/as/AArch64-Directives.html)

5. **Qualify Apple Silicon with the same AArch64 parser and encoder.** Add
   Darwin section, symbol, alignment and relocation syntax, including
   page-relative address pairs and external branches. Reuse the Mach-O
   writer and its mapping from AArch64 fixups to object relocations. Test
   standalone and inline objects with Mach-O LLD on x86, then link and run
   the same cases with the Apple SDK and dyld on an Apple Silicon runner.
   Cross-link objects produced by cppgm and Clang in both directions.
   [LLVM's AArch64 Mach-O relocation mapping](https://github.com/llvm/llvm-project/blob/main/llvm/lib/Target/AArch64/MCTargetDesc/AArch64MachObjectWriter.cpp)

## Testing and performance

- Use the existing Perl checkers and PA39's `.arm-expect` convention. Add
  direct assembly inputs through the existing fixture unit mechanism and
  ordinary target flags. Use `reference_assembly` for independently assembled
  companions and `llvm_interop` for mixed objects. Extend the checker only
  where the current schema cannot express an input or an observable result.
- Check semantics at `-O0` and optimized levels. Compare explicit instruction
  encodings where the ISA fixes them, and compare normalized symbols,
  relocations and runtime behavior elsewhere. Student expectations should
  accept any valid register allocation, layout and equivalent lowering.
  Use small negative fixtures for malformed forms, unsupported target
  features, branch overflow and invalid relocations. A maintainer smoke
  check can trace `-c` subprocesses to confirm direct emission.
- Put bounded tests into the existing PA39 cross and native replay lanes.
  Use the cross lane for fast x86 iteration and batch completed instruction
  families before running the full strict report, self-host checks and
  native replays. Keep the full kernel build as a maintainer qualification.
  Validate the student export when changing its handouts, fixtures or tools.
- After each shared refactor, run PA29 and PA40, architecture audits and an
  x86 frozen compile ABBA against the original binary with A/A calibration
  and byte-identical outputs. Keep the existing Wasm assembly suite passing
  if shared source expansion changes. Track parse time, instruction count
  and peak RSS on representative assembly-heavy inputs as the Arm profile
  grows. Check deterministic objects and measure the assembler separately
  from the reference linker and emulator.
