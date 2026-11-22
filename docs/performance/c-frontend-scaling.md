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

## Volatile C record transfers

Compared the batch with its parent `e45edef6e` using the same frozen
inputs, compiler flags, pinned CPU and immutable compiler binaries.
Every emitted object matched by bytes. The new work occurs when
lowering a volatile-qualified C record transfer. Large transfers use
the same bounded scalar loop as volatile arrays.

| Input | A/A range | ABBA instruction change | BAAB instruction change |
| --- | ---: | ---: | ---: |
| C++ `semantic_overload.cpp` | 0.0024% | +0.0042% | +0.0018% |
| SQLite `sqlite3.c` | 0.0008% | +0.0110% | +0.0055% |

## C edition tokenization and feature probes

The same comparison against `facb0a137` produced byte-identical objects
in every trial. The source lexer and token pasting use the same prefix
setting. It is tested when an identifier is immediately followed by a
quote, and edition comparisons for feature probes run when queried.

| Input | A/A range | ABBA instruction change | BAAB instruction change |
| --- | ---: | ---: | ---: |
| C++ `semantic_overload.cpp` | 0.0022% | -0.0082% | -0.0090% |
| SQLite `sqlite3.c` | 0.0012% | -0.0003% | -0.0006% |

## Volatile assignment code generation

The same source functions returning and discarding a volatile record
emitted 54 LowIR lines at `-O0` and 92 at `-O2` for records from 72 through
131,072 bytes. The loop keeps code size independent of the record size
through that range.

A Linux x86-64 workload assigns a 144-byte volatile record two million
times and prints a checksum. At `-O2`, the earlier lowering retired
304.12 million instructions. It copied the right operand between two
temporary buffers before writing the destination. Reusing the right
operand's snapshot removed that copy and reduced the count to 268.12
million in both ABBA and BAAB blocks, down 11.84%. The object's text
shrank from 533 to 398 bytes. GCC 15 and Clang 21 retired 68.12 and
82.12 million instructions, respectively, on the same source. All
binaries printed the same checksum.

The combined compiler changes since `e45edef6e` produced byte-identical
objects on the same frozen workloads. The C++ instruction count changed
by −0.0032% and −0.0023% in ABBA and BAAB. SQLite changed by +0.0091% and
+0.0102%. The A/A ranges were 0.0027% and 0.0020%, respectively.

| Input | Block | Retired user-space instructions in trial order |
| --- | --- | --- |
| C++ | A/A | 9,059,040,621 / 9,058,885,158 / 9,058,879,099 / 9,059,122,579 |
| C++ | ABBA | 9,058,788,364 / 9,058,392,958 / 9,058,764,553 / 9,058,942,551 |
| C++ | BAAB | 9,058,584,540 / 9,058,791,655 / 9,058,712,152 / 9,058,499,093 |
| SQLite | A/A | 16,514,240,520 / 16,513,937,189 / 16,513,908,740 / 16,514,090,466 |
| SQLite | ABBA | 16,513,829,111 / 16,515,239,802 / 16,515,608,953 / 16,514,003,896 |
| SQLite | BAAB | 16,515,791,110 / 16,513,892,892 / 16,514,018,447 / 16,515,484,313 |

## Generic association baseline

The C17 array and prototype cases each generate a `_Generic` with distinct
association types. Both use static assertions to check the selection.
The following are retired user-space instructions in millions for
syntax-only compilation on Linux x86-64, compared with `b0025944c`.

| Input | Associations | Before | With index |
| --- | ---: | ---: | ---: |
| Array pointers | 512 | 19.80 | 10.39 |
| Array pointers | 1024 | 55.24 | 17.01 |
| Array pointers | 2048 | 184.47 | 30.38 |
| Array pointers | 4096 | 675.71 | 57.15 |
| Prototyped function pointers | 512 | 39.30 | 15.09 |
| Prototyped function pointers | 1024 | 124.39 | 26.40 |
| Prototyped function pointers | 2048 | 443.35 | 49.17 |
| Prototyped function pointers | 4096 | 1675.80 | 94.72 |

The ratio of the last two increments fell from 3.80 to 2.00 for array
pointers and from 3.86 to 2.00 for prototypes. Canonical identity handles
exact types, while potentially compatible distinct types still go through
the existing compatibility check within their family. The family keys
depend only on immutable type structure. In particular, they group enums
with integers without caching an enum's underlying type. The index and its
memo belong to one long selection and are released when its analysis ends.
Short lists use inline storage. Further scaling checks should cover large
families of wildcard-bearing types that still require structural comparison.
At 4096 prototype associations, the median peak RSS in the paired blocks
rose from 13.9 to 15.3 MiB with the index.

Paired compile runs used the same pinned core and immutable binaries.
Every object was byte-identical across the 12 trials for each workload.
The short-list source used 16,384 independent four-arm selections at
`-O0`. The frozen C++ input used `-O3` and SQLite 3.50.4 used `-O2`.

| Input | A/A range | ABBA instruction change | BAAB instruction change |
| --- | ---: | ---: | ---: |
| C short lists | <0.0001% | -1.0768% | -1.0767% |
| C++ `semantic_overload.cpp` | 0.0032% | +0.0021% | -0.0014% |
| SQLite `sqlite3.c` | 0.0024% | +0.0006% | +0.0018% |

[Input generation](../../benchmarks/frontend_scaling/README.md#c)

## Declarations and linkage

All values are millions of retired user-space instructions for native
x86-64 C17 syntax-only compilation. The block-first columns compare
`310163dff` with `5bff6184b`. The other columns use `5bff6184b`.

| Declarations | Composite types | Tentative arrays | File declaration first | Block declaration first before | Block declaration first with index |
| ---: | ---: | ---: | ---: | ---: | ---: |
| 256 | 7.09 | 6.18 | 10.88 | 12.43 | 10.82 |
| 512 | 10.41 | 8.69 | 18.04 | 24.23 | 17.94 |
| 1024 | 17.08 | 13.58 | 32.36 | 57.07 | 32.17 |
| 2048 | 30.40 | 23.44 | 60.98 | 159.74 | 60.64 |
| 4096 | 56.98 | 43.12 | 118.25 | 512.85 | 117.57 |

Earlier block declarations were scanned repeatedly when the file
declaration came later. One indexed entity now serves every declaration
of that object, with a compatibility type independent of the lexical
types. At 4096 declarations this reduces retired instructions by 77.1%.
The ratio of the final two cost increments falls from 3.44 to 2.00.
The final ratios for the composite type, tentative array, and file-first
inputs are also 2.00 when rounded to two decimal places.

For the whole batch, compare `02e2b4c6e` with `5bff6184b` on the same
pinned CPU. The frozen C++ input at `-O3` and SQLite 3.50.4 at `-O2`
produced byte-identical objects in all trials. The A/A task-clock ranges
were 2.62% for C++ and 25.45% for SQLite.

| Input | A/A instruction range | ABBA instruction change | BAAB instruction change |
| --- | ---: | ---: | ---: |
| C++ `semantic_overload.cpp` | 0.00300% | +0.00087% | +0.00391% |
| SQLite `sqlite3.c` | 0.00153% | +0.00406% | +0.00219% |

| Input | Block | Retired user-space instructions in trial order |
| --- | --- | --- |
| C++ | A/A | 9,039,542,875 / 9,039,663,467 / 9,039,742,606 / 9,039,471,788 |
| C++ | ABBA | 9,039,743,241 / 9,039,650,974 / 9,039,841,738 / 9,039,591,809 |
| C++ | BAAB | 9,039,907,668 / 9,039,663,764 / 9,039,300,600 / 9,039,763,126 |
| SQLite | A/A | 16,516,388,353 / 16,516,232,859 / 16,516,346,400 / 16,516,486,026 |
| SQLite | ABBA | 16,516,079,010 / 16,516,734,700 / 16,517,078,849 / 16,516,393,046 |
| SQLite | BAAB | 16,516,995,718 / 16,516,545,297 / 16,516,542,501 / 16,516,815,269 |

[Input generation](../../benchmarks/frontend_scaling/README.md#c)

## Runtime array type interning

Each declaration in `c-vla-declarators` gives an array of the same element
type a distinct bound expression. Previously, the type table checked that
expression for identity while omitting it from its hash. Arrays of one
element type therefore probed the same chain. A profile at 8192 declarations
attributed 72.4% of sampled cycles to type interning and 8.9% to table growth.
The runtime-array path now hashes the bound node. Other types retain the
ordinary hash. Canonicalization and qualifier propagation use the same
runtime-array key as initial type creation.

The counts are millions of retired instructions for C17 syntax-only
compilation on Linux x86-64.

| Functions | VLA before | VLA after | Fixed array before | Fixed array after |
| ---: | ---: | ---: | ---: | ---: |
| 1024 | 72.61 | 42.29 | 41.06 | 40.98 |
| 2048 | 203.98 | 82.21 | 79.76 | 79.59 |
| 4096 | 653.36 | 165.00 | 160.07 | 159.76 |
| 8192 | 2306.95 | 326.43 | 316.51 | 316.08 |

At 8192 declarations GCC 15 and Clang 21 accepted the identical VLA
input and retired 524.19 and 765.80 million instructions, respectively.
The original and updated cppgm counts differ by 85.85% on this input.
Peak RSS varied between 31.7 and 33.3 MiB across the paired runs. The
change stays within the A/A range for both paired block averages.

All emitted objects were byte-identical in A/A, ABBA, and BAAB. The
8192-declaration object workload used `-O0`. The frozen C++ and SQLite
workloads used `-O3` and `-O2`, respectively.

| Input | A/A range | ABBA instruction change | BAAB instruction change |
| --- | ---: | ---: | ---: |
| C VLA declarations | 1.300% | -75.62% | -75.91% |
| C++ `semantic_overload.cpp` | 0.0031% | -0.2414% | -0.2419% |
| SQLite `sqlite3.c` | 0.0019% | -0.0121% | -0.0106% |

[Input generation](../../benchmarks/frontend_scaling/README.md#c)

## Multidimensional VLA extents

Analysis records each written runtime bound on its introducing declarator.
Lowering evaluates the plan in dependency order and saves the byte extent.
A typedef captures the extent at its declaration. For a fixed prefix above
a runtime dimension, lowering memoizes the product of the fixed dimensions
and loads the captured extent directly. These memos belong to the function.

In the dimensions workload, analysis initially walked every nested array
spine to check for C++ abstract-class elements. Bypassing that check in C
made the syntax-only increase proportional to the number of dimensions.
The extent-use workload controls for repeated use with the rank held fixed.
Counts are millions of retired instructions on Linux x86-64. Every object
linked through GCC's C driver and ran the input's size check successfully.

| Workload | Units | Syntax-only | `-O0 -c` |
| --- | ---: | ---: | ---: |
| Runtime/fixed dimension pairs | 128 | 4.97 | 6.06 |
| Runtime/fixed dimension pairs | 256 | 6.16 | 8.19 |
| Runtime/fixed dimension pairs | 512 | 8.54 | 12.44 |
| Runtime/fixed dimension pairs | 1024 | 13.30 | 20.92 |
| Uses of a captured extent | 128 | 5.58 | 6.89 |
| Uses of a captured extent | 256 | 7.12 | 9.57 |
| Uses of a captured extent | 512 | 10.18 | 14.90 |
| Uses of a captured extent | 1024 | 16.31 | 25.62 |

At 1024 dimension pairs, the earlier candidate retired 21.74 million
instructions for syntax and 29.36 million for object compilation.

Compared with `e9d9624fd`, paired compile runs on the frozen C++ source
at `-O3` and SQLite at `-O2` emitted byte-identical objects.

| Input | A/A range | ABBA instruction change | BAAB instruction change |
| --- | ---: | ---: | ---: |
| C++ `semantic_overload.cpp` | 0.0028% | +0.0336% | +0.0340% |
| SQLite `sqlite3.c` | 0.0023% | +0.0064% | +0.0035% |

[Input generation](../../benchmarks/frontend_scaling/README.md#c)

## Evaluated type names and GNU `typeof`

A GNU17 scaling input adds typedef declarators to one `typeof` of an
expression containing a runtime cast bound. Runtime checks require one
bound increment, one operand increment per declarator, and a captured row
size for every alias. GCC 15, Clang 21 and cppgm agree. Counts are millions
of retired user-space instructions on Linux x86-64.

| Declarators | Syntax-only | `-O0 -c` |
| ---: | ---: | ---: |
| 128 | 5.97 | 9.17 |
| 256 | 8.22 | 14.36 |
| 512 | 13.01 | 24.98 |
| 1024 | 23.58 | 47.24 |

Lowering emits bound calculations for the first declarator and uses saved
extents on the later ones. The earlier implementation emitted guarded
calculations for each declarator and retired 76.27 million instructions
for `-O0 -c` at 1024 declarators. Emitting the calculation once reduced
that to 47.24 million.

Paired runs against `38f7e1746` used the same frozen C++ `-O3` and SQLite
`-O2` inputs on Linux x86-64. The binaries were immutable and pinned to the
same core. All emitted objects matched byte-for-byte. Task-clock variation
in the A/A blocks was 14.3% for C++ and 1.2% for C, so the comparison uses
retired instructions.

| Input | A/A instruction range | ABBA instruction change | BAAB instruction change |
| --- | ---: | ---: | ---: |
| C++ `semantic_overload.cpp` | 0.0031% | −0.0019% | −0.0023% |
| SQLite `sqlite3.c` | 0.0006% | +0.0085% | +0.0095% |

| Input | Block | Retired user-space instructions in trial order |
| --- | --- | --- |
| C++ | A/A | 9,039,196,119 / 9,039,472,826 / 9,039,311,819 / 9,039,207,872 |
| C++ | ABBA | 9,039,476,951 / 9,039,154,241 / 9,039,224,941 / 9,039,251,266 |
| C++ | BAAB | 9,039,176,863 / 9,039,527,126 / 9,039,275,614 / 9,039,216,618 |
| SQLite | A/A | 16,515,019,992 / 16,515,020,341 / 16,514,976,912 / 16,514,916,781 |
| SQLite | ABBA | 16,515,306,990 / 16,516,183,491 / 16,517,029,892 / 16,515,104,465 |
| SQLite | BAAB | 16,516,577,963 / 16,514,878,656 / 16,514,760,657 / 16,516,194,595 |

[Input generation](../../benchmarks/frontend_scaling/README.md#c)

## Designated initializers

The repeated-designator workload overwrites one nested field. The sparse
workload gives one element of an incomplete array and checks the inferred
extent. Analysis indexes the written subobjects and retains the surviving
values. The following counts are millions of retired user-space instructions
for C17 syntax-only compilation on Linux x86-64, relative to `8d841254a`.

| Workload | Units | Before | With sparse plans |
| --- | ---: | ---: | ---: |
| Repeated nested designator | 128 | 4.80 | 4.74 |
| Repeated nested designator | 256 | 6.25 | 5.72 |
| Repeated nested designator | 512 | 10.43 | 7.66 |
| Repeated nested designator | 1024 | 23.89 | 11.54 |
| Repeated nested designator | 2048 | 71.29 | 19.41 |
| Sparse array extent | 16,384 | 6.70 | 3.73 |
| Sparse array extent | 32,768 | 9.66 | 3.73 |
| Sparse array extent | 65,536 | 15.59 | 3.73 |
| Sparse array extent | 131,072 | 27.46 | 3.73 |

At the largest inputs, median maximum RSS across three runs fell from
40,296 to 7,932 KiB for repeated designators and from 24,052 to 7,228 KiB
for the sparse array. All four sparse arrays emitted four LowIR lines,
including one zero item and one scalar. Emitting each array retired
about 3.72 million instructions.

The frozen C++ input at `-O3` and SQLite 3.50.4 at `-O2` emitted
byte-identical objects in every run with `74d806388`. The immutable
compilers ran on the same core. The A/A task-clock ranges were 14.8%
and 23.4%, respectively.

| Input | A/A instruction range | ABBA instruction change | BAAB instruction change |
| --- | ---: | ---: | ---: |
| C++ `semantic_overload.cpp` | 0.0053% | +0.0018% | +0.0019% |
| SQLite `sqlite3.c` | 0.0015% | −0.0009% | +0.0004% |

| Input | Block | Retired user-space instructions in trial order |
| --- | --- | --- |
| C++ | A/A | 9,038,985,491 / 9,039,463,977 / 9,039,434,934 / 9,039,364,889 |
| C++ | ABBA | 9,039,309,112 / 9,039,622,493 / 9,039,312,660 / 9,039,292,961 |
| C++ | BAAB | 9,039,537,847 / 9,039,424,395 / 9,039,185,715 / 9,039,413,688 |
| SQLite | A/A | 16,516,258,079 / 16,516,035,025 / 16,516,100,923 / 16,516,275,662 |
| SQLite | ABBA | 16,516,429,764 / 16,516,371,515 / 16,516,057,207 / 16,516,305,739 |
| SQLite | BAAB | 16,516,041,403 / 16,516,006,512 / 16,516,179,684 / 16,516,266,403 |

[Input generation](../../benchmarks/frontend_scaling/README.md#c)
