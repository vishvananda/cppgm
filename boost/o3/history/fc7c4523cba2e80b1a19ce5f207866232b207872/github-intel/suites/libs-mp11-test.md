# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.030345 | 0.056460 | 0.085086 | — | — | — |
| complex_h.test | COMPILE | 0.120303 | 0.246377 | 0.356226 | — | — | — |
| mp_size.test | RUN | 0.140284 | 0.840953 | 0.478500 | 0.001229 | 0.001197 | 0.001120 |
| mp_size_2.test | RUN | 0.012721 | 0.028089 | 0.041787 | 0.000472 | 0.000481 | 0.000999 |
| mp_empty.test | RUN | 0.138117 | 0.522670 | 0.423274 | 0.001063 | 0.001170 | 0.000975 |
| mp_empty_2.test | RUN | 0.013217 | 0.028755 | 0.039093 | 0.000438 | 0.000463 | 0.001009 |
| mp_assign.test | RUN | 0.157899 | 1.083658 | 0.588277 | 0.001312 | 0.001268 | 0.000973 |
| mp_assign_2.test | RUN | 0.012517 | 0.028604 | 0.039040 | 0.000495 | 0.000510 | 0.000934 |
| mp_clear.test | RUN | 0.135817 | 0.460911 | 0.440380 | 0.001224 | 0.001236 | 0.000997 |
| mp_clear_2.test | RUN | 0.012639 | 0.026922 | 0.040160 | 0.000468 | 0.000452 | 0.001062 |
| mp_front.test | RUN | 0.147571 | 0.745810 | 0.501860 | 0.001393 | 0.001259 | 0.001012 |
| mp_front_2.test | RUN | 0.012899 | 0.026550 | 0.040651 | 0.000493 | 0.000457 | 0.001065 |
| mp_pop_front.test | RUN | 0.145108 | 0.790685 | 0.497011 | 0.001312 | 0.001144 | 0.001108 |
| mp_pop_front_2.test | RUN | 0.012642 | 0.028486 | 0.039080 | 0.000422 | 0.000442 | 0.000954 |
| mp_second.test | RUN | 0.146066 | 0.478505 | 0.467268 | 0.001276 | 0.001190 | 0.001012 |
| mp_second_2.test | RUN | 0.013336 | 0.029215 | 0.039199 | 0.000479 | 0.000448 | 0.000982 |
| mp_third.test | RUN | 0.137298 | 0.449238 | 0.444341 | 0.001298 | 0.001120 | 0.001011 |
| mp_third_2.test | RUN | 0.013712 | 0.028550 | 0.036154 | 0.000431 | 0.000490 | 0.000999 |
| mp_push_front.test | RUN | 0.189990 | 1.683544 | 0.833680 | 0.001369 | 0.001227 | 0.001116 |
| mp_push_front_2.test | RUN | 0.013238 | 0.026710 | 0.039118 | 0.000479 | 0.000497 | 0.000963 |
| mp_push_back.test | RUN | 0.183098 | 1.687175 | 0.809522 | 0.001291 | 0.001309 | 0.001038 |
| mp_push_back_2.test | RUN | 0.012708 | 0.028754 | 0.039110 | 0.000523 | 0.000509 | 0.000982 |
| mp_rename.test | RUN | 0.176983 | 1.526958 | 0.702969 | 0.001294 | 0.001000 | 0.001114 |
| mp_rename_2.test | RUN | 0.013069 | 0.027991 | 0.039548 | 0.000497 | 0.000460 | 0.000945 |
| mp_append.test | RUN | 0.181441 | 1.761294 | 0.766320 | 0.001175 | 0.001292 | 0.001140 |
| mp_append_2.test | RUN | 0.425795 | 3.944767 | 1.061340 | 0.001316 | 0.001149 | 0.001155 |
| mp_append_3.test | RUN | 0.013726 | 0.027764 | 0.042605 | 0.000590 | 0.000441 | 0.001064 |
| mp_append_sf.test | RUN | 0.130847 | 0.408213 | 0.410987 | 0.001245 | 0.001169 | 0.001043 |
| mp_replace_front.test | RUN | 0.162352 | 1.230694 | 0.643742 | 0.001031 | 0.001250 | 0.001066 |
| mp_replace_front_2.test | RUN | 0.014280 | 0.028052 | 0.040678 | 0.000517 | 0.000441 | 0.001016 |
| mp_replace_second.test | RUN | 0.163178 | 0.794296 | 0.569539 | 0.001208 | 0.001227 | 0.001070 |
| mp_replace_second_2.test | RUN | 0.014096 | 0.028025 | 0.040587 | 0.000498 | 0.000466 | 0.001035 |
| mp_replace_third.test | RUN | 0.152991 | 0.642527 | 0.531348 | 0.001378 | 0.001287 | 0.001069 |
| mp_replace_third_2.test | RUN | 0.012743 | 0.026655 | 0.042883 | 0.000510 | 0.000480 | 0.000992 |
| mp_apply_q.test | RUN | 0.168708 | 1.523093 | 0.712677 | 0.001269 | 0.001104 | 0.001076 |
| mp_apply_q_sf.test | RUN | 0.137398 | 0.426514 | 0.420810 | 0.001187 | 0.001282 | 0.001116 |
| mp_is_list.test | RUN | 0.143731 | 0.516801 | 0.445145 | 0.000974 | 0.001074 | 0.001163 |
| mp_list_c.test | RUN | 0.149173 | 0.630480 | 0.494733 | 0.001254 | 0.001244 | 0.001025 |
| mp_transform_front.test | RUN | 0.166438 | 1.258382 | 0.610607 | 0.001156 | 0.001343 | 0.001057 |
| mp_transform_front_2.test | RUN | 0.013394 | 0.029012 | 0.042826 | 0.000528 | 0.000453 | 0.001035 |
| mp_transform_second.test | RUN | 0.156717 | 1.063286 | 0.548137 | 0.001218 | 0.001137 | 0.001001 |
| mp_transform_second_2.test | RUN | 0.013067 | 0.027417 | 0.040641 | 0.000452 | 0.000476 | 0.000985 |
| mp_transform_third.test | RUN | 0.146610 | 0.801025 | 0.503688 | 0.001252 | 0.001325 | 0.001006 |
| mp_transform_third_2.test | RUN | 0.012805 | 0.027690 | 0.039589 | 0.000511 | 0.000488 | 0.001025 |
| mp_list_v.test | RUN | 0.013539 | 0.027869 | 0.039704 | 0.000476 | 0.000442 | 0.001003 |
| mp_rename_v.test | RUN | 0.013675 | 0.027343 | 0.039198 | 0.000419 | 0.000445 | 0.000943 |
| mp_is_value_list.test | RUN | 0.122483 | 0.308151 | 0.401087 | 0.001287 | 0.001090 | 0.001068 |
| mp_transform.test | RUN | 0.335828 | 2.655520 | 1.326742 | 0.001142 | 0.001088 | 0.001114 |
| mp_transform_2.test | RUN | 0.125444 | 0.272079 | 0.369560 | 0.001150 | 0.001236 | 0.000998 |
| mp_transform_q.test | RUN | 0.329566 | 2.527524 | 1.270915 | 0.001319 | 0.001148 | 0.001129 |
| mp_transform_q_2.test | RUN | 0.341165 | 0.779994 | 1.587797 | 0.001369 | 0.001148 | 0.001106 |
| mp_transform_sf.test | RUN | 0.146453 | 0.435293 | 0.441946 | 0.001234 | 0.001397 | 0.001162 |
| mp_transform_if.test | RUN | 0.181949 | 1.243122 | 0.680032 | 0.001309 | 0.001257 | 0.001100 |
| mp_transform_if_q.test | RUN | 0.186090 | 1.244446 | 0.696466 | 0.001232 | 0.001098 | 0.001105 |
| mp_filter.test | RUN | 0.154598 | 0.727669 | 0.510979 | 0.001314 | 0.001259 | 0.000989 |
| mp_fill.test | RUN | 0.153562 | 0.553516 | 0.480744 | 0.001224 | 0.001135 | 0.001072 |
| mp_fill_2.test | RUN | 0.023082 | 0.044135 | 0.069157 | 0.000490 | 0.000458 | 0.000997 |
| mp_count.test | RUN | 0.286398 | 1.340999 | 0.762400 | 0.001158 | 0.001278 | 0.001035 |
| mp_count_if.test | RUN | 0.296646 | 1.334680 | 0.816721 | 0.001177 | 0.001227 | 0.001038 |
| mp_count_if_q.test | RUN | 0.152264 | 0.893109 | 0.493567 | 0.001215 | 0.001165 | 0.001096 |
| mp_contains.test | RUN | 0.141982 | 0.526016 | 0.460176 | 0.001162 | 0.001270 | 0.001105 |
| mp_starts_with.test | RUN | 0.145288 | 0.512929 | 0.452421 | 0.001207 | 0.001099 | 0.001005 |
| mp_starts_with_sf.test | RUN | 0.140723 | 0.445678 | 0.444185 | 0.001123 | 0.001282 | 0.001019 |
| mp_repeat.test | RUN | 0.217987 | 2.235651 | 0.891961 | 0.001311 | 0.001204 | 0.001037 |
| mp_repeat_2.test | RUN | 0.023097 | 0.045993 | 0.066840 | 0.000499 | 0.000446 | 0.001008 |
| mp_repeat_3.test | RUN | 0.180830 | 0.270718 | 0.426101 | 0.001211 | 0.001218 | 0.001114 |
| mp_product.test | RUN | 0.174926 | 1.341399 | 0.622179 | 0.001322 | 0.001266 | 0.000899 |
| mp_drop.test | RUN | 0.178878 | 1.682975 | 0.749995 | 0.001231 | 0.001112 | 0.000979 |
| mp_drop_2.test | RUN | 0.022477 | 0.043733 | 0.069759 | 0.000622 | 0.000454 | 0.001045 |
| mp_iota.test | RUN | 0.174793 | 1.401185 | 0.640431 | 0.001079 | 0.001115 | 0.001024 |
| mp_iota_2.test | RUN | 0.187576 | 1.696238 | 0.733257 | 0.001084 | 0.001222 | 0.000979 |
| mp_at.test | RUN | 0.150082 | 0.732424 | 0.509069 | 0.000975 | 0.001241 | 0.001030 |
| mp_at_2.test | RUN | 0.022134 | 0.041629 | 0.069782 | 0.000412 | 0.000488 | 0.001029 |
| mp_at_sf.test | RUN | 0.139637 | 0.444066 | 0.432471 | 0.001258 | 0.001236 | 0.001074 |
| mp_take.test | RUN | 0.250296 | 2.205557 | 0.890324 | 0.001253 | 0.001155 | 0.001061 |
| mp_take_2.test | RUN | 0.021704 | 0.043262 | 0.065002 | 0.000504 | 0.000473 | 0.001032 |
| mp_slice.test | RUN | 0.289213 | 2.241477 | 1.141785 | 0.001105 | 0.001201 | 0.000989 |
| mp_slice_2.test | RUN | 0.022862 | 0.045405 | 0.065472 | 0.000475 | 0.000458 | 0.000955 |
| mp_replace.test | RUN | 0.180644 | 1.126800 | 0.710410 | 0.001267 | 0.001285 | 0.001062 |
| mp_replace_if.test | RUN | 0.171339 | 0.982778 | 0.650847 | 0.001248 | 0.001163 | 0.001001 |
| mp_replace_if_q.test | RUN | 0.170098 | 0.994232 | 0.668327 | 0.001118 | 0.001257 | 0.001077 |
| mp_copy_if.test | RUN | 0.172826 | 1.406523 | 0.634555 | 0.001190 | 0.001241 | 0.001077 |
| mp_copy_if_q.test | RUN | 0.173984 | 1.396509 | 0.624263 | 0.001410 | 0.001181 | 0.001020 |
| mp_remove.test | RUN | 0.167930 | 0.926654 | 0.638505 | 0.001191 | 0.001216 | 0.000970 |
| mp_remove_if.test | RUN | 0.179870 | 1.487023 | 0.671775 | 0.001179 | 0.001284 | 0.001113 |
| mp_remove_if_q.test | RUN | 0.181373 | 1.493457 | 0.682030 | 0.001143 | 0.001108 | 0.001097 |
| mp_partition.test | RUN | 0.176644 | 1.386219 | 0.705941 | 0.001121 | 0.001324 | 0.001077 |
| mp_partition_q.test | RUN | 0.177292 | 1.381346 | 0.719781 | 0.001345 | 0.001224 | 0.001053 |
| mp_sort.test | RUN | 0.167565 | 0.995905 | 0.635899 | 0.001174 | 0.001261 | 0.001083 |
| mp_sort_q.test | RUN | 0.165857 | 0.985256 | 0.615371 | 0.001260 | 0.001223 | 0.000982 |
| mp_find.test | RUN | 0.161549 | 1.065582 | 0.547067 | 0.001138 | 0.001144 | 0.001074 |
| mp_find_if.test | RUN | 0.158684 | 0.982670 | 0.512254 | 0.001526 | 0.001270 | 0.001017 |
| mp_find_if_q.test | RUN | 0.172976 | 1.097773 | 0.631808 | 0.001213 | 0.001194 | 0.001102 |
| mp_reverse.test | RUN | 0.344948 | 2.932738 | 1.247978 | 0.001452 | 0.001152 | 0.001063 |
| mp_fold.test | RUN | 0.629587 | 2.258501 | 3.199728 | 0.001337 | 0.001364 | 0.001054 |
| mp_fold_q.test | RUN | 0.159553 | 0.971734 | 0.598206 | 0.001199 | 0.001300 | 0.001069 |
| mp_fold_q_sf.test | RUN | 0.139070 | 0.453022 | 0.456272 | 0.001085 | 0.001156 | 0.001160 |
| mp_reverse_fold.test | RUN | 0.296154 | 2.181173 | 0.885556 | 0.001149 | 0.001250 | 0.001109 |
| mp_reverse_fold_q.test | RUN | 0.170323 | 1.202954 | 0.629592 | 0.001288 | 0.001266 | 0.001017 |
| mp_unique.test | RUN | 0.170676 | 1.089506 | 0.616058 | 0.001293 | 0.001202 | 0.001096 |
| mp_unique_if.test | RUN | 0.301565 | 2.294373 | 0.974830 | 0.001252 | 0.001270 | 0.001095 |
| mp_unique_if_q.test | RUN | 0.265965 | 2.228875 | 0.814113 | 0.001248 | 0.001244 | 0.001049 |
| mp_all_of.test | RUN | 0.401815 | 1.177149 | 1.029747 | 0.001335 | 0.001300 | 0.001056 |
| mp_all_of_q.test | RUN | 0.142845 | 0.525319 | 0.452632 | 0.001404 | 0.001220 | 0.001108 |
| mp_any_of.test | RUN | 0.398007 | 1.228720 | 1.046030 | 0.001224 | 0.001227 | 0.000988 |
| mp_any_of_q.test | RUN | 0.146715 | 0.519489 | 0.470460 | 0.001412 | 0.001182 | 0.001134 |
| mp_none_of.test | RUN | 0.392368 | 1.229564 | 1.031446 | 0.001148 | 0.001293 | 0.001059 |
| mp_none_of_q.test | RUN | 0.140966 | 0.525908 | 0.424468 | 0.001453 | 0.001252 | 0.000978 |
| mp_replace_at.test | RUN | 0.174747 | 1.084946 | 0.690877 | 0.001205 | 0.000884 | 0.001134 |
| mp_replace_at_c.test | RUN | 0.174552 | 1.086881 | 0.709246 | 0.001523 | 0.001264 | 0.001117 |
| mp_for_each.test | RUN | 0.162167 | 0.696221 | 0.704233 | 0.001199 | 0.001114 | 0.001117 |
| mp_insert.test | RUN | 0.275537 | 2.237226 | 0.997256 | 0.001252 | 0.001206 | 0.000990 |
| mp_insert_2.test | RUN | 0.022480 | 0.043818 | 0.069187 | 0.000592 | 0.000485 | 0.001021 |
| mp_erase.test | RUN | 0.305669 | 2.359665 | 1.188545 | 0.001227 | 0.001175 | 0.001055 |
| mp_erase_2.test | RUN | 0.021656 | 0.044958 | 0.064596 | 0.000416 | 0.000489 | 0.001100 |
| mp_with_index.test | RUN | 0.403845 | 4.672098 | 2.605572 | 0.001625 | 0.001559 | 0.001327 |
| mp_with_index_cx.test | RUN | 0.002994 | 0.012965 | 0.020412 | 0.000505 | 0.000485 | 0.001083 |
| mp_from_sequence.test | RUN | 0.175933 | 1.250486 | 0.672772 | 0.001365 | 0.001209 | 0.001100 |
| mp_from_sequence_2.test | RUN | 0.188430 | 1.478785 | 0.725277 | 0.001152 | 0.001217 | 0.001098 |
| mp_from_sequence_3.test | RUN | 0.155755 | 0.642156 | 0.529438 | 0.001091 | 0.001272 | 0.001032 |
| mp_min_element.test | RUN | 0.147403 | 0.566149 | 0.463402 | 0.001213 | 0.001144 | 0.001053 |
| mp_min_element_2.test | RUN | 0.023264 | 0.043384 | 0.069214 | 0.000544 | 0.000483 | 0.001054 |
| mp_min_element_q.test | RUN | 0.151006 | 0.576179 | 0.473284 | 0.001156 | 0.001181 | 0.001043 |
| mp_min_element_q_2.test | RUN | 0.021665 | 0.044153 | 0.067402 | 0.000531 | 0.000482 | 0.001015 |
| mp_max_element.test | RUN | 0.151937 | 0.567250 | 0.465228 | 0.001295 | 0.001226 | 0.001059 |
| mp_max_element_2.test | RUN | 0.022513 | 0.041946 | 0.064112 | 0.000405 | 0.000460 | 0.000991 |
| mp_max_element_q.test | RUN | 0.148164 | 0.576252 | 0.475257 | 0.001167 | 0.001197 | 0.001085 |
| mp_max_element_q_2.test | RUN | 0.022044 | 0.041778 | 0.068556 | 0.000425 | 0.000507 | 0.001004 |
| mp_nth_element.test | RUN | 0.161772 | 0.826375 | 0.585951 | 0.001078 | 0.001227 | 0.000964 |
| mp_nth_element_q.test | RUN | 0.165523 | 0.796865 | 0.579669 | 0.001134 | 0.001161 | 0.000980 |
| mp_back.test | RUN | 0.159006 | 0.669617 | 0.542230 | 0.001211 | 0.001270 | 0.000999 |
| mp_back_2.test | RUN | 0.021281 | 0.044022 | 0.067922 | 0.000481 | 0.000459 | 0.000795 |
| mp_pop_back.test | RUN | 0.471747 | 4.515030 | 1.209906 | 0.001045 | 0.001263 | 0.001029 |
| mp_pop_back_2.test | RUN | 0.022446 | 0.045678 | 0.062208 | 0.000485 | 0.000500 | 0.001004 |
| mp_flatten.test | RUN | 0.187725 | 1.608812 | 0.778881 | 0.001410 | 0.001208 | 0.001030 |
| mp_rotate_left.test | RUN | 0.186714 | 1.718165 | 0.762818 | 0.001249 | 0.001214 | 0.001020 |
| mp_rotate_right.test | RUN | 0.187574 | 1.729285 | 0.791654 | 0.001068 | 0.001121 | 0.000949 |
| mp_power_set.test | RUN | 0.174881 | 1.650275 | 0.780143 | 0.001295 | 0.001289 | 0.001077 |
| mp_partial_sum.test | RUN | 0.244477 | 2.230759 | 0.890153 | 0.001223 | 0.001313 | 0.001035 |
| mp_iterate.test | RUN | 0.163840 | 0.638239 | 0.619495 | 0.001352 | 0.001199 | 0.001104 |
| mp_pairwise_fold.test | RUN | 0.189137 | 1.494530 | 0.802808 | 0.001217 | 0.000995 | 0.001007 |
| mp_pairwise_fold_q.test | RUN | 0.150666 | 0.432366 | 0.444638 | 0.001327 | 0.001273 | 0.001003 |
| mp_sliding_fold.test | RUN | 0.374115 | 2.960248 | 1.483176 | 0.001244 | 0.001287 | 0.001146 |
| mp_sliding_fold_q.test | RUN | 0.380647 | 2.932213 | 1.472338 | 0.001345 | 0.001204 | 0.000991 |
| mp_intersperse.test | RUN | 0.177093 | 1.072680 | 0.700209 | 0.001288 | 0.001166 | 0.001280 |
| mp_split.test | RUN | 0.264450 | 2.088043 | 0.981273 | 0.001246 | 0.001275 | 0.001011 |
| mp_join.test | RUN | 0.199625 | 1.756501 | 0.865366 | 0.001286 | 0.001169 | 0.001003 |
| integral.test | RUN | 0.152667 | 0.762077 | 0.529357 | 0.001041 | 0.001105 | 0.000986 |
| mp_value.test | RUN | 0.009891 | 0.023742 | 0.032918 | 0.000562 | 0.000465 | 0.000957 |
| mp_identity.test | RUN | 0.140763 | 0.708923 | 0.495788 | 0.001263 | 0.001086 | 0.001003 |
| mp_inherit.test | RUN | 0.138336 | 0.497515 | 0.443232 | 0.001230 | 0.001163 | 0.000973 |
| mp_if.test | RUN | 0.140137 | 0.572672 | 0.457587 | 0.001103 | 0.001195 | 0.000988 |
| mp_if_sf.test | RUN | 0.131218 | 0.414465 | 0.415002 | 0.001240 | 0.001328 | 0.001004 |
| mp_eval_if.test | RUN | 0.142196 | 0.615586 | 0.471549 | 0.001338 | 0.001118 | 0.000968 |
| mp_eval_if_sf.test | RUN | 0.130017 | 0.422979 | 0.395630 | 0.001382 | 0.001266 | 0.000978 |
| mp_valid.test | RUN | 0.137600 | 0.438211 | 0.432733 | 0.001129 | 0.001110 | 0.001033 |
| mp_defer.test | RUN | 0.147713 | 0.727588 | 0.521863 | 0.001149 | 0.001269 | 0.001021 |
| mp_quote.test | RUN | 0.156536 | 0.751951 | 0.511282 | 0.001435 | 0.001121 | 0.001010 |
| mp_invoke_q.test | RUN | 0.159660 | 0.984269 | 0.596610 | 0.001388 | 0.001045 | 0.001098 |
| mp_invoke_q_sf.test | RUN | 0.135994 | 0.430490 | 0.403557 | 0.001493 | 0.001174 | 0.001009 |
| mp_quote_trait.test | RUN | 0.146821 | 0.834231 | 0.518912 | 0.001238 | 0.001139 | 0.001037 |
| mp_cond.test | RUN | 0.143466 | 0.495639 | 0.449759 | 0.001444 | 0.001210 | 0.001013 |
| mp_cond_sf.test | RUN | 0.136247 | 0.424998 | 0.408425 | 0.001186 | 0.001171 | 0.001044 |
| mp_not_fn.test | RUN | 0.137332 | 0.421496 | 0.413669 | 0.001264 | 0.001241 | 0.001040 |
| mp_eval_if_not.test | RUN | 0.141357 | 0.604275 | 0.468291 | 0.001266 | 0.001113 | 0.001133 |
| mp_eval_or.test | RUN | 0.138833 | 0.324278 | 0.428281 | 0.001214 | 0.001134 | 0.001098 |
| mp_compose.test | RUN | 0.152305 | 1.022333 | 0.565050 | 0.001520 | 0.001159 | 0.001069 |
| mp_valid_and_true.test | RUN | 0.133948 | 0.516565 | 0.445795 | 0.001344 | 0.001266 | 0.001026 |
| mp_compose_sf.test | COMPILE | 0.032341 | 0.054259 | 0.096244 | — | — | — |
| integer_sequence.test | RUN | 0.167244 | 0.997303 | 0.640909 | 0.001147 | 0.001184 | 0.001094 |
| tuple_for_each.test | RUN | 0.134088 | 0.359249 | 0.455724 | 0.001294 | 0.001149 | 0.001141 |
| tuple_for_each_cx.test | COMPILE | 0.025707 | 0.047827 | 0.075750 | — | — | — |
| tuple_apply.test | RUN | 0.138174 | 0.358931 | 0.462488 | 0.001181 | 0.001119 | 0.001014 |
| tuple_apply_cx.test | COMPILE | 0.037141 | 0.069076 | 0.106463 | — | — | — |
| construct_from_tuple.test | RUN | 0.139155 | 0.387872 | 0.447836 | 0.001383 | 0.001155 | 0.001027 |
| construct_from_tuple_cx.test | COMPILE | 0.037773 | 0.071702 | 0.104146 | — | — | — |
| tuple_transform.test | RUN | 0.227023 | 0.775413 | 0.889264 | 0.001548 | 0.000967 | 0.001016 |
| tuple_transform_2.test | RUN | 0.188988 | 0.566863 | 0.799815 | 0.001166 | 0.001160 | 0.001128 |
| tuple_transform_cx.test | COMPILE | 0.033666 | 0.068552 | 0.096877 | — | — | — |
| mp_set_contains.test | RUN | 0.138920 | 0.518243 | 0.459458 | 0.001212 | 0.001078 | 0.001056 |
| mp_set_push_back.test | RUN | 0.189797 | 1.657418 | 0.795122 | 0.001177 | 0.001242 | 0.001048 |
| mp_set_push_front.test | RUN | 0.251462 | 1.985146 | 0.908901 | 0.001262 | 0.001227 | 0.001038 |
| mp_is_set.test | RUN | 0.146991 | 0.517640 | 0.471909 | 0.001426 | 0.001236 | 0.001120 |
| mp_set_union.test | RUN | 0.175450 | 1.382005 | 0.767594 | 0.001240 | 0.001164 | 0.001075 |
| mp_set_union_sf.test | RUN | 0.139311 | 0.413484 | 0.423219 | 0.001154 | 0.001103 | 0.001051 |
| mp_set_difference.test | RUN | 0.166173 | 1.091996 | 0.647249 | 0.001223 | 0.001171 | 0.001051 |
| mp_set_difference_sf.test | RUN | 0.132677 | 0.409524 | 0.411857 | 0.001080 | 0.001240 | 0.001063 |
| mp_set_intersection.test | RUN | 0.162446 | 1.066934 | 0.621237 | 0.001389 | 0.001148 | 0.001026 |
| mp_set_intersection_sf.test | RUN | 0.137497 | 0.413855 | 0.428958 | 0.001272 | 0.001222 | 0.001068 |
| mp_all.test | RUN | 0.140152 | 0.513772 | 0.445516 | 0.001301 | 0.001312 | 0.001014 |
| mp_all_2.test | RUN | 0.402392 | 1.115244 | 1.038411 | 0.001367 | 0.001269 | 0.001045 |
| mp_and.test | RUN | 0.141376 | 0.507475 | 0.435965 | 0.001408 | 0.001315 | 0.001056 |
| mp_any.test | RUN | 0.142323 | 0.518292 | 0.456885 | 0.001270 | 0.001232 | 0.001023 |
| mp_any_2.test | RUN | 0.387931 | 1.108224 | 1.031319 | 0.001486 | 0.001162 | 0.001078 |
| mp_or.test | RUN | 0.144912 | 0.519219 | 0.440830 | 0.001361 | 0.001259 | 0.000988 |
| mp_same.test | RUN | 0.265923 | 0.859077 | 0.696189 | 0.001120 | 0.000923 | 0.001072 |
| mp_plus.test | RUN | 0.148764 | 0.616642 | 0.489304 | 0.001281 | 0.001262 | 0.001115 |
| mp_less.test | RUN | 0.142744 | 0.509498 | 0.426164 | 0.001264 | 0.001052 | 0.001113 |
| mp_min.test | RUN | 0.136344 | 0.472458 | 0.449996 | 0.001510 | 0.001230 | 0.001158 |
| mp_max.test | RUN | 0.146150 | 0.524269 | 0.464170 | 0.001268 | 0.001149 | 0.000964 |
| mp_similar.test | RUN | 0.138698 | 0.515784 | 0.459867 | 0.001178 | 0.001135 | 0.001006 |
| mp_map_find.test | RUN | 0.166661 | 0.957541 | 0.608197 | 0.001485 | 0.001319 | 0.001216 |
| mp_map_find_2.test | RUN | 0.150143 | 0.362414 | 0.517928 | 0.001420 | 0.001158 | 0.001157 |
| mp_map_find_3.test | RUN | 0.150995 | 0.357006 | 0.511504 | 0.001190 | 0.001141 | 0.000957 |
| mp_map_find_4.test | RUN | 0.148103 | 0.337763 | 0.472742 | 0.001214 | 0.001111 | 0.001029 |
| mp_map_contains.test | RUN | 0.149491 | 0.530451 | 0.474909 | 0.001171 | 0.001268 | 0.001040 |
| mp_map_insert.test | RUN | 0.192426 | 1.828170 | 0.864445 | 0.001229 | 0.001152 | 0.001235 |
| mp_map_replace.test | RUN | 0.264586 | 2.081650 | 1.011928 | 0.001133 | 0.001156 | 0.001053 |
| mp_map_erase.test | RUN | 0.194373 | 1.555496 | 0.822534 | 0.001139 | 0.001291 | 0.001153 |
| mp_map_update.test | RUN | 0.165922 | 1.004666 | 0.632423 | 0.001200 | 0.001254 | 0.001078 |
| mp_map_update_q.test | RUN | 0.166688 | 1.001295 | 0.645208 | 0.001166 | 0.001211 | 0.000985 |
| mp_map_keys.test | RUN | 0.164527 | 0.889491 | 0.614826 | 0.001375 | 0.001163 | 0.001036 |
| mp_is_map.test | RUN | 0.150989 | 0.524279 | 0.480227 | 0.001033 | 0.001186 | 0.001193 |
| mp_bind.test | RUN | 0.184682 | 1.607504 | 0.763485 | 0.001110 | 0.001252 | 0.001170 |
| mp_bind_q.test | RUN | 0.162504 | 1.017440 | 0.601430 | 0.001140 | 0.001316 | 0.001049 |
| mp_bind_front.test | RUN | 0.159101 | 1.085756 | 0.569399 | 0.001365 | 0.001218 | 0.000965 |
| mp_bind_back.test | RUN | 0.157557 | 1.098659 | 0.569716 | 0.000894 | 0.001078 | 0.000942 |
| mp_lambda.test | RUN | 0.379004 | 3.290689 | 1.569337 | 0.001256 | 0.000954 | 0.001175 |
| mpl.test | RUN | 0.321780 | 0.843625 | 1.231625 | 0.001162 | 0.001058 | 0.001050 |
| mpl_list.test | RUN | 0.173055 | 0.633443 | 0.551227 | 0.001388 | 0.001295 | 0.001230 |
| mpl_tuple.test | RUN | 0.174057 | 0.634400 | 0.552317 | 0.001222 | 0.001134 | 0.001069 |
| version.test | RUN | 0.087540 | 0.224017 | 0.281325 | 0.001511 | 0.001412 | 0.001049 |
| mp11_version.test | RUN | 0.108698 | 0.261168 | 0.326776 | 0.001181 | 0.001227 | 0.001147 |
| list_version.test | RUN | 0.090038 | 0.231473 | 0.290007 | 0.001133 | 0.001178 | 0.001122 |
| algorithm_version.test | RUN | 0.097855 | 0.246283 | 0.315371 | 0.001063 | 0.001303 | 0.001008 |
| integral_version.test | RUN | 0.084493 | 0.226806 | 0.276794 | 0.001475 | 0.001239 | 0.001082 |
| utility_version.test | RUN | 0.088556 | 0.225833 | 0.285224 | 0.001057 | 0.001248 | 0.000949 |
| function_version.test | RUN | 0.090027 | 0.238036 | 0.288129 | 0.000841 | 0.001469 | 0.001091 |
| map_version.test | RUN | 0.100263 | 0.252413 | 0.317285 | 0.001146 | 0.001208 | 0.000984 |
| set_version.test | RUN | 0.089360 | 0.241126 | 0.295515 | 0.001287 | 0.001151 | 0.001092 |
| bind_version.test | RUN | 0.101636 | 0.246055 | 0.301121 | 0.000817 | 0.001225 | 0.001010 |
| integer_sequence_version.test | RUN | 0.087385 | 0.229750 | 0.266037 | 0.001175 | 0.001113 | 0.001129 |
| tuple_version.test | RUN | 0.100793 | 0.241674 | 0.261695 | 0.000870 | 0.001073 | 0.000770 |
| mpl_version.test | RUN | 0.073655 | 0.172600 | 0.220457 | 0.000931 | 0.001022 | 0.000779 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.007× | 1.001×, 1.013× | 0.997× |
| clang | 1.098× | 1.098×, 1.098× | 1.007× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46032707836).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000739s | 0.000761s | 0.000723s | byte equality observed |
| bind_version.test | 10 | 0.000729s | 0.000731s | 0.000732s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000752s | 0.000760s | 0.000746s | byte equality observed |
| function_version.test | 10 | 0.000737s | 0.000735s | 0.000727s | byte equality observed |
| integer_sequence.test | 10 | 0.000748s | 0.000751s | 0.000743s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000741s | 0.000753s | 0.000747s | byte equality observed |
| integral.test | 10 | 0.000735s | 0.000723s | 0.000745s | byte equality observed |
| integral_version.test | 10 | 0.000741s | 0.000764s | 0.000743s | byte equality observed |
| list_version.test | 10 | 0.000733s | 0.000741s | 0.000729s | byte equality observed |
| map_version.test | 10 | 0.000748s | 0.000748s | 0.000720s | byte equality observed |
| mp11_version.test | 10 | 0.000738s | 0.000744s | 0.000782s | byte equality observed |
| mp_all.test | 10 | 0.000743s | 0.000768s | 0.000761s | byte equality observed |
| mp_all_2.test | 10 | 0.000745s | 0.000744s | 0.000795s | byte equality observed |
| mp_all_of.test | 10 | 0.000752s | 0.000755s | 0.000766s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000741s | 0.000746s | 0.000810s | byte equality observed |
| mp_and.test | 10 | 0.000738s | 0.000742s | 0.000825s | byte equality observed |
| mp_any.test | 10 | 0.000744s | 0.000755s | 0.000834s | byte equality observed |
| mp_any_2.test | 10 | 0.000737s | 0.000750s | 0.000807s | byte equality observed |
| mp_any_of.test | 10 | 0.000729s | 0.000751s | 0.000820s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000729s | 0.000749s | 0.000812s | byte equality observed |
| mp_append.test | 10 | 0.000741s | 0.000751s | 0.000800s | byte equality observed |
| mp_append_2.test | 10 | 0.000765s | 0.000755s | 0.000820s | byte equality observed |
| mp_append_3.test | 10 | 0.000348s | 0.000344s | 0.000815s | byte equality observed |
| mp_append_sf.test | 10 | 0.000806s | 0.000756s | 0.000817s | byte equality observed |
| mp_apply_q.test | 10 | 0.000804s | 0.000750s | 0.000804s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.000783s | 0.000747s | 0.000802s | byte equality observed |
| mp_assign.test | 10 | 0.000801s | 0.000761s | 0.000792s | byte equality observed |
| mp_assign_2.test | 10 | 0.000369s | 0.000351s | 0.000795s | byte equality observed |
| mp_at.test | 10 | 0.000798s | 0.000764s | 0.000782s | byte equality observed |
| mp_at_2.test | 10 | 0.000369s | 0.000352s | 0.000768s | byte equality observed |
| mp_at_sf.test | 10 | 0.000811s | 0.000777s | 0.000800s | byte equality observed |
| mp_back.test | 10 | 0.000792s | 0.000810s | 0.000809s | byte equality observed |
| mp_back_2.test | 10 | 0.000364s | 0.000369s | 0.000771s | byte equality observed |
| mp_bind.test | 10 | 0.000797s | 0.000811s | 0.000799s | byte equality observed |
| mp_bind_back.test | 10 | 0.000809s | 0.000831s | 0.000808s | byte equality observed |
| mp_bind_front.test | 10 | 0.000794s | 0.000814s | 0.000814s | byte equality observed |
| mp_bind_q.test | 10 | 0.000845s | 0.000829s | 0.000839s | byte equality observed |
| mp_clear.test | 10 | 0.000795s | 0.000805s | 0.000837s | byte equality observed |
| mp_clear_2.test | 10 | 0.000368s | 0.000361s | 0.000820s | byte equality observed |
| mp_compose.test | 10 | 0.000812s | 0.000812s | 0.000802s | byte equality observed |
| mp_cond.test | 10 | 0.000826s | 0.000813s | 0.000800s | byte equality observed |
| mp_cond_sf.test | 10 | 0.000790s | 0.000826s | 0.000792s | byte equality observed |
| mp_contains.test | 10 | 0.000819s | 0.000817s | 0.000825s | byte equality observed |
| mp_copy_if.test | 10 | 0.000839s | 0.000801s | 0.000799s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.000818s | 0.000831s | 0.000810s | byte equality observed |
| mp_count.test | 10 | 0.000791s | 0.000854s | 0.000835s | byte equality observed |
| mp_count_if.test | 10 | 0.000795s | 0.000851s | 0.000850s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000809s | 0.000822s | 0.000821s | byte equality observed |
| mp_defer.test | 10 | 0.000813s | 0.000806s | 0.000805s | byte equality observed |
| mp_drop.test | 10 | 0.000798s | 0.000808s | 0.000811s | byte equality observed |
| mp_drop_2.test | 10 | 0.000365s | 0.000360s | 0.000814s | byte equality observed |
| mp_empty.test | 10 | 0.000803s | 0.000797s | 0.000792s | byte equality observed |
| mp_empty_2.test | 10 | 0.000367s | 0.000364s | 0.000795s | byte equality observed |
| mp_erase.test | 10 | 0.000828s | 0.000812s | 0.000829s | byte equality observed |
| mp_erase_2.test | 10 | 0.000366s | 0.000362s | 0.000785s | byte equality observed |
| mp_eval_if.test | 10 | 0.000804s | 0.000801s | 0.000781s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.000794s | 0.000788s | 0.000810s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.000790s | 0.000790s | 0.000798s | byte equality observed |
| mp_eval_or.test | 10 | 0.000799s | 0.000776s | 0.000808s | byte equality observed |
| mp_fill.test | 10 | 0.000790s | 0.000795s | 0.000807s | byte equality observed |
| mp_fill_2.test | 10 | 0.000365s | 0.000367s | 0.000783s | byte equality observed |
| mp_filter.test | 10 | 0.000802s | 0.000830s | 0.000786s | byte equality observed |
| mp_find.test | 10 | 0.000785s | 0.000847s | 0.000795s | byte equality observed |
| mp_find_if.test | 10 | 0.000787s | 0.000836s | 0.000803s | byte equality observed |
| mp_find_if_q.test | 10 | 0.000788s | 0.000809s | 0.000791s | byte equality observed |
| mp_flatten.test | 10 | 0.000809s | 0.000832s | 0.000793s | byte equality observed |
| mp_fold.test | 10 | 0.000831s | 0.000841s | 0.000813s | byte equality observed |
| mp_fold_q.test | 10 | 0.000792s | 0.000826s | 0.000785s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.000803s | 0.000815s | 0.000828s | byte equality observed |
| mp_for_each.test | 10 | 0.000811s | 0.000819s | 0.000825s | byte equality observed |
| mp_from_sequence.test | 10 | 0.000815s | 0.000805s | 0.000821s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.000810s | 0.000827s | 0.000838s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.000818s | 0.000793s | 0.000816s | byte equality observed |
| mp_front.test | 10 | 0.000790s | 0.000802s | 0.000806s | byte equality observed |
| mp_front_2.test | 10 | 0.000361s | 0.000358s | 0.000764s | byte equality observed |
| mp_identity.test | 10 | 0.000790s | 0.000813s | 0.000781s | byte equality observed |
| mp_if.test | 10 | 0.000786s | 0.000805s | 0.000809s | byte equality observed |
| mp_if_sf.test | 10 | 0.000801s | 0.000819s | 0.000804s | byte equality observed |
| mp_inherit.test | 10 | 0.000810s | 0.000829s | 0.000801s | byte equality observed |
| mp_insert.test | 10 | 0.000799s | 0.000814s | 0.000789s | byte equality observed |
| mp_insert_2.test | 10 | 0.000365s | 0.000367s | 0.000799s | byte equality observed |
| mp_intersperse.test | 10 | 0.000796s | 0.000851s | 0.000808s | byte equality observed |
| mp_invoke_q.test | 10 | 0.000810s | 0.000822s | 0.000796s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.000828s | 0.000828s | 0.000798s | byte equality observed |
| mp_iota.test | 10 | 0.000825s | 0.000809s | 0.000796s | byte equality observed |
| mp_iota_2.test | 10 | 0.000803s | 0.000810s | 0.000781s | byte equality observed |
| mp_is_list.test | 10 | 0.000823s | 0.000801s | 0.000800s | byte equality observed |
| mp_is_map.test | 10 | 0.000810s | 0.000819s | 0.000778s | byte equality observed |
| mp_is_set.test | 10 | 0.000804s | 0.000815s | 0.000795s | byte equality observed |
| mp_is_value_list.test | 10 | 0.000821s | 0.000821s | 0.000791s | byte equality observed |
| mp_iterate.test | 10 | 0.000802s | 0.000832s | 0.000807s | byte equality observed |
| mp_join.test | 10 | 0.000805s | 0.000861s | 0.000792s | byte equality observed |
| mp_lambda.test | 10 | 0.000847s | 0.000839s | 0.000775s | byte equality observed |
| mp_less.test | 10 | 0.000820s | 0.000815s | 0.000807s | byte equality observed |
| mp_list_c.test | 10 | 0.000815s | 0.000790s | 0.000802s | byte equality observed |
| mp_list_v.test | 10 | 0.000360s | 0.000368s | 0.000801s | byte equality observed |
| mp_map_contains.test | 10 | 0.000800s | 0.000790s | 0.000811s | byte equality observed |
| mp_map_erase.test | 10 | 0.000783s | 0.000821s | 0.000830s | byte equality observed |
| mp_map_find.test | 10 | 0.000798s | 0.000796s | 0.000827s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000806s | 0.000807s | 0.000808s | byte equality observed |
| mp_map_find_3.test | 10 | 0.000809s | 0.000780s | 0.000800s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000817s | 0.000795s | 0.000794s | byte equality observed |
| mp_map_insert.test | 10 | 0.000822s | 0.000821s | 0.000788s | byte equality observed |
| mp_map_keys.test | 10 | 0.000796s | 0.000828s | 0.000811s | byte equality observed |
| mp_map_replace.test | 10 | 0.000830s | 0.000814s | 0.000808s | byte equality observed |
| mp_map_update.test | 10 | 0.000831s | 0.000828s | 0.000796s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000785s | 0.000815s | 0.000814s | byte equality observed |
| mp_max.test | 10 | 0.000798s | 0.000815s | 0.000807s | byte equality observed |
| mp_max_element.test | 10 | 0.000809s | 0.000821s | 0.000822s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000362s | 0.000369s | 0.000769s | byte equality observed |
| mp_max_element_q.test | 10 | 0.000815s | 0.000796s | 0.000784s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000361s | 0.000363s | 0.000803s | byte equality observed |
| mp_min.test | 10 | 0.000809s | 0.000825s | 0.000814s | byte equality observed |
| mp_min_element.test | 10 | 0.000805s | 0.000796s | 0.000814s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000362s | 0.000360s | 0.000779s | byte equality observed |
| mp_min_element_q.test | 10 | 0.000791s | 0.000801s | 0.000797s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000364s | 0.000363s | 0.000783s | byte equality observed |
| mp_none_of.test | 10 | 0.000819s | 0.000823s | 0.000805s | byte equality observed |
| mp_none_of_q.test | 10 | 0.000803s | 0.000808s | 0.000819s | byte equality observed |
| mp_not_fn.test | 10 | 0.000827s | 0.000817s | 0.000840s | byte equality observed |
| mp_nth_element.test | 10 | 0.000791s | 0.000823s | 0.000809s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.000813s | 0.000832s | 0.000792s | byte equality observed |
| mp_or.test | 10 | 0.000798s | 0.000817s | 0.000797s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.000821s | 0.000827s | 0.000806s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.000787s | 0.000812s | 0.000818s | byte equality observed |
| mp_partial_sum.test | 10 | 0.000811s | 0.000805s | 0.000793s | byte equality observed |
| mp_partition.test | 10 | 0.000804s | 0.000818s | 0.000804s | byte equality observed |
| mp_partition_q.test | 10 | 0.000788s | 0.000815s | 0.000825s | byte equality observed |
| mp_plus.test | 10 | 0.000811s | 0.000831s | 0.000839s | byte equality observed |
| mp_pop_back.test | 10 | 0.000815s | 0.000818s | 0.000793s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000360s | 0.000364s | 0.000778s | byte equality observed |
| mp_pop_front.test | 10 | 0.000807s | 0.000800s | 0.000805s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000362s | 0.000360s | 0.000812s | byte equality observed |
| mp_power_set.test | 10 | 0.000819s | 0.000805s | 0.000800s | byte equality observed |
| mp_product.test | 10 | 0.000805s | 0.000805s | 0.000815s | byte equality observed |
| mp_push_back.test | 10 | 0.000796s | 0.000800s | 0.000828s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000360s | 0.000360s | 0.000803s | byte equality observed |
| mp_push_front.test | 10 | 0.000798s | 0.000795s | 0.000785s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000366s | 0.000364s | 0.000791s | byte equality observed |
| mp_quote.test | 10 | 0.000828s | 0.000807s | 0.000805s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000809s | 0.000801s | 0.000811s | byte equality observed |
| mp_remove.test | 10 | 0.000811s | 0.000816s | 0.000788s | byte equality observed |
| mp_remove_if.test | 10 | 0.000789s | 0.000801s | 0.000817s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.000813s | 0.000788s | 0.000770s | byte equality observed |
| mp_rename.test | 10 | 0.000814s | 0.000813s | 0.000789s | byte equality observed |
| mp_rename_2.test | 10 | 0.000362s | 0.000351s | 0.000766s | byte equality observed |
| mp_rename_v.test | 10 | 0.000358s | 0.000363s | 0.000783s | byte equality observed |
| mp_repeat.test | 10 | 0.000794s | 0.000804s | 0.000781s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000364s | 0.000363s | 0.000778s | byte equality observed |
| mp_repeat_3.test | 10 | 0.000797s | 0.000810s | 0.000796s | byte equality observed |
| mp_replace.test | 10 | 0.000784s | 0.000804s | 0.000824s | byte equality observed |
| mp_replace_at.test | 10 | 0.000802s | 0.000830s | 0.000830s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.000794s | 0.000819s | 0.000796s | byte equality observed |
| mp_replace_front.test | 10 | 0.000792s | 0.000798s | 0.000808s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000362s | 0.000366s | 0.000785s | byte equality observed |
| mp_replace_if.test | 10 | 0.000804s | 0.000803s | 0.000820s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.000814s | 0.000826s | 0.000783s | byte equality observed |
| mp_replace_second.test | 10 | 0.000804s | 0.000813s | 0.000804s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000361s | 0.000355s | 0.000802s | byte equality observed |
| mp_replace_third.test | 10 | 0.000801s | 0.000824s | 0.000808s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000368s | 0.000363s | 0.000802s | byte equality observed |
| mp_reverse.test | 10 | 0.000820s | 0.000816s | 0.000795s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.000806s | 0.000812s | 0.000806s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000795s | 0.000812s | 0.000808s | byte equality observed |
| mp_rotate_left.test | 10 | 0.000795s | 0.000805s | 0.000823s | byte equality observed |
| mp_rotate_right.test | 10 | 0.000809s | 0.000813s | 0.000845s | byte equality observed |
| mp_same.test | 10 | 0.000833s | 0.000810s | 0.000825s | byte equality observed |
| mp_second.test | 10 | 0.000807s | 0.000795s | 0.000820s | byte equality observed |
| mp_second_2.test | 10 | 0.000367s | 0.000366s | 0.000801s | byte equality observed |
| mp_set_contains.test | 10 | 0.000808s | 0.000800s | 0.000825s | byte equality observed |
| mp_set_difference.test | 10 | 0.000802s | 0.000807s | 0.000814s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000802s | 0.000801s | 0.000820s | byte equality observed |
| mp_set_intersection.test | 10 | 0.000803s | 0.000820s | 0.000810s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000808s | 0.000840s | 0.000865s | byte equality observed |
| mp_set_push_back.test | 10 | 0.000804s | 0.000817s | 0.000838s | byte equality observed |
| mp_set_push_front.test | 10 | 0.000831s | 0.000820s | 0.000823s | byte equality observed |
| mp_set_union.test | 10 | 0.000814s | 0.000780s | 0.000833s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.000798s | 0.000822s | 0.000813s | byte equality observed |
| mp_similar.test | 10 | 0.000794s | 0.000830s | 0.000790s | byte equality observed |
| mp_size.test | 10 | 0.000804s | 0.000802s | 0.000787s | byte equality observed |
| mp_size_2.test | 10 | 0.000365s | 0.000366s | 0.000817s | byte equality observed |
| mp_slice.test | 10 | 0.000822s | 0.000815s | 0.000782s | byte equality observed |
| mp_slice_2.test | 10 | 0.000360s | 0.000362s | 0.000803s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.000814s | 0.000846s | 0.000801s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.000807s | 0.000826s | 0.000826s | byte equality observed |
| mp_sort.test | 10 | 0.000795s | 0.000797s | 0.000801s | byte equality observed |
| mp_sort_q.test | 10 | 0.000804s | 0.000803s | 0.000790s | byte equality observed |
| mp_split.test | 10 | 0.000833s | 0.000809s | 0.000791s | byte equality observed |
| mp_starts_with.test | 10 | 0.000798s | 0.000828s | 0.000797s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.000818s | 0.000807s | 0.000832s | byte equality observed |
| mp_take.test | 10 | 0.000832s | 0.000836s | 0.000789s | byte equality observed |
| mp_take_2.test | 10 | 0.000360s | 0.000366s | 0.000785s | byte equality observed |
| mp_third.test | 10 | 0.000799s | 0.000794s | 0.000802s | byte equality observed |
| mp_third_2.test | 10 | 0.000362s | 0.000362s | 0.000781s | byte equality observed |
| mp_transform.test | 10 | 0.000807s | 0.000845s | 0.000810s | byte equality observed |
| mp_transform_2.test | 10 | 0.000777s | 0.000821s | 0.000766s | byte equality observed |
| mp_transform_front.test | 10 | 0.000798s | 0.000805s | 0.000782s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000365s | 0.000364s | 0.000808s | byte equality observed |
| mp_transform_if.test | 10 | 0.000786s | 0.000784s | 0.000794s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.000814s | 0.000800s | 0.000827s | byte equality observed |
| mp_transform_q.test | 10 | 0.000830s | 0.000806s | 0.000835s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.000811s | 0.000804s | 0.000821s | byte equality observed |
| mp_transform_second.test | 10 | 0.000795s | 0.000829s | 0.000825s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000368s | 0.000366s | 0.000798s | byte equality observed |
| mp_transform_sf.test | 10 | 0.000829s | 0.000818s | 0.000818s | byte equality observed |
| mp_transform_third.test | 10 | 0.000811s | 0.000816s | 0.000829s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000366s | 0.000366s | 0.000798s | byte equality observed |
| mp_unique.test | 10 | 0.000804s | 0.000832s | 0.000805s | byte equality observed |
| mp_unique_if.test | 10 | 0.000829s | 0.000830s | 0.000860s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.000800s | 0.000812s | 0.000804s | byte equality observed |
| mp_valid.test | 10 | 0.000793s | 0.000794s | 0.000812s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.000791s | 0.000813s | 0.000796s | byte equality observed |
| mp_value.test | 10 | 0.000367s | 0.000361s | 0.000810s | byte equality observed |
| mp_with_index.test | 10 | 0.001112s | 0.001068s | 0.001031s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000358s | 0.000364s | 0.000787s | byte equality observed |
| mpl.test | 10 | 0.000812s | 0.000810s | 0.000772s | byte equality observed |
| mpl_list.test | 10 | 0.000815s | 0.000796s | 0.000801s | byte equality observed |
| mpl_tuple.test | 10 | 0.000780s | 0.000817s | 0.000846s | byte equality observed |
| mpl_version.test | 10 | 0.000796s | 0.000806s | 0.000814s | byte equality observed |
| set_version.test | 10 | 0.000792s | 0.000790s | 0.000824s | byte equality observed |
| tuple_apply.test | 10 | 0.000828s | 0.000783s | 0.000802s | byte equality observed |
| tuple_for_each.test | 10 | 0.000793s | 0.000827s | 0.000800s | byte equality observed |
| tuple_transform.test | 10 | 0.000791s | 0.000826s | 0.000799s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000793s | 0.000822s | 0.000788s | byte equality observed |
| tuple_version.test | 10 | 0.000796s | 0.000819s | 0.000814s | byte equality observed |
| utility_version.test | 10 | 0.000794s | 0.000834s | 0.000781s | byte equality observed |
| version.test | 10 | 0.000814s | 0.000811s | 0.000803s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46032707836).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
