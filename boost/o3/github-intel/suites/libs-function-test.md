# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.244874 | 1.364579 | 1.109423 | 0.001160 | 0.001256 | 0.001255 |
| function_test_no_rtti.test | RUN | 0.241102 | 1.353267 | 1.111529 | 0.001251 | 0.001337 | 0.001128 |
| function_n_test.test | RUN | 0.224460 | 1.101432 | 0.925971 | 0.001312 | 0.001107 | 0.001238 |
| allocator_test.test | RUN | 0.175882 | 0.624337 | 0.614634 | 0.001504 | 0.001315 | 0.001249 |
| stateless_test.test | RUN | 0.128793 | 0.320958 | 0.393354 | 0.001246 | 0.001237 | 0.001187 |
| lambda_test.test | RUN | 0.279507 | 0.804840 | 0.852276 | 0.001231 | 0.001211 | 0.001160 |
| function_test_fail1.test | COMPILE_FAIL | 0.097944 | 0.215379 | 0.262678 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.100245 | 0.221393 | 0.264931 | — | — | — |
| function_30.test | COMPILE | 0.102798 | 0.225930 | 0.276433 | — | — | — |
| function_30_repeat.test | COMPILE | 0.100641 | 0.226168 | 0.277189 | — | — | — |
| function_arith_cxx98.test | RUN | 0.137061 | 0.390885 | 0.423945 | 0.001205 | 0.001304 | 0.001063 |
| function_arith_portable.test | RUN | 0.135464 | 0.363209 | 0.401700 | 0.001247 | 0.001256 | 0.001129 |
| sum_avg_cxx98.test | RUN | 0.128284 | 0.321887 | 0.378096 | 0.001100 | 0.001140 | 0.001159 |
| sum_avg_portable.test | RUN | 0.130644 | 0.294287 | 0.368487 | 0.001273 | 0.001166 | 0.001144 |
| mem_fun_cxx98.test | RUN | 0.153421 | 0.453665 | 0.480402 | 0.001515 | 0.001163 | 0.001254 |
| mem_fun_portable.test | RUN | 0.144081 | 0.413756 | 0.449154 | 0.001358 | 0.001338 | 0.001237 |
| std_bind_cxx98.test | RUN | 0.138187 | 0.383315 | 0.419450 | 0.001083 | 0.001184 | 0.001208 |
| std_bind_portable.test | RUN | 0.139940 | 0.357014 | 0.390397 | 0.001307 | 0.001237 | 0.001258 |
| function_ref_cxx98.test | RUN | 0.128061 | 0.319495 | 0.373568 | 0.001316 | 0.001221 | 0.001154 |
| function_ref_portable.test | RUN | 0.126794 | 0.292097 | 0.359913 | 0.001169 | 0.001247 | 0.001146 |
| contains_test.test | RUN | 0.162092 | 0.612424 | 0.598032 | 0.001141 | 0.001230 | 0.001059 |
| contains2_test.test | RUN | 0.149382 | 0.447350 | 0.459822 | 0.001373 | 0.001184 | 0.001123 |
| nothrow_swap.test | RUN | 0.138562 | 0.417489 | 0.444794 | 0.001589 | 0.001292 | 0.001277 |
| rvalues_test.test | RUN | 0.161302 | 0.514507 | 0.524501 | 0.001240 | 0.001293 | 0.001157 |
| function_typeof_test.test | COMPILE | 0.104105 | 0.226912 | 0.271135 | — | — | — |
| result_arg_types_test.test | RUN | 0.149222 | 0.351268 | 0.458269 | 0.001280 | 0.001221 | 0.001178 |
| result_arg_n_types_test.test | RUN | 0.161111 | 0.381646 | 0.539101 | 0.001164 | 0.001198 | 0.001257 |
| test_bad_function_call_shared.test | RUN | 0.130843 | 0.321315 | 0.381288 | 0.001279 | 0.001488 | 0.001383 |
| test_bad_function_call_static.test | RUN | 0.128808 | 0.316778 | 0.381637 | 0.001273 | 0.001188 | 0.001298 |
| mixed_cxxstd_shared.test | RUN | 0.138880 | 0.380931 | 0.429523 | 0.001263 | 0.001416 | 0.001391 |
| mixed_cxxstd_static.test | RUN | 0.138215 | 0.390375 | 0.433318 | 0.001123 | 0.001299 | 0.001223 |
| mixed_cxxstd_shared_0x.test | RUN | 0.138930 | 0.382901 | 0.426091 | 0.001409 | 0.001449 | 0.001193 |
| mixed_cxxstd_static_0x.test | RUN | 0.138944 | 0.381238 | 0.430445 | 0.001258 | 0.001213 | 0.001145 |
| mixed_cxxstd_shared_14.test | RUN | 0.137529 | 0.390705 | 0.422470 | 0.001184 | 0.001332 | 0.001185 |
| mixed_cxxstd_static_14.test | RUN | 0.137594 | 0.378459 | 0.421826 | 0.001383 | 0.001206 | 0.001254 |
| return_function_shared.test | RUN | 0.133745 | 0.382801 | 0.417971 | 0.001382 | 0.001374 | 0.001285 |
| return_function_static.test | RUN | 0.137398 | 0.381144 | 0.423263 | 0.001159 | 0.001251 | 0.001103 |
| return_function_shared_0x.test | RUN | 0.140086 | 0.383919 | 0.419885 | 0.001503 | 0.001400 | 0.001397 |
| return_function_static_0x.test | RUN | 0.134863 | 0.384457 | 0.410359 | 0.001346 | 0.001309 | 0.001241 |
| return_function_shared_14.test | RUN | 0.136705 | 0.385436 | 0.426920 | 0.001441 | 0.001259 | 0.001120 |
| return_function_static_14.test | RUN | 0.140116 | 0.385659 | 0.425517 | 0.001376 | 0.001176 | 0.001221 |
| quick.test | RUN | 0.139170 | 0.385437 | 0.419175 | 0.001351 | 0.001240 | 0.001187 |
| issue_42.test | COMPILE | 0.104601 | 0.247878 | 0.292373 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.179749 | 0.528125 | 0.606025 | 0.001185 | 0.001227 | 0.001190 |
| contains_test_no_rtti.test | RUN | 0.163120 | 0.608673 | 0.607853 | 0.001380 | 0.001199 | 0.001045 |
| contains2_test_no_rtti.test | RUN | 0.145415 | 0.448472 | 0.463454 | 0.001500 | 0.001280 | 0.001212 |
| contains3_test.test | RUN | 0.137070 | 0.343652 | 0.414592 | 0.001212 | 0.001246 | 0.001119 |
| contains3_test_no_rtti.test | RUN | 0.099291 | 0.285392 | 0.287009 | 0.000933 | 0.000823 | 0.000873 |
| issue_53.test | COMPILE | 0.084934 | 0.195603 | 0.198288 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997× | 0.999×, 0.996× | 1.018× |
| clang | 0.987× | 0.989×, 0.985× | 0.995× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45651777895).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000752s | 0.000738s | 0.000762s | byte equality observed |
| contains2_test.test | 10 | 0.000744s | 0.000745s | 0.000742s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000734s | 0.000742s | 0.000745s | byte equality observed |
| contains3_test.test | 10 | 0.000732s | 0.000737s | 0.000735s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000738s | 0.000727s | 0.000740s | byte equality observed |
| contains_test.test | 10 | 0.000752s | 0.000739s | 0.000727s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.000745s | 0.000744s | 0.000748s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.000739s | 0.000736s | 0.000742s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.000749s | 0.000739s | 0.000745s | byte equality observed |
| function_arith_portable.test | 10 | 0.000731s | 0.000746s | 0.000761s | byte equality observed |
| function_n_test.test | 10 | 0.000753s | 0.000742s | 0.000750s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000722s | 0.000717s | 0.000715s | byte equality observed |
| function_ref_portable.test | 10 | 0.000722s | 0.000704s | 0.000701s | byte equality observed |
| function_test.test | 10 | 0.000788s | 0.000770s | 0.000769s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.000783s | 0.000772s | 0.000771s | byte equality observed |
| lambda_test.test | 10 | 0.000778s | 0.000736s | 0.000733s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.000805s | 0.000738s | 0.000736s | byte equality observed |
| mem_fun_portable.test | 10 | 0.000825s | 0.000764s | 0.000735s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.000851s | 0.000846s | 0.000790s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.000836s | 0.000849s | 0.000796s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.000842s | 0.000848s | 0.000860s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.000803s | 0.000823s | 0.000820s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.000806s | 0.000815s | 0.000839s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.000813s | 0.000836s | 0.000814s | byte equality observed |
| nothrow_swap.test | 10 | 0.000814s | 0.000829s | 0.000812s | byte equality observed |
| quick.test | 10 | 0.000804s | 0.000835s | 0.000823s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.000777s | 0.000781s | 0.000828s | byte equality observed |
| result_arg_types_test.test | 10 | 0.000807s | 0.000794s | 0.000830s | byte equality observed |
| return_function_shared.test | 10 | 0.000855s | 0.000842s | 0.000878s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.000871s | 0.000857s | 0.000901s | byte equality observed |
| return_function_shared_14.test | 10 | 0.000853s | 0.000846s | 0.000878s | byte equality observed |
| return_function_static.test | 10 | 0.000808s | 0.000812s | 0.000830s | byte equality observed |
| return_function_static_0x.test | 10 | 0.000797s | 0.000810s | 0.000803s | byte equality observed |
| return_function_static_14.test | 10 | 0.000808s | 0.000776s | 0.000804s | byte equality observed |
| rvalues_test.test | 10 | 0.000828s | 0.000817s | 0.000806s | byte equality observed |
| stateless_test.test | 10 | 0.000782s | 0.000817s | 0.000803s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000800s | 0.000796s | 0.000791s | byte equality observed |
| std_bind_portable.test | 10 | 0.000807s | 0.000803s | 0.000779s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000812s | 0.000771s | 0.000784s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000782s | 0.000769s | 0.000785s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.000864s | 0.000851s | 0.000860s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.000816s | 0.000811s | 0.000821s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45651777895).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
