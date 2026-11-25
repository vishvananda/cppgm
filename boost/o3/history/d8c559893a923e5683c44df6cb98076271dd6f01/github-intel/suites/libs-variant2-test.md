# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.090320 | 0.221640 | 0.286414 | 0.001217 | 0.000482 | 0.001384 |
| variant_size.test | RUN | 0.165901 | 0.534793 | 0.551536 | 0.001386 | 0.001270 | 0.001414 |
| variant_alternative.test | RUN | 0.217714 | 1.755251 | 0.953827 | 0.001575 | 0.001382 | 0.001197 |
| variant_holds_alternative.test | RUN | 0.150468 | 0.394730 | 0.536961 | 0.001247 | 0.001230 | 0.001182 |
| variant_holds_alternative_cx.test | COMPILE | 0.096866 | 0.229003 | 0.306699 | — | — | — |
| variant_get_by_index.test | RUN | 0.248995 | 1.951943 | 1.170430 | 0.001535 | 0.001408 | 0.001385 |
| variant_get_by_index_cx.test | COMPILE | 0.099779 | 0.234295 | 0.316773 | — | — | — |
| variant_get_by_type.test | RUN | 0.265706 | 2.069747 | 1.251416 | 0.001319 | 0.001379 | 0.001195 |
| variant_get_by_type_cx.test | COMPILE | 0.090707 | 0.205312 | 0.255833 | — | — | — |
| variant_default_construct.test | RUN | 0.245809 | 1.528334 | 1.038737 | 0.001270 | 0.001209 | 0.001212 |
| variant_default_construct_cx.test | COMPILE | 0.101748 | 0.231082 | 0.293297 | — | — | — |
| variant_copy_construct.test | RUN | 0.383150 | 2.573165 | 1.842726 | 0.001370 | 0.001393 | 0.001468 |
| variant_copy_construct_cx.test | COMPILE | 0.113699 | 0.259710 | 0.372353 | — | — | — |
| variant_move_construct.test | RUN | 0.354753 | 2.183194 | 1.709959 | 0.001372 | 0.001268 | 0.001345 |
| variant_move_construct_cx.test | COMPILE | 0.090257 | 0.209293 | 0.263253 | — | — | — |
| variant_value_construct.test | RUN | 0.184980 | 0.539275 | 0.700200 | 0.001203 | 0.001439 | 0.001400 |
| variant_value_construct_cx.test | COMPILE | 0.101848 | 0.238777 | 0.314495 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.200309 | 0.549175 | 0.712946 | 0.001303 | 0.001375 | 0.001209 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.104312 | 0.243063 | 0.326368 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.190332 | 0.541344 | 0.681395 | 0.001416 | 0.001446 | 0.001332 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.105077 | 0.241287 | 0.321098 | — | — | — |
| variant_copy_assign.test | RUN | 0.258806 | 1.753954 | 1.112580 | 0.001538 | 0.001409 | 0.001353 |
| variant_copy_assign_cx.test | COMPILE | 0.092954 | 0.207901 | 0.260500 | — | — | — |
| variant_move_assign.test | RUN | 0.260116 | 1.738072 | 1.107185 | 0.001463 | 0.001239 | 0.001173 |
| variant_move_assign_cx.test | COMPILE | 0.091867 | 0.206165 | 0.263599 | — | — | — |
| variant_value_assign.test | RUN | 0.196049 | 0.604849 | 0.775272 | 0.001194 | 0.001478 | 0.001449 |
| variant_value_assign_cx.test | COMPILE | 0.089540 | 0.205451 | 0.271973 | — | — | — |
| variant_emplace_index.test | RUN | 0.215752 | 0.699832 | 0.838908 | 0.001480 | 0.001483 | 0.001247 |
| variant_emplace_index_cx.test | COMPILE | 0.090010 | 0.208630 | 0.264073 | — | — | — |
| variant_emplace_type.test | RUN | 0.198550 | 0.607866 | 0.749703 | 0.001264 | 0.001102 | 0.001390 |
| variant_emplace_type_cx.test | COMPILE | 0.091229 | 0.204312 | 0.263524 | — | — | — |
| variant_swap.test | RUN | 0.206624 | 0.741813 | 0.809454 | 0.001664 | 0.001264 | 0.001325 |
| variant_eq_ne.test | RUN | 0.168022 | 0.445276 | 0.575140 | 0.001215 | 0.001436 | 0.001310 |
| variant_eq_ne_cx.test | COMPILE | 0.089201 | 0.207381 | 0.271547 | — | — | — |
| variant_lt_gt.test | RUN | 0.169428 | 0.524918 | 0.605154 | 0.001441 | 0.001279 | 0.001376 |
| variant_lt_gt_cx.test | COMPILE | 0.089419 | 0.206270 | 0.253928 | — | — | — |
| variant_destroy.test | RUN | 0.172112 | 0.511714 | 0.625030 | 0.001285 | 0.001254 | 0.001345 |
| variant_visit.test | RUN | 1.094602 | 3.934904 | 10.729776 | 0.001088 | 0.001197 | 0.001354 |
| variant_convert_construct.test | RUN | 0.219105 | 0.687698 | 0.859561 | 0.001158 | 0.001332 | 0.001237 |
| variant_subset.test | RUN | 0.226776 | 0.722518 | 0.916994 | 0.001372 | 0.001268 | 0.001096 |
| variant_valueless.test | RUN | 0.163811 | 0.462464 | 0.624483 | 0.001602 | 0.001530 | 0.001378 |
| variant_copy_construct_throw.test | RUN | 0.128980 | 0.350152 | 0.422410 | 0.001349 | 0.001339 | 0.001297 |
| variant_move_construct_throw.test | RUN | 0.131221 | 0.348232 | 0.434601 | 0.001304 | 0.001411 | 0.001381 |
| variant_convert_construct_throw.test | RUN | 0.137571 | 0.380550 | 0.464368 | 0.001353 | 0.001344 | 0.001245 |
| variant_copy_assign_throw.test | RUN | 0.125957 | 0.326914 | 0.425036 | 0.001306 | 0.001335 | 0.001432 |
| variant_move_assign_throw.test | RUN | 0.128979 | 0.326573 | 0.418931 | 0.001297 | 0.001371 | 0.001314 |
| variant_get_by_index_nx.test | RUN | 0.321188 | 1.627603 | 1.107500 | 0.001210 | 0.001157 | 0.001210 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.103382 | 0.245396 | 0.304686 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.317975 | 1.854450 | 1.220226 | 0.001322 | 0.001378 | 0.001409 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.088633 | 0.210650 | 0.261472 | — | — | — |
| variant_subset_nx.test | RUN | 0.237110 | 0.710722 | 0.938161 | 0.001401 | 0.001153 | 0.001337 |
| variant_hash.test | RUN | 0.223652 | 0.826765 | 0.836160 | 0.001440 | 0.001334 | 0.001287 |
| variant_trivial.test | RUN | 1.316099 | 4.658183 | 6.221431 | 0.001376 | 0.001406 | 0.001190 |
| variant_special.test | RUN | 1.280149 | 5.098998 | 6.634804 | 0.001368 | 0.001371 | 0.001202 |
| variant_visit_derived.test | RUN | 0.156144 | 0.429397 | 0.635802 | 0.001418 | 0.001408 | 0.001374 |
| variant_many_types.test | RUN | 1.425663 | 6.192224 | 9.004934 | 0.001559 | 0.001301 | 0.001357 |
| variant_visit_r.test | RUN | 0.577103 | 1.979119 | 3.604104 | 0.001262 | 0.001433 | 0.001356 |
| variant_derived_construct.test | COMPILE | 0.091749 | 0.209481 | 0.281476 | — | — | — |
| variant_visit_by_index.test | RUN | 0.203972 | 0.543471 | 0.820659 | 0.001213 | 0.001318 | 0.001198 |
| variant_ostream_insert.test | RUN | 0.148736 | 0.454066 | 0.497016 | 0.001568 | 0.001370 | 0.001386 |
| is_output_streamable.test | RUN | 0.197593 | 0.961451 | 0.747021 | 0.001222 | 0.001276 | 0.001272 |
| variant_json_value_from.test | RUN | 0.287847 | 0.726719 | 0.945919 | 0.001349 | 0.001340 | 0.001465 |
| variant_json_value_to.test | RUN | 0.356956 | 1.035494 | 1.293579 | 0.001433 | 0.001408 | 0.001588 |
| variant_uses_double_storage.test | COMPILE | 0.095600 | 0.218090 | 0.311215 | — | — | — |
| variant_derived_construct2.test | RUN | 0.130159 | 0.357101 | 0.464225 | 0.001193 | 0.001375 | 0.001309 |
| variant_visit_cx.test | COMPILE | 0.090298 | 0.209894 | 0.249753 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.089644 | 0.212020 | 0.267563 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.089567 | 0.205511 | 0.265201 | — | — | — |
| variant_index_type_126.test | RUN | 0.805399 | 2.012359 | 3.887472 | 0.001304 | 0.001379 | 0.001427 |
| variant_index_type_127.test | RUN | 0.809452 | 2.000311 | 3.910287 | 0.001173 | 0.001517 | 0.001313 |
| variant_index_type_128.test | RUN | 0.821316 | 2.049431 | 4.062542 | 0.001168 | 0.001363 | 0.001227 |
| variant_index_type_129.test | RUN | 0.833438 | 2.052735 | 4.012675 | 0.001167 | 0.001385 | 0.001454 |
| variant_index_type_254.test | RUN | 2.895659 | 7.894853 | 12.693666 | 0.001195 | 0.001434 | 0.001383 |
| variant_index_type_255.test | RUN | 2.897388 | 7.917645 | 12.806829 | 0.001204 | 0.001520 | 0.001381 |
| variant_index_type_256.test | RUN | 2.938763 | 8.116116 | 12.896422 | 0.001246 | 0.001362 | 0.001268 |
| variant_index_type_257.test | RUN | 2.947443 | 8.080240 | 12.997744 | 0.001239 | 0.001187 | 0.001334 |
| variant_default_construct_cx_2.test | COMPILE | 0.083119 | 0.221436 | 0.301554 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.089272 | 0.216207 | 0.246477 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.090172 | 0.197344 | 0.242969 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.085850 | 0.200291 | 0.260942 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.087104 | 0.205650 | 0.262783 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.078028 | 0.183994 | 0.256656 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.086006 | 0.184749 | 0.233728 | — | — | — |
| variant_issue_55.test | RUN | 0.139458 | 0.367028 | 0.387612 | 0.000965 | 0.000893 | 0.000887 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.991× | 0.993×, 0.989× | 1.003× |
| clang | 0.992× | 0.988×, 0.997× | 1.019× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45697047144).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.000807s | 0.000833s | 0.000856s | byte equality observed |
| quick.test | 10 | 0.000787s | 0.000358s | 0.000787s | byte equality observed |
| variant_alternative.test | 10 | 0.000815s | 0.000815s | 0.000825s | byte equality observed |
| variant_convert_construct.test | 10 | 0.000843s | 0.000788s | 0.000826s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.000855s | 0.000837s | 0.000818s | byte equality observed |
| variant_copy_assign.test | 10 | 0.000837s | 0.000837s | 0.000812s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.000841s | 0.000840s | 0.000840s | byte equality observed |
| variant_copy_construct.test | 10 | 0.000827s | 0.000815s | 0.000827s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.000841s | 0.000845s | 0.000853s | byte equality observed |
| variant_default_construct.test | 10 | 0.000852s | 0.000817s | 0.000828s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.000817s | 0.000810s | 0.000806s | byte equality observed |
| variant_destroy.test | 10 | 0.000824s | 0.000795s | 0.000847s | byte equality observed |
| variant_emplace_index.test | 10 | 0.000830s | 0.000824s | 0.000837s | byte equality observed |
| variant_emplace_type.test | 10 | 0.000837s | 0.000844s | 0.000849s | byte equality observed |
| variant_eq_ne.test | 10 | 0.000801s | 0.000793s | 0.000822s | byte equality observed |
| variant_get_by_index.test | 10 | 0.000851s | 0.000855s | 0.000855s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.000828s | 0.000810s | 0.000831s | byte equality observed |
| variant_get_by_type.test | 10 | 0.000837s | 0.000852s | 0.000847s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.000818s | 0.000834s | 0.000827s | byte equality observed |
| variant_hash.test | 10 | 0.000822s | 0.000819s | 0.000797s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.000828s | 0.000829s | 0.000804s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.000824s | 0.000822s | 0.000815s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.000831s | 0.000857s | 0.000812s | byte equality observed |
| variant_index_type_126.test | 10 | 0.000801s | 0.000820s | 0.000823s | byte equality observed |
| variant_index_type_127.test | 10 | 0.000825s | 0.000802s | 0.000810s | byte equality observed |
| variant_index_type_128.test | 10 | 0.000822s | 0.000802s | 0.000827s | byte equality observed |
| variant_index_type_129.test | 10 | 0.000829s | 0.000830s | 0.000814s | byte equality observed |
| variant_index_type_254.test | 10 | 0.000831s | 0.000805s | 0.000799s | byte equality observed |
| variant_index_type_255.test | 10 | 0.000822s | 0.000783s | 0.000812s | byte equality observed |
| variant_index_type_256.test | 10 | 0.000832s | 0.000816s | 0.000830s | byte equality observed |
| variant_index_type_257.test | 10 | 0.000820s | 0.000846s | 0.000836s | byte equality observed |
| variant_issue_55.test | 10 | 0.000842s | 0.000815s | 0.000826s | byte equality observed |
| variant_json_value_from.test | 10 | 0.000852s | 0.000862s | 0.000848s | byte equality observed |
| variant_json_value_to.test | 10 | 0.000833s | 0.000835s | 0.000824s | byte equality observed |
| variant_lt_gt.test | 10 | 0.000828s | 0.000806s | 0.000830s | byte equality observed |
| variant_many_types.test | 10 | 0.000857s | 0.000826s | 0.000830s | byte equality observed |
| variant_move_assign.test | 10 | 0.000843s | 0.000829s | 0.000814s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.000835s | 0.000834s | 0.000853s | byte equality observed |
| variant_move_construct.test | 10 | 0.000849s | 0.000843s | 0.000848s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.000851s | 0.000862s | 0.000870s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.000839s | 0.000838s | 0.000839s | byte equality observed |
| variant_size.test | 10 | 0.000810s | 0.000797s | 0.000803s | byte equality observed |
| variant_special.test | 10 | 0.000859s | 0.000857s | 0.000842s | byte equality observed |
| variant_subset.test | 10 | 0.000841s | 0.000804s | 0.000837s | byte equality observed |
| variant_subset_nx.test | 10 | 0.000809s | 0.000820s | 0.000814s | byte equality observed |
| variant_swap.test | 10 | 0.000829s | 0.000843s | 0.000818s | byte equality observed |
| variant_trivial.test | 10 | 0.000862s | 0.000860s | 0.000828s | byte equality observed |
| variant_value_assign.test | 10 | 0.000814s | 0.000840s | 0.000812s | byte equality observed |
| variant_value_construct.test | 10 | 0.000820s | 0.000829s | 0.000802s | byte equality observed |
| variant_valueless.test | 10 | 0.000847s | 0.000844s | 0.000868s | byte equality observed |
| variant_visit.test | 10 | 0.000835s | 0.000841s | 0.000833s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.000808s | 0.000824s | 0.000823s | byte equality observed |
| variant_visit_derived.test | 10 | 0.000817s | 0.000810s | 0.000816s | byte equality observed |
| variant_visit_r.test | 10 | 0.000779s | 0.000817s | 0.000807s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45697047144).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
