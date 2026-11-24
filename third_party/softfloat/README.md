# Berkeley SoftFloat for WASI narrowing arithmetic

The imported files are the binary64 and binary128 arithmetic routines and
their build dependencies from Berkeley SoftFloat Release 3e at revision
`07ebd29db0cfb55723a79fbbffe99103ef38e305`. The files are from `source`,
`source/include`, and `source/8086-SSE`. Their license notices are retained.
[Pinned upstream source](https://github.com/ucb-bar/berkeley-softfloat-3/tree/07ebd29db0cfb55723a79fbbffe99103ef38e305)

The WASI `platform.h` fixes the intermediate rounding direction to odd,
prefixes the linked symbols, and leaves exception state unobservable.
The two rounding files omit the inexact flag stores. The final conversion
to binary32 or binary64 rounds to nearest-even.
The selected out-of-line primitives omit their optional override guards
so that the prefix macros can rename their declarations and definitions.
