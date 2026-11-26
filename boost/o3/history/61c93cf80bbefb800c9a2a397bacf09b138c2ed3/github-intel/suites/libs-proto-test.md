# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.620201 | 1.623617 | 1.787641 | 0.002886 | 0.002833 | 0.002660 |
| constrained_ops.test | RUN | 0.684737 | 1.716196 | 2.005137 | 0.002741 | 0.002925 | 0.002657 |
| cpp-next_bug.test | RUN | 0.696481 | 1.847922 | 2.135358 | 0.002508 | 0.002756 | 0.002471 |
| deep_copy.test | RUN | 0.616989 | 1.632051 | 1.753035 | 0.002729 | 0.002888 | 0.002574 |
| display_expr.test | RUN | 0.714904 | 2.054109 | 2.169299 | 0.002669 | 0.002660 | 0.002648 |
| deduce_domain.test | RUN | 0.590622 | 1.406826 | 1.609660 | 0.002726 | 0.002715 | 0.002449 |
| env_var.test | RUN | 0.787476 | 3.488089 | 2.582011 | 0.002993 | 0.003170 | 0.002969 |
| examples.test | RUN | 0.727773 | 2.275215 | 2.420079 | 0.002789 | 0.002649 | 0.002753 |
| external_transforms.test | RUN | 0.724671 | 1.918950 | 2.177718 | 0.003019 | 0.002372 | 0.002727 |
| lambda.test | RUN | 0.707850 | 1.990082 | 2.190574 | 0.002654 | 0.002656 | 0.002412 |
| make_expr.test | RUN | 0.703988 | 3.195591 | 2.334450 | 0.003195 | 0.003406 | 0.003228 |
| matches.test | RUN | 0.634401 | 1.589080 | 1.936087 | 0.002604 | 0.002630 | 0.002630 |
| flatten.test | RUN | 1.199976 | 4.571244 | 4.623658 | 0.002968 | 0.002863 | 0.002777 |
| switch.test | RUN | 0.616201 | 1.612049 | 1.812967 | 0.002837 | 0.002721 | 0.002656 |
| toy_spirit.test | RUN | 0.696656 | 2.042186 | 2.306536 | 0.002866 | 0.002859 | 0.002663 |
| toy_spirit2.test | RUN | 0.745183 | 2.173445 | 2.433857 | 0.002790 | 0.002656 | 0.002593 |
| make.test | RUN | 0.615297 | 2.030273 | 1.763290 | 0.003088 | 0.002894 | 0.003071 |
| mem_ptr.test | RUN | 0.788773 | 3.395765 | 2.659779 | 0.003124 | 0.003114 | 0.002943 |
| mpl.test | RUN | 0.695309 | 1.738219 | 1.968199 | 0.002605 | 0.002732 | 0.002528 |
| noinvoke.test | RUN | 0.588662 | 1.421889 | 1.616311 | 0.002774 | 0.002752 | 0.002716 |
| pack_expansion.test | RUN | 0.734257 | 2.066804 | 2.158732 | 0.002084 | 0.002054 | 0.002715 |
| protect.test | RUN | 0.549297 | 1.469747 | 1.317296 | 0.002104 | 0.001997 | 0.001894 |
| bug2407.test | COMPILE | 0.392330 | 0.979392 | 0.964355 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 0.994×, 1.006× | 0.990× |
| clang | 0.985× | 0.989×, 0.982× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45754596224).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001646s | 0.001651s | 0.001648s | byte equality observed |
| constrained_ops.test | 10 | 0.001616s | 0.001577s | 0.001615s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001578s | 0.001621s | 0.001594s | byte equality observed |
| deduce_domain.test | 10 | 0.001607s | 0.001591s | 0.001571s | byte equality observed |
| deep_copy.test | 9 | 0.001592s | 0.001616s | 0.001557s | byte equality observed |
| display_expr.test | 10 | 0.001617s | 0.001617s | 0.001579s | byte equality observed |
| env_var.test | 9 | 0.001819s | 0.001756s | 0.001789s | byte equality observed |
| examples.test | 10 | 0.001629s | 0.001579s | 0.001560s | byte equality observed |
| external_transforms.test | 10 | 0.001632s | 0.001727s | 0.001612s | byte equality observed |
| flatten.test | 10 | 0.001639s | 0.001637s | 0.001629s | byte equality observed |
| lambda.test | 10 | 0.001613s | 0.001625s | 0.001548s | byte equality observed |
| make.test | 10 | 0.001692s | 0.001713s | 0.001733s | byte equality observed |
| make_expr.test | 10 | 0.001873s | 0.001851s | 0.001856s | byte equality observed |
| matches.test | 10 | 0.001613s | 0.001594s | 0.001560s | byte equality observed |
| mem_ptr.test | 9 | 0.001793s | 0.001808s | 0.001752s | byte equality observed |
| mpl.test | 10 | 0.001622s | 0.001631s | 0.001619s | byte equality observed |
| noinvoke.test | 9 | 0.001593s | 0.001614s | 0.001609s | byte equality observed |
| pack_expansion.test | 7 | 0.001638s | 0.001654s | 0.001600s | byte equality observed |
| protect.test | 10 | 0.001655s | 0.001624s | 0.001641s | byte equality observed |
| switch.test | 10 | 0.001600s | 0.001578s | 0.001583s | byte equality observed |
| toy_spirit.test | 10 | 0.001595s | 0.001609s | 0.001567s | byte equality observed |
| toy_spirit2.test | 10 | 0.001639s | 0.001607s | 0.001576s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45754596224).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
