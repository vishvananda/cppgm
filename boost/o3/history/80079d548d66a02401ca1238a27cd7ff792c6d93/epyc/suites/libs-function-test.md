# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.276115 | 1.496697 | 1.359141 | 0.001457 | 0.001714 | 0.001620 |
| function_test_no_rtti.test | RUN | 0.265770 | 1.451857 | 1.359485 | 0.001556 | 0.001780 | 0.001623 |
| function_n_test.test | RUN | 0.258490 | 1.212140 | 1.134965 | 0.001679 | 0.001671 | 0.001767 |
| allocator_test.test | RUN | 0.204824 | 0.702444 | 0.791159 | 0.001795 | 0.001812 | 0.001913 |
| stateless_test.test | RUN | 0.156250 | 0.384101 | 0.494313 | 0.001763 | 0.001668 | 0.001783 |
| lambda_test.test | RUN | 0.334510 | 0.906727 | 1.097872 | 0.001754 | 0.001706 | 0.001673 |
| function_test_fail1.test | COMPILE_FAIL | 0.118884 | 0.253595 | 0.350181 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.122078 | 0.262719 | 0.352113 | — | — | — |
| function_30.test | COMPILE | 0.126014 | 0.276389 | 0.365396 | — | — | — |
| function_30_repeat.test | COMPILE | 0.124742 | 0.268569 | 0.373984 | — | — | — |
| function_arith_cxx98.test | RUN | 0.162353 | 0.450528 | 0.546073 | 0.001682 | 0.001686 | 0.001625 |
| function_arith_portable.test | RUN | 0.164439 | 0.433761 | 0.516937 | 0.001614 | 0.001623 | 0.001737 |
| sum_avg_cxx98.test | RUN | 0.152420 | 0.385012 | 0.478109 | 0.001270 | 0.001684 | 0.001629 |
| sum_avg_portable.test | RUN | 0.155322 | 0.345029 | 0.497368 | 0.001731 | 0.001876 | 0.001722 |
| mem_fun_cxx98.test | RUN | 0.176539 | 0.526552 | 0.604486 | 0.001741 | 0.001670 | 0.001612 |
| mem_fun_portable.test | RUN | 0.175297 | 0.485226 | 0.556175 | 0.001370 | 0.001608 | 0.001666 |
| std_bind_cxx98.test | RUN | 0.160485 | 0.458748 | 0.497103 | 0.001594 | 0.001579 | 0.001658 |
| std_bind_portable.test | RUN | 0.164440 | 0.406738 | 0.475684 | 0.001753 | 0.001818 | 0.001782 |
| function_ref_cxx98.test | RUN | 0.153120 | 0.378347 | 0.498034 | 0.001658 | 0.001606 | 0.001562 |
| function_ref_portable.test | RUN | 0.151505 | 0.338645 | 0.490404 | 0.001713 | 0.001636 | 0.001682 |
| contains_test.test | RUN | 0.190689 | 0.698925 | 0.704538 | 0.001361 | 0.001838 | 0.001448 |
| contains2_test.test | RUN | 0.170556 | 0.503676 | 0.567033 | 0.001784 | 0.001722 | 0.001727 |
| nothrow_swap.test | RUN | 0.168081 | 0.468833 | 0.531568 | 0.001711 | 0.001712 | 0.001751 |
| rvalues_test.test | RUN | 0.190461 | 0.581601 | 0.629272 | 0.001523 | 0.001852 | 0.001582 |
| function_typeof_test.test | COMPILE | 0.125727 | 0.263337 | 0.359019 | — | — | — |
| result_arg_types_test.test | RUN | 0.171849 | 0.407035 | 0.607536 | 0.001472 | 0.001768 | 0.001531 |
| result_arg_n_types_test.test | RUN | 0.188231 | 0.448807 | 0.680450 | 0.001698 | 0.001790 | 0.001674 |
| test_bad_function_call_shared.test | RUN | 0.152516 | 0.368165 | 0.517434 | 0.001583 | 0.001498 | 0.001886 |
| test_bad_function_call_static.test | RUN | 0.153771 | 0.364115 | 0.524892 | 0.001689 | 0.001537 | 0.001773 |
| mixed_cxxstd_shared.test | RUN | 0.169658 | 0.439974 | 0.568249 | 0.001787 | 0.001710 | 0.001973 |
| mixed_cxxstd_static.test | RUN | 0.164115 | 0.439219 | 0.583914 | 0.001772 | 0.001602 | 0.001676 |
| mixed_cxxstd_shared_0x.test | RUN | 0.160991 | 0.450917 | 0.519320 | 0.001774 | 0.001981 | 0.001946 |
| mixed_cxxstd_static_0x.test | RUN | 0.164234 | 0.444341 | 0.547756 | 0.001530 | 0.001759 | 0.001752 |
| mixed_cxxstd_shared_14.test | RUN | 0.164827 | 0.448176 | 0.571216 | 0.001851 | 0.001740 | 0.001877 |
| mixed_cxxstd_static_14.test | RUN | 0.164345 | 0.443778 | 0.541320 | 0.001569 | 0.001779 | 0.001735 |
| return_function_shared.test | RUN | 0.163568 | 0.442892 | 0.523475 | 0.001642 | 0.002057 | 0.001951 |
| return_function_static.test | RUN | 0.166956 | 0.446466 | 0.569833 | 0.001543 | 0.001556 | 0.001625 |
| return_function_shared_0x.test | RUN | 0.168797 | 0.458059 | 0.551179 | 0.001912 | 0.001796 | 0.001916 |
| return_function_static_0x.test | RUN | 0.155960 | 0.434333 | 0.553080 | 0.001443 | 0.001929 | 0.001702 |
| return_function_shared_14.test | RUN | 0.164996 | 0.446789 | 0.546919 | 0.001737 | 0.001968 | 0.001942 |
| return_function_static_14.test | RUN | 0.162334 | 0.437163 | 0.539593 | 0.001528 | 0.001582 | 0.001757 |
| quick.test | RUN | 0.162010 | 0.426630 | 0.516165 | 0.001454 | 0.001725 | 0.001546 |
| issue_42.test | COMPILE | 0.129413 | 0.297021 | 0.379035 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.211492 | 0.619856 | 0.753310 | 0.001498 | 0.001465 | 0.001568 |
| contains_test_no_rtti.test | RUN | 0.189345 | 0.687954 | 0.757108 | 0.001527 | 0.001892 | 0.001657 |
| contains2_test_no_rtti.test | RUN | 0.173686 | 0.522290 | 0.612359 | 0.001547 | 0.001584 | 0.001342 |
| contains3_test.test | RUN | 0.159355 | 0.398666 | 0.520049 | 0.001362 | 0.001558 | 0.001885 |
| contains3_test_no_rtti.test | RUN | 0.109433 | 0.317426 | 0.374784 | 0.001281 | 0.001274 | 0.001194 |
| issue_53.test | COMPILE | 0.097914 | 0.230000 | 0.256261 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.996× | 1.002×, 0.991× | 0.994× |
| clang | 0.996× | 1.001×, 0.992× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45272062060).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000957s | 0.000974s | 0.000957s | byte equality observed |
| contains2_test.test | 10 | 0.000963s | 0.000985s | 0.000954s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000957s | 0.000960s | 0.000997s | byte equality observed |
| contains3_test.test | 10 | 0.000957s | 0.000979s | 0.001030s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.001000s | 0.000989s | 0.001001s | byte equality observed |
| contains_test.test | 10 | 0.001013s | 0.000992s | 0.001046s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.001032s | 0.001004s | 0.001007s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.001002s | 0.001033s | 0.001020s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.001017s | 0.001030s | 0.001012s | byte equality observed |
| function_arith_portable.test | 10 | 0.001014s | 0.001020s | 0.001018s | byte equality observed |
| function_n_test.test | 10 | 0.001007s | 0.001033s | 0.000999s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000992s | 0.000996s | 0.000994s | byte equality observed |
| function_ref_portable.test | 10 | 0.000975s | 0.000982s | 0.000976s | byte equality observed |
| function_test.test | 10 | 0.001047s | 0.001063s | 0.001060s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.001059s | 0.001049s | 0.001067s | byte equality observed |
| lambda_test.test | 10 | 0.001003s | 0.001038s | 0.001004s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.001011s | 0.001005s | 0.000986s | byte equality observed |
| mem_fun_portable.test | 10 | 0.001001s | 0.001032s | 0.000974s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.001080s | 0.001093s | 0.001086s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.001097s | 0.001089s | 0.001091s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.001079s | 0.001081s | 0.001097s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.000998s | 0.001054s | 0.000987s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.000989s | 0.001033s | 0.000983s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.001008s | 0.001017s | 0.001024s | byte equality observed |
| nothrow_swap.test | 10 | 0.001012s | 0.001046s | 0.001004s | byte equality observed |
| quick.test | 10 | 0.001001s | 0.001000s | 0.000990s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.000987s | 0.001012s | 0.001019s | byte equality observed |
| result_arg_types_test.test | 10 | 0.001008s | 0.000984s | 0.000999s | byte equality observed |
| return_function_shared.test | 10 | 0.001085s | 0.001056s | 0.001076s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.001105s | 0.001053s | 0.001072s | byte equality observed |
| return_function_shared_14.test | 10 | 0.001097s | 0.001078s | 0.001081s | byte equality observed |
| return_function_static.test | 10 | 0.001043s | 0.000985s | 0.000981s | byte equality observed |
| return_function_static_0x.test | 10 | 0.001030s | 0.000978s | 0.000999s | byte equality observed |
| return_function_static_14.test | 10 | 0.001013s | 0.001005s | 0.000980s | byte equality observed |
| rvalues_test.test | 10 | 0.001004s | 0.001012s | 0.000998s | byte equality observed |
| stateless_test.test | 10 | 0.001024s | 0.000977s | 0.000971s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.001003s | 0.000981s | 0.000978s | byte equality observed |
| std_bind_portable.test | 10 | 0.000985s | 0.001002s | 0.000957s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000962s | 0.000970s | 0.000978s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000984s | 0.000965s | 0.000973s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.001108s | 0.001104s | 0.001110s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.001022s | 0.001026s | 0.001017s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45272062060).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
