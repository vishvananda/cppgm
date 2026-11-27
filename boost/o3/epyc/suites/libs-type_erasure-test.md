# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.704838 | 2.844613 | 2.787683 | 0.003816 | 0.004256 | 0.003759 |
| test_increment.test | RUN | 0.665817 | 2.066530 | 2.478048 | 0.003904 | 0.004012 | 0.004086 |
| test_add.test | RUN | 0.901868 | 3.308379 | 3.579810 | 0.004157 | 0.004652 | 0.004660 |
| test_add_assign.test | RUN | 0.864033 | 3.537185 | 3.712219 | 0.004524 | 0.004610 | 0.004562 |
| test_callable.test | RUN | 1.410749 | 5.956391 | 7.807612 | 0.007676 | 0.007894 | 0.007790 |
| test_reference.test | RUN | 0.729520 | 2.472062 | 2.580402 | 0.004176 | 0.004395 | 0.003853 |
| test_construct.test | RUN | 3.063149 | 28.131719 | 21.943912 | 0.009270 | 0.009190 | 0.009967 |
| test_relaxed.test | RUN | 0.645298 | 1.789876 | 2.275671 | 0.003712 | 0.003748 | 0.003783 |
| test_assign.test | RUN | 7.449540 | 87.541607 | 71.153281 | 0.014137 | 0.008083 | 0.008630 |
| test_construct_ref.test | RUN | 0.833159 | 4.275740 | 3.678423 | 0.005965 | 0.005372 | 0.005890 |
| test_construct_cref.test | RUN | 0.890650 | 4.028804 | 4.639416 | 0.006333 | 0.006122 | 0.006376 |
| test_any_cast.test | RUN | 0.837819 | 4.220478 | 3.502794 | 0.005632 | 0.005283 | 0.005502 |
| test_binding_of.test | RUN | 0.644239 | 1.695754 | 2.145456 | 0.003523 | 0.003726 | 0.003786 |
| test_typeid_of.test | RUN | 0.679199 | 2.349262 | 2.485748 | 0.004188 | 0.004003 | 0.004040 |
| test_nested.test | RUN | 0.744937 | 2.264967 | 2.784532 | 0.003650 | 0.003842 | 0.003973 |
| test_less.test | RUN | 0.951280 | 4.433966 | 4.433227 | 0.005328 | 0.005704 | 0.005689 |
| test_equal.test | RUN | 0.903198 | 4.165730 | 3.530214 | 0.005084 | 0.004850 | 0.005146 |
| test_negate.test | RUN | 0.642882 | 1.621936 | 2.326679 | 0.003526 | 0.003564 | 0.003308 |
| test_dereference.test | RUN | 0.729293 | 2.098522 | 2.539969 | 0.003856 | 0.003910 | 0.003878 |
| test_subscript.test | RUN | 0.725145 | 2.351383 | 2.337468 | 0.003775 | 0.003839 | 0.004090 |
| test_forward_iterator.test | RUN | 0.868243 | 2.673732 | 3.326151 | 0.004063 | 0.004228 | 0.004238 |
| test_tuple.test | RUN | 0.775574 | 2.700193 | 2.874588 | 0.004039 | 0.003605 | 0.003494 |
| test_stream.test | RUN | 0.964210 | 4.338969 | 4.027940 | 0.005612 | 0.005068 | 0.006035 |
| test_deduced.test | RUN | 0.641274 | 1.548735 | 2.238277 | 0.003506 | 0.003519 | 0.003154 |
| test_same_type.test | RUN | 0.716542 | 2.210669 | 2.687518 | 0.004095 | 0.003780 | 0.004116 |
| test_member.test | RUN | 0.934774 | 4.370763 | 4.215295 | 0.006400 | 0.006347 | 0.006328 |
| test_null.test | RUN | 0.631430 | 2.203686 | 2.048042 | 0.002889 | 0.004023 | 0.003674 |
| test_free.test | RUN | 0.805340 | 3.778617 | 3.250118 | 0.005324 | 0.004700 | 0.004811 |
| test_is_empty.test | RUN | 0.623906 | 1.862138 | 2.018346 | 0.003871 | 0.003702 | 0.004043 |
| test_dynamic_any_cast.test | RUN | 1.205213 | 5.048316 | 5.996106 | 0.005930 | 0.005746 | 0.006563 |
| test_limits.test | RUN | 1.095937 | 3.681343 | 4.326858 | 0.003945 | 0.004403 | 0.004084 |
| test_param.test | COMPILE | 0.451298 | 1.116734 | 1.324315 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.425138 | 0.822005 | 1.210078 | — | — | — |
| test_sfinae.test | COMPILE | 0.424376 | 0.845717 | 1.145153 | — | — | — |
| test_interface_order.test | COMPILE | 0.408796 | 0.813803 | 1.133042 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.053537 | 0.084566 | 0.097540 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.402916 | 0.790901 | 1.141710 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.407575 | 0.821359 | 1.092549 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.382029 | 0.722792 | 1.214094 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.382742 | 0.798667 | 1.196813 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.402082 | 0.819530 | 1.041618 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.394808 | 0.713503 | 1.183010 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.390418 | 0.794935 | 1.196744 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.405941 | 0.844750 | 1.159222 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.408581 | 0.727376 | 1.173661 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.407254 | 0.782143 | 1.209865 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.400934 | 0.813324 | 1.052313 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.398185 | 0.805663 | 1.227523 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.408905 | 0.850108 | 1.242523 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.421868 | 0.868575 | 1.177911 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.409294 | 0.827050 | 1.259953 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.399314 | 0.798700 | 1.169447 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.410265 | 0.803007 | 1.077211 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.411438 | 0.846977 | 1.240749 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.406214 | 0.783064 | 1.270414 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.405649 | 0.762716 | 1.082820 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.406676 | 0.812606 | 1.267874 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.382931 | 0.833756 | 1.082567 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.348675 | 0.764463 | 1.239697 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.343985 | 0.613760 | 0.765901 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.971× | 0.965×, 0.976× | 1.009× |
| clang | 0.969× | 0.974×, 0.965× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46045514956).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 8 | 0.002932s | 0.002847s | 0.002830s | byte equality observed |
| test_add_assign.test | 8 | 0.002905s | 0.002837s | 0.002788s | byte equality observed |
| test_any_cast.test | 7 | 0.003382s | 0.003315s | 0.003227s | byte equality observed |
| test_assign.test | 3 | 0.010311s | 0.008576s | 0.009518s | byte equality observed |
| test_binding.test | 9 | 0.002700s | 0.002633s | 0.002620s | byte equality observed |
| test_binding_of.test | 8 | 0.002537s | 0.002489s | 0.002422s | byte equality observed |
| test_callable.test | 6 | 0.004368s | 0.004401s | 0.004260s | byte equality observed |
| test_construct.test | 4 | 0.005714s | 0.005583s | 0.005549s | byte equality observed |
| test_construct_cref.test | 6 | 0.003919s | 0.003862s | 0.003831s | byte equality observed |
| test_construct_ref.test | 7 | 0.003510s | 0.003485s | 0.003475s | byte equality observed |
| test_deduced.test | 7 | 0.002523s | 0.002519s | 0.002460s | byte equality observed |
| test_dereference.test | 8 | 0.002729s | 0.002663s | 0.002633s | byte equality observed |
| test_dynamic_any_cast.test | 6 | 0.003862s | 0.003806s | 0.003739s | byte equality observed |
| test_equal.test | 7 | 0.003279s | 0.003183s | 0.003172s | byte equality observed |
| test_forward_iterator.test | 8 | 0.002764s | 0.002681s | 0.002689s | byte equality observed |
| test_free.test | 7 | 0.003221s | 0.003212s | 0.003199s | byte equality observed |
| test_increment.test | 8 | 0.002632s | 0.002588s | 0.002541s | byte equality observed |
| test_is_empty.test | 9 | 0.002640s | 0.002615s | 0.002511s | byte equality observed |
| test_less.test | 7 | 0.003537s | 0.003489s | 0.003439s | byte equality observed |
| test_limits.test | 8 | 0.002864s | 0.002853s | 0.002804s | byte equality observed |
| test_member.test | 6 | 0.003985s | 0.003981s | 0.003935s | byte equality observed |
| test_negate.test | 8 | 0.002594s | 0.002475s | 0.002477s | byte equality observed |
| test_nested.test | 9 | 0.002673s | 0.002628s | 0.002558s | byte equality observed |
| test_null.test | 7 | 0.002745s | 0.002728s | 0.002612s | byte equality observed |
| test_reference.test | 8 | 0.002820s | 0.002777s | 0.002800s | byte equality observed |
| test_relaxed.test | 9 | 0.002548s | 0.002500s | 0.002529s | byte equality observed |
| test_same_type.test | 8 | 0.002715s | 0.002695s | 0.002639s | byte equality observed |
| test_stream.test | 6 | 0.003765s | 0.003790s | 0.003712s | byte equality observed |
| test_subscript.test | 8 | 0.002829s | 0.002830s | 0.002733s | byte equality observed |
| test_tuple.test | 8 | 0.002831s | 0.002731s | 0.002711s | byte equality observed |
| test_typeid_of.test | 8 | 0.002841s | 0.002847s | 0.002800s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46045514956).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
