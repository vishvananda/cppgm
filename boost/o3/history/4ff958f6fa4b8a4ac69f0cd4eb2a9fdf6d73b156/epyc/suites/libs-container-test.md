# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 7.963442 | 42.540300 | 39.324542 | 0.007045 | 0.006750 | 0.009888 |
| vector_options_test.test | RUN | 0.436343 | 2.031908 | 1.789693 | 0.002312 | 0.002436 | 0.002512 |
| uses_allocator_test.test | RUN | 0.084716 | 0.171719 | 0.253913 | 0.000731 | 0.000849 | 0.002096 |
| uses_allocator_construction_test.test | RUN | 0.247921 | 0.634123 | 0.879372 | 0.002068 | 0.002148 | 0.002022 |
| unsynchronized_pool_resource_test.test | RUN | 0.311060 | 1.851505 | 1.174909 | 0.002018 | 0.002274 | 0.001953 |
| tree_test.test | RUN | 1.265569 | 6.334738 | 5.829963 | 0.001835 | 0.002034 | 0.001837 |
| throw_exception_test.test | RUN | 0.163529 | 0.353617 | 0.566082 | 0.002080 | 0.001988 | 0.002149 |
| synchronized_pool_resource_test.test | RUN | 0.293969 | 1.883185 | 1.108499 | 0.002008 | 0.002229 | 0.002360 |
| string_view_compat_test.test | RUN | 0.499622 | 3.696729 | 2.112972 | 0.001955 | 0.002204 | 0.002174 |
| string_test.test | RUN | 2.050740 | 13.693743 | 10.817994 | 0.023725 | 0.021650 | 0.022642 |
| string_options_test.test | RUN | 0.409022 | 2.861508 | 1.717174 | 0.002192 | 0.002125 | 0.002088 |
| static_vector_test.test | RUN | 2.077247 | 11.130915 | 10.605216 | 0.002889 | 0.002745 | 0.002986 |
| static_vector_options_test.test | RUN | 0.294985 | 0.787501 | 1.093890 | 0.002137 | 0.002082 | 0.002182 |
| stable_vector_test.test | RUN | 4.542324 | 23.089332 | 20.072387 | 0.037553 | 0.037660 | 0.039190 |
| small_vector_test.test | RUN | 3.007925 | 16.210024 | 15.026547 | 0.004297 | 0.003954 | 0.007450 |
| small_vector_options_test.test | RUN | 0.489852 | 2.055098 | 2.055907 | 0.002379 | 0.002070 | 0.002298 |
| slist_test.test | RUN | 2.858591 | 14.456842 | 13.173121 | 0.033662 | 0.033869 | 0.033259 |
| set_test.test | RUN | 4.449772 | 26.876237 | 23.821329 | 0.020111 | 0.017544 | 0.019547 |
| segtor_test.test | RUN | 5.421126 | 29.393057 | 26.905966 | 0.865164 | 0.918772 | 0.900598 |
| segtor_options_test.test | RUN | 0.322164 | 0.854079 | 1.234772 | 0.002058 | 0.002146 | 0.001944 |
| scoped_allocator_usage_test.test | RUN | 1.087242 | 4.493048 | 4.584223 | 0.002208 | 0.001945 | 0.001943 |
| scoped_allocator_adaptor_test.test | RUN | 0.537496 | 1.370303 | 2.271775 | 0.002022 | 0.002050 | 0.002114 |
| resource_adaptor_test.test | RUN | 0.267694 | 0.767274 | 0.957139 | 0.002174 | 0.001726 | 0.002127 |
| polymorphic_allocator_test.test | RUN | 0.233741 | 0.631725 | 0.846170 | 0.001730 | 0.001915 | 0.002200 |
| pmr_vector_test.test | RUN | 0.133448 | 0.237683 | 0.394224 | 0.000902 | 0.000922 | 0.001926 |
| pmr_string_test.test | RUN | 0.255619 | 0.504004 | 0.796408 | 0.000837 | 0.000915 | 0.002015 |
| pmr_stable_vector_test.test | RUN | 0.269447 | 0.790249 | 1.116805 | 0.001895 | 0.001934 | 0.002094 |
| pmr_small_vector_test.test | RUN | 0.155205 | 0.350521 | 0.501370 | 0.001780 | 0.001992 | 0.002064 |
| pmr_slist_test.test | RUN | 0.213397 | 1.029328 | 1.061247 | 0.002024 | 0.002076 | 0.002020 |
| pmr_set_test.test | RUN | 0.235237 | 0.582701 | 0.796193 | 0.001624 | 0.002036 | 0.001702 |
| pmr_nest_test.test | RUN | 0.189214 | 0.378619 | 0.635018 | 0.001798 | 0.002032 | 0.002045 |
| pmr_map_test.test | RUN | 0.253770 | 0.564828 | 0.837073 | 0.002016 | 0.001908 | 0.001988 |
| pmr_list_test.test | RUN | 0.171572 | 0.359662 | 0.503222 | 0.001749 | 0.001907 | 0.001963 |
| pmr_hub_test.test | RUN | 0.229288 | 0.489702 | 0.725448 | 0.001748 | 0.001748 | 0.002100 |
| pmr_flat_set_test.test | RUN | 0.180042 | 0.393215 | 0.648471 | 0.001886 | 0.001672 | 0.002014 |
| pmr_flat_map_test.test | RUN | 0.206718 | 0.451842 | 0.683644 | 0.001942 | 0.001738 | 0.002121 |
| pmr_devector_test.test | RUN | 0.145332 | 0.391554 | 0.543869 | 0.001837 | 0.002046 | 0.001982 |
| pmr_deque_test.test | RUN | 0.145424 | 0.313807 | 0.492573 | 0.001950 | 0.002030 | 0.001998 |
| pair_test.test | RUN | 0.346834 | 0.767521 | 1.231484 | 0.001692 | 0.002078 | 0.002094 |
| null_iterators_test.test | RUN | 0.528786 | 1.454386 | 1.865998 | 0.001872 | 0.001972 | 0.001913 |
| node_handle_test.test | RUN | 0.212875 | 1.844468 | 0.820970 | 0.001894 | 0.001906 | 0.001924 |
| node_allocator_test.test | RUN | 3.331141 | 17.721064 | 16.578791 | 0.013256 | 0.014104 | 0.013666 |
| new_delete_resource_test.test | RUN | 0.297302 | 1.088361 | 1.107204 | 0.003692 | 0.002790 | 0.002882 |
| nest_test.test | RUN | 0.712360 | 4.827964 | 3.648796 | 0.001886 | 0.002094 | 0.002196 |
| nest_api_test.test | RUN | 1.181765 | 9.444617 | 6.853835 | 0.003045 | 0.003250 | 0.003229 |
| monotonic_buffer_resource_test.test | RUN | 0.290193 | 1.963826 | 1.145539 | 0.001700 | 0.002037 | 0.002134 |
| memory_resource_test.test | RUN | 0.176258 | 0.534167 | 0.676335 | 0.002009 | 0.001843 | 0.002136 |
| map_test.test | RUN | 5.828804 | 30.169895 | 34.620531 | 0.014883 | 0.015003 | 0.014121 |
| list_test.test | RUN | 3.008886 | 15.452974 | 14.145192 | 0.034429 | 0.033813 | 0.035086 |
| is_constructible_test.test | RUN | 0.113244 | 0.202870 | 0.394192 | 0.000856 | 0.000883 | 0.002041 |
| insert_vs_emplace_test.test | RUN | 0.341972 | 1.329704 | 2.113857 | 0.002123 | 0.002004 | 0.001846 |
| hub_uses_allocator_test.test | RUN | 0.367755 | 1.148243 | 1.522568 | 0.002052 | 0.001714 | 0.002139 |
| hub_stability_test.test | RUN | 0.779871 | 4.987186 | 4.785757 | 0.002492 | 0.002499 | 0.002472 |
| hub_sort_test.test | RUN | 0.486668 | 2.355912 | 2.359856 | 0.635539 | 0.641363 | 0.621376 |
| hub_pocxx_test.test | RUN | 0.435985 | 2.683373 | 1.765199 | 0.001994 | 0.001899 | 0.001786 |
| hub_new_extended_alignment_test.test | RUN | 0.271494 | 0.846056 | 0.959285 | 0.002038 | 0.002038 | 0.001882 |
| hub_exception_safety_test.test | RUN | 0.904401 | 6.393985 | 4.720415 | 0.105356 | 0.113281 | 0.114456 |
| hub_empty_sort_test.test | RUN | 0.315865 | 0.794739 | 1.110368 | 0.002146 | 0.002164 | 0.002114 |
| hub_api_test.test | RUN | 2.871473 | 25.532404 | 15.837933 | 0.004793 | 0.004680 | 0.004546 |
| global_resource_test.test | RUN | 0.173004 | 0.527536 | 0.650196 | 0.002075 | 0.002042 | 0.002185 |
| flat_tree_test.test | RUN | 5.282138 | 38.509601 | 28.199044 | 0.001898 | 0.002090 | 0.001932 |
| flat_set_test.test | RUN | 6.631233 | 48.798445 | 35.953879 | 0.010846 | 0.010140 | 0.010757 |
| flat_set_adaptor_test.test | RUN | 4.967810 | 43.387593 | 30.079867 | 0.010905 | 0.010027 | 0.010337 |
| flat_map_test.test | RUN | 10.645460 | 71.765082 | 60.236578 | 0.011988 | 0.011814 | 0.010890 |
| flat_map_adaptor_test.test | RUN | 6.692696 | 52.862252 | 43.335709 | 0.010817 | 0.010294 | 0.011088 |
| explicit_inst_vector_test.test | RUN | 1.111577 | 7.270927 | 6.281491 | 0.001908 | 0.002116 | 0.001818 |
| explicit_inst_string_test.test | RUN | 1.489090 | 12.745744 | 9.009115 | 0.001884 | 0.001981 | 0.002040 |
| explicit_inst_static_vector_test.test | RUN | 0.154729 | 0.489757 | 0.652579 | 0.001869 | 0.002152 | 0.001918 |
| explicit_inst_stable_vector_test.test | RUN | 0.876860 | 4.691071 | 4.381257 | 0.002034 | 0.001944 | 0.002128 |
| explicit_inst_small_vector_test.test | RUN | 0.778152 | 4.182658 | 3.892705 | 0.001873 | 0.002187 | 0.001998 |
| explicit_inst_slist_test.test | RUN | 0.599154 | 3.809366 | 3.094643 | 0.002044 | 0.002180 | 0.002037 |
| explicit_inst_set_test.test | RUN | 0.837590 | 4.411375 | 3.711314 | 0.001970 | 0.001961 | 0.002034 |
| explicit_inst_map_test.test | RUN | 0.915654 | 4.617661 | 3.870922 | 0.001976 | 0.002144 | 0.002030 |
| explicit_inst_list_test.test | RUN | 0.207084 | 1.062874 | 1.009086 | 0.002014 | 0.001782 | 0.002246 |
| explicit_inst_flat_set_test.test | RUN | 4.398380 | 33.113074 | 21.849909 | 0.001928 | 0.002064 | 0.002106 |
| explicit_inst_flat_map_test.test | RUN | 4.765585 | 34.148920 | 24.803899 | 0.001950 | 0.001833 | 0.002094 |
| explicit_inst_devector_test.test | RUN | 0.630655 | 4.159973 | 3.282696 | 0.001759 | 0.002094 | 0.002011 |
| explicit_inst_deque_test.test | RUN | 0.652940 | 4.491666 | 3.489432 | 0.002084 | 0.002068 | 0.001785 |
| devector_test.test | RUN | 8.580347 | 52.099176 | 43.570101 | 0.004336 | 0.003893 | 0.005437 |
| devector_options_test.test | RUN | 0.402897 | 2.534795 | 1.860473 | 0.002442 | 0.002342 | 0.002506 |
| deque_test.test | RUN | 5.064264 | 31.499471 | 22.845411 | 0.424836 | 0.431068 | 0.549737 |
| deque_options_test.test | RUN | 0.334385 | 0.912627 | 1.451847 | 0.002060 | 0.002258 | 0.002275 |
| copy_move_algo_test.test | RUN | 0.306190 | 1.199580 | 1.281670 | 0.002294 | 0.001939 | 0.002108 |
| common_iterator_test.test | RUN | 0.025267 | 0.062481 | 0.060955 | 0.000857 | 0.000781 | 0.001923 |
| boost_iterator_comp_test.test | RUN | 0.459186 | 1.391093 | 1.831991 | 0.002093 | 0.002086 | 0.002104 |
| allocator_traits_test.test | RUN | 0.274084 | 0.646614 | 0.945004 | 0.001878 | 0.002096 | 0.002228 |
| alloc_full_test.test | RUN | 0.284604 | 1.266242 | 1.284448 | 0.005940 | 0.006174 | 0.005820 |
| alloc_basic_test.test | RUN | 0.245667 | 0.923066 | 1.005435 | 0.002140 | 0.002380 | 0.001852 |
| adaptive_pool_test.test | RUN | 3.026474 | 12.757225 | 15.739142 | 0.012500 | 0.011652 | 0.012598 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.994× | 1.002×, 0.986× | 1.022× |
| clang | 1.057× | 1.064×, 1.050× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45850603565).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 2 | 0.013632s | 0.012287s | 0.013478s | byte equality observed |
| alloc_basic_test.test | 10 | 0.001277s | 0.001263s | 0.001289s | byte equality observed |
| alloc_full_test.test | 6 | 0.003829s | 0.003832s | 0.003996s | byte equality observed |
| allocator_traits_test.test | 10 | 0.001161s | 0.001180s | 0.001164s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.001247s | 0.001253s | 0.001205s | byte equality observed |
| common_iterator_test.test | 10 | 0.000571s | 0.000558s | 0.001229s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001446s | 0.001406s | 0.001365s | byte equality observed |
| deque_options_test.test | 10 | 0.001318s | 0.001332s | 0.001286s | byte equality observed |
| deque_test.test | 1 | 0.472208s | 0.472546s | 0.583292s | byte equality observed |
| devector_options_test.test | 9 | 0.001429s | 0.001306s | 0.001313s | byte equality observed |
| devector_test.test | 4 | 0.003652s | 0.003616s | 0.004903s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.001141s | 0.001136s | 0.001140s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.001142s | 0.001122s | 0.001150s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.001146s | 0.001138s | 0.001151s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.001139s | 0.001150s | 0.001144s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.001156s | 0.001141s | 0.001143s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.001146s | 0.001140s | 0.001137s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.001150s | 0.001159s | 0.001141s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.001154s | 0.001152s | 0.001123s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.001151s | 0.001149s | 0.001146s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.001159s | 0.001169s | 0.001149s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.001131s | 0.001135s | 0.001132s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.001151s | 0.001151s | 0.001143s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.001149s | 0.001139s | 0.001160s | byte equality observed |
| flat_map_adaptor_test.test | 3 | 0.007102s | 0.006826s | 0.006870s | byte equality observed |
| flat_map_test.test | 3 | 0.007622s | 0.007316s | 0.007154s | byte equality observed |
| flat_set_adaptor_test.test | 3 | 0.007173s | 0.006477s | 0.007076s | byte equality observed |
| flat_set_test.test | 3 | 0.007071s | 0.006265s | 0.006941s | byte equality observed |
| flat_tree_test.test | 10 | 0.001151s | 0.001154s | 0.001141s | byte equality observed |
| global_resource_test.test | 10 | 0.001194s | 0.001184s | 0.001173s | byte equality observed |
| hub_api_test.test | 6 | 0.003306s | 0.002765s | 0.002706s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.001160s | 0.001154s | 0.001142s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.075332s | 0.082183s | 0.076037s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.001267s | 0.001299s | 0.001198s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.001249s | 0.001274s | 0.001179s | byte equality observed |
| hub_sort_test.test | 1 | 0.521230s | 0.522023s | 0.491769s | byte equality observed |
| hub_stability_test.test | 10 | 0.001414s | 0.001403s | 0.001495s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.001143s | 0.001137s | 0.001155s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.001198s | 0.001160s | 0.001193s | byte equality observed |
| is_constructible_test.test | 10 | 0.000537s | 0.000521s | 0.001188s | byte equality observed |
| list_test.test | 1 | 0.021659s | 0.020982s | 0.021619s | byte equality observed |
| map_test.test | 2 | 0.009574s | 0.009580s | 0.009448s | byte equality observed |
| memory_resource_test.test | 10 | 0.001165s | 0.001152s | 0.001192s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.001164s | 0.001183s | 0.001197s | byte equality observed |
| nest_api_test.test | 9 | 0.001949s | 0.001970s | 0.002007s | byte equality observed |
| nest_test.test | 10 | 0.001172s | 0.001186s | 0.001198s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001708s | 0.001696s | 0.001698s | byte equality observed |
| node_allocator_test.test | 3 | 0.008828s | 0.008506s | 0.008694s | byte equality observed |
| node_handle_test.test | 10 | 0.001175s | 0.001137s | 0.001186s | byte equality observed |
| null_iterators_test.test | 10 | 0.001157s | 0.001129s | 0.001167s | byte equality observed |
| pair_test.test | 10 | 0.001146s | 0.001142s | 0.001158s | byte equality observed |
| pmr_deque_test.test | 10 | 0.001126s | 0.001111s | 0.001145s | byte equality observed |
| pmr_devector_test.test | 10 | 0.001124s | 0.001124s | 0.001162s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.001127s | 0.001114s | 0.001140s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.001138s | 0.001126s | 0.001152s | byte equality observed |
| pmr_hub_test.test | 10 | 0.001143s | 0.001119s | 0.001150s | byte equality observed |
| pmr_list_test.test | 10 | 0.001151s | 0.001120s | 0.001149s | byte equality observed |
| pmr_map_test.test | 10 | 0.001135s | 0.001127s | 0.001165s | byte equality observed |
| pmr_nest_test.test | 10 | 0.001142s | 0.001122s | 0.001162s | byte equality observed |
| pmr_set_test.test | 10 | 0.001148s | 0.001131s | 0.001185s | byte equality observed |
| pmr_slist_test.test | 10 | 0.001153s | 0.001116s | 0.001197s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.001143s | 0.001125s | 0.001280s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.001159s | 0.001142s | 0.001248s | byte equality observed |
| pmr_string_test.test | 10 | 0.000556s | 0.000531s | 0.001285s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000548s | 0.000530s | 0.001221s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.001227s | 0.001185s | 0.001222s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.001217s | 0.001159s | 0.001274s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.001212s | 0.001220s | 0.001230s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.001234s | 0.001307s | 0.001280s | byte equality observed |
| segtor_options_test.test | 10 | 0.001276s | 0.001257s | 0.001258s | byte equality observed |
| segtor_test.test | 1 | 0.445456s | 0.435359s | 0.461499s | byte equality observed |
| set_test.test | 2 | 0.013406s | 0.011793s | 0.013206s | byte equality observed |
| slist_test.test | 1 | 0.020449s | 0.020387s | 0.020382s | byte equality observed |
| small_vector_options_test.test | 10 | 0.001315s | 0.001283s | 0.001247s | byte equality observed |
| small_vector_test.test | 5 | 0.002419s | 0.002244s | 0.004124s | byte equality observed |
| stable_vector_test.test | 1 | 0.029346s | 0.029818s | 0.030923s | byte equality observed |
| static_vector_options_test.test | 10 | 0.001254s | 0.001232s | 0.001235s | byte equality observed |
| static_vector_test.test | 10 | 0.001620s | 0.001498s | 0.001551s | byte equality observed |
| string_options_test.test | 10 | 0.001249s | 0.001219s | 0.001199s | byte equality observed |
| string_test.test | 2 | 0.014974s | 0.015626s | 0.014956s | byte equality observed |
| string_view_compat_test.test | 10 | 0.001177s | 0.001199s | 0.001145s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.001225s | 0.001233s | 0.001200s | byte equality observed |
| throw_exception_test.test | 10 | 0.001154s | 0.001161s | 0.001122s | byte equality observed |
| tree_test.test | 10 | 0.001156s | 0.001159s | 0.001129s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.001227s | 0.001230s | 0.001197s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.001162s | 0.001159s | 0.001118s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000560s | 0.000551s | 0.001106s | byte equality observed |
| vector_options_test.test | 10 | 0.001320s | 0.001323s | 0.001291s | byte equality observed |
| vector_test.test | 4 | 0.003963s | 0.003893s | 0.005555s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45850603565).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
