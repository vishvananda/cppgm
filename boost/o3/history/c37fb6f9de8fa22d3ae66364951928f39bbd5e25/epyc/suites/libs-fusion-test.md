# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.476279 | 0.950902 | 1.572846 | 0.001681 | 0.001681 | 0.001652 |
| any.test | RUN | 0.458127 | 0.894014 | 1.537264 | 0.001850 | 0.001821 | 0.001790 |
| clear.test | RUN | 0.332479 | 0.851811 | 1.224769 | 0.001816 | 0.001831 | 0.002092 |
| copy.test | RUN | 0.284365 | 0.647985 | 0.992709 | 0.001930 | 0.002006 | 0.002028 |
| count.test | RUN | 0.323452 | 0.721380 | 1.104551 | 0.002006 | 0.002149 | 0.001726 |
| count_if.test | RUN | 0.306004 | 0.668737 | 1.021122 | 0.002366 | 0.002037 | 0.001872 |
| erase.test | RUN | 0.415746 | 1.165200 | 1.620346 | 0.001852 | 0.001879 | 0.001710 |
| erase_key.test | RUN | 0.421954 | 1.177132 | 1.529277 | 0.001823 | 0.001852 | 0.001746 |
| filter.test | RUN | 0.373149 | 1.017848 | 1.375420 | 0.002082 | 0.002164 | 0.002077 |
| filter_if.test | RUN | 0.427401 | 1.179040 | 1.587098 | 0.001994 | 0.001828 | 0.002140 |
| find.test | RUN | 0.363983 | 0.811907 | 1.237122 | 0.001777 | 0.001876 | 0.001730 |
| find_if.test | RUN | 0.352103 | 0.758461 | 1.175311 | 0.001816 | 0.001962 | 0.001748 |
| fold.test | RUN | 0.387098 | 0.918483 | 1.388306 | 0.001931 | 0.002066 | 0.002048 |
| for_each.test | RUN | 0.341245 | 0.834487 | 1.230810 | 0.001758 | 0.002134 | 0.002078 |
| insert.test | RUN | 0.487067 | 1.473627 | 1.910267 | 0.002298 | 0.001576 | 0.001848 |
| insert_range.test | RUN | 0.509926 | 1.487104 | 1.957484 | 0.002050 | 0.001881 | 0.001945 |
| iter_fold.test | RUN | 0.578359 | 1.418213 | 2.353130 | 0.002054 | 0.002169 | 0.002124 |
| move.test | RUN | 0.300890 | 0.684675 | 1.045582 | 0.002101 | 0.001828 | 0.002043 |
| none.test | RUN | 0.471715 | 0.970224 | 1.547837 | 0.001860 | 0.002088 | 0.001813 |
| pop_back.test | RUN | 0.454962 | 1.269001 | 1.766714 | 0.001787 | 0.001940 | 0.002202 |
| pop_front.test | RUN | 0.385608 | 1.047917 | 1.406942 | 0.002064 | 0.002042 | 0.002142 |
| push_back.test | RUN | 0.493700 | 1.458897 | 1.903506 | 0.002005 | 0.002091 | 0.002202 |
| push_front.test | RUN | 0.427875 | 1.200584 | 1.597479 | 0.001981 | 0.002105 | 0.002074 |
| remove.test | RUN | 0.480821 | 1.425196 | 1.919384 | 0.002044 | 0.002153 | 0.002064 |
| remove_if.test | RUN | 0.442736 | 1.169602 | 1.588656 | 0.002056 | 0.001853 | 0.001916 |
| replace.test | RUN | 0.410067 | 1.106763 | 1.497012 | 0.001921 | 0.002196 | 0.001978 |
| replace_if.test | RUN | 0.405432 | 1.091647 | 1.457451 | 0.002146 | 0.002240 | 0.001974 |
| reverse_fold.test | RUN | 0.646924 | 1.636527 | 2.580147 | 0.002074 | 0.002135 | 0.002146 |
| reverse_iter_fold.test | RUN | 0.668134 | 1.676022 | 2.711316 | 0.002044 | 0.002119 | 0.001818 |
| reverse.test | RUN | 0.401416 | 1.191296 | 1.562031 | 0.001706 | 0.002116 | 0.001736 |
| segmented_for_each.test | RUN | 0.728115 | 2.177313 | 3.067614 | 0.002144 | 0.002146 | 0.001884 |
| segmented_find.test | RUN | 0.450719 | 1.159978 | 1.758403 | 0.001936 | 0.002122 | 0.002019 |
| segmented_find_if.test | RUN | 0.438679 | 1.197911 | 1.775396 | 0.001965 | 0.001776 | 0.002114 |
| segmented_fold.test | RUN | 0.527925 | 1.537591 | 2.208314 | 0.002127 | 0.002202 | 0.002182 |
| transform.test | RUN | 0.424676 | 1.210578 | 1.585448 | 0.001814 | 0.002147 | 0.002050 |
| join.test | RUN | 0.324301 | 0.753175 | 1.113005 | 0.002009 | 0.001893 | 0.002091 |
| zip.test | RUN | 0.556731 | 1.444552 | 2.088175 | 0.001863 | 0.002178 | 0.002030 |
| zip2.test | RUN | 0.549579 | 1.351773 | 2.062684 | 0.002014 | 0.002116 | 0.001808 |
| zip_ignore.test | RUN | 0.410428 | 0.986192 | 1.385383 | 0.001766 | 0.001940 | 0.002018 |
| flatten.test | RUN | 0.381591 | 1.013685 | 1.423301 | 0.001826 | 0.001915 | 0.001876 |
| ticket-5490.test | COMPILE | 0.207854 | 0.471410 | 0.613799 | — | — | — |
| as_deque.test | RUN | 0.391961 | 0.982438 | 1.487577 | 0.002104 | 0.002069 | 0.002008 |
| as_list.test | RUN | 0.433304 | 1.192586 | 1.592491 | 0.001575 | 0.001993 | 0.002099 |
| as_map.test | RUN | 0.422849 | 1.190134 | 1.601226 | 0.002004 | 0.001888 | 0.001911 |
| as_map_assoc.test | RUN | 0.419360 | 1.121135 | 1.513015 | 0.001714 | 0.002134 | 0.001951 |
| as_set.test | RUN | 0.495755 | 1.356714 | 1.812910 | 0.001976 | 0.002072 | 0.001924 |
| as_vector.test | RUN | 0.437584 | 1.220328 | 1.652310 | 0.001986 | 0.001898 | 0.001930 |
| boost_tuple.test | RUN | 0.441259 | 1.208873 | 1.643689 | 0.001556 | 0.001776 | 0.002015 |
| boost_tuple_iterator.test | RUN | 0.305588 | 0.746095 | 1.035409 | 0.001984 | 0.001877 | 0.002120 |
| cons.test | RUN | 0.544181 | 1.347579 | 1.961522 | 0.001754 | 0.001766 | 0.002049 |
| convert_boost_tuple.test | RUN | 0.348446 | 1.036904 | 1.256139 | 0.001994 | 0.001870 | 0.002159 |
| convert_deque.test | RUN | 0.346382 | 1.044282 | 1.286581 | 0.002021 | 0.001884 | 0.001515 |
| convert_list.test | RUN | 0.344260 | 1.063133 | 1.292135 | 0.001658 | 0.001720 | 0.001860 |
| convert_std_pair.test | RUN | 0.367338 | 1.048753 | 1.302859 | 0.001878 | 0.002032 | 0.002078 |
| convert_std_tuple.test | RUN | 0.353074 | 1.039977 | 1.290794 | 0.001684 | 0.001805 | 0.001839 |
| convert_vector.test | RUN | 0.350888 | 1.040911 | 1.277875 | 0.001906 | 0.001762 | 0.002130 |
| filter_view.test | RUN | 0.413441 | 1.101517 | 1.517823 | 0.001645 | 0.001865 | 0.002140 |
| hash.test | RUN | 0.412716 | 0.984363 | 1.513534 | 0.001849 | 0.002105 | 0.001834 |
| io.test | RUN | 0.423116 | 1.366711 | 1.706321 | 0.001846 | 0.002144 | 0.002239 |
| iterator_range.test | RUN | 0.394915 | 1.054455 | 1.408037 | 0.001863 | 0.002224 | 0.001959 |
| joint_view.test | RUN | 0.523292 | 1.727530 | 2.099516 | 0.002026 | 0.001944 | 0.002137 |
| list_comparison.test | RUN | 0.309811 | 0.729484 | 1.082782 | 0.001866 | 0.001728 | 0.001831 |
| list_construction.test | RUN | 0.301961 | 0.738910 | 1.018997 | 0.001742 | 0.001940 | 0.001893 |
| list_copy.test | RUN | 0.459162 | 1.286636 | 1.735147 | 0.002000 | 0.001884 | 0.002035 |
| list_iterator.test | RUN | 0.309996 | 0.747819 | 0.982252 | 0.001726 | 0.002136 | 0.002048 |
| list_hash.test | RUN | 0.428836 | 1.348993 | 1.513886 | 0.001665 | 0.002166 | 0.002058 |
| list_make.test | RUN | 0.329135 | 0.793411 | 1.090721 | 0.001952 | 0.001873 | 0.002074 |
| list_misc.test | RUN | 0.402488 | 0.910953 | 1.354430 | 0.001608 | 0.002140 | 0.002010 |
| list_mutate.test | RUN | 0.280620 | 0.625188 | 0.917174 | 0.001711 | 0.002038 | 0.001993 |
| list_nest.test | RUN | 0.567615 | 1.730091 | 2.413265 | 0.001793 | 0.001982 | 0.001742 |
| list_tie.test | RUN | 0.308000 | 0.694084 | 1.040418 | 0.001862 | 0.002158 | 0.002096 |
| list_value_at.test | RUN | 0.291714 | 0.691505 | 0.950769 | 0.001783 | 0.002128 | 0.002042 |
| deque_comparison.test | RUN | 0.307313 | 0.749595 | 1.119768 | 0.001738 | 0.002134 | 0.001304 |
| deque_construction.test | RUN | 0.312549 | 0.724075 | 1.039399 | 0.001996 | 0.001926 | 0.002045 |
| deque_copy.test | RUN | 0.444805 | 1.183636 | 1.701418 | 0.001856 | 0.001894 | 0.002034 |
| deque_iterator.test | RUN | 0.313955 | 0.787747 | 1.015494 | 0.001823 | 0.002032 | 0.001836 |
| deque_hash.test | RUN | 0.427871 | 1.289091 | 1.519849 | 0.001626 | 0.001840 | 0.002198 |
| deque_is_constructible.test | COMPILE | 0.165116 | 0.342516 | 0.480986 | — | — | — |
| deque_make.test | RUN | 0.308053 | 0.723217 | 1.076932 | 0.001886 | 0.001936 | 0.002042 |
| deque_misc.test | RUN | 0.400599 | 0.934168 | 1.311408 | 0.001533 | 0.001793 | 0.001682 |
| deque_move.test | RUN | 0.307091 | 0.767326 | 1.043098 | 0.001598 | 0.001820 | 0.002032 |
| deque_mutate.test | RUN | 0.280575 | 0.626592 | 0.898356 | 0.002020 | 0.002106 | 0.001970 |
| deque_nest.test | RUN | 0.862711 | 2.746727 | 3.782491 | 0.002030 | 0.001988 | 0.002034 |
| deque_tie.test | RUN | 0.286473 | 0.659965 | 1.020351 | 0.001867 | 0.001554 | 0.001824 |
| deque_value_at.test | RUN | 0.281499 | 0.660288 | 0.930639 | 0.001546 | 0.001994 | 0.002000 |
| front_extended_deque.test | RUN | 0.430742 | 0.955135 | 1.421889 | 0.002062 | 0.002169 | 0.002064 |
| back_extended_deque.test | RUN | 0.409173 | 0.950137 | 1.408254 | 0.002032 | 0.001736 | 0.002037 |
| make_list.test | RUN | 0.314642 | 0.830525 | 1.144845 | 0.001946 | 0.002090 | 0.001964 |
| make_vector.test | RUN | 0.318832 | 0.776871 | 1.066001 | 0.001768 | 0.001730 | 0.002028 |
| map.test | RUN | 0.410506 | 1.180488 | 1.588244 | 0.002154 | 0.002091 | 0.001866 |
| map_comparison.test | RUN | 0.312171 | 0.766069 | 1.038666 | 0.001624 | 0.002149 | 0.002080 |
| map_construction.test | RUN | 0.314868 | 0.717564 | 1.075887 | 0.001730 | 0.001814 | 0.001882 |
| map_copy.test | RUN | 0.367286 | 0.909342 | 1.253081 | 0.001806 | 0.002136 | 0.001940 |
| map_misc.test | RUN | 0.401497 | 0.918456 | 1.317780 | 0.001826 | 0.001987 | 0.001789 |
| map_move.test | RUN | 0.307587 | 0.779478 | 1.046464 | 0.001948 | 0.001830 | 0.001898 |
| map_mutate.test | RUN | 0.283078 | 0.635796 | 0.948345 | 0.001863 | 0.002004 | 0.001700 |
| map_tie.test | RUN | 0.291381 | 0.650135 | 0.948462 | 0.001822 | 0.001527 | 0.002024 |
| nil.test | RUN | 0.207386 | 0.438187 | 0.630277 | 0.002160 | 0.002052 | 0.001958 |
| nview.test | RUN | 0.393301 | 0.922824 | 1.392604 | 0.002002 | 0.002226 | 0.002128 |
| reverse_view.test | RUN | 0.519615 | 1.464233 | 1.960701 | 0.001816 | 0.001921 | 0.002196 |
| segmented_iterator_range.test | RUN | 0.597317 | 1.791945 | 2.426452 | 0.002104 | 0.001863 | 0.001740 |
| set.test | RUN | 0.380880 | 1.038048 | 1.364402 | 0.001794 | 0.002096 | 0.002122 |
| single_view.test | RUN | 0.359813 | 0.924667 | 1.294492 | 0.001991 | 0.001860 | 0.001670 |
| std_pair.test | RUN | 0.435173 | 1.172703 | 1.586525 | 0.001963 | 0.002107 | 0.001808 |
| boost_array.test | RUN | 0.377129 | 0.853512 | 1.240832 | 0.001616 | 0.002102 | 0.001823 |
| array.test | RUN | 0.372187 | 0.816672 | 1.205811 | 0.001570 | 0.001812 | 0.001908 |
| std_array.test | RUN | 0.372952 | 0.827304 | 1.186342 | 0.001934 | 0.001902 | 0.001512 |
| tuple_comparison.test | RUN | 0.330151 | 0.791897 | 1.160612 | 0.001809 | 0.002078 | 0.001642 |
| tuple_construction.test | RUN | 0.338542 | 0.809494 | 1.156399 | 0.001764 | 0.002192 | 0.001750 |
| tuple_conversion.test | RUN | 0.737930 | 2.326554 | 3.520156 | 0.001709 | 0.002096 | 0.001661 |
| tuple_copy.test | RUN | 0.502933 | 1.369249 | 1.935998 | 0.001917 | 0.001874 | 0.001923 |
| tuple_element.test | RUN | 0.313135 | 0.724762 | 1.047033 | 0.001738 | 0.001608 | 0.001966 |
| tuple_make.test | RUN | 0.335146 | 0.851484 | 1.142655 | 0.001855 | 0.002089 | 0.001679 |
| tuple_misc.test | RUN | 0.419476 | 0.989778 | 1.406912 | 0.002061 | 0.001931 | 0.001695 |
| tuple_mutate.test | RUN | 0.298923 | 0.642177 | 1.055975 | 0.001897 | 0.001976 | 0.001837 |
| tuple_nest.test | RUN | 1.217873 | 4.602511 | 6.609890 | 0.001605 | 0.002086 | 0.002069 |
| tuple_hash.test | RUN | 0.455123 | 1.405407 | 1.597138 | 0.001991 | 0.002076 | 0.002100 |
| tuple_tie.test | RUN | 0.339667 | 0.709209 | 1.104377 | 0.001989 | 0.002173 | 0.001881 |
| tuple_traits__maybe_variadic.test | RUN | 0.343736 | 0.902666 | 1.171840 | 0.002026 | 0.002117 | 0.001508 |
| tuple_traits__no_variadic.test | RUN | 0.387945 | 0.943207 | 1.235789 | 0.001954 | 0.002142 | 0.001892 |
| transform_view.test | RUN | 0.496994 | 1.485207 | 1.996857 | 0.002050 | 0.001894 | 0.002016 |
| identity_view.test | RUN | 0.475934 | 1.411917 | 1.833007 | 0.001790 | 0.001870 | 0.001918 |
| vector_comparison.test | RUN | 0.305947 | 0.776638 | 1.052659 | 0.001863 | 0.001549 | 0.002030 |
| vector_construction.test | RUN | 0.303395 | 0.713564 | 1.022918 | 0.001583 | 0.001934 | 0.002077 |
| vector_conversion.test | RUN | 0.878935 | 3.042868 | 4.506393 | 0.001996 | 0.001922 | 0.002102 |
| vector_copy.test | RUN | 0.461332 | 1.349512 | 1.843686 | 0.001912 | 0.002167 | 0.002067 |
| vector_iterator.test | RUN | 0.297470 | 0.776357 | 1.079693 | 0.001634 | 0.001879 | 0.002022 |
| vector_make.test | RUN | 0.318712 | 0.767731 | 1.063397 | 0.001928 | 0.001948 | 0.002059 |
| vector_misc.test | RUN | 0.398234 | 0.939322 | 1.361183 | 0.001906 | 0.001896 | 0.002034 |
| vector_move.test | RUN | 0.319190 | 0.788195 | 1.073680 | 0.001795 | 0.001806 | 0.002109 |
| vector_mutate.test | RUN | 0.282338 | 0.672066 | 0.963062 | 0.001740 | 0.001811 | 0.001989 |
| vector_n.test | RUN | 0.339784 | 0.801866 | 1.240678 | 0.002047 | 0.002090 | 0.002120 |
| vector_nest.test | RUN | 1.237557 | 4.801116 | 6.762903 | 0.001994 | 0.001966 | 0.002083 |
| vector_hash.test | RUN | 0.424531 | 1.301618 | 1.463452 | 0.001773 | 0.002108 | 0.001640 |
| vector_tie.test | RUN | 0.300261 | 0.697845 | 1.038494 | 0.001950 | 0.001748 | 0.002058 |
| vector_traits__maybe_variadic.test | RUN | 0.323945 | 0.851707 | 1.114580 | 0.002014 | 0.002218 | 0.002028 |
| vector_traits__no_variadic.test | RUN | 0.356338 | 0.891760 | 1.132620 | 0.002074 | 0.001811 | 0.001582 |
| vector_value_at.test | RUN | 0.319632 | 0.656903 | 0.985906 | 0.001822 | 0.001978 | 0.001956 |
| zip_view.test | RUN | 0.619607 | 1.555972 | 2.447042 | 0.001924 | 0.001718 | 0.002122 |
| zip_view2.test | RUN | 0.512104 | 1.278103 | 1.846500 | 0.001896 | 0.002060 | 0.001980 |
| zip_view_ignore.test | RUN | 0.456111 | 1.146321 | 1.678943 | 0.001846 | 0.001698 | 0.001970 |
| repetitive_view.test | RUN | 0.780637 | 2.020609 | 3.193807 | 0.002115 | 0.002108 | 0.001951 |
| deduce_sequence.test | RUN | 0.375315 | 0.880493 | 1.258803 | 0.001900 | 0.001695 | 0.002046 |
| adapt_adt_named.test | RUN | 0.445182 | 1.186876 | 1.542620 | 0.001866 | 0.002139 | 0.002000 |
| adapt_adt_named_empty.test | RUN | 0.391602 | 0.964117 | 1.322108 | 0.001924 | 0.002022 | 0.001686 |
| adapt_adt.test | RUN | 0.504214 | 1.546097 | 1.832327 | 0.001925 | 0.002244 | 0.002168 |
| adapt_adt_empty.test | RUN | 0.385370 | 0.955282 | 1.317503 | 0.001974 | 0.001934 | 0.001832 |
| adapt_assoc_adt_named.test | RUN | 0.499001 | 1.240512 | 1.675538 | 0.001782 | 0.002126 | 0.001944 |
| adapt_assoc_adt_named_empty.test | RUN | 0.390423 | 0.951262 | 1.326115 | 0.001975 | 0.002126 | 0.001892 |
| adapt_assoc_adt.test | RUN | 0.492556 | 1.329005 | 1.773859 | 0.001829 | 0.002020 | 0.002094 |
| adapt_assoc_adt_empty.test | RUN | 0.384788 | 0.969393 | 1.320260 | 0.002017 | 0.002120 | 0.002067 |
| adapt_assoc_struct_named.test | RUN | 0.484988 | 1.235008 | 1.665122 | 0.001952 | 0.002122 | 0.002130 |
| adapt_assoc_struct_named_empty.test | RUN | 0.384006 | 0.958270 | 1.305124 | 0.001684 | 0.002148 | 0.001862 |
| adapt_assoc_struct.test | RUN | 0.437706 | 1.180659 | 1.533957 | 0.001942 | 0.001940 | 0.001960 |
| adapt_assoc_struct_empty.test | RUN | 0.370966 | 0.989586 | 1.311098 | 0.002082 | 0.001860 | 0.001608 |
| adapt_assoc_tpl_adt.test | RUN | 0.511559 | 1.337877 | 1.806518 | 0.001992 | 0.001903 | 0.002168 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.391699 | 0.979232 | 1.315816 | 0.002026 | 0.001866 | 0.002127 |
| adapt_assoc_tpl_struct.test | RUN | 0.415420 | 1.123309 | 1.532052 | 0.001732 | 0.001840 | 0.002198 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.380535 | 0.988929 | 1.330353 | 0.002032 | 0.001984 | 0.001753 |
| adapt_struct_named.test | RUN | 0.433338 | 1.161741 | 1.530376 | 0.002030 | 0.001584 | 0.001850 |
| adapt_struct_named_empty.test | RUN | 0.387282 | 0.983596 | 1.296189 | 0.002028 | 0.001812 | 0.001671 |
| adapt_struct.test | RUN | 0.459903 | 1.322804 | 1.715076 | 0.001924 | 0.002060 | 0.002126 |
| adapt_struct_empty.test | RUN | 0.379975 | 0.960068 | 1.314053 | 0.002002 | 0.002090 | 0.001994 |
| adapt_tpl_adt.test | RUN | 0.490027 | 1.505121 | 1.789719 | 0.001806 | 0.001892 | 0.001975 |
| adapt_tpl_adt_empty.test | RUN | 0.383897 | 0.954867 | 1.321351 | 0.001926 | 0.002245 | 0.002005 |
| adapt_tpl_struct.test | RUN | 0.403300 | 1.056236 | 1.412637 | 0.001966 | 0.002254 | 0.001701 |
| adapt_tpl_struct_empty.test | RUN | 0.380132 | 1.007828 | 1.316913 | 0.001933 | 0.001950 | 0.001704 |
| adt_attribute_proxy.test | RUN | 0.434865 | 0.947648 | 1.396768 | 0.002086 | 0.002094 | 0.002051 |
| define_struct.test | RUN | 0.522987 | 1.313898 | 1.830754 | 0.002100 | 0.001962 | 0.002056 |
| define_struct_empty.test | RUN | 0.453737 | 1.090945 | 1.475944 | 0.002040 | 0.002106 | 0.002041 |
| define_struct_move.test | RUN | 0.297584 | 0.632450 | 0.926549 | 0.001962 | 0.002138 | 0.001861 |
| define_struct_inline.test | RUN | 0.545088 | 1.571823 | 2.027285 | 0.001907 | 0.002026 | 0.002164 |
| define_struct_inline_empty.test | RUN | 0.450949 | 1.068496 | 1.497286 | 0.001855 | 0.002073 | 0.002081 |
| define_struct_inline_move.test | RUN | 0.299869 | 0.667687 | 0.920170 | 0.001856 | 0.002098 | 0.002033 |
| define_assoc_struct.test | RUN | 0.505149 | 1.280006 | 1.687096 | 0.002019 | 0.002141 | 0.001858 |
| define_assoc_struct_empty.test | RUN | 0.436857 | 1.070008 | 1.505615 | 0.001976 | 0.002060 | 0.002081 |
| define_assoc_struct_move.test | RUN | 0.281788 | 0.620310 | 0.898888 | 0.001898 | 0.001916 | 0.002044 |
| define_tpl_struct.test | RUN | 0.506783 | 1.285162 | 1.734847 | 0.001958 | 0.001859 | 0.001669 |
| define_tpl_struct_empty.test | RUN | 0.469490 | 1.086093 | 1.517563 | 0.001862 | 0.002036 | 0.001874 |
| define_tpl_struct_move.test | RUN | 0.295148 | 0.649464 | 0.937663 | 0.001912 | 0.001994 | 0.001994 |
| define_tpl_struct_inline.test | RUN | 0.519854 | 1.468494 | 1.917631 | 0.002040 | 0.001934 | 0.001854 |
| define_tpl_struct_inline_empty.test | RUN | 0.455803 | 1.073822 | 1.507922 | 0.001843 | 0.001975 | 0.002114 |
| define_tpl_struct_inline_move.test | RUN | 0.299986 | 0.669028 | 0.960644 | 0.001785 | 0.001830 | 0.002003 |
| define_assoc_tpl_struct.test | RUN | 0.502144 | 1.297064 | 1.791520 | 0.002096 | 0.002174 | 0.001999 |
| define_assoc_tpl_struct_empty.test | RUN | 0.451113 | 1.085244 | 1.520178 | 0.001771 | 0.001899 | 0.001937 |
| define_assoc_tpl_struct_move.test | RUN | 0.302507 | 0.633941 | 0.939554 | 0.001855 | 0.001869 | 0.001996 |
| std_tuple.test | RUN | 0.309119 | 0.698947 | 1.024871 | 0.001616 | 0.002112 | 0.001519 |
| std_tuple_iterator.test | RUN | 0.307018 | 0.737666 | 1.040160 | 0.001869 | 0.002014 | 0.002068 |
| ref_vector.test | RUN | 0.339777 | 0.764477 | 1.115439 | 0.001992 | 0.002046 | 0.001888 |
| flatten_view.test | RUN | 0.367254 | 0.924351 | 1.272346 | 0.002326 | 0.001911 | 0.002015 |
| github-159.test | COMPILE | 0.162569 | 0.352394 | 0.493526 | — | — | — |
| github-176.test | RUN | 0.342103 | 0.819351 | 1.130176 | 0.002020 | 0.002172 | 0.001920 |
| size.test | COMPILE | 0.295103 | 0.593139 | 0.909261 | — | — | — |
| fused.test | RUN | 0.415285 | 0.883740 | 1.300288 | 0.001984 | 0.002132 | 0.002082 |
| fused_function_object.test | RUN | 0.304900 | 0.661611 | 0.987586 | 0.001646 | 0.001893 | 0.001849 |
| fused_procedure.test | RUN | 0.393800 | 0.863235 | 1.253081 | 0.001878 | 0.001939 | 0.001718 |
| unfused.test | RUN | 0.306997 | 0.691651 | 1.041430 | 0.001917 | 0.002080 | 0.001703 |
| unfused_typed.test | RUN | 0.320731 | 0.742472 | 1.031221 | 0.001840 | 0.001832 | 0.002172 |
| make_fused.test | RUN | 0.406021 | 0.880672 | 1.309975 | 0.001780 | 0.002132 | 0.002070 |
| make_fused_function_object.test | RUN | 0.302913 | 0.707451 | 0.983567 | 0.001669 | 0.001703 | 0.002119 |
| make_fused_procedure.test | RUN | 0.395983 | 0.868215 | 1.245465 | 0.002043 | 0.002080 | 0.002083 |
| make_unfused.test | RUN | 0.311180 | 0.704502 | 1.018591 | 0.001889 | 0.001960 | 0.002162 |
| invoke.test | RUN | 0.786752 | 2.424019 | 3.395877 | 0.001389 | 0.002100 | 0.002009 |
| invoke_function_object.test | RUN | 0.369552 | 0.893129 | 1.282470 | 0.002160 | 0.002194 | 0.002264 |
| invoke_procedure.test | RUN | 0.618370 | 1.800601 | 2.465164 | 0.001842 | 0.002124 | 0.002130 |
| swap.test | RUN | 0.481707 | 1.150798 | 1.657762 | 0.001668 | 0.002018 | 0.002042 |
| is_sequence.test | COMPILE | 0.081153 | 0.167242 | 0.204849 | — | — | — |
| is_view.test | COMPILE | 0.079043 | 0.166432 | 0.204669 | — | — | — |
| pair_deque.test | COMPILE | 0.167238 | 0.380360 | 0.513624 | — | — | — |
| pair_list.test | COMPILE | 0.167350 | 0.355988 | 0.516264 | — | — | — |
| pair_map.test | COMPILE | 0.172822 | 0.360344 | 0.471714 | — | — | — |
| pair_set.test | COMPILE | 0.172487 | 0.368971 | 0.508862 | — | — | — |
| pair_vector.test | COMPILE | 0.171107 | 0.364265 | 0.486484 | — | — | — |
| pair_nest.test | COMPILE | 0.071804 | 0.142650 | 0.189511 | — | — | — |
| index_sequence.test | COMPILE | 0.059022 | 0.101515 | 0.135984 | — | — | — |
| and.test | COMPILE | 0.047014 | 0.080034 | 0.096993 | — | — | — |
| tag_of.test | COMPILE | 0.079715 | 0.159402 | 0.182007 | — | — | — |
| unused.test | COMPILE | 0.042308 | 0.103024 | 0.112205 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.080463 | 0.154894 | 0.132608 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.047078 | 0.103155 | 0.153518 | — | — | — |
| quick.test | RUN | 0.204362 | 0.464648 | 0.579905 | 0.000565 | 0.001585 | 0.001383 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.002× | 1.010×, 0.994× | 0.995× |
| clang | 1.006× | 1.011×, 1.001× | 0.989× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46045514956).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.001231s | 0.001297s | 0.001282s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.001271s | 0.001315s | 0.001330s | byte equality observed |
| adapt_adt_named.test | 10 | 0.001273s | 0.001313s | 0.001318s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.001303s | 0.001246s | 0.001305s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.001278s | 0.001271s | 0.001265s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.001298s | 0.001317s | 0.001260s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.001249s | 0.001292s | 0.001282s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.001288s | 0.001269s | 0.001260s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.001263s | 0.001219s | 0.001301s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.001322s | 0.001239s | 0.001305s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.001239s | 0.001271s | 0.001288s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.001292s | 0.001344s | 0.001315s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.001325s | 0.001313s | 0.001357s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.001286s | 0.001296s | 0.001273s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.001292s | 0.001296s | 0.001318s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.001259s | 0.001265s | 0.001290s | byte equality observed |
| adapt_struct.test | 10 | 0.001288s | 0.001285s | 0.001338s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.001321s | 0.001309s | 0.001326s | byte equality observed |
| adapt_struct_named.test | 10 | 0.001268s | 0.001267s | 0.001312s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.001240s | 0.001246s | 0.001274s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.001285s | 0.001272s | 0.001253s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.001262s | 0.001293s | 0.001271s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.001286s | 0.001309s | 0.001273s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.001221s | 0.001266s | 0.001253s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.001254s | 0.001249s | 0.001260s | byte equality observed |
| all.test | 10 | 0.001228s | 0.001272s | 0.001257s | byte equality observed |
| any.test | 10 | 0.001260s | 0.001227s | 0.001276s | byte equality observed |
| array.test | 10 | 0.001232s | 0.001215s | 0.001259s | byte equality observed |
| as_deque.test | 10 | 0.001219s | 0.001255s | 0.001240s | byte equality observed |
| as_list.test | 10 | 0.001272s | 0.001290s | 0.001257s | byte equality observed |
| as_map.test | 10 | 0.001255s | 0.001266s | 0.001282s | byte equality observed |
| as_map_assoc.test | 10 | 0.001279s | 0.001230s | 0.001246s | byte equality observed |
| as_set.test | 10 | 0.001280s | 0.001261s | 0.001316s | byte equality observed |
| as_vector.test | 10 | 0.001319s | 0.001282s | 0.001306s | byte equality observed |
| back_extended_deque.test | 10 | 0.001243s | 0.001223s | 0.001225s | byte equality observed |
| boost_array.test | 10 | 0.001228s | 0.001242s | 0.001246s | byte equality observed |
| boost_tuple.test | 10 | 0.001243s | 0.001266s | 0.001247s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.001266s | 0.001223s | 0.001322s | byte equality observed |
| clear.test | 10 | 0.001262s | 0.001213s | 0.001250s | byte equality observed |
| cons.test | 10 | 0.001265s | 0.001252s | 0.001281s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.001244s | 0.001259s | 0.001259s | byte equality observed |
| convert_deque.test | 10 | 0.001249s | 0.001248s | 0.001239s | byte equality observed |
| convert_list.test | 10 | 0.001240s | 0.001181s | 0.001230s | byte equality observed |
| convert_std_pair.test | 10 | 0.001237s | 0.001248s | 0.001284s | byte equality observed |
| convert_std_tuple.test | 10 | 0.001255s | 0.001265s | 0.001241s | byte equality observed |
| convert_vector.test | 10 | 0.001232s | 0.001269s | 0.001264s | byte equality observed |
| copy.test | 10 | 0.001232s | 0.001223s | 0.001300s | byte equality observed |
| count.test | 10 | 0.001234s | 0.001216s | 0.001223s | byte equality observed |
| count_if.test | 10 | 0.001268s | 0.001204s | 0.001230s | byte equality observed |
| deduce_sequence.test | 9 | 0.001241s | 0.001204s | 0.001331s | byte equality observed |
| define_assoc_struct.test | 10 | 0.001272s | 0.001261s | 0.001277s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.001305s | 0.001257s | 0.001235s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.001223s | 0.001197s | 0.001220s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.001265s | 0.001239s | 0.001257s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.001240s | 0.001280s | 0.001300s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.001286s | 0.001221s | 0.001262s | byte equality observed |
| define_struct.test | 10 | 0.001249s | 0.001282s | 0.001257s | byte equality observed |
| define_struct_empty.test | 10 | 0.001241s | 0.001345s | 0.001232s | byte equality observed |
| define_struct_inline.test | 10 | 0.001266s | 0.001273s | 0.001289s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.001282s | 0.001275s | 0.001264s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.001227s | 0.001226s | 0.001297s | byte equality observed |
| define_struct_move.test | 10 | 0.001223s | 0.001221s | 0.001203s | byte equality observed |
| define_tpl_struct.test | 10 | 0.001279s | 0.001244s | 0.001220s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.001256s | 0.001282s | 0.001182s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.001273s | 0.001278s | 0.001246s | byte equality observed |
| define_tpl_struct_inline_empty.test | 9 | 0.001285s | 0.001226s | 0.001207s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.001267s | 0.001229s | 0.001218s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.001216s | 0.001308s | 0.001227s | byte equality observed |
| deque_comparison.test | 10 | 0.001232s | 0.001279s | 0.001264s | byte equality observed |
| deque_construction.test | 10 | 0.001236s | 0.001220s | 0.001223s | byte equality observed |
| deque_copy.test | 10 | 0.001297s | 0.001225s | 0.001252s | byte equality observed |
| deque_hash.test | 10 | 0.001237s | 0.001334s | 0.001227s | byte equality observed |
| deque_iterator.test | 10 | 0.001240s | 0.001227s | 0.001232s | byte equality observed |
| deque_make.test | 10 | 0.001263s | 0.001272s | 0.001288s | byte equality observed |
| deque_misc.test | 10 | 0.001241s | 0.001291s | 0.001224s | byte equality observed |
| deque_move.test | 10 | 0.001245s | 0.001265s | 0.001256s | byte equality observed |
| deque_mutate.test | 10 | 0.001216s | 0.001227s | 0.001223s | byte equality observed |
| deque_nest.test | 10 | 0.001243s | 0.001226s | 0.001251s | byte equality observed |
| deque_tie.test | 10 | 0.001274s | 0.001205s | 0.001250s | byte equality observed |
| deque_value_at.test | 10 | 0.001231s | 0.001206s | 0.001262s | byte equality observed |
| erase.test | 10 | 0.001240s | 0.001216s | 0.001281s | byte equality observed |
| erase_key.test | 10 | 0.001285s | 0.001235s | 0.001297s | byte equality observed |
| filter.test | 10 | 0.001247s | 0.001211s | 0.001320s | byte equality observed |
| filter_if.test | 10 | 0.001280s | 0.001239s | 0.001285s | byte equality observed |
| filter_view.test | 10 | 0.001263s | 0.001243s | 0.001308s | byte equality observed |
| find.test | 10 | 0.001258s | 0.001267s | 0.001345s | byte equality observed |
| find_if.test | 10 | 0.001275s | 0.001237s | 0.001280s | byte equality observed |
| flatten.test | 10 | 0.001239s | 0.001259s | 0.001294s | byte equality observed |
| flatten_view.test | 10 | 0.001276s | 0.001235s | 0.001264s | byte equality observed |
| fold.test | 10 | 0.001317s | 0.001301s | 0.001281s | byte equality observed |
| for_each.test | 10 | 0.001283s | 0.001306s | 0.001289s | byte equality observed |
| front_extended_deque.test | 10 | 0.001213s | 0.001209s | 0.001226s | byte equality observed |
| fused.test | 10 | 0.001205s | 0.001177s | 0.001205s | byte equality observed |
| fused_function_object.test | 10 | 0.001233s | 0.001176s | 0.001216s | byte equality observed |
| fused_procedure.test | 10 | 0.001241s | 0.001288s | 0.001243s | byte equality observed |
| github-176.test | 10 | 0.001219s | 0.001218s | 0.001214s | byte equality observed |
| hash.test | 10 | 0.001286s | 0.001223s | 0.001229s | byte equality observed |
| identity_view.test | 10 | 0.001243s | 0.001285s | 0.001293s | byte equality observed |
| insert.test | 10 | 0.001289s | 0.001252s | 0.001263s | byte equality observed |
| insert_range.test | 10 | 0.001338s | 0.001256s | 0.001278s | byte equality observed |
| invoke.test | 8 | 0.001224s | 0.001205s | 0.001205s | byte equality observed |
| invoke_function_object.test | 10 | 0.001216s | 0.001237s | 0.001210s | byte equality observed |
| invoke_procedure.test | 10 | 0.001230s | 0.001234s | 0.001201s | byte equality observed |
| io.test | 10 | 0.001400s | 0.001372s | 0.001403s | byte equality observed |
| iter_fold.test | 10 | 0.001283s | 0.001226s | 0.001209s | byte equality observed |
| iterator_range.test | 10 | 0.001303s | 0.001269s | 0.001251s | byte equality observed |
| join.test | 10 | 0.001218s | 0.001278s | 0.001274s | byte equality observed |
| joint_view.test | 10 | 0.001307s | 0.001309s | 0.001331s | byte equality observed |
| list_comparison.test | 10 | 0.001228s | 0.001259s | 0.001240s | byte equality observed |
| list_construction.test | 10 | 0.001257s | 0.001227s | 0.001195s | byte equality observed |
| list_copy.test | 10 | 0.001230s | 0.001242s | 0.001197s | byte equality observed |
| list_hash.test | 10 | 0.001266s | 0.001231s | 0.001264s | byte equality observed |
| list_iterator.test | 10 | 0.001241s | 0.001244s | 0.001240s | byte equality observed |
| list_make.test | 10 | 0.001246s | 0.001234s | 0.001256s | byte equality observed |
| list_misc.test | 10 | 0.001281s | 0.001291s | 0.001256s | byte equality observed |
| list_mutate.test | 10 | 0.001219s | 0.001241s | 0.001213s | byte equality observed |
| list_nest.test | 9 | 0.001219s | 0.001262s | 0.001297s | byte equality observed |
| list_tie.test | 10 | 0.001267s | 0.001290s | 0.001268s | byte equality observed |
| list_value_at.test | 10 | 0.001229s | 0.001225s | 0.001251s | byte equality observed |
| make_fused.test | 10 | 0.001250s | 0.001227s | 0.001277s | byte equality observed |
| make_fused_function_object.test | 10 | 0.001222s | 0.001254s | 0.001267s | byte equality observed |
| make_fused_procedure.test | 10 | 0.001251s | 0.001216s | 0.001251s | byte equality observed |
| make_list.test | 10 | 0.001264s | 0.001229s | 0.001248s | byte equality observed |
| make_unfused.test | 10 | 0.001235s | 0.001244s | 0.001232s | byte equality observed |
| make_vector.test | 10 | 0.001215s | 0.001279s | 0.001264s | byte equality observed |
| map.test | 10 | 0.001254s | 0.001251s | 0.001276s | byte equality observed |
| map_comparison.test | 10 | 0.001296s | 0.001271s | 0.001251s | byte equality observed |
| map_construction.test | 10 | 0.001265s | 0.001219s | 0.001249s | byte equality observed |
| map_copy.test | 10 | 0.001243s | 0.001278s | 0.001255s | byte equality observed |
| map_misc.test | 10 | 0.001226s | 0.001234s | 0.001300s | byte equality observed |
| map_move.test | 10 | 0.001244s | 0.001242s | 0.001262s | byte equality observed |
| map_mutate.test | 10 | 0.001211s | 0.001284s | 0.001257s | byte equality observed |
| map_tie.test | 10 | 0.001220s | 0.001249s | 0.001244s | byte equality observed |
| move.test | 10 | 0.001224s | 0.001285s | 0.001246s | byte equality observed |
| nil.test | 9 | 0.001218s | 0.001244s | 0.001194s | byte equality observed |
| none.test | 10 | 0.001230s | 0.001246s | 0.001283s | byte equality observed |
| nview.test | 10 | 0.001231s | 0.001223s | 0.001205s | byte equality observed |
| pop_back.test | 10 | 0.001296s | 0.001303s | 0.001281s | byte equality observed |
| pop_front.test | 10 | 0.001313s | 0.001332s | 0.001269s | byte equality observed |
| push_back.test | 10 | 0.001287s | 0.001297s | 0.001301s | byte equality observed |
| push_front.test | 10 | 0.001312s | 0.001292s | 0.001268s | byte equality observed |
| quick.test | 10 | 0.000569s | 0.001195s | 0.001218s | byte equality observed |
| ref_vector.test | 10 | 0.001247s | 0.001232s | 0.001221s | byte equality observed |
| remove.test | 10 | 0.001261s | 0.001313s | 0.001333s | byte equality observed |
| remove_if.test | 10 | 0.001258s | 0.001251s | 0.001270s | byte equality observed |
| repetitive_view.test | 10 | 0.001203s | 0.001285s | 0.001247s | byte equality observed |
| replace.test | 10 | 0.001270s | 0.001257s | 0.001275s | byte equality observed |
| replace_if.test | 8 | 0.001264s | 0.001304s | 0.001266s | byte equality observed |
| reverse.test | 10 | 0.001295s | 0.001311s | 0.001349s | byte equality observed |
| reverse_fold.test | 10 | 0.001287s | 0.001267s | 0.001290s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.001244s | 0.001273s | 0.001276s | byte equality observed |
| reverse_view.test | 10 | 0.001285s | 0.001247s | 0.001286s | byte equality observed |
| segmented_find.test | 10 | 0.001268s | 0.001234s | 0.001251s | byte equality observed |
| segmented_find_if.test | 10 | 0.001242s | 0.001274s | 0.001218s | byte equality observed |
| segmented_fold.test | 10 | 0.001292s | 0.001318s | 0.001295s | byte equality observed |
| segmented_for_each.test | 10 | 0.001311s | 0.001268s | 0.001275s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.001349s | 0.001360s | 0.001325s | byte equality observed |
| set.test | 9 | 0.001250s | 0.001309s | 0.001269s | byte equality observed |
| single_view.test | 10 | 0.001281s | 0.001307s | 0.001277s | byte equality observed |
| std_array.test | 10 | 0.001260s | 0.001223s | 0.001198s | byte equality observed |
| std_pair.test | 10 | 0.001281s | 0.001252s | 0.001268s | byte equality observed |
| std_tuple.test | 10 | 0.001207s | 0.001213s | 0.001215s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.001214s | 0.001237s | 0.001269s | byte equality observed |
| swap.test | 10 | 0.001258s | 0.001237s | 0.001249s | byte equality observed |
| transform.test | 10 | 0.001269s | 0.001309s | 0.001274s | byte equality observed |
| transform_view.test | 10 | 0.001308s | 0.001312s | 0.001320s | byte equality observed |
| tuple_comparison.test | 10 | 0.001262s | 0.001254s | 0.001198s | byte equality observed |
| tuple_construction.test | 10 | 0.001240s | 0.001240s | 0.001174s | byte equality observed |
| tuple_conversion.test | 10 | 0.001238s | 0.001253s | 0.001242s | byte equality observed |
| tuple_copy.test | 10 | 0.001256s | 0.001236s | 0.001258s | byte equality observed |
| tuple_element.test | 10 | 0.001264s | 0.001277s | 0.001245s | byte equality observed |
| tuple_hash.test | 10 | 0.001259s | 0.001238s | 0.001274s | byte equality observed |
| tuple_make.test | 10 | 0.001256s | 0.001241s | 0.001226s | byte equality observed |
| tuple_misc.test | 10 | 0.001249s | 0.001253s | 0.001247s | byte equality observed |
| tuple_mutate.test | 10 | 0.001239s | 0.001219s | 0.001286s | byte equality observed |
| tuple_nest.test | 10 | 0.001223s | 0.001293s | 0.001245s | byte equality observed |
| tuple_tie.test | 10 | 0.001261s | 0.001235s | 0.001258s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.001282s | 0.001278s | 0.001315s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.001250s | 0.001253s | 0.001200s | byte equality observed |
| unfused.test | 10 | 0.001242s | 0.001285s | 0.001239s | byte equality observed |
| unfused_typed.test | 10 | 0.001250s | 0.001233s | 0.001225s | byte equality observed |
| vector_comparison.test | 10 | 0.001291s | 0.001282s | 0.001207s | byte equality observed |
| vector_construction.test | 10 | 0.001245s | 0.001229s | 0.001222s | byte equality observed |
| vector_conversion.test | 8 | 0.001283s | 0.001186s | 0.001228s | byte equality observed |
| vector_copy.test | 10 | 0.001247s | 0.001294s | 0.001262s | byte equality observed |
| vector_hash.test | 10 | 0.001222s | 0.001254s | 0.001231s | byte equality observed |
| vector_iterator.test | 9 | 0.001188s | 0.001244s | 0.001315s | byte equality observed |
| vector_make.test | 10 | 0.001196s | 0.001247s | 0.001262s | byte equality observed |
| vector_misc.test | 10 | 0.001278s | 0.001278s | 0.001267s | byte equality observed |
| vector_move.test | 10 | 0.001286s | 0.001252s | 0.001235s | byte equality observed |
| vector_mutate.test | 10 | 0.001287s | 0.001236s | 0.001261s | byte equality observed |
| vector_n.test | 10 | 0.001262s | 0.001273s | 0.001254s | byte equality observed |
| vector_nest.test | 10 | 0.001251s | 0.001218s | 0.001243s | byte equality observed |
| vector_tie.test | 10 | 0.001211s | 0.001255s | 0.001273s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.001290s | 0.001318s | 0.001242s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.001215s | 0.001244s | 0.001260s | byte equality observed |
| vector_value_at.test | 10 | 0.001225s | 0.001230s | 0.001241s | byte equality observed |
| zip.test | 10 | 0.001236s | 0.001301s | 0.001225s | byte equality observed |
| zip2.test | 10 | 0.001245s | 0.001296s | 0.001282s | byte equality observed |
| zip_ignore.test | 10 | 0.001251s | 0.001212s | 0.001286s | byte equality observed |
| zip_view.test | 10 | 0.001227s | 0.001260s | 0.001297s | byte equality observed |
| zip_view2.test | 10 | 0.001260s | 0.001289s | 0.001243s | byte equality observed |
| zip_view_ignore.test | 10 | 0.001192s | 0.001217s | 0.001208s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46045514956).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
