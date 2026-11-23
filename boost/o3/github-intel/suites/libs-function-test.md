# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.231003 | 1.340454 | 1.119302 | 0.001256 | 0.001444 | 0.001069 |
| function_test_no_rtti.test | RUN | 0.230580 | 1.348263 | 1.122004 | 0.001188 | 0.001423 | 0.001250 |
| function_n_test.test | RUN | 0.216178 | 1.084611 | 0.940895 | 0.001270 | 0.001157 | 0.001317 |
| allocator_test.test | RUN | 0.172450 | 0.618611 | 0.619274 | 0.001450 | 0.001275 | 0.001248 |
| stateless_test.test | RUN | 0.123982 | 0.317393 | 0.396522 | 0.001068 | 0.001215 | 0.001140 |
| lambda_test.test | RUN | 0.268094 | 0.795779 | 0.855119 | 0.001220 | 0.001208 | 0.001239 |
| function_test_fail1.test | COMPILE_FAIL | 0.094987 | 0.219329 | 0.263434 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.094755 | 0.218955 | 0.265875 | — | — | — |
| function_30.test | COMPILE | 0.102692 | 0.223615 | 0.274964 | — | — | — |
| function_30_repeat.test | COMPILE | 0.097786 | 0.224913 | 0.280970 | — | — | — |
| function_arith_cxx98.test | RUN | 0.132688 | 0.391427 | 0.426688 | 0.001460 | 0.001213 | 0.001083 |
| function_arith_portable.test | RUN | 0.131473 | 0.364575 | 0.402799 | 0.001230 | 0.001179 | 0.001176 |
| sum_avg_cxx98.test | RUN | 0.127183 | 0.315902 | 0.379377 | 0.001141 | 0.001149 | 0.001194 |
| sum_avg_portable.test | RUN | 0.127602 | 0.284094 | 0.370960 | 0.001116 | 0.001421 | 0.001210 |
| mem_fun_cxx98.test | RUN | 0.142168 | 0.458838 | 0.480688 | 0.001125 | 0.001211 | 0.001246 |
| mem_fun_portable.test | RUN | 0.143285 | 0.419539 | 0.451256 | 0.001143 | 0.001312 | 0.001181 |
| std_bind_cxx98.test | RUN | 0.132545 | 0.383971 | 0.423244 | 0.001144 | 0.001295 | 0.001241 |
| std_bind_portable.test | RUN | 0.133982 | 0.351296 | 0.388561 | 0.001145 | 0.001163 | 0.001132 |
| function_ref_cxx98.test | RUN | 0.123350 | 0.314183 | 0.369618 | 0.001283 | 0.001173 | 0.001122 |
| function_ref_portable.test | RUN | 0.122188 | 0.286886 | 0.366049 | 0.001120 | 0.001159 | 0.001133 |
| contains_test.test | RUN | 0.157336 | 0.613869 | 0.596912 | 0.001207 | 0.001243 | 0.001216 |
| contains2_test.test | RUN | 0.147521 | 0.433018 | 0.460811 | 0.001168 | 0.001026 | 0.001189 |
| nothrow_swap.test | RUN | 0.135320 | 0.409520 | 0.447444 | 0.001323 | 0.001271 | 0.001294 |
| rvalues_test.test | RUN | 0.155998 | 0.499100 | 0.510882 | 0.001354 | 0.001343 | 0.001142 |
| function_typeof_test.test | COMPILE | 0.101653 | 0.221506 | 0.262655 | — | — | — |
| result_arg_types_test.test | RUN | 0.148072 | 0.343739 | 0.451027 | 0.001118 | 0.001240 | 0.001067 |
| result_arg_n_types_test.test | RUN | 0.158254 | 0.373619 | 0.536770 | 0.001169 | 0.001203 | 0.001091 |
| test_bad_function_call_shared.test | RUN | 0.127630 | 0.308711 | 0.391506 | 0.001256 | 0.001447 | 0.001234 |
| test_bad_function_call_static.test | RUN | 0.125468 | 0.315112 | 0.377867 | 0.001266 | 0.001081 | 0.001215 |
| mixed_cxxstd_shared.test | RUN | 0.132201 | 0.374298 | 0.427609 | 0.001315 | 0.001342 | 0.001234 |
| mixed_cxxstd_static.test | RUN | 0.135708 | 0.375937 | 0.432795 | 0.001194 | 0.001214 | 0.001118 |
| mixed_cxxstd_shared_0x.test | RUN | 0.136421 | 0.377823 | 0.431917 | 0.001265 | 0.001285 | 0.001237 |
| mixed_cxxstd_static_0x.test | RUN | 0.133247 | 0.381797 | 0.442530 | 0.001049 | 0.001155 | 0.001238 |
| mixed_cxxstd_shared_14.test | RUN | 0.133836 | 0.378303 | 0.438326 | 0.001249 | 0.001212 | 0.001155 |
| mixed_cxxstd_static_14.test | RUN | 0.133898 | 0.375334 | 0.430755 | 0.001086 | 0.001348 | 0.001168 |
| return_function_shared.test | RUN | 0.130079 | 0.375769 | 0.429042 | 0.001016 | 0.001381 | 0.001360 |
| return_function_static.test | RUN | 0.129784 | 0.382257 | 0.433223 | 0.001406 | 0.000999 | 0.001081 |
| return_function_shared_0x.test | RUN | 0.132036 | 0.371711 | 0.417830 | 0.001264 | 0.001337 | 0.001351 |
| return_function_static_0x.test | RUN | 0.130251 | 0.381166 | 0.419140 | 0.001469 | 0.001208 | 0.001176 |
| return_function_shared_14.test | RUN | 0.131761 | 0.377512 | 0.423498 | 0.001270 | 0.001329 | 0.001250 |
| return_function_static_14.test | RUN | 0.133068 | 0.384113 | 0.433050 | 0.001282 | 0.001174 | 0.001092 |
| quick.test | RUN | 0.140679 | 0.380365 | 0.421413 | 0.001078 | 0.001337 | 0.001138 |
| issue_42.test | COMPILE | 0.106009 | 0.237260 | 0.289029 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.176241 | 0.523320 | 0.611078 | 0.001220 | 0.001164 | 0.001138 |
| contains_test_no_rtti.test | RUN | 0.158789 | 0.603310 | 0.605397 | 0.001299 | 0.001144 | 0.001087 |
| contains2_test_no_rtti.test | RUN | 0.143778 | 0.439357 | 0.470291 | 0.001156 | 0.001160 | 0.000908 |
| contains3_test.test | RUN | 0.131209 | 0.339063 | 0.413985 | 0.001115 | 0.001159 | 0.001115 |
| contains3_test_no_rtti.test | RUN | 0.090954 | 0.276271 | 0.272298 | 0.000843 | 0.000813 | 0.000834 |
| issue_53.test | COMPILE | 0.081627 | 0.183677 | 0.198124 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998× | 0.994×, 1.002× | 0.988× |
| clang | 0.995× | 0.989×, 1.001× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45241427099).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000754s | 0.000764s | 0.000752s | byte equality observed |
| contains2_test.test | 10 | 0.000748s | 0.000745s | 0.000740s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000751s | 0.000743s | 0.000746s | byte equality observed |
| contains3_test.test | 10 | 0.000752s | 0.000747s | 0.000735s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000739s | 0.000742s | 0.000738s | byte equality observed |
| contains_test.test | 10 | 0.000744s | 0.000740s | 0.000750s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.000746s | 0.000742s | 0.000737s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.000742s | 0.000729s | 0.000726s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.000749s | 0.000759s | 0.000743s | byte equality observed |
| function_arith_portable.test | 10 | 0.000756s | 0.000741s | 0.000758s | byte equality observed |
| function_n_test.test | 10 | 0.000747s | 0.000748s | 0.000745s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000713s | 0.000724s | 0.000735s | byte equality observed |
| function_ref_portable.test | 10 | 0.000731s | 0.000714s | 0.000738s | byte equality observed |
| function_test.test | 10 | 0.000786s | 0.000781s | 0.000795s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.000786s | 0.000775s | 0.000795s | byte equality observed |
| lambda_test.test | 10 | 0.000751s | 0.000744s | 0.000767s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.000805s | 0.000765s | 0.000743s | byte equality observed |
| mem_fun_portable.test | 10 | 0.000811s | 0.000796s | 0.000742s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.000885s | 0.000863s | 0.000817s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.000869s | 0.000859s | 0.000821s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.000866s | 0.000874s | 0.000850s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.000807s | 0.000823s | 0.000837s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.000822s | 0.000819s | 0.000856s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.000818s | 0.000808s | 0.000873s | byte equality observed |
| nothrow_swap.test | 10 | 0.000841s | 0.000826s | 0.000852s | byte equality observed |
| quick.test | 10 | 0.000797s | 0.000804s | 0.000842s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.000822s | 0.000851s | 0.000823s | byte equality observed |
| result_arg_types_test.test | 10 | 0.000824s | 0.000816s | 0.000824s | byte equality observed |
| return_function_shared.test | 10 | 0.000873s | 0.000848s | 0.000852s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.000864s | 0.000874s | 0.000878s | byte equality observed |
| return_function_shared_14.test | 10 | 0.000858s | 0.000889s | 0.000867s | byte equality observed |
| return_function_static.test | 10 | 0.000813s | 0.000858s | 0.000819s | byte equality observed |
| return_function_static_0x.test | 10 | 0.000800s | 0.000822s | 0.000800s | byte equality observed |
| return_function_static_14.test | 10 | 0.000820s | 0.000829s | 0.000825s | byte equality observed |
| rvalues_test.test | 10 | 0.000832s | 0.000815s | 0.000806s | byte equality observed |
| stateless_test.test | 10 | 0.000794s | 0.000801s | 0.000806s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000808s | 0.000810s | 0.000804s | byte equality observed |
| std_bind_portable.test | 10 | 0.000793s | 0.000821s | 0.000790s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000798s | 0.000804s | 0.000804s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000793s | 0.000806s | 0.000783s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.000869s | 0.000874s | 0.000889s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.000848s | 0.000817s | 0.000844s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45241427099).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
