# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.378406 | 2.055965 | 2.026859 | 0.001887 | 0.001878 | 0.002100 |
| function_test_no_rtti.test | RUN | 0.372597 | 2.018372 | 2.022093 | 0.001593 | 0.002122 | 0.001847 |
| function_n_test.test | RUN | 0.348457 | 1.700944 | 1.742834 | 0.001886 | 0.002009 | 0.002094 |
| allocator_test.test | RUN | 0.282431 | 0.973999 | 1.191524 | 0.002072 | 0.002184 | 0.002009 |
| stateless_test.test | RUN | 0.217813 | 0.533788 | 0.743159 | 0.002206 | 0.002030 | 0.002184 |
| lambda_test.test | RUN | 0.471524 | 1.250743 | 1.705769 | 0.002042 | 0.002201 | 0.001814 |
| function_test_fail1.test | COMPILE_FAIL | 0.167331 | 0.344176 | 0.536522 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.169552 | 0.366730 | 0.570521 | — | — | — |
| function_30.test | COMPILE | 0.180583 | 0.379196 | 0.555666 | — | — | — |
| function_30_repeat.test | COMPILE | 0.177093 | 0.401817 | 0.580076 | — | — | — |
| function_arith_cxx98.test | RUN | 0.230784 | 0.626635 | 0.835903 | 0.001831 | 0.001944 | 0.002290 |
| function_arith_portable.test | RUN | 0.222785 | 0.593594 | 0.808675 | 0.001752 | 0.001930 | 0.002181 |
| sum_avg_cxx98.test | RUN | 0.220870 | 0.515332 | 0.768001 | 0.001974 | 0.001894 | 0.002254 |
| sum_avg_portable.test | RUN | 0.206951 | 0.479285 | 0.739027 | 0.001817 | 0.001912 | 0.002104 |
| mem_fun_cxx98.test | RUN | 0.237333 | 0.720390 | 0.913154 | 0.002072 | 0.001886 | 0.002230 |
| mem_fun_portable.test | RUN | 0.238294 | 0.674073 | 0.887137 | 0.001850 | 0.002038 | 0.002155 |
| std_bind_cxx98.test | RUN | 0.225586 | 0.599642 | 0.815589 | 0.001796 | 0.001711 | 0.002142 |
| std_bind_portable.test | RUN | 0.224368 | 0.567366 | 0.775341 | 0.002079 | 0.002080 | 0.002176 |
| function_ref_cxx98.test | RUN | 0.222060 | 0.526106 | 0.724772 | 0.001944 | 0.002036 | 0.002033 |
| function_ref_portable.test | RUN | 0.206888 | 0.473682 | 0.702056 | 0.002081 | 0.002156 | 0.002060 |
| contains_test.test | RUN | 0.268874 | 0.965026 | 1.114883 | 0.002090 | 0.002041 | 0.001844 |
| contains2_test.test | RUN | 0.238160 | 0.697839 | 0.897549 | 0.002204 | 0.002101 | 0.001760 |
| nothrow_swap.test | RUN | 0.224177 | 0.650659 | 0.876850 | 0.002000 | 0.002084 | 0.001850 |
| rvalues_test.test | RUN | 0.268604 | 0.815084 | 0.956904 | 0.002026 | 0.001981 | 0.001875 |
| function_typeof_test.test | COMPILE | 0.172694 | 0.373212 | 0.568333 | — | — | — |
| result_arg_types_test.test | RUN | 0.248831 | 0.561760 | 0.930923 | 0.002036 | 0.002129 | 0.001521 |
| result_arg_n_types_test.test | RUN | 0.262062 | 0.616104 | 1.077521 | 0.002089 | 0.002401 | 0.001928 |
| test_bad_function_call_shared.test | RUN | 0.219279 | 0.519947 | 0.768876 | 0.002126 | 0.002555 | 0.002601 |
| test_bad_function_call_static.test | RUN | 0.220989 | 0.523870 | 0.798265 | 0.001774 | 0.002064 | 0.002042 |
| mixed_cxxstd_shared.test | RUN | 0.235311 | 0.619575 | 0.805114 | 0.002149 | 0.002268 | 0.002258 |
| mixed_cxxstd_static.test | RUN | 0.216332 | 0.621956 | 0.826922 | 0.001974 | 0.001963 | 0.001989 |
| mixed_cxxstd_shared_0x.test | RUN | 0.216012 | 0.628153 | 0.897557 | 0.002307 | 0.002437 | 0.002297 |
| mixed_cxxstd_static_0x.test | RUN | 0.228779 | 0.616413 | 0.869796 | 0.001828 | 0.002134 | 0.002132 |
| mixed_cxxstd_shared_14.test | RUN | 0.232130 | 0.641024 | 0.820661 | 0.002344 | 0.002033 | 0.002432 |
| mixed_cxxstd_static_14.test | RUN | 0.226456 | 0.617745 | 0.864477 | 0.002072 | 0.002364 | 0.002144 |
| return_function_shared.test | RUN | 0.229177 | 0.613059 | 0.834158 | 0.001704 | 0.002282 | 0.002536 |
| return_function_static.test | RUN | 0.232666 | 0.612355 | 0.811504 | 0.002034 | 0.002106 | 0.002164 |
| return_function_shared_0x.test | RUN | 0.223981 | 0.621055 | 0.883178 | 0.002262 | 0.002359 | 0.002378 |
| return_function_static_0x.test | RUN | 0.224189 | 0.617992 | 0.842288 | 0.001382 | 0.002204 | 0.002244 |
| return_function_shared_14.test | RUN | 0.224434 | 0.629786 | 0.819793 | 0.002146 | 0.001921 | 0.002012 |
| return_function_static_14.test | RUN | 0.228677 | 0.609455 | 0.848585 | 0.001927 | 0.002089 | 0.002076 |
| quick.test | RUN | 0.219482 | 0.622337 | 0.766877 | 0.001850 | 0.002224 | 0.002234 |
| issue_42.test | COMPILE | 0.176814 | 0.415974 | 0.627812 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.307088 | 0.857500 | 1.215463 | 0.001850 | 0.001836 | 0.001681 |
| contains_test_no_rtti.test | RUN | 0.265565 | 0.965397 | 1.111123 | 0.001792 | 0.002080 | 0.001771 |
| contains2_test_no_rtti.test | RUN | 0.243528 | 0.724876 | 0.960461 | 0.001980 | 0.001478 | 0.001968 |
| contains3_test.test | RUN | 0.229329 | 0.559609 | 0.849855 | 0.002002 | 0.001852 | 0.001324 |
| contains3_test_no_rtti.test | RUN | 0.144025 | 0.457318 | 0.574857 | 0.001598 | 0.001533 | 0.001620 |
| issue_53.test | COMPILE | 0.128887 | 0.328238 | 0.407599 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997× | 1.001×, 0.993× | 0.994× |
| clang | 1.006× | 1.013×, 1.000× | 1.009× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44612055398).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.001181s | 0.001178s | 0.001197s | byte equality observed |
| contains2_test.test | 10 | 0.001164s | 0.001188s | 0.001166s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.001163s | 0.001160s | 0.001204s | byte equality observed |
| contains3_test.test | 10 | 0.001156s | 0.001159s | 0.001266s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.001159s | 0.001141s | 0.001259s | byte equality observed |
| contains_test.test | 10 | 0.001191s | 0.001243s | 0.001279s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.001237s | 0.001256s | 0.001314s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.001323s | 0.001262s | 0.001248s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.001282s | 0.001269s | 0.001286s | byte equality observed |
| function_arith_portable.test | 10 | 0.001322s | 0.001253s | 0.001314s | byte equality observed |
| function_n_test.test | 10 | 0.001289s | 0.001231s | 0.001302s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.001278s | 0.001185s | 0.001220s | byte equality observed |
| function_ref_portable.test | 10 | 0.001218s | 0.001247s | 0.001210s | byte equality observed |
| function_test.test | 10 | 0.001301s | 0.001303s | 0.001335s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.001293s | 0.001386s | 0.001339s | byte equality observed |
| lambda_test.test | 10 | 0.001280s | 0.001343s | 0.001299s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.001289s | 0.001262s | 0.001248s | byte equality observed |
| mem_fun_portable.test | 10 | 0.001237s | 0.001237s | 0.001310s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.001373s | 0.001371s | 0.001361s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.001362s | 0.001359s | 0.001419s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.001357s | 0.001355s | 0.001346s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.001251s | 0.001240s | 0.001274s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.001251s | 0.001294s | 0.001298s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.001233s | 0.001272s | 0.001274s | byte equality observed |
| nothrow_swap.test | 10 | 0.001263s | 0.001282s | 0.001239s | byte equality observed |
| quick.test | 10 | 0.001236s | 0.001246s | 0.001269s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.001260s | 0.001258s | 0.001232s | byte equality observed |
| result_arg_types_test.test | 10 | 0.001300s | 0.001214s | 0.001274s | byte equality observed |
| return_function_shared.test | 10 | 0.001338s | 0.001332s | 0.001361s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.001360s | 0.001364s | 0.001365s | byte equality observed |
| return_function_shared_14.test | 10 | 0.001361s | 0.001390s | 0.001386s | byte equality observed |
| return_function_static.test | 10 | 0.001245s | 0.001244s | 0.001292s | byte equality observed |
| return_function_static_0x.test | 10 | 0.001270s | 0.001214s | 0.001303s | byte equality observed |
| return_function_static_14.test | 10 | 0.001284s | 0.001304s | 0.001322s | byte equality observed |
| rvalues_test.test | 10 | 0.001267s | 0.001223s | 0.001232s | byte equality observed |
| stateless_test.test | 10 | 0.001227s | 0.001241s | 0.001233s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.001274s | 0.001265s | 0.001209s | byte equality observed |
| std_bind_portable.test | 10 | 0.001234s | 0.001196s | 0.001209s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.001292s | 0.001205s | 0.001242s | byte equality observed |
| sum_avg_portable.test | 10 | 0.001245s | 0.001258s | 0.001237s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.001365s | 0.001366s | 0.001367s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.001270s | 0.001306s | 0.001292s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44612055398).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
