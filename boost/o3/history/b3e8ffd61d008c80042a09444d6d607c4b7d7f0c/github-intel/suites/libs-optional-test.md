# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.207550 | 1.318952 | 0.750964 | 0.001101 | 0.001359 | 0.001337 |
| optional_test_assign.test | RUN | 0.101949 | 0.265576 | 0.333433 | 0.001250 | 0.001229 | 0.001212 |
| optional_test_swap.test | RUN | 0.110536 | 0.335065 | 0.373862 | 0.001144 | 0.001089 | 0.001175 |
| optional_test_constexpr.test | COMPILE | 0.074325 | 0.180561 | 0.215766 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.109190 | 0.451949 | 0.350870 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.070331 | 0.173286 | 0.208487 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.118950 | 0.347243 | 0.409834 | 0.001081 | 0.001358 | 0.001265 |
| optional_test_constructors.test | RUN | 0.243226 | 1.297403 | 1.101209 | 0.000922 | 0.001258 | 0.001272 |
| optional_test_convert_from_T.test | RUN | 0.109019 | 0.286466 | 0.350126 | 0.001131 | 0.001317 | 0.001192 |
| optional_test_convert_assign.test | RUN | 0.107195 | 0.277866 | 0.354562 | 0.001175 | 0.001016 | 0.001137 |
| optional_test_empty_braces.test | RUN | 0.104196 | 0.273130 | 0.327489 | 0.001241 | 0.001243 | 0.001093 |
| optional_test_make_optional.test | RUN | 0.151961 | 0.425417 | 0.551832 | 0.001200 | 0.001179 | 0.001151 |
| optional_test_flat_map.test | RUN | 0.159217 | 0.492530 | 0.611205 | 0.001043 | 0.001117 | 0.001221 |
| optional_test_hash.test | RUN | 0.132192 | 0.402767 | 0.456701 | 0.001283 | 0.001125 | 0.001044 |
| optional_test_map.test | RUN | 0.167929 | 0.482361 | 0.640025 | 0.001321 | 0.001231 | 0.001113 |
| optional_test_tie.test | RUN | 0.112281 | 0.312905 | 0.369821 | 0.001306 | 0.001104 | 0.001115 |
| optional_test_ranges_find.test | RUN | 0.102396 | 0.260338 | 0.322285 | 0.001117 | 0.001239 | 0.001103 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.137256 | 0.790809 | 0.473446 | 0.001001 | 0.001322 | 0.001103 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.107648 | 0.334008 | 0.362716 | 0.001260 | 0.001196 | 0.001238 |
| optional_test_ref_assign_const_int.test | RUN | 0.113397 | 0.345259 | 0.364295 | 0.001302 | 0.001121 | 0.001179 |
| optional_test_ref_converting_ctor.test | RUN | 0.119832 | 0.490115 | 0.404177 | 0.001155 | 0.001266 | 0.001100 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.107995 | 0.311724 | 0.354774 | 0.001093 | 0.001350 | 0.001137 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.104773 | 0.294855 | 0.340780 | 0.001198 | 0.001308 | 0.001181 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.107797 | 0.287406 | 0.339055 | 0.001099 | 0.001184 | 0.001155 |
| optional_test_ref_portable_minimum.test | RUN | 0.461001 | 1.602699 | 1.237819 | 0.001172 | 0.001348 | 0.001180 |
| optional_test_ref_move.test | RUN | 0.112908 | 0.303378 | 0.366616 | 0.001156 | 0.001108 | 0.001132 |
| optional_test_ref_to_val.test | RUN | 0.132732 | 0.612115 | 0.507910 | 0.001154 | 0.001169 | 0.001121 |
| optional_test_inplace_factory.test | RUN | 0.136279 | 0.580106 | 0.469287 | 0.001195 | 0.001244 | 0.001112 |
| optional_test_io.test | RUN | 0.138918 | 0.633808 | 0.469637 | 0.001133 | 0.001222 | 0.001186 |
| optional_test_move.test | RUN | 0.125922 | 0.424062 | 0.420913 | 0.001186 | 0.001180 | 0.001068 |
| optional_test_noexcept_move.test | RUN | 0.073649 | 0.178390 | 0.222776 | 0.000499 | 0.000450 | 0.001023 |
| optional_test_cmp_none.test | RUN | 0.109426 | 0.291909 | 0.342911 | 0.001025 | 0.001217 | 0.001157 |
| optional_test_value_access.test | RUN | 0.132905 | 0.502830 | 0.455550 | 0.001032 | 0.001231 | 0.001145 |
| optional_test_emplace.test | RUN | 0.129094 | 0.497844 | 0.471713 | 0.001182 | 0.001138 | 0.001119 |
| optional_test_minimum_requirements.test | RUN | 0.117247 | 0.393320 | 0.409988 | 0.001113 | 0.001200 | 0.001112 |
| optional_test_msvc_bug_workaround.test | RUN | 0.102375 | 0.260967 | 0.330451 | 0.001188 | 0.001178 | 0.001111 |
| optional_test_member_T.test | RUN | 0.103737 | 0.266084 | 0.329073 | 0.001081 | 0.001292 | 0.001050 |
| optional_test_tc_base.test | RUN | 0.106564 | 0.265630 | 0.337654 | 0.001201 | 0.001184 | 0.001110 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.077400 | 0.183557 | 0.212993 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.073412 | 0.179044 | 0.213070 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.067640 | 0.165791 | 0.190196 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.096239 | 0.230320 | 0.299960 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.067415 | 0.167476 | 0.192135 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.067613 | 0.166305 | 0.194665 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.069183 | 0.166630 | 0.195765 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.069028 | 0.162646 | 0.196278 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.065420 | 0.167379 | 0.187926 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.067864 | 0.160782 | 0.191434 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.067609 | 0.164474 | 0.189442 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.112713 | 0.263444 | 0.337119 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.113741 | 0.266384 | 0.328350 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.065190 | 0.163891 | 0.189727 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.068752 | 0.166475 | 0.196208 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.066839 | 0.161454 | 0.192819 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.067981 | 0.161427 | 0.195217 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.066542 | 0.165496 | 0.193352 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.068670 | 0.164440 | 0.188448 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.069274 | 0.161419 | 0.200401 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.067724 | 0.162306 | 0.192529 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.069030 | 0.164192 | 0.196424 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.067959 | 0.163582 | 0.191452 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.097407 | 0.212245 | 0.287979 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.072875 | 0.182865 | 0.243499 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.070441 | 0.168508 | 0.203984 | — | — | — |
| optional_test_static_properties.test | RUN | 0.162941 | 0.378230 | 0.505057 | 0.001126 | 0.001130 | 0.001091 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.072060 | 0.181668 | 0.217845 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.074075 | 0.183706 | 0.219027 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.070628 | 0.171203 | 0.203763 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.081320 | 0.222798 | 0.283783 | 0.001181 | 0.001164 | 0.001200 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.084372 | 0.229382 | 0.281763 | 0.001176 | 0.001005 | 0.001199 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.083990 | 0.222453 | 0.275308 | 0.001132 | 0.001139 | 0.001135 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.085933 | 0.232470 | 0.275129 | 0.000889 | 0.000891 | 0.001198 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.070326 | 0.147371 | 0.175293 | 0.000896 | 0.000854 | 0.000842 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.051522 | 0.142163 | 0.174657 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998× | 0.999×, 0.996× | 1.003× |
| clang | 1.007× | 1.007×, 1.006× | 1.005× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44818861403).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.000873s | 0.000849s | 0.000863s | byte equality observed |
| optional_test_assign.test | 10 | 0.000834s | 0.000783s | 0.000805s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.000824s | 0.000777s | 0.000774s | byte equality observed |
| optional_test_constructors.test | 10 | 0.000827s | 0.000811s | 0.000787s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.000810s | 0.000801s | 0.000818s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000814s | 0.000836s | 0.000804s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.000818s | 0.000832s | 0.000822s | byte equality observed |
| optional_test_emplace.test | 10 | 0.000832s | 0.000841s | 0.000844s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.000812s | 0.000832s | 0.000806s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.000805s | 0.000801s | 0.000821s | byte equality observed |
| optional_test_hash.test | 10 | 0.000816s | 0.000768s | 0.000824s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.000833s | 0.000803s | 0.000812s | byte equality observed |
| optional_test_io.test | 10 | 0.000812s | 0.000837s | 0.000811s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.000806s | 0.000790s | 0.000811s | byte equality observed |
| optional_test_map.test | 10 | 0.000824s | 0.000793s | 0.000831s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000819s | 0.000789s | 0.000792s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.000818s | 0.000823s | 0.000823s | byte equality observed |
| optional_test_move.test | 10 | 0.000811s | 0.000813s | 0.000794s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.000807s | 0.000799s | 0.000806s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000358s | 0.000352s | 0.000779s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.000813s | 0.000789s | 0.000803s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.000818s | 0.000798s | 0.000827s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.000819s | 0.000821s | 0.000814s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.000838s | 0.000832s | 0.000823s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.000824s | 0.000778s | 0.000785s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.000809s | 0.000818s | 0.000826s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.000812s | 0.000822s | 0.000816s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.000805s | 0.000811s | 0.000823s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.000812s | 0.000832s | 0.000811s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.000849s | 0.000819s | 0.000833s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.000819s | 0.000809s | 0.000807s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.000802s | 0.000833s | 0.000799s | byte equality observed |
| optional_test_swap.test | 10 | 0.000802s | 0.000831s | 0.000798s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.000786s | 0.000805s | 0.000833s | byte equality observed |
| optional_test_tie.test | 10 | 0.000811s | 0.000804s | 0.000843s | byte equality observed |
| optional_test_value_access.test | 10 | 0.000813s | 0.000845s | 0.000843s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000773s | 0.000795s | 0.000777s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000799s | 0.000792s | 0.000824s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000785s | 0.000810s | 0.000801s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44818861403).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
