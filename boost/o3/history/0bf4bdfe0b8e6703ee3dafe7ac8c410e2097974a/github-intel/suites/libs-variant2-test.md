# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.091431 | 0.212850 | 0.277101 | 0.001136 | 0.000511 | 0.001357 |
| variant_size.test | RUN | 0.151793 | 0.535620 | 0.543375 | 0.001181 | 0.001322 | 0.001194 |
| variant_alternative.test | RUN | 0.210861 | 1.785782 | 0.967840 | 0.001184 | 0.001534 | 0.001194 |
| variant_holds_alternative.test | RUN | 0.142316 | 0.397787 | 0.525916 | 0.001178 | 0.001448 | 0.001188 |
| variant_holds_alternative_cx.test | COMPILE | 0.089728 | 0.228467 | 0.297285 | — | — | — |
| variant_get_by_index.test | RUN | 0.245286 | 1.951336 | 1.147433 | 0.001244 | 0.001569 | 0.001401 |
| variant_get_by_index_cx.test | COMPILE | 0.094287 | 0.240041 | 0.309763 | — | — | — |
| variant_get_by_type.test | RUN | 0.252435 | 2.078171 | 1.255163 | 0.001155 | 0.001234 | 0.001434 |
| variant_get_by_type_cx.test | COMPILE | 0.088344 | 0.208808 | 0.261257 | — | — | — |
| variant_default_construct.test | RUN | 0.231594 | 1.555011 | 1.034227 | 0.001150 | 0.001480 | 0.001365 |
| variant_default_construct_cx.test | COMPILE | 0.094643 | 0.237871 | 0.303904 | — | — | — |
| variant_copy_construct.test | RUN | 0.374248 | 2.602302 | 1.856540 | 0.001268 | 0.001322 | 0.001446 |
| variant_copy_construct_cx.test | COMPILE | 0.108618 | 0.265753 | 0.358643 | — | — | — |
| variant_move_construct.test | RUN | 0.343175 | 2.203917 | 1.659985 | 0.001113 | 0.001411 | 0.001187 |
| variant_move_construct_cx.test | COMPILE | 0.085007 | 0.214830 | 0.264721 | — | — | — |
| variant_value_construct.test | RUN | 0.179368 | 0.540211 | 0.683854 | 0.001108 | 0.001469 | 0.001276 |
| variant_value_construct_cx.test | COMPILE | 0.098624 | 0.243455 | 0.329892 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.188125 | 0.547634 | 0.700316 | 0.001266 | 0.001326 | 0.001227 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.100869 | 0.241550 | 0.315114 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.186059 | 0.547280 | 0.692080 | 0.001250 | 0.001555 | 0.001252 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.098018 | 0.244762 | 0.314759 | — | — | — |
| variant_copy_assign.test | RUN | 0.255912 | 1.773855 | 1.097386 | 0.001133 | 0.001470 | 0.001128 |
| variant_copy_assign_cx.test | COMPILE | 0.084754 | 0.210917 | 0.255014 | — | — | — |
| variant_move_assign.test | RUN | 0.252033 | 1.762281 | 1.098642 | 0.001137 | 0.001493 | 0.001196 |
| variant_move_assign_cx.test | COMPILE | 0.085714 | 0.210172 | 0.260975 | — | — | — |
| variant_value_assign.test | RUN | 0.187560 | 0.615592 | 0.749467 | 0.001162 | 0.001277 | 0.001234 |
| variant_value_assign_cx.test | COMPILE | 0.090040 | 0.208714 | 0.261167 | — | — | — |
| variant_emplace_index.test | RUN | 0.213676 | 0.717594 | 0.826723 | 0.001133 | 0.001422 | 0.001307 |
| variant_emplace_index_cx.test | COMPILE | 0.085516 | 0.214064 | 0.261506 | — | — | — |
| variant_emplace_type.test | RUN | 0.194591 | 0.612935 | 0.743483 | 0.001306 | 0.001517 | 0.001310 |
| variant_emplace_type_cx.test | COMPILE | 0.083402 | 0.207704 | 0.260729 | — | — | — |
| variant_swap.test | RUN | 0.196888 | 0.761395 | 0.803219 | 0.001254 | 0.001347 | 0.001248 |
| variant_eq_ne.test | RUN | 0.156722 | 0.449396 | 0.569395 | 0.001055 | 0.001526 | 0.001177 |
| variant_eq_ne_cx.test | COMPILE | 0.085559 | 0.209914 | 0.265808 | — | — | — |
| variant_lt_gt.test | RUN | 0.164423 | 0.519966 | 0.600572 | 0.001122 | 0.001475 | 0.001162 |
| variant_lt_gt_cx.test | COMPILE | 0.084365 | 0.205124 | 0.252511 | — | — | — |
| variant_destroy.test | RUN | 0.170387 | 0.518089 | 0.615105 | 0.001077 | 0.001383 | 0.001256 |
| variant_visit.test | RUN | 1.062169 | 3.995831 | 10.584919 | 0.001097 | 0.001364 | 0.001266 |
| variant_convert_construct.test | RUN | 0.208605 | 0.691681 | 0.850111 | 0.001167 | 0.001486 | 0.001273 |
| variant_subset.test | RUN | 0.215145 | 0.726522 | 0.923069 | 0.001148 | 0.001357 | 0.001136 |
| variant_valueless.test | RUN | 0.159495 | 0.466253 | 0.621521 | 0.001182 | 0.001240 | 0.001353 |
| variant_copy_construct_throw.test | RUN | 0.127010 | 0.339314 | 0.427585 | 0.001142 | 0.001381 | 0.001167 |
| variant_move_construct_throw.test | RUN | 0.124600 | 0.345207 | 0.424704 | 0.000885 | 0.001242 | 0.001234 |
| variant_convert_construct_throw.test | RUN | 0.130557 | 0.377912 | 0.444132 | 0.001173 | 0.001405 | 0.001186 |
| variant_copy_assign_throw.test | RUN | 0.117379 | 0.324153 | 0.422911 | 0.001023 | 0.001453 | 0.001192 |
| variant_move_assign_throw.test | RUN | 0.122000 | 0.330251 | 0.417205 | 0.001091 | 0.001539 | 0.001387 |
| variant_get_by_index_nx.test | RUN | 0.308673 | 1.644899 | 1.114520 | 0.001098 | 0.001354 | 0.001179 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.095018 | 0.244856 | 0.308666 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.308137 | 1.861605 | 1.190039 | 0.001200 | 0.001541 | 0.001255 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.084940 | 0.210022 | 0.265049 | — | — | — |
| variant_subset_nx.test | RUN | 0.225196 | 0.698626 | 0.923479 | 0.001179 | 0.001376 | 0.001283 |
| variant_hash.test | RUN | 0.220290 | 0.825034 | 0.841691 | 0.001186 | 0.001526 | 0.001203 |
| variant_trivial.test | RUN | 1.273939 | 4.637808 | 6.220775 | 0.001211 | 0.001476 | 0.001186 |
| variant_special.test | RUN | 1.248295 | 4.993821 | 6.618109 | 0.001452 | 0.001442 | 0.001418 |
| variant_visit_derived.test | RUN | 0.146327 | 0.422492 | 0.629564 | 0.001293 | 0.001549 | 0.001134 |
| variant_many_types.test | RUN | 1.378584 | 6.327639 | 8.836532 | 0.001223 | 0.001400 | 0.001190 |
| variant_visit_r.test | RUN | 0.561256 | 1.980032 | 3.547825 | 0.001204 | 0.001210 | 0.001234 |
| variant_derived_construct.test | COMPILE | 0.089900 | 0.195134 | 0.272164 | — | — | — |
| variant_visit_by_index.test | RUN | 0.208301 | 0.534894 | 0.757225 | 0.001286 | 0.001545 | 0.001259 |
| variant_ostream_insert.test | RUN | 0.148057 | 0.457110 | 0.536305 | 0.001297 | 0.001232 | 0.001296 |
| is_output_streamable.test | RUN | 0.184141 | 0.933471 | 0.739817 | 0.001223 | 0.001249 | 0.001218 |
| variant_json_value_from.test | RUN | 0.280029 | 0.753859 | 1.015252 | 0.001192 | 0.001332 | 0.001172 |
| variant_json_value_to.test | RUN | 0.348159 | 1.044231 | 1.306745 | 0.001279 | 0.001517 | 0.001267 |
| variant_uses_double_storage.test | COMPILE | 0.094088 | 0.217465 | 0.310934 | — | — | — |
| variant_derived_construct2.test | RUN | 0.130693 | 0.355394 | 0.440300 | 0.001106 | 0.001262 | 0.001132 |
| variant_visit_cx.test | COMPILE | 0.089905 | 0.210899 | 0.270079 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.083992 | 0.206730 | 0.257165 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.085064 | 0.202586 | 0.253684 | — | — | — |
| variant_index_type_126.test | RUN | 0.788369 | 2.020028 | 3.806764 | 0.001298 | 0.001406 | 0.001303 |
| variant_index_type_127.test | RUN | 0.803732 | 2.039568 | 3.832198 | 0.001143 | 0.001404 | 0.001301 |
| variant_index_type_128.test | RUN | 0.807446 | 2.073825 | 4.092882 | 0.001184 | 0.001328 | 0.001090 |
| variant_index_type_129.test | RUN | 0.803075 | 2.040891 | 4.011465 | 0.001250 | 0.001429 | 0.001164 |
| variant_index_type_254.test | RUN | 2.851516 | 7.888505 | 12.434966 | 0.001083 | 0.001568 | 0.001416 |
| variant_index_type_255.test | RUN | 2.862129 | 8.047403 | 12.578020 | 0.001395 | 0.001372 | 0.001235 |
| variant_index_type_256.test | RUN | 2.878948 | 8.027642 | 12.685068 | 0.001209 | 0.001257 | 0.001303 |
| variant_index_type_257.test | RUN | 2.894959 | 8.267228 | 12.922371 | 0.001104 | 0.001262 | 0.001176 |
| variant_default_construct_cx_2.test | COMPILE | 0.083036 | 0.216312 | 0.288618 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.087959 | 0.197133 | 0.296453 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.085314 | 0.216747 | 0.244619 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.085870 | 0.200677 | 0.254698 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.085262 | 0.199650 | 0.242486 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.084281 | 0.206995 | 0.248638 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.083970 | 0.134933 | 0.185926 | — | — | — |
| variant_issue_55.test | RUN | 0.136181 | 0.348047 | 0.403213 | 0.000862 | 0.000923 | 0.000846 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.986× | 0.980×, 0.992× | 0.997× |
| clang | 0.996× | 0.994×, 0.998× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44774088589).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.000815s | 0.000825s | 0.000788s | byte equality observed |
| quick.test | 10 | 0.000783s | 0.000373s | 0.000771s | byte equality observed |
| variant_alternative.test | 10 | 0.000794s | 0.000794s | 0.000788s | byte equality observed |
| variant_convert_construct.test | 10 | 0.000825s | 0.000799s | 0.000810s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.000835s | 0.000849s | 0.000837s | byte equality observed |
| variant_copy_assign.test | 10 | 0.000801s | 0.000826s | 0.000830s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.000838s | 0.000829s | 0.000824s | byte equality observed |
| variant_copy_construct.test | 10 | 0.000819s | 0.000823s | 0.000803s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.000803s | 0.000857s | 0.000819s | byte equality observed |
| variant_default_construct.test | 10 | 0.000802s | 0.000844s | 0.000826s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.000841s | 0.000822s | 0.000840s | byte equality observed |
| variant_destroy.test | 10 | 0.000840s | 0.000824s | 0.000841s | byte equality observed |
| variant_emplace_index.test | 10 | 0.000827s | 0.000797s | 0.000855s | byte equality observed |
| variant_emplace_type.test | 10 | 0.000826s | 0.000819s | 0.000851s | byte equality observed |
| variant_eq_ne.test | 10 | 0.000830s | 0.000808s | 0.000812s | byte equality observed |
| variant_get_by_index.test | 10 | 0.000848s | 0.000861s | 0.000839s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.000825s | 0.000856s | 0.000789s | byte equality observed |
| variant_get_by_type.test | 10 | 0.000839s | 0.000873s | 0.000835s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.000821s | 0.000807s | 0.000789s | byte equality observed |
| variant_hash.test | 10 | 0.000807s | 0.000795s | 0.000796s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.000814s | 0.000789s | 0.000816s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.000820s | 0.000801s | 0.000794s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.000824s | 0.000828s | 0.000802s | byte equality observed |
| variant_index_type_126.test | 10 | 0.000816s | 0.000836s | 0.000822s | byte equality observed |
| variant_index_type_127.test | 10 | 0.000826s | 0.000807s | 0.000809s | byte equality observed |
| variant_index_type_128.test | 10 | 0.000823s | 0.000817s | 0.000809s | byte equality observed |
| variant_index_type_129.test | 10 | 0.000813s | 0.000825s | 0.000838s | byte equality observed |
| variant_index_type_254.test | 10 | 0.000823s | 0.000846s | 0.000846s | byte equality observed |
| variant_index_type_255.test | 10 | 0.000834s | 0.000830s | 0.000842s | byte equality observed |
| variant_index_type_256.test | 10 | 0.000837s | 0.000820s | 0.000811s | byte equality observed |
| variant_index_type_257.test | 10 | 0.000811s | 0.000807s | 0.000836s | byte equality observed |
| variant_issue_55.test | 10 | 0.000815s | 0.000848s | 0.000822s | byte equality observed |
| variant_json_value_from.test | 10 | 0.000832s | 0.000811s | 0.000824s | byte equality observed |
| variant_json_value_to.test | 10 | 0.000838s | 0.000837s | 0.000832s | byte equality observed |
| variant_lt_gt.test | 10 | 0.000822s | 0.000787s | 0.000826s | byte equality observed |
| variant_many_types.test | 10 | 0.000860s | 0.000834s | 0.000825s | byte equality observed |
| variant_move_assign.test | 10 | 0.000824s | 0.000850s | 0.000825s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.000823s | 0.000860s | 0.000825s | byte equality observed |
| variant_move_construct.test | 10 | 0.000813s | 0.000860s | 0.000823s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.000834s | 0.000833s | 0.000825s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.000824s | 0.000844s | 0.000816s | byte equality observed |
| variant_size.test | 10 | 0.000801s | 0.000807s | 0.000820s | byte equality observed |
| variant_special.test | 10 | 0.000858s | 0.000867s | 0.000866s | byte equality observed |
| variant_subset.test | 10 | 0.000827s | 0.000850s | 0.000855s | byte equality observed |
| variant_subset_nx.test | 10 | 0.000808s | 0.000813s | 0.000852s | byte equality observed |
| variant_swap.test | 10 | 0.000837s | 0.000843s | 0.000860s | byte equality observed |
| variant_trivial.test | 10 | 0.000857s | 0.000849s | 0.000826s | byte equality observed |
| variant_value_assign.test | 10 | 0.000818s | 0.000807s | 0.000818s | byte equality observed |
| variant_value_construct.test | 10 | 0.000846s | 0.000810s | 0.000790s | byte equality observed |
| variant_valueless.test | 10 | 0.000855s | 0.000830s | 0.000852s | byte equality observed |
| variant_visit.test | 10 | 0.000847s | 0.000801s | 0.000839s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.000817s | 0.000797s | 0.000803s | byte equality observed |
| variant_visit_derived.test | 10 | 0.000825s | 0.000815s | 0.000803s | byte equality observed |
| variant_visit_r.test | 10 | 0.000811s | 0.000776s | 0.000787s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44774088589).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
