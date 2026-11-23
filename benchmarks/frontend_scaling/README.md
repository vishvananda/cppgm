# Frontend scaling inputs

Generate each input once outside the checkout, then use the identical bytes
and immutable compiler binaries for paired comparisons. These inputs supplement
the frozen self-compile workload; they do not replace or modify its epoch.

```sh
python3 benchmarks/frontend_scaling/generate.py parameter-bases 32768 > /tmp/bases.cpp
dev/cppgm -std=c++11 -fsyntax-only /tmp/bases.cpp
```

`parameter-bases` declares independent class templates inheriting their type
parameter. Registering one template's bases must not scan other templates.
Compare sizes 8192, 16384 and 32768 against `plain-templates` at matching sizes
to separate base bookkeeping from the ordinary cost of reading declarations.
Instruction counts should grow approximately linearly; use calibrated paired
blocks for wall-time claims. Retain every observation and check output equality
when comparing compile or AST output.

`independent-defaults` declares a class template with `size` default type
arguments, all `int`, and demands its complete specialization with no explicit
arguments. `chained-defaults` instead makes each default name the previous
parameter. Compare sizes 256, 512 and 1024: forming the defaults must not copy
every earlier argument's binding for each omitted parameter. Check both
instruction counts and peak memory.

`nested-chained-defaults` demands that specialization inside another template
definition. It also checks that dependence of the preceding argument prefix
is accumulated once, rather than scanning the prefix for every default.

`macro-replacements` exercises nested function macros, ordinary replacement
tokens, argument prescan, concatenation and empty replacements. Each generated
conditional checks its expansion's value. The final C++ declaration is tiny,
so a full compile measures the macro workload without a large parser, semantic
or backend workload obscuring it. Use sizes 8000, 16000 and 32000; compare GCC
on exactly the same generated input as well as comparing compiler snapshots.

## C

`c-macro-binding-stack` nests saves of one macro and interleaves them with
saves of fresh names. The preprocessor checks that each pop restores the
previous value or the undefined binding. `c-redeclarations` alternates
compatible complete and incomplete array declarations for one entity. The
final program checks the completed array and its initializer.

Generate each at 4096, 8192 and 16384 units. Measure C17 syntax-only and
source-to-object compilation. Check the program exit through the same C link
driver for each measured input. Use the retired instruction deltas between
successive sizes to compare incremental work.

`c-generic-arrays` and `c-generic-prototypes` generate one list of distinct
pointer types and check selection with a static assertion. Compare 512,
1024, 2048, and 4096 associations in C17 syntax-only mode.
`c-generic-short-lists` repeats a small type-generic macro in different
static assertions. Compare it using calibrated runs at 4096, 8192, and
16384 uses to isolate the cost of ordinary short lists.

`c-ice-atoms` repeats a static assertion with a single integer literal.
`c-ice-chain` grows the number of additions in one static assertion. Measure
both in C17 syntax-only mode by successive doublings. The atomic input
isolates fixed overhead per query. The arithmetic chain checks work growth
when each operand needs classification and evaluation.

`c-static-atoms` and `c-static-expressions` write the same static array from
integer literals or additions. Measure C17 `-fsyntax-only` and `-O0 -c` at
512 through 4096 values by successive doublings. The syntax-only run measures
validation and the object run includes reuse during emission. Compare objects
with the parent build and run the generated program to check the data.

`c-alignment-prefix` and `c-alignment-interleaved` declare the same
over-aligned object. They place a growing number of alignment specifiers
before or between repeated qualifiers, respectively. Double the count in
C17 syntax-only mode, then check that both orders emit identical objects.

`c-vla-declarators` generates independent declarations that share an element
type and each have their own runtime bound. Compare it against
`c-fixed-array-declarators` at 1024, 2048, 4096, and 8192 functions in C17
syntax-only mode to isolate runtime array type interning.

`c-vla-dimensions` grows one typedef with alternating runtime and fixed
dimensions. `c-vla-extent-uses` holds the rank fixed and grows the number
of references to a captured extent. Compare syntax-only and `-O0 -c`
costs separately. Each generated program checks the resulting size.

`c-typeof-shared-bounds` varies the number of typedef declarators sharing a
GNU `typeof` specifier. The program checks that the cast bound is captured
once, the other effects run for each declarator, and all aliases use the
captured extent. Compare 128, 256, 512, and 1024 declarators in GNU17 mode.
Measure syntax-only and `-O0 -c` separately, then link and run the objects.

`c-designated-overwrites` repeatedly designates one nested member and checks
the final value. Measure 128 through 2048 entries by successive doublings.
`c-designated-sparse` uses one designator and varies the inferred array
length from 16,384 through 131,072. Measure C17 syntax-only for both inputs
to isolate the cost of analyzing the written initializers.

`c-composite-redeclarations` grows a chain of compatible declarations
with a bound supplied through a pointer. `c-tentative-arrays` grows the
number of distinct file-scope arrays that are still incomplete at the end
of the translation unit. `c-linked-redeclarations` grows the number of
blocks that refine the declaration of an object with external linkage.
`c-block-first-redeclarations` introduces the same object in a block first
and declares it at file scope after the blocks.
Measure C17 syntax-only from 256 through 4096 by successive doublings.
`c-block-function-redeclarations` introduces one function across a growing
number of sibling scopes before its first file-scope declaration.
`c-block-function-names` uses a distinct function per block. Use the same
size series for both and compare the incremental cost per declaration.
`c-conditional-composites` checks the result bound of repeated conditional
expressions. `c-inline-late-linkage` defines functions whose later
file-scope declarations supply external definitions, exercising the deferred
inline constraints. Use the same syntax-only size series for both.

## C++14, C++17 and C++20

The edition inputs cover the feature families in [LANGUAGE_PROFILE.md](../../LANGUAGE_PROFILE.md).
Each generated unit has fixed setup and a requested number of declarations,
evaluations, or suspensions. The hosted cases include the selected standard
library headers. Use the same host standard library for native compiler
comparisons. [The scaling report](../../docs/performance/cxx-edition-scaling.md)
lists the edition and workload for each measurement.

Generate inputs at 32, 64, 128 and 256 units and keep each input's hash.
Use 512, 1024, 2048 and 4096 for distinct overload signatures and the
two member-template hiding stress cases. Use 128, 256, 512 and 1024 for
`constraint-head-overloads` and `constraint-trailing-overloads`, which hold
the type signature fixed. Use 8, 12, 16 and 18 for `shared-constraint`.
There each unit adds one disjunction to the shared concept used by two
overloads. The legacy implementation may take substantially longer at
larger sizes. For `constexpr-heap-loop`, use 512, 1024, 2048 and 4096
allocations inside one evaluation. The other constexpr inputs use independent
evaluations.

```sh
work=$(mktemp -d)
for size in 32 64 128 256; do
  input="$work/constraints-$size.cpp"
  python3 benchmarks/frontend_scaling/generate.py constraints-cxx20 "$size" > "$input"
  sha256sum "$input"
  perf stat -x, -e instructions:u,cycles:u,branch-misses:u \
    /path/to/cppgm-candidate -std=c++20 -fsyntax-only "$input"
  perf stat -x, -e instructions:u,cycles:u,branch-misses:u \
    /path/to/cppgm-candidate -std=c++20 -O0 -c "$input" -o "$work/candidate.o"
done
/path/to/cppgm-candidate --stats -std=c++20 -O0 -c "$input" -o "$work/candidate.o"
```

For a candidate comparison, capture A/A and interleave A/B in ABBA and BAAB
order with immutable binaries. Keep raw observations. Use the existing
[compile A/B runner](../../scripts/run_ab_compile_benchmark.py) for elapsed
and CPU time, peak RSS and byte equality. It compares objects exactly by
default. For GCC or Clang comparisons, use the same source, edition, standard
library and output kind. Compiler-specific object bytes can differ. The
inputs use compile-time assertions for their semantics, and
`coroutine-suspensions` also checks execution when linked and run.

Subtract counts at consecutive sizes and divide by the added units to see
whether marginal work grows. For example, the instruction increment from 128
to 256 should be about twice the increment from 64 to 128 for linear work.
Use the syntax-only counts to distinguish semantic growth from object
generation, and collect `--stats` in a separate invocation. A useful
older-language control is to compile `overload-declarations` as both C++17
and C++20, since its source is identical and neither needs a constraint.
