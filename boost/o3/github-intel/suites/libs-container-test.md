# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 5.828026 | 29.558825 | 23.516496 | 0.004455 | 0.004380 | 0.005766 |
| vector_options_test.test | RUN | 0.262642 | 1.240783 | 0.947591 | 0.001465 | 0.001517 | 0.001212 |
| uses_allocator_test.test | RUN | 0.042549 | 0.096542 | 0.114273 | 0.000508 | 0.000444 | 0.001072 |
| uses_allocator_construction_test.test | RUN | 0.131526 | 0.373799 | 0.424824 | 0.001144 | 0.001248 | 0.001034 |
| unsynchronized_pool_resource_test.test | RUN | 0.178128 | 1.185617 | 0.546874 | 0.001182 | 0.001351 | 0.001115 |
| tree_test.test | RUN | 0.817273 | 4.306241 | 3.273695 | 0.001102 | 0.001292 | 0.001062 |
| throw_exception_test.test | RUN | 0.094098 | 0.240717 | 0.275355 | 0.001101 | 0.001163 | 0.001044 |
| synchronized_pool_resource_test.test | RUN | 0.176402 | 1.188092 | 0.562724 | 0.001182 | 0.001320 | 0.001152 |
| string_view_compat_test.test | RUN | 0.297369 | 2.396005 | 1.090264 | 0.001140 | 0.001244 | 0.001122 |
| string_test.test | RUN | 1.413932 | 9.327662 | 6.138244 | 0.013991 | 0.012684 | 0.013135 |
| string_options_test.test | RUN | 0.242679 | 1.941347 | 0.967399 | 0.001169 | 0.001339 | 0.001196 |
| static_vector_test.test | RUN | 1.427426 | 7.557388 | 6.189411 | 0.001700 | 0.001605 | 0.001524 |
| static_vector_options_test.test | RUN | 0.162231 | 0.492517 | 0.533262 | 0.001314 | 0.001342 | 0.001166 |
| stable_vector_test.test | RUN | 3.382663 | 16.252670 | 11.918022 | 0.031357 | 0.032662 | 0.032354 |
| small_vector_test.test | RUN | 2.159255 | 11.304716 | 8.536469 | 0.002675 | 0.002582 | 0.004120 |
| small_vector_options_test.test | RUN | 0.296651 | 1.317650 | 1.107612 | 0.001376 | 0.001467 | 0.001377 |
| slist_test.test | RUN | 2.025093 | 10.223718 | 7.557165 | 0.023377 | 0.022982 | 0.022705 |
| set_test.test | RUN | 3.079444 | 19.003154 | 14.040973 | 0.014515 | 0.012948 | 0.013617 |
| segtor_test.test | RUN | 3.976061 | 20.850513 | 15.909845 | 0.706102 | 0.732115 | 0.717289 |
| segtor_options_test.test | RUN | 0.196074 | 0.595306 | 0.660949 | 0.001253 | 0.001467 | 0.001302 |
| scoped_allocator_usage_test.test | RUN | 0.700561 | 3.051739 | 2.547397 | 0.001142 | 0.001302 | 0.001144 |
| scoped_allocator_adaptor_test.test | RUN | 0.289574 | 0.812433 | 1.113893 | 0.001323 | 0.001203 | 0.001059 |
| resource_adaptor_test.test | RUN | 0.154836 | 0.481775 | 0.472247 | 0.001196 | 0.001437 | 0.001280 |
| polymorphic_allocator_test.test | RUN | 0.125693 | 0.392982 | 0.394450 | 0.001167 | 0.001188 | 0.001073 |
| pmr_vector_test.test | RUN | 0.072650 | 0.143166 | 0.206457 | 0.000488 | 0.000526 | 0.001030 |
| pmr_string_test.test | RUN | 0.140161 | 0.304150 | 0.406119 | 0.000459 | 0.000524 | 0.001106 |
| pmr_stable_vector_test.test | RUN | 0.166588 | 0.511130 | 0.580160 | 0.001149 | 0.001275 | 0.001072 |
| pmr_small_vector_test.test | RUN | 0.084248 | 0.200671 | 0.269144 | 0.001171 | 0.001240 | 0.001016 |
| pmr_slist_test.test | RUN | 0.124652 | 0.701641 | 0.585927 | 0.001166 | 0.001177 | 0.001128 |
| pmr_set_test.test | RUN | 0.133391 | 0.338405 | 0.427416 | 0.001140 | 0.001281 | 0.001117 |
| pmr_nest_test.test | RUN | 0.105384 | 0.236738 | 0.276251 | 0.001156 | 0.001225 | 0.001242 |
| pmr_map_test.test | RUN | 0.147900 | 0.356255 | 0.429865 | 0.001072 | 0.001207 | 0.001148 |
| pmr_list_test.test | RUN | 0.094882 | 0.208727 | 0.297275 | 0.001185 | 0.001165 | 0.001172 |
| pmr_hub_test.test | RUN | 0.133341 | 0.305118 | 0.371765 | 0.001085 | 0.001204 | 0.001152 |
| pmr_flat_set_test.test | RUN | 0.099749 | 0.239898 | 0.305874 | 0.001378 | 0.001370 | 0.001227 |
| pmr_flat_map_test.test | RUN | 0.122741 | 0.277151 | 0.355076 | 0.001127 | 0.001324 | 0.001187 |
| pmr_devector_test.test | RUN | 0.084373 | 0.243112 | 0.285917 | 0.001105 | 0.001270 | 0.001045 |
| pmr_deque_test.test | RUN | 0.078835 | 0.202564 | 0.284271 | 0.001216 | 0.001349 | 0.001055 |
| pair_test.test | RUN | 0.200346 | 0.484526 | 0.557929 | 0.001285 | 0.001391 | 0.001081 |
| null_iterators_test.test | RUN | 0.316192 | 0.940382 | 1.011734 | 0.001104 | 0.001263 | 0.001150 |
| node_handle_test.test | RUN | 0.137282 | 1.195080 | 0.395624 | 0.001157 | 0.001353 | 0.001213 |
| node_allocator_test.test | RUN | 2.423570 | 12.690746 | 9.584897 | 0.009109 | 0.009520 | 0.009104 |
| new_delete_resource_test.test | RUN | 0.172809 | 0.721334 | 0.566787 | 0.001620 | 0.002082 | 0.001654 |
| nest_test.test | RUN | 0.452807 | 3.411077 | 2.038276 | 0.001186 | 0.001477 | 0.001259 |
| nest_api_test.test | RUN | 0.815177 | 6.560417 | 3.995118 | 0.002228 | 0.002515 | 0.002236 |
| monotonic_buffer_resource_test.test | RUN | 0.151748 | 1.311861 | 0.560715 | 0.001345 | 0.001381 | 0.000979 |
| memory_resource_test.test | RUN | 0.093686 | 0.367901 | 0.258701 | 0.001152 | 0.001342 | 0.001007 |
| map_test.test | RUN | 4.275213 | 21.595195 | 19.925932 | 0.010668 | 0.010111 | 0.008842 |
| list_test.test | RUN | 2.177473 | 11.094048 | 8.294784 | 0.022402 | 0.022216 | 0.022556 |
| is_constructible_test.test | RUN | 0.063575 | 0.118590 | 0.187132 | 0.000489 | 0.000540 | 0.001077 |
| insert_vs_emplace_test.test | RUN | 0.204506 | 0.864975 | 1.119559 | 0.001294 | 0.001464 | 0.001171 |
| hub_uses_allocator_test.test | RUN | 0.227923 | 0.725824 | 0.770822 | 0.001394 | 0.001365 | 0.001201 |
| hub_stability_test.test | RUN | 0.522434 | 3.497714 | 2.821886 | 0.001450 | 0.001582 | 0.001536 |
| hub_sort_test.test | RUN | 0.331073 | 1.555194 | 1.370407 | 0.518089 | 0.549166 | 0.500172 |
| hub_pocxx_test.test | RUN | 0.286290 | 1.850151 | 0.979175 | 0.001192 | 0.001407 | 0.001161 |
| hub_new_extended_alignment_test.test | RUN | 0.153938 | 0.554330 | 0.526617 | 0.001321 | 0.001390 | 0.001153 |
| hub_exception_safety_test.test | RUN | 0.608593 | 4.415768 | 2.854079 | 0.063376 | 0.065819 | 0.064792 |
| hub_empty_sort_test.test | RUN | 0.178773 | 0.498239 | 0.622120 | 0.001188 | 0.001235 | 0.001199 |
| hub_api_test.test | RUN | 2.037898 | 17.231439 | 8.905835 | 0.003476 | 0.003229 | 0.003059 |
| global_resource_test.test | RUN | 0.099268 | 0.328362 | 0.323329 | 0.001238 | 0.001460 | 0.001280 |
| flat_tree_test.test | RUN | 4.016095 | 26.999944 | 17.328108 | 0.001205 | 0.001323 | 0.001176 |
| flat_set_test.test | RUN | 5.007909 | 33.948994 | 22.381757 | 0.007218 | 0.006163 | 0.006772 |
| flat_set_adaptor_test.test | RUN | 3.752716 | 30.173724 | 17.398076 | 0.007327 | 0.006546 | 0.006996 |
| flat_map_test.test | RUN | 8.103982 | 51.086112 | 37.188317 | 0.008149 | 0.008016 | 0.007582 |
| flat_map_adaptor_test.test | RUN | 5.136679 | 37.096811 | 26.077745 | 0.007709 | 0.007583 | 0.007453 |
| explicit_inst_vector_test.test | RUN | 0.791981 | 5.033462 | 3.861277 | 0.001260 | 0.001274 | 0.001206 |
| explicit_inst_string_test.test | RUN | 1.079963 | 8.877803 | 5.386212 | 0.001186 | 0.001288 | 0.001254 |
| explicit_inst_static_vector_test.test | RUN | 0.095685 | 0.314225 | 0.358170 | 0.001208 | 0.001210 | 0.001200 |
| explicit_inst_stable_vector_test.test | RUN | 0.638394 | 3.139593 | 2.486559 | 0.001171 | 0.001218 | 0.001338 |
| explicit_inst_small_vector_test.test | RUN | 0.528340 | 2.854702 | 2.325315 | 0.001408 | 0.001281 | 0.001146 |
| explicit_inst_slist_test.test | RUN | 0.389863 | 2.600685 | 1.762220 | 0.001233 | 0.001252 | 0.001178 |
| explicit_inst_set_test.test | RUN | 0.549163 | 2.995525 | 2.062299 | 0.001177 | 0.001309 | 0.001258 |
| explicit_inst_map_test.test | RUN | 0.593200 | 3.116549 | 2.248870 | 0.000991 | 0.001334 | 0.001073 |
| explicit_inst_list_test.test | RUN | 0.136428 | 0.709048 | 0.565522 | 0.001133 | 0.001298 | 0.001121 |
| explicit_inst_flat_set_test.test | RUN | 3.317898 | 22.772168 | 13.438303 | 0.001190 | 0.001429 | 0.001231 |
| explicit_inst_flat_map_test.test | RUN | 3.583351 | 23.891500 | 15.042373 | 0.001144 | 0.001179 | 0.001240 |
| explicit_inst_devector_test.test | RUN | 0.422482 | 2.789510 | 1.902970 | 0.001080 | 0.001170 | 0.001109 |
| explicit_inst_deque_test.test | RUN | 0.435200 | 3.066172 | 2.044270 | 0.001318 | 0.001288 | 0.001254 |
| devector_test.test | RUN | 6.620152 | 34.446922 | 24.290001 | 0.003063 | 0.003084 | 0.004044 |
| devector_options_test.test | RUN | 0.270841 | 1.666053 | 1.042048 | 0.001446 | 0.001533 | 0.001478 |
| deque_test.test | RUN | 4.033504 | 23.650280 | 17.122081 | 0.373149 | 0.360807 | 0.435880 |
| deque_options_test.test | RUN | 0.194975 | 0.604395 | 0.744651 | 0.001182 | 0.001249 | 0.001404 |
| copy_move_algo_test.test | RUN | 0.186897 | 0.712255 | 0.690203 | 0.001612 | 0.001393 | 0.001535 |
| common_iterator_test.test | RUN | 0.013536 | 0.034412 | 0.037051 | 0.000396 | 0.000478 | 0.001130 |
| boost_iterator_comp_test.test | RUN | 0.265812 | 0.854386 | 1.001821 | 0.001189 | 0.001126 | 0.001290 |
| allocator_traits_test.test | RUN | 0.149593 | 0.352828 | 0.418729 | 0.001298 | 0.001262 | 0.001128 |
| alloc_full_test.test | RUN | 0.181110 | 0.798618 | 0.686264 | 0.004207 | 0.003885 | 0.004112 |
| alloc_basic_test.test | RUN | 0.148679 | 0.562889 | 0.503165 | 0.001138 | 0.001278 | 0.001361 |
| adaptive_pool_test.test | RUN | 2.157692 | 13.451711 | 9.730119 | 0.008725 | 0.011170 | 0.012070 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.012× | 1.011×, 1.014× | 1.004× |
| clang | 1.070× | 1.071×, 1.069× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45739944580).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 3 | 0.008862s | 0.008064s | 0.008971s | byte equality observed |
| alloc_basic_test.test | 10 | 0.000807s | 0.000820s | 0.000804s | byte equality observed |
| alloc_full_test.test | 8 | 0.002715s | 0.002697s | 0.002818s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000763s | 0.000762s | 0.000756s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.000770s | 0.000777s | 0.000766s | byte equality observed |
| common_iterator_test.test | 10 | 0.000361s | 0.000363s | 0.000761s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001152s | 0.000883s | 0.000989s | byte equality observed |
| deque_options_test.test | 10 | 0.000830s | 0.000837s | 0.000823s | byte equality observed |
| deque_test.test | 1 | 0.371223s | 0.368877s | 0.444662s | byte equality observed |
| devector_options_test.test | 10 | 0.000879s | 0.000837s | 0.000844s | byte equality observed |
| devector_test.test | 6 | 0.002853s | 0.002768s | 0.003599s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000699s | 0.000705s | 0.000698s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000700s | 0.000711s | 0.000715s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000709s | 0.000717s | 0.000723s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000718s | 0.000716s | 0.000724s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000704s | 0.000705s | 0.000711s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000713s | 0.000713s | 0.000716s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000716s | 0.000713s | 0.000710s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000710s | 0.000718s | 0.000719s | byte equality observed |
| explicit_inst_small_vector_test.test | 7 | 0.000710s | 0.000717s | 0.000706s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000717s | 0.000715s | 0.000703s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000708s | 0.000706s | 0.000700s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000718s | 0.000718s | 0.000698s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000715s | 0.000722s | 0.000702s | byte equality observed |
| flat_map_adaptor_test.test | 4 | 0.005644s | 0.005335s | 0.005391s | byte equality observed |
| flat_map_test.test | 4 | 0.006146s | 0.005681s | 0.005486s | byte equality observed |
| flat_set_adaptor_test.test | 4 | 0.005488s | 0.004990s | 0.005291s | byte equality observed |
| flat_set_test.test | 4 | 0.005444s | 0.004820s | 0.005146s | byte equality observed |
| flat_tree_test.test | 10 | 0.000727s | 0.000715s | 0.000698s | byte equality observed |
| global_resource_test.test | 10 | 0.000751s | 0.000749s | 0.000735s | byte equality observed |
| hub_api_test.test | 7 | 0.002525s | 0.002263s | 0.002150s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000717s | 0.000728s | 0.000707s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.050251s | 0.052251s | 0.052350s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.000766s | 0.000729s | 0.000764s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.000758s | 0.000763s | 0.000738s | byte equality observed |
| hub_sort_test.test | 1 | 0.423492s | 0.436663s | 0.409059s | byte equality observed |
| hub_stability_test.test | 10 | 0.000963s | 0.000943s | 0.001000s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000750s | 0.000714s | 0.000764s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000767s | 0.000739s | 0.000770s | byte equality observed |
| is_constructible_test.test | 10 | 0.000345s | 0.000299s | 0.000722s | byte equality observed |
| list_test.test | 2 | 0.015330s | 0.015358s | 0.015895s | byte equality observed |
| map_test.test | 3 | 0.007544s | 0.007281s | 0.007210s | byte equality observed |
| memory_resource_test.test | 10 | 0.000760s | 0.000717s | 0.000749s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000752s | 0.000739s | 0.000765s | byte equality observed |
| nest_api_test.test | 10 | 0.001625s | 0.001630s | 0.001649s | byte equality observed |
| nest_test.test | 10 | 0.000776s | 0.000775s | 0.000789s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001115s | 0.001095s | 0.001119s | byte equality observed |
| node_allocator_test.test | 3 | 0.006569s | 0.006548s | 0.006643s | byte equality observed |
| node_handle_test.test | 10 | 0.000761s | 0.000751s | 0.000756s | byte equality observed |
| null_iterators_test.test | 10 | 0.000754s | 0.000751s | 0.000740s | byte equality observed |
| pair_test.test | 10 | 0.000750s | 0.000748s | 0.000754s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000731s | 0.000730s | 0.000745s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000729s | 0.000738s | 0.000742s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000736s | 0.000732s | 0.000732s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000732s | 0.000713s | 0.000740s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000741s | 0.000726s | 0.000729s | byte equality observed |
| pmr_list_test.test | 10 | 0.000729s | 0.000730s | 0.000724s | byte equality observed |
| pmr_map_test.test | 10 | 0.000732s | 0.000737s | 0.000736s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000729s | 0.000718s | 0.000736s | byte equality observed |
| pmr_set_test.test | 10 | 0.000742s | 0.000723s | 0.000733s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000737s | 0.000739s | 0.000739s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000721s | 0.000729s | 0.000727s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000740s | 0.000742s | 0.000753s | byte equality observed |
| pmr_string_test.test | 10 | 0.000351s | 0.000346s | 0.000779s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000346s | 0.000345s | 0.000804s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.000755s | 0.000763s | 0.000795s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.000768s | 0.000748s | 0.000830s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.000750s | 0.000754s | 0.000803s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.000763s | 0.000749s | 0.000838s | byte equality observed |
| segtor_options_test.test | 10 | 0.000807s | 0.000798s | 0.000809s | byte equality observed |
| segtor_test.test | 1 | 0.455807s | 0.461021s | 0.499871s | byte equality observed |
| set_test.test | 2 | 0.010658s | 0.009413s | 0.010268s | byte equality observed |
| slist_test.test | 2 | 0.016087s | 0.015915s | 0.015977s | byte equality observed |
| small_vector_options_test.test | 10 | 0.000820s | 0.000803s | 0.000810s | byte equality observed |
| small_vector_test.test | 6 | 0.001671s | 0.001580s | 0.002722s | byte equality observed |
| stable_vector_test.test | 1 | 0.027451s | 0.027785s | 0.028372s | byte equality observed |
| static_vector_options_test.test | 10 | 0.000774s | 0.000758s | 0.000783s | byte equality observed |
| static_vector_test.test | 10 | 0.001046s | 0.000984s | 0.001014s | byte equality observed |
| string_options_test.test | 10 | 0.000763s | 0.000777s | 0.000766s | byte equality observed |
| string_test.test | 3 | 0.009142s | 0.008921s | 0.009273s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000726s | 0.000749s | 0.000725s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.000766s | 0.000774s | 0.000761s | byte equality observed |
| throw_exception_test.test | 10 | 0.000723s | 0.000730s | 0.000722s | byte equality observed |
| tree_test.test | 10 | 0.000724s | 0.000715s | 0.000709s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.000759s | 0.000763s | 0.000756s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000711s | 0.000728s | 0.000721s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000336s | 0.000339s | 0.000710s | byte equality observed |
| vector_options_test.test | 10 | 0.000838s | 0.000835s | 0.000830s | byte equality observed |
| vector_test.test | 5 | 0.002944s | 0.002929s | 0.003898s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45739944580).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
