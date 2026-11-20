# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.029697 | 0.058533 | 0.094766 | — | — | — |
| complex_h.test | COMPILE | 0.119507 | 0.257821 | 0.368997 | — | — | — |
| mp_size.test | RUN | 0.140811 | 0.852025 | 0.473230 | 0.001203 | 0.001291 | 0.000912 |
| mp_size_2.test | RUN | 0.012330 | 0.028566 | 0.043650 | 0.000526 | 0.000448 | 0.001208 |
| mp_empty.test | RUN | 0.140076 | 0.502477 | 0.467294 | 0.001173 | 0.001282 | 0.001147 |
| mp_empty_2.test | RUN | 0.012941 | 0.029895 | 0.045209 | 0.000500 | 0.000489 | 0.001241 |
| mp_assign.test | RUN | 0.155862 | 1.123443 | 0.636750 | 0.001190 | 0.001196 | 0.001011 |
| mp_assign_2.test | RUN | 0.013119 | 0.029316 | 0.044115 | 0.000499 | 0.000492 | 0.001057 |
| mp_clear.test | RUN | 0.136068 | 0.466469 | 0.470240 | 0.001316 | 0.001290 | 0.001190 |
| mp_clear_2.test | RUN | 0.011468 | 0.029073 | 0.044576 | 0.000452 | 0.000465 | 0.001352 |
| mp_front.test | RUN | 0.139828 | 0.755400 | 0.517083 | 0.001196 | 0.001299 | 0.001175 |
| mp_front_2.test | RUN | 0.013391 | 0.029932 | 0.045267 | 0.000478 | 0.000470 | 0.001220 |
| mp_pop_front.test | RUN | 0.150181 | 0.795510 | 0.533849 | 0.001436 | 0.001161 | 0.001394 |
| mp_pop_front_2.test | RUN | 0.013105 | 0.029804 | 0.043987 | 0.000506 | 0.000462 | 0.001215 |
| mp_second.test | RUN | 0.141200 | 0.500330 | 0.504816 | 0.001161 | 0.001377 | 0.001089 |
| mp_second_2.test | RUN | 0.010830 | 0.029140 | 0.043770 | 0.000439 | 0.000513 | 0.001279 |
| mp_third.test | RUN | 0.134871 | 0.458956 | 0.451221 | 0.000941 | 0.001309 | 0.001372 |
| mp_third_2.test | RUN | 0.012828 | 0.027823 | 0.044915 | 0.000489 | 0.000482 | 0.001094 |
| mp_push_front.test | RUN | 0.188054 | 1.723820 | 0.863632 | 0.001289 | 0.001290 | 0.001290 |
| mp_push_front_2.test | RUN | 0.012432 | 0.029421 | 0.044843 | 0.000493 | 0.000510 | 0.001188 |
| mp_push_back.test | RUN | 0.188307 | 1.714118 | 0.847509 | 0.001314 | 0.001271 | 0.001202 |
| mp_push_back_2.test | RUN | 0.012654 | 0.030012 | 0.044833 | 0.000474 | 0.000499 | 0.001204 |
| mp_rename.test | RUN | 0.175728 | 1.559789 | 0.746232 | 0.001281 | 0.001139 | 0.001391 |
| mp_rename_2.test | RUN | 0.013032 | 0.029702 | 0.045466 | 0.000411 | 0.000474 | 0.001381 |
| mp_append.test | RUN | 0.178736 | 1.791217 | 0.802063 | 0.001266 | 0.001347 | 0.001460 |
| mp_append_2.test | RUN | 0.411104 | 4.022071 | 1.090632 | 0.001260 | 0.001310 | 0.001212 |
| mp_append_3.test | RUN | 0.012303 | 0.029445 | 0.045196 | 0.000504 | 0.000462 | 0.001243 |
| mp_append_sf.test | RUN | 0.125673 | 0.425888 | 0.432847 | 0.001233 | 0.001216 | 0.001305 |
| mp_replace_front.test | RUN | 0.167170 | 1.257232 | 0.664315 | 0.001433 | 0.001283 | 0.001135 |
| mp_replace_front_2.test | RUN | 0.012397 | 0.029362 | 0.043271 | 0.000525 | 0.000477 | 0.001266 |
| mp_replace_second.test | RUN | 0.162214 | 0.805428 | 0.596232 | 0.001274 | 0.001317 | 0.001303 |
| mp_replace_second_2.test | RUN | 0.012554 | 0.028527 | 0.045143 | 0.000441 | 0.000505 | 0.001309 |
| mp_replace_third.test | RUN | 0.144536 | 0.659231 | 0.541371 | 0.001387 | 0.001181 | 0.001352 |
| mp_replace_third_2.test | RUN | 0.014061 | 0.029431 | 0.043904 | 0.000476 | 0.000504 | 0.001444 |
| mp_apply_q.test | RUN | 0.168077 | 1.558924 | 0.729861 | 0.001193 | 0.001322 | 0.001309 |
| mp_apply_q_sf.test | RUN | 0.136659 | 0.437247 | 0.447091 | 0.001400 | 0.001237 | 0.001339 |
| mp_is_list.test | RUN | 0.141814 | 0.523542 | 0.454685 | 0.001299 | 0.001271 | 0.001204 |
| mp_list_c.test | RUN | 0.146524 | 0.633399 | 0.508940 | 0.001264 | 0.001244 | 0.001194 |
| mp_transform_front.test | RUN | 0.158032 | 1.253721 | 0.641931 | 0.001155 | 0.001282 | 0.001311 |
| mp_transform_front_2.test | RUN | 0.012783 | 0.029306 | 0.045897 | 0.000515 | 0.000470 | 0.001374 |
| mp_transform_second.test | RUN | 0.159898 | 1.087678 | 0.598272 | 0.001141 | 0.001138 | 0.001301 |
| mp_transform_second_2.test | RUN | 0.011692 | 0.029995 | 0.045023 | 0.000510 | 0.000500 | 0.001250 |
| mp_transform_third.test | RUN | 0.147985 | 0.812596 | 0.513773 | 0.001293 | 0.001292 | 0.001317 |
| mp_transform_third_2.test | RUN | 0.013976 | 0.029498 | 0.045124 | 0.000468 | 0.000467 | 0.001186 |
| mp_list_v.test | RUN | 0.013357 | 0.029399 | 0.045167 | 0.000417 | 0.000487 | 0.001202 |
| mp_rename_v.test | RUN | 0.011773 | 0.028882 | 0.047620 | 0.000489 | 0.000487 | 0.001090 |
| mp_is_value_list.test | RUN | 0.121700 | 0.318400 | 0.434516 | 0.001296 | 0.001289 | 0.001228 |
| mp_transform.test | RUN | 0.335122 | 2.705103 | 1.371139 | 0.001610 | 0.001290 | 0.001370 |
| mp_transform_2.test | RUN | 0.124702 | 0.291480 | 0.392211 | 0.001258 | 0.001202 | 0.001329 |
| mp_transform_q.test | RUN | 0.327388 | 2.568195 | 1.310572 | 0.001160 | 0.001317 | 0.001368 |
| mp_transform_q_2.test | RUN | 0.335582 | 0.804865 | 1.711869 | 0.001338 | 0.001235 | 0.001364 |
| mp_transform_sf.test | RUN | 0.143015 | 0.443857 | 0.469763 | 0.001290 | 0.001300 | 0.001342 |
| mp_transform_if.test | RUN | 0.181497 | 1.275937 | 0.715165 | 0.001436 | 0.001206 | 0.001257 |
| mp_transform_if_q.test | RUN | 0.182798 | 1.264283 | 0.723733 | 0.001299 | 0.001162 | 0.001223 |
| mp_filter.test | RUN | 0.158886 | 0.753366 | 0.537370 | 0.001060 | 0.001227 | 0.001128 |
| mp_fill.test | RUN | 0.146018 | 0.563568 | 0.501632 | 0.001165 | 0.001302 | 0.001258 |
| mp_fill_2.test | RUN | 0.021898 | 0.045167 | 0.072806 | 0.000519 | 0.000503 | 0.001380 |
| mp_count.test | RUN | 0.285572 | 1.341708 | 0.780890 | 0.001300 | 0.001260 | 0.001229 |
| mp_count_if.test | RUN | 0.292406 | 1.353493 | 0.854764 | 0.001143 | 0.001169 | 0.001298 |
| mp_count_if_q.test | RUN | 0.151312 | 0.908572 | 0.516203 | 0.001235 | 0.001166 | 0.001131 |
| mp_contains.test | RUN | 0.138467 | 0.546380 | 0.485511 | 0.001233 | 0.001262 | 0.001399 |
| mp_starts_with.test | RUN | 0.144258 | 0.540620 | 0.492389 | 0.001418 | 0.001141 | 0.001221 |
| mp_starts_with_sf.test | RUN | 0.140754 | 0.450864 | 0.442952 | 0.001114 | 0.001276 | 0.001431 |
| mp_repeat.test | RUN | 0.212611 | 2.277584 | 0.926747 | 0.001162 | 0.001389 | 0.001312 |
| mp_repeat_2.test | RUN | 0.022011 | 0.047325 | 0.073207 | 0.000481 | 0.000512 | 0.001192 |
| mp_repeat_3.test | RUN | 0.178454 | 0.281245 | 0.446060 | 0.001412 | 0.001325 | 0.001330 |
| mp_product.test | RUN | 0.164736 | 1.359746 | 0.683071 | 0.001197 | 0.001361 | 0.001206 |
| mp_drop.test | RUN | 0.185262 | 1.714731 | 0.743316 | 0.001171 | 0.001225 | 0.001371 |
| mp_drop_2.test | RUN | 0.022688 | 0.046495 | 0.075858 | 0.000458 | 0.000501 | 0.001297 |
| mp_iota.test | RUN | 0.178276 | 1.438149 | 0.669066 | 0.001279 | 0.001464 | 0.001282 |
| mp_iota_2.test | RUN | 0.188721 | 1.741776 | 0.770673 | 0.001416 | 0.001415 | 0.001192 |
| mp_at.test | RUN | 0.152252 | 0.754570 | 0.541169 | 0.001138 | 0.001179 | 0.001267 |
| mp_at_2.test | RUN | 0.022162 | 0.046518 | 0.073795 | 0.000611 | 0.000482 | 0.001229 |
| mp_at_sf.test | RUN | 0.139940 | 0.454457 | 0.457290 | 0.001420 | 0.001427 | 0.001182 |
| mp_take.test | RUN | 0.249625 | 2.267349 | 0.922882 | 0.001202 | 0.001207 | 0.001335 |
| mp_take_2.test | RUN | 0.022513 | 0.046846 | 0.072141 | 0.000539 | 0.000467 | 0.001150 |
| mp_slice.test | RUN | 0.296958 | 2.292040 | 1.171933 | 0.001365 | 0.001254 | 0.001362 |
| mp_slice_2.test | RUN | 0.021768 | 0.046444 | 0.072558 | 0.000568 | 0.000494 | 0.001357 |
| mp_replace.test | RUN | 0.183093 | 1.160817 | 0.752361 | 0.001215 | 0.001277 | 0.001442 |
| mp_replace_if.test | RUN | 0.172561 | 1.017126 | 0.691408 | 0.001299 | 0.001255 | 0.001595 |
| mp_replace_if_q.test | RUN | 0.168218 | 1.011902 | 0.691251 | 0.001229 | 0.001205 | 0.001397 |
| mp_copy_if.test | RUN | 0.174236 | 1.438997 | 0.658610 | 0.001176 | 0.001341 | 0.001465 |
| mp_copy_if_q.test | RUN | 0.174728 | 1.453543 | 0.656418 | 0.001249 | 0.001251 | 0.001250 |
| mp_remove.test | RUN | 0.173720 | 0.958395 | 0.675378 | 0.001286 | 0.001300 | 0.001185 |
| mp_remove_if.test | RUN | 0.181990 | 1.526062 | 0.705865 | 0.001145 | 0.001380 | 0.001387 |
| mp_remove_if_q.test | RUN | 0.183732 | 1.520648 | 0.710709 | 0.001216 | 0.001302 | 0.001322 |
| mp_partition.test | RUN | 0.181050 | 1.436164 | 0.749648 | 0.001230 | 0.001180 | 0.001224 |
| mp_partition_q.test | RUN | 0.182224 | 1.418870 | 0.755606 | 0.001300 | 0.001257 | 0.001213 |
| mp_sort.test | RUN | 0.168937 | 1.022804 | 0.656527 | 0.001161 | 0.001416 | 0.001377 |
| mp_sort_q.test | RUN | 0.172652 | 1.016046 | 0.657421 | 0.001247 | 0.001285 | 0.001273 |
| mp_find.test | RUN | 0.164691 | 1.092953 | 0.563832 | 0.001116 | 0.001293 | 0.001340 |
| mp_find_if.test | RUN | 0.158889 | 1.003209 | 0.536125 | 0.001265 | 0.001290 | 0.001264 |
| mp_find_if_q.test | RUN | 0.172353 | 1.127054 | 0.639371 | 0.001218 | 0.001284 | 0.001260 |
| mp_reverse.test | RUN | 0.373957 | 3.053104 | 1.291717 | 0.001131 | 0.001380 | 0.001363 |
| mp_fold.test | RUN | 0.624406 | 2.351459 | 3.332973 | 0.001288 | 0.001355 | 0.001291 |
| mp_fold_q.test | RUN | 0.159378 | 1.016852 | 0.610802 | 0.001207 | 0.001345 | 0.001233 |
| mp_fold_q_sf.test | RUN | 0.140719 | 0.455429 | 0.468172 | 0.001208 | 0.001250 | 0.001408 |
| mp_reverse_fold.test | RUN | 0.295825 | 2.221891 | 0.916279 | 0.001393 | 0.001341 | 0.001207 |
| mp_reverse_fold_q.test | RUN | 0.166255 | 1.219915 | 0.667339 | 0.001185 | 0.001298 | 0.001353 |
| mp_unique.test | RUN | 0.161720 | 1.093430 | 0.651851 | 0.001127 | 0.001360 | 0.001305 |
| mp_unique_if.test | RUN | 0.307960 | 2.340236 | 1.043843 | 0.001168 | 0.001366 | 0.001162 |
| mp_unique_if_q.test | RUN | 0.259771 | 2.320862 | 0.832342 | 0.001244 | 0.001049 | 0.001226 |
| mp_all_of.test | RUN | 0.394440 | 1.212063 | 1.079574 | 0.001282 | 0.001278 | 0.001223 |
| mp_all_of_q.test | RUN | 0.141917 | 0.517713 | 0.465368 | 0.001297 | 0.001354 | 0.001379 |
| mp_any_of.test | RUN | 0.393024 | 1.277331 | 1.045661 | 0.001173 | 0.001234 | 0.001260 |
| mp_any_of_q.test | RUN | 0.146393 | 0.512610 | 0.484511 | 0.001266 | 0.001098 | 0.001322 |
| mp_none_of.test | RUN | 0.387968 | 1.283721 | 1.037454 | 0.001249 | 0.001263 | 0.001389 |
| mp_none_of_q.test | RUN | 0.149693 | 0.535377 | 0.488821 | 0.001153 | 0.000960 | 0.001303 |
| mp_replace_at.test | RUN | 0.181895 | 1.104329 | 0.736208 | 0.001322 | 0.001350 | 0.001429 |
| mp_replace_at_c.test | RUN | 0.180204 | 1.107431 | 0.742595 | 0.001179 | 0.001397 | 0.001122 |
| mp_for_each.test | RUN | 0.165805 | 0.715893 | 0.746238 | 0.001127 | 0.001132 | 0.001232 |
| mp_insert.test | RUN | 0.279515 | 2.294386 | 1.055390 | 0.001296 | 0.001298 | 0.001385 |
| mp_insert_2.test | RUN | 0.022855 | 0.045804 | 0.069650 | 0.000481 | 0.000427 | 0.001322 |
| mp_erase.test | RUN | 0.303238 | 2.387483 | 1.247263 | 0.001198 | 0.001164 | 0.001205 |
| mp_erase_2.test | RUN | 0.022418 | 0.046896 | 0.073436 | 0.000492 | 0.000475 | 0.001270 |
| mp_with_index.test | RUN | 0.397588 | 4.807097 | 2.696220 | 0.001644 | 0.001682 | 0.001539 |
| mp_with_index_cx.test | RUN | 0.003063 | 0.014391 | 0.022726 | 0.000504 | 0.000497 | 0.001309 |
| mp_from_sequence.test | RUN | 0.174858 | 1.264525 | 0.694011 | 0.001285 | 0.001478 | 0.001267 |
| mp_from_sequence_2.test | RUN | 0.188806 | 1.479772 | 0.771186 | 0.001176 | 0.001173 | 0.001313 |
| mp_from_sequence_3.test | RUN | 0.151018 | 0.655373 | 0.541724 | 0.001233 | 0.001219 | 0.001279 |
| mp_min_element.test | RUN | 0.146942 | 0.582843 | 0.485848 | 0.001097 | 0.001230 | 0.001367 |
| mp_min_element_2.test | RUN | 0.021605 | 0.046436 | 0.072939 | 0.000473 | 0.000485 | 0.001331 |
| mp_min_element_q.test | RUN | 0.146323 | 0.586540 | 0.502466 | 0.001131 | 0.001279 | 0.001143 |
| mp_min_element_q_2.test | RUN | 0.022140 | 0.046242 | 0.071127 | 0.000462 | 0.000499 | 0.001259 |
| mp_max_element.test | RUN | 0.149231 | 0.579419 | 0.498124 | 0.001150 | 0.001246 | 0.001208 |
| mp_max_element_2.test | RUN | 0.021931 | 0.045556 | 0.070853 | 0.000586 | 0.000529 | 0.001165 |
| mp_max_element_q.test | RUN | 0.149212 | 0.581797 | 0.495059 | 0.001270 | 0.001297 | 0.001433 |
| mp_max_element_q_2.test | RUN | 0.022073 | 0.047328 | 0.067122 | 0.000531 | 0.000484 | 0.001271 |
| mp_nth_element.test | RUN | 0.166169 | 0.829265 | 0.613326 | 0.001282 | 0.001358 | 0.001386 |
| mp_nth_element_q.test | RUN | 0.163933 | 0.826481 | 0.602765 | 0.001185 | 0.001149 | 0.001230 |
| mp_back.test | RUN | 0.162940 | 0.688483 | 0.571543 | 0.001300 | 0.001363 | 0.001260 |
| mp_back_2.test | RUN | 0.023055 | 0.046130 | 0.073048 | 0.000522 | 0.000463 | 0.001256 |
| mp_pop_back.test | RUN | 0.473992 | 4.666294 | 1.243645 | 0.001253 | 0.001163 | 0.001202 |
| mp_pop_back_2.test | RUN | 0.023726 | 0.046326 | 0.071776 | 0.000477 | 0.000548 | 0.001252 |
| mp_flatten.test | RUN | 0.190617 | 1.612054 | 0.824424 | 0.001172 | 0.001356 | 0.001236 |
| mp_rotate_left.test | RUN | 0.189674 | 1.753776 | 0.807300 | 0.001111 | 0.001383 | 0.001131 |
| mp_rotate_right.test | RUN | 0.186941 | 1.745507 | 0.811303 | 0.001103 | 0.001249 | 0.001286 |
| mp_power_set.test | RUN | 0.185812 | 1.688846 | 0.815610 | 0.001338 | 0.001332 | 0.001251 |
| mp_partial_sum.test | RUN | 0.253622 | 2.266755 | 0.938856 | 0.001156 | 0.001213 | 0.001402 |
| mp_iterate.test | RUN | 0.162474 | 0.666547 | 0.639659 | 0.000919 | 0.001305 | 0.001179 |
| mp_pairwise_fold.test | RUN | 0.189623 | 1.564167 | 0.838350 | 0.001080 | 0.001355 | 0.001411 |
| mp_pairwise_fold_q.test | RUN | 0.150133 | 0.444848 | 0.467893 | 0.001212 | 0.001408 | 0.001286 |
| mp_sliding_fold.test | RUN | 0.376034 | 3.006665 | 1.576067 | 0.001286 | 0.001387 | 0.001268 |
| mp_sliding_fold_q.test | RUN | 0.371759 | 3.031781 | 1.570197 | 0.001239 | 0.001375 | 0.001314 |
| mp_intersperse.test | RUN | 0.173854 | 1.111858 | 0.723914 | 0.001397 | 0.001219 | 0.001432 |
| mp_split.test | RUN | 0.255644 | 2.138503 | 1.005898 | 0.001446 | 0.001274 | 0.001299 |
| mp_join.test | RUN | 0.204588 | 1.794798 | 0.904030 | 0.001195 | 0.001323 | 0.001413 |
| integral.test | RUN | 0.152403 | 0.788686 | 0.545752 | 0.001132 | 0.001286 | 0.001303 |
| mp_value.test | RUN | 0.009624 | 0.025600 | 0.036557 | 0.000433 | 0.000595 | 0.001344 |
| mp_identity.test | RUN | 0.143688 | 0.724111 | 0.506955 | 0.001169 | 0.001248 | 0.001262 |
| mp_inherit.test | RUN | 0.139009 | 0.515690 | 0.477606 | 0.001075 | 0.001254 | 0.001356 |
| mp_if.test | RUN | 0.141045 | 0.584633 | 0.478878 | 0.001279 | 0.001196 | 0.001395 |
| mp_if_sf.test | RUN | 0.130676 | 0.429783 | 0.433055 | 0.001276 | 0.001435 | 0.001456 |
| mp_eval_if.test | RUN | 0.141339 | 0.633522 | 0.487950 | 0.001220 | 0.001224 | 0.001378 |
| mp_eval_if_sf.test | RUN | 0.137102 | 0.445283 | 0.442565 | 0.001189 | 0.001304 | 0.001284 |
| mp_valid.test | RUN | 0.133267 | 0.448874 | 0.449827 | 0.001322 | 0.001157 | 0.001266 |
| mp_defer.test | RUN | 0.145334 | 0.765809 | 0.541263 | 0.001167 | 0.001226 | 0.001200 |
| mp_quote.test | RUN | 0.147912 | 0.770482 | 0.555111 | 0.001315 | 0.001348 | 0.001398 |
| mp_invoke_q.test | RUN | 0.165697 | 1.018211 | 0.618381 | 0.001363 | 0.001295 | 0.001327 |
| mp_invoke_q_sf.test | RUN | 0.131712 | 0.438751 | 0.436038 | 0.001228 | 0.001338 | 0.001303 |
| mp_quote_trait.test | RUN | 0.144229 | 0.852325 | 0.544264 | 0.001198 | 0.001381 | 0.001340 |
| mp_cond.test | RUN | 0.138894 | 0.513038 | 0.462360 | 0.001176 | 0.001355 | 0.001144 |
| mp_cond_sf.test | RUN | 0.131868 | 0.436086 | 0.437106 | 0.001184 | 0.001164 | 0.001344 |
| mp_not_fn.test | RUN | 0.129722 | 0.443612 | 0.428067 | 0.001228 | 0.001412 | 0.001220 |
| mp_eval_if_not.test | RUN | 0.146758 | 0.633214 | 0.492863 | 0.001157 | 0.001199 | 0.001239 |
| mp_eval_or.test | RUN | 0.133028 | 0.332598 | 0.444444 | 0.001175 | 0.001254 | 0.001333 |
| mp_compose.test | RUN | 0.157751 | 1.046944 | 0.596488 | 0.001093 | 0.001127 | 0.001280 |
| mp_valid_and_true.test | RUN | 0.135968 | 0.534443 | 0.458747 | 0.001179 | 0.001332 | 0.001106 |
| mp_compose_sf.test | COMPILE | 0.031292 | 0.059705 | 0.099870 | — | — | — |
| integer_sequence.test | RUN | 0.169458 | 1.038639 | 0.671818 | 0.001351 | 0.001355 | 0.001133 |
| tuple_for_each.test | RUN | 0.135605 | 0.380442 | 0.458593 | 0.001255 | 0.001170 | 0.001213 |
| tuple_for_each_cx.test | COMPILE | 0.025076 | 0.053759 | 0.081719 | — | — | — |
| tuple_apply.test | RUN | 0.141775 | 0.376202 | 0.488757 | 0.001178 | 0.001310 | 0.001284 |
| tuple_apply_cx.test | COMPILE | 0.037772 | 0.072658 | 0.111565 | — | — | — |
| construct_from_tuple.test | RUN | 0.143749 | 0.398077 | 0.466443 | 0.001180 | 0.001300 | 0.001268 |
| construct_from_tuple_cx.test | COMPILE | 0.037362 | 0.075180 | 0.109874 | — | — | — |
| tuple_transform.test | RUN | 0.225532 | 0.823016 | 0.932485 | 0.001292 | 0.001330 | 0.001146 |
| tuple_transform_2.test | RUN | 0.194030 | 0.601690 | 0.851367 | 0.001280 | 0.001163 | 0.001178 |
| tuple_transform_cx.test | COMPILE | 0.032973 | 0.070631 | 0.107396 | — | — | — |
| mp_set_contains.test | RUN | 0.139638 | 0.535909 | 0.477607 | 0.001128 | 0.001223 | 0.001293 |
| mp_set_push_back.test | RUN | 0.187020 | 1.695166 | 0.825139 | 0.001270 | 0.001291 | 0.001394 |
| mp_set_push_front.test | RUN | 0.244718 | 2.027624 | 0.947823 | 0.001444 | 0.001415 | 0.001217 |
| mp_is_set.test | RUN | 0.139200 | 0.532502 | 0.490668 | 0.001313 | 0.001326 | 0.001267 |
| mp_set_union.test | RUN | 0.183417 | 1.429047 | 0.796606 | 0.001196 | 0.001473 | 0.001365 |
| mp_set_union_sf.test | RUN | 0.135493 | 0.428214 | 0.448241 | 0.001117 | 0.001273 | 0.001474 |
| mp_set_difference.test | RUN | 0.165431 | 1.121667 | 0.667947 | 0.001198 | 0.001309 | 0.001183 |
| mp_set_difference_sf.test | RUN | 0.135889 | 0.427677 | 0.437061 | 0.001167 | 0.001329 | 0.001239 |
| mp_set_intersection.test | RUN | 0.161668 | 1.104476 | 0.643032 | 0.001295 | 0.001161 | 0.001441 |
| mp_set_intersection_sf.test | RUN | 0.136392 | 0.424747 | 0.446559 | 0.001203 | 0.001294 | 0.001362 |
| mp_all.test | RUN | 0.138421 | 0.532909 | 0.474603 | 0.001221 | 0.001346 | 0.001307 |
| mp_all_2.test | RUN | 0.399483 | 1.146115 | 1.068357 | 0.001365 | 0.001338 | 0.001251 |
| mp_and.test | RUN | 0.139507 | 0.538388 | 0.473865 | 0.001462 | 0.001355 | 0.001304 |
| mp_any.test | RUN | 0.139921 | 0.544019 | 0.445875 | 0.001188 | 0.001269 | 0.001277 |
| mp_any_2.test | RUN | 0.400978 | 1.122186 | 1.074836 | 0.001421 | 0.001353 | 0.001219 |
| mp_or.test | RUN | 0.143597 | 0.534564 | 0.468495 | 0.001389 | 0.001364 | 0.001342 |
| mp_same.test | RUN | 0.278521 | 0.917802 | 0.734482 | 0.001154 | 0.001205 | 0.001335 |
| mp_plus.test | RUN | 0.143085 | 0.636264 | 0.511506 | 0.001282 | 0.001148 | 0.001242 |
| mp_less.test | RUN | 0.142742 | 0.531997 | 0.461253 | 0.001305 | 0.001275 | 0.001410 |
| mp_min.test | RUN | 0.138330 | 0.485261 | 0.463337 | 0.001193 | 0.001256 | 0.001380 |
| mp_max.test | RUN | 0.139471 | 0.538243 | 0.477487 | 0.001233 | 0.001158 | 0.001179 |
| mp_similar.test | RUN | 0.139626 | 0.527643 | 0.468738 | 0.001193 | 0.001196 | 0.001142 |
| mp_map_find.test | RUN | 0.168697 | 0.998521 | 0.637079 | 0.001283 | 0.001257 | 0.001468 |
| mp_map_find_2.test | RUN | 0.152967 | 0.377599 | 0.537308 | 0.001252 | 0.001338 | 0.001111 |
| mp_map_find_3.test | RUN | 0.152422 | 0.370589 | 0.534592 | 0.001139 | 0.001268 | 0.001130 |
| mp_map_find_4.test | RUN | 0.147510 | 0.338103 | 0.480360 | 0.001248 | 0.000905 | 0.001110 |
| mp_map_contains.test | RUN | 0.151314 | 0.535308 | 0.480198 | 0.001334 | 0.001312 | 0.001352 |
| mp_map_insert.test | RUN | 0.195152 | 1.866494 | 0.883695 | 0.001344 | 0.001323 | 0.001113 |
| mp_map_replace.test | RUN | 0.265400 | 2.148633 | 1.018745 | 0.001246 | 0.001447 | 0.001136 |
| mp_map_erase.test | RUN | 0.193003 | 1.618976 | 0.859790 | 0.001406 | 0.001451 | 0.001190 |
| mp_map_update.test | RUN | 0.170761 | 1.032868 | 0.665425 | 0.001364 | 0.001369 | 0.001301 |
| mp_map_update_q.test | RUN | 0.169914 | 1.030379 | 0.653688 | 0.001370 | 0.001317 | 0.001060 |
| mp_map_keys.test | RUN | 0.164842 | 0.923002 | 0.631524 | 0.001288 | 0.001321 | 0.001141 |
| mp_is_map.test | RUN | 0.149162 | 0.547757 | 0.506028 | 0.001247 | 0.001230 | 0.001084 |
| mp_bind.test | RUN | 0.187247 | 1.680338 | 0.754287 | 0.001379 | 0.001349 | 0.001362 |
| mp_bind_q.test | RUN | 0.165414 | 1.027247 | 0.608098 | 0.001278 | 0.001414 | 0.001154 |
| mp_bind_front.test | RUN | 0.160685 | 1.130058 | 0.591830 | 0.001347 | 0.001291 | 0.001171 |
| mp_bind_back.test | RUN | 0.160898 | 1.125174 | 0.586767 | 0.001303 | 0.001195 | 0.001142 |
| mp_lambda.test | RUN | 0.384235 | 3.416234 | 1.611642 | 0.001213 | 0.001000 | 0.001286 |
| mpl.test | RUN | 0.331657 | 0.857371 | 1.263213 | 0.001199 | 0.001186 | 0.001337 |
| mpl_list.test | RUN | 0.178501 | 0.652321 | 0.583411 | 0.001407 | 0.001272 | 0.001212 |
| mpl_tuple.test | RUN | 0.179773 | 0.661927 | 0.576522 | 0.001351 | 0.001379 | 0.001240 |
| version.test | RUN | 0.088737 | 0.234509 | 0.301250 | 0.001723 | 0.001142 | 0.001348 |
| mp11_version.test | RUN | 0.108621 | 0.265401 | 0.338702 | 0.001100 | 0.001254 | 0.001185 |
| list_version.test | RUN | 0.093879 | 0.236150 | 0.301718 | 0.001334 | 0.001174 | 0.001216 |
| algorithm_version.test | RUN | 0.105682 | 0.253239 | 0.320674 | 0.001212 | 0.001206 | 0.001132 |
| integral_version.test | RUN | 0.089605 | 0.233213 | 0.288570 | 0.001581 | 0.001177 | 0.001080 |
| utility_version.test | RUN | 0.091691 | 0.236026 | 0.297333 | 0.001353 | 0.001146 | 0.001336 |
| function_version.test | RUN | 0.094824 | 0.238923 | 0.305895 | 0.001316 | 0.001515 | 0.001126 |
| map_version.test | RUN | 0.107406 | 0.245135 | 0.316345 | 0.001246 | 0.001167 | 0.001197 |
| set_version.test | RUN | 0.097058 | 0.233219 | 0.300779 | 0.001466 | 0.001159 | 0.001022 |
| bind_version.test | RUN | 0.100478 | 0.253720 | 0.326126 | 0.001056 | 0.001419 | 0.001415 |
| integer_sequence_version.test | RUN | 0.088961 | 0.232482 | 0.297555 | 0.001213 | 0.001260 | 0.000906 |
| tuple_version.test | RUN | 0.103788 | 0.252607 | 0.241698 | 0.000945 | 0.001195 | 0.001184 |
| mpl_version.test | RUN | 0.074843 | 0.176311 | 0.326751 | 0.000907 | 0.000953 | 0.000842 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.993× | 1.002×, 0.983× | 0.998× |
| clang | 1.091× | 1.089×, 1.093× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44656576225).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000739s | 0.000759s | 0.000736s | byte equality observed |
| bind_version.test | 10 | 0.000753s | 0.000731s | 0.000728s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000750s | 0.000760s | 0.000719s | byte equality observed |
| function_version.test | 10 | 0.000745s | 0.000738s | 0.000726s | byte equality observed |
| integer_sequence.test | 10 | 0.000747s | 0.000762s | 0.000726s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000755s | 0.000754s | 0.000728s | byte equality observed |
| integral.test | 10 | 0.000754s | 0.000737s | 0.000745s | byte equality observed |
| integral_version.test | 10 | 0.000750s | 0.000732s | 0.000724s | byte equality observed |
| list_version.test | 10 | 0.000756s | 0.000724s | 0.000722s | byte equality observed |
| map_version.test | 10 | 0.000750s | 0.000743s | 0.000733s | byte equality observed |
| mp11_version.test | 10 | 0.000757s | 0.000733s | 0.000764s | byte equality observed |
| mp_all.test | 10 | 0.000753s | 0.000742s | 0.000752s | byte equality observed |
| mp_all_2.test | 10 | 0.000756s | 0.000728s | 0.000771s | byte equality observed |
| mp_all_of.test | 10 | 0.000754s | 0.000739s | 0.000820s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000755s | 0.000740s | 0.000825s | byte equality observed |
| mp_and.test | 10 | 0.000756s | 0.000734s | 0.000812s | byte equality observed |
| mp_any.test | 10 | 0.000755s | 0.000743s | 0.000810s | byte equality observed |
| mp_any_2.test | 10 | 0.000751s | 0.000730s | 0.000851s | byte equality observed |
| mp_any_of.test | 10 | 0.000752s | 0.000735s | 0.000800s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000749s | 0.000736s | 0.000795s | byte equality observed |
| mp_append.test | 10 | 0.000746s | 0.000735s | 0.000833s | byte equality observed |
| mp_append_2.test | 10 | 0.000794s | 0.000740s | 0.000832s | byte equality observed |
| mp_append_3.test | 10 | 0.000372s | 0.000331s | 0.000800s | byte equality observed |
| mp_append_sf.test | 10 | 0.000827s | 0.000743s | 0.000815s | byte equality observed |
| mp_apply_q.test | 10 | 0.000832s | 0.000726s | 0.000805s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.000836s | 0.000762s | 0.000816s | byte equality observed |
| mp_assign.test | 10 | 0.000816s | 0.000752s | 0.000823s | byte equality observed |
| mp_assign_2.test | 10 | 0.000367s | 0.000344s | 0.000793s | byte equality observed |
| mp_at.test | 10 | 0.000813s | 0.000760s | 0.000800s | byte equality observed |
| mp_at_2.test | 10 | 0.000365s | 0.000344s | 0.000790s | byte equality observed |
| mp_at_sf.test | 10 | 0.000806s | 0.000771s | 0.000776s | byte equality observed |
| mp_back.test | 10 | 0.000816s | 0.000798s | 0.000821s | byte equality observed |
| mp_back_2.test | 10 | 0.000367s | 0.000361s | 0.000804s | byte equality observed |
| mp_bind.test | 10 | 0.000815s | 0.000810s | 0.000820s | byte equality observed |
| mp_bind_back.test | 10 | 0.000825s | 0.000815s | 0.000811s | byte equality observed |
| mp_bind_front.test | 10 | 0.000822s | 0.000820s | 0.000801s | byte equality observed |
| mp_bind_q.test | 10 | 0.000829s | 0.000823s | 0.000813s | byte equality observed |
| mp_clear.test | 10 | 0.000824s | 0.000804s | 0.000812s | byte equality observed |
| mp_clear_2.test | 10 | 0.000371s | 0.000379s | 0.000799s | byte equality observed |
| mp_compose.test | 10 | 0.000809s | 0.000818s | 0.000798s | byte equality observed |
| mp_cond.test | 10 | 0.000829s | 0.000818s | 0.000817s | byte equality observed |
| mp_cond_sf.test | 10 | 0.000819s | 0.000821s | 0.000803s | byte equality observed |
| mp_contains.test | 10 | 0.000814s | 0.000838s | 0.000808s | byte equality observed |
| mp_copy_if.test | 10 | 0.000815s | 0.000853s | 0.000793s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.000822s | 0.000831s | 0.000796s | byte equality observed |
| mp_count.test | 10 | 0.000819s | 0.000814s | 0.000798s | byte equality observed |
| mp_count_if.test | 10 | 0.000817s | 0.000814s | 0.000800s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000801s | 0.000822s | 0.000796s | byte equality observed |
| mp_defer.test | 10 | 0.000823s | 0.000832s | 0.000860s | byte equality observed |
| mp_drop.test | 10 | 0.000813s | 0.000812s | 0.000811s | byte equality observed |
| mp_drop_2.test | 10 | 0.000371s | 0.000371s | 0.000797s | byte equality observed |
| mp_empty.test | 10 | 0.000832s | 0.000820s | 0.000798s | byte equality observed |
| mp_empty_2.test | 10 | 0.000363s | 0.000365s | 0.000811s | byte equality observed |
| mp_erase.test | 10 | 0.000829s | 0.000826s | 0.000804s | byte equality observed |
| mp_erase_2.test | 10 | 0.000366s | 0.000368s | 0.000791s | byte equality observed |
| mp_eval_if.test | 10 | 0.000814s | 0.000811s | 0.000793s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.000812s | 0.000819s | 0.000801s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.000831s | 0.000804s | 0.000826s | byte equality observed |
| mp_eval_or.test | 10 | 0.000842s | 0.000816s | 0.000837s | byte equality observed |
| mp_fill.test | 10 | 0.000815s | 0.000810s | 0.000811s | byte equality observed |
| mp_fill_2.test | 10 | 0.000364s | 0.000362s | 0.000786s | byte equality observed |
| mp_filter.test | 10 | 0.000802s | 0.000849s | 0.000808s | byte equality observed |
| mp_find.test | 10 | 0.000832s | 0.000832s | 0.000803s | byte equality observed |
| mp_find_if.test | 10 | 0.000832s | 0.000819s | 0.000823s | byte equality observed |
| mp_find_if_q.test | 10 | 0.000815s | 0.000827s | 0.000806s | byte equality observed |
| mp_flatten.test | 10 | 0.000810s | 0.000833s | 0.000799s | byte equality observed |
| mp_fold.test | 10 | 0.000827s | 0.000825s | 0.000819s | byte equality observed |
| mp_fold_q.test | 10 | 0.000824s | 0.000812s | 0.000782s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.000802s | 0.000809s | 0.000794s | byte equality observed |
| mp_for_each.test | 10 | 0.000817s | 0.000815s | 0.000857s | byte equality observed |
| mp_from_sequence.test | 10 | 0.000824s | 0.000822s | 0.000823s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.000815s | 0.000816s | 0.000812s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.000814s | 0.000834s | 0.000807s | byte equality observed |
| mp_front.test | 10 | 0.000808s | 0.000825s | 0.000822s | byte equality observed |
| mp_front_2.test | 10 | 0.000367s | 0.000372s | 0.000792s | byte equality observed |
| mp_identity.test | 10 | 0.000820s | 0.000820s | 0.000791s | byte equality observed |
| mp_if.test | 10 | 0.000811s | 0.000825s | 0.000811s | byte equality observed |
| mp_if_sf.test | 10 | 0.000839s | 0.000833s | 0.000831s | byte equality observed |
| mp_inherit.test | 10 | 0.000815s | 0.000838s | 0.000826s | byte equality observed |
| mp_insert.test | 10 | 0.000843s | 0.000817s | 0.000802s | byte equality observed |
| mp_insert_2.test | 10 | 0.000366s | 0.000372s | 0.000791s | byte equality observed |
| mp_intersperse.test | 10 | 0.000819s | 0.000839s | 0.000845s | byte equality observed |
| mp_invoke_q.test | 10 | 0.000829s | 0.000808s | 0.000814s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.000829s | 0.000803s | 0.000822s | byte equality observed |
| mp_iota.test | 10 | 0.000835s | 0.000809s | 0.000819s | byte equality observed |
| mp_iota_2.test | 10 | 0.000811s | 0.000826s | 0.000809s | byte equality observed |
| mp_is_list.test | 10 | 0.000820s | 0.000809s | 0.000831s | byte equality observed |
| mp_is_map.test | 10 | 0.000814s | 0.000824s | 0.000834s | byte equality observed |
| mp_is_set.test | 10 | 0.000798s | 0.000817s | 0.000826s | byte equality observed |
| mp_is_value_list.test | 10 | 0.000821s | 0.000851s | 0.000838s | byte equality observed |
| mp_iterate.test | 10 | 0.000808s | 0.000835s | 0.000828s | byte equality observed |
| mp_join.test | 10 | 0.000845s | 0.000797s | 0.000828s | byte equality observed |
| mp_lambda.test | 10 | 0.000843s | 0.000835s | 0.000839s | byte equality observed |
| mp_less.test | 10 | 0.000841s | 0.000829s | 0.000848s | byte equality observed |
| mp_list_c.test | 10 | 0.000844s | 0.000851s | 0.000833s | byte equality observed |
| mp_list_v.test | 10 | 0.000371s | 0.000368s | 0.000807s | byte equality observed |
| mp_map_contains.test | 10 | 0.000794s | 0.000825s | 0.000804s | byte equality observed |
| mp_map_erase.test | 10 | 0.000812s | 0.000852s | 0.000844s | byte equality observed |
| mp_map_find.test | 10 | 0.000845s | 0.000843s | 0.000830s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000846s | 0.000795s | 0.000842s | byte equality observed |
| mp_map_find_3.test | 10 | 0.000829s | 0.000797s | 0.000821s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000841s | 0.000809s | 0.000810s | byte equality observed |
| mp_map_insert.test | 10 | 0.000828s | 0.000822s | 0.000812s | byte equality observed |
| mp_map_keys.test | 10 | 0.000817s | 0.000821s | 0.000814s | byte equality observed |
| mp_map_replace.test | 10 | 0.000817s | 0.000818s | 0.000817s | byte equality observed |
| mp_map_update.test | 10 | 0.000832s | 0.000827s | 0.000819s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000830s | 0.000819s | 0.000814s | byte equality observed |
| mp_max.test | 10 | 0.000824s | 0.000813s | 0.000809s | byte equality observed |
| mp_max_element.test | 10 | 0.000806s | 0.000816s | 0.000814s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000367s | 0.000377s | 0.000802s | byte equality observed |
| mp_max_element_q.test | 10 | 0.000824s | 0.000829s | 0.000801s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000367s | 0.000360s | 0.000829s | byte equality observed |
| mp_min.test | 10 | 0.000807s | 0.000814s | 0.000820s | byte equality observed |
| mp_min_element.test | 10 | 0.000804s | 0.000830s | 0.000807s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000366s | 0.000362s | 0.000804s | byte equality observed |
| mp_min_element_q.test | 10 | 0.000816s | 0.000813s | 0.000800s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000365s | 0.000371s | 0.000785s | byte equality observed |
| mp_none_of.test | 10 | 0.000820s | 0.000821s | 0.000824s | byte equality observed |
| mp_none_of_q.test | 10 | 0.000817s | 0.000809s | 0.000820s | byte equality observed |
| mp_not_fn.test | 10 | 0.000813s | 0.000796s | 0.000817s | byte equality observed |
| mp_nth_element.test | 10 | 0.000811s | 0.000799s | 0.000838s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.000802s | 0.000804s | 0.000836s | byte equality observed |
| mp_or.test | 10 | 0.000822s | 0.000834s | 0.000824s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.000818s | 0.000806s | 0.000829s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.000826s | 0.000811s | 0.000843s | byte equality observed |
| mp_partial_sum.test | 10 | 0.000824s | 0.000815s | 0.000815s | byte equality observed |
| mp_partition.test | 10 | 0.000811s | 0.000835s | 0.000839s | byte equality observed |
| mp_partition_q.test | 10 | 0.000802s | 0.000842s | 0.000825s | byte equality observed |
| mp_plus.test | 10 | 0.000798s | 0.000839s | 0.000828s | byte equality observed |
| mp_pop_back.test | 10 | 0.000827s | 0.000824s | 0.000816s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000372s | 0.000359s | 0.000794s | byte equality observed |
| mp_pop_front.test | 10 | 0.000809s | 0.000824s | 0.000792s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000367s | 0.000362s | 0.000801s | byte equality observed |
| mp_power_set.test | 10 | 0.000801s | 0.000810s | 0.000806s | byte equality observed |
| mp_product.test | 10 | 0.000817s | 0.000796s | 0.000834s | byte equality observed |
| mp_push_back.test | 10 | 0.000793s | 0.000837s | 0.000823s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000367s | 0.000363s | 0.000807s | byte equality observed |
| mp_push_front.test | 10 | 0.000799s | 0.000808s | 0.000805s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000362s | 0.000362s | 0.000781s | byte equality observed |
| mp_quote.test | 10 | 0.000801s | 0.000841s | 0.000797s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000798s | 0.000846s | 0.000792s | byte equality observed |
| mp_remove.test | 10 | 0.000807s | 0.000849s | 0.000773s | byte equality observed |
| mp_remove_if.test | 10 | 0.000813s | 0.000835s | 0.000807s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.000822s | 0.000859s | 0.000806s | byte equality observed |
| mp_rename.test | 10 | 0.000813s | 0.000858s | 0.000801s | byte equality observed |
| mp_rename_2.test | 10 | 0.000363s | 0.000372s | 0.000804s | byte equality observed |
| mp_rename_v.test | 10 | 0.000367s | 0.000365s | 0.000771s | byte equality observed |
| mp_repeat.test | 10 | 0.000809s | 0.000822s | 0.000809s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000368s | 0.000359s | 0.000810s | byte equality observed |
| mp_repeat_3.test | 10 | 0.000831s | 0.000820s | 0.000788s | byte equality observed |
| mp_replace.test | 10 | 0.000843s | 0.000836s | 0.000830s | byte equality observed |
| mp_replace_at.test | 10 | 0.000831s | 0.000826s | 0.000822s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.000815s | 0.000831s | 0.000826s | byte equality observed |
| mp_replace_front.test | 10 | 0.000811s | 0.000823s | 0.000816s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000367s | 0.000361s | 0.000777s | byte equality observed |
| mp_replace_if.test | 10 | 0.000827s | 0.000801s | 0.000813s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.000799s | 0.000803s | 0.000808s | byte equality observed |
| mp_replace_second.test | 10 | 0.000808s | 0.000796s | 0.000803s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000365s | 0.000364s | 0.000770s | byte equality observed |
| mp_replace_third.test | 10 | 0.000818s | 0.000800s | 0.000811s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000366s | 0.000365s | 0.000772s | byte equality observed |
| mp_reverse.test | 10 | 0.000840s | 0.000849s | 0.000785s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.000829s | 0.000842s | 0.000786s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000824s | 0.000815s | 0.000824s | byte equality observed |
| mp_rotate_left.test | 10 | 0.000819s | 0.000852s | 0.000809s | byte equality observed |
| mp_rotate_right.test | 10 | 0.000814s | 0.000857s | 0.000817s | byte equality observed |
| mp_same.test | 10 | 0.000812s | 0.000854s | 0.000812s | byte equality observed |
| mp_second.test | 10 | 0.000828s | 0.000817s | 0.000817s | byte equality observed |
| mp_second_2.test | 10 | 0.000362s | 0.000365s | 0.000781s | byte equality observed |
| mp_set_contains.test | 10 | 0.000810s | 0.000815s | 0.000817s | byte equality observed |
| mp_set_difference.test | 10 | 0.000803s | 0.000802s | 0.000798s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000836s | 0.000821s | 0.000792s | byte equality observed |
| mp_set_intersection.test | 10 | 0.000842s | 0.000841s | 0.000816s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000827s | 0.000847s | 0.000789s | byte equality observed |
| mp_set_push_back.test | 10 | 0.000819s | 0.000858s | 0.000797s | byte equality observed |
| mp_set_push_front.test | 10 | 0.000813s | 0.000819s | 0.000795s | byte equality observed |
| mp_set_union.test | 10 | 0.000831s | 0.000813s | 0.000818s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.000822s | 0.000818s | 0.000797s | byte equality observed |
| mp_similar.test | 10 | 0.000798s | 0.000836s | 0.000819s | byte equality observed |
| mp_size.test | 10 | 0.000827s | 0.000827s | 0.000796s | byte equality observed |
| mp_size_2.test | 10 | 0.000369s | 0.000360s | 0.000806s | byte equality observed |
| mp_slice.test | 10 | 0.000837s | 0.000820s | 0.000783s | byte equality observed |
| mp_slice_2.test | 10 | 0.000364s | 0.000369s | 0.000798s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.000842s | 0.000839s | 0.000814s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.000862s | 0.000834s | 0.000829s | byte equality observed |
| mp_sort.test | 10 | 0.000812s | 0.000833s | 0.000820s | byte equality observed |
| mp_sort_q.test | 10 | 0.000799s | 0.000830s | 0.000803s | byte equality observed |
| mp_split.test | 10 | 0.000821s | 0.000815s | 0.000824s | byte equality observed |
| mp_starts_with.test | 10 | 0.000813s | 0.000824s | 0.000847s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.000814s | 0.000836s | 0.000825s | byte equality observed |
| mp_take.test | 10 | 0.000811s | 0.000819s | 0.000811s | byte equality observed |
| mp_take_2.test | 10 | 0.000369s | 0.000366s | 0.000798s | byte equality observed |
| mp_third.test | 10 | 0.000807s | 0.000814s | 0.000780s | byte equality observed |
| mp_third_2.test | 10 | 0.000367s | 0.000363s | 0.000785s | byte equality observed |
| mp_transform.test | 10 | 0.000818s | 0.000817s | 0.000816s | byte equality observed |
| mp_transform_2.test | 10 | 0.000782s | 0.000804s | 0.000798s | byte equality observed |
| mp_transform_front.test | 10 | 0.000811s | 0.000819s | 0.000824s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000366s | 0.000359s | 0.000801s | byte equality observed |
| mp_transform_if.test | 10 | 0.000820s | 0.000834s | 0.000807s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.000824s | 0.000839s | 0.000806s | byte equality observed |
| mp_transform_q.test | 10 | 0.000853s | 0.000834s | 0.000803s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.000820s | 0.000807s | 0.000836s | byte equality observed |
| mp_transform_second.test | 10 | 0.000806s | 0.000804s | 0.000811s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000362s | 0.000369s | 0.000802s | byte equality observed |
| mp_transform_sf.test | 10 | 0.000816s | 0.000827s | 0.000802s | byte equality observed |
| mp_transform_third.test | 10 | 0.000821s | 0.000798s | 0.000801s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000374s | 0.000361s | 0.000794s | byte equality observed |
| mp_unique.test | 10 | 0.000810s | 0.000803s | 0.000804s | byte equality observed |
| mp_unique_if.test | 10 | 0.000842s | 0.000815s | 0.000829s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.000855s | 0.000813s | 0.000798s | byte equality observed |
| mp_valid.test | 10 | 0.000829s | 0.000807s | 0.000807s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.000816s | 0.000843s | 0.000823s | byte equality observed |
| mp_value.test | 10 | 0.000367s | 0.000373s | 0.000808s | byte equality observed |
| mp_with_index.test | 10 | 0.001120s | 0.001071s | 0.001022s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000366s | 0.000365s | 0.000766s | byte equality observed |
| mpl.test | 10 | 0.000816s | 0.000807s | 0.000804s | byte equality observed |
| mpl_list.test | 10 | 0.000805s | 0.000794s | 0.000830s | byte equality observed |
| mpl_tuple.test | 10 | 0.000828s | 0.000834s | 0.000807s | byte equality observed |
| mpl_version.test | 10 | 0.000860s | 0.000828s | 0.000804s | byte equality observed |
| set_version.test | 10 | 0.000833s | 0.000820s | 0.000816s | byte equality observed |
| tuple_apply.test | 10 | 0.000819s | 0.000818s | 0.000799s | byte equality observed |
| tuple_for_each.test | 10 | 0.000814s | 0.000821s | 0.000810s | byte equality observed |
| tuple_transform.test | 10 | 0.000836s | 0.000823s | 0.000833s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000825s | 0.000796s | 0.000817s | byte equality observed |
| tuple_version.test | 10 | 0.000814s | 0.000803s | 0.000826s | byte equality observed |
| utility_version.test | 10 | 0.000798s | 0.000825s | 0.000809s | byte equality observed |
| version.test | 10 | 0.000817s | 0.000817s | 0.000801s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44656576225).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
