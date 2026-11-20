# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.204878 | 1.308876 | 0.753716 | 0.001108 | 0.001252 | 0.001302 |
| optional_test_assign.test | RUN | 0.101704 | 0.269771 | 0.340554 | 0.001186 | 0.001175 | 0.001269 |
| optional_test_swap.test | RUN | 0.109784 | 0.333891 | 0.366437 | 0.001170 | 0.001207 | 0.001110 |
| optional_test_constexpr.test | COMPILE | 0.072632 | 0.180052 | 0.215003 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.108359 | 0.452562 | 0.348040 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.067297 | 0.176622 | 0.206004 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.112101 | 0.348265 | 0.401212 | 0.001092 | 0.001255 | 0.001229 |
| optional_test_constructors.test | RUN | 0.243570 | 1.297779 | 1.079630 | 0.001156 | 0.001209 | 0.001080 |
| optional_test_convert_from_T.test | RUN | 0.111558 | 0.277405 | 0.360476 | 0.001166 | 0.001287 | 0.001165 |
| optional_test_convert_assign.test | RUN | 0.110014 | 0.262484 | 0.337879 | 0.001151 | 0.001240 | 0.001132 |
| optional_test_empty_braces.test | RUN | 0.103136 | 0.268449 | 0.336277 | 0.001163 | 0.001302 | 0.001280 |
| optional_test_make_optional.test | RUN | 0.144917 | 0.419953 | 0.547763 | 0.001241 | 0.001157 | 0.001063 |
| optional_test_flat_map.test | RUN | 0.159056 | 0.495568 | 0.612580 | 0.001146 | 0.001135 | 0.001093 |
| optional_test_hash.test | RUN | 0.129685 | 0.399316 | 0.455670 | 0.001068 | 0.001050 | 0.001086 |
| optional_test_map.test | RUN | 0.164408 | 0.477483 | 0.640274 | 0.001105 | 0.001179 | 0.001099 |
| optional_test_tie.test | RUN | 0.111109 | 0.311562 | 0.370544 | 0.001225 | 0.001205 | 0.001249 |
| optional_test_ranges_find.test | RUN | 0.099281 | 0.259150 | 0.321494 | 0.001046 | 0.001148 | 0.001118 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.131455 | 0.795614 | 0.479058 | 0.001107 | 0.001157 | 0.001077 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.109098 | 0.334837 | 0.361863 | 0.001179 | 0.001170 | 0.001248 |
| optional_test_ref_assign_const_int.test | RUN | 0.108483 | 0.348349 | 0.364035 | 0.001110 | 0.001201 | 0.000944 |
| optional_test_ref_converting_ctor.test | RUN | 0.117969 | 0.483511 | 0.399610 | 0.001115 | 0.001175 | 0.001179 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.107928 | 0.319769 | 0.358143 | 0.000940 | 0.001249 | 0.001141 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.101361 | 0.289801 | 0.340549 | 0.001044 | 0.001177 | 0.001129 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.105605 | 0.286003 | 0.336288 | 0.001084 | 0.001069 | 0.001140 |
| optional_test_ref_portable_minimum.test | RUN | 0.457597 | 1.607392 | 1.244756 | 0.001075 | 0.001362 | 0.001166 |
| optional_test_ref_move.test | RUN | 0.110615 | 0.305900 | 0.357105 | 0.001127 | 0.001200 | 0.001294 |
| optional_test_ref_to_val.test | RUN | 0.136726 | 0.619127 | 0.498567 | 0.001119 | 0.001146 | 0.001254 |
| optional_test_inplace_factory.test | RUN | 0.134534 | 0.571896 | 0.460528 | 0.001117 | 0.001424 | 0.001177 |
| optional_test_io.test | RUN | 0.132713 | 0.636632 | 0.482647 | 0.001185 | 0.001238 | 0.001242 |
| optional_test_move.test | RUN | 0.124320 | 0.420908 | 0.408407 | 0.001151 | 0.001292 | 0.001058 |
| optional_test_noexcept_move.test | RUN | 0.074237 | 0.181716 | 0.209726 | 0.000471 | 0.000465 | 0.001080 |
| optional_test_cmp_none.test | RUN | 0.104792 | 0.291515 | 0.343431 | 0.001085 | 0.001219 | 0.001116 |
| optional_test_value_access.test | RUN | 0.125704 | 0.509723 | 0.459843 | 0.001166 | 0.001216 | 0.001274 |
| optional_test_emplace.test | RUN | 0.128799 | 0.492327 | 0.458868 | 0.001106 | 0.001391 | 0.001195 |
| optional_test_minimum_requirements.test | RUN | 0.117860 | 0.390653 | 0.409523 | 0.001101 | 0.001200 | 0.001110 |
| optional_test_msvc_bug_workaround.test | RUN | 0.103414 | 0.267098 | 0.335608 | 0.001077 | 0.001150 | 0.001214 |
| optional_test_member_T.test | RUN | 0.103543 | 0.259933 | 0.330451 | 0.001103 | 0.001452 | 0.001003 |
| optional_test_tc_base.test | RUN | 0.107660 | 0.266845 | 0.328054 | 0.001207 | 0.001061 | 0.001138 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.078590 | 0.182686 | 0.222217 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.073165 | 0.180157 | 0.207583 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.067462 | 0.164830 | 0.189738 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.094747 | 0.232758 | 0.301332 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.067095 | 0.165648 | 0.195629 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.067311 | 0.168185 | 0.197707 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.067858 | 0.167034 | 0.201536 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.066524 | 0.164738 | 0.196565 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.064751 | 0.155475 | 0.192965 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.068100 | 0.166206 | 0.193224 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.065628 | 0.162792 | 0.192752 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.114413 | 0.257043 | 0.341324 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.111520 | 0.254462 | 0.340001 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.064918 | 0.168610 | 0.190587 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.068509 | 0.169593 | 0.196384 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.064990 | 0.164117 | 0.192844 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.068352 | 0.167566 | 0.196178 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.066926 | 0.164020 | 0.198802 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.069060 | 0.165012 | 0.197213 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.065844 | 0.166366 | 0.196501 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.066594 | 0.164101 | 0.195048 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.068868 | 0.163034 | 0.197489 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.068489 | 0.165795 | 0.196112 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.093672 | 0.212541 | 0.290555 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.073682 | 0.184158 | 0.241450 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.069955 | 0.168280 | 0.205715 | — | — | — |
| optional_test_static_properties.test | RUN | 0.164146 | 0.382239 | 0.507038 | 0.001118 | 0.001281 | 0.001173 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.071672 | 0.181982 | 0.216653 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.074053 | 0.184668 | 0.220119 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.069941 | 0.172054 | 0.203164 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.083967 | 0.226276 | 0.285473 | 0.001324 | 0.001244 | 0.001000 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.086167 | 0.229809 | 0.274701 | 0.001158 | 0.001082 | 0.001076 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.085989 | 0.222773 | 0.278376 | 0.001073 | 0.001059 | 0.000951 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.087849 | 0.228974 | 0.269933 | 0.000783 | 0.000872 | 0.001117 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.082177 | 0.159726 | 0.170242 | 0.000766 | 0.000834 | 0.000779 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.036015 | 0.149172 | 0.194184 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.994× | 0.996×, 0.992× | 1.003× |
| clang | 1.018× | 1.017×, 1.019× | 1.016× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44780058957).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.000886s | 0.000858s | 0.000876s | byte equality observed |
| optional_test_assign.test | 10 | 0.000813s | 0.000799s | 0.000819s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.000808s | 0.000791s | 0.000814s | byte equality observed |
| optional_test_constructors.test | 10 | 0.000825s | 0.000796s | 0.000842s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.000810s | 0.000833s | 0.000802s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.000824s | 0.000806s | 0.000792s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.000787s | 0.000817s | 0.000799s | byte equality observed |
| optional_test_emplace.test | 10 | 0.000825s | 0.000823s | 0.000821s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.000810s | 0.000811s | 0.000824s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.000789s | 0.000802s | 0.000834s | byte equality observed |
| optional_test_hash.test | 10 | 0.000799s | 0.000825s | 0.000811s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.000790s | 0.000826s | 0.000836s | byte equality observed |
| optional_test_io.test | 10 | 0.000836s | 0.000836s | 0.000856s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.000827s | 0.000801s | 0.000812s | byte equality observed |
| optional_test_map.test | 10 | 0.000824s | 0.000815s | 0.000797s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000819s | 0.000810s | 0.000804s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.000850s | 0.000830s | 0.000833s | byte equality observed |
| optional_test_move.test | 10 | 0.000797s | 0.000787s | 0.000827s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.000792s | 0.000793s | 0.000818s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000357s | 0.000356s | 0.000775s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.000812s | 0.000797s | 0.000781s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.000785s | 0.000809s | 0.000794s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.000825s | 0.000811s | 0.000784s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.000821s | 0.000823s | 0.000796s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.000794s | 0.000797s | 0.000812s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.000806s | 0.000835s | 0.000836s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.000816s | 0.000788s | 0.000816s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.000805s | 0.000805s | 0.000792s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.000802s | 0.000795s | 0.000805s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.000842s | 0.000805s | 0.000810s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.000824s | 0.000790s | 0.000807s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.000827s | 0.000787s | 0.000818s | byte equality observed |
| optional_test_swap.test | 10 | 0.000809s | 0.000826s | 0.000824s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.000818s | 0.000795s | 0.000814s | byte equality observed |
| optional_test_tie.test | 10 | 0.000800s | 0.000789s | 0.000822s | byte equality observed |
| optional_test_value_access.test | 10 | 0.000835s | 0.000800s | 0.000828s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000786s | 0.000822s | 0.000789s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.000781s | 0.000783s | 0.000806s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.000792s | 0.000802s | 0.000807s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44780058957).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
