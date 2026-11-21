# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.092861 | 0.212674 | 0.264509 | 0.001204 | 0.000522 | 0.001161 |
| variant_size.test | RUN | 0.160143 | 0.526074 | 0.518107 | 0.001168 | 0.001386 | 0.001123 |
| variant_alternative.test | RUN | 0.214029 | 1.758638 | 0.933719 | 0.001324 | 0.001508 | 0.001069 |
| variant_holds_alternative.test | RUN | 0.146491 | 0.392258 | 0.526377 | 0.001225 | 0.001412 | 0.001064 |
| variant_holds_alternative_cx.test | COMPILE | 0.098288 | 0.227811 | 0.288943 | — | — | — |
| variant_get_by_index.test | RUN | 0.249542 | 1.951153 | 1.156930 | 0.001487 | 0.001552 | 0.001348 |
| variant_get_by_index_cx.test | COMPILE | 0.099571 | 0.240874 | 0.300347 | — | — | — |
| variant_get_by_type.test | RUN | 0.262474 | 2.067285 | 1.237663 | 0.001215 | 0.001449 | 0.001234 |
| variant_get_by_type_cx.test | COMPILE | 0.087811 | 0.205466 | 0.258401 | — | — | — |
| variant_default_construct.test | RUN | 0.245690 | 1.531507 | 0.991532 | 0.001219 | 0.001479 | 0.001120 |
| variant_default_construct_cx.test | COMPILE | 0.100555 | 0.232116 | 0.307129 | — | — | — |
| variant_copy_construct.test | RUN | 0.374754 | 2.580914 | 1.789796 | 0.001327 | 0.001372 | 0.001183 |
| variant_copy_construct_cx.test | COMPILE | 0.109519 | 0.258897 | 0.356601 | — | — | — |
| variant_move_construct.test | RUN | 0.347155 | 2.209277 | 1.628607 | 0.001190 | 0.001344 | 0.001194 |
| variant_move_construct_cx.test | COMPILE | 0.087060 | 0.209434 | 0.269269 | — | — | — |
| variant_value_construct.test | RUN | 0.182980 | 0.544722 | 0.685917 | 0.001095 | 0.001427 | 0.001141 |
| variant_value_construct_cx.test | COMPILE | 0.105114 | 0.242505 | 0.321777 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.187867 | 0.549900 | 0.683157 | 0.001300 | 0.001254 | 0.001134 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.099107 | 0.245154 | 0.308291 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.184118 | 0.539772 | 0.674073 | 0.001151 | 0.001342 | 0.001055 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.101317 | 0.242491 | 0.306924 | — | — | — |
| variant_copy_assign.test | RUN | 0.254582 | 1.786461 | 1.093072 | 0.001222 | 0.001420 | 0.001190 |
| variant_copy_assign_cx.test | COMPILE | 0.088443 | 0.202310 | 0.247553 | — | — | — |
| variant_move_assign.test | RUN | 0.259207 | 1.759395 | 1.082116 | 0.001414 | 0.001306 | 0.001042 |
| variant_move_assign_cx.test | COMPILE | 0.089305 | 0.206804 | 0.257413 | — | — | — |
| variant_value_assign.test | RUN | 0.190677 | 0.604543 | 0.746976 | 0.001216 | 0.001477 | 0.001222 |
| variant_value_assign_cx.test | COMPILE | 0.089386 | 0.208889 | 0.266815 | — | — | — |
| variant_emplace_index.test | RUN | 0.209646 | 0.716347 | 0.824259 | 0.001142 | 0.001304 | 0.001163 |
| variant_emplace_index_cx.test | COMPILE | 0.088844 | 0.200567 | 0.243475 | — | — | — |
| variant_emplace_type.test | RUN | 0.193648 | 0.602305 | 0.739200 | 0.001184 | 0.001393 | 0.001179 |
| variant_emplace_type_cx.test | COMPILE | 0.088184 | 0.207433 | 0.251118 | — | — | — |
| variant_swap.test | RUN | 0.203165 | 0.761898 | 0.797572 | 0.001239 | 0.001301 | 0.001042 |
| variant_eq_ne.test | RUN | 0.163608 | 0.457445 | 0.575031 | 0.001164 | 0.001531 | 0.001193 |
| variant_eq_ne_cx.test | COMPILE | 0.087440 | 0.204961 | 0.253146 | — | — | — |
| variant_lt_gt.test | RUN | 0.170339 | 0.514016 | 0.597520 | 0.001349 | 0.001514 | 0.001221 |
| variant_lt_gt_cx.test | COMPILE | 0.087980 | 0.207028 | 0.260973 | — | — | — |
| variant_destroy.test | RUN | 0.171415 | 0.517485 | 0.608486 | 0.001307 | 0.001408 | 0.001087 |
| variant_visit.test | RUN | 1.088342 | 3.973898 | 10.308339 | 0.001106 | 0.001306 | 0.001227 |
| variant_convert_construct.test | RUN | 0.216266 | 0.682693 | 0.858697 | 0.001271 | 0.001500 | 0.001118 |
| variant_subset.test | RUN | 0.219757 | 0.744386 | 0.921946 | 0.001411 | 0.001250 | 0.001169 |
| variant_valueless.test | RUN | 0.163134 | 0.460325 | 0.581870 | 0.001506 | 0.001464 | 0.001156 |
| variant_copy_construct_throw.test | RUN | 0.129057 | 0.348534 | 0.430937 | 0.001240 | 0.001314 | 0.001093 |
| variant_move_construct_throw.test | RUN | 0.127775 | 0.335309 | 0.412176 | 0.001239 | 0.001445 | 0.001197 |
| variant_convert_construct_throw.test | RUN | 0.133629 | 0.379692 | 0.440903 | 0.001222 | 0.001159 | 0.001041 |
| variant_copy_assign_throw.test | RUN | 0.126327 | 0.333279 | 0.409074 | 0.001200 | 0.001342 | 0.001095 |
| variant_move_assign_throw.test | RUN | 0.126575 | 0.333128 | 0.418210 | 0.001385 | 0.001388 | 0.001240 |
| variant_get_by_index_nx.test | RUN | 0.308639 | 1.637476 | 1.111261 | 0.001197 | 0.001586 | 0.001173 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.098393 | 0.242020 | 0.296781 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.312096 | 1.834027 | 1.193878 | 0.001380 | 0.001500 | 0.001199 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.088464 | 0.207323 | 0.241097 | — | — | — |
| variant_subset_nx.test | RUN | 0.228200 | 0.715685 | 0.899160 | 0.001352 | 0.001240 | 0.000951 |
| variant_hash.test | RUN | 0.228448 | 0.838439 | 0.817433 | 0.001352 | 0.001622 | 0.001051 |
| variant_trivial.test | RUN | 1.291202 | 4.696633 | 5.987237 | 0.001206 | 0.001601 | 0.001165 |
| variant_special.test | RUN | 1.268560 | 5.104634 | 6.539607 | 0.001266 | 0.001500 | 0.001147 |
| variant_visit_derived.test | RUN | 0.158237 | 0.430409 | 0.611388 | 0.001411 | 0.001555 | 0.001158 |
| variant_many_types.test | RUN | 1.420100 | 6.250343 | 8.595256 | 0.001368 | 0.001305 | 0.001198 |
| variant_visit_r.test | RUN | 0.581790 | 2.004736 | 3.444341 | 0.001224 | 0.001559 | 0.001106 |
| variant_derived_construct.test | COMPILE | 0.089163 | 0.214087 | 0.268583 | — | — | — |
| variant_visit_by_index.test | RUN | 0.198463 | 0.553474 | 0.790357 | 0.001232 | 0.001379 | 0.001016 |
| variant_ostream_insert.test | RUN | 0.147594 | 0.456697 | 0.503219 | 0.001039 | 0.001271 | 0.001222 |
| is_output_streamable.test | RUN | 0.196658 | 0.963593 | 0.785180 | 0.001114 | 0.001426 | 0.001245 |
| variant_json_value_from.test | RUN | 0.284899 | 0.731015 | 0.926706 | 0.001369 | 0.001502 | 0.001134 |
| variant_json_value_to.test | RUN | 0.357218 | 1.049089 | 1.281115 | 0.001264 | 0.001386 | 0.001186 |
| variant_uses_double_storage.test | COMPILE | 0.096252 | 0.216764 | 0.299710 | — | — | — |
| variant_derived_construct2.test | RUN | 0.132157 | 0.357985 | 0.441570 | 0.001197 | 0.001327 | 0.001085 |
| variant_visit_cx.test | COMPILE | 0.088713 | 0.207507 | 0.249312 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.087818 | 0.202754 | 0.253212 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.087268 | 0.202842 | 0.246683 | — | — | — |
| variant_index_type_126.test | RUN | 0.793448 | 1.998297 | 3.760381 | 0.001227 | 0.001308 | 0.001277 |
| variant_index_type_127.test | RUN | 0.801787 | 2.013556 | 3.924731 | 0.001353 | 0.001461 | 0.001228 |
| variant_index_type_128.test | RUN | 0.815898 | 2.055002 | 3.967949 | 0.001220 | 0.001558 | 0.001146 |
| variant_index_type_129.test | RUN | 0.825400 | 2.060365 | 3.871705 | 0.001319 | 0.001224 | 0.001343 |
| variant_index_type_254.test | RUN | 2.876906 | 7.955769 | 12.119569 | 0.001147 | 0.001229 | 0.001453 |
| variant_index_type_255.test | RUN | 2.889975 | 7.902387 | 12.587704 | 0.001272 | 0.001429 | 0.001234 |
| variant_index_type_256.test | RUN | 2.920194 | 8.243211 | 12.263900 | 0.001312 | 0.001168 | 0.001311 |
| variant_index_type_257.test | RUN | 2.919925 | 8.274110 | 12.645939 | 0.001326 | 0.001229 | 0.001294 |
| variant_default_construct_cx_2.test | COMPILE | 0.089917 | 0.203682 | 0.291718 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.088455 | 0.215892 | 0.271546 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.090866 | 0.207979 | 0.263107 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.088304 | 0.205624 | 0.250479 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.090616 | 0.209239 | 0.249520 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.090322 | 0.153281 | 0.206644 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.081836 | 0.178915 | 0.231911 | — | — | — |
| variant_issue_55.test | RUN | 0.136818 | 0.396341 | 0.451736 | 0.000896 | 0.001070 | 0.000864 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.995× | 0.993×, 0.997× | 0.995× |
| clang | 0.995× | 0.999×, 0.990× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44801983152).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.000834s | 0.000816s | 0.000780s | byte equality observed |
| quick.test | 10 | 0.000793s | 0.000355s | 0.000791s | byte equality observed |
| variant_alternative.test | 10 | 0.000799s | 0.000835s | 0.000814s | byte equality observed |
| variant_convert_construct.test | 10 | 0.000817s | 0.000804s | 0.000817s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.000830s | 0.000832s | 0.000827s | byte equality observed |
| variant_copy_assign.test | 10 | 0.000808s | 0.000844s | 0.000803s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.000834s | 0.000856s | 0.000824s | byte equality observed |
| variant_copy_construct.test | 10 | 0.000838s | 0.000853s | 0.000832s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.000818s | 0.000871s | 0.000850s | byte equality observed |
| variant_default_construct.test | 10 | 0.000809s | 0.000857s | 0.000833s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.000806s | 0.000789s | 0.000810s | byte equality observed |
| variant_destroy.test | 10 | 0.000808s | 0.000814s | 0.000823s | byte equality observed |
| variant_emplace_index.test | 10 | 0.000810s | 0.000826s | 0.000810s | byte equality observed |
| variant_emplace_type.test | 10 | 0.000831s | 0.000824s | 0.000790s | byte equality observed |
| variant_eq_ne.test | 10 | 0.000839s | 0.000820s | 0.000814s | byte equality observed |
| variant_get_by_index.test | 10 | 0.000870s | 0.000866s | 0.000849s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.000822s | 0.000800s | 0.000778s | byte equality observed |
| variant_get_by_type.test | 10 | 0.000852s | 0.000847s | 0.000827s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.000834s | 0.000836s | 0.000810s | byte equality observed |
| variant_hash.test | 10 | 0.000806s | 0.000819s | 0.000810s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.000799s | 0.000830s | 0.000820s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.000812s | 0.000795s | 0.000834s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.000821s | 0.000844s | 0.000825s | byte equality observed |
| variant_index_type_126.test | 10 | 0.000817s | 0.000800s | 0.000810s | byte equality observed |
| variant_index_type_127.test | 10 | 0.000836s | 0.000784s | 0.000788s | byte equality observed |
| variant_index_type_128.test | 10 | 0.000830s | 0.000832s | 0.000786s | byte equality observed |
| variant_index_type_129.test | 10 | 0.000826s | 0.000820s | 0.000802s | byte equality observed |
| variant_index_type_254.test | 10 | 0.000806s | 0.000818s | 0.000798s | byte equality observed |
| variant_index_type_255.test | 10 | 0.000826s | 0.000804s | 0.000785s | byte equality observed |
| variant_index_type_256.test | 10 | 0.000819s | 0.000823s | 0.000808s | byte equality observed |
| variant_index_type_257.test | 10 | 0.000814s | 0.000788s | 0.000821s | byte equality observed |
| variant_issue_55.test | 10 | 0.000805s | 0.000812s | 0.000840s | byte equality observed |
| variant_json_value_from.test | 10 | 0.000829s | 0.000842s | 0.000826s | byte equality observed |
| variant_json_value_to.test | 10 | 0.000824s | 0.000829s | 0.000833s | byte equality observed |
| variant_lt_gt.test | 10 | 0.000806s | 0.000797s | 0.000802s | byte equality observed |
| variant_many_types.test | 10 | 0.000842s | 0.000844s | 0.000865s | byte equality observed |
| variant_move_assign.test | 10 | 0.000820s | 0.000802s | 0.000840s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.000819s | 0.000812s | 0.000840s | byte equality observed |
| variant_move_construct.test | 10 | 0.000823s | 0.000826s | 0.000822s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.000828s | 0.000864s | 0.000821s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.000820s | 0.000831s | 0.000810s | byte equality observed |
| variant_size.test | 10 | 0.000790s | 0.000815s | 0.000821s | byte equality observed |
| variant_special.test | 10 | 0.000859s | 0.000856s | 0.000836s | byte equality observed |
| variant_subset.test | 10 | 0.000841s | 0.000832s | 0.000866s | byte equality observed |
| variant_subset_nx.test | 10 | 0.000809s | 0.000820s | 0.000805s | byte equality observed |
| variant_swap.test | 10 | 0.000830s | 0.000827s | 0.000818s | byte equality observed |
| variant_trivial.test | 10 | 0.000841s | 0.000879s | 0.000814s | byte equality observed |
| variant_value_assign.test | 10 | 0.000822s | 0.000815s | 0.000819s | byte equality observed |
| variant_value_construct.test | 10 | 0.000833s | 0.000805s | 0.000836s | byte equality observed |
| variant_valueless.test | 10 | 0.000846s | 0.000855s | 0.000838s | byte equality observed |
| variant_visit.test | 10 | 0.000819s | 0.000815s | 0.000840s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.000799s | 0.000780s | 0.000829s | byte equality observed |
| variant_visit_derived.test | 10 | 0.000808s | 0.000800s | 0.000819s | byte equality observed |
| variant_visit_r.test | 10 | 0.000804s | 0.000793s | 0.000789s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44801983152).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
