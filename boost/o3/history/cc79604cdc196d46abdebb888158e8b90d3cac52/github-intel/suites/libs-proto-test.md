# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.427598 | 1.162928 | 1.331341 | 0.001956 | 0.002022 | 0.001980 |
| constrained_ops.test | RUN | 0.492237 | 1.249297 | 1.481996 | 0.001979 | 0.002145 | 0.001864 |
| cpp-next_bug.test | RUN | 0.505635 | 1.342079 | 1.587599 | 0.001786 | 0.001977 | 0.001773 |
| deep_copy.test | RUN | 0.432173 | 1.185878 | 1.281657 | 0.001934 | 0.001812 | 0.001865 |
| display_expr.test | RUN | 0.504977 | 1.469382 | 1.572553 | 0.002092 | 0.001732 | 0.001865 |
| deduce_domain.test | RUN | 0.399909 | 1.044256 | 1.168817 | 0.002149 | 0.001900 | 0.001736 |
| env_var.test | RUN | 0.544432 | 2.569877 | 1.960667 | 0.002030 | 0.002231 | 0.002206 |
| examples.test | RUN | 0.522199 | 1.637982 | 1.823198 | 0.001840 | 0.001746 | 0.001966 |
| external_transforms.test | RUN | 0.514670 | 1.414773 | 1.610530 | 0.002115 | 0.001856 | 0.001989 |
| lambda.test | RUN | 0.503862 | 1.424396 | 1.599204 | 0.002288 | 0.002052 | 0.001736 |
| make_expr.test | RUN | 0.511604 | 2.369725 | 1.761859 | 0.002201 | 0.002490 | 0.002398 |
| matches.test | RUN | 0.454586 | 1.162976 | 1.400394 | 0.001970 | 0.002111 | 0.001872 |
| flatten.test | RUN | 0.876816 | 3.435553 | 3.498210 | 0.002097 | 0.002185 | 0.002310 |
| switch.test | RUN | 0.446048 | 1.178944 | 1.312224 | 0.002124 | 0.002179 | 0.001783 |
| toy_spirit.test | RUN | 0.506622 | 1.497284 | 1.718218 | 0.002171 | 0.002045 | 0.002077 |
| toy_spirit2.test | RUN | 0.542531 | 1.563513 | 1.793331 | 0.002030 | 0.002037 | 0.001779 |
| make.test | RUN | 0.423964 | 1.520328 | 1.295616 | 0.002258 | 0.002055 | 0.001816 |
| mem_ptr.test | RUN | 0.566229 | 2.493587 | 1.973682 | 0.001833 | 0.002202 | 0.002111 |
| mpl.test | RUN | 0.497283 | 1.225020 | 1.438448 | 0.002020 | 0.002138 | 0.001777 |
| noinvoke.test | RUN | 0.427424 | 1.043781 | 1.175123 | 0.001826 | 0.002142 | 0.001848 |
| pack_expansion.test | RUN | 0.514715 | 1.550068 | 1.608497 | 0.001447 | 0.002250 | 0.002050 |
| protect.test | RUN | 0.320939 | 1.003835 | 0.853296 | 0.001621 | 0.001458 | 0.001468 |
| bug2407.test | COMPILE | 0.373391 | 0.699775 | 0.852961 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.990× | 0.998×, 0.981× | 1.006× |
| clang | 0.978× | 0.978×, 0.977× | 1.007× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45241427099).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001282s | 0.001297s | 0.001251s | byte equality observed |
| constrained_ops.test | 10 | 0.001273s | 0.001245s | 0.001250s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001280s | 0.001249s | 0.001235s | byte equality observed |
| deduce_domain.test | 10 | 0.001258s | 0.001271s | 0.001227s | byte equality observed |
| deep_copy.test | 10 | 0.001269s | 0.001221s | 0.001228s | byte equality observed |
| display_expr.test | 10 | 0.001260s | 0.001270s | 0.001264s | byte equality observed |
| env_var.test | 10 | 0.001354s | 0.001335s | 0.001311s | byte equality observed |
| examples.test | 10 | 0.001310s | 0.001304s | 0.001261s | byte equality observed |
| external_transforms.test | 10 | 0.001271s | 0.001264s | 0.001254s | byte equality observed |
| flatten.test | 10 | 0.001281s | 0.001267s | 0.001279s | byte equality observed |
| lambda.test | 10 | 0.001269s | 0.001236s | 0.001231s | byte equality observed |
| make.test | 10 | 0.001305s | 0.001319s | 0.001273s | byte equality observed |
| make_expr.test | 10 | 0.001404s | 0.001388s | 0.001344s | byte equality observed |
| matches.test | 10 | 0.001265s | 0.001257s | 0.001246s | byte equality observed |
| mem_ptr.test | 10 | 0.001345s | 0.001315s | 0.001335s | byte equality observed |
| mpl.test | 10 | 0.001282s | 0.001289s | 0.001217s | byte equality observed |
| noinvoke.test | 10 | 0.001245s | 0.001217s | 0.001231s | byte equality observed |
| pack_expansion.test | 10 | 0.001281s | 0.001272s | 0.001208s | byte equality observed |
| protect.test | 10 | 0.001267s | 0.001238s | 0.001262s | byte equality observed |
| switch.test | 10 | 0.001247s | 0.001225s | 0.001261s | byte equality observed |
| toy_spirit.test | 10 | 0.001230s | 0.001222s | 0.001231s | byte equality observed |
| toy_spirit2.test | 10 | 0.001251s | 0.001232s | 0.001219s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45241427099).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
