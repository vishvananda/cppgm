# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.279005 | 0.635870 | 0.811071 | 0.001143 | 0.001191 | 0.001053 |
| any.test | RUN | 0.270115 | 0.593034 | 0.741559 | 0.001093 | 0.001177 | 0.001080 |
| clear.test | RUN | 0.197863 | 0.557182 | 0.625255 | 0.001256 | 0.001007 | 0.001160 |
| copy.test | RUN | 0.168285 | 0.415336 | 0.501383 | 0.001224 | 0.001445 | 0.001216 |
| count.test | RUN | 0.186222 | 0.455936 | 0.571738 | 0.001304 | 0.001195 | 0.001394 |
| count_if.test | RUN | 0.176711 | 0.420530 | 0.514875 | 0.001182 | 0.001271 | 0.001250 |
| erase.test | RUN | 0.253176 | 0.756751 | 0.845092 | 0.001133 | 0.001313 | 0.001206 |
| erase_key.test | RUN | 0.246585 | 0.752462 | 0.812032 | 0.001250 | 0.001254 | 0.001226 |
| filter.test | RUN | 0.223489 | 0.629254 | 0.725174 | 0.001426 | 0.001229 | 0.001242 |
| filter_if.test | RUN | 0.246491 | 0.749210 | 0.863826 | 0.001206 | 0.001297 | 0.001201 |
| find.test | RUN | 0.212158 | 0.508877 | 0.644760 | 0.001113 | 0.001192 | 0.001087 |
| find_if.test | RUN | 0.201847 | 0.472298 | 0.605264 | 0.001182 | 0.001296 | 0.001174 |
| fold.test | RUN | 0.221264 | 0.578163 | 0.732528 | 0.001358 | 0.001313 | 0.001192 |
| for_each.test | RUN | 0.199295 | 0.533395 | 0.639403 | 0.001314 | 0.001438 | 0.001084 |
| insert.test | RUN | 0.295358 | 0.945813 | 1.012896 | 0.001220 | 0.001501 | 0.001155 |
| insert_range.test | RUN | 0.297372 | 0.937470 | 1.042238 | 0.001125 | 0.001388 | 0.001146 |
| iter_fold.test | RUN | 0.335820 | 0.888308 | 1.232065 | 0.001211 | 0.001396 | 0.001311 |
| move.test | RUN | 0.168740 | 0.420464 | 0.525576 | 0.001166 | 0.001372 | 0.001212 |
| none.test | RUN | 0.280239 | 0.614342 | 0.762141 | 0.001100 | 0.001340 | 0.001145 |
| pop_back.test | RUN | 0.269473 | 0.827453 | 0.896503 | 0.001310 | 0.001226 | 0.001151 |
| pop_front.test | RUN | 0.226250 | 0.661392 | 0.756393 | 0.001090 | 0.001370 | 0.001124 |
| push_back.test | RUN | 0.287770 | 0.947536 | 1.015910 | 0.001185 | 0.001292 | 0.001204 |
| push_front.test | RUN | 0.256059 | 0.790983 | 0.827510 | 0.001143 | 0.001279 | 0.001230 |
| remove.test | RUN | 0.284754 | 0.892288 | 0.986035 | 0.001220 | 0.001309 | 0.001096 |
| remove_if.test | RUN | 0.249461 | 0.748184 | 0.853887 | 0.001254 | 0.001522 | 0.001109 |
| replace.test | RUN | 0.250424 | 0.733023 | 0.782022 | 0.001180 | 0.001279 | 0.001314 |
| replace_if.test | RUN | 0.236605 | 0.726893 | 0.783241 | 0.001335 | 0.001430 | 0.001205 |
| reverse_fold.test | RUN | 0.364960 | 1.000639 | 1.319860 | 0.001346 | 0.001212 | 0.001318 |
| reverse_iter_fold.test | RUN | 0.382489 | 1.041226 | 1.405861 | 0.001122 | 0.001181 | 0.001248 |
| reverse.test | RUN | 0.244580 | 0.744630 | 0.812791 | 0.001157 | 0.001348 | 0.001120 |
| segmented_for_each.test | RUN | 0.406025 | 1.398745 | 1.630955 | 0.001056 | 0.001337 | 0.001160 |
| segmented_find.test | RUN | 0.252386 | 0.741256 | 0.907195 | 0.001241 | 0.001360 | 0.001186 |
| segmented_find_if.test | RUN | 0.250985 | 0.741916 | 0.921315 | 0.001018 | 0.001160 | 0.001273 |
| segmented_fold.test | RUN | 0.316767 | 0.980791 | 1.170770 | 0.001358 | 0.001304 | 0.001298 |
| transform.test | RUN | 0.251510 | 0.792201 | 0.863420 | 0.001094 | 0.001408 | 0.001174 |
| join.test | RUN | 0.183008 | 0.465006 | 0.596264 | 0.001209 | 0.001298 | 0.001282 |
| zip.test | RUN | 0.322197 | 0.868608 | 1.140101 | 0.001286 | 0.001192 | 0.001183 |
| zip2.test | RUN | 0.325772 | 0.847317 | 1.049707 | 0.001274 | 0.001404 | 0.001092 |
| zip_ignore.test | RUN | 0.234143 | 0.574196 | 0.713913 | 0.001326 | 0.001225 | 0.001278 |
| flatten.test | RUN | 0.222941 | 0.659837 | 0.755838 | 0.001137 | 0.001489 | 0.001233 |
| ticket-5490.test | COMPILE | 0.123852 | 0.276458 | 0.341714 | — | — | — |
| as_deque.test | RUN | 0.228481 | 0.616381 | 0.773469 | 0.001452 | 0.001266 | 0.001188 |
| as_list.test | RUN | 0.258213 | 0.780870 | 0.835196 | 0.001356 | 0.001391 | 0.001109 |
| as_map.test | RUN | 0.249228 | 0.760345 | 0.849891 | 0.001219 | 0.001232 | 0.001156 |
| as_map_assoc.test | RUN | 0.247246 | 0.704216 | 0.803837 | 0.001102 | 0.001232 | 0.001024 |
| as_set.test | RUN | 0.286917 | 0.869284 | 0.981872 | 0.001306 | 0.001202 | 0.001059 |
| as_vector.test | RUN | 0.259105 | 0.788834 | 0.862041 | 0.001140 | 0.001489 | 0.001117 |
| boost_tuple.test | RUN | 0.253902 | 0.782072 | 0.866701 | 0.001066 | 0.001254 | 0.001112 |
| boost_tuple_iterator.test | RUN | 0.170325 | 0.452708 | 0.512717 | 0.001223 | 0.001291 | 0.001224 |
| cons.test | RUN | 0.324098 | 0.865817 | 1.024066 | 0.001088 | 0.001288 | 0.001211 |
| convert_boost_tuple.test | RUN | 0.201187 | 0.673937 | 0.666974 | 0.001234 | 0.001198 | 0.000854 |
| convert_deque.test | RUN | 0.201850 | 0.661611 | 0.657824 | 0.001241 | 0.001479 | 0.001261 |
| convert_list.test | RUN | 0.201299 | 0.676293 | 0.679451 | 0.001099 | 0.001159 | 0.000957 |
| convert_std_pair.test | RUN | 0.212419 | 0.676326 | 0.675169 | 0.001186 | 0.001178 | 0.001075 |
| convert_std_tuple.test | RUN | 0.199965 | 0.664592 | 0.665593 | 0.001129 | 0.001383 | 0.001304 |
| convert_vector.test | RUN | 0.200031 | 0.663753 | 0.672657 | 0.001109 | 0.001178 | 0.001126 |
| filter_view.test | RUN | 0.247250 | 0.694295 | 0.785642 | 0.001163 | 0.001211 | 0.001123 |
| hash.test | RUN | 0.244483 | 0.636423 | 0.749745 | 0.001138 | 0.001332 | 0.001282 |
| io.test | RUN | 0.260997 | 0.912461 | 0.908550 | 0.001128 | 0.001500 | 0.001431 |
| iterator_range.test | RUN | 0.233529 | 0.680540 | 0.769435 | 0.001215 | 0.001438 | 0.001244 |
| joint_view.test | RUN | 0.324030 | 1.131451 | 1.151701 | 0.001338 | 0.001294 | 0.001122 |
| list_comparison.test | RUN | 0.182953 | 0.458292 | 0.538085 | 0.001189 | 0.001295 | 0.001018 |
| list_construction.test | RUN | 0.174901 | 0.445511 | 0.521899 | 0.001166 | 0.001246 | 0.001002 |
| list_copy.test | RUN | 0.265874 | 0.826942 | 0.947757 | 0.001118 | 0.001229 | 0.001314 |
| list_iterator.test | RUN | 0.178206 | 0.460969 | 0.530162 | 0.001091 | 0.001190 | 0.001183 |
| list_hash.test | RUN | 0.235158 | 0.915379 | 0.740277 | 0.001139 | 0.001462 | 0.001089 |
| list_make.test | RUN | 0.183767 | 0.491754 | 0.575483 | 0.001244 | 0.001278 | 0.001109 |
| list_misc.test | RUN | 0.238561 | 0.586619 | 0.707244 | 0.001183 | 0.001245 | 0.001081 |
| list_mutate.test | RUN | 0.164043 | 0.386643 | 0.460278 | 0.001159 | 0.001337 | 0.001212 |
| list_nest.test | RUN | 0.331807 | 1.140541 | 1.327084 | 0.001268 | 0.001161 | 0.001084 |
| list_tie.test | RUN | 0.175399 | 0.435601 | 0.516564 | 0.001249 | 0.001234 | 0.000985 |
| list_value_at.test | RUN | 0.164636 | 0.418108 | 0.483372 | 0.001212 | 0.001290 | 0.001120 |
| deque_comparison.test | RUN | 0.179151 | 0.469608 | 0.574639 | 0.001098 | 0.001324 | 0.001302 |
| deque_construction.test | RUN | 0.175956 | 0.439334 | 0.527570 | 0.001294 | 0.001369 | 0.001190 |
| deque_copy.test | RUN | 0.255940 | 0.777989 | 0.851682 | 0.001254 | 0.001178 | 0.001114 |
| deque_iterator.test | RUN | 0.177952 | 0.465938 | 0.528486 | 0.001047 | 0.001146 | 0.001180 |
| deque_hash.test | RUN | 0.242197 | 0.898850 | 0.761244 | 0.001168 | 0.001334 | 0.001152 |
| deque_is_constructible.test | COMPILE | 0.095163 | 0.202682 | 0.234916 | — | — | — |
| deque_make.test | RUN | 0.179344 | 0.451208 | 0.559490 | 0.001220 | 0.001139 | 0.001124 |
| deque_misc.test | RUN | 0.235276 | 0.578879 | 0.684706 | 0.001139 | 0.001344 | 0.001342 |
| deque_move.test | RUN | 0.180681 | 0.482610 | 0.540596 | 0.001103 | 0.001124 | 0.001135 |
| deque_mutate.test | RUN | 0.164868 | 0.393851 | 0.477823 | 0.001088 | 0.001279 | 0.001139 |
| deque_nest.test | RUN | 0.511222 | 1.839018 | 2.049770 | 0.001335 | 0.001313 | 0.001084 |
| deque_tie.test | RUN | 0.164715 | 0.414515 | 0.495027 | 0.001246 | 0.001126 | 0.001102 |
| deque_value_at.test | RUN | 0.170609 | 0.401714 | 0.494166 | 0.001120 | 0.001410 | 0.001096 |
| front_extended_deque.test | RUN | 0.241615 | 0.600407 | 0.730024 | 0.001071 | 0.001398 | 0.001118 |
| back_extended_deque.test | RUN | 0.237262 | 0.599199 | 0.727333 | 0.000888 | 0.001361 | 0.001191 |
| make_list.test | RUN | 0.191015 | 0.492128 | 0.604413 | 0.001184 | 0.001290 | 0.001223 |
| make_vector.test | RUN | 0.186214 | 0.471842 | 0.554116 | 0.001062 | 0.001406 | 0.001128 |
| map.test | RUN | 0.248143 | 0.752917 | 0.811145 | 0.000979 | 0.001380 | 0.001061 |
| map_comparison.test | RUN | 0.184781 | 0.478584 | 0.557736 | 0.001184 | 0.001241 | 0.001228 |
| map_construction.test | RUN | 0.180196 | 0.452636 | 0.544490 | 0.001083 | 0.001210 | 0.001128 |
| map_copy.test | RUN | 0.224344 | 0.582812 | 0.682366 | 0.001110 | 0.001245 | 0.001109 |
| map_misc.test | RUN | 0.234996 | 0.594196 | 0.674019 | 0.001242 | 0.001364 | 0.001154 |
| map_move.test | RUN | 0.184126 | 0.493823 | 0.550210 | 0.001225 | 0.001303 | 0.001136 |
| map_mutate.test | RUN | 0.163087 | 0.396505 | 0.464147 | 0.001148 | 0.001171 | 0.001170 |
| map_tie.test | RUN | 0.173275 | 0.390760 | 0.491798 | 0.001102 | 0.001248 | 0.001138 |
| nil.test | RUN | 0.114362 | 0.284742 | 0.331157 | 0.001273 | 0.001278 | 0.001265 |
| nview.test | RUN | 0.227432 | 0.579028 | 0.712845 | 0.001208 | 0.001323 | 0.001135 |
| reverse_view.test | RUN | 0.311731 | 0.966930 | 1.059396 | 0.001146 | 0.001310 | 0.001154 |
| segmented_iterator_range.test | RUN | 0.358435 | 1.140888 | 1.269289 | 0.001209 | 0.001337 | 0.001196 |
| set.test | RUN | 0.214060 | 0.660477 | 0.719610 | 0.001133 | 0.001240 | 0.001073 |
| single_view.test | RUN | 0.208996 | 0.592584 | 0.664742 | 0.001160 | 0.001385 | 0.001145 |
| std_pair.test | RUN | 0.261377 | 0.760784 | 0.831355 | 0.001187 | 0.001324 | 0.001056 |
| boost_array.test | RUN | 0.219975 | 0.520359 | 0.628508 | 0.001084 | 0.001362 | 0.001178 |
| array.test | RUN | 0.213413 | 0.524396 | 0.632520 | 0.001123 | 0.001125 | 0.001053 |
| std_array.test | RUN | 0.216438 | 0.521631 | 0.621811 | 0.001041 | 0.001237 | 0.001070 |
| tuple_comparison.test | RUN | 0.191736 | 0.495543 | 0.575050 | 0.001225 | 0.001271 | 0.001199 |
| tuple_construction.test | RUN | 0.201857 | 0.502910 | 0.576771 | 0.001155 | 0.001316 | 0.001062 |
| tuple_conversion.test | RUN | 0.437995 | 1.546882 | 1.945138 | 0.001192 | 0.001245 | 0.001231 |
| tuple_copy.test | RUN | 0.286641 | 0.890958 | 1.026471 | 0.001240 | 0.001370 | 0.001026 |
| tuple_element.test | RUN | 0.178013 | 0.430213 | 0.523693 | 0.001172 | 0.001294 | 0.001319 |
| tuple_make.test | RUN | 0.200897 | 0.514068 | 0.567007 | 0.001042 | 0.001405 | 0.001036 |
| tuple_misc.test | RUN | 0.243331 | 0.626461 | 0.716289 | 0.001102 | 0.001338 | 0.001064 |
| tuple_mutate.test | RUN | 0.168333 | 0.423397 | 0.557418 | 0.001110 | 0.001374 | 0.001201 |
| tuple_nest.test | RUN | 0.727003 | 3.238010 | 3.553823 | 0.001125 | 0.001378 | 0.001155 |
| tuple_hash.test | RUN | 0.242150 | 0.913102 | 0.754243 | 0.001237 | 0.001269 | 0.001093 |
| tuple_tie.test | RUN | 0.184791 | 0.469105 | 0.548208 | 0.001413 | 0.001277 | 0.001136 |
| tuple_traits__maybe_variadic.test | RUN | 0.195250 | 0.554266 | 0.590702 | 0.001120 | 0.001144 | 0.001126 |
| tuple_traits__no_variadic.test | RUN | 0.223610 | 0.578392 | 0.646261 | 0.001209 | 0.001449 | 0.001299 |
| transform_view.test | RUN | 0.308899 | 0.964634 | 1.028971 | 0.001354 | 0.001343 | 0.001045 |
| identity_view.test | RUN | 0.282383 | 0.898692 | 0.964643 | 0.001298 | 0.001427 | 0.001130 |
| vector_comparison.test | RUN | 0.178003 | 0.485124 | 0.591784 | 0.001063 | 0.001313 | 0.001055 |
| vector_construction.test | RUN | 0.184726 | 0.447148 | 0.532667 | 0.001009 | 0.001354 | 0.001120 |
| vector_conversion.test | RUN | 0.521780 | 2.031842 | 2.441124 | 0.001366 | 0.001453 | 0.001107 |
| vector_copy.test | RUN | 0.271395 | 0.879278 | 0.990351 | 0.001292 | 0.001448 | 0.001075 |
| vector_iterator.test | RUN | 0.170698 | 0.470914 | 0.533766 | 0.001148 | 0.001319 | 0.001196 |
| vector_make.test | RUN | 0.188609 | 0.479488 | 0.556559 | 0.001058 | 0.001281 | 0.001060 |
| vector_misc.test | RUN | 0.233085 | 0.608250 | 0.671062 | 0.001167 | 0.001273 | 0.001078 |
| vector_move.test | RUN | 0.186278 | 0.496890 | 0.574014 | 0.001076 | 0.001343 | 0.001154 |
| vector_mutate.test | RUN | 0.161489 | 0.389081 | 0.463980 | 0.000986 | 0.001343 | 0.000975 |
| vector_n.test | RUN | 0.202719 | 0.500851 | 0.635277 | 0.001293 | 0.001426 | 0.001161 |
| vector_nest.test | RUN | 0.760433 | 3.435501 | 3.580904 | 0.001192 | 0.001253 | 0.001115 |
| vector_hash.test | RUN | 0.232730 | 0.918244 | 0.734368 | 0.001155 | 0.001373 | 0.001030 |
| vector_tie.test | RUN | 0.168021 | 0.448287 | 0.517638 | 0.001260 | 0.001508 | 0.001094 |
| vector_traits__maybe_variadic.test | RUN | 0.184918 | 0.492665 | 0.531445 | 0.001116 | 0.001259 | 0.001188 |
| vector_traits__no_variadic.test | RUN | 0.196331 | 0.558314 | 0.569804 | 0.001212 | 0.001284 | 0.001092 |
| vector_value_at.test | RUN | 0.163306 | 0.413995 | 0.486313 | 0.001083 | 0.001432 | 0.001124 |
| zip_view.test | RUN | 0.334184 | 0.987198 | 1.225842 | 0.001280 | 0.001319 | 0.000988 |
| zip_view2.test | RUN | 0.275023 | 0.767729 | 0.953360 | 0.001188 | 0.001197 | 0.000995 |
| zip_view_ignore.test | RUN | 0.261703 | 0.703416 | 0.860795 | 0.001211 | 0.001260 | 0.001131 |
| repetitive_view.test | RUN | 0.433493 | 1.292631 | 1.639540 | 0.001160 | 0.001338 | 0.001072 |
| deduce_sequence.test | RUN | 0.207564 | 0.555252 | 0.641455 | 0.001177 | 0.001294 | 0.001194 |
| adapt_adt_named.test | RUN | 0.254037 | 0.776872 | 0.820642 | 0.001038 | 0.001477 | 0.001126 |
| adapt_adt_named_empty.test | RUN | 0.223237 | 0.622877 | 0.682129 | 0.001360 | 0.001342 | 0.001192 |
| adapt_adt.test | RUN | 0.288022 | 1.040881 | 1.012072 | 0.001234 | 0.001444 | 0.001052 |
| adapt_adt_empty.test | RUN | 0.217918 | 0.643139 | 0.685978 | 0.001315 | 0.001485 | 0.001178 |
| adapt_assoc_adt_named.test | RUN | 0.284795 | 0.812195 | 0.897113 | 0.001129 | 0.001089 | 0.001163 |
| adapt_assoc_adt_named_empty.test | RUN | 0.221020 | 0.632628 | 0.682004 | 0.001289 | 0.001161 | 0.001243 |
| adapt_assoc_adt.test | RUN | 0.288871 | 0.850168 | 0.929269 | 0.001269 | 0.001460 | 0.001073 |
| adapt_assoc_adt_empty.test | RUN | 0.220076 | 0.639641 | 0.691749 | 0.001378 | 0.001296 | 0.001120 |
| adapt_assoc_struct_named.test | RUN | 0.277056 | 0.804730 | 0.868957 | 0.001125 | 0.001532 | 0.001137 |
| adapt_assoc_struct_named_empty.test | RUN | 0.216461 | 0.631096 | 0.677448 | 0.001015 | 0.001297 | 0.001223 |
| adapt_assoc_struct.test | RUN | 0.251023 | 0.759370 | 0.828028 | 0.001115 | 0.001470 | 0.001006 |
| adapt_assoc_struct_empty.test | RUN | 0.218548 | 0.618921 | 0.687186 | 0.001342 | 0.001564 | 0.001103 |
| adapt_assoc_tpl_adt.test | RUN | 0.293242 | 0.867920 | 0.957653 | 0.001039 | 0.001200 | 0.001005 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.220630 | 0.642716 | 0.685347 | 0.001240 | 0.001530 | 0.001162 |
| adapt_assoc_tpl_struct.test | RUN | 0.244803 | 0.740561 | 0.808731 | 0.001248 | 0.001362 | 0.001093 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.217711 | 0.615729 | 0.680484 | 0.001237 | 0.001141 | 0.001119 |
| adapt_struct_named.test | RUN | 0.246608 | 0.781063 | 0.819409 | 0.001167 | 0.001221 | 0.001219 |
| adapt_struct_named_empty.test | RUN | 0.214901 | 0.636999 | 0.668165 | 0.001040 | 0.001274 | 0.001123 |
| adapt_struct.test | RUN | 0.274519 | 0.865258 | 0.902327 | 0.001202 | 0.001372 | 0.001104 |
| adapt_struct_empty.test | RUN | 0.218078 | 0.633529 | 0.692912 | 0.001324 | 0.001485 | 0.001085 |
| adapt_tpl_adt.test | RUN | 0.277369 | 1.006690 | 0.962401 | 0.001098 | 0.001503 | 0.001013 |
| adapt_tpl_adt_empty.test | RUN | 0.218173 | 0.633665 | 0.684571 | 0.001194 | 0.001471 | 0.001091 |
| adapt_tpl_struct.test | RUN | 0.230776 | 0.684574 | 0.734205 | 0.001405 | 0.001485 | 0.001062 |
| adapt_tpl_struct_empty.test | RUN | 0.216491 | 0.628046 | 0.687344 | 0.001238 | 0.001340 | 0.001027 |
| adt_attribute_proxy.test | RUN | 0.248263 | 0.605643 | 0.713733 | 0.001142 | 0.001430 | 0.001120 |
| define_struct.test | RUN | 0.302087 | 0.863064 | 0.967126 | 0.001078 | 0.001435 | 0.001153 |
| define_struct_empty.test | RUN | 0.269934 | 0.682404 | 0.770558 | 0.001270 | 0.001271 | 0.001110 |
| define_struct_move.test | RUN | 0.169166 | 0.403459 | 0.464119 | 0.001262 | 0.001187 | 0.001234 |
| define_struct_inline.test | RUN | 0.335769 | 1.045975 | 1.102283 | 0.001177 | 0.001364 | 0.001197 |
| define_struct_inline_empty.test | RUN | 0.271820 | 0.712857 | 0.770230 | 0.001138 | 0.001338 | 0.001132 |
| define_struct_inline_move.test | RUN | 0.176681 | 0.388860 | 0.468035 | 0.001088 | 0.001422 | 0.001171 |
| define_assoc_struct.test | RUN | 0.287142 | 0.827143 | 0.930767 | 0.001236 | 0.001212 | 0.001096 |
| define_assoc_struct_empty.test | RUN | 0.263825 | 0.699635 | 0.780709 | 0.001091 | 0.001420 | 0.001187 |
| define_assoc_struct_move.test | RUN | 0.169885 | 0.385665 | 0.456780 | 0.001149 | 0.001247 | 0.001051 |
| define_tpl_struct.test | RUN | 0.297527 | 0.817525 | 0.915240 | 0.001302 | 0.001204 | 0.000968 |
| define_tpl_struct_empty.test | RUN | 0.261900 | 0.709119 | 0.806236 | 0.001134 | 0.001355 | 0.001113 |
| define_tpl_struct_move.test | RUN | 0.172442 | 0.387047 | 0.461526 | 0.001104 | 0.001335 | 0.001059 |
| define_tpl_struct_inline.test | RUN | 0.306257 | 0.978684 | 0.992032 | 0.001119 | 0.001235 | 0.001098 |
| define_tpl_struct_inline_empty.test | RUN | 0.263371 | 0.721318 | 0.797378 | 0.001131 | 0.001271 | 0.001140 |
| define_tpl_struct_inline_move.test | RUN | 0.166466 | 0.386141 | 0.475655 | 0.001164 | 0.001346 | 0.001178 |
| define_assoc_tpl_struct.test | RUN | 0.288903 | 0.824726 | 0.928995 | 0.001291 | 0.001365 | 0.001223 |
| define_assoc_tpl_struct_empty.test | RUN | 0.268305 | 0.709795 | 0.790700 | 0.001124 | 0.001237 | 0.000989 |
| define_assoc_tpl_struct_move.test | RUN | 0.169921 | 0.394447 | 0.467838 | 0.001218 | 0.001420 | 0.001137 |
| std_tuple.test | RUN | 0.173438 | 0.454101 | 0.527375 | 0.001126 | 0.001169 | 0.001028 |
| std_tuple_iterator.test | RUN | 0.177225 | 0.464281 | 0.524136 | 0.001193 | 0.001408 | 0.001109 |
| ref_vector.test | RUN | 0.200761 | 0.473652 | 0.571949 | 0.001158 | 0.001451 | 0.001074 |
| flatten_view.test | RUN | 0.213290 | 0.588829 | 0.663960 | 0.001124 | 0.001134 | 0.001227 |
| github-159.test | COMPILE | 0.093223 | 0.217128 | 0.251256 | — | — | — |
| github-176.test | RUN | 0.192667 | 0.519982 | 0.568465 | 0.001194 | 0.001377 | 0.001051 |
| size.test | COMPILE | 0.160930 | 0.370062 | 0.449653 | — | — | — |
| fused.test | RUN | 0.230294 | 0.553399 | 0.652031 | 0.001141 | 0.001248 | 0.001112 |
| fused_function_object.test | RUN | 0.173619 | 0.423634 | 0.492370 | 0.001077 | 0.001124 | 0.001091 |
| fused_procedure.test | RUN | 0.217499 | 0.534970 | 0.632483 | 0.001102 | 0.001192 | 0.001048 |
| unfused.test | RUN | 0.180897 | 0.430047 | 0.519411 | 0.001083 | 0.001259 | 0.001068 |
| unfused_typed.test | RUN | 0.181669 | 0.466565 | 0.528300 | 0.001220 | 0.001435 | 0.001051 |
| make_fused.test | RUN | 0.230248 | 0.553708 | 0.659482 | 0.001149 | 0.001300 | 0.001181 |
| make_fused_function_object.test | RUN | 0.174586 | 0.431152 | 0.496355 | 0.001269 | 0.001431 | 0.001171 |
| make_fused_procedure.test | RUN | 0.225599 | 0.540427 | 0.633794 | 0.001172 | 0.001411 | 0.001086 |
| make_unfused.test | RUN | 0.180402 | 0.439046 | 0.506060 | 0.001112 | 0.001526 | 0.001049 |
| invoke.test | RUN | 0.455403 | 1.555165 | 1.746368 | 0.001192 | 0.001191 | 0.001030 |
| invoke_function_object.test | RUN | 0.211901 | 0.570188 | 0.655022 | 0.001180 | 0.001331 | 0.001105 |
| invoke_procedure.test | RUN | 0.352870 | 1.160227 | 1.331111 | 0.001175 | 0.001281 | 0.001084 |
| swap.test | RUN | 0.265035 | 0.692291 | 0.829643 | 0.001144 | 0.001483 | 0.001154 |
| is_sequence.test | COMPILE | 0.044960 | 0.097843 | 0.102971 | — | — | — |
| is_view.test | COMPILE | 0.046180 | 0.098420 | 0.104849 | — | — | — |
| pair_deque.test | COMPILE | 0.099529 | 0.219441 | 0.248254 | — | — | — |
| pair_list.test | COMPILE | 0.093948 | 0.218682 | 0.244217 | — | — | — |
| pair_map.test | COMPILE | 0.097843 | 0.228993 | 0.257664 | — | — | — |
| pair_set.test | COMPILE | 0.099592 | 0.223273 | 0.246950 | — | — | — |
| pair_vector.test | COMPILE | 0.098107 | 0.222706 | 0.250111 | — | — | — |
| pair_nest.test | COMPILE | 0.038435 | 0.087876 | 0.096948 | — | — | — |
| index_sequence.test | COMPILE | 0.032388 | 0.061022 | 0.070298 | — | — | — |
| and.test | COMPILE | 0.024542 | 0.046697 | 0.049780 | — | — | — |
| tag_of.test | COMPILE | 0.044047 | 0.093828 | 0.098643 | — | — | — |
| unused.test | COMPILE | 0.022785 | 0.060310 | 0.057900 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.044425 | 0.071949 | 0.098557 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.028204 | 0.083994 | 0.091094 | — | — | — |
| quick.test | RUN | 0.130211 | 0.316249 | 0.322455 | 0.000379 | 0.000882 | 0.000820 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 0.997×, 1.005× | 0.995× |
| clang | 0.999× | 1.001×, 0.998× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44818861403).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.000818s | 0.000827s | 0.000826s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.000820s | 0.000809s | 0.000831s | byte equality observed |
| adapt_adt_named.test | 10 | 0.000835s | 0.000814s | 0.000822s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.000836s | 0.000842s | 0.000812s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.000838s | 0.000836s | 0.000802s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.000826s | 0.000823s | 0.000826s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.000828s | 0.000833s | 0.000830s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.000811s | 0.000824s | 0.000818s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.000845s | 0.000822s | 0.000821s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.000827s | 0.000822s | 0.000798s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.000832s | 0.000802s | 0.000804s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.000831s | 0.000791s | 0.000815s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.000829s | 0.000797s | 0.000803s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.000819s | 0.000816s | 0.000823s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.000850s | 0.000861s | 0.000850s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.000846s | 0.000804s | 0.000845s | byte equality observed |
| adapt_struct.test | 10 | 0.000816s | 0.000825s | 0.000847s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.000817s | 0.000876s | 0.000828s | byte equality observed |
| adapt_struct_named.test | 10 | 0.000807s | 0.000854s | 0.000826s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.000819s | 0.000837s | 0.000826s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.000825s | 0.000847s | 0.000852s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.000813s | 0.000828s | 0.000826s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.000810s | 0.000843s | 0.000809s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.000828s | 0.000845s | 0.000826s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.000808s | 0.000809s | 0.000805s | byte equality observed |
| all.test | 10 | 0.000790s | 0.000788s | 0.000806s | byte equality observed |
| any.test | 10 | 0.000788s | 0.000817s | 0.000807s | byte equality observed |
| array.test | 10 | 0.000805s | 0.000815s | 0.000819s | byte equality observed |
| as_deque.test | 10 | 0.000809s | 0.000796s | 0.000804s | byte equality observed |
| as_list.test | 10 | 0.000832s | 0.000830s | 0.000813s | byte equality observed |
| as_map.test | 10 | 0.000837s | 0.000829s | 0.000793s | byte equality observed |
| as_map_assoc.test | 10 | 0.000841s | 0.000831s | 0.000812s | byte equality observed |
| as_set.test | 10 | 0.000855s | 0.000862s | 0.000815s | byte equality observed |
| as_vector.test | 10 | 0.000845s | 0.000841s | 0.000832s | byte equality observed |
| back_extended_deque.test | 10 | 0.000814s | 0.000831s | 0.000828s | byte equality observed |
| boost_array.test | 10 | 0.000791s | 0.000806s | 0.000839s | byte equality observed |
| boost_tuple.test | 10 | 0.000810s | 0.000842s | 0.000849s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.000806s | 0.000786s | 0.000823s | byte equality observed |
| clear.test | 10 | 0.000841s | 0.000812s | 0.000810s | byte equality observed |
| cons.test | 10 | 0.000855s | 0.000864s | 0.000825s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.000823s | 0.000817s | 0.000827s | byte equality observed |
| convert_deque.test | 10 | 0.000813s | 0.000805s | 0.000839s | byte equality observed |
| convert_list.test | 10 | 0.000803s | 0.000823s | 0.000816s | byte equality observed |
| convert_std_pair.test | 10 | 0.000805s | 0.000819s | 0.000810s | byte equality observed |
| convert_std_tuple.test | 10 | 0.000810s | 0.000796s | 0.000796s | byte equality observed |
| convert_vector.test | 10 | 0.000802s | 0.000814s | 0.000821s | byte equality observed |
| copy.test | 10 | 0.000803s | 0.000799s | 0.000813s | byte equality observed |
| count.test | 10 | 0.000815s | 0.000801s | 0.000818s | byte equality observed |
| count_if.test | 10 | 0.000828s | 0.000780s | 0.000799s | byte equality observed |
| deduce_sequence.test | 10 | 0.000802s | 0.000799s | 0.000807s | byte equality observed |
| define_assoc_struct.test | 10 | 0.000855s | 0.000793s | 0.000832s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.000823s | 0.000822s | 0.000830s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.000803s | 0.000789s | 0.000831s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.000818s | 0.000807s | 0.000846s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.000839s | 0.000820s | 0.000837s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000800s | 0.000802s | 0.000811s | byte equality observed |
| define_struct.test | 10 | 0.000825s | 0.000814s | 0.000835s | byte equality observed |
| define_struct_empty.test | 10 | 0.000813s | 0.000839s | 0.000825s | byte equality observed |
| define_struct_inline.test | 10 | 0.000822s | 0.000860s | 0.000812s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.000831s | 0.000846s | 0.000834s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000814s | 0.000816s | 0.000804s | byte equality observed |
| define_struct_move.test | 10 | 0.000811s | 0.000799s | 0.000794s | byte equality observed |
| define_tpl_struct.test | 10 | 0.000843s | 0.000812s | 0.000821s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.000859s | 0.000817s | 0.000830s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.000849s | 0.000813s | 0.000846s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.000845s | 0.000832s | 0.000814s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000828s | 0.000808s | 0.000805s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000804s | 0.000807s | 0.000797s | byte equality observed |
| deque_comparison.test | 10 | 0.000800s | 0.000818s | 0.000783s | byte equality observed |
| deque_construction.test | 10 | 0.000797s | 0.000803s | 0.000829s | byte equality observed |
| deque_copy.test | 10 | 0.000804s | 0.000818s | 0.000772s | byte equality observed |
| deque_hash.test | 10 | 0.000812s | 0.000800s | 0.000789s | byte equality observed |
| deque_iterator.test | 10 | 0.000798s | 0.000794s | 0.000790s | byte equality observed |
| deque_make.test | 10 | 0.000828s | 0.000827s | 0.000812s | byte equality observed |
| deque_misc.test | 10 | 0.000824s | 0.000808s | 0.000792s | byte equality observed |
| deque_move.test | 10 | 0.000800s | 0.000812s | 0.000797s | byte equality observed |
| deque_mutate.test | 10 | 0.000825s | 0.000821s | 0.000794s | byte equality observed |
| deque_nest.test | 10 | 0.000822s | 0.000806s | 0.000808s | byte equality observed |
| deque_tie.test | 10 | 0.000794s | 0.000799s | 0.000786s | byte equality observed |
| deque_value_at.test | 10 | 0.000786s | 0.000810s | 0.000785s | byte equality observed |
| erase.test | 10 | 0.000811s | 0.000828s | 0.000826s | byte equality observed |
| erase_key.test | 10 | 0.000815s | 0.000824s | 0.000846s | byte equality observed |
| filter.test | 10 | 0.000837s | 0.000832s | 0.000827s | byte equality observed |
| filter_if.test | 10 | 0.000843s | 0.000858s | 0.000819s | byte equality observed |
| filter_view.test | 10 | 0.000828s | 0.000808s | 0.000832s | byte equality observed |
| find.test | 10 | 0.000825s | 0.000799s | 0.000824s | byte equality observed |
| find_if.test | 10 | 0.000817s | 0.000844s | 0.000821s | byte equality observed |
| flatten.test | 10 | 0.000820s | 0.000819s | 0.000793s | byte equality observed |
| flatten_view.test | 10 | 0.000820s | 0.000804s | 0.000793s | byte equality observed |
| fold.test | 10 | 0.000815s | 0.000809s | 0.000799s | byte equality observed |
| for_each.test | 10 | 0.000830s | 0.000821s | 0.000798s | byte equality observed |
| front_extended_deque.test | 10 | 0.000799s | 0.000793s | 0.000819s | byte equality observed |
| fused.test | 10 | 0.000809s | 0.000811s | 0.000799s | byte equality observed |
| fused_function_object.test | 10 | 0.000806s | 0.000833s | 0.000822s | byte equality observed |
| fused_procedure.test | 10 | 0.000789s | 0.000805s | 0.000830s | byte equality observed |
| github-176.test | 10 | 0.000799s | 0.000793s | 0.000830s | byte equality observed |
| hash.test | 10 | 0.000816s | 0.000800s | 0.000825s | byte equality observed |
| identity_view.test | 10 | 0.000815s | 0.000827s | 0.000812s | byte equality observed |
| insert.test | 10 | 0.000844s | 0.000851s | 0.000825s | byte equality observed |
| insert_range.test | 10 | 0.000852s | 0.000856s | 0.000821s | byte equality observed |
| invoke.test | 10 | 0.000805s | 0.000812s | 0.000819s | byte equality observed |
| invoke_function_object.test | 10 | 0.000827s | 0.000790s | 0.000814s | byte equality observed |
| invoke_procedure.test | 10 | 0.000802s | 0.000788s | 0.000790s | byte equality observed |
| io.test | 10 | 0.000891s | 0.000904s | 0.000897s | byte equality observed |
| iter_fold.test | 10 | 0.000803s | 0.000806s | 0.000838s | byte equality observed |
| iterator_range.test | 10 | 0.000833s | 0.000803s | 0.000818s | byte equality observed |
| join.test | 10 | 0.000800s | 0.000787s | 0.000795s | byte equality observed |
| joint_view.test | 10 | 0.000839s | 0.000846s | 0.000820s | byte equality observed |
| list_comparison.test | 10 | 0.000796s | 0.000799s | 0.000818s | byte equality observed |
| list_construction.test | 10 | 0.000811s | 0.000802s | 0.000820s | byte equality observed |
| list_copy.test | 10 | 0.000835s | 0.000801s | 0.000801s | byte equality observed |
| list_hash.test | 10 | 0.000838s | 0.000826s | 0.000812s | byte equality observed |
| list_iterator.test | 10 | 0.000822s | 0.000824s | 0.000808s | byte equality observed |
| list_make.test | 10 | 0.000809s | 0.000798s | 0.000791s | byte equality observed |
| list_misc.test | 10 | 0.000811s | 0.000838s | 0.000819s | byte equality observed |
| list_mutate.test | 10 | 0.000806s | 0.000810s | 0.000808s | byte equality observed |
| list_nest.test | 10 | 0.000802s | 0.000813s | 0.000814s | byte equality observed |
| list_tie.test | 10 | 0.000821s | 0.000816s | 0.000806s | byte equality observed |
| list_value_at.test | 10 | 0.000811s | 0.000799s | 0.000805s | byte equality observed |
| make_fused.test | 10 | 0.000811s | 0.000790s | 0.000805s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000800s | 0.000829s | 0.000822s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000805s | 0.000802s | 0.000778s | byte equality observed |
| make_list.test | 10 | 0.000808s | 0.000812s | 0.000808s | byte equality observed |
| make_unfused.test | 10 | 0.000817s | 0.000794s | 0.000825s | byte equality observed |
| make_vector.test | 10 | 0.000807s | 0.000839s | 0.000807s | byte equality observed |
| map.test | 10 | 0.000807s | 0.000843s | 0.000819s | byte equality observed |
| map_comparison.test | 10 | 0.000818s | 0.000806s | 0.000816s | byte equality observed |
| map_construction.test | 10 | 0.000797s | 0.000790s | 0.000831s | byte equality observed |
| map_copy.test | 10 | 0.000813s | 0.000807s | 0.000809s | byte equality observed |
| map_misc.test | 10 | 0.000812s | 0.000821s | 0.000800s | byte equality observed |
| map_move.test | 10 | 0.000800s | 0.000852s | 0.000813s | byte equality observed |
| map_mutate.test | 10 | 0.000814s | 0.000794s | 0.000815s | byte equality observed |
| map_tie.test | 10 | 0.000813s | 0.000785s | 0.000794s | byte equality observed |
| move.test | 10 | 0.000830s | 0.000805s | 0.000799s | byte equality observed |
| nil.test | 10 | 0.000818s | 0.000822s | 0.000809s | byte equality observed |
| none.test | 10 | 0.000810s | 0.000823s | 0.000813s | byte equality observed |
| nview.test | 10 | 0.000819s | 0.000818s | 0.000802s | byte equality observed |
| pop_back.test | 10 | 0.000841s | 0.000859s | 0.000810s | byte equality observed |
| pop_front.test | 10 | 0.000838s | 0.000850s | 0.000829s | byte equality observed |
| push_back.test | 10 | 0.000837s | 0.000833s | 0.000851s | byte equality observed |
| push_front.test | 10 | 0.000856s | 0.000843s | 0.000799s | byte equality observed |
| quick.test | 10 | 0.000364s | 0.000791s | 0.000796s | byte equality observed |
| ref_vector.test | 10 | 0.000805s | 0.000798s | 0.000787s | byte equality observed |
| remove.test | 10 | 0.000833s | 0.000835s | 0.000817s | byte equality observed |
| remove_if.test | 10 | 0.000832s | 0.000815s | 0.000799s | byte equality observed |
| repetitive_view.test | 10 | 0.000820s | 0.000820s | 0.000798s | byte equality observed |
| replace.test | 10 | 0.000835s | 0.000826s | 0.000823s | byte equality observed |
| replace_if.test | 10 | 0.000808s | 0.000835s | 0.000838s | byte equality observed |
| reverse.test | 10 | 0.000837s | 0.000833s | 0.000834s | byte equality observed |
| reverse_fold.test | 10 | 0.000817s | 0.000821s | 0.000841s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.000799s | 0.000837s | 0.000823s | byte equality observed |
| reverse_view.test | 10 | 0.000837s | 0.000822s | 0.000840s | byte equality observed |
| segmented_find.test | 10 | 0.000800s | 0.000817s | 0.000814s | byte equality observed |
| segmented_find_if.test | 10 | 0.000800s | 0.000782s | 0.000799s | byte equality observed |
| segmented_fold.test | 10 | 0.000852s | 0.000831s | 0.000805s | byte equality observed |
| segmented_for_each.test | 10 | 0.000845s | 0.000799s | 0.000814s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.000853s | 0.000834s | 0.000830s | byte equality observed |
| set.test | 10 | 0.000833s | 0.000793s | 0.000840s | byte equality observed |
| single_view.test | 10 | 0.000828s | 0.000834s | 0.000826s | byte equality observed |
| std_array.test | 10 | 0.000829s | 0.000787s | 0.000813s | byte equality observed |
| std_pair.test | 10 | 0.000825s | 0.000833s | 0.000824s | byte equality observed |
| std_tuple.test | 10 | 0.000804s | 0.000818s | 0.000815s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.000801s | 0.000809s | 0.000831s | byte equality observed |
| swap.test | 10 | 0.000817s | 0.000805s | 0.000788s | byte equality observed |
| transform.test | 10 | 0.000832s | 0.000837s | 0.000822s | byte equality observed |
| transform_view.test | 10 | 0.000838s | 0.000846s | 0.000815s | byte equality observed |
| tuple_comparison.test | 10 | 0.000818s | 0.000812s | 0.000822s | byte equality observed |
| tuple_construction.test | 10 | 0.000814s | 0.000806s | 0.000804s | byte equality observed |
| tuple_conversion.test | 10 | 0.000810s | 0.000828s | 0.000812s | byte equality observed |
| tuple_copy.test | 10 | 0.000810s | 0.000845s | 0.000824s | byte equality observed |
| tuple_element.test | 10 | 0.000810s | 0.000811s | 0.000799s | byte equality observed |
| tuple_hash.test | 10 | 0.000795s | 0.000796s | 0.000812s | byte equality observed |
| tuple_make.test | 10 | 0.000812s | 0.000807s | 0.000795s | byte equality observed |
| tuple_misc.test | 10 | 0.000794s | 0.000796s | 0.000783s | byte equality observed |
| tuple_mutate.test | 10 | 0.000801s | 0.000807s | 0.000796s | byte equality observed |
| tuple_nest.test | 10 | 0.000807s | 0.000780s | 0.000801s | byte equality observed |
| tuple_tie.test | 10 | 0.000818s | 0.000813s | 0.000820s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.000829s | 0.000817s | 0.000806s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.000806s | 0.000800s | 0.000810s | byte equality observed |
| unfused.test | 10 | 0.000810s | 0.000796s | 0.000810s | byte equality observed |
| unfused_typed.test | 10 | 0.000818s | 0.000801s | 0.000798s | byte equality observed |
| vector_comparison.test | 10 | 0.000803s | 0.000820s | 0.000809s | byte equality observed |
| vector_construction.test | 10 | 0.000828s | 0.000806s | 0.000780s | byte equality observed |
| vector_conversion.test | 10 | 0.000801s | 0.000800s | 0.000826s | byte equality observed |
| vector_copy.test | 10 | 0.000816s | 0.000823s | 0.000828s | byte equality observed |
| vector_hash.test | 10 | 0.000798s | 0.000827s | 0.000816s | byte equality observed |
| vector_iterator.test | 10 | 0.000798s | 0.000821s | 0.000828s | byte equality observed |
| vector_make.test | 10 | 0.000833s | 0.000810s | 0.000783s | byte equality observed |
| vector_misc.test | 10 | 0.000825s | 0.000811s | 0.000790s | byte equality observed |
| vector_move.test | 10 | 0.000833s | 0.000814s | 0.000808s | byte equality observed |
| vector_mutate.test | 10 | 0.000806s | 0.000812s | 0.000793s | byte equality observed |
| vector_n.test | 10 | 0.000805s | 0.000791s | 0.000801s | byte equality observed |
| vector_nest.test | 10 | 0.000783s | 0.000819s | 0.000814s | byte equality observed |
| vector_tie.test | 10 | 0.000793s | 0.000852s | 0.000797s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000823s | 0.000829s | 0.000827s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000830s | 0.000818s | 0.000814s | byte equality observed |
| vector_value_at.test | 10 | 0.000816s | 0.000798s | 0.000824s | byte equality observed |
| zip.test | 10 | 0.000824s | 0.000798s | 0.000813s | byte equality observed |
| zip2.test | 10 | 0.000818s | 0.000818s | 0.000786s | byte equality observed |
| zip_ignore.test | 10 | 0.000815s | 0.000836s | 0.000791s | byte equality observed |
| zip_view.test | 10 | 0.000800s | 0.000800s | 0.000839s | byte equality observed |
| zip_view2.test | 10 | 0.000832s | 0.000821s | 0.000835s | byte equality observed |
| zip_view_ignore.test | 10 | 0.000792s | 0.000791s | 0.000779s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44818861403).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
