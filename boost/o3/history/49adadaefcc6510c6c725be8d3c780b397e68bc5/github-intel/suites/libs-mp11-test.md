# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.028502 | 0.059443 | 0.089402 | — | — | — |
| complex_h.test | COMPILE | 0.112378 | 0.254503 | 0.367105 | — | — | — |
| mp_size.test | RUN | 0.142508 | 0.853428 | 0.472645 | 0.001171 | 0.001298 | 0.001174 |
| mp_size_2.test | RUN | 0.012346 | 0.029547 | 0.042240 | 0.000500 | 0.000527 | 0.000971 |
| mp_empty.test | RUN | 0.130745 | 0.529872 | 0.427065 | 0.001106 | 0.001280 | 0.001017 |
| mp_empty_2.test | RUN | 0.012366 | 0.030641 | 0.041950 | 0.000467 | 0.000437 | 0.001095 |
| mp_assign.test | RUN | 0.154130 | 1.119075 | 0.583818 | 0.001088 | 0.001415 | 0.000931 |
| mp_assign_2.test | RUN | 0.010904 | 0.029272 | 0.040173 | 0.000490 | 0.000504 | 0.001089 |
| mp_clear.test | RUN | 0.128142 | 0.479823 | 0.437845 | 0.001190 | 0.001297 | 0.001090 |
| mp_clear_2.test | RUN | 0.012478 | 0.029430 | 0.041520 | 0.000463 | 0.000414 | 0.001095 |
| mp_front.test | RUN | 0.138480 | 0.762151 | 0.513056 | 0.001229 | 0.001460 | 0.001160 |
| mp_front_2.test | RUN | 0.012816 | 0.028823 | 0.042472 | 0.000486 | 0.000509 | 0.001075 |
| mp_pop_front.test | RUN | 0.142808 | 0.797809 | 0.503391 | 0.001185 | 0.001238 | 0.001052 |
| mp_pop_front_2.test | RUN | 0.011140 | 0.030137 | 0.040861 | 0.000513 | 0.000489 | 0.001131 |
| mp_second.test | RUN | 0.139193 | 0.504318 | 0.477293 | 0.001353 | 0.001264 | 0.001039 |
| mp_second_2.test | RUN | 0.012277 | 0.030316 | 0.042683 | 0.000495 | 0.000495 | 0.001074 |
| mp_third.test | RUN | 0.132284 | 0.472947 | 0.448523 | 0.001234 | 0.001290 | 0.000980 |
| mp_third_2.test | RUN | 0.013096 | 0.028110 | 0.040030 | 0.000465 | 0.000459 | 0.000920 |
| mp_push_front.test | RUN | 0.184354 | 1.719037 | 0.829419 | 0.001175 | 0.001266 | 0.001047 |
| mp_push_front_2.test | RUN | 0.012988 | 0.029002 | 0.038538 | 0.000431 | 0.000489 | 0.001078 |
| mp_push_back.test | RUN | 0.186127 | 1.719208 | 0.828227 | 0.001144 | 0.001296 | 0.001067 |
| mp_push_back_2.test | RUN | 0.010538 | 0.030254 | 0.041531 | 0.000481 | 0.000447 | 0.001011 |
| mp_rename.test | RUN | 0.178378 | 1.564697 | 0.682950 | 0.001118 | 0.001316 | 0.001021 |
| mp_rename_2.test | RUN | 0.012332 | 0.030747 | 0.040696 | 0.000438 | 0.000516 | 0.001019 |
| mp_append.test | RUN | 0.178316 | 1.770431 | 0.757256 | 0.001065 | 0.001216 | 0.001069 |
| mp_append_2.test | RUN | 0.416901 | 4.016357 | 1.060011 | 0.001214 | 0.001308 | 0.001116 |
| mp_append_3.test | RUN | 0.013149 | 0.029853 | 0.039131 | 0.000460 | 0.000466 | 0.001041 |
| mp_append_sf.test | RUN | 0.128230 | 0.428929 | 0.419570 | 0.001117 | 0.001226 | 0.001112 |
| mp_replace_front.test | RUN | 0.160947 | 1.258207 | 0.618939 | 0.001128 | 0.001253 | 0.001055 |
| mp_replace_front_2.test | RUN | 0.012961 | 0.029476 | 0.043339 | 0.000478 | 0.000447 | 0.001082 |
| mp_replace_second.test | RUN | 0.144768 | 0.805552 | 0.580147 | 0.001398 | 0.001267 | 0.001108 |
| mp_replace_second_2.test | RUN | 0.012670 | 0.029267 | 0.043010 | 0.000469 | 0.000488 | 0.001095 |
| mp_replace_third.test | RUN | 0.141366 | 0.662493 | 0.530799 | 0.001095 | 0.001261 | 0.001238 |
| mp_replace_third_2.test | RUN | 0.010215 | 0.030106 | 0.040733 | 0.000469 | 0.000503 | 0.001008 |
| mp_apply_q.test | RUN | 0.161271 | 1.564795 | 0.702208 | 0.001170 | 0.001220 | 0.000952 |
| mp_apply_q_sf.test | RUN | 0.127490 | 0.438383 | 0.418309 | 0.001178 | 0.001287 | 0.001069 |
| mp_is_list.test | RUN | 0.130405 | 0.524386 | 0.443495 | 0.001136 | 0.001304 | 0.001134 |
| mp_list_c.test | RUN | 0.142631 | 0.637401 | 0.505012 | 0.001242 | 0.001412 | 0.001022 |
| mp_transform_front.test | RUN | 0.155508 | 1.260969 | 0.618354 | 0.001110 | 0.001262 | 0.001013 |
| mp_transform_front_2.test | RUN | 0.013598 | 0.030472 | 0.041410 | 0.000449 | 0.000512 | 0.001102 |
| mp_transform_second.test | RUN | 0.147608 | 1.089833 | 0.550421 | 0.001230 | 0.001398 | 0.001094 |
| mp_transform_second_2.test | RUN | 0.012522 | 0.030438 | 0.042654 | 0.000443 | 0.000495 | 0.001100 |
| mp_transform_third.test | RUN | 0.137470 | 0.818619 | 0.483815 | 0.001176 | 0.001439 | 0.001116 |
| mp_transform_third_2.test | RUN | 0.011596 | 0.029512 | 0.040668 | 0.000451 | 0.000525 | 0.001036 |
| mp_list_v.test | RUN | 0.012094 | 0.029754 | 0.040896 | 0.000460 | 0.000473 | 0.001045 |
| mp_rename_v.test | RUN | 0.011925 | 0.029823 | 0.037047 | 0.000415 | 0.000502 | 0.001009 |
| mp_is_value_list.test | RUN | 0.126801 | 0.324086 | 0.414560 | 0.001146 | 0.001347 | 0.001093 |
| mp_transform.test | RUN | 0.331374 | 2.690467 | 1.333928 | 0.001159 | 0.001237 | 0.001161 |
| mp_transform_2.test | RUN | 0.121305 | 0.286618 | 0.369738 | 0.001079 | 0.001253 | 0.001063 |
| mp_transform_q.test | RUN | 0.320808 | 2.550849 | 1.285296 | 0.001207 | 0.001320 | 0.001073 |
| mp_transform_q_2.test | RUN | 0.332811 | 0.809064 | 1.621382 | 0.001217 | 0.001179 | 0.001099 |
| mp_transform_sf.test | RUN | 0.140875 | 0.446144 | 0.450211 | 0.001118 | 0.001248 | 0.001050 |
| mp_transform_if.test | RUN | 0.169675 | 1.278478 | 0.679239 | 0.001159 | 0.001277 | 0.001175 |
| mp_transform_if_q.test | RUN | 0.173487 | 1.275035 | 0.688921 | 0.001143 | 0.001136 | 0.001094 |
| mp_filter.test | RUN | 0.152235 | 0.734605 | 0.497408 | 0.001109 | 0.001410 | 0.001126 |
| mp_fill.test | RUN | 0.148162 | 0.552641 | 0.489608 | 0.001202 | 0.001282 | 0.001141 |
| mp_fill_2.test | RUN | 0.022152 | 0.044904 | 0.065408 | 0.000500 | 0.000438 | 0.001075 |
| mp_count.test | RUN | 0.283569 | 1.350878 | 0.762457 | 0.001214 | 0.001174 | 0.001095 |
| mp_count_if.test | RUN | 0.285351 | 1.361748 | 0.830476 | 0.001169 | 0.001167 | 0.001140 |
| mp_count_if_q.test | RUN | 0.144799 | 0.903729 | 0.479783 | 0.001379 | 0.001192 | 0.001235 |
| mp_contains.test | RUN | 0.134943 | 0.538411 | 0.443213 | 0.001236 | 0.001213 | 0.001006 |
| mp_starts_with.test | RUN | 0.142682 | 0.546094 | 0.477036 | 0.001216 | 0.001179 | 0.001003 |
| mp_starts_with_sf.test | RUN | 0.139323 | 0.449690 | 0.450061 | 0.001096 | 0.001310 | 0.001114 |
| mp_repeat.test | RUN | 0.213399 | 2.286588 | 0.873950 | 0.001160 | 0.001357 | 0.001091 |
| mp_repeat_2.test | RUN | 0.021769 | 0.047396 | 0.068708 | 0.000464 | 0.000523 | 0.001020 |
| mp_repeat_3.test | RUN | 0.184858 | 0.282862 | 0.437662 | 0.001326 | 0.001120 | 0.001191 |
| mp_product.test | RUN | 0.166157 | 1.363552 | 0.658661 | 0.001113 | 0.001270 | 0.001124 |
| mp_drop.test | RUN | 0.179552 | 1.712993 | 0.745814 | 0.001108 | 0.001398 | 0.001095 |
| mp_drop_2.test | RUN | 0.021279 | 0.046352 | 0.066495 | 0.000475 | 0.000486 | 0.001056 |
| mp_iota.test | RUN | 0.172801 | 1.427126 | 0.655906 | 0.001134 | 0.001189 | 0.001029 |
| mp_iota_2.test | RUN | 0.185545 | 1.720747 | 0.753674 | 0.001116 | 0.001253 | 0.001067 |
| mp_at.test | RUN | 0.146808 | 0.742438 | 0.510625 | 0.001146 | 0.001107 | 0.001019 |
| mp_at_2.test | RUN | 0.021763 | 0.046472 | 0.070085 | 0.000466 | 0.000526 | 0.001051 |
| mp_at_sf.test | RUN | 0.138108 | 0.452435 | 0.438853 | 0.001275 | 0.001407 | 0.001039 |
| mp_take.test | RUN | 0.245529 | 2.242680 | 0.892694 | 0.001376 | 0.001203 | 0.001130 |
| mp_take_2.test | RUN | 0.021241 | 0.044647 | 0.069127 | 0.000469 | 0.000466 | 0.000995 |
| mp_slice.test | RUN | 0.293782 | 2.291996 | 1.160697 | 0.001223 | 0.001332 | 0.001065 |
| mp_slice_2.test | RUN | 0.022168 | 0.044939 | 0.067417 | 0.000529 | 0.000505 | 0.001055 |
| mp_replace.test | RUN | 0.175821 | 1.143944 | 0.720192 | 0.001197 | 0.001291 | 0.001177 |
| mp_replace_if.test | RUN | 0.167482 | 1.000962 | 0.670021 | 0.001434 | 0.001291 | 0.001115 |
| mp_replace_if_q.test | RUN | 0.165077 | 1.015586 | 0.651919 | 0.001175 | 0.001352 | 0.001266 |
| mp_copy_if.test | RUN | 0.172836 | 1.419180 | 0.630524 | 0.001355 | 0.001291 | 0.001089 |
| mp_copy_if_q.test | RUN | 0.169805 | 1.419468 | 0.640445 | 0.001030 | 0.001210 | 0.001062 |
| mp_remove.test | RUN | 0.165888 | 0.955795 | 0.640670 | 0.001363 | 0.001428 | 0.001078 |
| mp_remove_if.test | RUN | 0.172634 | 1.503032 | 0.676133 | 0.001286 | 0.001397 | 0.001252 |
| mp_remove_if_q.test | RUN | 0.177001 | 1.510209 | 0.677977 | 0.001388 | 0.001393 | 0.001110 |
| mp_partition.test | RUN | 0.175033 | 1.420206 | 0.732165 | 0.000988 | 0.001176 | 0.001056 |
| mp_partition_q.test | RUN | 0.174381 | 1.437738 | 0.723308 | 0.001307 | 0.001342 | 0.001120 |
| mp_sort.test | RUN | 0.162002 | 1.024240 | 0.624560 | 0.001215 | 0.001401 | 0.001053 |
| mp_sort_q.test | RUN | 0.160824 | 1.004756 | 0.622259 | 0.001325 | 0.001319 | 0.001168 |
| mp_find.test | RUN | 0.156955 | 1.087953 | 0.550270 | 0.001134 | 0.001340 | 0.001147 |
| mp_find_if.test | RUN | 0.152944 | 0.999530 | 0.522915 | 0.001209 | 0.001298 | 0.001000 |
| mp_find_if_q.test | RUN | 0.167134 | 1.129011 | 0.629369 | 0.001125 | 0.001336 | 0.001118 |
| mp_reverse.test | RUN | 0.336022 | 3.009365 | 1.250839 | 0.001149 | 0.001490 | 0.001236 |
| mp_fold.test | RUN | 0.613252 | 2.357972 | 3.202930 | 0.001251 | 0.001219 | 0.001071 |
| mp_fold_q.test | RUN | 0.156464 | 1.004737 | 0.599690 | 0.001165 | 0.001177 | 0.001187 |
| mp_fold_q_sf.test | RUN | 0.138322 | 0.458454 | 0.463252 | 0.001140 | 0.001164 | 0.001101 |
| mp_reverse_fold.test | RUN | 0.292087 | 2.245882 | 0.883279 | 0.001044 | 0.001173 | 0.001138 |
| mp_reverse_fold_q.test | RUN | 0.161641 | 1.223643 | 0.641457 | 0.001087 | 0.001289 | 0.001078 |
| mp_unique.test | RUN | 0.162571 | 1.104609 | 0.620467 | 0.001186 | 0.001286 | 0.001180 |
| mp_unique_if.test | RUN | 0.306439 | 2.361002 | 1.011507 | 0.001057 | 0.001377 | 0.001093 |
| mp_unique_if_q.test | RUN | 0.263862 | 2.330971 | 0.800269 | 0.001150 | 0.001331 | 0.001182 |
| mp_all_of.test | RUN | 0.392826 | 1.250593 | 1.037942 | 0.001265 | 0.001336 | 0.001105 |
| mp_all_of_q.test | RUN | 0.137266 | 0.525560 | 0.452267 | 0.001274 | 0.001366 | 0.001188 |
| mp_any_of.test | RUN | 0.393476 | 1.310974 | 1.027201 | 0.001162 | 0.001408 | 0.000996 |
| mp_any_of_q.test | RUN | 0.137878 | 0.520588 | 0.439552 | 0.001247 | 0.001446 | 0.001170 |
| mp_none_of.test | RUN | 0.387951 | 1.300832 | 1.030480 | 0.001134 | 0.001406 | 0.001045 |
| mp_none_of_q.test | RUN | 0.137617 | 0.516498 | 0.450293 | 0.001336 | 0.001344 | 0.001089 |
| mp_replace_at.test | RUN | 0.172102 | 1.127942 | 0.712223 | 0.001097 | 0.001261 | 0.001105 |
| mp_replace_at_c.test | RUN | 0.173182 | 1.122240 | 0.695467 | 0.001231 | 0.001228 | 0.001166 |
| mp_for_each.test | RUN | 0.161208 | 0.723441 | 0.706577 | 0.001088 | 0.001214 | 0.001017 |
| mp_insert.test | RUN | 0.275135 | 2.273531 | 1.043545 | 0.001240 | 0.001259 | 0.001069 |
| mp_insert_2.test | RUN | 0.021907 | 0.046747 | 0.065768 | 0.000443 | 0.000464 | 0.001053 |
| mp_erase.test | RUN | 0.299287 | 2.429720 | 1.211857 | 0.001203 | 0.001284 | 0.001051 |
| mp_erase_2.test | RUN | 0.021257 | 0.045396 | 0.065019 | 0.000468 | 0.000501 | 0.001120 |
| mp_with_index.test | RUN | 0.395146 | 4.853763 | 2.595517 | 0.001744 | 0.001596 | 0.001250 |
| mp_with_index_cx.test | RUN | 0.003022 | 0.014822 | 0.019349 | 0.000472 | 0.000598 | 0.001102 |
| mp_from_sequence.test | RUN | 0.173529 | 1.268406 | 0.674856 | 0.001132 | 0.001177 | 0.001057 |
| mp_from_sequence_2.test | RUN | 0.180108 | 1.488206 | 0.735788 | 0.001220 | 0.001258 | 0.001098 |
| mp_from_sequence_3.test | RUN | 0.149879 | 0.646352 | 0.523030 | 0.001121 | 0.001348 | 0.001065 |
| mp_min_element.test | RUN | 0.148115 | 0.592398 | 0.466905 | 0.001181 | 0.001276 | 0.001049 |
| mp_min_element_2.test | RUN | 0.022392 | 0.046015 | 0.068017 | 0.000429 | 0.000490 | 0.001032 |
| mp_min_element_q.test | RUN | 0.147300 | 0.580152 | 0.472014 | 0.001073 | 0.001332 | 0.001003 |
| mp_min_element_q_2.test | RUN | 0.020076 | 0.044128 | 0.069612 | 0.000478 | 0.000433 | 0.001018 |
| mp_max_element.test | RUN | 0.142607 | 0.588907 | 0.469026 | 0.001171 | 0.001069 | 0.000945 |
| mp_max_element_2.test | RUN | 0.020943 | 0.041839 | 0.068055 | 0.000448 | 0.000517 | 0.001043 |
| mp_max_element_q.test | RUN | 0.140736 | 0.586016 | 0.466727 | 0.001319 | 0.001289 | 0.001083 |
| mp_max_element_q_2.test | RUN | 0.021093 | 0.046564 | 0.065583 | 0.000462 | 0.000513 | 0.000998 |
| mp_nth_element.test | RUN | 0.158842 | 0.835182 | 0.588472 | 0.001087 | 0.001503 | 0.001015 |
| mp_nth_element_q.test | RUN | 0.162341 | 0.839450 | 0.585602 | 0.001235 | 0.001207 | 0.001061 |
| mp_back.test | RUN | 0.157850 | 0.693761 | 0.534216 | 0.001213 | 0.001339 | 0.001039 |
| mp_back_2.test | RUN | 0.021984 | 0.046507 | 0.069481 | 0.000516 | 0.000545 | 0.001059 |
| mp_pop_back.test | RUN | 0.466957 | 4.636301 | 1.187060 | 0.001124 | 0.001318 | 0.001036 |
| mp_pop_back_2.test | RUN | 0.021532 | 0.048487 | 0.064236 | 0.000508 | 0.000537 | 0.001067 |
| mp_flatten.test | RUN | 0.186369 | 1.633812 | 0.794422 | 0.001200 | 0.001163 | 0.001016 |
| mp_rotate_left.test | RUN | 0.184836 | 1.750335 | 0.771307 | 0.001152 | 0.001127 | 0.001037 |
| mp_rotate_right.test | RUN | 0.191180 | 1.765139 | 0.783438 | 0.001247 | 0.001232 | 0.001063 |
| mp_power_set.test | RUN | 0.181768 | 1.670029 | 0.789564 | 0.001281 | 0.001329 | 0.001060 |
| mp_partial_sum.test | RUN | 0.253970 | 2.273511 | 0.892685 | 0.001241 | 0.001362 | 0.001044 |
| mp_iterate.test | RUN | 0.163882 | 0.663774 | 0.609562 | 0.001236 | 0.001336 | 0.000978 |
| mp_pairwise_fold.test | RUN | 0.183447 | 1.560941 | 0.799302 | 0.001080 | 0.001275 | 0.001026 |
| mp_pairwise_fold_q.test | RUN | 0.141418 | 0.447846 | 0.442717 | 0.001198 | 0.001316 | 0.001022 |
| mp_sliding_fold.test | RUN | 0.370143 | 3.011724 | 1.498869 | 0.001255 | 0.001343 | 0.001158 |
| mp_sliding_fold_q.test | RUN | 0.365305 | 3.035491 | 1.498877 | 0.001214 | 0.001305 | 0.001023 |
| mp_intersperse.test | RUN | 0.168895 | 1.109133 | 0.697734 | 0.001097 | 0.001277 | 0.001246 |
| mp_split.test | RUN | 0.248415 | 2.127571 | 0.967016 | 0.001104 | 0.001356 | 0.001018 |
| mp_join.test | RUN | 0.194516 | 1.778740 | 0.872695 | 0.001088 | 0.001360 | 0.001100 |
| integral.test | RUN | 0.146354 | 0.781720 | 0.523275 | 0.001032 | 0.001189 | 0.001127 |
| mp_value.test | RUN | 0.009348 | 0.025394 | 0.030687 | 0.000479 | 0.000456 | 0.001055 |
| mp_identity.test | RUN | 0.137996 | 0.719298 | 0.493783 | 0.001077 | 0.001280 | 0.001126 |
| mp_inherit.test | RUN | 0.131837 | 0.509984 | 0.453896 | 0.001131 | 0.001286 | 0.001063 |
| mp_if.test | RUN | 0.133416 | 0.585251 | 0.463796 | 0.001113 | 0.001287 | 0.001019 |
| mp_if_sf.test | RUN | 0.127617 | 0.430618 | 0.412355 | 0.000906 | 0.001208 | 0.000996 |
| mp_eval_if.test | RUN | 0.138071 | 0.627793 | 0.466672 | 0.001102 | 0.001076 | 0.001069 |
| mp_eval_if_sf.test | RUN | 0.128111 | 0.442342 | 0.422768 | 0.001156 | 0.001236 | 0.001068 |
| mp_valid.test | RUN | 0.128938 | 0.440913 | 0.428975 | 0.001227 | 0.001162 | 0.001193 |
| mp_defer.test | RUN | 0.146482 | 0.760958 | 0.523390 | 0.001093 | 0.001381 | 0.001035 |
| mp_quote.test | RUN | 0.145596 | 0.774285 | 0.541820 | 0.001161 | 0.001234 | 0.001039 |
| mp_invoke_q.test | RUN | 0.157908 | 1.010121 | 0.588311 | 0.001077 | 0.001497 | 0.001086 |
| mp_invoke_q_sf.test | RUN | 0.129569 | 0.437023 | 0.418572 | 0.001238 | 0.001493 | 0.001057 |
| mp_quote_trait.test | RUN | 0.142009 | 0.845706 | 0.514039 | 0.001077 | 0.001408 | 0.000979 |
| mp_cond.test | RUN | 0.131990 | 0.512892 | 0.436025 | 0.001120 | 0.001355 | 0.001014 |
| mp_cond_sf.test | RUN | 0.130145 | 0.439759 | 0.416593 | 0.001133 | 0.001400 | 0.001009 |
| mp_not_fn.test | RUN | 0.128446 | 0.441127 | 0.405430 | 0.000943 | 0.001414 | 0.001031 |
| mp_eval_if_not.test | RUN | 0.139918 | 0.625283 | 0.467257 | 0.001104 | 0.001334 | 0.001157 |
| mp_eval_or.test | RUN | 0.129958 | 0.325238 | 0.424484 | 0.001206 | 0.001294 | 0.001054 |
| mp_compose.test | RUN | 0.150506 | 1.046959 | 0.567054 | 0.001100 | 0.001183 | 0.001002 |
| mp_valid_and_true.test | RUN | 0.132971 | 0.531590 | 0.438784 | 0.001152 | 0.001386 | 0.001077 |
| mp_compose_sf.test | COMPILE | 0.030132 | 0.060907 | 0.092875 | — | — | — |
| integer_sequence.test | RUN | 0.162936 | 1.026688 | 0.640706 | 0.001098 | 0.001339 | 0.001032 |
| tuple_for_each.test | RUN | 0.133266 | 0.372566 | 0.441412 | 0.001152 | 0.001373 | 0.000995 |
| tuple_for_each_cx.test | COMPILE | 0.024698 | 0.051526 | 0.075567 | — | — | — |
| tuple_apply.test | RUN | 0.133199 | 0.370030 | 0.452959 | 0.001162 | 0.001294 | 0.000979 |
| tuple_apply_cx.test | COMPILE | 0.035825 | 0.075057 | 0.104386 | — | — | — |
| construct_from_tuple.test | RUN | 0.131633 | 0.398665 | 0.445428 | 0.001027 | 0.001433 | 0.001139 |
| construct_from_tuple_cx.test | COMPILE | 0.035002 | 0.074669 | 0.103048 | — | — | — |
| tuple_transform.test | RUN | 0.207598 | 0.817589 | 0.872035 | 0.001176 | 0.001148 | 0.000936 |
| tuple_transform_2.test | RUN | 0.182349 | 0.596954 | 0.792421 | 0.001098 | 0.001187 | 0.001115 |
| tuple_transform_cx.test | COMPILE | 0.031161 | 0.071453 | 0.098897 | — | — | — |
| mp_set_contains.test | RUN | 0.135787 | 0.531826 | 0.455614 | 0.001201 | 0.001274 | 0.001131 |
| mp_set_push_back.test | RUN | 0.185400 | 1.662519 | 0.793906 | 0.001141 | 0.001281 | 0.001196 |
| mp_set_push_front.test | RUN | 0.244465 | 2.010302 | 0.918230 | 0.001213 | 0.001374 | 0.000928 |
| mp_is_set.test | RUN | 0.135771 | 0.533214 | 0.466332 | 0.001163 | 0.001346 | 0.001070 |
| mp_set_union.test | RUN | 0.176311 | 1.428966 | 0.756433 | 0.001186 | 0.001271 | 0.001095 |
| mp_set_union_sf.test | RUN | 0.130608 | 0.426620 | 0.425810 | 0.001161 | 0.001211 | 0.000817 |
| mp_set_difference.test | RUN | 0.162964 | 1.110356 | 0.643160 | 0.001181 | 0.001239 | 0.001058 |
| mp_set_difference_sf.test | RUN | 0.132997 | 0.433376 | 0.423782 | 0.001177 | 0.001318 | 0.000974 |
| mp_set_intersection.test | RUN | 0.163849 | 1.104514 | 0.624746 | 0.001117 | 0.001256 | 0.001030 |
| mp_set_intersection_sf.test | RUN | 0.133322 | 0.429735 | 0.424701 | 0.001122 | 0.001253 | 0.000964 |
| mp_all.test | RUN | 0.140683 | 0.529478 | 0.455904 | 0.001333 | 0.001470 | 0.001131 |
| mp_all_2.test | RUN | 0.397973 | 1.164004 | 1.028138 | 0.001131 | 0.001274 | 0.001072 |
| mp_and.test | RUN | 0.132783 | 0.533986 | 0.447939 | 0.001056 | 0.001412 | 0.001080 |
| mp_any.test | RUN | 0.143120 | 0.519358 | 0.430841 | 0.001174 | 0.001279 | 0.001048 |
| mp_any_2.test | RUN | 0.399867 | 1.155876 | 1.022851 | 0.001247 | 0.001468 | 0.001044 |
| mp_or.test | RUN | 0.136139 | 0.517080 | 0.450635 | 0.001160 | 0.001477 | 0.001109 |
| mp_same.test | RUN | 0.271290 | 0.895906 | 0.721588 | 0.001220 | 0.001169 | 0.001304 |
| mp_plus.test | RUN | 0.142648 | 0.618174 | 0.479549 | 0.001134 | 0.001416 | 0.001008 |
| mp_less.test | RUN | 0.141169 | 0.526780 | 0.434780 | 0.001193 | 0.001223 | 0.001067 |
| mp_min.test | RUN | 0.134390 | 0.488355 | 0.444473 | 0.001438 | 0.001266 | 0.001149 |
| mp_max.test | RUN | 0.139482 | 0.540102 | 0.456184 | 0.001257 | 0.001312 | 0.001047 |
| mp_similar.test | RUN | 0.133996 | 0.523182 | 0.442192 | 0.001159 | 0.001154 | 0.000808 |
| mp_map_find.test | RUN | 0.160468 | 0.986459 | 0.601746 | 0.001231 | 0.001074 | 0.001029 |
| mp_map_find_2.test | RUN | 0.152985 | 0.376832 | 0.509041 | 0.001146 | 0.001442 | 0.001108 |
| mp_map_find_3.test | RUN | 0.148316 | 0.369062 | 0.504880 | 0.001068 | 0.001224 | 0.000979 |
| mp_map_find_4.test | RUN | 0.137188 | 0.348143 | 0.457317 | 0.001139 | 0.001107 | 0.001076 |
| mp_map_contains.test | RUN | 0.146516 | 0.539319 | 0.470333 | 0.001342 | 0.001359 | 0.001017 |
| mp_map_insert.test | RUN | 0.192404 | 1.874408 | 0.858243 | 0.001310 | 0.001310 | 0.001045 |
| mp_map_replace.test | RUN | 0.260438 | 2.148636 | 0.992607 | 0.001105 | 0.001422 | 0.001027 |
| mp_map_erase.test | RUN | 0.190337 | 1.591909 | 0.813632 | 0.001118 | 0.001263 | 0.001133 |
| mp_map_update.test | RUN | 0.168471 | 1.025377 | 0.626440 | 0.001305 | 0.001257 | 0.001038 |
| mp_map_update_q.test | RUN | 0.163113 | 1.017974 | 0.624127 | 0.001162 | 0.001166 | 0.000991 |
| mp_map_keys.test | RUN | 0.157342 | 0.909364 | 0.611671 | 0.001025 | 0.001178 | 0.001067 |
| mp_is_map.test | RUN | 0.141043 | 0.542879 | 0.482447 | 0.001096 | 0.001309 | 0.001098 |
| mp_bind.test | RUN | 0.184279 | 1.664767 | 0.739101 | 0.001134 | 0.001306 | 0.001016 |
| mp_bind_q.test | RUN | 0.162951 | 1.026039 | 0.588640 | 0.001241 | 0.001276 | 0.000974 |
| mp_bind_front.test | RUN | 0.153679 | 1.109616 | 0.571466 | 0.001188 | 0.001437 | 0.001072 |
| mp_bind_back.test | RUN | 0.152503 | 1.109258 | 0.571613 | 0.001084 | 0.001332 | 0.001055 |
| mp_lambda.test | RUN | 0.377834 | 3.353804 | 1.559879 | 0.000956 | 0.000978 | 0.000993 |
| mpl.test | RUN | 0.323587 | 0.855592 | 1.237470 | 0.001380 | 0.001218 | 0.001038 |
| mpl_list.test | RUN | 0.172334 | 0.650691 | 0.568672 | 0.001376 | 0.001251 | 0.001141 |
| mpl_tuple.test | RUN | 0.174493 | 0.657279 | 0.555124 | 0.001247 | 0.001305 | 0.001077 |
| version.test | RUN | 0.088745 | 0.232053 | 0.286319 | 0.001512 | 0.001299 | 0.001208 |
| mp11_version.test | RUN | 0.108767 | 0.263171 | 0.337730 | 0.001104 | 0.001270 | 0.001027 |
| list_version.test | RUN | 0.089373 | 0.237336 | 0.290949 | 0.001097 | 0.001282 | 0.001062 |
| algorithm_version.test | RUN | 0.104997 | 0.253003 | 0.310332 | 0.001204 | 0.001193 | 0.000941 |
| integral_version.test | RUN | 0.088568 | 0.234816 | 0.280964 | 0.001400 | 0.001374 | 0.000939 |
| utility_version.test | RUN | 0.088526 | 0.235017 | 0.280701 | 0.001322 | 0.001250 | 0.000973 |
| function_version.test | RUN | 0.091622 | 0.232198 | 0.292024 | 0.001091 | 0.001208 | 0.001134 |
| map_version.test | RUN | 0.104825 | 0.252740 | 0.308222 | 0.001123 | 0.001170 | 0.001091 |
| set_version.test | RUN | 0.095573 | 0.239900 | 0.291737 | 0.001286 | 0.001175 | 0.001104 |
| bind_version.test | RUN | 0.098882 | 0.250350 | 0.308848 | 0.001305 | 0.001323 | 0.000991 |
| integer_sequence_version.test | RUN | 0.085647 | 0.230562 | 0.278525 | 0.001328 | 0.001198 | 0.000929 |
| tuple_version.test | RUN | 0.101704 | 0.255689 | 0.292357 | 0.000918 | 0.000943 | 0.000727 |
| mpl_version.test | RUN | 0.073381 | 0.203207 | 0.205659 | 0.000954 | 0.000946 | 0.000771 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.002× | 1.005×, 0.998× | 1.001× |
| clang | 1.094× | 1.093×, 1.096× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45739944580).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000734s | 0.000708s | 0.000718s | byte equality observed |
| bind_version.test | 10 | 0.000725s | 0.000716s | 0.000732s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000733s | 0.000736s | 0.000719s | byte equality observed |
| function_version.test | 10 | 0.000720s | 0.000718s | 0.000710s | byte equality observed |
| integer_sequence.test | 10 | 0.000721s | 0.000720s | 0.000728s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000730s | 0.000712s | 0.000739s | byte equality observed |
| integral.test | 10 | 0.000732s | 0.000731s | 0.000719s | byte equality observed |
| integral_version.test | 10 | 0.000730s | 0.000739s | 0.000725s | byte equality observed |
| list_version.test | 10 | 0.000735s | 0.000741s | 0.000739s | byte equality observed |
| map_version.test | 10 | 0.000728s | 0.000740s | 0.000731s | byte equality observed |
| mp11_version.test | 10 | 0.000734s | 0.000718s | 0.000723s | byte equality observed |
| mp_all.test | 10 | 0.000721s | 0.000729s | 0.000784s | byte equality observed |
| mp_all_2.test | 10 | 0.000716s | 0.000729s | 0.000783s | byte equality observed |
| mp_all_of.test | 10 | 0.000722s | 0.000744s | 0.000815s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000733s | 0.000731s | 0.000809s | byte equality observed |
| mp_and.test | 10 | 0.000735s | 0.000741s | 0.000815s | byte equality observed |
| mp_any.test | 10 | 0.000727s | 0.000734s | 0.000790s | byte equality observed |
| mp_any_2.test | 10 | 0.000733s | 0.000738s | 0.000788s | byte equality observed |
| mp_any_of.test | 10 | 0.000718s | 0.000716s | 0.000801s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000733s | 0.000719s | 0.000806s | byte equality observed |
| mp_append.test | 10 | 0.000731s | 0.000726s | 0.000807s | byte equality observed |
| mp_append_2.test | 10 | 0.000744s | 0.000746s | 0.000808s | byte equality observed |
| mp_append_3.test | 10 | 0.000353s | 0.000341s | 0.000806s | byte equality observed |
| mp_append_sf.test | 10 | 0.000792s | 0.000711s | 0.000780s | byte equality observed |
| mp_apply_q.test | 10 | 0.000810s | 0.000738s | 0.000787s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.000788s | 0.000744s | 0.000804s | byte equality observed |
| mp_assign.test | 10 | 0.000814s | 0.000729s | 0.000789s | byte equality observed |
| mp_assign_2.test | 10 | 0.000360s | 0.000348s | 0.000782s | byte equality observed |
| mp_at.test | 10 | 0.000789s | 0.000734s | 0.000777s | byte equality observed |
| mp_at_2.test | 10 | 0.000359s | 0.000336s | 0.000753s | byte equality observed |
| mp_at_sf.test | 10 | 0.000823s | 0.000732s | 0.000791s | byte equality observed |
| mp_back.test | 10 | 0.000806s | 0.000758s | 0.000790s | byte equality observed |
| mp_back_2.test | 10 | 0.000357s | 0.000351s | 0.000775s | byte equality observed |
| mp_bind.test | 10 | 0.000799s | 0.000776s | 0.000799s | byte equality observed |
| mp_bind_back.test | 10 | 0.000775s | 0.000789s | 0.000840s | byte equality observed |
| mp_bind_front.test | 10 | 0.000803s | 0.000816s | 0.000815s | byte equality observed |
| mp_bind_q.test | 10 | 0.000794s | 0.000825s | 0.000809s | byte equality observed |
| mp_clear.test | 10 | 0.000789s | 0.000786s | 0.000812s | byte equality observed |
| mp_clear_2.test | 10 | 0.000354s | 0.000360s | 0.000769s | byte equality observed |
| mp_compose.test | 10 | 0.000784s | 0.000793s | 0.000800s | byte equality observed |
| mp_cond.test | 10 | 0.000788s | 0.000767s | 0.000799s | byte equality observed |
| mp_cond_sf.test | 10 | 0.000788s | 0.000788s | 0.000803s | byte equality observed |
| mp_contains.test | 10 | 0.000803s | 0.000819s | 0.000815s | byte equality observed |
| mp_copy_if.test | 10 | 0.000830s | 0.000807s | 0.000836s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.000814s | 0.000817s | 0.000813s | byte equality observed |
| mp_count.test | 10 | 0.000799s | 0.000812s | 0.000804s | byte equality observed |
| mp_count_if.test | 10 | 0.000804s | 0.000816s | 0.000786s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000779s | 0.000809s | 0.000792s | byte equality observed |
| mp_defer.test | 10 | 0.000791s | 0.000791s | 0.000813s | byte equality observed |
| mp_drop.test | 10 | 0.000777s | 0.000792s | 0.000805s | byte equality observed |
| mp_drop_2.test | 10 | 0.000358s | 0.000354s | 0.000783s | byte equality observed |
| mp_empty.test | 10 | 0.000783s | 0.000818s | 0.000792s | byte equality observed |
| mp_empty_2.test | 10 | 0.000360s | 0.000355s | 0.000795s | byte equality observed |
| mp_erase.test | 10 | 0.000811s | 0.000785s | 0.000794s | byte equality observed |
| mp_erase_2.test | 10 | 0.000354s | 0.000360s | 0.000758s | byte equality observed |
| mp_eval_if.test | 10 | 0.000787s | 0.000803s | 0.000782s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.000784s | 0.000836s | 0.000783s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.000787s | 0.000827s | 0.000790s | byte equality observed |
| mp_eval_or.test | 10 | 0.000828s | 0.000799s | 0.000785s | byte equality observed |
| mp_fill.test | 10 | 0.000788s | 0.000786s | 0.000813s | byte equality observed |
| mp_fill_2.test | 10 | 0.000357s | 0.000354s | 0.000807s | byte equality observed |
| mp_filter.test | 10 | 0.000790s | 0.000801s | 0.000799s | byte equality observed |
| mp_find.test | 10 | 0.000791s | 0.000787s | 0.000810s | byte equality observed |
| mp_find_if.test | 10 | 0.000793s | 0.000809s | 0.000825s | byte equality observed |
| mp_find_if_q.test | 10 | 0.000804s | 0.000799s | 0.000829s | byte equality observed |
| mp_flatten.test | 10 | 0.000799s | 0.000811s | 0.000799s | byte equality observed |
| mp_fold.test | 10 | 0.000820s | 0.000808s | 0.000811s | byte equality observed |
| mp_fold_q.test | 10 | 0.000806s | 0.000804s | 0.000795s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.000809s | 0.000829s | 0.000784s | byte equality observed |
| mp_for_each.test | 10 | 0.000825s | 0.000803s | 0.000797s | byte equality observed |
| mp_from_sequence.test | 10 | 0.000822s | 0.000790s | 0.000771s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.000820s | 0.000825s | 0.000815s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.000790s | 0.000803s | 0.000811s | byte equality observed |
| mp_front.test | 10 | 0.000786s | 0.000796s | 0.000780s | byte equality observed |
| mp_front_2.test | 10 | 0.000354s | 0.000355s | 0.000774s | byte equality observed |
| mp_identity.test | 10 | 0.000797s | 0.000785s | 0.000841s | byte equality observed |
| mp_if.test | 10 | 0.000789s | 0.000820s | 0.000835s | byte equality observed |
| mp_if_sf.test | 10 | 0.000819s | 0.000818s | 0.000805s | byte equality observed |
| mp_inherit.test | 10 | 0.000804s | 0.000822s | 0.000815s | byte equality observed |
| mp_insert.test | 10 | 0.000808s | 0.000782s | 0.000807s | byte equality observed |
| mp_insert_2.test | 10 | 0.000360s | 0.000354s | 0.000799s | byte equality observed |
| mp_intersperse.test | 10 | 0.000788s | 0.000809s | 0.000798s | byte equality observed |
| mp_invoke_q.test | 10 | 0.000807s | 0.000819s | 0.000811s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.000831s | 0.000823s | 0.000778s | byte equality observed |
| mp_iota.test | 10 | 0.000822s | 0.000798s | 0.000777s | byte equality observed |
| mp_iota_2.test | 10 | 0.000806s | 0.000809s | 0.000819s | byte equality observed |
| mp_is_list.test | 10 | 0.000806s | 0.000825s | 0.000806s | byte equality observed |
| mp_is_map.test | 10 | 0.000819s | 0.000822s | 0.000794s | byte equality observed |
| mp_is_set.test | 10 | 0.000799s | 0.000817s | 0.000794s | byte equality observed |
| mp_is_value_list.test | 10 | 0.000792s | 0.000817s | 0.000793s | byte equality observed |
| mp_iterate.test | 10 | 0.000811s | 0.000790s | 0.000806s | byte equality observed |
| mp_join.test | 10 | 0.000817s | 0.000793s | 0.000821s | byte equality observed |
| mp_lambda.test | 10 | 0.000817s | 0.000809s | 0.000810s | byte equality observed |
| mp_less.test | 10 | 0.000817s | 0.000800s | 0.000797s | byte equality observed |
| mp_list_c.test | 10 | 0.000811s | 0.000783s | 0.000812s | byte equality observed |
| mp_list_v.test | 10 | 0.000351s | 0.000353s | 0.000761s | byte equality observed |
| mp_map_contains.test | 10 | 0.000778s | 0.000795s | 0.000781s | byte equality observed |
| mp_map_erase.test | 10 | 0.000808s | 0.000792s | 0.000800s | byte equality observed |
| mp_map_find.test | 10 | 0.000780s | 0.000783s | 0.000800s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000802s | 0.000815s | 0.000814s | byte equality observed |
| mp_map_find_3.test | 10 | 0.000798s | 0.000808s | 0.000788s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000796s | 0.000801s | 0.000814s | byte equality observed |
| mp_map_insert.test | 10 | 0.000805s | 0.000805s | 0.000793s | byte equality observed |
| mp_map_keys.test | 10 | 0.000802s | 0.000792s | 0.000802s | byte equality observed |
| mp_map_replace.test | 10 | 0.000798s | 0.000826s | 0.000805s | byte equality observed |
| mp_map_update.test | 10 | 0.000806s | 0.000799s | 0.000819s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000801s | 0.000802s | 0.000798s | byte equality observed |
| mp_max.test | 10 | 0.000817s | 0.000797s | 0.000805s | byte equality observed |
| mp_max_element.test | 10 | 0.000803s | 0.000800s | 0.000830s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000354s | 0.000357s | 0.000802s | byte equality observed |
| mp_max_element_q.test | 10 | 0.000774s | 0.000785s | 0.000789s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000357s | 0.000363s | 0.000793s | byte equality observed |
| mp_min.test | 10 | 0.000795s | 0.000821s | 0.000803s | byte equality observed |
| mp_min_element.test | 10 | 0.000780s | 0.000793s | 0.000767s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000359s | 0.000357s | 0.000799s | byte equality observed |
| mp_min_element_q.test | 10 | 0.000788s | 0.000807s | 0.000786s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000354s | 0.000360s | 0.000772s | byte equality observed |
| mp_none_of.test | 10 | 0.000793s | 0.000809s | 0.000780s | byte equality observed |
| mp_none_of_q.test | 10 | 0.000788s | 0.000799s | 0.000786s | byte equality observed |
| mp_not_fn.test | 10 | 0.000795s | 0.000820s | 0.000778s | byte equality observed |
| mp_nth_element.test | 10 | 0.000815s | 0.000810s | 0.000781s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.000804s | 0.000835s | 0.000788s | byte equality observed |
| mp_or.test | 10 | 0.000799s | 0.000826s | 0.000768s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.000806s | 0.000811s | 0.000785s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.000811s | 0.000802s | 0.000775s | byte equality observed |
| mp_partial_sum.test | 10 | 0.000809s | 0.000806s | 0.000803s | byte equality observed |
| mp_partition.test | 10 | 0.000818s | 0.000806s | 0.000825s | byte equality observed |
| mp_partition_q.test | 10 | 0.000819s | 0.000832s | 0.000830s | byte equality observed |
| mp_plus.test | 10 | 0.000801s | 0.000817s | 0.000817s | byte equality observed |
| mp_pop_back.test | 10 | 0.000803s | 0.000813s | 0.000801s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000356s | 0.000359s | 0.000818s | byte equality observed |
| mp_pop_front.test | 10 | 0.000793s | 0.000800s | 0.000778s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000354s | 0.000358s | 0.000801s | byte equality observed |
| mp_power_set.test | 10 | 0.000795s | 0.000812s | 0.000791s | byte equality observed |
| mp_product.test | 10 | 0.000802s | 0.000790s | 0.000788s | byte equality observed |
| mp_push_back.test | 10 | 0.000780s | 0.000792s | 0.000795s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000358s | 0.000352s | 0.000760s | byte equality observed |
| mp_push_front.test | 10 | 0.000786s | 0.000792s | 0.000785s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000355s | 0.000359s | 0.000779s | byte equality observed |
| mp_quote.test | 10 | 0.000783s | 0.000808s | 0.000829s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000801s | 0.000818s | 0.000809s | byte equality observed |
| mp_remove.test | 10 | 0.000829s | 0.000795s | 0.000801s | byte equality observed |
| mp_remove_if.test | 10 | 0.000791s | 0.000797s | 0.000779s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.000806s | 0.000816s | 0.000785s | byte equality observed |
| mp_rename.test | 10 | 0.000786s | 0.000803s | 0.000834s | byte equality observed |
| mp_rename_2.test | 10 | 0.000357s | 0.000357s | 0.000790s | byte equality observed |
| mp_rename_v.test | 10 | 0.000354s | 0.000358s | 0.000780s | byte equality observed |
| mp_repeat.test | 10 | 0.000780s | 0.000799s | 0.000805s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000356s | 0.000358s | 0.000764s | byte equality observed |
| mp_repeat_3.test | 10 | 0.000780s | 0.000775s | 0.000759s | byte equality observed |
| mp_replace.test | 10 | 0.000785s | 0.000786s | 0.000791s | byte equality observed |
| mp_replace_at.test | 10 | 0.000790s | 0.000801s | 0.000802s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.000793s | 0.000802s | 0.000823s | byte equality observed |
| mp_replace_front.test | 10 | 0.000789s | 0.000800s | 0.000810s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000357s | 0.000358s | 0.000800s | byte equality observed |
| mp_replace_if.test | 10 | 0.000783s | 0.000817s | 0.000803s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.000796s | 0.000818s | 0.000820s | byte equality observed |
| mp_replace_second.test | 10 | 0.000785s | 0.000786s | 0.000789s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000357s | 0.000354s | 0.000798s | byte equality observed |
| mp_replace_third.test | 10 | 0.000797s | 0.000796s | 0.000802s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000357s | 0.000353s | 0.000765s | byte equality observed |
| mp_reverse.test | 10 | 0.000811s | 0.000803s | 0.000807s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.000804s | 0.000815s | 0.000792s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000808s | 0.000831s | 0.000788s | byte equality observed |
| mp_rotate_left.test | 10 | 0.000818s | 0.000810s | 0.000795s | byte equality observed |
| mp_rotate_right.test | 10 | 0.000817s | 0.000796s | 0.000820s | byte equality observed |
| mp_same.test | 10 | 0.000834s | 0.000794s | 0.000816s | byte equality observed |
| mp_second.test | 10 | 0.000771s | 0.000811s | 0.000794s | byte equality observed |
| mp_second_2.test | 10 | 0.000359s | 0.000353s | 0.000768s | byte equality observed |
| mp_set_contains.test | 10 | 0.000813s | 0.000810s | 0.000800s | byte equality observed |
| mp_set_difference.test | 10 | 0.000808s | 0.000835s | 0.000804s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000796s | 0.000811s | 0.000798s | byte equality observed |
| mp_set_intersection.test | 10 | 0.000813s | 0.000831s | 0.000767s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000786s | 0.000851s | 0.000794s | byte equality observed |
| mp_set_push_back.test | 10 | 0.000810s | 0.000843s | 0.000794s | byte equality observed |
| mp_set_push_front.test | 10 | 0.000837s | 0.000833s | 0.000795s | byte equality observed |
| mp_set_union.test | 10 | 0.000802s | 0.000817s | 0.000799s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.000794s | 0.000802s | 0.000819s | byte equality observed |
| mp_similar.test | 10 | 0.000800s | 0.000838s | 0.000828s | byte equality observed |
| mp_size.test | 10 | 0.000788s | 0.000804s | 0.000781s | byte equality observed |
| mp_size_2.test | 10 | 0.000352s | 0.000360s | 0.000777s | byte equality observed |
| mp_slice.test | 10 | 0.000814s | 0.000809s | 0.000783s | byte equality observed |
| mp_slice_2.test | 10 | 0.000356s | 0.000362s | 0.000772s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.000813s | 0.000799s | 0.000821s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.000829s | 0.000817s | 0.000818s | byte equality observed |
| mp_sort.test | 10 | 0.000800s | 0.000811s | 0.000825s | byte equality observed |
| mp_sort_q.test | 10 | 0.000798s | 0.000787s | 0.000810s | byte equality observed |
| mp_split.test | 10 | 0.000831s | 0.000804s | 0.000797s | byte equality observed |
| mp_starts_with.test | 10 | 0.000831s | 0.000828s | 0.000799s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.000808s | 0.000815s | 0.000802s | byte equality observed |
| mp_take.test | 10 | 0.000800s | 0.000804s | 0.000799s | byte equality observed |
| mp_take_2.test | 10 | 0.000356s | 0.000351s | 0.000773s | byte equality observed |
| mp_third.test | 10 | 0.000776s | 0.000788s | 0.000780s | byte equality observed |
| mp_third_2.test | 10 | 0.000354s | 0.000359s | 0.000770s | byte equality observed |
| mp_transform.test | 10 | 0.000791s | 0.000795s | 0.000795s | byte equality observed |
| mp_transform_2.test | 10 | 0.000772s | 0.000765s | 0.000781s | byte equality observed |
| mp_transform_front.test | 10 | 0.000783s | 0.000783s | 0.000789s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000349s | 0.000349s | 0.000768s | byte equality observed |
| mp_transform_if.test | 10 | 0.000773s | 0.000821s | 0.000781s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.000782s | 0.000808s | 0.000806s | byte equality observed |
| mp_transform_q.test | 10 | 0.000814s | 0.000788s | 0.000786s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.000817s | 0.000785s | 0.000808s | byte equality observed |
| mp_transform_second.test | 10 | 0.000783s | 0.000802s | 0.000815s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000361s | 0.000353s | 0.000766s | byte equality observed |
| mp_transform_sf.test | 10 | 0.000795s | 0.000806s | 0.000798s | byte equality observed |
| mp_transform_third.test | 10 | 0.000796s | 0.000806s | 0.000806s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000360s | 0.000355s | 0.000814s | byte equality observed |
| mp_unique.test | 10 | 0.000792s | 0.000775s | 0.000795s | byte equality observed |
| mp_unique_if.test | 10 | 0.000813s | 0.000815s | 0.000824s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.000820s | 0.000791s | 0.000802s | byte equality observed |
| mp_valid.test | 10 | 0.000804s | 0.000821s | 0.000810s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.000796s | 0.000808s | 0.000801s | byte equality observed |
| mp_value.test | 10 | 0.000355s | 0.000359s | 0.000797s | byte equality observed |
| mp_with_index.test | 10 | 0.001086s | 0.001062s | 0.001012s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000360s | 0.000353s | 0.000791s | byte equality observed |
| mpl.test | 10 | 0.000812s | 0.000788s | 0.000791s | byte equality observed |
| mpl_list.test | 10 | 0.000811s | 0.000828s | 0.000784s | byte equality observed |
| mpl_tuple.test | 10 | 0.000783s | 0.000804s | 0.000809s | byte equality observed |
| mpl_version.test | 10 | 0.000807s | 0.000798s | 0.000809s | byte equality observed |
| set_version.test | 10 | 0.000817s | 0.000805s | 0.000790s | byte equality observed |
| tuple_apply.test | 10 | 0.000815s | 0.000817s | 0.000800s | byte equality observed |
| tuple_for_each.test | 10 | 0.000815s | 0.000767s | 0.000830s | byte equality observed |
| tuple_transform.test | 10 | 0.000806s | 0.000801s | 0.000792s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000808s | 0.000779s | 0.000785s | byte equality observed |
| tuple_version.test | 10 | 0.000790s | 0.000778s | 0.000797s | byte equality observed |
| utility_version.test | 10 | 0.000777s | 0.000790s | 0.000791s | byte equality observed |
| version.test | 10 | 0.000814s | 0.000820s | 0.000810s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45739944580).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
