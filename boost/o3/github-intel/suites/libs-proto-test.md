# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.447885 | 1.169551 | 1.309614 | 0.002091 | 0.002248 | 0.001940 |
| constrained_ops.test | RUN | 0.508318 | 1.257367 | 1.463678 | 0.001992 | 0.002219 | 0.001873 |
| cpp-next_bug.test | RUN | 0.520811 | 1.366824 | 1.517539 | 0.001685 | 0.002131 | 0.001889 |
| deep_copy.test | RUN | 0.435544 | 1.190711 | 1.362329 | 0.002065 | 0.001964 | 0.001854 |
| display_expr.test | RUN | 0.524362 | 1.477847 | 1.648065 | 0.002164 | 0.002020 | 0.002008 |
| deduce_domain.test | RUN | 0.413584 | 1.048934 | 1.183494 | 0.002384 | 0.001975 | 0.001984 |
| env_var.test | RUN | 0.567852 | 2.597275 | 1.923757 | 0.002529 | 0.002448 | 0.002185 |
| examples.test | RUN | 0.540838 | 1.669755 | 1.785306 | 0.002302 | 0.002080 | 0.002026 |
| external_transforms.test | RUN | 0.538243 | 1.434700 | 1.621153 | 0.002363 | 0.002059 | 0.002181 |
| lambda.test | RUN | 0.515930 | 1.447139 | 1.627497 | 0.002193 | 0.002297 | 0.001952 |
| make_expr.test | RUN | 0.509555 | 2.438725 | 1.728600 | 0.002471 | 0.002709 | 0.002329 |
| matches.test | RUN | 0.455274 | 1.189622 | 1.413308 | 0.001990 | 0.002094 | 0.002243 |
| flatten.test | RUN | 0.900786 | 3.516424 | 3.505670 | 0.002170 | 0.002370 | 0.001912 |
| switch.test | RUN | 0.457789 | 1.190277 | 1.310850 | 0.002004 | 0.002298 | 0.001968 |
| toy_spirit.test | RUN | 0.513138 | 1.523371 | 1.709925 | 0.002088 | 0.002168 | 0.001835 |
| toy_spirit2.test | RUN | 0.539591 | 1.595253 | 1.803655 | 0.002004 | 0.002020 | 0.001917 |
| make.test | RUN | 0.430079 | 1.531923 | 1.306860 | 0.002373 | 0.002362 | 0.002187 |
| mem_ptr.test | RUN | 0.568764 | 2.543232 | 1.998077 | 0.002443 | 0.002346 | 0.002139 |
| mpl.test | RUN | 0.509243 | 1.240240 | 1.460507 | 0.001948 | 0.002713 | 0.001904 |
| noinvoke.test | RUN | 0.433675 | 1.063558 | 1.200343 | 0.001995 | 0.002012 | 0.002142 |
| pack_expansion.test | RUN | 0.462917 | 1.574625 | 1.617667 | 0.001810 | 0.002282 | 0.002121 |
| protect.test | RUN | 0.429880 | 1.077279 | 1.021166 | 0.001647 | 0.001606 | 0.001438 |
| bug2407.test | COMPILE | 0.403231 | 0.688654 | 0.756152 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.995× | 0.993×, 0.997× | 1.006× |
| clang | 0.976× | 0.974×, 0.978× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45710374989).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001280s | 0.001242s | 0.001244s | byte equality observed |
| constrained_ops.test | 10 | 0.001281s | 0.001251s | 0.001187s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001246s | 0.001224s | 0.001217s | byte equality observed |
| deduce_domain.test | 10 | 0.001247s | 0.001240s | 0.001198s | byte equality observed |
| deep_copy.test | 10 | 0.001249s | 0.001284s | 0.001227s | byte equality observed |
| display_expr.test | 10 | 0.001263s | 0.001285s | 0.001229s | byte equality observed |
| env_var.test | 10 | 0.001339s | 0.001331s | 0.001307s | byte equality observed |
| examples.test | 10 | 0.001301s | 0.001283s | 0.001222s | byte equality observed |
| external_transforms.test | 10 | 0.001261s | 0.001248s | 0.001220s | byte equality observed |
| flatten.test | 10 | 0.001286s | 0.001271s | 0.001260s | byte equality observed |
| lambda.test | 10 | 0.001265s | 0.001251s | 0.001268s | byte equality observed |
| make.test | 10 | 0.001314s | 0.001297s | 0.001302s | byte equality observed |
| make_expr.test | 10 | 0.001374s | 0.001411s | 0.001361s | byte equality observed |
| matches.test | 10 | 0.001262s | 0.001232s | 0.001251s | byte equality observed |
| mem_ptr.test | 10 | 0.001343s | 0.001351s | 0.001302s | byte equality observed |
| mpl.test | 10 | 0.001239s | 0.001253s | 0.001285s | byte equality observed |
| noinvoke.test | 10 | 0.001239s | 0.001221s | 0.001209s | byte equality observed |
| pack_expansion.test | 10 | 0.001260s | 0.001249s | 0.001226s | byte equality observed |
| protect.test | 10 | 0.001248s | 0.001264s | 0.001294s | byte equality observed |
| switch.test | 10 | 0.001273s | 0.001231s | 0.001230s | byte equality observed |
| toy_spirit.test | 10 | 0.001257s | 0.001241s | 0.001208s | byte equality observed |
| toy_spirit2.test | 10 | 0.001231s | 0.001258s | 0.001220s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45710374989).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
