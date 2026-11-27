# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.090687 | 0.216835 | 0.258801 | 0.001170 | 0.000503 | 0.001147 |
| variant_size.test | RUN | 0.160463 | 0.522794 | 0.512238 | 0.001244 | 0.001201 | 0.001115 |
| variant_alternative.test | RUN | 0.216297 | 1.728894 | 0.919460 | 0.001306 | 0.001228 | 0.001018 |
| variant_holds_alternative.test | RUN | 0.149896 | 0.387454 | 0.520964 | 0.001227 | 0.001271 | 0.001058 |
| variant_holds_alternative_cx.test | COMPILE | 0.095633 | 0.223721 | 0.289561 | — | — | — |
| variant_get_by_index.test | RUN | 0.242066 | 1.873508 | 1.153457 | 0.001332 | 0.001380 | 0.001327 |
| variant_get_by_index_cx.test | COMPILE | 0.096810 | 0.232290 | 0.301561 | — | — | — |
| variant_get_by_type.test | RUN | 0.260065 | 2.053966 | 1.217822 | 0.001201 | 0.001339 | 0.001105 |
| variant_get_by_type_cx.test | COMPILE | 0.087614 | 0.207620 | 0.254968 | — | — | — |
| variant_default_construct.test | RUN | 0.238804 | 1.493712 | 0.976499 | 0.001117 | 0.001428 | 0.001105 |
| variant_default_construct_cx.test | COMPILE | 0.098699 | 0.213778 | 0.302454 | — | — | — |
| variant_copy_construct.test | RUN | 0.374533 | 2.442788 | 1.761790 | 0.001214 | 0.001141 | 0.001208 |
| variant_copy_construct_cx.test | COMPILE | 0.109534 | 0.248190 | 0.360025 | — | — | — |
| variant_move_construct.test | RUN | 0.344051 | 2.157835 | 1.607693 | 0.001245 | 0.000949 | 0.001076 |
| variant_move_construct_cx.test | COMPILE | 0.087262 | 0.207111 | 0.266534 | — | — | — |
| variant_value_construct.test | RUN | 0.180942 | 0.536573 | 0.681549 | 0.001098 | 0.001298 | 0.001127 |
| variant_value_construct_cx.test | COMPILE | 0.100855 | 0.239473 | 0.314766 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.189936 | 0.540034 | 0.681030 | 0.001224 | 0.001305 | 0.001387 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.091271 | 0.232763 | 0.308196 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.180190 | 0.530455 | 0.660261 | 0.001124 | 0.001258 | 0.001076 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.102364 | 0.234097 | 0.305823 | — | — | — |
| variant_copy_assign.test | RUN | 0.255492 | 1.718882 | 1.073155 | 0.001250 | 0.001127 | 0.001088 |
| variant_copy_assign_cx.test | COMPILE | 0.088003 | 0.202538 | 0.241555 | — | — | — |
| variant_move_assign.test | RUN | 0.253045 | 1.734653 | 1.081349 | 0.001399 | 0.001313 | 0.001178 |
| variant_move_assign_cx.test | COMPILE | 0.089563 | 0.200822 | 0.242986 | — | — | — |
| variant_value_assign.test | RUN | 0.188291 | 0.583549 | 0.721733 | 0.001226 | 0.001198 | 0.001078 |
| variant_value_assign_cx.test | COMPILE | 0.090922 | 0.200683 | 0.248594 | — | — | — |
| variant_emplace_index.test | RUN | 0.214857 | 0.698130 | 0.807700 | 0.001258 | 0.001225 | 0.001141 |
| variant_emplace_index_cx.test | COMPILE | 0.087395 | 0.196545 | 0.260546 | — | — | — |
| variant_emplace_type.test | RUN | 0.191462 | 0.582733 | 0.715745 | 0.001154 | 0.001204 | 0.001126 |
| variant_emplace_type_cx.test | COMPILE | 0.088502 | 0.202364 | 0.255030 | — | — | — |
| variant_swap.test | RUN | 0.201160 | 0.733841 | 0.760749 | 0.001281 | 0.001217 | 0.001077 |
| variant_eq_ne.test | RUN | 0.161120 | 0.445172 | 0.553192 | 0.001107 | 0.001291 | 0.001133 |
| variant_eq_ne_cx.test | COMPILE | 0.090186 | 0.198748 | 0.249251 | — | — | — |
| variant_lt_gt.test | RUN | 0.164338 | 0.501405 | 0.579588 | 0.001220 | 0.001205 | 0.001137 |
| variant_lt_gt_cx.test | COMPILE | 0.086266 | 0.198828 | 0.250880 | — | — | — |
| variant_destroy.test | RUN | 0.174592 | 0.501111 | 0.612909 | 0.001141 | 0.001250 | 0.001112 |
| variant_visit.test | RUN | 1.051243 | 3.833750 | 10.614521 | 0.001002 | 0.001368 | 0.001161 |
| variant_convert_construct.test | RUN | 0.215460 | 0.647896 | 0.838334 | 0.001153 | 0.001192 | 0.001156 |
| variant_subset.test | RUN | 0.220859 | 0.730063 | 0.905938 | 0.001338 | 0.001452 | 0.001154 |
| variant_valueless.test | RUN | 0.158745 | 0.437309 | 0.581225 | 0.001228 | 0.001280 | 0.001137 |
| variant_copy_construct_throw.test | RUN | 0.123843 | 0.335523 | 0.415805 | 0.001175 | 0.001292 | 0.001022 |
| variant_move_construct_throw.test | RUN | 0.124787 | 0.330242 | 0.409248 | 0.001183 | 0.001272 | 0.001206 |
| variant_convert_construct_throw.test | RUN | 0.125253 | 0.368201 | 0.444056 | 0.001076 | 0.001285 | 0.001156 |
| variant_copy_assign_throw.test | RUN | 0.121559 | 0.319358 | 0.408857 | 0.001062 | 0.001210 | 0.001067 |
| variant_move_assign_throw.test | RUN | 0.117294 | 0.316146 | 0.406463 | 0.001072 | 0.001256 | 0.001196 |
| variant_get_by_index_nx.test | RUN | 0.308653 | 1.607980 | 1.092649 | 0.001144 | 0.001250 | 0.001281 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.094836 | 0.239214 | 0.296103 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.302267 | 1.780805 | 1.176697 | 0.001305 | 0.001244 | 0.001223 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.082384 | 0.204436 | 0.252708 | — | — | — |
| variant_subset_nx.test | RUN | 0.227025 | 0.685972 | 0.910304 | 0.001254 | 0.001080 | 0.001130 |
| variant_hash.test | RUN | 0.224669 | 0.789339 | 0.819616 | 0.001271 | 0.001408 | 0.001272 |
| variant_trivial.test | RUN | 1.257785 | 4.460256 | 5.955998 | 0.001177 | 0.001333 | 0.001351 |
| variant_special.test | RUN | 1.225169 | 4.780757 | 6.331478 | 0.001250 | 0.001350 | 0.001318 |
| variant_visit_derived.test | RUN | 0.150464 | 0.408500 | 0.629423 | 0.001296 | 0.001358 | 0.001289 |
| variant_many_types.test | RUN | 1.353661 | 6.159053 | 8.886714 | 0.001191 | 0.001236 | 0.001112 |
| variant_visit_r.test | RUN | 0.582069 | 1.928067 | 3.416867 | 0.001340 | 0.001171 | 0.001124 |
| variant_derived_construct.test | COMPILE | 0.087891 | 0.188705 | 0.270702 | — | — | — |
| variant_visit_by_index.test | RUN | 0.195854 | 0.519961 | 0.794785 | 0.001224 | 0.001276 | 0.001200 |
| variant_ostream_insert.test | RUN | 0.149163 | 0.451911 | 0.498700 | 0.001357 | 0.001258 | 0.001135 |
| is_output_streamable.test | RUN | 0.187848 | 0.898490 | 0.718676 | 0.001111 | 0.001299 | 0.001243 |
| variant_json_value_from.test | RUN | 0.281956 | 0.744500 | 0.984825 | 0.001604 | 0.001231 | 0.001279 |
| variant_json_value_to.test | RUN | 0.353233 | 1.004131 | 1.274973 | 0.001235 | 0.001296 | 0.001205 |
| variant_uses_double_storage.test | COMPILE | 0.092991 | 0.210788 | 0.303826 | — | — | — |
| variant_derived_construct2.test | RUN | 0.134034 | 0.342791 | 0.456502 | 0.001220 | 0.001330 | 0.001074 |
| variant_visit_cx.test | COMPILE | 0.088395 | 0.203273 | 0.249816 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.087448 | 0.198904 | 0.250954 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.086861 | 0.199601 | 0.242392 | — | — | — |
| variant_index_type_126.test | RUN | 0.790545 | 1.907673 | 3.752956 | 0.001336 | 0.001214 | 0.001160 |
| variant_index_type_127.test | RUN | 0.822075 | 1.905568 | 3.746034 | 0.001122 | 0.001327 | 0.001401 |
| variant_index_type_128.test | RUN | 0.825414 | 1.986378 | 3.953954 | 0.001149 | 0.001187 | 0.001277 |
| variant_index_type_129.test | RUN | 0.814619 | 1.965389 | 3.879113 | 0.001137 | 0.001353 | 0.001288 |
| variant_index_type_254.test | RUN | 2.850572 | 7.637039 | 12.304969 | 0.001160 | 0.001294 | 0.001210 |
| variant_index_type_255.test | RUN | 2.890869 | 7.707526 | 12.327488 | 0.001242 | 0.001200 | 0.001193 |
| variant_index_type_256.test | RUN | 2.889779 | 8.013862 | 12.413147 | 0.001118 | 0.001202 | 0.001169 |
| variant_index_type_257.test | RUN | 2.915394 | 8.054618 | 12.529347 | 0.001065 | 0.000921 | 0.001057 |
| variant_default_construct_cx_2.test | COMPILE | 0.088780 | 0.193841 | 0.248915 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.081739 | 0.199106 | 0.254647 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.084014 | 0.202949 | 0.251939 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.084704 | 0.202031 | 0.250157 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.086005 | 0.198768 | 0.252359 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.083807 | 0.210835 | 0.222615 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.082826 | 0.193126 | 0.218771 | — | — | — |
| variant_issue_55.test | RUN | 0.129519 | 0.380605 | 0.378441 | 0.000887 | 0.000966 | 0.000904 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.981× | 0.978×, 0.983× | 0.992× |
| clang | 0.993× | 0.986×, 0.999× | 0.995× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46032707836).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.000790s | 0.000802s | 0.000790s | byte equality observed |
| quick.test | 10 | 0.000800s | 0.000369s | 0.000775s | byte equality observed |
| variant_alternative.test | 10 | 0.000824s | 0.000791s | 0.000785s | byte equality observed |
| variant_convert_construct.test | 10 | 0.000817s | 0.000813s | 0.000803s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.000832s | 0.000827s | 0.000827s | byte equality observed |
| variant_copy_assign.test | 10 | 0.000821s | 0.000822s | 0.000817s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.000818s | 0.000827s | 0.000804s | byte equality observed |
| variant_copy_construct.test | 10 | 0.000826s | 0.000841s | 0.000807s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.000848s | 0.000810s | 0.000849s | byte equality observed |
| variant_default_construct.test | 10 | 0.000834s | 0.000821s | 0.000825s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.000814s | 0.000791s | 0.000810s | byte equality observed |
| variant_destroy.test | 10 | 0.000825s | 0.000799s | 0.000829s | byte equality observed |
| variant_emplace_index.test | 10 | 0.000830s | 0.000795s | 0.000817s | byte equality observed |
| variant_emplace_type.test | 10 | 0.000819s | 0.000803s | 0.000810s | byte equality observed |
| variant_eq_ne.test | 10 | 0.000829s | 0.000810s | 0.000795s | byte equality observed |
| variant_get_by_index.test | 10 | 0.000845s | 0.000856s | 0.000835s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.000826s | 0.000819s | 0.000800s | byte equality observed |
| variant_get_by_type.test | 10 | 0.000850s | 0.000863s | 0.000831s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.000804s | 0.000803s | 0.000831s | byte equality observed |
| variant_hash.test | 10 | 0.000816s | 0.000820s | 0.000790s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.000801s | 0.000809s | 0.000804s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.000795s | 0.000799s | 0.000808s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.000809s | 0.000808s | 0.000811s | byte equality observed |
| variant_index_type_126.test | 10 | 0.000822s | 0.000811s | 0.000834s | byte equality observed |
| variant_index_type_127.test | 10 | 0.000797s | 0.000813s | 0.000817s | byte equality observed |
| variant_index_type_128.test | 10 | 0.000827s | 0.000785s | 0.000797s | byte equality observed |
| variant_index_type_129.test | 10 | 0.000838s | 0.000785s | 0.000840s | byte equality observed |
| variant_index_type_254.test | 10 | 0.000831s | 0.000768s | 0.000818s | byte equality observed |
| variant_index_type_255.test | 10 | 0.000820s | 0.000815s | 0.000807s | byte equality observed |
| variant_index_type_256.test | 10 | 0.000814s | 0.000805s | 0.000828s | byte equality observed |
| variant_index_type_257.test | 10 | 0.000805s | 0.000812s | 0.000818s | byte equality observed |
| variant_issue_55.test | 10 | 0.000805s | 0.000823s | 0.000809s | byte equality observed |
| variant_json_value_from.test | 10 | 0.000832s | 0.000839s | 0.000818s | byte equality observed |
| variant_json_value_to.test | 10 | 0.000847s | 0.000833s | 0.000816s | byte equality observed |
| variant_lt_gt.test | 10 | 0.000814s | 0.000813s | 0.000791s | byte equality observed |
| variant_many_types.test | 10 | 0.000855s | 0.000841s | 0.000832s | byte equality observed |
| variant_move_assign.test | 10 | 0.000812s | 0.000827s | 0.000819s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.000846s | 0.000851s | 0.000847s | byte equality observed |
| variant_move_construct.test | 10 | 0.000804s | 0.000800s | 0.000796s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.000840s | 0.000825s | 0.000851s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.000837s | 0.000844s | 0.000833s | byte equality observed |
| variant_size.test | 10 | 0.000795s | 0.000836s | 0.000796s | byte equality observed |
| variant_special.test | 10 | 0.000857s | 0.000847s | 0.000822s | byte equality observed |
| variant_subset.test | 10 | 0.000837s | 0.000825s | 0.000836s | byte equality observed |
| variant_subset_nx.test | 10 | 0.000808s | 0.000780s | 0.000823s | byte equality observed |
| variant_swap.test | 10 | 0.000815s | 0.000799s | 0.000814s | byte equality observed |
| variant_trivial.test | 10 | 0.000818s | 0.000848s | 0.000840s | byte equality observed |
| variant_value_assign.test | 10 | 0.000819s | 0.000814s | 0.000805s | byte equality observed |
| variant_value_construct.test | 10 | 0.000812s | 0.000817s | 0.000798s | byte equality observed |
| variant_valueless.test | 10 | 0.000850s | 0.000827s | 0.000863s | byte equality observed |
| variant_visit.test | 10 | 0.000819s | 0.000789s | 0.000816s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.000828s | 0.000819s | 0.000805s | byte equality observed |
| variant_visit_derived.test | 10 | 0.000806s | 0.000804s | 0.000827s | byte equality observed |
| variant_visit_r.test | 10 | 0.000780s | 0.000793s | 0.000775s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46032707836).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
