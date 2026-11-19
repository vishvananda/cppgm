# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.321937 | 1.795303 | 1.525524 | 0.001632 | 0.001704 | 0.001590 |
| function_test_no_rtti.test | RUN | 0.315955 | 1.799595 | 1.537549 | 0.001681 | 0.001616 | 0.001607 |
| function_n_test.test | RUN | 0.295919 | 1.466277 | 1.286223 | 0.001484 | 0.001712 | 0.001719 |
| allocator_test.test | RUN | 0.238747 | 0.838553 | 0.843248 | 0.001526 | 0.001649 | 0.001700 |
| stateless_test.test | RUN | 0.175663 | 0.441811 | 0.534103 | 0.001546 | 0.001614 | 0.001603 |
| lambda_test.test | RUN | 0.368713 | 1.093720 | 1.139209 | 0.001604 | 0.001537 | 0.001618 |
| function_test_fail1.test | COMPILE_FAIL | 0.131183 | 0.294778 | 0.350417 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.134796 | 0.308881 | 0.362003 | — | — | — |
| function_30.test | COMPILE | 0.137506 | 0.309041 | 0.369314 | — | — | — |
| function_30_repeat.test | COMPILE | 0.134294 | 0.320715 | 0.363751 | — | — | — |
| function_arith_cxx98.test | RUN | 0.180454 | 0.543540 | 0.569662 | 0.001587 | 0.001496 | 0.001712 |
| function_arith_portable.test | RUN | 0.177414 | 0.507284 | 0.542125 | 0.001350 | 0.001579 | 0.001633 |
| sum_avg_cxx98.test | RUN | 0.171163 | 0.442101 | 0.507268 | 0.001544 | 0.001340 | 0.001624 |
| sum_avg_portable.test | RUN | 0.169279 | 0.395068 | 0.501996 | 0.001555 | 0.001657 | 0.001607 |
| mem_fun_cxx98.test | RUN | 0.198806 | 0.624249 | 0.643838 | 0.001722 | 0.001451 | 0.001508 |
| mem_fun_portable.test | RUN | 0.196525 | 0.563694 | 0.599792 | 0.001425 | 0.001582 | 0.001560 |
| std_bind_cxx98.test | RUN | 0.181047 | 0.517413 | 0.562085 | 0.001552 | 0.001597 | 0.001686 |
| std_bind_portable.test | RUN | 0.177714 | 0.477623 | 0.513257 | 0.001480 | 0.001722 | 0.001630 |
| function_ref_cxx98.test | RUN | 0.170687 | 0.435051 | 0.501101 | 0.001539 | 0.001533 | 0.001621 |
| function_ref_portable.test | RUN | 0.168653 | 0.397993 | 0.479770 | 0.001480 | 0.001678 | 0.001484 |
| contains_test.test | RUN | 0.213813 | 0.841704 | 0.795740 | 0.001684 | 0.001694 | 0.001688 |
| contains2_test.test | RUN | 0.196677 | 0.599187 | 0.612378 | 0.001521 | 0.001638 | 0.001488 |
| nothrow_swap.test | RUN | 0.190836 | 0.571837 | 0.594969 | 0.001490 | 0.001617 | 0.001548 |
| rvalues_test.test | RUN | 0.209353 | 0.686278 | 0.688988 | 0.001492 | 0.001610 | 0.001622 |
| function_typeof_test.test | COMPILE | 0.138776 | 0.304568 | 0.378502 | — | — | — |
| result_arg_types_test.test | RUN | 0.193440 | 0.477288 | 0.612753 | 0.001588 | 0.001780 | 0.001708 |
| result_arg_n_types_test.test | RUN | 0.213516 | 0.527952 | 0.738156 | 0.001557 | 0.001580 | 0.001560 |
| test_bad_function_call_shared.test | RUN | 0.173699 | 0.449466 | 0.513013 | 0.001882 | 0.001661 | 0.001768 |
| test_bad_function_call_static.test | RUN | 0.176187 | 0.443396 | 0.533616 | 0.001496 | 0.001694 | 0.001746 |
| mixed_cxxstd_shared.test | RUN | 0.187381 | 0.527621 | 0.586427 | 0.001678 | 0.001739 | 0.001414 |
| mixed_cxxstd_static.test | RUN | 0.182827 | 0.518075 | 0.597760 | 0.001710 | 0.001592 | 0.001611 |
| mixed_cxxstd_shared_0x.test | RUN | 0.182903 | 0.526225 | 0.577009 | 0.001718 | 0.001790 | 0.001938 |
| mixed_cxxstd_static_0x.test | RUN | 0.184232 | 0.511932 | 0.596122 | 0.001548 | 0.001743 | 0.001603 |
| mixed_cxxstd_shared_14.test | RUN | 0.184593 | 0.521464 | 0.589256 | 0.001621 | 0.001798 | 0.001825 |
| mixed_cxxstd_static_14.test | RUN | 0.181748 | 0.517878 | 0.592809 | 0.001585 | 0.001758 | 0.001738 |
| return_function_shared.test | RUN | 0.179008 | 0.534902 | 0.579059 | 0.001609 | 0.001840 | 0.001775 |
| return_function_static.test | RUN | 0.178679 | 0.533199 | 0.574192 | 0.001476 | 0.001598 | 0.001681 |
| return_function_shared_0x.test | RUN | 0.180635 | 0.529394 | 0.575842 | 0.001698 | 0.001915 | 0.001791 |
| return_function_static_0x.test | RUN | 0.184113 | 0.530920 | 0.563234 | 0.001568 | 0.001754 | 0.001716 |
| return_function_shared_14.test | RUN | 0.174448 | 0.535460 | 0.580833 | 0.001510 | 0.001660 | 0.001614 |
| return_function_static_14.test | RUN | 0.180862 | 0.527952 | 0.582827 | 0.001506 | 0.001712 | 0.001741 |
| quick.test | RUN | 0.181714 | 0.526148 | 0.574108 | 0.001528 | 0.001660 | 0.001464 |
| issue_42.test | COMPILE | 0.143658 | 0.340578 | 0.388177 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.239168 | 0.713357 | 0.846387 | 0.001656 | 0.001672 | 0.001623 |
| contains_test_no_rtti.test | RUN | 0.215835 | 0.820895 | 0.817411 | 0.001588 | 0.001620 | 0.001652 |
| contains2_test_no_rtti.test | RUN | 0.194658 | 0.603988 | 0.647452 | 0.001518 | 0.001569 | 0.001227 |
| contains3_test.test | RUN | 0.180498 | 0.480234 | 0.573131 | 0.001243 | 0.001499 | 0.001498 |
| contains3_test_no_rtti.test | RUN | 0.117835 | 0.405933 | 0.387796 | 0.001215 | 0.001230 | 0.001233 |
| issue_53.test | COMPILE | 0.100929 | 0.273867 | 0.272390 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.996× | 0.989×, 1.003× | 0.997× |
| clang | 0.986× | 0.986×, 0.987× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44597827043).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.001032s | 0.001064s | 0.000981s | byte equality observed |
| contains2_test.test | 10 | 0.001083s | 0.001081s | 0.000968s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.001056s | 0.001086s | 0.000983s | byte equality observed |
| contains3_test.test | 10 | 0.001051s | 0.001048s | 0.000999s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.001060s | 0.001040s | 0.001098s | byte equality observed |
| contains_test.test | 10 | 0.001059s | 0.001076s | 0.001010s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.001027s | 0.001022s | 0.001027s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.001069s | 0.001110s | 0.001012s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.001061s | 0.001060s | 0.001102s | byte equality observed |
| function_arith_portable.test | 10 | 0.001087s | 0.001070s | 0.001031s | byte equality observed |
| function_n_test.test | 10 | 0.001061s | 0.001059s | 0.001101s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.001017s | 0.001036s | 0.001030s | byte equality observed |
| function_ref_portable.test | 10 | 0.001001s | 0.001019s | 0.000990s | byte equality observed |
| function_test.test | 10 | 0.001089s | 0.001098s | 0.001076s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.001125s | 0.001129s | 0.001074s | byte equality observed |
| lambda_test.test | 10 | 0.001069s | 0.001061s | 0.001006s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.001057s | 0.001091s | 0.001018s | byte equality observed |
| mem_fun_portable.test | 10 | 0.001024s | 0.001063s | 0.001021s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.001141s | 0.001128s | 0.001100s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.001103s | 0.001099s | 0.001108s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.001102s | 0.001107s | 0.001110s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.001044s | 0.001019s | 0.001039s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.001044s | 0.001093s | 0.001032s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.001087s | 0.001081s | 0.001036s | byte equality observed |
| nothrow_swap.test | 10 | 0.001051s | 0.001036s | 0.001053s | byte equality observed |
| quick.test | 10 | 0.001043s | 0.001062s | 0.001038s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.001033s | 0.001033s | 0.001056s | byte equality observed |
| result_arg_types_test.test | 10 | 0.001042s | 0.001019s | 0.001053s | byte equality observed |
| return_function_shared.test | 10 | 0.001096s | 0.001112s | 0.001074s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.001158s | 0.001114s | 0.001101s | byte equality observed |
| return_function_shared_14.test | 10 | 0.001159s | 0.001100s | 0.001076s | byte equality observed |
| return_function_static.test | 10 | 0.001034s | 0.001057s | 0.000993s | byte equality observed |
| return_function_static_0x.test | 10 | 0.001053s | 0.001044s | 0.001038s | byte equality observed |
| return_function_static_14.test | 9 | 0.001044s | 0.001015s | 0.001025s | byte equality observed |
| rvalues_test.test | 10 | 0.001044s | 0.001050s | 0.001064s | byte equality observed |
| stateless_test.test | 10 | 0.001024s | 0.001051s | 0.001030s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.001028s | 0.000986s | 0.000988s | byte equality observed |
| std_bind_portable.test | 10 | 0.001039s | 0.000986s | 0.000995s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.001039s | 0.001015s | 0.000995s | byte equality observed |
| sum_avg_portable.test | 10 | 0.001013s | 0.001005s | 0.000991s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.001134s | 0.001124s | 0.001114s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.001064s | 0.001064s | 0.001089s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44597827043).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
