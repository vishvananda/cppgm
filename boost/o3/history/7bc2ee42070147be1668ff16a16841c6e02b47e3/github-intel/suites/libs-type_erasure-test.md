# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.599351 | 2.628746 | 2.238194 | 0.002809 | 0.003007 | 0.002906 |
| test_increment.test | RUN | 0.605815 | 1.953882 | 1.931761 | 0.002920 | 0.002917 | 0.002804 |
| test_add.test | RUN | 0.726689 | 3.150897 | 2.892891 | 0.002919 | 0.003131 | 0.003054 |
| test_add_assign.test | RUN | 0.755840 | 3.368417 | 3.009770 | 0.003178 | 0.003176 | 0.003047 |
| test_callable.test | RUN | 1.270745 | 5.745687 | 6.519203 | 0.004389 | 0.004693 | 0.004409 |
| test_reference.test | RUN | 0.584319 | 2.389489 | 2.052877 | 0.002870 | 0.003109 | 0.003032 |
| test_construct.test | RUN | 2.780157 | 27.450632 | 19.093470 | 0.005963 | 0.005807 | 0.005839 |
| test_relaxed.test | RUN | 0.555313 | 1.689927 | 1.809655 | 0.002695 | 0.002828 | 0.002828 |
| test_assign.test | RUN | 7.224740 | 83.767542 | 66.580192 | 0.009480 | 0.005248 | 0.005905 |
| test_construct_ref.test | RUN | 0.725626 | 4.168687 | 2.973147 | 0.003694 | 0.003476 | 0.003515 |
| test_construct_cref.test | RUN | 0.826716 | 3.802475 | 3.680518 | 0.004190 | 0.004223 | 0.004176 |
| test_any_cast.test | RUN | 0.679694 | 3.983039 | 2.906350 | 0.003632 | 0.003621 | 0.003492 |
| test_binding_of.test | RUN | 0.543422 | 1.497680 | 1.746114 | 0.002650 | 0.002856 | 0.002703 |
| test_typeid_of.test | RUN | 0.585188 | 2.273796 | 1.949289 | 0.003120 | 0.003214 | 0.003020 |
| test_nested.test | RUN | 0.638327 | 2.116468 | 2.235319 | 0.002884 | 0.002904 | 0.002791 |
| test_less.test | RUN | 0.829955 | 4.235139 | 3.710301 | 0.003752 | 0.003682 | 0.003690 |
| test_equal.test | RUN | 0.758865 | 4.022338 | 3.072416 | 0.003497 | 0.003654 | 0.003509 |
| test_negate.test | RUN | 0.547966 | 1.585753 | 1.793068 | 0.002819 | 0.002823 | 0.002644 |
| test_dereference.test | RUN | 0.612585 | 2.164978 | 2.112582 | 0.002905 | 0.003024 | 0.002898 |
| test_subscript.test | RUN | 0.633724 | 2.461796 | 2.245068 | 0.003035 | 0.002987 | 0.003030 |
| test_forward_iterator.test | RUN | 0.757606 | 2.664222 | 2.704915 | 0.002984 | 0.002801 | 0.002600 |
| test_tuple.test | RUN | 0.679954 | 2.629302 | 2.238522 | 0.003175 | 0.002848 | 0.002990 |
| test_stream.test | RUN | 0.852866 | 4.286339 | 3.650943 | 0.003989 | 0.003881 | 0.003798 |
| test_deduced.test | RUN | 0.561272 | 1.549787 | 1.777840 | 0.002696 | 0.002600 | 0.002838 |
| test_same_type.test | RUN | 0.623564 | 2.089933 | 2.025712 | 0.003216 | 0.002794 | 0.002734 |
| test_member.test | RUN | 0.841332 | 4.264428 | 3.535732 | 0.003928 | 0.004240 | 0.004228 |
| test_null.test | RUN | 0.564047 | 2.120630 | 1.871642 | 0.002846 | 0.002949 | 0.002884 |
| test_free.test | RUN | 0.715630 | 3.631063 | 2.407925 | 0.003466 | 0.003458 | 0.003133 |
| test_is_empty.test | RUN | 0.539379 | 1.682990 | 1.777467 | 0.002869 | 0.002906 | 0.002832 |
| test_dynamic_any_cast.test | RUN | 1.037932 | 5.125264 | 4.812609 | 0.004153 | 0.004454 | 0.003600 |
| test_limits.test | RUN | 0.935054 | 3.532082 | 3.482028 | 0.003110 | 0.003297 | 0.002974 |
| test_param.test | COMPILE | 0.378061 | 0.942719 | 1.141222 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.362577 | 0.758955 | 0.976861 | — | — | — |
| test_sfinae.test | COMPILE | 0.362271 | 0.763673 | 1.030760 | — | — | — |
| test_interface_order.test | COMPILE | 0.352916 | 0.728806 | 1.012691 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.041639 | 0.067111 | 0.079428 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.340200 | 0.689793 | 0.929937 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.343382 | 0.787645 | 0.855359 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.343279 | 0.692764 | 0.929368 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.343023 | 0.741280 | 0.927684 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.338294 | 0.761138 | 0.850605 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.335563 | 0.692817 | 0.909056 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.339325 | 0.770069 | 0.937453 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.359253 | 0.774409 | 0.901430 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.337907 | 0.704763 | 0.900974 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.337607 | 0.745719 | 0.930677 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.343539 | 0.720729 | 0.852394 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.339278 | 0.752190 | 0.929367 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.341350 | 0.796022 | 0.924943 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.348002 | 0.753481 | 0.952735 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.343074 | 0.790134 | 0.965201 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.341396 | 0.759142 | 0.918131 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.343686 | 0.710727 | 0.883737 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.345949 | 0.760133 | 0.961243 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.352640 | 0.773316 | 0.972876 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.347762 | 0.719257 | 0.915049 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.344210 | 0.760952 | 0.974481 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.339582 | 0.768452 | 0.968042 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.327459 | 0.755436 | 0.924520 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.245792 | 0.574808 | 0.644206 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.970× | 0.970×, 0.970× | 0.998× |
| clang | 0.958× | 0.959×, 0.956× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44927958294).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 10 | 0.001733s | 0.001670s | 0.001698s | byte equality observed |
| test_add_assign.test | 10 | 0.001690s | 0.001670s | 0.001675s | byte equality observed |
| test_any_cast.test | 10 | 0.001872s | 0.001812s | 0.001787s | byte equality observed |
| test_assign.test | 4 | 0.005217s | 0.004368s | 0.004927s | byte equality observed |
| test_binding.test | 10 | 0.001574s | 0.001634s | 0.001556s | byte equality observed |
| test_binding_of.test | 10 | 0.001549s | 0.001551s | 0.001484s | byte equality observed |
| test_callable.test | 9 | 0.002221s | 0.002114s | 0.002149s | byte equality observed |
| test_construct.test | 7 | 0.002862s | 0.002839s | 0.002786s | byte equality observed |
| test_construct_cref.test | 9 | 0.002064s | 0.002055s | 0.001965s | byte equality observed |
| test_construct_ref.test | 10 | 0.001916s | 0.001866s | 0.001819s | byte equality observed |
| test_deduced.test | 10 | 0.001553s | 0.001540s | 0.001531s | byte equality observed |
| test_dereference.test | 10 | 0.001623s | 0.001592s | 0.001555s | byte equality observed |
| test_dynamic_any_cast.test | 9 | 0.002047s | 0.001985s | 0.002046s | byte equality observed |
| test_equal.test | 9 | 0.001879s | 0.001819s | 0.001720s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001611s | 0.001647s | 0.001581s | byte equality observed |
| test_free.test | 10 | 0.001823s | 0.001741s | 0.001765s | byte equality observed |
| test_increment.test | 10 | 0.001587s | 0.001564s | 0.001566s | byte equality observed |
| test_is_empty.test | 10 | 0.001581s | 0.001590s | 0.001479s | byte equality observed |
| test_less.test | 7 | 0.001913s | 0.001891s | 0.001878s | byte equality observed |
| test_limits.test | 10 | 0.001708s | 0.001654s | 0.001622s | byte equality observed |
| test_member.test | 9 | 0.002133s | 0.002027s | 0.002035s | byte equality observed |
| test_negate.test | 10 | 0.001542s | 0.001507s | 0.001501s | byte equality observed |
| test_nested.test | 9 | 0.001640s | 0.001571s | 0.001517s | byte equality observed |
| test_null.test | 10 | 0.001614s | 0.001620s | 0.001561s | byte equality observed |
| test_reference.test | 10 | 0.001646s | 0.001672s | 0.001563s | byte equality observed |
| test_relaxed.test | 10 | 0.001602s | 0.001536s | 0.001602s | byte equality observed |
| test_same_type.test | 10 | 0.001632s | 0.001594s | 0.001533s | byte equality observed |
| test_stream.test | 9 | 0.002015s | 0.001946s | 0.001881s | byte equality observed |
| test_subscript.test | 10 | 0.001637s | 0.001641s | 0.001624s | byte equality observed |
| test_tuple.test | 10 | 0.001676s | 0.001616s | 0.001618s | byte equality observed |
| test_typeid_of.test | 9 | 0.001662s | 0.001671s | 0.001579s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44927958294).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
