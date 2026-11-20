# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.284534 | 0.617008 | 0.822137 | 0.001259 | 0.001135 | 0.001291 |
| any.test | RUN | 0.278177 | 0.584438 | 0.759698 | 0.001037 | 0.001149 | 0.001219 |
| clear.test | RUN | 0.203497 | 0.547434 | 0.629498 | 0.001264 | 0.001261 | 0.001292 |
| copy.test | RUN | 0.173168 | 0.403469 | 0.515753 | 0.001416 | 0.001226 | 0.001212 |
| count.test | RUN | 0.193545 | 0.453261 | 0.577153 | 0.001463 | 0.001343 | 0.001320 |
| count_if.test | RUN | 0.177968 | 0.421157 | 0.522873 | 0.001353 | 0.001332 | 0.001240 |
| erase.test | RUN | 0.259577 | 0.762195 | 0.870885 | 0.001455 | 0.001214 | 0.001172 |
| erase_key.test | RUN | 0.248945 | 0.750188 | 0.797264 | 0.001356 | 0.001193 | 0.001373 |
| filter.test | RUN | 0.225995 | 0.628534 | 0.739019 | 0.001390 | 0.001324 | 0.001332 |
| filter_if.test | RUN | 0.253048 | 0.737529 | 0.874112 | 0.001220 | 0.001284 | 0.001314 |
| find.test | RUN | 0.213292 | 0.516890 | 0.649455 | 0.001174 | 0.001213 | 0.001225 |
| find_if.test | RUN | 0.201942 | 0.456048 | 0.611488 | 0.001292 | 0.001269 | 0.001317 |
| fold.test | RUN | 0.226767 | 0.578121 | 0.739469 | 0.001442 | 0.001399 | 0.001398 |
| for_each.test | RUN | 0.204519 | 0.529811 | 0.639557 | 0.001182 | 0.001387 | 0.001380 |
| insert.test | RUN | 0.303395 | 0.940774 | 1.064684 | 0.001394 | 0.001290 | 0.001255 |
| insert_range.test | RUN | 0.303260 | 0.941450 | 1.059954 | 0.001380 | 0.001349 | 0.001165 |
| iter_fold.test | RUN | 0.346029 | 0.882501 | 1.237812 | 0.001454 | 0.001361 | 0.001474 |
| move.test | RUN | 0.181048 | 0.420448 | 0.528077 | 0.001368 | 0.001140 | 0.001329 |
| none.test | RUN | 0.287575 | 0.603088 | 0.798944 | 0.001170 | 0.001202 | 0.001369 |
| pop_back.test | RUN | 0.283217 | 0.819137 | 0.927305 | 0.001313 | 0.001269 | 0.001282 |
| pop_front.test | RUN | 0.243266 | 0.657165 | 0.759583 | 0.001304 | 0.000916 | 0.001252 |
| push_back.test | RUN | 0.296252 | 0.953549 | 1.035307 | 0.001316 | 0.001453 | 0.001324 |
| push_front.test | RUN | 0.264228 | 0.785048 | 0.879930 | 0.001473 | 0.001246 | 0.001155 |
| remove.test | RUN | 0.291942 | 0.885270 | 1.048158 | 0.001176 | 0.001193 | 0.001278 |
| remove_if.test | RUN | 0.267369 | 0.738951 | 0.883479 | 0.001349 | 0.001248 | 0.001217 |
| replace.test | RUN | 0.249320 | 0.733697 | 0.805236 | 0.001492 | 0.001331 | 0.001325 |
| replace_if.test | RUN | 0.252129 | 0.726823 | 0.803653 | 0.001406 | 0.001323 | 0.001215 |
| reverse_fold.test | RUN | 0.384272 | 0.975502 | 1.379572 | 0.001264 | 0.001338 | 0.001234 |
| reverse_iter_fold.test | RUN | 0.405020 | 1.011391 | 1.437456 | 0.001568 | 0.001124 | 0.001166 |
| reverse.test | RUN | 0.248939 | 0.747525 | 0.814773 | 0.001147 | 0.001398 | 0.001207 |
| segmented_for_each.test | RUN | 0.429219 | 1.401088 | 1.685115 | 0.001193 | 0.001379 | 0.001127 |
| segmented_find.test | RUN | 0.267739 | 0.721524 | 0.940523 | 0.001087 | 0.001393 | 0.001239 |
| segmented_find_if.test | RUN | 0.260172 | 0.717504 | 0.925044 | 0.001304 | 0.001114 | 0.001197 |
| segmented_fold.test | RUN | 0.324519 | 0.976157 | 1.199392 | 0.001458 | 0.001241 | 0.001198 |
| transform.test | RUN | 0.260576 | 0.782032 | 0.877918 | 0.001338 | 0.001368 | 0.001380 |
| join.test | RUN | 0.192995 | 0.470419 | 0.593741 | 0.001310 | 0.001320 | 0.001299 |
| zip.test | RUN | 0.345034 | 0.881082 | 1.148791 | 0.001387 | 0.001188 | 0.001213 |
| zip2.test | RUN | 0.324774 | 0.859315 | 1.091996 | 0.001321 | 0.001252 | 0.001245 |
| zip_ignore.test | RUN | 0.249081 | 0.574863 | 0.732977 | 0.001405 | 0.001220 | 0.001131 |
| flatten.test | RUN | 0.230729 | 0.649490 | 0.757073 | 0.001160 | 0.001262 | 0.001226 |
| ticket-5490.test | COMPILE | 0.122772 | 0.274511 | 0.330854 | — | — | — |
| as_deque.test | RUN | 0.227702 | 0.597522 | 0.781470 | 0.001223 | 0.001341 | 0.001264 |
| as_list.test | RUN | 0.264768 | 0.770759 | 0.858111 | 0.001238 | 0.001434 | 0.001106 |
| as_map.test | RUN | 0.258912 | 0.750628 | 0.869153 | 0.001224 | 0.001225 | 0.001408 |
| as_map_assoc.test | RUN | 0.253968 | 0.687453 | 0.808692 | 0.001168 | 0.001286 | 0.001236 |
| as_set.test | RUN | 0.295257 | 0.880063 | 1.021267 | 0.001530 | 0.001214 | 0.001422 |
| as_vector.test | RUN | 0.269017 | 0.785865 | 0.894843 | 0.001266 | 0.001209 | 0.001262 |
| boost_tuple.test | RUN | 0.267981 | 0.773725 | 0.859495 | 0.001150 | 0.001232 | 0.001109 |
| boost_tuple_iterator.test | RUN | 0.175945 | 0.444341 | 0.516141 | 0.001249 | 0.001274 | 0.001316 |
| cons.test | RUN | 0.338393 | 0.862948 | 1.041420 | 0.001267 | 0.001227 | 0.001201 |
| convert_boost_tuple.test | RUN | 0.211213 | 0.662155 | 0.681742 | 0.001403 | 0.001296 | 0.001402 |
| convert_deque.test | RUN | 0.212408 | 0.666598 | 0.670247 | 0.001510 | 0.001220 | 0.001302 |
| convert_list.test | RUN | 0.211717 | 0.674926 | 0.679996 | 0.000855 | 0.001160 | 0.001176 |
| convert_std_pair.test | RUN | 0.218424 | 0.678257 | 0.698639 | 0.001272 | 0.001273 | 0.001191 |
| convert_std_tuple.test | RUN | 0.207686 | 0.653432 | 0.681016 | 0.001156 | 0.001359 | 0.001144 |
| convert_vector.test | RUN | 0.207311 | 0.659369 | 0.673159 | 0.001139 | 0.001254 | 0.001014 |
| filter_view.test | RUN | 0.246882 | 0.700554 | 0.818420 | 0.001130 | 0.001241 | 0.001371 |
| hash.test | RUN | 0.247695 | 0.630813 | 0.767709 | 0.001448 | 0.001293 | 0.001301 |
| io.test | RUN | 0.267302 | 0.913252 | 0.929752 | 0.001313 | 0.001414 | 0.001589 |
| iterator_range.test | RUN | 0.238164 | 0.662197 | 0.767729 | 0.001337 | 0.001248 | 0.001262 |
| joint_view.test | RUN | 0.320898 | 1.123490 | 1.183103 | 0.001298 | 0.001306 | 0.001160 |
| list_comparison.test | RUN | 0.181680 | 0.452599 | 0.577339 | 0.001223 | 0.001179 | 0.000982 |
| list_construction.test | RUN | 0.186316 | 0.444850 | 0.531085 | 0.001336 | 0.001181 | 0.001143 |
| list_copy.test | RUN | 0.276871 | 0.810334 | 0.947643 | 0.001257 | 0.001117 | 0.001386 |
| list_iterator.test | RUN | 0.181942 | 0.452003 | 0.518456 | 0.001304 | 0.001070 | 0.001321 |
| list_hash.test | RUN | 0.245338 | 0.914992 | 0.768083 | 0.001300 | 0.001160 | 0.001299 |
| list_make.test | RUN | 0.193372 | 0.488491 | 0.588927 | 0.001300 | 0.001189 | 0.001238 |
| list_misc.test | RUN | 0.246969 | 0.575076 | 0.714451 | 0.001099 | 0.001075 | 0.001214 |
| list_mutate.test | RUN | 0.175331 | 0.380477 | 0.475533 | 0.001309 | 0.001107 | 0.001356 |
| list_nest.test | RUN | 0.344392 | 1.107474 | 1.366147 | 0.001206 | 0.001184 | 0.001125 |
| list_tie.test | RUN | 0.176956 | 0.443089 | 0.539389 | 0.001366 | 0.001206 | 0.001388 |
| list_value_at.test | RUN | 0.172323 | 0.398899 | 0.505096 | 0.001259 | 0.001052 | 0.001315 |
| deque_comparison.test | RUN | 0.181857 | 0.460028 | 0.587316 | 0.001356 | 0.001249 | 0.001194 |
| deque_construction.test | RUN | 0.187056 | 0.431433 | 0.544405 | 0.001377 | 0.001349 | 0.001194 |
| deque_copy.test | RUN | 0.266783 | 0.748424 | 0.877548 | 0.001209 | 0.001189 | 0.001224 |
| deque_iterator.test | RUN | 0.176607 | 0.457588 | 0.542315 | 0.001499 | 0.001190 | 0.001337 |
| deque_hash.test | RUN | 0.248763 | 0.876676 | 0.777724 | 0.001146 | 0.001208 | 0.001230 |
| deque_is_constructible.test | COMPILE | 0.101532 | 0.198850 | 0.240077 | — | — | — |
| deque_make.test | RUN | 0.183511 | 0.457254 | 0.581518 | 0.001002 | 0.001197 | 0.001283 |
| deque_misc.test | RUN | 0.240066 | 0.579168 | 0.698669 | 0.001098 | 0.001276 | 0.001215 |
| deque_move.test | RUN | 0.186614 | 0.482078 | 0.548222 | 0.001290 | 0.001122 | 0.001154 |
| deque_mutate.test | RUN | 0.165281 | 0.380654 | 0.478952 | 0.001210 | 0.001183 | 0.001145 |
| deque_nest.test | RUN | 0.511897 | 1.787546 | 2.150534 | 0.001332 | 0.001199 | 0.001237 |
| deque_tie.test | RUN | 0.176907 | 0.408929 | 0.504565 | 0.001317 | 0.001090 | 0.001276 |
| deque_value_at.test | RUN | 0.168760 | 0.398743 | 0.504615 | 0.001113 | 0.001094 | 0.001204 |
| front_extended_deque.test | RUN | 0.248339 | 0.599061 | 0.744013 | 0.001248 | 0.001202 | 0.001357 |
| back_extended_deque.test | RUN | 0.246447 | 0.598563 | 0.775723 | 0.001339 | 0.001169 | 0.001340 |
| make_list.test | RUN | 0.195755 | 0.484168 | 0.585266 | 0.001191 | 0.001426 | 0.001371 |
| make_vector.test | RUN | 0.187234 | 0.488529 | 0.564657 | 0.001178 | 0.001172 | 0.001328 |
| map.test | RUN | 0.249402 | 0.756438 | 0.840680 | 0.001459 | 0.001184 | 0.001254 |
| map_comparison.test | RUN | 0.185276 | 0.477923 | 0.562745 | 0.001274 | 0.001405 | 0.001375 |
| map_construction.test | RUN | 0.189010 | 0.447944 | 0.555031 | 0.001217 | 0.001200 | 0.001127 |
| map_copy.test | RUN | 0.227246 | 0.576203 | 0.693612 | 0.001198 | 0.001316 | 0.001171 |
| map_misc.test | RUN | 0.235190 | 0.580435 | 0.687396 | 0.001116 | 0.001327 | 0.001304 |
| map_move.test | RUN | 0.186026 | 0.488594 | 0.560923 | 0.001326 | 0.001288 | 0.000804 |
| map_mutate.test | RUN | 0.165778 | 0.394947 | 0.478500 | 0.001135 | 0.001172 | 0.001239 |
| map_tie.test | RUN | 0.175564 | 0.387577 | 0.495489 | 0.001101 | 0.001234 | 0.001320 |
| nil.test | RUN | 0.116512 | 0.266097 | 0.346620 | 0.001487 | 0.001130 | 0.001137 |
| nview.test | RUN | 0.238040 | 0.578253 | 0.715458 | 0.001372 | 0.001232 | 0.001260 |
| reverse_view.test | RUN | 0.311884 | 0.965870 | 1.056260 | 0.001451 | 0.001371 | 0.001333 |
| segmented_iterator_range.test | RUN | 0.365420 | 1.121885 | 1.348635 | 0.001325 | 0.001257 | 0.001329 |
| set.test | RUN | 0.235248 | 0.654718 | 0.745869 | 0.001284 | 0.001122 | 0.001212 |
| single_view.test | RUN | 0.208321 | 0.600613 | 0.687962 | 0.001370 | 0.001384 | 0.001272 |
| std_pair.test | RUN | 0.273967 | 0.739005 | 0.865129 | 0.001244 | 0.001142 | 0.001292 |
| boost_array.test | RUN | 0.225571 | 0.509544 | 0.638579 | 0.001305 | 0.001272 | 0.001414 |
| array.test | RUN | 0.225659 | 0.503480 | 0.629524 | 0.001361 | 0.001170 | 0.001370 |
| std_array.test | RUN | 0.222930 | 0.514413 | 0.640395 | 0.001276 | 0.001242 | 0.001198 |
| tuple_comparison.test | RUN | 0.206619 | 0.471511 | 0.596140 | 0.001316 | 0.001278 | 0.001429 |
| tuple_construction.test | RUN | 0.205906 | 0.471101 | 0.601147 | 0.001267 | 0.001246 | 0.001181 |
| tuple_conversion.test | RUN | 0.458149 | 1.483670 | 2.018758 | 0.001180 | 0.001196 | 0.001222 |
| tuple_copy.test | RUN | 0.290590 | 0.873119 | 1.039003 | 0.001388 | 0.001239 | 0.001252 |
| tuple_element.test | RUN | 0.183075 | 0.433335 | 0.535368 | 0.001189 | 0.001308 | 0.001153 |
| tuple_make.test | RUN | 0.200402 | 0.503036 | 0.587326 | 0.001131 | 0.001198 | 0.001030 |
| tuple_misc.test | RUN | 0.255113 | 0.613170 | 0.739995 | 0.001213 | 0.001160 | 0.001276 |
| tuple_mutate.test | RUN | 0.177017 | 0.404049 | 0.513034 | 0.001314 | 0.001288 | 0.001292 |
| tuple_nest.test | RUN | 0.760345 | 3.097615 | 3.832440 | 0.001257 | 0.001320 | 0.001373 |
| tuple_hash.test | RUN | 0.257730 | 0.911605 | 0.779860 | 0.001202 | 0.001228 | 0.000940 |
| tuple_tie.test | RUN | 0.191785 | 0.449150 | 0.576899 | 0.001289 | 0.001101 | 0.001258 |
| tuple_traits__maybe_variadic.test | RUN | 0.202838 | 0.568213 | 0.603223 | 0.001256 | 0.001154 | 0.001078 |
| tuple_traits__no_variadic.test | RUN | 0.233036 | 0.573380 | 0.663880 | 0.001312 | 0.001331 | 0.001307 |
| transform_view.test | RUN | 0.304672 | 0.944686 | 1.055270 | 0.000918 | 0.001360 | 0.001256 |
| identity_view.test | RUN | 0.291158 | 0.863009 | 0.990429 | 0.001176 | 0.001156 | 0.001259 |
| vector_comparison.test | RUN | 0.181790 | 0.470412 | 0.623284 | 0.001287 | 0.001131 | 0.001380 |
| vector_construction.test | RUN | 0.188440 | 0.432107 | 0.542358 | 0.001102 | 0.001371 | 0.001355 |
| vector_conversion.test | RUN | 0.535692 | 1.987889 | 2.511702 | 0.001258 | 0.001276 | 0.001322 |
| vector_copy.test | RUN | 0.277811 | 0.858802 | 1.045366 | 0.001116 | 0.001070 | 0.001265 |
| vector_iterator.test | RUN | 0.177599 | 0.466217 | 0.541754 | 0.001553 | 0.001152 | 0.001280 |
| vector_make.test | RUN | 0.190406 | 0.485181 | 0.590045 | 0.001196 | 0.001266 | 0.001347 |
| vector_misc.test | RUN | 0.244164 | 0.587670 | 0.743847 | 0.001304 | 0.001168 | 0.001245 |
| vector_move.test | RUN | 0.184445 | 0.491266 | 0.556802 | 0.001532 | 0.001295 | 0.001312 |
| vector_mutate.test | RUN | 0.167647 | 0.390835 | 0.486543 | 0.001195 | 0.001220 | 0.001360 |
| vector_n.test | RUN | 0.213377 | 0.489486 | 0.638888 | 0.001291 | 0.001256 | 0.001261 |
| vector_nest.test | RUN | 0.775050 | 3.334382 | 3.805480 | 0.001338 | 0.001140 | 0.001333 |
| vector_hash.test | RUN | 0.247984 | 0.892967 | 0.763135 | 0.001242 | 0.001225 | 0.001216 |
| vector_tie.test | RUN | 0.178511 | 0.438110 | 0.527479 | 0.001298 | 0.001324 | 0.001276 |
| vector_traits__maybe_variadic.test | RUN | 0.193712 | 0.487844 | 0.545781 | 0.001410 | 0.001161 | 0.001370 |
| vector_traits__no_variadic.test | RUN | 0.207274 | 0.549652 | 0.574749 | 0.000962 | 0.001164 | 0.001417 |
| vector_value_at.test | RUN | 0.177522 | 0.392046 | 0.514024 | 0.001232 | 0.001223 | 0.001174 |
| zip_view.test | RUN | 0.357645 | 0.951377 | 1.265483 | 0.001340 | 0.001226 | 0.001221 |
| zip_view2.test | RUN | 0.286230 | 0.763176 | 1.006495 | 0.001351 | 0.001237 | 0.001319 |
| zip_view_ignore.test | RUN | 0.276390 | 0.690554 | 0.867454 | 0.001201 | 0.001136 | 0.001113 |
| repetitive_view.test | RUN | 0.465482 | 1.263115 | 1.685155 | 0.001499 | 0.001190 | 0.001312 |
| deduce_sequence.test | RUN | 0.218690 | 0.530940 | 0.726406 | 0.001162 | 0.001246 | 0.001145 |
| adapt_adt_named.test | RUN | 0.268610 | 0.763260 | 0.829979 | 0.001123 | 0.001174 | 0.001163 |
| adapt_adt_named_empty.test | RUN | 0.237802 | 0.615525 | 0.704238 | 0.001257 | 0.001220 | 0.001282 |
| adapt_adt.test | RUN | 0.296617 | 0.989298 | 1.026700 | 0.001039 | 0.001285 | 0.001404 |
| adapt_adt_empty.test | RUN | 0.229628 | 0.621993 | 0.711364 | 0.001223 | 0.001212 | 0.001300 |
| adapt_assoc_adt_named.test | RUN | 0.297205 | 0.785872 | 0.921446 | 0.001201 | 0.001249 | 0.001380 |
| adapt_assoc_adt_named_empty.test | RUN | 0.236978 | 0.612764 | 0.695590 | 0.001395 | 0.001009 | 0.001362 |
| adapt_assoc_adt.test | RUN | 0.306085 | 0.819081 | 0.966029 | 0.001066 | 0.001320 | 0.001096 |
| adapt_assoc_adt_empty.test | RUN | 0.227926 | 0.612236 | 0.702234 | 0.001229 | 0.001184 | 0.001151 |
| adapt_assoc_struct_named.test | RUN | 0.287943 | 0.780439 | 0.914035 | 0.001170 | 0.001192 | 0.001154 |
| adapt_assoc_struct_named_empty.test | RUN | 0.222626 | 0.616306 | 0.699210 | 0.001182 | 0.001241 | 0.001320 |
| adapt_assoc_struct.test | RUN | 0.263469 | 0.735307 | 0.859105 | 0.001300 | 0.001220 | 0.001332 |
| adapt_assoc_struct_empty.test | RUN | 0.226402 | 0.607579 | 0.688123 | 0.001424 | 0.001282 | 0.001420 |
| adapt_assoc_tpl_adt.test | RUN | 0.311324 | 0.847069 | 0.996245 | 0.001118 | 0.001254 | 0.001143 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.230737 | 0.615844 | 0.694636 | 0.001207 | 0.001201 | 0.001215 |
| adapt_assoc_tpl_struct.test | RUN | 0.256411 | 0.714554 | 0.824150 | 0.001342 | 0.000977 | 0.001142 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.227565 | 0.621269 | 0.698317 | 0.001181 | 0.001176 | 0.001032 |
| adapt_struct_named.test | RUN | 0.271311 | 0.750122 | 0.828418 | 0.001197 | 0.001157 | 0.001283 |
| adapt_struct_named_empty.test | RUN | 0.232923 | 0.620477 | 0.697747 | 0.001150 | 0.001404 | 0.001170 |
| adapt_struct.test | RUN | 0.284171 | 0.851950 | 0.956702 | 0.001215 | 0.001264 | 0.001298 |
| adapt_struct_empty.test | RUN | 0.236804 | 0.619680 | 0.692864 | 0.001321 | 0.001254 | 0.001292 |
| adapt_tpl_adt.test | RUN | 0.293390 | 0.987986 | 1.010717 | 0.001181 | 0.001238 | 0.001156 |
| adapt_tpl_adt_empty.test | RUN | 0.234184 | 0.620925 | 0.699577 | 0.001237 | 0.001293 | 0.001342 |
| adapt_tpl_struct.test | RUN | 0.242716 | 0.680313 | 0.761563 | 0.001345 | 0.001012 | 0.001169 |
| adapt_tpl_struct_empty.test | RUN | 0.227829 | 0.621588 | 0.716236 | 0.001265 | 0.001218 | 0.001236 |
| adt_attribute_proxy.test | RUN | 0.256897 | 0.596029 | 0.734136 | 0.001268 | 0.001289 | 0.001395 |
| define_struct.test | RUN | 0.311046 | 0.832413 | 0.983053 | 0.001533 | 0.001251 | 0.001222 |
| define_struct_empty.test | RUN | 0.277087 | 0.681492 | 0.802080 | 0.001154 | 0.001105 | 0.001271 |
| define_struct_move.test | RUN | 0.177279 | 0.389724 | 0.474832 | 0.001313 | 0.001085 | 0.001260 |
| define_struct_inline.test | RUN | 0.337042 | 1.006501 | 1.123160 | 0.001484 | 0.001271 | 0.001396 |
| define_struct_inline_empty.test | RUN | 0.272387 | 0.684240 | 0.810825 | 0.001268 | 0.001309 | 0.001312 |
| define_struct_inline_move.test | RUN | 0.180379 | 0.395790 | 0.476776 | 0.001326 | 0.001229 | 0.001287 |
| define_assoc_struct.test | RUN | 0.305698 | 0.796063 | 0.948195 | 0.001260 | 0.001258 | 0.001197 |
| define_assoc_struct_empty.test | RUN | 0.271429 | 0.690549 | 0.816164 | 0.001217 | 0.001246 | 0.001192 |
| define_assoc_struct_move.test | RUN | 0.179914 | 0.383758 | 0.486417 | 0.001519 | 0.001148 | 0.001222 |
| define_tpl_struct.test | RUN | 0.304085 | 0.794912 | 0.933261 | 0.001216 | 0.001147 | 0.001184 |
| define_tpl_struct_empty.test | RUN | 0.268576 | 0.702937 | 0.811953 | 0.001341 | 0.001294 | 0.001166 |
| define_tpl_struct_move.test | RUN | 0.169733 | 0.378336 | 0.482884 | 0.001213 | 0.001092 | 0.001132 |
| define_tpl_struct_inline.test | RUN | 0.324709 | 0.935601 | 1.041116 | 0.001355 | 0.001124 | 0.001161 |
| define_tpl_struct_inline_empty.test | RUN | 0.267878 | 0.690402 | 0.811283 | 0.001567 | 0.001283 | 0.001370 |
| define_tpl_struct_inline_move.test | RUN | 0.176086 | 0.387840 | 0.481391 | 0.001181 | 0.001306 | 0.001171 |
| define_assoc_tpl_struct.test | RUN | 0.296850 | 0.811089 | 0.967604 | 0.001212 | 0.001264 | 0.001153 |
| define_assoc_tpl_struct_empty.test | RUN | 0.268003 | 0.686752 | 0.818343 | 0.001319 | 0.000884 | 0.001364 |
| define_assoc_tpl_struct_move.test | RUN | 0.169085 | 0.391062 | 0.491576 | 0.001244 | 0.001307 | 0.001268 |
| std_tuple.test | RUN | 0.182627 | 0.442518 | 0.540317 | 0.001348 | 0.001176 | 0.001215 |
| std_tuple_iterator.test | RUN | 0.182718 | 0.456781 | 0.552670 | 0.001241 | 0.001241 | 0.001396 |
| ref_vector.test | RUN | 0.209970 | 0.463562 | 0.585681 | 0.001159 | 0.001357 | 0.001281 |
| flatten_view.test | RUN | 0.213921 | 0.574025 | 0.699375 | 0.001117 | 0.001244 | 0.001296 |
| github-159.test | COMPILE | 0.099243 | 0.210116 | 0.259593 | — | — | — |
| github-176.test | RUN | 0.203704 | 0.525907 | 0.589857 | 0.001147 | 0.001193 | 0.001201 |
| size.test | COMPILE | 0.170600 | 0.350993 | 0.450995 | — | — | — |
| fused.test | RUN | 0.234757 | 0.541755 | 0.681160 | 0.001352 | 0.001295 | 0.001200 |
| fused_function_object.test | RUN | 0.172242 | 0.408887 | 0.508686 | 0.001360 | 0.001212 | 0.001400 |
| fused_procedure.test | RUN | 0.226715 | 0.526776 | 0.653144 | 0.001178 | 0.001224 | 0.001136 |
| unfused.test | RUN | 0.178936 | 0.425259 | 0.531550 | 0.001159 | 0.001175 | 0.001138 |
| unfused_typed.test | RUN | 0.191742 | 0.459829 | 0.548490 | 0.001140 | 0.001137 | 0.001382 |
| make_fused.test | RUN | 0.235266 | 0.548279 | 0.670436 | 0.001116 | 0.001150 | 0.001152 |
| make_fused_function_object.test | RUN | 0.175699 | 0.409120 | 0.517998 | 0.001014 | 0.001183 | 0.001177 |
| make_fused_procedure.test | RUN | 0.234978 | 0.524369 | 0.647767 | 0.001175 | 0.001153 | 0.001278 |
| make_unfused.test | RUN | 0.177284 | 0.413100 | 0.520153 | 0.001320 | 0.001216 | 0.001228 |
| invoke.test | RUN | 0.464506 | 1.522483 | 1.837612 | 0.001229 | 0.001253 | 0.001314 |
| invoke_function_object.test | RUN | 0.214052 | 0.539443 | 0.685687 | 0.001354 | 0.001346 | 0.001358 |
| invoke_procedure.test | RUN | 0.368431 | 1.131679 | 1.342555 | 0.001303 | 0.001290 | 0.001415 |
| swap.test | RUN | 0.278485 | 0.691643 | 0.850976 | 0.001101 | 0.001104 | 0.001269 |
| is_sequence.test | COMPILE | 0.045299 | 0.094783 | 0.106263 | — | — | — |
| is_view.test | COMPILE | 0.046552 | 0.093213 | 0.105747 | — | — | — |
| pair_deque.test | COMPILE | 0.100697 | 0.217792 | 0.262675 | — | — | — |
| pair_list.test | COMPILE | 0.092037 | 0.214090 | 0.253339 | — | — | — |
| pair_map.test | COMPILE | 0.101833 | 0.223513 | 0.273560 | — | — | — |
| pair_set.test | COMPILE | 0.099986 | 0.221632 | 0.264984 | — | — | — |
| pair_vector.test | COMPILE | 0.102718 | 0.218042 | 0.255403 | — | — | — |
| pair_nest.test | COMPILE | 0.038880 | 0.088883 | 0.101295 | — | — | — |
| index_sequence.test | COMPILE | 0.034390 | 0.058594 | 0.075572 | — | — | — |
| and.test | COMPILE | 0.026114 | 0.044568 | 0.054854 | — | — | — |
| tag_of.test | COMPILE | 0.044775 | 0.090120 | 0.101889 | — | — | — |
| unused.test | COMPILE | 0.023357 | 0.058614 | 0.060751 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.044071 | 0.091269 | 0.101943 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.028376 | 0.085606 | 0.089710 | — | — | — |
| quick.test | RUN | 0.135901 | 0.301991 | 0.332851 | 0.000393 | 0.000869 | 0.000873 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.995× | 0.999×, 0.991× | 0.999× |
| clang | 1.001× | 0.998×, 1.003× | 1.005× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44656576225).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.000824s | 0.000833s | 0.000829s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.000830s | 0.000811s | 0.000809s | byte equality observed |
| adapt_adt_named.test | 10 | 0.000852s | 0.000841s | 0.000825s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.000855s | 0.000828s | 0.000827s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.000823s | 0.000835s | 0.000863s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.000808s | 0.000833s | 0.000860s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.000836s | 0.000857s | 0.000863s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.000857s | 0.000842s | 0.000854s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.000834s | 0.000841s | 0.000848s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.000858s | 0.000840s | 0.000842s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.000860s | 0.000804s | 0.000818s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.000828s | 0.000824s | 0.000827s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.000845s | 0.000847s | 0.000842s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.000863s | 0.000853s | 0.000863s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.000859s | 0.000849s | 0.000861s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.000845s | 0.000838s | 0.000831s | byte equality observed |
| adapt_struct.test | 10 | 0.000848s | 0.000868s | 0.000838s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.000840s | 0.000812s | 0.000843s | byte equality observed |
| adapt_struct_named.test | 10 | 0.000818s | 0.000814s | 0.000833s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.000837s | 0.000797s | 0.000845s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.000841s | 0.000834s | 0.000807s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.000830s | 0.000798s | 0.000812s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.000842s | 0.000818s | 0.000808s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.000838s | 0.000844s | 0.000838s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.000821s | 0.000815s | 0.000840s | byte equality observed |
| all.test | 10 | 0.000797s | 0.000801s | 0.000837s | byte equality observed |
| any.test | 10 | 0.000805s | 0.000843s | 0.000807s | byte equality observed |
| array.test | 10 | 0.000798s | 0.000852s | 0.000782s | byte equality observed |
| as_deque.test | 10 | 0.000810s | 0.000805s | 0.000784s | byte equality observed |
| as_list.test | 10 | 0.000829s | 0.000854s | 0.000810s | byte equality observed |
| as_map.test | 10 | 0.000831s | 0.000857s | 0.000838s | byte equality observed |
| as_map_assoc.test | 10 | 0.000825s | 0.000845s | 0.000854s | byte equality observed |
| as_set.test | 10 | 0.000847s | 0.000840s | 0.000827s | byte equality observed |
| as_vector.test | 10 | 0.000844s | 0.000827s | 0.000806s | byte equality observed |
| back_extended_deque.test | 10 | 0.000818s | 0.000789s | 0.000823s | byte equality observed |
| boost_array.test | 10 | 0.000816s | 0.000820s | 0.000798s | byte equality observed |
| boost_tuple.test | 10 | 0.000841s | 0.000829s | 0.000849s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.000825s | 0.000816s | 0.000819s | byte equality observed |
| clear.test | 10 | 0.000837s | 0.000859s | 0.000813s | byte equality observed |
| cons.test | 10 | 0.000853s | 0.000839s | 0.000827s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.000814s | 0.000812s | 0.000797s | byte equality observed |
| convert_deque.test | 10 | 0.000841s | 0.000806s | 0.000801s | byte equality observed |
| convert_list.test | 10 | 0.000829s | 0.000801s | 0.000809s | byte equality observed |
| convert_std_pair.test | 10 | 0.000831s | 0.000814s | 0.000808s | byte equality observed |
| convert_std_tuple.test | 10 | 0.000822s | 0.000827s | 0.000821s | byte equality observed |
| convert_vector.test | 10 | 0.000847s | 0.000845s | 0.000846s | byte equality observed |
| copy.test | 10 | 0.000826s | 0.000817s | 0.000813s | byte equality observed |
| count.test | 10 | 0.000823s | 0.000826s | 0.000809s | byte equality observed |
| count_if.test | 10 | 0.000838s | 0.000832s | 0.000813s | byte equality observed |
| deduce_sequence.test | 10 | 0.000819s | 0.000831s | 0.000855s | byte equality observed |
| define_assoc_struct.test | 10 | 0.000841s | 0.000845s | 0.000833s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.000851s | 0.000823s | 0.000845s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.000826s | 0.000820s | 0.000828s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.000853s | 0.000817s | 0.000832s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.000858s | 0.000823s | 0.000840s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000848s | 0.000819s | 0.000837s | byte equality observed |
| define_struct.test | 10 | 0.000833s | 0.000842s | 0.000834s | byte equality observed |
| define_struct_empty.test | 10 | 0.000838s | 0.000852s | 0.000830s | byte equality observed |
| define_struct_inline.test | 10 | 0.000853s | 0.000861s | 0.000846s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.000862s | 0.000833s | 0.000848s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000833s | 0.000802s | 0.000829s | byte equality observed |
| define_struct_move.test | 10 | 0.000807s | 0.000812s | 0.000832s | byte equality observed |
| define_tpl_struct.test | 10 | 0.000843s | 0.000840s | 0.000843s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.000843s | 0.000852s | 0.000826s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.000828s | 0.000836s | 0.000845s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.000837s | 0.000852s | 0.000821s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000816s | 0.000804s | 0.000830s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000799s | 0.000801s | 0.000845s | byte equality observed |
| deque_comparison.test | 10 | 0.000836s | 0.000817s | 0.000849s | byte equality observed |
| deque_construction.test | 10 | 0.000848s | 0.000823s | 0.000852s | byte equality observed |
| deque_copy.test | 10 | 0.000841s | 0.000802s | 0.000798s | byte equality observed |
| deque_hash.test | 10 | 0.000830s | 0.000828s | 0.000809s | byte equality observed |
| deque_iterator.test | 10 | 0.000808s | 0.000815s | 0.000823s | byte equality observed |
| deque_make.test | 10 | 0.000834s | 0.000839s | 0.000813s | byte equality observed |
| deque_misc.test | 10 | 0.000800s | 0.000810s | 0.000818s | byte equality observed |
| deque_move.test | 10 | 0.000828s | 0.000813s | 0.000821s | byte equality observed |
| deque_mutate.test | 10 | 0.000833s | 0.000801s | 0.000783s | byte equality observed |
| deque_nest.test | 10 | 0.000826s | 0.000806s | 0.000792s | byte equality observed |
| deque_tie.test | 10 | 0.000828s | 0.000811s | 0.000807s | byte equality observed |
| deque_value_at.test | 10 | 0.000812s | 0.000836s | 0.000806s | byte equality observed |
| erase.test | 10 | 0.000841s | 0.000841s | 0.000825s | byte equality observed |
| erase_key.test | 10 | 0.000841s | 0.000865s | 0.000833s | byte equality observed |
| filter.test | 10 | 0.000834s | 0.000835s | 0.000850s | byte equality observed |
| filter_if.test | 10 | 0.000855s | 0.000848s | 0.000819s | byte equality observed |
| filter_view.test | 10 | 0.000842s | 0.000885s | 0.000842s | byte equality observed |
| find.test | 10 | 0.000847s | 0.000860s | 0.000858s | byte equality observed |
| find_if.test | 10 | 0.000839s | 0.000846s | 0.000833s | byte equality observed |
| flatten.test | 10 | 0.000850s | 0.000793s | 0.000840s | byte equality observed |
| flatten_view.test | 10 | 0.000830s | 0.000840s | 0.000831s | byte equality observed |
| fold.test | 10 | 0.000845s | 0.000832s | 0.000857s | byte equality observed |
| for_each.test | 10 | 0.000845s | 0.000830s | 0.000860s | byte equality observed |
| front_extended_deque.test | 10 | 0.000826s | 0.000826s | 0.000830s | byte equality observed |
| fused.test | 10 | 0.000827s | 0.000817s | 0.000812s | byte equality observed |
| fused_function_object.test | 10 | 0.000809s | 0.000827s | 0.000850s | byte equality observed |
| fused_procedure.test | 10 | 0.000800s | 0.000789s | 0.000833s | byte equality observed |
| github-176.test | 10 | 0.000794s | 0.000827s | 0.000830s | byte equality observed |
| hash.test | 10 | 0.000808s | 0.000842s | 0.000830s | byte equality observed |
| identity_view.test | 10 | 0.000831s | 0.000854s | 0.000833s | byte equality observed |
| insert.test | 10 | 0.000837s | 0.000885s | 0.000862s | byte equality observed |
| insert_range.test | 10 | 0.000824s | 0.000854s | 0.000861s | byte equality observed |
| invoke.test | 10 | 0.000817s | 0.000806s | 0.000827s | byte equality observed |
| invoke_function_object.test | 10 | 0.000834s | 0.000830s | 0.000799s | byte equality observed |
| invoke_procedure.test | 10 | 0.000840s | 0.000836s | 0.000806s | byte equality observed |
| io.test | 10 | 0.000937s | 0.000916s | 0.000892s | byte equality observed |
| iter_fold.test | 10 | 0.000829s | 0.000808s | 0.000817s | byte equality observed |
| iterator_range.test | 10 | 0.000843s | 0.000845s | 0.000832s | byte equality observed |
| join.test | 10 | 0.000799s | 0.000826s | 0.000801s | byte equality observed |
| joint_view.test | 10 | 0.000830s | 0.000835s | 0.000848s | byte equality observed |
| list_comparison.test | 10 | 0.000819s | 0.000803s | 0.000794s | byte equality observed |
| list_construction.test | 10 | 0.000830s | 0.000794s | 0.000797s | byte equality observed |
| list_copy.test | 10 | 0.000837s | 0.000816s | 0.000839s | byte equality observed |
| list_hash.test | 10 | 0.000833s | 0.000814s | 0.000849s | byte equality observed |
| list_iterator.test | 10 | 0.000815s | 0.000839s | 0.000831s | byte equality observed |
| list_make.test | 10 | 0.000837s | 0.000854s | 0.000823s | byte equality observed |
| list_misc.test | 10 | 0.000827s | 0.000859s | 0.000814s | byte equality observed |
| list_mutate.test | 10 | 0.000817s | 0.000834s | 0.000809s | byte equality observed |
| list_nest.test | 10 | 0.000831s | 0.000791s | 0.000793s | byte equality observed |
| list_tie.test | 10 | 0.000814s | 0.000808s | 0.000811s | byte equality observed |
| list_value_at.test | 10 | 0.000821s | 0.000790s | 0.000816s | byte equality observed |
| make_fused.test | 10 | 0.000821s | 0.000803s | 0.000840s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000815s | 0.000819s | 0.000820s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000810s | 0.000829s | 0.000827s | byte equality observed |
| make_list.test | 10 | 0.000829s | 0.000818s | 0.000839s | byte equality observed |
| make_unfused.test | 10 | 0.000820s | 0.000824s | 0.000841s | byte equality observed |
| make_vector.test | 10 | 0.000829s | 0.000816s | 0.000834s | byte equality observed |
| map.test | 10 | 0.000832s | 0.000843s | 0.000840s | byte equality observed |
| map_comparison.test | 10 | 0.000830s | 0.000826s | 0.000832s | byte equality observed |
| map_construction.test | 10 | 0.000817s | 0.000818s | 0.000804s | byte equality observed |
| map_copy.test | 10 | 0.000809s | 0.000822s | 0.000821s | byte equality observed |
| map_misc.test | 10 | 0.000809s | 0.000856s | 0.000815s | byte equality observed |
| map_move.test | 10 | 0.000844s | 0.000861s | 0.000820s | byte equality observed |
| map_mutate.test | 10 | 0.000841s | 0.000829s | 0.000832s | byte equality observed |
| map_tie.test | 10 | 0.000818s | 0.000827s | 0.000812s | byte equality observed |
| move.test | 10 | 0.000799s | 0.000844s | 0.000796s | byte equality observed |
| nil.test | 10 | 0.000820s | 0.000795s | 0.000805s | byte equality observed |
| none.test | 10 | 0.000803s | 0.000817s | 0.000833s | byte equality observed |
| nview.test | 10 | 0.000814s | 0.000823s | 0.000824s | byte equality observed |
| pop_back.test | 10 | 0.000861s | 0.000863s | 0.000828s | byte equality observed |
| pop_front.test | 10 | 0.000864s | 0.000877s | 0.000839s | byte equality observed |
| push_back.test | 10 | 0.000844s | 0.000881s | 0.000829s | byte equality observed |
| push_front.test | 10 | 0.000843s | 0.000855s | 0.000825s | byte equality observed |
| quick.test | 10 | 0.000366s | 0.000806s | 0.000808s | byte equality observed |
| ref_vector.test | 10 | 0.000827s | 0.000828s | 0.000790s | byte equality observed |
| remove.test | 10 | 0.000839s | 0.000813s | 0.000835s | byte equality observed |
| remove_if.test | 10 | 0.000843s | 0.000866s | 0.000830s | byte equality observed |
| repetitive_view.test | 10 | 0.000807s | 0.000809s | 0.000804s | byte equality observed |
| replace.test | 10 | 0.000819s | 0.000811s | 0.000811s | byte equality observed |
| replace_if.test | 10 | 0.000851s | 0.000829s | 0.000838s | byte equality observed |
| reverse.test | 10 | 0.000853s | 0.000843s | 0.000846s | byte equality observed |
| reverse_fold.test | 10 | 0.000839s | 0.000845s | 0.000835s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.000841s | 0.000815s | 0.000846s | byte equality observed |
| reverse_view.test | 10 | 0.000848s | 0.000842s | 0.000836s | byte equality observed |
| segmented_find.test | 10 | 0.000838s | 0.000822s | 0.000825s | byte equality observed |
| segmented_find_if.test | 10 | 0.000813s | 0.000820s | 0.000817s | byte equality observed |
| segmented_fold.test | 10 | 0.000856s | 0.000827s | 0.000841s | byte equality observed |
| segmented_for_each.test | 10 | 0.000861s | 0.000827s | 0.000829s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.000834s | 0.000854s | 0.000850s | byte equality observed |
| set.test | 10 | 0.000838s | 0.000840s | 0.000817s | byte equality observed |
| single_view.test | 10 | 0.000835s | 0.000849s | 0.000819s | byte equality observed |
| std_array.test | 10 | 0.000818s | 0.000798s | 0.000823s | byte equality observed |
| std_pair.test | 10 | 0.000821s | 0.000834s | 0.000832s | byte equality observed |
| std_tuple.test | 10 | 0.000813s | 0.000800s | 0.000824s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.000809s | 0.000786s | 0.000801s | byte equality observed |
| swap.test | 10 | 0.000820s | 0.000805s | 0.000830s | byte equality observed |
| transform.test | 10 | 0.000833s | 0.000837s | 0.000855s | byte equality observed |
| transform_view.test | 10 | 0.000842s | 0.000821s | 0.000894s | byte equality observed |
| tuple_comparison.test | 10 | 0.000801s | 0.000805s | 0.000838s | byte equality observed |
| tuple_construction.test | 10 | 0.000815s | 0.000816s | 0.000803s | byte equality observed |
| tuple_conversion.test | 10 | 0.000838s | 0.000829s | 0.000831s | byte equality observed |
| tuple_copy.test | 10 | 0.000827s | 0.000847s | 0.000788s | byte equality observed |
| tuple_element.test | 10 | 0.000824s | 0.000824s | 0.000813s | byte equality observed |
| tuple_hash.test | 10 | 0.000828s | 0.000841s | 0.000798s | byte equality observed |
| tuple_make.test | 10 | 0.000834s | 0.000838s | 0.000816s | byte equality observed |
| tuple_misc.test | 10 | 0.000831s | 0.000811s | 0.000823s | byte equality observed |
| tuple_mutate.test | 10 | 0.000835s | 0.000807s | 0.000804s | byte equality observed |
| tuple_nest.test | 10 | 0.000817s | 0.000822s | 0.000803s | byte equality observed |
| tuple_tie.test | 10 | 0.000846s | 0.000865s | 0.000805s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.000841s | 0.000849s | 0.000806s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.000824s | 0.000830s | 0.000808s | byte equality observed |
| unfused.test | 10 | 0.000825s | 0.000852s | 0.000793s | byte equality observed |
| unfused_typed.test | 10 | 0.000840s | 0.000806s | 0.000805s | byte equality observed |
| vector_comparison.test | 10 | 0.000827s | 0.000805s | 0.000803s | byte equality observed |
| vector_construction.test | 10 | 0.000801s | 0.000804s | 0.000794s | byte equality observed |
| vector_conversion.test | 10 | 0.000810s | 0.000813s | 0.000852s | byte equality observed |
| vector_copy.test | 10 | 0.000824s | 0.000802s | 0.000809s | byte equality observed |
| vector_hash.test | 10 | 0.000831s | 0.000800s | 0.000825s | byte equality observed |
| vector_iterator.test | 10 | 0.000834s | 0.000825s | 0.000824s | byte equality observed |
| vector_make.test | 10 | 0.000847s | 0.000865s | 0.000813s | byte equality observed |
| vector_misc.test | 10 | 0.000826s | 0.000846s | 0.000815s | byte equality observed |
| vector_move.test | 10 | 0.000822s | 0.000844s | 0.000815s | byte equality observed |
| vector_mutate.test | 10 | 0.000838s | 0.000848s | 0.000829s | byte equality observed |
| vector_n.test | 10 | 0.000842s | 0.000831s | 0.000823s | byte equality observed |
| vector_nest.test | 10 | 0.000820s | 0.000795s | 0.000788s | byte equality observed |
| vector_tie.test | 10 | 0.000827s | 0.000834s | 0.000793s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000846s | 0.000782s | 0.000797s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000825s | 0.000788s | 0.000826s | byte equality observed |
| vector_value_at.test | 10 | 0.000827s | 0.000839s | 0.000807s | byte equality observed |
| zip.test | 10 | 0.000802s | 0.000793s | 0.000797s | byte equality observed |
| zip2.test | 10 | 0.000817s | 0.000832s | 0.000799s | byte equality observed |
| zip_ignore.test | 10 | 0.000827s | 0.000834s | 0.000839s | byte equality observed |
| zip_view.test | 10 | 0.000823s | 0.000824s | 0.000836s | byte equality observed |
| zip_view2.test | 10 | 0.000803s | 0.000822s | 0.000822s | byte equality observed |
| zip_view_ignore.test | 10 | 0.000790s | 0.000794s | 0.000794s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44656576225).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
