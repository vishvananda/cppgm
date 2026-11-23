# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.272717 | 0.623446 | 0.799706 | 0.001047 | 0.001028 | 0.001186 |
| any.test | RUN | 0.265754 | 0.584367 | 0.750921 | 0.001132 | 0.001083 | 0.001122 |
| clear.test | RUN | 0.201007 | 0.549894 | 0.630379 | 0.001331 | 0.001274 | 0.001257 |
| copy.test | RUN | 0.168022 | 0.407412 | 0.502213 | 0.001389 | 0.001259 | 0.001176 |
| count.test | RUN | 0.187308 | 0.452939 | 0.569356 | 0.001197 | 0.001305 | 0.001117 |
| count_if.test | RUN | 0.174955 | 0.418811 | 0.524470 | 0.001111 | 0.001291 | 0.001110 |
| erase.test | RUN | 0.252659 | 0.755050 | 0.862687 | 0.001102 | 0.001379 | 0.001230 |
| erase_key.test | RUN | 0.242486 | 0.741392 | 0.818883 | 0.001156 | 0.001198 | 0.001182 |
| filter.test | RUN | 0.222672 | 0.619322 | 0.734517 | 0.001221 | 0.001342 | 0.001145 |
| filter_if.test | RUN | 0.249685 | 0.727055 | 0.865510 | 0.001321 | 0.001179 | 0.001231 |
| find.test | RUN | 0.214686 | 0.506758 | 0.661814 | 0.001214 | 0.001350 | 0.001127 |
| find_if.test | RUN | 0.203587 | 0.453177 | 0.593803 | 0.001238 | 0.001318 | 0.001201 |
| fold.test | RUN | 0.229454 | 0.574666 | 0.725305 | 0.001441 | 0.001342 | 0.001167 |
| for_each.test | RUN | 0.203478 | 0.522740 | 0.633896 | 0.001225 | 0.001225 | 0.001182 |
| insert.test | RUN | 0.304919 | 0.919646 | 1.024205 | 0.001372 | 0.001315 | 0.001241 |
| insert_range.test | RUN | 0.303577 | 0.931581 | 1.020323 | 0.001804 | 0.001264 | 0.001132 |
| iter_fold.test | RUN | 0.383595 | 0.856176 | 1.217373 | 0.002440 | 0.001207 | 0.001212 |
| move.test | RUN | 0.203141 | 0.412159 | 0.535351 | 0.001280 | 0.001114 | 0.001109 |
| none.test | RUN | 0.357494 | 0.592059 | 0.775425 | 0.001181 | 0.001286 | 0.001187 |
| pop_back.test | RUN | 0.339296 | 0.816467 | 0.935381 | 0.001342 | 0.001228 | 0.001076 |
| pop_front.test | RUN | 0.282698 | 0.666324 | 0.734066 | 0.002056 | 0.001390 | 0.001120 |
| push_back.test | RUN | 0.374223 | 0.944167 | 1.016555 | 0.002494 | 0.001164 | 0.001283 |
| push_front.test | RUN | 0.304202 | 0.774750 | 0.859355 | 0.001636 | 0.001257 | 0.001142 |
| remove.test | RUN | 0.350740 | 0.874953 | 1.014809 | 0.001526 | 0.001227 | 0.001153 |
| remove_if.test | RUN | 0.343969 | 0.723829 | 0.848482 | 0.001456 | 0.001429 | 0.001176 |
| replace.test | RUN | 0.293125 | 0.723588 | 0.799221 | 0.002284 | 0.001250 | 0.001308 |
| replace_if.test | RUN | 0.288931 | 0.721080 | 0.797019 | 0.001902 | 0.001239 | 0.001143 |
| reverse_fold.test | RUN | 0.478543 | 0.972954 | 1.344555 | 0.001365 | 0.001010 | 0.001222 |
| reverse_iter_fold.test | RUN | 0.459223 | 1.006281 | 1.431165 | 0.001447 | 0.001244 | 0.001081 |
| reverse.test | RUN | 0.253144 | 0.734823 | 0.811943 | 0.001499 | 0.001336 | 0.001100 |
| segmented_for_each.test | RUN | 0.431689 | 1.379821 | 1.672227 | 0.001306 | 0.001254 | 0.001131 |
| segmented_find.test | RUN | 0.251812 | 0.720716 | 0.926000 | 0.001211 | 0.001283 | 0.001076 |
| segmented_find_if.test | RUN | 0.257898 | 0.716623 | 0.915108 | 0.001189 | 0.001224 | 0.001090 |
| segmented_fold.test | RUN | 0.313729 | 0.957262 | 1.151785 | 0.001437 | 0.001241 | 0.001196 |
| transform.test | RUN | 0.262717 | 0.776729 | 0.861922 | 0.001251 | 0.001204 | 0.001258 |
| join.test | RUN | 0.195779 | 0.464611 | 0.593930 | 0.001218 | 0.001249 | 0.001218 |
| zip.test | RUN | 0.333315 | 0.864722 | 1.125432 | 0.001227 | 0.001304 | 0.001189 |
| zip2.test | RUN | 0.313200 | 0.847585 | 1.072924 | 0.001189 | 0.001212 | 0.001144 |
| zip_ignore.test | RUN | 0.243720 | 0.582304 | 0.713051 | 0.001296 | 0.001248 | 0.001248 |
| flatten.test | RUN | 0.228243 | 0.647831 | 0.738799 | 0.001232 | 0.001328 | 0.001198 |
| ticket-5490.test | COMPILE | 0.123272 | 0.270422 | 0.329305 | — | — | — |
| as_deque.test | RUN | 0.229594 | 0.606829 | 0.785315 | 0.001494 | 0.001315 | 0.001173 |
| as_list.test | RUN | 0.257732 | 0.759693 | 0.851748 | 0.001119 | 0.001192 | 0.001260 |
| as_map.test | RUN | 0.253881 | 0.739855 | 0.850245 | 0.001124 | 0.001119 | 0.001142 |
| as_map_assoc.test | RUN | 0.251589 | 0.696976 | 0.814921 | 0.001132 | 0.001269 | 0.001199 |
| as_set.test | RUN | 0.298497 | 0.865462 | 1.005681 | 0.001223 | 0.001229 | 0.001052 |
| as_vector.test | RUN | 0.268639 | 0.766924 | 0.871771 | 0.001306 | 0.001134 | 0.001151 |
| boost_tuple.test | RUN | 0.263483 | 0.756559 | 0.872155 | 0.001353 | 0.001110 | 0.001160 |
| boost_tuple_iterator.test | RUN | 0.174519 | 0.446453 | 0.521745 | 0.001378 | 0.001151 | 0.001396 |
| cons.test | RUN | 0.333913 | 0.877021 | 1.023728 | 0.001199 | 0.001168 | 0.001100 |
| convert_boost_tuple.test | RUN | 0.212545 | 0.661291 | 0.668661 | 0.001200 | 0.001313 | 0.001246 |
| convert_deque.test | RUN | 0.208663 | 0.661368 | 0.675375 | 0.001069 | 0.001241 | 0.001138 |
| convert_list.test | RUN | 0.206263 | 0.674279 | 0.684355 | 0.001316 | 0.001090 | 0.001095 |
| convert_std_pair.test | RUN | 0.216900 | 0.663507 | 0.690025 | 0.001354 | 0.001214 | 0.001011 |
| convert_std_tuple.test | RUN | 0.205640 | 0.650649 | 0.677193 | 0.001160 | 0.001183 | 0.000901 |
| convert_vector.test | RUN | 0.203698 | 0.645165 | 0.681433 | 0.001076 | 0.001083 | 0.001168 |
| filter_view.test | RUN | 0.246784 | 0.689342 | 0.815539 | 0.001106 | 0.001180 | 0.001152 |
| hash.test | RUN | 0.242977 | 0.620921 | 0.747049 | 0.001287 | 0.001239 | 0.001408 |
| io.test | RUN | 0.264296 | 0.879206 | 0.943845 | 0.001402 | 0.001458 | 0.001343 |
| iterator_range.test | RUN | 0.233090 | 0.664405 | 0.756015 | 0.001094 | 0.001230 | 0.001091 |
| joint_view.test | RUN | 0.319014 | 1.115987 | 1.172658 | 0.001159 | 0.001205 | 0.001203 |
| list_comparison.test | RUN | 0.179709 | 0.450463 | 0.542859 | 0.001226 | 0.001192 | 0.001090 |
| list_construction.test | RUN | 0.176491 | 0.444024 | 0.525618 | 0.001295 | 0.001121 | 0.001118 |
| list_copy.test | RUN | 0.272850 | 0.805427 | 0.952231 | 0.001312 | 0.001151 | 0.001115 |
| list_iterator.test | RUN | 0.176092 | 0.434596 | 0.509510 | 0.001191 | 0.001158 | 0.001204 |
| list_hash.test | RUN | 0.244412 | 0.914388 | 0.771682 | 0.001226 | 0.001223 | 0.001120 |
| list_make.test | RUN | 0.192304 | 0.484968 | 0.583374 | 0.001175 | 0.001036 | 0.001161 |
| list_misc.test | RUN | 0.245817 | 0.580340 | 0.703986 | 0.001147 | 0.001179 | 0.001046 |
| list_mutate.test | RUN | 0.170687 | 0.394270 | 0.477386 | 0.001128 | 0.001197 | 0.000950 |
| list_nest.test | RUN | 0.341419 | 1.105251 | 1.319070 | 0.001216 | 0.001119 | 0.001106 |
| list_tie.test | RUN | 0.181626 | 0.453360 | 0.531081 | 0.001337 | 0.001213 | 0.001164 |
| list_value_at.test | RUN | 0.172124 | 0.403982 | 0.489997 | 0.001322 | 0.001254 | 0.001168 |
| deque_comparison.test | RUN | 0.179629 | 0.454669 | 0.563260 | 0.001229 | 0.001240 | 0.001068 |
| deque_construction.test | RUN | 0.192043 | 0.434343 | 0.537915 | 0.001380 | 0.001209 | 0.001131 |
| deque_copy.test | RUN | 0.262280 | 0.753559 | 0.884373 | 0.001230 | 0.001054 | 0.001145 |
| deque_iterator.test | RUN | 0.178362 | 0.464553 | 0.522551 | 0.001412 | 0.001275 | 0.001140 |
| deque_hash.test | RUN | 0.248869 | 0.878376 | 0.783436 | 0.001103 | 0.001278 | 0.001244 |
| deque_is_constructible.test | COMPILE | 0.097099 | 0.197034 | 0.249932 | — | — | — |
| deque_make.test | RUN | 0.183252 | 0.469750 | 0.562285 | 0.001145 | 0.001224 | 0.001120 |
| deque_misc.test | RUN | 0.233324 | 0.587493 | 0.705276 | 0.001336 | 0.001120 | 0.000877 |
| deque_move.test | RUN | 0.184279 | 0.474519 | 0.533067 | 0.001416 | 0.001204 | 0.001202 |
| deque_mutate.test | RUN | 0.163404 | 0.383115 | 0.471604 | 0.001249 | 0.001254 | 0.001200 |
| deque_nest.test | RUN | 0.510995 | 1.790548 | 2.079871 | 0.001432 | 0.001044 | 0.001131 |
| deque_tie.test | RUN | 0.168219 | 0.395981 | 0.512897 | 0.001437 | 0.001248 | 0.001090 |
| deque_value_at.test | RUN | 0.169460 | 0.406570 | 0.489381 | 0.001166 | 0.001312 | 0.001176 |
| front_extended_deque.test | RUN | 0.245764 | 0.579951 | 0.732526 | 0.001333 | 0.001202 | 0.001101 |
| back_extended_deque.test | RUN | 0.243998 | 0.583053 | 0.731148 | 0.001253 | 0.001158 | 0.001096 |
| make_list.test | RUN | 0.196895 | 0.497653 | 0.592976 | 0.001223 | 0.001334 | 0.001270 |
| make_vector.test | RUN | 0.191403 | 0.467231 | 0.555865 | 0.001237 | 0.001328 | 0.001082 |
| map.test | RUN | 0.255226 | 0.747505 | 0.836373 | 0.001462 | 0.001130 | 0.001116 |
| map_comparison.test | RUN | 0.191388 | 0.469219 | 0.558863 | 0.001164 | 0.001177 | 0.001239 |
| map_construction.test | RUN | 0.184575 | 0.459143 | 0.559059 | 0.001156 | 0.001091 | 0.001075 |
| map_copy.test | RUN | 0.225848 | 0.578552 | 0.665024 | 0.001302 | 0.001242 | 0.001075 |
| map_misc.test | RUN | 0.239034 | 0.590832 | 0.686345 | 0.001176 | 0.001260 | 0.001084 |
| map_move.test | RUN | 0.184622 | 0.486584 | 0.548819 | 0.001201 | 0.001067 | 0.001095 |
| map_mutate.test | RUN | 0.166287 | 0.390354 | 0.472834 | 0.001198 | 0.001333 | 0.001202 |
| map_tie.test | RUN | 0.174402 | 0.391769 | 0.481237 | 0.001422 | 0.001282 | 0.001115 |
| nil.test | RUN | 0.116273 | 0.280094 | 0.334591 | 0.001443 | 0.001129 | 0.001102 |
| nview.test | RUN | 0.235797 | 0.570798 | 0.715899 | 0.001292 | 0.001223 | 0.001324 |
| reverse_view.test | RUN | 0.304104 | 0.946785 | 1.045744 | 0.001335 | 0.001190 | 0.001163 |
| segmented_iterator_range.test | RUN | 0.359811 | 1.113574 | 1.278680 | 0.001379 | 0.001243 | 0.001251 |
| set.test | RUN | 0.235370 | 0.648458 | 0.726402 | 0.001274 | 0.001351 | 0.001262 |
| single_view.test | RUN | 0.213231 | 0.578753 | 0.660284 | 0.001355 | 0.001226 | 0.001208 |
| std_pair.test | RUN | 0.266340 | 0.744871 | 0.868839 | 0.001364 | 0.001220 | 0.001162 |
| boost_array.test | RUN | 0.221121 | 0.512844 | 0.627617 | 0.001332 | 0.001264 | 0.001282 |
| array.test | RUN | 0.218770 | 0.501677 | 0.644142 | 0.001218 | 0.001141 | 0.001111 |
| std_array.test | RUN | 0.226736 | 0.516717 | 0.620945 | 0.001188 | 0.001132 | 0.001075 |
| tuple_comparison.test | RUN | 0.203289 | 0.479789 | 0.587057 | 0.001331 | 0.001284 | 0.001134 |
| tuple_construction.test | RUN | 0.197709 | 0.468684 | 0.577157 | 0.001491 | 0.001179 | 0.001211 |
| tuple_conversion.test | RUN | 0.463073 | 1.483352 | 1.960560 | 0.001327 | 0.001391 | 0.001170 |
| tuple_copy.test | RUN | 0.279557 | 0.875232 | 1.023639 | 0.001426 | 0.001373 | 0.001213 |
| tuple_element.test | RUN | 0.186488 | 0.434083 | 0.547471 | 0.001249 | 0.001279 | 0.001178 |
| tuple_make.test | RUN | 0.200402 | 0.500576 | 0.607650 | 0.001135 | 0.001238 | 0.001041 |
| tuple_misc.test | RUN | 0.257851 | 0.620084 | 0.745369 | 0.001268 | 0.001253 | 0.001148 |
| tuple_mutate.test | RUN | 0.183477 | 0.411186 | 0.559503 | 0.001507 | 0.001085 | 0.001318 |
| tuple_nest.test | RUN | 0.799991 | 3.133300 | 3.614428 | 0.001324 | 0.001277 | 0.001168 |
| tuple_hash.test | RUN | 0.266167 | 0.898263 | 0.761466 | 0.001469 | 0.001235 | 0.001208 |
| tuple_tie.test | RUN | 0.186754 | 0.449978 | 0.556370 | 0.001700 | 0.001102 | 0.001027 |
| tuple_traits__maybe_variadic.test | RUN | 0.204755 | 0.562607 | 0.600232 | 0.001270 | 0.001190 | 0.001115 |
| tuple_traits__no_variadic.test | RUN | 0.228718 | 0.572060 | 0.641004 | 0.001141 | 0.001614 | 0.001178 |
| transform_view.test | RUN | 0.312612 | 0.951293 | 1.039136 | 0.001454 | 0.001354 | 0.001111 |
| identity_view.test | RUN | 0.294226 | 0.864174 | 1.002427 | 0.001266 | 0.001182 | 0.001277 |
| vector_comparison.test | RUN | 0.184139 | 0.468736 | 0.560879 | 0.001120 | 0.001194 | 0.001073 |
| vector_construction.test | RUN | 0.188281 | 0.431690 | 0.533096 | 0.001134 | 0.001315 | 0.001155 |
| vector_conversion.test | RUN | 0.540894 | 1.985389 | 2.478130 | 0.001248 | 0.001150 | 0.001153 |
| vector_copy.test | RUN | 0.279841 | 0.849868 | 1.005907 | 0.001336 | 0.001238 | 0.001240 |
| vector_iterator.test | RUN | 0.176258 | 0.469546 | 0.545176 | 0.001428 | 0.001115 | 0.001082 |
| vector_make.test | RUN | 0.185895 | 0.472944 | 0.574628 | 0.001082 | 0.001243 | 0.001119 |
| vector_misc.test | RUN | 0.245920 | 0.598265 | 0.702547 | 0.001210 | 0.001256 | 0.001117 |
| vector_move.test | RUN | 0.183869 | 0.479027 | 0.576733 | 0.001278 | 0.001345 | 0.001206 |
| vector_mutate.test | RUN | 0.165074 | 0.386932 | 0.474170 | 0.001139 | 0.001264 | 0.001036 |
| vector_n.test | RUN | 0.208606 | 0.497495 | 0.641733 | 0.001603 | 0.001309 | 0.001161 |
| vector_nest.test | RUN | 0.776861 | 3.277803 | 3.695219 | 0.001287 | 0.001150 | 0.001106 |
| vector_hash.test | RUN | 0.252357 | 0.884172 | 0.725868 | 0.001174 | 0.001164 | 0.001110 |
| vector_tie.test | RUN | 0.181532 | 0.428376 | 0.519117 | 0.001375 | 0.001072 | 0.001185 |
| vector_traits__maybe_variadic.test | RUN | 0.190291 | 0.529341 | 0.553383 | 0.001349 | 0.001252 | 0.001258 |
| vector_traits__no_variadic.test | RUN | 0.208819 | 0.534633 | 0.574582 | 0.001018 | 0.001183 | 0.001099 |
| vector_value_at.test | RUN | 0.168264 | 0.390248 | 0.495605 | 0.001197 | 0.001174 | 0.000861 |
| zip_view.test | RUN | 0.345120 | 0.956751 | 1.314833 | 0.001520 | 0.001312 | 0.001123 |
| zip_view2.test | RUN | 0.283111 | 0.748291 | 0.937063 | 0.001306 | 0.001204 | 0.001088 |
| zip_view_ignore.test | RUN | 0.264329 | 0.691408 | 0.834803 | 0.001340 | 0.001248 | 0.001151 |
| repetitive_view.test | RUN | 0.451962 | 1.250940 | 1.636545 | 0.001306 | 0.001243 | 0.001162 |
| deduce_sequence.test | RUN | 0.219177 | 0.527966 | 0.656210 | 0.001063 | 0.001258 | 0.001161 |
| adapt_adt_named.test | RUN | 0.256092 | 0.766408 | 0.876667 | 0.001069 | 0.001246 | 0.001160 |
| adapt_adt_named_empty.test | RUN | 0.222971 | 0.613134 | 0.704828 | 0.001344 | 0.001452 | 0.001254 |
| adapt_adt.test | RUN | 0.298396 | 1.002557 | 1.011154 | 0.001330 | 0.001216 | 0.001151 |
| adapt_adt_empty.test | RUN | 0.229321 | 0.609146 | 0.704196 | 0.001392 | 0.001216 | 0.001264 |
| adapt_assoc_adt_named.test | RUN | 0.288772 | 0.800780 | 0.902510 | 0.001110 | 0.001208 | 0.001097 |
| adapt_assoc_adt_named_empty.test | RUN | 0.225678 | 0.600427 | 0.693948 | 0.001107 | 0.001214 | 0.001356 |
| adapt_assoc_adt.test | RUN | 0.300630 | 0.811261 | 0.954017 | 0.001024 | 0.001295 | 0.001120 |
| adapt_assoc_adt_empty.test | RUN | 0.220619 | 0.602119 | 0.686656 | 0.001308 | 0.001181 | 0.001145 |
| adapt_assoc_struct_named.test | RUN | 0.282836 | 0.773893 | 0.879014 | 0.001155 | 0.001202 | 0.000873 |
| adapt_assoc_struct_named_empty.test | RUN | 0.220296 | 0.615020 | 0.688598 | 0.000904 | 0.001205 | 0.001096 |
| adapt_assoc_struct.test | RUN | 0.256129 | 0.723257 | 0.834153 | 0.001477 | 0.001305 | 0.001155 |
| adapt_assoc_struct_empty.test | RUN | 0.217784 | 0.600780 | 0.694332 | 0.001057 | 0.001385 | 0.001159 |
| adapt_assoc_tpl_adt.test | RUN | 0.306755 | 0.853171 | 0.966220 | 0.001207 | 0.001265 | 0.001254 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.225283 | 0.624092 | 0.682208 | 0.001329 | 0.001208 | 0.001337 |
| adapt_assoc_tpl_struct.test | RUN | 0.249350 | 0.723689 | 0.807223 | 0.001333 | 0.001221 | 0.001025 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.222108 | 0.609895 | 0.699521 | 0.001369 | 0.001347 | 0.001094 |
| adapt_struct_named.test | RUN | 0.253695 | 0.743071 | 0.812164 | 0.001273 | 0.001280 | 0.001189 |
| adapt_struct_named_empty.test | RUN | 0.221156 | 0.606910 | 0.694731 | 0.001178 | 0.001184 | 0.001258 |
| adapt_struct.test | RUN | 0.279236 | 0.846100 | 0.928150 | 0.001292 | 0.001177 | 0.001159 |
| adapt_struct_empty.test | RUN | 0.224026 | 0.595918 | 0.699444 | 0.000897 | 0.001288 | 0.001186 |
| adapt_tpl_adt.test | RUN | 0.293226 | 0.989820 | 0.963897 | 0.001174 | 0.001279 | 0.001239 |
| adapt_tpl_adt_empty.test | RUN | 0.227012 | 0.619404 | 0.693645 | 0.001326 | 0.001207 | 0.001124 |
| adapt_tpl_struct.test | RUN | 0.244200 | 0.688202 | 0.768826 | 0.001291 | 0.001196 | 0.001221 |
| adapt_tpl_struct_empty.test | RUN | 0.223710 | 0.603189 | 0.694292 | 0.001246 | 0.001224 | 0.001125 |
| adt_attribute_proxy.test | RUN | 0.250332 | 0.599594 | 0.730614 | 0.001101 | 0.001259 | 0.001190 |
| define_struct.test | RUN | 0.310487 | 0.846176 | 0.959599 | 0.001121 | 0.001211 | 0.001142 |
| define_struct_empty.test | RUN | 0.263428 | 0.691549 | 0.799416 | 0.001232 | 0.001195 | 0.001161 |
| define_struct_move.test | RUN | 0.172167 | 0.376459 | 0.467349 | 0.001181 | 0.000897 | 0.001107 |
| define_struct_inline.test | RUN | 0.320752 | 1.009796 | 1.084385 | 0.001255 | 0.001367 | 0.001111 |
| define_struct_inline_empty.test | RUN | 0.269705 | 0.680575 | 0.793122 | 0.001308 | 0.001122 | 0.001119 |
| define_struct_inline_move.test | RUN | 0.175774 | 0.394444 | 0.470839 | 0.001270 | 0.001284 | 0.001184 |
| define_assoc_struct.test | RUN | 0.294977 | 0.780263 | 0.917653 | 0.001246 | 0.001209 | 0.001214 |
| define_assoc_struct_empty.test | RUN | 0.266205 | 0.676889 | 0.787451 | 0.001270 | 0.001207 | 0.001155 |
| define_assoc_struct_move.test | RUN | 0.171310 | 0.373109 | 0.465612 | 0.001339 | 0.001223 | 0.001095 |
| define_tpl_struct.test | RUN | 0.300963 | 0.800956 | 0.921605 | 0.001376 | 0.001307 | 0.001539 |
| define_tpl_struct_empty.test | RUN | 0.261644 | 0.690679 | 0.802766 | 0.001199 | 0.001207 | 0.001295 |
| define_tpl_struct_move.test | RUN | 0.171224 | 0.396215 | 0.465282 | 0.001279 | 0.001202 | 0.001294 |
| define_tpl_struct_inline.test | RUN | 0.310710 | 0.947936 | 1.014267 | 0.001269 | 0.001221 | 0.001215 |
| define_tpl_struct_inline_empty.test | RUN | 0.269238 | 0.685399 | 0.806911 | 0.001413 | 0.001192 | 0.001246 |
| define_tpl_struct_inline_move.test | RUN | 0.173374 | 0.400289 | 0.475766 | 0.001134 | 0.001326 | 0.001202 |
| define_assoc_tpl_struct.test | RUN | 0.307736 | 0.809853 | 0.939212 | 0.001332 | 0.001349 | 0.001119 |
| define_assoc_tpl_struct_empty.test | RUN | 0.270234 | 0.679120 | 0.805152 | 0.001178 | 0.001118 | 0.000950 |
| define_assoc_tpl_struct_move.test | RUN | 0.176151 | 0.392933 | 0.486294 | 0.001106 | 0.001352 | 0.001248 |
| std_tuple.test | RUN | 0.182616 | 0.430431 | 0.530902 | 0.001157 | 0.001180 | 0.001123 |
| std_tuple_iterator.test | RUN | 0.182636 | 0.463045 | 0.539091 | 0.001162 | 0.001370 | 0.001107 |
| ref_vector.test | RUN | 0.198763 | 0.465411 | 0.570783 | 0.001159 | 0.001228 | 0.001133 |
| flatten_view.test | RUN | 0.217768 | 0.576056 | 0.684576 | 0.001251 | 0.001202 | 0.001145 |
| github-159.test | COMPILE | 0.095669 | 0.208904 | 0.250022 | — | — | — |
| github-176.test | RUN | 0.194498 | 0.511785 | 0.569163 | 0.001235 | 0.001195 | 0.001033 |
| size.test | COMPILE | 0.169700 | 0.355957 | 0.449206 | — | — | — |
| fused.test | RUN | 0.237986 | 0.539749 | 0.672984 | 0.001204 | 0.001342 | 0.001269 |
| fused_function_object.test | RUN | 0.171706 | 0.409043 | 0.507060 | 0.001208 | 0.001373 | 0.001195 |
| fused_procedure.test | RUN | 0.226173 | 0.524271 | 0.626624 | 0.001106 | 0.001221 | 0.001023 |
| unfused.test | RUN | 0.181502 | 0.428008 | 0.520665 | 0.001128 | 0.001145 | 0.001220 |
| unfused_typed.test | RUN | 0.184571 | 0.460578 | 0.545835 | 0.001262 | 0.001199 | 0.001267 |
| make_fused.test | RUN | 0.235148 | 0.534742 | 0.668536 | 0.001486 | 0.001144 | 0.001162 |
| make_fused_function_object.test | RUN | 0.179595 | 0.422476 | 0.505440 | 0.001128 | 0.001119 | 0.001094 |
| make_fused_procedure.test | RUN | 0.239278 | 0.525659 | 0.634939 | 0.001103 | 0.001256 | 0.001258 |
| make_unfused.test | RUN | 0.187387 | 0.413241 | 0.523156 | 0.001184 | 0.001186 | 0.001118 |
| invoke.test | RUN | 0.456990 | 1.524596 | 1.770606 | 0.001076 | 0.001195 | 0.001214 |
| invoke_function_object.test | RUN | 0.216150 | 0.530629 | 0.664575 | 0.001333 | 0.001308 | 0.001107 |
| invoke_procedure.test | RUN | 0.369058 | 1.121171 | 1.329715 | 0.001155 | 0.001413 | 0.001158 |
| swap.test | RUN | 0.273295 | 0.701974 | 0.821186 | 0.001617 | 0.001212 | 0.001116 |
| is_sequence.test | COMPILE | 0.046060 | 0.094467 | 0.104356 | — | — | — |
| is_view.test | COMPILE | 0.045118 | 0.093817 | 0.105342 | — | — | — |
| pair_deque.test | COMPILE | 0.103601 | 0.218683 | 0.254937 | — | — | — |
| pair_list.test | COMPILE | 0.102068 | 0.217498 | 0.251544 | — | — | — |
| pair_map.test | COMPILE | 0.101103 | 0.222416 | 0.259207 | — | — | — |
| pair_set.test | COMPILE | 0.102276 | 0.218981 | 0.256597 | — | — | — |
| pair_vector.test | COMPILE | 0.099885 | 0.220948 | 0.252596 | — | — | — |
| pair_nest.test | COMPILE | 0.040269 | 0.086454 | 0.099387 | — | — | — |
| index_sequence.test | COMPILE | 0.034115 | 0.059238 | 0.070949 | — | — | — |
| and.test | COMPILE | 0.025868 | 0.044587 | 0.050392 | — | — | — |
| tag_of.test | COMPILE | 0.045092 | 0.093165 | 0.097133 | — | — | — |
| unused.test | COMPILE | 0.023601 | 0.057211 | 0.058087 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.044809 | 0.084332 | 0.099334 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.037670 | 0.063252 | 0.095381 | — | — | — |
| quick.test | RUN | 0.131984 | 0.302786 | 0.321814 | 0.000349 | 0.000928 | 0.000820 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.009× | 1.003×, 1.015× | 1.001× |
| clang | 1.002× | 1.003×, 1.000× | 0.996× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45241427099).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.000840s | 0.000820s | 0.000835s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.000824s | 0.000825s | 0.000839s | byte equality observed |
| adapt_adt_named.test | 10 | 0.000834s | 0.000825s | 0.000835s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.000822s | 0.000841s | 0.000821s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.000819s | 0.000798s | 0.000834s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.000826s | 0.000833s | 0.000853s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.000832s | 0.000822s | 0.000817s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.000832s | 0.000832s | 0.000825s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.000834s | 0.000856s | 0.000832s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.000843s | 0.000834s | 0.000845s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.000856s | 0.000821s | 0.000828s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.000840s | 0.000835s | 0.000819s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.000856s | 0.000878s | 0.000816s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.000840s | 0.000841s | 0.000828s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.000829s | 0.000850s | 0.000827s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.000831s | 0.000821s | 0.000826s | byte equality observed |
| adapt_struct.test | 10 | 0.000814s | 0.000828s | 0.000834s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.000838s | 0.000821s | 0.000832s | byte equality observed |
| adapt_struct_named.test | 10 | 0.000840s | 0.000816s | 0.000847s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.000815s | 0.000836s | 0.000822s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.000837s | 0.000826s | 0.000848s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.000824s | 0.000829s | 0.000842s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.000829s | 0.000855s | 0.000828s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.000832s | 0.000862s | 0.000824s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.000818s | 0.000831s | 0.000849s | byte equality observed |
| all.test | 10 | 0.000805s | 0.000819s | 0.000847s | byte equality observed |
| any.test | 10 | 0.000795s | 0.000810s | 0.000819s | byte equality observed |
| array.test | 10 | 0.000805s | 0.000820s | 0.000835s | byte equality observed |
| as_deque.test | 10 | 0.000831s | 0.000809s | 0.000844s | byte equality observed |
| as_list.test | 10 | 0.000865s | 0.000874s | 0.000846s | byte equality observed |
| as_map.test | 10 | 0.000812s | 0.000821s | 0.000835s | byte equality observed |
| as_map_assoc.test | 10 | 0.000827s | 0.000836s | 0.000850s | byte equality observed |
| as_set.test | 10 | 0.000865s | 0.000829s | 0.000848s | byte equality observed |
| as_vector.test | 10 | 0.000850s | 0.000845s | 0.000851s | byte equality observed |
| back_extended_deque.test | 10 | 0.000822s | 0.000803s | 0.000796s | byte equality observed |
| boost_array.test | 10 | 0.000831s | 0.000798s | 0.000804s | byte equality observed |
| boost_tuple.test | 10 | 0.000853s | 0.000814s | 0.000832s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.000820s | 0.000813s | 0.000862s | byte equality observed |
| clear.test | 10 | 0.000843s | 0.000859s | 0.000847s | byte equality observed |
| cons.test | 10 | 0.000851s | 0.000878s | 0.000840s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.000815s | 0.000830s | 0.000822s | byte equality observed |
| convert_deque.test | 10 | 0.000827s | 0.000835s | 0.000819s | byte equality observed |
| convert_list.test | 10 | 0.000832s | 0.000825s | 0.000802s | byte equality observed |
| convert_std_pair.test | 10 | 0.000799s | 0.000825s | 0.000809s | byte equality observed |
| convert_std_tuple.test | 10 | 0.000834s | 0.000808s | 0.000823s | byte equality observed |
| convert_vector.test | 10 | 0.000831s | 0.000800s | 0.000825s | byte equality observed |
| copy.test | 10 | 0.000805s | 0.000811s | 0.000809s | byte equality observed |
| count.test | 10 | 0.000804s | 0.000825s | 0.000801s | byte equality observed |
| count_if.test | 10 | 0.000824s | 0.000824s | 0.000808s | byte equality observed |
| deduce_sequence.test | 10 | 0.000801s | 0.000796s | 0.000818s | byte equality observed |
| define_assoc_struct.test | 10 | 0.000803s | 0.000831s | 0.000825s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.000821s | 0.000834s | 0.000858s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.000787s | 0.000791s | 0.000821s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.000819s | 0.000836s | 0.000862s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.000824s | 0.000832s | 0.000857s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000815s | 0.000819s | 0.000815s | byte equality observed |
| define_struct.test | 10 | 0.000831s | 0.000857s | 0.000825s | byte equality observed |
| define_struct_empty.test | 10 | 0.000836s | 0.000866s | 0.000846s | byte equality observed |
| define_struct_inline.test | 10 | 0.000826s | 0.000824s | 0.000824s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.000830s | 0.000837s | 0.000820s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000809s | 0.000815s | 0.000827s | byte equality observed |
| define_struct_move.test | 10 | 0.000811s | 0.000786s | 0.000844s | byte equality observed |
| define_tpl_struct.test | 10 | 0.000827s | 0.000821s | 0.000821s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.000820s | 0.000845s | 0.000834s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.000827s | 0.000816s | 0.000857s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.000822s | 0.000820s | 0.000819s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000796s | 0.000783s | 0.000822s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000802s | 0.000792s | 0.000813s | byte equality observed |
| deque_comparison.test | 10 | 0.000803s | 0.000795s | 0.000835s | byte equality observed |
| deque_construction.test | 10 | 0.000802s | 0.000816s | 0.000796s | byte equality observed |
| deque_copy.test | 10 | 0.000806s | 0.000840s | 0.000829s | byte equality observed |
| deque_hash.test | 10 | 0.000812s | 0.000795s | 0.000821s | byte equality observed |
| deque_iterator.test | 10 | 0.000821s | 0.000806s | 0.000833s | byte equality observed |
| deque_make.test | 10 | 0.000807s | 0.000835s | 0.000848s | byte equality observed |
| deque_misc.test | 10 | 0.000821s | 0.000815s | 0.000827s | byte equality observed |
| deque_move.test | 10 | 0.000834s | 0.000818s | 0.000843s | byte equality observed |
| deque_mutate.test | 10 | 0.000812s | 0.000818s | 0.000806s | byte equality observed |
| deque_nest.test | 10 | 0.000813s | 0.000833s | 0.000817s | byte equality observed |
| deque_tie.test | 10 | 0.000804s | 0.000810s | 0.000808s | byte equality observed |
| deque_value_at.test | 10 | 0.000804s | 0.000840s | 0.000806s | byte equality observed |
| erase.test | 10 | 0.000829s | 0.000831s | 0.000822s | byte equality observed |
| erase_key.test | 10 | 0.000834s | 0.000836s | 0.000824s | byte equality observed |
| filter.test | 10 | 0.000830s | 0.000809s | 0.000827s | byte equality observed |
| filter_if.test | 10 | 0.000851s | 0.000840s | 0.000851s | byte equality observed |
| filter_view.test | 10 | 0.000837s | 0.000818s | 0.000834s | byte equality observed |
| find.test | 10 | 0.000852s | 0.000856s | 0.000819s | byte equality observed |
| find_if.test | 10 | 0.000812s | 0.000819s | 0.000823s | byte equality observed |
| flatten.test | 10 | 0.000834s | 0.000821s | 0.000818s | byte equality observed |
| flatten_view.test | 10 | 0.000854s | 0.000828s | 0.000798s | byte equality observed |
| fold.test | 10 | 0.000834s | 0.000824s | 0.000802s | byte equality observed |
| for_each.test | 10 | 0.000839s | 0.000807s | 0.000808s | byte equality observed |
| front_extended_deque.test | 10 | 0.000800s | 0.000823s | 0.000806s | byte equality observed |
| fused.test | 10 | 0.000804s | 0.000819s | 0.000811s | byte equality observed |
| fused_function_object.test | 10 | 0.000817s | 0.000823s | 0.000812s | byte equality observed |
| fused_procedure.test | 10 | 0.000811s | 0.000808s | 0.000791s | byte equality observed |
| github-176.test | 10 | 0.000836s | 0.000803s | 0.000792s | byte equality observed |
| hash.test | 10 | 0.000812s | 0.000823s | 0.000810s | byte equality observed |
| identity_view.test | 10 | 0.000827s | 0.000837s | 0.000834s | byte equality observed |
| insert.test | 10 | 0.000843s | 0.000828s | 0.000844s | byte equality observed |
| insert_range.test | 10 | 0.000838s | 0.000832s | 0.000842s | byte equality observed |
| invoke.test | 10 | 0.000819s | 0.000813s | 0.000846s | byte equality observed |
| invoke_function_object.test | 10 | 0.000821s | 0.000782s | 0.000840s | byte equality observed |
| invoke_procedure.test | 10 | 0.000806s | 0.000812s | 0.000812s | byte equality observed |
| io.test | 10 | 0.000925s | 0.000884s | 0.000909s | byte equality observed |
| iter_fold.test | 10 | 0.000821s | 0.000848s | 0.000843s | byte equality observed |
| iterator_range.test | 10 | 0.000857s | 0.000851s | 0.000826s | byte equality observed |
| join.test | 10 | 0.000799s | 0.000794s | 0.000806s | byte equality observed |
| joint_view.test | 10 | 0.000834s | 0.000832s | 0.000860s | byte equality observed |
| list_comparison.test | 10 | 0.000795s | 0.000813s | 0.000817s | byte equality observed |
| list_construction.test | 10 | 0.000822s | 0.000806s | 0.000809s | byte equality observed |
| list_copy.test | 10 | 0.000832s | 0.000835s | 0.000816s | byte equality observed |
| list_hash.test | 10 | 0.000822s | 0.000836s | 0.000832s | byte equality observed |
| list_iterator.test | 10 | 0.000826s | 0.000835s | 0.000822s | byte equality observed |
| list_make.test | 10 | 0.000823s | 0.000796s | 0.000808s | byte equality observed |
| list_misc.test | 10 | 0.000822s | 0.000821s | 0.000796s | byte equality observed |
| list_mutate.test | 10 | 0.000829s | 0.000815s | 0.000798s | byte equality observed |
| list_nest.test | 10 | 0.000797s | 0.000804s | 0.000787s | byte equality observed |
| list_tie.test | 10 | 0.000798s | 0.000796s | 0.000780s | byte equality observed |
| list_value_at.test | 10 | 0.000807s | 0.000777s | 0.000807s | byte equality observed |
| make_fused.test | 10 | 0.000827s | 0.000802s | 0.000811s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000832s | 0.000812s | 0.000821s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000816s | 0.000830s | 0.000815s | byte equality observed |
| make_list.test | 10 | 0.000825s | 0.000823s | 0.000837s | byte equality observed |
| make_unfused.test | 10 | 0.000818s | 0.000831s | 0.000798s | byte equality observed |
| make_vector.test | 10 | 0.000813s | 0.000830s | 0.000809s | byte equality observed |
| map.test | 10 | 0.000825s | 0.000815s | 0.000843s | byte equality observed |
| map_comparison.test | 10 | 0.000817s | 0.000788s | 0.000833s | byte equality observed |
| map_construction.test | 10 | 0.000801s | 0.000807s | 0.000813s | byte equality observed |
| map_copy.test | 10 | 0.000835s | 0.000814s | 0.000827s | byte equality observed |
| map_misc.test | 10 | 0.000808s | 0.000825s | 0.000822s | byte equality observed |
| map_move.test | 10 | 0.000813s | 0.000802s | 0.000820s | byte equality observed |
| map_mutate.test | 10 | 0.000797s | 0.000811s | 0.000798s | byte equality observed |
| map_tie.test | 10 | 0.000803s | 0.000813s | 0.000815s | byte equality observed |
| move.test | 10 | 0.000802s | 0.000798s | 0.000830s | byte equality observed |
| nil.test | 10 | 0.000790s | 0.000842s | 0.000797s | byte equality observed |
| none.test | 10 | 0.000805s | 0.000819s | 0.000811s | byte equality observed |
| nview.test | 10 | 0.000826s | 0.000816s | 0.000830s | byte equality observed |
| pop_back.test | 10 | 0.000845s | 0.000841s | 0.000827s | byte equality observed |
| pop_front.test | 10 | 0.000850s | 0.000850s | 0.000812s | byte equality observed |
| push_back.test | 10 | 0.000850s | 0.000869s | 0.000831s | byte equality observed |
| push_front.test | 10 | 0.000834s | 0.000835s | 0.000817s | byte equality observed |
| quick.test | 10 | 0.000363s | 0.000779s | 0.000793s | byte equality observed |
| ref_vector.test | 10 | 0.000814s | 0.000792s | 0.000812s | byte equality observed |
| remove.test | 10 | 0.000830s | 0.000847s | 0.000867s | byte equality observed |
| remove_if.test | 10 | 0.000828s | 0.000820s | 0.000853s | byte equality observed |
| repetitive_view.test | 10 | 0.000789s | 0.000806s | 0.000834s | byte equality observed |
| replace.test | 10 | 0.000831s | 0.000834s | 0.000855s | byte equality observed |
| replace_if.test | 10 | 0.000825s | 0.000833s | 0.000845s | byte equality observed |
| reverse.test | 10 | 0.000842s | 0.000833s | 0.000842s | byte equality observed |
| reverse_fold.test | 10 | 0.000817s | 0.000826s | 0.000868s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.000835s | 0.000840s | 0.000819s | byte equality observed |
| reverse_view.test | 10 | 0.000860s | 0.000826s | 0.000850s | byte equality observed |
| segmented_find.test | 10 | 0.000821s | 0.000803s | 0.000820s | byte equality observed |
| segmented_find_if.test | 10 | 0.000800s | 0.000829s | 0.000777s | byte equality observed |
| segmented_fold.test | 10 | 0.000830s | 0.000866s | 0.000836s | byte equality observed |
| segmented_for_each.test | 10 | 0.000820s | 0.000867s | 0.000837s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.000843s | 0.000850s | 0.000862s | byte equality observed |
| set.test | 10 | 0.000843s | 0.000820s | 0.000851s | byte equality observed |
| single_view.test | 10 | 0.000828s | 0.000838s | 0.000854s | byte equality observed |
| std_array.test | 10 | 0.000816s | 0.000821s | 0.000850s | byte equality observed |
| std_pair.test | 10 | 0.000847s | 0.000836s | 0.000826s | byte equality observed |
| std_tuple.test | 10 | 0.000829s | 0.000842s | 0.000814s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.000811s | 0.000801s | 0.000825s | byte equality observed |
| swap.test | 10 | 0.000808s | 0.000820s | 0.000817s | byte equality observed |
| transform.test | 10 | 0.000832s | 0.000861s | 0.000845s | byte equality observed |
| transform_view.test | 10 | 0.000845s | 0.000861s | 0.000870s | byte equality observed |
| tuple_comparison.test | 10 | 0.000790s | 0.000827s | 0.000827s | byte equality observed |
| tuple_construction.test | 10 | 0.000792s | 0.000831s | 0.000829s | byte equality observed |
| tuple_conversion.test | 10 | 0.000812s | 0.000807s | 0.000852s | byte equality observed |
| tuple_copy.test | 10 | 0.000818s | 0.000827s | 0.000808s | byte equality observed |
| tuple_element.test | 10 | 0.000811s | 0.000819s | 0.000821s | byte equality observed |
| tuple_hash.test | 10 | 0.000809s | 0.000847s | 0.000808s | byte equality observed |
| tuple_make.test | 10 | 0.000816s | 0.000799s | 0.000840s | byte equality observed |
| tuple_misc.test | 10 | 0.000824s | 0.000821s | 0.000824s | byte equality observed |
| tuple_mutate.test | 10 | 0.000819s | 0.000834s | 0.000819s | byte equality observed |
| tuple_nest.test | 10 | 0.000812s | 0.000812s | 0.000825s | byte equality observed |
| tuple_tie.test | 10 | 0.000810s | 0.000804s | 0.000816s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.000805s | 0.000814s | 0.000819s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.000792s | 0.000811s | 0.000826s | byte equality observed |
| unfused.test | 10 | 0.000809s | 0.000811s | 0.000813s | byte equality observed |
| unfused_typed.test | 10 | 0.000809s | 0.000794s | 0.000831s | byte equality observed |
| vector_comparison.test | 10 | 0.000822s | 0.000832s | 0.000820s | byte equality observed |
| vector_construction.test | 10 | 0.000833s | 0.000847s | 0.000826s | byte equality observed |
| vector_conversion.test | 10 | 0.000817s | 0.000842s | 0.000841s | byte equality observed |
| vector_copy.test | 10 | 0.000825s | 0.000833s | 0.000823s | byte equality observed |
| vector_hash.test | 10 | 0.000807s | 0.000835s | 0.000825s | byte equality observed |
| vector_iterator.test | 10 | 0.000800s | 0.000829s | 0.000827s | byte equality observed |
| vector_make.test | 10 | 0.000802s | 0.000826s | 0.000816s | byte equality observed |
| vector_misc.test | 10 | 0.000818s | 0.000817s | 0.000800s | byte equality observed |
| vector_move.test | 10 | 0.000820s | 0.000834s | 0.000825s | byte equality observed |
| vector_mutate.test | 10 | 0.000814s | 0.000832s | 0.000847s | byte equality observed |
| vector_n.test | 10 | 0.000810s | 0.000818s | 0.000839s | byte equality observed |
| vector_nest.test | 10 | 0.000824s | 0.000801s | 0.000842s | byte equality observed |
| vector_tie.test | 10 | 0.000810s | 0.000813s | 0.000836s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000817s | 0.000830s | 0.000813s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000836s | 0.000800s | 0.000827s | byte equality observed |
| vector_value_at.test | 10 | 0.000817s | 0.000824s | 0.000806s | byte equality observed |
| zip.test | 10 | 0.000813s | 0.000824s | 0.000818s | byte equality observed |
| zip2.test | 10 | 0.000812s | 0.000844s | 0.000814s | byte equality observed |
| zip_ignore.test | 10 | 0.000788s | 0.000858s | 0.000829s | byte equality observed |
| zip_view.test | 10 | 0.000807s | 0.000844s | 0.000836s | byte equality observed |
| zip_view2.test | 10 | 0.000812s | 0.000827s | 0.000837s | byte equality observed |
| zip_view_ignore.test | 10 | 0.000799s | 0.000804s | 0.000792s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45241427099).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
