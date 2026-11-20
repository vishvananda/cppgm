# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 5.892710 | 29.977397 | 24.514818 | 0.004624 | 0.004573 | 0.006272 |
| vector_options_test.test | RUN | 0.264948 | 1.282856 | 0.971689 | 0.001485 | 0.001520 | 0.001476 |
| uses_allocator_test.test | RUN | 0.043647 | 0.101257 | 0.124792 | 0.000476 | 0.000552 | 0.001199 |
| uses_allocator_construction_test.test | RUN | 0.135880 | 0.385194 | 0.444420 | 0.001137 | 0.001415 | 0.001376 |
| unsynchronized_pool_resource_test.test | RUN | 0.180517 | 1.207476 | 0.585238 | 0.001143 | 0.001342 | 0.001402 |
| tree_test.test | RUN | 0.839243 | 4.485436 | 3.307439 | 0.001232 | 0.001279 | 0.001226 |
| throw_exception_test.test | RUN | 0.098462 | 0.249344 | 0.290467 | 0.001134 | 0.001253 | 0.001192 |
| synchronized_pool_resource_test.test | RUN | 0.174201 | 1.192547 | 0.576545 | 0.001262 | 0.001420 | 0.001456 |
| string_view_compat_test.test | RUN | 0.291817 | 2.380502 | 1.114066 | 0.001281 | 0.001305 | 0.001247 |
| string_test.test | RUN | 1.345536 | 9.397182 | 6.335410 | 0.013408 | 0.012860 | 0.013497 |
| string_options_test.test | RUN | 0.243739 | 1.932334 | 0.986724 | 0.001184 | 0.001440 | 0.001356 |
| static_vector_test.test | RUN | 1.446747 | 7.807758 | 6.459011 | 0.001748 | 0.001637 | 0.001704 |
| static_vector_options_test.test | RUN | 0.166998 | 0.467327 | 0.550896 | 0.001216 | 0.001309 | 0.001564 |
| stable_vector_test.test | RUN | 3.389794 | 16.392681 | 12.589582 | 0.031681 | 0.032823 | 0.033110 |
| small_vector_test.test | RUN | 2.199458 | 11.428048 | 9.139628 | 0.002634 | 0.002452 | 0.004365 |
| small_vector_options_test.test | RUN | 0.307050 | 1.313132 | 1.138662 | 0.001424 | 0.001410 | 0.001459 |
| slist_test.test | RUN | 2.034573 | 10.338939 | 8.129278 | 0.022652 | 0.023290 | 0.022499 |
| set_test.test | RUN | 3.111188 | 19.120110 | 14.492476 | 0.013136 | 0.012844 | 0.013593 |
| segtor_test.test | RUN | 3.977043 | 20.955466 | 16.344517 | 0.742278 | 0.748701 | 0.716189 |
| segtor_options_test.test | RUN | 0.190680 | 0.588291 | 0.686136 | 0.001467 | 0.001503 | 0.001494 |
| scoped_allocator_usage_test.test | RUN | 0.696997 | 3.076565 | 2.723971 | 0.001011 | 0.001405 | 0.001281 |
| scoped_allocator_adaptor_test.test | RUN | 0.296086 | 0.841704 | 1.129761 | 0.001096 | 0.001241 | 0.001423 |
| resource_adaptor_test.test | RUN | 0.150595 | 0.508324 | 0.513020 | 0.001191 | 0.001181 | 0.001366 |
| polymorphic_allocator_test.test | RUN | 0.129011 | 0.390241 | 0.435191 | 0.001073 | 0.001284 | 0.001215 |
| pmr_vector_test.test | RUN | 0.069966 | 0.149295 | 0.208357 | 0.000501 | 0.000532 | 0.001279 |
| pmr_string_test.test | RUN | 0.135677 | 0.308634 | 0.421526 | 0.000509 | 0.000535 | 0.001220 |
| pmr_stable_vector_test.test | RUN | 0.165532 | 0.521010 | 0.593657 | 0.001148 | 0.001032 | 0.001233 |
| pmr_small_vector_test.test | RUN | 0.085703 | 0.205011 | 0.271910 | 0.001284 | 0.001325 | 0.001139 |
| pmr_slist_test.test | RUN | 0.127610 | 0.708791 | 0.604721 | 0.001034 | 0.001158 | 0.001358 |
| pmr_set_test.test | RUN | 0.133905 | 0.347130 | 0.415166 | 0.001241 | 0.001316 | 0.001392 |
| pmr_nest_test.test | RUN | 0.102127 | 0.238306 | 0.294693 | 0.001089 | 0.001230 | 0.001351 |
| pmr_map_test.test | RUN | 0.144763 | 0.352765 | 0.435879 | 0.001145 | 0.001224 | 0.001182 |
| pmr_list_test.test | RUN | 0.092726 | 0.220760 | 0.285975 | 0.001085 | 0.001364 | 0.001285 |
| pmr_hub_test.test | RUN | 0.126971 | 0.305081 | 0.362070 | 0.001125 | 0.001280 | 0.001346 |
| pmr_flat_set_test.test | RUN | 0.100521 | 0.240162 | 0.315706 | 0.001062 | 0.001276 | 0.001272 |
| pmr_flat_map_test.test | RUN | 0.120764 | 0.274436 | 0.368144 | 0.001129 | 0.001087 | 0.001080 |
| pmr_devector_test.test | RUN | 0.081857 | 0.245227 | 0.279503 | 0.001134 | 0.001189 | 0.001079 |
| pmr_deque_test.test | RUN | 0.080196 | 0.201059 | 0.278839 | 0.001081 | 0.001409 | 0.001159 |
| pair_test.test | RUN | 0.200977 | 0.475180 | 0.610769 | 0.001212 | 0.001403 | 0.001200 |
| null_iterators_test.test | RUN | 0.313946 | 0.952118 | 1.037500 | 0.001137 | 0.001337 | 0.001230 |
| node_handle_test.test | RUN | 0.138734 | 1.220511 | 0.425350 | 0.001090 | 0.001380 | 0.001218 |
| node_allocator_test.test | RUN | 2.290725 | 12.799776 | 9.842618 | 0.008925 | 0.009029 | 0.008766 |
| new_delete_resource_test.test | RUN | 0.169059 | 0.735261 | 0.592784 | 0.001850 | 0.001824 | 0.002088 |
| nest_test.test | RUN | 0.492558 | 3.414822 | 2.090323 | 0.001265 | 0.001429 | 0.001359 |
| nest_api_test.test | RUN | 0.831130 | 6.446921 | 3.935817 | 0.002147 | 0.002542 | 0.002322 |
| monotonic_buffer_resource_test.test | RUN | 0.174048 | 1.320783 | 0.609293 | 0.001267 | 0.001489 | 0.001369 |
| memory_resource_test.test | RUN | 0.102906 | 0.367216 | 0.343729 | 0.001170 | 0.001321 | 0.001350 |
| map_test.test | RUN | 4.210645 | 21.794395 | 20.322947 | 0.010598 | 0.010376 | 0.010170 |
| list_test.test | RUN | 2.169572 | 11.319705 | 8.483670 | 0.021466 | 0.022164 | 0.022266 |
| is_constructible_test.test | RUN | 0.060993 | 0.130983 | 0.189277 | 0.000468 | 0.000576 | 0.001115 |
| insert_vs_emplace_test.test | RUN | 0.211398 | 0.871981 | 1.145438 | 0.001256 | 0.001411 | 0.001271 |
| hub_uses_allocator_test.test | RUN | 0.228499 | 0.733144 | 0.800977 | 0.001191 | 0.001317 | 0.001128 |
| hub_stability_test.test | RUN | 0.522318 | 3.510831 | 2.817916 | 0.001528 | 0.001665 | 0.001581 |
| hub_sort_test.test | RUN | 0.329506 | 1.586608 | 1.388925 | 0.527564 | 0.543242 | 0.507937 |
| hub_pocxx_test.test | RUN | 0.297782 | 1.821486 | 0.996522 | 0.001169 | 0.001573 | 0.001152 |
| hub_new_extended_alignment_test.test | RUN | 0.153859 | 0.545217 | 0.529511 | 0.001176 | 0.001398 | 0.001117 |
| hub_exception_safety_test.test | RUN | 0.632324 | 4.439148 | 2.794655 | 0.060252 | 0.076181 | 0.062558 |
| hub_empty_sort_test.test | RUN | 0.178094 | 0.502771 | 0.603443 | 0.001218 | 0.001410 | 0.001225 |
| hub_api_test.test | RUN | 2.116467 | 17.880744 | 9.228858 | 0.003436 | 0.003601 | 0.003034 |
| global_resource_test.test | RUN | 0.095030 | 0.335572 | 0.320476 | 0.001192 | 0.001390 | 0.001254 |
| flat_tree_test.test | RUN | 4.029148 | 27.766443 | 17.833568 | 0.001375 | 0.001270 | 0.001247 |
| flat_set_test.test | RUN | 5.003045 | 34.851871 | 22.997475 | 0.007392 | 0.006904 | 0.007096 |
| flat_set_adaptor_test.test | RUN | 3.706235 | 30.700408 | 18.035691 | 0.007443 | 0.007068 | 0.007162 |
| flat_map_test.test | RUN | 7.955623 | 52.040839 | 37.804013 | 0.008438 | 0.008264 | 0.007538 |
| flat_map_adaptor_test.test | RUN | 5.080631 | 37.849201 | 26.534449 | 0.007717 | 0.007477 | 0.007670 |
| explicit_inst_vector_test.test | RUN | 0.775766 | 5.153608 | 3.975172 | 0.001226 | 0.001294 | 0.001116 |
| explicit_inst_string_test.test | RUN | 1.051004 | 9.056051 | 5.469882 | 0.001150 | 0.001325 | 0.001257 |
| explicit_inst_static_vector_test.test | RUN | 0.091145 | 0.322835 | 0.350794 | 0.001064 | 0.001412 | 0.001316 |
| explicit_inst_stable_vector_test.test | RUN | 0.618407 | 3.247588 | 2.468488 | 0.001154 | 0.001280 | 0.001178 |
| explicit_inst_small_vector_test.test | RUN | 0.510257 | 2.964905 | 2.336874 | 0.001111 | 0.001434 | 0.001268 |
| explicit_inst_slist_test.test | RUN | 0.383689 | 2.639728 | 1.792752 | 0.001191 | 0.001393 | 0.001180 |
| explicit_inst_set_test.test | RUN | 0.536494 | 3.047810 | 2.099950 | 0.001134 | 0.001418 | 0.001137 |
| explicit_inst_map_test.test | RUN | 0.594425 | 3.201341 | 2.261858 | 0.001080 | 0.001311 | 0.001166 |
| explicit_inst_list_test.test | RUN | 0.132048 | 0.729058 | 0.572669 | 0.001181 | 0.001381 | 0.001205 |
| explicit_inst_flat_set_test.test | RUN | 3.272734 | 23.340022 | 13.444618 | 0.001196 | 0.001432 | 0.001118 |
| explicit_inst_flat_map_test.test | RUN | 3.532893 | 24.378989 | 15.178148 | 0.001058 | 0.001385 | 0.001132 |
| explicit_inst_devector_test.test | RUN | 0.423321 | 2.855903 | 1.913892 | 0.001115 | 0.001349 | 0.001199 |
| explicit_inst_deque_test.test | RUN | 0.428982 | 3.082000 | 2.058967 | 0.001190 | 0.001171 | 0.001151 |
| devector_test.test | RUN | 6.372324 | 37.709865 | 27.378008 | 0.003025 | 0.003134 | 0.003754 |
| devector_options_test.test | RUN | 0.258748 | 1.688285 | 1.047582 | 0.001476 | 0.001614 | 0.001438 |
| deque_test.test | RUN | 4.189532 | 22.425813 | 15.066597 | 0.362746 | 0.360417 | 0.438788 |
| deque_options_test.test | RUN | 0.193141 | 0.615136 | 0.762320 | 0.001204 | 0.001498 | 0.001238 |
| copy_move_algo_test.test | RUN | 0.180456 | 0.730560 | 0.690341 | 0.001470 | 0.001362 | 0.001395 |
| common_iterator_test.test | RUN | 0.013230 | 0.036952 | 0.037354 | 0.000459 | 0.000574 | 0.001135 |
| boost_iterator_comp_test.test | RUN | 0.262763 | 0.877842 | 0.912198 | 0.001177 | 0.001445 | 0.001191 |
| allocator_traits_test.test | RUN | 0.147697 | 0.378574 | 0.468093 | 0.001049 | 0.001404 | 0.001264 |
| alloc_full_test.test | RUN | 0.175067 | 0.829257 | 0.664739 | 0.003802 | 0.004085 | 0.003922 |
| alloc_basic_test.test | RUN | 0.145825 | 0.567372 | 0.529512 | 0.001308 | 0.001258 | 0.001398 |
| adaptive_pool_test.test | RUN | 1.822199 | 9.286305 | 10.002885 | 0.008497 | 0.007925 | 0.012371 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.015× | 1.017×, 1.012× | 1.005× |
| clang | 1.065× | 1.063×, 1.068× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44780058957).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 3 | 0.009135s | 0.008249s | 0.008833s | byte equality observed |
| alloc_basic_test.test | 10 | 0.000796s | 0.000815s | 0.000825s | byte equality observed |
| alloc_full_test.test | 7 | 0.002713s | 0.002713s | 0.002914s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000760s | 0.000773s | 0.000731s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.000788s | 0.000780s | 0.000779s | byte equality observed |
| common_iterator_test.test | 10 | 0.000363s | 0.000356s | 0.000747s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001160s | 0.000884s | 0.001008s | byte equality observed |
| deque_options_test.test | 10 | 0.000832s | 0.000850s | 0.000819s | byte equality observed |
| deque_test.test | 1 | 0.373770s | 0.373891s | 0.447353s | byte equality observed |
| devector_options_test.test | 10 | 0.000874s | 0.000833s | 0.000834s | byte equality observed |
| devector_test.test | 6 | 0.002869s | 0.002783s | 0.003606s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000709s | 0.000710s | 0.000708s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000694s | 0.000696s | 0.000715s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000708s | 0.000711s | 0.000716s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000710s | 0.000712s | 0.000726s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000699s | 0.000693s | 0.000713s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000716s | 0.000718s | 0.000713s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000703s | 0.000706s | 0.000703s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000707s | 0.000713s | 0.000720s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000716s | 0.000710s | 0.000706s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000715s | 0.000712s | 0.000727s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000719s | 0.000695s | 0.000730s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000702s | 0.000708s | 0.000727s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000725s | 0.000703s | 0.000712s | byte equality observed |
| flat_map_adaptor_test.test | 4 | 0.005664s | 0.005348s | 0.005419s | byte equality observed |
| flat_map_test.test | 4 | 0.006134s | 0.005714s | 0.005506s | byte equality observed |
| flat_set_adaptor_test.test | 4 | 0.005487s | 0.005038s | 0.005309s | byte equality observed |
| flat_set_test.test | 4 | 0.005440s | 0.004841s | 0.005185s | byte equality observed |
| flat_tree_test.test | 10 | 0.000718s | 0.000722s | 0.000718s | byte equality observed |
| global_resource_test.test | 10 | 0.000757s | 0.000737s | 0.000755s | byte equality observed |
| hub_api_test.test | 8 | 0.002524s | 0.002224s | 0.002176s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000727s | 0.000742s | 0.000728s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.048966s | 0.053979s | 0.050585s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.000751s | 0.000734s | 0.000770s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.000746s | 0.000767s | 0.000750s | byte equality observed |
| hub_sort_test.test | 1 | 0.425202s | 0.439893s | 0.408696s | byte equality observed |
| hub_stability_test.test | 10 | 0.000970s | 0.000971s | 0.000970s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000746s | 0.000748s | 0.000757s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000770s | 0.000758s | 0.000764s | byte equality observed |
| is_constructible_test.test | 10 | 0.000343s | 0.000341s | 0.000741s | byte equality observed |
| list_test.test | 2 | 0.015464s | 0.015594s | 0.016114s | byte equality observed |
| map_test.test | 3 | 0.007597s | 0.007359s | 0.007254s | byte equality observed |
| memory_resource_test.test | 10 | 0.000766s | 0.000751s | 0.000765s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000760s | 0.000746s | 0.000762s | byte equality observed |
| nest_api_test.test | 10 | 0.001633s | 0.001654s | 0.001660s | byte equality observed |
| nest_test.test | 10 | 0.000781s | 0.000782s | 0.000784s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001106s | 0.001125s | 0.001114s | byte equality observed |
| node_allocator_test.test | 3 | 0.006597s | 0.006653s | 0.006656s | byte equality observed |
| node_handle_test.test | 10 | 0.000761s | 0.000744s | 0.000758s | byte equality observed |
| null_iterators_test.test | 10 | 0.000761s | 0.000719s | 0.000752s | byte equality observed |
| pair_test.test | 10 | 0.000746s | 0.000749s | 0.000766s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000735s | 0.000741s | 0.000741s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000737s | 0.000757s | 0.000745s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000738s | 0.000718s | 0.000735s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000729s | 0.000697s | 0.000738s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000729s | 0.000712s | 0.000752s | byte equality observed |
| pmr_list_test.test | 10 | 0.000722s | 0.000713s | 0.000740s | byte equality observed |
| pmr_map_test.test | 10 | 0.000720s | 0.000712s | 0.000751s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000727s | 0.000705s | 0.000740s | byte equality observed |
| pmr_set_test.test | 10 | 0.000753s | 0.000750s | 0.000741s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000742s | 0.000726s | 0.000749s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000732s | 0.000733s | 0.000752s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000739s | 0.000739s | 0.000776s | byte equality observed |
| pmr_string_test.test | 10 | 0.000347s | 0.000351s | 0.000758s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000351s | 0.000347s | 0.000775s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.000768s | 0.000754s | 0.000789s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.000764s | 0.000763s | 0.000800s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.000757s | 0.000758s | 0.000803s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.000761s | 0.000765s | 0.000832s | byte equality observed |
| segtor_options_test.test | 10 | 0.000807s | 0.000793s | 0.000817s | byte equality observed |
| segtor_test.test | 1 | 0.459827s | 0.467367s | 0.497140s | byte equality observed |
| set_test.test | 2 | 0.010659s | 0.009476s | 0.010324s | byte equality observed |
| slist_test.test | 2 | 0.016292s | 0.015992s | 0.016139s | byte equality observed |
| small_vector_options_test.test | 10 | 0.000821s | 0.000808s | 0.000816s | byte equality observed |
| small_vector_test.test | 7 | 0.001688s | 0.001582s | 0.002750s | byte equality observed |
| stable_vector_test.test | 1 | 0.027713s | 0.028027s | 0.028597s | byte equality observed |
| static_vector_options_test.test | 10 | 0.000786s | 0.000767s | 0.000789s | byte equality observed |
| static_vector_test.test | 10 | 0.001062s | 0.000977s | 0.001024s | byte equality observed |
| string_options_test.test | 10 | 0.000767s | 0.000771s | 0.000782s | byte equality observed |
| string_test.test | 3 | 0.009212s | 0.008982s | 0.009345s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000753s | 0.000745s | 0.000731s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.000779s | 0.000776s | 0.000767s | byte equality observed |
| throw_exception_test.test | 10 | 0.000729s | 0.000726s | 0.000716s | byte equality observed |
| tree_test.test | 10 | 0.000716s | 0.000717s | 0.000713s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.000766s | 0.000763s | 0.000774s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000733s | 0.000729s | 0.000734s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000337s | 0.000335s | 0.000724s | byte equality observed |
| vector_options_test.test | 10 | 0.000835s | 0.000833s | 0.000847s | byte equality observed |
| vector_test.test | 5 | 0.002954s | 0.002962s | 0.003940s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44780058957).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
