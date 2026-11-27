# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.284486 | 0.633289 | 0.784595 | 0.001216 | 0.001137 | 0.001026 |
| any.test | RUN | 0.276680 | 0.596848 | 0.728262 | 0.001241 | 0.001164 | 0.001163 |
| clear.test | RUN | 0.199337 | 0.564889 | 0.608710 | 0.001217 | 0.001314 | 0.001099 |
| copy.test | RUN | 0.169608 | 0.418861 | 0.496170 | 0.001217 | 0.001456 | 0.001115 |
| count.test | RUN | 0.195550 | 0.457422 | 0.558753 | 0.001350 | 0.001316 | 0.001107 |
| count_if.test | RUN | 0.181916 | 0.427293 | 0.501251 | 0.001079 | 0.001361 | 0.000916 |
| erase.test | RUN | 0.265683 | 0.756743 | 0.833167 | 0.001179 | 0.001608 | 0.001093 |
| erase_key.test | RUN | 0.252547 | 0.754768 | 0.779487 | 0.001346 | 0.001322 | 0.000999 |
| filter.test | RUN | 0.230995 | 0.640788 | 0.705339 | 0.001440 | 0.001423 | 0.001077 |
| filter_if.test | RUN | 0.259599 | 0.763440 | 0.821121 | 0.001343 | 0.001326 | 0.001106 |
| find.test | RUN | 0.219726 | 0.509601 | 0.630201 | 0.001215 | 0.001163 | 0.001095 |
| find_if.test | RUN | 0.207168 | 0.464079 | 0.575531 | 0.001260 | 0.001333 | 0.001197 |
| fold.test | RUN | 0.231217 | 0.588543 | 0.715711 | 0.001239 | 0.001413 | 0.001166 |
| for_each.test | RUN | 0.204493 | 0.541565 | 0.619106 | 0.001168 | 0.001361 | 0.001061 |
| insert.test | RUN | 0.301814 | 0.925067 | 1.011298 | 0.001213 | 0.001205 | 0.001181 |
| insert_range.test | RUN | 0.298760 | 0.923348 | 1.014668 | 0.001174 | 0.001202 | 0.001114 |
| iter_fold.test | RUN | 0.345242 | 0.882360 | 1.159355 | 0.001434 | 0.001480 | 0.001084 |
| move.test | RUN | 0.178296 | 0.431749 | 0.492470 | 0.001336 | 0.001286 | 0.000992 |
| none.test | RUN | 0.284882 | 0.609449 | 0.759610 | 0.001151 | 0.001341 | 0.001068 |
| pop_back.test | RUN | 0.282702 | 0.821652 | 0.890216 | 0.001096 | 0.001067 | 0.001010 |
| pop_front.test | RUN | 0.236803 | 0.677836 | 0.727976 | 0.001640 | 0.001282 | 0.001032 |
| push_back.test | RUN | 0.311121 | 0.939896 | 0.969981 | 0.001211 | 0.001440 | 0.001094 |
| push_front.test | RUN | 0.263158 | 0.784050 | 0.838309 | 0.001262 | 0.001338 | 0.001059 |
| remove.test | RUN | 0.290771 | 0.903278 | 0.976989 | 0.001196 | 0.001368 | 0.000918 |
| remove_if.test | RUN | 0.259873 | 0.755643 | 0.825953 | 0.001289 | 0.001522 | 0.001057 |
| replace.test | RUN | 0.249012 | 0.744403 | 0.777048 | 0.001261 | 0.001470 | 0.000840 |
| replace_if.test | RUN | 0.247201 | 0.721488 | 0.771306 | 0.001254 | 0.001308 | 0.001123 |
| reverse_fold.test | RUN | 0.377675 | 0.996473 | 1.295410 | 0.001508 | 0.001283 | 0.001111 |
| reverse_iter_fold.test | RUN | 0.392746 | 1.034955 | 1.354817 | 0.001278 | 0.001298 | 0.000983 |
| reverse.test | RUN | 0.241848 | 0.742777 | 0.784692 | 0.001378 | 0.001466 | 0.001022 |
| segmented_for_each.test | RUN | 0.423721 | 1.416380 | 1.612032 | 0.001256 | 0.001208 | 0.001040 |
| segmented_find.test | RUN | 0.256892 | 0.743356 | 0.903949 | 0.001286 | 0.001357 | 0.001181 |
| segmented_find_if.test | RUN | 0.264541 | 0.744562 | 0.891027 | 0.001141 | 0.001309 | 0.000934 |
| segmented_fold.test | RUN | 0.330898 | 0.984014 | 1.150719 | 0.001238 | 0.001524 | 0.001181 |
| transform.test | RUN | 0.260316 | 0.792979 | 0.838140 | 0.001344 | 0.001536 | 0.001127 |
| join.test | RUN | 0.191851 | 0.473714 | 0.580054 | 0.001235 | 0.001432 | 0.001171 |
| zip.test | RUN | 0.340388 | 0.888233 | 1.078825 | 0.001449 | 0.001330 | 0.001041 |
| zip2.test | RUN | 0.322247 | 0.862540 | 1.035990 | 0.001130 | 0.001354 | 0.001092 |
| zip_ignore.test | RUN | 0.250097 | 0.578989 | 0.700671 | 0.001403 | 0.001207 | 0.001073 |
| flatten.test | RUN | 0.239277 | 0.667302 | 0.723064 | 0.001299 | 0.001410 | 0.001058 |
| ticket-5490.test | COMPILE | 0.124057 | 0.279045 | 0.314593 | — | — | — |
| as_deque.test | RUN | 0.231780 | 0.629956 | 0.749744 | 0.001225 | 0.001317 | 0.001189 |
| as_list.test | RUN | 0.260516 | 0.757175 | 0.827745 | 0.001510 | 0.001318 | 0.001030 |
| as_map.test | RUN | 0.259025 | 0.735143 | 0.812386 | 0.001281 | 0.001230 | 0.001023 |
| as_map_assoc.test | RUN | 0.259120 | 0.709773 | 0.779188 | 0.001169 | 0.001324 | 0.001025 |
| as_set.test | RUN | 0.297361 | 0.881929 | 0.962131 | 0.001221 | 0.001462 | 0.000991 |
| as_vector.test | RUN | 0.268490 | 0.782623 | 0.841253 | 0.001233 | 0.001224 | 0.001018 |
| boost_tuple.test | RUN | 0.267012 | 0.777023 | 0.831482 | 0.001178 | 0.001264 | 0.001109 |
| boost_tuple_iterator.test | RUN | 0.179828 | 0.450019 | 0.508967 | 0.001439 | 0.001242 | 0.001223 |
| cons.test | RUN | 0.343267 | 0.888280 | 0.996396 | 0.001139 | 0.001353 | 0.001135 |
| convert_boost_tuple.test | RUN | 0.210274 | 0.661797 | 0.663930 | 0.001312 | 0.001392 | 0.000936 |
| convert_deque.test | RUN | 0.208151 | 0.657306 | 0.647714 | 0.001221 | 0.001097 | 0.001077 |
| convert_list.test | RUN | 0.206218 | 0.685490 | 0.651342 | 0.001275 | 0.001219 | 0.001006 |
| convert_std_pair.test | RUN | 0.223086 | 0.678009 | 0.665350 | 0.001191 | 0.001106 | 0.000981 |
| convert_std_tuple.test | RUN | 0.208744 | 0.671501 | 0.659280 | 0.001199 | 0.001312 | 0.001092 |
| convert_vector.test | RUN | 0.209898 | 0.667684 | 0.641744 | 0.001174 | 0.001305 | 0.000968 |
| filter_view.test | RUN | 0.256397 | 0.708284 | 0.785395 | 0.001380 | 0.001274 | 0.001074 |
| hash.test | RUN | 0.247483 | 0.634013 | 0.729553 | 0.001505 | 0.001356 | 0.001113 |
| io.test | RUN | 0.270523 | 0.918368 | 0.894279 | 0.001423 | 0.001568 | 0.001216 |
| iterator_range.test | RUN | 0.235211 | 0.677835 | 0.736608 | 0.001307 | 0.001499 | 0.001061 |
| joint_view.test | RUN | 0.334277 | 1.112032 | 1.131635 | 0.001585 | 0.001418 | 0.001175 |
| list_comparison.test | RUN | 0.190602 | 0.469835 | 0.524701 | 0.001305 | 0.001249 | 0.001055 |
| list_construction.test | RUN | 0.178616 | 0.444255 | 0.543355 | 0.001246 | 0.001406 | 0.000965 |
| list_copy.test | RUN | 0.277371 | 0.826770 | 0.897692 | 0.001181 | 0.001252 | 0.001133 |
| list_iterator.test | RUN | 0.182747 | 0.455626 | 0.505348 | 0.001252 | 0.001362 | 0.001139 |
| list_hash.test | RUN | 0.243509 | 0.929969 | 0.745960 | 0.001296 | 0.001402 | 0.001033 |
| list_make.test | RUN | 0.199279 | 0.492958 | 0.557337 | 0.001461 | 0.001254 | 0.001046 |
| list_misc.test | RUN | 0.244762 | 0.575860 | 0.687410 | 0.001171 | 0.001383 | 0.000999 |
| list_mutate.test | RUN | 0.172257 | 0.395418 | 0.465962 | 0.001312 | 0.001399 | 0.001055 |
| list_nest.test | RUN | 0.351227 | 1.144214 | 1.295261 | 0.001124 | 0.001142 | 0.001001 |
| list_tie.test | RUN | 0.183315 | 0.438022 | 0.507022 | 0.001505 | 0.001261 | 0.001022 |
| list_value_at.test | RUN | 0.175630 | 0.419302 | 0.518528 | 0.001222 | 0.001274 | 0.001133 |
| deque_comparison.test | RUN | 0.184690 | 0.463995 | 0.517974 | 0.001199 | 0.001357 | 0.001095 |
| deque_construction.test | RUN | 0.184816 | 0.443256 | 0.529600 | 0.001321 | 0.001482 | 0.001016 |
| deque_copy.test | RUN | 0.267844 | 0.763568 | 0.853109 | 0.001303 | 0.001164 | 0.001027 |
| deque_iterator.test | RUN | 0.181059 | 0.484859 | 0.523007 | 0.001413 | 0.001267 | 0.001070 |
| deque_hash.test | RUN | 0.250292 | 0.880730 | 0.732578 | 0.001141 | 0.001307 | 0.001002 |
| deque_is_constructible.test | COMPILE | 0.098019 | 0.203153 | 0.236556 | — | — | — |
| deque_make.test | RUN | 0.183954 | 0.479072 | 0.551703 | 0.001439 | 0.001270 | 0.001021 |
| deque_misc.test | RUN | 0.239119 | 0.575145 | 0.673800 | 0.001285 | 0.001196 | 0.001145 |
| deque_move.test | RUN | 0.189824 | 0.489178 | 0.536332 | 0.001517 | 0.001385 | 0.001113 |
| deque_mutate.test | RUN | 0.166251 | 0.390591 | 0.452787 | 0.001325 | 0.001440 | 0.001028 |
| deque_nest.test | RUN | 0.530932 | 1.850948 | 2.045397 | 0.001282 | 0.001231 | 0.001014 |
| deque_tie.test | RUN | 0.174952 | 0.416403 | 0.487739 | 0.001320 | 0.001255 | 0.001132 |
| deque_value_at.test | RUN | 0.168480 | 0.401486 | 0.479474 | 0.001238 | 0.001226 | 0.001081 |
| front_extended_deque.test | RUN | 0.254704 | 0.590806 | 0.726931 | 0.001387 | 0.001547 | 0.001085 |
| back_extended_deque.test | RUN | 0.257083 | 0.600610 | 0.719719 | 0.001140 | 0.001365 | 0.001056 |
| make_list.test | RUN | 0.194598 | 0.490463 | 0.572009 | 0.001443 | 0.001321 | 0.001181 |
| make_vector.test | RUN | 0.194643 | 0.481993 | 0.595370 | 0.001191 | 0.001648 | 0.001061 |
| map.test | RUN | 0.253023 | 0.758132 | 0.815019 | 0.001221 | 0.001314 | 0.001022 |
| map_comparison.test | RUN | 0.190796 | 0.475656 | 0.553654 | 0.001308 | 0.001231 | 0.001060 |
| map_construction.test | RUN | 0.192578 | 0.455877 | 0.520068 | 0.001164 | 0.001408 | 0.001040 |
| map_copy.test | RUN | 0.233606 | 0.579033 | 0.650799 | 0.001304 | 0.001260 | 0.000959 |
| map_misc.test | RUN | 0.241676 | 0.586822 | 0.672466 | 0.001357 | 0.001122 | 0.001201 |
| map_move.test | RUN | 0.198222 | 0.503456 | 0.545628 | 0.001211 | 0.001540 | 0.001038 |
| map_mutate.test | RUN | 0.169497 | 0.394578 | 0.456685 | 0.001142 | 0.001343 | 0.001118 |
| map_tie.test | RUN | 0.180904 | 0.399240 | 0.469118 | 0.001298 | 0.001319 | 0.000977 |
| nil.test | RUN | 0.116837 | 0.285428 | 0.334828 | 0.001150 | 0.001228 | 0.001044 |
| nview.test | RUN | 0.236693 | 0.580736 | 0.698447 | 0.001458 | 0.001361 | 0.001054 |
| reverse_view.test | RUN | 0.320042 | 0.961306 | 1.015454 | 0.001306 | 0.001422 | 0.001090 |
| segmented_iterator_range.test | RUN | 0.373117 | 1.146073 | 1.261055 | 0.001252 | 0.001465 | 0.001056 |
| set.test | RUN | 0.232557 | 0.654032 | 0.720047 | 0.001196 | 0.001416 | 0.001060 |
| single_view.test | RUN | 0.215318 | 0.589917 | 0.661727 | 0.001299 | 0.001306 | 0.001008 |
| std_pair.test | RUN | 0.270583 | 0.770567 | 0.824998 | 0.001228 | 0.001295 | 0.001121 |
| boost_array.test | RUN | 0.225608 | 0.524978 | 0.626214 | 0.001403 | 0.001396 | 0.001138 |
| array.test | RUN | 0.220959 | 0.529964 | 0.607214 | 0.001315 | 0.001274 | 0.001109 |
| std_array.test | RUN | 0.226187 | 0.514772 | 0.619350 | 0.001202 | 0.001411 | 0.000993 |
| tuple_comparison.test | RUN | 0.202063 | 0.496504 | 0.560734 | 0.001523 | 0.001344 | 0.001147 |
| tuple_construction.test | RUN | 0.205553 | 0.494313 | 0.580430 | 0.001417 | 0.001369 | 0.000989 |
| tuple_conversion.test | RUN | 0.456820 | 1.543755 | 1.929255 | 0.001240 | 0.001234 | 0.001045 |
| tuple_copy.test | RUN | 0.297828 | 0.882283 | 1.011503 | 0.001383 | 0.001150 | 0.001010 |
| tuple_element.test | RUN | 0.184292 | 0.441127 | 0.513397 | 0.001176 | 0.001183 | 0.000977 |
| tuple_make.test | RUN | 0.206746 | 0.519536 | 0.553770 | 0.001288 | 0.001165 | 0.001014 |
| tuple_misc.test | RUN | 0.258003 | 0.616776 | 0.720532 | 0.001259 | 0.001170 | 0.001082 |
| tuple_mutate.test | RUN | 0.179683 | 0.414086 | 0.549998 | 0.001350 | 0.001174 | 0.001154 |
| tuple_nest.test | RUN | 0.776095 | 3.246123 | 3.516346 | 0.001511 | 0.001364 | 0.001071 |
| tuple_hash.test | RUN | 0.263555 | 0.906322 | 0.771277 | 0.001268 | 0.001359 | 0.001097 |
| tuple_tie.test | RUN | 0.189512 | 0.457024 | 0.544507 | 0.001296 | 0.001110 | 0.001104 |
| tuple_traits__maybe_variadic.test | RUN | 0.209424 | 0.567809 | 0.578582 | 0.001245 | 0.001242 | 0.001085 |
| tuple_traits__no_variadic.test | RUN | 0.234738 | 0.580317 | 0.621112 | 0.001213 | 0.001361 | 0.001162 |
| transform_view.test | RUN | 0.300640 | 0.960073 | 1.027591 | 0.001274 | 0.001501 | 0.001176 |
| identity_view.test | RUN | 0.293832 | 0.881582 | 0.974364 | 0.001381 | 0.001337 | 0.001164 |
| vector_comparison.test | RUN | 0.186042 | 0.475163 | 0.543409 | 0.001440 | 0.001210 | 0.001016 |
| vector_construction.test | RUN | 0.187291 | 0.439235 | 0.523331 | 0.001253 | 0.001581 | 0.001141 |
| vector_conversion.test | RUN | 0.549106 | 2.037234 | 2.422160 | 0.001368 | 0.001277 | 0.000985 |
| vector_copy.test | RUN | 0.284594 | 0.870322 | 0.980158 | 0.001226 | 0.001339 | 0.001205 |
| vector_iterator.test | RUN | 0.180839 | 0.470963 | 0.536099 | 0.001610 | 0.001167 | 0.001114 |
| vector_make.test | RUN | 0.190403 | 0.473754 | 0.560851 | 0.001115 | 0.001288 | 0.001073 |
| vector_misc.test | RUN | 0.245216 | 0.589908 | 0.685238 | 0.001258 | 0.001118 | 0.000969 |
| vector_move.test | RUN | 0.189537 | 0.501724 | 0.542968 | 0.001318 | 0.001301 | 0.001231 |
| vector_mutate.test | RUN | 0.172301 | 0.396082 | 0.504154 | 0.001192 | 0.001319 | 0.001043 |
| vector_n.test | RUN | 0.218668 | 0.493002 | 0.619156 | 0.001444 | 0.001478 | 0.001114 |
| vector_nest.test | RUN | 0.799206 | 3.330854 | 3.554955 | 0.001262 | 0.001203 | 0.001065 |
| vector_hash.test | RUN | 0.252590 | 0.925608 | 0.716513 | 0.001120 | 0.001326 | 0.001090 |
| vector_tie.test | RUN | 0.182454 | 0.424746 | 0.522677 | 0.001400 | 0.001323 | 0.001095 |
| vector_traits__maybe_variadic.test | RUN | 0.189023 | 0.511950 | 0.528099 | 0.001362 | 0.001276 | 0.001116 |
| vector_traits__no_variadic.test | RUN | 0.209064 | 0.540769 | 0.562827 | 0.001247 | 0.001326 | 0.001044 |
| vector_value_at.test | RUN | 0.174918 | 0.394551 | 0.494183 | 0.001051 | 0.001442 | 0.001143 |
| zip_view.test | RUN | 0.359311 | 0.984589 | 1.220970 | 0.001281 | 0.001300 | 0.001000 |
| zip_view2.test | RUN | 0.287288 | 0.769001 | 0.948636 | 0.001158 | 0.001197 | 0.000977 |
| zip_view_ignore.test | RUN | 0.272344 | 0.699841 | 0.864813 | 0.001351 | 0.001366 | 0.001193 |
| repetitive_view.test | RUN | 0.462357 | 1.282815 | 1.648525 | 0.001135 | 0.001201 | 0.001108 |
| deduce_sequence.test | RUN | 0.226199 | 0.538089 | 0.642682 | 0.001566 | 0.001334 | 0.001125 |
| adapt_adt_named.test | RUN | 0.260475 | 0.769029 | 0.816007 | 0.001267 | 0.001391 | 0.001082 |
| adapt_adt_named_empty.test | RUN | 0.230749 | 0.623331 | 0.685586 | 0.001151 | 0.001276 | 0.001092 |
| adapt_adt.test | RUN | 0.299567 | 1.025692 | 1.006289 | 0.001347 | 0.001176 | 0.001044 |
| adapt_adt_empty.test | RUN | 0.226867 | 0.629494 | 0.680478 | 0.001257 | 0.001144 | 0.001134 |
| adapt_assoc_adt_named.test | RUN | 0.301144 | 0.797808 | 0.884786 | 0.001139 | 0.001070 | 0.001065 |
| adapt_assoc_adt_named_empty.test | RUN | 0.236429 | 0.619831 | 0.689840 | 0.001502 | 0.001347 | 0.001246 |
| adapt_assoc_adt.test | RUN | 0.303316 | 0.830869 | 0.922770 | 0.001117 | 0.001302 | 0.001020 |
| adapt_assoc_adt_empty.test | RUN | 0.228513 | 0.626095 | 0.674462 | 0.001208 | 0.001517 | 0.001153 |
| adapt_assoc_struct_named.test | RUN | 0.288511 | 0.789368 | 0.879126 | 0.001211 | 0.001229 | 0.001082 |
| adapt_assoc_struct_named_empty.test | RUN | 0.233436 | 0.615111 | 0.679756 | 0.001189 | 0.001302 | 0.001099 |
| adapt_assoc_struct.test | RUN | 0.266875 | 0.746132 | 0.809855 | 0.001479 | 0.001444 | 0.001012 |
| adapt_assoc_struct_empty.test | RUN | 0.226714 | 0.602334 | 0.669467 | 0.001277 | 0.001263 | 0.001054 |
| adapt_assoc_tpl_adt.test | RUN | 0.320288 | 0.863351 | 0.951964 | 0.001389 | 0.001412 | 0.001120 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.235093 | 0.620534 | 0.684854 | 0.001307 | 0.001241 | 0.001107 |
| adapt_assoc_tpl_struct.test | RUN | 0.257683 | 0.727562 | 0.784680 | 0.001265 | 0.001282 | 0.000972 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.229831 | 0.608002 | 0.685172 | 0.001374 | 0.001251 | 0.000970 |
| adapt_struct_named.test | RUN | 0.263037 | 0.755959 | 0.802572 | 0.001266 | 0.001218 | 0.001147 |
| adapt_struct_named_empty.test | RUN | 0.235911 | 0.628933 | 0.668921 | 0.001191 | 0.001371 | 0.001012 |
| adapt_struct.test | RUN | 0.288754 | 0.847947 | 0.915984 | 0.001344 | 0.001468 | 0.001080 |
| adapt_struct_empty.test | RUN | 0.228169 | 0.613129 | 0.660680 | 0.001589 | 0.001289 | 0.001041 |
| adapt_tpl_adt.test | RUN | 0.298521 | 1.009006 | 0.946293 | 0.001178 | 0.001461 | 0.001068 |
| adapt_tpl_adt_empty.test | RUN | 0.236863 | 0.624736 | 0.681003 | 0.001321 | 0.001265 | 0.001117 |
| adapt_tpl_struct.test | RUN | 0.248411 | 0.694861 | 0.736768 | 0.001546 | 0.001306 | 0.001015 |
| adapt_tpl_struct_empty.test | RUN | 0.230382 | 0.607990 | 0.676950 | 0.001287 | 0.001247 | 0.001025 |
| adt_attribute_proxy.test | RUN | 0.264310 | 0.608804 | 0.720677 | 0.001190 | 0.001248 | 0.001176 |
| define_struct.test | RUN | 0.322036 | 0.855679 | 0.940858 | 0.001262 | 0.001258 | 0.001003 |
| define_struct_empty.test | RUN | 0.277257 | 0.682721 | 0.772253 | 0.001209 | 0.001169 | 0.001026 |
| define_struct_move.test | RUN | 0.180003 | 0.392763 | 0.452206 | 0.001535 | 0.001473 | 0.001066 |
| define_struct_inline.test | RUN | 0.329176 | 1.020282 | 1.081481 | 0.001514 | 0.001288 | 0.001073 |
| define_struct_inline_empty.test | RUN | 0.276282 | 0.689763 | 0.785096 | 0.001300 | 0.001236 | 0.001151 |
| define_struct_inline_move.test | RUN | 0.175502 | 0.392605 | 0.467876 | 0.001159 | 0.001256 | 0.001182 |
| define_assoc_struct.test | RUN | 0.308823 | 0.805862 | 0.888811 | 0.001261 | 0.001502 | 0.001017 |
| define_assoc_struct_empty.test | RUN | 0.274048 | 0.688543 | 0.783947 | 0.001290 | 0.001233 | 0.001026 |
| define_assoc_struct_move.test | RUN | 0.172960 | 0.378497 | 0.460496 | 0.001463 | 0.001247 | 0.001036 |
| define_tpl_struct.test | RUN | 0.311731 | 0.803315 | 0.903429 | 0.001395 | 0.001340 | 0.000958 |
| define_tpl_struct_empty.test | RUN | 0.278152 | 0.698706 | 0.775129 | 0.001536 | 0.001342 | 0.001088 |
| define_tpl_struct_move.test | RUN | 0.179525 | 0.405049 | 0.465868 | 0.001203 | 0.001221 | 0.001137 |
| define_tpl_struct_inline.test | RUN | 0.328270 | 0.943235 | 0.983269 | 0.001206 | 0.001315 | 0.001111 |
| define_tpl_struct_inline_empty.test | RUN | 0.275522 | 0.687222 | 0.783704 | 0.001187 | 0.001327 | 0.001018 |
| define_tpl_struct_inline_move.test | RUN | 0.176809 | 0.395128 | 0.468674 | 0.001251 | 0.001420 | 0.001045 |
| define_assoc_tpl_struct.test | RUN | 0.313092 | 0.815545 | 0.908754 | 0.001456 | 0.001386 | 0.000967 |
| define_assoc_tpl_struct_empty.test | RUN | 0.276541 | 0.701503 | 0.766642 | 0.001225 | 0.001310 | 0.001078 |
| define_assoc_tpl_struct_move.test | RUN | 0.172449 | 0.390898 | 0.473094 | 0.001339 | 0.001124 | 0.001040 |
| std_tuple.test | RUN | 0.188554 | 0.442412 | 0.515570 | 0.001438 | 0.001266 | 0.000936 |
| std_tuple_iterator.test | RUN | 0.189734 | 0.462714 | 0.520922 | 0.001398 | 0.001214 | 0.001020 |
| ref_vector.test | RUN | 0.201355 | 0.464365 | 0.553389 | 0.001336 | 0.001287 | 0.001081 |
| flatten_view.test | RUN | 0.227189 | 0.592903 | 0.662630 | 0.001264 | 0.001181 | 0.001133 |
| github-159.test | COMPILE | 0.097543 | 0.214853 | 0.245170 | — | — | — |
| github-176.test | RUN | 0.203433 | 0.512665 | 0.560783 | 0.001419 | 0.001234 | 0.001070 |
| size.test | COMPILE | 0.175271 | 0.366587 | 0.442946 | — | — | — |
| fused.test | RUN | 0.240039 | 0.553365 | 0.669261 | 0.001447 | 0.001348 | 0.001139 |
| fused_function_object.test | RUN | 0.185660 | 0.420500 | 0.504395 | 0.001046 | 0.001191 | 0.001134 |
| fused_procedure.test | RUN | 0.233715 | 0.532242 | 0.615987 | 0.001143 | 0.001262 | 0.001064 |
| unfused.test | RUN | 0.193044 | 0.422014 | 0.510944 | 0.001296 | 0.001287 | 0.000965 |
| unfused_typed.test | RUN | 0.194909 | 0.462197 | 0.540493 | 0.001299 | 0.001237 | 0.001165 |
| make_fused.test | RUN | 0.239208 | 0.543560 | 0.659954 | 0.001185 | 0.001284 | 0.001092 |
| make_fused_function_object.test | RUN | 0.178030 | 0.425144 | 0.495593 | 0.001223 | 0.001178 | 0.001080 |
| make_fused_procedure.test | RUN | 0.233970 | 0.540827 | 0.624272 | 0.001576 | 0.001266 | 0.001041 |
| make_unfused.test | RUN | 0.192104 | 0.420772 | 0.516586 | 0.001439 | 0.001294 | 0.001090 |
| invoke.test | RUN | 0.481772 | 1.564321 | 1.730630 | 0.001218 | 0.001300 | 0.001128 |
| invoke_function_object.test | RUN | 0.221672 | 0.545693 | 0.655805 | 0.001422 | 0.001437 | 0.001103 |
| invoke_procedure.test | RUN | 0.376414 | 1.143602 | 1.306842 | 0.001295 | 0.001360 | 0.001035 |
| swap.test | RUN | 0.278574 | 0.688675 | 0.825706 | 0.001414 | 0.001264 | 0.001110 |
| is_sequence.test | COMPILE | 0.047072 | 0.097647 | 0.101923 | — | — | — |
| is_view.test | COMPILE | 0.047910 | 0.098238 | 0.102929 | — | — | — |
| pair_deque.test | COMPILE | 0.102440 | 0.221614 | 0.252942 | — | — | — |
| pair_list.test | COMPILE | 0.100854 | 0.213879 | 0.241545 | — | — | — |
| pair_map.test | COMPILE | 0.103446 | 0.226016 | 0.254499 | — | — | — |
| pair_set.test | COMPILE | 0.106598 | 0.225224 | 0.250242 | — | — | — |
| pair_vector.test | COMPILE | 0.103775 | 0.215553 | 0.248957 | — | — | — |
| pair_nest.test | COMPILE | 0.040552 | 0.089710 | 0.095400 | — | — | — |
| index_sequence.test | COMPILE | 0.035268 | 0.059834 | 0.071032 | — | — | — |
| and.test | COMPILE | 0.026697 | 0.047213 | 0.050272 | — | — | — |
| tag_of.test | COMPILE | 0.045747 | 0.093646 | 0.095584 | — | — | — |
| unused.test | COMPILE | 0.024692 | 0.059897 | 0.056369 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.046181 | 0.086064 | 0.096541 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.039748 | 0.079495 | 0.070395 | — | — | — |
| quick.test | RUN | 0.138600 | 0.302224 | 0.322880 | 0.000433 | 0.000864 | 0.000761 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.010× | 1.007×, 1.013× | 0.994× |
| clang | 1.003× | 1.000×, 1.006× | 1.007× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46032707836).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.000833s | 0.000846s | 0.000802s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.000823s | 0.000868s | 0.000797s | byte equality observed |
| adapt_adt_named.test | 10 | 0.000843s | 0.000824s | 0.000836s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.000809s | 0.000851s | 0.000815s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.000825s | 0.000809s | 0.000816s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.000810s | 0.000826s | 0.000819s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.000835s | 0.000808s | 0.000839s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.000804s | 0.000847s | 0.000809s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.000816s | 0.000856s | 0.000839s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.000804s | 0.000852s | 0.000808s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.000822s | 0.000828s | 0.000840s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.000832s | 0.000832s | 0.000832s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.000824s | 0.000817s | 0.000861s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.000797s | 0.000820s | 0.000804s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.000818s | 0.000833s | 0.000827s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.000814s | 0.000822s | 0.000795s | byte equality observed |
| adapt_struct.test | 10 | 0.000835s | 0.000852s | 0.000809s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.000810s | 0.000847s | 0.000824s | byte equality observed |
| adapt_struct_named.test | 10 | 0.000810s | 0.000827s | 0.000790s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.000818s | 0.000830s | 0.000808s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.000837s | 0.000812s | 0.000803s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.000831s | 0.000825s | 0.000839s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.000827s | 0.000842s | 0.000813s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.000838s | 0.000827s | 0.000812s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.000831s | 0.000807s | 0.000845s | byte equality observed |
| all.test | 10 | 0.000816s | 0.000827s | 0.000827s | byte equality observed |
| any.test | 10 | 0.000800s | 0.000809s | 0.000807s | byte equality observed |
| array.test | 10 | 0.000810s | 0.000813s | 0.000824s | byte equality observed |
| as_deque.test | 10 | 0.000827s | 0.000831s | 0.000788s | byte equality observed |
| as_list.test | 10 | 0.000848s | 0.000835s | 0.000808s | byte equality observed |
| as_map.test | 10 | 0.000842s | 0.000839s | 0.000829s | byte equality observed |
| as_map_assoc.test | 10 | 0.000836s | 0.000799s | 0.000823s | byte equality observed |
| as_set.test | 10 | 0.000842s | 0.000841s | 0.000806s | byte equality observed |
| as_vector.test | 10 | 0.000852s | 0.000856s | 0.000837s | byte equality observed |
| back_extended_deque.test | 10 | 0.000790s | 0.000831s | 0.000796s | byte equality observed |
| boost_array.test | 10 | 0.000788s | 0.000795s | 0.000798s | byte equality observed |
| boost_tuple.test | 10 | 0.000808s | 0.000848s | 0.000830s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.000788s | 0.000819s | 0.000811s | byte equality observed |
| clear.test | 10 | 0.000801s | 0.000828s | 0.000804s | byte equality observed |
| cons.test | 10 | 0.000827s | 0.000822s | 0.000815s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.000834s | 0.000839s | 0.000819s | byte equality observed |
| convert_deque.test | 10 | 0.000821s | 0.000854s | 0.000827s | byte equality observed |
| convert_list.test | 10 | 0.000816s | 0.000833s | 0.000806s | byte equality observed |
| convert_std_pair.test | 10 | 0.000805s | 0.000792s | 0.000799s | byte equality observed |
| convert_std_tuple.test | 10 | 0.000831s | 0.000798s | 0.000831s | byte equality observed |
| convert_vector.test | 10 | 0.000823s | 0.000824s | 0.000783s | byte equality observed |
| copy.test | 10 | 0.000788s | 0.000762s | 0.000818s | byte equality observed |
| count.test | 10 | 0.000807s | 0.000793s | 0.000811s | byte equality observed |
| count_if.test | 10 | 0.000813s | 0.000790s | 0.000815s | byte equality observed |
| deduce_sequence.test | 10 | 0.000826s | 0.000809s | 0.000801s | byte equality observed |
| define_assoc_struct.test | 10 | 0.000819s | 0.000842s | 0.000807s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.000809s | 0.000805s | 0.000815s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.000816s | 0.000806s | 0.000815s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.000808s | 0.000819s | 0.000834s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.000803s | 0.000848s | 0.000801s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000798s | 0.000819s | 0.000834s | byte equality observed |
| define_struct.test | 10 | 0.000810s | 0.000835s | 0.000869s | byte equality observed |
| define_struct_empty.test | 10 | 0.000812s | 0.000830s | 0.000858s | byte equality observed |
| define_struct_inline.test | 10 | 0.000814s | 0.000848s | 0.000838s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.000828s | 0.000844s | 0.000854s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000779s | 0.000805s | 0.000784s | byte equality observed |
| define_struct_move.test | 10 | 0.000789s | 0.000823s | 0.000806s | byte equality observed |
| define_tpl_struct.test | 10 | 0.000806s | 0.000816s | 0.000802s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.000825s | 0.000833s | 0.000808s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.000845s | 0.000836s | 0.000828s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.000830s | 0.000823s | 0.000786s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000808s | 0.000778s | 0.000815s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000795s | 0.000783s | 0.000772s | byte equality observed |
| deque_comparison.test | 10 | 0.000807s | 0.000806s | 0.000802s | byte equality observed |
| deque_construction.test | 10 | 0.000795s | 0.000778s | 0.000808s | byte equality observed |
| deque_copy.test | 10 | 0.000823s | 0.000816s | 0.000807s | byte equality observed |
| deque_hash.test | 10 | 0.000813s | 0.000800s | 0.000785s | byte equality observed |
| deque_iterator.test | 10 | 0.000803s | 0.000794s | 0.000792s | byte equality observed |
| deque_make.test | 10 | 0.000808s | 0.000828s | 0.000836s | byte equality observed |
| deque_misc.test | 10 | 0.000811s | 0.000829s | 0.000816s | byte equality observed |
| deque_move.test | 10 | 0.000802s | 0.000832s | 0.000821s | byte equality observed |
| deque_mutate.test | 10 | 0.000807s | 0.000783s | 0.000794s | byte equality observed |
| deque_nest.test | 10 | 0.000811s | 0.000800s | 0.000787s | byte equality observed |
| deque_tie.test | 10 | 0.000807s | 0.000795s | 0.000804s | byte equality observed |
| deque_value_at.test | 10 | 0.000802s | 0.000789s | 0.000806s | byte equality observed |
| erase.test | 10 | 0.000797s | 0.000837s | 0.000823s | byte equality observed |
| erase_key.test | 10 | 0.000836s | 0.000817s | 0.000862s | byte equality observed |
| filter.test | 10 | 0.000829s | 0.000822s | 0.000831s | byte equality observed |
| filter_if.test | 10 | 0.000846s | 0.000843s | 0.000843s | byte equality observed |
| filter_view.test | 10 | 0.000827s | 0.000835s | 0.000824s | byte equality observed |
| find.test | 10 | 0.000828s | 0.000849s | 0.000802s | byte equality observed |
| find_if.test | 10 | 0.000817s | 0.000842s | 0.000802s | byte equality observed |
| flatten.test | 10 | 0.000826s | 0.000864s | 0.000822s | byte equality observed |
| flatten_view.test | 10 | 0.000809s | 0.000834s | 0.000812s | byte equality observed |
| fold.test | 10 | 0.000832s | 0.000833s | 0.000835s | byte equality observed |
| for_each.test | 10 | 0.000810s | 0.000835s | 0.000818s | byte equality observed |
| front_extended_deque.test | 10 | 0.000813s | 0.000817s | 0.000782s | byte equality observed |
| fused.test | 10 | 0.000790s | 0.000812s | 0.000811s | byte equality observed |
| fused_function_object.test | 10 | 0.000811s | 0.000814s | 0.000824s | byte equality observed |
| fused_procedure.test | 10 | 0.000797s | 0.000819s | 0.000829s | byte equality observed |
| github-176.test | 10 | 0.000804s | 0.000844s | 0.000781s | byte equality observed |
| hash.test | 10 | 0.000782s | 0.000847s | 0.000836s | byte equality observed |
| identity_view.test | 10 | 0.000825s | 0.000872s | 0.000836s | byte equality observed |
| insert.test | 10 | 0.000820s | 0.000832s | 0.000837s | byte equality observed |
| insert_range.test | 10 | 0.000821s | 0.000824s | 0.000830s | byte equality observed |
| invoke.test | 10 | 0.000812s | 0.000806s | 0.000800s | byte equality observed |
| invoke_function_object.test | 10 | 0.000801s | 0.000814s | 0.000825s | byte equality observed |
| invoke_procedure.test | 10 | 0.000834s | 0.000800s | 0.000805s | byte equality observed |
| io.test | 10 | 0.000913s | 0.000895s | 0.000888s | byte equality observed |
| iter_fold.test | 10 | 0.000811s | 0.000838s | 0.000829s | byte equality observed |
| iterator_range.test | 10 | 0.000818s | 0.000828s | 0.000837s | byte equality observed |
| join.test | 10 | 0.000795s | 0.000786s | 0.000816s | byte equality observed |
| joint_view.test | 10 | 0.000846s | 0.000842s | 0.000830s | byte equality observed |
| list_comparison.test | 10 | 0.000787s | 0.000796s | 0.000817s | byte equality observed |
| list_construction.test | 10 | 0.000814s | 0.000783s | 0.000790s | byte equality observed |
| list_copy.test | 10 | 0.000802s | 0.000809s | 0.000825s | byte equality observed |
| list_hash.test | 10 | 0.000804s | 0.000825s | 0.000827s | byte equality observed |
| list_iterator.test | 10 | 0.000805s | 0.000808s | 0.000806s | byte equality observed |
| list_make.test | 10 | 0.000798s | 0.000796s | 0.000809s | byte equality observed |
| list_misc.test | 10 | 0.000793s | 0.000802s | 0.000807s | byte equality observed |
| list_mutate.test | 10 | 0.000812s | 0.000784s | 0.000793s | byte equality observed |
| list_nest.test | 10 | 0.000799s | 0.000800s | 0.000814s | byte equality observed |
| list_tie.test | 10 | 0.000805s | 0.000822s | 0.000849s | byte equality observed |
| list_value_at.test | 10 | 0.000802s | 0.000808s | 0.000857s | byte equality observed |
| make_fused.test | 10 | 0.000789s | 0.000807s | 0.000825s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000801s | 0.000796s | 0.000818s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000785s | 0.000815s | 0.000779s | byte equality observed |
| make_list.test | 10 | 0.000806s | 0.000839s | 0.000789s | byte equality observed |
| make_unfused.test | 10 | 0.000826s | 0.000841s | 0.000793s | byte equality observed |
| make_vector.test | 10 | 0.000807s | 0.000840s | 0.000800s | byte equality observed |
| map.test | 10 | 0.000829s | 0.000834s | 0.000814s | byte equality observed |
| map_comparison.test | 10 | 0.000809s | 0.000825s | 0.000803s | byte equality observed |
| map_construction.test | 10 | 0.000806s | 0.000797s | 0.000779s | byte equality observed |
| map_copy.test | 10 | 0.000818s | 0.000814s | 0.000789s | byte equality observed |
| map_misc.test | 10 | 0.000806s | 0.000818s | 0.000803s | byte equality observed |
| map_move.test | 10 | 0.000821s | 0.000800s | 0.000814s | byte equality observed |
| map_mutate.test | 10 | 0.000792s | 0.000840s | 0.000790s | byte equality observed |
| map_tie.test | 10 | 0.000809s | 0.000804s | 0.000841s | byte equality observed |
| move.test | 10 | 0.000790s | 0.000819s | 0.000825s | byte equality observed |
| nil.test | 10 | 0.000791s | 0.000815s | 0.000825s | byte equality observed |
| none.test | 10 | 0.000802s | 0.000800s | 0.000809s | byte equality observed |
| nview.test | 10 | 0.000812s | 0.000844s | 0.000799s | byte equality observed |
| pop_back.test | 10 | 0.000822s | 0.000830s | 0.000833s | byte equality observed |
| pop_front.test | 10 | 0.000824s | 0.000813s | 0.000837s | byte equality observed |
| push_back.test | 10 | 0.000840s | 0.000829s | 0.000822s | byte equality observed |
| push_front.test | 10 | 0.000828s | 0.000819s | 0.000819s | byte equality observed |
| quick.test | 10 | 0.000362s | 0.000795s | 0.000794s | byte equality observed |
| ref_vector.test | 10 | 0.000807s | 0.000827s | 0.000800s | byte equality observed |
| remove.test | 10 | 0.000833s | 0.000842s | 0.000838s | byte equality observed |
| remove_if.test | 10 | 0.000834s | 0.000834s | 0.000838s | byte equality observed |
| repetitive_view.test | 10 | 0.000826s | 0.000805s | 0.000818s | byte equality observed |
| replace.test | 10 | 0.000821s | 0.000838s | 0.000835s | byte equality observed |
| replace_if.test | 10 | 0.000839s | 0.000842s | 0.000835s | byte equality observed |
| reverse.test | 10 | 0.000819s | 0.000872s | 0.000805s | byte equality observed |
| reverse_fold.test | 10 | 0.000792s | 0.000833s | 0.000829s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.000823s | 0.000824s | 0.000812s | byte equality observed |
| reverse_view.test | 10 | 0.000850s | 0.000834s | 0.000821s | byte equality observed |
| segmented_find.test | 10 | 0.000799s | 0.000811s | 0.000806s | byte equality observed |
| segmented_find_if.test | 10 | 0.000809s | 0.000798s | 0.000795s | byte equality observed |
| segmented_fold.test | 10 | 0.000809s | 0.000828s | 0.000864s | byte equality observed |
| segmented_for_each.test | 10 | 0.000822s | 0.000808s | 0.000811s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.000836s | 0.000822s | 0.000831s | byte equality observed |
| set.test | 10 | 0.000822s | 0.000829s | 0.000855s | byte equality observed |
| single_view.test | 10 | 0.000840s | 0.000820s | 0.000816s | byte equality observed |
| std_array.test | 10 | 0.000803s | 0.000817s | 0.000814s | byte equality observed |
| std_pair.test | 10 | 0.000813s | 0.000830s | 0.000838s | byte equality observed |
| std_tuple.test | 10 | 0.000821s | 0.000848s | 0.000808s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.000780s | 0.000833s | 0.000842s | byte equality observed |
| swap.test | 10 | 0.000821s | 0.000826s | 0.000839s | byte equality observed |
| transform.test | 10 | 0.000845s | 0.000815s | 0.000834s | byte equality observed |
| transform_view.test | 10 | 0.000859s | 0.000836s | 0.000825s | byte equality observed |
| tuple_comparison.test | 10 | 0.000807s | 0.000832s | 0.000811s | byte equality observed |
| tuple_construction.test | 10 | 0.000784s | 0.000787s | 0.000782s | byte equality observed |
| tuple_conversion.test | 10 | 0.000819s | 0.000818s | 0.000790s | byte equality observed |
| tuple_copy.test | 10 | 0.000830s | 0.000818s | 0.000807s | byte equality observed |
| tuple_element.test | 10 | 0.000804s | 0.000813s | 0.000799s | byte equality observed |
| tuple_hash.test | 10 | 0.000809s | 0.000813s | 0.000838s | byte equality observed |
| tuple_make.test | 10 | 0.000798s | 0.000822s | 0.000838s | byte equality observed |
| tuple_misc.test | 10 | 0.000787s | 0.000821s | 0.000797s | byte equality observed |
| tuple_mutate.test | 10 | 0.000834s | 0.000807s | 0.000805s | byte equality observed |
| tuple_nest.test | 10 | 0.000812s | 0.000800s | 0.000785s | byte equality observed |
| tuple_tie.test | 10 | 0.000819s | 0.000813s | 0.000785s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.000803s | 0.000822s | 0.000804s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.000809s | 0.000825s | 0.000785s | byte equality observed |
| unfused.test | 10 | 0.000817s | 0.000802s | 0.000796s | byte equality observed |
| unfused_typed.test | 10 | 0.000793s | 0.000807s | 0.000791s | byte equality observed |
| vector_comparison.test | 10 | 0.000841s | 0.000806s | 0.000794s | byte equality observed |
| vector_construction.test | 10 | 0.000811s | 0.000783s | 0.000805s | byte equality observed |
| vector_conversion.test | 10 | 0.000811s | 0.000805s | 0.000814s | byte equality observed |
| vector_copy.test | 10 | 0.000803s | 0.000786s | 0.000828s | byte equality observed |
| vector_hash.test | 10 | 0.000796s | 0.000819s | 0.000855s | byte equality observed |
| vector_iterator.test | 10 | 0.000788s | 0.000829s | 0.000809s | byte equality observed |
| vector_make.test | 10 | 0.000795s | 0.000833s | 0.000812s | byte equality observed |
| vector_misc.test | 10 | 0.000834s | 0.000824s | 0.000800s | byte equality observed |
| vector_move.test | 10 | 0.000845s | 0.000836s | 0.000815s | byte equality observed |
| vector_mutate.test | 10 | 0.000821s | 0.000832s | 0.000798s | byte equality observed |
| vector_n.test | 10 | 0.000802s | 0.000816s | 0.000817s | byte equality observed |
| vector_nest.test | 10 | 0.000801s | 0.000812s | 0.000803s | byte equality observed |
| vector_tie.test | 10 | 0.000809s | 0.000789s | 0.000795s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000822s | 0.000792s | 0.000814s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000798s | 0.000812s | 0.000805s | byte equality observed |
| vector_value_at.test | 10 | 0.000811s | 0.000824s | 0.000823s | byte equality observed |
| zip.test | 10 | 0.000776s | 0.000800s | 0.000802s | byte equality observed |
| zip2.test | 10 | 0.000807s | 0.000784s | 0.000791s | byte equality observed |
| zip_ignore.test | 10 | 0.000817s | 0.000800s | 0.000817s | byte equality observed |
| zip_view.test | 10 | 0.000796s | 0.000795s | 0.000825s | byte equality observed |
| zip_view2.test | 10 | 0.000794s | 0.000812s | 0.000834s | byte equality observed |
| zip_view_ignore.test | 10 | 0.000788s | 0.000774s | 0.000802s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46032707836).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
