# WASI stdio sources

The formatting engines, stream adapters, and internal headers derive from
wasi-libc revision `2e6fb9d8ee0cdf9e431fbcabe8af3115de000a13`, tagged
`wasi-sdk-34`. The source files come from `libc-top-half/musl/src/stdio/`,
except `scan_integer.c`, which derives from `src/internal/intscan.c`.
`stdio_impl.h`, `shgetc.h`, and `floatscan.h` come from
`libc-top-half/musl/src/internal/`. `printf_arguments.h` and `scanf_arguments.h`
share the adapted argument handling between the narrow and wide engines.
The upstream notices used by this build are in
[wasm-freestanding/licenses](../../wasm-freestanding/licenses).

The C23 headers select separate symbols for formatted I/O. The archive
uses the SDK's `FILE` layout, locking, buffering, and floating-point
scanner. Link with the SDK 34 long-double printscan archive to supply
its binary128 scanner. Earlier C editions retain the SDK entry points.
The width modifiers cover the SDK's minimum-width, exact-width, and fast
types for the format widths 8, 16, 32, and 64.

[WASI SDK 34 libc source](https://github.com/WebAssembly/wasi-libc/tree/2e6fb9d8ee0cdf9e431fbcabe8af3115de000a13)
