# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.268796 | 1.473240 | 1.337430 | 0.001573 | 0.001556 | 0.001803 |
| function_test_no_rtti.test | RUN | 0.265441 | 1.448750 | 1.369231 | 0.001664 | 0.001738 | 0.001702 |
| function_n_test.test | RUN | 0.250276 | 1.208417 | 1.156163 | 0.001527 | 0.001684 | 0.001793 |
| allocator_test.test | RUN | 0.204878 | 0.697095 | 0.790473 | 0.001728 | 0.001710 | 0.001817 |
| stateless_test.test | RUN | 0.155492 | 0.381309 | 0.500961 | 0.001749 | 0.001502 | 0.001719 |
| lambda_test.test | RUN | 0.328402 | 0.896771 | 1.029711 | 0.001700 | 0.001709 | 0.001699 |
| function_test_fail1.test | COMPILE_FAIL | 0.117402 | 0.257477 | 0.349546 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.119336 | 0.258837 | 0.354796 | — | — | — |
| function_30.test | COMPILE | 0.126742 | 0.268263 | 0.375976 | — | — | — |
| function_30_repeat.test | COMPILE | 0.121964 | 0.280461 | 0.365175 | — | — | — |
| function_arith_cxx98.test | RUN | 0.162687 | 0.454587 | 0.552364 | 0.001724 | 0.001582 | 0.001588 |
| function_arith_portable.test | RUN | 0.160513 | 0.430075 | 0.492742 | 0.001372 | 0.001588 | 0.001618 |
| sum_avg_cxx98.test | RUN | 0.153984 | 0.365979 | 0.476023 | 0.001703 | 0.001785 | 0.001658 |
| sum_avg_portable.test | RUN | 0.151563 | 0.333284 | 0.456024 | 0.001736 | 0.001784 | 0.001643 |
| mem_fun_cxx98.test | RUN | 0.173962 | 0.513866 | 0.591311 | 0.001805 | 0.001557 | 0.001688 |
| mem_fun_portable.test | RUN | 0.170835 | 0.468329 | 0.560016 | 0.001380 | 0.001696 | 0.001524 |
| std_bind_cxx98.test | RUN | 0.161179 | 0.431481 | 0.530962 | 0.001560 | 0.001540 | 0.001607 |
| std_bind_portable.test | RUN | 0.159293 | 0.409624 | 0.490437 | 0.001692 | 0.001780 | 0.001664 |
| function_ref_cxx98.test | RUN | 0.154333 | 0.372817 | 0.484920 | 0.001647 | 0.001216 | 0.001715 |
| function_ref_portable.test | RUN | 0.150588 | 0.335181 | 0.452983 | 0.001450 | 0.001701 | 0.001501 |
| contains_test.test | RUN | 0.186210 | 0.708202 | 0.733301 | 0.001361 | 0.001754 | 0.001460 |
| contains2_test.test | RUN | 0.174090 | 0.498291 | 0.569994 | 0.001714 | 0.001560 | 0.001652 |
| nothrow_swap.test | RUN | 0.167295 | 0.476155 | 0.534076 | 0.001571 | 0.001724 | 0.001645 |
| rvalues_test.test | RUN | 0.192926 | 0.571287 | 0.641117 | 0.001634 | 0.001561 | 0.001697 |
| function_typeof_test.test | COMPILE | 0.121290 | 0.263304 | 0.358558 | — | — | — |
| result_arg_types_test.test | RUN | 0.177337 | 0.406329 | 0.549623 | 0.001486 | 0.001519 | 0.001716 |
| result_arg_n_types_test.test | RUN | 0.189544 | 0.445322 | 0.692491 | 0.001462 | 0.001679 | 0.001379 |
| test_bad_function_call_shared.test | RUN | 0.156872 | 0.384929 | 0.526585 | 0.001686 | 0.001800 | 0.002060 |
| test_bad_function_call_static.test | RUN | 0.157089 | 0.371227 | 0.522085 | 0.001628 | 0.001669 | 0.001739 |
| mixed_cxxstd_shared.test | RUN | 0.165824 | 0.445656 | 0.518150 | 0.001728 | 0.001728 | 0.001609 |
| mixed_cxxstd_static.test | RUN | 0.163028 | 0.438560 | 0.540241 | 0.001565 | 0.001632 | 0.001756 |
| mixed_cxxstd_shared_0x.test | RUN | 0.163632 | 0.443823 | 0.572336 | 0.001915 | 0.001955 | 0.001892 |
| mixed_cxxstd_static_0x.test | RUN | 0.167212 | 0.429354 | 0.570965 | 0.001599 | 0.001798 | 0.001409 |
| mixed_cxxstd_shared_14.test | RUN | 0.164112 | 0.454696 | 0.566672 | 0.001864 | 0.001952 | 0.001858 |
| mixed_cxxstd_static_14.test | RUN | 0.162679 | 0.438188 | 0.572313 | 0.001819 | 0.001861 | 0.001680 |
| return_function_shared.test | RUN | 0.159863 | 0.432515 | 0.560846 | 0.001782 | 0.001679 | 0.001799 |
| return_function_static.test | RUN | 0.161943 | 0.434626 | 0.513928 | 0.001525 | 0.001719 | 0.001731 |
| return_function_shared_0x.test | RUN | 0.162105 | 0.445821 | 0.522618 | 0.001756 | 0.001972 | 0.001896 |
| return_function_static_0x.test | RUN | 0.162723 | 0.434452 | 0.546204 | 0.001628 | 0.001872 | 0.001697 |
| return_function_shared_14.test | RUN | 0.157260 | 0.440421 | 0.532777 | 0.001683 | 0.001636 | 0.001977 |
| return_function_static_14.test | RUN | 0.160265 | 0.438455 | 0.547771 | 0.001526 | 0.001809 | 0.001558 |
| quick.test | RUN | 0.163871 | 0.431960 | 0.476816 | 0.001512 | 0.001700 | 0.001668 |
| issue_42.test | COMPILE | 0.129614 | 0.291460 | 0.398089 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.222456 | 0.609213 | 0.812180 | 0.001511 | 0.001615 | 0.001509 |
| contains_test_no_rtti.test | RUN | 0.195164 | 0.686441 | 0.754908 | 0.001405 | 0.001560 | 0.001464 |
| contains2_test_no_rtti.test | RUN | 0.175045 | 0.509018 | 0.615656 | 0.001482 | 0.001715 | 0.001452 |
| contains3_test.test | RUN | 0.164289 | 0.403847 | 0.525370 | 0.001386 | 0.001574 | 0.001850 |
| contains3_test_no_rtti.test | RUN | 0.117365 | 0.317008 | 0.360361 | 0.001264 | 0.001266 | 0.001200 |
| issue_53.test | COMPILE | 0.102714 | 0.227385 | 0.256278 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.002× | 1.004×, 0.999× | 1.027× |
| clang | 0.996× | 1.002×, 0.989× | 1.008× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44815881069).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000964s | 0.000965s | 0.000953s | byte equality observed |
| contains2_test.test | 10 | 0.000961s | 0.000963s | 0.000952s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000955s | 0.000967s | 0.000958s | byte equality observed |
| contains3_test.test | 10 | 0.000965s | 0.000973s | 0.000963s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000976s | 0.000940s | 0.000982s | byte equality observed |
| contains_test.test | 10 | 0.000984s | 0.000987s | 0.000970s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.000988s | 0.001020s | 0.000980s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.000980s | 0.000991s | 0.001001s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.000993s | 0.001019s | 0.001003s | byte equality observed |
| function_arith_portable.test | 10 | 0.001025s | 0.001012s | 0.000986s | byte equality observed |
| function_n_test.test | 10 | 0.001018s | 0.001030s | 0.001000s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000989s | 0.000992s | 0.000990s | byte equality observed |
| function_ref_portable.test | 10 | 0.000953s | 0.000982s | 0.000982s | byte equality observed |
| function_test.test | 10 | 0.001049s | 0.001046s | 0.001036s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.001039s | 0.001062s | 0.001037s | byte equality observed |
| lambda_test.test | 10 | 0.000990s | 0.000989s | 0.001010s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.000996s | 0.000993s | 0.000984s | byte equality observed |
| mem_fun_portable.test | 10 | 0.000986s | 0.000996s | 0.001011s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.001082s | 0.001063s | 0.001078s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.001079s | 0.001064s | 0.001066s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.001079s | 0.001071s | 0.001066s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.000993s | 0.000992s | 0.001010s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.001008s | 0.000970s | 0.000982s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.001011s | 0.000985s | 0.000980s | byte equality observed |
| nothrow_swap.test | 10 | 0.001015s | 0.000980s | 0.001013s | byte equality observed |
| quick.test | 10 | 0.001000s | 0.000973s | 0.000968s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.001006s | 0.000997s | 0.000983s | byte equality observed |
| result_arg_types_test.test | 10 | 0.001010s | 0.000971s | 0.001004s | byte equality observed |
| return_function_shared.test | 10 | 0.001061s | 0.001077s | 0.001061s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.001041s | 0.001070s | 0.001042s | byte equality observed |
| return_function_shared_14.test | 10 | 0.001066s | 0.001072s | 0.001065s | byte equality observed |
| return_function_static.test | 10 | 0.000976s | 0.000991s | 0.000996s | byte equality observed |
| return_function_static_0x.test | 10 | 0.000979s | 0.001007s | 0.000974s | byte equality observed |
| return_function_static_14.test | 10 | 0.000986s | 0.000970s | 0.000996s | byte equality observed |
| rvalues_test.test | 10 | 0.000987s | 0.001003s | 0.000987s | byte equality observed |
| stateless_test.test | 10 | 0.000977s | 0.000998s | 0.000982s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000995s | 0.000969s | 0.000970s | byte equality observed |
| std_bind_portable.test | 10 | 0.000965s | 0.000995s | 0.000972s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000983s | 0.001008s | 0.000988s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000955s | 0.001028s | 0.000957s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.001108s | 0.001105s | 0.001082s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.001008s | 0.001016s | 0.001006s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44815881069).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
