# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.324622 | 1.819122 | 1.491865 | 0.001455 | 0.001591 | 0.001358 |
| function_test_no_rtti.test | RUN | 0.319633 | 1.806961 | 1.493016 | 0.001533 | 0.001672 | 0.001635 |
| function_n_test.test | RUN | 0.295437 | 1.478214 | 1.262793 | 0.001562 | 0.001846 | 0.001690 |
| allocator_test.test | RUN | 0.236587 | 0.840513 | 0.824905 | 0.001800 | 0.001694 | 0.001676 |
| stateless_test.test | RUN | 0.172223 | 0.441697 | 0.524537 | 0.001506 | 0.001349 | 0.001594 |
| lambda_test.test | RUN | 0.369599 | 1.088145 | 1.143662 | 0.001557 | 0.001356 | 0.001610 |
| function_test_fail1.test | COMPILE_FAIL | 0.130869 | 0.298445 | 0.357431 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.134841 | 0.293131 | 0.358185 | — | — | — |
| function_30.test | COMPILE | 0.135071 | 0.302610 | 0.376259 | — | — | — |
| function_30_repeat.test | COMPILE | 0.135347 | 0.315634 | 0.375783 | — | — | — |
| function_arith_cxx98.test | RUN | 0.179454 | 0.532986 | 0.568303 | 0.001493 | 0.001441 | 0.001516 |
| function_arith_portable.test | RUN | 0.177249 | 0.504236 | 0.538852 | 0.001577 | 0.001535 | 0.001564 |
| sum_avg_cxx98.test | RUN | 0.171232 | 0.425916 | 0.502007 | 0.001591 | 0.001241 | 0.001606 |
| sum_avg_portable.test | RUN | 0.171214 | 0.395285 | 0.492490 | 0.001560 | 0.001592 | 0.001630 |
| mem_fun_cxx98.test | RUN | 0.199379 | 0.620853 | 0.643426 | 0.001649 | 0.001504 | 0.001592 |
| mem_fun_portable.test | RUN | 0.194576 | 0.556372 | 0.619788 | 0.001433 | 0.001540 | 0.001594 |
| std_bind_cxx98.test | RUN | 0.181460 | 0.515085 | 0.572906 | 0.001438 | 0.001685 | 0.001638 |
| std_bind_portable.test | RUN | 0.184785 | 0.481448 | 0.522192 | 0.001550 | 0.001697 | 0.001596 |
| function_ref_cxx98.test | RUN | 0.171870 | 0.434076 | 0.513713 | 0.001437 | 0.001502 | 0.001674 |
| function_ref_portable.test | RUN | 0.169198 | 0.398649 | 0.497911 | 0.001608 | 0.001423 | 0.001444 |
| contains_test.test | RUN | 0.216576 | 0.837018 | 0.803204 | 0.001499 | 0.001566 | 0.001429 |
| contains2_test.test | RUN | 0.193658 | 0.603701 | 0.624611 | 0.001592 | 0.001510 | 0.001431 |
| nothrow_swap.test | RUN | 0.185346 | 0.564904 | 0.597036 | 0.001486 | 0.001574 | 0.001489 |
| rvalues_test.test | RUN | 0.213560 | 0.704947 | 0.691739 | 0.001631 | 0.001598 | 0.001582 |
| function_typeof_test.test | COMPILE | 0.135657 | 0.307841 | 0.366799 | — | — | — |
| result_arg_types_test.test | RUN | 0.196557 | 0.478854 | 0.628855 | 0.001506 | 0.001699 | 0.001566 |
| result_arg_n_types_test.test | RUN | 0.221198 | 0.522097 | 0.721465 | 0.001557 | 0.001533 | 0.001656 |
| test_bad_function_call_shared.test | RUN | 0.174401 | 0.439968 | 0.512921 | 0.001642 | 0.001782 | 0.001671 |
| test_bad_function_call_static.test | RUN | 0.168296 | 0.436542 | 0.527088 | 0.001516 | 0.001543 | 0.001662 |
| mixed_cxxstd_shared.test | RUN | 0.184892 | 0.518582 | 0.568012 | 0.001675 | 0.001740 | 0.001843 |
| mixed_cxxstd_static.test | RUN | 0.184908 | 0.526090 | 0.587410 | 0.001518 | 0.001591 | 0.001491 |
| mixed_cxxstd_shared_0x.test | RUN | 0.183105 | 0.510270 | 0.573188 | 0.001632 | 0.001870 | 0.001804 |
| mixed_cxxstd_static_0x.test | RUN | 0.185341 | 0.518462 | 0.587413 | 0.001521 | 0.001642 | 0.001592 |
| mixed_cxxstd_shared_14.test | RUN | 0.184441 | 0.526219 | 0.585651 | 0.001592 | 0.001723 | 0.001638 |
| mixed_cxxstd_static_14.test | RUN | 0.186405 | 0.520228 | 0.570566 | 0.001583 | 0.001604 | 0.001605 |
| return_function_shared.test | RUN | 0.179956 | 0.523246 | 0.558688 | 0.001607 | 0.001690 | 0.001808 |
| return_function_static.test | RUN | 0.179777 | 0.525247 | 0.566214 | 0.001446 | 0.001600 | 0.001627 |
| return_function_shared_0x.test | RUN | 0.179748 | 0.522506 | 0.576683 | 0.001841 | 0.001513 | 0.001796 |
| return_function_static_0x.test | RUN | 0.179402 | 0.529091 | 0.563199 | 0.001640 | 0.001668 | 0.001646 |
| return_function_shared_14.test | RUN | 0.179807 | 0.530818 | 0.559728 | 0.001402 | 0.001692 | 0.001541 |
| return_function_static_14.test | RUN | 0.178604 | 0.522490 | 0.566956 | 0.001504 | 0.001735 | 0.001502 |
| quick.test | RUN | 0.184664 | 0.526018 | 0.566949 | 0.001612 | 0.001681 | 0.001640 |
| issue_42.test | COMPILE | 0.139246 | 0.335234 | 0.380228 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.245146 | 0.722272 | 0.826400 | 0.001361 | 0.001659 | 0.001716 |
| contains_test_no_rtti.test | RUN | 0.217673 | 0.820095 | 0.797989 | 0.001525 | 0.001750 | 0.001698 |
| contains2_test_no_rtti.test | RUN | 0.193460 | 0.602449 | 0.629061 | 0.001291 | 0.001621 | 0.001417 |
| contains3_test.test | RUN | 0.182485 | 0.481396 | 0.557557 | 0.001486 | 0.001718 | 0.001394 |
| contains3_test_no_rtti.test | RUN | 0.120712 | 0.365232 | 0.350851 | 0.001145 | 0.001128 | 0.001171 |
| issue_53.test | COMPILE | 0.108859 | 0.262704 | 0.267830 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 0.994×, 1.006× | 0.988× |
| clang | 0.991× | 0.983×, 0.999× | 1.010× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45754596224).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000984s | 0.000978s | 0.000953s | byte equality observed |
| contains2_test.test | 10 | 0.001020s | 0.001035s | 0.000949s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.001059s | 0.001061s | 0.000931s | byte equality observed |
| contains3_test.test | 10 | 0.001019s | 0.001052s | 0.000935s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.001073s | 0.001045s | 0.000955s | byte equality observed |
| contains_test.test | 10 | 0.001037s | 0.001075s | 0.001045s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.001039s | 0.001054s | 0.001031s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.001040s | 0.001078s | 0.001041s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.001045s | 0.001087s | 0.001052s | byte equality observed |
| function_arith_portable.test | 10 | 0.001052s | 0.001074s | 0.001072s | byte equality observed |
| function_n_test.test | 10 | 0.001061s | 0.001056s | 0.001083s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.001045s | 0.001022s | 0.001025s | byte equality observed |
| function_ref_portable.test | 10 | 0.000993s | 0.000996s | 0.001008s | byte equality observed |
| function_test.test | 10 | 0.001094s | 0.001083s | 0.001092s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.001077s | 0.001136s | 0.001098s | byte equality observed |
| lambda_test.test | 10 | 0.001037s | 0.001015s | 0.001088s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.001064s | 0.001052s | 0.001080s | byte equality observed |
| mem_fun_portable.test | 10 | 0.001059s | 0.001048s | 0.001027s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.001127s | 0.001143s | 0.001101s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.001112s | 0.001093s | 0.001113s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.001125s | 0.001134s | 0.001124s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.001050s | 0.001042s | 0.001042s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.001038s | 0.001017s | 0.001057s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.001061s | 0.001041s | 0.001036s | byte equality observed |
| nothrow_swap.test | 10 | 0.001035s | 0.001060s | 0.001038s | byte equality observed |
| quick.test | 10 | 0.001035s | 0.001056s | 0.001018s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.001047s | 0.001038s | 0.001081s | byte equality observed |
| result_arg_types_test.test | 10 | 0.001044s | 0.001015s | 0.001008s | byte equality observed |
| return_function_shared.test | 10 | 0.001119s | 0.001105s | 0.001136s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.001099s | 0.001113s | 0.001090s | byte equality observed |
| return_function_shared_14.test | 10 | 0.001129s | 0.001086s | 0.001110s | byte equality observed |
| return_function_static.test | 10 | 0.001043s | 0.001027s | 0.001069s | byte equality observed |
| return_function_static_0x.test | 10 | 0.001057s | 0.001034s | 0.001006s | byte equality observed |
| return_function_static_14.test | 10 | 0.001062s | 0.001072s | 0.001045s | byte equality observed |
| rvalues_test.test | 10 | 0.001033s | 0.001062s | 0.001035s | byte equality observed |
| stateless_test.test | 10 | 0.001024s | 0.001061s | 0.001007s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.001030s | 0.001010s | 0.000980s | byte equality observed |
| std_bind_portable.test | 10 | 0.001002s | 0.001008s | 0.001015s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.001002s | 0.001045s | 0.001001s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000985s | 0.001006s | 0.000969s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.001137s | 0.001108s | 0.001124s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.001057s | 0.001067s | 0.001058s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45754596224).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
