# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 5.986897 | 30.985960 | 27.333963 | 0.005811 | 0.005433 | 0.007501 |
| vector_options_test.test | RUN | 0.299813 | 1.432361 | 1.229870 | 0.002042 | 0.001836 | 0.001970 |
| uses_allocator_test.test | RUN | 0.055466 | 0.122637 | 0.157583 | 0.000736 | 0.000726 | 0.001750 |
| uses_allocator_construction_test.test | RUN | 0.167441 | 0.444346 | 0.530217 | 0.001766 | 0.001594 | 0.001690 |
| unsynchronized_pool_resource_test.test | RUN | 0.206253 | 1.270743 | 0.697207 | 0.001650 | 0.001627 | 0.001897 |
| tree_test.test | RUN | 0.880550 | 4.673869 | 3.918122 | 0.001630 | 0.001718 | 0.001614 |
| throw_exception_test.test | RUN | 0.123509 | 0.282708 | 0.400844 | 0.001643 | 0.001776 | 0.001748 |
| synchronized_pool_resource_test.test | RUN | 0.213926 | 1.304592 | 0.741973 | 0.001732 | 0.001890 | 0.001878 |
| string_view_compat_test.test | RUN | 0.351276 | 2.660997 | 1.442945 | 0.001605 | 0.001814 | 0.001844 |
| string_test.test | RUN | 1.476213 | 9.986544 | 7.241829 | 0.015601 | 0.015387 | 0.015605 |
| string_options_test.test | RUN | 0.287046 | 2.146385 | 1.203773 | 0.001811 | 0.001940 | 0.001915 |
| static_vector_test.test | RUN | 1.541810 | 8.236020 | 7.627482 | 0.002329 | 0.002313 | 0.002352 |
| static_vector_options_test.test | RUN | 0.206941 | 0.563702 | 0.726320 | 0.001792 | 0.001825 | 0.001901 |
| stable_vector_test.test | RUN | 3.384296 | 16.918336 | 14.244160 | 0.030883 | 0.031783 | 0.033083 |
| small_vector_test.test | RUN | 2.288977 | 11.868334 | 10.255239 | 0.003487 | 0.002865 | 0.005342 |
| small_vector_options_test.test | RUN | 0.348018 | 1.443611 | 1.393106 | 0.001932 | 0.001948 | 0.001903 |
| slist_test.test | RUN | 2.066833 | 10.673763 | 9.003472 | 0.024992 | 0.024688 | 0.024970 |
| set_test.test | RUN | 3.230659 | 20.049294 | 16.508784 | 0.015285 | 0.013301 | 0.014965 |
| segtor_test.test | RUN | 3.958742 | 21.648408 | 18.211670 | 0.610655 | 0.650097 | 0.660479 |
| segtor_options_test.test | RUN | 0.237352 | 0.599074 | 0.865275 | 0.001520 | 0.001752 | 0.001686 |
| scoped_allocator_usage_test.test | RUN | 0.769584 | 3.386768 | 3.110889 | 0.001727 | 0.001716 | 0.001578 |
| scoped_allocator_adaptor_test.test | RUN | 0.357478 | 0.972093 | 1.454566 | 0.001720 | 0.001760 | 0.002590 |
| resource_adaptor_test.test | RUN | 0.190726 | 0.561532 | 0.620811 | 0.001616 | 0.001688 | 0.001689 |
| polymorphic_allocator_test.test | RUN | 0.160313 | 0.458900 | 0.536634 | 0.001589 | 0.001486 | 0.001602 |
| pmr_vector_test.test | RUN | 0.089091 | 0.170359 | 0.258254 | 0.000733 | 0.000769 | 0.001720 |
| pmr_string_test.test | RUN | 0.176595 | 0.358136 | 0.537528 | 0.000614 | 0.000604 | 0.001676 |
| pmr_stable_vector_test.test | RUN | 0.196415 | 0.567833 | 0.677605 | 0.001588 | 0.001690 | 0.001800 |
| pmr_small_vector_test.test | RUN | 0.109129 | 0.245993 | 0.333165 | 0.001529 | 0.001486 | 0.001688 |
| pmr_slist_test.test | RUN | 0.146325 | 0.753689 | 0.689859 | 0.001554 | 0.001834 | 0.001552 |
| pmr_set_test.test | RUN | 0.170768 | 0.415811 | 0.525713 | 0.001587 | 0.001816 | 0.001792 |
| pmr_nest_test.test | RUN | 0.132132 | 0.276065 | 0.360744 | 0.001413 | 0.001783 | 0.001655 |
| pmr_map_test.test | RUN | 0.177942 | 0.406324 | 0.596182 | 0.001636 | 0.001518 | 0.001701 |
| pmr_list_test.test | RUN | 0.115458 | 0.254153 | 0.382143 | 0.001652 | 0.001638 | 0.002112 |
| pmr_hub_test.test | RUN | 0.161339 | 0.349895 | 0.483956 | 0.001653 | 0.001739 | 0.001442 |
| pmr_flat_set_test.test | RUN | 0.125485 | 0.282866 | 0.386936 | 0.001662 | 0.001592 | 0.001533 |
| pmr_flat_map_test.test | RUN | 0.151842 | 0.318967 | 0.459809 | 0.001655 | 0.001608 | 0.001716 |
| pmr_devector_test.test | RUN | 0.098034 | 0.276650 | 0.320662 | 0.001365 | 0.001491 | 0.001654 |
| pmr_deque_test.test | RUN | 0.099555 | 0.229520 | 0.323945 | 0.001474 | 0.001411 | 0.001596 |
| pair_test.test | RUN | 0.250559 | 0.545638 | 0.780402 | 0.001428 | 0.001828 | 0.001625 |
| null_iterators_test.test | RUN | 0.391444 | 1.054056 | 1.251464 | 0.001573 | 0.001666 | 0.001837 |
| node_handle_test.test | RUN | 0.156722 | 1.301949 | 0.496758 | 0.001495 | 0.001761 | 0.001636 |
| node_allocator_test.test | RUN | 2.454923 | 13.217408 | 11.094501 | 0.009805 | 0.010216 | 0.010264 |
| new_delete_resource_test.test | RUN | 0.206913 | 0.786610 | 0.724336 | 0.002412 | 0.002418 | 0.002673 |
| nest_test.test | RUN | 0.522884 | 3.534730 | 2.512912 | 0.001729 | 0.001768 | 0.001826 |
| nest_api_test.test | RUN | 0.891222 | 6.838409 | 4.947985 | 0.002610 | 0.002485 | 0.002580 |
| monotonic_buffer_resource_test.test | RUN | 0.213130 | 1.426426 | 0.749015 | 0.001314 | 0.001731 | 0.001631 |
| memory_resource_test.test | RUN | 0.127136 | 0.421048 | 0.440197 | 0.001434 | 0.001762 | 0.001761 |
| map_test.test | RUN | 4.315603 | 22.573754 | 23.596194 | 0.010902 | 0.011142 | 0.010916 |
| list_test.test | RUN | 2.254053 | 11.579143 | 9.816382 | 0.025081 | 0.025567 | 0.026047 |
| is_constructible_test.test | RUN | 0.081257 | 0.155785 | 0.257387 | 0.000720 | 0.000774 | 0.001696 |
| insert_vs_emplace_test.test | RUN | 0.243903 | 0.922243 | 1.298251 | 0.001788 | 0.001925 | 0.001864 |
| hub_uses_allocator_test.test | RUN | 0.268114 | 0.831926 | 0.979175 | 0.001532 | 0.001765 | 0.001838 |
| hub_stability_test.test | RUN | 0.585446 | 3.647855 | 3.293825 | 0.001918 | 0.001958 | 0.001830 |
| hub_sort_test.test | RUN | 0.379335 | 1.683544 | 1.542865 | 0.516015 | 0.522581 | 0.508661 |
| hub_pocxx_test.test | RUN | 0.323069 | 1.957059 | 1.192586 | 0.001738 | 0.001789 | 0.001814 |
| hub_new_extended_alignment_test.test | RUN | 0.190517 | 0.605741 | 0.648796 | 0.001765 | 0.001814 | 0.001821 |
| hub_exception_safety_test.test | RUN | 0.680627 | 4.633753 | 3.182444 | 0.090714 | 0.090775 | 0.088407 |
| hub_empty_sort_test.test | RUN | 0.212834 | 0.569061 | 0.763125 | 0.001723 | 0.001816 | 0.001748 |
| hub_api_test.test | RUN | 2.253589 | 18.434889 | 10.588347 | 0.003898 | 0.003745 | 0.003625 |
| global_resource_test.test | RUN | 0.121838 | 0.382670 | 0.418760 | 0.001632 | 0.001802 | 0.001781 |
| flat_tree_test.test | RUN | 4.047159 | 28.659056 | 19.432138 | 0.001648 | 0.001782 | 0.001712 |
| flat_set_test.test | RUN | 4.992552 | 35.803037 | 25.667059 | 0.007988 | 0.007507 | 0.007829 |
| flat_set_adaptor_test.test | RUN | 3.716150 | 32.047224 | 20.183889 | 0.008261 | 0.007701 | 0.008381 |
| flat_map_test.test | RUN | 8.022760 | 53.895329 | 41.758468 | 0.009025 | 0.008708 | 0.008454 |
| flat_map_adaptor_test.test | RUN | 5.093794 | 39.047220 | 30.018700 | 0.008420 | 0.008188 | 0.008165 |
| explicit_inst_vector_test.test | RUN | 0.819106 | 5.306206 | 4.380683 | 0.001716 | 0.001932 | 0.001639 |
| explicit_inst_string_test.test | RUN | 1.102979 | 9.543084 | 6.020754 | 0.001711 | 0.001850 | 0.001589 |
| explicit_inst_static_vector_test.test | RUN | 0.114419 | 0.356432 | 0.436568 | 0.001616 | 0.001814 | 0.001725 |
| explicit_inst_stable_vector_test.test | RUN | 0.665763 | 3.443989 | 2.812948 | 0.001754 | 0.001815 | 0.001682 |
| explicit_inst_small_vector_test.test | RUN | 0.573492 | 3.133307 | 2.589180 | 0.001555 | 0.001771 | 0.001688 |
| explicit_inst_slist_test.test | RUN | 0.438092 | 2.835767 | 2.035842 | 0.001676 | 0.001473 | 0.001711 |
| explicit_inst_set_test.test | RUN | 0.614298 | 3.318671 | 2.431918 | 0.001712 | 0.001794 | 0.001689 |
| explicit_inst_map_test.test | RUN | 0.672311 | 3.465394 | 2.657148 | 0.001730 | 0.001928 | 0.001620 |
| explicit_inst_list_test.test | RUN | 0.154204 | 0.790184 | 0.673574 | 0.001683 | 0.001839 | 0.001656 |
| explicit_inst_flat_set_test.test | RUN | 3.299584 | 24.291453 | 15.071549 | 0.001768 | 0.001723 | 0.001754 |
| explicit_inst_flat_map_test.test | RUN | 3.582402 | 25.332542 | 17.168105 | 0.001509 | 0.001732 | 0.001479 |
| explicit_inst_devector_test.test | RUN | 0.465027 | 3.082997 | 2.149112 | 0.001642 | 0.001802 | 0.001756 |
| explicit_inst_deque_test.test | RUN | 0.483998 | 3.336081 | 2.371798 | 0.001742 | 0.001896 | 0.001698 |
| devector_test.test | RUN | 5.866168 | 40.282467 | 30.765056 | 0.003592 | 0.003482 | 0.004559 |
| devector_options_test.test | RUN | 0.316574 | 1.864094 | 1.222201 | 0.002083 | 0.002020 | 0.001948 |
| deque_test.test | RUN | 4.462708 | 23.533717 | 15.903471 | 0.414470 | 0.371683 | 0.422479 |
| deque_options_test.test | RUN | 0.239965 | 0.694306 | 0.941533 | 0.001863 | 0.001833 | 0.001872 |
| copy_move_algo_test.test | RUN | 0.223497 | 0.852919 | 0.854583 | 0.001962 | 0.001946 | 0.001822 |
| common_iterator_test.test | RUN | 0.018602 | 0.043865 | 0.046090 | 0.000690 | 0.000735 | 0.001628 |
| boost_iterator_comp_test.test | RUN | 0.320653 | 1.026419 | 1.229586 | 0.001780 | 0.001697 | 0.001767 |
| allocator_traits_test.test | RUN | 0.191622 | 0.464397 | 0.637960 | 0.001569 | 0.001863 | 0.001734 |
| alloc_full_test.test | RUN | 0.209156 | 0.862776 | 0.813175 | 0.004670 | 0.005032 | 0.004816 |
| alloc_basic_test.test | RUN | 0.175141 | 0.655853 | 0.609767 | 0.001656 | 0.001932 | 0.001846 |
| adaptive_pool_test.test | RUN | 2.423151 | 10.013840 | 11.289858 | 0.014478 | 0.009647 | 0.010344 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.983× | 0.994×, 0.972× | 0.992× |
| clang | 1.024× | 1.032×, 1.017× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44813597235).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 2 | 0.010153s | 0.009966s | 0.010558s | byte equality observed |
| alloc_basic_test.test | 10 | 0.001081s | 0.001066s | 0.001048s | byte equality observed |
| alloc_full_test.test | 7 | 0.002996s | 0.003033s | 0.003103s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000974s | 0.000970s | 0.000971s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.001035s | 0.001018s | 0.001005s | byte equality observed |
| common_iterator_test.test | 10 | 0.000459s | 0.000456s | 0.000979s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001237s | 0.001105s | 0.001145s | byte equality observed |
| deque_options_test.test | 10 | 0.001046s | 0.001030s | 0.001040s | byte equality observed |
| deque_test.test | 1 | 0.421788s | 0.395938s | 0.461249s | byte equality observed |
| devector_options_test.test | 10 | 0.001152s | 0.001113s | 0.001080s | byte equality observed |
| devector_test.test | 5 | 0.003207s | 0.003155s | 0.004260s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000952s | 0.000980s | 0.000937s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000939s | 0.000957s | 0.000928s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000946s | 0.000971s | 0.000936s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000945s | 0.000968s | 0.000957s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000945s | 0.000942s | 0.000941s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000949s | 0.000949s | 0.000941s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000946s | 0.000957s | 0.000939s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000942s | 0.000952s | 0.000941s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000935s | 0.000951s | 0.000959s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000940s | 0.000941s | 0.000943s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000939s | 0.000924s | 0.000938s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000942s | 0.000941s | 0.000949s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000951s | 0.000949s | 0.000955s | byte equality observed |
| flat_map_adaptor_test.test | 3 | 0.005864s | 0.005603s | 0.005745s | byte equality observed |
| flat_map_test.test | 4 | 0.006293s | 0.006004s | 0.006026s | byte equality observed |
| flat_set_adaptor_test.test | 4 | 0.005903s | 0.005343s | 0.005910s | byte equality observed |
| flat_set_test.test | 4 | 0.005826s | 0.005164s | 0.005785s | byte equality observed |
| flat_tree_test.test | 10 | 0.000955s | 0.000960s | 0.000963s | byte equality observed |
| global_resource_test.test | 10 | 0.000976s | 0.001003s | 0.000972s | byte equality observed |
| hub_api_test.test | 7 | 0.002673s | 0.002192s | 0.002170s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000955s | 0.000956s | 0.000982s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.067424s | 0.062957s | 0.063820s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.001115s | 0.001091s | 0.001028s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.001042s | 0.001004s | 0.000996s | byte equality observed |
| hub_sort_test.test | 1 | 0.436046s | 0.430202s | 0.423206s | byte equality observed |
| hub_stability_test.test | 10 | 0.001198s | 0.001191s | 0.001224s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000943s | 0.000945s | 0.000973s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000973s | 0.000986s | 0.000994s | byte equality observed |
| is_constructible_test.test | 10 | 0.000439s | 0.000444s | 0.000937s | byte equality observed |
| list_test.test | 2 | 0.017259s | 0.017368s | 0.017635s | byte equality observed |
| map_test.test | 3 | 0.007882s | 0.007825s | 0.007722s | byte equality observed |
| memory_resource_test.test | 10 | 0.000982s | 0.000972s | 0.000982s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000995s | 0.001000s | 0.000980s | byte equality observed |
| nest_api_test.test | 10 | 0.001613s | 0.001609s | 0.001629s | byte equality observed |
| nest_test.test | 10 | 0.001012s | 0.001006s | 0.001013s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001443s | 0.001462s | 0.001423s | byte equality observed |
| node_allocator_test.test | 3 | 0.007215s | 0.007271s | 0.007309s | byte equality observed |
| node_handle_test.test | 10 | 0.000965s | 0.000992s | 0.000990s | byte equality observed |
| null_iterators_test.test | 10 | 0.000989s | 0.000960s | 0.000995s | byte equality observed |
| pair_test.test | 10 | 0.000963s | 0.000983s | 0.001007s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000961s | 0.000967s | 0.000971s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000960s | 0.000964s | 0.000961s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000965s | 0.000961s | 0.000963s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000946s | 0.000972s | 0.000971s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000966s | 0.000969s | 0.000965s | byte equality observed |
| pmr_list_test.test | 10 | 0.000961s | 0.000965s | 0.000966s | byte equality observed |
| pmr_map_test.test | 10 | 0.000961s | 0.000977s | 0.000958s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000959s | 0.000980s | 0.000963s | byte equality observed |
| pmr_set_test.test | 10 | 0.000947s | 0.000974s | 0.000958s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000951s | 0.000978s | 0.000975s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000954s | 0.000965s | 0.000985s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000978s | 0.000984s | 0.001007s | byte equality observed |
| pmr_string_test.test | 10 | 0.000461s | 0.000468s | 0.000979s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000458s | 0.000464s | 0.000990s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.001042s | 0.001041s | 0.001015s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.001012s | 0.001017s | 0.001013s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.000992s | 0.000985s | 0.000995s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.001009s | 0.001015s | 0.000997s | byte equality observed |
| segtor_options_test.test | 10 | 0.001014s | 0.001008s | 0.001001s | byte equality observed |
| segtor_test.test | 1 | 0.381188s | 0.381388s | 0.377685s | byte equality observed |
| set_test.test | 2 | 0.010885s | 0.009642s | 0.010983s | byte equality observed |
| slist_test.test | 2 | 0.016852s | 0.016910s | 0.016799s | byte equality observed |
| small_vector_options_test.test | 10 | 0.001076s | 0.001069s | 0.001066s | byte equality observed |
| small_vector_test.test | 6 | 0.002071s | 0.001932s | 0.003545s | byte equality observed |
| stable_vector_test.test | 1 | 0.025263s | 0.025455s | 0.026420s | byte equality observed |
| static_vector_options_test.test | 10 | 0.001040s | 0.001005s | 0.001043s | byte equality observed |
| static_vector_test.test | 10 | 0.001308s | 0.001248s | 0.001272s | byte equality observed |
| string_options_test.test | 10 | 0.001000s | 0.001011s | 0.000991s | byte equality observed |
| string_test.test | 2 | 0.011142s | 0.011839s | 0.011365s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000953s | 0.000976s | 0.000969s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.000998s | 0.001044s | 0.001009s | byte equality observed |
| throw_exception_test.test | 10 | 0.000942s | 0.000966s | 0.000939s | byte equality observed |
| tree_test.test | 10 | 0.000937s | 0.000959s | 0.000933s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.000998s | 0.001022s | 0.000994s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000954s | 0.000972s | 0.000942s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000432s | 0.000451s | 0.000941s | byte equality observed |
| vector_options_test.test | 10 | 0.001106s | 0.001121s | 0.001093s | byte equality observed |
| vector_test.test | 4 | 0.003508s | 0.003459s | 0.004865s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44813597235).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
