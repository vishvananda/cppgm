# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.543203 | 2.053947 | 2.004848 | 0.003454 | 0.003484 | 0.003515 |
| test_increment.test | RUN | 0.516488 | 1.574900 | 1.733795 | 0.003436 | 0.003250 | 0.003433 |
| test_add.test | RUN | 0.656995 | 2.506231 | 2.536199 | 0.003681 | 0.003651 | 0.003536 |
| test_add_assign.test | RUN | 0.716180 | 2.623421 | 2.662913 | 0.003645 | 0.003564 | 0.003562 |
| test_callable.test | RUN | 1.114312 | 4.575806 | 5.779258 | 0.006108 | 0.006055 | 0.005934 |
| test_reference.test | RUN | 0.542570 | 1.832103 | 1.845573 | 0.003621 | 0.003607 | 0.003739 |
| test_construct.test | RUN | 2.372059 | 23.101388 | 16.899698 | 0.007629 | 0.006805 | 0.006656 |
| test_relaxed.test | RUN | 0.503347 | 1.296624 | 1.585663 | 0.003277 | 0.003268 | 0.003469 |
| test_assign.test | RUN | 5.759287 | 78.313296 | 66.366418 | 0.011154 | 0.007175 | 0.007463 |
| test_construct_ref.test | RUN | 0.653547 | 3.229960 | 2.616045 | 0.004665 | 0.004157 | 0.004817 |
| test_construct_cref.test | RUN | 0.730352 | 2.928680 | 3.274449 | 0.004906 | 0.005417 | 0.005350 |
| test_any_cast.test | RUN | 0.613576 | 3.094291 | 2.424746 | 0.004253 | 0.004241 | 0.004509 |
| test_binding_of.test | RUN | 0.486141 | 1.142054 | 1.507383 | 0.003212 | 0.003135 | 0.003372 |
| test_typeid_of.test | RUN | 0.511277 | 1.574417 | 1.663610 | 0.003665 | 0.003420 | 0.003568 |
| test_nested.test | RUN | 0.581186 | 1.685382 | 1.978510 | 0.003868 | 0.003098 | 0.003432 |
| test_less.test | RUN | 0.748564 | 3.259856 | 3.047739 | 0.004672 | 0.004499 | 0.004723 |
| test_equal.test | RUN | 0.668740 | 3.178960 | 2.700969 | 0.004320 | 0.004042 | 0.004273 |
| test_negate.test | RUN | 0.486135 | 1.329496 | 1.458006 | 0.003143 | 0.003127 | 0.003337 |
| test_dereference.test | RUN | 0.543923 | 1.724487 | 1.673357 | 0.003190 | 0.003362 | 0.003168 |
| test_subscript.test | RUN | 0.581545 | 1.956850 | 1.855233 | 0.003450 | 0.003459 | 0.003420 |
| test_forward_iterator.test | RUN | 0.656473 | 2.206538 | 2.221039 | 0.003341 | 0.003449 | 0.003187 |
| test_tuple.test | RUN | 0.596931 | 2.188460 | 2.023748 | 0.003616 | 0.003792 | 0.003777 |
| test_stream.test | RUN | 0.728184 | 3.480696 | 2.802221 | 0.004425 | 0.004460 | 0.004753 |
| test_deduced.test | RUN | 0.494378 | 1.337671 | 1.516616 | 0.003162 | 0.003321 | 0.003256 |
| test_same_type.test | RUN | 0.556635 | 1.649634 | 1.845621 | 0.003532 | 0.003199 | 0.003232 |
| test_member.test | RUN | 0.701136 | 3.363782 | 2.738556 | 0.005326 | 0.004914 | 0.004843 |
| test_null.test | RUN | 0.508254 | 1.626268 | 1.615660 | 0.003288 | 0.003287 | 0.003610 |
| test_free.test | RUN | 0.593438 | 2.678334 | 2.388545 | 0.004376 | 0.004104 | 0.003932 |
| test_is_empty.test | RUN | 0.475292 | 1.357115 | 1.547657 | 0.003279 | 0.003097 | 0.003361 |
| test_dynamic_any_cast.test | RUN | 0.903560 | 3.993489 | 4.014670 | 0.005117 | 0.004628 | 0.004886 |
| test_limits.test | RUN | 0.800196 | 2.741069 | 3.251352 | 0.003348 | 0.003528 | 0.003185 |
| test_param.test | COMPILE | 0.327910 | 0.756695 | 1.065189 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.317206 | 0.616636 | 0.900519 | — | — | — |
| test_sfinae.test | COMPILE | 0.320587 | 0.635038 | 0.912594 | — | — | — |
| test_interface_order.test | COMPILE | 0.320958 | 0.604970 | 0.750586 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.039480 | 0.062758 | 0.070421 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.302593 | 0.570033 | 0.829306 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.306298 | 0.599519 | 0.842352 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.298731 | 0.571101 | 0.734824 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.306003 | 0.590372 | 0.815229 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.300074 | 0.559657 | 0.821833 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.293238 | 0.579499 | 0.693627 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.299568 | 0.606358 | 0.808225 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.318505 | 0.574682 | 0.764456 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.299924 | 0.592140 | 0.811072 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.302009 | 0.519703 | 0.810322 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.298666 | 0.599357 | 0.707027 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.301243 | 0.605654 | 0.833546 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.303815 | 0.583164 | 0.838997 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.304362 | 0.638717 | 0.710782 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.308529 | 0.634919 | 0.852321 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.301024 | 0.555572 | 0.668953 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.301942 | 0.618096 | 0.849118 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.299566 | 0.628232 | 0.850506 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.306710 | 0.585081 | 0.704562 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.306059 | 0.623447 | 0.854105 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.302473 | 0.635031 | 0.836411 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.300895 | 0.586314 | 0.692550 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.280467 | 0.636555 | 0.690227 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.271455 | 0.537207 | 0.620429 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.968×† | 0.879×, 1.057× | 0.835× |
| clang | 1.001×† | 0.938×, 1.064× | 1.075× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44830361139).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 9 | 0.002125s | 0.001922s | 0.002172s | byte equality observed |
| test_add_assign.test | 9 | 0.002070s | 0.001872s | 0.002141s | byte equality observed |
| test_any_cast.test | 8 | 0.002417s | 0.002129s | 0.002349s | byte equality observed |
| test_assign.test | 3 | 0.006526s | 0.005168s | 0.006589s | byte equality observed |
| test_binding.test | 9 | 0.001821s | 0.001776s | 0.002084s | byte equality observed |
| test_binding_of.test | 10 | 0.001785s | 0.001632s | 0.001895s | byte equality observed |
| test_callable.test | 7 | 0.003092s | 0.002876s | 0.003279s | byte equality observed |
| test_construct.test | 5 | 0.003992s | 0.003591s | 0.004213s | byte equality observed |
| test_construct_cref.test | 6 | 0.002790s | 0.002559s | 0.002980s | byte equality observed |
| test_construct_ref.test | 8 | 0.002535s | 0.002298s | 0.002624s | byte equality observed |
| test_deduced.test | 10 | 0.001873s | 0.001632s | 0.001943s | byte equality observed |
| test_dereference.test | 10 | 0.001942s | 0.001799s | 0.002052s | byte equality observed |
| test_dynamic_any_cast.test | 7 | 0.002818s | 0.002537s | 0.002844s | byte equality observed |
| test_equal.test | 9 | 0.002369s | 0.002118s | 0.002500s | byte equality observed |
| test_forward_iterator.test | 9 | 0.001958s | 0.001782s | 0.002061s | byte equality observed |
| test_free.test | 9 | 0.002341s | 0.002114s | 0.002400s | byte equality observed |
| test_increment.test | 10 | 0.001880s | 0.001734s | 0.002027s | byte equality observed |
| test_is_empty.test | 10 | 0.001871s | 0.001695s | 0.001962s | byte equality observed |
| test_less.test | 8 | 0.002336s | 0.002256s | 0.002691s | byte equality observed |
| test_limits.test | 10 | 0.002062s | 0.001860s | 0.002176s | byte equality observed |
| test_member.test | 7 | 0.002877s | 0.002601s | 0.002996s | byte equality observed |
| test_negate.test | 10 | 0.001919s | 0.001702s | 0.001907s | byte equality observed |
| test_nested.test | 10 | 0.001954s | 0.001718s | 0.002006s | byte equality observed |
| test_null.test | 10 | 0.001922s | 0.001787s | 0.002070s | byte equality observed |
| test_reference.test | 6 | 0.002037s | 0.001814s | 0.002132s | byte equality observed |
| test_relaxed.test | 7 | 0.001917s | 0.001767s | 0.001999s | byte equality observed |
| test_same_type.test | 10 | 0.001930s | 0.001763s | 0.002111s | byte equality observed |
| test_stream.test | 8 | 0.002691s | 0.002420s | 0.002851s | byte equality observed |
| test_subscript.test | 10 | 0.002029s | 0.001812s | 0.002163s | byte equality observed |
| test_tuple.test | 10 | 0.002001s | 0.001797s | 0.002145s | byte equality observed |
| test_typeid_of.test | 9 | 0.002014s | 0.001890s | 0.002170s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44830361139).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
