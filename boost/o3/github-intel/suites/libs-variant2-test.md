# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.092715 | 0.214917 | 0.275897 | 0.001135 | 0.000524 | 0.001273 |
| variant_size.test | RUN | 0.152490 | 0.532249 | 0.532127 | 0.001187 | 0.001246 | 0.001197 |
| variant_alternative.test | RUN | 0.214062 | 1.762327 | 0.947971 | 0.001252 | 0.001194 | 0.001132 |
| variant_holds_alternative.test | RUN | 0.145152 | 0.397485 | 0.527025 | 0.001170 | 0.001287 | 0.001303 |
| variant_holds_alternative_cx.test | COMPILE | 0.096836 | 0.228117 | 0.298384 | — | — | — |
| variant_get_by_index.test | RUN | 0.242699 | 1.920047 | 1.153437 | 0.001208 | 0.001567 | 0.001320 |
| variant_get_by_index_cx.test | COMPILE | 0.097837 | 0.236352 | 0.310684 | — | — | — |
| variant_get_by_type.test | RUN | 0.262079 | 2.062027 | 1.246429 | 0.001291 | 0.001421 | 0.001154 |
| variant_get_by_type_cx.test | COMPILE | 0.084308 | 0.203384 | 0.253706 | — | — | — |
| variant_default_construct.test | RUN | 0.233745 | 1.512004 | 1.015823 | 0.001223 | 0.001222 | 0.001155 |
| variant_default_construct_cx.test | COMPILE | 0.093138 | 0.233314 | 0.287238 | — | — | — |
| variant_copy_construct.test | RUN | 0.373668 | 2.557892 | 1.805725 | 0.001325 | 0.001572 | 0.001241 |
| variant_copy_construct_cx.test | COMPILE | 0.110852 | 0.262951 | 0.357377 | — | — | — |
| variant_move_construct.test | RUN | 0.344608 | 2.177833 | 1.666712 | 0.001116 | 0.001395 | 0.001166 |
| variant_move_construct_cx.test | COMPILE | 0.085757 | 0.208922 | 0.255533 | — | — | — |
| variant_value_construct.test | RUN | 0.177340 | 0.535242 | 0.682686 | 0.001233 | 0.001226 | 0.001197 |
| variant_value_construct_cx.test | COMPILE | 0.097915 | 0.238288 | 0.304423 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.181537 | 0.540408 | 0.699297 | 0.001186 | 0.001245 | 0.001214 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.098446 | 0.244632 | 0.315977 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.184092 | 0.539701 | 0.672427 | 0.001144 | 0.001454 | 0.001191 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.098891 | 0.238225 | 0.317428 | — | — | — |
| variant_copy_assign.test | RUN | 0.255762 | 1.756749 | 1.102812 | 0.001183 | 0.001421 | 0.001083 |
| variant_copy_assign_cx.test | COMPILE | 0.086363 | 0.201386 | 0.257296 | — | — | — |
| variant_move_assign.test | RUN | 0.251069 | 1.754390 | 1.077991 | 0.001380 | 0.001414 | 0.001069 |
| variant_move_assign_cx.test | COMPILE | 0.088772 | 0.203862 | 0.257931 | — | — | — |
| variant_value_assign.test | RUN | 0.189896 | 0.595200 | 0.753528 | 0.001174 | 0.001431 | 0.001096 |
| variant_value_assign_cx.test | COMPILE | 0.088176 | 0.204407 | 0.265254 | — | — | — |
| variant_emplace_index.test | RUN | 0.212297 | 0.693122 | 0.819754 | 0.001140 | 0.001368 | 0.001326 |
| variant_emplace_index_cx.test | COMPILE | 0.088154 | 0.209629 | 0.250986 | — | — | — |
| variant_emplace_type.test | RUN | 0.195917 | 0.597169 | 0.740972 | 0.001232 | 0.001299 | 0.001306 |
| variant_emplace_type_cx.test | COMPILE | 0.085467 | 0.206584 | 0.259452 | — | — | — |
| variant_swap.test | RUN | 0.202549 | 0.759674 | 0.796313 | 0.001163 | 0.001182 | 0.001322 |
| variant_eq_ne.test | RUN | 0.158490 | 0.447628 | 0.556194 | 0.001197 | 0.001271 | 0.001115 |
| variant_eq_ne_cx.test | COMPILE | 0.089685 | 0.211269 | 0.263012 | — | — | — |
| variant_lt_gt.test | RUN | 0.164067 | 0.515088 | 0.595770 | 0.001245 | 0.001269 | 0.001159 |
| variant_lt_gt_cx.test | COMPILE | 0.089336 | 0.206509 | 0.259066 | — | — | — |
| variant_destroy.test | RUN | 0.163674 | 0.503972 | 0.624674 | 0.001189 | 0.001245 | 0.001308 |
| variant_visit.test | RUN | 1.067122 | 3.944597 | 10.502698 | 0.001109 | 0.001357 | 0.001306 |
| variant_convert_construct.test | RUN | 0.214909 | 0.662139 | 0.869679 | 0.001208 | 0.001295 | 0.001217 |
| variant_subset.test | RUN | 0.218782 | 0.730983 | 0.898304 | 0.001272 | 0.001292 | 0.001237 |
| variant_valueless.test | RUN | 0.161099 | 0.452677 | 0.603595 | 0.001297 | 0.001304 | 0.001208 |
| variant_copy_construct_throw.test | RUN | 0.128694 | 0.339375 | 0.421065 | 0.001164 | 0.001362 | 0.001247 |
| variant_move_construct_throw.test | RUN | 0.127524 | 0.338515 | 0.414393 | 0.001139 | 0.001297 | 0.001360 |
| variant_convert_construct_throw.test | RUN | 0.130339 | 0.364872 | 0.448422 | 0.001134 | 0.001256 | 0.001106 |
| variant_copy_assign_throw.test | RUN | 0.121454 | 0.317784 | 0.415492 | 0.001246 | 0.001345 | 0.001284 |
| variant_move_assign_throw.test | RUN | 0.125658 | 0.332878 | 0.422653 | 0.001205 | 0.001272 | 0.001333 |
| variant_get_by_index_nx.test | RUN | 0.307922 | 1.598507 | 1.105122 | 0.001235 | 0.001226 | 0.001199 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.099577 | 0.239311 | 0.309381 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.311725 | 1.821478 | 1.180682 | 0.001177 | 0.001359 | 0.001246 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.085076 | 0.202281 | 0.262897 | — | — | — |
| variant_subset_nx.test | RUN | 0.229663 | 0.695820 | 0.913608 | 0.001271 | 0.001263 | 0.001183 |
| variant_hash.test | RUN | 0.224847 | 0.795030 | 0.829330 | 0.001355 | 0.001430 | 0.001212 |
| variant_trivial.test | RUN | 1.274879 | 4.524091 | 6.155181 | 0.001284 | 0.001272 | 0.001306 |
| variant_special.test | RUN | 1.236743 | 4.894143 | 6.658212 | 0.001278 | 0.001488 | 0.001290 |
| variant_visit_derived.test | RUN | 0.154760 | 0.407864 | 0.619205 | 0.001226 | 0.001289 | 0.001025 |
| variant_many_types.test | RUN | 1.398256 | 6.173967 | 8.746011 | 0.001118 | 0.001237 | 0.001227 |
| variant_visit_r.test | RUN | 0.584267 | 1.927205 | 3.443776 | 0.001215 | 0.001172 | 0.001175 |
| variant_derived_construct.test | COMPILE | 0.092494 | 0.193806 | 0.271334 | — | — | — |
| variant_visit_by_index.test | RUN | 0.199992 | 0.523539 | 0.800267 | 0.001216 | 0.001227 | 0.001078 |
| variant_ostream_insert.test | RUN | 0.143387 | 0.453864 | 0.543441 | 0.001773 | 0.001323 | 0.001070 |
| is_output_streamable.test | RUN | 0.188607 | 0.919284 | 0.740932 | 0.001050 | 0.001427 | 0.001289 |
| variant_json_value_from.test | RUN | 0.273704 | 0.737610 | 0.925995 | 0.001168 | 0.001419 | 0.001454 |
| variant_json_value_to.test | RUN | 0.348262 | 1.008126 | 1.278625 | 0.001173 | 0.001527 | 0.001255 |
| variant_uses_double_storage.test | COMPILE | 0.091386 | 0.212419 | 0.306796 | — | — | — |
| variant_derived_construct2.test | RUN | 0.125930 | 0.349992 | 0.461328 | 0.001060 | 0.001236 | 0.001234 |
| variant_visit_cx.test | COMPILE | 0.087366 | 0.203522 | 0.249895 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.084471 | 0.196178 | 0.261712 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.085581 | 0.198088 | 0.257540 | — | — | — |
| variant_index_type_126.test | RUN | 0.794712 | 1.929979 | 3.811320 | 0.001295 | 0.001395 | 0.001393 |
| variant_index_type_127.test | RUN | 0.799451 | 1.976914 | 3.913614 | 0.001147 | 0.001345 | 0.001291 |
| variant_index_type_128.test | RUN | 0.809824 | 2.002163 | 3.956117 | 0.001104 | 0.001273 | 0.001179 |
| variant_index_type_129.test | RUN | 0.807384 | 2.028463 | 3.905554 | 0.001182 | 0.001345 | 0.001293 |
| variant_index_type_254.test | RUN | 2.836169 | 7.749940 | 12.423686 | 0.001249 | 0.001439 | 0.001373 |
| variant_index_type_255.test | RUN | 2.870667 | 7.900569 | 12.622151 | 0.001125 | 0.001426 | 0.001313 |
| variant_index_type_256.test | RUN | 2.929085 | 7.922162 | 12.845214 | 0.001040 | 0.001272 | 0.001140 |
| variant_index_type_257.test | RUN | 2.937703 | 8.076427 | 12.901365 | 0.001228 | 0.001143 | 0.001305 |
| variant_default_construct_cx_2.test | COMPILE | 0.084274 | 0.216664 | 0.291105 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.085981 | 0.196997 | 0.240013 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.086622 | 0.213763 | 0.248662 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.085959 | 0.201265 | 0.260076 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.085608 | 0.204513 | 0.255688 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.077701 | 0.195966 | 0.257437 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.075707 | 0.152179 | 0.230126 | — | — | — |
| variant_issue_55.test | RUN | 0.133818 | 0.349964 | 0.387530 | 0.000876 | 0.000927 | 0.001013 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.985× | 0.992×, 0.977× | 1.009× |
| clang | 0.995× | 0.985×, 1.005× | 0.993× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45710374989).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.000795s | 0.000821s | 0.000811s | byte equality observed |
| quick.test | 10 | 0.000797s | 0.000373s | 0.000807s | byte equality observed |
| variant_alternative.test | 10 | 0.000832s | 0.000817s | 0.000826s | byte equality observed |
| variant_convert_construct.test | 10 | 0.000817s | 0.000820s | 0.000819s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.000834s | 0.000828s | 0.000840s | byte equality observed |
| variant_copy_assign.test | 10 | 0.000839s | 0.000828s | 0.000847s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.000837s | 0.000821s | 0.000832s | byte equality observed |
| variant_copy_construct.test | 10 | 0.000829s | 0.000820s | 0.000817s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.000839s | 0.000848s | 0.000826s | byte equality observed |
| variant_default_construct.test | 10 | 0.000823s | 0.000855s | 0.000859s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.000812s | 0.000804s | 0.000820s | byte equality observed |
| variant_destroy.test | 10 | 0.000798s | 0.000804s | 0.000815s | byte equality observed |
| variant_emplace_index.test | 10 | 0.000834s | 0.000822s | 0.000820s | byte equality observed |
| variant_emplace_type.test | 10 | 0.000833s | 0.000815s | 0.000820s | byte equality observed |
| variant_eq_ne.test | 10 | 0.000798s | 0.000801s | 0.000811s | byte equality observed |
| variant_get_by_index.test | 10 | 0.000831s | 0.000851s | 0.000826s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.000815s | 0.000821s | 0.000830s | byte equality observed |
| variant_get_by_type.test | 10 | 0.000833s | 0.000862s | 0.000844s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.000837s | 0.000832s | 0.000806s | byte equality observed |
| variant_hash.test | 10 | 0.000835s | 0.000832s | 0.000809s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.000826s | 0.000814s | 0.000815s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.000839s | 0.000811s | 0.000812s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.000831s | 0.000827s | 0.000830s | byte equality observed |
| variant_index_type_126.test | 10 | 0.000819s | 0.000799s | 0.000812s | byte equality observed |
| variant_index_type_127.test | 10 | 0.000823s | 0.000842s | 0.000817s | byte equality observed |
| variant_index_type_128.test | 10 | 0.000820s | 0.000816s | 0.000823s | byte equality observed |
| variant_index_type_129.test | 10 | 0.000833s | 0.000795s | 0.000854s | byte equality observed |
| variant_index_type_254.test | 10 | 0.000839s | 0.000812s | 0.000827s | byte equality observed |
| variant_index_type_255.test | 10 | 0.000837s | 0.000782s | 0.000815s | byte equality observed |
| variant_index_type_256.test | 10 | 0.000854s | 0.000802s | 0.000812s | byte equality observed |
| variant_index_type_257.test | 10 | 0.000822s | 0.000816s | 0.000816s | byte equality observed |
| variant_issue_55.test | 10 | 0.000804s | 0.000846s | 0.000833s | byte equality observed |
| variant_json_value_from.test | 10 | 0.000847s | 0.000853s | 0.000860s | byte equality observed |
| variant_json_value_to.test | 10 | 0.000840s | 0.000836s | 0.000853s | byte equality observed |
| variant_lt_gt.test | 10 | 0.000808s | 0.000812s | 0.000815s | byte equality observed |
| variant_many_types.test | 10 | 0.000834s | 0.000820s | 0.000836s | byte equality observed |
| variant_move_assign.test | 10 | 0.000826s | 0.000807s | 0.000802s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.000849s | 0.000832s | 0.000831s | byte equality observed |
| variant_move_construct.test | 10 | 0.000836s | 0.000820s | 0.000823s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.000831s | 0.000828s | 0.000821s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.000844s | 0.000857s | 0.000802s | byte equality observed |
| variant_size.test | 10 | 0.000804s | 0.000861s | 0.000804s | byte equality observed |
| variant_special.test | 10 | 0.000883s | 0.000889s | 0.000839s | byte equality observed |
| variant_subset.test | 10 | 0.000844s | 0.000853s | 0.000847s | byte equality observed |
| variant_subset_nx.test | 10 | 0.000805s | 0.000813s | 0.000804s | byte equality observed |
| variant_swap.test | 10 | 0.000824s | 0.000801s | 0.000836s | byte equality observed |
| variant_trivial.test | 10 | 0.000845s | 0.000881s | 0.000833s | byte equality observed |
| variant_value_assign.test | 10 | 0.000823s | 0.000821s | 0.000837s | byte equality observed |
| variant_value_construct.test | 10 | 0.000838s | 0.000804s | 0.000809s | byte equality observed |
| variant_valueless.test | 10 | 0.000875s | 0.000842s | 0.000848s | byte equality observed |
| variant_visit.test | 10 | 0.000855s | 0.000836s | 0.000823s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.000817s | 0.000816s | 0.000803s | byte equality observed |
| variant_visit_derived.test | 10 | 0.000826s | 0.000804s | 0.000791s | byte equality observed |
| variant_visit_r.test | 10 | 0.000813s | 0.000780s | 0.000796s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45710374989).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
