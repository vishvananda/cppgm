# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.231443 | 1.355336 | 1.136803 | 0.001048 | 0.001372 | 0.001203 |
| function_test_no_rtti.test | RUN | 0.227234 | 1.361775 | 1.137366 | 0.001302 | 0.001377 | 0.001237 |
| function_n_test.test | RUN | 0.212430 | 1.101611 | 0.957329 | 0.001241 | 0.001359 | 0.001334 |
| allocator_test.test | RUN | 0.170122 | 0.621484 | 0.621926 | 0.001361 | 0.001343 | 0.001352 |
| stateless_test.test | RUN | 0.124160 | 0.328087 | 0.398575 | 0.001085 | 0.001364 | 0.001206 |
| lambda_test.test | RUN | 0.266830 | 0.807863 | 0.863671 | 0.001098 | 0.001334 | 0.001169 |
| function_test_fail1.test | COMPILE_FAIL | 0.086382 | 0.219735 | 0.273293 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.092913 | 0.219841 | 0.274981 | — | — | — |
| function_30.test | COMPILE | 0.096694 | 0.231039 | 0.278725 | — | — | — |
| function_30_repeat.test | COMPILE | 0.093504 | 0.231107 | 0.283689 | — | — | — |
| function_arith_cxx98.test | RUN | 0.123067 | 0.399710 | 0.434020 | 0.001179 | 0.001208 | 0.001230 |
| function_arith_portable.test | RUN | 0.122963 | 0.369747 | 0.409173 | 0.001044 | 0.001237 | 0.001258 |
| sum_avg_cxx98.test | RUN | 0.121945 | 0.325517 | 0.380690 | 0.001018 | 0.001146 | 0.001348 |
| sum_avg_portable.test | RUN | 0.120503 | 0.298194 | 0.376870 | 0.001098 | 0.001340 | 0.001367 |
| mem_fun_cxx98.test | RUN | 0.135965 | 0.463873 | 0.493212 | 0.001201 | 0.001149 | 0.001412 |
| mem_fun_portable.test | RUN | 0.137095 | 0.424533 | 0.460607 | 0.001099 | 0.001255 | 0.001263 |
| std_bind_cxx98.test | RUN | 0.129312 | 0.386230 | 0.427342 | 0.001218 | 0.001318 | 0.001357 |
| std_bind_portable.test | RUN | 0.127837 | 0.359240 | 0.395664 | 0.000947 | 0.001281 | 0.001371 |
| function_ref_cxx98.test | RUN | 0.118483 | 0.324757 | 0.386087 | 0.000991 | 0.001250 | 0.001240 |
| function_ref_portable.test | RUN | 0.117710 | 0.290981 | 0.353165 | 0.001115 | 0.001266 | 0.001089 |
| contains_test.test | RUN | 0.149041 | 0.630204 | 0.609269 | 0.001102 | 0.001272 | 0.001128 |
| contains2_test.test | RUN | 0.136371 | 0.453113 | 0.467918 | 0.001039 | 0.001278 | 0.001233 |
| nothrow_swap.test | RUN | 0.125137 | 0.424177 | 0.449042 | 0.001072 | 0.001378 | 0.001290 |
| rvalues_test.test | RUN | 0.147354 | 0.518530 | 0.526801 | 0.001045 | 0.001327 | 0.001293 |
| function_typeof_test.test | COMPILE | 0.097439 | 0.227328 | 0.272749 | — | — | — |
| result_arg_types_test.test | RUN | 0.139743 | 0.356504 | 0.461385 | 0.001020 | 0.001183 | 0.001074 |
| result_arg_n_types_test.test | RUN | 0.144364 | 0.391520 | 0.550320 | 0.001074 | 0.001176 | 0.001235 |
| test_bad_function_call_shared.test | RUN | 0.121921 | 0.325596 | 0.399277 | 0.001165 | 0.001298 | 0.001378 |
| test_bad_function_call_static.test | RUN | 0.116139 | 0.322104 | 0.388508 | 0.001019 | 0.001244 | 0.001428 |
| mixed_cxxstd_shared.test | RUN | 0.129608 | 0.384579 | 0.443173 | 0.001216 | 0.001285 | 0.001251 |
| mixed_cxxstd_static.test | RUN | 0.125627 | 0.384425 | 0.441325 | 0.001051 | 0.001410 | 0.001068 |
| mixed_cxxstd_shared_0x.test | RUN | 0.127769 | 0.386454 | 0.449074 | 0.001193 | 0.001481 | 0.001373 |
| mixed_cxxstd_static_0x.test | RUN | 0.132985 | 0.383770 | 0.434628 | 0.001122 | 0.001314 | 0.001208 |
| mixed_cxxstd_shared_14.test | RUN | 0.126856 | 0.384545 | 0.442568 | 0.001147 | 0.001412 | 0.001465 |
| mixed_cxxstd_static_14.test | RUN | 0.126737 | 0.384939 | 0.440942 | 0.001087 | 0.001264 | 0.001307 |
| return_function_shared.test | RUN | 0.118916 | 0.387474 | 0.432169 | 0.001249 | 0.001377 | 0.001482 |
| return_function_static.test | RUN | 0.125836 | 0.389733 | 0.429924 | 0.001170 | 0.001263 | 0.001297 |
| return_function_shared_0x.test | RUN | 0.128702 | 0.389305 | 0.441303 | 0.001122 | 0.001299 | 0.001579 |
| return_function_static_0x.test | RUN | 0.120386 | 0.386076 | 0.439016 | 0.001028 | 0.001234 | 0.001277 |
| return_function_shared_14.test | RUN | 0.124207 | 0.389909 | 0.436333 | 0.001144 | 0.001414 | 0.001226 |
| return_function_static_14.test | RUN | 0.130728 | 0.385546 | 0.434141 | 0.001017 | 0.001473 | 0.001417 |
| quick.test | RUN | 0.127292 | 0.390489 | 0.419939 | 0.001083 | 0.001251 | 0.001241 |
| issue_42.test | COMPILE | 0.098723 | 0.247836 | 0.284051 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.172114 | 0.539376 | 0.640584 | 0.001095 | 0.001351 | 0.001252 |
| contains_test_no_rtti.test | RUN | 0.155301 | 0.618791 | 0.608068 | 0.001102 | 0.001294 | 0.001195 |
| contains2_test_no_rtti.test | RUN | 0.134817 | 0.437391 | 0.477645 | 0.000946 | 0.001404 | 0.001084 |
| contains3_test.test | RUN | 0.125008 | 0.342527 | 0.420630 | 0.001060 | 0.001247 | 0.001367 |
| contains3_test_no_rtti.test | RUN | 0.085681 | 0.280882 | 0.281155 | 0.000803 | 0.001178 | 0.000987 |
| issue_53.test | COMPILE | 0.079757 | 0.206451 | 0.211535 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 0.988×, 1.015× | 0.997× |
| clang | 0.982× | 0.978×, 0.985× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44774088589).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000746s | 0.000741s | 0.000738s | byte equality observed |
| contains2_test.test | 10 | 0.000743s | 0.000750s | 0.000720s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000741s | 0.000750s | 0.000723s | byte equality observed |
| contains3_test.test | 10 | 0.000741s | 0.000719s | 0.000721s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000739s | 0.000723s | 0.000734s | byte equality observed |
| contains_test.test | 10 | 0.000739s | 0.000740s | 0.000722s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.000729s | 0.000743s | 0.000741s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.000729s | 0.000738s | 0.000739s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.000739s | 0.000748s | 0.000745s | byte equality observed |
| function_arith_portable.test | 10 | 0.000737s | 0.000757s | 0.000738s | byte equality observed |
| function_n_test.test | 10 | 0.000751s | 0.000744s | 0.000738s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000715s | 0.000727s | 0.000707s | byte equality observed |
| function_ref_portable.test | 10 | 0.000733s | 0.000716s | 0.000701s | byte equality observed |
| function_test.test | 10 | 0.000791s | 0.000775s | 0.000771s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.000773s | 0.000782s | 0.000758s | byte equality observed |
| lambda_test.test | 10 | 0.000763s | 0.000735s | 0.000731s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.000752s | 0.000741s | 0.000736s | byte equality observed |
| mem_fun_portable.test | 10 | 0.000788s | 0.000774s | 0.000721s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.000841s | 0.000838s | 0.000771s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.000850s | 0.000878s | 0.000796s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.000865s | 0.000887s | 0.000779s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.000829s | 0.000835s | 0.000770s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.000810s | 0.000819s | 0.000803s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.000808s | 0.000802s | 0.000784s | byte equality observed |
| nothrow_swap.test | 10 | 0.000838s | 0.000827s | 0.000821s | byte equality observed |
| quick.test | 10 | 0.000848s | 0.000814s | 0.000820s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.000835s | 0.000837s | 0.000831s | byte equality observed |
| result_arg_types_test.test | 10 | 0.000850s | 0.000843s | 0.000847s | byte equality observed |
| return_function_shared.test | 10 | 0.000884s | 0.000884s | 0.000862s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.000872s | 0.000894s | 0.000857s | byte equality observed |
| return_function_shared_14.test | 10 | 0.000874s | 0.000883s | 0.000876s | byte equality observed |
| return_function_static.test | 10 | 0.000843s | 0.000850s | 0.000811s | byte equality observed |
| return_function_static_0x.test | 10 | 0.000807s | 0.000832s | 0.000799s | byte equality observed |
| return_function_static_14.test | 10 | 0.000814s | 0.000829s | 0.000785s | byte equality observed |
| rvalues_test.test | 10 | 0.000836s | 0.000832s | 0.000820s | byte equality observed |
| stateless_test.test | 10 | 0.000827s | 0.000836s | 0.000843s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000804s | 0.000807s | 0.000794s | byte equality observed |
| std_bind_portable.test | 10 | 0.000787s | 0.000776s | 0.000798s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000801s | 0.000770s | 0.000813s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000785s | 0.000806s | 0.000815s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.000877s | 0.000869s | 0.000860s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.000852s | 0.000843s | 0.000819s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44774088589).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
