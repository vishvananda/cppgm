# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.280106 | 0.619042 | 0.782919 | 0.001078 | 0.001068 | 0.001104 |
| any.test | RUN | 0.267406 | 0.587219 | 0.738844 | 0.001133 | 0.001261 | 0.001056 |
| clear.test | RUN | 0.196851 | 0.558890 | 0.615700 | 0.001226 | 0.001419 | 0.001073 |
| copy.test | RUN | 0.167011 | 0.410070 | 0.499003 | 0.001260 | 0.001208 | 0.001090 |
| count.test | RUN | 0.188221 | 0.450517 | 0.564677 | 0.001325 | 0.001222 | 0.001261 |
| count_if.test | RUN | 0.176286 | 0.418733 | 0.506011 | 0.001215 | 0.001296 | 0.001118 |
| erase.test | RUN | 0.257992 | 0.751413 | 0.847401 | 0.001183 | 0.001244 | 0.001083 |
| erase_key.test | RUN | 0.249834 | 0.740166 | 0.795459 | 0.001149 | 0.001319 | 0.001130 |
| filter.test | RUN | 0.224453 | 0.624609 | 0.726111 | 0.001283 | 0.001257 | 0.001170 |
| filter_if.test | RUN | 0.244005 | 0.732801 | 0.837421 | 0.001231 | 0.001397 | 0.001123 |
| find.test | RUN | 0.208254 | 0.500181 | 0.639046 | 0.001121 | 0.001206 | 0.001111 |
| find_if.test | RUN | 0.195006 | 0.466979 | 0.580428 | 0.001170 | 0.001149 | 0.001103 |
| fold.test | RUN | 0.223728 | 0.572907 | 0.717390 | 0.001238 | 0.001421 | 0.001098 |
| for_each.test | RUN | 0.193379 | 0.529841 | 0.619867 | 0.001303 | 0.001309 | 0.001112 |
| insert.test | RUN | 0.289311 | 0.934711 | 1.006718 | 0.001222 | 0.001425 | 0.001250 |
| insert_range.test | RUN | 0.292750 | 0.937249 | 1.006217 | 0.001147 | 0.001211 | 0.001113 |
| iter_fold.test | RUN | 0.341389 | 0.871336 | 1.174864 | 0.001350 | 0.001335 | 0.001270 |
| move.test | RUN | 0.176229 | 0.418981 | 0.497444 | 0.001055 | 0.001214 | 0.001020 |
| none.test | RUN | 0.278726 | 0.598782 | 0.768549 | 0.001160 | 0.001192 | 0.001061 |
| pop_back.test | RUN | 0.273910 | 0.806051 | 0.886441 | 0.001304 | 0.001302 | 0.001047 |
| pop_front.test | RUN | 0.226517 | 0.661756 | 0.731892 | 0.001186 | 0.001386 | 0.001024 |
| push_back.test | RUN | 0.292904 | 0.938204 | 0.987945 | 0.001320 | 0.001318 | 0.001179 |
| push_front.test | RUN | 0.253528 | 0.781035 | 0.831549 | 0.001168 | 0.001240 | 0.001018 |
| remove.test | RUN | 0.284654 | 0.868565 | 0.971630 | 0.001154 | 0.001274 | 0.001096 |
| remove_if.test | RUN | 0.245810 | 0.729689 | 0.824942 | 0.001266 | 0.001147 | 0.001039 |
| replace.test | RUN | 0.250939 | 0.722623 | 0.775370 | 0.001315 | 0.001298 | 0.001077 |
| replace_if.test | RUN | 0.238555 | 0.717811 | 0.774586 | 0.001349 | 0.001207 | 0.001126 |
| reverse_fold.test | RUN | 0.368860 | 0.976587 | 1.305453 | 0.001170 | 0.001292 | 0.001217 |
| reverse_iter_fold.test | RUN | 0.377095 | 1.011388 | 1.366961 | 0.001442 | 0.001159 | 0.001108 |
| reverse.test | RUN | 0.245364 | 0.743249 | 0.799344 | 0.001182 | 0.001290 | 0.001043 |
| segmented_for_each.test | RUN | 0.411981 | 1.399732 | 1.596408 | 0.001367 | 0.001319 | 0.001132 |
| segmented_find.test | RUN | 0.251835 | 0.727917 | 0.902928 | 0.001224 | 0.001288 | 0.001129 |
| segmented_find_if.test | RUN | 0.252881 | 0.725300 | 0.885265 | 0.001037 | 0.001143 | 0.001000 |
| segmented_fold.test | RUN | 0.317006 | 0.979766 | 1.141049 | 0.001268 | 0.001294 | 0.001070 |
| transform.test | RUN | 0.248815 | 0.773881 | 0.849301 | 0.001182 | 0.001263 | 0.001146 |
| join.test | RUN | 0.189988 | 0.455409 | 0.568724 | 0.001322 | 0.001197 | 0.001053 |
| zip.test | RUN | 0.316214 | 0.893157 | 1.101528 | 0.001188 | 0.001215 | 0.001074 |
| zip2.test | RUN | 0.315649 | 0.834072 | 1.056335 | 0.001245 | 0.001240 | 0.001027 |
| zip_ignore.test | RUN | 0.243361 | 0.578544 | 0.699169 | 0.001161 | 0.001263 | 0.001126 |
| flatten.test | RUN | 0.221599 | 0.644855 | 0.729482 | 0.001085 | 0.001161 | 0.001093 |
| ticket-5490.test | COMPILE | 0.118013 | 0.282109 | 0.317317 | — | — | — |
| as_deque.test | RUN | 0.228258 | 0.615955 | 0.750178 | 0.001172 | 0.001343 | 0.001187 |
| as_list.test | RUN | 0.251618 | 0.775489 | 0.821580 | 0.001164 | 0.001228 | 0.001028 |
| as_map.test | RUN | 0.249550 | 0.748904 | 0.824601 | 0.001148 | 0.001383 | 0.001066 |
| as_map_assoc.test | RUN | 0.252097 | 0.689585 | 0.784075 | 0.001126 | 0.001214 | 0.001167 |
| as_set.test | RUN | 0.279242 | 0.870652 | 0.965586 | 0.001264 | 0.001291 | 0.001031 |
| as_vector.test | RUN | 0.253706 | 0.794005 | 0.846702 | 0.001335 | 0.001209 | 0.001111 |
| boost_tuple.test | RUN | 0.255712 | 0.750111 | 0.826400 | 0.001072 | 0.001175 | 0.001054 |
| boost_tuple_iterator.test | RUN | 0.171654 | 0.440057 | 0.501161 | 0.001108 | 0.001168 | 0.001145 |
| cons.test | RUN | 0.318246 | 0.861360 | 0.996724 | 0.001035 | 0.001216 | 0.001090 |
| convert_boost_tuple.test | RUN | 0.202404 | 0.665489 | 0.668664 | 0.001203 | 0.001300 | 0.001069 |
| convert_deque.test | RUN | 0.203819 | 0.650229 | 0.661471 | 0.001169 | 0.001339 | 0.001028 |
| convert_list.test | RUN | 0.201707 | 0.675169 | 0.657804 | 0.001181 | 0.001166 | 0.000957 |
| convert_std_pair.test | RUN | 0.211025 | 0.668002 | 0.671143 | 0.001219 | 0.001279 | 0.000992 |
| convert_std_tuple.test | RUN | 0.200131 | 0.659655 | 0.652317 | 0.001101 | 0.001224 | 0.001067 |
| convert_vector.test | RUN | 0.197687 | 0.658061 | 0.648644 | 0.001174 | 0.001197 | 0.001084 |
| filter_view.test | RUN | 0.237353 | 0.690947 | 0.777581 | 0.001053 | 0.001138 | 0.001130 |
| hash.test | RUN | 0.238545 | 0.619526 | 0.738098 | 0.001354 | 0.001321 | 0.001148 |
| io.test | RUN | 0.251713 | 0.906945 | 0.920062 | 0.001210 | 0.001502 | 0.001284 |
| iterator_range.test | RUN | 0.228389 | 0.663754 | 0.740541 | 0.001133 | 0.001256 | 0.001077 |
| joint_view.test | RUN | 0.316549 | 1.118461 | 1.149271 | 0.001249 | 0.001280 | 0.001254 |
| list_comparison.test | RUN | 0.179602 | 0.454624 | 0.538740 | 0.001116 | 0.001222 | 0.001091 |
| list_construction.test | RUN | 0.171379 | 0.447137 | 0.524441 | 0.001028 | 0.001232 | 0.001174 |
| list_copy.test | RUN | 0.262941 | 0.815163 | 0.937003 | 0.001052 | 0.001226 | 0.001083 |
| list_iterator.test | RUN | 0.169813 | 0.436846 | 0.502459 | 0.001019 | 0.001338 | 0.001093 |
| list_hash.test | RUN | 0.229379 | 0.928703 | 0.727867 | 0.001097 | 0.001341 | 0.001017 |
| list_make.test | RUN | 0.177482 | 0.493075 | 0.579986 | 0.001231 | 0.001094 | 0.001040 |
| list_misc.test | RUN | 0.238119 | 0.580511 | 0.695904 | 0.001105 | 0.001245 | 0.001133 |
| list_mutate.test | RUN | 0.163249 | 0.400400 | 0.464388 | 0.001103 | 0.001285 | 0.001146 |
| list_nest.test | RUN | 0.333594 | 1.123464 | 1.288231 | 0.001150 | 0.001330 | 0.001049 |
| list_tie.test | RUN | 0.169900 | 0.435324 | 0.506081 | 0.001125 | 0.001374 | 0.001035 |
| list_value_at.test | RUN | 0.167061 | 0.421362 | 0.514934 | 0.001142 | 0.001224 | 0.001084 |
| deque_comparison.test | RUN | 0.177610 | 0.462395 | 0.527657 | 0.001183 | 0.001260 | 0.000996 |
| deque_construction.test | RUN | 0.180019 | 0.436690 | 0.529266 | 0.001262 | 0.001490 | 0.001072 |
| deque_copy.test | RUN | 0.251599 | 0.761830 | 0.869983 | 0.001242 | 0.001243 | 0.001044 |
| deque_iterator.test | RUN | 0.179371 | 0.477022 | 0.508169 | 0.001137 | 0.001205 | 0.001044 |
| deque_hash.test | RUN | 0.236392 | 0.880013 | 0.766012 | 0.001109 | 0.001231 | 0.001026 |
| deque_is_constructible.test | COMPILE | 0.095755 | 0.203919 | 0.236783 | — | — | — |
| deque_make.test | RUN | 0.176707 | 0.456748 | 0.543382 | 0.001370 | 0.001227 | 0.001047 |
| deque_misc.test | RUN | 0.228972 | 0.582138 | 0.678988 | 0.001043 | 0.001330 | 0.001115 |
| deque_move.test | RUN | 0.179149 | 0.493691 | 0.526039 | 0.001107 | 0.001246 | 0.001090 |
| deque_mutate.test | RUN | 0.159252 | 0.383467 | 0.456789 | 0.001314 | 0.001239 | 0.001029 |
| deque_nest.test | RUN | 0.499893 | 1.823557 | 2.062274 | 0.001250 | 0.001195 | 0.001042 |
| deque_tie.test | RUN | 0.165694 | 0.420075 | 0.491340 | 0.001288 | 0.001256 | 0.001207 |
| deque_value_at.test | RUN | 0.159312 | 0.392949 | 0.478063 | 0.001271 | 0.001195 | 0.001112 |
| front_extended_deque.test | RUN | 0.239284 | 0.594816 | 0.733058 | 0.001022 | 0.001309 | 0.001072 |
| back_extended_deque.test | RUN | 0.242242 | 0.603734 | 0.719711 | 0.001031 | 0.001180 | 0.001040 |
| make_list.test | RUN | 0.184351 | 0.485545 | 0.560713 | 0.001196 | 0.001189 | 0.000882 |
| make_vector.test | RUN | 0.183390 | 0.471338 | 0.597173 | 0.001090 | 0.001364 | 0.000966 |
| map.test | RUN | 0.250429 | 0.747238 | 0.807999 | 0.001286 | 0.001185 | 0.001078 |
| map_comparison.test | RUN | 0.179343 | 0.464303 | 0.542164 | 0.001280 | 0.001254 | 0.001222 |
| map_construction.test | RUN | 0.182234 | 0.457184 | 0.524666 | 0.001118 | 0.001128 | 0.001119 |
| map_copy.test | RUN | 0.218966 | 0.575062 | 0.659277 | 0.001087 | 0.001271 | 0.001072 |
| map_misc.test | RUN | 0.231980 | 0.593317 | 0.675603 | 0.001100 | 0.001192 | 0.001055 |
| map_move.test | RUN | 0.179901 | 0.494423 | 0.540527 | 0.001269 | 0.001165 | 0.001122 |
| map_mutate.test | RUN | 0.162227 | 0.396157 | 0.464249 | 0.001071 | 0.001193 | 0.001124 |
| map_tie.test | RUN | 0.169946 | 0.384528 | 0.482492 | 0.001083 | 0.001150 | 0.001133 |
| nil.test | RUN | 0.115409 | 0.282147 | 0.331324 | 0.001184 | 0.001275 | 0.001050 |
| nview.test | RUN | 0.222443 | 0.578581 | 0.697909 | 0.001269 | 0.001372 | 0.001156 |
| reverse_view.test | RUN | 0.298149 | 0.959795 | 1.030197 | 0.001210 | 0.001352 | 0.001187 |
| segmented_iterator_range.test | RUN | 0.352241 | 1.126836 | 1.286798 | 0.001393 | 0.001192 | 0.001234 |
| set.test | RUN | 0.222527 | 0.654410 | 0.717305 | 0.001239 | 0.001188 | 0.001045 |
| single_view.test | RUN | 0.202015 | 0.588986 | 0.658123 | 0.001134 | 0.001285 | 0.001136 |
| std_pair.test | RUN | 0.258661 | 0.749698 | 0.847753 | 0.001182 | 0.001289 | 0.001132 |
| boost_array.test | RUN | 0.214543 | 0.510344 | 0.629487 | 0.001230 | 0.001238 | 0.001145 |
| array.test | RUN | 0.212644 | 0.519371 | 0.627335 | 0.001240 | 0.001362 | 0.001117 |
| std_array.test | RUN | 0.216501 | 0.523507 | 0.602497 | 0.001095 | 0.001253 | 0.001091 |
| tuple_comparison.test | RUN | 0.189358 | 0.488020 | 0.572591 | 0.001083 | 0.001216 | 0.001109 |
| tuple_construction.test | RUN | 0.195007 | 0.498561 | 0.578319 | 0.001133 | 0.001280 | 0.001089 |
| tuple_conversion.test | RUN | 0.436219 | 1.528898 | 1.917108 | 0.001067 | 0.001257 | 0.001097 |
| tuple_copy.test | RUN | 0.274961 | 0.882368 | 1.013186 | 0.001111 | 0.001236 | 0.001007 |
| tuple_element.test | RUN | 0.176867 | 0.424321 | 0.551072 | 0.001276 | 0.001218 | 0.001376 |
| tuple_make.test | RUN | 0.194485 | 0.502242 | 0.592335 | 0.001099 | 0.001180 | 0.001088 |
| tuple_misc.test | RUN | 0.250562 | 0.612196 | 0.713861 | 0.001164 | 0.001310 | 0.001073 |
| tuple_mutate.test | RUN | 0.174867 | 0.410675 | 0.500410 | 0.001277 | 0.001320 | 0.001076 |
| tuple_nest.test | RUN | 0.749143 | 3.178712 | 3.568616 | 0.001177 | 0.001268 | 0.001105 |
| tuple_hash.test | RUN | 0.250662 | 0.911886 | 0.750714 | 0.001100 | 0.001343 | 0.000996 |
| tuple_tie.test | RUN | 0.188516 | 0.455569 | 0.558242 | 0.001137 | 0.001315 | 0.001055 |
| tuple_traits__maybe_variadic.test | RUN | 0.198929 | 0.564666 | 0.579707 | 0.001109 | 0.001273 | 0.001050 |
| tuple_traits__no_variadic.test | RUN | 0.223516 | 0.576773 | 0.639198 | 0.001113 | 0.001237 | 0.001218 |
| transform_view.test | RUN | 0.298546 | 0.944128 | 1.025268 | 0.001351 | 0.001230 | 0.001017 |
| identity_view.test | RUN | 0.285026 | 0.871087 | 0.975530 | 0.001209 | 0.001157 | 0.001211 |
| vector_comparison.test | RUN | 0.185273 | 0.476266 | 0.595028 | 0.001217 | 0.001176 | 0.001039 |
| vector_construction.test | RUN | 0.180610 | 0.447349 | 0.522704 | 0.001208 | 0.001149 | 0.001175 |
| vector_conversion.test | RUN | 0.526442 | 2.032613 | 2.439063 | 0.001277 | 0.001299 | 0.001096 |
| vector_copy.test | RUN | 0.278598 | 0.874484 | 0.995248 | 0.001220 | 0.001170 | 0.001231 |
| vector_iterator.test | RUN | 0.172214 | 0.443741 | 0.527587 | 0.001273 | 0.001184 | 0.001156 |
| vector_make.test | RUN | 0.180852 | 0.475799 | 0.558671 | 0.001152 | 0.001365 | 0.001221 |
| vector_misc.test | RUN | 0.230049 | 0.597778 | 0.728422 | 0.001067 | 0.001194 | 0.001179 |
| vector_move.test | RUN | 0.180021 | 0.477261 | 0.533216 | 0.001344 | 0.001218 | 0.001212 |
| vector_mutate.test | RUN | 0.161520 | 0.385975 | 0.470443 | 0.001123 | 0.001173 | 0.001142 |
| vector_n.test | RUN | 0.203914 | 0.492734 | 0.626449 | 0.001379 | 0.001412 | 0.001150 |
| vector_nest.test | RUN | 0.756944 | 3.356856 | 3.626993 | 0.001171 | 0.001279 | 0.001071 |
| vector_hash.test | RUN | 0.240027 | 0.897198 | 0.721014 | 0.001174 | 0.001297 | 0.001065 |
| vector_tie.test | RUN | 0.175972 | 0.440488 | 0.528485 | 0.001110 | 0.001252 | 0.001165 |
| vector_traits__maybe_variadic.test | RUN | 0.185239 | 0.489755 | 0.530003 | 0.001312 | 0.001118 | 0.001102 |
| vector_traits__no_variadic.test | RUN | 0.201600 | 0.548808 | 0.553516 | 0.001201 | 0.001013 | 0.001106 |
| vector_value_at.test | RUN | 0.164464 | 0.390234 | 0.498083 | 0.001037 | 0.001259 | 0.001123 |
| zip_view.test | RUN | 0.344621 | 0.973118 | 1.221190 | 0.001265 | 0.001350 | 0.001077 |
| zip_view2.test | RUN | 0.277965 | 0.745686 | 0.937841 | 0.001211 | 0.001260 | 0.001135 |
| zip_view_ignore.test | RUN | 0.263791 | 0.679688 | 0.876667 | 0.001088 | 0.001106 | 0.001152 |
| repetitive_view.test | RUN | 0.444993 | 1.273203 | 1.615410 | 0.001097 | 0.001253 | 0.001161 |
| deduce_sequence.test | RUN | 0.213711 | 0.538284 | 0.697845 | 0.001243 | 0.001352 | 0.001168 |
| adapt_adt_named.test | RUN | 0.264056 | 0.774868 | 0.813103 | 0.001194 | 0.001195 | 0.001168 |
| adapt_adt_named_empty.test | RUN | 0.225987 | 0.608896 | 0.682734 | 0.001286 | 0.001290 | 0.001098 |
| adapt_adt.test | RUN | 0.289059 | 1.020018 | 1.011179 | 0.001093 | 0.001226 | 0.001096 |
| adapt_adt_empty.test | RUN | 0.224766 | 0.596996 | 0.671240 | 0.001396 | 0.001272 | 0.001125 |
| adapt_assoc_adt_named.test | RUN | 0.288709 | 0.789127 | 0.894643 | 0.001172 | 0.001381 | 0.001300 |
| adapt_assoc_adt_named_empty.test | RUN | 0.228214 | 0.629690 | 0.685607 | 0.001199 | 0.001238 | 0.001197 |
| adapt_assoc_adt.test | RUN | 0.292610 | 0.832271 | 0.949980 | 0.001152 | 0.001261 | 0.001176 |
| adapt_assoc_adt_empty.test | RUN | 0.222528 | 0.630364 | 0.693656 | 0.001069 | 0.001247 | 0.001111 |
| adapt_assoc_struct_named.test | RUN | 0.285635 | 0.780449 | 0.869811 | 0.001142 | 0.001232 | 0.001175 |
| adapt_assoc_struct_named_empty.test | RUN | 0.225311 | 0.610857 | 0.680344 | 0.001187 | 0.001373 | 0.001124 |
| adapt_assoc_struct.test | RUN | 0.254753 | 0.744647 | 0.813664 | 0.001220 | 0.001296 | 0.001127 |
| adapt_assoc_struct_empty.test | RUN | 0.221623 | 0.618539 | 0.682115 | 0.001311 | 0.001215 | 0.001078 |
| adapt_assoc_tpl_adt.test | RUN | 0.304283 | 0.847063 | 0.975342 | 0.001138 | 0.001300 | 0.001177 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.228276 | 0.620706 | 0.680688 | 0.001246 | 0.001268 | 0.001236 |
| adapt_assoc_tpl_struct.test | RUN | 0.243090 | 0.706980 | 0.807083 | 0.001230 | 0.001332 | 0.001113 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.218946 | 0.606736 | 0.685057 | 0.001056 | 0.001376 | 0.001131 |
| adapt_struct_named.test | RUN | 0.251469 | 0.752856 | 0.803798 | 0.001274 | 0.001308 | 0.001252 |
| adapt_struct_named_empty.test | RUN | 0.222418 | 0.606709 | 0.689744 | 0.001008 | 0.001255 | 0.001296 |
| adapt_struct.test | RUN | 0.276211 | 0.848295 | 0.941053 | 0.001175 | 0.001410 | 0.001136 |
| adapt_struct_empty.test | RUN | 0.219824 | 0.604910 | 0.679538 | 0.001282 | 0.001399 | 0.001080 |
| adapt_tpl_adt.test | RUN | 0.281854 | 1.000520 | 0.974537 | 0.001183 | 0.001313 | 0.001140 |
| adapt_tpl_adt_empty.test | RUN | 0.218900 | 0.623198 | 0.687488 | 0.001159 | 0.001329 | 0.001113 |
| adapt_tpl_struct.test | RUN | 0.241031 | 0.696605 | 0.752900 | 0.001284 | 0.001209 | 0.001245 |
| adapt_tpl_struct_empty.test | RUN | 0.214787 | 0.607887 | 0.688203 | 0.001156 | 0.001235 | 0.001098 |
| adt_attribute_proxy.test | RUN | 0.252024 | 0.597834 | 0.726928 | 0.001129 | 0.001284 | 0.001086 |
| define_struct.test | RUN | 0.306523 | 0.842100 | 0.954839 | 0.001157 | 0.001207 | 0.001307 |
| define_struct_empty.test | RUN | 0.270221 | 0.683136 | 0.775164 | 0.001111 | 0.001356 | 0.001191 |
| define_struct_move.test | RUN | 0.170440 | 0.393347 | 0.459191 | 0.001085 | 0.001278 | 0.001145 |
| define_struct_inline.test | RUN | 0.326385 | 1.010551 | 1.070664 | 0.001152 | 0.001282 | 0.001238 |
| define_struct_inline_empty.test | RUN | 0.266291 | 0.687513 | 0.788045 | 0.001085 | 0.001139 | 0.001153 |
| define_struct_inline_move.test | RUN | 0.172270 | 0.390219 | 0.471750 | 0.001035 | 0.001268 | 0.001298 |
| define_assoc_struct.test | RUN | 0.294377 | 0.796934 | 0.912933 | 0.001236 | 0.001406 | 0.001206 |
| define_assoc_struct_empty.test | RUN | 0.259299 | 0.679161 | 0.816873 | 0.001124 | 0.001248 | 0.001142 |
| define_assoc_struct_move.test | RUN | 0.168492 | 0.374046 | 0.469033 | 0.001140 | 0.001220 | 0.001140 |
| define_tpl_struct.test | RUN | 0.290171 | 0.802532 | 0.916496 | 0.001111 | 0.001208 | 0.001099 |
| define_tpl_struct_empty.test | RUN | 0.259631 | 0.690050 | 0.795898 | 0.001188 | 0.001228 | 0.001058 |
| define_tpl_struct_move.test | RUN | 0.165104 | 0.397365 | 0.465696 | 0.001227 | 0.001250 | 0.001106 |
| define_tpl_struct_inline.test | RUN | 0.316466 | 0.936406 | 1.019751 | 0.001331 | 0.001165 | 0.001111 |
| define_tpl_struct_inline_empty.test | RUN | 0.266670 | 0.692019 | 0.790998 | 0.001274 | 0.001284 | 0.001210 |
| define_tpl_struct_inline_move.test | RUN | 0.164376 | 0.396291 | 0.476766 | 0.001272 | 0.001317 | 0.001068 |
| define_assoc_tpl_struct.test | RUN | 0.292400 | 0.817015 | 0.935802 | 0.001068 | 0.001307 | 0.001164 |
| define_assoc_tpl_struct_empty.test | RUN | 0.268707 | 0.689137 | 0.792480 | 0.001258 | 0.001161 | 0.001122 |
| define_assoc_tpl_struct_move.test | RUN | 0.167003 | 0.391470 | 0.469333 | 0.001246 | 0.001325 | 0.001060 |
| std_tuple.test | RUN | 0.172920 | 0.441440 | 0.519799 | 0.001193 | 0.001283 | 0.001155 |
| std_tuple_iterator.test | RUN | 0.175851 | 0.461843 | 0.527595 | 0.001302 | 0.001230 | 0.001155 |
| ref_vector.test | RUN | 0.196933 | 0.470994 | 0.551658 | 0.001097 | 0.001356 | 0.001104 |
| flatten_view.test | RUN | 0.213479 | 0.586852 | 0.672026 | 0.001174 | 0.001319 | 0.001216 |
| github-159.test | COMPILE | 0.092665 | 0.210449 | 0.240586 | — | — | — |
| github-176.test | RUN | 0.196948 | 0.526168 | 0.561969 | 0.001145 | 0.001231 | 0.001082 |
| size.test | COMPILE | 0.159920 | 0.359550 | 0.444159 | — | — | — |
| fused.test | RUN | 0.228684 | 0.553027 | 0.665043 | 0.001113 | 0.001160 | 0.001190 |
| fused_function_object.test | RUN | 0.176703 | 0.417999 | 0.496647 | 0.001243 | 0.001108 | 0.001100 |
| fused_procedure.test | RUN | 0.223420 | 0.521379 | 0.628187 | 0.001083 | 0.001423 | 0.001148 |
| unfused.test | RUN | 0.176528 | 0.431060 | 0.516111 | 0.001075 | 0.001256 | 0.001044 |
| unfused_typed.test | RUN | 0.186575 | 0.473338 | 0.541073 | 0.001087 | 0.001324 | 0.001145 |
| make_fused.test | RUN | 0.229462 | 0.552990 | 0.659651 | 0.001170 | 0.001174 | 0.001237 |
| make_fused_function_object.test | RUN | 0.173181 | 0.415031 | 0.501076 | 0.001042 | 0.001141 | 0.001196 |
| make_fused_procedure.test | RUN | 0.226100 | 0.525644 | 0.627091 | 0.001195 | 0.001245 | 0.001064 |
| make_unfused.test | RUN | 0.173663 | 0.423905 | 0.512356 | 0.001315 | 0.001271 | 0.001126 |
| invoke.test | RUN | 0.458158 | 1.559021 | 1.777757 | 0.001225 | 0.001196 | 0.001210 |
| invoke_function_object.test | RUN | 0.215664 | 0.539730 | 0.650823 | 0.001275 | 0.001414 | 0.001266 |
| invoke_procedure.test | RUN | 0.359067 | 1.153166 | 1.303275 | 0.001159 | 0.001288 | 0.001118 |
| swap.test | RUN | 0.269207 | 0.713111 | 0.837675 | 0.001185 | 0.001187 | 0.001093 |
| is_sequence.test | COMPILE | 0.044990 | 0.096781 | 0.104242 | — | — | — |
| is_view.test | COMPILE | 0.044346 | 0.095933 | 0.104330 | — | — | — |
| pair_deque.test | COMPILE | 0.095068 | 0.220509 | 0.271415 | — | — | — |
| pair_list.test | COMPILE | 0.095598 | 0.214652 | 0.270556 | — | — | — |
| pair_map.test | COMPILE | 0.098600 | 0.226708 | 0.253903 | — | — | — |
| pair_set.test | COMPILE | 0.100593 | 0.222069 | 0.255748 | — | — | — |
| pair_vector.test | COMPILE | 0.100071 | 0.219180 | 0.243542 | — | — | — |
| pair_nest.test | COMPILE | 0.037798 | 0.087712 | 0.096214 | — | — | — |
| index_sequence.test | COMPILE | 0.034180 | 0.061600 | 0.071880 | — | — | — |
| and.test | COMPILE | 0.025358 | 0.047284 | 0.051237 | — | — | — |
| tag_of.test | COMPILE | 0.045353 | 0.093110 | 0.097952 | — | — | — |
| unused.test | COMPILE | 0.024185 | 0.056597 | 0.056425 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.041112 | 0.093305 | 0.099781 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.036444 | 0.072547 | 0.094273 | — | — | — |
| quick.test | RUN | 0.131681 | 0.303624 | 0.317051 | 0.000398 | 0.000844 | 0.000786 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 1.002×, 0.998× | 1.007× |
| clang | 1.001× | 1.007×, 0.995× | 1.007× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45739944580).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.000827s | 0.000801s | 0.000846s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.000784s | 0.000787s | 0.000855s | byte equality observed |
| adapt_adt_named.test | 10 | 0.000811s | 0.000795s | 0.000831s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.000830s | 0.000809s | 0.000820s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.000798s | 0.000802s | 0.000799s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.000816s | 0.000784s | 0.000799s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.000816s | 0.000793s | 0.000820s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.000808s | 0.000818s | 0.000812s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.000796s | 0.000823s | 0.000793s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.000821s | 0.000801s | 0.000800s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.000825s | 0.000815s | 0.000815s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.000815s | 0.000791s | 0.000810s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.000814s | 0.000794s | 0.000804s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.000814s | 0.000825s | 0.000829s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.000838s | 0.000834s | 0.000820s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.000831s | 0.000817s | 0.000824s | byte equality observed |
| adapt_struct.test | 10 | 0.000800s | 0.000805s | 0.000859s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.000807s | 0.000820s | 0.000823s | byte equality observed |
| adapt_struct_named.test | 10 | 0.000797s | 0.000839s | 0.000833s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.000813s | 0.000811s | 0.000815s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.000802s | 0.000832s | 0.000814s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.000807s | 0.000791s | 0.000811s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.000817s | 0.000805s | 0.000813s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.000830s | 0.000815s | 0.000801s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.000804s | 0.000802s | 0.000787s | byte equality observed |
| all.test | 10 | 0.000782s | 0.000780s | 0.000785s | byte equality observed |
| any.test | 10 | 0.000804s | 0.000807s | 0.000774s | byte equality observed |
| array.test | 10 | 0.000802s | 0.000815s | 0.000795s | byte equality observed |
| as_deque.test | 10 | 0.000790s | 0.000793s | 0.000791s | byte equality observed |
| as_list.test | 10 | 0.000839s | 0.000850s | 0.000818s | byte equality observed |
| as_map.test | 10 | 0.000816s | 0.000828s | 0.000804s | byte equality observed |
| as_map_assoc.test | 10 | 0.000804s | 0.000805s | 0.000813s | byte equality observed |
| as_set.test | 10 | 0.000808s | 0.000853s | 0.000823s | byte equality observed |
| as_vector.test | 10 | 0.000846s | 0.000844s | 0.000858s | byte equality observed |
| back_extended_deque.test | 10 | 0.000835s | 0.000806s | 0.000789s | byte equality observed |
| boost_array.test | 10 | 0.000802s | 0.000808s | 0.000780s | byte equality observed |
| boost_tuple.test | 10 | 0.000828s | 0.000828s | 0.000810s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.000821s | 0.000810s | 0.000825s | byte equality observed |
| clear.test | 10 | 0.000838s | 0.000847s | 0.000798s | byte equality observed |
| cons.test | 10 | 0.000832s | 0.000851s | 0.000822s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.000806s | 0.000832s | 0.000809s | byte equality observed |
| convert_deque.test | 10 | 0.000792s | 0.000779s | 0.000813s | byte equality observed |
| convert_list.test | 10 | 0.000792s | 0.000798s | 0.000813s | byte equality observed |
| convert_std_pair.test | 10 | 0.000809s | 0.000800s | 0.000832s | byte equality observed |
| convert_std_tuple.test | 10 | 0.000820s | 0.000783s | 0.000792s | byte equality observed |
| convert_vector.test | 10 | 0.000800s | 0.000795s | 0.000791s | byte equality observed |
| copy.test | 10 | 0.000799s | 0.000791s | 0.000788s | byte equality observed |
| count.test | 10 | 0.000818s | 0.000791s | 0.000777s | byte equality observed |
| count_if.test | 10 | 0.000814s | 0.000804s | 0.000789s | byte equality observed |
| deduce_sequence.test | 10 | 0.000814s | 0.000770s | 0.000795s | byte equality observed |
| define_assoc_struct.test | 10 | 0.000814s | 0.000814s | 0.000794s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.000793s | 0.000800s | 0.000836s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.000789s | 0.000801s | 0.000801s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.000829s | 0.000788s | 0.000825s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.000839s | 0.000824s | 0.000831s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000803s | 0.000804s | 0.000815s | byte equality observed |
| define_struct.test | 10 | 0.000822s | 0.000798s | 0.000792s | byte equality observed |
| define_struct_empty.test | 10 | 0.000807s | 0.000793s | 0.000796s | byte equality observed |
| define_struct_inline.test | 10 | 0.000826s | 0.000807s | 0.000810s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.000822s | 0.000812s | 0.000792s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000805s | 0.000767s | 0.000807s | byte equality observed |
| define_struct_move.test | 10 | 0.000819s | 0.000775s | 0.000796s | byte equality observed |
| define_tpl_struct.test | 10 | 0.000806s | 0.000819s | 0.000821s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.000822s | 0.000801s | 0.000817s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.000820s | 0.000800s | 0.000810s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.000817s | 0.000810s | 0.000790s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000798s | 0.000792s | 0.000790s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000801s | 0.000778s | 0.000785s | byte equality observed |
| deque_comparison.test | 10 | 0.000818s | 0.000795s | 0.000790s | byte equality observed |
| deque_construction.test | 10 | 0.000793s | 0.000788s | 0.000786s | byte equality observed |
| deque_copy.test | 10 | 0.000802s | 0.000833s | 0.000788s | byte equality observed |
| deque_hash.test | 10 | 0.000806s | 0.000790s | 0.000815s | byte equality observed |
| deque_iterator.test | 10 | 0.000790s | 0.000810s | 0.000790s | byte equality observed |
| deque_make.test | 10 | 0.000788s | 0.000804s | 0.000801s | byte equality observed |
| deque_misc.test | 10 | 0.000798s | 0.000820s | 0.000807s | byte equality observed |
| deque_move.test | 10 | 0.000789s | 0.000776s | 0.000823s | byte equality observed |
| deque_mutate.test | 10 | 0.000803s | 0.000807s | 0.000789s | byte equality observed |
| deque_nest.test | 10 | 0.000795s | 0.000806s | 0.000780s | byte equality observed |
| deque_tie.test | 10 | 0.000796s | 0.000777s | 0.000802s | byte equality observed |
| deque_value_at.test | 10 | 0.000780s | 0.000802s | 0.000775s | byte equality observed |
| erase.test | 10 | 0.000797s | 0.000834s | 0.000808s | byte equality observed |
| erase_key.test | 10 | 0.000825s | 0.000850s | 0.000821s | byte equality observed |
| filter.test | 10 | 0.000796s | 0.000797s | 0.000817s | byte equality observed |
| filter_if.test | 10 | 0.000828s | 0.000814s | 0.000821s | byte equality observed |
| filter_view.test | 10 | 0.000811s | 0.000825s | 0.000800s | byte equality observed |
| find.test | 10 | 0.000807s | 0.000802s | 0.000811s | byte equality observed |
| find_if.test | 10 | 0.000804s | 0.000809s | 0.000820s | byte equality observed |
| flatten.test | 10 | 0.000808s | 0.000814s | 0.000804s | byte equality observed |
| flatten_view.test | 10 | 0.000808s | 0.000842s | 0.000788s | byte equality observed |
| fold.test | 10 | 0.000817s | 0.000810s | 0.000808s | byte equality observed |
| for_each.test | 10 | 0.000811s | 0.000803s | 0.000843s | byte equality observed |
| front_extended_deque.test | 10 | 0.000767s | 0.000788s | 0.000807s | byte equality observed |
| fused.test | 10 | 0.000781s | 0.000776s | 0.000790s | byte equality observed |
| fused_function_object.test | 10 | 0.000814s | 0.000792s | 0.000798s | byte equality observed |
| fused_procedure.test | 10 | 0.000809s | 0.000789s | 0.000809s | byte equality observed |
| github-176.test | 10 | 0.000773s | 0.000802s | 0.000826s | byte equality observed |
| hash.test | 10 | 0.000813s | 0.000812s | 0.000819s | byte equality observed |
| identity_view.test | 10 | 0.000812s | 0.000834s | 0.000834s | byte equality observed |
| insert.test | 10 | 0.000824s | 0.000831s | 0.000846s | byte equality observed |
| insert_range.test | 10 | 0.000839s | 0.000824s | 0.000829s | byte equality observed |
| invoke.test | 10 | 0.000800s | 0.000768s | 0.000792s | byte equality observed |
| invoke_function_object.test | 10 | 0.000797s | 0.000811s | 0.000809s | byte equality observed |
| invoke_procedure.test | 10 | 0.000798s | 0.000812s | 0.000791s | byte equality observed |
| io.test | 10 | 0.000893s | 0.000895s | 0.000872s | byte equality observed |
| iter_fold.test | 10 | 0.000788s | 0.000808s | 0.000783s | byte equality observed |
| iterator_range.test | 10 | 0.000808s | 0.000825s | 0.000803s | byte equality observed |
| join.test | 10 | 0.000778s | 0.000819s | 0.000791s | byte equality observed |
| joint_view.test | 10 | 0.000812s | 0.000821s | 0.000805s | byte equality observed |
| list_comparison.test | 10 | 0.000782s | 0.000785s | 0.000806s | byte equality observed |
| list_construction.test | 10 | 0.000794s | 0.000784s | 0.000829s | byte equality observed |
| list_copy.test | 10 | 0.000800s | 0.000780s | 0.000782s | byte equality observed |
| list_hash.test | 10 | 0.000820s | 0.000793s | 0.000813s | byte equality observed |
| list_iterator.test | 10 | 0.000793s | 0.000778s | 0.000801s | byte equality observed |
| list_make.test | 10 | 0.000793s | 0.000812s | 0.000814s | byte equality observed |
| list_misc.test | 10 | 0.000794s | 0.000803s | 0.000842s | byte equality observed |
| list_mutate.test | 10 | 0.000807s | 0.000795s | 0.000778s | byte equality observed |
| list_nest.test | 10 | 0.000786s | 0.000772s | 0.000813s | byte equality observed |
| list_tie.test | 10 | 0.000800s | 0.000799s | 0.000820s | byte equality observed |
| list_value_at.test | 10 | 0.000792s | 0.000788s | 0.000785s | byte equality observed |
| make_fused.test | 10 | 0.000801s | 0.000792s | 0.000814s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000801s | 0.000806s | 0.000778s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000806s | 0.000800s | 0.000799s | byte equality observed |
| make_list.test | 10 | 0.000810s | 0.000802s | 0.000831s | byte equality observed |
| make_unfused.test | 10 | 0.000823s | 0.000785s | 0.000834s | byte equality observed |
| make_vector.test | 10 | 0.000780s | 0.000799s | 0.000809s | byte equality observed |
| map.test | 10 | 0.000808s | 0.000798s | 0.000799s | byte equality observed |
| map_comparison.test | 10 | 0.000778s | 0.000776s | 0.000801s | byte equality observed |
| map_construction.test | 10 | 0.000781s | 0.000784s | 0.000790s | byte equality observed |
| map_copy.test | 10 | 0.000803s | 0.000819s | 0.000820s | byte equality observed |
| map_misc.test | 10 | 0.000818s | 0.000808s | 0.000816s | byte equality observed |
| map_move.test | 10 | 0.000831s | 0.000805s | 0.000817s | byte equality observed |
| map_mutate.test | 10 | 0.000815s | 0.000826s | 0.000799s | byte equality observed |
| map_tie.test | 10 | 0.000805s | 0.000765s | 0.000812s | byte equality observed |
| move.test | 10 | 0.000816s | 0.000779s | 0.000829s | byte equality observed |
| nil.test | 10 | 0.000813s | 0.000807s | 0.000821s | byte equality observed |
| none.test | 10 | 0.000822s | 0.000780s | 0.000821s | byte equality observed |
| nview.test | 10 | 0.000802s | 0.000792s | 0.000805s | byte equality observed |
| pop_back.test | 10 | 0.000824s | 0.000814s | 0.000840s | byte equality observed |
| pop_front.test | 10 | 0.000838s | 0.000816s | 0.000803s | byte equality observed |
| push_back.test | 10 | 0.000832s | 0.000842s | 0.000815s | byte equality observed |
| push_front.test | 10 | 0.000825s | 0.000817s | 0.000843s | byte equality observed |
| quick.test | 10 | 0.000358s | 0.000760s | 0.000788s | byte equality observed |
| ref_vector.test | 10 | 0.000804s | 0.000798s | 0.000778s | byte equality observed |
| remove.test | 10 | 0.000799s | 0.000791s | 0.000800s | byte equality observed |
| remove_if.test | 10 | 0.000824s | 0.000806s | 0.000808s | byte equality observed |
| repetitive_view.test | 10 | 0.000785s | 0.000775s | 0.000807s | byte equality observed |
| replace.test | 10 | 0.000805s | 0.000803s | 0.000812s | byte equality observed |
| replace_if.test | 10 | 0.000804s | 0.000833s | 0.000824s | byte equality observed |
| reverse.test | 10 | 0.000820s | 0.000802s | 0.000814s | byte equality observed |
| reverse_fold.test | 10 | 0.000815s | 0.000787s | 0.000824s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.000786s | 0.000787s | 0.000795s | byte equality observed |
| reverse_view.test | 10 | 0.000823s | 0.000812s | 0.000817s | byte equality observed |
| segmented_find.test | 10 | 0.000801s | 0.000771s | 0.000811s | byte equality observed |
| segmented_find_if.test | 10 | 0.000802s | 0.000765s | 0.000806s | byte equality observed |
| segmented_fold.test | 10 | 0.000837s | 0.000796s | 0.000841s | byte equality observed |
| segmented_for_each.test | 10 | 0.000840s | 0.000804s | 0.000856s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.000822s | 0.000831s | 0.000850s | byte equality observed |
| set.test | 10 | 0.000832s | 0.000819s | 0.000814s | byte equality observed |
| single_view.test | 10 | 0.000809s | 0.000823s | 0.000824s | byte equality observed |
| std_array.test | 10 | 0.000779s | 0.000797s | 0.000788s | byte equality observed |
| std_pair.test | 10 | 0.000831s | 0.000822s | 0.000796s | byte equality observed |
| std_tuple.test | 10 | 0.000802s | 0.000810s | 0.000787s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.000807s | 0.000798s | 0.000776s | byte equality observed |
| swap.test | 10 | 0.000794s | 0.000837s | 0.000791s | byte equality observed |
| transform.test | 10 | 0.000829s | 0.000814s | 0.000800s | byte equality observed |
| transform_view.test | 10 | 0.000797s | 0.000836s | 0.000805s | byte equality observed |
| tuple_comparison.test | 10 | 0.000792s | 0.000780s | 0.000788s | byte equality observed |
| tuple_construction.test | 10 | 0.000794s | 0.000779s | 0.000806s | byte equality observed |
| tuple_conversion.test | 10 | 0.000802s | 0.000783s | 0.000798s | byte equality observed |
| tuple_copy.test | 10 | 0.000795s | 0.000814s | 0.000801s | byte equality observed |
| tuple_element.test | 10 | 0.000810s | 0.000809s | 0.000811s | byte equality observed |
| tuple_hash.test | 10 | 0.000819s | 0.000809s | 0.000837s | byte equality observed |
| tuple_make.test | 10 | 0.000816s | 0.000821s | 0.000799s | byte equality observed |
| tuple_misc.test | 10 | 0.000818s | 0.000803s | 0.000788s | byte equality observed |
| tuple_mutate.test | 10 | 0.000788s | 0.000780s | 0.000780s | byte equality observed |
| tuple_nest.test | 10 | 0.000798s | 0.000819s | 0.000782s | byte equality observed |
| tuple_tie.test | 10 | 0.000811s | 0.000819s | 0.000783s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.000819s | 0.000821s | 0.000806s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.000789s | 0.000811s | 0.000801s | byte equality observed |
| unfused.test | 10 | 0.000814s | 0.000792s | 0.000793s | byte equality observed |
| unfused_typed.test | 10 | 0.000795s | 0.000796s | 0.000777s | byte equality observed |
| vector_comparison.test | 10 | 0.000805s | 0.000789s | 0.000812s | byte equality observed |
| vector_construction.test | 10 | 0.000797s | 0.000803s | 0.000802s | byte equality observed |
| vector_conversion.test | 10 | 0.000793s | 0.000802s | 0.000806s | byte equality observed |
| vector_copy.test | 10 | 0.000803s | 0.000795s | 0.000798s | byte equality observed |
| vector_hash.test | 10 | 0.000795s | 0.000830s | 0.000815s | byte equality observed |
| vector_iterator.test | 10 | 0.000787s | 0.000800s | 0.000796s | byte equality observed |
| vector_make.test | 10 | 0.000795s | 0.000814s | 0.000800s | byte equality observed |
| vector_misc.test | 10 | 0.000812s | 0.000791s | 0.000795s | byte equality observed |
| vector_move.test | 10 | 0.000827s | 0.000790s | 0.000805s | byte equality observed |
| vector_mutate.test | 10 | 0.000789s | 0.000791s | 0.000792s | byte equality observed |
| vector_n.test | 10 | 0.000802s | 0.000783s | 0.000805s | byte equality observed |
| vector_nest.test | 10 | 0.000792s | 0.000791s | 0.000785s | byte equality observed |
| vector_tie.test | 10 | 0.000788s | 0.000802s | 0.000777s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000805s | 0.000819s | 0.000809s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000810s | 0.000793s | 0.000811s | byte equality observed |
| vector_value_at.test | 10 | 0.000793s | 0.000810s | 0.000819s | byte equality observed |
| zip.test | 10 | 0.000774s | 0.000817s | 0.000818s | byte equality observed |
| zip2.test | 10 | 0.000801s | 0.000814s | 0.000799s | byte equality observed |
| zip_ignore.test | 10 | 0.000771s | 0.000836s | 0.000795s | byte equality observed |
| zip_view.test | 10 | 0.000802s | 0.000806s | 0.000804s | byte equality observed |
| zip_view2.test | 10 | 0.000804s | 0.000819s | 0.000793s | byte equality observed |
| zip_view_ignore.test | 10 | 0.000770s | 0.000795s | 0.000786s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45739944580).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
