# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.029107 | 0.060302 | 0.090496 | — | — | — |
| complex_h.test | COMPILE | 0.115692 | 0.262147 | 0.339089 | — | — | — |
| mp_size.test | RUN | 0.139544 | 0.858705 | 0.475116 | 0.001200 | 0.001353 | 0.001092 |
| mp_size_2.test | RUN | 0.011963 | 0.029847 | 0.041196 | 0.000463 | 0.000466 | 0.001090 |
| mp_empty.test | RUN | 0.131750 | 0.516834 | 0.443748 | 0.001181 | 0.001293 | 0.001082 |
| mp_empty_2.test | RUN | 0.012342 | 0.029993 | 0.041977 | 0.000475 | 0.000499 | 0.001121 |
| mp_assign.test | RUN | 0.156962 | 1.115739 | 0.594510 | 0.001289 | 0.001375 | 0.001144 |
| mp_assign_2.test | RUN | 0.012675 | 0.030100 | 0.041567 | 0.000499 | 0.000535 | 0.000980 |
| mp_clear.test | RUN | 0.137775 | 0.475663 | 0.437725 | 0.001323 | 0.001332 | 0.001040 |
| mp_clear_2.test | RUN | 0.012884 | 0.029962 | 0.042007 | 0.000466 | 0.000485 | 0.001023 |
| mp_front.test | RUN | 0.146518 | 0.767505 | 0.503669 | 0.001256 | 0.001355 | 0.001064 |
| mp_front_2.test | RUN | 0.012068 | 0.029719 | 0.042138 | 0.000464 | 0.000514 | 0.001032 |
| mp_pop_front.test | RUN | 0.143058 | 0.813712 | 0.526599 | 0.001182 | 0.001257 | 0.000793 |
| mp_pop_front_2.test | RUN | 0.012257 | 0.029907 | 0.042333 | 0.000406 | 0.000497 | 0.001022 |
| mp_second.test | RUN | 0.140107 | 0.494886 | 0.490701 | 0.001167 | 0.001292 | 0.001095 |
| mp_second_2.test | RUN | 0.011774 | 0.030187 | 0.040658 | 0.000465 | 0.000495 | 0.001156 |
| mp_third.test | RUN | 0.129245 | 0.457469 | 0.435436 | 0.001094 | 0.001245 | 0.001127 |
| mp_third_2.test | RUN | 0.011572 | 0.029811 | 0.042438 | 0.000515 | 0.000487 | 0.001088 |
| mp_push_front.test | RUN | 0.184119 | 1.728916 | 0.835500 | 0.001187 | 0.001339 | 0.001135 |
| mp_push_front_2.test | RUN | 0.013220 | 0.028951 | 0.038900 | 0.000482 | 0.000525 | 0.001147 |
| mp_push_back.test | RUN | 0.183036 | 1.712595 | 0.827672 | 0.001144 | 0.001354 | 0.001140 |
| mp_push_back_2.test | RUN | 0.012114 | 0.030203 | 0.041796 | 0.000491 | 0.000494 | 0.001028 |
| mp_rename.test | RUN | 0.168817 | 1.581668 | 0.714900 | 0.001251 | 0.001227 | 0.001076 |
| mp_rename_2.test | RUN | 0.010604 | 0.030112 | 0.044032 | 0.000551 | 0.000510 | 0.001135 |
| mp_append.test | RUN | 0.181424 | 1.782802 | 0.790686 | 0.001126 | 0.001305 | 0.001115 |
| mp_append_2.test | RUN | 0.413495 | 4.040084 | 1.070276 | 0.001179 | 0.001225 | 0.001095 |
| mp_append_3.test | RUN | 0.011446 | 0.029615 | 0.042077 | 0.000472 | 0.000384 | 0.001039 |
| mp_append_sf.test | RUN | 0.124087 | 0.419182 | 0.423585 | 0.001072 | 0.001260 | 0.001135 |
| mp_replace_front.test | RUN | 0.160821 | 1.265710 | 0.623748 | 0.001126 | 0.001228 | 0.001164 |
| mp_replace_front_2.test | RUN | 0.011834 | 0.030415 | 0.043875 | 0.000479 | 0.000473 | 0.001027 |
| mp_replace_second.test | RUN | 0.162297 | 0.813841 | 0.588464 | 0.001159 | 0.001131 | 0.001057 |
| mp_replace_second_2.test | RUN | 0.012525 | 0.029747 | 0.040680 | 0.000478 | 0.000486 | 0.001204 |
| mp_replace_third.test | RUN | 0.153515 | 0.658896 | 0.532367 | 0.001146 | 0.001181 | 0.001098 |
| mp_replace_third_2.test | RUN | 0.012631 | 0.030157 | 0.040897 | 0.000465 | 0.000489 | 0.001162 |
| mp_apply_q.test | RUN | 0.170310 | 1.561144 | 0.702731 | 0.001084 | 0.001286 | 0.001141 |
| mp_apply_q_sf.test | RUN | 0.130232 | 0.443678 | 0.430881 | 0.001159 | 0.001204 | 0.001111 |
| mp_is_list.test | RUN | 0.134576 | 0.528493 | 0.451882 | 0.000944 | 0.001247 | 0.001049 |
| mp_list_c.test | RUN | 0.138411 | 0.637106 | 0.490802 | 0.001097 | 0.001273 | 0.000860 |
| mp_transform_front.test | RUN | 0.154968 | 1.265219 | 0.630880 | 0.001117 | 0.001243 | 0.001080 |
| mp_transform_front_2.test | RUN | 0.012823 | 0.029517 | 0.041707 | 0.000439 | 0.000509 | 0.001003 |
| mp_transform_second.test | RUN | 0.152659 | 1.083660 | 0.582374 | 0.001126 | 0.001292 | 0.001040 |
| mp_transform_second_2.test | RUN | 0.010896 | 0.029565 | 0.039480 | 0.000479 | 0.000484 | 0.001031 |
| mp_transform_third.test | RUN | 0.141351 | 0.823191 | 0.497882 | 0.001189 | 0.001374 | 0.001078 |
| mp_transform_third_2.test | RUN | 0.012775 | 0.030049 | 0.040622 | 0.000421 | 0.000487 | 0.001116 |
| mp_list_v.test | RUN | 0.010408 | 0.029297 | 0.040626 | 0.000453 | 0.000527 | 0.001082 |
| mp_rename_v.test | RUN | 0.010747 | 0.029853 | 0.040736 | 0.000430 | 0.000502 | 0.000945 |
| mp_is_value_list.test | RUN | 0.124945 | 0.322347 | 0.422374 | 0.001185 | 0.001242 | 0.001176 |
| mp_transform.test | RUN | 0.338682 | 2.716596 | 1.361513 | 0.001415 | 0.001315 | 0.001116 |
| mp_transform_2.test | RUN | 0.119273 | 0.298138 | 0.378001 | 0.001060 | 0.001225 | 0.001171 |
| mp_transform_q.test | RUN | 0.324719 | 2.581378 | 1.292779 | 0.000984 | 0.001301 | 0.001050 |
| mp_transform_q_2.test | RUN | 0.328411 | 0.807261 | 1.635256 | 0.001238 | 0.001202 | 0.001089 |
| mp_transform_sf.test | RUN | 0.134641 | 0.446044 | 0.452235 | 0.001148 | 0.001335 | 0.001115 |
| mp_transform_if.test | RUN | 0.174888 | 1.292340 | 0.682008 | 0.001152 | 0.001072 | 0.001027 |
| mp_transform_if_q.test | RUN | 0.173908 | 1.272909 | 0.699682 | 0.001273 | 0.001108 | 0.000858 |
| mp_filter.test | RUN | 0.154723 | 0.735774 | 0.502500 | 0.001089 | 0.001384 | 0.001124 |
| mp_fill.test | RUN | 0.145854 | 0.565807 | 0.476272 | 0.001217 | 0.001306 | 0.001039 |
| mp_fill_2.test | RUN | 0.021241 | 0.044399 | 0.068195 | 0.000512 | 0.000497 | 0.000990 |
| mp_count.test | RUN | 0.280763 | 1.367965 | 0.753016 | 0.001244 | 0.001161 | 0.001165 |
| mp_count_if.test | RUN | 0.286423 | 1.380540 | 0.823862 | 0.001103 | 0.001134 | 0.001123 |
| mp_count_if_q.test | RUN | 0.146679 | 0.912586 | 0.498996 | 0.001253 | 0.001188 | 0.001039 |
| mp_contains.test | RUN | 0.134341 | 0.535399 | 0.466209 | 0.001091 | 0.001278 | 0.001156 |
| mp_starts_with.test | RUN | 0.141448 | 0.541254 | 0.463814 | 0.001084 | 0.001259 | 0.001160 |
| mp_starts_with_sf.test | RUN | 0.140715 | 0.459970 | 0.446966 | 0.001111 | 0.001262 | 0.001112 |
| mp_repeat.test | RUN | 0.210020 | 2.289509 | 0.910433 | 0.001081 | 0.001249 | 0.001129 |
| mp_repeat_2.test | RUN | 0.021391 | 0.046682 | 0.070036 | 0.000480 | 0.000517 | 0.001204 |
| mp_repeat_3.test | RUN | 0.176479 | 0.278612 | 0.430970 | 0.001146 | 0.001262 | 0.001110 |
| mp_product.test | RUN | 0.158605 | 1.373695 | 0.637621 | 0.001048 | 0.001403 | 0.001010 |
| mp_drop.test | RUN | 0.180581 | 1.726124 | 0.754623 | 0.001001 | 0.001290 | 0.001068 |
| mp_drop_2.test | RUN | 0.021210 | 0.047184 | 0.071090 | 0.000432 | 0.000485 | 0.001028 |
| mp_iota.test | RUN | 0.166449 | 1.454389 | 0.667670 | 0.001335 | 0.001280 | 0.001175 |
| mp_iota_2.test | RUN | 0.182405 | 1.738392 | 0.731440 | 0.001067 | 0.001347 | 0.001015 |
| mp_at.test | RUN | 0.148253 | 0.745334 | 0.526676 | 0.001034 | 0.001187 | 0.001030 |
| mp_at_2.test | RUN | 0.021234 | 0.047620 | 0.067947 | 0.000497 | 0.000488 | 0.000987 |
| mp_at_sf.test | RUN | 0.136295 | 0.461677 | 0.429020 | 0.001147 | 0.001301 | 0.001048 |
| mp_take.test | RUN | 0.243186 | 2.261798 | 0.883164 | 0.001326 | 0.001381 | 0.001060 |
| mp_take_2.test | RUN | 0.021226 | 0.047463 | 0.067112 | 0.000443 | 0.000464 | 0.001035 |
| mp_slice.test | RUN | 0.289609 | 2.309819 | 1.139149 | 0.001080 | 0.001247 | 0.001101 |
| mp_slice_2.test | RUN | 0.021304 | 0.046659 | 0.068225 | 0.000521 | 0.000489 | 0.000991 |
| mp_replace.test | RUN | 0.173444 | 1.163092 | 0.713843 | 0.001141 | 0.001348 | 0.001049 |
| mp_replace_if.test | RUN | 0.166293 | 1.014806 | 0.653183 | 0.001135 | 0.001307 | 0.001023 |
| mp_replace_if_q.test | RUN | 0.164121 | 1.032571 | 0.663458 | 0.001221 | 0.001277 | 0.001130 |
| mp_copy_if.test | RUN | 0.173907 | 1.424662 | 0.629994 | 0.001098 | 0.001368 | 0.001039 |
| mp_copy_if_q.test | RUN | 0.172287 | 1.449659 | 0.629971 | 0.001089 | 0.001187 | 0.000964 |
| mp_remove.test | RUN | 0.164739 | 0.972239 | 0.641180 | 0.001105 | 0.001356 | 0.000897 |
| mp_remove_if.test | RUN | 0.173079 | 1.509137 | 0.674375 | 0.001089 | 0.001358 | 0.001082 |
| mp_remove_if_q.test | RUN | 0.176658 | 1.520843 | 0.684369 | 0.001115 | 0.001235 | 0.001082 |
| mp_partition.test | RUN | 0.172681 | 1.442479 | 0.709533 | 0.001116 | 0.001139 | 0.000966 |
| mp_partition_q.test | RUN | 0.171472 | 1.443088 | 0.716823 | 0.001243 | 0.001352 | 0.000933 |
| mp_sort.test | RUN | 0.161863 | 1.020003 | 0.631718 | 0.001194 | 0.001343 | 0.001135 |
| mp_sort_q.test | RUN | 0.164225 | 1.014531 | 0.633654 | 0.001144 | 0.001470 | 0.001041 |
| mp_find.test | RUN | 0.155433 | 1.098929 | 0.533580 | 0.001111 | 0.001317 | 0.001032 |
| mp_find_if.test | RUN | 0.153454 | 1.018564 | 0.509760 | 0.001198 | 0.001283 | 0.000969 |
| mp_find_if_q.test | RUN | 0.164217 | 1.122486 | 0.637703 | 0.001097 | 0.001374 | 0.001134 |
| mp_reverse.test | RUN | 0.368315 | 3.041255 | 1.289826 | 0.001065 | 0.001322 | 0.001016 |
| mp_fold.test | RUN | 0.611436 | 2.317979 | 3.196069 | 0.001319 | 0.001342 | 0.001178 |
| mp_fold_q.test | RUN | 0.155557 | 1.000306 | 0.599523 | 0.001290 | 0.001188 | 0.001067 |
| mp_fold_q_sf.test | RUN | 0.138709 | 0.459565 | 0.463792 | 0.001131 | 0.001198 | 0.001180 |
| mp_reverse_fold.test | RUN | 0.288822 | 2.220937 | 0.873665 | 0.001113 | 0.001206 | 0.001080 |
| mp_reverse_fold_q.test | RUN | 0.160645 | 1.230400 | 0.643070 | 0.001105 | 0.001272 | 0.001164 |
| mp_unique.test | RUN | 0.159738 | 1.096559 | 0.625998 | 0.001142 | 0.001186 | 0.001077 |
| mp_unique_if.test | RUN | 0.307354 | 2.353603 | 1.004575 | 0.001114 | 0.001298 | 0.001236 |
| mp_unique_if_q.test | RUN | 0.263806 | 2.312207 | 0.810253 | 0.001168 | 0.001342 | 0.001168 |
| mp_all_of.test | RUN | 0.396532 | 1.207486 | 1.052970 | 0.001075 | 0.001250 | 0.001119 |
| mp_all_of_q.test | RUN | 0.136019 | 0.520663 | 0.463767 | 0.001434 | 0.001258 | 0.001074 |
| mp_any_of.test | RUN | 0.387823 | 1.245535 | 1.038810 | 0.001127 | 0.001245 | 0.001150 |
| mp_any_of_q.test | RUN | 0.137181 | 0.513294 | 0.444680 | 0.001168 | 0.001248 | 0.001151 |
| mp_none_of.test | RUN | 0.392423 | 1.278187 | 1.037423 | 0.001120 | 0.001171 | 0.001160 |
| mp_none_of_q.test | RUN | 0.137378 | 0.517368 | 0.441289 | 0.001139 | 0.001221 | 0.001076 |
| mp_replace_at.test | RUN | 0.173874 | 1.108845 | 0.722630 | 0.000994 | 0.001269 | 0.001065 |
| mp_replace_at_c.test | RUN | 0.169519 | 1.116138 | 0.726494 | 0.001152 | 0.001257 | 0.000963 |
| mp_for_each.test | RUN | 0.162022 | 0.708580 | 0.688906 | 0.001093 | 0.001170 | 0.001149 |
| mp_insert.test | RUN | 0.274690 | 2.269368 | 1.034732 | 0.001244 | 0.001234 | 0.001014 |
| mp_insert_2.test | RUN | 0.020572 | 0.044258 | 0.068671 | 0.000488 | 0.000488 | 0.001075 |
| mp_erase.test | RUN | 0.299957 | 2.408344 | 1.221572 | 0.001306 | 0.001334 | 0.001120 |
| mp_erase_2.test | RUN | 0.021161 | 0.045673 | 0.064736 | 0.000505 | 0.000473 | 0.001023 |
| mp_with_index.test | RUN | 0.388336 | 4.833618 | 2.641233 | 0.001589 | 0.001597 | 0.001327 |
| mp_with_index_cx.test | RUN | 0.002761 | 0.013893 | 0.020378 | 0.000467 | 0.000500 | 0.001016 |
| mp_from_sequence.test | RUN | 0.176695 | 1.255943 | 0.679963 | 0.001268 | 0.001173 | 0.001171 |
| mp_from_sequence_2.test | RUN | 0.182605 | 1.471247 | 0.736676 | 0.001052 | 0.001163 | 0.001072 |
| mp_from_sequence_3.test | RUN | 0.151848 | 0.645748 | 0.529555 | 0.001115 | 0.001343 | 0.001037 |
| mp_min_element.test | RUN | 0.141804 | 0.588566 | 0.466335 | 0.001162 | 0.001307 | 0.001084 |
| mp_min_element_2.test | RUN | 0.022583 | 0.047996 | 0.068835 | 0.000482 | 0.000473 | 0.001032 |
| mp_min_element_q.test | RUN | 0.143794 | 0.590940 | 0.467010 | 0.001133 | 0.001310 | 0.001108 |
| mp_min_element_q_2.test | RUN | 0.022022 | 0.045848 | 0.066311 | 0.000487 | 0.000482 | 0.001057 |
| mp_max_element.test | RUN | 0.146605 | 0.579497 | 0.472653 | 0.001137 | 0.001192 | 0.000971 |
| mp_max_element_2.test | RUN | 0.021528 | 0.043154 | 0.063984 | 0.000457 | 0.000461 | 0.000963 |
| mp_max_element_q.test | RUN | 0.144131 | 0.591712 | 0.472976 | 0.001231 | 0.001204 | 0.001085 |
| mp_max_element_q_2.test | RUN | 0.021302 | 0.044006 | 0.065255 | 0.000481 | 0.000514 | 0.001004 |
| mp_nth_element.test | RUN | 0.158260 | 0.838517 | 0.600419 | 0.001424 | 0.001131 | 0.001008 |
| mp_nth_element_q.test | RUN | 0.157187 | 0.815604 | 0.592617 | 0.001265 | 0.001280 | 0.000790 |
| mp_back.test | RUN | 0.160157 | 0.692174 | 0.542864 | 0.001070 | 0.001291 | 0.001081 |
| mp_back_2.test | RUN | 0.021540 | 0.045980 | 0.067726 | 0.000495 | 0.000503 | 0.001042 |
| mp_pop_back.test | RUN | 0.471967 | 4.647488 | 1.220340 | 0.000969 | 0.001386 | 0.001129 |
| mp_pop_back_2.test | RUN | 0.021892 | 0.044915 | 0.068224 | 0.000488 | 0.000478 | 0.000995 |
| mp_flatten.test | RUN | 0.187625 | 1.616241 | 0.804007 | 0.001456 | 0.001306 | 0.001139 |
| mp_rotate_left.test | RUN | 0.186565 | 1.754599 | 0.783278 | 0.001233 | 0.001378 | 0.001077 |
| mp_rotate_right.test | RUN | 0.187019 | 1.762745 | 0.795095 | 0.001442 | 0.001266 | 0.001073 |
| mp_power_set.test | RUN | 0.185784 | 1.668857 | 0.806891 | 0.001180 | 0.001200 | 0.001082 |
| mp_partial_sum.test | RUN | 0.253310 | 2.251708 | 0.920717 | 0.001119 | 0.001366 | 0.001069 |
| mp_iterate.test | RUN | 0.160936 | 0.659796 | 0.625443 | 0.001156 | 0.001306 | 0.001212 |
| mp_pairwise_fold.test | RUN | 0.185818 | 1.546588 | 0.814236 | 0.001129 | 0.001185 | 0.001042 |
| mp_pairwise_fold_q.test | RUN | 0.143779 | 0.435302 | 0.462449 | 0.001202 | 0.001295 | 0.001112 |
| mp_sliding_fold.test | RUN | 0.374976 | 2.986227 | 1.529293 | 0.001206 | 0.001185 | 0.001092 |
| mp_sliding_fold_q.test | RUN | 0.367011 | 2.989100 | 1.532859 | 0.001208 | 0.001311 | 0.000895 |
| mp_intersperse.test | RUN | 0.171531 | 1.100467 | 0.698732 | 0.001269 | 0.001328 | 0.001117 |
| mp_split.test | RUN | 0.256888 | 2.135298 | 0.984591 | 0.001141 | 0.001264 | 0.000984 |
| mp_join.test | RUN | 0.201566 | 1.786532 | 0.872835 | 0.001085 | 0.001071 | 0.001089 |
| integral.test | RUN | 0.149973 | 0.784543 | 0.528164 | 0.001233 | 0.001294 | 0.001162 |
| mp_value.test | RUN | 0.009588 | 0.023699 | 0.033068 | 0.000478 | 0.000474 | 0.001192 |
| mp_identity.test | RUN | 0.145765 | 0.720085 | 0.499598 | 0.001137 | 0.001336 | 0.001074 |
| mp_inherit.test | RUN | 0.136227 | 0.512670 | 0.469964 | 0.001181 | 0.001260 | 0.001101 |
| mp_if.test | RUN | 0.137091 | 0.579387 | 0.461015 | 0.001194 | 0.001050 | 0.001084 |
| mp_if_sf.test | RUN | 0.126855 | 0.427627 | 0.418290 | 0.001358 | 0.001110 | 0.001143 |
| mp_eval_if.test | RUN | 0.142709 | 0.623053 | 0.477994 | 0.001299 | 0.001194 | 0.001044 |
| mp_eval_if_sf.test | RUN | 0.129962 | 0.432707 | 0.434998 | 0.001233 | 0.001341 | 0.001141 |
| mp_valid.test | RUN | 0.133041 | 0.437652 | 0.430801 | 0.001360 | 0.000963 | 0.001128 |
| mp_defer.test | RUN | 0.146794 | 0.755267 | 0.523106 | 0.001163 | 0.001190 | 0.001181 |
| mp_quote.test | RUN | 0.143995 | 0.773847 | 0.545729 | 0.001342 | 0.001304 | 0.001139 |
| mp_invoke_q.test | RUN | 0.157516 | 1.000193 | 0.607774 | 0.001236 | 0.001060 | 0.001090 |
| mp_invoke_q_sf.test | RUN | 0.131445 | 0.433601 | 0.412162 | 0.001149 | 0.001264 | 0.001066 |
| mp_quote_trait.test | RUN | 0.146057 | 0.847633 | 0.518717 | 0.001207 | 0.001287 | 0.001199 |
| mp_cond.test | RUN | 0.137182 | 0.508072 | 0.450561 | 0.001408 | 0.001338 | 0.001080 |
| mp_cond_sf.test | RUN | 0.130539 | 0.441248 | 0.426085 | 0.001232 | 0.001230 | 0.001122 |
| mp_not_fn.test | RUN | 0.128785 | 0.442041 | 0.405814 | 0.001118 | 0.001306 | 0.001046 |
| mp_eval_if_not.test | RUN | 0.142729 | 0.622355 | 0.484802 | 0.001179 | 0.001212 | 0.001192 |
| mp_eval_or.test | RUN | 0.132264 | 0.328796 | 0.451050 | 0.001273 | 0.001309 | 0.001152 |
| mp_compose.test | RUN | 0.150609 | 1.044950 | 0.574782 | 0.001086 | 0.001191 | 0.001002 |
| mp_valid_and_true.test | RUN | 0.135608 | 0.522607 | 0.444504 | 0.001162 | 0.001277 | 0.001104 |
| mp_compose_sf.test | COMPILE | 0.031439 | 0.058895 | 0.099742 | — | — | — |
| integer_sequence.test | RUN | 0.166599 | 1.023307 | 0.657096 | 0.001121 | 0.001208 | 0.001007 |
| tuple_for_each.test | RUN | 0.135057 | 0.363815 | 0.455826 | 0.001108 | 0.001134 | 0.001047 |
| tuple_for_each_cx.test | COMPILE | 0.023890 | 0.051565 | 0.076469 | — | — | — |
| tuple_apply.test | RUN | 0.137732 | 0.358983 | 0.462295 | 0.001082 | 0.001296 | 0.001071 |
| tuple_apply_cx.test | COMPILE | 0.034893 | 0.071591 | 0.109163 | — | — | — |
| construct_from_tuple.test | RUN | 0.135734 | 0.392825 | 0.463398 | 0.001173 | 0.001147 | 0.001107 |
| construct_from_tuple_cx.test | COMPILE | 0.036003 | 0.074720 | 0.100700 | — | — | — |
| tuple_transform.test | RUN | 0.216810 | 0.800764 | 0.894116 | 0.001156 | 0.001212 | 0.001159 |
| tuple_transform_2.test | RUN | 0.179481 | 0.583049 | 0.791738 | 0.001138 | 0.001170 | 0.001190 |
| tuple_transform_cx.test | COMPILE | 0.032660 | 0.072416 | 0.104823 | — | — | — |
| mp_set_contains.test | RUN | 0.141682 | 0.526808 | 0.461239 | 0.001091 | 0.001292 | 0.001349 |
| mp_set_push_back.test | RUN | 0.188991 | 1.669538 | 0.812038 | 0.001144 | 0.001330 | 0.001156 |
| mp_set_push_front.test | RUN | 0.245353 | 1.998704 | 0.921566 | 0.001214 | 0.001203 | 0.001049 |
| mp_is_set.test | RUN | 0.136130 | 0.527301 | 0.466647 | 0.001101 | 0.001325 | 0.001103 |
| mp_set_union.test | RUN | 0.179659 | 1.417759 | 0.756539 | 0.001114 | 0.001195 | 0.001126 |
| mp_set_union_sf.test | RUN | 0.127135 | 0.424910 | 0.418868 | 0.001164 | 0.001254 | 0.001083 |
| mp_set_difference.test | RUN | 0.163651 | 1.104756 | 0.643321 | 0.001115 | 0.001207 | 0.001058 |
| mp_set_difference_sf.test | RUN | 0.129040 | 0.417283 | 0.429472 | 0.001274 | 0.001212 | 0.001203 |
| mp_set_intersection.test | RUN | 0.161387 | 1.102572 | 0.627109 | 0.001128 | 0.001270 | 0.001056 |
| mp_set_intersection_sf.test | RUN | 0.130360 | 0.417496 | 0.426954 | 0.001250 | 0.001110 | 0.001075 |
| mp_all.test | RUN | 0.140983 | 0.515778 | 0.449969 | 0.001239 | 0.001326 | 0.001028 |
| mp_all_2.test | RUN | 0.394365 | 1.135129 | 1.021689 | 0.001425 | 0.001113 | 0.001079 |
| mp_and.test | RUN | 0.133721 | 0.514681 | 0.440816 | 0.001253 | 0.001250 | 0.001047 |
| mp_any.test | RUN | 0.140554 | 0.539165 | 0.455574 | 0.001219 | 0.001313 | 0.001123 |
| mp_any_2.test | RUN | 0.392745 | 1.153284 | 1.016713 | 0.001218 | 0.001191 | 0.001237 |
| mp_or.test | RUN | 0.142852 | 0.520448 | 0.467374 | 0.001108 | 0.001322 | 0.001165 |
| mp_same.test | RUN | 0.266165 | 0.878507 | 0.729441 | 0.001226 | 0.001298 | 0.001129 |
| mp_plus.test | RUN | 0.147486 | 0.618082 | 0.499493 | 0.001092 | 0.001145 | 0.001049 |
| mp_less.test | RUN | 0.138716 | 0.517372 | 0.429929 | 0.001104 | 0.001059 | 0.000765 |
| mp_min.test | RUN | 0.134276 | 0.479468 | 0.440983 | 0.001371 | 0.001299 | 0.001146 |
| mp_max.test | RUN | 0.142170 | 0.529741 | 0.461003 | 0.001303 | 0.001334 | 0.001112 |
| mp_similar.test | RUN | 0.135554 | 0.524162 | 0.458632 | 0.001086 | 0.001203 | 0.001041 |
| mp_map_find.test | RUN | 0.166122 | 0.982830 | 0.603953 | 0.001346 | 0.001430 | 0.001025 |
| mp_map_find_2.test | RUN | 0.151100 | 0.367982 | 0.510769 | 0.001162 | 0.001308 | 0.001018 |
| mp_map_find_3.test | RUN | 0.147941 | 0.368142 | 0.512632 | 0.001162 | 0.001127 | 0.001088 |
| mp_map_find_4.test | RUN | 0.143049 | 0.339006 | 0.470237 | 0.001143 | 0.001225 | 0.000978 |
| mp_map_contains.test | RUN | 0.144072 | 0.539331 | 0.468933 | 0.001184 | 0.001211 | 0.001025 |
| mp_map_insert.test | RUN | 0.198081 | 1.872184 | 0.869142 | 0.001245 | 0.001347 | 0.001188 |
| mp_map_replace.test | RUN | 0.265450 | 2.147233 | 1.010345 | 0.001151 | 0.001330 | 0.001076 |
| mp_map_erase.test | RUN | 0.189824 | 1.580102 | 0.831872 | 0.001238 | 0.001370 | 0.001068 |
| mp_map_update.test | RUN | 0.165829 | 1.007801 | 0.630553 | 0.001107 | 0.001233 | 0.001036 |
| mp_map_update_q.test | RUN | 0.164901 | 1.017484 | 0.637571 | 0.001081 | 0.001297 | 0.001056 |
| mp_map_keys.test | RUN | 0.159913 | 0.911618 | 0.618675 | 0.001116 | 0.001258 | 0.001064 |
| mp_is_map.test | RUN | 0.142728 | 0.549291 | 0.493696 | 0.001087 | 0.001217 | 0.001154 |
| mp_bind.test | RUN | 0.184703 | 1.656477 | 0.744612 | 0.001064 | 0.001376 | 0.001199 |
| mp_bind_q.test | RUN | 0.159344 | 1.019240 | 0.607163 | 0.001128 | 0.001312 | 0.001136 |
| mp_bind_front.test | RUN | 0.158159 | 1.120853 | 0.584875 | 0.001167 | 0.001392 | 0.001008 |
| mp_bind_back.test | RUN | 0.153403 | 1.117893 | 0.577680 | 0.001059 | 0.000851 | 0.001051 |
| mp_lambda.test | RUN | 0.382673 | 3.366646 | 1.562033 | 0.001100 | 0.000878 | 0.001154 |
| mpl.test | RUN | 0.322348 | 0.847228 | 1.249166 | 0.001090 | 0.001223 | 0.001155 |
| mpl_list.test | RUN | 0.172449 | 0.656278 | 0.560225 | 0.001323 | 0.001215 | 0.001124 |
| mpl_tuple.test | RUN | 0.171875 | 0.657783 | 0.572797 | 0.001099 | 0.001099 | 0.001092 |
| version.test | RUN | 0.087557 | 0.231438 | 0.287085 | 0.001231 | 0.001241 | 0.001150 |
| mp11_version.test | RUN | 0.105402 | 0.258499 | 0.344156 | 0.001087 | 0.001244 | 0.001055 |
| list_version.test | RUN | 0.087400 | 0.238503 | 0.300146 | 0.001233 | 0.001288 | 0.001086 |
| algorithm_version.test | RUN | 0.103693 | 0.248602 | 0.315220 | 0.001041 | 0.001176 | 0.001015 |
| integral_version.test | RUN | 0.086170 | 0.230718 | 0.284528 | 0.001367 | 0.001116 | 0.001393 |
| utility_version.test | RUN | 0.090258 | 0.232763 | 0.293879 | 0.001172 | 0.001162 | 0.001087 |
| function_version.test | RUN | 0.091598 | 0.239339 | 0.300713 | 0.001050 | 0.001223 | 0.001176 |
| map_version.test | RUN | 0.103853 | 0.244914 | 0.311408 | 0.001009 | 0.001148 | 0.001083 |
| set_version.test | RUN | 0.090381 | 0.241614 | 0.296226 | 0.001178 | 0.001207 | 0.000987 |
| bind_version.test | RUN | 0.099009 | 0.249502 | 0.314905 | 0.001191 | 0.001268 | 0.001063 |
| integer_sequence_version.test | RUN | 0.085993 | 0.231301 | 0.219862 | 0.000973 | 0.001168 | 0.000821 |
| tuple_version.test | RUN | 0.101638 | 0.251446 | 0.311173 | 0.000845 | 0.000822 | 0.000761 |
| mpl_version.test | RUN | 0.072891 | 0.189796 | 0.319087 | 0.000881 | 0.000926 | 0.000748 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.996× | 0.995×, 0.998× | 0.995× |
| clang | 1.091× | 1.097×, 1.084× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44801983152).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000742s | 0.000704s | 0.000738s | byte equality observed |
| bind_version.test | 10 | 0.000721s | 0.000706s | 0.000731s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000739s | 0.000717s | 0.000738s | byte equality observed |
| function_version.test | 10 | 0.000738s | 0.000706s | 0.000727s | byte equality observed |
| integer_sequence.test | 10 | 0.000737s | 0.000720s | 0.000742s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000748s | 0.000738s | 0.000724s | byte equality observed |
| integral.test | 10 | 0.000729s | 0.000731s | 0.000729s | byte equality observed |
| integral_version.test | 10 | 0.000739s | 0.000711s | 0.000739s | byte equality observed |
| list_version.test | 10 | 0.000736s | 0.000719s | 0.000749s | byte equality observed |
| map_version.test | 10 | 0.000724s | 0.000715s | 0.000725s | byte equality observed |
| mp11_version.test | 10 | 0.000735s | 0.000719s | 0.000753s | byte equality observed |
| mp_all.test | 10 | 0.000736s | 0.000726s | 0.000766s | byte equality observed |
| mp_all_2.test | 10 | 0.000726s | 0.000710s | 0.000773s | byte equality observed |
| mp_all_of.test | 10 | 0.000749s | 0.000714s | 0.000766s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000743s | 0.000752s | 0.000798s | byte equality observed |
| mp_and.test | 10 | 0.000749s | 0.000722s | 0.000823s | byte equality observed |
| mp_any.test | 10 | 0.000746s | 0.000715s | 0.000811s | byte equality observed |
| mp_any_2.test | 10 | 0.000747s | 0.000725s | 0.000828s | byte equality observed |
| mp_any_of.test | 10 | 0.000741s | 0.000732s | 0.000850s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000744s | 0.000721s | 0.000823s | byte equality observed |
| mp_append.test | 10 | 0.000740s | 0.000723s | 0.000839s | byte equality observed |
| mp_append_2.test | 10 | 0.000771s | 0.000738s | 0.000813s | byte equality observed |
| mp_append_3.test | 10 | 0.000359s | 0.000315s | 0.000786s | byte equality observed |
| mp_append_sf.test | 10 | 0.000823s | 0.000717s | 0.000825s | byte equality observed |
| mp_apply_q.test | 10 | 0.000818s | 0.000728s | 0.000773s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.000835s | 0.000739s | 0.000782s | byte equality observed |
| mp_assign.test | 10 | 0.000821s | 0.000719s | 0.000803s | byte equality observed |
| mp_assign_2.test | 10 | 0.000362s | 0.000337s | 0.000803s | byte equality observed |
| mp_at.test | 10 | 0.000790s | 0.000739s | 0.000793s | byte equality observed |
| mp_at_2.test | 10 | 0.000371s | 0.000348s | 0.000803s | byte equality observed |
| mp_at_sf.test | 10 | 0.000809s | 0.000752s | 0.000794s | byte equality observed |
| mp_back.test | 10 | 0.000800s | 0.000731s | 0.000806s | byte equality observed |
| mp_back_2.test | 10 | 0.000365s | 0.000340s | 0.000765s | byte equality observed |
| mp_bind.test | 10 | 0.000832s | 0.000750s | 0.000804s | byte equality observed |
| mp_bind_back.test | 10 | 0.000806s | 0.000771s | 0.000817s | byte equality observed |
| mp_bind_front.test | 10 | 0.000817s | 0.000815s | 0.000793s | byte equality observed |
| mp_bind_q.test | 10 | 0.000826s | 0.000809s | 0.000790s | byte equality observed |
| mp_clear.test | 10 | 0.000808s | 0.000810s | 0.000820s | byte equality observed |
| mp_clear_2.test | 10 | 0.000361s | 0.000356s | 0.000784s | byte equality observed |
| mp_compose.test | 10 | 0.000798s | 0.000832s | 0.000826s | byte equality observed |
| mp_cond.test | 10 | 0.000786s | 0.000819s | 0.000791s | byte equality observed |
| mp_cond_sf.test | 10 | 0.000818s | 0.000827s | 0.000851s | byte equality observed |
| mp_contains.test | 10 | 0.000823s | 0.000817s | 0.000838s | byte equality observed |
| mp_copy_if.test | 10 | 0.000798s | 0.000808s | 0.000806s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.000800s | 0.000810s | 0.000814s | byte equality observed |
| mp_count.test | 10 | 0.000813s | 0.000812s | 0.000826s | byte equality observed |
| mp_count_if.test | 10 | 0.000824s | 0.000814s | 0.000824s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000821s | 0.000846s | 0.000799s | byte equality observed |
| mp_defer.test | 10 | 0.000827s | 0.000816s | 0.000796s | byte equality observed |
| mp_drop.test | 10 | 0.000792s | 0.000806s | 0.000794s | byte equality observed |
| mp_drop_2.test | 10 | 0.000366s | 0.000363s | 0.000801s | byte equality observed |
| mp_empty.test | 10 | 0.000800s | 0.000805s | 0.000782s | byte equality observed |
| mp_empty_2.test | 10 | 0.000365s | 0.000362s | 0.000782s | byte equality observed |
| mp_erase.test | 10 | 0.000823s | 0.000819s | 0.000790s | byte equality observed |
| mp_erase_2.test | 10 | 0.000365s | 0.000359s | 0.000785s | byte equality observed |
| mp_eval_if.test | 10 | 0.000806s | 0.000819s | 0.000822s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.000786s | 0.000824s | 0.000814s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.000810s | 0.000816s | 0.000804s | byte equality observed |
| mp_eval_or.test | 10 | 0.000811s | 0.000829s | 0.000827s | byte equality observed |
| mp_fill.test | 10 | 0.000808s | 0.000820s | 0.000783s | byte equality observed |
| mp_fill_2.test | 10 | 0.000363s | 0.000361s | 0.000797s | byte equality observed |
| mp_filter.test | 10 | 0.000798s | 0.000799s | 0.000794s | byte equality observed |
| mp_find.test | 10 | 0.000810s | 0.000795s | 0.000807s | byte equality observed |
| mp_find_if.test | 10 | 0.000835s | 0.000808s | 0.000816s | byte equality observed |
| mp_find_if_q.test | 10 | 0.000831s | 0.000842s | 0.000815s | byte equality observed |
| mp_flatten.test | 10 | 0.000813s | 0.000821s | 0.000803s | byte equality observed |
| mp_fold.test | 10 | 0.000844s | 0.000819s | 0.000806s | byte equality observed |
| mp_fold_q.test | 10 | 0.000822s | 0.000819s | 0.000787s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.000803s | 0.000802s | 0.000792s | byte equality observed |
| mp_for_each.test | 10 | 0.000835s | 0.000810s | 0.000816s | byte equality observed |
| mp_from_sequence.test | 10 | 0.000844s | 0.000858s | 0.000805s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.000809s | 0.000827s | 0.000811s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.000807s | 0.000842s | 0.000803s | byte equality observed |
| mp_front.test | 10 | 0.000798s | 0.000806s | 0.000790s | byte equality observed |
| mp_front_2.test | 10 | 0.000366s | 0.000358s | 0.000785s | byte equality observed |
| mp_identity.test | 10 | 0.000805s | 0.000808s | 0.000799s | byte equality observed |
| mp_if.test | 10 | 0.000819s | 0.000819s | 0.000803s | byte equality observed |
| mp_if_sf.test | 10 | 0.000812s | 0.000833s | 0.000799s | byte equality observed |
| mp_inherit.test | 10 | 0.000804s | 0.000822s | 0.000833s | byte equality observed |
| mp_insert.test | 10 | 0.000815s | 0.000816s | 0.000815s | byte equality observed |
| mp_insert_2.test | 10 | 0.000360s | 0.000362s | 0.000764s | byte equality observed |
| mp_intersperse.test | 10 | 0.000805s | 0.000812s | 0.000806s | byte equality observed |
| mp_invoke_q.test | 10 | 0.000809s | 0.000817s | 0.000838s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.000820s | 0.000800s | 0.000791s | byte equality observed |
| mp_iota.test | 10 | 0.000800s | 0.000799s | 0.000808s | byte equality observed |
| mp_iota_2.test | 10 | 0.000820s | 0.000821s | 0.000804s | byte equality observed |
| mp_is_list.test | 10 | 0.000835s | 0.000831s | 0.000808s | byte equality observed |
| mp_is_map.test | 10 | 0.000814s | 0.000853s | 0.000790s | byte equality observed |
| mp_is_set.test | 10 | 0.000798s | 0.000812s | 0.000815s | byte equality observed |
| mp_is_value_list.test | 10 | 0.000819s | 0.000810s | 0.000820s | byte equality observed |
| mp_iterate.test | 10 | 0.000799s | 0.000813s | 0.000811s | byte equality observed |
| mp_join.test | 10 | 0.000802s | 0.000830s | 0.000796s | byte equality observed |
| mp_lambda.test | 10 | 0.000835s | 0.000823s | 0.000813s | byte equality observed |
| mp_less.test | 10 | 0.000809s | 0.000831s | 0.000818s | byte equality observed |
| mp_list_c.test | 10 | 0.000826s | 0.000785s | 0.000803s | byte equality observed |
| mp_list_v.test | 10 | 0.000365s | 0.000360s | 0.000802s | byte equality observed |
| mp_map_contains.test | 10 | 0.000808s | 0.000792s | 0.000808s | byte equality observed |
| mp_map_erase.test | 10 | 0.000815s | 0.000804s | 0.000812s | byte equality observed |
| mp_map_find.test | 10 | 0.000824s | 0.000818s | 0.000826s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000814s | 0.000795s | 0.000809s | byte equality observed |
| mp_map_find_3.test | 10 | 0.000819s | 0.000817s | 0.000820s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000799s | 0.000838s | 0.000800s | byte equality observed |
| mp_map_insert.test | 10 | 0.000808s | 0.000808s | 0.000803s | byte equality observed |
| mp_map_keys.test | 10 | 0.000809s | 0.000797s | 0.000810s | byte equality observed |
| mp_map_replace.test | 10 | 0.000810s | 0.000841s | 0.000827s | byte equality observed |
| mp_map_update.test | 10 | 0.000806s | 0.000837s | 0.000808s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000788s | 0.000831s | 0.000822s | byte equality observed |
| mp_max.test | 10 | 0.000787s | 0.000828s | 0.000820s | byte equality observed |
| mp_max_element.test | 10 | 0.000801s | 0.000804s | 0.000825s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000370s | 0.000366s | 0.000809s | byte equality observed |
| mp_max_element_q.test | 10 | 0.000795s | 0.000804s | 0.000802s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000362s | 0.000370s | 0.000768s | byte equality observed |
| mp_min.test | 10 | 0.000828s | 0.000801s | 0.000793s | byte equality observed |
| mp_min_element.test | 10 | 0.000798s | 0.000810s | 0.000813s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000367s | 0.000368s | 0.000819s | byte equality observed |
| mp_min_element_q.test | 10 | 0.000809s | 0.000811s | 0.000795s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000367s | 0.000355s | 0.000772s | byte equality observed |
| mp_none_of.test | 10 | 0.000791s | 0.000813s | 0.000800s | byte equality observed |
| mp_none_of_q.test | 10 | 0.000809s | 0.000806s | 0.000819s | byte equality observed |
| mp_not_fn.test | 10 | 0.000798s | 0.000817s | 0.000824s | byte equality observed |
| mp_nth_element.test | 10 | 0.000809s | 0.000821s | 0.000814s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.000796s | 0.000827s | 0.000825s | byte equality observed |
| mp_or.test | 10 | 0.000807s | 0.000832s | 0.000819s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.000805s | 0.000833s | 0.000797s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.000787s | 0.000835s | 0.000777s | byte equality observed |
| mp_partial_sum.test | 10 | 0.000828s | 0.000834s | 0.000803s | byte equality observed |
| mp_partition.test | 10 | 0.000825s | 0.000815s | 0.000808s | byte equality observed |
| mp_partition_q.test | 10 | 0.000818s | 0.000806s | 0.000794s | byte equality observed |
| mp_plus.test | 10 | 0.000812s | 0.000802s | 0.000802s | byte equality observed |
| mp_pop_back.test | 10 | 0.000810s | 0.000823s | 0.000789s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000366s | 0.000369s | 0.000807s | byte equality observed |
| mp_pop_front.test | 10 | 0.000800s | 0.000840s | 0.000807s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000363s | 0.000363s | 0.000797s | byte equality observed |
| mp_power_set.test | 10 | 0.000814s | 0.000811s | 0.000806s | byte equality observed |
| mp_product.test | 10 | 0.000784s | 0.000844s | 0.000812s | byte equality observed |
| mp_push_back.test | 10 | 0.000801s | 0.000800s | 0.000810s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000359s | 0.000364s | 0.000779s | byte equality observed |
| mp_push_front.test | 10 | 0.000814s | 0.000833s | 0.000806s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000364s | 0.000365s | 0.000782s | byte equality observed |
| mp_quote.test | 10 | 0.000812s | 0.000793s | 0.000789s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000806s | 0.000833s | 0.000797s | byte equality observed |
| mp_remove.test | 10 | 0.000795s | 0.000804s | 0.000825s | byte equality observed |
| mp_remove_if.test | 10 | 0.000809s | 0.000825s | 0.000807s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.000824s | 0.000829s | 0.000811s | byte equality observed |
| mp_rename.test | 10 | 0.000831s | 0.000817s | 0.000833s | byte equality observed |
| mp_rename_2.test | 10 | 0.000368s | 0.000361s | 0.000787s | byte equality observed |
| mp_rename_v.test | 10 | 0.000363s | 0.000364s | 0.000768s | byte equality observed |
| mp_repeat.test | 10 | 0.000812s | 0.000807s | 0.000789s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000364s | 0.000360s | 0.000796s | byte equality observed |
| mp_repeat_3.test | 10 | 0.000790s | 0.000817s | 0.000825s | byte equality observed |
| mp_replace.test | 10 | 0.000803s | 0.000846s | 0.000777s | byte equality observed |
| mp_replace_at.test | 10 | 0.000825s | 0.000813s | 0.000807s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.000812s | 0.000833s | 0.000811s | byte equality observed |
| mp_replace_front.test | 10 | 0.000785s | 0.000811s | 0.000802s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000364s | 0.000355s | 0.000783s | byte equality observed |
| mp_replace_if.test | 10 | 0.000805s | 0.000837s | 0.000807s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.000811s | 0.000846s | 0.000815s | byte equality observed |
| mp_replace_second.test | 10 | 0.000799s | 0.000812s | 0.000795s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000370s | 0.000369s | 0.000800s | byte equality observed |
| mp_replace_third.test | 10 | 0.000798s | 0.000806s | 0.000778s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000366s | 0.000366s | 0.000784s | byte equality observed |
| mp_reverse.test | 10 | 0.000819s | 0.000815s | 0.000807s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.000797s | 0.000826s | 0.000809s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000813s | 0.000814s | 0.000821s | byte equality observed |
| mp_rotate_left.test | 10 | 0.000820s | 0.000806s | 0.000806s | byte equality observed |
| mp_rotate_right.test | 10 | 0.000804s | 0.000811s | 0.000837s | byte equality observed |
| mp_same.test | 10 | 0.000799s | 0.000808s | 0.000840s | byte equality observed |
| mp_second.test | 10 | 0.000805s | 0.000809s | 0.000819s | byte equality observed |
| mp_second_2.test | 10 | 0.000371s | 0.000359s | 0.000824s | byte equality observed |
| mp_set_contains.test | 10 | 0.000805s | 0.000790s | 0.000785s | byte equality observed |
| mp_set_difference.test | 10 | 0.000809s | 0.000792s | 0.000795s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000826s | 0.000797s | 0.000811s | byte equality observed |
| mp_set_intersection.test | 10 | 0.000827s | 0.000815s | 0.000838s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000812s | 0.000821s | 0.000810s | byte equality observed |
| mp_set_push_back.test | 10 | 0.000807s | 0.000838s | 0.000800s | byte equality observed |
| mp_set_push_front.test | 10 | 0.000809s | 0.000842s | 0.000801s | byte equality observed |
| mp_set_union.test | 10 | 0.000810s | 0.000821s | 0.000796s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.000817s | 0.000803s | 0.000816s | byte equality observed |
| mp_similar.test | 10 | 0.000820s | 0.000821s | 0.000800s | byte equality observed |
| mp_size.test | 10 | 0.000807s | 0.000807s | 0.000802s | byte equality observed |
| mp_size_2.test | 10 | 0.000361s | 0.000371s | 0.000795s | byte equality observed |
| mp_slice.test | 10 | 0.000813s | 0.000813s | 0.000807s | byte equality observed |
| mp_slice_2.test | 10 | 0.000370s | 0.000364s | 0.000807s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.000823s | 0.000810s | 0.000808s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.000806s | 0.000806s | 0.000799s | byte equality observed |
| mp_sort.test | 10 | 0.000807s | 0.000795s | 0.000795s | byte equality observed |
| mp_sort_q.test | 10 | 0.000823s | 0.000799s | 0.000810s | byte equality observed |
| mp_split.test | 10 | 0.000836s | 0.000835s | 0.000818s | byte equality observed |
| mp_starts_with.test | 10 | 0.000811s | 0.000814s | 0.000799s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.000826s | 0.000800s | 0.000810s | byte equality observed |
| mp_take.test | 10 | 0.000829s | 0.000791s | 0.000800s | byte equality observed |
| mp_take_2.test | 10 | 0.000355s | 0.000356s | 0.000802s | byte equality observed |
| mp_third.test | 10 | 0.000801s | 0.000810s | 0.000794s | byte equality observed |
| mp_third_2.test | 10 | 0.000364s | 0.000361s | 0.000817s | byte equality observed |
| mp_transform.test | 10 | 0.000820s | 0.000805s | 0.000781s | byte equality observed |
| mp_transform_2.test | 10 | 0.000769s | 0.000777s | 0.000789s | byte equality observed |
| mp_transform_front.test | 10 | 0.000795s | 0.000794s | 0.000780s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000366s | 0.000367s | 0.000811s | byte equality observed |
| mp_transform_if.test | 10 | 0.000811s | 0.000819s | 0.000783s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.000795s | 0.000833s | 0.000810s | byte equality observed |
| mp_transform_q.test | 10 | 0.000814s | 0.000836s | 0.000822s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.000827s | 0.000829s | 0.000783s | byte equality observed |
| mp_transform_second.test | 10 | 0.000821s | 0.000806s | 0.000800s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000359s | 0.000362s | 0.000781s | byte equality observed |
| mp_transform_sf.test | 10 | 0.000795s | 0.000799s | 0.000804s | byte equality observed |
| mp_transform_third.test | 10 | 0.000827s | 0.000811s | 0.000815s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000365s | 0.000364s | 0.000778s | byte equality observed |
| mp_unique.test | 10 | 0.000814s | 0.000797s | 0.000808s | byte equality observed |
| mp_unique_if.test | 10 | 0.000843s | 0.000849s | 0.000811s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.000826s | 0.000845s | 0.000809s | byte equality observed |
| mp_valid.test | 10 | 0.000815s | 0.000811s | 0.000805s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.000821s | 0.000833s | 0.000799s | byte equality observed |
| mp_value.test | 10 | 0.000359s | 0.000361s | 0.000793s | byte equality observed |
| mp_with_index.test | 10 | 0.001109s | 0.001084s | 0.001010s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000356s | 0.000359s | 0.000795s | byte equality observed |
| mpl.test | 10 | 0.000810s | 0.000819s | 0.000795s | byte equality observed |
| mpl_list.test | 10 | 0.000827s | 0.000831s | 0.000823s | byte equality observed |
| mpl_tuple.test | 10 | 0.000819s | 0.000817s | 0.000829s | byte equality observed |
| mpl_version.test | 10 | 0.000801s | 0.000780s | 0.000814s | byte equality observed |
| set_version.test | 10 | 0.000802s | 0.000813s | 0.000818s | byte equality observed |
| tuple_apply.test | 10 | 0.000829s | 0.000820s | 0.000851s | byte equality observed |
| tuple_for_each.test | 10 | 0.000832s | 0.000812s | 0.000802s | byte equality observed |
| tuple_transform.test | 10 | 0.000822s | 0.000831s | 0.000827s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000811s | 0.000820s | 0.000801s | byte equality observed |
| tuple_version.test | 10 | 0.000806s | 0.000796s | 0.000806s | byte equality observed |
| utility_version.test | 10 | 0.000827s | 0.000818s | 0.000791s | byte equality observed |
| version.test | 10 | 0.000803s | 0.000782s | 0.000816s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44801983152).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
