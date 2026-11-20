# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.752429 | 1.931869 | 2.570211 | 0.003518 | 0.003797 | 0.003565 |
| constrained_ops.test | RUN | 0.839420 | 2.016668 | 2.844887 | 0.003433 | 0.003925 | 0.003448 |
| cpp-next_bug.test | RUN | 0.858741 | 2.171323 | 2.950561 | 0.003467 | 0.003706 | 0.003768 |
| deep_copy.test | RUN | 0.742393 | 1.954877 | 2.556680 | 0.003336 | 0.003760 | 0.003387 |
| display_expr.test | RUN | 0.886657 | 2.352900 | 2.915869 | 0.003288 | 0.003385 | 0.003793 |
| deduce_domain.test | RUN | 0.705460 | 1.673923 | 2.337603 | 0.003625 | 0.003681 | 0.003896 |
| env_var.test | RUN | 0.952116 | 3.969450 | 3.689841 | 0.004156 | 0.004381 | 0.004685 |
| examples.test | RUN | 0.897533 | 2.624993 | 3.446478 | 0.003376 | 0.003319 | 0.003890 |
| external_transforms.test | RUN | 0.893393 | 2.326068 | 3.104714 | 0.003476 | 0.003521 | 0.003771 |
| lambda.test | RUN | 0.855548 | 2.271093 | 3.133231 | 0.003483 | 0.003496 | 0.003890 |
| make_expr.test | RUN | 0.855861 | 3.695044 | 3.221824 | 0.004762 | 0.004944 | 0.005276 |
| matches.test | RUN | 0.770371 | 1.890808 | 2.751284 | 0.003673 | 0.003764 | 0.003840 |
| flatten.test | RUN | 1.437039 | 5.266508 | 6.463535 | 0.003897 | 0.004149 | 0.003796 |
| switch.test | RUN | 0.763156 | 1.960901 | 2.564764 | 0.003265 | 0.003454 | 0.003833 |
| toy_spirit.test | RUN | 0.857960 | 2.368176 | 3.304538 | 0.003528 | 0.003857 | 0.003926 |
| toy_spirit2.test | RUN | 0.924441 | 2.536182 | 3.479211 | 0.003667 | 0.004109 | 0.004162 |
| make.test | RUN | 0.729224 | 2.361702 | 2.579967 | 0.004268 | 0.004858 | 0.004340 |
| mem_ptr.test | RUN | 0.956738 | 3.910446 | 3.699916 | 0.004308 | 0.004700 | 0.005149 |
| mpl.test | RUN | 0.859147 | 2.004852 | 2.804048 | 0.003655 | 0.003458 | 0.003269 |
| noinvoke.test | RUN | 0.715383 | 1.700304 | 2.349836 | 0.003628 | 0.003985 | 0.003725 |
| pack_expansion.test | RUN | 0.818028 | 2.485173 | 3.076115 | 0.002649 | 0.002850 | 0.003977 |
| protect.test | RUN | 0.631817 | 1.714729 | 1.762329 | 0.002768 | 0.004233 | 0.002638 |
| bug2407.test | COMPILE | 0.602412 | 1.260513 | 1.333106 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.983× | 0.990×, 0.976× | 1.015× |
| clang | 0.986× | 0.978×, 0.994× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44612055398).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 7 | 0.002128s | 0.002125s | 0.002057s | byte equality observed |
| constrained_ops.test | 9 | 0.002102s | 0.002083s | 0.002024s | byte equality observed |
| cpp-next_bug.test | 9 | 0.002049s | 0.002050s | 0.002061s | byte equality observed |
| deduce_domain.test | 9 | 0.002085s | 0.002047s | 0.002042s | byte equality observed |
| deep_copy.test | 7 | 0.002080s | 0.002061s | 0.002011s | byte equality observed |
| display_expr.test | 9 | 0.002084s | 0.002031s | 0.002001s | byte equality observed |
| env_var.test | 8 | 0.002423s | 0.002381s | 0.002318s | byte equality observed |
| examples.test | 9 | 0.002101s | 0.002118s | 0.001999s | byte equality observed |
| external_transforms.test | 8 | 0.002132s | 0.002064s | 0.002006s | byte equality observed |
| flatten.test | 9 | 0.002100s | 0.002189s | 0.002170s | byte equality observed |
| lambda.test | 9 | 0.002064s | 0.002015s | 0.002082s | byte equality observed |
| make.test | 8 | 0.002198s | 0.002190s | 0.002221s | byte equality observed |
| make_expr.test | 7 | 0.002518s | 0.002484s | 0.002466s | byte equality observed |
| matches.test | 9 | 0.002122s | 0.001991s | 0.001983s | byte equality observed |
| mem_ptr.test | 8 | 0.002391s | 0.002317s | 0.002391s | byte equality observed |
| mpl.test | 8 | 0.002072s | 0.002079s | 0.002029s | byte equality observed |
| noinvoke.test | 9 | 0.002029s | 0.002005s | 0.002103s | byte equality observed |
| pack_expansion.test | 9 | 0.002135s | 0.002067s | 0.002089s | byte equality observed |
| protect.test | 9 | 0.002116s | 0.002175s | 0.002129s | byte equality observed |
| switch.test | 9 | 0.002092s | 0.002056s | 0.002072s | byte equality observed |
| toy_spirit.test | 9 | 0.002110s | 0.002007s | 0.002109s | byte equality observed |
| toy_spirit2.test | 9 | 0.002056s | 0.002014s | 0.002044s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44612055398).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
