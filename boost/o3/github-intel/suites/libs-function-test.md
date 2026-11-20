# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.329183 | 1.863444 | 1.554168 | 0.001588 | 0.001688 | 0.001645 |
| function_test_no_rtti.test | RUN | 0.328638 | 1.842877 | 1.549282 | 0.001498 | 0.001793 | 0.001526 |
| function_n_test.test | RUN | 0.307147 | 1.519211 | 1.299328 | 0.001141 | 0.001800 | 0.001754 |
| allocator_test.test | RUN | 0.242464 | 0.849564 | 0.859404 | 0.001722 | 0.001756 | 0.001748 |
| stateless_test.test | RUN | 0.180265 | 0.455055 | 0.539113 | 0.001682 | 0.001493 | 0.001658 |
| lambda_test.test | RUN | 0.382354 | 1.102371 | 1.167572 | 0.001685 | 0.001747 | 0.001674 |
| function_test_fail1.test | COMPILE_FAIL | 0.135819 | 0.303344 | 0.357933 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.138280 | 0.312878 | 0.365691 | — | — | — |
| function_30.test | COMPILE | 0.143023 | 0.318503 | 0.375089 | — | — | — |
| function_30_repeat.test | COMPILE | 0.140044 | 0.321494 | 0.377524 | — | — | — |
| function_arith_cxx98.test | RUN | 0.187190 | 0.549816 | 0.590287 | 0.001507 | 0.001368 | 0.001793 |
| function_arith_portable.test | RUN | 0.184720 | 0.512857 | 0.554894 | 0.001551 | 0.001662 | 0.001682 |
| sum_avg_cxx98.test | RUN | 0.175950 | 0.444099 | 0.537920 | 0.001522 | 0.001464 | 0.001656 |
| sum_avg_portable.test | RUN | 0.176772 | 0.409468 | 0.522120 | 0.001635 | 0.001694 | 0.001624 |
| mem_fun_cxx98.test | RUN | 0.203807 | 0.643954 | 0.645395 | 0.001543 | 0.001646 | 0.001486 |
| mem_fun_portable.test | RUN | 0.198330 | 0.586694 | 0.625859 | 0.001598 | 0.001399 | 0.001475 |
| std_bind_cxx98.test | RUN | 0.188052 | 0.528542 | 0.592404 | 0.001521 | 0.001780 | 0.001756 |
| std_bind_portable.test | RUN | 0.186311 | 0.493430 | 0.530359 | 0.001760 | 0.001692 | 0.001655 |
| function_ref_cxx98.test | RUN | 0.174221 | 0.448343 | 0.528338 | 0.001498 | 0.001250 | 0.001630 |
| function_ref_portable.test | RUN | 0.173425 | 0.407365 | 0.508802 | 0.001698 | 0.001625 | 0.001380 |
| contains_test.test | RUN | 0.220055 | 0.853015 | 0.820053 | 0.001493 | 0.001660 | 0.001651 |
| contains2_test.test | RUN | 0.199894 | 0.619860 | 0.637753 | 0.001631 | 0.001616 | 0.001417 |
| nothrow_swap.test | RUN | 0.191040 | 0.578811 | 0.620685 | 0.001552 | 0.001504 | 0.001730 |
| rvalues_test.test | RUN | 0.217358 | 0.697527 | 0.712759 | 0.001546 | 0.001630 | 0.001668 |
| function_typeof_test.test | COMPILE | 0.139302 | 0.312689 | 0.382599 | — | — | — |
| result_arg_types_test.test | RUN | 0.202165 | 0.492752 | 0.643721 | 0.001674 | 0.001665 | 0.001671 |
| result_arg_n_types_test.test | RUN | 0.222883 | 0.536494 | 0.759553 | 0.001586 | 0.001743 | 0.001590 |
| test_bad_function_call_shared.test | RUN | 0.180311 | 0.442674 | 0.527295 | 0.001687 | 0.001730 | 0.001655 |
| test_bad_function_call_static.test | RUN | 0.180782 | 0.442897 | 0.536297 | 0.001559 | 0.001714 | 0.001694 |
| mixed_cxxstd_shared.test | RUN | 0.189845 | 0.535699 | 0.597095 | 0.001620 | 0.001611 | 0.001849 |
| mixed_cxxstd_static.test | RUN | 0.187948 | 0.532720 | 0.601981 | 0.001663 | 0.001488 | 0.001666 |
| mixed_cxxstd_shared_0x.test | RUN | 0.188817 | 0.536456 | 0.602528 | 0.001862 | 0.001900 | 0.001856 |
| mixed_cxxstd_static_0x.test | RUN | 0.196486 | 0.529779 | 0.602296 | 0.001388 | 0.001724 | 0.001784 |
| mixed_cxxstd_shared_14.test | RUN | 0.192149 | 0.528728 | 0.602628 | 0.001736 | 0.001662 | 0.001848 |
| mixed_cxxstd_static_14.test | RUN | 0.189009 | 0.537034 | 0.602395 | 0.001694 | 0.001798 | 0.001688 |
| return_function_shared.test | RUN | 0.190150 | 0.534876 | 0.592699 | 0.001665 | 0.001795 | 0.001697 |
| return_function_static.test | RUN | 0.186761 | 0.539575 | 0.590144 | 0.001568 | 0.001598 | 0.001515 |
| return_function_shared_0x.test | RUN | 0.185373 | 0.539715 | 0.587175 | 0.001702 | 0.001910 | 0.001882 |
| return_function_static_0x.test | RUN | 0.185621 | 0.538458 | 0.586311 | 0.001690 | 0.001721 | 0.001695 |
| return_function_shared_14.test | RUN | 0.183615 | 0.544077 | 0.576684 | 0.001841 | 0.001864 | 0.001841 |
| return_function_static_14.test | RUN | 0.185579 | 0.529916 | 0.578410 | 0.001434 | 0.001770 | 0.001604 |
| quick.test | RUN | 0.188784 | 0.538241 | 0.550288 | 0.001552 | 0.001588 | 0.001688 |
| issue_42.test | COMPILE | 0.149271 | 0.348097 | 0.394577 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.240313 | 0.736044 | 0.865181 | 0.001748 | 0.001655 | 0.001590 |
| contains_test_no_rtti.test | RUN | 0.225793 | 0.845134 | 0.829092 | 0.001688 | 0.001700 | 0.001526 |
| contains2_test_no_rtti.test | RUN | 0.198388 | 0.619788 | 0.641674 | 0.001518 | 0.001634 | 0.001371 |
| contains3_test.test | RUN | 0.186921 | 0.487087 | 0.576710 | 0.001364 | 0.001654 | 0.001564 |
| contains3_test_no_rtti.test | RUN | 0.123163 | 0.389403 | 0.390135 | 0.001279 | 0.001154 | 0.001174 |
| issue_53.test | COMPILE | 0.104717 | 0.256328 | 0.273583 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.991× | 0.995×, 0.987× | 0.996× |
| clang | 0.993× | 0.994×, 0.992× | 1.007× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44667760294).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.001007s | 0.001036s | 0.001022s | byte equality observed |
| contains2_test.test | 10 | 0.001037s | 0.001051s | 0.001004s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.001060s | 0.001107s | 0.000992s | byte equality observed |
| contains3_test.test | 10 | 0.001087s | 0.001044s | 0.001023s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.001090s | 0.001049s | 0.001084s | byte equality observed |
| contains_test.test | 10 | 0.001087s | 0.001035s | 0.001123s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.001116s | 0.001057s | 0.001064s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.001066s | 0.001027s | 0.001085s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.001105s | 0.001071s | 0.001107s | byte equality observed |
| function_arith_portable.test | 10 | 0.001095s | 0.001102s | 0.001089s | byte equality observed |
| function_n_test.test | 10 | 0.001081s | 0.001095s | 0.001091s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.001027s | 0.001015s | 0.001011s | byte equality observed |
| function_ref_portable.test | 10 | 0.001049s | 0.001029s | 0.001035s | byte equality observed |
| function_test.test | 10 | 0.001122s | 0.001107s | 0.001126s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.001126s | 0.001087s | 0.001102s | byte equality observed |
| lambda_test.test | 10 | 0.001075s | 0.001054s | 0.001109s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.001079s | 0.001059s | 0.001054s | byte equality observed |
| mem_fun_portable.test | 10 | 0.001083s | 0.001094s | 0.001066s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.001154s | 0.001129s | 0.001156s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.001118s | 0.001143s | 0.001177s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.001128s | 0.001158s | 0.001149s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.001067s | 0.001070s | 0.001094s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.001066s | 0.001054s | 0.001089s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.001060s | 0.001074s | 0.001066s | byte equality observed |
| nothrow_swap.test | 10 | 0.001094s | 0.001074s | 0.001093s | byte equality observed |
| quick.test | 10 | 0.001087s | 0.001083s | 0.001055s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.001043s | 0.001108s | 0.001075s | byte equality observed |
| result_arg_types_test.test | 10 | 0.001055s | 0.001038s | 0.001051s | byte equality observed |
| return_function_shared.test | 8 | 0.001132s | 0.001133s | 0.001091s | byte equality observed |
| return_function_shared_0x.test | 9 | 0.001105s | 0.001147s | 0.001115s | byte equality observed |
| return_function_shared_14.test | 10 | 0.001125s | 0.001115s | 0.001135s | byte equality observed |
| return_function_static.test | 10 | 0.001077s | 0.001058s | 0.001063s | byte equality observed |
| return_function_static_0x.test | 10 | 0.001080s | 0.001028s | 0.001045s | byte equality observed |
| return_function_static_14.test | 10 | 0.001089s | 0.001024s | 0.001085s | byte equality observed |
| rvalues_test.test | 10 | 0.001072s | 0.001072s | 0.001065s | byte equality observed |
| stateless_test.test | 10 | 0.001052s | 0.001042s | 0.001064s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.001058s | 0.001036s | 0.001052s | byte equality observed |
| std_bind_portable.test | 10 | 0.001014s | 0.001051s | 0.001039s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.001041s | 0.001020s | 0.000997s | byte equality observed |
| sum_avg_portable.test | 10 | 0.001031s | 0.000976s | 0.001053s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.001158s | 0.001162s | 0.001142s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.001123s | 0.001076s | 0.001072s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44667760294).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
