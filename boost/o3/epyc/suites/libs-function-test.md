# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.378123 | 1.982063 | 2.017646 | 0.001809 | 0.002225 | 0.001723 |
| function_test_no_rtti.test | RUN | 0.376232 | 1.978592 | 1.985066 | 0.001710 | 0.001788 | 0.001983 |
| function_n_test.test | RUN | 0.353088 | 1.658971 | 1.704040 | 0.001826 | 0.001889 | 0.002092 |
| allocator_test.test | RUN | 0.286705 | 0.923146 | 1.193409 | 0.001937 | 0.002114 | 0.002071 |
| stateless_test.test | RUN | 0.223701 | 0.517395 | 0.743208 | 0.002032 | 0.001812 | 0.001992 |
| lambda_test.test | RUN | 0.465818 | 1.249798 | 1.620378 | 0.001977 | 0.001994 | 0.001987 |
| function_test_fail1.test | COMPILE_FAIL | 0.171484 | 0.352329 | 0.568221 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.168989 | 0.369079 | 0.567872 | — | — | — |
| function_30.test | COMPILE | 0.176896 | 0.370716 | 0.583182 | — | — | — |
| function_30_repeat.test | COMPILE | 0.178821 | 0.378466 | 0.589781 | — | — | — |
| function_arith_cxx98.test | RUN | 0.231655 | 0.623242 | 0.843012 | 0.002060 | 0.001758 | 0.001968 |
| function_arith_portable.test | RUN | 0.223710 | 0.583025 | 0.769875 | 0.001819 | 0.001897 | 0.002179 |
| sum_avg_cxx98.test | RUN | 0.215650 | 0.527538 | 0.731692 | 0.001726 | 0.001957 | 0.001994 |
| sum_avg_portable.test | RUN | 0.223308 | 0.469092 | 0.769862 | 0.001903 | 0.002037 | 0.001762 |
| mem_fun_cxx98.test | RUN | 0.254553 | 0.722397 | 0.941237 | 0.001811 | 0.001757 | 0.002064 |
| mem_fun_portable.test | RUN | 0.244892 | 0.651661 | 0.857387 | 0.001682 | 0.001794 | 0.001920 |
| std_bind_cxx98.test | RUN | 0.227389 | 0.609925 | 0.794210 | 0.001721 | 0.001726 | 0.002062 |
| std_bind_portable.test | RUN | 0.226407 | 0.557172 | 0.764034 | 0.002028 | 0.002127 | 0.001998 |
| function_ref_cxx98.test | RUN | 0.212789 | 0.514001 | 0.744248 | 0.001728 | 0.001956 | 0.001944 |
| function_ref_portable.test | RUN | 0.207539 | 0.479096 | 0.703602 | 0.002034 | 0.001655 | 0.001468 |
| contains_test.test | RUN | 0.257891 | 0.972169 | 1.171425 | 0.001780 | 0.001802 | 0.001822 |
| contains2_test.test | RUN | 0.242291 | 0.690260 | 0.917912 | 0.002074 | 0.001926 | 0.001908 |
| nothrow_swap.test | RUN | 0.229103 | 0.651595 | 0.863494 | 0.001904 | 0.002048 | 0.001844 |
| rvalues_test.test | RUN | 0.258897 | 0.782027 | 0.983202 | 0.002069 | 0.001830 | 0.001736 |
| function_typeof_test.test | COMPILE | 0.175199 | 0.365665 | 0.562289 | — | — | — |
| result_arg_types_test.test | RUN | 0.242471 | 0.569383 | 0.939243 | 0.001820 | 0.001887 | 0.002114 |
| result_arg_n_types_test.test | RUN | 0.258124 | 0.612663 | 1.067258 | 0.001892 | 0.001899 | 0.002112 |
| test_bad_function_call_shared.test | RUN | 0.216374 | 0.529829 | 0.762976 | 0.001994 | 0.002145 | 0.002329 |
| test_bad_function_call_static.test | RUN | 0.216961 | 0.514964 | 0.801239 | 0.001748 | 0.001929 | 0.002056 |
| mixed_cxxstd_shared.test | RUN | 0.233645 | 0.611954 | 0.831386 | 0.001946 | 0.001998 | 0.002274 |
| mixed_cxxstd_static.test | RUN | 0.228088 | 0.611230 | 0.870329 | 0.002044 | 0.001869 | 0.001818 |
| mixed_cxxstd_shared_0x.test | RUN | 0.232898 | 0.618827 | 0.852018 | 0.002086 | 0.002260 | 0.002317 |
| mixed_cxxstd_static_0x.test | RUN | 0.233137 | 0.611104 | 0.822819 | 0.001902 | 0.002106 | 0.002164 |
| mixed_cxxstd_shared_14.test | RUN | 0.228543 | 0.608451 | 0.894995 | 0.002149 | 0.002207 | 0.002358 |
| mixed_cxxstd_static_14.test | RUN | 0.236041 | 0.628664 | 0.845423 | 0.001974 | 0.002150 | 0.001982 |
| return_function_shared.test | RUN | 0.229855 | 0.611514 | 0.875146 | 0.001915 | 0.001966 | 0.002303 |
| return_function_static.test | RUN | 0.235087 | 0.617851 | 0.850714 | 0.001946 | 0.001886 | 0.001944 |
| return_function_shared_0x.test | RUN | 0.224608 | 0.609248 | 0.865429 | 0.001889 | 0.002292 | 0.002300 |
| return_function_static_0x.test | RUN | 0.225155 | 0.590498 | 0.813315 | 0.002158 | 0.002108 | 0.002073 |
| return_function_shared_14.test | RUN | 0.228214 | 0.607577 | 0.874328 | 0.002046 | 0.002170 | 0.002368 |
| return_function_static_14.test | RUN | 0.228653 | 0.614838 | 0.853333 | 0.001808 | 0.002185 | 0.002094 |
| quick.test | RUN | 0.218188 | 0.621861 | 0.839277 | 0.001938 | 0.002040 | 0.001896 |
| issue_42.test | COMPILE | 0.181324 | 0.405143 | 0.558127 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.304284 | 0.840896 | 1.208059 | 0.001786 | 0.002056 | 0.001701 |
| contains_test_no_rtti.test | RUN | 0.271797 | 0.942080 | 1.178747 | 0.001900 | 0.001501 | 0.001894 |
| contains2_test_no_rtti.test | RUN | 0.246127 | 0.709526 | 0.915740 | 0.001772 | 0.002028 | 0.001363 |
| contains3_test.test | RUN | 0.226979 | 0.552606 | 0.818563 | 0.002005 | 0.001766 | 0.001796 |
| contains3_test_no_rtti.test | RUN | 0.136872 | 0.446400 | 0.527647 | 0.001508 | 0.001438 | 0.001317 |
| issue_53.test | COMPILE | 0.123142 | 0.305980 | 0.386035 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.994× | 0.989×, 0.999× | 1.004× |
| clang | 1.011× | 1.006×, 1.015× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46045514956).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.001140s | 0.001132s | 0.001136s | byte equality observed |
| contains2_test.test | 10 | 0.001136s | 0.001123s | 0.001127s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.001129s | 0.001137s | 0.001143s | byte equality observed |
| contains3_test.test | 10 | 0.001129s | 0.001132s | 0.001126s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.001131s | 0.001130s | 0.001155s | byte equality observed |
| contains_test.test | 10 | 0.001141s | 0.001142s | 0.001198s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.001241s | 0.001133s | 0.001243s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.001216s | 0.001194s | 0.001275s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.001252s | 0.001313s | 0.001308s | byte equality observed |
| function_arith_portable.test | 10 | 0.001290s | 0.001245s | 0.001266s | byte equality observed |
| function_n_test.test | 10 | 0.001236s | 0.001276s | 0.001235s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.001210s | 0.001219s | 0.001310s | byte equality observed |
| function_ref_portable.test | 10 | 0.001232s | 0.001185s | 0.001175s | byte equality observed |
| function_test.test | 10 | 0.001292s | 0.001288s | 0.001275s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.001302s | 0.001358s | 0.001323s | byte equality observed |
| lambda_test.test | 10 | 0.001227s | 0.001223s | 0.001207s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.001210s | 0.001223s | 0.001317s | byte equality observed |
| mem_fun_portable.test | 10 | 0.001199s | 0.001217s | 0.001235s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.001330s | 0.001313s | 0.001340s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.001329s | 0.001298s | 0.001386s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.001350s | 0.001370s | 0.001335s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.001221s | 0.001233s | 0.001258s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.001253s | 0.001230s | 0.001256s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.001239s | 0.001259s | 0.001249s | byte equality observed |
| nothrow_swap.test | 10 | 0.001249s | 0.001270s | 0.001295s | byte equality observed |
| quick.test | 10 | 0.001253s | 0.001284s | 0.001253s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.001230s | 0.001265s | 0.001294s | byte equality observed |
| result_arg_types_test.test | 10 | 0.001221s | 0.001234s | 0.001307s | byte equality observed |
| return_function_shared.test | 10 | 0.001343s | 0.001342s | 0.001387s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.001372s | 0.001342s | 0.001434s | byte equality observed |
| return_function_shared_14.test | 10 | 0.001314s | 0.001340s | 0.001366s | byte equality observed |
| return_function_static.test | 10 | 0.001237s | 0.001192s | 0.001216s | byte equality observed |
| return_function_static_0x.test | 8 | 0.001238s | 0.001206s | 0.001198s | byte equality observed |
| return_function_static_14.test | 9 | 0.001268s | 0.001212s | 0.001254s | byte equality observed |
| rvalues_test.test | 10 | 0.001268s | 0.001223s | 0.001275s | byte equality observed |
| stateless_test.test | 10 | 0.001218s | 0.001264s | 0.001215s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.001214s | 0.001208s | 0.001238s | byte equality observed |
| std_bind_portable.test | 10 | 0.001208s | 0.001208s | 0.001213s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.001229s | 0.001197s | 0.001206s | byte equality observed |
| sum_avg_portable.test | 10 | 0.001212s | 0.001246s | 0.001237s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.001335s | 0.001335s | 0.001362s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.001275s | 0.001262s | 0.001263s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46045514956).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
