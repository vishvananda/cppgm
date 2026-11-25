# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.283473 | 0.646816 | 0.831073 | 0.001300 | 0.001288 | 0.001258 |
| any.test | RUN | 0.274971 | 0.603513 | 0.776513 | 0.001385 | 0.001254 | 0.001378 |
| clear.test | RUN | 0.208747 | 0.572168 | 0.638962 | 0.001570 | 0.001310 | 0.001330 |
| copy.test | RUN | 0.174258 | 0.416633 | 0.530379 | 0.001262 | 0.001506 | 0.001335 |
| count.test | RUN | 0.193088 | 0.465282 | 0.581002 | 0.001354 | 0.001434 | 0.001247 |
| count_if.test | RUN | 0.179310 | 0.418052 | 0.528045 | 0.001211 | 0.001566 | 0.001283 |
| erase.test | RUN | 0.263389 | 0.783212 | 0.863539 | 0.001306 | 0.001447 | 0.001240 |
| erase_key.test | RUN | 0.255860 | 0.769938 | 0.816257 | 0.001425 | 0.001458 | 0.001220 |
| filter.test | RUN | 0.233962 | 0.640921 | 0.737748 | 0.001399 | 0.001496 | 0.001352 |
| filter_if.test | RUN | 0.262830 | 0.757869 | 0.871081 | 0.001403 | 0.001217 | 0.001235 |
| find.test | RUN | 0.227282 | 0.513617 | 0.657571 | 0.001460 | 0.001296 | 0.001159 |
| find_if.test | RUN | 0.213677 | 0.470932 | 0.608402 | 0.001374 | 0.001300 | 0.001200 |
| fold.test | RUN | 0.236617 | 0.586806 | 0.739670 | 0.001412 | 0.001337 | 0.001206 |
| for_each.test | RUN | 0.211519 | 0.532478 | 0.638793 | 0.001283 | 0.001540 | 0.001232 |
| insert.test | RUN | 0.307916 | 0.961233 | 1.050603 | 0.001364 | 0.001283 | 0.001314 |
| insert_range.test | RUN | 0.310223 | 0.968561 | 1.054341 | 0.001312 | 0.001578 | 0.001354 |
| iter_fold.test | RUN | 0.362004 | 0.900865 | 1.251709 | 0.001417 | 0.001526 | 0.001384 |
| move.test | RUN | 0.176732 | 0.424122 | 0.541325 | 0.001489 | 0.001298 | 0.001106 |
| none.test | RUN | 0.285385 | 0.614671 | 0.802108 | 0.001438 | 0.001371 | 0.001285 |
| pop_back.test | RUN | 0.281077 | 0.840267 | 0.930173 | 0.001203 | 0.001360 | 0.001213 |
| pop_front.test | RUN | 0.250380 | 0.685197 | 0.761979 | 0.001452 | 0.001589 | 0.001220 |
| push_back.test | RUN | 0.302592 | 0.965761 | 1.029683 | 0.001309 | 0.001513 | 0.001353 |
| push_front.test | RUN | 0.270408 | 0.803146 | 0.873460 | 0.001272 | 0.001334 | 0.001220 |
| remove.test | RUN | 0.298870 | 0.909938 | 1.006401 | 0.001400 | 0.001520 | 0.001184 |
| remove_if.test | RUN | 0.261460 | 0.761542 | 0.859428 | 0.001581 | 0.001286 | 0.001179 |
| replace.test | RUN | 0.253197 | 0.736115 | 0.817901 | 0.001177 | 0.001452 | 0.001193 |
| replace_if.test | RUN | 0.252388 | 0.726531 | 0.812986 | 0.001348 | 0.001421 | 0.001250 |
| reverse_fold.test | RUN | 0.388601 | 1.021169 | 1.360845 | 0.001478 | 0.001270 | 0.001335 |
| reverse_iter_fold.test | RUN | 0.407377 | 1.045678 | 1.428334 | 0.001398 | 0.001409 | 0.001250 |
| reverse.test | RUN | 0.248754 | 0.761418 | 0.818169 | 0.001466 | 0.001440 | 0.000901 |
| segmented_for_each.test | RUN | 0.439872 | 1.426953 | 1.682738 | 0.001536 | 0.001332 | 0.001239 |
| segmented_find.test | RUN | 0.268222 | 0.755844 | 0.924814 | 0.001292 | 0.001331 | 0.001248 |
| segmented_find_if.test | RUN | 0.273431 | 0.766516 | 0.950559 | 0.001590 | 0.001279 | 0.001202 |
| segmented_fold.test | RUN | 0.310281 | 0.991017 | 1.198893 | 0.001327 | 0.001440 | 0.001448 |
| transform.test | RUN | 0.265719 | 0.794778 | 0.879918 | 0.001309 | 0.001440 | 0.001206 |
| join.test | RUN | 0.195730 | 0.470361 | 0.597955 | 0.001591 | 0.001434 | 0.001185 |
| zip.test | RUN | 0.336710 | 0.900891 | 1.146237 | 0.001464 | 0.001500 | 0.001374 |
| zip2.test | RUN | 0.334132 | 0.871646 | 1.102999 | 0.001218 | 0.001479 | 0.001239 |
| zip_ignore.test | RUN | 0.248749 | 0.593667 | 0.732965 | 0.001328 | 0.001352 | 0.001119 |
| flatten.test | RUN | 0.235522 | 0.672784 | 0.758064 | 0.001334 | 0.001429 | 0.001206 |
| ticket-5490.test | COMPILE | 0.125910 | 0.281309 | 0.335175 | — | — | — |
| as_deque.test | RUN | 0.240018 | 0.623407 | 0.791699 | 0.001614 | 0.001548 | 0.001304 |
| as_list.test | RUN | 0.276125 | 0.789020 | 0.861475 | 0.001302 | 0.001388 | 0.001212 |
| as_map.test | RUN | 0.263502 | 0.773356 | 0.864296 | 0.001251 | 0.001355 | 0.001160 |
| as_map_assoc.test | RUN | 0.253942 | 0.707057 | 0.819334 | 0.001215 | 0.001328 | 0.001230 |
| as_set.test | RUN | 0.310885 | 0.905593 | 1.008723 | 0.001539 | 0.001281 | 0.001204 |
| as_vector.test | RUN | 0.276244 | 0.814589 | 0.896734 | 0.001200 | 0.001311 | 0.001130 |
| boost_tuple.test | RUN | 0.280367 | 0.775356 | 0.876186 | 0.001154 | 0.001216 | 0.001156 |
| boost_tuple_iterator.test | RUN | 0.180748 | 0.453667 | 0.528741 | 0.001246 | 0.001155 | 0.001417 |
| cons.test | RUN | 0.336047 | 0.900735 | 1.036761 | 0.001292 | 0.001342 | 0.001228 |
| convert_boost_tuple.test | RUN | 0.212963 | 0.677138 | 0.687096 | 0.001333 | 0.001405 | 0.001238 |
| convert_deque.test | RUN | 0.212842 | 0.681643 | 0.679737 | 0.001167 | 0.001223 | 0.001266 |
| convert_list.test | RUN | 0.216329 | 0.697574 | 0.684010 | 0.001178 | 0.001241 | 0.001135 |
| convert_std_pair.test | RUN | 0.227039 | 0.685790 | 0.697356 | 0.001346 | 0.001241 | 0.001289 |
| convert_std_tuple.test | RUN | 0.213084 | 0.667548 | 0.675610 | 0.001303 | 0.001311 | 0.001185 |
| convert_vector.test | RUN | 0.215027 | 0.682825 | 0.678879 | 0.001251 | 0.001191 | 0.001149 |
| filter_view.test | RUN | 0.254702 | 0.712574 | 0.812902 | 0.001365 | 0.001375 | 0.001302 |
| hash.test | RUN | 0.251308 | 0.637410 | 0.779749 | 0.001570 | 0.001268 | 0.001348 |
| io.test | RUN | 0.270554 | 0.921376 | 0.948516 | 0.001425 | 0.001666 | 0.001478 |
| iterator_range.test | RUN | 0.240315 | 0.688512 | 0.765123 | 0.001339 | 0.001482 | 0.001231 |
| joint_view.test | RUN | 0.331208 | 1.160653 | 1.169549 | 0.001559 | 0.001568 | 0.001172 |
| list_comparison.test | RUN | 0.194048 | 0.469692 | 0.564337 | 0.001631 | 0.001440 | 0.001159 |
| list_construction.test | RUN | 0.183053 | 0.452980 | 0.543007 | 0.001221 | 0.001208 | 0.001181 |
| list_copy.test | RUN | 0.279829 | 0.839089 | 0.969856 | 0.001395 | 0.001460 | 0.001200 |
| list_iterator.test | RUN | 0.186241 | 0.458885 | 0.546112 | 0.001336 | 0.001390 | 0.001124 |
| list_hash.test | RUN | 0.247401 | 0.932468 | 0.776996 | 0.001297 | 0.001276 | 0.001412 |
| list_make.test | RUN | 0.197924 | 0.501955 | 0.590092 | 0.001162 | 0.001344 | 0.001219 |
| list_misc.test | RUN | 0.250633 | 0.570419 | 0.723609 | 0.001186 | 0.001373 | 0.001261 |
| list_mutate.test | RUN | 0.175895 | 0.397384 | 0.480546 | 0.001198 | 0.001226 | 0.001265 |
| list_nest.test | RUN | 0.360708 | 1.165593 | 1.357327 | 0.001245 | 0.001386 | 0.001255 |
| list_tie.test | RUN | 0.185296 | 0.453330 | 0.536503 | 0.001269 | 0.001408 | 0.001420 |
| list_value_at.test | RUN | 0.179793 | 0.413651 | 0.503859 | 0.001236 | 0.001318 | 0.001354 |
| deque_comparison.test | RUN | 0.184094 | 0.478759 | 0.588510 | 0.001134 | 0.001355 | 0.001418 |
| deque_construction.test | RUN | 0.186404 | 0.447439 | 0.553204 | 0.001266 | 0.001526 | 0.001336 |
| deque_copy.test | RUN | 0.275740 | 0.775448 | 0.882334 | 0.001347 | 0.001249 | 0.001370 |
| deque_iterator.test | RUN | 0.182610 | 0.486212 | 0.537815 | 0.001614 | 0.001573 | 0.001377 |
| deque_hash.test | RUN | 0.249768 | 0.910535 | 0.771746 | 0.001190 | 0.001407 | 0.001387 |
| deque_is_constructible.test | COMPILE | 0.101879 | 0.202613 | 0.248730 | — | — | — |
| deque_make.test | RUN | 0.185585 | 0.464226 | 0.584368 | 0.001444 | 0.001333 | 0.001364 |
| deque_misc.test | RUN | 0.239859 | 0.600252 | 0.704505 | 0.001129 | 0.001250 | 0.001079 |
| deque_move.test | RUN | 0.186533 | 0.496252 | 0.558451 | 0.001379 | 0.001422 | 0.001230 |
| deque_mutate.test | RUN | 0.179746 | 0.393556 | 0.486725 | 0.001160 | 0.001379 | 0.001199 |
| deque_nest.test | RUN | 0.541637 | 1.866329 | 2.189721 | 0.001292 | 0.001374 | 0.001281 |
| deque_tie.test | RUN | 0.174037 | 0.427810 | 0.506995 | 0.001534 | 0.001377 | 0.001198 |
| deque_value_at.test | RUN | 0.178354 | 0.407885 | 0.496022 | 0.001285 | 0.001093 | 0.001168 |
| front_extended_deque.test | RUN | 0.256786 | 0.608478 | 0.761094 | 0.001416 | 0.001448 | 0.001284 |
| back_extended_deque.test | RUN | 0.258560 | 0.604804 | 0.748095 | 0.001280 | 0.001310 | 0.001423 |
| make_list.test | RUN | 0.195865 | 0.501295 | 0.586981 | 0.001478 | 0.001164 | 0.001412 |
| make_vector.test | RUN | 0.197720 | 0.492433 | 0.619373 | 0.001550 | 0.001525 | 0.001354 |
| map.test | RUN | 0.269224 | 0.766879 | 0.844416 | 0.001580 | 0.001400 | 0.001222 |
| map_comparison.test | RUN | 0.190354 | 0.488672 | 0.567493 | 0.001460 | 0.001546 | 0.001233 |
| map_construction.test | RUN | 0.191981 | 0.464629 | 0.556725 | 0.001142 | 0.001262 | 0.001251 |
| map_copy.test | RUN | 0.233536 | 0.593722 | 0.696306 | 0.001438 | 0.001260 | 0.001332 |
| map_misc.test | RUN | 0.243856 | 0.592317 | 0.704901 | 0.001217 | 0.001368 | 0.001133 |
| map_move.test | RUN | 0.192456 | 0.508620 | 0.558737 | 0.001375 | 0.001380 | 0.001180 |
| map_mutate.test | RUN | 0.174882 | 0.395617 | 0.485609 | 0.001273 | 0.001329 | 0.001244 |
| map_tie.test | RUN | 0.181295 | 0.402376 | 0.493904 | 0.001534 | 0.001280 | 0.001356 |
| nil.test | RUN | 0.120562 | 0.277969 | 0.344092 | 0.001454 | 0.001432 | 0.001238 |
| nview.test | RUN | 0.236977 | 0.585497 | 0.715836 | 0.001410 | 0.001467 | 0.001391 |
| reverse_view.test | RUN | 0.325618 | 0.978485 | 1.080575 | 0.001482 | 0.001321 | 0.001318 |
| segmented_iterator_range.test | RUN | 0.370509 | 1.160819 | 1.359802 | 0.001387 | 0.001279 | 0.001367 |
| set.test | RUN | 0.239018 | 0.661863 | 0.741968 | 0.001454 | 0.001418 | 0.001440 |
| single_view.test | RUN | 0.215839 | 0.595151 | 0.679963 | 0.001372 | 0.001272 | 0.001223 |
| std_pair.test | RUN | 0.271070 | 0.771225 | 0.896952 | 0.001262 | 0.001208 | 0.001228 |
| boost_array.test | RUN | 0.233061 | 0.527809 | 0.646570 | 0.001404 | 0.001455 | 0.001449 |
| array.test | RUN | 0.222785 | 0.531825 | 0.630955 | 0.001507 | 0.001179 | 0.001441 |
| std_array.test | RUN | 0.226501 | 0.517511 | 0.656929 | 0.001606 | 0.001266 | 0.001288 |
| tuple_comparison.test | RUN | 0.205386 | 0.500414 | 0.600447 | 0.001336 | 0.001360 | 0.001261 |
| tuple_construction.test | RUN | 0.207425 | 0.494758 | 0.599101 | 0.001468 | 0.001499 | 0.001210 |
| tuple_conversion.test | RUN | 0.469376 | 1.566233 | 2.007473 | 0.001345 | 0.001156 | 0.001332 |
| tuple_copy.test | RUN | 0.300933 | 0.890529 | 1.047601 | 0.001317 | 0.001341 | 0.001205 |
| tuple_element.test | RUN | 0.187649 | 0.447511 | 0.568797 | 0.001073 | 0.001569 | 0.001249 |
| tuple_make.test | RUN | 0.207113 | 0.515218 | 0.612497 | 0.001317 | 0.001484 | 0.001191 |
| tuple_misc.test | RUN | 0.260374 | 0.631872 | 0.747049 | 0.001229 | 0.001279 | 0.001156 |
| tuple_mutate.test | RUN | 0.180753 | 0.422210 | 0.519700 | 0.001565 | 0.001358 | 0.001326 |
| tuple_nest.test | RUN | 0.796120 | 3.233557 | 3.812860 | 0.001374 | 0.001342 | 0.001369 |
| tuple_hash.test | RUN | 0.262476 | 0.927226 | 0.777266 | 0.001598 | 0.001310 | 0.000880 |
| tuple_tie.test | RUN | 0.191361 | 0.471186 | 0.571699 | 0.001392 | 0.001296 | 0.001315 |
| tuple_traits__maybe_variadic.test | RUN | 0.209462 | 0.559449 | 0.602577 | 0.001380 | 0.001458 | 0.000867 |
| tuple_traits__no_variadic.test | RUN | 0.231942 | 0.599771 | 0.651123 | 0.001530 | 0.001355 | 0.001489 |
| transform_view.test | RUN | 0.315165 | 0.987205 | 1.048253 | 0.001672 | 0.001068 | 0.001248 |
| identity_view.test | RUN | 0.299109 | 0.900797 | 1.007617 | 0.001297 | 0.001356 | 0.001253 |
| vector_comparison.test | RUN | 0.186875 | 0.485811 | 0.617260 | 0.001105 | 0.001289 | 0.001388 |
| vector_construction.test | RUN | 0.188634 | 0.449605 | 0.548859 | 0.001382 | 0.001596 | 0.001443 |
| vector_conversion.test | RUN | 0.558410 | 2.075045 | 2.518759 | 0.001516 | 0.001335 | 0.001204 |
| vector_copy.test | RUN | 0.289412 | 0.889164 | 1.035546 | 0.001225 | 0.001255 | 0.001255 |
| vector_iterator.test | RUN | 0.184765 | 0.479795 | 0.542641 | 0.001405 | 0.001300 | 0.001416 |
| vector_make.test | RUN | 0.193309 | 0.497564 | 0.577332 | 0.001430 | 0.001472 | 0.001249 |
| vector_misc.test | RUN | 0.252777 | 0.600394 | 0.702861 | 0.001185 | 0.001195 | 0.001469 |
| vector_move.test | RUN | 0.189110 | 0.499715 | 0.596507 | 0.001274 | 0.001078 | 0.001322 |
| vector_mutate.test | RUN | 0.169836 | 0.384183 | 0.472845 | 0.001102 | 0.001347 | 0.001223 |
| vector_n.test | RUN | 0.213549 | 0.505411 | 0.643044 | 0.001437 | 0.001340 | 0.001259 |
| vector_nest.test | RUN | 0.796782 | 3.396935 | 3.793665 | 0.001379 | 0.001418 | 0.001306 |
| vector_hash.test | RUN | 0.256057 | 0.915366 | 0.764275 | 0.001491 | 0.001237 | 0.001216 |
| vector_tie.test | RUN | 0.180142 | 0.446272 | 0.526959 | 0.001566 | 0.001323 | 0.001242 |
| vector_traits__maybe_variadic.test | RUN | 0.195556 | 0.503327 | 0.556297 | 0.001457 | 0.001203 | 0.001246 |
| vector_traits__no_variadic.test | RUN | 0.209657 | 0.552906 | 0.577620 | 0.001274 | 0.001385 | 0.001115 |
| vector_value_at.test | RUN | 0.175439 | 0.396767 | 0.501489 | 0.001233 | 0.001339 | 0.001110 |
| zip_view.test | RUN | 0.366375 | 0.988966 | 1.315643 | 0.001571 | 0.001266 | 0.001417 |
| zip_view2.test | RUN | 0.296363 | 0.774094 | 0.974284 | 0.001287 | 0.001403 | 0.001231 |
| zip_view_ignore.test | RUN | 0.274919 | 0.712070 | 0.864793 | 0.001170 | 0.001310 | 0.001194 |
| repetitive_view.test | RUN | 0.474206 | 1.307780 | 1.684981 | 0.001318 | 0.001431 | 0.001363 |
| deduce_sequence.test | RUN | 0.220792 | 0.548114 | 0.661458 | 0.001158 | 0.001432 | 0.001212 |
| adapt_adt_named.test | RUN | 0.270967 | 0.776474 | 0.899344 | 0.001303 | 0.001451 | 0.001292 |
| adapt_adt_named_empty.test | RUN | 0.235135 | 0.625444 | 0.706669 | 0.001454 | 0.001436 | 0.001271 |
| adapt_adt.test | RUN | 0.304145 | 1.040770 | 1.069123 | 0.001332 | 0.001282 | 0.001497 |
| adapt_adt_empty.test | RUN | 0.231438 | 0.612281 | 0.706606 | 0.001115 | 0.001381 | 0.001370 |
| adapt_assoc_adt_named.test | RUN | 0.297060 | 0.811886 | 0.947021 | 0.001249 | 0.001260 | 0.001320 |
| adapt_assoc_adt_named_empty.test | RUN | 0.235382 | 0.632692 | 0.710818 | 0.001104 | 0.001393 | 0.001277 |
| adapt_assoc_adt.test | RUN | 0.307089 | 0.829817 | 0.968111 | 0.001455 | 0.001340 | 0.001171 |
| adapt_assoc_adt_empty.test | RUN | 0.229585 | 0.616292 | 0.707712 | 0.001178 | 0.001355 | 0.001203 |
| adapt_assoc_struct_named.test | RUN | 0.290504 | 0.791492 | 0.920925 | 0.001148 | 0.001428 | 0.001346 |
| adapt_assoc_struct_named_empty.test | RUN | 0.229700 | 0.624090 | 0.696367 | 0.001354 | 0.001366 | 0.001207 |
| adapt_assoc_struct.test | RUN | 0.264692 | 0.748486 | 0.846677 | 0.001336 | 0.001340 | 0.001072 |
| adapt_assoc_struct_empty.test | RUN | 0.226099 | 0.613958 | 0.703247 | 0.001346 | 0.001311 | 0.001152 |
| adapt_assoc_tpl_adt.test | RUN | 0.313771 | 0.873041 | 1.007400 | 0.001317 | 0.001322 | 0.001372 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.234751 | 0.625672 | 0.704650 | 0.001314 | 0.001304 | 0.001268 |
| adapt_assoc_tpl_struct.test | RUN | 0.258000 | 0.736150 | 0.829387 | 0.001295 | 0.001374 | 0.001326 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.230750 | 0.619548 | 0.700596 | 0.001233 | 0.001454 | 0.001296 |
| adapt_struct_named.test | RUN | 0.259881 | 0.776325 | 0.836121 | 0.001376 | 0.001427 | 0.001435 |
| adapt_struct_named_empty.test | RUN | 0.231384 | 0.624122 | 0.707131 | 0.001251 | 0.001340 | 0.001243 |
| adapt_struct.test | RUN | 0.287736 | 0.872041 | 0.955603 | 0.001221 | 0.001513 | 0.001313 |
| adapt_struct_empty.test | RUN | 0.227782 | 0.624836 | 0.716498 | 0.001529 | 0.001448 | 0.001185 |
| adapt_tpl_adt.test | RUN | 0.295368 | 1.018592 | 1.003744 | 0.001233 | 0.001446 | 0.001179 |
| adapt_tpl_adt_empty.test | RUN | 0.232303 | 0.626390 | 0.713162 | 0.001279 | 0.001488 | 0.001325 |
| adapt_tpl_struct.test | RUN | 0.244826 | 0.694500 | 0.783671 | 0.001618 | 0.001467 | 0.001336 |
| adapt_tpl_struct_empty.test | RUN | 0.230294 | 0.640537 | 0.707077 | 0.001230 | 0.001370 | 0.001319 |
| adt_attribute_proxy.test | RUN | 0.260064 | 0.603596 | 0.749983 | 0.001279 | 0.001354 | 0.001556 |
| define_struct.test | RUN | 0.308428 | 0.858167 | 0.993348 | 0.001253 | 0.001353 | 0.000967 |
| define_struct_empty.test | RUN | 0.277206 | 0.700820 | 0.808026 | 0.001307 | 0.001514 | 0.001091 |
| define_struct_move.test | RUN | 0.175765 | 0.397436 | 0.474246 | 0.001508 | 0.001134 | 0.001339 |
| define_struct_inline.test | RUN | 0.338479 | 1.037541 | 1.126649 | 0.001390 | 0.001443 | 0.001287 |
| define_struct_inline_empty.test | RUN | 0.289911 | 0.723591 | 0.818003 | 0.001308 | 0.001377 | 0.001272 |
| define_struct_inline_move.test | RUN | 0.182085 | 0.392473 | 0.500483 | 0.001540 | 0.001268 | 0.001276 |
| define_assoc_struct.test | RUN | 0.317119 | 0.822480 | 0.965524 | 0.001303 | 0.001483 | 0.001240 |
| define_assoc_struct_empty.test | RUN | 0.274928 | 0.697367 | 0.822172 | 0.001448 | 0.001376 | 0.001252 |
| define_assoc_struct_move.test | RUN | 0.174080 | 0.396095 | 0.480729 | 0.001286 | 0.001268 | 0.001246 |
| define_tpl_struct.test | RUN | 0.305741 | 0.825739 | 0.937243 | 0.001401 | 0.001308 | 0.001326 |
| define_tpl_struct_empty.test | RUN | 0.280828 | 0.719336 | 0.820613 | 0.001387 | 0.001444 | 0.001400 |
| define_tpl_struct_move.test | RUN | 0.178606 | 0.391184 | 0.494405 | 0.001499 | 0.001399 | 0.001221 |
| define_tpl_struct_inline.test | RUN | 0.318602 | 0.964203 | 1.044250 | 0.001424 | 0.001213 | 0.001268 |
| define_tpl_struct_inline_empty.test | RUN | 0.284908 | 0.711338 | 0.819698 | 0.001426 | 0.001277 | 0.001320 |
| define_tpl_struct_inline_move.test | RUN | 0.176089 | 0.396192 | 0.492953 | 0.001119 | 0.001335 | 0.001396 |
| define_assoc_tpl_struct.test | RUN | 0.309069 | 0.829413 | 0.953590 | 0.001543 | 0.001344 | 0.001266 |
| define_assoc_tpl_struct_empty.test | RUN | 0.286154 | 0.705055 | 0.821714 | 0.001565 | 0.001288 | 0.001280 |
| define_assoc_tpl_struct_move.test | RUN | 0.178822 | 0.398333 | 0.487296 | 0.001358 | 0.001137 | 0.001222 |
| std_tuple.test | RUN | 0.180132 | 0.453493 | 0.539749 | 0.001262 | 0.001266 | 0.001250 |
| std_tuple_iterator.test | RUN | 0.189143 | 0.479100 | 0.540981 | 0.001306 | 0.001373 | 0.001357 |
| ref_vector.test | RUN | 0.206913 | 0.477442 | 0.585597 | 0.001737 | 0.001280 | 0.001356 |
| flatten_view.test | RUN | 0.221686 | 0.596955 | 0.692319 | 0.001255 | 0.001255 | 0.001358 |
| github-159.test | COMPILE | 0.104564 | 0.216157 | 0.253578 | — | — | — |
| github-176.test | RUN | 0.206325 | 0.528570 | 0.583670 | 0.001372 | 0.001523 | 0.001257 |
| size.test | COMPILE | 0.171343 | 0.373421 | 0.469176 | — | — | — |
| fused.test | RUN | 0.247511 | 0.563596 | 0.681911 | 0.001363 | 0.001412 | 0.001163 |
| fused_function_object.test | RUN | 0.180378 | 0.425737 | 0.518184 | 0.001459 | 0.001091 | 0.001061 |
| fused_procedure.test | RUN | 0.231520 | 0.539640 | 0.646018 | 0.001102 | 0.001428 | 0.001241 |
| unfused.test | RUN | 0.190472 | 0.430525 | 0.530085 | 0.001431 | 0.001346 | 0.001073 |
| unfused_typed.test | RUN | 0.187696 | 0.476472 | 0.547580 | 0.001532 | 0.001497 | 0.001309 |
| make_fused.test | RUN | 0.242383 | 0.553222 | 0.677526 | 0.001143 | 0.001233 | 0.001195 |
| make_fused_function_object.test | RUN | 0.181619 | 0.429412 | 0.516525 | 0.001304 | 0.001208 | 0.001282 |
| make_fused_procedure.test | RUN | 0.236756 | 0.531775 | 0.650562 | 0.001516 | 0.001520 | 0.001261 |
| make_unfused.test | RUN | 0.187860 | 0.440806 | 0.523641 | 0.001263 | 0.001294 | 0.001276 |
| invoke.test | RUN | 0.492271 | 1.588877 | 1.851150 | 0.001279 | 0.001408 | 0.001241 |
| invoke_function_object.test | RUN | 0.223752 | 0.570215 | 0.694998 | 0.001578 | 0.001530 | 0.001284 |
| invoke_procedure.test | RUN | 0.378164 | 1.170938 | 1.356164 | 0.001250 | 0.001448 | 0.001132 |
| swap.test | RUN | 0.282091 | 0.715558 | 0.869156 | 0.001203 | 0.001408 | 0.001191 |
| is_sequence.test | COMPILE | 0.047410 | 0.099950 | 0.106854 | — | — | — |
| is_view.test | COMPILE | 0.048845 | 0.097051 | 0.106387 | — | — | — |
| pair_deque.test | COMPILE | 0.102832 | 0.229118 | 0.263449 | — | — | — |
| pair_list.test | COMPILE | 0.097261 | 0.218109 | 0.267629 | — | — | — |
| pair_map.test | COMPILE | 0.103037 | 0.228643 | 0.263397 | — | — | — |
| pair_set.test | COMPILE | 0.106426 | 0.226532 | 0.263459 | — | — | — |
| pair_vector.test | COMPILE | 0.101939 | 0.226134 | 0.250615 | — | — | — |
| pair_nest.test | COMPILE | 0.040406 | 0.089921 | 0.099605 | — | — | — |
| index_sequence.test | COMPILE | 0.034816 | 0.060338 | 0.076051 | — | — | — |
| and.test | COMPILE | 0.027213 | 0.047873 | 0.053076 | — | — | — |
| tag_of.test | COMPILE | 0.045981 | 0.092973 | 0.102384 | — | — | — |
| unused.test | COMPILE | 0.023202 | 0.060476 | 0.062170 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.048120 | 0.073489 | 0.091985 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.033949 | 0.086314 | 0.078954 | — | — | — |
| quick.test | RUN | 0.135742 | 0.312084 | 0.328954 | 0.000456 | 0.000868 | 0.000879 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997× | 0.995×, 1.000× | 0.997× |
| clang | 1.000× | 0.995×, 1.005× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45697047144).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.000831s | 0.000829s | 0.000846s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.000811s | 0.000825s | 0.000864s | byte equality observed |
| adapt_adt_named.test | 10 | 0.000827s | 0.000825s | 0.000861s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.000822s | 0.000846s | 0.000835s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.000833s | 0.000822s | 0.000836s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.000841s | 0.000839s | 0.000830s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.000821s | 0.000828s | 0.000826s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.000840s | 0.000818s | 0.000825s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.000861s | 0.000812s | 0.000827s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.000837s | 0.000817s | 0.000843s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.000844s | 0.000837s | 0.000826s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.000823s | 0.000839s | 0.000859s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.000820s | 0.000855s | 0.000855s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.000839s | 0.000855s | 0.000841s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.000828s | 0.000844s | 0.000856s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.000825s | 0.000815s | 0.000799s | byte equality observed |
| adapt_struct.test | 10 | 0.000821s | 0.000814s | 0.000839s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.000807s | 0.000825s | 0.000835s | byte equality observed |
| adapt_struct_named.test | 10 | 0.000840s | 0.000856s | 0.000807s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.000845s | 0.000825s | 0.000819s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.000819s | 0.000820s | 0.000825s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.000829s | 0.000847s | 0.000812s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.000829s | 0.000867s | 0.000837s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.000831s | 0.000805s | 0.000826s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.000811s | 0.000813s | 0.000842s | byte equality observed |
| all.test | 10 | 0.000828s | 0.000806s | 0.000830s | byte equality observed |
| any.test | 10 | 0.000833s | 0.000795s | 0.000813s | byte equality observed |
| array.test | 10 | 0.000843s | 0.000823s | 0.000840s | byte equality observed |
| as_deque.test | 10 | 0.000823s | 0.000844s | 0.000852s | byte equality observed |
| as_list.test | 10 | 0.000852s | 0.000832s | 0.000848s | byte equality observed |
| as_map.test | 10 | 0.000876s | 0.000837s | 0.000831s | byte equality observed |
| as_map_assoc.test | 10 | 0.000834s | 0.000807s | 0.000841s | byte equality observed |
| as_set.test | 10 | 0.000845s | 0.000833s | 0.000874s | byte equality observed |
| as_vector.test | 10 | 0.000847s | 0.000872s | 0.000842s | byte equality observed |
| back_extended_deque.test | 10 | 0.000818s | 0.000810s | 0.000805s | byte equality observed |
| boost_array.test | 10 | 0.000812s | 0.000812s | 0.000804s | byte equality observed |
| boost_tuple.test | 10 | 0.000844s | 0.000811s | 0.000867s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.000802s | 0.000820s | 0.000858s | byte equality observed |
| clear.test | 10 | 0.000809s | 0.000803s | 0.000833s | byte equality observed |
| cons.test | 10 | 0.000833s | 0.000834s | 0.000837s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.000803s | 0.000791s | 0.000842s | byte equality observed |
| convert_deque.test | 10 | 0.000817s | 0.000814s | 0.000835s | byte equality observed |
| convert_list.test | 10 | 0.000839s | 0.000829s | 0.000855s | byte equality observed |
| convert_std_pair.test | 10 | 0.000835s | 0.000803s | 0.000840s | byte equality observed |
| convert_std_tuple.test | 10 | 0.000840s | 0.000842s | 0.000863s | byte equality observed |
| convert_vector.test | 10 | 0.000829s | 0.000848s | 0.000834s | byte equality observed |
| copy.test | 10 | 0.000832s | 0.000803s | 0.000830s | byte equality observed |
| count.test | 10 | 0.000833s | 0.000800s | 0.000813s | byte equality observed |
| count_if.test | 10 | 0.000792s | 0.000785s | 0.000807s | byte equality observed |
| deduce_sequence.test | 10 | 0.000820s | 0.000793s | 0.000854s | byte equality observed |
| define_assoc_struct.test | 10 | 0.000841s | 0.000814s | 0.000835s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.000830s | 0.000815s | 0.000839s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.000813s | 0.000807s | 0.000782s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.000830s | 0.000836s | 0.000817s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.000825s | 0.000819s | 0.000848s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000795s | 0.000818s | 0.000836s | byte equality observed |
| define_struct.test | 10 | 0.000825s | 0.000858s | 0.000856s | byte equality observed |
| define_struct_empty.test | 10 | 0.000817s | 0.000878s | 0.000846s | byte equality observed |
| define_struct_inline.test | 10 | 0.000845s | 0.000817s | 0.000829s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.000835s | 0.000816s | 0.000848s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000822s | 0.000797s | 0.000846s | byte equality observed |
| define_struct_move.test | 10 | 0.000809s | 0.000795s | 0.000836s | byte equality observed |
| define_tpl_struct.test | 10 | 0.000819s | 0.000827s | 0.000829s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.000813s | 0.000808s | 0.000817s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.000827s | 0.000819s | 0.000838s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.000824s | 0.000823s | 0.000804s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000815s | 0.000818s | 0.000815s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000785s | 0.000823s | 0.000836s | byte equality observed |
| deque_comparison.test | 10 | 0.000806s | 0.000787s | 0.000837s | byte equality observed |
| deque_construction.test | 10 | 0.000825s | 0.000802s | 0.000830s | byte equality observed |
| deque_copy.test | 10 | 0.000798s | 0.000819s | 0.000831s | byte equality observed |
| deque_hash.test | 10 | 0.000812s | 0.000781s | 0.000799s | byte equality observed |
| deque_iterator.test | 10 | 0.000832s | 0.000797s | 0.000837s | byte equality observed |
| deque_make.test | 10 | 0.000835s | 0.000806s | 0.000826s | byte equality observed |
| deque_misc.test | 10 | 0.000849s | 0.000805s | 0.000810s | byte equality observed |
| deque_move.test | 10 | 0.000817s | 0.000805s | 0.000834s | byte equality observed |
| deque_mutate.test | 10 | 0.000825s | 0.000790s | 0.000836s | byte equality observed |
| deque_nest.test | 10 | 0.000825s | 0.000803s | 0.000856s | byte equality observed |
| deque_tie.test | 10 | 0.000796s | 0.000828s | 0.000842s | byte equality observed |
| deque_value_at.test | 10 | 0.000801s | 0.000814s | 0.000839s | byte equality observed |
| erase.test | 10 | 0.000839s | 0.000834s | 0.000840s | byte equality observed |
| erase_key.test | 10 | 0.000833s | 0.000863s | 0.000834s | byte equality observed |
| filter.test | 10 | 0.000832s | 0.000803s | 0.000855s | byte equality observed |
| filter_if.test | 10 | 0.000855s | 0.000854s | 0.000851s | byte equality observed |
| filter_view.test | 10 | 0.000849s | 0.000816s | 0.000855s | byte equality observed |
| find.test | 10 | 0.000830s | 0.000818s | 0.000865s | byte equality observed |
| find_if.test | 10 | 0.000835s | 0.000847s | 0.000836s | byte equality observed |
| flatten.test | 10 | 0.000833s | 0.000828s | 0.000845s | byte equality observed |
| flatten_view.test | 10 | 0.000851s | 0.000818s | 0.000817s | byte equality observed |
| fold.test | 10 | 0.000814s | 0.000809s | 0.000838s | byte equality observed |
| for_each.test | 10 | 0.000848s | 0.000848s | 0.000857s | byte equality observed |
| front_extended_deque.test | 10 | 0.000821s | 0.000836s | 0.000807s | byte equality observed |
| fused.test | 10 | 0.000803s | 0.000774s | 0.000801s | byte equality observed |
| fused_function_object.test | 10 | 0.000811s | 0.000798s | 0.000813s | byte equality observed |
| fused_procedure.test | 10 | 0.000842s | 0.000808s | 0.000809s | byte equality observed |
| github-176.test | 10 | 0.000816s | 0.000795s | 0.000832s | byte equality observed |
| hash.test | 10 | 0.000842s | 0.000803s | 0.000837s | byte equality observed |
| identity_view.test | 10 | 0.000871s | 0.000802s | 0.000847s | byte equality observed |
| insert.test | 10 | 0.000842s | 0.000827s | 0.000820s | byte equality observed |
| insert_range.test | 10 | 0.000851s | 0.000815s | 0.000843s | byte equality observed |
| invoke.test | 10 | 0.000805s | 0.000835s | 0.000824s | byte equality observed |
| invoke_function_object.test | 10 | 0.000811s | 0.000829s | 0.000810s | byte equality observed |
| invoke_procedure.test | 10 | 0.000804s | 0.000811s | 0.000808s | byte equality observed |
| io.test | 10 | 0.000909s | 0.000890s | 0.000896s | byte equality observed |
| iter_fold.test | 10 | 0.000802s | 0.000816s | 0.000832s | byte equality observed |
| iterator_range.test | 10 | 0.000826s | 0.000815s | 0.000823s | byte equality observed |
| join.test | 10 | 0.000809s | 0.000814s | 0.000815s | byte equality observed |
| joint_view.test | 10 | 0.000831s | 0.000824s | 0.000841s | byte equality observed |
| list_comparison.test | 10 | 0.000799s | 0.000800s | 0.000800s | byte equality observed |
| list_construction.test | 10 | 0.000819s | 0.000805s | 0.000827s | byte equality observed |
| list_copy.test | 10 | 0.000823s | 0.000799s | 0.000821s | byte equality observed |
| list_hash.test | 10 | 0.000827s | 0.000818s | 0.000816s | byte equality observed |
| list_iterator.test | 10 | 0.000809s | 0.000824s | 0.000828s | byte equality observed |
| list_make.test | 10 | 0.000809s | 0.000814s | 0.000819s | byte equality observed |
| list_misc.test | 10 | 0.000818s | 0.000826s | 0.000814s | byte equality observed |
| list_mutate.test | 10 | 0.000805s | 0.000812s | 0.000801s | byte equality observed |
| list_nest.test | 10 | 0.000829s | 0.000799s | 0.000801s | byte equality observed |
| list_tie.test | 10 | 0.000817s | 0.000819s | 0.000848s | byte equality observed |
| list_value_at.test | 10 | 0.000821s | 0.000840s | 0.000805s | byte equality observed |
| make_fused.test | 10 | 0.000819s | 0.000839s | 0.000824s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000834s | 0.000838s | 0.000788s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000808s | 0.000805s | 0.000799s | byte equality observed |
| make_list.test | 10 | 0.000835s | 0.000809s | 0.000807s | byte equality observed |
| make_unfused.test | 10 | 0.000815s | 0.000773s | 0.000835s | byte equality observed |
| make_vector.test | 10 | 0.000797s | 0.000789s | 0.000853s | byte equality observed |
| map.test | 10 | 0.000825s | 0.000822s | 0.000832s | byte equality observed |
| map_comparison.test | 10 | 0.000807s | 0.000797s | 0.000816s | byte equality observed |
| map_construction.test | 10 | 0.000797s | 0.000795s | 0.000805s | byte equality observed |
| map_copy.test | 10 | 0.000798s | 0.000806s | 0.000814s | byte equality observed |
| map_misc.test | 10 | 0.000809s | 0.000809s | 0.000811s | byte equality observed |
| map_move.test | 10 | 0.000838s | 0.000822s | 0.000845s | byte equality observed |
| map_mutate.test | 10 | 0.000824s | 0.000817s | 0.000857s | byte equality observed |
| map_tie.test | 10 | 0.000822s | 0.000799s | 0.000826s | byte equality observed |
| move.test | 10 | 0.000815s | 0.000811s | 0.000803s | byte equality observed |
| nil.test | 10 | 0.000825s | 0.000785s | 0.000802s | byte equality observed |
| none.test | 10 | 0.000837s | 0.000811s | 0.000812s | byte equality observed |
| nview.test | 10 | 0.000809s | 0.000835s | 0.000822s | byte equality observed |
| pop_back.test | 10 | 0.000840s | 0.000837s | 0.000843s | byte equality observed |
| pop_front.test | 10 | 0.000866s | 0.000833s | 0.000845s | byte equality observed |
| push_back.test | 10 | 0.000846s | 0.000828s | 0.000842s | byte equality observed |
| push_front.test | 10 | 0.000839s | 0.000837s | 0.000839s | byte equality observed |
| quick.test | 10 | 0.000366s | 0.000798s | 0.000792s | byte equality observed |
| ref_vector.test | 10 | 0.000805s | 0.000807s | 0.000824s | byte equality observed |
| remove.test | 10 | 0.000823s | 0.000845s | 0.000835s | byte equality observed |
| remove_if.test | 10 | 0.000831s | 0.000863s | 0.000822s | byte equality observed |
| repetitive_view.test | 10 | 0.000798s | 0.000831s | 0.000804s | byte equality observed |
| replace.test | 10 | 0.000847s | 0.000812s | 0.000821s | byte equality observed |
| replace_if.test | 10 | 0.000841s | 0.000881s | 0.000847s | byte equality observed |
| reverse.test | 10 | 0.000853s | 0.000840s | 0.000853s | byte equality observed |
| reverse_fold.test | 10 | 0.000823s | 0.000823s | 0.000836s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.000812s | 0.000816s | 0.000808s | byte equality observed |
| reverse_view.test | 10 | 0.000834s | 0.000830s | 0.000845s | byte equality observed |
| segmented_find.test | 10 | 0.000808s | 0.000804s | 0.000808s | byte equality observed |
| segmented_find_if.test | 10 | 0.000821s | 0.000800s | 0.000809s | byte equality observed |
| segmented_fold.test | 10 | 0.000836s | 0.000819s | 0.000834s | byte equality observed |
| segmented_for_each.test | 10 | 0.000843s | 0.000816s | 0.000834s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.000857s | 0.000863s | 0.000852s | byte equality observed |
| set.test | 10 | 0.000859s | 0.000844s | 0.000853s | byte equality observed |
| single_view.test | 10 | 0.000866s | 0.000851s | 0.000831s | byte equality observed |
| std_array.test | 10 | 0.000843s | 0.000788s | 0.000820s | byte equality observed |
| std_pair.test | 10 | 0.000814s | 0.000813s | 0.000809s | byte equality observed |
| std_tuple.test | 10 | 0.000815s | 0.000808s | 0.000810s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.000812s | 0.000811s | 0.000791s | byte equality observed |
| swap.test | 10 | 0.000815s | 0.000783s | 0.000799s | byte equality observed |
| transform.test | 10 | 0.000835s | 0.000842s | 0.000806s | byte equality observed |
| transform_view.test | 10 | 0.000835s | 0.000832s | 0.000821s | byte equality observed |
| tuple_comparison.test | 10 | 0.000818s | 0.000827s | 0.000804s | byte equality observed |
| tuple_construction.test | 10 | 0.000812s | 0.000800s | 0.000813s | byte equality observed |
| tuple_conversion.test | 10 | 0.000824s | 0.000830s | 0.000780s | byte equality observed |
| tuple_copy.test | 10 | 0.000858s | 0.000821s | 0.000822s | byte equality observed |
| tuple_element.test | 10 | 0.000834s | 0.000816s | 0.000827s | byte equality observed |
| tuple_hash.test | 10 | 0.000836s | 0.000833s | 0.000828s | byte equality observed |
| tuple_make.test | 10 | 0.000825s | 0.000834s | 0.000828s | byte equality observed |
| tuple_misc.test | 10 | 0.000823s | 0.000783s | 0.000817s | byte equality observed |
| tuple_mutate.test | 10 | 0.000812s | 0.000819s | 0.000858s | byte equality observed |
| tuple_nest.test | 10 | 0.000814s | 0.000826s | 0.000831s | byte equality observed |
| tuple_tie.test | 10 | 0.000807s | 0.000815s | 0.000811s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.000820s | 0.000820s | 0.000796s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.000827s | 0.000817s | 0.000797s | byte equality observed |
| unfused.test | 10 | 0.000802s | 0.000809s | 0.000813s | byte equality observed |
| unfused_typed.test | 10 | 0.000819s | 0.000835s | 0.000848s | byte equality observed |
| vector_comparison.test | 10 | 0.000800s | 0.000801s | 0.000782s | byte equality observed |
| vector_construction.test | 10 | 0.000809s | 0.000796s | 0.000824s | byte equality observed |
| vector_conversion.test | 10 | 0.000827s | 0.000794s | 0.000824s | byte equality observed |
| vector_copy.test | 10 | 0.000829s | 0.000819s | 0.000815s | byte equality observed |
| vector_hash.test | 10 | 0.000813s | 0.000806s | 0.000808s | byte equality observed |
| vector_iterator.test | 10 | 0.000835s | 0.000789s | 0.000796s | byte equality observed |
| vector_make.test | 10 | 0.000793s | 0.000799s | 0.000783s | byte equality observed |
| vector_misc.test | 10 | 0.000816s | 0.000809s | 0.000805s | byte equality observed |
| vector_move.test | 10 | 0.000823s | 0.000802s | 0.000830s | byte equality observed |
| vector_mutate.test | 10 | 0.000805s | 0.000799s | 0.000826s | byte equality observed |
| vector_n.test | 10 | 0.000822s | 0.000831s | 0.000840s | byte equality observed |
| vector_nest.test | 10 | 0.000801s | 0.000785s | 0.000821s | byte equality observed |
| vector_tie.test | 10 | 0.000829s | 0.000801s | 0.000825s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000813s | 0.000808s | 0.000848s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000822s | 0.000785s | 0.000819s | byte equality observed |
| vector_value_at.test | 10 | 0.000812s | 0.000819s | 0.000837s | byte equality observed |
| zip.test | 10 | 0.000832s | 0.000793s | 0.000834s | byte equality observed |
| zip2.test | 10 | 0.000841s | 0.000832s | 0.000801s | byte equality observed |
| zip_ignore.test | 10 | 0.000837s | 0.000803s | 0.000800s | byte equality observed |
| zip_view.test | 10 | 0.000841s | 0.000828s | 0.000798s | byte equality observed |
| zip_view2.test | 10 | 0.000833s | 0.000840s | 0.000837s | byte equality observed |
| zip_view_ignore.test | 10 | 0.000795s | 0.000807s | 0.000777s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45697047144).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
