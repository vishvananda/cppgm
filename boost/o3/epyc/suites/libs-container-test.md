# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 6.001313 | 31.430756 | 26.976042 | 0.005619 | 0.005268 | 0.007485 |
| vector_options_test.test | RUN | 0.312840 | 1.450653 | 1.222298 | 0.001992 | 0.001897 | 0.002010 |
| uses_allocator_test.test | RUN | 0.061222 | 0.123263 | 0.161077 | 0.000733 | 0.000767 | 0.001691 |
| uses_allocator_construction_test.test | RUN | 0.177105 | 0.452614 | 0.512740 | 0.001618 | 0.001686 | 0.001708 |
| unsynchronized_pool_resource_test.test | RUN | 0.221784 | 1.318047 | 0.703638 | 0.001576 | 0.001746 | 0.001860 |
| tree_test.test | RUN | 0.955013 | 4.681864 | 3.877086 | 0.001644 | 0.001770 | 0.001656 |
| throw_exception_test.test | RUN | 0.117789 | 0.280920 | 0.356959 | 0.001674 | 0.001721 | 0.001718 |
| synchronized_pool_resource_test.test | RUN | 0.218443 | 1.324863 | 0.741161 | 0.001464 | 0.001902 | 0.001833 |
| string_view_compat_test.test | RUN | 0.364177 | 2.664107 | 1.428269 | 0.001763 | 0.001844 | 0.001576 |
| string_test.test | RUN | 1.508000 | 10.022900 | 7.445658 | 0.015547 | 0.015225 | 0.015585 |
| string_options_test.test | RUN | 0.290159 | 2.140237 | 1.067704 | 0.001879 | 0.002048 | 0.001732 |
| static_vector_test.test | RUN | 1.565279 | 8.340559 | 7.418447 | 0.002404 | 0.002336 | 0.002358 |
| static_vector_options_test.test | RUN | 0.207549 | 0.574542 | 0.689349 | 0.001936 | 0.001810 | 0.001858 |
| stable_vector_test.test | RUN | 3.476780 | 16.974869 | 13.938357 | 0.031875 | 0.031380 | 0.033118 |
| small_vector_test.test | RUN | 2.290274 | 12.015944 | 10.197606 | 0.003534 | 0.003244 | 0.005321 |
| small_vector_options_test.test | RUN | 0.361891 | 1.472067 | 1.322997 | 0.001916 | 0.002000 | 0.001897 |
| slist_test.test | RUN | 2.125381 | 10.848791 | 9.233667 | 0.024061 | 0.024985 | 0.025016 |
| set_test.test | RUN | 3.329403 | 20.169170 | 16.286007 | 0.015369 | 0.013823 | 0.014968 |
| segtor_test.test | RUN | 4.097833 | 22.030724 | 18.151381 | 0.607611 | 0.659432 | 0.650980 |
| segtor_options_test.test | RUN | 0.230946 | 0.662118 | 0.775232 | 0.001653 | 0.001996 | 0.001978 |
| scoped_allocator_usage_test.test | RUN | 0.774253 | 3.245953 | 3.220181 | 0.001672 | 0.001876 | 0.001421 |
| scoped_allocator_adaptor_test.test | RUN | 0.359040 | 0.944525 | 1.458159 | 0.001720 | 0.001506 | 0.001663 |
| resource_adaptor_test.test | RUN | 0.191305 | 0.582739 | 0.648785 | 0.001490 | 0.001863 | 0.001765 |
| polymorphic_allocator_test.test | RUN | 0.161348 | 0.455701 | 0.521805 | 0.001718 | 0.001634 | 0.001752 |
| pmr_vector_test.test | RUN | 0.090238 | 0.186573 | 0.267695 | 0.000684 | 0.000597 | 0.001689 |
| pmr_string_test.test | RUN | 0.177352 | 0.364812 | 0.543273 | 0.000724 | 0.000756 | 0.001772 |
| pmr_stable_vector_test.test | RUN | 0.192350 | 0.571884 | 0.697539 | 0.001666 | 0.001744 | 0.001756 |
| pmr_small_vector_test.test | RUN | 0.109487 | 0.232589 | 0.342132 | 0.001691 | 0.001803 | 0.001424 |
| pmr_slist_test.test | RUN | 0.152028 | 0.757352 | 0.709513 | 0.001400 | 0.001671 | 0.001658 |
| pmr_set_test.test | RUN | 0.172570 | 0.420367 | 0.566758 | 0.001681 | 0.001813 | 0.001657 |
| pmr_nest_test.test | RUN | 0.132630 | 0.272713 | 0.395836 | 0.001546 | 0.001840 | 0.001762 |
| pmr_map_test.test | RUN | 0.177516 | 0.412625 | 0.558126 | 0.001586 | 0.001759 | 0.001740 |
| pmr_list_test.test | RUN | 0.113942 | 0.271009 | 0.351015 | 0.001648 | 0.001766 | 0.001740 |
| pmr_hub_test.test | RUN | 0.163472 | 0.362434 | 0.448095 | 0.001592 | 0.001726 | 0.001641 |
| pmr_flat_set_test.test | RUN | 0.128256 | 0.284794 | 0.389446 | 0.001404 | 0.001777 | 0.001734 |
| pmr_flat_map_test.test | RUN | 0.151819 | 0.314110 | 0.418877 | 0.001663 | 0.001800 | 0.001694 |
| pmr_devector_test.test | RUN | 0.100810 | 0.279724 | 0.367095 | 0.001466 | 0.001804 | 0.001588 |
| pmr_deque_test.test | RUN | 0.103804 | 0.237168 | 0.329131 | 0.001490 | 0.001777 | 0.001699 |
| pair_test.test | RUN | 0.250444 | 0.586405 | 0.710177 | 0.001376 | 0.001761 | 0.001827 |
| null_iterators_test.test | RUN | 0.363301 | 1.075138 | 1.285002 | 0.001670 | 0.001812 | 0.001704 |
| node_handle_test.test | RUN | 0.171865 | 1.325176 | 0.530828 | 0.001638 | 0.001868 | 0.001562 |
| node_allocator_test.test | RUN | 2.486140 | 13.096020 | 11.237263 | 0.010440 | 0.010462 | 0.010973 |
| new_delete_resource_test.test | RUN | 0.212789 | 0.827350 | 0.718962 | 0.002471 | 0.002471 | 0.002012 |
| nest_test.test | RUN | 0.545587 | 3.692224 | 2.366115 | 0.001796 | 0.001886 | 0.001412 |
| nest_api_test.test | RUN | 0.907049 | 7.009190 | 4.828025 | 0.002565 | 0.002656 | 0.002590 |
| monotonic_buffer_resource_test.test | RUN | 0.215846 | 1.429761 | 0.574059 | 0.001426 | 0.001813 | 0.001818 |
| memory_resource_test.test | RUN | 0.127942 | 0.421219 | 0.418632 | 0.001769 | 0.001698 | 0.001808 |
| map_test.test | RUN | 4.466353 | 22.647009 | 23.869453 | 0.010073 | 0.011023 | 0.010723 |
| list_test.test | RUN | 2.273627 | 11.716915 | 9.791578 | 0.025082 | 0.025407 | 0.026039 |
| is_constructible_test.test | RUN | 0.080899 | 0.146525 | 0.209678 | 0.000743 | 0.000581 | 0.001744 |
| insert_vs_emplace_test.test | RUN | 0.242687 | 0.917136 | 1.356634 | 0.001753 | 0.001850 | 0.001643 |
| hub_uses_allocator_test.test | RUN | 0.276077 | 0.824578 | 0.953341 | 0.001765 | 0.001568 | 0.001736 |
| hub_stability_test.test | RUN | 0.592469 | 3.749229 | 3.320541 | 0.002073 | 0.002112 | 0.002010 |
| hub_sort_test.test | RUN | 0.369492 | 1.705471 | 1.630435 | 0.527362 | 0.508863 | 0.501463 |
| hub_pocxx_test.test | RUN | 0.337839 | 1.975643 | 1.128823 | 0.001737 | 0.001640 | 0.001643 |
| hub_new_extended_alignment_test.test | RUN | 0.193074 | 0.607750 | 0.670577 | 0.001938 | 0.001755 | 0.001672 |
| hub_exception_safety_test.test | RUN | 0.660670 | 4.719231 | 3.367144 | 0.092877 | 0.088318 | 0.092640 |
| hub_empty_sort_test.test | RUN | 0.216204 | 0.576048 | 0.729161 | 0.001800 | 0.001857 | 0.001670 |
| hub_api_test.test | RUN | 2.297459 | 18.893442 | 10.831231 | 0.004093 | 0.003730 | 0.003652 |
| global_resource_test.test | RUN | 0.128299 | 0.386199 | 0.381207 | 0.001498 | 0.001826 | 0.001798 |
| flat_tree_test.test | RUN | 4.099904 | 28.790207 | 19.498277 | 0.001687 | 0.001638 | 0.001579 |
| flat_set_test.test | RUN | 5.093357 | 36.243457 | 25.917955 | 0.008297 | 0.006564 | 0.008183 |
| flat_set_adaptor_test.test | RUN | 3.796870 | 32.195445 | 20.349302 | 0.008349 | 0.007885 | 0.008418 |
| flat_map_test.test | RUN | 8.134411 | 54.301482 | 42.295147 | 0.008672 | 0.008876 | 0.008448 |
| flat_map_adaptor_test.test | RUN | 5.159152 | 39.668346 | 30.275828 | 0.008472 | 0.008340 | 0.007067 |
| explicit_inst_vector_test.test | RUN | 0.851794 | 5.426626 | 4.474654 | 0.001730 | 0.001806 | 0.001615 |
| explicit_inst_string_test.test | RUN | 1.126494 | 9.495081 | 6.002385 | 0.001833 | 0.001784 | 0.001522 |
| explicit_inst_static_vector_test.test | RUN | 0.116864 | 0.357938 | 0.451381 | 0.001680 | 0.001711 | 0.001693 |
| explicit_inst_stable_vector_test.test | RUN | 0.688375 | 3.416898 | 2.668959 | 0.001692 | 0.001730 | 0.001670 |
| explicit_inst_small_vector_test.test | RUN | 0.576572 | 3.025923 | 2.658638 | 0.001872 | 0.001767 | 0.001768 |
| explicit_inst_slist_test.test | RUN | 0.454870 | 2.784078 | 2.065154 | 0.001782 | 0.001744 | 0.001721 |
| explicit_inst_set_test.test | RUN | 0.622763 | 3.288460 | 2.416545 | 0.001740 | 0.001881 | 0.001780 |
| explicit_inst_map_test.test | RUN | 0.677471 | 3.408044 | 2.625641 | 0.001723 | 0.001889 | 0.001720 |
| explicit_inst_list_test.test | RUN | 0.161931 | 0.783944 | 0.666125 | 0.001608 | 0.001804 | 0.001682 |
| explicit_inst_flat_set_test.test | RUN | 3.390282 | 24.435136 | 15.444960 | 0.001735 | 0.001869 | 0.001803 |
| explicit_inst_flat_map_test.test | RUN | 3.678479 | 25.246209 | 17.034513 | 0.001629 | 0.001727 | 0.001742 |
| explicit_inst_devector_test.test | RUN | 0.452149 | 3.090951 | 2.215299 | 0.001450 | 0.001812 | 0.001698 |
| explicit_inst_deque_test.test | RUN | 0.496500 | 3.312635 | 2.300128 | 0.001708 | 0.001837 | 0.001643 |
| devector_test.test | RUN | 6.652786 | 40.688489 | 30.101280 | 0.003642 | 0.003548 | 0.004619 |
| devector_options_test.test | RUN | 0.300420 | 1.858163 | 1.242109 | 0.002068 | 0.001973 | 0.001994 |
| deque_test.test | RUN | 4.480490 | 21.081385 | 18.441000 | 0.383836 | 0.708072 | 0.427540 |
| deque_options_test.test | RUN | 0.232966 | 0.691155 | 0.889493 | 0.001604 | 0.001905 | 0.001734 |
| copy_move_algo_test.test | RUN | 0.220387 | 0.808203 | 0.676979 | 0.002004 | 0.001960 | 0.001884 |
| common_iterator_test.test | RUN | 0.018100 | 0.044486 | 0.049144 | 0.000725 | 0.000650 | 0.001735 |
| boost_iterator_comp_test.test | RUN | 0.325099 | 1.013167 | 1.212950 | 0.001755 | 0.001664 | 0.001743 |
| allocator_traits_test.test | RUN | 0.198095 | 0.454361 | 0.565244 | 0.001608 | 0.001796 | 0.001765 |
| alloc_full_test.test | RUN | 0.215850 | 0.914901 | 0.849733 | 0.004728 | 0.004790 | 0.004791 |
| alloc_basic_test.test | RUN | 0.177955 | 0.670471 | 0.651563 | 0.001662 | 0.001833 | 0.001845 |
| adaptive_pool_test.test | RUN | 1.717336 | 13.571369 | 7.459490 | 0.010657 | 0.012348 | 0.010320 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.970× | 0.975×, 0.964× | 1.003× |
| clang | 1.019× | 1.022×, 1.016× | 1.018× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45272062060).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 2 | 0.010498s | 0.009808s | 0.010586s | byte equality observed |
| alloc_basic_test.test | 10 | 0.001050s | 0.001071s | 0.001044s | byte equality observed |
| alloc_full_test.test | 7 | 0.002987s | 0.002995s | 0.003075s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000971s | 0.000972s | 0.000977s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.001017s | 0.001013s | 0.001009s | byte equality observed |
| common_iterator_test.test | 10 | 0.000461s | 0.000458s | 0.000989s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001239s | 0.001129s | 0.001124s | byte equality observed |
| deque_options_test.test | 10 | 0.001051s | 0.001038s | 0.001051s | byte equality observed |
| deque_test.test | 1 | 0.416062s | 0.386972s | 0.457696s | byte equality observed |
| devector_options_test.test | 10 | 0.001145s | 0.001085s | 0.001076s | byte equality observed |
| devector_test.test | 5 | 0.003199s | 0.003119s | 0.004258s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000943s | 0.000947s | 0.000929s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000944s | 0.000926s | 0.000930s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000949s | 0.000985s | 0.000941s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000950s | 0.000949s | 0.000955s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000940s | 0.000943s | 0.000927s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000949s | 0.000961s | 0.000926s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000950s | 0.000971s | 0.000929s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000951s | 0.000948s | 0.000924s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000950s | 0.000958s | 0.000935s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000942s | 0.000955s | 0.000935s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000938s | 0.000946s | 0.000919s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000942s | 0.000950s | 0.000940s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000945s | 0.000951s | 0.000938s | byte equality observed |
| flat_map_adaptor_test.test | 3 | 0.005868s | 0.005848s | 0.005744s | byte equality observed |
| flat_map_test.test | 4 | 0.006295s | 0.006023s | 0.005919s | byte equality observed |
| flat_set_adaptor_test.test | 4 | 0.005886s | 0.005377s | 0.005918s | byte equality observed |
| flat_set_test.test | 4 | 0.005842s | 0.005158s | 0.005792s | byte equality observed |
| flat_tree_test.test | 10 | 0.000972s | 0.000957s | 0.000971s | byte equality observed |
| global_resource_test.test | 10 | 0.001003s | 0.000987s | 0.000983s | byte equality observed |
| hub_api_test.test | 7 | 0.002707s | 0.002209s | 0.002167s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000967s | 0.000956s | 0.000961s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.068173s | 0.064826s | 0.062772s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.001057s | 0.001043s | 0.001019s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.001036s | 0.001010s | 0.000988s | byte equality observed |
| hub_sort_test.test | 1 | 0.434706s | 0.437978s | 0.422560s | byte equality observed |
| hub_stability_test.test | 10 | 0.001230s | 0.001203s | 0.001200s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000962s | 0.000957s | 0.000961s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000983s | 0.000976s | 0.000995s | byte equality observed |
| is_constructible_test.test | 10 | 0.000441s | 0.000441s | 0.000937s | byte equality observed |
| list_test.test | 2 | 0.017139s | 0.017230s | 0.017571s | byte equality observed |
| map_test.test | 3 | 0.007764s | 0.007687s | 0.007716s | byte equality observed |
| memory_resource_test.test | 10 | 0.000971s | 0.000959s | 0.000969s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000968s | 0.000969s | 0.000975s | byte equality observed |
| nest_api_test.test | 10 | 0.001583s | 0.001664s | 0.001622s | byte equality observed |
| nest_test.test | 10 | 0.000990s | 0.001012s | 0.000999s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001428s | 0.001436s | 0.001457s | byte equality observed |
| node_allocator_test.test | 3 | 0.007181s | 0.007101s | 0.007118s | byte equality observed |
| node_handle_test.test | 10 | 0.000981s | 0.000971s | 0.000981s | byte equality observed |
| null_iterators_test.test | 10 | 0.000971s | 0.000946s | 0.000955s | byte equality observed |
| pair_test.test | 10 | 0.000961s | 0.000942s | 0.000950s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000947s | 0.000930s | 0.000922s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000942s | 0.000950s | 0.000921s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000944s | 0.000935s | 0.000924s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000944s | 0.000946s | 0.000948s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000953s | 0.000938s | 0.000931s | byte equality observed |
| pmr_list_test.test | 10 | 0.000955s | 0.000953s | 0.000929s | byte equality observed |
| pmr_map_test.test | 10 | 0.000940s | 0.000927s | 0.000944s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000946s | 0.000938s | 0.000931s | byte equality observed |
| pmr_set_test.test | 10 | 0.000971s | 0.000937s | 0.000930s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000951s | 0.000938s | 0.000932s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000951s | 0.000959s | 0.000942s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000980s | 0.000954s | 0.000961s | byte equality observed |
| pmr_string_test.test | 10 | 0.000461s | 0.000438s | 0.001005s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000453s | 0.000435s | 0.000973s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.001017s | 0.001008s | 0.001024s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.001036s | 0.001026s | 0.001042s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.001018s | 0.001014s | 0.001010s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.001020s | 0.001014s | 0.000997s | byte equality observed |
| segtor_options_test.test | 10 | 0.001034s | 0.001008s | 0.001013s | byte equality observed |
| segtor_test.test | 1 | 0.381931s | 0.374807s | 0.373363s | byte equality observed |
| set_test.test | 2 | 0.010940s | 0.009636s | 0.011025s | byte equality observed |
| slist_test.test | 2 | 0.016887s | 0.016875s | 0.016692s | byte equality observed |
| small_vector_options_test.test | 10 | 0.001067s | 0.001061s | 0.001043s | byte equality observed |
| small_vector_test.test | 6 | 0.002076s | 0.001917s | 0.003555s | byte equality observed |
| stable_vector_test.test | 1 | 0.025209s | 0.025426s | 0.026386s | byte equality observed |
| static_vector_options_test.test | 10 | 0.001031s | 0.001002s | 0.001041s | byte equality observed |
| static_vector_test.test | 10 | 0.001301s | 0.001229s | 0.001297s | byte equality observed |
| string_options_test.test | 10 | 0.000994s | 0.001008s | 0.001004s | byte equality observed |
| string_test.test | 2 | 0.011067s | 0.012048s | 0.011414s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000961s | 0.000967s | 0.000973s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.001002s | 0.001014s | 0.001016s | byte equality observed |
| throw_exception_test.test | 10 | 0.000935s | 0.000950s | 0.000949s | byte equality observed |
| tree_test.test | 10 | 0.000936s | 0.000948s | 0.000967s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.001007s | 0.001017s | 0.001011s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000939s | 0.000950s | 0.000964s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000435s | 0.000448s | 0.000930s | byte equality observed |
| vector_options_test.test | 10 | 0.001106s | 0.001105s | 0.001090s | byte equality observed |
| vector_test.test | 4 | 0.003440s | 0.003422s | 0.004871s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45272062060).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
