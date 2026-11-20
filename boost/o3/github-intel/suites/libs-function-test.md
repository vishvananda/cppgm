# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.235056 | 1.369919 | 1.116841 | 0.001045 | 0.001274 | 0.001261 |
| function_test_no_rtti.test | RUN | 0.230389 | 1.349146 | 1.110938 | 0.001245 | 0.001517 | 0.001259 |
| function_n_test.test | RUN | 0.211749 | 1.114393 | 0.927924 | 0.001213 | 0.001399 | 0.001208 |
| allocator_test.test | RUN | 0.170916 | 0.626058 | 0.608689 | 0.001416 | 0.001278 | 0.001225 |
| stateless_test.test | RUN | 0.123008 | 0.324366 | 0.386229 | 0.001090 | 0.001302 | 0.001189 |
| lambda_test.test | RUN | 0.266224 | 0.807102 | 0.845823 | 0.001096 | 0.001197 | 0.001128 |
| function_test_fail1.test | COMPILE_FAIL | 0.093231 | 0.220718 | 0.262106 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.092898 | 0.225310 | 0.263743 | — | — | — |
| function_30.test | COMPILE | 0.094663 | 0.228668 | 0.274744 | — | — | — |
| function_30_repeat.test | COMPILE | 0.093046 | 0.231920 | 0.274866 | — | — | — |
| function_arith_cxx98.test | RUN | 0.130277 | 0.397816 | 0.417644 | 0.001220 | 0.001197 | 0.001113 |
| function_arith_portable.test | RUN | 0.127908 | 0.371902 | 0.397230 | 0.001245 | 0.001234 | 0.001117 |
| sum_avg_cxx98.test | RUN | 0.126108 | 0.325288 | 0.377802 | 0.001062 | 0.001148 | 0.001214 |
| sum_avg_portable.test | RUN | 0.122346 | 0.296989 | 0.365082 | 0.000994 | 0.001294 | 0.001107 |
| mem_fun_cxx98.test | RUN | 0.139580 | 0.466830 | 0.474096 | 0.001105 | 0.001228 | 0.001084 |
| mem_fun_portable.test | RUN | 0.137398 | 0.409371 | 0.440550 | 0.001077 | 0.001422 | 0.001126 |
| std_bind_cxx98.test | RUN | 0.128724 | 0.373196 | 0.414846 | 0.001040 | 0.001411 | 0.001184 |
| std_bind_portable.test | RUN | 0.121994 | 0.361812 | 0.382220 | 0.001037 | 0.001230 | 0.001099 |
| function_ref_cxx98.test | RUN | 0.122249 | 0.317457 | 0.371821 | 0.001146 | 0.001304 | 0.000914 |
| function_ref_portable.test | RUN | 0.116202 | 0.295925 | 0.353646 | 0.001084 | 0.001184 | 0.001080 |
| contains_test.test | RUN | 0.152225 | 0.614329 | 0.598145 | 0.001115 | 0.001348 | 0.001155 |
| contains2_test.test | RUN | 0.135836 | 0.449780 | 0.463163 | 0.001041 | 0.001144 | 0.001142 |
| nothrow_swap.test | RUN | 0.128158 | 0.417326 | 0.438950 | 0.001169 | 0.001344 | 0.001107 |
| rvalues_test.test | RUN | 0.150756 | 0.512272 | 0.512362 | 0.001102 | 0.001260 | 0.001119 |
| function_typeof_test.test | COMPILE | 0.096425 | 0.224254 | 0.252665 | — | — | — |
| result_arg_types_test.test | RUN | 0.139611 | 0.354714 | 0.448413 | 0.001052 | 0.001222 | 0.001073 |
| result_arg_n_types_test.test | RUN | 0.146577 | 0.386048 | 0.536494 | 0.001057 | 0.001361 | 0.001230 |
| test_bad_function_call_shared.test | RUN | 0.122922 | 0.322428 | 0.379059 | 0.001161 | 0.001420 | 0.001214 |
| test_bad_function_call_static.test | RUN | 0.120247 | 0.321708 | 0.386540 | 0.001037 | 0.001368 | 0.001149 |
| mixed_cxxstd_shared.test | RUN | 0.126147 | 0.384152 | 0.416552 | 0.001330 | 0.001431 | 0.001312 |
| mixed_cxxstd_static.test | RUN | 0.128417 | 0.385838 | 0.423185 | 0.001150 | 0.001232 | 0.001042 |
| mixed_cxxstd_shared_0x.test | RUN | 0.132839 | 0.386612 | 0.427464 | 0.001145 | 0.001489 | 0.001215 |
| mixed_cxxstd_static_0x.test | RUN | 0.131001 | 0.380461 | 0.438239 | 0.001303 | 0.001280 | 0.001098 |
| mixed_cxxstd_shared_14.test | RUN | 0.130326 | 0.378639 | 0.431555 | 0.001220 | 0.001367 | 0.001176 |
| mixed_cxxstd_static_14.test | RUN | 0.132200 | 0.384449 | 0.432262 | 0.001029 | 0.001370 | 0.001179 |
| return_function_shared.test | RUN | 0.128646 | 0.384223 | 0.424812 | 0.001364 | 0.001354 | 0.001344 |
| return_function_static.test | RUN | 0.127653 | 0.386357 | 0.426709 | 0.001116 | 0.001336 | 0.001141 |
| return_function_shared_0x.test | RUN | 0.124569 | 0.388352 | 0.429944 | 0.001308 | 0.001389 | 0.001436 |
| return_function_static_0x.test | RUN | 0.127871 | 0.382963 | 0.431734 | 0.001093 | 0.001435 | 0.001161 |
| return_function_shared_14.test | RUN | 0.129784 | 0.390170 | 0.428034 | 0.001194 | 0.001439 | 0.001158 |
| return_function_static_14.test | RUN | 0.123446 | 0.389584 | 0.421809 | 0.001095 | 0.001412 | 0.001194 |
| quick.test | RUN | 0.131375 | 0.388036 | 0.419904 | 0.001029 | 0.001251 | 0.001277 |
| issue_42.test | COMPILE | 0.099785 | 0.246650 | 0.293448 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.169234 | 0.536172 | 0.628022 | 0.001206 | 0.001325 | 0.001194 |
| contains_test_no_rtti.test | RUN | 0.154165 | 0.615888 | 0.597252 | 0.001258 | 0.000919 | 0.001069 |
| contains2_test_no_rtti.test | RUN | 0.134865 | 0.451527 | 0.466642 | 0.001082 | 0.001273 | 0.001041 |
| contains3_test.test | RUN | 0.122786 | 0.345836 | 0.408904 | 0.001062 | 0.001229 | 0.001228 |
| contains3_test_no_rtti.test | RUN | 0.083243 | 0.299376 | 0.278873 | 0.000822 | 0.000914 | 0.000842 |
| issue_53.test | COMPILE | 0.076210 | 0.206774 | 0.200107 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.989× | 0.992×, 0.985× | 0.997× |
| clang | 0.988× | 0.995×, 0.980× | 0.988× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44780058957).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000739s | 0.000743s | 0.000717s | byte equality observed |
| contains2_test.test | 10 | 0.000734s | 0.000741s | 0.000724s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000743s | 0.000743s | 0.000728s | byte equality observed |
| contains3_test.test | 10 | 0.000740s | 0.000735s | 0.000739s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000731s | 0.000740s | 0.000736s | byte equality observed |
| contains_test.test | 10 | 0.000734s | 0.000727s | 0.000726s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.000746s | 0.000732s | 0.000720s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.000739s | 0.000731s | 0.000730s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.000757s | 0.000740s | 0.000743s | byte equality observed |
| function_arith_portable.test | 10 | 0.000755s | 0.000745s | 0.000732s | byte equality observed |
| function_n_test.test | 10 | 0.000746s | 0.000741s | 0.000734s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000714s | 0.000729s | 0.000709s | byte equality observed |
| function_ref_portable.test | 10 | 0.000720s | 0.000710s | 0.000697s | byte equality observed |
| function_test.test | 10 | 0.000780s | 0.000772s | 0.000771s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.000765s | 0.000760s | 0.000762s | byte equality observed |
| lambda_test.test | 10 | 0.000741s | 0.000747s | 0.000738s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.000750s | 0.000732s | 0.000724s | byte equality observed |
| mem_fun_portable.test | 10 | 0.000751s | 0.000745s | 0.000719s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.000835s | 0.000827s | 0.000759s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.000843s | 0.000857s | 0.000789s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.000844s | 0.000852s | 0.000762s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.000807s | 0.000816s | 0.000790s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.000821s | 0.000802s | 0.000780s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.000820s | 0.000781s | 0.000807s | byte equality observed |
| nothrow_swap.test | 10 | 0.000799s | 0.000817s | 0.000775s | byte equality observed |
| quick.test | 10 | 0.000828s | 0.000779s | 0.000809s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.000819s | 0.000789s | 0.000792s | byte equality observed |
| result_arg_types_test.test | 10 | 0.000813s | 0.000809s | 0.000793s | byte equality observed |
| return_function_shared.test | 10 | 0.000856s | 0.000846s | 0.000861s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.000847s | 0.000844s | 0.000866s | byte equality observed |
| return_function_shared_14.test | 10 | 0.000852s | 0.000876s | 0.000876s | byte equality observed |
| return_function_static.test | 10 | 0.000801s | 0.000821s | 0.000798s | byte equality observed |
| return_function_static_0x.test | 10 | 0.000801s | 0.000829s | 0.000801s | byte equality observed |
| return_function_static_14.test | 10 | 0.000806s | 0.000828s | 0.000790s | byte equality observed |
| rvalues_test.test | 10 | 0.000816s | 0.000800s | 0.000810s | byte equality observed |
| stateless_test.test | 10 | 0.000792s | 0.000784s | 0.000776s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000783s | 0.000760s | 0.000787s | byte equality observed |
| std_bind_portable.test | 10 | 0.000801s | 0.000763s | 0.000774s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000781s | 0.000789s | 0.000756s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000775s | 0.000794s | 0.000788s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.000853s | 0.000845s | 0.000865s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.000830s | 0.000811s | 0.000816s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44780058957).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
