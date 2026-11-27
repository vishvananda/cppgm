# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.051117 | 0.095448 | 0.191089 | — | — | — |
| complex_h.test | COMPILE | 0.213155 | 0.424993 | 0.689841 | — | — | — |
| mp_size.test | RUN | 0.232829 | 1.314269 | 0.959776 | 0.001804 | 0.002012 | 0.002032 |
| mp_size_2.test | RUN | 0.021496 | 0.045917 | 0.075797 | 0.000806 | 0.000921 | 0.001905 |
| mp_empty.test | RUN | 0.232718 | 0.833184 | 0.894137 | 0.002000 | 0.002096 | 0.002088 |
| mp_empty_2.test | RUN | 0.021360 | 0.050772 | 0.077794 | 0.000661 | 0.000752 | 0.002032 |
| mp_assign.test | RUN | 0.261878 | 1.668874 | 1.038000 | 0.001738 | 0.002170 | 0.001863 |
| mp_assign_2.test | RUN | 0.023300 | 0.045713 | 0.078772 | 0.000790 | 0.000901 | 0.002111 |
| mp_clear.test | RUN | 0.225449 | 0.749393 | 0.868513 | 0.001954 | 0.001920 | 0.002042 |
| mp_clear_2.test | RUN | 0.023311 | 0.051294 | 0.079616 | 0.000847 | 0.000731 | 0.001892 |
| mp_front.test | RUN | 0.236365 | 1.165689 | 1.009081 | 0.001717 | 0.002155 | 0.001823 |
| mp_front_2.test | RUN | 0.020660 | 0.049211 | 0.078313 | 0.000844 | 0.000740 | 0.001959 |
| mp_pop_front.test | RUN | 0.244218 | 1.199177 | 0.982497 | 0.001750 | 0.001728 | 0.001962 |
| mp_pop_front_2.test | RUN | 0.019649 | 0.050580 | 0.067705 | 0.000816 | 0.000956 | 0.001895 |
| mp_second.test | RUN | 0.241040 | 0.775485 | 0.925127 | 0.001748 | 0.001824 | 0.002178 |
| mp_second_2.test | RUN | 0.020516 | 0.050924 | 0.081179 | 0.000699 | 0.000921 | 0.001883 |
| mp_third.test | RUN | 0.235799 | 0.729762 | 0.876892 | 0.001958 | 0.002055 | 0.001802 |
| mp_third_2.test | RUN | 0.020710 | 0.050074 | 0.077471 | 0.000688 | 0.000674 | 0.001824 |
| mp_push_front.test | RUN | 0.300979 | 2.560247 | 1.536031 | 0.001723 | 0.001880 | 0.002016 |
| mp_push_front_2.test | RUN | 0.021835 | 0.046858 | 0.077827 | 0.000826 | 0.000670 | 0.001980 |
| mp_push_back.test | RUN | 0.288509 | 2.539997 | 1.552517 | 0.001868 | 0.001784 | 0.001820 |
| mp_push_back_2.test | RUN | 0.021567 | 0.050610 | 0.071457 | 0.000708 | 0.000917 | 0.001563 |
| mp_rename.test | RUN | 0.294123 | 2.330596 | 1.340790 | 0.001818 | 0.002120 | 0.002015 |
| mp_rename_2.test | RUN | 0.023029 | 0.050596 | 0.080564 | 0.000684 | 0.000932 | 0.001947 |
| mp_append.test | RUN | 0.295060 | 2.651129 | 1.424653 | 0.001636 | 0.002162 | 0.002100 |
| mp_append_2.test | RUN | 0.621470 | 5.882807 | 1.735113 | 0.001855 | 0.001892 | 0.001728 |
| mp_append_3.test | RUN | 0.022183 | 0.048038 | 0.081648 | 0.000739 | 0.000826 | 0.002012 |
| mp_append_sf.test | RUN | 0.223479 | 0.675376 | 0.879924 | 0.001719 | 0.002000 | 0.001838 |
| mp_replace_front.test | RUN | 0.274360 | 1.915792 | 1.244551 | 0.001682 | 0.002066 | 0.002050 |
| mp_replace_front_2.test | RUN | 0.022075 | 0.051414 | 0.080819 | 0.000681 | 0.000776 | 0.002012 |
| mp_replace_second.test | RUN | 0.261281 | 1.218292 | 1.129973 | 0.001954 | 0.001895 | 0.002054 |
| mp_replace_second_2.test | RUN | 0.021138 | 0.049663 | 0.064914 | 0.000749 | 0.000881 | 0.001751 |
| mp_replace_third.test | RUN | 0.251720 | 1.015986 | 1.001065 | 0.001880 | 0.001828 | 0.002108 |
| mp_replace_third_2.test | RUN | 0.021292 | 0.045801 | 0.082111 | 0.000833 | 0.000806 | 0.002032 |
| mp_apply_q.test | RUN | 0.283923 | 2.326749 | 1.315963 | 0.001703 | 0.002052 | 0.001764 |
| mp_apply_q_sf.test | RUN | 0.224125 | 0.707119 | 0.836193 | 0.002003 | 0.001885 | 0.002020 |
| mp_is_list.test | RUN | 0.227201 | 0.807883 | 0.881763 | 0.001834 | 0.001950 | 0.001828 |
| mp_list_c.test | RUN | 0.234335 | 0.975724 | 0.955794 | 0.002013 | 0.001968 | 0.002014 |
| mp_transform_front.test | RUN | 0.260204 | 1.874779 | 1.184730 | 0.001835 | 0.002092 | 0.001889 |
| mp_transform_front_2.test | RUN | 0.022499 | 0.044926 | 0.072128 | 0.000784 | 0.000825 | 0.002094 |
| mp_transform_second.test | RUN | 0.253471 | 1.637072 | 0.995276 | 0.001811 | 0.001915 | 0.001764 |
| mp_transform_second_2.test | RUN | 0.022775 | 0.047139 | 0.081445 | 0.000709 | 0.000889 | 0.001994 |
| mp_transform_third.test | RUN | 0.238169 | 1.251646 | 0.926034 | 0.001889 | 0.001845 | 0.001953 |
| mp_transform_third_2.test | RUN | 0.022632 | 0.048548 | 0.081565 | 0.000718 | 0.000806 | 0.001938 |
| mp_list_v.test | RUN | 0.023158 | 0.048219 | 0.071040 | 0.000706 | 0.000724 | 0.001620 |
| mp_rename_v.test | RUN | 0.022481 | 0.046923 | 0.084232 | 0.000682 | 0.000688 | 0.001742 |
| mp_is_value_list.test | RUN | 0.221109 | 0.517983 | 0.841492 | 0.002036 | 0.001885 | 0.001782 |
| mp_transform.test | RUN | 0.499531 | 3.955700 | 2.384111 | 0.002083 | 0.001702 | 0.002119 |
| mp_transform_2.test | RUN | 0.213865 | 0.497917 | 0.779148 | 0.001743 | 0.001980 | 0.001684 |
| mp_transform_q.test | RUN | 0.498345 | 3.775254 | 2.255924 | 0.001762 | 0.002180 | 0.001852 |
| mp_transform_q_2.test | RUN | 0.539829 | 1.251694 | 2.917314 | 0.001910 | 0.002140 | 0.001886 |
| mp_transform_sf.test | RUN | 0.233426 | 0.700010 | 0.927872 | 0.001873 | 0.001866 | 0.002022 |
| mp_transform_if.test | RUN | 0.290832 | 1.871440 | 1.316219 | 0.001796 | 0.001944 | 0.001956 |
| mp_transform_if_q.test | RUN | 0.291181 | 1.897165 | 1.325085 | 0.002263 | 0.001884 | 0.001542 |
| mp_filter.test | RUN | 0.263020 | 1.160820 | 1.005681 | 0.001821 | 0.001951 | 0.001822 |
| mp_fill.test | RUN | 0.240409 | 0.877009 | 0.973606 | 0.001724 | 0.001851 | 0.002102 |
| mp_fill_2.test | RUN | 0.039470 | 0.075725 | 0.127236 | 0.000762 | 0.000905 | 0.002006 |
| mp_count.test | RUN | 0.442353 | 2.015171 | 1.451393 | 0.001903 | 0.001872 | 0.002053 |
| mp_count_if.test | RUN | 0.447732 | 2.060144 | 1.707941 | 0.001782 | 0.001927 | 0.002108 |
| mp_count_if_q.test | RUN | 0.255903 | 1.377576 | 0.914831 | 0.001726 | 0.001946 | 0.001706 |
| mp_contains.test | RUN | 0.243387 | 0.843032 | 0.867112 | 0.001716 | 0.001944 | 0.002013 |
| mp_starts_with.test | RUN | 0.241058 | 0.834909 | 0.896741 | 0.002041 | 0.001944 | 0.001984 |
| mp_starts_with_sf.test | RUN | 0.232673 | 0.732371 | 0.834220 | 0.001793 | 0.001928 | 0.002039 |
| mp_repeat.test | RUN | 0.336407 | 3.435491 | 1.651335 | 0.001963 | 0.001930 | 0.001854 |
| mp_repeat_2.test | RUN | 0.037745 | 0.081810 | 0.141079 | 0.000809 | 0.000845 | 0.001943 |
| mp_repeat_3.test | RUN | 0.281718 | 0.461272 | 0.824395 | 0.001878 | 0.002064 | 0.002176 |
| mp_product.test | RUN | 0.266757 | 2.100837 | 1.211423 | 0.001716 | 0.002194 | 0.001801 |
| mp_drop.test | RUN | 0.298629 | 2.560449 | 1.313576 | 0.001818 | 0.002033 | 0.002020 |
| mp_drop_2.test | RUN | 0.039066 | 0.079810 | 0.141589 | 0.000703 | 0.000902 | 0.001746 |
| mp_iota.test | RUN | 0.290758 | 2.197087 | 1.259197 | 0.001942 | 0.002142 | 0.001885 |
| mp_iota_2.test | RUN | 0.310161 | 2.623832 | 1.397663 | 0.001759 | 0.002020 | 0.001795 |
| mp_at.test | RUN | 0.254683 | 1.149445 | 0.961397 | 0.001870 | 0.001910 | 0.001896 |
| mp_at_2.test | RUN | 0.038521 | 0.077616 | 0.144578 | 0.000776 | 0.000842 | 0.001988 |
| mp_at_sf.test | RUN | 0.246984 | 0.723387 | 0.858194 | 0.001977 | 0.002072 | 0.001810 |
| mp_take.test | RUN | 0.390646 | 3.328091 | 1.648026 | 0.001770 | 0.001884 | 0.001982 |
| mp_take_2.test | RUN | 0.040116 | 0.079068 | 0.128793 | 0.000817 | 0.000802 | 0.001947 |
| mp_slice.test | RUN | 0.440442 | 3.348373 | 2.017940 | 0.001973 | 0.002124 | 0.001977 |
| mp_slice_2.test | RUN | 0.037502 | 0.076921 | 0.127187 | 0.000770 | 0.000909 | 0.002032 |
| mp_replace.test | RUN | 0.295133 | 1.724899 | 1.336914 | 0.002046 | 0.002006 | 0.002062 |
| mp_replace_if.test | RUN | 0.278106 | 1.510678 | 1.268387 | 0.001857 | 0.002120 | 0.001780 |
| mp_replace_if_q.test | RUN | 0.278042 | 1.552981 | 1.272598 | 0.001770 | 0.001962 | 0.001924 |
| mp_copy_if.test | RUN | 0.287185 | 2.164666 | 1.248343 | 0.001833 | 0.002062 | 0.002076 |
| mp_copy_if_q.test | RUN | 0.284293 | 2.185190 | 1.218741 | 0.001954 | 0.002092 | 0.001944 |
| mp_remove.test | RUN | 0.278387 | 1.429378 | 1.226727 | 0.001870 | 0.002078 | 0.002046 |
| mp_remove_if.test | RUN | 0.288329 | 2.268608 | 1.249473 | 0.001724 | 0.002013 | 0.001888 |
| mp_remove_if_q.test | RUN | 0.293022 | 2.264214 | 1.271596 | 0.001892 | 0.001975 | 0.001911 |
| mp_partition.test | RUN | 0.297496 | 2.113112 | 1.354939 | 0.001893 | 0.001814 | 0.002042 |
| mp_partition_q.test | RUN | 0.285654 | 2.115283 | 1.366448 | 0.001934 | 0.002002 | 0.002046 |
| mp_sort.test | RUN | 0.275895 | 1.560697 | 1.209756 | 0.001827 | 0.001950 | 0.001899 |
| mp_sort_q.test | RUN | 0.271754 | 1.521552 | 1.189829 | 0.001711 | 0.002100 | 0.002100 |
| mp_find.test | RUN | 0.265306 | 1.669199 | 1.073716 | 0.001801 | 0.001713 | 0.002193 |
| mp_find_if.test | RUN | 0.259225 | 1.511192 | 0.956109 | 0.001869 | 0.002122 | 0.001972 |
| mp_find_if_q.test | RUN | 0.283367 | 1.710992 | 1.240557 | 0.001753 | 0.002072 | 0.002016 |
| mp_reverse.test | RUN | 0.519405 | 4.388840 | 2.234766 | 0.001824 | 0.001910 | 0.001760 |
| mp_fold.test | RUN | 0.919967 | 3.409229 | 5.461419 | 0.002074 | 0.002109 | 0.001716 |
| mp_fold_q.test | RUN | 0.266464 | 1.493864 | 1.159201 | 0.001773 | 0.002079 | 0.002120 |
| mp_fold_q_sf.test | RUN | 0.242073 | 0.705986 | 0.938419 | 0.001701 | 0.002115 | 0.001940 |
| mp_reverse_fold.test | RUN | 0.440550 | 3.257447 | 1.631850 | 0.001696 | 0.001924 | 0.002145 |
| mp_reverse_fold_q.test | RUN | 0.275158 | 1.858103 | 1.210075 | 0.001814 | 0.001916 | 0.002016 |
| mp_unique.test | RUN | 0.269480 | 1.617581 | 1.179510 | 0.001816 | 0.002091 | 0.002052 |
| mp_unique_if.test | RUN | 0.463209 | 3.395002 | 1.809618 | 0.001856 | 0.002002 | 0.001726 |
| mp_unique_if_q.test | RUN | 0.420615 | 3.388720 | 1.507449 | 0.001778 | 0.002004 | 0.001431 |
| mp_all_of.test | RUN | 0.618183 | 1.830756 | 2.017043 | 0.001972 | 0.001925 | 0.002062 |
| mp_all_of_q.test | RUN | 0.248626 | 0.783019 | 0.879869 | 0.001899 | 0.001900 | 0.002080 |
| mp_any_of.test | RUN | 0.627699 | 1.894750 | 2.001294 | 0.001385 | 0.002143 | 0.001536 |
| mp_any_of_q.test | RUN | 0.244756 | 0.782022 | 0.944571 | 0.002050 | 0.002093 | 0.001751 |
| mp_none_of.test | RUN | 0.644573 | 1.891814 | 2.002198 | 0.001644 | 0.001949 | 0.001881 |
| mp_none_of_q.test | RUN | 0.248665 | 0.807012 | 0.841219 | 0.001938 | 0.001907 | 0.001588 |
| mp_replace_at.test | RUN | 0.296904 | 1.668208 | 1.218839 | 0.002007 | 0.002150 | 0.002176 |
| mp_replace_at_c.test | RUN | 0.292332 | 1.670981 | 1.307519 | 0.001985 | 0.001788 | 0.002007 |
| mp_for_each.test | RUN | 0.275925 | 1.196546 | 1.567151 | 0.001803 | 0.002018 | 0.002032 |
| mp_insert.test | RUN | 0.428047 | 3.347153 | 1.842097 | 0.001840 | 0.001988 | 0.001457 |
| mp_insert_2.test | RUN | 0.037692 | 0.079736 | 0.144693 | 0.000679 | 0.000716 | 0.001974 |
| mp_erase.test | RUN | 0.474632 | 3.540282 | 2.158156 | 0.001941 | 0.002108 | 0.002016 |
| mp_erase_2.test | RUN | 0.038719 | 0.074191 | 0.135790 | 0.000844 | 0.000904 | 0.002035 |
| mp_with_index.test | RUN | 0.650659 | 7.269003 | 4.804244 | 0.002629 | 0.002418 | 0.002370 |
| mp_with_index_cx.test | RUN | 0.004501 | 0.022782 | 0.029135 | 0.000833 | 0.000856 | 0.001968 |
| mp_from_sequence.test | RUN | 0.285919 | 1.913844 | 1.256136 | 0.002052 | 0.002024 | 0.001882 |
| mp_from_sequence_2.test | RUN | 0.292966 | 2.245342 | 1.402667 | 0.001917 | 0.001867 | 0.002038 |
| mp_from_sequence_3.test | RUN | 0.255890 | 0.991204 | 0.995846 | 0.001780 | 0.002098 | 0.002114 |
| mp_min_element.test | RUN | 0.250488 | 0.897426 | 0.953246 | 0.001882 | 0.002100 | 0.002012 |
| mp_min_element_2.test | RUN | 0.039321 | 0.076654 | 0.136901 | 0.000749 | 0.000862 | 0.001800 |
| mp_min_element_q.test | RUN | 0.247962 | 0.897868 | 0.881067 | 0.001755 | 0.001930 | 0.002012 |
| mp_min_element_q_2.test | RUN | 0.040824 | 0.078760 | 0.129751 | 0.000732 | 0.000803 | 0.002054 |
| mp_max_element.test | RUN | 0.249623 | 0.916055 | 0.902565 | 0.001878 | 0.002068 | 0.002022 |
| mp_max_element_2.test | RUN | 0.041934 | 0.076702 | 0.144055 | 0.000755 | 0.000719 | 0.002072 |
| mp_max_element_q.test | RUN | 0.242368 | 0.927420 | 0.893533 | 0.001981 | 0.002162 | 0.002085 |
| mp_max_element_q_2.test | RUN | 0.037404 | 0.078640 | 0.138908 | 0.000788 | 0.000823 | 0.002006 |
| mp_nth_element.test | RUN | 0.268721 | 1.279297 | 1.134139 | 0.001906 | 0.001928 | 0.001840 |
| mp_nth_element_q.test | RUN | 0.262174 | 1.253349 | 1.079010 | 0.001969 | 0.001808 | 0.001932 |
| mp_back.test | RUN | 0.267310 | 1.056026 | 1.138159 | 0.001879 | 0.002205 | 0.001967 |
| mp_back_2.test | RUN | 0.039688 | 0.074247 | 0.143769 | 0.000676 | 0.000739 | 0.001979 |
| mp_pop_back.test | RUN | 0.694486 | 6.717044 | 2.149926 | 0.001762 | 0.001883 | 0.002072 |
| mp_pop_back_2.test | RUN | 0.039392 | 0.074034 | 0.131331 | 0.000973 | 0.000843 | 0.001890 |
| mp_flatten.test | RUN | 0.318183 | 2.422763 | 1.476741 | 0.001946 | 0.001998 | 0.002067 |
| mp_rotate_left.test | RUN | 0.308790 | 2.619687 | 1.495345 | 0.001962 | 0.002030 | 0.001621 |
| mp_rotate_right.test | RUN | 0.308726 | 2.597231 | 1.448076 | 0.001855 | 0.001951 | 0.002080 |
| mp_power_set.test | RUN | 0.306540 | 2.520555 | 1.474186 | 0.001772 | 0.002012 | 0.001818 |
| mp_partial_sum.test | RUN | 0.396831 | 3.342232 | 1.684690 | 0.001864 | 0.002019 | 0.001859 |
| mp_iterate.test | RUN | 0.271362 | 1.011003 | 1.193457 | 0.001735 | 0.002004 | 0.001910 |
| mp_pairwise_fold.test | RUN | 0.305124 | 2.270340 | 1.519062 | 0.001740 | 0.002097 | 0.001725 |
| mp_pairwise_fold_q.test | RUN | 0.239219 | 0.691630 | 0.937759 | 0.002073 | 0.001921 | 0.002014 |
| mp_sliding_fold.test | RUN | 0.562451 | 4.326691 | 2.721577 | 0.002086 | 0.002130 | 0.001683 |
| mp_sliding_fold_q.test | RUN | 0.554929 | 4.412164 | 2.660147 | 0.001849 | 0.001761 | 0.001868 |
| mp_intersperse.test | RUN | 0.288404 | 1.677728 | 1.335701 | 0.002006 | 0.002006 | 0.002008 |
| mp_split.test | RUN | 0.396228 | 3.145176 | 1.772210 | 0.001903 | 0.002172 | 0.001950 |
| mp_join.test | RUN | 0.319193 | 2.646674 | 1.559255 | 0.001991 | 0.002212 | 0.001951 |
| integral.test | RUN | 0.242976 | 1.206207 | 0.976154 | 0.001686 | 0.001992 | 0.002160 |
| mp_value.test | RUN | 0.016818 | 0.043251 | 0.063716 | 0.000833 | 0.000888 | 0.001965 |
| mp_identity.test | RUN | 0.239384 | 1.109798 | 0.998226 | 0.001951 | 0.002116 | 0.001963 |
| mp_inherit.test | RUN | 0.231750 | 0.787603 | 0.926084 | 0.001976 | 0.002152 | 0.001957 |
| mp_if.test | RUN | 0.234589 | 0.917394 | 0.831560 | 0.002051 | 0.002037 | 0.002082 |
| mp_if_sf.test | RUN | 0.226633 | 0.677879 | 0.810418 | 0.001870 | 0.002070 | 0.002030 |
| mp_eval_if.test | RUN | 0.237294 | 0.982183 | 0.879021 | 0.001981 | 0.001800 | 0.002050 |
| mp_eval_if_sf.test | RUN | 0.216194 | 0.685438 | 0.882702 | 0.001860 | 0.002167 | 0.002025 |
| mp_valid.test | RUN | 0.222561 | 0.712045 | 0.845682 | 0.001931 | 0.001882 | 0.002062 |
| mp_defer.test | RUN | 0.247960 | 1.162220 | 0.966848 | 0.002031 | 0.002016 | 0.001985 |
| mp_quote.test | RUN | 0.236748 | 1.165509 | 1.044744 | 0.002042 | 0.002179 | 0.001898 |
| mp_invoke_q.test | RUN | 0.265965 | 1.512689 | 1.130340 | 0.001930 | 0.002260 | 0.001666 |
| mp_invoke_q_sf.test | RUN | 0.228651 | 0.676407 | 0.819685 | 0.001873 | 0.001890 | 0.001982 |
| mp_quote_trait.test | RUN | 0.242516 | 1.290354 | 1.020135 | 0.001971 | 0.002028 | 0.001994 |
| mp_cond.test | RUN | 0.239194 | 0.817128 | 0.870918 | 0.001986 | 0.001964 | 0.001927 |
| mp_cond_sf.test | RUN | 0.220257 | 0.672000 | 0.878892 | 0.001908 | 0.002072 | 0.001987 |
| mp_not_fn.test | RUN | 0.225267 | 0.680022 | 0.866236 | 0.001983 | 0.002101 | 0.001568 |
| mp_eval_if_not.test | RUN | 0.233855 | 0.981866 | 0.908947 | 0.001903 | 0.002074 | 0.002055 |
| mp_eval_or.test | RUN | 0.223709 | 0.521154 | 0.857479 | 0.001830 | 0.002094 | 0.001768 |
| mp_compose.test | RUN | 0.252572 | 1.589073 | 1.102376 | 0.001935 | 0.002026 | 0.002085 |
| mp_valid_and_true.test | RUN | 0.230840 | 0.817979 | 0.881064 | 0.001902 | 0.002050 | 0.002028 |
| mp_compose_sf.test | COMPILE | 0.055992 | 0.109771 | 0.182703 | — | — | — |
| integer_sequence.test | RUN | 0.266228 | 1.529479 | 1.230245 | 0.001834 | 0.001976 | 0.001916 |
| tuple_for_each.test | RUN | 0.220670 | 0.598450 | 0.904060 | 0.001941 | 0.001677 | 0.002106 |
| tuple_for_each_cx.test | COMPILE | 0.044826 | 0.091601 | 0.159758 | — | — | — |
| tuple_apply.test | RUN | 0.229223 | 0.606098 | 0.952369 | 0.001823 | 0.001784 | 0.002016 |
| tuple_apply_cx.test | COMPILE | 0.061288 | 0.117273 | 0.224204 | — | — | — |
| construct_from_tuple.test | RUN | 0.233007 | 0.641023 | 0.885663 | 0.002033 | 0.001802 | 0.001689 |
| construct_from_tuple_cx.test | COMPILE | 0.064469 | 0.128000 | 0.219650 | — | — | — |
| tuple_transform.test | RUN | 0.376075 | 1.267955 | 1.764147 | 0.002035 | 0.001802 | 0.001646 |
| tuple_transform_2.test | RUN | 0.343748 | 0.941278 | 1.670579 | 0.001933 | 0.002000 | 0.001746 |
| tuple_transform_cx.test | COMPILE | 0.051916 | 0.120779 | 0.186241 | — | — | — |
| mp_set_contains.test | RUN | 0.236503 | 0.841516 | 0.927442 | 0.001796 | 0.001930 | 0.001988 |
| mp_set_push_back.test | RUN | 0.295599 | 2.505162 | 1.488562 | 0.001946 | 0.001935 | 0.002127 |
| mp_set_push_front.test | RUN | 0.384972 | 2.990833 | 1.696365 | 0.001814 | 0.002067 | 0.002051 |
| mp_is_set.test | RUN | 0.233703 | 0.827096 | 0.917491 | 0.001848 | 0.002140 | 0.001828 |
| mp_set_union.test | RUN | 0.292837 | 2.085773 | 1.409149 | 0.001888 | 0.002026 | 0.001974 |
| mp_set_union_sf.test | RUN | 0.226796 | 0.672030 | 0.835123 | 0.001842 | 0.001748 | 0.002116 |
| mp_set_difference.test | RUN | 0.271321 | 1.671237 | 1.210902 | 0.001528 | 0.001962 | 0.002101 |
| mp_set_difference_sf.test | RUN | 0.228022 | 0.685074 | 0.829402 | 0.001837 | 0.002076 | 0.002045 |
| mp_set_intersection.test | RUN | 0.268982 | 1.656207 | 1.164836 | 0.001897 | 0.001933 | 0.001961 |
| mp_set_intersection_sf.test | RUN | 0.226879 | 0.678881 | 0.834768 | 0.001782 | 0.001842 | 0.002076 |
| mp_all.test | RUN | 0.234497 | 0.827085 | 0.905249 | 0.001886 | 0.001974 | 0.002030 |
| mp_all_2.test | RUN | 0.605695 | 1.742524 | 1.986886 | 0.002046 | 0.002004 | 0.001725 |
| mp_and.test | RUN | 0.231605 | 0.831642 | 0.891302 | 0.001937 | 0.001928 | 0.001999 |
| mp_any.test | RUN | 0.227996 | 0.781319 | 0.874276 | 0.001680 | 0.001938 | 0.002046 |
| mp_any_2.test | RUN | 0.608461 | 1.733772 | 1.922175 | 0.001758 | 0.001888 | 0.001744 |
| mp_or.test | RUN | 0.230769 | 0.782781 | 0.835679 | 0.001896 | 0.002038 | 0.001965 |
| mp_same.test | RUN | 0.430117 | 1.377130 | 1.269785 | 0.001890 | 0.001932 | 0.001829 |
| mp_plus.test | RUN | 0.235611 | 0.975432 | 1.030045 | 0.001548 | 0.001988 | 0.001814 |
| mp_less.test | RUN | 0.234499 | 0.836607 | 0.915488 | 0.002134 | 0.001782 | 0.001902 |
| mp_min.test | RUN | 0.229869 | 0.755049 | 0.910920 | 0.001789 | 0.001920 | 0.001998 |
| mp_max.test | RUN | 0.234895 | 0.838977 | 0.923278 | 0.001599 | 0.001822 | 0.001932 |
| mp_similar.test | RUN | 0.232850 | 0.833084 | 0.860512 | 0.001754 | 0.001994 | 0.002072 |
| mp_map_find.test | RUN | 0.268646 | 1.496803 | 1.175025 | 0.002088 | 0.001968 | 0.002103 |
| mp_map_find_2.test | RUN | 0.253454 | 0.620367 | 1.053789 | 0.001576 | 0.001752 | 0.001776 |
| mp_map_find_3.test | RUN | 0.248367 | 0.595889 | 0.954045 | 0.001540 | 0.001888 | 0.002003 |
| mp_map_find_4.test | RUN | 0.240819 | 0.559908 | 0.936556 | 0.001536 | 0.001802 | 0.002026 |
| mp_map_contains.test | RUN | 0.239290 | 0.847503 | 0.913626 | 0.002052 | 0.002114 | 0.002002 |
| mp_map_insert.test | RUN | 0.318365 | 2.782479 | 1.585045 | 0.002018 | 0.002094 | 0.001589 |
| mp_map_replace.test | RUN | 0.402422 | 3.143551 | 1.802409 | 0.001661 | 0.002288 | 0.001731 |
| mp_map_erase.test | RUN | 0.311902 | 2.371983 | 1.529984 | 0.001748 | 0.002138 | 0.001912 |
| mp_map_update.test | RUN | 0.273783 | 1.555252 | 1.223486 | 0.001962 | 0.001964 | 0.001981 |
| mp_map_update_q.test | RUN | 0.270941 | 1.562749 | 1.215027 | 0.002092 | 0.001872 | 0.001833 |
| mp_map_keys.test | RUN | 0.269441 | 1.361918 | 1.182471 | 0.001801 | 0.002086 | 0.001940 |
| mp_is_map.test | RUN | 0.254203 | 0.848233 | 0.980067 | 0.001940 | 0.001794 | 0.001589 |
| mp_bind.test | RUN | 0.301896 | 2.438657 | 1.357253 | 0.001954 | 0.001930 | 0.001990 |
| mp_bind_q.test | RUN | 0.272295 | 1.524484 | 1.152629 | 0.002070 | 0.002005 | 0.001594 |
| mp_bind_front.test | RUN | 0.258817 | 1.675426 | 1.138391 | 0.001806 | 0.001862 | 0.001930 |
| mp_bind_back.test | RUN | 0.272852 | 1.678535 | 1.125135 | 0.002027 | 0.002059 | 0.002184 |
| mp_lambda.test | RUN | 0.579240 | 4.920551 | 2.828278 | 0.001876 | 0.001406 | 0.002029 |
| mpl.test | RUN | 0.519368 | 1.333865 | 2.258543 | 0.001996 | 0.001678 | 0.001834 |
| mpl_list.test | RUN | 0.300612 | 1.013126 | 1.084493 | 0.001916 | 0.001939 | 0.001929 |
| mpl_tuple.test | RUN | 0.308561 | 1.032977 | 1.095827 | 0.001780 | 0.001976 | 0.002098 |
| version.test | RUN | 0.148991 | 0.368583 | 0.567596 | 0.001910 | 0.002104 | 0.001979 |
| mp11_version.test | RUN | 0.188695 | 0.432529 | 0.675136 | 0.001706 | 0.001792 | 0.001957 |
| list_version.test | RUN | 0.159480 | 0.382491 | 0.549783 | 0.001639 | 0.001816 | 0.001962 |
| algorithm_version.test | RUN | 0.178304 | 0.408231 | 0.617381 | 0.002029 | 0.001965 | 0.001980 |
| integral_version.test | RUN | 0.155702 | 0.374096 | 0.554063 | 0.001815 | 0.001892 | 0.002030 |
| utility_version.test | RUN | 0.153719 | 0.373563 | 0.565058 | 0.001746 | 0.001988 | 0.001856 |
| function_version.test | RUN | 0.161117 | 0.380381 | 0.565327 | 0.001669 | 0.002114 | 0.002048 |
| map_version.test | RUN | 0.173125 | 0.412490 | 0.624035 | 0.001943 | 0.002068 | 0.001986 |
| set_version.test | RUN | 0.162057 | 0.387938 | 0.574153 | 0.001824 | 0.001710 | 0.002070 |
| bind_version.test | RUN | 0.169980 | 0.403095 | 0.622788 | 0.001750 | 0.002124 | 0.001958 |
| integer_sequence_version.test | RUN | 0.159186 | 0.372628 | 0.514777 | 0.001641 | 0.002156 | 0.001991 |
| tuple_version.test | RUN | 0.173411 | 0.408405 | 0.518749 | 0.001532 | 0.002040 | 0.001465 |
| mpl_version.test | RUN | 0.142091 | 0.320740 | 0.429379 | 0.001516 | 0.001462 | 0.001424 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.005× | 1.010×, 1.001× | 1.002× |
| clang | 1.089× | 1.092×, 1.086× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46045514956).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 9 | 0.001134s | 0.001151s | 0.001118s | byte equality observed |
| bind_version.test | 10 | 0.001136s | 0.001158s | 0.001112s | byte equality observed |
| construct_from_tuple.test | 10 | 0.001146s | 0.001139s | 0.001108s | byte equality observed |
| function_version.test | 10 | 0.001126s | 0.001150s | 0.001123s | byte equality observed |
| integer_sequence.test | 10 | 0.001119s | 0.001153s | 0.001182s | byte equality observed |
| integer_sequence_version.test | 10 | 0.001124s | 0.001132s | 0.001191s | byte equality observed |
| integral.test | 10 | 0.001110s | 0.001159s | 0.001213s | byte equality observed |
| integral_version.test | 10 | 0.001107s | 0.001136s | 0.001263s | byte equality observed |
| list_version.test | 10 | 0.001112s | 0.001148s | 0.001275s | byte equality observed |
| map_version.test | 10 | 0.001133s | 0.001154s | 0.001248s | byte equality observed |
| mp11_version.test | 10 | 0.001128s | 0.001146s | 0.001278s | byte equality observed |
| mp_all.test | 10 | 0.001132s | 0.001153s | 0.001272s | byte equality observed |
| mp_all_2.test | 10 | 0.001151s | 0.001139s | 0.001243s | byte equality observed |
| mp_all_of.test | 10 | 0.001172s | 0.001144s | 0.001278s | byte equality observed |
| mp_all_of_q.test | 10 | 0.001236s | 0.001138s | 0.001257s | byte equality observed |
| mp_and.test | 10 | 0.001259s | 0.001135s | 0.001272s | byte equality observed |
| mp_any.test | 10 | 0.001235s | 0.001142s | 0.001262s | byte equality observed |
| mp_any_2.test | 10 | 0.001298s | 0.001148s | 0.001245s | byte equality observed |
| mp_any_of.test | 10 | 0.001244s | 0.001144s | 0.001237s | byte equality observed |
| mp_any_of_q.test | 10 | 0.001222s | 0.001152s | 0.001216s | byte equality observed |
| mp_append.test | 10 | 0.001288s | 0.001161s | 0.001225s | byte equality observed |
| mp_append_2.test | 10 | 0.001257s | 0.001168s | 0.001244s | byte equality observed |
| mp_append_3.test | 10 | 0.000581s | 0.000554s | 0.001263s | byte equality observed |
| mp_append_sf.test | 10 | 0.001229s | 0.001153s | 0.001241s | byte equality observed |
| mp_apply_q.test | 10 | 0.001211s | 0.001152s | 0.001261s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.001242s | 0.001141s | 0.001251s | byte equality observed |
| mp_assign.test | 10 | 0.001245s | 0.001200s | 0.001225s | byte equality observed |
| mp_assign_2.test | 10 | 0.000573s | 0.000564s | 0.001263s | byte equality observed |
| mp_at.test | 10 | 0.001277s | 0.001255s | 0.001191s | byte equality observed |
| mp_at_2.test | 10 | 0.000572s | 0.000570s | 0.001184s | byte equality observed |
| mp_at_sf.test | 10 | 0.001191s | 0.001267s | 0.001223s | byte equality observed |
| mp_back.test | 10 | 0.001237s | 0.001254s | 0.001248s | byte equality observed |
| mp_back_2.test | 10 | 0.000568s | 0.000569s | 0.001225s | byte equality observed |
| mp_bind.test | 10 | 0.001269s | 0.001238s | 0.001223s | byte equality observed |
| mp_bind_back.test | 10 | 0.001252s | 0.001253s | 0.001219s | byte equality observed |
| mp_bind_front.test | 10 | 0.001252s | 0.001271s | 0.001194s | byte equality observed |
| mp_bind_q.test | 10 | 0.001234s | 0.001272s | 0.001255s | byte equality observed |
| mp_clear.test | 10 | 0.001259s | 0.001251s | 0.001266s | byte equality observed |
| mp_clear_2.test | 10 | 0.000579s | 0.000573s | 0.001164s | byte equality observed |
| mp_compose.test | 10 | 0.001228s | 0.001231s | 0.001236s | byte equality observed |
| mp_cond.test | 10 | 0.001229s | 0.001237s | 0.001247s | byte equality observed |
| mp_cond_sf.test | 10 | 0.001218s | 0.001274s | 0.001227s | byte equality observed |
| mp_contains.test | 10 | 0.001225s | 0.001216s | 0.001226s | byte equality observed |
| mp_copy_if.test | 10 | 0.001227s | 0.001261s | 0.001275s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.001231s | 0.001248s | 0.001233s | byte equality observed |
| mp_count.test | 10 | 0.001256s | 0.001208s | 0.001223s | byte equality observed |
| mp_count_if.test | 10 | 0.001247s | 0.001244s | 0.001246s | byte equality observed |
| mp_count_if_q.test | 10 | 0.001224s | 0.001302s | 0.001249s | byte equality observed |
| mp_defer.test | 10 | 0.001287s | 0.001254s | 0.001227s | byte equality observed |
| mp_drop.test | 10 | 0.001244s | 0.001258s | 0.001210s | byte equality observed |
| mp_drop_2.test | 10 | 0.000569s | 0.000556s | 0.001232s | byte equality observed |
| mp_empty.test | 10 | 0.001250s | 0.001253s | 0.001215s | byte equality observed |
| mp_empty_2.test | 10 | 0.000571s | 0.000566s | 0.001207s | byte equality observed |
| mp_erase.test | 10 | 0.001286s | 0.001284s | 0.001213s | byte equality observed |
| mp_erase_2.test | 10 | 0.000568s | 0.000558s | 0.001233s | byte equality observed |
| mp_eval_if.test | 10 | 0.001195s | 0.001284s | 0.001251s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.001174s | 0.001231s | 0.001238s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.001207s | 0.001225s | 0.001236s | byte equality observed |
| mp_eval_or.test | 10 | 0.001242s | 0.001249s | 0.001269s | byte equality observed |
| mp_fill.test | 10 | 0.001258s | 0.001252s | 0.001206s | byte equality observed |
| mp_fill_2.test | 10 | 0.000571s | 0.000576s | 0.001273s | byte equality observed |
| mp_filter.test | 10 | 0.001243s | 0.001281s | 0.001253s | byte equality observed |
| mp_find.test | 10 | 0.001209s | 0.001236s | 0.001263s | byte equality observed |
| mp_find_if.test | 10 | 0.001232s | 0.001213s | 0.001185s | byte equality observed |
| mp_find_if_q.test | 10 | 0.001256s | 0.001268s | 0.001223s | byte equality observed |
| mp_flatten.test | 10 | 0.001269s | 0.001244s | 0.001241s | byte equality observed |
| mp_fold.test | 10 | 0.001258s | 0.001278s | 0.001263s | byte equality observed |
| mp_fold_q.test | 10 | 0.001235s | 0.001249s | 0.001215s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.001210s | 0.001301s | 0.001232s | byte equality observed |
| mp_for_each.test | 10 | 0.001236s | 0.001257s | 0.001274s | byte equality observed |
| mp_from_sequence.test | 10 | 0.001274s | 0.001329s | 0.001224s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.001237s | 0.001294s | 0.001249s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.001248s | 0.001279s | 0.001215s | byte equality observed |
| mp_front.test | 10 | 0.001264s | 0.001285s | 0.001209s | byte equality observed |
| mp_front_2.test | 10 | 0.000574s | 0.000565s | 0.001140s | byte equality observed |
| mp_identity.test | 10 | 0.001231s | 0.001244s | 0.001222s | byte equality observed |
| mp_if.test | 10 | 0.001213s | 0.001285s | 0.001213s | byte equality observed |
| mp_if_sf.test | 10 | 0.001259s | 0.001248s | 0.001272s | byte equality observed |
| mp_inherit.test | 10 | 0.001224s | 0.001259s | 0.001268s | byte equality observed |
| mp_insert.test | 10 | 0.001254s | 0.001237s | 0.001220s | byte equality observed |
| mp_insert_2.test | 10 | 0.000571s | 0.000565s | 0.001234s | byte equality observed |
| mp_intersperse.test | 10 | 0.001217s | 0.001202s | 0.001207s | byte equality observed |
| mp_invoke_q.test | 10 | 0.001232s | 0.001244s | 0.001250s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.001245s | 0.001194s | 0.001272s | byte equality observed |
| mp_iota.test | 10 | 0.001242s | 0.001280s | 0.001287s | byte equality observed |
| mp_iota_2.test | 10 | 0.001260s | 0.001234s | 0.001278s | byte equality observed |
| mp_is_list.test | 10 | 0.001219s | 0.001321s | 0.001223s | byte equality observed |
| mp_is_map.test | 10 | 0.001225s | 0.001216s | 0.001224s | byte equality observed |
| mp_is_set.test | 10 | 0.001263s | 0.001275s | 0.001251s | byte equality observed |
| mp_is_value_list.test | 10 | 0.001220s | 0.001221s | 0.001220s | byte equality observed |
| mp_iterate.test | 10 | 0.001275s | 0.001235s | 0.001304s | byte equality observed |
| mp_join.test | 10 | 0.001247s | 0.001262s | 0.001260s | byte equality observed |
| mp_lambda.test | 10 | 0.001248s | 0.001252s | 0.001211s | byte equality observed |
| mp_less.test | 10 | 0.001295s | 0.001279s | 0.001241s | byte equality observed |
| mp_list_c.test | 10 | 0.001237s | 0.001256s | 0.001214s | byte equality observed |
| mp_list_v.test | 10 | 0.000573s | 0.000555s | 0.001284s | byte equality observed |
| mp_map_contains.test | 10 | 0.001243s | 0.001223s | 0.001210s | byte equality observed |
| mp_map_erase.test | 10 | 0.001220s | 0.001234s | 0.001328s | byte equality observed |
| mp_map_find.test | 10 | 0.001229s | 0.001239s | 0.001213s | byte equality observed |
| mp_map_find_2.test | 10 | 0.001261s | 0.001242s | 0.001284s | byte equality observed |
| mp_map_find_3.test | 10 | 0.001210s | 0.001221s | 0.001239s | byte equality observed |
| mp_map_find_4.test | 10 | 0.001229s | 0.001221s | 0.001205s | byte equality observed |
| mp_map_insert.test | 10 | 0.001275s | 0.001259s | 0.001234s | byte equality observed |
| mp_map_keys.test | 10 | 0.001205s | 0.001259s | 0.001269s | byte equality observed |
| mp_map_replace.test | 10 | 0.001261s | 0.001277s | 0.001228s | byte equality observed |
| mp_map_update.test | 10 | 0.001235s | 0.001265s | 0.001254s | byte equality observed |
| mp_map_update_q.test | 10 | 0.001238s | 0.001259s | 0.001256s | byte equality observed |
| mp_max.test | 10 | 0.001273s | 0.001283s | 0.001224s | byte equality observed |
| mp_max_element.test | 10 | 0.001252s | 0.001268s | 0.001250s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000580s | 0.000562s | 0.001168s | byte equality observed |
| mp_max_element_q.test | 10 | 0.001240s | 0.001249s | 0.001238s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000575s | 0.000578s | 0.001194s | byte equality observed |
| mp_min.test | 10 | 0.001219s | 0.001227s | 0.001204s | byte equality observed |
| mp_min_element.test | 10 | 0.001229s | 0.001281s | 0.001253s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000566s | 0.000565s | 0.001221s | byte equality observed |
| mp_min_element_q.test | 10 | 0.001272s | 0.001285s | 0.001207s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000567s | 0.000568s | 0.001222s | byte equality observed |
| mp_none_of.test | 9 | 0.001249s | 0.001254s | 0.001213s | byte equality observed |
| mp_none_of_q.test | 10 | 0.001228s | 0.001225s | 0.001275s | byte equality observed |
| mp_not_fn.test | 10 | 0.001217s | 0.001288s | 0.001207s | byte equality observed |
| mp_nth_element.test | 10 | 0.001259s | 0.001263s | 0.001249s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.001283s | 0.001264s | 0.001199s | byte equality observed |
| mp_or.test | 10 | 0.001243s | 0.001272s | 0.001239s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.001230s | 0.001249s | 0.001186s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.001291s | 0.001276s | 0.001201s | byte equality observed |
| mp_partial_sum.test | 10 | 0.001227s | 0.001243s | 0.001214s | byte equality observed |
| mp_partition.test | 10 | 0.001240s | 0.001242s | 0.001190s | byte equality observed |
| mp_partition_q.test | 10 | 0.001261s | 0.001252s | 0.001254s | byte equality observed |
| mp_plus.test | 10 | 0.001191s | 0.001291s | 0.001268s | byte equality observed |
| mp_pop_back.test | 10 | 0.001260s | 0.001262s | 0.001224s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000568s | 0.000574s | 0.001241s | byte equality observed |
| mp_pop_front.test | 10 | 0.001233s | 0.001270s | 0.001219s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000572s | 0.000553s | 0.001205s | byte equality observed |
| mp_power_set.test | 10 | 0.001212s | 0.001298s | 0.001229s | byte equality observed |
| mp_product.test | 10 | 0.001196s | 0.001250s | 0.001246s | byte equality observed |
| mp_push_back.test | 10 | 0.001239s | 0.001289s | 0.001221s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000574s | 0.000570s | 0.001171s | byte equality observed |
| mp_push_front.test | 10 | 0.001250s | 0.001294s | 0.001195s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000555s | 0.000555s | 0.001165s | byte equality observed |
| mp_quote.test | 10 | 0.001248s | 0.001273s | 0.001266s | byte equality observed |
| mp_quote_trait.test | 10 | 0.001289s | 0.001242s | 0.001243s | byte equality observed |
| mp_remove.test | 10 | 0.001237s | 0.001274s | 0.001234s | byte equality observed |
| mp_remove_if.test | 10 | 0.001191s | 0.001244s | 0.001250s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.001223s | 0.001295s | 0.001253s | byte equality observed |
| mp_rename.test | 10 | 0.001279s | 0.001264s | 0.001256s | byte equality observed |
| mp_rename_2.test | 10 | 0.000571s | 0.000585s | 0.001261s | byte equality observed |
| mp_rename_v.test | 10 | 0.000575s | 0.000586s | 0.001191s | byte equality observed |
| mp_repeat.test | 10 | 0.001272s | 0.001313s | 0.001217s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000559s | 0.000565s | 0.001181s | byte equality observed |
| mp_repeat_3.test | 10 | 0.001229s | 0.001272s | 0.001223s | byte equality observed |
| mp_replace.test | 10 | 0.001286s | 0.001277s | 0.001256s | byte equality observed |
| mp_replace_at.test | 10 | 0.001215s | 0.001240s | 0.001273s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.001242s | 0.001217s | 0.001208s | byte equality observed |
| mp_replace_front.test | 10 | 0.001244s | 0.001287s | 0.001223s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000569s | 0.000573s | 0.001202s | byte equality observed |
| mp_replace_if.test | 10 | 0.001210s | 0.001277s | 0.001234s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.001228s | 0.001240s | 0.001277s | byte equality observed |
| mp_replace_second.test | 10 | 0.001247s | 0.001244s | 0.001221s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000570s | 0.000569s | 0.001203s | byte equality observed |
| mp_replace_third.test | 10 | 0.001225s | 0.001266s | 0.001176s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000574s | 0.000591s | 0.001255s | byte equality observed |
| mp_reverse.test | 10 | 0.001229s | 0.001254s | 0.001225s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.001218s | 0.001253s | 0.001312s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.001221s | 0.001246s | 0.001251s | byte equality observed |
| mp_rotate_left.test | 10 | 0.001259s | 0.001228s | 0.001251s | byte equality observed |
| mp_rotate_right.test | 10 | 0.001215s | 0.001246s | 0.001238s | byte equality observed |
| mp_same.test | 10 | 0.001239s | 0.001307s | 0.001189s | byte equality observed |
| mp_second.test | 10 | 0.001235s | 0.001252s | 0.001217s | byte equality observed |
| mp_second_2.test | 10 | 0.000561s | 0.000564s | 0.001167s | byte equality observed |
| mp_set_contains.test | 10 | 0.001223s | 0.001208s | 0.001199s | byte equality observed |
| mp_set_difference.test | 10 | 0.001269s | 0.001232s | 0.001216s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.001245s | 0.001239s | 0.001210s | byte equality observed |
| mp_set_intersection.test | 10 | 0.001258s | 0.001218s | 0.001264s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.001274s | 0.001244s | 0.001230s | byte equality observed |
| mp_set_push_back.test | 10 | 0.001257s | 0.001235s | 0.001227s | byte equality observed |
| mp_set_push_front.test | 10 | 0.001241s | 0.001299s | 0.001217s | byte equality observed |
| mp_set_union.test | 10 | 0.001225s | 0.001277s | 0.001223s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.001261s | 0.001228s | 0.001282s | byte equality observed |
| mp_similar.test | 10 | 0.001244s | 0.001253s | 0.001273s | byte equality observed |
| mp_size.test | 10 | 0.001235s | 0.001256s | 0.001190s | byte equality observed |
| mp_size_2.test | 10 | 0.000574s | 0.000579s | 0.001322s | byte equality observed |
| mp_slice.test | 10 | 0.001247s | 0.001228s | 0.001192s | byte equality observed |
| mp_slice_2.test | 10 | 0.000567s | 0.000567s | 0.001302s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.001248s | 0.001265s | 0.001207s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.001289s | 0.001281s | 0.001260s | byte equality observed |
| mp_sort.test | 10 | 0.001249s | 0.001275s | 0.001217s | byte equality observed |
| mp_sort_q.test | 10 | 0.001213s | 0.001231s | 0.001239s | byte equality observed |
| mp_split.test | 10 | 0.001267s | 0.001273s | 0.001239s | byte equality observed |
| mp_starts_with.test | 10 | 0.001211s | 0.001316s | 0.001239s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.001262s | 0.001199s | 0.001257s | byte equality observed |
| mp_take.test | 10 | 0.001264s | 0.001219s | 0.001222s | byte equality observed |
| mp_take_2.test | 10 | 0.000574s | 0.000553s | 0.001198s | byte equality observed |
| mp_third.test | 10 | 0.001252s | 0.001292s | 0.001259s | byte equality observed |
| mp_third_2.test | 10 | 0.000574s | 0.000563s | 0.001229s | byte equality observed |
| mp_transform.test | 10 | 0.001223s | 0.001212s | 0.001201s | byte equality observed |
| mp_transform_2.test | 10 | 0.001215s | 0.001222s | 0.001304s | byte equality observed |
| mp_transform_front.test | 10 | 0.001233s | 0.001260s | 0.001229s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000563s | 0.000561s | 0.001230s | byte equality observed |
| mp_transform_if.test | 10 | 0.001214s | 0.001293s | 0.001177s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.001211s | 0.001237s | 0.001174s | byte equality observed |
| mp_transform_q.test | 10 | 0.001267s | 0.001218s | 0.001204s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.001241s | 0.001181s | 0.001225s | byte equality observed |
| mp_transform_second.test | 10 | 0.001232s | 0.001236s | 0.001249s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000564s | 0.000563s | 0.001256s | byte equality observed |
| mp_transform_sf.test | 10 | 0.001234s | 0.001242s | 0.001249s | byte equality observed |
| mp_transform_third.test | 10 | 0.001240s | 0.001270s | 0.001221s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000574s | 0.000550s | 0.001265s | byte equality observed |
| mp_unique.test | 10 | 0.001267s | 0.001246s | 0.001224s | byte equality observed |
| mp_unique_if.test | 10 | 0.001242s | 0.001257s | 0.001251s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.001217s | 0.001232s | 0.001216s | byte equality observed |
| mp_valid.test | 10 | 0.001203s | 0.001239s | 0.001231s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.001278s | 0.001266s | 0.001267s | byte equality observed |
| mp_value.test | 10 | 0.000571s | 0.000550s | 0.001206s | byte equality observed |
| mp_with_index.test | 10 | 0.001637s | 0.001630s | 0.001523s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000563s | 0.000565s | 0.001203s | byte equality observed |
| mpl.test | 10 | 0.001251s | 0.001220s | 0.001181s | byte equality observed |
| mpl_list.test | 10 | 0.001258s | 0.001280s | 0.001213s | byte equality observed |
| mpl_tuple.test | 10 | 0.001237s | 0.001266s | 0.001226s | byte equality observed |
| mpl_version.test | 10 | 0.001262s | 0.001242s | 0.001229s | byte equality observed |
| set_version.test | 10 | 0.001231s | 0.001253s | 0.001241s | byte equality observed |
| tuple_apply.test | 10 | 0.001226s | 0.001317s | 0.001236s | byte equality observed |
| tuple_for_each.test | 10 | 0.001256s | 0.001250s | 0.001280s | byte equality observed |
| tuple_transform.test | 10 | 0.001227s | 0.001327s | 0.001232s | byte equality observed |
| tuple_transform_2.test | 10 | 0.001245s | 0.001270s | 0.001270s | byte equality observed |
| tuple_version.test | 10 | 0.001251s | 0.001237s | 0.001216s | byte equality observed |
| utility_version.test | 10 | 0.001274s | 0.001229s | 0.001244s | byte equality observed |
| version.test | 10 | 0.001234s | 0.001264s | 0.001260s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46045514956).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
