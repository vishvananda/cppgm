# CPPGM Programming Assignment 40 — i386 Linux backend (experimental)

Add the 32-bit x86 Linux target after PA29, PA33, PA34, and PA38. The
target uses little-endian ELF32 and the i386 System V ABI. Select the
target with `--target=i386-linux-gnu` or `-m32`. Use the same data
layout for type checking, LowIR, and object emission. Pointers, `int`,
and `long` are four bytes. `long long` and `double` are eight bytes
with four-byte scalar alignment. `long double` stores an 80-bit x87
value in 12 bytes with four-byte alignment.

### Work through the assignment

1. Emit ELF32 relocatable objects with the integrated x86 assembler. Use
   the existing section, symbol and relocation records. Encode the
   implicit addends in the relocated fields of SHT_REL sections. Check
   absolute addresses and calls with an independent ELF i386 linker.
2. Use the existing C frontend and LowIR pipeline. Configure x86
   selection, register allocation, spill slots, and frame layout for
   the i386 register set and ABI. Start with integer leaf functions
   and stack arguments. Add calls, callee saves, 64-bit integer
   operations, variadic arguments, and aggregate passing. Verify calls
   across separately compiled objects in both directions. GCC's
   `-mregparm=3` passes eligible scalar arguments in EAX, EDX, and ECX.
   Variadic calls use stack arguments.
3. Add position-independent addressing and ELF32 unwind tables.
   Compile the Linux compat vDSO with `-m32` and link it with the kernel's
   linker script. Keep the shared LowIR optimization passes and use the
   existing x86 analyses for liveness and placement.
4. Add the `-m16` code mode for kernel boot. C keeps the i386 data model
   and uses 32-bit stack operations and calls with real-mode instruction
   prefixes. Reuse PA29's assembly representation for `.code16`,
   `.code32`, and `.code64` transitions. Link the setup code and real-mode
   objects with the same ELF32 writer and linker used for `-m32`.

### Run the checks

`make -C pa40 test` runs the controls with the existing Perl harness.
The controls link with an ELF i386 linker and check process exit status
and stdout. Use `CPPGM_I386_LD=ld.lld` to select LLD. On a system without
native i386 execution, set `CPPGM_I386_RUNNER=qemu-i386`.
Use `make -C pa40 check TEST=tests/assembly/100-i386-relocations.t` to
work on an individual fixture.

For the full build, use the Linux x86-64 configuration with 32-bit
compatibility, the BIOS setup code, and real-mode wakeup support enabled.
Build the image and modules in a fresh output directory with `CC=cppgm`
for every target object. Host build tools and the external ELF linker
can come from the platform toolchain. Boot the resulting `bzImage` into
userspace under QEMU and verify a 32-bit program can use the compat vDSO.
