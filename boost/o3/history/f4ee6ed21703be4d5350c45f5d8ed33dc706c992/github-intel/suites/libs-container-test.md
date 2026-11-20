# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 8.178278 | 40.341836 | 33.014249 | 0.006752 | 0.006160 | 0.008929 |
| vector_options_test.test | RUN | 0.366289 | 1.755248 | 1.364924 | 0.001885 | 0.002038 | 0.001896 |
| uses_allocator_test.test | RUN | 0.062220 | 0.139170 | 0.177342 | 0.000737 | 0.000710 | 0.001667 |
| uses_allocator_construction_test.test | RUN | 0.188891 | 0.530733 | 0.569417 | 0.001654 | 0.001728 | 0.001621 |
| unsynchronized_pool_resource_test.test | RUN | 0.244540 | 1.634142 | 0.755565 | 0.001728 | 0.001862 | 0.001716 |
| tree_test.test | RUN | 1.125383 | 6.076135 | 4.704704 | 0.001487 | 0.001696 | 0.001682 |
| throw_exception_test.test | RUN | 0.136208 | 0.338144 | 0.387742 | 0.001593 | 0.001700 | 0.001715 |
| synchronized_pool_resource_test.test | RUN | 0.246753 | 1.615890 | 0.783364 | 0.001668 | 0.001910 | 0.001780 |
| string_view_compat_test.test | RUN | 0.416829 | 3.325790 | 1.533641 | 0.001520 | 0.001780 | 0.001655 |
| string_test.test | RUN | 1.974910 | 12.699072 | 8.914690 | 0.018565 | 0.017110 | 0.018504 |
| string_options_test.test | RUN | 0.344129 | 2.638512 | 1.254117 | 0.001791 | 0.001902 | 0.001858 |
| static_vector_test.test | RUN | 2.003196 | 10.579201 | 8.963513 | 0.002518 | 0.002371 | 0.002278 |
| static_vector_options_test.test | RUN | 0.233446 | 0.668763 | 0.758850 | 0.001918 | 0.001817 | 0.001844 |
| stable_vector_test.test | RUN | 4.678610 | 22.058205 | 17.101941 | 0.041606 | 0.042504 | 0.043649 |
| small_vector_test.test | RUN | 3.067323 | 15.394064 | 12.381131 | 0.003897 | 0.003600 | 0.006177 |
| small_vector_options_test.test | RUN | 0.424270 | 1.812180 | 1.533591 | 0.001920 | 0.001998 | 0.001914 |
| slist_test.test | RUN | 2.826447 | 13.898481 | 11.051366 | 0.032171 | 0.030998 | 0.030348 |
| set_test.test | RUN | 4.299513 | 25.642533 | 19.852194 | 0.019353 | 0.017489 | 0.018777 |
| segtor_test.test | RUN | 5.511969 | 28.261747 | 22.246778 | 0.717882 | 0.657884 | 0.724385 |
| segtor_options_test.test | RUN | 0.273317 | 0.792386 | 0.962672 | 0.001726 | 0.001808 | 0.001822 |
| scoped_allocator_usage_test.test | RUN | 0.989478 | 4.233518 | 3.722769 | 0.001642 | 0.001728 | 0.001673 |
| scoped_allocator_adaptor_test.test | RUN | 0.414856 | 1.146448 | 1.543717 | 0.001646 | 0.001469 | 0.001761 |
| resource_adaptor_test.test | RUN | 0.218856 | 0.695442 | 0.698079 | 0.001614 | 0.001677 | 0.001794 |
| polymorphic_allocator_test.test | RUN | 0.183258 | 0.547413 | 0.596966 | 0.001669 | 0.001774 | 0.001677 |
| pmr_vector_test.test | RUN | 0.101631 | 0.213298 | 0.303248 | 0.000666 | 0.000752 | 0.001716 |
| pmr_string_test.test | RUN | 0.196476 | 0.432365 | 0.581535 | 0.000713 | 0.000793 | 0.001667 |
| pmr_stable_vector_test.test | RUN | 0.238327 | 0.729255 | 0.818430 | 0.001625 | 0.001688 | 0.001676 |
| pmr_small_vector_test.test | RUN | 0.121033 | 0.284069 | 0.373464 | 0.001672 | 0.001622 | 0.001687 |
| pmr_slist_test.test | RUN | 0.182103 | 0.962627 | 0.794358 | 0.001668 | 0.001676 | 0.001643 |
| pmr_set_test.test | RUN | 0.193598 | 0.483139 | 0.603109 | 0.001614 | 0.001667 | 0.001603 |
| pmr_nest_test.test | RUN | 0.147629 | 0.333959 | 0.392140 | 0.001573 | 0.001696 | 0.001660 |
| pmr_map_test.test | RUN | 0.202624 | 0.503155 | 0.595225 | 0.001996 | 0.001709 | 0.001617 |
| pmr_list_test.test | RUN | 0.133583 | 0.309735 | 0.383247 | 0.001289 | 0.001692 | 0.001565 |
| pmr_hub_test.test | RUN | 0.184534 | 0.424815 | 0.484717 | 0.001598 | 0.001561 | 0.001745 |
| pmr_flat_set_test.test | RUN | 0.145256 | 0.332358 | 0.428134 | 0.001528 | 0.001559 | 0.001684 |
| pmr_flat_map_test.test | RUN | 0.172932 | 0.384669 | 0.503819 | 0.001766 | 0.001532 | 0.001498 |
| pmr_devector_test.test | RUN | 0.115913 | 0.337987 | 0.380934 | 0.001513 | 0.001673 | 0.001694 |
| pmr_deque_test.test | RUN | 0.114226 | 0.280416 | 0.381121 | 0.001596 | 0.001738 | 0.001779 |
| pair_test.test | RUN | 0.283763 | 0.665465 | 0.846931 | 0.001596 | 0.001672 | 0.001784 |
| null_iterators_test.test | RUN | 0.455307 | 1.297480 | 1.435922 | 0.001670 | 0.001647 | 0.001651 |
| node_handle_test.test | RUN | 0.199175 | 1.649887 | 0.553733 | 0.001733 | 0.001758 | 0.001682 |
| node_allocator_test.test | RUN | 3.366490 | 17.131797 | 13.724715 | 0.012572 | 0.012272 | 0.012586 |
| new_delete_resource_test.test | RUN | 0.246877 | 1.000558 | 0.794245 | 0.002556 | 0.002550 | 0.002526 |
| nest_test.test | RUN | 0.687445 | 4.746471 | 2.886369 | 0.001759 | 0.001720 | 0.001821 |
| nest_api_test.test | RUN | 1.091554 | 9.040693 | 5.761915 | 0.002941 | 0.003232 | 0.003045 |
| monotonic_buffer_resource_test.test | RUN | 0.249691 | 1.797870 | 0.800206 | 0.001676 | 0.001809 | 0.001644 |
| memory_resource_test.test | RUN | 0.146374 | 0.505178 | 0.376206 | 0.001559 | 0.001720 | 0.001546 |
| map_test.test | RUN | 5.790583 | 28.996264 | 28.578839 | 0.014136 | 0.013900 | 0.013540 |
| list_test.test | RUN | 3.006392 | 14.939572 | 11.815037 | 0.028619 | 0.029659 | 0.030560 |
| is_constructible_test.test | RUN | 0.088513 | 0.185996 | 0.259760 | 0.000762 | 0.000750 | 0.001705 |
| insert_vs_emplace_test.test | RUN | 0.295742 | 1.183551 | 1.556717 | 0.001744 | 0.001760 | 0.001822 |
| hub_uses_allocator_test.test | RUN | 0.323712 | 1.019813 | 1.066079 | 0.001650 | 0.001773 | 0.001716 |
| hub_stability_test.test | RUN | 0.742528 | 4.723661 | 3.936389 | 0.002042 | 0.002100 | 0.002149 |
| hub_sort_test.test | RUN | 0.470419 | 2.137365 | 1.895403 | 0.738374 | 0.733594 | 0.703238 |
| hub_pocxx_test.test | RUN | 0.429216 | 2.511004 | 1.401417 | 0.001756 | 0.001815 | 0.001749 |
| hub_new_extended_alignment_test.test | RUN | 0.224513 | 0.756220 | 0.724513 | 0.001693 | 0.001633 | 0.001734 |
| hub_exception_safety_test.test | RUN | 0.887075 | 5.988436 | 4.017596 | 0.098570 | 0.097608 | 0.100911 |
| hub_empty_sort_test.test | RUN | 0.254804 | 0.682980 | 0.832388 | 0.001636 | 0.001786 | 0.001754 |
| hub_api_test.test | RUN | 2.950640 | 23.792579 | 12.875375 | 0.004785 | 0.004333 | 0.004237 |
| global_resource_test.test | RUN | 0.142117 | 0.471674 | 0.420538 | 0.001770 | 0.001840 | 0.001805 |
| flat_tree_test.test | RUN | 5.555720 | 37.433304 | 24.285750 | 0.001703 | 0.001712 | 0.001705 |
| flat_set_test.test | RUN | 6.922768 | 46.687567 | 31.715505 | 0.010415 | 0.009155 | 0.009686 |
| flat_set_adaptor_test.test | RUN | 5.166514 | 41.320448 | 24.947387 | 0.010247 | 0.009392 | 0.010095 |
| flat_map_test.test | RUN | 11.180395 | 69.842774 | 51.502392 | 0.012050 | 0.010896 | 0.011026 |
| flat_map_adaptor_test.test | RUN | 7.103910 | 50.826531 | 36.420468 | 0.010847 | 0.010152 | 0.009965 |
| explicit_inst_vector_test.test | RUN | 1.097855 | 6.985164 | 5.516621 | 0.001634 | 0.001749 | 0.001730 |
| explicit_inst_string_test.test | RUN | 1.486053 | 12.243049 | 7.761104 | 0.001728 | 0.001681 | 0.001730 |
| explicit_inst_static_vector_test.test | RUN | 0.134179 | 0.441801 | 0.514258 | 0.001650 | 0.001765 | 0.001672 |
| explicit_inst_stable_vector_test.test | RUN | 0.873224 | 4.385725 | 3.551437 | 0.001651 | 0.001774 | 0.001579 |
| explicit_inst_small_vector_test.test | RUN | 0.720843 | 3.970456 | 3.166772 | 0.001680 | 0.001718 | 0.001705 |
| explicit_inst_slist_test.test | RUN | 0.547122 | 3.613278 | 2.458417 | 0.001690 | 0.001744 | 0.001778 |
| explicit_inst_set_test.test | RUN | 0.770583 | 4.138400 | 2.879811 | 0.001632 | 0.001662 | 0.001762 |
| explicit_inst_map_test.test | RUN | 0.839154 | 4.347315 | 3.178610 | 0.001740 | 0.001454 | 0.001638 |
| explicit_inst_list_test.test | RUN | 0.187704 | 0.987465 | 0.816236 | 0.001723 | 0.001417 | 0.001717 |
| explicit_inst_flat_set_test.test | RUN | 4.535307 | 31.305355 | 18.935955 | 0.001734 | 0.001669 | 0.001602 |
| explicit_inst_flat_map_test.test | RUN | 4.944757 | 32.738618 | 21.142780 | 0.001652 | 0.001752 | 0.001663 |
| explicit_inst_devector_test.test | RUN | 0.597931 | 3.929049 | 2.611757 | 0.001652 | 0.001607 | 0.001691 |
| explicit_inst_deque_test.test | RUN | 0.616576 | 4.237956 | 2.799749 | 0.001708 | 0.001736 | 0.001593 |
| devector_test.test | RUN | 8.769079 | 50.071484 | 36.403492 | 0.004328 | 0.004136 | 0.006051 |
| devector_options_test.test | RUN | 0.367956 | 2.327137 | 1.516750 | 0.002099 | 0.001973 | 0.002090 |
| deque_test.test | RUN | 5.962709 | 27.013812 | 22.879627 | 0.425269 | 0.412737 | 0.518223 |
| deque_options_test.test | RUN | 0.281183 | 0.798111 | 1.024728 | 0.001761 | 0.001850 | 0.001824 |
| copy_move_algo_test.test | RUN | 0.267261 | 1.002743 | 0.914972 | 0.002278 | 0.001912 | 0.001962 |
| common_iterator_test.test | RUN | 0.018487 | 0.051083 | 0.047939 | 0.000714 | 0.000709 | 0.001678 |
| boost_iterator_comp_test.test | RUN | 0.378017 | 1.209768 | 1.374054 | 0.001672 | 0.001629 | 0.001660 |
| allocator_traits_test.test | RUN | 0.218128 | 0.525613 | 0.648616 | 0.001497 | 0.001665 | 0.001704 |
| alloc_full_test.test | RUN | 0.259264 | 1.117049 | 0.965018 | 0.005340 | 0.005115 | 0.005405 |
| alloc_basic_test.test | RUN | 0.212864 | 0.801943 | 0.711217 | 0.001745 | 0.001834 | 0.001794 |
| adaptive_pool_test.test | RUN | 2.385051 | 17.198320 | 9.074035 | 0.011670 | 0.010546 | 0.011700 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.987× | 0.989×, 0.986× | 1.000× |
| clang | 1.068× | 1.072×, 1.064× | 1.007× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44667760294).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 2 | 0.012075s | 0.010857s | 0.012211s | byte equality observed |
| alloc_basic_test.test | 10 | 0.001113s | 0.001102s | 0.001116s | byte equality observed |
| alloc_full_test.test | 6 | 0.003598s | 0.003527s | 0.003789s | byte equality observed |
| allocator_traits_test.test | 10 | 0.001029s | 0.001031s | 0.000991s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.001070s | 0.001102s | 0.001056s | byte equality observed |
| common_iterator_test.test | 10 | 0.000491s | 0.000477s | 0.001013s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001552s | 0.001197s | 0.001300s | byte equality observed |
| deque_options_test.test | 10 | 0.001097s | 0.001094s | 0.001121s | byte equality observed |
| deque_test.test | 1 | 0.443138s | 0.438789s | 0.538193s | byte equality observed |
| devector_options_test.test | 10 | 0.001205s | 0.001106s | 0.001133s | byte equality observed |
| devector_test.test | 4 | 0.003896s | 0.003747s | 0.005523s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000976s | 0.000955s | 0.000992s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000962s | 0.000950s | 0.000958s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000949s | 0.000971s | 0.000970s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000943s | 0.001004s | 0.000967s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000939s | 0.000967s | 0.000949s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000950s | 0.001023s | 0.000967s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000965s | 0.000974s | 0.000963s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000949s | 0.000962s | 0.000959s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000961s | 0.000983s | 0.000970s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000962s | 0.000969s | 0.000965s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000962s | 0.000957s | 0.000965s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.001001s | 0.000965s | 0.000970s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000967s | 0.000956s | 0.000968s | byte equality observed |
| flat_map_adaptor_test.test | 3 | 0.007690s | 0.007309s | 0.007239s | byte equality observed |
| flat_map_test.test | 3 | 0.008445s | 0.007864s | 0.007481s | byte equality observed |
| flat_set_adaptor_test.test | 3 | 0.007557s | 0.006804s | 0.007210s | byte equality observed |
| flat_set_test.test | 3 | 0.007448s | 0.006619s | 0.006975s | byte equality observed |
| flat_tree_test.test | 10 | 0.001006s | 0.000988s | 0.000992s | byte equality observed |
| global_resource_test.test | 10 | 0.001031s | 0.001018s | 0.001027s | byte equality observed |
| hub_api_test.test | 6 | 0.003325s | 0.002824s | 0.002776s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.001014s | 0.000995s | 0.001017s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.071724s | 0.074757s | 0.072264s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.001101s | 0.001086s | 0.001067s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.001078s | 0.001110s | 0.001024s | byte equality observed |
| hub_sort_test.test | 1 | 0.589211s | 0.592761s | 0.577858s | byte equality observed |
| hub_stability_test.test | 10 | 0.001253s | 0.001277s | 0.001335s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.001004s | 0.001007s | 0.001010s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.001042s | 0.001036s | 0.001046s | byte equality observed |
| is_constructible_test.test | 10 | 0.000446s | 0.000456s | 0.000995s | byte equality observed |
| list_test.test | 1 | 0.020516s | 0.020642s | 0.021373s | byte equality observed |
| map_test.test | 2 | 0.010385s | 0.010091s | 0.009969s | byte equality observed |
| memory_resource_test.test | 10 | 0.001044s | 0.001041s | 0.001050s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.001039s | 0.001037s | 0.001030s | byte equality observed |
| nest_api_test.test | 9 | 0.002058s | 0.002061s | 0.002095s | byte equality observed |
| nest_test.test | 10 | 0.001046s | 0.001047s | 0.001054s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001534s | 0.001537s | 0.001534s | byte equality observed |
| node_allocator_test.test | 3 | 0.008892s | 0.008763s | 0.008972s | byte equality observed |
| node_handle_test.test | 10 | 0.001024s | 0.001037s | 0.001028s | byte equality observed |
| null_iterators_test.test | 10 | 0.001003s | 0.000965s | 0.001015s | byte equality observed |
| pair_test.test | 10 | 0.001002s | 0.000976s | 0.001014s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000979s | 0.001005s | 0.000986s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000985s | 0.000964s | 0.000976s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000974s | 0.000932s | 0.000997s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000975s | 0.000930s | 0.000983s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000977s | 0.000949s | 0.000959s | byte equality observed |
| pmr_list_test.test | 10 | 0.000971s | 0.000933s | 0.000942s | byte equality observed |
| pmr_map_test.test | 10 | 0.000965s | 0.000940s | 0.000961s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000968s | 0.000952s | 0.000938s | byte equality observed |
| pmr_set_test.test | 10 | 0.000974s | 0.000971s | 0.000938s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000969s | 0.000924s | 0.000937s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000969s | 0.000959s | 0.000937s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000982s | 0.000972s | 0.000955s | byte equality observed |
| pmr_string_test.test | 10 | 0.000457s | 0.000448s | 0.000933s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000458s | 0.000432s | 0.000947s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.001047s | 0.001013s | 0.001000s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.001021s | 0.001001s | 0.001009s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.001028s | 0.000990s | 0.001031s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.001005s | 0.000999s | 0.001064s | byte equality observed |
| segtor_options_test.test | 10 | 0.001075s | 0.001054s | 0.001085s | byte equality observed |
| segtor_test.test | 1 | 0.412862s | 0.388281s | 0.447285s | byte equality observed |
| set_test.test | 2 | 0.014706s | 0.012828s | 0.014018s | byte equality observed |
| slist_test.test | 1 | 0.021531s | 0.021173s | 0.021344s | byte equality observed |
| small_vector_options_test.test | 10 | 0.001184s | 0.001122s | 0.001147s | byte equality observed |
| small_vector_test.test | 5 | 0.002373s | 0.002133s | 0.004543s | byte equality observed |
| stable_vector_test.test | 1 | 0.035913s | 0.036297s | 0.038018s | byte equality observed |
| static_vector_options_test.test | 10 | 0.001152s | 0.001076s | 0.001141s | byte equality observed |
| static_vector_test.test | 10 | 0.001443s | 0.001323s | 0.001396s | byte equality observed |
| string_options_test.test | 10 | 0.001062s | 0.001088s | 0.001051s | byte equality observed |
| string_test.test | 2 | 0.013656s | 0.012491s | 0.013304s | byte equality observed |
| string_view_compat_test.test | 10 | 0.001026s | 0.001030s | 0.001019s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.001060s | 0.001082s | 0.001060s | byte equality observed |
| throw_exception_test.test | 10 | 0.000990s | 0.000995s | 0.000985s | byte equality observed |
| tree_test.test | 10 | 0.000982s | 0.000979s | 0.000968s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.001038s | 0.001042s | 0.001048s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000966s | 0.000976s | 0.000998s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000428s | 0.000455s | 0.000995s | byte equality observed |
| vector_options_test.test | 10 | 0.001143s | 0.001183s | 0.001145s | byte equality observed |
| vector_test.test | 3 | 0.004239s | 0.004100s | 0.006234s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44667760294).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
