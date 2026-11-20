# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.094785 | 0.212624 | 0.284232 | 0.001123 | 0.000517 | 0.001161 |
| variant_size.test | RUN | 0.157181 | 0.531445 | 0.559462 | 0.001283 | 0.001263 | 0.001279 |
| variant_alternative.test | RUN | 0.217246 | 1.743121 | 0.953465 | 0.001348 | 0.001436 | 0.001149 |
| variant_holds_alternative.test | RUN | 0.150180 | 0.394028 | 0.531578 | 0.001280 | 0.001276 | 0.001235 |
| variant_holds_alternative_cx.test | COMPILE | 0.096606 | 0.227073 | 0.295592 | — | — | — |
| variant_get_by_index.test | RUN | 0.253466 | 1.912736 | 1.177886 | 0.001472 | 0.001348 | 0.001416 |
| variant_get_by_index_cx.test | COMPILE | 0.100942 | 0.231971 | 0.310952 | — | — | — |
| variant_get_by_type.test | RUN | 0.260861 | 2.079386 | 1.247753 | 0.001492 | 0.001346 | 0.001310 |
| variant_get_by_type_cx.test | COMPILE | 0.092155 | 0.205553 | 0.270148 | — | — | — |
| variant_default_construct.test | RUN | 0.246063 | 1.509242 | 1.000341 | 0.001125 | 0.001329 | 0.001322 |
| variant_default_construct_cx.test | COMPILE | 0.101643 | 0.215780 | 0.305479 | — | — | — |
| variant_copy_construct.test | RUN | 0.388380 | 2.496312 | 1.855828 | 0.001402 | 0.001234 | 0.001213 |
| variant_copy_construct_cx.test | COMPILE | 0.114701 | 0.252796 | 0.358599 | — | — | — |
| variant_move_construct.test | RUN | 0.356832 | 2.173984 | 1.680538 | 0.001244 | 0.001204 | 0.001216 |
| variant_move_construct_cx.test | COMPILE | 0.089256 | 0.208698 | 0.256788 | — | — | — |
| variant_value_construct.test | RUN | 0.188327 | 0.541143 | 0.683544 | 0.001264 | 0.001331 | 0.001415 |
| variant_value_construct_cx.test | COMPILE | 0.103365 | 0.241077 | 0.339333 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.194801 | 0.547822 | 0.693059 | 0.001362 | 0.001415 | 0.001077 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.102734 | 0.232123 | 0.307709 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.189936 | 0.533908 | 0.700619 | 0.001186 | 0.001472 | 0.001228 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.105292 | 0.236713 | 0.322280 | — | — | — |
| variant_copy_assign.test | RUN | 0.262667 | 1.739537 | 1.109223 | 0.001268 | 0.001380 | 0.001258 |
| variant_copy_assign_cx.test | COMPILE | 0.089053 | 0.205902 | 0.261141 | — | — | — |
| variant_move_assign.test | RUN | 0.258996 | 1.717923 | 1.098924 | 0.001277 | 0.001211 | 0.001191 |
| variant_move_assign_cx.test | COMPILE | 0.091205 | 0.201192 | 0.262092 | — | — | — |
| variant_value_assign.test | RUN | 0.192534 | 0.598555 | 0.756083 | 0.001243 | 0.001253 | 0.001193 |
| variant_value_assign_cx.test | COMPILE | 0.088034 | 0.202089 | 0.266696 | — | — | — |
| variant_emplace_index.test | RUN | 0.216538 | 0.699045 | 0.840957 | 0.001278 | 0.001254 | 0.001410 |
| variant_emplace_index_cx.test | COMPILE | 0.089371 | 0.206038 | 0.264672 | — | — | — |
| variant_emplace_type.test | RUN | 0.199494 | 0.589596 | 0.739526 | 0.001325 | 0.001199 | 0.001249 |
| variant_emplace_type_cx.test | COMPILE | 0.089608 | 0.201672 | 0.261728 | — | — | — |
| variant_swap.test | RUN | 0.204279 | 0.741814 | 0.815488 | 0.001293 | 0.001308 | 0.001322 |
| variant_eq_ne.test | RUN | 0.167523 | 0.437578 | 0.581985 | 0.001180 | 0.001364 | 0.000953 |
| variant_eq_ne_cx.test | COMPILE | 0.088449 | 0.209723 | 0.256284 | — | — | — |
| variant_lt_gt.test | RUN | 0.167583 | 0.511237 | 0.603642 | 0.001324 | 0.001365 | 0.001311 |
| variant_lt_gt_cx.test | COMPILE | 0.092997 | 0.206456 | 0.261744 | — | — | — |
| variant_destroy.test | RUN | 0.179711 | 0.501848 | 0.626755 | 0.001250 | 0.001310 | 0.001376 |
| variant_visit.test | RUN | 1.081999 | 3.879617 | 10.783863 | 0.001376 | 0.001203 | 0.001238 |
| variant_convert_construct.test | RUN | 0.216767 | 0.682793 | 0.870362 | 0.001508 | 0.001281 | 0.001357 |
| variant_subset.test | RUN | 0.224407 | 0.707161 | 0.930528 | 0.001502 | 0.001500 | 0.001232 |
| variant_valueless.test | RUN | 0.164123 | 0.459576 | 0.597724 | 0.001517 | 0.001251 | 0.001224 |
| variant_copy_construct_throw.test | RUN | 0.129727 | 0.349169 | 0.430052 | 0.001273 | 0.001252 | 0.001366 |
| variant_move_construct_throw.test | RUN | 0.129375 | 0.342005 | 0.418412 | 0.001283 | 0.001349 | 0.001451 |
| variant_convert_construct_throw.test | RUN | 0.137540 | 0.372624 | 0.461006 | 0.001280 | 0.001187 | 0.001372 |
| variant_copy_assign_throw.test | RUN | 0.123626 | 0.325105 | 0.422571 | 0.001209 | 0.001393 | 0.001301 |
| variant_move_assign_throw.test | RUN | 0.124602 | 0.320803 | 0.426437 | 0.001354 | 0.001384 | 0.001321 |
| variant_get_by_index_nx.test | RUN | 0.318087 | 1.624367 | 1.136087 | 0.001396 | 0.001199 | 0.001358 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.098344 | 0.235598 | 0.306461 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.313155 | 1.815568 | 1.221179 | 0.001375 | 0.001269 | 0.001259 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.089902 | 0.202430 | 0.267822 | — | — | — |
| variant_subset_nx.test | RUN | 0.232482 | 0.694666 | 0.949315 | 0.001342 | 0.001225 | 0.001265 |
| variant_hash.test | RUN | 0.226843 | 0.807231 | 0.839598 | 0.001546 | 0.001354 | 0.001345 |
| variant_trivial.test | RUN | 1.305821 | 4.583258 | 6.304963 | 0.001361 | 0.001403 | 0.001430 |
| variant_special.test | RUN | 1.267817 | 5.063961 | 6.807542 | 0.001556 | 0.001508 | 0.001454 |
| variant_visit_derived.test | RUN | 0.156471 | 0.420361 | 0.627647 | 0.001436 | 0.001390 | 0.001380 |
| variant_many_types.test | RUN | 1.433243 | 6.126926 | 8.929427 | 0.001414 | 0.001267 | 0.001234 |
| variant_visit_r.test | RUN | 0.574305 | 1.973460 | 3.491161 | 0.001356 | 0.001358 | 0.001297 |
| variant_derived_construct.test | COMPILE | 0.091744 | 0.212151 | 0.275538 | — | — | — |
| variant_visit_by_index.test | RUN | 0.209014 | 0.536901 | 0.823816 | 0.001192 | 0.001320 | 0.001433 |
| variant_ostream_insert.test | RUN | 0.152383 | 0.447190 | 0.554802 | 0.001540 | 0.001322 | 0.001222 |
| is_output_streamable.test | RUN | 0.198071 | 0.931968 | 0.754039 | 0.001259 | 0.001204 | 0.001383 |
| variant_json_value_from.test | RUN | 0.292573 | 0.722489 | 0.949684 | 0.001091 | 0.001258 | 0.001410 |
| variant_json_value_to.test | RUN | 0.366461 | 1.030649 | 1.301666 | 0.001433 | 0.001276 | 0.001279 |
| variant_uses_double_storage.test | COMPILE | 0.100106 | 0.214096 | 0.308166 | — | — | — |
| variant_derived_construct2.test | RUN | 0.134193 | 0.351697 | 0.469625 | 0.001273 | 0.001203 | 0.001338 |
| variant_visit_cx.test | COMPILE | 0.091034 | 0.204741 | 0.250021 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.089970 | 0.199559 | 0.262670 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.090224 | 0.201790 | 0.261672 | — | — | — |
| variant_index_type_126.test | RUN | 0.812035 | 1.962242 | 3.916714 | 0.001533 | 0.001279 | 0.001342 |
| variant_index_type_127.test | RUN | 0.823686 | 1.955856 | 3.891523 | 0.001252 | 0.001290 | 0.001388 |
| variant_index_type_128.test | RUN | 0.839767 | 1.988206 | 3.985180 | 0.001183 | 0.001248 | 0.001347 |
| variant_index_type_129.test | RUN | 0.837818 | 2.038942 | 3.961134 | 0.001389 | 0.001241 | 0.001365 |
| variant_index_type_254.test | RUN | 2.901899 | 7.710757 | 13.004846 | 0.001231 | 0.001378 | 0.001164 |
| variant_index_type_255.test | RUN | 2.903108 | 7.952096 | 12.929493 | 0.001204 | 0.001251 | 0.001396 |
| variant_index_type_256.test | RUN | 2.944732 | 8.017071 | 13.186046 | 0.001237 | 0.001278 | 0.001237 |
| variant_index_type_257.test | RUN | 2.964589 | 7.929661 | 13.031431 | 0.001249 | 0.001175 | 0.001149 |
| variant_default_construct_cx_2.test | COMPILE | 0.086193 | 0.217011 | 0.255084 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.092603 | 0.198716 | 0.257601 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.084835 | 0.196054 | 0.265292 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.088558 | 0.199404 | 0.261768 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.088478 | 0.202972 | 0.260539 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.085234 | 0.196378 | 0.258121 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.068515 | 0.186839 | 0.165343 | — | — | — |
| variant_issue_55.test | RUN | 0.126336 | 0.342493 | 0.392008 | 0.000970 | 0.000928 | 0.000929 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.988× | 0.997×, 0.980× | 0.999× |
| clang | 0.997× | 1.001×, 0.994× | 1.005× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44656576225).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.000812s | 0.000818s | 0.000834s | byte equality observed |
| quick.test | 10 | 0.000803s | 0.000367s | 0.000768s | byte equality observed |
| variant_alternative.test | 10 | 0.000820s | 0.000837s | 0.000785s | byte equality observed |
| variant_convert_construct.test | 10 | 0.000841s | 0.000860s | 0.000823s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.000824s | 0.000847s | 0.000845s | byte equality observed |
| variant_copy_assign.test | 10 | 0.000824s | 0.000843s | 0.000816s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.000837s | 0.000849s | 0.000829s | byte equality observed |
| variant_copy_construct.test | 10 | 0.000824s | 0.000825s | 0.000845s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.000852s | 0.000837s | 0.000860s | byte equality observed |
| variant_default_construct.test | 10 | 0.000815s | 0.000848s | 0.000850s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.000807s | 0.000793s | 0.000828s | byte equality observed |
| variant_destroy.test | 10 | 0.000788s | 0.000812s | 0.000837s | byte equality observed |
| variant_emplace_index.test | 10 | 0.000819s | 0.000811s | 0.000821s | byte equality observed |
| variant_emplace_type.test | 10 | 0.000816s | 0.000837s | 0.000814s | byte equality observed |
| variant_eq_ne.test | 10 | 0.000798s | 0.000816s | 0.000832s | byte equality observed |
| variant_get_by_index.test | 10 | 0.000853s | 0.000870s | 0.000845s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.000835s | 0.000828s | 0.000801s | byte equality observed |
| variant_get_by_type.test | 10 | 0.000844s | 0.000877s | 0.000833s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.000815s | 0.000820s | 0.000820s | byte equality observed |
| variant_hash.test | 10 | 0.000796s | 0.000807s | 0.000812s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.000832s | 0.000825s | 0.000788s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.000850s | 0.000834s | 0.000838s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.000837s | 0.000823s | 0.000847s | byte equality observed |
| variant_index_type_126.test | 10 | 0.000832s | 0.000815s | 0.000797s | byte equality observed |
| variant_index_type_127.test | 10 | 0.000847s | 0.000804s | 0.000818s | byte equality observed |
| variant_index_type_128.test | 10 | 0.000809s | 0.000794s | 0.000825s | byte equality observed |
| variant_index_type_129.test | 10 | 0.000843s | 0.000811s | 0.000832s | byte equality observed |
| variant_index_type_254.test | 10 | 0.000853s | 0.000801s | 0.000801s | byte equality observed |
| variant_index_type_255.test | 10 | 0.000828s | 0.000845s | 0.000824s | byte equality observed |
| variant_index_type_256.test | 10 | 0.000840s | 0.000809s | 0.000827s | byte equality observed |
| variant_index_type_257.test | 10 | 0.000817s | 0.000803s | 0.000820s | byte equality observed |
| variant_issue_55.test | 10 | 0.000833s | 0.000813s | 0.000826s | byte equality observed |
| variant_json_value_from.test | 10 | 0.000884s | 0.000830s | 0.000845s | byte equality observed |
| variant_json_value_to.test | 10 | 0.000881s | 0.000859s | 0.000860s | byte equality observed |
| variant_lt_gt.test | 10 | 0.000781s | 0.000820s | 0.000858s | byte equality observed |
| variant_many_types.test | 10 | 0.000832s | 0.000835s | 0.000852s | byte equality observed |
| variant_move_assign.test | 10 | 0.000817s | 0.000842s | 0.000834s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.000844s | 0.000826s | 0.000862s | byte equality observed |
| variant_move_construct.test | 10 | 0.000839s | 0.000843s | 0.000821s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.000861s | 0.000834s | 0.000843s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.000853s | 0.000864s | 0.000832s | byte equality observed |
| variant_size.test | 10 | 0.000814s | 0.000869s | 0.000828s | byte equality observed |
| variant_special.test | 10 | 0.000865s | 0.000889s | 0.000856s | byte equality observed |
| variant_subset.test | 10 | 0.000851s | 0.000873s | 0.000821s | byte equality observed |
| variant_subset_nx.test | 10 | 0.000821s | 0.000840s | 0.000826s | byte equality observed |
| variant_swap.test | 10 | 0.000831s | 0.000855s | 0.000838s | byte equality observed |
| variant_trivial.test | 10 | 0.000867s | 0.000890s | 0.000843s | byte equality observed |
| variant_value_assign.test | 10 | 0.000831s | 0.000827s | 0.000845s | byte equality observed |
| variant_value_construct.test | 10 | 0.000820s | 0.000842s | 0.000816s | byte equality observed |
| variant_valueless.test | 10 | 0.000851s | 0.000856s | 0.000844s | byte equality observed |
| variant_visit.test | 10 | 0.000823s | 0.000840s | 0.000845s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.000817s | 0.000818s | 0.000822s | byte equality observed |
| variant_visit_derived.test | 10 | 0.000810s | 0.000813s | 0.000818s | byte equality observed |
| variant_visit_r.test | 10 | 0.000824s | 0.000816s | 0.000806s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44656576225).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
