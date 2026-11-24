# CORE-MATH sources for the WASI C23 supplement

The source revision is `c651b71d3e6f850e01cfc30f61dfc0652b15f64c`
from CORE-MATH. Each binary32 and binary64 `binaryNN/name.c` is copied from
`src/binaryNN/family/name.c`, with trailing whitespace removed. For a
binary32 file, drop the final `f` from `name` to find `family`. The
`tint.h`, `dint.h` and `dint_log2p1.h` headers come from `atan2pi`,
`log10p1` and `log2p1` respectively, beside their binary64 sources.
The sources retain their original copyright and MIT license notices.
[Pinned upstream tree](https://gitlab.inria.fr/core-math/core-math/-/tree/c651b71d3e6f850e01cfc30f61dfc0652b15f64c)

The binary128 `rsqrtl.c` adapts `src/binary128/rsqrt/rsqrtq.c` to WASI's
binary128 `long double`. It uses ordinary 64-bit carry propagation and
the fixed WASI nearest-even rounding direction. The x86 register and
floating-point environment paths are omitted. The integer polynomial,
correction, and rounding algorithm are retained.

The WASI runtime build compiles each source separately and renames its
`cr_` function to the corresponding C23 symbol at compile time. A private
header supplies the constants expected by the upstream floating-point
environment branches. The target uses a fixed rounding direction and
has no observable floating-point exception flags.
