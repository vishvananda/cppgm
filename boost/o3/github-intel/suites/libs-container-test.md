# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 6.066809 | 30.013334 | 25.170929 | 0.004845 | 0.004165 | 0.006532 |
| vector_options_test.test | RUN | 0.274705 | 1.273261 | 1.003577 | 0.001552 | 0.001613 | 0.001540 |
| uses_allocator_test.test | RUN | 0.045414 | 0.100636 | 0.128943 | 0.000659 | 0.000528 | 0.001294 |
| uses_allocator_construction_test.test | RUN | 0.139070 | 0.379216 | 0.454866 | 0.001403 | 0.001314 | 0.001409 |
| unsynchronized_pool_resource_test.test | RUN | 0.186479 | 1.213528 | 0.596730 | 0.001578 | 0.001385 | 0.001573 |
| tree_test.test | RUN | 0.856667 | 4.532148 | 3.538379 | 0.001341 | 0.001406 | 0.001435 |
| throw_exception_test.test | RUN | 0.101044 | 0.244120 | 0.300922 | 0.001394 | 0.001312 | 0.001415 |
| synchronized_pool_resource_test.test | RUN | 0.189430 | 1.195055 | 0.583435 | 0.001480 | 0.001369 | 0.001391 |
| string_view_compat_test.test | RUN | 0.319969 | 2.404815 | 1.157265 | 0.001563 | 0.001328 | 0.001435 |
| string_test.test | RUN | 1.456195 | 9.277387 | 6.578241 | 0.014636 | 0.012865 | 0.013403 |
| string_options_test.test | RUN | 0.254500 | 1.954670 | 0.919635 | 0.001356 | 0.001451 | 0.001499 |
| static_vector_test.test | RUN | 1.490678 | 7.772505 | 6.621448 | 0.001953 | 0.001912 | 0.001976 |
| static_vector_options_test.test | RUN | 0.172092 | 0.493585 | 0.567278 | 0.001576 | 0.001421 | 0.001567 |
| stable_vector_test.test | RUN | 3.538841 | 16.502855 | 12.967745 | 0.032150 | 0.032360 | 0.033721 |
| small_vector_test.test | RUN | 2.258607 | 11.487771 | 9.280086 | 0.003003 | 0.002655 | 0.004149 |
| small_vector_options_test.test | RUN | 0.325851 | 1.339912 | 1.191749 | 0.001696 | 0.001450 | 0.001490 |
| slist_test.test | RUN | 2.105787 | 10.401582 | 8.155322 | 0.023881 | 0.023146 | 0.022835 |
| set_test.test | RUN | 3.239858 | 19.040493 | 15.054681 | 0.015035 | 0.013003 | 0.013783 |
| segtor_test.test | RUN | 4.114808 | 20.933646 | 16.653318 | 0.698039 | 0.753426 | 0.718223 |
| segtor_options_test.test | RUN | 0.206180 | 0.588204 | 0.701035 | 0.001460 | 0.001583 | 0.001411 |
| scoped_allocator_usage_test.test | RUN | 0.750712 | 3.070958 | 2.738749 | 0.001306 | 0.001339 | 0.001431 |
| scoped_allocator_adaptor_test.test | RUN | 0.310516 | 0.841383 | 1.134715 | 0.001401 | 0.001309 | 0.001444 |
| resource_adaptor_test.test | RUN | 0.160930 | 0.506334 | 0.522360 | 0.001424 | 0.001427 | 0.001461 |
| polymorphic_allocator_test.test | RUN | 0.134082 | 0.388761 | 0.419983 | 0.001385 | 0.001238 | 0.001277 |
| pmr_vector_test.test | RUN | 0.072776 | 0.146562 | 0.216780 | 0.000542 | 0.000448 | 0.001312 |
| pmr_string_test.test | RUN | 0.144733 | 0.303282 | 0.420099 | 0.000595 | 0.000528 | 0.001320 |
| pmr_stable_vector_test.test | RUN | 0.175607 | 0.521471 | 0.610620 | 0.001506 | 0.001233 | 0.001492 |
| pmr_small_vector_test.test | RUN | 0.092359 | 0.201814 | 0.262486 | 0.001356 | 0.001170 | 0.001451 |
| pmr_slist_test.test | RUN | 0.133692 | 0.707492 | 0.614810 | 0.001383 | 0.001170 | 0.001110 |
| pmr_set_test.test | RUN | 0.145026 | 0.346059 | 0.450532 | 0.001287 | 0.001194 | 0.001313 |
| pmr_nest_test.test | RUN | 0.111208 | 0.234812 | 0.302598 | 0.001349 | 0.001223 | 0.001350 |
| pmr_map_test.test | RUN | 0.150988 | 0.353772 | 0.447642 | 0.001100 | 0.001225 | 0.001473 |
| pmr_list_test.test | RUN | 0.099340 | 0.218563 | 0.291460 | 0.001292 | 0.001292 | 0.001474 |
| pmr_hub_test.test | RUN | 0.140070 | 0.297193 | 0.364556 | 0.001372 | 0.001210 | 0.001413 |
| pmr_flat_set_test.test | RUN | 0.114265 | 0.236468 | 0.318340 | 0.001259 | 0.001375 | 0.001331 |
| pmr_flat_map_test.test | RUN | 0.134586 | 0.274504 | 0.371182 | 0.001310 | 0.001170 | 0.001267 |
| pmr_devector_test.test | RUN | 0.088662 | 0.238459 | 0.283163 | 0.001430 | 0.001227 | 0.001265 |
| pmr_deque_test.test | RUN | 0.084574 | 0.197753 | 0.276424 | 0.001506 | 0.001461 | 0.001278 |
| pair_test.test | RUN | 0.224471 | 0.482929 | 0.628229 | 0.001560 | 0.001381 | 0.001419 |
| null_iterators_test.test | RUN | 0.340413 | 0.943325 | 1.055332 | 0.001144 | 0.001333 | 0.001184 |
| node_handle_test.test | RUN | 0.151955 | 1.223816 | 0.435873 | 0.001242 | 0.001364 | 0.001268 |
| node_allocator_test.test | RUN | 2.506084 | 12.893509 | 10.059368 | 0.009368 | 0.009235 | 0.009631 |
| new_delete_resource_test.test | RUN | 0.181724 | 0.715763 | 0.593128 | 0.002067 | 0.001901 | 0.001894 |
| nest_test.test | RUN | 0.439285 | 3.448002 | 2.128298 | 0.001428 | 0.001388 | 0.001405 |
| nest_api_test.test | RUN | 0.867169 | 6.552167 | 4.246237 | 0.002578 | 0.002642 | 0.002440 |
| monotonic_buffer_resource_test.test | RUN | 0.167292 | 1.326534 | 0.603016 | 0.001594 | 0.001418 | 0.001401 |
| memory_resource_test.test | RUN | 0.111651 | 0.365886 | 0.351321 | 0.001494 | 0.001232 | 0.001272 |
| map_test.test | RUN | 4.476708 | 21.816985 | 21.369620 | 0.010825 | 0.009377 | 0.010058 |
| list_test.test | RUN | 2.258559 | 11.222080 | 8.870359 | 0.022476 | 0.022674 | 0.022092 |
| is_constructible_test.test | RUN | 0.066442 | 0.125981 | 0.189479 | 0.000686 | 0.000551 | 0.001341 |
| insert_vs_emplace_test.test | RUN | 0.213383 | 0.869143 | 1.175039 | 0.001535 | 0.001230 | 0.001430 |
| hub_uses_allocator_test.test | RUN | 0.243172 | 0.702936 | 0.745879 | 0.001375 | 0.001294 | 0.001421 |
| hub_stability_test.test | RUN | 0.544940 | 3.505707 | 2.938624 | 0.001753 | 0.001633 | 0.001716 |
| hub_sort_test.test | RUN | 0.343616 | 1.576817 | 1.392170 | 0.539911 | 0.537813 | 0.512938 |
| hub_pocxx_test.test | RUN | 0.306364 | 1.806824 | 1.018736 | 0.001422 | 0.001425 | 0.001512 |
| hub_new_extended_alignment_test.test | RUN | 0.168083 | 0.547479 | 0.529212 | 0.001476 | 0.001390 | 0.001256 |
| hub_exception_safety_test.test | RUN | 0.626177 | 4.444590 | 2.879108 | 0.080656 | 0.071551 | 0.071663 |
| hub_empty_sort_test.test | RUN | 0.190027 | 0.489206 | 0.622485 | 0.001561 | 0.001318 | 0.001498 |
| hub_api_test.test | RUN | 2.168268 | 17.514959 | 9.565959 | 0.003962 | 0.003309 | 0.003514 |
| global_resource_test.test | RUN | 0.104948 | 0.329328 | 0.319982 | 0.001620 | 0.001430 | 0.001398 |
| flat_tree_test.test | RUN | 4.230344 | 27.501178 | 18.373929 | 0.001398 | 0.001243 | 0.001354 |
| flat_set_test.test | RUN | 5.236083 | 34.673682 | 23.803765 | 0.007962 | 0.006746 | 0.007271 |
| flat_set_adaptor_test.test | RUN | 3.831615 | 30.421442 | 18.540925 | 0.007611 | 0.007098 | 0.007323 |
| flat_map_test.test | RUN | 8.350203 | 51.473220 | 38.858088 | 0.009060 | 0.008071 | 0.007949 |
| flat_map_adaptor_test.test | RUN | 5.201093 | 37.279309 | 27.293440 | 0.008337 | 0.007421 | 0.007651 |
| explicit_inst_vector_test.test | RUN | 0.813072 | 5.047402 | 4.081596 | 0.001316 | 0.001611 | 0.001216 |
| explicit_inst_string_test.test | RUN | 1.102040 | 8.896956 | 5.627994 | 0.001405 | 0.001294 | 0.001343 |
| explicit_inst_static_vector_test.test | RUN | 0.096314 | 0.314191 | 0.364122 | 0.001380 | 0.001269 | 0.001246 |
| explicit_inst_stable_vector_test.test | RUN | 0.643240 | 3.175660 | 2.540438 | 0.001490 | 0.001281 | 0.001320 |
| explicit_inst_small_vector_test.test | RUN | 0.538418 | 2.904936 | 2.420036 | 0.001325 | 0.001238 | 0.001325 |
| explicit_inst_slist_test.test | RUN | 0.401654 | 2.629582 | 1.839959 | 0.001426 | 0.001269 | 0.001214 |
| explicit_inst_set_test.test | RUN | 0.578814 | 3.006936 | 2.165783 | 0.001409 | 0.001258 | 0.001402 |
| explicit_inst_map_test.test | RUN | 0.634583 | 3.179566 | 2.362412 | 0.001299 | 0.001261 | 0.001451 |
| explicit_inst_list_test.test | RUN | 0.138866 | 0.718789 | 0.588309 | 0.001246 | 0.001239 | 0.001241 |
| explicit_inst_flat_set_test.test | RUN | 3.393292 | 22.977180 | 14.029020 | 0.001450 | 0.001381 | 0.001407 |
| explicit_inst_flat_map_test.test | RUN | 3.665832 | 24.101453 | 15.805272 | 0.001530 | 0.001226 | 0.001258 |
| explicit_inst_devector_test.test | RUN | 0.444825 | 2.832415 | 1.956883 | 0.001295 | 0.001236 | 0.001542 |
| explicit_inst_deque_test.test | RUN | 0.456138 | 3.066914 | 2.114207 | 0.001806 | 0.001247 | 0.001281 |
| devector_test.test | RUN | 6.706628 | 38.107093 | 25.912502 | 0.003288 | 0.003026 | 0.003942 |
| devector_options_test.test | RUN | 0.272475 | 1.696034 | 1.069737 | 0.001718 | 0.001406 | 0.001661 |
| deque_test.test | RUN | 4.491847 | 19.493676 | 18.212699 | 0.366822 | 0.363170 | 0.438215 |
| deque_options_test.test | RUN | 0.199024 | 0.614231 | 0.777469 | 0.001667 | 0.001287 | 0.001404 |
| copy_move_algo_test.test | RUN | 0.195460 | 0.724812 | 0.661207 | 0.001900 | 0.001372 | 0.001609 |
| common_iterator_test.test | RUN | 0.013472 | 0.036367 | 0.036831 | 0.000628 | 0.000539 | 0.001255 |
| boost_iterator_comp_test.test | RUN | 0.286252 | 0.873901 | 0.979783 | 0.001221 | 0.001383 | 0.001451 |
| allocator_traits_test.test | RUN | 0.162049 | 0.377803 | 0.472811 | 0.001382 | 0.001255 | 0.001447 |
| alloc_full_test.test | RUN | 0.191754 | 0.812527 | 0.684400 | 0.004320 | 0.003782 | 0.004218 |
| alloc_basic_test.test | RUN | 0.156909 | 0.568557 | 0.532395 | 0.001323 | 0.001279 | 0.001462 |
| adaptive_pool_test.test | RUN | 1.780676 | 12.797186 | 10.399237 | 0.008971 | 0.007973 | 0.012537 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.010× | 1.013×, 1.007× | 0.999× |
| clang | 1.071× | 1.062×, 1.079× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45710374989).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 3 | 0.009075s | 0.008345s | 0.009080s | byte equality observed |
| alloc_basic_test.test | 10 | 0.000797s | 0.000843s | 0.000821s | byte equality observed |
| alloc_full_test.test | 8 | 0.002691s | 0.002730s | 0.002885s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000767s | 0.000783s | 0.000763s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.000792s | 0.000804s | 0.000803s | byte equality observed |
| common_iterator_test.test | 10 | 0.000361s | 0.000360s | 0.000797s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001175s | 0.000922s | 0.001022s | byte equality observed |
| deque_options_test.test | 10 | 0.000853s | 0.000839s | 0.000833s | byte equality observed |
| deque_test.test | 1 | 0.374752s | 0.371669s | 0.447978s | byte equality observed |
| devector_options_test.test | 10 | 0.000896s | 0.000858s | 0.000849s | byte equality observed |
| devector_test.test | 5 | 0.002899s | 0.002810s | 0.003622s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000721s | 0.000734s | 0.000718s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000710s | 0.000728s | 0.000704s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000725s | 0.000734s | 0.000714s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000732s | 0.000732s | 0.000709s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000715s | 0.000719s | 0.000708s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000729s | 0.000741s | 0.000720s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000720s | 0.000741s | 0.000714s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000732s | 0.000735s | 0.000714s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000722s | 0.000729s | 0.000713s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000723s | 0.000724s | 0.000718s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000712s | 0.000720s | 0.000697s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000718s | 0.000726s | 0.000713s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000719s | 0.000724s | 0.000706s | byte equality observed |
| flat_map_adaptor_test.test | 4 | 0.005675s | 0.005365s | 0.005397s | byte equality observed |
| flat_map_test.test | 4 | 0.006176s | 0.005732s | 0.005524s | byte equality observed |
| flat_set_adaptor_test.test | 4 | 0.005517s | 0.005027s | 0.005340s | byte equality observed |
| flat_set_test.test | 4 | 0.005472s | 0.004862s | 0.005206s | byte equality observed |
| flat_tree_test.test | 10 | 0.000718s | 0.000733s | 0.000729s | byte equality observed |
| global_resource_test.test | 10 | 0.000743s | 0.000768s | 0.000745s | byte equality observed |
| hub_api_test.test | 8 | 0.002532s | 0.002249s | 0.002168s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000729s | 0.000725s | 0.000721s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.052059s | 0.056571s | 0.052034s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.000782s | 0.000775s | 0.000770s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.000769s | 0.000769s | 0.000746s | byte equality observed |
| hub_sort_test.test | 1 | 0.429365s | 0.443509s | 0.417451s | byte equality observed |
| hub_stability_test.test | 10 | 0.000974s | 0.000981s | 0.000993s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000757s | 0.000759s | 0.000762s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000769s | 0.000772s | 0.000781s | byte equality observed |
| is_constructible_test.test | 10 | 0.000352s | 0.000348s | 0.000722s | byte equality observed |
| list_test.test | 2 | 0.015462s | 0.015528s | 0.015973s | byte equality observed |
| map_test.test | 3 | 0.007584s | 0.007364s | 0.007246s | byte equality observed |
| memory_resource_test.test | 10 | 0.000767s | 0.000773s | 0.000770s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000772s | 0.000774s | 0.000772s | byte equality observed |
| nest_api_test.test | 10 | 0.001645s | 0.001648s | 0.001664s | byte equality observed |
| nest_test.test | 10 | 0.000789s | 0.000788s | 0.000785s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001138s | 0.001140s | 0.001136s | byte equality observed |
| node_allocator_test.test | 3 | 0.006655s | 0.006606s | 0.006720s | byte equality observed |
| node_handle_test.test | 10 | 0.000768s | 0.000765s | 0.000769s | byte equality observed |
| null_iterators_test.test | 10 | 0.000756s | 0.000767s | 0.000747s | byte equality observed |
| pair_test.test | 10 | 0.000755s | 0.000749s | 0.000764s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000727s | 0.000751s | 0.000721s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000725s | 0.000738s | 0.000751s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000725s | 0.000712s | 0.000735s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000736s | 0.000725s | 0.000732s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000748s | 0.000731s | 0.000721s | byte equality observed |
| pmr_list_test.test | 10 | 0.000745s | 0.000737s | 0.000717s | byte equality observed |
| pmr_map_test.test | 10 | 0.000749s | 0.000745s | 0.000699s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000752s | 0.000760s | 0.000707s | byte equality observed |
| pmr_set_test.test | 10 | 0.000755s | 0.000735s | 0.000718s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000745s | 0.000745s | 0.000713s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000754s | 0.000749s | 0.000709s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000746s | 0.000743s | 0.000732s | byte equality observed |
| pmr_string_test.test | 10 | 0.000348s | 0.000353s | 0.000781s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000350s | 0.000352s | 0.000787s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.000764s | 0.000773s | 0.000825s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.000772s | 0.000761s | 0.000850s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.000772s | 0.000767s | 0.000837s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.000764s | 0.000749s | 0.000827s | byte equality observed |
| segtor_options_test.test | 10 | 0.000817s | 0.000807s | 0.000796s | byte equality observed |
| segtor_test.test | 1 | 0.457483s | 0.467811s | 0.501974s | byte equality observed |
| set_test.test | 2 | 0.010713s | 0.009529s | 0.010291s | byte equality observed |
| slist_test.test | 2 | 0.016182s | 0.016113s | 0.015999s | byte equality observed |
| small_vector_options_test.test | 10 | 0.000842s | 0.000821s | 0.000829s | byte equality observed |
| small_vector_test.test | 7 | 0.001702s | 0.001585s | 0.002737s | byte equality observed |
| stable_vector_test.test | 1 | 0.027657s | 0.028001s | 0.028605s | byte equality observed |
| static_vector_options_test.test | 10 | 0.000812s | 0.000784s | 0.000811s | byte equality observed |
| static_vector_test.test | 10 | 0.001064s | 0.000980s | 0.001034s | byte equality observed |
| string_options_test.test | 10 | 0.000774s | 0.000777s | 0.000779s | byte equality observed |
| string_test.test | 2 | 0.009226s | 0.008983s | 0.009294s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000733s | 0.000747s | 0.000728s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.000764s | 0.000792s | 0.000761s | byte equality observed |
| throw_exception_test.test | 10 | 0.000740s | 0.000722s | 0.000718s | byte equality observed |
| tree_test.test | 10 | 0.000726s | 0.000727s | 0.000717s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.000773s | 0.000778s | 0.000763s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000733s | 0.000750s | 0.000714s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000341s | 0.000333s | 0.000726s | byte equality observed |
| vector_options_test.test | 10 | 0.000851s | 0.000847s | 0.000845s | byte equality observed |
| vector_test.test | 5 | 0.002973s | 0.002985s | 0.003933s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45710374989).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
