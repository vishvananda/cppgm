# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.581006 | 2.411389 | 1.988543 | 0.002937 | 0.003105 | 0.002955 |
| test_increment.test | RUN | 0.569193 | 1.819274 | 1.738816 | 0.002888 | 0.003149 | 0.002852 |
| test_add.test | RUN | 0.691958 | 2.970785 | 2.609536 | 0.003055 | 0.002955 | 0.003146 |
| test_add_assign.test | RUN | 0.718623 | 3.166982 | 2.731584 | 0.003195 | 0.003130 | 0.003048 |
| test_callable.test | RUN | 1.225339 | 5.444879 | 5.952007 | 0.004389 | 0.004405 | 0.004618 |
| test_reference.test | RUN | 0.553550 | 2.219934 | 1.826394 | 0.002975 | 0.003037 | 0.003062 |
| test_construct.test | RUN | 2.694916 | 26.066964 | 17.814199 | 0.005798 | 0.005493 | 0.005607 |
| test_relaxed.test | RUN | 0.534017 | 1.563185 | 1.608711 | 0.002506 | 0.003009 | 0.002798 |
| test_assign.test | RUN | 6.939019 | 83.325347 | 62.523407 | 0.009188 | 0.005326 | 0.005950 |
| test_construct_ref.test | RUN | 0.690888 | 3.846552 | 2.643403 | 0.003888 | 0.003906 | 0.003681 |
| test_construct_cref.test | RUN | 0.789318 | 3.669746 | 3.490628 | 0.004144 | 0.004225 | 0.003925 |
| test_any_cast.test | RUN | 0.670783 | 3.739216 | 2.618867 | 0.003112 | 0.003575 | 0.003553 |
| test_binding_of.test | RUN | 0.511833 | 1.451470 | 1.510872 | 0.002985 | 0.002768 | 0.002767 |
| test_typeid_of.test | RUN | 0.570559 | 2.080921 | 1.743038 | 0.003132 | 0.003182 | 0.003019 |
| test_nested.test | RUN | 0.609235 | 2.037849 | 1.980418 | 0.003085 | 0.003060 | 0.002917 |
| test_less.test | RUN | 0.814880 | 3.976048 | 3.307384 | 0.003626 | 0.003872 | 0.003756 |
| test_equal.test | RUN | 0.738667 | 3.825441 | 2.756570 | 0.003490 | 0.003459 | 0.003477 |
| test_negate.test | RUN | 0.517353 | 1.545923 | 1.586292 | 0.002860 | 0.002802 | 0.002773 |
| test_dereference.test | RUN | 0.583802 | 1.928150 | 1.873902 | 0.002967 | 0.002996 | 0.002926 |
| test_subscript.test | RUN | 0.591477 | 2.188422 | 1.986575 | 0.003119 | 0.003135 | 0.003074 |
| test_forward_iterator.test | RUN | 0.709788 | 2.577421 | 2.414863 | 0.003013 | 0.003075 | 0.002989 |
| test_tuple.test | RUN | 0.635171 | 2.569542 | 2.091046 | 0.003263 | 0.003356 | 0.003099 |
| test_stream.test | RUN | 0.812614 | 4.235271 | 3.116139 | 0.004030 | 0.003891 | 0.003475 |
| test_deduced.test | RUN | 0.525016 | 1.539204 | 1.551431 | 0.002785 | 0.002798 | 0.002766 |
| test_same_type.test | RUN | 0.592978 | 2.031676 | 1.908737 | 0.003068 | 0.002933 | 0.002964 |
| test_member.test | RUN | 0.774320 | 4.072350 | 3.173436 | 0.003801 | 0.004001 | 0.003732 |
| test_null.test | RUN | 0.542320 | 1.945444 | 1.511898 | 0.003031 | 0.003119 | 0.002683 |
| test_free.test | RUN | 0.681196 | 3.389803 | 2.354392 | 0.003458 | 0.003562 | 0.003162 |
| test_is_empty.test | RUN | 0.503989 | 1.604631 | 1.425532 | 0.002935 | 0.002772 | 0.002730 |
| test_dynamic_any_cast.test | RUN | 0.980738 | 4.822445 | 4.509373 | 0.003758 | 0.004179 | 0.004157 |
| test_limits.test | RUN | 0.863538 | 3.297577 | 3.041982 | 0.003125 | 0.002815 | 0.003019 |
| test_param.test | COMPILE | 0.346170 | 0.882104 | 0.948824 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.335854 | 0.685316 | 0.834514 | — | — | — |
| test_sfinae.test | COMPILE | 0.334327 | 0.714900 | 0.824382 | — | — | — |
| test_interface_order.test | COMPILE | 0.330542 | 0.697444 | 0.877083 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.037274 | 0.065363 | 0.064311 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.322398 | 0.701159 | 0.743164 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.320353 | 0.686394 | 0.798454 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.314911 | 0.676601 | 0.749273 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.321096 | 0.647601 | 0.808137 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.322484 | 0.673779 | 0.804513 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.308990 | 0.641228 | 0.737184 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.317118 | 0.689486 | 0.823768 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.344117 | 0.702074 | 0.862250 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.322479 | 0.651707 | 0.721663 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.316627 | 0.681442 | 0.811639 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.315157 | 0.675526 | 0.804339 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.320819 | 0.691630 | 0.787040 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.322789 | 0.726957 | 0.838799 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.319473 | 0.716331 | 0.842793 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.319780 | 0.724897 | 0.775010 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.318393 | 0.674182 | 0.792432 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.322660 | 0.695806 | 0.838194 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.325887 | 0.707491 | 0.806765 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.319547 | 0.674800 | 0.844055 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.330003 | 0.696027 | 0.843624 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.323868 | 0.675882 | 0.793091 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.298764 | 0.705788 | 0.843457 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.248564 | 0.464770 | 0.804085 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.276693 | 0.586334 | 0.830781 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.917×† | 0.859×, 0.976× | 1.032× |
| clang | 1.060× | 1.057×, 1.063× | 1.012× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44597827043).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 9 | 0.001837s | 0.001776s | 0.002063s | byte equality observed |
| test_add_assign.test | 7 | 0.001811s | 0.001733s | 0.002116s | byte equality observed |
| test_any_cast.test | 9 | 0.001977s | 0.001949s | 0.002365s | byte equality observed |
| test_assign.test | 4 | 0.005549s | 0.004583s | 0.006527s | byte equality observed |
| test_binding.test | 10 | 0.001798s | 0.001675s | 0.001989s | byte equality observed |
| test_binding_of.test | 10 | 0.001640s | 0.001612s | 0.001937s | byte equality observed |
| test_callable.test | 7 | 0.002410s | 0.002375s | 0.002774s | byte equality observed |
| test_construct.test | 6 | 0.003084s | 0.002978s | 0.003549s | byte equality observed |
| test_construct_cref.test | 9 | 0.002165s | 0.002197s | 0.002624s | byte equality observed |
| test_construct_ref.test | 9 | 0.002153s | 0.001932s | 0.002362s | byte equality observed |
| test_deduced.test | 10 | 0.001712s | 0.001693s | 0.001890s | byte equality observed |
| test_dereference.test | 10 | 0.001732s | 0.001672s | 0.002008s | byte equality observed |
| test_dynamic_any_cast.test | 8 | 0.002318s | 0.002253s | 0.002554s | byte equality observed |
| test_equal.test | 9 | 0.002135s | 0.001908s | 0.002238s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001962s | 0.001817s | 0.002024s | byte equality observed |
| test_free.test | 9 | 0.002309s | 0.002037s | 0.002244s | byte equality observed |
| test_increment.test | 10 | 0.001990s | 0.001902s | 0.001934s | byte equality observed |
| test_is_empty.test | 10 | 0.002044s | 0.001911s | 0.001973s | byte equality observed |
| test_less.test | 9 | 0.002465s | 0.002268s | 0.002364s | byte equality observed |
| test_limits.test | 10 | 0.002220s | 0.002142s | 0.002084s | byte equality observed |
| test_member.test | 8 | 0.002667s | 0.002623s | 0.002574s | byte equality observed |
| test_negate.test | 10 | 0.002002s | 0.001901s | 0.001917s | byte equality observed |
| test_nested.test | 10 | 0.002036s | 0.002004s | 0.001972s | byte equality observed |
| test_null.test | 10 | 0.002102s | 0.002037s | 0.001961s | byte equality observed |
| test_reference.test | 10 | 0.002110s | 0.002065s | 0.002015s | byte equality observed |
| test_relaxed.test | 10 | 0.002044s | 0.001981s | 0.001949s | byte equality observed |
| test_same_type.test | 10 | 0.002081s | 0.002065s | 0.001998s | byte equality observed |
| test_stream.test | 9 | 0.002572s | 0.002558s | 0.002477s | byte equality observed |
| test_subscript.test | 10 | 0.002164s | 0.002083s | 0.002063s | byte equality observed |
| test_tuple.test | 10 | 0.002130s | 0.002067s | 0.002026s | byte equality observed |
| test_typeid_of.test | 7 | 0.002104s | 0.002084s | 0.002062s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44597827043).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
