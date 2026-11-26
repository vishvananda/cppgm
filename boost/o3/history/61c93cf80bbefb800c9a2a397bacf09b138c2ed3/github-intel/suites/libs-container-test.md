# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 7.899959 | 39.679332 | 32.297610 | 0.006476 | 0.006130 | 0.008601 |
| vector_options_test.test | RUN | 0.361353 | 1.779787 | 1.355263 | 0.001838 | 0.002072 | 0.001947 |
| uses_allocator_test.test | RUN | 0.061312 | 0.139536 | 0.165751 | 0.000672 | 0.000742 | 0.001677 |
| uses_allocator_construction_test.test | RUN | 0.184092 | 0.530365 | 0.595326 | 0.001546 | 0.001794 | 0.001726 |
| unsynchronized_pool_resource_test.test | RUN | 0.244099 | 1.647072 | 0.772982 | 0.001640 | 0.001800 | 0.001795 |
| tree_test.test | RUN | 1.121042 | 5.981490 | 4.461738 | 0.001621 | 0.001740 | 0.001683 |
| throw_exception_test.test | RUN | 0.128533 | 0.336979 | 0.393720 | 0.001562 | 0.001739 | 0.001702 |
| synchronized_pool_resource_test.test | RUN | 0.238971 | 1.605976 | 0.779582 | 0.001632 | 0.001781 | 0.001780 |
| string_view_compat_test.test | RUN | 0.407992 | 3.258461 | 1.529193 | 0.001649 | 0.001719 | 0.001678 |
| string_test.test | RUN | 1.934340 | 12.438523 | 8.716843 | 0.019242 | 0.016568 | 0.017973 |
| string_options_test.test | RUN | 0.348593 | 2.637167 | 1.341381 | 0.001545 | 0.001850 | 0.001792 |
| static_vector_test.test | RUN | 1.954509 | 10.350727 | 8.875592 | 0.002334 | 0.002296 | 0.002314 |
| static_vector_options_test.test | RUN | 0.224919 | 0.668310 | 0.736364 | 0.001652 | 0.001772 | 0.001869 |
| stable_vector_test.test | RUN | 4.550201 | 21.933038 | 16.725253 | 0.040904 | 0.041475 | 0.043061 |
| small_vector_test.test | RUN | 2.942264 | 14.980232 | 12.247263 | 0.003800 | 0.003848 | 0.006306 |
| small_vector_options_test.test | RUN | 0.412058 | 1.797877 | 1.550413 | 0.001878 | 0.001947 | 0.001790 |
| slist_test.test | RUN | 2.742984 | 13.668209 | 10.884761 | 0.030072 | 0.029938 | 0.030564 |
| set_test.test | RUN | 4.171136 | 25.915180 | 19.444285 | 0.019096 | 0.016529 | 0.018167 |
| segtor_test.test | RUN | 5.355605 | 28.099499 | 21.514369 | 0.703795 | 0.637392 | 0.709486 |
| segtor_options_test.test | RUN | 0.272983 | 0.779676 | 0.873987 | 0.001487 | 0.001764 | 0.001782 |
| scoped_allocator_usage_test.test | RUN | 0.974535 | 4.189896 | 3.651957 | 0.001470 | 0.001758 | 0.001681 |
| scoped_allocator_adaptor_test.test | RUN | 0.407761 | 1.110296 | 1.544938 | 0.001620 | 0.001730 | 0.001515 |
| resource_adaptor_test.test | RUN | 0.209364 | 0.680066 | 0.671649 | 0.001614 | 0.001818 | 0.001610 |
| polymorphic_allocator_test.test | RUN | 0.179141 | 0.550292 | 0.551234 | 0.001510 | 0.001728 | 0.001592 |
| pmr_vector_test.test | RUN | 0.097510 | 0.205780 | 0.290547 | 0.000590 | 0.000792 | 0.001636 |
| pmr_string_test.test | RUN | 0.193295 | 0.431961 | 0.558970 | 0.000666 | 0.000785 | 0.001634 |
| pmr_stable_vector_test.test | RUN | 0.227243 | 0.713932 | 0.804493 | 0.001556 | 0.001698 | 0.001642 |
| pmr_small_vector_test.test | RUN | 0.118802 | 0.282790 | 0.346954 | 0.001238 | 0.001664 | 0.001657 |
| pmr_slist_test.test | RUN | 0.177789 | 0.951240 | 0.802324 | 0.001585 | 0.001810 | 0.001696 |
| pmr_set_test.test | RUN | 0.189316 | 0.480910 | 0.598518 | 0.001464 | 0.001685 | 0.001514 |
| pmr_nest_test.test | RUN | 0.142007 | 0.331164 | 0.398378 | 0.001450 | 0.001769 | 0.001624 |
| pmr_map_test.test | RUN | 0.198510 | 0.498249 | 0.592750 | 0.001539 | 0.001681 | 0.001600 |
| pmr_list_test.test | RUN | 0.128530 | 0.306719 | 0.378989 | 0.001407 | 0.001582 | 0.001660 |
| pmr_hub_test.test | RUN | 0.177348 | 0.426661 | 0.480273 | 0.001639 | 0.001530 | 0.001622 |
| pmr_flat_set_test.test | RUN | 0.139711 | 0.324304 | 0.414135 | 0.001488 | 0.001679 | 0.001668 |
| pmr_flat_map_test.test | RUN | 0.169209 | 0.384320 | 0.491329 | 0.001574 | 0.001753 | 0.001612 |
| pmr_devector_test.test | RUN | 0.114542 | 0.332677 | 0.372011 | 0.001495 | 0.001676 | 0.001630 |
| pmr_deque_test.test | RUN | 0.112816 | 0.277068 | 0.371762 | 0.001548 | 0.001771 | 0.001612 |
| pair_test.test | RUN | 0.273268 | 0.658649 | 0.794730 | 0.001636 | 0.001743 | 0.001798 |
| null_iterators_test.test | RUN | 0.442309 | 1.290485 | 1.422115 | 0.001445 | 0.001760 | 0.001729 |
| node_handle_test.test | RUN | 0.197979 | 1.632915 | 0.542465 | 0.001450 | 0.001833 | 0.001644 |
| node_allocator_test.test | RUN | 3.219123 | 17.183300 | 13.421094 | 0.012096 | 0.012438 | 0.012640 |
| new_delete_resource_test.test | RUN | 0.235572 | 0.986798 | 0.774131 | 0.002364 | 0.002670 | 0.002401 |
| nest_test.test | RUN | 0.654190 | 4.646297 | 2.849124 | 0.001558 | 0.001937 | 0.001822 |
| nest_api_test.test | RUN | 1.107949 | 8.911416 | 5.729852 | 0.002914 | 0.003175 | 0.002977 |
| monotonic_buffer_resource_test.test | RUN | 0.243229 | 1.795500 | 0.814694 | 0.001661 | 0.001795 | 0.001643 |
| memory_resource_test.test | RUN | 0.142126 | 0.478311 | 0.462036 | 0.001574 | 0.001557 | 0.001732 |
| map_test.test | RUN | 5.672357 | 28.779041 | 28.315057 | 0.014242 | 0.013680 | 0.013420 |
| list_test.test | RUN | 2.916198 | 14.881451 | 11.686965 | 0.029067 | 0.029566 | 0.028414 |
| is_constructible_test.test | RUN | 0.089220 | 0.175490 | 0.253684 | 0.000680 | 0.000806 | 0.001619 |
| insert_vs_emplace_test.test | RUN | 0.283203 | 1.165634 | 1.524740 | 0.001688 | 0.001828 | 0.001770 |
| hub_uses_allocator_test.test | RUN | 0.308911 | 0.997912 | 1.086299 | 0.001660 | 0.001712 | 0.001676 |
| hub_stability_test.test | RUN | 0.705083 | 4.662202 | 3.937516 | 0.002024 | 0.002142 | 0.002130 |
| hub_sort_test.test | RUN | 0.451716 | 2.125587 | 1.855970 | 0.714724 | 0.730497 | 0.703617 |
| hub_pocxx_test.test | RUN | 0.407266 | 2.456151 | 1.357005 | 0.001540 | 0.001786 | 0.001817 |
| hub_new_extended_alignment_test.test | RUN | 0.215885 | 0.750628 | 0.713600 | 0.001496 | 0.001668 | 0.001840 |
| hub_exception_safety_test.test | RUN | 0.818607 | 5.924037 | 3.840485 | 0.091018 | 0.100477 | 0.099191 |
| hub_empty_sort_test.test | RUN | 0.241460 | 0.678447 | 0.835294 | 0.001527 | 0.001790 | 0.001684 |
| hub_api_test.test | RUN | 2.701697 | 23.778217 | 12.584597 | 0.004528 | 0.004496 | 0.004144 |
| global_resource_test.test | RUN | 0.135911 | 0.458538 | 0.430151 | 0.001668 | 0.001736 | 0.001687 |
| flat_tree_test.test | RUN | 5.384111 | 36.683171 | 24.110598 | 0.001564 | 0.001689 | 0.001772 |
| flat_set_test.test | RUN | 6.750212 | 46.296847 | 31.521902 | 0.010156 | 0.009030 | 0.009696 |
| flat_set_adaptor_test.test | RUN | 5.060511 | 41.212364 | 24.328436 | 0.010016 | 0.008961 | 0.009715 |
| flat_map_test.test | RUN | 10.823388 | 68.410911 | 50.551053 | 0.011468 | 0.010743 | 0.010377 |
| flat_map_adaptor_test.test | RUN | 6.826598 | 50.061057 | 36.159393 | 0.010454 | 0.010248 | 0.010049 |
| explicit_inst_vector_test.test | RUN | 1.066162 | 6.858197 | 5.314313 | 0.001528 | 0.001450 | 0.001584 |
| explicit_inst_string_test.test | RUN | 1.453458 | 12.056948 | 7.177829 | 0.001546 | 0.001760 | 0.001588 |
| explicit_inst_static_vector_test.test | RUN | 0.128435 | 0.440986 | 0.492498 | 0.001548 | 0.001781 | 0.001514 |
| explicit_inst_stable_vector_test.test | RUN | 0.832474 | 4.321763 | 3.387745 | 0.001666 | 0.001810 | 0.001651 |
| explicit_inst_small_vector_test.test | RUN | 0.701542 | 3.926131 | 3.078821 | 0.001555 | 0.001674 | 0.001628 |
| explicit_inst_slist_test.test | RUN | 0.526676 | 3.536144 | 2.374679 | 0.001524 | 0.001848 | 0.001685 |
| explicit_inst_set_test.test | RUN | 0.743697 | 4.133567 | 2.813244 | 0.001551 | 0.001756 | 0.001659 |
| explicit_inst_map_test.test | RUN | 0.806702 | 4.245174 | 3.019164 | 0.001570 | 0.001738 | 0.001609 |
| explicit_inst_list_test.test | RUN | 0.180455 | 0.972174 | 0.787226 | 0.001416 | 0.001708 | 0.001740 |
| explicit_inst_flat_set_test.test | RUN | 4.499396 | 30.698715 | 18.130442 | 0.001546 | 0.001632 | 0.001639 |
| explicit_inst_flat_map_test.test | RUN | 4.802761 | 32.387318 | 20.583971 | 0.001526 | 0.001716 | 0.001380 |
| explicit_inst_devector_test.test | RUN | 0.586379 | 3.858761 | 2.599562 | 0.001489 | 0.001731 | 0.001626 |
| explicit_inst_deque_test.test | RUN | 0.588352 | 4.141295 | 2.770432 | 0.001618 | 0.001762 | 0.001585 |
| devector_test.test | RUN | 7.958333 | 49.743955 | 36.722510 | 0.004103 | 0.003853 | 0.005822 |
| devector_options_test.test | RUN | 0.356639 | 2.269218 | 1.420259 | 0.001955 | 0.001936 | 0.001862 |
| deque_test.test | RUN | 5.921344 | 26.391828 | 18.897202 | 0.556281 | 0.409284 | 0.507413 |
| deque_options_test.test | RUN | 0.272105 | 0.780472 | 0.969167 | 0.001652 | 0.001773 | 0.001742 |
| copy_move_algo_test.test | RUN | 0.255658 | 1.004243 | 0.904324 | 0.002056 | 0.001929 | 0.002008 |
| common_iterator_test.test | RUN | 0.018265 | 0.049941 | 0.045553 | 0.000712 | 0.000711 | 0.001392 |
| boost_iterator_comp_test.test | RUN | 0.363321 | 1.185621 | 1.356731 | 0.001509 | 0.001677 | 0.001723 |
| allocator_traits_test.test | RUN | 0.207936 | 0.523935 | 0.629949 | 0.001432 | 0.001808 | 0.001645 |
| alloc_full_test.test | RUN | 0.243933 | 1.110553 | 0.952039 | 0.004790 | 0.004993 | 0.005366 |
| alloc_basic_test.test | RUN | 0.202301 | 0.779899 | 0.683557 | 0.001668 | 0.001796 | 0.001776 |
| adaptive_pool_test.test | RUN | 3.181689 | 16.036109 | 13.434377 | 0.011055 | 0.010465 | 0.017102 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.988× | 0.989×, 0.988× | 0.985× |
| clang | 1.073× | 1.072×, 1.075× | 0.996× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45754596224).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 2 | 0.012008s | 0.010932s | 0.011837s | byte equality observed |
| alloc_basic_test.test | 10 | 0.001046s | 0.001049s | 0.001074s | byte equality observed |
| alloc_full_test.test | 6 | 0.003500s | 0.003507s | 0.003679s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000976s | 0.000987s | 0.000992s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.001042s | 0.001018s | 0.001030s | byte equality observed |
| common_iterator_test.test | 10 | 0.000467s | 0.000455s | 0.000994s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001512s | 0.001196s | 0.001298s | byte equality observed |
| deque_options_test.test | 10 | 0.001066s | 0.001056s | 0.001057s | byte equality observed |
| deque_test.test | 1 | 0.437883s | 0.428426s | 0.530062s | byte equality observed |
| devector_options_test.test | 7 | 0.001153s | 0.001090s | 0.001096s | byte equality observed |
| devector_test.test | 4 | 0.003776s | 0.003647s | 0.005301s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000928s | 0.000937s | 0.000924s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000916s | 0.000941s | 0.000909s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000951s | 0.000949s | 0.000918s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000920s | 0.000946s | 0.000911s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000916s | 0.000925s | 0.000915s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000930s | 0.000941s | 0.000916s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000935s | 0.000934s | 0.000902s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000937s | 0.000948s | 0.000899s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000928s | 0.000936s | 0.000935s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000932s | 0.000944s | 0.000938s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000923s | 0.000919s | 0.000918s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000939s | 0.000951s | 0.000924s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000944s | 0.000927s | 0.000936s | byte equality observed |
| flat_map_adaptor_test.test | 3 | 0.007411s | 0.007050s | 0.007087s | byte equality observed |
| flat_map_test.test | 2 | 0.008145s | 0.007598s | 0.007223s | byte equality observed |
| flat_set_adaptor_test.test | 3 | 0.007278s | 0.006624s | 0.006934s | byte equality observed |
| flat_set_test.test | 3 | 0.007185s | 0.006399s | 0.006767s | byte equality observed |
| flat_tree_test.test | 10 | 0.000951s | 0.000955s | 0.000978s | byte equality observed |
| global_resource_test.test | 10 | 0.000988s | 0.001008s | 0.000996s | byte equality observed |
| hub_api_test.test | 6 | 0.003171s | 0.002769s | 0.002688s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000969s | 0.000965s | 0.000970s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.065289s | 0.068906s | 0.068031s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.001046s | 0.001055s | 0.001054s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.001043s | 0.001072s | 0.001046s | byte equality observed |
| hub_sort_test.test | 1 | 0.570356s | 0.571004s | 0.555825s | byte equality observed |
| hub_stability_test.test | 10 | 0.001273s | 0.001256s | 0.001299s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000978s | 0.000972s | 0.000985s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000996s | 0.000993s | 0.001024s | byte equality observed |
| is_constructible_test.test | 10 | 0.000439s | 0.000437s | 0.000956s | byte equality observed |
| list_test.test | 1 | 0.019838s | 0.019991s | 0.020623s | byte equality observed |
| map_test.test | 2 | 0.009971s | 0.009787s | 0.009556s | byte equality observed |
| memory_resource_test.test | 10 | 0.000979s | 0.000976s | 0.000983s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000992s | 0.001009s | 0.000995s | byte equality observed |
| nest_api_test.test | 9 | 0.001992s | 0.002001s | 0.002004s | byte equality observed |
| nest_test.test | 10 | 0.001016s | 0.001017s | 0.001027s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001480s | 0.001459s | 0.001500s | byte equality observed |
| node_allocator_test.test | 3 | 0.008567s | 0.008514s | 0.008728s | byte equality observed |
| node_handle_test.test | 10 | 0.001003s | 0.000987s | 0.000996s | byte equality observed |
| null_iterators_test.test | 10 | 0.000968s | 0.000990s | 0.000988s | byte equality observed |
| pair_test.test | 10 | 0.000978s | 0.000976s | 0.000970s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000933s | 0.000968s | 0.000963s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000926s | 0.000963s | 0.000976s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000909s | 0.000948s | 0.000937s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000919s | 0.000933s | 0.000944s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000925s | 0.000944s | 0.000948s | byte equality observed |
| pmr_list_test.test | 10 | 0.000933s | 0.000939s | 0.000960s | byte equality observed |
| pmr_map_test.test | 10 | 0.000937s | 0.000991s | 0.000947s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000943s | 0.000947s | 0.000951s | byte equality observed |
| pmr_set_test.test | 10 | 0.000944s | 0.000969s | 0.000957s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000942s | 0.000960s | 0.000956s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000932s | 0.000941s | 0.000962s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000948s | 0.000965s | 0.000947s | byte equality observed |
| pmr_string_test.test | 10 | 0.000432s | 0.000444s | 0.000940s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000439s | 0.000431s | 0.000951s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.001001s | 0.000987s | 0.001000s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.000989s | 0.000995s | 0.001043s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.000992s | 0.000971s | 0.001030s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.000985s | 0.000947s | 0.001045s | byte equality observed |
| segtor_options_test.test | 10 | 0.001052s | 0.001005s | 0.001064s | byte equality observed |
| segtor_test.test | 1 | 0.399909s | 0.387123s | 0.439446s | byte equality observed |
| set_test.test | 2 | 0.014159s | 0.012389s | 0.013566s | byte equality observed |
| slist_test.test | 1 | 0.020732s | 0.020518s | 0.020504s | byte equality observed |
| small_vector_options_test.test | 10 | 0.001109s | 0.001065s | 0.001072s | byte equality observed |
| small_vector_test.test | 5 | 0.002272s | 0.002067s | 0.004429s | byte equality observed |
| stable_vector_test.test | 1 | 0.034787s | 0.035249s | 0.036841s | byte equality observed |
| static_vector_options_test.test | 10 | 0.001066s | 0.001001s | 0.001054s | byte equality observed |
| static_vector_test.test | 10 | 0.001383s | 0.001277s | 0.001330s | byte equality observed |
| string_options_test.test | 10 | 0.001020s | 0.001015s | 0.001010s | byte equality observed |
| string_test.test | 2 | 0.013106s | 0.011972s | 0.012861s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000975s | 0.000962s | 0.000967s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.001031s | 0.001012s | 0.001007s | byte equality observed |
| throw_exception_test.test | 10 | 0.000960s | 0.000943s | 0.000945s | byte equality observed |
| tree_test.test | 10 | 0.000946s | 0.000966s | 0.000937s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.001024s | 0.000997s | 0.001003s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000950s | 0.000966s | 0.000941s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000434s | 0.000430s | 0.000936s | byte equality observed |
| vector_options_test.test | 10 | 0.001124s | 0.001127s | 0.001091s | byte equality observed |
| vector_test.test | 3 | 0.004076s | 0.003900s | 0.005946s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45754596224).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
