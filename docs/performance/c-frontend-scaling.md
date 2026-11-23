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

## Block-scope function declarations

Compared with `7695a1c36`, the C17 syntax-only workloads grow either the
number of sibling redeclarations of one function or the number of names
first declared in a block. A final file-scope declaration exercises the
transition to a visible file binding. The analyzer keeps one compatibility
record per linked function that participates in a block declaration. Each
additional declaration checks its visible type and that indexed record.

Median retired user-space instructions in millions across three runs per
configuration, on Linux x86-64:

| Blocks | One name before | One name after | Distinct names before | Distinct names after |
| ---: | ---: | ---: | ---: | ---: |
| 256 | 12.88 | 12.94 | 18.53 | 18.83 |
| 512 | 22.06 | 22.18 | 33.84 | 34.43 |
| 1024 | 40.39 | 40.65 | 63.46 | 64.65 |
| 2048 | 77.05 | 77.59 | 121.09 | 123.45 |
| 4096 | 150.44 | 151.43 | 236.39 | 241.08 |

From 1024 to 4096 blocks, the incremental instruction cost per added
block stayed within 0.1% for one name and within 1% for distinct names.
At 4096 blocks, median peak RSS was 17,764 to 17,756 KiB for one name
and 23,364 to 24,776 KiB for distinct names.

The frozen C++ `-O3` and SQLite `-O2` objects matched byte-for-byte in
all runs. Both immutable compilers ran on the same core. A/A task-clock
variation was 46.4% for C++ and 16.8% for SQLite, so the comparison uses
retired instructions.

| Input | A/A instruction range | ABBA instruction change | BAAB instruction change |
| --- | ---: | ---: | ---: |
| C++ `semantic_overload.cpp` | 0.0032% | −0.0024% | −0.0013% |
| SQLite `sqlite3.c` | 0.0009% | +0.0012% | +0.0013% |

| Input | Block | Retired user-space instructions in trial order |
| --- | --- | --- |
| C++ | A/A | 9,039,736,691 / 9,039,731,633 / 9,040,018,311 / 9,039,886,930 |
| C++ | ABBA | 9,039,928,974 / 9,039,693,303 / 9,039,687,477 / 9,039,891,663 |
| C++ | BAAB | 9,039,869,807 / 9,039,827,741 / 9,039,802,354 / 9,039,520,279 |
| SQLite | A/A | 16,518,960,231 / 16,519,062,881 / 16,518,922,452 / 16,519,029,512 |
| SQLite | ABBA | 16,518,981,969 / 16,519,139,807 / 16,519,215,311 / 16,518,988,927 |
| SQLite | BAAB | 16,519,541,456 / 16,519,187,113 / 16,519,230,714 / 16,519,311,757 |

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
Median peak RSS for the 4096-declaration block-first case was 13,596 KiB
before and 13,508 KiB with the index across three runs each.

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

## Conditional expressions and inline constraints

The counts are millions of retired user-space instructions for C17
syntax-only compilation on Linux x86-64. `825d7de5b` uses the shared
composite type operation for conditional pointers and delays inline
diagnostics until the translation unit's declarations are known.
The inline baseline is `ece083546`.

| Expressions or functions | Conditional pointer composites | Inline baseline | Inline constraints |
| ---: | ---: | ---: | ---: |
| 256 | 12.41 | 16.78 | 16.82 |
| 512 | 21.08 | 30.05 | 30.13 |
| 1024 | 38.41 | 56.38 | 56.49 |
| 2048 | 73.05 | 110.54 | 110.85 |
| 4096 | 142.35 | 222.21 | 222.70 |

The last two cost increments had a ratio of 2.00 for conditional
pointer composites and 2.06 for inline linkage. At 4096 functions
the inline checks added 0.22% retired instructions. They retain one
location for an inline-only body with a violation, or the location of
an external inline declaration awaiting a body.

The C++ frozen input at `-O3` produced byte-identical objects. The corrected
integer promotions change ten functions in the SQLite 3.50.4 `-O2` object.
The `.text` section has the same size and `.eh_frame` is 16 bytes smaller.
Both SQLite builds produced identical results for the indexed, window,
JSON, pattern matching, and integrity queries used here. A/A task-clock
spans were 2.95% for C++ and 1.65% for SQLite. The table reports retired
instructions.

| Input | A/A instruction range | ABBA instruction change | BAAB instruction change |
| --- | ---: | ---: | ---: |
| C++ `semantic_overload.cpp` | 0.00297% | +0.00229% | +0.00219% |
| SQLite `sqlite3.c` | 0.00324% | +0.01841% | +0.01573% |

| Input | Block | Retired user-space instructions in trial order |
| --- | --- | --- |
| C++ | A/A | 9,039,849,625 / 9,039,927,162 / 9,039,847,753 / 9,039,658,612 |
| C++ | ABBA | 9,039,781,951 / 9,039,936,835 / 9,040,108,381 / 9,039,848,678 |
| C++ | BAAB | 9,040,160,695 / 9,039,903,548 / 9,039,688,789 / 9,039,826,741 |
| SQLite | A/A | 16,516,323,745 / 16,516,304,690 / 16,516,724,642 / 16,516,189,666 |
| SQLite | ABBA | 16,516,421,543 / 16,519,502,023 / 16,519,444,457 / 16,516,443,689 |
| SQLite | BAAB | 16,519,756,810 / 16,517,186,558 / 16,516,809,093 / 16,519,433,924 |

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

## Integer constant expressions

Compared with `5cdedd943`, a literal assertion reads its typed value
without constructing a constant evaluator. A compound expression checks
each required operand form before using the existing evaluator. The
eligibility walk processes left-nested arithmetic with bounded pending
operands, and the evaluator already processes those chains iteratively.
Computed null pointer recognition runs after ordinary pointer resolution
fails, using the same integer constant query.

The table gives median millions of retired user-space instructions across
three C17 syntax-only runs at each size on Linux x86-64.

| Units | Literal assertions before | Literal assertions after | Arithmetic terms before | Arithmetic terms after |
| ---: | ---: | ---: | ---: | ---: |
| 1024 | 12.06 | 10.92 | 8.08 | 8.22 |
| 2048 | 20.41 | 18.14 | 12.45 | 12.73 |
| 4096 | 37.11 | 32.56 | 21.17 | 21.73 |
| 8192 | 70.51 | 61.41 | 38.61 | 39.73 |

The incremental cost stayed near 7,044 instructions per literal assertion
and 4,395 per arithmetic term in the candidate. At 8192 units, median peak
RSS went from 17,384 to 17,440 KiB for literal assertions and from 17,400
to 17,372 KiB for arithmetic chains.

The frozen C++ `-O3` and SQLite `-O2` objects matched byte-for-byte in every
run. The immutable binaries ran on the same core. A/A task-clock variation
was 34.8% for C++ and 12.6% for SQLite, so the comparison uses retired
instructions.

| Input | A/A instruction range | ABBA instruction change | BAAB instruction change |
| --- | ---: | ---: | ---: |
| C++ `semantic_overload.cpp` | 0.0020% | +0.0089% | +0.0098% |
| SQLite `sqlite3.c` | 0.0030% | +0.0016% | +0.0025% |

| Input | Block | Retired user-space instructions in trial order |
| --- | --- | --- |
| C++ | A/A | 9,039,642,121 / 9,039,525,286 / 9,039,704,085 / 9,039,547,494 |
| C++ | ABBA | 9,039,409,068 / 9,040,233,567 / 9,040,210,838 / 9,039,432,367 |
| C++ | BAAB | 9,040,397,150 / 9,039,513,761 / 9,039,541,445 / 9,040,429,241 |
| SQLite | A/A | 16,519,267,173 / 16,519,286,272 / 16,519,118,550 / 16,519,620,258 |
| SQLite | ABBA | 16,519,400,828 / 16,519,587,189 / 16,519,656,474 / 16,519,325,392 |
| SQLite | BAAB | 16,519,698,500 / 16,519,242,436 / 16,519,277,768 / 16,519,649,631 |

[Input generation](../../benchmarks/frontend_scaling/README.md#c)

## Static initializers

Scalar initialization reuses typed literal values and retains the results of
constant evaluation for emission. The two workloads generate static scalar
definitions with either simple values or arithmetic expressions. The counts
are median millions of retired user-space instructions in three runs per
size and action, compared with `a85bae5da` on Linux x86-64 in C17 mode.

| Definitions | Literal syntax before | Literal syntax after | Literal object before | Literal object after | Arithmetic syntax before | Arithmetic syntax after | Arithmetic object before | Arithmetic object after |
| ---: | ---: | ---: | ---: | ---: | ---: | ---: | ---: | ---: |
| 512 | 5.27 | 5.30 | 6.09 | 5.88 | 7.16 | 8.04 | 8.44 | 8.64 |
| 1024 | 6.79 | 6.84 | 8.27 | 7.86 | 10.56 | 12.33 | 12.98 | 13.36 |
| 2048 | 9.91 | 10.01 | 12.72 | 11.88 | 17.44 | 20.96 | 22.12 | 22.88 |
| 4096 | 16.13 | 16.33 | 21.59 | 19.91 | 31.19 | 38.22 | 40.40 | 41.92 |

The extra syntax cost stayed near 47 instructions per literal definition
and 1,720 per arithmetic definition across doublings. At 4096 definitions,
object compilation used 7.76% fewer instructions for literals and 3.77%
more for arithmetic. Differences in median peak RSS at that size were
under 200 KiB in both modes. Both compilers emitted identical objects, and
the resulting executables verified the initialized values.

The frozen C++ input at `-O3` and SQLite 3.50.4 at `-O2` also emitted
byte-identical objects in every run. The immutable binaries ran on the
same core. A/A task-clock ranges of 19.9% for C++ and 14.1% for SQLite
limit the comparison to retired instructions.

| Input | A/A instruction range | ABBA instruction change | BAAB instruction change |
| --- | ---: | ---: | ---: |
| C++ `semantic_overload.cpp` | 0.0040% | +0.0001% | +0.0002% |
| SQLite `sqlite3.c` | 0.0023% | −0.0194% | −0.0217% |

| Input | Block | Retired user-space instructions in trial order |
| --- | --- | --- |
| C++ | A/A | 9,040,513,116 / 9,040,150,435 / 9,040,222,873 / 9,040,234,358 |
| C++ | ABBA | 9,040,485,186 / 9,040,280,055 / 9,040,294,945 / 9,040,068,370 |
| C++ | BAAB | 9,040,266,032 / 9,040,421,592 / 9,040,334,558 / 9,040,520,251 |
| SQLite | A/A | 16,519,693,943 / 16,519,309,335 / 16,519,478,215 / 16,519,499,244 |
| SQLite | ABBA | 16,519,270,632 / 16,515,969,528 / 16,516,141,973 / 16,519,243,323 |
| SQLite | BAAB | 16,516,118,943 / 16,519,329,529 / 16,519,578,596 / 16,515,637,030 |

[Input generation](../../benchmarks/frontend_scaling/README.md#c)

## C11 alignment specifiers

The declaration parser keeps its attribute insertion point as it reads
successive specifiers. The two inputs declare the same aligned object
with all requests first or interleaved with the qualifiers. The table
gives median millions of retired user-space instructions in three C17
syntax-only runs per size on Linux x86-64. The previous compiler
(`c3b93405b`) accepts the prefix order.

| Specifiers | Prefix before | Prefix after | Interleaved after |
| ---: | ---: | ---: | ---: |
| 512 | 7.53 | 6.49 | 6.55 |
| 1024 | 13.30 | 9.12 | 9.24 |
| 2048 | 31.11 | 14.36 | 14.61 |
| 4096 | 91.91 | 24.85 | 25.34 |
| 8192 | 314.15 | 45.82 | 46.81 |

Processing each additional qualifier and alignment request costs about
5,100 instructions in prefix order and 5,240 when interleaved. At 8192
requests, median peak RSS rose from 8,684 to 9,372 KiB for the prefix
order. The interleaved input used 9,308 KiB. At each size the two orders
and the previous compiler's prefix input emitted byte-identical objects.

The frozen C++ input at `-O3` and SQLite 3.50.4 in GNU17 mode at `-O2`
also emitted identical objects in every run with `d03f565c0`. The
immutable binaries ran on the same core. A/A task-clock variation was
27.9% for C++ and 3.4% for SQLite, so the comparison uses retired instructions.

| Input | A/A instruction range | ABBA instruction change | BAAB instruction change |
| --- | ---: | ---: | ---: |
| C++ `semantic_overload.cpp` | 0.0015% | −0.0017% | −0.0005% |
| SQLite `sqlite3.c` | 0.0021% | −0.0081% | −0.0063% |

| Input | Block | Retired user-space instructions in trial order |
| --- | --- | --- |
| C++ | A/A | 9,040,233,222 / 9,040,216,507 / 9,040,245,416 / 9,040,114,342 |
| C++ | ABBA | 9,040,182,088 / 9,040,078,384 / 9,040,094,557 / 9,040,289,676 |
| C++ | BAAB | 9,039,964,758 / 9,040,089,973 / 9,039,980,802 / 9,040,008,780 |
| SQLite | A/A | 16,516,105,416 / 16,515,935,373 / 16,516,019,401 / 16,515,755,547 |
| SQLite | ABBA | 16,515,822,023 / 16,514,598,871 / 16,514,481,607 / 16,515,943,901 |
| SQLite | BAAB | 16,514,740,647 / 16,515,687,212 / 16,515,754,004 / 16,514,609,851 |

[Input generation](../../benchmarks/frontend_scaling/README.md#c)

## C for declarations and prototype scopes

Loop initializers check each typed binding when it is declared in the
loop's scope. A prototype with a possibly introducing tag can create its
parameter scope on demand. The counts are median millions of retired
user-space instructions in three C99 syntax-only runs with
`-pedantic-errors` on Linux x86-64, against `71e913bdd`.

| Declarations | For initializer before | For initializer after | Existing prototype tag before | Existing prototype tag after |
| ---: | ---: | ---: | ---: | ---: |
| 128 | 4.958 | 4.961 | 6.285 | 6.303 |
| 256 | 6.072 | 6.077 | 8.859 | 8.894 |
| 512 | 8.559 | 8.570 | 14.188 | 14.261 |
| 1024 | 13.035 | 13.057 | 24.419 | 24.568 |
| 2048 | 21.862 | 21.906 | 45.407 | 45.644 |
| 4096 | 39.106 | 39.192 | 88.690 | 89.227 |

At 4096 declarations the costs increased by 0.22% for the loop and 0.61%
for the prototypes, about 21 and 131 instructions per declaration,
respectively. The loop's median peak RSS went from 10,012 to 10,072 KiB.
The prototypes' median peak RSS went from 14,292 to 15,000 KiB in the case
that mentions a tag in every declaration. Each input emitted
byte-identical objects with both compilers.

The frozen C++ input at `-O3` and SQLite 3.50.4 in GNU17 mode at `-O2`
also emitted identical objects in every run with `6a2cfb0de`. The
immutable binaries ran on the same core. A/A task-clock variation was
13.7% for C++ and 20.1% for SQLite, so the comparison uses retired instructions.

| Input | A/A instruction range | ABBA instruction change | BAAB instruction change |
| --- | ---: | ---: | ---: |
| C++ `semantic_overload.cpp` | 0.0029% | +0.0175% | +0.0153% |
| SQLite `sqlite3.c` | 0.0022% | +0.0017% | +0.0017% |

| Input | Block | Retired user-space instructions in trial order |
| --- | --- | --- |
| C++ | A/A | 9,040,462,273 / 9,040,365,002 / 9,040,358,058 / 9,040,620,287 |
| C++ | ABBA | 9,040,437,138 / 9,041,906,929 / 9,042,063,730 / 9,040,367,012 |
| C++ | BAAB | 9,041,800,677 / 9,040,448,356 / 9,040,410,506 / 9,041,825,915 |
| SQLite | A/A | 16,513,913,783 / 16,514,129,599 / 16,514,270,111 / 16,514,080,366 |
| SQLite | ABBA | 16,514,272,405 / 16,514,344,417 / 16,514,670,131 / 16,514,198,393 |
| SQLite | BAAB | 16,514,318,975 / 16,513,983,879 / 16,514,017,921 / 16,514,236,337 |

[Input generation](../../benchmarks/frontend_scaling/README.md#c)

## C alignment queries

The workload declares one record and queries the alignment of each
member. The candidate computes the record layout on the first query
and reads the retained member alignment thereafter. The batch also
skips C++ member lookahead when parsing a C declaration. The counts
include all compiler work and are median millions of retired user-space
instructions in three C11 syntax-only runs with `-pedantic-errors`,
against `dc84ee6dd` on Linux x86-64.

| Members and queries | Before | After |
| ---: | ---: | ---: |
| 128 | 7.798 | 7.774 |
| 256 | 11.776 | 11.732 |
| 512 | 20.657 | 20.573 |
| 1024 | 35.553 | 35.388 |
| 2048 | 65.220 | 64.895 |
| 4096 | 125.174 | 124.528 |

At 4096 members the instruction count fell by 0.52% and median peak RSS
went from 13,552 to 13,676 KiB. All measured sizes emitted
byte-identical objects.

The frozen C++ input at `-O3` and SQLite 3.50.4 in GNU17 mode at `-O2`
also emitted identical objects in every run with `0f95332d3`. The
immutable binaries ran on the same core. A/A task-clock variation was
32.4% for C++ and 6.0% for SQLite, so the comparison uses retired instructions.

| Input | A/A instruction range | ABBA instruction change | BAAB instruction change |
| --- | ---: | ---: | ---: |
| C++ `semantic_overload.cpp` | 0.0041% | +0.0073% | +0.0072% |
| SQLite `sqlite3.c` | 0.0020% | −0.0416% | −0.0411% |

| Input | Block | Retired user-space instructions in trial order |
| --- | --- | --- |
| C++ | A/A | 9,041,802,496 / 9,041,631,756 / 9,041,430,347 / 9,041,605,303 |
| C++ | ABBA | 9,041,570,022 / 9,042,444,081 / 9,042,061,390 / 9,041,622,920 |
| C++ | BAAB | 9,042,224,850 / 9,041,688,466 / 9,041,621,254 / 9,042,384,750 |
| SQLite | A/A | 16,514,653,631 / 16,514,869,376 / 16,514,765,664 / 16,514,980,255 |
| SQLite | ABBA | 16,514,753,444 / 16,508,103,733 / 16,507,832,442 / 16,514,918,270 |
| SQLite | BAAB | 16,508,114,557 / 16,514,999,004 / 16,514,876,467 / 16,508,189,873 |

[Input generation](../../benchmarks/frontend_scaling/README.md#c)

## C alignment agreement on linked objects

Alignment agreement uses one sparse record per affected linked object.
A redeclaration updates two distinct maxima until the initialized definition
is seen. Both the forward and retrospective checks use the same recorded
requests and query natural layout only on a potential disagreement. This
bounds agreement work per redeclaration without retaining the chain.

The table compares immutable builds of `e266cb4e5` and `8a9bbece2` on
Linux x86-64. Counts are median millions of retired user-space
instructions from three C11 `-pedantic-errors -fsyntax-only` runs on the
same core. Every size in both series emitted byte-identical `-O0` objects.

| Declarations | One object before | One object after | Distinct definitions before | Distinct definitions after |
| ---: | ---: | ---: | ---: | ---: |
| 128 | 5.443 | 5.460 | 5.804 | 5.839 |
| 256 | 7.024 | 7.057 | 7.792 | 7.861 |
| 512 | 10.185 | 10.247 | 12.022 | 12.156 |
| 1024 | 16.501 | 16.624 | 19.973 | 20.237 |
| 2048 | 29.130 | 29.374 | 35.678 | 36.198 |
| 4096 | 54.388 | 54.873 | 66.673 | 67.702 |

The final doubling added 2.00 times the previous interval's work for
one object and 1.97 times for distinct definitions. At 4096 declarations
the change added 0.89% and 1.54% instructions respectively. Median peak
RSS went from 8,624 to 8,664 KiB and 11,448 to 11,500 KiB.

The frozen C++ input at `-O3` and SQLite 3.50.4 in GNU17 mode at `-O2`
emitted identical objects for all observations. A/A task-clock ranges
were 7.3% and 3.1%. The C++ block timings also drifted during the run.
The comparison below uses retired instructions.

| Input | A/A instruction range | ABBA instruction change | BAAB instruction change |
| --- | ---: | ---: | ---: |
| C++ `semantic_overload.cpp` | 0.0025% | +0.0056% | +0.0053% |
| SQLite `sqlite3.c` | 0.0020% | +0.0023% | +0.0008% |

| Input | Block | Retired user-space instructions in trial order |
| --- | --- | --- |
| C++ | A/A | 9,042,345,319 / 9,042,567,496 / 9,042,496,868 / 9,042,363,124 |
| C++ | ABBA | 9,042,498,116 / 9,043,135,904 / 9,042,989,653 / 9,042,612,328 |
| C++ | BAAB | 9,042,834,578 / 9,042,558,854 / 9,042,429,483 / 9,043,121,825 |
| SQLite | A/A | 16,508,304,761 / 16,508,048,248 / 16,508,324,429 / 16,507,998,897 |
| SQLite | ABBA | 16,508,705,603 / 16,508,550,820 / 16,509,097,466 / 16,508,195,618 |
| SQLite | BAAB | 16,508,302,145 / 16,508,128,939 / 16,508,437,091 / 16,508,521,167 |

[Input generation](../../benchmarks/frontend_scaling/README.md#c)

## C identifier-list parameter declarations

The parser indexes the interned names in an identifier list before reading
its following parameter declarations. Each declaration uses one lookup.
The previous implementation scanned the identifier list for every declaration.

The table shows median millions of retired user-space instructions in three
C99 `-pedantic-errors -fsyntax-only` runs on Linux x86-64, comparing
`401aa6fd3` and `1d83235fb`. Each input declares the parameters in reverse
order. The two compilers emitted byte-identical `-O0` objects at every size.

| Parameters | Before | After |
| ---: | ---: | ---: |
| 128 | 5.304 | 5.072 |
| 256 | 7.402 | 6.429 |
| 512 | 13.376 | 9.397 |
| 1024 | 30.924 | 14.836 |
| 2048 | 91.216 | 26.538 |
| 4096 | 309.611 | 50.226 |

The final doubling added 2.02 times the work of the previous interval with
the index, compared with 3.62 times before. At 4096 parameters the instruction
count fell by 83.8% and median peak RSS went from 11,524 to 10,744 KiB.
At 4096 functions, the fixed-array and VLA declarator controls used 0.075%
and 0.030% fewer instructions respectively, with identical `-O0` objects.
Median peak RSS went from 19,240 to 19,880 KiB and 20,008 to 20,564 KiB in
those first runs. In paired replays of the same inputs, mean peak RSS
changes were −38 and −342 KiB for the fixed-array control and −388 and
−86 KiB for the VLA control. Peak RSS for the baseline alone varied by
approximately 0.8 MiB across the replays.

The frozen C++ input at `-O3` and SQLite 3.50.4 at `-std=gnu17 -O2`
emitted identical objects across the A/A, ABBA and BAAB blocks. A/A
task-clock ranges were 12.6% and 21.7%. The comparison below uses
retired instructions.

| Input | A/A instruction range | ABBA instruction change | BAAB instruction change |
| --- | ---: | ---: | ---: |
| C++ `semantic_overload.cpp` | 0.0025% | +0.0001% | +0.0008% |
| SQLite `sqlite3.c` | 0.0013% | +0.0002% | +0.0015% |

| Input | Block | Retired user-space instructions in trial order |
| --- | --- | --- |
| C++ | A/A | 9,042,956,207 / 9,042,874,633 / 9,043,023,082 / 9,042,797,670 |
| C++ | ABBA | 9,043,226,405 / 9,043,192,120 / 9,042,989,404 / 9,042,942,935 |
| C++ | BAAB | 9,043,063,839 / 9,043,001,918 / 9,042,993,420 / 9,043,077,767 |
| SQLite | A/A | 16,508,479,762 / 16,508,314,367 / 16,508,472,761 / 16,508,259,938 |
| SQLite | ABBA | 16,508,422,857 / 16,508,400,214 / 16,508,694,578 / 16,508,599,171 |
| SQLite | BAAB | 16,509,000,084 / 16,508,523,822 / 16,508,210,924 / 16,508,244,656 |

[Input generation](../../benchmarks/frontend_scaling/README.md#c)

## C restrict qualifiers

The compiler classifies `restrict` through the existing C identifier
table. Its semantic type uses the existing qualifier byte. Function
parameter adjustment and pointer qualification use the recorded type.

These are median millions of retired user-space instructions from three
C99 `-pedantic-errors -fsyntax-only` runs on Linux x86-64. The binaries
are immutable builds of `4c7d6c9de` and `b177871a1`. The input has one
variably modified array parameter and one ordinary pointer parameter with
`restrict` on each function. The objects match byte-for-byte at `-O0`.

| Functions | Before | After |
| ---: | ---: | ---: |
| 128 | 11.060 | 11.192 |
| 256 | 18.334 | 18.547 |
| 512 | 32.919 | 33.286 |
| 1024 | 61.958 | 62.653 |
| 2048 | 121.376 | 122.732 |
| 4096 | 243.123 | 245.793 |

The final doubling added 2.05 times the instructions of the previous
interval for both binaries. At 4096 functions, keeping the qualifier used
1.10% more instructions and median peak RSS went from 24,800 to 24,756
KiB. The fixed-array control at 4096 functions, with no `restrict`, used
0.12% fewer instructions and emitted the same object bytes.

The frozen C++ input at `-O3` and SQLite at `-std=gnu17 -O2` emitted
identical objects across all trial orders. The A/A task-clock ranges
were 1.6% and 5.5%, so the comparison uses retired instructions.

| Input | A/A instruction range | ABBA instruction change | BAAB instruction change |
| --- | ---: | ---: | ---: |
| C++ `semantic_overload.cpp` | 0.0012% | +0.0012% | +0.0012% |
| SQLite `sqlite3.c` | 0.0025% | −0.0045% | −0.0050% |

| Input | Block | Retired user-space instructions in trial order |
| --- | --- | --- |
| C++ | A/A | 9,042,991,158 / 9,042,959,910 / 9,043,022,201 / 9,042,917,285 |
| C++ | ABBA | 9,043,195,425 / 9,043,177,624 / 9,043,222,175 / 9,042,993,411 |
| C++ | BAAB | 9,043,037,114 / 9,042,939,860 / 9,043,050,771 / 9,043,172,598 |
| SQLite | A/A | 16,508,390,993 / 16,508,484,034 / 16,508,239,691 / 16,508,659,076 |
| SQLite | ABBA | 16,508,316,717 / 16,507,736,106 / 16,507,761,427 / 16,508,677,116 |
| SQLite | BAAB | 16,507,721,406 / 16,508,389,434 / 16,508,818,780 / 16,507,843,178 |

[Input generation](../../benchmarks/frontend_scaling/README.md#c)

## C VLA type names and atomic pointers

Prototype type names use the parameter scope already needed by the bound
expression. The scope stayed at 104 bytes in the Linux x86-64 build. Atomic
type specifiers retain a runtime bound through the existing evaluation plan.
Function types derive their variably modified bit on insertion into the
type table, after lookup.

Counts are median millions of retired user-space instructions in three
C11 `-pedantic-errors -fsyntax-only` runs on Linux x86-64. The parent build
is `797c45b0f` and the final compiler build is `b457df7ae`. Both spellings
in each pair emitted identical `-O0` objects at every size. The equivalent
parent inputs also emitted those object bytes.

| Functions | Prototype fixed bound | Prototype `[*]` | Atomic pointer qualifier | Atomic type specifier |
| ---: | ---: | ---: | ---: | ---: |
| 128 | 12.565 | 12.429 | 9.297 | 9.690 |
| 256 | 21.297 | 21.026 | 14.767 | 15.542 |
| 512 | 38.795 | 38.254 | 25.739 | 27.305 |
| 1024 | 73.711 | 72.592 | 47.587 | 50.716 |
| 2048 | 145.402 | 143.235 | 92.603 | 98.858 |
| 4096 | 293.031 | 288.724 | 185.512 | 198.066 |

The last doubling added about 2.06 times the previous interval's work for
both new forms. At 4096 functions the `[*]` input used 1.47% fewer
instructions than its fixed-bound form. The atomic type specifier used
6.77% more instructions than the pointer qualifier and median peak RSS
was 24,796 versus 23,460 KiB. At that size the parent controls for fixed
prototype bounds and the atomic pointer qualifier retired 292.805 and
185.271 million instructions respectively.

Computing the derived function bit on insertion reduced the frozen C++
instruction deltas from +0.0226% and +0.0253% to +0.0168% and +0.0177%
in ABBA and BAAB order. The final C++ `-O3` and SQLite `-std=gnu17 -O2`
trials all emitted byte-identical objects. A/A task-clock ranges were
3.2% and 2.2%, with drift between blocks. The comparison uses retired
instructions.

| Input | A/A instruction range | ABBA instruction change | BAAB instruction change |
| --- | ---: | ---: | ---: |
| C++ `semantic_overload.cpp` | 0.0047% | +0.0168% | +0.0177% |
| SQLite `sqlite3.c` | 0.0039% | −0.0001% | +0.0008% |

| Input | Block | Retired user-space instructions in trial order |
| --- | --- | --- |
| C++ | A/A | 9,043,643,906 / 9,043,640,295 / 9,043,319,490 / 9,043,745,203 |
| C++ | ABBA | 9,043,510,791 / 9,045,187,674 / 9,045,038,104 / 9,043,682,021 |
| C++ | BAAB | 9,045,107,578 / 9,043,640,082 / 9,043,578,224 / 9,045,313,705 |
| SQLite | A/A | 16,507,536,262 / 16,507,619,601 / 16,508,040,344 / 16,508,171,486 |
| SQLite | ABBA | 16,507,778,840 / 16,507,792,455 / 16,507,492,479 / 16,507,552,138 |
| SQLite | BAAB | 16,507,872,304 / 16,507,442,486 / 16,507,775,372 / 16,507,603,416 |

[Input generation](../../benchmarks/frontend_scaling/README.md#c)

## C unevaluated array type queries

The compatibility and alignment queries check each written bound as an
expression. Nonconstant bounds in the queried declarator use the interned
variable array shape without capturing an extent or allocating an
evaluation record. The shared compatibility check still distinguishes
different fixed extents and nested qualification.

Counts are median millions of retired user-space instructions from three
C11 `-pedantic-errors -fsyntax-only` runs on Linux x86-64, using GCC 15
host builds and pinned to CPU 71. The parent is `9c42c1c8c`, which accepts
the fixed-bound control. All three builds of each input size emitted
identical `-O0` objects.

| Functions | Parent fixed bound | New fixed bound | New variable bound |
| ---: | ---: | ---: | ---: |
| 128 | 8.225 | 8.225 | 8.386 |
| 256 | 12.605 | 12.608 | 12.926 |
| 512 | 21.412 | 21.419 | 22.062 |
| 1024 | 38.916 | 38.951 | 40.210 |
| 2048 | 75.322 | 75.310 | 77.926 |
| 4096 | 150.929 | 150.991 | 156.186 |

The final doubling added 2.08 times the previous interval's work for
the variable bounds. At 4096 functions they use 3.44% more instructions
than the equivalent fixed-bound query. The median peak RSS is 18,524 KiB
for the variable bounds and 18,520 KiB for the fixed control.

The frozen C++ input at `-O3` and SQLite at `-std=gnu17 -O2` emitted
identical objects in every trial. A/A task-clock ranges were 26.9% and
4.0%. The C++ task-clock change reversed sign across paired blocks.
The comparison uses retired instructions.

| Input | A/A instruction range | ABBA instruction change | BAAB instruction change |
| --- | ---: | ---: | ---: |
| C++ `semantic_overload.cpp` | 0.0013% | +0.0087% | +0.0078% |
| SQLite `sqlite3.c` | 0.0044% | +0.0029% | +0.0034% |

| Input | Block | Retired user-space instructions in trial order |
| --- | --- | --- |
| C++ | A/A | 9,045,039,228 / 9,045,012,294 / 9,045,028,635 / 9,045,130,400 |
| C++ | ABBA | 9,045,101,333 / 9,046,001,213 / 9,045,972,532 / 9,045,294,406 |
| C++ | BAAB | 9,045,933,279 / 9,045,262,486 / 9,045,140,323 / 9,045,885,726 |
| SQLite | A/A | 16,508,408,833 / 16,507,680,434 / 16,507,832,649 / 16,507,963,089 |
| SQLite | ABBA | 16,507,843,591 / 16,508,538,728 / 16,507,882,601 / 16,507,636,515 |
| SQLite | BAAB | 16,508,076,522 / 16,507,689,662 / 16,507,431,439 / 16,508,158,967 |

[Input generation](../../benchmarks/frontend_scaling/README.md#c)

## C execution environment

The driver resolves the mode once. The freestanding source lowering
marks ordinary C function symbols to suppress implicit library and
legacy entry recognition during optimization and LowIR replay. On
Linux x86-64, the named-symbol facts grow from six to seven bytes.
The LowIR metadata and complete symbol remain 20 and 32 bytes.
The preprocessor options and analyzer remain 328 and 11,584 bytes.

The input defines functions that call the same external function.
The parent is `b6d8a46d6` and the final compiler is `b0c927591`,
both built with GCC 15. All modes emitted byte-identical objects at
`-O0`. Values are medians of three pinned Linux x86-64 runs in
millions of retired user-space instructions.

| Functions | Parent hosted | Current hosted | Current freestanding |
| ---: | ---: | ---: | ---: |
| 128 | 11.975 | 11.976 | 11.974 |
| 256 | 20.029 | 20.027 | 20.022 |
| 512 | 36.167 | 36.151 | 36.157 |
| 1024 | 68.329 | 68.289 | 68.279 |
| 2048 | 134.141 | 134.026 | 133.940 |
| 4096 | 268.552 | 268.291 | 268.146 |

The final doubling adds 2.04 times the work of the preceding interval
in both current modes. At 4096 functions, median peak RSS is 22,728
KiB hosted and 22,752 KiB freestanding.

The frozen C++ input at `-O3` and SQLite at `-std=gnu17 -O2` emitted
identical objects in every run. A/A task-clock ranges were 36.0% and
1.4%. Both workloads changed task-clock direction between blocks, so
use retired instructions for the comparison.

| Input | A/A instruction range | ABBA instruction change | BAAB instruction change |
| --- | ---: | ---: | ---: |
| C++ `semantic_overload.cpp` | 0.0012% | −0.0048% | −0.0051% |
| SQLite `sqlite3.c` | 0.0024% | −0.0013% | −0.0013% |

| Input | Block | Retired user-space instructions in trial order |
| --- | --- | --- |
| C++ | A/A | 9,045,847,547 / 9,045,936,542 / 9,045,851,000 / 9,045,824,259 |
| C++ | ABBA | 9,045,878,350 / 9,045,475,560 / 9,045,501,372 / 9,045,971,575 |
| C++ | BAAB | 9,045,451,444 / 9,045,726,226 / 9,045,991,069 / 9,045,348,104 |
| SQLite | A/A | 16,508,147,002 / 16,508,239,376 / 16,507,920,261 / 16,507,835,282 |
| SQLite | ABBA | 16,508,071,034 / 16,507,908,754 / 16,508,028,443 / 16,508,291,482 |
| SQLite | BAAB | 16,507,890,905 / 16,508,305,055 / 16,508,045,771 / 16,508,014,793 |

[Input generation](../../benchmarks/frontend_scaling/README.md#c)

## GNU C inferred declarations and native C header search

The declaration reuses the initializer's typed expression facts after
deducing its type. Ordinary C and C++ declarations use the existing
specifier and initializer paths. Native C include discovery chooses
the C system paths when building the translation unit's header search.

The input declares one local per function, initialized from an
expression using a parameter. Both forms produced byte-identical
`-O0` objects at every size. The table shows medians of three pinned
Linux x86-64 C11 syntax-only runs using `53ec6bd99` built with GCC 15.
Instruction counts are in millions.

| Declarations | Explicit type | Inferred type |
| ---: | ---: | ---: |
| 128 | 8.574 | 8.584 |
| 256 | 13.314 | 13.329 |
| 512 | 22.827 | 22.864 |
| 1024 | 41.760 | 41.837 |
| 2048 | 80.972 | 81.101 |
| 4096 | 162.280 | 162.559 |

The last doubling for inference adds 2.07 times the work of the
preceding interval. At 4096 declarations, deduction adds 0.17%
instructions and median peak RSS is 19,912 KiB versus 19,888 KiB.

The frozen C++ input at `-O3` and SQLite at `-std=gnu17 -O2` emitted
identical objects with `d5c8eda1b` and `53ec6bd99` in all trials.
A/A task-clock ranges were 13.3% and 10.3%. Use retired instructions
to compare this batch.

| Input | A/A instruction range | ABBA instruction change | BAAB instruction change |
| --- | ---: | ---: | ---: |
| C++ `semantic_overload.cpp` | 0.0020% | +0.0009% | −0.0003% |
| SQLite `sqlite3.c` | 0.0020% | −0.0154% | −0.0169% |

| Input | Block | Retired user-space instructions in trial order |
| --- | --- | --- |
| C++ | A/A | 9,045,189,348 / 9,045,198,624 / 9,045,014,768 / 9,045,035,488 |
| C++ | ABBA | 9,045,166,976 / 9,044,997,217 / 9,045,391,079 / 9,045,066,909 |
| C++ | BAAB | 9,045,226,011 / 9,044,938,300 / 9,045,272,608 / 9,044,939,634 |
| SQLite | A/A | 16,508,232,665 / 16,508,252,859 / 16,507,916,783 / 16,508,017,223 |
| SQLite | ABBA | 16,507,835,456 / 16,505,340,507 / 16,505,390,079 / 16,507,978,690 |
| SQLite | BAAB | 16,505,338,489 / 16,508,033,157 / 16,507,919,863 / 16,505,026,591 |

[Input generation](../../benchmarks/frontend_scaling/README.md#c)

## Cross-target integer predefines

Arm Linux, cross Apple Silicon, and Wasm construct their own predefines.
The driver skips assembling the host macro and builtin declaration text
for those configurations. Each cross integer profile derives its widths
from the same layout functions as the source frontend and builds the
profile text once per process. The Intel Darwin cross configuration
overlays its integer roles on the existing host macro text.

The following are medians of the four observations per binary in
paired ABBA and BAAB blocks, in millions of retired user-space
instructions. The GCC 15 builds are `7f2fd789a` and `5239de375`, pinned
to CPU 71 on Linux x86-64. Empty-file preprocessing uses
`-E -x c -std=c11 -nostdinc`.

| Empty-file target | Parent | Current | Change |
| --- | ---: | ---: | ---: |
| Native x86-64 Linux | 3.700 | 3.703 | +0.08% |
| AArch64 Linux | 3.187 | 3.096 | −2.87% |
| Bare Wasm | 3.169 | 3.079 | −2.85% |
| Intel Darwin | 3.715 | 4.196 | +12.93% |

The Intel Darwin increase is about 481,000 instructions per empty
translation unit. It includes reading the new target macro definitions
and replacing their host versions. To measure scaling, compile the
`c-environment-calls` input with `-O0 -c -x c -std=c11 -nostdinc`.
The parent and current outputs are byte-identical for each row.

| Calls | Arm parent | Arm current | Wasm parent | Wasm current |
| ---: | ---: | ---: | ---: | ---: |
| 128 | 11.075 | 10.995 | 13.945 | 13.866 |
| 512 | 34.134 | 34.040 | 45.879 | 45.772 |
| 2048 | 127.965 | 127.644 | 175.650 | 175.228 |
| 4096 | 256.096 | 256.090 | 351.584 | 351.283 |

At 4096 calls, peak RSS medians are 23,776 and 23,760 KiB on Arm and
23,414 and 23,432 KiB on Wasm. The frozen C++ input at `-O3` and SQLite
at `-std=gnu17 -O2` also give identical objects across the experiment.
A/A task-clock ranges were 45.0% and 46.0%, so the comparison uses
retired instructions.

| Input | A/A instruction range | ABBA instruction change | BAAB instruction change |
| --- | ---: | ---: | ---: |
| C++ `semantic_overload.cpp` | 0.0022% | +0.0017% | +0.0025% |
| SQLite `sqlite3.c` | 0.0010% | +0.0062% | +0.0064% |

| Input | Block | Retired user-space instructions in trial order |
| --- | --- | --- |
| C++ | A/A | 9,045,364,144 / 9,045,336,941 / 9,045,534,254 / 9,045,339,233 |
| C++ | ABBA | 9,045,344,725 / 9,045,277,942 / 9,045,747,441 / 9,045,369,019 |
| C++ | BAAB | 9,045,581,789 / 9,045,253,527 / 9,045,289,371 / 9,045,404,482 |
| SQLite | A/A | 16,505,093,744 / 16,504,998,963 / 16,504,958,669 / 16,505,117,852 |
| SQLite | ABBA | 16,505,241,764 / 16,506,314,014 / 16,506,180,525 / 16,505,194,088 |
| SQLite | BAAB | 16,506,293,145 / 16,505,220,225 / 16,505,265,994 / 16,506,317,248 |

[Input generation](../../benchmarks/frontend_scaling/README.md#c)

## Atomic capability queries

The driver resolves the atomic profile before preprocessing. The
capability fits in existing padding in both compiler builds.
`PreprocessorOptions` remains 328 bytes and the semantic analyzer
11,584 bytes, each with alignment eight on Linux x86-64.

The C11 query series uses one function per query at `-O0 -c -nostdinc`.
The constant form returns `__atomic_always_lock_free(4, p)` for an
`int *` parameter. The runtime form returns
`__atomic_is_lock_free(size, p)` for `unsigned long` and `const void *`
parameters. The runtime control uses the same signature and calls an
ordinary C declaration bound to the runtime symbol with a `nothrow`
attribute. Retired user-space instruction counts are in millions.
Parent `ba36cb334` and current `84ae98515` were built with GCC 15 and
pinned to CPU 71. The constant results are medians from paired ABBA
and BAAB blocks. Runtime figures are the medians of three observations
per form on the current binary.

| Functions | Constant parent | Constant current | Runtime builtin | Runtime control |
| ---: | ---: | ---: | ---: | ---: |
| 128 | 10.405 | 10.446 | 13.199 | 13.255 |
| 512 | 29.814 | 29.892 | 40.839 | 40.978 |
| 2048 | 107.379 | 107.581 | 151.334 | 151.740 |
| 4096 | 211.355 | 211.722 | 299.165 | 299.861 |

The constant cases produce identical objects across builds. At 4096
functions the additional compile work is 0.17%. The runtime forms
produce identical machine-code bytes at each size. The runtime
builtin's incremental cost is about 72,000 instructions per added
function in the final two intervals. At 4096 functions, median peak
RSS is 24,148 KiB for the builtin and 24,092 KiB for the direct call.

The frozen C++ input at `-O3` and SQLite at `-std=gnu17 -O2` produced
identical objects across the two builds. A/A task-clock ranges were
31.7% and 12.3%, and paired task-clock directions reversed, so the
comparison uses instructions.

| Input | A/A instruction range | ABBA instruction change | BAAB instruction change |
| --- | ---: | ---: | ---: |
| C++ `semantic_overload.cpp` | 0.0046% | −0.0081% | −0.0094% |
| SQLite `sqlite3.c` | 0.0014% | +0.0006% | −0.0008% |

| Input | Block | Retired user-space instructions in trial order |
| --- | --- | --- |
| C++ | A/A | 9,045,542,662 / 9,045,615,374 / 9,045,273,149 / 9,045,686,287 |
| C++ | ABBA | 9,045,369,213 / 9,044,654,249 / 9,044,745,964 / 9,045,505,252 |
| C++ | BAAB | 9,044,645,453 / 9,045,488,217 / 9,045,486,006 / 9,044,623,118 |
| SQLite | A/A | 16,506,193,308 / 16,506,019,715 / 16,505,969,213 / 16,506,144,197 |
| SQLite | ABBA | 16,506,084,254 / 16,505,983,331 / 16,506,471,680 / 16,506,171,360 |
| SQLite | BAAB | 16,506,155,485 / 16,506,240,408 / 16,506,135,022 / 16,505,966,016 |

## Atomic aggregate builtins

The C11 series has one store, compare-exchange, and exchange per
function. It measures the compiler at `-O2 -c -nostdinc`. The
three-byte case has an inline four-byte atomic representation. The
twelve-byte case stages a sixteen-byte runtime representation. The
seventeen-byte case uses its ordinary representation with the runtime.
The parent `e73289f5d` and candidate `97dc21b46` were built with GCC
15 on Linux x86-64. Both binaries ran on CPU 71. The scalar comparison
uses paired ABBA and BAAB blocks following four baseline trials. Each
aggregate figure is the median of three candidate trials. Counts are in
millions of retired user-space instructions.

| Functions | Scalar parent | Scalar candidate | 3-byte value | 12-byte value | 17-byte value |
| ---: | ---: | ---: | ---: | ---: | ---: |
| 256 | 64.065 | 64.067 | 344.863 | 310.123 | 161.127 |
| 1024 | 244.007 | 244.035 | 1370.910 | 1230.278 | 632.322 |
| 4096 | 967.407 | 967.374 | 5472.570 | 4910.876 | 2517.023 |

Each aggregate case grew by a factor of 3.98 to 3.99 when the function
count grew from 1024 to 4096. Peak RSS at 4096 functions was 66,804,
49,468, and 45,304 KiB for the three aggregate cases in that order.
The scalar objects matched byte for byte across both builds. Each
aggregate case produced the same object in all three trials.

Frozen `semantic_overload.cpp` at `-O3` and SQLite at
`-std=gnu17 -O2` also produced identical objects across builds. Their
A/A task-clock ranges were 31.4% and 7.7%, so this comparison uses
retired instructions.

| Input | A/A instruction range | ABBA instruction change | BAAB instruction change |
| --- | ---: | ---: | ---: |
| C++ `semantic_overload.cpp` | 0.0009% | +0.0019% | +0.0016% |
| SQLite `sqlite3.c` | 0.0038% | +0.0007% | +0.0011% |

| Input | Block | Retired user-space instructions in trial order |
| --- | --- | --- |
| C++ | A/A | 9,045,017,971 / 9,045,100,933 / 9,045,092,577 / 9,045,046,485 |
| C++ | ABBA | 9,045,092,661 / 9,045,252,947 / 9,045,132,860 / 9,044,948,474 |
| C++ | BAAB | 9,045,277,898 / 9,044,971,551 / 9,045,186,671 / 9,045,167,338 |
| SQLite | A/A | 16,506,116,647 / 16,506,188,201 / 16,506,737,699 / 16,506,130,805 |
| SQLite | ABBA | 16,506,115,215 / 16,506,260,891 / 16,506,251,507 / 16,506,167,898 |
| SQLite | BAAB | 16,506,528,745 / 16,506,078,015 / 16,506,200,838 / 16,506,098,576 |

## Ordinary C atomic aggregate expressions

Each generated C11 function reads through an atomic pointer, assigns a
new value, and returns the previous value. The three-, twelve-, and
seventeen-byte values use the same storage widths as the builtin series.
The retired user-space instruction counts are medians of three
compilations with GCC 15-built cppgm `fef99fdb4` on CPU 71, at
`-O2 -c -nostdinc`. Counts are in millions.

| Functions | 3-byte value | 12-byte value | 17-byte value |
| ---: | ---: | ---: | ---: |
| 256 | 181.104 | 165.624 | 143.024 |
| 1024 | 719.124 | 648.289 | 559.702 |
| 4096 | 2863.825 | 2588.521 | 2232.245 |

The final fourfold increase in function count increased instructions by
3.98 to 3.99 times. At 4096 functions, median peak RSS was 40,964, 44,348,
and 36,092 KiB. Each size produced identical objects in all three trials.

Frozen `semantic_overload.cpp` at `-O3` and SQLite at
`-std=gnu17 -O2` produced byte-identical objects with parent
`325699231` and candidate `fef99fdb4`. The A/A task-clock ranges
were 22.4% and 2.4%. The SQLite task-clock direction reversed across
paired blocks. Retired instruction changes were below 0.003%.

| Input | A/A instruction range | ABBA instruction change | BAAB instruction change |
| --- | ---: | ---: | ---: |
| C++ `semantic_overload.cpp` | 0.0025% | +0.0003% | +0.0007% |
| SQLite `sqlite3.c` | 0.0018% | +0.0026% | +0.0005% |

| Input | Block | Retired user-space instructions in trial order |
| --- | --- | --- |
| C++ | A/A | 9,044,517,351 / 9,044,545,803 / 9,044,472,369 / 9,044,699,230 |
| C++ | ABBA | 9,044,591,740 / 9,044,588,557 / 9,044,588,252 / 9,044,531,363 |
| C++ | BAAB | 9,044,605,420 / 9,044,554,984 / 9,044,438,812 / 9,044,521,577 |
| SQLite | A/A | 16,506,007,636 / 16,505,964,108 / 16,506,011,104 / 16,506,257,930 |
| SQLite | ABBA | 16,506,453,078 / 16,507,130,012 / 16,506,102,685 / 16,505,937,357 |
| SQLite | BAAB | 16,506,339,744 / 16,505,977,955 / 16,506,317,526 / 16,506,119,828 |

## Wide C atomic arithmetic

The generated C functions update one atomic object. The real and wide
integer functions perform a postfix increment and compound addition.
The complex functions perform a compound addition. The table records
the median retired user-space instructions in millions for three
`-O2 -c -nostdinc` runs per input. The GCC 15-built cppgm
`39e13e127` ran pinned to CPU 71.

| Functions | `long double` | `long double _Complex` | `__int128` |
| ---: | ---: | ---: | ---: |
| 256 | 191.666 | 248.099 | 266.130 |
| 1024 | 753.598 | 982.225 | 1053.212 |
| 4096 | 3002.286 | 3917.932 | 4201.718 |

Quadrupling the final input count increased compile instructions by
3.98 to 3.99 times. At 4096 functions, median peak RSS was 41,700,
36,864, and 40,968 KiB in table order. The three runs at each size
produced identical objects.

Paired ABBA and BAAB blocks compared parent `0edcb95ed` and candidate
`39e13e127`. Frozen `semantic_overload.cpp` at `-O3`, SQLite at
`-std=gnu17 -O2`, and the narrow `_Atomic int` control produced
byte-identical objects across builds. A/A wall-time calibration varied
by 3.8% for C++ and 2.5% for SQLite by task-clock. Paired task-clock
directions reversed for both. The narrow control changed by at most
0.023% in retired instructions across the six paired blocks.

| Input | A/A instruction range | ABBA instruction change | BAAB instruction change |
| --- | ---: | ---: | ---: |
| C++ `semantic_overload.cpp` | 0.0012% | +0.0004% | +0.0003% |
| SQLite `sqlite3.c` | 0.0049% | +0.0014% | −0.0011% |
| Narrow control at 4096 functions | 0.0148% | +0.0110% | +0.0157% |

| Input | Block | Retired user-space instructions in trial order |
| --- | --- | --- |
| C++ | A/A | 9,045,168,297 / 9,045,202,285 / 9,045,190,453 / 9,045,094,637 |
| C++ | ABBA | 9,045,499,947 / 9,045,317,798 / 9,045,616,463 / 9,045,365,544 |
| C++ | BAAB | 9,045,313,291 / 9,045,093,357 / 9,045,292,370 / 9,045,128,096 |
| SQLite | A/A | 16,506,430,547 / 16,507,015,463 / 16,506,575,784 / 16,506,199,923 |
| SQLite | ABBA | 16,506,514,224 / 16,506,753,243 / 16,506,433,550 / 16,506,219,368 |
| SQLite | BAAB | 16,506,250,004 / 16,506,586,558 / 16,506,432,324 / 16,506,394,030 |

## Explicit 128-bit integer atomics

The generated GNU C17 functions use one GNU atomic fetch-add and one
xor-fetch. The 32-bit control retains inline operations. The 128-bit
case uses the size-prefixed runtime ABI. Both GCC 15-built compilers ran
on CPU 71 at `-O2 -c -nostdinc`. The narrow instruction changes are from
paired ABBA and BAAB blocks with parent `cc32d7085` and candidate
`656b391ec`. The wide instruction counts are medians in millions for
three candidate trials.

| Functions | 32-bit ABBA | 32-bit BAAB | 128-bit instructions | 128-bit peak RSS (KiB) |
| ---: | ---: | ---: | ---: | ---: |
| 256 | +0.464% | +0.462% | 278.955 | 13,576 |
| 1024 | +0.044% | +0.043% | 1103.044 | 17,480 |
| 4096 | −1.567% | −1.565% | 4401.887 | 42,448 |

The wide instruction count grew by 3.99 times in the final fourfold
increase. The narrow control produced byte-identical objects across
builds. Each wide input produced the same object in its three trials.
The small narrow workload used up to 0.47% more instructions. The
largest used 1.57% fewer instructions.

Frozen `semantic_overload.cpp` at `-O3` and SQLite at
`-std=gnu17 -O2` also produced byte-identical objects across builds.
Their A/A task-clock ranges were 33.2% and 34.1%. The paired retired
instruction differences stayed below 0.002%.

| Input | A/A instruction range | ABBA instruction change | BAAB instruction change |
| --- | ---: | ---: | ---: |
| C++ `semantic_overload.cpp` | 0.0023% | −0.0004% | −0.0012% |
| SQLite `sqlite3.c` | 0.0019% | +0.0013% | −0.0005% |

| Input | Block | Retired user-space instructions in trial order |
| --- | --- | --- |
| C++ | A/A | 9,045,377,566 / 9,045,173,927 / 9,045,351,385 / 9,045,233,720 |
| C++ | ABBA | 9,045,195,516 / 9,045,282,599 / 9,045,215,103 / 9,045,383,522 |
| C++ | BAAB | 9,045,030,375 / 9,045,400,587 / 9,044,982,946 / 9,045,137,607 |
| SQLite | A/A | 16,506,660,977 / 16,506,783,835 / 16,506,469,827 / 16,506,634,993 |
| SQLite | ABBA | 16,506,625,591 / 16,507,328,780 / 16,506,502,345 / 16,506,762,598 |
| SQLite | BAAB | 16,506,411,108 / 16,506,454,918 / 16,506,915,160 / 16,506,787,930 |

## GNU C imaginary literals

The token classifier resolves the suffix once. The parser retains the component
type and either the integer value or the end of the floating value text.
The parser token and ordinary literal records keep their existing sizes. A
WASI-hosted token-stream probe verifies the 20-byte parser token and the
out-of-line payload for a value greater than 32 bits. Constant evaluation and
lowering use the existing complex representation. The compiler checks system
macro provenance at definition time when GNU C extension diagnostics are
enabled, then carries it through replacement-list tokens.

The feature workload emits functions returning one `_Complex float` literal
each with `-std=gnu17 -nostdinc -O2 -c`. Four runs per input produced identical
objects. Adding 768 functions cost 112.51 million retired instructions.
Adding four times as many cost 451.84 million, a ratio of 4.02. Peak RSS
values are medians.

| Functions | Retired user-space instructions in trial order | Peak RSS (KiB) |
| ---: | --- | ---: |
| 256 | 41,531,494 / 41,533,066 / 41,548,389 / 41,534,933 | 12,180 |
| 1024 | 154,048,206 / 154,051,015 / 154,042,680 / 154,045,167 | 13,510 |
| 4096 | 605,885,063 / 605,969,805 / 605,893,789 / 605,885,099 | 20,570 |

The dormant controls used GCC 15-built cppgm binaries from `bab6cc0f7` and
`e7e193549` on CPU 71. The 4,096-function scalar workload used ordinary
integer, decimal floating and hexadecimal floating literals. The hosted
SQLite and frozen C++ `semantic_overload.cpp` workloads used `-O2` and
`-O3`, respectively. Objects were byte-identical across builds for all
three controls. The A/A task-clock ranges were 4.66%, 38.17%, and 4.13%
respectively, so the comparison uses retired instructions.

| Input | A/A instruction range | ABBA instruction change | BAAB instruction change |
| --- | ---: | ---: | ---: |
| Scalar literals | 0.02212% | +0.11718% | +0.12037% |
| SQLite `sqlite3.c` | 0.00114% | +0.05504% | +0.05379% |
| C++ `semantic_overload.cpp` | 0.00399% | +0.01535% | +0.01585% |

| Input | Block | Retired user-space instructions in trial order |
| --- | --- | --- |
| Scalar literals | A/A | 724,093,782 / 724,236,832 / 724,076,701 / 724,093,993 |
| Scalar literals | ABBA | 724,108,585 / 725,001,701 / 724,953,805 / 724,149,794 |
| Scalar literals | BAAB | 724,953,689 / 724,083,160 / 724,094,806 / 724,967,494 |
| SQLite | A/A | 16,506,170,785 / 16,506,101,372 / 16,506,007,455 / 16,506,196,225 |
| SQLite | ABBA | 16,506,142,984 / 16,515,226,775 / 16,515,032,674 / 16,505,947,206 |
| SQLite | BAAB | 16,514,916,860 / 16,505,880,151 / 16,505,958,464 / 16,514,678,610 |
| C++ | A/A | 9,044,434,796 / 9,044,603,816 / 9,044,779,340 / 9,044,418,292 |
| C++ | ABBA | 9,044,704,339 / 9,046,032,568 / 9,045,944,823 / 9,044,496,098 |
| C++ | BAAB | 9,046,068,001 / 9,044,664,018 / 9,044,576,923 / 9,046,040,258 |

## GNU C type-generic math

The analyzer visits each candidate signature to identify its varying positions,
then checks those positions against the family. A bounded index by floating
component type and real or complex domain rejects duplicates and selects the
function. The analyzer types each actual argument once and gives the normal C
call path the selected callee and the existing slice of typed arguments.

The generated GNU17 input has 48 functions and six candidates in each nested
call. Each result is the same float function as in the direct-call control.
The macro call and its plain-call control produced byte-identical objects.
The preprocessing comparison checks the same tokens after expanding the
wrapper or spelling the builtin directly. Counts are medians in millions of
retired user-space instructions from four trials per cell. Object emission
uses `-O2`. Preprocessing sends its typed output to `/dev/null`.

| Calls nested per function | Final token-stream lines | Plain-call macro object | Type-generic macro object | Direct builtin object | Type-generic macro preprocessing | Direct builtin preprocessing |
| ---: | ---: | ---: | ---: | ---: | ---: | ---: |
| 2 | 2,209 | 11.507 | 13.939 | 14.111 | 5.232 | 5.403 |
| 8 | 7,105 | 18.400 | 29.744 | 28.594 | 10.349 | 9.023 |
| 32 | 26,689 | 51.193 | 123.955 | 85.495 | 61.959 | 23.513 |
| 128 | 105,025 | 268.107 | 998.915 | 313.651 | 766.848 | 81.445 |

Direct builtin object emission cost 56.90 million more instructions from
depth 8 to 32 and 228.16 million more from depth 32 to 128. The fourfold
increase in additional calls cost 4.01 times as much and shows linear growth.
The corresponding increases in macro preprocessing were 51.61 and 704.89
million. At depth 128, an instruction-sampling profile of preprocessing put
38% in `MacroExpander::read`, 26% in `substitute_list`, and 25% in `next`.
Nested argument collection already indexes raw argument boundaries. Repeated
copying and rescanning of expanded arguments accounts for the remaining
growth. Keep this case when qualifying changes to replacement and rescanning.

The two maintainer generators reproduce this comparison. With the
overloadable compiler, the generated forms produce identical typed
preprocessing output after removing the filename record and identical
`-O2` objects. These are individual Linux x86-64 instruction measurements.
The separate staged `preproc --stats` pass counts intermediate replacement
tokens using its course expansion rules.
[Maintainer generators](../../benchmarks/frontend_scaling/README.md#c)

| Calls nested per function | Final token-stream lines | Wrapped preprocessing instructions | Direct preprocessing instructions | Wrapped intermediate replacement tokens |
| ---: | ---: | ---: | ---: | ---: |
| 8 | 7,105 | 10,209,364 | 8,870,355 | 29,760 |
| 16 | 13,633 | 21,898,103 | 13,699,293 | 111,744 |
| 32 | 26,689 | 61,883,122 | 23,360,374 | 432,384 |
| 64 | 52,801 | 208,309,957 | 42,675,356 | 1,700,352 |
| 128 | 105,025 | 767,026,642 | 81,304,076 | 6,743,040 |

Each macro invocation contributes a fixed prefix and suffix and uses its
argument once. The intermediate work grows about fourfold on the last
doubling, while the final token stream nearly doubles. The optimization
must eliminate repeated materialization of already-expanded interiors.
Keep the token boundary where a trailing function-like name can meet an
opening parenthesis from the surrounding replacement. Revalidate reusable
ranges when macro bindings change, including directives encountered while
collecting arguments and push/pop of a definition. Check GNU and course
recursion rules independently and preserve source provenance in both.

The dormant controls compared `75a3086f9` and `dba87c421` on CPU 71. Both
compilers used GCC 15. Frozen C++ at `-O3` and SQLite at `-O2` emitted
byte-identical objects. The A/A task-clock ranges were 31.71% and 12.14%.

| Input | A/A instruction range | ABBA instruction change | BAAB instruction change |
| --- | ---: | ---: | ---: |
| C++ `semantic_overload.cpp` | 0.00492% | +0.00056% | +0.00152% |
| SQLite `sqlite3.c` | 0.00329% | +0.00214% | +0.00376% |

| Input | Block | Retired user-space instructions in trial order |
| --- | --- | --- |
| C++ | A/A | 9,046,550,039 / 9,046,756,768 / 9,046,479,453 / 9,046,924,746 |
| C++ | ABBA | 9,046,888,651 / 9,046,735,951 / 9,046,926,185 / 9,046,671,629 |
| C++ | BAAB | 9,046,692,664 / 9,046,581,110 / 9,046,733,613 / 9,046,896,184 |
| SQLite | A/A | 16,515,252,642 / 16,515,194,721 / 16,515,277,166 / 16,515,738,012 |
| SQLite | ABBA | 16,515,179,033 / 16,515,792,879 / 16,515,893,565 / 16,515,799,543 |
| SQLite | BAAB | 16,515,831,965 / 16,515,795,755 / 16,514,868,281 / 16,516,074,552 |

## GNU C type classification and complex-to-real conversion

The type-query input has one enumerator per row with an array type-name and
a compound-literal expression query. It runs in syntax-only mode. The
conversion input returns the real component of a complex float parameter
from each function. It emits an object at `-O0`. Both use pedantic C99.
Each table entry is the median of three runs on the same Linux x86-64 CPU.

| Input | User instructions at 256 / 512 / 1024 / 2048 | Peak RSS in KiB at the same sizes |
| --- | ---: | ---: |
| Type queries | 12,994,583 / 22,083,653 / 40,212,589 / 76,684,023 | 7,944 / 8,600 / 10,060 / 12,148 |
| Complex-to-real functions | 18,296,648 / 32,605,619 / 61,138,355 / 118,403,170 | 10,108 / 11,448 / 12,196 / 14,964 |

The incremental instruction cost per row stays within 1% across the
three measured doublings in each series. The compiler records the category
from the typed operand and lowers a runtime conversion by loading and
converting the real component after evaluating the source. The hosted
macro-expansion scaling work described above remains open.

The baseline is `df9af5e56`. Both GCC 15-built compilers emit byte-identical
objects in the frozen C++ `-O3` and SQLite `-O2` controls. The A/A task-clock
ranges were 2.18% and 35.22%. The instruction results show no increase.

| Input | Instruction A/A range | ABBA instruction change | BAAB instruction change |
| --- | ---: | ---: | ---: |
| C++ `semantic_overload.cpp` | 0.0035% | −0.0063% | −0.0097% |
| SQLite `sqlite3.c` | 0.0045% | −0.0031% | −0.0032% |

| Input | Block | Retired user-space instructions in trial order |
| --- | --- | --- |
| C++ | A/A | 9,046,638,175 / 9,046,716,387 / 9,046,746,189 / 9,046,950,648 |
| C++ | ABBA | 9,046,880,728 / 9,046,287,336 / 9,046,220,866 / 9,046,765,484 |
| C++ | BAAB | 9,046,310,361 / 9,047,142,518 / 9,047,073,291 / 9,046,146,915 |
| SQLite | A/A | 16,515,874,604 / 16,516,421,707 / 16,515,705,778 / 16,515,680,734 |
| SQLite | ABBA | 16,515,993,268 / 16,515,559,766 / 16,515,261,475 / 16,515,836,536 |
| SQLite | BAAB | 16,515,371,440 / 16,515,739,868 / 16,516,061,066 / 16,515,374,842 |

## Clang C overloadable declarations and calls

The declaration input gives one function a different record parameter
in each prototype and calls it once. The call input uses three
arithmetic overloads and puts 16 nested selections in each function.
Both inputs use pedantic C99 and syntax-only mode. Each cell is the
median of three runs on Linux x86-64.

| Input | User instructions at 256 / 512 / 1024 / 2048 | Peak RSS in KiB at the same sizes |
| --- | ---: | ---: |
| Record-parameter overloads | 13,371,796 / 22,900,858 / 41,763,849 / 79,515,803 | 8,616 / 9,360 / 11,416 / 15,640 |
| Calls in groups of 16 | 6,282,069 / 8,549,142 / 13,092,300 / 22,161,737 | 7,952 / 7,960 / 7,960 / 8,656 |

Incremental instructions per declaration or call stay within 1.1% across
the measured doublings. Separate object-mode telemetry reported 256
and 2,048 candidates for one call in the declaration input and 768 and
6,144 candidates for 256 and 2,048 calls in the call input. The existing
signature index and candidate machinery handle both. On the GCC 15
Linux build, the declaration, function entity, and candidate records
retain their original sizes. The preprocessor measurements above cover
the separate cost of macro argument expansion.

The baseline is `4fc97dcbe`. Both GCC 15-built compilers produced
byte-identical objects for frozen C++ at `-O3` and SQLite at `-O2`.
A/A task-clock ranges were 4.84% and 12.74%.

| Input | Instruction A/A range | ABBA instruction change | BAAB instruction change |
| --- | ---: | ---: | ---: |
| C++ `semantic_overload.cpp` | 0.0048% | +0.0216% | +0.0210% |
| SQLite `sqlite3.c` | 0.0008% | +0.0089% | +0.0115% |

| Input | Block | Retired user-space instructions in trial order |
| --- | --- | --- |
| C++ | A/A | 9,046,341,718 / 9,046,480,123 / 9,046,048,710 / 9,046,252,151 |
| C++ | ABBA | 9,046,370,852 / 9,048,356,496 / 9,048,194,317 / 9,046,270,287 |
| C++ | BAAB | 9,048,192,422 / 9,046,232,325 / 9,046,238,080 / 9,048,078,568 |
| SQLite | A/A | 16,515,280,191 / 16,515,212,297 / 16,515,339,640 / 16,515,291,758 |
| SQLite | ABBA | 16,515,504,037 / 16,517,034,642 / 16,517,061,987 / 16,515,649,122 |
| SQLite | BAAB | 16,517,440,309 / 16,515,545,113 / 16,515,216,815 / 16,517,135,777 |

## Forwarding expanded macro arguments

An expanded argument can contain ranges that another replacement cannot
expand further. The preprocessor retains these ranges across nested
substitutions. It scans each newly encountered run once for unpainted
bound identifiers. Those identifiers remain in the ordinary rescan, as
does any range saved before a macro binding changed. Reading a run for
ordinary tokens retains its whitespace, locations, and argument provenance.
Raw arguments for stringizing and pasting still consume tokens in source order.

The baseline is `828764da7`. Both binaries emit byte-identical typed
preprocessing streams and `-O2` objects for each input. The table gives the
median of three user-space instruction counts on the same Linux x86-64 CPU.
The last column counts entries stored directly in replacement contexts
using `preproc --stats`. A retained range takes one context entry.

| Depth | Wrapped before | Wrapped after | Direct after | Wrapped stored replacement entries |
| ---: | ---: | ---: | ---: | ---: |
| 8 | 10,209,911 | 8,910,965 | 8,915,144 | 13,440 |
| 16 | 21,898,693 | 13,848,351 | 13,776,780 | 26,880 |
| 32 | 61,883,652 | 23,714,808 | 23,503,039 | 53,760 |
| 64 | 208,310,479 | 43,438,585 | 42,948,627 | 107,520 |
| 128 | 767,027,062 | 82,887,470 | 81,838,454 | 215,040 |

At depth 128 the wrapped workload drops from 767.0 million to 82.9 million
instructions, within 1.3% of the direct form. Each added level costs about
616,000 instructions. A control with a bare bound function-like name at
the deepest argument goes from 767.4 million to 88.3 million instructions
at depth 128 and emits identical debug objects. That input exercises reuse
on both sides of a name that still needs ordinary rescanning.

The frozen C++ `-O3` and SQLite `-O2` controls also emit byte-identical
objects. The paired instructions and A/A ranges quantify the cost on the
ordinary compilation path. The A/A task-clock ranges were 11.76% and 22.58%.

| Input | Instruction A/A range | ABBA instruction change | BAAB instruction change |
| --- | ---: | ---: | ---: |
| C++ `semantic_overload.cpp` | 0.0034% | +0.0468% | +0.0449% |
| SQLite `sqlite3.c` | 0.0021% | +0.0506% | +0.0473% |

| Input | Block | Retired user-space instructions in trial order |
| --- | --- | --- |
| C++ | A/A | 9,048,134,989 / 9,048,284,797 / 9,048,134,052 / 9,047,975,064 |
| C++ | ABBA | 9,048,122,688 / 9,052,584,623 / 9,052,317,190 / 9,048,309,348 |
| C++ | BAAB | 9,052,359,757 / 9,048,284,671 / 9,048,282,698 / 9,052,338,179 |
| SQLite | A/A | 16,518,259,786 / 16,518,085,204 / 16,518,325,483 / 16,517,978,577 |
| SQLite | ABBA | 16,517,777,818 / 16,526,044,313 / 16,526,601,404 / 16,518,151,027 |
| SQLite | BAAB | 16,525,895,996 / 16,517,894,047 / 16,518,367,857 / 16,525,976,252 |

## C enumeration constants

An ordinary C enum records each constant's `int` value as it is analyzed
and chooses the compatible enum object type from whether any member is
negative. The nonnegative `int` range uses a single value comparison.
The GNU wide-enum path uses the existing bounded search over integer
representations. Tag lookup probes the existing name index once per
enclosing scope and shares the enum entity across forward declarations.

The syntax-only C17 workload increases the number of members in one enum.
Each initializer after the first adds `1UL` to the preceding enumerator.
The `-O2` objects return the last value and match byte-for-byte. The table
gives median user-space instructions from three runs pinned to one Linux
x86-64 CPU. The baseline is `c8fc31e02` and the compiler with the range
check and completion checks is `d912aaebb`.

| Members | Baseline | Updated | Change |
| ---: | ---: | ---: | ---: |
| 128 | 5,442,933 | 5,476,179 | +0.61% |
| 256 | 7,290,494 | 7,357,336 | +0.92% |
| 512 | 11,065,221 | 11,199,289 | +1.21% |
| 1024 | 17,753,653 | 18,022,447 | +1.51% |
| 2048 | 33,348,151 | 33,886,304 | +1.61% |
| 4096 | 64,385,599 | 65,462,355 | +1.67% |

The additional work is about 263 instructions per member at the larger
sizes. Before the direct range check, the 4096-member test used 65,989,937
instructions. The frozen C++ `-O3` and SQLite `-O2` objects are also
byte-identical. The largest paired instruction change is +0.0037% on C++
and +0.0015% on SQLite. Task-clock A/A ranges were 25.79% and 20.05%.

| Input | Block | Retired user-space instructions in trial order |
| --- | --- | --- |
| C++ | A/A | 9,052,368,807 / 9,052,141,346 / 9,052,308,515 / 9,052,371,738 |
| C++ | ABBA | 9,052,326,357 / 9,052,585,298 / 9,052,780,679 / 9,052,372,666 |
| C++ | BAAB | 9,052,812,474 / 9,052,419,735 / 9,052,294,721 / 9,052,502,853 |
| SQLite | A/A | 16,526,398,400 / 16,526,111,538 / 16,526,136,291 / 16,526,376,891 |
| SQLite | ABBA | 16,526,637,155 / 16,526,144,970 / 16,527,039,941 / 16,526,067,193 |
| SQLite | BAAB | 16,526,011,191 / 16,526,623,191 / 16,525,847,028 / 16,526,144,855 |

## Retaining floating literal encodings

The compiler now carries an ordinary floating constant's target type and
rounded bits from phase 7 to semantic evaluation and lowering. The
streaming token keeps a pointer to the two-word encoding in the spelling
arena. Only the floating literal nodes retain that pointer. Both native
scanner formats and software-rounded formats use the same path.

Each input contains one initialized global per literal, with 20 fractional
digits for double and 51 for binary128. The compiler builds each C input
with `-O0 -c -std=gnu17` and the same GCC 15 host environment. The
baseline is `fde6c550c`. Each pair emits byte-identical objects.
Values below are median retired user-space instructions in paired AABB
and BBAA blocks pinned to the same Linux x86-64 CPU.

| Literals | Double before | Double after | Binary128 before | Binary128 after |
| ---: | ---: | ---: | ---: | ---: |
| 128 | 6,156,494 | 5,879,575 | 12,580,368 | 9,216,958 |
| 256 | 8,486,408 | 7,932,187 | 21,331,056 | 14,605,182 |
| 512 | 13,207,403 | 12,091,418 | 38,895,438 | 25,442,480 |
| 1024 | 22,584,096 | 20,357,139 | 73,960,807 | 47,057,886 |
| 2048 | 41,520,614 | 37,073,285 | 144,272,389 | 90,470,564 |
| 4096 | 79,765,844 | 70,857,854 | 285,265,629 | 177,667,492 |

At 4096 literals, the instruction count drops by 11.17% for double and
37.72% for binary128. The frozen GNU C++11 `-O3` and SQLite GNU17
`-O2` controls also emit byte-identical objects. The paired C++
instruction changes are +0.00495% and +0.00658%. The SQLite changes are
−0.00417% and −0.00025%. The A/A task-clock ranges are 10.38% and 2.77%.

| Input | Block | Retired user-space instructions in trial order |
| --- | --- | --- |
| C++ | A/A | 9,052,371,263 / 9,052,700,665 / 9,052,590,894 / 9,052,478,408 |
| C++ | ABBA | 9,052,648,459 / 9,053,206,250 / 9,053,121,456 / 9,052,782,787 |
| C++ | BAAB | 9,053,198,425 / 9,052,438,948 / 9,052,571,169 / 9,053,002,126 |
| SQLite | A/A | 16,526,331,461 / 16,526,012,575 / 16,526,182,594 / 16,526,018,237 |
| SQLite | ABBA | 16,526,043,266 / 16,525,783,818 / 16,525,668,162 / 16,526,787,873 |
| SQLite | BAAB | 16,526,395,805 / 16,526,237,799 / 16,526,376,595 / 16,526,136,389 |

## GNU attributes in C declarators

The parser consumes a leading GNU attribute sequence once before deciding
whether a nested declarator or a parameter clause follows. The decision
uses the next declarator tokens. Semantic analysis visits retained nested
attributes only when the parser recorded a nested type modifier. The
markers fit in the existing `Attribute` and `Declarator` layout.

The GNU17 syntax-only scaling input contains one function pointer typedef
per declaration. The attributed input adds two GNU attribute groups
inside the parentheses, one containing `unused` and one empty. Counts
are medians of three trials pinned to one Linux x86-64 CPU. The baseline
is `b575690d1`.

| Typedefs | Plain baseline | Plain updated | Attributed updated |
| ---: | ---: | ---: | ---: |
| 128 | 5,785,747 | 5,801,164 | 7,057,283 |
| 256 | 7,788,941 | 7,819,645 | 10,244,737 |
| 512 | 11,846,364 | 11,912,584 | 16,741,501 |
| 1024 | 19,916,493 | 20,048,829 | 29,812,252 |
| 2048 | 36,108,814 | 36,393,672 | 56,035,835 |
| 4096 | 68,512,065 | 69,040,695 | 108,358,475 |

At the largest doubling the updated compiler uses about 25,550 retired
instructions per additional attributed declaration. The plain typedef
stress case uses 0.77% more instructions at 4096 declarations. Frozen C++
`-O3` and SQLite `-O2` objects match byte-for-byte. The paired instruction
changes are +0.029% and +0.031% for C++, and +0.010% and +0.009% for
SQLite. The variation in A/A task clock was about 4% and 5% respectively.

| Input | Block | Retired user-space instructions in trial order |
| --- | --- | --- |
| C++ | A/A | 9,053,173,138 / 9,053,098,131 / 9,053,097,640 / 9,053,125,988 |
| C++ | ABBA | 9,053,233,062 / 9,055,834,433 / 9,055,836,825 / 9,053,242,843 |
| C++ | BAAB | 9,055,914,869 / 9,053,016,061 / 9,053,149,586 / 9,055,932,324 |
| SQLite | A/A | 16,525,575,170 / 16,525,757,170 / 16,525,736,309 / 16,525,587,276 |
| SQLite | ABBA | 16,525,640,687 / 16,527,177,384 / 16,527,350,627 / 16,525,682,231 |
| SQLite | BAAB | 16,527,380,228 / 16,526,144,427 / 16,526,095,194 / 16,527,892,020 |

## C literal universal character names

The lexer attaches one flag in an existing byte of padding.
`PPToken` remains 40 bytes on the measured host. The escape path sets the
flag while it decodes the hexadecimal value. String and character
conversion read the flag after macro replacement. The location and
edition policy are consulted only for a marked literal.

Each GNU17 `-O2` input declares one character array per literal. The
second set has three basic or control character escapes in each literal.
The compiler uses the GNU extension policy without pedantic diagnostics
for these two inputs. All objects match their baseline at `3eb732c30`
byte-for-byte. The counts are median retired user-space instructions
from ABBA and BAAB blocks pinned to one Linux x86-64 CPU.

| Arrays | Ordinary before | Ordinary after | Escaped before | Escaped after |
| ---: | ---: | ---: | ---: | ---: |
| 128 | 7,162,760 | 7,170,846 | 7,225,262 | 7,237,968 |
| 256 | 10,511,222 | 10,519,296 | 10,638,744 | 10,655,942 |
| 512 | 17,454,596 | 17,467,178 | 17,707,814 | 17,748,443 |
| 1024 | 30,860,627 | 30,888,426 | 31,374,696 | 31,434,520 |
| 2048 | 57,494,665 | 57,534,904 | 58,537,196 | 58,641,968 |
| 4096 | 110,322,388 | 110,409,723 | 112,405,719 | 112,658,594 |

At 4096 arrays, ordinary literals use 0.079% more instructions and the
escaped workload uses 0.225% more. The frozen C++ `-O3` and SQLite
`-O2` objects also match byte-for-byte. Their paired instruction changes
are +0.020% and +0.023% for C++ and +0.013% and +0.012% for SQLite.
The A/A task clock varied by about 12% and 14% respectively.

| Input | Block | Retired user-space instructions in trial order |
| --- | --- | --- |
| C++ | A/A | 9,055,693,959 / 9,055,895,567 / 9,055,852,213 / 9,055,850,917 |
| C++ | ABBA | 9,055,947,864 / 9,057,659,138 / 9,057,729,143 / 9,055,804,934 |
| C++ | BAAB | 9,058,106,755 / 9,056,181,532 / 9,055,566,762 / 9,057,787,817 |
| SQLite | A/A | 16,527,246,618 / 16,527,646,795 / 16,527,118,443 / 16,527,301,660 |
| SQLite | ABBA | 16,527,313,862 / 16,529,403,345 / 16,529,268,711 / 16,527,110,804 |
| SQLite | BAAB | 16,529,394,686 / 16,527,442,789 / 16,527,584,106 / 16,529,494,391 |

## C99 identifier ranges

The ASCII classification and byte-run scan use the same tests in
every mode. The C99 non-ASCII path searches a fixed set of 245 sorted
intervals with 16-bit endpoints. First characters also check the
Annex D digit intervals. A raw code point and its escaped spelling
use the same classification and interned name. Token pasting uses
the edition already resolved for the translation unit.

Each C99 `-O2` input declares and defines the same set of global names.
The ASCII input uses `name` before each numeric suffix. The Unicode
inputs use a Greek pi followed by a Thai digit, with the declaration
written in raw UTF-8 or as two UCNs. Each pair emits byte-identical
objects. Median user-space instructions from ABBA and BAAB blocks
compare with baseline `9b288ff72` on one Linux x86-64 CPU.

| Names | ASCII before | ASCII after | UTF-8 before | UTF-8 after | UCN before | UCN after |
| ---: | ---: | ---: | ---: | ---: | ---: | ---: |
| 128 | 6,953,864 | 6,956,462 | 7,111,954 | 7,133,360 | 7,179,641 | 7,201,989 |
| 256 | 10,100,752 | 10,104,214 | 10,268,658 | 10,312,148 | 10,407,282 | 10,450,696 |
| 512 | 16,707,922 | 16,711,162 | 16,671,049 | 16,753,759 | 16,953,186 | 17,037,382 |
| 1024 | 29,280,160 | 29,285,672 | 29,278,212 | 29,438,040 | 29,850,642 | 30,013,276 |
| 2048 | 53,987,794 | 53,999,072 | 54,759,115 | 55,082,845 | 55,920,434 | 56,250,933 |
| 4096 | 102,980,068 | 103,004,037 | 105,642,014 | 106,285,056 | 107,988,802 | 108,660,817 |

The largest inputs use 0.023% more instructions for ASCII and 0.61%
and 0.62% more for the two Unicode inputs. The frozen C++ and SQLite
objects match byte-for-byte. C++ paired changes are +0.0014% and
+0.0025%. SQLite changes are −0.0005% and +0.0012%. Task-clock A/A
ranges were about 14% and 12%, so the comparison uses instructions.

| Input | Block | Retired user-space instructions in trial order |
| --- | --- | --- |
| C++ | A/A | 9,057,949,595 / 9,057,998,850 / 9,057,673,853 / 9,057,824,387 |
| C++ | ABBA | 9,057,730,011 / 9,057,806,214 / 9,057,941,896 / 9,057,772,091 |
| C++ | BAAB | 9,058,064,938 / 9,057,839,365 / 9,057,891,507 / 9,058,113,780 |
| SQLite | A/A | 16,529,246,728 / 16,529,209,661 / 16,529,410,992 / 16,529,834,957 |
| SQLite | ABBA | 16,529,877,995 / 16,529,471,978 / 16,529,452,640 / 16,529,199,682 |
| SQLite | BAAB | 16,529,622,166 / 16,529,457,787 / 16,529,279,597 / 16,529,511,099 |

## GNU scalar range designators

The compiler resolves the winning scalar intervals from the written
designators. It reuses the value of each surviving range and emits bounded
loops for repeated automatic stores. One range and two overwrites emit 59
lines of LowIR for an automatic array of 4,096, 262,144, 16,777,216 or
268,435,456 bytes. Across those sizes the instruction counts range from
3,948,198 to 3,949,827 and peak RSS ranges from 17,288 to 17,380 KiB.
An explicitly zero-initialized static range at the same widths emits three
lines and stays between 3,807,031 and 3,807,877 instructions. Nonzero static
data still takes space proportional to the initialized bytes.

At a fixed extent of 65,536 bytes, a full dynamic range is followed by
two-element range overwrites at distinct intervals. `-fsyntax-only` rejects
a decreasing range and therefore exercises endpoint analysis. The LowIR
run includes lowering and text emission. Counts are retired user-space
instructions on Linux x86-64 in GNU17 at `-O0`.

| Written overwrites | Syntax only | LowIR emission | LowIR lines | LowIR peak KiB |
| ---: | ---: | ---: | ---: | ---: |
| 512 | 9,588,183 | 27,454,559 | 18,451 | 17,952 |
| 1024 | 15,317,338 | 51,429,722 | 36,883 | 17,364 |
| 2048 | 26,749,158 | 100,280,159 | 73,747 | 20,392 |
| 4096 | 49,852,892 | 199,198,385 | 147,475 | 31,956 |
| 8192 | 96,216,693 | 400,061,788 | 294,931 | 56,276 |

Relative to `71cc67844`, the frozen C++ and SQLite objects matched by
SHA-256 in every run. The C++ instruction changes were −0.0017% in ABBA
and −0.0001% in BAAB. SQLite changed by +0.0006% and +0.0003%.
The respective A/A ranges were 0.0009% and 0.0035%.

| Input | Block | Retired user-space instructions in trial order |
| --- | --- | --- |
| C++ | A/A | 9,057,794,228 / 9,057,864,224 / 9,057,831,423 / 9,057,875,953 |
| C++ | ABBA | 9,057,830,051 / 9,057,511,571 / 9,057,701,399 / 9,057,685,503 |
| C++ | BAAB | 9,057,796,881 / 9,057,733,077 / 9,058,091,078 / 9,058,002,036 |
| SQLite | A/A | 16,530,178,352 / 16,529,801,531 / 16,529,606,938 / 16,529,731,251 |
| SQLite | ABBA | 16,529,503,384 / 16,529,641,847 / 16,529,604,469 / 16,529,544,246 |
| SQLite | BAAB | 16,530,219,449 / 16,530,216,914 / 16,529,693,097 / 16,529,787,150 |

An additional control uses 8,192 point designators at every second
index, with a constant initializer and an implicit zero between writes.
Each `-O0 -c` object matches its parent exactly. The static array control
uses 0.6820% and 0.6821% more instructions in ABBA and BAAB. The automatic
array uses 0.6395% and 0.6397% more. The `-fsyntax-only` automatic control
rises from 66.58 to 67.02 million instructions, placing most of the added
work before lowering. A scratch build that reuses the existing point
nodes across ranges and orders writes by their initializer generation
uses 66.91 million instructions on that input. That isolates part of
the cost without changing the size of the typed records. Include the
point-only control when changing range resolution for aggregate paths.
