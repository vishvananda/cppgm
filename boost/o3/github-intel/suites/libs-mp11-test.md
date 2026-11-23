# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.029242 | 0.058592 | 0.090179 | — | — | — |
| complex_h.test | COMPILE | 0.119526 | 0.249263 | 0.334881 | — | — | — |
| mp_size.test | RUN | 0.141237 | 0.829537 | 0.482711 | 0.001174 | 0.001232 | 0.001084 |
| mp_size_2.test | RUN | 0.011942 | 0.029063 | 0.041683 | 0.000456 | 0.000501 | 0.001015 |
| mp_empty.test | RUN | 0.129755 | 0.517929 | 0.447742 | 0.001319 | 0.001291 | 0.001009 |
| mp_empty_2.test | RUN | 0.011780 | 0.029745 | 0.040429 | 0.000424 | 0.000478 | 0.001044 |
| mp_assign.test | RUN | 0.158933 | 1.104230 | 0.581298 | 0.001127 | 0.001324 | 0.000990 |
| mp_assign_2.test | RUN | 0.012936 | 0.029222 | 0.040275 | 0.000494 | 0.000474 | 0.001032 |
| mp_clear.test | RUN | 0.135484 | 0.472042 | 0.447605 | 0.001120 | 0.001220 | 0.001036 |
| mp_clear_2.test | RUN | 0.013119 | 0.027749 | 0.039794 | 0.000446 | 0.000433 | 0.000996 |
| mp_front.test | RUN | 0.139501 | 0.747246 | 0.513247 | 0.001160 | 0.001258 | 0.001017 |
| mp_front_2.test | RUN | 0.012518 | 0.027007 | 0.039488 | 0.000473 | 0.000461 | 0.001012 |
| mp_pop_front.test | RUN | 0.143275 | 0.791895 | 0.514839 | 0.001038 | 0.001204 | 0.001034 |
| mp_pop_front_2.test | RUN | 0.012041 | 0.029301 | 0.038951 | 0.000500 | 0.000506 | 0.001035 |
| mp_second.test | RUN | 0.136588 | 0.498721 | 0.461823 | 0.001330 | 0.001313 | 0.001030 |
| mp_second_2.test | RUN | 0.011462 | 0.029244 | 0.039358 | 0.000471 | 0.000461 | 0.001003 |
| mp_third.test | RUN | 0.136419 | 0.449369 | 0.446183 | 0.001216 | 0.001301 | 0.001024 |
| mp_third_2.test | RUN | 0.012561 | 0.030004 | 0.038603 | 0.000491 | 0.000475 | 0.000989 |
| mp_push_front.test | RUN | 0.185050 | 1.721121 | 0.847177 | 0.001274 | 0.001252 | 0.001048 |
| mp_push_front_2.test | RUN | 0.011894 | 0.027385 | 0.036946 | 0.000475 | 0.000472 | 0.001055 |
| mp_push_back.test | RUN | 0.182173 | 1.692923 | 0.824712 | 0.001169 | 0.001157 | 0.001052 |
| mp_push_back_2.test | RUN | 0.012659 | 0.028998 | 0.040278 | 0.000499 | 0.000508 | 0.000998 |
| mp_rename.test | RUN | 0.171718 | 1.563859 | 0.726961 | 0.000934 | 0.001222 | 0.001079 |
| mp_rename_2.test | RUN | 0.013289 | 0.028404 | 0.042322 | 0.000455 | 0.000484 | 0.001106 |
| mp_append.test | RUN | 0.167889 | 1.760270 | 0.777645 | 0.001318 | 0.001192 | 0.001069 |
| mp_append_2.test | RUN | 0.412717 | 3.982045 | 1.073967 | 0.001414 | 0.001203 | 0.001093 |
| mp_append_3.test | RUN | 0.012430 | 0.027539 | 0.039299 | 0.000472 | 0.000506 | 0.001013 |
| mp_append_sf.test | RUN | 0.130187 | 0.418334 | 0.422735 | 0.001264 | 0.001230 | 0.001039 |
| mp_replace_front.test | RUN | 0.160860 | 1.245491 | 0.614466 | 0.001336 | 0.001261 | 0.000984 |
| mp_replace_front_2.test | RUN | 0.012293 | 0.027338 | 0.040672 | 0.000475 | 0.000417 | 0.000971 |
| mp_replace_second.test | RUN | 0.158705 | 0.799120 | 0.593117 | 0.001117 | 0.001242 | 0.001175 |
| mp_replace_second_2.test | RUN | 0.012844 | 0.026885 | 0.039757 | 0.000501 | 0.000502 | 0.000996 |
| mp_replace_third.test | RUN | 0.147753 | 0.658871 | 0.520808 | 0.001490 | 0.001186 | 0.001065 |
| mp_replace_third_2.test | RUN | 0.013743 | 0.028153 | 0.040390 | 0.000453 | 0.000492 | 0.001014 |
| mp_apply_q.test | RUN | 0.168389 | 1.555894 | 0.713870 | 0.001299 | 0.001158 | 0.001015 |
| mp_apply_q_sf.test | RUN | 0.130726 | 0.441284 | 0.425856 | 0.001325 | 0.001228 | 0.001141 |
| mp_is_list.test | RUN | 0.140764 | 0.524533 | 0.454071 | 0.001284 | 0.001205 | 0.000995 |
| mp_list_c.test | RUN | 0.140684 | 0.630306 | 0.502941 | 0.001234 | 0.001244 | 0.001045 |
| mp_transform_front.test | RUN | 0.158712 | 1.262570 | 0.620022 | 0.001248 | 0.001228 | 0.001091 |
| mp_transform_front_2.test | RUN | 0.011608 | 0.029504 | 0.039662 | 0.000450 | 0.000469 | 0.001056 |
| mp_transform_second.test | RUN | 0.152453 | 1.079242 | 0.570925 | 0.001255 | 0.001098 | 0.001026 |
| mp_transform_second_2.test | RUN | 0.012098 | 0.027986 | 0.040081 | 0.000537 | 0.000555 | 0.000956 |
| mp_transform_third.test | RUN | 0.144239 | 0.819188 | 0.512025 | 0.001093 | 0.001209 | 0.001039 |
| mp_transform_third_2.test | RUN | 0.012556 | 0.029031 | 0.038942 | 0.000461 | 0.000452 | 0.001022 |
| mp_list_v.test | RUN | 0.011778 | 0.028208 | 0.038717 | 0.000460 | 0.000480 | 0.000973 |
| mp_rename_v.test | RUN | 0.011657 | 0.027872 | 0.039916 | 0.000494 | 0.000467 | 0.001178 |
| mp_is_value_list.test | RUN | 0.128256 | 0.313511 | 0.413275 | 0.001260 | 0.001135 | 0.001110 |
| mp_transform.test | RUN | 0.329630 | 2.660685 | 1.319076 | 0.001265 | 0.001259 | 0.000988 |
| mp_transform_2.test | RUN | 0.121705 | 0.287702 | 0.379684 | 0.001089 | 0.001218 | 0.001065 |
| mp_transform_q.test | RUN | 0.328314 | 2.562928 | 1.276623 | 0.001202 | 0.001321 | 0.001057 |
| mp_transform_q_2.test | RUN | 0.337003 | 0.801465 | 1.621588 | 0.001150 | 0.001107 | 0.001227 |
| mp_transform_sf.test | RUN | 0.140485 | 0.441774 | 0.449949 | 0.001161 | 0.001208 | 0.001107 |
| mp_transform_if.test | RUN | 0.173022 | 1.259961 | 0.692047 | 0.001167 | 0.001382 | 0.001043 |
| mp_transform_if_q.test | RUN | 0.179150 | 1.266156 | 0.688664 | 0.001224 | 0.001214 | 0.001285 |
| mp_filter.test | RUN | 0.151989 | 0.744036 | 0.513592 | 0.001216 | 0.001219 | 0.001162 |
| mp_fill.test | RUN | 0.149693 | 0.560656 | 0.502708 | 0.001203 | 0.001320 | 0.001107 |
| mp_fill_2.test | RUN | 0.022408 | 0.043358 | 0.069431 | 0.000522 | 0.000454 | 0.001038 |
| mp_count.test | RUN | 0.280739 | 1.334537 | 0.762485 | 0.001171 | 0.001196 | 0.001040 |
| mp_count_if.test | RUN | 0.291058 | 1.361579 | 0.846268 | 0.001127 | 0.001182 | 0.001293 |
| mp_count_if_q.test | RUN | 0.146608 | 0.897035 | 0.475329 | 0.001292 | 0.001229 | 0.001244 |
| mp_contains.test | RUN | 0.137708 | 0.537329 | 0.459860 | 0.001245 | 0.001293 | 0.001056 |
| mp_starts_with.test | RUN | 0.142821 | 0.531832 | 0.477860 | 0.001139 | 0.001185 | 0.001217 |
| mp_starts_with_sf.test | RUN | 0.139372 | 0.451491 | 0.450433 | 0.001133 | 0.001356 | 0.001151 |
| mp_repeat.test | RUN | 0.213376 | 2.284593 | 0.889799 | 0.001160 | 0.001166 | 0.001173 |
| mp_repeat_2.test | RUN | 0.021522 | 0.048336 | 0.069952 | 0.000410 | 0.000489 | 0.001096 |
| mp_repeat_3.test | RUN | 0.178278 | 0.278692 | 0.435738 | 0.001497 | 0.001184 | 0.001186 |
| mp_product.test | RUN | 0.162155 | 1.361434 | 0.631490 | 0.001108 | 0.001264 | 0.001024 |
| mp_drop.test | RUN | 0.182702 | 1.698996 | 0.751265 | 0.001144 | 0.001229 | 0.001045 |
| mp_drop_2.test | RUN | 0.021704 | 0.045637 | 0.071676 | 0.000467 | 0.000488 | 0.001045 |
| mp_iota.test | RUN | 0.172375 | 1.424681 | 0.655208 | 0.001154 | 0.001158 | 0.001021 |
| mp_iota_2.test | RUN | 0.185459 | 1.728197 | 0.746537 | 0.001100 | 0.001304 | 0.001170 |
| mp_at.test | RUN | 0.144815 | 0.730835 | 0.524767 | 0.001077 | 0.001227 | 0.001106 |
| mp_at_2.test | RUN | 0.021774 | 0.044840 | 0.069473 | 0.000482 | 0.000464 | 0.001038 |
| mp_at_sf.test | RUN | 0.140604 | 0.447800 | 0.447421 | 0.001086 | 0.001223 | 0.001082 |
| mp_take.test | RUN | 0.249505 | 2.238777 | 0.885433 | 0.001194 | 0.001225 | 0.001079 |
| mp_take_2.test | RUN | 0.021558 | 0.043019 | 0.072500 | 0.000576 | 0.000473 | 0.001095 |
| mp_slice.test | RUN | 0.295584 | 2.277405 | 1.159650 | 0.001146 | 0.001276 | 0.001175 |
| mp_slice_2.test | RUN | 0.021697 | 0.043056 | 0.071919 | 0.000479 | 0.000505 | 0.001003 |
| mp_replace.test | RUN | 0.178225 | 1.142774 | 0.724088 | 0.001158 | 0.001314 | 0.001091 |
| mp_replace_if.test | RUN | 0.168543 | 1.005887 | 0.663298 | 0.001130 | 0.001210 | 0.001178 |
| mp_replace_if_q.test | RUN | 0.167218 | 1.000538 | 0.663565 | 0.001323 | 0.001185 | 0.001133 |
| mp_copy_if.test | RUN | 0.172843 | 1.428002 | 0.630019 | 0.001089 | 0.001227 | 0.001080 |
| mp_copy_if_q.test | RUN | 0.176452 | 1.433396 | 0.643203 | 0.001204 | 0.001201 | 0.001111 |
| mp_remove.test | RUN | 0.167067 | 0.945206 | 0.652656 | 0.001053 | 0.001228 | 0.001061 |
| mp_remove_if.test | RUN | 0.174446 | 1.490775 | 0.684641 | 0.001175 | 0.001171 | 0.001093 |
| mp_remove_if_q.test | RUN | 0.180435 | 1.504868 | 0.677237 | 0.001260 | 0.000955 | 0.001059 |
| mp_partition.test | RUN | 0.178959 | 1.426282 | 0.733023 | 0.001162 | 0.001260 | 0.001362 |
| mp_partition_q.test | RUN | 0.177040 | 1.407947 | 0.738195 | 0.001196 | 0.001054 | 0.001136 |
| mp_sort.test | RUN | 0.168747 | 1.004205 | 0.636540 | 0.001177 | 0.001305 | 0.001059 |
| mp_sort_q.test | RUN | 0.167962 | 1.001992 | 0.636478 | 0.001169 | 0.001261 | 0.001106 |
| mp_find.test | RUN | 0.159560 | 1.085309 | 0.549997 | 0.001251 | 0.000870 | 0.001076 |
| mp_find_if.test | RUN | 0.156514 | 0.992952 | 0.511195 | 0.001119 | 0.000959 | 0.001115 |
| mp_find_if_q.test | RUN | 0.172260 | 1.101070 | 0.639422 | 0.001227 | 0.001212 | 0.001144 |
| mp_reverse.test | RUN | 0.368812 | 2.991460 | 1.268305 | 0.001304 | 0.001309 | 0.001273 |
| mp_fold.test | RUN | 0.621037 | 2.302606 | 3.236414 | 0.001125 | 0.001222 | 0.001013 |
| mp_fold_q.test | RUN | 0.158155 | 1.004674 | 0.604180 | 0.001480 | 0.001189 | 0.001223 |
| mp_fold_q_sf.test | RUN | 0.138228 | 0.452789 | 0.463119 | 0.001253 | 0.001290 | 0.001076 |
| mp_reverse_fold.test | RUN | 0.292189 | 2.221365 | 0.896379 | 0.001093 | 0.001202 | 0.001082 |
| mp_reverse_fold_q.test | RUN | 0.164438 | 1.210408 | 0.643371 | 0.001220 | 0.001171 | 0.001217 |
| mp_unique.test | RUN | 0.159356 | 1.085834 | 0.622223 | 0.001090 | 0.001218 | 0.001031 |
| mp_unique_if.test | RUN | 0.307449 | 2.317262 | 1.000064 | 0.001130 | 0.001219 | 0.001142 |
| mp_unique_if_q.test | RUN | 0.254208 | 2.289474 | 0.827605 | 0.001340 | 0.001238 | 0.001103 |
| mp_all_of.test | RUN | 0.393965 | 1.211574 | 1.042950 | 0.001103 | 0.001286 | 0.001112 |
| mp_all_of_q.test | RUN | 0.141396 | 0.521760 | 0.456624 | 0.001211 | 0.001366 | 0.001242 |
| mp_any_of.test | RUN | 0.390487 | 1.253050 | 1.040278 | 0.001126 | 0.001253 | 0.001172 |
| mp_any_of_q.test | RUN | 0.139303 | 0.514280 | 0.435931 | 0.001346 | 0.001440 | 0.001162 |
| mp_none_of.test | RUN | 0.389961 | 1.245510 | 1.037131 | 0.001134 | 0.001327 | 0.001105 |
| mp_none_of_q.test | RUN | 0.140268 | 0.535741 | 0.453945 | 0.001230 | 0.001295 | 0.001109 |
| mp_replace_at.test | RUN | 0.170526 | 1.081793 | 0.716776 | 0.001108 | 0.001256 | 0.001142 |
| mp_replace_at_c.test | RUN | 0.177878 | 1.098546 | 0.711190 | 0.001262 | 0.001177 | 0.001050 |
| mp_for_each.test | RUN | 0.160961 | 0.709280 | 0.707242 | 0.001200 | 0.001200 | 0.000753 |
| mp_insert.test | RUN | 0.280428 | 2.261477 | 1.053461 | 0.001325 | 0.001372 | 0.001262 |
| mp_insert_2.test | RUN | 0.024098 | 0.046706 | 0.065711 | 0.000496 | 0.000406 | 0.001049 |
| mp_erase.test | RUN | 0.305323 | 2.377894 | 1.186296 | 0.001218 | 0.001335 | 0.001101 |
| mp_erase_2.test | RUN | 0.022204 | 0.044834 | 0.066970 | 0.000533 | 0.000473 | 0.000996 |
| mp_with_index.test | RUN | 0.396689 | 4.794929 | 2.640081 | 0.001684 | 0.001510 | 0.001320 |
| mp_with_index_cx.test | RUN | 0.002905 | 0.013278 | 0.018326 | 0.000466 | 0.000449 | 0.001006 |
| mp_from_sequence.test | RUN | 0.171472 | 1.254228 | 0.669349 | 0.001201 | 0.001219 | 0.001185 |
| mp_from_sequence_2.test | RUN | 0.182007 | 1.478452 | 0.754360 | 0.001101 | 0.001257 | 0.001143 |
| mp_from_sequence_3.test | RUN | 0.148565 | 0.646388 | 0.523140 | 0.001208 | 0.001205 | 0.001052 |
| mp_min_element.test | RUN | 0.149303 | 0.584123 | 0.481605 | 0.001235 | 0.001281 | 0.001009 |
| mp_min_element_2.test | RUN | 0.022353 | 0.045032 | 0.070048 | 0.000519 | 0.000505 | 0.000993 |
| mp_min_element_q.test | RUN | 0.147811 | 0.578713 | 0.492765 | 0.001197 | 0.001256 | 0.001132 |
| mp_min_element_q_2.test | RUN | 0.021736 | 0.045685 | 0.064951 | 0.000517 | 0.000488 | 0.001003 |
| mp_max_element.test | RUN | 0.147209 | 0.574908 | 0.498383 | 0.001228 | 0.001252 | 0.001016 |
| mp_max_element_2.test | RUN | 0.023507 | 0.045286 | 0.066685 | 0.000496 | 0.000506 | 0.001118 |
| mp_max_element_q.test | RUN | 0.149332 | 0.585643 | 0.479990 | 0.001099 | 0.001254 | 0.001028 |
| mp_max_element_q_2.test | RUN | 0.021707 | 0.045524 | 0.066372 | 0.000502 | 0.000469 | 0.001042 |
| mp_nth_element.test | RUN | 0.166828 | 0.835845 | 0.595226 | 0.001104 | 0.001274 | 0.000973 |
| mp_nth_element_q.test | RUN | 0.156396 | 0.828091 | 0.588440 | 0.001138 | 0.001221 | 0.001051 |
| mp_back.test | RUN | 0.161380 | 0.673404 | 0.547530 | 0.001152 | 0.001110 | 0.001032 |
| mp_back_2.test | RUN | 0.021045 | 0.044805 | 0.068678 | 0.000414 | 0.000495 | 0.001004 |
| mp_pop_back.test | RUN | 0.469387 | 4.589896 | 1.226267 | 0.001269 | 0.001227 | 0.001049 |
| mp_pop_back_2.test | RUN | 0.023009 | 0.043716 | 0.067029 | 0.000511 | 0.000475 | 0.000962 |
| mp_flatten.test | RUN | 0.186101 | 1.617334 | 0.814054 | 0.001209 | 0.001207 | 0.001293 |
| mp_rotate_left.test | RUN | 0.183725 | 1.756567 | 0.797247 | 0.001320 | 0.001311 | 0.001167 |
| mp_rotate_right.test | RUN | 0.186583 | 1.737220 | 0.799436 | 0.001163 | 0.001348 | 0.001092 |
| mp_power_set.test | RUN | 0.188903 | 1.672499 | 0.794628 | 0.001252 | 0.001237 | 0.001026 |
| mp_partial_sum.test | RUN | 0.253876 | 2.248230 | 0.916707 | 0.001288 | 0.001178 | 0.001043 |
| mp_iterate.test | RUN | 0.162384 | 0.654854 | 0.617828 | 0.001197 | 0.001262 | 0.001047 |
| mp_pairwise_fold.test | RUN | 0.195235 | 1.544572 | 0.806378 | 0.001263 | 0.001220 | 0.001258 |
| mp_pairwise_fold_q.test | RUN | 0.145854 | 0.433548 | 0.457029 | 0.001215 | 0.000899 | 0.001149 |
| mp_sliding_fold.test | RUN | 0.372532 | 2.982761 | 1.520077 | 0.001153 | 0.001302 | 0.001290 |
| mp_sliding_fold_q.test | RUN | 0.375450 | 2.997010 | 1.517451 | 0.001320 | 0.001249 | 0.001234 |
| mp_intersperse.test | RUN | 0.174108 | 1.095159 | 0.706654 | 0.001182 | 0.001285 | 0.001117 |
| mp_split.test | RUN | 0.257041 | 2.104239 | 0.989535 | 0.001132 | 0.001198 | 0.001256 |
| mp_join.test | RUN | 0.197092 | 1.764685 | 0.882826 | 0.001236 | 0.001206 | 0.001025 |
| integral.test | RUN | 0.146181 | 0.774401 | 0.513000 | 0.001401 | 0.001398 | 0.001065 |
| mp_value.test | RUN | 0.009615 | 0.024661 | 0.036156 | 0.000490 | 0.000500 | 0.001027 |
| mp_identity.test | RUN | 0.147052 | 0.714914 | 0.505754 | 0.001105 | 0.001322 | 0.001092 |
| mp_inherit.test | RUN | 0.135272 | 0.505744 | 0.465952 | 0.001207 | 0.001218 | 0.001068 |
| mp_if.test | RUN | 0.137056 | 0.577454 | 0.462077 | 0.001178 | 0.001253 | 0.001035 |
| mp_if_sf.test | RUN | 0.127187 | 0.419181 | 0.409114 | 0.001358 | 0.001124 | 0.001045 |
| mp_eval_if.test | RUN | 0.140797 | 0.621490 | 0.488024 | 0.001226 | 0.001141 | 0.001163 |
| mp_eval_if_sf.test | RUN | 0.138324 | 0.436116 | 0.432311 | 0.001184 | 0.001145 | 0.001082 |
| mp_valid.test | RUN | 0.130537 | 0.446284 | 0.429304 | 0.001156 | 0.001116 | 0.001203 |
| mp_defer.test | RUN | 0.140733 | 0.752101 | 0.523878 | 0.001221 | 0.001182 | 0.001073 |
| mp_quote.test | RUN | 0.150563 | 0.760364 | 0.550691 | 0.001200 | 0.001205 | 0.001110 |
| mp_invoke_q.test | RUN | 0.163276 | 1.000232 | 0.611002 | 0.001160 | 0.001364 | 0.001079 |
| mp_invoke_q_sf.test | RUN | 0.133858 | 0.429597 | 0.417139 | 0.001277 | 0.001216 | 0.001045 |
| mp_quote_trait.test | RUN | 0.152569 | 0.836124 | 0.520613 | 0.000942 | 0.001197 | 0.001078 |
| mp_cond.test | RUN | 0.138547 | 0.509065 | 0.452597 | 0.001138 | 0.001207 | 0.001057 |
| mp_cond_sf.test | RUN | 0.134734 | 0.435579 | 0.422606 | 0.001208 | 0.001278 | 0.001052 |
| mp_not_fn.test | RUN | 0.132249 | 0.436143 | 0.410850 | 0.001304 | 0.001178 | 0.001070 |
| mp_eval_if_not.test | RUN | 0.138861 | 0.618219 | 0.474741 | 0.001146 | 0.001244 | 0.001169 |
| mp_eval_or.test | RUN | 0.137479 | 0.326364 | 0.439938 | 0.001241 | 0.001107 | 0.001089 |
| mp_compose.test | RUN | 0.157636 | 1.028871 | 0.567128 | 0.001229 | 0.001186 | 0.001087 |
| mp_valid_and_true.test | RUN | 0.135663 | 0.520486 | 0.448008 | 0.001256 | 0.001396 | 0.001021 |
| mp_compose_sf.test | COMPILE | 0.031728 | 0.057091 | 0.096638 | — | — | — |
| integer_sequence.test | RUN | 0.166137 | 1.021714 | 0.648220 | 0.001228 | 0.001109 | 0.001045 |
| tuple_for_each.test | RUN | 0.134756 | 0.366252 | 0.449355 | 0.001306 | 0.001345 | 0.001079 |
| tuple_for_each_cx.test | COMPILE | 0.026556 | 0.050972 | 0.077045 | — | — | — |
| tuple_apply.test | RUN | 0.137822 | 0.367974 | 0.464418 | 0.001345 | 0.001369 | 0.001055 |
| tuple_apply_cx.test | COMPILE | 0.038325 | 0.069970 | 0.105380 | — | — | — |
| construct_from_tuple.test | RUN | 0.144478 | 0.392354 | 0.454479 | 0.001415 | 0.001300 | 0.001091 |
| construct_from_tuple_cx.test | COMPILE | 0.038525 | 0.074638 | 0.106098 | — | — | — |
| tuple_transform.test | RUN | 0.228740 | 0.798766 | 0.891774 | 0.001554 | 0.000885 | 0.001066 |
| tuple_transform_2.test | RUN | 0.198779 | 0.572024 | 0.794906 | 0.001247 | 0.001249 | 0.001041 |
| tuple_transform_cx.test | COMPILE | 0.036006 | 0.068540 | 0.103967 | — | — | — |
| mp_set_contains.test | RUN | 0.148051 | 0.531703 | 0.468070 | 0.001204 | 0.001254 | 0.000987 |
| mp_set_push_back.test | RUN | 0.196550 | 1.655003 | 0.802081 | 0.001268 | 0.001223 | 0.001054 |
| mp_set_push_front.test | RUN | 0.257193 | 2.005569 | 0.916149 | 0.001198 | 0.001200 | 0.001152 |
| mp_is_set.test | RUN | 0.148370 | 0.529718 | 0.465876 | 0.001390 | 0.001304 | 0.001119 |
| mp_set_union.test | RUN | 0.188709 | 1.418156 | 0.760966 | 0.001274 | 0.001332 | 0.001107 |
| mp_set_union_sf.test | RUN | 0.140289 | 0.416767 | 0.422154 | 0.001178 | 0.001054 | 0.001097 |
| mp_set_difference.test | RUN | 0.169555 | 1.101878 | 0.648464 | 0.001512 | 0.001354 | 0.001181 |
| mp_set_difference_sf.test | RUN | 0.138073 | 0.424966 | 0.437187 | 0.001259 | 0.001273 | 0.001172 |
| mp_set_intersection.test | RUN | 0.165145 | 1.091271 | 0.623082 | 0.001397 | 0.001182 | 0.001101 |
| mp_set_intersection_sf.test | RUN | 0.138776 | 0.421130 | 0.427578 | 0.001190 | 0.001118 | 0.001102 |
| mp_all.test | RUN | 0.142078 | 0.527126 | 0.459922 | 0.001526 | 0.001210 | 0.001081 |
| mp_all_2.test | RUN | 0.410946 | 1.121479 | 1.046706 | 0.001316 | 0.001148 | 0.001081 |
| mp_and.test | RUN | 0.143200 | 0.512080 | 0.455776 | 0.001277 | 0.001190 | 0.001148 |
| mp_any.test | RUN | 0.138986 | 0.525821 | 0.467651 | 0.001213 | 0.001205 | 0.001071 |
| mp_any_2.test | RUN | 0.407740 | 1.128888 | 1.014681 | 0.001394 | 0.001322 | 0.001103 |
| mp_or.test | RUN | 0.140727 | 0.519566 | 0.472103 | 0.001419 | 0.001202 | 0.001035 |
| mp_same.test | RUN | 0.268708 | 0.878130 | 0.728661 | 0.001206 | 0.001126 | 0.001086 |
| mp_plus.test | RUN | 0.145401 | 0.630658 | 0.487486 | 0.001250 | 0.001327 | 0.001110 |
| mp_less.test | RUN | 0.142953 | 0.526552 | 0.446802 | 0.001350 | 0.001112 | 0.001049 |
| mp_min.test | RUN | 0.140417 | 0.483740 | 0.450063 | 0.001676 | 0.001198 | 0.001109 |
| mp_max.test | RUN | 0.141793 | 0.531947 | 0.462962 | 0.001301 | 0.001183 | 0.000765 |
| mp_similar.test | RUN | 0.137866 | 0.518197 | 0.446498 | 0.001250 | 0.001169 | 0.001092 |
| mp_map_find.test | RUN | 0.166046 | 0.966806 | 0.615135 | 0.001344 | 0.001467 | 0.001093 |
| mp_map_find_2.test | RUN | 0.155078 | 0.371297 | 0.513765 | 0.001469 | 0.001240 | 0.001066 |
| mp_map_find_3.test | RUN | 0.158244 | 0.361823 | 0.519794 | 0.001258 | 0.001178 | 0.001066 |
| mp_map_find_4.test | RUN | 0.143303 | 0.343771 | 0.471753 | 0.001259 | 0.001095 | 0.001071 |
| mp_map_contains.test | RUN | 0.151947 | 0.539565 | 0.475575 | 0.001406 | 0.001242 | 0.001146 |
| mp_map_insert.test | RUN | 0.200500 | 1.883426 | 0.868447 | 0.001318 | 0.001297 | 0.001217 |
| mp_map_replace.test | RUN | 0.265393 | 2.108037 | 1.017199 | 0.001380 | 0.001228 | 0.001030 |
| mp_map_erase.test | RUN | 0.199568 | 1.556436 | 0.841368 | 0.001334 | 0.001226 | 0.001096 |
| mp_map_update.test | RUN | 0.174918 | 1.016196 | 0.633628 | 0.001455 | 0.001226 | 0.001069 |
| mp_map_update_q.test | RUN | 0.168177 | 1.010134 | 0.640004 | 0.001281 | 0.001117 | 0.001132 |
| mp_map_keys.test | RUN | 0.162548 | 0.890434 | 0.631187 | 0.001248 | 0.001198 | 0.001164 |
| mp_is_map.test | RUN | 0.152482 | 0.542632 | 0.497840 | 0.001098 | 0.001406 | 0.000905 |
| mp_bind.test | RUN | 0.191694 | 1.632400 | 0.767881 | 0.001271 | 0.001261 | 0.001101 |
| mp_bind_q.test | RUN | 0.165167 | 1.008641 | 0.610165 | 0.001482 | 0.001139 | 0.001104 |
| mp_bind_front.test | RUN | 0.171654 | 1.109684 | 0.577676 | 0.001198 | 0.001203 | 0.001138 |
| mp_bind_back.test | RUN | 0.161173 | 1.094994 | 0.584416 | 0.001203 | 0.001116 | 0.001168 |
| mp_lambda.test | RUN | 0.385872 | 3.314398 | 1.606839 | 0.001092 | 0.000896 | 0.001096 |
| mpl.test | RUN | 0.329165 | 0.856183 | 1.231553 | 0.001121 | 0.001168 | 0.001065 |
| mpl_list.test | RUN | 0.178633 | 0.644658 | 0.564268 | 0.001580 | 0.001126 | 0.001082 |
| mpl_tuple.test | RUN | 0.178036 | 0.638677 | 0.577382 | 0.001258 | 0.001114 | 0.001204 |
| version.test | RUN | 0.088413 | 0.226606 | 0.293930 | 0.001394 | 0.001125 | 0.001203 |
| mp11_version.test | RUN | 0.111104 | 0.262615 | 0.333744 | 0.001367 | 0.001168 | 0.000938 |
| list_version.test | RUN | 0.092957 | 0.231604 | 0.296818 | 0.001371 | 0.001127 | 0.001137 |
| algorithm_version.test | RUN | 0.102523 | 0.249091 | 0.316510 | 0.001194 | 0.001227 | 0.001034 |
| integral_version.test | RUN | 0.089541 | 0.232387 | 0.282609 | 0.001273 | 0.001174 | 0.001167 |
| utility_version.test | RUN | 0.088939 | 0.232373 | 0.284347 | 0.001306 | 0.001138 | 0.001161 |
| function_version.test | RUN | 0.090228 | 0.233128 | 0.304185 | 0.001210 | 0.001220 | 0.001235 |
| map_version.test | RUN | 0.104593 | 0.249365 | 0.321927 | 0.001163 | 0.001190 | 0.001059 |
| set_version.test | RUN | 0.093505 | 0.230513 | 0.298292 | 0.001430 | 0.001093 | 0.001075 |
| bind_version.test | RUN | 0.103337 | 0.247617 | 0.314901 | 0.001182 | 0.001215 | 0.001054 |
| integer_sequence_version.test | RUN | 0.091640 | 0.221253 | 0.287753 | 0.001156 | 0.001199 | 0.000874 |
| tuple_version.test | RUN | 0.103448 | 0.249157 | 0.215105 | 0.000949 | 0.001157 | 0.001139 |
| mpl_version.test | RUN | 0.075688 | 0.176498 | 0.315826 | 0.000928 | 0.000953 | 0.000797 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 0.997×, 1.002× | 1.000× |
| clang | 1.106× | 1.109×, 1.102× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45241427099).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000739s | 0.000712s | 0.000770s | byte equality observed |
| bind_version.test | 10 | 0.000748s | 0.000736s | 0.000759s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000734s | 0.000748s | 0.000763s | byte equality observed |
| function_version.test | 10 | 0.000748s | 0.000737s | 0.000759s | byte equality observed |
| integer_sequence.test | 10 | 0.000749s | 0.000770s | 0.000747s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000734s | 0.000731s | 0.000754s | byte equality observed |
| integral.test | 10 | 0.000744s | 0.000745s | 0.000755s | byte equality observed |
| integral_version.test | 10 | 0.000742s | 0.000749s | 0.000756s | byte equality observed |
| list_version.test | 10 | 0.000733s | 0.000743s | 0.000787s | byte equality observed |
| map_version.test | 10 | 0.000739s | 0.000740s | 0.000824s | byte equality observed |
| mp11_version.test | 10 | 0.000746s | 0.000739s | 0.000815s | byte equality observed |
| mp_all.test | 10 | 0.000723s | 0.000740s | 0.000822s | byte equality observed |
| mp_all_2.test | 10 | 0.000751s | 0.000756s | 0.000821s | byte equality observed |
| mp_all_of.test | 10 | 0.000751s | 0.000753s | 0.000840s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000752s | 0.000753s | 0.000821s | byte equality observed |
| mp_and.test | 10 | 0.000748s | 0.000756s | 0.000808s | byte equality observed |
| mp_any.test | 10 | 0.000755s | 0.000749s | 0.000783s | byte equality observed |
| mp_any_2.test | 10 | 0.000745s | 0.000755s | 0.000801s | byte equality observed |
| mp_any_of.test | 10 | 0.000723s | 0.000742s | 0.000815s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000728s | 0.000753s | 0.000766s | byte equality observed |
| mp_append.test | 10 | 0.000749s | 0.000741s | 0.000828s | byte equality observed |
| mp_append_2.test | 10 | 0.000797s | 0.000765s | 0.000827s | byte equality observed |
| mp_append_3.test | 10 | 0.000362s | 0.000349s | 0.000792s | byte equality observed |
| mp_append_sf.test | 10 | 0.000807s | 0.000749s | 0.000778s | byte equality observed |
| mp_apply_q.test | 10 | 0.000789s | 0.000752s | 0.000798s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.000800s | 0.000737s | 0.000791s | byte equality observed |
| mp_assign.test | 10 | 0.000812s | 0.000761s | 0.000803s | byte equality observed |
| mp_assign_2.test | 10 | 0.000366s | 0.000346s | 0.000805s | byte equality observed |
| mp_at.test | 10 | 0.000795s | 0.000761s | 0.000809s | byte equality observed |
| mp_at_2.test | 10 | 0.000366s | 0.000358s | 0.000814s | byte equality observed |
| mp_at_sf.test | 10 | 0.000803s | 0.000807s | 0.000801s | byte equality observed |
| mp_back.test | 10 | 0.000799s | 0.000835s | 0.000817s | byte equality observed |
| mp_back_2.test | 10 | 0.000359s | 0.000359s | 0.000786s | byte equality observed |
| mp_bind.test | 10 | 0.000810s | 0.000805s | 0.000801s | byte equality observed |
| mp_bind_back.test | 10 | 0.000812s | 0.000843s | 0.000818s | byte equality observed |
| mp_bind_front.test | 10 | 0.000810s | 0.000844s | 0.000792s | byte equality observed |
| mp_bind_q.test | 10 | 0.000808s | 0.000792s | 0.000802s | byte equality observed |
| mp_clear.test | 10 | 0.000819s | 0.000802s | 0.000827s | byte equality observed |
| mp_clear_2.test | 10 | 0.000364s | 0.000368s | 0.000812s | byte equality observed |
| mp_compose.test | 10 | 0.000824s | 0.000832s | 0.000826s | byte equality observed |
| mp_cond.test | 10 | 0.000805s | 0.000828s | 0.000819s | byte equality observed |
| mp_cond_sf.test | 10 | 0.000806s | 0.000798s | 0.000818s | byte equality observed |
| mp_contains.test | 10 | 0.000800s | 0.000822s | 0.000826s | byte equality observed |
| mp_copy_if.test | 10 | 0.000814s | 0.000833s | 0.000824s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.000811s | 0.000831s | 0.000836s | byte equality observed |
| mp_count.test | 10 | 0.000827s | 0.000842s | 0.000808s | byte equality observed |
| mp_count_if.test | 10 | 0.000809s | 0.000827s | 0.000804s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000803s | 0.000832s | 0.000821s | byte equality observed |
| mp_defer.test | 10 | 0.000791s | 0.000830s | 0.000823s | byte equality observed |
| mp_drop.test | 10 | 0.000792s | 0.000805s | 0.000823s | byte equality observed |
| mp_drop_2.test | 10 | 0.000362s | 0.000359s | 0.000790s | byte equality observed |
| mp_empty.test | 10 | 0.000800s | 0.000808s | 0.000814s | byte equality observed |
| mp_empty_2.test | 10 | 0.000363s | 0.000357s | 0.000833s | byte equality observed |
| mp_erase.test | 10 | 0.000822s | 0.000821s | 0.000826s | byte equality observed |
| mp_erase_2.test | 10 | 0.000365s | 0.000362s | 0.000813s | byte equality observed |
| mp_eval_if.test | 10 | 0.000809s | 0.000794s | 0.000844s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.000803s | 0.000809s | 0.000847s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.000798s | 0.000835s | 0.000792s | byte equality observed |
| mp_eval_or.test | 10 | 0.000801s | 0.000828s | 0.000817s | byte equality observed |
| mp_fill.test | 10 | 0.000810s | 0.000800s | 0.000823s | byte equality observed |
| mp_fill_2.test | 10 | 0.000359s | 0.000356s | 0.000809s | byte equality observed |
| mp_filter.test | 10 | 0.000785s | 0.000815s | 0.000806s | byte equality observed |
| mp_find.test | 10 | 0.000792s | 0.000815s | 0.000824s | byte equality observed |
| mp_find_if.test | 10 | 0.000822s | 0.000803s | 0.000822s | byte equality observed |
| mp_find_if_q.test | 10 | 0.000830s | 0.000835s | 0.000832s | byte equality observed |
| mp_flatten.test | 10 | 0.000830s | 0.000853s | 0.000859s | byte equality observed |
| mp_fold.test | 10 | 0.000841s | 0.000855s | 0.000849s | byte equality observed |
| mp_fold_q.test | 10 | 0.000801s | 0.000836s | 0.000812s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.000811s | 0.000827s | 0.000842s | byte equality observed |
| mp_for_each.test | 10 | 0.000800s | 0.000810s | 0.000823s | byte equality observed |
| mp_from_sequence.test | 10 | 0.000818s | 0.000804s | 0.000836s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.000834s | 0.000827s | 0.000840s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.000827s | 0.000802s | 0.000851s | byte equality observed |
| mp_front.test | 10 | 0.000807s | 0.000800s | 0.000828s | byte equality observed |
| mp_front_2.test | 10 | 0.000365s | 0.000369s | 0.000788s | byte equality observed |
| mp_identity.test | 10 | 0.000791s | 0.000805s | 0.000814s | byte equality observed |
| mp_if.test | 10 | 0.000809s | 0.000805s | 0.000822s | byte equality observed |
| mp_if_sf.test | 10 | 0.000808s | 0.000800s | 0.000819s | byte equality observed |
| mp_inherit.test | 10 | 0.000820s | 0.000797s | 0.000814s | byte equality observed |
| mp_insert.test | 10 | 0.000817s | 0.000812s | 0.000808s | byte equality observed |
| mp_insert_2.test | 10 | 0.000365s | 0.000360s | 0.000809s | byte equality observed |
| mp_intersperse.test | 10 | 0.000806s | 0.000801s | 0.000808s | byte equality observed |
| mp_invoke_q.test | 10 | 0.000823s | 0.000803s | 0.000818s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.000807s | 0.000811s | 0.000829s | byte equality observed |
| mp_iota.test | 10 | 0.000802s | 0.000829s | 0.000826s | byte equality observed |
| mp_iota_2.test | 10 | 0.000816s | 0.000817s | 0.000830s | byte equality observed |
| mp_is_list.test | 10 | 0.000811s | 0.000833s | 0.000812s | byte equality observed |
| mp_is_map.test | 10 | 0.000806s | 0.000856s | 0.000816s | byte equality observed |
| mp_is_set.test | 10 | 0.000815s | 0.000839s | 0.000817s | byte equality observed |
| mp_is_value_list.test | 10 | 0.000811s | 0.000831s | 0.000803s | byte equality observed |
| mp_iterate.test | 10 | 0.000821s | 0.000805s | 0.000820s | byte equality observed |
| mp_join.test | 10 | 0.000821s | 0.000831s | 0.000802s | byte equality observed |
| mp_lambda.test | 10 | 0.000850s | 0.000801s | 0.000815s | byte equality observed |
| mp_less.test | 10 | 0.000824s | 0.000842s | 0.000810s | byte equality observed |
| mp_list_c.test | 10 | 0.000819s | 0.000805s | 0.000821s | byte equality observed |
| mp_list_v.test | 10 | 0.000369s | 0.000352s | 0.000796s | byte equality observed |
| mp_map_contains.test | 10 | 0.000782s | 0.000832s | 0.000788s | byte equality observed |
| mp_map_erase.test | 10 | 0.000792s | 0.000809s | 0.000830s | byte equality observed |
| mp_map_find.test | 10 | 0.000799s | 0.000809s | 0.000821s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000810s | 0.000807s | 0.000837s | byte equality observed |
| mp_map_find_3.test | 10 | 0.000789s | 0.000807s | 0.000861s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000812s | 0.000811s | 0.000828s | byte equality observed |
| mp_map_insert.test | 10 | 0.000813s | 0.000823s | 0.000828s | byte equality observed |
| mp_map_keys.test | 10 | 0.000822s | 0.000822s | 0.000823s | byte equality observed |
| mp_map_replace.test | 10 | 0.000833s | 0.000796s | 0.000814s | byte equality observed |
| mp_map_update.test | 10 | 0.000808s | 0.000805s | 0.000827s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000805s | 0.000790s | 0.000805s | byte equality observed |
| mp_max.test | 10 | 0.000808s | 0.000799s | 0.000816s | byte equality observed |
| mp_max_element.test | 10 | 0.000798s | 0.000797s | 0.000825s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000360s | 0.000370s | 0.000799s | byte equality observed |
| mp_max_element_q.test | 10 | 0.000787s | 0.000808s | 0.000813s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000367s | 0.000356s | 0.000818s | byte equality observed |
| mp_min.test | 10 | 0.000807s | 0.000832s | 0.000810s | byte equality observed |
| mp_min_element.test | 10 | 0.000803s | 0.000796s | 0.000825s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000368s | 0.000376s | 0.000780s | byte equality observed |
| mp_min_element_q.test | 10 | 0.000784s | 0.000809s | 0.000792s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000360s | 0.000360s | 0.000787s | byte equality observed |
| mp_none_of.test | 10 | 0.000798s | 0.000818s | 0.000805s | byte equality observed |
| mp_none_of_q.test | 10 | 0.000835s | 0.000824s | 0.000806s | byte equality observed |
| mp_not_fn.test | 10 | 0.000846s | 0.000808s | 0.000808s | byte equality observed |
| mp_nth_element.test | 10 | 0.000826s | 0.000826s | 0.000812s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.000825s | 0.000812s | 0.000798s | byte equality observed |
| mp_or.test | 10 | 0.000818s | 0.000787s | 0.000815s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.000826s | 0.000801s | 0.000814s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.000791s | 0.000786s | 0.000819s | byte equality observed |
| mp_partial_sum.test | 10 | 0.000815s | 0.000848s | 0.000803s | byte equality observed |
| mp_partition.test | 10 | 0.000785s | 0.000832s | 0.000810s | byte equality observed |
| mp_partition_q.test | 10 | 0.000794s | 0.000807s | 0.000811s | byte equality observed |
| mp_plus.test | 10 | 0.000794s | 0.000811s | 0.000822s | byte equality observed |
| mp_pop_back.test | 10 | 0.000809s | 0.000821s | 0.000813s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000365s | 0.000378s | 0.000823s | byte equality observed |
| mp_pop_front.test | 10 | 0.000824s | 0.000819s | 0.000816s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000365s | 0.000360s | 0.000790s | byte equality observed |
| mp_power_set.test | 10 | 0.000818s | 0.000794s | 0.000812s | byte equality observed |
| mp_product.test | 10 | 0.000831s | 0.000809s | 0.000837s | byte equality observed |
| mp_push_back.test | 10 | 0.000819s | 0.000804s | 0.000829s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000365s | 0.000357s | 0.000788s | byte equality observed |
| mp_push_front.test | 10 | 0.000806s | 0.000821s | 0.000806s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000370s | 0.000356s | 0.000814s | byte equality observed |
| mp_quote.test | 10 | 0.000815s | 0.000808s | 0.000800s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000799s | 0.000828s | 0.000812s | byte equality observed |
| mp_remove.test | 10 | 0.000839s | 0.000837s | 0.000810s | byte equality observed |
| mp_remove_if.test | 10 | 0.000826s | 0.000830s | 0.000801s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.000826s | 0.000806s | 0.000802s | byte equality observed |
| mp_rename.test | 10 | 0.000810s | 0.000800s | 0.000839s | byte equality observed |
| mp_rename_2.test | 10 | 0.000368s | 0.000372s | 0.000809s | byte equality observed |
| mp_rename_v.test | 10 | 0.000359s | 0.000364s | 0.000788s | byte equality observed |
| mp_repeat.test | 10 | 0.000824s | 0.000831s | 0.000798s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000362s | 0.000362s | 0.000778s | byte equality observed |
| mp_repeat_3.test | 10 | 0.000822s | 0.000833s | 0.000846s | byte equality observed |
| mp_replace.test | 10 | 0.000815s | 0.000818s | 0.000827s | byte equality observed |
| mp_replace_at.test | 10 | 0.000802s | 0.000802s | 0.000822s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.000805s | 0.000813s | 0.000850s | byte equality observed |
| mp_replace_front.test | 10 | 0.000791s | 0.000806s | 0.000838s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000364s | 0.000366s | 0.000823s | byte equality observed |
| mp_replace_if.test | 10 | 0.000794s | 0.000852s | 0.000819s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.000801s | 0.000818s | 0.000848s | byte equality observed |
| mp_replace_second.test | 10 | 0.000797s | 0.000801s | 0.000818s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000359s | 0.000367s | 0.000784s | byte equality observed |
| mp_replace_third.test | 10 | 0.000811s | 0.000800s | 0.000823s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000364s | 0.000360s | 0.000796s | byte equality observed |
| mp_reverse.test | 10 | 0.000852s | 0.000829s | 0.000819s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.000805s | 0.000821s | 0.000792s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000823s | 0.000819s | 0.000842s | byte equality observed |
| mp_rotate_left.test | 10 | 0.000813s | 0.000799s | 0.000795s | byte equality observed |
| mp_rotate_right.test | 10 | 0.000813s | 0.000833s | 0.000826s | byte equality observed |
| mp_same.test | 10 | 0.000803s | 0.000795s | 0.000845s | byte equality observed |
| mp_second.test | 10 | 0.000808s | 0.000806s | 0.000827s | byte equality observed |
| mp_second_2.test | 10 | 0.000367s | 0.000370s | 0.000815s | byte equality observed |
| mp_set_contains.test | 10 | 0.000817s | 0.000818s | 0.000812s | byte equality observed |
| mp_set_difference.test | 10 | 0.000818s | 0.000820s | 0.000799s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000838s | 0.000788s | 0.000829s | byte equality observed |
| mp_set_intersection.test | 10 | 0.000826s | 0.000807s | 0.000826s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000813s | 0.000800s | 0.000811s | byte equality observed |
| mp_set_push_back.test | 10 | 0.000824s | 0.000801s | 0.000808s | byte equality observed |
| mp_set_push_front.test | 10 | 0.000829s | 0.000812s | 0.000845s | byte equality observed |
| mp_set_union.test | 10 | 0.000837s | 0.000824s | 0.000832s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.000825s | 0.000824s | 0.000824s | byte equality observed |
| mp_similar.test | 10 | 0.000809s | 0.000800s | 0.000846s | byte equality observed |
| mp_size.test | 10 | 0.000812s | 0.000796s | 0.000813s | byte equality observed |
| mp_size_2.test | 10 | 0.000358s | 0.000361s | 0.000793s | byte equality observed |
| mp_slice.test | 10 | 0.000822s | 0.000824s | 0.000800s | byte equality observed |
| mp_slice_2.test | 10 | 0.000358s | 0.000362s | 0.000810s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.000830s | 0.000828s | 0.000785s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.000832s | 0.000814s | 0.000828s | byte equality observed |
| mp_sort.test | 10 | 0.000834s | 0.000811s | 0.000831s | byte equality observed |
| mp_sort_q.test | 10 | 0.000813s | 0.000818s | 0.000839s | byte equality observed |
| mp_split.test | 10 | 0.000825s | 0.000813s | 0.000835s | byte equality observed |
| mp_starts_with.test | 10 | 0.000829s | 0.000781s | 0.000854s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.000834s | 0.000832s | 0.000857s | byte equality observed |
| mp_take.test | 10 | 0.000843s | 0.000825s | 0.000835s | byte equality observed |
| mp_take_2.test | 10 | 0.000365s | 0.000374s | 0.000781s | byte equality observed |
| mp_third.test | 10 | 0.000793s | 0.000812s | 0.000806s | byte equality observed |
| mp_third_2.test | 10 | 0.000366s | 0.000367s | 0.000782s | byte equality observed |
| mp_transform.test | 10 | 0.000827s | 0.000799s | 0.000794s | byte equality observed |
| mp_transform_2.test | 10 | 0.000773s | 0.000783s | 0.000821s | byte equality observed |
| mp_transform_front.test | 10 | 0.000802s | 0.000811s | 0.000808s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000368s | 0.000359s | 0.000795s | byte equality observed |
| mp_transform_if.test | 10 | 0.000811s | 0.000795s | 0.000799s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.000804s | 0.000816s | 0.000804s | byte equality observed |
| mp_transform_q.test | 10 | 0.000822s | 0.000843s | 0.000821s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.000791s | 0.000837s | 0.000805s | byte equality observed |
| mp_transform_second.test | 10 | 0.000804s | 0.000812s | 0.000789s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000368s | 0.000369s | 0.000778s | byte equality observed |
| mp_transform_sf.test | 10 | 0.000798s | 0.000799s | 0.000801s | byte equality observed |
| mp_transform_third.test | 10 | 0.000809s | 0.000816s | 0.000813s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000360s | 0.000350s | 0.000818s | byte equality observed |
| mp_unique.test | 10 | 0.000803s | 0.000813s | 0.000810s | byte equality observed |
| mp_unique_if.test | 10 | 0.000810s | 0.000834s | 0.000848s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.000815s | 0.000809s | 0.000826s | byte equality observed |
| mp_valid.test | 10 | 0.000805s | 0.000811s | 0.000817s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.000814s | 0.000806s | 0.000804s | byte equality observed |
| mp_value.test | 10 | 0.000359s | 0.000360s | 0.000783s | byte equality observed |
| mp_with_index.test | 10 | 0.001138s | 0.001079s | 0.001032s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000364s | 0.000365s | 0.000793s | byte equality observed |
| mpl.test | 10 | 0.000817s | 0.000832s | 0.000791s | byte equality observed |
| mpl_list.test | 10 | 0.000808s | 0.000813s | 0.000825s | byte equality observed |
| mpl_tuple.test | 10 | 0.000792s | 0.000812s | 0.000834s | byte equality observed |
| mpl_version.test | 10 | 0.000810s | 0.000795s | 0.000812s | byte equality observed |
| set_version.test | 10 | 0.000808s | 0.000819s | 0.000826s | byte equality observed |
| tuple_apply.test | 10 | 0.000829s | 0.000816s | 0.000827s | byte equality observed |
| tuple_for_each.test | 10 | 0.000819s | 0.000798s | 0.000807s | byte equality observed |
| tuple_transform.test | 10 | 0.000812s | 0.000819s | 0.000827s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000818s | 0.000847s | 0.000831s | byte equality observed |
| tuple_version.test | 10 | 0.000805s | 0.000798s | 0.000828s | byte equality observed |
| utility_version.test | 10 | 0.000798s | 0.000785s | 0.000805s | byte equality observed |
| version.test | 10 | 0.000803s | 0.000803s | 0.000820s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45241427099).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
