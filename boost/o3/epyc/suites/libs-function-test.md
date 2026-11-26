# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.223520 | 1.280233 | 1.020606 | 0.001497 | 0.001539 | 0.001387 |
| function_test_no_rtti.test | RUN | 0.218782 | 1.264327 | 0.996525 | 0.001536 | 0.001483 | 0.001559 |
| function_n_test.test | RUN | 0.205998 | 1.033631 | 0.831471 | 0.001561 | 0.001728 | 0.001664 |
| allocator_test.test | RUN | 0.168818 | 0.585864 | 0.555313 | 0.001637 | 0.001958 | 0.001667 |
| stateless_test.test | RUN | 0.133045 | 0.323349 | 0.370682 | 0.001824 | 0.001728 | 0.001727 |
| lambda_test.test | RUN | 0.314288 | 0.776491 | 0.782453 | 0.001702 | 0.001673 | 0.001582 |
| function_test_fail1.test | COMPILE_FAIL | 0.104875 | 0.219072 | 0.278919 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.109770 | 0.214934 | 0.276044 | — | — | — |
| function_30.test | COMPILE | 0.125461 | 0.222798 | 0.270492 | — | — | — |
| function_30_repeat.test | COMPILE | 0.118824 | 0.239107 | 0.246604 | — | — | — |
| function_arith_cxx98.test | RUN | 0.135483 | 0.380396 | 0.381480 | 0.001744 | 0.001582 | 0.001714 |
| function_arith_portable.test | RUN | 0.135706 | 0.357095 | 0.354845 | 0.001387 | 0.001794 | 0.001712 |
| sum_avg_cxx98.test | RUN | 0.127407 | 0.315699 | 0.337098 | 0.001443 | 0.001773 | 0.001483 |
| sum_avg_portable.test | RUN | 0.126491 | 0.291085 | 0.327760 | 0.001628 | 0.001911 | 0.001671 |
| mem_fun_cxx98.test | RUN | 0.141353 | 0.455377 | 0.406984 | 0.001680 | 0.001822 | 0.001666 |
| mem_fun_portable.test | RUN | 0.144027 | 0.418688 | 0.421941 | 0.001744 | 0.001818 | 0.001562 |
| std_bind_cxx98.test | RUN | 0.133637 | 0.382313 | 0.381232 | 0.001470 | 0.001741 | 0.001561 |
| std_bind_portable.test | RUN | 0.137961 | 0.367979 | 0.348746 | 0.001755 | 0.001772 | 0.001561 |
| function_ref_cxx98.test | RUN | 0.135681 | 0.340667 | 0.332652 | 0.001454 | 0.001532 | 0.001468 |
| function_ref_portable.test | RUN | 0.182591 | 0.314921 | 0.327021 | 0.001662 | 0.001750 | 0.001520 |
| contains_test.test | RUN | 0.208841 | 0.658332 | 0.518956 | 0.001579 | 0.001807 | 0.001526 |
| contains2_test.test | RUN | 0.159343 | 0.469722 | 0.407722 | 0.001747 | 0.001879 | 0.001465 |
| nothrow_swap.test | RUN | 0.137813 | 0.453634 | 0.389645 | 0.001547 | 0.001668 | 0.001645 |
| rvalues_test.test | RUN | 0.151513 | 0.527368 | 0.460293 | 0.001595 | 0.001698 | 0.001423 |
| function_typeof_test.test | COMPILE | 0.104405 | 0.224741 | 0.251654 | — | — | — |
| result_arg_types_test.test | RUN | 0.145469 | 0.351544 | 0.408764 | 0.001679 | 0.001630 | 0.001512 |
| result_arg_n_types_test.test | RUN | 0.156360 | 0.381166 | 0.472596 | 0.001713 | 0.001820 | 0.001657 |
| test_bad_function_call_shared.test | RUN | 0.127931 | 0.322065 | 0.358680 | 0.001629 | 0.001688 | 0.001810 |
| test_bad_function_call_static.test | RUN | 0.129806 | 0.311761 | 0.344684 | 0.001493 | 0.002988 | 0.001463 |
| mixed_cxxstd_shared.test | RUN | 0.140400 | 0.398873 | 0.383710 | 0.001524 | 0.001778 | 0.001473 |
| mixed_cxxstd_static.test | RUN | 0.137700 | 0.417624 | 0.381659 | 0.001473 | 0.001499 | 0.001635 |
| mixed_cxxstd_shared_0x.test | RUN | 0.140486 | 0.392218 | 0.395848 | 0.001638 | 0.002058 | 0.001908 |
| mixed_cxxstd_static_0x.test | RUN | 0.136555 | 0.371200 | 0.386122 | 0.001604 | 0.001811 | 0.001687 |
| mixed_cxxstd_shared_14.test | RUN | 0.140221 | 0.368080 | 0.396223 | 0.001586 | 0.001775 | 0.001570 |
| mixed_cxxstd_static_14.test | RUN | 0.135388 | 0.378958 | 0.389922 | 0.001585 | 0.001913 | 0.001614 |
| return_function_shared.test | RUN | 0.135034 | 0.382241 | 0.386390 | 0.001743 | 0.001747 | 0.001822 |
| return_function_static.test | RUN | 0.137153 | 0.401845 | 0.381390 | 0.001392 | 0.001736 | 0.001576 |
| return_function_shared_0x.test | RUN | 0.135023 | 0.414943 | 0.377204 | 0.001626 | 0.002102 | 0.001818 |
| return_function_static_0x.test | RUN | 0.137976 | 0.377983 | 0.379187 | 0.001475 | 0.001684 | 0.001684 |
| return_function_shared_14.test | RUN | 0.134093 | 0.385520 | 0.369641 | 0.001779 | 0.001487 | 0.001568 |
| return_function_static_14.test | RUN | 0.131916 | 0.366752 | 0.394156 | 0.001338 | 0.001698 | 0.001376 |
| quick.test | RUN | 0.138226 | 0.380531 | 0.350248 | 0.001633 | 0.001573 | 0.001550 |
| issue_42.test | COMPILE | 0.109585 | 0.241698 | 0.260446 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.175333 | 0.497048 | 0.562291 | 0.001422 | 0.001792 | 0.001441 |
| contains_test_no_rtti.test | RUN | 0.149634 | 0.578654 | 0.529149 | 0.001646 | 0.001824 | 0.001300 |
| contains2_test_no_rtti.test | RUN | 0.142974 | 0.422875 | 0.419077 | 0.001452 | 0.001660 | 0.001606 |
| contains3_test.test | RUN | 0.140564 | 0.324677 | 0.367727 | 0.001180 | 0.001651 | 0.001133 |
| contains3_test_no_rtti.test | RUN | 0.104082 | 0.282968 | 0.237239 | 0.001224 | 0.001352 | 0.001305 |
| issue_53.test | COMPILE | 0.094728 | 0.222224 | 0.182249 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.016×† | 1.041×, 0.990× | 0.937× |
| clang | 0.999×† | 1.038×, 0.960× | 0.993× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45790989032).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000881s | 0.000896s | 0.000896s | byte equality observed |
| contains2_test.test | 10 | 0.000906s | 0.000908s | 0.000916s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000910s | 0.000900s | 0.000909s | byte equality observed |
| contains3_test.test | 10 | 0.000913s | 0.000920s | 0.000916s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000889s | 0.000903s | 0.000923s | byte equality observed |
| contains_test.test | 10 | 0.000891s | 0.000935s | 0.000933s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.000892s | 0.000927s | 0.000915s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.000897s | 0.000909s | 0.000911s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.000920s | 0.000918s | 0.000916s | byte equality observed |
| function_arith_portable.test | 10 | 0.000906s | 0.000916s | 0.000921s | byte equality observed |
| function_n_test.test | 10 | 0.000916s | 0.000915s | 0.000929s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000885s | 0.000875s | 0.000904s | byte equality observed |
| function_ref_portable.test | 10 | 0.000877s | 0.000872s | 0.000889s | byte equality observed |
| function_test.test | 9 | 0.000948s | 0.000931s | 0.000943s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.000950s | 0.000945s | 0.000947s | byte equality observed |
| lambda_test.test | 10 | 0.000931s | 0.000918s | 0.000908s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.000881s | 0.000922s | 0.000905s | byte equality observed |
| mem_fun_portable.test | 10 | 0.000905s | 0.000911s | 0.000897s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.000982s | 0.000979s | 0.000998s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.000980s | 0.000979s | 0.001016s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.000973s | 0.000964s | 0.001025s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.000901s | 0.000892s | 0.000938s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.000892s | 0.000888s | 0.000909s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.000870s | 0.000896s | 0.000903s | byte equality observed |
| nothrow_swap.test | 10 | 0.000882s | 0.000874s | 0.000888s | byte equality observed |
| quick.test | 10 | 0.000895s | 0.000883s | 0.000906s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.000883s | 0.000886s | 0.000903s | byte equality observed |
| result_arg_types_test.test | 10 | 0.000884s | 0.000888s | 0.000913s | byte equality observed |
| return_function_shared.test | 10 | 0.000982s | 0.000976s | 0.001043s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.000958s | 0.000965s | 0.001039s | byte equality observed |
| return_function_shared_14.test | 10 | 0.000972s | 0.000994s | 0.001033s | byte equality observed |
| return_function_static.test | 10 | 0.000904s | 0.000906s | 0.000938s | byte equality observed |
| return_function_static_0x.test | 10 | 0.000894s | 0.000903s | 0.000940s | byte equality observed |
| return_function_static_14.test | 10 | 0.000881s | 0.000932s | 0.000953s | byte equality observed |
| rvalues_test.test | 10 | 0.000892s | 0.000918s | 0.000917s | byte equality observed |
| stateless_test.test | 10 | 0.000891s | 0.000915s | 0.000910s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000853s | 0.000895s | 0.000906s | byte equality observed |
| std_bind_portable.test | 10 | 0.000865s | 0.000914s | 0.000892s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000854s | 0.000895s | 0.000914s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000869s | 0.000874s | 0.000914s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.000981s | 0.001005s | 0.001037s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.000912s | 0.000932s | 0.000943s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45790989032).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
