# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.429733 | 1.160746 | 1.332571 | 0.001952 | 0.002146 | 0.001844 |
| constrained_ops.test | RUN | 0.486043 | 1.243842 | 1.478523 | 0.001967 | 0.001975 | 0.001937 |
| cpp-next_bug.test | RUN | 0.493918 | 1.345068 | 1.520538 | 0.001719 | 0.002126 | 0.001989 |
| deep_copy.test | RUN | 0.422254 | 1.199856 | 1.357708 | 0.001904 | 0.002096 | 0.002249 |
| display_expr.test | RUN | 0.510862 | 1.483438 | 1.640933 | 0.002102 | 0.002009 | 0.002208 |
| deduce_domain.test | RUN | 0.397680 | 1.047715 | 1.187216 | 0.002150 | 0.001999 | 0.002036 |
| env_var.test | RUN | 0.553128 | 2.600313 | 1.940643 | 0.002081 | 0.002259 | 0.002188 |
| examples.test | RUN | 0.524040 | 1.647620 | 1.794222 | 0.001846 | 0.001549 | 0.001953 |
| external_transforms.test | RUN | 0.515836 | 1.414660 | 1.613166 | 0.001765 | 0.001870 | 0.002033 |
| lambda.test | RUN | 0.504857 | 1.440548 | 1.636370 | 0.002215 | 0.001990 | 0.001974 |
| make_expr.test | RUN | 0.506284 | 2.406950 | 1.724542 | 0.002118 | 0.002402 | 0.002287 |
| matches.test | RUN | 0.452679 | 1.187008 | 1.420978 | 0.001802 | 0.002007 | 0.002096 |
| flatten.test | RUN | 0.856428 | 3.463962 | 3.527434 | 0.002201 | 0.002101 | 0.002160 |
| switch.test | RUN | 0.440614 | 1.171254 | 1.333605 | 0.002038 | 0.002136 | 0.001964 |
| toy_spirit.test | RUN | 0.498133 | 1.507168 | 1.712730 | 0.002113 | 0.002153 | 0.002169 |
| toy_spirit2.test | RUN | 0.537058 | 1.595266 | 1.859705 | 0.001796 | 0.002013 | 0.001964 |
| make.test | RUN | 0.433696 | 1.506598 | 1.323510 | 0.002079 | 0.002164 | 0.002209 |
| mem_ptr.test | RUN | 0.560507 | 2.514190 | 1.913830 | 0.002378 | 0.002285 | 0.002417 |
| mpl.test | RUN | 0.483559 | 1.222936 | 1.466204 | 0.002093 | 0.002145 | 0.002057 |
| noinvoke.test | RUN | 0.418384 | 1.056842 | 1.184601 | 0.001825 | 0.001999 | 0.001962 |
| pack_expansion.test | RUN | 0.446481 | 1.551770 | 1.444142 | 0.001496 | 0.001480 | 0.002032 |
| protect.test | RUN | 0.370360 | 1.021265 | 1.010808 | 0.001428 | 0.001474 | 0.001396 |
| bug2407.test | COMPILE | 0.370979 | 0.696607 | 0.804438 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.990× | 0.994×, 0.987× | 1.003× |
| clang | 0.985× | 0.990×, 0.980× | 0.992× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44780058957).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001265s | 0.001248s | 0.001215s | byte equality observed |
| constrained_ops.test | 10 | 0.001252s | 0.001267s | 0.001218s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001249s | 0.001233s | 0.001221s | byte equality observed |
| deduce_domain.test | 10 | 0.001226s | 0.001221s | 0.001198s | byte equality observed |
| deep_copy.test | 10 | 0.001238s | 0.001234s | 0.001207s | byte equality observed |
| display_expr.test | 10 | 0.001266s | 0.001234s | 0.001237s | byte equality observed |
| env_var.test | 10 | 0.001328s | 0.001313s | 0.001334s | byte equality observed |
| examples.test | 10 | 0.001285s | 0.001281s | 0.001233s | byte equality observed |
| external_transforms.test | 10 | 0.001246s | 0.001218s | 0.001221s | byte equality observed |
| flatten.test | 10 | 0.001252s | 0.001269s | 0.001241s | byte equality observed |
| lambda.test | 10 | 0.001254s | 0.001201s | 0.001233s | byte equality observed |
| make.test | 10 | 0.001293s | 0.001275s | 0.001251s | byte equality observed |
| make_expr.test | 10 | 0.001368s | 0.001375s | 0.001348s | byte equality observed |
| matches.test | 10 | 0.001250s | 0.001242s | 0.001233s | byte equality observed |
| mem_ptr.test | 10 | 0.001338s | 0.001333s | 0.001295s | byte equality observed |
| mpl.test | 10 | 0.001240s | 0.001217s | 0.001239s | byte equality observed |
| noinvoke.test | 10 | 0.001222s | 0.001213s | 0.001225s | byte equality observed |
| pack_expansion.test | 10 | 0.001257s | 0.001248s | 0.001241s | byte equality observed |
| protect.test | 10 | 0.001231s | 0.001240s | 0.001233s | byte equality observed |
| switch.test | 10 | 0.001236s | 0.001228s | 0.001203s | byte equality observed |
| toy_spirit.test | 10 | 0.001224s | 0.001209s | 0.001222s | byte equality observed |
| toy_spirit2.test | 10 | 0.001242s | 0.001242s | 0.001215s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44780058957).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
