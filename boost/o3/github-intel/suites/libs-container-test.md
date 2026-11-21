# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 7.841357 | 41.136309 | 33.041176 | 0.006340 | 0.006612 | 0.009379 |
| vector_options_test.test | RUN | 0.366986 | 1.859968 | 1.444497 | 0.001733 | 0.001862 | 0.001813 |
| uses_allocator_test.test | RUN | 0.067087 | 0.149683 | 0.184347 | 0.000659 | 0.000730 | 0.001649 |
| uses_allocator_construction_test.test | RUN | 0.197600 | 0.566081 | 0.654686 | 0.001530 | 0.001698 | 0.001586 |
| unsynchronized_pool_resource_test.test | RUN | 0.254899 | 1.708160 | 0.845023 | 0.001537 | 0.001605 | 0.001724 |
| tree_test.test | RUN | 1.092345 | 6.161935 | 4.591461 | 0.001368 | 0.001670 | 0.001478 |
| throw_exception_test.test | RUN | 0.140191 | 0.366216 | 0.439246 | 0.001539 | 0.001648 | 0.001672 |
| synchronized_pool_resource_test.test | RUN | 0.253101 | 1.714729 | 0.846501 | 0.001608 | 0.001758 | 0.001654 |
| string_view_compat_test.test | RUN | 0.422355 | 3.467294 | 1.664177 | 0.001356 | 0.001740 | 0.001697 |
| string_test.test | RUN | 1.915488 | 13.071284 | 9.049575 | 0.019244 | 0.018718 | 0.017764 |
| string_options_test.test | RUN | 0.340886 | 2.827006 | 1.447814 | 0.001697 | 0.001811 | 0.001688 |
| static_vector_test.test | RUN | 1.955395 | 10.896876 | 9.099243 | 0.002361 | 0.002277 | 0.002118 |
| static_vector_options_test.test | RUN | 0.249189 | 0.731952 | 0.820536 | 0.001924 | 0.001741 | 0.001694 |
| stable_vector_test.test | RUN | 4.447127 | 22.349632 | 17.064851 | 0.036380 | 0.037102 | 0.039678 |
| small_vector_test.test | RUN | 2.942833 | 15.641917 | 12.645826 | 0.003813 | 0.003223 | 0.006671 |
| small_vector_options_test.test | RUN | 0.429220 | 1.892851 | 1.633663 | 0.001797 | 0.001768 | 0.001799 |
| slist_test.test | RUN | 2.734549 | 14.070772 | 11.215021 | 0.032667 | 0.032086 | 0.032406 |
| set_test.test | RUN | 4.222350 | 26.119691 | 20.029147 | 0.016402 | 0.015804 | 0.016704 |
| segtor_test.test | RUN | 5.316372 | 28.866390 | 22.589579 | 0.718515 | 0.679631 | 0.768780 |
| segtor_options_test.test | RUN | 0.274718 | 0.809448 | 1.014249 | 0.001491 | 0.001748 | 0.001644 |
| scoped_allocator_usage_test.test | RUN | 0.972646 | 4.328472 | 3.832167 | 0.001406 | 0.001689 | 0.001694 |
| scoped_allocator_adaptor_test.test | RUN | 0.435164 | 1.177692 | 1.669511 | 0.001619 | 0.001688 | 0.001600 |
| resource_adaptor_test.test | RUN | 0.227570 | 0.741257 | 0.779532 | 0.001727 | 0.001668 | 0.001621 |
| polymorphic_allocator_test.test | RUN | 0.189146 | 0.586893 | 0.649699 | 0.001534 | 0.001589 | 0.001602 |
| pmr_vector_test.test | RUN | 0.107096 | 0.230511 | 0.313964 | 0.000675 | 0.000613 | 0.001620 |
| pmr_string_test.test | RUN | 0.207116 | 0.474626 | 0.617637 | 0.000644 | 0.000714 | 0.001639 |
| pmr_stable_vector_test.test | RUN | 0.236122 | 0.762431 | 0.890809 | 0.001560 | 0.001508 | 0.001586 |
| pmr_small_vector_test.test | RUN | 0.125757 | 0.308726 | 0.417537 | 0.001570 | 0.001621 | 0.001564 |
| pmr_slist_test.test | RUN | 0.184132 | 0.983314 | 0.800024 | 0.001135 | 0.001636 | 0.001506 |
| pmr_set_test.test | RUN | 0.199454 | 0.518062 | 0.670282 | 0.001325 | 0.001646 | 0.001525 |
| pmr_nest_test.test | RUN | 0.154886 | 0.363131 | 0.466767 | 0.001554 | 0.001675 | 0.001550 |
| pmr_map_test.test | RUN | 0.211581 | 0.548496 | 0.662218 | 0.001412 | 0.001528 | 0.001532 |
| pmr_list_test.test | RUN | 0.139582 | 0.333581 | 0.456362 | 0.001580 | 0.001618 | 0.001614 |
| pmr_hub_test.test | RUN | 0.195174 | 0.464327 | 0.532980 | 0.001641 | 0.001500 | 0.001551 |
| pmr_flat_set_test.test | RUN | 0.148753 | 0.354383 | 0.508714 | 0.001470 | 0.001591 | 0.001575 |
| pmr_flat_map_test.test | RUN | 0.182080 | 0.415477 | 0.529267 | 0.001586 | 0.001515 | 0.001585 |
| pmr_devector_test.test | RUN | 0.119607 | 0.353265 | 0.436392 | 0.001448 | 0.001628 | 0.001624 |
| pmr_deque_test.test | RUN | 0.117113 | 0.296426 | 0.384288 | 0.001609 | 0.001625 | 0.001581 |
| pair_test.test | RUN | 0.300626 | 0.714350 | 0.882844 | 0.001618 | 0.001686 | 0.001614 |
| null_iterators_test.test | RUN | 0.466059 | 1.372642 | 1.586966 | 0.001511 | 0.001601 | 0.001632 |
| node_handle_test.test | RUN | 0.210719 | 1.768449 | 0.646614 | 0.001765 | 0.001720 | 0.001704 |
| node_allocator_test.test | RUN | 3.160772 | 17.416454 | 13.915499 | 0.012575 | 0.012304 | 0.012708 |
| new_delete_resource_test.test | RUN | 0.255713 | 1.043351 | 0.875280 | 0.002303 | 0.002370 | 0.002440 |
| nest_test.test | RUN | 0.665122 | 4.829828 | 3.011128 | 0.001684 | 0.001754 | 0.001744 |
| nest_api_test.test | RUN | 1.114026 | 9.272672 | 5.874761 | 0.002788 | 0.002832 | 0.002751 |
| monotonic_buffer_resource_test.test | RUN | 0.261440 | 1.888131 | 0.854584 | 0.001587 | 0.001626 | 0.001508 |
| memory_resource_test.test | RUN | 0.155881 | 0.532171 | 0.444858 | 0.001660 | 0.001571 | 0.001598 |
| map_test.test | RUN | 5.589595 | 29.408916 | 29.613611 | 0.013354 | 0.012691 | 0.012411 |
| list_test.test | RUN | 2.905907 | 15.110838 | 12.072760 | 0.031887 | 0.032454 | 0.031566 |
| is_constructible_test.test | RUN | 0.096222 | 0.194336 | 0.287725 | 0.000677 | 0.000734 | 0.001431 |
| insert_vs_emplace_test.test | RUN | 0.295945 | 1.246123 | 1.705486 | 0.001696 | 0.001712 | 0.001602 |
| hub_uses_allocator_test.test | RUN | 0.329188 | 1.069168 | 1.154190 | 0.001467 | 0.001734 | 0.001595 |
| hub_stability_test.test | RUN | 0.743322 | 4.945169 | 4.084178 | 0.002010 | 0.002142 | 0.002066 |
| hub_sort_test.test | RUN | 0.464015 | 2.198590 | 1.992659 | 0.662826 | 0.657066 | 0.609860 |
| hub_pocxx_test.test | RUN | 0.425097 | 2.646333 | 1.391237 | 0.001658 | 0.001685 | 0.001736 |
| hub_new_extended_alignment_test.test | RUN | 0.228568 | 0.796567 | 0.792487 | 0.001588 | 0.001435 | 0.001651 |
| hub_exception_safety_test.test | RUN | 0.832050 | 6.137039 | 4.102780 | 0.092817 | 0.095473 | 0.101962 |
| hub_empty_sort_test.test | RUN | 0.259884 | 0.732793 | 0.936701 | 0.001604 | 0.001672 | 0.001655 |
| hub_api_test.test | RUN | 2.870377 | 24.580915 | 13.139152 | 0.004687 | 0.003954 | 0.004054 |
| global_resource_test.test | RUN | 0.144652 | 0.499970 | 0.490861 | 0.001599 | 0.001801 | 0.001709 |
| flat_tree_test.test | RUN | 5.262693 | 37.449361 | 24.381785 | 0.001646 | 0.001656 | 0.001519 |
| flat_set_test.test | RUN | 6.653041 | 47.654478 | 32.089294 | 0.009306 | 0.008170 | 0.008668 |
| flat_set_adaptor_test.test | RUN | 4.956292 | 42.221126 | 25.507940 | 0.009312 | 0.008590 | 0.008948 |
| flat_map_test.test | RUN | 10.605064 | 70.518219 | 53.396534 | 0.010762 | 0.010218 | 0.009995 |
| flat_map_adaptor_test.test | RUN | 6.715797 | 51.778589 | 37.682241 | 0.009799 | 0.009399 | 0.009402 |
| explicit_inst_vector_test.test | RUN | 1.073122 | 7.072991 | 5.521346 | 0.001573 | 0.001667 | 0.001638 |
| explicit_inst_string_test.test | RUN | 1.434106 | 12.404816 | 7.588232 | 0.001586 | 0.001658 | 0.001630 |
| explicit_inst_static_vector_test.test | RUN | 0.140079 | 0.451235 | 0.536896 | 0.001578 | 0.001598 | 0.001535 |
| explicit_inst_stable_vector_test.test | RUN | 0.849557 | 4.359497 | 3.527847 | 0.001584 | 0.001568 | 0.001626 |
| explicit_inst_small_vector_test.test | RUN | 0.715445 | 3.976435 | 3.190249 | 0.001567 | 0.001678 | 0.001590 |
| explicit_inst_slist_test.test | RUN | 0.547792 | 3.669777 | 2.560880 | 0.001601 | 0.001683 | 0.001606 |
| explicit_inst_set_test.test | RUN | 0.758708 | 4.155397 | 2.976143 | 0.001616 | 0.001626 | 0.001584 |
| explicit_inst_map_test.test | RUN | 0.846483 | 4.415546 | 3.318360 | 0.001598 | 0.001633 | 0.001498 |
| explicit_inst_list_test.test | RUN | 0.193668 | 1.006957 | 0.828234 | 0.001545 | 0.001582 | 0.001542 |
| explicit_inst_flat_set_test.test | RUN | 4.344202 | 32.062776 | 19.225499 | 0.001596 | 0.001724 | 0.001446 |
| explicit_inst_flat_map_test.test | RUN | 4.730399 | 33.078951 | 21.470845 | 0.001569 | 0.001624 | 0.001549 |
| explicit_inst_devector_test.test | RUN | 0.588781 | 4.067497 | 2.736675 | 0.001452 | 0.001627 | 0.001635 |
| explicit_inst_deque_test.test | RUN | 0.607143 | 4.326429 | 2.942565 | 0.001545 | 0.001608 | 0.001518 |
| devector_test.test | RUN | 7.854998 | 46.624664 | 33.057440 | 0.003746 | 0.004647 | 0.005096 |
| devector_options_test.test | RUN | 0.367661 | 2.423881 | 1.558053 | 0.001936 | 0.001870 | 0.001792 |
| deque_test.test | RUN | 5.853590 | 31.983134 | 24.150272 | 0.429038 | 0.358840 | 0.443218 |
| deque_options_test.test | RUN | 0.278526 | 0.883083 | 1.076879 | 0.001644 | 0.001637 | 0.001654 |
| copy_move_algo_test.test | RUN | 0.265969 | 1.079253 | 0.998372 | 0.002042 | 0.001876 | 0.001808 |
| common_iterator_test.test | RUN | 0.019557 | 0.053258 | 0.050430 | 0.000699 | 0.000698 | 0.001477 |
| boost_iterator_comp_test.test | RUN | 0.384483 | 1.273489 | 1.372550 | 0.001733 | 0.001465 | 0.001656 |
| allocator_traits_test.test | RUN | 0.227497 | 0.574614 | 0.724387 | 0.001574 | 0.001672 | 0.001623 |
| alloc_full_test.test | RUN | 0.257653 | 1.163106 | 0.998565 | 0.005699 | 0.005955 | 0.005799 |
| alloc_basic_test.test | RUN | 0.213609 | 0.836866 | 0.784565 | 0.001633 | 0.001713 | 0.001801 |
| adaptive_pool_test.test | RUN | 3.157770 | 17.534749 | 14.234175 | 0.019233 | 0.018111 | 0.018459 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.955× | 0.964×, 0.946× | 1.013× |
| clang | 1.021× | 1.033×, 1.008× | 1.014× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44927958294).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 2 | 0.012256s | 0.010598s | 0.012111s | byte equality observed |
| alloc_basic_test.test | 10 | 0.001005s | 0.001015s | 0.001017s | byte equality observed |
| alloc_full_test.test | 6 | 0.003455s | 0.003457s | 0.003704s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000935s | 0.000942s | 0.000882s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.000975s | 0.000958s | 0.000967s | byte equality observed |
| common_iterator_test.test | 10 | 0.000436s | 0.000435s | 0.000946s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001383s | 0.001143s | 0.001190s | byte equality observed |
| deque_options_test.test | 10 | 0.001035s | 0.001014s | 0.001045s | byte equality observed |
| deque_test.test | 1 | 0.416813s | 0.387263s | 0.470120s | byte equality observed |
| devector_options_test.test | 10 | 0.001161s | 0.001030s | 0.001048s | byte equality observed |
| devector_test.test | 4 | 0.003483s | 0.003509s | 0.004832s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000864s | 0.000915s | 0.000894s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000858s | 0.000886s | 0.000897s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000871s | 0.000900s | 0.000901s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000874s | 0.000913s | 0.000896s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000867s | 0.000881s | 0.000881s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000891s | 0.000891s | 0.000891s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000889s | 0.000896s | 0.000890s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000886s | 0.000882s | 0.000913s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000883s | 0.000889s | 0.000886s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000884s | 0.000899s | 0.000923s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000883s | 0.000879s | 0.000891s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000891s | 0.000887s | 0.000892s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000893s | 0.000894s | 0.000907s | byte equality observed |
| flat_map_adaptor_test.test | 3 | 0.006871s | 0.006442s | 0.006523s | byte equality observed |
| flat_map_test.test | 3 | 0.007496s | 0.007004s | 0.006746s | byte equality observed |
| flat_set_adaptor_test.test | 3 | 0.006636s | 0.006019s | 0.006365s | byte equality observed |
| flat_set_test.test | 3 | 0.006606s | 0.005801s | 0.006231s | byte equality observed |
| flat_tree_test.test | 10 | 0.000912s | 0.000909s | 0.000916s | byte equality observed |
| global_resource_test.test | 10 | 0.000933s | 0.000930s | 0.000954s | byte equality observed |
| hub_api_test.test | 6 | 0.003130s | 0.002498s | 0.002468s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000906s | 0.000896s | 0.000927s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.065081s | 0.069711s | 0.069778s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.000971s | 0.000958s | 0.000965s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.000976s | 0.000994s | 0.000941s | byte equality observed |
| hub_sort_test.test | 1 | 0.518007s | 0.520096s | 0.509424s | byte equality observed |
| hub_stability_test.test | 10 | 0.001141s | 0.001160s | 0.001166s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000916s | 0.000917s | 0.000891s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000946s | 0.000949s | 0.000918s | byte equality observed |
| is_constructible_test.test | 10 | 0.000423s | 0.000423s | 0.000898s | byte equality observed |
| list_test.test | 1 | 0.019593s | 0.019870s | 0.019966s | byte equality observed |
| map_test.test | 3 | 0.009336s | 0.009094s | 0.008923s | byte equality observed |
| memory_resource_test.test | 10 | 0.000925s | 0.000941s | 0.000914s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000942s | 0.000951s | 0.000907s | byte equality observed |
| nest_api_test.test | 10 | 0.001784s | 0.001820s | 0.001757s | byte equality observed |
| nest_test.test | 10 | 0.000960s | 0.000969s | 0.000905s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001345s | 0.001357s | 0.001328s | byte equality observed |
| node_allocator_test.test | 3 | 0.008247s | 0.008196s | 0.008288s | byte equality observed |
| node_handle_test.test | 10 | 0.000928s | 0.000954s | 0.000930s | byte equality observed |
| null_iterators_test.test | 10 | 0.000925s | 0.000923s | 0.000922s | byte equality observed |
| pair_test.test | 10 | 0.000907s | 0.000921s | 0.000919s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000878s | 0.000932s | 0.000908s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000875s | 0.000911s | 0.000907s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000881s | 0.000917s | 0.000947s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000891s | 0.000922s | 0.000904s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000894s | 0.000938s | 0.000916s | byte equality observed |
| pmr_list_test.test | 10 | 0.000875s | 0.000909s | 0.000914s | byte equality observed |
| pmr_map_test.test | 10 | 0.000882s | 0.000910s | 0.000884s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000881s | 0.000908s | 0.000878s | byte equality observed |
| pmr_set_test.test | 10 | 0.000878s | 0.000913s | 0.000874s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000896s | 0.000907s | 0.000872s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000872s | 0.000907s | 0.000878s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000896s | 0.000909s | 0.000883s | byte equality observed |
| pmr_string_test.test | 10 | 0.000418s | 0.000421s | 0.000869s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000424s | 0.000419s | 0.000882s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.000929s | 0.000932s | 0.000915s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.000919s | 0.000923s | 0.000924s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.000925s | 0.000924s | 0.000928s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.000930s | 0.000913s | 0.000944s | byte equality observed |
| segtor_options_test.test | 10 | 0.000982s | 0.000985s | 0.000976s | byte equality observed |
| segtor_test.test | 1 | 0.434119s | 0.379520s | 0.413503s | byte equality observed |
| set_test.test | 2 | 0.013112s | 0.011492s | 0.012536s | byte equality observed |
| slist_test.test | 1 | 0.020507s | 0.020349s | 0.020258s | byte equality observed |
| small_vector_options_test.test | 10 | 0.001049s | 0.001018s | 0.001001s | byte equality observed |
| small_vector_test.test | 5 | 0.002180s | 0.001957s | 0.003969s | byte equality observed |
| stable_vector_test.test | 1 | 0.031200s | 0.031715s | 0.032944s | byte equality observed |
| static_vector_options_test.test | 10 | 0.001012s | 0.000961s | 0.000982s | byte equality observed |
| static_vector_test.test | 10 | 0.001333s | 0.001231s | 0.001287s | byte equality observed |
| string_options_test.test | 10 | 0.000995s | 0.000963s | 0.000969s | byte equality observed |
| string_test.test | 2 | 0.012111s | 0.012069s | 0.011495s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000914s | 0.000929s | 0.000915s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.000956s | 0.000960s | 0.000954s | byte equality observed |
| throw_exception_test.test | 10 | 0.000893s | 0.000905s | 0.000898s | byte equality observed |
| tree_test.test | 10 | 0.000891s | 0.000898s | 0.000899s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.000949s | 0.000954s | 0.000950s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000885s | 0.000902s | 0.000902s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000397s | 0.000414s | 0.000883s | byte equality observed |
| vector_options_test.test | 10 | 0.001044s | 0.001036s | 0.001034s | byte equality observed |
| vector_test.test | 3 | 0.003820s | 0.003936s | 0.005585s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44927958294).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
