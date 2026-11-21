# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 5.885478 | 29.720192 | 24.487673 | 0.004600 | 0.004286 | 0.006088 |
| vector_options_test.test | RUN | 0.267255 | 1.268437 | 0.987620 | 0.001278 | 0.001507 | 0.001446 |
| uses_allocator_test.test | RUN | 0.043010 | 0.097541 | 0.128650 | 0.000474 | 0.000507 | 0.001183 |
| uses_allocator_construction_test.test | RUN | 0.137821 | 0.376698 | 0.424926 | 0.001104 | 0.001312 | 0.001199 |
| unsynchronized_pool_resource_test.test | RUN | 0.179667 | 1.194255 | 0.574955 | 0.001242 | 0.001280 | 0.001267 |
| tree_test.test | RUN | 0.827002 | 4.434420 | 3.472387 | 0.001100 | 0.001255 | 0.001234 |
| throw_exception_test.test | RUN | 0.095995 | 0.246821 | 0.298258 | 0.001161 | 0.001401 | 0.001390 |
| synchronized_pool_resource_test.test | RUN | 0.172274 | 1.192660 | 0.583334 | 0.001198 | 0.001287 | 0.001270 |
| string_view_compat_test.test | RUN | 0.299645 | 2.392442 | 1.133137 | 0.001198 | 0.001281 | 0.001224 |
| string_test.test | RUN | 1.421758 | 9.166841 | 6.432970 | 0.014138 | 0.012510 | 0.013186 |
| string_options_test.test | RUN | 0.242891 | 1.943460 | 0.904775 | 0.001331 | 0.001315 | 0.001298 |
| static_vector_test.test | RUN | 1.432929 | 7.691598 | 6.379291 | 0.001771 | 0.001763 | 0.001823 |
| static_vector_options_test.test | RUN | 0.165297 | 0.495609 | 0.550043 | 0.001258 | 0.001424 | 0.001327 |
| stable_vector_test.test | RUN | 3.412062 | 16.163405 | 12.621633 | 0.031849 | 0.032127 | 0.033452 |
| small_vector_test.test | RUN | 2.189735 | 11.126623 | 9.042448 | 0.002774 | 0.002405 | 0.004437 |
| small_vector_options_test.test | RUN | 0.305552 | 1.327499 | 1.119233 | 0.001430 | 0.001476 | 0.001450 |
| slist_test.test | RUN | 2.033343 | 10.192222 | 8.048390 | 0.023541 | 0.023172 | 0.023088 |
| set_test.test | RUN | 3.105170 | 18.868866 | 14.638110 | 0.014478 | 0.012880 | 0.013081 |
| segtor_test.test | RUN | 3.977106 | 20.689214 | 16.182084 | 0.744597 | 0.759659 | 0.715834 |
| segtor_options_test.test | RUN | 0.198373 | 0.557111 | 0.694127 | 0.001397 | 0.001510 | 0.001390 |
| scoped_allocator_usage_test.test | RUN | 0.708710 | 2.998341 | 2.668861 | 0.001312 | 0.001332 | 0.001258 |
| scoped_allocator_adaptor_test.test | RUN | 0.295783 | 0.818632 | 1.120313 | 0.001204 | 0.001171 | 0.001376 |
| resource_adaptor_test.test | RUN | 0.154032 | 0.478551 | 0.505235 | 0.001153 | 0.001178 | 0.001435 |
| polymorphic_allocator_test.test | RUN | 0.125878 | 0.385452 | 0.414116 | 0.001211 | 0.001258 | 0.001372 |
| pmr_vector_test.test | RUN | 0.073093 | 0.142874 | 0.214199 | 0.000477 | 0.000508 | 0.001131 |
| pmr_string_test.test | RUN | 0.141393 | 0.301152 | 0.407930 | 0.000475 | 0.000506 | 0.001194 |
| pmr_stable_vector_test.test | RUN | 0.171781 | 0.510108 | 0.602875 | 0.001141 | 0.001072 | 0.001287 |
| pmr_small_vector_test.test | RUN | 0.084803 | 0.197805 | 0.265812 | 0.001160 | 0.001078 | 0.001281 |
| pmr_slist_test.test | RUN | 0.127443 | 0.704887 | 0.616268 | 0.001142 | 0.001081 | 0.000906 |
| pmr_set_test.test | RUN | 0.129471 | 0.339345 | 0.448572 | 0.001166 | 0.001138 | 0.001251 |
| pmr_nest_test.test | RUN | 0.100859 | 0.232055 | 0.300778 | 0.001131 | 0.001103 | 0.001176 |
| pmr_map_test.test | RUN | 0.136420 | 0.350774 | 0.447975 | 0.001089 | 0.001118 | 0.001491 |
| pmr_list_test.test | RUN | 0.091784 | 0.214988 | 0.287059 | 0.001193 | 0.001226 | 0.001198 |
| pmr_hub_test.test | RUN | 0.129336 | 0.298351 | 0.363436 | 0.001350 | 0.001097 | 0.001287 |
| pmr_flat_set_test.test | RUN | 0.100736 | 0.233922 | 0.316145 | 0.001124 | 0.001348 | 0.001357 |
| pmr_flat_map_test.test | RUN | 0.121578 | 0.268096 | 0.370687 | 0.001074 | 0.001215 | 0.001332 |
| pmr_devector_test.test | RUN | 0.082898 | 0.239567 | 0.276581 | 0.000777 | 0.001107 | 0.001224 |
| pmr_deque_test.test | RUN | 0.075447 | 0.200329 | 0.286180 | 0.001019 | 0.001298 | 0.001250 |
| pair_test.test | RUN | 0.197244 | 0.467893 | 0.624566 | 0.001114 | 0.001165 | 0.001196 |
| null_iterators_test.test | RUN | 0.310461 | 0.917264 | 1.047373 | 0.001143 | 0.001252 | 0.001173 |
| node_handle_test.test | RUN | 0.142528 | 1.200881 | 0.432393 | 0.001228 | 0.001308 | 0.001310 |
| node_allocator_test.test | RUN | 2.298307 | 12.447641 | 10.120739 | 0.009038 | 0.008786 | 0.009412 |
| new_delete_resource_test.test | RUN | 0.171264 | 0.708691 | 0.599299 | 0.001660 | 0.001930 | 0.001878 |
| nest_test.test | RUN | 0.490439 | 3.397501 | 2.082282 | 0.001198 | 0.001325 | 0.001478 |
| nest_api_test.test | RUN | 0.824030 | 6.342514 | 4.041790 | 0.002062 | 0.002467 | 0.002258 |
| monotonic_buffer_resource_test.test | RUN | 0.168884 | 1.290762 | 0.608139 | 0.001185 | 0.001252 | 0.001264 |
| memory_resource_test.test | RUN | 0.099676 | 0.351430 | 0.347920 | 0.001208 | 0.001143 | 0.001313 |
| map_test.test | RUN | 4.205350 | 21.052226 | 20.613880 | 0.010555 | 0.009961 | 0.009787 |
| list_test.test | RUN | 2.137385 | 10.994980 | 8.690054 | 0.021923 | 0.021606 | 0.022101 |
| is_constructible_test.test | RUN | 0.057457 | 0.125249 | 0.185269 | 0.000460 | 0.000534 | 0.001156 |
| insert_vs_emplace_test.test | RUN | 0.207389 | 0.854358 | 1.158135 | 0.001315 | 0.001211 | 0.001368 |
| hub_uses_allocator_test.test | RUN | 0.227610 | 0.714598 | 0.735441 | 0.001072 | 0.001194 | 0.001223 |
| hub_stability_test.test | RUN | 0.519857 | 3.470191 | 2.885352 | 0.001561 | 0.001591 | 0.001623 |
| hub_sort_test.test | RUN | 0.329990 | 1.535884 | 1.399843 | 0.527675 | 0.530846 | 0.506263 |
| hub_pocxx_test.test | RUN | 0.297993 | 1.795096 | 0.991421 | 0.001196 | 0.001297 | 0.001234 |
| hub_new_extended_alignment_test.test | RUN | 0.159445 | 0.535966 | 0.532682 | 0.001116 | 0.001192 | 0.001206 |
| hub_exception_safety_test.test | RUN | 0.634131 | 4.373548 | 2.800486 | 0.060005 | 0.066277 | 0.065349 |
| hub_empty_sort_test.test | RUN | 0.180219 | 0.488357 | 0.618787 | 0.001332 | 0.001242 | 0.001239 |
| hub_api_test.test | RUN | 2.108391 | 17.112402 | 9.263702 | 0.003457 | 0.003324 | 0.003090 |
| global_resource_test.test | RUN | 0.099089 | 0.329281 | 0.317075 | 0.001249 | 0.001251 | 0.001312 |
| flat_tree_test.test | RUN | 3.973570 | 27.071760 | 17.930647 | 0.001247 | 0.001261 | 0.001306 |
| flat_set_test.test | RUN | 4.980748 | 33.936040 | 23.278710 | 0.007295 | 0.006639 | 0.007159 |
| flat_set_adaptor_test.test | RUN | 3.694354 | 30.186942 | 17.877690 | 0.007185 | 0.006872 | 0.007240 |
| flat_map_test.test | RUN | 8.020997 | 50.729931 | 37.811940 | 0.008504 | 0.007954 | 0.007489 |
| flat_map_adaptor_test.test | RUN | 5.087791 | 37.301113 | 26.795744 | 0.007700 | 0.007697 | 0.007348 |
| explicit_inst_vector_test.test | RUN | 0.785444 | 5.009194 | 3.991894 | 0.001237 | 0.001209 | 0.001349 |
| explicit_inst_string_test.test | RUN | 1.055510 | 8.920599 | 5.486382 | 0.001148 | 0.001323 | 0.001325 |
| explicit_inst_static_vector_test.test | RUN | 0.094672 | 0.317475 | 0.371711 | 0.001154 | 0.001195 | 0.001149 |
| explicit_inst_stable_vector_test.test | RUN | 0.617584 | 3.166607 | 2.526464 | 0.001308 | 0.001177 | 0.001422 |
| explicit_inst_small_vector_test.test | RUN | 0.499211 | 2.842045 | 2.335749 | 0.001206 | 0.001294 | 0.001189 |
| explicit_inst_slist_test.test | RUN | 0.381000 | 2.578959 | 1.811089 | 0.001189 | 0.001324 | 0.001267 |
| explicit_inst_set_test.test | RUN | 0.540816 | 2.995891 | 2.077516 | 0.001128 | 0.001282 | 0.001203 |
| explicit_inst_map_test.test | RUN | 0.594044 | 3.112773 | 2.310376 | 0.001080 | 0.001305 | 0.001142 |
| explicit_inst_list_test.test | RUN | 0.133523 | 0.723103 | 0.567606 | 0.001173 | 0.001265 | 0.001137 |
| explicit_inst_flat_set_test.test | RUN | 3.267016 | 22.924758 | 13.785641 | 0.001331 | 0.001460 | 0.001318 |
| explicit_inst_flat_map_test.test | RUN | 3.531788 | 24.074596 | 15.103412 | 0.001145 | 0.001127 | 0.001150 |
| explicit_inst_devector_test.test | RUN | 0.423992 | 2.833137 | 1.947360 | 0.001150 | 0.001266 | 0.001310 |
| explicit_inst_deque_test.test | RUN | 0.430817 | 3.019882 | 2.058981 | 0.001139 | 0.001346 | 0.001173 |
| devector_test.test | RUN | 6.119621 | 37.282539 | 28.516478 | 0.002995 | 0.002926 | 0.003853 |
| devector_options_test.test | RUN | 0.269966 | 1.653475 | 1.053962 | 0.001335 | 0.001339 | 0.001632 |
| deque_test.test | RUN | 4.080120 | 22.639823 | 14.587400 | 0.458239 | 0.360123 | 0.435479 |
| deque_options_test.test | RUN | 0.201937 | 0.611406 | 0.769221 | 0.001306 | 0.001411 | 0.001330 |
| copy_move_algo_test.test | RUN | 0.179632 | 0.733911 | 0.702081 | 0.001467 | 0.001571 | 0.001560 |
| common_iterator_test.test | RUN | 0.012805 | 0.036174 | 0.038699 | 0.000472 | 0.000485 | 0.001255 |
| boost_iterator_comp_test.test | RUN | 0.264413 | 0.864341 | 1.037151 | 0.001117 | 0.001252 | 0.001374 |
| allocator_traits_test.test | RUN | 0.148369 | 0.369531 | 0.469195 | 0.001188 | 0.001258 | 0.001294 |
| alloc_full_test.test | RUN | 0.179698 | 0.801314 | 0.666729 | 0.003783 | 0.003946 | 0.004229 |
| alloc_basic_test.test | RUN | 0.144963 | 0.570274 | 0.517141 | 0.001168 | 0.001428 | 0.001393 |
| adaptive_pool_test.test | RUN | 2.371526 | 9.199034 | 9.938524 | 0.012089 | 0.007969 | 0.012457 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.008× | 1.012×, 1.005× | 1.006× |
| clang | 1.066× | 1.066×, 1.066× | 0.996× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44801983152).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 3 | 0.008945s | 0.008178s | 0.009035s | byte equality observed |
| alloc_basic_test.test | 10 | 0.000819s | 0.000812s | 0.000802s | byte equality observed |
| alloc_full_test.test | 7 | 0.002735s | 0.002724s | 0.002803s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000754s | 0.000744s | 0.000781s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.000799s | 0.000784s | 0.000790s | byte equality observed |
| common_iterator_test.test | 10 | 0.000363s | 0.000373s | 0.000798s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001170s | 0.000917s | 0.001016s | byte equality observed |
| deque_options_test.test | 10 | 0.000859s | 0.000841s | 0.000831s | byte equality observed |
| deque_test.test | 1 | 0.371098s | 0.368435s | 0.442923s | byte equality observed |
| devector_options_test.test | 10 | 0.000889s | 0.000845s | 0.000831s | byte equality observed |
| devector_test.test | 5 | 0.002893s | 0.002782s | 0.003600s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000724s | 0.000715s | 0.000703s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000704s | 0.000708s | 0.000705s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000713s | 0.000730s | 0.000704s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000711s | 0.000731s | 0.000716s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000692s | 0.000731s | 0.000698s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000705s | 0.000734s | 0.000697s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000716s | 0.000720s | 0.000705s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000722s | 0.000719s | 0.000705s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000720s | 0.000726s | 0.000709s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000729s | 0.000729s | 0.000707s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000719s | 0.000712s | 0.000695s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000732s | 0.000737s | 0.000703s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000725s | 0.000729s | 0.000694s | byte equality observed |
| flat_map_adaptor_test.test | 4 | 0.005662s | 0.005317s | 0.005391s | byte equality observed |
| flat_map_test.test | 4 | 0.006131s | 0.005685s | 0.005465s | byte equality observed |
| flat_set_adaptor_test.test | 4 | 0.005489s | 0.004985s | 0.005266s | byte equality observed |
| flat_set_test.test | 4 | 0.005421s | 0.004798s | 0.005166s | byte equality observed |
| flat_tree_test.test | 10 | 0.000728s | 0.000737s | 0.000729s | byte equality observed |
| global_resource_test.test | 10 | 0.000758s | 0.000766s | 0.000754s | byte equality observed |
| hub_api_test.test | 8 | 0.002539s | 0.002232s | 0.002161s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000738s | 0.000761s | 0.000731s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.049475s | 0.053218s | 0.049413s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.000746s | 0.000758s | 0.000760s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.000766s | 0.000769s | 0.000762s | byte equality observed |
| hub_sort_test.test | 1 | 0.423208s | 0.434392s | 0.406909s | byte equality observed |
| hub_stability_test.test | 10 | 0.000972s | 0.000962s | 0.000968s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000752s | 0.000767s | 0.000773s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000757s | 0.000774s | 0.000772s | byte equality observed |
| is_constructible_test.test | 10 | 0.000348s | 0.000346s | 0.000741s | byte equality observed |
| list_test.test | 2 | 0.015253s | 0.015439s | 0.015859s | byte equality observed |
| map_test.test | 3 | 0.007540s | 0.007291s | 0.007193s | byte equality observed |
| memory_resource_test.test | 10 | 0.000747s | 0.000765s | 0.000761s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000761s | 0.000771s | 0.000773s | byte equality observed |
| nest_api_test.test | 10 | 0.001635s | 0.001646s | 0.001658s | byte equality observed |
| nest_test.test | 10 | 0.000773s | 0.000797s | 0.000793s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001123s | 0.001111s | 0.001106s | byte equality observed |
| node_allocator_test.test | 3 | 0.006543s | 0.006528s | 0.006668s | byte equality observed |
| node_handle_test.test | 10 | 0.000752s | 0.000769s | 0.000762s | byte equality observed |
| null_iterators_test.test | 10 | 0.000765s | 0.000754s | 0.000767s | byte equality observed |
| pair_test.test | 10 | 0.000755s | 0.000758s | 0.000755s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000721s | 0.000748s | 0.000736s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000745s | 0.000750s | 0.000749s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000746s | 0.000732s | 0.000734s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000738s | 0.000749s | 0.000726s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000754s | 0.000748s | 0.000724s | byte equality observed |
| pmr_list_test.test | 10 | 0.000750s | 0.000741s | 0.000729s | byte equality observed |
| pmr_map_test.test | 10 | 0.000742s | 0.000750s | 0.000741s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000755s | 0.000741s | 0.000748s | byte equality observed |
| pmr_set_test.test | 10 | 0.000741s | 0.000741s | 0.000747s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000734s | 0.000750s | 0.000765s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000731s | 0.000756s | 0.000770s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000744s | 0.000743s | 0.000789s | byte equality observed |
| pmr_string_test.test | 10 | 0.000359s | 0.000349s | 0.000782s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000353s | 0.000354s | 0.000750s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.000760s | 0.000767s | 0.000805s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.000757s | 0.000755s | 0.000833s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.000759s | 0.000756s | 0.000821s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.000766s | 0.000766s | 0.000819s | byte equality observed |
| segtor_options_test.test | 10 | 0.000805s | 0.000809s | 0.000848s | byte equality observed |
| segtor_test.test | 1 | 0.455172s | 0.461402s | 0.493450s | byte equality observed |
| set_test.test | 2 | 0.010589s | 0.009391s | 0.010273s | byte equality observed |
| slist_test.test | 2 | 0.016055s | 0.015861s | 0.015825s | byte equality observed |
| small_vector_options_test.test | 10 | 0.000829s | 0.000802s | 0.000826s | byte equality observed |
| small_vector_test.test | 7 | 0.001683s | 0.001585s | 0.002723s | byte equality observed |
| stable_vector_test.test | 1 | 0.027527s | 0.027794s | 0.028268s | byte equality observed |
| static_vector_options_test.test | 10 | 0.000798s | 0.000774s | 0.000815s | byte equality observed |
| static_vector_test.test | 10 | 0.001057s | 0.000981s | 0.001022s | byte equality observed |
| string_options_test.test | 10 | 0.000777s | 0.000785s | 0.000775s | byte equality observed |
| string_test.test | 3 | 0.009120s | 0.008905s | 0.009237s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000752s | 0.000747s | 0.000756s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.000776s | 0.000780s | 0.000785s | byte equality observed |
| throw_exception_test.test | 10 | 0.000720s | 0.000736s | 0.000735s | byte equality observed |
| tree_test.test | 10 | 0.000729s | 0.000726s | 0.000733s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.000779s | 0.000776s | 0.000785s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000730s | 0.000715s | 0.000741s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000336s | 0.000309s | 0.000717s | byte equality observed |
| vector_options_test.test | 10 | 0.000850s | 0.000838s | 0.000834s | byte equality observed |
| vector_test.test | 5 | 0.002945s | 0.002946s | 0.003899s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44801983152).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
