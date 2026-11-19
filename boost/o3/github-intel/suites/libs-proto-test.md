# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.614628 | 1.619863 | 1.758495 | 0.002800 | 0.002910 | 0.002694 |
| constrained_ops.test | RUN | 0.679782 | 1.715556 | 1.995965 | 0.002532 | 0.002868 | 0.002798 |
| cpp-next_bug.test | RUN | 0.717223 | 1.845483 | 2.122718 | 0.002609 | 0.002788 | 0.002653 |
| deep_copy.test | RUN | 0.599738 | 1.663914 | 1.739996 | 0.002806 | 0.002745 | 0.002778 |
| display_expr.test | RUN | 0.712178 | 2.017169 | 2.167641 | 0.003068 | 0.002470 | 0.005044 |
| deduce_domain.test | RUN | 0.560448 | 1.432240 | 1.609095 | 0.002758 | 0.002876 | 0.002682 |
| env_var.test | RUN | 0.763068 | 3.507885 | 2.673306 | 0.003019 | 0.003285 | 0.003150 |
| examples.test | RUN | 0.723264 | 2.243180 | 2.475317 | 0.002625 | 0.002656 | 0.002443 |
| external_transforms.test | RUN | 0.714819 | 1.950012 | 2.226598 | 0.002679 | 0.002590 | 0.002668 |
| lambda.test | RUN | 0.698054 | 1.973229 | 2.190632 | 0.002801 | 0.002898 | 0.002552 |
| make_expr.test | RUN | 0.696929 | 3.224789 | 2.374926 | 0.003210 | 0.003636 | 0.003254 |
| matches.test | RUN | 0.621237 | 1.625942 | 1.895383 | 0.002644 | 0.002929 | 0.002757 |
| flatten.test | RUN | 1.189029 | 4.639158 | 4.698770 | 0.002884 | 0.002956 | 0.002882 |
| switch.test | RUN | 0.607344 | 1.648816 | 1.826056 | 0.002988 | 0.002849 | 0.002735 |
| toy_spirit.test | RUN | 0.683975 | 2.086686 | 2.295504 | 0.002766 | 0.002840 | 0.002872 |
| toy_spirit2.test | RUN | 0.764644 | 2.157641 | 2.459162 | 0.002865 | 0.002920 | 0.002693 |
| make.test | RUN | 0.602649 | 2.058024 | 1.792085 | 0.003057 | 0.002934 | 0.003013 |
| mem_ptr.test | RUN | 0.799908 | 3.403849 | 2.638792 | 0.003194 | 0.003295 | 0.003185 |
| mpl.test | RUN | 0.678199 | 1.735134 | 1.977450 | 0.002582 | 0.002835 | 0.002605 |
| noinvoke.test | RUN | 0.569090 | 1.435017 | 1.617552 | 0.002694 | 0.002680 | 0.002750 |
| pack_expansion.test | RUN | 0.726396 | 2.104478 | 2.180419 | 0.002148 | 0.002123 | 0.002865 |
| protect.test | RUN | 0.533199 | 1.417505 | 1.090074 | 0.002147 | 0.002132 | 0.001973 |
| bug2407.test | COMPILE | 0.352058 | 1.028054 | 1.200655 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.983× | 0.978×, 0.988× | 1.012× |
| clang | 0.975× | 0.981×, 0.968× | 1.014× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44597827043).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001690s | 0.001648s | 0.001623s | byte equality observed |
| constrained_ops.test | 10 | 0.001626s | 0.001625s | 0.001609s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001625s | 0.001567s | 0.001551s | byte equality observed |
| deduce_domain.test | 10 | 0.001628s | 0.001648s | 0.001531s | byte equality observed |
| deep_copy.test | 10 | 0.001621s | 0.001654s | 0.001570s | byte equality observed |
| display_expr.test | 10 | 0.001617s | 0.001591s | 0.001553s | byte equality observed |
| env_var.test | 10 | 0.001814s | 0.001834s | 0.001807s | byte equality observed |
| examples.test | 10 | 0.001624s | 0.001615s | 0.001597s | byte equality observed |
| external_transforms.test | 10 | 0.001647s | 0.001653s | 0.001622s | byte equality observed |
| flatten.test | 10 | 0.001663s | 0.001613s | 0.001620s | byte equality observed |
| lambda.test | 10 | 0.001648s | 0.001589s | 0.001592s | byte equality observed |
| make.test | 9 | 0.001723s | 0.001732s | 0.001705s | byte equality observed |
| make_expr.test | 9 | 0.001885s | 0.001874s | 0.001838s | byte equality observed |
| matches.test | 10 | 0.001637s | 0.001575s | 0.001547s | byte equality observed |
| mem_ptr.test | 10 | 0.001835s | 0.001823s | 0.001782s | byte equality observed |
| mpl.test | 10 | 0.001630s | 0.001616s | 0.001624s | byte equality observed |
| noinvoke.test | 10 | 0.001640s | 0.001579s | 0.001563s | byte equality observed |
| pack_expansion.test | 10 | 0.001649s | 0.001659s | 0.001565s | byte equality observed |
| protect.test | 10 | 0.001674s | 0.001620s | 0.001603s | byte equality observed |
| switch.test | 10 | 0.001639s | 0.001574s | 0.001586s | byte equality observed |
| toy_spirit.test | 10 | 0.001598s | 0.001615s | 0.001560s | byte equality observed |
| toy_spirit2.test | 10 | 0.001619s | 0.001579s | 0.001609s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44597827043).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
