# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.087812 | 0.216661 | 0.262479 | 0.001098 | 0.000512 | 0.001124 |
| variant_size.test | RUN | 0.155874 | 0.525663 | 0.516410 | 0.001052 | 0.001372 | 0.001061 |
| variant_alternative.test | RUN | 0.206856 | 1.733385 | 0.920380 | 0.001055 | 0.001209 | 0.001062 |
| variant_holds_alternative.test | RUN | 0.141485 | 0.390711 | 0.524061 | 0.001125 | 0.001204 | 0.001159 |
| variant_holds_alternative_cx.test | COMPILE | 0.086605 | 0.222679 | 0.289928 | — | — | — |
| variant_get_by_index.test | RUN | 0.237022 | 1.901327 | 1.162422 | 0.001222 | 0.001248 | 0.001199 |
| variant_get_by_index_cx.test | COMPILE | 0.087686 | 0.230441 | 0.301266 | — | — | — |
| variant_get_by_type.test | RUN | 0.243206 | 2.051993 | 1.232585 | 0.001159 | 0.001263 | 0.001142 |
| variant_get_by_type_cx.test | COMPILE | 0.089809 | 0.208755 | 0.256027 | — | — | — |
| variant_default_construct.test | RUN | 0.228126 | 1.494381 | 0.985088 | 0.001134 | 0.001240 | 0.001186 |
| variant_default_construct_cx.test | COMPILE | 0.094261 | 0.214946 | 0.304035 | — | — | — |
| variant_copy_construct.test | RUN | 0.367236 | 2.476196 | 1.801044 | 0.001116 | 0.001211 | 0.001129 |
| variant_copy_construct_cx.test | COMPILE | 0.106388 | 0.248010 | 0.369118 | — | — | — |
| variant_move_construct.test | RUN | 0.337081 | 2.134627 | 1.633231 | 0.001008 | 0.001324 | 0.001115 |
| variant_move_construct_cx.test | COMPILE | 0.085195 | 0.208020 | 0.273444 | — | — | — |
| variant_value_construct.test | RUN | 0.176220 | 0.531690 | 0.691043 | 0.001103 | 0.001279 | 0.001124 |
| variant_value_construct_cx.test | COMPILE | 0.096711 | 0.241133 | 0.320225 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.185374 | 0.534812 | 0.693718 | 0.001059 | 0.001241 | 0.001217 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.096603 | 0.233402 | 0.311203 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.178927 | 0.526953 | 0.673989 | 0.001055 | 0.001212 | 0.001093 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.093922 | 0.234371 | 0.309922 | — | — | — |
| variant_copy_assign.test | RUN | 0.251204 | 1.729539 | 1.090338 | 0.001120 | 0.001197 | 0.001100 |
| variant_copy_assign_cx.test | COMPILE | 0.083270 | 0.202583 | 0.242022 | — | — | — |
| variant_move_assign.test | RUN | 0.245240 | 1.727782 | 1.083941 | 0.000989 | 0.001328 | 0.001081 |
| variant_move_assign_cx.test | COMPILE | 0.083211 | 0.202767 | 0.253854 | — | — | — |
| variant_value_assign.test | RUN | 0.185293 | 0.584204 | 0.741625 | 0.001112 | 0.001279 | 0.001164 |
| variant_value_assign_cx.test | COMPILE | 0.083778 | 0.198395 | 0.257645 | — | — | — |
| variant_emplace_index.test | RUN | 0.209614 | 0.679222 | 0.837081 | 0.001122 | 0.001198 | 0.001127 |
| variant_emplace_index_cx.test | COMPILE | 0.080248 | 0.205928 | 0.247434 | — | — | — |
| variant_emplace_type.test | RUN | 0.185235 | 0.590920 | 0.736423 | 0.001262 | 0.001317 | 0.001125 |
| variant_emplace_type_cx.test | COMPILE | 0.081002 | 0.210014 | 0.250653 | — | — | — |
| variant_swap.test | RUN | 0.192856 | 0.736894 | 0.795494 | 0.001045 | 0.001209 | 0.001087 |
| variant_eq_ne.test | RUN | 0.159909 | 0.441942 | 0.574371 | 0.001094 | 0.001327 | 0.001035 |
| variant_eq_ne_cx.test | COMPILE | 0.085049 | 0.198535 | 0.250195 | — | — | — |
| variant_lt_gt.test | RUN | 0.157562 | 0.503232 | 0.598210 | 0.001057 | 0.001348 | 0.001130 |
| variant_lt_gt_cx.test | COMPILE | 0.083530 | 0.203843 | 0.254652 | — | — | — |
| variant_destroy.test | RUN | 0.168795 | 0.494781 | 0.615820 | 0.001035 | 0.001248 | 0.001284 |
| variant_visit.test | RUN | 1.047857 | 3.824931 | 10.452457 | 0.001187 | 0.001219 | 0.001143 |
| variant_convert_construct.test | RUN | 0.209991 | 0.662258 | 0.848739 | 0.001084 | 0.001190 | 0.001129 |
| variant_subset.test | RUN | 0.211577 | 0.703370 | 0.896498 | 0.001128 | 0.001155 | 0.001032 |
| variant_valueless.test | RUN | 0.154162 | 0.454748 | 0.583719 | 0.001102 | 0.001265 | 0.001174 |
| variant_copy_construct_throw.test | RUN | 0.124473 | 0.344085 | 0.417963 | 0.000870 | 0.001275 | 0.001155 |
| variant_move_construct_throw.test | RUN | 0.121514 | 0.340354 | 0.417899 | 0.001065 | 0.001245 | 0.001190 |
| variant_convert_construct_throw.test | RUN | 0.127919 | 0.370290 | 0.439305 | 0.001032 | 0.000904 | 0.001134 |
| variant_copy_assign_throw.test | RUN | 0.119658 | 0.318848 | 0.413550 | 0.001084 | 0.001214 | 0.001134 |
| variant_move_assign_throw.test | RUN | 0.118641 | 0.316286 | 0.417287 | 0.001090 | 0.001349 | 0.001176 |
| variant_get_by_index_nx.test | RUN | 0.298419 | 1.615775 | 1.100690 | 0.001091 | 0.001152 | 0.001120 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.097839 | 0.236725 | 0.299127 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.311007 | 1.804394 | 1.191081 | 0.001099 | 0.001228 | 0.001323 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.085144 | 0.202390 | 0.257008 | — | — | — |
| variant_subset_nx.test | RUN | 0.219462 | 0.678442 | 0.936240 | 0.001099 | 0.001220 | 0.001079 |
| variant_hash.test | RUN | 0.219358 | 0.790566 | 0.840660 | 0.001065 | 0.001302 | 0.001186 |
| variant_trivial.test | RUN | 1.246739 | 4.514524 | 6.102396 | 0.001201 | 0.001235 | 0.001182 |
| variant_special.test | RUN | 1.207805 | 4.815840 | 6.545918 | 0.001095 | 0.001390 | 0.001213 |
| variant_visit_derived.test | RUN | 0.150672 | 0.410192 | 0.617474 | 0.001179 | 0.001310 | 0.001118 |
| variant_many_types.test | RUN | 1.354713 | 6.068842 | 8.607245 | 0.001052 | 0.001202 | 0.001139 |
| variant_visit_r.test | RUN | 0.578164 | 1.925475 | 3.504076 | 0.001310 | 0.001142 | 0.001114 |
| variant_derived_construct.test | COMPILE | 0.092936 | 0.186891 | 0.274067 | — | — | — |
| variant_visit_by_index.test | RUN | 0.193711 | 0.512508 | 0.813208 | 0.001073 | 0.001255 | 0.001238 |
| variant_ostream_insert.test | RUN | 0.144042 | 0.451020 | 0.501350 | 0.001220 | 0.001243 | 0.001283 |
| is_output_streamable.test | RUN | 0.186507 | 0.923972 | 0.773811 | 0.001053 | 0.001156 | 0.001212 |
| variant_json_value_from.test | RUN | 0.273117 | 0.724756 | 0.945298 | 0.001268 | 0.001244 | 0.001132 |
| variant_json_value_to.test | RUN | 0.348329 | 0.996552 | 1.266089 | 0.001095 | 0.001378 | 0.001130 |
| variant_uses_double_storage.test | COMPILE | 0.096091 | 0.211955 | 0.305958 | — | — | — |
| variant_derived_construct2.test | RUN | 0.127724 | 0.356976 | 0.449441 | 0.000950 | 0.001195 | 0.001086 |
| variant_visit_cx.test | COMPILE | 0.088561 | 0.203655 | 0.263991 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.081807 | 0.198126 | 0.242940 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.083639 | 0.197639 | 0.258112 | — | — | — |
| variant_index_type_126.test | RUN | 0.763777 | 1.907517 | 3.742596 | 0.001390 | 0.001291 | 0.001251 |
| variant_index_type_127.test | RUN | 0.785051 | 1.946058 | 3.779789 | 0.001206 | 0.001208 | 0.001184 |
| variant_index_type_128.test | RUN | 0.795574 | 1.961437 | 3.835963 | 0.000854 | 0.001255 | 0.001577 |
| variant_index_type_129.test | RUN | 0.791789 | 1.958675 | 3.851487 | 0.001049 | 0.001191 | 0.001111 |
| variant_index_type_254.test | RUN | 2.801053 | 7.631828 | 12.211258 | 0.001104 | 0.001275 | 0.001192 |
| variant_index_type_255.test | RUN | 2.804523 | 7.680408 | 12.247729 | 0.001141 | 0.001205 | 0.001211 |
| variant_index_type_256.test | RUN | 2.862906 | 7.978979 | 12.351250 | 0.001152 | 0.001366 | 0.001124 |
| variant_index_type_257.test | RUN | 2.887852 | 8.003032 | 12.491997 | 0.000998 | 0.001161 | 0.001358 |
| variant_default_construct_cx_2.test | COMPILE | 0.087274 | 0.200136 | 0.229659 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.079215 | 0.198058 | 0.279488 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.085875 | 0.201918 | 0.259216 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.084237 | 0.194849 | 0.258097 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.082784 | 0.196558 | 0.231292 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.081596 | 0.200597 | 0.232677 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.076752 | 0.144857 | 0.159331 | — | — | — |
| variant_issue_55.test | RUN | 0.113122 | 0.346838 | 0.446547 | 0.000867 | 0.000863 | 0.000867 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.986× | 0.985×, 0.988× | 0.986× |
| clang | 0.999× | 0.996×, 1.003× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45241427099).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.000804s | 0.000814s | 0.000805s | byte equality observed |
| quick.test | 10 | 0.000781s | 0.000358s | 0.000796s | byte equality observed |
| variant_alternative.test | 10 | 0.000799s | 0.000793s | 0.000828s | byte equality observed |
| variant_convert_construct.test | 10 | 0.000825s | 0.000799s | 0.000824s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.000844s | 0.000817s | 0.000849s | byte equality observed |
| variant_copy_assign.test | 10 | 0.000829s | 0.000803s | 0.000811s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.000852s | 0.000826s | 0.000844s | byte equality observed |
| variant_copy_construct.test | 10 | 0.000840s | 0.000828s | 0.000849s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.000852s | 0.000828s | 0.000833s | byte equality observed |
| variant_default_construct.test | 10 | 0.000841s | 0.000815s | 0.000854s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.000841s | 0.000791s | 0.000786s | byte equality observed |
| variant_destroy.test | 10 | 0.000825s | 0.000781s | 0.000785s | byte equality observed |
| variant_emplace_index.test | 10 | 0.000827s | 0.000815s | 0.000806s | byte equality observed |
| variant_emplace_type.test | 10 | 0.000843s | 0.000821s | 0.000842s | byte equality observed |
| variant_eq_ne.test | 10 | 0.000799s | 0.000795s | 0.000824s | byte equality observed |
| variant_get_by_index.test | 10 | 0.000849s | 0.000847s | 0.000873s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.000817s | 0.000799s | 0.000812s | byte equality observed |
| variant_get_by_type.test | 10 | 0.000843s | 0.000862s | 0.000836s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.000811s | 0.000821s | 0.000820s | byte equality observed |
| variant_hash.test | 10 | 0.000815s | 0.000828s | 0.000825s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.000830s | 0.000843s | 0.000829s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.000818s | 0.000841s | 0.000819s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.000830s | 0.000834s | 0.000807s | byte equality observed |
| variant_index_type_126.test | 10 | 0.000828s | 0.000822s | 0.000795s | byte equality observed |
| variant_index_type_127.test | 10 | 0.000809s | 0.000806s | 0.000781s | byte equality observed |
| variant_index_type_128.test | 10 | 0.000800s | 0.000806s | 0.000802s | byte equality observed |
| variant_index_type_129.test | 10 | 0.000817s | 0.000816s | 0.000788s | byte equality observed |
| variant_index_type_254.test | 10 | 0.000816s | 0.000816s | 0.000810s | byte equality observed |
| variant_index_type_255.test | 10 | 0.000816s | 0.000824s | 0.000824s | byte equality observed |
| variant_index_type_256.test | 10 | 0.000825s | 0.000853s | 0.000837s | byte equality observed |
| variant_index_type_257.test | 10 | 0.000821s | 0.000809s | 0.000849s | byte equality observed |
| variant_issue_55.test | 10 | 0.000829s | 0.000815s | 0.000822s | byte equality observed |
| variant_json_value_from.test | 10 | 0.000853s | 0.000817s | 0.000851s | byte equality observed |
| variant_json_value_to.test | 10 | 0.000826s | 0.000821s | 0.000871s | byte equality observed |
| variant_lt_gt.test | 10 | 0.000814s | 0.000833s | 0.000850s | byte equality observed |
| variant_many_types.test | 10 | 0.000824s | 0.000840s | 0.000854s | byte equality observed |
| variant_move_assign.test | 10 | 0.000817s | 0.000834s | 0.000839s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.000830s | 0.000829s | 0.000823s | byte equality observed |
| variant_move_construct.test | 10 | 0.000827s | 0.000801s | 0.000813s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.000827s | 0.000840s | 0.000822s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.000839s | 0.000828s | 0.000846s | byte equality observed |
| variant_size.test | 10 | 0.000813s | 0.000797s | 0.000812s | byte equality observed |
| variant_special.test | 10 | 0.000874s | 0.000860s | 0.000868s | byte equality observed |
| variant_subset.test | 10 | 0.000845s | 0.000845s | 0.000861s | byte equality observed |
| variant_subset_nx.test | 10 | 0.000805s | 0.000828s | 0.000822s | byte equality observed |
| variant_swap.test | 10 | 0.000814s | 0.000825s | 0.000834s | byte equality observed |
| variant_trivial.test | 10 | 0.000837s | 0.000868s | 0.000848s | byte equality observed |
| variant_value_assign.test | 10 | 0.000809s | 0.000827s | 0.000825s | byte equality observed |
| variant_value_construct.test | 10 | 0.000799s | 0.000815s | 0.000821s | byte equality observed |
| variant_valueless.test | 10 | 0.000864s | 0.000858s | 0.000842s | byte equality observed |
| variant_visit.test | 10 | 0.000851s | 0.000843s | 0.000829s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.000813s | 0.000827s | 0.000790s | byte equality observed |
| variant_visit_derived.test | 10 | 0.000802s | 0.000862s | 0.000830s | byte equality observed |
| variant_visit_r.test | 10 | 0.000808s | 0.000813s | 0.000821s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45241427099).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
