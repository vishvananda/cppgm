# libs/container/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| vector_test.test | RUN | 5.900939 | 29.062690 | 24.056145 | 0.004478 | 0.004281 | 0.005692 |
| vector_options_test.test | RUN | 0.260626 | 1.253513 | 0.948878 | 0.001393 | 0.001462 | 0.001358 |
| uses_allocator_test.test | RUN | 0.044775 | 0.093856 | 0.122319 | 0.000541 | 0.000493 | 0.001141 |
| uses_allocator_construction_test.test | RUN | 0.134523 | 0.366502 | 0.433499 | 0.001167 | 0.001243 | 0.001120 |
| unsynchronized_pool_resource_test.test | RUN | 0.180380 | 1.180152 | 0.580835 | 0.001198 | 0.001484 | 0.001264 |
| tree_test.test | RUN | 0.829850 | 4.211075 | 3.352603 | 0.001199 | 0.001335 | 0.001228 |
| throw_exception_test.test | RUN | 0.095751 | 0.240502 | 0.289770 | 0.001202 | 0.001098 | 0.001130 |
| synchronized_pool_resource_test.test | RUN | 0.179851 | 1.182508 | 0.568397 | 0.001218 | 0.001276 | 0.001306 |
| string_view_compat_test.test | RUN | 0.302857 | 2.396246 | 1.137287 | 0.001120 | 0.001220 | 0.001194 |
| string_test.test | RUN | 1.426048 | 9.045702 | 6.185629 | 0.014175 | 0.012543 | 0.013241 |
| string_options_test.test | RUN | 0.249307 | 1.931379 | 0.910728 | 0.001226 | 0.001256 | 0.001378 |
| static_vector_test.test | RUN | 1.448661 | 7.526014 | 6.290270 | 0.001724 | 0.001583 | 0.001568 |
| static_vector_options_test.test | RUN | 0.169119 | 0.480744 | 0.536514 | 0.001268 | 0.001294 | 0.001298 |
| stable_vector_test.test | RUN | 3.441422 | 15.883178 | 11.977634 | 0.032068 | 0.031754 | 0.032770 |
| small_vector_test.test | RUN | 2.216180 | 10.960578 | 8.558312 | 0.002724 | 0.002368 | 0.003776 |
| small_vector_options_test.test | RUN | 0.301360 | 1.275415 | 1.135882 | 0.001437 | 0.001268 | 0.001335 |
| slist_test.test | RUN | 2.023210 | 9.856817 | 7.676218 | 0.023355 | 0.022620 | 0.022694 |
| set_test.test | RUN | 3.104873 | 18.542195 | 14.240133 | 0.014062 | 0.012827 | 0.013848 |
| segtor_test.test | RUN | 4.004501 | 20.206511 | 15.809464 | 0.706103 | 0.745319 | 0.712374 |
| segtor_options_test.test | RUN | 0.200882 | 0.566414 | 0.680947 | 0.001170 | 0.001290 | 0.001452 |
| scoped_allocator_usage_test.test | RUN | 0.708434 | 2.895421 | 2.578617 | 0.001282 | 0.001166 | 0.001125 |
| scoped_allocator_adaptor_test.test | RUN | 0.298527 | 0.796159 | 1.089762 | 0.001226 | 0.001124 | 0.001099 |
| resource_adaptor_test.test | RUN | 0.157362 | 0.494411 | 0.483204 | 0.001173 | 0.001205 | 0.001122 |
| polymorphic_allocator_test.test | RUN | 0.127475 | 0.382866 | 0.408157 | 0.001266 | 0.001244 | 0.001151 |
| pmr_vector_test.test | RUN | 0.073115 | 0.144014 | 0.214258 | 0.000462 | 0.000495 | 0.001245 |
| pmr_string_test.test | RUN | 0.142126 | 0.295513 | 0.405283 | 0.000483 | 0.000507 | 0.001154 |
| pmr_stable_vector_test.test | RUN | 0.168409 | 0.508561 | 0.590363 | 0.001111 | 0.001120 | 0.001143 |
| pmr_small_vector_test.test | RUN | 0.085109 | 0.201908 | 0.257603 | 0.001182 | 0.001125 | 0.001129 |
| pmr_slist_test.test | RUN | 0.130871 | 0.697062 | 0.603777 | 0.001149 | 0.001227 | 0.001031 |
| pmr_set_test.test | RUN | 0.137243 | 0.340031 | 0.437600 | 0.001130 | 0.001192 | 0.001022 |
| pmr_nest_test.test | RUN | 0.108857 | 0.230801 | 0.290463 | 0.001060 | 0.001221 | 0.001118 |
| pmr_map_test.test | RUN | 0.151578 | 0.348750 | 0.437109 | 0.001291 | 0.001362 | 0.001226 |
| pmr_list_test.test | RUN | 0.094594 | 0.213420 | 0.278526 | 0.001274 | 0.000969 | 0.001398 |
| pmr_hub_test.test | RUN | 0.137019 | 0.296394 | 0.360206 | 0.001120 | 0.001136 | 0.001315 |
| pmr_flat_set_test.test | RUN | 0.105282 | 0.233144 | 0.314499 | 0.001177 | 0.001275 | 0.001207 |
| pmr_flat_map_test.test | RUN | 0.125040 | 0.266767 | 0.365351 | 0.001157 | 0.001263 | 0.001270 |
| pmr_devector_test.test | RUN | 0.082233 | 0.237611 | 0.268998 | 0.001066 | 0.001102 | 0.001227 |
| pmr_deque_test.test | RUN | 0.080713 | 0.194487 | 0.273406 | 0.001246 | 0.001182 | 0.001322 |
| pair_test.test | RUN | 0.204949 | 0.461706 | 0.588070 | 0.001168 | 0.001201 | 0.001248 |
| null_iterators_test.test | RUN | 0.319306 | 0.917199 | 1.020580 | 0.001055 | 0.001372 | 0.001180 |
| node_handle_test.test | RUN | 0.153565 | 1.205706 | 0.427310 | 0.001068 | 0.001376 | 0.001146 |
| node_allocator_test.test | RUN | 2.421815 | 12.464488 | 9.944308 | 0.009392 | 0.008362 | 0.009225 |
| new_delete_resource_test.test | RUN | 0.182916 | 0.716937 | 0.567034 | 0.001798 | 0.001919 | 0.001843 |
| nest_test.test | RUN | 0.456831 | 3.346901 | 2.029248 | 0.001194 | 0.001361 | 0.001222 |
| nest_api_test.test | RUN | 0.827110 | 6.406982 | 4.136888 | 0.002300 | 0.002373 | 0.002461 |
| monotonic_buffer_resource_test.test | RUN | 0.153537 | 1.292649 | 0.466260 | 0.001113 | 0.001217 | 0.001088 |
| memory_resource_test.test | RUN | 0.104795 | 0.331824 | 0.330680 | 0.001171 | 0.001020 | 0.001287 |
| map_test.test | RUN | 4.248808 | 21.033113 | 20.866078 | 0.010615 | 0.010224 | 0.009544 |
| list_test.test | RUN | 2.177321 | 10.666953 | 8.527625 | 0.021022 | 0.022148 | 0.021986 |
| is_constructible_test.test | RUN | 0.062454 | 0.124481 | 0.194612 | 0.000514 | 0.000472 | 0.001370 |
| insert_vs_emplace_test.test | RUN | 0.213740 | 0.849967 | 1.117583 | 0.001242 | 0.001355 | 0.001253 |
| hub_uses_allocator_test.test | RUN | 0.228847 | 0.719574 | 0.795942 | 0.001120 | 0.001198 | 0.001452 |
| hub_stability_test.test | RUN | 0.520134 | 3.429045 | 2.884641 | 0.001523 | 0.001462 | 0.001520 |
| hub_sort_test.test | RUN | 0.327077 | 1.547818 | 1.350759 | 0.528261 | 0.537030 | 0.504517 |
| hub_pocxx_test.test | RUN | 0.296976 | 1.799205 | 1.002298 | 0.001132 | 0.001257 | 0.001203 |
| hub_new_extended_alignment_test.test | RUN | 0.156452 | 0.538957 | 0.520780 | 0.001255 | 0.001274 | 0.001349 |
| hub_exception_safety_test.test | RUN | 0.603192 | 4.312412 | 2.870089 | 0.060382 | 0.065427 | 0.067474 |
| hub_empty_sort_test.test | RUN | 0.180494 | 0.491900 | 0.605909 | 0.001186 | 0.001372 | 0.001254 |
| hub_api_test.test | RUN | 2.053618 | 17.069520 | 9.357911 | 0.003475 | 0.003261 | 0.003088 |
| global_resource_test.test | RUN | 0.099245 | 0.325070 | 0.319272 | 0.001353 | 0.001343 | 0.001396 |
| flat_tree_test.test | RUN | 4.042892 | 27.028811 | 17.871599 | 0.001169 | 0.001347 | 0.001258 |
| flat_set_test.test | RUN | 4.999811 | 34.141847 | 23.089357 | 0.007431 | 0.006648 | 0.006987 |
| flat_set_adaptor_test.test | RUN | 3.740993 | 30.132494 | 18.103751 | 0.007488 | 0.007033 | 0.007196 |
| flat_map_test.test | RUN | 8.150302 | 51.391724 | 37.684291 | 0.008615 | 0.008128 | 0.007626 |
| flat_map_adaptor_test.test | RUN | 5.122330 | 36.911263 | 26.801802 | 0.007569 | 0.007348 | 0.007542 |
| explicit_inst_vector_test.test | RUN | 0.784166 | 5.045912 | 4.028410 | 0.001125 | 0.001270 | 0.001195 |
| explicit_inst_string_test.test | RUN | 1.066149 | 8.902874 | 5.614627 | 0.001469 | 0.001248 | 0.001189 |
| explicit_inst_static_vector_test.test | RUN | 0.093847 | 0.329503 | 0.373585 | 0.001160 | 0.001320 | 0.001234 |
| explicit_inst_stable_vector_test.test | RUN | 0.626684 | 3.198160 | 2.559654 | 0.001218 | 0.001339 | 0.001257 |
| explicit_inst_small_vector_test.test | RUN | 0.514381 | 2.884412 | 2.338523 | 0.001213 | 0.001395 | 0.001200 |
| explicit_inst_slist_test.test | RUN | 0.389959 | 2.607993 | 1.788403 | 0.001274 | 0.001352 | 0.001192 |
| explicit_inst_set_test.test | RUN | 0.551069 | 2.983468 | 2.060628 | 0.001336 | 0.001377 | 0.001268 |
| explicit_inst_map_test.test | RUN | 0.626360 | 3.146218 | 2.313132 | 0.001232 | 0.001356 | 0.001120 |
| explicit_inst_list_test.test | RUN | 0.139104 | 0.721577 | 0.565472 | 0.001251 | 0.001307 | 0.001080 |
| explicit_inst_flat_set_test.test | RUN | 3.389632 | 22.803316 | 13.861505 | 0.001321 | 0.001194 | 0.001275 |
| explicit_inst_flat_map_test.test | RUN | 3.643929 | 24.102179 | 15.151199 | 0.001298 | 0.001330 | 0.001237 |
| explicit_inst_devector_test.test | RUN | 0.431556 | 2.785354 | 1.951231 | 0.001140 | 0.001161 | 0.001265 |
| explicit_inst_deque_test.test | RUN | 0.435419 | 3.052868 | 2.053191 | 0.001317 | 0.001207 | 0.001164 |
| devector_test.test | RUN | 6.542925 | 38.537567 | 24.902435 | 0.003069 | 0.003166 | 0.003926 |
| devector_options_test.test | RUN | 0.271537 | 1.680263 | 1.054112 | 0.001527 | 0.001592 | 0.001338 |
| deque_test.test | RUN | 4.387161 | 19.445162 | 17.737077 | 0.363241 | 0.359931 | 0.436182 |
| deque_options_test.test | RUN | 0.197254 | 0.569521 | 0.771906 | 0.001314 | 0.001276 | 0.001325 |
| copy_move_algo_test.test | RUN | 0.192162 | 0.721977 | 0.658603 | 0.001778 | 0.001341 | 0.001454 |
| common_iterator_test.test | RUN | 0.013849 | 0.035986 | 0.038278 | 0.000537 | 0.000533 | 0.001288 |
| boost_iterator_comp_test.test | RUN | 0.281288 | 0.867100 | 1.000548 | 0.001528 | 0.001216 | 0.001276 |
| allocator_traits_test.test | RUN | 0.162237 | 0.369922 | 0.470850 | 0.001227 | 0.001263 | 0.001370 |
| alloc_full_test.test | RUN | 0.185518 | 0.802155 | 0.674850 | 0.004043 | 0.003905 | 0.004120 |
| alloc_basic_test.test | RUN | 0.152883 | 0.573201 | 0.511649 | 0.001300 | 0.001482 | 0.001457 |
| adaptive_pool_test.test | RUN | 1.736598 | 12.837517 | 10.122721 | 0.008652 | 0.007946 | 0.012328 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.012× | 1.001×, 1.023× | 0.998× |
| clang | 1.068× | 1.065×, 1.070× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46032707836).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adaptive_pool_test.test | 3 | 0.008920s | 0.008281s | 0.009137s | byte equality observed |
| alloc_basic_test.test | 10 | 0.000821s | 0.000831s | 0.000814s | byte equality observed |
| alloc_full_test.test | 8 | 0.002697s | 0.002686s | 0.002883s | byte equality observed |
| allocator_traits_test.test | 10 | 0.000783s | 0.000764s | 0.000754s | byte equality observed |
| boost_iterator_comp_test.test | 10 | 0.000794s | 0.000795s | 0.000802s | byte equality observed |
| common_iterator_test.test | 10 | 0.000364s | 0.000356s | 0.000772s | byte equality observed |
| copy_move_algo_test.test | 10 | 0.001174s | 0.000913s | 0.000991s | byte equality observed |
| deque_options_test.test | 10 | 0.000841s | 0.000849s | 0.000812s | byte equality observed |
| deque_test.test | 1 | 0.374105s | 0.370706s | 0.446827s | byte equality observed |
| devector_options_test.test | 10 | 0.000887s | 0.000842s | 0.000834s | byte equality observed |
| devector_test.test | 5 | 0.002918s | 0.002815s | 0.003621s | byte equality observed |
| explicit_inst_deque_test.test | 10 | 0.000730s | 0.000715s | 0.000723s | byte equality observed |
| explicit_inst_devector_test.test | 10 | 0.000717s | 0.000716s | 0.000721s | byte equality observed |
| explicit_inst_flat_map_test.test | 10 | 0.000737s | 0.000754s | 0.000713s | byte equality observed |
| explicit_inst_flat_set_test.test | 10 | 0.000733s | 0.000730s | 0.000738s | byte equality observed |
| explicit_inst_list_test.test | 10 | 0.000727s | 0.000708s | 0.000716s | byte equality observed |
| explicit_inst_map_test.test | 10 | 0.000728s | 0.000729s | 0.000715s | byte equality observed |
| explicit_inst_set_test.test | 10 | 0.000719s | 0.000748s | 0.000731s | byte equality observed |
| explicit_inst_slist_test.test | 10 | 0.000731s | 0.000750s | 0.000740s | byte equality observed |
| explicit_inst_small_vector_test.test | 10 | 0.000730s | 0.000738s | 0.000718s | byte equality observed |
| explicit_inst_stable_vector_test.test | 10 | 0.000723s | 0.000735s | 0.000717s | byte equality observed |
| explicit_inst_static_vector_test.test | 10 | 0.000718s | 0.000709s | 0.000716s | byte equality observed |
| explicit_inst_string_test.test | 10 | 0.000727s | 0.000724s | 0.000718s | byte equality observed |
| explicit_inst_vector_test.test | 10 | 0.000739s | 0.000710s | 0.000725s | byte equality observed |
| flat_map_adaptor_test.test | 4 | 0.005699s | 0.005377s | 0.005444s | byte equality observed |
| flat_map_test.test | 4 | 0.006203s | 0.005754s | 0.005794s | byte equality observed |
| flat_set_adaptor_test.test | 4 | 0.005563s | 0.005039s | 0.005353s | byte equality observed |
| flat_set_test.test | 4 | 0.005508s | 0.004848s | 0.005207s | byte equality observed |
| flat_tree_test.test | 10 | 0.000743s | 0.000723s | 0.000741s | byte equality observed |
| global_resource_test.test | 10 | 0.000765s | 0.000752s | 0.000759s | byte equality observed |
| hub_api_test.test | 8 | 0.002552s | 0.002243s | 0.002164s | byte equality observed |
| hub_empty_sort_test.test | 10 | 0.000736s | 0.000743s | 0.000730s | byte equality observed |
| hub_exception_safety_test.test | 1 | 0.053179s | 0.058219s | 0.055319s | byte equality observed |
| hub_new_extended_alignment_test.test | 10 | 0.000824s | 0.000816s | 0.000810s | byte equality observed |
| hub_pocxx_test.test | 10 | 0.000776s | 0.000770s | 0.000753s | byte equality observed |
| hub_sort_test.test | 1 | 0.429663s | 0.445599s | 0.413836s | byte equality observed |
| hub_stability_test.test | 10 | 0.000981s | 0.000954s | 0.001034s | byte equality observed |
| hub_uses_allocator_test.test | 10 | 0.000759s | 0.000744s | 0.000753s | byte equality observed |
| insert_vs_emplace_test.test | 10 | 0.000774s | 0.000791s | 0.000774s | byte equality observed |
| is_constructible_test.test | 10 | 0.000348s | 0.000352s | 0.000715s | byte equality observed |
| list_test.test | 2 | 0.015515s | 0.015573s | 0.016045s | byte equality observed |
| map_test.test | 3 | 0.007656s | 0.007398s | 0.007311s | byte equality observed |
| memory_resource_test.test | 10 | 0.000767s | 0.000761s | 0.000776s | byte equality observed |
| monotonic_buffer_resource_test.test | 10 | 0.000767s | 0.000761s | 0.000764s | byte equality observed |
| nest_api_test.test | 10 | 0.001648s | 0.001661s | 0.001664s | byte equality observed |
| nest_test.test | 10 | 0.000783s | 0.000785s | 0.000788s | byte equality observed |
| new_delete_resource_test.test | 10 | 0.001138s | 0.001137s | 0.001127s | byte equality observed |
| node_allocator_test.test | 3 | 0.006654s | 0.006599s | 0.006734s | byte equality observed |
| node_handle_test.test | 10 | 0.000773s | 0.000776s | 0.000763s | byte equality observed |
| null_iterators_test.test | 10 | 0.000753s | 0.000747s | 0.000764s | byte equality observed |
| pair_test.test | 10 | 0.000755s | 0.000751s | 0.000763s | byte equality observed |
| pmr_deque_test.test | 10 | 0.000737s | 0.000754s | 0.000735s | byte equality observed |
| pmr_devector_test.test | 10 | 0.000757s | 0.000732s | 0.000753s | byte equality observed |
| pmr_flat_map_test.test | 10 | 0.000748s | 0.000737s | 0.000749s | byte equality observed |
| pmr_flat_set_test.test | 10 | 0.000749s | 0.000727s | 0.000747s | byte equality observed |
| pmr_hub_test.test | 10 | 0.000747s | 0.000726s | 0.000757s | byte equality observed |
| pmr_list_test.test | 10 | 0.000739s | 0.000753s | 0.000751s | byte equality observed |
| pmr_map_test.test | 10 | 0.000750s | 0.000742s | 0.000749s | byte equality observed |
| pmr_nest_test.test | 10 | 0.000744s | 0.000744s | 0.000740s | byte equality observed |
| pmr_set_test.test | 10 | 0.000737s | 0.000753s | 0.000759s | byte equality observed |
| pmr_slist_test.test | 10 | 0.000745s | 0.000729s | 0.000744s | byte equality observed |
| pmr_small_vector_test.test | 10 | 0.000727s | 0.000735s | 0.000745s | byte equality observed |
| pmr_stable_vector_test.test | 10 | 0.000738s | 0.000754s | 0.000749s | byte equality observed |
| pmr_string_test.test | 10 | 0.000357s | 0.000333s | 0.000768s | byte equality observed |
| pmr_vector_test.test | 10 | 0.000354s | 0.000344s | 0.000805s | byte equality observed |
| polymorphic_allocator_test.test | 10 | 0.000782s | 0.000764s | 0.000792s | byte equality observed |
| resource_adaptor_test.test | 10 | 0.000767s | 0.000767s | 0.000816s | byte equality observed |
| scoped_allocator_adaptor_test.test | 10 | 0.000755s | 0.000748s | 0.000799s | byte equality observed |
| scoped_allocator_usage_test.test | 10 | 0.000766s | 0.000773s | 0.000812s | byte equality observed |
| segtor_options_test.test | 10 | 0.000802s | 0.000797s | 0.000782s | byte equality observed |
| segtor_test.test | 1 | 0.457859s | 0.464170s | 0.504169s | byte equality observed |
| set_test.test | 2 | 0.010728s | 0.009715s | 0.010339s | byte equality observed |
| slist_test.test | 2 | 0.016257s | 0.016354s | 0.016046s | byte equality observed |
| small_vector_options_test.test | 10 | 0.000844s | 0.000854s | 0.000828s | byte equality observed |
| small_vector_test.test | 7 | 0.001700s | 0.001595s | 0.002748s | byte equality observed |
| stable_vector_test.test | 1 | 0.027879s | 0.028172s | 0.028616s | byte equality observed |
| static_vector_options_test.test | 10 | 0.000807s | 0.000795s | 0.000795s | byte equality observed |
| static_vector_test.test | 8 | 0.001064s | 0.000991s | 0.001013s | byte equality observed |
| string_options_test.test | 10 | 0.000782s | 0.000796s | 0.000768s | byte equality observed |
| string_test.test | 3 | 0.009211s | 0.009018s | 0.009308s | byte equality observed |
| string_view_compat_test.test | 10 | 0.000769s | 0.000765s | 0.000730s | byte equality observed |
| synchronized_pool_resource_test.test | 10 | 0.000789s | 0.000780s | 0.000780s | byte equality observed |
| throw_exception_test.test | 10 | 0.000734s | 0.000735s | 0.000717s | byte equality observed |
| tree_test.test | 10 | 0.000730s | 0.000748s | 0.000702s | byte equality observed |
| unsynchronized_pool_resource_test.test | 10 | 0.000776s | 0.000789s | 0.000767s | byte equality observed |
| uses_allocator_construction_test.test | 10 | 0.000723s | 0.000738s | 0.000715s | byte equality observed |
| uses_allocator_test.test | 10 | 0.000333s | 0.000343s | 0.000706s | byte equality observed |
| vector_options_test.test | 10 | 0.000846s | 0.000866s | 0.000840s | byte equality observed |
| vector_test.test | 5 | 0.002972s | 0.002965s | 0.003939s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46032707836).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
