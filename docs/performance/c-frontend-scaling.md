# C frontend scaling

The first measured inputs cover macro binding stacks and compatible array
redeclarations. Each source was generated once at 4096, 8192, and 16384
units. On Linux x86-64, cppgm, GCC 15.2 and Clang 21.1.8 compiled identical
bytes as C17. Every object linked with GCC's C driver and ran successfully.
The measurements are individual retired user-space instruction counts, in
millions. Growth is the second increment divided by the first.

| Input | Compiler | Syntax-only at 4096 / 8192 / 16384 | Object at 4096 / 8192 / 16384 | Object growth |
| --- | --- | ---: | ---: | ---: |
| Macro binding stack | cppgm | 111.40 / 216.03 / 425.63 | 111.47 / 216.10 / 425.70 | 2.00× |
| Macro binding stack | GCC | 198.51 / 382.59 / 748.74 | 238.47 / 422.54 / 788.71 | 1.99× |
| Macro binding stack | Clang | 233.15 / 430.00 / 825.67 | 236.96 / 433.52 / 828.92 | 2.01× |
| Compatible redeclarations | cppgm | 134.53 / 265.25 / 526.68 | 135.73 / 267.38 / 530.82 | 2.00× |
| Compatible redeclarations | GCC | 227.23 / 436.60 / 855.35 | 267.35 / 476.73 / 895.47 | 2.00× |
| Compatible redeclarations | Clang | 1562.60 / 5704.88 / 21840.40 | 1572.46 / 5720.68 / 21874.99 | 3.89× |

cppgm's object-compilation peak RSS at the three sizes was 12.0, 15.3 and
21.5 MiB for macro stacks and 13.3, 18.1 and 27.7 MiB for redeclarations.

[Input generation](../../benchmarks/frontend_scaling/README.md)

## Existing C++ workload

On the frozen `semantic_overload.cpp` input at `-O3`, an initial optimizer
repair performed work in the ordinary operand substitution path. Its
retired instruction increase was 0.88%. Batching repair within functions
that actually fold an indirect call target to a literal reduced the
increase to 0.0055% in both ABBA and BAAB blocks. The A/A range was about
0.002%. All objects matched byte-for-byte. These measurements use the
frozen project-header closure and the same GCC 15 hosted environment.

| Block | Main observations | Candidate observations |
| --- | ---: | ---: |
| A/A | 9,057,114,439 / 9,057,293,148 / 9,057,291,271 / 9,057,161,902 | |
| ABBA | 9,057,311,767 / 9,057,240,961 | 9,057,808,284 / 9,057,735,382 |
| BAAB | 9,057,345,564 / 9,057,216,931 | 9,057,834,486 / 9,057,714,437 |

[Frozen source and header policy](../../benchmarks/self_compile/README.md)

## Edition and hosted C changes

Compared the compiler before the edition diagnostic and declarator fixes
(`fbb85e362`) with `109b27433`, using immutable binaries and A/A, ABBA and
BAAB blocks on Linux x86-64. The SQLite 3.50.4 amalgamation was compiled as
GNU17 at `-O2`. The frozen C++ compile used `-O3` and the same GCC 15
header environment. Each input produced a byte-identical object in all
12 trials.

| Input | A/A range | ABBA instruction change | BAAB instruction change |
| --- | ---: | ---: | ---: |
| C++ `semantic_overload.cpp` | 0.0021% | +0.0153% | +0.0163% |
| SQLite `sqlite3.c` | 0.0011% | +0.0062% | +0.0076% |

The SQLite source SHA-256 was
`e3f5d6901e7492af4a1fc8c4d745cae84c264942524c3fbfc02b82a5ca8818c8`.
The full observations, in trial order, were as follows.

| Input | Block | Retired user-space instructions |
| --- | --- | --- |
| C++ | A/A | 9,057,548,681 / 9,057,695,502 / 9,057,740,154 / 9,057,657,050 |
| C++ | ABBA | 9,057,462,698 / 9,058,764,931 / 9,058,850,291 / 9,057,374,834 |
| C++ | BAAB | 9,058,903,125 / 9,057,386,534 / 9,057,576,650 / 9,059,006,036 |
| SQLite | A/A | 16,513,092,604 / 16,512,923,825 / 16,513,112,176 / 16,512,946,636 |
| SQLite | ABBA | 16,512,871,312 / 16,513,684,617 / 16,514,114,059 / 16,512,884,321 |
| SQLite | BAAB | 16,513,845,693 / 16,512,988,037 / 16,513,150,915 / 16,514,807,738 |
