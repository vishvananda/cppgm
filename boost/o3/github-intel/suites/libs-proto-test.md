# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.425960 | 1.206455 | 1.305023 | 0.002356 | 0.002251 | 0.001786 |
| constrained_ops.test | RUN | 0.493963 | 1.293083 | 1.467193 | 0.001931 | 0.002216 | 0.001813 |
| cpp-next_bug.test | RUN | 0.505299 | 1.381546 | 1.575001 | 0.001772 | 0.002229 | 0.001713 |
| deep_copy.test | RUN | 0.421082 | 1.241870 | 1.273714 | 0.001962 | 0.001802 | 0.001791 |
| display_expr.test | RUN | 0.515398 | 1.525020 | 1.586727 | 0.002087 | 0.002162 | 0.001876 |
| deduce_domain.test | RUN | 0.401669 | 1.067104 | 1.180413 | 0.001983 | 0.002140 | 0.001860 |
| env_var.test | RUN | 0.548707 | 2.691019 | 1.957865 | 0.002226 | 0.002472 | 0.002207 |
| examples.test | RUN | 0.525962 | 1.692734 | 1.794793 | 0.001880 | 0.002127 | 0.001902 |
| external_transforms.test | RUN | 0.522543 | 1.460741 | 1.619398 | 0.002180 | 0.002529 | 0.001978 |
| lambda.test | RUN | 0.504547 | 1.499128 | 1.618039 | 0.001892 | 0.002501 | 0.002020 |
| make_expr.test | RUN | 0.504063 | 2.477421 | 1.736028 | 0.002294 | 0.002779 | 0.002230 |
| matches.test | RUN | 0.450398 | 1.216779 | 1.401351 | 0.002027 | 0.002222 | 0.001869 |
| flatten.test | RUN | 0.857983 | 3.583932 | 3.456978 | 0.002057 | 0.002431 | 0.001946 |
| switch.test | RUN | 0.443090 | 1.227799 | 1.307332 | 0.001974 | 0.002380 | 0.001907 |
| toy_spirit.test | RUN | 0.497815 | 1.561165 | 1.699390 | 0.002080 | 0.002399 | 0.001906 |
| toy_spirit2.test | RUN | 0.532180 | 1.678562 | 1.847405 | 0.001783 | 0.002361 | 0.001829 |
| make.test | RUN | 0.424581 | 1.570467 | 1.316912 | 0.002196 | 0.002525 | 0.001968 |
| mem_ptr.test | RUN | 0.554973 | 2.584522 | 1.915989 | 0.002050 | 0.002514 | 0.002011 |
| mpl.test | RUN | 0.479417 | 1.262625 | 1.442402 | 0.002038 | 0.002446 | 0.001877 |
| noinvoke.test | RUN | 0.420420 | 1.085425 | 1.200331 | 0.001849 | 0.002388 | 0.001891 |
| pack_expansion.test | RUN | 0.509749 | 1.605230 | 1.582815 | 0.001459 | 0.002503 | 0.001984 |
| protect.test | RUN | 0.309195 | 1.090456 | 0.887503 | 0.001495 | 0.001557 | 0.001486 |
| bug2407.test | COMPILE | 0.367375 | 0.708935 | 0.840809 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.991× | 0.987×, 0.995× | 1.000× |
| clang | 0.975× | 0.979×, 0.972× | 1.010× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44774088589).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001285s | 0.001238s | 0.001253s | byte equality observed |
| constrained_ops.test | 10 | 0.001270s | 0.001250s | 0.001236s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001254s | 0.001222s | 0.001228s | byte equality observed |
| deduce_domain.test | 10 | 0.001243s | 0.001227s | 0.001221s | byte equality observed |
| deep_copy.test | 10 | 0.001237s | 0.001217s | 0.001217s | byte equality observed |
| display_expr.test | 10 | 0.001262s | 0.001267s | 0.001189s | byte equality observed |
| env_var.test | 10 | 0.001371s | 0.001326s | 0.001311s | byte equality observed |
| examples.test | 10 | 0.001277s | 0.001274s | 0.001243s | byte equality observed |
| external_transforms.test | 10 | 0.001242s | 0.001237s | 0.001254s | byte equality observed |
| flatten.test | 10 | 0.001270s | 0.001264s | 0.001252s | byte equality observed |
| lambda.test | 10 | 0.001249s | 0.001236s | 0.001226s | byte equality observed |
| make.test | 10 | 0.001308s | 0.001311s | 0.001300s | byte equality observed |
| make_expr.test | 10 | 0.001380s | 0.001385s | 0.001352s | byte equality observed |
| matches.test | 10 | 0.001271s | 0.001249s | 0.001213s | byte equality observed |
| mem_ptr.test | 10 | 0.001346s | 0.001346s | 0.001312s | byte equality observed |
| mpl.test | 10 | 0.001252s | 0.001271s | 0.001236s | byte equality observed |
| noinvoke.test | 10 | 0.001210s | 0.001224s | 0.001225s | byte equality observed |
| pack_expansion.test | 10 | 0.001259s | 0.001250s | 0.001196s | byte equality observed |
| protect.test | 10 | 0.001252s | 0.001231s | 0.001221s | byte equality observed |
| switch.test | 10 | 0.001239s | 0.001234s | 0.001198s | byte equality observed |
| toy_spirit.test | 10 | 0.001242s | 0.001219s | 0.001207s | byte equality observed |
| toy_spirit2.test | 10 | 0.001253s | 0.001247s | 0.001220s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44774088589).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
