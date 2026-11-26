# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.092314 | 0.218185 | 0.262017 | 0.001117 | 0.000486 | 0.001168 |
| variant_size.test | RUN | 0.153586 | 0.523554 | 0.517880 | 0.001267 | 0.001347 | 0.001161 |
| variant_alternative.test | RUN | 0.215447 | 1.725413 | 0.923060 | 0.001182 | 0.001218 | 0.001126 |
| variant_holds_alternative.test | RUN | 0.145534 | 0.388942 | 0.529921 | 0.001155 | 0.001369 | 0.001182 |
| variant_holds_alternative_cx.test | COMPILE | 0.093760 | 0.223525 | 0.292552 | — | — | — |
| variant_get_by_index.test | RUN | 0.244410 | 1.896889 | 1.126412 | 0.001227 | 0.001464 | 0.001192 |
| variant_get_by_index_cx.test | COMPILE | 0.098386 | 0.233352 | 0.306112 | — | — | — |
| variant_get_by_type.test | RUN | 0.262535 | 2.047498 | 1.236755 | 0.001250 | 0.001240 | 0.001344 |
| variant_get_by_type_cx.test | COMPILE | 0.085680 | 0.204116 | 0.262752 | — | — | — |
| variant_default_construct.test | RUN | 0.236769 | 1.491386 | 0.995660 | 0.001328 | 0.001385 | 0.001241 |
| variant_default_construct_cx.test | COMPILE | 0.095206 | 0.215277 | 0.306369 | — | — | — |
| variant_copy_construct.test | RUN | 0.374938 | 2.459209 | 1.791288 | 0.001181 | 0.001184 | 0.001190 |
| variant_copy_construct_cx.test | COMPILE | 0.111135 | 0.249960 | 0.364655 | — | — | — |
| variant_move_construct.test | RUN | 0.350798 | 2.138792 | 1.643483 | 0.001330 | 0.001175 | 0.001126 |
| variant_move_construct_cx.test | COMPILE | 0.086375 | 0.203595 | 0.254182 | — | — | — |
| variant_value_construct.test | RUN | 0.183101 | 0.531564 | 0.673109 | 0.001220 | 0.001302 | 0.001120 |
| variant_value_construct_cx.test | COMPILE | 0.103346 | 0.236495 | 0.305865 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.190154 | 0.539204 | 0.688355 | 0.001350 | 0.001188 | 0.001173 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.100493 | 0.232679 | 0.312663 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.187728 | 0.529508 | 0.660855 | 0.001205 | 0.001203 | 0.001142 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.100021 | 0.234232 | 0.314229 | — | — | — |
| variant_copy_assign.test | RUN | 0.260496 | 1.707823 | 1.078572 | 0.001175 | 0.001178 | 0.001053 |
| variant_copy_assign_cx.test | COMPILE | 0.086949 | 0.203307 | 0.257993 | — | — | — |
| variant_move_assign.test | RUN | 0.256042 | 1.693166 | 1.085598 | 0.001247 | 0.001209 | 0.000991 |
| variant_move_assign_cx.test | COMPILE | 0.092031 | 0.203067 | 0.253705 | — | — | — |
| variant_value_assign.test | RUN | 0.187790 | 0.587470 | 0.742324 | 0.001166 | 0.001330 | 0.001053 |
| variant_value_assign_cx.test | COMPILE | 0.086828 | 0.198747 | 0.259283 | — | — | — |
| variant_emplace_index.test | RUN | 0.212535 | 0.689082 | 0.805740 | 0.001175 | 0.001277 | 0.001135 |
| variant_emplace_index_cx.test | COMPILE | 0.086276 | 0.202395 | 0.257266 | — | — | — |
| variant_emplace_type.test | RUN | 0.194129 | 0.581529 | 0.727578 | 0.001164 | 0.001235 | 0.001205 |
| variant_emplace_type_cx.test | COMPILE | 0.085550 | 0.205486 | 0.258049 | — | — | — |
| variant_swap.test | RUN | 0.201064 | 0.734446 | 0.784237 | 0.001127 | 0.001306 | 0.001114 |
| variant_eq_ne.test | RUN | 0.156496 | 0.432272 | 0.553882 | 0.001127 | 0.001143 | 0.001117 |
| variant_eq_ne_cx.test | COMPILE | 0.088400 | 0.203849 | 0.261992 | — | — | — |
| variant_lt_gt.test | RUN | 0.166689 | 0.494547 | 0.586013 | 0.001262 | 0.001323 | 0.001148 |
| variant_lt_gt_cx.test | COMPILE | 0.085706 | 0.203746 | 0.244498 | — | — | — |
| variant_destroy.test | RUN | 0.172138 | 0.494168 | 0.604220 | 0.001121 | 0.001328 | 0.001196 |
| variant_visit.test | RUN | 1.061568 | 3.826791 | 10.469145 | 0.001356 | 0.001171 | 0.001120 |
| variant_convert_construct.test | RUN | 0.214334 | 0.655172 | 0.842170 | 0.000946 | 0.001206 | 0.001108 |
| variant_subset.test | RUN | 0.216539 | 0.725422 | 0.889268 | 0.001386 | 0.001322 | 0.001119 |
| variant_valueless.test | RUN | 0.156649 | 0.440190 | 0.598509 | 0.001294 | 0.001305 | 0.001250 |
| variant_copy_construct_throw.test | RUN | 0.125248 | 0.335058 | 0.408102 | 0.001147 | 0.001380 | 0.001138 |
| variant_move_construct_throw.test | RUN | 0.126161 | 0.333080 | 0.419680 | 0.001387 | 0.001225 | 0.001181 |
| variant_convert_construct_throw.test | RUN | 0.130981 | 0.354833 | 0.447882 | 0.001164 | 0.001126 | 0.001270 |
| variant_copy_assign_throw.test | RUN | 0.122243 | 0.315587 | 0.411047 | 0.001211 | 0.001369 | 0.001176 |
| variant_move_assign_throw.test | RUN | 0.125882 | 0.324752 | 0.418265 | 0.001232 | 0.001211 | 0.001476 |
| variant_get_by_index_nx.test | RUN | 0.313107 | 1.594365 | 1.087554 | 0.001193 | 0.001322 | 0.001299 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.098501 | 0.231903 | 0.301785 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.308661 | 1.775845 | 1.194936 | 0.001198 | 0.001158 | 0.001139 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.089881 | 0.201797 | 0.254494 | — | — | — |
| variant_subset_nx.test | RUN | 0.227626 | 0.685486 | 0.921434 | 0.001120 | 0.001121 | 0.001173 |
| variant_hash.test | RUN | 0.223454 | 0.798530 | 0.814352 | 0.001140 | 0.001252 | 0.001237 |
| variant_trivial.test | RUN | 1.265826 | 4.536004 | 5.960835 | 0.001139 | 0.001402 | 0.001168 |
| variant_special.test | RUN | 1.233426 | 4.955643 | 6.426644 | 0.001371 | 0.001323 | 0.001163 |
| variant_visit_derived.test | RUN | 0.153819 | 0.415775 | 0.620891 | 0.001228 | 0.001240 | 0.001295 |
| variant_many_types.test | RUN | 1.397790 | 6.048182 | 8.771851 | 0.001275 | 0.001197 | 0.001228 |
| variant_visit_r.test | RUN | 0.587292 | 1.927357 | 3.372508 | 0.001179 | 0.001325 | 0.001155 |
| variant_derived_construct.test | COMPILE | 0.092168 | 0.209081 | 0.266490 | — | — | — |
| variant_visit_by_index.test | RUN | 0.202938 | 0.533894 | 0.791301 | 0.001282 | 0.001238 | 0.001124 |
| variant_ostream_insert.test | RUN | 0.155994 | 0.443557 | 0.539898 | 0.001192 | 0.001330 | 0.001185 |
| is_output_streamable.test | RUN | 0.190184 | 0.936746 | 0.730523 | 0.001253 | 0.001282 | 0.001116 |
| variant_json_value_from.test | RUN | 0.284685 | 0.710981 | 0.916977 | 0.001237 | 0.001422 | 0.001176 |
| variant_json_value_to.test | RUN | 0.354598 | 0.996090 | 1.255799 | 0.001194 | 0.001146 | 0.001130 |
| variant_uses_double_storage.test | COMPILE | 0.093779 | 0.206573 | 0.299051 | — | — | — |
| variant_derived_construct2.test | RUN | 0.131194 | 0.349648 | 0.434072 | 0.001116 | 0.001216 | 0.001178 |
| variant_visit_cx.test | COMPILE | 0.090739 | 0.201635 | 0.255780 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.090084 | 0.194543 | 0.257726 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.087584 | 0.194780 | 0.255611 | — | — | — |
| variant_index_type_126.test | RUN | 0.786709 | 1.937516 | 3.730890 | 0.001169 | 0.001177 | 0.001336 |
| variant_index_type_127.test | RUN | 0.804171 | 1.946534 | 3.779303 | 0.001223 | 0.001336 | 0.001025 |
| variant_index_type_128.test | RUN | 0.805349 | 2.020169 | 3.853406 | 0.001189 | 0.001195 | 0.001062 |
| variant_index_type_129.test | RUN | 0.815344 | 1.997052 | 3.818478 | 0.001278 | 0.001258 | 0.001068 |
| variant_index_type_254.test | RUN | 2.862303 | 7.620575 | 12.143342 | 0.001225 | 0.001339 | 0.001218 |
| variant_index_type_255.test | RUN | 2.909135 | 7.755915 | 12.320171 | 0.001138 | 0.001207 | 0.001279 |
| variant_index_type_256.test | RUN | 2.945018 | 8.011482 | 12.318788 | 0.001170 | 0.001156 | 0.001044 |
| variant_index_type_257.test | RUN | 2.973031 | 8.118689 | 12.468190 | 0.001221 | 0.001318 | 0.001116 |
| variant_default_construct_cx_2.test | COMPILE | 0.083199 | 0.204957 | 0.241194 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.093437 | 0.198195 | 0.253043 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.088726 | 0.198806 | 0.254051 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.089002 | 0.198467 | 0.236466 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.088200 | 0.198710 | 0.253415 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.088178 | 0.173026 | 0.248821 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.087771 | 0.190188 | 0.227164 | — | — | — |
| variant_issue_55.test | RUN | 0.133649 | 0.350579 | 0.435656 | 0.001002 | 0.000886 | 0.000886 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.992× | 0.994×, 0.990× | 1.015× |
| clang | 0.984× | 0.981×, 0.987× | 0.992× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45739944580).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.000803s | 0.000783s | 0.000774s | byte equality observed |
| quick.test | 10 | 0.000780s | 0.000361s | 0.000771s | byte equality observed |
| variant_alternative.test | 10 | 0.000795s | 0.000818s | 0.000793s | byte equality observed |
| variant_convert_construct.test | 10 | 0.000820s | 0.000804s | 0.000821s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.000833s | 0.000803s | 0.000820s | byte equality observed |
| variant_copy_assign.test | 10 | 0.000820s | 0.000801s | 0.000781s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.000827s | 0.000815s | 0.000824s | byte equality observed |
| variant_copy_construct.test | 10 | 0.000835s | 0.000831s | 0.000786s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.000818s | 0.000799s | 0.000845s | byte equality observed |
| variant_default_construct.test | 10 | 0.000818s | 0.000798s | 0.000811s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.000799s | 0.000823s | 0.000796s | byte equality observed |
| variant_destroy.test | 10 | 0.000806s | 0.000812s | 0.000812s | byte equality observed |
| variant_emplace_index.test | 10 | 0.000794s | 0.000817s | 0.000811s | byte equality observed |
| variant_emplace_type.test | 10 | 0.000818s | 0.000836s | 0.000814s | byte equality observed |
| variant_eq_ne.test | 10 | 0.000791s | 0.000790s | 0.000798s | byte equality observed |
| variant_get_by_index.test | 10 | 0.000853s | 0.000841s | 0.000855s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.000800s | 0.000785s | 0.000805s | byte equality observed |
| variant_get_by_type.test | 10 | 0.000820s | 0.000842s | 0.000841s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.000829s | 0.000831s | 0.000796s | byte equality observed |
| variant_hash.test | 10 | 0.000811s | 0.000829s | 0.000799s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.000811s | 0.000805s | 0.000789s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.000817s | 0.000803s | 0.000768s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.000856s | 0.000814s | 0.000778s | byte equality observed |
| variant_index_type_126.test | 10 | 0.000840s | 0.000795s | 0.000771s | byte equality observed |
| variant_index_type_127.test | 10 | 0.000810s | 0.000809s | 0.000806s | byte equality observed |
| variant_index_type_128.test | 10 | 0.000810s | 0.000816s | 0.000796s | byte equality observed |
| variant_index_type_129.test | 10 | 0.000809s | 0.000804s | 0.000787s | byte equality observed |
| variant_index_type_254.test | 10 | 0.000799s | 0.000817s | 0.000791s | byte equality observed |
| variant_index_type_255.test | 10 | 0.000828s | 0.000817s | 0.000783s | byte equality observed |
| variant_index_type_256.test | 10 | 0.000805s | 0.000817s | 0.000794s | byte equality observed |
| variant_index_type_257.test | 10 | 0.000791s | 0.000816s | 0.000819s | byte equality observed |
| variant_issue_55.test | 10 | 0.000821s | 0.000789s | 0.000857s | byte equality observed |
| variant_json_value_from.test | 10 | 0.000850s | 0.000840s | 0.000856s | byte equality observed |
| variant_json_value_to.test | 10 | 0.000828s | 0.000861s | 0.000830s | byte equality observed |
| variant_lt_gt.test | 10 | 0.000799s | 0.000820s | 0.000790s | byte equality observed |
| variant_many_types.test | 10 | 0.000824s | 0.000829s | 0.000804s | byte equality observed |
| variant_move_assign.test | 10 | 0.000813s | 0.000825s | 0.000800s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.000837s | 0.000820s | 0.000823s | byte equality observed |
| variant_move_construct.test | 10 | 0.000818s | 0.000836s | 0.000804s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.000835s | 0.000826s | 0.000808s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.000818s | 0.000829s | 0.000816s | byte equality observed |
| variant_size.test | 10 | 0.000792s | 0.000793s | 0.000782s | byte equality observed |
| variant_special.test | 10 | 0.000855s | 0.000868s | 0.000838s | byte equality observed |
| variant_subset.test | 10 | 0.000810s | 0.000815s | 0.000820s | byte equality observed |
| variant_subset_nx.test | 10 | 0.000799s | 0.000814s | 0.000789s | byte equality observed |
| variant_swap.test | 10 | 0.000818s | 0.000803s | 0.000771s | byte equality observed |
| variant_trivial.test | 10 | 0.000837s | 0.000837s | 0.000804s | byte equality observed |
| variant_value_assign.test | 10 | 0.000812s | 0.000831s | 0.000806s | byte equality observed |
| variant_value_construct.test | 10 | 0.000800s | 0.000789s | 0.000792s | byte equality observed |
| variant_valueless.test | 10 | 0.000831s | 0.000850s | 0.000824s | byte equality observed |
| variant_visit.test | 10 | 0.000828s | 0.000827s | 0.000800s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.000803s | 0.000801s | 0.000813s | byte equality observed |
| variant_visit_derived.test | 10 | 0.000808s | 0.000781s | 0.000832s | byte equality observed |
| variant_visit_r.test | 10 | 0.000791s | 0.000772s | 0.000796s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45739944580).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
