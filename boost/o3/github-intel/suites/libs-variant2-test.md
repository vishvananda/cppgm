# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.097970 | 0.209841 | 0.295566 | 0.001394 | 0.000620 | 0.001269 |
| variant_size.test | RUN | 0.172779 | 0.533424 | 0.545938 | 0.001612 | 0.001549 | 0.001414 |
| variant_alternative.test | RUN | 0.226140 | 1.773674 | 0.957275 | 0.001354 | 0.001569 | 0.001454 |
| variant_holds_alternative.test | RUN | 0.155428 | 0.397471 | 0.550490 | 0.001328 | 0.001408 | 0.001525 |
| variant_holds_alternative_cx.test | COMPILE | 0.099496 | 0.228645 | 0.310693 | — | — | — |
| variant_get_by_index.test | RUN | 0.262081 | 1.965343 | 1.190148 | 0.001587 | 0.001548 | 0.001610 |
| variant_get_by_index_cx.test | COMPILE | 0.103412 | 0.241074 | 0.321285 | — | — | — |
| variant_get_by_type.test | RUN | 0.265461 | 2.068125 | 1.282415 | 0.001678 | 0.001284 | 0.001421 |
| variant_get_by_type_cx.test | COMPILE | 0.095430 | 0.209521 | 0.273437 | — | — | — |
| variant_default_construct.test | RUN | 0.253703 | 1.555144 | 1.047573 | 0.001308 | 0.001320 | 0.001468 |
| variant_default_construct_cx.test | COMPILE | 0.104631 | 0.233730 | 0.321055 | — | — | — |
| variant_copy_construct.test | RUN | 0.397463 | 2.612972 | 1.893722 | 0.001220 | 0.001508 | 0.001304 |
| variant_copy_construct_cx.test | COMPILE | 0.118351 | 0.262671 | 0.365890 | — | — | — |
| variant_move_construct.test | RUN | 0.368387 | 2.214469 | 1.698157 | 0.001456 | 0.001171 | 0.001236 |
| variant_move_construct_cx.test | COMPILE | 0.092962 | 0.207756 | 0.262449 | — | — | — |
| variant_value_construct.test | RUN | 0.194695 | 0.544085 | 0.695086 | 0.001451 | 0.001462 | 0.001351 |
| variant_value_construct_cx.test | COMPILE | 0.104907 | 0.242920 | 0.343474 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.203092 | 0.549979 | 0.710046 | 0.001278 | 0.001387 | 0.001349 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.107982 | 0.245784 | 0.316612 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.195555 | 0.554004 | 0.706622 | 0.001500 | 0.001560 | 0.001407 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.105895 | 0.239298 | 0.317083 | — | — | — |
| variant_copy_assign.test | RUN | 0.273879 | 1.804316 | 1.112873 | 0.001407 | 0.001360 | 0.001265 |
| variant_copy_assign_cx.test | COMPILE | 0.094579 | 0.211911 | 0.260317 | — | — | — |
| variant_move_assign.test | RUN | 0.273539 | 1.774313 | 1.090887 | 0.001400 | 0.001700 | 0.001146 |
| variant_move_assign_cx.test | COMPILE | 0.093795 | 0.209206 | 0.260934 | — | — | — |
| variant_value_assign.test | RUN | 0.202431 | 0.621542 | 0.765400 | 0.001392 | 0.001554 | 0.001368 |
| variant_value_assign_cx.test | COMPILE | 0.097284 | 0.208047 | 0.264579 | — | — | — |
| variant_emplace_index.test | RUN | 0.233850 | 0.731210 | 0.836867 | 0.001339 | 0.001600 | 0.001316 |
| variant_emplace_index_cx.test | COMPILE | 0.093780 | 0.211106 | 0.254521 | — | — | — |
| variant_emplace_type.test | RUN | 0.211160 | 0.617353 | 0.733666 | 0.001377 | 0.001605 | 0.001277 |
| variant_emplace_type_cx.test | COMPILE | 0.087418 | 0.209114 | 0.270872 | — | — | — |
| variant_swap.test | RUN | 0.209376 | 0.773360 | 0.818698 | 0.001692 | 0.001448 | 0.001173 |
| variant_eq_ne.test | RUN | 0.167962 | 0.453949 | 0.581707 | 0.001346 | 0.001437 | 0.001202 |
| variant_eq_ne_cx.test | COMPILE | 0.095085 | 0.210464 | 0.254071 | — | — | — |
| variant_lt_gt.test | RUN | 0.177127 | 0.526869 | 0.607782 | 0.001554 | 0.001346 | 0.001354 |
| variant_lt_gt_cx.test | COMPILE | 0.093293 | 0.205860 | 0.262252 | — | — | — |
| variant_destroy.test | RUN | 0.177614 | 0.516427 | 0.624376 | 0.001388 | 0.001427 | 0.001352 |
| variant_visit.test | RUN | 1.128969 | 4.022330 | 11.095418 | 0.001323 | 0.001393 | 0.001499 |
| variant_convert_construct.test | RUN | 0.223155 | 0.700184 | 0.878937 | 0.001427 | 0.001466 | 0.001632 |
| variant_subset.test | RUN | 0.232001 | 0.728349 | 0.956786 | 0.001408 | 0.001318 | 0.001291 |
| variant_valueless.test | RUN | 0.169906 | 0.474398 | 0.609410 | 0.001660 | 0.001614 | 0.001276 |
| variant_copy_construct_throw.test | RUN | 0.136090 | 0.355361 | 0.450149 | 0.001417 | 0.001437 | 0.001736 |
| variant_move_construct_throw.test | RUN | 0.134826 | 0.352173 | 0.443769 | 0.001562 | 0.001616 | 0.001464 |
| variant_convert_construct_throw.test | RUN | 0.141751 | 0.382169 | 0.473172 | 0.001733 | 0.001417 | 0.001372 |
| variant_copy_assign_throw.test | RUN | 0.133567 | 0.332566 | 0.437026 | 0.001358 | 0.001471 | 0.001526 |
| variant_move_assign_throw.test | RUN | 0.134477 | 0.329464 | 0.443287 | 0.001671 | 0.001474 | 0.001560 |
| variant_get_by_index_nx.test | RUN | 0.322573 | 1.662776 | 1.156788 | 0.001331 | 0.001336 | 0.001577 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.102769 | 0.248535 | 0.325157 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.325139 | 1.862528 | 1.239102 | 0.001513 | 0.001419 | 0.001622 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.093699 | 0.212433 | 0.282787 | — | — | — |
| variant_subset_nx.test | RUN | 0.240513 | 0.706658 | 0.986601 | 0.001396 | 0.001587 | 0.001717 |
| variant_hash.test | RUN | 0.236426 | 0.819534 | 0.898922 | 0.001700 | 0.001686 | 0.001497 |
| variant_trivial.test | RUN | 1.366399 | 4.709174 | 6.674604 | 0.001558 | 0.001529 | 0.001494 |
| variant_special.test | RUN | 1.320178 | 5.026464 | 7.045831 | 0.001640 | 0.001615 | 0.001548 |
| variant_visit_derived.test | RUN | 0.160396 | 0.422606 | 0.651920 | 0.001730 | 0.001501 | 0.001536 |
| variant_many_types.test | RUN | 1.510650 | 6.387329 | 9.509994 | 0.001337 | 0.001408 | 0.001555 |
| variant_visit_r.test | RUN | 0.619982 | 1.997920 | 3.774116 | 0.001681 | 0.001227 | 0.001602 |
| variant_derived_construct.test | COMPILE | 0.096496 | 0.196020 | 0.293224 | — | — | — |
| variant_visit_by_index.test | RUN | 0.223151 | 0.539655 | 0.864247 | 0.001451 | 0.001540 | 0.001426 |
| variant_ostream_insert.test | RUN | 0.160665 | 0.464397 | 0.516287 | 0.001649 | 0.001391 | 0.001518 |
| is_output_streamable.test | RUN | 0.201312 | 0.941961 | 0.790401 | 0.001465 | 0.001231 | 0.001640 |
| variant_json_value_from.test | RUN | 0.309146 | 0.763181 | 0.973192 | 0.001564 | 0.001520 | 0.001542 |
| variant_json_value_to.test | RUN | 0.372287 | 1.048075 | 1.402517 | 0.001762 | 0.001451 | 0.001561 |
| variant_uses_double_storage.test | COMPILE | 0.105777 | 0.223372 | 0.341784 | — | — | — |
| variant_derived_construct2.test | RUN | 0.135749 | 0.356642 | 0.468525 | 0.001285 | 0.001287 | 0.001590 |
| variant_visit_cx.test | COMPILE | 0.098363 | 0.208850 | 0.288072 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.091340 | 0.210520 | 0.260474 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.094004 | 0.203913 | 0.267619 | — | — | — |
| variant_index_type_126.test | RUN | 0.880344 | 2.047815 | 4.041568 | 0.001318 | 0.001361 | 0.001318 |
| variant_index_type_127.test | RUN | 0.891028 | 2.049223 | 4.197187 | 0.001216 | 0.001123 | 0.001295 |
| variant_index_type_128.test | RUN | 0.901208 | 2.128891 | 4.196115 | 0.001419 | 0.001421 | 0.001232 |
| variant_index_type_129.test | RUN | 0.905037 | 2.031777 | 4.254933 | 0.001528 | 0.001400 | 0.001635 |
| variant_index_type_254.test | RUN | 3.099729 | 7.950501 | 13.259935 | 0.001384 | 0.001528 | 0.001433 |
| variant_index_type_255.test | RUN | 3.112267 | 8.164736 | 13.499819 | 0.001375 | 0.001472 | 0.001707 |
| variant_index_type_256.test | RUN | 3.138667 | 8.289911 | 13.644636 | 0.001256 | 0.001120 | 0.001558 |
| variant_index_type_257.test | RUN | 3.176356 | 8.203265 | 13.654729 | 0.001415 | 0.001337 | 0.001408 |
| variant_default_construct_cx_2.test | COMPILE | 0.095601 | 0.219893 | 0.292748 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.093279 | 0.210499 | 0.286446 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.093641 | 0.202549 | 0.258808 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.097314 | 0.204258 | 0.266131 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.094542 | 0.206410 | 0.273619 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.086265 | 0.202585 | 0.254090 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.074908 | 0.185003 | 0.241734 | — | — | — |
| variant_issue_55.test | RUN | 0.138768 | 0.375014 | 0.479657 | 0.001105 | 0.000990 | 0.001060 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998× | 0.993×, 1.003× | 1.003× |
| clang | 0.997× | 0.993×, 1.001× | 0.993× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46092715613).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.000815s | 0.000821s | 0.000810s | byte equality observed |
| quick.test | 10 | 0.000813s | 0.000373s | 0.000794s | byte equality observed |
| variant_alternative.test | 10 | 0.000795s | 0.000853s | 0.000791s | byte equality observed |
| variant_convert_construct.test | 10 | 0.000836s | 0.000838s | 0.000797s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.000848s | 0.000886s | 0.000832s | byte equality observed |
| variant_copy_assign.test | 10 | 0.000848s | 0.000853s | 0.000825s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.000847s | 0.000869s | 0.000851s | byte equality observed |
| variant_copy_construct.test | 10 | 0.000849s | 0.000871s | 0.000815s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.000842s | 0.000817s | 0.000849s | byte equality observed |
| variant_default_construct.test | 10 | 0.000841s | 0.000844s | 0.000808s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.000825s | 0.000837s | 0.000805s | byte equality observed |
| variant_destroy.test | 10 | 0.000812s | 0.000839s | 0.000813s | byte equality observed |
| variant_emplace_index.test | 10 | 0.000822s | 0.000830s | 0.000819s | byte equality observed |
| variant_emplace_type.test | 10 | 0.000838s | 0.000807s | 0.000821s | byte equality observed |
| variant_eq_ne.test | 10 | 0.000820s | 0.000841s | 0.000831s | byte equality observed |
| variant_get_by_index.test | 10 | 0.000860s | 0.000880s | 0.000835s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.000835s | 0.000831s | 0.000821s | byte equality observed |
| variant_get_by_type.test | 10 | 0.000836s | 0.000864s | 0.000850s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.000808s | 0.000833s | 0.000800s | byte equality observed |
| variant_hash.test | 10 | 0.000818s | 0.000824s | 0.000811s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.000812s | 0.000855s | 0.000817s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.000813s | 0.000837s | 0.000811s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.000810s | 0.000833s | 0.000829s | byte equality observed |
| variant_index_type_126.test | 10 | 0.000797s | 0.000824s | 0.000834s | byte equality observed |
| variant_index_type_127.test | 9 | 0.000813s | 0.000797s | 0.000811s | byte equality observed |
| variant_index_type_128.test | 10 | 0.000820s | 0.000808s | 0.000818s | byte equality observed |
| variant_index_type_129.test | 10 | 0.000818s | 0.000824s | 0.000828s | byte equality observed |
| variant_index_type_254.test | 10 | 0.000830s | 0.000795s | 0.000816s | byte equality observed |
| variant_index_type_255.test | 10 | 0.000825s | 0.000826s | 0.000819s | byte equality observed |
| variant_index_type_256.test | 10 | 0.000825s | 0.000846s | 0.000854s | byte equality observed |
| variant_index_type_257.test | 10 | 0.000820s | 0.000844s | 0.000830s | byte equality observed |
| variant_issue_55.test | 10 | 0.000808s | 0.000841s | 0.000819s | byte equality observed |
| variant_json_value_from.test | 10 | 0.000851s | 0.000865s | 0.000817s | byte equality observed |
| variant_json_value_to.test | 10 | 0.000863s | 0.000852s | 0.000831s | byte equality observed |
| variant_lt_gt.test | 10 | 0.000784s | 0.000851s | 0.000787s | byte equality observed |
| variant_many_types.test | 10 | 0.000839s | 0.000894s | 0.000822s | byte equality observed |
| variant_move_assign.test | 10 | 0.000827s | 0.000855s | 0.000794s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.000835s | 0.000842s | 0.000829s | byte equality observed |
| variant_move_construct.test | 10 | 0.000830s | 0.000834s | 0.000805s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.000821s | 0.000866s | 0.000830s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.000830s | 0.000845s | 0.000836s | byte equality observed |
| variant_size.test | 10 | 0.000807s | 0.000839s | 0.000799s | byte equality observed |
| variant_special.test | 10 | 0.000861s | 0.000884s | 0.000822s | byte equality observed |
| variant_subset.test | 10 | 0.000840s | 0.000853s | 0.000818s | byte equality observed |
| variant_subset_nx.test | 10 | 0.000812s | 0.000810s | 0.000808s | byte equality observed |
| variant_swap.test | 10 | 0.000814s | 0.000819s | 0.000802s | byte equality observed |
| variant_trivial.test | 10 | 0.000854s | 0.000854s | 0.000832s | byte equality observed |
| variant_value_assign.test | 10 | 0.000831s | 0.000807s | 0.000812s | byte equality observed |
| variant_value_construct.test | 10 | 0.000820s | 0.000814s | 0.000805s | byte equality observed |
| variant_valueless.test | 10 | 0.000861s | 0.000847s | 0.000866s | byte equality observed |
| variant_visit.test | 10 | 0.000833s | 0.000841s | 0.000849s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.000828s | 0.000814s | 0.000838s | byte equality observed |
| variant_visit_derived.test | 10 | 0.000823s | 0.000813s | 0.000795s | byte equality observed |
| variant_visit_r.test | 10 | 0.000781s | 0.000792s | 0.000808s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46092715613).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
