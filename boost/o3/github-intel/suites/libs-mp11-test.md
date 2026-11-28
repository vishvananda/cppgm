# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.029300 | 0.059912 | 0.093324 | — | — | — |
| complex_h.test | COMPILE | 0.122909 | 0.258725 | 0.371040 | — | — | — |
| mp_size.test | RUN | 0.141444 | 0.856863 | 0.477104 | 0.001288 | 0.001257 | 0.001300 |
| mp_size_2.test | RUN | 0.012914 | 0.029415 | 0.041918 | 0.000516 | 0.000509 | 0.001085 |
| mp_empty.test | RUN | 0.137604 | 0.521821 | 0.436486 | 0.001232 | 0.001395 | 0.001150 |
| mp_empty_2.test | RUN | 0.013253 | 0.031139 | 0.046607 | 0.000473 | 0.000486 | 0.001457 |
| mp_assign.test | RUN | 0.162998 | 1.139022 | 0.620272 | 0.001259 | 0.001356 | 0.001448 |
| mp_assign_2.test | RUN | 0.012079 | 0.030815 | 0.045381 | 0.000508 | 0.000499 | 0.001161 |
| mp_clear.test | RUN | 0.138268 | 0.481239 | 0.472089 | 0.001225 | 0.001278 | 0.001167 |
| mp_clear_2.test | RUN | 0.011145 | 0.030290 | 0.045941 | 0.000605 | 0.000493 | 0.001362 |
| mp_front.test | RUN | 0.151603 | 0.766564 | 0.514176 | 0.001498 | 0.001483 | 0.001322 |
| mp_front_2.test | RUN | 0.012541 | 0.030482 | 0.045070 | 0.000517 | 0.000465 | 0.001295 |
| mp_pop_front.test | RUN | 0.149330 | 0.805985 | 0.522391 | 0.001324 | 0.001160 | 0.001490 |
| mp_pop_front_2.test | RUN | 0.013762 | 0.029498 | 0.044312 | 0.000476 | 0.000542 | 0.001200 |
| mp_second.test | RUN | 0.144895 | 0.507586 | 0.495245 | 0.001382 | 0.001266 | 0.001262 |
| mp_second_2.test | RUN | 0.013736 | 0.030822 | 0.046016 | 0.000507 | 0.000523 | 0.001457 |
| mp_third.test | RUN | 0.137862 | 0.469020 | 0.451361 | 0.001286 | 0.001231 | 0.001540 |
| mp_third_2.test | RUN | 0.013066 | 0.030285 | 0.045627 | 0.000497 | 0.000487 | 0.001269 |
| mp_push_front.test | RUN | 0.191031 | 1.744062 | 0.865934 | 0.001216 | 0.001525 | 0.001602 |
| mp_push_front_2.test | RUN | 0.013160 | 0.030269 | 0.046596 | 0.000498 | 0.000451 | 0.001265 |
| mp_push_back.test | RUN | 0.188722 | 1.729014 | 0.859460 | 0.001268 | 0.001202 | 0.001312 |
| mp_push_back_2.test | RUN | 0.012802 | 0.031194 | 0.046021 | 0.000520 | 0.000480 | 0.001274 |
| mp_rename.test | RUN | 0.172910 | 1.576882 | 0.738501 | 0.001289 | 0.001246 | 0.001332 |
| mp_rename_2.test | RUN | 0.012324 | 0.030910 | 0.046351 | 0.000524 | 0.000547 | 0.001479 |
| mp_append.test | RUN | 0.186221 | 1.804319 | 0.815890 | 0.001201 | 0.001502 | 0.001453 |
| mp_append_2.test | RUN | 0.415798 | 4.081453 | 1.090748 | 0.001320 | 0.001259 | 0.001419 |
| mp_append_3.test | RUN | 0.013019 | 0.029367 | 0.047459 | 0.000656 | 0.000519 | 0.001384 |
| mp_append_sf.test | RUN | 0.133066 | 0.427108 | 0.432327 | 0.001381 | 0.001326 | 0.001492 |
| mp_replace_front.test | RUN | 0.167362 | 1.278674 | 0.666880 | 0.001240 | 0.001350 | 0.001292 |
| mp_replace_front_2.test | RUN | 0.012639 | 0.030396 | 0.047319 | 0.000495 | 0.000463 | 0.001368 |
| mp_replace_second.test | RUN | 0.165044 | 0.819992 | 0.600975 | 0.001456 | 0.001222 | 0.001413 |
| mp_replace_second_2.test | RUN | 0.013117 | 0.030746 | 0.046586 | 0.000489 | 0.000555 | 0.001141 |
| mp_replace_third.test | RUN | 0.157751 | 0.678629 | 0.555316 | 0.001407 | 0.001311 | 0.001326 |
| mp_replace_third_2.test | RUN | 0.012816 | 0.030413 | 0.044268 | 0.000531 | 0.000554 | 0.001497 |
| mp_apply_q.test | RUN | 0.176660 | 1.570333 | 0.735050 | 0.001225 | 0.001301 | 0.001195 |
| mp_apply_q_sf.test | RUN | 0.140014 | 0.445166 | 0.443409 | 0.001302 | 0.001181 | 0.001324 |
| mp_is_list.test | RUN | 0.145669 | 0.530483 | 0.466526 | 0.001242 | 0.001271 | 0.001363 |
| mp_list_c.test | RUN | 0.153018 | 0.652916 | 0.524552 | 0.001196 | 0.001402 | 0.001482 |
| mp_transform_front.test | RUN | 0.167212 | 1.288571 | 0.650531 | 0.001196 | 0.001480 | 0.001381 |
| mp_transform_front_2.test | RUN | 0.012904 | 0.030451 | 0.046774 | 0.000491 | 0.000492 | 0.001304 |
| mp_transform_second.test | RUN | 0.157256 | 1.093717 | 0.588121 | 0.001259 | 0.001233 | 0.001208 |
| mp_transform_second_2.test | RUN | 0.012977 | 0.030001 | 0.046358 | 0.000480 | 0.000553 | 0.001222 |
| mp_transform_third.test | RUN | 0.149560 | 0.818359 | 0.523601 | 0.001206 | 0.001445 | 0.001530 |
| mp_transform_third_2.test | RUN | 0.012684 | 0.030440 | 0.044121 | 0.000461 | 0.000558 | 0.001121 |
| mp_list_v.test | RUN | 0.012883 | 0.030322 | 0.043696 | 0.000482 | 0.000488 | 0.001249 |
| mp_rename_v.test | RUN | 0.012992 | 0.030304 | 0.045989 | 0.000471 | 0.000514 | 0.001294 |
| mp_is_value_list.test | RUN | 0.135080 | 0.329873 | 0.435284 | 0.001244 | 0.001297 | 0.001454 |
| mp_transform.test | RUN | 0.344364 | 2.724802 | 1.381163 | 0.001393 | 0.001378 | 0.001391 |
| mp_transform_2.test | RUN | 0.130734 | 0.297796 | 0.393882 | 0.001226 | 0.001332 | 0.001193 |
| mp_transform_q.test | RUN | 0.331607 | 2.603757 | 1.338002 | 0.001219 | 0.001272 | 0.001425 |
| mp_transform_q_2.test | RUN | 0.341182 | 0.816537 | 1.741050 | 0.001346 | 0.001266 | 0.001163 |
| mp_transform_sf.test | RUN | 0.142117 | 0.449579 | 0.479146 | 0.001287 | 0.001181 | 0.001569 |
| mp_transform_if.test | RUN | 0.180085 | 1.298799 | 0.712144 | 0.001461 | 0.001368 | 0.001325 |
| mp_transform_if_q.test | RUN | 0.178150 | 1.300597 | 0.727147 | 0.001206 | 0.001191 | 0.001376 |
| mp_filter.test | RUN | 0.159769 | 0.756740 | 0.547395 | 0.001367 | 0.001469 | 0.001337 |
| mp_fill.test | RUN | 0.152977 | 0.574894 | 0.507823 | 0.001180 | 0.001482 | 0.001404 |
| mp_fill_2.test | RUN | 0.023072 | 0.047892 | 0.073282 | 0.000504 | 0.000608 | 0.001351 |
| mp_count.test | RUN | 0.280172 | 1.401435 | 0.791073 | 0.001390 | 0.001216 | 0.001249 |
| mp_count_if.test | RUN | 0.296819 | 1.426147 | 0.883412 | 0.001191 | 0.001341 | 0.001352 |
| mp_count_if_q.test | RUN | 0.151682 | 0.918460 | 0.512360 | 0.001166 | 0.001444 | 0.001250 |
| mp_contains.test | RUN | 0.142552 | 0.545306 | 0.480559 | 0.001358 | 0.001393 | 0.001130 |
| mp_starts_with.test | RUN | 0.145379 | 0.553093 | 0.493089 | 0.001463 | 0.001330 | 0.001205 |
| mp_starts_with_sf.test | RUN | 0.142491 | 0.459733 | 0.468791 | 0.001318 | 0.001138 | 0.001220 |
| mp_repeat.test | RUN | 0.216592 | 2.324998 | 0.913051 | 0.001275 | 0.001282 | 0.001603 |
| mp_repeat_2.test | RUN | 0.022534 | 0.048194 | 0.072435 | 0.000549 | 0.000547 | 0.001416 |
| mp_repeat_3.test | RUN | 0.180990 | 0.290861 | 0.468897 | 0.001393 | 0.001289 | 0.001382 |
| mp_product.test | RUN | 0.165422 | 1.393751 | 0.675050 | 0.001308 | 0.001408 | 0.001198 |
| mp_drop.test | RUN | 0.180414 | 1.757069 | 0.766748 | 0.001207 | 0.001452 | 0.001366 |
| mp_drop_2.test | RUN | 0.022180 | 0.047773 | 0.076578 | 0.000489 | 0.000536 | 0.001416 |
| mp_iota.test | RUN | 0.179404 | 1.462378 | 0.690004 | 0.001167 | 0.000989 | 0.001393 |
| mp_iota_2.test | RUN | 0.190062 | 1.791780 | 0.786943 | 0.001064 | 0.001430 | 0.001424 |
| mp_at.test | RUN | 0.151876 | 0.768888 | 0.540553 | 0.001081 | 0.001358 | 0.001566 |
| mp_at_2.test | RUN | 0.023114 | 0.046549 | 0.075164 | 0.000561 | 0.000567 | 0.001422 |
| mp_at_sf.test | RUN | 0.142988 | 0.462327 | 0.467326 | 0.001461 | 0.001392 | 0.001173 |
| mp_take.test | RUN | 0.248392 | 2.294246 | 0.931343 | 0.001500 | 0.001373 | 0.001555 |
| mp_take_2.test | RUN | 0.021961 | 0.047454 | 0.075073 | 0.000482 | 0.000499 | 0.001102 |
| mp_slice.test | RUN | 0.291461 | 2.333847 | 1.211237 | 0.001344 | 0.001404 | 0.001174 |
| mp_slice_2.test | RUN | 0.023810 | 0.047493 | 0.072834 | 0.000554 | 0.000617 | 0.001310 |
| mp_replace.test | RUN | 0.182400 | 1.178080 | 0.749505 | 0.001490 | 0.001403 | 0.001500 |
| mp_replace_if.test | RUN | 0.175469 | 1.033418 | 0.699456 | 0.001387 | 0.001425 | 0.001235 |
| mp_replace_if_q.test | RUN | 0.172596 | 1.029811 | 0.690039 | 0.001519 | 0.001317 | 0.001310 |
| mp_copy_if.test | RUN | 0.171960 | 1.459422 | 0.664388 | 0.001280 | 0.001291 | 0.001380 |
| mp_copy_if_q.test | RUN | 0.176352 | 1.447906 | 0.667636 | 0.001195 | 0.001255 | 0.001268 |
| mp_remove.test | RUN | 0.170224 | 0.984919 | 0.668517 | 0.000964 | 0.001449 | 0.001195 |
| mp_remove_if.test | RUN | 0.179527 | 1.544520 | 0.706024 | 0.001274 | 0.001486 | 0.001330 |
| mp_remove_if_q.test | RUN | 0.177764 | 1.544950 | 0.705208 | 0.001224 | 0.001399 | 0.001501 |
| mp_partition.test | RUN | 0.185259 | 1.445357 | 0.760494 | 0.001345 | 0.001488 | 0.001184 |
| mp_partition_q.test | RUN | 0.179376 | 1.462748 | 0.759063 | 0.001164 | 0.001476 | 0.001366 |
| mp_sort.test | RUN | 0.165213 | 1.039073 | 0.659113 | 0.001499 | 0.001588 | 0.001546 |
| mp_sort_q.test | RUN | 0.170197 | 1.031956 | 0.659902 | 0.001262 | 0.001226 | 0.001387 |
| mp_find.test | RUN | 0.164780 | 1.115140 | 0.563560 | 0.001435 | 0.001454 | 0.001279 |
| mp_find_if.test | RUN | 0.157913 | 1.026195 | 0.542142 | 0.001190 | 0.001460 | 0.001384 |
| mp_find_if_q.test | RUN | 0.176151 | 1.138114 | 0.663525 | 0.001506 | 0.001446 | 0.001355 |
| mp_reverse.test | RUN | 0.346726 | 3.062631 | 1.315255 | 0.001398 | 0.001448 | 0.001396 |
| mp_fold.test | RUN | 0.628548 | 2.422878 | 3.395535 | 0.001471 | 0.001456 | 0.001295 |
| mp_fold_q.test | RUN | 0.159463 | 1.027258 | 0.618086 | 0.001314 | 0.001267 | 0.001448 |
| mp_fold_q_sf.test | RUN | 0.143092 | 0.461285 | 0.478596 | 0.001225 | 0.001241 | 0.001368 |
| mp_reverse_fold.test | RUN | 0.298365 | 2.300927 | 0.938857 | 0.001240 | 0.001426 | 0.001342 |
| mp_reverse_fold_q.test | RUN | 0.166995 | 1.236251 | 0.670571 | 0.001336 | 0.001388 | 0.001382 |
| mp_unique.test | RUN | 0.165718 | 1.124159 | 0.657483 | 0.001164 | 0.001541 | 0.001542 |
| mp_unique_if.test | RUN | 0.311817 | 2.381504 | 1.042997 | 0.001312 | 0.001382 | 0.001360 |
| mp_unique_if_q.test | RUN | 0.260406 | 2.374362 | 0.860551 | 0.001391 | 0.001519 | 0.001382 |
| mp_all_of.test | RUN | 0.402128 | 1.292433 | 1.094757 | 0.001519 | 0.001554 | 0.001229 |
| mp_all_of_q.test | RUN | 0.142923 | 0.552086 | 0.479732 | 0.001614 | 0.001374 | 0.001502 |
| mp_any_of.test | RUN | 0.405821 | 1.347756 | 1.077391 | 0.001407 | 0.001485 | 0.001384 |
| mp_any_of_q.test | RUN | 0.143196 | 0.526270 | 0.459667 | 0.001468 | 0.001369 | 0.001451 |
| mp_none_of.test | RUN | 0.401573 | 1.334368 | 1.087233 | 0.001256 | 0.001431 | 0.001574 |
| mp_none_of_q.test | RUN | 0.141462 | 0.536057 | 0.477463 | 0.001388 | 0.001408 | 0.001365 |
| mp_replace_at.test | RUN | 0.174359 | 1.109787 | 0.747087 | 0.001429 | 0.001502 | 0.001433 |
| mp_replace_at_c.test | RUN | 0.178907 | 1.146558 | 0.738789 | 0.001449 | 0.001253 | 0.001395 |
| mp_for_each.test | RUN | 0.166063 | 0.750900 | 0.774169 | 0.001258 | 0.001396 | 0.001452 |
| mp_insert.test | RUN | 0.281151 | 2.329455 | 1.104743 | 0.001351 | 0.001566 | 0.001314 |
| mp_insert_2.test | RUN | 0.022957 | 0.045302 | 0.068524 | 0.000427 | 0.000584 | 0.001389 |
| mp_erase.test | RUN | 0.303945 | 2.455217 | 1.277054 | 0.001384 | 0.001468 | 0.001273 |
| mp_erase_2.test | RUN | 0.022706 | 0.047443 | 0.072877 | 0.000545 | 0.000586 | 0.001490 |
| mp_with_index.test | RUN | 0.408074 | 4.929062 | 2.720628 | 0.001768 | 0.001603 | 0.001674 |
| mp_with_index_cx.test | RUN | 0.003213 | 0.015101 | 0.023893 | 0.000558 | 0.000555 | 0.001379 |
| mp_from_sequence.test | RUN | 0.180581 | 1.289782 | 0.708039 | 0.001333 | 0.001290 | 0.001514 |
| mp_from_sequence_2.test | RUN | 0.193016 | 1.528494 | 0.781236 | 0.001331 | 0.001230 | 0.001492 |
| mp_from_sequence_3.test | RUN | 0.156103 | 0.670184 | 0.538933 | 0.001167 | 0.001443 | 0.001452 |
| mp_min_element.test | RUN | 0.151183 | 0.595897 | 0.502685 | 0.001288 | 0.001280 | 0.001358 |
| mp_min_element_2.test | RUN | 0.022369 | 0.047804 | 0.075451 | 0.000497 | 0.000516 | 0.001425 |
| mp_min_element_q.test | RUN | 0.148545 | 0.602495 | 0.509854 | 0.001228 | 0.001302 | 0.001489 |
| mp_min_element_q_2.test | RUN | 0.022339 | 0.047072 | 0.073150 | 0.000526 | 0.000578 | 0.001415 |
| mp_max_element.test | RUN | 0.152306 | 0.591520 | 0.507496 | 0.001525 | 0.001444 | 0.001168 |
| mp_max_element_2.test | RUN | 0.021386 | 0.047240 | 0.072338 | 0.000527 | 0.000508 | 0.001254 |
| mp_max_element_q.test | RUN | 0.150589 | 0.603771 | 0.508165 | 0.001246 | 0.001314 | 0.001576 |
| mp_max_element_q_2.test | RUN | 0.023608 | 0.047327 | 0.070900 | 0.000556 | 0.000643 | 0.001109 |
| mp_nth_element.test | RUN | 0.171725 | 0.860585 | 0.623468 | 0.000952 | 0.001341 | 0.001214 |
| mp_nth_element_q.test | RUN | 0.163305 | 0.845142 | 0.615944 | 0.001257 | 0.001032 | 0.001230 |
| mp_back.test | RUN | 0.163353 | 0.700318 | 0.575616 | 0.001314 | 0.001337 | 0.001246 |
| mp_back_2.test | RUN | 0.025115 | 0.047949 | 0.076450 | 0.000578 | 0.000542 | 0.001260 |
| mp_pop_back.test | RUN | 0.474631 | 4.756459 | 1.255438 | 0.001265 | 0.001457 | 0.001350 |
| mp_pop_back_2.test | RUN | 0.022535 | 0.046084 | 0.074153 | 0.000639 | 0.000508 | 0.001252 |
| mp_flatten.test | RUN | 0.193529 | 1.656880 | 0.821368 | 0.001471 | 0.001303 | 0.001158 |
| mp_rotate_left.test | RUN | 0.189993 | 1.780468 | 0.800937 | 0.001283 | 0.001151 | 0.001206 |
| mp_rotate_right.test | RUN | 0.194604 | 1.782522 | 0.832040 | 0.001416 | 0.001269 | 0.001302 |
| mp_power_set.test | RUN | 0.193967 | 1.724180 | 0.825228 | 0.001336 | 0.001327 | 0.001374 |
| mp_partial_sum.test | RUN | 0.260887 | 2.311072 | 0.945696 | 0.001263 | 0.001494 | 0.001248 |
| mp_iterate.test | RUN | 0.166157 | 0.672114 | 0.648942 | 0.001506 | 0.001367 | 0.001405 |
| mp_pairwise_fold.test | RUN | 0.185744 | 1.587595 | 0.845485 | 0.001228 | 0.001402 | 0.001384 |
| mp_pairwise_fold_q.test | RUN | 0.144993 | 0.447217 | 0.474845 | 0.001293 | 0.001622 | 0.001485 |
| mp_sliding_fold.test | RUN | 0.384566 | 3.079473 | 1.593674 | 0.001643 | 0.001324 | 0.001197 |
| mp_sliding_fold_q.test | RUN | 0.381504 | 3.075940 | 1.584469 | 0.001379 | 0.001314 | 0.001089 |
| mp_intersperse.test | RUN | 0.177578 | 1.121275 | 0.731640 | 0.001323 | 0.001384 | 0.001431 |
| mp_split.test | RUN | 0.267345 | 2.155026 | 1.018574 | 0.001358 | 0.001333 | 0.001126 |
| mp_join.test | RUN | 0.207190 | 1.817368 | 0.911951 | 0.001318 | 0.001496 | 0.001322 |
| integral.test | RUN | 0.156483 | 0.804728 | 0.543787 | 0.001602 | 0.001364 | 0.001340 |
| mp_value.test | RUN | 0.010082 | 0.026202 | 0.034963 | 0.000715 | 0.000494 | 0.001376 |
| mp_identity.test | RUN | 0.145471 | 0.737695 | 0.516089 | 0.001362 | 0.001238 | 0.001213 |
| mp_inherit.test | RUN | 0.146140 | 0.514870 | 0.484040 | 0.001432 | 0.001391 | 0.001539 |
| mp_if.test | RUN | 0.149139 | 0.584798 | 0.487166 | 0.001368 | 0.001352 | 0.001324 |
| mp_if_sf.test | RUN | 0.140266 | 0.435770 | 0.430506 | 0.001374 | 0.001453 | 0.001287 |
| mp_eval_if.test | RUN | 0.149624 | 0.639077 | 0.495013 | 0.001395 | 0.001224 | 0.001411 |
| mp_eval_if_sf.test | RUN | 0.142144 | 0.447982 | 0.441111 | 0.001317 | 0.001301 | 0.001334 |
| mp_valid.test | RUN | 0.137650 | 0.456205 | 0.452566 | 0.001307 | 0.001160 | 0.001412 |
| mp_defer.test | RUN | 0.151680 | 0.768255 | 0.549232 | 0.001546 | 0.001343 | 0.001364 |
| mp_quote.test | RUN | 0.153672 | 0.778556 | 0.555329 | 0.001363 | 0.001531 | 0.001351 |
| mp_invoke_q.test | RUN | 0.166696 | 1.031393 | 0.626505 | 0.001387 | 0.001410 | 0.001485 |
| mp_invoke_q_sf.test | RUN | 0.138569 | 0.445857 | 0.437618 | 0.001387 | 0.001336 | 0.001383 |
| mp_quote_trait.test | RUN | 0.152335 | 0.865565 | 0.542881 | 0.001349 | 0.001349 | 0.001334 |
| mp_cond.test | RUN | 0.144364 | 0.522306 | 0.461365 | 0.001250 | 0.001250 | 0.001332 |
| mp_cond_sf.test | RUN | 0.125887 | 0.451031 | 0.446753 | 0.001468 | 0.001549 | 0.001511 |
| mp_not_fn.test | RUN | 0.136499 | 0.456503 | 0.437371 | 0.001516 | 0.001380 | 0.001506 |
| mp_eval_if_not.test | RUN | 0.149016 | 0.640210 | 0.494864 | 0.001310 | 0.001464 | 0.001354 |
| mp_eval_or.test | RUN | 0.142756 | 0.335286 | 0.452176 | 0.001363 | 0.001304 | 0.001322 |
| mp_compose.test | RUN | 0.162846 | 1.064741 | 0.595220 | 0.001261 | 0.001386 | 0.001387 |
| mp_valid_and_true.test | RUN | 0.142619 | 0.540984 | 0.462779 | 0.001417 | 0.001328 | 0.001314 |
| mp_compose_sf.test | COMPILE | 0.037135 | 0.060606 | 0.104022 | — | — | — |
| integer_sequence.test | RUN | 0.177148 | 1.042350 | 0.682186 | 0.001343 | 0.001276 | 0.001382 |
| tuple_for_each.test | RUN | 0.145346 | 0.376993 | 0.477339 | 0.001295 | 0.001266 | 0.001278 |
| tuple_for_each_cx.test | COMPILE | 0.026122 | 0.055399 | 0.082806 | — | — | — |
| tuple_apply.test | RUN | 0.148918 | 0.374340 | 0.495657 | 0.001338 | 0.001345 | 0.001183 |
| tuple_apply_cx.test | COMPILE | 0.039172 | 0.075324 | 0.114543 | — | — | — |
| construct_from_tuple.test | RUN | 0.149566 | 0.408743 | 0.478362 | 0.001312 | 0.001456 | 0.001336 |
| construct_from_tuple_cx.test | COMPILE | 0.041010 | 0.076400 | 0.113426 | — | — | — |
| tuple_transform.test | RUN | 0.235614 | 0.838252 | 0.941444 | 0.001280 | 0.001452 | 0.001338 |
| tuple_transform_2.test | RUN | 0.201650 | 0.605878 | 0.850358 | 0.001434 | 0.001359 | 0.001244 |
| tuple_transform_cx.test | COMPILE | 0.034029 | 0.074652 | 0.108146 | — | — | — |
| mp_set_contains.test | RUN | 0.150419 | 0.544163 | 0.479644 | 0.001334 | 0.001217 | 0.001189 |
| mp_set_push_back.test | RUN | 0.194583 | 1.716539 | 0.829339 | 0.001251 | 0.001354 | 0.001517 |
| mp_set_push_front.test | RUN | 0.255599 | 2.061385 | 0.959456 | 0.001752 | 0.001512 | 0.001245 |
| mp_is_set.test | RUN | 0.148764 | 0.545876 | 0.492940 | 0.001330 | 0.001414 | 0.001458 |
| mp_set_union.test | RUN | 0.180768 | 1.439416 | 0.796236 | 0.001372 | 0.001493 | 0.001371 |
| mp_set_union_sf.test | RUN | 0.140343 | 0.435936 | 0.453566 | 0.001347 | 0.001390 | 0.001277 |
| mp_set_difference.test | RUN | 0.174001 | 1.145534 | 0.676823 | 0.001357 | 0.001522 | 0.001329 |
| mp_set_difference_sf.test | RUN | 0.142805 | 0.444315 | 0.450972 | 0.001326 | 0.001441 | 0.001242 |
| mp_set_intersection.test | RUN | 0.172243 | 1.129397 | 0.646580 | 0.001526 | 0.001330 | 0.001341 |
| mp_set_intersection_sf.test | RUN | 0.142099 | 0.435472 | 0.436300 | 0.001244 | 0.001187 | 0.001139 |
| mp_all.test | RUN | 0.149501 | 0.542474 | 0.483640 | 0.001463 | 0.001608 | 0.001253 |
| mp_all_2.test | RUN | 0.419660 | 1.197938 | 1.080456 | 0.001524 | 0.001230 | 0.001313 |
| mp_and.test | RUN | 0.143407 | 0.534016 | 0.479473 | 0.001526 | 0.001484 | 0.001203 |
| mp_any.test | RUN | 0.147455 | 0.543449 | 0.456189 | 0.001096 | 0.001482 | 0.001407 |
| mp_any_2.test | RUN | 0.415665 | 1.182588 | 1.090616 | 0.001239 | 0.001460 | 0.001229 |
| mp_or.test | RUN | 0.142306 | 0.539740 | 0.479372 | 0.001299 | 0.001228 | 0.001361 |
| mp_same.test | RUN | 0.279207 | 0.914130 | 0.750444 | 0.001353 | 0.001369 | 0.001299 |
| mp_plus.test | RUN | 0.151220 | 0.652095 | 0.526688 | 0.001145 | 0.001177 | 0.001329 |
| mp_less.test | RUN | 0.145269 | 0.539235 | 0.444365 | 0.001412 | 0.001148 | 0.001158 |
| mp_min.test | RUN | 0.139345 | 0.495106 | 0.467649 | 0.001587 | 0.001389 | 0.001272 |
| mp_max.test | RUN | 0.142160 | 0.545700 | 0.485034 | 0.001314 | 0.001294 | 0.001398 |
| mp_similar.test | RUN | 0.143495 | 0.530536 | 0.474329 | 0.001323 | 0.001366 | 0.001126 |
| mp_map_find.test | RUN | 0.170005 | 1.005822 | 0.638241 | 0.001359 | 0.001300 | 0.001389 |
| mp_map_find_2.test | RUN | 0.158549 | 0.383932 | 0.538089 | 0.001374 | 0.001496 | 0.001335 |
| mp_map_find_3.test | RUN | 0.154968 | 0.375520 | 0.533652 | 0.001235 | 0.001123 | 0.001004 |
| mp_map_find_4.test | RUN | 0.148948 | 0.352732 | 0.488652 | 0.001258 | 0.001129 | 0.001099 |
| mp_map_contains.test | RUN | 0.154395 | 0.560087 | 0.496067 | 0.001457 | 0.001366 | 0.001350 |
| mp_map_insert.test | RUN | 0.200687 | 1.936379 | 0.912166 | 0.001528 | 0.001599 | 0.001422 |
| mp_map_replace.test | RUN | 0.272112 | 2.173092 | 1.036984 | 0.001360 | 0.001428 | 0.001345 |
| mp_map_erase.test | RUN | 0.201023 | 1.606940 | 0.850011 | 0.001824 | 0.001435 | 0.001240 |
| mp_map_update.test | RUN | 0.176787 | 1.053397 | 0.667191 | 0.001634 | 0.001464 | 0.001143 |
| mp_map_update_q.test | RUN | 0.175881 | 1.046010 | 0.658483 | 0.001634 | 0.001208 | 0.001097 |
| mp_map_keys.test | RUN | 0.174920 | 0.939868 | 0.640442 | 0.001600 | 0.001379 | 0.001023 |
| mp_is_map.test | RUN | 0.155599 | 0.562092 | 0.508395 | 0.001272 | 0.001216 | 0.001337 |
| mp_bind.test | RUN | 0.198299 | 1.681627 | 0.785527 | 0.001454 | 0.001424 | 0.001540 |
| mp_bind_q.test | RUN | 0.170459 | 1.037140 | 0.635342 | 0.001878 | 0.001347 | 0.001482 |
| mp_bind_front.test | RUN | 0.166920 | 1.150219 | 0.594532 | 0.001161 | 0.001326 | 0.001152 |
| mp_bind_back.test | RUN | 0.162668 | 1.143879 | 0.598556 | 0.001147 | 0.001266 | 0.001164 |
| mp_lambda.test | RUN | 0.393410 | 3.415972 | 1.640671 | 0.001462 | 0.001160 | 0.001136 |
| mpl.test | RUN | 0.340069 | 0.880138 | 1.288513 | 0.001438 | 0.001315 | 0.001443 |
| mpl_list.test | RUN | 0.184415 | 0.661130 | 0.587419 | 0.001399 | 0.001460 | 0.001320 |
| mpl_tuple.test | RUN | 0.183333 | 0.667335 | 0.593607 | 0.001636 | 0.001112 | 0.001214 |
| version.test | RUN | 0.095015 | 0.236284 | 0.304952 | 0.001343 | 0.001265 | 0.001253 |
| mp11_version.test | RUN | 0.116620 | 0.270522 | 0.349393 | 0.001366 | 0.001204 | 0.001225 |
| list_version.test | RUN | 0.096515 | 0.240823 | 0.308999 | 0.001344 | 0.001495 | 0.001230 |
| algorithm_version.test | RUN | 0.111592 | 0.257519 | 0.328497 | 0.001466 | 0.001421 | 0.001365 |
| integral_version.test | RUN | 0.098192 | 0.235179 | 0.298192 | 0.001563 | 0.001166 | 0.001091 |
| utility_version.test | RUN | 0.094721 | 0.239136 | 0.303171 | 0.001482 | 0.001421 | 0.001382 |
| function_version.test | RUN | 0.097840 | 0.242472 | 0.308267 | 0.001382 | 0.001491 | 0.001160 |
| map_version.test | RUN | 0.111743 | 0.256816 | 0.325109 | 0.001644 | 0.001248 | 0.001159 |
| set_version.test | RUN | 0.098893 | 0.245063 | 0.306804 | 0.001455 | 0.001384 | 0.001042 |
| bind_version.test | RUN | 0.110975 | 0.257652 | 0.324911 | 0.001046 | 0.001323 | 0.001363 |
| integer_sequence_version.test | RUN | 0.094439 | 0.237387 | 0.297923 | 0.001070 | 0.001219 | 0.000901 |
| tuple_version.test | RUN | 0.111760 | 0.256786 | 0.297198 | 0.001106 | 0.001300 | 0.000913 |
| mpl_version.test | RUN | 0.077402 | 0.195899 | 0.215898 | 0.001194 | 0.000990 | 0.000855 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.004× | 0.999×, 1.008× | 1.006× |
| clang | 1.100× | 1.097×, 1.103× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46092715613).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000751s | 0.000752s | 0.000736s | byte equality observed |
| bind_version.test | 10 | 0.000739s | 0.000761s | 0.000744s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000769s | 0.000741s | 0.000733s | byte equality observed |
| function_version.test | 10 | 0.000741s | 0.000758s | 0.000711s | byte equality observed |
| integer_sequence.test | 10 | 0.000760s | 0.000747s | 0.000721s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000744s | 0.000742s | 0.000732s | byte equality observed |
| integral.test | 10 | 0.000748s | 0.000756s | 0.000719s | byte equality observed |
| integral_version.test | 10 | 0.000753s | 0.000730s | 0.000745s | byte equality observed |
| list_version.test | 10 | 0.000755s | 0.000737s | 0.000755s | byte equality observed |
| map_version.test | 10 | 0.000747s | 0.000754s | 0.000736s | byte equality observed |
| mp11_version.test | 10 | 0.000752s | 0.000747s | 0.000783s | byte equality observed |
| mp_all.test | 10 | 0.000748s | 0.000762s | 0.000802s | byte equality observed |
| mp_all_2.test | 10 | 0.000759s | 0.000764s | 0.000805s | byte equality observed |
| mp_all_of.test | 10 | 0.000756s | 0.000766s | 0.000803s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000757s | 0.000757s | 0.000813s | byte equality observed |
| mp_and.test | 10 | 0.000748s | 0.000765s | 0.000840s | byte equality observed |
| mp_any.test | 10 | 0.000762s | 0.000751s | 0.000798s | byte equality observed |
| mp_any_2.test | 10 | 0.000749s | 0.000766s | 0.000836s | byte equality observed |
| mp_any_of.test | 10 | 0.000745s | 0.000752s | 0.000817s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000747s | 0.000751s | 0.000811s | byte equality observed |
| mp_append.test | 10 | 0.000768s | 0.000763s | 0.000797s | byte equality observed |
| mp_append_2.test | 10 | 0.000817s | 0.000758s | 0.000806s | byte equality observed |
| mp_append_3.test | 10 | 0.000382s | 0.000344s | 0.000764s | byte equality observed |
| mp_append_sf.test | 10 | 0.000793s | 0.000755s | 0.000805s | byte equality observed |
| mp_apply_q.test | 10 | 0.000832s | 0.000765s | 0.000819s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.000815s | 0.000767s | 0.000808s | byte equality observed |
| mp_assign.test | 10 | 0.000816s | 0.000754s | 0.000822s | byte equality observed |
| mp_assign_2.test | 10 | 0.000368s | 0.000354s | 0.000798s | byte equality observed |
| mp_at.test | 10 | 0.000802s | 0.000759s | 0.000827s | byte equality observed |
| mp_at_2.test | 10 | 0.000370s | 0.000354s | 0.000796s | byte equality observed |
| mp_at_sf.test | 10 | 0.000790s | 0.000824s | 0.000800s | byte equality observed |
| mp_back.test | 10 | 0.000808s | 0.000883s | 0.000829s | byte equality observed |
| mp_back_2.test | 10 | 0.000367s | 0.000374s | 0.000795s | byte equality observed |
| mp_bind.test | 10 | 0.000799s | 0.000835s | 0.000796s | byte equality observed |
| mp_bind_back.test | 10 | 0.000826s | 0.000833s | 0.000836s | byte equality observed |
| mp_bind_front.test | 10 | 0.000795s | 0.000826s | 0.000841s | byte equality observed |
| mp_bind_q.test | 10 | 0.000803s | 0.000869s | 0.000844s | byte equality observed |
| mp_clear.test | 10 | 0.000819s | 0.000859s | 0.000832s | byte equality observed |
| mp_clear_2.test | 10 | 0.000368s | 0.000371s | 0.000814s | byte equality observed |
| mp_compose.test | 10 | 0.000838s | 0.000823s | 0.000840s | byte equality observed |
| mp_cond.test | 10 | 0.000816s | 0.000824s | 0.000816s | byte equality observed |
| mp_cond_sf.test | 10 | 0.000803s | 0.000811s | 0.000798s | byte equality observed |
| mp_contains.test | 10 | 0.000810s | 0.000806s | 0.000827s | byte equality observed |
| mp_copy_if.test | 10 | 0.000811s | 0.000804s | 0.000834s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.000829s | 0.000848s | 0.000823s | byte equality observed |
| mp_count.test | 10 | 0.000817s | 0.000859s | 0.000822s | byte equality observed |
| mp_count_if.test | 10 | 0.000834s | 0.000841s | 0.000829s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000834s | 0.000833s | 0.000826s | byte equality observed |
| mp_defer.test | 10 | 0.000836s | 0.000836s | 0.000820s | byte equality observed |
| mp_drop.test | 10 | 0.000814s | 0.000832s | 0.000803s | byte equality observed |
| mp_drop_2.test | 10 | 0.000374s | 0.000367s | 0.000786s | byte equality observed |
| mp_empty.test | 10 | 0.000810s | 0.000821s | 0.000802s | byte equality observed |
| mp_empty_2.test | 10 | 0.000364s | 0.000369s | 0.000792s | byte equality observed |
| mp_erase.test | 10 | 0.000824s | 0.000821s | 0.000829s | byte equality observed |
| mp_erase_2.test | 10 | 0.000366s | 0.000365s | 0.000822s | byte equality observed |
| mp_eval_if.test | 10 | 0.000819s | 0.000828s | 0.000805s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.000818s | 0.000825s | 0.000811s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.000811s | 0.000863s | 0.000804s | byte equality observed |
| mp_eval_or.test | 10 | 0.000813s | 0.000854s | 0.000805s | byte equality observed |
| mp_fill.test | 10 | 0.000806s | 0.000804s | 0.000804s | byte equality observed |
| mp_fill_2.test | 10 | 0.000369s | 0.000364s | 0.000793s | byte equality observed |
| mp_filter.test | 10 | 0.000811s | 0.000822s | 0.000809s | byte equality observed |
| mp_find.test | 10 | 0.000816s | 0.000849s | 0.000823s | byte equality observed |
| mp_find_if.test | 10 | 0.000801s | 0.000837s | 0.000828s | byte equality observed |
| mp_find_if_q.test | 10 | 0.000814s | 0.000832s | 0.000812s | byte equality observed |
| mp_flatten.test | 10 | 0.000798s | 0.000832s | 0.000788s | byte equality observed |
| mp_fold.test | 10 | 0.000828s | 0.000837s | 0.000809s | byte equality observed |
| mp_fold_q.test | 10 | 0.000810s | 0.000825s | 0.000806s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.000821s | 0.000836s | 0.000829s | byte equality observed |
| mp_for_each.test | 10 | 0.000829s | 0.000817s | 0.000799s | byte equality observed |
| mp_from_sequence.test | 10 | 0.000834s | 0.000818s | 0.000831s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.000834s | 0.000828s | 0.000829s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.000839s | 0.000822s | 0.000821s | byte equality observed |
| mp_front.test | 10 | 0.000812s | 0.000821s | 0.000836s | byte equality observed |
| mp_front_2.test | 10 | 0.000370s | 0.000366s | 0.000784s | byte equality observed |
| mp_identity.test | 10 | 0.000812s | 0.000814s | 0.000799s | byte equality observed |
| mp_if.test | 10 | 0.000856s | 0.000816s | 0.000821s | byte equality observed |
| mp_if_sf.test | 10 | 0.000825s | 0.000818s | 0.000828s | byte equality observed |
| mp_inherit.test | 10 | 0.000795s | 0.000798s | 0.000812s | byte equality observed |
| mp_insert.test | 10 | 0.000820s | 0.000819s | 0.000804s | byte equality observed |
| mp_insert_2.test | 10 | 0.000369s | 0.000367s | 0.000782s | byte equality observed |
| mp_intersperse.test | 10 | 0.000811s | 0.000818s | 0.000809s | byte equality observed |
| mp_invoke_q.test | 10 | 0.000808s | 0.000804s | 0.000829s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.000821s | 0.000824s | 0.000795s | byte equality observed |
| mp_iota.test | 10 | 0.000810s | 0.000857s | 0.000838s | byte equality observed |
| mp_iota_2.test | 10 | 0.000795s | 0.000858s | 0.000848s | byte equality observed |
| mp_is_list.test | 10 | 0.000822s | 0.000868s | 0.000847s | byte equality observed |
| mp_is_map.test | 10 | 0.000813s | 0.000843s | 0.000827s | byte equality observed |
| mp_is_set.test | 10 | 0.000814s | 0.000804s | 0.000808s | byte equality observed |
| mp_is_value_list.test | 10 | 0.000813s | 0.000797s | 0.000820s | byte equality observed |
| mp_iterate.test | 10 | 0.000824s | 0.000817s | 0.000831s | byte equality observed |
| mp_join.test | 10 | 0.000799s | 0.000839s | 0.000832s | byte equality observed |
| mp_lambda.test | 10 | 0.000833s | 0.000827s | 0.000852s | byte equality observed |
| mp_less.test | 10 | 0.000826s | 0.000840s | 0.000799s | byte equality observed |
| mp_list_c.test | 10 | 0.000821s | 0.000818s | 0.000805s | byte equality observed |
| mp_list_v.test | 10 | 0.000367s | 0.000363s | 0.000815s | byte equality observed |
| mp_map_contains.test | 10 | 0.000801s | 0.000799s | 0.000842s | byte equality observed |
| mp_map_erase.test | 10 | 0.000803s | 0.000811s | 0.000833s | byte equality observed |
| mp_map_find.test | 10 | 0.000816s | 0.000793s | 0.000829s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000824s | 0.000816s | 0.000813s | byte equality observed |
| mp_map_find_3.test | 10 | 0.000827s | 0.000786s | 0.000808s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000800s | 0.000812s | 0.000837s | byte equality observed |
| mp_map_insert.test | 10 | 0.000816s | 0.000823s | 0.000835s | byte equality observed |
| mp_map_keys.test | 10 | 0.000819s | 0.000834s | 0.000818s | byte equality observed |
| mp_map_replace.test | 10 | 0.000837s | 0.000825s | 0.000844s | byte equality observed |
| mp_map_update.test | 10 | 0.000820s | 0.000859s | 0.000856s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000826s | 0.000816s | 0.000793s | byte equality observed |
| mp_max.test | 10 | 0.000826s | 0.000810s | 0.000806s | byte equality observed |
| mp_max_element.test | 10 | 0.000817s | 0.000812s | 0.000816s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000368s | 0.000370s | 0.000796s | byte equality observed |
| mp_max_element_q.test | 10 | 0.000801s | 0.000810s | 0.000828s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000368s | 0.000370s | 0.000784s | byte equality observed |
| mp_min.test | 10 | 0.000822s | 0.000830s | 0.000813s | byte equality observed |
| mp_min_element.test | 10 | 0.000809s | 0.000803s | 0.000811s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000366s | 0.000369s | 0.000804s | byte equality observed |
| mp_min_element_q.test | 10 | 0.000793s | 0.000819s | 0.000803s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000369s | 0.000367s | 0.000801s | byte equality observed |
| mp_none_of.test | 10 | 0.000815s | 0.000801s | 0.000808s | byte equality observed |
| mp_none_of_q.test | 10 | 0.000810s | 0.000844s | 0.000796s | byte equality observed |
| mp_not_fn.test | 10 | 0.000802s | 0.000819s | 0.000819s | byte equality observed |
| mp_nth_element.test | 10 | 0.000830s | 0.000837s | 0.000808s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.000839s | 0.000850s | 0.000793s | byte equality observed |
| mp_or.test | 10 | 0.000840s | 0.000828s | 0.000824s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.000801s | 0.000846s | 0.000817s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.000802s | 0.000824s | 0.000811s | byte equality observed |
| mp_partial_sum.test | 10 | 0.000814s | 0.000820s | 0.000821s | byte equality observed |
| mp_partition.test | 10 | 0.000789s | 0.000849s | 0.000794s | byte equality observed |
| mp_partition_q.test | 10 | 0.000815s | 0.000844s | 0.000814s | byte equality observed |
| mp_plus.test | 10 | 0.000784s | 0.000867s | 0.000794s | byte equality observed |
| mp_pop_back.test | 10 | 0.000822s | 0.000813s | 0.000811s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000368s | 0.000367s | 0.000773s | byte equality observed |
| mp_pop_front.test | 10 | 0.000804s | 0.000828s | 0.000801s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000370s | 0.000368s | 0.000824s | byte equality observed |
| mp_power_set.test | 10 | 0.000835s | 0.000825s | 0.000793s | byte equality observed |
| mp_product.test | 10 | 0.000813s | 0.000821s | 0.000834s | byte equality observed |
| mp_push_back.test | 10 | 0.000811s | 0.000809s | 0.000828s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000369s | 0.000365s | 0.000802s | byte equality observed |
| mp_push_front.test | 10 | 0.000803s | 0.000807s | 0.000791s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000371s | 0.000374s | 0.000789s | byte equality observed |
| mp_quote.test | 10 | 0.000807s | 0.000833s | 0.000821s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000815s | 0.000870s | 0.000819s | byte equality observed |
| mp_remove.test | 10 | 0.000806s | 0.000829s | 0.000846s | byte equality observed |
| mp_remove_if.test | 10 | 0.000796s | 0.000838s | 0.000825s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.000804s | 0.000834s | 0.000818s | byte equality observed |
| mp_rename.test | 10 | 0.000814s | 0.000822s | 0.000838s | byte equality observed |
| mp_rename_2.test | 10 | 0.000366s | 0.000368s | 0.000794s | byte equality observed |
| mp_rename_v.test | 10 | 0.000365s | 0.000365s | 0.000789s | byte equality observed |
| mp_repeat.test | 10 | 0.000822s | 0.000815s | 0.000804s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000361s | 0.000372s | 0.000806s | byte equality observed |
| mp_repeat_3.test | 10 | 0.000813s | 0.000784s | 0.000836s | byte equality observed |
| mp_replace.test | 10 | 0.000825s | 0.000822s | 0.000827s | byte equality observed |
| mp_replace_at.test | 10 | 0.000828s | 0.000816s | 0.000814s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.000818s | 0.000833s | 0.000824s | byte equality observed |
| mp_replace_front.test | 10 | 0.000800s | 0.000825s | 0.000806s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000368s | 0.000367s | 0.000800s | byte equality observed |
| mp_replace_if.test | 10 | 0.000826s | 0.000846s | 0.000808s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.000805s | 0.000839s | 0.000810s | byte equality observed |
| mp_replace_second.test | 10 | 0.000825s | 0.000835s | 0.000802s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000367s | 0.000367s | 0.000815s | byte equality observed |
| mp_replace_third.test | 10 | 0.000817s | 0.000822s | 0.000809s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000366s | 0.000367s | 0.000794s | byte equality observed |
| mp_reverse.test | 10 | 0.000818s | 0.000832s | 0.000842s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.000808s | 0.000831s | 0.000844s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000806s | 0.000804s | 0.000828s | byte equality observed |
| mp_rotate_left.test | 10 | 0.000841s | 0.000807s | 0.000846s | byte equality observed |
| mp_rotate_right.test | 10 | 0.000844s | 0.000811s | 0.000847s | byte equality observed |
| mp_same.test | 10 | 0.000821s | 0.000831s | 0.000834s | byte equality observed |
| mp_second.test | 10 | 0.000815s | 0.000837s | 0.000818s | byte equality observed |
| mp_second_2.test | 10 | 0.000364s | 0.000379s | 0.000810s | byte equality observed |
| mp_set_contains.test | 10 | 0.000801s | 0.000848s | 0.000799s | byte equality observed |
| mp_set_difference.test | 10 | 0.000797s | 0.000834s | 0.000816s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000812s | 0.000825s | 0.000824s | byte equality observed |
| mp_set_intersection.test | 10 | 0.000799s | 0.000830s | 0.000806s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000823s | 0.000842s | 0.000826s | byte equality observed |
| mp_set_push_back.test | 10 | 0.000817s | 0.000856s | 0.000838s | byte equality observed |
| mp_set_push_front.test | 10 | 0.000801s | 0.000863s | 0.000798s | byte equality observed |
| mp_set_union.test | 10 | 0.000816s | 0.000839s | 0.000807s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.000813s | 0.000847s | 0.000814s | byte equality observed |
| mp_similar.test | 10 | 0.000825s | 0.000855s | 0.000841s | byte equality observed |
| mp_size.test | 10 | 0.000811s | 0.000827s | 0.000825s | byte equality observed |
| mp_size_2.test | 10 | 0.000364s | 0.000365s | 0.000791s | byte equality observed |
| mp_slice.test | 10 | 0.000828s | 0.000821s | 0.000825s | byte equality observed |
| mp_slice_2.test | 10 | 0.000368s | 0.000371s | 0.000787s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.000841s | 0.000830s | 0.000817s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.000846s | 0.000825s | 0.000822s | byte equality observed |
| mp_sort.test | 10 | 0.000821s | 0.000823s | 0.000799s | byte equality observed |
| mp_sort_q.test | 10 | 0.000815s | 0.000834s | 0.000824s | byte equality observed |
| mp_split.test | 10 | 0.000837s | 0.000829s | 0.000781s | byte equality observed |
| mp_starts_with.test | 10 | 0.000844s | 0.000816s | 0.000807s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.000823s | 0.000830s | 0.000837s | byte equality observed |
| mp_take.test | 10 | 0.000831s | 0.000822s | 0.000813s | byte equality observed |
| mp_take_2.test | 10 | 0.000373s | 0.000368s | 0.000787s | byte equality observed |
| mp_third.test | 10 | 0.000809s | 0.000814s | 0.000799s | byte equality observed |
| mp_third_2.test | 10 | 0.000369s | 0.000366s | 0.000785s | byte equality observed |
| mp_transform.test | 10 | 0.000812s | 0.000795s | 0.000803s | byte equality observed |
| mp_transform_2.test | 10 | 0.000784s | 0.000774s | 0.000778s | byte equality observed |
| mp_transform_front.test | 10 | 0.000792s | 0.000823s | 0.000800s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000369s | 0.000373s | 0.000785s | byte equality observed |
| mp_transform_if.test | 10 | 0.000796s | 0.000838s | 0.000818s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.000822s | 0.000797s | 0.000796s | byte equality observed |
| mp_transform_q.test | 10 | 0.000830s | 0.000821s | 0.000827s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.000803s | 0.000826s | 0.000850s | byte equality observed |
| mp_transform_second.test | 10 | 0.000797s | 0.000804s | 0.000854s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000372s | 0.000369s | 0.000793s | byte equality observed |
| mp_transform_sf.test | 10 | 0.000815s | 0.000836s | 0.000811s | byte equality observed |
| mp_transform_third.test | 10 | 0.000813s | 0.000807s | 0.000833s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000372s | 0.000370s | 0.000825s | byte equality observed |
| mp_unique.test | 10 | 0.000801s | 0.000806s | 0.000805s | byte equality observed |
| mp_unique_if.test | 10 | 0.000811s | 0.000828s | 0.000826s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.000828s | 0.000836s | 0.000803s | byte equality observed |
| mp_valid.test | 10 | 0.000815s | 0.000819s | 0.000818s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.000803s | 0.000844s | 0.000807s | byte equality observed |
| mp_value.test | 10 | 0.000367s | 0.000366s | 0.000787s | byte equality observed |
| mp_with_index.test | 10 | 0.001128s | 0.001087s | 0.001010s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000365s | 0.000373s | 0.000805s | byte equality observed |
| mpl.test | 10 | 0.000840s | 0.000828s | 0.000800s | byte equality observed |
| mpl_list.test | 10 | 0.000805s | 0.000813s | 0.000794s | byte equality observed |
| mpl_tuple.test | 10 | 0.000810s | 0.000840s | 0.000814s | byte equality observed |
| mpl_version.test | 10 | 0.000816s | 0.000801s | 0.000810s | byte equality observed |
| set_version.test | 10 | 0.000837s | 0.000806s | 0.000816s | byte equality observed |
| tuple_apply.test | 10 | 0.000824s | 0.000804s | 0.000785s | byte equality observed |
| tuple_for_each.test | 10 | 0.000805s | 0.000835s | 0.000823s | byte equality observed |
| tuple_transform.test | 10 | 0.000798s | 0.000829s | 0.000819s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000809s | 0.000815s | 0.000835s | byte equality observed |
| tuple_version.test | 10 | 0.000829s | 0.000845s | 0.000837s | byte equality observed |
| utility_version.test | 10 | 0.000822s | 0.000842s | 0.000839s | byte equality observed |
| version.test | 10 | 0.000806s | 0.000794s | 0.000836s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46092715613).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
