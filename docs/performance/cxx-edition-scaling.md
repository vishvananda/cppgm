# C++14, C++17 and C++20 compile-time scaling

The frozen self-compile workload uses C++11. The
[edition scaling inputs](../../benchmarks/frontend_scaling/README.md)
exercise the later feature families directly, with separate syntax-only and
`-O0 -c` runs. Every input has fixed setup and an adjustable number of
declarations, evaluations or suspension points. The original frozen inputs
remain available for the existing comparison against main.

## Measurement setup

The host was an x86-64 Xeon E5-2696 v4 with GCC 15.2 and Clang 21.1.8.
cppgm and the native controls used GCC 15's libstdc++ headers. The cppgm
comparison used immutable builds of `55ef9a51d` and `feaff0685`. Each
comparison used the same input bytes and checked object and diagnostic
equality. GCC and Clang compiled the same source and standard where their
language support permitted. The largest cppgm size used an A/A block, ABBA
and BAAB. Smaller sizes used ABBA. The runner captured all observations,
including wall time, user and system time, RSS, cycles, branch misses and
retired user-space instructions. The tables use retired instructions on
the shared host. The A/A instruction spread was below 0.52% for 30 of
31 workloads and 3.37% for the legacy shared-constraint stress case.

## Scaling stress cases

Each row shows the largest measured input and the median for source to
object compilation. Numbers are millions of retired instructions.

| Workload | Units | Before | After | Change |
| --- | ---: | ---: | ---: | ---: |
| Distinct template signatures | 4,096 | 233.74 | 140.51 | -39.89% |
| Distinct constrained member signatures | 4,096 | 360.65 | 176.45 | -51.07% |
| Same signature, distinct head constraints | 1,024 | 3,638.77 | 50.48 | -98.61% |
| Same signature, distinct trailing constraints | 1,024 | 4,156.60 | 51.87 | -98.75% |
| Dependent member hiding, import first | 4,096 | 6,480.19 | 597.85 | -90.77% |
| Dependent member hiding, import last | 4,096 | 4,899.80 | 593.37 | -87.89% |
| Shared conjunction of disjunctions | 18 | 3,366.23 | 5.74 | -99.83% |
| Sequential constexpr allocations | 4,096 | 143.87 | 143.89 | +0.01% |

The namespace trailing-constraint case also went from about 211 MiB of
peak RSS to 11 MiB. The old path created parameter scopes during each
pairwise comparison. The indexed path uses the same semantic comparison
for possible matches and visits each new variant's structural key once.
The declaration index allocates sparse entries only after signatures
collide. The primary signature still uses the ordinary overload table.
[Function constraints](../../dev/src/sema/function_constraints.cpp) ·
[Name lookup](../../dev/src/sema/lookup.cpp)

The class import index is initialized once for each affected class and
name. A cached type fingerprint identifies candidates for the existing
typed member-hiding comparison. Each imported overload keeps its
predecessor, so hiding it updates the overload list directly. Ordinary
overload nodes retain their original size. The stress cases with 4,096
members used about 3 MiB more peak memory for the indices. The small
import-only workload used about 2% more instructions and retained linear
growth. [Member hiding](../../dev/src/sema/analyzer.cpp) ·
[Type fingerprint](../../dev/src/sema/template_specializations.cpp)

Constraint ordering now follows shared conjunction and disjunction edges
before enumerating clauses. The search visits each reachable connective
once, using normalized node identity and preserving the written
evaluation order. General implication still uses the existing proof
when the shared structure does not decide it.
[Constraint normalization](../../dev/src/sema/constraint_normalization.cpp)

## Feature-family coverage

Each row uses 256 repeated units. Counts are millions of retired
instructions for source to object compilation. The growth column compares
the increase from 128 to 256 units with the increase from 64 to 128 units.
A value near 2 indicates a steady per-unit cost. The native columns are
single-sample controls on the same source.

| Workload | Edition and behavior | cppgm | GCC | Clang | Growth |
| --- | --- | ---: | ---: | ---: | ---: |
| `literals-cxx14` | 14 · Binary literals and digit separators | 14.77 | 45.28 | 61.90 | 1.94 |
| `literals-cxx17` | 17 · Hex floats and UTF-8 character literals | 10.46 | 37.06 | 51.51 | 2.00 |
| `literals-cxx20` | 20 · Distinct UTF-8 code units, literals and literal operators | 24.90 | 77.20 | 97.08 | 2.00 |
| `optional-macros` | 20 · Optional replacement, pasting and stringization | 17.42 | 59.35 | 63.66 | 2.00 |
| `constexpr-cxx14` | 14 · Relaxed constexpr and variable templates | 26.89 | 66.90 | 110.71 | 2.00 |
| `aggregate-cxx14` | 14 · Contextual conversion and aggregate member defaults | 39.43 | 112.61 | 133.40 | 2.01 |
| `lambda-cxx14` | 14 · Generic lambdas, init captures and `decltype(auto)` | 59.30 | 1,030.96 | 380.72 | 2.00 |
| `lookup-cxx17` | 17 · Nested namespaces, attributes and using expansions | 47.62 | 111.18 | 164.02 | 2.00 |
| `aggregate-cxx17` | 17 · Aggregate bases, result objects, inline variables and aligned new | 97.00 | 999.51 | 445.99 | 2.00 |
| `control-cxx17` | 17 · Selection initializers and discarded branches | 21.90 | 85.62 | 95.56 | 2.01 |
| `deduction-cxx17` | 17 · Template-template parameters, auto arguments, deduction guides and folds | 36.51 | 112.64 | 176.03 | 2.03 |
| `classes-cxx17` | 17 · `[*this]`, constexpr closures, structured bindings, enum lists and noexcept types | 93.57 | 525.71 | 539.27 | 2.00 |
| `lookup-cxx20` | 20 · Using-enum, individual enumerators, implied typename and bit-field defaults | 47.00 | 107.46 | 290.59 | 2.00 |
| `comparison-cxx20` | 20 · Three-way and defaulted comparisons, rewritten candidates | 323.39 | 2,475.99 | 3,029.51 | 1.99 |
| `constraints-cxx20` | 20 · Concepts, requirements, abbreviated functions, constrained friends and placeholders | 102.11 | 353.37 | 490.54 | 1.97 |
| `lambda-cxx20` | 20 · Explicit and invented lambda parameters, constraints, unevaluated lambda types | 60.89 | 228.47 | 202.04 | 2.00 |
| `constexpr-cxx20` | 20 · Immediate evaluation, constant initialization, allocation, destruction and try | 31.53 | 112.79 | 137.02 | 1.98 |
| `structural-cxx20` | 20 · Structural arguments and parameter objects | 62.16 | 560.87 | 338.33 | 2.01 |
| `locations-cxx20` | 20 · Hosted source locations | 71.45 | 710.70 | 366.62 | 2.00 |
| `library-cxx17` | 17 · Hosted optional, variant and string views | 367.98 | 2,183.45 | 1,650.39 | 2.00 |
| `using-member-templates` | 17 · Class imports without competing member templates | 16.51 | 115.68 | 173.57 | 2.01 |
| `using-pack-imports` | 17 · Imports across a pack of distinct bases | 15.30 | 95.54 | 195.31 | 1.99 |
| `coroutine-suspensions` | 20 · Hosted yield, await and return | 144.50 | 1,247.69 | 1,381.83 | 2.00 |

Clang accepted both dependent hiding stress inputs. GCC reported ambiguity
for their matching member calls. Both accepted the import-only controls.
The large shared-constraint workload was measured with cppgm.
The coroutine input also runs the coroutine and checks its promise result.

## Architecture review

- Parsing remains based on the existing token window and syntax tree.
  Optional variadic tokens are marked in the replacement list and processed
  as macro expansion demands them. System-header diagnostics use source
  provenance and sparse, ordered warning-state changes.
  [Preprocessor](../../dev/src/preprocess/preprocessor.cpp) ·
  [Macro expansion](../../dev/src/preprocess/macro/macro_expander.cpp)
- Type and name lookup use canonical types and interned identifiers.
  Structural argument values and constraint identities retain typed facts.
  The extra state for imports and overloaded constraints lives in
  translation-unit indexes. Expected misses use indexed lookups and
  ordinary constraint rejection still returns a substitution result.
  [Function constraints](../../dev/src/sema/function_constraints.cpp) ·
  [Constraint evaluation](../../dev/src/sema/constraints.cpp)
- The constexpr interpreter uses typed operand facts, amortized storage
  and generation-checked allocation indices. The storage lookup remains
  constant-time across allocation and deletion. The repeated fixed-size
  allocation probe grew linearly in instructions through 4,096 allocations.
  [Constant allocation](../../dev/src/sema/constant_allocation.cpp)
- Coroutine lowering uses the analyzed promise, awaiter and suspension
  facts. It uses the control-flow graph and dominance information to
  identify values needing frame slots. Both separate syntax and object
  counts scaled linearly in the suspension workload.
  [Coroutine analysis](../../dev/src/sema/analyzer_coroutines.cpp) ·
  [Coroutine storage](../../dev/src/lower/coroutine_storage.cpp)

The namespace constraint index requires stable lexical context. Same-signature
members in an incomplete class still compare the relevant variants because
later class declarations can affect their operands. The ordinary overload
index keeps unrelated signatures out of that comparison. General
subsumption can still be expensive for formulas without shared structure.
[Architectural requirements](../../spec.md)

## Frozen comparison

The comparison used immutable builds of main `f14c300df` and the candidate,
with the usual frozen inputs and three translation units from main.
All eleven workloads matched outputs byte for byte across the paired
blocks. Retired instruction counts ranged from effectively flat to
0.81% lower.

| Input | Change in retired instructions |
| --- | ---: |
| O0 | -0.0666% |
| O1 | -0.0264% |
| O2 | -0.0180% |
| O3 | -0.0150% |
| strict-syntax | -0.1238% |
| hosted-preprocess | -0.8103% |
| library17 | -0.4502% |
| analyzer declarations | -0.3060% |
| parser statements | -0.1035% |
| host environment | -0.2341% |
| syntax-only | -0.2541% |
