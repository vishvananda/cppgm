# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.091683 | 0.221616 | 0.267828 | 0.001298 | 0.000833 | 0.001058 |
| variant_size.test | RUN | 0.163462 | 0.530591 | 0.536663 | 0.001324 | 0.001379 | 0.001065 |
| variant_alternative.test | RUN | 0.216679 | 1.765796 | 0.925912 | 0.000979 | 0.001427 | 0.001085 |
| variant_holds_alternative.test | RUN | 0.149409 | 0.395886 | 0.504211 | 0.001279 | 0.001314 | 0.001029 |
| variant_holds_alternative_cx.test | COMPILE | 0.098744 | 0.228426 | 0.282885 | — | — | — |
| variant_get_by_index.test | RUN | 0.253458 | 1.903613 | 1.144804 | 0.001522 | 0.001341 | 0.001152 |
| variant_get_by_index_cx.test | COMPILE | 0.100830 | 0.236455 | 0.299659 | — | — | — |
| variant_get_by_type.test | RUN | 0.266474 | 2.084040 | 1.217094 | 0.001550 | 0.001244 | 0.001122 |
| variant_get_by_type_cx.test | COMPILE | 0.089778 | 0.207592 | 0.255646 | — | — | — |
| variant_default_construct.test | RUN | 0.244924 | 1.513161 | 0.967110 | 0.001264 | 0.001257 | 0.001113 |
| variant_default_construct_cx.test | COMPILE | 0.099939 | 0.218524 | 0.298660 | — | — | — |
| variant_copy_construct.test | RUN | 0.379337 | 2.492718 | 1.818737 | 0.001354 | 0.001257 | 0.001071 |
| variant_copy_construct_cx.test | COMPILE | 0.114615 | 0.252674 | 0.338904 | — | — | — |
| variant_move_construct.test | RUN | 0.355761 | 2.179980 | 1.600406 | 0.001210 | 0.001316 | 0.001034 |
| variant_move_construct_cx.test | COMPILE | 0.088467 | 0.205949 | 0.255635 | — | — | — |
| variant_value_construct.test | RUN | 0.185026 | 0.536466 | 0.657775 | 0.000995 | 0.001290 | 0.001215 |
| variant_value_construct_cx.test | COMPILE | 0.104803 | 0.240681 | 0.311622 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.193564 | 0.545134 | 0.673902 | 0.001383 | 0.001392 | 0.001136 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.100165 | 0.235777 | 0.305616 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.187485 | 0.548730 | 0.660350 | 0.001255 | 0.001314 | 0.001072 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.104386 | 0.239186 | 0.302674 | — | — | — |
| variant_copy_assign.test | RUN | 0.260349 | 1.744796 | 1.071654 | 0.001251 | 0.001192 | 0.001143 |
| variant_copy_assign_cx.test | COMPILE | 0.090703 | 0.207729 | 0.248494 | — | — | — |
| variant_move_assign.test | RUN | 0.258837 | 1.739536 | 1.067104 | 0.001276 | 0.001422 | 0.001072 |
| variant_move_assign_cx.test | COMPILE | 0.091066 | 0.208509 | 0.256683 | — | — | — |
| variant_value_assign.test | RUN | 0.193243 | 0.598516 | 0.735533 | 0.001250 | 0.001398 | 0.001096 |
| variant_value_assign_cx.test | COMPILE | 0.087219 | 0.206958 | 0.261089 | — | — | — |
| variant_emplace_index.test | RUN | 0.215117 | 0.704744 | 0.804348 | 0.001349 | 0.001234 | 0.001153 |
| variant_emplace_index_cx.test | COMPILE | 0.093290 | 0.201712 | 0.255429 | — | — | — |
| variant_emplace_type.test | RUN | 0.199970 | 0.586054 | 0.716418 | 0.001239 | 0.001126 | 0.001159 |
| variant_emplace_type_cx.test | COMPILE | 0.087803 | 0.209170 | 0.252391 | — | — | — |
| variant_swap.test | RUN | 0.207126 | 0.740058 | 0.784085 | 0.001606 | 0.001319 | 0.001144 |
| variant_eq_ne.test | RUN | 0.166935 | 0.436899 | 0.547577 | 0.001314 | 0.001404 | 0.001142 |
| variant_eq_ne_cx.test | COMPILE | 0.092956 | 0.202837 | 0.262365 | — | — | — |
| variant_lt_gt.test | RUN | 0.169161 | 0.510262 | 0.573390 | 0.001458 | 0.001220 | 0.001231 |
| variant_lt_gt_cx.test | COMPILE | 0.089264 | 0.205334 | 0.245827 | — | — | — |
| variant_destroy.test | RUN | 0.173735 | 0.507991 | 0.607766 | 0.001198 | 0.001364 | 0.001249 |
| variant_visit.test | RUN | 1.105949 | 3.837371 | 10.437794 | 0.001185 | 0.001201 | 0.001112 |
| variant_convert_construct.test | RUN | 0.222623 | 0.661433 | 0.842167 | 0.001458 | 0.001196 | 0.001068 |
| variant_subset.test | RUN | 0.219613 | 0.704800 | 0.907909 | 0.001511 | 0.001376 | 0.001138 |
| variant_valueless.test | RUN | 0.165560 | 0.472888 | 0.584490 | 0.001288 | 0.001348 | 0.001138 |
| variant_copy_construct_throw.test | RUN | 0.133794 | 0.333391 | 0.414752 | 0.001274 | 0.001254 | 0.001112 |
| variant_move_construct_throw.test | RUN | 0.126894 | 0.337340 | 0.420989 | 0.001294 | 0.001311 | 0.001280 |
| variant_convert_construct_throw.test | RUN | 0.139178 | 0.362024 | 0.439370 | 0.001291 | 0.001199 | 0.001212 |
| variant_copy_assign_throw.test | RUN | 0.125041 | 0.317776 | 0.417780 | 0.001221 | 0.001194 | 0.001079 |
| variant_move_assign_throw.test | RUN | 0.129893 | 0.326736 | 0.405285 | 0.001286 | 0.001371 | 0.001113 |
| variant_get_by_index_nx.test | RUN | 0.307850 | 1.590892 | 1.089845 | 0.001269 | 0.001137 | 0.001066 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.095078 | 0.236562 | 0.292779 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.316986 | 1.802397 | 1.172128 | 0.001377 | 0.001134 | 0.001224 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.090351 | 0.200941 | 0.251319 | — | — | — |
| variant_subset_nx.test | RUN | 0.239797 | 0.688627 | 0.891428 | 0.001245 | 0.001167 | 0.001144 |
| variant_hash.test | RUN | 0.232043 | 0.798419 | 0.803314 | 0.001475 | 0.001279 | 0.001242 |
| variant_trivial.test | RUN | 1.322461 | 4.475621 | 5.837590 | 0.001331 | 0.001238 | 0.001128 |
| variant_special.test | RUN | 1.277126 | 4.950845 | 6.256048 | 0.001372 | 0.001298 | 0.001113 |
| variant_visit_derived.test | RUN | 0.160546 | 0.413878 | 0.619864 | 0.001574 | 0.001327 | 0.001123 |
| variant_many_types.test | RUN | 1.463509 | 5.998499 | 8.755729 | 0.001250 | 0.001200 | 0.001165 |
| variant_visit_r.test | RUN | 0.585051 | 1.938754 | 3.386599 | 0.001349 | 0.001272 | 0.001122 |
| variant_derived_construct.test | COMPILE | 0.093076 | 0.210456 | 0.264667 | — | — | — |
| variant_visit_by_index.test | RUN | 0.208213 | 0.535646 | 0.779435 | 0.001180 | 0.001217 | 0.001197 |
| variant_ostream_insert.test | RUN | 0.148066 | 0.444284 | 0.503479 | 0.001483 | 0.001195 | 0.001227 |
| is_output_streamable.test | RUN | 0.186724 | 0.910316 | 0.718448 | 0.001404 | 0.001181 | 0.001227 |
| variant_json_value_from.test | RUN | 0.293359 | 0.733105 | 0.966630 | 0.001317 | 0.001366 | 0.001306 |
| variant_json_value_to.test | RUN | 0.365258 | 0.988387 | 1.242322 | 0.001622 | 0.001236 | 0.001102 |
| variant_uses_double_storage.test | COMPILE | 0.096945 | 0.210614 | 0.322002 | — | — | — |
| variant_derived_construct2.test | RUN | 0.135227 | 0.352569 | 0.440013 | 0.001150 | 0.001218 | 0.001036 |
| variant_visit_cx.test | COMPILE | 0.094073 | 0.200138 | 0.251677 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.089121 | 0.198433 | 0.259823 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.088494 | 0.198538 | 0.246971 | — | — | — |
| variant_index_type_126.test | RUN | 0.829261 | 1.955749 | 3.645238 | 0.001159 | 0.001371 | 0.001249 |
| variant_index_type_127.test | RUN | 0.849376 | 1.947230 | 3.719613 | 0.001179 | 0.001143 | 0.001105 |
| variant_index_type_128.test | RUN | 0.852073 | 2.021822 | 3.806802 | 0.001170 | 0.001130 | 0.001162 |
| variant_index_type_129.test | RUN | 0.840188 | 1.957754 | 3.828337 | 0.001452 | 0.001295 | 0.001039 |
| variant_index_type_254.test | RUN | 2.983285 | 7.687036 | 11.942103 | 0.001195 | 0.001261 | 0.001299 |
| variant_index_type_255.test | RUN | 2.998515 | 7.795533 | 12.047165 | 0.001226 | 0.001166 | 0.001183 |
| variant_index_type_256.test | RUN | 3.036346 | 7.895846 | 12.164057 | 0.001205 | 0.001375 | 0.001087 |
| variant_index_type_257.test | RUN | 3.040214 | 7.951399 | 12.249807 | 0.001265 | 0.001161 | 0.001041 |
| variant_default_construct_cx_2.test | COMPILE | 0.091113 | 0.204448 | 0.276473 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.088306 | 0.201376 | 0.269013 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.090660 | 0.200519 | 0.235988 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.089815 | 0.200643 | 0.230692 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.089556 | 0.197764 | 0.246611 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.090119 | 0.197846 | 0.229573 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.076639 | 0.192898 | 0.177943 | — | — | — |
| variant_issue_55.test | RUN | 0.139972 | 0.336176 | 0.375631 | 0.000987 | 0.000941 | 0.000773 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.982× | 0.984×, 0.980× | 1.002× |
| clang | 1.001× | 0.997×, 1.005× | 1.009× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45651777895).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.000807s | 0.000809s | 0.000803s | byte equality observed |
| quick.test | 10 | 0.000796s | 0.000355s | 0.000799s | byte equality observed |
| variant_alternative.test | 10 | 0.000787s | 0.000812s | 0.000785s | byte equality observed |
| variant_convert_construct.test | 10 | 0.000799s | 0.000817s | 0.000820s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.000815s | 0.000846s | 0.000818s | byte equality observed |
| variant_copy_assign.test | 10 | 0.000822s | 0.000841s | 0.000787s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.000865s | 0.000833s | 0.000810s | byte equality observed |
| variant_copy_construct.test | 10 | 0.000857s | 0.000786s | 0.000808s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.000831s | 0.000826s | 0.000846s | byte equality observed |
| variant_default_construct.test | 10 | 0.000848s | 0.000808s | 0.000826s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.000815s | 0.000786s | 0.000806s | byte equality observed |
| variant_destroy.test | 10 | 0.000826s | 0.000779s | 0.000825s | byte equality observed |
| variant_emplace_index.test | 10 | 0.000825s | 0.000814s | 0.000782s | byte equality observed |
| variant_emplace_type.test | 10 | 0.000831s | 0.000817s | 0.000798s | byte equality observed |
| variant_eq_ne.test | 10 | 0.000814s | 0.000793s | 0.000786s | byte equality observed |
| variant_get_by_index.test | 10 | 0.000862s | 0.000846s | 0.000835s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.000791s | 0.000799s | 0.000789s | byte equality observed |
| variant_get_by_type.test | 10 | 0.000826s | 0.000850s | 0.000831s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.000812s | 0.000800s | 0.000784s | byte equality observed |
| variant_hash.test | 10 | 0.000806s | 0.000804s | 0.000790s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.000829s | 0.000816s | 0.000815s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.000845s | 0.000835s | 0.000819s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.000819s | 0.000820s | 0.000817s | byte equality observed |
| variant_index_type_126.test | 10 | 0.000799s | 0.000827s | 0.000836s | byte equality observed |
| variant_index_type_127.test | 10 | 0.000815s | 0.000837s | 0.000848s | byte equality observed |
| variant_index_type_128.test | 10 | 0.000817s | 0.000795s | 0.000822s | byte equality observed |
| variant_index_type_129.test | 10 | 0.000815s | 0.000796s | 0.000824s | byte equality observed |
| variant_index_type_254.test | 10 | 0.000805s | 0.000821s | 0.000823s | byte equality observed |
| variant_index_type_255.test | 10 | 0.000813s | 0.000802s | 0.000831s | byte equality observed |
| variant_index_type_256.test | 10 | 0.000822s | 0.000791s | 0.000821s | byte equality observed |
| variant_index_type_257.test | 10 | 0.000821s | 0.000805s | 0.000814s | byte equality observed |
| variant_issue_55.test | 10 | 0.000793s | 0.000828s | 0.000818s | byte equality observed |
| variant_json_value_from.test | 10 | 0.000844s | 0.000838s | 0.000840s | byte equality observed |
| variant_json_value_to.test | 10 | 0.000849s | 0.000834s | 0.000836s | byte equality observed |
| variant_lt_gt.test | 10 | 0.000806s | 0.000820s | 0.000844s | byte equality observed |
| variant_many_types.test | 10 | 0.000830s | 0.000821s | 0.000855s | byte equality observed |
| variant_move_assign.test | 10 | 0.000819s | 0.000798s | 0.000826s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.000830s | 0.000834s | 0.000817s | byte equality observed |
| variant_move_construct.test | 10 | 0.000832s | 0.000787s | 0.000793s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.000831s | 0.000835s | 0.000820s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.000825s | 0.000826s | 0.000823s | byte equality observed |
| variant_size.test | 10 | 0.000801s | 0.000821s | 0.000815s | byte equality observed |
| variant_special.test | 10 | 0.000848s | 0.000859s | 0.000851s | byte equality observed |
| variant_subset.test | 10 | 0.000845s | 0.000824s | 0.000854s | byte equality observed |
| variant_subset_nx.test | 10 | 0.000815s | 0.000791s | 0.000822s | byte equality observed |
| variant_swap.test | 10 | 0.000810s | 0.000797s | 0.000835s | byte equality observed |
| variant_trivial.test | 10 | 0.000843s | 0.000831s | 0.000839s | byte equality observed |
| variant_value_assign.test | 10 | 0.000820s | 0.000793s | 0.000819s | byte equality observed |
| variant_value_construct.test | 10 | 0.000822s | 0.000807s | 0.000819s | byte equality observed |
| variant_valueless.test | 10 | 0.000833s | 0.000835s | 0.000856s | byte equality observed |
| variant_visit.test | 10 | 0.000819s | 0.000822s | 0.000854s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.000811s | 0.000805s | 0.000855s | byte equality observed |
| variant_visit_derived.test | 10 | 0.000810s | 0.000804s | 0.000831s | byte equality observed |
| variant_visit_r.test | 10 | 0.000785s | 0.000809s | 0.000814s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45651777895).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
