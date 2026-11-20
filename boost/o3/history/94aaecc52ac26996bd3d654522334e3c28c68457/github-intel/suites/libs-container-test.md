# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 6.019046 | 29.975329 | 24.452277 | 0.004468 | 0.004510 | 0.006127 |
| vector_options_test.test | RUN | 0.264300 | 1.325327 | 0.992722 | 0.001458 | 0.001550 | 0.001428 |
| uses_allocator_test.test | RUN | 0.044997 | 0.098987 | 0.123528 | 0.000549 | 0.000515 | 0.001219 |
| uses_allocator_construction_test.test | RUN | 0.135655 | 0.378730 | 0.441851 | 0.001139 | 0.001409 | 0.001367 |
| unsynchronized_pool_resource_test.test | RUN | 0.175909 | 1.212068 | 0.584748 | 0.001312 | 0.001310 | 0.001346 |
| tree_test.test | RUN | 0.825405 | 4.538757 | 3.490865 | 0.001154 | 0.001277 | 0.001165 |
| throw_exception_test.test | RUN | 0.099332 | 0.234403 | 0.299497 | 0.001178 | 0.001504 | 0.001314 |
| synchronized_pool_resource_test.test | RUN | 0.177271 | 1.222462 | 0.584623 | 0.001297 | 0.001396 | 0.001327 |
| string_view_compat_test.test | RUN | 0.302365 | 2.415646 | 1.151836 | 0.001155 | 0.001283 | 0.001253 |
| string_test.test | RUN | 1.442573 | 9.388500 | 6.454829 | 0.014404 | 0.012889 | 0.013235 |
| string_options_test.test | RUN | 0.247164 | 1.950523 | 0.903820 | 0.001375 | 0.001571 | 0.001467 |
| static_vector_test.test | RUN | 1.464175 | 7.871246 | 6.429553 | 0.001939 | 0.001997 | 0.001700 |
| static_vector_options_test.test | RUN | 0.168277 | 0.492523 | 0.556318 | 0.001338 | 0.001496 | 0.001504 |
| stable_vector_test.test | RUN | 3.352232 | 16.259995 | 12.733309 | 0.031827 | 0.032560 | 0.033924 |
| small_vector_test.test | RUN | 2.258297 | 11.519066 | 9.006046 | 0.002724 | 0.002486 | 0.005287 |
| small_vector_options_test.test | RUN | 0.312095 | 1.324351 | 1.149747 | 0.001369 | 0.001343 | 0.001284 |
| slist_test.test | RUN | 2.083796 | 10.359671 | 7.887216 | 0.023656 | 0.022888 | 0.023284 |
| set_test.test | RUN | 3.147484 | 19.320863 | 14.652606 | 0.014607 | 0.013049 | 0.013425 |
| segtor_test.test | RUN | 4.006997 | 21.108947 | 16.317166 | 0.722133 | 0.749825 | 0.717393 |
| segtor_options_test.test | RUN | 0.195890 | 0.565295 | 0.683016 | 0.001368 | 0.001467 | 0.001271 |
| scoped_allocator_usage_test.test | RUN | 0.727197 | 3.043008 | 2.622635 | 0.001331 | 0.001403 | 0.001247 |
| scoped_allocator_adaptor_test.test | RUN | 0.298298 | 0.844503 | 1.129551 | 0.001374 | 0.001199 | 0.001239 |
| resource_adaptor_test.test | RUN | 0.160501 | 0.490732 | 0.503365 | 0.001272 | 0.001282 | 0.001256 |
| polymorphic_allocator_test.test | RUN | 0.129034 | 0.391369 | 0.427500 | 0.001247 | 0.001253 | 0.001160 |
| pmr_vector_test.test | RUN | 0.075007 | 0.148008 | 0.215203 | 0.000522 | 0.000546 | 0.001185 |
| pmr_string_test.test | RUN | 0.142553 | 0.314698 | 0.414464 | 0.000529 | 0.000511 | 0.001108 |
| pmr_stable_vector_test.test | RUN | 0.176167 | 0.517454 | 0.583643 | 0.001184 | 0.001216 | 0.001117 |
| pmr_small_vector_test.test | RUN | 0.088629 | 0.202726 | 0.276638 | 0.001209 | 0.001281 | 0.001075 |
| pmr_slist_test.test | RUN | 0.132194 | 0.711239 | 0.596290 | 0.001263 | 0.001212 | 0.001244 |
| pmr_set_test.test | RUN | 0.139292 | 0.344223 | 0.437415 | 0.001155 | 0.001250 | 0.001212 |
| pmr_nest_test.test | RUN | 0.110393 | 0.224748 | 0.293895 | 0.001151 | 0.001455 | 0.001271 |
| pmr_map_test.test | RUN | 0.147999 | 0.355255 | 0.437812 | 0.001250 | 0.001091 | 0.001286 |
| pmr_list_test.test | RUN | 0.096840 | 0.221924 | 0.284200 | 0.001298 | 0.001326 | 0.001287 |
| pmr_hub_test.test | RUN | 0.138774 | 0.301995 | 0.351549 | 0.001286 | 0.001257 | 0.001195 |
| pmr_flat_set_test.test | RUN | 0.107391 | 0.237753 | 0.310493 | 0.001133 | 0.001213 | 0.001279 |
| pmr_flat_map_test.test | RUN | 0.127156 | 0.279569 | 0.366015 | 0.001370 | 0.001220 | 0.001075 |
| pmr_devector_test.test | RUN | 0.088050 | 0.237601 | 0.274698 | 0.001247 | 0.001158 | 0.001065 |
| pmr_deque_test.test | RUN | 0.086156 | 0.204320 | 0.279895 | 0.001374 | 0.001463 | 0.001134 |
| pair_test.test | RUN | 0.209107 | 0.485194 | 0.614111 | 0.001334 | 0.001218 | 0.001390 |
| null_iterators_test.test | RUN | 0.331634 | 0.936507 | 1.027061 | 0.001285 | 0.001276 | 0.001267 |
| node_handle_test.test | RUN | 0.144649 | 1.205822 | 0.423828 | 0.001212 | 0.001228 | 0.001162 |
| node_allocator_test.test | RUN | 2.448603 | 12.886291 | 9.882197 | 0.009194 | 0.008935 | 0.009118 |
| new_delete_resource_test.test | RUN | 0.178947 | 0.720296 | 0.586185 | 0.002122 | 0.001972 | 0.001922 |
| nest_test.test | RUN | 0.505226 | 3.445581 | 2.082316 | 0.001331 | 0.001376 | 0.001264 |
| nest_api_test.test | RUN | 0.738125 | 6.655255 | 4.007836 | 0.002340 | 0.002550 | 0.002332 |
| monotonic_buffer_resource_test.test | RUN | 0.179358 | 1.320890 | 0.599826 | 0.001300 | 0.001517 | 0.001167 |
| memory_resource_test.test | RUN | 0.106319 | 0.367053 | 0.342963 | 0.001336 | 0.001400 | 0.001323 |
| map_test.test | RUN | 4.346712 | 21.729643 | 20.482129 | 0.011101 | 0.010001 | 0.009633 |
| list_test.test | RUN | 2.238968 | 11.387085 | 8.784710 | 0.022762 | 0.022293 | 0.022029 |
| is_constructible_test.test | RUN | 0.064082 | 0.129549 | 0.182303 | 0.000524 | 0.000540 | 0.001352 |
| insert_vs_emplace_test.test | RUN | 0.211657 | 0.858476 | 1.156812 | 0.001345 | 0.001356 | 0.001262 |
| hub_uses_allocator_test.test | RUN | 0.235149 | 0.741734 | 0.803625 | 0.001363 | 0.001506 | 0.001408 |
| hub_stability_test.test | RUN | 0.546569 | 3.504541 | 2.923524 | 0.001578 | 0.001600 | 0.001506 |
| hub_sort_test.test | RUN | 0.343076 | 1.578542 | 1.344996 | 0.527552 | 0.548862 | 0.503551 |
| hub_pocxx_test.test | RUN | 0.299339 | 1.891493 | 0.984541 | 0.001286 | 0.001436 | 0.001295 |
| hub_new_extended_alignment_test.test | RUN | 0.161131 | 0.547132 | 0.528134 | 0.001303 | 0.001272 | 0.001317 |
| hub_exception_safety_test.test | RUN | 0.652682 | 4.389166 | 2.915829 | 0.076518 | 0.069503 | 0.065383 |
| hub_empty_sort_test.test | RUN | 0.185867 | 0.509971 | 0.600911 | 0.001424 | 0.001532 | 0.001158 |
| hub_api_test.test | RUN | 2.215458 | 17.633225 | 9.535934 | 0.003660 | 0.003414 | 0.003246 |
| global_resource_test.test | RUN | 0.102878 | 0.339035 | 0.303125 | 0.001471 | 0.001259 | 0.001353 |
| flat_tree_test.test | RUN | 4.061867 | 27.881249 | 17.653432 | 0.001330 | 0.001272 | 0.001138 |
| flat_set_test.test | RUN | 5.102779 | 34.696696 | 23.176022 | 0.007694 | 0.006899 | 0.007143 |
| flat_set_adaptor_test.test | RUN | 3.778112 | 30.709739 | 17.962006 | 0.007860 | 0.007151 | 0.007310 |
| flat_map_test.test | RUN | 8.280398 | 52.203223 | 37.168331 | 0.008833 | 0.008234 | 0.007605 |
| flat_map_adaptor_test.test | RUN | 5.208687 | 37.792152 | 26.065151 | 0.008095 | 0.007505 | 0.007372 |
| explicit_inst_vector_test.test | RUN | 0.802686 | 5.139244 | 4.016128 | 0.001377 | 0.001421 | 0.001388 |
| explicit_inst_string_test.test | RUN | 1.085837 | 9.058834 | 5.724778 | 0.001371 | 0.001373 | 0.001205 |
| explicit_inst_static_vector_test.test | RUN | 0.098235 | 0.321995 | 0.386789 | 0.001328 | 0.001406 | 0.001237 |
| explicit_inst_stable_vector_test.test | RUN | 0.644316 | 3.285243 | 2.618639 | 0.001616 | 0.001267 | 0.001130 |
| explicit_inst_small_vector_test.test | RUN | 0.531485 | 2.924659 | 2.313873 | 0.001494 | 0.001490 | 0.001268 |
| explicit_inst_slist_test.test | RUN | 0.399076 | 2.657931 | 1.805767 | 0.001232 | 0.001350 | 0.001193 |
| explicit_inst_set_test.test | RUN | 0.567331 | 3.046934 | 2.094458 | 0.001522 | 0.001308 | 0.001133 |
| explicit_inst_map_test.test | RUN | 0.629311 | 3.212096 | 2.297394 | 0.001514 | 0.001463 | 0.001206 |
| explicit_inst_list_test.test | RUN | 0.141534 | 0.725840 | 0.583668 | 0.001452 | 0.001261 | 0.001256 |
| explicit_inst_flat_set_test.test | RUN | 3.376650 | 23.347211 | 13.558912 | 0.001259 | 0.001377 | 0.001316 |
| explicit_inst_flat_map_test.test | RUN | 3.647207 | 24.179722 | 15.214817 | 0.001430 | 0.001298 | 0.001256 |
| explicit_inst_devector_test.test | RUN | 0.437558 | 2.847463 | 1.884040 | 0.001328 | 0.001335 | 0.001188 |
| explicit_inst_deque_test.test | RUN | 0.448181 | 3.110994 | 2.029999 | 0.001333 | 0.001204 | 0.001189 |
| devector_test.test | RUN | 6.570287 | 37.965278 | 27.931722 | 0.003370 | 0.003199 | 0.003804 |
| devector_options_test.test | RUN | 0.278777 | 1.689934 | 1.094866 | 0.001607 | 0.001491 | 0.001437 |
| deque_test.test | RUN | 4.372652 | 22.438111 | 16.912990 | 0.365757 | 0.362817 | 0.439611 |
| deque_options_test.test | RUN | 0.198149 | 0.600008 | 0.735016 | 0.001392 | 0.001451 | 0.001339 |
| copy_move_algo_test.test | RUN | 0.196105 | 0.731494 | 0.663510 | 0.001825 | 0.001401 | 0.001553 |
| common_iterator_test.test | RUN | 0.014208 | 0.036213 | 0.036870 | 0.000570 | 0.000482 | 0.001178 |
| boost_iterator_comp_test.test | RUN | 0.280283 | 0.863344 | 1.004880 | 0.001216 | 0.001337 | 0.001180 |
| allocator_traits_test.test | RUN | 0.158646 | 0.358084 | 0.466580 | 0.001461 | 0.001322 | 0.001351 |
| alloc_full_test.test | RUN | 0.186423 | 0.820496 | 0.701944 | 0.003962 | 0.004016 | 0.004073 |
| alloc_basic_test.test | RUN | 0.154966 | 0.573404 | 0.521734 | 0.001330 | 0.001346 | 0.001324 |
| adaptive_pool_test.test | RUN | 1.798713 | 9.535714 | 7.024054 | 0.008993 | 0.008015 | 0.008858 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.010× | 1.008×, 1.011× | 1.002× |
| clang | 1.067× | 1.065×, 1.070× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44656576225).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 3 | 0.009103s | 0.008360s | 0.009177s | byte equality observed |
| alloc_basic_test.test | 10 | 0.000838s | 0.000816s | 0.000807s | byte equality observed |
| alloc_full_test.test | 7 | 0.002750s | 0.002767s | 0.002824s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000780s | 0.000772s | 0.000770s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.000819s | 0.000816s | 0.000801s | byte equality observed |
| common_iterator_test.test | 10 | 0.000371s | 0.000374s | 0.000770s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001195s | 0.000920s | 0.001012s | byte equality observed |
| deque_options_test.test | 10 | 0.000863s | 0.000829s | 0.000867s | byte equality observed |
| deque_test.test | 1 | 0.372825s | 0.371194s | 0.446257s | byte equality observed |
| devector_options_test.test | 10 | 0.000911s | 0.000852s | 0.000846s | byte equality observed |
| devector_test.test | 5 | 0.002919s | 0.002825s | 0.003645s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000731s | 0.000711s | 0.000716s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000719s | 0.000697s | 0.000719s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000736s | 0.000716s | 0.000730s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000731s | 0.000746s | 0.000722s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000727s | 0.000716s | 0.000714s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000724s | 0.000724s | 0.000746s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000738s | 0.000726s | 0.000734s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000733s | 0.000722s | 0.000723s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000732s | 0.000725s | 0.000743s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000725s | 0.000741s | 0.000733s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000715s | 0.000739s | 0.000733s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000733s | 0.000740s | 0.000740s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000733s | 0.000741s | 0.000749s | byte equality observed |
| flat_map_adaptor_test.test | 4 | 0.005720s | 0.005401s | 0.005552s | byte equality observed |
| flat_map_test.test | 4 | 0.006284s | 0.005822s | 0.005565s | byte equality observed |
| flat_set_adaptor_test.test | 4 | 0.005554s | 0.005071s | 0.005356s | byte equality observed |
| flat_set_test.test | 4 | 0.005492s | 0.004888s | 0.005221s | byte equality observed |
| flat_tree_test.test | 10 | 0.000751s | 0.000762s | 0.000756s | byte equality observed |
| global_resource_test.test | 10 | 0.000773s | 0.000771s | 0.000779s | byte equality observed |
| hub_api_test.test | 8 | 0.002574s | 0.002253s | 0.002186s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000760s | 0.000754s | 0.000748s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.056074s | 0.058967s | 0.053914s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.000835s | 0.000828s | 0.000791s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.000812s | 0.000798s | 0.000759s | byte equality observed |
| hub_sort_test.test | 1 | 0.431603s | 0.455549s | 0.413964s | byte equality observed |
| hub_stability_test.test | 10 | 0.000986s | 0.000989s | 0.001003s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000759s | 0.000755s | 0.000747s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000784s | 0.000792s | 0.000756s | byte equality observed |
| is_constructible_test.test | 10 | 0.000357s | 0.000359s | 0.000713s | byte equality observed |
| list_test.test | 2 | 0.015636s | 0.015800s | 0.016017s | byte equality observed |
| map_test.test | 3 | 0.007669s | 0.007472s | 0.007216s | byte equality observed |
| memory_resource_test.test | 10 | 0.000781s | 0.000784s | 0.000753s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000788s | 0.000795s | 0.000765s | byte equality observed |
| nest_api_test.test | 10 | 0.001644s | 0.001657s | 0.001668s | byte equality observed |
| nest_test.test | 10 | 0.000812s | 0.000799s | 0.000791s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001148s | 0.001136s | 0.001131s | byte equality observed |
| node_allocator_test.test | 3 | 0.006716s | 0.006746s | 0.006672s | byte equality observed |
| node_handle_test.test | 10 | 0.000786s | 0.000792s | 0.000760s | byte equality observed |
| null_iterators_test.test | 10 | 0.000775s | 0.000767s | 0.000761s | byte equality observed |
| pair_test.test | 10 | 0.000759s | 0.000762s | 0.000748s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000746s | 0.000765s | 0.000736s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000755s | 0.000738s | 0.000738s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000740s | 0.000745s | 0.000735s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000751s | 0.000737s | 0.000742s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000751s | 0.000742s | 0.000736s | byte equality observed |
| pmr_list_test.test | 10 | 0.000749s | 0.000730s | 0.000744s | byte equality observed |
| pmr_map_test.test | 10 | 0.000746s | 0.000749s | 0.000745s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000738s | 0.000735s | 0.000750s | byte equality observed |
| pmr_set_test.test | 10 | 0.000739s | 0.000726s | 0.000753s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000745s | 0.000736s | 0.000745s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000740s | 0.000732s | 0.000738s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000756s | 0.000748s | 0.000749s | byte equality observed |
| pmr_string_test.test | 10 | 0.000363s | 0.000364s | 0.000761s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000354s | 0.000354s | 0.000780s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.000797s | 0.000773s | 0.000784s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.000776s | 0.000773s | 0.000828s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.000764s | 0.000757s | 0.000829s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.000783s | 0.000753s | 0.000809s | byte equality observed |
| segtor_options_test.test | 10 | 0.000823s | 0.000803s | 0.000835s | byte equality observed |
| segtor_test.test | 1 | 0.458576s | 0.462379s | 0.494945s | byte equality observed |
| set_test.test | 2 | 0.010734s | 0.009707s | 0.010323s | byte equality observed |
| slist_test.test | 2 | 0.016553s | 0.016544s | 0.016071s | byte equality observed |
| small_vector_options_test.test | 10 | 0.000885s | 0.000855s | 0.000835s | byte equality observed |
| small_vector_test.test | 7 | 0.001710s | 0.001616s | 0.002781s | byte equality observed |
| stable_vector_test.test | 1 | 0.027786s | 0.028089s | 0.028616s | byte equality observed |
| static_vector_options_test.test | 10 | 0.000838s | 0.000821s | 0.000822s | byte equality observed |
| static_vector_test.test | 10 | 0.001084s | 0.001007s | 0.001040s | byte equality observed |
| string_options_test.test | 10 | 0.000795s | 0.000799s | 0.000796s | byte equality observed |
| string_test.test | 3 | 0.009239s | 0.009026s | 0.009291s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000774s | 0.000766s | 0.000751s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.000802s | 0.000794s | 0.000787s | byte equality observed |
| throw_exception_test.test | 10 | 0.000750s | 0.000745s | 0.000743s | byte equality observed |
| tree_test.test | 10 | 0.000738s | 0.000746s | 0.000745s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.000793s | 0.000786s | 0.000787s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000726s | 0.000750s | 0.000750s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000347s | 0.000350s | 0.000729s | byte equality observed |
| vector_options_test.test | 10 | 0.000871s | 0.000862s | 0.000860s | byte equality observed |
| vector_test.test | 5 | 0.003013s | 0.002990s | 0.003969s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44656576225).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
