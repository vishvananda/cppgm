# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.239034 | 1.378533 | 1.150961 | 0.001133 | 0.001261 | 0.001167 |
| function_test_no_rtti.test | RUN | 0.233355 | 1.343049 | 1.146699 | 0.001153 | 0.001392 | 0.001218 |
| function_n_test.test | RUN | 0.221615 | 1.111778 | 0.941484 | 0.001220 | 0.001169 | 0.001378 |
| allocator_test.test | RUN | 0.175001 | 0.620716 | 0.618755 | 0.001511 | 0.001285 | 0.001232 |
| stateless_test.test | RUN | 0.130653 | 0.328804 | 0.391262 | 0.001316 | 0.001318 | 0.001150 |
| lambda_test.test | RUN | 0.274060 | 0.798186 | 0.852094 | 0.001275 | 0.001169 | 0.001219 |
| function_test_fail1.test | COMPILE_FAIL | 0.096793 | 0.218352 | 0.262137 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.099621 | 0.217897 | 0.266223 | — | — | — |
| function_30.test | COMPILE | 0.103562 | 0.231342 | 0.277623 | — | — | — |
| function_30_repeat.test | COMPILE | 0.099804 | 0.232187 | 0.282511 | — | — | — |
| function_arith_cxx98.test | RUN | 0.136290 | 0.395108 | 0.434340 | 0.001425 | 0.001244 | 0.001550 |
| function_arith_portable.test | RUN | 0.132281 | 0.366844 | 0.410814 | 0.001398 | 0.001186 | 0.001230 |
| sum_avg_cxx98.test | RUN | 0.128071 | 0.322516 | 0.384523 | 0.001030 | 0.001079 | 0.001222 |
| sum_avg_portable.test | RUN | 0.134067 | 0.293934 | 0.367792 | 0.001297 | 0.001169 | 0.001091 |
| mem_fun_cxx98.test | RUN | 0.149489 | 0.471353 | 0.490496 | 0.001394 | 0.001254 | 0.001071 |
| mem_fun_portable.test | RUN | 0.148624 | 0.415694 | 0.457183 | 0.001101 | 0.001226 | 0.001066 |
| std_bind_cxx98.test | RUN | 0.135188 | 0.379834 | 0.416652 | 0.001362 | 0.001423 | 0.001119 |
| std_bind_portable.test | RUN | 0.138865 | 0.357992 | 0.391283 | 0.001429 | 0.001229 | 0.001117 |
| function_ref_cxx98.test | RUN | 0.128301 | 0.319001 | 0.376136 | 0.001421 | 0.001338 | 0.000922 |
| function_ref_portable.test | RUN | 0.128874 | 0.295354 | 0.363423 | 0.001331 | 0.001184 | 0.001121 |
| contains_test.test | RUN | 0.166849 | 0.617716 | 0.600086 | 0.001320 | 0.001376 | 0.001112 |
| contains2_test.test | RUN | 0.148056 | 0.449344 | 0.465099 | 0.001426 | 0.001284 | 0.001181 |
| nothrow_swap.test | RUN | 0.139750 | 0.423633 | 0.457367 | 0.001220 | 0.001256 | 0.001159 |
| rvalues_test.test | RUN | 0.158260 | 0.515516 | 0.525371 | 0.001239 | 0.001303 | 0.001124 |
| function_typeof_test.test | COMPILE | 0.105710 | 0.224791 | 0.275167 | — | — | — |
| result_arg_types_test.test | RUN | 0.149197 | 0.354798 | 0.462174 | 0.001248 | 0.001244 | 0.001248 |
| result_arg_n_types_test.test | RUN | 0.157700 | 0.388780 | 0.547997 | 0.001193 | 0.001300 | 0.001485 |
| test_bad_function_call_shared.test | RUN | 0.130131 | 0.319484 | 0.382464 | 0.001381 | 0.001147 | 0.001315 |
| test_bad_function_call_static.test | RUN | 0.126339 | 0.321319 | 0.385077 | 0.001310 | 0.001295 | 0.001148 |
| mixed_cxxstd_shared.test | RUN | 0.143841 | 0.384705 | 0.437978 | 0.001554 | 0.001414 | 0.001343 |
| mixed_cxxstd_static.test | RUN | 0.136649 | 0.385668 | 0.441251 | 0.001507 | 0.001301 | 0.001251 |
| mixed_cxxstd_shared_0x.test | RUN | 0.134467 | 0.382114 | 0.428449 | 0.001307 | 0.001485 | 0.001264 |
| mixed_cxxstd_static_0x.test | RUN | 0.139823 | 0.380149 | 0.432420 | 0.001080 | 0.001292 | 0.001209 |
| mixed_cxxstd_shared_14.test | RUN | 0.139136 | 0.385041 | 0.444849 | 0.001366 | 0.001446 | 0.001232 |
| mixed_cxxstd_static_14.test | RUN | 0.135495 | 0.379217 | 0.436171 | 0.001210 | 0.001330 | 0.001430 |
| return_function_shared.test | RUN | 0.132335 | 0.385051 | 0.429273 | 0.001282 | 0.001323 | 0.001468 |
| return_function_static.test | RUN | 0.134752 | 0.384477 | 0.429214 | 0.001270 | 0.001205 | 0.001214 |
| return_function_shared_0x.test | RUN | 0.135171 | 0.383794 | 0.431269 | 0.001315 | 0.001280 | 0.001508 |
| return_function_static_0x.test | RUN | 0.134136 | 0.384147 | 0.420590 | 0.001356 | 0.001298 | 0.001415 |
| return_function_shared_14.test | RUN | 0.132671 | 0.385432 | 0.427366 | 0.001392 | 0.001278 | 0.001150 |
| return_function_static_14.test | RUN | 0.138227 | 0.390605 | 0.426964 | 0.001171 | 0.001239 | 0.001134 |
| quick.test | RUN | 0.142743 | 0.385388 | 0.430094 | 0.001368 | 0.001358 | 0.001189 |
| issue_42.test | COMPILE | 0.107097 | 0.247890 | 0.289547 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.181409 | 0.525640 | 0.615454 | 0.001232 | 0.001182 | 0.001237 |
| contains_test_no_rtti.test | RUN | 0.164848 | 0.609887 | 0.603550 | 0.001022 | 0.000861 | 0.001200 |
| contains2_test_no_rtti.test | RUN | 0.144514 | 0.446845 | 0.463645 | 0.001213 | 0.001252 | 0.000943 |
| contains3_test.test | RUN | 0.136598 | 0.344309 | 0.410713 | 0.000931 | 0.001211 | 0.001343 |
| contains3_test_no_rtti.test | RUN | 0.106870 | 0.301020 | 0.293222 | 0.000892 | 0.000898 | 0.000913 |
| issue_53.test | COMPILE | 0.095188 | 0.200888 | 0.205126 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.995× | 1.004×, 0.986× | 1.004× |
| clang | 0.997× | 0.997×, 0.996× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44656576225).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000763s | 0.000740s | 0.000764s | byte equality observed |
| contains2_test.test | 10 | 0.000751s | 0.000746s | 0.000751s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000750s | 0.000733s | 0.000747s | byte equality observed |
| contains3_test.test | 10 | 0.000735s | 0.000737s | 0.000748s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000731s | 0.000736s | 0.000747s | byte equality observed |
| contains_test.test | 10 | 0.000738s | 0.000748s | 0.000741s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.000731s | 0.000751s | 0.000752s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.000741s | 0.000753s | 0.000728s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.000754s | 0.000755s | 0.000755s | byte equality observed |
| function_arith_portable.test | 10 | 0.000748s | 0.000741s | 0.000751s | byte equality observed |
| function_n_test.test | 10 | 0.000742s | 0.000750s | 0.000760s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000712s | 0.000701s | 0.000723s | byte equality observed |
| function_ref_portable.test | 10 | 0.000718s | 0.000692s | 0.000722s | byte equality observed |
| function_test.test | 10 | 0.000781s | 0.000788s | 0.000775s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.000777s | 0.000792s | 0.000774s | byte equality observed |
| lambda_test.test | 10 | 0.000735s | 0.000796s | 0.000741s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.000761s | 0.000818s | 0.000740s | byte equality observed |
| mem_fun_portable.test | 10 | 0.000764s | 0.000805s | 0.000732s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.000867s | 0.000865s | 0.000783s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.000869s | 0.000881s | 0.000800s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.000893s | 0.000858s | 0.000866s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.000841s | 0.000851s | 0.000840s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.000808s | 0.000819s | 0.000830s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.000815s | 0.000856s | 0.000837s | byte equality observed |
| nothrow_swap.test | 10 | 0.000850s | 0.000854s | 0.000811s | byte equality observed |
| quick.test | 10 | 0.000839s | 0.000828s | 0.000816s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.000819s | 0.000836s | 0.000817s | byte equality observed |
| result_arg_types_test.test | 10 | 0.000822s | 0.000842s | 0.000839s | byte equality observed |
| return_function_shared.test | 10 | 0.000866s | 0.000855s | 0.000871s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.000867s | 0.000855s | 0.000889s | byte equality observed |
| return_function_shared_14.test | 10 | 0.000900s | 0.000847s | 0.000863s | byte equality observed |
| return_function_static.test | 10 | 0.000834s | 0.000798s | 0.000818s | byte equality observed |
| return_function_static_0x.test | 10 | 0.000819s | 0.000836s | 0.000812s | byte equality observed |
| return_function_static_14.test | 10 | 0.000808s | 0.000807s | 0.000785s | byte equality observed |
| rvalues_test.test | 10 | 0.000822s | 0.000841s | 0.000819s | byte equality observed |
| stateless_test.test | 10 | 0.000788s | 0.000854s | 0.000833s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000794s | 0.000824s | 0.000795s | byte equality observed |
| std_bind_portable.test | 10 | 0.000801s | 0.000774s | 0.000792s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000814s | 0.000798s | 0.000799s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000786s | 0.000802s | 0.000789s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.000875s | 0.000870s | 0.000873s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.000839s | 0.000813s | 0.000821s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44656576225).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
