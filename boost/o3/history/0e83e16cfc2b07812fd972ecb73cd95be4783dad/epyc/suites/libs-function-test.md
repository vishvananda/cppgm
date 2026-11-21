# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.276390 | 1.572021 | 1.397015 | 0.001778 | 0.001630 | 0.001680 |
| function_test_no_rtti.test | RUN | 0.276482 | 1.566849 | 1.402704 | 0.001603 | 0.001847 | 0.001536 |
| function_n_test.test | RUN | 0.256727 | 1.339136 | 1.161740 | 0.001657 | 0.001863 | 0.001854 |
| allocator_test.test | RUN | 0.214488 | 0.740957 | 0.811309 | 0.001934 | 0.002218 | 0.001727 |
| stateless_test.test | RUN | 0.205537 | 0.395455 | 0.502477 | 0.001863 | 0.001706 | 0.001888 |
| lambda_test.test | RUN | 0.438518 | 0.950179 | 1.127491 | 0.001871 | 0.001904 | 0.001655 |
| function_test_fail1.test | COMPILE_FAIL | 0.164274 | 0.260399 | 0.370142 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.167884 | 0.271891 | 0.355540 | — | — | — |
| function_30.test | COMPILE | 0.133756 | 0.287218 | 0.372908 | — | — | — |
| function_30_repeat.test | COMPILE | 0.138120 | 0.279194 | 0.369625 | — | — | — |
| function_arith_cxx98.test | RUN | 0.169990 | 0.442919 | 0.556325 | 0.001958 | 0.001546 | 0.001618 |
| function_arith_portable.test | RUN | 0.173923 | 0.437457 | 0.534246 | 0.001697 | 0.001612 | 0.001680 |
| sum_avg_cxx98.test | RUN | 0.159963 | 0.362871 | 0.490612 | 0.001576 | 0.001732 | 0.001840 |
| sum_avg_portable.test | RUN | 0.160199 | 0.317601 | 0.498817 | 0.001772 | 0.001776 | 0.001722 |
| mem_fun_cxx98.test | RUN | 0.183576 | 0.499151 | 0.604065 | 0.005624 | 0.001841 | 0.001814 |
| mem_fun_portable.test | RUN | 0.181712 | 0.515426 | 0.586676 | 0.001814 | 0.001803 | 0.001918 |
| std_bind_cxx98.test | RUN | 0.168487 | 0.479186 | 0.546537 | 0.001369 | 0.001766 | 0.001822 |
| std_bind_portable.test | RUN | 0.210709 | 0.421592 | 0.489113 | 0.001834 | 0.001717 | 0.001782 |
| function_ref_cxx98.test | RUN | 0.164326 | 0.389557 | 0.462183 | 0.001616 | 0.001689 | 0.001839 |
| function_ref_portable.test | RUN | 0.162299 | 0.365264 | 0.501968 | 0.001366 | 0.001872 | 0.001911 |
| contains_test.test | RUN | 0.200289 | 0.724547 | 0.759142 | 0.001644 | 0.001923 | 0.001716 |
| contains2_test.test | RUN | 0.180442 | 0.519491 | 0.605388 | 0.001832 | 0.001595 | 0.001658 |
| nothrow_swap.test | RUN | 0.168278 | 0.510241 | 0.587259 | 0.001654 | 0.001608 | 0.001888 |
| rvalues_test.test | RUN | 0.191946 | 0.608074 | 0.628468 | 0.001607 | 0.001792 | 0.001856 |
| function_typeof_test.test | COMPILE | 0.129576 | 0.274305 | 0.391443 | — | — | — |
| result_arg_types_test.test | RUN | 0.181042 | 0.416987 | 0.625484 | 0.001494 | 0.001808 | 0.001580 |
| result_arg_n_types_test.test | RUN | 0.191748 | 0.455759 | 0.690981 | 0.001629 | 0.001829 | 0.001922 |
| test_bad_function_call_shared.test | RUN | 0.158580 | 0.380598 | 0.498514 | 0.001844 | 0.001928 | 0.001784 |
| test_bad_function_call_static.test | RUN | 0.160667 | 0.387495 | 0.490565 | 0.001596 | 0.001570 | 0.001486 |
| mixed_cxxstd_shared.test | RUN | 0.166913 | 0.442200 | 0.588859 | 0.001784 | 0.001773 | 0.001848 |
| mixed_cxxstd_static.test | RUN | 0.166725 | 0.456602 | 0.585714 | 0.001537 | 0.001940 | 0.001811 |
| mixed_cxxstd_shared_0x.test | RUN | 0.168373 | 0.438708 | 0.590155 | 0.001884 | 0.001946 | 0.002121 |
| mixed_cxxstd_static_0x.test | RUN | 0.172550 | 0.454295 | 0.546234 | 0.001692 | 0.001784 | 0.001822 |
| mixed_cxxstd_shared_14.test | RUN | 0.166577 | 0.458648 | 0.580880 | 0.001716 | 0.001778 | 0.001913 |
| mixed_cxxstd_static_14.test | RUN | 0.165740 | 0.467525 | 0.554543 | 0.001798 | 0.001694 | 0.001919 |
| return_function_shared.test | RUN | 0.165770 | 0.444572 | 0.560266 | 0.001858 | 0.001692 | 0.001976 |
| return_function_static.test | RUN | 0.171206 | 0.444100 | 0.581936 | 0.001659 | 0.001668 | 0.001766 |
| return_function_shared_0x.test | RUN | 0.168796 | 0.452059 | 0.546774 | 0.001637 | 0.001965 | 0.002122 |
| return_function_static_0x.test | RUN | 0.170633 | 0.438549 | 0.568142 | 0.001792 | 0.001820 | 0.001672 |
| return_function_shared_14.test | RUN | 0.167950 | 0.453322 | 0.562997 | 0.001759 | 0.001939 | 0.001984 |
| return_function_static_14.test | RUN | 0.166541 | 0.451315 | 0.583515 | 0.001654 | 0.001768 | 0.001930 |
| quick.test | RUN | 0.168742 | 0.433830 | 0.506828 | 0.001529 | 0.001874 | 0.001896 |
| issue_42.test | COMPILE | 0.128651 | 0.301134 | 0.355382 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.220733 | 0.626683 | 0.802800 | 0.001735 | 0.001864 | 0.001638 |
| contains_test_no_rtti.test | RUN | 0.201394 | 0.699247 | 0.775367 | 0.001642 | 0.001743 | 0.001352 |
| contains2_test_no_rtti.test | RUN | 0.179445 | 0.529786 | 0.620102 | 0.001382 | 0.001438 | 0.001623 |
| contains3_test.test | RUN | 0.170608 | 0.403846 | 0.535015 | 0.001356 | 0.001570 | 0.001334 |
| contains3_test_no_rtti.test | RUN | 0.122063 | 0.337682 | 0.400612 | 0.001349 | 0.001276 | 0.001340 |
| issue_53.test | COMPILE | 0.112418 | 0.239971 | 0.277143 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.996× | 0.994×, 0.998× | 1.044× |
| clang | 1.001× | 1.007×, 0.994× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44830361139).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000984s | 0.000997s | 0.000989s | byte equality observed |
| contains2_test.test | 10 | 0.000987s | 0.000974s | 0.000984s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000995s | 0.000964s | 0.000984s | byte equality observed |
| contains3_test.test | 10 | 0.001007s | 0.001004s | 0.000992s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000999s | 0.000991s | 0.001000s | byte equality observed |
| contains_test.test | 10 | 0.001008s | 0.000990s | 0.001002s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.001021s | 0.000997s | 0.001007s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.000995s | 0.001005s | 0.000996s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.001040s | 0.001020s | 0.001001s | byte equality observed |
| function_arith_portable.test | 10 | 0.001020s | 0.001017s | 0.001001s | byte equality observed |
| function_n_test.test | 10 | 0.001010s | 0.001045s | 0.001007s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000988s | 0.000971s | 0.000970s | byte equality observed |
| function_ref_portable.test | 10 | 0.000966s | 0.000967s | 0.000994s | byte equality observed |
| function_test.test | 10 | 0.001033s | 0.001051s | 0.001051s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.001064s | 0.001041s | 0.001016s | byte equality observed |
| lambda_test.test | 10 | 0.000995s | 0.001022s | 0.001000s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.000984s | 0.000991s | 0.001027s | byte equality observed |
| mem_fun_portable.test | 10 | 0.000993s | 0.000987s | 0.000983s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.001094s | 0.001086s | 0.001073s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.001060s | 0.001053s | 0.001087s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.001082s | 0.001094s | 0.001121s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.000990s | 0.001016s | 0.001007s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.000990s | 0.001025s | 0.000979s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.001011s | 0.001021s | 0.000977s | byte equality observed |
| nothrow_swap.test | 10 | 0.000995s | 0.000985s | 0.000983s | byte equality observed |
| quick.test | 10 | 0.000994s | 0.001027s | 0.001004s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.001014s | 0.000980s | 0.001023s | byte equality observed |
| result_arg_types_test.test | 10 | 0.000994s | 0.000982s | 0.000980s | byte equality observed |
| return_function_shared.test | 10 | 0.001068s | 0.001084s | 0.001070s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.001077s | 0.001066s | 0.001091s | byte equality observed |
| return_function_shared_14.test | 10 | 0.001070s | 0.001080s | 0.001086s | byte equality observed |
| return_function_static.test | 10 | 0.001018s | 0.001025s | 0.000980s | byte equality observed |
| return_function_static_0x.test | 10 | 0.001025s | 0.001043s | 0.000969s | byte equality observed |
| return_function_static_14.test | 10 | 0.001007s | 0.001009s | 0.000996s | byte equality observed |
| rvalues_test.test | 10 | 0.001008s | 0.000996s | 0.000969s | byte equality observed |
| stateless_test.test | 10 | 0.001002s | 0.001000s | 0.000991s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000977s | 0.000965s | 0.000971s | byte equality observed |
| std_bind_portable.test | 10 | 0.000989s | 0.000987s | 0.000962s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000992s | 0.001025s | 0.000981s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000972s | 0.000958s | 0.000993s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.001110s | 0.001116s | 0.001096s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.001025s | 0.001033s | 0.001027s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44830361139).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
