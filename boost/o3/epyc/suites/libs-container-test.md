# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 6.120160 | 31.839388 | 26.864742 | 0.005654 | 0.005153 | 0.007399 |
| vector_options_test.test | RUN | 0.303794 | 1.455906 | 1.180797 | 0.002032 | 0.002036 | 0.001968 |
| uses_allocator_test.test | RUN | 0.056247 | 0.123078 | 0.161920 | 0.000710 | 0.000680 | 0.001768 |
| uses_allocator_construction_test.test | RUN | 0.171593 | 0.456357 | 0.528494 | 0.001583 | 0.001743 | 0.001795 |
| unsynchronized_pool_resource_test.test | RUN | 0.212769 | 1.297041 | 0.738491 | 0.001696 | 0.001755 | 0.001868 |
| tree_test.test | RUN | 0.901889 | 4.809221 | 3.856015 | 0.001740 | 0.001766 | 0.001680 |
| throw_exception_test.test | RUN | 0.127132 | 0.289102 | 0.397548 | 0.001468 | 0.001756 | 0.001696 |
| synchronized_pool_resource_test.test | RUN | 0.221074 | 1.333363 | 0.745069 | 0.001794 | 0.001963 | 0.001846 |
| string_view_compat_test.test | RUN | 0.358054 | 2.696443 | 1.377284 | 0.001422 | 0.001860 | 0.001804 |
| string_test.test | RUN | 1.502098 | 10.057103 | 7.218339 | 0.015619 | 0.015384 | 0.015365 |
| string_options_test.test | RUN | 0.290839 | 2.132966 | 1.198463 | 0.001868 | 0.001961 | 0.001608 |
| static_vector_test.test | RUN | 1.563378 | 8.398062 | 7.294832 | 0.002408 | 0.002415 | 0.002136 |
| static_vector_options_test.test | RUN | 0.208393 | 0.579221 | 0.700421 | 0.001688 | 0.002019 | 0.001846 |
| stable_vector_test.test | RUN | 3.490196 | 17.338529 | 13.786597 | 0.031252 | 0.032000 | 0.032893 |
| small_vector_test.test | RUN | 2.310944 | 12.169202 | 10.307768 | 0.003763 | 0.003382 | 0.005456 |
| small_vector_options_test.test | RUN | 0.354223 | 1.474674 | 1.376239 | 0.001949 | 0.002005 | 0.001724 |
| slist_test.test | RUN | 2.124676 | 10.988336 | 9.108885 | 0.023399 | 0.025011 | 0.024725 |
| set_test.test | RUN | 3.292046 | 20.642507 | 16.165113 | 0.015434 | 0.014037 | 0.014566 |
| segtor_test.test | RUN | 4.127200 | 22.469268 | 17.977704 | 0.605252 | 0.656502 | 0.652877 |
| segtor_options_test.test | RUN | 0.247773 | 0.631100 | 0.781422 | 0.001715 | 0.001922 | 0.001535 |
| scoped_allocator_usage_test.test | RUN | 0.816158 | 3.433535 | 3.192847 | 0.001805 | 0.001895 | 0.001680 |
| scoped_allocator_adaptor_test.test | RUN | 0.366584 | 0.954518 | 1.466106 | 0.001806 | 0.001682 | 0.001748 |
| resource_adaptor_test.test | RUN | 0.191742 | 0.589285 | 0.629447 | 0.001608 | 0.001691 | 0.001790 |
| polymorphic_allocator_test.test | RUN | 0.166001 | 0.458193 | 0.541019 | 0.001646 | 0.001900 | 0.001753 |
| pmr_vector_test.test | RUN | 0.090517 | 0.185765 | 0.270587 | 0.000761 | 0.000772 | 0.001674 |
| pmr_string_test.test | RUN | 0.183924 | 0.373530 | 0.543606 | 0.000749 | 0.000825 | 0.001703 |
| pmr_stable_vector_test.test | RUN | 0.193380 | 0.599442 | 0.705792 | 0.001668 | 0.001844 | 0.001658 |
| pmr_small_vector_test.test | RUN | 0.113941 | 0.244396 | 0.350607 | 0.001652 | 0.001816 | 0.001691 |
| pmr_slist_test.test | RUN | 0.153329 | 0.776583 | 0.706948 | 0.001738 | 0.001824 | 0.001462 |
| pmr_set_test.test | RUN | 0.170835 | 0.399376 | 0.567346 | 0.001754 | 0.001827 | 0.001558 |
| pmr_nest_test.test | RUN | 0.134775 | 0.292901 | 0.382319 | 0.001476 | 0.001795 | 0.001706 |
| pmr_map_test.test | RUN | 0.184442 | 0.424361 | 0.542847 | 0.001537 | 0.001820 | 0.001678 |
| pmr_list_test.test | RUN | 0.117538 | 0.271890 | 0.340866 | 0.001653 | 0.001702 | 0.001770 |
| pmr_hub_test.test | RUN | 0.167973 | 0.372652 | 0.431140 | 0.001714 | 0.001548 | 0.001733 |
| pmr_flat_set_test.test | RUN | 0.131875 | 0.284920 | 0.414260 | 0.001824 | 0.001637 | 0.001614 |
| pmr_flat_map_test.test | RUN | 0.157111 | 0.320397 | 0.494666 | 0.001412 | 0.001488 | 0.001674 |
| pmr_devector_test.test | RUN | 0.100370 | 0.280411 | 0.323657 | 0.001688 | 0.001747 | 0.001614 |
| pmr_deque_test.test | RUN | 0.101158 | 0.239905 | 0.359421 | 0.001790 | 0.001818 | 0.001644 |
| pair_test.test | RUN | 0.255845 | 0.585530 | 0.704313 | 0.001643 | 0.001883 | 0.001757 |
| null_iterators_test.test | RUN | 0.390091 | 1.113472 | 1.286831 | 0.001786 | 0.001844 | 0.001702 |
| node_handle_test.test | RUN | 0.175664 | 1.320081 | 0.525897 | 0.001720 | 0.001897 | 0.001768 |
| node_allocator_test.test | RUN | 2.486754 | 13.611997 | 11.183062 | 0.010483 | 0.010185 | 0.010470 |
| new_delete_resource_test.test | RUN | 0.211328 | 0.819221 | 0.704479 | 0.002649 | 0.002612 | 0.002490 |
| nest_test.test | RUN | 0.541854 | 3.630416 | 2.355072 | 0.001811 | 0.001933 | 0.001683 |
| nest_api_test.test | RUN | 0.914626 | 7.074075 | 4.736163 | 0.002545 | 0.002625 | 0.002638 |
| monotonic_buffer_resource_test.test | RUN | 0.219855 | 1.468323 | 0.597228 | 0.001591 | 0.001860 | 0.001526 |
| memory_resource_test.test | RUN | 0.128473 | 0.427178 | 0.415723 | 0.001783 | 0.001782 | 0.001794 |
| map_test.test | RUN | 4.449727 | 23.350607 | 23.914360 | 0.010631 | 0.011156 | 0.010653 |
| list_test.test | RUN | 2.287420 | 11.894740 | 9.597052 | 0.023817 | 0.025464 | 0.025595 |
| is_constructible_test.test | RUN | 0.086850 | 0.152612 | 0.244679 | 0.000781 | 0.000775 | 0.001673 |
| insert_vs_emplace_test.test | RUN | 0.250423 | 0.973003 | 1.399917 | 0.001834 | 0.001744 | 0.001790 |
| hub_uses_allocator_test.test | RUN | 0.290377 | 0.829146 | 1.023740 | 0.001478 | 0.001874 | 0.001498 |
| hub_stability_test.test | RUN | 0.598759 | 3.780852 | 3.170750 | 0.002028 | 0.002252 | 0.002074 |
| hub_sort_test.test | RUN | 0.392147 | 1.735307 | 1.601161 | 0.520844 | 0.532033 | 0.499755 |
| hub_pocxx_test.test | RUN | 0.337348 | 2.099069 | 1.202091 | 0.001820 | 0.001950 | 0.001733 |
| hub_new_extended_alignment_test.test | RUN | 0.193951 | 0.640168 | 0.652786 | 0.001843 | 0.001909 | 0.001473 |
| hub_exception_safety_test.test | RUN | 0.678308 | 4.719789 | 3.297124 | 0.094633 | 0.089536 | 0.093596 |
| hub_empty_sort_test.test | RUN | 0.225255 | 0.565619 | 0.790364 | 0.001767 | 0.001848 | 0.001734 |
| hub_api_test.test | RUN | 2.317759 | 19.659348 | 10.462440 | 0.004076 | 0.003693 | 0.003524 |
| global_resource_test.test | RUN | 0.123540 | 0.388032 | 0.415337 | 0.001776 | 0.001888 | 0.001743 |
| flat_tree_test.test | RUN | 4.134657 | 29.066939 | 19.451353 | 0.001785 | 0.001812 | 0.001745 |
| flat_set_test.test | RUN | 5.145663 | 36.798450 | 25.434646 | 0.008375 | 0.007636 | 0.007709 |
| flat_set_adaptor_test.test | RUN | 3.826240 | 32.784043 | 19.943238 | 0.008397 | 0.007793 | 0.007992 |
| flat_map_test.test | RUN | 8.136965 | 55.001971 | 41.718624 | 0.009230 | 0.008872 | 0.008589 |
| flat_map_adaptor_test.test | RUN | 5.164380 | 40.508555 | 29.686112 | 0.008626 | 0.008134 | 0.008098 |
| explicit_inst_vector_test.test | RUN | 0.866715 | 5.487126 | 4.367570 | 0.001790 | 0.001816 | 0.001694 |
| explicit_inst_string_test.test | RUN | 1.130313 | 9.609873 | 6.067298 | 0.001806 | 0.001965 | 0.001758 |
| explicit_inst_static_vector_test.test | RUN | 0.113870 | 0.371626 | 0.439380 | 0.001747 | 0.001638 | 0.001692 |
| explicit_inst_stable_vector_test.test | RUN | 0.690552 | 3.446772 | 2.716186 | 0.001830 | 0.001878 | 0.001552 |
| explicit_inst_small_vector_test.test | RUN | 0.566148 | 3.083668 | 2.586582 | 0.001890 | 0.001798 | 0.001664 |
| explicit_inst_slist_test.test | RUN | 0.446307 | 2.829325 | 1.936807 | 0.001766 | 0.001810 | 0.001663 |
| explicit_inst_set_test.test | RUN | 0.613819 | 3.337106 | 2.420997 | 0.001716 | 0.001859 | 0.001721 |
| explicit_inst_map_test.test | RUN | 0.681166 | 3.446571 | 2.661178 | 0.001558 | 0.001860 | 0.001754 |
| explicit_inst_list_test.test | RUN | 0.157270 | 0.788752 | 0.686976 | 0.001614 | 0.001731 | 0.001784 |
| explicit_inst_flat_set_test.test | RUN | 3.348517 | 24.517361 | 15.247443 | 0.001787 | 0.001891 | 0.001610 |
| explicit_inst_flat_map_test.test | RUN | 3.654191 | 25.416293 | 17.210207 | 0.001580 | 0.001862 | 0.001654 |
| explicit_inst_devector_test.test | RUN | 0.476181 | 3.055185 | 2.174088 | 0.001663 | 0.001853 | 0.001740 |
| explicit_inst_deque_test.test | RUN | 0.496990 | 3.367190 | 2.349480 | 0.001754 | 0.001806 | 0.001715 |
| devector_test.test | RUN | 6.070399 | 40.778254 | 29.567705 | 0.003740 | 0.003583 | 0.004563 |
| devector_options_test.test | RUN | 0.314022 | 1.887348 | 1.349171 | 0.002018 | 0.002086 | 0.001939 |
| deque_test.test | RUN | 4.545270 | 23.667917 | 18.071945 | 0.485230 | 0.360838 | 0.426922 |
| deque_options_test.test | RUN | 0.243942 | 0.690584 | 0.849838 | 0.001833 | 0.001939 | 0.001712 |
| copy_move_algo_test.test | RUN | 0.222836 | 0.812035 | 0.813367 | 0.001946 | 0.001730 | 0.001618 |
| common_iterator_test.test | RUN | 0.019042 | 0.044757 | 0.042433 | 0.000714 | 0.000673 | 0.001707 |
| boost_iterator_comp_test.test | RUN | 0.325384 | 0.992564 | 1.242700 | 0.001578 | 0.001810 | 0.001807 |
| allocator_traits_test.test | RUN | 0.197605 | 0.450233 | 0.616084 | 0.001823 | 0.001942 | 0.001568 |
| alloc_full_test.test | RUN | 0.217739 | 0.910186 | 0.857921 | 0.004867 | 0.004881 | 0.005065 |
| alloc_basic_test.test | RUN | 0.175389 | 0.660342 | 0.624693 | 0.001531 | 0.001904 | 0.001460 |
| adaptive_pool_test.test | RUN | 2.461895 | 10.283027 | 7.295513 | 0.014620 | 0.009916 | 0.010392 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.967× | 0.975×, 0.958× | 0.996× |
| clang | 1.018× | 1.019×, 1.018× | 1.012× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44922642903).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 2 | 0.010453s | 0.009747s | 0.010819s | byte equality observed |
| alloc_basic_test.test | 10 | 0.001097s | 0.001078s | 0.001099s | byte equality observed |
| alloc_full_test.test | 7 | 0.003017s | 0.002965s | 0.003110s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000992s | 0.000953s | 0.001007s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.001035s | 0.001019s | 0.001012s | byte equality observed |
| common_iterator_test.test | 10 | 0.000479s | 0.000466s | 0.000979s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001244s | 0.001097s | 0.001132s | byte equality observed |
| deque_options_test.test | 10 | 0.001081s | 0.001032s | 0.001084s | byte equality observed |
| deque_test.test | 1 | 0.415021s | 0.394455s | 0.457610s | byte equality observed |
| devector_options_test.test | 10 | 0.001168s | 0.001080s | 0.001120s | byte equality observed |
| devector_test.test | 5 | 0.003278s | 0.003106s | 0.004380s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000978s | 0.000953s | 0.001005s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000959s | 0.000943s | 0.000968s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000971s | 0.000959s | 0.000995s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000969s | 0.000961s | 0.000985s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000965s | 0.000944s | 0.000961s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000968s | 0.000951s | 0.000952s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000968s | 0.000954s | 0.000948s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000971s | 0.000963s | 0.000950s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000970s | 0.000962s | 0.000953s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000977s | 0.000950s | 0.000975s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000962s | 0.000926s | 0.000951s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000977s | 0.000954s | 0.000970s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000973s | 0.000934s | 0.000952s | byte equality observed |
| flat_map_adaptor_test.test | 4 | 0.005928s | 0.005592s | 0.005853s | byte equality observed |
| flat_map_test.test | 4 | 0.006530s | 0.005981s | 0.006143s | byte equality observed |
| flat_set_adaptor_test.test | 4 | 0.006036s | 0.005336s | 0.006148s | byte equality observed |
| flat_set_test.test | 4 | 0.006010s | 0.005147s | 0.006045s | byte equality observed |
| flat_tree_test.test | 10 | 0.000989s | 0.000972s | 0.001027s | byte equality observed |
| global_resource_test.test | 10 | 0.001026s | 0.000978s | 0.001011s | byte equality observed |
| hub_api_test.test | 7 | 0.002739s | 0.002208s | 0.002278s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000995s | 0.000974s | 0.001001s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.072475s | 0.065021s | 0.069166s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.001100s | 0.001066s | 0.001074s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.001036s | 0.001006s | 0.001051s | byte equality observed |
| hub_sort_test.test | 1 | 0.439172s | 0.433487s | 0.430382s | byte equality observed |
| hub_stability_test.test | 10 | 0.001235s | 0.001200s | 0.001210s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000990s | 0.000962s | 0.000991s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.001017s | 0.000986s | 0.001002s | byte equality observed |
| is_constructible_test.test | 10 | 0.000465s | 0.000448s | 0.000960s | byte equality observed |
| list_test.test | 1 | 0.017726s | 0.017218s | 0.017791s | byte equality observed |
| map_test.test | 3 | 0.008058s | 0.007699s | 0.008045s | byte equality observed |
| memory_resource_test.test | 10 | 0.001038s | 0.000972s | 0.001054s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.001004s | 0.000983s | 0.001025s | byte equality observed |
| nest_api_test.test | 10 | 0.001637s | 0.001610s | 0.001726s | byte equality observed |
| nest_test.test | 10 | 0.001022s | 0.001013s | 0.001033s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001486s | 0.001447s | 0.001480s | byte equality observed |
| node_allocator_test.test | 3 | 0.007257s | 0.007017s | 0.007436s | byte equality observed |
| node_handle_test.test | 10 | 0.001042s | 0.000985s | 0.001088s | byte equality observed |
| null_iterators_test.test | 10 | 0.001005s | 0.000998s | 0.000999s | byte equality observed |
| pair_test.test | 10 | 0.000991s | 0.000971s | 0.000999s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000974s | 0.000971s | 0.000976s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000964s | 0.000971s | 0.000971s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000963s | 0.000967s | 0.000982s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000979s | 0.000977s | 0.000989s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000986s | 0.000969s | 0.000981s | byte equality observed |
| pmr_list_test.test | 10 | 0.000985s | 0.000979s | 0.000978s | byte equality observed |
| pmr_map_test.test | 10 | 0.000972s | 0.000975s | 0.000977s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000970s | 0.000973s | 0.000993s | byte equality observed |
| pmr_set_test.test | 10 | 0.000988s | 0.000969s | 0.000990s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000971s | 0.000959s | 0.000984s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000977s | 0.000968s | 0.000989s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000989s | 0.000985s | 0.000987s | byte equality observed |
| pmr_string_test.test | 10 | 0.000469s | 0.000461s | 0.000995s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000470s | 0.000468s | 0.001006s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.001061s | 0.001006s | 0.001049s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.001026s | 0.000990s | 0.001071s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.001035s | 0.000988s | 0.001023s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.001011s | 0.001012s | 0.001023s | byte equality observed |
| segtor_options_test.test | 10 | 0.001043s | 0.001014s | 0.001052s | byte equality observed |
| segtor_test.test | 1 | 0.386291s | 0.371132s | 0.371734s | byte equality observed |
| set_test.test | 2 | 0.011066s | 0.009668s | 0.011254s | byte equality observed |
| slist_test.test | 2 | 0.017165s | 0.016899s | 0.017280s | byte equality observed |
| small_vector_options_test.test | 10 | 0.001148s | 0.001053s | 0.001181s | byte equality observed |
| small_vector_test.test | 6 | 0.002118s | 0.001935s | 0.003660s | byte equality observed |
| stable_vector_test.test | 1 | 0.025347s | 0.025431s | 0.026666s | byte equality observed |
| static_vector_options_test.test | 10 | 0.001117s | 0.001004s | 0.001148s | byte equality observed |
| static_vector_test.test | 10 | 0.001344s | 0.001227s | 0.001305s | byte equality observed |
| string_options_test.test | 10 | 0.001030s | 0.001011s | 0.001029s | byte equality observed |
| string_test.test | 2 | 0.011172s | 0.011738s | 0.011580s | byte equality observed |
| string_view_compat_test.test | 10 | 0.001016s | 0.001008s | 0.001039s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.001033s | 0.001041s | 0.001035s | byte equality observed |
| throw_exception_test.test | 10 | 0.000966s | 0.000958s | 0.000963s | byte equality observed |
| tree_test.test | 10 | 0.000966s | 0.000970s | 0.000952s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.001041s | 0.001020s | 0.001028s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000974s | 0.000963s | 0.000989s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000450s | 0.000450s | 0.000950s | byte equality observed |
| vector_options_test.test | 10 | 0.001129s | 0.001098s | 0.001141s | byte equality observed |
| vector_test.test | 4 | 0.003503s | 0.003557s | 0.005017s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44922642903).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
