# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.240066 | 1.350683 | 1.110867 | 0.001205 | 0.001309 | 0.001203 |
| function_test_no_rtti.test | RUN | 0.232674 | 1.367268 | 1.107349 | 0.001092 | 0.001339 | 0.001245 |
| function_n_test.test | RUN | 0.217177 | 1.089777 | 0.949766 | 0.001267 | 0.001327 | 0.001214 |
| allocator_test.test | RUN | 0.171628 | 0.624873 | 0.623296 | 0.001422 | 0.001490 | 0.001235 |
| stateless_test.test | RUN | 0.124254 | 0.327560 | 0.390655 | 0.001102 | 0.001273 | 0.001050 |
| lambda_test.test | RUN | 0.266502 | 0.803368 | 0.827188 | 0.001123 | 0.001273 | 0.001254 |
| function_test_fail1.test | COMPILE_FAIL | 0.092336 | 0.215995 | 0.255007 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.096513 | 0.219951 | 0.261824 | — | — | — |
| function_30.test | COMPILE | 0.100579 | 0.229237 | 0.273524 | — | — | — |
| function_30_repeat.test | COMPILE | 0.098017 | 0.227332 | 0.277762 | — | — | — |
| function_arith_cxx98.test | RUN | 0.132351 | 0.396153 | 0.424938 | 0.001373 | 0.001336 | 0.001235 |
| function_arith_portable.test | RUN | 0.129220 | 0.372869 | 0.405376 | 0.001312 | 0.001188 | 0.001217 |
| sum_avg_cxx98.test | RUN | 0.123642 | 0.324582 | 0.376046 | 0.001067 | 0.000836 | 0.001182 |
| sum_avg_portable.test | RUN | 0.126119 | 0.295709 | 0.361621 | 0.001017 | 0.001252 | 0.001184 |
| mem_fun_cxx98.test | RUN | 0.137945 | 0.453081 | 0.486494 | 0.001362 | 0.001215 | 0.001326 |
| mem_fun_portable.test | RUN | 0.141903 | 0.422365 | 0.454175 | 0.001077 | 0.001278 | 0.001173 |
| std_bind_cxx98.test | RUN | 0.130046 | 0.369491 | 0.416335 | 0.001094 | 0.001240 | 0.001084 |
| std_bind_portable.test | RUN | 0.128028 | 0.355851 | 0.383876 | 0.001078 | 0.001288 | 0.001125 |
| function_ref_cxx98.test | RUN | 0.123870 | 0.318750 | 0.384885 | 0.001306 | 0.001260 | 0.001232 |
| function_ref_portable.test | RUN | 0.121997 | 0.288708 | 0.365346 | 0.001125 | 0.001170 | 0.001096 |
| contains_test.test | RUN | 0.153887 | 0.614575 | 0.588299 | 0.001109 | 0.001264 | 0.001048 |
| contains2_test.test | RUN | 0.136776 | 0.441068 | 0.458203 | 0.001058 | 0.001126 | 0.001053 |
| nothrow_swap.test | RUN | 0.131319 | 0.421075 | 0.449582 | 0.001143 | 0.001174 | 0.001200 |
| rvalues_test.test | RUN | 0.153160 | 0.509776 | 0.523192 | 0.001026 | 0.001211 | 0.001091 |
| function_typeof_test.test | COMPILE | 0.096337 | 0.216740 | 0.268567 | — | — | — |
| result_arg_types_test.test | RUN | 0.137723 | 0.352224 | 0.457178 | 0.001153 | 0.001171 | 0.001074 |
| result_arg_n_types_test.test | RUN | 0.145944 | 0.387675 | 0.542880 | 0.001172 | 0.001211 | 0.001245 |
| test_bad_function_call_shared.test | RUN | 0.122894 | 0.316603 | 0.391672 | 0.001144 | 0.001404 | 0.001237 |
| test_bad_function_call_static.test | RUN | 0.123750 | 0.318636 | 0.378460 | 0.001223 | 0.001221 | 0.001092 |
| mixed_cxxstd_shared.test | RUN | 0.133120 | 0.379932 | 0.437040 | 0.001242 | 0.001382 | 0.001215 |
| mixed_cxxstd_static.test | RUN | 0.129997 | 0.374345 | 0.426308 | 0.001256 | 0.001232 | 0.001096 |
| mixed_cxxstd_shared_0x.test | RUN | 0.132869 | 0.379233 | 0.426511 | 0.001192 | 0.001424 | 0.001222 |
| mixed_cxxstd_static_0x.test | RUN | 0.128037 | 0.379353 | 0.425317 | 0.001220 | 0.001345 | 0.001147 |
| mixed_cxxstd_shared_14.test | RUN | 0.128299 | 0.375421 | 0.424266 | 0.001307 | 0.001342 | 0.001234 |
| mixed_cxxstd_static_14.test | RUN | 0.133204 | 0.381090 | 0.442666 | 0.001110 | 0.001332 | 0.001187 |
| return_function_shared.test | RUN | 0.129585 | 0.384187 | 0.417972 | 0.001362 | 0.001414 | 0.001251 |
| return_function_static.test | RUN | 0.127660 | 0.384170 | 0.416980 | 0.001210 | 0.001178 | 0.001057 |
| return_function_shared_0x.test | RUN | 0.130254 | 0.377628 | 0.420698 | 0.001101 | 0.001299 | 0.001396 |
| return_function_static_0x.test | RUN | 0.123662 | 0.379553 | 0.429679 | 0.001066 | 0.001312 | 0.001122 |
| return_function_shared_14.test | RUN | 0.131252 | 0.383278 | 0.423444 | 0.001147 | 0.001412 | 0.001206 |
| return_function_static_14.test | RUN | 0.124268 | 0.384074 | 0.416491 | 0.000941 | 0.001419 | 0.001137 |
| quick.test | RUN | 0.130405 | 0.378591 | 0.417502 | 0.001034 | 0.001252 | 0.001177 |
| issue_42.test | COMPILE | 0.098620 | 0.251884 | 0.283463 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.172250 | 0.532867 | 0.617803 | 0.001182 | 0.001340 | 0.001142 |
| contains_test_no_rtti.test | RUN | 0.152764 | 0.608078 | 0.603755 | 0.001332 | 0.000878 | 0.001132 |
| contains2_test_no_rtti.test | RUN | 0.137815 | 0.445961 | 0.461656 | 0.000961 | 0.001280 | 0.001253 |
| contains3_test.test | RUN | 0.125875 | 0.344112 | 0.414144 | 0.000743 | 0.001183 | 0.001133 |
| contains3_test_no_rtti.test | RUN | 0.086195 | 0.292849 | 0.291967 | 0.000907 | 0.000911 | 0.000853 |
| issue_53.test | COMPILE | 0.075185 | 0.211591 | 0.201884 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998× | 0.995×, 1.002× | 0.993× |
| clang | 0.975× | 0.987×, 0.964× | 0.992× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44818861403).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000743s | 0.000752s | 0.000744s | byte equality observed |
| contains2_test.test | 10 | 0.000732s | 0.000740s | 0.000727s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000739s | 0.000768s | 0.000730s | byte equality observed |
| contains3_test.test | 10 | 0.000734s | 0.000742s | 0.000737s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000729s | 0.000736s | 0.000728s | byte equality observed |
| contains_test.test | 10 | 0.000745s | 0.000751s | 0.000733s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.000740s | 0.000751s | 0.000733s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.000743s | 0.000733s | 0.000719s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.000756s | 0.000763s | 0.000724s | byte equality observed |
| function_arith_portable.test | 10 | 0.000759s | 0.000735s | 0.000731s | byte equality observed |
| function_n_test.test | 10 | 0.000756s | 0.000748s | 0.000738s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000719s | 0.000723s | 0.000709s | byte equality observed |
| function_ref_portable.test | 10 | 0.000714s | 0.000720s | 0.000700s | byte equality observed |
| function_test.test | 10 | 0.000781s | 0.000780s | 0.000752s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.000782s | 0.000769s | 0.000768s | byte equality observed |
| lambda_test.test | 10 | 0.000735s | 0.000755s | 0.000714s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.000750s | 0.000780s | 0.000739s | byte equality observed |
| mem_fun_portable.test | 10 | 0.000803s | 0.000771s | 0.000731s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.000844s | 0.000853s | 0.000776s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.000860s | 0.000853s | 0.000758s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.000849s | 0.000858s | 0.000765s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.000840s | 0.000846s | 0.000722s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.000834s | 0.000839s | 0.000787s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.000812s | 0.000816s | 0.000822s | byte equality observed |
| nothrow_swap.test | 10 | 0.000834s | 0.000835s | 0.000842s | byte equality observed |
| quick.test | 10 | 0.000822s | 0.000830s | 0.000825s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.000801s | 0.000834s | 0.000809s | byte equality observed |
| result_arg_types_test.test | 10 | 0.000815s | 0.000822s | 0.000776s | byte equality observed |
| return_function_shared.test | 10 | 0.000865s | 0.000860s | 0.000857s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.000887s | 0.000847s | 0.000830s | byte equality observed |
| return_function_shared_14.test | 10 | 0.000878s | 0.000844s | 0.000835s | byte equality observed |
| return_function_static.test | 10 | 0.000818s | 0.000788s | 0.000793s | byte equality observed |
| return_function_static_0x.test | 10 | 0.000824s | 0.000771s | 0.000811s | byte equality observed |
| return_function_static_14.test | 10 | 0.000814s | 0.000811s | 0.000805s | byte equality observed |
| rvalues_test.test | 10 | 0.000835s | 0.000835s | 0.000809s | byte equality observed |
| stateless_test.test | 10 | 0.000805s | 0.000831s | 0.000798s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000808s | 0.000809s | 0.000800s | byte equality observed |
| std_bind_portable.test | 10 | 0.000778s | 0.000771s | 0.000762s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000790s | 0.000773s | 0.000763s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000803s | 0.000776s | 0.000797s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.000862s | 0.000858s | 0.000865s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.000832s | 0.000848s | 0.000853s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44818861403).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
