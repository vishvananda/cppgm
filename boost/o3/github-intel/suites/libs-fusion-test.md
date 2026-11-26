# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.288475 | 0.624080 | 0.815768 | 0.001293 | 0.001231 | 0.001178 |
| any.test | RUN | 0.283084 | 0.587511 | 0.770748 | 0.001383 | 0.001252 | 0.001145 |
| clear.test | RUN | 0.208853 | 0.554601 | 0.635580 | 0.001287 | 0.001294 | 0.001405 |
| copy.test | RUN | 0.174752 | 0.415192 | 0.514876 | 0.001426 | 0.001226 | 0.001251 |
| count.test | RUN | 0.192495 | 0.459027 | 0.578740 | 0.001238 | 0.001428 | 0.001186 |
| count_if.test | RUN | 0.178515 | 0.420143 | 0.528179 | 0.001215 | 0.001370 | 0.001192 |
| erase.test | RUN | 0.260208 | 0.760402 | 0.872759 | 0.001356 | 0.001540 | 0.001167 |
| erase_key.test | RUN | 0.253166 | 0.764582 | 0.827826 | 0.001152 | 0.001311 | 0.001274 |
| filter.test | RUN | 0.230489 | 0.639324 | 0.746628 | 0.001186 | 0.001393 | 0.001320 |
| filter_if.test | RUN | 0.252423 | 0.760664 | 0.880131 | 0.001099 | 0.001335 | 0.001258 |
| find.test | RUN | 0.220040 | 0.520787 | 0.664020 | 0.001216 | 0.001428 | 0.001160 |
| find_if.test | RUN | 0.210334 | 0.479852 | 0.602200 | 0.001459 | 0.001293 | 0.001403 |
| fold.test | RUN | 0.242851 | 0.584710 | 0.736209 | 0.001368 | 0.001472 | 0.001187 |
| for_each.test | RUN | 0.215370 | 0.533318 | 0.643113 | 0.001698 | 0.001339 | 0.001306 |
| insert.test | RUN | 0.328940 | 0.948056 | 1.047798 | 0.001471 | 0.001272 | 0.001460 |
| insert_range.test | RUN | 0.327869 | 0.945664 | 1.041948 | 0.001321 | 0.001387 | 0.001251 |
| iter_fold.test | RUN | 0.367981 | 0.892155 | 1.232263 | 0.001424 | 0.001324 | 0.001264 |
| move.test | RUN | 0.184500 | 0.426207 | 0.529881 | 0.001582 | 0.001324 | 0.001241 |
| none.test | RUN | 0.281698 | 0.605251 | 0.803786 | 0.001248 | 0.001226 | 0.001132 |
| pop_back.test | RUN | 0.277651 | 0.839391 | 0.932434 | 0.001291 | 0.001407 | 0.001163 |
| pop_front.test | RUN | 0.234852 | 0.660186 | 0.761339 | 0.001592 | 0.001215 | 0.001141 |
| push_back.test | RUN | 0.306436 | 0.950375 | 1.019225 | 0.001567 | 0.001421 | 0.001254 |
| push_front.test | RUN | 0.268199 | 0.795060 | 0.854825 | 0.001282 | 0.001321 | 0.001202 |
| remove.test | RUN | 0.301384 | 0.893909 | 1.039333 | 0.001250 | 0.001165 | 0.001211 |
| remove_if.test | RUN | 0.271832 | 0.742721 | 0.862969 | 0.001213 | 0.001234 | 0.001279 |
| replace.test | RUN | 0.250508 | 0.723822 | 0.821169 | 0.001411 | 0.001322 | 0.001268 |
| replace_if.test | RUN | 0.254924 | 0.714942 | 0.792813 | 0.001380 | 0.001359 | 0.001328 |
| reverse_fold.test | RUN | 0.384345 | 0.990176 | 1.372986 | 0.001228 | 0.001396 | 0.001315 |
| reverse_iter_fold.test | RUN | 0.405416 | 1.029592 | 1.442390 | 0.001292 | 0.001318 | 0.001113 |
| reverse.test | RUN | 0.246239 | 0.752912 | 0.817432 | 0.001311 | 0.001413 | 0.001051 |
| segmented_for_each.test | RUN | 0.437819 | 1.400789 | 1.678381 | 0.001534 | 0.001221 | 0.001236 |
| segmented_find.test | RUN | 0.272156 | 0.734966 | 0.930876 | 0.001312 | 0.001260 | 0.001107 |
| segmented_find_if.test | RUN | 0.275022 | 0.750926 | 0.921272 | 0.001196 | 0.001408 | 0.001294 |
| segmented_fold.test | RUN | 0.350181 | 0.964578 | 1.173090 | 0.001450 | 0.001395 | 0.001304 |
| transform.test | RUN | 0.258502 | 0.796154 | 0.875397 | 0.001378 | 0.001410 | 0.001281 |
| join.test | RUN | 0.199637 | 0.471570 | 0.597240 | 0.001294 | 0.001255 | 0.001285 |
| zip.test | RUN | 0.333594 | 0.903055 | 1.144937 | 0.001352 | 0.001251 | 0.001283 |
| zip2.test | RUN | 0.332217 | 0.849638 | 1.107211 | 0.001269 | 0.001413 | 0.001227 |
| zip_ignore.test | RUN | 0.254399 | 0.597865 | 0.721504 | 0.001095 | 0.001275 | 0.001075 |
| flatten.test | RUN | 0.235890 | 0.649030 | 0.750620 | 0.001089 | 0.001347 | 0.001255 |
| ticket-5490.test | COMPILE | 0.124219 | 0.283582 | 0.334509 | — | — | — |
| as_deque.test | RUN | 0.231699 | 0.615607 | 0.791568 | 0.001186 | 0.001211 | 0.001220 |
| as_list.test | RUN | 0.262454 | 0.784144 | 0.853023 | 0.001336 | 0.001340 | 0.001274 |
| as_map.test | RUN | 0.258018 | 0.752284 | 0.860564 | 0.001358 | 0.001268 | 0.001220 |
| as_map_assoc.test | RUN | 0.253116 | 0.715234 | 0.811004 | 0.000947 | 0.001284 | 0.001167 |
| as_set.test | RUN | 0.301995 | 0.868926 | 1.018679 | 0.001643 | 0.001433 | 0.001317 |
| as_vector.test | RUN | 0.273426 | 0.785064 | 0.880330 | 0.001370 | 0.000948 | 0.001354 |
| boost_tuple.test | RUN | 0.277990 | 0.767591 | 0.885803 | 0.001352 | 0.001238 | 0.001224 |
| boost_tuple_iterator.test | RUN | 0.178620 | 0.442804 | 0.525880 | 0.001379 | 0.001258 | 0.001302 |
| cons.test | RUN | 0.347379 | 0.889730 | 1.042366 | 0.001162 | 0.001293 | 0.001200 |
| convert_boost_tuple.test | RUN | 0.216668 | 0.672957 | 0.683560 | 0.001285 | 0.001258 | 0.001245 |
| convert_deque.test | RUN | 0.219304 | 0.662012 | 0.683256 | 0.001207 | 0.001158 | 0.001350 |
| convert_list.test | RUN | 0.217367 | 0.671572 | 0.697830 | 0.001177 | 0.001160 | 0.001187 |
| convert_std_pair.test | RUN | 0.220948 | 0.676886 | 0.702793 | 0.001426 | 0.001254 | 0.001209 |
| convert_std_tuple.test | RUN | 0.208643 | 0.653433 | 0.683645 | 0.001442 | 0.001177 | 0.001252 |
| convert_vector.test | RUN | 0.211691 | 0.659845 | 0.693026 | 0.001275 | 0.001162 | 0.001476 |
| filter_view.test | RUN | 0.251003 | 0.701034 | 0.822394 | 0.001310 | 0.001226 | 0.001499 |
| hash.test | RUN | 0.249130 | 0.630483 | 0.775041 | 0.001541 | 0.001300 | 0.001464 |
| io.test | RUN | 0.271042 | 0.904288 | 0.947116 | 0.001658 | 0.001490 | 0.001421 |
| iterator_range.test | RUN | 0.239903 | 0.680384 | 0.767043 | 0.001293 | 0.001279 | 0.001336 |
| joint_view.test | RUN | 0.332599 | 1.126213 | 1.180713 | 0.001582 | 0.001134 | 0.001217 |
| list_comparison.test | RUN | 0.185240 | 0.467452 | 0.560638 | 0.001248 | 0.001169 | 0.001080 |
| list_construction.test | RUN | 0.185247 | 0.428101 | 0.555810 | 0.001213 | 0.001217 | 0.001413 |
| list_copy.test | RUN | 0.277618 | 0.831828 | 0.961613 | 0.001312 | 0.001188 | 0.001296 |
| list_iterator.test | RUN | 0.178905 | 0.446413 | 0.546527 | 0.001187 | 0.001365 | 0.001288 |
| list_hash.test | RUN | 0.249090 | 0.918444 | 0.780308 | 0.001217 | 0.001381 | 0.001192 |
| list_make.test | RUN | 0.197150 | 0.503537 | 0.594185 | 0.001311 | 0.001101 | 0.001084 |
| list_misc.test | RUN | 0.249787 | 0.585388 | 0.727361 | 0.001108 | 0.001325 | 0.001224 |
| list_mutate.test | RUN | 0.175263 | 0.398852 | 0.485997 | 0.001497 | 0.001159 | 0.001404 |
| list_nest.test | RUN | 0.355163 | 1.136795 | 1.364324 | 0.001216 | 0.001140 | 0.001102 |
| list_tie.test | RUN | 0.183788 | 0.451997 | 0.544126 | 0.001390 | 0.001295 | 0.001388 |
| list_value_at.test | RUN | 0.177030 | 0.410043 | 0.505442 | 0.001430 | 0.001108 | 0.001515 |
| deque_comparison.test | RUN | 0.184679 | 0.455207 | 0.553625 | 0.001091 | 0.001233 | 0.001421 |
| deque_construction.test | RUN | 0.193482 | 0.441298 | 0.594246 | 0.001418 | 0.001366 | 0.001163 |
| deque_copy.test | RUN | 0.265120 | 0.767511 | 0.880462 | 0.001088 | 0.001126 | 0.001322 |
| deque_iterator.test | RUN | 0.180571 | 0.466335 | 0.546551 | 0.001124 | 0.001227 | 0.001317 |
| deque_hash.test | RUN | 0.251956 | 0.901293 | 0.775963 | 0.001065 | 0.001231 | 0.001255 |
| deque_is_constructible.test | COMPILE | 0.099824 | 0.198434 | 0.243154 | — | — | — |
| deque_make.test | RUN | 0.182110 | 0.475038 | 0.576811 | 0.001630 | 0.001252 | 0.001259 |
| deque_misc.test | RUN | 0.236047 | 0.591500 | 0.698518 | 0.001198 | 0.001203 | 0.001347 |
| deque_move.test | RUN | 0.182838 | 0.483187 | 0.546537 | 0.001155 | 0.001291 | 0.001188 |
| deque_mutate.test | RUN | 0.169726 | 0.389989 | 0.479851 | 0.001390 | 0.001358 | 0.001423 |
| deque_nest.test | RUN | 0.539076 | 1.845403 | 2.189880 | 0.001130 | 0.001368 | 0.001050 |
| deque_tie.test | RUN | 0.171927 | 0.427990 | 0.511884 | 0.001430 | 0.001249 | 0.001315 |
| deque_value_at.test | RUN | 0.175201 | 0.400573 | 0.492541 | 0.001196 | 0.001305 | 0.001282 |
| front_extended_deque.test | RUN | 0.253356 | 0.592296 | 0.758793 | 0.001525 | 0.001265 | 0.001338 |
| back_extended_deque.test | RUN | 0.247236 | 0.605300 | 0.726607 | 0.001235 | 0.001292 | 0.001201 |
| make_list.test | RUN | 0.200684 | 0.495911 | 0.592183 | 0.001384 | 0.001260 | 0.001293 |
| make_vector.test | RUN | 0.187681 | 0.472734 | 0.615806 | 0.001134 | 0.001238 | 0.001295 |
| map.test | RUN | 0.252220 | 0.761882 | 0.827634 | 0.001327 | 0.001292 | 0.001262 |
| map_comparison.test | RUN | 0.187512 | 0.466935 | 0.558998 | 0.001320 | 0.001356 | 0.001376 |
| map_construction.test | RUN | 0.183679 | 0.454013 | 0.557293 | 0.001304 | 0.001223 | 0.001347 |
| map_copy.test | RUN | 0.218326 | 0.578648 | 0.682003 | 0.001174 | 0.001343 | 0.001238 |
| map_misc.test | RUN | 0.236777 | 0.587573 | 0.698902 | 0.001158 | 0.001200 | 0.001090 |
| map_move.test | RUN | 0.187236 | 0.495212 | 0.555098 | 0.001413 | 0.001414 | 0.001035 |
| map_mutate.test | RUN | 0.167919 | 0.396156 | 0.487577 | 0.001314 | 0.001159 | 0.001177 |
| map_tie.test | RUN | 0.175949 | 0.395328 | 0.501162 | 0.001236 | 0.001225 | 0.001283 |
| nil.test | RUN | 0.121562 | 0.270603 | 0.336945 | 0.001316 | 0.001203 | 0.001192 |
| nview.test | RUN | 0.233521 | 0.576191 | 0.719406 | 0.001315 | 0.001424 | 0.001247 |
| reverse_view.test | RUN | 0.309801 | 0.966598 | 1.071509 | 0.001349 | 0.001312 | 0.001273 |
| segmented_iterator_range.test | RUN | 0.355537 | 1.150727 | 1.356623 | 0.001311 | 0.001246 | 0.001238 |
| set.test | RUN | 0.227812 | 0.659576 | 0.742327 | 0.001277 | 0.001218 | 0.001317 |
| single_view.test | RUN | 0.208270 | 0.610903 | 0.676360 | 0.001558 | 0.001323 | 0.001201 |
| std_pair.test | RUN | 0.279516 | 0.765558 | 0.866107 | 0.001419 | 0.001175 | 0.001392 |
| boost_array.test | RUN | 0.223553 | 0.534121 | 0.657979 | 0.001133 | 0.001225 | 0.001230 |
| array.test | RUN | 0.224831 | 0.518452 | 0.653429 | 0.001221 | 0.001245 | 0.001166 |
| std_array.test | RUN | 0.225859 | 0.519074 | 0.632887 | 0.001308 | 0.001133 | 0.001200 |
| tuple_comparison.test | RUN | 0.205661 | 0.495257 | 0.595691 | 0.001167 | 0.001266 | 0.001247 |
| tuple_construction.test | RUN | 0.199291 | 0.500205 | 0.605784 | 0.001315 | 0.001390 | 0.001300 |
| tuple_conversion.test | RUN | 0.451063 | 1.554508 | 1.997616 | 0.001173 | 0.001260 | 0.001446 |
| tuple_copy.test | RUN | 0.287937 | 0.904178 | 1.038105 | 0.001226 | 0.001278 | 0.001211 |
| tuple_element.test | RUN | 0.182994 | 0.432840 | 0.553168 | 0.001275 | 0.001276 | 0.001219 |
| tuple_make.test | RUN | 0.199938 | 0.503879 | 0.622329 | 0.001391 | 0.001392 | 0.001352 |
| tuple_misc.test | RUN | 0.252680 | 0.614269 | 0.794223 | 0.001156 | 0.001131 | 0.001170 |
| tuple_mutate.test | RUN | 0.175127 | 0.415123 | 0.513111 | 0.001268 | 0.000917 | 0.001388 |
| tuple_nest.test | RUN | 0.777436 | 3.174200 | 3.766115 | 0.001282 | 0.001218 | 0.001263 |
| tuple_hash.test | RUN | 0.256306 | 0.928702 | 0.809307 | 0.001344 | 0.001195 | 0.001154 |
| tuple_tie.test | RUN | 0.191403 | 0.458261 | 0.568628 | 0.001575 | 0.001319 | 0.001133 |
| tuple_traits__maybe_variadic.test | RUN | 0.203022 | 0.555947 | 0.596615 | 0.001242 | 0.001198 | 0.001278 |
| tuple_traits__no_variadic.test | RUN | 0.238887 | 0.593829 | 0.648279 | 0.001226 | 0.001259 | 0.001354 |
| transform_view.test | RUN | 0.312039 | 0.968291 | 1.061598 | 0.001526 | 0.001463 | 0.001320 |
| identity_view.test | RUN | 0.298284 | 0.894452 | 0.988671 | 0.001316 | 0.001254 | 0.001374 |
| vector_comparison.test | RUN | 0.187149 | 0.470761 | 0.573735 | 0.001187 | 0.001218 | 0.001313 |
| vector_construction.test | RUN | 0.188607 | 0.444830 | 0.600663 | 0.001122 | 0.001414 | 0.001292 |
| vector_conversion.test | RUN | 0.550854 | 2.041465 | 2.532683 | 0.001330 | 0.001234 | 0.001200 |
| vector_copy.test | RUN | 0.280743 | 0.849016 | 1.032053 | 0.001368 | 0.001164 | 0.001173 |
| vector_iterator.test | RUN | 0.178500 | 0.472074 | 0.534858 | 0.001378 | 0.001175 | 0.001167 |
| vector_make.test | RUN | 0.187711 | 0.476430 | 0.561067 | 0.001221 | 0.001209 | 0.001441 |
| vector_misc.test | RUN | 0.243257 | 0.588387 | 0.709571 | 0.001232 | 0.001291 | 0.001254 |
| vector_move.test | RUN | 0.188290 | 0.496689 | 0.583115 | 0.001257 | 0.001239 | 0.001463 |
| vector_mutate.test | RUN | 0.175367 | 0.392973 | 0.498050 | 0.001214 | 0.001141 | 0.001275 |
| vector_n.test | RUN | 0.213688 | 0.505619 | 0.635516 | 0.001352 | 0.001402 | 0.001249 |
| vector_nest.test | RUN | 0.795334 | 3.406692 | 3.825520 | 0.001234 | 0.001111 | 0.001167 |
| vector_hash.test | RUN | 0.247769 | 0.886738 | 0.771907 | 0.001090 | 0.001359 | 0.001372 |
| vector_tie.test | RUN | 0.178576 | 0.426961 | 0.525734 | 0.001363 | 0.001143 | 0.001294 |
| vector_traits__maybe_variadic.test | RUN | 0.194563 | 0.532170 | 0.548955 | 0.001291 | 0.001232 | 0.001231 |
| vector_traits__no_variadic.test | RUN | 0.210767 | 0.542525 | 0.580711 | 0.001213 | 0.001260 | 0.001219 |
| vector_value_at.test | RUN | 0.182845 | 0.408791 | 0.517088 | 0.001212 | 0.001162 | 0.001324 |
| zip_view.test | RUN | 0.354552 | 0.983059 | 1.291372 | 0.001681 | 0.001278 | 0.001334 |
| zip_view2.test | RUN | 0.288275 | 0.755134 | 1.004533 | 0.001226 | 0.001149 | 0.001193 |
| zip_view_ignore.test | RUN | 0.271065 | 0.688940 | 0.877130 | 0.001324 | 0.001141 | 0.001173 |
| repetitive_view.test | RUN | 0.475661 | 1.280360 | 1.732183 | 0.001260 | 0.001355 | 0.001081 |
| deduce_sequence.test | RUN | 0.221227 | 0.550130 | 0.669279 | 0.001487 | 0.001258 | 0.001161 |
| adapt_adt_named.test | RUN | 0.278967 | 0.779700 | 0.834536 | 0.001315 | 0.001170 | 0.001129 |
| adapt_adt_named_empty.test | RUN | 0.232741 | 0.610990 | 0.707441 | 0.001230 | 0.001211 | 0.001156 |
| adapt_adt.test | RUN | 0.301636 | 1.006104 | 1.022301 | 0.001368 | 0.001473 | 0.001380 |
| adapt_adt_empty.test | RUN | 0.228203 | 0.628488 | 0.695071 | 0.001502 | 0.001317 | 0.001295 |
| adapt_assoc_adt_named.test | RUN | 0.297772 | 0.801566 | 0.923242 | 0.001151 | 0.001336 | 0.001330 |
| adapt_assoc_adt_named_empty.test | RUN | 0.228547 | 0.617131 | 0.700958 | 0.001212 | 0.001254 | 0.001316 |
| adapt_assoc_adt.test | RUN | 0.300452 | 0.830500 | 0.960348 | 0.001419 | 0.001302 | 0.001332 |
| adapt_assoc_adt_empty.test | RUN | 0.227043 | 0.614697 | 0.707061 | 0.001315 | 0.001326 | 0.001050 |
| adapt_assoc_struct_named.test | RUN | 0.291889 | 0.809422 | 0.898192 | 0.001248 | 0.001315 | 0.001256 |
| adapt_assoc_struct_named_empty.test | RUN | 0.227967 | 0.619336 | 0.701795 | 0.001301 | 0.001144 | 0.001121 |
| adapt_assoc_struct.test | RUN | 0.262177 | 0.753022 | 0.841547 | 0.001295 | 0.001402 | 0.001235 |
| adapt_assoc_struct_empty.test | RUN | 0.226395 | 0.619955 | 0.703858 | 0.000924 | 0.001271 | 0.001268 |
| adapt_assoc_tpl_adt.test | RUN | 0.311905 | 0.858582 | 0.997883 | 0.001255 | 0.001301 | 0.001480 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.230357 | 0.625256 | 0.705835 | 0.001133 | 0.001222 | 0.001276 |
| adapt_assoc_tpl_struct.test | RUN | 0.254006 | 0.723786 | 0.823765 | 0.001279 | 0.001245 | 0.001218 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.224835 | 0.619492 | 0.712346 | 0.001324 | 0.001325 | 0.001221 |
| adapt_struct_named.test | RUN | 0.260285 | 0.753931 | 0.840096 | 0.001135 | 0.001236 | 0.001287 |
| adapt_struct_named_empty.test | RUN | 0.231288 | 0.624585 | 0.703634 | 0.001125 | 0.001490 | 0.001206 |
| adapt_struct.test | RUN | 0.280531 | 0.856744 | 0.953625 | 0.001266 | 0.001204 | 0.001274 |
| adapt_struct_empty.test | RUN | 0.223066 | 0.624672 | 0.699107 | 0.001310 | 0.001350 | 0.001118 |
| adapt_tpl_adt.test | RUN | 0.295942 | 0.987839 | 0.985377 | 0.001272 | 0.001265 | 0.001232 |
| adapt_tpl_adt_empty.test | RUN | 0.227127 | 0.628401 | 0.703506 | 0.001207 | 0.001223 | 0.001333 |
| adapt_tpl_struct.test | RUN | 0.246874 | 0.685946 | 0.771308 | 0.001266 | 0.001318 | 0.001201 |
| adapt_tpl_struct_empty.test | RUN | 0.224426 | 0.630983 | 0.712051 | 0.001291 | 0.001259 | 0.001217 |
| adt_attribute_proxy.test | RUN | 0.256108 | 0.599078 | 0.744972 | 0.001198 | 0.001234 | 0.001272 |
| define_struct.test | RUN | 0.325012 | 0.847877 | 1.001499 | 0.001258 | 0.001216 | 0.001351 |
| define_struct_empty.test | RUN | 0.270530 | 0.685258 | 0.805741 | 0.001219 | 0.001221 | 0.001395 |
| define_struct_move.test | RUN | 0.168529 | 0.389699 | 0.475916 | 0.001267 | 0.001165 | 0.001155 |
| define_struct_inline.test | RUN | 0.329120 | 1.008986 | 1.139982 | 0.001461 | 0.001382 | 0.001286 |
| define_struct_inline_empty.test | RUN | 0.269847 | 0.688498 | 0.808354 | 0.001117 | 0.001216 | 0.001218 |
| define_struct_inline_move.test | RUN | 0.174871 | 0.393106 | 0.482132 | 0.001203 | 0.001176 | 0.001441 |
| define_assoc_struct.test | RUN | 0.304885 | 0.806469 | 0.955573 | 0.001460 | 0.001315 | 0.001315 |
| define_assoc_struct_empty.test | RUN | 0.271816 | 0.702897 | 0.810842 | 0.001179 | 0.001312 | 0.001414 |
| define_assoc_struct_move.test | RUN | 0.169974 | 0.386310 | 0.483764 | 0.001252 | 0.001289 | 0.001317 |
| define_tpl_struct.test | RUN | 0.309883 | 0.811247 | 0.947816 | 0.001386 | 0.001270 | 0.001429 |
| define_tpl_struct_empty.test | RUN | 0.268365 | 0.697551 | 0.824520 | 0.001224 | 0.001295 | 0.001193 |
| define_tpl_struct_move.test | RUN | 0.176013 | 0.402325 | 0.482098 | 0.001267 | 0.001275 | 0.001313 |
| define_tpl_struct_inline.test | RUN | 0.320802 | 0.946171 | 1.038418 | 0.001371 | 0.001233 | 0.001190 |
| define_tpl_struct_inline_empty.test | RUN | 0.276188 | 0.713622 | 0.828952 | 0.001719 | 0.001175 | 0.001286 |
| define_tpl_struct_inline_move.test | RUN | 0.176012 | 0.382263 | 0.498886 | 0.001120 | 0.001363 | 0.001193 |
| define_assoc_tpl_struct.test | RUN | 0.304927 | 0.811686 | 0.962819 | 0.001213 | 0.001342 | 0.001309 |
| define_assoc_tpl_struct_empty.test | RUN | 0.278540 | 0.708315 | 0.823380 | 0.001421 | 0.001316 | 0.001169 |
| define_assoc_tpl_struct_move.test | RUN | 0.173522 | 0.400236 | 0.483393 | 0.001361 | 0.001565 | 0.001215 |
| std_tuple.test | RUN | 0.174739 | 0.443112 | 0.539554 | 0.001247 | 0.001129 | 0.001309 |
| std_tuple_iterator.test | RUN | 0.178407 | 0.475915 | 0.539998 | 0.001592 | 0.001231 | 0.001382 |
| ref_vector.test | RUN | 0.210619 | 0.469860 | 0.583177 | 0.001290 | 0.001286 | 0.001434 |
| flatten_view.test | RUN | 0.226244 | 0.586499 | 0.705342 | 0.001373 | 0.001230 | 0.001426 |
| github-159.test | COMPILE | 0.099061 | 0.212389 | 0.251813 | — | — | — |
| github-176.test | RUN | 0.209265 | 0.518612 | 0.584278 | 0.001518 | 0.001396 | 0.001336 |
| size.test | COMPILE | 0.171671 | 0.368471 | 0.464380 | — | — | — |
| fused.test | RUN | 0.245814 | 0.545338 | 0.686608 | 0.001130 | 0.001279 | 0.001501 |
| fused_function_object.test | RUN | 0.177604 | 0.413976 | 0.524909 | 0.001233 | 0.001222 | 0.001506 |
| fused_procedure.test | RUN | 0.231713 | 0.529430 | 0.653801 | 0.001082 | 0.001245 | 0.001225 |
| unfused.test | RUN | 0.184393 | 0.433134 | 0.537031 | 0.001465 | 0.001139 | 0.001271 |
| unfused_typed.test | RUN | 0.185888 | 0.463881 | 0.563042 | 0.001274 | 0.001210 | 0.001507 |
| make_fused.test | RUN | 0.242519 | 0.541290 | 0.690357 | 0.001364 | 0.001324 | 0.001187 |
| make_fused_function_object.test | RUN | 0.184194 | 0.426582 | 0.524687 | 0.001196 | 0.001278 | 0.001289 |
| make_fused_procedure.test | RUN | 0.233394 | 0.530011 | 0.660340 | 0.001228 | 0.001238 | 0.001389 |
| make_unfused.test | RUN | 0.180133 | 0.426881 | 0.540329 | 0.001281 | 0.001217 | 0.001286 |
| invoke.test | RUN | 0.479685 | 1.537258 | 1.860138 | 0.001263 | 0.001248 | 0.001396 |
| invoke_function_object.test | RUN | 0.224115 | 0.554138 | 0.686839 | 0.001471 | 0.001421 | 0.001519 |
| invoke_procedure.test | RUN | 0.374003 | 1.167820 | 1.374696 | 0.001207 | 0.001292 | 0.001279 |
| swap.test | RUN | 0.277249 | 0.676242 | 0.879013 | 0.001419 | 0.001214 | 0.001410 |
| is_sequence.test | COMPILE | 0.046880 | 0.098314 | 0.107812 | — | — | — |
| is_view.test | COMPILE | 0.046604 | 0.096889 | 0.109388 | — | — | — |
| pair_deque.test | COMPILE | 0.105212 | 0.216839 | 0.266042 | — | — | — |
| pair_list.test | COMPILE | 0.099393 | 0.218568 | 0.253935 | — | — | — |
| pair_map.test | COMPILE | 0.105342 | 0.223946 | 0.282389 | — | — | — |
| pair_set.test | COMPILE | 0.106018 | 0.225340 | 0.266689 | — | — | — |
| pair_vector.test | COMPILE | 0.101898 | 0.221713 | 0.263054 | — | — | — |
| pair_nest.test | COMPILE | 0.041740 | 0.090397 | 0.102747 | — | — | — |
| index_sequence.test | COMPILE | 0.034476 | 0.061067 | 0.077009 | — | — | — |
| and.test | COMPILE | 0.026890 | 0.048644 | 0.056227 | — | — | — |
| tag_of.test | COMPILE | 0.046532 | 0.092909 | 0.099246 | — | — | — |
| unused.test | COMPILE | 0.024484 | 0.058101 | 0.065832 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.046693 | 0.082724 | 0.097625 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.037502 | 0.085524 | 0.076743 | — | — | — |
| quick.test | RUN | 0.139505 | 0.306327 | 0.348801 | 0.000402 | 0.000845 | 0.000875 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 0.998×, 1.002× | 0.996× |
| clang | 1.005× | 1.001×, 1.010× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45710374989).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.000839s | 0.000836s | 0.000860s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.000841s | 0.000835s | 0.000805s | byte equality observed |
| adapt_adt_named.test | 10 | 0.000840s | 0.000803s | 0.000826s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.000815s | 0.000814s | 0.000838s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.000836s | 0.000821s | 0.000807s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.000829s | 0.000840s | 0.000829s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.000821s | 0.000853s | 0.000815s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.000821s | 0.000815s | 0.000812s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.000837s | 0.000815s | 0.000855s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.000824s | 0.000806s | 0.000839s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.000832s | 0.000847s | 0.000834s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.000835s | 0.000844s | 0.000839s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.000842s | 0.000872s | 0.000821s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.000844s | 0.000836s | 0.000848s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.000848s | 0.000868s | 0.000850s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.000857s | 0.000865s | 0.000812s | byte equality observed |
| adapt_struct.test | 10 | 0.000824s | 0.000837s | 0.000854s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.000833s | 0.000861s | 0.000853s | byte equality observed |
| adapt_struct_named.test | 10 | 0.000822s | 0.000816s | 0.000835s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.000819s | 0.000825s | 0.000838s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.000850s | 0.000840s | 0.000839s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.000826s | 0.000832s | 0.000841s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.000843s | 0.000816s | 0.000838s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.000829s | 0.000851s | 0.000834s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.000830s | 0.000821s | 0.000844s | byte equality observed |
| all.test | 10 | 0.000791s | 0.000796s | 0.000811s | byte equality observed |
| any.test | 10 | 0.000825s | 0.000824s | 0.000829s | byte equality observed |
| array.test | 10 | 0.000824s | 0.000835s | 0.000794s | byte equality observed |
| as_deque.test | 10 | 0.000802s | 0.000806s | 0.000792s | byte equality observed |
| as_list.test | 10 | 0.000834s | 0.000815s | 0.000823s | byte equality observed |
| as_map.test | 10 | 0.000834s | 0.000848s | 0.000851s | byte equality observed |
| as_map_assoc.test | 10 | 0.000833s | 0.000820s | 0.000829s | byte equality observed |
| as_set.test | 10 | 0.000829s | 0.000842s | 0.000844s | byte equality observed |
| as_vector.test | 10 | 0.000838s | 0.000819s | 0.000854s | byte equality observed |
| back_extended_deque.test | 10 | 0.000831s | 0.000838s | 0.000834s | byte equality observed |
| boost_array.test | 10 | 0.000830s | 0.000817s | 0.000797s | byte equality observed |
| boost_tuple.test | 10 | 0.000824s | 0.000851s | 0.000827s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.000856s | 0.000815s | 0.000832s | byte equality observed |
| clear.test | 10 | 0.000819s | 0.000811s | 0.000848s | byte equality observed |
| cons.test | 10 | 0.000840s | 0.000811s | 0.000865s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.000794s | 0.000819s | 0.000844s | byte equality observed |
| convert_deque.test | 10 | 0.000795s | 0.000847s | 0.000821s | byte equality observed |
| convert_list.test | 10 | 0.000816s | 0.000833s | 0.000821s | byte equality observed |
| convert_std_pair.test | 10 | 0.000814s | 0.000841s | 0.000831s | byte equality observed |
| convert_std_tuple.test | 10 | 0.000799s | 0.000851s | 0.000800s | byte equality observed |
| convert_vector.test | 10 | 0.000788s | 0.000821s | 0.000809s | byte equality observed |
| copy.test | 10 | 0.000794s | 0.000798s | 0.000797s | byte equality observed |
| count.test | 10 | 0.000804s | 0.000800s | 0.000838s | byte equality observed |
| count_if.test | 10 | 0.000819s | 0.000805s | 0.000855s | byte equality observed |
| deduce_sequence.test | 10 | 0.000850s | 0.000790s | 0.000835s | byte equality observed |
| define_assoc_struct.test | 10 | 0.000855s | 0.000812s | 0.000841s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.000830s | 0.000805s | 0.000827s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.000826s | 0.000843s | 0.000794s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.000846s | 0.000809s | 0.000864s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.000832s | 0.000838s | 0.000865s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000813s | 0.000808s | 0.000838s | byte equality observed |
| define_struct.test | 10 | 0.000830s | 0.000841s | 0.000855s | byte equality observed |
| define_struct_empty.test | 10 | 0.000832s | 0.000806s | 0.000824s | byte equality observed |
| define_struct_inline.test | 10 | 0.000838s | 0.000833s | 0.000829s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.000830s | 0.000835s | 0.000840s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000791s | 0.000805s | 0.000799s | byte equality observed |
| define_struct_move.test | 10 | 0.000820s | 0.000798s | 0.000827s | byte equality observed |
| define_tpl_struct.test | 10 | 0.000822s | 0.000819s | 0.000834s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.000826s | 0.000816s | 0.000818s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.000825s | 0.000834s | 0.000810s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.000829s | 0.000825s | 0.000825s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000811s | 0.000808s | 0.000814s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000816s | 0.000819s | 0.000819s | byte equality observed |
| deque_comparison.test | 10 | 0.000835s | 0.000827s | 0.000804s | byte equality observed |
| deque_construction.test | 10 | 0.000826s | 0.000815s | 0.000832s | byte equality observed |
| deque_copy.test | 10 | 0.000822s | 0.000832s | 0.000832s | byte equality observed |
| deque_hash.test | 10 | 0.000834s | 0.000835s | 0.000828s | byte equality observed |
| deque_iterator.test | 10 | 0.000808s | 0.000804s | 0.000770s | byte equality observed |
| deque_make.test | 10 | 0.000831s | 0.000810s | 0.000852s | byte equality observed |
| deque_misc.test | 10 | 0.000786s | 0.000837s | 0.000788s | byte equality observed |
| deque_move.test | 10 | 0.000829s | 0.000819s | 0.000824s | byte equality observed |
| deque_mutate.test | 10 | 0.000804s | 0.000829s | 0.000793s | byte equality observed |
| deque_nest.test | 10 | 0.000818s | 0.000837s | 0.000831s | byte equality observed |
| deque_tie.test | 10 | 0.000804s | 0.000785s | 0.000805s | byte equality observed |
| deque_value_at.test | 10 | 0.000833s | 0.000791s | 0.000793s | byte equality observed |
| erase.test | 10 | 0.000856s | 0.000817s | 0.000837s | byte equality observed |
| erase_key.test | 10 | 0.000843s | 0.000855s | 0.000835s | byte equality observed |
| filter.test | 10 | 0.000839s | 0.000804s | 0.000820s | byte equality observed |
| filter_if.test | 10 | 0.000835s | 0.000835s | 0.000831s | byte equality observed |
| filter_view.test | 10 | 0.000840s | 0.000849s | 0.000841s | byte equality observed |
| find.test | 10 | 0.000858s | 0.000831s | 0.000821s | byte equality observed |
| find_if.test | 10 | 0.000837s | 0.000838s | 0.000849s | byte equality observed |
| flatten.test | 10 | 0.000824s | 0.000811s | 0.000839s | byte equality observed |
| flatten_view.test | 10 | 0.000813s | 0.000817s | 0.000864s | byte equality observed |
| fold.test | 10 | 0.000820s | 0.000849s | 0.000860s | byte equality observed |
| for_each.test | 10 | 0.000835s | 0.000820s | 0.000829s | byte equality observed |
| front_extended_deque.test | 10 | 0.000794s | 0.000789s | 0.000843s | byte equality observed |
| fused.test | 10 | 0.000801s | 0.000797s | 0.000808s | byte equality observed |
| fused_function_object.test | 10 | 0.000814s | 0.000810s | 0.000790s | byte equality observed |
| fused_procedure.test | 10 | 0.000818s | 0.000821s | 0.000818s | byte equality observed |
| github-176.test | 10 | 0.000786s | 0.000817s | 0.000799s | byte equality observed |
| hash.test | 10 | 0.000818s | 0.000794s | 0.000785s | byte equality observed |
| identity_view.test | 10 | 0.000820s | 0.000829s | 0.000828s | byte equality observed |
| insert.test | 10 | 0.000836s | 0.000853s | 0.000845s | byte equality observed |
| insert_range.test | 10 | 0.000858s | 0.000816s | 0.000827s | byte equality observed |
| invoke.test | 10 | 0.000811s | 0.000849s | 0.000812s | byte equality observed |
| invoke_function_object.test | 10 | 0.000807s | 0.000814s | 0.000798s | byte equality observed |
| invoke_procedure.test | 10 | 0.000821s | 0.000820s | 0.000807s | byte equality observed |
| io.test | 10 | 0.000911s | 0.000890s | 0.000900s | byte equality observed |
| iter_fold.test | 10 | 0.000834s | 0.000821s | 0.000805s | byte equality observed |
| iterator_range.test | 10 | 0.000845s | 0.000829s | 0.000833s | byte equality observed |
| join.test | 10 | 0.000785s | 0.000831s | 0.000803s | byte equality observed |
| joint_view.test | 10 | 0.000847s | 0.000855s | 0.000849s | byte equality observed |
| list_comparison.test | 10 | 0.000817s | 0.000799s | 0.000809s | byte equality observed |
| list_construction.test | 10 | 0.000836s | 0.000818s | 0.000789s | byte equality observed |
| list_copy.test | 10 | 0.000825s | 0.000798s | 0.000784s | byte equality observed |
| list_hash.test | 10 | 0.000802s | 0.000808s | 0.000807s | byte equality observed |
| list_iterator.test | 10 | 0.000805s | 0.000778s | 0.000805s | byte equality observed |
| list_make.test | 10 | 0.000831s | 0.000828s | 0.000824s | byte equality observed |
| list_misc.test | 10 | 0.000824s | 0.000852s | 0.000813s | byte equality observed |
| list_mutate.test | 10 | 0.000830s | 0.000803s | 0.000818s | byte equality observed |
| list_nest.test | 10 | 0.000833s | 0.000826s | 0.000791s | byte equality observed |
| list_tie.test | 10 | 0.000839s | 0.000820s | 0.000844s | byte equality observed |
| list_value_at.test | 10 | 0.000829s | 0.000837s | 0.000841s | byte equality observed |
| make_fused.test | 10 | 0.000820s | 0.000811s | 0.000839s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000807s | 0.000806s | 0.000837s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000818s | 0.000844s | 0.000830s | byte equality observed |
| make_list.test | 10 | 0.000836s | 0.000821s | 0.000832s | byte equality observed |
| make_unfused.test | 10 | 0.000811s | 0.000831s | 0.000842s | byte equality observed |
| make_vector.test | 10 | 0.000812s | 0.000843s | 0.000855s | byte equality observed |
| map.test | 10 | 0.000856s | 0.000846s | 0.000833s | byte equality observed |
| map_comparison.test | 10 | 0.000812s | 0.000830s | 0.000813s | byte equality observed |
| map_construction.test | 10 | 0.000803s | 0.000805s | 0.000790s | byte equality observed |
| map_copy.test | 10 | 0.000806s | 0.000828s | 0.000811s | byte equality observed |
| map_misc.test | 10 | 0.000809s | 0.000813s | 0.000788s | byte equality observed |
| map_move.test | 10 | 0.000824s | 0.000800s | 0.000811s | byte equality observed |
| map_mutate.test | 10 | 0.000827s | 0.000797s | 0.000835s | byte equality observed |
| map_tie.test | 10 | 0.000791s | 0.000802s | 0.000821s | byte equality observed |
| move.test | 10 | 0.000816s | 0.000806s | 0.000802s | byte equality observed |
| nil.test | 10 | 0.000799s | 0.000808s | 0.000811s | byte equality observed |
| none.test | 10 | 0.000809s | 0.000832s | 0.000819s | byte equality observed |
| nview.test | 10 | 0.000829s | 0.000809s | 0.000823s | byte equality observed |
| pop_back.test | 10 | 0.000823s | 0.000850s | 0.000853s | byte equality observed |
| pop_front.test | 10 | 0.000839s | 0.000856s | 0.000837s | byte equality observed |
| push_back.test | 10 | 0.000828s | 0.000861s | 0.000861s | byte equality observed |
| push_front.test | 10 | 0.000822s | 0.000845s | 0.000837s | byte equality observed |
| quick.test | 10 | 0.000367s | 0.000815s | 0.000824s | byte equality observed |
| ref_vector.test | 10 | 0.000805s | 0.000831s | 0.000817s | byte equality observed |
| remove.test | 10 | 0.000818s | 0.000849s | 0.000879s | byte equality observed |
| remove_if.test | 10 | 0.000844s | 0.000843s | 0.000859s | byte equality observed |
| repetitive_view.test | 10 | 0.000804s | 0.000834s | 0.000821s | byte equality observed |
| replace.test | 10 | 0.000802s | 0.000821s | 0.000826s | byte equality observed |
| replace_if.test | 10 | 0.000828s | 0.000855s | 0.000854s | byte equality observed |
| reverse.test | 10 | 0.000836s | 0.000879s | 0.000864s | byte equality observed |
| reverse_fold.test | 10 | 0.000825s | 0.000852s | 0.000836s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.000831s | 0.000826s | 0.000819s | byte equality observed |
| reverse_view.test | 10 | 0.000821s | 0.000857s | 0.000829s | byte equality observed |
| segmented_find.test | 10 | 0.000816s | 0.000818s | 0.000825s | byte equality observed |
| segmented_find_if.test | 10 | 0.000842s | 0.000795s | 0.000811s | byte equality observed |
| segmented_fold.test | 10 | 0.000846s | 0.000837s | 0.000832s | byte equality observed |
| segmented_for_each.test | 10 | 0.000857s | 0.000824s | 0.000839s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.000857s | 0.000827s | 0.000855s | byte equality observed |
| set.test | 10 | 0.000845s | 0.000842s | 0.000822s | byte equality observed |
| single_view.test | 10 | 0.000842s | 0.000804s | 0.000837s | byte equality observed |
| std_array.test | 10 | 0.000804s | 0.000834s | 0.000793s | byte equality observed |
| std_pair.test | 10 | 0.000824s | 0.000830s | 0.000826s | byte equality observed |
| std_tuple.test | 10 | 0.000811s | 0.000815s | 0.000834s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.000809s | 0.000798s | 0.000844s | byte equality observed |
| swap.test | 10 | 0.000821s | 0.000816s | 0.000852s | byte equality observed |
| transform.test | 10 | 0.000832s | 0.000809s | 0.000810s | byte equality observed |
| transform_view.test | 10 | 0.000845s | 0.000823s | 0.000855s | byte equality observed |
| tuple_comparison.test | 10 | 0.000837s | 0.000792s | 0.000804s | byte equality observed |
| tuple_construction.test | 10 | 0.000831s | 0.000808s | 0.000813s | byte equality observed |
| tuple_conversion.test | 10 | 0.000824s | 0.000818s | 0.000794s | byte equality observed |
| tuple_copy.test | 10 | 0.000816s | 0.000828s | 0.000800s | byte equality observed |
| tuple_element.test | 10 | 0.000810s | 0.000808s | 0.000788s | byte equality observed |
| tuple_hash.test | 10 | 0.000826s | 0.000815s | 0.000817s | byte equality observed |
| tuple_make.test | 10 | 0.000830s | 0.000826s | 0.000804s | byte equality observed |
| tuple_misc.test | 10 | 0.000831s | 0.000802s | 0.000812s | byte equality observed |
| tuple_mutate.test | 10 | 0.000816s | 0.000795s | 0.000815s | byte equality observed |
| tuple_nest.test | 10 | 0.000827s | 0.000809s | 0.000823s | byte equality observed |
| tuple_tie.test | 10 | 0.000825s | 0.000775s | 0.000836s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.000829s | 0.000810s | 0.000842s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.000828s | 0.000769s | 0.000816s | byte equality observed |
| unfused.test | 10 | 0.000804s | 0.000798s | 0.000840s | byte equality observed |
| unfused_typed.test | 10 | 0.000827s | 0.000816s | 0.000831s | byte equality observed |
| vector_comparison.test | 10 | 0.000821s | 0.000802s | 0.000819s | byte equality observed |
| vector_construction.test | 10 | 0.000826s | 0.000812s | 0.000829s | byte equality observed |
| vector_conversion.test | 10 | 0.000820s | 0.000824s | 0.000838s | byte equality observed |
| vector_copy.test | 10 | 0.000840s | 0.000864s | 0.000821s | byte equality observed |
| vector_hash.test | 10 | 0.000840s | 0.000862s | 0.000823s | byte equality observed |
| vector_iterator.test | 10 | 0.000812s | 0.000809s | 0.000822s | byte equality observed |
| vector_make.test | 10 | 0.000827s | 0.000819s | 0.000810s | byte equality observed |
| vector_misc.test | 10 | 0.000828s | 0.000849s | 0.000814s | byte equality observed |
| vector_move.test | 10 | 0.000828s | 0.000831s | 0.000819s | byte equality observed |
| vector_mutate.test | 10 | 0.000829s | 0.000820s | 0.000810s | byte equality observed |
| vector_n.test | 10 | 0.000830s | 0.000846s | 0.000817s | byte equality observed |
| vector_nest.test | 10 | 0.000816s | 0.000841s | 0.000834s | byte equality observed |
| vector_tie.test | 10 | 0.000818s | 0.000834s | 0.000794s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000823s | 0.000798s | 0.000814s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000812s | 0.000830s | 0.000789s | byte equality observed |
| vector_value_at.test | 10 | 0.000804s | 0.000837s | 0.000808s | byte equality observed |
| zip.test | 10 | 0.000797s | 0.000833s | 0.000820s | byte equality observed |
| zip2.test | 10 | 0.000807s | 0.000817s | 0.000806s | byte equality observed |
| zip_ignore.test | 10 | 0.000810s | 0.000789s | 0.000822s | byte equality observed |
| zip_view.test | 10 | 0.000799s | 0.000808s | 0.000807s | byte equality observed |
| zip_view2.test | 10 | 0.000788s | 0.000806s | 0.000816s | byte equality observed |
| zip_view_ignore.test | 10 | 0.000805s | 0.000782s | 0.000840s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45710374989).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
