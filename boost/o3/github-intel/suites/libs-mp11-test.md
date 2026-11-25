# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.029520 | 0.057109 | 0.091669 | — | — | — |
| complex_h.test | COMPILE | 0.118350 | 0.263391 | 0.362998 | — | — | — |
| mp_size.test | RUN | 0.143469 | 0.866221 | 0.468423 | 0.001202 | 0.001235 | 0.001145 |
| mp_size_2.test | RUN | 0.012339 | 0.029718 | 0.040352 | 0.000532 | 0.000470 | 0.001164 |
| mp_empty.test | RUN | 0.138133 | 0.509853 | 0.449510 | 0.001198 | 0.001428 | 0.001186 |
| mp_empty_2.test | RUN | 0.012504 | 0.030874 | 0.045420 | 0.000444 | 0.000494 | 0.001315 |
| mp_assign.test | RUN | 0.151973 | 1.145638 | 0.622069 | 0.001331 | 0.001211 | 0.001142 |
| mp_assign_2.test | RUN | 0.013169 | 0.030417 | 0.043803 | 0.000479 | 0.000563 | 0.001268 |
| mp_clear.test | RUN | 0.130614 | 0.475527 | 0.465801 | 0.001287 | 0.001286 | 0.001324 |
| mp_clear_2.test | RUN | 0.013422 | 0.030450 | 0.044332 | 0.000486 | 0.000479 | 0.001221 |
| mp_front.test | RUN | 0.142780 | 0.769351 | 0.508131 | 0.001254 | 0.001409 | 0.001172 |
| mp_front_2.test | RUN | 0.012537 | 0.030336 | 0.044824 | 0.000491 | 0.000533 | 0.001338 |
| mp_pop_front.test | RUN | 0.144256 | 0.809845 | 0.525316 | 0.001301 | 0.001304 | 0.001560 |
| mp_pop_front_2.test | RUN | 0.010844 | 0.030082 | 0.044840 | 0.000512 | 0.000496 | 0.001268 |
| mp_second.test | RUN | 0.141497 | 0.495641 | 0.494111 | 0.001175 | 0.001439 | 0.001380 |
| mp_second_2.test | RUN | 0.012940 | 0.030495 | 0.043414 | 0.000512 | 0.000517 | 0.001255 |
| mp_third.test | RUN | 0.136245 | 0.466006 | 0.446427 | 0.000966 | 0.001406 | 0.001184 |
| mp_third_2.test | RUN | 0.012892 | 0.030131 | 0.043783 | 0.000512 | 0.000501 | 0.001191 |
| mp_push_front.test | RUN | 0.187991 | 1.724374 | 0.860669 | 0.001205 | 0.001336 | 0.001325 |
| mp_push_front_2.test | RUN | 0.013678 | 0.025991 | 0.041360 | 0.000495 | 0.000550 | 0.001130 |
| mp_push_back.test | RUN | 0.185220 | 1.743172 | 0.858199 | 0.001235 | 0.001347 | 0.001271 |
| mp_push_back_2.test | RUN | 0.010822 | 0.030951 | 0.044449 | 0.000539 | 0.000540 | 0.001388 |
| mp_rename.test | RUN | 0.172734 | 1.578980 | 0.715338 | 0.001121 | 0.001223 | 0.001333 |
| mp_rename_2.test | RUN | 0.012372 | 0.030864 | 0.044521 | 0.000429 | 0.000490 | 0.001405 |
| mp_append.test | RUN | 0.183638 | 1.792582 | 0.800005 | 0.001401 | 0.001314 | 0.001399 |
| mp_append_2.test | RUN | 0.410044 | 4.027128 | 1.092466 | 0.001367 | 0.001252 | 0.001299 |
| mp_append_3.test | RUN | 0.012295 | 0.029768 | 0.044035 | 0.000570 | 0.000545 | 0.001188 |
| mp_append_sf.test | RUN | 0.134263 | 0.429491 | 0.426289 | 0.001234 | 0.001233 | 0.001215 |
| mp_replace_front.test | RUN | 0.171435 | 1.273839 | 0.657946 | 0.001183 | 0.001446 | 0.001009 |
| mp_replace_front_2.test | RUN | 0.012348 | 0.029711 | 0.043788 | 0.000483 | 0.000506 | 0.001181 |
| mp_replace_second.test | RUN | 0.163829 | 0.806564 | 0.583927 | 0.001245 | 0.001246 | 0.001235 |
| mp_replace_second_2.test | RUN | 0.014010 | 0.029878 | 0.044241 | 0.000421 | 0.000490 | 0.001316 |
| mp_replace_third.test | RUN | 0.151955 | 0.664835 | 0.539983 | 0.001193 | 0.001229 | 0.001266 |
| mp_replace_third_2.test | RUN | 0.011669 | 0.027894 | 0.044269 | 0.000447 | 0.000513 | 0.001153 |
| mp_apply_q.test | RUN | 0.170595 | 1.564313 | 0.719197 | 0.001254 | 0.001276 | 0.000999 |
| mp_apply_q_sf.test | RUN | 0.138814 | 0.450138 | 0.428257 | 0.001188 | 0.001035 | 0.001257 |
| mp_is_list.test | RUN | 0.140682 | 0.520996 | 0.464939 | 0.001168 | 0.001198 | 0.001272 |
| mp_list_c.test | RUN | 0.146090 | 0.637864 | 0.509472 | 0.000926 | 0.001316 | 0.001230 |
| mp_transform_front.test | RUN | 0.162632 | 1.271903 | 0.636201 | 0.001440 | 0.001321 | 0.001295 |
| mp_transform_front_2.test | RUN | 0.013058 | 0.029509 | 0.045277 | 0.000494 | 0.000485 | 0.001268 |
| mp_transform_second.test | RUN | 0.156305 | 1.099508 | 0.570290 | 0.000933 | 0.001342 | 0.001126 |
| mp_transform_second_2.test | RUN | 0.013264 | 0.030015 | 0.044651 | 0.000497 | 0.000541 | 0.001413 |
| mp_transform_third.test | RUN | 0.146508 | 0.823435 | 0.510727 | 0.001293 | 0.001350 | 0.001287 |
| mp_transform_third_2.test | RUN | 0.014046 | 0.029953 | 0.045284 | 0.000508 | 0.000496 | 0.001113 |
| mp_list_v.test | RUN | 0.013724 | 0.029409 | 0.045283 | 0.000454 | 0.000475 | 0.001211 |
| mp_rename_v.test | RUN | 0.011905 | 0.030401 | 0.045886 | 0.000446 | 0.000491 | 0.001037 |
| mp_is_value_list.test | RUN | 0.133729 | 0.323093 | 0.423869 | 0.001328 | 0.001274 | 0.001280 |
| mp_transform.test | RUN | 0.343888 | 2.728859 | 1.356710 | 0.001295 | 0.001174 | 0.001179 |
| mp_transform_2.test | RUN | 0.130643 | 0.286500 | 0.396203 | 0.001330 | 0.001312 | 0.001203 |
| mp_transform_q.test | RUN | 0.330333 | 2.583864 | 1.323595 | 0.001153 | 0.001285 | 0.001360 |
| mp_transform_q_2.test | RUN | 0.344218 | 0.818320 | 1.711219 | 0.001232 | 0.001417 | 0.001249 |
| mp_transform_sf.test | RUN | 0.149586 | 0.445738 | 0.465031 | 0.001217 | 0.001261 | 0.001221 |
| mp_transform_if.test | RUN | 0.178251 | 1.290361 | 0.701830 | 0.001281 | 0.001229 | 0.001269 |
| mp_transform_if_q.test | RUN | 0.179288 | 1.302960 | 0.709399 | 0.001187 | 0.001230 | 0.001185 |
| mp_filter.test | RUN | 0.156877 | 0.754519 | 0.530834 | 0.001195 | 0.001351 | 0.001166 |
| mp_fill.test | RUN | 0.146774 | 0.569625 | 0.508704 | 0.001293 | 0.001329 | 0.001233 |
| mp_fill_2.test | RUN | 0.021901 | 0.046431 | 0.072414 | 0.000524 | 0.000532 | 0.001203 |
| mp_count.test | RUN | 0.283353 | 1.395197 | 0.768185 | 0.001303 | 0.001116 | 0.001066 |
| mp_count_if.test | RUN | 0.293141 | 1.398092 | 0.868876 | 0.001258 | 0.001269 | 0.001148 |
| mp_count_if_q.test | RUN | 0.151064 | 0.908218 | 0.484519 | 0.001128 | 0.001254 | 0.001151 |
| mp_contains.test | RUN | 0.140303 | 0.548353 | 0.468963 | 0.001286 | 0.001347 | 0.001181 |
| mp_starts_with.test | RUN | 0.141605 | 0.536466 | 0.481809 | 0.001189 | 0.001294 | 0.001090 |
| mp_starts_with_sf.test | RUN | 0.133327 | 0.460087 | 0.452786 | 0.001220 | 0.001108 | 0.001237 |
| mp_repeat.test | RUN | 0.211580 | 2.313794 | 0.902401 | 0.001162 | 0.001358 | 0.001136 |
| mp_repeat_2.test | RUN | 0.021492 | 0.047813 | 0.072259 | 0.000457 | 0.000535 | 0.001145 |
| mp_repeat_3.test | RUN | 0.176213 | 0.286633 | 0.437337 | 0.001426 | 0.001322 | 0.001278 |
| mp_product.test | RUN | 0.170130 | 1.400607 | 0.641483 | 0.001207 | 0.001322 | 0.001171 |
| mp_drop.test | RUN | 0.176185 | 1.742136 | 0.768545 | 0.001054 | 0.001478 | 0.001388 |
| mp_drop_2.test | RUN | 0.021963 | 0.048252 | 0.073295 | 0.000496 | 0.000567 | 0.001366 |
| mp_iota.test | RUN | 0.172663 | 1.439367 | 0.666724 | 0.001256 | 0.001222 | 0.001270 |
| mp_iota_2.test | RUN | 0.183561 | 1.763625 | 0.763957 | 0.001156 | 0.001401 | 0.001160 |
| mp_at.test | RUN | 0.152485 | 0.740046 | 0.543611 | 0.001112 | 0.001300 | 0.001245 |
| mp_at_2.test | RUN | 0.021525 | 0.046938 | 0.075143 | 0.000450 | 0.000518 | 0.001240 |
| mp_at_sf.test | RUN | 0.142698 | 0.458982 | 0.447486 | 0.001290 | 0.001346 | 0.001262 |
| mp_take.test | RUN | 0.245461 | 2.290665 | 0.905171 | 0.001243 | 0.001450 | 0.001326 |
| mp_take_2.test | RUN | 0.021678 | 0.045982 | 0.069650 | 0.000499 | 0.000518 | 0.001326 |
| mp_slice.test | RUN | 0.293070 | 2.303281 | 1.171273 | 0.001295 | 0.001442 | 0.001128 |
| mp_slice_2.test | RUN | 0.021557 | 0.045780 | 0.073023 | 0.000500 | 0.000616 | 0.001272 |
| mp_replace.test | RUN | 0.174380 | 1.166636 | 0.736539 | 0.001096 | 0.001342 | 0.001317 |
| mp_replace_if.test | RUN | 0.167312 | 1.028101 | 0.694335 | 0.001186 | 0.001388 | 0.001117 |
| mp_replace_if_q.test | RUN | 0.166507 | 1.041251 | 0.683609 | 0.001261 | 0.001419 | 0.001255 |
| mp_copy_if.test | RUN | 0.169297 | 1.448443 | 0.649641 | 0.001297 | 0.001381 | 0.001430 |
| mp_copy_if_q.test | RUN | 0.170898 | 1.437663 | 0.656201 | 0.001094 | 0.001339 | 0.001300 |
| mp_remove.test | RUN | 0.168814 | 0.963769 | 0.668752 | 0.001358 | 0.001283 | 0.001214 |
| mp_remove_if.test | RUN | 0.179102 | 1.529102 | 0.684502 | 0.001219 | 0.001372 | 0.001281 |
| mp_remove_if_q.test | RUN | 0.178393 | 1.530000 | 0.694481 | 0.001320 | 0.001396 | 0.001276 |
| mp_partition.test | RUN | 0.174744 | 1.424601 | 0.742292 | 0.001184 | 0.001403 | 0.001284 |
| mp_partition_q.test | RUN | 0.179876 | 1.423261 | 0.751376 | 0.001244 | 0.001255 | 0.001334 |
| mp_sort.test | RUN | 0.165719 | 1.022679 | 0.636223 | 0.001305 | 0.001309 | 0.001352 |
| mp_sort_q.test | RUN | 0.170154 | 1.019032 | 0.644266 | 0.001403 | 0.001355 | 0.001291 |
| mp_find.test | RUN | 0.161046 | 1.086876 | 0.567381 | 0.001164 | 0.001100 | 0.001155 |
| mp_find_if.test | RUN | 0.157410 | 1.007214 | 0.544613 | 0.001242 | 0.001285 | 0.001120 |
| mp_find_if_q.test | RUN | 0.170946 | 1.123641 | 0.641583 | 0.001212 | 0.001390 | 0.001317 |
| mp_reverse.test | RUN | 0.343388 | 3.054815 | 1.285395 | 0.001211 | 0.001359 | 0.001451 |
| mp_fold.test | RUN | 0.620281 | 2.346950 | 3.321943 | 0.001263 | 0.001305 | 0.001213 |
| mp_fold_q.test | RUN | 0.159907 | 1.008665 | 0.619199 | 0.001079 | 0.001246 | 0.001219 |
| mp_fold_q_sf.test | RUN | 0.139355 | 0.458703 | 0.477748 | 0.001275 | 0.001185 | 0.001208 |
| mp_reverse_fold.test | RUN | 0.293211 | 2.243572 | 0.914095 | 0.001341 | 0.001308 | 0.001248 |
| mp_reverse_fold_q.test | RUN | 0.167413 | 1.210810 | 0.660009 | 0.001153 | 0.001288 | 0.001341 |
| mp_unique.test | RUN | 0.163449 | 1.113817 | 0.642330 | 0.000941 | 0.001012 | 0.001230 |
| mp_unique_if.test | RUN | 0.310237 | 2.330040 | 1.002335 | 0.001456 | 0.001389 | 0.001410 |
| mp_unique_if_q.test | RUN | 0.253076 | 2.315790 | 0.844572 | 0.001419 | 0.001192 | 0.001243 |
| mp_all_of.test | RUN | 0.393359 | 1.248948 | 1.062850 | 0.001232 | 0.001423 | 0.001190 |
| mp_all_of_q.test | RUN | 0.139322 | 0.544367 | 0.468347 | 0.001216 | 0.001444 | 0.001229 |
| mp_any_of.test | RUN | 0.399703 | 1.296961 | 1.047200 | 0.001305 | 0.001305 | 0.001043 |
| mp_any_of_q.test | RUN | 0.141344 | 0.539212 | 0.454499 | 0.001313 | 0.001285 | 0.001302 |
| mp_none_of.test | RUN | 0.398437 | 1.305254 | 1.059677 | 0.001235 | 0.001350 | 0.001352 |
| mp_none_of_q.test | RUN | 0.141923 | 0.547488 | 0.460762 | 0.001422 | 0.001432 | 0.001206 |
| mp_replace_at.test | RUN | 0.175674 | 1.093593 | 0.726358 | 0.001316 | 0.001363 | 0.001190 |
| mp_replace_at_c.test | RUN | 0.176560 | 1.123400 | 0.740325 | 0.001280 | 0.001230 | 0.001219 |
| mp_for_each.test | RUN | 0.163797 | 0.730455 | 0.738916 | 0.001235 | 0.001221 | 0.001129 |
| mp_insert.test | RUN | 0.277005 | 2.292187 | 1.069349 | 0.001279 | 0.001264 | 0.001184 |
| mp_insert_2.test | RUN | 0.023929 | 0.047846 | 0.073564 | 0.000515 | 0.000501 | 0.000825 |
| mp_erase.test | RUN | 0.302626 | 2.454279 | 1.231452 | 0.001323 | 0.001307 | 0.001315 |
| mp_erase_2.test | RUN | 0.021574 | 0.046139 | 0.074702 | 0.000487 | 0.000568 | 0.001287 |
| mp_with_index.test | RUN | 0.395823 | 4.939942 | 2.653203 | 0.001803 | 0.001617 | 0.001485 |
| mp_with_index_cx.test | RUN | 0.002758 | 0.014714 | 0.022974 | 0.000497 | 0.000595 | 0.001177 |
| mp_from_sequence.test | RUN | 0.174277 | 1.273683 | 0.688323 | 0.001268 | 0.001311 | 0.001215 |
| mp_from_sequence_2.test | RUN | 0.185712 | 1.503921 | 0.766627 | 0.001299 | 0.001428 | 0.001284 |
| mp_from_sequence_3.test | RUN | 0.152907 | 0.653244 | 0.533561 | 0.001408 | 0.001393 | 0.001181 |
| mp_min_element.test | RUN | 0.149420 | 0.598353 | 0.487676 | 0.001220 | 0.001327 | 0.001145 |
| mp_min_element_2.test | RUN | 0.023163 | 0.047109 | 0.073432 | 0.000475 | 0.000509 | 0.001254 |
| mp_min_element_q.test | RUN | 0.150513 | 0.590771 | 0.499806 | 0.001107 | 0.001334 | 0.001180 |
| mp_min_element_q_2.test | RUN | 0.022436 | 0.045035 | 0.070926 | 0.000488 | 0.000460 | 0.001147 |
| mp_max_element.test | RUN | 0.149874 | 0.589878 | 0.499752 | 0.001374 | 0.001241 | 0.001173 |
| mp_max_element_2.test | RUN | 0.022630 | 0.047390 | 0.070393 | 0.000418 | 0.000510 | 0.001172 |
| mp_max_element_q.test | RUN | 0.149272 | 0.597738 | 0.501104 | 0.001284 | 0.001341 | 0.001217 |
| mp_max_element_q_2.test | RUN | 0.022632 | 0.047226 | 0.065212 | 0.000498 | 0.000485 | 0.001082 |
| mp_nth_element.test | RUN | 0.159803 | 0.843630 | 0.610451 | 0.001440 | 0.001324 | 0.000824 |
| mp_nth_element_q.test | RUN | 0.166894 | 0.836949 | 0.598633 | 0.001186 | 0.001229 | 0.001162 |
| mp_back.test | RUN | 0.160939 | 0.686130 | 0.568138 | 0.001162 | 0.001188 | 0.001174 |
| mp_back_2.test | RUN | 0.021676 | 0.047082 | 0.071911 | 0.000474 | 0.000458 | 0.000910 |
| mp_pop_back.test | RUN | 0.469676 | 4.709823 | 1.249397 | 0.001169 | 0.001369 | 0.001280 |
| mp_pop_back_2.test | RUN | 0.021943 | 0.048094 | 0.072377 | 0.000486 | 0.000540 | 0.001235 |
| mp_flatten.test | RUN | 0.187979 | 1.645345 | 0.810309 | 0.001425 | 0.001291 | 0.000928 |
| mp_rotate_left.test | RUN | 0.185575 | 1.783128 | 0.795689 | 0.001208 | 0.001394 | 0.001072 |
| mp_rotate_right.test | RUN | 0.187419 | 1.765206 | 0.820621 | 0.001296 | 0.001319 | 0.001268 |
| mp_power_set.test | RUN | 0.184882 | 1.706156 | 0.806443 | 0.001436 | 0.001310 | 0.001230 |
| mp_partial_sum.test | RUN | 0.254203 | 2.276345 | 0.924030 | 0.001262 | 0.001373 | 0.001229 |
| mp_iterate.test | RUN | 0.162678 | 0.667272 | 0.641158 | 0.001122 | 0.001255 | 0.001251 |
| mp_pairwise_fold.test | RUN | 0.182606 | 1.555275 | 0.840918 | 0.001091 | 0.001435 | 0.001255 |
| mp_pairwise_fold_q.test | RUN | 0.142354 | 0.450419 | 0.469588 | 0.001214 | 0.001248 | 0.001222 |
| mp_sliding_fold.test | RUN | 0.374021 | 3.045910 | 1.564799 | 0.001322 | 0.001396 | 0.001282 |
| mp_sliding_fold_q.test | RUN | 0.373155 | 3.003083 | 1.540131 | 0.001193 | 0.001195 | 0.001205 |
| mp_intersperse.test | RUN | 0.174822 | 1.107500 | 0.718028 | 0.001443 | 0.001245 | 0.001363 |
| mp_split.test | RUN | 0.263028 | 2.139434 | 0.994617 | 0.001188 | 0.001328 | 0.001117 |
| mp_join.test | RUN | 0.203247 | 1.776037 | 0.891041 | 0.001237 | 0.001256 | 0.001245 |
| integral.test | RUN | 0.147467 | 0.784085 | 0.537182 | 0.001315 | 0.001232 | 0.001251 |
| mp_value.test | RUN | 0.009781 | 0.025583 | 0.036734 | 0.000506 | 0.000491 | 0.001330 |
| mp_identity.test | RUN | 0.144381 | 0.728751 | 0.505520 | 0.001209 | 0.001207 | 0.001197 |
| mp_inherit.test | RUN | 0.136265 | 0.517224 | 0.462667 | 0.001401 | 0.001253 | 0.001235 |
| mp_if.test | RUN | 0.138416 | 0.587086 | 0.473209 | 0.001296 | 0.001231 | 0.001156 |
| mp_if_sf.test | RUN | 0.132260 | 0.431600 | 0.425829 | 0.001349 | 0.001322 | 0.001216 |
| mp_eval_if.test | RUN | 0.144325 | 0.631713 | 0.480482 | 0.001329 | 0.001172 | 0.001302 |
| mp_eval_if_sf.test | RUN | 0.130890 | 0.444334 | 0.433534 | 0.001269 | 0.001202 | 0.001279 |
| mp_valid.test | RUN | 0.132702 | 0.446513 | 0.439047 | 0.001162 | 0.001246 | 0.001129 |
| mp_defer.test | RUN | 0.143788 | 0.765264 | 0.536836 | 0.001190 | 0.001318 | 0.001330 |
| mp_quote.test | RUN | 0.147059 | 0.778097 | 0.536236 | 0.001303 | 0.001273 | 0.001190 |
| mp_invoke_q.test | RUN | 0.160364 | 1.018624 | 0.615876 | 0.000989 | 0.001236 | 0.001312 |
| mp_invoke_q_sf.test | RUN | 0.131871 | 0.437709 | 0.423941 | 0.001158 | 0.001458 | 0.001323 |
| mp_quote_trait.test | RUN | 0.146781 | 0.854257 | 0.531878 | 0.001317 | 0.001254 | 0.001237 |
| mp_cond.test | RUN | 0.134575 | 0.512837 | 0.449354 | 0.001170 | 0.001288 | 0.001141 |
| mp_cond_sf.test | RUN | 0.129404 | 0.448243 | 0.436215 | 0.001213 | 0.001310 | 0.001319 |
| mp_not_fn.test | RUN | 0.128885 | 0.436128 | 0.420172 | 0.000985 | 0.001225 | 0.001193 |
| mp_eval_if_not.test | RUN | 0.140024 | 0.637893 | 0.487026 | 0.001211 | 0.001394 | 0.001284 |
| mp_eval_or.test | RUN | 0.129756 | 0.331450 | 0.439492 | 0.001271 | 0.001368 | 0.001351 |
| mp_compose.test | RUN | 0.148769 | 1.056481 | 0.594887 | 0.001100 | 0.001402 | 0.001142 |
| mp_valid_and_true.test | RUN | 0.131597 | 0.536158 | 0.444488 | 0.001196 | 0.001134 | 0.001143 |
| mp_compose_sf.test | COMPILE | 0.032285 | 0.060865 | 0.104568 | — | — | — |
| integer_sequence.test | RUN | 0.168247 | 1.027629 | 0.663270 | 0.001293 | 0.001204 | 0.001366 |
| tuple_for_each.test | RUN | 0.133369 | 0.379116 | 0.458552 | 0.001194 | 0.001186 | 0.001223 |
| tuple_for_each_cx.test | COMPILE | 0.024682 | 0.053772 | 0.080510 | — | — | — |
| tuple_apply.test | RUN | 0.135365 | 0.371650 | 0.472452 | 0.001147 | 0.001484 | 0.001148 |
| tuple_apply_cx.test | COMPILE | 0.036699 | 0.074636 | 0.112656 | — | — | — |
| construct_from_tuple.test | RUN | 0.135648 | 0.397832 | 0.456783 | 0.001188 | 0.001206 | 0.001243 |
| construct_from_tuple_cx.test | COMPILE | 0.036757 | 0.074725 | 0.103462 | — | — | — |
| tuple_transform.test | RUN | 0.217648 | 0.820662 | 0.902094 | 0.000961 | 0.001320 | 0.001174 |
| tuple_transform_2.test | RUN | 0.186353 | 0.582405 | 0.824861 | 0.001283 | 0.001290 | 0.001293 |
| tuple_transform_cx.test | COMPILE | 0.033161 | 0.074144 | 0.105917 | — | — | — |
| mp_set_contains.test | RUN | 0.137751 | 0.534765 | 0.465934 | 0.001289 | 0.001163 | 0.001167 |
| mp_set_push_back.test | RUN | 0.187254 | 1.678533 | 0.817993 | 0.001247 | 0.001254 | 0.001355 |
| mp_set_push_front.test | RUN | 0.245582 | 2.027603 | 0.933205 | 0.001234 | 0.001321 | 0.001184 |
| mp_is_set.test | RUN | 0.138358 | 0.530597 | 0.473138 | 0.001222 | 0.001256 | 0.001367 |
| mp_set_union.test | RUN | 0.180939 | 1.424749 | 0.767222 | 0.001382 | 0.001220 | 0.001064 |
| mp_set_union_sf.test | RUN | 0.130071 | 0.425614 | 0.430321 | 0.001328 | 0.001278 | 0.001231 |
| mp_set_difference.test | RUN | 0.165049 | 1.103795 | 0.655559 | 0.001204 | 0.001211 | 0.001360 |
| mp_set_difference_sf.test | RUN | 0.137410 | 0.428642 | 0.441574 | 0.001458 | 0.001335 | 0.001125 |
| mp_set_intersection.test | RUN | 0.160435 | 1.096430 | 0.639518 | 0.001193 | 0.001232 | 0.001161 |
| mp_set_intersection_sf.test | RUN | 0.132934 | 0.421657 | 0.431402 | 0.001154 | 0.001145 | 0.001222 |
| mp_all.test | RUN | 0.146445 | 0.530466 | 0.471695 | 0.001276 | 0.001223 | 0.001265 |
| mp_all_2.test | RUN | 0.400257 | 1.124913 | 1.065776 | 0.001184 | 0.001268 | 0.001149 |
| mp_and.test | RUN | 0.137193 | 0.529662 | 0.458001 | 0.001331 | 0.001379 | 0.001183 |
| mp_any.test | RUN | 0.144403 | 0.537393 | 0.474795 | 0.001238 | 0.001435 | 0.001377 |
| mp_any_2.test | RUN | 0.400805 | 1.119383 | 1.027277 | 0.001189 | 0.001370 | 0.001250 |
| mp_or.test | RUN | 0.140136 | 0.537352 | 0.471897 | 0.001185 | 0.001262 | 0.001179 |
| mp_same.test | RUN | 0.270312 | 0.887996 | 0.737166 | 0.001009 | 0.000923 | 0.001170 |
| mp_plus.test | RUN | 0.144356 | 0.644911 | 0.513836 | 0.001154 | 0.001267 | 0.001274 |
| mp_less.test | RUN | 0.138318 | 0.534375 | 0.438494 | 0.001216 | 0.001108 | 0.001092 |
| mp_min.test | RUN | 0.134123 | 0.477326 | 0.451686 | 0.001367 | 0.001171 | 0.001257 |
| mp_max.test | RUN | 0.138167 | 0.537103 | 0.462361 | 0.001274 | 0.001307 | 0.001066 |
| mp_similar.test | RUN | 0.141043 | 0.528940 | 0.462403 | 0.001090 | 0.001169 | 0.001324 |
| mp_map_find.test | RUN | 0.162667 | 0.992851 | 0.610316 | 0.001268 | 0.001343 | 0.001221 |
| mp_map_find_2.test | RUN | 0.149960 | 0.370511 | 0.524047 | 0.001180 | 0.001125 | 0.001120 |
| mp_map_find_3.test | RUN | 0.155319 | 0.368857 | 0.519956 | 0.001164 | 0.001149 | 0.001166 |
| mp_map_find_4.test | RUN | 0.141704 | 0.346910 | 0.476849 | 0.001165 | 0.001248 | 0.001239 |
| mp_map_contains.test | RUN | 0.148936 | 0.542804 | 0.483960 | 0.001212 | 0.001369 | 0.001199 |
| mp_map_insert.test | RUN | 0.199554 | 1.893590 | 0.879605 | 0.001252 | 0.001271 | 0.001196 |
| mp_map_replace.test | RUN | 0.268217 | 2.145150 | 1.034343 | 0.001113 | 0.001404 | 0.001381 |
| mp_map_erase.test | RUN | 0.189913 | 1.591022 | 0.838838 | 0.001153 | 0.001279 | 0.001215 |
| mp_map_update.test | RUN | 0.164673 | 1.014459 | 0.655232 | 0.001420 | 0.001289 | 0.001176 |
| mp_map_update_q.test | RUN | 0.168783 | 1.019755 | 0.655962 | 0.001417 | 0.001338 | 0.001186 |
| mp_map_keys.test | RUN | 0.162893 | 0.917271 | 0.627560 | 0.001199 | 0.001242 | 0.001264 |
| mp_is_map.test | RUN | 0.145432 | 0.559212 | 0.494780 | 0.001283 | 0.001186 | 0.001318 |
| mp_bind.test | RUN | 0.189770 | 1.650265 | 0.770143 | 0.001279 | 0.001256 | 0.001435 |
| mp_bind_q.test | RUN | 0.159906 | 1.021323 | 0.613995 | 0.001457 | 0.001327 | 0.001265 |
| mp_bind_front.test | RUN | 0.154356 | 1.129999 | 0.590994 | 0.001269 | 0.001360 | 0.001201 |
| mp_bind_back.test | RUN | 0.158807 | 1.144476 | 0.589457 | 0.001131 | 0.001269 | 0.001105 |
| mp_lambda.test | RUN | 0.385469 | 3.404458 | 1.605779 | 0.001110 | 0.000983 | 0.001294 |
| mpl.test | RUN | 0.327255 | 0.862583 | 1.246327 | 0.001195 | 0.001177 | 0.001162 |
| mpl_list.test | RUN | 0.177106 | 0.661427 | 0.567542 | 0.001330 | 0.001242 | 0.001349 |
| mpl_tuple.test | RUN | 0.174754 | 0.665179 | 0.587722 | 0.001188 | 0.001161 | 0.001289 |
| version.test | RUN | 0.089560 | 0.234236 | 0.295940 | 0.001113 | 0.001348 | 0.001092 |
| mp11_version.test | RUN | 0.105213 | 0.272220 | 0.343622 | 0.001062 | 0.001286 | 0.001129 |
| list_version.test | RUN | 0.088369 | 0.238667 | 0.301130 | 0.001149 | 0.001191 | 0.001266 |
| algorithm_version.test | RUN | 0.103774 | 0.256995 | 0.317362 | 0.001203 | 0.001398 | 0.001115 |
| integral_version.test | RUN | 0.088097 | 0.234705 | 0.291889 | 0.001099 | 0.001172 | 0.001136 |
| utility_version.test | RUN | 0.087782 | 0.234080 | 0.298052 | 0.001319 | 0.001241 | 0.001226 |
| function_version.test | RUN | 0.093710 | 0.240439 | 0.299823 | 0.001088 | 0.001233 | 0.001255 |
| map_version.test | RUN | 0.105542 | 0.251822 | 0.313424 | 0.001192 | 0.001200 | 0.001115 |
| set_version.test | RUN | 0.095991 | 0.241961 | 0.296960 | 0.001172 | 0.001188 | 0.001091 |
| bind_version.test | RUN | 0.100844 | 0.254046 | 0.319947 | 0.001067 | 0.001296 | 0.001118 |
| integer_sequence_version.test | RUN | 0.086949 | 0.230133 | 0.289406 | 0.001029 | 0.001312 | 0.000860 |
| tuple_version.test | RUN | 0.101431 | 0.253108 | 0.306873 | 0.000916 | 0.001310 | 0.000918 |
| mpl_version.test | RUN | 0.073246 | 0.191967 | 0.209684 | 0.001008 | 0.000918 | 0.001321 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.004× | 0.995×, 1.013× | 0.996× |
| clang | 1.100× | 1.102×, 1.099× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45651777895).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000711s | 0.000726s | 0.000748s | byte equality observed |
| bind_version.test | 10 | 0.000713s | 0.000710s | 0.000751s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000751s | 0.000719s | 0.000738s | byte equality observed |
| function_version.test | 10 | 0.000734s | 0.000734s | 0.000739s | byte equality observed |
| integer_sequence.test | 10 | 0.000728s | 0.000728s | 0.000726s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000726s | 0.000715s | 0.000732s | byte equality observed |
| integral.test | 10 | 0.000749s | 0.000733s | 0.000743s | byte equality observed |
| integral_version.test | 10 | 0.000751s | 0.000726s | 0.000752s | byte equality observed |
| list_version.test | 10 | 0.000739s | 0.000717s | 0.000741s | byte equality observed |
| map_version.test | 10 | 0.000732s | 0.000750s | 0.000768s | byte equality observed |
| mp11_version.test | 10 | 0.000729s | 0.000743s | 0.000829s | byte equality observed |
| mp_all.test | 10 | 0.000719s | 0.000754s | 0.000827s | byte equality observed |
| mp_all_2.test | 10 | 0.000712s | 0.000747s | 0.000812s | byte equality observed |
| mp_all_of.test | 10 | 0.000718s | 0.000735s | 0.000846s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000717s | 0.000737s | 0.000827s | byte equality observed |
| mp_and.test | 10 | 0.000722s | 0.000728s | 0.000821s | byte equality observed |
| mp_any.test | 10 | 0.000716s | 0.000742s | 0.000797s | byte equality observed |
| mp_any_2.test | 10 | 0.000738s | 0.000746s | 0.000803s | byte equality observed |
| mp_any_of.test | 10 | 0.000708s | 0.000719s | 0.000791s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000729s | 0.000729s | 0.000815s | byte equality observed |
| mp_append.test | 10 | 0.000727s | 0.000761s | 0.000784s | byte equality observed |
| mp_append_2.test | 10 | 0.000779s | 0.000750s | 0.000787s | byte equality observed |
| mp_append_3.test | 10 | 0.000358s | 0.000344s | 0.000817s | byte equality observed |
| mp_append_sf.test | 10 | 0.000764s | 0.000747s | 0.000780s | byte equality observed |
| mp_apply_q.test | 10 | 0.000774s | 0.000730s | 0.000804s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.000814s | 0.000751s | 0.000803s | byte equality observed |
| mp_assign.test | 10 | 0.000805s | 0.000730s | 0.000804s | byte equality observed |
| mp_assign_2.test | 10 | 0.000359s | 0.000337s | 0.000802s | byte equality observed |
| mp_at.test | 10 | 0.000794s | 0.000748s | 0.000812s | byte equality observed |
| mp_at_2.test | 10 | 0.000358s | 0.000346s | 0.000789s | byte equality observed |
| mp_at_sf.test | 10 | 0.000807s | 0.000759s | 0.000787s | byte equality observed |
| mp_back.test | 10 | 0.000817s | 0.000750s | 0.000817s | byte equality observed |
| mp_back_2.test | 10 | 0.000369s | 0.000351s | 0.000777s | byte equality observed |
| mp_bind.test | 10 | 0.000801s | 0.000798s | 0.000809s | byte equality observed |
| mp_bind_back.test | 10 | 0.000792s | 0.000807s | 0.000798s | byte equality observed |
| mp_bind_front.test | 10 | 0.000820s | 0.000790s | 0.000802s | byte equality observed |
| mp_bind_q.test | 10 | 0.000805s | 0.000819s | 0.000769s | byte equality observed |
| mp_clear.test | 10 | 0.000791s | 0.000817s | 0.000793s | byte equality observed |
| mp_clear_2.test | 10 | 0.000360s | 0.000360s | 0.000771s | byte equality observed |
| mp_compose.test | 10 | 0.000786s | 0.000789s | 0.000790s | byte equality observed |
| mp_cond.test | 10 | 0.000805s | 0.000808s | 0.000814s | byte equality observed |
| mp_cond_sf.test | 10 | 0.000786s | 0.000823s | 0.000818s | byte equality observed |
| mp_contains.test | 10 | 0.000811s | 0.000816s | 0.000830s | byte equality observed |
| mp_copy_if.test | 10 | 0.000785s | 0.000811s | 0.000816s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.000802s | 0.000814s | 0.000809s | byte equality observed |
| mp_count.test | 10 | 0.000835s | 0.000799s | 0.000828s | byte equality observed |
| mp_count_if.test | 10 | 0.000824s | 0.000806s | 0.000827s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000813s | 0.000832s | 0.000786s | byte equality observed |
| mp_defer.test | 10 | 0.000810s | 0.000820s | 0.000815s | byte equality observed |
| mp_drop.test | 10 | 0.000805s | 0.000814s | 0.000817s | byte equality observed |
| mp_drop_2.test | 10 | 0.000362s | 0.000361s | 0.000790s | byte equality observed |
| mp_empty.test | 10 | 0.000791s | 0.000815s | 0.000796s | byte equality observed |
| mp_empty_2.test | 10 | 0.000365s | 0.000360s | 0.000776s | byte equality observed |
| mp_erase.test | 10 | 0.000808s | 0.000802s | 0.000797s | byte equality observed |
| mp_erase_2.test | 10 | 0.000362s | 0.000359s | 0.000768s | byte equality observed |
| mp_eval_if.test | 10 | 0.000801s | 0.000820s | 0.000802s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.000785s | 0.000821s | 0.000804s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.000808s | 0.000792s | 0.000822s | byte equality observed |
| mp_eval_or.test | 10 | 0.000824s | 0.000775s | 0.000837s | byte equality observed |
| mp_fill.test | 10 | 0.000795s | 0.000788s | 0.000793s | byte equality observed |
| mp_fill_2.test | 10 | 0.000361s | 0.000367s | 0.000804s | byte equality observed |
| mp_filter.test | 10 | 0.000820s | 0.000806s | 0.000813s | byte equality observed |
| mp_find.test | 10 | 0.000805s | 0.000801s | 0.000819s | byte equality observed |
| mp_find_if.test | 10 | 0.000810s | 0.000829s | 0.000792s | byte equality observed |
| mp_find_if_q.test | 10 | 0.000798s | 0.000822s | 0.000799s | byte equality observed |
| mp_flatten.test | 10 | 0.000793s | 0.000826s | 0.000788s | byte equality observed |
| mp_fold.test | 10 | 0.000806s | 0.000816s | 0.000796s | byte equality observed |
| mp_fold_q.test | 10 | 0.000831s | 0.000800s | 0.000818s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.000811s | 0.000789s | 0.000824s | byte equality observed |
| mp_for_each.test | 10 | 0.000799s | 0.000805s | 0.000819s | byte equality observed |
| mp_from_sequence.test | 10 | 0.000814s | 0.000838s | 0.000795s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.000801s | 0.000798s | 0.000807s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.000813s | 0.000811s | 0.000815s | byte equality observed |
| mp_front.test | 10 | 0.000801s | 0.000785s | 0.000801s | byte equality observed |
| mp_front_2.test | 10 | 0.000367s | 0.000368s | 0.000789s | byte equality observed |
| mp_identity.test | 10 | 0.000800s | 0.000784s | 0.000810s | byte equality observed |
| mp_if.test | 10 | 0.000812s | 0.000797s | 0.000804s | byte equality observed |
| mp_if_sf.test | 10 | 0.000807s | 0.000797s | 0.000813s | byte equality observed |
| mp_inherit.test | 10 | 0.000813s | 0.000800s | 0.000784s | byte equality observed |
| mp_insert.test | 10 | 0.000817s | 0.000785s | 0.000784s | byte equality observed |
| mp_insert_2.test | 10 | 0.000355s | 0.000359s | 0.000763s | byte equality observed |
| mp_intersperse.test | 10 | 0.000804s | 0.000808s | 0.000787s | byte equality observed |
| mp_invoke_q.test | 10 | 0.000818s | 0.000805s | 0.000808s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.000798s | 0.000783s | 0.000802s | byte equality observed |
| mp_iota.test | 10 | 0.000826s | 0.000786s | 0.000814s | byte equality observed |
| mp_iota_2.test | 10 | 0.000812s | 0.000816s | 0.000821s | byte equality observed |
| mp_is_list.test | 10 | 0.000809s | 0.000842s | 0.000827s | byte equality observed |
| mp_is_map.test | 10 | 0.000809s | 0.000845s | 0.000823s | byte equality observed |
| mp_is_set.test | 10 | 0.000813s | 0.000846s | 0.000798s | byte equality observed |
| mp_is_value_list.test | 10 | 0.000783s | 0.000827s | 0.000816s | byte equality observed |
| mp_iterate.test | 10 | 0.000798s | 0.000817s | 0.000821s | byte equality observed |
| mp_join.test | 10 | 0.000799s | 0.000837s | 0.000800s | byte equality observed |
| mp_lambda.test | 10 | 0.000818s | 0.000833s | 0.000823s | byte equality observed |
| mp_less.test | 10 | 0.000793s | 0.000823s | 0.000818s | byte equality observed |
| mp_list_c.test | 10 | 0.000793s | 0.000803s | 0.000820s | byte equality observed |
| mp_list_v.test | 10 | 0.000360s | 0.000359s | 0.000800s | byte equality observed |
| mp_map_contains.test | 10 | 0.000787s | 0.000802s | 0.000805s | byte equality observed |
| mp_map_erase.test | 10 | 0.000827s | 0.000819s | 0.000803s | byte equality observed |
| mp_map_find.test | 10 | 0.000831s | 0.000824s | 0.000802s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000809s | 0.000822s | 0.000809s | byte equality observed |
| mp_map_find_3.test | 10 | 0.000807s | 0.000831s | 0.000784s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000800s | 0.000811s | 0.000796s | byte equality observed |
| mp_map_insert.test | 10 | 0.000805s | 0.000825s | 0.000805s | byte equality observed |
| mp_map_keys.test | 10 | 0.000824s | 0.000811s | 0.000808s | byte equality observed |
| mp_map_replace.test | 10 | 0.000819s | 0.000792s | 0.000799s | byte equality observed |
| mp_map_update.test | 10 | 0.000789s | 0.000837s | 0.000842s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000800s | 0.000789s | 0.000827s | byte equality observed |
| mp_max.test | 10 | 0.000794s | 0.000794s | 0.000847s | byte equality observed |
| mp_max_element.test | 10 | 0.000796s | 0.000800s | 0.000837s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000364s | 0.000356s | 0.000791s | byte equality observed |
| mp_max_element_q.test | 10 | 0.000785s | 0.000821s | 0.000815s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000365s | 0.000353s | 0.000780s | byte equality observed |
| mp_min.test | 10 | 0.000781s | 0.000806s | 0.000785s | byte equality observed |
| mp_min_element.test | 10 | 0.000793s | 0.000803s | 0.000816s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000366s | 0.000354s | 0.000806s | byte equality observed |
| mp_min_element_q.test | 10 | 0.000784s | 0.000783s | 0.000806s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000365s | 0.000357s | 0.000800s | byte equality observed |
| mp_none_of.test | 10 | 0.000792s | 0.000803s | 0.000787s | byte equality observed |
| mp_none_of_q.test | 10 | 0.000785s | 0.000793s | 0.000823s | byte equality observed |
| mp_not_fn.test | 10 | 0.000814s | 0.000834s | 0.000809s | byte equality observed |
| mp_nth_element.test | 10 | 0.000809s | 0.000820s | 0.000828s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.000832s | 0.000829s | 0.000814s | byte equality observed |
| mp_or.test | 10 | 0.000809s | 0.000838s | 0.000795s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.000817s | 0.000809s | 0.000807s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.000801s | 0.000798s | 0.000811s | byte equality observed |
| mp_partial_sum.test | 10 | 0.000798s | 0.000814s | 0.000814s | byte equality observed |
| mp_partition.test | 10 | 0.000787s | 0.000777s | 0.000837s | byte equality observed |
| mp_partition_q.test | 10 | 0.000782s | 0.000793s | 0.000853s | byte equality observed |
| mp_plus.test | 10 | 0.000808s | 0.000796s | 0.000826s | byte equality observed |
| mp_pop_back.test | 10 | 0.000806s | 0.000805s | 0.000798s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000358s | 0.000358s | 0.000789s | byte equality observed |
| mp_pop_front.test | 10 | 0.000798s | 0.000796s | 0.000791s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000362s | 0.000360s | 0.000789s | byte equality observed |
| mp_power_set.test | 10 | 0.000808s | 0.000827s | 0.000807s | byte equality observed |
| mp_product.test | 10 | 0.000805s | 0.000807s | 0.000770s | byte equality observed |
| mp_push_back.test | 10 | 0.000807s | 0.000803s | 0.000802s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000361s | 0.000359s | 0.000783s | byte equality observed |
| mp_push_front.test | 10 | 0.000792s | 0.000798s | 0.000809s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000358s | 0.000363s | 0.000814s | byte equality observed |
| mp_quote.test | 10 | 0.000807s | 0.000815s | 0.000811s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000803s | 0.000831s | 0.000805s | byte equality observed |
| mp_remove.test | 10 | 0.000798s | 0.000830s | 0.000809s | byte equality observed |
| mp_remove_if.test | 10 | 0.000812s | 0.000827s | 0.000802s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.000814s | 0.000803s | 0.000802s | byte equality observed |
| mp_rename.test | 10 | 0.000805s | 0.000822s | 0.000800s | byte equality observed |
| mp_rename_2.test | 10 | 0.000359s | 0.000364s | 0.000776s | byte equality observed |
| mp_rename_v.test | 10 | 0.000363s | 0.000364s | 0.000769s | byte equality observed |
| mp_repeat.test | 10 | 0.000801s | 0.000812s | 0.000796s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000363s | 0.000358s | 0.000750s | byte equality observed |
| mp_repeat_3.test | 10 | 0.000822s | 0.000800s | 0.000794s | byte equality observed |
| mp_replace.test | 10 | 0.000833s | 0.000773s | 0.000797s | byte equality observed |
| mp_replace_at.test | 10 | 0.000846s | 0.000796s | 0.000789s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.000840s | 0.000777s | 0.000819s | byte equality observed |
| mp_replace_front.test | 10 | 0.000796s | 0.000809s | 0.000819s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000353s | 0.000348s | 0.000796s | byte equality observed |
| mp_replace_if.test | 10 | 0.000796s | 0.000818s | 0.000824s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.000822s | 0.000830s | 0.000831s | byte equality observed |
| mp_replace_second.test | 10 | 0.000801s | 0.000806s | 0.000794s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000366s | 0.000357s | 0.000761s | byte equality observed |
| mp_replace_third.test | 10 | 0.000807s | 0.000800s | 0.000803s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000353s | 0.000363s | 0.000799s | byte equality observed |
| mp_reverse.test | 10 | 0.000814s | 0.000829s | 0.000828s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.000810s | 0.000790s | 0.000817s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000803s | 0.000829s | 0.000844s | byte equality observed |
| mp_rotate_left.test | 10 | 0.000823s | 0.000808s | 0.000831s | byte equality observed |
| mp_rotate_right.test | 10 | 0.000820s | 0.000808s | 0.000798s | byte equality observed |
| mp_same.test | 10 | 0.000820s | 0.000797s | 0.000799s | byte equality observed |
| mp_second.test | 10 | 0.000796s | 0.000793s | 0.000816s | byte equality observed |
| mp_second_2.test | 10 | 0.000360s | 0.000362s | 0.000787s | byte equality observed |
| mp_set_contains.test | 10 | 0.000817s | 0.000801s | 0.000789s | byte equality observed |
| mp_set_difference.test | 10 | 0.000828s | 0.000815s | 0.000798s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000794s | 0.000803s | 0.000793s | byte equality observed |
| mp_set_intersection.test | 10 | 0.000808s | 0.000833s | 0.000803s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000797s | 0.000824s | 0.000842s | byte equality observed |
| mp_set_push_back.test | 10 | 0.000811s | 0.000803s | 0.000837s | byte equality observed |
| mp_set_push_front.test | 10 | 0.000805s | 0.000800s | 0.000831s | byte equality observed |
| mp_set_union.test | 10 | 0.000797s | 0.000811s | 0.000817s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.000823s | 0.000794s | 0.000806s | byte equality observed |
| mp_similar.test | 10 | 0.000835s | 0.000798s | 0.000827s | byte equality observed |
| mp_size.test | 10 | 0.000811s | 0.000797s | 0.000787s | byte equality observed |
| mp_size_2.test | 10 | 0.000358s | 0.000361s | 0.000774s | byte equality observed |
| mp_slice.test | 10 | 0.000815s | 0.000814s | 0.000795s | byte equality observed |
| mp_slice_2.test | 10 | 0.000356s | 0.000356s | 0.000796s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.000818s | 0.000807s | 0.000805s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.000813s | 0.000809s | 0.000823s | byte equality observed |
| mp_sort.test | 10 | 0.000824s | 0.000806s | 0.000808s | byte equality observed |
| mp_sort_q.test | 10 | 0.000825s | 0.000824s | 0.000806s | byte equality observed |
| mp_split.test | 10 | 0.000826s | 0.000813s | 0.000836s | byte equality observed |
| mp_starts_with.test | 10 | 0.000795s | 0.000808s | 0.000817s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.000815s | 0.000834s | 0.000823s | byte equality observed |
| mp_take.test | 10 | 0.000819s | 0.000838s | 0.000840s | byte equality observed |
| mp_take_2.test | 10 | 0.000357s | 0.000362s | 0.000810s | byte equality observed |
| mp_third.test | 10 | 0.000791s | 0.000808s | 0.000804s | byte equality observed |
| mp_third_2.test | 10 | 0.000360s | 0.000356s | 0.000763s | byte equality observed |
| mp_transform.test | 10 | 0.000793s | 0.000825s | 0.000793s | byte equality observed |
| mp_transform_2.test | 10 | 0.000767s | 0.000781s | 0.000807s | byte equality observed |
| mp_transform_front.test | 10 | 0.000802s | 0.000802s | 0.000799s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000361s | 0.000354s | 0.000797s | byte equality observed |
| mp_transform_if.test | 10 | 0.000824s | 0.000817s | 0.000774s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.000794s | 0.000820s | 0.000782s | byte equality observed |
| mp_transform_q.test | 10 | 0.000823s | 0.000835s | 0.000791s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.000798s | 0.000810s | 0.000783s | byte equality observed |
| mp_transform_second.test | 10 | 0.000812s | 0.000794s | 0.000809s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000359s | 0.000359s | 0.000789s | byte equality observed |
| mp_transform_sf.test | 10 | 0.000790s | 0.000833s | 0.000793s | byte equality observed |
| mp_transform_third.test | 10 | 0.000791s | 0.000799s | 0.000797s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000359s | 0.000362s | 0.000782s | byte equality observed |
| mp_unique.test | 10 | 0.000789s | 0.000794s | 0.000793s | byte equality observed |
| mp_unique_if.test | 10 | 0.000808s | 0.000802s | 0.000805s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.000804s | 0.000812s | 0.000800s | byte equality observed |
| mp_valid.test | 10 | 0.000788s | 0.000814s | 0.000799s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.000800s | 0.000827s | 0.000809s | byte equality observed |
| mp_value.test | 10 | 0.000359s | 0.000343s | 0.000792s | byte equality observed |
| mp_with_index.test | 10 | 0.001105s | 0.001076s | 0.001011s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000361s | 0.000357s | 0.000773s | byte equality observed |
| mpl.test | 10 | 0.000818s | 0.000771s | 0.000809s | byte equality observed |
| mpl_list.test | 10 | 0.000784s | 0.000800s | 0.000824s | byte equality observed |
| mpl_tuple.test | 10 | 0.000781s | 0.000829s | 0.000846s | byte equality observed |
| mpl_version.test | 10 | 0.000799s | 0.000794s | 0.000832s | byte equality observed |
| set_version.test | 10 | 0.000806s | 0.000806s | 0.000794s | byte equality observed |
| tuple_apply.test | 10 | 0.000822s | 0.000815s | 0.000807s | byte equality observed |
| tuple_for_each.test | 10 | 0.000808s | 0.000813s | 0.000845s | byte equality observed |
| tuple_transform.test | 10 | 0.000795s | 0.000815s | 0.000809s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000810s | 0.000828s | 0.000809s | byte equality observed |
| tuple_version.test | 10 | 0.000805s | 0.000842s | 0.000827s | byte equality observed |
| utility_version.test | 10 | 0.000807s | 0.000808s | 0.000811s | byte equality observed |
| version.test | 10 | 0.000797s | 0.000813s | 0.000824s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45651777895).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
