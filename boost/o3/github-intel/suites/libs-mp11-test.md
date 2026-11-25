# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.028839 | 0.061453 | 0.094022 | — | — | — |
| complex_h.test | COMPILE | 0.118192 | 0.264688 | 0.359542 | — | — | — |
| mp_size.test | RUN | 0.140259 | 0.874697 | 0.474888 | 0.001246 | 0.001237 | 0.000914 |
| mp_size_2.test | RUN | 0.012464 | 0.029892 | 0.042873 | 0.000469 | 0.000474 | 0.001188 |
| mp_empty.test | RUN | 0.132012 | 0.523952 | 0.438133 | 0.001173 | 0.001348 | 0.001121 |
| mp_empty_2.test | RUN | 0.012460 | 0.030534 | 0.044846 | 0.000497 | 0.000546 | 0.001321 |
| mp_assign.test | RUN | 0.154929 | 1.150373 | 0.600283 | 0.001145 | 0.001347 | 0.001249 |
| mp_assign_2.test | RUN | 0.013000 | 0.030639 | 0.044572 | 0.000522 | 0.000548 | 0.001129 |
| mp_clear.test | RUN | 0.135669 | 0.481881 | 0.451913 | 0.001387 | 0.001257 | 0.001281 |
| mp_clear_2.test | RUN | 0.012471 | 0.030732 | 0.044806 | 0.000483 | 0.000524 | 0.001166 |
| mp_front.test | RUN | 0.145591 | 0.775832 | 0.529138 | 0.001297 | 0.001461 | 0.001175 |
| mp_front_2.test | RUN | 0.013601 | 0.030933 | 0.042239 | 0.000410 | 0.000510 | 0.000987 |
| mp_pop_front.test | RUN | 0.143432 | 0.819175 | 0.534984 | 0.001119 | 0.001277 | 0.001154 |
| mp_pop_front_2.test | RUN | 0.012603 | 0.029708 | 0.042021 | 0.000453 | 0.000567 | 0.001079 |
| mp_second.test | RUN | 0.143186 | 0.515575 | 0.500264 | 0.001296 | 0.001380 | 0.001152 |
| mp_second_2.test | RUN | 0.013004 | 0.030064 | 0.042634 | 0.000471 | 0.000487 | 0.001376 |
| mp_third.test | RUN | 0.137299 | 0.468961 | 0.458474 | 0.001300 | 0.001240 | 0.001272 |
| mp_third_2.test | RUN | 0.013085 | 0.030354 | 0.044243 | 0.000533 | 0.000507 | 0.001420 |
| mp_push_front.test | RUN | 0.187525 | 1.736183 | 0.842113 | 0.001269 | 0.001288 | 0.001150 |
| mp_push_front_2.test | RUN | 0.014207 | 0.028524 | 0.041334 | 0.000469 | 0.000521 | 0.001092 |
| mp_push_back.test | RUN | 0.178357 | 1.727504 | 0.853913 | 0.001173 | 0.001287 | 0.001097 |
| mp_push_back_2.test | RUN | 0.012315 | 0.031033 | 0.045307 | 0.000522 | 0.000510 | 0.001187 |
| mp_rename.test | RUN | 0.172037 | 1.580765 | 0.729664 | 0.001069 | 0.001272 | 0.001191 |
| mp_rename_2.test | RUN | 0.011589 | 0.029851 | 0.044477 | 0.000476 | 0.000536 | 0.001154 |
| mp_append.test | RUN | 0.183722 | 1.813566 | 0.808945 | 0.001153 | 0.001273 | 0.001409 |
| mp_append_2.test | RUN | 0.413556 | 4.101983 | 1.107387 | 0.000931 | 0.001261 | 0.001156 |
| mp_append_3.test | RUN | 0.012378 | 0.030241 | 0.044884 | 0.000502 | 0.000486 | 0.001344 |
| mp_append_sf.test | RUN | 0.128125 | 0.434023 | 0.435721 | 0.001136 | 0.001283 | 0.001288 |
| mp_replace_front.test | RUN | 0.160705 | 1.272868 | 0.656673 | 0.001198 | 0.001308 | 0.001190 |
| mp_replace_front_2.test | RUN | 0.012453 | 0.031012 | 0.046126 | 0.000492 | 0.000509 | 0.001224 |
| mp_replace_second.test | RUN | 0.158806 | 0.820396 | 0.607295 | 0.001207 | 0.001350 | 0.001191 |
| mp_replace_second_2.test | RUN | 0.013383 | 0.030648 | 0.046224 | 0.000454 | 0.000485 | 0.001104 |
| mp_replace_third.test | RUN | 0.151196 | 0.672865 | 0.543101 | 0.001297 | 0.001245 | 0.001160 |
| mp_replace_third_2.test | RUN | 0.011649 | 0.029091 | 0.043311 | 0.000553 | 0.000484 | 0.001136 |
| mp_apply_q.test | RUN | 0.170669 | 1.578298 | 0.728301 | 0.001162 | 0.001288 | 0.001175 |
| mp_apply_q_sf.test | RUN | 0.132325 | 0.442313 | 0.438590 | 0.001346 | 0.000992 | 0.001382 |
| mp_is_list.test | RUN | 0.136825 | 0.523094 | 0.471152 | 0.001380 | 0.001264 | 0.001211 |
| mp_list_c.test | RUN | 0.142067 | 0.648964 | 0.512994 | 0.001245 | 0.001492 | 0.001276 |
| mp_transform_front.test | RUN | 0.162703 | 1.295386 | 0.624466 | 0.001240 | 0.001399 | 0.001135 |
| mp_transform_front_2.test | RUN | 0.012685 | 0.030414 | 0.044614 | 0.000495 | 0.000483 | 0.001258 |
| mp_transform_second.test | RUN | 0.152190 | 1.112497 | 0.569806 | 0.001266 | 0.001319 | 0.001207 |
| mp_transform_second_2.test | RUN | 0.012476 | 0.030297 | 0.045061 | 0.000434 | 0.000538 | 0.001107 |
| mp_transform_third.test | RUN | 0.146714 | 0.832366 | 0.527707 | 0.000954 | 0.001275 | 0.001440 |
| mp_transform_third_2.test | RUN | 0.012394 | 0.029575 | 0.044273 | 0.000523 | 0.000517 | 0.001062 |
| mp_list_v.test | RUN | 0.012763 | 0.030382 | 0.044098 | 0.000519 | 0.000510 | 0.001149 |
| mp_rename_v.test | RUN | 0.012920 | 0.029151 | 0.043882 | 0.000469 | 0.000402 | 0.000968 |
| mp_is_value_list.test | RUN | 0.127813 | 0.322987 | 0.435566 | 0.001196 | 0.001171 | 0.001364 |
| mp_transform.test | RUN | 0.332682 | 2.758509 | 1.364475 | 0.001480 | 0.001129 | 0.001348 |
| mp_transform_2.test | RUN | 0.122026 | 0.285987 | 0.395557 | 0.001082 | 0.001270 | 0.001331 |
| mp_transform_q.test | RUN | 0.329472 | 2.621407 | 1.329837 | 0.001040 | 0.001353 | 0.001450 |
| mp_transform_q_2.test | RUN | 0.335223 | 0.822843 | 1.703641 | 0.001301 | 0.001254 | 0.001192 |
| mp_transform_sf.test | RUN | 0.145053 | 0.458986 | 0.462535 | 0.001514 | 0.001380 | 0.001383 |
| mp_transform_if.test | RUN | 0.176821 | 1.294663 | 0.719316 | 0.001102 | 0.001105 | 0.001499 |
| mp_transform_if_q.test | RUN | 0.176123 | 1.299455 | 0.719599 | 0.001215 | 0.001208 | 0.001296 |
| mp_filter.test | RUN | 0.158468 | 0.764611 | 0.544296 | 0.001265 | 0.001439 | 0.001113 |
| mp_fill.test | RUN | 0.152906 | 0.573512 | 0.515355 | 0.001353 | 0.001376 | 0.001240 |
| mp_fill_2.test | RUN | 0.022820 | 0.044324 | 0.070186 | 0.000498 | 0.000562 | 0.001391 |
| mp_count.test | RUN | 0.289521 | 1.391630 | 0.803930 | 0.001408 | 0.001350 | 0.001139 |
| mp_count_if.test | RUN | 0.294804 | 1.402182 | 0.865299 | 0.001087 | 0.001322 | 0.001158 |
| mp_count_if_q.test | RUN | 0.146432 | 0.917813 | 0.507405 | 0.001291 | 0.001198 | 0.001195 |
| mp_contains.test | RUN | 0.140313 | 0.554345 | 0.463712 | 0.001338 | 0.001266 | 0.001249 |
| mp_starts_with.test | RUN | 0.143270 | 0.554713 | 0.488745 | 0.001135 | 0.001218 | 0.001159 |
| mp_starts_with_sf.test | RUN | 0.139598 | 0.453464 | 0.451477 | 0.001080 | 0.001446 | 0.001145 |
| mp_repeat.test | RUN | 0.218483 | 2.312840 | 0.909955 | 0.001307 | 0.001423 | 0.001315 |
| mp_repeat_2.test | RUN | 0.022579 | 0.047575 | 0.071041 | 0.000487 | 0.000545 | 0.001353 |
| mp_repeat_3.test | RUN | 0.189492 | 0.286726 | 0.448789 | 0.001244 | 0.001180 | 0.001185 |
| mp_product.test | RUN | 0.169187 | 1.396907 | 0.672171 | 0.001206 | 0.001307 | 0.001423 |
| mp_drop.test | RUN | 0.180469 | 1.739448 | 0.767455 | 0.001002 | 0.001276 | 0.001261 |
| mp_drop_2.test | RUN | 0.022202 | 0.047875 | 0.072351 | 0.000492 | 0.000589 | 0.001250 |
| mp_iota.test | RUN | 0.171394 | 1.462160 | 0.675030 | 0.001419 | 0.001214 | 0.001346 |
| mp_iota_2.test | RUN | 0.187733 | 1.768747 | 0.758361 | 0.001235 | 0.001368 | 0.000962 |
| mp_at.test | RUN | 0.151926 | 0.764743 | 0.548270 | 0.001193 | 0.001286 | 0.001214 |
| mp_at_2.test | RUN | 0.021925 | 0.046924 | 0.073737 | 0.000453 | 0.000563 | 0.001376 |
| mp_at_sf.test | RUN | 0.145453 | 0.458372 | 0.468611 | 0.001338 | 0.001445 | 0.001225 |
| mp_take.test | RUN | 0.247374 | 2.282706 | 0.930410 | 0.001258 | 0.001198 | 0.001329 |
| mp_take_2.test | RUN | 0.021878 | 0.047905 | 0.072715 | 0.000507 | 0.000540 | 0.001193 |
| mp_slice.test | RUN | 0.298401 | 2.333126 | 1.176864 | 0.001347 | 0.001314 | 0.001171 |
| mp_slice_2.test | RUN | 0.022255 | 0.046334 | 0.074406 | 0.000574 | 0.000560 | 0.001266 |
| mp_replace.test | RUN | 0.181889 | 1.167557 | 0.749871 | 0.001294 | 0.001302 | 0.001267 |
| mp_replace_if.test | RUN | 0.173378 | 1.029602 | 0.690903 | 0.001247 | 0.001280 | 0.001136 |
| mp_replace_if_q.test | RUN | 0.171749 | 1.024607 | 0.691183 | 0.001271 | 0.001332 | 0.001192 |
| mp_copy_if.test | RUN | 0.179882 | 1.458455 | 0.652634 | 0.001247 | 0.001132 | 0.001169 |
| mp_copy_if_q.test | RUN | 0.177273 | 1.460430 | 0.656651 | 0.001217 | 0.001265 | 0.001126 |
| mp_remove.test | RUN | 0.174971 | 0.970537 | 0.670054 | 0.001395 | 0.001370 | 0.001199 |
| mp_remove_if.test | RUN | 0.181661 | 1.534947 | 0.684545 | 0.001226 | 0.001419 | 0.001292 |
| mp_remove_if_q.test | RUN | 0.182628 | 1.541322 | 0.699486 | 0.001260 | 0.001421 | 0.001295 |
| mp_partition.test | RUN | 0.184308 | 1.444732 | 0.757589 | 0.001213 | 0.001359 | 0.001236 |
| mp_partition_q.test | RUN | 0.183087 | 1.451933 | 0.756544 | 0.001144 | 0.001300 | 0.001270 |
| mp_sort.test | RUN | 0.169314 | 1.040784 | 0.664119 | 0.001317 | 0.001288 | 0.001336 |
| mp_sort_q.test | RUN | 0.172168 | 1.031331 | 0.655009 | 0.001132 | 0.001349 | 0.001225 |
| mp_find.test | RUN | 0.162206 | 1.100266 | 0.564659 | 0.001235 | 0.001351 | 0.001071 |
| mp_find_if.test | RUN | 0.160906 | 1.010235 | 0.528414 | 0.001569 | 0.001319 | 0.001174 |
| mp_find_if_q.test | RUN | 0.175287 | 1.134181 | 0.659303 | 0.001255 | 0.001226 | 0.001156 |
| mp_reverse.test | RUN | 0.344851 | 3.051673 | 1.303911 | 0.001287 | 0.001097 | 0.001245 |
| mp_fold.test | RUN | 0.628142 | 2.382647 | 3.322179 | 0.001334 | 0.001310 | 0.001101 |
| mp_fold_q.test | RUN | 0.161657 | 1.018603 | 0.619860 | 0.001225 | 0.001378 | 0.001243 |
| mp_fold_q_sf.test | RUN | 0.139289 | 0.459400 | 0.480106 | 0.001236 | 0.001254 | 0.001300 |
| mp_reverse_fold.test | RUN | 0.297988 | 2.267327 | 0.929182 | 0.001343 | 0.001360 | 0.001213 |
| mp_reverse_fold_q.test | RUN | 0.167907 | 1.239967 | 0.662679 | 0.001239 | 0.001368 | 0.001234 |
| mp_unique.test | RUN | 0.164257 | 1.122790 | 0.641284 | 0.001253 | 0.001415 | 0.001305 |
| mp_unique_if.test | RUN | 0.301401 | 2.364956 | 1.027107 | 0.001208 | 0.001437 | 0.001471 |
| mp_unique_if_q.test | RUN | 0.270251 | 2.330701 | 0.835235 | 0.001246 | 0.001347 | 0.001332 |
| mp_all_of.test | RUN | 0.407695 | 1.258618 | 1.079284 | 0.001306 | 0.001218 | 0.001345 |
| mp_all_of_q.test | RUN | 0.141508 | 0.548163 | 0.489045 | 0.000988 | 0.001355 | 0.001435 |
| mp_any_of.test | RUN | 0.398977 | 1.319780 | 1.090768 | 0.001266 | 0.001375 | 0.001134 |
| mp_any_of_q.test | RUN | 0.147354 | 0.549867 | 0.489339 | 0.001338 | 0.001420 | 0.001351 |
| mp_none_of.test | RUN | 0.396853 | 1.337897 | 1.078445 | 0.001159 | 0.001400 | 0.001211 |
| mp_none_of_q.test | RUN | 0.151798 | 0.547193 | 0.456431 | 0.001347 | 0.001424 | 0.001279 |
| mp_replace_at.test | RUN | 0.183377 | 1.100924 | 0.711632 | 0.001331 | 0.001275 | 0.001314 |
| mp_replace_at_c.test | RUN | 0.184148 | 1.121299 | 0.731769 | 0.001206 | 0.001305 | 0.000877 |
| mp_for_each.test | RUN | 0.163949 | 0.727959 | 0.737592 | 0.001237 | 0.001369 | 0.001259 |
| mp_insert.test | RUN | 0.277412 | 2.299125 | 1.054286 | 0.001321 | 0.001292 | 0.001362 |
| mp_insert_2.test | RUN | 0.024821 | 0.048355 | 0.071648 | 0.000469 | 0.000453 | 0.001082 |
| mp_erase.test | RUN | 0.307777 | 2.459970 | 1.257729 | 0.001317 | 0.001442 | 0.001145 |
| mp_erase_2.test | RUN | 0.023056 | 0.047833 | 0.073402 | 0.000500 | 0.000552 | 0.001185 |
| mp_with_index.test | RUN | 0.405750 | 4.907787 | 2.706653 | 0.001533 | 0.001622 | 0.001468 |
| mp_with_index_cx.test | RUN | 0.003470 | 0.014478 | 0.022212 | 0.000503 | 0.000502 | 0.001320 |
| mp_from_sequence.test | RUN | 0.176808 | 1.275907 | 0.694762 | 0.001310 | 0.001233 | 0.000858 |
| mp_from_sequence_2.test | RUN | 0.192801 | 1.516087 | 0.763642 | 0.001403 | 0.001204 | 0.001323 |
| mp_from_sequence_3.test | RUN | 0.152114 | 0.647505 | 0.523289 | 0.001193 | 0.001196 | 0.001045 |
| mp_min_element.test | RUN | 0.150395 | 0.594544 | 0.493652 | 0.001278 | 0.001424 | 0.001146 |
| mp_min_element_2.test | RUN | 0.023023 | 0.046971 | 0.071605 | 0.000478 | 0.000527 | 0.001211 |
| mp_min_element_q.test | RUN | 0.148214 | 0.600693 | 0.499798 | 0.001482 | 0.001225 | 0.001165 |
| mp_min_element_q_2.test | RUN | 0.023251 | 0.046324 | 0.071359 | 0.000604 | 0.000503 | 0.001186 |
| mp_max_element.test | RUN | 0.148445 | 0.599488 | 0.498599 | 0.001184 | 0.001329 | 0.001236 |
| mp_max_element_2.test | RUN | 0.023549 | 0.046173 | 0.070124 | 0.000491 | 0.000504 | 0.001111 |
| mp_max_element_q.test | RUN | 0.142177 | 0.596783 | 0.493644 | 0.001333 | 0.001491 | 0.001253 |
| mp_max_element_q_2.test | RUN | 0.021365 | 0.046593 | 0.069284 | 0.000575 | 0.000544 | 0.001143 |
| mp_nth_element.test | RUN | 0.163953 | 0.837759 | 0.608304 | 0.001224 | 0.001316 | 0.001216 |
| mp_nth_element_q.test | RUN | 0.162003 | 0.849499 | 0.594683 | 0.001226 | 0.001425 | 0.001190 |
| mp_back.test | RUN | 0.163022 | 0.703248 | 0.575592 | 0.001264 | 0.001223 | 0.001196 |
| mp_back_2.test | RUN | 0.023019 | 0.048132 | 0.073361 | 0.000441 | 0.000504 | 0.001162 |
| mp_pop_back.test | RUN | 0.468186 | 4.699025 | 1.250284 | 0.001398 | 0.001252 | 0.001205 |
| mp_pop_back_2.test | RUN | 0.024355 | 0.046300 | 0.070103 | 0.000462 | 0.000533 | 0.001194 |
| mp_flatten.test | RUN | 0.186509 | 1.635493 | 0.822634 | 0.001286 | 0.001353 | 0.001276 |
| mp_rotate_left.test | RUN | 0.188371 | 1.788385 | 0.801461 | 0.001192 | 0.001315 | 0.001204 |
| mp_rotate_right.test | RUN | 0.187875 | 1.781171 | 0.814840 | 0.001246 | 0.001283 | 0.001174 |
| mp_power_set.test | RUN | 0.194343 | 1.714342 | 0.818231 | 0.001286 | 0.001438 | 0.001129 |
| mp_partial_sum.test | RUN | 0.261255 | 2.291828 | 0.935503 | 0.001440 | 0.001102 | 0.001193 |
| mp_iterate.test | RUN | 0.164803 | 0.675280 | 0.636643 | 0.001114 | 0.001366 | 0.001103 |
| mp_pairwise_fold.test | RUN | 0.189448 | 1.575977 | 0.838515 | 0.001118 | 0.001224 | 0.001436 |
| mp_pairwise_fold_q.test | RUN | 0.145250 | 0.446384 | 0.477769 | 0.001216 | 0.001414 | 0.001342 |
| mp_sliding_fold.test | RUN | 0.373216 | 3.040428 | 1.581078 | 0.001493 | 0.001444 | 0.001224 |
| mp_sliding_fold_q.test | RUN | 0.369964 | 3.047830 | 1.569616 | 0.001329 | 0.001336 | 0.001079 |
| mp_intersperse.test | RUN | 0.176274 | 1.111928 | 0.726169 | 0.001179 | 0.001267 | 0.001317 |
| mp_split.test | RUN | 0.260224 | 2.158041 | 1.006992 | 0.001241 | 0.001343 | 0.001092 |
| mp_join.test | RUN | 0.201388 | 1.811413 | 0.899443 | 0.001044 | 0.001315 | 0.001320 |
| integral.test | RUN | 0.151410 | 0.796173 | 0.535733 | 0.001359 | 0.001188 | 0.001326 |
| mp_value.test | RUN | 0.009593 | 0.026115 | 0.036493 | 0.000521 | 0.000493 | 0.001182 |
| mp_identity.test | RUN | 0.141040 | 0.727001 | 0.503717 | 0.001305 | 0.001329 | 0.001194 |
| mp_inherit.test | RUN | 0.136821 | 0.515902 | 0.481989 | 0.001431 | 0.001409 | 0.001271 |
| mp_if.test | RUN | 0.139673 | 0.588892 | 0.480316 | 0.001201 | 0.001193 | 0.001384 |
| mp_if_sf.test | RUN | 0.131631 | 0.431657 | 0.434683 | 0.001429 | 0.001149 | 0.001203 |
| mp_eval_if.test | RUN | 0.142018 | 0.633180 | 0.489348 | 0.001456 | 0.001290 | 0.001345 |
| mp_eval_if_sf.test | RUN | 0.134943 | 0.447588 | 0.439292 | 0.001245 | 0.001497 | 0.001373 |
| mp_valid.test | RUN | 0.135635 | 0.448924 | 0.446878 | 0.001170 | 0.001206 | 0.001332 |
| mp_defer.test | RUN | 0.149571 | 0.767345 | 0.542097 | 0.001271 | 0.001444 | 0.001221 |
| mp_quote.test | RUN | 0.151920 | 0.780656 | 0.546806 | 0.001128 | 0.001403 | 0.001238 |
| mp_invoke_q.test | RUN | 0.161245 | 1.032017 | 0.619535 | 0.001243 | 0.001373 | 0.001213 |
| mp_invoke_q_sf.test | RUN | 0.132159 | 0.446455 | 0.429231 | 0.001258 | 0.001432 | 0.001248 |
| mp_quote_trait.test | RUN | 0.146642 | 0.859140 | 0.535734 | 0.001207 | 0.001312 | 0.001200 |
| mp_cond.test | RUN | 0.134627 | 0.514710 | 0.454910 | 0.001245 | 0.001119 | 0.001364 |
| mp_cond_sf.test | RUN | 0.136857 | 0.447430 | 0.439789 | 0.001505 | 0.001038 | 0.001474 |
| mp_not_fn.test | RUN | 0.133683 | 0.435944 | 0.428019 | 0.001157 | 0.001311 | 0.001308 |
| mp_eval_if_not.test | RUN | 0.139750 | 0.633805 | 0.488980 | 0.001235 | 0.001292 | 0.001146 |
| mp_eval_or.test | RUN | 0.132088 | 0.335155 | 0.449546 | 0.001162 | 0.001480 | 0.001043 |
| mp_compose.test | RUN | 0.152135 | 1.049758 | 0.587464 | 0.001349 | 0.001307 | 0.001153 |
| mp_valid_and_true.test | RUN | 0.130665 | 0.534331 | 0.462224 | 0.001110 | 0.001396 | 0.001242 |
| mp_compose_sf.test | COMPILE | 0.031348 | 0.058649 | 0.102864 | — | — | — |
| integer_sequence.test | RUN | 0.166283 | 1.033209 | 0.652565 | 0.001371 | 0.001155 | 0.001288 |
| tuple_for_each.test | RUN | 0.134303 | 0.380768 | 0.468528 | 0.001371 | 0.001286 | 0.001232 |
| tuple_for_each_cx.test | COMPILE | 0.024765 | 0.052169 | 0.083534 | — | — | — |
| tuple_apply.test | RUN | 0.142220 | 0.369506 | 0.488098 | 0.001282 | 0.001318 | 0.001370 |
| tuple_apply_cx.test | COMPILE | 0.037716 | 0.075200 | 0.113570 | — | — | — |
| construct_from_tuple.test | RUN | 0.139826 | 0.406070 | 0.483589 | 0.001175 | 0.001286 | 0.001236 |
| construct_from_tuple_cx.test | COMPILE | 0.039143 | 0.075129 | 0.113494 | — | — | — |
| tuple_transform.test | RUN | 0.222253 | 0.824766 | 0.940890 | 0.001534 | 0.001493 | 0.001173 |
| tuple_transform_2.test | RUN | 0.191638 | 0.592826 | 0.845714 | 0.001195 | 0.001314 | 0.001225 |
| tuple_transform_cx.test | COMPILE | 0.032777 | 0.072133 | 0.113178 | — | — | — |
| mp_set_contains.test | RUN | 0.142453 | 0.543672 | 0.476104 | 0.001402 | 0.001229 | 0.001223 |
| mp_set_push_back.test | RUN | 0.189594 | 1.701280 | 0.817475 | 0.001159 | 0.001360 | 0.001426 |
| mp_set_push_front.test | RUN | 0.243672 | 2.058895 | 0.958016 | 0.001242 | 0.001282 | 0.001153 |
| mp_is_set.test | RUN | 0.138751 | 0.544196 | 0.478342 | 0.001369 | 0.001413 | 0.001458 |
| mp_set_union.test | RUN | 0.179562 | 1.445630 | 0.790979 | 0.001121 | 0.001479 | 0.001232 |
| mp_set_union_sf.test | RUN | 0.136220 | 0.434897 | 0.434342 | 0.001216 | 0.001323 | 0.001252 |
| mp_set_difference.test | RUN | 0.163924 | 1.118741 | 0.674259 | 0.001189 | 0.001372 | 0.001239 |
| mp_set_difference_sf.test | RUN | 0.130818 | 0.431523 | 0.447583 | 0.001274 | 0.001384 | 0.001175 |
| mp_set_intersection.test | RUN | 0.167812 | 1.119309 | 0.655769 | 0.001245 | 0.001204 | 0.001300 |
| mp_set_intersection_sf.test | RUN | 0.134741 | 0.435975 | 0.443379 | 0.001250 | 0.001345 | 0.001285 |
| mp_all.test | RUN | 0.142885 | 0.527548 | 0.473788 | 0.001241 | 0.001383 | 0.001249 |
| mp_all_2.test | RUN | 0.409115 | 1.158774 | 1.068348 | 0.001335 | 0.001365 | 0.001262 |
| mp_and.test | RUN | 0.144890 | 0.532718 | 0.461454 | 0.001217 | 0.001334 | 0.001360 |
| mp_any.test | RUN | 0.138833 | 0.523180 | 0.473138 | 0.001120 | 0.001278 | 0.001370 |
| mp_any_2.test | RUN | 0.406525 | 1.161196 | 1.041006 | 0.001396 | 0.001396 | 0.001270 |
| mp_or.test | RUN | 0.143586 | 0.519772 | 0.491556 | 0.001488 | 0.001416 | 0.001375 |
| mp_same.test | RUN | 0.271397 | 0.900354 | 0.761450 | 0.001213 | 0.001336 | 0.001162 |
| mp_plus.test | RUN | 0.153009 | 0.621067 | 0.523064 | 0.001135 | 0.001152 | 0.001167 |
| mp_less.test | RUN | 0.143098 | 0.525181 | 0.460174 | 0.001418 | 0.001101 | 0.001293 |
| mp_min.test | RUN | 0.135733 | 0.491596 | 0.459915 | 0.001572 | 0.001289 | 0.001122 |
| mp_max.test | RUN | 0.140086 | 0.546132 | 0.468369 | 0.001208 | 0.001254 | 0.001127 |
| mp_similar.test | RUN | 0.137002 | 0.533152 | 0.464378 | 0.001096 | 0.001247 | 0.001164 |
| mp_map_find.test | RUN | 0.161067 | 0.992045 | 0.626945 | 0.001172 | 0.001213 | 0.001358 |
| mp_map_find_2.test | RUN | 0.148021 | 0.376563 | 0.532618 | 0.001302 | 0.001282 | 0.001348 |
| mp_map_find_3.test | RUN | 0.148024 | 0.372970 | 0.531352 | 0.001222 | 0.001099 | 0.001272 |
| mp_map_find_4.test | RUN | 0.144994 | 0.351781 | 0.485567 | 0.001264 | 0.001197 | 0.001135 |
| mp_map_contains.test | RUN | 0.148423 | 0.546030 | 0.493964 | 0.001286 | 0.001365 | 0.001336 |
| mp_map_insert.test | RUN | 0.193823 | 1.895922 | 0.895317 | 0.001194 | 0.001276 | 0.001217 |
| mp_map_replace.test | RUN | 0.271260 | 2.158393 | 1.047539 | 0.001184 | 0.001393 | 0.001155 |
| mp_map_erase.test | RUN | 0.187240 | 1.600306 | 0.857100 | 0.001168 | 0.001350 | 0.001199 |
| mp_map_update.test | RUN | 0.169719 | 1.027097 | 0.666058 | 0.001186 | 0.001307 | 0.001248 |
| mp_map_update_q.test | RUN | 0.166256 | 1.023744 | 0.657401 | 0.001400 | 0.001271 | 0.001167 |
| mp_map_keys.test | RUN | 0.161181 | 0.908020 | 0.638255 | 0.001221 | 0.001335 | 0.001260 |
| mp_is_map.test | RUN | 0.149791 | 0.551581 | 0.505167 | 0.001243 | 0.001398 | 0.001161 |
| mp_bind.test | RUN | 0.190298 | 1.679513 | 0.779376 | 0.001204 | 0.001295 | 0.001245 |
| mp_bind_q.test | RUN | 0.167521 | 1.028967 | 0.618006 | 0.001202 | 0.001214 | 0.001081 |
| mp_bind_front.test | RUN | 0.164091 | 1.128535 | 0.596135 | 0.001153 | 0.001350 | 0.001078 |
| mp_bind_back.test | RUN | 0.161825 | 1.114984 | 0.594005 | 0.001132 | 0.001257 | 0.001318 |
| mp_lambda.test | RUN | 0.385953 | 3.384246 | 1.639146 | 0.001319 | 0.000918 | 0.001257 |
| mpl.test | RUN | 0.325689 | 0.863575 | 1.275097 | 0.001150 | 0.001287 | 0.001189 |
| mpl_list.test | RUN | 0.177599 | 0.660305 | 0.576911 | 0.001295 | 0.001194 | 0.001227 |
| mpl_tuple.test | RUN | 0.180055 | 0.657226 | 0.595833 | 0.001260 | 0.001305 | 0.001262 |
| version.test | RUN | 0.090534 | 0.233650 | 0.303910 | 0.001306 | 0.001280 | 0.001209 |
| mp11_version.test | RUN | 0.108453 | 0.265460 | 0.346437 | 0.001208 | 0.001230 | 0.001057 |
| list_version.test | RUN | 0.091092 | 0.239133 | 0.306378 | 0.001039 | 0.001162 | 0.001128 |
| algorithm_version.test | RUN | 0.105317 | 0.257003 | 0.324498 | 0.001222 | 0.001229 | 0.001111 |
| integral_version.test | RUN | 0.089712 | 0.234083 | 0.287452 | 0.001408 | 0.001168 | 0.001267 |
| utility_version.test | RUN | 0.090951 | 0.237715 | 0.296719 | 0.001162 | 0.001165 | 0.001180 |
| function_version.test | RUN | 0.091890 | 0.238228 | 0.305557 | 0.001145 | 0.001275 | 0.001213 |
| map_version.test | RUN | 0.104546 | 0.255702 | 0.328161 | 0.001154 | 0.001287 | 0.001294 |
| set_version.test | RUN | 0.094987 | 0.241698 | 0.301881 | 0.001427 | 0.001224 | 0.001298 |
| bind_version.test | RUN | 0.103356 | 0.252535 | 0.323771 | 0.001103 | 0.001239 | 0.001157 |
| integer_sequence_version.test | RUN | 0.089171 | 0.231422 | 0.291808 | 0.001364 | 0.001123 | 0.000916 |
| tuple_version.test | RUN | 0.106266 | 0.252080 | 0.206801 | 0.000960 | 0.001250 | 0.000938 |
| mpl_version.test | RUN | 0.077428 | 0.175204 | 0.328461 | 0.000910 | 0.000946 | 0.000930 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.994× | 0.990×, 0.999× | 1.000× |
| clang | 1.099× | 1.108×, 1.090× | 0.996× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45617981312).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000731s | 0.000759s | 0.000753s | byte equality observed |
| bind_version.test | 10 | 0.000747s | 0.000717s | 0.000759s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000730s | 0.000744s | 0.000752s | byte equality observed |
| function_version.test | 10 | 0.000742s | 0.000717s | 0.000754s | byte equality observed |
| integer_sequence.test | 10 | 0.000735s | 0.000732s | 0.000759s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000761s | 0.000734s | 0.000764s | byte equality observed |
| integral.test | 10 | 0.000720s | 0.000736s | 0.000752s | byte equality observed |
| integral_version.test | 10 | 0.000752s | 0.000731s | 0.000756s | byte equality observed |
| list_version.test | 10 | 0.000725s | 0.000731s | 0.000761s | byte equality observed |
| map_version.test | 10 | 0.000758s | 0.000725s | 0.000833s | byte equality observed |
| mp11_version.test | 10 | 0.000745s | 0.000710s | 0.000841s | byte equality observed |
| mp_all.test | 10 | 0.000757s | 0.000742s | 0.000825s | byte equality observed |
| mp_all_2.test | 10 | 0.000749s | 0.000726s | 0.000815s | byte equality observed |
| mp_all_of.test | 10 | 0.000758s | 0.000722s | 0.000806s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000741s | 0.000749s | 0.000816s | byte equality observed |
| mp_and.test | 10 | 0.000760s | 0.000734s | 0.000834s | byte equality observed |
| mp_any.test | 10 | 0.000742s | 0.000730s | 0.000869s | byte equality observed |
| mp_any_2.test | 10 | 0.000759s | 0.000736s | 0.000831s | byte equality observed |
| mp_any_of.test | 10 | 0.000752s | 0.000737s | 0.000822s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000750s | 0.000730s | 0.000840s | byte equality observed |
| mp_append.test | 10 | 0.000766s | 0.000744s | 0.000804s | byte equality observed |
| mp_append_2.test | 10 | 0.000801s | 0.000748s | 0.000820s | byte equality observed |
| mp_append_3.test | 10 | 0.000364s | 0.000341s | 0.000819s | byte equality observed |
| mp_append_sf.test | 10 | 0.000804s | 0.000733s | 0.000844s | byte equality observed |
| mp_apply_q.test | 10 | 0.000818s | 0.000753s | 0.000828s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.000811s | 0.000749s | 0.000852s | byte equality observed |
| mp_assign.test | 10 | 0.000827s | 0.000737s | 0.000841s | byte equality observed |
| mp_assign_2.test | 10 | 0.000374s | 0.000333s | 0.000836s | byte equality observed |
| mp_at.test | 10 | 0.000806s | 0.000752s | 0.000792s | byte equality observed |
| mp_at_2.test | 10 | 0.000369s | 0.000348s | 0.000783s | byte equality observed |
| mp_at_sf.test | 10 | 0.000841s | 0.000767s | 0.000803s | byte equality observed |
| mp_back.test | 10 | 0.000817s | 0.000788s | 0.000802s | byte equality observed |
| mp_back_2.test | 10 | 0.000369s | 0.000354s | 0.000801s | byte equality observed |
| mp_bind.test | 10 | 0.000805s | 0.000785s | 0.000821s | byte equality observed |
| mp_bind_back.test | 10 | 0.000819s | 0.000793s | 0.000797s | byte equality observed |
| mp_bind_front.test | 10 | 0.000818s | 0.000806s | 0.000828s | byte equality observed |
| mp_bind_q.test | 10 | 0.000813s | 0.000837s | 0.000840s | byte equality observed |
| mp_clear.test | 10 | 0.000819s | 0.000832s | 0.000800s | byte equality observed |
| mp_clear_2.test | 10 | 0.000369s | 0.000371s | 0.000829s | byte equality observed |
| mp_compose.test | 10 | 0.000815s | 0.000835s | 0.000844s | byte equality observed |
| mp_cond.test | 10 | 0.000810s | 0.000821s | 0.000826s | byte equality observed |
| mp_cond_sf.test | 10 | 0.000818s | 0.000835s | 0.000814s | byte equality observed |
| mp_contains.test | 10 | 0.000834s | 0.000839s | 0.000849s | byte equality observed |
| mp_copy_if.test | 10 | 0.000835s | 0.000821s | 0.000832s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.000845s | 0.000817s | 0.000825s | byte equality observed |
| mp_count.test | 10 | 0.000840s | 0.000855s | 0.000836s | byte equality observed |
| mp_count_if.test | 10 | 0.000811s | 0.000818s | 0.000830s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000837s | 0.000821s | 0.000820s | byte equality observed |
| mp_defer.test | 10 | 0.000827s | 0.000811s | 0.000823s | byte equality observed |
| mp_drop.test | 10 | 0.000788s | 0.000820s | 0.000815s | byte equality observed |
| mp_drop_2.test | 10 | 0.000368s | 0.000367s | 0.000779s | byte equality observed |
| mp_empty.test | 10 | 0.000817s | 0.000822s | 0.000805s | byte equality observed |
| mp_empty_2.test | 10 | 0.000367s | 0.000361s | 0.000779s | byte equality observed |
| mp_erase.test | 10 | 0.000824s | 0.000832s | 0.000799s | byte equality observed |
| mp_erase_2.test | 10 | 0.000365s | 0.000364s | 0.000789s | byte equality observed |
| mp_eval_if.test | 10 | 0.000817s | 0.000802s | 0.000818s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.000813s | 0.000826s | 0.000826s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.000826s | 0.000819s | 0.000843s | byte equality observed |
| mp_eval_or.test | 10 | 0.000823s | 0.000800s | 0.000853s | byte equality observed |
| mp_fill.test | 10 | 0.000805s | 0.000807s | 0.000815s | byte equality observed |
| mp_fill_2.test | 10 | 0.000362s | 0.000362s | 0.000788s | byte equality observed |
| mp_filter.test | 10 | 0.000793s | 0.000795s | 0.000816s | byte equality observed |
| mp_find.test | 10 | 0.000812s | 0.000812s | 0.000813s | byte equality observed |
| mp_find_if.test | 10 | 0.000801s | 0.000836s | 0.000823s | byte equality observed |
| mp_find_if_q.test | 10 | 0.000812s | 0.000841s | 0.000851s | byte equality observed |
| mp_flatten.test | 10 | 0.000816s | 0.000827s | 0.000832s | byte equality observed |
| mp_fold.test | 10 | 0.000861s | 0.000833s | 0.000836s | byte equality observed |
| mp_fold_q.test | 10 | 0.000850s | 0.000830s | 0.000838s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.000834s | 0.000831s | 0.000834s | byte equality observed |
| mp_for_each.test | 10 | 0.000812s | 0.000783s | 0.000852s | byte equality observed |
| mp_from_sequence.test | 10 | 0.000826s | 0.000838s | 0.000847s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.000820s | 0.000837s | 0.000849s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.000794s | 0.000840s | 0.000849s | byte equality observed |
| mp_front.test | 10 | 0.000806s | 0.000801s | 0.000833s | byte equality observed |
| mp_front_2.test | 10 | 0.000367s | 0.000372s | 0.000817s | byte equality observed |
| mp_identity.test | 10 | 0.000821s | 0.000819s | 0.000824s | byte equality observed |
| mp_if.test | 10 | 0.000822s | 0.000850s | 0.000813s | byte equality observed |
| mp_if_sf.test | 10 | 0.000834s | 0.000844s | 0.000807s | byte equality observed |
| mp_inherit.test | 10 | 0.000807s | 0.000810s | 0.000788s | byte equality observed |
| mp_insert.test | 10 | 0.000821s | 0.000829s | 0.000793s | byte equality observed |
| mp_insert_2.test | 10 | 0.000367s | 0.000368s | 0.000771s | byte equality observed |
| mp_intersperse.test | 10 | 0.000819s | 0.000827s | 0.000796s | byte equality observed |
| mp_invoke_q.test | 10 | 0.000837s | 0.000811s | 0.000832s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.000846s | 0.000786s | 0.000850s | byte equality observed |
| mp_iota.test | 10 | 0.000824s | 0.000820s | 0.000861s | byte equality observed |
| mp_iota_2.test | 10 | 0.000819s | 0.000823s | 0.000846s | byte equality observed |
| mp_is_list.test | 10 | 0.000820s | 0.000806s | 0.000787s | byte equality observed |
| mp_is_map.test | 10 | 0.000810s | 0.000816s | 0.000795s | byte equality observed |
| mp_is_set.test | 10 | 0.000810s | 0.000832s | 0.000817s | byte equality observed |
| mp_is_value_list.test | 10 | 0.000802s | 0.000780s | 0.000817s | byte equality observed |
| mp_iterate.test | 10 | 0.000802s | 0.000799s | 0.000812s | byte equality observed |
| mp_join.test | 10 | 0.000807s | 0.000836s | 0.000840s | byte equality observed |
| mp_lambda.test | 10 | 0.000834s | 0.000839s | 0.000870s | byte equality observed |
| mp_less.test | 10 | 0.000832s | 0.000831s | 0.000808s | byte equality observed |
| mp_list_c.test | 10 | 0.000815s | 0.000821s | 0.000819s | byte equality observed |
| mp_list_v.test | 10 | 0.000371s | 0.000367s | 0.000806s | byte equality observed |
| mp_map_contains.test | 10 | 0.000807s | 0.000812s | 0.000812s | byte equality observed |
| mp_map_erase.test | 10 | 0.000821s | 0.000836s | 0.000812s | byte equality observed |
| mp_map_find.test | 10 | 0.000821s | 0.000818s | 0.000828s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000836s | 0.000810s | 0.000833s | byte equality observed |
| mp_map_find_3.test | 10 | 0.000818s | 0.000808s | 0.000821s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000817s | 0.000817s | 0.000806s | byte equality observed |
| mp_map_insert.test | 10 | 0.000820s | 0.000852s | 0.000818s | byte equality observed |
| mp_map_keys.test | 10 | 0.000828s | 0.000807s | 0.000817s | byte equality observed |
| mp_map_replace.test | 10 | 0.000839s | 0.000830s | 0.000800s | byte equality observed |
| mp_map_update.test | 10 | 0.000830s | 0.000833s | 0.000825s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000805s | 0.000802s | 0.000813s | byte equality observed |
| mp_max.test | 10 | 0.000820s | 0.000794s | 0.000836s | byte equality observed |
| mp_max_element.test | 10 | 0.000818s | 0.000828s | 0.000828s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000372s | 0.000365s | 0.000784s | byte equality observed |
| mp_max_element_q.test | 10 | 0.000816s | 0.000817s | 0.000786s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000368s | 0.000362s | 0.000796s | byte equality observed |
| mp_min.test | 10 | 0.000821s | 0.000831s | 0.000816s | byte equality observed |
| mp_min_element.test | 10 | 0.000816s | 0.000838s | 0.000837s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000366s | 0.000358s | 0.000810s | byte equality observed |
| mp_min_element_q.test | 10 | 0.000812s | 0.000820s | 0.000800s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000366s | 0.000373s | 0.000792s | byte equality observed |
| mp_none_of.test | 10 | 0.000830s | 0.000800s | 0.000821s | byte equality observed |
| mp_none_of_q.test | 10 | 0.000804s | 0.000814s | 0.000812s | byte equality observed |
| mp_not_fn.test | 10 | 0.000829s | 0.000818s | 0.000837s | byte equality observed |
| mp_nth_element.test | 10 | 0.000837s | 0.000800s | 0.000828s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.000816s | 0.000840s | 0.000794s | byte equality observed |
| mp_or.test | 10 | 0.000805s | 0.000832s | 0.000815s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.000809s | 0.000843s | 0.000843s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.000798s | 0.000836s | 0.000825s | byte equality observed |
| mp_partial_sum.test | 10 | 0.000822s | 0.000818s | 0.000832s | byte equality observed |
| mp_partition.test | 10 | 0.000834s | 0.000814s | 0.000791s | byte equality observed |
| mp_partition_q.test | 10 | 0.000809s | 0.000801s | 0.000817s | byte equality observed |
| mp_plus.test | 10 | 0.000812s | 0.000803s | 0.000822s | byte equality observed |
| mp_pop_back.test | 10 | 0.000831s | 0.000814s | 0.000800s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000361s | 0.000372s | 0.000768s | byte equality observed |
| mp_pop_front.test | 10 | 0.000818s | 0.000802s | 0.000824s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000361s | 0.000367s | 0.000839s | byte equality observed |
| mp_power_set.test | 10 | 0.000824s | 0.000853s | 0.000811s | byte equality observed |
| mp_product.test | 10 | 0.000821s | 0.000847s | 0.000828s | byte equality observed |
| mp_push_back.test | 10 | 0.000804s | 0.000822s | 0.000805s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000365s | 0.000375s | 0.000790s | byte equality observed |
| mp_push_front.test | 10 | 0.000803s | 0.000812s | 0.000814s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000367s | 0.000350s | 0.000781s | byte equality observed |
| mp_quote.test | 10 | 0.000826s | 0.000825s | 0.000796s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000841s | 0.000835s | 0.000805s | byte equality observed |
| mp_remove.test | 10 | 0.000816s | 0.000800s | 0.000829s | byte equality observed |
| mp_remove_if.test | 10 | 0.000808s | 0.000836s | 0.000831s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.000811s | 0.000816s | 0.000843s | byte equality observed |
| mp_rename.test | 10 | 0.000829s | 0.000847s | 0.000815s | byte equality observed |
| mp_rename_2.test | 10 | 0.000369s | 0.000363s | 0.000813s | byte equality observed |
| mp_rename_v.test | 10 | 0.000371s | 0.000358s | 0.000796s | byte equality observed |
| mp_repeat.test | 10 | 0.000819s | 0.000820s | 0.000810s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000363s | 0.000363s | 0.000795s | byte equality observed |
| mp_repeat_3.test | 10 | 0.000826s | 0.000816s | 0.000795s | byte equality observed |
| mp_replace.test | 10 | 0.000818s | 0.000831s | 0.000793s | byte equality observed |
| mp_replace_at.test | 10 | 0.000828s | 0.000825s | 0.000827s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.000844s | 0.000802s | 0.000831s | byte equality observed |
| mp_replace_front.test | 10 | 0.000816s | 0.000793s | 0.000825s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000369s | 0.000368s | 0.000820s | byte equality observed |
| mp_replace_if.test | 10 | 0.000808s | 0.000836s | 0.000851s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.000808s | 0.000827s | 0.000853s | byte equality observed |
| mp_replace_second.test | 10 | 0.000806s | 0.000804s | 0.000815s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000371s | 0.000375s | 0.000786s | byte equality observed |
| mp_replace_third.test | 10 | 0.000811s | 0.000821s | 0.000829s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000368s | 0.000366s | 0.000820s | byte equality observed |
| mp_reverse.test | 10 | 0.000826s | 0.000847s | 0.000826s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.000845s | 0.000818s | 0.000845s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000852s | 0.000815s | 0.000801s | byte equality observed |
| mp_rotate_left.test | 10 | 0.000834s | 0.000821s | 0.000818s | byte equality observed |
| mp_rotate_right.test | 10 | 0.000831s | 0.000803s | 0.000805s | byte equality observed |
| mp_same.test | 10 | 0.000839s | 0.000819s | 0.000824s | byte equality observed |
| mp_second.test | 10 | 0.000818s | 0.000814s | 0.000802s | byte equality observed |
| mp_second_2.test | 10 | 0.000370s | 0.000364s | 0.000794s | byte equality observed |
| mp_set_contains.test | 10 | 0.000812s | 0.000820s | 0.000827s | byte equality observed |
| mp_set_difference.test | 10 | 0.000814s | 0.000823s | 0.000832s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000836s | 0.000815s | 0.000843s | byte equality observed |
| mp_set_intersection.test | 10 | 0.000826s | 0.000819s | 0.000799s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000820s | 0.000845s | 0.000836s | byte equality observed |
| mp_set_push_back.test | 10 | 0.000818s | 0.000859s | 0.000843s | byte equality observed |
| mp_set_push_front.test | 10 | 0.000837s | 0.000830s | 0.000817s | byte equality observed |
| mp_set_union.test | 10 | 0.000804s | 0.000855s | 0.000827s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.000820s | 0.000848s | 0.000816s | byte equality observed |
| mp_similar.test | 10 | 0.000833s | 0.000855s | 0.000815s | byte equality observed |
| mp_size.test | 10 | 0.000807s | 0.000834s | 0.000818s | byte equality observed |
| mp_size_2.test | 10 | 0.000373s | 0.000364s | 0.000810s | byte equality observed |
| mp_slice.test | 10 | 0.000832s | 0.000825s | 0.000810s | byte equality observed |
| mp_slice_2.test | 10 | 0.000373s | 0.000368s | 0.000787s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.000832s | 0.000825s | 0.000832s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.000826s | 0.000822s | 0.000834s | byte equality observed |
| mp_sort.test | 10 | 0.000822s | 0.000822s | 0.000834s | byte equality observed |
| mp_sort_q.test | 10 | 0.000836s | 0.000801s | 0.000811s | byte equality observed |
| mp_split.test | 10 | 0.000832s | 0.000842s | 0.000820s | byte equality observed |
| mp_starts_with.test | 10 | 0.000816s | 0.000844s | 0.000796s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.000847s | 0.000795s | 0.000825s | byte equality observed |
| mp_take.test | 10 | 0.000838s | 0.000815s | 0.000797s | byte equality observed |
| mp_take_2.test | 10 | 0.000371s | 0.000373s | 0.000818s | byte equality observed |
| mp_third.test | 10 | 0.000813s | 0.000804s | 0.000812s | byte equality observed |
| mp_third_2.test | 10 | 0.000363s | 0.000370s | 0.000799s | byte equality observed |
| mp_transform.test | 10 | 0.000840s | 0.000830s | 0.000832s | byte equality observed |
| mp_transform_2.test | 10 | 0.000818s | 0.000807s | 0.000833s | byte equality observed |
| mp_transform_front.test | 10 | 0.000808s | 0.000813s | 0.000808s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000372s | 0.000373s | 0.000850s | byte equality observed |
| mp_transform_if.test | 10 | 0.000820s | 0.000826s | 0.000788s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.000820s | 0.000826s | 0.000841s | byte equality observed |
| mp_transform_q.test | 10 | 0.000862s | 0.000837s | 0.000849s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.000836s | 0.000810s | 0.000797s | byte equality observed |
| mp_transform_second.test | 10 | 0.000822s | 0.000817s | 0.000820s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000375s | 0.000368s | 0.000800s | byte equality observed |
| mp_transform_sf.test | 10 | 0.000813s | 0.000825s | 0.000793s | byte equality observed |
| mp_transform_third.test | 10 | 0.000806s | 0.000819s | 0.000813s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000369s | 0.000363s | 0.000826s | byte equality observed |
| mp_unique.test | 10 | 0.000796s | 0.000808s | 0.000808s | byte equality observed |
| mp_unique_if.test | 10 | 0.000830s | 0.000834s | 0.000828s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.000831s | 0.000800s | 0.000825s | byte equality observed |
| mp_valid.test | 10 | 0.000835s | 0.000831s | 0.000833s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.000820s | 0.000815s | 0.000845s | byte equality observed |
| mp_value.test | 10 | 0.000370s | 0.000369s | 0.000824s | byte equality observed |
| mp_with_index.test | 10 | 0.001120s | 0.001092s | 0.001042s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000369s | 0.000373s | 0.000799s | byte equality observed |
| mpl.test | 10 | 0.000841s | 0.000813s | 0.000833s | byte equality observed |
| mpl_list.test | 10 | 0.000807s | 0.000845s | 0.000824s | byte equality observed |
| mpl_tuple.test | 10 | 0.000841s | 0.000853s | 0.000829s | byte equality observed |
| mpl_version.test | 10 | 0.000855s | 0.000821s | 0.000812s | byte equality observed |
| set_version.test | 10 | 0.000837s | 0.000800s | 0.000815s | byte equality observed |
| tuple_apply.test | 10 | 0.000861s | 0.000821s | 0.000834s | byte equality observed |
| tuple_for_each.test | 10 | 0.000850s | 0.000791s | 0.000804s | byte equality observed |
| tuple_transform.test | 10 | 0.000812s | 0.000826s | 0.000811s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000814s | 0.000838s | 0.000846s | byte equality observed |
| tuple_version.test | 10 | 0.000812s | 0.000822s | 0.000830s | byte equality observed |
| utility_version.test | 10 | 0.000812s | 0.000817s | 0.000806s | byte equality observed |
| version.test | 10 | 0.000809s | 0.000818s | 0.000829s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45617981312).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
