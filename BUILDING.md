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

## Bare Wasm C23 library supplement

Build the supplemental headers and runtime archive with cppgm and a WASI
SDK that provides Clang resource headers and an archiver. The archive
supplies the callable `<stdbit.h>` functions and `memalignment` for
`wasm32-unknown-unknown`.

```sh
sdk=/path/to/wasi-sdk
resource="$("$sdk/bin/clang" -print-resource-dir)"
make -C dev/runtime/wasm-freestanding RESOURCE_DIR="$resource" AR="$sdk/bin/llvm-ar"

runtime=obj/dev/runtime/wasm-freestanding
dev/cppgm --target=wasm32-unknown-unknown -std=c23 -ffreestanding \
  -isystem "$runtime/include" -resource-dir="$resource" --export=main \
  example.c "$runtime/libcppgm-freestanding.a" -o example.wasm
```

## Assignment tests

For the assignment suites, download `cppgm-<tag>-source-with-tests.tar.gz`.
It includes the same implementation, the fixtures, expected outputs, runners
and course documentation. From that archive, `make test-pa1` runs the first
assignment. See `TESTING_AND_REFERENCES.md` there for the full test report and
target-specific tool requirements.
