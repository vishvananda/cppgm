# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.469152 | 1.203071 | 1.332881 | 0.002057 | 0.002508 | 0.002104 |
| constrained_ops.test | RUN | 0.510304 | 1.291503 | 1.497723 | 0.002016 | 0.002510 | 0.002018 |
| cpp-next_bug.test | RUN | 0.520276 | 1.382558 | 1.628459 | 0.001897 | 0.002058 | 0.001997 |
| deep_copy.test | RUN | 0.447604 | 1.212696 | 1.308487 | 0.002022 | 0.002210 | 0.002146 |
| display_expr.test | RUN | 0.550704 | 1.548505 | 1.622187 | 0.002453 | 0.002333 | 0.002044 |
| deduce_domain.test | RUN | 0.436328 | 1.052909 | 1.193130 | 0.002281 | 0.002054 | 0.002014 |
| env_var.test | RUN | 0.591540 | 2.668856 | 1.991433 | 0.002575 | 0.002568 | 0.002325 |
| examples.test | RUN | 0.565135 | 1.725186 | 1.810751 | 0.002186 | 0.002318 | 0.001877 |
| external_transforms.test | RUN | 0.544210 | 1.454139 | 1.647797 | 0.002529 | 0.002247 | 0.002415 |
| lambda.test | RUN | 0.529341 | 1.509859 | 1.660355 | 0.002296 | 0.002189 | 0.002025 |
| make_expr.test | RUN | 0.526311 | 2.463902 | 1.781444 | 0.002507 | 0.002790 | 0.002427 |
| matches.test | RUN | 0.470385 | 1.219194 | 1.457827 | 0.002157 | 0.002333 | 0.001992 |
| flatten.test | RUN | 0.947413 | 3.640772 | 3.554229 | 0.002361 | 0.002487 | 0.002100 |
| switch.test | RUN | 0.466783 | 1.243897 | 1.342543 | 0.002364 | 0.002225 | 0.001862 |
| toy_spirit.test | RUN | 0.536691 | 1.548611 | 1.749496 | 0.002281 | 0.002560 | 0.002040 |
| toy_spirit2.test | RUN | 0.578392 | 1.634618 | 1.853502 | 0.002197 | 0.002234 | 0.002091 |
| make.test | RUN | 0.458561 | 1.584758 | 1.341760 | 0.002487 | 0.002456 | 0.002464 |
| mem_ptr.test | RUN | 0.578744 | 2.585301 | 1.998067 | 0.002543 | 0.002805 | 0.002330 |
| mpl.test | RUN | 0.507390 | 1.305616 | 1.473019 | 0.002334 | 0.002397 | 0.002156 |
| noinvoke.test | RUN | 0.445599 | 1.065922 | 1.246574 | 0.002593 | 0.002357 | 0.002011 |
| pack_expansion.test | RUN | 0.490435 | 1.609914 | 1.615766 | 0.001688 | 0.002306 | 0.002128 |
| protect.test | RUN | 0.440883 | 1.047464 | 0.976030 | 0.001663 | 0.001583 | 0.001477 |
| bug2407.test | COMPILE | 0.414426 | 0.759490 | 0.750710 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.995× | 0.990×, 0.999× | 1.015× |
| clang | 0.977× | 0.974×, 0.979× | 0.995× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46092715613).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001280s | 0.001269s | 0.001265s | byte equality observed |
| constrained_ops.test | 10 | 0.001298s | 0.001280s | 0.001239s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001244s | 0.001264s | 0.001246s | byte equality observed |
| deduce_domain.test | 10 | 0.001262s | 0.001265s | 0.001215s | byte equality observed |
| deep_copy.test | 10 | 0.001255s | 0.001267s | 0.001207s | byte equality observed |
| display_expr.test | 10 | 0.001288s | 0.001274s | 0.001207s | byte equality observed |
| env_var.test | 10 | 0.001348s | 0.001383s | 0.001324s | byte equality observed |
| examples.test | 10 | 0.001284s | 0.001254s | 0.001253s | byte equality observed |
| external_transforms.test | 10 | 0.001252s | 0.001277s | 0.001260s | byte equality observed |
| flatten.test | 10 | 0.001274s | 0.001304s | 0.001266s | byte equality observed |
| lambda.test | 10 | 0.001257s | 0.001245s | 0.001249s | byte equality observed |
| make.test | 10 | 0.001321s | 0.001321s | 0.001261s | byte equality observed |
| make_expr.test | 10 | 0.001399s | 0.001431s | 0.001375s | byte equality observed |
| matches.test | 10 | 0.001292s | 0.001261s | 0.001260s | byte equality observed |
| mem_ptr.test | 10 | 0.001373s | 0.001357s | 0.001353s | byte equality observed |
| mpl.test | 10 | 0.001304s | 0.001274s | 0.001248s | byte equality observed |
| noinvoke.test | 10 | 0.001258s | 0.001239s | 0.001224s | byte equality observed |
| pack_expansion.test | 10 | 0.001282s | 0.001257s | 0.001251s | byte equality observed |
| protect.test | 10 | 0.001285s | 0.001263s | 0.001254s | byte equality observed |
| switch.test | 10 | 0.001271s | 0.001245s | 0.001220s | byte equality observed |
| toy_spirit.test | 10 | 0.001247s | 0.001234s | 0.001234s | byte equality observed |
| toy_spirit2.test | 10 | 0.001261s | 0.001247s | 0.001252s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46092715613).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
