# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 5.944340 | 31.825889 | 28.216096 | 0.005837 | 0.005625 | 0.007718 |
| vector_options_test.test | RUN | 0.319069 | 1.468586 | 1.247308 | 0.002068 | 0.002023 | 0.002088 |
| uses_allocator_test.test | RUN | 0.056788 | 0.122163 | 0.166115 | 0.000745 | 0.000763 | 0.001863 |
| uses_allocator_construction_test.test | RUN | 0.173952 | 0.453069 | 0.524801 | 0.001718 | 0.001844 | 0.002091 |
| unsynchronized_pool_resource_test.test | RUN | 0.218625 | 1.334020 | 0.745611 | 0.001874 | 0.001826 | 0.002020 |
| tree_test.test | RUN | 0.941330 | 4.790591 | 4.002501 | 0.001623 | 0.001938 | 0.001753 |
| throw_exception_test.test | RUN | 0.118262 | 0.284966 | 0.402583 | 0.001925 | 0.001807 | 0.001852 |
| synchronized_pool_resource_test.test | RUN | 0.216998 | 1.322761 | 0.751274 | 0.001769 | 0.001940 | 0.001900 |
| string_view_compat_test.test | RUN | 0.362643 | 2.634398 | 1.447218 | 0.001776 | 0.002008 | 0.001570 |
| string_test.test | RUN | 1.525124 | 10.158982 | 7.647443 | 0.015672 | 0.015562 | 0.015655 |
| string_options_test.test | RUN | 0.301452 | 2.223363 | 1.077028 | 0.001787 | 0.001944 | 0.001730 |
| static_vector_test.test | RUN | 1.579290 | 8.321790 | 7.629902 | 0.002460 | 0.002326 | 0.002272 |
| static_vector_options_test.test | RUN | 0.214526 | 0.573277 | 0.713711 | 0.001719 | 0.001838 | 0.001975 |
| stable_vector_test.test | RUN | 3.443962 | 17.287218 | 14.561361 | 0.033149 | 0.032176 | 0.032931 |
| small_vector_test.test | RUN | 2.364845 | 11.983481 | 10.571736 | 0.003645 | 0.003384 | 0.005524 |
| small_vector_options_test.test | RUN | 0.365931 | 1.466430 | 1.421015 | 0.001960 | 0.001962 | 0.001863 |
| slist_test.test | RUN | 2.157030 | 10.977690 | 9.388575 | 0.025124 | 0.025197 | 0.024522 |
| set_test.test | RUN | 3.325861 | 20.827988 | 17.583792 | 0.015904 | 0.013463 | 0.015330 |
| segtor_test.test | RUN | 4.105352 | 22.349097 | 19.250694 | 0.600205 | 0.638123 | 0.640739 |
| segtor_options_test.test | RUN | 0.245479 | 0.673445 | 0.833555 | 0.001878 | 0.001852 | 0.001796 |
| scoped_allocator_usage_test.test | RUN | 0.793260 | 3.456602 | 3.256403 | 0.001798 | 0.001764 | 0.001860 |
| scoped_allocator_adaptor_test.test | RUN | 0.373141 | 0.938740 | 1.484403 | 0.001794 | 0.001890 | 0.001686 |
| resource_adaptor_test.test | RUN | 0.196596 | 0.580271 | 0.641457 | 0.001823 | 0.001718 | 0.001878 |
| polymorphic_allocator_test.test | RUN | 0.164689 | 0.472188 | 0.528185 | 0.001641 | 0.001959 | 0.001750 |
| pmr_vector_test.test | RUN | 0.094090 | 0.176020 | 0.300511 | 0.000722 | 0.000827 | 0.001886 |
| pmr_string_test.test | RUN | 0.185422 | 0.371509 | 0.551533 | 0.000750 | 0.000781 | 0.001854 |
| pmr_stable_vector_test.test | RUN | 0.198821 | 0.584129 | 0.729421 | 0.001618 | 0.001629 | 0.001582 |
| pmr_small_vector_test.test | RUN | 0.113491 | 0.249918 | 0.345830 | 0.001756 | 0.001893 | 0.001781 |
| pmr_slist_test.test | RUN | 0.151235 | 0.768513 | 0.703977 | 0.002654 | 0.001890 | 0.001902 |
| pmr_set_test.test | RUN | 0.189964 | 0.420227 | 0.554291 | 0.001551 | 0.001974 | 0.001935 |
| pmr_nest_test.test | RUN | 0.135562 | 0.275998 | 0.378386 | 0.001512 | 0.001852 | 0.001875 |
| pmr_map_test.test | RUN | 0.182435 | 0.420584 | 0.558710 | 0.001571 | 0.001707 | 0.001828 |
| pmr_list_test.test | RUN | 0.120221 | 0.269475 | 0.362566 | 0.001781 | 0.001778 | 0.001868 |
| pmr_hub_test.test | RUN | 0.168210 | 0.374410 | 0.484471 | 0.001573 | 0.001510 | 0.001679 |
| pmr_flat_set_test.test | RUN | 0.127854 | 0.278821 | 0.434820 | 0.001814 | 0.001880 | 0.001770 |
| pmr_flat_map_test.test | RUN | 0.159155 | 0.331430 | 0.509183 | 0.001778 | 0.001475 | 0.001653 |
| pmr_devector_test.test | RUN | 0.100924 | 0.277800 | 0.334742 | 0.001513 | 0.001710 | 0.001668 |
| pmr_deque_test.test | RUN | 0.100118 | 0.235876 | 0.359397 | 0.001476 | 0.001800 | 0.001828 |
| pair_test.test | RUN | 0.252257 | 0.572790 | 0.727696 | 0.001599 | 0.001876 | 0.001664 |
| null_iterators_test.test | RUN | 0.369082 | 1.130110 | 1.348079 | 0.004182 | 0.001916 | 0.001857 |
| node_handle_test.test | RUN | 0.172266 | 1.318596 | 0.485024 | 0.001782 | 0.001875 | 0.001840 |
| node_allocator_test.test | RUN | 2.550268 | 13.686838 | 11.861953 | 0.010902 | 0.010290 | 0.010187 |
| new_delete_resource_test.test | RUN | 0.232811 | 0.845374 | 0.724286 | 0.002767 | 0.002558 | 0.002512 |
| nest_test.test | RUN | 0.578726 | 3.748179 | 2.542453 | 0.001803 | 0.001918 | 0.001914 |
| nest_api_test.test | RUN | 0.936447 | 7.128329 | 5.074861 | 0.002510 | 0.002763 | 0.002754 |
| monotonic_buffer_resource_test.test | RUN | 0.216689 | 1.458277 | 0.631041 | 0.001816 | 0.001737 | 0.001692 |
| memory_resource_test.test | RUN | 0.131865 | 0.377890 | 0.452900 | 0.001717 | 0.001738 | 0.001918 |
| map_test.test | RUN | 4.494055 | 22.935054 | 24.742091 | 0.010711 | 0.011080 | 0.010896 |
| list_test.test | RUN | 2.337003 | 11.717201 | 10.192689 | 0.025092 | 0.025416 | 0.025828 |
| is_constructible_test.test | RUN | 0.088035 | 0.156071 | 0.262079 | 0.000780 | 0.000774 | 0.001867 |
| insert_vs_emplace_test.test | RUN | 0.246652 | 0.957634 | 1.414398 | 0.001828 | 0.001852 | 0.001937 |
| hub_uses_allocator_test.test | RUN | 0.279224 | 0.824609 | 0.979457 | 0.001656 | 0.001870 | 0.001851 |
| hub_stability_test.test | RUN | 0.610442 | 3.786466 | 3.381683 | 0.003982 | 0.002211 | 0.002196 |
| hub_sort_test.test | RUN | 0.396397 | 1.757754 | 1.720342 | 0.532068 | 0.534326 | 0.511198 |
| hub_pocxx_test.test | RUN | 0.334699 | 1.985253 | 1.262505 | 0.001431 | 0.001981 | 0.001928 |
| hub_new_extended_alignment_test.test | RUN | 0.195344 | 0.614745 | 0.713620 | 0.001794 | 0.001843 | 0.001875 |
| hub_exception_safety_test.test | RUN | 0.690299 | 4.787471 | 3.548854 | 0.094272 | 0.089885 | 0.093761 |
| hub_empty_sort_test.test | RUN | 0.224358 | 0.591102 | 0.832775 | 0.001781 | 0.001929 | 0.001704 |
| hub_api_test.test | RUN | 2.357163 | 19.827319 | 11.195440 | 0.004134 | 0.003997 | 0.003718 |
| global_resource_test.test | RUN | 0.126311 | 0.395937 | 0.430532 | 0.001775 | 0.002046 | 0.001968 |
| flat_tree_test.test | RUN | 4.119955 | 29.169732 | 19.982856 | 0.001817 | 0.001831 | 0.001653 |
| flat_set_test.test | RUN | 5.164332 | 37.181970 | 26.662048 | 0.008431 | 0.006698 | 0.008049 |
| flat_set_adaptor_test.test | RUN | 3.796265 | 33.000550 | 21.072570 | 0.008339 | 0.007894 | 0.008454 |
| flat_map_test.test | RUN | 8.161051 | 55.731831 | 43.540537 | 0.008973 | 0.008880 | 0.008368 |
| flat_map_adaptor_test.test | RUN | 5.174985 | 40.107377 | 30.747164 | 0.008598 | 0.008250 | 0.008089 |
| explicit_inst_vector_test.test | RUN | 0.840562 | 5.419636 | 4.622097 | 0.001778 | 0.001948 | 0.001744 |
| explicit_inst_string_test.test | RUN | 1.115559 | 9.739769 | 6.249417 | 0.001820 | 0.001814 | 0.001798 |
| explicit_inst_static_vector_test.test | RUN | 0.118976 | 0.324337 | 0.425961 | 0.001788 | 0.001811 | 0.001726 |
| explicit_inst_stable_vector_test.test | RUN | 0.677215 | 3.443704 | 2.730474 | 0.001655 | 0.001868 | 0.001866 |
| explicit_inst_small_vector_test.test | RUN | 0.580136 | 3.156974 | 2.725957 | 0.001777 | 0.001802 | 0.001823 |
| explicit_inst_slist_test.test | RUN | 0.454895 | 2.878811 | 2.101709 | 0.001764 | 0.001732 | 0.001750 |
| explicit_inst_set_test.test | RUN | 0.620874 | 3.368667 | 2.460302 | 0.001787 | 0.001898 | 0.001841 |
| explicit_inst_map_test.test | RUN | 0.673755 | 3.508023 | 2.659579 | 0.001720 | 0.001839 | 0.001632 |
| explicit_inst_list_test.test | RUN | 0.158088 | 0.809595 | 0.675333 | 0.001535 | 0.001818 | 0.001658 |
| explicit_inst_flat_set_test.test | RUN | 3.339921 | 24.559375 | 15.478525 | 0.001784 | 0.001834 | 0.001848 |
| explicit_inst_flat_map_test.test | RUN | 3.609170 | 25.985228 | 17.324514 | 0.001814 | 0.002010 | 0.001588 |
| explicit_inst_devector_test.test | RUN | 0.470136 | 3.127644 | 2.158009 | 0.001799 | 0.001819 | 0.001724 |
| explicit_inst_deque_test.test | RUN | 0.495982 | 3.364599 | 2.298217 | 0.001792 | 0.001761 | 0.001611 |
| devector_test.test | RUN | 6.747080 | 41.325283 | 32.457169 | 0.003845 | 0.003804 | 0.004760 |
| devector_options_test.test | RUN | 0.314406 | 1.853625 | 1.358164 | 0.002080 | 0.002120 | 0.002172 |
| deque_test.test | RUN | 3.930214 | 21.833172 | 16.534954 | 0.393015 | 0.362005 | 0.429995 |
| deque_options_test.test | RUN | 0.230475 | 0.718747 | 0.877103 | 0.001483 | 0.001914 | 0.002010 |
| copy_move_algo_test.test | RUN | 0.228301 | 0.814362 | 0.799402 | 0.002112 | 0.001946 | 0.001714 |
| common_iterator_test.test | RUN | 0.019726 | 0.046119 | 0.045727 | 0.000752 | 0.000772 | 0.001784 |
| boost_iterator_comp_test.test | RUN | 0.331741 | 1.010082 | 1.242849 | 0.001722 | 0.001869 | 0.001872 |
| allocator_traits_test.test | RUN | 0.201949 | 0.478263 | 0.637986 | 0.001615 | 0.001823 | 0.002038 |
| alloc_full_test.test | RUN | 0.217695 | 0.915494 | 0.855918 | 0.004732 | 0.004581 | 0.004606 |
| alloc_basic_test.test | RUN | 0.181540 | 0.669332 | 0.664621 | 0.001822 | 0.001808 | 0.001809 |
| adaptive_pool_test.test | RUN | 2.416171 | 14.378945 | 11.652625 | 0.010274 | 0.009806 | 0.010461 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.966× | 0.975×, 0.957× | 1.008× |
| clang | 0.997× | 0.987×, 1.007× | 0.996× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44830361139).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 2 | 0.010304s | 0.009600s | 0.010506s | byte equality observed |
| alloc_basic_test.test | 10 | 0.001051s | 0.001053s | 0.001057s | byte equality observed |
| alloc_full_test.test | 7 | 0.002989s | 0.002969s | 0.003083s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000983s | 0.000976s | 0.000978s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.000999s | 0.001030s | 0.000974s | byte equality observed |
| common_iterator_test.test | 10 | 0.000464s | 0.000454s | 0.000985s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001228s | 0.001094s | 0.001132s | byte equality observed |
| deque_options_test.test | 10 | 0.001052s | 0.001039s | 0.001039s | byte equality observed |
| deque_test.test | 1 | 0.419627s | 0.392474s | 0.463677s | byte equality observed |
| devector_options_test.test | 10 | 0.001160s | 0.001075s | 0.001087s | byte equality observed |
| devector_test.test | 5 | 0.003252s | 0.003105s | 0.004244s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000951s | 0.000942s | 0.000924s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000946s | 0.000954s | 0.000921s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000952s | 0.000952s | 0.000928s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000953s | 0.000951s | 0.000939s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000937s | 0.000932s | 0.000924s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000946s | 0.000948s | 0.000931s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000941s | 0.000951s | 0.000930s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000947s | 0.000946s | 0.000935s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000955s | 0.000949s | 0.000935s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000967s | 0.000951s | 0.000939s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000936s | 0.000925s | 0.000924s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000950s | 0.000953s | 0.000930s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000951s | 0.000947s | 0.000931s | byte equality observed |
| flat_map_adaptor_test.test | 3 | 0.005855s | 0.005587s | 0.005752s | byte equality observed |
| flat_map_test.test | 4 | 0.006299s | 0.006009s | 0.005941s | byte equality observed |
| flat_set_adaptor_test.test | 4 | 0.005886s | 0.005317s | 0.005894s | byte equality observed |
| flat_set_test.test | 4 | 0.005902s | 0.005138s | 0.005769s | byte equality observed |
| flat_tree_test.test | 10 | 0.000954s | 0.000948s | 0.000937s | byte equality observed |
| global_resource_test.test | 10 | 0.000988s | 0.000981s | 0.000965s | byte equality observed |
| hub_api_test.test | 7 | 0.002739s | 0.002192s | 0.002152s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000982s | 0.000942s | 0.000930s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.073417s | 0.063993s | 0.065081s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.001014s | 0.001020s | 0.000982s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.001008s | 0.000981s | 0.000965s | byte equality observed |
| hub_sort_test.test | 1 | 0.439055s | 0.432406s | 0.415944s | byte equality observed |
| hub_stability_test.test | 10 | 0.001247s | 0.001166s | 0.001197s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000984s | 0.000947s | 0.000954s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000988s | 0.000975s | 0.000998s | byte equality observed |
| is_constructible_test.test | 10 | 0.000438s | 0.000437s | 0.000937s | byte equality observed |
| list_test.test | 2 | 0.017255s | 0.017259s | 0.017665s | byte equality observed |
| map_test.test | 3 | 0.007903s | 0.007664s | 0.007788s | byte equality observed |
| memory_resource_test.test | 10 | 0.000985s | 0.000957s | 0.001007s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000979s | 0.000965s | 0.000977s | byte equality observed |
| nest_api_test.test | 10 | 0.001592s | 0.001582s | 0.001638s | byte equality observed |
| nest_test.test | 10 | 0.001040s | 0.000990s | 0.001011s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001459s | 0.001387s | 0.001431s | byte equality observed |
| node_allocator_test.test | 3 | 0.007229s | 0.006984s | 0.007284s | byte equality observed |
| node_handle_test.test | 10 | 0.000983s | 0.000961s | 0.001008s | byte equality observed |
| null_iterators_test.test | 10 | 0.000991s | 0.000970s | 0.000991s | byte equality observed |
| pair_test.test | 10 | 0.000989s | 0.000950s | 0.000973s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000942s | 0.000933s | 0.000955s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000951s | 0.000942s | 0.000939s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000948s | 0.000977s | 0.000963s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000945s | 0.000931s | 0.000953s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000951s | 0.000957s | 0.000952s | byte equality observed |
| pmr_list_test.test | 10 | 0.000936s | 0.000953s | 0.000944s | byte equality observed |
| pmr_map_test.test | 10 | 0.000960s | 0.000954s | 0.000945s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000953s | 0.000976s | 0.000934s | byte equality observed |
| pmr_set_test.test | 10 | 0.000947s | 0.000977s | 0.000972s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000948s | 0.000952s | 0.000983s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000971s | 0.000974s | 0.000971s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000974s | 0.000978s | 0.001001s | byte equality observed |
| pmr_string_test.test | 10 | 0.000473s | 0.000465s | 0.000979s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000468s | 0.000465s | 0.000993s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.001030s | 0.000998s | 0.001015s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.001016s | 0.001003s | 0.001015s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.001026s | 0.001023s | 0.000994s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.001010s | 0.000994s | 0.001009s | byte equality observed |
| segtor_options_test.test | 10 | 0.001021s | 0.000992s | 0.001009s | byte equality observed |
| segtor_test.test | 1 | 0.375684s | 0.380394s | 0.366657s | byte equality observed |
| set_test.test | 2 | 0.010949s | 0.009684s | 0.010991s | byte equality observed |
| slist_test.test | 2 | 0.016799s | 0.016810s | 0.016856s | byte equality observed |
| small_vector_options_test.test | 10 | 0.001074s | 0.001044s | 0.001076s | byte equality observed |
| small_vector_test.test | 6 | 0.002085s | 0.001932s | 0.003561s | byte equality observed |
| stable_vector_test.test | 1 | 0.025286s | 0.025340s | 0.026418s | byte equality observed |
| static_vector_options_test.test | 10 | 0.001041s | 0.000996s | 0.001036s | byte equality observed |
| static_vector_test.test | 10 | 0.001320s | 0.001231s | 0.001268s | byte equality observed |
| string_options_test.test | 10 | 0.001007s | 0.001013s | 0.001000s | byte equality observed |
| string_test.test | 2 | 0.011203s | 0.011726s | 0.011435s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000967s | 0.000966s | 0.000951s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.001019s | 0.001002s | 0.001018s | byte equality observed |
| throw_exception_test.test | 10 | 0.000953s | 0.000946s | 0.000934s | byte equality observed |
| tree_test.test | 10 | 0.000957s | 0.000933s | 0.000932s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.001015s | 0.001003s | 0.001018s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000951s | 0.000935s | 0.000983s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000437s | 0.000437s | 0.000977s | byte equality observed |
| vector_options_test.test | 10 | 0.001143s | 0.001090s | 0.001128s | byte equality observed |
| vector_test.test | 4 | 0.003693s | 0.003449s | 0.005131s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44830361139).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
