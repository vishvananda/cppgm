# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.710417 | 2.863867 | 2.872234 | 0.004373 | 0.004241 | 0.004058 |
| test_increment.test | RUN | 0.672510 | 2.127437 | 2.478154 | 0.004090 | 0.003731 | 0.003931 |
| test_add.test | RUN | 0.866216 | 3.376701 | 3.653023 | 0.004303 | 0.004300 | 0.004438 |
| test_add_assign.test | RUN | 0.969172 | 3.631572 | 3.792080 | 0.004676 | 0.004494 | 0.004347 |
| test_callable.test | RUN | 1.433711 | 6.171380 | 7.895520 | 0.007024 | 0.007717 | 0.007600 |
| test_reference.test | RUN | 0.706746 | 2.578564 | 2.666315 | 0.003715 | 0.004376 | 0.004245 |
| test_construct.test | RUN | 3.078920 | 29.944448 | 22.980313 | 0.009291 | 0.008755 | 0.009284 |
| test_relaxed.test | RUN | 0.662035 | 1.803013 | 2.320248 | 0.003799 | 0.003854 | 0.004054 |
| test_assign.test | RUN | 7.698672 | 95.944265 | 78.498871 | 0.013937 | 0.008171 | 0.008811 |
| test_construct_ref.test | RUN | 0.862044 | 4.519470 | 3.629071 | 0.005391 | 0.004901 | 0.006091 |
| test_construct_cref.test | RUN | 0.952472 | 4.055826 | 4.808677 | 0.006107 | 0.006144 | 0.006905 |
| test_any_cast.test | RUN | 0.828488 | 4.212597 | 3.598530 | 0.005312 | 0.004534 | 0.004599 |
| test_binding_of.test | RUN | 0.636116 | 1.609929 | 2.309155 | 0.003817 | 0.003560 | 0.003395 |
| test_typeid_of.test | RUN | 0.698532 | 2.375215 | 2.519797 | 0.004451 | 0.004003 | 0.004285 |
| test_nested.test | RUN | 0.770678 | 2.285032 | 2.896655 | 0.003878 | 0.003768 | 0.003598 |
| test_less.test | RUN | 1.020734 | 4.576943 | 4.624568 | 0.005693 | 0.005844 | 0.005803 |
| test_equal.test | RUN | 0.932829 | 4.200896 | 3.594236 | 0.005172 | 0.005178 | 0.005112 |
| test_negate.test | RUN | 0.661251 | 1.705954 | 2.389825 | 0.004052 | 0.003323 | 0.003449 |
| test_dereference.test | RUN | 0.734395 | 2.209112 | 2.521198 | 0.004206 | 0.003981 | 0.004168 |
| test_subscript.test | RUN | 0.753625 | 2.388909 | 2.765461 | 0.004154 | 0.004221 | 0.004628 |
| test_forward_iterator.test | RUN | 0.881252 | 2.735100 | 2.831479 | 0.004200 | 0.004078 | 0.004394 |
| test_tuple.test | RUN | 0.772565 | 2.756061 | 2.964643 | 0.004423 | 0.003885 | 0.004219 |
| test_stream.test | RUN | 0.981812 | 4.637668 | 4.591556 | 0.005720 | 0.005884 | 0.006072 |
| test_deduced.test | RUN | 0.667415 | 1.649280 | 1.969857 | 0.003644 | 0.003338 | 0.003526 |
| test_same_type.test | RUN | 0.753938 | 2.398828 | 2.772711 | 0.004102 | 0.004052 | 0.003864 |
| test_member.test | RUN | 0.964975 | 4.685535 | 3.844574 | 0.006796 | 0.006009 | 0.006762 |
| test_null.test | RUN | 0.638718 | 2.325925 | 2.411522 | 0.003849 | 0.003679 | 0.004142 |
| test_free.test | RUN | 0.827193 | 3.673631 | 3.410682 | 0.005320 | 0.004429 | 0.005091 |
| test_is_empty.test | RUN | 0.650131 | 1.890545 | 2.233046 | 0.004089 | 0.003947 | 0.004128 |
| test_dynamic_any_cast.test | RUN | 1.220102 | 5.169334 | 5.451186 | 0.005757 | 0.005845 | 0.005198 |
| test_limits.test | RUN | 1.116944 | 3.770974 | 4.498429 | 0.004197 | 0.004463 | 0.004766 |
| test_param.test | COMPILE | 0.448761 | 1.136243 | 1.510881 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.430032 | 0.838781 | 1.320362 | — | — | — |
| test_sfinae.test | COMPILE | 0.436339 | 0.881515 | 1.256939 | — | — | — |
| test_interface_order.test | COMPILE | 0.421567 | 0.824810 | 1.090501 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.050043 | 0.078944 | 0.103238 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.409601 | 0.822230 | 1.241683 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.416286 | 0.836053 | 1.049528 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.405225 | 0.802314 | 1.224070 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.414790 | 0.778262 | 1.253552 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.402014 | 0.836022 | 1.024360 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.395143 | 0.794716 | 1.227617 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.403015 | 0.774355 | 1.238735 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.417168 | 0.864517 | 1.129686 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.395910 | 0.760385 | 1.223819 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.405070 | 0.744786 | 1.043159 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.403018 | 0.820454 | 1.219167 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.397669 | 0.839374 | 1.253441 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.402155 | 0.845834 | 1.089926 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.406719 | 0.807173 | 1.294009 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.407309 | 0.859678 | 1.303548 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.399749 | 0.750711 | 1.022030 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.402551 | 0.854940 | 1.254221 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.408327 | 0.816540 | 1.295868 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.409659 | 0.837879 | 1.195715 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.411164 | 0.861898 | 1.277000 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.412418 | 0.789215 | 1.301959 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.410141 | 0.828539 | 1.059447 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.399504 | 0.755450 | 0.937055 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.266137 | 0.639595 | 0.880918 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.964× | 0.967×, 0.961× | 0.986× |
| clang | 0.961× | 0.959×, 0.964× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44612055398).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 7 | 0.003004s | 0.002866s | 0.002801s | byte equality observed |
| test_add_assign.test | 8 | 0.002872s | 0.002808s | 0.002841s | byte equality observed |
| test_any_cast.test | 7 | 0.003386s | 0.003407s | 0.003406s | byte equality observed |
| test_assign.test | 3 | 0.010486s | 0.008606s | 0.009593s | byte equality observed |
| test_binding.test | 9 | 0.002777s | 0.002606s | 0.002688s | byte equality observed |
| test_binding_of.test | 8 | 0.002546s | 0.002541s | 0.002491s | byte equality observed |
| test_callable.test | 6 | 0.004359s | 0.004334s | 0.004145s | byte equality observed |
| test_construct.test | 4 | 0.005745s | 0.005542s | 0.005546s | byte equality observed |
| test_construct_cref.test | 6 | 0.003963s | 0.003874s | 0.003897s | byte equality observed |
| test_construct_ref.test | 7 | 0.003522s | 0.003387s | 0.003392s | byte equality observed |
| test_deduced.test | 9 | 0.002575s | 0.002536s | 0.002493s | byte equality observed |
| test_dereference.test | 8 | 0.002769s | 0.002685s | 0.002639s | byte equality observed |
| test_dynamic_any_cast.test | 6 | 0.003896s | 0.003830s | 0.003782s | byte equality observed |
| test_equal.test | 7 | 0.003311s | 0.003225s | 0.003248s | byte equality observed |
| test_forward_iterator.test | 8 | 0.002775s | 0.002705s | 0.002630s | byte equality observed |
| test_free.test | 7 | 0.003278s | 0.003215s | 0.003083s | byte equality observed |
| test_increment.test | 8 | 0.002678s | 0.002554s | 0.002592s | byte equality observed |
| test_is_empty.test | 9 | 0.002675s | 0.002594s | 0.002627s | byte equality observed |
| test_less.test | 6 | 0.003563s | 0.003548s | 0.003477s | byte equality observed |
| test_limits.test | 8 | 0.002929s | 0.002863s | 0.002877s | byte equality observed |
| test_member.test | 6 | 0.004112s | 0.003922s | 0.003975s | byte equality observed |
| test_negate.test | 9 | 0.002651s | 0.002547s | 0.002568s | byte equality observed |
| test_nested.test | 7 | 0.002672s | 0.002634s | 0.002590s | byte equality observed |
| test_null.test | 8 | 0.002778s | 0.002751s | 0.002726s | byte equality observed |
| test_reference.test | 7 | 0.002855s | 0.002778s | 0.002866s | byte equality observed |
| test_relaxed.test | 8 | 0.002635s | 0.002593s | 0.002537s | byte equality observed |
| test_same_type.test | 8 | 0.002778s | 0.002724s | 0.002732s | byte equality observed |
| test_stream.test | 6 | 0.003811s | 0.003729s | 0.003670s | byte equality observed |
| test_subscript.test | 8 | 0.002875s | 0.002836s | 0.002810s | byte equality observed |
| test_tuple.test | 8 | 0.002885s | 0.002782s | 0.002783s | byte equality observed |
| test_typeid_of.test | 8 | 0.002867s | 0.002744s | 0.002782s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44612055398).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
