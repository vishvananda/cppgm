# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 5.997181 | 30.449721 | 24.276974 | 0.004786 | 0.004772 | 0.005807 |
| vector_options_test.test | RUN | 0.266891 | 1.300003 | 0.993349 | 0.001482 | 0.001530 | 0.001510 |
| uses_allocator_test.test | RUN | 0.045945 | 0.100485 | 0.122599 | 0.000624 | 0.000406 | 0.001336 |
| uses_allocator_construction_test.test | RUN | 0.137362 | 0.388770 | 0.438248 | 0.001571 | 0.001485 | 0.001353 |
| unsynchronized_pool_resource_test.test | RUN | 0.185332 | 1.231714 | 0.571255 | 0.001578 | 0.001332 | 0.001423 |
| tree_test.test | RUN | 0.845488 | 4.538029 | 3.339500 | 0.001543 | 0.001494 | 0.001285 |
| throw_exception_test.test | RUN | 0.098543 | 0.250592 | 0.287327 | 0.001236 | 0.001250 | 0.001363 |
| synchronized_pool_resource_test.test | RUN | 0.182813 | 1.207081 | 0.575290 | 0.001557 | 0.001444 | 0.001472 |
| string_view_compat_test.test | RUN | 0.310070 | 2.448792 | 1.122956 | 0.001484 | 0.001524 | 0.001344 |
| string_test.test | RUN | 1.459540 | 9.538735 | 6.396020 | 0.013556 | 0.012884 | 0.013273 |
| string_options_test.test | RUN | 0.256759 | 1.959926 | 0.989150 | 0.001277 | 0.001651 | 0.001418 |
| static_vector_test.test | RUN | 1.492998 | 7.827791 | 6.449741 | 0.001878 | 0.001745 | 0.001810 |
| static_vector_options_test.test | RUN | 0.174967 | 0.500534 | 0.551112 | 0.001472 | 0.001458 | 0.001454 |
| stable_vector_test.test | RUN | 3.474274 | 16.784479 | 12.391535 | 0.031785 | 0.032403 | 0.033056 |
| small_vector_test.test | RUN | 2.250231 | 11.661840 | 9.067346 | 0.003094 | 0.002770 | 0.004494 |
| small_vector_options_test.test | RUN | 0.309946 | 1.372525 | 1.124555 | 0.001570 | 0.001504 | 0.001315 |
| slist_test.test | RUN | 2.074323 | 10.528178 | 7.931847 | 0.022851 | 0.023379 | 0.021990 |
| set_test.test | RUN | 3.194359 | 19.801648 | 14.415771 | 0.014210 | 0.012900 | 0.013593 |
| segtor_test.test | RUN | 4.080123 | 21.482047 | 16.419564 | 0.729974 | 0.736553 | 0.719486 |
| segtor_options_test.test | RUN | 0.195844 | 0.611799 | 0.707629 | 0.001480 | 0.001413 | 0.001358 |
| scoped_allocator_usage_test.test | RUN | 0.738933 | 3.144616 | 2.646922 | 0.001439 | 0.001446 | 0.001186 |
| scoped_allocator_adaptor_test.test | RUN | 0.306396 | 0.845557 | 1.135460 | 0.001338 | 0.001466 | 0.001198 |
| resource_adaptor_test.test | RUN | 0.157410 | 0.501422 | 0.498929 | 0.001388 | 0.001518 | 0.001300 |
| polymorphic_allocator_test.test | RUN | 0.136261 | 0.401358 | 0.403420 | 0.001294 | 0.001362 | 0.001192 |
| pmr_vector_test.test | RUN | 0.073838 | 0.149364 | 0.198404 | 0.000551 | 0.000500 | 0.001228 |
| pmr_string_test.test | RUN | 0.146184 | 0.316244 | 0.421947 | 0.000519 | 0.000645 | 0.001125 |
| pmr_stable_vector_test.test | RUN | 0.172616 | 0.529602 | 0.584412 | 0.001297 | 0.001492 | 0.001135 |
| pmr_small_vector_test.test | RUN | 0.087758 | 0.207223 | 0.274813 | 0.001287 | 0.001206 | 0.001301 |
| pmr_slist_test.test | RUN | 0.131246 | 0.720186 | 0.606872 | 0.001368 | 0.001268 | 0.001233 |
| pmr_set_test.test | RUN | 0.142317 | 0.352915 | 0.414438 | 0.001303 | 0.001369 | 0.001141 |
| pmr_nest_test.test | RUN | 0.114655 | 0.243786 | 0.283315 | 0.001298 | 0.001427 | 0.001360 |
| pmr_map_test.test | RUN | 0.151690 | 0.361165 | 0.433263 | 0.001241 | 0.001235 | 0.001152 |
| pmr_list_test.test | RUN | 0.099986 | 0.226770 | 0.304985 | 0.001435 | 0.001260 | 0.001312 |
| pmr_hub_test.test | RUN | 0.139108 | 0.318394 | 0.381027 | 0.001439 | 0.001321 | 0.001262 |
| pmr_flat_set_test.test | RUN | 0.110389 | 0.243697 | 0.308236 | 0.001398 | 0.001284 | 0.001159 |
| pmr_flat_map_test.test | RUN | 0.129872 | 0.280033 | 0.384838 | 0.001286 | 0.001266 | 0.001163 |
| pmr_devector_test.test | RUN | 0.088020 | 0.245207 | 0.266610 | 0.001369 | 0.001419 | 0.001177 |
| pmr_deque_test.test | RUN | 0.083357 | 0.204366 | 0.267648 | 0.001331 | 0.001427 | 0.001437 |
| pair_test.test | RUN | 0.213304 | 0.494455 | 0.624043 | 0.001573 | 0.001424 | 0.001272 |
| null_iterators_test.test | RUN | 0.342904 | 0.963942 | 1.008338 | 0.001293 | 0.001499 | 0.001267 |
| node_handle_test.test | RUN | 0.146557 | 1.233931 | 0.428332 | 0.001540 | 0.001508 | 0.001358 |
| node_allocator_test.test | RUN | 2.350011 | 12.951826 | 9.883086 | 0.009643 | 0.009447 | 0.009323 |
| new_delete_resource_test.test | RUN | 0.178133 | 0.731189 | 0.580209 | 0.001829 | 0.001908 | 0.001880 |
| nest_test.test | RUN | 0.493104 | 3.433633 | 2.124390 | 0.001562 | 0.001485 | 0.001326 |
| nest_api_test.test | RUN | 0.841858 | 6.626776 | 4.256390 | 0.002368 | 0.002396 | 0.002356 |
| monotonic_buffer_resource_test.test | RUN | 0.181915 | 1.341737 | 0.604019 | 0.001404 | 0.001606 | 0.001255 |
| memory_resource_test.test | RUN | 0.105988 | 0.352103 | 0.342334 | 0.001377 | 0.001216 | 0.001300 |
| map_test.test | RUN | 4.407378 | 21.851464 | 21.073300 | 0.010983 | 0.010258 | 0.010075 |
| list_test.test | RUN | 2.218940 | 11.290707 | 8.781289 | 0.022255 | 0.022062 | 0.022646 |
| is_constructible_test.test | RUN | 0.065171 | 0.131744 | 0.185920 | 0.000631 | 0.000571 | 0.001306 |
| insert_vs_emplace_test.test | RUN | 0.218359 | 0.862492 | 1.156228 | 0.001414 | 0.001507 | 0.001375 |
| hub_uses_allocator_test.test | RUN | 0.238909 | 0.738136 | 0.792410 | 0.001348 | 0.001484 | 0.001310 |
| hub_stability_test.test | RUN | 0.542846 | 3.531025 | 2.875621 | 0.001690 | 0.001712 | 0.001822 |
| hub_sort_test.test | RUN | 0.341700 | 1.568675 | 1.380469 | 0.544936 | 0.549630 | 0.507601 |
| hub_pocxx_test.test | RUN | 0.312406 | 1.849223 | 0.991732 | 0.001316 | 0.001382 | 0.001302 |
| hub_new_extended_alignment_test.test | RUN | 0.163452 | 0.532575 | 0.528513 | 0.001279 | 0.001440 | 0.001372 |
| hub_exception_safety_test.test | RUN | 0.624028 | 4.463287 | 2.945189 | 0.070702 | 0.071868 | 0.071213 |
| hub_empty_sort_test.test | RUN | 0.185903 | 0.503524 | 0.610440 | 0.001357 | 0.001536 | 0.001249 |
| hub_api_test.test | RUN | 2.113567 | 17.830307 | 9.557218 | 0.003841 | 0.003475 | 0.003437 |
| global_resource_test.test | RUN | 0.101419 | 0.340386 | 0.304526 | 0.001612 | 0.001302 | 0.001284 |
| flat_tree_test.test | RUN | 4.154157 | 28.301227 | 18.039025 | 0.001348 | 0.001420 | 0.001376 |
| flat_set_test.test | RUN | 5.168890 | 35.315326 | 23.723588 | 0.007706 | 0.006878 | 0.007186 |
| flat_set_adaptor_test.test | RUN | 3.822904 | 30.988145 | 18.422131 | 0.007653 | 0.007002 | 0.007278 |
| flat_map_test.test | RUN | 8.278937 | 52.623963 | 38.398262 | 0.008914 | 0.008344 | 0.007900 |
| flat_map_adaptor_test.test | RUN | 5.199776 | 38.168017 | 27.216320 | 0.008044 | 0.007606 | 0.007740 |
| explicit_inst_vector_test.test | RUN | 0.798526 | 5.111311 | 4.045575 | 0.001322 | 0.001426 | 0.001264 |
| explicit_inst_string_test.test | RUN | 1.094503 | 9.142742 | 5.581519 | 0.001360 | 0.001531 | 0.001312 |
| explicit_inst_static_vector_test.test | RUN | 0.095949 | 0.324654 | 0.370297 | 0.001338 | 0.001388 | 0.001290 |
| explicit_inst_stable_vector_test.test | RUN | 0.639962 | 3.254707 | 2.579937 | 0.001350 | 0.001316 | 0.001136 |
| explicit_inst_small_vector_test.test | RUN | 0.529844 | 2.941865 | 2.379359 | 0.001268 | 0.001456 | 0.001287 |
| explicit_inst_slist_test.test | RUN | 0.402176 | 2.680063 | 1.839656 | 0.001340 | 0.001380 | 0.001174 |
| explicit_inst_set_test.test | RUN | 0.565271 | 3.066816 | 2.127639 | 0.001389 | 0.001442 | 0.001421 |
| explicit_inst_map_test.test | RUN | 0.622288 | 3.255424 | 2.327423 | 0.001293 | 0.001530 | 0.001238 |
| explicit_inst_list_test.test | RUN | 0.138023 | 0.729601 | 0.581542 | 0.001238 | 0.001595 | 0.001253 |
| explicit_inst_flat_set_test.test | RUN | 3.369309 | 23.630202 | 13.895520 | 0.001495 | 0.001258 | 0.001181 |
| explicit_inst_flat_map_test.test | RUN | 3.652697 | 24.763580 | 15.684081 | 0.001276 | 0.001301 | 0.001395 |
| explicit_inst_devector_test.test | RUN | 0.442828 | 2.878761 | 1.924720 | 0.001196 | 0.001440 | 0.001448 |
| explicit_inst_deque_test.test | RUN | 0.441060 | 3.138353 | 2.113948 | 0.001252 | 0.001462 | 0.001317 |
| devector_test.test | RUN | 6.103047 | 38.847304 | 27.923748 | 0.003360 | 0.003225 | 0.003953 |
| devector_options_test.test | RUN | 0.269648 | 1.702833 | 1.059598 | 0.001704 | 0.001591 | 0.001413 |
| deque_test.test | RUN | 4.530991 | 19.794023 | 17.132574 | 0.373627 | 0.366525 | 0.440644 |
| deque_options_test.test | RUN | 0.207266 | 0.629674 | 0.774316 | 0.001399 | 0.001422 | 0.001348 |
| copy_move_algo_test.test | RUN | 0.192359 | 0.748158 | 0.675957 | 0.001620 | 0.001388 | 0.001516 |
| common_iterator_test.test | RUN | 0.014011 | 0.036032 | 0.037680 | 0.000505 | 0.000544 | 0.001205 |
| boost_iterator_comp_test.test | RUN | 0.274713 | 0.890166 | 1.027105 | 0.001305 | 0.001378 | 0.001190 |
| allocator_traits_test.test | RUN | 0.158252 | 0.388113 | 0.493458 | 0.001565 | 0.001399 | 0.001225 |
| alloc_full_test.test | RUN | 0.183740 | 0.841513 | 0.701783 | 0.004111 | 0.004102 | 0.003992 |
| alloc_basic_test.test | RUN | 0.152840 | 0.582232 | 0.525655 | 0.001366 | 0.001357 | 0.001222 |
| adaptive_pool_test.test | RUN | 2.464860 | 13.070181 | 6.855003 | 0.012731 | 0.008299 | 0.008898 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.010× | 1.007×, 1.014× | 0.993× |
| clang | 1.068× | 1.071×, 1.065× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45697047144).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 3 | 0.009144s | 0.008282s | 0.009149s | byte equality observed |
| alloc_basic_test.test | 10 | 0.000818s | 0.000825s | 0.000856s | byte equality observed |
| alloc_full_test.test | 8 | 0.002697s | 0.002764s | 0.002882s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000785s | 0.000741s | 0.000776s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.000804s | 0.000778s | 0.000801s | byte equality observed |
| common_iterator_test.test | 10 | 0.000372s | 0.000363s | 0.000810s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001176s | 0.000911s | 0.000991s | byte equality observed |
| deque_options_test.test | 10 | 0.000861s | 0.000825s | 0.000833s | byte equality observed |
| deque_test.test | 1 | 0.373163s | 0.372319s | 0.447921s | byte equality observed |
| devector_options_test.test | 10 | 0.000898s | 0.000843s | 0.000851s | byte equality observed |
| devector_test.test | 5 | 0.002902s | 0.002810s | 0.003671s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000733s | 0.000713s | 0.000722s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000725s | 0.000703s | 0.000718s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000728s | 0.000718s | 0.000719s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000743s | 0.000716s | 0.000716s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000725s | 0.000698s | 0.000712s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000727s | 0.000734s | 0.000722s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000723s | 0.000717s | 0.000716s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000736s | 0.000715s | 0.000713s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000745s | 0.000712s | 0.000710s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000744s | 0.000705s | 0.000706s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000727s | 0.000704s | 0.000699s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000724s | 0.000728s | 0.000711s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000720s | 0.000700s | 0.000723s | byte equality observed |
| flat_map_adaptor_test.test | 4 | 0.005715s | 0.005374s | 0.005453s | byte equality observed |
| flat_map_test.test | 4 | 0.006185s | 0.005738s | 0.005585s | byte equality observed |
| flat_set_adaptor_test.test | 4 | 0.005544s | 0.005022s | 0.005378s | byte equality observed |
| flat_set_test.test | 4 | 0.005500s | 0.004843s | 0.005266s | byte equality observed |
| flat_tree_test.test | 10 | 0.000731s | 0.000740s | 0.000740s | byte equality observed |
| global_resource_test.test | 10 | 0.000768s | 0.000754s | 0.000762s | byte equality observed |
| hub_api_test.test | 8 | 0.002560s | 0.002248s | 0.002197s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000739s | 0.000743s | 0.000749s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.052978s | 0.055144s | 0.056958s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.000801s | 0.000779s | 0.000834s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.000769s | 0.000758s | 0.000765s | byte equality observed |
| hub_sort_test.test | 1 | 0.432212s | 0.441267s | 0.419882s | byte equality observed |
| hub_stability_test.test | 10 | 0.000977s | 0.000969s | 0.001037s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000758s | 0.000760s | 0.000781s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000768s | 0.000783s | 0.000792s | byte equality observed |
| is_constructible_test.test | 10 | 0.000351s | 0.000351s | 0.000726s | byte equality observed |
| list_test.test | 2 | 0.015540s | 0.015599s | 0.016103s | byte equality observed |
| map_test.test | 3 | 0.007641s | 0.007379s | 0.007358s | byte equality observed |
| memory_resource_test.test | 10 | 0.000776s | 0.000768s | 0.000778s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000781s | 0.000783s | 0.000774s | byte equality observed |
| nest_api_test.test | 10 | 0.001644s | 0.001660s | 0.001686s | byte equality observed |
| nest_test.test | 10 | 0.000789s | 0.000796s | 0.000801s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001143s | 0.001139s | 0.001172s | byte equality observed |
| node_allocator_test.test | 3 | 0.006663s | 0.006647s | 0.006742s | byte equality observed |
| node_handle_test.test | 10 | 0.000774s | 0.000772s | 0.000789s | byte equality observed |
| null_iterators_test.test | 10 | 0.000763s | 0.000763s | 0.000760s | byte equality observed |
| pair_test.test | 10 | 0.000765s | 0.000754s | 0.000760s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000746s | 0.000728s | 0.000734s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000756s | 0.000757s | 0.000758s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000752s | 0.000751s | 0.000772s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000751s | 0.000744s | 0.000757s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000751s | 0.000755s | 0.000752s | byte equality observed |
| pmr_list_test.test | 10 | 0.000744s | 0.000763s | 0.000742s | byte equality observed |
| pmr_map_test.test | 10 | 0.000744s | 0.000752s | 0.000760s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000753s | 0.000744s | 0.000746s | byte equality observed |
| pmr_set_test.test | 10 | 0.000748s | 0.000743s | 0.000731s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000749s | 0.000742s | 0.000746s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000749s | 0.000754s | 0.000758s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000759s | 0.000750s | 0.000777s | byte equality observed |
| pmr_string_test.test | 10 | 0.000358s | 0.000351s | 0.000817s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000354s | 0.000344s | 0.000804s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.000773s | 0.000755s | 0.000804s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.000770s | 0.000754s | 0.000812s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.000763s | 0.000767s | 0.000815s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.000777s | 0.000752s | 0.000782s | byte equality observed |
| segtor_options_test.test | 10 | 0.000810s | 0.000793s | 0.000826s | byte equality observed |
| segtor_test.test | 1 | 0.459568s | 0.467761s | 0.499955s | byte equality observed |
| set_test.test | 2 | 0.010808s | 0.009551s | 0.010429s | byte equality observed |
| slist_test.test | 2 | 0.016361s | 0.016079s | 0.016230s | byte equality observed |
| small_vector_options_test.test | 10 | 0.000839s | 0.000817s | 0.000848s | byte equality observed |
| small_vector_test.test | 7 | 0.001707s | 0.001598s | 0.002776s | byte equality observed |
| stable_vector_test.test | 1 | 0.027737s | 0.028102s | 0.028781s | byte equality observed |
| static_vector_options_test.test | 10 | 0.000815s | 0.000760s | 0.000848s | byte equality observed |
| static_vector_test.test | 10 | 0.001078s | 0.000989s | 0.001045s | byte equality observed |
| string_options_test.test | 10 | 0.000792s | 0.000783s | 0.000788s | byte equality observed |
| string_test.test | 3 | 0.009241s | 0.009017s | 0.009374s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000753s | 0.000755s | 0.000778s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.000778s | 0.000777s | 0.000793s | byte equality observed |
| throw_exception_test.test | 10 | 0.000730s | 0.000721s | 0.000737s | byte equality observed |
| tree_test.test | 10 | 0.000734s | 0.000723s | 0.000729s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.000782s | 0.000779s | 0.000782s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000727s | 0.000742s | 0.000727s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000350s | 0.000345s | 0.000734s | byte equality observed |
| vector_options_test.test | 10 | 0.000851s | 0.000847s | 0.000855s | byte equality observed |
| vector_test.test | 5 | 0.002974s | 0.002997s | 0.003965s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45697047144).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
