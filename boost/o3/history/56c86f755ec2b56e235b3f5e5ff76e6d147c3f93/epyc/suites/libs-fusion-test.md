# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.477373 | 1.040999 | 1.664200 | 0.001585 | 0.001790 | 0.002182 |
| any.test | RUN | 0.469449 | 0.973886 | 1.600053 | 0.001500 | 0.001967 | 0.002136 |
| clear.test | RUN | 0.338776 | 0.889279 | 1.236529 | 0.001816 | 0.002102 | 0.002106 |
| copy.test | RUN | 0.292464 | 0.660739 | 0.999269 | 0.001877 | 0.002196 | 0.001929 |
| count.test | RUN | 0.324841 | 0.743201 | 1.063432 | 0.001978 | 0.001998 | 0.001878 |
| count_if.test | RUN | 0.304685 | 0.700912 | 0.985520 | 0.001936 | 0.001974 | 0.001992 |
| erase.test | RUN | 0.430340 | 1.214767 | 1.621208 | 0.002314 | 0.002034 | 0.002012 |
| erase_key.test | RUN | 0.422131 | 1.214327 | 1.509580 | 0.001870 | 0.001868 | 0.002148 |
| filter.test | RUN | 0.368449 | 1.010652 | 1.367964 | 0.001868 | 0.002118 | 0.002224 |
| filter_if.test | RUN | 0.434509 | 1.210103 | 1.666063 | 0.001819 | 0.002134 | 0.002152 |
| find.test | RUN | 0.359291 | 0.836898 | 1.264468 | 0.002097 | 0.002124 | 0.001671 |
| find_if.test | RUN | 0.356608 | 0.779288 | 1.147260 | 0.001950 | 0.001966 | 0.001999 |
| fold.test | RUN | 0.394160 | 0.935966 | 1.426622 | 0.002190 | 0.002042 | 0.001757 |
| for_each.test | RUN | 0.342864 | 0.876562 | 1.226016 | 0.002056 | 0.001936 | 0.002226 |
| insert.test | RUN | 0.501726 | 1.452885 | 1.968447 | 0.001633 | 0.002238 | 0.002099 |
| insert_range.test | RUN | 0.496433 | 1.457405 | 2.004121 | 0.002132 | 0.001814 | 0.001969 |
| iter_fold.test | RUN | 0.585558 | 1.404807 | 2.309322 | 0.001782 | 0.002140 | 0.002224 |
| move.test | RUN | 0.293579 | 0.690239 | 1.064565 | 0.002052 | 0.001960 | 0.001822 |
| none.test | RUN | 0.472116 | 0.978199 | 1.566493 | 0.002102 | 0.002158 | 0.001694 |
| pop_back.test | RUN | 0.455563 | 1.289217 | 1.805662 | 0.001900 | 0.001854 | 0.002373 |
| pop_front.test | RUN | 0.401449 | 1.071665 | 1.435163 | 0.002168 | 0.001963 | 0.001687 |
| push_back.test | RUN | 0.489419 | 1.516501 | 1.932668 | 0.001896 | 0.002408 | 0.002226 |
| push_front.test | RUN | 0.442836 | 1.262580 | 1.593532 | 0.001998 | 0.002118 | 0.002206 |
| remove.test | RUN | 0.499156 | 1.411063 | 1.919104 | 0.002164 | 0.002024 | 0.001863 |
| remove_if.test | RUN | 0.442349 | 1.196020 | 1.630820 | 0.001742 | 0.002147 | 0.001741 |
| replace.test | RUN | 0.428087 | 1.140857 | 1.535776 | 0.001954 | 0.002075 | 0.002036 |
| replace_if.test | RUN | 0.416672 | 1.163990 | 1.506440 | 0.002099 | 0.002017 | 0.001611 |
| reverse_fold.test | RUN | 0.651426 | 1.617943 | 2.609629 | 0.001894 | 0.001970 | 0.002020 |
| reverse_iter_fold.test | RUN | 0.666340 | 1.685168 | 2.738153 | 0.001890 | 0.001926 | 0.001906 |
| reverse.test | RUN | 0.406414 | 1.183350 | 1.574724 | 0.001982 | 0.002125 | 0.002012 |
| segmented_for_each.test | RUN | 0.715899 | 2.263750 | 3.113209 | 0.001947 | 0.002120 | 0.002060 |
| segmented_find.test | RUN | 0.454505 | 1.201676 | 1.785078 | 0.001913 | 0.001936 | 0.001827 |
| segmented_find_if.test | RUN | 0.449296 | 1.225528 | 1.785836 | 0.001834 | 0.001978 | 0.001971 |
| segmented_fold.test | RUN | 0.549481 | 1.584134 | 2.251222 | 0.002174 | 0.002226 | 0.002196 |
| transform.test | RUN | 0.430663 | 1.232708 | 1.623760 | 0.002036 | 0.002163 | 0.002074 |
| join.test | RUN | 0.333380 | 0.767238 | 1.161481 | 0.001988 | 0.001986 | 0.002102 |
| zip.test | RUN | 0.574984 | 1.457321 | 2.195086 | 0.002052 | 0.002128 | 0.002094 |
| zip2.test | RUN | 0.572226 | 1.381380 | 2.106192 | 0.002014 | 0.001532 | 0.002106 |
| zip_ignore.test | RUN | 0.414698 | 0.971474 | 1.412658 | 0.002129 | 0.002105 | 0.001592 |
| flatten.test | RUN | 0.415077 | 1.062525 | 1.415167 | 0.001846 | 0.001976 | 0.002152 |
| ticket-5490.test | COMPILE | 0.216203 | 0.448126 | 0.626450 | — | — | — |
| as_deque.test | RUN | 0.399415 | 1.016885 | 1.563472 | 0.002082 | 0.002128 | 0.001777 |
| as_list.test | RUN | 0.435032 | 1.209872 | 1.603038 | 0.002135 | 0.002005 | 0.002156 |
| as_map.test | RUN | 0.441935 | 1.226470 | 1.642734 | 0.001772 | 0.001953 | 0.001914 |
| as_map_assoc.test | RUN | 0.423660 | 1.152511 | 1.505708 | 0.001925 | 0.002094 | 0.002230 |
| as_set.test | RUN | 0.491595 | 1.393807 | 1.898898 | 0.001894 | 0.002218 | 0.001666 |
| as_vector.test | RUN | 0.443317 | 1.245030 | 1.708075 | 0.001886 | 0.001910 | 0.001872 |
| boost_tuple.test | RUN | 0.440019 | 1.267892 | 1.605405 | 0.001886 | 0.002030 | 0.002144 |
| boost_tuple_iterator.test | RUN | 0.302532 | 0.756964 | 1.032817 | 0.001796 | 0.002136 | 0.002042 |
| cons.test | RUN | 0.553925 | 1.404922 | 2.000135 | 0.001916 | 0.001895 | 0.002226 |
| convert_boost_tuple.test | RUN | 0.353631 | 1.054159 | 1.284839 | 0.001868 | 0.002000 | 0.001903 |
| convert_deque.test | RUN | 0.355986 | 1.055834 | 1.265021 | 0.001886 | 0.001816 | 0.001878 |
| convert_list.test | RUN | 0.353543 | 1.107325 | 1.318656 | 0.001805 | 0.002012 | 0.001973 |
| convert_std_pair.test | RUN | 0.370632 | 1.074011 | 1.286163 | 0.002066 | 0.002100 | 0.001878 |
| convert_std_tuple.test | RUN | 0.351195 | 1.036840 | 1.277562 | 0.001914 | 0.001936 | 0.001974 |
| convert_vector.test | RUN | 0.359682 | 1.051838 | 1.308119 | 0.002106 | 0.001810 | 0.001992 |
| filter_view.test | RUN | 0.414559 | 1.123269 | 1.531094 | 0.002033 | 0.002061 | 0.001966 |
| hash.test | RUN | 0.417634 | 0.998364 | 1.497815 | 0.001999 | 0.002274 | 0.001737 |
| io.test | RUN | 0.434173 | 1.412215 | 1.748793 | 0.002096 | 0.002196 | 0.002552 |
| iterator_range.test | RUN | 0.391435 | 1.063761 | 1.475236 | 0.002138 | 0.002068 | 0.001942 |
| joint_view.test | RUN | 0.530848 | 1.829370 | 2.145061 | 0.002184 | 0.002084 | 0.002098 |
| list_comparison.test | RUN | 0.313374 | 0.779241 | 1.076528 | 0.002030 | 0.002038 | 0.001682 |
| list_construction.test | RUN | 0.313357 | 0.715325 | 1.078785 | 0.002096 | 0.001932 | 0.001947 |
| list_copy.test | RUN | 0.461706 | 1.315703 | 1.790035 | 0.001964 | 0.002116 | 0.002052 |
| list_iterator.test | RUN | 0.310318 | 0.722389 | 1.007531 | 0.001802 | 0.001968 | 0.002142 |
| list_hash.test | RUN | 0.410104 | 1.389487 | 1.527134 | 0.002058 | 0.002259 | 0.002121 |
| list_make.test | RUN | 0.320468 | 0.802624 | 1.182897 | 0.002001 | 0.001912 | 0.002013 |
| list_misc.test | RUN | 0.410369 | 0.915252 | 1.328693 | 0.002051 | 0.002284 | 0.001972 |
| list_mutate.test | RUN | 0.286711 | 0.633876 | 0.971196 | 0.001590 | 0.002141 | 0.001954 |
| list_nest.test | RUN | 0.591475 | 1.761199 | 2.589475 | 0.001990 | 0.001785 | 0.002044 |
| list_tie.test | RUN | 0.305729 | 0.710296 | 1.076019 | 0.001814 | 0.002160 | 0.002010 |
| list_value_at.test | RUN | 0.294222 | 0.721090 | 1.010458 | 0.001858 | 0.002121 | 0.001964 |
| deque_comparison.test | RUN | 0.328676 | 0.751513 | 1.003491 | 0.001746 | 0.001813 | 0.002121 |
| deque_construction.test | RUN | 0.313788 | 0.716054 | 1.124109 | 0.002070 | 0.002228 | 0.002134 |
| deque_copy.test | RUN | 0.455378 | 1.242798 | 1.663701 | 0.001958 | 0.001964 | 0.001956 |
| deque_iterator.test | RUN | 0.306580 | 0.770927 | 1.056886 | 0.001904 | 0.002022 | 0.002228 |
| deque_hash.test | RUN | 0.416568 | 1.287353 | 1.515455 | 0.002032 | 0.002148 | 0.002140 |
| deque_is_constructible.test | COMPILE | 0.163918 | 0.348784 | 0.487674 | — | — | — |
| deque_make.test | RUN | 0.314287 | 0.746201 | 1.081887 | 0.001906 | 0.002150 | 0.002196 |
| deque_misc.test | RUN | 0.402337 | 0.946815 | 1.327161 | 0.001775 | 0.001927 | 0.002072 |
| deque_move.test | RUN | 0.307840 | 0.785336 | 1.064034 | 0.001794 | 0.001955 | 0.002148 |
| deque_mutate.test | RUN | 0.285759 | 0.623145 | 0.923305 | 0.001780 | 0.002006 | 0.002133 |
| deque_nest.test | RUN | 0.860320 | 2.789794 | 3.981564 | 0.001774 | 0.002148 | 0.001936 |
| deque_tie.test | RUN | 0.298068 | 0.708062 | 0.993762 | 0.001849 | 0.001838 | 0.001672 |
| deque_value_at.test | RUN | 0.288254 | 0.627044 | 0.962757 | 0.001944 | 0.002224 | 0.001903 |
| front_extended_deque.test | RUN | 0.408255 | 0.979059 | 1.512232 | 0.002112 | 0.002068 | 0.001774 |
| back_extended_deque.test | RUN | 0.411333 | 0.983168 | 1.405884 | 0.002009 | 0.001990 | 0.002087 |
| make_list.test | RUN | 0.329592 | 0.789539 | 1.127618 | 0.002051 | 0.001817 | 0.001998 |
| make_vector.test | RUN | 0.323862 | 0.850630 | 1.165354 | 0.001694 | 0.002166 | 0.001866 |
| map.test | RUN | 0.427159 | 1.172028 | 1.560645 | 0.001959 | 0.001906 | 0.002068 |
| map_comparison.test | RUN | 0.326320 | 0.785880 | 1.109266 | 0.001994 | 0.001989 | 0.002270 |
| map_construction.test | RUN | 0.316383 | 0.749178 | 1.098371 | 0.001874 | 0.002164 | 0.002164 |
| map_copy.test | RUN | 0.381337 | 0.963339 | 1.308568 | 0.002058 | 0.002188 | 0.001945 |
| map_misc.test | RUN | 0.406187 | 0.963382 | 1.337196 | 0.001342 | 0.001887 | 0.001763 |
| map_move.test | RUN | 0.314607 | 0.817097 | 1.085208 | 0.002038 | 0.001908 | 0.001798 |
| map_mutate.test | RUN | 0.284362 | 0.632044 | 0.949955 | 0.001976 | 0.002018 | 0.002089 |
| map_tie.test | RUN | 0.297858 | 0.636447 | 0.970640 | 0.002128 | 0.002009 | 0.002372 |
| nil.test | RUN | 0.202247 | 0.432790 | 0.689500 | 0.002044 | 0.002138 | 0.002296 |
| nview.test | RUN | 0.394684 | 0.939074 | 1.382874 | 0.002124 | 0.002294 | 0.002126 |
| reverse_view.test | RUN | 0.505970 | 1.539908 | 1.952102 | 0.002054 | 0.001997 | 0.001472 |
| segmented_iterator_range.test | RUN | 0.593552 | 1.799399 | 2.476008 | 0.002162 | 0.002229 | 0.002255 |
| set.test | RUN | 0.373585 | 1.038597 | 1.410158 | 0.001789 | 0.002278 | 0.001919 |
| single_view.test | RUN | 0.349347 | 0.946981 | 1.260576 | 0.002236 | 0.002059 | 0.002188 |
| std_pair.test | RUN | 0.446314 | 1.188357 | 1.594360 | 0.002046 | 0.002104 | 0.002253 |
| boost_array.test | RUN | 0.377461 | 0.850328 | 1.279682 | 0.002145 | 0.002127 | 0.002133 |
| array.test | RUN | 0.367751 | 0.857830 | 1.223292 | 0.001691 | 0.002135 | 0.001904 |
| std_array.test | RUN | 0.374396 | 0.839937 | 1.230226 | 0.002058 | 0.002028 | 0.002180 |
| tuple_comparison.test | RUN | 0.338400 | 0.800624 | 1.123106 | 0.001936 | 0.001957 | 0.002172 |
| tuple_construction.test | RUN | 0.336698 | 0.782564 | 1.171170 | 0.002148 | 0.002259 | 0.002292 |
| tuple_conversion.test | RUN | 0.747478 | 2.401511 | 3.676152 | 0.001672 | 0.001923 | 0.001840 |
| tuple_copy.test | RUN | 0.509980 | 1.394149 | 2.032746 | 0.001801 | 0.001940 | 0.002092 |
| tuple_element.test | RUN | 0.302515 | 0.760944 | 1.015451 | 0.001692 | 0.001856 | 0.002104 |
| tuple_make.test | RUN | 0.342522 | 0.856006 | 1.154254 | 0.001995 | 0.001957 | 0.001992 |
| tuple_misc.test | RUN | 0.437216 | 1.002067 | 1.425963 | 0.001747 | 0.002150 | 0.001970 |
| tuple_mutate.test | RUN | 0.307313 | 0.697432 | 1.057399 | 0.001984 | 0.001700 | 0.002101 |
| tuple_nest.test | RUN | 1.249107 | 4.800975 | 6.761093 | 0.001959 | 0.002002 | 0.002254 |
| tuple_hash.test | RUN | 0.442026 | 1.339426 | 1.558059 | 0.002022 | 0.002146 | 0.002132 |
| tuple_tie.test | RUN | 0.317759 | 0.754336 | 1.113089 | 0.002149 | 0.001838 | 0.002197 |
| tuple_traits__maybe_variadic.test | RUN | 0.359538 | 0.947283 | 1.243160 | 0.002230 | 0.002158 | 0.002170 |
| tuple_traits__no_variadic.test | RUN | 0.392821 | 0.939712 | 1.262469 | 0.001970 | 0.002222 | 0.001924 |
| transform_view.test | RUN | 0.505632 | 1.573608 | 1.995220 | 0.002120 | 0.002230 | 0.002188 |
| identity_view.test | RUN | 0.491933 | 1.395074 | 1.872963 | 0.001964 | 0.002228 | 0.002012 |
| vector_comparison.test | RUN | 0.326584 | 0.784413 | 1.083414 | 0.001794 | 0.001806 | 0.002265 |
| vector_construction.test | RUN | 0.315577 | 0.707003 | 1.128839 | 0.001860 | 0.002120 | 0.002102 |
| vector_conversion.test | RUN | 0.906611 | 3.109478 | 4.660499 | 0.002114 | 0.001888 | 0.002067 |
| vector_copy.test | RUN | 0.475889 | 1.365587 | 1.922742 | 0.001850 | 0.002164 | 0.002145 |
| vector_iterator.test | RUN | 0.320453 | 0.758948 | 1.019915 | 0.001823 | 0.001885 | 0.001873 |
| vector_make.test | RUN | 0.322520 | 0.804387 | 1.078466 | 0.002123 | 0.001710 | 0.002088 |
| vector_misc.test | RUN | 0.409235 | 1.030408 | 1.341864 | 0.001794 | 0.001654 | 0.002150 |
| vector_move.test | RUN | 0.312927 | 0.784072 | 1.085883 | 0.002014 | 0.001869 | 0.002086 |
| vector_mutate.test | RUN | 0.283188 | 0.650560 | 0.907907 | 0.001748 | 0.001932 | 0.002182 |
| vector_n.test | RUN | 0.351853 | 0.825111 | 1.298297 | 0.002612 | 0.002206 | 0.002180 |
| vector_nest.test | RUN | 1.264521 | 4.961861 | 6.796497 | 0.002192 | 0.002048 | 0.002062 |
| vector_hash.test | RUN | 0.404441 | 1.335222 | 1.417985 | 0.001863 | 0.001954 | 0.001827 |
| vector_tie.test | RUN | 0.299017 | 0.732527 | 1.088888 | 0.001955 | 0.001998 | 0.001809 |
| vector_traits__maybe_variadic.test | RUN | 0.322386 | 0.886776 | 1.108229 | 0.002082 | 0.002146 | 0.002197 |
| vector_traits__no_variadic.test | RUN | 0.370097 | 0.891327 | 1.170626 | 0.001870 | 0.001930 | 0.001935 |
| vector_value_at.test | RUN | 0.293718 | 0.696345 | 0.948627 | 0.002082 | 0.001788 | 0.002193 |
| zip_view.test | RUN | 0.627836 | 1.650390 | 2.413421 | 0.002109 | 0.001976 | 0.001739 |
| zip_view2.test | RUN | 0.484900 | 1.221421 | 1.876163 | 0.002028 | 0.002049 | 0.001799 |
| zip_view_ignore.test | RUN | 0.454007 | 1.116344 | 1.719657 | 0.001537 | 0.001936 | 0.002120 |
| repetitive_view.test | RUN | 0.772565 | 2.116569 | 3.174235 | 0.002158 | 0.001752 | 0.002002 |
| deduce_sequence.test | RUN | 0.383998 | 0.865167 | 1.275279 | 0.001854 | 0.002229 | 0.001892 |
| adapt_adt_named.test | RUN | 0.433660 | 1.212558 | 1.631749 | 0.001821 | 0.002048 | 0.002186 |
| adapt_adt_named_empty.test | RUN | 0.379480 | 1.034343 | 1.325332 | 0.001762 | 0.002040 | 0.002116 |
| adapt_adt.test | RUN | 0.493584 | 1.596176 | 1.848324 | 0.002202 | 0.002093 | 0.001820 |
| adapt_adt_empty.test | RUN | 0.383180 | 1.030341 | 1.348943 | 0.001988 | 0.002011 | 0.001856 |
| adapt_assoc_adt_named.test | RUN | 0.484289 | 1.284804 | 1.720721 | 0.001824 | 0.002279 | 0.001990 |
| adapt_assoc_adt_named_empty.test | RUN | 0.380137 | 0.999644 | 1.334317 | 0.001832 | 0.002117 | 0.001938 |
| adapt_assoc_adt.test | RUN | 0.495184 | 1.311375 | 1.805840 | 0.001828 | 0.002160 | 0.002140 |
| adapt_assoc_adt_empty.test | RUN | 0.374267 | 0.963063 | 1.313636 | 0.002108 | 0.001988 | 0.002255 |
| adapt_assoc_struct_named.test | RUN | 0.479344 | 1.288807 | 1.663870 | 0.002070 | 0.002184 | 0.002154 |
| adapt_assoc_struct_named_empty.test | RUN | 0.374065 | 0.956866 | 1.332862 | 0.002122 | 0.002169 | 0.001944 |
| adapt_assoc_struct.test | RUN | 0.436623 | 1.208393 | 1.605591 | 0.001934 | 0.002008 | 0.001873 |
| adapt_assoc_struct_empty.test | RUN | 0.373162 | 0.972390 | 1.326627 | 0.001854 | 0.002051 | 0.002122 |
| adapt_assoc_tpl_adt.test | RUN | 0.520771 | 1.373056 | 1.882898 | 0.002228 | 0.002188 | 0.002362 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.387457 | 0.974723 | 1.330658 | 0.001878 | 0.002210 | 0.002068 |
| adapt_assoc_tpl_struct.test | RUN | 0.420593 | 1.163796 | 1.523957 | 0.002042 | 0.002242 | 0.001864 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.371194 | 1.017813 | 1.326695 | 0.001841 | 0.002096 | 0.001839 |
| adapt_struct_named.test | RUN | 0.435557 | 1.196689 | 1.543634 | 0.002116 | 0.002056 | 0.002071 |
| adapt_struct_named_empty.test | RUN | 0.375329 | 0.975773 | 1.307190 | 0.002048 | 0.001931 | 0.002056 |
| adapt_struct.test | RUN | 0.469577 | 1.365691 | 1.752418 | 0.001968 | 0.002175 | 0.002264 |
| adapt_struct_empty.test | RUN | 0.383059 | 0.997392 | 1.352036 | 0.002149 | 0.002024 | 0.002246 |
| adapt_tpl_adt.test | RUN | 0.496367 | 1.571003 | 1.834760 | 0.002064 | 0.001970 | 0.002125 |
| adapt_tpl_adt_empty.test | RUN | 0.389458 | 0.985421 | 1.322193 | 0.001883 | 0.002164 | 0.001990 |
| adapt_tpl_struct.test | RUN | 0.395197 | 1.098200 | 1.488062 | 0.001920 | 0.001821 | 0.002038 |
| adapt_tpl_struct_empty.test | RUN | 0.381452 | 0.996208 | 1.330075 | 0.001948 | 0.002017 | 0.002264 |
| adt_attribute_proxy.test | RUN | 0.427406 | 0.973714 | 1.411621 | 0.002144 | 0.002236 | 0.001952 |
| define_struct.test | RUN | 0.525471 | 1.341816 | 1.862265 | 0.002090 | 0.002050 | 0.002258 |
| define_struct_empty.test | RUN | 0.460703 | 1.120780 | 1.531693 | 0.002000 | 0.002210 | 0.002222 |
| define_struct_move.test | RUN | 0.300158 | 0.629435 | 0.936617 | 0.002092 | 0.002272 | 0.001887 |
| define_struct_inline.test | RUN | 0.560872 | 1.647020 | 2.104062 | 0.001906 | 0.002013 | 0.002212 |
| define_struct_inline_empty.test | RUN | 0.459384 | 1.100167 | 1.549108 | 0.002130 | 0.002000 | 0.002107 |
| define_struct_inline_move.test | RUN | 0.294928 | 0.685613 | 0.944309 | 0.002159 | 0.001865 | 0.002062 |
| define_assoc_struct.test | RUN | 0.493724 | 1.288674 | 1.771475 | 0.001957 | 0.002064 | 0.002125 |
| define_assoc_struct_empty.test | RUN | 0.454156 | 1.132887 | 1.546630 | 0.001854 | 0.002280 | 0.002168 |
| define_assoc_struct_move.test | RUN | 0.291001 | 0.613067 | 0.939068 | 0.002020 | 0.002040 | 0.002106 |
| define_tpl_struct.test | RUN | 0.496551 | 1.355151 | 1.784386 | 0.001994 | 0.001972 | 0.001727 |
| define_tpl_struct_empty.test | RUN | 0.447596 | 1.096499 | 1.520268 | 0.002092 | 0.001992 | 0.002358 |
| define_tpl_struct_move.test | RUN | 0.295395 | 0.652117 | 0.944857 | 0.001717 | 0.001798 | 0.001964 |
| define_tpl_struct_inline.test | RUN | 0.518428 | 1.507601 | 1.972779 | 0.001882 | 0.002030 | 0.002272 |
| define_tpl_struct_inline_empty.test | RUN | 0.450943 | 1.101789 | 1.557721 | 0.002019 | 0.001918 | 0.001965 |
| define_tpl_struct_inline_move.test | RUN | 0.291345 | 0.674008 | 0.937363 | 0.001934 | 0.001983 | 0.002086 |
| define_assoc_tpl_struct.test | RUN | 0.492934 | 1.338448 | 1.767031 | 0.002002 | 0.002254 | 0.002179 |
| define_assoc_tpl_struct_empty.test | RUN | 0.448076 | 1.103408 | 1.562228 | 0.001948 | 0.001786 | 0.001830 |
| define_assoc_tpl_struct_move.test | RUN | 0.293625 | 0.669986 | 0.943155 | 0.001974 | 0.001934 | 0.001927 |
| std_tuple.test | RUN | 0.305349 | 0.721588 | 1.054236 | 0.001883 | 0.001804 | 0.001974 |
| std_tuple_iterator.test | RUN | 0.307546 | 0.744083 | 1.044011 | 0.002172 | 0.002168 | 0.002208 |
| ref_vector.test | RUN | 0.339101 | 0.776883 | 1.122451 | 0.002048 | 0.002212 | 0.002218 |
| flatten_view.test | RUN | 0.369094 | 0.934781 | 1.353981 | 0.002056 | 0.002192 | 0.002121 |
| github-159.test | COMPILE | 0.166212 | 0.341120 | 0.505972 | — | — | — |
| github-176.test | RUN | 0.341288 | 0.856063 | 1.122104 | 0.002100 | 0.002094 | 0.002198 |
| size.test | COMPILE | 0.289347 | 0.601672 | 0.881244 | — | — | — |
| fused.test | RUN | 0.414679 | 0.898714 | 1.339547 | 0.001774 | 0.002026 | 0.002190 |
| fused_function_object.test | RUN | 0.306243 | 0.669140 | 1.020085 | 0.002031 | 0.002084 | 0.002179 |
| fused_procedure.test | RUN | 0.392316 | 0.892182 | 1.276831 | 0.001559 | 0.002127 | 0.001866 |
| unfused.test | RUN | 0.306548 | 0.704984 | 1.013751 | 0.001806 | 0.001822 | 0.001724 |
| unfused_typed.test | RUN | 0.318545 | 0.749354 | 1.103588 | 0.001866 | 0.002006 | 0.002208 |
| make_fused.test | RUN | 0.399062 | 0.895399 | 1.360361 | 0.002051 | 0.002078 | 0.002228 |
| make_fused_function_object.test | RUN | 0.306180 | 0.700648 | 0.993534 | 0.001740 | 0.001877 | 0.002182 |
| make_fused_procedure.test | RUN | 0.381310 | 0.897009 | 1.265082 | 0.002114 | 0.002050 | 0.002112 |
| make_unfused.test | RUN | 0.309992 | 0.694149 | 1.046873 | 0.002310 | 0.002156 | 0.002245 |
| invoke.test | RUN | 0.792060 | 2.527482 | 3.419791 | 0.001940 | 0.001856 | 0.001985 |
| invoke_function_object.test | RUN | 0.370545 | 0.906688 | 1.309197 | 0.002418 | 0.002146 | 0.002136 |
| invoke_procedure.test | RUN | 0.649002 | 1.870164 | 2.653027 | 0.001764 | 0.001904 | 0.002206 |
| swap.test | RUN | 0.469868 | 1.186330 | 1.684537 | 0.002080 | 0.001980 | 0.002114 |
| is_sequence.test | COMPILE | 0.082891 | 0.166298 | 0.204259 | — | — | — |
| is_view.test | COMPILE | 0.082491 | 0.168237 | 0.202508 | — | — | — |
| pair_deque.test | COMPILE | 0.168734 | 0.368873 | 0.507106 | — | — | — |
| pair_list.test | COMPILE | 0.164825 | 0.357404 | 0.455957 | — | — | — |
| pair_map.test | COMPILE | 0.174104 | 0.357728 | 0.515045 | — | — | — |
| pair_set.test | COMPILE | 0.182942 | 0.368721 | 0.479726 | — | — | — |
| pair_vector.test | COMPILE | 0.169873 | 0.368053 | 0.476034 | — | — | — |
| pair_nest.test | COMPILE | 0.073075 | 0.142777 | 0.201750 | — | — | — |
| index_sequence.test | COMPILE | 0.060661 | 0.104732 | 0.148408 | — | — | — |
| and.test | COMPILE | 0.047346 | 0.079380 | 0.091271 | — | — | — |
| tag_of.test | COMPILE | 0.077553 | 0.158575 | 0.185208 | — | — | — |
| unused.test | COMPILE | 0.043119 | 0.109368 | 0.113477 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.068364 | 0.155406 | 0.176260 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.054077 | 0.104400 | 0.154671 | — | — | — |
| quick.test | RUN | 0.214462 | 0.496116 | 0.610086 | 0.000680 | 0.001563 | 0.001551 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.006× | 1.011×, 1.001× | 0.998× |
| clang | 1.008× | 1.011×, 1.005× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44612055398).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.001295s | 0.001301s | 0.001274s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.001282s | 0.001282s | 0.001290s | byte equality observed |
| adapt_adt_named.test | 10 | 0.001288s | 0.001321s | 0.001276s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.001318s | 0.001307s | 0.001234s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.001296s | 0.001298s | 0.001262s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.001304s | 0.001336s | 0.001287s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.001258s | 0.001331s | 0.001325s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.001293s | 0.001335s | 0.001312s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.001294s | 0.001312s | 0.001330s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.001283s | 0.001302s | 0.001247s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.001303s | 0.001366s | 0.001286s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.001290s | 0.001328s | 0.001302s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.001288s | 0.001299s | 0.001307s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.001316s | 0.001318s | 0.001321s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.001315s | 0.001327s | 0.001316s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.001309s | 0.001294s | 0.001368s | byte equality observed |
| adapt_struct.test | 10 | 0.001300s | 0.001330s | 0.001331s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.001286s | 0.001295s | 0.001345s | byte equality observed |
| adapt_struct_named.test | 10 | 0.001321s | 0.001298s | 0.001378s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.001282s | 0.001334s | 0.001279s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.001329s | 0.001290s | 0.001333s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.001368s | 0.001312s | 0.001269s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.001269s | 0.001312s | 0.001259s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.001318s | 0.001314s | 0.001297s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.001293s | 0.001276s | 0.001228s | byte equality observed |
| all.test | 10 | 0.001266s | 0.001291s | 0.001256s | byte equality observed |
| any.test | 10 | 0.001281s | 0.001243s | 0.001297s | byte equality observed |
| array.test | 10 | 0.001258s | 0.001268s | 0.001237s | byte equality observed |
| as_deque.test | 10 | 0.001287s | 0.001241s | 0.001284s | byte equality observed |
| as_list.test | 10 | 0.001293s | 0.001282s | 0.001330s | byte equality observed |
| as_map.test | 10 | 0.001289s | 0.001362s | 0.001329s | byte equality observed |
| as_map_assoc.test | 10 | 0.001259s | 0.001293s | 0.001330s | byte equality observed |
| as_set.test | 10 | 0.001280s | 0.001348s | 0.001335s | byte equality observed |
| as_vector.test | 10 | 0.001273s | 0.001310s | 0.001316s | byte equality observed |
| back_extended_deque.test | 10 | 0.001236s | 0.001309s | 0.001285s | byte equality observed |
| boost_array.test | 10 | 0.001247s | 0.001231s | 0.001329s | byte equality observed |
| boost_tuple.test | 10 | 0.001293s | 0.001271s | 0.001287s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.001256s | 0.001219s | 0.001300s | byte equality observed |
| clear.test | 10 | 0.001290s | 0.001323s | 0.001223s | byte equality observed |
| cons.test | 10 | 0.001315s | 0.001304s | 0.001273s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.001263s | 0.001314s | 0.001240s | byte equality observed |
| convert_deque.test | 10 | 0.001258s | 0.001295s | 0.001272s | byte equality observed |
| convert_list.test | 10 | 0.001247s | 0.001279s | 0.001235s | byte equality observed |
| convert_std_pair.test | 10 | 0.001276s | 0.001269s | 0.001327s | byte equality observed |
| convert_std_tuple.test | 10 | 0.001286s | 0.001271s | 0.001275s | byte equality observed |
| convert_vector.test | 10 | 0.001256s | 0.001257s | 0.001250s | byte equality observed |
| copy.test | 10 | 0.001246s | 0.001278s | 0.001273s | byte equality observed |
| count.test | 10 | 0.001248s | 0.001324s | 0.001243s | byte equality observed |
| count_if.test | 10 | 0.001249s | 0.001307s | 0.001241s | byte equality observed |
| deduce_sequence.test | 10 | 0.001228s | 0.001218s | 0.001323s | byte equality observed |
| define_assoc_struct.test | 10 | 0.001264s | 0.001247s | 0.001302s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.001276s | 0.001281s | 0.001299s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.001264s | 0.001310s | 0.001268s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.001284s | 0.001288s | 0.001283s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.001283s | 0.001311s | 0.001265s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.001263s | 0.001276s | 0.001355s | byte equality observed |
| define_struct.test | 10 | 0.001276s | 0.001280s | 0.001285s | byte equality observed |
| define_struct_empty.test | 10 | 0.001266s | 0.001286s | 0.001317s | byte equality observed |
| define_struct_inline.test | 10 | 0.001317s | 0.001321s | 0.001349s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.001266s | 0.001285s | 0.001331s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.001290s | 0.001305s | 0.001276s | byte equality observed |
| define_struct_move.test | 10 | 0.001257s | 0.001238s | 0.001285s | byte equality observed |
| define_tpl_struct.test | 10 | 0.001288s | 0.001264s | 0.001311s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.001360s | 0.001292s | 0.001280s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.001321s | 0.001292s | 0.001320s | byte equality observed |
| define_tpl_struct_inline_empty.test | 8 | 0.001276s | 0.001300s | 0.001317s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.001270s | 0.001315s | 0.001231s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.001260s | 0.001277s | 0.001243s | byte equality observed |
| deque_comparison.test | 10 | 0.001283s | 0.001255s | 0.001308s | byte equality observed |
| deque_construction.test | 10 | 0.001303s | 0.001301s | 0.001291s | byte equality observed |
| deque_copy.test | 10 | 0.001257s | 0.001326s | 0.001298s | byte equality observed |
| deque_hash.test | 10 | 0.001296s | 0.001252s | 0.001236s | byte equality observed |
| deque_iterator.test | 10 | 0.001258s | 0.001273s | 0.001235s | byte equality observed |
| deque_make.test | 10 | 0.001285s | 0.001271s | 0.001226s | byte equality observed |
| deque_misc.test | 10 | 0.001236s | 0.001244s | 0.001285s | byte equality observed |
| deque_move.test | 10 | 0.001269s | 0.001270s | 0.001244s | byte equality observed |
| deque_mutate.test | 10 | 0.001254s | 0.001217s | 0.001262s | byte equality observed |
| deque_nest.test | 10 | 0.001319s | 0.001237s | 0.001285s | byte equality observed |
| deque_tie.test | 10 | 0.001289s | 0.001292s | 0.001295s | byte equality observed |
| deque_value_at.test | 10 | 0.001262s | 0.001274s | 0.001298s | byte equality observed |
| erase.test | 10 | 0.001268s | 0.001286s | 0.001311s | byte equality observed |
| erase_key.test | 10 | 0.001303s | 0.001290s | 0.001295s | byte equality observed |
| filter.test | 10 | 0.001289s | 0.001332s | 0.001376s | byte equality observed |
| filter_if.test | 10 | 0.001306s | 0.001312s | 0.001364s | byte equality observed |
| filter_view.test | 10 | 0.001347s | 0.001344s | 0.001330s | byte equality observed |
| find.test | 10 | 0.001315s | 0.001316s | 0.001298s | byte equality observed |
| find_if.test | 10 | 0.001300s | 0.001332s | 0.001318s | byte equality observed |
| flatten.test | 10 | 0.001327s | 0.001265s | 0.001321s | byte equality observed |
| flatten_view.test | 10 | 0.001302s | 0.001310s | 0.001297s | byte equality observed |
| fold.test | 10 | 0.001308s | 0.001316s | 0.001322s | byte equality observed |
| for_each.test | 10 | 0.001281s | 0.001297s | 0.001346s | byte equality observed |
| front_extended_deque.test | 10 | 0.001218s | 0.001226s | 0.001282s | byte equality observed |
| fused.test | 10 | 0.001268s | 0.001263s | 0.001253s | byte equality observed |
| fused_function_object.test | 10 | 0.001274s | 0.001211s | 0.001274s | byte equality observed |
| fused_procedure.test | 10 | 0.001272s | 0.001229s | 0.001280s | byte equality observed |
| github-176.test | 10 | 0.001276s | 0.001198s | 0.001284s | byte equality observed |
| hash.test | 10 | 0.001314s | 0.001220s | 0.001202s | byte equality observed |
| identity_view.test | 10 | 0.001307s | 0.001252s | 0.001245s | byte equality observed |
| insert.test | 10 | 0.001305s | 0.001302s | 0.001294s | byte equality observed |
| insert_range.test | 10 | 0.001301s | 0.001323s | 0.001319s | byte equality observed |
| invoke.test | 10 | 0.001314s | 0.001270s | 0.001267s | byte equality observed |
| invoke_function_object.test | 10 | 0.001237s | 0.001283s | 0.001263s | byte equality observed |
| invoke_procedure.test | 10 | 0.001246s | 0.001260s | 0.001256s | byte equality observed |
| io.test | 10 | 0.001422s | 0.001404s | 0.001414s | byte equality observed |
| iter_fold.test | 10 | 0.001318s | 0.001372s | 0.001289s | byte equality observed |
| iterator_range.test | 10 | 0.001355s | 0.001332s | 0.001322s | byte equality observed |
| join.test | 10 | 0.001265s | 0.001216s | 0.001250s | byte equality observed |
| joint_view.test | 10 | 0.001340s | 0.001323s | 0.001294s | byte equality observed |
| list_comparison.test | 10 | 0.001218s | 0.001283s | 0.001276s | byte equality observed |
| list_construction.test | 10 | 0.001248s | 0.001293s | 0.001264s | byte equality observed |
| list_copy.test | 10 | 0.001233s | 0.001280s | 0.001237s | byte equality observed |
| list_hash.test | 10 | 0.001253s | 0.001297s | 0.001229s | byte equality observed |
| list_iterator.test | 10 | 0.001305s | 0.001276s | 0.001209s | byte equality observed |
| list_make.test | 10 | 0.001256s | 0.001277s | 0.001268s | byte equality observed |
| list_misc.test | 10 | 0.001244s | 0.001308s | 0.001302s | byte equality observed |
| list_mutate.test | 10 | 0.001300s | 0.001266s | 0.001249s | byte equality observed |
| list_nest.test | 10 | 0.001259s | 0.001232s | 0.001291s | byte equality observed |
| list_tie.test | 10 | 0.001238s | 0.001249s | 0.001260s | byte equality observed |
| list_value_at.test | 10 | 0.001264s | 0.001219s | 0.001267s | byte equality observed |
| make_fused.test | 10 | 0.001287s | 0.001275s | 0.001307s | byte equality observed |
| make_fused_function_object.test | 10 | 0.001254s | 0.001307s | 0.001262s | byte equality observed |
| make_fused_procedure.test | 10 | 0.001253s | 0.001229s | 0.001227s | byte equality observed |
| make_list.test | 10 | 0.001258s | 0.001257s | 0.001296s | byte equality observed |
| make_unfused.test | 10 | 0.001318s | 0.001271s | 0.001261s | byte equality observed |
| make_vector.test | 8 | 0.001254s | 0.001232s | 0.001286s | byte equality observed |
| map.test | 10 | 0.001265s | 0.001272s | 0.001279s | byte equality observed |
| map_comparison.test | 10 | 0.001253s | 0.001243s | 0.001298s | byte equality observed |
| map_construction.test | 10 | 0.001245s | 0.001285s | 0.001297s | byte equality observed |
| map_copy.test | 10 | 0.001231s | 0.001263s | 0.001277s | byte equality observed |
| map_misc.test | 7 | 0.001250s | 0.001285s | 0.001314s | byte equality observed |
| map_move.test | 9 | 0.001293s | 0.001256s | 0.001266s | byte equality observed |
| map_mutate.test | 10 | 0.001203s | 0.001259s | 0.001330s | byte equality observed |
| map_tie.test | 10 | 0.001235s | 0.001219s | 0.001260s | byte equality observed |
| move.test | 10 | 0.001274s | 0.001312s | 0.001298s | byte equality observed |
| nil.test | 10 | 0.001277s | 0.001243s | 0.001277s | byte equality observed |
| none.test | 10 | 0.001267s | 0.001255s | 0.001254s | byte equality observed |
| nview.test | 10 | 0.001271s | 0.001341s | 0.001292s | byte equality observed |
| pop_back.test | 10 | 0.001298s | 0.001292s | 0.001318s | byte equality observed |
| pop_front.test | 10 | 0.001287s | 0.001313s | 0.001285s | byte equality observed |
| push_back.test | 10 | 0.001308s | 0.001273s | 0.001343s | byte equality observed |
| push_front.test | 10 | 0.001313s | 0.001261s | 0.001332s | byte equality observed |
| quick.test | 10 | 0.000579s | 0.001233s | 0.001249s | byte equality observed |
| ref_vector.test | 10 | 0.001256s | 0.001252s | 0.001253s | byte equality observed |
| remove.test | 10 | 0.001286s | 0.001306s | 0.001318s | byte equality observed |
| remove_if.test | 10 | 0.001297s | 0.001307s | 0.001292s | byte equality observed |
| repetitive_view.test | 10 | 0.001292s | 0.001222s | 0.001252s | byte equality observed |
| replace.test | 10 | 0.001252s | 0.001353s | 0.001285s | byte equality observed |
| replace_if.test | 10 | 0.001303s | 0.001302s | 0.001296s | byte equality observed |
| reverse.test | 10 | 0.001320s | 0.001366s | 0.001360s | byte equality observed |
| reverse_fold.test | 10 | 0.001357s | 0.001316s | 0.001302s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.001310s | 0.001281s | 0.001273s | byte equality observed |
| reverse_view.test | 10 | 0.001320s | 0.001330s | 0.001281s | byte equality observed |
| segmented_find.test | 10 | 0.001266s | 0.001271s | 0.001289s | byte equality observed |
| segmented_find_if.test | 10 | 0.001267s | 0.001254s | 0.001283s | byte equality observed |
| segmented_fold.test | 10 | 0.001305s | 0.001311s | 0.001367s | byte equality observed |
| segmented_for_each.test | 10 | 0.001267s | 0.001295s | 0.001314s | byte equality observed |
| segmented_iterator_range.test | 9 | 0.001336s | 0.001359s | 0.001359s | byte equality observed |
| set.test | 10 | 0.001296s | 0.001296s | 0.001374s | byte equality observed |
| single_view.test | 10 | 0.001277s | 0.001281s | 0.001330s | byte equality observed |
| std_array.test | 10 | 0.001267s | 0.001275s | 0.001284s | byte equality observed |
| std_pair.test | 10 | 0.001295s | 0.001260s | 0.001315s | byte equality observed |
| std_tuple.test | 10 | 0.001236s | 0.001278s | 0.001243s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.001282s | 0.001296s | 0.001270s | byte equality observed |
| swap.test | 10 | 0.001267s | 0.001294s | 0.001250s | byte equality observed |
| transform.test | 10 | 0.001301s | 0.001300s | 0.001282s | byte equality observed |
| transform_view.test | 10 | 0.001329s | 0.001411s | 0.001321s | byte equality observed |
| tuple_comparison.test | 10 | 0.001223s | 0.001265s | 0.001269s | byte equality observed |
| tuple_construction.test | 10 | 0.001231s | 0.001266s | 0.001240s | byte equality observed |
| tuple_conversion.test | 10 | 0.001263s | 0.001307s | 0.001360s | byte equality observed |
| tuple_copy.test | 10 | 0.001265s | 0.001303s | 0.001246s | byte equality observed |
| tuple_element.test | 10 | 0.001275s | 0.001244s | 0.001254s | byte equality observed |
| tuple_hash.test | 10 | 0.001243s | 0.001291s | 0.001307s | byte equality observed |
| tuple_make.test | 10 | 0.001281s | 0.001330s | 0.001242s | byte equality observed |
| tuple_misc.test | 10 | 0.001310s | 0.001270s | 0.001272s | byte equality observed |
| tuple_mutate.test | 10 | 0.001302s | 0.001257s | 0.001241s | byte equality observed |
| tuple_nest.test | 10 | 0.001254s | 0.001303s | 0.001325s | byte equality observed |
| tuple_tie.test | 10 | 0.001240s | 0.001266s | 0.001302s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.001250s | 0.001243s | 0.001230s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.001272s | 0.001244s | 0.001234s | byte equality observed |
| unfused.test | 10 | 0.001268s | 0.001251s | 0.001326s | byte equality observed |
| unfused_typed.test | 10 | 0.001259s | 0.001271s | 0.001313s | byte equality observed |
| vector_comparison.test | 10 | 0.001248s | 0.001268s | 0.001333s | byte equality observed |
| vector_construction.test | 10 | 0.001280s | 0.001249s | 0.001316s | byte equality observed |
| vector_conversion.test | 10 | 0.001269s | 0.001270s | 0.001251s | byte equality observed |
| vector_copy.test | 10 | 0.001251s | 0.001235s | 0.001283s | byte equality observed |
| vector_hash.test | 10 | 0.001253s | 0.001249s | 0.001291s | byte equality observed |
| vector_iterator.test | 10 | 0.001241s | 0.001240s | 0.001277s | byte equality observed |
| vector_make.test | 10 | 0.001232s | 0.001263s | 0.001251s | byte equality observed |
| vector_misc.test | 10 | 0.001253s | 0.001301s | 0.001262s | byte equality observed |
| vector_move.test | 9 | 0.001248s | 0.001246s | 0.001267s | byte equality observed |
| vector_mutate.test | 10 | 0.001280s | 0.001355s | 0.001208s | byte equality observed |
| vector_n.test | 10 | 0.001263s | 0.001261s | 0.001269s | byte equality observed |
| vector_nest.test | 10 | 0.001248s | 0.001240s | 0.001254s | byte equality observed |
| vector_tie.test | 10 | 0.001222s | 0.001224s | 0.001269s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.001280s | 0.001263s | 0.001229s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.001270s | 0.001261s | 0.001257s | byte equality observed |
| vector_value_at.test | 10 | 0.001269s | 0.001295s | 0.001221s | byte equality observed |
| zip.test | 10 | 0.001244s | 0.001243s | 0.001326s | byte equality observed |
| zip2.test | 10 | 0.001289s | 0.001289s | 0.001264s | byte equality observed |
| zip_ignore.test | 10 | 0.001245s | 0.001242s | 0.001273s | byte equality observed |
| zip_view.test | 10 | 0.001284s | 0.001245s | 0.001302s | byte equality observed |
| zip_view2.test | 10 | 0.001246s | 0.001241s | 0.001294s | byte equality observed |
| zip_view_ignore.test | 10 | 0.001200s | 0.001209s | 0.001228s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44612055398).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
