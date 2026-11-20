# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.088479 | 0.216619 | 0.276464 | 0.001256 | 0.000499 | 0.001283 |
| variant_size.test | RUN | 0.154629 | 0.528588 | 0.545755 | 0.001109 | 0.001203 | 0.001175 |
| variant_alternative.test | RUN | 0.212637 | 1.721891 | 0.945747 | 0.001186 | 0.001208 | 0.001303 |
| variant_holds_alternative.test | RUN | 0.143728 | 0.386365 | 0.516486 | 0.001114 | 0.001231 | 0.001148 |
| variant_holds_alternative_cx.test | COMPILE | 0.096130 | 0.224120 | 0.291032 | — | — | — |
| variant_get_by_index.test | RUN | 0.246379 | 1.898102 | 1.155217 | 0.001324 | 0.001334 | 0.001261 |
| variant_get_by_index_cx.test | COMPILE | 0.098097 | 0.228194 | 0.311316 | — | — | — |
| variant_get_by_type.test | RUN | 0.256830 | 2.054985 | 1.240477 | 0.001282 | 0.001117 | 0.001339 |
| variant_get_by_type_cx.test | COMPILE | 0.088397 | 0.208080 | 0.264612 | — | — | — |
| variant_default_construct.test | RUN | 0.235762 | 1.478192 | 0.987766 | 0.001152 | 0.001387 | 0.001379 |
| variant_default_construct_cx.test | COMPILE | 0.098371 | 0.211407 | 0.302900 | — | — | — |
| variant_copy_construct.test | RUN | 0.376607 | 2.470040 | 1.835176 | 0.000877 | 0.001079 | 0.001153 |
| variant_copy_construct_cx.test | COMPILE | 0.112101 | 0.250082 | 0.349462 | — | — | — |
| variant_move_construct.test | RUN | 0.342540 | 2.142717 | 1.645334 | 0.001074 | 0.001101 | 0.001223 |
| variant_move_construct_cx.test | COMPILE | 0.085124 | 0.205587 | 0.257636 | — | — | — |
| variant_value_construct.test | RUN | 0.178391 | 0.525052 | 0.675325 | 0.001083 | 0.001229 | 0.001306 |
| variant_value_construct_cx.test | COMPILE | 0.098115 | 0.234865 | 0.324660 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.188737 | 0.525789 | 0.693666 | 0.001163 | 0.001223 | 0.001184 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.094321 | 0.229251 | 0.307773 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.182889 | 0.529629 | 0.690839 | 0.001088 | 0.001172 | 0.001265 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.095091 | 0.234924 | 0.314045 | — | — | — |
| variant_copy_assign.test | RUN | 0.255443 | 1.703433 | 1.109670 | 0.001097 | 0.001111 | 0.001163 |
| variant_copy_assign_cx.test | COMPILE | 0.088672 | 0.200761 | 0.261221 | — | — | — |
| variant_move_assign.test | RUN | 0.252333 | 1.694507 | 1.083584 | 0.001118 | 0.001116 | 0.001218 |
| variant_move_assign_cx.test | COMPILE | 0.083372 | 0.198035 | 0.258500 | — | — | — |
| variant_value_assign.test | RUN | 0.186250 | 0.584314 | 0.756108 | 0.001080 | 0.001330 | 0.001130 |
| variant_value_assign_cx.test | COMPILE | 0.085316 | 0.197481 | 0.261715 | — | — | — |
| variant_emplace_index.test | RUN | 0.212945 | 0.689374 | 0.833331 | 0.001055 | 0.001348 | 0.001256 |
| variant_emplace_index_cx.test | COMPILE | 0.088015 | 0.198347 | 0.254085 | — | — | — |
| variant_emplace_type.test | RUN | 0.193465 | 0.593329 | 0.733359 | 0.001115 | 0.001226 | 0.001203 |
| variant_emplace_type_cx.test | COMPILE | 0.082111 | 0.197388 | 0.255164 | — | — | — |
| variant_swap.test | RUN | 0.195796 | 0.733845 | 0.792427 | 0.001102 | 0.001236 | 0.001212 |
| variant_eq_ne.test | RUN | 0.155007 | 0.437539 | 0.569979 | 0.001033 | 0.001115 | 0.001270 |
| variant_eq_ne_cx.test | COMPILE | 0.081360 | 0.195828 | 0.249692 | — | — | — |
| variant_lt_gt.test | RUN | 0.159374 | 0.495370 | 0.602458 | 0.001040 | 0.001322 | 0.001172 |
| variant_lt_gt_cx.test | COMPILE | 0.086830 | 0.203694 | 0.258523 | — | — | — |
| variant_destroy.test | RUN | 0.164959 | 0.493740 | 0.609548 | 0.001088 | 0.001297 | 0.001270 |
| variant_visit.test | RUN | 1.040487 | 3.783999 | 10.484595 | 0.001031 | 0.001160 | 0.001137 |
| variant_convert_construct.test | RUN | 0.209118 | 0.657281 | 0.855107 | 0.001194 | 0.001300 | 0.001251 |
| variant_subset.test | RUN | 0.212003 | 0.698941 | 0.896828 | 0.001232 | 0.001352 | 0.001215 |
| variant_valueless.test | RUN | 0.154198 | 0.466916 | 0.600919 | 0.001116 | 0.001223 | 0.001161 |
| variant_copy_construct_throw.test | RUN | 0.122992 | 0.324281 | 0.418464 | 0.001066 | 0.001367 | 0.001226 |
| variant_move_construct_throw.test | RUN | 0.123421 | 0.331131 | 0.416014 | 0.001109 | 0.001352 | 0.001331 |
| variant_convert_construct_throw.test | RUN | 0.124630 | 0.356614 | 0.450483 | 0.001126 | 0.001234 | 0.001253 |
| variant_copy_assign_throw.test | RUN | 0.119714 | 0.313439 | 0.406340 | 0.001100 | 0.001351 | 0.001329 |
| variant_move_assign_throw.test | RUN | 0.121539 | 0.310810 | 0.419433 | 0.001117 | 0.001382 | 0.001250 |
| variant_get_by_index_nx.test | RUN | 0.307556 | 1.591094 | 1.111285 | 0.001289 | 0.001220 | 0.001137 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.095981 | 0.224546 | 0.304954 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.305656 | 1.782949 | 1.191301 | 0.001142 | 0.001148 | 0.001188 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.081959 | 0.205316 | 0.243952 | — | — | — |
| variant_subset_nx.test | RUN | 0.221694 | 0.679616 | 0.908935 | 0.001089 | 0.001196 | 0.001114 |
| variant_hash.test | RUN | 0.210900 | 0.794591 | 0.810746 | 0.001089 | 0.001256 | 0.001324 |
| variant_trivial.test | RUN | 1.246883 | 4.598117 | 6.132958 | 0.001108 | 0.001218 | 0.001370 |
| variant_special.test | RUN | 1.224479 | 4.874585 | 6.548745 | 0.001122 | 0.001264 | 0.001291 |
| variant_visit_derived.test | RUN | 0.153088 | 0.416506 | 0.619662 | 0.001316 | 0.001202 | 0.001189 |
| variant_many_types.test | RUN | 1.365601 | 5.956006 | 8.780144 | 0.001156 | 0.001240 | 0.001416 |
| variant_visit_r.test | RUN | 0.577184 | 1.861764 | 3.476217 | 0.001162 | 0.001285 | 0.001286 |
| variant_derived_construct.test | COMPILE | 0.090257 | 0.205431 | 0.263237 | — | — | — |
| variant_visit_by_index.test | RUN | 0.194939 | 0.540560 | 0.804363 | 0.001243 | 0.001342 | 0.001349 |
| variant_ostream_insert.test | RUN | 0.142390 | 0.432200 | 0.531439 | 0.001346 | 0.001189 | 0.001376 |
| is_output_streamable.test | RUN | 0.192197 | 0.920122 | 0.735173 | 0.000891 | 0.001279 | 0.001392 |
| variant_json_value_from.test | RUN | 0.282845 | 0.722186 | 0.945685 | 0.001283 | 0.001194 | 0.001363 |
| variant_json_value_to.test | RUN | 0.345091 | 1.006017 | 1.294155 | 0.001184 | 0.001346 | 0.001233 |
| variant_uses_double_storage.test | COMPILE | 0.093221 | 0.208876 | 0.309394 | — | — | — |
| variant_derived_construct2.test | RUN | 0.128129 | 0.348866 | 0.462164 | 0.001185 | 0.001301 | 0.001245 |
| variant_visit_cx.test | COMPILE | 0.085784 | 0.202017 | 0.256443 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.084501 | 0.207401 | 0.261334 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.084950 | 0.199318 | 0.251360 | — | — | — |
| variant_index_type_126.test | RUN | 0.778988 | 1.910509 | 3.880312 | 0.001231 | 0.001294 | 0.001304 |
| variant_index_type_127.test | RUN | 0.784180 | 1.919925 | 3.929599 | 0.001201 | 0.001121 | 0.001151 |
| variant_index_type_128.test | RUN | 0.788825 | 1.972039 | 4.016971 | 0.001084 | 0.001552 | 0.001081 |
| variant_index_type_129.test | RUN | 0.804366 | 1.939099 | 3.977894 | 0.001180 | 0.001319 | 0.001220 |
| variant_index_type_254.test | RUN | 2.803326 | 7.569244 | 12.407935 | 0.001144 | 0.001219 | 0.001378 |
| variant_index_type_255.test | RUN | 2.822651 | 7.750241 | 12.533986 | 0.001260 | 0.001177 | 0.001257 |
| variant_index_type_256.test | RUN | 2.862749 | 7.931203 | 12.603088 | 0.001104 | 0.001101 | 0.001240 |
| variant_index_type_257.test | RUN | 2.891591 | 7.797123 | 12.775236 | 0.001140 | 0.001339 | 0.001238 |
| variant_default_construct_cx_2.test | COMPILE | 0.084986 | 0.213449 | 0.273260 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.085846 | 0.194386 | 0.265439 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.080932 | 0.190425 | 0.255408 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.087696 | 0.198938 | 0.256997 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.083026 | 0.194730 | 0.252436 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.081786 | 0.196725 | 0.252744 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.067737 | 0.183420 | 0.190388 | — | — | — |
| variant_issue_55.test | RUN | 0.129550 | 0.335787 | 0.427759 | 0.000843 | 0.000883 | 0.000813 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.988× | 0.986×, 0.990× | 0.999× |
| clang | 1.002× | 0.998×, 1.006× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44780058957).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.000794s | 0.000817s | 0.000821s | byte equality observed |
| quick.test | 10 | 0.000769s | 0.000359s | 0.000782s | byte equality observed |
| variant_alternative.test | 10 | 0.000804s | 0.000835s | 0.000776s | byte equality observed |
| variant_convert_construct.test | 10 | 0.000815s | 0.000813s | 0.000820s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.000828s | 0.000867s | 0.000835s | byte equality observed |
| variant_copy_assign.test | 10 | 0.000802s | 0.000868s | 0.000825s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.000835s | 0.000828s | 0.000823s | byte equality observed |
| variant_copy_construct.test | 10 | 0.000805s | 0.000826s | 0.000802s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.000834s | 0.000814s | 0.000842s | byte equality observed |
| variant_default_construct.test | 10 | 0.000816s | 0.000823s | 0.000797s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.000801s | 0.000800s | 0.000810s | byte equality observed |
| variant_destroy.test | 10 | 0.000825s | 0.000843s | 0.000816s | byte equality observed |
| variant_emplace_index.test | 10 | 0.000803s | 0.000807s | 0.000807s | byte equality observed |
| variant_emplace_type.test | 10 | 0.000794s | 0.000801s | 0.000833s | byte equality observed |
| variant_eq_ne.test | 10 | 0.000810s | 0.000794s | 0.000840s | byte equality observed |
| variant_get_by_index.test | 10 | 0.000838s | 0.000872s | 0.000831s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.000806s | 0.000780s | 0.000807s | byte equality observed |
| variant_get_by_type.test | 10 | 0.000829s | 0.000839s | 0.000832s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.000820s | 0.000817s | 0.000816s | byte equality observed |
| variant_hash.test | 10 | 0.000811s | 0.000817s | 0.000808s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.000806s | 0.000787s | 0.000784s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.000830s | 0.000811s | 0.000793s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.000798s | 0.000832s | 0.000814s | byte equality observed |
| variant_index_type_126.test | 10 | 0.000792s | 0.000816s | 0.000832s | byte equality observed |
| variant_index_type_127.test | 10 | 0.000797s | 0.000822s | 0.000801s | byte equality observed |
| variant_index_type_128.test | 10 | 0.000792s | 0.000815s | 0.000828s | byte equality observed |
| variant_index_type_129.test | 10 | 0.000793s | 0.000786s | 0.000824s | byte equality observed |
| variant_index_type_254.test | 10 | 0.000804s | 0.000788s | 0.000825s | byte equality observed |
| variant_index_type_255.test | 10 | 0.000809s | 0.000830s | 0.000804s | byte equality observed |
| variant_index_type_256.test | 10 | 0.000808s | 0.000815s | 0.000797s | byte equality observed |
| variant_index_type_257.test | 10 | 0.000796s | 0.000790s | 0.000836s | byte equality observed |
| variant_issue_55.test | 10 | 0.000826s | 0.000804s | 0.000811s | byte equality observed |
| variant_json_value_from.test | 10 | 0.000833s | 0.000821s | 0.000823s | byte equality observed |
| variant_json_value_to.test | 10 | 0.000829s | 0.000808s | 0.000855s | byte equality observed |
| variant_lt_gt.test | 10 | 0.000792s | 0.000804s | 0.000827s | byte equality observed |
| variant_many_types.test | 10 | 0.000825s | 0.000816s | 0.000808s | byte equality observed |
| variant_move_assign.test | 10 | 0.000802s | 0.000805s | 0.000813s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.000821s | 0.000810s | 0.000799s | byte equality observed |
| variant_move_construct.test | 10 | 0.000806s | 0.000792s | 0.000800s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.000826s | 0.000839s | 0.000824s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.000844s | 0.000842s | 0.000808s | byte equality observed |
| variant_size.test | 10 | 0.000805s | 0.000819s | 0.000779s | byte equality observed |
| variant_special.test | 10 | 0.000838s | 0.000842s | 0.000854s | byte equality observed |
| variant_subset.test | 10 | 0.000826s | 0.000806s | 0.000822s | byte equality observed |
| variant_subset_nx.test | 10 | 0.000820s | 0.000775s | 0.000813s | byte equality observed |
| variant_swap.test | 10 | 0.000837s | 0.000817s | 0.000842s | byte equality observed |
| variant_trivial.test | 10 | 0.000840s | 0.000858s | 0.000809s | byte equality observed |
| variant_value_assign.test | 10 | 0.000840s | 0.000803s | 0.000806s | byte equality observed |
| variant_value_construct.test | 10 | 0.000836s | 0.000823s | 0.000799s | byte equality observed |
| variant_valueless.test | 10 | 0.000848s | 0.000854s | 0.000826s | byte equality observed |
| variant_visit.test | 10 | 0.000848s | 0.000813s | 0.000821s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.000831s | 0.000780s | 0.000833s | byte equality observed |
| variant_visit_derived.test | 10 | 0.000814s | 0.000808s | 0.000804s | byte equality observed |
| variant_visit_r.test | 10 | 0.000773s | 0.000774s | 0.000775s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44780058957).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
