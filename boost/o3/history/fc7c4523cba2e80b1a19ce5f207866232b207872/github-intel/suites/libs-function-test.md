# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.234409 | 1.356180 | 1.104047 | 0.001081 | 0.001419 | 0.001038 |
| function_test_no_rtti.test | RUN | 0.233433 | 1.363180 | 1.110325 | 0.001259 | 0.001424 | 0.001138 |
| function_n_test.test | RUN | 0.216693 | 1.112462 | 0.932820 | 0.001277 | 0.001237 | 0.001135 |
| allocator_test.test | RUN | 0.174028 | 0.610325 | 0.602452 | 0.001393 | 0.001447 | 0.001077 |
| stateless_test.test | RUN | 0.127365 | 0.324551 | 0.381188 | 0.001147 | 0.001271 | 0.001040 |
| lambda_test.test | RUN | 0.279144 | 0.807355 | 0.829908 | 0.001189 | 0.001295 | 0.001106 |
| function_test_fail1.test | COMPILE_FAIL | 0.094587 | 0.217142 | 0.250536 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.095620 | 0.219020 | 0.260727 | — | — | — |
| function_30.test | COMPILE | 0.099522 | 0.229326 | 0.263436 | — | — | — |
| function_30_repeat.test | COMPILE | 0.097246 | 0.231118 | 0.270236 | — | — | — |
| function_arith_cxx98.test | RUN | 0.132977 | 0.398676 | 0.415388 | 0.001285 | 0.001296 | 0.001150 |
| function_arith_portable.test | RUN | 0.126293 | 0.372939 | 0.392595 | 0.001085 | 0.001002 | 0.001064 |
| sum_avg_cxx98.test | RUN | 0.124665 | 0.318456 | 0.370150 | 0.001103 | 0.001271 | 0.000981 |
| sum_avg_portable.test | RUN | 0.120990 | 0.298948 | 0.364864 | 0.001058 | 0.001268 | 0.001013 |
| mem_fun_cxx98.test | RUN | 0.139003 | 0.460281 | 0.463873 | 0.001276 | 0.001283 | 0.001012 |
| mem_fun_portable.test | RUN | 0.137186 | 0.411890 | 0.435824 | 0.001108 | 0.001197 | 0.001047 |
| std_bind_cxx98.test | RUN | 0.136101 | 0.382666 | 0.402157 | 0.001107 | 0.001232 | 0.000962 |
| std_bind_portable.test | RUN | 0.134084 | 0.363762 | 0.379675 | 0.001124 | 0.001297 | 0.000976 |
| function_ref_cxx98.test | RUN | 0.125265 | 0.317084 | 0.361913 | 0.001042 | 0.001269 | 0.000994 |
| function_ref_portable.test | RUN | 0.118659 | 0.291133 | 0.350498 | 0.001084 | 0.001127 | 0.000905 |
| contains_test.test | RUN | 0.157054 | 0.621106 | 0.578192 | 0.001092 | 0.001438 | 0.000980 |
| contains2_test.test | RUN | 0.138138 | 0.447120 | 0.442096 | 0.001094 | 0.001338 | 0.000928 |
| nothrow_swap.test | RUN | 0.130911 | 0.419649 | 0.441895 | 0.001081 | 0.001261 | 0.001005 |
| rvalues_test.test | RUN | 0.148006 | 0.517373 | 0.510666 | 0.001078 | 0.001303 | 0.000999 |
| function_typeof_test.test | COMPILE | 0.095657 | 0.222614 | 0.246743 | — | — | — |
| result_arg_types_test.test | RUN | 0.140074 | 0.355134 | 0.445181 | 0.000858 | 0.001204 | 0.001058 |
| result_arg_n_types_test.test | RUN | 0.155539 | 0.388397 | 0.521132 | 0.001133 | 0.001332 | 0.001224 |
| test_bad_function_call_shared.test | RUN | 0.125382 | 0.322075 | 0.373404 | 0.001346 | 0.001411 | 0.001113 |
| test_bad_function_call_static.test | RUN | 0.125613 | 0.316643 | 0.378630 | 0.001149 | 0.001544 | 0.001053 |
| mixed_cxxstd_shared.test | RUN | 0.133168 | 0.385856 | 0.404901 | 0.001194 | 0.001380 | 0.001170 |
| mixed_cxxstd_static.test | RUN | 0.131928 | 0.385159 | 0.427109 | 0.001161 | 0.001115 | 0.001008 |
| mixed_cxxstd_shared_0x.test | RUN | 0.134272 | 0.381055 | 0.416619 | 0.001185 | 0.001436 | 0.001101 |
| mixed_cxxstd_static_0x.test | RUN | 0.131229 | 0.380203 | 0.430262 | 0.001272 | 0.001403 | 0.001121 |
| mixed_cxxstd_shared_14.test | RUN | 0.136946 | 0.385051 | 0.427321 | 0.001187 | 0.001392 | 0.001150 |
| mixed_cxxstd_static_14.test | RUN | 0.139607 | 0.390356 | 0.422628 | 0.001146 | 0.001333 | 0.001034 |
| return_function_shared.test | RUN | 0.129100 | 0.384764 | 0.415148 | 0.001374 | 0.001436 | 0.001129 |
| return_function_static.test | RUN | 0.134148 | 0.389472 | 0.406787 | 0.001260 | 0.001210 | 0.001028 |
| return_function_shared_0x.test | RUN | 0.134392 | 0.388232 | 0.401627 | 0.001256 | 0.001495 | 0.001114 |
| return_function_static_0x.test | RUN | 0.129721 | 0.386574 | 0.405261 | 0.001260 | 0.001346 | 0.000995 |
| return_function_shared_14.test | RUN | 0.130554 | 0.393998 | 0.405656 | 0.001183 | 0.001518 | 0.001173 |
| return_function_static_14.test | RUN | 0.130281 | 0.386669 | 0.404145 | 0.001256 | 0.001308 | 0.001013 |
| quick.test | RUN | 0.138684 | 0.396270 | 0.406911 | 0.001130 | 0.001252 | 0.000968 |
| issue_42.test | COMPILE | 0.100632 | 0.249829 | 0.274053 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.176917 | 0.527430 | 0.608366 | 0.001020 | 0.001248 | 0.001224 |
| contains_test_no_rtti.test | RUN | 0.157918 | 0.613428 | 0.588874 | 0.001028 | 0.001183 | 0.000919 |
| contains2_test_no_rtti.test | RUN | 0.140650 | 0.445305 | 0.452430 | 0.001230 | 0.001367 | 0.000797 |
| contains3_test.test | RUN | 0.133486 | 0.348945 | 0.403925 | 0.001073 | 0.001240 | 0.001082 |
| contains3_test_no_rtti.test | RUN | 0.097890 | 0.294940 | 0.263740 | 0.000854 | 0.000920 | 0.000790 |
| issue_53.test | COMPILE | 0.081023 | 0.192736 | 0.196883 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.990× | 0.974×, 1.007× | 0.991× |
| clang | 0.972× | 0.970×, 0.974× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46032707836).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000761s | 0.000747s | 0.000729s | byte equality observed |
| contains2_test.test | 10 | 0.000741s | 0.000741s | 0.000723s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000744s | 0.000747s | 0.000711s | byte equality observed |
| contains3_test.test | 10 | 0.000742s | 0.000724s | 0.000724s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000741s | 0.000732s | 0.000724s | byte equality observed |
| contains_test.test | 10 | 0.000751s | 0.000734s | 0.000725s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.000728s | 0.000726s | 0.000723s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.000737s | 0.000735s | 0.000725s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.000762s | 0.000740s | 0.000734s | byte equality observed |
| function_arith_portable.test | 10 | 0.000753s | 0.000723s | 0.000747s | byte equality observed |
| function_n_test.test | 10 | 0.000753s | 0.000738s | 0.000723s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000723s | 0.000708s | 0.000718s | byte equality observed |
| function_ref_portable.test | 10 | 0.000737s | 0.000713s | 0.000718s | byte equality observed |
| function_test.test | 10 | 0.000793s | 0.000773s | 0.000769s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.000758s | 0.000773s | 0.000771s | byte equality observed |
| lambda_test.test | 10 | 0.000747s | 0.000755s | 0.000723s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.000749s | 0.000809s | 0.000727s | byte equality observed |
| mem_fun_portable.test | 10 | 0.000811s | 0.000789s | 0.000721s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.000855s | 0.000865s | 0.000760s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.000897s | 0.000860s | 0.000778s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.000861s | 0.000841s | 0.000780s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.000803s | 0.000818s | 0.000766s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.000817s | 0.000855s | 0.000767s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.000829s | 0.000830s | 0.000757s | byte equality observed |
| nothrow_swap.test | 10 | 0.000817s | 0.000801s | 0.000789s | byte equality observed |
| quick.test | 10 | 0.000843s | 0.000783s | 0.000792s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.000796s | 0.000785s | 0.000817s | byte equality observed |
| result_arg_types_test.test | 10 | 0.000812s | 0.000819s | 0.000849s | byte equality observed |
| return_function_shared.test | 10 | 0.000857s | 0.000864s | 0.000856s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.000891s | 0.000846s | 0.000865s | byte equality observed |
| return_function_shared_14.test | 10 | 0.000863s | 0.000851s | 0.000869s | byte equality observed |
| return_function_static.test | 10 | 0.000817s | 0.000826s | 0.000793s | byte equality observed |
| return_function_static_0x.test | 10 | 0.000817s | 0.000798s | 0.000793s | byte equality observed |
| return_function_static_14.test | 10 | 0.000820s | 0.000810s | 0.000798s | byte equality observed |
| rvalues_test.test | 10 | 0.000811s | 0.000790s | 0.000787s | byte equality observed |
| stateless_test.test | 10 | 0.000799s | 0.000796s | 0.000815s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000804s | 0.000775s | 0.000784s | byte equality observed |
| std_bind_portable.test | 10 | 0.000786s | 0.000796s | 0.000758s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000762s | 0.000819s | 0.000777s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000785s | 0.000771s | 0.000789s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.000862s | 0.000883s | 0.000876s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.000836s | 0.000840s | 0.000811s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46032707836).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
