# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.433519 | 1.206194 | 1.336012 | 0.002447 | 0.002287 | 0.002029 |
| constrained_ops.test | RUN | 0.502061 | 1.273531 | 1.501844 | 0.002085 | 0.002066 | 0.001940 |
| cpp-next_bug.test | RUN | 0.505978 | 1.368853 | 1.602543 | 0.001908 | 0.002404 | 0.001932 |
| deep_copy.test | RUN | 0.428211 | 1.227486 | 1.320323 | 0.001750 | 0.002384 | 0.001848 |
| display_expr.test | RUN | 0.524719 | 1.507762 | 1.646330 | 0.002239 | 0.002327 | 0.002232 |
| deduce_domain.test | RUN | 0.411618 | 1.057891 | 1.208484 | 0.002073 | 0.002462 | 0.001998 |
| env_var.test | RUN | 0.569438 | 2.676121 | 1.952617 | 0.002238 | 0.002415 | 0.002256 |
| examples.test | RUN | 0.541590 | 1.669000 | 1.828124 | 0.001903 | 0.002194 | 0.001968 |
| external_transforms.test | RUN | 0.533678 | 1.443750 | 1.631891 | 0.002407 | 0.002234 | 0.001914 |
| lambda.test | RUN | 0.512904 | 1.466707 | 1.631958 | 0.002205 | 0.002245 | 0.002144 |
| make_expr.test | RUN | 0.517642 | 2.470977 | 1.750588 | 0.002313 | 0.002623 | 0.002591 |
| matches.test | RUN | 0.461118 | 1.192263 | 1.452788 | 0.001967 | 0.002113 | 0.002523 |
| flatten.test | RUN | 0.895409 | 3.598496 | 3.616132 | 0.002101 | 0.002465 | 0.002226 |
| switch.test | RUN | 0.448155 | 1.179282 | 1.344147 | 0.002309 | 0.002328 | 0.002191 |
| toy_spirit.test | RUN | 0.509732 | 1.531898 | 1.743189 | 0.002393 | 0.002171 | 0.002174 |
| toy_spirit2.test | RUN | 0.548142 | 1.625088 | 1.875168 | 0.002046 | 0.002122 | 0.002350 |
| make.test | RUN | 0.429547 | 1.561452 | 1.344283 | 0.002334 | 0.002466 | 0.002295 |
| mem_ptr.test | RUN | 0.580365 | 2.579712 | 2.004676 | 0.002364 | 0.002584 | 0.002453 |
| mpl.test | RUN | 0.513717 | 1.256203 | 1.490954 | 0.002039 | 0.002119 | 0.002236 |
| noinvoke.test | RUN | 0.435167 | 1.082298 | 1.235880 | 0.002249 | 0.002189 | 0.002275 |
| pack_expansion.test | RUN | 0.521947 | 1.535084 | 1.629704 | 0.001606 | 0.001577 | 0.002047 |
| protect.test | RUN | 0.336183 | 1.006445 | 1.060272 | 0.001580 | 0.001507 | 0.001570 |
| bug2407.test | COMPILE | 0.372885 | 0.714569 | 0.782833 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.989× | 0.981×, 0.996× | 1.007× |
| clang | 0.975× | 0.976×, 0.975× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45651777895).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001270s | 0.001252s | 0.001243s | byte equality observed |
| constrained_ops.test | 10 | 0.001274s | 0.001246s | 0.001223s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001257s | 0.001231s | 0.001231s | byte equality observed |
| deduce_domain.test | 10 | 0.001244s | 0.001223s | 0.001246s | byte equality observed |
| deep_copy.test | 10 | 0.001224s | 0.001214s | 0.001245s | byte equality observed |
| display_expr.test | 10 | 0.001243s | 0.001229s | 0.001226s | byte equality observed |
| env_var.test | 10 | 0.001328s | 0.001333s | 0.001352s | byte equality observed |
| examples.test | 10 | 0.001295s | 0.001268s | 0.001276s | byte equality observed |
| external_transforms.test | 10 | 0.001269s | 0.001220s | 0.001269s | byte equality observed |
| flatten.test | 10 | 0.001273s | 0.001260s | 0.001240s | byte equality observed |
| lambda.test | 10 | 0.001234s | 0.001229s | 0.001210s | byte equality observed |
| make.test | 10 | 0.001286s | 0.001275s | 0.001270s | byte equality observed |
| make_expr.test | 10 | 0.001395s | 0.001376s | 0.001355s | byte equality observed |
| matches.test | 10 | 0.001280s | 0.001262s | 0.001209s | byte equality observed |
| mem_ptr.test | 10 | 0.001359s | 0.001319s | 0.001309s | byte equality observed |
| mpl.test | 10 | 0.001226s | 0.001270s | 0.001213s | byte equality observed |
| noinvoke.test | 10 | 0.001240s | 0.001207s | 0.001208s | byte equality observed |
| pack_expansion.test | 10 | 0.001275s | 0.001264s | 0.001237s | byte equality observed |
| protect.test | 10 | 0.001267s | 0.001253s | 0.001232s | byte equality observed |
| switch.test | 10 | 0.001251s | 0.001214s | 0.001180s | byte equality observed |
| toy_spirit.test | 10 | 0.001236s | 0.001218s | 0.001207s | byte equality observed |
| toy_spirit2.test | 10 | 0.001244s | 0.001235s | 0.001180s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45651777895).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
