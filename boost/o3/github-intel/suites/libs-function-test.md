# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.243461 | 1.378071 | 1.135890 | 0.001419 | 0.001388 | 0.001404 |
| function_test_no_rtti.test | RUN | 0.237701 | 1.374307 | 1.153027 | 0.001421 | 0.001361 | 0.001195 |
| function_n_test.test | RUN | 0.225685 | 1.109341 | 0.943316 | 0.001326 | 0.001271 | 0.001392 |
| allocator_test.test | RUN | 0.179852 | 0.626117 | 0.631239 | 0.001635 | 0.001289 | 0.001387 |
| stateless_test.test | RUN | 0.132572 | 0.328254 | 0.404744 | 0.001526 | 0.001344 | 0.001215 |
| lambda_test.test | RUN | 0.283294 | 0.817862 | 0.860133 | 0.001523 | 0.001276 | 0.001354 |
| function_test_fail1.test | COMPILE_FAIL | 0.098510 | 0.221714 | 0.263269 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.101508 | 0.224460 | 0.268878 | — | — | — |
| function_30.test | COMPILE | 0.102512 | 0.229462 | 0.279144 | — | — | — |
| function_30_repeat.test | COMPILE | 0.104996 | 0.232663 | 0.285337 | — | — | — |
| function_arith_cxx98.test | RUN | 0.138646 | 0.402625 | 0.430257 | 0.001694 | 0.001106 | 0.001308 |
| function_arith_portable.test | RUN | 0.134638 | 0.374362 | 0.410313 | 0.001111 | 0.001316 | 0.001218 |
| sum_avg_cxx98.test | RUN | 0.131890 | 0.327485 | 0.376219 | 0.001037 | 0.001256 | 0.001283 |
| sum_avg_portable.test | RUN | 0.132323 | 0.298581 | 0.370960 | 0.001418 | 0.001388 | 0.001339 |
| mem_fun_cxx98.test | RUN | 0.149786 | 0.473521 | 0.487373 | 0.001551 | 0.001374 | 0.001167 |
| mem_fun_portable.test | RUN | 0.146822 | 0.420727 | 0.451032 | 0.001180 | 0.001281 | 0.001007 |
| std_bind_cxx98.test | RUN | 0.140543 | 0.386828 | 0.424949 | 0.001191 | 0.001331 | 0.001316 |
| std_bind_portable.test | RUN | 0.139429 | 0.362537 | 0.393718 | 0.001457 | 0.001422 | 0.001316 |
| function_ref_cxx98.test | RUN | 0.129184 | 0.322926 | 0.382350 | 0.001216 | 0.001144 | 0.000984 |
| function_ref_portable.test | RUN | 0.127859 | 0.296395 | 0.368398 | 0.001407 | 0.001151 | 0.001037 |
| contains_test.test | RUN | 0.166060 | 0.623883 | 0.608356 | 0.001335 | 0.001372 | 0.001304 |
| contains2_test.test | RUN | 0.150003 | 0.450552 | 0.471655 | 0.001297 | 0.001323 | 0.001159 |
| nothrow_swap.test | RUN | 0.143995 | 0.421735 | 0.453477 | 0.001661 | 0.001338 | 0.001521 |
| rvalues_test.test | RUN | 0.157443 | 0.518651 | 0.522994 | 0.001590 | 0.001334 | 0.001253 |
| function_typeof_test.test | COMPILE | 0.101889 | 0.224774 | 0.283512 | — | — | — |
| result_arg_types_test.test | RUN | 0.146586 | 0.356981 | 0.477114 | 0.001170 | 0.001248 | 0.001152 |
| result_arg_n_types_test.test | RUN | 0.158786 | 0.391731 | 0.546919 | 0.001004 | 0.001220 | 0.001305 |
| test_bad_function_call_shared.test | RUN | 0.132414 | 0.331210 | 0.388146 | 0.001267 | 0.001566 | 0.001366 |
| test_bad_function_call_static.test | RUN | 0.132048 | 0.325744 | 0.386677 | 0.001268 | 0.001422 | 0.001249 |
| mixed_cxxstd_shared.test | RUN | 0.139614 | 0.386051 | 0.437870 | 0.001308 | 0.001346 | 0.001354 |
| mixed_cxxstd_static.test | RUN | 0.137587 | 0.390574 | 0.440626 | 0.001196 | 0.001371 | 0.001280 |
| mixed_cxxstd_shared_0x.test | RUN | 0.139230 | 0.386946 | 0.446153 | 0.001486 | 0.001575 | 0.001449 |
| mixed_cxxstd_static_0x.test | RUN | 0.137833 | 0.384320 | 0.452473 | 0.001180 | 0.001267 | 0.001218 |
| mixed_cxxstd_shared_14.test | RUN | 0.139014 | 0.388177 | 0.448460 | 0.001442 | 0.001476 | 0.001226 |
| mixed_cxxstd_static_14.test | RUN | 0.142238 | 0.386474 | 0.428742 | 0.001492 | 0.001490 | 0.001302 |
| return_function_shared.test | RUN | 0.134633 | 0.387653 | 0.429254 | 0.001315 | 0.001544 | 0.001283 |
| return_function_static.test | RUN | 0.135483 | 0.387893 | 0.429429 | 0.001209 | 0.001258 | 0.001246 |
| return_function_shared_0x.test | RUN | 0.139206 | 0.391166 | 0.432517 | 0.001512 | 0.001551 | 0.001448 |
| return_function_static_0x.test | RUN | 0.135660 | 0.395455 | 0.418694 | 0.001326 | 0.001219 | 0.001295 |
| return_function_shared_14.test | RUN | 0.140773 | 0.388910 | 0.434280 | 0.001502 | 0.001291 | 0.001451 |
| return_function_static_14.test | RUN | 0.134714 | 0.389428 | 0.434499 | 0.001545 | 0.001462 | 0.001200 |
| quick.test | RUN | 0.142414 | 0.388876 | 0.426714 | 0.001243 | 0.001656 | 0.001150 |
| issue_42.test | COMPILE | 0.110394 | 0.250173 | 0.282823 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.183385 | 0.539131 | 0.625156 | 0.001224 | 0.001343 | 0.001295 |
| contains_test_no_rtti.test | RUN | 0.162479 | 0.624873 | 0.606386 | 0.001408 | 0.000911 | 0.001433 |
| contains2_test_no_rtti.test | RUN | 0.146130 | 0.447493 | 0.475891 | 0.001351 | 0.001107 | 0.001174 |
| contains3_test.test | RUN | 0.136308 | 0.344200 | 0.407170 | 0.000923 | 0.001356 | 0.001129 |
| contains3_test_no_rtti.test | RUN | 0.092706 | 0.300918 | 0.296133 | 0.001122 | 0.000898 | 0.000867 |
| issue_53.test | COMPILE | 0.083132 | 0.216451 | 0.202820 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.996× | 0.992×, 1.000× | 0.989× |
| clang | 0.990× | 0.979×, 1.000× | 1.015× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45697047144).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000755s | 0.000770s | 0.000745s | byte equality observed |
| contains2_test.test | 10 | 0.000754s | 0.000746s | 0.000755s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000757s | 0.000736s | 0.000740s | byte equality observed |
| contains3_test.test | 10 | 0.000737s | 0.000733s | 0.000741s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000736s | 0.000756s | 0.000740s | byte equality observed |
| contains_test.test | 10 | 0.000747s | 0.000743s | 0.000744s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.000750s | 0.000739s | 0.000732s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.000736s | 0.000741s | 0.000736s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.000751s | 0.000757s | 0.000763s | byte equality observed |
| function_arith_portable.test | 10 | 0.000756s | 0.000746s | 0.000734s | byte equality observed |
| function_n_test.test | 10 | 0.000750s | 0.000750s | 0.000753s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000722s | 0.000729s | 0.000723s | byte equality observed |
| function_ref_portable.test | 10 | 0.000729s | 0.000733s | 0.000749s | byte equality observed |
| function_test.test | 10 | 0.000787s | 0.000777s | 0.000779s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.000786s | 0.000790s | 0.000779s | byte equality observed |
| lambda_test.test | 10 | 0.000765s | 0.000759s | 0.000740s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.000817s | 0.000745s | 0.000744s | byte equality observed |
| mem_fun_portable.test | 10 | 0.000797s | 0.000728s | 0.000748s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.000873s | 0.000862s | 0.000785s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.000894s | 0.000888s | 0.000800s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.000882s | 0.000874s | 0.000872s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.000827s | 0.000802s | 0.000805s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.000833s | 0.000817s | 0.000826s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.000827s | 0.000837s | 0.000836s | byte equality observed |
| nothrow_swap.test | 10 | 0.000837s | 0.000819s | 0.000848s | byte equality observed |
| quick.test | 10 | 0.000829s | 0.000819s | 0.000849s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.000812s | 0.000811s | 0.000827s | byte equality observed |
| result_arg_types_test.test | 10 | 0.000800s | 0.000796s | 0.000826s | byte equality observed |
| return_function_shared.test | 10 | 0.000847s | 0.000859s | 0.000878s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.000846s | 0.000849s | 0.000879s | byte equality observed |
| return_function_shared_14.test | 10 | 0.000861s | 0.000848s | 0.000854s | byte equality observed |
| return_function_static.test | 10 | 0.000808s | 0.000829s | 0.000803s | byte equality observed |
| return_function_static_0x.test | 10 | 0.000821s | 0.000851s | 0.000821s | byte equality observed |
| return_function_static_14.test | 10 | 0.000834s | 0.000838s | 0.000819s | byte equality observed |
| rvalues_test.test | 10 | 0.000850s | 0.000842s | 0.000846s | byte equality observed |
| stateless_test.test | 10 | 0.000830s | 0.000839s | 0.000859s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000809s | 0.000785s | 0.000790s | byte equality observed |
| std_bind_portable.test | 10 | 0.000818s | 0.000774s | 0.000809s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000808s | 0.000796s | 0.000814s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000796s | 0.000815s | 0.000793s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.000880s | 0.000877s | 0.000893s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.000825s | 0.000841s | 0.000853s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45697047144).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
