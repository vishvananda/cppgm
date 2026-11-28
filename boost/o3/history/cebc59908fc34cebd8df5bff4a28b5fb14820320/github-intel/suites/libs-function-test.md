# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.239874 | 1.390679 | 1.147466 | 0.001258 | 0.001461 | 0.001217 |
| function_test_no_rtti.test | RUN | 0.233985 | 1.396604 | 1.138816 | 0.001324 | 0.001353 | 0.001211 |
| function_n_test.test | RUN | 0.220497 | 1.133218 | 0.955203 | 0.001214 | 0.001534 | 0.001270 |
| allocator_test.test | RUN | 0.176963 | 0.641181 | 0.627108 | 0.001453 | 0.001552 | 0.001387 |
| stateless_test.test | RUN | 0.122052 | 0.336348 | 0.402939 | 0.001189 | 0.001455 | 0.001208 |
| lambda_test.test | RUN | 0.277262 | 0.828127 | 0.863834 | 0.001425 | 0.001378 | 0.001188 |
| function_test_fail1.test | COMPILE_FAIL | 0.097745 | 0.222741 | 0.263291 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.102303 | 0.226073 | 0.269278 | — | — | — |
| function_30.test | COMPILE | 0.102489 | 0.236764 | 0.280899 | — | — | — |
| function_30_repeat.test | COMPILE | 0.100513 | 0.234751 | 0.284756 | — | — | — |
| function_arith_cxx98.test | RUN | 0.137358 | 0.404205 | 0.431549 | 0.001296 | 0.001223 | 0.001376 |
| function_arith_portable.test | RUN | 0.135025 | 0.380666 | 0.412264 | 0.001175 | 0.001305 | 0.001223 |
| sum_avg_cxx98.test | RUN | 0.132864 | 0.328890 | 0.386905 | 0.001331 | 0.001303 | 0.001424 |
| sum_avg_portable.test | RUN | 0.131886 | 0.305385 | 0.376783 | 0.001257 | 0.001529 | 0.001363 |
| mem_fun_cxx98.test | RUN | 0.152491 | 0.469793 | 0.497771 | 0.001184 | 0.001308 | 0.001284 |
| mem_fun_portable.test | RUN | 0.142903 | 0.429861 | 0.474789 | 0.001325 | 0.001467 | 0.001319 |
| std_bind_cxx98.test | RUN | 0.135900 | 0.391722 | 0.423847 | 0.001154 | 0.001458 | 0.001303 |
| std_bind_portable.test | RUN | 0.140928 | 0.363081 | 0.399451 | 0.001132 | 0.001593 | 0.001356 |
| function_ref_cxx98.test | RUN | 0.127639 | 0.330630 | 0.387666 | 0.001259 | 0.001266 | 0.001473 |
| function_ref_portable.test | RUN | 0.126871 | 0.298016 | 0.373683 | 0.001171 | 0.001137 | 0.001313 |
| contains_test.test | RUN | 0.165284 | 0.635312 | 0.610770 | 0.001192 | 0.001437 | 0.001326 |
| contains2_test.test | RUN | 0.149955 | 0.460650 | 0.473839 | 0.001190 | 0.001310 | 0.001201 |
| nothrow_swap.test | RUN | 0.141626 | 0.427643 | 0.457886 | 0.001327 | 0.001444 | 0.001442 |
| rvalues_test.test | RUN | 0.162383 | 0.526760 | 0.528441 | 0.001310 | 0.001361 | 0.001236 |
| function_typeof_test.test | COMPILE | 0.101430 | 0.228629 | 0.279683 | — | — | — |
| result_arg_types_test.test | RUN | 0.146158 | 0.357461 | 0.473404 | 0.001133 | 0.001294 | 0.001126 |
| result_arg_n_types_test.test | RUN | 0.156689 | 0.395559 | 0.545807 | 0.001239 | 0.001391 | 0.001297 |
| test_bad_function_call_shared.test | RUN | 0.131173 | 0.328661 | 0.386338 | 0.001352 | 0.001586 | 0.001339 |
| test_bad_function_call_static.test | RUN | 0.133326 | 0.326737 | 0.383745 | 0.001219 | 0.001370 | 0.001191 |
| mixed_cxxstd_shared.test | RUN | 0.140148 | 0.393519 | 0.442213 | 0.001218 | 0.001350 | 0.001532 |
| mixed_cxxstd_static.test | RUN | 0.141341 | 0.392506 | 0.435512 | 0.001283 | 0.001259 | 0.001248 |
| mixed_cxxstd_shared_0x.test | RUN | 0.139344 | 0.387573 | 0.441400 | 0.001312 | 0.001676 | 0.001470 |
| mixed_cxxstd_static_0x.test | RUN | 0.139883 | 0.393792 | 0.438726 | 0.001492 | 0.001522 | 0.001356 |
| mixed_cxxstd_shared_14.test | RUN | 0.136264 | 0.393725 | 0.438113 | 0.001371 | 0.001486 | 0.001339 |
| mixed_cxxstd_static_14.test | RUN | 0.135726 | 0.391791 | 0.439583 | 0.001237 | 0.001555 | 0.001197 |
| return_function_shared.test | RUN | 0.134596 | 0.396491 | 0.429968 | 0.001384 | 0.001580 | 0.001283 |
| return_function_static.test | RUN | 0.137188 | 0.396387 | 0.430905 | 0.001182 | 0.001426 | 0.001310 |
| return_function_shared_0x.test | RUN | 0.134021 | 0.393432 | 0.422812 | 0.001215 | 0.001544 | 0.001292 |
| return_function_static_0x.test | RUN | 0.139558 | 0.390233 | 0.433165 | 0.001246 | 0.001460 | 0.001292 |
| return_function_shared_14.test | RUN | 0.135362 | 0.400632 | 0.429581 | 0.001452 | 0.001475 | 0.001275 |
| return_function_static_14.test | RUN | 0.133667 | 0.393043 | 0.425471 | 0.001233 | 0.001292 | 0.001307 |
| quick.test | RUN | 0.138388 | 0.392516 | 0.425027 | 0.001150 | 0.001479 | 0.001140 |
| issue_42.test | COMPILE | 0.106505 | 0.251339 | 0.280637 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.180399 | 0.542298 | 0.624260 | 0.001327 | 0.001414 | 0.001157 |
| contains_test_no_rtti.test | RUN | 0.165765 | 0.621457 | 0.607436 | 0.001117 | 0.000964 | 0.001122 |
| contains2_test_no_rtti.test | RUN | 0.145429 | 0.456317 | 0.469067 | 0.001218 | 0.001390 | 0.001222 |
| contains3_test.test | RUN | 0.134897 | 0.349544 | 0.413810 | 0.001133 | 0.001394 | 0.001322 |
| contains3_test_no_rtti.test | RUN | 0.094736 | 0.313863 | 0.288674 | 0.000897 | 0.001007 | 0.000984 |
| issue_53.test | COMPILE | 0.085810 | 0.216381 | 0.205181 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 1.007×, 0.996× | 0.991× |
| clang | 0.986× | 0.978×, 0.994× | 1.009× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46092715613).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000758s | 0.000767s | 0.000751s | byte equality observed |
| contains2_test.test | 10 | 0.000760s | 0.000746s | 0.000747s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000752s | 0.000744s | 0.000728s | byte equality observed |
| contains3_test.test | 10 | 0.000748s | 0.000751s | 0.000729s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000755s | 0.000738s | 0.000735s | byte equality observed |
| contains_test.test | 10 | 0.000744s | 0.000754s | 0.000726s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.000763s | 0.000740s | 0.000733s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.000746s | 0.000753s | 0.000729s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.000774s | 0.000757s | 0.000737s | byte equality observed |
| function_arith_portable.test | 10 | 0.000758s | 0.000754s | 0.000741s | byte equality observed |
| function_n_test.test | 10 | 0.000773s | 0.000752s | 0.000740s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000729s | 0.000718s | 0.000707s | byte equality observed |
| function_ref_portable.test | 10 | 0.000720s | 0.000702s | 0.000708s | byte equality observed |
| function_test.test | 10 | 0.000793s | 0.000779s | 0.000758s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.000792s | 0.000768s | 0.000759s | byte equality observed |
| lambda_test.test | 10 | 0.000758s | 0.000745s | 0.000730s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.000798s | 0.000784s | 0.000731s | byte equality observed |
| mem_fun_portable.test | 10 | 0.000817s | 0.000844s | 0.000728s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.000873s | 0.000847s | 0.000775s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.000864s | 0.000899s | 0.000778s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.000857s | 0.000870s | 0.000838s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.000800s | 0.000844s | 0.000794s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.000814s | 0.000813s | 0.000808s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.000809s | 0.000829s | 0.000803s | byte equality observed |
| nothrow_swap.test | 10 | 0.000805s | 0.000846s | 0.000830s | byte equality observed |
| quick.test | 10 | 0.000812s | 0.000855s | 0.000836s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.000811s | 0.000829s | 0.000833s | byte equality observed |
| result_arg_types_test.test | 10 | 0.000819s | 0.000807s | 0.000816s | byte equality observed |
| return_function_shared.test | 10 | 0.000864s | 0.000860s | 0.000872s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.000866s | 0.000889s | 0.000896s | byte equality observed |
| return_function_shared_14.test | 10 | 0.000873s | 0.000893s | 0.000866s | byte equality observed |
| return_function_static.test | 10 | 0.000815s | 0.000829s | 0.000827s | byte equality observed |
| return_function_static_0x.test | 10 | 0.000840s | 0.000818s | 0.000801s | byte equality observed |
| return_function_static_14.test | 10 | 0.000834s | 0.000842s | 0.000819s | byte equality observed |
| rvalues_test.test | 10 | 0.000807s | 0.000863s | 0.000784s | byte equality observed |
| stateless_test.test | 10 | 0.000791s | 0.000837s | 0.000812s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000780s | 0.000804s | 0.000805s | byte equality observed |
| std_bind_portable.test | 10 | 0.000802s | 0.000791s | 0.000809s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000818s | 0.000798s | 0.000791s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000797s | 0.000812s | 0.000826s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.000865s | 0.000865s | 0.000901s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.000839s | 0.000842s | 0.000833s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46092715613).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
