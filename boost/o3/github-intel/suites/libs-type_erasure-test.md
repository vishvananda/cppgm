# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.417706 | 1.811832 | 1.490371 | 0.002203 | 0.002287 | 0.002166 |
| test_increment.test | RUN | 0.413534 | 1.365665 | 1.292393 | 0.002245 | 0.002298 | 0.002217 |
| test_add.test | RUN | 0.532907 | 2.197767 | 1.937035 | 0.002406 | 0.002189 | 0.002364 |
| test_add_assign.test | RUN | 0.556452 | 2.391591 | 2.024523 | 0.002445 | 0.002533 | 0.002170 |
| test_callable.test | RUN | 0.904090 | 4.067436 | 4.503699 | 0.003168 | 0.003196 | 0.002724 |
| test_reference.test | RUN | 0.429015 | 1.649097 | 1.378379 | 0.002193 | 0.002486 | 0.002216 |
| test_construct.test | RUN | 2.073381 | 20.573003 | 13.575543 | 0.004250 | 0.004178 | 0.003845 |
| test_relaxed.test | RUN | 0.413731 | 1.143693 | 1.204645 | 0.002221 | 0.002234 | 0.001914 |
| test_assign.test | RUN | 5.452802 | 64.667600 | 47.870303 | 0.006466 | 0.003978 | 0.004347 |
| test_construct_ref.test | RUN | 0.522524 | 2.825986 | 1.942596 | 0.002608 | 0.002782 | 0.002598 |
| test_construct_cref.test | RUN | 0.582412 | 2.707847 | 2.552845 | 0.003080 | 0.003128 | 0.002873 |
| test_any_cast.test | RUN | 0.501281 | 2.818295 | 1.903857 | 0.002770 | 0.002831 | 0.002479 |
| test_binding_of.test | RUN | 0.396877 | 1.032714 | 1.130911 | 0.002038 | 0.002174 | 0.002283 |
| test_typeid_of.test | RUN | 0.412241 | 1.563801 | 1.330366 | 0.002448 | 0.002446 | 0.002362 |
| test_nested.test | RUN | 0.453210 | 1.523541 | 1.500906 | 0.002269 | 0.002427 | 0.002097 |
| test_less.test | RUN | 0.637980 | 3.002132 | 2.490287 | 0.002954 | 0.002866 | 0.002550 |
| test_equal.test | RUN | 0.545639 | 2.935350 | 2.029343 | 0.002726 | 0.002777 | 0.002319 |
| test_negate.test | RUN | 0.394230 | 1.134101 | 1.157806 | 0.002109 | 0.002368 | 0.002102 |
| test_dereference.test | RUN | 0.456470 | 1.529668 | 1.388003 | 0.002235 | 0.002592 | 0.002185 |
| test_subscript.test | RUN | 0.442768 | 1.719331 | 1.349898 | 0.002488 | 0.002410 | 0.002328 |
| test_forward_iterator.test | RUN | 0.528599 | 1.940327 | 1.785840 | 0.002456 | 0.002494 | 0.001962 |
| test_tuple.test | RUN | 0.489403 | 1.951375 | 1.422758 | 0.002748 | 0.002643 | 0.002124 |
| test_stream.test | RUN | 0.604142 | 3.277210 | 2.445356 | 0.002882 | 0.002758 | 0.002663 |
| test_deduced.test | RUN | 0.389395 | 1.150799 | 1.139628 | 0.002082 | 0.002336 | 0.002149 |
| test_same_type.test | RUN | 0.455289 | 1.583608 | 1.426186 | 0.002390 | 0.002390 | 0.002272 |
| test_member.test | RUN | 0.565159 | 3.138446 | 2.263414 | 0.002773 | 0.003164 | 0.002593 |
| test_null.test | RUN | 0.392800 | 1.483576 | 1.230992 | 0.002598 | 0.002357 | 0.002310 |
| test_free.test | RUN | 0.478598 | 2.562567 | 1.751019 | 0.002601 | 0.002964 | 0.002647 |
| test_is_empty.test | RUN | 0.404552 | 1.234911 | 1.164184 | 0.002134 | 0.002165 | 0.002096 |
| test_dynamic_any_cast.test | RUN | 0.734119 | 3.708331 | 3.425475 | 0.003021 | 0.002629 | 0.002840 |
| test_limits.test | RUN | 0.657030 | 2.556521 | 2.284951 | 0.002256 | 0.002517 | 0.002137 |
| test_param.test | COMPILE | 0.254556 | 0.666703 | 0.730768 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.247276 | 0.512144 | 0.637402 | — | — | — |
| test_sfinae.test | COMPILE | 0.251350 | 0.516382 | 0.674304 | — | — | — |
| test_interface_order.test | COMPILE | 0.246264 | 0.505602 | 0.649159 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.028502 | 0.048849 | 0.055083 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.235851 | 0.508152 | 0.595472 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.235266 | 0.506922 | 0.585706 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.230465 | 0.495724 | 0.593064 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.229923 | 0.497290 | 0.589032 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.235302 | 0.497313 | 0.569924 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.228641 | 0.493471 | 0.575996 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.230489 | 0.492686 | 0.590260 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.240229 | 0.515640 | 0.603001 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.229864 | 0.486063 | 0.576753 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.229514 | 0.468597 | 0.589876 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.227657 | 0.502792 | 0.598665 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.227946 | 0.496130 | 0.597924 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.237680 | 0.536362 | 0.613960 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.238211 | 0.526103 | 0.607882 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.236392 | 0.520649 | 0.623756 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.231971 | 0.515672 | 0.587719 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.234978 | 0.508821 | 0.619747 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.232921 | 0.515167 | 0.623899 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.233412 | 0.516755 | 0.628063 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.233682 | 0.513982 | 0.602517 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.240141 | 0.509754 | 0.618689 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.232668 | 0.507738 | 0.620301 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.225549 | 0.509711 | 0.645488 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.211122 | 0.509951 | 0.515730 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.968× | 0.969×, 0.968× | 1.000× |
| clang | 0.964× | 0.965×, 0.963× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45651777895).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 10 | 0.001372s | 0.001356s | 0.001352s | byte equality observed |
| test_add_assign.test | 10 | 0.001389s | 0.001354s | 0.001323s | byte equality observed |
| test_any_cast.test | 10 | 0.001468s | 0.001436s | 0.001492s | byte equality observed |
| test_assign.test | 5 | 0.003944s | 0.003250s | 0.003741s | byte equality observed |
| test_binding.test | 10 | 0.001288s | 0.001257s | 0.001249s | byte equality observed |
| test_binding_of.test | 10 | 0.001256s | 0.001191s | 0.001233s | byte equality observed |
| test_callable.test | 10 | 0.001736s | 0.001681s | 0.001666s | byte equality observed |
| test_construct.test | 8 | 0.002202s | 0.002148s | 0.002127s | byte equality observed |
| test_construct_cref.test | 10 | 0.001621s | 0.001594s | 0.001574s | byte equality observed |
| test_construct_ref.test | 10 | 0.001481s | 0.001493s | 0.001456s | byte equality observed |
| test_deduced.test | 10 | 0.001278s | 0.001249s | 0.001232s | byte equality observed |
| test_dereference.test | 10 | 0.001307s | 0.001261s | 0.001258s | byte equality observed |
| test_dynamic_any_cast.test | 9 | 0.001649s | 0.001591s | 0.001575s | byte equality observed |
| test_equal.test | 10 | 0.001440s | 0.001412s | 0.001437s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001281s | 0.001314s | 0.001249s | byte equality observed |
| test_free.test | 10 | 0.001402s | 0.001391s | 0.001366s | byte equality observed |
| test_increment.test | 10 | 0.001328s | 0.001294s | 0.001252s | byte equality observed |
| test_is_empty.test | 10 | 0.001269s | 0.001244s | 0.001213s | byte equality observed |
| test_less.test | 10 | 0.001524s | 0.001466s | 0.001458s | byte equality observed |
| test_limits.test | 10 | 0.001345s | 0.001308s | 0.001335s | byte equality observed |
| test_member.test | 10 | 0.001633s | 0.001591s | 0.001588s | byte equality observed |
| test_negate.test | 10 | 0.001273s | 0.001233s | 0.001239s | byte equality observed |
| test_nested.test | 10 | 0.001270s | 0.001214s | 0.001237s | byte equality observed |
| test_null.test | 10 | 0.001298s | 0.001262s | 0.001274s | byte equality observed |
| test_reference.test | 10 | 0.001307s | 0.001277s | 0.001288s | byte equality observed |
| test_relaxed.test | 10 | 0.001275s | 0.001228s | 0.001271s | byte equality observed |
| test_same_type.test | 10 | 0.001299s | 0.001278s | 0.001259s | byte equality observed |
| test_stream.test | 10 | 0.001569s | 0.001488s | 0.001523s | byte equality observed |
| test_subscript.test | 10 | 0.001331s | 0.001311s | 0.001257s | byte equality observed |
| test_tuple.test | 10 | 0.001335s | 0.001331s | 0.001263s | byte equality observed |
| test_typeid_of.test | 10 | 0.001296s | 0.001292s | 0.001269s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45651777895).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
