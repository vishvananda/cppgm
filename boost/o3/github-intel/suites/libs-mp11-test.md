# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.028217 | 0.059398 | 0.088066 | — | — | — |
| complex_h.test | COMPILE | 0.113756 | 0.249969 | 0.353314 | — | — | — |
| mp_size.test | RUN | 0.139173 | 0.856169 | 0.467028 | 0.001106 | 0.001232 | 0.001023 |
| mp_size_2.test | RUN | 0.011908 | 0.029999 | 0.038722 | 0.000481 | 0.000517 | 0.001014 |
| mp_empty.test | RUN | 0.129794 | 0.519035 | 0.440871 | 0.001006 | 0.001420 | 0.001051 |
| mp_empty_2.test | RUN | 0.011447 | 0.029707 | 0.039902 | 0.000468 | 0.000502 | 0.001029 |
| mp_assign.test | RUN | 0.148799 | 1.127360 | 0.601949 | 0.001059 | 0.001251 | 0.001133 |
| mp_assign_2.test | RUN | 0.011372 | 0.029650 | 0.041343 | 0.000481 | 0.000505 | 0.001027 |
| mp_clear.test | RUN | 0.119379 | 0.480369 | 0.424734 | 0.001004 | 0.001283 | 0.001073 |
| mp_clear_2.test | RUN | 0.011808 | 0.030303 | 0.040741 | 0.000492 | 0.000438 | 0.001116 |
| mp_front.test | RUN | 0.129844 | 0.773501 | 0.508130 | 0.001057 | 0.001319 | 0.001075 |
| mp_front_2.test | RUN | 0.011424 | 0.029321 | 0.044009 | 0.000471 | 0.000559 | 0.000970 |
| mp_pop_front.test | RUN | 0.136273 | 0.812724 | 0.512674 | 0.001049 | 0.001232 | 0.001091 |
| mp_pop_front_2.test | RUN | 0.011152 | 0.030233 | 0.039637 | 0.000475 | 0.000563 | 0.001063 |
| mp_second.test | RUN | 0.129933 | 0.504846 | 0.466520 | 0.001024 | 0.001267 | 0.000913 |
| mp_second_2.test | RUN | 0.012005 | 0.030049 | 0.042704 | 0.000465 | 0.000555 | 0.001059 |
| mp_third.test | RUN | 0.125560 | 0.471596 | 0.450722 | 0.001087 | 0.001192 | 0.001085 |
| mp_third_2.test | RUN | 0.011757 | 0.030448 | 0.040235 | 0.000462 | 0.000487 | 0.000948 |
| mp_push_front.test | RUN | 0.176998 | 1.748180 | 0.827829 | 0.001072 | 0.001307 | 0.001052 |
| mp_push_front_2.test | RUN | 0.011882 | 0.030476 | 0.038429 | 0.000422 | 0.000396 | 0.001050 |
| mp_push_back.test | RUN | 0.177011 | 1.740739 | 0.836680 | 0.001079 | 0.001296 | 0.001151 |
| mp_push_back_2.test | RUN | 0.011203 | 0.029774 | 0.041227 | 0.000461 | 0.000504 | 0.001167 |
| mp_rename.test | RUN | 0.166759 | 1.590640 | 0.714439 | 0.001051 | 0.001278 | 0.001040 |
| mp_rename_2.test | RUN | 0.010202 | 0.030466 | 0.042006 | 0.000379 | 0.000551 | 0.001121 |
| mp_append.test | RUN | 0.171626 | 1.796964 | 0.784884 | 0.001061 | 0.001305 | 0.001138 |
| mp_append_2.test | RUN | 0.403135 | 4.047630 | 1.071341 | 0.001148 | 0.001312 | 0.001008 |
| mp_append_3.test | RUN | 0.011378 | 0.030711 | 0.039684 | 0.000502 | 0.000532 | 0.001079 |
| mp_append_sf.test | RUN | 0.124803 | 0.431972 | 0.413116 | 0.001104 | 0.001255 | 0.001109 |
| mp_replace_front.test | RUN | 0.152887 | 1.270360 | 0.636120 | 0.001088 | 0.001359 | 0.001088 |
| mp_replace_front_2.test | RUN | 0.011315 | 0.029226 | 0.042688 | 0.000446 | 0.000498 | 0.001018 |
| mp_replace_second.test | RUN | 0.144538 | 0.804836 | 0.586365 | 0.001098 | 0.001185 | 0.001044 |
| mp_replace_second_2.test | RUN | 0.011620 | 0.029794 | 0.040823 | 0.000483 | 0.000464 | 0.001100 |
| mp_replace_third.test | RUN | 0.137710 | 0.661877 | 0.531538 | 0.001057 | 0.001312 | 0.001113 |
| mp_replace_third_2.test | RUN | 0.012332 | 0.029532 | 0.039532 | 0.000428 | 0.000494 | 0.000959 |
| mp_apply_q.test | RUN | 0.163589 | 1.560527 | 0.707992 | 0.001010 | 0.001280 | 0.001081 |
| mp_apply_q_sf.test | RUN | 0.122099 | 0.439015 | 0.426951 | 0.001111 | 0.001210 | 0.001180 |
| mp_is_list.test | RUN | 0.127975 | 0.521685 | 0.444794 | 0.001074 | 0.001225 | 0.001056 |
| mp_list_c.test | RUN | 0.134154 | 0.643691 | 0.501498 | 0.001029 | 0.001315 | 0.001030 |
| mp_transform_front.test | RUN | 0.148180 | 1.278818 | 0.626169 | 0.001029 | 0.001221 | 0.001094 |
| mp_transform_front_2.test | RUN | 0.011878 | 0.028101 | 0.042942 | 0.000477 | 0.000472 | 0.000990 |
| mp_transform_second.test | RUN | 0.141278 | 1.100033 | 0.581070 | 0.001021 | 0.000947 | 0.001043 |
| mp_transform_second_2.test | RUN | 0.011715 | 0.029710 | 0.040554 | 0.000478 | 0.000517 | 0.001035 |
| mp_transform_third.test | RUN | 0.133559 | 0.820425 | 0.503888 | 0.001085 | 0.001318 | 0.001084 |
| mp_transform_third_2.test | RUN | 0.012042 | 0.030082 | 0.041650 | 0.000471 | 0.000496 | 0.001021 |
| mp_list_v.test | RUN | 0.011610 | 0.029539 | 0.040192 | 0.000479 | 0.000523 | 0.001032 |
| mp_rename_v.test | RUN | 0.011768 | 0.030155 | 0.040161 | 0.000467 | 0.000526 | 0.000934 |
| mp_is_value_list.test | RUN | 0.120561 | 0.326900 | 0.419947 | 0.001090 | 0.001334 | 0.001101 |
| mp_transform.test | RUN | 0.327041 | 2.738283 | 1.347447 | 0.001202 | 0.001249 | 0.001037 |
| mp_transform_2.test | RUN | 0.113574 | 0.289152 | 0.379194 | 0.001046 | 0.001373 | 0.001060 |
| mp_transform_q.test | RUN | 0.316678 | 2.598726 | 1.303018 | 0.000963 | 0.001459 | 0.001066 |
| mp_transform_q_2.test | RUN | 0.319968 | 0.803042 | 1.651194 | 0.001104 | 0.001134 | 0.001097 |
| mp_transform_sf.test | RUN | 0.129626 | 0.446379 | 0.454524 | 0.001103 | 0.001235 | 0.001090 |
| mp_transform_if.test | RUN | 0.164061 | 1.285446 | 0.701481 | 0.001100 | 0.001134 | 0.001149 |
| mp_transform_if_q.test | RUN | 0.170823 | 1.290732 | 0.699205 | 0.001099 | 0.001208 | 0.001005 |
| mp_filter.test | RUN | 0.149369 | 0.749672 | 0.516831 | 0.001096 | 0.001224 | 0.001185 |
| mp_fill.test | RUN | 0.144965 | 0.564758 | 0.495255 | 0.001030 | 0.001403 | 0.001086 |
| mp_fill_2.test | RUN | 0.021887 | 0.047263 | 0.072217 | 0.000438 | 0.000533 | 0.001187 |
| mp_count.test | RUN | 0.273538 | 1.378025 | 0.771331 | 0.001124 | 0.001417 | 0.001129 |
| mp_count_if.test | RUN | 0.284687 | 1.381377 | 0.832004 | 0.001118 | 0.001190 | 0.001047 |
| mp_count_if_q.test | RUN | 0.142598 | 0.901004 | 0.509450 | 0.001352 | 0.001353 | 0.001113 |
| mp_contains.test | RUN | 0.131983 | 0.546813 | 0.475485 | 0.001238 | 0.001145 | 0.001065 |
| mp_starts_with.test | RUN | 0.135408 | 0.544944 | 0.479043 | 0.001153 | 0.001221 | 0.001048 |
| mp_starts_with_sf.test | RUN | 0.133728 | 0.457648 | 0.435968 | 0.001118 | 0.001278 | 0.001120 |
| mp_repeat.test | RUN | 0.208936 | 2.294961 | 0.908513 | 0.001092 | 0.001366 | 0.001136 |
| mp_repeat_2.test | RUN | 0.020628 | 0.047921 | 0.069576 | 0.000485 | 0.000545 | 0.001105 |
| mp_repeat_3.test | RUN | 0.174151 | 0.286864 | 0.433010 | 0.001272 | 0.001262 | 0.001265 |
| mp_product.test | RUN | 0.153350 | 1.386272 | 0.638619 | 0.001033 | 0.001329 | 0.001033 |
| mp_drop.test | RUN | 0.175363 | 1.723304 | 0.745862 | 0.001089 | 0.001204 | 0.001068 |
| mp_drop_2.test | RUN | 0.020268 | 0.047907 | 0.070590 | 0.000463 | 0.000515 | 0.001018 |
| mp_iota.test | RUN | 0.168412 | 1.462740 | 0.650041 | 0.001071 | 0.001199 | 0.001076 |
| mp_iota_2.test | RUN | 0.178113 | 1.764577 | 0.759821 | 0.001009 | 0.001319 | 0.001062 |
| mp_at.test | RUN | 0.141848 | 0.756803 | 0.526455 | 0.000991 | 0.001308 | 0.001104 |
| mp_at_2.test | RUN | 0.020780 | 0.046446 | 0.069479 | 0.000446 | 0.000556 | 0.001013 |
| mp_at_sf.test | RUN | 0.126937 | 0.461684 | 0.448131 | 0.001163 | 0.001423 | 0.001083 |
| mp_take.test | RUN | 0.237190 | 2.281872 | 0.907076 | 0.001071 | 0.001443 | 0.001098 |
| mp_take_2.test | RUN | 0.019893 | 0.047908 | 0.065915 | 0.000473 | 0.000466 | 0.001053 |
| mp_slice.test | RUN | 0.276985 | 2.322396 | 1.148075 | 0.001134 | 0.001322 | 0.000945 |
| mp_slice_2.test | RUN | 0.019500 | 0.047129 | 0.067257 | 0.000433 | 0.000543 | 0.001050 |
| mp_replace.test | RUN | 0.165961 | 1.164486 | 0.725279 | 0.001050 | 0.001434 | 0.001109 |
| mp_replace_if.test | RUN | 0.162452 | 1.021445 | 0.664350 | 0.001067 | 0.001207 | 0.001097 |
| mp_replace_if_q.test | RUN | 0.159101 | 1.028127 | 0.677144 | 0.001023 | 0.001346 | 0.001248 |
| mp_copy_if.test | RUN | 0.157817 | 1.435153 | 0.642390 | 0.001034 | 0.001250 | 0.001080 |
| mp_copy_if_q.test | RUN | 0.164401 | 1.447854 | 0.637133 | 0.001066 | 0.001311 | 0.001070 |
| mp_remove.test | RUN | 0.160713 | 0.958776 | 0.654664 | 0.001027 | 0.001264 | 0.001051 |
| mp_remove_if.test | RUN | 0.172096 | 1.527415 | 0.661411 | 0.001008 | 0.001389 | 0.001176 |
| mp_remove_if_q.test | RUN | 0.173886 | 1.515364 | 0.687530 | 0.001067 | 0.001397 | 0.001121 |
| mp_partition.test | RUN | 0.170164 | 1.442267 | 0.728043 | 0.001078 | 0.001141 | 0.001128 |
| mp_partition_q.test | RUN | 0.170384 | 1.442498 | 0.733947 | 0.001021 | 0.001384 | 0.001058 |
| mp_sort.test | RUN | 0.156330 | 1.020827 | 0.642655 | 0.001053 | 0.001374 | 0.001141 |
| mp_sort_q.test | RUN | 0.160703 | 1.029003 | 0.638102 | 0.001072 | 0.001399 | 0.001111 |
| mp_find.test | RUN | 0.156396 | 1.100790 | 0.545208 | 0.001045 | 0.001475 | 0.001089 |
| mp_find_if.test | RUN | 0.154881 | 1.014946 | 0.519719 | 0.001075 | 0.001391 | 0.001105 |
| mp_find_if_q.test | RUN | 0.163997 | 1.132362 | 0.627272 | 0.001111 | 0.001323 | 0.001078 |
| mp_reverse.test | RUN | 0.363769 | 3.065824 | 1.282517 | 0.001178 | 0.001307 | 0.001140 |
| mp_fold.test | RUN | 0.599650 | 2.388321 | 3.218018 | 0.001306 | 0.001398 | 0.001176 |
| mp_fold_q.test | RUN | 0.151859 | 1.011526 | 0.599654 | 0.001133 | 0.001161 | 0.001170 |
| mp_fold_q_sf.test | RUN | 0.137673 | 0.455987 | 0.454964 | 0.001044 | 0.001280 | 0.001111 |
| mp_reverse_fold.test | RUN | 0.282669 | 2.249017 | 0.901420 | 0.001117 | 0.001408 | 0.001088 |
| mp_reverse_fold_q.test | RUN | 0.158420 | 1.223548 | 0.656063 | 0.001065 | 0.001374 | 0.001057 |
| mp_unique.test | RUN | 0.156418 | 1.105746 | 0.632367 | 0.000984 | 0.001210 | 0.001255 |
| mp_unique_if.test | RUN | 0.299981 | 2.382601 | 1.008818 | 0.001123 | 0.001446 | 0.001133 |
| mp_unique_if_q.test | RUN | 0.248758 | 2.340433 | 0.818488 | 0.001250 | 0.001282 | 0.001127 |
| mp_all_of.test | RUN | 0.383383 | 1.254595 | 1.043465 | 0.001168 | 0.001305 | 0.001037 |
| mp_all_of_q.test | RUN | 0.137274 | 0.529558 | 0.463826 | 0.001442 | 0.001405 | 0.001236 |
| mp_any_of.test | RUN | 0.386496 | 1.299771 | 1.033969 | 0.001344 | 0.001450 | 0.001143 |
| mp_any_of_q.test | RUN | 0.137480 | 0.545280 | 0.479241 | 0.001181 | 0.001439 | 0.001235 |
| mp_none_of.test | RUN | 0.376390 | 1.281807 | 1.010453 | 0.001046 | 0.001318 | 0.001151 |
| mp_none_of_q.test | RUN | 0.136646 | 0.546569 | 0.483116 | 0.001184 | 0.001318 | 0.001273 |
| mp_replace_at.test | RUN | 0.166955 | 1.122941 | 0.700784 | 0.001037 | 0.001336 | 0.001199 |
| mp_replace_at_c.test | RUN | 0.165094 | 1.114171 | 0.722687 | 0.001105 | 0.001282 | 0.001220 |
| mp_for_each.test | RUN | 0.157239 | 0.724839 | 0.719897 | 0.001037 | 0.001114 | 0.001061 |
| mp_insert.test | RUN | 0.264506 | 2.306187 | 1.036563 | 0.001257 | 0.001269 | 0.001047 |
| mp_insert_2.test | RUN | 0.020512 | 0.048332 | 0.067763 | 0.000497 | 0.000460 | 0.001050 |
| mp_erase.test | RUN | 0.296220 | 2.430090 | 1.208906 | 0.001250 | 0.001443 | 0.001101 |
| mp_erase_2.test | RUN | 0.020529 | 0.046303 | 0.067800 | 0.000484 | 0.000533 | 0.001020 |
| mp_with_index.test | RUN | 0.387551 | 4.928602 | 2.656894 | 0.001383 | 0.001536 | 0.001315 |
| mp_with_index_cx.test | RUN | 0.002910 | 0.014558 | 0.020396 | 0.000461 | 0.000522 | 0.001156 |
| mp_from_sequence.test | RUN | 0.168258 | 1.261311 | 0.690155 | 0.001172 | 0.001239 | 0.001161 |
| mp_from_sequence_2.test | RUN | 0.180149 | 1.488349 | 0.746429 | 0.001093 | 0.001764 | 0.001169 |
| mp_from_sequence_3.test | RUN | 0.142389 | 0.651335 | 0.515674 | 0.001025 | 0.001284 | 0.001094 |
| mp_min_element.test | RUN | 0.138289 | 0.597602 | 0.488891 | 0.001068 | 0.001365 | 0.001126 |
| mp_min_element_2.test | RUN | 0.021711 | 0.047748 | 0.071737 | 0.000446 | 0.000558 | 0.001049 |
| mp_min_element_q.test | RUN | 0.139891 | 0.595883 | 0.477640 | 0.001079 | 0.001261 | 0.001173 |
| mp_min_element_q_2.test | RUN | 0.021972 | 0.047460 | 0.070217 | 0.000512 | 0.000482 | 0.001047 |
| mp_max_element.test | RUN | 0.140234 | 0.591662 | 0.473751 | 0.001037 | 0.001327 | 0.001109 |
| mp_max_element_2.test | RUN | 0.021007 | 0.047559 | 0.066375 | 0.000470 | 0.000493 | 0.000955 |
| mp_max_element_q.test | RUN | 0.139610 | 0.594434 | 0.481457 | 0.001091 | 0.001311 | 0.001149 |
| mp_max_element_q_2.test | RUN | 0.020208 | 0.047117 | 0.067414 | 0.000459 | 0.000573 | 0.001063 |
| mp_nth_element.test | RUN | 0.159723 | 0.850067 | 0.595347 | 0.001150 | 0.001228 | 0.001173 |
| mp_nth_element_q.test | RUN | 0.153259 | 0.834697 | 0.588378 | 0.001011 | 0.001229 | 0.001123 |
| mp_back.test | RUN | 0.153494 | 0.696404 | 0.563973 | 0.001080 | 0.001232 | 0.001046 |
| mp_back_2.test | RUN | 0.021177 | 0.047576 | 0.071832 | 0.000432 | 0.000460 | 0.001102 |
| mp_pop_back.test | RUN | 0.464248 | 4.729081 | 1.223418 | 0.001173 | 0.001263 | 0.001077 |
| mp_pop_back_2.test | RUN | 0.019764 | 0.047383 | 0.066913 | 0.000468 | 0.000497 | 0.001013 |
| mp_flatten.test | RUN | 0.177351 | 1.640787 | 0.808250 | 0.001138 | 0.001441 | 0.001149 |
| mp_rotate_left.test | RUN | 0.181789 | 1.771753 | 0.787263 | 0.001198 | 0.001315 | 0.001187 |
| mp_rotate_right.test | RUN | 0.181057 | 1.785546 | 0.791233 | 0.001254 | 0.001512 | 0.001067 |
| mp_power_set.test | RUN | 0.183780 | 1.698924 | 0.808291 | 0.001065 | 0.001409 | 0.001099 |
| mp_partial_sum.test | RUN | 0.248742 | 2.310743 | 0.914813 | 0.001086 | 0.001456 | 0.001080 |
| mp_iterate.test | RUN | 0.155556 | 0.672186 | 0.623374 | 0.000992 | 0.001437 | 0.001115 |
| mp_pairwise_fold.test | RUN | 0.182393 | 1.563793 | 0.823410 | 0.001057 | 0.001004 | 0.001062 |
| mp_pairwise_fold_q.test | RUN | 0.137280 | 0.450337 | 0.458336 | 0.001089 | 0.001196 | 0.001260 |
| mp_sliding_fold.test | RUN | 0.368047 | 3.034749 | 1.544160 | 0.001156 | 0.001375 | 0.001133 |
| mp_sliding_fold_q.test | RUN | 0.366240 | 3.029331 | 1.537278 | 0.001081 | 0.001301 | 0.001029 |
| mp_intersperse.test | RUN | 0.168624 | 1.111422 | 0.712353 | 0.001147 | 0.001262 | 0.001176 |
| mp_split.test | RUN | 0.250577 | 2.149694 | 0.989576 | 0.001107 | 0.001372 | 0.001060 |
| mp_join.test | RUN | 0.195978 | 1.818944 | 0.894986 | 0.001081 | 0.001351 | 0.001210 |
| integral.test | RUN | 0.145305 | 0.797375 | 0.530680 | 0.001144 | 0.001250 | 0.001139 |
| mp_value.test | RUN | 0.008816 | 0.025580 | 0.033923 | 0.000446 | 0.000508 | 0.001158 |
| mp_identity.test | RUN | 0.141895 | 0.736954 | 0.499900 | 0.001096 | 0.001284 | 0.001278 |
| mp_inherit.test | RUN | 0.130621 | 0.518620 | 0.459629 | 0.001022 | 0.001363 | 0.001189 |
| mp_if.test | RUN | 0.128402 | 0.598656 | 0.470323 | 0.001050 | 0.001326 | 0.001235 |
| mp_if_sf.test | RUN | 0.129740 | 0.436995 | 0.421619 | 0.001136 | 0.001248 | 0.001159 |
| mp_eval_if.test | RUN | 0.132445 | 0.630454 | 0.477657 | 0.001118 | 0.001224 | 0.001179 |
| mp_eval_if_sf.test | RUN | 0.125403 | 0.448980 | 0.425540 | 0.001101 | 0.001277 | 0.001110 |
| mp_valid.test | RUN | 0.128136 | 0.455399 | 0.440513 | 0.001108 | 0.001290 | 0.001152 |
| mp_defer.test | RUN | 0.144714 | 0.767488 | 0.530637 | 0.001149 | 0.001304 | 0.001146 |
| mp_quote.test | RUN | 0.143719 | 0.767223 | 0.549336 | 0.001166 | 0.001354 | 0.001076 |
| mp_invoke_q.test | RUN | 0.155432 | 1.020082 | 0.613666 | 0.001078 | 0.001544 | 0.001218 |
| mp_invoke_q_sf.test | RUN | 0.127060 | 0.442222 | 0.428296 | 0.001025 | 0.001356 | 0.001227 |
| mp_quote_trait.test | RUN | 0.140636 | 0.858779 | 0.528440 | 0.001136 | 0.001286 | 0.001125 |
| mp_cond.test | RUN | 0.129438 | 0.515023 | 0.454793 | 0.001066 | 0.001350 | 0.001186 |
| mp_cond_sf.test | RUN | 0.127577 | 0.450709 | 0.430463 | 0.001054 | 0.001390 | 0.001049 |
| mp_not_fn.test | RUN | 0.127561 | 0.446550 | 0.420643 | 0.001020 | 0.001454 | 0.001175 |
| mp_eval_if_not.test | RUN | 0.133577 | 0.639925 | 0.491534 | 0.001058 | 0.001488 | 0.001308 |
| mp_eval_or.test | RUN | 0.125160 | 0.338261 | 0.446611 | 0.001043 | 0.001397 | 0.001171 |
| mp_compose.test | RUN | 0.144974 | 1.059173 | 0.570071 | 0.001201 | 0.001212 | 0.001212 |
| mp_valid_and_true.test | RUN | 0.124649 | 0.541024 | 0.451807 | 0.000968 | 0.001473 | 0.001233 |
| mp_compose_sf.test | COMPILE | 0.029585 | 0.061438 | 0.102626 | — | — | — |
| integer_sequence.test | RUN | 0.161856 | 1.041788 | 0.663764 | 0.001184 | 0.001209 | 0.001036 |
| tuple_for_each.test | RUN | 0.126861 | 0.375248 | 0.475279 | 0.001096 | 0.001175 | 0.001220 |
| tuple_for_each_cx.test | COMPILE | 0.022500 | 0.053776 | 0.079304 | — | — | — |
| tuple_apply.test | RUN | 0.134506 | 0.366728 | 0.465397 | 0.001160 | 0.001316 | 0.001097 |
| tuple_apply_cx.test | COMPILE | 0.033728 | 0.075622 | 0.106704 | — | — | — |
| construct_from_tuple.test | RUN | 0.133306 | 0.402534 | 0.470907 | 0.001124 | 0.001423 | 0.001115 |
| construct_from_tuple_cx.test | COMPILE | 0.035352 | 0.076151 | 0.105205 | — | — | — |
| tuple_transform.test | RUN | 0.214206 | 0.824364 | 0.901868 | 0.001212 | 0.001196 | 0.001189 |
| tuple_transform_2.test | RUN | 0.178926 | 0.610947 | 0.814864 | 0.001169 | 0.001270 | 0.001145 |
| tuple_transform_cx.test | COMPILE | 0.030734 | 0.071067 | 0.104625 | — | — | — |
| mp_set_contains.test | RUN | 0.137737 | 0.539970 | 0.469627 | 0.001107 | 0.001403 | 0.001004 |
| mp_set_push_back.test | RUN | 0.179063 | 1.681898 | 0.811850 | 0.001080 | 0.001398 | 0.001132 |
| mp_set_push_front.test | RUN | 0.243443 | 2.050350 | 0.933968 | 0.001186 | 0.001259 | 0.001123 |
| mp_is_set.test | RUN | 0.137536 | 0.540660 | 0.466914 | 0.000785 | 0.001341 | 0.001148 |
| mp_set_union.test | RUN | 0.172732 | 1.432160 | 0.765952 | 0.001078 | 0.001367 | 0.001075 |
| mp_set_union_sf.test | RUN | 0.129326 | 0.425438 | 0.422122 | 0.001085 | 0.001236 | 0.001128 |
| mp_set_difference.test | RUN | 0.161789 | 1.115200 | 0.651977 | 0.001141 | 0.001322 | 0.001189 |
| mp_set_difference_sf.test | RUN | 0.123687 | 0.431948 | 0.431799 | 0.001150 | 0.001368 | 0.001128 |
| mp_set_intersection.test | RUN | 0.155553 | 1.122145 | 0.630166 | 0.001160 | 0.001367 | 0.001211 |
| mp_set_intersection_sf.test | RUN | 0.126614 | 0.432614 | 0.427036 | 0.001228 | 0.001329 | 0.001066 |
| mp_all.test | RUN | 0.134977 | 0.535606 | 0.462107 | 0.001168 | 0.001261 | 0.001189 |
| mp_all_2.test | RUN | 0.399943 | 1.184960 | 1.056233 | 0.001250 | 0.001239 | 0.001130 |
| mp_and.test | RUN | 0.130883 | 0.532479 | 0.459481 | 0.001187 | 0.001423 | 0.001106 |
| mp_any.test | RUN | 0.134282 | 0.521938 | 0.479445 | 0.001122 | 0.001347 | 0.001266 |
| mp_any_2.test | RUN | 0.387769 | 1.161503 | 1.023005 | 0.000886 | 0.001327 | 0.001086 |
| mp_or.test | RUN | 0.140835 | 0.523906 | 0.479684 | 0.001226 | 0.001265 | 0.001222 |
| mp_same.test | RUN | 0.261355 | 0.904846 | 0.733674 | 0.001133 | 0.001151 | 0.001109 |
| mp_plus.test | RUN | 0.147985 | 0.619267 | 0.506696 | 0.001009 | 0.001192 | 0.000977 |
| mp_less.test | RUN | 0.133808 | 0.532890 | 0.443011 | 0.001119 | 0.001132 | 0.001086 |
| mp_min.test | RUN | 0.130979 | 0.486883 | 0.454090 | 0.001389 | 0.001385 | 0.001071 |
| mp_max.test | RUN | 0.135828 | 0.546470 | 0.457396 | 0.001155 | 0.001259 | 0.001120 |
| mp_similar.test | RUN | 0.134878 | 0.531609 | 0.458637 | 0.001132 | 0.001085 | 0.001041 |
| mp_map_find.test | RUN | 0.158538 | 0.987243 | 0.617759 | 0.001138 | 0.001118 | 0.001073 |
| mp_map_find_2.test | RUN | 0.151916 | 0.375839 | 0.516870 | 0.001098 | 0.001343 | 0.001123 |
| mp_map_find_3.test | RUN | 0.141976 | 0.375244 | 0.511025 | 0.001332 | 0.001254 | 0.001004 |
| mp_map_find_4.test | RUN | 0.138207 | 0.352287 | 0.471741 | 0.001146 | 0.001315 | 0.001077 |
| mp_map_contains.test | RUN | 0.141702 | 0.550190 | 0.478185 | 0.001154 | 0.001301 | 0.001053 |
| mp_map_insert.test | RUN | 0.195863 | 1.911973 | 0.871872 | 0.001238 | 0.001397 | 0.001139 |
| mp_map_replace.test | RUN | 0.261584 | 2.146772 | 1.011685 | 0.001140 | 0.001354 | 0.001112 |
| mp_map_erase.test | RUN | 0.187046 | 1.591232 | 0.836782 | 0.001356 | 0.001356 | 0.001070 |
| mp_map_update.test | RUN | 0.163731 | 1.032301 | 0.637844 | 0.001052 | 0.001276 | 0.001116 |
| mp_map_update_q.test | RUN | 0.159455 | 1.026601 | 0.640154 | 0.001194 | 0.001243 | 0.001046 |
| mp_map_keys.test | RUN | 0.155718 | 0.912570 | 0.619673 | 0.001123 | 0.001305 | 0.001022 |
| mp_is_map.test | RUN | 0.142826 | 0.555207 | 0.493748 | 0.001082 | 0.001312 | 0.001179 |
| mp_bind.test | RUN | 0.177497 | 1.678495 | 0.760956 | 0.001167 | 0.001488 | 0.001080 |
| mp_bind_q.test | RUN | 0.153621 | 1.023240 | 0.608599 | 0.001389 | 0.001412 | 0.001071 |
| mp_bind_front.test | RUN | 0.152603 | 1.140746 | 0.585610 | 0.001150 | 0.001333 | 0.001131 |
| mp_bind_back.test | RUN | 0.152959 | 1.148114 | 0.581271 | 0.001084 | 0.001409 | 0.001159 |
| mp_lambda.test | RUN | 0.379247 | 3.417662 | 1.582216 | 0.001082 | 0.000975 | 0.001028 |
| mpl.test | RUN | 0.317845 | 0.863705 | 1.230662 | 0.001082 | 0.001193 | 0.001014 |
| mpl_list.test | RUN | 0.171271 | 0.665818 | 0.563966 | 0.001167 | 0.001237 | 0.001032 |
| mpl_tuple.test | RUN | 0.169614 | 0.660494 | 0.577676 | 0.001149 | 0.001393 | 0.001014 |
| version.test | RUN | 0.086799 | 0.233747 | 0.290155 | 0.001347 | 0.001326 | 0.001227 |
| mp11_version.test | RUN | 0.106055 | 0.268812 | 0.335382 | 0.001198 | 0.001205 | 0.001059 |
| list_version.test | RUN | 0.089326 | 0.241067 | 0.295462 | 0.001031 | 0.001296 | 0.001066 |
| algorithm_version.test | RUN | 0.102304 | 0.254777 | 0.312865 | 0.001036 | 0.001428 | 0.001134 |
| integral_version.test | RUN | 0.084606 | 0.233192 | 0.284287 | 0.001011 | 0.001240 | 0.001160 |
| utility_version.test | RUN | 0.083021 | 0.234503 | 0.285418 | 0.001045 | 0.001289 | 0.000916 |
| function_version.test | RUN | 0.089520 | 0.240683 | 0.297858 | 0.001160 | 0.001305 | 0.001027 |
| map_version.test | RUN | 0.099178 | 0.257770 | 0.319588 | 0.001039 | 0.001198 | 0.000805 |
| set_version.test | RUN | 0.088553 | 0.246522 | 0.300997 | 0.001323 | 0.001207 | 0.001028 |
| bind_version.test | RUN | 0.093589 | 0.257956 | 0.310995 | 0.001065 | 0.001296 | 0.001009 |
| integer_sequence_version.test | RUN | 0.085268 | 0.235998 | 0.287364 | 0.001118 | 0.001259 | 0.000816 |
| tuple_version.test | RUN | 0.100356 | 0.253399 | 0.192722 | 0.000783 | 0.000915 | 0.001144 |
| mpl_version.test | RUN | 0.068802 | 0.175269 | 0.300542 | 0.000852 | 0.000942 | 0.000763 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 0.999×, 1.001× | 1.003× |
| clang | 1.093× | 1.097×, 1.088× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44774088589).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000718s | 0.000746s | 0.000743s | byte equality observed |
| bind_version.test | 10 | 0.000738s | 0.000734s | 0.000739s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000758s | 0.000734s | 0.000731s | byte equality observed |
| function_version.test | 10 | 0.000741s | 0.000745s | 0.000747s | byte equality observed |
| integer_sequence.test | 10 | 0.000727s | 0.000742s | 0.000746s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000751s | 0.000724s | 0.000746s | byte equality observed |
| integral.test | 10 | 0.000745s | 0.000749s | 0.000740s | byte equality observed |
| integral_version.test | 10 | 0.000728s | 0.000722s | 0.000744s | byte equality observed |
| list_version.test | 10 | 0.000747s | 0.000730s | 0.000726s | byte equality observed |
| map_version.test | 10 | 0.000752s | 0.000744s | 0.000733s | byte equality observed |
| mp11_version.test | 10 | 0.000734s | 0.000750s | 0.000795s | byte equality observed |
| mp_all.test | 10 | 0.000753s | 0.000730s | 0.000787s | byte equality observed |
| mp_all_2.test | 10 | 0.000746s | 0.000729s | 0.000773s | byte equality observed |
| mp_all_of.test | 10 | 0.000746s | 0.000763s | 0.000804s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000752s | 0.000750s | 0.000827s | byte equality observed |
| mp_and.test | 10 | 0.000749s | 0.000738s | 0.000799s | byte equality observed |
| mp_any.test | 10 | 0.000750s | 0.000734s | 0.000824s | byte equality observed |
| mp_any_2.test | 10 | 0.000748s | 0.000723s | 0.000818s | byte equality observed |
| mp_any_of.test | 10 | 0.000747s | 0.000735s | 0.000806s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000740s | 0.000747s | 0.000798s | byte equality observed |
| mp_append.test | 10 | 0.000761s | 0.000759s | 0.000833s | byte equality observed |
| mp_append_2.test | 10 | 0.000809s | 0.000752s | 0.000827s | byte equality observed |
| mp_append_3.test | 10 | 0.000361s | 0.000343s | 0.000782s | byte equality observed |
| mp_append_sf.test | 10 | 0.000794s | 0.000736s | 0.000794s | byte equality observed |
| mp_apply_q.test | 10 | 0.000828s | 0.000724s | 0.000808s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.000838s | 0.000759s | 0.000817s | byte equality observed |
| mp_assign.test | 10 | 0.000819s | 0.000753s | 0.000810s | byte equality observed |
| mp_assign_2.test | 10 | 0.000371s | 0.000345s | 0.000810s | byte equality observed |
| mp_at.test | 10 | 0.000800s | 0.000750s | 0.000814s | byte equality observed |
| mp_at_2.test | 10 | 0.000359s | 0.000347s | 0.000772s | byte equality observed |
| mp_at_sf.test | 10 | 0.000802s | 0.000795s | 0.000807s | byte equality observed |
| mp_back.test | 10 | 0.000806s | 0.000835s | 0.000789s | byte equality observed |
| mp_back_2.test | 10 | 0.000366s | 0.000353s | 0.000784s | byte equality observed |
| mp_bind.test | 10 | 0.000792s | 0.000835s | 0.000788s | byte equality observed |
| mp_bind_back.test | 10 | 0.000811s | 0.000826s | 0.000768s | byte equality observed |
| mp_bind_front.test | 10 | 0.000813s | 0.000843s | 0.000807s | byte equality observed |
| mp_bind_q.test | 10 | 0.000817s | 0.000818s | 0.000786s | byte equality observed |
| mp_clear.test | 10 | 0.000825s | 0.000832s | 0.000795s | byte equality observed |
| mp_clear_2.test | 10 | 0.000371s | 0.000362s | 0.000801s | byte equality observed |
| mp_compose.test | 10 | 0.000817s | 0.000816s | 0.000817s | byte equality observed |
| mp_cond.test | 10 | 0.000806s | 0.000831s | 0.000827s | byte equality observed |
| mp_cond_sf.test | 10 | 0.000799s | 0.000833s | 0.000811s | byte equality observed |
| mp_contains.test | 10 | 0.000815s | 0.000838s | 0.000804s | byte equality observed |
| mp_copy_if.test | 10 | 0.000803s | 0.000842s | 0.000822s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.000824s | 0.000829s | 0.000835s | byte equality observed |
| mp_count.test | 10 | 0.000820s | 0.000830s | 0.000805s | byte equality observed |
| mp_count_if.test | 10 | 0.000826s | 0.000849s | 0.000805s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000799s | 0.000836s | 0.000809s | byte equality observed |
| mp_defer.test | 10 | 0.000802s | 0.000853s | 0.000806s | byte equality observed |
| mp_drop.test | 10 | 0.000795s | 0.000822s | 0.000803s | byte equality observed |
| mp_drop_2.test | 10 | 0.000358s | 0.000351s | 0.000778s | byte equality observed |
| mp_empty.test | 10 | 0.000831s | 0.000800s | 0.000796s | byte equality observed |
| mp_empty_2.test | 10 | 0.000360s | 0.000364s | 0.000801s | byte equality observed |
| mp_erase.test | 10 | 0.000820s | 0.000809s | 0.000789s | byte equality observed |
| mp_erase_2.test | 10 | 0.000369s | 0.000357s | 0.000819s | byte equality observed |
| mp_eval_if.test | 10 | 0.000805s | 0.000807s | 0.000806s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.000823s | 0.000820s | 0.000821s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.000830s | 0.000821s | 0.000784s | byte equality observed |
| mp_eval_or.test | 10 | 0.000828s | 0.000833s | 0.000813s | byte equality observed |
| mp_fill.test | 10 | 0.000792s | 0.000825s | 0.000803s | byte equality observed |
| mp_fill_2.test | 10 | 0.000363s | 0.000365s | 0.000778s | byte equality observed |
| mp_filter.test | 10 | 0.000810s | 0.000844s | 0.000809s | byte equality observed |
| mp_find.test | 10 | 0.000812s | 0.000821s | 0.000789s | byte equality observed |
| mp_find_if.test | 10 | 0.000821s | 0.000810s | 0.000803s | byte equality observed |
| mp_find_if_q.test | 10 | 0.000819s | 0.000809s | 0.000829s | byte equality observed |
| mp_flatten.test | 10 | 0.000823s | 0.000832s | 0.000863s | byte equality observed |
| mp_fold.test | 10 | 0.000823s | 0.000830s | 0.000822s | byte equality observed |
| mp_fold_q.test | 10 | 0.000805s | 0.000830s | 0.000835s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.000815s | 0.000827s | 0.000803s | byte equality observed |
| mp_for_each.test | 10 | 0.000826s | 0.000812s | 0.000803s | byte equality observed |
| mp_from_sequence.test | 10 | 0.000799s | 0.000795s | 0.000823s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.000824s | 0.000845s | 0.000825s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.000833s | 0.000838s | 0.000806s | byte equality observed |
| mp_front.test | 10 | 0.000803s | 0.000816s | 0.000802s | byte equality observed |
| mp_front_2.test | 10 | 0.000368s | 0.000360s | 0.000814s | byte equality observed |
| mp_identity.test | 10 | 0.000811s | 0.000812s | 0.000804s | byte equality observed |
| mp_if.test | 10 | 0.000800s | 0.000805s | 0.000805s | byte equality observed |
| mp_if_sf.test | 10 | 0.000808s | 0.000805s | 0.000799s | byte equality observed |
| mp_inherit.test | 10 | 0.000810s | 0.000808s | 0.000811s | byte equality observed |
| mp_insert.test | 10 | 0.000818s | 0.000799s | 0.000811s | byte equality observed |
| mp_insert_2.test | 10 | 0.000368s | 0.000360s | 0.000789s | byte equality observed |
| mp_intersperse.test | 10 | 0.000807s | 0.000821s | 0.000794s | byte equality observed |
| mp_invoke_q.test | 10 | 0.000812s | 0.000829s | 0.000813s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.000828s | 0.000797s | 0.000819s | byte equality observed |
| mp_iota.test | 10 | 0.000822s | 0.000811s | 0.000815s | byte equality observed |
| mp_iota_2.test | 10 | 0.000795s | 0.000795s | 0.000839s | byte equality observed |
| mp_is_list.test | 10 | 0.000816s | 0.000822s | 0.000793s | byte equality observed |
| mp_is_map.test | 10 | 0.000828s | 0.000826s | 0.000824s | byte equality observed |
| mp_is_set.test | 10 | 0.000796s | 0.000826s | 0.000804s | byte equality observed |
| mp_is_value_list.test | 10 | 0.000831s | 0.000826s | 0.000800s | byte equality observed |
| mp_iterate.test | 10 | 0.000831s | 0.000811s | 0.000826s | byte equality observed |
| mp_join.test | 10 | 0.000821s | 0.000832s | 0.000795s | byte equality observed |
| mp_lambda.test | 10 | 0.000843s | 0.000828s | 0.000831s | byte equality observed |
| mp_less.test | 10 | 0.000817s | 0.000800s | 0.000842s | byte equality observed |
| mp_list_c.test | 10 | 0.000816s | 0.000809s | 0.000825s | byte equality observed |
| mp_list_v.test | 10 | 0.000365s | 0.000366s | 0.000800s | byte equality observed |
| mp_map_contains.test | 10 | 0.000815s | 0.000797s | 0.000786s | byte equality observed |
| mp_map_erase.test | 10 | 0.000823s | 0.000843s | 0.000799s | byte equality observed |
| mp_map_find.test | 10 | 0.000825s | 0.000838s | 0.000812s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000816s | 0.000828s | 0.000807s | byte equality observed |
| mp_map_find_3.test | 10 | 0.000840s | 0.000785s | 0.000800s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000814s | 0.000790s | 0.000830s | byte equality observed |
| mp_map_insert.test | 10 | 0.000805s | 0.000809s | 0.000822s | byte equality observed |
| mp_map_keys.test | 10 | 0.000806s | 0.000795s | 0.000825s | byte equality observed |
| mp_map_replace.test | 10 | 0.000831s | 0.000806s | 0.000831s | byte equality observed |
| mp_map_update.test | 10 | 0.000809s | 0.000802s | 0.000836s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000812s | 0.000816s | 0.000815s | byte equality observed |
| mp_max.test | 10 | 0.000809s | 0.000795s | 0.000791s | byte equality observed |
| mp_max_element.test | 10 | 0.000806s | 0.000822s | 0.000780s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000360s | 0.000365s | 0.000779s | byte equality observed |
| mp_max_element_q.test | 10 | 0.000809s | 0.000816s | 0.000782s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000354s | 0.000361s | 0.000786s | byte equality observed |
| mp_min.test | 10 | 0.000822s | 0.000815s | 0.000814s | byte equality observed |
| mp_min_element.test | 10 | 0.000819s | 0.000842s | 0.000824s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000362s | 0.000359s | 0.000803s | byte equality observed |
| mp_min_element_q.test | 10 | 0.000808s | 0.000808s | 0.000793s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000363s | 0.000361s | 0.000769s | byte equality observed |
| mp_none_of.test | 10 | 0.000819s | 0.000814s | 0.000788s | byte equality observed |
| mp_none_of_q.test | 10 | 0.000812s | 0.000800s | 0.000820s | byte equality observed |
| mp_not_fn.test | 10 | 0.000829s | 0.000812s | 0.000819s | byte equality observed |
| mp_nth_element.test | 10 | 0.000819s | 0.000831s | 0.000816s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.000821s | 0.000858s | 0.000822s | byte equality observed |
| mp_or.test | 10 | 0.000844s | 0.000840s | 0.000849s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.000796s | 0.000824s | 0.000807s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.000811s | 0.000819s | 0.000829s | byte equality observed |
| mp_partial_sum.test | 10 | 0.000823s | 0.000816s | 0.000793s | byte equality observed |
| mp_partition.test | 10 | 0.000812s | 0.000871s | 0.000834s | byte equality observed |
| mp_partition_q.test | 10 | 0.000792s | 0.000859s | 0.000793s | byte equality observed |
| mp_plus.test | 10 | 0.000820s | 0.000796s | 0.000820s | byte equality observed |
| mp_pop_back.test | 10 | 0.000807s | 0.000815s | 0.000807s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000360s | 0.000360s | 0.000788s | byte equality observed |
| mp_pop_front.test | 10 | 0.000799s | 0.000809s | 0.000791s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000367s | 0.000357s | 0.000785s | byte equality observed |
| mp_power_set.test | 10 | 0.000811s | 0.000843s | 0.000805s | byte equality observed |
| mp_product.test | 10 | 0.000827s | 0.000810s | 0.000812s | byte equality observed |
| mp_push_back.test | 10 | 0.000811s | 0.000806s | 0.000808s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000363s | 0.000365s | 0.000794s | byte equality observed |
| mp_push_front.test | 10 | 0.000804s | 0.000817s | 0.000768s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000361s | 0.000359s | 0.000774s | byte equality observed |
| mp_quote.test | 10 | 0.000807s | 0.000852s | 0.000818s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000789s | 0.000831s | 0.000806s | byte equality observed |
| mp_remove.test | 10 | 0.000814s | 0.000839s | 0.000828s | byte equality observed |
| mp_remove_if.test | 10 | 0.000799s | 0.000847s | 0.000824s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.000817s | 0.000821s | 0.000847s | byte equality observed |
| mp_rename.test | 10 | 0.000809s | 0.000826s | 0.000846s | byte equality observed |
| mp_rename_2.test | 10 | 0.000364s | 0.000366s | 0.000816s | byte equality observed |
| mp_rename_v.test | 10 | 0.000361s | 0.000355s | 0.000795s | byte equality observed |
| mp_repeat.test | 10 | 0.000808s | 0.000814s | 0.000817s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000360s | 0.000363s | 0.000789s | byte equality observed |
| mp_repeat_3.test | 10 | 0.000816s | 0.000806s | 0.000826s | byte equality observed |
| mp_replace.test | 10 | 0.000799s | 0.000834s | 0.000841s | byte equality observed |
| mp_replace_at.test | 10 | 0.000826s | 0.000844s | 0.000794s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.000827s | 0.000818s | 0.000820s | byte equality observed |
| mp_replace_front.test | 10 | 0.000801s | 0.000808s | 0.000802s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000363s | 0.000358s | 0.000763s | byte equality observed |
| mp_replace_if.test | 10 | 0.000798s | 0.000832s | 0.000785s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.000804s | 0.000835s | 0.000837s | byte equality observed |
| mp_replace_second.test | 10 | 0.000804s | 0.000799s | 0.000807s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000364s | 0.000367s | 0.000791s | byte equality observed |
| mp_replace_third.test | 10 | 0.000807s | 0.000814s | 0.000789s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000364s | 0.000362s | 0.000764s | byte equality observed |
| mp_reverse.test | 10 | 0.000837s | 0.000828s | 0.000807s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.000812s | 0.000846s | 0.000832s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000818s | 0.000811s | 0.000809s | byte equality observed |
| mp_rotate_left.test | 10 | 0.000819s | 0.000845s | 0.000799s | byte equality observed |
| mp_rotate_right.test | 10 | 0.000830s | 0.000852s | 0.000821s | byte equality observed |
| mp_same.test | 10 | 0.000830s | 0.000826s | 0.000814s | byte equality observed |
| mp_second.test | 10 | 0.000806s | 0.000794s | 0.000808s | byte equality observed |
| mp_second_2.test | 10 | 0.000369s | 0.000364s | 0.000814s | byte equality observed |
| mp_set_contains.test | 10 | 0.000812s | 0.000850s | 0.000813s | byte equality observed |
| mp_set_difference.test | 10 | 0.000819s | 0.000821s | 0.000814s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000834s | 0.000812s | 0.000830s | byte equality observed |
| mp_set_intersection.test | 10 | 0.000820s | 0.000813s | 0.000837s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000819s | 0.000835s | 0.000815s | byte equality observed |
| mp_set_push_back.test | 10 | 0.000839s | 0.000819s | 0.000816s | byte equality observed |
| mp_set_push_front.test | 10 | 0.000828s | 0.000823s | 0.000808s | byte equality observed |
| mp_set_union.test | 10 | 0.000819s | 0.000833s | 0.000819s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.000803s | 0.000847s | 0.000837s | byte equality observed |
| mp_similar.test | 10 | 0.000800s | 0.000811s | 0.000849s | byte equality observed |
| mp_size.test | 10 | 0.000794s | 0.000818s | 0.000815s | byte equality observed |
| mp_size_2.test | 10 | 0.000364s | 0.000347s | 0.000801s | byte equality observed |
| mp_slice.test | 10 | 0.000839s | 0.000824s | 0.000790s | byte equality observed |
| mp_slice_2.test | 10 | 0.000363s | 0.000361s | 0.000800s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.000819s | 0.000810s | 0.000817s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.000831s | 0.000793s | 0.000826s | byte equality observed |
| mp_sort.test | 10 | 0.000823s | 0.000807s | 0.000823s | byte equality observed |
| mp_sort_q.test | 10 | 0.000831s | 0.000807s | 0.000814s | byte equality observed |
| mp_split.test | 10 | 0.000807s | 0.000796s | 0.000805s | byte equality observed |
| mp_starts_with.test | 10 | 0.000835s | 0.000809s | 0.000819s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.000821s | 0.000809s | 0.000820s | byte equality observed |
| mp_take.test | 10 | 0.000841s | 0.000791s | 0.000803s | byte equality observed |
| mp_take_2.test | 10 | 0.000367s | 0.000363s | 0.000785s | byte equality observed |
| mp_third.test | 10 | 0.000794s | 0.000788s | 0.000785s | byte equality observed |
| mp_third_2.test | 10 | 0.000366s | 0.000357s | 0.000770s | byte equality observed |
| mp_transform.test | 10 | 0.000804s | 0.000811s | 0.000795s | byte equality observed |
| mp_transform_2.test | 10 | 0.000771s | 0.000757s | 0.000786s | byte equality observed |
| mp_transform_front.test | 10 | 0.000791s | 0.000809s | 0.000803s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000361s | 0.000367s | 0.000775s | byte equality observed |
| mp_transform_if.test | 10 | 0.000805s | 0.000814s | 0.000799s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.000798s | 0.000816s | 0.000835s | byte equality observed |
| mp_transform_q.test | 10 | 0.000832s | 0.000812s | 0.000840s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.000824s | 0.000799s | 0.000834s | byte equality observed |
| mp_transform_second.test | 10 | 0.000795s | 0.000797s | 0.000827s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000369s | 0.000362s | 0.000819s | byte equality observed |
| mp_transform_sf.test | 10 | 0.000821s | 0.000797s | 0.000812s | byte equality observed |
| mp_transform_third.test | 10 | 0.000829s | 0.000797s | 0.000819s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000361s | 0.000371s | 0.000788s | byte equality observed |
| mp_unique.test | 10 | 0.000800s | 0.000808s | 0.000786s | byte equality observed |
| mp_unique_if.test | 10 | 0.000831s | 0.000834s | 0.000810s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.000822s | 0.000819s | 0.000833s | byte equality observed |
| mp_valid.test | 10 | 0.000806s | 0.000826s | 0.000825s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.000801s | 0.000813s | 0.000812s | byte equality observed |
| mp_value.test | 10 | 0.000362s | 0.000366s | 0.000780s | byte equality observed |
| mp_with_index.test | 10 | 0.001118s | 0.001060s | 0.001026s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000359s | 0.000371s | 0.000797s | byte equality observed |
| mpl.test | 10 | 0.000811s | 0.000816s | 0.000806s | byte equality observed |
| mpl_list.test | 10 | 0.000813s | 0.000828s | 0.000842s | byte equality observed |
| mpl_tuple.test | 10 | 0.000808s | 0.000806s | 0.000818s | byte equality observed |
| mpl_version.test | 10 | 0.000791s | 0.000818s | 0.000826s | byte equality observed |
| set_version.test | 10 | 0.000807s | 0.000783s | 0.000801s | byte equality observed |
| tuple_apply.test | 10 | 0.000827s | 0.000805s | 0.000820s | byte equality observed |
| tuple_for_each.test | 10 | 0.000830s | 0.000825s | 0.000838s | byte equality observed |
| tuple_transform.test | 10 | 0.000817s | 0.000795s | 0.000817s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000823s | 0.000803s | 0.000805s | byte equality observed |
| tuple_version.test | 10 | 0.000834s | 0.000805s | 0.000821s | byte equality observed |
| utility_version.test | 10 | 0.000833s | 0.000783s | 0.000817s | byte equality observed |
| version.test | 10 | 0.000840s | 0.000822s | 0.000785s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44774088589).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
