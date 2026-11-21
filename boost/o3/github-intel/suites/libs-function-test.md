# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.233834 | 1.364660 | 1.141707 | 0.001308 | 0.001331 | 0.001139 |
| function_test_no_rtti.test | RUN | 0.228735 | 1.320376 | 1.137829 | 0.001256 | 0.001364 | 0.001212 |
| function_n_test.test | RUN | 0.214046 | 1.096135 | 0.948473 | 0.001143 | 0.001412 | 0.001346 |
| allocator_test.test | RUN | 0.170286 | 0.617189 | 0.626765 | 0.001450 | 0.001218 | 0.001270 |
| stateless_test.test | RUN | 0.120915 | 0.321534 | 0.389096 | 0.001071 | 0.001230 | 0.001168 |
| lambda_test.test | RUN | 0.267658 | 0.786269 | 0.849283 | 0.001140 | 0.001169 | 0.001392 |
| function_test_fail1.test | COMPILE_FAIL | 0.091069 | 0.216073 | 0.267062 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.091981 | 0.219878 | 0.268372 | — | — | — |
| function_30.test | COMPILE | 0.098700 | 0.226721 | 0.276342 | — | — | — |
| function_30_repeat.test | COMPILE | 0.095177 | 0.226344 | 0.285814 | — | — | — |
| function_arith_cxx98.test | RUN | 0.126597 | 0.395804 | 0.435716 | 0.001237 | 0.000950 | 0.001250 |
| function_arith_portable.test | RUN | 0.129965 | 0.368609 | 0.410371 | 0.000942 | 0.001163 | 0.001291 |
| sum_avg_cxx98.test | RUN | 0.121969 | 0.316634 | 0.379283 | 0.001122 | 0.001151 | 0.001356 |
| sum_avg_portable.test | RUN | 0.124331 | 0.288880 | 0.373800 | 0.001044 | 0.001325 | 0.001240 |
| mem_fun_cxx98.test | RUN | 0.144813 | 0.458132 | 0.482580 | 0.001115 | 0.001007 | 0.001178 |
| mem_fun_portable.test | RUN | 0.137555 | 0.420667 | 0.450352 | 0.001047 | 0.001198 | 0.001167 |
| std_bind_cxx98.test | RUN | 0.122039 | 0.381948 | 0.424278 | 0.001079 | 0.001210 | 0.001317 |
| std_bind_portable.test | RUN | 0.120775 | 0.357568 | 0.388811 | 0.001077 | 0.001224 | 0.001187 |
| function_ref_cxx98.test | RUN | 0.115301 | 0.323132 | 0.379983 | 0.001064 | 0.001219 | 0.001266 |
| function_ref_portable.test | RUN | 0.118081 | 0.287950 | 0.359168 | 0.001098 | 0.001124 | 0.001104 |
| contains_test.test | RUN | 0.144957 | 0.612225 | 0.599831 | 0.001052 | 0.001384 | 0.001298 |
| contains2_test.test | RUN | 0.129710 | 0.440018 | 0.459528 | 0.001069 | 0.001341 | 0.001314 |
| nothrow_swap.test | RUN | 0.131429 | 0.421840 | 0.445431 | 0.001173 | 0.001256 | 0.001187 |
| rvalues_test.test | RUN | 0.151470 | 0.504633 | 0.524741 | 0.001084 | 0.001221 | 0.001392 |
| function_typeof_test.test | COMPILE | 0.099146 | 0.222107 | 0.268696 | — | — | — |
| result_arg_types_test.test | RUN | 0.144017 | 0.348822 | 0.470878 | 0.001065 | 0.001217 | 0.001254 |
| result_arg_n_types_test.test | RUN | 0.152198 | 0.389451 | 0.550140 | 0.001068 | 0.001219 | 0.001360 |
| test_bad_function_call_shared.test | RUN | 0.115868 | 0.313492 | 0.393909 | 0.001182 | 0.001284 | 0.001274 |
| test_bad_function_call_static.test | RUN | 0.120072 | 0.316496 | 0.376450 | 0.001051 | 0.001305 | 0.001210 |
| mixed_cxxstd_shared.test | RUN | 0.127685 | 0.376548 | 0.434325 | 0.001385 | 0.001294 | 0.001349 |
| mixed_cxxstd_static.test | RUN | 0.129464 | 0.377485 | 0.439704 | 0.001282 | 0.001130 | 0.001179 |
| mixed_cxxstd_shared_0x.test | RUN | 0.128704 | 0.377915 | 0.439627 | 0.001268 | 0.001276 | 0.001307 |
| mixed_cxxstd_static_0x.test | RUN | 0.131541 | 0.370922 | 0.445330 | 0.001092 | 0.001280 | 0.001343 |
| mixed_cxxstd_shared_14.test | RUN | 0.132597 | 0.379560 | 0.438648 | 0.001136 | 0.001262 | 0.001254 |
| mixed_cxxstd_static_14.test | RUN | 0.133736 | 0.378528 | 0.434173 | 0.001092 | 0.001287 | 0.001222 |
| return_function_shared.test | RUN | 0.127573 | 0.377778 | 0.440335 | 0.001265 | 0.001370 | 0.001375 |
| return_function_static.test | RUN | 0.127607 | 0.378473 | 0.436258 | 0.001082 | 0.001300 | 0.001125 |
| return_function_shared_0x.test | RUN | 0.126036 | 0.389251 | 0.425540 | 0.001143 | 0.001518 | 0.001413 |
| return_function_static_0x.test | RUN | 0.128656 | 0.378227 | 0.428108 | 0.001222 | 0.001273 | 0.001233 |
| return_function_shared_14.test | RUN | 0.132101 | 0.385057 | 0.421711 | 0.001268 | 0.001155 | 0.001284 |
| return_function_static_14.test | RUN | 0.126987 | 0.377473 | 0.426916 | 0.001217 | 0.001181 | 0.001325 |
| quick.test | RUN | 0.132762 | 0.385555 | 0.433244 | 0.001160 | 0.001236 | 0.001208 |
| issue_42.test | COMPILE | 0.106896 | 0.243122 | 0.291010 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.176573 | 0.522451 | 0.624020 | 0.000889 | 0.001200 | 0.001096 |
| contains_test_no_rtti.test | RUN | 0.156711 | 0.612779 | 0.595388 | 0.001434 | 0.001134 | 0.001396 |
| contains2_test_no_rtti.test | RUN | 0.139677 | 0.440503 | 0.471351 | 0.001091 | 0.001351 | 0.001306 |
| contains3_test.test | RUN | 0.124796 | 0.343848 | 0.412821 | 0.000995 | 0.001225 | 0.001121 |
| contains3_test_no_rtti.test | RUN | 0.081877 | 0.296427 | 0.283513 | 0.000811 | 0.000838 | 0.000904 |
| issue_53.test | COMPILE | 0.073416 | 0.178952 | 0.214047 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.993× | 0.987×, 1.000× | 1.001× |
| clang | 0.984× | 0.988×, 0.980× | 1.008× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44801983152).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000745s | 0.000730s | 0.000735s | byte equality observed |
| contains2_test.test | 10 | 0.000734s | 0.000719s | 0.000728s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000731s | 0.000729s | 0.000734s | byte equality observed |
| contains3_test.test | 10 | 0.000724s | 0.000712s | 0.000743s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000731s | 0.000738s | 0.000739s | byte equality observed |
| contains_test.test | 10 | 0.000735s | 0.000728s | 0.000741s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.000745s | 0.000749s | 0.000740s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.000734s | 0.000755s | 0.000738s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.000744s | 0.000760s | 0.000761s | byte equality observed |
| function_arith_portable.test | 10 | 0.000749s | 0.000759s | 0.000760s | byte equality observed |
| function_n_test.test | 10 | 0.000751s | 0.000753s | 0.000752s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000712s | 0.000722s | 0.000723s | byte equality observed |
| function_ref_portable.test | 10 | 0.000722s | 0.000737s | 0.000725s | byte equality observed |
| function_test.test | 10 | 0.000790s | 0.000787s | 0.000782s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.000798s | 0.000783s | 0.000795s | byte equality observed |
| lambda_test.test | 10 | 0.000755s | 0.000735s | 0.000741s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.000767s | 0.000735s | 0.000741s | byte equality observed |
| mem_fun_portable.test | 10 | 0.000761s | 0.000801s | 0.000740s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.000831s | 0.000865s | 0.000778s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.000892s | 0.000857s | 0.000768s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.000894s | 0.000866s | 0.000781s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.000805s | 0.000820s | 0.000789s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.000809s | 0.000802s | 0.000790s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.000828s | 0.000790s | 0.000773s | byte equality observed |
| nothrow_swap.test | 10 | 0.000825s | 0.000802s | 0.000798s | byte equality observed |
| quick.test | 10 | 0.000816s | 0.000822s | 0.000797s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.000807s | 0.000778s | 0.000804s | byte equality observed |
| result_arg_types_test.test | 10 | 0.000825s | 0.000796s | 0.000828s | byte equality observed |
| return_function_shared.test | 10 | 0.000857s | 0.000874s | 0.000854s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.000867s | 0.000873s | 0.000882s | byte equality observed |
| return_function_shared_14.test | 10 | 0.000863s | 0.000873s | 0.000887s | byte equality observed |
| return_function_static.test | 10 | 0.000813s | 0.000828s | 0.000819s | byte equality observed |
| return_function_static_0x.test | 10 | 0.000800s | 0.000797s | 0.000800s | byte equality observed |
| return_function_static_14.test | 10 | 0.000827s | 0.000812s | 0.000790s | byte equality observed |
| rvalues_test.test | 10 | 0.000830s | 0.000813s | 0.000793s | byte equality observed |
| stateless_test.test | 10 | 0.000806s | 0.000801s | 0.000793s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000798s | 0.000801s | 0.000807s | byte equality observed |
| std_bind_portable.test | 10 | 0.000802s | 0.000814s | 0.000788s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000775s | 0.000788s | 0.000772s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000787s | 0.000790s | 0.000771s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.000877s | 0.000870s | 0.000869s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.000818s | 0.000840s | 0.000847s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44801983152).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
