# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.285917 | 0.624850 | 0.809644 | 0.001085 | 0.001286 | 0.001084 |
| any.test | RUN | 0.278904 | 0.600338 | 0.764936 | 0.001079 | 0.001255 | 0.001144 |
| clear.test | RUN | 0.203472 | 0.566101 | 0.628214 | 0.001139 | 0.001127 | 0.001146 |
| copy.test | RUN | 0.172027 | 0.412681 | 0.503319 | 0.001204 | 0.001352 | 0.001289 |
| count.test | RUN | 0.192760 | 0.461291 | 0.567631 | 0.001428 | 0.001409 | 0.001281 |
| count_if.test | RUN | 0.177897 | 0.423488 | 0.524047 | 0.001067 | 0.001312 | 0.001138 |
| erase.test | RUN | 0.259179 | 0.769417 | 0.861049 | 0.001272 | 0.001303 | 0.001241 |
| erase_key.test | RUN | 0.252459 | 0.755804 | 0.810151 | 0.001233 | 0.001221 | 0.001335 |
| filter.test | RUN | 0.229701 | 0.636947 | 0.742694 | 0.001353 | 0.001317 | 0.001376 |
| filter_if.test | RUN | 0.256890 | 0.752183 | 0.875609 | 0.001210 | 0.001266 | 0.001228 |
| find.test | RUN | 0.221910 | 0.515584 | 0.651094 | 0.001130 | 0.001273 | 0.001172 |
| find_if.test | RUN | 0.209906 | 0.463976 | 0.596875 | 0.001282 | 0.001442 | 0.001259 |
| fold.test | RUN | 0.226475 | 0.583196 | 0.752977 | 0.001414 | 0.001357 | 0.001343 |
| for_each.test | RUN | 0.203229 | 0.528880 | 0.647343 | 0.001348 | 0.001398 | 0.001215 |
| insert.test | RUN | 0.297419 | 0.961151 | 1.058009 | 0.001388 | 0.001277 | 0.001295 |
| insert_range.test | RUN | 0.296317 | 0.952230 | 1.066491 | 0.001168 | 0.001316 | 0.001234 |
| iter_fold.test | RUN | 0.345255 | 0.893046 | 1.233291 | 0.001225 | 0.001410 | 0.001204 |
| move.test | RUN | 0.171733 | 0.425165 | 0.543189 | 0.001373 | 0.001120 | 0.001217 |
| none.test | RUN | 0.275261 | 0.611656 | 0.780049 | 0.001074 | 0.001151 | 0.001262 |
| pop_back.test | RUN | 0.272884 | 0.834076 | 0.938972 | 0.001088 | 0.001424 | 0.001118 |
| pop_front.test | RUN | 0.234464 | 0.668094 | 0.731150 | 0.001391 | 0.001345 | 0.001206 |
| push_back.test | RUN | 0.293005 | 0.966078 | 1.018105 | 0.001231 | 0.001454 | 0.001232 |
| push_front.test | RUN | 0.264898 | 0.797012 | 0.862657 | 0.001334 | 0.001345 | 0.001167 |
| remove.test | RUN | 0.288071 | 0.919819 | 1.030006 | 0.001216 | 0.001276 | 0.001166 |
| remove_if.test | RUN | 0.258224 | 0.743991 | 0.869290 | 0.001338 | 0.001524 | 0.001248 |
| replace.test | RUN | 0.250309 | 0.737400 | 0.806006 | 0.001404 | 0.001376 | 0.001282 |
| replace_if.test | RUN | 0.251414 | 0.730499 | 0.791295 | 0.001312 | 0.001455 | 0.001182 |
| reverse_fold.test | RUN | 0.376576 | 1.005526 | 1.355262 | 0.001275 | 0.001270 | 0.001206 |
| reverse_iter_fold.test | RUN | 0.389280 | 1.033793 | 1.437715 | 0.001208 | 0.001346 | 0.001236 |
| reverse.test | RUN | 0.248216 | 0.756866 | 0.817963 | 0.001341 | 0.001226 | 0.001191 |
| segmented_for_each.test | RUN | 0.421962 | 1.397508 | 1.685092 | 0.001191 | 0.001448 | 0.001202 |
| segmented_find.test | RUN | 0.257640 | 0.745612 | 0.914993 | 0.001238 | 0.001171 | 0.001148 |
| segmented_find_if.test | RUN | 0.259862 | 0.738406 | 0.940216 | 0.001117 | 0.001246 | 0.001300 |
| segmented_fold.test | RUN | 0.324426 | 0.982830 | 1.188270 | 0.001430 | 0.001351 | 0.001205 |
| transform.test | RUN | 0.256855 | 0.797682 | 0.876596 | 0.001169 | 0.001540 | 0.001180 |
| join.test | RUN | 0.196401 | 0.476626 | 0.590991 | 0.001356 | 0.001252 | 0.001225 |
| zip.test | RUN | 0.334266 | 0.893246 | 1.129267 | 0.001305 | 0.001444 | 0.001327 |
| zip2.test | RUN | 0.330201 | 0.869917 | 1.100118 | 0.001211 | 0.001400 | 0.001218 |
| zip_ignore.test | RUN | 0.248139 | 0.586702 | 0.737770 | 0.001202 | 0.001350 | 0.001158 |
| flatten.test | RUN | 0.238832 | 0.674543 | 0.755711 | 0.001192 | 0.001429 | 0.001252 |
| ticket-5490.test | COMPILE | 0.124606 | 0.280694 | 0.329888 | — | — | — |
| as_deque.test | RUN | 0.233437 | 0.616542 | 0.800401 | 0.001217 | 0.001359 | 0.001298 |
| as_list.test | RUN | 0.262967 | 0.779643 | 0.849854 | 0.001271 | 0.001347 | 0.001231 |
| as_map.test | RUN | 0.263602 | 0.753600 | 0.875680 | 0.001230 | 0.001164 | 0.001171 |
| as_map_assoc.test | RUN | 0.250321 | 0.700761 | 0.820728 | 0.001168 | 0.001371 | 0.001189 |
| as_set.test | RUN | 0.295434 | 0.901687 | 0.996894 | 0.001438 | 0.001152 | 0.001201 |
| as_vector.test | RUN | 0.264698 | 0.792222 | 0.875047 | 0.001168 | 0.001207 | 0.001173 |
| boost_tuple.test | RUN | 0.264109 | 0.769427 | 0.865137 | 0.001144 | 0.001188 | 0.001154 |
| boost_tuple_iterator.test | RUN | 0.175853 | 0.449878 | 0.514160 | 0.001194 | 0.001202 | 0.001329 |
| cons.test | RUN | 0.337075 | 0.897447 | 1.031873 | 0.001335 | 0.001281 | 0.001282 |
| convert_boost_tuple.test | RUN | 0.211088 | 0.672154 | 0.680025 | 0.001206 | 0.001328 | 0.001175 |
| convert_deque.test | RUN | 0.212414 | 0.672199 | 0.683626 | 0.000857 | 0.001191 | 0.001125 |
| convert_list.test | RUN | 0.210226 | 0.690066 | 0.697346 | 0.001286 | 0.001157 | 0.001117 |
| convert_std_pair.test | RUN | 0.220630 | 0.689438 | 0.705520 | 0.001410 | 0.001451 | 0.001160 |
| convert_std_tuple.test | RUN | 0.207967 | 0.669460 | 0.678746 | 0.000949 | 0.001211 | 0.001169 |
| convert_vector.test | RUN | 0.210972 | 0.662993 | 0.686274 | 0.001189 | 0.001078 | 0.001222 |
| filter_view.test | RUN | 0.250641 | 0.709153 | 0.814236 | 0.001203 | 0.001322 | 0.001287 |
| hash.test | RUN | 0.245244 | 0.631681 | 0.777915 | 0.001548 | 0.001395 | 0.001402 |
| io.test | RUN | 0.266160 | 0.903483 | 0.948884 | 0.001268 | 0.001581 | 0.001362 |
| iterator_range.test | RUN | 0.236939 | 0.676433 | 0.768169 | 0.001239 | 0.001300 | 0.001364 |
| joint_view.test | RUN | 0.324377 | 1.124351 | 1.196431 | 0.001499 | 0.001199 | 0.001201 |
| list_comparison.test | RUN | 0.191932 | 0.472716 | 0.575137 | 0.001318 | 0.001416 | 0.001296 |
| list_construction.test | RUN | 0.180762 | 0.436461 | 0.540848 | 0.001245 | 0.001365 | 0.001236 |
| list_copy.test | RUN | 0.272949 | 0.837261 | 0.963360 | 0.001153 | 0.001299 | 0.001262 |
| list_iterator.test | RUN | 0.181265 | 0.447929 | 0.524834 | 0.001252 | 0.001036 | 0.001118 |
| list_hash.test | RUN | 0.244296 | 0.945072 | 0.779216 | 0.001192 | 0.001229 | 0.001198 |
| list_make.test | RUN | 0.195302 | 0.501775 | 0.582844 | 0.001335 | 0.001192 | 0.001327 |
| list_misc.test | RUN | 0.247596 | 0.598966 | 0.728858 | 0.001256 | 0.001389 | 0.001340 |
| list_mutate.test | RUN | 0.172558 | 0.375015 | 0.479607 | 0.001148 | 0.001178 | 0.001226 |
| list_nest.test | RUN | 0.344173 | 1.148851 | 1.339356 | 0.001226 | 0.001324 | 0.001233 |
| list_tie.test | RUN | 0.182097 | 0.446995 | 0.534615 | 0.001235 | 0.001067 | 0.001362 |
| list_value_at.test | RUN | 0.173428 | 0.414848 | 0.527214 | 0.001270 | 0.001080 | 0.001322 |
| deque_comparison.test | RUN | 0.186191 | 0.465376 | 0.549491 | 0.001081 | 0.001250 | 0.001174 |
| deque_construction.test | RUN | 0.182042 | 0.450537 | 0.555207 | 0.001452 | 0.001493 | 0.001151 |
| deque_copy.test | RUN | 0.259927 | 0.789648 | 0.898485 | 0.001266 | 0.001343 | 0.001294 |
| deque_iterator.test | RUN | 0.183565 | 0.484754 | 0.526781 | 0.001308 | 0.001280 | 0.001217 |
| deque_hash.test | RUN | 0.240519 | 0.909665 | 0.783241 | 0.001116 | 0.001495 | 0.001246 |
| deque_is_constructible.test | COMPILE | 0.099922 | 0.203377 | 0.247498 | — | — | — |
| deque_make.test | RUN | 0.181430 | 0.485676 | 0.562267 | 0.001190 | 0.001342 | 0.001179 |
| deque_misc.test | RUN | 0.232078 | 0.581734 | 0.697041 | 0.001100 | 0.001248 | 0.001309 |
| deque_move.test | RUN | 0.184884 | 0.501851 | 0.548315 | 0.001089 | 0.001203 | 0.001263 |
| deque_mutate.test | RUN | 0.161174 | 0.395284 | 0.485365 | 0.001199 | 0.001280 | 0.001297 |
| deque_nest.test | RUN | 0.521069 | 1.879309 | 2.164897 | 0.001298 | 0.001238 | 0.001156 |
| deque_tie.test | RUN | 0.170839 | 0.422714 | 0.519779 | 0.001281 | 0.001342 | 0.001286 |
| deque_value_at.test | RUN | 0.172969 | 0.418230 | 0.489009 | 0.001067 | 0.001266 | 0.001188 |
| front_extended_deque.test | RUN | 0.248589 | 0.589089 | 0.743304 | 0.001176 | 0.001462 | 0.001343 |
| back_extended_deque.test | RUN | 0.247236 | 0.606067 | 0.784439 | 0.001198 | 0.001112 | 0.001198 |
| make_list.test | RUN | 0.202130 | 0.500959 | 0.582021 | 0.001246 | 0.001422 | 0.001380 |
| make_vector.test | RUN | 0.192762 | 0.491671 | 0.560394 | 0.001251 | 0.001474 | 0.001325 |
| map.test | RUN | 0.254979 | 0.761067 | 0.851458 | 0.001506 | 0.001368 | 0.001225 |
| map_comparison.test | RUN | 0.184206 | 0.482656 | 0.556498 | 0.001321 | 0.001382 | 0.001358 |
| map_construction.test | RUN | 0.189190 | 0.460445 | 0.561653 | 0.001285 | 0.001246 | 0.001244 |
| map_copy.test | RUN | 0.226520 | 0.596809 | 0.682892 | 0.001165 | 0.001377 | 0.001115 |
| map_misc.test | RUN | 0.236866 | 0.601985 | 0.695311 | 0.001010 | 0.001381 | 0.001331 |
| map_move.test | RUN | 0.190029 | 0.502103 | 0.561639 | 0.001308 | 0.001352 | 0.001118 |
| map_mutate.test | RUN | 0.164961 | 0.411222 | 0.478435 | 0.001157 | 0.001215 | 0.001038 |
| map_tie.test | RUN | 0.176607 | 0.396001 | 0.487648 | 0.001180 | 0.001217 | 0.001285 |
| nil.test | RUN | 0.116189 | 0.287010 | 0.354185 | 0.001476 | 0.001155 | 0.001187 |
| nview.test | RUN | 0.236046 | 0.574781 | 0.724733 | 0.001215 | 0.001327 | 0.001324 |
| reverse_view.test | RUN | 0.309446 | 0.962325 | 1.065174 | 0.001248 | 0.001329 | 0.001209 |
| segmented_iterator_range.test | RUN | 0.364221 | 1.163979 | 1.348574 | 0.001242 | 0.001588 | 0.001200 |
| set.test | RUN | 0.230189 | 0.664683 | 0.741503 | 0.001232 | 0.001329 | 0.001290 |
| single_view.test | RUN | 0.213019 | 0.608095 | 0.683206 | 0.001238 | 0.001492 | 0.001280 |
| std_pair.test | RUN | 0.269317 | 0.773720 | 0.880801 | 0.001207 | 0.001242 | 0.001149 |
| boost_array.test | RUN | 0.228220 | 0.532341 | 0.641534 | 0.001370 | 0.001365 | 0.001193 |
| array.test | RUN | 0.219001 | 0.532742 | 0.646071 | 0.001182 | 0.001402 | 0.001200 |
| std_array.test | RUN | 0.223366 | 0.516723 | 0.624918 | 0.001247 | 0.001384 | 0.001271 |
| tuple_comparison.test | RUN | 0.194454 | 0.507637 | 0.590377 | 0.001318 | 0.001353 | 0.001128 |
| tuple_construction.test | RUN | 0.207460 | 0.502097 | 0.584533 | 0.001240 | 0.001326 | 0.001226 |
| tuple_conversion.test | RUN | 0.447046 | 1.551144 | 2.009872 | 0.001187 | 0.001359 | 0.001326 |
| tuple_copy.test | RUN | 0.291680 | 0.889133 | 1.035515 | 0.001226 | 0.001311 | 0.001021 |
| tuple_element.test | RUN | 0.183969 | 0.448088 | 0.565821 | 0.001183 | 0.001425 | 0.001342 |
| tuple_make.test | RUN | 0.203045 | 0.523262 | 0.606580 | 0.001290 | 0.001162 | 0.001313 |
| tuple_misc.test | RUN | 0.253099 | 0.635890 | 0.750309 | 0.001232 | 0.001238 | 0.001087 |
| tuple_mutate.test | RUN | 0.179304 | 0.421960 | 0.518878 | 0.001622 | 0.001208 | 0.001334 |
| tuple_nest.test | RUN | 0.774893 | 3.194721 | 3.852915 | 0.001153 | 0.001380 | 0.001256 |
| tuple_hash.test | RUN | 0.261146 | 0.943588 | 0.802513 | 0.001327 | 0.001264 | 0.001307 |
| tuple_tie.test | RUN | 0.187370 | 0.463295 | 0.562452 | 0.001188 | 0.001483 | 0.001272 |
| tuple_traits__maybe_variadic.test | RUN | 0.204647 | 0.566050 | 0.599788 | 0.001124 | 0.001302 | 0.001234 |
| tuple_traits__no_variadic.test | RUN | 0.223406 | 0.575601 | 0.651746 | 0.001284 | 0.001393 | 0.001356 |
| transform_view.test | RUN | 0.303518 | 0.963433 | 1.076614 | 0.001448 | 0.001390 | 0.001292 |
| identity_view.test | RUN | 0.289911 | 0.916449 | 1.009340 | 0.001213 | 0.001194 | 0.001349 |
| vector_comparison.test | RUN | 0.186976 | 0.476212 | 0.566080 | 0.001102 | 0.001280 | 0.001297 |
| vector_construction.test | RUN | 0.184813 | 0.450864 | 0.541620 | 0.001135 | 0.001340 | 0.001352 |
| vector_conversion.test | RUN | 0.539211 | 2.089723 | 2.598963 | 0.001415 | 0.001472 | 0.001204 |
| vector_copy.test | RUN | 0.286591 | 0.875860 | 1.019390 | 0.001327 | 0.001414 | 0.001310 |
| vector_iterator.test | RUN | 0.175934 | 0.474334 | 0.556693 | 0.001304 | 0.001397 | 0.001374 |
| vector_make.test | RUN | 0.185371 | 0.488813 | 0.581893 | 0.001363 | 0.001351 | 0.001327 |
| vector_misc.test | RUN | 0.241572 | 0.602215 | 0.710436 | 0.001236 | 0.001246 | 0.001394 |
| vector_move.test | RUN | 0.182894 | 0.505405 | 0.554433 | 0.001173 | 0.001284 | 0.001280 |
| vector_mutate.test | RUN | 0.169975 | 0.401460 | 0.537396 | 0.001259 | 0.001224 | 0.001404 |
| vector_n.test | RUN | 0.211696 | 0.507585 | 0.647257 | 0.001453 | 0.001546 | 0.001401 |
| vector_nest.test | RUN | 0.777783 | 3.455058 | 3.801638 | 0.001230 | 0.001471 | 0.001319 |
| vector_hash.test | RUN | 0.248564 | 0.920139 | 0.756172 | 0.001248 | 0.001550 | 0.001297 |
| vector_tie.test | RUN | 0.178446 | 0.453344 | 0.531964 | 0.001328 | 0.001411 | 0.001416 |
| vector_traits__maybe_variadic.test | RUN | 0.186319 | 0.509679 | 0.565806 | 0.001254 | 0.001381 | 0.001196 |
| vector_traits__no_variadic.test | RUN | 0.205394 | 0.554382 | 0.579452 | 0.001257 | 0.001262 | 0.001060 |
| vector_value_at.test | RUN | 0.175388 | 0.401702 | 0.507522 | 0.001152 | 0.001361 | 0.001275 |
| zip_view.test | RUN | 0.351631 | 1.005590 | 1.321228 | 0.001376 | 0.001136 | 0.001303 |
| zip_view2.test | RUN | 0.287960 | 0.773626 | 0.981276 | 0.001256 | 0.001201 | 0.001318 |
| zip_view_ignore.test | RUN | 0.276904 | 0.714124 | 0.876871 | 0.001372 | 0.001198 | 0.000851 |
| repetitive_view.test | RUN | 0.465571 | 1.305437 | 1.667312 | 0.001256 | 0.001450 | 0.001179 |
| deduce_sequence.test | RUN | 0.219453 | 0.549469 | 0.658608 | 0.001170 | 0.001421 | 0.001346 |
| adapt_adt_named.test | RUN | 0.268007 | 0.786652 | 0.901010 | 0.001166 | 0.001259 | 0.001291 |
| adapt_adt_named_empty.test | RUN | 0.233888 | 0.630929 | 0.700333 | 0.001268 | 0.001438 | 0.001130 |
| adapt_adt.test | RUN | 0.300250 | 1.038553 | 1.040266 | 0.001293 | 0.001299 | 0.001233 |
| adapt_adt_empty.test | RUN | 0.230397 | 0.616789 | 0.690392 | 0.001282 | 0.001466 | 0.001345 |
| adapt_assoc_adt_named.test | RUN | 0.301490 | 0.805506 | 0.926353 | 0.001121 | 0.001282 | 0.001142 |
| adapt_assoc_adt_named_empty.test | RUN | 0.236727 | 0.622820 | 0.696144 | 0.001284 | 0.001246 | 0.001306 |
| adapt_assoc_adt.test | RUN | 0.302024 | 0.837554 | 0.947559 | 0.001338 | 0.001456 | 0.001117 |
| adapt_assoc_adt_empty.test | RUN | 0.232416 | 0.621205 | 0.698547 | 0.001288 | 0.001514 | 0.001238 |
| adapt_assoc_struct_named.test | RUN | 0.291096 | 0.803823 | 0.891814 | 0.001172 | 0.001358 | 0.001240 |
| adapt_assoc_struct_named_empty.test | RUN | 0.232174 | 0.622503 | 0.687019 | 0.001306 | 0.001338 | 0.001170 |
| adapt_assoc_struct.test | RUN | 0.259082 | 0.747808 | 0.832344 | 0.001352 | 0.001328 | 0.001146 |
| adapt_assoc_struct_empty.test | RUN | 0.222238 | 0.617791 | 0.687444 | 0.001173 | 0.001306 | 0.001527 |
| adapt_assoc_tpl_adt.test | RUN | 0.312840 | 0.873073 | 0.978941 | 0.001189 | 0.001350 | 0.001259 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.232811 | 0.630367 | 0.699966 | 0.001151 | 0.001365 | 0.001214 |
| adapt_assoc_tpl_struct.test | RUN | 0.258753 | 0.740731 | 0.811483 | 0.001164 | 0.001503 | 0.001205 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.227122 | 0.626471 | 0.701294 | 0.001398 | 0.001425 | 0.001147 |
| adapt_struct_named.test | RUN | 0.261217 | 0.777799 | 0.823758 | 0.001319 | 0.001563 | 0.001356 |
| adapt_struct_named_empty.test | RUN | 0.228228 | 0.620085 | 0.690429 | 0.001128 | 0.001491 | 0.001261 |
| adapt_struct.test | RUN | 0.282595 | 0.860674 | 0.956844 | 0.001247 | 0.001511 | 0.001224 |
| adapt_struct_empty.test | RUN | 0.225910 | 0.622589 | 0.694768 | 0.001323 | 0.001297 | 0.001140 |
| adapt_tpl_adt.test | RUN | 0.292492 | 1.015493 | 1.007197 | 0.001353 | 0.001180 | 0.001292 |
| adapt_tpl_adt_empty.test | RUN | 0.224653 | 0.623539 | 0.692977 | 0.001168 | 0.001490 | 0.001246 |
| adapt_tpl_struct.test | RUN | 0.239768 | 0.701172 | 0.772415 | 0.001248 | 0.001354 | 0.001139 |
| adapt_tpl_struct_empty.test | RUN | 0.222206 | 0.627802 | 0.712706 | 0.000996 | 0.001173 | 0.001163 |
| adt_attribute_proxy.test | RUN | 0.249278 | 0.614954 | 0.726961 | 0.001210 | 0.001510 | 0.001233 |
| define_struct.test | RUN | 0.309502 | 0.847153 | 0.987999 | 0.001314 | 0.001199 | 0.001300 |
| define_struct_empty.test | RUN | 0.278255 | 0.702675 | 0.819853 | 0.001418 | 0.001318 | 0.001209 |
| define_struct_move.test | RUN | 0.172756 | 0.397994 | 0.469145 | 0.001128 | 0.001408 | 0.001165 |
| define_struct_inline.test | RUN | 0.340739 | 1.028321 | 1.092373 | 0.001506 | 0.001326 | 0.001303 |
| define_struct_inline_empty.test | RUN | 0.272292 | 0.703059 | 0.804861 | 0.001216 | 0.001215 | 0.001255 |
| define_struct_inline_move.test | RUN | 0.172677 | 0.396292 | 0.480342 | 0.001188 | 0.001392 | 0.001148 |
| define_assoc_struct.test | RUN | 0.303456 | 0.821461 | 0.919809 | 0.001439 | 0.001359 | 0.001236 |
| define_assoc_struct_empty.test | RUN | 0.271240 | 0.706139 | 0.810459 | 0.001472 | 0.001414 | 0.001373 |
| define_assoc_struct_move.test | RUN | 0.177059 | 0.395133 | 0.470577 | 0.001500 | 0.001505 | 0.001322 |
| define_tpl_struct.test | RUN | 0.298406 | 0.825980 | 0.945086 | 0.001115 | 0.001346 | 0.001355 |
| define_tpl_struct_empty.test | RUN | 0.270024 | 0.716539 | 0.810213 | 0.001473 | 0.001500 | 0.001263 |
| define_tpl_struct_move.test | RUN | 0.174332 | 0.394691 | 0.475386 | 0.001167 | 0.001389 | 0.001209 |
| define_tpl_struct_inline.test | RUN | 0.310821 | 0.979671 | 1.029052 | 0.001267 | 0.001390 | 0.001146 |
| define_tpl_struct_inline_empty.test | RUN | 0.267087 | 0.707073 | 0.814728 | 0.001251 | 0.001376 | 0.001288 |
| define_tpl_struct_inline_move.test | RUN | 0.173613 | 0.406617 | 0.487764 | 0.001142 | 0.001463 | 0.001221 |
| define_assoc_tpl_struct.test | RUN | 0.297376 | 0.844961 | 0.943847 | 0.001254 | 0.001459 | 0.001261 |
| define_assoc_tpl_struct_empty.test | RUN | 0.268344 | 0.708121 | 0.824135 | 0.001332 | 0.001376 | 0.001181 |
| define_assoc_tpl_struct_move.test | RUN | 0.177007 | 0.406380 | 0.482296 | 0.001122 | 0.001478 | 0.001359 |
| std_tuple.test | RUN | 0.177853 | 0.440416 | 0.530465 | 0.001169 | 0.001446 | 0.001362 |
| std_tuple_iterator.test | RUN | 0.179721 | 0.470750 | 0.544666 | 0.001202 | 0.001533 | 0.001330 |
| ref_vector.test | RUN | 0.209261 | 0.471987 | 0.579924 | 0.001254 | 0.001499 | 0.001216 |
| flatten_view.test | RUN | 0.219790 | 0.593891 | 0.683345 | 0.001222 | 0.001317 | 0.001255 |
| github-159.test | COMPILE | 0.097733 | 0.216754 | 0.252198 | — | — | — |
| github-176.test | RUN | 0.205957 | 0.535938 | 0.582136 | 0.001352 | 0.001327 | 0.001286 |
| size.test | COMPILE | 0.166678 | 0.363211 | 0.453756 | — | — | — |
| fused.test | RUN | 0.237983 | 0.557563 | 0.677451 | 0.001230 | 0.001538 | 0.001386 |
| fused_function_object.test | RUN | 0.177243 | 0.429959 | 0.508231 | 0.001186 | 0.001269 | 0.001129 |
| fused_procedure.test | RUN | 0.229661 | 0.530090 | 0.637613 | 0.001136 | 0.001318 | 0.001102 |
| unfused.test | RUN | 0.189881 | 0.439524 | 0.535232 | 0.001225 | 0.001264 | 0.001229 |
| unfused_typed.test | RUN | 0.187136 | 0.475518 | 0.552653 | 0.001405 | 0.001308 | 0.001269 |
| make_fused.test | RUN | 0.240834 | 0.551544 | 0.671579 | 0.001115 | 0.001270 | 0.001044 |
| make_fused_function_object.test | RUN | 0.183262 | 0.439146 | 0.515673 | 0.001197 | 0.001253 | 0.001281 |
| make_fused_procedure.test | RUN | 0.232435 | 0.540789 | 0.653950 | 0.001243 | 0.001230 | 0.001404 |
| make_unfused.test | RUN | 0.177660 | 0.430402 | 0.535893 | 0.001285 | 0.001323 | 0.001258 |
| invoke.test | RUN | 0.474713 | 1.585935 | 1.805889 | 0.001353 | 0.001315 | 0.001078 |
| invoke_function_object.test | RUN | 0.223215 | 0.567011 | 0.675667 | 0.001437 | 0.001487 | 0.001298 |
| invoke_procedure.test | RUN | 0.381408 | 1.178824 | 1.341404 | 0.001246 | 0.001308 | 0.001231 |
| swap.test | RUN | 0.281315 | 0.687932 | 0.856064 | 0.001206 | 0.001493 | 0.001328 |
| is_sequence.test | COMPILE | 0.047184 | 0.099936 | 0.107107 | — | — | — |
| is_view.test | COMPILE | 0.046898 | 0.099568 | 0.107392 | — | — | — |
| pair_deque.test | COMPILE | 0.099427 | 0.221738 | 0.264585 | — | — | — |
| pair_list.test | COMPILE | 0.098562 | 0.222154 | 0.260808 | — | — | — |
| pair_map.test | COMPILE | 0.104325 | 0.229357 | 0.257718 | — | — | — |
| pair_set.test | COMPILE | 0.104375 | 0.229844 | 0.260685 | — | — | — |
| pair_vector.test | COMPILE | 0.102514 | 0.223145 | 0.255950 | — | — | — |
| pair_nest.test | COMPILE | 0.040565 | 0.089558 | 0.097737 | — | — | — |
| index_sequence.test | COMPILE | 0.034235 | 0.062556 | 0.074075 | — | — | — |
| and.test | COMPILE | 0.025948 | 0.049503 | 0.053878 | — | — | — |
| tag_of.test | COMPILE | 0.046420 | 0.094450 | 0.099501 | — | — | — |
| unused.test | COMPILE | 0.024384 | 0.062237 | 0.059894 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.039172 | 0.096026 | 0.090490 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.034427 | 0.089574 | 0.084921 | — | — | — |
| quick.test | RUN | 0.141527 | 0.308143 | 0.340809 | 0.000389 | 0.000886 | 0.000823 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.003× | 0.996×, 1.011× | 1.006× |
| clang | 1.006× | 1.007×, 1.005× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46092715613).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.000840s | 0.000826s | 0.000862s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.000831s | 0.000835s | 0.000807s | byte equality observed |
| adapt_adt_named.test | 10 | 0.000860s | 0.000845s | 0.000837s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.000797s | 0.000846s | 0.000841s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.000818s | 0.000844s | 0.000834s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.000821s | 0.000853s | 0.000837s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.000843s | 0.000849s | 0.000830s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.000831s | 0.000840s | 0.000831s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.000829s | 0.000848s | 0.000818s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.000826s | 0.000868s | 0.000824s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.000831s | 0.000859s | 0.000839s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.000823s | 0.000856s | 0.000857s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.000839s | 0.000816s | 0.000824s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.000853s | 0.000832s | 0.000841s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.000855s | 0.000850s | 0.000848s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.000845s | 0.000842s | 0.000824s | byte equality observed |
| adapt_struct.test | 10 | 0.000846s | 0.000859s | 0.000843s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.000852s | 0.000858s | 0.000854s | byte equality observed |
| adapt_struct_named.test | 10 | 0.000818s | 0.000856s | 0.000861s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.000832s | 0.000822s | 0.000819s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.000840s | 0.000824s | 0.000835s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.000849s | 0.000834s | 0.000804s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.000849s | 0.000829s | 0.000842s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.000830s | 0.000807s | 0.000853s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.000823s | 0.000792s | 0.000835s | byte equality observed |
| all.test | 10 | 0.000824s | 0.000821s | 0.000836s | byte equality observed |
| any.test | 10 | 0.000820s | 0.000801s | 0.000814s | byte equality observed |
| array.test | 10 | 0.000809s | 0.000826s | 0.000812s | byte equality observed |
| as_deque.test | 10 | 0.000822s | 0.000821s | 0.000843s | byte equality observed |
| as_list.test | 10 | 0.000838s | 0.000880s | 0.000838s | byte equality observed |
| as_map.test | 10 | 0.000827s | 0.000847s | 0.000842s | byte equality observed |
| as_map_assoc.test | 10 | 0.000830s | 0.000836s | 0.000856s | byte equality observed |
| as_set.test | 10 | 0.000861s | 0.000860s | 0.000861s | byte equality observed |
| as_vector.test | 10 | 0.000867s | 0.000844s | 0.000869s | byte equality observed |
| back_extended_deque.test | 10 | 0.000799s | 0.000834s | 0.000809s | byte equality observed |
| boost_array.test | 10 | 0.000814s | 0.000809s | 0.000842s | byte equality observed |
| boost_tuple.test | 10 | 0.000821s | 0.000837s | 0.000832s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.000809s | 0.000845s | 0.000830s | byte equality observed |
| clear.test | 10 | 0.000833s | 0.000814s | 0.000852s | byte equality observed |
| cons.test | 10 | 0.000869s | 0.000861s | 0.000823s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.000825s | 0.000860s | 0.000825s | byte equality observed |
| convert_deque.test | 10 | 0.000799s | 0.000820s | 0.000808s | byte equality observed |
| convert_list.test | 10 | 0.000797s | 0.000817s | 0.000827s | byte equality observed |
| convert_std_pair.test | 10 | 0.000797s | 0.000806s | 0.000836s | byte equality observed |
| convert_std_tuple.test | 10 | 0.000832s | 0.000818s | 0.000834s | byte equality observed |
| convert_vector.test | 10 | 0.000828s | 0.000814s | 0.000819s | byte equality observed |
| copy.test | 10 | 0.000813s | 0.000807s | 0.000832s | byte equality observed |
| count.test | 10 | 0.000828s | 0.000825s | 0.000821s | byte equality observed |
| count_if.test | 10 | 0.000812s | 0.000818s | 0.000805s | byte equality observed |
| deduce_sequence.test | 10 | 0.000810s | 0.000825s | 0.000804s | byte equality observed |
| define_assoc_struct.test | 10 | 0.000824s | 0.000857s | 0.000812s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.000812s | 0.000842s | 0.000836s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.000795s | 0.000821s | 0.000842s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.000840s | 0.000838s | 0.000833s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.000832s | 0.000842s | 0.000808s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000823s | 0.000811s | 0.000797s | byte equality observed |
| define_struct.test | 10 | 0.000812s | 0.000823s | 0.000826s | byte equality observed |
| define_struct_empty.test | 10 | 0.000839s | 0.000860s | 0.000812s | byte equality observed |
| define_struct_inline.test | 10 | 0.000822s | 0.000854s | 0.000814s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.000825s | 0.000818s | 0.000821s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000802s | 0.000824s | 0.000833s | byte equality observed |
| define_struct_move.test | 10 | 0.000806s | 0.000835s | 0.000817s | byte equality observed |
| define_tpl_struct.test | 10 | 0.000856s | 0.000821s | 0.000822s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.000872s | 0.000813s | 0.000832s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.000839s | 0.000852s | 0.000844s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.000833s | 0.000837s | 0.000805s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000815s | 0.000837s | 0.000793s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000822s | 0.000855s | 0.000797s | byte equality observed |
| deque_comparison.test | 10 | 0.000819s | 0.000864s | 0.000777s | byte equality observed |
| deque_construction.test | 10 | 0.000797s | 0.000817s | 0.000824s | byte equality observed |
| deque_copy.test | 10 | 0.000829s | 0.000813s | 0.000787s | byte equality observed |
| deque_hash.test | 10 | 0.000816s | 0.000833s | 0.000821s | byte equality observed |
| deque_iterator.test | 10 | 0.000822s | 0.000815s | 0.000812s | byte equality observed |
| deque_make.test | 10 | 0.000826s | 0.000826s | 0.000811s | byte equality observed |
| deque_misc.test | 10 | 0.000821s | 0.000841s | 0.000817s | byte equality observed |
| deque_move.test | 10 | 0.000831s | 0.000835s | 0.000818s | byte equality observed |
| deque_mutate.test | 10 | 0.000838s | 0.000806s | 0.000802s | byte equality observed |
| deque_nest.test | 10 | 0.000816s | 0.000819s | 0.000808s | byte equality observed |
| deque_tie.test | 10 | 0.000807s | 0.000851s | 0.000827s | byte equality observed |
| deque_value_at.test | 10 | 0.000839s | 0.000835s | 0.000819s | byte equality observed |
| erase.test | 10 | 0.000817s | 0.000852s | 0.000789s | byte equality observed |
| erase_key.test | 10 | 0.000844s | 0.000867s | 0.000865s | byte equality observed |
| filter.test | 10 | 0.000824s | 0.000845s | 0.000834s | byte equality observed |
| filter_if.test | 10 | 0.000854s | 0.000856s | 0.000854s | byte equality observed |
| filter_view.test | 10 | 0.000825s | 0.000866s | 0.000839s | byte equality observed |
| find.test | 10 | 0.000835s | 0.000848s | 0.000860s | byte equality observed |
| find_if.test | 10 | 0.000832s | 0.000872s | 0.000833s | byte equality observed |
| flatten.test | 10 | 0.000825s | 0.000846s | 0.000812s | byte equality observed |
| flatten_view.test | 10 | 0.000835s | 0.000834s | 0.000835s | byte equality observed |
| fold.test | 10 | 0.000824s | 0.000841s | 0.000847s | byte equality observed |
| for_each.test | 10 | 0.000837s | 0.000829s | 0.000838s | byte equality observed |
| front_extended_deque.test | 10 | 0.000824s | 0.000825s | 0.000834s | byte equality observed |
| fused.test | 10 | 0.000806s | 0.000819s | 0.000814s | byte equality observed |
| fused_function_object.test | 10 | 0.000840s | 0.000832s | 0.000801s | byte equality observed |
| fused_procedure.test | 10 | 0.000845s | 0.000804s | 0.000809s | byte equality observed |
| github-176.test | 10 | 0.000837s | 0.000815s | 0.000798s | byte equality observed |
| hash.test | 10 | 0.000808s | 0.000806s | 0.000824s | byte equality observed |
| identity_view.test | 10 | 0.000845s | 0.000847s | 0.000821s | byte equality observed |
| insert.test | 10 | 0.000837s | 0.000901s | 0.000851s | byte equality observed |
| insert_range.test | 10 | 0.000836s | 0.000872s | 0.000848s | byte equality observed |
| invoke.test | 10 | 0.000797s | 0.000815s | 0.000857s | byte equality observed |
| invoke_function_object.test | 10 | 0.000821s | 0.000817s | 0.000845s | byte equality observed |
| invoke_procedure.test | 10 | 0.000807s | 0.000812s | 0.000824s | byte equality observed |
| io.test | 10 | 0.000896s | 0.000887s | 0.000895s | byte equality observed |
| iter_fold.test | 10 | 0.000804s | 0.000827s | 0.000839s | byte equality observed |
| iterator_range.test | 10 | 0.000841s | 0.000847s | 0.000836s | byte equality observed |
| join.test | 10 | 0.000823s | 0.000820s | 0.000801s | byte equality observed |
| joint_view.test | 10 | 0.000868s | 0.000848s | 0.000834s | byte equality observed |
| list_comparison.test | 10 | 0.000818s | 0.000818s | 0.000825s | byte equality observed |
| list_construction.test | 10 | 0.000805s | 0.000825s | 0.000814s | byte equality observed |
| list_copy.test | 10 | 0.000805s | 0.000833s | 0.000814s | byte equality observed |
| list_hash.test | 10 | 0.000825s | 0.000855s | 0.000837s | byte equality observed |
| list_iterator.test | 10 | 0.000821s | 0.000842s | 0.000815s | byte equality observed |
| list_make.test | 10 | 0.000840s | 0.000857s | 0.000790s | byte equality observed |
| list_misc.test | 10 | 0.000803s | 0.000849s | 0.000812s | byte equality observed |
| list_mutate.test | 10 | 0.000821s | 0.000842s | 0.000806s | byte equality observed |
| list_nest.test | 10 | 0.000810s | 0.000838s | 0.000788s | byte equality observed |
| list_tie.test | 10 | 0.000825s | 0.000832s | 0.000828s | byte equality observed |
| list_value_at.test | 10 | 0.000817s | 0.000793s | 0.000802s | byte equality observed |
| make_fused.test | 10 | 0.000820s | 0.000821s | 0.000808s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000806s | 0.000838s | 0.000806s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000812s | 0.000822s | 0.000837s | byte equality observed |
| make_list.test | 10 | 0.000839s | 0.000823s | 0.000841s | byte equality observed |
| make_unfused.test | 10 | 0.000843s | 0.000822s | 0.000834s | byte equality observed |
| make_vector.test | 10 | 0.000838s | 0.000848s | 0.000849s | byte equality observed |
| map.test | 10 | 0.000825s | 0.000834s | 0.000835s | byte equality observed |
| map_comparison.test | 10 | 0.000815s | 0.000791s | 0.000859s | byte equality observed |
| map_construction.test | 10 | 0.000803s | 0.000800s | 0.000821s | byte equality observed |
| map_copy.test | 10 | 0.000802s | 0.000833s | 0.000811s | byte equality observed |
| map_misc.test | 10 | 0.000807s | 0.000840s | 0.000815s | byte equality observed |
| map_move.test | 10 | 0.000815s | 0.000847s | 0.000829s | byte equality observed |
| map_mutate.test | 10 | 0.000805s | 0.000811s | 0.000819s | byte equality observed |
| map_tie.test | 10 | 0.000832s | 0.000827s | 0.000828s | byte equality observed |
| move.test | 10 | 0.000832s | 0.000831s | 0.000819s | byte equality observed |
| nil.test | 10 | 0.000812s | 0.000828s | 0.000792s | byte equality observed |
| none.test | 10 | 0.000803s | 0.000840s | 0.000805s | byte equality observed |
| nview.test | 10 | 0.000829s | 0.000835s | 0.000810s | byte equality observed |
| pop_back.test | 10 | 0.000855s | 0.000848s | 0.000851s | byte equality observed |
| pop_front.test | 10 | 0.000844s | 0.000829s | 0.000852s | byte equality observed |
| push_back.test | 10 | 0.000851s | 0.000857s | 0.000815s | byte equality observed |
| push_front.test | 10 | 0.000854s | 0.000847s | 0.000826s | byte equality observed |
| quick.test | 10 | 0.000361s | 0.000796s | 0.000819s | byte equality observed |
| ref_vector.test | 10 | 0.000819s | 0.000827s | 0.000792s | byte equality observed |
| remove.test | 10 | 0.000846s | 0.000817s | 0.000814s | byte equality observed |
| remove_if.test | 10 | 0.000868s | 0.000828s | 0.000823s | byte equality observed |
| repetitive_view.test | 10 | 0.000848s | 0.000846s | 0.000794s | byte equality observed |
| replace.test | 10 | 0.000842s | 0.000822s | 0.000807s | byte equality observed |
| replace_if.test | 10 | 0.000844s | 0.000841s | 0.000838s | byte equality observed |
| reverse.test | 10 | 0.000861s | 0.000857s | 0.000843s | byte equality observed |
| reverse_fold.test | 10 | 0.000845s | 0.000829s | 0.000811s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.000844s | 0.000828s | 0.000838s | byte equality observed |
| reverse_view.test | 10 | 0.000852s | 0.000861s | 0.000840s | byte equality observed |
| segmented_find.test | 10 | 0.000826s | 0.000848s | 0.000852s | byte equality observed |
| segmented_find_if.test | 10 | 0.000823s | 0.000810s | 0.000782s | byte equality observed |
| segmented_fold.test | 10 | 0.000835s | 0.000863s | 0.000834s | byte equality observed |
| segmented_for_each.test | 10 | 0.000853s | 0.000842s | 0.000866s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.000858s | 0.000857s | 0.000893s | byte equality observed |
| set.test | 10 | 0.000847s | 0.000846s | 0.000842s | byte equality observed |
| single_view.test | 10 | 0.000827s | 0.000841s | 0.000863s | byte equality observed |
| std_array.test | 10 | 0.000822s | 0.000839s | 0.000829s | byte equality observed |
| std_pair.test | 10 | 0.000836s | 0.000813s | 0.000853s | byte equality observed |
| std_tuple.test | 10 | 0.000796s | 0.000803s | 0.000840s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.000811s | 0.000786s | 0.000802s | byte equality observed |
| swap.test | 10 | 0.000825s | 0.000813s | 0.000815s | byte equality observed |
| transform.test | 10 | 0.000841s | 0.000828s | 0.000814s | byte equality observed |
| transform_view.test | 10 | 0.000848s | 0.000858s | 0.000861s | byte equality observed |
| tuple_comparison.test | 10 | 0.000813s | 0.000816s | 0.000843s | byte equality observed |
| tuple_construction.test | 10 | 0.000794s | 0.000819s | 0.000813s | byte equality observed |
| tuple_conversion.test | 10 | 0.000798s | 0.000828s | 0.000850s | byte equality observed |
| tuple_copy.test | 10 | 0.000839s | 0.000830s | 0.000847s | byte equality observed |
| tuple_element.test | 10 | 0.000836s | 0.000821s | 0.000841s | byte equality observed |
| tuple_hash.test | 10 | 0.000811s | 0.000836s | 0.000838s | byte equality observed |
| tuple_make.test | 10 | 0.000819s | 0.000877s | 0.000793s | byte equality observed |
| tuple_misc.test | 10 | 0.000838s | 0.000834s | 0.000799s | byte equality observed |
| tuple_mutate.test | 10 | 0.000796s | 0.000837s | 0.000817s | byte equality observed |
| tuple_nest.test | 10 | 0.000818s | 0.000855s | 0.000810s | byte equality observed |
| tuple_tie.test | 10 | 0.000829s | 0.000863s | 0.000796s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.000815s | 0.000830s | 0.000801s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.000812s | 0.000829s | 0.000824s | byte equality observed |
| unfused.test | 10 | 0.000808s | 0.000815s | 0.000804s | byte equality observed |
| unfused_typed.test | 10 | 0.000847s | 0.000822s | 0.000819s | byte equality observed |
| vector_comparison.test | 10 | 0.000817s | 0.000809s | 0.000825s | byte equality observed |
| vector_construction.test | 10 | 0.000821s | 0.000803s | 0.000821s | byte equality observed |
| vector_conversion.test | 10 | 0.000820s | 0.000806s | 0.000834s | byte equality observed |
| vector_copy.test | 10 | 0.000827s | 0.000803s | 0.000820s | byte equality observed |
| vector_hash.test | 10 | 0.000810s | 0.000821s | 0.000809s | byte equality observed |
| vector_iterator.test | 10 | 0.000819s | 0.000803s | 0.000832s | byte equality observed |
| vector_make.test | 10 | 0.000823s | 0.000816s | 0.000863s | byte equality observed |
| vector_misc.test | 10 | 0.000814s | 0.000843s | 0.000799s | byte equality observed |
| vector_move.test | 10 | 0.000828s | 0.000844s | 0.000813s | byte equality observed |
| vector_mutate.test | 10 | 0.000788s | 0.000821s | 0.000817s | byte equality observed |
| vector_n.test | 10 | 0.000835s | 0.000847s | 0.000822s | byte equality observed |
| vector_nest.test | 10 | 0.000812s | 0.000803s | 0.000801s | byte equality observed |
| vector_tie.test | 10 | 0.000814s | 0.000807s | 0.000801s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000799s | 0.000798s | 0.000805s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000799s | 0.000814s | 0.000796s | byte equality observed |
| vector_value_at.test | 10 | 0.000820s | 0.000815s | 0.000799s | byte equality observed |
| zip.test | 10 | 0.000805s | 0.000804s | 0.000807s | byte equality observed |
| zip2.test | 10 | 0.000799s | 0.000825s | 0.000843s | byte equality observed |
| zip_ignore.test | 10 | 0.000804s | 0.000832s | 0.000828s | byte equality observed |
| zip_view.test | 10 | 0.000806s | 0.000829s | 0.000799s | byte equality observed |
| zip_view2.test | 10 | 0.000808s | 0.000790s | 0.000808s | byte equality observed |
| zip_view_ignore.test | 10 | 0.000793s | 0.000794s | 0.000799s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46092715613).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
