# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 7.835214 | 41.902887 | 38.708666 | 0.007018 | 0.006925 | 0.009805 |
| vector_options_test.test | RUN | 0.428934 | 1.923277 | 1.742486 | 0.002326 | 0.002266 | 0.002312 |
| uses_allocator_test.test | RUN | 0.082173 | 0.165752 | 0.246027 | 0.000838 | 0.000872 | 0.002016 |
| uses_allocator_construction_test.test | RUN | 0.248822 | 0.636387 | 0.871045 | 0.001873 | 0.001840 | 0.002016 |
| unsynchronized_pool_resource_test.test | RUN | 0.310226 | 1.825024 | 1.140647 | 0.002043 | 0.002174 | 0.002172 |
| tree_test.test | RUN | 1.189663 | 6.281636 | 5.634714 | 0.001875 | 0.002022 | 0.001741 |
| throw_exception_test.test | RUN | 0.174747 | 0.387763 | 0.587448 | 0.001935 | 0.001882 | 0.002048 |
| synchronized_pool_resource_test.test | RUN | 0.309885 | 1.798049 | 1.123621 | 0.002071 | 0.002059 | 0.002188 |
| string_view_compat_test.test | RUN | 0.515819 | 3.592797 | 2.144920 | 0.002040 | 0.002174 | 0.002124 |
| string_test.test | RUN | 1.984499 | 13.573187 | 10.686274 | 0.023591 | 0.021693 | 0.022382 |
| string_options_test.test | RUN | 0.386834 | 2.911747 | 1.793202 | 0.001947 | 0.002231 | 0.002129 |
| static_vector_test.test | RUN | 2.038886 | 11.225395 | 10.481089 | 0.002871 | 0.002783 | 0.002970 |
| static_vector_options_test.test | RUN | 0.274166 | 0.777305 | 1.052672 | 0.002065 | 0.002074 | 0.002098 |
| stable_vector_test.test | RUN | 4.473780 | 22.600603 | 19.994119 | 0.038128 | 0.037389 | 0.039062 |
| small_vector_test.test | RUN | 2.999013 | 16.193875 | 14.235858 | 0.004176 | 0.004104 | 0.006831 |
| small_vector_options_test.test | RUN | 0.473498 | 1.965579 | 2.080232 | 0.002164 | 0.002317 | 0.001956 |
| slist_test.test | RUN | 2.826709 | 14.227385 | 13.128049 | 0.033536 | 0.033331 | 0.033174 |
| set_test.test | RUN | 4.314209 | 26.688045 | 22.859869 | 0.020025 | 0.018132 | 0.019182 |
| segtor_test.test | RUN | 5.302997 | 29.029674 | 25.300775 | 0.868795 | 0.911156 | 0.905965 |
| segtor_options_test.test | RUN | 0.318341 | 0.901808 | 1.228232 | 0.002104 | 0.002090 | 0.002168 |
| scoped_allocator_usage_test.test | RUN | 1.037196 | 4.468181 | 4.596830 | 0.002184 | 0.001906 | 0.002085 |
| scoped_allocator_adaptor_test.test | RUN | 0.479943 | 1.338696 | 2.154043 | 0.001886 | 0.001938 | 0.002166 |
| resource_adaptor_test.test | RUN | 0.260740 | 0.771965 | 0.960048 | 0.002008 | 0.001798 | 0.001990 |
| polymorphic_allocator_test.test | RUN | 0.221526 | 0.633953 | 0.794191 | 0.001936 | 0.001880 | 0.002141 |
| pmr_vector_test.test | RUN | 0.121726 | 0.237721 | 0.417293 | 0.000720 | 0.000876 | 0.002009 |
| pmr_string_test.test | RUN | 0.245567 | 0.503218 | 0.798233 | 0.000697 | 0.000848 | 0.002017 |
| pmr_stable_vector_test.test | RUN | 0.256356 | 0.793281 | 1.075604 | 0.001802 | 0.001955 | 0.001807 |
| pmr_small_vector_test.test | RUN | 0.140991 | 0.339358 | 0.552916 | 0.001475 | 0.001998 | 0.001625 |
| pmr_slist_test.test | RUN | 0.199577 | 1.015028 | 1.044601 | 0.002022 | 0.002090 | 0.002082 |
| pmr_set_test.test | RUN | 0.225405 | 0.570990 | 0.849992 | 0.001708 | 0.002123 | 0.001840 |
| pmr_nest_test.test | RUN | 0.180606 | 0.381850 | 0.607418 | 0.001906 | 0.002110 | 0.001913 |
| pmr_map_test.test | RUN | 0.239800 | 0.566659 | 0.844335 | 0.001820 | 0.001876 | 0.001958 |
| pmr_list_test.test | RUN | 0.165901 | 0.367186 | 0.544043 | 0.001846 | 0.001796 | 0.001989 |
| pmr_hub_test.test | RUN | 0.225957 | 0.492053 | 0.701010 | 0.001709 | 0.001772 | 0.002042 |
| pmr_flat_set_test.test | RUN | 0.178991 | 0.381686 | 0.593458 | 0.001809 | 0.001876 | 0.002141 |
| pmr_flat_map_test.test | RUN | 0.208678 | 0.443867 | 0.724657 | 0.001874 | 0.001772 | 0.001688 |
| pmr_devector_test.test | RUN | 0.134912 | 0.379584 | 0.543819 | 0.001878 | 0.001859 | 0.001778 |
| pmr_deque_test.test | RUN | 0.139850 | 0.314340 | 0.544822 | 0.001624 | 0.002088 | 0.001762 |
| pair_test.test | RUN | 0.345314 | 0.750808 | 1.174097 | 0.002030 | 0.002124 | 0.002022 |
| null_iterators_test.test | RUN | 0.532103 | 1.449741 | 1.965760 | 0.001984 | 0.001972 | 0.001995 |
| node_handle_test.test | RUN | 0.204586 | 1.828759 | 0.806061 | 0.001780 | 0.002119 | 0.001988 |
| node_allocator_test.test | RUN | 3.268558 | 17.850613 | 16.290034 | 0.013546 | 0.013390 | 0.013566 |
| new_delete_resource_test.test | RUN | 0.293483 | 1.130494 | 1.010060 | 0.002947 | 0.002929 | 0.002975 |
| nest_test.test | RUN | 0.717285 | 4.799902 | 3.714346 | 0.001903 | 0.002256 | 0.002025 |
| nest_api_test.test | RUN | 1.163589 | 9.360341 | 7.209906 | 0.003043 | 0.003304 | 0.003307 |
| monotonic_buffer_resource_test.test | RUN | 0.294977 | 1.944124 | 1.104304 | 0.001966 | 0.002167 | 0.002152 |
| memory_resource_test.test | RUN | 0.183706 | 0.570551 | 0.664225 | 0.001921 | 0.001933 | 0.002084 |
| map_test.test | RUN | 5.693402 | 29.983371 | 34.452733 | 0.014197 | 0.014978 | 0.014098 |
| list_test.test | RUN | 3.002137 | 15.387383 | 13.935103 | 0.033478 | 0.034456 | 0.034671 |
| is_constructible_test.test | RUN | 0.110561 | 0.228618 | 0.395577 | 0.000896 | 0.000794 | 0.002068 |
| insert_vs_emplace_test.test | RUN | 0.354417 | 1.342793 | 2.186250 | 0.002018 | 0.002206 | 0.002104 |
| hub_uses_allocator_test.test | RUN | 0.358969 | 1.100462 | 1.449034 | 0.002098 | 0.002086 | 0.001920 |
| hub_stability_test.test | RUN | 0.787632 | 4.934942 | 4.707812 | 0.002520 | 0.002656 | 0.002512 |
| hub_sort_test.test | RUN | 0.506380 | 2.343897 | 2.313125 | 0.632186 | 0.631853 | 0.607311 |
| hub_pocxx_test.test | RUN | 0.457610 | 2.676391 | 1.784209 | 0.002090 | 0.002102 | 0.001855 |
| hub_new_extended_alignment_test.test | RUN | 0.264896 | 0.821916 | 0.955321 | 0.002099 | 0.001946 | 0.001820 |
| hub_exception_safety_test.test | RUN | 0.872713 | 6.328276 | 4.693256 | 0.104644 | 0.116173 | 0.098000 |
| hub_empty_sort_test.test | RUN | 0.292899 | 0.781725 | 1.205148 | 0.001964 | 0.002098 | 0.002047 |
| hub_api_test.test | RUN | 2.853872 | 25.166113 | 15.707616 | 0.004717 | 0.004422 | 0.004368 |
| global_resource_test.test | RUN | 0.170666 | 0.524258 | 0.643396 | 0.002100 | 0.002178 | 0.002158 |
| flat_tree_test.test | RUN | 5.295538 | 38.056864 | 27.305873 | 0.001921 | 0.002082 | 0.001976 |
| flat_set_test.test | RUN | 6.569811 | 48.441910 | 36.654692 | 0.010915 | 0.009920 | 0.010200 |
| flat_set_adaptor_test.test | RUN | 4.917324 | 43.222453 | 28.406013 | 0.011233 | 0.010168 | 0.010646 |
| flat_map_test.test | RUN | 10.589467 | 71.727333 | 59.723299 | 0.011668 | 0.011632 | 0.010384 |
| flat_map_adaptor_test.test | RUN | 6.712214 | 52.762516 | 42.622450 | 0.010913 | 0.010836 | 0.010612 |
| explicit_inst_vector_test.test | RUN | 1.129825 | 7.256690 | 6.389647 | 0.001905 | 0.002110 | 0.001993 |
| explicit_inst_string_test.test | RUN | 1.457473 | 12.651375 | 8.802744 | 0.001847 | 0.001946 | 0.001951 |
| explicit_inst_static_vector_test.test | RUN | 0.160194 | 0.478449 | 0.689612 | 0.001519 | 0.002052 | 0.002090 |
| explicit_inst_stable_vector_test.test | RUN | 0.878632 | 4.495122 | 4.172774 | 0.001938 | 0.002094 | 0.001907 |
| explicit_inst_small_vector_test.test | RUN | 0.738292 | 4.090450 | 3.827986 | 0.002140 | 0.002091 | 0.002015 |
| explicit_inst_slist_test.test | RUN | 0.589867 | 3.686676 | 3.015932 | 0.001952 | 0.002076 | 0.002039 |
| explicit_inst_set_test.test | RUN | 0.803765 | 4.347634 | 3.573200 | 0.001876 | 0.002023 | 0.001936 |
| explicit_inst_map_test.test | RUN | 0.876834 | 4.509198 | 3.843564 | 0.001766 | 0.002045 | 0.002118 |
| explicit_inst_list_test.test | RUN | 0.204747 | 1.042652 | 0.981765 | 0.001888 | 0.002155 | 0.001894 |
| explicit_inst_flat_set_test.test | RUN | 4.336815 | 32.916385 | 21.318539 | 0.002021 | 0.002086 | 0.001944 |
| explicit_inst_flat_map_test.test | RUN | 4.715156 | 34.147838 | 24.000408 | 0.002019 | 0.002143 | 0.001964 |
| explicit_inst_devector_test.test | RUN | 0.615809 | 4.210342 | 3.061831 | 0.001669 | 0.002007 | 0.001968 |
| explicit_inst_deque_test.test | RUN | 0.643761 | 4.471400 | 3.257856 | 0.001962 | 0.002049 | 0.001830 |
| devector_test.test | RUN | 8.342034 | 53.124020 | 42.903302 | 0.004176 | 0.003912 | 0.005332 |
| devector_options_test.test | RUN | 0.405878 | 2.510636 | 2.006512 | 0.002256 | 0.002319 | 0.002401 |
| deque_test.test | RUN | 5.632360 | 26.979610 | 22.348931 | 0.426105 | 0.428714 | 0.554041 |
| deque_options_test.test | RUN | 0.328790 | 0.898125 | 1.289397 | 0.002080 | 0.001970 | 0.002179 |
| copy_move_algo_test.test | RUN | 0.298872 | 1.148194 | 1.291189 | 0.002088 | 0.002380 | 0.002225 |
| common_iterator_test.test | RUN | 0.024582 | 0.062166 | 0.061074 | 0.000796 | 0.000857 | 0.001809 |
| boost_iterator_comp_test.test | RUN | 0.437130 | 1.393965 | 1.810908 | 0.001972 | 0.001980 | 0.002012 |
| allocator_traits_test.test | RUN | 0.258628 | 0.633894 | 0.767751 | 0.001966 | 0.002012 | 0.002072 |
| alloc_full_test.test | RUN | 0.279511 | 1.245521 | 1.256851 | 0.005966 | 0.006050 | 0.006191 |
| alloc_basic_test.test | RUN | 0.238421 | 0.914190 | 0.950084 | 0.002007 | 0.002192 | 0.002201 |
| adaptive_pool_test.test | RUN | 2.160222 | 17.455515 | 15.977032 | 0.012735 | 0.011426 | 0.012630 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.002× | 0.998×, 1.006× | 0.997× |
| clang | 1.056× | 1.053×, 1.058× | 1.015× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46045514956).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 2 | 0.012890s | 0.012053s | 0.013283s | byte equality observed |
| alloc_basic_test.test | 10 | 0.001259s | 0.001287s | 0.001279s | byte equality observed |
| alloc_full_test.test | 5 | 0.003777s | 0.003789s | 0.003830s | byte equality observed |
| allocator_traits_test.test | 10 | 0.001166s | 0.001175s | 0.001184s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.001247s | 0.001283s | 0.001208s | byte equality observed |
| common_iterator_test.test | 10 | 0.000564s | 0.000586s | 0.001209s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001466s | 0.001363s | 0.001362s | byte equality observed |
| deque_options_test.test | 10 | 0.001310s | 0.001294s | 0.001273s | byte equality observed |
| deque_test.test | 1 | 0.467706s | 0.474562s | 0.577066s | byte equality observed |
| devector_options_test.test | 10 | 0.001415s | 0.001295s | 0.001317s | byte equality observed |
| devector_test.test | 4 | 0.003651s | 0.003565s | 0.004863s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.001133s | 0.001127s | 0.001123s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.001116s | 0.001113s | 0.001134s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.001123s | 0.001122s | 0.001124s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.001126s | 0.001130s | 0.001156s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.001109s | 0.001110s | 0.001125s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.001131s | 0.001119s | 0.001119s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.001133s | 0.001133s | 0.001116s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.001126s | 0.001133s | 0.001123s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.001125s | 0.001135s | 0.001131s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.001135s | 0.001141s | 0.001158s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.001116s | 0.001127s | 0.001119s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.001123s | 0.001167s | 0.001138s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.001131s | 0.001132s | 0.001147s | byte equality observed |
| flat_map_adaptor_test.test | 3 | 0.007065s | 0.006762s | 0.006839s | byte equality observed |
| flat_map_test.test | 3 | 0.007633s | 0.007228s | 0.007021s | byte equality observed |
| flat_set_adaptor_test.test | 3 | 0.007184s | 0.006439s | 0.007038s | byte equality observed |
| flat_set_test.test | 3 | 0.007057s | 0.006224s | 0.006950s | byte equality observed |
| flat_tree_test.test | 10 | 0.001143s | 0.001136s | 0.001145s | byte equality observed |
| global_resource_test.test | 10 | 0.001177s | 0.001185s | 0.001167s | byte equality observed |
| hub_api_test.test | 6 | 0.003288s | 0.002745s | 0.002693s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.001148s | 0.001144s | 0.001149s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.074681s | 0.080866s | 0.072708s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.001275s | 0.001264s | 0.001208s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.001212s | 0.001249s | 0.001173s | byte equality observed |
| hub_sort_test.test | 1 | 0.516189s | 0.509894s | 0.490768s | byte equality observed |
| hub_stability_test.test | 10 | 0.001399s | 0.001417s | 0.001460s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.001125s | 0.001140s | 0.001154s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.001168s | 0.001188s | 0.001176s | byte equality observed |
| is_constructible_test.test | 10 | 0.000518s | 0.000551s | 0.001130s | byte equality observed |
| list_test.test | 1 | 0.021261s | 0.021101s | 0.021268s | byte equality observed |
| map_test.test | 3 | 0.009422s | 0.009374s | 0.009252s | byte equality observed |
| memory_resource_test.test | 10 | 0.001147s | 0.001160s | 0.001164s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.001158s | 0.001175s | 0.001174s | byte equality observed |
| nest_api_test.test | 9 | 0.001946s | 0.001965s | 0.001991s | byte equality observed |
| nest_test.test | 10 | 0.001173s | 0.001190s | 0.001170s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001700s | 0.001735s | 0.001680s | byte equality observed |
| node_allocator_test.test | 3 | 0.008823s | 0.008595s | 0.008602s | byte equality observed |
| node_handle_test.test | 10 | 0.001172s | 0.001157s | 0.001141s | byte equality observed |
| null_iterators_test.test | 10 | 0.001156s | 0.001146s | 0.001134s | byte equality observed |
| pair_test.test | 10 | 0.001148s | 0.001145s | 0.001145s | byte equality observed |
| pmr_deque_test.test | 10 | 0.001127s | 0.001157s | 0.001134s | byte equality observed |
| pmr_devector_test.test | 10 | 0.001130s | 0.001159s | 0.001148s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.001139s | 0.001148s | 0.001148s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.001117s | 0.001132s | 0.001152s | byte equality observed |
| pmr_hub_test.test | 10 | 0.001116s | 0.001130s | 0.001157s | byte equality observed |
| pmr_list_test.test | 10 | 0.001125s | 0.001153s | 0.001153s | byte equality observed |
| pmr_map_test.test | 10 | 0.001123s | 0.001149s | 0.001142s | byte equality observed |
| pmr_nest_test.test | 10 | 0.001129s | 0.001134s | 0.001179s | byte equality observed |
| pmr_set_test.test | 10 | 0.001128s | 0.001152s | 0.001204s | byte equality observed |
| pmr_slist_test.test | 10 | 0.001126s | 0.001138s | 0.001217s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.001122s | 0.001134s | 0.001238s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.001151s | 0.001144s | 0.001194s | byte equality observed |
| pmr_string_test.test | 10 | 0.000536s | 0.000550s | 0.001303s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000546s | 0.000549s | 0.001219s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.001202s | 0.001195s | 0.001224s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.001219s | 0.001219s | 0.001240s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.001219s | 0.001260s | 0.001216s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.001234s | 0.001229s | 0.001243s | byte equality observed |
| segtor_options_test.test | 10 | 0.001229s | 0.001267s | 0.001238s | byte equality observed |
| segtor_test.test | 1 | 0.457645s | 0.470856s | 0.458315s | byte equality observed |
| set_test.test | 2 | 0.013352s | 0.011724s | 0.013021s | byte equality observed |
| slist_test.test | 1 | 0.020237s | 0.020043s | 0.020161s | byte equality observed |
| small_vector_options_test.test | 10 | 0.001246s | 0.001216s | 0.001248s | byte equality observed |
| small_vector_test.test | 5 | 0.002361s | 0.002219s | 0.004077s | byte equality observed |
| stable_vector_test.test | 1 | 0.029124s | 0.029524s | 0.030652s | byte equality observed |
| static_vector_options_test.test | 10 | 0.001212s | 0.001163s | 0.001234s | byte equality observed |
| static_vector_test.test | 10 | 0.001558s | 0.001445s | 0.001516s | byte equality observed |
| string_options_test.test | 10 | 0.001191s | 0.001177s | 0.001183s | byte equality observed |
| string_test.test | 2 | 0.014922s | 0.015562s | 0.014825s | byte equality observed |
| string_view_compat_test.test | 10 | 0.001154s | 0.001139s | 0.001143s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.001220s | 0.001182s | 0.001184s | byte equality observed |
| throw_exception_test.test | 10 | 0.001130s | 0.001115s | 0.001119s | byte equality observed |
| tree_test.test | 10 | 0.001134s | 0.001110s | 0.001112s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.001196s | 0.001186s | 0.001179s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.001128s | 0.001136s | 0.001114s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000537s | 0.000528s | 0.001085s | byte equality observed |
| vector_options_test.test | 10 | 0.001298s | 0.001311s | 0.001285s | byte equality observed |
| vector_test.test | 4 | 0.003926s | 0.003846s | 0.005519s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46045514956).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
