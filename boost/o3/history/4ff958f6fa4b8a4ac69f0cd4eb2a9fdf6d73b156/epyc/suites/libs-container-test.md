# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 5.107114 | 28.490846 | 21.157770 | 0.004893 | 0.004727 | 0.005528 |
| vector_options_test.test | RUN | 0.257440 | 1.249404 | 0.855917 | 0.002098 | 0.002078 | 0.001830 |
| uses_allocator_test.test | RUN | 0.047576 | 0.102191 | 0.112513 | 0.000755 | 0.000767 | 0.001546 |
| uses_allocator_construction_test.test | RUN | 0.145915 | 0.386840 | 0.390341 | 0.001778 | 0.001655 | 0.001579 |
| unsynchronized_pool_resource_test.test | RUN | 0.178572 | 1.134029 | 0.511489 | 0.001550 | 0.001786 | 0.001722 |
| tree_test.test | RUN | 0.761566 | 4.288833 | 2.912721 | 0.001504 | 0.001991 | 0.001589 |
| throw_exception_test.test | RUN | 0.104864 | 0.244347 | 0.265724 | 0.001764 | 0.001538 | 0.001562 |
| synchronized_pool_resource_test.test | RUN | 0.190247 | 1.129867 | 0.505430 | 0.001584 | 0.001957 | 0.001641 |
| string_view_compat_test.test | RUN | 0.303963 | 2.221993 | 0.952917 | 0.001716 | 0.001951 | 0.001700 |
| string_test.test | RUN | 1.336707 | 8.858473 | 5.338574 | 0.012970 | 0.011741 | 0.012100 |
| string_options_test.test | RUN | 0.252924 | 1.924540 | 0.888703 | 0.001812 | 0.001890 | 0.001656 |
| static_vector_test.test | RUN | 1.296625 | 7.389104 | 5.713387 | 0.002370 | 0.002237 | 0.001938 |
| static_vector_options_test.test | RUN | 0.179833 | 0.503260 | 0.469923 | 0.001910 | 0.001832 | 0.001790 |
| stable_vector_test.test | RUN | 2.939228 | 15.752185 | 10.898336 | 0.025365 | 0.025689 | 0.025550 |
| small_vector_test.test | RUN | 1.912347 | 11.005476 | 7.996783 | 0.003056 | 0.002992 | 0.004333 |
| small_vector_options_test.test | RUN | 0.303890 | 1.328944 | 0.978034 | 0.002016 | 0.001962 | 0.001834 |
| slist_test.test | RUN | 1.784515 | 9.952704 | 6.899544 | 0.020137 | 0.019623 | 0.018279 |
| set_test.test | RUN | 2.748811 | 18.103306 | 12.701132 | 0.012702 | 0.011196 | 0.012675 |
| segtor_test.test | RUN | 3.459985 | 19.308015 | 14.351954 | 0.439552 | 0.439052 | 0.413637 |
| segtor_options_test.test | RUN | 0.249764 | 0.550374 | 0.605892 | 0.001756 | 0.001866 | 0.001771 |
| scoped_allocator_usage_test.test | RUN | 0.668554 | 3.042564 | 2.357201 | 0.001628 | 0.001809 | 0.001629 |
| scoped_allocator_adaptor_test.test | RUN | 0.300396 | 0.760963 | 0.998031 | 0.001682 | 0.001779 | 0.001573 |
| resource_adaptor_test.test | RUN | 0.164905 | 0.476146 | 0.457008 | 0.001613 | 0.001806 | 0.001536 |
| polymorphic_allocator_test.test | RUN | 0.143575 | 0.383835 | 0.374331 | 0.001538 | 0.001829 | 0.001434 |
| pmr_vector_test.test | RUN | 0.077853 | 0.146760 | 0.182454 | 0.000626 | 0.000794 | 0.001418 |
| pmr_string_test.test | RUN | 0.150679 | 0.310886 | 0.375134 | 0.000711 | 0.000760 | 0.001596 |
| pmr_stable_vector_test.test | RUN | 0.163111 | 0.500807 | 0.527982 | 0.001432 | 0.001492 | 0.001591 |
| pmr_small_vector_test.test | RUN | 0.092080 | 0.200913 | 0.254097 | 0.001757 | 0.001604 | 0.001607 |
| pmr_slist_test.test | RUN | 0.134039 | 0.662789 | 0.563742 | 0.001810 | 0.001754 | 0.003444 |
| pmr_set_test.test | RUN | 0.143966 | 0.340347 | 0.435773 | 0.001491 | 0.001622 | 0.001695 |
| pmr_nest_test.test | RUN | 0.112638 | 0.210952 | 0.248783 | 0.001680 | 0.001748 | 0.001459 |
| pmr_map_test.test | RUN | 0.144827 | 0.344641 | 0.377592 | 0.001362 | 0.001779 | 0.001551 |
| pmr_list_test.test | RUN | 0.096016 | 0.212663 | 0.270452 | 0.001240 | 0.001544 | 0.001562 |
| pmr_hub_test.test | RUN | 0.170315 | 0.310217 | 0.335250 | 0.001703 | 0.001389 | 0.001623 |
| pmr_flat_set_test.test | RUN | 0.105529 | 0.238957 | 0.271261 | 0.001466 | 0.001625 | 0.001579 |
| pmr_flat_map_test.test | RUN | 0.128077 | 0.274871 | 0.311974 | 0.001416 | 0.001490 | 0.001412 |
| pmr_devector_test.test | RUN | 0.106780 | 0.236916 | 0.248733 | 0.001649 | 0.001760 | 0.001592 |
| pmr_deque_test.test | RUN | 0.125687 | 0.194014 | 0.239013 | 0.001795 | 0.001851 | 0.001778 |
| pair_test.test | RUN | 0.245126 | 0.470926 | 0.555203 | 0.001493 | 0.001825 | 0.001675 |
| null_iterators_test.test | RUN | 0.316882 | 0.915281 | 0.925872 | 0.001658 | 0.001819 | 0.001642 |
| node_handle_test.test | RUN | 0.142930 | 1.106850 | 0.380043 | 0.001804 | 0.001825 | 0.001492 |
| node_allocator_test.test | RUN | 2.080542 | 11.455644 | 8.884772 | 0.010425 | 0.008674 | 0.008317 |
| new_delete_resource_test.test | RUN | 0.175799 | 0.689813 | 0.527723 | 0.002112 | 0.002389 | 0.002132 |
| nest_test.test | RUN | 0.437497 | 3.148011 | 1.877533 | 0.001646 | 0.001856 | 0.001577 |
| nest_api_test.test | RUN | 0.735981 | 5.831341 | 3.727542 | 0.002461 | 0.002512 | 0.002370 |
| monotonic_buffer_resource_test.test | RUN | 0.185781 | 1.169335 | 0.536653 | 0.001794 | 0.001750 | 0.001710 |
| memory_resource_test.test | RUN | 0.113298 | 0.329593 | 0.286789 | 0.001706 | 0.001735 | 0.001629 |
| map_test.test | RUN | 3.720511 | 19.546734 | 18.286111 | 0.010270 | 0.009549 | 0.011956 |
| list_test.test | RUN | 1.924596 | 10.097625 | 7.663436 | 0.019551 | 0.019925 | 0.020176 |
| is_constructible_test.test | RUN | 0.065391 | 0.124753 | 0.169981 | 0.000757 | 0.000776 | 0.001592 |
| insert_vs_emplace_test.test | RUN | 0.206020 | 0.780208 | 0.966961 | 0.001906 | 0.001888 | 0.001680 |
| hub_uses_allocator_test.test | RUN | 0.247708 | 0.676683 | 0.669844 | 0.002043 | 0.001712 | 0.001640 |
| hub_stability_test.test | RUN | 0.504321 | 3.204845 | 2.553528 | 0.001973 | 0.002138 | 0.001728 |
| hub_sort_test.test | RUN | 0.331315 | 1.464033 | 1.215875 | 0.483198 | 0.474024 | 0.460899 |
| hub_pocxx_test.test | RUN | 0.302136 | 1.607481 | 0.827130 | 0.001815 | 0.001868 | 0.001684 |
| hub_new_extended_alignment_test.test | RUN | 0.171432 | 0.510739 | 0.480212 | 0.001768 | 0.001760 | 0.001613 |
| hub_exception_safety_test.test | RUN | 0.577097 | 3.931986 | 2.576499 | 0.075740 | 0.077372 | 0.074906 |
| hub_empty_sort_test.test | RUN | 0.192880 | 0.480949 | 0.556365 | 0.001768 | 0.001765 | 0.001461 |
| hub_api_test.test | RUN | 1.878752 | 16.678186 | 8.245987 | 0.003577 | 0.003433 | 0.003093 |
| global_resource_test.test | RUN | 0.110762 | 0.325545 | 0.278193 | 0.001814 | 0.001830 | 0.001659 |
| flat_tree_test.test | RUN | 3.562126 | 25.072227 | 15.933996 | 0.001858 | 0.001831 | 0.001512 |
| flat_set_test.test | RUN | 4.419496 | 31.651443 | 20.313997 | 0.007423 | 0.006755 | 0.006727 |
| flat_set_adaptor_test.test | RUN | 3.234954 | 29.521157 | 16.177245 | 0.007439 | 0.007011 | 0.006820 |
| flat_map_test.test | RUN | 6.947574 | 49.834148 | 33.863342 | 0.008793 | 0.008110 | 0.007297 |
| flat_map_adaptor_test.test | RUN | 4.391389 | 36.400466 | 24.009916 | 0.007910 | 0.007395 | 0.007246 |
| explicit_inst_vector_test.test | RUN | 0.740962 | 4.966250 | 3.636148 | 0.001840 | 0.001814 | 0.001543 |
| explicit_inst_string_test.test | RUN | 1.029085 | 8.711807 | 5.066551 | 0.001798 | 0.001907 | 0.001599 |
| explicit_inst_static_vector_test.test | RUN | 0.135925 | 0.325132 | 0.312667 | 0.001686 | 0.001812 | 0.001602 |
| explicit_inst_stable_vector_test.test | RUN | 0.579463 | 3.148039 | 2.160837 | 0.001767 | 0.001861 | 0.001659 |
| explicit_inst_small_vector_test.test | RUN | 0.494866 | 2.841716 | 2.091984 | 0.001789 | 0.001619 | 0.001581 |
| explicit_inst_slist_test.test | RUN | 0.389443 | 2.621235 | 1.530738 | 0.001758 | 0.001787 | 0.001642 |
| explicit_inst_set_test.test | RUN | 0.535973 | 2.986645 | 1.879672 | 0.001824 | 0.001818 | 0.001717 |
| explicit_inst_map_test.test | RUN | 0.601776 | 3.225244 | 2.036912 | 0.002073 | 0.001959 | 0.001673 |
| explicit_inst_list_test.test | RUN | 0.141986 | 0.708463 | 0.533325 | 0.001754 | 0.001895 | 0.001670 |
| explicit_inst_flat_set_test.test | RUN | 2.872486 | 22.094765 | 12.220935 | 0.001779 | 0.001959 | 0.001650 |
| explicit_inst_flat_map_test.test | RUN | 3.101279 | 23.017693 | 13.580177 | 0.001565 | 0.001861 | 0.001561 |
| explicit_inst_devector_test.test | RUN | 0.414294 | 2.692125 | 1.617919 | 0.001708 | 0.001815 | 0.001576 |
| explicit_inst_deque_test.test | RUN | 0.430614 | 2.966163 | 1.869764 | 0.001548 | 0.001835 | 0.001550 |
| devector_test.test | RUN | 5.185037 | 37.699372 | 25.418250 | 0.003406 | 0.003511 | 0.003858 |
| devector_options_test.test | RUN | 0.272260 | 1.606408 | 0.944940 | 0.002188 | 0.001917 | 0.001960 |
| deque_test.test | RUN | 3.790527 | 19.117197 | 13.142703 | 0.464542 | 0.344033 | 0.317804 |
| deque_options_test.test | RUN | 0.210400 | 0.676069 | 0.664107 | 0.001825 | 0.002024 | 0.001770 |
| copy_move_algo_test.test | RUN | 0.187992 | 0.746737 | 0.626742 | 0.001822 | 0.001921 | 0.001787 |
| common_iterator_test.test | RUN | 0.016330 | 0.041209 | 0.038460 | 0.000719 | 0.000773 | 0.001561 |
| boost_iterator_comp_test.test | RUN | 0.276629 | 0.841824 | 0.927826 | 0.001714 | 0.001878 | 0.001562 |
| allocator_traits_test.test | RUN | 0.169468 | 0.397436 | 0.441786 | 0.001492 | 0.001850 | 0.001654 |
| alloc_full_test.test | RUN | 0.182567 | 0.799880 | 0.636258 | 0.003913 | 0.004257 | 0.003941 |
| alloc_basic_test.test | RUN | 0.149607 | 0.546565 | 0.450523 | 0.001536 | 0.001980 | 0.001697 |
| adaptive_pool_test.test | RUN | 2.016964 | 12.546694 | 9.001222 | 0.010008 | 0.007508 | 0.011570 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.045× | 1.067×, 1.022× | 0.990× |
| clang | 1.038× | 1.055×, 1.022× | 0.974× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45790989032).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 3 | 0.007710s | 0.007239s | 0.008143s | byte equality observed |
| alloc_basic_test.test | 10 | 0.000950s | 0.000957s | 0.000985s | byte equality observed |
| alloc_full_test.test | 8 | 0.002553s | 0.002600s | 0.002778s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000886s | 0.000884s | 0.000905s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.000897s | 0.000905s | 0.000910s | byte equality observed |
| common_iterator_test.test | 10 | 0.000402s | 0.000407s | 0.000901s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001028s | 0.001006s | 0.001031s | byte equality observed |
| deque_options_test.test | 10 | 0.000949s | 0.000949s | 0.000945s | byte equality observed |
| deque_test.test | 1 | 0.303882s | 0.337863s | 0.334655s | byte equality observed |
| devector_options_test.test | 10 | 0.001003s | 0.000984s | 0.000994s | byte equality observed |
| devector_test.test | 5 | 0.002679s | 0.002693s | 0.003569s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000828s | 0.000847s | 0.000864s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000837s | 0.000833s | 0.000835s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000837s | 0.000841s | 0.000851s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000824s | 0.000843s | 0.000863s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000807s | 0.000820s | 0.000848s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000820s | 0.000828s | 0.000854s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000816s | 0.000825s | 0.000866s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000833s | 0.000847s | 0.000852s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000825s | 0.000839s | 0.000854s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000821s | 0.000816s | 0.000849s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000802s | 0.000818s | 0.000871s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000820s | 0.000830s | 0.000866s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000832s | 0.000830s | 0.000861s | byte equality observed |
| flat_map_adaptor_test.test | 4 | 0.004818s | 0.004555s | 0.004821s | byte equality observed |
| flat_map_test.test | 4 | 0.005222s | 0.004966s | 0.004936s | byte equality observed |
| flat_set_adaptor_test.test | 5 | 0.004601s | 0.004113s | 0.004587s | byte equality observed |
| flat_set_test.test | 4 | 0.004682s | 0.004039s | 0.004545s | byte equality observed |
| flat_tree_test.test | 10 | 0.000861s | 0.000825s | 0.000918s | byte equality observed |
| global_resource_test.test | 10 | 0.000883s | 0.000857s | 0.000897s | byte equality observed |
| hub_api_test.test | 9 | 0.002213s | 0.001896s | 0.001950s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000853s | 0.000848s | 0.000899s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.056606s | 0.053913s | 0.057428s | byte equality observed |
| hub_new_extended_alignment_test.test | 8 | 0.000883s | 0.000936s | 0.000907s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.000908s | 0.000880s | 0.000940s | byte equality observed |
| hub_sort_test.test | 1 | 0.404168s | 0.408321s | 0.398187s | byte equality observed |
| hub_stability_test.test | 10 | 0.001133s | 0.001055s | 0.001184s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000859s | 0.000854s | 0.000886s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000901s | 0.000887s | 0.000918s | byte equality observed |
| is_constructible_test.test | 10 | 0.000396s | 0.000397s | 0.000870s | byte equality observed |
| list_test.test | 2 | 0.012737s | 0.012571s | 0.013312s | byte equality observed |
| map_test.test | 3 | 0.006366s | 0.006141s | 0.006437s | byte equality observed |
| memory_resource_test.test | 10 | 0.000875s | 0.000884s | 0.000914s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000877s | 0.000886s | 0.000904s | byte equality observed |
| nest_api_test.test | 10 | 0.001396s | 0.001416s | 0.001486s | byte equality observed |
| nest_test.test | 10 | 0.000888s | 0.000918s | 0.000935s | byte equality observed |
| new_delete_resource_test.test | 8 | 0.001291s | 0.001308s | 0.001326s | byte equality observed |
| node_allocator_test.test | 2 | 0.005816s | 0.005658s | 0.005968s | byte equality observed |
| node_handle_test.test | 10 | 0.000873s | 0.000870s | 0.000910s | byte equality observed |
| null_iterators_test.test | 10 | 0.000869s | 0.000849s | 0.000878s | byte equality observed |
| pair_test.test | 10 | 0.000857s | 0.000859s | 0.000882s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000841s | 0.000841s | 0.000887s | byte equality observed |
| pmr_devector_test.test | 8 | 0.000845s | 0.000845s | 0.000879s | byte equality observed |
| pmr_flat_map_test.test | 8 | 0.000837s | 0.000842s | 0.000866s | byte equality observed |
| pmr_flat_set_test.test | 8 | 0.000832s | 0.000831s | 0.000883s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000850s | 0.000837s | 0.000871s | byte equality observed |
| pmr_list_test.test | 10 | 0.000840s | 0.000854s | 0.000874s | byte equality observed |
| pmr_map_test.test | 10 | 0.000830s | 0.000864s | 0.000867s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000842s | 0.000868s | 0.000867s | byte equality observed |
| pmr_set_test.test | 10 | 0.000841s | 0.000853s | 0.000866s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000844s | 0.000860s | 0.000867s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000858s | 0.000852s | 0.000874s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000856s | 0.000864s | 0.000887s | byte equality observed |
| pmr_string_test.test | 10 | 0.000398s | 0.000404s | 0.000871s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000404s | 0.000402s | 0.000901s | byte equality observed |
| polymorphic_allocator_test.test | 8 | 0.000910s | 0.000886s | 0.000943s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.000874s | 0.000881s | 0.000910s | byte equality observed |
| scoped_allocator_adaptor_test.test | 9 | 0.000896s | 0.000876s | 0.000928s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.000901s | 0.000869s | 0.000923s | byte equality observed |
| segtor_options_test.test | 7 | 0.000946s | 0.000942s | 0.000983s | byte equality observed |
| segtor_test.test | 1 | 0.258671s | 0.274515s | 0.276843s | byte equality observed |
| set_test.test | 3 | 0.008523s | 0.007547s | 0.008708s | byte equality observed |
| slist_test.test | 2 | 0.012763s | 0.012617s | 0.013412s | byte equality observed |
| small_vector_options_test.test | 10 | 0.000939s | 0.000931s | 0.001012s | byte equality observed |
| small_vector_test.test | 7 | 0.001652s | 0.001613s | 0.002788s | byte equality observed |
| stable_vector_test.test | 1 | 0.020553s | 0.020651s | 0.022106s | byte equality observed |
| static_vector_options_test.test | 10 | 0.000919s | 0.000879s | 0.001009s | byte equality observed |
| static_vector_test.test | 10 | 0.001138s | 0.001105s | 0.001169s | byte equality observed |
| string_options_test.test | 10 | 0.000889s | 0.000921s | 0.000935s | byte equality observed |
| string_test.test | 3 | 0.008009s | 0.008338s | 0.008663s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000870s | 0.000869s | 0.000912s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.000914s | 0.000905s | 0.000988s | byte equality observed |
| throw_exception_test.test | 10 | 0.000845s | 0.000858s | 0.000888s | byte equality observed |
| tree_test.test | 10 | 0.000833s | 0.000886s | 0.000857s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.000895s | 0.000933s | 0.000923s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000841s | 0.000857s | 0.000871s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000391s | 0.000401s | 0.000887s | byte equality observed |
| vector_options_test.test | 10 | 0.000999s | 0.000999s | 0.001047s | byte equality observed |
| vector_test.test | 5 | 0.002935s | 0.002922s | 0.003984s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45790989032).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
