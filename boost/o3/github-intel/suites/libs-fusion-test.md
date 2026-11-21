# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.274159 | 0.623452 | 0.812523 | 0.001059 | 0.001077 | 0.001301 |
| any.test | RUN | 0.265292 | 0.599631 | 0.771507 | 0.001084 | 0.001166 | 0.001335 |
| clear.test | RUN | 0.196438 | 0.554771 | 0.637581 | 0.001240 | 0.001278 | 0.001484 |
| copy.test | RUN | 0.165198 | 0.413462 | 0.507679 | 0.001177 | 0.001213 | 0.001327 |
| count.test | RUN | 0.188641 | 0.453226 | 0.574462 | 0.001309 | 0.001263 | 0.001269 |
| count_if.test | RUN | 0.175288 | 0.421094 | 0.532081 | 0.001137 | 0.001353 | 0.001263 |
| erase.test | RUN | 0.254426 | 0.757828 | 0.876088 | 0.001094 | 0.001394 | 0.001213 |
| erase_key.test | RUN | 0.243316 | 0.750574 | 0.814332 | 0.001146 | 0.001242 | 0.001338 |
| filter.test | RUN | 0.221134 | 0.620984 | 0.740816 | 0.001208 | 0.001212 | 0.001305 |
| filter_if.test | RUN | 0.246036 | 0.731134 | 0.882979 | 0.001232 | 0.001168 | 0.001309 |
| find.test | RUN | 0.209469 | 0.497641 | 0.663811 | 0.001109 | 0.001144 | 0.001328 |
| find_if.test | RUN | 0.197740 | 0.470256 | 0.596332 | 0.001104 | 0.001235 | 0.001442 |
| fold.test | RUN | 0.221028 | 0.583098 | 0.739830 | 0.001275 | 0.001229 | 0.001362 |
| for_each.test | RUN | 0.198196 | 0.530878 | 0.642027 | 0.001290 | 0.001272 | 0.001349 |
| insert.test | RUN | 0.301911 | 0.913639 | 1.045023 | 0.001172 | 0.001326 | 0.001335 |
| insert_range.test | RUN | 0.293817 | 0.912026 | 1.059484 | 0.001200 | 0.001314 | 0.001213 |
| iter_fold.test | RUN | 0.331631 | 0.884566 | 1.245705 | 0.001024 | 0.001307 | 0.001324 |
| move.test | RUN | 0.169780 | 0.424575 | 0.543776 | 0.001065 | 0.001209 | 0.001135 |
| none.test | RUN | 0.262465 | 0.600372 | 0.790183 | 0.001123 | 0.001244 | 0.001282 |
| pop_back.test | RUN | 0.274564 | 0.807139 | 0.928420 | 0.001162 | 0.001223 | 0.001284 |
| pop_front.test | RUN | 0.227304 | 0.653462 | 0.749966 | 0.001121 | 0.001261 | 0.001220 |
| push_back.test | RUN | 0.290381 | 0.937897 | 1.013068 | 0.001317 | 0.001369 | 0.001321 |
| push_front.test | RUN | 0.255494 | 0.768189 | 0.867136 | 0.001187 | 0.001259 | 0.001248 |
| remove.test | RUN | 0.283219 | 0.870532 | 1.039413 | 0.001128 | 0.001215 | 0.001241 |
| remove_if.test | RUN | 0.254034 | 0.741922 | 0.874719 | 0.001075 | 0.001184 | 0.001171 |
| replace.test | RUN | 0.243396 | 0.718740 | 0.820588 | 0.001123 | 0.001372 | 0.001211 |
| replace_if.test | RUN | 0.235525 | 0.708606 | 0.796532 | 0.001129 | 0.001237 | 0.001380 |
| reverse_fold.test | RUN | 0.361641 | 0.983552 | 1.384156 | 0.001300 | 0.001237 | 0.001238 |
| reverse_iter_fold.test | RUN | 0.367747 | 1.003925 | 1.436910 | 0.001171 | 0.001150 | 0.001011 |
| reverse.test | RUN | 0.236186 | 0.728231 | 0.817316 | 0.001048 | 0.001245 | 0.001271 |
| segmented_for_each.test | RUN | 0.411737 | 1.366472 | 1.689590 | 0.001261 | 0.001183 | 0.001395 |
| segmented_find.test | RUN | 0.253548 | 0.726721 | 0.943841 | 0.001064 | 0.001220 | 0.001142 |
| segmented_find_if.test | RUN | 0.248900 | 0.738248 | 0.918087 | 0.001102 | 0.001173 | 0.001191 |
| segmented_fold.test | RUN | 0.311426 | 0.972787 | 1.171561 | 0.001034 | 0.001318 | 0.001378 |
| transform.test | RUN | 0.245924 | 0.771080 | 0.871758 | 0.001229 | 0.001386 | 0.001356 |
| join.test | RUN | 0.184116 | 0.466577 | 0.598598 | 0.001235 | 0.001330 | 0.001463 |
| zip.test | RUN | 0.317255 | 0.873435 | 1.126361 | 0.001216 | 0.001415 | 0.001319 |
| zip2.test | RUN | 0.325646 | 0.846105 | 1.084634 | 0.001117 | 0.001221 | 0.001299 |
| zip_ignore.test | RUN | 0.238156 | 0.589318 | 0.717103 | 0.001109 | 0.001242 | 0.001250 |
| flatten.test | RUN | 0.221041 | 0.655691 | 0.741609 | 0.001057 | 0.001251 | 0.001317 |
| ticket-5490.test | COMPILE | 0.122476 | 0.282400 | 0.329731 | — | — | — |
| as_deque.test | RUN | 0.223109 | 0.605795 | 0.792772 | 0.001308 | 0.001166 | 0.001175 |
| as_list.test | RUN | 0.252149 | 0.767714 | 0.857323 | 0.001298 | 0.001300 | 0.001262 |
| as_map.test | RUN | 0.243241 | 0.751109 | 0.854881 | 0.001085 | 0.001185 | 0.001269 |
| as_map_assoc.test | RUN | 0.239330 | 0.708646 | 0.820179 | 0.001061 | 0.001148 | 0.001325 |
| as_set.test | RUN | 0.284226 | 0.880899 | 1.023087 | 0.001155 | 0.001244 | 0.001168 |
| as_vector.test | RUN | 0.253396 | 0.789938 | 0.883666 | 0.001092 | 0.001189 | 0.001233 |
| boost_tuple.test | RUN | 0.258270 | 0.768532 | 0.879892 | 0.001055 | 0.001312 | 0.001220 |
| boost_tuple_iterator.test | RUN | 0.170214 | 0.447621 | 0.531005 | 0.001319 | 0.001420 | 0.001100 |
| cons.test | RUN | 0.322547 | 0.874347 | 1.037283 | 0.001081 | 0.001273 | 0.001189 |
| convert_boost_tuple.test | RUN | 0.199318 | 0.677877 | 0.688413 | 0.001246 | 0.001258 | 0.001233 |
| convert_deque.test | RUN | 0.202560 | 0.666873 | 0.679576 | 0.001276 | 0.001220 | 0.001091 |
| convert_list.test | RUN | 0.203560 | 0.679006 | 0.687586 | 0.001224 | 0.001290 | 0.001228 |
| convert_std_pair.test | RUN | 0.210489 | 0.681214 | 0.690955 | 0.001193 | 0.001243 | 0.001171 |
| convert_std_tuple.test | RUN | 0.193924 | 0.654710 | 0.670031 | 0.001257 | 0.001324 | 0.000891 |
| convert_vector.test | RUN | 0.201636 | 0.664192 | 0.681511 | 0.001163 | 0.001313 | 0.001099 |
| filter_view.test | RUN | 0.248684 | 0.699898 | 0.826961 | 0.001223 | 0.001327 | 0.001341 |
| hash.test | RUN | 0.239952 | 0.625985 | 0.768156 | 0.001241 | 0.001488 | 0.001224 |
| io.test | RUN | 0.262222 | 0.927265 | 0.942318 | 0.001087 | 0.001628 | 0.001580 |
| iterator_range.test | RUN | 0.229038 | 0.672158 | 0.765547 | 0.001131 | 0.001286 | 0.001227 |
| joint_view.test | RUN | 0.315504 | 1.138202 | 1.197864 | 0.001270 | 0.001270 | 0.001210 |
| list_comparison.test | RUN | 0.173886 | 0.464649 | 0.550401 | 0.001191 | 0.001348 | 0.001173 |
| list_construction.test | RUN | 0.177678 | 0.443576 | 0.538720 | 0.001143 | 0.001117 | 0.001174 |
| list_copy.test | RUN | 0.271433 | 0.822982 | 0.972473 | 0.001110 | 0.001403 | 0.001281 |
| list_iterator.test | RUN | 0.174423 | 0.460120 | 0.516391 | 0.001175 | 0.001452 | 0.001294 |
| list_hash.test | RUN | 0.244255 | 0.906286 | 0.772807 | 0.001108 | 0.001274 | 0.001361 |
| list_make.test | RUN | 0.189046 | 0.492692 | 0.603070 | 0.001278 | 0.001207 | 0.001255 |
| list_misc.test | RUN | 0.244838 | 0.587807 | 0.725149 | 0.001146 | 0.001282 | 0.001314 |
| list_mutate.test | RUN | 0.163489 | 0.385225 | 0.480293 | 0.001035 | 0.001182 | 0.001217 |
| list_nest.test | RUN | 0.333316 | 1.152168 | 1.340485 | 0.000818 | 0.001310 | 0.001371 |
| list_tie.test | RUN | 0.174393 | 0.453247 | 0.522934 | 0.001274 | 0.001096 | 0.001375 |
| list_value_at.test | RUN | 0.166556 | 0.410080 | 0.519259 | 0.001230 | 0.001234 | 0.001175 |
| deque_comparison.test | RUN | 0.175389 | 0.466931 | 0.542101 | 0.001141 | 0.001308 | 0.001337 |
| deque_construction.test | RUN | 0.180434 | 0.440737 | 0.544890 | 0.001359 | 0.001420 | 0.001217 |
| deque_copy.test | RUN | 0.261403 | 0.765441 | 0.893546 | 0.001098 | 0.001143 | 0.001282 |
| deque_iterator.test | RUN | 0.171266 | 0.464388 | 0.525615 | 0.001129 | 0.001230 | 0.001224 |
| deque_hash.test | RUN | 0.239821 | 0.905362 | 0.795149 | 0.001006 | 0.001253 | 0.001205 |
| deque_is_constructible.test | COMPILE | 0.098079 | 0.196224 | 0.243748 | — | — | — |
| deque_make.test | RUN | 0.172247 | 0.469276 | 0.564563 | 0.001060 | 0.001285 | 0.001325 |
| deque_misc.test | RUN | 0.231602 | 0.588315 | 0.699389 | 0.001016 | 0.001346 | 0.001254 |
| deque_move.test | RUN | 0.180859 | 0.482221 | 0.542026 | 0.001058 | 0.001332 | 0.001157 |
| deque_mutate.test | RUN | 0.155641 | 0.393867 | 0.486491 | 0.001348 | 0.001338 | 0.001219 |
| deque_nest.test | RUN | 0.498956 | 1.824458 | 2.168734 | 0.001112 | 0.001285 | 0.001303 |
| deque_tie.test | RUN | 0.163398 | 0.427759 | 0.507750 | 0.001109 | 0.001193 | 0.001363 |
| deque_value_at.test | RUN | 0.163817 | 0.404443 | 0.499760 | 0.001079 | 0.001219 | 0.001192 |
| front_extended_deque.test | RUN | 0.241709 | 0.595612 | 0.763213 | 0.001148 | 0.001349 | 0.001351 |
| back_extended_deque.test | RUN | 0.239815 | 0.612864 | 0.735696 | 0.001139 | 0.001331 | 0.001295 |
| make_list.test | RUN | 0.189884 | 0.497927 | 0.582117 | 0.001128 | 0.001384 | 0.001169 |
| make_vector.test | RUN | 0.182134 | 0.481655 | 0.621740 | 0.001155 | 0.001272 | 0.001087 |
| map.test | RUN | 0.245489 | 0.756887 | 0.829097 | 0.001236 | 0.001344 | 0.001244 |
| map_comparison.test | RUN | 0.176910 | 0.476562 | 0.555456 | 0.001158 | 0.001311 | 0.001313 |
| map_construction.test | RUN | 0.174891 | 0.458993 | 0.559271 | 0.001199 | 0.001285 | 0.001276 |
| map_copy.test | RUN | 0.219039 | 0.574040 | 0.670665 | 0.001032 | 0.001390 | 0.001157 |
| map_misc.test | RUN | 0.231787 | 0.598074 | 0.695421 | 0.001031 | 0.001338 | 0.001244 |
| map_move.test | RUN | 0.176674 | 0.492349 | 0.553365 | 0.001252 | 0.001158 | 0.001225 |
| map_mutate.test | RUN | 0.160815 | 0.394838 | 0.482402 | 0.001077 | 0.001244 | 0.001262 |
| map_tie.test | RUN | 0.167577 | 0.391758 | 0.495121 | 0.001043 | 0.001261 | 0.001019 |
| nil.test | RUN | 0.111266 | 0.278247 | 0.332794 | 0.001204 | 0.001365 | 0.001158 |
| nview.test | RUN | 0.225015 | 0.583343 | 0.705622 | 0.001240 | 0.001259 | 0.001189 |
| reverse_view.test | RUN | 0.305482 | 0.949040 | 1.059309 | 0.001246 | 0.001487 | 0.001247 |
| segmented_iterator_range.test | RUN | 0.353330 | 1.135586 | 1.325800 | 0.001268 | 0.001266 | 0.001213 |
| set.test | RUN | 0.224992 | 0.663799 | 0.737132 | 0.001109 | 0.001317 | 0.001182 |
| single_view.test | RUN | 0.201176 | 0.590519 | 0.674395 | 0.001097 | 0.001206 | 0.001120 |
| std_pair.test | RUN | 0.260219 | 0.759731 | 0.863474 | 0.001128 | 0.001370 | 0.001312 |
| boost_array.test | RUN | 0.208041 | 0.512145 | 0.639830 | 0.001099 | 0.001360 | 0.001311 |
| array.test | RUN | 0.207774 | 0.519372 | 0.641882 | 0.000980 | 0.001282 | 0.001179 |
| std_array.test | RUN | 0.210509 | 0.534444 | 0.622375 | 0.001091 | 0.001126 | 0.001033 |
| tuple_comparison.test | RUN | 0.193634 | 0.494410 | 0.583228 | 0.001124 | 0.001406 | 0.001294 |
| tuple_construction.test | RUN | 0.193979 | 0.496517 | 0.600900 | 0.001144 | 0.001439 | 0.001310 |
| tuple_conversion.test | RUN | 0.425901 | 1.533820 | 1.956916 | 0.001067 | 0.001192 | 0.001210 |
| tuple_copy.test | RUN | 0.275690 | 0.881572 | 1.015676 | 0.001304 | 0.001263 | 0.001027 |
| tuple_element.test | RUN | 0.179861 | 0.442207 | 0.528544 | 0.000990 | 0.001299 | 0.001232 |
| tuple_make.test | RUN | 0.191016 | 0.503844 | 0.591329 | 0.001073 | 0.001229 | 0.001179 |
| tuple_misc.test | RUN | 0.245603 | 0.616386 | 0.779477 | 0.001167 | 0.001415 | 0.001057 |
| tuple_mutate.test | RUN | 0.169957 | 0.422231 | 0.506925 | 0.001383 | 0.001251 | 0.001279 |
| tuple_nest.test | RUN | 0.717963 | 3.188342 | 3.694081 | 0.001104 | 0.001278 | 0.001163 |
| tuple_hash.test | RUN | 0.247892 | 0.918091 | 0.802597 | 0.001195 | 0.001320 | 0.001194 |
| tuple_tie.test | RUN | 0.178113 | 0.458903 | 0.546305 | 0.001014 | 0.001145 | 0.001136 |
| tuple_traits__maybe_variadic.test | RUN | 0.193381 | 0.571191 | 0.585082 | 0.001098 | 0.001289 | 0.001117 |
| tuple_traits__no_variadic.test | RUN | 0.214113 | 0.574547 | 0.633480 | 0.001066 | 0.001383 | 0.001170 |
| transform_view.test | RUN | 0.298271 | 0.953671 | 1.031704 | 0.001217 | 0.001240 | 0.001226 |
| identity_view.test | RUN | 0.276179 | 0.886729 | 1.000746 | 0.001152 | 0.001262 | 0.001070 |
| vector_comparison.test | RUN | 0.180486 | 0.468979 | 0.595742 | 0.001073 | 0.001283 | 0.001162 |
| vector_construction.test | RUN | 0.183682 | 0.450410 | 0.533926 | 0.000960 | 0.001178 | 0.001141 |
| vector_conversion.test | RUN | 0.509305 | 2.040638 | 2.459889 | 0.001224 | 0.001354 | 0.001114 |
| vector_copy.test | RUN | 0.267070 | 0.883974 | 1.029834 | 0.001086 | 0.001276 | 0.001088 |
| vector_iterator.test | RUN | 0.169111 | 0.448602 | 0.532225 | 0.001350 | 0.001299 | 0.001157 |
| vector_make.test | RUN | 0.182507 | 0.469107 | 0.575276 | 0.001116 | 0.001314 | 0.001254 |
| vector_misc.test | RUN | 0.234204 | 0.583686 | 0.689819 | 0.001004 | 0.001223 | 0.001083 |
| vector_move.test | RUN | 0.175892 | 0.495314 | 0.543828 | 0.001108 | 0.001242 | 0.001130 |
| vector_mutate.test | RUN | 0.158735 | 0.386627 | 0.505686 | 0.001024 | 0.001188 | 0.001143 |
| vector_n.test | RUN | 0.197912 | 0.491353 | 0.618754 | 0.001350 | 0.001277 | 0.001192 |
| vector_nest.test | RUN | 0.761323 | 3.237877 | 3.704832 | 0.001156 | 0.001344 | 0.001252 |
| vector_hash.test | RUN | 0.237889 | 0.912612 | 0.741841 | 0.001186 | 0.001184 | 0.001103 |
| vector_tie.test | RUN | 0.167765 | 0.432894 | 0.538413 | 0.001296 | 0.001244 | 0.001128 |
| vector_traits__maybe_variadic.test | RUN | 0.189074 | 0.510677 | 0.541597 | 0.001268 | 0.001329 | 0.001153 |
| vector_traits__no_variadic.test | RUN | 0.202163 | 0.546607 | 0.594416 | 0.001209 | 0.001292 | 0.001222 |
| vector_value_at.test | RUN | 0.171550 | 0.388520 | 0.488337 | 0.001096 | 0.001197 | 0.001179 |
| zip_view.test | RUN | 0.340597 | 0.964239 | 1.240371 | 0.001368 | 0.001182 | 0.001267 |
| zip_view2.test | RUN | 0.285291 | 0.766998 | 0.958116 | 0.001028 | 0.001159 | 0.001184 |
| zip_view_ignore.test | RUN | 0.258595 | 0.694342 | 0.887576 | 0.001190 | 0.001178 | 0.001187 |
| repetitive_view.test | RUN | 0.443585 | 1.254730 | 1.615898 | 0.001189 | 0.001243 | 0.001170 |
| deduce_sequence.test | RUN | 0.212708 | 0.539931 | 0.695863 | 0.001219 | 0.001366 | 0.001170 |
| adapt_adt_named.test | RUN | 0.259104 | 0.761883 | 0.818704 | 0.001088 | 0.001320 | 0.001224 |
| adapt_adt_named_empty.test | RUN | 0.228494 | 0.610391 | 0.694170 | 0.001145 | 0.001282 | 0.001180 |
| adapt_adt.test | RUN | 0.290652 | 1.019868 | 1.013173 | 0.001223 | 0.001215 | 0.001102 |
| adapt_adt_empty.test | RUN | 0.222203 | 0.614676 | 0.700359 | 0.001039 | 0.001408 | 0.001155 |
| adapt_assoc_adt_named.test | RUN | 0.287560 | 0.808782 | 0.905503 | 0.001116 | 0.001190 | 0.001200 |
| adapt_assoc_adt_named_empty.test | RUN | 0.220547 | 0.598436 | 0.690362 | 0.001133 | 0.001242 | 0.001217 |
| adapt_assoc_adt.test | RUN | 0.291179 | 0.824415 | 0.941790 | 0.001141 | 0.001174 | 0.001213 |
| adapt_assoc_adt_empty.test | RUN | 0.222557 | 0.606525 | 0.698171 | 0.001306 | 0.001308 | 0.001160 |
| adapt_assoc_struct_named.test | RUN | 0.274929 | 0.781988 | 0.885856 | 0.001108 | 0.001268 | 0.001175 |
| adapt_assoc_struct_named_empty.test | RUN | 0.221567 | 0.618675 | 0.683500 | 0.001080 | 0.001242 | 0.001207 |
| adapt_assoc_struct.test | RUN | 0.255996 | 0.736850 | 0.812010 | 0.001322 | 0.001246 | 0.001104 |
| adapt_assoc_struct_empty.test | RUN | 0.217869 | 0.601514 | 0.682805 | 0.001226 | 0.001232 | 0.001239 |
| adapt_assoc_tpl_adt.test | RUN | 0.299635 | 0.846954 | 0.982817 | 0.001113 | 0.001207 | 0.001218 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.222261 | 0.613406 | 0.689297 | 0.001194 | 0.001346 | 0.001331 |
| adapt_assoc_tpl_struct.test | RUN | 0.241387 | 0.722927 | 0.806246 | 0.001126 | 0.001271 | 0.001137 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.224373 | 0.612172 | 0.690750 | 0.001094 | 0.001201 | 0.001296 |
| adapt_struct_named.test | RUN | 0.247451 | 0.749888 | 0.825342 | 0.001119 | 0.001226 | 0.001216 |
| adapt_struct_named_empty.test | RUN | 0.218146 | 0.609528 | 0.707227 | 0.001087 | 0.001241 | 0.001289 |
| adapt_struct.test | RUN | 0.274630 | 0.850941 | 0.927631 | 0.001270 | 0.001287 | 0.001266 |
| adapt_struct_empty.test | RUN | 0.219459 | 0.605862 | 0.683632 | 0.001305 | 0.001209 | 0.001169 |
| adapt_tpl_adt.test | RUN | 0.282082 | 0.981994 | 0.991866 | 0.001091 | 0.001249 | 0.001140 |
| adapt_tpl_adt_empty.test | RUN | 0.222214 | 0.624907 | 0.688994 | 0.001124 | 0.001282 | 0.001532 |
| adapt_tpl_struct.test | RUN | 0.233413 | 0.677240 | 0.770104 | 0.001340 | 0.001163 | 0.001219 |
| adapt_tpl_struct_empty.test | RUN | 0.217046 | 0.624911 | 0.691345 | 0.001225 | 0.001242 | 0.001116 |
| adt_attribute_proxy.test | RUN | 0.246987 | 0.598261 | 0.733639 | 0.001203 | 0.001323 | 0.001218 |
| define_struct.test | RUN | 0.308891 | 0.840423 | 0.981069 | 0.001122 | 0.001196 | 0.001156 |
| define_struct_empty.test | RUN | 0.263685 | 0.693777 | 0.796863 | 0.001154 | 0.001306 | 0.001145 |
| define_struct_move.test | RUN | 0.164696 | 0.393567 | 0.463660 | 0.001258 | 0.001165 | 0.001195 |
| define_struct_inline.test | RUN | 0.320130 | 1.012414 | 1.099317 | 0.001234 | 0.001219 | 0.001177 |
| define_struct_inline_empty.test | RUN | 0.264078 | 0.691553 | 0.791250 | 0.001322 | 0.001293 | 0.001127 |
| define_struct_inline_move.test | RUN | 0.172513 | 0.399727 | 0.469913 | 0.001084 | 0.001355 | 0.001221 |
| define_assoc_struct.test | RUN | 0.290897 | 0.801356 | 0.937779 | 0.001376 | 0.001240 | 0.001183 |
| define_assoc_struct_empty.test | RUN | 0.259579 | 0.693675 | 0.792740 | 0.001110 | 0.001246 | 0.001123 |
| define_assoc_struct_move.test | RUN | 0.171015 | 0.390269 | 0.467513 | 0.001222 | 0.001051 | 0.001242 |
| define_tpl_struct.test | RUN | 0.298623 | 0.802396 | 0.921504 | 0.001133 | 0.001255 | 0.001111 |
| define_tpl_struct_empty.test | RUN | 0.263674 | 0.700188 | 0.810551 | 0.001198 | 0.001178 | 0.001154 |
| define_tpl_struct_move.test | RUN | 0.167321 | 0.384088 | 0.472444 | 0.001266 | 0.001382 | 0.001086 |
| define_tpl_struct_inline.test | RUN | 0.312528 | 0.955360 | 1.005380 | 0.001094 | 0.001319 | 0.001120 |
| define_tpl_struct_inline_empty.test | RUN | 0.270149 | 0.695815 | 0.804959 | 0.001132 | 0.001088 | 0.001087 |
| define_tpl_struct_inline_move.test | RUN | 0.161600 | 0.393189 | 0.476122 | 0.001122 | 0.001188 | 0.001175 |
| define_assoc_tpl_struct.test | RUN | 0.299854 | 0.831808 | 0.935057 | 0.001354 | 0.001242 | 0.001158 |
| define_assoc_tpl_struct_empty.test | RUN | 0.267557 | 0.703255 | 0.810953 | 0.001263 | 0.001288 | 0.001299 |
| define_assoc_tpl_struct_move.test | RUN | 0.168516 | 0.393035 | 0.464300 | 0.001103 | 0.001261 | 0.001170 |
| std_tuple.test | RUN | 0.171462 | 0.438507 | 0.520248 | 0.001054 | 0.001242 | 0.001224 |
| std_tuple_iterator.test | RUN | 0.176776 | 0.471242 | 0.535941 | 0.001293 | 0.001376 | 0.001158 |
| ref_vector.test | RUN | 0.197528 | 0.470803 | 0.573909 | 0.001276 | 0.001302 | 0.001069 |
| flatten_view.test | RUN | 0.215739 | 0.589775 | 0.668686 | 0.001138 | 0.001274 | 0.001172 |
| github-159.test | COMPILE | 0.092139 | 0.209824 | 0.249187 | — | — | — |
| github-176.test | RUN | 0.195875 | 0.523273 | 0.569205 | 0.001054 | 0.001185 | 0.001086 |
| size.test | COMPILE | 0.164323 | 0.368276 | 0.445205 | — | — | — |
| fused.test | RUN | 0.227978 | 0.554975 | 0.652578 | 0.000921 | 0.001309 | 0.001133 |
| fused_function_object.test | RUN | 0.170712 | 0.421699 | 0.500971 | 0.001160 | 0.001224 | 0.001088 |
| fused_procedure.test | RUN | 0.229996 | 0.524805 | 0.624464 | 0.001332 | 0.001263 | 0.001078 |
| unfused.test | RUN | 0.181801 | 0.445232 | 0.523061 | 0.001191 | 0.001312 | 0.001123 |
| unfused_typed.test | RUN | 0.182477 | 0.466293 | 0.548813 | 0.001333 | 0.001089 | 0.001209 |
| make_fused.test | RUN | 0.234680 | 0.557433 | 0.656949 | 0.001195 | 0.001371 | 0.001314 |
| make_fused_function_object.test | RUN | 0.173191 | 0.413625 | 0.507394 | 0.001178 | 0.001314 | 0.001008 |
| make_fused_procedure.test | RUN | 0.225819 | 0.541308 | 0.638207 | 0.001032 | 0.001255 | 0.001111 |
| make_unfused.test | RUN | 0.172860 | 0.424962 | 0.523848 | 0.001358 | 0.001226 | 0.001116 |
| invoke.test | RUN | 0.462528 | 1.524462 | 1.751835 | 0.001093 | 0.001193 | 0.001097 |
| invoke_function_object.test | RUN | 0.211495 | 0.559413 | 0.662932 | 0.001339 | 0.001218 | 0.001223 |
| invoke_procedure.test | RUN | 0.356485 | 1.149129 | 1.321443 | 0.001183 | 0.001278 | 0.001072 |
| swap.test | RUN | 0.264868 | 0.689804 | 0.840189 | 0.001079 | 0.001264 | 0.001135 |
| is_sequence.test | COMPILE | 0.044887 | 0.096813 | 0.103835 | — | — | — |
| is_view.test | COMPILE | 0.046187 | 0.096359 | 0.103126 | — | — | — |
| pair_deque.test | COMPILE | 0.100252 | 0.218165 | 0.259153 | — | — | — |
| pair_list.test | COMPILE | 0.093288 | 0.214832 | 0.249944 | — | — | — |
| pair_map.test | COMPILE | 0.097632 | 0.225732 | 0.266636 | — | — | — |
| pair_set.test | COMPILE | 0.099406 | 0.223760 | 0.260144 | — | — | — |
| pair_vector.test | COMPILE | 0.098010 | 0.219487 | 0.251931 | — | — | — |
| pair_nest.test | COMPILE | 0.038627 | 0.089043 | 0.094358 | — | — | — |
| index_sequence.test | COMPILE | 0.032952 | 0.061347 | 0.071460 | — | — | — |
| and.test | COMPILE | 0.025241 | 0.046676 | 0.052353 | — | — | — |
| tag_of.test | COMPILE | 0.044157 | 0.092860 | 0.095072 | — | — | — |
| unused.test | COMPILE | 0.021763 | 0.060338 | 0.059609 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.033088 | 0.085205 | 0.100188 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.029567 | 0.086650 | 0.066942 | — | — | — |
| quick.test | RUN | 0.131232 | 0.309034 | 0.318532 | 0.000364 | 0.000860 | 0.000872 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.004× | 1.003×, 1.004× | 1.001× |
| clang | 1.003× | 1.002×, 1.004× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44801983152).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.000824s | 0.000810s | 0.000815s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.000814s | 0.000807s | 0.000810s | byte equality observed |
| adapt_adt_named.test | 10 | 0.000840s | 0.000818s | 0.000805s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.000852s | 0.000809s | 0.000816s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.000823s | 0.000832s | 0.000862s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.000828s | 0.000829s | 0.000832s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.000832s | 0.000836s | 0.000810s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.000801s | 0.000805s | 0.000830s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.000838s | 0.000838s | 0.000830s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.000849s | 0.000814s | 0.000827s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.000813s | 0.000830s | 0.000838s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.000825s | 0.000845s | 0.000858s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.000819s | 0.000800s | 0.000800s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.000825s | 0.000841s | 0.000805s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.000827s | 0.000823s | 0.000836s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.000828s | 0.000827s | 0.000809s | byte equality observed |
| adapt_struct.test | 10 | 0.000824s | 0.000842s | 0.000807s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.000839s | 0.000800s | 0.000788s | byte equality observed |
| adapt_struct_named.test | 10 | 0.000828s | 0.000842s | 0.000822s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.000823s | 0.000819s | 0.000814s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.000832s | 0.000826s | 0.000812s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.000828s | 0.000818s | 0.000823s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.000833s | 0.000815s | 0.000828s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.000822s | 0.000824s | 0.000818s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.000823s | 0.000799s | 0.000822s | byte equality observed |
| all.test | 10 | 0.000816s | 0.000812s | 0.000813s | byte equality observed |
| any.test | 10 | 0.000797s | 0.000831s | 0.000816s | byte equality observed |
| array.test | 10 | 0.000804s | 0.000797s | 0.000842s | byte equality observed |
| as_deque.test | 10 | 0.000809s | 0.000819s | 0.000821s | byte equality observed |
| as_list.test | 10 | 0.000841s | 0.000818s | 0.000862s | byte equality observed |
| as_map.test | 10 | 0.000816s | 0.000834s | 0.000792s | byte equality observed |
| as_map_assoc.test | 10 | 0.000826s | 0.000827s | 0.000810s | byte equality observed |
| as_set.test | 10 | 0.000848s | 0.000831s | 0.000814s | byte equality observed |
| as_vector.test | 10 | 0.000849s | 0.000870s | 0.000838s | byte equality observed |
| back_extended_deque.test | 10 | 0.000790s | 0.000773s | 0.000836s | byte equality observed |
| boost_array.test | 10 | 0.000794s | 0.000812s | 0.000779s | byte equality observed |
| boost_tuple.test | 10 | 0.000826s | 0.000824s | 0.000813s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.000777s | 0.000845s | 0.000792s | byte equality observed |
| clear.test | 10 | 0.000805s | 0.000826s | 0.000825s | byte equality observed |
| cons.test | 10 | 0.000838s | 0.000855s | 0.000813s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.000802s | 0.000814s | 0.000797s | byte equality observed |
| convert_deque.test | 10 | 0.000814s | 0.000816s | 0.000837s | byte equality observed |
| convert_list.test | 10 | 0.000817s | 0.000810s | 0.000827s | byte equality observed |
| convert_std_pair.test | 10 | 0.000803s | 0.000831s | 0.000816s | byte equality observed |
| convert_std_tuple.test | 10 | 0.000810s | 0.000825s | 0.000820s | byte equality observed |
| convert_vector.test | 10 | 0.000803s | 0.000815s | 0.000813s | byte equality observed |
| copy.test | 10 | 0.000811s | 0.000790s | 0.000820s | byte equality observed |
| count.test | 10 | 0.000808s | 0.000796s | 0.000824s | byte equality observed |
| count_if.test | 10 | 0.000813s | 0.000790s | 0.000804s | byte equality observed |
| deduce_sequence.test | 10 | 0.000807s | 0.000822s | 0.000806s | byte equality observed |
| define_assoc_struct.test | 10 | 0.000852s | 0.000839s | 0.000824s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.000816s | 0.000807s | 0.000817s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.000794s | 0.000805s | 0.000818s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.000832s | 0.000812s | 0.000838s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.000800s | 0.000831s | 0.000809s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000808s | 0.000791s | 0.000830s | byte equality observed |
| define_struct.test | 10 | 0.000808s | 0.000822s | 0.000799s | byte equality observed |
| define_struct_empty.test | 10 | 0.000834s | 0.000782s | 0.000831s | byte equality observed |
| define_struct_inline.test | 10 | 0.000815s | 0.000817s | 0.000862s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.000824s | 0.000810s | 0.000837s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000814s | 0.000786s | 0.000789s | byte equality observed |
| define_struct_move.test | 10 | 0.000814s | 0.000793s | 0.000798s | byte equality observed |
| define_tpl_struct.test | 10 | 0.000821s | 0.000821s | 0.000823s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.000818s | 0.000808s | 0.000801s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.000824s | 0.000821s | 0.000809s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.000799s | 0.000826s | 0.000800s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000805s | 0.000817s | 0.000821s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000815s | 0.000801s | 0.000812s | byte equality observed |
| deque_comparison.test | 10 | 0.000823s | 0.000822s | 0.000842s | byte equality observed |
| deque_construction.test | 10 | 0.000817s | 0.000825s | 0.000805s | byte equality observed |
| deque_copy.test | 10 | 0.000824s | 0.000800s | 0.000811s | byte equality observed |
| deque_hash.test | 10 | 0.000798s | 0.000817s | 0.000826s | byte equality observed |
| deque_iterator.test | 10 | 0.000803s | 0.000782s | 0.000807s | byte equality observed |
| deque_make.test | 10 | 0.000803s | 0.000826s | 0.000810s | byte equality observed |
| deque_misc.test | 10 | 0.000785s | 0.000827s | 0.000801s | byte equality observed |
| deque_move.test | 10 | 0.000816s | 0.000827s | 0.000809s | byte equality observed |
| deque_mutate.test | 10 | 0.000820s | 0.000811s | 0.000819s | byte equality observed |
| deque_nest.test | 10 | 0.000785s | 0.000845s | 0.000813s | byte equality observed |
| deque_tie.test | 10 | 0.000785s | 0.000824s | 0.000819s | byte equality observed |
| deque_value_at.test | 10 | 0.000794s | 0.000831s | 0.000858s | byte equality observed |
| erase.test | 10 | 0.000815s | 0.000836s | 0.000850s | byte equality observed |
| erase_key.test | 10 | 0.000832s | 0.000843s | 0.000836s | byte equality observed |
| filter.test | 10 | 0.000809s | 0.000835s | 0.000817s | byte equality observed |
| filter_if.test | 10 | 0.000815s | 0.000820s | 0.000820s | byte equality observed |
| filter_view.test | 10 | 0.000824s | 0.000818s | 0.000839s | byte equality observed |
| find.test | 10 | 0.000827s | 0.000822s | 0.000801s | byte equality observed |
| find_if.test | 10 | 0.000833s | 0.000835s | 0.000837s | byte equality observed |
| flatten.test | 10 | 0.000819s | 0.000832s | 0.000852s | byte equality observed |
| flatten_view.test | 10 | 0.000816s | 0.000833s | 0.000816s | byte equality observed |
| fold.test | 10 | 0.000835s | 0.000847s | 0.000853s | byte equality observed |
| for_each.test | 10 | 0.000833s | 0.000824s | 0.000845s | byte equality observed |
| front_extended_deque.test | 10 | 0.000827s | 0.000825s | 0.000842s | byte equality observed |
| fused.test | 10 | 0.000792s | 0.000799s | 0.000825s | byte equality observed |
| fused_function_object.test | 10 | 0.000812s | 0.000819s | 0.000855s | byte equality observed |
| fused_procedure.test | 10 | 0.000802s | 0.000794s | 0.000796s | byte equality observed |
| github-176.test | 10 | 0.000809s | 0.000840s | 0.000786s | byte equality observed |
| hash.test | 10 | 0.000814s | 0.000843s | 0.000803s | byte equality observed |
| identity_view.test | 10 | 0.000820s | 0.000803s | 0.000826s | byte equality observed |
| insert.test | 10 | 0.000843s | 0.000829s | 0.000815s | byte equality observed |
| insert_range.test | 10 | 0.000826s | 0.000833s | 0.000848s | byte equality observed |
| invoke.test | 10 | 0.000816s | 0.000842s | 0.000798s | byte equality observed |
| invoke_function_object.test | 10 | 0.000806s | 0.000805s | 0.000802s | byte equality observed |
| invoke_procedure.test | 10 | 0.000804s | 0.000818s | 0.000802s | byte equality observed |
| io.test | 10 | 0.000901s | 0.000925s | 0.000888s | byte equality observed |
| iter_fold.test | 10 | 0.000819s | 0.000837s | 0.000803s | byte equality observed |
| iterator_range.test | 10 | 0.000815s | 0.000849s | 0.000830s | byte equality observed |
| join.test | 10 | 0.000802s | 0.000819s | 0.000796s | byte equality observed |
| joint_view.test | 10 | 0.000847s | 0.000836s | 0.000838s | byte equality observed |
| list_comparison.test | 10 | 0.000832s | 0.000841s | 0.000778s | byte equality observed |
| list_construction.test | 10 | 0.000791s | 0.000823s | 0.000823s | byte equality observed |
| list_copy.test | 10 | 0.000818s | 0.000835s | 0.000841s | byte equality observed |
| list_hash.test | 10 | 0.000820s | 0.000804s | 0.000786s | byte equality observed |
| list_iterator.test | 10 | 0.000808s | 0.000811s | 0.000804s | byte equality observed |
| list_make.test | 10 | 0.000806s | 0.000817s | 0.000817s | byte equality observed |
| list_misc.test | 10 | 0.000809s | 0.000813s | 0.000808s | byte equality observed |
| list_mutate.test | 10 | 0.000819s | 0.000814s | 0.000828s | byte equality observed |
| list_nest.test | 10 | 0.000820s | 0.000809s | 0.000792s | byte equality observed |
| list_tie.test | 10 | 0.000823s | 0.000805s | 0.000800s | byte equality observed |
| list_value_at.test | 10 | 0.000842s | 0.000813s | 0.000820s | byte equality observed |
| make_fused.test | 10 | 0.000822s | 0.000826s | 0.000782s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000818s | 0.000820s | 0.000808s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000800s | 0.000793s | 0.000792s | byte equality observed |
| make_list.test | 10 | 0.000806s | 0.000841s | 0.000808s | byte equality observed |
| make_unfused.test | 10 | 0.000802s | 0.000831s | 0.000825s | byte equality observed |
| make_vector.test | 10 | 0.000824s | 0.000812s | 0.000813s | byte equality observed |
| map.test | 10 | 0.000828s | 0.000812s | 0.000817s | byte equality observed |
| map_comparison.test | 10 | 0.000812s | 0.000802s | 0.000806s | byte equality observed |
| map_construction.test | 10 | 0.000792s | 0.000808s | 0.000778s | byte equality observed |
| map_copy.test | 10 | 0.000791s | 0.000810s | 0.000801s | byte equality observed |
| map_misc.test | 10 | 0.000822s | 0.000796s | 0.000804s | byte equality observed |
| map_move.test | 10 | 0.000834s | 0.000812s | 0.000813s | byte equality observed |
| map_mutate.test | 10 | 0.000844s | 0.000809s | 0.000791s | byte equality observed |
| map_tie.test | 10 | 0.000818s | 0.000799s | 0.000803s | byte equality observed |
| move.test | 10 | 0.000807s | 0.000804s | 0.000806s | byte equality observed |
| nil.test | 10 | 0.000810s | 0.000800s | 0.000778s | byte equality observed |
| none.test | 10 | 0.000802s | 0.000818s | 0.000794s | byte equality observed |
| nview.test | 10 | 0.000813s | 0.000829s | 0.000802s | byte equality observed |
| pop_back.test | 10 | 0.000835s | 0.000855s | 0.000805s | byte equality observed |
| pop_front.test | 10 | 0.000819s | 0.000870s | 0.000837s | byte equality observed |
| push_back.test | 10 | 0.000825s | 0.000832s | 0.000839s | byte equality observed |
| push_front.test | 10 | 0.000840s | 0.000826s | 0.000819s | byte equality observed |
| quick.test | 10 | 0.000364s | 0.000797s | 0.000790s | byte equality observed |
| ref_vector.test | 10 | 0.000815s | 0.000801s | 0.000799s | byte equality observed |
| remove.test | 10 | 0.000850s | 0.000816s | 0.000856s | byte equality observed |
| remove_if.test | 10 | 0.000834s | 0.000796s | 0.000843s | byte equality observed |
| repetitive_view.test | 10 | 0.000808s | 0.000802s | 0.000808s | byte equality observed |
| replace.test | 10 | 0.000823s | 0.000800s | 0.000826s | byte equality observed |
| replace_if.test | 10 | 0.000821s | 0.000849s | 0.000841s | byte equality observed |
| reverse.test | 10 | 0.000837s | 0.000865s | 0.000835s | byte equality observed |
| reverse_fold.test | 10 | 0.000832s | 0.000862s | 0.000813s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.000798s | 0.000817s | 0.000840s | byte equality observed |
| reverse_view.test | 10 | 0.000833s | 0.000838s | 0.000840s | byte equality observed |
| segmented_find.test | 10 | 0.000818s | 0.000851s | 0.000824s | byte equality observed |
| segmented_find_if.test | 10 | 0.000822s | 0.000811s | 0.000823s | byte equality observed |
| segmented_fold.test | 10 | 0.000843s | 0.000844s | 0.000828s | byte equality observed |
| segmented_for_each.test | 10 | 0.000835s | 0.000807s | 0.000832s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.000846s | 0.000866s | 0.000842s | byte equality observed |
| set.test | 10 | 0.000811s | 0.000811s | 0.000838s | byte equality observed |
| single_view.test | 10 | 0.000810s | 0.000847s | 0.000855s | byte equality observed |
| std_array.test | 10 | 0.000799s | 0.000839s | 0.000817s | byte equality observed |
| std_pair.test | 10 | 0.000826s | 0.000856s | 0.000830s | byte equality observed |
| std_tuple.test | 10 | 0.000819s | 0.000821s | 0.000800s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.000804s | 0.000834s | 0.000803s | byte equality observed |
| swap.test | 10 | 0.000819s | 0.000792s | 0.000834s | byte equality observed |
| transform.test | 10 | 0.000829s | 0.000831s | 0.000806s | byte equality observed |
| transform_view.test | 10 | 0.000830s | 0.000851s | 0.000820s | byte equality observed |
| tuple_comparison.test | 10 | 0.000796s | 0.000777s | 0.000796s | byte equality observed |
| tuple_construction.test | 10 | 0.000783s | 0.000782s | 0.000819s | byte equality observed |
| tuple_conversion.test | 10 | 0.000828s | 0.000795s | 0.000799s | byte equality observed |
| tuple_copy.test | 10 | 0.000842s | 0.000812s | 0.000804s | byte equality observed |
| tuple_element.test | 10 | 0.000821s | 0.000790s | 0.000842s | byte equality observed |
| tuple_hash.test | 10 | 0.000812s | 0.000818s | 0.000825s | byte equality observed |
| tuple_make.test | 10 | 0.000818s | 0.000807s | 0.000796s | byte equality observed |
| tuple_misc.test | 10 | 0.000796s | 0.000814s | 0.000803s | byte equality observed |
| tuple_mutate.test | 10 | 0.000816s | 0.000833s | 0.000823s | byte equality observed |
| tuple_nest.test | 10 | 0.000826s | 0.000782s | 0.000808s | byte equality observed |
| tuple_tie.test | 10 | 0.000811s | 0.000801s | 0.000804s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.000793s | 0.000795s | 0.000781s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.000788s | 0.000790s | 0.000799s | byte equality observed |
| unfused.test | 10 | 0.000793s | 0.000836s | 0.000799s | byte equality observed |
| unfused_typed.test | 10 | 0.000804s | 0.000800s | 0.000798s | byte equality observed |
| vector_comparison.test | 10 | 0.000789s | 0.000793s | 0.000828s | byte equality observed |
| vector_construction.test | 10 | 0.000806s | 0.000786s | 0.000796s | byte equality observed |
| vector_conversion.test | 10 | 0.000797s | 0.000793s | 0.000786s | byte equality observed |
| vector_copy.test | 10 | 0.000798s | 0.000814s | 0.000811s | byte equality observed |
| vector_hash.test | 10 | 0.000833s | 0.000830s | 0.000844s | byte equality observed |
| vector_iterator.test | 10 | 0.000805s | 0.000818s | 0.000849s | byte equality observed |
| vector_make.test | 10 | 0.000826s | 0.000820s | 0.000838s | byte equality observed |
| vector_misc.test | 10 | 0.000829s | 0.000782s | 0.000827s | byte equality observed |
| vector_move.test | 10 | 0.000835s | 0.000810s | 0.000833s | byte equality observed |
| vector_mutate.test | 10 | 0.000796s | 0.000819s | 0.000803s | byte equality observed |
| vector_n.test | 10 | 0.000826s | 0.000806s | 0.000814s | byte equality observed |
| vector_nest.test | 10 | 0.000802s | 0.000792s | 0.000802s | byte equality observed |
| vector_tie.test | 10 | 0.000806s | 0.000799s | 0.000806s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000792s | 0.000824s | 0.000812s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000805s | 0.000809s | 0.000822s | byte equality observed |
| vector_value_at.test | 10 | 0.000807s | 0.000810s | 0.000813s | byte equality observed |
| zip.test | 10 | 0.000811s | 0.000811s | 0.000818s | byte equality observed |
| zip2.test | 10 | 0.000809s | 0.000810s | 0.000808s | byte equality observed |
| zip_ignore.test | 10 | 0.000796s | 0.000802s | 0.000829s | byte equality observed |
| zip_view.test | 10 | 0.000814s | 0.000796s | 0.000819s | byte equality observed |
| zip_view2.test | 10 | 0.000827s | 0.000824s | 0.000819s | byte equality observed |
| zip_view_ignore.test | 10 | 0.000800s | 0.000811s | 0.000801s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44801983152).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
