# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.271987 | 1.551458 | 1.351489 | 0.001629 | 0.001910 | 0.001713 |
| function_test_no_rtti.test | RUN | 0.271671 | 1.533804 | 1.346344 | 0.001388 | 0.001664 | 0.001530 |
| function_n_test.test | RUN | 0.250472 | 1.273810 | 1.121350 | 0.001562 | 0.001644 | 0.001715 |
| allocator_test.test | RUN | 0.208159 | 0.749024 | 0.770519 | 0.001733 | 0.001845 | 0.001665 |
| stateless_test.test | RUN | 0.153646 | 0.379669 | 0.490820 | 0.001598 | 0.001632 | 0.001735 |
| lambda_test.test | RUN | 0.340288 | 0.933799 | 1.064417 | 0.001694 | 0.001540 | 0.001570 |
| function_test_fail1.test | COMPILE_FAIL | 0.119361 | 0.256728 | 0.361943 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.122755 | 0.265863 | 0.365716 | — | — | — |
| function_30.test | COMPILE | 0.125226 | 0.281628 | 0.371585 | — | — | — |
| function_30_repeat.test | COMPILE | 0.128922 | 0.273451 | 0.374228 | — | — | — |
| function_arith_cxx98.test | RUN | 0.155138 | 0.461887 | 0.550133 | 0.001784 | 0.001672 | 0.001472 |
| function_arith_portable.test | RUN | 0.160358 | 0.417369 | 0.496941 | 0.001512 | 0.001385 | 0.001570 |
| sum_avg_cxx98.test | RUN | 0.156324 | 0.389295 | 0.487680 | 0.001597 | 0.001561 | 0.001653 |
| sum_avg_portable.test | RUN | 0.153621 | 0.341696 | 0.468578 | 0.001586 | 0.001937 | 0.001767 |
| mem_fun_cxx98.test | RUN | 0.181506 | 0.539042 | 0.620382 | 0.001601 | 0.001527 | 0.001575 |
| mem_fun_portable.test | RUN | 0.170207 | 0.497872 | 0.595856 | 0.001818 | 0.001590 | 0.001682 |
| std_bind_cxx98.test | RUN | 0.166718 | 0.446348 | 0.524685 | 0.001695 | 0.001366 | 0.001661 |
| std_bind_portable.test | RUN | 0.161574 | 0.411480 | 0.497580 | 0.001256 | 0.001846 | 0.001675 |
| function_ref_cxx98.test | RUN | 0.153660 | 0.382268 | 0.504193 | 0.001688 | 0.001616 | 0.001572 |
| function_ref_portable.test | RUN | 0.151850 | 0.342080 | 0.491537 | 0.001435 | 0.001741 | 0.001348 |
| contains_test.test | RUN | 0.192931 | 0.706875 | 0.737317 | 0.001930 | 0.001914 | 0.001707 |
| contains2_test.test | RUN | 0.175225 | 0.516838 | 0.600358 | 0.001724 | 0.001763 | 0.001590 |
| nothrow_swap.test | RUN | 0.166186 | 0.469850 | 0.578879 | 0.001592 | 0.001792 | 0.001589 |
| rvalues_test.test | RUN | 0.181950 | 0.604984 | 0.659722 | 0.001779 | 0.002813 | 0.001711 |
| function_typeof_test.test | COMPILE | 0.127757 | 0.282012 | 0.363863 | — | — | — |
| result_arg_types_test.test | RUN | 0.179454 | 0.412952 | 0.611564 | 0.001636 | 0.001674 | 0.001499 |
| result_arg_n_types_test.test | RUN | 0.190967 | 0.452806 | 0.692746 | 0.001688 | 0.001847 | 0.001700 |
| test_bad_function_call_shared.test | RUN | 0.156175 | 0.392848 | 0.517967 | 0.001926 | 0.002144 | 0.002017 |
| test_bad_function_call_static.test | RUN | 0.155795 | 0.382959 | 0.496158 | 0.001662 | 0.001603 | 0.001760 |
| mixed_cxxstd_shared.test | RUN | 0.166927 | 0.446973 | 0.550286 | 0.003035 | 0.001719 | 0.001772 |
| mixed_cxxstd_static.test | RUN | 0.164934 | 0.446624 | 0.538335 | 0.001617 | 0.001716 | 0.001645 |
| mixed_cxxstd_shared_0x.test | RUN | 0.164493 | 0.454004 | 0.566583 | 0.001931 | 0.002081 | 0.001938 |
| mixed_cxxstd_static_0x.test | RUN | 0.168320 | 0.440595 | 0.563781 | 0.001742 | 0.001874 | 0.001465 |
| mixed_cxxstd_shared_14.test | RUN | 0.169966 | 0.464852 | 0.557872 | 0.001366 | 0.001601 | 0.001903 |
| mixed_cxxstd_static_14.test | RUN | 0.167586 | 0.447004 | 0.556988 | 0.001796 | 0.001957 | 0.001683 |
| return_function_shared.test | RUN | 0.158550 | 0.438384 | 0.546958 | 0.001625 | 0.001736 | 0.001443 |
| return_function_static.test | RUN | 0.161911 | 0.442948 | 0.523509 | 0.001615 | 0.001640 | 0.001728 |
| return_function_shared_0x.test | RUN | 0.160391 | 0.456091 | 0.534150 | 0.001874 | 0.001940 | 0.001843 |
| return_function_static_0x.test | RUN | 0.161812 | 0.434601 | 0.533337 | 0.001683 | 0.001898 | 0.001751 |
| return_function_shared_14.test | RUN | 0.160843 | 0.453693 | 0.539657 | 0.001602 | 0.001816 | 0.001668 |
| return_function_static_14.test | RUN | 0.163340 | 0.445513 | 0.512298 | 0.001747 | 0.001764 | 0.001430 |
| quick.test | RUN | 0.164788 | 0.461239 | 0.535148 | 0.001634 | 0.001740 | 0.001756 |
| issue_42.test | COMPILE | 0.125728 | 0.289397 | 0.395737 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.213432 | 0.629711 | 0.810816 | 0.001395 | 0.001642 | 0.001696 |
| contains_test_no_rtti.test | RUN | 0.191915 | 0.689783 | 0.748929 | 0.001664 | 0.001632 | 0.001181 |
| contains2_test_no_rtti.test | RUN | 0.171805 | 0.507861 | 0.582086 | 0.001539 | 0.001482 | 0.001458 |
| contains3_test.test | RUN | 0.163354 | 0.404523 | 0.540890 | 0.001405 | 0.001669 | 0.001542 |
| contains3_test_no_rtti.test | RUN | 0.112065 | 0.305888 | 0.390710 | 0.001306 | 0.001291 | 0.001186 |
| issue_53.test | COMPILE | 0.102479 | 0.227045 | 0.255826 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.996× | 1.017×, 0.975× | 0.987× |
| clang | 0.985× | 0.984×, 0.987× | 1.024× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44922642903).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000989s | 0.000979s | 0.001020s | byte equality observed |
| contains2_test.test | 10 | 0.000987s | 0.000992s | 0.000995s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.001028s | 0.000975s | 0.001000s | byte equality observed |
| contains3_test.test | 10 | 0.001039s | 0.000993s | 0.001011s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.001017s | 0.000991s | 0.001017s | byte equality observed |
| contains_test.test | 10 | 0.001031s | 0.001023s | 0.001001s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.001021s | 0.001021s | 0.000999s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.001024s | 0.001019s | 0.001008s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.001036s | 0.001043s | 0.001040s | byte equality observed |
| function_arith_portable.test | 10 | 0.001027s | 0.001027s | 0.001030s | byte equality observed |
| function_n_test.test | 10 | 0.001035s | 0.001032s | 0.001024s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.001002s | 0.000991s | 0.000990s | byte equality observed |
| function_ref_portable.test | 10 | 0.000998s | 0.000998s | 0.001013s | byte equality observed |
| function_test.test | 10 | 0.001084s | 0.001067s | 0.001072s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.001079s | 0.001072s | 0.001077s | byte equality observed |
| lambda_test.test | 10 | 0.001037s | 0.000996s | 0.000994s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.001020s | 0.000999s | 0.000989s | byte equality observed |
| mem_fun_portable.test | 10 | 0.001036s | 0.000984s | 0.001005s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.001099s | 0.001091s | 0.001151s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.001103s | 0.001077s | 0.001109s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.001084s | 0.001081s | 0.001108s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.001032s | 0.001006s | 0.001032s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.001011s | 0.000986s | 0.001002s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.001035s | 0.001006s | 0.001021s | byte equality observed |
| nothrow_swap.test | 10 | 0.001018s | 0.000988s | 0.001035s | byte equality observed |
| quick.test | 10 | 0.001013s | 0.001005s | 0.001013s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.001011s | 0.000962s | 0.001021s | byte equality observed |
| result_arg_types_test.test | 10 | 0.001040s | 0.000999s | 0.001005s | byte equality observed |
| return_function_shared.test | 10 | 0.001117s | 0.001058s | 0.001113s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.001093s | 0.001103s | 0.001121s | byte equality observed |
| return_function_shared_14.test | 10 | 0.001111s | 0.001083s | 0.001121s | byte equality observed |
| return_function_static.test | 10 | 0.001015s | 0.000990s | 0.001016s | byte equality observed |
| return_function_static_0x.test | 10 | 0.001022s | 0.001023s | 0.001021s | byte equality observed |
| return_function_static_14.test | 10 | 0.001027s | 0.001012s | 0.001036s | byte equality observed |
| rvalues_test.test | 10 | 0.001002s | 0.001046s | 0.001004s | byte equality observed |
| stateless_test.test | 10 | 0.001002s | 0.000996s | 0.001020s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.001003s | 0.000981s | 0.000991s | byte equality observed |
| std_bind_portable.test | 10 | 0.001030s | 0.001002s | 0.000999s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000986s | 0.000975s | 0.001002s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000979s | 0.000983s | 0.000974s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.001134s | 0.001111s | 0.001142s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.001041s | 0.001053s | 0.001050s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44922642903).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
