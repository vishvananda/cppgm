# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.406837 | 1.780110 | 1.506349 | 0.002375 | 0.002026 | 0.002323 |
| test_increment.test | RUN | 0.394547 | 1.330299 | 1.284432 | 0.002572 | 0.002068 | 0.002176 |
| test_add.test | RUN | 0.518089 | 2.133912 | 1.955502 | 0.002159 | 0.002181 | 0.002443 |
| test_add_assign.test | RUN | 0.523689 | 2.294155 | 2.060905 | 0.002251 | 0.002138 | 0.002315 |
| test_callable.test | RUN | 0.874747 | 3.942449 | 4.572740 | 0.003088 | 0.003171 | 0.003253 |
| test_reference.test | RUN | 0.420404 | 1.626206 | 1.396547 | 0.002265 | 0.002183 | 0.002490 |
| test_construct.test | RUN | 2.033735 | 18.444412 | 13.894924 | 0.004046 | 0.003769 | 0.004181 |
| test_relaxed.test | RUN | 0.399396 | 1.126506 | 1.233344 | 0.001890 | 0.002063 | 0.002335 |
| test_assign.test | RUN | 5.220740 | 61.921963 | 49.292353 | 0.006464 | 0.003811 | 0.004394 |
| test_construct_ref.test | RUN | 0.502760 | 2.791886 | 2.014736 | 0.002863 | 0.002516 | 0.002552 |
| test_construct_cref.test | RUN | 0.576599 | 2.652595 | 2.513409 | 0.002932 | 0.002992 | 0.002886 |
| test_any_cast.test | RUN | 0.482924 | 2.729951 | 1.952328 | 0.002634 | 0.002479 | 0.002729 |
| test_binding_of.test | RUN | 0.369085 | 1.051768 | 1.192249 | 0.001952 | 0.001973 | 0.002208 |
| test_typeid_of.test | RUN | 0.409415 | 1.473019 | 1.299619 | 0.002447 | 0.002226 | 0.002302 |
| test_nested.test | RUN | 0.439451 | 1.475116 | 1.554722 | 0.002165 | 0.002175 | 0.002248 |
| test_less.test | RUN | 0.585050 | 2.924717 | 2.457083 | 0.002651 | 0.002548 | 0.002907 |
| test_equal.test | RUN | 0.556995 | 2.789488 | 2.116046 | 0.002538 | 0.002659 | 0.002662 |
| test_negate.test | RUN | 0.378492 | 1.112770 | 1.213174 | 0.002096 | 0.002343 | 0.002337 |
| test_dereference.test | RUN | 0.428659 | 1.488974 | 1.425882 | 0.002233 | 0.002243 | 0.002270 |
| test_subscript.test | RUN | 0.451746 | 1.678740 | 1.516239 | 0.002279 | 0.002188 | 0.002435 |
| test_forward_iterator.test | RUN | 0.512773 | 1.893596 | 1.838008 | 0.002183 | 0.002169 | 0.002287 |
| test_tuple.test | RUN | 0.456724 | 1.912212 | 1.566792 | 0.002314 | 0.002268 | 0.002317 |
| test_stream.test | RUN | 0.605159 | 3.172450 | 2.438294 | 0.002712 | 0.002953 | 0.002672 |
| test_deduced.test | RUN | 0.399754 | 1.119246 | 1.183710 | 0.002172 | 0.002227 | 0.002114 |
| test_same_type.test | RUN | 0.433477 | 1.536335 | 1.471491 | 0.002277 | 0.001992 | 0.002406 |
| test_member.test | RUN | 0.601610 | 2.953041 | 2.393440 | 0.003006 | 0.002933 | 0.002930 |
| test_null.test | RUN | 0.388348 | 1.443161 | 1.184006 | 0.002375 | 0.002233 | 0.002373 |
| test_free.test | RUN | 0.487125 | 2.468051 | 1.776615 | 0.002407 | 0.002579 | 0.002328 |
| test_is_empty.test | RUN | 0.376889 | 1.213599 | 1.117530 | 0.002272 | 0.002120 | 0.002314 |
| test_dynamic_any_cast.test | RUN | 0.730912 | 3.590647 | 3.448645 | 0.002761 | 0.002918 | 0.002902 |
| test_limits.test | RUN | 0.637377 | 2.472734 | 2.325057 | 0.002236 | 0.002333 | 0.002549 |
| test_param.test | COMPILE | 0.257049 | 0.673101 | 0.745488 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.241065 | 0.502310 | 0.623535 | — | — | — |
| test_sfinae.test | COMPILE | 0.247635 | 0.523414 | 0.665909 | — | — | — |
| test_interface_order.test | COMPILE | 0.238715 | 0.500575 | 0.662400 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.028456 | 0.048563 | 0.054196 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.230201 | 0.488513 | 0.619804 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.234241 | 0.502231 | 0.601905 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.232255 | 0.495837 | 0.577588 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.233208 | 0.486655 | 0.607967 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.230444 | 0.488917 | 0.604183 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.226855 | 0.485227 | 0.556288 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.230977 | 0.470194 | 0.608194 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.244703 | 0.519095 | 0.632076 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.231154 | 0.487976 | 0.563081 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.238151 | 0.481842 | 0.608560 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.233704 | 0.493670 | 0.594176 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.232525 | 0.492283 | 0.576195 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.230514 | 0.521998 | 0.624409 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.230337 | 0.524138 | 0.621576 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.228363 | 0.527454 | 0.638374 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.228482 | 0.496981 | 0.589550 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.233887 | 0.506070 | 0.623658 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.230439 | 0.496352 | 0.604142 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.237745 | 0.503545 | 0.627598 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.237591 | 0.510096 | 0.621074 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.232527 | 0.503844 | 0.624690 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.224738 | 0.508901 | 0.629680 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.229871 | 0.506072 | 0.586755 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.212334 | 0.363716 | 0.451285 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.969× | 0.969×, 0.969× | 1.001× |
| clang | 0.967× | 0.964×, 0.970× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44818861403).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 10 | 0.001386s | 0.001369s | 0.001334s | byte equality observed |
| test_add_assign.test | 10 | 0.001376s | 0.001319s | 0.001336s | byte equality observed |
| test_any_cast.test | 10 | 0.001493s | 0.001468s | 0.001444s | byte equality observed |
| test_assign.test | 5 | 0.003838s | 0.003224s | 0.003641s | byte equality observed |
| test_binding.test | 10 | 0.001295s | 0.001286s | 0.001250s | byte equality observed |
| test_binding_of.test | 10 | 0.001248s | 0.001223s | 0.001192s | byte equality observed |
| test_callable.test | 10 | 0.001738s | 0.001679s | 0.001670s | byte equality observed |
| test_construct.test | 8 | 0.002186s | 0.002156s | 0.002109s | byte equality observed |
| test_construct_cref.test | 10 | 0.001605s | 0.001591s | 0.001535s | byte equality observed |
| test_construct_ref.test | 10 | 0.001480s | 0.001470s | 0.001467s | byte equality observed |
| test_deduced.test | 10 | 0.001273s | 0.001247s | 0.001201s | byte equality observed |
| test_dereference.test | 10 | 0.001298s | 0.001264s | 0.001252s | byte equality observed |
| test_dynamic_any_cast.test | 10 | 0.001616s | 0.001612s | 0.001560s | byte equality observed |
| test_equal.test | 10 | 0.001418s | 0.001409s | 0.001393s | byte equality observed |
| test_forward_iterator.test | 8 | 0.001311s | 0.001274s | 0.001230s | byte equality observed |
| test_free.test | 7 | 0.001420s | 0.001386s | 0.001392s | byte equality observed |
| test_increment.test | 10 | 0.001274s | 0.001250s | 0.001256s | byte equality observed |
| test_is_empty.test | 10 | 0.001291s | 0.001227s | 0.001229s | byte equality observed |
| test_less.test | 10 | 0.001499s | 0.001481s | 0.001461s | byte equality observed |
| test_limits.test | 10 | 0.001370s | 0.001349s | 0.001319s | byte equality observed |
| test_member.test | 10 | 0.001613s | 0.001602s | 0.001553s | byte equality observed |
| test_negate.test | 10 | 0.001252s | 0.001233s | 0.001219s | byte equality observed |
| test_nested.test | 10 | 0.001256s | 0.001281s | 0.001243s | byte equality observed |
| test_null.test | 10 | 0.001280s | 0.001254s | 0.001270s | byte equality observed |
| test_reference.test | 10 | 0.001310s | 0.001278s | 0.001274s | byte equality observed |
| test_relaxed.test | 10 | 0.001263s | 0.001235s | 0.001271s | byte equality observed |
| test_same_type.test | 10 | 0.001337s | 0.001282s | 0.001276s | byte equality observed |
| test_stream.test | 10 | 0.001547s | 0.001531s | 0.001512s | byte equality observed |
| test_subscript.test | 10 | 0.001326s | 0.001279s | 0.001314s | byte equality observed |
| test_tuple.test | 10 | 0.001310s | 0.001282s | 0.001256s | byte equality observed |
| test_typeid_of.test | 9 | 0.001321s | 0.001290s | 0.001279s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44818861403).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
