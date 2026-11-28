# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 5.910296 | 30.910944 | 25.214817 | 0.004440 | 0.004454 | 0.006104 |
| vector_options_test.test | RUN | 0.264022 | 1.319069 | 0.993873 | 0.001538 | 0.001619 | 0.001737 |
| uses_allocator_test.test | RUN | 0.044875 | 0.101820 | 0.127256 | 0.000601 | 0.000613 | 0.001484 |
| uses_allocator_construction_test.test | RUN | 0.137200 | 0.391473 | 0.446121 | 0.001163 | 0.001355 | 0.001560 |
| unsynchronized_pool_resource_test.test | RUN | 0.180975 | 1.238146 | 0.596745 | 0.001564 | 0.001331 | 0.001453 |
| tree_test.test | RUN | 0.840435 | 4.589684 | 3.524161 | 0.001151 | 0.001669 | 0.001473 |
| throw_exception_test.test | RUN | 0.096206 | 0.246316 | 0.306616 | 0.001113 | 0.001319 | 0.001420 |
| synchronized_pool_resource_test.test | RUN | 0.176395 | 1.227731 | 0.595118 | 0.001142 | 0.001461 | 0.001662 |
| string_view_compat_test.test | RUN | 0.299767 | 2.475719 | 1.144789 | 0.001182 | 0.001552 | 0.001582 |
| string_test.test | RUN | 1.465266 | 9.595936 | 6.382315 | 0.014385 | 0.013171 | 0.013164 |
| string_options_test.test | RUN | 0.240931 | 2.020655 | 1.023473 | 0.001654 | 0.001589 | 0.001433 |
| static_vector_test.test | RUN | 1.408493 | 8.047045 | 6.714812 | 0.001804 | 0.001822 | 0.001935 |
| static_vector_options_test.test | RUN | 0.175184 | 0.500616 | 0.553103 | 0.001313 | 0.001810 | 0.001719 |
| stable_vector_test.test | RUN | 3.437473 | 17.006207 | 13.111316 | 0.031310 | 0.032655 | 0.033463 |
| small_vector_test.test | RUN | 2.231845 | 11.841804 | 9.332015 | 0.002992 | 0.002704 | 0.004491 |
| small_vector_options_test.test | RUN | 0.309478 | 1.354305 | 1.202333 | 0.001409 | 0.001598 | 0.001587 |
| slist_test.test | RUN | 2.073580 | 10.684811 | 8.312278 | 0.023216 | 0.022897 | 0.022308 |
| set_test.test | RUN | 3.177693 | 19.991388 | 15.161046 | 0.014731 | 0.013018 | 0.013896 |
| segtor_test.test | RUN | 4.089170 | 21.637517 | 16.886217 | 0.723400 | 0.732761 | 0.714547 |
| segtor_options_test.test | RUN | 0.201066 | 0.577589 | 0.726169 | 0.001479 | 0.001630 | 0.001584 |
| scoped_allocator_usage_test.test | RUN | 0.726242 | 3.097116 | 2.781872 | 0.001356 | 0.001508 | 0.001232 |
| scoped_allocator_adaptor_test.test | RUN | 0.300316 | 0.838729 | 1.163832 | 0.001394 | 0.001461 | 0.001453 |
| resource_adaptor_test.test | RUN | 0.165427 | 0.489349 | 0.527041 | 0.001417 | 0.001503 | 0.001379 |
| polymorphic_allocator_test.test | RUN | 0.137219 | 0.402235 | 0.441925 | 0.001444 | 0.001381 | 0.001330 |
| pmr_vector_test.test | RUN | 0.076886 | 0.147682 | 0.228576 | 0.000476 | 0.000522 | 0.001475 |
| pmr_string_test.test | RUN | 0.144481 | 0.317424 | 0.426092 | 0.000541 | 0.000615 | 0.001442 |
| pmr_stable_vector_test.test | RUN | 0.171816 | 0.531079 | 0.627367 | 0.001308 | 0.001300 | 0.001152 |
| pmr_small_vector_test.test | RUN | 0.093066 | 0.206638 | 0.290264 | 0.001238 | 0.001378 | 0.001334 |
| pmr_slist_test.test | RUN | 0.138562 | 0.716207 | 0.607718 | 0.001313 | 0.001446 | 0.001063 |
| pmr_set_test.test | RUN | 0.146323 | 0.348503 | 0.452131 | 0.001108 | 0.001326 | 0.001330 |
| pmr_nest_test.test | RUN | 0.109639 | 0.238768 | 0.313800 | 0.001189 | 0.001465 | 0.001516 |
| pmr_map_test.test | RUN | 0.148292 | 0.369937 | 0.428637 | 0.001136 | 0.001259 | 0.001204 |
| pmr_list_test.test | RUN | 0.101033 | 0.226240 | 0.303489 | 0.001129 | 0.001410 | 0.001434 |
| pmr_hub_test.test | RUN | 0.135250 | 0.313660 | 0.384431 | 0.001288 | 0.001354 | 0.001467 |
| pmr_flat_set_test.test | RUN | 0.105380 | 0.242086 | 0.338802 | 0.001234 | 0.001359 | 0.001388 |
| pmr_flat_map_test.test | RUN | 0.125571 | 0.277380 | 0.375252 | 0.001163 | 0.001474 | 0.001321 |
| pmr_devector_test.test | RUN | 0.086583 | 0.244643 | 0.280815 | 0.001401 | 0.001177 | 0.001346 |
| pmr_deque_test.test | RUN | 0.082724 | 0.204568 | 0.283694 | 0.001208 | 0.001542 | 0.001401 |
| pair_test.test | RUN | 0.215825 | 0.505684 | 0.639969 | 0.001420 | 0.001396 | 0.001422 |
| null_iterators_test.test | RUN | 0.335476 | 0.973828 | 1.069551 | 0.001445 | 0.001437 | 0.001465 |
| node_handle_test.test | RUN | 0.145263 | 1.236852 | 0.440021 | 0.001228 | 0.001445 | 0.001360 |
| node_allocator_test.test | RUN | 2.466881 | 13.211058 | 10.365507 | 0.009223 | 0.009827 | 0.009554 |
| new_delete_resource_test.test | RUN | 0.175915 | 0.746678 | 0.604523 | 0.001902 | 0.002060 | 0.002082 |
| nest_test.test | RUN | 0.504686 | 3.495640 | 2.130224 | 0.001366 | 0.001506 | 0.001474 |
| nest_api_test.test | RUN | 0.723136 | 6.753733 | 4.138656 | 0.002250 | 0.002826 | 0.002553 |
| monotonic_buffer_resource_test.test | RUN | 0.185048 | 1.371243 | 0.610887 | 0.001298 | 0.001633 | 0.001579 |
| memory_resource_test.test | RUN | 0.108458 | 0.351116 | 0.352268 | 0.001096 | 0.001564 | 0.001525 |
| map_test.test | RUN | 4.285181 | 22.140615 | 21.527769 | 0.010852 | 0.010264 | 0.010127 |
| list_test.test | RUN | 2.196458 | 11.337993 | 8.924683 | 0.022380 | 0.022880 | 0.022220 |
| is_constructible_test.test | RUN | 0.063759 | 0.129853 | 0.194126 | 0.000506 | 0.000564 | 0.001456 |
| insert_vs_emplace_test.test | RUN | 0.213610 | 0.889214 | 1.177263 | 0.001212 | 0.001688 | 0.001586 |
| hub_uses_allocator_test.test | RUN | 0.232777 | 0.765470 | 0.777896 | 0.001271 | 0.001629 | 0.001482 |
| hub_stability_test.test | RUN | 0.534634 | 3.595188 | 2.950198 | 0.001566 | 0.001851 | 0.001688 |
| hub_sort_test.test | RUN | 0.335008 | 1.608893 | 1.404856 | 0.534328 | 0.554894 | 0.511554 |
| hub_pocxx_test.test | RUN | 0.301852 | 1.899638 | 1.016345 | 0.001182 | 0.001590 | 0.001411 |
| hub_new_extended_alignment_test.test | RUN | 0.160196 | 0.562218 | 0.540230 | 0.001359 | 0.001387 | 0.001387 |
| hub_exception_safety_test.test | RUN | 0.624249 | 4.534488 | 3.007520 | 0.067092 | 0.074703 | 0.074167 |
| hub_empty_sort_test.test | RUN | 0.185240 | 0.508778 | 0.618761 | 0.001258 | 0.001381 | 0.001561 |
| hub_api_test.test | RUN | 2.091522 | 18.083819 | 9.766690 | 0.003612 | 0.003236 | 0.003424 |
| global_resource_test.test | RUN | 0.100313 | 0.345243 | 0.320881 | 0.001308 | 0.001356 | 0.001389 |
| flat_tree_test.test | RUN | 4.079459 | 28.051758 | 18.359912 | 0.001268 | 0.001385 | 0.001361 |
| flat_set_test.test | RUN | 5.055835 | 35.209569 | 23.868891 | 0.007398 | 0.006699 | 0.007131 |
| flat_set_adaptor_test.test | RUN | 3.788591 | 31.198548 | 18.298845 | 0.007082 | 0.007088 | 0.007083 |
| flat_map_test.test | RUN | 8.174308 | 52.643062 | 38.172122 | 0.008716 | 0.008170 | 0.007766 |
| flat_map_adaptor_test.test | RUN | 5.190261 | 38.191010 | 26.503784 | 0.007929 | 0.007683 | 0.007395 |
| explicit_inst_vector_test.test | RUN | 0.792073 | 5.176285 | 3.976914 | 0.001318 | 0.001234 | 0.001135 |
| explicit_inst_string_test.test | RUN | 1.084552 | 9.124520 | 5.568870 | 0.001129 | 0.001289 | 0.001305 |
| explicit_inst_static_vector_test.test | RUN | 0.095652 | 0.332982 | 0.357600 | 0.001328 | 0.001348 | 0.001135 |
| explicit_inst_stable_vector_test.test | RUN | 0.632984 | 3.316038 | 2.582164 | 0.001284 | 0.001492 | 0.001369 |
| explicit_inst_small_vector_test.test | RUN | 0.526331 | 2.976538 | 2.327429 | 0.001325 | 0.001518 | 0.001269 |
| explicit_inst_slist_test.test | RUN | 0.395743 | 2.678162 | 1.821240 | 0.001270 | 0.001328 | 0.001282 |
| explicit_inst_set_test.test | RUN | 0.552577 | 3.082651 | 2.071223 | 0.001167 | 0.001505 | 0.001248 |
| explicit_inst_map_test.test | RUN | 0.607236 | 3.263392 | 2.261116 | 0.001429 | 0.001465 | 0.001163 |
| explicit_inst_list_test.test | RUN | 0.138537 | 0.731786 | 0.590693 | 0.001179 | 0.001268 | 0.001239 |
| explicit_inst_flat_set_test.test | RUN | 3.377490 | 23.577361 | 13.835842 | 0.001323 | 0.001593 | 0.001302 |
| explicit_inst_flat_map_test.test | RUN | 3.626902 | 24.679765 | 15.425362 | 0.001390 | 0.001429 | 0.001395 |
| explicit_inst_devector_test.test | RUN | 0.436298 | 2.891483 | 1.947855 | 0.001183 | 0.001371 | 0.001190 |
| explicit_inst_deque_test.test | RUN | 0.442010 | 3.103436 | 2.067927 | 0.001364 | 0.001274 | 0.001405 |
| devector_test.test | RUN | 6.609888 | 39.304910 | 28.259575 | 0.003258 | 0.003224 | 0.003862 |
| devector_options_test.test | RUN | 0.274969 | 1.701462 | 1.062426 | 0.001605 | 0.001684 | 0.001401 |
| deque_test.test | RUN | 4.422228 | 19.825303 | 15.056635 | 0.365488 | 0.366440 | 0.437198 |
| deque_options_test.test | RUN | 0.198933 | 0.622172 | 0.730210 | 0.001253 | 0.001433 | 0.001391 |
| copy_move_algo_test.test | RUN | 0.192609 | 0.749334 | 0.664718 | 0.001640 | 0.001590 | 0.001327 |
| common_iterator_test.test | RUN | 0.014343 | 0.037045 | 0.037194 | 0.000481 | 0.000588 | 0.001147 |
| boost_iterator_comp_test.test | RUN | 0.274363 | 0.891084 | 1.032936 | 0.001294 | 0.001269 | 0.001289 |
| allocator_traits_test.test | RUN | 0.156575 | 0.386354 | 0.471061 | 0.001300 | 0.001553 | 0.001421 |
| alloc_full_test.test | RUN | 0.187052 | 0.811410 | 0.711830 | 0.004385 | 0.004294 | 0.004073 |
| alloc_basic_test.test | RUN | 0.155662 | 0.574964 | 0.513388 | 0.001223 | 0.001495 | 0.001303 |
| adaptive_pool_test.test | RUN | 1.752383 | 13.071932 | 9.418470 | 0.008934 | 0.008202 | 0.012068 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.009× | 1.009×, 1.010× | 1.005× |
| clang | 1.074× | 1.077×, 1.071× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46092715613).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 3 | 0.009118s | 0.008443s | 0.008933s | byte equality observed |
| alloc_basic_test.test | 10 | 0.000812s | 0.000815s | 0.000820s | byte equality observed |
| alloc_full_test.test | 7 | 0.002712s | 0.002711s | 0.002889s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000789s | 0.000787s | 0.000750s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.000803s | 0.000801s | 0.000792s | byte equality observed |
| common_iterator_test.test | 10 | 0.000375s | 0.000373s | 0.000788s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001191s | 0.000953s | 0.001008s | byte equality observed |
| deque_options_test.test | 10 | 0.000864s | 0.000879s | 0.000832s | byte equality observed |
| deque_test.test | 1 | 0.373232s | 0.371912s | 0.446236s | byte equality observed |
| devector_options_test.test | 10 | 0.000897s | 0.000834s | 0.000849s | byte equality observed |
| devector_test.test | 5 | 0.002907s | 0.002824s | 0.003656s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000718s | 0.000718s | 0.000720s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000711s | 0.000707s | 0.000734s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000717s | 0.000714s | 0.000726s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000719s | 0.000714s | 0.000723s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000710s | 0.000709s | 0.000709s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000727s | 0.000711s | 0.000728s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000733s | 0.000714s | 0.000734s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000723s | 0.000713s | 0.000721s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000737s | 0.000716s | 0.000740s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000729s | 0.000731s | 0.000735s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000722s | 0.000722s | 0.000712s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000727s | 0.000734s | 0.000734s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000729s | 0.000741s | 0.000709s | byte equality observed |
| flat_map_adaptor_test.test | 4 | 0.005698s | 0.005367s | 0.005411s | byte equality observed |
| flat_map_test.test | 4 | 0.006186s | 0.005754s | 0.005539s | byte equality observed |
| flat_set_adaptor_test.test | 4 | 0.005555s | 0.005026s | 0.005329s | byte equality observed |
| flat_set_test.test | 4 | 0.005498s | 0.004851s | 0.005180s | byte equality observed |
| flat_tree_test.test | 10 | 0.000755s | 0.000734s | 0.000712s | byte equality observed |
| global_resource_test.test | 10 | 0.000767s | 0.000766s | 0.000760s | byte equality observed |
| hub_api_test.test | 8 | 0.002557s | 0.002265s | 0.002177s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000740s | 0.000748s | 0.000744s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.052082s | 0.057301s | 0.051609s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.000798s | 0.000821s | 0.000771s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.000774s | 0.000783s | 0.000761s | byte equality observed |
| hub_sort_test.test | 1 | 0.428163s | 0.447418s | 0.414058s | byte equality observed |
| hub_stability_test.test | 10 | 0.000979s | 0.000970s | 0.000989s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000755s | 0.000755s | 0.000759s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000773s | 0.000775s | 0.000782s | byte equality observed |
| is_constructible_test.test | 10 | 0.000355s | 0.000329s | 0.000735s | byte equality observed |
| list_test.test | 2 | 0.015468s | 0.015651s | 0.015985s | byte equality observed |
| map_test.test | 3 | 0.007606s | 0.007356s | 0.007256s | byte equality observed |
| memory_resource_test.test | 10 | 0.000761s | 0.000762s | 0.000764s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000773s | 0.000761s | 0.000769s | byte equality observed |
| nest_api_test.test | 10 | 0.001647s | 0.001638s | 0.001666s | byte equality observed |
| nest_test.test | 10 | 0.000805s | 0.000788s | 0.000797s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001138s | 0.001132s | 0.001123s | byte equality observed |
| node_allocator_test.test | 3 | 0.006660s | 0.006658s | 0.006698s | byte equality observed |
| node_handle_test.test | 10 | 0.000777s | 0.000786s | 0.000775s | byte equality observed |
| null_iterators_test.test | 10 | 0.000767s | 0.000750s | 0.000753s | byte equality observed |
| pair_test.test | 10 | 0.000764s | 0.000756s | 0.000763s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000753s | 0.000720s | 0.000725s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000761s | 0.000717s | 0.000728s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000740s | 0.000715s | 0.000746s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000750s | 0.000719s | 0.000742s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000754s | 0.000731s | 0.000758s | byte equality observed |
| pmr_list_test.test | 10 | 0.000750s | 0.000732s | 0.000739s | byte equality observed |
| pmr_map_test.test | 10 | 0.000751s | 0.000747s | 0.000752s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000755s | 0.000757s | 0.000748s | byte equality observed |
| pmr_set_test.test | 10 | 0.000751s | 0.000755s | 0.000741s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000756s | 0.000747s | 0.000732s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000738s | 0.000753s | 0.000753s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000756s | 0.000755s | 0.000770s | byte equality observed |
| pmr_string_test.test | 10 | 0.000362s | 0.000356s | 0.000792s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000363s | 0.000354s | 0.000804s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.000787s | 0.000776s | 0.000815s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.000781s | 0.000791s | 0.000797s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.000777s | 0.000772s | 0.000810s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.000775s | 0.000759s | 0.000805s | byte equality observed |
| segtor_options_test.test | 10 | 0.000815s | 0.000806s | 0.000812s | byte equality observed |
| segtor_test.test | 1 | 0.458657s | 0.467248s | 0.498829s | byte equality observed |
| set_test.test | 2 | 0.010730s | 0.009670s | 0.010309s | byte equality observed |
| slist_test.test | 2 | 0.016222s | 0.016311s | 0.015969s | byte equality observed |
| small_vector_options_test.test | 10 | 0.000843s | 0.000870s | 0.000827s | byte equality observed |
| small_vector_test.test | 7 | 0.001693s | 0.001626s | 0.002746s | byte equality observed |
| stable_vector_test.test | 1 | 0.027824s | 0.028131s | 0.028566s | byte equality observed |
| static_vector_options_test.test | 10 | 0.000813s | 0.000816s | 0.000795s | byte equality observed |
| static_vector_test.test | 10 | 0.001077s | 0.000997s | 0.001022s | byte equality observed |
| string_options_test.test | 10 | 0.000781s | 0.000802s | 0.000788s | byte equality observed |
| string_test.test | 3 | 0.009209s | 0.009034s | 0.009296s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000763s | 0.000764s | 0.000744s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.000782s | 0.000789s | 0.000784s | byte equality observed |
| throw_exception_test.test | 10 | 0.000739s | 0.000739s | 0.000731s | byte equality observed |
| tree_test.test | 10 | 0.000739s | 0.000755s | 0.000721s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.000787s | 0.000803s | 0.000764s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000740s | 0.000753s | 0.000724s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000349s | 0.000352s | 0.000714s | byte equality observed |
| vector_options_test.test | 10 | 0.000860s | 0.000875s | 0.000836s | byte equality observed |
| vector_test.test | 5 | 0.003008s | 0.003004s | 0.003974s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46092715613).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
