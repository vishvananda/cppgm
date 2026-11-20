# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 8.105084 | 43.088404 | 39.453639 | 0.007130 | 0.006744 | 0.009752 |
| vector_options_test.test | RUN | 0.414511 | 1.993353 | 1.760413 | 0.002392 | 0.002338 | 0.002400 |
| uses_allocator_test.test | RUN | 0.078788 | 0.168343 | 0.249671 | 0.000859 | 0.000753 | 0.002039 |
| uses_allocator_construction_test.test | RUN | 0.232819 | 0.629743 | 0.888280 | 0.002032 | 0.001924 | 0.002176 |
| unsynchronized_pool_resource_test.test | RUN | 0.292888 | 1.830280 | 1.063029 | 0.002417 | 0.001915 | 0.002250 |
| tree_test.test | RUN | 1.221479 | 6.411486 | 5.814179 | 0.002002 | 0.002080 | 0.001996 |
| throw_exception_test.test | RUN | 0.175710 | 0.394162 | 0.533586 | 0.002130 | 0.002060 | 0.002146 |
| synchronized_pool_resource_test.test | RUN | 0.292597 | 1.857549 | 1.079211 | 0.002139 | 0.002336 | 0.002146 |
| string_view_compat_test.test | RUN | 0.480813 | 3.753156 | 2.057833 | 0.001723 | 0.002308 | 0.002057 |
| string_test.test | RUN | 2.008383 | 13.912414 | 10.815586 | 0.023146 | 0.021549 | 0.022637 |
| string_options_test.test | RUN | 0.399160 | 2.867463 | 1.784038 | 0.002144 | 0.002186 | 0.002161 |
| static_vector_test.test | RUN | 2.051651 | 11.480885 | 10.617084 | 0.002895 | 0.002763 | 0.002980 |
| static_vector_options_test.test | RUN | 0.279935 | 0.793027 | 1.068090 | 0.001985 | 0.002221 | 0.002220 |
| stable_vector_test.test | RUN | 4.457218 | 23.356309 | 20.226482 | 0.037482 | 0.036493 | 0.039003 |
| small_vector_test.test | RUN | 3.062362 | 16.497954 | 14.868171 | 0.004290 | 0.004060 | 0.006990 |
| small_vector_options_test.test | RUN | 0.487643 | 2.070538 | 2.013026 | 0.002400 | 0.002330 | 0.002345 |
| slist_test.test | RUN | 2.894454 | 14.762319 | 13.319482 | 0.033532 | 0.032833 | 0.033532 |
| set_test.test | RUN | 4.385850 | 27.923219 | 23.587172 | 0.019330 | 0.017535 | 0.019889 |
| segtor_test.test | RUN | 5.336382 | 29.928177 | 26.092614 | 0.859792 | 0.928788 | 0.918819 |
| segtor_options_test.test | RUN | 0.340869 | 0.919396 | 1.225965 | 0.002128 | 0.002392 | 0.002263 |
| scoped_allocator_usage_test.test | RUN | 1.074360 | 4.687947 | 4.635901 | 0.002060 | 0.002034 | 0.002034 |
| scoped_allocator_adaptor_test.test | RUN | 0.529973 | 1.378216 | 2.156516 | 0.002082 | 0.002000 | 0.001951 |
| resource_adaptor_test.test | RUN | 0.261068 | 0.785936 | 0.946227 | 0.002112 | 0.001948 | 0.002218 |
| polymorphic_allocator_test.test | RUN | 0.217993 | 0.650094 | 0.786610 | 0.001966 | 0.001962 | 0.001795 |
| pmr_vector_test.test | RUN | 0.123655 | 0.255139 | 0.418964 | 0.000852 | 0.000917 | 0.001879 |
| pmr_string_test.test | RUN | 0.246060 | 0.517636 | 0.848863 | 0.000862 | 0.000932 | 0.001658 |
| pmr_stable_vector_test.test | RUN | 0.261908 | 0.806044 | 1.089105 | 0.001937 | 0.002076 | 0.002134 |
| pmr_small_vector_test.test | RUN | 0.145800 | 0.354598 | 0.499806 | 0.001761 | 0.001877 | 0.002038 |
| pmr_slist_test.test | RUN | 0.205975 | 1.045730 | 1.064875 | 0.002058 | 0.002086 | 0.002042 |
| pmr_set_test.test | RUN | 0.231238 | 0.588877 | 0.821408 | 0.001893 | 0.002117 | 0.002009 |
| pmr_nest_test.test | RUN | 0.182684 | 0.383947 | 0.545204 | 0.001969 | 0.002080 | 0.001988 |
| pmr_map_test.test | RUN | 0.233796 | 0.596948 | 0.831603 | 0.002058 | 0.002052 | 0.002102 |
| pmr_list_test.test | RUN | 0.161256 | 0.378798 | 0.588911 | 0.001968 | 0.002010 | 0.001986 |
| pmr_hub_test.test | RUN | 0.225836 | 0.513813 | 0.785591 | 0.001895 | 0.002284 | 0.002012 |
| pmr_flat_set_test.test | RUN | 0.173472 | 0.380187 | 0.588142 | 0.001999 | 0.002082 | 0.002113 |
| pmr_flat_map_test.test | RUN | 0.208242 | 0.454238 | 0.641631 | 0.001582 | 0.001950 | 0.001914 |
| pmr_devector_test.test | RUN | 0.131087 | 0.366706 | 0.572540 | 0.001980 | 0.002134 | 0.002082 |
| pmr_deque_test.test | RUN | 0.136376 | 0.333931 | 0.487413 | 0.002000 | 0.002016 | 0.001752 |
| pair_test.test | RUN | 0.343415 | 0.813884 | 1.188658 | 0.001595 | 0.002110 | 0.001892 |
| null_iterators_test.test | RUN | 0.466706 | 1.468510 | 1.809207 | 0.001830 | 0.002156 | 0.002060 |
| node_handle_test.test | RUN | 0.232952 | 1.886094 | 0.801117 | 0.001990 | 0.002146 | 0.001945 |
| node_allocator_test.test | RUN | 3.345762 | 18.161856 | 16.350274 | 0.013644 | 0.013227 | 0.014007 |
| new_delete_resource_test.test | RUN | 0.290935 | 1.139988 | 1.082952 | 0.002841 | 0.002977 | 0.003007 |
| nest_test.test | RUN | 0.717157 | 5.089426 | 3.673604 | 0.002026 | 0.002065 | 0.002102 |
| nest_api_test.test | RUN | 1.212721 | 9.741881 | 7.272396 | 0.003254 | 0.003039 | 0.003280 |
| monotonic_buffer_resource_test.test | RUN | 0.289201 | 1.996707 | 1.113685 | 0.001943 | 0.002026 | 0.002006 |
| memory_resource_test.test | RUN | 0.178788 | 0.563459 | 0.675904 | 0.002029 | 0.002010 | 0.002032 |
| map_test.test | RUN | 5.784214 | 30.622780 | 34.511675 | 0.015087 | 0.015441 | 0.014198 |
| list_test.test | RUN | 3.063806 | 15.963164 | 14.074772 | 0.032995 | 0.034439 | 0.035371 |
| is_constructible_test.test | RUN | 0.119040 | 0.210643 | 0.392992 | 0.000936 | 0.000946 | 0.001962 |
| insert_vs_emplace_test.test | RUN | 0.344484 | 1.342392 | 1.994150 | 0.002245 | 0.002200 | 0.002135 |
| hub_uses_allocator_test.test | RUN | 0.382692 | 1.140640 | 1.498879 | 0.002042 | 0.001926 | 0.002192 |
| hub_stability_test.test | RUN | 0.809409 | 5.200476 | 4.838479 | 0.002264 | 0.002470 | 0.002518 |
| hub_sort_test.test | RUN | 0.527881 | 2.373022 | 2.332349 | 0.640264 | 0.608757 | 0.615105 |
| hub_pocxx_test.test | RUN | 0.427969 | 2.878762 | 1.813170 | 0.002117 | 0.001860 | 0.002276 |
| hub_new_extended_alignment_test.test | RUN | 0.265050 | 0.851303 | 0.984481 | 0.002078 | 0.002058 | 0.001992 |
| hub_exception_safety_test.test | RUN | 0.925387 | 6.389308 | 4.920398 | 0.104883 | 0.118027 | 0.114662 |
| hub_empty_sort_test.test | RUN | 0.317094 | 0.769284 | 1.238201 | 0.001962 | 0.002695 | 0.002040 |
| hub_api_test.test | RUN | 3.052582 | 26.440856 | 14.978478 | 0.005220 | 0.004641 | 0.004388 |
| global_resource_test.test | RUN | 0.181725 | 0.533010 | 0.641728 | 0.002120 | 0.002122 | 0.002042 |
| flat_tree_test.test | RUN | 5.322276 | 38.807190 | 28.447662 | 0.001914 | 0.001995 | 0.002094 |
| flat_set_test.test | RUN | 6.733279 | 50.210355 | 36.212290 | 0.010844 | 0.009931 | 0.010610 |
| flat_set_adaptor_test.test | RUN | 4.938247 | 44.528797 | 28.552215 | 0.010750 | 0.010330 | 0.010931 |
| flat_map_test.test | RUN | 10.728637 | 73.828474 | 60.244400 | 0.011893 | 0.011575 | 0.010698 |
| flat_map_adaptor_test.test | RUN | 6.732955 | 53.843031 | 43.258610 | 0.010854 | 0.010561 | 0.010742 |
| explicit_inst_vector_test.test | RUN | 1.106154 | 7.524726 | 6.607022 | 0.002072 | 0.002163 | 0.002088 |
| explicit_inst_string_test.test | RUN | 1.482657 | 12.984871 | 9.016013 | 0.002076 | 0.002010 | 0.001671 |
| explicit_inst_static_vector_test.test | RUN | 0.162429 | 0.519118 | 0.716425 | 0.002049 | 0.002209 | 0.002093 |
| explicit_inst_stable_vector_test.test | RUN | 0.892748 | 4.708167 | 4.295064 | 0.002000 | 0.002054 | 0.002028 |
| explicit_inst_small_vector_test.test | RUN | 0.751035 | 4.196372 | 3.829680 | 0.001998 | 0.002282 | 0.002106 |
| explicit_inst_slist_test.test | RUN | 0.578591 | 3.768466 | 3.045454 | 0.002183 | 0.002132 | 0.001965 |
| explicit_inst_set_test.test | RUN | 0.814274 | 4.416342 | 3.641695 | 0.001974 | 0.001984 | 0.001926 |
| explicit_inst_map_test.test | RUN | 0.880368 | 4.612098 | 3.976271 | 0.001780 | 0.002056 | 0.002104 |
| explicit_inst_list_test.test | RUN | 0.212003 | 1.062672 | 0.994713 | 0.002004 | 0.001943 | 0.001879 |
| explicit_inst_flat_set_test.test | RUN | 4.301176 | 32.979197 | 21.705041 | 0.002084 | 0.001896 | 0.002076 |
| explicit_inst_flat_map_test.test | RUN | 4.696283 | 34.267437 | 24.662624 | 0.001943 | 0.002076 | 0.001832 |
| explicit_inst_devector_test.test | RUN | 0.620338 | 4.291547 | 3.208428 | 0.001868 | 0.002154 | 0.002065 |
| explicit_inst_deque_test.test | RUN | 0.670537 | 4.724370 | 3.439773 | 0.002133 | 0.001832 | 0.002038 |
| devector_test.test | RUN | 8.563925 | 53.726562 | 41.570270 | 0.004304 | 0.004090 | 0.005373 |
| devector_options_test.test | RUN | 0.424994 | 2.594446 | 1.866306 | 0.002484 | 0.002458 | 0.002325 |
| deque_test.test | RUN | 4.993838 | 31.641756 | 25.891204 | 0.423491 | 0.432498 | 0.538668 |
| deque_options_test.test | RUN | 0.331580 | 0.909568 | 1.321276 | 0.002121 | 0.002242 | 0.002172 |
| copy_move_algo_test.test | RUN | 0.302500 | 1.210333 | 1.181259 | 0.002242 | 0.002412 | 0.002196 |
| common_iterator_test.test | RUN | 0.024167 | 0.059744 | 0.054689 | 0.000818 | 0.000981 | 0.001922 |
| boost_iterator_comp_test.test | RUN | 0.444044 | 1.367558 | 1.892309 | 0.001912 | 0.002140 | 0.002347 |
| allocator_traits_test.test | RUN | 0.264211 | 0.632736 | 0.985697 | 0.001779 | 0.002071 | 0.002177 |
| alloc_full_test.test | RUN | 0.290530 | 1.269050 | 1.310361 | 0.005705 | 0.006397 | 0.006343 |
| alloc_basic_test.test | RUN | 0.241719 | 0.925114 | 0.946039 | 0.001988 | 0.002360 | 0.002238 |
| adaptive_pool_test.test | RUN | 3.035694 | 13.370350 | 10.350568 | 0.012988 | 0.011827 | 0.013396 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.990× | 0.989×, 0.990× | 1.016× |
| clang | 1.043× | 1.046×, 1.040× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44612055398).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 2 | 0.013281s | 0.012266s | 0.013808s | byte equality observed |
| alloc_basic_test.test | 10 | 0.001280s | 0.001266s | 0.001276s | byte equality observed |
| alloc_full_test.test | 6 | 0.003824s | 0.003818s | 0.003952s | byte equality observed |
| allocator_traits_test.test | 10 | 0.001206s | 0.001165s | 0.001229s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.001254s | 0.001267s | 0.001247s | byte equality observed |
| common_iterator_test.test | 10 | 0.000580s | 0.000576s | 0.001270s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001463s | 0.001399s | 0.001388s | byte equality observed |
| deque_options_test.test | 10 | 0.001320s | 0.001311s | 0.001368s | byte equality observed |
| deque_test.test | 1 | 0.484563s | 0.472947s | 0.587943s | byte equality observed |
| devector_options_test.test | 10 | 0.001424s | 0.001321s | 0.001371s | byte equality observed |
| devector_test.test | 4 | 0.003731s | 0.003676s | 0.004976s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.001135s | 0.001176s | 0.001169s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.001120s | 0.001168s | 0.001146s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.001130s | 0.001163s | 0.001167s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.001145s | 0.001182s | 0.001161s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.001120s | 0.001135s | 0.001144s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.001126s | 0.001154s | 0.001150s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.001135s | 0.001162s | 0.001159s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.001146s | 0.001150s | 0.001139s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.001136s | 0.001165s | 0.001155s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.001154s | 0.001146s | 0.001142s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.001118s | 0.001129s | 0.001132s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.001147s | 0.001157s | 0.001166s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.001129s | 0.001142s | 0.001160s | byte equality observed |
| flat_map_adaptor_test.test | 3 | 0.007239s | 0.006862s | 0.007018s | byte equality observed |
| flat_map_test.test | 3 | 0.007760s | 0.007387s | 0.007371s | byte equality observed |
| flat_set_adaptor_test.test | 3 | 0.007230s | 0.006640s | 0.007326s | byte equality observed |
| flat_set_test.test | 3 | 0.007180s | 0.006370s | 0.007231s | byte equality observed |
| flat_tree_test.test | 10 | 0.001143s | 0.001152s | 0.001225s | byte equality observed |
| global_resource_test.test | 10 | 0.001178s | 0.001213s | 0.001227s | byte equality observed |
| hub_api_test.test | 6 | 0.003346s | 0.002759s | 0.002743s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.001154s | 0.001148s | 0.001190s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.075650s | 0.082115s | 0.077381s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.001238s | 0.001303s | 0.001237s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.001269s | 0.001232s | 0.001189s | byte equality observed |
| hub_sort_test.test | 1 | 0.526795s | 0.524011s | 0.497906s | byte equality observed |
| hub_stability_test.test | 10 | 0.001451s | 0.001417s | 0.001532s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.001160s | 0.001143s | 0.001181s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.001203s | 0.001185s | 0.001229s | byte equality observed |
| is_constructible_test.test | 10 | 0.000543s | 0.000531s | 0.001177s | byte equality observed |
| list_test.test | 1 | 0.021654s | 0.021164s | 0.021628s | byte equality observed |
| map_test.test | 2 | 0.009716s | 0.009649s | 0.009624s | byte equality observed |
| memory_resource_test.test | 10 | 0.001205s | 0.001201s | 0.001238s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.001187s | 0.001175s | 0.001225s | byte equality observed |
| nest_api_test.test | 9 | 0.001969s | 0.001971s | 0.002049s | byte equality observed |
| nest_test.test | 10 | 0.001205s | 0.001172s | 0.001237s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001744s | 0.001705s | 0.001736s | byte equality observed |
| node_allocator_test.test | 3 | 0.009169s | 0.008620s | 0.009048s | byte equality observed |
| node_handle_test.test | 10 | 0.001200s | 0.001154s | 0.001259s | byte equality observed |
| null_iterators_test.test | 10 | 0.001151s | 0.001129s | 0.001168s | byte equality observed |
| pair_test.test | 10 | 0.001151s | 0.001136s | 0.001194s | byte equality observed |
| pmr_deque_test.test | 10 | 0.001141s | 0.001141s | 0.001164s | byte equality observed |
| pmr_devector_test.test | 10 | 0.001158s | 0.001124s | 0.001174s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.001145s | 0.001125s | 0.001150s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.001159s | 0.001117s | 0.001174s | byte equality observed |
| pmr_hub_test.test | 10 | 0.001158s | 0.001137s | 0.001163s | byte equality observed |
| pmr_list_test.test | 10 | 0.001150s | 0.001134s | 0.001188s | byte equality observed |
| pmr_map_test.test | 10 | 0.001150s | 0.001150s | 0.001167s | byte equality observed |
| pmr_nest_test.test | 10 | 0.001156s | 0.001132s | 0.001182s | byte equality observed |
| pmr_set_test.test | 10 | 0.001165s | 0.001133s | 0.001205s | byte equality observed |
| pmr_slist_test.test | 10 | 0.001165s | 0.001141s | 0.001294s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.001164s | 0.001142s | 0.001280s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.001155s | 0.001182s | 0.001253s | byte equality observed |
| pmr_string_test.test | 10 | 0.000556s | 0.000554s | 0.001284s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000551s | 0.000565s | 0.001203s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.001247s | 0.001236s | 0.001223s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.001247s | 0.001214s | 0.001235s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.001285s | 0.001195s | 0.001258s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.001291s | 0.001232s | 0.001238s | byte equality observed |
| segtor_options_test.test | 10 | 0.001237s | 0.001275s | 0.001245s | byte equality observed |
| segtor_test.test | 1 | 0.462898s | 0.443121s | 0.438433s | byte equality observed |
| set_test.test | 2 | 0.013533s | 0.011866s | 0.013360s | byte equality observed |
| slist_test.test | 1 | 0.020674s | 0.020492s | 0.020608s | byte equality observed |
| small_vector_options_test.test | 10 | 0.001336s | 0.001327s | 0.001348s | byte equality observed |
| small_vector_test.test | 5 | 0.002391s | 0.002291s | 0.004156s | byte equality observed |
| stable_vector_test.test | 1 | 0.029156s | 0.029560s | 0.030826s | byte equality observed |
| static_vector_options_test.test | 10 | 0.001294s | 0.001246s | 0.001304s | byte equality observed |
| static_vector_test.test | 10 | 0.001583s | 0.001522s | 0.001560s | byte equality observed |
| string_options_test.test | 10 | 0.001213s | 0.001241s | 0.001233s | byte equality observed |
| string_test.test | 2 | 0.015064s | 0.015425s | 0.015017s | byte equality observed |
| string_view_compat_test.test | 10 | 0.001190s | 0.001204s | 0.001234s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.001228s | 0.001242s | 0.001267s | byte equality observed |
| throw_exception_test.test | 10 | 0.001148s | 0.001162s | 0.001168s | byte equality observed |
| tree_test.test | 10 | 0.001151s | 0.001152s | 0.001171s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.001233s | 0.001242s | 0.001236s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.001154s | 0.001162s | 0.001170s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000545s | 0.000554s | 0.001178s | byte equality observed |
| vector_options_test.test | 10 | 0.001365s | 0.001370s | 0.001350s | byte equality observed |
| vector_test.test | 4 | 0.003938s | 0.003942s | 0.005714s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44612055398).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
