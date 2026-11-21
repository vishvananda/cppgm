# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 6.024404 | 31.100562 | 27.294107 | 0.005762 | 0.005335 | 0.007860 |
| vector_options_test.test | RUN | 0.303158 | 1.427869 | 1.247822 | 0.002024 | 0.001955 | 0.002112 |
| uses_allocator_test.test | RUN | 0.056392 | 0.125236 | 0.165606 | 0.000653 | 0.000599 | 0.001788 |
| uses_allocator_construction_test.test | RUN | 0.168166 | 0.451341 | 0.515146 | 0.001765 | 0.001757 | 0.001820 |
| unsynchronized_pool_resource_test.test | RUN | 0.210565 | 1.320623 | 0.715638 | 0.001703 | 0.001890 | 0.001811 |
| tree_test.test | RUN | 0.884234 | 4.729799 | 3.930236 | 0.001597 | 0.001784 | 0.001628 |
| throw_exception_test.test | RUN | 0.122846 | 0.252033 | 0.401275 | 0.001554 | 0.001757 | 0.001738 |
| synchronized_pool_resource_test.test | RUN | 0.213754 | 1.303396 | 0.745563 | 0.001743 | 0.001894 | 0.001947 |
| string_view_compat_test.test | RUN | 0.349268 | 2.645702 | 1.431718 | 0.001580 | 0.001769 | 0.001932 |
| string_test.test | RUN | 1.479602 | 9.941873 | 7.186291 | 0.015888 | 0.015465 | 0.015422 |
| string_options_test.test | RUN | 0.285466 | 2.129125 | 1.184750 | 0.001822 | 0.001942 | 0.001572 |
| static_vector_test.test | RUN | 1.514520 | 8.293318 | 7.412179 | 0.002349 | 0.002290 | 0.002459 |
| static_vector_options_test.test | RUN | 0.205693 | 0.566779 | 0.718185 | 0.001850 | 0.001770 | 0.001911 |
| stable_vector_test.test | RUN | 3.394750 | 16.981377 | 14.139336 | 0.031147 | 0.032030 | 0.033100 |
| small_vector_test.test | RUN | 2.275374 | 11.998038 | 10.064739 | 0.003649 | 0.003247 | 0.005448 |
| small_vector_options_test.test | RUN | 0.352909 | 1.454513 | 1.372191 | 0.001905 | 0.001883 | 0.001970 |
| slist_test.test | RUN | 2.102851 | 10.589989 | 9.119587 | 0.025096 | 0.025112 | 0.024642 |
| set_test.test | RUN | 3.237320 | 19.966944 | 16.149102 | 0.014923 | 0.013550 | 0.014337 |
| segtor_test.test | RUN | 3.999559 | 21.747759 | 18.049782 | 0.606116 | 0.630289 | 0.659855 |
| segtor_options_test.test | RUN | 0.240952 | 0.665477 | 0.819578 | 0.001572 | 0.001938 | 0.001708 |
| scoped_allocator_usage_test.test | RUN | 0.762932 | 3.250184 | 3.036413 | 0.001707 | 0.001801 | 0.001710 |
| scoped_allocator_adaptor_test.test | RUN | 0.364152 | 0.973595 | 1.450955 | 0.001662 | 0.001632 | 0.002542 |
| resource_adaptor_test.test | RUN | 0.197173 | 0.564342 | 0.610430 | 0.001575 | 0.001697 | 0.001726 |
| polymorphic_allocator_test.test | RUN | 0.162122 | 0.421215 | 0.543007 | 0.001684 | 0.001507 | 0.001696 |
| pmr_vector_test.test | RUN | 0.088453 | 0.169746 | 0.269013 | 0.000739 | 0.000741 | 0.001753 |
| pmr_string_test.test | RUN | 0.181997 | 0.360154 | 0.544626 | 0.000704 | 0.000742 | 0.001706 |
| pmr_stable_vector_test.test | RUN | 0.189351 | 0.572983 | 0.690545 | 0.001634 | 0.001522 | 0.001799 |
| pmr_small_vector_test.test | RUN | 0.114221 | 0.246134 | 0.353558 | 0.001301 | 0.001625 | 0.001676 |
| pmr_slist_test.test | RUN | 0.149805 | 0.747367 | 0.599047 | 0.001618 | 0.001726 | 0.001569 |
| pmr_set_test.test | RUN | 0.166517 | 0.408701 | 0.521725 | 0.001561 | 0.001751 | 0.001556 |
| pmr_nest_test.test | RUN | 0.130660 | 0.273719 | 0.410494 | 0.001675 | 0.001627 | 0.001684 |
| pmr_map_test.test | RUN | 0.174209 | 0.420733 | 0.587897 | 0.001567 | 0.001758 | 0.001646 |
| pmr_list_test.test | RUN | 0.118005 | 0.229127 | 0.392210 | 0.001731 | 0.001642 | 0.001654 |
| pmr_hub_test.test | RUN | 0.166069 | 0.363292 | 0.432647 | 0.001741 | 0.001545 | 0.001764 |
| pmr_flat_set_test.test | RUN | 0.129669 | 0.273873 | 0.383006 | 0.001579 | 0.001598 | 0.001722 |
| pmr_flat_map_test.test | RUN | 0.149642 | 0.323928 | 0.455711 | 0.001475 | 0.001682 | 0.001880 |
| pmr_devector_test.test | RUN | 0.102557 | 0.283142 | 0.338034 | 0.001468 | 0.001744 | 0.001684 |
| pmr_deque_test.test | RUN | 0.103247 | 0.227440 | 0.336990 | 0.001350 | 0.001747 | 0.001639 |
| pair_test.test | RUN | 0.252317 | 0.559904 | 0.806677 | 0.001489 | 0.001760 | 0.001701 |
| null_iterators_test.test | RUN | 0.389727 | 1.068863 | 1.316926 | 0.001677 | 0.001708 | 0.001717 |
| node_handle_test.test | RUN | 0.158214 | 1.321098 | 0.551971 | 0.001532 | 0.001857 | 0.001390 |
| node_allocator_test.test | RUN | 2.478216 | 12.985355 | 11.127848 | 0.010078 | 0.010514 | 0.010434 |
| new_delete_resource_test.test | RUN | 0.208194 | 0.804972 | 0.710506 | 0.002484 | 0.002483 | 0.002004 |
| nest_test.test | RUN | 0.531353 | 3.639484 | 2.495748 | 0.001481 | 0.001819 | 0.001686 |
| nest_api_test.test | RUN | 0.898369 | 6.921797 | 4.838448 | 0.002611 | 0.002467 | 0.002592 |
| monotonic_buffer_resource_test.test | RUN | 0.216048 | 1.421901 | 0.726370 | 0.001670 | 0.001814 | 0.001766 |
| memory_resource_test.test | RUN | 0.131030 | 0.420626 | 0.426306 | 0.001704 | 0.001822 | 0.001706 |
| map_test.test | RUN | 4.365430 | 22.811725 | 23.481779 | 0.010726 | 0.010805 | 0.010791 |
| list_test.test | RUN | 2.221030 | 11.641134 | 9.779370 | 0.023781 | 0.025809 | 0.025821 |
| is_constructible_test.test | RUN | 0.082723 | 0.152181 | 0.258590 | 0.000767 | 0.000657 | 0.001716 |
| insert_vs_emplace_test.test | RUN | 0.246342 | 0.939973 | 1.324459 | 0.001683 | 0.001764 | 0.001829 |
| hub_uses_allocator_test.test | RUN | 0.275222 | 0.815917 | 0.973870 | 0.001568 | 0.001641 | 0.001804 |
| hub_stability_test.test | RUN | 0.583431 | 3.674268 | 3.304934 | 0.002110 | 0.002130 | 0.002270 |
| hub_sort_test.test | RUN | 0.369771 | 1.674507 | 1.580013 | 0.525620 | 0.517315 | 0.506499 |
| hub_pocxx_test.test | RUN | 0.328572 | 1.945498 | 1.191073 | 0.001650 | 0.001916 | 0.001633 |
| hub_new_extended_alignment_test.test | RUN | 0.190264 | 0.616603 | 0.643770 | 0.001664 | 0.001877 | 0.001492 |
| hub_exception_safety_test.test | RUN | 0.683851 | 4.607338 | 3.308826 | 0.088179 | 0.085812 | 0.087006 |
| hub_empty_sort_test.test | RUN | 0.223789 | 0.573114 | 0.799692 | 0.001762 | 0.001774 | 0.001686 |
| hub_api_test.test | RUN | 2.228447 | 18.669796 | 10.473773 | 0.003964 | 0.003454 | 0.003481 |
| global_resource_test.test | RUN | 0.125755 | 0.385102 | 0.417005 | 0.001809 | 0.001800 | 0.001772 |
| flat_tree_test.test | RUN | 4.037632 | 28.580249 | 19.506961 | 0.001745 | 0.001804 | 0.001575 |
| flat_set_test.test | RUN | 5.031149 | 36.047099 | 25.741811 | 0.008456 | 0.006736 | 0.007986 |
| flat_set_adaptor_test.test | RUN | 3.728823 | 32.003544 | 20.017284 | 0.008350 | 0.007610 | 0.008427 |
| flat_map_test.test | RUN | 8.004213 | 53.769396 | 41.805634 | 0.008883 | 0.009043 | 0.008686 |
| flat_map_adaptor_test.test | RUN | 5.085227 | 39.209977 | 29.664107 | 0.008372 | 0.008096 | 0.008231 |
| explicit_inst_vector_test.test | RUN | 0.827271 | 5.361334 | 4.534208 | 0.001782 | 0.001750 | 0.001615 |
| explicit_inst_string_test.test | RUN | 1.114308 | 9.331295 | 6.005916 | 0.001671 | 0.001823 | 0.001731 |
| explicit_inst_static_vector_test.test | RUN | 0.117905 | 0.359631 | 0.439582 | 0.001673 | 0.001644 | 0.001656 |
| explicit_inst_stable_vector_test.test | RUN | 0.662958 | 3.375677 | 2.838935 | 0.001692 | 0.001772 | 0.001574 |
| explicit_inst_small_vector_test.test | RUN | 0.581753 | 3.091595 | 2.650127 | 0.001550 | 0.001810 | 0.001689 |
| explicit_inst_slist_test.test | RUN | 0.455610 | 2.809575 | 2.020579 | 0.001524 | 0.001796 | 0.001697 |
| explicit_inst_set_test.test | RUN | 0.619407 | 3.207280 | 2.414310 | 0.001525 | 0.001708 | 0.001678 |
| explicit_inst_map_test.test | RUN | 0.678500 | 3.413436 | 2.613895 | 0.001777 | 0.001788 | 0.001571 |
| explicit_inst_list_test.test | RUN | 0.158416 | 0.775399 | 0.670666 | 0.001721 | 0.001746 | 0.001658 |
| explicit_inst_flat_set_test.test | RUN | 3.351201 | 24.010201 | 15.267720 | 0.001674 | 0.001832 | 0.001712 |
| explicit_inst_flat_map_test.test | RUN | 3.630355 | 25.146792 | 16.925531 | 0.001484 | 0.001503 | 0.001560 |
| explicit_inst_devector_test.test | RUN | 0.441403 | 3.042173 | 2.106700 | 0.001495 | 0.001731 | 0.001648 |
| explicit_inst_deque_test.test | RUN | 0.491422 | 3.339708 | 2.275761 | 0.001788 | 0.001777 | 0.001752 |
| devector_test.test | RUN | 6.591958 | 40.582325 | 30.208856 | 0.003658 | 0.003501 | 0.004564 |
| devector_options_test.test | RUN | 0.314735 | 1.794413 | 1.357536 | 0.002084 | 0.002113 | 0.002032 |
| deque_test.test | RUN | 3.877694 | 20.526166 | 18.656776 | 0.407293 | 0.361177 | 0.428537 |
| deque_options_test.test | RUN | 0.228931 | 0.673837 | 0.866259 | 0.001740 | 0.001882 | 0.001827 |
| copy_move_algo_test.test | RUN | 0.219948 | 0.809400 | 0.903466 | 0.001949 | 0.001774 | 0.002054 |
| common_iterator_test.test | RUN | 0.018796 | 0.043874 | 0.039870 | 0.000714 | 0.000713 | 0.001614 |
| boost_iterator_comp_test.test | RUN | 0.322776 | 0.964048 | 1.265208 | 0.001738 | 0.001837 | 0.001881 |
| allocator_traits_test.test | RUN | 0.194435 | 0.444788 | 0.637447 | 0.001618 | 0.001789 | 0.001807 |
| alloc_full_test.test | RUN | 0.211637 | 0.898449 | 0.855650 | 0.004707 | 0.004735 | 0.004877 |
| alloc_basic_test.test | RUN | 0.174637 | 0.654120 | 0.615947 | 0.001632 | 0.001903 | 0.001910 |
| adaptive_pool_test.test | RUN | 2.323358 | 13.525858 | 7.329983 | 0.010138 | 0.009688 | 0.010255 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.970× | 0.959×, 0.980× | 0.998× |
| clang | 1.016× | 1.014×, 1.017× | 0.996× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44815881069).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 2 | 0.010227s | 0.009795s | 0.010159s | byte equality observed |
| alloc_basic_test.test | 10 | 0.001057s | 0.001055s | 0.001049s | byte equality observed |
| alloc_full_test.test | 7 | 0.002970s | 0.002999s | 0.003043s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000976s | 0.000988s | 0.000971s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.001012s | 0.001031s | 0.000993s | byte equality observed |
| common_iterator_test.test | 10 | 0.000461s | 0.000454s | 0.000962s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001207s | 0.001096s | 0.001120s | byte equality observed |
| deque_options_test.test | 10 | 0.001026s | 0.001027s | 0.001067s | byte equality observed |
| deque_test.test | 1 | 0.415953s | 0.380262s | 0.460028s | byte equality observed |
| devector_options_test.test | 10 | 0.001121s | 0.001098s | 0.001081s | byte equality observed |
| devector_test.test | 5 | 0.003181s | 0.003119s | 0.004297s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000924s | 0.000951s | 0.000966s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000922s | 0.000951s | 0.000937s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000925s | 0.000950s | 0.000938s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000927s | 0.000954s | 0.000949s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000931s | 0.000960s | 0.000940s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000946s | 0.000960s | 0.000942s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000944s | 0.000947s | 0.000954s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000950s | 0.000955s | 0.000933s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000945s | 0.000943s | 0.000940s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000945s | 0.000954s | 0.000947s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000925s | 0.000952s | 0.000921s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000946s | 0.000956s | 0.000948s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000944s | 0.000943s | 0.000939s | byte equality observed |
| flat_map_adaptor_test.test | 4 | 0.005845s | 0.005631s | 0.005733s | byte equality observed |
| flat_map_test.test | 4 | 0.006265s | 0.005974s | 0.005932s | byte equality observed |
| flat_set_adaptor_test.test | 4 | 0.005888s | 0.005327s | 0.005899s | byte equality observed |
| flat_set_test.test | 4 | 0.005831s | 0.005131s | 0.005798s | byte equality observed |
| flat_tree_test.test | 10 | 0.000954s | 0.000948s | 0.000953s | byte equality observed |
| global_resource_test.test | 10 | 0.000981s | 0.000977s | 0.000990s | byte equality observed |
| hub_api_test.test | 7 | 0.002663s | 0.002251s | 0.002154s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000952s | 0.000967s | 0.000963s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.067386s | 0.063613s | 0.061525s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.001066s | 0.001046s | 0.001005s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.001011s | 0.001011s | 0.000979s | byte equality observed |
| hub_sort_test.test | 1 | 0.433975s | 0.431362s | 0.420289s | byte equality observed |
| hub_stability_test.test | 10 | 0.001200s | 0.001214s | 0.001189s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000944s | 0.000960s | 0.000943s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000983s | 0.000993s | 0.000975s | byte equality observed |
| is_constructible_test.test | 10 | 0.000447s | 0.000448s | 0.000923s | byte equality observed |
| list_test.test | 2 | 0.017184s | 0.017278s | 0.017592s | byte equality observed |
| map_test.test | 3 | 0.007752s | 0.007695s | 0.007675s | byte equality observed |
| memory_resource_test.test | 10 | 0.000958s | 0.000964s | 0.000949s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000953s | 0.001003s | 0.000973s | byte equality observed |
| nest_api_test.test | 10 | 0.001563s | 0.001611s | 0.001637s | byte equality observed |
| nest_test.test | 10 | 0.000994s | 0.001005s | 0.001001s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001399s | 0.001416s | 0.001407s | byte equality observed |
| node_allocator_test.test | 3 | 0.007108s | 0.006981s | 0.007073s | byte equality observed |
| node_handle_test.test | 10 | 0.000958s | 0.000963s | 0.000959s | byte equality observed |
| null_iterators_test.test | 10 | 0.000953s | 0.000971s | 0.000952s | byte equality observed |
| pair_test.test | 10 | 0.000954s | 0.000966s | 0.000944s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000939s | 0.000949s | 0.000958s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000927s | 0.000954s | 0.000952s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000933s | 0.000954s | 0.000936s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000944s | 0.000958s | 0.000925s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000943s | 0.000942s | 0.000934s | byte equality observed |
| pmr_list_test.test | 10 | 0.000936s | 0.000948s | 0.000942s | byte equality observed |
| pmr_map_test.test | 10 | 0.000938s | 0.000940s | 0.000947s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000942s | 0.000953s | 0.000941s | byte equality observed |
| pmr_set_test.test | 10 | 0.000942s | 0.000945s | 0.000953s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000941s | 0.000952s | 0.000960s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000950s | 0.000943s | 0.000952s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000954s | 0.000963s | 0.000950s | byte equality observed |
| pmr_string_test.test | 10 | 0.000456s | 0.000447s | 0.000964s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000456s | 0.000458s | 0.000964s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.000997s | 0.001016s | 0.000989s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.000986s | 0.001018s | 0.000994s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.000991s | 0.001006s | 0.000997s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.000999s | 0.000975s | 0.000986s | byte equality observed |
| segtor_options_test.test | 10 | 0.001025s | 0.001025s | 0.001002s | byte equality observed |
| segtor_test.test | 1 | 0.378435s | 0.376462s | 0.373000s | byte equality observed |
| set_test.test | 2 | 0.010892s | 0.009688s | 0.011020s | byte equality observed |
| slist_test.test | 2 | 0.016786s | 0.016775s | 0.016862s | byte equality observed |
| small_vector_options_test.test | 10 | 0.001054s | 0.001063s | 0.001035s | byte equality observed |
| small_vector_test.test | 6 | 0.002079s | 0.001926s | 0.003553s | byte equality observed |
| stable_vector_test.test | 1 | 0.025190s | 0.025410s | 0.026434s | byte equality observed |
| static_vector_options_test.test | 10 | 0.001032s | 0.000999s | 0.001026s | byte equality observed |
| static_vector_test.test | 10 | 0.001343s | 0.001258s | 0.001274s | byte equality observed |
| string_options_test.test | 10 | 0.001007s | 0.001008s | 0.000998s | byte equality observed |
| string_test.test | 2 | 0.011055s | 0.011991s | 0.011419s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000960s | 0.000971s | 0.000956s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.001011s | 0.001042s | 0.001008s | byte equality observed |
| throw_exception_test.test | 10 | 0.000958s | 0.000951s | 0.000941s | byte equality observed |
| tree_test.test | 10 | 0.000949s | 0.000947s | 0.000953s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.001022s | 0.001023s | 0.000992s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000956s | 0.000950s | 0.000951s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000439s | 0.000446s | 0.000934s | byte equality observed |
| vector_options_test.test | 10 | 0.001108s | 0.001099s | 0.001094s | byte equality observed |
| vector_test.test | 4 | 0.003505s | 0.003408s | 0.004856s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44815881069).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
