# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.640452 | 1.767582 | 2.029074 | 0.002737 | 0.002811 | 0.002744 |
| constrained_ops.test | RUN | 0.728544 | 1.910962 | 2.331652 | 0.002705 | 0.002964 | 0.002722 |
| cpp-next_bug.test | RUN | 0.748815 | 2.004127 | 2.364586 | 0.002622 | 0.002955 | 0.002858 |
| deep_copy.test | RUN | 0.633512 | 1.768505 | 2.002769 | 0.002510 | 0.002601 | 0.002622 |
| display_expr.test | RUN | 0.780210 | 2.197510 | 2.477136 | 0.002692 | 0.002557 | 0.002410 |
| deduce_domain.test | RUN | 0.608348 | 1.569361 | 1.823539 | 0.002849 | 0.002545 | 0.002720 |
| env_var.test | RUN | 0.839327 | 3.747409 | 2.968448 | 0.003100 | 0.003353 | 0.003147 |
| examples.test | RUN | 0.784044 | 2.454057 | 2.712015 | 0.002558 | 0.002567 | 0.002637 |
| external_transforms.test | RUN | 0.767150 | 2.088785 | 2.446227 | 0.002765 | 0.002751 | 0.002507 |
| lambda.test | RUN | 0.759481 | 2.150322 | 2.502585 | 0.002806 | 0.002696 | 0.002666 |
| make_expr.test | RUN | 0.758692 | 3.504427 | 2.639360 | 0.003240 | 0.003307 | 0.003301 |
| matches.test | RUN | 0.666112 | 1.756722 | 2.130323 | 0.002786 | 0.002648 | 0.002733 |
| flatten.test | RUN | 1.256344 | 4.922651 | 5.200241 | 0.002828 | 0.002927 | 0.002734 |
| switch.test | RUN | 0.647574 | 1.755363 | 2.036917 | 0.002779 | 0.002725 | 0.002729 |
| toy_spirit.test | RUN | 0.738389 | 2.207455 | 2.579786 | 0.002812 | 0.002837 | 0.002823 |
| toy_spirit2.test | RUN | 0.795718 | 2.315368 | 2.762539 | 0.002737 | 0.002750 | 0.002613 |
| make.test | RUN | 0.635488 | 2.217854 | 2.018618 | 0.003016 | 0.002968 | 0.003042 |
| mem_ptr.test | RUN | 0.830605 | 3.647723 | 2.954489 | 0.003035 | 0.003328 | 0.002980 |
| mpl.test | RUN | 0.739826 | 1.872712 | 2.235218 | 0.002569 | 0.002813 | 0.002696 |
| noinvoke.test | RUN | 0.617707 | 1.549755 | 1.816549 | 0.002641 | 0.002815 | 0.002552 |
| pack_expansion.test | RUN | 0.749608 | 2.192200 | 2.222504 | 0.002042 | 0.001911 | 0.001902 |
| protect.test | RUN | 0.541892 | 1.650556 | 1.398073 | 0.001788 | 0.001938 | 0.001984 |
| bug2407.test | COMPILE | 0.369049 | 1.107869 | 1.198693 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.986× | 0.981×, 0.991× | 0.990× |
| clang | 0.967× | 0.972×, 0.962× | 1.013× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44927958294).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001586s | 0.001577s | 0.001580s | byte equality observed |
| constrained_ops.test | 10 | 0.001515s | 0.001559s | 0.001501s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001577s | 0.001494s | 0.001522s | byte equality observed |
| deduce_domain.test | 10 | 0.001544s | 0.001593s | 0.001479s | byte equality observed |
| deep_copy.test | 10 | 0.001567s | 0.001497s | 0.001594s | byte equality observed |
| display_expr.test | 10 | 0.001508s | 0.001494s | 0.001492s | byte equality observed |
| env_var.test | 10 | 0.001733s | 0.001667s | 0.001629s | byte equality observed |
| examples.test | 10 | 0.001537s | 0.001539s | 0.001485s | byte equality observed |
| external_transforms.test | 10 | 0.001622s | 0.001525s | 0.001531s | byte equality observed |
| flatten.test | 10 | 0.001655s | 0.001511s | 0.001528s | byte equality observed |
| lambda.test | 10 | 0.001552s | 0.001499s | 0.001455s | byte equality observed |
| make.test | 10 | 0.001673s | 0.001614s | 0.001634s | byte equality observed |
| make_expr.test | 10 | 0.001786s | 0.001715s | 0.001727s | byte equality observed |
| matches.test | 10 | 0.001566s | 0.001533s | 0.001511s | byte equality observed |
| mem_ptr.test | 10 | 0.001722s | 0.001703s | 0.001658s | byte equality observed |
| mpl.test | 10 | 0.001524s | 0.001545s | 0.001481s | byte equality observed |
| noinvoke.test | 10 | 0.001579s | 0.001520s | 0.001528s | byte equality observed |
| pack_expansion.test | 10 | 0.001584s | 0.001597s | 0.001529s | byte equality observed |
| protect.test | 10 | 0.001558s | 0.001579s | 0.001515s | byte equality observed |
| switch.test | 10 | 0.001586s | 0.001512s | 0.001554s | byte equality observed |
| toy_spirit.test | 10 | 0.001589s | 0.001580s | 0.001501s | byte equality observed |
| toy_spirit2.test | 9 | 0.001553s | 0.001566s | 0.001546s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44927958294).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
