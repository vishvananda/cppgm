# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.029107 | 0.061019 | 0.090752 | — | — | — |
| complex_h.test | COMPILE | 0.121466 | 0.259162 | 0.360085 | — | — | — |
| mp_size.test | RUN | 0.137608 | 0.863282 | 0.468036 | 0.001260 | 0.001218 | 0.001235 |
| mp_size_2.test | RUN | 0.012524 | 0.029375 | 0.041325 | 0.000534 | 0.000502 | 0.001159 |
| mp_empty.test | RUN | 0.135503 | 0.537027 | 0.455025 | 0.001256 | 0.001338 | 0.001106 |
| mp_empty_2.test | RUN | 0.012560 | 0.031248 | 0.045030 | 0.000465 | 0.000478 | 0.001140 |
| mp_assign.test | RUN | 0.162407 | 1.141992 | 0.617669 | 0.001322 | 0.001471 | 0.001124 |
| mp_assign_2.test | RUN | 0.012224 | 0.030360 | 0.041490 | 0.000542 | 0.000581 | 0.001183 |
| mp_clear.test | RUN | 0.135980 | 0.490516 | 0.438084 | 0.001137 | 0.001378 | 0.001179 |
| mp_clear_2.test | RUN | 0.012357 | 0.030190 | 0.044616 | 0.000518 | 0.000400 | 0.001173 |
| mp_front.test | RUN | 0.147707 | 0.779715 | 0.512671 | 0.001195 | 0.001384 | 0.001207 |
| mp_front_2.test | RUN | 0.013684 | 0.029424 | 0.044842 | 0.000498 | 0.000533 | 0.001114 |
| mp_pop_front.test | RUN | 0.137187 | 0.813740 | 0.502453 | 0.001151 | 0.001241 | 0.001271 |
| mp_pop_front_2.test | RUN | 0.012422 | 0.030436 | 0.042071 | 0.000430 | 0.000564 | 0.001189 |
| mp_second.test | RUN | 0.143348 | 0.508043 | 0.484833 | 0.001029 | 0.001469 | 0.001173 |
| mp_second_2.test | RUN | 0.012873 | 0.030901 | 0.043794 | 0.000485 | 0.000540 | 0.001214 |
| mp_third.test | RUN | 0.135803 | 0.475676 | 0.462000 | 0.001248 | 0.001020 | 0.001179 |
| mp_third_2.test | RUN | 0.012953 | 0.029500 | 0.044970 | 0.000475 | 0.000476 | 0.001226 |
| mp_push_front.test | RUN | 0.185231 | 1.742219 | 0.856371 | 0.001281 | 0.001400 | 0.001304 |
| mp_push_front_2.test | RUN | 0.012693 | 0.031002 | 0.041686 | 0.000481 | 0.000465 | 0.001135 |
| mp_push_back.test | RUN | 0.184759 | 1.756906 | 0.854681 | 0.001239 | 0.001210 | 0.001171 |
| mp_push_back_2.test | RUN | 0.012449 | 0.031258 | 0.044159 | 0.000492 | 0.000498 | 0.001315 |
| mp_rename.test | RUN | 0.173946 | 1.588789 | 0.712306 | 0.001201 | 0.001321 | 0.001177 |
| mp_rename_2.test | RUN | 0.012559 | 0.030636 | 0.045012 | 0.000577 | 0.000586 | 0.001270 |
| mp_append.test | RUN | 0.183608 | 1.819283 | 0.790071 | 0.001338 | 0.001208 | 0.001133 |
| mp_append_2.test | RUN | 0.420095 | 4.104315 | 1.081942 | 0.001310 | 0.001325 | 0.001435 |
| mp_append_3.test | RUN | 0.010871 | 0.031180 | 0.045293 | 0.000514 | 0.000531 | 0.001126 |
| mp_append_sf.test | RUN | 0.127772 | 0.431725 | 0.428583 | 0.001394 | 0.001050 | 0.001155 |
| mp_replace_front.test | RUN | 0.169195 | 1.297541 | 0.637518 | 0.001191 | 0.001698 | 0.001508 |
| mp_replace_front_2.test | RUN | 0.012700 | 0.031511 | 0.046449 | 0.000425 | 0.000480 | 0.001316 |
| mp_replace_second.test | RUN | 0.162798 | 0.820182 | 0.605374 | 0.001109 | 0.001246 | 0.001350 |
| mp_replace_second_2.test | RUN | 0.013725 | 0.030500 | 0.045608 | 0.000496 | 0.000575 | 0.001097 |
| mp_replace_third.test | RUN | 0.152668 | 0.675201 | 0.547502 | 0.001225 | 0.001396 | 0.001173 |
| mp_replace_third_2.test | RUN | 0.012034 | 0.029445 | 0.046073 | 0.000515 | 0.000478 | 0.001194 |
| mp_apply_q.test | RUN | 0.169682 | 1.592096 | 0.722765 | 0.001160 | 0.001310 | 0.001143 |
| mp_apply_q_sf.test | RUN | 0.136197 | 0.455157 | 0.433498 | 0.001202 | 0.001424 | 0.001125 |
| mp_is_list.test | RUN | 0.138143 | 0.532795 | 0.450111 | 0.001150 | 0.001336 | 0.001141 |
| mp_list_c.test | RUN | 0.141547 | 0.650201 | 0.497780 | 0.001452 | 0.001318 | 0.001017 |
| mp_transform_front.test | RUN | 0.162644 | 1.297435 | 0.629541 | 0.001132 | 0.001682 | 0.001180 |
| mp_transform_front_2.test | RUN | 0.012888 | 0.030877 | 0.043901 | 0.000504 | 0.000508 | 0.001192 |
| mp_transform_second.test | RUN | 0.153555 | 1.110048 | 0.585285 | 0.001182 | 0.001340 | 0.001217 |
| mp_transform_second_2.test | RUN | 0.012692 | 0.031037 | 0.041505 | 0.000502 | 0.000555 | 0.001118 |
| mp_transform_third.test | RUN | 0.144134 | 0.846933 | 0.511284 | 0.001348 | 0.001251 | 0.001171 |
| mp_transform_third_2.test | RUN | 0.013076 | 0.028696 | 0.044561 | 0.000484 | 0.000493 | 0.001198 |
| mp_list_v.test | RUN | 0.012939 | 0.029702 | 0.043708 | 0.000396 | 0.000566 | 0.001221 |
| mp_rename_v.test | RUN | 0.012415 | 0.028965 | 0.044081 | 0.000462 | 0.000639 | 0.001091 |
| mp_is_value_list.test | RUN | 0.130867 | 0.330709 | 0.415977 | 0.001251 | 0.001467 | 0.001204 |
| mp_transform.test | RUN | 0.342235 | 2.773271 | 1.350656 | 0.001242 | 0.001163 | 0.001391 |
| mp_transform_2.test | RUN | 0.128561 | 0.290809 | 0.386234 | 0.001142 | 0.001416 | 0.001320 |
| mp_transform_q.test | RUN | 0.328201 | 2.630098 | 1.321837 | 0.001247 | 0.001333 | 0.001355 |
| mp_transform_q_2.test | RUN | 0.337380 | 0.833106 | 1.674504 | 0.001175 | 0.001277 | 0.001039 |
| mp_transform_sf.test | RUN | 0.140692 | 0.452469 | 0.465073 | 0.001269 | 0.001237 | 0.001205 |
| mp_transform_if.test | RUN | 0.179894 | 1.304994 | 0.707512 | 0.001295 | 0.001179 | 0.001329 |
| mp_transform_if_q.test | RUN | 0.181825 | 1.300730 | 0.714093 | 0.001217 | 0.001246 | 0.001098 |
| mp_filter.test | RUN | 0.155817 | 0.762399 | 0.522528 | 0.001272 | 0.001593 | 0.001252 |
| mp_fill.test | RUN | 0.150003 | 0.573934 | 0.500405 | 0.001251 | 0.001496 | 0.001219 |
| mp_fill_2.test | RUN | 0.022868 | 0.046967 | 0.069926 | 0.000515 | 0.000531 | 0.001124 |
| mp_count.test | RUN | 0.283500 | 1.406456 | 0.793526 | 0.001529 | 0.001289 | 0.001147 |
| mp_count_if.test | RUN | 0.291284 | 1.442800 | 0.855744 | 0.000992 | 0.001246 | 0.001233 |
| mp_count_if_q.test | RUN | 0.154211 | 0.927995 | 0.501126 | 0.001292 | 0.001160 | 0.001177 |
| mp_contains.test | RUN | 0.143966 | 0.553274 | 0.465606 | 0.001155 | 0.001280 | 0.001115 |
| mp_starts_with.test | RUN | 0.146664 | 0.546754 | 0.477176 | 0.001161 | 0.001557 | 0.001155 |
| mp_starts_with_sf.test | RUN | 0.139012 | 0.467117 | 0.443603 | 0.001269 | 0.001414 | 0.001175 |
| mp_repeat.test | RUN | 0.213579 | 2.339683 | 0.903866 | 0.001314 | 0.001206 | 0.001264 |
| mp_repeat_2.test | RUN | 0.021773 | 0.046073 | 0.070137 | 0.000479 | 0.000596 | 0.001125 |
| mp_repeat_3.test | RUN | 0.183528 | 0.299064 | 0.435523 | 0.001264 | 0.001389 | 0.001172 |
| mp_product.test | RUN | 0.164846 | 1.405698 | 0.668721 | 0.001199 | 0.001480 | 0.001142 |
| mp_drop.test | RUN | 0.181718 | 1.750615 | 0.735366 | 0.001214 | 0.001410 | 0.001220 |
| mp_drop_2.test | RUN | 0.021913 | 0.048418 | 0.071323 | 0.000503 | 0.000635 | 0.001212 |
| mp_iota.test | RUN | 0.174258 | 1.485744 | 0.669465 | 0.001177 | 0.001399 | 0.001345 |
| mp_iota_2.test | RUN | 0.189589 | 1.780225 | 0.751534 | 0.001164 | 0.001492 | 0.001248 |
| mp_at.test | RUN | 0.146686 | 0.757271 | 0.543451 | 0.001135 | 0.001400 | 0.001287 |
| mp_at_2.test | RUN | 0.022004 | 0.046242 | 0.072887 | 0.000474 | 0.000606 | 0.001201 |
| mp_at_sf.test | RUN | 0.142064 | 0.467810 | 0.459197 | 0.001175 | 0.001479 | 0.001131 |
| mp_take.test | RUN | 0.247532 | 2.317022 | 0.911596 | 0.001392 | 0.001492 | 0.001312 |
| mp_take_2.test | RUN | 0.022217 | 0.047918 | 0.070767 | 0.000593 | 0.000588 | 0.001274 |
| mp_slice.test | RUN | 0.295412 | 2.351672 | 1.168985 | 0.001270 | 0.001286 | 0.001179 |
| mp_slice_2.test | RUN | 0.022036 | 0.047742 | 0.072600 | 0.000471 | 0.000562 | 0.001304 |
| mp_replace.test | RUN | 0.182679 | 1.170720 | 0.734066 | 0.001268 | 0.001285 | 0.001288 |
| mp_replace_if.test | RUN | 0.170177 | 1.022408 | 0.688790 | 0.001203 | 0.001191 | 0.001369 |
| mp_replace_if_q.test | RUN | 0.169990 | 1.030822 | 0.683048 | 0.001166 | 0.001534 | 0.001358 |
| mp_copy_if.test | RUN | 0.177990 | 1.457289 | 0.650482 | 0.001267 | 0.001434 | 0.001235 |
| mp_copy_if_q.test | RUN | 0.178286 | 1.451572 | 0.652771 | 0.001268 | 0.001267 | 0.001068 |
| mp_remove.test | RUN | 0.169214 | 0.981221 | 0.661955 | 0.001184 | 0.001426 | 0.001259 |
| mp_remove_if.test | RUN | 0.174289 | 1.555655 | 0.693705 | 0.001273 | 0.001493 | 0.001422 |
| mp_remove_if_q.test | RUN | 0.185378 | 1.537488 | 0.699184 | 0.001206 | 0.001184 | 0.001398 |
| mp_partition.test | RUN | 0.179885 | 1.442486 | 0.743217 | 0.001263 | 0.001539 | 0.001423 |
| mp_partition_q.test | RUN | 0.179711 | 1.466719 | 0.751584 | 0.001336 | 0.001426 | 0.001210 |
| mp_sort.test | RUN | 0.167061 | 1.044936 | 0.647305 | 0.001219 | 0.001444 | 0.001347 |
| mp_sort_q.test | RUN | 0.163993 | 1.031369 | 0.648499 | 0.001300 | 0.001143 | 0.001351 |
| mp_find.test | RUN | 0.169271 | 1.105583 | 0.564275 | 0.001306 | 0.001145 | 0.001330 |
| mp_find_if.test | RUN | 0.156657 | 1.012279 | 0.530160 | 0.001225 | 0.001367 | 0.001252 |
| mp_find_if_q.test | RUN | 0.171386 | 1.147453 | 0.657357 | 0.001197 | 0.001519 | 0.001344 |
| mp_reverse.test | RUN | 0.342564 | 3.083446 | 1.298123 | 0.001301 | 0.001393 | 0.001266 |
| mp_fold.test | RUN | 0.628051 | 2.386627 | 3.340841 | 0.001431 | 0.001310 | 0.001215 |
| mp_fold_q.test | RUN | 0.160701 | 1.029325 | 0.610883 | 0.001320 | 0.001410 | 0.001356 |
| mp_fold_q_sf.test | RUN | 0.143904 | 0.465481 | 0.465337 | 0.001300 | 0.001360 | 0.001416 |
| mp_reverse_fold.test | RUN | 0.296231 | 2.281881 | 0.922745 | 0.001184 | 0.001266 | 0.001356 |
| mp_reverse_fold_q.test | RUN | 0.165656 | 1.252552 | 0.668370 | 0.001556 | 0.001430 | 0.001154 |
| mp_unique.test | RUN | 0.162849 | 1.125332 | 0.643840 | 0.001188 | 0.001407 | 0.001239 |
| mp_unique_if.test | RUN | 0.312766 | 2.373004 | 1.024646 | 0.001164 | 0.001403 | 0.001286 |
| mp_unique_if_q.test | RUN | 0.269171 | 2.355258 | 0.841761 | 0.001136 | 0.001307 | 0.001240 |
| mp_all_of.test | RUN | 0.401030 | 1.278180 | 1.080630 | 0.001359 | 0.001574 | 0.001361 |
| mp_all_of_q.test | RUN | 0.140562 | 0.551222 | 0.463106 | 0.001263 | 0.001404 | 0.001294 |
| mp_any_of.test | RUN | 0.401489 | 1.317624 | 1.038290 | 0.001246 | 0.001405 | 0.001214 |
| mp_any_of_q.test | RUN | 0.142389 | 0.546782 | 0.486209 | 0.001395 | 0.001364 | 0.001358 |
| mp_none_of.test | RUN | 0.400667 | 1.311499 | 1.030536 | 0.001186 | 0.001372 | 0.001246 |
| mp_none_of_q.test | RUN | 0.142513 | 0.549886 | 0.481860 | 0.001500 | 0.001375 | 0.001377 |
| mp_replace_at.test | RUN | 0.180605 | 1.127962 | 0.732135 | 0.001348 | 0.001353 | 0.001497 |
| mp_replace_at_c.test | RUN | 0.180154 | 1.121938 | 0.734848 | 0.001222 | 0.001218 | 0.001178 |
| mp_for_each.test | RUN | 0.168780 | 0.731470 | 0.736333 | 0.001244 | 0.001219 | 0.001092 |
| mp_insert.test | RUN | 0.280599 | 2.310722 | 1.068919 | 0.001354 | 0.001246 | 0.001406 |
| mp_insert_2.test | RUN | 0.022948 | 0.047817 | 0.069760 | 0.000473 | 0.000470 | 0.001044 |
| mp_erase.test | RUN | 0.307483 | 2.467238 | 1.222795 | 0.001325 | 0.001333 | 0.001146 |
| mp_erase_2.test | RUN | 0.023240 | 0.046172 | 0.073131 | 0.000533 | 0.000514 | 0.001240 |
| mp_with_index.test | RUN | 0.405680 | 4.934810 | 2.684118 | 0.001777 | 0.001589 | 0.001420 |
| mp_with_index_cx.test | RUN | 0.003310 | 0.014552 | 0.022964 | 0.000497 | 0.000528 | 0.001312 |
| mp_from_sequence.test | RUN | 0.177994 | 1.275892 | 0.691414 | 0.001342 | 0.001229 | 0.001273 |
| mp_from_sequence_2.test | RUN | 0.191878 | 1.491255 | 0.770310 | 0.001318 | 0.001408 | 0.001374 |
| mp_from_sequence_3.test | RUN | 0.155045 | 0.655984 | 0.538768 | 0.001374 | 0.001442 | 0.001165 |
| mp_min_element.test | RUN | 0.147382 | 0.591654 | 0.496482 | 0.001205 | 0.001355 | 0.001232 |
| mp_min_element_2.test | RUN | 0.023150 | 0.048481 | 0.071929 | 0.000488 | 0.000613 | 0.001317 |
| mp_min_element_q.test | RUN | 0.148077 | 0.594465 | 0.491743 | 0.001370 | 0.001199 | 0.001140 |
| mp_min_element_q_2.test | RUN | 0.021868 | 0.047527 | 0.071432 | 0.000511 | 0.000488 | 0.001291 |
| mp_max_element.test | RUN | 0.143512 | 0.593631 | 0.474883 | 0.001168 | 0.001342 | 0.001212 |
| mp_max_element_2.test | RUN | 0.022501 | 0.045248 | 0.070861 | 0.000472 | 0.000462 | 0.001230 |
| mp_max_element_q.test | RUN | 0.146669 | 0.599101 | 0.492060 | 0.001211 | 0.001340 | 0.001200 |
| mp_max_element_q_2.test | RUN | 0.022981 | 0.045178 | 0.067046 | 0.000570 | 0.000544 | 0.001181 |
| mp_nth_element.test | RUN | 0.162198 | 0.850511 | 0.610711 | 0.001383 | 0.001427 | 0.001177 |
| mp_nth_element_q.test | RUN | 0.159905 | 0.829720 | 0.607072 | 0.001368 | 0.001270 | 0.001001 |
| mp_back.test | RUN | 0.162484 | 0.697636 | 0.573025 | 0.001411 | 0.001320 | 0.001203 |
| mp_back_2.test | RUN | 0.023317 | 0.047422 | 0.073001 | 0.000496 | 0.000527 | 0.001270 |
| mp_pop_back.test | RUN | 0.476536 | 4.709934 | 1.250778 | 0.001306 | 0.001444 | 0.001260 |
| mp_pop_back_2.test | RUN | 0.023323 | 0.044919 | 0.071468 | 0.000506 | 0.000525 | 0.001210 |
| mp_flatten.test | RUN | 0.185336 | 1.660578 | 0.820429 | 0.001238 | 0.001369 | 0.001296 |
| mp_rotate_left.test | RUN | 0.188391 | 1.770502 | 0.800326 | 0.001173 | 0.001302 | 0.001379 |
| mp_rotate_right.test | RUN | 0.193472 | 1.782009 | 0.819720 | 0.001315 | 0.001412 | 0.001400 |
| mp_power_set.test | RUN | 0.192653 | 1.724652 | 0.820749 | 0.001284 | 0.001453 | 0.001148 |
| mp_partial_sum.test | RUN | 0.259195 | 2.300223 | 0.935503 | 0.001242 | 0.001319 | 0.001366 |
| mp_iterate.test | RUN | 0.170438 | 0.679324 | 0.643494 | 0.001430 | 0.001327 | 0.001104 |
| mp_pairwise_fold.test | RUN | 0.189931 | 1.580960 | 0.841499 | 0.001167 | 0.001182 | 0.001261 |
| mp_pairwise_fold_q.test | RUN | 0.148821 | 0.447248 | 0.470654 | 0.001401 | 0.001323 | 0.001289 |
| mp_sliding_fold.test | RUN | 0.383364 | 2.999747 | 1.568833 | 0.001386 | 0.001276 | 0.001212 |
| mp_sliding_fold_q.test | RUN | 0.377525 | 3.025839 | 1.551122 | 0.001438 | 0.001380 | 0.001137 |
| mp_intersperse.test | RUN | 0.178801 | 1.103288 | 0.718548 | 0.001291 | 0.001413 | 0.001317 |
| mp_split.test | RUN | 0.267488 | 2.162291 | 0.995417 | 0.001129 | 0.001367 | 0.001171 |
| mp_join.test | RUN | 0.202674 | 1.823727 | 0.900816 | 0.001097 | 0.001335 | 0.001240 |
| integral.test | RUN | 0.150419 | 0.796753 | 0.548055 | 0.001275 | 0.001271 | 0.001320 |
| mp_value.test | RUN | 0.009894 | 0.025096 | 0.035422 | 0.000571 | 0.000520 | 0.001320 |
| mp_identity.test | RUN | 0.145227 | 0.727299 | 0.504469 | 0.001161 | 0.001506 | 0.001311 |
| mp_inherit.test | RUN | 0.143246 | 0.510604 | 0.478458 | 0.001350 | 0.001446 | 0.001345 |
| mp_if.test | RUN | 0.140591 | 0.586184 | 0.477822 | 0.001287 | 0.001243 | 0.001223 |
| mp_if_sf.test | RUN | 0.134649 | 0.443100 | 0.431371 | 0.001209 | 0.001290 | 0.001156 |
| mp_eval_if.test | RUN | 0.144612 | 0.631672 | 0.480607 | 0.001172 | 0.001196 | 0.001200 |
| mp_eval_if_sf.test | RUN | 0.132665 | 0.445154 | 0.436267 | 0.001453 | 0.001332 | 0.001263 |
| mp_valid.test | RUN | 0.134395 | 0.450165 | 0.443192 | 0.001167 | 0.001259 | 0.001216 |
| mp_defer.test | RUN | 0.147626 | 0.766532 | 0.532893 | 0.001349 | 0.001279 | 0.001311 |
| mp_quote.test | RUN | 0.150185 | 0.773675 | 0.549397 | 0.001219 | 0.001298 | 0.001398 |
| mp_invoke_q.test | RUN | 0.160725 | 1.028099 | 0.615806 | 0.001084 | 0.001397 | 0.001255 |
| mp_invoke_q_sf.test | RUN | 0.129002 | 0.448096 | 0.428085 | 0.001202 | 0.001362 | 0.001315 |
| mp_quote_trait.test | RUN | 0.152623 | 0.861592 | 0.522454 | 0.001402 | 0.001254 | 0.001330 |
| mp_cond.test | RUN | 0.137312 | 0.513206 | 0.463573 | 0.001372 | 0.001260 | 0.001165 |
| mp_cond_sf.test | RUN | 0.129525 | 0.447446 | 0.440582 | 0.001204 | 0.001374 | 0.001273 |
| mp_not_fn.test | RUN | 0.130538 | 0.445695 | 0.425257 | 0.001200 | 0.001404 | 0.001117 |
| mp_eval_if_not.test | RUN | 0.139133 | 0.630684 | 0.484854 | 0.001291 | 0.001325 | 0.001245 |
| mp_eval_or.test | RUN | 0.116811 | 0.334475 | 0.442816 | 0.001326 | 0.001386 | 0.001080 |
| mp_compose.test | RUN | 0.155147 | 1.052933 | 0.592497 | 0.001327 | 0.001272 | 0.001273 |
| mp_valid_and_true.test | RUN | 0.136836 | 0.536830 | 0.450704 | 0.001030 | 0.001231 | 0.001173 |
| mp_compose_sf.test | COMPILE | 0.031197 | 0.061598 | 0.105423 | — | — | — |
| integer_sequence.test | RUN | 0.166164 | 1.036855 | 0.672904 | 0.001178 | 0.001292 | 0.001348 |
| tuple_for_each.test | RUN | 0.133921 | 0.371712 | 0.461883 | 0.001302 | 0.001134 | 0.001395 |
| tuple_for_each_cx.test | COMPILE | 0.025908 | 0.054628 | 0.081045 | — | — | — |
| tuple_apply.test | RUN | 0.139106 | 0.365783 | 0.482323 | 0.001277 | 0.001213 | 0.001181 |
| tuple_apply_cx.test | COMPILE | 0.037969 | 0.076531 | 0.113096 | — | — | — |
| construct_from_tuple.test | RUN | 0.143045 | 0.400641 | 0.477175 | 0.001234 | 0.001273 | 0.001327 |
| construct_from_tuple_cx.test | COMPILE | 0.037191 | 0.075725 | 0.106161 | — | — | — |
| tuple_transform.test | RUN | 0.222609 | 0.814198 | 0.943475 | 0.001403 | 0.001287 | 0.001165 |
| tuple_transform_2.test | RUN | 0.196427 | 0.589137 | 0.843277 | 0.001341 | 0.001282 | 0.001113 |
| tuple_transform_cx.test | COMPILE | 0.033222 | 0.073029 | 0.110774 | — | — | — |
| mp_set_contains.test | RUN | 0.140696 | 0.531773 | 0.471001 | 0.001286 | 0.001307 | 0.001290 |
| mp_set_push_back.test | RUN | 0.189711 | 1.687675 | 0.833206 | 0.001413 | 0.001370 | 0.001199 |
| mp_set_push_front.test | RUN | 0.252723 | 2.041255 | 0.943455 | 0.001306 | 0.001453 | 0.001223 |
| mp_is_set.test | RUN | 0.143789 | 0.532800 | 0.484478 | 0.001518 | 0.001353 | 0.001394 |
| mp_set_union.test | RUN | 0.181821 | 1.432979 | 0.787026 | 0.001343 | 0.001420 | 0.001200 |
| mp_set_union_sf.test | RUN | 0.131990 | 0.428572 | 0.445321 | 0.001208 | 0.001244 | 0.001074 |
| mp_set_difference.test | RUN | 0.168244 | 1.123696 | 0.667971 | 0.001202 | 0.001237 | 0.001361 |
| mp_set_difference_sf.test | RUN | 0.138546 | 0.425129 | 0.447334 | 0.001232 | 0.001484 | 0.001089 |
| mp_set_intersection.test | RUN | 0.167593 | 1.115726 | 0.640769 | 0.001360 | 0.001212 | 0.001223 |
| mp_set_intersection_sf.test | RUN | 0.138509 | 0.437159 | 0.442000 | 0.001192 | 0.001250 | 0.001258 |
| mp_all.test | RUN | 0.143421 | 0.534207 | 0.475508 | 0.001452 | 0.001310 | 0.001236 |
| mp_all_2.test | RUN | 0.409556 | 1.176731 | 1.080341 | 0.001258 | 0.001241 | 0.001216 |
| mp_and.test | RUN | 0.138346 | 0.525149 | 0.466399 | 0.001342 | 0.001312 | 0.001295 |
| mp_any.test | RUN | 0.138943 | 0.535633 | 0.476898 | 0.001405 | 0.001414 | 0.001271 |
| mp_any_2.test | RUN | 0.407690 | 1.175460 | 1.047497 | 0.001321 | 0.001315 | 0.001208 |
| mp_or.test | RUN | 0.138886 | 0.522295 | 0.467508 | 0.001193 | 0.001199 | 0.001365 |
| mp_same.test | RUN | 0.277277 | 0.892300 | 0.698494 | 0.001214 | 0.001242 | 0.001255 |
| mp_plus.test | RUN | 0.147512 | 0.634299 | 0.542432 | 0.001237 | 0.001146 | 0.001201 |
| mp_less.test | RUN | 0.144423 | 0.537322 | 0.479196 | 0.001195 | 0.001301 | 0.001174 |
| mp_min.test | RUN | 0.137384 | 0.484515 | 0.460330 | 0.001211 | 0.001400 | 0.001139 |
| mp_max.test | RUN | 0.146313 | 0.543743 | 0.474271 | 0.001223 | 0.001174 | 0.001159 |
| mp_similar.test | RUN | 0.138129 | 0.530736 | 0.472396 | 0.001228 | 0.001307 | 0.001182 |
| mp_map_find.test | RUN | 0.166693 | 0.981910 | 0.632820 | 0.001344 | 0.001346 | 0.001325 |
| mp_map_find_2.test | RUN | 0.151040 | 0.378310 | 0.532953 | 0.001215 | 0.001356 | 0.001140 |
| mp_map_find_3.test | RUN | 0.149438 | 0.363095 | 0.532631 | 0.001147 | 0.001193 | 0.001128 |
| mp_map_find_4.test | RUN | 0.140315 | 0.341637 | 0.481711 | 0.001307 | 0.001193 | 0.001333 |
| mp_map_contains.test | RUN | 0.147494 | 0.545152 | 0.488682 | 0.001327 | 0.001283 | 0.001295 |
| mp_map_insert.test | RUN | 0.197318 | 1.894466 | 0.893847 | 0.001253 | 0.001220 | 0.001218 |
| mp_map_replace.test | RUN | 0.267852 | 2.136977 | 1.046274 | 0.001267 | 0.001287 | 0.001170 |
| mp_map_erase.test | RUN | 0.195422 | 1.580270 | 0.854317 | 0.001314 | 0.001367 | 0.001440 |
| mp_map_update.test | RUN | 0.167873 | 1.020988 | 0.656894 | 0.001441 | 0.001393 | 0.001304 |
| mp_map_update_q.test | RUN | 0.166309 | 1.016073 | 0.657058 | 0.001457 | 0.001243 | 0.001295 |
| mp_map_keys.test | RUN | 0.165941 | 0.908079 | 0.627681 | 0.001316 | 0.001295 | 0.001204 |
| mp_is_map.test | RUN | 0.145668 | 0.548556 | 0.508952 | 0.001176 | 0.001238 | 0.001336 |
| mp_bind.test | RUN | 0.188948 | 1.669739 | 0.775098 | 0.001325 | 0.001243 | 0.001262 |
| mp_bind_q.test | RUN | 0.169387 | 1.019594 | 0.614761 | 0.001188 | 0.001378 | 0.001191 |
| mp_bind_front.test | RUN | 0.158092 | 1.108866 | 0.596272 | 0.001257 | 0.001276 | 0.001319 |
| mp_bind_back.test | RUN | 0.158692 | 1.106376 | 0.594219 | 0.001319 | 0.001412 | 0.001220 |
| mp_lambda.test | RUN | 0.386987 | 3.359348 | 1.620799 | 0.001288 | 0.000929 | 0.001131 |
| mpl.test | RUN | 0.327669 | 0.861363 | 1.277117 | 0.001102 | 0.001227 | 0.001235 |
| mpl_list.test | RUN | 0.178481 | 0.656180 | 0.593505 | 0.001402 | 0.001462 | 0.001346 |
| mpl_tuple.test | RUN | 0.177749 | 0.653520 | 0.574161 | 0.001178 | 0.001154 | 0.001144 |
| version.test | RUN | 0.089269 | 0.232874 | 0.294371 | 0.001559 | 0.001406 | 0.001285 |
| mp11_version.test | RUN | 0.111442 | 0.265515 | 0.352012 | 0.001219 | 0.001262 | 0.001189 |
| list_version.test | RUN | 0.092843 | 0.236567 | 0.305751 | 0.001130 | 0.001169 | 0.001172 |
| algorithm_version.test | RUN | 0.105488 | 0.252680 | 0.323058 | 0.001192 | 0.001302 | 0.001074 |
| integral_version.test | RUN | 0.088862 | 0.233969 | 0.291622 | 0.001280 | 0.001254 | 0.001314 |
| utility_version.test | RUN | 0.090470 | 0.236659 | 0.294517 | 0.001121 | 0.001154 | 0.001157 |
| function_version.test | RUN | 0.095159 | 0.241625 | 0.310839 | 0.001183 | 0.001240 | 0.001403 |
| map_version.test | RUN | 0.107489 | 0.251272 | 0.333817 | 0.001218 | 0.001041 | 0.001365 |
| set_version.test | RUN | 0.095042 | 0.237723 | 0.306817 | 0.001224 | 0.000901 | 0.001225 |
| bind_version.test | RUN | 0.104851 | 0.255205 | 0.325559 | 0.001103 | 0.001429 | 0.001223 |
| integer_sequence_version.test | RUN | 0.090314 | 0.233131 | 0.210020 | 0.001153 | 0.001231 | 0.000913 |
| tuple_version.test | RUN | 0.106203 | 0.257381 | 0.303235 | 0.000938 | 0.001145 | 0.000907 |
| mpl_version.test | RUN | 0.080571 | 0.173314 | 0.317783 | 0.000966 | 0.000927 | 0.000834 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 1.001×, 1.002× | 0.992× |
| clang | 1.091× | 1.090×, 1.092× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45697047144).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000736s | 0.000757s | 0.000732s | byte equality observed |
| bind_version.test | 10 | 0.000745s | 0.000740s | 0.000740s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000762s | 0.000755s | 0.000745s | byte equality observed |
| function_version.test | 10 | 0.000751s | 0.000738s | 0.000758s | byte equality observed |
| integer_sequence.test | 10 | 0.000759s | 0.000740s | 0.000742s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000749s | 0.000739s | 0.000744s | byte equality observed |
| integral.test | 10 | 0.000747s | 0.000755s | 0.000759s | byte equality observed |
| integral_version.test | 10 | 0.000748s | 0.000720s | 0.000747s | byte equality observed |
| list_version.test | 10 | 0.000749s | 0.000718s | 0.000764s | byte equality observed |
| map_version.test | 10 | 0.000750s | 0.000748s | 0.000772s | byte equality observed |
| mp11_version.test | 10 | 0.000742s | 0.000745s | 0.000797s | byte equality observed |
| mp_all.test | 10 | 0.000732s | 0.000743s | 0.000833s | byte equality observed |
| mp_all_2.test | 10 | 0.000742s | 0.000748s | 0.000800s | byte equality observed |
| mp_all_of.test | 10 | 0.000753s | 0.000744s | 0.000857s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000745s | 0.000755s | 0.000855s | byte equality observed |
| mp_and.test | 10 | 0.000737s | 0.000753s | 0.000841s | byte equality observed |
| mp_any.test | 10 | 0.000748s | 0.000766s | 0.000807s | byte equality observed |
| mp_any_2.test | 10 | 0.000744s | 0.000758s | 0.000801s | byte equality observed |
| mp_any_of.test | 10 | 0.000741s | 0.000752s | 0.000812s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000756s | 0.000757s | 0.000803s | byte equality observed |
| mp_append.test | 10 | 0.000798s | 0.000760s | 0.000846s | byte equality observed |
| mp_append_2.test | 10 | 0.000822s | 0.000759s | 0.000808s | byte equality observed |
| mp_append_3.test | 10 | 0.000367s | 0.000335s | 0.000807s | byte equality observed |
| mp_append_sf.test | 10 | 0.000805s | 0.000757s | 0.000800s | byte equality observed |
| mp_apply_q.test | 10 | 0.000816s | 0.000762s | 0.000809s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.000802s | 0.000758s | 0.000797s | byte equality observed |
| mp_assign.test | 10 | 0.000800s | 0.000743s | 0.000811s | byte equality observed |
| mp_assign_2.test | 10 | 0.000372s | 0.000349s | 0.000780s | byte equality observed |
| mp_at.test | 10 | 0.000794s | 0.000768s | 0.000801s | byte equality observed |
| mp_at_2.test | 10 | 0.000368s | 0.000354s | 0.000758s | byte equality observed |
| mp_at_sf.test | 10 | 0.000815s | 0.000802s | 0.000824s | byte equality observed |
| mp_back.test | 10 | 0.000815s | 0.000818s | 0.000798s | byte equality observed |
| mp_back_2.test | 10 | 0.000367s | 0.000364s | 0.000816s | byte equality observed |
| mp_bind.test | 10 | 0.000804s | 0.000808s | 0.000809s | byte equality observed |
| mp_bind_back.test | 10 | 0.000815s | 0.000806s | 0.000820s | byte equality observed |
| mp_bind_front.test | 10 | 0.000801s | 0.000820s | 0.000820s | byte equality observed |
| mp_bind_q.test | 10 | 0.000797s | 0.000807s | 0.000790s | byte equality observed |
| mp_clear.test | 10 | 0.000795s | 0.000790s | 0.000799s | byte equality observed |
| mp_clear_2.test | 10 | 0.000369s | 0.000361s | 0.000777s | byte equality observed |
| mp_compose.test | 10 | 0.000819s | 0.000815s | 0.000824s | byte equality observed |
| mp_cond.test | 10 | 0.000817s | 0.000844s | 0.000783s | byte equality observed |
| mp_cond_sf.test | 10 | 0.000811s | 0.000864s | 0.000830s | byte equality observed |
| mp_contains.test | 10 | 0.000823s | 0.000787s | 0.000831s | byte equality observed |
| mp_copy_if.test | 10 | 0.000831s | 0.000815s | 0.000824s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.000833s | 0.000815s | 0.000816s | byte equality observed |
| mp_count.test | 10 | 0.000802s | 0.000841s | 0.000815s | byte equality observed |
| mp_count_if.test | 10 | 0.000840s | 0.000818s | 0.000818s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000811s | 0.000855s | 0.000827s | byte equality observed |
| mp_defer.test | 10 | 0.000818s | 0.000860s | 0.000805s | byte equality observed |
| mp_drop.test | 10 | 0.000797s | 0.000831s | 0.000819s | byte equality observed |
| mp_drop_2.test | 10 | 0.000366s | 0.000363s | 0.000787s | byte equality observed |
| mp_empty.test | 10 | 0.000805s | 0.000806s | 0.000797s | byte equality observed |
| mp_empty_2.test | 10 | 0.000361s | 0.000366s | 0.000775s | byte equality observed |
| mp_erase.test | 10 | 0.000815s | 0.000820s | 0.000817s | byte equality observed |
| mp_erase_2.test | 10 | 0.000358s | 0.000359s | 0.000803s | byte equality observed |
| mp_eval_if.test | 10 | 0.000809s | 0.000828s | 0.000818s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.000842s | 0.000837s | 0.000832s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.000796s | 0.000850s | 0.000803s | byte equality observed |
| mp_eval_or.test | 10 | 0.000816s | 0.000837s | 0.000824s | byte equality observed |
| mp_fill.test | 10 | 0.000815s | 0.000812s | 0.000832s | byte equality observed |
| mp_fill_2.test | 10 | 0.000366s | 0.000364s | 0.000787s | byte equality observed |
| mp_filter.test | 10 | 0.000799s | 0.000813s | 0.000815s | byte equality observed |
| mp_find.test | 10 | 0.000793s | 0.000826s | 0.000792s | byte equality observed |
| mp_find_if.test | 10 | 0.000793s | 0.000818s | 0.000814s | byte equality observed |
| mp_find_if_q.test | 10 | 0.000797s | 0.000819s | 0.000804s | byte equality observed |
| mp_flatten.test | 10 | 0.000803s | 0.000822s | 0.000844s | byte equality observed |
| mp_fold.test | 10 | 0.000840s | 0.000808s | 0.000820s | byte equality observed |
| mp_fold_q.test | 10 | 0.000817s | 0.000825s | 0.000828s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.000808s | 0.000838s | 0.000832s | byte equality observed |
| mp_for_each.test | 10 | 0.000835s | 0.000790s | 0.000825s | byte equality observed |
| mp_from_sequence.test | 10 | 0.000826s | 0.000806s | 0.000826s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.000798s | 0.000804s | 0.000837s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.000833s | 0.000812s | 0.000842s | byte equality observed |
| mp_front.test | 10 | 0.000809s | 0.000813s | 0.000800s | byte equality observed |
| mp_front_2.test | 10 | 0.000362s | 0.000360s | 0.000819s | byte equality observed |
| mp_identity.test | 10 | 0.000806s | 0.000836s | 0.000814s | byte equality observed |
| mp_if.test | 10 | 0.000815s | 0.000838s | 0.000821s | byte equality observed |
| mp_if_sf.test | 10 | 0.000834s | 0.000818s | 0.000796s | byte equality observed |
| mp_inherit.test | 10 | 0.000799s | 0.000793s | 0.000809s | byte equality observed |
| mp_insert.test | 10 | 0.000817s | 0.000805s | 0.000794s | byte equality observed |
| mp_insert_2.test | 10 | 0.000364s | 0.000369s | 0.000770s | byte equality observed |
| mp_intersperse.test | 10 | 0.000812s | 0.000840s | 0.000774s | byte equality observed |
| mp_invoke_q.test | 10 | 0.000824s | 0.000844s | 0.000825s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.000812s | 0.000823s | 0.000826s | byte equality observed |
| mp_iota.test | 10 | 0.000835s | 0.000815s | 0.000827s | byte equality observed |
| mp_iota_2.test | 10 | 0.000833s | 0.000815s | 0.000844s | byte equality observed |
| mp_is_list.test | 10 | 0.000828s | 0.000810s | 0.000825s | byte equality observed |
| mp_is_map.test | 10 | 0.000831s | 0.000798s | 0.000824s | byte equality observed |
| mp_is_set.test | 10 | 0.000803s | 0.000794s | 0.000832s | byte equality observed |
| mp_is_value_list.test | 10 | 0.000802s | 0.000801s | 0.000826s | byte equality observed |
| mp_iterate.test | 10 | 0.000799s | 0.000811s | 0.000862s | byte equality observed |
| mp_join.test | 10 | 0.000817s | 0.000812s | 0.000853s | byte equality observed |
| mp_lambda.test | 10 | 0.000836s | 0.000806s | 0.000829s | byte equality observed |
| mp_less.test | 10 | 0.000814s | 0.000807s | 0.000816s | byte equality observed |
| mp_list_c.test | 10 | 0.000807s | 0.000815s | 0.000806s | byte equality observed |
| mp_list_v.test | 10 | 0.000361s | 0.000357s | 0.000777s | byte equality observed |
| mp_map_contains.test | 10 | 0.000799s | 0.000802s | 0.000807s | byte equality observed |
| mp_map_erase.test | 10 | 0.000818s | 0.000817s | 0.000786s | byte equality observed |
| mp_map_find.test | 10 | 0.000817s | 0.000812s | 0.000779s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000799s | 0.000824s | 0.000813s | byte equality observed |
| mp_map_find_3.test | 10 | 0.000817s | 0.000804s | 0.000803s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000804s | 0.000802s | 0.000807s | byte equality observed |
| mp_map_insert.test | 10 | 0.000796s | 0.000817s | 0.000799s | byte equality observed |
| mp_map_keys.test | 10 | 0.000811s | 0.000828s | 0.000802s | byte equality observed |
| mp_map_replace.test | 10 | 0.000801s | 0.000811s | 0.000809s | byte equality observed |
| mp_map_update.test | 10 | 0.000827s | 0.000801s | 0.000827s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000823s | 0.000796s | 0.000843s | byte equality observed |
| mp_max.test | 10 | 0.000833s | 0.000796s | 0.000796s | byte equality observed |
| mp_max_element.test | 10 | 0.000800s | 0.000823s | 0.000800s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000366s | 0.000366s | 0.000804s | byte equality observed |
| mp_max_element_q.test | 10 | 0.000813s | 0.000803s | 0.000817s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000369s | 0.000366s | 0.000809s | byte equality observed |
| mp_min.test | 10 | 0.000811s | 0.000802s | 0.000811s | byte equality observed |
| mp_min_element.test | 10 | 0.000816s | 0.000798s | 0.000822s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000365s | 0.000362s | 0.000792s | byte equality observed |
| mp_min_element_q.test | 10 | 0.000809s | 0.000810s | 0.000821s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000363s | 0.000360s | 0.000790s | byte equality observed |
| mp_none_of.test | 10 | 0.000823s | 0.000808s | 0.000797s | byte equality observed |
| mp_none_of_q.test | 10 | 0.000818s | 0.000827s | 0.000804s | byte equality observed |
| mp_not_fn.test | 10 | 0.000816s | 0.000831s | 0.000818s | byte equality observed |
| mp_nth_element.test | 10 | 0.000815s | 0.000832s | 0.000824s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.000831s | 0.000822s | 0.000819s | byte equality observed |
| mp_or.test | 10 | 0.000824s | 0.000813s | 0.000831s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.000836s | 0.000826s | 0.000834s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.000818s | 0.000843s | 0.000839s | byte equality observed |
| mp_partial_sum.test | 10 | 0.000833s | 0.000832s | 0.000824s | byte equality observed |
| mp_partition.test | 10 | 0.000835s | 0.000823s | 0.000809s | byte equality observed |
| mp_partition_q.test | 10 | 0.000814s | 0.000851s | 0.000845s | byte equality observed |
| mp_plus.test | 10 | 0.000803s | 0.000853s | 0.000822s | byte equality observed |
| mp_pop_back.test | 10 | 0.000824s | 0.000822s | 0.000808s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000360s | 0.000361s | 0.000806s | byte equality observed |
| mp_pop_front.test | 10 | 0.000816s | 0.000811s | 0.000799s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000364s | 0.000367s | 0.000790s | byte equality observed |
| mp_power_set.test | 10 | 0.000827s | 0.000844s | 0.000800s | byte equality observed |
| mp_product.test | 10 | 0.000806s | 0.000828s | 0.000816s | byte equality observed |
| mp_push_back.test | 10 | 0.000804s | 0.000821s | 0.000829s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000367s | 0.000364s | 0.000799s | byte equality observed |
| mp_push_front.test | 10 | 0.000804s | 0.000818s | 0.000790s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000370s | 0.000361s | 0.000762s | byte equality observed |
| mp_quote.test | 10 | 0.000811s | 0.000827s | 0.000818s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000832s | 0.000838s | 0.000795s | byte equality observed |
| mp_remove.test | 10 | 0.000800s | 0.000824s | 0.000831s | byte equality observed |
| mp_remove_if.test | 10 | 0.000790s | 0.000850s | 0.000842s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.000816s | 0.000838s | 0.000786s | byte equality observed |
| mp_rename.test | 10 | 0.000829s | 0.000813s | 0.000808s | byte equality observed |
| mp_rename_2.test | 10 | 0.000365s | 0.000361s | 0.000768s | byte equality observed |
| mp_rename_v.test | 10 | 0.000367s | 0.000357s | 0.000784s | byte equality observed |
| mp_repeat.test | 10 | 0.000810s | 0.000810s | 0.000809s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000364s | 0.000367s | 0.000781s | byte equality observed |
| mp_repeat_3.test | 10 | 0.000824s | 0.000821s | 0.000814s | byte equality observed |
| mp_replace.test | 10 | 0.000809s | 0.000837s | 0.000793s | byte equality observed |
| mp_replace_at.test | 10 | 0.000820s | 0.000819s | 0.000815s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.000813s | 0.000841s | 0.000841s | byte equality observed |
| mp_replace_front.test | 10 | 0.000808s | 0.000827s | 0.000811s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000369s | 0.000367s | 0.000802s | byte equality observed |
| mp_replace_if.test | 10 | 0.000831s | 0.000801s | 0.000781s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.000818s | 0.000800s | 0.000816s | byte equality observed |
| mp_replace_second.test | 10 | 0.000809s | 0.000811s | 0.000812s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000366s | 0.000367s | 0.000799s | byte equality observed |
| mp_replace_third.test | 10 | 0.000804s | 0.000803s | 0.000825s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000364s | 0.000365s | 0.000798s | byte equality observed |
| mp_reverse.test | 10 | 0.000835s | 0.000833s | 0.000791s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.000814s | 0.000812s | 0.000812s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000827s | 0.000806s | 0.000804s | byte equality observed |
| mp_rotate_left.test | 10 | 0.000812s | 0.000826s | 0.000807s | byte equality observed |
| mp_rotate_right.test | 10 | 0.000837s | 0.000816s | 0.000795s | byte equality observed |
| mp_same.test | 10 | 0.000832s | 0.000831s | 0.000811s | byte equality observed |
| mp_second.test | 10 | 0.000808s | 0.000813s | 0.000795s | byte equality observed |
| mp_second_2.test | 10 | 0.000361s | 0.000362s | 0.000782s | byte equality observed |
| mp_set_contains.test | 10 | 0.000800s | 0.000821s | 0.000804s | byte equality observed |
| mp_set_difference.test | 10 | 0.000790s | 0.000807s | 0.000797s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000803s | 0.000806s | 0.000800s | byte equality observed |
| mp_set_intersection.test | 10 | 0.000804s | 0.000805s | 0.000803s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000806s | 0.000812s | 0.000824s | byte equality observed |
| mp_set_push_back.test | 10 | 0.000834s | 0.000846s | 0.000819s | byte equality observed |
| mp_set_push_front.test | 10 | 0.000843s | 0.000818s | 0.000832s | byte equality observed |
| mp_set_union.test | 10 | 0.000844s | 0.000824s | 0.000813s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.000819s | 0.000841s | 0.000808s | byte equality observed |
| mp_similar.test | 10 | 0.000843s | 0.000818s | 0.000816s | byte equality observed |
| mp_size.test | 10 | 0.000816s | 0.000791s | 0.000797s | byte equality observed |
| mp_size_2.test | 10 | 0.000364s | 0.000363s | 0.000830s | byte equality observed |
| mp_slice.test | 10 | 0.000831s | 0.000814s | 0.000796s | byte equality observed |
| mp_slice_2.test | 10 | 0.000365s | 0.000363s | 0.000770s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.000816s | 0.000821s | 0.000802s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.000843s | 0.000814s | 0.000837s | byte equality observed |
| mp_sort.test | 10 | 0.000819s | 0.000796s | 0.000821s | byte equality observed |
| mp_sort_q.test | 10 | 0.000813s | 0.000816s | 0.000824s | byte equality observed |
| mp_split.test | 10 | 0.000825s | 0.000842s | 0.000817s | byte equality observed |
| mp_starts_with.test | 10 | 0.000819s | 0.000810s | 0.000800s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.000796s | 0.000814s | 0.000835s | byte equality observed |
| mp_take.test | 10 | 0.000827s | 0.000839s | 0.000814s | byte equality observed |
| mp_take_2.test | 10 | 0.000371s | 0.000365s | 0.000794s | byte equality observed |
| mp_third.test | 10 | 0.000802s | 0.000813s | 0.000799s | byte equality observed |
| mp_third_2.test | 10 | 0.000365s | 0.000363s | 0.000800s | byte equality observed |
| mp_transform.test | 10 | 0.000844s | 0.000825s | 0.000798s | byte equality observed |
| mp_transform_2.test | 10 | 0.000811s | 0.000800s | 0.000787s | byte equality observed |
| mp_transform_front.test | 10 | 0.000807s | 0.000812s | 0.000775s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000366s | 0.000365s | 0.000806s | byte equality observed |
| mp_transform_if.test | 10 | 0.000817s | 0.000842s | 0.000809s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.000798s | 0.000796s | 0.000793s | byte equality observed |
| mp_transform_q.test | 10 | 0.000831s | 0.000828s | 0.000791s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.000842s | 0.000822s | 0.000817s | byte equality observed |
| mp_transform_second.test | 10 | 0.000816s | 0.000800s | 0.000826s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000366s | 0.000363s | 0.000819s | byte equality observed |
| mp_transform_sf.test | 10 | 0.000816s | 0.000801s | 0.000786s | byte equality observed |
| mp_transform_third.test | 10 | 0.000825s | 0.000789s | 0.000813s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000362s | 0.000368s | 0.000815s | byte equality observed |
| mp_unique.test | 10 | 0.000800s | 0.000820s | 0.000801s | byte equality observed |
| mp_unique_if.test | 10 | 0.000835s | 0.000823s | 0.000809s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.000821s | 0.000811s | 0.000789s | byte equality observed |
| mp_valid.test | 10 | 0.000815s | 0.000809s | 0.000801s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.000812s | 0.000800s | 0.000802s | byte equality observed |
| mp_value.test | 10 | 0.000371s | 0.000372s | 0.000778s | byte equality observed |
| mp_with_index.test | 10 | 0.001119s | 0.001087s | 0.001026s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000368s | 0.000361s | 0.000788s | byte equality observed |
| mpl.test | 10 | 0.000823s | 0.000819s | 0.000804s | byte equality observed |
| mpl_list.test | 10 | 0.000801s | 0.000836s | 0.000801s | byte equality observed |
| mpl_tuple.test | 10 | 0.000817s | 0.000848s | 0.000825s | byte equality observed |
| mpl_version.test | 10 | 0.000799s | 0.000820s | 0.000822s | byte equality observed |
| set_version.test | 10 | 0.000800s | 0.000821s | 0.000809s | byte equality observed |
| tuple_apply.test | 10 | 0.000832s | 0.000831s | 0.000809s | byte equality observed |
| tuple_for_each.test | 10 | 0.000824s | 0.000812s | 0.000829s | byte equality observed |
| tuple_transform.test | 10 | 0.000791s | 0.000805s | 0.000814s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000797s | 0.000810s | 0.000856s | byte equality observed |
| tuple_version.test | 10 | 0.000818s | 0.000832s | 0.000825s | byte equality observed |
| utility_version.test | 10 | 0.000803s | 0.000820s | 0.000811s | byte equality observed |
| version.test | 10 | 0.000824s | 0.000844s | 0.000802s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45697047144).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
