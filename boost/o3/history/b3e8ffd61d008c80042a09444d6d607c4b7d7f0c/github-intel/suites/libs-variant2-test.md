# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.093333 | 0.213233 | 0.283444 | 0.001200 | 0.000455 | 0.001198 |
| variant_size.test | RUN | 0.154648 | 0.522318 | 0.546711 | 0.001185 | 0.001317 | 0.001363 |
| variant_alternative.test | RUN | 0.215249 | 1.709128 | 0.960634 | 0.001276 | 0.001289 | 0.001294 |
| variant_holds_alternative.test | RUN | 0.148068 | 0.391351 | 0.517727 | 0.001180 | 0.001336 | 0.001256 |
| variant_holds_alternative_cx.test | COMPILE | 0.097232 | 0.223123 | 0.291765 | — | — | — |
| variant_get_by_index.test | RUN | 0.245266 | 1.889716 | 1.155808 | 0.001328 | 0.001334 | 0.001427 |
| variant_get_by_index_cx.test | COMPILE | 0.097627 | 0.228266 | 0.316787 | — | — | — |
| variant_get_by_type.test | RUN | 0.261882 | 2.030366 | 1.246160 | 0.001351 | 0.001189 | 0.001376 |
| variant_get_by_type_cx.test | COMPILE | 0.086032 | 0.204028 | 0.255793 | — | — | — |
| variant_default_construct.test | RUN | 0.242590 | 1.471978 | 1.035374 | 0.001348 | 0.001393 | 0.001334 |
| variant_default_construct_cx.test | COMPILE | 0.097586 | 0.216113 | 0.298641 | — | — | — |
| variant_copy_construct.test | RUN | 0.374290 | 2.484809 | 1.810710 | 0.001346 | 0.001213 | 0.001154 |
| variant_copy_construct_cx.test | COMPILE | 0.109941 | 0.247854 | 0.363695 | — | — | — |
| variant_move_construct.test | RUN | 0.349620 | 2.115539 | 1.684412 | 0.001105 | 0.001268 | 0.001296 |
| variant_move_construct_cx.test | COMPILE | 0.086425 | 0.205090 | 0.258127 | — | — | — |
| variant_value_construct.test | RUN | 0.181072 | 0.528552 | 0.685538 | 0.001143 | 0.001224 | 0.001211 |
| variant_value_construct_cx.test | COMPILE | 0.099736 | 0.232237 | 0.309708 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.188555 | 0.524395 | 0.697466 | 0.001238 | 0.001336 | 0.001118 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.098755 | 0.229989 | 0.318440 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.184257 | 0.531364 | 0.673638 | 0.001113 | 0.001218 | 0.001187 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.100069 | 0.228478 | 0.313000 | — | — | — |
| variant_copy_assign.test | RUN | 0.253669 | 1.703012 | 1.098179 | 0.001099 | 0.001210 | 0.001371 |
| variant_copy_assign_cx.test | COMPILE | 0.087401 | 0.202882 | 0.256464 | — | — | — |
| variant_move_assign.test | RUN | 0.255639 | 1.701175 | 1.095523 | 0.001212 | 0.001229 | 0.001213 |
| variant_move_assign_cx.test | COMPILE | 0.085626 | 0.198410 | 0.257271 | — | — | — |
| variant_value_assign.test | RUN | 0.192179 | 0.580954 | 0.743321 | 0.001175 | 0.001294 | 0.001216 |
| variant_value_assign_cx.test | COMPILE | 0.087378 | 0.192453 | 0.263504 | — | — | — |
| variant_emplace_index.test | RUN | 0.214208 | 0.679904 | 0.830381 | 0.001254 | 0.001277 | 0.001330 |
| variant_emplace_index_cx.test | COMPILE | 0.088727 | 0.200794 | 0.256918 | — | — | — |
| variant_emplace_type.test | RUN | 0.198609 | 0.580249 | 0.731026 | 0.001214 | 0.001236 | 0.001190 |
| variant_emplace_type_cx.test | COMPILE | 0.086085 | 0.197771 | 0.270572 | — | — | — |
| variant_swap.test | RUN | 0.196924 | 0.725423 | 0.789610 | 0.001202 | 0.001303 | 0.001154 |
| variant_eq_ne.test | RUN | 0.162488 | 0.436010 | 0.553215 | 0.001142 | 0.001270 | 0.001237 |
| variant_eq_ne_cx.test | COMPILE | 0.091424 | 0.196929 | 0.257254 | — | — | — |
| variant_lt_gt.test | RUN | 0.167177 | 0.497307 | 0.585424 | 0.001208 | 0.001174 | 0.001158 |
| variant_lt_gt_cx.test | COMPILE | 0.087985 | 0.197751 | 0.250861 | — | — | — |
| variant_destroy.test | RUN | 0.169113 | 0.491663 | 0.617866 | 0.001124 | 0.001227 | 0.001187 |
| variant_visit.test | RUN | 1.076862 | 3.783162 | 10.391057 | 0.001155 | 0.001381 | 0.001133 |
| variant_convert_construct.test | RUN | 0.217213 | 0.659783 | 0.868466 | 0.001310 | 0.001298 | 0.001316 |
| variant_subset.test | RUN | 0.220014 | 0.707683 | 0.889771 | 0.001280 | 0.001279 | 0.001033 |
| variant_valueless.test | RUN | 0.156412 | 0.462156 | 0.600062 | 0.001342 | 0.001341 | 0.001215 |
| variant_copy_construct_throw.test | RUN | 0.129420 | 0.335279 | 0.424425 | 0.001163 | 0.001392 | 0.001200 |
| variant_move_construct_throw.test | RUN | 0.124392 | 0.335596 | 0.422069 | 0.001370 | 0.001424 | 0.001198 |
| variant_convert_construct_throw.test | RUN | 0.128672 | 0.357501 | 0.447497 | 0.001084 | 0.001218 | 0.001269 |
| variant_copy_assign_throw.test | RUN | 0.122869 | 0.316119 | 0.421495 | 0.001185 | 0.001219 | 0.001267 |
| variant_move_assign_throw.test | RUN | 0.123443 | 0.318719 | 0.419634 | 0.001297 | 0.001276 | 0.001056 |
| variant_get_by_index_nx.test | RUN | 0.306613 | 1.611769 | 1.116402 | 0.001083 | 0.001194 | 0.001376 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.095964 | 0.237768 | 0.310156 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.311293 | 1.794252 | 1.176884 | 0.001163 | 0.001158 | 0.001248 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.085636 | 0.203354 | 0.266809 | — | — | — |
| variant_subset_nx.test | RUN | 0.226444 | 0.672143 | 0.927843 | 0.001288 | 0.001292 | 0.001344 |
| variant_hash.test | RUN | 0.222067 | 0.782097 | 0.844605 | 0.001362 | 0.001220 | 0.001356 |
| variant_trivial.test | RUN | 1.291761 | 4.623289 | 6.123882 | 0.001194 | 0.001089 | 0.001214 |
| variant_special.test | RUN | 1.267466 | 4.773391 | 6.619459 | 0.001495 | 0.001459 | 0.001212 |
| variant_visit_derived.test | RUN | 0.154600 | 0.420311 | 0.626988 | 0.001485 | 0.001319 | 0.001093 |
| variant_many_types.test | RUN | 1.412143 | 6.048803 | 8.811754 | 0.001235 | 0.001209 | 0.001122 |
| variant_visit_r.test | RUN | 0.582298 | 1.876947 | 3.431974 | 0.001301 | 0.001194 | 0.001227 |
| variant_derived_construct.test | COMPILE | 0.092546 | 0.204968 | 0.271703 | — | — | — |
| variant_visit_by_index.test | RUN | 0.202222 | 0.550836 | 0.797470 | 0.001289 | 0.001213 | 0.001005 |
| variant_ostream_insert.test | RUN | 0.155683 | 0.441484 | 0.495966 | 0.001336 | 0.001086 | 0.001128 |
| is_output_streamable.test | RUN | 0.184221 | 0.926833 | 0.723189 | 0.001065 | 0.001080 | 0.001133 |
| variant_json_value_from.test | RUN | 0.285708 | 0.730836 | 1.002393 | 0.001244 | 0.001059 | 0.001242 |
| variant_json_value_to.test | RUN | 0.349825 | 1.000717 | 1.302575 | 0.001217 | 0.001249 | 0.001130 |
| variant_uses_double_storage.test | COMPILE | 0.095707 | 0.212962 | 0.303456 | — | — | — |
| variant_derived_construct2.test | RUN | 0.137788 | 0.351968 | 0.440861 | 0.001153 | 0.001142 | 0.001179 |
| variant_visit_cx.test | COMPILE | 0.089790 | 0.198495 | 0.250989 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.090372 | 0.200939 | 0.252264 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.087912 | 0.202228 | 0.254149 | — | — | — |
| variant_index_type_126.test | RUN | 0.789102 | 1.922245 | 3.746741 | 0.001193 | 0.001092 | 0.001221 |
| variant_index_type_127.test | RUN | 0.815441 | 1.971317 | 3.974694 | 0.001165 | 0.001316 | 0.001279 |
| variant_index_type_128.test | RUN | 0.819710 | 1.971188 | 3.997214 | 0.001180 | 0.001178 | 0.001121 |
| variant_index_type_129.test | RUN | 0.827434 | 1.954767 | 3.774420 | 0.001192 | 0.001284 | 0.001067 |
| variant_index_type_254.test | RUN | 2.873786 | 7.805457 | 12.189718 | 0.001199 | 0.001259 | 0.001304 |
| variant_index_type_255.test | RUN | 2.891645 | 7.779228 | 12.171566 | 0.001420 | 0.001114 | 0.001325 |
| variant_index_type_256.test | RUN | 2.914876 | 7.878261 | 12.792977 | 0.001210 | 0.001386 | 0.000905 |
| variant_index_type_257.test | RUN | 2.914842 | 7.972089 | 12.783683 | 0.001105 | 0.001211 | 0.000823 |
| variant_default_construct_cx_2.test | COMPILE | 0.081754 | 0.201001 | 0.268970 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.086746 | 0.199034 | 0.270549 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.089060 | 0.201854 | 0.251297 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.087223 | 0.197864 | 0.256534 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.086396 | 0.194965 | 0.250244 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.087033 | 0.190850 | 0.178038 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.075962 | 0.131857 | 0.224930 | — | — | — |
| variant_issue_55.test | RUN | 0.135039 | 0.386810 | 0.447332 | 0.000889 | 0.000906 | 0.000899 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.986× | 0.981×, 0.990× | 1.006× |
| clang | 0.994× | 0.994×, 0.995× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44818861403).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.000803s | 0.000802s | 0.000815s | byte equality observed |
| quick.test | 10 | 0.000771s | 0.000362s | 0.000793s | byte equality observed |
| variant_alternative.test | 10 | 0.000807s | 0.000804s | 0.000784s | byte equality observed |
| variant_convert_construct.test | 10 | 0.000800s | 0.000814s | 0.000778s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.000832s | 0.000814s | 0.000814s | byte equality observed |
| variant_copy_assign.test | 10 | 0.000812s | 0.000829s | 0.000802s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.000815s | 0.000837s | 0.000818s | byte equality observed |
| variant_copy_construct.test | 10 | 0.000808s | 0.000820s | 0.000816s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.000861s | 0.000823s | 0.000840s | byte equality observed |
| variant_default_construct.test | 10 | 0.000837s | 0.000819s | 0.000840s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.000805s | 0.000823s | 0.000816s | byte equality observed |
| variant_destroy.test | 10 | 0.000810s | 0.000794s | 0.000804s | byte equality observed |
| variant_emplace_index.test | 10 | 0.000810s | 0.000806s | 0.000797s | byte equality observed |
| variant_emplace_type.test | 10 | 0.000804s | 0.000805s | 0.000805s | byte equality observed |
| variant_eq_ne.test | 10 | 0.000821s | 0.000787s | 0.000823s | byte equality observed |
| variant_get_by_index.test | 10 | 0.000839s | 0.000863s | 0.000848s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.000817s | 0.000812s | 0.000780s | byte equality observed |
| variant_get_by_type.test | 10 | 0.000839s | 0.000877s | 0.000816s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.000859s | 0.000816s | 0.000818s | byte equality observed |
| variant_hash.test | 10 | 0.000830s | 0.000809s | 0.000816s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.000823s | 0.000824s | 0.000821s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.000827s | 0.000817s | 0.000810s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.000816s | 0.000795s | 0.000808s | byte equality observed |
| variant_index_type_126.test | 10 | 0.000831s | 0.000813s | 0.000810s | byte equality observed |
| variant_index_type_127.test | 10 | 0.000822s | 0.000811s | 0.000829s | byte equality observed |
| variant_index_type_128.test | 10 | 0.000814s | 0.000807s | 0.000806s | byte equality observed |
| variant_index_type_129.test | 10 | 0.000837s | 0.000838s | 0.000803s | byte equality observed |
| variant_index_type_254.test | 10 | 0.000840s | 0.000805s | 0.000801s | byte equality observed |
| variant_index_type_255.test | 10 | 0.000835s | 0.000831s | 0.000803s | byte equality observed |
| variant_index_type_256.test | 10 | 0.000821s | 0.000826s | 0.000802s | byte equality observed |
| variant_index_type_257.test | 10 | 0.000822s | 0.000784s | 0.000800s | byte equality observed |
| variant_issue_55.test | 10 | 0.000821s | 0.000813s | 0.000795s | byte equality observed |
| variant_json_value_from.test | 10 | 0.000833s | 0.000860s | 0.000834s | byte equality observed |
| variant_json_value_to.test | 10 | 0.000852s | 0.000837s | 0.000856s | byte equality observed |
| variant_lt_gt.test | 10 | 0.000805s | 0.000810s | 0.000804s | byte equality observed |
| variant_many_types.test | 10 | 0.000833s | 0.000811s | 0.000837s | byte equality observed |
| variant_move_assign.test | 10 | 0.000820s | 0.000833s | 0.000805s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.000829s | 0.000854s | 0.000816s | byte equality observed |
| variant_move_construct.test | 10 | 0.000827s | 0.000832s | 0.000808s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.000830s | 0.000843s | 0.000827s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.000824s | 0.000848s | 0.000852s | byte equality observed |
| variant_size.test | 10 | 0.000798s | 0.000833s | 0.000827s | byte equality observed |
| variant_special.test | 10 | 0.000856s | 0.000889s | 0.000849s | byte equality observed |
| variant_subset.test | 10 | 0.000830s | 0.000853s | 0.000879s | byte equality observed |
| variant_subset_nx.test | 10 | 0.000833s | 0.000822s | 0.000840s | byte equality observed |
| variant_swap.test | 10 | 0.000841s | 0.000800s | 0.000841s | byte equality observed |
| variant_trivial.test | 10 | 0.000847s | 0.000839s | 0.000829s | byte equality observed |
| variant_value_assign.test | 10 | 0.000823s | 0.000827s | 0.000796s | byte equality observed |
| variant_value_construct.test | 10 | 0.000823s | 0.000823s | 0.000801s | byte equality observed |
| variant_valueless.test | 10 | 0.000853s | 0.000838s | 0.000830s | byte equality observed |
| variant_visit.test | 10 | 0.000815s | 0.000811s | 0.000852s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.000802s | 0.000812s | 0.000813s | byte equality observed |
| variant_visit_derived.test | 10 | 0.000819s | 0.000809s | 0.000807s | byte equality observed |
| variant_visit_r.test | 10 | 0.000810s | 0.000794s | 0.000802s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44818861403).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
