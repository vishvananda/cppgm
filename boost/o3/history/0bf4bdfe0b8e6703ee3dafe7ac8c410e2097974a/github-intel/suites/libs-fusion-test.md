# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.274055 | 0.621937 | 0.829423 | 0.000988 | 0.001150 | 0.001144 |
| any.test | RUN | 0.267001 | 0.585543 | 0.772893 | 0.001032 | 0.001293 | 0.001297 |
| clear.test | RUN | 0.193590 | 0.563059 | 0.657937 | 0.001195 | 0.001262 | 0.001306 |
| copy.test | RUN | 0.163231 | 0.413981 | 0.515149 | 0.001175 | 0.001268 | 0.001315 |
| count.test | RUN | 0.180502 | 0.466099 | 0.570010 | 0.001289 | 0.001246 | 0.001242 |
| count_if.test | RUN | 0.168811 | 0.427234 | 0.524601 | 0.001131 | 0.001289 | 0.001155 |
| erase.test | RUN | 0.247942 | 0.761841 | 0.858771 | 0.001082 | 0.001279 | 0.001045 |
| erase_key.test | RUN | 0.238179 | 0.758679 | 0.814902 | 0.001100 | 0.001218 | 0.001228 |
| filter.test | RUN | 0.220406 | 0.642418 | 0.728237 | 0.001161 | 0.001249 | 0.001408 |
| filter_if.test | RUN | 0.245717 | 0.766446 | 0.870166 | 0.001145 | 0.001286 | 0.001282 |
| find.test | RUN | 0.203208 | 0.509330 | 0.653077 | 0.001085 | 0.001126 | 0.001378 |
| find_if.test | RUN | 0.196351 | 0.473238 | 0.597174 | 0.001172 | 0.001053 | 0.001340 |
| fold.test | RUN | 0.221918 | 0.598073 | 0.737590 | 0.001220 | 0.001321 | 0.001283 |
| for_each.test | RUN | 0.195286 | 0.543119 | 0.642126 | 0.001149 | 0.001481 | 0.001255 |
| insert.test | RUN | 0.291007 | 0.948687 | 1.053152 | 0.001085 | 0.001246 | 0.001278 |
| insert_range.test | RUN | 0.291954 | 0.953821 | 1.043150 | 0.001185 | 0.001081 | 0.001191 |
| iter_fold.test | RUN | 0.323676 | 0.897513 | 1.251389 | 0.001115 | 0.001560 | 0.001201 |
| move.test | RUN | 0.166835 | 0.432884 | 0.539777 | 0.001000 | 0.001488 | 0.001308 |
| none.test | RUN | 0.270870 | 0.614248 | 0.794452 | 0.001035 | 0.001282 | 0.001256 |
| pop_back.test | RUN | 0.266204 | 0.833916 | 0.930478 | 0.001070 | 0.001227 | 0.001224 |
| pop_front.test | RUN | 0.225250 | 0.673394 | 0.743434 | 0.001089 | 0.001400 | 0.001216 |
| push_back.test | RUN | 0.279223 | 0.967689 | 1.022848 | 0.001100 | 0.001416 | 0.001317 |
| push_front.test | RUN | 0.249329 | 0.796478 | 0.862836 | 0.001127 | 0.001321 | 0.001341 |
| remove.test | RUN | 0.272745 | 0.919741 | 1.044134 | 0.001159 | 0.001480 | 0.001206 |
| remove_if.test | RUN | 0.241878 | 0.748724 | 0.868367 | 0.001104 | 0.001518 | 0.001225 |
| replace.test | RUN | 0.241162 | 0.729422 | 0.830070 | 0.001044 | 0.001350 | 0.001157 |
| replace_if.test | RUN | 0.227875 | 0.720182 | 0.803218 | 0.001187 | 0.001323 | 0.001237 |
| reverse_fold.test | RUN | 0.363794 | 1.010091 | 1.375269 | 0.001143 | 0.001455 | 0.001348 |
| reverse_iter_fold.test | RUN | 0.368157 | 1.040699 | 1.442155 | 0.001141 | 0.001433 | 0.001162 |
| reverse.test | RUN | 0.236500 | 0.752716 | 0.814854 | 0.001191 | 0.001327 | 0.001222 |
| segmented_for_each.test | RUN | 0.400559 | 1.435033 | 1.657197 | 0.001233 | 0.001193 | 0.001301 |
| segmented_find.test | RUN | 0.245061 | 0.744513 | 0.932308 | 0.001142 | 0.001368 | 0.001106 |
| segmented_find_if.test | RUN | 0.249325 | 0.746235 | 0.927488 | 0.001027 | 0.001263 | 0.001212 |
| segmented_fold.test | RUN | 0.306619 | 0.997711 | 1.189455 | 0.001007 | 0.001333 | 0.001252 |
| transform.test | RUN | 0.238632 | 0.799932 | 0.861513 | 0.001230 | 0.001427 | 0.001406 |
| join.test | RUN | 0.190929 | 0.471477 | 0.609933 | 0.001148 | 0.001228 | 0.001306 |
| zip.test | RUN | 0.314174 | 0.912651 | 1.158960 | 0.001055 | 0.001546 | 0.001368 |
| zip2.test | RUN | 0.308677 | 0.874453 | 1.104067 | 0.001098 | 0.001344 | 0.001506 |
| zip_ignore.test | RUN | 0.239653 | 0.595205 | 0.734851 | 0.001141 | 0.001370 | 0.001156 |
| flatten.test | RUN | 0.224194 | 0.660625 | 0.761479 | 0.001130 | 0.001473 | 0.001154 |
| ticket-5490.test | COMPILE | 0.119738 | 0.285330 | 0.345059 | — | — | — |
| as_deque.test | RUN | 0.219667 | 0.628795 | 0.793343 | 0.001226 | 0.001239 | 0.001350 |
| as_list.test | RUN | 0.249084 | 0.778332 | 0.868120 | 0.001274 | 0.001225 | 0.001315 |
| as_map.test | RUN | 0.258196 | 0.757873 | 0.859022 | 0.001177 | 0.001422 | 0.001068 |
| as_map_assoc.test | RUN | 0.240119 | 0.721309 | 0.799276 | 0.001228 | 0.001497 | 0.001294 |
| as_set.test | RUN | 0.278316 | 0.897721 | 1.012855 | 0.001149 | 0.001446 | 0.001207 |
| as_vector.test | RUN | 0.257245 | 0.795897 | 0.882842 | 0.001154 | 0.001186 | 0.001314 |
| boost_tuple.test | RUN | 0.251666 | 0.769997 | 0.874638 | 0.001064 | 0.001215 | 0.001307 |
| boost_tuple_iterator.test | RUN | 0.165330 | 0.452688 | 0.518837 | 0.001116 | 0.001202 | 0.001186 |
| cons.test | RUN | 0.321450 | 0.884687 | 1.040470 | 0.001252 | 0.001221 | 0.001206 |
| convert_boost_tuple.test | RUN | 0.193783 | 0.679221 | 0.688313 | 0.001278 | 0.001397 | 0.001321 |
| convert_deque.test | RUN | 0.200327 | 0.669004 | 0.679762 | 0.001103 | 0.001445 | 0.001196 |
| convert_list.test | RUN | 0.200866 | 0.685178 | 0.694848 | 0.000976 | 0.001289 | 0.001115 |
| convert_std_pair.test | RUN | 0.207808 | 0.683157 | 0.700393 | 0.001273 | 0.001395 | 0.001282 |
| convert_std_tuple.test | RUN | 0.196629 | 0.667031 | 0.679161 | 0.001114 | 0.001368 | 0.001296 |
| convert_vector.test | RUN | 0.197560 | 0.667044 | 0.687133 | 0.001107 | 0.001179 | 0.001120 |
| filter_view.test | RUN | 0.236189 | 0.712028 | 0.803971 | 0.001086 | 0.001404 | 0.001124 |
| hash.test | RUN | 0.233215 | 0.642689 | 0.756322 | 0.001275 | 0.001362 | 0.001380 |
| io.test | RUN | 0.256190 | 0.908937 | 0.941598 | 0.001302 | 0.001719 | 0.001441 |
| iterator_range.test | RUN | 0.226962 | 0.688303 | 0.767301 | 0.001192 | 0.001540 | 0.001373 |
| joint_view.test | RUN | 0.305681 | 1.156736 | 1.168514 | 0.001131 | 0.001195 | 0.001189 |
| list_comparison.test | RUN | 0.177817 | 0.464147 | 0.567629 | 0.001135 | 0.001352 | 0.001206 |
| list_construction.test | RUN | 0.169042 | 0.456257 | 0.533782 | 0.001126 | 0.001250 | 0.001315 |
| list_copy.test | RUN | 0.264302 | 0.835813 | 0.947281 | 0.000807 | 0.001064 | 0.001130 |
| list_iterator.test | RUN | 0.167251 | 0.456181 | 0.522212 | 0.000987 | 0.001391 | 0.001214 |
| list_hash.test | RUN | 0.228874 | 0.931646 | 0.764696 | 0.001066 | 0.001344 | 0.001106 |
| list_make.test | RUN | 0.179929 | 0.499491 | 0.590627 | 0.001122 | 0.001268 | 0.001316 |
| list_misc.test | RUN | 0.230039 | 0.594588 | 0.716262 | 0.001074 | 0.001469 | 0.001095 |
| list_mutate.test | RUN | 0.154782 | 0.391257 | 0.470468 | 0.001140 | 0.001332 | 0.001107 |
| list_nest.test | RUN | 0.331261 | 1.143173 | 1.324755 | 0.001075 | 0.001216 | 0.001189 |
| list_tie.test | RUN | 0.170888 | 0.444165 | 0.521995 | 0.001306 | 0.001428 | 0.001088 |
| list_value_at.test | RUN | 0.162012 | 0.418916 | 0.500023 | 0.001033 | 0.001140 | 0.001101 |
| deque_comparison.test | RUN | 0.169775 | 0.471739 | 0.567503 | 0.001028 | 0.001208 | 0.001177 |
| deque_construction.test | RUN | 0.173915 | 0.444494 | 0.538751 | 0.001244 | 0.001490 | 0.001197 |
| deque_copy.test | RUN | 0.246397 | 0.772002 | 0.888855 | 0.001220 | 0.001138 | 0.001056 |
| deque_iterator.test | RUN | 0.172063 | 0.473227 | 0.545122 | 0.001136 | 0.001276 | 0.001166 |
| deque_hash.test | RUN | 0.233638 | 0.894760 | 0.770220 | 0.000890 | 0.001282 | 0.001097 |
| deque_is_constructible.test | COMPILE | 0.093993 | 0.201682 | 0.240323 | — | — | — |
| deque_make.test | RUN | 0.172213 | 0.482304 | 0.565081 | 0.001170 | 0.001252 | 0.001299 |
| deque_misc.test | RUN | 0.225942 | 0.578726 | 0.699493 | 0.001075 | 0.001254 | 0.001084 |
| deque_move.test | RUN | 0.175346 | 0.501203 | 0.556805 | 0.001120 | 0.001442 | 0.001396 |
| deque_mutate.test | RUN | 0.155931 | 0.392895 | 0.485874 | 0.001036 | 0.001450 | 0.001275 |
| deque_nest.test | RUN | 0.487381 | 1.868189 | 2.179069 | 0.001065 | 0.001358 | 0.001247 |
| deque_tie.test | RUN | 0.164472 | 0.416645 | 0.510819 | 0.001315 | 0.001541 | 0.001361 |
| deque_value_at.test | RUN | 0.160245 | 0.419276 | 0.492737 | 0.001184 | 0.001280 | 0.001226 |
| front_extended_deque.test | RUN | 0.235671 | 0.609655 | 0.764997 | 0.001045 | 0.001307 | 0.001339 |
| back_extended_deque.test | RUN | 0.227292 | 0.599909 | 0.741315 | 0.001067 | 0.001382 | 0.001246 |
| make_list.test | RUN | 0.181569 | 0.501521 | 0.579523 | 0.001055 | 0.001660 | 0.001159 |
| make_vector.test | RUN | 0.180299 | 0.484708 | 0.616120 | 0.001004 | 0.001239 | 0.001177 |
| map.test | RUN | 0.239786 | 0.763000 | 0.834806 | 0.001412 | 0.001519 | 0.001282 |
| map_comparison.test | RUN | 0.174412 | 0.478799 | 0.569639 | 0.001255 | 0.001504 | 0.001196 |
| map_construction.test | RUN | 0.178713 | 0.455136 | 0.551365 | 0.001065 | 0.001259 | 0.001272 |
| map_copy.test | RUN | 0.214140 | 0.580459 | 0.693118 | 0.001025 | 0.001482 | 0.001428 |
| map_misc.test | RUN | 0.227344 | 0.588951 | 0.702500 | 0.001105 | 0.001493 | 0.001203 |
| map_move.test | RUN | 0.177437 | 0.502067 | 0.559054 | 0.001170 | 0.001383 | 0.001087 |
| map_mutate.test | RUN | 0.159190 | 0.397716 | 0.482092 | 0.001140 | 0.001386 | 0.001260 |
| map_tie.test | RUN | 0.168922 | 0.398377 | 0.491223 | 0.001001 | 0.001436 | 0.001292 |
| nil.test | RUN | 0.106863 | 0.282426 | 0.332742 | 0.001270 | 0.001212 | 0.001108 |
| nview.test | RUN | 0.220648 | 0.585627 | 0.716852 | 0.001173 | 0.001402 | 0.001326 |
| reverse_view.test | RUN | 0.295420 | 0.994156 | 1.068681 | 0.001127 | 0.001350 | 0.001405 |
| segmented_iterator_range.test | RUN | 0.344245 | 1.173008 | 1.334213 | 0.001138 | 0.001417 | 0.001232 |
| set.test | RUN | 0.222317 | 0.660152 | 0.738530 | 0.001070 | 0.001447 | 0.001209 |
| single_view.test | RUN | 0.202060 | 0.608587 | 0.680235 | 0.001090 | 0.001459 | 0.001155 |
| std_pair.test | RUN | 0.258149 | 0.775818 | 0.872726 | 0.001154 | 0.001494 | 0.001270 |
| boost_array.test | RUN | 0.208993 | 0.530095 | 0.638926 | 0.001016 | 0.001472 | 0.001211 |
| array.test | RUN | 0.213294 | 0.532386 | 0.645716 | 0.001069 | 0.001293 | 0.001327 |
| std_array.test | RUN | 0.211912 | 0.513444 | 0.620446 | 0.001163 | 0.001317 | 0.001235 |
| tuple_comparison.test | RUN | 0.180672 | 0.502617 | 0.586743 | 0.001009 | 0.001249 | 0.001260 |
| tuple_construction.test | RUN | 0.192385 | 0.504698 | 0.594946 | 0.001151 | 0.001204 | 0.001292 |
| tuple_conversion.test | RUN | 0.429972 | 1.580273 | 1.989148 | 0.001114 | 0.001256 | 0.001123 |
| tuple_copy.test | RUN | 0.276881 | 0.898916 | 1.027886 | 0.001262 | 0.001289 | 0.001193 |
| tuple_element.test | RUN | 0.174718 | 0.432476 | 0.566387 | 0.001011 | 0.001348 | 0.001131 |
| tuple_make.test | RUN | 0.188342 | 0.515670 | 0.608827 | 0.001040 | 0.001444 | 0.001332 |
| tuple_misc.test | RUN | 0.244034 | 0.627999 | 0.746897 | 0.001225 | 0.001334 | 0.001160 |
| tuple_mutate.test | RUN | 0.168336 | 0.427547 | 0.518389 | 0.001180 | 0.001460 | 0.001361 |
| tuple_nest.test | RUN | 0.726807 | 3.245107 | 3.811359 | 0.001065 | 0.001332 | 0.001239 |
| tuple_hash.test | RUN | 0.240823 | 0.925228 | 0.781361 | 0.001224 | 0.001550 | 0.000920 |
| tuple_tie.test | RUN | 0.175390 | 0.468347 | 0.565397 | 0.001279 | 0.001292 | 0.001219 |
| tuple_traits__maybe_variadic.test | RUN | 0.195846 | 0.562965 | 0.604871 | 0.001120 | 0.001163 | 0.001132 |
| tuple_traits__no_variadic.test | RUN | 0.218762 | 0.574263 | 0.665433 | 0.001082 | 0.001557 | 0.001366 |
| transform_view.test | RUN | 0.293394 | 0.982650 | 1.052929 | 0.001107 | 0.001473 | 0.001148 |
| identity_view.test | RUN | 0.279550 | 0.904472 | 0.988316 | 0.001316 | 0.001363 | 0.001336 |
| vector_comparison.test | RUN | 0.176219 | 0.479410 | 0.601445 | 0.001094 | 0.001524 | 0.001205 |
| vector_construction.test | RUN | 0.175263 | 0.448686 | 0.542340 | 0.001091 | 0.001324 | 0.001413 |
| vector_conversion.test | RUN | 0.516875 | 2.080007 | 2.505855 | 0.001110 | 0.001476 | 0.001131 |
| vector_copy.test | RUN | 0.272450 | 0.884590 | 1.050450 | 0.001068 | 0.001087 | 0.001095 |
| vector_iterator.test | RUN | 0.173536 | 0.477385 | 0.529718 | 0.001131 | 0.001179 | 0.001263 |
| vector_make.test | RUN | 0.177972 | 0.492713 | 0.554616 | 0.001270 | 0.001432 | 0.001230 |
| vector_misc.test | RUN | 0.235282 | 0.602970 | 0.699661 | 0.001045 | 0.001291 | 0.001155 |
| vector_move.test | RUN | 0.172487 | 0.497114 | 0.605404 | 0.001268 | 0.001367 | 0.001119 |
| vector_mutate.test | RUN | 0.160631 | 0.406724 | 0.473804 | 0.000885 | 0.001385 | 0.001130 |
| vector_n.test | RUN | 0.199080 | 0.506382 | 0.630734 | 0.001191 | 0.001376 | 0.001259 |
| vector_nest.test | RUN | 0.732641 | 3.474672 | 3.733567 | 0.001094 | 0.001274 | 0.001318 |
| vector_hash.test | RUN | 0.234893 | 0.913413 | 0.760216 | 0.001181 | 0.001527 | 0.001208 |
| vector_tie.test | RUN | 0.171150 | 0.448789 | 0.520748 | 0.001133 | 0.001482 | 0.001297 |
| vector_traits__maybe_variadic.test | RUN | 0.178606 | 0.492465 | 0.542358 | 0.001132 | 0.001218 | 0.001314 |
| vector_traits__no_variadic.test | RUN | 0.202032 | 0.559801 | 0.570681 | 0.001075 | 0.001315 | 0.001191 |
| vector_value_at.test | RUN | 0.162894 | 0.413568 | 0.507197 | 0.001047 | 0.001484 | 0.001183 |
| zip_view.test | RUN | 0.343932 | 0.997047 | 1.263652 | 0.001121 | 0.001542 | 0.001166 |
| zip_view2.test | RUN | 0.269919 | 0.792302 | 0.966535 | 0.001037 | 0.001384 | 0.001272 |
| zip_view_ignore.test | RUN | 0.256443 | 0.697026 | 0.886514 | 0.001139 | 0.001280 | 0.001188 |
| repetitive_view.test | RUN | 0.425895 | 1.290316 | 1.674054 | 0.001061 | 0.001243 | 0.001270 |
| deduce_sequence.test | RUN | 0.219141 | 0.549743 | 0.721815 | 0.000991 | 0.001357 | 0.001392 |
| adapt_adt_named.test | RUN | 0.248337 | 0.779223 | 0.834152 | 0.001100 | 0.001190 | 0.001252 |
| adapt_adt_named_empty.test | RUN | 0.216468 | 0.619245 | 0.703669 | 0.001079 | 0.001365 | 0.001182 |
| adapt_adt.test | RUN | 0.287884 | 1.031720 | 1.019229 | 0.001048 | 0.001259 | 0.001209 |
| adapt_adt_empty.test | RUN | 0.214251 | 0.631768 | 0.686802 | 0.001232 | 0.001248 | 0.001133 |
| adapt_assoc_adt_named.test | RUN | 0.293991 | 0.827137 | 0.915839 | 0.001052 | 0.001368 | 0.001406 |
| adapt_assoc_adt_named_empty.test | RUN | 0.217317 | 0.622442 | 0.701136 | 0.001091 | 0.001424 | 0.001465 |
| adapt_assoc_adt.test | RUN | 0.287450 | 0.857664 | 0.976182 | 0.001303 | 0.001153 | 0.001177 |
| adapt_assoc_adt_empty.test | RUN | 0.220749 | 0.632141 | 0.707478 | 0.001134 | 0.001254 | 0.001440 |
| adapt_assoc_struct_named.test | RUN | 0.281070 | 0.795847 | 0.898882 | 0.001065 | 0.001275 | 0.001098 |
| adapt_assoc_struct_named_empty.test | RUN | 0.216711 | 0.626216 | 0.684513 | 0.001072 | 0.001230 | 0.001114 |
| adapt_assoc_struct.test | RUN | 0.249722 | 0.757438 | 0.834417 | 0.001209 | 0.001222 | 0.001110 |
| adapt_assoc_struct_empty.test | RUN | 0.216537 | 0.623632 | 0.686700 | 0.001250 | 0.001561 | 0.001202 |
| adapt_assoc_tpl_adt.test | RUN | 0.301002 | 0.878269 | 0.976941 | 0.001031 | 0.001493 | 0.001098 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.221063 | 0.633606 | 0.688499 | 0.001031 | 0.001486 | 0.001295 |
| adapt_assoc_tpl_struct.test | RUN | 0.246291 | 0.732420 | 0.806813 | 0.001178 | 0.001260 | 0.000984 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.215216 | 0.630214 | 0.691342 | 0.001162 | 0.001575 | 0.000972 |
| adapt_struct_named.test | RUN | 0.246156 | 0.774308 | 0.815190 | 0.001045 | 0.001478 | 0.001248 |
| adapt_struct_named_empty.test | RUN | 0.224098 | 0.636122 | 0.688133 | 0.001078 | 0.001254 | 0.001160 |
| adapt_struct.test | RUN | 0.270076 | 0.873613 | 0.942540 | 0.001181 | 0.001342 | 0.001087 |
| adapt_struct_empty.test | RUN | 0.215701 | 0.635077 | 0.686855 | 0.001316 | 0.001311 | 0.001108 |
| adapt_tpl_adt.test | RUN | 0.278638 | 1.013722 | 0.979424 | 0.001031 | 0.001399 | 0.001072 |
| adapt_tpl_adt_empty.test | RUN | 0.217771 | 0.634155 | 0.690374 | 0.001075 | 0.001560 | 0.000829 |
| adapt_tpl_struct.test | RUN | 0.228457 | 0.701962 | 0.756009 | 0.001251 | 0.001114 | 0.001066 |
| adapt_tpl_struct_empty.test | RUN | 0.217552 | 0.638985 | 0.702900 | 0.001230 | 0.001398 | 0.001091 |
| adt_attribute_proxy.test | RUN | 0.243569 | 0.614773 | 0.726157 | 0.001074 | 0.001523 | 0.001205 |
| define_struct.test | RUN | 0.299538 | 0.877257 | 0.968637 | 0.001143 | 0.001268 | 0.001159 |
| define_struct_empty.test | RUN | 0.259368 | 0.707634 | 0.788795 | 0.001090 | 0.001374 | 0.001135 |
| define_struct_move.test | RUN | 0.164201 | 0.383583 | 0.463595 | 0.001114 | 0.001300 | 0.001066 |
| define_struct_inline.test | RUN | 0.319612 | 1.044001 | 1.090502 | 0.001235 | 0.001396 | 0.001180 |
| define_struct_inline_empty.test | RUN | 0.260589 | 0.728035 | 0.791339 | 0.001114 | 0.001187 | 0.001228 |
| define_struct_inline_move.test | RUN | 0.168958 | 0.394797 | 0.471924 | 0.001122 | 0.001194 | 0.001136 |
| define_assoc_struct.test | RUN | 0.296164 | 0.811190 | 0.926385 | 0.001167 | 0.001376 | 0.001085 |
| define_assoc_struct_empty.test | RUN | 0.260849 | 0.698047 | 0.813864 | 0.001122 | 0.001417 | 0.001236 |
| define_assoc_struct_move.test | RUN | 0.160292 | 0.394992 | 0.462552 | 0.001218 | 0.001438 | 0.001167 |
| define_tpl_struct.test | RUN | 0.289564 | 0.819356 | 0.907953 | 0.001252 | 0.001354 | 0.001164 |
| define_tpl_struct_empty.test | RUN | 0.267053 | 0.707683 | 0.807074 | 0.001059 | 0.001297 | 0.001137 |
| define_tpl_struct_move.test | RUN | 0.165998 | 0.395965 | 0.477409 | 0.001113 | 0.001336 | 0.001310 |
| define_tpl_struct_inline.test | RUN | 0.303230 | 0.955014 | 1.033592 | 0.001141 | 0.001417 | 0.001228 |
| define_tpl_struct_inline_empty.test | RUN | 0.260203 | 0.699601 | 0.803975 | 0.001023 | 0.001349 | 0.001261 |
| define_tpl_struct_inline_move.test | RUN | 0.164367 | 0.394930 | 0.478118 | 0.001032 | 0.001207 | 0.001172 |
| define_assoc_tpl_struct.test | RUN | 0.291658 | 0.836523 | 0.964707 | 0.001070 | 0.001450 | 0.001335 |
| define_assoc_tpl_struct_empty.test | RUN | 0.257095 | 0.705075 | 0.804368 | 0.001146 | 0.000912 | 0.001029 |
| define_assoc_tpl_struct_move.test | RUN | 0.163749 | 0.400918 | 0.487899 | 0.001117 | 0.001338 | 0.001289 |
| std_tuple.test | RUN | 0.172671 | 0.439110 | 0.534973 | 0.001083 | 0.001503 | 0.001090 |
| std_tuple_iterator.test | RUN | 0.167952 | 0.462141 | 0.535234 | 0.001094 | 0.001396 | 0.001066 |
| ref_vector.test | RUN | 0.200033 | 0.478657 | 0.570783 | 0.001160 | 0.001370 | 0.001358 |
| flatten_view.test | RUN | 0.207998 | 0.592887 | 0.689627 | 0.001156 | 0.001253 | 0.001139 |
| github-159.test | COMPILE | 0.091504 | 0.216307 | 0.253703 | — | — | — |
| github-176.test | RUN | 0.189790 | 0.529375 | 0.576180 | 0.001039 | 0.001510 | 0.001169 |
| size.test | COMPILE | 0.157213 | 0.364345 | 0.460319 | — | — | — |
| fused.test | RUN | 0.230087 | 0.552507 | 0.670468 | 0.001231 | 0.001400 | 0.001157 |
| fused_function_object.test | RUN | 0.166843 | 0.422113 | 0.507270 | 0.001132 | 0.001130 | 0.001137 |
| fused_procedure.test | RUN | 0.222482 | 0.538865 | 0.630602 | 0.001117 | 0.001295 | 0.001090 |
| unfused.test | RUN | 0.176392 | 0.424643 | 0.523755 | 0.001026 | 0.001332 | 0.001040 |
| unfused_typed.test | RUN | 0.180264 | 0.471493 | 0.545159 | 0.001083 | 0.001218 | 0.001264 |
| make_fused.test | RUN | 0.228927 | 0.547067 | 0.668301 | 0.001000 | 0.001203 | 0.001193 |
| make_fused_function_object.test | RUN | 0.170674 | 0.429965 | 0.509839 | 0.001168 | 0.001291 | 0.001152 |
| make_fused_procedure.test | RUN | 0.222685 | 0.533979 | 0.642276 | 0.001165 | 0.001432 | 0.001056 |
| make_unfused.test | RUN | 0.179220 | 0.423975 | 0.514710 | 0.001056 | 0.001234 | 0.001202 |
| invoke.test | RUN | 0.438399 | 1.589635 | 1.798404 | 0.001106 | 0.001267 | 0.001232 |
| invoke_function_object.test | RUN | 0.204475 | 0.568532 | 0.663022 | 0.001105 | 0.001422 | 0.001243 |
| invoke_procedure.test | RUN | 0.356565 | 1.182690 | 1.332124 | 0.001110 | 0.001498 | 0.001128 |
| swap.test | RUN | 0.266904 | 0.710621 | 0.854248 | 0.001035 | 0.001498 | 0.001302 |
| is_sequence.test | COMPILE | 0.044568 | 0.099194 | 0.106602 | — | — | — |
| is_view.test | COMPILE | 0.043077 | 0.096797 | 0.105286 | — | — | — |
| pair_deque.test | COMPILE | 0.097800 | 0.228118 | 0.272381 | — | — | — |
| pair_list.test | COMPILE | 0.093442 | 0.216965 | 0.244367 | — | — | — |
| pair_map.test | COMPILE | 0.097135 | 0.223990 | 0.273137 | — | — | — |
| pair_set.test | COMPILE | 0.095022 | 0.228735 | 0.257551 | — | — | — |
| pair_vector.test | COMPILE | 0.094937 | 0.223693 | 0.250449 | — | — | — |
| pair_nest.test | COMPILE | 0.038082 | 0.089690 | 0.098176 | — | — | — |
| index_sequence.test | COMPILE | 0.032040 | 0.062824 | 0.073229 | — | — | — |
| and.test | COMPILE | 0.023973 | 0.047355 | 0.051172 | — | — | — |
| tag_of.test | COMPILE | 0.042795 | 0.093923 | 0.097707 | — | — | — |
| unused.test | COMPILE | 0.022036 | 0.060921 | 0.062652 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.040363 | 0.095345 | 0.087893 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.026418 | 0.089780 | 0.095330 | — | — | — |
| quick.test | RUN | 0.123502 | 0.309227 | 0.342559 | 0.000399 | 0.000976 | 0.000834 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 1.003×, 0.998× | 1.002× |
| clang | 1.000× | 1.001×, 0.999× | 1.005× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44774088589).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.000830s | 0.000809s | 0.000824s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.000820s | 0.000825s | 0.000824s | byte equality observed |
| adapt_adt_named.test | 10 | 0.000829s | 0.000826s | 0.000830s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.000849s | 0.000839s | 0.000831s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.000815s | 0.000820s | 0.000846s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.000824s | 0.000837s | 0.000844s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.000838s | 0.000848s | 0.000837s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.000855s | 0.000822s | 0.000833s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.000870s | 0.000807s | 0.000831s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.000837s | 0.000817s | 0.000846s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.000814s | 0.000824s | 0.000827s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.000817s | 0.000813s | 0.000823s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.000834s | 0.000830s | 0.000822s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.000834s | 0.000835s | 0.000809s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.000859s | 0.000854s | 0.000846s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.000826s | 0.000831s | 0.000826s | byte equality observed |
| adapt_struct.test | 10 | 0.000848s | 0.000836s | 0.000867s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.000820s | 0.000812s | 0.000845s | byte equality observed |
| adapt_struct_named.test | 10 | 0.000831s | 0.000838s | 0.000842s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.000811s | 0.000855s | 0.000856s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.000830s | 0.000825s | 0.000833s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.000817s | 0.000825s | 0.000871s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.000817s | 0.000825s | 0.000828s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.000809s | 0.000820s | 0.000829s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.000813s | 0.000810s | 0.000784s | byte equality observed |
| all.test | 10 | 0.000824s | 0.000816s | 0.000800s | byte equality observed |
| any.test | 10 | 0.000838s | 0.000800s | 0.000831s | byte equality observed |
| array.test | 10 | 0.000811s | 0.000820s | 0.000825s | byte equality observed |
| as_deque.test | 10 | 0.000814s | 0.000830s | 0.000816s | byte equality observed |
| as_list.test | 10 | 0.000845s | 0.000866s | 0.000836s | byte equality observed |
| as_map.test | 10 | 0.000814s | 0.000871s | 0.000805s | byte equality observed |
| as_map_assoc.test | 10 | 0.000834s | 0.000854s | 0.000823s | byte equality observed |
| as_set.test | 10 | 0.000864s | 0.000832s | 0.000820s | byte equality observed |
| as_vector.test | 10 | 0.000850s | 0.000848s | 0.000834s | byte equality observed |
| back_extended_deque.test | 10 | 0.000817s | 0.000812s | 0.000851s | byte equality observed |
| boost_array.test | 10 | 0.000808s | 0.000800s | 0.000822s | byte equality observed |
| boost_tuple.test | 10 | 0.000822s | 0.000838s | 0.000811s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.000834s | 0.000812s | 0.000828s | byte equality observed |
| clear.test | 10 | 0.000808s | 0.000835s | 0.000844s | byte equality observed |
| cons.test | 10 | 0.000837s | 0.000842s | 0.000841s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.000817s | 0.000823s | 0.000826s | byte equality observed |
| convert_deque.test | 10 | 0.000843s | 0.000817s | 0.000817s | byte equality observed |
| convert_list.test | 10 | 0.000834s | 0.000794s | 0.000811s | byte equality observed |
| convert_std_pair.test | 10 | 0.000826s | 0.000812s | 0.000791s | byte equality observed |
| convert_std_tuple.test | 10 | 0.000815s | 0.000820s | 0.000801s | byte equality observed |
| convert_vector.test | 10 | 0.000817s | 0.000802s | 0.000812s | byte equality observed |
| copy.test | 10 | 0.000813s | 0.000795s | 0.000801s | byte equality observed |
| count.test | 10 | 0.000827s | 0.000811s | 0.000802s | byte equality observed |
| count_if.test | 10 | 0.000818s | 0.000819s | 0.000835s | byte equality observed |
| deduce_sequence.test | 10 | 0.000807s | 0.000802s | 0.000810s | byte equality observed |
| define_assoc_struct.test | 10 | 0.000832s | 0.000822s | 0.000836s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.000834s | 0.000814s | 0.000835s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.000807s | 0.000827s | 0.000800s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.000822s | 0.000840s | 0.000800s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.000804s | 0.000827s | 0.000818s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000805s | 0.000825s | 0.000788s | byte equality observed |
| define_struct.test | 10 | 0.000831s | 0.000833s | 0.000825s | byte equality observed |
| define_struct_empty.test | 10 | 0.000842s | 0.000793s | 0.000788s | byte equality observed |
| define_struct_inline.test | 10 | 0.000851s | 0.000836s | 0.000840s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.000831s | 0.000797s | 0.000819s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000838s | 0.000807s | 0.000833s | byte equality observed |
| define_struct_move.test | 10 | 0.000796s | 0.000807s | 0.000819s | byte equality observed |
| define_tpl_struct.test | 10 | 0.000833s | 0.000843s | 0.000825s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.000849s | 0.000824s | 0.000842s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.000836s | 0.000826s | 0.000846s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.000812s | 0.000830s | 0.000835s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000823s | 0.000796s | 0.000803s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000823s | 0.000808s | 0.000807s | byte equality observed |
| deque_comparison.test | 10 | 0.000813s | 0.000811s | 0.000802s | byte equality observed |
| deque_construction.test | 10 | 0.000798s | 0.000826s | 0.000783s | byte equality observed |
| deque_copy.test | 10 | 0.000811s | 0.000829s | 0.000844s | byte equality observed |
| deque_hash.test | 10 | 0.000817s | 0.000842s | 0.000822s | byte equality observed |
| deque_iterator.test | 10 | 0.000841s | 0.000805s | 0.000802s | byte equality observed |
| deque_make.test | 10 | 0.000834s | 0.000810s | 0.000797s | byte equality observed |
| deque_misc.test | 10 | 0.000824s | 0.000793s | 0.000798s | byte equality observed |
| deque_move.test | 10 | 0.000826s | 0.000824s | 0.000835s | byte equality observed |
| deque_mutate.test | 10 | 0.000819s | 0.000792s | 0.000821s | byte equality observed |
| deque_nest.test | 10 | 0.000801s | 0.000811s | 0.000806s | byte equality observed |
| deque_tie.test | 10 | 0.000820s | 0.000819s | 0.000780s | byte equality observed |
| deque_value_at.test | 10 | 0.000811s | 0.000781s | 0.000825s | byte equality observed |
| erase.test | 10 | 0.000844s | 0.000807s | 0.000829s | byte equality observed |
| erase_key.test | 10 | 0.000857s | 0.000866s | 0.000850s | byte equality observed |
| filter.test | 10 | 0.000816s | 0.000849s | 0.000844s | byte equality observed |
| filter_if.test | 10 | 0.000830s | 0.000863s | 0.000852s | byte equality observed |
| filter_view.test | 10 | 0.000839s | 0.000827s | 0.000838s | byte equality observed |
| find.test | 10 | 0.000830s | 0.000815s | 0.000829s | byte equality observed |
| find_if.test | 10 | 0.000830s | 0.000804s | 0.000842s | byte equality observed |
| flatten.test | 10 | 0.000849s | 0.000798s | 0.000815s | byte equality observed |
| flatten_view.test | 10 | 0.000829s | 0.000829s | 0.000839s | byte equality observed |
| fold.test | 10 | 0.000829s | 0.000859s | 0.000822s | byte equality observed |
| for_each.test | 10 | 0.000830s | 0.000798s | 0.000807s | byte equality observed |
| front_extended_deque.test | 10 | 0.000827s | 0.000798s | 0.000816s | byte equality observed |
| fused.test | 10 | 0.000809s | 0.000798s | 0.000795s | byte equality observed |
| fused_function_object.test | 10 | 0.000813s | 0.000804s | 0.000806s | byte equality observed |
| fused_procedure.test | 10 | 0.000804s | 0.000835s | 0.000816s | byte equality observed |
| github-176.test | 10 | 0.000795s | 0.000826s | 0.000808s | byte equality observed |
| hash.test | 10 | 0.000838s | 0.000827s | 0.000814s | byte equality observed |
| identity_view.test | 10 | 0.000839s | 0.000855s | 0.000843s | byte equality observed |
| insert.test | 10 | 0.000857s | 0.000865s | 0.000849s | byte equality observed |
| insert_range.test | 10 | 0.000829s | 0.000852s | 0.000842s | byte equality observed |
| invoke.test | 10 | 0.000824s | 0.000839s | 0.000787s | byte equality observed |
| invoke_function_object.test | 10 | 0.000812s | 0.000823s | 0.000803s | byte equality observed |
| invoke_procedure.test | 10 | 0.000799s | 0.000814s | 0.000794s | byte equality observed |
| io.test | 10 | 0.000897s | 0.000890s | 0.000886s | byte equality observed |
| iter_fold.test | 10 | 0.000823s | 0.000798s | 0.000834s | byte equality observed |
| iterator_range.test | 10 | 0.000854s | 0.000805s | 0.000828s | byte equality observed |
| join.test | 10 | 0.000818s | 0.000801s | 0.000809s | byte equality observed |
| joint_view.test | 10 | 0.000839s | 0.000832s | 0.000830s | byte equality observed |
| list_comparison.test | 10 | 0.000833s | 0.000837s | 0.000818s | byte equality observed |
| list_construction.test | 10 | 0.000807s | 0.000829s | 0.000832s | byte equality observed |
| list_copy.test | 10 | 0.000836s | 0.000837s | 0.000804s | byte equality observed |
| list_hash.test | 10 | 0.000833s | 0.000836s | 0.000804s | byte equality observed |
| list_iterator.test | 10 | 0.000809s | 0.000809s | 0.000812s | byte equality observed |
| list_make.test | 10 | 0.000822s | 0.000823s | 0.000819s | byte equality observed |
| list_misc.test | 10 | 0.000808s | 0.000828s | 0.000838s | byte equality observed |
| list_mutate.test | 10 | 0.000804s | 0.000828s | 0.000795s | byte equality observed |
| list_nest.test | 10 | 0.000813s | 0.000832s | 0.000812s | byte equality observed |
| list_tie.test | 10 | 0.000826s | 0.000788s | 0.000797s | byte equality observed |
| list_value_at.test | 10 | 0.000805s | 0.000804s | 0.000798s | byte equality observed |
| make_fused.test | 10 | 0.000813s | 0.000813s | 0.000801s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000815s | 0.000802s | 0.000818s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000808s | 0.000813s | 0.000785s | byte equality observed |
| make_list.test | 10 | 0.000822s | 0.000823s | 0.000792s | byte equality observed |
| make_unfused.test | 10 | 0.000788s | 0.000832s | 0.000808s | byte equality observed |
| make_vector.test | 10 | 0.000811s | 0.000838s | 0.000809s | byte equality observed |
| map.test | 10 | 0.000829s | 0.000833s | 0.000848s | byte equality observed |
| map_comparison.test | 10 | 0.000835s | 0.000795s | 0.000806s | byte equality observed |
| map_construction.test | 10 | 0.000803s | 0.000822s | 0.000811s | byte equality observed |
| map_copy.test | 10 | 0.000830s | 0.000806s | 0.000803s | byte equality observed |
| map_misc.test | 10 | 0.000804s | 0.000798s | 0.000826s | byte equality observed |
| map_move.test | 10 | 0.000825s | 0.000815s | 0.000803s | byte equality observed |
| map_mutate.test | 10 | 0.000829s | 0.000791s | 0.000807s | byte equality observed |
| map_tie.test | 10 | 0.000817s | 0.000827s | 0.000795s | byte equality observed |
| move.test | 10 | 0.000819s | 0.000848s | 0.000822s | byte equality observed |
| nil.test | 10 | 0.000820s | 0.000814s | 0.000827s | byte equality observed |
| none.test | 10 | 0.000806s | 0.000819s | 0.000823s | byte equality observed |
| nview.test | 10 | 0.000821s | 0.000817s | 0.000795s | byte equality observed |
| pop_back.test | 10 | 0.000847s | 0.000842s | 0.000816s | byte equality observed |
| pop_front.test | 10 | 0.000838s | 0.000846s | 0.000836s | byte equality observed |
| push_back.test | 10 | 0.000838s | 0.000844s | 0.000840s | byte equality observed |
| push_front.test | 10 | 0.000837s | 0.000824s | 0.000833s | byte equality observed |
| quick.test | 10 | 0.000361s | 0.000815s | 0.000808s | byte equality observed |
| ref_vector.test | 10 | 0.000828s | 0.000825s | 0.000823s | byte equality observed |
| remove.test | 10 | 0.000847s | 0.000855s | 0.000857s | byte equality observed |
| remove_if.test | 10 | 0.000841s | 0.000829s | 0.000827s | byte equality observed |
| repetitive_view.test | 10 | 0.000820s | 0.000786s | 0.000813s | byte equality observed |
| replace.test | 10 | 0.000816s | 0.000812s | 0.000838s | byte equality observed |
| replace_if.test | 10 | 0.000828s | 0.000825s | 0.000818s | byte equality observed |
| reverse.test | 10 | 0.000825s | 0.000828s | 0.000836s | byte equality observed |
| reverse_fold.test | 10 | 0.000814s | 0.000835s | 0.000825s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.000805s | 0.000799s | 0.000847s | byte equality observed |
| reverse_view.test | 10 | 0.000852s | 0.000822s | 0.000837s | byte equality observed |
| segmented_find.test | 10 | 0.000815s | 0.000814s | 0.000828s | byte equality observed |
| segmented_find_if.test | 10 | 0.000828s | 0.000833s | 0.000813s | byte equality observed |
| segmented_fold.test | 10 | 0.000831s | 0.000831s | 0.000845s | byte equality observed |
| segmented_for_each.test | 10 | 0.000848s | 0.000857s | 0.000849s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.000857s | 0.000861s | 0.000853s | byte equality observed |
| set.test | 10 | 0.000854s | 0.000816s | 0.000848s | byte equality observed |
| single_view.test | 10 | 0.000849s | 0.000843s | 0.000838s | byte equality observed |
| std_array.test | 10 | 0.000801s | 0.000821s | 0.000822s | byte equality observed |
| std_pair.test | 10 | 0.000832s | 0.000813s | 0.000818s | byte equality observed |
| std_tuple.test | 10 | 0.000816s | 0.000813s | 0.000810s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.000804s | 0.000840s | 0.000825s | byte equality observed |
| swap.test | 10 | 0.000809s | 0.000843s | 0.000833s | byte equality observed |
| transform.test | 10 | 0.000824s | 0.000843s | 0.000830s | byte equality observed |
| transform_view.test | 10 | 0.000818s | 0.000857s | 0.000829s | byte equality observed |
| tuple_comparison.test | 10 | 0.000822s | 0.000817s | 0.000824s | byte equality observed |
| tuple_construction.test | 10 | 0.000796s | 0.000784s | 0.000818s | byte equality observed |
| tuple_conversion.test | 10 | 0.000826s | 0.000827s | 0.000819s | byte equality observed |
| tuple_copy.test | 10 | 0.000834s | 0.000843s | 0.000804s | byte equality observed |
| tuple_element.test | 10 | 0.000805s | 0.000795s | 0.000803s | byte equality observed |
| tuple_hash.test | 10 | 0.000821s | 0.000837s | 0.000824s | byte equality observed |
| tuple_make.test | 10 | 0.000821s | 0.000828s | 0.000829s | byte equality observed |
| tuple_misc.test | 10 | 0.000821s | 0.000805s | 0.000820s | byte equality observed |
| tuple_mutate.test | 10 | 0.000807s | 0.000799s | 0.000804s | byte equality observed |
| tuple_nest.test | 10 | 0.000830s | 0.000815s | 0.000821s | byte equality observed |
| tuple_tie.test | 10 | 0.000815s | 0.000831s | 0.000838s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.000828s | 0.000836s | 0.000814s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.000810s | 0.000819s | 0.000820s | byte equality observed |
| unfused.test | 10 | 0.000803s | 0.000820s | 0.000810s | byte equality observed |
| unfused_typed.test | 10 | 0.000807s | 0.000803s | 0.000829s | byte equality observed |
| vector_comparison.test | 10 | 0.000795s | 0.000838s | 0.000845s | byte equality observed |
| vector_construction.test | 10 | 0.000800s | 0.000848s | 0.000822s | byte equality observed |
| vector_conversion.test | 10 | 0.000817s | 0.000801s | 0.000808s | byte equality observed |
| vector_copy.test | 10 | 0.000847s | 0.000825s | 0.000811s | byte equality observed |
| vector_hash.test | 10 | 0.000811s | 0.000830s | 0.000822s | byte equality observed |
| vector_iterator.test | 10 | 0.000824s | 0.000826s | 0.000826s | byte equality observed |
| vector_make.test | 10 | 0.000798s | 0.000820s | 0.000835s | byte equality observed |
| vector_misc.test | 10 | 0.000805s | 0.000814s | 0.000827s | byte equality observed |
| vector_move.test | 10 | 0.000811s | 0.000789s | 0.000825s | byte equality observed |
| vector_mutate.test | 10 | 0.000820s | 0.000836s | 0.000816s | byte equality observed |
| vector_n.test | 10 | 0.000838s | 0.000822s | 0.000806s | byte equality observed |
| vector_nest.test | 10 | 0.000800s | 0.000828s | 0.000807s | byte equality observed |
| vector_tie.test | 10 | 0.000802s | 0.000826s | 0.000809s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000810s | 0.000816s | 0.000794s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000809s | 0.000788s | 0.000810s | byte equality observed |
| vector_value_at.test | 10 | 0.000795s | 0.000795s | 0.000836s | byte equality observed |
| zip.test | 10 | 0.000806s | 0.000821s | 0.000822s | byte equality observed |
| zip2.test | 10 | 0.000804s | 0.000810s | 0.000807s | byte equality observed |
| zip_ignore.test | 10 | 0.000835s | 0.000810s | 0.000818s | byte equality observed |
| zip_view.test | 10 | 0.000814s | 0.000804s | 0.000808s | byte equality observed |
| zip_view2.test | 10 | 0.000806s | 0.000808s | 0.000828s | byte equality observed |
| zip_view_ignore.test | 10 | 0.000787s | 0.000808s | 0.000803s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44774088589).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
