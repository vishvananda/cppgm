# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 5.879852 | 29.784414 | 24.700741 | 0.004504 | 0.004503 | 0.006210 |
| vector_options_test.test | RUN | 0.243973 | 1.272189 | 0.982749 | 0.001333 | 0.001503 | 0.001384 |
| uses_allocator_test.test | RUN | 0.041487 | 0.099088 | 0.125821 | 0.000483 | 0.000525 | 0.001139 |
| uses_allocator_construction_test.test | RUN | 0.128791 | 0.382866 | 0.443338 | 0.001059 | 0.001306 | 0.001272 |
| unsynchronized_pool_resource_test.test | RUN | 0.170580 | 1.216344 | 0.589777 | 0.001154 | 0.001501 | 0.001382 |
| tree_test.test | RUN | 0.800265 | 4.369549 | 3.469646 | 0.001060 | 0.001255 | 0.001314 |
| throw_exception_test.test | RUN | 0.096931 | 0.248101 | 0.294680 | 0.001058 | 0.001178 | 0.001267 |
| synchronized_pool_resource_test.test | RUN | 0.167887 | 1.207303 | 0.583059 | 0.001156 | 0.001385 | 0.001360 |
| string_view_compat_test.test | RUN | 0.284080 | 2.448319 | 1.143513 | 0.001056 | 0.001480 | 0.001251 |
| string_test.test | RUN | 1.412550 | 9.436422 | 6.437727 | 0.013153 | 0.013061 | 0.013481 |
| string_options_test.test | RUN | 0.239859 | 1.961280 | 0.911578 | 0.001139 | 0.001438 | 0.001404 |
| static_vector_test.test | RUN | 1.426173 | 7.740603 | 6.404819 | 0.001750 | 0.001526 | 0.001740 |
| static_vector_options_test.test | RUN | 0.162446 | 0.498999 | 0.558345 | 0.001258 | 0.001291 | 0.001378 |
| stable_vector_test.test | RUN | 3.372191 | 16.497727 | 12.725812 | 0.031260 | 0.032615 | 0.034079 |
| small_vector_test.test | RUN | 2.191834 | 11.430680 | 9.075622 | 0.002644 | 0.002566 | 0.004638 |
| small_vector_options_test.test | RUN | 0.300838 | 1.340912 | 1.168641 | 0.001309 | 0.001495 | 0.001357 |
| slist_test.test | RUN | 2.034225 | 10.348274 | 8.053575 | 0.023421 | 0.023761 | 0.022121 |
| set_test.test | RUN | 3.078266 | 19.122989 | 15.031273 | 0.014495 | 0.012705 | 0.013515 |
| segtor_test.test | RUN | 3.956363 | 20.943516 | 16.775041 | 0.698606 | 0.740187 | 0.718463 |
| segtor_options_test.test | RUN | 0.190794 | 0.583294 | 0.717433 | 0.001271 | 0.001428 | 0.001344 |
| scoped_allocator_usage_test.test | RUN | 0.706306 | 3.031646 | 2.689340 | 0.001215 | 0.001265 | 0.001350 |
| scoped_allocator_adaptor_test.test | RUN | 0.293802 | 0.806277 | 1.191296 | 0.001225 | 0.001227 | 0.001425 |
| resource_adaptor_test.test | RUN | 0.147472 | 0.477677 | 0.525332 | 0.001100 | 0.001349 | 0.001422 |
| polymorphic_allocator_test.test | RUN | 0.122298 | 0.390682 | 0.432051 | 0.001237 | 0.001340 | 0.001463 |
| pmr_vector_test.test | RUN | 0.072176 | 0.144068 | 0.222075 | 0.000465 | 0.000507 | 0.001282 |
| pmr_string_test.test | RUN | 0.130277 | 0.309139 | 0.413575 | 0.000471 | 0.000486 | 0.001206 |
| pmr_stable_vector_test.test | RUN | 0.167952 | 0.514267 | 0.619078 | 0.001047 | 0.001286 | 0.001289 |
| pmr_small_vector_test.test | RUN | 0.081930 | 0.201021 | 0.274410 | 0.001138 | 0.001396 | 0.001343 |
| pmr_slist_test.test | RUN | 0.126595 | 0.708147 | 0.621850 | 0.001160 | 0.001306 | 0.001286 |
| pmr_set_test.test | RUN | 0.134033 | 0.343248 | 0.450003 | 0.001112 | 0.001194 | 0.001260 |
| pmr_nest_test.test | RUN | 0.108128 | 0.236265 | 0.273218 | 0.001093 | 0.001273 | 0.001243 |
| pmr_map_test.test | RUN | 0.140320 | 0.356808 | 0.434519 | 0.001038 | 0.001305 | 0.001376 |
| pmr_list_test.test | RUN | 0.091245 | 0.211456 | 0.286245 | 0.001155 | 0.001311 | 0.001186 |
| pmr_hub_test.test | RUN | 0.128164 | 0.302839 | 0.389438 | 0.001140 | 0.001138 | 0.001403 |
| pmr_flat_set_test.test | RUN | 0.100435 | 0.235348 | 0.341879 | 0.001184 | 0.001270 | 0.001314 |
| pmr_flat_map_test.test | RUN | 0.121978 | 0.273048 | 0.398384 | 0.001136 | 0.001203 | 0.001414 |
| pmr_devector_test.test | RUN | 0.079641 | 0.241904 | 0.273958 | 0.001008 | 0.001301 | 0.001286 |
| pmr_deque_test.test | RUN | 0.076777 | 0.196808 | 0.297386 | 0.001107 | 0.001292 | 0.001427 |
| pair_test.test | RUN | 0.199174 | 0.483429 | 0.602306 | 0.001209 | 0.001403 | 0.001391 |
| null_iterators_test.test | RUN | 0.321359 | 0.940688 | 1.064771 | 0.001095 | 0.001248 | 0.001251 |
| node_handle_test.test | RUN | 0.136933 | 1.218323 | 0.409989 | 0.001104 | 0.001311 | 0.001393 |
| node_allocator_test.test | RUN | 2.415112 | 12.778285 | 10.062255 | 0.008508 | 0.009186 | 0.009337 |
| new_delete_resource_test.test | RUN | 0.176432 | 0.719223 | 0.587934 | 0.001604 | 0.001680 | 0.001848 |
| nest_test.test | RUN | 0.474254 | 3.416260 | 2.108651 | 0.001086 | 0.001369 | 0.001372 |
| nest_api_test.test | RUN | 0.826772 | 6.585157 | 4.184861 | 0.002196 | 0.002619 | 0.002362 |
| monotonic_buffer_resource_test.test | RUN | 0.150532 | 1.328258 | 0.579644 | 0.001028 | 0.001409 | 0.001119 |
| memory_resource_test.test | RUN | 0.087674 | 0.366537 | 0.266950 | 0.001180 | 0.001379 | 0.001136 |
| map_test.test | RUN | 4.219056 | 21.941841 | 20.851590 | 0.010583 | 0.010343 | 0.009956 |
| list_test.test | RUN | 2.172178 | 11.286142 | 8.678831 | 0.021035 | 0.022182 | 0.022240 |
| is_constructible_test.test | RUN | 0.061667 | 0.129012 | 0.193738 | 0.000444 | 0.000576 | 0.001212 |
| insert_vs_emplace_test.test | RUN | 0.206593 | 0.867268 | 1.140547 | 0.001229 | 0.001502 | 0.001233 |
| hub_uses_allocator_test.test | RUN | 0.227062 | 0.731917 | 0.796022 | 0.000938 | 0.001384 | 0.001320 |
| hub_stability_test.test | RUN | 0.520818 | 3.514082 | 2.920108 | 0.001427 | 0.001546 | 0.001785 |
| hub_sort_test.test | RUN | 0.327740 | 1.567617 | 1.418428 | 0.519868 | 0.537402 | 0.508831 |
| hub_pocxx_test.test | RUN | 0.282901 | 1.839269 | 1.024523 | 0.001198 | 0.001503 | 0.001412 |
| hub_new_extended_alignment_test.test | RUN | 0.154494 | 0.540709 | 0.544740 | 0.001297 | 0.001247 | 0.001246 |
| hub_exception_safety_test.test | RUN | 0.637763 | 4.434147 | 2.990799 | 0.060677 | 0.070840 | 0.073122 |
| hub_empty_sort_test.test | RUN | 0.176631 | 0.499532 | 0.606751 | 0.001210 | 0.001453 | 0.001306 |
| hub_api_test.test | RUN | 2.122652 | 18.004510 | 9.418445 | 0.003484 | 0.003315 | 0.003262 |
| global_resource_test.test | RUN | 0.098684 | 0.331724 | 0.325943 | 0.001349 | 0.001484 | 0.001382 |
| flat_tree_test.test | RUN | 3.954384 | 27.620825 | 18.435986 | 0.001256 | 0.001404 | 0.001410 |
| flat_set_test.test | RUN | 4.968648 | 34.741378 | 23.812232 | 0.007292 | 0.006417 | 0.007190 |
| flat_set_adaptor_test.test | RUN | 3.686133 | 30.838602 | 18.209019 | 0.007382 | 0.006897 | 0.007424 |
| flat_map_test.test | RUN | 8.011573 | 52.138517 | 38.518277 | 0.008439 | 0.008113 | 0.007628 |
| flat_map_adaptor_test.test | RUN | 5.087077 | 37.824448 | 27.167182 | 0.007753 | 0.007649 | 0.007587 |
| explicit_inst_vector_test.test | RUN | 0.774388 | 5.072850 | 4.030736 | 0.001195 | 0.001418 | 0.001340 |
| explicit_inst_string_test.test | RUN | 1.054523 | 9.087724 | 5.572679 | 0.001065 | 0.001312 | 0.001322 |
| explicit_inst_static_vector_test.test | RUN | 0.093143 | 0.321479 | 0.374508 | 0.001141 | 0.001232 | 0.001302 |
| explicit_inst_stable_vector_test.test | RUN | 0.623926 | 3.222041 | 2.584354 | 0.001139 | 0.001441 | 0.001366 |
| explicit_inst_small_vector_test.test | RUN | 0.515006 | 2.956542 | 2.308462 | 0.001044 | 0.001482 | 0.001189 |
| explicit_inst_slist_test.test | RUN | 0.386083 | 2.659434 | 1.843227 | 0.001235 | 0.001298 | 0.001330 |
| explicit_inst_set_test.test | RUN | 0.542077 | 3.034851 | 2.127193 | 0.001166 | 0.001312 | 0.001204 |
| explicit_inst_map_test.test | RUN | 0.591530 | 3.230890 | 2.331117 | 0.001218 | 0.001453 | 0.001395 |
| explicit_inst_list_test.test | RUN | 0.136661 | 0.729795 | 0.582999 | 0.001177 | 0.001283 | 0.001208 |
| explicit_inst_flat_set_test.test | RUN | 3.289845 | 23.338295 | 13.832878 | 0.001206 | 0.001393 | 0.001268 |
| explicit_inst_flat_map_test.test | RUN | 3.531239 | 24.375381 | 15.582057 | 0.001154 | 0.001351 | 0.001390 |
| explicit_inst_devector_test.test | RUN | 0.424915 | 2.876780 | 1.938524 | 0.001142 | 0.001216 | 0.001312 |
| explicit_inst_deque_test.test | RUN | 0.432098 | 3.157272 | 2.103240 | 0.001170 | 0.001330 | 0.001195 |
| devector_test.test | RUN | 6.162268 | 38.099804 | 27.975942 | 0.002954 | 0.003137 | 0.004024 |
| devector_options_test.test | RUN | 0.262523 | 1.700564 | 1.064192 | 0.001452 | 0.001498 | 0.001513 |
| deque_test.test | RUN | 3.998072 | 22.738571 | 16.842784 | 0.519491 | 0.363193 | 0.437630 |
| deque_options_test.test | RUN | 0.194188 | 0.578677 | 0.756504 | 0.001237 | 0.001569 | 0.001307 |
| copy_move_algo_test.test | RUN | 0.179529 | 0.740899 | 0.604423 | 0.001426 | 0.001653 | 0.001423 |
| common_iterator_test.test | RUN | 0.012239 | 0.031819 | 0.039412 | 0.000469 | 0.000533 | 0.001282 |
| boost_iterator_comp_test.test | RUN | 0.255445 | 0.880518 | 1.015687 | 0.001054 | 0.001197 | 0.001414 |
| allocator_traits_test.test | RUN | 0.147039 | 0.386776 | 0.465201 | 0.001133 | 0.001212 | 0.001232 |
| alloc_full_test.test | RUN | 0.177615 | 0.811513 | 0.685615 | 0.003826 | 0.003998 | 0.003989 |
| alloc_basic_test.test | RUN | 0.142626 | 0.570938 | 0.521479 | 0.001182 | 0.001468 | 0.001258 |
| adaptive_pool_test.test | RUN | 2.339939 | 9.388285 | 6.879009 | 0.011968 | 0.008034 | 0.008938 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.011× | 1.013×, 1.009× | 0.998× |
| clang | 1.066× | 1.067×, 1.066× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44774088589).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 3 | 0.008944s | 0.008240s | 0.009036s | byte equality observed |
| alloc_basic_test.test | 10 | 0.000825s | 0.000848s | 0.000823s | byte equality observed |
| alloc_full_test.test | 7 | 0.002730s | 0.002724s | 0.002839s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000759s | 0.000771s | 0.000772s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.000813s | 0.000817s | 0.000794s | byte equality observed |
| common_iterator_test.test | 10 | 0.000365s | 0.000357s | 0.000786s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001182s | 0.000923s | 0.001011s | byte equality observed |
| deque_options_test.test | 10 | 0.000850s | 0.000849s | 0.000857s | byte equality observed |
| deque_test.test | 1 | 0.369977s | 0.369706s | 0.442947s | byte equality observed |
| devector_options_test.test | 10 | 0.000898s | 0.000849s | 0.000839s | byte equality observed |
| devector_test.test | 6 | 0.002862s | 0.002776s | 0.003593s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000723s | 0.000733s | 0.000713s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000713s | 0.000720s | 0.000705s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000723s | 0.000731s | 0.000712s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000724s | 0.000727s | 0.000744s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000722s | 0.000716s | 0.000727s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000728s | 0.000726s | 0.000731s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000721s | 0.000726s | 0.000722s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000728s | 0.000717s | 0.000721s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000728s | 0.000723s | 0.000719s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000733s | 0.000723s | 0.000744s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000712s | 0.000710s | 0.000738s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000724s | 0.000716s | 0.000739s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000728s | 0.000710s | 0.000721s | byte equality observed |
| flat_map_adaptor_test.test | 4 | 0.005670s | 0.005313s | 0.005399s | byte equality observed |
| flat_map_test.test | 4 | 0.006162s | 0.005682s | 0.005498s | byte equality observed |
| flat_set_adaptor_test.test | 4 | 0.005499s | 0.004973s | 0.005300s | byte equality observed |
| flat_set_test.test | 4 | 0.005455s | 0.004813s | 0.005175s | byte equality observed |
| flat_tree_test.test | 10 | 0.000742s | 0.000714s | 0.000735s | byte equality observed |
| global_resource_test.test | 10 | 0.000767s | 0.000746s | 0.000742s | byte equality observed |
| hub_api_test.test | 8 | 0.002544s | 0.002213s | 0.002170s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000738s | 0.000740s | 0.000743s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.050845s | 0.053223s | 0.052400s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.000804s | 0.000756s | 0.000784s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.000805s | 0.000767s | 0.000758s | byte equality observed |
| hub_sort_test.test | 1 | 0.425122s | 0.438985s | 0.410363s | byte equality observed |
| hub_stability_test.test | 10 | 0.000967s | 0.000966s | 0.000985s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000765s | 0.000743s | 0.000755s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000769s | 0.000764s | 0.000781s | byte equality observed |
| is_constructible_test.test | 10 | 0.000353s | 0.000344s | 0.000739s | byte equality observed |
| list_test.test | 2 | 0.015290s | 0.015476s | 0.015861s | byte equality observed |
| map_test.test | 3 | 0.007558s | 0.007300s | 0.007204s | byte equality observed |
| memory_resource_test.test | 10 | 0.000766s | 0.000758s | 0.000780s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000768s | 0.000767s | 0.000785s | byte equality observed |
| nest_api_test.test | 10 | 0.001637s | 0.001684s | 0.001671s | byte equality observed |
| nest_test.test | 10 | 0.000790s | 0.000798s | 0.000799s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001124s | 0.001112s | 0.001136s | byte equality observed |
| node_allocator_test.test | 3 | 0.006603s | 0.006567s | 0.006671s | byte equality observed |
| node_handle_test.test | 10 | 0.000769s | 0.000757s | 0.000773s | byte equality observed |
| null_iterators_test.test | 10 | 0.000758s | 0.000743s | 0.000756s | byte equality observed |
| pair_test.test | 10 | 0.000761s | 0.000741s | 0.000773s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000733s | 0.000733s | 0.000742s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000741s | 0.000731s | 0.000739s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000725s | 0.000716s | 0.000753s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000741s | 0.000727s | 0.000747s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000751s | 0.000728s | 0.000750s | byte equality observed |
| pmr_list_test.test | 10 | 0.000738s | 0.000724s | 0.000744s | byte equality observed |
| pmr_map_test.test | 10 | 0.000739s | 0.000728s | 0.000754s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000751s | 0.000738s | 0.000752s | byte equality observed |
| pmr_set_test.test | 10 | 0.000744s | 0.000737s | 0.000748s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000757s | 0.000737s | 0.000752s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000744s | 0.000745s | 0.000747s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000746s | 0.000725s | 0.000776s | byte equality observed |
| pmr_string_test.test | 10 | 0.000354s | 0.000325s | 0.000769s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000353s | 0.000320s | 0.000793s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.000771s | 0.000755s | 0.000828s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.000768s | 0.000750s | 0.000835s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.000758s | 0.000753s | 0.000824s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.000767s | 0.000758s | 0.000831s | byte equality observed |
| segtor_options_test.test | 10 | 0.000818s | 0.000800s | 0.000796s | byte equality observed |
| segtor_test.test | 1 | 0.457515s | 0.462730s | 0.496975s | byte equality observed |
| set_test.test | 2 | 0.010635s | 0.009418s | 0.010258s | byte equality observed |
| slist_test.test | 2 | 0.016107s | 0.015865s | 0.015902s | byte equality observed |
| small_vector_options_test.test | 10 | 0.000832s | 0.000802s | 0.000809s | byte equality observed |
| small_vector_test.test | 7 | 0.001684s | 0.001568s | 0.002726s | byte equality observed |
| stable_vector_test.test | 1 | 0.027497s | 0.027785s | 0.028289s | byte equality observed |
| static_vector_options_test.test | 10 | 0.000787s | 0.000761s | 0.000785s | byte equality observed |
| static_vector_test.test | 10 | 0.001056s | 0.000987s | 0.001013s | byte equality observed |
| string_options_test.test | 10 | 0.000769s | 0.000769s | 0.000774s | byte equality observed |
| string_test.test | 3 | 0.009148s | 0.008897s | 0.009241s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000745s | 0.000740s | 0.000753s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.000770s | 0.000783s | 0.000768s | byte equality observed |
| throw_exception_test.test | 10 | 0.000713s | 0.000719s | 0.000715s | byte equality observed |
| tree_test.test | 10 | 0.000714s | 0.000716s | 0.000735s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.000764s | 0.000765s | 0.000778s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000724s | 0.000712s | 0.000737s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000339s | 0.000337s | 0.000723s | byte equality observed |
| vector_options_test.test | 10 | 0.000845s | 0.000855s | 0.000840s | byte equality observed |
| vector_test.test | 5 | 0.002977s | 0.002942s | 0.003928s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44774088589).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
