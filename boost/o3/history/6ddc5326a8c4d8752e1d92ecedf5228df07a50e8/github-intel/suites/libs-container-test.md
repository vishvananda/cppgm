# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 7.961873 | 38.864590 | 33.925213 | 0.006457 | 0.005732 | 0.008372 |
| vector_options_test.test | RUN | 0.351590 | 1.713316 | 1.366225 | 0.001880 | 0.001875 | 0.001998 |
| uses_allocator_test.test | RUN | 0.061006 | 0.136092 | 0.178000 | 0.000696 | 0.000634 | 0.001726 |
| uses_allocator_construction_test.test | RUN | 0.181515 | 0.524460 | 0.600328 | 0.001598 | 0.001653 | 0.001702 |
| unsynchronized_pool_resource_test.test | RUN | 0.240430 | 1.582015 | 0.770316 | 0.001709 | 0.001640 | 0.001968 |
| tree_test.test | RUN | 1.099316 | 5.824844 | 4.948161 | 0.001489 | 0.001570 | 0.001751 |
| throw_exception_test.test | RUN | 0.132500 | 0.335796 | 0.391878 | 0.001669 | 0.001627 | 0.001713 |
| synchronized_pool_resource_test.test | RUN | 0.241566 | 1.570477 | 0.801610 | 0.001796 | 0.001816 | 0.001878 |
| string_view_compat_test.test | RUN | 0.406932 | 3.203227 | 1.547959 | 0.001554 | 0.001590 | 0.001724 |
| string_test.test | RUN | 1.927842 | 12.291670 | 8.917253 | 0.018167 | 0.016465 | 0.018016 |
| string_options_test.test | RUN | 0.336292 | 2.629364 | 1.386493 | 0.001742 | 0.001791 | 0.001830 |
| static_vector_test.test | RUN | 1.960728 | 10.247467 | 8.925131 | 0.002412 | 0.002166 | 0.002340 |
| static_vector_options_test.test | RUN | 0.231047 | 0.665092 | 0.759998 | 0.001810 | 0.001734 | 0.001908 |
| stable_vector_test.test | RUN | 4.576675 | 21.341365 | 17.324259 | 0.040193 | 0.041355 | 0.044791 |
| small_vector_test.test | RUN | 2.992480 | 14.838421 | 12.435393 | 0.003797 | 0.003465 | 0.006066 |
| small_vector_options_test.test | RUN | 0.413988 | 1.747416 | 1.569322 | 0.002066 | 0.001858 | 0.001905 |
| slist_test.test | RUN | 2.762420 | 13.278666 | 10.895232 | 0.030238 | 0.029884 | 0.028841 |
| set_test.test | RUN | 4.186137 | 24.319261 | 20.068124 | 0.018694 | 0.016730 | 0.017865 |
| segtor_test.test | RUN | 5.342709 | 27.059829 | 22.074291 | 0.696068 | 0.651160 | 0.693693 |
| segtor_options_test.test | RUN | 0.269477 | 0.760160 | 0.927110 | 0.001676 | 0.001698 | 0.001810 |
| scoped_allocator_usage_test.test | RUN | 0.959888 | 4.040281 | 3.631971 | 0.001507 | 0.001595 | 0.001785 |
| scoped_allocator_adaptor_test.test | RUN | 0.404919 | 1.085417 | 1.519861 | 0.001692 | 0.001476 | 0.001644 |
| resource_adaptor_test.test | RUN | 0.211479 | 0.639814 | 0.671254 | 0.001651 | 0.001652 | 0.001537 |
| polymorphic_allocator_test.test | RUN | 0.179045 | 0.532671 | 0.554396 | 0.001630 | 0.001501 | 0.001764 |
| pmr_vector_test.test | RUN | 0.098895 | 0.201034 | 0.291805 | 0.000584 | 0.000602 | 0.001691 |
| pmr_string_test.test | RUN | 0.194313 | 0.425019 | 0.559094 | 0.000700 | 0.000662 | 0.001731 |
| pmr_stable_vector_test.test | RUN | 0.231600 | 0.687040 | 0.813452 | 0.001688 | 0.001494 | 0.001738 |
| pmr_small_vector_test.test | RUN | 0.119690 | 0.273704 | 0.353915 | 0.001706 | 0.001614 | 0.001760 |
| pmr_slist_test.test | RUN | 0.181712 | 0.930700 | 0.824364 | 0.001654 | 0.001523 | 0.001607 |
| pmr_set_test.test | RUN | 0.191148 | 0.464902 | 0.606902 | 0.001405 | 0.001524 | 0.001427 |
| pmr_nest_test.test | RUN | 0.144828 | 0.318538 | 0.402020 | 0.002031 | 0.001595 | 0.001609 |
| pmr_map_test.test | RUN | 0.198255 | 0.480355 | 0.601232 | 0.001387 | 0.001382 | 0.001732 |
| pmr_list_test.test | RUN | 0.133250 | 0.298219 | 0.391543 | 0.001780 | 0.001582 | 0.001701 |
| pmr_hub_test.test | RUN | 0.179396 | 0.406270 | 0.485798 | 0.001541 | 0.001406 | 0.001757 |
| pmr_flat_set_test.test | RUN | 0.141469 | 0.322070 | 0.426201 | 0.001646 | 0.001439 | 0.001785 |
| pmr_flat_map_test.test | RUN | 0.164859 | 0.367579 | 0.495802 | 0.001679 | 0.001420 | 0.001772 |
| pmr_devector_test.test | RUN | 0.112480 | 0.326459 | 0.365240 | 0.001494 | 0.001473 | 0.001632 |
| pmr_deque_test.test | RUN | 0.115539 | 0.268017 | 0.364257 | 0.001602 | 0.001600 | 0.001759 |
| pair_test.test | RUN | 0.275892 | 0.630984 | 0.841894 | 0.001686 | 0.001690 | 0.001706 |
| null_iterators_test.test | RUN | 0.448027 | 1.236356 | 1.428677 | 0.001614 | 0.001510 | 0.001412 |
| node_handle_test.test | RUN | 0.196271 | 1.580021 | 0.595156 | 0.001752 | 0.001554 | 0.001633 |
| node_allocator_test.test | RUN | 3.227138 | 16.455720 | 13.653848 | 0.012044 | 0.011990 | 0.012614 |
| new_delete_resource_test.test | RUN | 0.241739 | 0.960093 | 0.799457 | 0.002462 | 0.002220 | 0.002422 |
| nest_test.test | RUN | 0.680668 | 4.594177 | 2.915677 | 0.001730 | 0.001636 | 0.001895 |
| nest_api_test.test | RUN | 1.099965 | 8.699842 | 5.839454 | 0.003133 | 0.002947 | 0.002848 |
| monotonic_buffer_resource_test.test | RUN | 0.249016 | 1.739292 | 0.818019 | 0.001671 | 0.001595 | 0.001748 |
| memory_resource_test.test | RUN | 0.145181 | 0.479065 | 0.469150 | 0.001540 | 0.001552 | 0.001696 |
| map_test.test | RUN | 5.719130 | 27.967248 | 28.444136 | 0.014254 | 0.013195 | 0.012696 |
| list_test.test | RUN | 2.918171 | 14.449824 | 11.977453 | 0.028965 | 0.029373 | 0.029626 |
| is_constructible_test.test | RUN | 0.090305 | 0.173545 | 0.237501 | 0.000710 | 0.000653 | 0.001670 |
| insert_vs_emplace_test.test | RUN | 0.283849 | 1.128115 | 1.629755 | 0.001702 | 0.001674 | 0.001672 |
| hub_uses_allocator_test.test | RUN | 0.309922 | 0.954120 | 1.102381 | 0.001491 | 0.001784 | 0.001766 |
| hub_stability_test.test | RUN | 0.729271 | 4.621764 | 3.972250 | 0.002046 | 0.002112 | 0.002100 |
| hub_sort_test.test | RUN | 0.455193 | 2.128234 | 1.851984 | 0.721194 | 0.701919 | 0.704015 |
| hub_pocxx_test.test | RUN | 0.414002 | 2.414390 | 1.383704 | 0.001432 | 0.001724 | 0.001680 |
| hub_new_extended_alignment_test.test | RUN | 0.218411 | 0.736014 | 0.723680 | 0.001601 | 0.001706 | 0.001648 |
| hub_exception_safety_test.test | RUN | 0.862023 | 5.866859 | 4.050957 | 0.092707 | 0.093593 | 0.106865 |
| hub_empty_sort_test.test | RUN | 0.249150 | 0.662333 | 0.881722 | 0.001547 | 0.001656 | 0.001740 |
| hub_api_test.test | RUN | 2.861471 | 22.896234 | 12.542578 | 0.004675 | 0.004146 | 0.004064 |
| global_resource_test.test | RUN | 0.134851 | 0.454206 | 0.449282 | 0.001742 | 0.001663 | 0.001796 |
| flat_tree_test.test | RUN | 5.332244 | 35.986129 | 24.352630 | 0.001510 | 0.001730 | 0.001615 |
| flat_set_test.test | RUN | 6.689552 | 45.311537 | 31.517702 | 0.009927 | 0.009020 | 0.009141 |
| flat_set_adaptor_test.test | RUN | 4.990257 | 40.294142 | 24.480117 | 0.010175 | 0.009327 | 0.009827 |
| flat_map_test.test | RUN | 10.915940 | 68.219864 | 51.436934 | 0.011570 | 0.010795 | 0.010381 |
| flat_map_adaptor_test.test | RUN | 6.860177 | 49.806965 | 36.288873 | 0.010282 | 0.010095 | 0.010090 |
| explicit_inst_vector_test.test | RUN | 1.073074 | 6.898960 | 5.481488 | 0.001634 | 0.001752 | 0.001729 |
| explicit_inst_string_test.test | RUN | 1.444950 | 12.034546 | 7.599643 | 0.001655 | 0.001692 | 0.001791 |
| explicit_inst_static_vector_test.test | RUN | 0.130730 | 0.434740 | 0.504519 | 0.001658 | 0.001668 | 0.001718 |
| explicit_inst_stable_vector_test.test | RUN | 0.875552 | 4.326378 | 3.385492 | 0.001601 | 0.001768 | 0.001680 |
| explicit_inst_small_vector_test.test | RUN | 0.700214 | 3.904809 | 3.104113 | 0.001626 | 0.001789 | 0.001768 |
| explicit_inst_slist_test.test | RUN | 0.534909 | 3.536378 | 2.415786 | 0.001666 | 0.001711 | 0.001676 |
| explicit_inst_set_test.test | RUN | 0.750892 | 4.051727 | 2.843345 | 0.001648 | 0.001706 | 0.001687 |
| explicit_inst_map_test.test | RUN | 0.824493 | 4.208293 | 3.117294 | 0.001907 | 0.001771 | 0.001643 |
| explicit_inst_list_test.test | RUN | 0.189087 | 0.973211 | 0.784810 | 0.001617 | 0.001791 | 0.001670 |
| explicit_inst_flat_set_test.test | RUN | 4.467117 | 30.842395 | 18.478822 | 0.001600 | 0.001673 | 0.001664 |
| explicit_inst_flat_map_test.test | RUN | 4.821994 | 32.415776 | 20.693096 | 0.001557 | 0.001687 | 0.001511 |
| explicit_inst_devector_test.test | RUN | 0.580291 | 3.861363 | 2.574456 | 0.001624 | 0.001628 | 0.001616 |
| explicit_inst_deque_test.test | RUN | 0.589390 | 4.202191 | 2.765707 | 0.001652 | 0.001782 | 0.001643 |
| devector_test.test | RUN | 8.538383 | 49.068268 | 36.231410 | 0.004088 | 0.003942 | 0.005767 |
| devector_options_test.test | RUN | 0.357214 | 2.295027 | 1.506597 | 0.002544 | 0.001980 | 0.001950 |
| deque_test.test | RUN | 5.095407 | 29.562465 | 22.268322 | 0.403740 | 0.408744 | 0.505210 |
| deque_options_test.test | RUN | 0.270646 | 0.796825 | 0.979196 | 0.001716 | 0.001709 | 0.001781 |
| copy_move_algo_test.test | RUN | 0.255396 | 0.954146 | 0.900859 | 0.002118 | 0.001914 | 0.002068 |
| common_iterator_test.test | RUN | 0.018204 | 0.048336 | 0.048975 | 0.000665 | 0.000743 | 0.001494 |
| boost_iterator_comp_test.test | RUN | 0.364410 | 1.202710 | 1.388161 | 0.001649 | 0.001751 | 0.001722 |
| allocator_traits_test.test | RUN | 0.209770 | 0.522816 | 0.548824 | 0.001466 | 0.001670 | 0.001622 |
| alloc_full_test.test | RUN | 0.250173 | 1.102257 | 0.919818 | 0.004850 | 0.005263 | 0.005365 |
| alloc_basic_test.test | RUN | 0.204860 | 0.790480 | 0.684400 | 0.001687 | 0.001992 | 0.001830 |
| adaptive_pool_test.test | RUN | 3.014921 | 12.138805 | 9.037161 | 0.011101 | 0.010917 | 0.011445 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.990× | 0.987×, 0.993× | 0.996× |
| clang | 1.067× | 1.063×, 1.072× | 1.005× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44597827043).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 2 | 0.011601s | 0.010903s | 0.012250s | byte equality observed |
| alloc_basic_test.test | 10 | 0.001096s | 0.001054s | 0.001069s | byte equality observed |
| alloc_full_test.test | 6 | 0.003541s | 0.003628s | 0.003744s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000979s | 0.001003s | 0.000975s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.001033s | 0.001044s | 0.001004s | byte equality observed |
| common_iterator_test.test | 10 | 0.000472s | 0.000477s | 0.001012s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001523s | 0.001179s | 0.001305s | byte equality observed |
| deque_options_test.test | 10 | 0.001091s | 0.001041s | 0.001090s | byte equality observed |
| deque_test.test | 1 | 0.436509s | 0.432462s | 0.528435s | byte equality observed |
| devector_options_test.test | 10 | 0.001149s | 0.001111s | 0.001090s | byte equality observed |
| devector_test.test | 4 | 0.003797s | 0.003716s | 0.005352s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000935s | 0.000956s | 0.000934s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000910s | 0.000927s | 0.000918s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000920s | 0.000944s | 0.000916s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000923s | 0.000974s | 0.000921s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000927s | 0.000930s | 0.000901s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000921s | 0.000937s | 0.000921s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000920s | 0.000934s | 0.000935s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000920s | 0.000930s | 0.000938s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000917s | 0.000938s | 0.000936s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000917s | 0.000938s | 0.000935s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000898s | 0.000919s | 0.000914s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000913s | 0.000939s | 0.000939s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000910s | 0.000931s | 0.000949s | byte equality observed |
| flat_map_adaptor_test.test | 3 | 0.007459s | 0.007071s | 0.007043s | byte equality observed |
| flat_map_test.test | 3 | 0.008214s | 0.007707s | 0.007251s | byte equality observed |
| flat_set_adaptor_test.test | 3 | 0.007343s | 0.006737s | 0.007019s | byte equality observed |
| flat_set_test.test | 3 | 0.007209s | 0.006495s | 0.006818s | byte equality observed |
| flat_tree_test.test | 10 | 0.000940s | 0.000971s | 0.000944s | byte equality observed |
| global_resource_test.test | 10 | 0.000969s | 0.000992s | 0.000992s | byte equality observed |
| hub_api_test.test | 6 | 0.003207s | 0.002760s | 0.002689s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000946s | 0.000988s | 0.000974s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.070527s | 0.075924s | 0.074048s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.001007s | 0.001027s | 0.001046s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.001025s | 0.001096s | 0.001008s | byte equality observed |
| hub_sort_test.test | 1 | 0.579752s | 0.589800s | 0.567247s | byte equality observed |
| hub_stability_test.test | 8 | 0.001245s | 0.001259s | 0.001317s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000973s | 0.001004s | 0.000981s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.001015s | 0.001039s | 0.001010s | byte equality observed |
| is_constructible_test.test | 10 | 0.000438s | 0.000440s | 0.000960s | byte equality observed |
| list_test.test | 1 | 0.020055s | 0.020286s | 0.020760s | byte equality observed |
| map_test.test | 2 | 0.010186s | 0.009962s | 0.009738s | byte equality observed |
| memory_resource_test.test | 10 | 0.001021s | 0.001062s | 0.001047s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.001007s | 0.001014s | 0.001033s | byte equality observed |
| nest_api_test.test | 9 | 0.001985s | 0.002021s | 0.002014s | byte equality observed |
| nest_test.test | 10 | 0.001024s | 0.001029s | 0.001036s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001496s | 0.001518s | 0.001482s | byte equality observed |
| node_allocator_test.test | 3 | 0.008747s | 0.008829s | 0.008760s | byte equality observed |
| node_handle_test.test | 10 | 0.001012s | 0.001056s | 0.001030s | byte equality observed |
| null_iterators_test.test | 10 | 0.000983s | 0.000999s | 0.000992s | byte equality observed |
| pair_test.test | 10 | 0.000971s | 0.000987s | 0.000982s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000961s | 0.000955s | 0.000979s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000948s | 0.000961s | 0.000954s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000945s | 0.000942s | 0.000973s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000947s | 0.000956s | 0.000950s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000944s | 0.000963s | 0.000939s | byte equality observed |
| pmr_list_test.test | 10 | 0.000941s | 0.000972s | 0.000942s | byte equality observed |
| pmr_map_test.test | 10 | 0.000947s | 0.000958s | 0.000971s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000946s | 0.000951s | 0.000961s | byte equality observed |
| pmr_set_test.test | 10 | 0.000938s | 0.000960s | 0.000954s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000946s | 0.000951s | 0.000968s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000933s | 0.000947s | 0.000935s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000948s | 0.000971s | 0.000942s | byte equality observed |
| pmr_string_test.test | 10 | 0.000438s | 0.000437s | 0.000948s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000432s | 0.000453s | 0.000942s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.000999s | 0.001024s | 0.000978s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.000978s | 0.001014s | 0.000991s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.000988s | 0.000991s | 0.001016s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.000973s | 0.000974s | 0.001037s | byte equality observed |
| segtor_options_test.test | 10 | 0.001040s | 0.001044s | 0.001061s | byte equality observed |
| segtor_test.test | 1 | 0.403705s | 0.382076s | 0.435009s | byte equality observed |
| set_test.test | 2 | 0.014306s | 0.012639s | 0.013668s | byte equality observed |
| slist_test.test | 1 | 0.021057s | 0.020865s | 0.020816s | byte equality observed |
| small_vector_options_test.test | 10 | 0.001136s | 0.001132s | 0.001119s | byte equality observed |
| small_vector_test.test | 5 | 0.002292s | 0.002086s | 0.004470s | byte equality observed |
| stable_vector_test.test | 1 | 0.034940s | 0.035422s | 0.036858s | byte equality observed |
| static_vector_options_test.test | 10 | 0.001113s | 0.001055s | 0.001090s | byte equality observed |
| static_vector_test.test | 10 | 0.001406s | 0.001294s | 0.001372s | byte equality observed |
| string_options_test.test | 10 | 0.001040s | 0.001041s | 0.001041s | byte equality observed |
| string_test.test | 2 | 0.013274s | 0.012178s | 0.013003s | byte equality observed |
| string_view_compat_test.test | 10 | 0.001009s | 0.001012s | 0.001002s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.001033s | 0.001039s | 0.001037s | byte equality observed |
| throw_exception_test.test | 10 | 0.000967s | 0.000969s | 0.000973s | byte equality observed |
| tree_test.test | 10 | 0.000957s | 0.000940s | 0.000952s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.001037s | 0.001020s | 0.001036s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000962s | 0.000969s | 0.000977s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000437s | 0.000447s | 0.000949s | byte equality observed |
| vector_options_test.test | 10 | 0.001137s | 0.001160s | 0.001118s | byte equality observed |
| vector_test.test | 4 | 0.004146s | 0.004081s | 0.006098s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44597827043).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
