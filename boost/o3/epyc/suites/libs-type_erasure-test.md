# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.498378 | 2.046799 | 1.843276 | 0.003466 | 0.003329 | 0.003321 |
| test_increment.test | RUN | 0.510038 | 1.551205 | 1.637791 | 0.003106 | 0.002955 | 0.003144 |
| test_add.test | RUN | 0.615580 | 2.457745 | 2.360128 | 0.003506 | 0.003625 | 0.003764 |
| test_add_assign.test | RUN | 0.634458 | 2.620003 | 2.503752 | 0.003492 | 0.003714 | 0.003445 |
| test_callable.test | RUN | 1.050043 | 4.474026 | 5.299895 | 0.005613 | 0.006045 | 0.005574 |
| test_reference.test | RUN | 0.495366 | 1.815029 | 1.701246 | 0.003513 | 0.003464 | 0.003326 |
| test_construct.test | RUN | 2.201939 | 22.522686 | 15.664158 | 0.007809 | 0.007273 | 0.007607 |
| test_relaxed.test | RUN | 0.495210 | 1.321309 | 1.509560 | 0.003013 | 0.003101 | 0.003061 |
| test_assign.test | RUN | 5.456219 | 69.098400 | 52.090925 | 0.010973 | 0.006956 | 0.007148 |
| test_construct_ref.test | RUN | 0.595982 | 3.101511 | 2.371262 | 0.004462 | 0.004474 | 0.004400 |
| test_construct_cref.test | RUN | 0.673983 | 2.937339 | 3.014186 | 0.005002 | 0.004859 | 0.005116 |
| test_any_cast.test | RUN | 0.572566 | 3.067977 | 2.335617 | 0.003802 | 0.004194 | 0.003957 |
| test_binding_of.test | RUN | 0.476212 | 1.222737 | 1.398571 | 0.002764 | 0.003008 | 0.003093 |
| test_typeid_of.test | RUN | 0.513148 | 1.733299 | 1.596476 | 0.003315 | 0.003462 | 0.003600 |
| test_nested.test | RUN | 0.532731 | 1.732378 | 1.832006 | 0.003233 | 0.003144 | 0.003094 |
| test_less.test | RUN | 0.680673 | 3.240729 | 2.968563 | 0.004680 | 0.004151 | 0.004556 |
| test_equal.test | RUN | 0.647378 | 3.077376 | 2.488990 | 0.004049 | 0.003954 | 0.004185 |
| test_negate.test | RUN | 0.461836 | 1.274966 | 1.434777 | 0.003198 | 0.003039 | 0.003040 |
| test_dereference.test | RUN | 0.525914 | 1.495406 | 1.649322 | 0.003291 | 0.003462 | 0.002931 |
| test_subscript.test | RUN | 0.553869 | 1.776133 | 1.814512 | 0.003458 | 0.003238 | 0.003136 |
| test_forward_iterator.test | RUN | 0.638377 | 2.016325 | 1.866861 | 0.004005 | 0.003110 | 0.003241 |
| test_tuple.test | RUN | 0.556541 | 1.966599 | 1.938902 | 0.003460 | 0.003200 | 0.003557 |
| test_stream.test | RUN | 0.725347 | 3.443610 | 2.992527 | 0.004890 | 0.004803 | 0.004263 |
| test_deduced.test | RUN | 0.477978 | 1.259162 | 1.343303 | 0.003083 | 0.003108 | 0.002848 |
| test_same_type.test | RUN | 0.528434 | 1.698442 | 1.819535 | 0.003343 | 0.003463 | 0.003342 |
| test_member.test | RUN | 0.678753 | 3.368139 | 2.888820 | 0.004680 | 0.005034 | 0.005075 |
| test_null.test | RUN | 0.488489 | 1.639130 | 1.341699 | 0.002749 | 0.003346 | 0.003204 |
| test_free.test | RUN | 0.570237 | 2.691428 | 2.208901 | 0.004157 | 0.003955 | 0.004338 |
| test_is_empty.test | RUN | 0.455180 | 1.332948 | 1.362267 | 0.003238 | 0.002829 | 0.002698 |
| test_dynamic_any_cast.test | RUN | 0.850307 | 4.005237 | 3.772583 | 0.004712 | 0.004802 | 0.004770 |
| test_limits.test | RUN | 0.781309 | 2.601974 | 2.954844 | 0.003030 | 0.003452 | 0.003105 |
| test_param.test | COMPILE | 0.313074 | 0.799401 | 0.983958 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.304271 | 0.585537 | 0.850585 | — | — | — |
| test_sfinae.test | COMPILE | 0.308900 | 0.637795 | 0.870020 | — | — | — |
| test_interface_order.test | COMPILE | 0.299188 | 0.610425 | 0.806268 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.038101 | 0.060052 | 0.063372 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.293346 | 0.589260 | 0.684920 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.291190 | 0.576101 | 0.795316 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.294340 | 0.584235 | 0.786147 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.290379 | 0.590566 | 0.684032 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.290547 | 0.564527 | 0.803469 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.280291 | 0.567865 | 0.758250 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.294261 | 0.599070 | 0.704697 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.302392 | 0.541185 | 0.806010 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.285857 | 0.576316 | 0.676219 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.284667 | 0.588206 | 0.790022 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.293271 | 0.523500 | 0.777758 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.287911 | 0.586655 | 0.798241 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.288260 | 0.623109 | 0.717770 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.289505 | 0.577296 | 0.812510 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.296561 | 0.607193 | 0.833998 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.288112 | 0.591282 | 0.774219 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.290428 | 0.574339 | 0.762489 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.289842 | 0.585935 | 0.814857 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.300307 | 0.600927 | 0.690138 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.297039 | 0.575731 | 0.814735 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.293967 | 0.596444 | 0.702039 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.291598 | 0.610377 | 0.822209 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.256167 | 0.563066 | 0.670040 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.201656 | 0.427578 | 0.639603 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.965×† | 0.958×, 0.973× | 1.092× |
| clang | 0.900×† | 0.822×, 0.978× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44813597235).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 9 | 0.001954s | 0.001890s | 0.001887s | byte equality observed |
| test_add_assign.test | 10 | 0.001907s | 0.001892s | 0.001857s | byte equality observed |
| test_any_cast.test | 8 | 0.002225s | 0.002139s | 0.002160s | byte equality observed |
| test_assign.test | 4 | 0.006219s | 0.005002s | 0.005415s | byte equality observed |
| test_binding.test | 10 | 0.001835s | 0.001804s | 0.001779s | byte equality observed |
| test_binding_of.test | 10 | 0.001679s | 0.001630s | 0.001643s | byte equality observed |
| test_callable.test | 7 | 0.002876s | 0.002814s | 0.002793s | byte equality observed |
| test_construct.test | 5 | 0.003757s | 0.003575s | 0.003599s | byte equality observed |
| test_construct_cref.test | 6 | 0.002554s | 0.002579s | 0.002534s | byte equality observed |
| test_construct_ref.test | 7 | 0.002361s | 0.002305s | 0.002296s | byte equality observed |
| test_deduced.test | 10 | 0.001665s | 0.001683s | 0.001645s | byte equality observed |
| test_dereference.test | 9 | 0.001837s | 0.001737s | 0.001787s | byte equality observed |
| test_dynamic_any_cast.test | 8 | 0.002586s | 0.002561s | 0.002538s | byte equality observed |
| test_equal.test | 8 | 0.002166s | 0.002121s | 0.002089s | byte equality observed |
| test_forward_iterator.test | 8 | 0.001858s | 0.001789s | 0.001779s | byte equality observed |
| test_free.test | 7 | 0.002166s | 0.002114s | 0.002075s | byte equality observed |
| test_increment.test | 10 | 0.001815s | 0.001728s | 0.001706s | byte equality observed |
| test_is_empty.test | 10 | 0.001774s | 0.001729s | 0.001680s | byte equality observed |
| test_less.test | 8 | 0.002357s | 0.002324s | 0.002296s | byte equality observed |
| test_limits.test | 9 | 0.001871s | 0.001840s | 0.001892s | byte equality observed |
| test_member.test | 7 | 0.002643s | 0.002601s | 0.002604s | byte equality observed |
| test_negate.test | 10 | 0.001688s | 0.001676s | 0.001668s | byte equality observed |
| test_nested.test | 10 | 0.001808s | 0.001669s | 0.001701s | byte equality observed |
| test_null.test | 10 | 0.001797s | 0.001730s | 0.001814s | byte equality observed |
| test_reference.test | 10 | 0.001939s | 0.001826s | 0.001836s | byte equality observed |
| test_relaxed.test | 10 | 0.001778s | 0.001667s | 0.001710s | byte equality observed |
| test_same_type.test | 10 | 0.001893s | 0.001763s | 0.001759s | byte equality observed |
| test_stream.test | 8 | 0.002628s | 0.002382s | 0.002404s | byte equality observed |
| test_subscript.test | 10 | 0.001927s | 0.001857s | 0.001864s | byte equality observed |
| test_tuple.test | 10 | 0.002064s | 0.001844s | 0.001799s | byte equality observed |
| test_typeid_of.test | 9 | 0.002087s | 0.001930s | 0.001874s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44813597235).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
