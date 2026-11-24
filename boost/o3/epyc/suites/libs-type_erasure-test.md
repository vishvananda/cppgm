# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.503158 | 2.046376 | 1.864589 | 0.003469 | 0.003243 | 0.003272 |
| test_increment.test | RUN | 0.531485 | 1.523758 | 1.604446 | 0.003363 | 0.003282 | 0.003165 |
| test_add.test | RUN | 0.621182 | 2.437145 | 2.357586 | 0.003478 | 0.003746 | 0.003454 |
| test_add_assign.test | RUN | 0.646443 | 2.612337 | 2.485909 | 0.003645 | 0.003717 | 0.003766 |
| test_callable.test | RUN | 1.076470 | 4.496442 | 5.416342 | 0.005694 | 0.006115 | 0.005904 |
| test_reference.test | RUN | 0.495857 | 1.814223 | 1.724036 | 0.003295 | 0.003480 | 0.003506 |
| test_construct.test | RUN | 2.212396 | 22.813714 | 15.508761 | 0.007372 | 0.007203 | 0.006447 |
| test_relaxed.test | RUN | 0.492542 | 1.340645 | 1.525852 | 0.002831 | 0.003271 | 0.003206 |
| test_assign.test | RUN | 5.470015 | 71.553722 | 53.280055 | 0.011163 | 0.006999 | 0.007107 |
| test_construct_ref.test | RUN | 0.618971 | 3.099297 | 2.484974 | 0.004078 | 0.004040 | 0.004557 |
| test_construct_cref.test | RUN | 0.684668 | 3.053975 | 2.990515 | 0.004947 | 0.004773 | 0.005197 |
| test_any_cast.test | RUN | 0.578974 | 3.051998 | 2.412942 | 0.004003 | 0.003767 | 0.004168 |
| test_binding_of.test | RUN | 0.475891 | 1.194086 | 1.429287 | 0.003098 | 0.002927 | 0.003016 |
| test_typeid_of.test | RUN | 0.506538 | 1.752569 | 1.665166 | 0.003388 | 0.003433 | 0.003376 |
| test_nested.test | RUN | 0.556231 | 1.650646 | 1.892391 | 0.003080 | 0.003295 | 0.002847 |
| test_less.test | RUN | 0.694863 | 3.258436 | 2.862897 | 0.004404 | 0.004745 | 0.004555 |
| test_equal.test | RUN | 0.652007 | 3.107268 | 2.547808 | 0.004025 | 0.003903 | 0.004213 |
| test_negate.test | RUN | 0.464749 | 1.237473 | 1.440823 | 0.003286 | 0.002827 | 0.003034 |
| test_dereference.test | RUN | 0.531792 | 1.537369 | 1.635453 | 0.003401 | 0.003246 | 0.003090 |
| test_subscript.test | RUN | 0.554845 | 1.744175 | 1.861493 | 0.003450 | 0.003622 | 0.003608 |
| test_forward_iterator.test | RUN | 0.626774 | 2.062456 | 2.201669 | 0.003293 | 0.003315 | 0.002941 |
| test_tuple.test | RUN | 0.557583 | 1.936953 | 1.664159 | 0.003623 | 0.003372 | 0.003336 |
| test_stream.test | RUN | 0.724341 | 3.328307 | 3.013433 | 0.004863 | 0.004456 | 0.004657 |
| test_deduced.test | RUN | 0.473035 | 1.154498 | 1.488417 | 0.002866 | 0.002828 | 0.002874 |
| test_same_type.test | RUN | 0.523680 | 1.554640 | 1.620768 | 0.003478 | 0.003423 | 0.002885 |
| test_member.test | RUN | 0.693078 | 3.325696 | 2.526829 | 0.005117 | 0.005175 | 0.005034 |
| test_null.test | RUN | 0.474389 | 1.566426 | 1.566821 | 0.003305 | 0.003381 | 0.003417 |
| test_free.test | RUN | 0.591735 | 2.665549 | 2.201084 | 0.004106 | 0.004111 | 0.004345 |
| test_is_empty.test | RUN | 0.474132 | 1.352557 | 1.465039 | 0.003265 | 0.002968 | 0.003280 |
| test_dynamic_any_cast.test | RUN | 0.857771 | 4.033323 | 4.210792 | 0.004909 | 0.005268 | 0.005160 |
| test_limits.test | RUN | 0.798451 | 2.803212 | 2.726879 | 0.003465 | 0.003566 | 0.002937 |
| test_param.test | COMPILE | 0.311652 | 0.744349 | 0.954946 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.307936 | 0.573484 | 0.876390 | — | — | — |
| test_sfinae.test | COMPILE | 0.312962 | 0.577334 | 0.742417 | — | — | — |
| test_interface_order.test | COMPILE | 0.304068 | 0.579181 | 0.828314 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.039857 | 0.061692 | 0.064888 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.294223 | 0.594984 | 0.682518 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.295035 | 0.588572 | 0.760476 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.291471 | 0.571510 | 0.694514 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.293394 | 0.574498 | 0.773829 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.292904 | 0.585274 | 0.789252 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.283383 | 0.579604 | 0.696381 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.290014 | 0.566816 | 0.785183 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.302232 | 0.609022 | 0.842613 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.291731 | 0.582054 | 0.714274 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.291496 | 0.530942 | 0.684876 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.289387 | 0.571039 | 0.776612 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.292629 | 0.594493 | 0.795259 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.296025 | 0.563561 | 0.734835 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.295775 | 0.624629 | 0.822800 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.296997 | 0.632709 | 0.817248 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.289501 | 0.553790 | 0.699897 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.298380 | 0.600192 | 0.814991 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.295200 | 0.604273 | 0.822259 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.301002 | 0.570914 | 0.744626 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.297450 | 0.599743 | 0.813706 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.294372 | 0.611457 | 0.832048 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.297888 | 0.582086 | 0.704470 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.293042 | 0.506574 | 0.552350 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.233665 | 0.489548 | 0.656876 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.927×† | 0.882×, 0.971× | 1.037× |
| clang | 0.984×† | 0.901×, 1.067× | 0.850× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45272062060).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 9 | 0.001940s | 0.001886s | 0.001927s | byte equality observed |
| test_add_assign.test | 9 | 0.001992s | 0.001886s | 0.001893s | byte equality observed |
| test_any_cast.test | 7 | 0.002230s | 0.002149s | 0.002210s | byte equality observed |
| test_assign.test | 4 | 0.005982s | 0.004985s | 0.005548s | byte equality observed |
| test_binding.test | 10 | 0.001784s | 0.001799s | 0.001762s | byte equality observed |
| test_binding_of.test | 10 | 0.001683s | 0.001635s | 0.001620s | byte equality observed |
| test_callable.test | 7 | 0.002893s | 0.002777s | 0.002826s | byte equality observed |
| test_construct.test | 6 | 0.003705s | 0.003614s | 0.003672s | byte equality observed |
| test_construct_cref.test | 7 | 0.002565s | 0.002576s | 0.002597s | byte equality observed |
| test_construct_ref.test | 8 | 0.002351s | 0.002255s | 0.002294s | byte equality observed |
| test_deduced.test | 10 | 0.001702s | 0.001695s | 0.001665s | byte equality observed |
| test_dereference.test | 10 | 0.001844s | 0.001760s | 0.001798s | byte equality observed |
| test_dynamic_any_cast.test | 7 | 0.002588s | 0.002448s | 0.002530s | byte equality observed |
| test_equal.test | 8 | 0.002196s | 0.002109s | 0.002117s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001794s | 0.001733s | 0.001779s | byte equality observed |
| test_free.test | 9 | 0.002148s | 0.002119s | 0.002116s | byte equality observed |
| test_increment.test | 10 | 0.001750s | 0.001680s | 0.001692s | byte equality observed |
| test_is_empty.test | 10 | 0.001760s | 0.001675s | 0.001737s | byte equality observed |
| test_less.test | 8 | 0.002334s | 0.002259s | 0.002284s | byte equality observed |
| test_limits.test | 9 | 0.001905s | 0.001832s | 0.001873s | byte equality observed |
| test_member.test | 7 | 0.002678s | 0.002568s | 0.002692s | byte equality observed |
| test_negate.test | 10 | 0.001690s | 0.001656s | 0.001731s | byte equality observed |
| test_nested.test | 10 | 0.001734s | 0.001720s | 0.001702s | byte equality observed |
| test_null.test | 9 | 0.001796s | 0.001798s | 0.001802s | byte equality observed |
| test_reference.test | 10 | 0.001883s | 0.001811s | 0.001856s | byte equality observed |
| test_relaxed.test | 9 | 0.001720s | 0.001663s | 0.001681s | byte equality observed |
| test_same_type.test | 10 | 0.001826s | 0.001786s | 0.001769s | byte equality observed |
| test_stream.test | 8 | 0.002474s | 0.002403s | 0.002446s | byte equality observed |
| test_subscript.test | 10 | 0.001869s | 0.001790s | 0.001901s | byte equality observed |
| test_tuple.test | 9 | 0.001854s | 0.001847s | 0.002128s | byte equality observed |
| test_typeid_of.test | 10 | 0.001892s | 0.001872s | 0.002132s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45272062060).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
