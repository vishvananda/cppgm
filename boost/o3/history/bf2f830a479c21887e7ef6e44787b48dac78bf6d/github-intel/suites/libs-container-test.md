# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 6.002819 | 29.653855 | 24.083377 | 0.004647 | 0.004278 | 0.005994 |
| vector_options_test.test | RUN | 0.267248 | 1.285747 | 0.981289 | 0.001543 | 0.001419 | 0.001444 |
| uses_allocator_test.test | RUN | 0.045329 | 0.096298 | 0.119581 | 0.000632 | 0.000489 | 0.001144 |
| uses_allocator_construction_test.test | RUN | 0.138331 | 0.370137 | 0.427773 | 0.001392 | 0.001254 | 0.001297 |
| unsynchronized_pool_resource_test.test | RUN | 0.184484 | 1.172504 | 0.559454 | 0.001509 | 0.001345 | 0.001226 |
| tree_test.test | RUN | 0.835456 | 4.376910 | 3.298620 | 0.001262 | 0.001380 | 0.001136 |
| throw_exception_test.test | RUN | 0.099472 | 0.241864 | 0.285133 | 0.001310 | 0.001284 | 0.001148 |
| synchronized_pool_resource_test.test | RUN | 0.184163 | 1.179600 | 0.567617 | 0.001310 | 0.001387 | 0.001307 |
| string_view_compat_test.test | RUN | 0.312761 | 2.390998 | 1.118061 | 0.001360 | 0.001380 | 0.001207 |
| string_test.test | RUN | 1.435795 | 9.274394 | 6.275079 | 0.013234 | 0.012730 | 0.013081 |
| string_options_test.test | RUN | 0.251371 | 1.930175 | 0.985527 | 0.001263 | 0.001366 | 0.001377 |
| static_vector_test.test | RUN | 1.479674 | 7.663915 | 6.392705 | 0.001798 | 0.001736 | 0.001748 |
| static_vector_options_test.test | RUN | 0.168679 | 0.491491 | 0.541660 | 0.001401 | 0.001302 | 0.001220 |
| stable_vector_test.test | RUN | 3.450860 | 16.115248 | 12.409412 | 0.031935 | 0.032495 | 0.032426 |
| small_vector_test.test | RUN | 2.230672 | 11.141589 | 8.896758 | 0.002832 | 0.002589 | 0.004034 |
| small_vector_options_test.test | RUN | 0.309968 | 1.340938 | 1.149193 | 0.001444 | 0.001463 | 0.001423 |
| slist_test.test | RUN | 2.069010 | 10.245829 | 7.804738 | 0.021877 | 0.022564 | 0.022759 |
| set_test.test | RUN | 3.173580 | 18.858712 | 14.597179 | 0.014964 | 0.012856 | 0.013579 |
| segtor_test.test | RUN | 4.085219 | 20.610307 | 16.248102 | 0.752969 | 0.747259 | 0.720265 |
| segtor_options_test.test | RUN | 0.193122 | 0.585110 | 0.676827 | 0.001378 | 0.001474 | 0.001355 |
| scoped_allocator_usage_test.test | RUN | 0.718089 | 2.985575 | 2.620700 | 0.001352 | 0.001345 | 0.001115 |
| scoped_allocator_adaptor_test.test | RUN | 0.303543 | 0.824771 | 1.128316 | 0.001294 | 0.001247 | 0.001075 |
| resource_adaptor_test.test | RUN | 0.156048 | 0.490462 | 0.491197 | 0.001501 | 0.001345 | 0.001238 |
| polymorphic_allocator_test.test | RUN | 0.133867 | 0.392173 | 0.408205 | 0.001375 | 0.001168 | 0.001072 |
| pmr_vector_test.test | RUN | 0.073204 | 0.145909 | 0.210574 | 0.000653 | 0.000512 | 0.001403 |
| pmr_string_test.test | RUN | 0.146097 | 0.306468 | 0.395004 | 0.000518 | 0.000485 | 0.001269 |
| pmr_stable_vector_test.test | RUN | 0.171760 | 0.507845 | 0.589555 | 0.001375 | 0.001220 | 0.001076 |
| pmr_small_vector_test.test | RUN | 0.091120 | 0.201709 | 0.276078 | 0.001306 | 0.001182 | 0.001175 |
| pmr_slist_test.test | RUN | 0.137021 | 0.690260 | 0.596392 | 0.001258 | 0.001238 | 0.001291 |
| pmr_set_test.test | RUN | 0.145097 | 0.340395 | 0.436066 | 0.001428 | 0.001224 | 0.001154 |
| pmr_nest_test.test | RUN | 0.112076 | 0.235751 | 0.295493 | 0.001305 | 0.001117 | 0.001314 |
| pmr_map_test.test | RUN | 0.149837 | 0.349148 | 0.435294 | 0.001358 | 0.001124 | 0.001336 |
| pmr_list_test.test | RUN | 0.095643 | 0.218331 | 0.276666 | 0.001355 | 0.001352 | 0.001264 |
| pmr_hub_test.test | RUN | 0.132235 | 0.298200 | 0.351844 | 0.001142 | 0.001189 | 0.001314 |
| pmr_flat_set_test.test | RUN | 0.103071 | 0.231424 | 0.316657 | 0.001323 | 0.001322 | 0.001262 |
| pmr_flat_map_test.test | RUN | 0.124758 | 0.269753 | 0.368356 | 0.001184 | 0.001172 | 0.001077 |
| pmr_devector_test.test | RUN | 0.087539 | 0.238982 | 0.277943 | 0.001241 | 0.001203 | 0.001106 |
| pmr_deque_test.test | RUN | 0.083625 | 0.202442 | 0.279170 | 0.001242 | 0.001297 | 0.001341 |
| pair_test.test | RUN | 0.211114 | 0.470706 | 0.613444 | 0.001312 | 0.001163 | 0.001470 |
| null_iterators_test.test | RUN | 0.341150 | 0.929573 | 1.043512 | 0.001487 | 0.001200 | 0.001007 |
| node_handle_test.test | RUN | 0.144731 | 1.197310 | 0.426243 | 0.001309 | 0.001238 | 0.001430 |
| node_allocator_test.test | RUN | 2.356666 | 12.657795 | 9.969670 | 0.009618 | 0.008884 | 0.009222 |
| new_delete_resource_test.test | RUN | 0.175868 | 0.706015 | 0.590342 | 0.001761 | 0.001756 | 0.001948 |
| nest_test.test | RUN | 0.495116 | 3.377330 | 2.097215 | 0.001393 | 0.001254 | 0.001372 |
| nest_api_test.test | RUN | 0.840095 | 6.490569 | 4.046771 | 0.002606 | 0.002254 | 0.002478 |
| monotonic_buffer_resource_test.test | RUN | 0.181170 | 1.305705 | 0.604716 | 0.001335 | 0.001328 | 0.001343 |
| memory_resource_test.test | RUN | 0.107187 | 0.348076 | 0.344983 | 0.001201 | 0.001319 | 0.001190 |
| map_test.test | RUN | 4.375101 | 21.223786 | 20.994641 | 0.010973 | 0.010062 | 0.010046 |
| list_test.test | RUN | 2.195016 | 10.871686 | 8.682441 | 0.022210 | 0.022007 | 0.022064 |
| is_constructible_test.test | RUN | 0.065311 | 0.122471 | 0.188743 | 0.000512 | 0.000500 | 0.001318 |
| insert_vs_emplace_test.test | RUN | 0.213651 | 0.837294 | 1.161486 | 0.001321 | 0.001189 | 0.001336 |
| hub_uses_allocator_test.test | RUN | 0.234012 | 0.719301 | 0.753057 | 0.001236 | 0.001230 | 0.001273 |
| hub_stability_test.test | RUN | 0.536547 | 3.454147 | 2.911899 | 0.001764 | 0.001607 | 0.001542 |
| hub_sort_test.test | RUN | 0.332759 | 1.528718 | 1.383439 | 0.545234 | 0.539777 | 0.506086 |
| hub_pocxx_test.test | RUN | 0.308670 | 1.826191 | 0.998805 | 0.001347 | 0.001386 | 0.001278 |
| hub_new_extended_alignment_test.test | RUN | 0.164087 | 0.531949 | 0.521499 | 0.001312 | 0.001258 | 0.001295 |
| hub_exception_safety_test.test | RUN | 0.625641 | 4.370143 | 2.921593 | 0.069641 | 0.068492 | 0.071534 |
| hub_empty_sort_test.test | RUN | 0.184547 | 0.489841 | 0.613114 | 0.001389 | 0.001379 | 0.001264 |
| hub_api_test.test | RUN | 2.107506 | 16.965260 | 9.456271 | 0.003662 | 0.003137 | 0.003324 |
| global_resource_test.test | RUN | 0.105168 | 0.334858 | 0.313663 | 0.001481 | 0.001249 | 0.001420 |
| flat_tree_test.test | RUN | 4.090214 | 27.351309 | 18.135735 | 0.001370 | 0.001392 | 0.001242 |
| flat_set_test.test | RUN | 5.184414 | 34.467434 | 23.459013 | 0.007690 | 0.006840 | 0.006806 |
| flat_set_adaptor_test.test | RUN | 3.795616 | 30.173787 | 17.989505 | 0.007764 | 0.007086 | 0.007160 |
| flat_map_test.test | RUN | 8.320506 | 51.574550 | 37.918636 | 0.008984 | 0.008331 | 0.007675 |
| flat_map_adaptor_test.test | RUN | 5.210621 | 37.674556 | 26.809168 | 0.008040 | 0.007592 | 0.006648 |
| explicit_inst_vector_test.test | RUN | 0.800691 | 5.070243 | 4.024985 | 0.001279 | 0.001363 | 0.001381 |
| explicit_inst_string_test.test | RUN | 1.105825 | 9.034067 | 5.711967 | 0.001560 | 0.001509 | 0.001413 |
| explicit_inst_static_vector_test.test | RUN | 0.097276 | 0.315804 | 0.378459 | 0.001296 | 0.001304 | 0.001337 |
| explicit_inst_stable_vector_test.test | RUN | 0.637308 | 3.200413 | 2.591598 | 0.001321 | 0.001216 | 0.001391 |
| explicit_inst_small_vector_test.test | RUN | 0.536675 | 2.886472 | 2.314316 | 0.001406 | 0.001320 | 0.001337 |
| explicit_inst_slist_test.test | RUN | 0.399667 | 2.636359 | 1.785320 | 0.001360 | 0.001211 | 0.001357 |
| explicit_inst_set_test.test | RUN | 0.573934 | 3.050096 | 2.058887 | 0.001345 | 0.001211 | 0.001205 |
| explicit_inst_map_test.test | RUN | 0.623438 | 3.181688 | 2.311694 | 0.001306 | 0.001371 | 0.001340 |
| explicit_inst_list_test.test | RUN | 0.138793 | 0.728729 | 0.570702 | 0.001301 | 0.001279 | 0.001216 |
| explicit_inst_flat_set_test.test | RUN | 3.393233 | 23.164715 | 13.862355 | 0.001628 | 0.001257 | 0.001288 |
| explicit_inst_flat_map_test.test | RUN | 3.647533 | 24.410342 | 15.137126 | 0.001168 | 0.001251 | 0.001227 |
| explicit_inst_devector_test.test | RUN | 0.442657 | 2.846858 | 1.965578 | 0.001126 | 0.001460 | 0.001249 |
| explicit_inst_deque_test.test | RUN | 0.448493 | 3.081249 | 2.059639 | 0.001910 | 0.001410 | 0.001158 |
| devector_test.test | RUN | 6.720582 | 38.366136 | 25.161262 | 0.003341 | 0.003083 | 0.003826 |
| devector_options_test.test | RUN | 0.270477 | 1.696490 | 1.053702 | 0.001683 | 0.001464 | 0.001519 |
| deque_test.test | RUN | 3.884161 | 19.817221 | 17.738606 | 0.364808 | 0.363221 | 0.437411 |
| deque_options_test.test | RUN | 0.204128 | 0.601554 | 0.767153 | 0.001407 | 0.001333 | 0.001199 |
| copy_move_algo_test.test | RUN | 0.190683 | 0.696165 | 0.703399 | 0.001750 | 0.001396 | 0.001427 |
| common_iterator_test.test | RUN | 0.013535 | 0.035011 | 0.036436 | 0.000507 | 0.000471 | 0.001144 |
| boost_iterator_comp_test.test | RUN | 0.275102 | 0.868578 | 0.994393 | 0.001239 | 0.001360 | 0.001376 |
| allocator_traits_test.test | RUN | 0.159153 | 0.374232 | 0.440167 | 0.001361 | 0.001251 | 0.001228 |
| alloc_full_test.test | RUN | 0.182602 | 0.815136 | 0.695407 | 0.004090 | 0.003944 | 0.003982 |
| alloc_basic_test.test | RUN | 0.154826 | 0.576058 | 0.507891 | 0.001342 | 0.001425 | 0.001372 |
| adaptive_pool_test.test | RUN | 2.412851 | 12.953884 | 9.752982 | 0.008901 | 0.008166 | 0.012109 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.009× | 1.009×, 1.008× | 0.997× |
| clang | 1.072× | 1.076×, 1.068× | 1.010× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45651777895).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 3 | 0.008953s | 0.008310s | 0.009199s | byte equality observed |
| alloc_basic_test.test | 10 | 0.000814s | 0.000796s | 0.000807s | byte equality observed |
| alloc_full_test.test | 8 | 0.002699s | 0.002670s | 0.002907s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000772s | 0.000764s | 0.000766s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.000781s | 0.000776s | 0.000773s | byte equality observed |
| common_iterator_test.test | 10 | 0.000362s | 0.000364s | 0.000789s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001164s | 0.000901s | 0.000992s | byte equality observed |
| deque_options_test.test | 10 | 0.000848s | 0.000848s | 0.000846s | byte equality observed |
| deque_test.test | 1 | 0.374000s | 0.369473s | 0.445388s | byte equality observed |
| devector_options_test.test | 10 | 0.000889s | 0.000838s | 0.000858s | byte equality observed |
| devector_test.test | 6 | 0.002882s | 0.002781s | 0.003662s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000720s | 0.000714s | 0.000750s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000710s | 0.000704s | 0.000741s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000719s | 0.000722s | 0.000761s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000726s | 0.000722s | 0.000742s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000718s | 0.000705s | 0.000740s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000733s | 0.000710s | 0.000749s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000722s | 0.000708s | 0.000725s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000726s | 0.000722s | 0.000731s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000713s | 0.000715s | 0.000743s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000730s | 0.000720s | 0.000734s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000718s | 0.000704s | 0.000731s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000724s | 0.000726s | 0.000750s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000727s | 0.000712s | 0.000730s | byte equality observed |
| flat_map_adaptor_test.test | 4 | 0.005695s | 0.005335s | 0.005469s | byte equality observed |
| flat_map_test.test | 4 | 0.006148s | 0.005698s | 0.005564s | byte equality observed |
| flat_set_adaptor_test.test | 4 | 0.005511s | 0.005006s | 0.005367s | byte equality observed |
| flat_set_test.test | 4 | 0.005472s | 0.004828s | 0.005251s | byte equality observed |
| flat_tree_test.test | 10 | 0.000733s | 0.000715s | 0.000726s | byte equality observed |
| global_resource_test.test | 10 | 0.000744s | 0.000738s | 0.000749s | byte equality observed |
| hub_api_test.test | 8 | 0.002539s | 0.002222s | 0.002188s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000737s | 0.000724s | 0.000733s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.052347s | 0.054337s | 0.057826s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.000795s | 0.000754s | 0.000820s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.000793s | 0.000758s | 0.000761s | byte equality observed |
| hub_sort_test.test | 1 | 0.430529s | 0.435879s | 0.418556s | byte equality observed |
| hub_stability_test.test | 10 | 0.000969s | 0.000966s | 0.001025s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000750s | 0.000753s | 0.000753s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000766s | 0.000772s | 0.000770s | byte equality observed |
| is_constructible_test.test | 10 | 0.000350s | 0.000348s | 0.000731s | byte equality observed |
| list_test.test | 2 | 0.015424s | 0.015496s | 0.016042s | byte equality observed |
| map_test.test | 3 | 0.007575s | 0.007302s | 0.007270s | byte equality observed |
| memory_resource_test.test | 10 | 0.000760s | 0.000761s | 0.000753s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000763s | 0.000760s | 0.000760s | byte equality observed |
| nest_api_test.test | 10 | 0.001636s | 0.001642s | 0.001662s | byte equality observed |
| nest_test.test | 10 | 0.000777s | 0.000792s | 0.000784s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001141s | 0.001112s | 0.001145s | byte equality observed |
| node_allocator_test.test | 3 | 0.006594s | 0.006575s | 0.006710s | byte equality observed |
| node_handle_test.test | 10 | 0.000763s | 0.000757s | 0.000758s | byte equality observed |
| null_iterators_test.test | 10 | 0.000763s | 0.000740s | 0.000742s | byte equality observed |
| pair_test.test | 10 | 0.000746s | 0.000743s | 0.000752s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000725s | 0.000732s | 0.000741s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000749s | 0.000742s | 0.000751s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000721s | 0.000732s | 0.000742s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000718s | 0.000740s | 0.000742s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000713s | 0.000747s | 0.000745s | byte equality observed |
| pmr_list_test.test | 10 | 0.000716s | 0.000736s | 0.000749s | byte equality observed |
| pmr_map_test.test | 10 | 0.000716s | 0.000726s | 0.000763s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000707s | 0.000722s | 0.000749s | byte equality observed |
| pmr_set_test.test | 10 | 0.000723s | 0.000735s | 0.000739s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000719s | 0.000733s | 0.000739s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000713s | 0.000740s | 0.000745s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000716s | 0.000736s | 0.000733s | byte equality observed |
| pmr_string_test.test | 10 | 0.000338s | 0.000340s | 0.000754s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000335s | 0.000340s | 0.000749s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.000750s | 0.000768s | 0.000779s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.000756s | 0.000748s | 0.000800s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.000756s | 0.000746s | 0.000799s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.000749s | 0.000743s | 0.000811s | byte equality observed |
| segtor_options_test.test | 10 | 0.000810s | 0.000801s | 0.000818s | byte equality observed |
| segtor_test.test | 1 | 0.454423s | 0.464167s | 0.495720s | byte equality observed |
| set_test.test | 2 | 0.010786s | 0.009460s | 0.010366s | byte equality observed |
| slist_test.test | 2 | 0.016225s | 0.016026s | 0.016192s | byte equality observed |
| small_vector_options_test.test | 10 | 0.000832s | 0.000816s | 0.000849s | byte equality observed |
| small_vector_test.test | 7 | 0.001692s | 0.001581s | 0.002765s | byte equality observed |
| stable_vector_test.test | 1 | 0.027685s | 0.027919s | 0.028602s | byte equality observed |
| static_vector_options_test.test | 10 | 0.000808s | 0.000779s | 0.000824s | byte equality observed |
| static_vector_test.test | 10 | 0.001062s | 0.000980s | 0.001042s | byte equality observed |
| string_options_test.test | 10 | 0.000778s | 0.000788s | 0.000793s | byte equality observed |
| string_test.test | 3 | 0.009168s | 0.008935s | 0.009368s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000745s | 0.000749s | 0.000768s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.000779s | 0.000768s | 0.000785s | byte equality observed |
| throw_exception_test.test | 10 | 0.000728s | 0.000718s | 0.000726s | byte equality observed |
| tree_test.test | 10 | 0.000737s | 0.000711s | 0.000729s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.000779s | 0.000766s | 0.000774s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000724s | 0.000715s | 0.000756s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000337s | 0.000340s | 0.000735s | byte equality observed |
| vector_options_test.test | 10 | 0.000855s | 0.000844s | 0.000858s | byte equality observed |
| vector_test.test | 5 | 0.002954s | 0.002960s | 0.003949s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45651777895).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
