# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 5.891975 | 29.050999 | 24.138200 | 0.004528 | 0.004435 | 0.005976 |
| vector_options_test.test | RUN | 0.266958 | 1.265035 | 0.985805 | 0.001538 | 0.001421 | 0.001473 |
| uses_allocator_test.test | RUN | 0.045294 | 0.098251 | 0.129601 | 0.000491 | 0.000537 | 0.001161 |
| uses_allocator_construction_test.test | RUN | 0.135884 | 0.375769 | 0.424413 | 0.001182 | 0.001159 | 0.001166 |
| unsynchronized_pool_resource_test.test | RUN | 0.178875 | 1.187587 | 0.575930 | 0.001251 | 0.001488 | 0.001203 |
| tree_test.test | RUN | 0.835965 | 4.404670 | 3.472452 | 0.001134 | 0.001261 | 0.001174 |
| throw_exception_test.test | RUN | 0.097191 | 0.246915 | 0.294937 | 0.001193 | 0.001179 | 0.001201 |
| synchronized_pool_resource_test.test | RUN | 0.177686 | 1.179377 | 0.581529 | 0.001210 | 0.001304 | 0.001315 |
| string_view_compat_test.test | RUN | 0.298565 | 2.379745 | 1.125607 | 0.001290 | 0.001336 | 0.001191 |
| string_test.test | RUN | 1.429013 | 9.098345 | 6.404330 | 0.013268 | 0.012615 | 0.013410 |
| string_options_test.test | RUN | 0.247188 | 1.932402 | 0.890066 | 0.001238 | 0.001435 | 0.001377 |
| static_vector_test.test | RUN | 1.457124 | 7.707479 | 6.288040 | 0.001804 | 0.001585 | 0.001588 |
| static_vector_options_test.test | RUN | 0.166841 | 0.489491 | 0.552011 | 0.001336 | 0.001321 | 0.001274 |
| stable_vector_test.test | RUN | 3.382924 | 16.308657 | 12.681002 | 0.031119 | 0.031222 | 0.033391 |
| small_vector_test.test | RUN | 2.203274 | 11.187128 | 8.948223 | 0.002692 | 0.002490 | 0.003754 |
| small_vector_options_test.test | RUN | 0.302364 | 1.309092 | 1.137005 | 0.001368 | 0.001464 | 0.001473 |
| slist_test.test | RUN | 2.036387 | 10.111878 | 7.726292 | 0.022831 | 0.022609 | 0.022877 |
| set_test.test | RUN | 3.111374 | 18.903983 | 14.525391 | 0.014574 | 0.012795 | 0.013587 |
| segtor_test.test | RUN | 3.994915 | 20.611257 | 16.375609 | 0.717603 | 0.741440 | 0.716406 |
| segtor_options_test.test | RUN | 0.197131 | 0.554612 | 0.672379 | 0.001424 | 0.001298 | 0.001290 |
| scoped_allocator_usage_test.test | RUN | 0.705464 | 3.000920 | 2.605702 | 0.001285 | 0.001326 | 0.001236 |
| scoped_allocator_adaptor_test.test | RUN | 0.301511 | 0.797198 | 1.087266 | 0.001260 | 0.001319 | 0.001352 |
| resource_adaptor_test.test | RUN | 0.155290 | 0.489731 | 0.492013 | 0.001215 | 0.001162 | 0.001154 |
| polymorphic_allocator_test.test | RUN | 0.130391 | 0.385672 | 0.409113 | 0.001209 | 0.001223 | 0.001087 |
| pmr_vector_test.test | RUN | 0.071184 | 0.144171 | 0.213369 | 0.000545 | 0.000518 | 0.001225 |
| pmr_string_test.test | RUN | 0.139468 | 0.305667 | 0.404412 | 0.000456 | 0.000488 | 0.001235 |
| pmr_stable_vector_test.test | RUN | 0.169404 | 0.511381 | 0.588870 | 0.001219 | 0.001282 | 0.001258 |
| pmr_small_vector_test.test | RUN | 0.088732 | 0.197985 | 0.258792 | 0.001186 | 0.001226 | 0.001091 |
| pmr_slist_test.test | RUN | 0.132679 | 0.699986 | 0.600135 | 0.001158 | 0.001131 | 0.001210 |
| pmr_set_test.test | RUN | 0.138787 | 0.336706 | 0.442686 | 0.001336 | 0.001300 | 0.001139 |
| pmr_nest_test.test | RUN | 0.109548 | 0.233958 | 0.293910 | 0.001100 | 0.001238 | 0.001175 |
| pmr_map_test.test | RUN | 0.148020 | 0.346629 | 0.435021 | 0.001101 | 0.001270 | 0.001289 |
| pmr_list_test.test | RUN | 0.094505 | 0.213774 | 0.284137 | 0.001116 | 0.001226 | 0.001229 |
| pmr_hub_test.test | RUN | 0.135848 | 0.295596 | 0.357268 | 0.001199 | 0.001186 | 0.001274 |
| pmr_flat_set_test.test | RUN | 0.101911 | 0.233729 | 0.310195 | 0.001125 | 0.001298 | 0.001206 |
| pmr_flat_map_test.test | RUN | 0.125900 | 0.267122 | 0.356258 | 0.001039 | 0.001189 | 0.001380 |
| pmr_devector_test.test | RUN | 0.084872 | 0.236135 | 0.268735 | 0.001147 | 0.001176 | 0.001345 |
| pmr_deque_test.test | RUN | 0.081239 | 0.197748 | 0.294445 | 0.001165 | 0.001275 | 0.001366 |
| pair_test.test | RUN | 0.199682 | 0.465929 | 0.583399 | 0.001178 | 0.001244 | 0.001375 |
| null_iterators_test.test | RUN | 0.326405 | 0.919892 | 1.058899 | 0.001245 | 0.001316 | 0.001200 |
| node_handle_test.test | RUN | 0.142306 | 1.215804 | 0.400882 | 0.001437 | 0.001199 | 0.001431 |
| node_allocator_test.test | RUN | 2.414546 | 12.637140 | 9.914621 | 0.009163 | 0.009068 | 0.009496 |
| new_delete_resource_test.test | RUN | 0.176386 | 0.717998 | 0.576887 | 0.001577 | 0.001769 | 0.001839 |
| nest_test.test | RUN | 0.498472 | 3.366619 | 2.098255 | 0.001186 | 0.001394 | 0.001311 |
| nest_api_test.test | RUN | 0.737673 | 6.465277 | 4.138046 | 0.002490 | 0.002413 | 0.002402 |
| monotonic_buffer_resource_test.test | RUN | 0.176526 | 1.309384 | 0.586917 | 0.001344 | 0.001242 | 0.001294 |
| memory_resource_test.test | RUN | 0.105703 | 0.328489 | 0.323790 | 0.001199 | 0.001092 | 0.001152 |
| map_test.test | RUN | 4.233691 | 21.196410 | 20.664057 | 0.010752 | 0.010020 | 0.009909 |
| list_test.test | RUN | 2.160407 | 11.046607 | 8.578043 | 0.021185 | 0.022186 | 0.022817 |
| is_constructible_test.test | RUN | 0.063764 | 0.127349 | 0.190512 | 0.000524 | 0.000467 | 0.001261 |
| insert_vs_emplace_test.test | RUN | 0.214863 | 0.849562 | 1.117066 | 0.001292 | 0.001278 | 0.001427 |
| hub_uses_allocator_test.test | RUN | 0.229661 | 0.723185 | 0.777962 | 0.001127 | 0.001387 | 0.001350 |
| hub_stability_test.test | RUN | 0.526854 | 3.466786 | 2.868883 | 0.001510 | 0.001490 | 0.001466 |
| hub_sort_test.test | RUN | 0.334933 | 1.549355 | 1.395507 | 0.530018 | 0.538748 | 0.504070 |
| hub_pocxx_test.test | RUN | 0.301500 | 1.859044 | 1.008878 | 0.001204 | 0.001267 | 0.001453 |
| hub_new_extended_alignment_test.test | RUN | 0.157182 | 0.521036 | 0.534532 | 0.001169 | 0.001164 | 0.001299 |
| hub_exception_safety_test.test | RUN | 0.634520 | 4.292328 | 2.907012 | 0.062823 | 0.064331 | 0.061702 |
| hub_empty_sort_test.test | RUN | 0.182806 | 0.493120 | 0.632421 | 0.001233 | 0.001364 | 0.001376 |
| hub_api_test.test | RUN | 2.158541 | 17.367069 | 9.291741 | 0.003439 | 0.003309 | 0.003241 |
| global_resource_test.test | RUN | 0.099192 | 0.335193 | 0.304483 | 0.001358 | 0.001319 | 0.001382 |
| flat_tree_test.test | RUN | 4.017519 | 27.220193 | 17.796914 | 0.001188 | 0.001268 | 0.001222 |
| flat_set_test.test | RUN | 4.968237 | 34.614045 | 23.007510 | 0.007427 | 0.006257 | 0.007066 |
| flat_set_adaptor_test.test | RUN | 3.715484 | 30.201160 | 18.169972 | 0.007478 | 0.006782 | 0.007274 |
| flat_map_test.test | RUN | 8.092920 | 51.536995 | 38.169046 | 0.008125 | 0.008225 | 0.007596 |
| flat_map_adaptor_test.test | RUN | 5.137336 | 37.562327 | 26.468727 | 0.007793 | 0.007619 | 0.007562 |
| explicit_inst_vector_test.test | RUN | 0.785528 | 4.991383 | 3.944836 | 0.001211 | 0.001303 | 0.001196 |
| explicit_inst_string_test.test | RUN | 1.056894 | 9.054720 | 5.601227 | 0.001338 | 0.001374 | 0.001257 |
| explicit_inst_static_vector_test.test | RUN | 0.094628 | 0.315558 | 0.370219 | 0.001109 | 0.001151 | 0.001208 |
| explicit_inst_stable_vector_test.test | RUN | 0.633366 | 3.219283 | 2.507373 | 0.001315 | 0.001375 | 0.001284 |
| explicit_inst_small_vector_test.test | RUN | 0.513865 | 2.885221 | 2.279670 | 0.001390 | 0.001448 | 0.001143 |
| explicit_inst_slist_test.test | RUN | 0.389851 | 2.626987 | 1.828560 | 0.001249 | 0.001214 | 0.000824 |
| explicit_inst_set_test.test | RUN | 0.545080 | 3.023556 | 2.046031 | 0.001180 | 0.001243 | 0.001283 |
| explicit_inst_map_test.test | RUN | 0.613181 | 3.205876 | 2.248090 | 0.001230 | 0.001348 | 0.001311 |
| explicit_inst_list_test.test | RUN | 0.136942 | 0.716430 | 0.578798 | 0.001235 | 0.001199 | 0.001317 |
| explicit_inst_flat_set_test.test | RUN | 3.315458 | 23.027344 | 13.707243 | 0.001117 | 0.001328 | 0.001131 |
| explicit_inst_flat_map_test.test | RUN | 3.562698 | 24.295618 | 15.264594 | 0.001035 | 0.001313 | 0.001061 |
| explicit_inst_devector_test.test | RUN | 0.428911 | 2.875455 | 1.930527 | 0.001165 | 0.001323 | 0.001164 |
| explicit_inst_deque_test.test | RUN | 0.441697 | 3.089020 | 2.024642 | 0.001445 | 0.001380 | 0.001273 |
| devector_test.test | RUN | 5.954420 | 34.795535 | 28.231346 | 0.003057 | 0.003153 | 0.003655 |
| devector_options_test.test | RUN | 0.269552 | 1.687348 | 1.040456 | 0.001514 | 0.001603 | 0.001436 |
| deque_test.test | RUN | 4.415859 | 24.130019 | 14.524984 | 0.362427 | 0.360005 | 0.437345 |
| deque_options_test.test | RUN | 0.188924 | 0.621829 | 0.754791 | 0.001253 | 0.001537 | 0.001230 |
| copy_move_algo_test.test | RUN | 0.183894 | 0.734859 | 0.685792 | 0.001546 | 0.001387 | 0.001472 |
| common_iterator_test.test | RUN | 0.013161 | 0.036183 | 0.038836 | 0.000472 | 0.000498 | 0.001217 |
| boost_iterator_comp_test.test | RUN | 0.270704 | 0.873573 | 0.963305 | 0.001280 | 0.001377 | 0.001278 |
| allocator_traits_test.test | RUN | 0.150839 | 0.377017 | 0.448998 | 0.001123 | 0.001256 | 0.001307 |
| alloc_full_test.test | RUN | 0.179355 | 0.808099 | 0.713969 | 0.003749 | 0.004264 | 0.004181 |
| alloc_basic_test.test | RUN | 0.147397 | 0.578237 | 0.519890 | 0.001358 | 0.001356 | 0.001339 |
| adaptive_pool_test.test | RUN | 2.327517 | 13.789405 | 9.787755 | 0.012397 | 0.011266 | 0.012499 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.009× | 1.009×, 1.009× | 0.998× |
| clang | 1.069× | 1.069×, 1.070× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44818861403).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 3 | 0.009004s | 0.008202s | 0.008933s | byte equality observed |
| alloc_basic_test.test | 10 | 0.000803s | 0.000811s | 0.000821s | byte equality observed |
| alloc_full_test.test | 8 | 0.002704s | 0.002767s | 0.002852s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000763s | 0.000736s | 0.000764s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.000774s | 0.000764s | 0.000798s | byte equality observed |
| common_iterator_test.test | 10 | 0.000362s | 0.000365s | 0.000779s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001166s | 0.000918s | 0.001004s | byte equality observed |
| deque_options_test.test | 10 | 0.000839s | 0.000848s | 0.000820s | byte equality observed |
| deque_test.test | 1 | 0.373099s | 0.369686s | 0.442404s | byte equality observed |
| devector_options_test.test | 10 | 0.000889s | 0.000836s | 0.000828s | byte equality observed |
| devector_test.test | 5 | 0.002884s | 0.002799s | 0.003621s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000716s | 0.000722s | 0.000732s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000696s | 0.000724s | 0.000709s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000709s | 0.000753s | 0.000719s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000709s | 0.000753s | 0.000732s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000693s | 0.000728s | 0.000717s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000704s | 0.000728s | 0.000720s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000707s | 0.000716s | 0.000721s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000702s | 0.000732s | 0.000722s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000706s | 0.000734s | 0.000718s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000711s | 0.000735s | 0.000734s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000696s | 0.000714s | 0.000731s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000726s | 0.000712s | 0.000742s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000710s | 0.000716s | 0.000731s | byte equality observed |
| flat_map_adaptor_test.test | 4 | 0.005646s | 0.005334s | 0.005400s | byte equality observed |
| flat_map_test.test | 4 | 0.006137s | 0.005715s | 0.005498s | byte equality observed |
| flat_set_adaptor_test.test | 4 | 0.005490s | 0.005008s | 0.005287s | byte equality observed |
| flat_set_test.test | 4 | 0.005432s | 0.004838s | 0.005162s | byte equality observed |
| flat_tree_test.test | 10 | 0.000716s | 0.000741s | 0.000736s | byte equality observed |
| global_resource_test.test | 10 | 0.000747s | 0.000767s | 0.000747s | byte equality observed |
| hub_api_test.test | 8 | 0.002526s | 0.002226s | 0.002169s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000738s | 0.000729s | 0.000732s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.050651s | 0.055201s | 0.050832s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.000754s | 0.000758s | 0.000781s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.000758s | 0.000765s | 0.000759s | byte equality observed |
| hub_sort_test.test | 1 | 0.425326s | 0.439475s | 0.411127s | byte equality observed |
| hub_stability_test.test | 10 | 0.000970s | 0.000955s | 0.000985s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000738s | 0.000751s | 0.000758s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000762s | 0.000735s | 0.000769s | byte equality observed |
| is_constructible_test.test | 10 | 0.000347s | 0.000353s | 0.000743s | byte equality observed |
| list_test.test | 2 | 0.015339s | 0.015463s | 0.015893s | byte equality observed |
| map_test.test | 3 | 0.007553s | 0.007290s | 0.007212s | byte equality observed |
| memory_resource_test.test | 10 | 0.000742s | 0.000766s | 0.000759s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000755s | 0.000756s | 0.000764s | byte equality observed |
| nest_api_test.test | 10 | 0.001625s | 0.001643s | 0.001655s | byte equality observed |
| nest_test.test | 10 | 0.000785s | 0.000781s | 0.000792s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001118s | 0.001118s | 0.001120s | byte equality observed |
| node_allocator_test.test | 3 | 0.006620s | 0.006536s | 0.006650s | byte equality observed |
| node_handle_test.test | 10 | 0.000760s | 0.000761s | 0.000767s | byte equality observed |
| null_iterators_test.test | 10 | 0.000748s | 0.000746s | 0.000758s | byte equality observed |
| pair_test.test | 10 | 0.000746s | 0.000745s | 0.000743s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000739s | 0.000725s | 0.000731s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000729s | 0.000726s | 0.000721s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000722s | 0.000736s | 0.000718s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000726s | 0.000730s | 0.000732s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000734s | 0.000736s | 0.000730s | byte equality observed |
| pmr_list_test.test | 10 | 0.000727s | 0.000732s | 0.000726s | byte equality observed |
| pmr_map_test.test | 10 | 0.000722s | 0.000734s | 0.000735s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000737s | 0.000728s | 0.000750s | byte equality observed |
| pmr_set_test.test | 10 | 0.000744s | 0.000726s | 0.000734s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000737s | 0.000729s | 0.000727s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000737s | 0.000739s | 0.000725s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000742s | 0.000733s | 0.000763s | byte equality observed |
| pmr_string_test.test | 10 | 0.000345s | 0.000347s | 0.000766s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000347s | 0.000346s | 0.000765s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.000758s | 0.000767s | 0.000789s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.000751s | 0.000752s | 0.000793s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.000750s | 0.000747s | 0.000811s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.000756s | 0.000757s | 0.000787s | byte equality observed |
| segtor_options_test.test | 10 | 0.000812s | 0.000793s | 0.000815s | byte equality observed |
| segtor_test.test | 1 | 0.456850s | 0.463040s | 0.498105s | byte equality observed |
| set_test.test | 2 | 0.010615s | 0.009477s | 0.010255s | byte equality observed |
| slist_test.test | 2 | 0.016093s | 0.015910s | 0.015940s | byte equality observed |
| small_vector_options_test.test | 10 | 0.000824s | 0.000827s | 0.000806s | byte equality observed |
| small_vector_test.test | 7 | 0.001685s | 0.001593s | 0.002727s | byte equality observed |
| stable_vector_test.test | 1 | 0.027522s | 0.027858s | 0.028319s | byte equality observed |
| static_vector_options_test.test | 10 | 0.000783s | 0.000793s | 0.000799s | byte equality observed |
| static_vector_test.test | 10 | 0.001051s | 0.000988s | 0.001018s | byte equality observed |
| string_options_test.test | 10 | 0.000766s | 0.000801s | 0.000765s | byte equality observed |
| string_test.test | 3 | 0.009116s | 0.008911s | 0.009246s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000725s | 0.000741s | 0.000727s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.000776s | 0.000790s | 0.000751s | byte equality observed |
| throw_exception_test.test | 10 | 0.000725s | 0.000740s | 0.000728s | byte equality observed |
| tree_test.test | 10 | 0.000724s | 0.000739s | 0.000723s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.000770s | 0.000773s | 0.000749s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000726s | 0.000725s | 0.000724s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000340s | 0.000345s | 0.000715s | byte equality observed |
| vector_options_test.test | 10 | 0.000848s | 0.000852s | 0.000834s | byte equality observed |
| vector_test.test | 5 | 0.002964s | 0.002971s | 0.003896s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44818861403).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
