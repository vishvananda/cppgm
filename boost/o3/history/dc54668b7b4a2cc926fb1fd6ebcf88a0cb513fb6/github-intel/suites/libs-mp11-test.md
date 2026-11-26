# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.029496 | 0.058630 | 0.090766 | — | — | — |
| complex_h.test | COMPILE | 0.113245 | 0.246177 | 0.359016 | — | — | — |
| mp_size.test | RUN | 0.138647 | 0.855786 | 0.471681 | 0.000863 | 0.001209 | 0.001488 |
| mp_size_2.test | RUN | 0.012514 | 0.029247 | 0.041827 | 0.000471 | 0.000508 | 0.001147 |
| mp_empty.test | RUN | 0.129910 | 0.534668 | 0.455623 | 0.000974 | 0.001281 | 0.001109 |
| mp_empty_2.test | RUN | 0.012708 | 0.029339 | 0.044205 | 0.000468 | 0.000495 | 0.001094 |
| mp_assign.test | RUN | 0.156260 | 1.114192 | 0.612154 | 0.001298 | 0.001292 | 0.000994 |
| mp_assign_2.test | RUN | 0.012090 | 0.030495 | 0.042011 | 0.000544 | 0.000498 | 0.001099 |
| mp_clear.test | RUN | 0.138185 | 0.481424 | 0.454024 | 0.001393 | 0.001334 | 0.001320 |
| mp_clear_2.test | RUN | 0.013676 | 0.029139 | 0.044594 | 0.000524 | 0.000426 | 0.001154 |
| mp_front.test | RUN | 0.147148 | 0.764562 | 0.526237 | 0.001207 | 0.001385 | 0.001166 |
| mp_front_2.test | RUN | 0.014398 | 0.029019 | 0.044716 | 0.000431 | 0.000532 | 0.001192 |
| mp_pop_front.test | RUN | 0.150361 | 0.807522 | 0.528101 | 0.001166 | 0.001176 | 0.001448 |
| mp_pop_front_2.test | RUN | 0.012105 | 0.029777 | 0.043629 | 0.000453 | 0.000545 | 0.001317 |
| mp_second.test | RUN | 0.138902 | 0.500582 | 0.492694 | 0.001201 | 0.001361 | 0.001141 |
| mp_second_2.test | RUN | 0.012610 | 0.030082 | 0.043870 | 0.000537 | 0.000484 | 0.001168 |
| mp_third.test | RUN | 0.137069 | 0.471016 | 0.450785 | 0.001239 | 0.001296 | 0.001165 |
| mp_third_2.test | RUN | 0.013438 | 0.029788 | 0.043909 | 0.000521 | 0.000538 | 0.001104 |
| mp_push_front.test | RUN | 0.188403 | 1.727796 | 0.854787 | 0.001338 | 0.001354 | 0.001139 |
| mp_push_front_2.test | RUN | 0.013810 | 0.029120 | 0.041636 | 0.000441 | 0.000504 | 0.001246 |
| mp_push_back.test | RUN | 0.191859 | 1.721879 | 0.834320 | 0.001329 | 0.001360 | 0.000830 |
| mp_push_back_2.test | RUN | 0.012291 | 0.030311 | 0.044518 | 0.000515 | 0.000497 | 0.001302 |
| mp_rename.test | RUN | 0.174733 | 1.580660 | 0.730252 | 0.001284 | 0.001220 | 0.001148 |
| mp_rename_2.test | RUN | 0.014067 | 0.029931 | 0.045621 | 0.000445 | 0.000522 | 0.001248 |
| mp_append.test | RUN | 0.181032 | 1.802571 | 0.784721 | 0.001262 | 0.001377 | 0.001264 |
| mp_append_2.test | RUN | 0.418546 | 4.050100 | 1.083064 | 0.001161 | 0.001394 | 0.001075 |
| mp_append_3.test | RUN | 0.012816 | 0.030184 | 0.044324 | 0.000532 | 0.000541 | 0.001270 |
| mp_append_sf.test | RUN | 0.138128 | 0.426732 | 0.432526 | 0.001420 | 0.001317 | 0.001153 |
| mp_replace_front.test | RUN | 0.171296 | 1.282728 | 0.632442 | 0.001510 | 0.001273 | 0.001295 |
| mp_replace_front_2.test | RUN | 0.013075 | 0.030161 | 0.045514 | 0.000480 | 0.000481 | 0.001197 |
| mp_replace_second.test | RUN | 0.165591 | 0.806272 | 0.592931 | 0.001294 | 0.001287 | 0.001311 |
| mp_replace_second_2.test | RUN | 0.014566 | 0.030118 | 0.044701 | 0.000404 | 0.000504 | 0.001208 |
| mp_replace_third.test | RUN | 0.155083 | 0.669518 | 0.536958 | 0.001323 | 0.001128 | 0.001398 |
| mp_replace_third_2.test | RUN | 0.013056 | 0.028511 | 0.043381 | 0.000480 | 0.000476 | 0.001219 |
| mp_apply_q.test | RUN | 0.180250 | 1.577415 | 0.716298 | 0.001042 | 0.001339 | 0.001187 |
| mp_apply_q_sf.test | RUN | 0.138670 | 0.447898 | 0.440699 | 0.001150 | 0.001223 | 0.001053 |
| mp_is_list.test | RUN | 0.139141 | 0.527457 | 0.449383 | 0.001130 | 0.001363 | 0.001193 |
| mp_list_c.test | RUN | 0.132231 | 0.641247 | 0.516753 | 0.001118 | 0.001348 | 0.001241 |
| mp_transform_front.test | RUN | 0.153667 | 1.283143 | 0.616845 | 0.001136 | 0.001296 | 0.001306 |
| mp_transform_front_2.test | RUN | 0.011763 | 0.030121 | 0.044717 | 0.000451 | 0.000496 | 0.001257 |
| mp_transform_second.test | RUN | 0.147694 | 1.105135 | 0.579159 | 0.001151 | 0.001199 | 0.001210 |
| mp_transform_second_2.test | RUN | 0.012605 | 0.029942 | 0.044320 | 0.000483 | 0.000533 | 0.001216 |
| mp_transform_third.test | RUN | 0.138983 | 0.826904 | 0.517329 | 0.001239 | 0.001412 | 0.001292 |
| mp_transform_third_2.test | RUN | 0.012686 | 0.030732 | 0.042511 | 0.000493 | 0.000428 | 0.001264 |
| mp_list_v.test | RUN | 0.013220 | 0.030270 | 0.042203 | 0.000550 | 0.000486 | 0.001121 |
| mp_rename_v.test | RUN | 0.012903 | 0.029960 | 0.044557 | 0.000504 | 0.000510 | 0.001124 |
| mp_is_value_list.test | RUN | 0.134131 | 0.323164 | 0.420003 | 0.001684 | 0.001144 | 0.001198 |
| mp_transform.test | RUN | 0.340906 | 2.725151 | 1.355470 | 0.001578 | 0.001229 | 0.001386 |
| mp_transform_2.test | RUN | 0.126241 | 0.296677 | 0.392081 | 0.001353 | 0.001330 | 0.001199 |
| mp_transform_q.test | RUN | 0.332849 | 2.582388 | 1.306045 | 0.001263 | 0.001293 | 0.001262 |
| mp_transform_q_2.test | RUN | 0.337651 | 0.809559 | 1.682907 | 0.001268 | 0.001235 | 0.001194 |
| mp_transform_sf.test | RUN | 0.141778 | 0.445876 | 0.465172 | 0.001321 | 0.001265 | 0.001250 |
| mp_transform_if.test | RUN | 0.178479 | 1.278797 | 0.698921 | 0.001400 | 0.001418 | 0.001253 |
| mp_transform_if_q.test | RUN | 0.176699 | 1.283132 | 0.708608 | 0.001223 | 0.001217 | 0.001139 |
| mp_filter.test | RUN | 0.158267 | 0.743209 | 0.525320 | 0.001250 | 0.001246 | 0.001253 |
| mp_fill.test | RUN | 0.152013 | 0.559908 | 0.506589 | 0.001363 | 0.001263 | 0.001240 |
| mp_fill_2.test | RUN | 0.022279 | 0.045253 | 0.073298 | 0.000617 | 0.000474 | 0.001185 |
| mp_count.test | RUN | 0.298614 | 1.359614 | 0.786279 | 0.001346 | 0.001277 | 0.001210 |
| mp_count_if.test | RUN | 0.295409 | 1.374400 | 0.854989 | 0.001400 | 0.001406 | 0.001221 |
| mp_count_if_q.test | RUN | 0.152631 | 0.905391 | 0.497622 | 0.001320 | 0.001270 | 0.001236 |
| mp_contains.test | RUN | 0.140931 | 0.543785 | 0.470803 | 0.001259 | 0.001196 | 0.001160 |
| mp_starts_with.test | RUN | 0.143253 | 0.538298 | 0.475747 | 0.001392 | 0.001359 | 0.001295 |
| mp_starts_with_sf.test | RUN | 0.140986 | 0.458876 | 0.452498 | 0.001315 | 0.001198 | 0.001177 |
| mp_repeat.test | RUN | 0.217982 | 2.266842 | 0.919423 | 0.001372 | 0.001312 | 0.001209 |
| mp_repeat_2.test | RUN | 0.022152 | 0.047634 | 0.073599 | 0.000668 | 0.000497 | 0.001242 |
| mp_repeat_3.test | RUN | 0.185001 | 0.289248 | 0.447174 | 0.001016 | 0.001300 | 0.001203 |
| mp_product.test | RUN | 0.171195 | 1.362108 | 0.673983 | 0.001205 | 0.001186 | 0.001163 |
| mp_drop.test | RUN | 0.179567 | 1.720074 | 0.739822 | 0.001090 | 0.001226 | 0.001182 |
| mp_drop_2.test | RUN | 0.021453 | 0.046275 | 0.073692 | 0.000481 | 0.000508 | 0.001182 |
| mp_iota.test | RUN | 0.177492 | 1.427524 | 0.670392 | 0.001492 | 0.001146 | 0.001225 |
| mp_iota_2.test | RUN | 0.189778 | 1.734793 | 0.753930 | 0.001266 | 0.001243 | 0.001346 |
| mp_at.test | RUN | 0.150767 | 0.744912 | 0.541223 | 0.001037 | 0.001207 | 0.001212 |
| mp_at_2.test | RUN | 0.022658 | 0.046731 | 0.073426 | 0.000589 | 0.000476 | 0.001307 |
| mp_at_sf.test | RUN | 0.143246 | 0.452250 | 0.460666 | 0.001252 | 0.001340 | 0.001167 |
| mp_take.test | RUN | 0.248861 | 2.250455 | 0.913883 | 0.001401 | 0.001275 | 0.001247 |
| mp_take_2.test | RUN | 0.020845 | 0.045947 | 0.070014 | 0.000514 | 0.000364 | 0.001164 |
| mp_slice.test | RUN | 0.292551 | 2.276916 | 1.158960 | 0.001260 | 0.001269 | 0.001137 |
| mp_slice_2.test | RUN | 0.021952 | 0.044794 | 0.072451 | 0.000602 | 0.000525 | 0.001313 |
| mp_replace.test | RUN | 0.185344 | 1.150588 | 0.736983 | 0.001237 | 0.001196 | 0.001240 |
| mp_replace_if.test | RUN | 0.176998 | 1.012847 | 0.682230 | 0.001245 | 0.001288 | 0.001210 |
| mp_replace_if_q.test | RUN | 0.171333 | 1.004076 | 0.684141 | 0.001131 | 0.001207 | 0.001240 |
| mp_copy_if.test | RUN | 0.172916 | 1.432361 | 0.649661 | 0.001095 | 0.001270 | 0.001304 |
| mp_copy_if_q.test | RUN | 0.173723 | 1.427889 | 0.649580 | 0.001166 | 0.001339 | 0.001204 |
| mp_remove.test | RUN | 0.166843 | 0.948806 | 0.666976 | 0.001325 | 0.001232 | 0.001276 |
| mp_remove_if.test | RUN | 0.179326 | 1.510667 | 0.687457 | 0.001214 | 0.001260 | 0.001332 |
| mp_remove_if_q.test | RUN | 0.177651 | 1.509276 | 0.689280 | 0.001161 | 0.001280 | 0.001365 |
| mp_partition.test | RUN | 0.169126 | 1.417354 | 0.733604 | 0.001293 | 0.001367 | 0.001200 |
| mp_partition_q.test | RUN | 0.180974 | 1.410381 | 0.746612 | 0.001455 | 0.001150 | 0.001305 |
| mp_sort.test | RUN | 0.170174 | 1.021385 | 0.645959 | 0.001321 | 0.001318 | 0.001268 |
| mp_sort_q.test | RUN | 0.162878 | 1.002323 | 0.646081 | 0.001337 | 0.001323 | 0.001204 |
| mp_find.test | RUN | 0.168815 | 1.088058 | 0.557764 | 0.001404 | 0.001307 | 0.001053 |
| mp_find_if.test | RUN | 0.158374 | 0.995703 | 0.534490 | 0.001506 | 0.001322 | 0.001184 |
| mp_find_if_q.test | RUN | 0.171459 | 1.114668 | 0.649105 | 0.001433 | 0.001196 | 0.001252 |
| mp_reverse.test | RUN | 0.346898 | 2.976920 | 1.287145 | 0.001222 | 0.001334 | 0.001254 |
| mp_fold.test | RUN | 0.635264 | 2.314229 | 3.275487 | 0.001294 | 0.001259 | 0.001188 |
| mp_fold_q.test | RUN | 0.157503 | 1.004132 | 0.611568 | 0.001355 | 0.001264 | 0.001270 |
| mp_fold_q_sf.test | RUN | 0.141305 | 0.452785 | 0.477431 | 0.001167 | 0.001204 | 0.001141 |
| mp_reverse_fold.test | RUN | 0.290785 | 2.231417 | 0.903210 | 0.001125 | 0.001303 | 0.001248 |
| mp_reverse_fold_q.test | RUN | 0.162526 | 1.210196 | 0.657364 | 0.001319 | 0.001288 | 0.001117 |
| mp_unique.test | RUN | 0.160708 | 1.096828 | 0.636121 | 0.001286 | 0.001237 | 0.001201 |
| mp_unique_if.test | RUN | 0.312674 | 2.321784 | 1.029604 | 0.001208 | 0.001278 | 0.001270 |
| mp_unique_if_q.test | RUN | 0.259153 | 2.300640 | 0.812448 | 0.001424 | 0.001269 | 0.001236 |
| mp_all_of.test | RUN | 0.403804 | 1.199287 | 1.067297 | 0.001316 | 0.001209 | 0.001226 |
| mp_all_of_q.test | RUN | 0.142068 | 0.524847 | 0.474194 | 0.001512 | 0.001281 | 0.001206 |
| mp_any_of.test | RUN | 0.387250 | 1.259320 | 1.052196 | 0.001286 | 0.001127 | 0.001191 |
| mp_any_of_q.test | RUN | 0.145824 | 0.534728 | 0.456115 | 0.001306 | 0.001205 | 0.001238 |
| mp_none_of.test | RUN | 0.387364 | 1.255104 | 1.042278 | 0.001317 | 0.001383 | 0.001379 |
| mp_none_of_q.test | RUN | 0.145834 | 0.509117 | 0.445271 | 0.001254 | 0.001274 | 0.001228 |
| mp_replace_at.test | RUN | 0.176504 | 1.112529 | 0.725653 | 0.001152 | 0.001279 | 0.001248 |
| mp_replace_at_c.test | RUN | 0.184510 | 1.102859 | 0.732246 | 0.001284 | 0.001095 | 0.001266 |
| mp_for_each.test | RUN | 0.158968 | 0.702697 | 0.735822 | 0.001164 | 0.001250 | 0.001180 |
| mp_insert.test | RUN | 0.279675 | 2.251226 | 1.072287 | 0.001278 | 0.001121 | 0.001218 |
| mp_insert_2.test | RUN | 0.022638 | 0.046846 | 0.072764 | 0.000428 | 0.000465 | 0.001140 |
| mp_erase.test | RUN | 0.307097 | 2.383323 | 1.240900 | 0.001360 | 0.001336 | 0.001328 |
| mp_erase_2.test | RUN | 0.022089 | 0.045047 | 0.073226 | 0.000506 | 0.000505 | 0.001182 |
| mp_with_index.test | RUN | 0.406258 | 4.828424 | 2.677176 | 0.001436 | 0.001640 | 0.001512 |
| mp_with_index_cx.test | RUN | 0.003105 | 0.013862 | 0.022537 | 0.000496 | 0.000497 | 0.001264 |
| mp_from_sequence.test | RUN | 0.170343 | 1.253513 | 0.689587 | 0.001109 | 0.001300 | 0.001195 |
| mp_from_sequence_2.test | RUN | 0.182828 | 1.480823 | 0.762161 | 0.001135 | 0.001178 | 0.001422 |
| mp_from_sequence_3.test | RUN | 0.144587 | 0.643236 | 0.523054 | 0.001184 | 0.001211 | 0.001081 |
| mp_min_element.test | RUN | 0.146049 | 0.578092 | 0.494098 | 0.001266 | 0.001305 | 0.001143 |
| mp_min_element_2.test | RUN | 0.022704 | 0.046732 | 0.072286 | 0.000476 | 0.000466 | 0.001239 |
| mp_min_element_q.test | RUN | 0.146678 | 0.588725 | 0.485729 | 0.001245 | 0.001316 | 0.001198 |
| mp_min_element_q_2.test | RUN | 0.022758 | 0.045908 | 0.071205 | 0.000531 | 0.000476 | 0.001173 |
| mp_max_element.test | RUN | 0.152933 | 0.581550 | 0.484893 | 0.001200 | 0.001411 | 0.001241 |
| mp_max_element_2.test | RUN | 0.023159 | 0.045818 | 0.069437 | 0.000484 | 0.000496 | 0.001292 |
| mp_max_element_q.test | RUN | 0.147255 | 0.580294 | 0.492801 | 0.001244 | 0.001194 | 0.001314 |
| mp_max_element_q_2.test | RUN | 0.022978 | 0.047238 | 0.071188 | 0.000538 | 0.000451 | 0.001154 |
| mp_nth_element.test | RUN | 0.162194 | 0.837728 | 0.607009 | 0.001346 | 0.001357 | 0.001213 |
| mp_nth_element_q.test | RUN | 0.163304 | 0.826598 | 0.592264 | 0.001131 | 0.001286 | 0.001232 |
| mp_back.test | RUN | 0.157659 | 0.690035 | 0.570292 | 0.001549 | 0.001154 | 0.001169 |
| mp_back_2.test | RUN | 0.023776 | 0.046105 | 0.071925 | 0.000418 | 0.000445 | 0.001169 |
| mp_pop_back.test | RUN | 0.473482 | 4.591281 | 1.234272 | 0.001222 | 0.001223 | 0.001142 |
| mp_pop_back_2.test | RUN | 0.024280 | 0.045856 | 0.071796 | 0.000636 | 0.000508 | 0.001255 |
| mp_flatten.test | RUN | 0.198956 | 1.594330 | 0.814324 | 0.001495 | 0.001238 | 0.001262 |
| mp_rotate_left.test | RUN | 0.197121 | 1.743572 | 0.801037 | 0.001319 | 0.001376 | 0.001270 |
| mp_rotate_right.test | RUN | 0.194716 | 1.750822 | 0.804828 | 0.001243 | 0.001248 | 0.001205 |
| mp_power_set.test | RUN | 0.191353 | 1.689013 | 0.800029 | 0.001116 | 0.001276 | 0.001185 |
| mp_partial_sum.test | RUN | 0.258722 | 2.243441 | 0.914555 | 0.001120 | 0.001218 | 0.001102 |
| mp_iterate.test | RUN | 0.162582 | 0.659744 | 0.628024 | 0.001241 | 0.001318 | 0.001120 |
| mp_pairwise_fold.test | RUN | 0.190215 | 1.545884 | 0.820854 | 0.001181 | 0.001211 | 0.001134 |
| mp_pairwise_fold_q.test | RUN | 0.140698 | 0.438482 | 0.456609 | 0.001237 | 0.001321 | 0.001288 |
| mp_sliding_fold.test | RUN | 0.371690 | 2.981335 | 1.553256 | 0.001227 | 0.001317 | 0.001231 |
| mp_sliding_fold_q.test | RUN | 0.367835 | 2.991830 | 1.536434 | 0.001194 | 0.001231 | 0.001090 |
| mp_intersperse.test | RUN | 0.175300 | 1.101045 | 0.709795 | 0.001423 | 0.001185 | 0.001285 |
| mp_split.test | RUN | 0.262959 | 2.128993 | 1.001216 | 0.001288 | 0.001189 | 0.001293 |
| mp_join.test | RUN | 0.201061 | 1.764599 | 0.905112 | 0.001402 | 0.001286 | 0.001306 |
| integral.test | RUN | 0.155235 | 0.778549 | 0.529865 | 0.001311 | 0.001304 | 0.001153 |
| mp_value.test | RUN | 0.009636 | 0.024563 | 0.036601 | 0.000512 | 0.000478 | 0.001290 |
| mp_identity.test | RUN | 0.153883 | 0.719366 | 0.498752 | 0.001208 | 0.001216 | 0.001176 |
| mp_inherit.test | RUN | 0.142306 | 0.506786 | 0.465931 | 0.001223 | 0.001175 | 0.001242 |
| mp_if.test | RUN | 0.143715 | 0.575999 | 0.463014 | 0.001289 | 0.001206 | 0.001235 |
| mp_if_sf.test | RUN | 0.132655 | 0.425437 | 0.430300 | 0.001142 | 0.001146 | 0.001173 |
| mp_eval_if.test | RUN | 0.142940 | 0.627195 | 0.474532 | 0.001441 | 0.001207 | 0.001209 |
| mp_eval_if_sf.test | RUN | 0.133875 | 0.434889 | 0.432256 | 0.001249 | 0.001192 | 0.001269 |
| mp_valid.test | RUN | 0.135920 | 0.443273 | 0.441207 | 0.001296 | 0.001156 | 0.001253 |
| mp_defer.test | RUN | 0.146989 | 0.739354 | 0.529091 | 0.001190 | 0.001317 | 0.001300 |
| mp_quote.test | RUN | 0.149904 | 0.760343 | 0.541882 | 0.001360 | 0.001285 | 0.001138 |
| mp_invoke_q.test | RUN | 0.161683 | 1.006921 | 0.607817 | 0.001254 | 0.001345 | 0.001021 |
| mp_invoke_q_sf.test | RUN | 0.138830 | 0.430866 | 0.426270 | 0.001226 | 0.001214 | 0.001150 |
| mp_quote_trait.test | RUN | 0.152842 | 0.840408 | 0.530885 | 0.001317 | 0.001230 | 0.001285 |
| mp_cond.test | RUN | 0.139334 | 0.509053 | 0.457666 | 0.001487 | 0.001208 | 0.001242 |
| mp_cond_sf.test | RUN | 0.133962 | 0.430240 | 0.445057 | 0.001446 | 0.001089 | 0.001089 |
| mp_not_fn.test | RUN | 0.134036 | 0.433907 | 0.432537 | 0.001280 | 0.001265 | 0.001251 |
| mp_eval_if_not.test | RUN | 0.146185 | 0.628372 | 0.487777 | 0.001252 | 0.001206 | 0.001267 |
| mp_eval_or.test | RUN | 0.142822 | 0.336588 | 0.451886 | 0.001226 | 0.001359 | 0.001151 |
| mp_compose.test | RUN | 0.154887 | 1.041160 | 0.585494 | 0.001258 | 0.001286 | 0.001230 |
| mp_valid_and_true.test | RUN | 0.136668 | 0.531048 | 0.452714 | 0.001315 | 0.001289 | 0.001135 |
| mp_compose_sf.test | COMPILE | 0.033960 | 0.058305 | 0.101326 | — | — | — |
| integer_sequence.test | RUN | 0.170310 | 1.020050 | 0.667869 | 0.001107 | 0.001309 | 0.001155 |
| tuple_for_each.test | RUN | 0.138797 | 0.377447 | 0.462182 | 0.001116 | 0.001248 | 0.001194 |
| tuple_for_each_cx.test | COMPILE | 0.025607 | 0.051357 | 0.080924 | — | — | — |
| tuple_apply.test | RUN | 0.145971 | 0.368536 | 0.476553 | 0.001097 | 0.001212 | 0.001276 |
| tuple_apply_cx.test | COMPILE | 0.036874 | 0.074491 | 0.107325 | — | — | — |
| construct_from_tuple.test | RUN | 0.135702 | 0.398453 | 0.464284 | 0.001318 | 0.001314 | 0.001090 |
| construct_from_tuple_cx.test | COMPILE | 0.038984 | 0.073890 | 0.109355 | — | — | — |
| tuple_transform.test | RUN | 0.226506 | 0.811465 | 0.907464 | 0.001194 | 0.001157 | 0.001194 |
| tuple_transform_2.test | RUN | 0.192777 | 0.589178 | 0.825461 | 0.001332 | 0.001221 | 0.001160 |
| tuple_transform_cx.test | COMPILE | 0.032090 | 0.069322 | 0.102527 | — | — | — |
| mp_set_contains.test | RUN | 0.144275 | 0.527723 | 0.471534 | 0.001026 | 0.001071 | 0.001176 |
| mp_set_push_back.test | RUN | 0.193435 | 1.664157 | 0.807673 | 0.001596 | 0.001280 | 0.001219 |
| mp_set_push_front.test | RUN | 0.256602 | 2.008433 | 0.934003 | 0.001324 | 0.001320 | 0.001248 |
| mp_is_set.test | RUN | 0.145293 | 0.527721 | 0.475438 | 0.001315 | 0.001337 | 0.001369 |
| mp_set_union.test | RUN | 0.192014 | 1.422696 | 0.772371 | 0.001322 | 0.001226 | 0.000862 |
| mp_set_union_sf.test | RUN | 0.143120 | 0.423398 | 0.429226 | 0.001312 | 0.001223 | 0.001198 |
| mp_set_difference.test | RUN | 0.172286 | 1.099143 | 0.651309 | 0.001211 | 0.001153 | 0.001181 |
| mp_set_difference_sf.test | RUN | 0.141993 | 0.417592 | 0.428287 | 0.001308 | 0.001194 | 0.001212 |
| mp_set_intersection.test | RUN | 0.167883 | 1.090795 | 0.646093 | 0.001187 | 0.001252 | 0.001207 |
| mp_set_intersection_sf.test | RUN | 0.139874 | 0.426172 | 0.421361 | 0.001141 | 0.001243 | 0.001196 |
| mp_all.test | RUN | 0.143519 | 0.521015 | 0.470555 | 0.001424 | 0.001335 | 0.001253 |
| mp_all_2.test | RUN | 0.398852 | 1.120073 | 1.048840 | 0.001290 | 0.001180 | 0.001258 |
| mp_and.test | RUN | 0.135646 | 0.528235 | 0.468660 | 0.001209 | 0.001392 | 0.001249 |
| mp_any.test | RUN | 0.144311 | 0.531423 | 0.441665 | 0.001087 | 0.001273 | 0.001212 |
| mp_any_2.test | RUN | 0.405771 | 1.122455 | 1.057737 | 0.001249 | 0.001390 | 0.001144 |
| mp_or.test | RUN | 0.144147 | 0.532538 | 0.457027 | 0.001524 | 0.001291 | 0.001325 |
| mp_same.test | RUN | 0.274841 | 0.882354 | 0.726942 | 0.001412 | 0.001276 | 0.001244 |
| mp_plus.test | RUN | 0.153414 | 0.630548 | 0.499752 | 0.001139 | 0.001274 | 0.001215 |
| mp_less.test | RUN | 0.147345 | 0.515745 | 0.453266 | 0.001463 | 0.001104 | 0.001159 |
| mp_min.test | RUN | 0.139907 | 0.479096 | 0.452255 | 0.001319 | 0.001373 | 0.001123 |
| mp_max.test | RUN | 0.140248 | 0.535725 | 0.470138 | 0.001316 | 0.001309 | 0.001316 |
| mp_similar.test | RUN | 0.139086 | 0.525064 | 0.467341 | 0.001064 | 0.001287 | 0.001102 |
| mp_map_find.test | RUN | 0.164298 | 0.984547 | 0.618759 | 0.001242 | 0.001163 | 0.001247 |
| mp_map_find_2.test | RUN | 0.145380 | 0.370057 | 0.521591 | 0.001622 | 0.001110 | 0.001171 |
| mp_map_find_3.test | RUN | 0.148710 | 0.365496 | 0.522529 | 0.001315 | 0.001087 | 0.001138 |
| mp_map_find_4.test | RUN | 0.139169 | 0.342534 | 0.480246 | 0.001234 | 0.001150 | 0.001114 |
| mp_map_contains.test | RUN | 0.149357 | 0.532331 | 0.482077 | 0.001528 | 0.001262 | 0.001205 |
| mp_map_insert.test | RUN | 0.200946 | 1.864343 | 0.886682 | 0.001498 | 0.001267 | 0.001083 |
| mp_map_replace.test | RUN | 0.276684 | 2.116011 | 1.022462 | 0.001576 | 0.001331 | 0.001351 |
| mp_map_erase.test | RUN | 0.190782 | 1.583772 | 0.842758 | 0.001455 | 0.001380 | 0.001240 |
| mp_map_update.test | RUN | 0.167339 | 1.012047 | 0.650300 | 0.001291 | 0.001211 | 0.001182 |
| mp_map_update_q.test | RUN | 0.166820 | 1.009504 | 0.647390 | 0.001508 | 0.001233 | 0.001199 |
| mp_map_keys.test | RUN | 0.162820 | 0.902740 | 0.627735 | 0.001318 | 0.001281 | 0.001164 |
| mp_is_map.test | RUN | 0.145884 | 0.539905 | 0.500753 | 0.001220 | 0.000945 | 0.001199 |
| mp_bind.test | RUN | 0.181714 | 1.648149 | 0.765529 | 0.001523 | 0.001324 | 0.001278 |
| mp_bind_q.test | RUN | 0.165570 | 1.016143 | 0.609132 | 0.001326 | 0.001273 | 0.001124 |
| mp_bind_front.test | RUN | 0.162224 | 1.128991 | 0.583886 | 0.001346 | 0.001371 | 0.001125 |
| mp_bind_back.test | RUN | 0.158645 | 1.121372 | 0.585616 | 0.001146 | 0.001292 | 0.000965 |
| mp_lambda.test | RUN | 0.386162 | 3.369268 | 1.590665 | 0.001343 | 0.000877 | 0.001169 |
| mpl.test | RUN | 0.326178 | 0.856056 | 1.265375 | 0.001255 | 0.001348 | 0.001321 |
| mpl_list.test | RUN | 0.178694 | 0.651554 | 0.570050 | 0.001352 | 0.001386 | 0.001288 |
| mpl_tuple.test | RUN | 0.176558 | 0.647387 | 0.566911 | 0.001297 | 0.001191 | 0.001299 |
| version.test | RUN | 0.095346 | 0.233177 | 0.292965 | 0.001296 | 0.001340 | 0.001314 |
| mp11_version.test | RUN | 0.110872 | 0.266650 | 0.342144 | 0.001359 | 0.001396 | 0.001111 |
| list_version.test | RUN | 0.093728 | 0.235790 | 0.302328 | 0.001111 | 0.001046 | 0.001208 |
| algorithm_version.test | RUN | 0.107511 | 0.251727 | 0.315705 | 0.001415 | 0.001291 | 0.001083 |
| integral_version.test | RUN | 0.090657 | 0.226535 | 0.288037 | 0.001270 | 0.001241 | 0.001199 |
| utility_version.test | RUN | 0.092648 | 0.236900 | 0.290033 | 0.001142 | 0.001190 | 0.001305 |
| function_version.test | RUN | 0.093667 | 0.235651 | 0.297811 | 0.001142 | 0.001073 | 0.001210 |
| map_version.test | RUN | 0.108369 | 0.251705 | 0.325468 | 0.001378 | 0.001157 | 0.001252 |
| set_version.test | RUN | 0.098079 | 0.237310 | 0.302248 | 0.001227 | 0.001214 | 0.001144 |
| bind_version.test | RUN | 0.100671 | 0.247832 | 0.320098 | 0.001151 | 0.001274 | 0.001356 |
| integer_sequence_version.test | RUN | 0.088120 | 0.229590 | 0.294013 | 0.001052 | 0.001253 | 0.001233 |
| tuple_version.test | RUN | 0.105102 | 0.248758 | 0.235177 | 0.000935 | 0.001199 | 0.000856 |
| mpl_version.test | RUN | 0.072714 | 0.199399 | 0.303818 | 0.001008 | 0.000943 | 0.000811 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.007× | 1.005×, 1.008× | 1.002× |
| clang | 1.097× | 1.088×, 1.106× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45710374989).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000743s | 0.000751s | 0.000734s | byte equality observed |
| bind_version.test | 10 | 0.000745s | 0.000744s | 0.000742s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000751s | 0.000723s | 0.000721s | byte equality observed |
| function_version.test | 10 | 0.000718s | 0.000752s | 0.000748s | byte equality observed |
| integer_sequence.test | 10 | 0.000728s | 0.000755s | 0.000736s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000751s | 0.000742s | 0.000728s | byte equality observed |
| integral.test | 10 | 0.000731s | 0.000743s | 0.000723s | byte equality observed |
| integral_version.test | 10 | 0.000732s | 0.000741s | 0.000747s | byte equality observed |
| list_version.test | 10 | 0.000741s | 0.000745s | 0.000748s | byte equality observed |
| map_version.test | 10 | 0.000747s | 0.000748s | 0.000770s | byte equality observed |
| mp11_version.test | 10 | 0.000733s | 0.000750s | 0.000769s | byte equality observed |
| mp_all.test | 10 | 0.000732s | 0.000749s | 0.000761s | byte equality observed |
| mp_all_2.test | 10 | 0.000740s | 0.000754s | 0.000815s | byte equality observed |
| mp_all_of.test | 10 | 0.000728s | 0.000731s | 0.000841s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000731s | 0.000766s | 0.000849s | byte equality observed |
| mp_and.test | 10 | 0.000734s | 0.000745s | 0.000812s | byte equality observed |
| mp_any.test | 10 | 0.000742s | 0.000756s | 0.000826s | byte equality observed |
| mp_any_2.test | 10 | 0.000733s | 0.000749s | 0.000828s | byte equality observed |
| mp_any_of.test | 10 | 0.000728s | 0.000751s | 0.000809s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000740s | 0.000770s | 0.000811s | byte equality observed |
| mp_append.test | 10 | 0.000729s | 0.000728s | 0.000783s | byte equality observed |
| mp_append_2.test | 10 | 0.000760s | 0.000772s | 0.000820s | byte equality observed |
| mp_append_3.test | 10 | 0.000361s | 0.000343s | 0.000797s | byte equality observed |
| mp_append_sf.test | 10 | 0.000798s | 0.000763s | 0.000813s | byte equality observed |
| mp_apply_q.test | 10 | 0.000801s | 0.000752s | 0.000813s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.000827s | 0.000751s | 0.000796s | byte equality observed |
| mp_assign.test | 10 | 0.000822s | 0.000749s | 0.000785s | byte equality observed |
| mp_assign_2.test | 10 | 0.000363s | 0.000344s | 0.000793s | byte equality observed |
| mp_at.test | 10 | 0.000800s | 0.000769s | 0.000806s | byte equality observed |
| mp_at_2.test | 10 | 0.000366s | 0.000351s | 0.000794s | byte equality observed |
| mp_at_sf.test | 10 | 0.000810s | 0.000825s | 0.000809s | byte equality observed |
| mp_back.test | 10 | 0.000813s | 0.000832s | 0.000819s | byte equality observed |
| mp_back_2.test | 10 | 0.000364s | 0.000385s | 0.000796s | byte equality observed |
| mp_bind.test | 10 | 0.000784s | 0.000815s | 0.000796s | byte equality observed |
| mp_bind_back.test | 10 | 0.000788s | 0.000833s | 0.000820s | byte equality observed |
| mp_bind_front.test | 10 | 0.000818s | 0.000830s | 0.000825s | byte equality observed |
| mp_bind_q.test | 10 | 0.000790s | 0.000834s | 0.000818s | byte equality observed |
| mp_clear.test | 10 | 0.000813s | 0.000805s | 0.000782s | byte equality observed |
| mp_clear_2.test | 10 | 0.000362s | 0.000367s | 0.000824s | byte equality observed |
| mp_compose.test | 10 | 0.000813s | 0.000827s | 0.000805s | byte equality observed |
| mp_cond.test | 10 | 0.000810s | 0.000820s | 0.000821s | byte equality observed |
| mp_cond_sf.test | 10 | 0.000794s | 0.000825s | 0.000822s | byte equality observed |
| mp_contains.test | 10 | 0.000814s | 0.000819s | 0.000827s | byte equality observed |
| mp_copy_if.test | 10 | 0.000835s | 0.000824s | 0.000832s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.000845s | 0.000829s | 0.000802s | byte equality observed |
| mp_count.test | 10 | 0.000832s | 0.000831s | 0.000824s | byte equality observed |
| mp_count_if.test | 10 | 0.000826s | 0.000814s | 0.000819s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000832s | 0.000822s | 0.000799s | byte equality observed |
| mp_defer.test | 10 | 0.000822s | 0.000807s | 0.000844s | byte equality observed |
| mp_drop.test | 10 | 0.000821s | 0.000820s | 0.000799s | byte equality observed |
| mp_drop_2.test | 10 | 0.000365s | 0.000366s | 0.000768s | byte equality observed |
| mp_empty.test | 10 | 0.000792s | 0.000809s | 0.000804s | byte equality observed |
| mp_empty_2.test | 10 | 0.000360s | 0.000364s | 0.000823s | byte equality observed |
| mp_erase.test | 10 | 0.000820s | 0.000839s | 0.000819s | byte equality observed |
| mp_erase_2.test | 10 | 0.000362s | 0.000366s | 0.000798s | byte equality observed |
| mp_eval_if.test | 10 | 0.000805s | 0.000841s | 0.000810s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.000825s | 0.000809s | 0.000807s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.000817s | 0.000824s | 0.000815s | byte equality observed |
| mp_eval_or.test | 10 | 0.000831s | 0.000803s | 0.000825s | byte equality observed |
| mp_fill.test | 10 | 0.000811s | 0.000801s | 0.000817s | byte equality observed |
| mp_fill_2.test | 10 | 0.000362s | 0.000375s | 0.000794s | byte equality observed |
| mp_filter.test | 10 | 0.000806s | 0.000816s | 0.000806s | byte equality observed |
| mp_find.test | 10 | 0.000799s | 0.000815s | 0.000796s | byte equality observed |
| mp_find_if.test | 10 | 0.000810s | 0.000839s | 0.000829s | byte equality observed |
| mp_find_if_q.test | 10 | 0.000808s | 0.000836s | 0.000807s | byte equality observed |
| mp_flatten.test | 10 | 0.000812s | 0.000846s | 0.000792s | byte equality observed |
| mp_fold.test | 10 | 0.000821s | 0.000820s | 0.000789s | byte equality observed |
| mp_fold_q.test | 10 | 0.000840s | 0.000849s | 0.000816s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.000819s | 0.000864s | 0.000802s | byte equality observed |
| mp_for_each.test | 10 | 0.000825s | 0.000820s | 0.000809s | byte equality observed |
| mp_from_sequence.test | 10 | 0.000830s | 0.000833s | 0.000806s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.000836s | 0.000823s | 0.000837s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.000839s | 0.000811s | 0.000806s | byte equality observed |
| mp_front.test | 10 | 0.000798s | 0.000820s | 0.000808s | byte equality observed |
| mp_front_2.test | 10 | 0.000361s | 0.000363s | 0.000764s | byte equality observed |
| mp_identity.test | 10 | 0.000811s | 0.000820s | 0.000816s | byte equality observed |
| mp_if.test | 10 | 0.000794s | 0.000848s | 0.000805s | byte equality observed |
| mp_if_sf.test | 10 | 0.000800s | 0.000861s | 0.000823s | byte equality observed |
| mp_inherit.test | 10 | 0.000812s | 0.000834s | 0.000813s | byte equality observed |
| mp_insert.test | 10 | 0.000819s | 0.000803s | 0.000806s | byte equality observed |
| mp_insert_2.test | 10 | 0.000366s | 0.000369s | 0.000793s | byte equality observed |
| mp_intersperse.test | 10 | 0.000811s | 0.000816s | 0.000793s | byte equality observed |
| mp_invoke_q.test | 10 | 0.000810s | 0.000798s | 0.000799s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.000830s | 0.000810s | 0.000839s | byte equality observed |
| mp_iota.test | 10 | 0.000824s | 0.000836s | 0.000814s | byte equality observed |
| mp_iota_2.test | 10 | 0.000806s | 0.000850s | 0.000820s | byte equality observed |
| mp_is_list.test | 10 | 0.000817s | 0.000842s | 0.000819s | byte equality observed |
| mp_is_map.test | 10 | 0.000827s | 0.000817s | 0.000826s | byte equality observed |
| mp_is_set.test | 10 | 0.000815s | 0.000824s | 0.000821s | byte equality observed |
| mp_is_value_list.test | 10 | 0.000814s | 0.000793s | 0.000815s | byte equality observed |
| mp_iterate.test | 10 | 0.000823s | 0.000803s | 0.000811s | byte equality observed |
| mp_join.test | 10 | 0.000820s | 0.000827s | 0.000829s | byte equality observed |
| mp_lambda.test | 10 | 0.000840s | 0.000820s | 0.000826s | byte equality observed |
| mp_less.test | 10 | 0.000811s | 0.000811s | 0.000817s | byte equality observed |
| mp_list_c.test | 10 | 0.000823s | 0.000827s | 0.000832s | byte equality observed |
| mp_list_v.test | 10 | 0.000356s | 0.000354s | 0.000791s | byte equality observed |
| mp_map_contains.test | 10 | 0.000801s | 0.000820s | 0.000781s | byte equality observed |
| mp_map_erase.test | 10 | 0.000844s | 0.000846s | 0.000795s | byte equality observed |
| mp_map_find.test | 10 | 0.000822s | 0.000837s | 0.000794s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000811s | 0.000812s | 0.000808s | byte equality observed |
| mp_map_find_3.test | 10 | 0.000823s | 0.000810s | 0.000823s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000823s | 0.000836s | 0.000818s | byte equality observed |
| mp_map_insert.test | 10 | 0.000832s | 0.000797s | 0.000822s | byte equality observed |
| mp_map_keys.test | 10 | 0.000822s | 0.000827s | 0.000813s | byte equality observed |
| mp_map_replace.test | 10 | 0.000842s | 0.000828s | 0.000815s | byte equality observed |
| mp_map_update.test | 10 | 0.000796s | 0.000853s | 0.000836s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000808s | 0.000826s | 0.000857s | byte equality observed |
| mp_max.test | 10 | 0.000826s | 0.000817s | 0.000834s | byte equality observed |
| mp_max_element.test | 10 | 0.000798s | 0.000812s | 0.000818s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000364s | 0.000366s | 0.000790s | byte equality observed |
| mp_max_element_q.test | 10 | 0.000797s | 0.000805s | 0.000799s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000365s | 0.000371s | 0.000768s | byte equality observed |
| mp_min.test | 10 | 0.000806s | 0.000847s | 0.000780s | byte equality observed |
| mp_min_element.test | 10 | 0.000802s | 0.000830s | 0.000813s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000355s | 0.000370s | 0.000809s | byte equality observed |
| mp_min_element_q.test | 10 | 0.000799s | 0.000789s | 0.000788s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000359s | 0.000369s | 0.000785s | byte equality observed |
| mp_none_of.test | 10 | 0.000824s | 0.000830s | 0.000824s | byte equality observed |
| mp_none_of_q.test | 10 | 0.000815s | 0.000822s | 0.000832s | byte equality observed |
| mp_not_fn.test | 10 | 0.000825s | 0.000847s | 0.000848s | byte equality observed |
| mp_nth_element.test | 10 | 0.000840s | 0.000825s | 0.000840s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.000827s | 0.000820s | 0.000801s | byte equality observed |
| mp_or.test | 10 | 0.000823s | 0.000802s | 0.000801s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.000833s | 0.000812s | 0.000808s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.000828s | 0.000808s | 0.000802s | byte equality observed |
| mp_partial_sum.test | 10 | 0.000840s | 0.000802s | 0.000803s | byte equality observed |
| mp_partition.test | 10 | 0.000825s | 0.000825s | 0.000821s | byte equality observed |
| mp_partition_q.test | 10 | 0.000797s | 0.000837s | 0.000815s | byte equality observed |
| mp_plus.test | 10 | 0.000817s | 0.000837s | 0.000803s | byte equality observed |
| mp_pop_back.test | 10 | 0.000810s | 0.000815s | 0.000823s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000357s | 0.000349s | 0.000794s | byte equality observed |
| mp_pop_front.test | 10 | 0.000805s | 0.000807s | 0.000790s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000361s | 0.000364s | 0.000783s | byte equality observed |
| mp_power_set.test | 10 | 0.000816s | 0.000835s | 0.000801s | byte equality observed |
| mp_product.test | 10 | 0.000817s | 0.000804s | 0.000821s | byte equality observed |
| mp_push_back.test | 10 | 0.000800s | 0.000823s | 0.000810s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000363s | 0.000361s | 0.000819s | byte equality observed |
| mp_push_front.test | 10 | 0.000803s | 0.000811s | 0.000794s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000356s | 0.000356s | 0.000789s | byte equality observed |
| mp_quote.test | 10 | 0.000810s | 0.000800s | 0.000833s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000815s | 0.000806s | 0.000814s | byte equality observed |
| mp_remove.test | 10 | 0.000787s | 0.000835s | 0.000828s | byte equality observed |
| mp_remove_if.test | 10 | 0.000796s | 0.000817s | 0.000840s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.000812s | 0.000846s | 0.000839s | byte equality observed |
| mp_rename.test | 10 | 0.000816s | 0.000842s | 0.000805s | byte equality observed |
| mp_rename_2.test | 10 | 0.000359s | 0.000366s | 0.000809s | byte equality observed |
| mp_rename_v.test | 10 | 0.000359s | 0.000358s | 0.000820s | byte equality observed |
| mp_repeat.test | 10 | 0.000808s | 0.000816s | 0.000813s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000364s | 0.000361s | 0.000793s | byte equality observed |
| mp_repeat_3.test | 10 | 0.000801s | 0.000779s | 0.000796s | byte equality observed |
| mp_replace.test | 10 | 0.000809s | 0.000822s | 0.000807s | byte equality observed |
| mp_replace_at.test | 10 | 0.000810s | 0.000824s | 0.000822s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.000801s | 0.000834s | 0.000821s | byte equality observed |
| mp_replace_front.test | 10 | 0.000806s | 0.000812s | 0.000807s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000359s | 0.000361s | 0.000797s | byte equality observed |
| mp_replace_if.test | 10 | 0.000802s | 0.000822s | 0.000799s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.000820s | 0.000837s | 0.000839s | byte equality observed |
| mp_replace_second.test | 10 | 0.000801s | 0.000817s | 0.000826s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000365s | 0.000362s | 0.000810s | byte equality observed |
| mp_replace_third.test | 10 | 0.000806s | 0.000805s | 0.000809s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000364s | 0.000371s | 0.000794s | byte equality observed |
| mp_reverse.test | 10 | 0.000821s | 0.000853s | 0.000822s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.000828s | 0.000839s | 0.000792s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000832s | 0.000849s | 0.000789s | byte equality observed |
| mp_rotate_left.test | 10 | 0.000820s | 0.000844s | 0.000783s | byte equality observed |
| mp_rotate_right.test | 10 | 0.000833s | 0.000817s | 0.000820s | byte equality observed |
| mp_same.test | 10 | 0.000809s | 0.000807s | 0.000821s | byte equality observed |
| mp_second.test | 10 | 0.000816s | 0.000789s | 0.000826s | byte equality observed |
| mp_second_2.test | 10 | 0.000366s | 0.000360s | 0.000800s | byte equality observed |
| mp_set_contains.test | 10 | 0.000849s | 0.000814s | 0.000819s | byte equality observed |
| mp_set_difference.test | 10 | 0.000819s | 0.000811s | 0.000802s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000806s | 0.000807s | 0.000809s | byte equality observed |
| mp_set_intersection.test | 10 | 0.000810s | 0.000795s | 0.000823s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000804s | 0.000841s | 0.000809s | byte equality observed |
| mp_set_push_back.test | 10 | 0.000803s | 0.000826s | 0.000800s | byte equality observed |
| mp_set_push_front.test | 10 | 0.000819s | 0.000828s | 0.000819s | byte equality observed |
| mp_set_union.test | 10 | 0.000793s | 0.000844s | 0.000775s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.000822s | 0.000812s | 0.000826s | byte equality observed |
| mp_similar.test | 10 | 0.000839s | 0.000805s | 0.000827s | byte equality observed |
| mp_size.test | 10 | 0.000814s | 0.000817s | 0.000809s | byte equality observed |
| mp_size_2.test | 10 | 0.000361s | 0.000362s | 0.000780s | byte equality observed |
| mp_slice.test | 10 | 0.000812s | 0.000838s | 0.000795s | byte equality observed |
| mp_slice_2.test | 10 | 0.000360s | 0.000358s | 0.000783s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.000829s | 0.000832s | 0.000818s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.000837s | 0.000863s | 0.000818s | byte equality observed |
| mp_sort.test | 10 | 0.000824s | 0.000849s | 0.000826s | byte equality observed |
| mp_sort_q.test | 10 | 0.000803s | 0.000821s | 0.000804s | byte equality observed |
| mp_split.test | 10 | 0.000821s | 0.000809s | 0.000801s | byte equality observed |
| mp_starts_with.test | 10 | 0.000840s | 0.000829s | 0.000791s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.000822s | 0.000813s | 0.000821s | byte equality observed |
| mp_take.test | 10 | 0.000805s | 0.000817s | 0.000812s | byte equality observed |
| mp_take_2.test | 10 | 0.000368s | 0.000365s | 0.000818s | byte equality observed |
| mp_third.test | 10 | 0.000791s | 0.000810s | 0.000817s | byte equality observed |
| mp_third_2.test | 10 | 0.000371s | 0.000366s | 0.000770s | byte equality observed |
| mp_transform.test | 10 | 0.000817s | 0.000824s | 0.000814s | byte equality observed |
| mp_transform_2.test | 10 | 0.000804s | 0.000806s | 0.000794s | byte equality observed |
| mp_transform_front.test | 10 | 0.000801s | 0.000814s | 0.000825s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000368s | 0.000358s | 0.000790s | byte equality observed |
| mp_transform_if.test | 10 | 0.000786s | 0.000824s | 0.000805s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.000834s | 0.000844s | 0.000824s | byte equality observed |
| mp_transform_q.test | 10 | 0.000836s | 0.000856s | 0.000811s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.000809s | 0.000815s | 0.000797s | byte equality observed |
| mp_transform_second.test | 10 | 0.000805s | 0.000809s | 0.000820s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000368s | 0.000366s | 0.000789s | byte equality observed |
| mp_transform_sf.test | 10 | 0.000804s | 0.000780s | 0.000814s | byte equality observed |
| mp_transform_third.test | 10 | 0.000787s | 0.000831s | 0.000830s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000365s | 0.000363s | 0.000797s | byte equality observed |
| mp_unique.test | 10 | 0.000787s | 0.000826s | 0.000809s | byte equality observed |
| mp_unique_if.test | 10 | 0.000838s | 0.000817s | 0.000824s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.000815s | 0.000838s | 0.000792s | byte equality observed |
| mp_valid.test | 10 | 0.000801s | 0.000848s | 0.000800s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.000814s | 0.000825s | 0.000804s | byte equality observed |
| mp_value.test | 10 | 0.000367s | 0.000363s | 0.000779s | byte equality observed |
| mp_with_index.test | 10 | 0.001112s | 0.001073s | 0.001014s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000362s | 0.000366s | 0.000803s | byte equality observed |
| mpl.test | 10 | 0.000829s | 0.000808s | 0.000820s | byte equality observed |
| mpl_list.test | 10 | 0.000825s | 0.000804s | 0.000805s | byte equality observed |
| mpl_tuple.test | 10 | 0.000823s | 0.000816s | 0.000802s | byte equality observed |
| mpl_version.test | 10 | 0.000820s | 0.000795s | 0.000811s | byte equality observed |
| set_version.test | 10 | 0.000805s | 0.000784s | 0.000822s | byte equality observed |
| tuple_apply.test | 10 | 0.000815s | 0.000806s | 0.000830s | byte equality observed |
| tuple_for_each.test | 10 | 0.000816s | 0.000824s | 0.000841s | byte equality observed |
| tuple_transform.test | 10 | 0.000802s | 0.000809s | 0.000809s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000800s | 0.000785s | 0.000815s | byte equality observed |
| tuple_version.test | 10 | 0.000810s | 0.000801s | 0.000831s | byte equality observed |
| utility_version.test | 10 | 0.000839s | 0.000806s | 0.000803s | byte equality observed |
| version.test | 10 | 0.000824s | 0.000819s | 0.000809s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45710374989).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
