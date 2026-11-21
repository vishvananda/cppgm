# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.529942 | 1.399835 | 1.675922 | 0.003054 | 0.003286 | 0.003058 |
| constrained_ops.test | RUN | 0.604288 | 1.543589 | 1.906455 | 0.002980 | 0.003078 | 0.002919 |
| cpp-next_bug.test | RUN | 0.619133 | 1.628405 | 1.923680 | 0.002976 | 0.003173 | 0.003097 |
| deep_copy.test | RUN | 0.537248 | 1.453572 | 1.654447 | 0.002701 | 0.003183 | 0.002831 |
| display_expr.test | RUN | 0.627483 | 1.795661 | 2.049437 | 0.002735 | 0.002947 | 0.002944 |
| deduce_domain.test | RUN | 0.504792 | 1.226462 | 1.506663 | 0.002993 | 0.002979 | 0.002596 |
| env_var.test | RUN | 0.670779 | 3.020703 | 2.320461 | 0.003498 | 0.003396 | 0.003568 |
| examples.test | RUN | 0.648125 | 1.981358 | 2.248015 | 0.002686 | 0.003093 | 0.003154 |
| external_transforms.test | RUN | 0.651345 | 1.644206 | 2.061707 | 0.003019 | 0.003148 | 0.002705 |
| lambda.test | RUN | 0.628222 | 1.757471 | 2.058698 | 0.002775 | 0.003139 | 0.003016 |
| make_expr.test | RUN | 0.615989 | 2.739640 | 2.178129 | 0.003670 | 0.004055 | 0.003884 |
| matches.test | RUN | 0.565777 | 1.391526 | 1.786004 | 0.002954 | 0.002846 | 0.003089 |
| flatten.test | RUN | 1.036610 | 4.031698 | 4.328655 | 0.003098 | 0.003425 | 0.002834 |
| switch.test | RUN | 0.539105 | 1.432572 | 1.652767 | 0.002950 | 0.003121 | 0.003045 |
| toy_spirit.test | RUN | 0.602905 | 1.774297 | 2.115185 | 0.002991 | 0.003167 | 0.002996 |
| toy_spirit2.test | RUN | 0.675346 | 1.880569 | 2.316729 | 0.002788 | 0.003329 | 0.002979 |
| make.test | RUN | 0.517753 | 1.753608 | 1.647366 | 0.003502 | 0.003717 | 0.003393 |
| mem_ptr.test | RUN | 0.697335 | 2.865697 | 2.400305 | 0.003522 | 0.003845 | 0.003597 |
| mpl.test | RUN | 0.623603 | 1.457442 | 1.833580 | 0.002770 | 0.003033 | 0.002824 |
| noinvoke.test | RUN | 0.522249 | 1.230015 | 1.527169 | 0.002916 | 0.003166 | 0.002901 |
| pack_expansion.test | RUN | 0.643690 | 1.778857 | 1.867177 | 0.003025 | 0.002963 | 0.002296 |
| protect.test | RUN | 0.484854 | 1.282727 | 1.234378 | 0.002256 | 0.002491 | 0.002210 |
| bug2407.test | COMPILE | 0.349662 | 0.890267 | 0.995173 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.983×† | 0.980×, 0.986× | 1.092× |
| clang | 0.984× | 0.989×, 0.979× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44813597235).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001694s | 0.001650s | 0.001640s | byte equality observed |
| constrained_ops.test | 10 | 0.001682s | 0.001706s | 0.001684s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001670s | 0.001633s | 0.001628s | byte equality observed |
| deduce_domain.test | 10 | 0.001664s | 0.001712s | 0.001650s | byte equality observed |
| deep_copy.test | 10 | 0.001662s | 0.001650s | 0.001654s | byte equality observed |
| display_expr.test | 10 | 0.001639s | 0.001629s | 0.001686s | byte equality observed |
| env_var.test | 9 | 0.001974s | 0.001953s | 0.001929s | byte equality observed |
| examples.test | 10 | 0.001722s | 0.001647s | 0.001665s | byte equality observed |
| external_transforms.test | 10 | 0.001738s | 0.001667s | 0.001662s | byte equality observed |
| flatten.test | 10 | 0.001741s | 0.001759s | 0.001707s | byte equality observed |
| lambda.test | 10 | 0.001669s | 0.001671s | 0.001659s | byte equality observed |
| make.test | 10 | 0.001845s | 0.001860s | 0.001844s | byte equality observed |
| make_expr.test | 9 | 0.002089s | 0.002058s | 0.002058s | byte equality observed |
| matches.test | 10 | 0.001667s | 0.001668s | 0.001653s | byte equality observed |
| mem_ptr.test | 10 | 0.001966s | 0.001960s | 0.001944s | byte equality observed |
| mpl.test | 10 | 0.001684s | 0.001662s | 0.001681s | byte equality observed |
| noinvoke.test | 10 | 0.001670s | 0.001667s | 0.001620s | byte equality observed |
| pack_expansion.test | 10 | 0.001741s | 0.001726s | 0.001678s | byte equality observed |
| protect.test | 9 | 0.001747s | 0.001704s | 0.001684s | byte equality observed |
| switch.test | 10 | 0.001704s | 0.001667s | 0.001647s | byte equality observed |
| toy_spirit.test | 10 | 0.001704s | 0.001622s | 0.001670s | byte equality observed |
| toy_spirit2.test | 10 | 0.001699s | 0.001664s | 0.001680s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44813597235).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
