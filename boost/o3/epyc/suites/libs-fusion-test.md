# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.474822 | 1.035397 | 1.628929 | 0.001874 | 0.001810 | 0.001920 |
| any.test | RUN | 0.456319 | 0.985363 | 1.530371 | 0.001982 | 0.001865 | 0.002124 |
| clear.test | RUN | 0.339205 | 0.876269 | 1.216700 | 0.001978 | 0.001853 | 0.002116 |
| copy.test | RUN | 0.288313 | 0.657511 | 0.992015 | 0.001681 | 0.002122 | 0.002064 |
| count.test | RUN | 0.325435 | 0.732419 | 1.110707 | 0.002184 | 0.002172 | 0.001851 |
| count_if.test | RUN | 0.307867 | 0.687056 | 1.007102 | 0.001995 | 0.002284 | 0.001955 |
| erase.test | RUN | 0.443000 | 1.206538 | 1.646192 | 0.002012 | 0.002222 | 0.002090 |
| erase_key.test | RUN | 0.426927 | 1.202225 | 1.556289 | 0.001638 | 0.002034 | 0.001791 |
| filter.test | RUN | 0.383960 | 1.000602 | 1.384724 | 0.002132 | 0.002166 | 0.002061 |
| filter_if.test | RUN | 0.425550 | 1.192461 | 1.646365 | 0.001968 | 0.002250 | 0.002180 |
| find.test | RUN | 0.376424 | 0.803318 | 1.235932 | 0.001819 | 0.002346 | 0.001900 |
| find_if.test | RUN | 0.359827 | 0.781789 | 1.143298 | 0.002002 | 0.001805 | 0.001978 |
| fold.test | RUN | 0.377688 | 0.939149 | 1.468740 | 0.001972 | 0.002210 | 0.001862 |
| for_each.test | RUN | 0.346191 | 0.848055 | 1.238028 | 0.001954 | 0.002242 | 0.002068 |
| insert.test | RUN | 0.492842 | 1.520720 | 1.971027 | 0.002019 | 0.001947 | 0.001955 |
| insert_range.test | RUN | 0.497800 | 1.519578 | 1.982168 | 0.001872 | 0.001936 | 0.001728 |
| iter_fold.test | RUN | 0.588579 | 1.481869 | 2.335350 | 0.002259 | 0.002233 | 0.002201 |
| move.test | RUN | 0.301622 | 0.714205 | 1.016102 | 0.002048 | 0.001751 | 0.001808 |
| none.test | RUN | 0.480347 | 1.022196 | 1.600374 | 0.001711 | 0.002058 | 0.001626 |
| pop_back.test | RUN | 0.468413 | 1.299224 | 1.801778 | 0.002029 | 0.002284 | 0.002131 |
| pop_front.test | RUN | 0.387965 | 1.061911 | 1.468136 | 0.002071 | 0.001946 | 0.001880 |
| push_back.test | RUN | 0.478650 | 1.526361 | 1.926279 | 0.002129 | 0.002164 | 0.002167 |
| push_front.test | RUN | 0.431059 | 1.240571 | 1.648719 | 0.001909 | 0.002148 | 0.002230 |
| remove.test | RUN | 0.482058 | 1.434269 | 1.938404 | 0.001955 | 0.002112 | 0.001751 |
| remove_if.test | RUN | 0.426256 | 1.227160 | 1.637962 | 0.001823 | 0.001993 | 0.001802 |
| replace.test | RUN | 0.409942 | 1.155021 | 1.554476 | 0.002010 | 0.002354 | 0.001967 |
| replace_if.test | RUN | 0.406794 | 1.133760 | 1.530149 | 0.002082 | 0.001981 | 0.002215 |
| reverse_fold.test | RUN | 0.667715 | 1.690990 | 2.618921 | 0.002084 | 0.001854 | 0.001894 |
| reverse_iter_fold.test | RUN | 0.668043 | 1.715739 | 2.726882 | 0.002012 | 0.001954 | 0.001987 |
| reverse.test | RUN | 0.415175 | 1.173646 | 1.566343 | 0.002040 | 0.002242 | 0.002320 |
| segmented_for_each.test | RUN | 0.722489 | 2.275738 | 3.069920 | 0.001860 | 0.002206 | 0.002124 |
| segmented_find.test | RUN | 0.447664 | 1.175099 | 1.774666 | 0.001748 | 0.002127 | 0.001674 |
| segmented_find_if.test | RUN | 0.458545 | 1.192292 | 1.777382 | 0.001642 | 0.001950 | 0.001875 |
| segmented_fold.test | RUN | 0.555071 | 1.591817 | 2.211159 | 0.002008 | 0.002069 | 0.002172 |
| transform.test | RUN | 0.443060 | 1.234883 | 1.613307 | 0.001914 | 0.002032 | 0.002194 |
| join.test | RUN | 0.333465 | 0.781394 | 1.183791 | 0.002058 | 0.002137 | 0.002050 |
| zip.test | RUN | 0.570529 | 1.451034 | 2.178575 | 0.001766 | 0.002182 | 0.002143 |
| zip2.test | RUN | 0.550872 | 1.441934 | 2.108254 | 0.001961 | 0.002207 | 0.002095 |
| zip_ignore.test | RUN | 0.419866 | 0.954468 | 1.396042 | 0.001914 | 0.002271 | 0.001888 |
| flatten.test | RUN | 0.390063 | 1.085072 | 1.370703 | 0.001875 | 0.002030 | 0.001549 |
| ticket-5490.test | COMPILE | 0.209528 | 0.458863 | 0.615960 | — | — | — |
| as_deque.test | RUN | 0.405742 | 1.024966 | 1.542826 | 0.002012 | 0.002100 | 0.002110 |
| as_list.test | RUN | 0.446354 | 1.247019 | 1.609436 | 0.002132 | 0.002012 | 0.001918 |
| as_map.test | RUN | 0.451199 | 1.189511 | 1.637222 | 0.001783 | 0.001910 | 0.001647 |
| as_map_assoc.test | RUN | 0.444291 | 1.141804 | 1.530680 | 0.001732 | 0.001944 | 0.002012 |
| as_set.test | RUN | 0.488855 | 1.414132 | 1.947002 | 0.001976 | 0.002062 | 0.002044 |
| as_vector.test | RUN | 0.450260 | 1.299674 | 1.702820 | 0.001991 | 0.001875 | 0.001795 |
| boost_tuple.test | RUN | 0.440357 | 1.197684 | 1.613458 | 0.002034 | 0.001931 | 0.001859 |
| boost_tuple_iterator.test | RUN | 0.310357 | 0.728613 | 1.037655 | 0.001736 | 0.002175 | 0.002018 |
| cons.test | RUN | 0.556574 | 1.401899 | 1.971565 | 0.001804 | 0.001882 | 0.001753 |
| convert_boost_tuple.test | RUN | 0.354692 | 1.085037 | 1.291546 | 0.001786 | 0.002056 | 0.001714 |
| convert_deque.test | RUN | 0.362568 | 1.050781 | 1.301463 | 0.001931 | 0.001973 | 0.001703 |
| convert_list.test | RUN | 0.350822 | 1.076192 | 1.305187 | 0.001859 | 0.001730 | 0.001920 |
| convert_std_pair.test | RUN | 0.359939 | 1.074269 | 1.305995 | 0.001737 | 0.002154 | 0.002056 |
| convert_std_tuple.test | RUN | 0.343512 | 1.035841 | 1.257889 | 0.001853 | 0.001862 | 0.002056 |
| convert_vector.test | RUN | 0.343810 | 1.035849 | 1.288981 | 0.001739 | 0.001800 | 0.002060 |
| filter_view.test | RUN | 0.413281 | 1.124968 | 1.540037 | 0.002127 | 0.002029 | 0.002142 |
| hash.test | RUN | 0.421878 | 0.998050 | 1.490981 | 0.001723 | 0.001962 | 0.002006 |
| io.test | RUN | 0.441413 | 1.374898 | 1.747403 | 0.001882 | 0.002290 | 0.001913 |
| iterator_range.test | RUN | 0.392247 | 1.069672 | 1.460161 | 0.001837 | 0.002244 | 0.002168 |
| joint_view.test | RUN | 0.536438 | 1.792217 | 2.179033 | 0.002040 | 0.002288 | 0.001786 |
| list_comparison.test | RUN | 0.307590 | 0.739804 | 1.087497 | 0.001939 | 0.001735 | 0.001929 |
| list_construction.test | RUN | 0.307152 | 0.694429 | 1.020605 | 0.001896 | 0.001853 | 0.001954 |
| list_copy.test | RUN | 0.470747 | 1.304294 | 1.731952 | 0.002060 | 0.002101 | 0.002092 |
| list_iterator.test | RUN | 0.302044 | 0.761584 | 0.942036 | 0.001844 | 0.001788 | 0.002080 |
| list_hash.test | RUN | 0.410523 | 1.353644 | 1.589083 | 0.001731 | 0.002291 | 0.001915 |
| list_make.test | RUN | 0.319746 | 0.789371 | 1.167009 | 0.002066 | 0.001846 | 0.001986 |
| list_misc.test | RUN | 0.414194 | 0.987822 | 1.326452 | 0.001774 | 0.002070 | 0.002089 |
| list_mutate.test | RUN | 0.291253 | 0.639086 | 0.920660 | 0.001905 | 0.002013 | 0.002066 |
| list_nest.test | RUN | 0.573894 | 1.767132 | 2.456281 | 0.001826 | 0.001806 | 0.002157 |
| list_tie.test | RUN | 0.309275 | 0.751070 | 1.040350 | 0.001824 | 0.002160 | 0.002026 |
| list_value_at.test | RUN | 0.298591 | 0.662729 | 0.981687 | 0.001863 | 0.001994 | 0.002074 |
| deque_comparison.test | RUN | 0.317848 | 0.769492 | 1.131238 | 0.001816 | 0.002094 | 0.002234 |
| deque_construction.test | RUN | 0.307166 | 0.716355 | 1.005120 | 0.002012 | 0.002109 | 0.002151 |
| deque_copy.test | RUN | 0.441139 | 1.205646 | 1.658977 | 0.001826 | 0.001810 | 0.001994 |
| deque_iterator.test | RUN | 0.304478 | 0.808581 | 1.006335 | 0.002075 | 0.002056 | 0.002049 |
| deque_hash.test | RUN | 0.430677 | 1.298967 | 1.562619 | 0.001896 | 0.002134 | 0.001880 |
| deque_is_constructible.test | COMPILE | 0.166883 | 0.352838 | 0.484916 | — | — | — |
| deque_make.test | RUN | 0.311732 | 0.771256 | 1.040999 | 0.001882 | 0.001891 | 0.002046 |
| deque_misc.test | RUN | 0.403954 | 0.906510 | 1.370926 | 0.001703 | 0.002126 | 0.001833 |
| deque_move.test | RUN | 0.316183 | 0.804902 | 1.076233 | 0.002112 | 0.002028 | 0.002042 |
| deque_mutate.test | RUN | 0.288500 | 0.649666 | 0.942861 | 0.001761 | 0.001964 | 0.002196 |
| deque_nest.test | RUN | 0.850489 | 2.780369 | 3.945644 | 0.001947 | 0.002169 | 0.001656 |
| deque_tie.test | RUN | 0.293396 | 0.705064 | 1.001329 | 0.001694 | 0.002038 | 0.001648 |
| deque_value_at.test | RUN | 0.289198 | 0.636794 | 0.981415 | 0.001734 | 0.001997 | 0.001950 |
| front_extended_deque.test | RUN | 0.430398 | 0.962521 | 1.489134 | 0.002148 | 0.002166 | 0.001944 |
| back_extended_deque.test | RUN | 0.413141 | 1.038897 | 1.391141 | 0.001796 | 0.002128 | 0.002100 |
| make_list.test | RUN | 0.318903 | 0.788103 | 1.133596 | 0.001740 | 0.002276 | 0.001991 |
| make_vector.test | RUN | 0.326440 | 0.765743 | 1.161037 | 0.002070 | 0.002224 | 0.001698 |
| map.test | RUN | 0.427916 | 1.184387 | 1.533890 | 0.001822 | 0.001914 | 0.002242 |
| map_comparison.test | RUN | 0.315144 | 0.752706 | 1.125462 | 0.001828 | 0.002182 | 0.001972 |
| map_construction.test | RUN | 0.325614 | 0.753531 | 1.078015 | 0.001886 | 0.001895 | 0.002182 |
| map_copy.test | RUN | 0.374834 | 0.934019 | 1.306218 | 0.001806 | 0.001949 | 0.001932 |
| map_misc.test | RUN | 0.404898 | 0.966795 | 1.343029 | 0.001717 | 0.002088 | 0.002000 |
| map_move.test | RUN | 0.314404 | 0.802164 | 1.074305 | 0.001939 | 0.001866 | 0.001922 |
| map_mutate.test | RUN | 0.287344 | 0.621223 | 0.920273 | 0.001743 | 0.001860 | 0.002206 |
| map_tie.test | RUN | 0.290810 | 0.658999 | 0.984123 | 0.001735 | 0.002176 | 0.001935 |
| nil.test | RUN | 0.198140 | 0.460501 | 0.649960 | 0.001792 | 0.001948 | 0.001994 |
| nview.test | RUN | 0.391589 | 0.949807 | 1.358268 | 0.002102 | 0.002182 | 0.002102 |
| reverse_view.test | RUN | 0.518694 | 1.524570 | 2.007620 | 0.002058 | 0.001868 | 0.001815 |
| segmented_iterator_range.test | RUN | 0.601695 | 1.762067 | 2.462563 | 0.002112 | 0.001934 | 0.002190 |
| set.test | RUN | 0.374645 | 1.044348 | 1.417087 | 0.001817 | 0.002086 | 0.001697 |
| single_view.test | RUN | 0.355966 | 0.957775 | 1.326852 | 0.002041 | 0.001805 | 0.001968 |
| std_pair.test | RUN | 0.440559 | 1.203499 | 1.601343 | 0.001934 | 0.001990 | 0.002170 |
| boost_array.test | RUN | 0.373167 | 0.887246 | 1.253724 | 0.001936 | 0.001514 | 0.002016 |
| array.test | RUN | 0.378022 | 0.825082 | 1.247734 | 0.002018 | 0.001948 | 0.002096 |
| std_array.test | RUN | 0.371870 | 0.830543 | 1.224315 | 0.002048 | 0.001737 | 0.001898 |
| tuple_comparison.test | RUN | 0.325501 | 0.787595 | 1.132350 | 0.002086 | 0.001998 | 0.002126 |
| tuple_construction.test | RUN | 0.335998 | 0.767188 | 1.165762 | 0.001972 | 0.001959 | 0.002142 |
| tuple_conversion.test | RUN | 0.730613 | 2.380890 | 3.605973 | 0.001874 | 0.001916 | 0.001720 |
| tuple_copy.test | RUN | 0.493075 | 1.395058 | 1.964030 | 0.001916 | 0.002093 | 0.001938 |
| tuple_element.test | RUN | 0.327953 | 0.734582 | 1.074284 | 0.001751 | 0.001968 | 0.002054 |
| tuple_make.test | RUN | 0.341880 | 0.832735 | 1.187791 | 0.001942 | 0.002005 | 0.002090 |
| tuple_misc.test | RUN | 0.423402 | 0.998771 | 1.516068 | 0.001879 | 0.002224 | 0.001702 |
| tuple_mutate.test | RUN | 0.298248 | 0.698624 | 1.012866 | 0.001950 | 0.001888 | 0.001872 |
| tuple_nest.test | RUN | 1.243215 | 4.682297 | 6.644238 | 0.002040 | 0.002052 | 0.002061 |
| tuple_hash.test | RUN | 0.447600 | 1.344238 | 1.634009 | 0.002052 | 0.002152 | 0.002190 |
| tuple_tie.test | RUN | 0.334453 | 0.740864 | 1.105738 | 0.001956 | 0.001807 | 0.002097 |
| tuple_traits__maybe_variadic.test | RUN | 0.342274 | 0.943652 | 1.175041 | 0.001789 | 0.002122 | 0.001841 |
| tuple_traits__no_variadic.test | RUN | 0.405210 | 0.919316 | 1.233060 | 0.001688 | 0.002121 | 0.002119 |
| transform_view.test | RUN | 0.504482 | 1.569718 | 1.996119 | 0.002020 | 0.001998 | 0.002026 |
| identity_view.test | RUN | 0.485134 | 1.399092 | 1.830603 | 0.001986 | 0.001965 | 0.002126 |
| vector_comparison.test | RUN | 0.326152 | 0.797708 | 1.054992 | 0.001694 | 0.001892 | 0.002019 |
| vector_construction.test | RUN | 0.317599 | 0.719027 | 1.053067 | 0.001854 | 0.002122 | 0.002078 |
| vector_conversion.test | RUN | 0.906741 | 3.124459 | 4.651570 | 0.002360 | 0.002239 | 0.002046 |
| vector_copy.test | RUN | 0.484555 | 1.372994 | 1.937214 | 0.001810 | 0.002058 | 0.001930 |
| vector_iterator.test | RUN | 0.303498 | 0.789167 | 0.993710 | 0.001796 | 0.001808 | 0.002080 |
| vector_make.test | RUN | 0.317610 | 0.802510 | 1.055294 | 0.001764 | 0.002017 | 0.002123 |
| vector_misc.test | RUN | 0.402265 | 0.943536 | 1.419597 | 0.001761 | 0.001670 | 0.002024 |
| vector_move.test | RUN | 0.318863 | 0.853124 | 1.059667 | 0.001737 | 0.001893 | 0.002134 |
| vector_mutate.test | RUN | 0.282123 | 0.652884 | 0.932617 | 0.001888 | 0.001928 | 0.002029 |
| vector_n.test | RUN | 0.346975 | 0.813216 | 1.191092 | 0.002148 | 0.002242 | 0.002272 |
| vector_nest.test | RUN | 1.244568 | 4.803497 | 6.709385 | 0.001986 | 0.002240 | 0.001945 |
| vector_hash.test | RUN | 0.418182 | 1.365036 | 1.555577 | 0.001962 | 0.002072 | 0.001948 |
| vector_tie.test | RUN | 0.297989 | 0.740626 | 1.007275 | 0.002094 | 0.001938 | 0.002086 |
| vector_traits__maybe_variadic.test | RUN | 0.322006 | 0.873004 | 1.041253 | 0.002018 | 0.002082 | 0.001866 |
| vector_traits__no_variadic.test | RUN | 0.368053 | 0.918496 | 1.222665 | 0.001895 | 0.002090 | 0.002069 |
| vector_value_at.test | RUN | 0.290825 | 0.686760 | 0.973635 | 0.001900 | 0.001867 | 0.001908 |
| zip_view.test | RUN | 0.608263 | 1.557939 | 2.465630 | 0.002066 | 0.001910 | 0.001765 |
| zip_view2.test | RUN | 0.505928 | 1.324484 | 1.888880 | 0.001826 | 0.002046 | 0.002246 |
| zip_view_ignore.test | RUN | 0.448181 | 1.180447 | 1.700607 | 0.001888 | 0.001679 | 0.001933 |
| repetitive_view.test | RUN | 0.765620 | 2.119295 | 3.096764 | 0.002135 | 0.002238 | 0.001921 |
| deduce_sequence.test | RUN | 0.368897 | 0.880127 | 1.278069 | 0.001924 | 0.002138 | 0.001934 |
| adapt_adt_named.test | RUN | 0.440938 | 1.204913 | 1.616110 | 0.001870 | 0.002151 | 0.002153 |
| adapt_adt_named_empty.test | RUN | 0.383415 | 0.982739 | 1.307559 | 0.001886 | 0.002074 | 0.002062 |
| adapt_adt.test | RUN | 0.487904 | 1.644119 | 1.930979 | 0.001978 | 0.002080 | 0.002022 |
| adapt_adt_empty.test | RUN | 0.375900 | 0.987860 | 1.280049 | 0.001934 | 0.002256 | 0.002160 |
| adapt_assoc_adt_named.test | RUN | 0.496246 | 1.303402 | 1.721040 | 0.002017 | 0.002313 | 0.002066 |
| adapt_assoc_adt_named_empty.test | RUN | 0.380135 | 1.004504 | 1.305708 | 0.001956 | 0.002165 | 0.001937 |
| adapt_assoc_adt.test | RUN | 0.500088 | 1.291558 | 1.817711 | 0.001884 | 0.002157 | 0.001970 |
| adapt_assoc_adt_empty.test | RUN | 0.375951 | 0.976816 | 1.313865 | 0.001820 | 0.001925 | 0.002031 |
| adapt_assoc_struct_named.test | RUN | 0.477516 | 1.250462 | 1.695350 | 0.001952 | 0.001984 | 0.002060 |
| adapt_assoc_struct_named_empty.test | RUN | 0.376978 | 0.969755 | 1.302088 | 0.001503 | 0.002102 | 0.001736 |
| adapt_assoc_struct.test | RUN | 0.422695 | 1.185579 | 1.573371 | 0.001780 | 0.002231 | 0.002058 |
| adapt_assoc_struct_empty.test | RUN | 0.373480 | 0.980291 | 1.284153 | 0.001880 | 0.001842 | 0.002169 |
| adapt_assoc_tpl_adt.test | RUN | 0.499920 | 1.346234 | 1.807630 | 0.002084 | 0.002136 | 0.001884 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.369948 | 0.967561 | 1.319588 | 0.002188 | 0.002139 | 0.002304 |
| adapt_assoc_tpl_struct.test | RUN | 0.422543 | 1.147129 | 1.503886 | 0.001868 | 0.001808 | 0.001768 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.379616 | 1.012504 | 1.328347 | 0.001938 | 0.001913 | 0.001738 |
| adapt_struct_named.test | RUN | 0.439257 | 1.186598 | 1.565964 | 0.002098 | 0.002213 | 0.001698 |
| adapt_struct_named_empty.test | RUN | 0.387823 | 0.958501 | 1.300757 | 0.001752 | 0.001515 | 0.001999 |
| adapt_struct.test | RUN | 0.465250 | 1.356043 | 1.762104 | 0.001812 | 0.002206 | 0.002104 |
| adapt_struct_empty.test | RUN | 0.377741 | 0.998145 | 1.347167 | 0.001936 | 0.001927 | 0.002122 |
| adapt_tpl_adt.test | RUN | 0.472546 | 1.553848 | 1.848315 | 0.001856 | 0.001775 | 0.001931 |
| adapt_tpl_adt_empty.test | RUN | 0.382187 | 0.977853 | 1.327997 | 0.002006 | 0.002156 | 0.002002 |
| adapt_tpl_struct.test | RUN | 0.397059 | 1.134078 | 1.465103 | 0.001934 | 0.001946 | 0.001782 |
| adapt_tpl_struct_empty.test | RUN | 0.370899 | 0.969876 | 1.317729 | 0.001898 | 0.001899 | 0.002164 |
| adt_attribute_proxy.test | RUN | 0.431937 | 0.974238 | 1.420724 | 0.001950 | 0.002145 | 0.002081 |
| define_struct.test | RUN | 0.516230 | 1.310435 | 1.861282 | 0.001976 | 0.002015 | 0.002139 |
| define_struct_empty.test | RUN | 0.456553 | 1.111674 | 1.508446 | 0.002080 | 0.001954 | 0.002160 |
| define_struct_move.test | RUN | 0.283907 | 0.639241 | 0.910862 | 0.002109 | 0.001964 | 0.001753 |
| define_struct_inline.test | RUN | 0.556319 | 1.611096 | 2.074364 | 0.001892 | 0.002064 | 0.002110 |
| define_struct_inline_empty.test | RUN | 0.447370 | 1.078063 | 1.494774 | 0.002069 | 0.001957 | 0.001969 |
| define_struct_inline_move.test | RUN | 0.305810 | 0.681712 | 0.943372 | 0.002014 | 0.001926 | 0.001870 |
| define_assoc_struct.test | RUN | 0.502978 | 1.299711 | 1.747029 | 0.002019 | 0.002044 | 0.002148 |
| define_assoc_struct_empty.test | RUN | 0.439044 | 1.090995 | 1.558761 | 0.001882 | 0.002358 | 0.002012 |
| define_assoc_struct_move.test | RUN | 0.288770 | 0.634501 | 0.942932 | 0.001907 | 0.001875 | 0.002027 |
| define_tpl_struct.test | RUN | 0.507910 | 1.307504 | 1.697133 | 0.001964 | 0.002159 | 0.001968 |
| define_tpl_struct_empty.test | RUN | 0.458245 | 1.103664 | 1.512282 | 0.001824 | 0.002019 | 0.001913 |
| define_tpl_struct_move.test | RUN | 0.294211 | 0.643775 | 0.935324 | 0.001879 | 0.002142 | 0.001859 |
| define_tpl_struct_inline.test | RUN | 0.529850 | 1.514708 | 1.912797 | 0.002120 | 0.002054 | 0.002028 |
| define_tpl_struct_inline_empty.test | RUN | 0.452300 | 1.159980 | 1.512286 | 0.001945 | 0.001994 | 0.001976 |
| define_tpl_struct_inline_move.test | RUN | 0.305222 | 0.611806 | 0.959673 | 0.001723 | 0.002158 | 0.002006 |
| define_assoc_tpl_struct.test | RUN | 0.502153 | 1.288504 | 1.798854 | 0.002083 | 0.002151 | 0.001887 |
| define_assoc_tpl_struct_empty.test | RUN | 0.458594 | 1.128266 | 1.523792 | 0.002011 | 0.001898 | 0.001597 |
| define_assoc_tpl_struct_move.test | RUN | 0.293645 | 0.626067 | 0.938451 | 0.001974 | 0.002023 | 0.002050 |
| std_tuple.test | RUN | 0.303444 | 0.721108 | 1.008060 | 0.001777 | 0.001830 | 0.001776 |
| std_tuple_iterator.test | RUN | 0.303190 | 0.744142 | 1.054591 | 0.002008 | 0.001976 | 0.001875 |
| ref_vector.test | RUN | 0.344833 | 0.789532 | 1.098752 | 0.001949 | 0.001931 | 0.002138 |
| flatten_view.test | RUN | 0.380440 | 0.921107 | 1.341535 | 0.002006 | 0.001944 | 0.002168 |
| github-159.test | COMPILE | 0.164932 | 0.353075 | 0.511143 | — | — | — |
| github-176.test | RUN | 0.346292 | 0.825098 | 1.131423 | 0.001991 | 0.002148 | 0.002058 |
| size.test | COMPILE | 0.307893 | 0.605650 | 0.850243 | — | — | — |
| fused.test | RUN | 0.410038 | 0.875107 | 1.347938 | 0.001926 | 0.002220 | 0.001815 |
| fused_function_object.test | RUN | 0.304944 | 0.679860 | 0.996386 | 0.001757 | 0.001969 | 0.001934 |
| fused_procedure.test | RUN | 0.391128 | 0.885990 | 1.262195 | 0.001987 | 0.001918 | 0.001699 |
| unfused.test | RUN | 0.311384 | 0.689016 | 1.039336 | 0.002062 | 0.001973 | 0.002349 |
| unfused_typed.test | RUN | 0.319205 | 0.772542 | 1.064494 | 0.001958 | 0.001921 | 0.001992 |
| make_fused.test | RUN | 0.415191 | 0.895142 | 1.309107 | 0.002094 | 0.002185 | 0.001706 |
| make_fused_function_object.test | RUN | 0.311356 | 0.708156 | 1.000745 | 0.001715 | 0.001885 | 0.002112 |
| make_fused_procedure.test | RUN | 0.403716 | 0.849602 | 1.270972 | 0.002030 | 0.001977 | 0.002038 |
| make_unfused.test | RUN | 0.316210 | 0.668716 | 1.000775 | 0.001942 | 0.002123 | 0.002039 |
| invoke.test | RUN | 0.821371 | 2.472259 | 3.426991 | 0.001912 | 0.001829 | 0.001660 |
| invoke_function_object.test | RUN | 0.384302 | 0.869500 | 1.265623 | 0.002096 | 0.002148 | 0.001950 |
| invoke_procedure.test | RUN | 0.663586 | 1.835419 | 2.627166 | 0.001754 | 0.002008 | 0.001897 |
| swap.test | RUN | 0.462833 | 1.169429 | 1.585460 | 0.002098 | 0.002092 | 0.002134 |
| is_sequence.test | COMPILE | 0.079497 | 0.167299 | 0.198631 | — | — | — |
| is_view.test | COMPILE | 0.077239 | 0.167025 | 0.207339 | — | — | — |
| pair_deque.test | COMPILE | 0.176940 | 0.387689 | 0.475009 | — | — | — |
| pair_list.test | COMPILE | 0.170150 | 0.350292 | 0.482988 | — | — | — |
| pair_map.test | COMPILE | 0.177435 | 0.363819 | 0.513373 | — | — | — |
| pair_set.test | COMPILE | 0.178474 | 0.370195 | 0.501167 | — | — | — |
| pair_vector.test | COMPILE | 0.173958 | 0.369372 | 0.502476 | — | — | — |
| pair_nest.test | COMPILE | 0.073109 | 0.150216 | 0.180763 | — | — | — |
| index_sequence.test | COMPILE | 0.061574 | 0.108078 | 0.136346 | — | — | — |
| and.test | COMPILE | 0.046025 | 0.077725 | 0.098665 | — | — | — |
| tag_of.test | COMPILE | 0.080641 | 0.155496 | 0.191059 | — | — | — |
| unused.test | COMPILE | 0.043398 | 0.100289 | 0.114770 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.078692 | 0.133127 | 0.188488 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.065353 | 0.127000 | 0.198578 | — | — | — |
| quick.test | RUN | 0.210543 | 0.447504 | 0.574210 | 0.000739 | 0.001549 | 0.001338 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.005× | 1.007×, 1.004× | 1.003× |
| clang | 1.000× | 0.999×, 1.001× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45850603565).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.001276s | 0.001341s | 0.001262s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.001301s | 0.001304s | 0.001304s | byte equality observed |
| adapt_adt_named.test | 10 | 0.001272s | 0.001246s | 0.001269s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.001309s | 0.001256s | 0.001300s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.001285s | 0.001290s | 0.001320s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.001263s | 0.001306s | 0.001305s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.001261s | 0.001336s | 0.001293s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.001297s | 0.001344s | 0.001264s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.001279s | 0.001325s | 0.001258s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.001276s | 0.001272s | 0.001331s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.001283s | 0.001294s | 0.001338s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.001262s | 0.001297s | 0.001296s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.001318s | 0.001293s | 0.001312s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.001300s | 0.001399s | 0.001263s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.001309s | 0.001289s | 0.001321s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.001277s | 0.001347s | 0.001305s | byte equality observed |
| adapt_struct.test | 10 | 0.001278s | 0.001337s | 0.001341s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.001290s | 0.001315s | 0.001282s | byte equality observed |
| adapt_struct_named.test | 10 | 0.001284s | 0.001336s | 0.001264s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.001279s | 0.001289s | 0.001251s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.001307s | 0.001265s | 0.001269s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.001291s | 0.001296s | 0.001275s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.001277s | 0.001296s | 0.001271s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.001279s | 0.001292s | 0.001273s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.001232s | 0.001308s | 0.001252s | byte equality observed |
| all.test | 10 | 0.001288s | 0.001223s | 0.001206s | byte equality observed |
| any.test | 10 | 0.001235s | 0.001237s | 0.001263s | byte equality observed |
| array.test | 10 | 0.001282s | 0.001238s | 0.001237s | byte equality observed |
| as_deque.test | 10 | 0.001251s | 0.001264s | 0.001219s | byte equality observed |
| as_list.test | 10 | 0.001298s | 0.001283s | 0.001259s | byte equality observed |
| as_map.test | 10 | 0.001247s | 0.001323s | 0.001326s | byte equality observed |
| as_map_assoc.test | 10 | 0.001281s | 0.001313s | 0.001284s | byte equality observed |
| as_set.test | 10 | 0.001307s | 0.001325s | 0.001298s | byte equality observed |
| as_vector.test | 10 | 0.001267s | 0.001323s | 0.001326s | byte equality observed |
| back_extended_deque.test | 10 | 0.001253s | 0.001260s | 0.001259s | byte equality observed |
| boost_array.test | 10 | 0.001303s | 0.001219s | 0.001218s | byte equality observed |
| boost_tuple.test | 10 | 0.001284s | 0.001282s | 0.001271s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.001284s | 0.001291s | 0.001276s | byte equality observed |
| clear.test | 10 | 0.001245s | 0.001287s | 0.001253s | byte equality observed |
| cons.test | 10 | 0.001264s | 0.001340s | 0.001328s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.001286s | 0.001310s | 0.001279s | byte equality observed |
| convert_deque.test | 10 | 0.001272s | 0.001277s | 0.001247s | byte equality observed |
| convert_list.test | 10 | 0.001239s | 0.001279s | 0.001244s | byte equality observed |
| convert_std_pair.test | 10 | 0.001277s | 0.001279s | 0.001262s | byte equality observed |
| convert_std_tuple.test | 10 | 0.001289s | 0.001257s | 0.001268s | byte equality observed |
| convert_vector.test | 10 | 0.001244s | 0.001238s | 0.001302s | byte equality observed |
| copy.test | 10 | 0.001230s | 0.001277s | 0.001190s | byte equality observed |
| count.test | 10 | 0.001244s | 0.001269s | 0.001239s | byte equality observed |
| count_if.test | 9 | 0.001232s | 0.001217s | 0.001224s | byte equality observed |
| deduce_sequence.test | 10 | 0.001242s | 0.001292s | 0.001253s | byte equality observed |
| define_assoc_struct.test | 10 | 0.001262s | 0.001299s | 0.001292s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.001287s | 0.001244s | 0.001280s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.001290s | 0.001211s | 0.001246s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.001273s | 0.001274s | 0.001262s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.001294s | 0.001284s | 0.001262s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.001266s | 0.001264s | 0.001257s | byte equality observed |
| define_struct.test | 10 | 0.001265s | 0.001280s | 0.001229s | byte equality observed |
| define_struct_empty.test | 10 | 0.001283s | 0.001305s | 0.001226s | byte equality observed |
| define_struct_inline.test | 10 | 0.001271s | 0.001264s | 0.001251s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.001273s | 0.001255s | 0.001240s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.001243s | 0.001236s | 0.001232s | byte equality observed |
| define_struct_move.test | 10 | 0.001240s | 0.001275s | 0.001276s | byte equality observed |
| define_tpl_struct.test | 10 | 0.001269s | 0.001291s | 0.001288s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.001272s | 0.001310s | 0.001277s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.001314s | 0.001324s | 0.001316s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.001266s | 0.001271s | 0.001285s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.001226s | 0.001265s | 0.001235s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.001209s | 0.001234s | 0.001251s | byte equality observed |
| deque_comparison.test | 10 | 0.001227s | 0.001278s | 0.001228s | byte equality observed |
| deque_construction.test | 10 | 0.001258s | 0.001274s | 0.001233s | byte equality observed |
| deque_copy.test | 10 | 0.001252s | 0.001299s | 0.001282s | byte equality observed |
| deque_hash.test | 10 | 0.001259s | 0.001245s | 0.001252s | byte equality observed |
| deque_iterator.test | 10 | 0.001289s | 0.001244s | 0.001217s | byte equality observed |
| deque_make.test | 10 | 0.001272s | 0.001287s | 0.001246s | byte equality observed |
| deque_misc.test | 10 | 0.001259s | 0.001253s | 0.001225s | byte equality observed |
| deque_move.test | 10 | 0.001257s | 0.001283s | 0.001243s | byte equality observed |
| deque_mutate.test | 10 | 0.001232s | 0.001219s | 0.001306s | byte equality observed |
| deque_nest.test | 10 | 0.001293s | 0.001228s | 0.001265s | byte equality observed |
| deque_tie.test | 7 | 0.001245s | 0.001285s | 0.001221s | byte equality observed |
| deque_value_at.test | 10 | 0.001310s | 0.001263s | 0.001360s | byte equality observed |
| erase.test | 10 | 0.001292s | 0.001252s | 0.001226s | byte equality observed |
| erase_key.test | 10 | 0.001316s | 0.001312s | 0.001248s | byte equality observed |
| filter.test | 10 | 0.001302s | 0.001306s | 0.001231s | byte equality observed |
| filter_if.test | 10 | 0.001301s | 0.001296s | 0.001292s | byte equality observed |
| filter_view.test | 10 | 0.001317s | 0.001342s | 0.001265s | byte equality observed |
| find.test | 10 | 0.001271s | 0.001308s | 0.001290s | byte equality observed |
| find_if.test | 10 | 0.001327s | 0.001300s | 0.001301s | byte equality observed |
| flatten.test | 10 | 0.001334s | 0.001259s | 0.001312s | byte equality observed |
| flatten_view.test | 10 | 0.001263s | 0.001244s | 0.001304s | byte equality observed |
| fold.test | 10 | 0.001269s | 0.001300s | 0.001287s | byte equality observed |
| for_each.test | 10 | 0.001301s | 0.001308s | 0.001266s | byte equality observed |
| front_extended_deque.test | 10 | 0.001224s | 0.001210s | 0.001217s | byte equality observed |
| fused.test | 10 | 0.001265s | 0.001228s | 0.001219s | byte equality observed |
| fused_function_object.test | 10 | 0.001219s | 0.001229s | 0.001236s | byte equality observed |
| fused_procedure.test | 10 | 0.001259s | 0.001239s | 0.001240s | byte equality observed |
| github-176.test | 8 | 0.001265s | 0.001214s | 0.001254s | byte equality observed |
| hash.test | 10 | 0.001257s | 0.001259s | 0.001268s | byte equality observed |
| identity_view.test | 10 | 0.001286s | 0.001308s | 0.001275s | byte equality observed |
| insert.test | 10 | 0.001359s | 0.001348s | 0.001317s | byte equality observed |
| insert_range.test | 10 | 0.001296s | 0.001301s | 0.001311s | byte equality observed |
| invoke.test | 10 | 0.001262s | 0.001311s | 0.001243s | byte equality observed |
| invoke_function_object.test | 9 | 0.001210s | 0.001246s | 0.001200s | byte equality observed |
| invoke_procedure.test | 10 | 0.001224s | 0.001226s | 0.001232s | byte equality observed |
| io.test | 9 | 0.001393s | 0.001421s | 0.001384s | byte equality observed |
| iter_fold.test | 10 | 0.001259s | 0.001376s | 0.001318s | byte equality observed |
| iterator_range.test | 10 | 0.001254s | 0.001272s | 0.001327s | byte equality observed |
| join.test | 10 | 0.001271s | 0.001235s | 0.001300s | byte equality observed |
| joint_view.test | 10 | 0.001324s | 0.001327s | 0.001298s | byte equality observed |
| list_comparison.test | 10 | 0.001211s | 0.001238s | 0.001276s | byte equality observed |
| list_construction.test | 10 | 0.001220s | 0.001254s | 0.001212s | byte equality observed |
| list_copy.test | 9 | 0.001208s | 0.001265s | 0.001201s | byte equality observed |
| list_hash.test | 9 | 0.001277s | 0.001308s | 0.001205s | byte equality observed |
| list_iterator.test | 10 | 0.001235s | 0.001246s | 0.001225s | byte equality observed |
| list_make.test | 10 | 0.001229s | 0.001260s | 0.001267s | byte equality observed |
| list_misc.test | 10 | 0.001238s | 0.001279s | 0.001289s | byte equality observed |
| list_mutate.test | 10 | 0.001257s | 0.001249s | 0.001231s | byte equality observed |
| list_nest.test | 10 | 0.001225s | 0.001241s | 0.001232s | byte equality observed |
| list_tie.test | 10 | 0.001219s | 0.001263s | 0.001242s | byte equality observed |
| list_value_at.test | 10 | 0.001253s | 0.001248s | 0.001339s | byte equality observed |
| make_fused.test | 7 | 0.001221s | 0.001238s | 0.001247s | byte equality observed |
| make_fused_function_object.test | 9 | 0.001246s | 0.001297s | 0.001243s | byte equality observed |
| make_fused_procedure.test | 9 | 0.001261s | 0.001261s | 0.001258s | byte equality observed |
| make_list.test | 10 | 0.001277s | 0.001244s | 0.001213s | byte equality observed |
| make_unfused.test | 10 | 0.001254s | 0.001258s | 0.001203s | byte equality observed |
| make_vector.test | 10 | 0.001211s | 0.001223s | 0.001276s | byte equality observed |
| map.test | 10 | 0.001270s | 0.001283s | 0.001280s | byte equality observed |
| map_comparison.test | 10 | 0.001228s | 0.001234s | 0.001255s | byte equality observed |
| map_construction.test | 10 | 0.001214s | 0.001231s | 0.001255s | byte equality observed |
| map_copy.test | 10 | 0.001218s | 0.001255s | 0.001239s | byte equality observed |
| map_misc.test | 10 | 0.001247s | 0.001243s | 0.001204s | byte equality observed |
| map_move.test | 10 | 0.001236s | 0.001285s | 0.001228s | byte equality observed |
| map_mutate.test | 10 | 0.001244s | 0.001243s | 0.001246s | byte equality observed |
| map_tie.test | 10 | 0.001251s | 0.001233s | 0.001226s | byte equality observed |
| move.test | 10 | 0.001270s | 0.001230s | 0.001255s | byte equality observed |
| nil.test | 10 | 0.001249s | 0.001253s | 0.001223s | byte equality observed |
| none.test | 10 | 0.001227s | 0.001234s | 0.001272s | byte equality observed |
| nview.test | 10 | 0.001253s | 0.001315s | 0.001326s | byte equality observed |
| pop_back.test | 10 | 0.001304s | 0.001289s | 0.001282s | byte equality observed |
| pop_front.test | 10 | 0.001303s | 0.001288s | 0.001248s | byte equality observed |
| push_back.test | 10 | 0.001345s | 0.001267s | 0.001259s | byte equality observed |
| push_front.test | 10 | 0.001292s | 0.001316s | 0.001258s | byte equality observed |
| quick.test | 10 | 0.000572s | 0.001236s | 0.001213s | byte equality observed |
| ref_vector.test | 10 | 0.001261s | 0.001310s | 0.001264s | byte equality observed |
| remove.test | 10 | 0.001282s | 0.001310s | 0.001285s | byte equality observed |
| remove_if.test | 10 | 0.001303s | 0.001286s | 0.001306s | byte equality observed |
| repetitive_view.test | 10 | 0.001257s | 0.001255s | 0.001230s | byte equality observed |
| replace.test | 10 | 0.001242s | 0.001288s | 0.001277s | byte equality observed |
| replace_if.test | 10 | 0.001289s | 0.001266s | 0.001309s | byte equality observed |
| reverse.test | 10 | 0.001259s | 0.001306s | 0.001278s | byte equality observed |
| reverse_fold.test | 10 | 0.001266s | 0.001313s | 0.001266s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.001267s | 0.001270s | 0.001265s | byte equality observed |
| reverse_view.test | 10 | 0.001252s | 0.001249s | 0.001274s | byte equality observed |
| segmented_find.test | 10 | 0.001310s | 0.001223s | 0.001228s | byte equality observed |
| segmented_find_if.test | 10 | 0.001263s | 0.001234s | 0.001261s | byte equality observed |
| segmented_fold.test | 10 | 0.001278s | 0.001261s | 0.001346s | byte equality observed |
| segmented_for_each.test | 10 | 0.001287s | 0.001265s | 0.001274s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.001318s | 0.001324s | 0.001341s | byte equality observed |
| set.test | 10 | 0.001260s | 0.001325s | 0.001303s | byte equality observed |
| single_view.test | 10 | 0.001284s | 0.001289s | 0.001263s | byte equality observed |
| std_array.test | 10 | 0.001237s | 0.001237s | 0.001301s | byte equality observed |
| std_pair.test | 10 | 0.001247s | 0.001253s | 0.001268s | byte equality observed |
| std_tuple.test | 10 | 0.001219s | 0.001262s | 0.001209s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.001265s | 0.001262s | 0.001301s | byte equality observed |
| swap.test | 10 | 0.001241s | 0.001231s | 0.001275s | byte equality observed |
| transform.test | 10 | 0.001269s | 0.001290s | 0.001301s | byte equality observed |
| transform_view.test | 10 | 0.001317s | 0.001374s | 0.001349s | byte equality observed |
| tuple_comparison.test | 10 | 0.001227s | 0.001254s | 0.001248s | byte equality observed |
| tuple_construction.test | 10 | 0.001272s | 0.001278s | 0.001216s | byte equality observed |
| tuple_conversion.test | 10 | 0.001261s | 0.001221s | 0.001230s | byte equality observed |
| tuple_copy.test | 10 | 0.001272s | 0.001209s | 0.001249s | byte equality observed |
| tuple_element.test | 10 | 0.001269s | 0.001248s | 0.001321s | byte equality observed |
| tuple_hash.test | 10 | 0.001254s | 0.001276s | 0.001258s | byte equality observed |
| tuple_make.test | 10 | 0.001250s | 0.001265s | 0.001258s | byte equality observed |
| tuple_misc.test | 10 | 0.001272s | 0.001285s | 0.001273s | byte equality observed |
| tuple_mutate.test | 10 | 0.001262s | 0.001233s | 0.001253s | byte equality observed |
| tuple_nest.test | 10 | 0.001254s | 0.001241s | 0.001297s | byte equality observed |
| tuple_tie.test | 10 | 0.001223s | 0.001230s | 0.001305s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.001230s | 0.001243s | 0.001232s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.001225s | 0.001263s | 0.001288s | byte equality observed |
| unfused.test | 10 | 0.001297s | 0.001225s | 0.001263s | byte equality observed |
| unfused_typed.test | 10 | 0.001312s | 0.001238s | 0.001308s | byte equality observed |
| vector_comparison.test | 10 | 0.001254s | 0.001252s | 0.001281s | byte equality observed |
| vector_construction.test | 10 | 0.001282s | 0.001233s | 0.001235s | byte equality observed |
| vector_conversion.test | 10 | 0.001278s | 0.001244s | 0.001255s | byte equality observed |
| vector_copy.test | 10 | 0.001277s | 0.001272s | 0.001249s | byte equality observed |
| vector_hash.test | 10 | 0.001296s | 0.001284s | 0.001233s | byte equality observed |
| vector_iterator.test | 10 | 0.001243s | 0.001193s | 0.001222s | byte equality observed |
| vector_make.test | 10 | 0.001287s | 0.001252s | 0.001229s | byte equality observed |
| vector_misc.test | 9 | 0.001292s | 0.001234s | 0.001297s | byte equality observed |
| vector_move.test | 10 | 0.001274s | 0.001246s | 0.001292s | byte equality observed |
| vector_mutate.test | 10 | 0.001281s | 0.001243s | 0.001188s | byte equality observed |
| vector_n.test | 10 | 0.001271s | 0.001270s | 0.001241s | byte equality observed |
| vector_nest.test | 10 | 0.001243s | 0.001270s | 0.001257s | byte equality observed |
| vector_tie.test | 10 | 0.001283s | 0.001236s | 0.001252s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.001255s | 0.001252s | 0.001274s | byte equality observed |
| vector_traits__no_variadic.test | 9 | 0.001240s | 0.001287s | 0.001257s | byte equality observed |
| vector_value_at.test | 9 | 0.001246s | 0.001243s | 0.001307s | byte equality observed |
| zip.test | 10 | 0.001251s | 0.001254s | 0.001221s | byte equality observed |
| zip2.test | 10 | 0.001251s | 0.001247s | 0.001251s | byte equality observed |
| zip_ignore.test | 10 | 0.001301s | 0.001254s | 0.001268s | byte equality observed |
| zip_view.test | 9 | 0.001247s | 0.001266s | 0.001241s | byte equality observed |
| zip_view2.test | 9 | 0.001268s | 0.001237s | 0.001261s | byte equality observed |
| zip_view_ignore.test | 10 | 0.001223s | 0.001216s | 0.001207s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45850603565).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
