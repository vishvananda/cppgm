# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.284576 | 0.639887 | 0.816337 | 0.001064 | 0.001213 | 0.001196 |
| any.test | RUN | 0.271711 | 0.602983 | 0.765849 | 0.001279 | 0.001230 | 0.001217 |
| clear.test | RUN | 0.203694 | 0.568476 | 0.642718 | 0.001209 | 0.001201 | 0.001251 |
| copy.test | RUN | 0.169850 | 0.423239 | 0.517688 | 0.001168 | 0.001448 | 0.001348 |
| count.test | RUN | 0.190073 | 0.462984 | 0.579584 | 0.001392 | 0.001410 | 0.001138 |
| count_if.test | RUN | 0.178942 | 0.424534 | 0.532775 | 0.001186 | 0.001396 | 0.001316 |
| erase.test | RUN | 0.259851 | 0.767883 | 0.878419 | 0.001361 | 0.001379 | 0.001198 |
| erase_key.test | RUN | 0.251948 | 0.758857 | 0.821265 | 0.001380 | 0.001272 | 0.001219 |
| filter.test | RUN | 0.223226 | 0.645475 | 0.744783 | 0.001519 | 0.001333 | 0.001311 |
| filter_if.test | RUN | 0.255375 | 0.751678 | 0.881923 | 0.001232 | 0.001340 | 0.001257 |
| find.test | RUN | 0.211745 | 0.513566 | 0.671571 | 0.001206 | 0.001146 | 0.001197 |
| find_if.test | RUN | 0.200576 | 0.472939 | 0.603926 | 0.001290 | 0.001276 | 0.001332 |
| fold.test | RUN | 0.231362 | 0.588659 | 0.742065 | 0.001376 | 0.001388 | 0.001525 |
| for_each.test | RUN | 0.203492 | 0.531239 | 0.654648 | 0.001340 | 0.001348 | 0.001309 |
| insert.test | RUN | 0.304660 | 0.956627 | 1.056128 | 0.001384 | 0.001152 | 0.001393 |
| insert_range.test | RUN | 0.307232 | 0.955634 | 1.050761 | 0.001196 | 0.001406 | 0.001138 |
| iter_fold.test | RUN | 0.348618 | 0.880379 | 1.231214 | 0.001307 | 0.001303 | 0.001252 |
| move.test | RUN | 0.180058 | 0.426905 | 0.524738 | 0.001230 | 0.001201 | 0.001126 |
| none.test | RUN | 0.278437 | 0.604023 | 0.787934 | 0.001140 | 0.001241 | 0.001152 |
| pop_back.test | RUN | 0.285058 | 0.817355 | 0.926197 | 0.001222 | 0.001237 | 0.001255 |
| pop_front.test | RUN | 0.237875 | 0.671501 | 0.760385 | 0.001350 | 0.001308 | 0.001328 |
| push_back.test | RUN | 0.298554 | 0.945890 | 1.029200 | 0.001298 | 0.001362 | 0.001345 |
| push_front.test | RUN | 0.264277 | 0.791427 | 0.869500 | 0.001306 | 0.001461 | 0.001344 |
| remove.test | RUN | 0.297356 | 0.897830 | 1.022832 | 0.001357 | 0.001402 | 0.001160 |
| remove_if.test | RUN | 0.263048 | 0.762028 | 0.875797 | 0.001200 | 0.001404 | 0.001211 |
| replace.test | RUN | 0.247872 | 0.729517 | 0.814010 | 0.001346 | 0.001453 | 0.001232 |
| replace_if.test | RUN | 0.246286 | 0.727912 | 0.807175 | 0.001467 | 0.001358 | 0.001282 |
| reverse_fold.test | RUN | 0.380112 | 1.002701 | 1.372052 | 0.001249 | 0.001442 | 0.001309 |
| reverse_iter_fold.test | RUN | 0.397590 | 1.037648 | 1.458132 | 0.001285 | 0.001476 | 0.001244 |
| reverse.test | RUN | 0.243263 | 0.759389 | 0.818394 | 0.001283 | 0.001400 | 0.001267 |
| segmented_for_each.test | RUN | 0.421834 | 1.418391 | 1.687790 | 0.001416 | 0.001372 | 0.001209 |
| segmented_find.test | RUN | 0.266850 | 0.738288 | 0.937146 | 0.001400 | 0.001435 | 0.001173 |
| segmented_find_if.test | RUN | 0.268646 | 0.749040 | 0.933463 | 0.001303 | 0.001296 | 0.001243 |
| segmented_fold.test | RUN | 0.331527 | 1.003513 | 1.176917 | 0.001310 | 0.001359 | 0.001344 |
| transform.test | RUN | 0.261086 | 0.785417 | 0.865062 | 0.001264 | 0.001270 | 0.001402 |
| join.test | RUN | 0.194248 | 0.479190 | 0.603431 | 0.001254 | 0.001337 | 0.001298 |
| zip.test | RUN | 0.339677 | 0.894663 | 1.147115 | 0.001490 | 0.001344 | 0.001249 |
| zip2.test | RUN | 0.331425 | 0.873400 | 1.095930 | 0.001167 | 0.001347 | 0.001247 |
| zip_ignore.test | RUN | 0.252934 | 0.595023 | 0.731555 | 0.001224 | 0.001176 | 0.001162 |
| flatten.test | RUN | 0.240623 | 0.670504 | 0.746173 | 0.001279 | 0.001322 | 0.001306 |
| ticket-5490.test | COMPILE | 0.125916 | 0.275834 | 0.332712 | — | — | — |
| as_deque.test | RUN | 0.233660 | 0.629850 | 0.793655 | 0.001447 | 0.001218 | 0.001229 |
| as_list.test | RUN | 0.265618 | 0.788042 | 0.863753 | 0.001139 | 0.001300 | 0.001258 |
| as_map.test | RUN | 0.256676 | 0.762263 | 0.877047 | 0.001404 | 0.001177 | 0.001154 |
| as_map_assoc.test | RUN | 0.252341 | 0.706004 | 0.826028 | 0.001074 | 0.001273 | 0.001313 |
| as_set.test | RUN | 0.295067 | 0.901010 | 1.018830 | 0.001266 | 0.001235 | 0.001265 |
| as_vector.test | RUN | 0.263345 | 0.788431 | 0.880650 | 0.001250 | 0.001272 | 0.001108 |
| boost_tuple.test | RUN | 0.263965 | 0.789216 | 0.881639 | 0.001222 | 0.001271 | 0.001410 |
| boost_tuple_iterator.test | RUN | 0.174473 | 0.455229 | 0.535191 | 0.001165 | 0.001307 | 0.001309 |
| cons.test | RUN | 0.333192 | 0.892024 | 1.030120 | 0.001179 | 0.001234 | 0.001228 |
| convert_boost_tuple.test | RUN | 0.210047 | 0.680377 | 0.679701 | 0.001262 | 0.001359 | 0.001230 |
| convert_deque.test | RUN | 0.211982 | 0.668742 | 0.676587 | 0.001256 | 0.001420 | 0.001287 |
| convert_list.test | RUN | 0.208564 | 0.690101 | 0.683353 | 0.000883 | 0.001160 | 0.001295 |
| convert_std_pair.test | RUN | 0.220953 | 0.682355 | 0.696778 | 0.001238 | 0.001368 | 0.001037 |
| convert_std_tuple.test | RUN | 0.207827 | 0.670434 | 0.684990 | 0.001331 | 0.001258 | 0.001157 |
| convert_vector.test | RUN | 0.207785 | 0.673309 | 0.686240 | 0.001296 | 0.001206 | 0.001189 |
| filter_view.test | RUN | 0.253388 | 0.709815 | 0.811625 | 0.001148 | 0.001218 | 0.001370 |
| hash.test | RUN | 0.248635 | 0.643206 | 0.773215 | 0.001279 | 0.001398 | 0.001211 |
| io.test | RUN | 0.266640 | 0.909280 | 0.932181 | 0.001215 | 0.001408 | 0.001475 |
| iterator_range.test | RUN | 0.238123 | 0.686447 | 0.764273 | 0.001284 | 0.001389 | 0.001155 |
| joint_view.test | RUN | 0.322054 | 1.136565 | 1.173420 | 0.001436 | 0.001264 | 0.001234 |
| list_comparison.test | RUN | 0.187069 | 0.469866 | 0.550441 | 0.001350 | 0.001156 | 0.001190 |
| list_construction.test | RUN | 0.177406 | 0.435585 | 0.558843 | 0.001371 | 0.001228 | 0.001376 |
| list_copy.test | RUN | 0.275337 | 0.830312 | 0.950558 | 0.001240 | 0.001246 | 0.001223 |
| list_iterator.test | RUN | 0.179127 | 0.446558 | 0.528275 | 0.001116 | 0.001427 | 0.001287 |
| list_hash.test | RUN | 0.245819 | 0.940417 | 0.776040 | 0.001284 | 0.001483 | 0.001290 |
| list_make.test | RUN | 0.192983 | 0.509082 | 0.597994 | 0.001139 | 0.001172 | 0.001173 |
| list_misc.test | RUN | 0.242255 | 0.573848 | 0.724849 | 0.001161 | 0.001351 | 0.001158 |
| list_mutate.test | RUN | 0.172644 | 0.399090 | 0.479721 | 0.001336 | 0.001144 | 0.001232 |
| list_nest.test | RUN | 0.343487 | 1.144646 | 1.341447 | 0.001125 | 0.001351 | 0.001262 |
| list_tie.test | RUN | 0.177925 | 0.446320 | 0.529407 | 0.001192 | 0.001379 | 0.001149 |
| list_value_at.test | RUN | 0.171744 | 0.415572 | 0.516789 | 0.001470 | 0.001213 | 0.001439 |
| deque_comparison.test | RUN | 0.180566 | 0.484783 | 0.549563 | 0.001185 | 0.001259 | 0.001084 |
| deque_construction.test | RUN | 0.186506 | 0.444409 | 0.555278 | 0.001364 | 0.001428 | 0.001173 |
| deque_copy.test | RUN | 0.260764 | 0.770722 | 0.894857 | 0.001459 | 0.001157 | 0.001314 |
| deque_iterator.test | RUN | 0.180030 | 0.487699 | 0.537484 | 0.001302 | 0.001398 | 0.001281 |
| deque_hash.test | RUN | 0.246723 | 0.888515 | 0.779494 | 0.001192 | 0.001441 | 0.001184 |
| deque_is_constructible.test | COMPILE | 0.099486 | 0.205821 | 0.244873 | — | — | — |
| deque_make.test | RUN | 0.186034 | 0.479804 | 0.586149 | 0.001389 | 0.001210 | 0.001149 |
| deque_misc.test | RUN | 0.237581 | 0.575132 | 0.694995 | 0.001174 | 0.001288 | 0.001175 |
| deque_move.test | RUN | 0.187731 | 0.497437 | 0.557085 | 0.001242 | 0.001171 | 0.001217 |
| deque_mutate.test | RUN | 0.166111 | 0.395881 | 0.487630 | 0.001156 | 0.001275 | 0.001328 |
| deque_nest.test | RUN | 0.523137 | 1.864922 | 2.147665 | 0.001159 | 0.001334 | 0.001190 |
| deque_tie.test | RUN | 0.171798 | 0.426160 | 0.519411 | 0.001235 | 0.001270 | 0.001271 |
| deque_value_at.test | RUN | 0.167027 | 0.409746 | 0.494438 | 0.001320 | 0.001294 | 0.001279 |
| front_extended_deque.test | RUN | 0.243055 | 0.596381 | 0.733727 | 0.001198 | 0.001449 | 0.001198 |
| back_extended_deque.test | RUN | 0.250751 | 0.609852 | 0.775054 | 0.001327 | 0.001218 | 0.001130 |
| make_list.test | RUN | 0.189382 | 0.503477 | 0.583769 | 0.001134 | 0.001345 | 0.001230 |
| make_vector.test | RUN | 0.189436 | 0.480865 | 0.558225 | 0.000901 | 0.001332 | 0.001157 |
| map.test | RUN | 0.256694 | 0.775147 | 0.854973 | 0.001187 | 0.001260 | 0.001276 |
| map_comparison.test | RUN | 0.185958 | 0.479495 | 0.566036 | 0.001518 | 0.001256 | 0.001170 |
| map_construction.test | RUN | 0.188119 | 0.466507 | 0.559692 | 0.001358 | 0.001283 | 0.001193 |
| map_copy.test | RUN | 0.225212 | 0.585677 | 0.701386 | 0.001164 | 0.001136 | 0.001203 |
| map_misc.test | RUN | 0.242441 | 0.602456 | 0.688001 | 0.001268 | 0.001318 | 0.001252 |
| map_move.test | RUN | 0.190430 | 0.502218 | 0.567589 | 0.001505 | 0.001478 | 0.001106 |
| map_mutate.test | RUN | 0.170141 | 0.399016 | 0.482954 | 0.001145 | 0.001258 | 0.001012 |
| map_tie.test | RUN | 0.169728 | 0.400971 | 0.488915 | 0.001216 | 0.001238 | 0.001290 |
| nil.test | RUN | 0.118901 | 0.282460 | 0.345461 | 0.001377 | 0.001159 | 0.001230 |
| nview.test | RUN | 0.233815 | 0.575779 | 0.719619 | 0.001302 | 0.001446 | 0.001408 |
| reverse_view.test | RUN | 0.321286 | 0.980546 | 1.069688 | 0.001183 | 0.001237 | 0.001189 |
| segmented_iterator_range.test | RUN | 0.357597 | 1.143489 | 1.347995 | 0.001116 | 0.001363 | 0.001249 |
| set.test | RUN | 0.231131 | 0.663987 | 0.758940 | 0.001163 | 0.001371 | 0.001245 |
| single_view.test | RUN | 0.207961 | 0.600958 | 0.686863 | 0.001240 | 0.001314 | 0.001148 |
| std_pair.test | RUN | 0.270910 | 0.785470 | 0.859750 | 0.001172 | 0.001384 | 0.001190 |
| boost_array.test | RUN | 0.218554 | 0.522180 | 0.649975 | 0.001235 | 0.001278 | 0.001268 |
| array.test | RUN | 0.222201 | 0.523686 | 0.636646 | 0.001236 | 0.001316 | 0.001178 |
| std_array.test | RUN | 0.227099 | 0.516483 | 0.633853 | 0.001204 | 0.001301 | 0.001124 |
| tuple_comparison.test | RUN | 0.195602 | 0.500330 | 0.601122 | 0.001251 | 0.001309 | 0.001150 |
| tuple_construction.test | RUN | 0.203660 | 0.485590 | 0.603356 | 0.001281 | 0.001277 | 0.001205 |
| tuple_conversion.test | RUN | 0.464674 | 1.539244 | 2.021139 | 0.001267 | 0.001305 | 0.001463 |
| tuple_copy.test | RUN | 0.291264 | 0.899243 | 1.044952 | 0.001301 | 0.001228 | 0.001274 |
| tuple_element.test | RUN | 0.181513 | 0.448597 | 0.544850 | 0.001007 | 0.001245 | 0.001153 |
| tuple_make.test | RUN | 0.198294 | 0.524966 | 0.593960 | 0.001255 | 0.001290 | 0.001178 |
| tuple_misc.test | RUN | 0.251925 | 0.634809 | 0.805073 | 0.001262 | 0.001294 | 0.001167 |
| tuple_mutate.test | RUN | 0.177068 | 0.418001 | 0.524134 | 0.001109 | 0.001182 | 0.001481 |
| tuple_nest.test | RUN | 0.770751 | 3.243795 | 3.832783 | 0.001221 | 0.001295 | 0.001310 |
| tuple_hash.test | RUN | 0.258002 | 0.938534 | 0.816321 | 0.001259 | 0.001225 | 0.001291 |
| tuple_tie.test | RUN | 0.187513 | 0.460703 | 0.572807 | 0.001244 | 0.001285 | 0.001167 |
| tuple_traits__maybe_variadic.test | RUN | 0.200235 | 0.556243 | 0.607652 | 0.001259 | 0.001240 | 0.001238 |
| tuple_traits__no_variadic.test | RUN | 0.229901 | 0.601474 | 0.652577 | 0.001355 | 0.001327 | 0.001472 |
| transform_view.test | RUN | 0.305884 | 0.978048 | 1.079261 | 0.001237 | 0.001286 | 0.001336 |
| identity_view.test | RUN | 0.291362 | 0.895298 | 1.008744 | 0.001162 | 0.001218 | 0.001348 |
| vector_comparison.test | RUN | 0.183328 | 0.475255 | 0.570045 | 0.001434 | 0.001181 | 0.001304 |
| vector_construction.test | RUN | 0.184806 | 0.438668 | 0.548473 | 0.001176 | 0.001363 | 0.001272 |
| vector_conversion.test | RUN | 0.554279 | 2.084198 | 2.634937 | 0.001288 | 0.001284 | 0.001424 |
| vector_copy.test | RUN | 0.283249 | 0.888634 | 1.021990 | 0.001138 | 0.001381 | 0.001171 |
| vector_iterator.test | RUN | 0.182854 | 0.476247 | 0.563208 | 0.001270 | 0.000993 | 0.001433 |
| vector_make.test | RUN | 0.189421 | 0.493754 | 0.595894 | 0.001202 | 0.001285 | 0.001420 |
| vector_misc.test | RUN | 0.238772 | 0.623487 | 0.713415 | 0.001123 | 0.001211 | 0.001190 |
| vector_move.test | RUN | 0.193648 | 0.491279 | 0.560667 | 0.001348 | 0.001378 | 0.001336 |
| vector_mutate.test | RUN | 0.165455 | 0.402336 | 0.541770 | 0.001140 | 0.001254 | 0.001313 |
| vector_n.test | RUN | 0.207155 | 0.506520 | 0.652863 | 0.001387 | 0.001382 | 0.001235 |
| vector_nest.test | RUN | 0.784770 | 3.450656 | 3.846828 | 0.001393 | 0.001243 | 0.001074 |
| vector_hash.test | RUN | 0.248578 | 0.900680 | 0.754969 | 0.001355 | 0.001503 | 0.001362 |
| vector_tie.test | RUN | 0.179075 | 0.444179 | 0.547504 | 0.001564 | 0.001127 | 0.001247 |
| vector_traits__maybe_variadic.test | RUN | 0.189746 | 0.544324 | 0.557672 | 0.001392 | 0.001376 | 0.001456 |
| vector_traits__no_variadic.test | RUN | 0.209800 | 0.546470 | 0.582722 | 0.001112 | 0.001391 | 0.001180 |
| vector_value_at.test | RUN | 0.170283 | 0.397139 | 0.509664 | 0.001245 | 0.001247 | 0.001280 |
| zip_view.test | RUN | 0.359907 | 1.006220 | 1.336521 | 0.001267 | 0.001333 | 0.001326 |
| zip_view2.test | RUN | 0.296829 | 0.763992 | 0.974400 | 0.001154 | 0.001184 | 0.001271 |
| zip_view_ignore.test | RUN | 0.273459 | 0.701983 | 0.871149 | 0.001267 | 0.001372 | 0.001228 |
| repetitive_view.test | RUN | 0.462738 | 1.297201 | 1.704401 | 0.001315 | 0.001243 | 0.001233 |
| deduce_sequence.test | RUN | 0.223784 | 0.541098 | 0.734593 | 0.001292 | 0.001265 | 0.001123 |
| adapt_adt_named.test | RUN | 0.261188 | 0.774853 | 0.848939 | 0.001088 | 0.001370 | 0.001164 |
| adapt_adt_named_empty.test | RUN | 0.228746 | 0.623210 | 0.703876 | 0.001210 | 0.001428 | 0.001134 |
| adapt_adt.test | RUN | 0.301662 | 1.032998 | 1.039494 | 0.001286 | 0.001244 | 0.001310 |
| adapt_adt_empty.test | RUN | 0.228221 | 0.621617 | 0.719729 | 0.001274 | 0.001432 | 0.001345 |
| adapt_assoc_adt_named.test | RUN | 0.291899 | 0.819731 | 0.932156 | 0.001222 | 0.001128 | 0.001419 |
| adapt_assoc_adt_named_empty.test | RUN | 0.227163 | 0.617579 | 0.712780 | 0.001313 | 0.001328 | 0.001312 |
| adapt_assoc_adt.test | RUN | 0.298433 | 0.834065 | 0.967134 | 0.001336 | 0.001322 | 0.001196 |
| adapt_assoc_adt_empty.test | RUN | 0.226366 | 0.627796 | 0.713049 | 0.001466 | 0.001417 | 0.001255 |
| adapt_assoc_struct_named.test | RUN | 0.289658 | 0.795578 | 0.906764 | 0.001041 | 0.001433 | 0.001165 |
| adapt_assoc_struct_named_empty.test | RUN | 0.223458 | 0.629017 | 0.697673 | 0.001236 | 0.001308 | 0.001234 |
| adapt_assoc_struct.test | RUN | 0.260962 | 0.742951 | 0.851672 | 0.001348 | 0.001305 | 0.001249 |
| adapt_assoc_struct_empty.test | RUN | 0.226272 | 0.616821 | 0.700715 | 0.001328 | 0.001212 | 0.001259 |
| adapt_assoc_tpl_adt.test | RUN | 0.309008 | 0.863177 | 0.984709 | 0.001151 | 0.001384 | 0.001364 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.225785 | 0.631805 | 0.708762 | 0.001226 | 0.001451 | 0.001358 |
| adapt_assoc_tpl_struct.test | RUN | 0.253690 | 0.726641 | 0.834279 | 0.001350 | 0.001366 | 0.001077 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.226187 | 0.617809 | 0.705551 | 0.001218 | 0.001300 | 0.001140 |
| adapt_struct_named.test | RUN | 0.255341 | 0.774621 | 0.833635 | 0.001295 | 0.001461 | 0.001250 |
| adapt_struct_named_empty.test | RUN | 0.231987 | 0.631509 | 0.701215 | 0.001169 | 0.001411 | 0.001486 |
| adapt_struct.test | RUN | 0.281525 | 0.864489 | 0.964863 | 0.001304 | 0.001379 | 0.001272 |
| adapt_struct_empty.test | RUN | 0.225333 | 0.619502 | 0.706383 | 0.001367 | 0.001470 | 0.001245 |
| adapt_tpl_adt.test | RUN | 0.292309 | 1.010200 | 1.008616 | 0.001101 | 0.001292 | 0.001179 |
| adapt_tpl_adt_empty.test | RUN | 0.227459 | 0.634217 | 0.703732 | 0.001202 | 0.001282 | 0.001316 |
| adapt_tpl_struct.test | RUN | 0.240700 | 0.702095 | 0.772413 | 0.001417 | 0.001469 | 0.001233 |
| adapt_tpl_struct_empty.test | RUN | 0.224686 | 0.634524 | 0.724953 | 0.001230 | 0.001283 | 0.001364 |
| adt_attribute_proxy.test | RUN | 0.252664 | 0.601601 | 0.739875 | 0.001364 | 0.001264 | 0.001403 |
| define_struct.test | RUN | 0.307588 | 0.855849 | 0.982795 | 0.001074 | 0.001423 | 0.001320 |
| define_struct_empty.test | RUN | 0.267381 | 0.702845 | 0.805081 | 0.001228 | 0.001262 | 0.001262 |
| define_struct_move.test | RUN | 0.169976 | 0.392315 | 0.477978 | 0.001492 | 0.001480 | 0.001261 |
| define_struct_inline.test | RUN | 0.325503 | 1.031360 | 1.121122 | 0.001378 | 0.001336 | 0.001277 |
| define_struct_inline_empty.test | RUN | 0.267761 | 0.699349 | 0.816553 | 0.001187 | 0.001271 | 0.001372 |
| define_struct_inline_move.test | RUN | 0.172814 | 0.397334 | 0.488326 | 0.001423 | 0.001239 | 0.001309 |
| define_assoc_struct.test | RUN | 0.305500 | 0.806914 | 0.947035 | 0.001267 | 0.001438 | 0.001251 |
| define_assoc_struct_empty.test | RUN | 0.271878 | 0.698542 | 0.837111 | 0.001267 | 0.001302 | 0.001302 |
| define_assoc_struct_move.test | RUN | 0.167855 | 0.387597 | 0.479634 | 0.001220 | 0.001376 | 0.001198 |
| define_tpl_struct.test | RUN | 0.300710 | 0.824019 | 0.932352 | 0.001417 | 0.001196 | 0.001253 |
| define_tpl_struct_empty.test | RUN | 0.275570 | 0.701483 | 0.829719 | 0.001368 | 0.001348 | 0.001174 |
| define_tpl_struct_move.test | RUN | 0.177568 | 0.399071 | 0.489530 | 0.001387 | 0.001253 | 0.001272 |
| define_tpl_struct_inline.test | RUN | 0.320707 | 0.956764 | 1.036859 | 0.001225 | 0.001282 | 0.001239 |
| define_tpl_struct_inline_empty.test | RUN | 0.273471 | 0.708195 | 0.839205 | 0.001309 | 0.001324 | 0.001251 |
| define_tpl_struct_inline_move.test | RUN | 0.171810 | 0.398577 | 0.483447 | 0.001224 | 0.001341 | 0.001196 |
| define_assoc_tpl_struct.test | RUN | 0.304937 | 0.837779 | 0.952904 | 0.001466 | 0.001337 | 0.001321 |
| define_assoc_tpl_struct_empty.test | RUN | 0.279028 | 0.707570 | 0.820823 | 0.001340 | 0.001423 | 0.001269 |
| define_assoc_tpl_struct_move.test | RUN | 0.173058 | 0.398863 | 0.484444 | 0.001402 | 0.001348 | 0.001188 |
| std_tuple.test | RUN | 0.180271 | 0.450337 | 0.543095 | 0.001215 | 0.001282 | 0.001265 |
| std_tuple_iterator.test | RUN | 0.186788 | 0.472452 | 0.550976 | 0.001393 | 0.001285 | 0.001268 |
| ref_vector.test | RUN | 0.205304 | 0.483048 | 0.588196 | 0.001285 | 0.001432 | 0.001223 |
| flatten_view.test | RUN | 0.225222 | 0.611810 | 0.708046 | 0.001291 | 0.001306 | 0.001339 |
| github-159.test | COMPILE | 0.096166 | 0.217558 | 0.261993 | — | — | — |
| github-176.test | RUN | 0.201015 | 0.534096 | 0.597409 | 0.001311 | 0.001335 | 0.001257 |
| size.test | COMPILE | 0.169295 | 0.371338 | 0.466500 | — | — | — |
| fused.test | RUN | 0.240353 | 0.555552 | 0.687933 | 0.001290 | 0.001452 | 0.001271 |
| fused_function_object.test | RUN | 0.177249 | 0.426772 | 0.517629 | 0.001479 | 0.001286 | 0.001383 |
| fused_procedure.test | RUN | 0.234328 | 0.523614 | 0.646331 | 0.001333 | 0.001247 | 0.001359 |
| unfused.test | RUN | 0.191173 | 0.440170 | 0.537636 | 0.001385 | 0.001258 | 0.001133 |
| unfused_typed.test | RUN | 0.188124 | 0.473293 | 0.556915 | 0.001560 | 0.001213 | 0.001404 |
| make_fused.test | RUN | 0.240480 | 0.547827 | 0.680811 | 0.001201 | 0.001219 | 0.001182 |
| make_fused_function_object.test | RUN | 0.182221 | 0.439900 | 0.521278 | 0.001250 | 0.001257 | 0.001333 |
| make_fused_procedure.test | RUN | 0.240353 | 0.543875 | 0.651467 | 0.001320 | 0.001339 | 0.001324 |
| make_unfused.test | RUN | 0.182158 | 0.436455 | 0.532430 | 0.001361 | 0.001289 | 0.001154 |
| invoke.test | RUN | 0.479020 | 1.575896 | 1.818708 | 0.001241 | 0.001362 | 0.001287 |
| invoke_function_object.test | RUN | 0.225515 | 0.563609 | 0.676063 | 0.001396 | 0.001156 | 0.001413 |
| invoke_procedure.test | RUN | 0.379536 | 1.184348 | 1.364584 | 0.001315 | 0.001258 | 0.001199 |
| swap.test | RUN | 0.279580 | 0.694053 | 0.859597 | 0.001212 | 0.001408 | 0.001254 |
| is_sequence.test | COMPILE | 0.046449 | 0.099318 | 0.106841 | — | — | — |
| is_view.test | COMPILE | 0.047614 | 0.098413 | 0.105994 | — | — | — |
| pair_deque.test | COMPILE | 0.099513 | 0.221056 | 0.272696 | — | — | — |
| pair_list.test | COMPILE | 0.097666 | 0.223406 | 0.273107 | — | — | — |
| pair_map.test | COMPILE | 0.101101 | 0.228920 | 0.262155 | — | — | — |
| pair_set.test | COMPILE | 0.102874 | 0.232645 | 0.261172 | — | — | — |
| pair_vector.test | COMPILE | 0.100741 | 0.222947 | 0.257639 | — | — | — |
| pair_nest.test | COMPILE | 0.040733 | 0.089837 | 0.099914 | — | — | — |
| index_sequence.test | COMPILE | 0.034105 | 0.063366 | 0.074869 | — | — | — |
| and.test | COMPILE | 0.026072 | 0.048081 | 0.051429 | — | — | — |
| tag_of.test | COMPILE | 0.045573 | 0.095115 | 0.096109 | — | — | — |
| unused.test | COMPILE | 0.023535 | 0.061817 | 0.059695 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.046066 | 0.096549 | 0.089401 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.028242 | 0.089844 | 0.081660 | — | — | — |
| quick.test | RUN | 0.136802 | 0.307010 | 0.334702 | 0.000395 | 0.000885 | 0.000852 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998× | 0.997×, 1.000× | 0.993× |
| clang | 1.002× | 1.004×, 1.000× | 0.993× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45617981312).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.000834s | 0.000828s | 0.000834s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.000839s | 0.000860s | 0.000822s | byte equality observed |
| adapt_adt_named.test | 10 | 0.000835s | 0.000794s | 0.000852s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.000832s | 0.000825s | 0.000838s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.000839s | 0.000838s | 0.000842s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.000819s | 0.000823s | 0.000865s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.000848s | 0.000810s | 0.000836s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.000852s | 0.000848s | 0.000834s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.000836s | 0.000829s | 0.000849s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.000829s | 0.000852s | 0.000832s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.000829s | 0.000802s | 0.000853s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.000866s | 0.000839s | 0.000847s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.000842s | 0.000868s | 0.000850s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.000842s | 0.000848s | 0.000814s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.000860s | 0.000867s | 0.000835s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.000848s | 0.000829s | 0.000821s | byte equality observed |
| adapt_struct.test | 10 | 0.000830s | 0.000845s | 0.000836s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.000831s | 0.000801s | 0.000847s | byte equality observed |
| adapt_struct_named.test | 10 | 0.000837s | 0.000820s | 0.000841s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.000833s | 0.000811s | 0.000849s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.000821s | 0.000815s | 0.000860s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.000823s | 0.000819s | 0.000839s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.000855s | 0.000843s | 0.000832s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.000848s | 0.000836s | 0.000826s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.000843s | 0.000840s | 0.000818s | byte equality observed |
| all.test | 10 | 0.000831s | 0.000814s | 0.000835s | byte equality observed |
| any.test | 10 | 0.000813s | 0.000821s | 0.000834s | byte equality observed |
| array.test | 10 | 0.000812s | 0.000854s | 0.000838s | byte equality observed |
| as_deque.test | 10 | 0.000821s | 0.000811s | 0.000794s | byte equality observed |
| as_list.test | 10 | 0.000858s | 0.000828s | 0.000829s | byte equality observed |
| as_map.test | 10 | 0.000850s | 0.000827s | 0.000853s | byte equality observed |
| as_map_assoc.test | 10 | 0.000849s | 0.000810s | 0.000862s | byte equality observed |
| as_set.test | 10 | 0.000856s | 0.000855s | 0.000829s | byte equality observed |
| as_vector.test | 10 | 0.000856s | 0.000834s | 0.000861s | byte equality observed |
| back_extended_deque.test | 10 | 0.000797s | 0.000814s | 0.000795s | byte equality observed |
| boost_array.test | 10 | 0.000790s | 0.000815s | 0.000812s | byte equality observed |
| boost_tuple.test | 10 | 0.000839s | 0.000861s | 0.000845s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.000803s | 0.000842s | 0.000854s | byte equality observed |
| clear.test | 10 | 0.000825s | 0.000856s | 0.000864s | byte equality observed |
| cons.test | 10 | 0.000831s | 0.000847s | 0.000855s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.000822s | 0.000814s | 0.000846s | byte equality observed |
| convert_deque.test | 10 | 0.000828s | 0.000815s | 0.000857s | byte equality observed |
| convert_list.test | 10 | 0.000795s | 0.000826s | 0.000824s | byte equality observed |
| convert_std_pair.test | 10 | 0.000823s | 0.000835s | 0.000841s | byte equality observed |
| convert_std_tuple.test | 10 | 0.000814s | 0.000810s | 0.000823s | byte equality observed |
| convert_vector.test | 10 | 0.000829s | 0.000834s | 0.000829s | byte equality observed |
| copy.test | 10 | 0.000806s | 0.000837s | 0.000834s | byte equality observed |
| count.test | 10 | 0.000830s | 0.000812s | 0.000817s | byte equality observed |
| count_if.test | 10 | 0.000802s | 0.000847s | 0.000829s | byte equality observed |
| deduce_sequence.test | 10 | 0.000819s | 0.000848s | 0.000853s | byte equality observed |
| define_assoc_struct.test | 10 | 0.000821s | 0.000837s | 0.000830s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.000832s | 0.000862s | 0.000809s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.000827s | 0.000788s | 0.000806s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.000815s | 0.000802s | 0.000829s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.000828s | 0.000823s | 0.000841s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000799s | 0.000835s | 0.000826s | byte equality observed |
| define_struct.test | 10 | 0.000844s | 0.000828s | 0.000831s | byte equality observed |
| define_struct_empty.test | 10 | 0.000806s | 0.000848s | 0.000829s | byte equality observed |
| define_struct_inline.test | 10 | 0.000840s | 0.000841s | 0.000843s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.000827s | 0.000847s | 0.000838s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000816s | 0.000827s | 0.000821s | byte equality observed |
| define_struct_move.test | 10 | 0.000821s | 0.000810s | 0.000833s | byte equality observed |
| define_tpl_struct.test | 10 | 0.000851s | 0.000827s | 0.000825s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.000847s | 0.000811s | 0.000844s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.000856s | 0.000822s | 0.000829s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.000878s | 0.000821s | 0.000824s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000836s | 0.000801s | 0.000832s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000859s | 0.000802s | 0.000833s | byte equality observed |
| deque_comparison.test | 10 | 0.000816s | 0.000824s | 0.000827s | byte equality observed |
| deque_construction.test | 10 | 0.000840s | 0.000849s | 0.000838s | byte equality observed |
| deque_copy.test | 10 | 0.000853s | 0.000858s | 0.000839s | byte equality observed |
| deque_hash.test | 10 | 0.000823s | 0.000850s | 0.000839s | byte equality observed |
| deque_iterator.test | 10 | 0.000819s | 0.000837s | 0.000823s | byte equality observed |
| deque_make.test | 10 | 0.000829s | 0.000820s | 0.000803s | byte equality observed |
| deque_misc.test | 10 | 0.000821s | 0.000811s | 0.000819s | byte equality observed |
| deque_move.test | 10 | 0.000848s | 0.000801s | 0.000825s | byte equality observed |
| deque_mutate.test | 10 | 0.000829s | 0.000810s | 0.000804s | byte equality observed |
| deque_nest.test | 10 | 0.000842s | 0.000836s | 0.000794s | byte equality observed |
| deque_tie.test | 10 | 0.000829s | 0.000811s | 0.000841s | byte equality observed |
| deque_value_at.test | 10 | 0.000833s | 0.000802s | 0.000818s | byte equality observed |
| erase.test | 10 | 0.000851s | 0.000827s | 0.000847s | byte equality observed |
| erase_key.test | 10 | 0.000822s | 0.000862s | 0.000870s | byte equality observed |
| filter.test | 10 | 0.000850s | 0.000866s | 0.000826s | byte equality observed |
| filter_if.test | 10 | 0.000844s | 0.000857s | 0.000855s | byte equality observed |
| filter_view.test | 10 | 0.000847s | 0.000870s | 0.000808s | byte equality observed |
| find.test | 10 | 0.000834s | 0.000843s | 0.000825s | byte equality observed |
| find_if.test | 10 | 0.000846s | 0.000810s | 0.000851s | byte equality observed |
| flatten.test | 10 | 0.000852s | 0.000820s | 0.000811s | byte equality observed |
| flatten_view.test | 10 | 0.000839s | 0.000829s | 0.000875s | byte equality observed |
| fold.test | 10 | 0.000839s | 0.000806s | 0.000849s | byte equality observed |
| for_each.test | 10 | 0.000854s | 0.000829s | 0.000813s | byte equality observed |
| front_extended_deque.test | 10 | 0.000825s | 0.000798s | 0.000791s | byte equality observed |
| fused.test | 10 | 0.000825s | 0.000804s | 0.000796s | byte equality observed |
| fused_function_object.test | 10 | 0.000825s | 0.000810s | 0.000798s | byte equality observed |
| fused_procedure.test | 10 | 0.000828s | 0.000807s | 0.000813s | byte equality observed |
| github-176.test | 10 | 0.000829s | 0.000834s | 0.000811s | byte equality observed |
| hash.test | 10 | 0.000825s | 0.000867s | 0.000819s | byte equality observed |
| identity_view.test | 10 | 0.000861s | 0.000877s | 0.000861s | byte equality observed |
| insert.test | 10 | 0.000830s | 0.000887s | 0.000861s | byte equality observed |
| insert_range.test | 10 | 0.000844s | 0.000863s | 0.000850s | byte equality observed |
| invoke.test | 10 | 0.000832s | 0.000808s | 0.000840s | byte equality observed |
| invoke_function_object.test | 10 | 0.000837s | 0.000801s | 0.000855s | byte equality observed |
| invoke_procedure.test | 10 | 0.000836s | 0.000819s | 0.000813s | byte equality observed |
| io.test | 10 | 0.000913s | 0.000888s | 0.000918s | byte equality observed |
| iter_fold.test | 10 | 0.000833s | 0.000825s | 0.000854s | byte equality observed |
| iterator_range.test | 10 | 0.000856s | 0.000852s | 0.000854s | byte equality observed |
| join.test | 10 | 0.000818s | 0.000827s | 0.000821s | byte equality observed |
| joint_view.test | 10 | 0.000846s | 0.000873s | 0.000828s | byte equality observed |
| list_comparison.test | 10 | 0.000832s | 0.000810s | 0.000792s | byte equality observed |
| list_construction.test | 10 | 0.000837s | 0.000802s | 0.000789s | byte equality observed |
| list_copy.test | 10 | 0.000800s | 0.000794s | 0.000820s | byte equality observed |
| list_hash.test | 10 | 0.000809s | 0.000838s | 0.000821s | byte equality observed |
| list_iterator.test | 10 | 0.000835s | 0.000814s | 0.000808s | byte equality observed |
| list_make.test | 10 | 0.000829s | 0.000798s | 0.000841s | byte equality observed |
| list_misc.test | 10 | 0.000820s | 0.000787s | 0.000819s | byte equality observed |
| list_mutate.test | 10 | 0.000830s | 0.000806s | 0.000846s | byte equality observed |
| list_nest.test | 10 | 0.000821s | 0.000835s | 0.000845s | byte equality observed |
| list_tie.test | 10 | 0.000839s | 0.000801s | 0.000842s | byte equality observed |
| list_value_at.test | 10 | 0.000823s | 0.000842s | 0.000847s | byte equality observed |
| make_fused.test | 10 | 0.000804s | 0.000808s | 0.000854s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000835s | 0.000857s | 0.000822s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000797s | 0.000791s | 0.000826s | byte equality observed |
| make_list.test | 10 | 0.000819s | 0.000845s | 0.000821s | byte equality observed |
| make_unfused.test | 10 | 0.000814s | 0.000830s | 0.000807s | byte equality observed |
| make_vector.test | 10 | 0.000825s | 0.000828s | 0.000833s | byte equality observed |
| map.test | 10 | 0.000848s | 0.000841s | 0.000848s | byte equality observed |
| map_comparison.test | 10 | 0.000824s | 0.000793s | 0.000803s | byte equality observed |
| map_construction.test | 10 | 0.000826s | 0.000778s | 0.000824s | byte equality observed |
| map_copy.test | 10 | 0.000832s | 0.000822s | 0.000824s | byte equality observed |
| map_misc.test | 10 | 0.000827s | 0.000810s | 0.000841s | byte equality observed |
| map_move.test | 10 | 0.000845s | 0.000817s | 0.000828s | byte equality observed |
| map_mutate.test | 10 | 0.000812s | 0.000814s | 0.000826s | byte equality observed |
| map_tie.test | 10 | 0.000814s | 0.000809s | 0.000839s | byte equality observed |
| move.test | 10 | 0.000810s | 0.000813s | 0.000832s | byte equality observed |
| nil.test | 10 | 0.000841s | 0.000829s | 0.000828s | byte equality observed |
| none.test | 10 | 0.000834s | 0.000804s | 0.000818s | byte equality observed |
| nview.test | 10 | 0.000799s | 0.000817s | 0.000811s | byte equality observed |
| pop_back.test | 10 | 0.000853s | 0.000835s | 0.000823s | byte equality observed |
| pop_front.test | 10 | 0.000837s | 0.000858s | 0.000833s | byte equality observed |
| push_back.test | 10 | 0.000833s | 0.000820s | 0.000846s | byte equality observed |
| push_front.test | 10 | 0.000847s | 0.000830s | 0.000852s | byte equality observed |
| quick.test | 10 | 0.000369s | 0.000776s | 0.000786s | byte equality observed |
| ref_vector.test | 10 | 0.000819s | 0.000821s | 0.000825s | byte equality observed |
| remove.test | 10 | 0.000844s | 0.000837s | 0.000846s | byte equality observed |
| remove_if.test | 10 | 0.000838s | 0.000827s | 0.000848s | byte equality observed |
| repetitive_view.test | 10 | 0.000811s | 0.000810s | 0.000809s | byte equality observed |
| replace.test | 10 | 0.000809s | 0.000822s | 0.000832s | byte equality observed |
| replace_if.test | 10 | 0.000830s | 0.000834s | 0.000849s | byte equality observed |
| reverse.test | 10 | 0.000851s | 0.000868s | 0.000845s | byte equality observed |
| reverse_fold.test | 10 | 0.000852s | 0.000827s | 0.000854s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.000825s | 0.000856s | 0.000816s | byte equality observed |
| reverse_view.test | 10 | 0.000841s | 0.000833s | 0.000837s | byte equality observed |
| segmented_find.test | 10 | 0.000812s | 0.000824s | 0.000838s | byte equality observed |
| segmented_find_if.test | 10 | 0.000815s | 0.000788s | 0.000836s | byte equality observed |
| segmented_fold.test | 10 | 0.000818s | 0.000825s | 0.000812s | byte equality observed |
| segmented_for_each.test | 10 | 0.000834s | 0.000809s | 0.000835s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.000846s | 0.000849s | 0.000884s | byte equality observed |
| set.test | 10 | 0.000822s | 0.000846s | 0.000845s | byte equality observed |
| single_view.test | 10 | 0.000842s | 0.000842s | 0.000842s | byte equality observed |
| std_array.test | 10 | 0.000839s | 0.000818s | 0.000832s | byte equality observed |
| std_pair.test | 10 | 0.000832s | 0.000825s | 0.000798s | byte equality observed |
| std_tuple.test | 10 | 0.000819s | 0.000810s | 0.000815s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.000824s | 0.000815s | 0.000817s | byte equality observed |
| swap.test | 10 | 0.000837s | 0.000824s | 0.000839s | byte equality observed |
| transform.test | 10 | 0.000842s | 0.000828s | 0.000830s | byte equality observed |
| transform_view.test | 10 | 0.000869s | 0.000841s | 0.000814s | byte equality observed |
| tuple_comparison.test | 10 | 0.000828s | 0.000787s | 0.000831s | byte equality observed |
| tuple_construction.test | 10 | 0.000830s | 0.000800s | 0.000798s | byte equality observed |
| tuple_conversion.test | 10 | 0.000826s | 0.000809s | 0.000800s | byte equality observed |
| tuple_copy.test | 10 | 0.000832s | 0.000820s | 0.000859s | byte equality observed |
| tuple_element.test | 10 | 0.000835s | 0.000818s | 0.000855s | byte equality observed |
| tuple_hash.test | 10 | 0.000820s | 0.000825s | 0.000837s | byte equality observed |
| tuple_make.test | 10 | 0.000847s | 0.000825s | 0.000855s | byte equality observed |
| tuple_misc.test | 10 | 0.000808s | 0.000832s | 0.000848s | byte equality observed |
| tuple_mutate.test | 10 | 0.000812s | 0.000804s | 0.000834s | byte equality observed |
| tuple_nest.test | 10 | 0.000810s | 0.000803s | 0.000821s | byte equality observed |
| tuple_tie.test | 10 | 0.000841s | 0.000819s | 0.000812s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.000826s | 0.000813s | 0.000825s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.000836s | 0.000818s | 0.000792s | byte equality observed |
| unfused.test | 10 | 0.000844s | 0.000822s | 0.000810s | byte equality observed |
| unfused_typed.test | 10 | 0.000831s | 0.000819s | 0.000823s | byte equality observed |
| vector_comparison.test | 10 | 0.000838s | 0.000815s | 0.000819s | byte equality observed |
| vector_construction.test | 10 | 0.000831s | 0.000823s | 0.000834s | byte equality observed |
| vector_conversion.test | 10 | 0.000837s | 0.000832s | 0.000827s | byte equality observed |
| vector_copy.test | 10 | 0.000835s | 0.000854s | 0.000827s | byte equality observed |
| vector_hash.test | 10 | 0.000840s | 0.000837s | 0.000839s | byte equality observed |
| vector_iterator.test | 10 | 0.000832s | 0.000797s | 0.000832s | byte equality observed |
| vector_make.test | 10 | 0.000858s | 0.000826s | 0.000834s | byte equality observed |
| vector_misc.test | 10 | 0.000835s | 0.000807s | 0.000845s | byte equality observed |
| vector_move.test | 10 | 0.000829s | 0.000810s | 0.000831s | byte equality observed |
| vector_mutate.test | 10 | 0.000800s | 0.000802s | 0.000819s | byte equality observed |
| vector_n.test | 10 | 0.000826s | 0.000839s | 0.000841s | byte equality observed |
| vector_nest.test | 10 | 0.000789s | 0.000831s | 0.000822s | byte equality observed |
| vector_tie.test | 10 | 0.000802s | 0.000818s | 0.000819s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000825s | 0.000825s | 0.000803s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000840s | 0.000838s | 0.000818s | byte equality observed |
| vector_value_at.test | 10 | 0.000831s | 0.000803s | 0.000776s | byte equality observed |
| zip.test | 10 | 0.000825s | 0.000819s | 0.000792s | byte equality observed |
| zip2.test | 10 | 0.000820s | 0.000820s | 0.000799s | byte equality observed |
| zip_ignore.test | 10 | 0.000814s | 0.000809s | 0.000840s | byte equality observed |
| zip_view.test | 10 | 0.000829s | 0.000815s | 0.000792s | byte equality observed |
| zip_view2.test | 10 | 0.000818s | 0.000799s | 0.000847s | byte equality observed |
| zip_view_ignore.test | 10 | 0.000802s | 0.000789s | 0.000806s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45617981312).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
