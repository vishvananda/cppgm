# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 5.938370 | 29.389111 | 23.432718 | 0.004652 | 0.003978 | 0.005919 |
| vector_options_test.test | RUN | 0.268011 | 1.233547 | 0.980391 | 0.001275 | 0.001355 | 0.001278 |
| uses_allocator_test.test | RUN | 0.043077 | 0.093989 | 0.119848 | 0.000495 | 0.000474 | 0.001178 |
| uses_allocator_construction_test.test | RUN | 0.135619 | 0.370913 | 0.434418 | 0.001152 | 0.001111 | 0.001021 |
| unsynchronized_pool_resource_test.test | RUN | 0.179403 | 1.188055 | 0.555754 | 0.001210 | 0.001268 | 0.001306 |
| tree_test.test | RUN | 0.842873 | 4.388362 | 3.316976 | 0.001218 | 0.001138 | 0.001030 |
| throw_exception_test.test | RUN | 0.095711 | 0.240961 | 0.286308 | 0.001136 | 0.001144 | 0.001104 |
| synchronized_pool_resource_test.test | RUN | 0.172826 | 1.191218 | 0.566059 | 0.001238 | 0.001410 | 0.001173 |
| string_view_compat_test.test | RUN | 0.302455 | 2.388495 | 1.108545 | 0.001208 | 0.001184 | 0.001133 |
| string_test.test | RUN | 1.460981 | 9.171075 | 6.236169 | 0.014326 | 0.012835 | 0.013131 |
| string_options_test.test | RUN | 0.246608 | 1.907655 | 0.992023 | 0.001223 | 0.001253 | 0.001241 |
| static_vector_test.test | RUN | 1.469486 | 7.581556 | 6.344031 | 0.001863 | 0.001613 | 0.001605 |
| static_vector_options_test.test | RUN | 0.169037 | 0.469229 | 0.539930 | 0.001410 | 0.001339 | 0.001151 |
| stable_vector_test.test | RUN | 3.460443 | 16.130762 | 12.013742 | 0.031398 | 0.032485 | 0.033338 |
| small_vector_test.test | RUN | 2.231237 | 11.129055 | 8.836894 | 0.002811 | 0.002475 | 0.004163 |
| small_vector_options_test.test | RUN | 0.305790 | 1.298338 | 1.142738 | 0.001441 | 0.001320 | 0.001264 |
| slist_test.test | RUN | 2.049126 | 10.000601 | 7.820513 | 0.023579 | 0.022527 | 0.022666 |
| set_test.test | RUN | 3.150093 | 18.741957 | 14.059586 | 0.013516 | 0.013059 | 0.013582 |
| segtor_test.test | RUN | 4.030128 | 20.650911 | 15.977010 | 0.708584 | 0.746371 | 0.722864 |
| segtor_options_test.test | RUN | 0.201190 | 0.566320 | 0.688965 | 0.001260 | 0.001355 | 0.001284 |
| scoped_allocator_usage_test.test | RUN | 0.712119 | 2.942764 | 2.659449 | 0.001268 | 0.001244 | 0.001344 |
| scoped_allocator_adaptor_test.test | RUN | 0.294366 | 0.825822 | 1.087829 | 0.001354 | 0.001179 | 0.001046 |
| resource_adaptor_test.test | RUN | 0.159239 | 0.474947 | 0.512596 | 0.001225 | 0.001245 | 0.001156 |
| polymorphic_allocator_test.test | RUN | 0.126286 | 0.387950 | 0.413073 | 0.001171 | 0.001248 | 0.001216 |
| pmr_vector_test.test | RUN | 0.070674 | 0.144682 | 0.208247 | 0.000495 | 0.000453 | 0.001401 |
| pmr_string_test.test | RUN | 0.145389 | 0.305609 | 0.415974 | 0.000514 | 0.000517 | 0.001096 |
| pmr_stable_vector_test.test | RUN | 0.181732 | 0.510642 | 0.582105 | 0.001147 | 0.001162 | 0.001029 |
| pmr_small_vector_test.test | RUN | 0.086937 | 0.201732 | 0.270682 | 0.001184 | 0.001078 | 0.000993 |
| pmr_slist_test.test | RUN | 0.130720 | 0.699009 | 0.580515 | 0.001167 | 0.001179 | 0.001169 |
| pmr_set_test.test | RUN | 0.140662 | 0.341371 | 0.428074 | 0.001370 | 0.001193 | 0.001038 |
| pmr_nest_test.test | RUN | 0.105333 | 0.229080 | 0.304906 | 0.001118 | 0.001228 | 0.001096 |
| pmr_map_test.test | RUN | 0.142693 | 0.349680 | 0.435144 | 0.001382 | 0.001333 | 0.001039 |
| pmr_list_test.test | RUN | 0.095797 | 0.215131 | 0.300640 | 0.001173 | 0.001193 | 0.001046 |
| pmr_hub_test.test | RUN | 0.130987 | 0.298372 | 0.350934 | 0.001106 | 0.001140 | 0.001226 |
| pmr_flat_set_test.test | RUN | 0.105602 | 0.232835 | 0.325549 | 0.001348 | 0.001147 | 0.001062 |
| pmr_flat_map_test.test | RUN | 0.122516 | 0.271229 | 0.344283 | 0.001160 | 0.001230 | 0.001029 |
| pmr_devector_test.test | RUN | 0.081708 | 0.236803 | 0.282039 | 0.001203 | 0.001196 | 0.001039 |
| pmr_deque_test.test | RUN | 0.083363 | 0.197525 | 0.262372 | 0.001336 | 0.001415 | 0.001082 |
| pair_test.test | RUN | 0.207357 | 0.474369 | 0.601035 | 0.001294 | 0.001210 | 0.001112 |
| null_iterators_test.test | RUN | 0.329490 | 0.910305 | 0.981747 | 0.001217 | 0.001158 | 0.001134 |
| node_handle_test.test | RUN | 0.141015 | 1.207429 | 0.420573 | 0.001280 | 0.001278 | 0.001181 |
| node_allocator_test.test | RUN | 2.447619 | 12.402896 | 9.633818 | 0.009285 | 0.008789 | 0.009147 |
| new_delete_resource_test.test | RUN | 0.174656 | 0.711334 | 0.571545 | 0.001626 | 0.001670 | 0.001598 |
| nest_test.test | RUN | 0.455147 | 3.401023 | 2.064936 | 0.001217 | 0.001473 | 0.001172 |
| nest_api_test.test | RUN | 0.848007 | 6.489085 | 3.965805 | 0.002318 | 0.002298 | 0.002029 |
| monotonic_buffer_resource_test.test | RUN | 0.155255 | 1.323420 | 0.565364 | 0.001084 | 0.001258 | 0.000996 |
| memory_resource_test.test | RUN | 0.099769 | 0.350822 | 0.258430 | 0.001258 | 0.001199 | 0.001072 |
| map_test.test | RUN | 4.328083 | 21.164359 | 19.952256 | 0.010737 | 0.010020 | 0.009544 |
| list_test.test | RUN | 2.211140 | 10.889142 | 8.334350 | 0.022176 | 0.020477 | 0.022235 |
| is_constructible_test.test | RUN | 0.064094 | 0.117223 | 0.187500 | 0.000505 | 0.000500 | 0.001091 |
| insert_vs_emplace_test.test | RUN | 0.213038 | 0.847471 | 1.131385 | 0.001276 | 0.001292 | 0.001217 |
| hub_uses_allocator_test.test | RUN | 0.228192 | 0.710113 | 0.756573 | 0.001205 | 0.001187 | 0.001126 |
| hub_stability_test.test | RUN | 0.538859 | 3.420964 | 2.869995 | 0.001491 | 0.001472 | 0.001426 |
| hub_sort_test.test | RUN | 0.339110 | 1.542622 | 1.375823 | 0.532489 | 0.535311 | 0.502107 |
| hub_pocxx_test.test | RUN | 0.307070 | 1.836069 | 0.923150 | 0.001249 | 0.001297 | 0.001171 |
| hub_new_extended_alignment_test.test | RUN | 0.161963 | 0.523886 | 0.526587 | 0.001228 | 0.001156 | 0.001127 |
| hub_exception_safety_test.test | RUN | 0.621992 | 4.318091 | 2.867070 | 0.073909 | 0.061436 | 0.058967 |
| hub_empty_sort_test.test | RUN | 0.184219 | 0.487669 | 0.623932 | 0.001258 | 0.001356 | 0.001190 |
| hub_api_test.test | RUN | 2.206725 | 17.183114 | 8.879528 | 0.003537 | 0.003271 | 0.003053 |
| global_resource_test.test | RUN | 0.097043 | 0.323401 | 0.318801 | 0.001381 | 0.001267 | 0.001212 |
| flat_tree_test.test | RUN | 4.044419 | 27.029420 | 17.346861 | 0.001280 | 0.001342 | 0.001375 |
| flat_set_test.test | RUN | 5.096839 | 33.991317 | 22.397565 | 0.007496 | 0.006552 | 0.006918 |
| flat_set_adaptor_test.test | RUN | 3.755157 | 29.858156 | 17.550303 | 0.007515 | 0.006657 | 0.006955 |
| flat_map_test.test | RUN | 8.203561 | 50.774434 | 37.175075 | 0.008766 | 0.007912 | 0.007458 |
| flat_map_adaptor_test.test | RUN | 5.169100 | 37.089216 | 25.849707 | 0.007776 | 0.007441 | 0.007405 |
| explicit_inst_vector_test.test | RUN | 0.798880 | 4.971959 | 3.863756 | 0.001137 | 0.001111 | 0.001259 |
| explicit_inst_string_test.test | RUN | 1.083826 | 8.815868 | 5.431553 | 0.001408 | 0.001273 | 0.001085 |
| explicit_inst_static_vector_test.test | RUN | 0.091989 | 0.323430 | 0.359480 | 0.001172 | 0.001285 | 0.001172 |
| explicit_inst_stable_vector_test.test | RUN | 0.628729 | 3.187306 | 2.454636 | 0.001224 | 0.001191 | 0.001230 |
| explicit_inst_small_vector_test.test | RUN | 0.523106 | 2.881363 | 2.310691 | 0.001708 | 0.001228 | 0.001211 |
| explicit_inst_slist_test.test | RUN | 0.388900 | 2.592968 | 1.776664 | 0.001226 | 0.001187 | 0.001276 |
| explicit_inst_set_test.test | RUN | 0.563134 | 2.923906 | 2.062240 | 0.001212 | 0.001223 | 0.001021 |
| explicit_inst_map_test.test | RUN | 0.610891 | 3.130960 | 2.255253 | 0.001235 | 0.001279 | 0.001055 |
| explicit_inst_list_test.test | RUN | 0.134808 | 0.713906 | 0.565713 | 0.001095 | 0.001243 | 0.001126 |
| explicit_inst_flat_set_test.test | RUN | 3.371934 | 22.367027 | 13.342737 | 0.001335 | 0.001194 | 0.001078 |
| explicit_inst_flat_map_test.test | RUN | 3.599712 | 23.593928 | 15.009877 | 0.001389 | 0.001234 | 0.001146 |
| explicit_inst_devector_test.test | RUN | 0.434801 | 2.808263 | 1.884629 | 0.001212 | 0.001156 | 0.001068 |
| explicit_inst_deque_test.test | RUN | 0.446249 | 3.077196 | 2.065251 | 0.001371 | 0.001199 | 0.001052 |
| devector_test.test | RUN | 5.951926 | 37.563590 | 24.682005 | 0.003219 | 0.002921 | 0.003694 |
| devector_options_test.test | RUN | 0.272604 | 1.670244 | 1.036835 | 0.001558 | 0.001407 | 0.001384 |
| deque_test.test | RUN | 4.531988 | 19.002294 | 17.451095 | 0.394998 | 0.362808 | 0.438288 |
| deque_options_test.test | RUN | 0.209058 | 0.605884 | 0.755425 | 0.001358 | 0.001357 | 0.001240 |
| copy_move_algo_test.test | RUN | 0.187741 | 0.725563 | 0.663740 | 0.001672 | 0.001374 | 0.001449 |
| common_iterator_test.test | RUN | 0.013318 | 0.034954 | 0.035876 | 0.000515 | 0.000518 | 0.001112 |
| boost_iterator_comp_test.test | RUN | 0.272823 | 0.859325 | 0.963919 | 0.001182 | 0.001215 | 0.001181 |
| allocator_traits_test.test | RUN | 0.155887 | 0.362248 | 0.447311 | 0.001305 | 0.001234 | 0.001189 |
| alloc_full_test.test | RUN | 0.185771 | 0.806998 | 0.706637 | 0.004041 | 0.003814 | 0.003884 |
| alloc_basic_test.test | RUN | 0.156480 | 0.563776 | 0.508053 | 0.001339 | 0.001256 | 0.001272 |
| adaptive_pool_test.test | RUN | 2.476318 | 12.590073 | 9.795541 | 0.012753 | 0.007846 | 0.012443 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.012× | 1.009×, 1.016× | 1.004× |
| clang | 1.070× | 1.076×, 1.064× | 1.008× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45241427099).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 3 | 0.009084s | 0.008150s | 0.009056s | byte equality observed |
| alloc_basic_test.test | 10 | 0.000821s | 0.000826s | 0.000830s | byte equality observed |
| alloc_full_test.test | 7 | 0.002787s | 0.002704s | 0.002883s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000774s | 0.000774s | 0.000767s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.000786s | 0.000797s | 0.000795s | byte equality observed |
| common_iterator_test.test | 10 | 0.000365s | 0.000367s | 0.000799s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001169s | 0.000895s | 0.001018s | byte equality observed |
| deque_options_test.test | 10 | 0.000862s | 0.000859s | 0.000839s | byte equality observed |
| deque_test.test | 1 | 0.372012s | 0.370385s | 0.445082s | byte equality observed |
| devector_options_test.test | 10 | 0.000890s | 0.000856s | 0.000845s | byte equality observed |
| devector_test.test | 6 | 0.002869s | 0.002786s | 0.003615s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000716s | 0.000725s | 0.000726s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000717s | 0.000719s | 0.000733s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000725s | 0.000735s | 0.000754s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000727s | 0.000732s | 0.000740s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000715s | 0.000714s | 0.000719s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000726s | 0.000731s | 0.000743s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000722s | 0.000716s | 0.000733s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000739s | 0.000724s | 0.000728s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000725s | 0.000730s | 0.000716s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000731s | 0.000736s | 0.000724s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000717s | 0.000721s | 0.000724s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000727s | 0.000734s | 0.000726s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000740s | 0.000733s | 0.000727s | byte equality observed |
| flat_map_adaptor_test.test | 4 | 0.005686s | 0.005346s | 0.005438s | byte equality observed |
| flat_map_test.test | 4 | 0.006203s | 0.005725s | 0.005517s | byte equality observed |
| flat_set_adaptor_test.test | 4 | 0.005522s | 0.005018s | 0.005312s | byte equality observed |
| flat_set_test.test | 4 | 0.005478s | 0.004852s | 0.005186s | byte equality observed |
| flat_tree_test.test | 10 | 0.000749s | 0.000778s | 0.000728s | byte equality observed |
| global_resource_test.test | 10 | 0.000768s | 0.000771s | 0.000760s | byte equality observed |
| hub_api_test.test | 8 | 0.002558s | 0.002239s | 0.002173s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000742s | 0.000746s | 0.000726s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.051354s | 0.053783s | 0.055463s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.000775s | 0.000768s | 0.000805s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.000792s | 0.000791s | 0.000777s | byte equality observed |
| hub_sort_test.test | 1 | 0.429007s | 0.441667s | 0.415727s | byte equality observed |
| hub_stability_test.test | 10 | 0.000962s | 0.000973s | 0.000999s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000746s | 0.000748s | 0.000763s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000766s | 0.000763s | 0.000785s | byte equality observed |
| is_constructible_test.test | 10 | 0.000349s | 0.000354s | 0.000713s | byte equality observed |
| list_test.test | 2 | 0.015466s | 0.015454s | 0.015914s | byte equality observed |
| map_test.test | 3 | 0.007593s | 0.007311s | 0.007211s | byte equality observed |
| memory_resource_test.test | 10 | 0.000757s | 0.000733s | 0.000749s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000759s | 0.000751s | 0.000762s | byte equality observed |
| nest_api_test.test | 10 | 0.001641s | 0.001628s | 0.001651s | byte equality observed |
| nest_test.test | 10 | 0.000795s | 0.000797s | 0.000783s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001135s | 0.001111s | 0.001149s | byte equality observed |
| node_allocator_test.test | 3 | 0.006622s | 0.006536s | 0.006781s | byte equality observed |
| node_handle_test.test | 10 | 0.000776s | 0.000741s | 0.000766s | byte equality observed |
| null_iterators_test.test | 10 | 0.000770s | 0.000733s | 0.000761s | byte equality observed |
| pair_test.test | 10 | 0.000759s | 0.000754s | 0.000762s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000733s | 0.000731s | 0.000735s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000749s | 0.000736s | 0.000761s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000739s | 0.000726s | 0.000751s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000750s | 0.000722s | 0.000740s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000741s | 0.000750s | 0.000754s | byte equality observed |
| pmr_list_test.test | 10 | 0.000749s | 0.000737s | 0.000763s | byte equality observed |
| pmr_map_test.test | 10 | 0.000746s | 0.000728s | 0.000740s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000745s | 0.000742s | 0.000737s | byte equality observed |
| pmr_set_test.test | 10 | 0.000749s | 0.000753s | 0.000747s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000753s | 0.000741s | 0.000760s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000739s | 0.000736s | 0.000751s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000749s | 0.000764s | 0.000759s | byte equality observed |
| pmr_string_test.test | 10 | 0.000358s | 0.000346s | 0.000772s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000347s | 0.000355s | 0.000766s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.000751s | 0.000759s | 0.000778s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.000769s | 0.000760s | 0.000795s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.000765s | 0.000758s | 0.000822s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.000752s | 0.000755s | 0.000806s | byte equality observed |
| segtor_options_test.test | 10 | 0.000818s | 0.000806s | 0.000856s | byte equality observed |
| segtor_test.test | 1 | 0.456950s | 0.463989s | 0.495833s | byte equality observed |
| set_test.test | 2 | 0.010738s | 0.009482s | 0.010383s | byte equality observed |
| slist_test.test | 2 | 0.016165s | 0.015978s | 0.015970s | byte equality observed |
| small_vector_options_test.test | 10 | 0.000837s | 0.000826s | 0.000825s | byte equality observed |
| small_vector_test.test | 7 | 0.001696s | 0.001595s | 0.002757s | byte equality observed |
| stable_vector_test.test | 1 | 0.027720s | 0.027966s | 0.028670s | byte equality observed |
| static_vector_options_test.test | 10 | 0.000810s | 0.000772s | 0.000812s | byte equality observed |
| static_vector_test.test | 10 | 0.001069s | 0.000990s | 0.001029s | byte equality observed |
| string_options_test.test | 10 | 0.000776s | 0.000796s | 0.000782s | byte equality observed |
| string_test.test | 3 | 0.009204s | 0.008940s | 0.009322s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000759s | 0.000758s | 0.000738s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.000795s | 0.000781s | 0.000770s | byte equality observed |
| throw_exception_test.test | 10 | 0.000742s | 0.000721s | 0.000721s | byte equality observed |
| tree_test.test | 10 | 0.000738s | 0.000734s | 0.000734s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.000781s | 0.000772s | 0.000779s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000732s | 0.000740s | 0.000728s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000342s | 0.000340s | 0.000736s | byte equality observed |
| vector_options_test.test | 10 | 0.000861s | 0.000849s | 0.000845s | byte equality observed |
| vector_test.test | 5 | 0.002980s | 0.002968s | 0.003944s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45241427099).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
