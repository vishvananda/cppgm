# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.028673 | 0.059605 | 0.087516 | — | — | — |
| complex_h.test | COMPILE | 0.117105 | 0.260470 | 0.368371 | — | — | — |
| mp_size.test | RUN | 0.136535 | 0.864784 | 0.485679 | 0.001209 | 0.001211 | 0.001100 |
| mp_size_2.test | RUN | 0.012040 | 0.029879 | 0.039940 | 0.000487 | 0.000538 | 0.001057 |
| mp_empty.test | RUN | 0.131997 | 0.541185 | 0.430481 | 0.001065 | 0.001426 | 0.001065 |
| mp_empty_2.test | RUN | 0.011968 | 0.030592 | 0.043111 | 0.000465 | 0.000486 | 0.001105 |
| mp_assign.test | RUN | 0.150676 | 1.128954 | 0.590791 | 0.001110 | 0.001360 | 0.001045 |
| mp_assign_2.test | RUN | 0.011949 | 0.030385 | 0.040576 | 0.000466 | 0.000527 | 0.001120 |
| mp_clear.test | RUN | 0.123382 | 0.488885 | 0.450461 | 0.001080 | 0.001294 | 0.001090 |
| mp_clear_2.test | RUN | 0.012129 | 0.030432 | 0.043453 | 0.000446 | 0.000465 | 0.001062 |
| mp_front.test | RUN | 0.139210 | 0.769468 | 0.517156 | 0.001062 | 0.001245 | 0.001178 |
| mp_front_2.test | RUN | 0.010921 | 0.029075 | 0.043450 | 0.000427 | 0.000521 | 0.001110 |
| mp_pop_front.test | RUN | 0.138621 | 0.811727 | 0.523020 | 0.001125 | 0.001242 | 0.001176 |
| mp_pop_front_2.test | RUN | 0.010562 | 0.029581 | 0.041121 | 0.000474 | 0.000477 | 0.001273 |
| mp_second.test | RUN | 0.127335 | 0.501314 | 0.497208 | 0.001092 | 0.001466 | 0.001018 |
| mp_second_2.test | RUN | 0.012484 | 0.030449 | 0.043927 | 0.000487 | 0.000508 | 0.001101 |
| mp_third.test | RUN | 0.128774 | 0.460167 | 0.445819 | 0.001105 | 0.001165 | 0.001204 |
| mp_third_2.test | RUN | 0.012141 | 0.030090 | 0.043422 | 0.000484 | 0.000585 | 0.001065 |
| mp_push_front.test | RUN | 0.181732 | 1.745800 | 0.849629 | 0.001185 | 0.001007 | 0.001198 |
| mp_push_front_2.test | RUN | 0.012327 | 0.030294 | 0.040183 | 0.000499 | 0.000450 | 0.001105 |
| mp_push_back.test | RUN | 0.180310 | 1.733516 | 0.850784 | 0.001140 | 0.001272 | 0.001047 |
| mp_push_back_2.test | RUN | 0.011873 | 0.029762 | 0.042749 | 0.000467 | 0.000438 | 0.001276 |
| mp_rename.test | RUN | 0.173320 | 1.593811 | 0.704775 | 0.001069 | 0.001280 | 0.001191 |
| mp_rename_2.test | RUN | 0.012194 | 0.030216 | 0.044148 | 0.000464 | 0.000498 | 0.001190 |
| mp_append.test | RUN | 0.182455 | 1.793289 | 0.790914 | 0.001179 | 0.001314 | 0.001173 |
| mp_append_2.test | RUN | 0.411099 | 4.042298 | 1.071899 | 0.001201 | 0.001283 | 0.001170 |
| mp_append_3.test | RUN | 0.012007 | 0.029844 | 0.044535 | 0.000472 | 0.000520 | 0.001322 |
| mp_append_sf.test | RUN | 0.127764 | 0.423120 | 0.427166 | 0.001036 | 0.001280 | 0.001130 |
| mp_replace_front.test | RUN | 0.159871 | 1.264036 | 0.658410 | 0.001283 | 0.001225 | 0.001349 |
| mp_replace_front_2.test | RUN | 0.012230 | 0.029816 | 0.042137 | 0.000505 | 0.000456 | 0.001257 |
| mp_replace_second.test | RUN | 0.153720 | 0.811290 | 0.578961 | 0.001160 | 0.001289 | 0.001057 |
| mp_replace_second_2.test | RUN | 0.012220 | 0.029679 | 0.044435 | 0.000444 | 0.000502 | 0.001254 |
| mp_replace_third.test | RUN | 0.141446 | 0.668623 | 0.544374 | 0.001132 | 0.001279 | 0.001252 |
| mp_replace_third_2.test | RUN | 0.012238 | 0.031105 | 0.044956 | 0.000463 | 0.000528 | 0.001317 |
| mp_apply_q.test | RUN | 0.167799 | 1.576643 | 0.712074 | 0.001122 | 0.001165 | 0.001074 |
| mp_apply_q_sf.test | RUN | 0.130513 | 0.439996 | 0.436320 | 0.001170 | 0.001316 | 0.001105 |
| mp_is_list.test | RUN | 0.135696 | 0.527901 | 0.449073 | 0.001062 | 0.001306 | 0.001126 |
| mp_list_c.test | RUN | 0.137259 | 0.635412 | 0.509924 | 0.001067 | 0.001231 | 0.001100 |
| mp_transform_front.test | RUN | 0.157277 | 1.268841 | 0.609898 | 0.001006 | 0.001280 | 0.001132 |
| mp_transform_front_2.test | RUN | 0.011995 | 0.029500 | 0.042695 | 0.000466 | 0.000466 | 0.001164 |
| mp_transform_second.test | RUN | 0.151536 | 1.089706 | 0.574350 | 0.001016 | 0.001479 | 0.001019 |
| mp_transform_second_2.test | RUN | 0.011872 | 0.029361 | 0.044316 | 0.000446 | 0.000515 | 0.001045 |
| mp_transform_third.test | RUN | 0.140735 | 0.824327 | 0.491986 | 0.001033 | 0.001299 | 0.001104 |
| mp_transform_third_2.test | RUN | 0.012165 | 0.030122 | 0.041094 | 0.000473 | 0.000459 | 0.000996 |
| mp_list_v.test | RUN | 0.012000 | 0.029497 | 0.040206 | 0.000407 | 0.000449 | 0.001080 |
| mp_rename_v.test | RUN | 0.011868 | 0.029555 | 0.040043 | 0.000454 | 0.000480 | 0.001051 |
| mp_is_value_list.test | RUN | 0.124164 | 0.325231 | 0.405983 | 0.001186 | 0.001314 | 0.001151 |
| mp_transform.test | RUN | 0.329520 | 2.712741 | 1.351605 | 0.001278 | 0.001184 | 0.001153 |
| mp_transform_2.test | RUN | 0.121081 | 0.295561 | 0.387304 | 0.001092 | 0.001200 | 0.001086 |
| mp_transform_q.test | RUN | 0.325915 | 2.590210 | 1.284077 | 0.001170 | 0.001218 | 0.001104 |
| mp_transform_q_2.test | RUN | 0.327147 | 0.802418 | 1.655495 | 0.001264 | 0.001244 | 0.001213 |
| mp_transform_sf.test | RUN | 0.134709 | 0.445707 | 0.457474 | 0.001091 | 0.001193 | 0.001159 |
| mp_transform_if.test | RUN | 0.175606 | 1.278626 | 0.693263 | 0.000990 | 0.001385 | 0.001195 |
| mp_transform_if_q.test | RUN | 0.169713 | 1.276484 | 0.703319 | 0.001151 | 0.001214 | 0.001029 |
| mp_filter.test | RUN | 0.153417 | 0.758305 | 0.515187 | 0.001017 | 0.001370 | 0.001053 |
| mp_fill.test | RUN | 0.144125 | 0.567644 | 0.505395 | 0.001100 | 0.001250 | 0.001155 |
| mp_fill_2.test | RUN | 0.022411 | 0.045513 | 0.069460 | 0.000481 | 0.000461 | 0.001041 |
| mp_count.test | RUN | 0.275557 | 1.354186 | 0.785717 | 0.001122 | 0.001273 | 0.001078 |
| mp_count_if.test | RUN | 0.281902 | 1.374831 | 0.847320 | 0.001086 | 0.001448 | 0.001129 |
| mp_count_if_q.test | RUN | 0.143320 | 0.906926 | 0.494344 | 0.001160 | 0.001141 | 0.000867 |
| mp_contains.test | RUN | 0.131558 | 0.548302 | 0.460566 | 0.000991 | 0.001479 | 0.001046 |
| mp_starts_with.test | RUN | 0.137782 | 0.550074 | 0.472466 | 0.001226 | 0.001303 | 0.001134 |
| mp_starts_with_sf.test | RUN | 0.132990 | 0.465743 | 0.432542 | 0.001095 | 0.001401 | 0.001123 |
| mp_repeat.test | RUN | 0.208164 | 2.311356 | 0.909787 | 0.001099 | 0.001417 | 0.001208 |
| mp_repeat_2.test | RUN | 0.021099 | 0.048942 | 0.069916 | 0.000466 | 0.000520 | 0.001121 |
| mp_repeat_3.test | RUN | 0.172662 | 0.290916 | 0.432251 | 0.001090 | 0.001415 | 0.001320 |
| mp_product.test | RUN | 0.158926 | 1.391715 | 0.640097 | 0.001069 | 0.001346 | 0.001173 |
| mp_drop.test | RUN | 0.173786 | 1.718057 | 0.756458 | 0.001027 | 0.001244 | 0.001211 |
| mp_drop_2.test | RUN | 0.020826 | 0.047845 | 0.071364 | 0.000485 | 0.000538 | 0.001087 |
| mp_iota.test | RUN | 0.166837 | 1.462381 | 0.665141 | 0.001295 | 0.001322 | 0.001272 |
| mp_iota_2.test | RUN | 0.183452 | 1.733479 | 0.769700 | 0.001120 | 0.001272 | 0.001166 |
| mp_at.test | RUN | 0.149045 | 0.743141 | 0.517353 | 0.001122 | 0.001266 | 0.001120 |
| mp_at_2.test | RUN | 0.021532 | 0.045647 | 0.071889 | 0.000471 | 0.000514 | 0.001247 |
| mp_at_sf.test | RUN | 0.140090 | 0.455194 | 0.452173 | 0.001207 | 0.001352 | 0.001174 |
| mp_take.test | RUN | 0.241086 | 2.255886 | 0.899553 | 0.001078 | 0.001269 | 0.001198 |
| mp_take_2.test | RUN | 0.021152 | 0.046845 | 0.071099 | 0.000427 | 0.000509 | 0.001097 |
| mp_slice.test | RUN | 0.279524 | 2.282963 | 1.154424 | 0.001072 | 0.001233 | 0.000995 |
| mp_slice_2.test | RUN | 0.020332 | 0.045986 | 0.073984 | 0.000446 | 0.000461 | 0.001103 |
| mp_replace.test | RUN | 0.169808 | 1.152361 | 0.733347 | 0.001038 | 0.001240 | 0.001238 |
| mp_replace_if.test | RUN | 0.165663 | 1.010935 | 0.675945 | 0.001133 | 0.001182 | 0.001107 |
| mp_replace_if_q.test | RUN | 0.161487 | 1.010402 | 0.669572 | 0.001165 | 0.001407 | 0.001149 |
| mp_copy_if.test | RUN | 0.165472 | 1.422349 | 0.640337 | 0.001058 | 0.001478 | 0.001228 |
| mp_copy_if_q.test | RUN | 0.168404 | 1.431513 | 0.639732 | 0.001033 | 0.001205 | 0.001153 |
| mp_remove.test | RUN | 0.163969 | 0.954189 | 0.660183 | 0.001108 | 0.001320 | 0.001184 |
| mp_remove_if.test | RUN | 0.170771 | 1.505220 | 0.675606 | 0.001136 | 0.001395 | 0.001109 |
| mp_remove_if_q.test | RUN | 0.172098 | 1.499930 | 0.685511 | 0.000994 | 0.001378 | 0.001133 |
| mp_partition.test | RUN | 0.172594 | 1.426569 | 0.733641 | 0.001007 | 0.001147 | 0.001224 |
| mp_partition_q.test | RUN | 0.170288 | 1.422274 | 0.746440 | 0.001218 | 0.001131 | 0.001213 |
| mp_sort.test | RUN | 0.156032 | 1.019727 | 0.637705 | 0.001092 | 0.001212 | 0.001206 |
| mp_sort_q.test | RUN | 0.158221 | 1.018338 | 0.639525 | 0.001069 | 0.001322 | 0.001146 |
| mp_find.test | RUN | 0.153857 | 1.093261 | 0.546401 | 0.001036 | 0.001265 | 0.001172 |
| mp_find_if.test | RUN | 0.148600 | 0.995176 | 0.524492 | 0.001157 | 0.001151 | 0.001091 |
| mp_find_if_q.test | RUN | 0.159843 | 1.113659 | 0.641905 | 0.001057 | 0.001262 | 0.001147 |
| mp_reverse.test | RUN | 0.364855 | 3.011332 | 1.284436 | 0.001161 | 0.001234 | 0.001160 |
| mp_fold.test | RUN | 0.606378 | 2.372743 | 3.241764 | 0.001228 | 0.001209 | 0.001048 |
| mp_fold_q.test | RUN | 0.152060 | 0.996984 | 0.609839 | 0.001153 | 0.001409 | 0.001126 |
| mp_fold_q_sf.test | RUN | 0.132518 | 0.460934 | 0.464202 | 0.001080 | 0.001265 | 0.001171 |
| mp_reverse_fold.test | RUN | 0.282420 | 2.237428 | 0.916222 | 0.001086 | 0.001275 | 0.001091 |
| mp_reverse_fold_q.test | RUN | 0.156195 | 1.211606 | 0.660921 | 0.001340 | 0.001259 | 0.001017 |
| mp_unique.test | RUN | 0.154242 | 1.107057 | 0.636864 | 0.001099 | 0.001301 | 0.001087 |
| mp_unique_if.test | RUN | 0.284955 | 2.343107 | 0.990684 | 0.001037 | 0.001254 | 0.001280 |
| mp_unique_if_q.test | RUN | 0.259127 | 2.265736 | 0.817805 | 0.001077 | 0.001371 | 0.001137 |
| mp_all_of.test | RUN | 0.380584 | 1.220384 | 1.049510 | 0.001119 | 0.001286 | 0.001141 |
| mp_all_of_q.test | RUN | 0.134786 | 0.532725 | 0.473573 | 0.001078 | 0.001378 | 0.001165 |
| mp_any_of.test | RUN | 0.383431 | 1.273555 | 1.026004 | 0.001100 | 0.001399 | 0.001103 |
| mp_any_of_q.test | RUN | 0.134498 | 0.541199 | 0.453303 | 0.001238 | 0.001266 | 0.001170 |
| mp_none_of.test | RUN | 0.377775 | 1.277741 | 1.032056 | 0.001058 | 0.001217 | 0.001169 |
| mp_none_of_q.test | RUN | 0.135236 | 0.515196 | 0.477683 | 0.001263 | 0.001204 | 0.001116 |
| mp_replace_at.test | RUN | 0.169370 | 1.101167 | 0.719063 | 0.001058 | 0.001211 | 0.001116 |
| mp_replace_at_c.test | RUN | 0.164253 | 1.112708 | 0.721441 | 0.001134 | 0.001252 | 0.000991 |
| mp_for_each.test | RUN | 0.159542 | 0.712576 | 0.701439 | 0.001037 | 0.001220 | 0.001119 |
| mp_insert.test | RUN | 0.267876 | 2.254798 | 1.077417 | 0.001056 | 0.001181 | 0.001082 |
| mp_insert_2.test | RUN | 0.020267 | 0.043060 | 0.066752 | 0.000467 | 0.000407 | 0.001120 |
| mp_erase.test | RUN | 0.293812 | 2.427502 | 1.228381 | 0.001037 | 0.001372 | 0.001200 |
| mp_erase_2.test | RUN | 0.020554 | 0.045385 | 0.072827 | 0.000439 | 0.000411 | 0.001101 |
| mp_with_index.test | RUN | 0.381951 | 4.815114 | 2.628223 | 0.001534 | 0.001643 | 0.001348 |
| mp_with_index_cx.test | RUN | 0.002476 | 0.014223 | 0.021544 | 0.000448 | 0.000547 | 0.001089 |
| mp_from_sequence.test | RUN | 0.164924 | 1.268677 | 0.684738 | 0.001047 | 0.001198 | 0.001113 |
| mp_from_sequence_2.test | RUN | 0.175773 | 1.472917 | 0.747361 | 0.001105 | 0.001179 | 0.001106 |
| mp_from_sequence_3.test | RUN | 0.144002 | 0.643380 | 0.528257 | 0.001020 | 0.001266 | 0.001014 |
| mp_min_element.test | RUN | 0.139278 | 0.584330 | 0.473470 | 0.001110 | 0.001268 | 0.001086 |
| mp_min_element_2.test | RUN | 0.020565 | 0.047447 | 0.071718 | 0.000496 | 0.000470 | 0.001095 |
| mp_min_element_q.test | RUN | 0.142307 | 0.587585 | 0.482006 | 0.001029 | 0.001322 | 0.001132 |
| mp_min_element_q_2.test | RUN | 0.020952 | 0.046758 | 0.069033 | 0.000451 | 0.000479 | 0.001213 |
| mp_max_element.test | RUN | 0.137848 | 0.584409 | 0.477445 | 0.001067 | 0.001320 | 0.001270 |
| mp_max_element_2.test | RUN | 0.020150 | 0.045695 | 0.071570 | 0.000477 | 0.000548 | 0.001060 |
| mp_max_element_q.test | RUN | 0.135090 | 0.597311 | 0.491779 | 0.001057 | 0.001218 | 0.001209 |
| mp_max_element_q_2.test | RUN | 0.020881 | 0.045321 | 0.068039 | 0.000482 | 0.000508 | 0.001080 |
| mp_nth_element.test | RUN | 0.155993 | 0.834199 | 0.599017 | 0.001095 | 0.001195 | 0.001023 |
| mp_nth_element_q.test | RUN | 0.149991 | 0.825969 | 0.589985 | 0.001136 | 0.001211 | 0.001008 |
| mp_back.test | RUN | 0.154054 | 0.674958 | 0.562795 | 0.001088 | 0.000852 | 0.000868 |
| mp_back_2.test | RUN | 0.021715 | 0.046296 | 0.073496 | 0.000380 | 0.000521 | 0.001261 |
| mp_pop_back.test | RUN | 0.455106 | 4.679110 | 1.223296 | 0.001117 | 0.001181 | 0.001071 |
| mp_pop_back_2.test | RUN | 0.021297 | 0.045738 | 0.071901 | 0.000447 | 0.000417 | 0.001091 |
| mp_flatten.test | RUN | 0.183522 | 1.629063 | 0.812404 | 0.001139 | 0.001237 | 0.000942 |
| mp_rotate_left.test | RUN | 0.184933 | 1.736204 | 0.798886 | 0.001064 | 0.001222 | 0.001153 |
| mp_rotate_right.test | RUN | 0.182939 | 1.748980 | 0.802509 | 0.001133 | 0.001135 | 0.001218 |
| mp_power_set.test | RUN | 0.183247 | 1.682681 | 0.808471 | 0.001175 | 0.001283 | 0.001118 |
| mp_partial_sum.test | RUN | 0.246467 | 2.284743 | 0.926539 | 0.001100 | 0.001393 | 0.001291 |
| mp_iterate.test | RUN | 0.158935 | 0.658450 | 0.628756 | 0.001089 | 0.001301 | 0.001029 |
| mp_pairwise_fold.test | RUN | 0.182001 | 1.585230 | 0.816494 | 0.001009 | 0.001173 | 0.001321 |
| mp_pairwise_fold_q.test | RUN | 0.136850 | 0.465365 | 0.463247 | 0.001156 | 0.001404 | 0.001220 |
| mp_sliding_fold.test | RUN | 0.370988 | 3.112080 | 1.541499 | 0.001119 | 0.001106 | 0.001108 |
| mp_sliding_fold_q.test | RUN | 0.370181 | 3.126592 | 1.558879 | 0.001162 | 0.001234 | 0.001050 |
| mp_intersperse.test | RUN | 0.166074 | 1.099392 | 0.716483 | 0.001077 | 0.001419 | 0.001266 |
| mp_split.test | RUN | 0.255315 | 2.266917 | 0.991721 | 0.001065 | 0.001317 | 0.001177 |
| mp_join.test | RUN | 0.192083 | 1.915838 | 0.887436 | 0.000958 | 0.001383 | 0.001155 |
| integral.test | RUN | 0.142227 | 0.780061 | 0.524318 | 0.000896 | 0.001284 | 0.001257 |
| mp_value.test | RUN | 0.009479 | 0.025219 | 0.036103 | 0.000494 | 0.000436 | 0.001126 |
| mp_identity.test | RUN | 0.136764 | 0.763595 | 0.496840 | 0.001031 | 0.001216 | 0.001124 |
| mp_inherit.test | RUN | 0.132916 | 0.505902 | 0.472477 | 0.001170 | 0.001241 | 0.001117 |
| mp_if.test | RUN | 0.131403 | 0.624937 | 0.474865 | 0.000983 | 0.001215 | 0.001181 |
| mp_if_sf.test | RUN | 0.124484 | 0.477057 | 0.410663 | 0.001056 | 0.001189 | 0.001073 |
| mp_eval_if.test | RUN | 0.132637 | 0.616717 | 0.468734 | 0.001029 | 0.001256 | 0.001163 |
| mp_eval_if_sf.test | RUN | 0.125367 | 0.437758 | 0.427099 | 0.001039 | 0.001420 | 0.001118 |
| mp_valid.test | RUN | 0.128036 | 0.444860 | 0.429997 | 0.001045 | 0.001169 | 0.001088 |
| mp_defer.test | RUN | 0.138691 | 0.752576 | 0.521575 | 0.001034 | 0.001336 | 0.001198 |
| mp_quote.test | RUN | 0.139094 | 0.756523 | 0.543390 | 0.001037 | 0.001398 | 0.001164 |
| mp_invoke_q.test | RUN | 0.150180 | 1.004651 | 0.600911 | 0.001097 | 0.001304 | 0.001163 |
| mp_invoke_q_sf.test | RUN | 0.127272 | 0.436298 | 0.424651 | 0.001073 | 0.001276 | 0.001055 |
| mp_quote_trait.test | RUN | 0.144950 | 0.843008 | 0.521740 | 0.001135 | 0.001235 | 0.001149 |
| mp_cond.test | RUN | 0.132401 | 0.505597 | 0.458369 | 0.001071 | 0.001294 | 0.001098 |
| mp_cond_sf.test | RUN | 0.130036 | 0.440967 | 0.435512 | 0.001113 | 0.001172 | 0.001229 |
| mp_not_fn.test | RUN | 0.127902 | 0.435213 | 0.421959 | 0.001099 | 0.001266 | 0.001066 |
| mp_eval_if_not.test | RUN | 0.138505 | 0.614563 | 0.480754 | 0.001160 | 0.001202 | 0.001219 |
| mp_eval_or.test | RUN | 0.127511 | 0.327649 | 0.441474 | 0.001124 | 0.001294 | 0.001123 |
| mp_compose.test | RUN | 0.150076 | 1.027261 | 0.589649 | 0.001037 | 0.001217 | 0.001180 |
| mp_valid_and_true.test | RUN | 0.129829 | 0.527484 | 0.461388 | 0.001058 | 0.001253 | 0.001228 |
| mp_compose_sf.test | COMPILE | 0.026090 | 0.060562 | 0.099415 | — | — | — |
| integer_sequence.test | RUN | 0.162879 | 1.033126 | 0.661350 | 0.001059 | 0.001152 | 0.001113 |
| tuple_for_each.test | RUN | 0.127865 | 0.367370 | 0.468242 | 0.001155 | 0.001279 | 0.001085 |
| tuple_for_each_cx.test | COMPILE | 0.024268 | 0.051133 | 0.076067 | — | — | — |
| tuple_apply.test | RUN | 0.137403 | 0.368292 | 0.464698 | 0.001140 | 0.001218 | 0.001035 |
| tuple_apply_cx.test | COMPILE | 0.035447 | 0.072256 | 0.106550 | — | — | — |
| construct_from_tuple.test | RUN | 0.135938 | 0.398243 | 0.465060 | 0.001266 | 0.001152 | 0.001111 |
| construct_from_tuple_cx.test | COMPILE | 0.036662 | 0.072678 | 0.101559 | — | — | — |
| tuple_transform.test | RUN | 0.216996 | 0.798764 | 0.891853 | 0.001334 | 0.001345 | 0.001133 |
| tuple_transform_2.test | RUN | 0.187493 | 0.582112 | 0.793696 | 0.001254 | 0.001141 | 0.001130 |
| tuple_transform_cx.test | COMPILE | 0.033247 | 0.071944 | 0.104746 | — | — | — |
| mp_set_contains.test | RUN | 0.135046 | 0.532621 | 0.459692 | 0.001173 | 0.001144 | 0.001207 |
| mp_set_push_back.test | RUN | 0.183139 | 1.668881 | 0.804529 | 0.001156 | 0.001290 | 0.001130 |
| mp_set_push_front.test | RUN | 0.249697 | 2.009852 | 0.925961 | 0.001115 | 0.001237 | 0.001014 |
| mp_is_set.test | RUN | 0.136527 | 0.534865 | 0.474178 | 0.001184 | 0.001377 | 0.001106 |
| mp_set_union.test | RUN | 0.178404 | 1.427664 | 0.755592 | 0.001118 | 0.001285 | 0.000787 |
| mp_set_union_sf.test | RUN | 0.130198 | 0.423398 | 0.434696 | 0.001082 | 0.001264 | 0.001027 |
| mp_set_difference.test | RUN | 0.159070 | 1.104072 | 0.643532 | 0.001049 | 0.001200 | 0.001113 |
| mp_set_difference_sf.test | RUN | 0.129152 | 0.418482 | 0.424990 | 0.001264 | 0.001270 | 0.001021 |
| mp_set_intersection.test | RUN | 0.156843 | 1.104284 | 0.625375 | 0.001102 | 0.001220 | 0.001235 |
| mp_set_intersection_sf.test | RUN | 0.131575 | 0.431448 | 0.426727 | 0.001098 | 0.001284 | 0.001145 |
| mp_all.test | RUN | 0.135649 | 0.525278 | 0.456940 | 0.001232 | 0.001275 | 0.001127 |
| mp_all_2.test | RUN | 0.389974 | 1.134152 | 1.045531 | 0.001219 | 0.001140 | 0.001201 |
| mp_and.test | RUN | 0.132740 | 0.513330 | 0.452495 | 0.001214 | 0.001368 | 0.001246 |
| mp_any.test | RUN | 0.141229 | 0.537786 | 0.435496 | 0.001077 | 0.001259 | 0.001163 |
| mp_any_2.test | RUN | 0.386320 | 1.129472 | 1.037706 | 0.001212 | 0.001300 | 0.001080 |
| mp_or.test | RUN | 0.139581 | 0.518742 | 0.447486 | 0.001232 | 0.001113 | 0.001178 |
| mp_same.test | RUN | 0.261245 | 0.871989 | 0.723271 | 0.001286 | 0.001286 | 0.001089 |
| mp_plus.test | RUN | 0.146796 | 0.631751 | 0.499221 | 0.001151 | 0.001127 | 0.001050 |
| mp_less.test | RUN | 0.137694 | 0.532361 | 0.438799 | 0.001102 | 0.001163 | 0.000978 |
| mp_min.test | RUN | 0.129981 | 0.473265 | 0.441194 | 0.001125 | 0.001349 | 0.001148 |
| mp_max.test | RUN | 0.135890 | 0.540342 | 0.454013 | 0.001129 | 0.001209 | 0.001077 |
| mp_similar.test | RUN | 0.135753 | 0.524521 | 0.433606 | 0.001030 | 0.001160 | 0.001100 |
| mp_map_find.test | RUN | 0.161184 | 0.972021 | 0.606501 | 0.001187 | 0.001358 | 0.001164 |
| mp_map_find_2.test | RUN | 0.146756 | 0.365021 | 0.514723 | 0.001394 | 0.001183 | 0.001114 |
| mp_map_find_3.test | RUN | 0.144645 | 0.364653 | 0.524756 | 0.001150 | 0.001142 | 0.001121 |
| mp_map_find_4.test | RUN | 0.138966 | 0.342999 | 0.479092 | 0.001065 | 0.001061 | 0.001049 |
| mp_map_contains.test | RUN | 0.144488 | 0.542280 | 0.479400 | 0.001237 | 0.001394 | 0.001204 |
| mp_map_insert.test | RUN | 0.196214 | 1.880543 | 0.881337 | 0.001214 | 0.001254 | 0.001220 |
| mp_map_replace.test | RUN | 0.266769 | 2.121825 | 1.014755 | 0.001155 | 0.001333 | 0.001111 |
| mp_map_erase.test | RUN | 0.188996 | 1.567221 | 0.837583 | 0.001148 | 0.001317 | 0.001148 |
| mp_map_update.test | RUN | 0.166035 | 1.021597 | 0.645743 | 0.001084 | 0.001304 | 0.001203 |
| mp_map_update_q.test | RUN | 0.166168 | 1.016594 | 0.643547 | 0.001304 | 0.001295 | 0.001112 |
| mp_map_keys.test | RUN | 0.157044 | 0.904573 | 0.621644 | 0.001162 | 0.001300 | 0.000997 |
| mp_is_map.test | RUN | 0.141757 | 0.546995 | 0.495911 | 0.001121 | 0.001075 | 0.001264 |
| mp_bind.test | RUN | 0.184138 | 1.644193 | 0.760475 | 0.001148 | 0.001112 | 0.001160 |
| mp_bind_q.test | RUN | 0.157352 | 1.018680 | 0.605626 | 0.001276 | 0.001294 | 0.001128 |
| mp_bind_front.test | RUN | 0.154643 | 1.100072 | 0.584820 | 0.001344 | 0.001310 | 0.000978 |
| mp_bind_back.test | RUN | 0.153491 | 1.098973 | 0.578633 | 0.001272 | 0.001196 | 0.001209 |
| mp_lambda.test | RUN | 0.381363 | 3.298490 | 1.600273 | 0.001184 | 0.000919 | 0.001072 |
| mpl.test | RUN | 0.321503 | 0.842531 | 1.257681 | 0.001070 | 0.001089 | 0.001095 |
| mpl_list.test | RUN | 0.176988 | 0.652707 | 0.564896 | 0.001155 | 0.001274 | 0.001133 |
| mpl_tuple.test | RUN | 0.171626 | 0.646628 | 0.577994 | 0.001042 | 0.001098 | 0.001061 |
| version.test | RUN | 0.087902 | 0.228254 | 0.296414 | 0.001464 | 0.001233 | 0.001130 |
| mp11_version.test | RUN | 0.105421 | 0.256948 | 0.338954 | 0.001147 | 0.001204 | 0.001063 |
| list_version.test | RUN | 0.087977 | 0.232931 | 0.293439 | 0.001170 | 0.001125 | 0.001095 |
| algorithm_version.test | RUN | 0.101978 | 0.246366 | 0.319154 | 0.001047 | 0.001203 | 0.000958 |
| integral_version.test | RUN | 0.089575 | 0.221613 | 0.288137 | 0.001104 | 0.001162 | 0.001157 |
| utility_version.test | RUN | 0.088231 | 0.231790 | 0.289366 | 0.001256 | 0.001142 | 0.001073 |
| function_version.test | RUN | 0.089104 | 0.233912 | 0.293373 | 0.001198 | 0.001230 | 0.001100 |
| map_version.test | RUN | 0.098444 | 0.242950 | 0.317647 | 0.001098 | 0.001308 | 0.001031 |
| set_version.test | RUN | 0.088407 | 0.233338 | 0.299201 | 0.001246 | 0.001142 | 0.001131 |
| bind_version.test | RUN | 0.096723 | 0.247460 | 0.312185 | 0.000848 | 0.001112 | 0.001081 |
| integer_sequence_version.test | RUN | 0.083572 | 0.223952 | 0.287035 | 0.001086 | 0.001094 | 0.000821 |
| tuple_version.test | RUN | 0.097511 | 0.247412 | 0.290927 | 0.000907 | 0.001106 | 0.000851 |
| mpl_version.test | RUN | 0.071901 | 0.175330 | 0.233218 | 0.000910 | 0.000858 | 0.000801 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.006× | 1.010×, 1.001× | 1.002× |
| clang | 1.098× | 1.099×, 1.096× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44780058957).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000730s | 0.000736s | 0.000720s | byte equality observed |
| bind_version.test | 10 | 0.000731s | 0.000733s | 0.000719s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000733s | 0.000744s | 0.000714s | byte equality observed |
| function_version.test | 10 | 0.000728s | 0.000710s | 0.000704s | byte equality observed |
| integer_sequence.test | 10 | 0.000721s | 0.000739s | 0.000707s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000714s | 0.000723s | 0.000707s | byte equality observed |
| integral.test | 10 | 0.000713s | 0.000752s | 0.000707s | byte equality observed |
| integral_version.test | 10 | 0.000718s | 0.000747s | 0.000716s | byte equality observed |
| list_version.test | 10 | 0.000736s | 0.000736s | 0.000734s | byte equality observed |
| map_version.test | 10 | 0.000736s | 0.000744s | 0.000719s | byte equality observed |
| mp11_version.test | 10 | 0.000739s | 0.000729s | 0.000737s | byte equality observed |
| mp_all.test | 10 | 0.000734s | 0.000752s | 0.000774s | byte equality observed |
| mp_all_2.test | 10 | 0.000743s | 0.000746s | 0.000825s | byte equality observed |
| mp_all_of.test | 10 | 0.000731s | 0.000739s | 0.000835s | byte equality observed |
| mp_all_of_q.test | 9 | 0.000734s | 0.000747s | 0.000811s | byte equality observed |
| mp_and.test | 10 | 0.000738s | 0.000745s | 0.000829s | byte equality observed |
| mp_any.test | 10 | 0.000730s | 0.000738s | 0.000806s | byte equality observed |
| mp_any_2.test | 10 | 0.000737s | 0.000727s | 0.000836s | byte equality observed |
| mp_any_of.test | 10 | 0.000744s | 0.000736s | 0.000813s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000728s | 0.000747s | 0.000786s | byte equality observed |
| mp_append.test | 10 | 0.000739s | 0.000728s | 0.000798s | byte equality observed |
| mp_append_2.test | 10 | 0.000744s | 0.000749s | 0.000813s | byte equality observed |
| mp_append_3.test | 10 | 0.000341s | 0.000348s | 0.000781s | byte equality observed |
| mp_append_sf.test | 10 | 0.000741s | 0.000749s | 0.000799s | byte equality observed |
| mp_apply_q.test | 10 | 0.000735s | 0.000738s | 0.000782s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.000778s | 0.000729s | 0.000777s | byte equality observed |
| mp_assign.test | 10 | 0.000810s | 0.000744s | 0.000782s | byte equality observed |
| mp_assign_2.test | 10 | 0.000363s | 0.000338s | 0.000815s | byte equality observed |
| mp_at.test | 10 | 0.000796s | 0.000722s | 0.000817s | byte equality observed |
| mp_at_2.test | 10 | 0.000357s | 0.000348s | 0.000777s | byte equality observed |
| mp_at_sf.test | 10 | 0.000818s | 0.000755s | 0.000791s | byte equality observed |
| mp_back.test | 10 | 0.000784s | 0.000755s | 0.000785s | byte equality observed |
| mp_back_2.test | 10 | 0.000358s | 0.000362s | 0.000783s | byte equality observed |
| mp_bind.test | 10 | 0.000807s | 0.000797s | 0.000777s | byte equality observed |
| mp_bind_back.test | 10 | 0.000799s | 0.000800s | 0.000812s | byte equality observed |
| mp_bind_front.test | 10 | 0.000796s | 0.000805s | 0.000776s | byte equality observed |
| mp_bind_q.test | 10 | 0.000788s | 0.000815s | 0.000808s | byte equality observed |
| mp_clear.test | 10 | 0.000794s | 0.000799s | 0.000820s | byte equality observed |
| mp_clear_2.test | 10 | 0.000363s | 0.000365s | 0.000818s | byte equality observed |
| mp_compose.test | 10 | 0.000824s | 0.000814s | 0.000785s | byte equality observed |
| mp_cond.test | 10 | 0.000821s | 0.000819s | 0.000798s | byte equality observed |
| mp_cond_sf.test | 10 | 0.000811s | 0.000837s | 0.000790s | byte equality observed |
| mp_contains.test | 10 | 0.000800s | 0.000829s | 0.000784s | byte equality observed |
| mp_copy_if.test | 10 | 0.000797s | 0.000807s | 0.000788s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.000804s | 0.000786s | 0.000795s | byte equality observed |
| mp_count.test | 10 | 0.000805s | 0.000804s | 0.000777s | byte equality observed |
| mp_count_if.test | 10 | 0.000815s | 0.000815s | 0.000786s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000818s | 0.000809s | 0.000814s | byte equality observed |
| mp_defer.test | 10 | 0.000808s | 0.000809s | 0.000829s | byte equality observed |
| mp_drop.test | 10 | 0.000808s | 0.000794s | 0.000822s | byte equality observed |
| mp_drop_2.test | 10 | 0.000359s | 0.000372s | 0.000804s | byte equality observed |
| mp_empty.test | 10 | 0.000807s | 0.000810s | 0.000772s | byte equality observed |
| mp_empty_2.test | 10 | 0.000363s | 0.000352s | 0.000783s | byte equality observed |
| mp_erase.test | 10 | 0.000811s | 0.000809s | 0.000811s | byte equality observed |
| mp_erase_2.test | 10 | 0.000357s | 0.000364s | 0.000798s | byte equality observed |
| mp_eval_if.test | 10 | 0.000800s | 0.000822s | 0.000785s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.000812s | 0.000808s | 0.000782s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.000807s | 0.000803s | 0.000823s | byte equality observed |
| mp_eval_or.test | 10 | 0.000812s | 0.000785s | 0.000809s | byte equality observed |
| mp_fill.test | 10 | 0.000780s | 0.000788s | 0.000799s | byte equality observed |
| mp_fill_2.test | 10 | 0.000361s | 0.000358s | 0.000796s | byte equality observed |
| mp_filter.test | 10 | 0.000797s | 0.000827s | 0.000778s | byte equality observed |
| mp_find.test | 10 | 0.000799s | 0.000809s | 0.000822s | byte equality observed |
| mp_find_if.test | 10 | 0.000779s | 0.000805s | 0.000817s | byte equality observed |
| mp_find_if_q.test | 10 | 0.000786s | 0.000795s | 0.000807s | byte equality observed |
| mp_flatten.test | 10 | 0.000792s | 0.000804s | 0.000798s | byte equality observed |
| mp_fold.test | 10 | 0.000826s | 0.000796s | 0.000822s | byte equality observed |
| mp_fold_q.test | 10 | 0.000796s | 0.000806s | 0.000828s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.000821s | 0.000812s | 0.000799s | byte equality observed |
| mp_for_each.test | 10 | 0.000800s | 0.000806s | 0.000785s | byte equality observed |
| mp_from_sequence.test | 10 | 0.000809s | 0.000813s | 0.000802s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.000794s | 0.000824s | 0.000823s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.000801s | 0.000817s | 0.000807s | byte equality observed |
| mp_front.test | 10 | 0.000800s | 0.000818s | 0.000793s | byte equality observed |
| mp_front_2.test | 10 | 0.000355s | 0.000362s | 0.000782s | byte equality observed |
| mp_identity.test | 10 | 0.000789s | 0.000850s | 0.000812s | byte equality observed |
| mp_if.test | 10 | 0.000780s | 0.000818s | 0.000827s | byte equality observed |
| mp_if_sf.test | 10 | 0.000822s | 0.000823s | 0.000841s | byte equality observed |
| mp_inherit.test | 10 | 0.000801s | 0.000827s | 0.000804s | byte equality observed |
| mp_insert.test | 10 | 0.000818s | 0.000818s | 0.000781s | byte equality observed |
| mp_insert_2.test | 10 | 0.000354s | 0.000370s | 0.000775s | byte equality observed |
| mp_intersperse.test | 10 | 0.000791s | 0.000801s | 0.000809s | byte equality observed |
| mp_invoke_q.test | 10 | 0.000782s | 0.000819s | 0.000801s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.000791s | 0.000816s | 0.000816s | byte equality observed |
| mp_iota.test | 10 | 0.000802s | 0.000812s | 0.000820s | byte equality observed |
| mp_iota_2.test | 10 | 0.000803s | 0.000799s | 0.000790s | byte equality observed |
| mp_is_list.test | 10 | 0.000819s | 0.000807s | 0.000794s | byte equality observed |
| mp_is_map.test | 10 | 0.000819s | 0.000824s | 0.000765s | byte equality observed |
| mp_is_set.test | 10 | 0.000809s | 0.000800s | 0.000825s | byte equality observed |
| mp_is_value_list.test | 10 | 0.000798s | 0.000778s | 0.000810s | byte equality observed |
| mp_iterate.test | 10 | 0.000793s | 0.000807s | 0.000789s | byte equality observed |
| mp_join.test | 10 | 0.000820s | 0.000792s | 0.000804s | byte equality observed |
| mp_lambda.test | 10 | 0.000820s | 0.000831s | 0.000807s | byte equality observed |
| mp_less.test | 10 | 0.000801s | 0.000812s | 0.000806s | byte equality observed |
| mp_list_c.test | 10 | 0.000786s | 0.000802s | 0.000795s | byte equality observed |
| mp_list_v.test | 10 | 0.000358s | 0.000360s | 0.000800s | byte equality observed |
| mp_map_contains.test | 8 | 0.000784s | 0.000789s | 0.000790s | byte equality observed |
| mp_map_erase.test | 10 | 0.000796s | 0.000794s | 0.000807s | byte equality observed |
| mp_map_find.test | 10 | 0.000813s | 0.000816s | 0.000800s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000789s | 0.000782s | 0.000781s | byte equality observed |
| mp_map_find_3.test | 10 | 0.000793s | 0.000810s | 0.000808s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000796s | 0.000829s | 0.000835s | byte equality observed |
| mp_map_insert.test | 10 | 0.000800s | 0.000823s | 0.000800s | byte equality observed |
| mp_map_keys.test | 10 | 0.000789s | 0.000821s | 0.000825s | byte equality observed |
| mp_map_replace.test | 10 | 0.000824s | 0.000780s | 0.000821s | byte equality observed |
| mp_map_update.test | 10 | 0.000812s | 0.000821s | 0.000797s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000795s | 0.000802s | 0.000789s | byte equality observed |
| mp_max.test | 10 | 0.000800s | 0.000798s | 0.000791s | byte equality observed |
| mp_max_element.test | 10 | 0.000788s | 0.000816s | 0.000771s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000361s | 0.000365s | 0.000780s | byte equality observed |
| mp_max_element_q.test | 10 | 0.000794s | 0.000803s | 0.000799s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000366s | 0.000366s | 0.000766s | byte equality observed |
| mp_min.test | 10 | 0.000790s | 0.000828s | 0.000774s | byte equality observed |
| mp_min_element.test | 10 | 0.000794s | 0.000806s | 0.000797s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000364s | 0.000357s | 0.000753s | byte equality observed |
| mp_min_element_q.test | 10 | 0.000796s | 0.000797s | 0.000801s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000357s | 0.000362s | 0.000773s | byte equality observed |
| mp_none_of.test | 10 | 0.000804s | 0.000813s | 0.000800s | byte equality observed |
| mp_none_of_q.test | 10 | 0.000797s | 0.000829s | 0.000800s | byte equality observed |
| mp_not_fn.test | 10 | 0.000789s | 0.000821s | 0.000801s | byte equality observed |
| mp_nth_element.test | 10 | 0.000796s | 0.000837s | 0.000801s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.000822s | 0.000837s | 0.000801s | byte equality observed |
| mp_or.test | 10 | 0.000819s | 0.000814s | 0.000827s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.000828s | 0.000799s | 0.000800s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.000816s | 0.000813s | 0.000803s | byte equality observed |
| mp_partial_sum.test | 10 | 0.000829s | 0.000811s | 0.000801s | byte equality observed |
| mp_partition.test | 10 | 0.000826s | 0.000829s | 0.000831s | byte equality observed |
| mp_partition_q.test | 10 | 0.000787s | 0.000813s | 0.000792s | byte equality observed |
| mp_plus.test | 10 | 0.000778s | 0.000807s | 0.000799s | byte equality observed |
| mp_pop_back.test | 10 | 0.000804s | 0.000811s | 0.000785s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000356s | 0.000363s | 0.000795s | byte equality observed |
| mp_pop_front.test | 10 | 0.000803s | 0.000798s | 0.000785s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000356s | 0.000355s | 0.000775s | byte equality observed |
| mp_power_set.test | 10 | 0.000791s | 0.000807s | 0.000787s | byte equality observed |
| mp_product.test | 10 | 0.000777s | 0.000807s | 0.000787s | byte equality observed |
| mp_push_back.test | 10 | 0.000791s | 0.000803s | 0.000785s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000369s | 0.000360s | 0.000791s | byte equality observed |
| mp_push_front.test | 10 | 0.000786s | 0.000815s | 0.000784s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000352s | 0.000354s | 0.000814s | byte equality observed |
| mp_quote.test | 10 | 0.000793s | 0.000829s | 0.000837s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000811s | 0.000771s | 0.000815s | byte equality observed |
| mp_remove.test | 10 | 0.000793s | 0.000815s | 0.000819s | byte equality observed |
| mp_remove_if.test | 10 | 0.000810s | 0.000827s | 0.000808s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.000789s | 0.000819s | 0.000785s | byte equality observed |
| mp_rename.test | 10 | 0.000802s | 0.000826s | 0.000809s | byte equality observed |
| mp_rename_2.test | 10 | 0.000358s | 0.000363s | 0.000768s | byte equality observed |
| mp_rename_v.test | 10 | 0.000360s | 0.000355s | 0.000767s | byte equality observed |
| mp_repeat.test | 10 | 0.000797s | 0.000803s | 0.000813s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000358s | 0.000371s | 0.000791s | byte equality observed |
| mp_repeat_3.test | 10 | 0.000800s | 0.000815s | 0.000794s | byte equality observed |
| mp_replace.test | 10 | 0.000797s | 0.000820s | 0.000820s | byte equality observed |
| mp_replace_at.test | 10 | 0.000787s | 0.000800s | 0.000796s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.000798s | 0.000815s | 0.000808s | byte equality observed |
| mp_replace_front.test | 10 | 0.000796s | 0.000809s | 0.000793s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000361s | 0.000360s | 0.000765s | byte equality observed |
| mp_replace_if.test | 10 | 0.000793s | 0.000788s | 0.000799s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.000805s | 0.000808s | 0.000816s | byte equality observed |
| mp_replace_second.test | 10 | 0.000794s | 0.000798s | 0.000796s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000369s | 0.000359s | 0.000783s | byte equality observed |
| mp_replace_third.test | 10 | 0.000798s | 0.000793s | 0.000770s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000354s | 0.000358s | 0.000761s | byte equality observed |
| mp_reverse.test | 10 | 0.000823s | 0.000839s | 0.000789s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.000826s | 0.000795s | 0.000777s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000807s | 0.000801s | 0.000802s | byte equality observed |
| mp_rotate_left.test | 10 | 0.000786s | 0.000826s | 0.000817s | byte equality observed |
| mp_rotate_right.test | 10 | 0.000794s | 0.000789s | 0.000781s | byte equality observed |
| mp_same.test | 10 | 0.000792s | 0.000794s | 0.000806s | byte equality observed |
| mp_second.test | 10 | 0.000794s | 0.000806s | 0.000801s | byte equality observed |
| mp_second_2.test | 10 | 0.000366s | 0.000359s | 0.000806s | byte equality observed |
| mp_set_contains.test | 10 | 0.000794s | 0.000787s | 0.000788s | byte equality observed |
| mp_set_difference.test | 10 | 0.000796s | 0.000784s | 0.000785s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000793s | 0.000811s | 0.000783s | byte equality observed |
| mp_set_intersection.test | 10 | 0.000809s | 0.000843s | 0.000822s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000796s | 0.000858s | 0.000795s | byte equality observed |
| mp_set_push_back.test | 10 | 0.000796s | 0.000843s | 0.000819s | byte equality observed |
| mp_set_push_front.test | 10 | 0.000816s | 0.000832s | 0.000792s | byte equality observed |
| mp_set_union.test | 10 | 0.000816s | 0.000815s | 0.000782s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.000800s | 0.000820s | 0.000785s | byte equality observed |
| mp_similar.test | 10 | 0.000802s | 0.000799s | 0.000800s | byte equality observed |
| mp_size.test | 10 | 0.000799s | 0.000817s | 0.000771s | byte equality observed |
| mp_size_2.test | 10 | 0.000355s | 0.000358s | 0.000770s | byte equality observed |
| mp_slice.test | 10 | 0.000804s | 0.000807s | 0.000773s | byte equality observed |
| mp_slice_2.test | 10 | 0.000361s | 0.000365s | 0.000775s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.000805s | 0.000826s | 0.000801s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.000799s | 0.000820s | 0.000815s | byte equality observed |
| mp_sort.test | 10 | 0.000795s | 0.000810s | 0.000788s | byte equality observed |
| mp_sort_q.test | 10 | 0.000800s | 0.000810s | 0.000789s | byte equality observed |
| mp_split.test | 10 | 0.000810s | 0.000793s | 0.000789s | byte equality observed |
| mp_starts_with.test | 10 | 0.000808s | 0.000823s | 0.000794s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.000803s | 0.000831s | 0.000799s | byte equality observed |
| mp_take.test | 10 | 0.000802s | 0.000796s | 0.000795s | byte equality observed |
| mp_take_2.test | 10 | 0.000362s | 0.000361s | 0.000794s | byte equality observed |
| mp_third.test | 10 | 0.000780s | 0.000794s | 0.000780s | byte equality observed |
| mp_third_2.test | 10 | 0.000361s | 0.000366s | 0.000774s | byte equality observed |
| mp_transform.test | 10 | 0.000800s | 0.000829s | 0.000802s | byte equality observed |
| mp_transform_2.test | 10 | 0.000769s | 0.000799s | 0.000785s | byte equality observed |
| mp_transform_front.test | 10 | 0.000785s | 0.000792s | 0.000790s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000359s | 0.000360s | 0.000773s | byte equality observed |
| mp_transform_if.test | 10 | 0.000801s | 0.000795s | 0.000774s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.000820s | 0.000795s | 0.000814s | byte equality observed |
| mp_transform_q.test | 10 | 0.000809s | 0.000803s | 0.000803s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.000796s | 0.000777s | 0.000804s | byte equality observed |
| mp_transform_second.test | 10 | 0.000792s | 0.000811s | 0.000798s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000354s | 0.000358s | 0.000813s | byte equality observed |
| mp_transform_sf.test | 10 | 0.000807s | 0.000815s | 0.000799s | byte equality observed |
| mp_transform_third.test | 10 | 0.000805s | 0.000811s | 0.000790s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000362s | 0.000361s | 0.000771s | byte equality observed |
| mp_unique.test | 10 | 0.000795s | 0.000790s | 0.000830s | byte equality observed |
| mp_unique_if.test | 10 | 0.000806s | 0.000816s | 0.000827s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.000815s | 0.000815s | 0.000791s | byte equality observed |
| mp_valid.test | 10 | 0.000797s | 0.000797s | 0.000802s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.000791s | 0.000800s | 0.000794s | byte equality observed |
| mp_value.test | 10 | 0.000356s | 0.000353s | 0.000784s | byte equality observed |
| mp_with_index.test | 10 | 0.001097s | 0.001054s | 0.001032s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000359s | 0.000355s | 0.000779s | byte equality observed |
| mpl.test | 10 | 0.000810s | 0.000798s | 0.000790s | byte equality observed |
| mpl_list.test | 10 | 0.000777s | 0.000807s | 0.000808s | byte equality observed |
| mpl_tuple.test | 10 | 0.000787s | 0.000799s | 0.000802s | byte equality observed |
| mpl_version.test | 10 | 0.000793s | 0.000788s | 0.000809s | byte equality observed |
| set_version.test | 10 | 0.000801s | 0.000786s | 0.000795s | byte equality observed |
| tuple_apply.test | 10 | 0.000813s | 0.000801s | 0.000810s | byte equality observed |
| tuple_for_each.test | 10 | 0.000803s | 0.000776s | 0.000801s | byte equality observed |
| tuple_transform.test | 10 | 0.000821s | 0.000809s | 0.000791s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000806s | 0.000793s | 0.000794s | byte equality observed |
| tuple_version.test | 10 | 0.000794s | 0.000828s | 0.000793s | byte equality observed |
| utility_version.test | 10 | 0.000804s | 0.000818s | 0.000809s | byte equality observed |
| version.test | 10 | 0.000802s | 0.000830s | 0.000782s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44780058957).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
