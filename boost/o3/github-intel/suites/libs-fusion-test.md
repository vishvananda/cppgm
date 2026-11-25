# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.287207 | 0.629475 | 0.792010 | 0.001095 | 0.001289 | 0.001133 |
| any.test | RUN | 0.282052 | 0.596231 | 0.766106 | 0.001342 | 0.001223 | 0.001113 |
| clear.test | RUN | 0.203886 | 0.563621 | 0.624048 | 0.000946 | 0.001299 | 0.001230 |
| copy.test | RUN | 0.170582 | 0.413833 | 0.504154 | 0.001333 | 0.001433 | 0.001231 |
| count.test | RUN | 0.196490 | 0.455781 | 0.568382 | 0.001367 | 0.001204 | 0.001123 |
| count_if.test | RUN | 0.182701 | 0.422002 | 0.503406 | 0.001171 | 0.001346 | 0.001224 |
| erase.test | RUN | 0.265616 | 0.757523 | 0.841955 | 0.001182 | 0.001328 | 0.001078 |
| erase_key.test | RUN | 0.255657 | 0.751558 | 0.808215 | 0.001289 | 0.001213 | 0.001153 |
| filter.test | RUN | 0.231414 | 0.637205 | 0.726636 | 0.001625 | 0.001222 | 0.001135 |
| filter_if.test | RUN | 0.261208 | 0.754909 | 0.864452 | 0.001274 | 0.001246 | 0.001176 |
| find.test | RUN | 0.223802 | 0.505572 | 0.659498 | 0.001288 | 0.001332 | 0.001311 |
| find_if.test | RUN | 0.213764 | 0.461708 | 0.595026 | 0.001349 | 0.001240 | 0.001424 |
| fold.test | RUN | 0.231690 | 0.577701 | 0.740038 | 0.001436 | 0.001506 | 0.001162 |
| for_each.test | RUN | 0.208592 | 0.530429 | 0.643377 | 0.001414 | 0.001309 | 0.001274 |
| insert.test | RUN | 0.305197 | 0.941643 | 1.046795 | 0.001405 | 0.001390 | 0.001119 |
| insert_range.test | RUN | 0.309377 | 0.942123 | 1.046404 | 0.001288 | 0.000964 | 0.001151 |
| iter_fold.test | RUN | 0.353492 | 0.891453 | 1.245887 | 0.001503 | 0.001436 | 0.001233 |
| move.test | RUN | 0.181875 | 0.417321 | 0.539309 | 0.001392 | 0.001250 | 0.001307 |
| none.test | RUN | 0.294037 | 0.608523 | 0.779572 | 0.000935 | 0.001224 | 0.001187 |
| pop_back.test | RUN | 0.282969 | 0.815335 | 0.921578 | 0.001188 | 0.001351 | 0.001269 |
| pop_front.test | RUN | 0.235751 | 0.667716 | 0.765023 | 0.001480 | 0.001467 | 0.001147 |
| push_back.test | RUN | 0.297923 | 0.952963 | 1.022556 | 0.001524 | 0.001378 | 0.001136 |
| push_front.test | RUN | 0.267566 | 0.785107 | 0.856465 | 0.001289 | 0.001362 | 0.001152 |
| remove.test | RUN | 0.294349 | 0.895934 | 1.005179 | 0.001486 | 0.001256 | 0.001123 |
| remove_if.test | RUN | 0.261343 | 0.744211 | 0.872489 | 0.001331 | 0.001359 | 0.001250 |
| replace.test | RUN | 0.253868 | 0.739162 | 0.801963 | 0.001437 | 0.001342 | 0.001067 |
| replace_if.test | RUN | 0.248149 | 0.734835 | 0.779496 | 0.001571 | 0.001321 | 0.001172 |
| reverse_fold.test | RUN | 0.387131 | 0.995812 | 1.328373 | 0.001354 | 0.001181 | 0.001138 |
| reverse_iter_fold.test | RUN | 0.396740 | 1.029769 | 1.418437 | 0.001232 | 0.001242 | 0.001275 |
| reverse.test | RUN | 0.246307 | 0.757221 | 0.799885 | 0.001184 | 0.001357 | 0.001246 |
| segmented_for_each.test | RUN | 0.428882 | 1.439759 | 1.670780 | 0.001140 | 0.001297 | 0.001152 |
| segmented_find.test | RUN | 0.264598 | 0.739111 | 0.928606 | 0.001264 | 0.001152 | 0.001137 |
| segmented_find_if.test | RUN | 0.260027 | 0.744173 | 0.896460 | 0.001262 | 0.001202 | 0.001146 |
| segmented_fold.test | RUN | 0.323107 | 0.997031 | 1.172021 | 0.001414 | 0.001356 | 0.001340 |
| transform.test | RUN | 0.260490 | 0.789637 | 0.851648 | 0.001248 | 0.001325 | 0.001352 |
| join.test | RUN | 0.198076 | 0.477945 | 0.595921 | 0.001283 | 0.001291 | 0.001160 |
| zip.test | RUN | 0.341073 | 0.893828 | 1.138437 | 0.001224 | 0.001273 | 0.001187 |
| zip2.test | RUN | 0.336488 | 0.871375 | 1.089059 | 0.001393 | 0.001334 | 0.001257 |
| zip_ignore.test | RUN | 0.247882 | 0.581318 | 0.710830 | 0.001224 | 0.001235 | 0.001216 |
| flatten.test | RUN | 0.231812 | 0.660024 | 0.725891 | 0.001153 | 0.001406 | 0.001234 |
| ticket-5490.test | COMPILE | 0.124832 | 0.281286 | 0.323971 | — | — | — |
| as_deque.test | RUN | 0.231176 | 0.615446 | 0.773265 | 0.001335 | 0.001442 | 0.001292 |
| as_list.test | RUN | 0.262253 | 0.786438 | 0.854265 | 0.001472 | 0.001485 | 0.001206 |
| as_map.test | RUN | 0.263195 | 0.765126 | 0.857953 | 0.001235 | 0.001226 | 0.001213 |
| as_map_assoc.test | RUN | 0.247668 | 0.703329 | 0.799634 | 0.001246 | 0.001266 | 0.001247 |
| as_set.test | RUN | 0.300269 | 0.884285 | 0.995903 | 0.001544 | 0.001415 | 0.001200 |
| as_vector.test | RUN | 0.264397 | 0.798109 | 0.869804 | 0.001442 | 0.001446 | 0.001102 |
| boost_tuple.test | RUN | 0.267708 | 0.783716 | 0.859796 | 0.001201 | 0.001162 | 0.001112 |
| boost_tuple_iterator.test | RUN | 0.181524 | 0.450916 | 0.522254 | 0.001251 | 0.001200 | 0.001250 |
| cons.test | RUN | 0.336812 | 0.892171 | 1.018374 | 0.001237 | 0.001481 | 0.001162 |
| convert_boost_tuple.test | RUN | 0.210489 | 0.676394 | 0.682693 | 0.001413 | 0.001297 | 0.001159 |
| convert_deque.test | RUN | 0.210120 | 0.671965 | 0.665001 | 0.001376 | 0.001280 | 0.001254 |
| convert_list.test | RUN | 0.211370 | 0.687012 | 0.675166 | 0.001078 | 0.001160 | 0.001129 |
| convert_std_pair.test | RUN | 0.217680 | 0.683270 | 0.688950 | 0.001296 | 0.001243 | 0.001280 |
| convert_std_tuple.test | RUN | 0.206849 | 0.668842 | 0.673835 | 0.001441 | 0.001370 | 0.001150 |
| convert_vector.test | RUN | 0.210040 | 0.667547 | 0.665096 | 0.000989 | 0.001350 | 0.001120 |
| filter_view.test | RUN | 0.251448 | 0.708015 | 0.805254 | 0.001350 | 0.001317 | 0.001176 |
| hash.test | RUN | 0.249650 | 0.636269 | 0.757803 | 0.001542 | 0.001485 | 0.001322 |
| io.test | RUN | 0.267396 | 0.903915 | 0.923173 | 0.001436 | 0.001547 | 0.001517 |
| iterator_range.test | RUN | 0.238785 | 0.673356 | 0.762878 | 0.001238 | 0.001483 | 0.001295 |
| joint_view.test | RUN | 0.325415 | 1.131538 | 1.177355 | 0.001383 | 0.001372 | 0.001258 |
| list_comparison.test | RUN | 0.182351 | 0.465400 | 0.542680 | 0.001604 | 0.001314 | 0.001055 |
| list_construction.test | RUN | 0.183304 | 0.450768 | 0.556904 | 0.001339 | 0.001294 | 0.001097 |
| list_copy.test | RUN | 0.275084 | 0.829998 | 0.929572 | 0.001257 | 0.001207 | 0.001245 |
| list_iterator.test | RUN | 0.173448 | 0.441856 | 0.519815 | 0.001310 | 0.001394 | 0.001155 |
| list_hash.test | RUN | 0.247400 | 0.944025 | 0.764254 | 0.001224 | 0.001422 | 0.001145 |
| list_make.test | RUN | 0.191186 | 0.491554 | 0.579821 | 0.001208 | 0.001200 | 0.001273 |
| list_misc.test | RUN | 0.250761 | 0.570764 | 0.715665 | 0.001264 | 0.001246 | 0.001156 |
| list_mutate.test | RUN | 0.169786 | 0.392973 | 0.469614 | 0.001501 | 0.001202 | 0.001217 |
| list_nest.test | RUN | 0.359807 | 1.131991 | 1.342577 | 0.001115 | 0.001354 | 0.001246 |
| list_tie.test | RUN | 0.181843 | 0.436911 | 0.524410 | 0.001304 | 0.001370 | 0.001347 |
| list_value_at.test | RUN | 0.171427 | 0.422607 | 0.496885 | 0.001454 | 0.001281 | 0.001353 |
| deque_comparison.test | RUN | 0.183096 | 0.468247 | 0.584429 | 0.001345 | 0.001255 | 0.001261 |
| deque_construction.test | RUN | 0.190194 | 0.438036 | 0.544630 | 0.001391 | 0.001336 | 0.001192 |
| deque_copy.test | RUN | 0.266338 | 0.761130 | 0.877525 | 0.001435 | 0.001149 | 0.001175 |
| deque_iterator.test | RUN | 0.185900 | 0.472905 | 0.540228 | 0.001393 | 0.001387 | 0.001254 |
| deque_hash.test | RUN | 0.253203 | 0.875739 | 0.777825 | 0.001154 | 0.001388 | 0.001144 |
| deque_is_constructible.test | COMPILE | 0.100002 | 0.200955 | 0.239737 | — | — | — |
| deque_make.test | RUN | 0.184948 | 0.471887 | 0.568368 | 0.001333 | 0.001276 | 0.001111 |
| deque_misc.test | RUN | 0.237829 | 0.581504 | 0.696235 | 0.001217 | 0.001406 | 0.001162 |
| deque_move.test | RUN | 0.184198 | 0.483799 | 0.545780 | 0.001436 | 0.001169 | 0.001137 |
| deque_mutate.test | RUN | 0.170485 | 0.388779 | 0.472392 | 0.001176 | 0.001425 | 0.001139 |
| deque_nest.test | RUN | 0.520340 | 1.839955 | 2.143236 | 0.001275 | 0.001211 | 0.001101 |
| deque_tie.test | RUN | 0.170551 | 0.411497 | 0.510124 | 0.001379 | 0.001411 | 0.001036 |
| deque_value_at.test | RUN | 0.170653 | 0.402543 | 0.495323 | 0.001209 | 0.001160 | 0.001174 |
| front_extended_deque.test | RUN | 0.247571 | 0.612035 | 0.748786 | 0.001362 | 0.001352 | 0.001289 |
| back_extended_deque.test | RUN | 0.243247 | 0.601031 | 0.729047 | 0.001245 | 0.001119 | 0.001199 |
| make_list.test | RUN | 0.201583 | 0.488738 | 0.575655 | 0.001185 | 0.001154 | 0.001307 |
| make_vector.test | RUN | 0.188768 | 0.493341 | 0.615276 | 0.001191 | 0.001199 | 0.001082 |
| map.test | RUN | 0.254189 | 0.746394 | 0.814124 | 0.001499 | 0.001279 | 0.001189 |
| map_comparison.test | RUN | 0.187983 | 0.478447 | 0.553664 | 0.001205 | 0.001328 | 0.001243 |
| map_construction.test | RUN | 0.189322 | 0.458172 | 0.567817 | 0.001177 | 0.001330 | 0.001184 |
| map_copy.test | RUN | 0.224893 | 0.587632 | 0.699311 | 0.001252 | 0.001242 | 0.001167 |
| map_misc.test | RUN | 0.236032 | 0.585789 | 0.697896 | 0.001206 | 0.001177 | 0.001106 |
| map_move.test | RUN | 0.184062 | 0.493117 | 0.553706 | 0.001120 | 0.001198 | 0.001284 |
| map_mutate.test | RUN | 0.168837 | 0.391866 | 0.484070 | 0.001208 | 0.001220 | 0.001212 |
| map_tie.test | RUN | 0.178568 | 0.378490 | 0.486820 | 0.001269 | 0.001216 | 0.001127 |
| nil.test | RUN | 0.118597 | 0.277299 | 0.330905 | 0.001277 | 0.001134 | 0.001214 |
| nview.test | RUN | 0.233097 | 0.571750 | 0.715639 | 0.001250 | 0.001374 | 0.001231 |
| reverse_view.test | RUN | 0.319797 | 0.977153 | 1.059566 | 0.001208 | 0.001224 | 0.001310 |
| segmented_iterator_range.test | RUN | 0.351031 | 1.155611 | 1.337843 | 0.001307 | 0.001460 | 0.001364 |
| set.test | RUN | 0.232230 | 0.637485 | 0.739068 | 0.001235 | 0.001217 | 0.001222 |
| single_view.test | RUN | 0.211528 | 0.585061 | 0.688710 | 0.001252 | 0.001210 | 0.001264 |
| std_pair.test | RUN | 0.267066 | 0.741976 | 0.842542 | 0.001395 | 0.001335 | 0.001113 |
| boost_array.test | RUN | 0.216229 | 0.518683 | 0.637346 | 0.001179 | 0.001296 | 0.001122 |
| array.test | RUN | 0.219613 | 0.524533 | 0.630735 | 0.001288 | 0.001305 | 0.001146 |
| std_array.test | RUN | 0.218608 | 0.518138 | 0.621645 | 0.001217 | 0.001262 | 0.001168 |
| tuple_comparison.test | RUN | 0.193604 | 0.489113 | 0.580769 | 0.001203 | 0.001181 | 0.001173 |
| tuple_construction.test | RUN | 0.201647 | 0.479811 | 0.591643 | 0.001217 | 0.001327 | 0.001149 |
| tuple_conversion.test | RUN | 0.447682 | 1.521185 | 1.971012 | 0.001460 | 0.001394 | 0.001060 |
| tuple_copy.test | RUN | 0.290792 | 0.876827 | 1.022077 | 0.001287 | 0.001343 | 0.001181 |
| tuple_element.test | RUN | 0.183594 | 0.436651 | 0.530373 | 0.001283 | 0.001310 | 0.001116 |
| tuple_make.test | RUN | 0.206611 | 0.509303 | 0.584508 | 0.001207 | 0.001281 | 0.001193 |
| tuple_misc.test | RUN | 0.251309 | 0.618571 | 0.730121 | 0.001177 | 0.001083 | 0.001138 |
| tuple_mutate.test | RUN | 0.175163 | 0.421769 | 0.554561 | 0.001320 | 0.001374 | 0.001137 |
| tuple_nest.test | RUN | 0.760288 | 3.140274 | 3.684754 | 0.001211 | 0.001209 | 0.001276 |
| tuple_hash.test | RUN | 0.254597 | 0.934453 | 0.759386 | 0.001319 | 0.001132 | 0.001129 |
| tuple_tie.test | RUN | 0.185458 | 0.451039 | 0.574371 | 0.001379 | 0.001403 | 0.001108 |
| tuple_traits__maybe_variadic.test | RUN | 0.206663 | 0.561314 | 0.589940 | 0.001341 | 0.001155 | 0.001268 |
| tuple_traits__no_variadic.test | RUN | 0.227288 | 0.590747 | 0.660733 | 0.001213 | 0.001389 | 0.001205 |
| transform_view.test | RUN | 0.303509 | 0.969225 | 1.031994 | 0.001201 | 0.001260 | 0.001171 |
| identity_view.test | RUN | 0.290633 | 0.886070 | 0.966694 | 0.001267 | 0.001180 | 0.001240 |
| vector_comparison.test | RUN | 0.182623 | 0.470223 | 0.616330 | 0.001422 | 0.001162 | 0.001180 |
| vector_construction.test | RUN | 0.184107 | 0.441106 | 0.532648 | 0.001278 | 0.001391 | 0.001180 |
| vector_conversion.test | RUN | 0.545402 | 2.016616 | 2.413896 | 0.001276 | 0.001318 | 0.001112 |
| vector_copy.test | RUN | 0.286671 | 0.869217 | 1.029109 | 0.001142 | 0.001256 | 0.001146 |
| vector_iterator.test | RUN | 0.175155 | 0.463441 | 0.538631 | 0.001341 | 0.001248 | 0.001271 |
| vector_make.test | RUN | 0.186484 | 0.484212 | 0.571493 | 0.001310 | 0.001218 | 0.001207 |
| vector_misc.test | RUN | 0.233953 | 0.589182 | 0.735796 | 0.001198 | 0.001202 | 0.001142 |
| vector_move.test | RUN | 0.192317 | 0.490528 | 0.544048 | 0.001313 | 0.001130 | 0.001182 |
| vector_mutate.test | RUN | 0.165436 | 0.393619 | 0.475109 | 0.001162 | 0.001265 | 0.001118 |
| vector_n.test | RUN | 0.211845 | 0.500808 | 0.627035 | 0.001438 | 0.001303 | 0.001148 |
| vector_nest.test | RUN | 0.768237 | 3.370933 | 3.721704 | 0.001195 | 0.001234 | 0.001150 |
| vector_hash.test | RUN | 0.241226 | 0.902115 | 0.761359 | 0.001291 | 0.001220 | 0.001320 |
| vector_tie.test | RUN | 0.181443 | 0.438685 | 0.509355 | 0.001358 | 0.001396 | 0.001224 |
| vector_traits__maybe_variadic.test | RUN | 0.191888 | 0.501950 | 0.543019 | 0.001317 | 0.001242 | 0.001294 |
| vector_traits__no_variadic.test | RUN | 0.203314 | 0.554601 | 0.563309 | 0.001211 | 0.001279 | 0.001099 |
| vector_value_at.test | RUN | 0.169872 | 0.402157 | 0.509301 | 0.001284 | 0.001381 | 0.001082 |
| zip_view.test | RUN | 0.354655 | 0.974610 | 1.229812 | 0.001392 | 0.001178 | 0.001289 |
| zip_view2.test | RUN | 0.291552 | 0.758563 | 0.992127 | 0.001173 | 0.001295 | 0.001079 |
| zip_view_ignore.test | RUN | 0.265015 | 0.693764 | 0.836097 | 0.001318 | 0.001257 | 0.001241 |
| repetitive_view.test | RUN | 0.460337 | 1.276709 | 1.630279 | 0.001149 | 0.001245 | 0.001264 |
| deduce_sequence.test | RUN | 0.221261 | 0.539364 | 0.649949 | 0.001329 | 0.001366 | 0.001194 |
| adapt_adt_named.test | RUN | 0.268071 | 0.777953 | 0.888051 | 0.001217 | 0.001247 | 0.001341 |
| adapt_adt_named_empty.test | RUN | 0.233312 | 0.604983 | 0.699960 | 0.001210 | 0.001442 | 0.001364 |
| adapt_adt.test | RUN | 0.298835 | 1.020658 | 1.017210 | 0.001268 | 0.001397 | 0.001274 |
| adapt_adt_empty.test | RUN | 0.227121 | 0.611161 | 0.695384 | 0.001120 | 0.001378 | 0.001307 |
| adapt_assoc_adt_named.test | RUN | 0.300372 | 0.789240 | 0.914716 | 0.001240 | 0.001335 | 0.001226 |
| adapt_assoc_adt_named_empty.test | RUN | 0.229623 | 0.616886 | 0.695296 | 0.001261 | 0.001252 | 0.001195 |
| adapt_assoc_adt.test | RUN | 0.300663 | 0.827211 | 0.942707 | 0.001310 | 0.001226 | 0.001287 |
| adapt_assoc_adt_empty.test | RUN | 0.224560 | 0.605236 | 0.693104 | 0.001518 | 0.001371 | 0.000860 |
| adapt_assoc_struct_named.test | RUN | 0.281660 | 0.788897 | 0.882383 | 0.001138 | 0.001312 | 0.001115 |
| adapt_assoc_struct_named_empty.test | RUN | 0.230408 | 0.614855 | 0.686278 | 0.001199 | 0.001369 | 0.001202 |
| adapt_assoc_struct.test | RUN | 0.261617 | 0.735543 | 0.835072 | 0.001411 | 0.001220 | 0.001155 |
| adapt_assoc_struct_empty.test | RUN | 0.223842 | 0.596680 | 0.698343 | 0.001201 | 0.001359 | 0.001122 |
| adapt_assoc_tpl_adt.test | RUN | 0.309835 | 0.855925 | 0.961506 | 0.001212 | 0.001206 | 0.001296 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.231711 | 0.622731 | 0.697244 | 0.001137 | 0.001381 | 0.001286 |
| adapt_assoc_tpl_struct.test | RUN | 0.249353 | 0.724365 | 0.804337 | 0.001189 | 0.001326 | 0.001255 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.226489 | 0.615506 | 0.695464 | 0.001145 | 0.001423 | 0.001238 |
| adapt_struct_named.test | RUN | 0.260155 | 0.750544 | 0.820359 | 0.001305 | 0.001215 | 0.001210 |
| adapt_struct_named_empty.test | RUN | 0.233319 | 0.610299 | 0.696908 | 0.001152 | 0.001310 | 0.001397 |
| adapt_struct.test | RUN | 0.287797 | 0.850148 | 0.948071 | 0.001360 | 0.001254 | 0.001406 |
| adapt_struct_empty.test | RUN | 0.225554 | 0.625338 | 0.701238 | 0.001309 | 0.001331 | 0.001418 |
| adapt_tpl_adt.test | RUN | 0.297728 | 0.989983 | 1.002709 | 0.001285 | 0.001278 | 0.001216 |
| adapt_tpl_adt_empty.test | RUN | 0.232383 | 0.624423 | 0.696896 | 0.001431 | 0.001307 | 0.001338 |
| adapt_tpl_struct.test | RUN | 0.239499 | 0.681943 | 0.785624 | 0.001523 | 0.001151 | 0.001122 |
| adapt_tpl_struct_empty.test | RUN | 0.227329 | 0.621564 | 0.704877 | 0.001223 | 0.001189 | 0.001349 |
| adt_attribute_proxy.test | RUN | 0.254266 | 0.598458 | 0.738305 | 0.001262 | 0.001400 | 0.001204 |
| define_struct.test | RUN | 0.306055 | 0.853204 | 0.965550 | 0.001249 | 0.001250 | 0.001173 |
| define_struct_empty.test | RUN | 0.270148 | 0.687350 | 0.798099 | 0.001187 | 0.001517 | 0.001139 |
| define_struct_move.test | RUN | 0.172718 | 0.391295 | 0.462795 | 0.001525 | 0.001233 | 0.001103 |
| define_struct_inline.test | RUN | 0.335683 | 1.021948 | 1.089507 | 0.001218 | 0.001431 | 0.001165 |
| define_struct_inline_empty.test | RUN | 0.273222 | 0.683292 | 0.804240 | 0.001190 | 0.001188 | 0.001134 |
| define_struct_inline_move.test | RUN | 0.171844 | 0.397852 | 0.483069 | 0.001245 | 0.001382 | 0.001233 |
| define_assoc_struct.test | RUN | 0.304741 | 0.799964 | 0.938569 | 0.001233 | 0.001276 | 0.001238 |
| define_assoc_struct_empty.test | RUN | 0.269342 | 0.697772 | 0.789424 | 0.001347 | 0.001239 | 0.001188 |
| define_assoc_struct_move.test | RUN | 0.167822 | 0.386352 | 0.474902 | 0.001184 | 0.001335 | 0.001261 |
| define_tpl_struct.test | RUN | 0.301462 | 0.797905 | 0.929920 | 0.001396 | 0.001148 | 0.001248 |
| define_tpl_struct_empty.test | RUN | 0.270850 | 0.708387 | 0.809746 | 0.001368 | 0.001389 | 0.001091 |
| define_tpl_struct_move.test | RUN | 0.177319 | 0.382305 | 0.480694 | 0.001214 | 0.001424 | 0.001116 |
| define_tpl_struct_inline.test | RUN | 0.310883 | 0.943862 | 1.017752 | 0.001170 | 0.001226 | 0.001177 |
| define_tpl_struct_inline_empty.test | RUN | 0.272248 | 0.680280 | 0.790426 | 0.001220 | 0.001294 | 0.001085 |
| define_tpl_struct_inline_move.test | RUN | 0.169908 | 0.394569 | 0.488245 | 0.001212 | 0.001261 | 0.001218 |
| define_assoc_tpl_struct.test | RUN | 0.301987 | 0.830664 | 0.921659 | 0.001277 | 0.001391 | 0.001287 |
| define_assoc_tpl_struct_empty.test | RUN | 0.269781 | 0.685104 | 0.806753 | 0.001133 | 0.001066 | 0.001101 |
| define_assoc_tpl_struct_move.test | RUN | 0.171351 | 0.397067 | 0.476993 | 0.001308 | 0.001158 | 0.001213 |
| std_tuple.test | RUN | 0.182182 | 0.437084 | 0.525354 | 0.001345 | 0.001176 | 0.001141 |
| std_tuple_iterator.test | RUN | 0.180283 | 0.459666 | 0.539683 | 0.001177 | 0.001279 | 0.001298 |
| ref_vector.test | RUN | 0.202717 | 0.476441 | 0.568733 | 0.001304 | 0.001208 | 0.001194 |
| flatten_view.test | RUN | 0.220756 | 0.588158 | 0.689196 | 0.001231 | 0.001179 | 0.001238 |
| github-159.test | COMPILE | 0.094725 | 0.209344 | 0.258027 | — | — | — |
| github-176.test | RUN | 0.203803 | 0.518998 | 0.563760 | 0.001359 | 0.001136 | 0.001285 |
| size.test | COMPILE | 0.166649 | 0.360902 | 0.458775 | — | — | — |
| fused.test | RUN | 0.232760 | 0.539373 | 0.663930 | 0.001253 | 0.001289 | 0.001148 |
| fused_function_object.test | RUN | 0.181828 | 0.413340 | 0.509456 | 0.001018 | 0.001282 | 0.001260 |
| fused_procedure.test | RUN | 0.226214 | 0.526071 | 0.640792 | 0.001322 | 0.001266 | 0.001134 |
| unfused.test | RUN | 0.186427 | 0.429668 | 0.514184 | 0.001204 | 0.001210 | 0.001071 |
| unfused_typed.test | RUN | 0.184824 | 0.462500 | 0.541440 | 0.001345 | 0.001303 | 0.001151 |
| make_fused.test | RUN | 0.237452 | 0.554801 | 0.662579 | 0.001174 | 0.001239 | 0.001178 |
| make_fused_function_object.test | RUN | 0.178469 | 0.411654 | 0.505077 | 0.001309 | 0.001496 | 0.001104 |
| make_fused_procedure.test | RUN | 0.228007 | 0.521479 | 0.643700 | 0.001187 | 0.001376 | 0.001287 |
| make_unfused.test | RUN | 0.176960 | 0.423576 | 0.529185 | 0.001420 | 0.001349 | 0.001278 |
| invoke.test | RUN | 0.459070 | 1.544388 | 1.852062 | 0.001296 | 0.001132 | 0.001227 |
| invoke_function_object.test | RUN | 0.228848 | 0.556997 | 0.661404 | 0.001360 | 0.001295 | 0.001384 |
| invoke_procedure.test | RUN | 0.367821 | 1.138702 | 1.354620 | 0.001393 | 0.001405 | 0.001241 |
| swap.test | RUN | 0.279132 | 0.694547 | 0.859219 | 0.001164 | 0.001329 | 0.001385 |
| is_sequence.test | COMPILE | 0.045112 | 0.096784 | 0.107798 | — | — | — |
| is_view.test | COMPILE | 0.045851 | 0.097129 | 0.106722 | — | — | — |
| pair_deque.test | COMPILE | 0.099196 | 0.221285 | 0.277248 | — | — | — |
| pair_list.test | COMPILE | 0.096948 | 0.212174 | 0.246379 | — | — | — |
| pair_map.test | COMPILE | 0.101607 | 0.225222 | 0.283144 | — | — | — |
| pair_set.test | COMPILE | 0.103471 | 0.227406 | 0.259696 | — | — | — |
| pair_vector.test | COMPILE | 0.100394 | 0.216841 | 0.250817 | — | — | — |
| pair_nest.test | COMPILE | 0.039718 | 0.088314 | 0.097655 | — | — | — |
| index_sequence.test | COMPILE | 0.033434 | 0.059543 | 0.074297 | — | — | — |
| and.test | COMPILE | 0.026549 | 0.045488 | 0.051253 | — | — | — |
| tag_of.test | COMPILE | 0.045627 | 0.093146 | 0.098271 | — | — | — |
| unused.test | COMPILE | 0.022916 | 0.059446 | 0.065850 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.041255 | 0.092794 | 0.090901 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.034536 | 0.065045 | 0.095508 | — | — | — |
| quick.test | RUN | 0.134506 | 0.310002 | 0.336206 | 0.000367 | 0.000840 | 0.000910 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.003× | 1.004×, 1.002× | 1.002× |
| clang | 0.998× | 1.002×, 0.994× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45651777895).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.000810s | 0.000819s | 0.000825s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.000823s | 0.000808s | 0.000828s | byte equality observed |
| adapt_adt_named.test | 10 | 0.000828s | 0.000839s | 0.000862s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.000849s | 0.000830s | 0.000827s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.000830s | 0.000828s | 0.000825s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.000837s | 0.000827s | 0.000820s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.000812s | 0.000840s | 0.000858s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.000809s | 0.000820s | 0.000852s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.000811s | 0.000823s | 0.000819s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.000822s | 0.000815s | 0.000805s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.000824s | 0.000807s | 0.000829s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.000820s | 0.000825s | 0.000844s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.000835s | 0.000822s | 0.000846s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.000825s | 0.000827s | 0.000831s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.000825s | 0.000831s | 0.000810s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.000845s | 0.000836s | 0.000818s | byte equality observed |
| adapt_struct.test | 10 | 0.000815s | 0.000820s | 0.000827s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.000816s | 0.000809s | 0.000801s | byte equality observed |
| adapt_struct_named.test | 10 | 0.000822s | 0.000799s | 0.000807s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.000807s | 0.000800s | 0.000793s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.000807s | 0.000810s | 0.000815s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.000796s | 0.000812s | 0.000829s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.000823s | 0.000792s | 0.000830s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.000825s | 0.000789s | 0.000848s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.000808s | 0.000827s | 0.000766s | byte equality observed |
| all.test | 10 | 0.000795s | 0.000780s | 0.000817s | byte equality observed |
| any.test | 10 | 0.000811s | 0.000791s | 0.000767s | byte equality observed |
| array.test | 10 | 0.000796s | 0.000775s | 0.000792s | byte equality observed |
| as_deque.test | 10 | 0.000796s | 0.000792s | 0.000792s | byte equality observed |
| as_list.test | 10 | 0.000823s | 0.000845s | 0.000806s | byte equality observed |
| as_map.test | 10 | 0.000807s | 0.000806s | 0.000816s | byte equality observed |
| as_map_assoc.test | 10 | 0.000834s | 0.000820s | 0.000809s | byte equality observed |
| as_set.test | 10 | 0.000835s | 0.000828s | 0.000813s | byte equality observed |
| as_vector.test | 10 | 0.000844s | 0.000830s | 0.000809s | byte equality observed |
| back_extended_deque.test | 10 | 0.000818s | 0.000810s | 0.000797s | byte equality observed |
| boost_array.test | 10 | 0.000797s | 0.000804s | 0.000808s | byte equality observed |
| boost_tuple.test | 10 | 0.000814s | 0.000825s | 0.000836s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.000801s | 0.000780s | 0.000840s | byte equality observed |
| clear.test | 10 | 0.000812s | 0.000814s | 0.000819s | byte equality observed |
| cons.test | 10 | 0.000832s | 0.000788s | 0.000826s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.000793s | 0.000823s | 0.000786s | byte equality observed |
| convert_deque.test | 10 | 0.000810s | 0.000812s | 0.000802s | byte equality observed |
| convert_list.test | 10 | 0.000808s | 0.000823s | 0.000804s | byte equality observed |
| convert_std_pair.test | 10 | 0.000798s | 0.000827s | 0.000773s | byte equality observed |
| convert_std_tuple.test | 10 | 0.000806s | 0.000836s | 0.000800s | byte equality observed |
| convert_vector.test | 10 | 0.000803s | 0.000827s | 0.000804s | byte equality observed |
| copy.test | 10 | 0.000830s | 0.000821s | 0.000801s | byte equality observed |
| count.test | 10 | 0.000824s | 0.000828s | 0.000806s | byte equality observed |
| count_if.test | 10 | 0.000806s | 0.000833s | 0.000805s | byte equality observed |
| deduce_sequence.test | 10 | 0.000809s | 0.000813s | 0.000805s | byte equality observed |
| define_assoc_struct.test | 10 | 0.000795s | 0.000842s | 0.000848s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.000813s | 0.000845s | 0.000797s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.000799s | 0.000804s | 0.000808s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.000826s | 0.000839s | 0.000821s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.000818s | 0.000857s | 0.000818s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000815s | 0.000813s | 0.000833s | byte equality observed |
| define_struct.test | 10 | 0.000829s | 0.000817s | 0.000860s | byte equality observed |
| define_struct_empty.test | 10 | 0.000815s | 0.000852s | 0.000849s | byte equality observed |
| define_struct_inline.test | 10 | 0.000825s | 0.000800s | 0.000833s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.000819s | 0.000811s | 0.000817s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000801s | 0.000807s | 0.000827s | byte equality observed |
| define_struct_move.test | 10 | 0.000819s | 0.000790s | 0.000805s | byte equality observed |
| define_tpl_struct.test | 10 | 0.000808s | 0.000800s | 0.000838s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.000839s | 0.000782s | 0.000840s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.000851s | 0.000831s | 0.000865s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.000862s | 0.000796s | 0.000850s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000804s | 0.000778s | 0.000794s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000819s | 0.000793s | 0.000798s | byte equality observed |
| deque_comparison.test | 10 | 0.000808s | 0.000811s | 0.000793s | byte equality observed |
| deque_construction.test | 10 | 0.000792s | 0.000807s | 0.000801s | byte equality observed |
| deque_copy.test | 10 | 0.000819s | 0.000781s | 0.000791s | byte equality observed |
| deque_hash.test | 10 | 0.000807s | 0.000837s | 0.000786s | byte equality observed |
| deque_iterator.test | 10 | 0.000823s | 0.000815s | 0.000809s | byte equality observed |
| deque_make.test | 10 | 0.000834s | 0.000791s | 0.000828s | byte equality observed |
| deque_misc.test | 10 | 0.000815s | 0.000807s | 0.000832s | byte equality observed |
| deque_move.test | 10 | 0.000828s | 0.000815s | 0.000799s | byte equality observed |
| deque_mutate.test | 10 | 0.000829s | 0.000809s | 0.000825s | byte equality observed |
| deque_nest.test | 10 | 0.000797s | 0.000775s | 0.000808s | byte equality observed |
| deque_tie.test | 10 | 0.000796s | 0.000778s | 0.000825s | byte equality observed |
| deque_value_at.test | 10 | 0.000802s | 0.000814s | 0.000842s | byte equality observed |
| erase.test | 10 | 0.000816s | 0.000845s | 0.000805s | byte equality observed |
| erase_key.test | 10 | 0.000837s | 0.000825s | 0.000817s | byte equality observed |
| filter.test | 10 | 0.000802s | 0.000809s | 0.000842s | byte equality observed |
| filter_if.test | 10 | 0.000832s | 0.000792s | 0.000822s | byte equality observed |
| filter_view.test | 10 | 0.000839s | 0.000808s | 0.000850s | byte equality observed |
| find.test | 10 | 0.000844s | 0.000793s | 0.000840s | byte equality observed |
| find_if.test | 10 | 0.000818s | 0.000803s | 0.000833s | byte equality observed |
| flatten.test | 10 | 0.000831s | 0.000800s | 0.000824s | byte equality observed |
| flatten_view.test | 10 | 0.000842s | 0.000823s | 0.000839s | byte equality observed |
| fold.test | 10 | 0.000847s | 0.000829s | 0.000828s | byte equality observed |
| for_each.test | 10 | 0.000843s | 0.000824s | 0.000815s | byte equality observed |
| front_extended_deque.test | 10 | 0.000825s | 0.000834s | 0.000803s | byte equality observed |
| fused.test | 10 | 0.000797s | 0.000816s | 0.000790s | byte equality observed |
| fused_function_object.test | 10 | 0.000805s | 0.000816s | 0.000782s | byte equality observed |
| fused_procedure.test | 10 | 0.000825s | 0.000794s | 0.000831s | byte equality observed |
| github-176.test | 10 | 0.000809s | 0.000811s | 0.000807s | byte equality observed |
| hash.test | 10 | 0.000822s | 0.000776s | 0.000819s | byte equality observed |
| identity_view.test | 10 | 0.000799s | 0.000813s | 0.000842s | byte equality observed |
| insert.test | 10 | 0.000833s | 0.000825s | 0.000878s | byte equality observed |
| insert_range.test | 10 | 0.000823s | 0.000813s | 0.000850s | byte equality observed |
| invoke.test | 10 | 0.000789s | 0.000821s | 0.000797s | byte equality observed |
| invoke_function_object.test | 10 | 0.000783s | 0.000819s | 0.000808s | byte equality observed |
| invoke_procedure.test | 10 | 0.000792s | 0.000795s | 0.000801s | byte equality observed |
| io.test | 10 | 0.000889s | 0.000905s | 0.000906s | byte equality observed |
| iter_fold.test | 10 | 0.000811s | 0.000799s | 0.000811s | byte equality observed |
| iterator_range.test | 10 | 0.000816s | 0.000816s | 0.000811s | byte equality observed |
| join.test | 10 | 0.000811s | 0.000802s | 0.000803s | byte equality observed |
| joint_view.test | 10 | 0.000838s | 0.000814s | 0.000844s | byte equality observed |
| list_comparison.test | 10 | 0.000802s | 0.000785s | 0.000798s | byte equality observed |
| list_construction.test | 10 | 0.000800s | 0.000822s | 0.000802s | byte equality observed |
| list_copy.test | 10 | 0.000823s | 0.000813s | 0.000829s | byte equality observed |
| list_hash.test | 10 | 0.000812s | 0.000817s | 0.000837s | byte equality observed |
| list_iterator.test | 10 | 0.000798s | 0.000796s | 0.000832s | byte equality observed |
| list_make.test | 10 | 0.000805s | 0.000814s | 0.000808s | byte equality observed |
| list_misc.test | 10 | 0.000802s | 0.000823s | 0.000825s | byte equality observed |
| list_mutate.test | 10 | 0.000816s | 0.000808s | 0.000826s | byte equality observed |
| list_nest.test | 10 | 0.000815s | 0.000811s | 0.000820s | byte equality observed |
| list_tie.test | 10 | 0.000824s | 0.000787s | 0.000796s | byte equality observed |
| list_value_at.test | 10 | 0.000811s | 0.000792s | 0.000821s | byte equality observed |
| make_fused.test | 10 | 0.000826s | 0.000793s | 0.000835s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000823s | 0.000796s | 0.000800s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000798s | 0.000791s | 0.000803s | byte equality observed |
| make_list.test | 10 | 0.000809s | 0.000813s | 0.000793s | byte equality observed |
| make_unfused.test | 10 | 0.000823s | 0.000796s | 0.000795s | byte equality observed |
| make_vector.test | 10 | 0.000796s | 0.000789s | 0.000818s | byte equality observed |
| map.test | 10 | 0.000815s | 0.000820s | 0.000833s | byte equality observed |
| map_comparison.test | 10 | 0.000796s | 0.000811s | 0.000795s | byte equality observed |
| map_construction.test | 10 | 0.000790s | 0.000792s | 0.000789s | byte equality observed |
| map_copy.test | 10 | 0.000776s | 0.000825s | 0.000793s | byte equality observed |
| map_misc.test | 10 | 0.000805s | 0.000804s | 0.000800s | byte equality observed |
| map_move.test | 10 | 0.000831s | 0.000805s | 0.000803s | byte equality observed |
| map_mutate.test | 10 | 0.000803s | 0.000816s | 0.000794s | byte equality observed |
| map_tie.test | 10 | 0.000780s | 0.000772s | 0.000783s | byte equality observed |
| move.test | 10 | 0.000813s | 0.000791s | 0.000791s | byte equality observed |
| nil.test | 10 | 0.000806s | 0.000800s | 0.000791s | byte equality observed |
| none.test | 10 | 0.000792s | 0.000803s | 0.000822s | byte equality observed |
| nview.test | 10 | 0.000797s | 0.000800s | 0.000817s | byte equality observed |
| pop_back.test | 10 | 0.000831s | 0.000845s | 0.000844s | byte equality observed |
| pop_front.test | 10 | 0.000824s | 0.000786s | 0.000852s | byte equality observed |
| push_back.test | 10 | 0.000839s | 0.000818s | 0.000841s | byte equality observed |
| push_front.test | 10 | 0.000813s | 0.000843s | 0.000835s | byte equality observed |
| quick.test | 10 | 0.000362s | 0.000822s | 0.000801s | byte equality observed |
| ref_vector.test | 10 | 0.000794s | 0.000820s | 0.000802s | byte equality observed |
| remove.test | 10 | 0.000835s | 0.000859s | 0.000815s | byte equality observed |
| remove_if.test | 10 | 0.000837s | 0.000846s | 0.000836s | byte equality observed |
| repetitive_view.test | 10 | 0.000797s | 0.000794s | 0.000767s | byte equality observed |
| replace.test | 10 | 0.000827s | 0.000810s | 0.000831s | byte equality observed |
| replace_if.test | 10 | 0.000846s | 0.000816s | 0.000825s | byte equality observed |
| reverse.test | 10 | 0.000815s | 0.000833s | 0.000823s | byte equality observed |
| reverse_fold.test | 10 | 0.000805s | 0.000801s | 0.000820s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.000800s | 0.000786s | 0.000807s | byte equality observed |
| reverse_view.test | 10 | 0.000822s | 0.000812s | 0.000834s | byte equality observed |
| segmented_find.test | 10 | 0.000831s | 0.000807s | 0.000826s | byte equality observed |
| segmented_find_if.test | 10 | 0.000821s | 0.000793s | 0.000809s | byte equality observed |
| segmented_fold.test | 10 | 0.000851s | 0.000830s | 0.000816s | byte equality observed |
| segmented_for_each.test | 10 | 0.000825s | 0.000834s | 0.000821s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.000825s | 0.000863s | 0.000834s | byte equality observed |
| set.test | 10 | 0.000822s | 0.000807s | 0.000822s | byte equality observed |
| single_view.test | 10 | 0.000830s | 0.000804s | 0.000811s | byte equality observed |
| std_array.test | 10 | 0.000812s | 0.000773s | 0.000820s | byte equality observed |
| std_pair.test | 10 | 0.000801s | 0.000821s | 0.000827s | byte equality observed |
| std_tuple.test | 10 | 0.000806s | 0.000833s | 0.000805s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.000820s | 0.000800s | 0.000797s | byte equality observed |
| swap.test | 10 | 0.000827s | 0.000842s | 0.000795s | byte equality observed |
| transform.test | 10 | 0.000821s | 0.000789s | 0.000811s | byte equality observed |
| transform_view.test | 10 | 0.000826s | 0.000817s | 0.000842s | byte equality observed |
| tuple_comparison.test | 10 | 0.000820s | 0.000804s | 0.000804s | byte equality observed |
| tuple_construction.test | 10 | 0.000812s | 0.000805s | 0.000815s | byte equality observed |
| tuple_conversion.test | 10 | 0.000809s | 0.000805s | 0.000815s | byte equality observed |
| tuple_copy.test | 10 | 0.000809s | 0.000820s | 0.000793s | byte equality observed |
| tuple_element.test | 10 | 0.000823s | 0.000825s | 0.000794s | byte equality observed |
| tuple_hash.test | 10 | 0.000794s | 0.000818s | 0.000800s | byte equality observed |
| tuple_make.test | 10 | 0.000822s | 0.000794s | 0.000799s | byte equality observed |
| tuple_misc.test | 10 | 0.000796s | 0.000812s | 0.000797s | byte equality observed |
| tuple_mutate.test | 10 | 0.000801s | 0.000804s | 0.000800s | byte equality observed |
| tuple_nest.test | 10 | 0.000800s | 0.000822s | 0.000783s | byte equality observed |
| tuple_tie.test | 10 | 0.000791s | 0.000832s | 0.000789s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.000794s | 0.000826s | 0.000796s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.000797s | 0.000834s | 0.000817s | byte equality observed |
| unfused.test | 10 | 0.000808s | 0.000838s | 0.000808s | byte equality observed |
| unfused_typed.test | 10 | 0.000804s | 0.000818s | 0.000792s | byte equality observed |
| vector_comparison.test | 10 | 0.000784s | 0.000771s | 0.000816s | byte equality observed |
| vector_construction.test | 10 | 0.000788s | 0.000818s | 0.000781s | byte equality observed |
| vector_conversion.test | 10 | 0.000812s | 0.000793s | 0.000828s | byte equality observed |
| vector_copy.test | 10 | 0.000808s | 0.000805s | 0.000808s | byte equality observed |
| vector_hash.test | 10 | 0.000808s | 0.000830s | 0.000811s | byte equality observed |
| vector_iterator.test | 10 | 0.000798s | 0.000821s | 0.000812s | byte equality observed |
| vector_make.test | 10 | 0.000806s | 0.000838s | 0.000802s | byte equality observed |
| vector_misc.test | 10 | 0.000816s | 0.000829s | 0.000797s | byte equality observed |
| vector_move.test | 10 | 0.000831s | 0.000814s | 0.000800s | byte equality observed |
| vector_mutate.test | 10 | 0.000800s | 0.000804s | 0.000812s | byte equality observed |
| vector_n.test | 10 | 0.000811s | 0.000798s | 0.000795s | byte equality observed |
| vector_nest.test | 10 | 0.000789s | 0.000796s | 0.000805s | byte equality observed |
| vector_tie.test | 10 | 0.000794s | 0.000813s | 0.000823s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000810s | 0.000777s | 0.000811s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000799s | 0.000792s | 0.000803s | byte equality observed |
| vector_value_at.test | 10 | 0.000802s | 0.000807s | 0.000820s | byte equality observed |
| zip.test | 10 | 0.000793s | 0.000813s | 0.000839s | byte equality observed |
| zip2.test | 10 | 0.000809s | 0.000816s | 0.000834s | byte equality observed |
| zip_ignore.test | 10 | 0.000772s | 0.000813s | 0.000836s | byte equality observed |
| zip_view.test | 10 | 0.000806s | 0.000784s | 0.000819s | byte equality observed |
| zip_view2.test | 10 | 0.000807s | 0.000771s | 0.000826s | byte equality observed |
| zip_view_ignore.test | 10 | 0.000800s | 0.000770s | 0.000781s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45651777895).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
