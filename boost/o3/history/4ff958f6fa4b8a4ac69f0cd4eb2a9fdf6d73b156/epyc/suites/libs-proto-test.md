# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.733733 | 1.964667 | 2.615363 | 0.003538 | 0.003865 | 0.003695 |
| constrained_ops.test | RUN | 0.857062 | 1.990115 | 2.874256 | 0.003526 | 0.003876 | 0.003762 |
| cpp-next_bug.test | RUN | 0.858321 | 2.247711 | 2.967518 | 0.003256 | 0.003972 | 0.003674 |
| deep_copy.test | RUN | 0.718242 | 1.886871 | 2.554703 | 0.003307 | 0.003565 | 0.003950 |
| display_expr.test | RUN | 0.864249 | 2.376687 | 2.938375 | 0.003575 | 0.003433 | 0.003846 |
| deduce_domain.test | RUN | 0.699113 | 1.672095 | 2.330170 | 0.003289 | 0.003322 | 0.003796 |
| env_var.test | RUN | 0.941281 | 4.038316 | 3.685423 | 0.004066 | 0.004401 | 0.004366 |
| examples.test | RUN | 0.883068 | 2.631296 | 3.458577 | 0.003551 | 0.003464 | 0.003219 |
| external_transforms.test | RUN | 0.872488 | 2.234282 | 3.148142 | 0.003432 | 0.003710 | 0.003331 |
| lambda.test | RUN | 0.844002 | 2.273435 | 3.179494 | 0.003372 | 0.003751 | 0.003806 |
| make_expr.test | RUN | 0.834392 | 3.683106 | 3.210578 | 0.004564 | 0.005366 | 0.005026 |
| matches.test | RUN | 0.757041 | 1.910729 | 2.722762 | 0.003466 | 0.003676 | 0.003807 |
| flatten.test | RUN | 1.430336 | 5.307504 | 6.529515 | 0.003860 | 0.004101 | 0.004049 |
| switch.test | RUN | 0.743824 | 1.852690 | 2.556193 | 0.003824 | 0.003886 | 0.003859 |
| toy_spirit.test | RUN | 0.853594 | 2.430004 | 3.270727 | 0.003252 | 0.003932 | 0.003641 |
| toy_spirit2.test | RUN | 0.890285 | 2.503252 | 3.536178 | 0.003320 | 0.004108 | 0.003549 |
| make.test | RUN | 0.752393 | 2.310552 | 2.520226 | 0.004008 | 0.004420 | 0.004262 |
| mem_ptr.test | RUN | 0.948322 | 3.890748 | 3.598592 | 0.004123 | 0.004459 | 0.004716 |
| mpl.test | RUN | 0.841679 | 1.990126 | 2.855503 | 0.003342 | 0.003948 | 0.003505 |
| noinvoke.test | RUN | 0.713105 | 1.710128 | 2.352393 | 0.003625 | 0.003452 | 0.003614 |
| pack_expansion.test | RUN | 0.754591 | 2.376969 | 2.965080 | 0.002778 | 0.002742 | 0.004104 |
| protect.test | RUN | 0.643814 | 1.689744 | 1.562983 | 0.002620 | 0.002606 | 0.002625 |
| bug2407.test | COMPILE | 0.604860 | 1.194321 | 1.332403 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.988× | 0.992×, 0.985× | 1.009× |
| clang | 0.971× | 0.968×, 0.973× | 0.993× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45850603565).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 8 | 0.002065s | 0.002016s | 0.001995s | byte equality observed |
| constrained_ops.test | 8 | 0.002023s | 0.002121s | 0.001919s | byte equality observed |
| cpp-next_bug.test | 9 | 0.002016s | 0.001982s | 0.001957s | byte equality observed |
| deduce_domain.test | 9 | 0.001998s | 0.001979s | 0.002029s | byte equality observed |
| deep_copy.test | 8 | 0.002022s | 0.002021s | 0.002006s | byte equality observed |
| display_expr.test | 6 | 0.002051s | 0.001962s | 0.001988s | byte equality observed |
| env_var.test | 7 | 0.002362s | 0.002325s | 0.002282s | byte equality observed |
| examples.test | 9 | 0.002038s | 0.002034s | 0.002091s | byte equality observed |
| external_transforms.test | 9 | 0.002061s | 0.002099s | 0.002076s | byte equality observed |
| flatten.test | 9 | 0.002115s | 0.002156s | 0.002153s | byte equality observed |
| lambda.test | 9 | 0.002026s | 0.002043s | 0.001986s | byte equality observed |
| make.test | 9 | 0.002234s | 0.002219s | 0.002166s | byte equality observed |
| make_expr.test | 8 | 0.002493s | 0.002440s | 0.002421s | byte equality observed |
| matches.test | 10 | 0.002040s | 0.002015s | 0.002021s | byte equality observed |
| mem_ptr.test | 8 | 0.002385s | 0.002330s | 0.002317s | byte equality observed |
| mpl.test | 10 | 0.001990s | 0.002051s | 0.002001s | byte equality observed |
| noinvoke.test | 9 | 0.002117s | 0.002025s | 0.002079s | byte equality observed |
| pack_expansion.test | 9 | 0.002119s | 0.002112s | 0.001993s | byte equality observed |
| protect.test | 9 | 0.002175s | 0.002035s | 0.002010s | byte equality observed |
| switch.test | 10 | 0.002105s | 0.001988s | 0.001952s | byte equality observed |
| toy_spirit.test | 9 | 0.002040s | 0.002011s | 0.001979s | byte equality observed |
| toy_spirit2.test | 9 | 0.002079s | 0.002057s | 0.002046s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45850603565).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
