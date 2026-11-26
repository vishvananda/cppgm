# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.379060 | 1.996985 | 2.010486 | 0.001984 | 0.002062 | 0.002118 |
| function_test_no_rtti.test | RUN | 0.376072 | 2.018457 | 2.051919 | 0.001644 | 0.001806 | 0.001686 |
| function_n_test.test | RUN | 0.351225 | 1.650032 | 1.736382 | 0.001871 | 0.001998 | 0.002056 |
| allocator_test.test | RUN | 0.286602 | 0.957438 | 1.205445 | 0.001928 | 0.002322 | 0.002128 |
| stateless_test.test | RUN | 0.220182 | 0.529151 | 0.758171 | 0.002064 | 0.001904 | 0.002148 |
| lambda_test.test | RUN | 0.468784 | 1.239177 | 1.681657 | 0.002076 | 0.001936 | 0.001902 |
| function_test_fail1.test | COMPILE_FAIL | 0.168539 | 0.339220 | 0.578759 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.169703 | 0.367549 | 0.555353 | — | — | — |
| function_30.test | COMPILE | 0.179905 | 0.378938 | 0.582306 | — | — | — |
| function_30_repeat.test | COMPILE | 0.178569 | 0.403371 | 0.581183 | — | — | — |
| function_arith_cxx98.test | RUN | 0.225718 | 0.629710 | 0.832410 | 0.001984 | 0.002001 | 0.002165 |
| function_arith_portable.test | RUN | 0.226872 | 0.591982 | 0.795831 | 0.001898 | 0.001844 | 0.002163 |
| sum_avg_cxx98.test | RUN | 0.215287 | 0.507448 | 0.755949 | 0.001794 | 0.001908 | 0.001810 |
| sum_avg_portable.test | RUN | 0.213520 | 0.472546 | 0.709369 | 0.001950 | 0.002076 | 0.001553 |
| mem_fun_cxx98.test | RUN | 0.248462 | 0.725758 | 0.911601 | 0.001825 | 0.002118 | 0.002244 |
| mem_fun_portable.test | RUN | 0.243212 | 0.664600 | 0.944060 | 0.001777 | 0.001947 | 0.002188 |
| std_bind_cxx98.test | RUN | 0.233500 | 0.621354 | 0.818836 | 0.001872 | 0.001775 | 0.002050 |
| std_bind_portable.test | RUN | 0.235085 | 0.562234 | 0.771509 | 0.001878 | 0.002109 | 0.002014 |
| function_ref_cxx98.test | RUN | 0.217777 | 0.517665 | 0.742641 | 0.001926 | 0.001787 | 0.001986 |
| function_ref_portable.test | RUN | 0.218566 | 0.473873 | 0.729954 | 0.001798 | 0.001719 | 0.002056 |
| contains_test.test | RUN | 0.262647 | 0.989748 | 1.164941 | 0.001843 | 0.002200 | 0.002058 |
| contains2_test.test | RUN | 0.237989 | 0.697386 | 0.845759 | 0.001896 | 0.002161 | 0.001961 |
| nothrow_swap.test | RUN | 0.236423 | 0.670572 | 0.868237 | 0.001797 | 0.002270 | 0.002139 |
| rvalues_test.test | RUN | 0.251632 | 0.812599 | 0.997044 | 0.002014 | 0.002196 | 0.001643 |
| function_typeof_test.test | COMPILE | 0.175824 | 0.380919 | 0.563916 | — | — | — |
| result_arg_types_test.test | RUN | 0.246309 | 0.566722 | 0.924593 | 0.001820 | 0.001971 | 0.001866 |
| result_arg_n_types_test.test | RUN | 0.268460 | 0.627139 | 1.080618 | 0.001966 | 0.002306 | 0.001883 |
| test_bad_function_call_shared.test | RUN | 0.220411 | 0.529328 | 0.805682 | 0.001882 | 0.002466 | 0.001907 |
| test_bad_function_call_static.test | RUN | 0.218126 | 0.533495 | 0.765644 | 0.001958 | 0.002020 | 0.001943 |
| mixed_cxxstd_shared.test | RUN | 0.238515 | 0.611048 | 0.895537 | 0.001630 | 0.001836 | 0.002335 |
| mixed_cxxstd_static.test | RUN | 0.230447 | 0.607865 | 0.863407 | 0.001714 | 0.001852 | 0.001932 |
| mixed_cxxstd_shared_0x.test | RUN | 0.230616 | 0.647359 | 0.889942 | 0.001913 | 0.002420 | 0.002478 |
| mixed_cxxstd_static_0x.test | RUN | 0.238777 | 0.607760 | 0.902575 | 0.002131 | 0.002068 | 0.002054 |
| mixed_cxxstd_shared_14.test | RUN | 0.232392 | 0.621953 | 0.860164 | 0.002169 | 0.002194 | 0.002402 |
| mixed_cxxstd_static_14.test | RUN | 0.237273 | 0.630969 | 0.858473 | 0.001799 | 0.002059 | 0.002138 |
| return_function_shared.test | RUN | 0.224057 | 0.616524 | 0.872452 | 0.001974 | 0.002234 | 0.002064 |
| return_function_static.test | RUN | 0.234193 | 0.632960 | 0.855264 | 0.001674 | 0.002100 | 0.002072 |
| return_function_shared_0x.test | RUN | 0.230072 | 0.605469 | 0.861310 | 0.002232 | 0.002296 | 0.002339 |
| return_function_static_0x.test | RUN | 0.226402 | 0.610023 | 0.865727 | 0.001926 | 0.002176 | 0.002084 |
| return_function_shared_14.test | RUN | 0.227739 | 0.628378 | 0.809099 | 0.001880 | 0.001942 | 0.002326 |
| return_function_static_14.test | RUN | 0.231726 | 0.590020 | 0.851274 | 0.001747 | 0.002043 | 0.002219 |
| quick.test | RUN | 0.222815 | 0.618751 | 0.802058 | 0.001788 | 0.001901 | 0.002107 |
| issue_42.test | COMPILE | 0.177277 | 0.405968 | 0.577047 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.300874 | 0.864034 | 1.225644 | 0.001744 | 0.001804 | 0.002045 |
| contains_test_no_rtti.test | RUN | 0.267127 | 0.967843 | 1.166164 | 0.001902 | 0.001560 | 0.001613 |
| contains2_test_no_rtti.test | RUN | 0.240950 | 0.730842 | 0.927659 | 0.001695 | 0.001970 | 0.001901 |
| contains3_test.test | RUN | 0.229646 | 0.568117 | 0.843857 | 0.001474 | 0.001931 | 0.001638 |
| contains3_test_no_rtti.test | RUN | 0.141499 | 0.458144 | 0.530317 | 0.001487 | 0.001600 | 0.001644 |
| issue_53.test | COMPILE | 0.129896 | 0.332794 | 0.395084 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.002× | 0.991×, 1.013× | 1.000× |
| clang | 0.997× | 1.002×, 0.991× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45850603565).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.001163s | 0.001170s | 0.001135s | byte equality observed |
| contains2_test.test | 10 | 0.001168s | 0.001173s | 0.001120s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.001170s | 0.001160s | 0.001118s | byte equality observed |
| contains3_test.test | 10 | 0.001159s | 0.001163s | 0.001120s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.001159s | 0.001205s | 0.001143s | byte equality observed |
| contains_test.test | 10 | 0.001215s | 0.001238s | 0.001238s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.001209s | 0.001314s | 0.001224s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.001234s | 0.001276s | 0.001263s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.001262s | 0.001286s | 0.001317s | byte equality observed |
| function_arith_portable.test | 10 | 0.001269s | 0.001276s | 0.001288s | byte equality observed |
| function_n_test.test | 10 | 0.001252s | 0.001236s | 0.001289s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.001219s | 0.001231s | 0.001201s | byte equality observed |
| function_ref_portable.test | 10 | 0.001204s | 0.001259s | 0.001268s | byte equality observed |
| function_test.test | 10 | 0.001323s | 0.001312s | 0.001314s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.001318s | 0.001318s | 0.001331s | byte equality observed |
| lambda_test.test | 10 | 0.001283s | 0.001237s | 0.001318s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.001244s | 0.001269s | 0.001280s | byte equality observed |
| mem_fun_portable.test | 10 | 0.001329s | 0.001280s | 0.001291s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.001350s | 0.001336s | 0.001361s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.001370s | 0.001297s | 0.001444s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.001366s | 0.001320s | 0.001360s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.001265s | 0.001208s | 0.001226s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.001231s | 0.001212s | 0.001275s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.001242s | 0.001241s | 0.001278s | byte equality observed |
| nothrow_swap.test | 10 | 0.001255s | 0.001227s | 0.001265s | byte equality observed |
| quick.test | 10 | 0.001277s | 0.001247s | 0.001235s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.001294s | 0.001256s | 0.001327s | byte equality observed |
| result_arg_types_test.test | 10 | 0.001226s | 0.001241s | 0.001242s | byte equality observed |
| return_function_shared.test | 10 | 0.001326s | 0.001368s | 0.001305s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.001331s | 0.001367s | 0.001354s | byte equality observed |
| return_function_shared_14.test | 10 | 0.001347s | 0.001363s | 0.001370s | byte equality observed |
| return_function_static.test | 10 | 0.001235s | 0.001223s | 0.001255s | byte equality observed |
| return_function_static_0x.test | 10 | 0.001249s | 0.001281s | 0.001268s | byte equality observed |
| return_function_static_14.test | 10 | 0.001257s | 0.001238s | 0.001214s | byte equality observed |
| rvalues_test.test | 10 | 0.001310s | 0.001270s | 0.001260s | byte equality observed |
| stateless_test.test | 10 | 0.001245s | 0.001239s | 0.001228s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.001292s | 0.001228s | 0.001269s | byte equality observed |
| std_bind_portable.test | 10 | 0.001223s | 0.001207s | 0.001174s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.001221s | 0.001234s | 0.001261s | byte equality observed |
| sum_avg_portable.test | 10 | 0.001197s | 0.001227s | 0.001240s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.001366s | 0.001345s | 0.001345s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.001335s | 0.001360s | 0.001340s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45850603565).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
