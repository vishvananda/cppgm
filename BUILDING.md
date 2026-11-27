# Build cppgm from source

Both source downloads build the compiler, its eight stage tools and the LowIR
library. Use GNU Make, Perl, a C++11 host compiler with its standard library,
a linker and an archiver. Linux defaults to GCC. On macOS the build prefers
Homebrew LLVM when installed.

From the extracted directory, run:

```sh
make
dev/cppgm --version
make lowir-library
```

The tools and the static and shared libraries are written to `dev/`. See
[the LowIR library guide](docs/lowir-library.md) for its C interface. To use
a specific host compiler, set both `CXX` and `CPPGM_HOST_CXX` to its path
on each make invocation.

For a native executable, `dev/cppgm -o program main.cpp helper.cpp`
compiles the sources and links their objects with the configured host C++
driver. Pass `--internal-link` to use cppgm's linker and course runtime.

## Bare Wasm C23 library supplement

Build the supplemental headers and runtime archive with cppgm and WASI
SDK 34. The archive supplies the callable `<stdbit.h>` functions,
`memalignment`, and the C23 freestanding `<string.h>` functions for
`wasm32-unknown-unknown`. It reuses the SDK's musl string objects and
includes their license notices in `licenses/` alongside the archive.

```sh
sdk=/path/to/wasi-sdk
resource="$("$sdk/bin/clang" -print-resource-dir)"
make -C dev/runtime/wasm-freestanding RESOURCE_DIR="$resource" AR="$sdk/bin/llvm-ar"

runtime=obj/dev/runtime/wasm-freestanding
dev/cppgm --target=wasm32-unknown-unknown -std=c23 -ffreestanding \
  -isystem "$runtime/include" -resource-dir="$resource" --export=main \
  example.c "$runtime/libcppgm-freestanding.a" -o example.wasm
```

## Hosted WASI C23 library supplement

The hosted supplement builds against unmodified WASI SDK 34. It supplies
C23 assertions, bit utilities, string functions, alignment, clock
resolution, UTF-8 conversion, binary integer conversion, and sized
deallocation. It also supplies const-preserving searches, callable atomic
fences and flag operations, `call_once`, and `strfromd`, `strfromf`, and
`strfroml`. Narrow and wide formatted I/O support C23 binary conversions.
The supplement provides the C23 math and type-generic math interfaces,
complex constructors, and floating-point environment interfaces. The
WASI SDK uses fixed nearest-even rounding. Math exception reporting
remains open in the [C coverage inventory](reports/upstream-c-coverage.md). Temporary files use the guest working directory.
For applications that create them under Wasmtime, preopen that directory
with `wasmtime run --dir=. example.wasm`. The tested configuration includes
the SDK's signal emulation and long-double stdio libraries.

```sh
sdk=/path/to/wasi-sdk
resource="$("$sdk/bin/clang" -print-resource-dir)"
sysroot="$sdk/share/wasi-sysroot"
make -C dev/runtime/wasi-c23 WASI_SYSROOT="$sysroot" RESOURCE_DIR="$resource" AR="$sdk/bin/llvm-ar"

runtime=obj/dev/runtime/wasi-c23
dev/cppgm --target=wasm32-wasip1 -std=c23 --sysroot="$sysroot" -resource-dir="$resource" \
  -isystem "$runtime/include" -D_WASI_EMULATED_SIGNAL example.c \
  "$runtime/libcppgm-wasi-c23.a" -lc-printscan-long-double -lwasi-emulated-signal -o example.wasm
```

## Assignment tests

For the assignment suites, download `cppgm-<tag>-source-with-tests.tar.gz`.
It includes the same implementation, the fixtures, expected outputs, runners
and course documentation. From that archive, `make test-pa1` runs the first
assignment. See `TESTING_AND_REFERENCES.md` there for the full test report and
target-specific tool requirements.
