# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 6.018702 | 30.563137 | 24.862753 | 0.004720 | 0.004438 | 0.005862 |
| vector_options_test.test | RUN | 0.268834 | 1.302744 | 0.997812 | 0.001527 | 0.001651 | 0.001431 |
| uses_allocator_test.test | RUN | 0.045053 | 0.101156 | 0.128117 | 0.000493 | 0.000495 | 0.001336 |
| uses_allocator_construction_test.test | RUN | 0.137348 | 0.361702 | 0.453471 | 0.001408 | 0.001495 | 0.001438 |
| unsynchronized_pool_resource_test.test | RUN | 0.185733 | 1.146801 | 0.598709 | 0.001427 | 0.001248 | 0.001377 |
| tree_test.test | RUN | 0.849097 | 4.530356 | 3.523547 | 0.001325 | 0.001321 | 0.001479 |
| throw_exception_test.test | RUN | 0.099751 | 0.246404 | 0.299277 | 0.001163 | 0.001442 | 0.001350 |
| synchronized_pool_resource_test.test | RUN | 0.185756 | 1.235813 | 0.589547 | 0.001353 | 0.001554 | 0.001306 |
| string_view_compat_test.test | RUN | 0.309857 | 2.464924 | 1.151963 | 0.001182 | 0.001417 | 0.001367 |
| string_test.test | RUN | 1.464048 | 9.509403 | 6.511649 | 0.014322 | 0.012813 | 0.013177 |
| string_options_test.test | RUN | 0.257578 | 1.979038 | 0.915885 | 0.001234 | 0.001447 | 0.001392 |
| static_vector_test.test | RUN | 1.483711 | 7.912530 | 6.546762 | 0.001716 | 0.001966 | 0.001739 |
| static_vector_options_test.test | RUN | 0.173478 | 0.492042 | 0.566679 | 0.001474 | 0.001522 | 0.001445 |
| stable_vector_test.test | RUN | 3.457330 | 16.735942 | 12.886299 | 0.031802 | 0.032569 | 0.033680 |
| small_vector_test.test | RUN | 2.252688 | 11.709817 | 9.049580 | 0.002922 | 0.002725 | 0.004355 |
| small_vector_options_test.test | RUN | 0.306757 | 1.352769 | 1.171411 | 0.001418 | 0.001426 | 0.001428 |
| slist_test.test | RUN | 2.077968 | 10.593295 | 7.979401 | 0.023725 | 0.023128 | 0.022899 |
| set_test.test | RUN | 3.216173 | 19.947598 | 14.681815 | 0.014864 | 0.013061 | 0.013574 |
| segtor_test.test | RUN | 4.106579 | 21.491828 | 16.327927 | 0.748504 | 0.749973 | 0.710543 |
| segtor_options_test.test | RUN | 0.198336 | 0.578916 | 0.688053 | 0.001328 | 0.001544 | 0.001328 |
| scoped_allocator_usage_test.test | RUN | 0.724499 | 3.100307 | 2.662849 | 0.001229 | 0.001397 | 0.001264 |
| scoped_allocator_adaptor_test.test | RUN | 0.307910 | 0.854641 | 1.117970 | 0.001307 | 0.001480 | 0.001342 |
| resource_adaptor_test.test | RUN | 0.159521 | 0.506985 | 0.497288 | 0.001372 | 0.001335 | 0.001201 |
| polymorphic_allocator_test.test | RUN | 0.133835 | 0.401571 | 0.414991 | 0.001254 | 0.001312 | 0.001217 |
| pmr_vector_test.test | RUN | 0.074934 | 0.149794 | 0.218371 | 0.000541 | 0.000538 | 0.001355 |
| pmr_string_test.test | RUN | 0.146333 | 0.317033 | 0.422923 | 0.000467 | 0.000514 | 0.001169 |
| pmr_stable_vector_test.test | RUN | 0.170170 | 0.532016 | 0.607202 | 0.001346 | 0.001193 | 0.001271 |
| pmr_small_vector_test.test | RUN | 0.092102 | 0.208070 | 0.263125 | 0.001270 | 0.001321 | 0.001271 |
| pmr_slist_test.test | RUN | 0.138228 | 0.721929 | 0.611009 | 0.001389 | 0.001288 | 0.001282 |
| pmr_set_test.test | RUN | 0.145158 | 0.337163 | 0.447129 | 0.001097 | 0.001418 | 0.001302 |
| pmr_nest_test.test | RUN | 0.111261 | 0.244561 | 0.300681 | 0.001194 | 0.001357 | 0.001377 |
| pmr_map_test.test | RUN | 0.150317 | 0.365397 | 0.443173 | 0.001184 | 0.001125 | 0.001336 |
| pmr_list_test.test | RUN | 0.098101 | 0.222391 | 0.283304 | 0.001170 | 0.001261 | 0.001175 |
| pmr_hub_test.test | RUN | 0.132927 | 0.316021 | 0.363725 | 0.001272 | 0.001332 | 0.001210 |
| pmr_flat_set_test.test | RUN | 0.105783 | 0.242209 | 0.315863 | 0.001323 | 0.001377 | 0.001189 |
| pmr_flat_map_test.test | RUN | 0.127882 | 0.281738 | 0.375066 | 0.001145 | 0.001312 | 0.001145 |
| pmr_devector_test.test | RUN | 0.086718 | 0.247192 | 0.283127 | 0.001177 | 0.001352 | 0.001124 |
| pmr_deque_test.test | RUN | 0.082162 | 0.203315 | 0.284765 | 0.001344 | 0.001360 | 0.001305 |
| pair_test.test | RUN | 0.206969 | 0.494263 | 0.620929 | 0.001236 | 0.001466 | 0.001282 |
| null_iterators_test.test | RUN | 0.330780 | 0.963120 | 1.049024 | 0.001300 | 0.001410 | 0.001308 |
| node_handle_test.test | RUN | 0.144548 | 1.237654 | 0.430579 | 0.001377 | 0.001468 | 0.001212 |
| node_allocator_test.test | RUN | 2.337897 | 13.045103 | 10.156751 | 0.009432 | 0.009270 | 0.009552 |
| new_delete_resource_test.test | RUN | 0.174266 | 0.736692 | 0.592536 | 0.001709 | 0.002100 | 0.001753 |
| nest_test.test | RUN | 0.491557 | 3.462127 | 2.107458 | 0.001352 | 0.001408 | 0.001459 |
| nest_api_test.test | RUN | 0.837560 | 6.609125 | 4.051045 | 0.002267 | 0.002523 | 0.002444 |
| monotonic_buffer_resource_test.test | RUN | 0.181262 | 1.338644 | 0.609330 | 0.001349 | 0.001258 | 0.001451 |
| memory_resource_test.test | RUN | 0.105187 | 0.367888 | 0.347927 | 0.001286 | 0.001319 | 0.001283 |
| map_test.test | RUN | 4.377342 | 22.097787 | 20.959100 | 0.010642 | 0.010594 | 0.009991 |
| list_test.test | RUN | 2.212395 | 11.399678 | 8.733037 | 0.022351 | 0.022163 | 0.022872 |
| is_constructible_test.test | RUN | 0.063511 | 0.130706 | 0.188952 | 0.000573 | 0.000568 | 0.001323 |
| insert_vs_emplace_test.test | RUN | 0.214685 | 0.874255 | 1.141337 | 0.001280 | 0.001392 | 0.001144 |
| hub_uses_allocator_test.test | RUN | 0.231220 | 0.737161 | 0.803270 | 0.001222 | 0.001363 | 0.001320 |
| hub_stability_test.test | RUN | 0.532785 | 3.579194 | 2.897717 | 0.001604 | 0.001592 | 0.001598 |
| hub_sort_test.test | RUN | 0.333410 | 1.601560 | 1.400822 | 0.538601 | 0.553400 | 0.509332 |
| hub_pocxx_test.test | RUN | 0.307238 | 1.894991 | 1.005141 | 0.001273 | 0.001302 | 0.001328 |
| hub_new_extended_alignment_test.test | RUN | 0.160124 | 0.531674 | 0.548524 | 0.001280 | 0.001305 | 0.001193 |
| hub_exception_safety_test.test | RUN | 0.625092 | 4.478483 | 2.981140 | 0.071060 | 0.073062 | 0.071374 |
| hub_empty_sort_test.test | RUN | 0.186133 | 0.501824 | 0.641408 | 0.001557 | 0.001290 | 0.001435 |
| hub_api_test.test | RUN | 2.101368 | 17.804268 | 9.364437 | 0.003856 | 0.003595 | 0.003246 |
| global_resource_test.test | RUN | 0.100027 | 0.341911 | 0.334268 | 0.001149 | 0.001565 | 0.001326 |
| flat_tree_test.test | RUN | 4.118721 | 28.191677 | 18.319831 | 0.001257 | 0.001226 | 0.001354 |
| flat_set_test.test | RUN | 5.128795 | 35.428413 | 23.670482 | 0.007604 | 0.006684 | 0.007073 |
| flat_set_adaptor_test.test | RUN | 3.805019 | 31.138921 | 18.163046 | 0.007603 | 0.006817 | 0.007249 |
| flat_map_test.test | RUN | 8.271860 | 52.892097 | 38.653059 | 0.008525 | 0.008203 | 0.007803 |
| flat_map_adaptor_test.test | RUN | 5.209311 | 38.260086 | 27.215487 | 0.008014 | 0.007732 | 0.007679 |
| explicit_inst_vector_test.test | RUN | 0.805592 | 5.152081 | 4.046201 | 0.001227 | 0.001203 | 0.001307 |
| explicit_inst_string_test.test | RUN | 1.086463 | 9.224512 | 5.583903 | 0.001329 | 0.001501 | 0.001262 |
| explicit_inst_static_vector_test.test | RUN | 0.095919 | 0.330629 | 0.374691 | 0.001357 | 0.001390 | 0.001321 |
| explicit_inst_stable_vector_test.test | RUN | 0.639868 | 3.321729 | 2.564340 | 0.001218 | 0.001348 | 0.001204 |
| explicit_inst_small_vector_test.test | RUN | 0.524057 | 2.924988 | 2.404159 | 0.001099 | 0.001429 | 0.001409 |
| explicit_inst_slist_test.test | RUN | 0.397785 | 2.698652 | 1.841635 | 0.001360 | 0.001476 | 0.001323 |
| explicit_inst_set_test.test | RUN | 0.560640 | 3.072005 | 2.151644 | 0.001323 | 0.001408 | 0.001332 |
| explicit_inst_map_test.test | RUN | 0.618459 | 3.207355 | 2.334801 | 0.001316 | 0.001392 | 0.001345 |
| explicit_inst_list_test.test | RUN | 0.140663 | 0.733900 | 0.584543 | 0.001227 | 0.001220 | 0.001188 |
| explicit_inst_flat_set_test.test | RUN | 3.407576 | 23.605528 | 13.860664 | 0.001207 | 0.001299 | 0.001381 |
| explicit_inst_flat_map_test.test | RUN | 3.641061 | 24.709052 | 15.709825 | 0.001240 | 0.001479 | 0.001326 |
| explicit_inst_devector_test.test | RUN | 0.443225 | 2.907087 | 1.954858 | 0.001331 | 0.001368 | 0.001204 |
| explicit_inst_deque_test.test | RUN | 0.445664 | 3.137222 | 2.119919 | 0.001298 | 0.001379 | 0.001201 |
| devector_test.test | RUN | 6.637842 | 38.167426 | 25.878093 | 0.003218 | 0.003086 | 0.003897 |
| devector_options_test.test | RUN | 0.274035 | 1.736551 | 1.061456 | 0.001537 | 0.001465 | 0.001644 |
| deque_test.test | RUN | 3.852439 | 22.362088 | 18.186811 | 0.363686 | 0.362943 | 0.437402 |
| deque_options_test.test | RUN | 0.196597 | 0.608165 | 0.769713 | 0.001332 | 0.001326 | 0.001345 |
| copy_move_algo_test.test | RUN | 0.191412 | 0.714858 | 0.685669 | 0.001590 | 0.001524 | 0.001498 |
| common_iterator_test.test | RUN | 0.013165 | 0.035372 | 0.037456 | 0.000492 | 0.000571 | 0.001308 |
| boost_iterator_comp_test.test | RUN | 0.268047 | 0.872149 | 0.943024 | 0.001184 | 0.001401 | 0.001402 |
| allocator_traits_test.test | RUN | 0.153148 | 0.381413 | 0.476473 | 0.001185 | 0.001260 | 0.001356 |
| alloc_full_test.test | RUN | 0.181519 | 0.810288 | 0.688621 | 0.003876 | 0.004034 | 0.004402 |
| alloc_basic_test.test | RUN | 0.150648 | 0.573917 | 0.531279 | 0.001206 | 0.001515 | 0.001519 |
| adaptive_pool_test.test | RUN | 2.384868 | 9.559927 | 10.370379 | 0.008757 | 0.008315 | 0.012859 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.004× | 1.006×, 1.002× | 1.001× |
| clang | 1.067× | 1.065×, 1.068× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45617981312).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 3 | 0.009000s | 0.008268s | 0.009098s | byte equality observed |
| alloc_basic_test.test | 10 | 0.000830s | 0.000818s | 0.000821s | byte equality observed |
| alloc_full_test.test | 8 | 0.002759s | 0.002713s | 0.002886s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000776s | 0.000774s | 0.000776s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.000811s | 0.000780s | 0.000803s | byte equality observed |
| common_iterator_test.test | 10 | 0.000369s | 0.000367s | 0.000785s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001190s | 0.000915s | 0.001038s | byte equality observed |
| deque_options_test.test | 10 | 0.000854s | 0.000826s | 0.000816s | byte equality observed |
| deque_test.test | 1 | 0.372193s | 0.373034s | 0.444712s | byte equality observed |
| devector_options_test.test | 10 | 0.000906s | 0.000839s | 0.000849s | byte equality observed |
| devector_test.test | 6 | 0.002911s | 0.002794s | 0.003644s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000728s | 0.000714s | 0.000722s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000714s | 0.000708s | 0.000727s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000724s | 0.000724s | 0.000725s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000723s | 0.000722s | 0.000750s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000732s | 0.000722s | 0.000736s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000745s | 0.000731s | 0.000731s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000733s | 0.000724s | 0.000738s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000722s | 0.000723s | 0.000745s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000739s | 0.000724s | 0.000750s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000731s | 0.000746s | 0.000739s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000714s | 0.000716s | 0.000738s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000720s | 0.000742s | 0.000751s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000739s | 0.000723s | 0.000745s | byte equality observed |
| flat_map_adaptor_test.test | 4 | 0.005682s | 0.005342s | 0.005447s | byte equality observed |
| flat_map_test.test | 4 | 0.006197s | 0.005740s | 0.005534s | byte equality observed |
| flat_set_adaptor_test.test | 4 | 0.005558s | 0.005007s | 0.005345s | byte equality observed |
| flat_set_test.test | 4 | 0.005520s | 0.004857s | 0.005226s | byte equality observed |
| flat_tree_test.test | 10 | 0.000761s | 0.000726s | 0.000760s | byte equality observed |
| global_resource_test.test | 10 | 0.000775s | 0.000775s | 0.000771s | byte equality observed |
| hub_api_test.test | 8 | 0.002555s | 0.002241s | 0.002194s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000756s | 0.000724s | 0.000754s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.054267s | 0.054661s | 0.054724s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.000824s | 0.000778s | 0.000821s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.000811s | 0.000774s | 0.000780s | byte equality observed |
| hub_sort_test.test | 1 | 0.432324s | 0.440480s | 0.420320s | byte equality observed |
| hub_stability_test.test | 10 | 0.000974s | 0.000988s | 0.000997s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000756s | 0.000762s | 0.000766s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000761s | 0.000782s | 0.000768s | byte equality observed |
| is_constructible_test.test | 10 | 0.000331s | 0.000355s | 0.000737s | byte equality observed |
| list_test.test | 2 | 0.015435s | 0.015603s | 0.015925s | byte equality observed |
| map_test.test | 3 | 0.007579s | 0.007347s | 0.007246s | byte equality observed |
| memory_resource_test.test | 10 | 0.000753s | 0.000771s | 0.000764s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000759s | 0.000788s | 0.000770s | byte equality observed |
| nest_api_test.test | 10 | 0.001645s | 0.001669s | 0.001653s | byte equality observed |
| nest_test.test | 10 | 0.000785s | 0.000802s | 0.000788s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001147s | 0.001129s | 0.001147s | byte equality observed |
| node_allocator_test.test | 3 | 0.006701s | 0.006621s | 0.006714s | byte equality observed |
| node_handle_test.test | 10 | 0.000769s | 0.000786s | 0.000742s | byte equality observed |
| null_iterators_test.test | 10 | 0.000753s | 0.000764s | 0.000733s | byte equality observed |
| pair_test.test | 10 | 0.000750s | 0.000752s | 0.000752s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000722s | 0.000762s | 0.000720s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000737s | 0.000755s | 0.000734s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000754s | 0.000750s | 0.000735s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000756s | 0.000745s | 0.000754s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000728s | 0.000748s | 0.000763s | byte equality observed |
| pmr_list_test.test | 10 | 0.000737s | 0.000753s | 0.000730s | byte equality observed |
| pmr_map_test.test | 10 | 0.000763s | 0.000763s | 0.000747s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000752s | 0.000741s | 0.000745s | byte equality observed |
| pmr_set_test.test | 10 | 0.000755s | 0.000750s | 0.000750s | byte equality observed |
| pmr_slist_test.test | 8 | 0.000753s | 0.000752s | 0.000760s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000732s | 0.000755s | 0.000758s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000723s | 0.000749s | 0.000764s | byte equality observed |
| pmr_string_test.test | 10 | 0.000355s | 0.000353s | 0.000750s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000356s | 0.000351s | 0.000788s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.000776s | 0.000777s | 0.000797s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.000775s | 0.000775s | 0.000808s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.000774s | 0.000764s | 0.000847s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.000767s | 0.000760s | 0.000812s | byte equality observed |
| segtor_options_test.test | 10 | 0.000816s | 0.000807s | 0.000860s | byte equality observed |
| segtor_test.test | 1 | 0.458129s | 0.466195s | 0.498260s | byte equality observed |
| set_test.test | 2 | 0.010775s | 0.009492s | 0.010370s | byte equality observed |
| slist_test.test | 2 | 0.016285s | 0.015909s | 0.016056s | byte equality observed |
| small_vector_options_test.test | 10 | 0.000855s | 0.000816s | 0.000844s | byte equality observed |
| small_vector_test.test | 7 | 0.001701s | 0.001584s | 0.002773s | byte equality observed |
| stable_vector_test.test | 1 | 0.027662s | 0.027867s | 0.028507s | byte equality observed |
| static_vector_options_test.test | 10 | 0.000824s | 0.000778s | 0.000824s | byte equality observed |
| static_vector_test.test | 10 | 0.001076s | 0.000995s | 0.001039s | byte equality observed |
| string_options_test.test | 10 | 0.000797s | 0.000780s | 0.000786s | byte equality observed |
| string_test.test | 3 | 0.009219s | 0.008959s | 0.009290s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000763s | 0.000755s | 0.000745s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.000793s | 0.000794s | 0.000789s | byte equality observed |
| throw_exception_test.test | 10 | 0.000721s | 0.000731s | 0.000738s | byte equality observed |
| tree_test.test | 10 | 0.000736s | 0.000727s | 0.000741s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.000781s | 0.000780s | 0.000795s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000727s | 0.000724s | 0.000736s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000345s | 0.000344s | 0.000728s | byte equality observed |
| vector_options_test.test | 10 | 0.000855s | 0.000857s | 0.000856s | byte equality observed |
| vector_test.test | 5 | 0.003009s | 0.002993s | 0.003952s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45617981312).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
