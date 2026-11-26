# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.426869 | 1.168421 | 1.280926 | 0.002162 | 0.002349 | 0.001673 |
| constrained_ops.test | RUN | 0.486016 | 1.265833 | 1.463789 | 0.001840 | 0.002086 | 0.001906 |
| cpp-next_bug.test | RUN | 0.501401 | 1.344069 | 1.519437 | 0.001868 | 0.002048 | 0.002079 |
| deep_copy.test | RUN | 0.426297 | 1.174878 | 1.340194 | 0.001952 | 0.002142 | 0.001904 |
| display_expr.test | RUN | 0.513308 | 1.501801 | 1.553493 | 0.002178 | 0.002229 | 0.001830 |
| deduce_domain.test | RUN | 0.402044 | 1.018789 | 1.193403 | 0.001959 | 0.001844 | 0.001918 |
| env_var.test | RUN | 0.552263 | 2.570275 | 1.903001 | 0.002182 | 0.002285 | 0.002046 |
| examples.test | RUN | 0.527250 | 1.657209 | 1.784280 | 0.001922 | 0.002030 | 0.001776 |
| external_transforms.test | RUN | 0.520600 | 1.406186 | 1.584450 | 0.002475 | 0.002060 | 0.001741 |
| lambda.test | RUN | 0.507837 | 1.451540 | 1.575897 | 0.001901 | 0.002212 | 0.001866 |
| make_expr.test | RUN | 0.508316 | 2.399714 | 1.714553 | 0.002263 | 0.002462 | 0.002230 |
| matches.test | RUN | 0.453324 | 1.175581 | 1.384338 | 0.001915 | 0.001805 | 0.001903 |
| flatten.test | RUN | 0.881917 | 3.468057 | 3.434448 | 0.002346 | 0.002250 | 0.001923 |
| switch.test | RUN | 0.443637 | 1.173618 | 1.318387 | 0.002356 | 0.002084 | 0.001884 |
| toy_spirit.test | RUN | 0.499071 | 1.513710 | 1.674561 | 0.002235 | 0.002112 | 0.002075 |
| toy_spirit2.test | RUN | 0.543123 | 1.598419 | 1.811160 | 0.002088 | 0.002035 | 0.001610 |
| make.test | RUN | 0.429461 | 1.524208 | 1.298294 | 0.002248 | 0.002344 | 0.001976 |
| mem_ptr.test | RUN | 0.572798 | 2.531943 | 1.907083 | 0.002246 | 0.002372 | 0.002125 |
| mpl.test | RUN | 0.499340 | 1.224889 | 1.431195 | 0.001978 | 0.002149 | 0.001805 |
| noinvoke.test | RUN | 0.421657 | 1.057548 | 1.162358 | 0.002079 | 0.002135 | 0.001867 |
| pack_expansion.test | RUN | 0.519793 | 1.557465 | 1.421218 | 0.001992 | 0.002230 | 0.001413 |
| protect.test | RUN | 0.334862 | 1.085612 | 0.989810 | 0.001437 | 0.001528 | 0.001413 |
| bug2407.test | COMPILE | 0.372144 | 0.679335 | 0.835456 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.995× | 0.999×, 0.992× | 1.003× |
| clang | 0.977× | 0.976×, 0.977× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45739944580).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001247s | 0.001257s | 0.001215s | byte equality observed |
| constrained_ops.test | 10 | 0.001267s | 0.001241s | 0.001217s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001238s | 0.001218s | 0.001214s | byte equality observed |
| deduce_domain.test | 10 | 0.001221s | 0.001234s | 0.001215s | byte equality observed |
| deep_copy.test | 10 | 0.001227s | 0.001219s | 0.001182s | byte equality observed |
| display_expr.test | 10 | 0.001245s | 0.001212s | 0.001215s | byte equality observed |
| env_var.test | 10 | 0.001323s | 0.001327s | 0.001306s | byte equality observed |
| examples.test | 10 | 0.001228s | 0.001208s | 0.001202s | byte equality observed |
| external_transforms.test | 10 | 0.001245s | 0.001279s | 0.001254s | byte equality observed |
| flatten.test | 10 | 0.001264s | 0.001241s | 0.001241s | byte equality observed |
| lambda.test | 10 | 0.001220s | 0.001209s | 0.001216s | byte equality observed |
| make.test | 10 | 0.001286s | 0.001279s | 0.001256s | byte equality observed |
| make_expr.test | 10 | 0.001361s | 0.001350s | 0.001321s | byte equality observed |
| matches.test | 10 | 0.001261s | 0.001246s | 0.001212s | byte equality observed |
| mem_ptr.test | 10 | 0.001310s | 0.001322s | 0.001280s | byte equality observed |
| mpl.test | 10 | 0.001234s | 0.001202s | 0.001245s | byte equality observed |
| noinvoke.test | 10 | 0.001195s | 0.001210s | 0.001197s | byte equality observed |
| pack_expansion.test | 10 | 0.001234s | 0.001224s | 0.001232s | byte equality observed |
| protect.test | 10 | 0.001234s | 0.001205s | 0.001199s | byte equality observed |
| switch.test | 10 | 0.001231s | 0.001213s | 0.001198s | byte equality observed |
| toy_spirit.test | 10 | 0.001224s | 0.001239s | 0.001213s | byte equality observed |
| toy_spirit2.test | 10 | 0.001232s | 0.001225s | 0.001193s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45739944580).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
