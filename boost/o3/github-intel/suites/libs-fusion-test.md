# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.271057 | 0.623788 | 0.798659 | 0.000988 | 0.001163 | 0.001251 |
| any.test | RUN | 0.261923 | 0.585500 | 0.762768 | 0.001058 | 0.001261 | 0.001234 |
| clear.test | RUN | 0.195728 | 0.549112 | 0.623460 | 0.001157 | 0.001414 | 0.001121 |
| copy.test | RUN | 0.164384 | 0.402374 | 0.508672 | 0.001232 | 0.001149 | 0.001158 |
| count.test | RUN | 0.181245 | 0.456914 | 0.573600 | 0.001257 | 0.001368 | 0.001233 |
| count_if.test | RUN | 0.172044 | 0.420016 | 0.522696 | 0.001168 | 0.001352 | 0.001285 |
| erase.test | RUN | 0.247443 | 0.768769 | 0.857363 | 0.001077 | 0.001432 | 0.001150 |
| erase_key.test | RUN | 0.236874 | 0.761803 | 0.808653 | 0.001057 | 0.001404 | 0.001188 |
| filter.test | RUN | 0.216308 | 0.635294 | 0.733648 | 0.001227 | 0.001349 | 0.001164 |
| filter_if.test | RUN | 0.242004 | 0.758967 | 0.858625 | 0.001303 | 0.001513 | 0.001218 |
| find.test | RUN | 0.204401 | 0.508768 | 0.651526 | 0.001134 | 0.001272 | 0.001235 |
| find_if.test | RUN | 0.191931 | 0.470209 | 0.591555 | 0.001087 | 0.001459 | 0.001187 |
| fold.test | RUN | 0.217899 | 0.587905 | 0.732689 | 0.001311 | 0.001373 | 0.001132 |
| for_each.test | RUN | 0.193189 | 0.537235 | 0.639263 | 0.001139 | 0.001589 | 0.001256 |
| insert.test | RUN | 0.287476 | 0.959684 | 1.037495 | 0.001209 | 0.001415 | 0.001266 |
| insert_range.test | RUN | 0.294526 | 0.976461 | 1.036299 | 0.001064 | 0.001503 | 0.001118 |
| iter_fold.test | RUN | 0.328895 | 0.910957 | 1.228998 | 0.001133 | 0.001442 | 0.001147 |
| move.test | RUN | 0.163716 | 0.424122 | 0.538027 | 0.001238 | 0.001424 | 0.001087 |
| none.test | RUN | 0.269192 | 0.616775 | 0.788224 | 0.001119 | 0.001297 | 0.001136 |
| pop_back.test | RUN | 0.274371 | 0.846335 | 0.913140 | 0.001203 | 0.001459 | 0.001159 |
| pop_front.test | RUN | 0.229993 | 0.678937 | 0.746436 | 0.001176 | 0.001299 | 0.001048 |
| push_back.test | RUN | 0.284838 | 0.961809 | 1.015312 | 0.001149 | 0.001438 | 0.001174 |
| push_front.test | RUN | 0.255113 | 0.799005 | 0.864813 | 0.001245 | 0.001499 | 0.001089 |
| remove.test | RUN | 0.275656 | 0.900174 | 0.996306 | 0.001099 | 0.001428 | 0.001101 |
| remove_if.test | RUN | 0.250650 | 0.759582 | 0.845701 | 0.001156 | 0.001419 | 0.001077 |
| replace.test | RUN | 0.247825 | 0.736692 | 0.794537 | 0.001207 | 0.001381 | 0.001266 |
| replace_if.test | RUN | 0.235206 | 0.730936 | 0.782156 | 0.001312 | 0.001345 | 0.001135 |
| reverse_fold.test | RUN | 0.360451 | 1.006181 | 1.335493 | 0.001249 | 0.001184 | 0.001339 |
| reverse_iter_fold.test | RUN | 0.373803 | 1.039884 | 1.413311 | 0.001334 | 0.001376 | 0.001269 |
| reverse.test | RUN | 0.238651 | 0.749317 | 0.806299 | 0.001276 | 0.001340 | 0.001109 |
| segmented_for_each.test | RUN | 0.397506 | 1.426996 | 1.650539 | 0.001240 | 0.001446 | 0.001202 |
| segmented_find.test | RUN | 0.250782 | 0.746618 | 0.910509 | 0.001116 | 0.001306 | 0.001290 |
| segmented_find_if.test | RUN | 0.246591 | 0.765208 | 0.938643 | 0.001077 | 0.001405 | 0.001108 |
| segmented_fold.test | RUN | 0.309730 | 1.010693 | 1.179328 | 0.001071 | 0.001571 | 0.001197 |
| transform.test | RUN | 0.246190 | 0.802578 | 0.874897 | 0.001059 | 0.001546 | 0.001237 |
| join.test | RUN | 0.182013 | 0.476102 | 0.591398 | 0.001115 | 0.001283 | 0.001277 |
| zip.test | RUN | 0.316889 | 0.912171 | 1.124955 | 0.001226 | 0.001446 | 0.001212 |
| zip2.test | RUN | 0.306273 | 0.864694 | 1.097105 | 0.001131 | 0.001466 | 0.001097 |
| zip_ignore.test | RUN | 0.234094 | 0.598433 | 0.734925 | 0.001200 | 0.001254 | 0.001312 |
| flatten.test | RUN | 0.224662 | 0.664425 | 0.753503 | 0.001050 | 0.001415 | 0.001110 |
| ticket-5490.test | COMPILE | 0.116723 | 0.285720 | 0.327971 | — | — | — |
| as_deque.test | RUN | 0.220671 | 0.633164 | 0.778810 | 0.001314 | 0.001269 | 0.001075 |
| as_list.test | RUN | 0.255484 | 0.787120 | 0.848526 | 0.001176 | 0.001371 | 0.001147 |
| as_map.test | RUN | 0.247837 | 0.776466 | 0.844364 | 0.001128 | 0.001375 | 0.001138 |
| as_map_assoc.test | RUN | 0.243349 | 0.715231 | 0.795505 | 0.001041 | 0.001439 | 0.001185 |
| as_set.test | RUN | 0.286146 | 0.907835 | 0.983102 | 0.001424 | 0.001267 | 0.001133 |
| as_vector.test | RUN | 0.257979 | 0.800411 | 0.881240 | 0.001122 | 0.001240 | 0.001122 |
| boost_tuple.test | RUN | 0.256204 | 0.790563 | 0.860310 | 0.001011 | 0.001388 | 0.001108 |
| boost_tuple_iterator.test | RUN | 0.169837 | 0.457740 | 0.514612 | 0.001068 | 0.001359 | 0.001236 |
| cons.test | RUN | 0.317887 | 0.889770 | 1.013435 | 0.001114 | 0.001348 | 0.001098 |
| convert_boost_tuple.test | RUN | 0.198918 | 0.686724 | 0.674855 | 0.001502 | 0.001492 | 0.001165 |
| convert_deque.test | RUN | 0.200948 | 0.676669 | 0.673391 | 0.001191 | 0.001336 | 0.001111 |
| convert_list.test | RUN | 0.199750 | 0.688743 | 0.674316 | 0.000967 | 0.001244 | 0.001125 |
| convert_std_pair.test | RUN | 0.215256 | 0.688903 | 0.705531 | 0.001184 | 0.001317 | 0.001180 |
| convert_std_tuple.test | RUN | 0.202384 | 0.671289 | 0.670297 | 0.000831 | 0.001392 | 0.001079 |
| convert_vector.test | RUN | 0.200484 | 0.673264 | 0.678811 | 0.001266 | 0.001336 | 0.001085 |
| filter_view.test | RUN | 0.244197 | 0.710762 | 0.794582 | 0.001019 | 0.001328 | 0.001370 |
| hash.test | RUN | 0.239472 | 0.644054 | 0.762210 | 0.001275 | 0.001382 | 0.001244 |
| io.test | RUN | 0.260752 | 0.926279 | 0.919456 | 0.001334 | 0.001552 | 0.001262 |
| iterator_range.test | RUN | 0.226162 | 0.685851 | 0.757122 | 0.001315 | 0.001584 | 0.001197 |
| joint_view.test | RUN | 0.309082 | 1.149432 | 1.152234 | 0.001122 | 0.001486 | 0.001236 |
| list_comparison.test | RUN | 0.179911 | 0.468579 | 0.546745 | 0.001271 | 0.001383 | 0.001045 |
| list_construction.test | RUN | 0.170456 | 0.458936 | 0.540063 | 0.001106 | 0.001348 | 0.001166 |
| list_copy.test | RUN | 0.270857 | 0.849971 | 0.938085 | 0.001096 | 0.001263 | 0.001101 |
| list_iterator.test | RUN | 0.172460 | 0.460017 | 0.533466 | 0.001119 | 0.001499 | 0.001142 |
| list_hash.test | RUN | 0.235927 | 0.926175 | 0.768217 | 0.001056 | 0.001410 | 0.001139 |
| list_make.test | RUN | 0.189407 | 0.503553 | 0.583740 | 0.001260 | 0.001254 | 0.001231 |
| list_misc.test | RUN | 0.231902 | 0.601601 | 0.711742 | 0.001161 | 0.001332 | 0.001107 |
| list_mutate.test | RUN | 0.165512 | 0.402390 | 0.480046 | 0.001081 | 0.001330 | 0.001267 |
| list_nest.test | RUN | 0.335015 | 1.157906 | 1.332486 | 0.001035 | 0.001446 | 0.001235 |
| list_tie.test | RUN | 0.177657 | 0.454916 | 0.540655 | 0.001190 | 0.001460 | 0.001226 |
| list_value_at.test | RUN | 0.166556 | 0.414269 | 0.492743 | 0.001382 | 0.001382 | 0.001178 |
| deque_comparison.test | RUN | 0.175284 | 0.466795 | 0.544296 | 0.001055 | 0.001258 | 0.001220 |
| deque_construction.test | RUN | 0.177623 | 0.448212 | 0.581361 | 0.001078 | 0.001398 | 0.001119 |
| deque_copy.test | RUN | 0.255855 | 0.782776 | 0.868321 | 0.001327 | 0.001494 | 0.001063 |
| deque_iterator.test | RUN | 0.179922 | 0.481352 | 0.543472 | 0.001311 | 0.001243 | 0.001060 |
| deque_hash.test | RUN | 0.238929 | 0.895185 | 0.753980 | 0.001066 | 0.001583 | 0.001112 |
| deque_is_constructible.test | COMPILE | 0.092568 | 0.202561 | 0.243591 | — | — | — |
| deque_make.test | RUN | 0.182853 | 0.490936 | 0.566203 | 0.001271 | 0.001420 | 0.001151 |
| deque_misc.test | RUN | 0.230568 | 0.576729 | 0.688601 | 0.001114 | 0.001258 | 0.001124 |
| deque_move.test | RUN | 0.177601 | 0.503415 | 0.542936 | 0.001157 | 0.001230 | 0.001165 |
| deque_mutate.test | RUN | 0.161542 | 0.386879 | 0.474190 | 0.001159 | 0.001357 | 0.001121 |
| deque_nest.test | RUN | 0.491282 | 1.877822 | 2.140930 | 0.001219 | 0.001253 | 0.001165 |
| deque_tie.test | RUN | 0.165811 | 0.420787 | 0.496282 | 0.001094 | 0.001300 | 0.001106 |
| deque_value_at.test | RUN | 0.164351 | 0.411433 | 0.498783 | 0.001061 | 0.001243 | 0.001110 |
| front_extended_deque.test | RUN | 0.238798 | 0.612543 | 0.728037 | 0.001079 | 0.001358 | 0.001342 |
| back_extended_deque.test | RUN | 0.235676 | 0.608286 | 0.765960 | 0.001059 | 0.001325 | 0.001180 |
| make_list.test | RUN | 0.181123 | 0.502716 | 0.577373 | 0.001300 | 0.001337 | 0.001169 |
| make_vector.test | RUN | 0.182679 | 0.498753 | 0.555204 | 0.001056 | 0.001456 | 0.001151 |
| map.test | RUN | 0.245106 | 0.766759 | 0.854447 | 0.001342 | 0.001444 | 0.001187 |
| map_comparison.test | RUN | 0.176320 | 0.483100 | 0.558160 | 0.001258 | 0.001622 | 0.001193 |
| map_construction.test | RUN | 0.179319 | 0.459586 | 0.549738 | 0.001066 | 0.001360 | 0.001092 |
| map_copy.test | RUN | 0.220136 | 0.594875 | 0.684302 | 0.001026 | 0.001395 | 0.001152 |
| map_misc.test | RUN | 0.233030 | 0.597131 | 0.684741 | 0.001126 | 0.001351 | 0.001068 |
| map_move.test | RUN | 0.179887 | 0.512479 | 0.557904 | 0.001214 | 0.001347 | 0.001092 |
| map_mutate.test | RUN | 0.161420 | 0.402175 | 0.473076 | 0.001139 | 0.001280 | 0.001138 |
| map_tie.test | RUN | 0.170662 | 0.393162 | 0.494091 | 0.001065 | 0.001236 | 0.001184 |
| nil.test | RUN | 0.119182 | 0.276579 | 0.340468 | 0.001248 | 0.001459 | 0.001327 |
| nview.test | RUN | 0.223023 | 0.583499 | 0.708890 | 0.001133 | 0.001503 | 0.001190 |
| reverse_view.test | RUN | 0.300831 | 0.995261 | 1.060611 | 0.001080 | 0.001416 | 0.001359 |
| segmented_iterator_range.test | RUN | 0.343167 | 1.164442 | 1.329624 | 0.001243 | 0.001450 | 0.001331 |
| set.test | RUN | 0.215777 | 0.668357 | 0.747494 | 0.001040 | 0.001531 | 0.001356 |
| single_view.test | RUN | 0.201428 | 0.609336 | 0.679148 | 0.001100 | 0.001292 | 0.001108 |
| std_pair.test | RUN | 0.261203 | 0.784129 | 0.856654 | 0.001220 | 0.001314 | 0.001123 |
| boost_array.test | RUN | 0.215380 | 0.531805 | 0.645408 | 0.001076 | 0.001367 | 0.001193 |
| array.test | RUN | 0.210896 | 0.524660 | 0.627660 | 0.001046 | 0.001443 | 0.001293 |
| std_array.test | RUN | 0.212010 | 0.537274 | 0.632445 | 0.001062 | 0.001496 | 0.001205 |
| tuple_comparison.test | RUN | 0.188418 | 0.507719 | 0.588575 | 0.001041 | 0.001449 | 0.001171 |
| tuple_construction.test | RUN | 0.186398 | 0.517856 | 0.585068 | 0.001021 | 0.001451 | 0.001199 |
| tuple_conversion.test | RUN | 0.425001 | 1.596108 | 1.954733 | 0.001105 | 0.001246 | 0.001289 |
| tuple_copy.test | RUN | 0.280296 | 0.912211 | 1.025313 | 0.001212 | 0.001190 | 0.001209 |
| tuple_element.test | RUN | 0.172871 | 0.439650 | 0.550519 | 0.000996 | 0.001492 | 0.001260 |
| tuple_make.test | RUN | 0.192625 | 0.516989 | 0.614969 | 0.001066 | 0.001237 | 0.000836 |
| tuple_misc.test | RUN | 0.241339 | 0.630912 | 0.736021 | 0.001230 | 0.001402 | 0.001129 |
| tuple_mutate.test | RUN | 0.168401 | 0.430508 | 0.508416 | 0.001352 | 0.001168 | 0.001135 |
| tuple_nest.test | RUN | 0.718494 | 3.256916 | 3.705341 | 0.001069 | 0.001258 | 0.001141 |
| tuple_hash.test | RUN | 0.246001 | 0.928488 | 0.763824 | 0.001127 | 0.001403 | 0.001029 |
| tuple_tie.test | RUN | 0.180618 | 0.476181 | 0.565859 | 0.001112 | 0.001282 | 0.001249 |
| tuple_traits__maybe_variadic.test | RUN | 0.191514 | 0.564217 | 0.586809 | 0.001182 | 0.001180 | 0.001153 |
| tuple_traits__no_variadic.test | RUN | 0.222537 | 0.579026 | 0.633357 | 0.001122 | 0.001292 | 0.001278 |
| transform_view.test | RUN | 0.291943 | 0.978465 | 1.032478 | 0.001358 | 0.001448 | 0.001225 |
| identity_view.test | RUN | 0.279829 | 0.907098 | 0.995447 | 0.001221 | 0.001222 | 0.001221 |
| vector_comparison.test | RUN | 0.175254 | 0.481392 | 0.555648 | 0.001172 | 0.001264 | 0.001133 |
| vector_construction.test | RUN | 0.176068 | 0.443708 | 0.532238 | 0.001033 | 0.001307 | 0.001270 |
| vector_conversion.test | RUN | 0.524155 | 2.061967 | 2.535749 | 0.001190 | 0.001502 | 0.001146 |
| vector_copy.test | RUN | 0.272540 | 0.875649 | 0.983610 | 0.001057 | 0.001402 | 0.001187 |
| vector_iterator.test | RUN | 0.168587 | 0.482667 | 0.538791 | 0.001329 | 0.001360 | 0.001245 |
| vector_make.test | RUN | 0.179378 | 0.474889 | 0.579489 | 0.001135 | 0.001429 | 0.001272 |
| vector_misc.test | RUN | 0.228987 | 0.585461 | 0.694792 | 0.001065 | 0.001309 | 0.001087 |
| vector_move.test | RUN | 0.175602 | 0.509011 | 0.547594 | 0.001271 | 0.001321 | 0.001288 |
| vector_mutate.test | RUN | 0.162719 | 0.393342 | 0.528615 | 0.001044 | 0.001309 | 0.001145 |
| vector_n.test | RUN | 0.199637 | 0.500861 | 0.638625 | 0.001154 | 0.001463 | 0.001135 |
| vector_nest.test | RUN | 0.737799 | 3.464175 | 3.690607 | 0.001090 | 0.001235 | 0.001270 |
| vector_hash.test | RUN | 0.238399 | 0.906673 | 0.715961 | 0.001081 | 0.001496 | 0.001376 |
| vector_tie.test | RUN | 0.172137 | 0.443275 | 0.531725 | 0.001141 | 0.001448 | 0.001113 |
| vector_traits__maybe_variadic.test | RUN | 0.184643 | 0.485428 | 0.558286 | 0.001238 | 0.001165 | 0.001137 |
| vector_traits__no_variadic.test | RUN | 0.192568 | 0.548111 | 0.579723 | 0.001130 | 0.001282 | 0.001178 |
| vector_value_at.test | RUN | 0.166374 | 0.411549 | 0.498562 | 0.001077 | 0.001488 | 0.001333 |
| zip_view.test | RUN | 0.331083 | 1.013539 | 1.316136 | 0.001336 | 0.001275 | 0.001166 |
| zip_view2.test | RUN | 0.274163 | 0.761565 | 0.955892 | 0.001238 | 0.001366 | 0.001103 |
| zip_view_ignore.test | RUN | 0.255987 | 0.699231 | 0.858716 | 0.001105 | 0.001253 | 0.001297 |
| repetitive_view.test | RUN | 0.439188 | 1.267699 | 1.658853 | 0.001257 | 0.001323 | 0.001119 |
| deduce_sequence.test | RUN | 0.205838 | 0.545925 | 0.647712 | 0.001126 | 0.001332 | 0.001236 |
| adapt_adt_named.test | RUN | 0.257235 | 0.780054 | 0.876031 | 0.000893 | 0.001288 | 0.001116 |
| adapt_adt_named_empty.test | RUN | 0.221784 | 0.627451 | 0.710984 | 0.001089 | 0.001283 | 0.001441 |
| adapt_adt.test | RUN | 0.285172 | 1.023563 | 1.004493 | 0.001293 | 0.001316 | 0.001107 |
| adapt_adt_empty.test | RUN | 0.218584 | 0.627201 | 0.697009 | 0.001073 | 0.001192 | 0.001144 |
| adapt_assoc_adt_named.test | RUN | 0.281757 | 0.803195 | 0.908983 | 0.001126 | 0.001121 | 0.001166 |
| adapt_assoc_adt_named_empty.test | RUN | 0.224029 | 0.636156 | 0.693307 | 0.001128 | 0.001351 | 0.001240 |
| adapt_assoc_adt.test | RUN | 0.288665 | 0.842204 | 0.940867 | 0.001327 | 0.001352 | 0.001104 |
| adapt_assoc_adt_empty.test | RUN | 0.216015 | 0.628312 | 0.684471 | 0.001129 | 0.001340 | 0.001294 |
| adapt_assoc_struct_named.test | RUN | 0.276407 | 0.792343 | 0.883497 | 0.001053 | 0.001192 | 0.001108 |
| adapt_assoc_struct_named_empty.test | RUN | 0.217575 | 0.621584 | 0.680642 | 0.001228 | 0.001389 | 0.001202 |
| adapt_assoc_struct.test | RUN | 0.246465 | 0.749461 | 0.831350 | 0.001051 | 0.001221 | 0.001061 |
| adapt_assoc_struct_empty.test | RUN | 0.208843 | 0.619948 | 0.691060 | 0.001255 | 0.001198 | 0.001176 |
| adapt_assoc_tpl_adt.test | RUN | 0.298687 | 0.863142 | 0.969298 | 0.001140 | 0.001321 | 0.001268 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.218973 | 0.634487 | 0.694286 | 0.001068 | 0.001229 | 0.001286 |
| adapt_assoc_tpl_struct.test | RUN | 0.237344 | 0.729771 | 0.812015 | 0.001082 | 0.001309 | 0.001182 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.217559 | 0.628154 | 0.689684 | 0.001291 | 0.001120 | 0.001143 |
| adapt_struct_named.test | RUN | 0.246877 | 0.774570 | 0.817722 | 0.001125 | 0.001428 | 0.001099 |
| adapt_struct_named_empty.test | RUN | 0.220438 | 0.631332 | 0.696405 | 0.001069 | 0.001272 | 0.001192 |
| adapt_struct.test | RUN | 0.272340 | 0.865303 | 0.923356 | 0.001220 | 0.001379 | 0.001202 |
| adapt_struct_empty.test | RUN | 0.217170 | 0.624872 | 0.692634 | 0.001293 | 0.001374 | 0.001110 |
| adapt_tpl_adt.test | RUN | 0.279072 | 1.001817 | 0.975501 | 0.001097 | 0.001312 | 0.001237 |
| adapt_tpl_adt_empty.test | RUN | 0.230077 | 0.635276 | 0.692560 | 0.001101 | 0.001258 | 0.001479 |
| adapt_tpl_struct.test | RUN | 0.233973 | 0.690248 | 0.765056 | 0.001304 | 0.001374 | 0.001105 |
| adapt_tpl_struct_empty.test | RUN | 0.216555 | 0.640090 | 0.694736 | 0.001286 | 0.001250 | 0.001184 |
| adt_attribute_proxy.test | RUN | 0.244859 | 0.609175 | 0.737634 | 0.001158 | 0.001224 | 0.001166 |
| define_struct.test | RUN | 0.301096 | 0.854645 | 0.987049 | 0.001068 | 0.001132 | 0.001208 |
| define_struct_empty.test | RUN | 0.260616 | 0.712469 | 0.798734 | 0.001234 | 0.001238 | 0.001297 |
| define_struct_move.test | RUN | 0.166387 | 0.385396 | 0.474181 | 0.001104 | 0.001424 | 0.001295 |
| define_struct_inline.test | RUN | 0.325663 | 1.027299 | 1.105388 | 0.001139 | 0.001221 | 0.001197 |
| define_struct_inline_empty.test | RUN | 0.261481 | 0.724291 | 0.814949 | 0.001053 | 0.001271 | 0.001134 |
| define_struct_inline_move.test | RUN | 0.168920 | 0.387794 | 0.478845 | 0.001026 | 0.001279 | 0.001165 |
| define_assoc_struct.test | RUN | 0.290210 | 0.813011 | 0.944683 | 0.001199 | 0.001297 | 0.001201 |
| define_assoc_struct_empty.test | RUN | 0.268222 | 0.692850 | 0.811171 | 0.001103 | 0.001319 | 0.001263 |
| define_assoc_struct_move.test | RUN | 0.168388 | 0.378241 | 0.484896 | 0.001103 | 0.001329 | 0.001261 |
| define_tpl_struct.test | RUN | 0.285515 | 0.824308 | 0.928557 | 0.001114 | 0.001468 | 0.001294 |
| define_tpl_struct_empty.test | RUN | 0.269336 | 0.700550 | 0.812613 | 0.001068 | 0.001338 | 0.001218 |
| define_tpl_struct_move.test | RUN | 0.167972 | 0.397606 | 0.478963 | 0.001223 | 0.001373 | 0.001133 |
| define_tpl_struct_inline.test | RUN | 0.306337 | 0.960848 | 1.022161 | 0.001219 | 0.001530 | 0.001278 |
| define_tpl_struct_inline_empty.test | RUN | 0.261981 | 0.719661 | 0.824605 | 0.001249 | 0.001226 | 0.001295 |
| define_tpl_struct_inline_move.test | RUN | 0.167977 | 0.382405 | 0.483076 | 0.001059 | 0.001425 | 0.001174 |
| define_assoc_tpl_struct.test | RUN | 0.286810 | 0.828973 | 0.945411 | 0.001177 | 0.001475 | 0.001144 |
| define_assoc_tpl_struct_empty.test | RUN | 0.261729 | 0.702313 | 0.816206 | 0.001260 | 0.001141 | 0.001171 |
| define_assoc_tpl_struct_move.test | RUN | 0.163160 | 0.395995 | 0.475631 | 0.001284 | 0.001362 | 0.001261 |
| std_tuple.test | RUN | 0.172208 | 0.446041 | 0.540120 | 0.001137 | 0.001309 | 0.001157 |
| std_tuple_iterator.test | RUN | 0.171092 | 0.467882 | 0.538762 | 0.001085 | 0.001392 | 0.001167 |
| ref_vector.test | RUN | 0.192048 | 0.466952 | 0.578351 | 0.001136 | 0.001414 | 0.001147 |
| flatten_view.test | RUN | 0.202148 | 0.593482 | 0.688627 | 0.001053 | 0.001267 | 0.001150 |
| github-159.test | COMPILE | 0.095610 | 0.214829 | 0.246537 | — | — | — |
| github-176.test | RUN | 0.188781 | 0.535962 | 0.579514 | 0.001051 | 0.001414 | 0.001269 |
| size.test | COMPILE | 0.161190 | 0.370009 | 0.455334 | — | — | — |
| fused.test | RUN | 0.230353 | 0.548233 | 0.679644 | 0.001126 | 0.001446 | 0.001116 |
| fused_function_object.test | RUN | 0.166750 | 0.418484 | 0.507510 | 0.001102 | 0.001193 | 0.001128 |
| fused_procedure.test | RUN | 0.219073 | 0.545968 | 0.640924 | 0.001023 | 0.001425 | 0.001073 |
| unfused.test | RUN | 0.175444 | 0.440221 | 0.522068 | 0.001012 | 0.001292 | 0.001067 |
| unfused_typed.test | RUN | 0.177098 | 0.479987 | 0.548455 | 0.001233 | 0.001234 | 0.001128 |
| make_fused.test | RUN | 0.227165 | 0.562772 | 0.663001 | 0.001278 | 0.001322 | 0.001056 |
| make_fused_function_object.test | RUN | 0.174959 | 0.419469 | 0.511167 | 0.001076 | 0.001356 | 0.001036 |
| make_fused_procedure.test | RUN | 0.218376 | 0.536028 | 0.639187 | 0.001077 | 0.001347 | 0.001071 |
| make_unfused.test | RUN | 0.167341 | 0.425275 | 0.520460 | 0.001251 | 0.001424 | 0.001105 |
| invoke.test | RUN | 0.442023 | 1.584320 | 1.772355 | 0.001237 | 0.001198 | 0.001144 |
| invoke_function_object.test | RUN | 0.212495 | 0.547686 | 0.662460 | 0.001116 | 0.001284 | 0.001280 |
| invoke_procedure.test | RUN | 0.353797 | 1.156818 | 1.316247 | 0.001078 | 0.001345 | 0.001182 |
| swap.test | RUN | 0.266126 | 0.708840 | 0.844429 | 0.001049 | 0.001276 | 0.001239 |
| is_sequence.test | COMPILE | 0.043315 | 0.097683 | 0.105956 | — | — | — |
| is_view.test | COMPILE | 0.043538 | 0.097306 | 0.105405 | — | — | — |
| pair_deque.test | COMPILE | 0.096354 | 0.223891 | 0.259249 | — | — | — |
| pair_list.test | COMPILE | 0.093041 | 0.216675 | 0.245254 | — | — | — |
| pair_map.test | COMPILE | 0.095631 | 0.225417 | 0.271679 | — | — | — |
| pair_set.test | COMPILE | 0.097158 | 0.220464 | 0.265117 | — | — | — |
| pair_vector.test | COMPILE | 0.095819 | 0.221894 | 0.253205 | — | — | — |
| pair_nest.test | COMPILE | 0.037633 | 0.089212 | 0.099751 | — | — | — |
| index_sequence.test | COMPILE | 0.032490 | 0.061067 | 0.073664 | — | — | — |
| and.test | COMPILE | 0.025036 | 0.046777 | 0.051588 | — | — | — |
| tag_of.test | COMPILE | 0.043332 | 0.093235 | 0.098829 | — | — | — |
| unused.test | COMPILE | 0.022269 | 0.060521 | 0.058429 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.042720 | 0.070659 | 0.091529 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.025478 | 0.086693 | 0.081692 | — | — | — |
| quick.test | RUN | 0.123941 | 0.314546 | 0.340235 | 0.000392 | 0.000939 | 0.000846 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.004× | 1.013×, 0.996× | 0.996× |
| clang | 1.004× | 1.000×, 1.007× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44780058957).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.000813s | 0.000786s | 0.000807s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.000806s | 0.000806s | 0.000812s | byte equality observed |
| adapt_adt_named.test | 10 | 0.000843s | 0.000806s | 0.000795s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.000812s | 0.000811s | 0.000823s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.000830s | 0.000795s | 0.000836s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.000796s | 0.000794s | 0.000815s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.000810s | 0.000834s | 0.000842s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.000814s | 0.000805s | 0.000856s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.000828s | 0.000827s | 0.000815s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.000817s | 0.000842s | 0.000808s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.000811s | 0.000835s | 0.000819s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.000808s | 0.000805s | 0.000794s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.000815s | 0.000845s | 0.000811s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.000827s | 0.000804s | 0.000792s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.000822s | 0.000824s | 0.000827s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.000815s | 0.000805s | 0.000804s | byte equality observed |
| adapt_struct.test | 10 | 0.000822s | 0.000831s | 0.000802s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.000806s | 0.000809s | 0.000810s | byte equality observed |
| adapt_struct_named.test | 10 | 0.000803s | 0.000807s | 0.000799s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.000795s | 0.000799s | 0.000800s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.000829s | 0.000817s | 0.000800s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.000821s | 0.000820s | 0.000823s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.000818s | 0.000820s | 0.000819s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.000814s | 0.000812s | 0.000830s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.000811s | 0.000825s | 0.000800s | byte equality observed |
| all.test | 10 | 0.000791s | 0.000791s | 0.000785s | byte equality observed |
| any.test | 10 | 0.000812s | 0.000814s | 0.000815s | byte equality observed |
| array.test | 10 | 0.000809s | 0.000820s | 0.000816s | byte equality observed |
| as_deque.test | 10 | 0.000797s | 0.000807s | 0.000793s | byte equality observed |
| as_list.test | 10 | 0.000833s | 0.000821s | 0.000840s | byte equality observed |
| as_map.test | 10 | 0.000808s | 0.000802s | 0.000816s | byte equality observed |
| as_map_assoc.test | 10 | 0.000814s | 0.000824s | 0.000837s | byte equality observed |
| as_set.test | 10 | 0.000836s | 0.000822s | 0.000844s | byte equality observed |
| as_vector.test | 10 | 0.000840s | 0.000811s | 0.000813s | byte equality observed |
| back_extended_deque.test | 10 | 0.000786s | 0.000796s | 0.000813s | byte equality observed |
| boost_array.test | 10 | 0.000793s | 0.000805s | 0.000807s | byte equality observed |
| boost_tuple.test | 10 | 0.000817s | 0.000813s | 0.000822s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.000793s | 0.000812s | 0.000784s | byte equality observed |
| clear.test | 10 | 0.000810s | 0.000828s | 0.000799s | byte equality observed |
| cons.test | 10 | 0.000850s | 0.000809s | 0.000834s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.000799s | 0.000807s | 0.000798s | byte equality observed |
| convert_deque.test | 10 | 0.000840s | 0.000790s | 0.000800s | byte equality observed |
| convert_list.test | 10 | 0.000810s | 0.000787s | 0.000789s | byte equality observed |
| convert_std_pair.test | 10 | 0.000821s | 0.000809s | 0.000795s | byte equality observed |
| convert_std_tuple.test | 10 | 0.000812s | 0.000830s | 0.000793s | byte equality observed |
| convert_vector.test | 10 | 0.000804s | 0.000832s | 0.000802s | byte equality observed |
| copy.test | 10 | 0.000793s | 0.000795s | 0.000813s | byte equality observed |
| count.test | 10 | 0.000814s | 0.000813s | 0.000827s | byte equality observed |
| count_if.test | 10 | 0.000786s | 0.000798s | 0.000835s | byte equality observed |
| deduce_sequence.test | 10 | 0.000799s | 0.000797s | 0.000818s | byte equality observed |
| define_assoc_struct.test | 10 | 0.000802s | 0.000824s | 0.000782s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.000809s | 0.000825s | 0.000817s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.000801s | 0.000819s | 0.000787s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.000821s | 0.000812s | 0.000816s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.000805s | 0.000811s | 0.000785s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000803s | 0.000807s | 0.000806s | byte equality observed |
| define_struct.test | 10 | 0.000828s | 0.000799s | 0.000829s | byte equality observed |
| define_struct_empty.test | 10 | 0.000795s | 0.000800s | 0.000811s | byte equality observed |
| define_struct_inline.test | 10 | 0.000812s | 0.000799s | 0.000814s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.000815s | 0.000809s | 0.000778s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000828s | 0.000829s | 0.000800s | byte equality observed |
| define_struct_move.test | 10 | 0.000798s | 0.000787s | 0.000784s | byte equality observed |
| define_tpl_struct.test | 10 | 0.000832s | 0.000823s | 0.000805s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.000838s | 0.000844s | 0.000793s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.000827s | 0.000820s | 0.000821s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.000822s | 0.000829s | 0.000830s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000817s | 0.000819s | 0.000804s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000800s | 0.000813s | 0.000811s | byte equality observed |
| deque_comparison.test | 10 | 0.000807s | 0.000825s | 0.000816s | byte equality observed |
| deque_construction.test | 10 | 0.000821s | 0.000812s | 0.000813s | byte equality observed |
| deque_copy.test | 10 | 0.000800s | 0.000805s | 0.000805s | byte equality observed |
| deque_hash.test | 10 | 0.000791s | 0.000810s | 0.000791s | byte equality observed |
| deque_iterator.test | 10 | 0.000798s | 0.000776s | 0.000793s | byte equality observed |
| deque_make.test | 10 | 0.000808s | 0.000814s | 0.000812s | byte equality observed |
| deque_misc.test | 10 | 0.000820s | 0.000803s | 0.000827s | byte equality observed |
| deque_move.test | 10 | 0.000831s | 0.000829s | 0.000830s | byte equality observed |
| deque_mutate.test | 10 | 0.000799s | 0.000792s | 0.000829s | byte equality observed |
| deque_nest.test | 10 | 0.000782s | 0.000816s | 0.000794s | byte equality observed |
| deque_tie.test | 10 | 0.000782s | 0.000819s | 0.000781s | byte equality observed |
| deque_value_at.test | 10 | 0.000797s | 0.000793s | 0.000784s | byte equality observed |
| erase.test | 10 | 0.000799s | 0.000824s | 0.000841s | byte equality observed |
| erase_key.test | 10 | 0.000807s | 0.000854s | 0.000845s | byte equality observed |
| filter.test | 10 | 0.000819s | 0.000820s | 0.000855s | byte equality observed |
| filter_if.test | 10 | 0.000850s | 0.000836s | 0.000849s | byte equality observed |
| filter_view.test | 10 | 0.000832s | 0.000837s | 0.000812s | byte equality observed |
| find.test | 10 | 0.000846s | 0.000852s | 0.000811s | byte equality observed |
| find_if.test | 10 | 0.000818s | 0.000815s | 0.000811s | byte equality observed |
| flatten.test | 10 | 0.000826s | 0.000814s | 0.000799s | byte equality observed |
| flatten_view.test | 10 | 0.000808s | 0.000822s | 0.000825s | byte equality observed |
| fold.test | 10 | 0.000819s | 0.000818s | 0.000844s | byte equality observed |
| for_each.test | 10 | 0.000817s | 0.000826s | 0.000848s | byte equality observed |
| front_extended_deque.test | 10 | 0.000800s | 0.000814s | 0.000817s | byte equality observed |
| fused.test | 10 | 0.000809s | 0.000782s | 0.000801s | byte equality observed |
| fused_function_object.test | 10 | 0.000795s | 0.000809s | 0.000855s | byte equality observed |
| fused_procedure.test | 10 | 0.000791s | 0.000804s | 0.000829s | byte equality observed |
| github-176.test | 10 | 0.000778s | 0.000807s | 0.000797s | byte equality observed |
| hash.test | 10 | 0.000825s | 0.000842s | 0.000829s | byte equality observed |
| identity_view.test | 10 | 0.000821s | 0.000834s | 0.000832s | byte equality observed |
| insert.test | 10 | 0.000845s | 0.000834s | 0.000832s | byte equality observed |
| insert_range.test | 10 | 0.000823s | 0.000816s | 0.000834s | byte equality observed |
| invoke.test | 10 | 0.000803s | 0.000796s | 0.000799s | byte equality observed |
| invoke_function_object.test | 10 | 0.000809s | 0.000821s | 0.000798s | byte equality observed |
| invoke_procedure.test | 10 | 0.000813s | 0.000801s | 0.000797s | byte equality observed |
| io.test | 10 | 0.000895s | 0.000901s | 0.000893s | byte equality observed |
| iter_fold.test | 10 | 0.000805s | 0.000824s | 0.000795s | byte equality observed |
| iterator_range.test | 10 | 0.000805s | 0.000823s | 0.000804s | byte equality observed |
| join.test | 10 | 0.000802s | 0.000802s | 0.000787s | byte equality observed |
| joint_view.test | 10 | 0.000818s | 0.000807s | 0.000817s | byte equality observed |
| list_comparison.test | 10 | 0.000805s | 0.000817s | 0.000775s | byte equality observed |
| list_construction.test | 10 | 0.000802s | 0.000788s | 0.000802s | byte equality observed |
| list_copy.test | 10 | 0.000801s | 0.000794s | 0.000809s | byte equality observed |
| list_hash.test | 10 | 0.000804s | 0.000823s | 0.000800s | byte equality observed |
| list_iterator.test | 10 | 0.000793s | 0.000807s | 0.000814s | byte equality observed |
| list_make.test | 10 | 0.000800s | 0.000842s | 0.000793s | byte equality observed |
| list_misc.test | 10 | 0.000826s | 0.000814s | 0.000814s | byte equality observed |
| list_mutate.test | 10 | 0.000808s | 0.000807s | 0.000795s | byte equality observed |
| list_nest.test | 10 | 0.000814s | 0.000786s | 0.000792s | byte equality observed |
| list_tie.test | 10 | 0.000781s | 0.000793s | 0.000804s | byte equality observed |
| list_value_at.test | 10 | 0.000775s | 0.000785s | 0.000828s | byte equality observed |
| make_fused.test | 10 | 0.000799s | 0.000810s | 0.000827s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000792s | 0.000783s | 0.000810s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000793s | 0.000803s | 0.000824s | byte equality observed |
| make_list.test | 10 | 0.000808s | 0.000840s | 0.000824s | byte equality observed |
| make_unfused.test | 10 | 0.000822s | 0.000822s | 0.000800s | byte equality observed |
| make_vector.test | 10 | 0.000811s | 0.000789s | 0.000792s | byte equality observed |
| map.test | 10 | 0.000838s | 0.000813s | 0.000818s | byte equality observed |
| map_comparison.test | 10 | 0.000815s | 0.000814s | 0.000793s | byte equality observed |
| map_construction.test | 10 | 0.000809s | 0.000829s | 0.000814s | byte equality observed |
| map_copy.test | 10 | 0.000800s | 0.000822s | 0.000815s | byte equality observed |
| map_misc.test | 10 | 0.000801s | 0.000792s | 0.000795s | byte equality observed |
| map_move.test | 10 | 0.000792s | 0.000818s | 0.000827s | byte equality observed |
| map_mutate.test | 10 | 0.000796s | 0.000787s | 0.000820s | byte equality observed |
| map_tie.test | 10 | 0.000787s | 0.000808s | 0.000785s | byte equality observed |
| move.test | 10 | 0.000810s | 0.000818s | 0.000783s | byte equality observed |
| nil.test | 10 | 0.000808s | 0.000794s | 0.000807s | byte equality observed |
| none.test | 10 | 0.000796s | 0.000786s | 0.000801s | byte equality observed |
| nview.test | 10 | 0.000808s | 0.000830s | 0.000812s | byte equality observed |
| pop_back.test | 10 | 0.000816s | 0.000846s | 0.000850s | byte equality observed |
| pop_front.test | 10 | 0.000821s | 0.000859s | 0.000805s | byte equality observed |
| push_back.test | 10 | 0.000852s | 0.000844s | 0.000810s | byte equality observed |
| push_front.test | 10 | 0.000826s | 0.000823s | 0.000835s | byte equality observed |
| quick.test | 10 | 0.000354s | 0.000819s | 0.000790s | byte equality observed |
| ref_vector.test | 10 | 0.000795s | 0.000829s | 0.000803s | byte equality observed |
| remove.test | 10 | 0.000809s | 0.000826s | 0.000842s | byte equality observed |
| remove_if.test | 10 | 0.000815s | 0.000819s | 0.000859s | byte equality observed |
| repetitive_view.test | 10 | 0.000791s | 0.000808s | 0.000819s | byte equality observed |
| replace.test | 10 | 0.000835s | 0.000835s | 0.000836s | byte equality observed |
| replace_if.test | 10 | 0.000825s | 0.000811s | 0.000839s | byte equality observed |
| reverse.test | 10 | 0.000836s | 0.000814s | 0.000827s | byte equality observed |
| reverse_fold.test | 10 | 0.000797s | 0.000800s | 0.000831s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.000801s | 0.000810s | 0.000833s | byte equality observed |
| reverse_view.test | 10 | 0.000830s | 0.000835s | 0.000815s | byte equality observed |
| segmented_find.test | 10 | 0.000808s | 0.000829s | 0.000794s | byte equality observed |
| segmented_find_if.test | 10 | 0.000784s | 0.000808s | 0.000807s | byte equality observed |
| segmented_fold.test | 10 | 0.000811s | 0.000836s | 0.000797s | byte equality observed |
| segmented_for_each.test | 10 | 0.000830s | 0.000825s | 0.000810s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.000829s | 0.000867s | 0.000801s | byte equality observed |
| set.test | 10 | 0.000812s | 0.000798s | 0.000812s | byte equality observed |
| single_view.test | 10 | 0.000825s | 0.000794s | 0.000839s | byte equality observed |
| std_array.test | 10 | 0.000831s | 0.000777s | 0.000825s | byte equality observed |
| std_pair.test | 10 | 0.000835s | 0.000804s | 0.000817s | byte equality observed |
| std_tuple.test | 10 | 0.000819s | 0.000806s | 0.000826s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.000813s | 0.000788s | 0.000794s | byte equality observed |
| swap.test | 10 | 0.000815s | 0.000795s | 0.000801s | byte equality observed |
| transform.test | 10 | 0.000811s | 0.000819s | 0.000818s | byte equality observed |
| transform_view.test | 10 | 0.000840s | 0.000827s | 0.000847s | byte equality observed |
| tuple_comparison.test | 10 | 0.000788s | 0.000788s | 0.000846s | byte equality observed |
| tuple_construction.test | 10 | 0.000794s | 0.000781s | 0.000794s | byte equality observed |
| tuple_conversion.test | 10 | 0.000791s | 0.000809s | 0.000796s | byte equality observed |
| tuple_copy.test | 10 | 0.000812s | 0.000803s | 0.000797s | byte equality observed |
| tuple_element.test | 10 | 0.000803s | 0.000798s | 0.000801s | byte equality observed |
| tuple_hash.test | 10 | 0.000802s | 0.000806s | 0.000774s | byte equality observed |
| tuple_make.test | 10 | 0.000796s | 0.000792s | 0.000783s | byte equality observed |
| tuple_misc.test | 10 | 0.000786s | 0.000819s | 0.000794s | byte equality observed |
| tuple_mutate.test | 10 | 0.000802s | 0.000794s | 0.000792s | byte equality observed |
| tuple_nest.test | 10 | 0.000801s | 0.000796s | 0.000798s | byte equality observed |
| tuple_tie.test | 10 | 0.000819s | 0.000819s | 0.000810s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.000807s | 0.000792s | 0.000789s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.000833s | 0.000826s | 0.000797s | byte equality observed |
| unfused.test | 10 | 0.000813s | 0.000809s | 0.000788s | byte equality observed |
| unfused_typed.test | 10 | 0.000815s | 0.000791s | 0.000823s | byte equality observed |
| vector_comparison.test | 10 | 0.000788s | 0.000812s | 0.000807s | byte equality observed |
| vector_construction.test | 10 | 0.000786s | 0.000775s | 0.000820s | byte equality observed |
| vector_conversion.test | 10 | 0.000806s | 0.000800s | 0.000836s | byte equality observed |
| vector_copy.test | 10 | 0.000790s | 0.000770s | 0.000796s | byte equality observed |
| vector_hash.test | 10 | 0.000807s | 0.000802s | 0.000794s | byte equality observed |
| vector_iterator.test | 10 | 0.000815s | 0.000794s | 0.000821s | byte equality observed |
| vector_make.test | 10 | 0.000819s | 0.000799s | 0.000801s | byte equality observed |
| vector_misc.test | 10 | 0.000812s | 0.000810s | 0.000810s | byte equality observed |
| vector_move.test | 10 | 0.000820s | 0.000816s | 0.000789s | byte equality observed |
| vector_mutate.test | 10 | 0.000798s | 0.000797s | 0.000798s | byte equality observed |
| vector_n.test | 10 | 0.000818s | 0.000848s | 0.000818s | byte equality observed |
| vector_nest.test | 10 | 0.000823s | 0.000825s | 0.000785s | byte equality observed |
| vector_tie.test | 10 | 0.000814s | 0.000806s | 0.000823s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000800s | 0.000824s | 0.000825s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000804s | 0.000801s | 0.000804s | byte equality observed |
| vector_value_at.test | 10 | 0.000787s | 0.000819s | 0.000806s | byte equality observed |
| zip.test | 10 | 0.000807s | 0.000798s | 0.000786s | byte equality observed |
| zip2.test | 10 | 0.000834s | 0.000797s | 0.000817s | byte equality observed |
| zip_ignore.test | 10 | 0.000810s | 0.000796s | 0.000838s | byte equality observed |
| zip_view.test | 10 | 0.000796s | 0.000812s | 0.000834s | byte equality observed |
| zip_view2.test | 10 | 0.000805s | 0.000814s | 0.000816s | byte equality observed |
| zip_view_ignore.test | 10 | 0.000788s | 0.000791s | 0.000807s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44780058957).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
