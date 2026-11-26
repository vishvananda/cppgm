# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.230541 | 1.349749 | 1.104983 | 0.000906 | 0.001238 | 0.001039 |
| function_test_no_rtti.test | RUN | 0.229077 | 1.335592 | 1.103005 | 0.001095 | 0.001445 | 0.001111 |
| function_n_test.test | RUN | 0.214451 | 1.095716 | 0.924206 | 0.001260 | 0.001312 | 0.001102 |
| allocator_test.test | RUN | 0.170462 | 0.605524 | 0.608347 | 0.001362 | 0.001339 | 0.001192 |
| stateless_test.test | RUN | 0.119398 | 0.319346 | 0.384236 | 0.001121 | 0.001179 | 0.001072 |
| lambda_test.test | RUN | 0.267149 | 0.801511 | 0.817087 | 0.001086 | 0.001310 | 0.001145 |
| function_test_fail1.test | COMPILE_FAIL | 0.091602 | 0.216017 | 0.252620 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.094735 | 0.220822 | 0.261240 | — | — | — |
| function_30.test | COMPILE | 0.096478 | 0.228066 | 0.269462 | — | — | — |
| function_30_repeat.test | COMPILE | 0.095886 | 0.226396 | 0.267968 | — | — | — |
| function_arith_cxx98.test | RUN | 0.129401 | 0.395408 | 0.414756 | 0.001166 | 0.001185 | 0.001079 |
| function_arith_portable.test | RUN | 0.125798 | 0.364021 | 0.389313 | 0.001167 | 0.001222 | 0.001031 |
| sum_avg_cxx98.test | RUN | 0.118226 | 0.317385 | 0.372005 | 0.001077 | 0.001267 | 0.001016 |
| sum_avg_portable.test | RUN | 0.121527 | 0.291565 | 0.356804 | 0.001140 | 0.001156 | 0.001034 |
| mem_fun_cxx98.test | RUN | 0.143101 | 0.463414 | 0.463188 | 0.001319 | 0.001198 | 0.001043 |
| mem_fun_portable.test | RUN | 0.138802 | 0.417185 | 0.434889 | 0.001172 | 0.001133 | 0.001024 |
| std_bind_cxx98.test | RUN | 0.134811 | 0.374853 | 0.409886 | 0.001078 | 0.001232 | 0.001084 |
| std_bind_portable.test | RUN | 0.132234 | 0.350970 | 0.377323 | 0.001075 | 0.001141 | 0.001011 |
| function_ref_cxx98.test | RUN | 0.120227 | 0.314047 | 0.372342 | 0.001151 | 0.001136 | 0.001017 |
| function_ref_portable.test | RUN | 0.121778 | 0.289179 | 0.341119 | 0.001109 | 0.001097 | 0.001063 |
| contains_test.test | RUN | 0.155224 | 0.611146 | 0.582998 | 0.001174 | 0.001273 | 0.001098 |
| contains2_test.test | RUN | 0.143913 | 0.440201 | 0.439097 | 0.001096 | 0.001232 | 0.001116 |
| nothrow_swap.test | RUN | 0.134742 | 0.417338 | 0.431965 | 0.001259 | 0.001338 | 0.001083 |
| rvalues_test.test | RUN | 0.152173 | 0.503773 | 0.506411 | 0.001107 | 0.001274 | 0.001062 |
| function_typeof_test.test | COMPILE | 0.099326 | 0.220688 | 0.256069 | — | — | — |
| result_arg_types_test.test | RUN | 0.141476 | 0.350445 | 0.452000 | 0.000994 | 0.001195 | 0.001107 |
| result_arg_n_types_test.test | RUN | 0.154100 | 0.380082 | 0.528360 | 0.001116 | 0.001302 | 0.001008 |
| test_bad_function_call_shared.test | RUN | 0.124153 | 0.320920 | 0.378074 | 0.001223 | 0.001565 | 0.001208 |
| test_bad_function_call_static.test | RUN | 0.122561 | 0.319321 | 0.372391 | 0.001206 | 0.001431 | 0.001040 |
| mixed_cxxstd_shared.test | RUN | 0.137230 | 0.376834 | 0.427677 | 0.001412 | 0.001204 | 0.001175 |
| mixed_cxxstd_static.test | RUN | 0.131894 | 0.380043 | 0.423860 | 0.001144 | 0.001152 | 0.001041 |
| mixed_cxxstd_shared_0x.test | RUN | 0.133985 | 0.379338 | 0.423286 | 0.001185 | 0.001390 | 0.001186 |
| mixed_cxxstd_static_0x.test | RUN | 0.136876 | 0.376338 | 0.420574 | 0.001413 | 0.001341 | 0.001036 |
| mixed_cxxstd_shared_14.test | RUN | 0.130377 | 0.378425 | 0.420686 | 0.001130 | 0.001293 | 0.001053 |
| mixed_cxxstd_static_14.test | RUN | 0.132737 | 0.380647 | 0.423442 | 0.001169 | 0.001278 | 0.001114 |
| return_function_shared.test | RUN | 0.130557 | 0.382699 | 0.414198 | 0.001268 | 0.001317 | 0.001230 |
| return_function_static.test | RUN | 0.130546 | 0.383067 | 0.417668 | 0.001138 | 0.001135 | 0.001063 |
| return_function_shared_0x.test | RUN | 0.134847 | 0.381777 | 0.416763 | 0.001276 | 0.001475 | 0.001214 |
| return_function_static_0x.test | RUN | 0.135425 | 0.382578 | 0.412547 | 0.001099 | 0.001222 | 0.001027 |
| return_function_shared_14.test | RUN | 0.128453 | 0.382432 | 0.413566 | 0.001238 | 0.001324 | 0.001111 |
| return_function_static_14.test | RUN | 0.132765 | 0.383678 | 0.415722 | 0.001111 | 0.001228 | 0.000984 |
| quick.test | RUN | 0.136133 | 0.383105 | 0.404226 | 0.001024 | 0.001199 | 0.001064 |
| issue_42.test | COMPILE | 0.099695 | 0.241642 | 0.271857 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.172004 | 0.523774 | 0.607097 | 0.001050 | 0.001217 | 0.001196 |
| contains_test_no_rtti.test | RUN | 0.160154 | 0.601496 | 0.584516 | 0.001088 | 0.001152 | 0.001013 |
| contains2_test_no_rtti.test | RUN | 0.138340 | 0.444722 | 0.459895 | 0.001272 | 0.001280 | 0.000850 |
| contains3_test.test | RUN | 0.129562 | 0.342602 | 0.400418 | 0.000804 | 0.001288 | 0.001029 |
| contains3_test_no_rtti.test | RUN | 0.110360 | 0.288414 | 0.265220 | 0.000839 | 0.000927 | 0.000795 |
| issue_53.test | COMPILE | 0.097371 | 0.182899 | 0.194208 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 1.004×, 0.998× | 0.997× |
| clang | 0.983× | 0.985×, 0.980× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45739944580).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000728s | 0.000736s | 0.000726s | byte equality observed |
| contains2_test.test | 10 | 0.000738s | 0.000732s | 0.000728s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000737s | 0.000726s | 0.000726s | byte equality observed |
| contains3_test.test | 10 | 0.000723s | 0.000733s | 0.000730s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000735s | 0.000735s | 0.000736s | byte equality observed |
| contains_test.test | 10 | 0.000733s | 0.000747s | 0.000739s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.000739s | 0.000734s | 0.000725s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.000729s | 0.000736s | 0.000718s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.000746s | 0.000740s | 0.000746s | byte equality observed |
| function_arith_portable.test | 10 | 0.000739s | 0.000746s | 0.000737s | byte equality observed |
| function_n_test.test | 10 | 0.000748s | 0.000742s | 0.000734s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000718s | 0.000710s | 0.000702s | byte equality observed |
| function_ref_portable.test | 10 | 0.000713s | 0.000697s | 0.000707s | byte equality observed |
| function_test.test | 10 | 0.000779s | 0.000768s | 0.000770s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.000775s | 0.000759s | 0.000751s | byte equality observed |
| lambda_test.test | 10 | 0.000733s | 0.000721s | 0.000717s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.000743s | 0.000757s | 0.000709s | byte equality observed |
| mem_fun_portable.test | 10 | 0.000743s | 0.000795s | 0.000709s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.000831s | 0.000867s | 0.000765s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.000843s | 0.000861s | 0.000768s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.000843s | 0.000859s | 0.000756s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.000804s | 0.000786s | 0.000745s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.000807s | 0.000796s | 0.000782s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.000824s | 0.000798s | 0.000796s | byte equality observed |
| nothrow_swap.test | 10 | 0.000813s | 0.000826s | 0.000771s | byte equality observed |
| quick.test | 10 | 0.000827s | 0.000805s | 0.000785s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.000803s | 0.000801s | 0.000809s | byte equality observed |
| result_arg_types_test.test | 10 | 0.000787s | 0.000808s | 0.000791s | byte equality observed |
| return_function_shared.test | 10 | 0.000842s | 0.000874s | 0.000851s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.000855s | 0.000868s | 0.000846s | byte equality observed |
| return_function_shared_14.test | 10 | 0.000858s | 0.000848s | 0.000843s | byte equality observed |
| return_function_static.test | 10 | 0.000822s | 0.000799s | 0.000793s | byte equality observed |
| return_function_static_0x.test | 10 | 0.000810s | 0.000794s | 0.000811s | byte equality observed |
| return_function_static_14.test | 10 | 0.000818s | 0.000790s | 0.000787s | byte equality observed |
| rvalues_test.test | 10 | 0.000835s | 0.000831s | 0.000796s | byte equality observed |
| stateless_test.test | 10 | 0.000806s | 0.000803s | 0.000789s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000763s | 0.000811s | 0.000760s | byte equality observed |
| std_bind_portable.test | 10 | 0.000765s | 0.000760s | 0.000773s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000777s | 0.000771s | 0.000776s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000758s | 0.000772s | 0.000759s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.000859s | 0.000862s | 0.000872s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.000828s | 0.000839s | 0.000833s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45739944580).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
