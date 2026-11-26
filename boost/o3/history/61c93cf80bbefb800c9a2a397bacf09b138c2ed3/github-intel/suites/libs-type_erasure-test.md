# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.580615 | 2.421521 | 2.031989 | 0.003133 | 0.003100 | 0.002751 |
| test_increment.test | RUN | 0.554653 | 1.856282 | 1.726799 | 0.002566 | 0.002831 | 0.002432 |
| test_add.test | RUN | 0.705344 | 2.971760 | 2.573154 | 0.003151 | 0.003004 | 0.003032 |
| test_add_assign.test | RUN | 0.741504 | 3.172547 | 2.626381 | 0.003260 | 0.003138 | 0.002876 |
| test_callable.test | RUN | 1.187338 | 5.529768 | 5.728886 | 0.004136 | 0.004284 | 0.004319 |
| test_reference.test | RUN | 0.570938 | 2.262978 | 1.833280 | 0.002869 | 0.003122 | 0.002887 |
| test_construct.test | RUN | 2.746439 | 26.156021 | 17.627781 | 0.005848 | 0.005726 | 0.005433 |
| test_relaxed.test | RUN | 0.541457 | 1.570430 | 1.620804 | 0.002861 | 0.003095 | 0.002760 |
| test_assign.test | RUN | 7.170854 | 85.396804 | 60.040716 | 0.009179 | 0.005572 | 0.005800 |
| test_construct_ref.test | RUN | 0.699153 | 3.872639 | 2.662819 | 0.003542 | 0.003775 | 0.003481 |
| test_construct_cref.test | RUN | 0.803152 | 3.726089 | 3.378913 | 0.004260 | 0.004264 | 0.003901 |
| test_any_cast.test | RUN | 0.669134 | 3.697892 | 2.591655 | 0.003709 | 0.003544 | 0.003339 |
| test_binding_of.test | RUN | 0.540198 | 1.470770 | 1.514306 | 0.003018 | 0.002997 | 0.002502 |
| test_typeid_of.test | RUN | 0.559733 | 2.114939 | 1.742472 | 0.003146 | 0.003057 | 0.002656 |
| test_nested.test | RUN | 0.620296 | 1.951818 | 1.981535 | 0.003039 | 0.002870 | 0.002687 |
| test_less.test | RUN | 0.825453 | 3.968440 | 3.317069 | 0.003704 | 0.003980 | 0.003611 |
| test_equal.test | RUN | 0.740972 | 3.777526 | 2.762838 | 0.003504 | 0.003510 | 0.003383 |
| test_negate.test | RUN | 0.533780 | 1.465510 | 1.586727 | 0.002808 | 0.002908 | 0.002636 |
| test_dereference.test | RUN | 0.616518 | 1.948490 | 1.858320 | 0.003065 | 0.002885 | 0.002857 |
| test_subscript.test | RUN | 0.624034 | 2.221242 | 1.793658 | 0.003165 | 0.003340 | 0.003002 |
| test_forward_iterator.test | RUN | 0.715814 | 2.493038 | 2.338558 | 0.003151 | 0.003168 | 0.002809 |
| test_tuple.test | RUN | 0.641106 | 2.520684 | 1.986092 | 0.003178 | 0.003352 | 0.002839 |
| test_stream.test | RUN | 0.859131 | 4.105474 | 3.205250 | 0.003976 | 0.003933 | 0.003706 |
| test_deduced.test | RUN | 0.530091 | 1.451955 | 1.538186 | 0.002704 | 0.002807 | 0.002705 |
| test_same_type.test | RUN | 0.603590 | 2.012934 | 1.818120 | 0.003010 | 0.002946 | 0.002610 |
| test_member.test | RUN | 0.828662 | 4.011758 | 3.103893 | 0.004163 | 0.003989 | 0.003913 |
| test_null.test | RUN | 0.543178 | 1.954761 | 1.655556 | 0.003050 | 0.003013 | 0.002798 |
| test_free.test | RUN | 0.681978 | 3.409296 | 2.154438 | 0.003519 | 0.003308 | 0.003118 |
| test_is_empty.test | RUN | 0.539613 | 1.672896 | 1.553048 | 0.002958 | 0.002915 | 0.002764 |
| test_dynamic_any_cast.test | RUN | 1.008710 | 4.756237 | 4.523852 | 0.004002 | 0.003997 | 0.003915 |
| test_limits.test | RUN | 0.874319 | 3.336325 | 2.933034 | 0.003053 | 0.003261 | 0.004333 |
| test_param.test | COMPILE | 0.347814 | 0.932776 | 0.981151 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.337984 | 0.698003 | 0.874115 | — | — | — |
| test_sfinae.test | COMPILE | 0.342124 | 0.729411 | 0.893803 | — | — | — |
| test_interface_order.test | COMPILE | 0.331926 | 0.711344 | 0.796168 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.038552 | 0.064836 | 0.071757 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.321186 | 0.686875 | 0.796392 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.320857 | 0.700271 | 0.773993 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.320336 | 0.672900 | 0.797968 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.323436 | 0.663640 | 0.808673 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.321231 | 0.692059 | 0.744096 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.313587 | 0.674848 | 0.774210 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.318476 | 0.661075 | 0.789050 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.338243 | 0.712174 | 0.830756 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.317845 | 0.679494 | 0.774474 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.317020 | 0.673274 | 0.806499 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.319841 | 0.691979 | 0.751312 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.324107 | 0.693113 | 0.810314 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.324849 | 0.730813 | 0.814147 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.326978 | 0.737613 | 0.842603 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.324927 | 0.711860 | 0.830693 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.322751 | 0.697893 | 0.737430 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.324909 | 0.715102 | 0.831554 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.325137 | 0.676251 | 0.828608 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.323897 | 0.714773 | 0.842353 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.330258 | 0.703048 | 0.838911 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.324201 | 0.678906 | 0.837709 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.333787 | 0.706996 | 0.780085 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.332862 | 0.561625 | 0.837564 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.304753 | 0.572846 | 0.627214 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.030×† | 1.083×, 0.976× | 0.959× |
| clang | 1.077×† | 1.111×, 1.043× | 1.020× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45754596224).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 9 | 0.001827s | 0.002098s | 0.002078s | byte equality observed |
| test_add_assign.test | 8 | 0.001818s | 0.002078s | 0.002080s | byte equality observed |
| test_any_cast.test | 9 | 0.001968s | 0.002301s | 0.002362s | byte equality observed |
| test_assign.test | 4 | 0.005286s | 0.005562s | 0.006461s | byte equality observed |
| test_binding.test | 10 | 0.001717s | 0.002033s | 0.002038s | byte equality observed |
| test_binding_of.test | 10 | 0.001625s | 0.001972s | 0.001926s | byte equality observed |
| test_callable.test | 8 | 0.002371s | 0.002789s | 0.002772s | byte equality observed |
| test_construct.test | 5 | 0.003083s | 0.003664s | 0.003573s | byte equality observed |
| test_construct_cref.test | 8 | 0.002193s | 0.002562s | 0.002612s | byte equality observed |
| test_construct_ref.test | 9 | 0.002008s | 0.002426s | 0.002321s | byte equality observed |
| test_deduced.test | 10 | 0.001669s | 0.001923s | 0.001901s | byte equality observed |
| test_dereference.test | 10 | 0.001753s | 0.002026s | 0.002013s | byte equality observed |
| test_dynamic_any_cast.test | 8 | 0.002258s | 0.002585s | 0.002597s | byte equality observed |
| test_equal.test | 9 | 0.001934s | 0.002245s | 0.002295s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001729s | 0.002005s | 0.002008s | byte equality observed |
| test_free.test | 9 | 0.002064s | 0.002247s | 0.002229s | byte equality observed |
| test_increment.test | 10 | 0.001895s | 0.001968s | 0.001958s | byte equality observed |
| test_is_empty.test | 10 | 0.001919s | 0.001956s | 0.001973s | byte equality observed |
| test_less.test | 9 | 0.002416s | 0.002492s | 0.002352s | byte equality observed |
| test_limits.test | 9 | 0.002212s | 0.002124s | 0.002080s | byte equality observed |
| test_member.test | 7 | 0.002698s | 0.002718s | 0.002671s | byte equality observed |
| test_negate.test | 10 | 0.001979s | 0.001982s | 0.001911s | byte equality observed |
| test_nested.test | 7 | 0.002018s | 0.002013s | 0.001932s | byte equality observed |
| test_null.test | 9 | 0.002102s | 0.002055s | 0.002060s | byte equality observed |
| test_reference.test | 10 | 0.002097s | 0.002053s | 0.002053s | byte equality observed |
| test_relaxed.test | 10 | 0.002059s | 0.001973s | 0.001941s | byte equality observed |
| test_same_type.test | 10 | 0.002074s | 0.002042s | 0.002025s | byte equality observed |
| test_stream.test | 9 | 0.002556s | 0.002533s | 0.002485s | byte equality observed |
| test_subscript.test | 10 | 0.002131s | 0.002052s | 0.002048s | byte equality observed |
| test_tuple.test | 10 | 0.002092s | 0.002090s | 0.002044s | byte equality observed |
| test_typeid_of.test | 10 | 0.002133s | 0.002089s | 0.002057s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45754596224).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
