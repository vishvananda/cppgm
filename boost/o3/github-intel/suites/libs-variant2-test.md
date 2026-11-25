# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.092565 | 0.210488 | 0.273461 | 0.001229 | 0.000540 | 0.001213 |
| variant_size.test | RUN | 0.164196 | 0.527734 | 0.537247 | 0.001297 | 0.001382 | 0.001332 |
| variant_alternative.test | RUN | 0.214384 | 1.764967 | 0.952858 | 0.001539 | 0.001418 | 0.001170 |
| variant_holds_alternative.test | RUN | 0.149550 | 0.394218 | 0.545179 | 0.001295 | 0.001437 | 0.001466 |
| variant_holds_alternative_cx.test | COMPILE | 0.098448 | 0.228536 | 0.297912 | — | — | — |
| variant_get_by_index.test | RUN | 0.249662 | 1.943925 | 1.183454 | 0.001534 | 0.001531 | 0.001448 |
| variant_get_by_index_cx.test | COMPILE | 0.099462 | 0.238171 | 0.312344 | — | — | — |
| variant_get_by_type.test | RUN | 0.266001 | 2.053722 | 1.256961 | 0.001423 | 0.001186 | 0.001340 |
| variant_get_by_type_cx.test | COMPILE | 0.089319 | 0.205020 | 0.265664 | — | — | — |
| variant_default_construct.test | RUN | 0.244898 | 1.539853 | 1.018421 | 0.001102 | 0.000947 | 0.001276 |
| variant_default_construct_cx.test | COMPILE | 0.100607 | 0.239969 | 0.314328 | — | — | — |
| variant_copy_construct.test | RUN | 0.384917 | 2.569361 | 1.859126 | 0.001242 | 0.001306 | 0.001213 |
| variant_copy_construct_cx.test | COMPILE | 0.113831 | 0.257327 | 0.357331 | — | — | — |
| variant_move_construct.test | RUN | 0.353711 | 2.196228 | 1.654374 | 0.001221 | 0.001242 | 0.001350 |
| variant_move_construct_cx.test | COMPILE | 0.088606 | 0.206700 | 0.262458 | — | — | — |
| variant_value_construct.test | RUN | 0.185054 | 0.536456 | 0.673019 | 0.001230 | 0.001247 | 0.001253 |
| variant_value_construct_cx.test | COMPILE | 0.102232 | 0.239533 | 0.331647 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.195478 | 0.543265 | 0.702718 | 0.001345 | 0.001316 | 0.001242 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.101177 | 0.241986 | 0.312680 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.188988 | 0.535662 | 0.691383 | 0.001264 | 0.001433 | 0.001310 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.102180 | 0.247303 | 0.320023 | — | — | — |
| variant_copy_assign.test | RUN | 0.262381 | 1.770896 | 1.120997 | 0.001288 | 0.001278 | 0.001222 |
| variant_copy_assign_cx.test | COMPILE | 0.089133 | 0.204873 | 0.248434 | — | — | — |
| variant_move_assign.test | RUN | 0.259486 | 1.761952 | 1.118215 | 0.001323 | 0.001262 | 0.001334 |
| variant_move_assign_cx.test | COMPILE | 0.093731 | 0.207762 | 0.259788 | — | — | — |
| variant_value_assign.test | RUN | 0.195532 | 0.609074 | 0.759284 | 0.001264 | 0.001409 | 0.001179 |
| variant_value_assign_cx.test | COMPILE | 0.090130 | 0.209468 | 0.263549 | — | — | — |
| variant_emplace_index.test | RUN | 0.223683 | 0.714990 | 0.851233 | 0.001357 | 0.001348 | 0.001239 |
| variant_emplace_index_cx.test | COMPILE | 0.091242 | 0.202582 | 0.266534 | — | — | — |
| variant_emplace_type.test | RUN | 0.201325 | 0.605868 | 0.745576 | 0.001379 | 0.001343 | 0.001407 |
| variant_emplace_type_cx.test | COMPILE | 0.089492 | 0.210981 | 0.265374 | — | — | — |
| variant_swap.test | RUN | 0.210019 | 0.760386 | 0.814548 | 0.001549 | 0.001347 | 0.001193 |
| variant_eq_ne.test | RUN | 0.164329 | 0.448867 | 0.566328 | 0.001350 | 0.001376 | 0.001228 |
| variant_eq_ne_cx.test | COMPILE | 0.094381 | 0.209108 | 0.272432 | — | — | — |
| variant_lt_gt.test | RUN | 0.171798 | 0.506576 | 0.602021 | 0.001365 | 0.001332 | 0.001249 |
| variant_lt_gt_cx.test | COMPILE | 0.090061 | 0.210739 | 0.258991 | — | — | — |
| variant_destroy.test | RUN | 0.174714 | 0.514646 | 0.624405 | 0.001258 | 0.001352 | 0.001356 |
| variant_visit.test | RUN | 1.102810 | 3.973753 | 10.657905 | 0.001183 | 0.001310 | 0.001329 |
| variant_convert_construct.test | RUN | 0.224091 | 0.675889 | 0.864045 | 0.001478 | 0.001308 | 0.001266 |
| variant_subset.test | RUN | 0.229157 | 0.723478 | 0.928642 | 0.001300 | 0.001371 | 0.001398 |
| variant_valueless.test | RUN | 0.165117 | 0.478873 | 0.620904 | 0.001269 | 0.001291 | 0.001198 |
| variant_copy_construct_throw.test | RUN | 0.134093 | 0.344512 | 0.424044 | 0.001350 | 0.001372 | 0.001299 |
| variant_move_construct_throw.test | RUN | 0.134747 | 0.351962 | 0.418767 | 0.001305 | 0.001448 | 0.001147 |
| variant_convert_construct_throw.test | RUN | 0.133958 | 0.375266 | 0.449424 | 0.001284 | 0.001333 | 0.001043 |
| variant_copy_assign_throw.test | RUN | 0.130501 | 0.322484 | 0.414963 | 0.001301 | 0.001406 | 0.001122 |
| variant_move_assign_throw.test | RUN | 0.130353 | 0.327555 | 0.420281 | 0.001477 | 0.001192 | 0.001188 |
| variant_get_by_index_nx.test | RUN | 0.317549 | 1.636993 | 1.111239 | 0.001228 | 0.001539 | 0.001337 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.104157 | 0.245643 | 0.309856 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.319493 | 1.828515 | 1.186230 | 0.001129 | 0.001404 | 0.001338 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.093877 | 0.209088 | 0.266984 | — | — | — |
| variant_subset_nx.test | RUN | 0.234695 | 0.695272 | 0.917517 | 0.001162 | 0.001215 | 0.001197 |
| variant_hash.test | RUN | 0.226253 | 0.833893 | 0.843703 | 0.001408 | 0.001548 | 0.001437 |
| variant_trivial.test | RUN | 1.311951 | 4.692965 | 6.224004 | 0.001352 | 0.001457 | 0.001226 |
| variant_special.test | RUN | 1.275058 | 5.148375 | 6.670694 | 0.001624 | 0.001382 | 0.001304 |
| variant_visit_derived.test | RUN | 0.152552 | 0.427696 | 0.625900 | 0.001284 | 0.001452 | 0.001312 |
| variant_many_types.test | RUN | 1.444676 | 6.240664 | 8.911042 | 0.001430 | 0.001314 | 0.001163 |
| variant_visit_r.test | RUN | 0.603322 | 2.015388 | 3.487995 | 0.001336 | 0.001464 | 0.001245 |
| variant_derived_construct.test | COMPILE | 0.092705 | 0.216704 | 0.270872 | — | — | — |
| variant_visit_by_index.test | RUN | 0.205907 | 0.548053 | 0.834622 | 0.001281 | 0.001272 | 0.001286 |
| variant_ostream_insert.test | RUN | 0.150661 | 0.460639 | 0.554841 | 0.001380 | 0.001300 | 0.001529 |
| is_output_streamable.test | RUN | 0.190869 | 0.950522 | 0.747609 | 0.001143 | 0.001192 | 0.001321 |
| variant_json_value_from.test | RUN | 0.284860 | 0.729512 | 0.953151 | 0.001588 | 0.001315 | 0.001314 |
| variant_json_value_to.test | RUN | 0.363227 | 1.033074 | 1.280656 | 0.001334 | 0.001279 | 0.001173 |
| variant_uses_double_storage.test | COMPILE | 0.096944 | 0.217179 | 0.305466 | — | — | — |
| variant_derived_construct2.test | RUN | 0.136400 | 0.359984 | 0.456094 | 0.001335 | 0.001461 | 0.001173 |
| variant_visit_cx.test | COMPILE | 0.089899 | 0.208525 | 0.239001 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.092189 | 0.207056 | 0.259406 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.088495 | 0.208032 | 0.256996 | — | — | — |
| variant_index_type_126.test | RUN | 0.832593 | 2.041996 | 3.851294 | 0.001450 | 0.001256 | 0.001181 |
| variant_index_type_127.test | RUN | 0.832712 | 2.022340 | 3.970730 | 0.001329 | 0.001391 | 0.001235 |
| variant_index_type_128.test | RUN | 0.857039 | 2.066694 | 3.955856 | 0.001092 | 0.001399 | 0.001064 |
| variant_index_type_129.test | RUN | 0.865371 | 2.041676 | 3.929393 | 0.001416 | 0.001324 | 0.001014 |
| variant_index_type_254.test | RUN | 2.965429 | 7.981923 | 12.345536 | 0.001390 | 0.001490 | 0.001312 |
| variant_index_type_255.test | RUN | 2.973825 | 8.174548 | 12.561655 | 0.001216 | 0.001454 | 0.001042 |
| variant_index_type_256.test | RUN | 3.065897 | 8.187031 | 12.694619 | 0.001312 | 0.001253 | 0.001118 |
| variant_index_type_257.test | RUN | 3.063439 | 8.402398 | 12.871877 | 0.001331 | 0.001237 | 0.001079 |
| variant_default_construct_cx_2.test | COMPILE | 0.091096 | 0.219633 | 0.290741 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.083964 | 0.197628 | 0.284924 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.090083 | 0.214044 | 0.246826 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.092329 | 0.205288 | 0.238320 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.089468 | 0.204453 | 0.254232 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.078828 | 0.207134 | 0.215643 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.080856 | 0.154378 | 0.210523 | — | — | — |
| variant_issue_55.test | RUN | 0.125764 | 0.347872 | 0.415640 | 0.000921 | 0.000904 | 0.000882 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.992× | 0.992×, 0.993× | 1.009× |
| clang | 0.990× | 0.994×, 0.986× | 0.996× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45617981312).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.000822s | 0.000824s | 0.000798s | byte equality observed |
| quick.test | 10 | 0.000793s | 0.000362s | 0.000804s | byte equality observed |
| variant_alternative.test | 10 | 0.000790s | 0.000818s | 0.000817s | byte equality observed |
| variant_convert_construct.test | 10 | 0.000819s | 0.000843s | 0.000834s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.000827s | 0.000824s | 0.000831s | byte equality observed |
| variant_copy_assign.test | 10 | 0.000823s | 0.000829s | 0.000823s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.000838s | 0.000849s | 0.000844s | byte equality observed |
| variant_copy_construct.test | 10 | 0.000837s | 0.000859s | 0.000830s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.000841s | 0.000849s | 0.000855s | byte equality observed |
| variant_default_construct.test | 10 | 0.000826s | 0.000815s | 0.000810s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.000833s | 0.000826s | 0.000818s | byte equality observed |
| variant_destroy.test | 10 | 0.000819s | 0.000829s | 0.000840s | byte equality observed |
| variant_emplace_index.test | 10 | 0.000849s | 0.000815s | 0.000804s | byte equality observed |
| variant_emplace_type.test | 10 | 0.000850s | 0.000841s | 0.000822s | byte equality observed |
| variant_eq_ne.test | 10 | 0.000831s | 0.000807s | 0.000824s | byte equality observed |
| variant_get_by_index.test | 10 | 0.000862s | 0.000856s | 0.000849s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.000823s | 0.000843s | 0.000803s | byte equality observed |
| variant_get_by_type.test | 10 | 0.000837s | 0.000899s | 0.000866s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.000798s | 0.000835s | 0.000808s | byte equality observed |
| variant_hash.test | 10 | 0.000804s | 0.000831s | 0.000842s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.000815s | 0.000851s | 0.000872s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.000837s | 0.000848s | 0.000834s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.000845s | 0.000861s | 0.000840s | byte equality observed |
| variant_index_type_126.test | 10 | 0.000813s | 0.000827s | 0.000842s | byte equality observed |
| variant_index_type_127.test | 10 | 0.000809s | 0.000831s | 0.000813s | byte equality observed |
| variant_index_type_128.test | 10 | 0.000848s | 0.000825s | 0.000832s | byte equality observed |
| variant_index_type_129.test | 10 | 0.000826s | 0.000816s | 0.000841s | byte equality observed |
| variant_index_type_254.test | 10 | 0.000827s | 0.000804s | 0.000872s | byte equality observed |
| variant_index_type_255.test | 10 | 0.000844s | 0.000792s | 0.000817s | byte equality observed |
| variant_index_type_256.test | 10 | 0.000842s | 0.000797s | 0.000814s | byte equality observed |
| variant_index_type_257.test | 10 | 0.000834s | 0.000843s | 0.000812s | byte equality observed |
| variant_issue_55.test | 10 | 0.000835s | 0.000853s | 0.000840s | byte equality observed |
| variant_json_value_from.test | 10 | 0.000873s | 0.000885s | 0.000844s | byte equality observed |
| variant_json_value_to.test | 10 | 0.000872s | 0.000873s | 0.000843s | byte equality observed |
| variant_lt_gt.test | 10 | 0.000843s | 0.000825s | 0.000817s | byte equality observed |
| variant_many_types.test | 9 | 0.000840s | 0.000845s | 0.000840s | byte equality observed |
| variant_move_assign.test | 10 | 0.000834s | 0.000811s | 0.000815s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.000839s | 0.000818s | 0.000818s | byte equality observed |
| variant_move_construct.test | 10 | 0.000849s | 0.000818s | 0.000819s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.000835s | 0.000844s | 0.000852s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.000834s | 0.000848s | 0.000849s | byte equality observed |
| variant_size.test | 10 | 0.000816s | 0.000806s | 0.000832s | byte equality observed |
| variant_special.test | 10 | 0.000876s | 0.000863s | 0.000851s | byte equality observed |
| variant_subset.test | 10 | 0.000859s | 0.000820s | 0.000851s | byte equality observed |
| variant_subset_nx.test | 10 | 0.000838s | 0.000817s | 0.000826s | byte equality observed |
| variant_swap.test | 10 | 0.000858s | 0.000823s | 0.000808s | byte equality observed |
| variant_trivial.test | 10 | 0.000861s | 0.000876s | 0.000821s | byte equality observed |
| variant_value_assign.test | 10 | 0.000839s | 0.000813s | 0.000814s | byte equality observed |
| variant_value_construct.test | 10 | 0.000809s | 0.000834s | 0.000820s | byte equality observed |
| variant_valueless.test | 10 | 0.000854s | 0.000869s | 0.000853s | byte equality observed |
| variant_visit.test | 10 | 0.000838s | 0.000826s | 0.000846s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.000833s | 0.000824s | 0.000838s | byte equality observed |
| variant_visit_derived.test | 10 | 0.000817s | 0.000838s | 0.000825s | byte equality observed |
| variant_visit_r.test | 10 | 0.000796s | 0.000817s | 0.000803s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45617981312).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
