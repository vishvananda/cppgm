# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.264310 | 1.462020 | 1.337683 | 0.001447 | 0.001544 | 0.001569 |
| function_test_no_rtti.test | RUN | 0.270850 | 1.454214 | 1.341768 | 0.001275 | 0.001822 | 0.001523 |
| function_n_test.test | RUN | 0.253720 | 1.215385 | 1.124432 | 0.001640 | 0.001809 | 0.001784 |
| allocator_test.test | RUN | 0.201336 | 0.679439 | 0.783110 | 0.001789 | 0.001696 | 0.001642 |
| stateless_test.test | RUN | 0.155040 | 0.375511 | 0.495993 | 0.001680 | 0.001618 | 0.001697 |
| lambda_test.test | RUN | 0.327787 | 0.909260 | 1.100451 | 0.001738 | 0.001399 | 0.001502 |
| function_test_fail1.test | COMPILE_FAIL | 0.117311 | 0.258241 | 0.327883 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.121513 | 0.259293 | 0.369733 | — | — | — |
| function_30.test | COMPILE | 0.123835 | 0.268722 | 0.364627 | — | — | — |
| function_30_repeat.test | COMPILE | 0.124440 | 0.281454 | 0.359605 | — | — | — |
| function_arith_cxx98.test | RUN | 0.159326 | 0.453006 | 0.543293 | 0.001606 | 0.001571 | 0.001518 |
| function_arith_portable.test | RUN | 0.158159 | 0.427610 | 0.522108 | 0.001424 | 0.001408 | 0.001492 |
| sum_avg_cxx98.test | RUN | 0.150932 | 0.365910 | 0.486298 | 0.001447 | 0.001552 | 0.001695 |
| sum_avg_portable.test | RUN | 0.149883 | 0.338641 | 0.488737 | 0.001701 | 0.001760 | 0.001645 |
| mem_fun_cxx98.test | RUN | 0.175583 | 0.521071 | 0.604218 | 0.001586 | 0.001621 | 0.001541 |
| mem_fun_portable.test | RUN | 0.170202 | 0.473838 | 0.572802 | 0.001510 | 0.001790 | 0.001656 |
| std_bind_cxx98.test | RUN | 0.163679 | 0.443794 | 0.539902 | 0.001295 | 0.001294 | 0.001628 |
| std_bind_portable.test | RUN | 0.159751 | 0.398757 | 0.468164 | 0.001652 | 0.001787 | 0.001668 |
| function_ref_cxx98.test | RUN | 0.152598 | 0.367855 | 0.465012 | 0.001476 | 0.001748 | 0.001570 |
| function_ref_portable.test | RUN | 0.151302 | 0.347796 | 0.453071 | 0.001457 | 0.001571 | 0.001625 |
| contains_test.test | RUN | 0.188690 | 0.679592 | 0.731796 | 0.001532 | 0.001815 | 0.001799 |
| contains2_test.test | RUN | 0.168172 | 0.504458 | 0.570068 | 0.001728 | 0.001808 | 0.001586 |
| nothrow_swap.test | RUN | 0.165568 | 0.483292 | 0.541871 | 0.001608 | 0.001630 | 0.001674 |
| rvalues_test.test | RUN | 0.182720 | 0.557105 | 0.638583 | 0.001674 | 0.001698 | 0.001497 |
| function_typeof_test.test | COMPILE | 0.124751 | 0.261469 | 0.333154 | — | — | — |
| result_arg_types_test.test | RUN | 0.173163 | 0.406960 | 0.579690 | 0.001619 | 0.001872 | 0.001729 |
| result_arg_n_types_test.test | RUN | 0.182738 | 0.443624 | 0.687815 | 0.001628 | 0.001806 | 0.001739 |
| test_bad_function_call_shared.test | RUN | 0.155519 | 0.373816 | 0.504733 | 0.001515 | 0.001865 | 0.001866 |
| test_bad_function_call_static.test | RUN | 0.154362 | 0.367599 | 0.512499 | 0.001605 | 0.001656 | 0.001701 |
| mixed_cxxstd_shared.test | RUN | 0.161506 | 0.448779 | 0.532641 | 0.001624 | 0.001814 | 0.001554 |
| mixed_cxxstd_static.test | RUN | 0.161510 | 0.441585 | 0.564571 | 0.001580 | 0.001760 | 0.001340 |
| mixed_cxxstd_shared_0x.test | RUN | 0.160496 | 0.424158 | 0.559786 | 0.001797 | 0.002006 | 0.001896 |
| mixed_cxxstd_static_0x.test | RUN | 0.164226 | 0.433458 | 0.537357 | 0.001411 | 0.001753 | 0.001741 |
| mixed_cxxstd_shared_14.test | RUN | 0.165026 | 0.445249 | 0.568266 | 0.001710 | 0.001633 | 0.001731 |
| mixed_cxxstd_static_14.test | RUN | 0.158559 | 0.435803 | 0.533092 | 0.001666 | 0.001865 | 0.001702 |
| return_function_shared.test | RUN | 0.159211 | 0.433705 | 0.527826 | 0.001772 | 0.001810 | 0.001459 |
| return_function_static.test | RUN | 0.160010 | 0.436356 | 0.535310 | 0.001586 | 0.001727 | 0.001590 |
| return_function_shared_0x.test | RUN | 0.158286 | 0.424895 | 0.554780 | 0.001654 | 0.001964 | 0.001773 |
| return_function_static_0x.test | RUN | 0.158640 | 0.432713 | 0.549499 | 0.001619 | 0.001854 | 0.001727 |
| return_function_shared_14.test | RUN | 0.157373 | 0.433896 | 0.505015 | 0.001502 | 0.001780 | 0.001663 |
| return_function_static_14.test | RUN | 0.164702 | 0.443374 | 0.525768 | 0.001506 | 0.001667 | 0.001656 |
| quick.test | RUN | 0.168091 | 0.435217 | 0.548437 | 0.001666 | 0.001934 | 0.001504 |
| issue_42.test | COMPILE | 0.127591 | 0.270236 | 0.362119 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.203517 | 0.638069 | 0.793314 | 0.001404 | 0.001762 | 0.001585 |
| contains_test_no_rtti.test | RUN | 0.188399 | 0.702103 | 0.754609 | 0.001456 | 0.001473 | 0.001653 |
| contains2_test_no_rtti.test | RUN | 0.171649 | 0.544954 | 0.598366 | 0.001547 | 0.001475 | 0.001745 |
| contains3_test.test | RUN | 0.160926 | 0.440543 | 0.543852 | 0.001560 | 0.001740 | 0.001543 |
| contains3_test_no_rtti.test | RUN | 0.112400 | 0.311622 | 0.351450 | 0.001245 | 0.001325 | 0.001186 |
| issue_53.test | COMPILE | 0.106146 | 0.221314 | 0.256498 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998× | 0.997×, 1.000× | 1.009× |
| clang | 0.985× | 0.990×, 0.979× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44813597235).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000980s | 0.000987s | 0.000958s | byte equality observed |
| contains2_test.test | 10 | 0.000973s | 0.000959s | 0.000957s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000975s | 0.000981s | 0.000967s | byte equality observed |
| contains3_test.test | 10 | 0.000991s | 0.000989s | 0.001001s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.001014s | 0.000971s | 0.001064s | byte equality observed |
| contains_test.test | 10 | 0.001012s | 0.001005s | 0.000997s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.000987s | 0.001003s | 0.001029s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.001013s | 0.001021s | 0.001022s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.001030s | 0.001023s | 0.001024s | byte equality observed |
| function_arith_portable.test | 10 | 0.001037s | 0.000998s | 0.000998s | byte equality observed |
| function_n_test.test | 10 | 0.001006s | 0.001002s | 0.001017s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000971s | 0.000986s | 0.001001s | byte equality observed |
| function_ref_portable.test | 10 | 0.001010s | 0.001003s | 0.000980s | byte equality observed |
| function_test.test | 10 | 0.001057s | 0.001049s | 0.001027s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.001053s | 0.001047s | 0.001038s | byte equality observed |
| lambda_test.test | 10 | 0.001008s | 0.001009s | 0.000985s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.001017s | 0.000987s | 0.001022s | byte equality observed |
| mem_fun_portable.test | 10 | 0.000985s | 0.001035s | 0.000980s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.001103s | 0.001084s | 0.001091s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.001078s | 0.001107s | 0.001072s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.001073s | 0.001089s | 0.001092s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.001010s | 0.001029s | 0.000975s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.001009s | 0.001020s | 0.000966s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.001028s | 0.000991s | 0.000995s | byte equality observed |
| nothrow_swap.test | 10 | 0.001021s | 0.001008s | 0.000999s | byte equality observed |
| quick.test | 10 | 0.001033s | 0.000983s | 0.000978s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.001000s | 0.000984s | 0.001012s | byte equality observed |
| result_arg_types_test.test | 10 | 0.000982s | 0.000975s | 0.001018s | byte equality observed |
| return_function_shared.test | 10 | 0.001088s | 0.001096s | 0.001096s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.001083s | 0.001118s | 0.001107s | byte equality observed |
| return_function_shared_14.test | 10 | 0.001089s | 0.001130s | 0.001094s | byte equality observed |
| return_function_static.test | 10 | 0.000997s | 0.001015s | 0.000976s | byte equality observed |
| return_function_static_0x.test | 10 | 0.001005s | 0.001005s | 0.000974s | byte equality observed |
| return_function_static_14.test | 10 | 0.001058s | 0.001002s | 0.000979s | byte equality observed |
| rvalues_test.test | 10 | 0.001013s | 0.001015s | 0.000984s | byte equality observed |
| stateless_test.test | 10 | 0.001018s | 0.000992s | 0.000994s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000988s | 0.000998s | 0.000963s | byte equality observed |
| std_bind_portable.test | 10 | 0.000981s | 0.000969s | 0.000976s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.001003s | 0.001006s | 0.000973s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000971s | 0.000991s | 0.000980s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.001120s | 0.001115s | 0.001090s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.001063s | 0.001025s | 0.001032s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44813597235).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
