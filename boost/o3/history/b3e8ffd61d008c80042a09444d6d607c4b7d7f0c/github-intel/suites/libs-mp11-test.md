# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.026731 | 0.059984 | 0.087571 | — | — | — |
| complex_h.test | COMPILE | 0.114110 | 0.255480 | 0.343190 | — | — | — |
| mp_size.test | RUN | 0.140092 | 0.850443 | 0.478049 | 0.001217 | 0.001304 | 0.001058 |
| mp_size_2.test | RUN | 0.012001 | 0.029631 | 0.041989 | 0.000451 | 0.000499 | 0.001130 |
| mp_empty.test | RUN | 0.124369 | 0.534236 | 0.448066 | 0.001191 | 0.001255 | 0.001085 |
| mp_empty_2.test | RUN | 0.011969 | 0.031219 | 0.042974 | 0.000366 | 0.000517 | 0.001031 |
| mp_assign.test | RUN | 0.157703 | 1.129778 | 0.600133 | 0.001106 | 0.001423 | 0.001065 |
| mp_assign_2.test | RUN | 0.012075 | 0.031025 | 0.042555 | 0.000502 | 0.000547 | 0.001042 |
| mp_clear.test | RUN | 0.133406 | 0.476423 | 0.447492 | 0.001103 | 0.001352 | 0.001128 |
| mp_clear_2.test | RUN | 0.012454 | 0.029967 | 0.042877 | 0.000449 | 0.000468 | 0.001222 |
| mp_front.test | RUN | 0.139066 | 0.757012 | 0.506760 | 0.001092 | 0.001333 | 0.001150 |
| mp_front_2.test | RUN | 0.012001 | 0.029859 | 0.042355 | 0.000470 | 0.000491 | 0.001206 |
| mp_pop_front.test | RUN | 0.133892 | 0.808211 | 0.519110 | 0.001028 | 0.001265 | 0.001217 |
| mp_pop_front_2.test | RUN | 0.012117 | 0.028926 | 0.040463 | 0.000509 | 0.000490 | 0.001094 |
| mp_second.test | RUN | 0.130856 | 0.504522 | 0.466901 | 0.001079 | 0.001209 | 0.001130 |
| mp_second_2.test | RUN | 0.011898 | 0.030427 | 0.043896 | 0.000421 | 0.000491 | 0.001104 |
| mp_third.test | RUN | 0.129945 | 0.469619 | 0.455740 | 0.001097 | 0.001372 | 0.001253 |
| mp_third_2.test | RUN | 0.012121 | 0.028272 | 0.043118 | 0.000454 | 0.000478 | 0.001125 |
| mp_push_front.test | RUN | 0.182166 | 1.742114 | 0.831343 | 0.001109 | 0.001306 | 0.001251 |
| mp_push_front_2.test | RUN | 0.011785 | 0.029605 | 0.043535 | 0.000472 | 0.000534 | 0.001060 |
| mp_push_back.test | RUN | 0.183307 | 1.724157 | 0.829374 | 0.001146 | 0.001344 | 0.001051 |
| mp_push_back_2.test | RUN | 0.011602 | 0.031171 | 0.044264 | 0.000452 | 0.000486 | 0.001174 |
| mp_rename.test | RUN | 0.167567 | 1.577065 | 0.711879 | 0.001222 | 0.001350 | 0.001095 |
| mp_rename_2.test | RUN | 0.011370 | 0.030548 | 0.043741 | 0.000483 | 0.000597 | 0.001176 |
| mp_append.test | RUN | 0.172552 | 1.820834 | 0.783907 | 0.001082 | 0.001500 | 0.001120 |
| mp_append_2.test | RUN | 0.411396 | 4.021607 | 1.069071 | 0.001088 | 0.001325 | 0.001113 |
| mp_append_3.test | RUN | 0.012120 | 0.030915 | 0.042632 | 0.000497 | 0.000521 | 0.001093 |
| mp_append_sf.test | RUN | 0.129669 | 0.426756 | 0.419337 | 0.001113 | 0.001191 | 0.001153 |
| mp_replace_front.test | RUN | 0.163202 | 1.260105 | 0.630384 | 0.001213 | 0.001276 | 0.001055 |
| mp_replace_front_2.test | RUN | 0.011455 | 0.030112 | 0.043345 | 0.000483 | 0.000443 | 0.001232 |
| mp_replace_second.test | RUN | 0.158095 | 0.815508 | 0.587634 | 0.001169 | 0.001069 | 0.001065 |
| mp_replace_second_2.test | RUN | 0.012048 | 0.030484 | 0.043854 | 0.000450 | 0.000542 | 0.001038 |
| mp_replace_third.test | RUN | 0.148735 | 0.678100 | 0.538286 | 0.001118 | 0.001282 | 0.001111 |
| mp_replace_third_2.test | RUN | 0.011652 | 0.030062 | 0.041097 | 0.000424 | 0.000567 | 0.001034 |
| mp_apply_q.test | RUN | 0.167550 | 1.580303 | 0.715807 | 0.001202 | 0.001281 | 0.001171 |
| mp_apply_q_sf.test | RUN | 0.135976 | 0.440184 | 0.422275 | 0.001232 | 0.001311 | 0.001097 |
| mp_is_list.test | RUN | 0.137919 | 0.532614 | 0.447244 | 0.001111 | 0.001390 | 0.001249 |
| mp_list_c.test | RUN | 0.141712 | 0.637567 | 0.503000 | 0.001191 | 0.001385 | 0.001215 |
| mp_transform_front.test | RUN | 0.159920 | 1.280627 | 0.597855 | 0.001176 | 0.001431 | 0.001176 |
| mp_transform_front_2.test | RUN | 0.012174 | 0.030433 | 0.043458 | 0.000455 | 0.000551 | 0.001075 |
| mp_transform_second.test | RUN | 0.152304 | 1.096458 | 0.579954 | 0.001057 | 0.001320 | 0.001121 |
| mp_transform_second_2.test | RUN | 0.012501 | 0.030506 | 0.041262 | 0.000432 | 0.000487 | 0.001085 |
| mp_transform_third.test | RUN | 0.144585 | 0.838583 | 0.515874 | 0.001062 | 0.001320 | 0.001115 |
| mp_transform_third_2.test | RUN | 0.012733 | 0.030389 | 0.041119 | 0.000464 | 0.000513 | 0.001041 |
| mp_list_v.test | RUN | 0.012436 | 0.030010 | 0.040757 | 0.000441 | 0.000476 | 0.000947 |
| mp_rename_v.test | RUN | 0.011443 | 0.030659 | 0.039293 | 0.000490 | 0.000592 | 0.001075 |
| mp_is_value_list.test | RUN | 0.123858 | 0.328844 | 0.417827 | 0.001167 | 0.001182 | 0.001056 |
| mp_transform.test | RUN | 0.331399 | 2.726672 | 1.331298 | 0.001230 | 0.001335 | 0.001291 |
| mp_transform_2.test | RUN | 0.120258 | 0.298324 | 0.380852 | 0.001056 | 0.001381 | 0.001060 |
| mp_transform_q.test | RUN | 0.319315 | 2.566558 | 1.307546 | 0.001070 | 0.001393 | 0.001266 |
| mp_transform_q_2.test | RUN | 0.326115 | 0.807513 | 1.633912 | 0.001106 | 0.001390 | 0.001208 |
| mp_transform_sf.test | RUN | 0.140475 | 0.449094 | 0.465465 | 0.001100 | 0.001367 | 0.001303 |
| mp_transform_if.test | RUN | 0.175508 | 1.270242 | 0.697379 | 0.001132 | 0.001401 | 0.001333 |
| mp_transform_if_q.test | RUN | 0.172559 | 1.293639 | 0.695724 | 0.001082 | 0.000933 | 0.001112 |
| mp_filter.test | RUN | 0.149108 | 0.747051 | 0.514549 | 0.001094 | 0.001246 | 0.001020 |
| mp_fill.test | RUN | 0.140329 | 0.558038 | 0.493808 | 0.001090 | 0.001295 | 0.001159 |
| mp_fill_2.test | RUN | 0.021164 | 0.048252 | 0.072032 | 0.000462 | 0.000523 | 0.001140 |
| mp_count.test | RUN | 0.273151 | 1.364711 | 0.753206 | 0.001355 | 0.001316 | 0.001147 |
| mp_count_if.test | RUN | 0.281691 | 1.372443 | 0.826743 | 0.001096 | 0.001426 | 0.001066 |
| mp_count_if_q.test | RUN | 0.141312 | 0.895485 | 0.507432 | 0.001219 | 0.001155 | 0.001156 |
| mp_contains.test | RUN | 0.135909 | 0.543321 | 0.476420 | 0.001301 | 0.001150 | 0.001156 |
| mp_starts_with.test | RUN | 0.139240 | 0.545967 | 0.461934 | 0.001050 | 0.001286 | 0.001196 |
| mp_starts_with_sf.test | RUN | 0.133758 | 0.456231 | 0.454495 | 0.001135 | 0.001217 | 0.001094 |
| mp_repeat.test | RUN | 0.212849 | 2.283921 | 0.907728 | 0.001056 | 0.001108 | 0.001116 |
| mp_repeat_2.test | RUN | 0.021078 | 0.045222 | 0.071262 | 0.000472 | 0.000524 | 0.001135 |
| mp_repeat_3.test | RUN | 0.173620 | 0.288317 | 0.426273 | 0.001119 | 0.001296 | 0.001158 |
| mp_product.test | RUN | 0.167826 | 1.368860 | 0.631586 | 0.001113 | 0.001260 | 0.001122 |
| mp_drop.test | RUN | 0.172533 | 1.710214 | 0.744942 | 0.001056 | 0.001325 | 0.001131 |
| mp_drop_2.test | RUN | 0.020900 | 0.047409 | 0.074057 | 0.000495 | 0.000492 | 0.001048 |
| mp_iota.test | RUN | 0.173490 | 1.435510 | 0.640510 | 0.001228 | 0.001258 | 0.001230 |
| mp_iota_2.test | RUN | 0.186197 | 1.733228 | 0.762456 | 0.001142 | 0.001406 | 0.001138 |
| mp_at.test | RUN | 0.149147 | 0.746827 | 0.530699 | 0.001133 | 0.001300 | 0.001185 |
| mp_at_2.test | RUN | 0.021103 | 0.046246 | 0.071969 | 0.000489 | 0.000494 | 0.001141 |
| mp_at_sf.test | RUN | 0.139738 | 0.454628 | 0.445960 | 0.001136 | 0.001386 | 0.001180 |
| mp_take.test | RUN | 0.243246 | 2.245801 | 0.895219 | 0.001033 | 0.001268 | 0.001291 |
| mp_take_2.test | RUN | 0.020856 | 0.046284 | 0.068540 | 0.000493 | 0.000495 | 0.001094 |
| mp_slice.test | RUN | 0.286494 | 2.280638 | 1.162529 | 0.001232 | 0.001305 | 0.001162 |
| mp_slice_2.test | RUN | 0.020753 | 0.046551 | 0.071598 | 0.000469 | 0.000480 | 0.001074 |
| mp_replace.test | RUN | 0.174138 | 1.152122 | 0.721940 | 0.001174 | 0.001195 | 0.001200 |
| mp_replace_if.test | RUN | 0.168925 | 0.990217 | 0.675816 | 0.001192 | 0.001200 | 0.001122 |
| mp_replace_if_q.test | RUN | 0.161611 | 1.014362 | 0.666223 | 0.001108 | 0.001279 | 0.001142 |
| mp_copy_if.test | RUN | 0.172446 | 1.397983 | 0.636809 | 0.001330 | 0.001284 | 0.001223 |
| mp_copy_if_q.test | RUN | 0.165723 | 1.435779 | 0.642537 | 0.001062 | 0.001261 | 0.001327 |
| mp_remove.test | RUN | 0.164093 | 0.955869 | 0.664949 | 0.001194 | 0.001454 | 0.001173 |
| mp_remove_if.test | RUN | 0.170823 | 1.490337 | 0.671926 | 0.001008 | 0.001383 | 0.001238 |
| mp_remove_if_q.test | RUN | 0.170336 | 1.497641 | 0.680456 | 0.001122 | 0.001283 | 0.001118 |
| mp_partition.test | RUN | 0.167802 | 1.418226 | 0.732913 | 0.001128 | 0.001290 | 0.001088 |
| mp_partition_q.test | RUN | 0.174037 | 1.419211 | 0.745421 | 0.001303 | 0.001395 | 0.001105 |
| mp_sort.test | RUN | 0.161404 | 1.001316 | 0.626829 | 0.001164 | 0.001277 | 0.001136 |
| mp_sort_q.test | RUN | 0.163377 | 1.003515 | 0.630974 | 0.001192 | 0.001310 | 0.001139 |
| mp_find.test | RUN | 0.155597 | 1.090905 | 0.551125 | 0.001106 | 0.001174 | 0.001194 |
| mp_find_if.test | RUN | 0.150273 | 1.007197 | 0.528863 | 0.001154 | 0.001146 | 0.001091 |
| mp_find_if_q.test | RUN | 0.163309 | 1.102648 | 0.632747 | 0.001075 | 0.001317 | 0.001139 |
| mp_reverse.test | RUN | 0.369392 | 2.994903 | 1.263852 | 0.001089 | 0.001247 | 0.001198 |
| mp_fold.test | RUN | 0.614318 | 2.339324 | 3.245804 | 0.001406 | 0.001356 | 0.001110 |
| mp_fold_q.test | RUN | 0.153694 | 1.010131 | 0.608380 | 0.001348 | 0.001192 | 0.001173 |
| mp_fold_q_sf.test | RUN | 0.137234 | 0.446240 | 0.462910 | 0.001128 | 0.001267 | 0.001086 |
| mp_reverse_fold.test | RUN | 0.287269 | 2.207871 | 0.903832 | 0.001073 | 0.001434 | 0.001125 |
| mp_reverse_fold_q.test | RUN | 0.163037 | 1.213106 | 0.639117 | 0.001123 | 0.001248 | 0.001309 |
| mp_unique.test | RUN | 0.161041 | 1.102671 | 0.623836 | 0.001181 | 0.001262 | 0.001111 |
| mp_unique_if.test | RUN | 0.305172 | 2.343817 | 1.029856 | 0.001276 | 0.001254 | 0.001177 |
| mp_unique_if_q.test | RUN | 0.263808 | 2.260573 | 0.803304 | 0.001194 | 0.001354 | 0.001263 |
| mp_all_of.test | RUN | 0.394910 | 1.209301 | 1.047391 | 0.001116 | 0.001340 | 0.001170 |
| mp_all_of_q.test | RUN | 0.135920 | 0.533335 | 0.460767 | 0.001268 | 0.001337 | 0.001228 |
| mp_any_of.test | RUN | 0.378741 | 1.257499 | 1.039099 | 0.001182 | 0.001287 | 0.001108 |
| mp_any_of_q.test | RUN | 0.144544 | 0.524553 | 0.478375 | 0.001204 | 0.001279 | 0.001201 |
| mp_none_of.test | RUN | 0.375689 | 1.269285 | 1.024244 | 0.001068 | 0.001301 | 0.001130 |
| mp_none_of_q.test | RUN | 0.147224 | 0.530708 | 0.448611 | 0.001129 | 0.001309 | 0.001124 |
| mp_replace_at.test | RUN | 0.176167 | 1.101370 | 0.731048 | 0.001110 | 0.001272 | 0.001318 |
| mp_replace_at_c.test | RUN | 0.175640 | 1.099180 | 0.730356 | 0.001172 | 0.001215 | 0.001173 |
| mp_for_each.test | RUN | 0.156541 | 0.715540 | 0.702606 | 0.001066 | 0.001192 | 0.001169 |
| mp_insert.test | RUN | 0.268969 | 2.291609 | 1.037292 | 0.001168 | 0.001158 | 0.001204 |
| mp_insert_2.test | RUN | 0.023224 | 0.046725 | 0.069057 | 0.000453 | 0.000491 | 0.000747 |
| mp_erase.test | RUN | 0.299297 | 2.398676 | 1.214013 | 0.001358 | 0.001268 | 0.001074 |
| mp_erase_2.test | RUN | 0.020948 | 0.046515 | 0.068626 | 0.000425 | 0.000487 | 0.001191 |
| mp_with_index.test | RUN | 0.387786 | 4.746885 | 2.617457 | 0.001475 | 0.001786 | 0.001342 |
| mp_with_index_cx.test | RUN | 0.003100 | 0.014475 | 0.022157 | 0.000452 | 0.000501 | 0.001241 |
| mp_from_sequence.test | RUN | 0.169743 | 1.273079 | 0.687079 | 0.001271 | 0.001321 | 0.001222 |
| mp_from_sequence_2.test | RUN | 0.182648 | 1.504497 | 0.747970 | 0.001171 | 0.001332 | 0.001178 |
| mp_from_sequence_3.test | RUN | 0.138760 | 0.654556 | 0.531883 | 0.001099 | 0.001347 | 0.001208 |
| mp_min_element.test | RUN | 0.142569 | 0.578915 | 0.494447 | 0.001049 | 0.001227 | 0.001159 |
| mp_min_element_2.test | RUN | 0.021912 | 0.045761 | 0.070516 | 0.000510 | 0.000463 | 0.001150 |
| mp_min_element_q.test | RUN | 0.142376 | 0.587602 | 0.472046 | 0.001167 | 0.001220 | 0.001280 |
| mp_min_element_q_2.test | RUN | 0.021506 | 0.045251 | 0.070676 | 0.000452 | 0.000484 | 0.001072 |
| mp_max_element.test | RUN | 0.147679 | 0.579291 | 0.481061 | 0.001112 | 0.001355 | 0.001178 |
| mp_max_element_2.test | RUN | 0.020907 | 0.044825 | 0.068609 | 0.000483 | 0.000499 | 0.001055 |
| mp_max_element_q.test | RUN | 0.143129 | 0.581137 | 0.470295 | 0.001074 | 0.001361 | 0.001136 |
| mp_max_element_q_2.test | RUN | 0.020745 | 0.044114 | 0.068283 | 0.000481 | 0.000489 | 0.001066 |
| mp_nth_element.test | RUN | 0.157250 | 0.819868 | 0.605699 | 0.001165 | 0.001155 | 0.001249 |
| mp_nth_element_q.test | RUN | 0.157086 | 0.829651 | 0.592832 | 0.001140 | 0.001322 | 0.001122 |
| mp_back.test | RUN | 0.154589 | 0.690878 | 0.537506 | 0.001112 | 0.001320 | 0.001026 |
| mp_back_2.test | RUN | 0.021000 | 0.045176 | 0.071604 | 0.000458 | 0.000531 | 0.001156 |
| mp_pop_back.test | RUN | 0.453497 | 4.587929 | 1.203357 | 0.001096 | 0.001228 | 0.001172 |
| mp_pop_back_2.test | RUN | 0.021093 | 0.046546 | 0.070297 | 0.000492 | 0.000526 | 0.001054 |
| mp_flatten.test | RUN | 0.184786 | 1.632786 | 0.796625 | 0.001352 | 0.001300 | 0.001052 |
| mp_rotate_left.test | RUN | 0.183823 | 1.749081 | 0.781891 | 0.001049 | 0.001214 | 0.001127 |
| mp_rotate_right.test | RUN | 0.182113 | 1.766749 | 0.792938 | 0.001298 | 0.001331 | 0.000853 |
| mp_power_set.test | RUN | 0.184670 | 1.695798 | 0.809091 | 0.001195 | 0.001333 | 0.001260 |
| mp_partial_sum.test | RUN | 0.249112 | 2.239121 | 0.920469 | 0.001360 | 0.001386 | 0.001099 |
| mp_iterate.test | RUN | 0.159311 | 0.666697 | 0.615757 | 0.001114 | 0.001286 | 0.001232 |
| mp_pairwise_fold.test | RUN | 0.182043 | 1.558788 | 0.802267 | 0.001030 | 0.001207 | 0.001128 |
| mp_pairwise_fold_q.test | RUN | 0.140155 | 0.439702 | 0.446140 | 0.001159 | 0.001347 | 0.001178 |
| mp_sliding_fold.test | RUN | 0.373129 | 3.007678 | 1.549393 | 0.001098 | 0.001330 | 0.001103 |
| mp_sliding_fold_q.test | RUN | 0.362597 | 2.946724 | 1.536455 | 0.001229 | 0.001350 | 0.001044 |
| mp_intersperse.test | RUN | 0.169417 | 1.090547 | 0.701465 | 0.001132 | 0.001267 | 0.001276 |
| mp_split.test | RUN | 0.252481 | 2.110077 | 0.978360 | 0.001113 | 0.001271 | 0.001163 |
| mp_join.test | RUN | 0.195005 | 1.761559 | 0.873676 | 0.001118 | 0.001213 | 0.001186 |
| integral.test | RUN | 0.146614 | 0.784925 | 0.534416 | 0.001130 | 0.001216 | 0.001245 |
| mp_value.test | RUN | 0.009647 | 0.023975 | 0.033643 | 0.000470 | 0.000522 | 0.001085 |
| mp_identity.test | RUN | 0.139411 | 0.710721 | 0.505745 | 0.001098 | 0.001240 | 0.001091 |
| mp_inherit.test | RUN | 0.134782 | 0.500551 | 0.459810 | 0.001046 | 0.001163 | 0.001149 |
| mp_if.test | RUN | 0.135457 | 0.578886 | 0.464356 | 0.001124 | 0.001197 | 0.001240 |
| mp_if_sf.test | RUN | 0.127735 | 0.417272 | 0.426174 | 0.001107 | 0.001199 | 0.001159 |
| mp_eval_if.test | RUN | 0.134209 | 0.626045 | 0.487055 | 0.001154 | 0.001246 | 0.001183 |
| mp_eval_if_sf.test | RUN | 0.129511 | 0.426417 | 0.422778 | 0.001087 | 0.001179 | 0.001170 |
| mp_valid.test | RUN | 0.129795 | 0.431988 | 0.437436 | 0.001088 | 0.001145 | 0.001336 |
| mp_defer.test | RUN | 0.144900 | 0.754476 | 0.540650 | 0.001090 | 0.001295 | 0.001232 |
| mp_quote.test | RUN | 0.143762 | 0.769432 | 0.554187 | 0.001088 | 0.001298 | 0.001198 |
| mp_invoke_q.test | RUN | 0.149878 | 0.997759 | 0.599134 | 0.001054 | 0.001280 | 0.000877 |
| mp_invoke_q_sf.test | RUN | 0.126300 | 0.432198 | 0.434209 | 0.001042 | 0.001273 | 0.001061 |
| mp_quote_trait.test | RUN | 0.146995 | 0.839974 | 0.535829 | 0.001115 | 0.001268 | 0.001277 |
| mp_cond.test | RUN | 0.130570 | 0.498651 | 0.461564 | 0.001133 | 0.001364 | 0.001142 |
| mp_cond_sf.test | RUN | 0.125719 | 0.440305 | 0.427952 | 0.001137 | 0.001302 | 0.001085 |
| mp_not_fn.test | RUN | 0.130681 | 0.431301 | 0.423211 | 0.000920 | 0.001310 | 0.001136 |
| mp_eval_if_not.test | RUN | 0.137032 | 0.629073 | 0.488472 | 0.001089 | 0.001245 | 0.001269 |
| mp_eval_or.test | RUN | 0.127990 | 0.334415 | 0.441358 | 0.001115 | 0.001300 | 0.001246 |
| mp_compose.test | RUN | 0.146707 | 1.026792 | 0.583587 | 0.001206 | 0.001179 | 0.001076 |
| mp_valid_and_true.test | RUN | 0.132971 | 0.523666 | 0.452977 | 0.001054 | 0.001281 | 0.001150 |
| mp_compose_sf.test | COMPILE | 0.029048 | 0.057913 | 0.100568 | — | — | — |
| integer_sequence.test | RUN | 0.161090 | 1.032565 | 0.657251 | 0.001059 | 0.001334 | 0.001195 |
| tuple_for_each.test | RUN | 0.124578 | 0.375758 | 0.457373 | 0.001172 | 0.001349 | 0.001229 |
| tuple_for_each_cx.test | COMPILE | 0.023394 | 0.053844 | 0.081244 | — | — | — |
| tuple_apply.test | RUN | 0.135058 | 0.365805 | 0.469205 | 0.001024 | 0.001161 | 0.001067 |
| tuple_apply_cx.test | COMPILE | 0.033057 | 0.074055 | 0.110295 | — | — | — |
| construct_from_tuple.test | RUN | 0.136312 | 0.393365 | 0.463720 | 0.001160 | 0.001102 | 0.001249 |
| construct_from_tuple_cx.test | COMPILE | 0.036542 | 0.073931 | 0.108098 | — | — | — |
| tuple_transform.test | RUN | 0.214522 | 0.797092 | 0.889384 | 0.001243 | 0.001192 | 0.001043 |
| tuple_transform_2.test | RUN | 0.183860 | 0.579355 | 0.795941 | 0.001122 | 0.001074 | 0.001067 |
| tuple_transform_cx.test | COMPILE | 0.030278 | 0.069545 | 0.102185 | — | — | — |
| mp_set_contains.test | RUN | 0.136851 | 0.530965 | 0.464951 | 0.001157 | 0.001270 | 0.001211 |
| mp_set_push_back.test | RUN | 0.184461 | 1.680649 | 0.813290 | 0.001086 | 0.001293 | 0.001261 |
| mp_set_push_front.test | RUN | 0.237301 | 2.004114 | 0.937537 | 0.001148 | 0.001206 | 0.001234 |
| mp_is_set.test | RUN | 0.138418 | 0.531165 | 0.466898 | 0.001486 | 0.001191 | 0.001143 |
| mp_set_union.test | RUN | 0.177073 | 1.425649 | 0.765916 | 0.001125 | 0.001363 | 0.001147 |
| mp_set_union_sf.test | RUN | 0.129920 | 0.421475 | 0.437047 | 0.001035 | 0.001163 | 0.001131 |
| mp_set_difference.test | RUN | 0.160511 | 1.103141 | 0.641051 | 0.001261 | 0.001235 | 0.001136 |
| mp_set_difference_sf.test | RUN | 0.128907 | 0.420970 | 0.433966 | 0.001171 | 0.001180 | 0.001096 |
| mp_set_intersection.test | RUN | 0.154768 | 1.101877 | 0.628875 | 0.001040 | 0.001368 | 0.001202 |
| mp_set_intersection_sf.test | RUN | 0.135993 | 0.425896 | 0.431662 | 0.000999 | 0.001278 | 0.001130 |
| mp_all.test | RUN | 0.133699 | 0.527702 | 0.454394 | 0.001214 | 0.001362 | 0.001131 |
| mp_all_2.test | RUN | 0.386583 | 1.136397 | 1.060344 | 0.001197 | 0.001315 | 0.001137 |
| mp_and.test | RUN | 0.139005 | 0.526169 | 0.445738 | 0.001213 | 0.001267 | 0.001246 |
| mp_any.test | RUN | 0.132258 | 0.533657 | 0.468598 | 0.001091 | 0.001265 | 0.001107 |
| mp_any_2.test | RUN | 0.385613 | 1.128913 | 1.023337 | 0.001183 | 0.001167 | 0.001115 |
| mp_or.test | RUN | 0.136559 | 0.527904 | 0.462025 | 0.001245 | 0.001237 | 0.001188 |
| mp_same.test | RUN | 0.272906 | 0.885720 | 0.684081 | 0.001227 | 0.001299 | 0.001095 |
| mp_plus.test | RUN | 0.139747 | 0.633202 | 0.537260 | 0.001080 | 0.001349 | 0.001197 |
| mp_less.test | RUN | 0.136854 | 0.522603 | 0.471928 | 0.001189 | 0.001281 | 0.001078 |
| mp_min.test | RUN | 0.132421 | 0.484073 | 0.450411 | 0.001169 | 0.001388 | 0.001179 |
| mp_max.test | RUN | 0.134038 | 0.535379 | 0.458957 | 0.000962 | 0.001400 | 0.001047 |
| mp_similar.test | RUN | 0.136559 | 0.527873 | 0.461242 | 0.001089 | 0.001073 | 0.001154 |
| mp_map_find.test | RUN | 0.163994 | 0.971594 | 0.615208 | 0.001300 | 0.001347 | 0.001158 |
| mp_map_find_2.test | RUN | 0.145905 | 0.374023 | 0.515899 | 0.001200 | 0.001112 | 0.001143 |
| mp_map_find_3.test | RUN | 0.149800 | 0.367354 | 0.515575 | 0.001196 | 0.001267 | 0.000998 |
| mp_map_find_4.test | RUN | 0.135596 | 0.346818 | 0.471705 | 0.001106 | 0.001204 | 0.001086 |
| mp_map_contains.test | RUN | 0.141470 | 0.540436 | 0.481364 | 0.001301 | 0.001382 | 0.001145 |
| mp_map_insert.test | RUN | 0.196891 | 1.844752 | 0.876114 | 0.001258 | 0.001314 | 0.001227 |
| mp_map_replace.test | RUN | 0.258105 | 2.145308 | 1.021575 | 0.001129 | 0.001236 | 0.001149 |
| mp_map_erase.test | RUN | 0.186916 | 1.571092 | 0.850223 | 0.001249 | 0.001268 | 0.001294 |
| mp_map_update.test | RUN | 0.164239 | 1.012709 | 0.648814 | 0.001114 | 0.001317 | 0.001071 |
| mp_map_update_q.test | RUN | 0.160522 | 1.014996 | 0.653016 | 0.001251 | 0.001192 | 0.001127 |
| mp_map_keys.test | RUN | 0.162268 | 0.885450 | 0.624873 | 0.001247 | 0.001177 | 0.001078 |
| mp_is_map.test | RUN | 0.144007 | 0.543299 | 0.497580 | 0.001152 | 0.001370 | 0.001161 |
| mp_bind.test | RUN | 0.177963 | 1.657955 | 0.751237 | 0.001186 | 0.001197 | 0.001161 |
| mp_bind_q.test | RUN | 0.160180 | 1.017942 | 0.602317 | 0.001146 | 0.001343 | 0.001142 |
| mp_bind_front.test | RUN | 0.155786 | 1.113269 | 0.586864 | 0.001492 | 0.001215 | 0.001241 |
| mp_bind_back.test | RUN | 0.155009 | 1.098040 | 0.583271 | 0.001177 | 0.001194 | 0.001088 |
| mp_lambda.test | RUN | 0.379878 | 3.334340 | 1.609152 | 0.001302 | 0.000901 | 0.001151 |
| mpl.test | RUN | 0.319790 | 0.854704 | 1.233006 | 0.001014 | 0.001262 | 0.001082 |
| mpl_list.test | RUN | 0.171520 | 0.652733 | 0.586263 | 0.001078 | 0.001239 | 0.001266 |
| mpl_tuple.test | RUN | 0.175148 | 0.651693 | 0.564186 | 0.001085 | 0.001035 | 0.001193 |
| version.test | RUN | 0.087474 | 0.230844 | 0.291673 | 0.001371 | 0.001261 | 0.001063 |
| mp11_version.test | RUN | 0.100927 | 0.262592 | 0.335236 | 0.001143 | 0.001179 | 0.001160 |
| list_version.test | RUN | 0.088980 | 0.239712 | 0.292883 | 0.001062 | 0.001218 | 0.001137 |
| algorithm_version.test | RUN | 0.101719 | 0.249934 | 0.320487 | 0.001019 | 0.001212 | 0.001163 |
| integral_version.test | RUN | 0.084579 | 0.232347 | 0.289527 | 0.001114 | 0.001380 | 0.001075 |
| utility_version.test | RUN | 0.085333 | 0.237268 | 0.286826 | 0.001088 | 0.001298 | 0.001246 |
| function_version.test | RUN | 0.088250 | 0.238214 | 0.297594 | 0.001146 | 0.001256 | 0.001172 |
| map_version.test | RUN | 0.095725 | 0.250283 | 0.322890 | 0.001043 | 0.001175 | 0.001223 |
| set_version.test | RUN | 0.087768 | 0.237359 | 0.301164 | 0.001160 | 0.001156 | 0.001198 |
| bind_version.test | RUN | 0.099718 | 0.248698 | 0.310011 | 0.001152 | 0.001201 | 0.001024 |
| integer_sequence_version.test | RUN | 0.087447 | 0.232636 | 0.289660 | 0.001057 | 0.001208 | 0.000880 |
| tuple_version.test | RUN | 0.097233 | 0.246709 | 0.201450 | 0.000819 | 0.001442 | 0.001202 |
| mpl_version.test | RUN | 0.072529 | 0.192886 | 0.299588 | 0.000819 | 0.000884 | 0.000884 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.003× | 1.002×, 1.005× | 1.000× |
| clang | 1.097× | 1.094×, 1.099× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44818861403).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000711s | 0.000731s | 0.000737s | byte equality observed |
| bind_version.test | 10 | 0.000716s | 0.000728s | 0.000739s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000726s | 0.000733s | 0.000716s | byte equality observed |
| function_version.test | 10 | 0.000730s | 0.000714s | 0.000730s | byte equality observed |
| integer_sequence.test | 10 | 0.000717s | 0.000722s | 0.000716s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000717s | 0.000716s | 0.000730s | byte equality observed |
| integral.test | 10 | 0.000712s | 0.000756s | 0.000731s | byte equality observed |
| integral_version.test | 10 | 0.000717s | 0.000749s | 0.000727s | byte equality observed |
| list_version.test | 10 | 0.000712s | 0.000744s | 0.000742s | byte equality observed |
| map_version.test | 10 | 0.000715s | 0.000740s | 0.000808s | byte equality observed |
| mp11_version.test | 10 | 0.000715s | 0.000723s | 0.000872s | byte equality observed |
| mp_all.test | 10 | 0.000702s | 0.000750s | 0.000822s | byte equality observed |
| mp_all_2.test | 10 | 0.000729s | 0.000751s | 0.000799s | byte equality observed |
| mp_all_of.test | 10 | 0.000714s | 0.000736s | 0.000824s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000729s | 0.000720s | 0.000855s | byte equality observed |
| mp_and.test | 10 | 0.000727s | 0.000725s | 0.000806s | byte equality observed |
| mp_any.test | 10 | 0.000722s | 0.000733s | 0.000815s | byte equality observed |
| mp_any_2.test | 10 | 0.000725s | 0.000724s | 0.000822s | byte equality observed |
| mp_any_of.test | 10 | 0.000716s | 0.000729s | 0.000817s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000743s | 0.000743s | 0.000785s | byte equality observed |
| mp_append.test | 10 | 0.000751s | 0.000730s | 0.000799s | byte equality observed |
| mp_append_2.test | 10 | 0.000753s | 0.000728s | 0.000798s | byte equality observed |
| mp_append_3.test | 10 | 0.000348s | 0.000344s | 0.000806s | byte equality observed |
| mp_append_sf.test | 10 | 0.000782s | 0.000755s | 0.000788s | byte equality observed |
| mp_apply_q.test | 10 | 0.000797s | 0.000743s | 0.000821s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.000804s | 0.000733s | 0.000802s | byte equality observed |
| mp_assign.test | 10 | 0.000812s | 0.000745s | 0.000804s | byte equality observed |
| mp_assign_2.test | 10 | 0.000366s | 0.000345s | 0.000783s | byte equality observed |
| mp_at.test | 10 | 0.000795s | 0.000757s | 0.000807s | byte equality observed |
| mp_at_2.test | 10 | 0.000368s | 0.000344s | 0.000799s | byte equality observed |
| mp_at_sf.test | 10 | 0.000821s | 0.000757s | 0.000809s | byte equality observed |
| mp_back.test | 10 | 0.000827s | 0.000756s | 0.000828s | byte equality observed |
| mp_back_2.test | 10 | 0.000356s | 0.000356s | 0.000799s | byte equality observed |
| mp_bind.test | 10 | 0.000801s | 0.000798s | 0.000783s | byte equality observed |
| mp_bind_back.test | 10 | 0.000801s | 0.000810s | 0.000808s | byte equality observed |
| mp_bind_front.test | 10 | 0.000800s | 0.000836s | 0.000829s | byte equality observed |
| mp_bind_q.test | 10 | 0.000806s | 0.000809s | 0.000829s | byte equality observed |
| mp_clear.test | 10 | 0.000808s | 0.000827s | 0.000799s | byte equality observed |
| mp_clear_2.test | 10 | 0.000359s | 0.000364s | 0.000773s | byte equality observed |
| mp_compose.test | 10 | 0.000820s | 0.000844s | 0.000772s | byte equality observed |
| mp_cond.test | 10 | 0.000799s | 0.000836s | 0.000808s | byte equality observed |
| mp_cond_sf.test | 10 | 0.000799s | 0.000814s | 0.000819s | byte equality observed |
| mp_contains.test | 10 | 0.000808s | 0.000841s | 0.000810s | byte equality observed |
| mp_copy_if.test | 10 | 0.000811s | 0.000839s | 0.000816s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.000815s | 0.000802s | 0.000798s | byte equality observed |
| mp_count.test | 10 | 0.000821s | 0.000810s | 0.000800s | byte equality observed |
| mp_count_if.test | 10 | 0.000819s | 0.000802s | 0.000827s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000793s | 0.000813s | 0.000824s | byte equality observed |
| mp_defer.test | 10 | 0.000792s | 0.000818s | 0.000805s | byte equality observed |
| mp_drop.test | 10 | 0.000795s | 0.000798s | 0.000804s | byte equality observed |
| mp_drop_2.test | 10 | 0.000365s | 0.000371s | 0.000805s | byte equality observed |
| mp_empty.test | 10 | 0.000792s | 0.000805s | 0.000793s | byte equality observed |
| mp_empty_2.test | 10 | 0.000366s | 0.000361s | 0.000767s | byte equality observed |
| mp_erase.test | 10 | 0.000814s | 0.000791s | 0.000805s | byte equality observed |
| mp_erase_2.test | 10 | 0.000362s | 0.000359s | 0.000776s | byte equality observed |
| mp_eval_if.test | 10 | 0.000802s | 0.000850s | 0.000800s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.000818s | 0.000841s | 0.000812s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.000834s | 0.000814s | 0.000781s | byte equality observed |
| mp_eval_or.test | 10 | 0.000818s | 0.000827s | 0.000820s | byte equality observed |
| mp_fill.test | 10 | 0.000795s | 0.000815s | 0.000790s | byte equality observed |
| mp_fill_2.test | 10 | 0.000359s | 0.000364s | 0.000789s | byte equality observed |
| mp_filter.test | 10 | 0.000828s | 0.000813s | 0.000813s | byte equality observed |
| mp_find.test | 10 | 0.000831s | 0.000810s | 0.000790s | byte equality observed |
| mp_find_if.test | 10 | 0.000797s | 0.000823s | 0.000811s | byte equality observed |
| mp_find_if_q.test | 10 | 0.000806s | 0.000830s | 0.000797s | byte equality observed |
| mp_flatten.test | 10 | 0.000805s | 0.000810s | 0.000813s | byte equality observed |
| mp_fold.test | 10 | 0.000808s | 0.000839s | 0.000804s | byte equality observed |
| mp_fold_q.test | 10 | 0.000797s | 0.000848s | 0.000793s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.000800s | 0.000836s | 0.000804s | byte equality observed |
| mp_for_each.test | 10 | 0.000808s | 0.000823s | 0.000799s | byte equality observed |
| mp_from_sequence.test | 10 | 0.000793s | 0.000816s | 0.000802s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.000790s | 0.000822s | 0.000815s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.000805s | 0.000833s | 0.000812s | byte equality observed |
| mp_front.test | 10 | 0.000800s | 0.000821s | 0.000782s | byte equality observed |
| mp_front_2.test | 10 | 0.000360s | 0.000371s | 0.000773s | byte equality observed |
| mp_identity.test | 10 | 0.000831s | 0.000818s | 0.000793s | byte equality observed |
| mp_if.test | 10 | 0.000811s | 0.000812s | 0.000825s | byte equality observed |
| mp_if_sf.test | 10 | 0.000817s | 0.000809s | 0.000815s | byte equality observed |
| mp_inherit.test | 10 | 0.000832s | 0.000801s | 0.000813s | byte equality observed |
| mp_insert.test | 10 | 0.000812s | 0.000810s | 0.000793s | byte equality observed |
| mp_insert_2.test | 10 | 0.000363s | 0.000362s | 0.000783s | byte equality observed |
| mp_intersperse.test | 10 | 0.000819s | 0.000794s | 0.000795s | byte equality observed |
| mp_invoke_q.test | 10 | 0.000809s | 0.000800s | 0.000808s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.000785s | 0.000830s | 0.000799s | byte equality observed |
| mp_iota.test | 10 | 0.000792s | 0.000839s | 0.000787s | byte equality observed |
| mp_iota_2.test | 10 | 0.000805s | 0.000813s | 0.000816s | byte equality observed |
| mp_is_list.test | 10 | 0.000798s | 0.000825s | 0.000814s | byte equality observed |
| mp_is_map.test | 10 | 0.000799s | 0.000837s | 0.000828s | byte equality observed |
| mp_is_set.test | 10 | 0.000785s | 0.000807s | 0.000811s | byte equality observed |
| mp_is_value_list.test | 10 | 0.000810s | 0.000806s | 0.000810s | byte equality observed |
| mp_iterate.test | 10 | 0.000791s | 0.000799s | 0.000808s | byte equality observed |
| mp_join.test | 10 | 0.000826s | 0.000812s | 0.000808s | byte equality observed |
| mp_lambda.test | 10 | 0.000852s | 0.000801s | 0.000817s | byte equality observed |
| mp_less.test | 10 | 0.000828s | 0.000804s | 0.000837s | byte equality observed |
| mp_list_c.test | 10 | 0.000808s | 0.000808s | 0.000822s | byte equality observed |
| mp_list_v.test | 10 | 0.000362s | 0.000360s | 0.000813s | byte equality observed |
| mp_map_contains.test | 10 | 0.000793s | 0.000810s | 0.000811s | byte equality observed |
| mp_map_erase.test | 10 | 0.000801s | 0.000836s | 0.000801s | byte equality observed |
| mp_map_find.test | 10 | 0.000802s | 0.000816s | 0.000785s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000828s | 0.000819s | 0.000784s | byte equality observed |
| mp_map_find_3.test | 10 | 0.000816s | 0.000788s | 0.000788s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000831s | 0.000804s | 0.000804s | byte equality observed |
| mp_map_insert.test | 10 | 0.000798s | 0.000818s | 0.000789s | byte equality observed |
| mp_map_keys.test | 10 | 0.000808s | 0.000830s | 0.000810s | byte equality observed |
| mp_map_replace.test | 10 | 0.000809s | 0.000821s | 0.000798s | byte equality observed |
| mp_map_update.test | 10 | 0.000814s | 0.000816s | 0.000831s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000831s | 0.000794s | 0.000811s | byte equality observed |
| mp_max.test | 10 | 0.000826s | 0.000813s | 0.000806s | byte equality observed |
| mp_max_element.test | 10 | 0.000813s | 0.000799s | 0.000802s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000362s | 0.000362s | 0.000788s | byte equality observed |
| mp_max_element_q.test | 10 | 0.000798s | 0.000817s | 0.000796s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000359s | 0.000362s | 0.000770s | byte equality observed |
| mp_min.test | 10 | 0.000805s | 0.000795s | 0.000803s | byte equality observed |
| mp_min_element.test | 10 | 0.000807s | 0.000792s | 0.000790s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000362s | 0.000363s | 0.000808s | byte equality observed |
| mp_min_element_q.test | 10 | 0.000800s | 0.000815s | 0.000779s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000355s | 0.000355s | 0.000768s | byte equality observed |
| mp_none_of.test | 10 | 0.000792s | 0.000818s | 0.000808s | byte equality observed |
| mp_none_of_q.test | 10 | 0.000807s | 0.000825s | 0.000830s | byte equality observed |
| mp_not_fn.test | 10 | 0.000807s | 0.000805s | 0.000847s | byte equality observed |
| mp_nth_element.test | 10 | 0.000816s | 0.000813s | 0.000844s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.000810s | 0.000791s | 0.000781s | byte equality observed |
| mp_or.test | 10 | 0.000813s | 0.000805s | 0.000810s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.000800s | 0.000822s | 0.000814s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.000802s | 0.000817s | 0.000834s | byte equality observed |
| mp_partial_sum.test | 10 | 0.000831s | 0.000800s | 0.000812s | byte equality observed |
| mp_partition.test | 10 | 0.000819s | 0.000820s | 0.000802s | byte equality observed |
| mp_partition_q.test | 10 | 0.000826s | 0.000802s | 0.000782s | byte equality observed |
| mp_plus.test | 10 | 0.000819s | 0.000800s | 0.000776s | byte equality observed |
| mp_pop_back.test | 10 | 0.000812s | 0.000805s | 0.000765s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000359s | 0.000367s | 0.000755s | byte equality observed |
| mp_pop_front.test | 10 | 0.000799s | 0.000785s | 0.000806s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000351s | 0.000355s | 0.000779s | byte equality observed |
| mp_power_set.test | 10 | 0.000809s | 0.000819s | 0.000819s | byte equality observed |
| mp_product.test | 10 | 0.000807s | 0.000853s | 0.000794s | byte equality observed |
| mp_push_back.test | 10 | 0.000793s | 0.000812s | 0.000801s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000360s | 0.000359s | 0.000777s | byte equality observed |
| mp_push_front.test | 10 | 0.000797s | 0.000805s | 0.000780s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000364s | 0.000368s | 0.000795s | byte equality observed |
| mp_quote.test | 10 | 0.000797s | 0.000824s | 0.000796s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000812s | 0.000803s | 0.000770s | byte equality observed |
| mp_remove.test | 10 | 0.000818s | 0.000782s | 0.000804s | byte equality observed |
| mp_remove_if.test | 10 | 0.000835s | 0.000798s | 0.000813s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.000800s | 0.000828s | 0.000836s | byte equality observed |
| mp_rename.test | 10 | 0.000816s | 0.000819s | 0.000850s | byte equality observed |
| mp_rename_2.test | 10 | 0.000365s | 0.000356s | 0.000764s | byte equality observed |
| mp_rename_v.test | 10 | 0.000359s | 0.000358s | 0.000755s | byte equality observed |
| mp_repeat.test | 10 | 0.000800s | 0.000819s | 0.000779s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000359s | 0.000359s | 0.000797s | byte equality observed |
| mp_repeat_3.test | 10 | 0.000826s | 0.000804s | 0.000783s | byte equality observed |
| mp_replace.test | 10 | 0.000830s | 0.000790s | 0.000803s | byte equality observed |
| mp_replace_at.test | 10 | 0.000814s | 0.000786s | 0.000791s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.000812s | 0.000790s | 0.000802s | byte equality observed |
| mp_replace_front.test | 10 | 0.000790s | 0.000805s | 0.000790s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000362s | 0.000368s | 0.000779s | byte equality observed |
| mp_replace_if.test | 10 | 0.000792s | 0.000813s | 0.000820s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.000790s | 0.000822s | 0.000840s | byte equality observed |
| mp_replace_second.test | 10 | 0.000797s | 0.000822s | 0.000815s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000367s | 0.000360s | 0.000782s | byte equality observed |
| mp_replace_third.test | 10 | 0.000785s | 0.000811s | 0.000810s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000365s | 0.000361s | 0.000807s | byte equality observed |
| mp_reverse.test | 10 | 0.000814s | 0.000825s | 0.000832s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.000822s | 0.000795s | 0.000811s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000796s | 0.000795s | 0.000807s | byte equality observed |
| mp_rotate_left.test | 10 | 0.000792s | 0.000820s | 0.000815s | byte equality observed |
| mp_rotate_right.test | 10 | 0.000786s | 0.000823s | 0.000817s | byte equality observed |
| mp_same.test | 10 | 0.000798s | 0.000806s | 0.000794s | byte equality observed |
| mp_second.test | 10 | 0.000790s | 0.000800s | 0.000806s | byte equality observed |
| mp_second_2.test | 10 | 0.000363s | 0.000354s | 0.000769s | byte equality observed |
| mp_set_contains.test | 10 | 0.000800s | 0.000810s | 0.000814s | byte equality observed |
| mp_set_difference.test | 10 | 0.000814s | 0.000795s | 0.000811s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000819s | 0.000840s | 0.000827s | byte equality observed |
| mp_set_intersection.test | 10 | 0.000813s | 0.000835s | 0.000804s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000799s | 0.000805s | 0.000801s | byte equality observed |
| mp_set_push_back.test | 10 | 0.000805s | 0.000822s | 0.000842s | byte equality observed |
| mp_set_push_front.test | 10 | 0.000825s | 0.000815s | 0.000827s | byte equality observed |
| mp_set_union.test | 10 | 0.000829s | 0.000793s | 0.000807s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.000789s | 0.000809s | 0.000831s | byte equality observed |
| mp_similar.test | 10 | 0.000810s | 0.000811s | 0.000821s | byte equality observed |
| mp_size.test | 10 | 0.000799s | 0.000787s | 0.000785s | byte equality observed |
| mp_size_2.test | 10 | 0.000353s | 0.000360s | 0.000779s | byte equality observed |
| mp_slice.test | 10 | 0.000824s | 0.000815s | 0.000783s | byte equality observed |
| mp_slice_2.test | 10 | 0.000366s | 0.000368s | 0.000750s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.000828s | 0.000807s | 0.000807s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.000844s | 0.000813s | 0.000802s | byte equality observed |
| mp_sort.test | 10 | 0.000799s | 0.000824s | 0.000811s | byte equality observed |
| mp_sort_q.test | 10 | 0.000811s | 0.000843s | 0.000819s | byte equality observed |
| mp_split.test | 10 | 0.000800s | 0.000828s | 0.000816s | byte equality observed |
| mp_starts_with.test | 10 | 0.000798s | 0.000815s | 0.000829s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.000811s | 0.000832s | 0.000803s | byte equality observed |
| mp_take.test | 10 | 0.000824s | 0.000813s | 0.000824s | byte equality observed |
| mp_take_2.test | 10 | 0.000350s | 0.000370s | 0.000799s | byte equality observed |
| mp_third.test | 10 | 0.000802s | 0.000800s | 0.000792s | byte equality observed |
| mp_third_2.test | 10 | 0.000360s | 0.000373s | 0.000796s | byte equality observed |
| mp_transform.test | 10 | 0.000814s | 0.000817s | 0.000782s | byte equality observed |
| mp_transform_2.test | 10 | 0.000781s | 0.000767s | 0.000761s | byte equality observed |
| mp_transform_front.test | 10 | 0.000796s | 0.000804s | 0.000800s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000358s | 0.000356s | 0.000810s | byte equality observed |
| mp_transform_if.test | 10 | 0.000796s | 0.000812s | 0.000802s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.000796s | 0.000782s | 0.000849s | byte equality observed |
| mp_transform_q.test | 10 | 0.000822s | 0.000806s | 0.000790s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.000829s | 0.000801s | 0.000828s | byte equality observed |
| mp_transform_second.test | 10 | 0.000801s | 0.000803s | 0.000799s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000362s | 0.000370s | 0.000825s | byte equality observed |
| mp_transform_sf.test | 10 | 0.000809s | 0.000832s | 0.000791s | byte equality observed |
| mp_transform_third.test | 10 | 0.000810s | 0.000804s | 0.000799s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000367s | 0.000370s | 0.000770s | byte equality observed |
| mp_unique.test | 10 | 0.000787s | 0.000789s | 0.000785s | byte equality observed |
| mp_unique_if.test | 10 | 0.000817s | 0.000825s | 0.000798s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.000830s | 0.000810s | 0.000775s | byte equality observed |
| mp_valid.test | 10 | 0.000826s | 0.000823s | 0.000798s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.000801s | 0.000816s | 0.000791s | byte equality observed |
| mp_value.test | 10 | 0.000358s | 0.000357s | 0.000792s | byte equality observed |
| mp_with_index.test | 10 | 0.001102s | 0.001059s | 0.001018s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000356s | 0.000359s | 0.000777s | byte equality observed |
| mpl.test | 10 | 0.000817s | 0.000814s | 0.000823s | byte equality observed |
| mpl_list.test | 10 | 0.000808s | 0.000814s | 0.000824s | byte equality observed |
| mpl_tuple.test | 10 | 0.000810s | 0.000814s | 0.000815s | byte equality observed |
| mpl_version.test | 10 | 0.000792s | 0.000802s | 0.000825s | byte equality observed |
| set_version.test | 10 | 0.000815s | 0.000807s | 0.000847s | byte equality observed |
| tuple_apply.test | 10 | 0.000805s | 0.000821s | 0.000832s | byte equality observed |
| tuple_for_each.test | 10 | 0.000824s | 0.000810s | 0.000805s | byte equality observed |
| tuple_transform.test | 10 | 0.000809s | 0.000828s | 0.000836s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000811s | 0.000843s | 0.000783s | byte equality observed |
| tuple_version.test | 10 | 0.000818s | 0.000817s | 0.000782s | byte equality observed |
| utility_version.test | 10 | 0.000817s | 0.000803s | 0.000805s | byte equality observed |
| version.test | 10 | 0.000827s | 0.000781s | 0.000822s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44818861403).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
