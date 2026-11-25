# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.446852 | 1.186418 | 1.307777 | 0.002333 | 0.002077 | 0.002108 |
| constrained_ops.test | RUN | 0.502379 | 1.276375 | 1.476744 | 0.001963 | 0.002119 | 0.001904 |
| cpp-next_bug.test | RUN | 0.517748 | 1.359757 | 1.591562 | 0.001930 | 0.001960 | 0.002026 |
| deep_copy.test | RUN | 0.430348 | 1.225965 | 1.301496 | 0.002135 | 0.002028 | 0.001692 |
| display_expr.test | RUN | 0.526330 | 1.508777 | 1.612318 | 0.002168 | 0.002151 | 0.001823 |
| deduce_domain.test | RUN | 0.418001 | 1.051715 | 1.178545 | 0.002154 | 0.002180 | 0.001900 |
| env_var.test | RUN | 0.567254 | 2.672157 | 1.959583 | 0.002217 | 0.002602 | 0.002187 |
| examples.test | RUN | 0.533883 | 1.670621 | 1.803602 | 0.002084 | 0.001946 | 0.001664 |
| external_transforms.test | RUN | 0.537815 | 1.445087 | 1.617036 | 0.002169 | 0.002210 | 0.001939 |
| lambda.test | RUN | 0.520284 | 1.468763 | 1.623147 | 0.002101 | 0.002182 | 0.001672 |
| make_expr.test | RUN | 0.521364 | 2.426216 | 1.733474 | 0.002381 | 0.002460 | 0.002420 |
| matches.test | RUN | 0.459733 | 1.190166 | 1.411233 | 0.001996 | 0.002206 | 0.001866 |
| flatten.test | RUN | 0.903199 | 3.550195 | 3.513655 | 0.002247 | 0.002302 | 0.001865 |
| switch.test | RUN | 0.448972 | 1.182259 | 1.326929 | 0.002476 | 0.002070 | 0.001841 |
| toy_spirit.test | RUN | 0.506958 | 1.536181 | 1.708392 | 0.002172 | 0.002223 | 0.002049 |
| toy_spirit2.test | RUN | 0.553246 | 1.610993 | 1.865983 | 0.002182 | 0.002253 | 0.002027 |
| make.test | RUN | 0.432742 | 1.546815 | 1.327220 | 0.002558 | 0.002292 | 0.002050 |
| mem_ptr.test | RUN | 0.570808 | 2.565385 | 1.930606 | 0.002490 | 0.002577 | 0.002111 |
| mpl.test | RUN | 0.521328 | 1.248144 | 1.453686 | 0.001958 | 0.002149 | 0.001948 |
| noinvoke.test | RUN | 0.436144 | 1.061911 | 1.205269 | 0.002209 | 0.002154 | 0.001983 |
| pack_expansion.test | RUN | 0.471252 | 1.571967 | 1.546219 | 0.001604 | 0.002187 | 0.002086 |
| protect.test | RUN | 0.421200 | 0.990337 | 0.998496 | 0.001564 | 0.001519 | 0.001421 |
| bug2407.test | COMPILE | 0.390285 | 0.746058 | 0.779677 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.988× | 0.984×, 0.992× | 1.004× |
| clang | 0.976× | 0.970×, 0.981× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45617981312).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001283s | 0.001272s | 0.001253s | byte equality observed |
| constrained_ops.test | 10 | 0.001272s | 0.001248s | 0.001263s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001249s | 0.001254s | 0.001236s | byte equality observed |
| deduce_domain.test | 10 | 0.001244s | 0.001249s | 0.001256s | byte equality observed |
| deep_copy.test | 10 | 0.001242s | 0.001260s | 0.001254s | byte equality observed |
| display_expr.test | 10 | 0.001271s | 0.001252s | 0.001239s | byte equality observed |
| env_var.test | 10 | 0.001402s | 0.001358s | 0.001312s | byte equality observed |
| examples.test | 10 | 0.001280s | 0.001314s | 0.001232s | byte equality observed |
| external_transforms.test | 10 | 0.001265s | 0.001224s | 0.001252s | byte equality observed |
| flatten.test | 10 | 0.001291s | 0.001263s | 0.001251s | byte equality observed |
| lambda.test | 10 | 0.001265s | 0.001218s | 0.001204s | byte equality observed |
| make.test | 10 | 0.001328s | 0.001312s | 0.001266s | byte equality observed |
| make_expr.test | 10 | 0.001382s | 0.001399s | 0.001367s | byte equality observed |
| matches.test | 10 | 0.001318s | 0.001265s | 0.001266s | byte equality observed |
| mem_ptr.test | 10 | 0.001358s | 0.001362s | 0.001311s | byte equality observed |
| mpl.test | 10 | 0.001249s | 0.001277s | 0.001211s | byte equality observed |
| noinvoke.test | 10 | 0.001250s | 0.001255s | 0.001204s | byte equality observed |
| pack_expansion.test | 10 | 0.001293s | 0.001288s | 0.001251s | byte equality observed |
| protect.test | 10 | 0.001265s | 0.001254s | 0.001235s | byte equality observed |
| switch.test | 10 | 0.001266s | 0.001222s | 0.001239s | byte equality observed |
| toy_spirit.test | 10 | 0.001250s | 0.001237s | 0.001225s | byte equality observed |
| toy_spirit2.test | 10 | 0.001252s | 0.001248s | 0.001230s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45617981312).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
