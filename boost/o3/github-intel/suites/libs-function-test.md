# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.235287 | 1.378255 | 1.136362 | 0.001171 | 0.001301 | 0.001299 |
| function_test_no_rtti.test | RUN | 0.233055 | 1.362881 | 1.149582 | 0.001277 | 0.001292 | 0.001232 |
| function_n_test.test | RUN | 0.218236 | 1.125854 | 0.950888 | 0.001275 | 0.001558 | 0.001342 |
| allocator_test.test | RUN | 0.174044 | 0.618411 | 0.628337 | 0.001508 | 0.001508 | 0.001302 |
| stateless_test.test | RUN | 0.133025 | 0.331574 | 0.407329 | 0.001571 | 0.001222 | 0.001308 |
| lambda_test.test | RUN | 0.286736 | 0.812160 | 0.870110 | 0.001345 | 0.001216 | 0.001277 |
| function_test_fail1.test | COMPILE_FAIL | 0.098403 | 0.223280 | 0.264276 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.103218 | 0.221722 | 0.272375 | — | — | — |
| function_30.test | COMPILE | 0.103162 | 0.230535 | 0.280154 | — | — | — |
| function_30_repeat.test | COMPILE | 0.107151 | 0.234860 | 0.278256 | — | — | — |
| function_arith_cxx98.test | RUN | 0.145079 | 0.403010 | 0.431220 | 0.001520 | 0.001301 | 0.001208 |
| function_arith_portable.test | RUN | 0.135080 | 0.371568 | 0.413005 | 0.001202 | 0.001324 | 0.001290 |
| sum_avg_cxx98.test | RUN | 0.127994 | 0.322743 | 0.390883 | 0.001121 | 0.001267 | 0.001198 |
| sum_avg_portable.test | RUN | 0.133761 | 0.294102 | 0.377229 | 0.001403 | 0.001187 | 0.001356 |
| mem_fun_cxx98.test | RUN | 0.152509 | 0.466377 | 0.492096 | 0.001472 | 0.001220 | 0.001514 |
| mem_fun_portable.test | RUN | 0.145108 | 0.425900 | 0.463946 | 0.001126 | 0.001204 | 0.001152 |
| std_bind_cxx98.test | RUN | 0.134951 | 0.391015 | 0.432603 | 0.001255 | 0.001339 | 0.001316 |
| std_bind_portable.test | RUN | 0.136001 | 0.354199 | 0.395944 | 0.001444 | 0.001419 | 0.001232 |
| function_ref_cxx98.test | RUN | 0.129262 | 0.322698 | 0.383760 | 0.001334 | 0.001217 | 0.001178 |
| function_ref_portable.test | RUN | 0.125088 | 0.296284 | 0.368908 | 0.001395 | 0.001193 | 0.001142 |
| contains_test.test | RUN | 0.160372 | 0.629470 | 0.603490 | 0.001264 | 0.001316 | 0.001347 |
| contains2_test.test | RUN | 0.149544 | 0.451862 | 0.468565 | 0.001481 | 0.001322 | 0.001218 |
| nothrow_swap.test | RUN | 0.139673 | 0.426567 | 0.446777 | 0.001383 | 0.001340 | 0.001321 |
| rvalues_test.test | RUN | 0.166697 | 0.514069 | 0.531335 | 0.001304 | 0.001250 | 0.001190 |
| function_typeof_test.test | COMPILE | 0.104825 | 0.227830 | 0.277289 | — | — | — |
| result_arg_types_test.test | RUN | 0.147007 | 0.352224 | 0.472714 | 0.001341 | 0.001289 | 0.001160 |
| result_arg_n_types_test.test | RUN | 0.160762 | 0.395426 | 0.553285 | 0.001310 | 0.001421 | 0.001369 |
| test_bad_function_call_shared.test | RUN | 0.133585 | 0.321248 | 0.387542 | 0.001318 | 0.001409 | 0.001419 |
| test_bad_function_call_static.test | RUN | 0.129590 | 0.318561 | 0.383959 | 0.001118 | 0.001355 | 0.001261 |
| mixed_cxxstd_shared.test | RUN | 0.142713 | 0.384791 | 0.440646 | 0.001328 | 0.001315 | 0.001570 |
| mixed_cxxstd_static.test | RUN | 0.136498 | 0.387596 | 0.443969 | 0.001392 | 0.001193 | 0.001112 |
| mixed_cxxstd_shared_0x.test | RUN | 0.137191 | 0.384995 | 0.434261 | 0.001374 | 0.001604 | 0.001552 |
| mixed_cxxstd_static_0x.test | RUN | 0.139653 | 0.384745 | 0.443674 | 0.001288 | 0.001442 | 0.001259 |
| mixed_cxxstd_shared_14.test | RUN | 0.136640 | 0.387017 | 0.431383 | 0.001559 | 0.001504 | 0.001413 |
| mixed_cxxstd_static_14.test | RUN | 0.133321 | 0.389317 | 0.444580 | 0.001582 | 0.001349 | 0.001296 |
| return_function_shared.test | RUN | 0.142298 | 0.392918 | 0.431366 | 0.001432 | 0.001339 | 0.001273 |
| return_function_static.test | RUN | 0.141316 | 0.393072 | 0.423718 | 0.001196 | 0.001393 | 0.001196 |
| return_function_shared_0x.test | RUN | 0.136313 | 0.392008 | 0.429713 | 0.001542 | 0.001525 | 0.001321 |
| return_function_static_0x.test | RUN | 0.143719 | 0.385666 | 0.423038 | 0.001477 | 0.001374 | 0.001432 |
| return_function_shared_14.test | RUN | 0.138428 | 0.393967 | 0.434950 | 0.001644 | 0.001283 | 0.001460 |
| return_function_static_14.test | RUN | 0.134814 | 0.391464 | 0.432090 | 0.001220 | 0.001234 | 0.001237 |
| quick.test | RUN | 0.143873 | 0.392437 | 0.430543 | 0.001199 | 0.001264 | 0.001240 |
| issue_42.test | COMPILE | 0.108702 | 0.249388 | 0.292888 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.184168 | 0.543278 | 0.636869 | 0.001206 | 0.001257 | 0.001278 |
| contains_test_no_rtti.test | RUN | 0.162612 | 0.623121 | 0.614517 | 0.001217 | 0.001110 | 0.001123 |
| contains2_test_no_rtti.test | RUN | 0.144894 | 0.445287 | 0.473139 | 0.001081 | 0.001271 | 0.001141 |
| contains3_test.test | RUN | 0.136338 | 0.343797 | 0.417802 | 0.001061 | 0.001105 | 0.001204 |
| contains3_test_no_rtti.test | RUN | 0.096318 | 0.283907 | 0.301062 | 0.001215 | 0.000953 | 0.000952 |
| issue_53.test | COMPILE | 0.084398 | 0.194082 | 0.206888 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998× | 1.010×, 0.986× | 1.014× |
| clang | 0.982× | 0.979×, 0.986× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45710374989).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000759s | 0.000747s | 0.000740s | byte equality observed |
| contains2_test.test | 10 | 0.000746s | 0.000727s | 0.000734s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000741s | 0.000727s | 0.000730s | byte equality observed |
| contains3_test.test | 10 | 0.000738s | 0.000738s | 0.000733s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000739s | 0.000750s | 0.000730s | byte equality observed |
| contains_test.test | 10 | 0.000755s | 0.000740s | 0.000723s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.000752s | 0.000748s | 0.000735s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.000751s | 0.000752s | 0.000719s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.000758s | 0.000765s | 0.000727s | byte equality observed |
| function_arith_portable.test | 10 | 0.000742s | 0.000745s | 0.000741s | byte equality observed |
| function_n_test.test | 10 | 0.000758s | 0.000743s | 0.000744s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000723s | 0.000713s | 0.000721s | byte equality observed |
| function_ref_portable.test | 10 | 0.000725s | 0.000706s | 0.000715s | byte equality observed |
| function_test.test | 10 | 0.000798s | 0.000777s | 0.000783s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.000792s | 0.000776s | 0.000780s | byte equality observed |
| lambda_test.test | 10 | 0.000734s | 0.000749s | 0.000735s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.000764s | 0.000729s | 0.000767s | byte equality observed |
| mem_fun_portable.test | 10 | 0.000776s | 0.000765s | 0.000741s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.000851s | 0.000844s | 0.000801s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.000871s | 0.000845s | 0.000783s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.000865s | 0.000851s | 0.000787s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.000825s | 0.000828s | 0.000761s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.000840s | 0.000838s | 0.000787s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.000821s | 0.000835s | 0.000781s | byte equality observed |
| nothrow_swap.test | 10 | 0.000831s | 0.000827s | 0.000793s | byte equality observed |
| quick.test | 10 | 0.000834s | 0.000822s | 0.000823s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.000833s | 0.000850s | 0.000811s | byte equality observed |
| result_arg_types_test.test | 10 | 0.000805s | 0.000798s | 0.000802s | byte equality observed |
| return_function_shared.test | 10 | 0.000868s | 0.000876s | 0.000844s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.000861s | 0.000863s | 0.000859s | byte equality observed |
| return_function_shared_14.test | 10 | 0.000867s | 0.000866s | 0.000836s | byte equality observed |
| return_function_static.test | 10 | 0.000836s | 0.000795s | 0.000832s | byte equality observed |
| return_function_static_0x.test | 10 | 0.000802s | 0.000812s | 0.000795s | byte equality observed |
| return_function_static_14.test | 10 | 0.000817s | 0.000861s | 0.000840s | byte equality observed |
| rvalues_test.test | 10 | 0.000835s | 0.000834s | 0.000787s | byte equality observed |
| stateless_test.test | 10 | 0.000801s | 0.000839s | 0.000786s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000778s | 0.000817s | 0.000787s | byte equality observed |
| std_bind_portable.test | 10 | 0.000810s | 0.000794s | 0.000780s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000809s | 0.000803s | 0.000791s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000784s | 0.000808s | 0.000819s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.000877s | 0.000861s | 0.000863s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.000839s | 0.000862s | 0.000844s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45710374989).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
