# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.437696 | 1.165139 | 1.298985 | 0.002048 | 0.002054 | 0.001964 |
| constrained_ops.test | RUN | 0.478945 | 1.236997 | 1.482081 | 0.002027 | 0.002046 | 0.002066 |
| cpp-next_bug.test | RUN | 0.493386 | 1.334742 | 1.572903 | 0.001890 | 0.001776 | 0.001810 |
| deep_copy.test | RUN | 0.426528 | 1.198879 | 1.290580 | 0.001901 | 0.001931 | 0.001904 |
| display_expr.test | RUN | 0.522281 | 1.469559 | 1.613443 | 0.002143 | 0.002023 | 0.002066 |
| deduce_domain.test | RUN | 0.407172 | 1.033378 | 1.191651 | 0.002043 | 0.001791 | 0.001759 |
| env_var.test | RUN | 0.565441 | 2.602006 | 1.917828 | 0.002284 | 0.002274 | 0.002102 |
| examples.test | RUN | 0.531922 | 1.626888 | 1.817423 | 0.002098 | 0.001869 | 0.002000 |
| external_transforms.test | RUN | 0.531965 | 1.411655 | 1.629015 | 0.001748 | 0.002052 | 0.002036 |
| lambda.test | RUN | 0.511009 | 1.424658 | 1.639442 | 0.002006 | 0.002129 | 0.001755 |
| make_expr.test | RUN | 0.520646 | 2.363761 | 1.747000 | 0.002177 | 0.002376 | 0.002220 |
| matches.test | RUN | 0.456750 | 1.183579 | 1.417705 | 0.001984 | 0.002158 | 0.002142 |
| flatten.test | RUN | 0.885603 | 3.457629 | 3.512795 | 0.002124 | 0.002141 | 0.002099 |
| switch.test | RUN | 0.451893 | 1.187963 | 1.338989 | 0.001963 | 0.001978 | 0.001986 |
| toy_spirit.test | RUN | 0.504732 | 1.488787 | 1.691097 | 0.002106 | 0.002134 | 0.001891 |
| toy_spirit2.test | RUN | 0.546055 | 1.565223 | 1.811359 | 0.001901 | 0.001990 | 0.001944 |
| make.test | RUN | 0.441224 | 1.513775 | 1.323649 | 0.002312 | 0.002310 | 0.002356 |
| mem_ptr.test | RUN | 0.564382 | 2.468776 | 1.935198 | 0.002176 | 0.002415 | 0.002167 |
| mpl.test | RUN | 0.487634 | 1.234485 | 1.467413 | 0.002116 | 0.002154 | 0.002007 |
| noinvoke.test | RUN | 0.424049 | 1.043959 | 1.203916 | 0.001813 | 0.002160 | 0.001992 |
| pack_expansion.test | RUN | 0.511371 | 1.551479 | 1.609711 | 0.001532 | 0.001525 | 0.002083 |
| protect.test | RUN | 0.386205 | 1.051032 | 0.882574 | 0.001468 | 0.001560 | 0.001502 |
| bug2407.test | COMPILE | 0.293798 | 0.657396 | 0.877826 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.989× | 0.986×, 0.991× | 1.000× |
| clang | 0.976× | 0.979×, 0.973× | 0.993× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44818861403).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001277s | 0.001243s | 0.001237s | byte equality observed |
| constrained_ops.test | 10 | 0.001237s | 0.001230s | 0.001200s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001253s | 0.001233s | 0.001206s | byte equality observed |
| deduce_domain.test | 10 | 0.001231s | 0.001217s | 0.001213s | byte equality observed |
| deep_copy.test | 10 | 0.001230s | 0.001233s | 0.001206s | byte equality observed |
| display_expr.test | 10 | 0.001222s | 0.001250s | 0.001203s | byte equality observed |
| env_var.test | 10 | 0.001340s | 0.001316s | 0.001302s | byte equality observed |
| examples.test | 10 | 0.001284s | 0.001289s | 0.001231s | byte equality observed |
| external_transforms.test | 10 | 0.001272s | 0.001237s | 0.001230s | byte equality observed |
| flatten.test | 10 | 0.001275s | 0.001277s | 0.001235s | byte equality observed |
| lambda.test | 10 | 0.001270s | 0.001265s | 0.001216s | byte equality observed |
| make.test | 10 | 0.001293s | 0.001266s | 0.001261s | byte equality observed |
| make_expr.test | 10 | 0.001390s | 0.001353s | 0.001340s | byte equality observed |
| matches.test | 10 | 0.001252s | 0.001268s | 0.001231s | byte equality observed |
| mem_ptr.test | 10 | 0.001338s | 0.001332s | 0.001318s | byte equality observed |
| mpl.test | 10 | 0.001257s | 0.001227s | 0.001208s | byte equality observed |
| noinvoke.test | 10 | 0.001220s | 0.001191s | 0.001243s | byte equality observed |
| pack_expansion.test | 10 | 0.001249s | 0.001247s | 0.001229s | byte equality observed |
| protect.test | 10 | 0.001257s | 0.001222s | 0.001220s | byte equality observed |
| switch.test | 10 | 0.001243s | 0.001237s | 0.001239s | byte equality observed |
| toy_spirit.test | 10 | 0.001258s | 0.001236s | 0.001222s | byte equality observed |
| toy_spirit2.test | 10 | 0.001247s | 0.001232s | 0.001221s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44818861403).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
