# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.239922 | 1.382624 | 1.144950 | 0.001166 | 0.001255 | 0.001077 |
| function_test_no_rtti.test | RUN | 0.235898 | 1.374672 | 1.134824 | 0.001219 | 0.001433 | 0.001247 |
| function_n_test.test | RUN | 0.221928 | 1.121421 | 0.954579 | 0.001266 | 0.001251 | 0.001308 |
| allocator_test.test | RUN | 0.178105 | 0.624080 | 0.622058 | 0.001350 | 0.001302 | 0.001388 |
| stateless_test.test | RUN | 0.130490 | 0.325040 | 0.398484 | 0.001205 | 0.001239 | 0.001204 |
| lambda_test.test | RUN | 0.275562 | 0.807186 | 0.859139 | 0.001244 | 0.001263 | 0.001240 |
| function_test_fail1.test | COMPILE_FAIL | 0.095910 | 0.219622 | 0.270920 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.099342 | 0.220191 | 0.269747 | — | — | — |
| function_30.test | COMPILE | 0.103396 | 0.232693 | 0.277562 | — | — | — |
| function_30_repeat.test | COMPILE | 0.099219 | 0.232170 | 0.281063 | — | — | — |
| function_arith_cxx98.test | RUN | 0.136399 | 0.401532 | 0.437026 | 0.001451 | 0.001180 | 0.001208 |
| function_arith_portable.test | RUN | 0.135922 | 0.369484 | 0.411800 | 0.001267 | 0.001217 | 0.001386 |
| sum_avg_cxx98.test | RUN | 0.129065 | 0.321560 | 0.381014 | 0.001105 | 0.001276 | 0.001327 |
| sum_avg_portable.test | RUN | 0.129527 | 0.294378 | 0.379469 | 0.001163 | 0.001352 | 0.001220 |
| mem_fun_cxx98.test | RUN | 0.147599 | 0.463843 | 0.484086 | 0.001567 | 0.001299 | 0.001349 |
| mem_fun_portable.test | RUN | 0.145626 | 0.428023 | 0.452539 | 0.001129 | 0.001233 | 0.001254 |
| std_bind_cxx98.test | RUN | 0.138601 | 0.383655 | 0.429320 | 0.001131 | 0.001282 | 0.001198 |
| std_bind_portable.test | RUN | 0.141593 | 0.362009 | 0.394545 | 0.001217 | 0.001451 | 0.001173 |
| function_ref_cxx98.test | RUN | 0.130765 | 0.322741 | 0.380237 | 0.001386 | 0.001290 | 0.001092 |
| function_ref_portable.test | RUN | 0.125503 | 0.292200 | 0.367180 | 0.001370 | 0.001051 | 0.001098 |
| contains_test.test | RUN | 0.159463 | 0.624110 | 0.609743 | 0.000965 | 0.001250 | 0.001223 |
| contains2_test.test | RUN | 0.144442 | 0.448369 | 0.468723 | 0.001226 | 0.001257 | 0.001165 |
| nothrow_swap.test | RUN | 0.140526 | 0.419922 | 0.453430 | 0.001245 | 0.001343 | 0.001336 |
| rvalues_test.test | RUN | 0.157376 | 0.513170 | 0.522015 | 0.001244 | 0.001202 | 0.001358 |
| function_typeof_test.test | COMPILE | 0.100360 | 0.223655 | 0.271081 | — | — | — |
| result_arg_types_test.test | RUN | 0.147504 | 0.355840 | 0.469401 | 0.001238 | 0.001107 | 0.001338 |
| result_arg_n_types_test.test | RUN | 0.162443 | 0.391795 | 0.547912 | 0.001160 | 0.001473 | 0.001280 |
| test_bad_function_call_shared.test | RUN | 0.133944 | 0.321323 | 0.395441 | 0.001316 | 0.001259 | 0.001300 |
| test_bad_function_call_static.test | RUN | 0.127470 | 0.324754 | 0.383042 | 0.001267 | 0.001293 | 0.001360 |
| mixed_cxxstd_shared.test | RUN | 0.135074 | 0.386084 | 0.439682 | 0.001316 | 0.001404 | 0.001531 |
| mixed_cxxstd_static.test | RUN | 0.136745 | 0.390582 | 0.433660 | 0.001034 | 0.001328 | 0.001303 |
| mixed_cxxstd_shared_0x.test | RUN | 0.138453 | 0.390558 | 0.451142 | 0.001225 | 0.001565 | 0.001372 |
| mixed_cxxstd_static_0x.test | RUN | 0.131171 | 0.390453 | 0.439116 | 0.001181 | 0.001453 | 0.001398 |
| mixed_cxxstd_shared_14.test | RUN | 0.137014 | 0.389408 | 0.445715 | 0.001209 | 0.001473 | 0.001463 |
| mixed_cxxstd_static_14.test | RUN | 0.141026 | 0.391866 | 0.439585 | 0.001361 | 0.001466 | 0.001446 |
| return_function_shared.test | RUN | 0.134958 | 0.393604 | 0.440476 | 0.001435 | 0.001367 | 0.001236 |
| return_function_static.test | RUN | 0.135154 | 0.394423 | 0.436629 | 0.001230 | 0.001176 | 0.001276 |
| return_function_shared_0x.test | RUN | 0.140521 | 0.391749 | 0.431139 | 0.001564 | 0.001441 | 0.001547 |
| return_function_static_0x.test | RUN | 0.139975 | 0.385366 | 0.435744 | 0.001181 | 0.001354 | 0.001312 |
| return_function_shared_14.test | RUN | 0.136850 | 0.394715 | 0.429053 | 0.001443 | 0.001415 | 0.001235 |
| return_function_static_14.test | RUN | 0.134755 | 0.383442 | 0.436093 | 0.001296 | 0.001440 | 0.001178 |
| quick.test | RUN | 0.141791 | 0.391497 | 0.430795 | 0.001153 | 0.001253 | 0.001204 |
| issue_42.test | COMPILE | 0.108593 | 0.251703 | 0.297054 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.177905 | 0.537306 | 0.634122 | 0.001129 | 0.001462 | 0.001205 |
| contains_test_no_rtti.test | RUN | 0.161697 | 0.623190 | 0.615923 | 0.001356 | 0.001287 | 0.001258 |
| contains2_test_no_rtti.test | RUN | 0.146618 | 0.451694 | 0.483003 | 0.001087 | 0.001276 | 0.001244 |
| contains3_test.test | RUN | 0.135266 | 0.345291 | 0.424381 | 0.001290 | 0.001256 | 0.001190 |
| contains3_test_no_rtti.test | RUN | 0.104320 | 0.300115 | 0.293348 | 0.000948 | 0.000980 | 0.000961 |
| issue_53.test | COMPILE | 0.083766 | 0.202022 | 0.208840 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.999× | 0.992×, 1.007× | 0.987× |
| clang | 0.976× | 0.972×, 0.981× | 0.979× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45617981312).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000762s | 0.000767s | 0.000758s | byte equality observed |
| contains2_test.test | 10 | 0.000740s | 0.000747s | 0.000735s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000742s | 0.000743s | 0.000740s | byte equality observed |
| contains3_test.test | 10 | 0.000755s | 0.000724s | 0.000734s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000734s | 0.000753s | 0.000729s | byte equality observed |
| contains_test.test | 10 | 0.000769s | 0.000746s | 0.000733s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.000747s | 0.000735s | 0.000740s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.000727s | 0.000741s | 0.000727s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.000748s | 0.000766s | 0.000743s | byte equality observed |
| function_arith_portable.test | 10 | 0.000741s | 0.000748s | 0.000732s | byte equality observed |
| function_n_test.test | 10 | 0.000749s | 0.000750s | 0.000750s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000732s | 0.000740s | 0.000724s | byte equality observed |
| function_ref_portable.test | 10 | 0.000733s | 0.000728s | 0.000715s | byte equality observed |
| function_test.test | 10 | 0.000808s | 0.000795s | 0.000783s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.000787s | 0.000779s | 0.000775s | byte equality observed |
| lambda_test.test | 10 | 0.000767s | 0.000733s | 0.000743s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.000816s | 0.000768s | 0.000745s | byte equality observed |
| mem_fun_portable.test | 10 | 0.000815s | 0.000794s | 0.000731s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.000881s | 0.000911s | 0.000791s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.000886s | 0.000867s | 0.000805s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.000898s | 0.000887s | 0.000832s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.000831s | 0.000841s | 0.000809s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.000827s | 0.000845s | 0.000826s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.000822s | 0.000823s | 0.000816s | byte equality observed |
| nothrow_swap.test | 10 | 0.000840s | 0.000823s | 0.000825s | byte equality observed |
| quick.test | 10 | 0.000831s | 0.000801s | 0.000840s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.000825s | 0.000803s | 0.000846s | byte equality observed |
| result_arg_types_test.test | 10 | 0.000831s | 0.000817s | 0.000833s | byte equality observed |
| return_function_shared.test | 10 | 0.000868s | 0.000845s | 0.000874s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.000882s | 0.000861s | 0.000856s | byte equality observed |
| return_function_shared_14.test | 10 | 0.000882s | 0.000873s | 0.000891s | byte equality observed |
| return_function_static.test | 10 | 0.000841s | 0.000810s | 0.000854s | byte equality observed |
| return_function_static_0x.test | 10 | 0.000821s | 0.000835s | 0.000817s | byte equality observed |
| return_function_static_14.test | 10 | 0.000831s | 0.000835s | 0.000829s | byte equality observed |
| rvalues_test.test | 10 | 0.000832s | 0.000809s | 0.000837s | byte equality observed |
| stateless_test.test | 10 | 0.000818s | 0.000810s | 0.000831s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000814s | 0.000781s | 0.000797s | byte equality observed |
| std_bind_portable.test | 10 | 0.000802s | 0.000789s | 0.000782s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000811s | 0.000834s | 0.000816s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000787s | 0.000783s | 0.000811s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.000880s | 0.000877s | 0.000877s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.000842s | 0.000857s | 0.000864s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45617981312).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
