# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.051333 | 0.102445 | 0.171776 | — | — | — |
| complex_h.test | COMPILE | 0.210829 | 0.437384 | 0.795545 | — | — | — |
| mp_size.test | RUN | 0.245174 | 1.325679 | 0.900302 | 0.001942 | 0.002076 | 0.002082 |
| mp_size_2.test | RUN | 0.021395 | 0.047712 | 0.074392 | 0.000806 | 0.000776 | 0.001943 |
| mp_empty.test | RUN | 0.230471 | 0.828790 | 0.863556 | 0.002036 | 0.002054 | 0.001935 |
| mp_empty_2.test | RUN | 0.020953 | 0.046982 | 0.078788 | 0.000762 | 0.000818 | 0.001992 |
| mp_assign.test | RUN | 0.262303 | 1.701275 | 1.109517 | 0.001747 | 0.002136 | 0.001861 |
| mp_assign_2.test | RUN | 0.022243 | 0.051099 | 0.081611 | 0.000806 | 0.000850 | 0.001858 |
| mp_clear.test | RUN | 0.225236 | 0.744947 | 0.882078 | 0.001968 | 0.002179 | 0.001808 |
| mp_clear_2.test | RUN | 0.022028 | 0.050071 | 0.073827 | 0.000789 | 0.000746 | 0.002120 |
| mp_front.test | RUN | 0.236185 | 1.184843 | 0.974666 | 0.001836 | 0.001952 | 0.002036 |
| mp_front_2.test | RUN | 0.020865 | 0.046587 | 0.079430 | 0.000798 | 0.000908 | 0.001961 |
| mp_pop_front.test | RUN | 0.241593 | 1.229597 | 1.001441 | 0.001985 | 0.002236 | 0.001645 |
| mp_pop_front_2.test | RUN | 0.021215 | 0.050656 | 0.068102 | 0.000770 | 0.001037 | 0.001902 |
| mp_second.test | RUN | 0.229247 | 0.789292 | 0.961683 | 0.001858 | 0.001928 | 0.002170 |
| mp_second_2.test | RUN | 0.021638 | 0.048550 | 0.073280 | 0.000888 | 0.000788 | 0.001913 |
| mp_third.test | RUN | 0.235024 | 0.737241 | 0.874605 | 0.002010 | 0.002304 | 0.001804 |
| mp_third_2.test | RUN | 0.020345 | 0.046410 | 0.078017 | 0.000766 | 0.000695 | 0.001736 |
| mp_push_front.test | RUN | 0.306410 | 2.577789 | 1.527421 | 0.001823 | 0.002056 | 0.002089 |
| mp_push_front_2.test | RUN | 0.020035 | 0.046399 | 0.084975 | 0.000759 | 0.001004 | 0.001675 |
| mp_push_back.test | RUN | 0.298616 | 2.569015 | 1.557238 | 0.001865 | 0.001818 | 0.001549 |
| mp_push_back_2.test | RUN | 0.021874 | 0.051598 | 0.072186 | 0.000895 | 0.000758 | 0.002132 |
| mp_rename.test | RUN | 0.286657 | 2.355072 | 1.261181 | 0.001738 | 0.002022 | 0.001711 |
| mp_rename_2.test | RUN | 0.021564 | 0.049993 | 0.082042 | 0.000729 | 0.000885 | 0.002044 |
| mp_append.test | RUN | 0.305067 | 2.659643 | 1.424228 | 0.001961 | 0.002082 | 0.002100 |
| mp_append_2.test | RUN | 0.631185 | 5.971595 | 1.918381 | 0.001802 | 0.001835 | 0.001808 |
| mp_append_3.test | RUN | 0.021543 | 0.050689 | 0.070900 | 0.000821 | 0.000752 | 0.001967 |
| mp_append_sf.test | RUN | 0.226292 | 0.662877 | 0.853311 | 0.001798 | 0.001852 | 0.001805 |
| mp_replace_front.test | RUN | 0.276528 | 1.915404 | 1.117515 | 0.001852 | 0.002170 | 0.001663 |
| mp_replace_front_2.test | RUN | 0.021451 | 0.048085 | 0.082769 | 0.000705 | 0.000698 | 0.001893 |
| mp_replace_second.test | RUN | 0.267599 | 1.253067 | 1.188737 | 0.001834 | 0.001780 | 0.001976 |
| mp_replace_second_2.test | RUN | 0.021633 | 0.046721 | 0.079188 | 0.000805 | 0.000983 | 0.001906 |
| mp_replace_third.test | RUN | 0.258046 | 1.046453 | 1.018669 | 0.001864 | 0.001784 | 0.002089 |
| mp_replace_third_2.test | RUN | 0.021497 | 0.050096 | 0.071760 | 0.000726 | 0.000797 | 0.001998 |
| mp_apply_q.test | RUN | 0.285410 | 2.364032 | 1.320169 | 0.001831 | 0.002010 | 0.002151 |
| mp_apply_q_sf.test | RUN | 0.228045 | 0.720788 | 0.896976 | 0.001915 | 0.002274 | 0.002112 |
| mp_is_list.test | RUN | 0.231443 | 0.823184 | 0.886242 | 0.001754 | 0.002004 | 0.002142 |
| mp_list_c.test | RUN | 0.242400 | 0.992783 | 0.925373 | 0.001928 | 0.002065 | 0.002116 |
| mp_transform_front.test | RUN | 0.263755 | 1.899107 | 1.114006 | 0.001828 | 0.001946 | 0.001684 |
| mp_transform_front_2.test | RUN | 0.021772 | 0.049762 | 0.083080 | 0.000745 | 0.000651 | 0.001826 |
| mp_transform_second.test | RUN | 0.257953 | 1.665056 | 1.116390 | 0.001906 | 0.001928 | 0.001852 |
| mp_transform_second_2.test | RUN | 0.022474 | 0.046099 | 0.081548 | 0.000879 | 0.000875 | 0.001913 |
| mp_transform_third.test | RUN | 0.241821 | 1.287466 | 1.009443 | 0.001760 | 0.001980 | 0.002039 |
| mp_transform_third_2.test | RUN | 0.022066 | 0.049624 | 0.079835 | 0.000733 | 0.000754 | 0.001774 |
| mp_list_v.test | RUN | 0.021259 | 0.048477 | 0.072806 | 0.000730 | 0.000713 | 0.001854 |
| mp_rename_v.test | RUN | 0.021964 | 0.048309 | 0.074519 | 0.000745 | 0.000896 | 0.001623 |
| mp_is_value_list.test | RUN | 0.220767 | 0.518704 | 0.845257 | 0.001900 | 0.001958 | 0.002146 |
| mp_transform.test | RUN | 0.499430 | 3.987241 | 2.380775 | 0.002008 | 0.002014 | 0.001983 |
| mp_transform_2.test | RUN | 0.213409 | 0.476467 | 0.807995 | 0.001682 | 0.002189 | 0.002018 |
| mp_transform_q.test | RUN | 0.504640 | 3.797367 | 2.265139 | 0.001730 | 0.002213 | 0.001888 |
| mp_transform_q_2.test | RUN | 0.552103 | 1.267001 | 2.976170 | 0.001929 | 0.002097 | 0.001860 |
| mp_transform_sf.test | RUN | 0.238766 | 0.740425 | 0.900512 | 0.001894 | 0.001938 | 0.001982 |
| mp_transform_if.test | RUN | 0.290934 | 1.930106 | 1.351848 | 0.001713 | 0.001846 | 0.001668 |
| mp_transform_if_q.test | RUN | 0.291714 | 1.949370 | 1.308760 | 0.001938 | 0.002008 | 0.001607 |
| mp_filter.test | RUN | 0.261108 | 1.174815 | 1.008214 | 0.001890 | 0.002208 | 0.001789 |
| mp_fill.test | RUN | 0.245700 | 0.885165 | 0.995030 | 0.001992 | 0.002016 | 0.001868 |
| mp_fill_2.test | RUN | 0.039235 | 0.082416 | 0.128894 | 0.000856 | 0.000942 | 0.001959 |
| mp_count.test | RUN | 0.466708 | 2.050540 | 1.529806 | 0.001866 | 0.001934 | 0.002076 |
| mp_count_if.test | RUN | 0.480862 | 2.092868 | 1.680226 | 0.001720 | 0.001910 | 0.002162 |
| mp_count_if_q.test | RUN | 0.252068 | 1.394822 | 0.993132 | 0.001746 | 0.001834 | 0.002070 |
| mp_contains.test | RUN | 0.235312 | 0.858325 | 0.911208 | 0.001720 | 0.001985 | 0.002040 |
| mp_starts_with.test | RUN | 0.243857 | 0.851535 | 0.924375 | 0.001788 | 0.001800 | 0.001810 |
| mp_starts_with_sf.test | RUN | 0.238566 | 0.738585 | 0.859539 | 0.001882 | 0.001579 | 0.002089 |
| mp_repeat.test | RUN | 0.345094 | 3.395834 | 1.645929 | 0.001967 | 0.002196 | 0.001814 |
| mp_repeat_2.test | RUN | 0.038059 | 0.079849 | 0.147233 | 0.000718 | 0.000980 | 0.001676 |
| mp_repeat_3.test | RUN | 0.292749 | 0.494066 | 0.873571 | 0.001852 | 0.002086 | 0.001947 |
| mp_product.test | RUN | 0.275053 | 2.032588 | 1.197850 | 0.001785 | 0.002013 | 0.002056 |
| mp_drop.test | RUN | 0.302321 | 2.503551 | 1.352122 | 0.001674 | 0.002266 | 0.002133 |
| mp_drop_2.test | RUN | 0.040755 | 0.079793 | 0.142435 | 0.000675 | 0.000845 | 0.001968 |
| mp_iota.test | RUN | 0.281701 | 2.174523 | 1.233268 | 0.001951 | 0.001944 | 0.002044 |
| mp_iota_2.test | RUN | 0.305748 | 2.659103 | 1.372482 | 0.001817 | 0.002169 | 0.002038 |
| mp_at.test | RUN | 0.254847 | 1.157982 | 1.042345 | 0.001754 | 0.001788 | 0.002088 |
| mp_at_2.test | RUN | 0.039597 | 0.078803 | 0.142282 | 0.000852 | 0.000714 | 0.002078 |
| mp_at_sf.test | RUN | 0.235027 | 0.733822 | 0.906056 | 0.001870 | 0.001844 | 0.001892 |
| mp_take.test | RUN | 0.377321 | 3.376811 | 1.567620 | 0.001877 | 0.001992 | 0.002114 |
| mp_take_2.test | RUN | 0.038635 | 0.077102 | 0.146313 | 0.000700 | 0.000963 | 0.002100 |
| mp_slice.test | RUN | 0.447861 | 3.445633 | 2.118277 | 0.002080 | 0.002112 | 0.002068 |
| mp_slice_2.test | RUN | 0.038922 | 0.082450 | 0.144055 | 0.000687 | 0.000946 | 0.002070 |
| mp_replace.test | RUN | 0.289865 | 1.779002 | 1.373871 | 0.002065 | 0.002124 | 0.002214 |
| mp_replace_if.test | RUN | 0.274838 | 1.533450 | 1.210692 | 0.001954 | 0.001494 | 0.002148 |
| mp_replace_if_q.test | RUN | 0.283426 | 1.598446 | 1.276273 | 0.001762 | 0.002100 | 0.002070 |
| mp_copy_if.test | RUN | 0.283649 | 2.182595 | 1.196577 | 0.001996 | 0.001933 | 0.002116 |
| mp_copy_if_q.test | RUN | 0.285707 | 2.214694 | 1.219057 | 0.001978 | 0.002061 | 0.001970 |
| mp_remove.test | RUN | 0.278393 | 1.447550 | 1.206392 | 0.002038 | 0.002192 | 0.002134 |
| mp_remove_if.test | RUN | 0.295738 | 2.316932 | 1.321022 | 0.001754 | 0.002140 | 0.002059 |
| mp_remove_if_q.test | RUN | 0.296725 | 2.268217 | 1.271606 | 0.001882 | 0.001940 | 0.001976 |
| mp_partition.test | RUN | 0.289593 | 2.139576 | 1.325670 | 0.001964 | 0.001874 | 0.002112 |
| mp_partition_q.test | RUN | 0.293218 | 2.150578 | 1.413067 | 0.001962 | 0.002050 | 0.002030 |
| mp_sort.test | RUN | 0.274171 | 1.581455 | 1.216414 | 0.001866 | 0.002156 | 0.002045 |
| mp_sort_q.test | RUN | 0.278126 | 1.569407 | 1.229487 | 0.001835 | 0.002260 | 0.002046 |
| mp_find.test | RUN | 0.270321 | 1.701151 | 1.021918 | 0.002037 | 0.001965 | 0.001761 |
| mp_find_if.test | RUN | 0.265722 | 1.576280 | 1.005875 | 0.002066 | 0.001846 | 0.002044 |
| mp_find_if_q.test | RUN | 0.287278 | 1.772410 | 1.264799 | 0.001911 | 0.002310 | 0.002096 |
| mp_reverse.test | RUN | 0.516948 | 4.483569 | 2.273764 | 0.001804 | 0.001910 | 0.002045 |
| mp_fold.test | RUN | 0.935589 | 3.531681 | 5.500456 | 0.002036 | 0.002018 | 0.002143 |
| mp_fold_q.test | RUN | 0.265147 | 1.530081 | 1.185728 | 0.001794 | 0.002062 | 0.002132 |
| mp_fold_q_sf.test | RUN | 0.244053 | 0.756205 | 0.928603 | 0.001844 | 0.002324 | 0.002028 |
| mp_reverse_fold.test | RUN | 0.448342 | 3.368195 | 1.653733 | 0.002043 | 0.002204 | 0.001649 |
| mp_reverse_fold_q.test | RUN | 0.271618 | 1.858976 | 1.203334 | 0.001705 | 0.001935 | 0.001936 |
| mp_unique.test | RUN | 0.272220 | 1.682901 | 1.186433 | 0.001784 | 0.001958 | 0.001909 |
| mp_unique_if.test | RUN | 0.476754 | 3.414251 | 1.835623 | 0.001685 | 0.001897 | 0.001860 |
| mp_unique_if_q.test | RUN | 0.422345 | 3.415190 | 1.530037 | 0.001796 | 0.001843 | 0.001698 |
| mp_all_of.test | RUN | 0.634772 | 1.869019 | 2.044803 | 0.001919 | 0.001996 | 0.001988 |
| mp_all_of_q.test | RUN | 0.242758 | 0.805828 | 0.951291 | 0.001925 | 0.001938 | 0.001834 |
| mp_any_of.test | RUN | 0.627125 | 1.946721 | 2.039444 | 0.001851 | 0.002244 | 0.002157 |
| mp_any_of_q.test | RUN | 0.239975 | 0.798684 | 0.926181 | 0.001962 | 0.002118 | 0.002008 |
| mp_none_of.test | RUN | 0.601093 | 1.935161 | 2.012028 | 0.001700 | 0.001871 | 0.002041 |
| mp_none_of_q.test | RUN | 0.226649 | 0.830064 | 0.812415 | 0.001947 | 0.002127 | 0.001842 |
| mp_replace_at.test | RUN | 0.289961 | 1.710295 | 1.226965 | 0.001976 | 0.002031 | 0.001942 |
| mp_replace_at_c.test | RUN | 0.283046 | 1.705403 | 1.379950 | 0.001930 | 0.001934 | 0.001990 |
| mp_for_each.test | RUN | 0.279293 | 1.201900 | 1.532739 | 0.001802 | 0.002233 | 0.001814 |
| mp_insert.test | RUN | 0.423322 | 3.351540 | 1.909942 | 0.001926 | 0.002175 | 0.002034 |
| mp_insert_2.test | RUN | 0.037799 | 0.079957 | 0.146554 | 0.000669 | 0.000694 | 0.002042 |
| mp_erase.test | RUN | 0.479113 | 3.537843 | 2.193122 | 0.002022 | 0.002340 | 0.002063 |
| mp_erase_2.test | RUN | 0.037987 | 0.083119 | 0.128647 | 0.000705 | 0.000925 | 0.001610 |
| mp_with_index.test | RUN | 0.655269 | 7.353830 | 4.843512 | 0.002558 | 0.002500 | 0.002316 |
| mp_with_index_cx.test | RUN | 0.004770 | 0.022614 | 0.032025 | 0.000775 | 0.000979 | 0.002054 |
| mp_from_sequence.test | RUN | 0.282691 | 1.939457 | 1.385927 | 0.001964 | 0.002034 | 0.002004 |
| mp_from_sequence_2.test | RUN | 0.306627 | 2.268384 | 1.372041 | 0.001908 | 0.001768 | 0.002202 |
| mp_from_sequence_3.test | RUN | 0.249899 | 1.002383 | 1.012345 | 0.001917 | 0.002033 | 0.001656 |
| mp_min_element.test | RUN | 0.245131 | 0.912186 | 0.962022 | 0.001772 | 0.001940 | 0.002084 |
| mp_min_element_2.test | RUN | 0.040625 | 0.081327 | 0.142578 | 0.000732 | 0.000888 | 0.001786 |
| mp_min_element_q.test | RUN | 0.250344 | 0.921297 | 0.945114 | 0.001686 | 0.002079 | 0.001974 |
| mp_min_element_q_2.test | RUN | 0.039402 | 0.077719 | 0.136523 | 0.000765 | 0.000792 | 0.001892 |
| mp_max_element.test | RUN | 0.249246 | 0.931589 | 0.962572 | 0.001913 | 0.002094 | 0.001938 |
| mp_max_element_2.test | RUN | 0.038208 | 0.073124 | 0.128883 | 0.000745 | 0.000921 | 0.001953 |
| mp_max_element_q.test | RUN | 0.246495 | 0.920895 | 0.912309 | 0.001939 | 0.002244 | 0.001786 |
| mp_max_element_q_2.test | RUN | 0.036401 | 0.078162 | 0.145008 | 0.000641 | 0.000728 | 0.001848 |
| mp_nth_element.test | RUN | 0.274903 | 1.269655 | 1.173342 | 0.001948 | 0.001708 | 0.001714 |
| mp_nth_element_q.test | RUN | 0.269812 | 1.273835 | 1.111723 | 0.001724 | 0.001943 | 0.001817 |
| mp_back.test | RUN | 0.262059 | 1.084180 | 1.085007 | 0.001866 | 0.001974 | 0.001946 |
| mp_back_2.test | RUN | 0.038276 | 0.080664 | 0.143646 | 0.000742 | 0.000824 | 0.002032 |
| mp_pop_back.test | RUN | 0.696785 | 6.744517 | 2.108941 | 0.001965 | 0.001909 | 0.001791 |
| mp_pop_back_2.test | RUN | 0.038086 | 0.080892 | 0.145875 | 0.000808 | 0.000786 | 0.001912 |
| mp_flatten.test | RUN | 0.307016 | 2.432075 | 1.509581 | 0.001802 | 0.002018 | 0.001984 |
| mp_rotate_left.test | RUN | 0.310142 | 2.631926 | 1.487150 | 0.001888 | 0.001902 | 0.001913 |
| mp_rotate_right.test | RUN | 0.313071 | 2.608783 | 1.486935 | 0.001753 | 0.001852 | 0.001940 |
| mp_power_set.test | RUN | 0.312734 | 2.522005 | 1.480864 | 0.001825 | 0.001994 | 0.001804 |
| mp_partial_sum.test | RUN | 0.401300 | 3.354823 | 1.686050 | 0.001876 | 0.001869 | 0.001857 |
| mp_iterate.test | RUN | 0.273456 | 1.018356 | 1.204574 | 0.001882 | 0.002031 | 0.001865 |
| mp_pairwise_fold.test | RUN | 0.307292 | 2.275755 | 1.498008 | 0.001702 | 0.001914 | 0.002086 |
| mp_pairwise_fold_q.test | RUN | 0.244912 | 0.698741 | 0.947958 | 0.002064 | 0.002078 | 0.001960 |
| mp_sliding_fold.test | RUN | 0.558119 | 4.398689 | 2.721246 | 0.001832 | 0.002132 | 0.001802 |
| mp_sliding_fold_q.test | RUN | 0.570086 | 4.398519 | 2.738694 | 0.001835 | 0.001958 | 0.001708 |
| mp_intersperse.test | RUN | 0.297200 | 1.674662 | 1.344858 | 0.001921 | 0.002143 | 0.001957 |
| mp_split.test | RUN | 0.413534 | 3.213776 | 1.759426 | 0.001924 | 0.002036 | 0.001834 |
| mp_join.test | RUN | 0.318390 | 2.685064 | 1.612761 | 0.001980 | 0.002271 | 0.002084 |
| integral.test | RUN | 0.247678 | 1.221315 | 1.043728 | 0.001912 | 0.002170 | 0.002078 |
| mp_value.test | RUN | 0.016866 | 0.041781 | 0.059554 | 0.000768 | 0.000715 | 0.001982 |
| mp_identity.test | RUN | 0.236703 | 1.123816 | 0.907348 | 0.001942 | 0.001970 | 0.001933 |
| mp_inherit.test | RUN | 0.233635 | 0.795430 | 0.885008 | 0.001761 | 0.002197 | 0.002199 |
| mp_if.test | RUN | 0.235526 | 0.914377 | 0.893680 | 0.001914 | 0.001712 | 0.002070 |
| mp_if_sf.test | RUN | 0.219447 | 0.670422 | 0.875816 | 0.002023 | 0.001950 | 0.001630 |
| mp_eval_if.test | RUN | 0.232748 | 0.979751 | 0.920474 | 0.002004 | 0.001794 | 0.001686 |
| mp_eval_if_sf.test | RUN | 0.226489 | 0.707280 | 0.824113 | 0.001726 | 0.001790 | 0.002158 |
| mp_valid.test | RUN | 0.227457 | 0.671933 | 0.854763 | 0.001772 | 0.001993 | 0.002050 |
| mp_defer.test | RUN | 0.243547 | 1.113222 | 1.042553 | 0.002010 | 0.002158 | 0.001917 |
| mp_quote.test | RUN | 0.247996 | 1.196126 | 1.045114 | 0.002036 | 0.002192 | 0.001872 |
| mp_invoke_q.test | RUN | 0.267159 | 1.550477 | 1.118328 | 0.001855 | 0.002070 | 0.001756 |
| mp_invoke_q_sf.test | RUN | 0.221775 | 0.693989 | 0.865750 | 0.001710 | 0.002062 | 0.002138 |
| mp_quote_trait.test | RUN | 0.247532 | 1.287543 | 1.028930 | 0.001998 | 0.001854 | 0.001894 |
| mp_cond.test | RUN | 0.232569 | 0.799054 | 0.935010 | 0.001875 | 0.002163 | 0.001636 |
| mp_cond_sf.test | RUN | 0.223184 | 0.688496 | 0.873918 | 0.001929 | 0.002229 | 0.001718 |
| mp_not_fn.test | RUN | 0.223191 | 0.694517 | 0.863051 | 0.001758 | 0.001992 | 0.001912 |
| mp_eval_if_not.test | RUN | 0.234058 | 0.985832 | 0.950026 | 0.002067 | 0.002040 | 0.001809 |
| mp_eval_or.test | RUN | 0.225667 | 0.547596 | 0.905049 | 0.001614 | 0.001935 | 0.001930 |
| mp_compose.test | RUN | 0.254694 | 1.593834 | 1.094580 | 0.001763 | 0.001921 | 0.001773 |
| mp_valid_and_true.test | RUN | 0.226899 | 0.836258 | 0.890660 | 0.001694 | 0.002184 | 0.002052 |
| mp_compose_sf.test | COMPILE | 0.057268 | 0.106062 | 0.218015 | — | — | — |
| integer_sequence.test | RUN | 0.277100 | 1.562392 | 1.241608 | 0.001977 | 0.001951 | 0.001962 |
| tuple_for_each.test | RUN | 0.230438 | 0.612085 | 0.954671 | 0.001748 | 0.002041 | 0.001618 |
| tuple_for_each_cx.test | COMPILE | 0.043726 | 0.089922 | 0.159145 | — | — | — |
| tuple_apply.test | RUN | 0.236513 | 0.599559 | 0.966266 | 0.001465 | 0.001839 | 0.002142 |
| tuple_apply_cx.test | COMPILE | 0.063071 | 0.131524 | 0.237174 | — | — | — |
| construct_from_tuple.test | RUN | 0.238402 | 0.640398 | 0.909895 | 0.002078 | 0.001949 | 0.002042 |
| construct_from_tuple_cx.test | COMPILE | 0.062855 | 0.131010 | 0.199211 | — | — | — |
| tuple_transform.test | RUN | 0.375015 | 1.292348 | 1.807427 | 0.001924 | 0.002095 | 0.001917 |
| tuple_transform_2.test | RUN | 0.321886 | 0.974192 | 1.685456 | 0.001854 | 0.001940 | 0.001843 |
| tuple_transform_cx.test | COMPILE | 0.054246 | 0.123608 | 0.227396 | — | — | — |
| mp_set_contains.test | RUN | 0.244715 | 0.856690 | 0.942453 | 0.001878 | 0.001859 | 0.002152 |
| mp_set_push_back.test | RUN | 0.316135 | 2.542878 | 1.493811 | 0.002002 | 0.002248 | 0.002144 |
| mp_set_push_front.test | RUN | 0.398277 | 2.987888 | 1.686551 | 0.001977 | 0.002078 | 0.001631 |
| mp_is_set.test | RUN | 0.244290 | 0.839169 | 0.967186 | 0.001831 | 0.002183 | 0.001920 |
| mp_set_union.test | RUN | 0.299061 | 2.114603 | 1.383464 | 0.001871 | 0.002104 | 0.001800 |
| mp_set_union_sf.test | RUN | 0.236199 | 0.674158 | 0.888334 | 0.002002 | 0.002241 | 0.001778 |
| mp_set_difference.test | RUN | 0.267503 | 1.685818 | 1.233322 | 0.001977 | 0.002140 | 0.002103 |
| mp_set_difference_sf.test | RUN | 0.228917 | 0.709992 | 0.871699 | 0.001756 | 0.002310 | 0.002032 |
| mp_set_intersection.test | RUN | 0.267019 | 1.680179 | 1.231487 | 0.001782 | 0.001847 | 0.002084 |
| mp_set_intersection_sf.test | RUN | 0.226537 | 0.683547 | 0.879099 | 0.001939 | 0.002180 | 0.002016 |
| mp_all.test | RUN | 0.233813 | 0.846673 | 0.941237 | 0.001980 | 0.002293 | 0.001872 |
| mp_all_2.test | RUN | 0.644893 | 1.748615 | 2.026728 | 0.002052 | 0.002188 | 0.002175 |
| mp_and.test | RUN | 0.231450 | 0.846644 | 0.908006 | 0.001935 | 0.001988 | 0.001852 |
| mp_any.test | RUN | 0.234196 | 0.784920 | 0.947914 | 0.001976 | 0.002315 | 0.002090 |
| mp_any_2.test | RUN | 0.635471 | 1.772058 | 2.009127 | 0.001969 | 0.001978 | 0.001686 |
| mp_or.test | RUN | 0.226651 | 0.786905 | 0.852644 | 0.001935 | 0.002004 | 0.002180 |
| mp_same.test | RUN | 0.429054 | 1.366410 | 1.405926 | 0.001874 | 0.001844 | 0.002018 |
| mp_plus.test | RUN | 0.250111 | 0.933260 | 0.928132 | 0.001687 | 0.001825 | 0.001512 |
| mp_less.test | RUN | 0.232703 | 0.839963 | 0.830297 | 0.001897 | 0.001968 | 0.001579 |
| mp_min.test | RUN | 0.230911 | 0.782390 | 0.929636 | 0.001931 | 0.001923 | 0.001859 |
| mp_max.test | RUN | 0.232951 | 0.845770 | 0.957905 | 0.001983 | 0.002030 | 0.001977 |
| mp_similar.test | RUN | 0.235456 | 0.828930 | 0.933976 | 0.001722 | 0.001766 | 0.002011 |
| mp_map_find.test | RUN | 0.267976 | 1.512587 | 1.211386 | 0.002010 | 0.001875 | 0.002106 |
| mp_map_find_2.test | RUN | 0.254440 | 0.628833 | 1.038573 | 0.001833 | 0.002181 | 0.001870 |
| mp_map_find_3.test | RUN | 0.248557 | 0.592901 | 1.014541 | 0.001904 | 0.001798 | 0.002152 |
| mp_map_find_4.test | RUN | 0.237439 | 0.566986 | 0.960020 | 0.001770 | 0.001932 | 0.002168 |
| mp_map_contains.test | RUN | 0.244021 | 0.867875 | 0.946559 | 0.002001 | 0.002143 | 0.002116 |
| mp_map_insert.test | RUN | 0.316228 | 2.804146 | 1.623758 | 0.001961 | 0.002144 | 0.001808 |
| mp_map_replace.test | RUN | 0.411665 | 3.184484 | 1.858279 | 0.002211 | 0.002134 | 0.002154 |
| mp_map_erase.test | RUN | 0.306000 | 2.379739 | 1.544712 | 0.001789 | 0.002108 | 0.001465 |
| mp_map_update.test | RUN | 0.274467 | 1.555851 | 1.251213 | 0.001896 | 0.002031 | 0.001756 |
| mp_map_update_q.test | RUN | 0.271999 | 1.574832 | 1.234454 | 0.002172 | 0.002057 | 0.001745 |
| mp_map_keys.test | RUN | 0.270900 | 1.380909 | 1.181437 | 0.001796 | 0.002036 | 0.001896 |
| mp_is_map.test | RUN | 0.248782 | 0.874295 | 1.012372 | 0.001894 | 0.001846 | 0.001667 |
| mp_bind.test | RUN | 0.300527 | 2.475233 | 1.425999 | 0.002055 | 0.001950 | 0.002123 |
| mp_bind_q.test | RUN | 0.270862 | 1.541057 | 1.169172 | 0.001885 | 0.002092 | 0.001721 |
| mp_bind_front.test | RUN | 0.266850 | 1.695619 | 1.158546 | 0.002090 | 0.002030 | 0.001928 |
| mp_bind_back.test | RUN | 0.271438 | 1.701397 | 1.117183 | 0.001809 | 0.002224 | 0.001721 |
| mp_lambda.test | RUN | 0.603021 | 4.934196 | 2.811246 | 0.001892 | 0.001411 | 0.002020 |
| mpl.test | RUN | 0.533038 | 1.344264 | 2.284363 | 0.001897 | 0.001924 | 0.001559 |
| mpl_list.test | RUN | 0.301177 | 1.019662 | 1.114603 | 0.001700 | 0.002006 | 0.001732 |
| mpl_tuple.test | RUN | 0.314801 | 1.053228 | 1.114552 | 0.001728 | 0.001838 | 0.002052 |
| version.test | RUN | 0.151265 | 0.380565 | 0.596677 | 0.001936 | 0.001852 | 0.001790 |
| mp11_version.test | RUN | 0.191438 | 0.434652 | 0.667488 | 0.001904 | 0.001910 | 0.001617 |
| list_version.test | RUN | 0.158415 | 0.396821 | 0.603914 | 0.001508 | 0.002045 | 0.001670 |
| algorithm_version.test | RUN | 0.176166 | 0.413798 | 0.647114 | 0.001971 | 0.001928 | 0.001802 |
| integral_version.test | RUN | 0.153570 | 0.373980 | 0.596715 | 0.001803 | 0.001894 | 0.001776 |
| utility_version.test | RUN | 0.157729 | 0.394317 | 0.609609 | 0.001780 | 0.001978 | 0.001967 |
| function_version.test | RUN | 0.161775 | 0.384088 | 0.597069 | 0.001587 | 0.001866 | 0.002228 |
| map_version.test | RUN | 0.178253 | 0.425188 | 0.683902 | 0.001853 | 0.001868 | 0.001726 |
| set_version.test | RUN | 0.163952 | 0.394130 | 0.629788 | 0.002225 | 0.001835 | 0.001893 |
| bind_version.test | RUN | 0.171248 | 0.419541 | 0.627274 | 0.001731 | 0.001894 | 0.001966 |
| integer_sequence_version.test | RUN | 0.154888 | 0.375240 | 0.426090 | 0.001978 | 0.001925 | 0.001470 |
| tuple_version.test | RUN | 0.182210 | 0.421858 | 0.523105 | 0.001492 | 0.001545 | 0.001320 |
| mpl_version.test | RUN | 0.116115 | 0.317120 | 0.553612 | 0.001389 | 0.001550 | 0.001522 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 0.998×, 1.004× | 1.006× |
| clang | 1.094× | 1.099×, 1.089× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45850603565).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.001153s | 0.001177s | 0.001200s | byte equality observed |
| bind_version.test | 10 | 0.001158s | 0.001157s | 0.001172s | byte equality observed |
| construct_from_tuple.test | 10 | 0.001165s | 0.001167s | 0.001232s | byte equality observed |
| function_version.test | 10 | 0.001152s | 0.001169s | 0.001199s | byte equality observed |
| integer_sequence.test | 10 | 0.001156s | 0.001165s | 0.001253s | byte equality observed |
| integer_sequence_version.test | 10 | 0.001156s | 0.001138s | 0.001225s | byte equality observed |
| integral.test | 10 | 0.001154s | 0.001153s | 0.001250s | byte equality observed |
| integral_version.test | 10 | 0.001164s | 0.001143s | 0.001299s | byte equality observed |
| list_version.test | 10 | 0.001154s | 0.001154s | 0.001285s | byte equality observed |
| map_version.test | 10 | 0.001160s | 0.001154s | 0.001254s | byte equality observed |
| mp11_version.test | 10 | 0.001151s | 0.001144s | 0.001244s | byte equality observed |
| mp_all.test | 10 | 0.001208s | 0.001155s | 0.001201s | byte equality observed |
| mp_all_2.test | 10 | 0.001215s | 0.001155s | 0.001209s | byte equality observed |
| mp_all_of.test | 10 | 0.001245s | 0.001164s | 0.001228s | byte equality observed |
| mp_all_of_q.test | 10 | 0.001251s | 0.001166s | 0.001229s | byte equality observed |
| mp_and.test | 10 | 0.001271s | 0.001176s | 0.001261s | byte equality observed |
| mp_any.test | 10 | 0.001229s | 0.001190s | 0.001263s | byte equality observed |
| mp_any_2.test | 10 | 0.001259s | 0.001172s | 0.001248s | byte equality observed |
| mp_any_of.test | 10 | 0.001234s | 0.001181s | 0.001213s | byte equality observed |
| mp_any_of_q.test | 10 | 0.001260s | 0.001158s | 0.001207s | byte equality observed |
| mp_append.test | 10 | 0.001273s | 0.001164s | 0.001201s | byte equality observed |
| mp_append_2.test | 10 | 0.001283s | 0.001167s | 0.001210s | byte equality observed |
| mp_append_3.test | 10 | 0.000571s | 0.000564s | 0.001218s | byte equality observed |
| mp_append_sf.test | 10 | 0.001248s | 0.001229s | 0.001216s | byte equality observed |
| mp_apply_q.test | 10 | 0.001232s | 0.001195s | 0.001214s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.001240s | 0.001208s | 0.001213s | byte equality observed |
| mp_assign.test | 10 | 0.001288s | 0.001293s | 0.001207s | byte equality observed |
| mp_assign_2.test | 10 | 0.000577s | 0.000564s | 0.001222s | byte equality observed |
| mp_at.test | 10 | 0.001274s | 0.001287s | 0.001231s | byte equality observed |
| mp_at_2.test | 10 | 0.000586s | 0.000567s | 0.001218s | byte equality observed |
| mp_at_sf.test | 10 | 0.001233s | 0.001257s | 0.001195s | byte equality observed |
| mp_back.test | 10 | 0.001247s | 0.001260s | 0.001247s | byte equality observed |
| mp_back_2.test | 10 | 0.000566s | 0.000564s | 0.001208s | byte equality observed |
| mp_bind.test | 10 | 0.001238s | 0.001229s | 0.001219s | byte equality observed |
| mp_bind_back.test | 10 | 0.001234s | 0.001234s | 0.001243s | byte equality observed |
| mp_bind_front.test | 10 | 0.001243s | 0.001249s | 0.001257s | byte equality observed |
| mp_bind_q.test | 10 | 0.001247s | 0.001254s | 0.001264s | byte equality observed |
| mp_clear.test | 10 | 0.001262s | 0.001256s | 0.001258s | byte equality observed |
| mp_clear_2.test | 10 | 0.000576s | 0.000583s | 0.001237s | byte equality observed |
| mp_compose.test | 10 | 0.001251s | 0.001254s | 0.001267s | byte equality observed |
| mp_cond.test | 10 | 0.001270s | 0.001223s | 0.001277s | byte equality observed |
| mp_cond_sf.test | 10 | 0.001276s | 0.001273s | 0.001264s | byte equality observed |
| mp_contains.test | 10 | 0.001270s | 0.001278s | 0.001270s | byte equality observed |
| mp_copy_if.test | 10 | 0.001256s | 0.001261s | 0.001244s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.001262s | 0.001283s | 0.001230s | byte equality observed |
| mp_count.test | 10 | 0.001218s | 0.001248s | 0.001241s | byte equality observed |
| mp_count_if.test | 10 | 0.001251s | 0.001267s | 0.001292s | byte equality observed |
| mp_count_if_q.test | 10 | 0.001231s | 0.001225s | 0.001241s | byte equality observed |
| mp_defer.test | 10 | 0.001238s | 0.001226s | 0.001248s | byte equality observed |
| mp_drop.test | 10 | 0.001263s | 0.001282s | 0.001235s | byte equality observed |
| mp_drop_2.test | 10 | 0.000571s | 0.000571s | 0.001243s | byte equality observed |
| mp_empty.test | 10 | 0.001264s | 0.001257s | 0.001252s | byte equality observed |
| mp_empty_2.test | 10 | 0.000568s | 0.000571s | 0.001245s | byte equality observed |
| mp_erase.test | 10 | 0.001276s | 0.001274s | 0.001244s | byte equality observed |
| mp_erase_2.test | 10 | 0.000583s | 0.000580s | 0.001256s | byte equality observed |
| mp_eval_if.test | 10 | 0.001227s | 0.001269s | 0.001218s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.001273s | 0.001254s | 0.001229s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.001244s | 0.001242s | 0.001280s | byte equality observed |
| mp_eval_or.test | 10 | 0.001262s | 0.001269s | 0.001260s | byte equality observed |
| mp_fill.test | 10 | 0.001235s | 0.001317s | 0.001225s | byte equality observed |
| mp_fill_2.test | 10 | 0.000573s | 0.000579s | 0.001272s | byte equality observed |
| mp_filter.test | 10 | 0.001206s | 0.001276s | 0.001245s | byte equality observed |
| mp_find.test | 10 | 0.001205s | 0.001254s | 0.001286s | byte equality observed |
| mp_find_if.test | 10 | 0.001213s | 0.001297s | 0.001251s | byte equality observed |
| mp_find_if_q.test | 10 | 0.001221s | 0.001257s | 0.001250s | byte equality observed |
| mp_flatten.test | 10 | 0.001278s | 0.001288s | 0.001278s | byte equality observed |
| mp_fold.test | 10 | 0.001289s | 0.001242s | 0.001308s | byte equality observed |
| mp_fold_q.test | 10 | 0.001260s | 0.001240s | 0.001250s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.001255s | 0.001294s | 0.001243s | byte equality observed |
| mp_for_each.test | 10 | 0.001239s | 0.001243s | 0.001243s | byte equality observed |
| mp_from_sequence.test | 10 | 0.001253s | 0.001264s | 0.001271s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.001286s | 0.001310s | 0.001284s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.001246s | 0.001254s | 0.001248s | byte equality observed |
| mp_front.test | 10 | 0.001301s | 0.001278s | 0.001228s | byte equality observed |
| mp_front_2.test | 10 | 0.000574s | 0.000588s | 0.001221s | byte equality observed |
| mp_identity.test | 10 | 0.001252s | 0.001236s | 0.001236s | byte equality observed |
| mp_if.test | 10 | 0.001227s | 0.001260s | 0.001260s | byte equality observed |
| mp_if_sf.test | 10 | 0.001253s | 0.001270s | 0.001235s | byte equality observed |
| mp_inherit.test | 10 | 0.001232s | 0.001248s | 0.001308s | byte equality observed |
| mp_insert.test | 10 | 0.001281s | 0.001301s | 0.001237s | byte equality observed |
| mp_insert_2.test | 10 | 0.000570s | 0.000578s | 0.001253s | byte equality observed |
| mp_intersperse.test | 10 | 0.001258s | 0.001237s | 0.001216s | byte equality observed |
| mp_invoke_q.test | 10 | 0.001272s | 0.001253s | 0.001234s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.001253s | 0.001218s | 0.001303s | byte equality observed |
| mp_iota.test | 10 | 0.001249s | 0.001317s | 0.001214s | byte equality observed |
| mp_iota_2.test | 10 | 0.001243s | 0.001288s | 0.001310s | byte equality observed |
| mp_is_list.test | 10 | 0.001215s | 0.001239s | 0.001272s | byte equality observed |
| mp_is_map.test | 10 | 0.001235s | 0.001256s | 0.001255s | byte equality observed |
| mp_is_set.test | 10 | 0.001235s | 0.001284s | 0.001238s | byte equality observed |
| mp_is_value_list.test | 10 | 0.001252s | 0.001290s | 0.001271s | byte equality observed |
| mp_iterate.test | 10 | 0.001221s | 0.001233s | 0.001258s | byte equality observed |
| mp_join.test | 10 | 0.001239s | 0.001257s | 0.001285s | byte equality observed |
| mp_lambda.test | 10 | 0.001279s | 0.001294s | 0.001263s | byte equality observed |
| mp_less.test | 10 | 0.001233s | 0.001265s | 0.001270s | byte equality observed |
| mp_list_c.test | 10 | 0.001266s | 0.001231s | 0.001227s | byte equality observed |
| mp_list_v.test | 10 | 0.000585s | 0.000575s | 0.001231s | byte equality observed |
| mp_map_contains.test | 10 | 0.001243s | 0.001256s | 0.001256s | byte equality observed |
| mp_map_erase.test | 10 | 0.001244s | 0.001291s | 0.001226s | byte equality observed |
| mp_map_find.test | 10 | 0.001248s | 0.001232s | 0.001239s | byte equality observed |
| mp_map_find_2.test | 10 | 0.001261s | 0.001265s | 0.001262s | byte equality observed |
| mp_map_find_3.test | 10 | 0.001213s | 0.001244s | 0.001271s | byte equality observed |
| mp_map_find_4.test | 10 | 0.001231s | 0.001215s | 0.001224s | byte equality observed |
| mp_map_insert.test | 10 | 0.001256s | 0.001265s | 0.001274s | byte equality observed |
| mp_map_keys.test | 10 | 0.001244s | 0.001317s | 0.001293s | byte equality observed |
| mp_map_replace.test | 10 | 0.001272s | 0.001349s | 0.001276s | byte equality observed |
| mp_map_update.test | 10 | 0.001267s | 0.001275s | 0.001253s | byte equality observed |
| mp_map_update_q.test | 10 | 0.001255s | 0.001237s | 0.001262s | byte equality observed |
| mp_max.test | 10 | 0.001268s | 0.001283s | 0.001231s | byte equality observed |
| mp_max_element.test | 10 | 0.001270s | 0.001275s | 0.001270s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000566s | 0.000570s | 0.001234s | byte equality observed |
| mp_max_element_q.test | 10 | 0.001233s | 0.001288s | 0.001230s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000575s | 0.000579s | 0.001281s | byte equality observed |
| mp_min.test | 10 | 0.001247s | 0.001251s | 0.001229s | byte equality observed |
| mp_min_element.test | 10 | 0.001240s | 0.001294s | 0.001222s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000584s | 0.000559s | 0.001240s | byte equality observed |
| mp_min_element_q.test | 10 | 0.001281s | 0.001257s | 0.001218s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000581s | 0.000575s | 0.001215s | byte equality observed |
| mp_none_of.test | 10 | 0.001267s | 0.001220s | 0.001222s | byte equality observed |
| mp_none_of_q.test | 10 | 0.001259s | 0.001228s | 0.001180s | byte equality observed |
| mp_not_fn.test | 10 | 0.001290s | 0.001266s | 0.001242s | byte equality observed |
| mp_nth_element.test | 10 | 0.001238s | 0.001258s | 0.001248s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.001246s | 0.001253s | 0.001212s | byte equality observed |
| mp_or.test | 10 | 0.001261s | 0.001250s | 0.001220s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.001263s | 0.001245s | 0.001213s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.001247s | 0.001241s | 0.001244s | byte equality observed |
| mp_partial_sum.test | 10 | 0.001256s | 0.001239s | 0.001281s | byte equality observed |
| mp_partition.test | 10 | 0.001306s | 0.001243s | 0.001282s | byte equality observed |
| mp_partition_q.test | 10 | 0.001260s | 0.001266s | 0.001267s | byte equality observed |
| mp_plus.test | 10 | 0.001248s | 0.001275s | 0.001274s | byte equality observed |
| mp_pop_back.test | 10 | 0.001281s | 0.001267s | 0.001221s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000565s | 0.000572s | 0.001238s | byte equality observed |
| mp_pop_front.test | 10 | 0.001259s | 0.001270s | 0.001229s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000565s | 0.000581s | 0.001188s | byte equality observed |
| mp_power_set.test | 10 | 0.001254s | 0.001217s | 0.001262s | byte equality observed |
| mp_product.test | 10 | 0.001260s | 0.001222s | 0.001295s | byte equality observed |
| mp_push_back.test | 10 | 0.001258s | 0.001279s | 0.001250s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000579s | 0.000558s | 0.001259s | byte equality observed |
| mp_push_front.test | 10 | 0.001266s | 0.001270s | 0.001244s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000572s | 0.000568s | 0.001223s | byte equality observed |
| mp_quote.test | 10 | 0.001244s | 0.001220s | 0.001252s | byte equality observed |
| mp_quote_trait.test | 10 | 0.001244s | 0.001305s | 0.001307s | byte equality observed |
| mp_remove.test | 10 | 0.001318s | 0.001229s | 0.001279s | byte equality observed |
| mp_remove_if.test | 10 | 0.001230s | 0.001233s | 0.001260s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.001247s | 0.001276s | 0.001286s | byte equality observed |
| mp_rename.test | 10 | 0.001257s | 0.001254s | 0.001261s | byte equality observed |
| mp_rename_2.test | 10 | 0.000588s | 0.000576s | 0.001201s | byte equality observed |
| mp_rename_v.test | 10 | 0.000566s | 0.000581s | 0.001273s | byte equality observed |
| mp_repeat.test | 10 | 0.001288s | 0.001266s | 0.001242s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000561s | 0.000570s | 0.001304s | byte equality observed |
| mp_repeat_3.test | 10 | 0.001205s | 0.001214s | 0.001241s | byte equality observed |
| mp_replace.test | 10 | 0.001193s | 0.001249s | 0.001259s | byte equality observed |
| mp_replace_at.test | 10 | 0.001232s | 0.001223s | 0.001283s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.001271s | 0.001265s | 0.001254s | byte equality observed |
| mp_replace_front.test | 10 | 0.001270s | 0.001297s | 0.001232s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000584s | 0.000576s | 0.001248s | byte equality observed |
| mp_replace_if.test | 10 | 0.001256s | 0.001237s | 0.001245s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.001243s | 0.001256s | 0.001313s | byte equality observed |
| mp_replace_second.test | 10 | 0.001256s | 0.001294s | 0.001255s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000580s | 0.000582s | 0.001263s | byte equality observed |
| mp_replace_third.test | 10 | 0.001250s | 0.001272s | 0.001226s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000562s | 0.000565s | 0.001263s | byte equality observed |
| mp_reverse.test | 10 | 0.001246s | 0.001271s | 0.001252s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.001228s | 0.001251s | 0.001256s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.001228s | 0.001260s | 0.001278s | byte equality observed |
| mp_rotate_left.test | 10 | 0.001277s | 0.001294s | 0.001268s | byte equality observed |
| mp_rotate_right.test | 10 | 0.001246s | 0.001280s | 0.001244s | byte equality observed |
| mp_same.test | 10 | 0.001249s | 0.001291s | 0.001284s | byte equality observed |
| mp_second.test | 10 | 0.001248s | 0.001254s | 0.001253s | byte equality observed |
| mp_second_2.test | 10 | 0.000566s | 0.000576s | 0.001265s | byte equality observed |
| mp_set_contains.test | 10 | 0.001291s | 0.001223s | 0.001235s | byte equality observed |
| mp_set_difference.test | 10 | 0.001264s | 0.001310s | 0.001273s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.001271s | 0.001238s | 0.001201s | byte equality observed |
| mp_set_intersection.test | 10 | 0.001248s | 0.001269s | 0.001240s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.001284s | 0.001249s | 0.001230s | byte equality observed |
| mp_set_push_back.test | 10 | 0.001235s | 0.001292s | 0.001281s | byte equality observed |
| mp_set_push_front.test | 10 | 0.001238s | 0.001274s | 0.001222s | byte equality observed |
| mp_set_union.test | 10 | 0.001243s | 0.001272s | 0.001263s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.001245s | 0.001233s | 0.001236s | byte equality observed |
| mp_similar.test | 10 | 0.001275s | 0.001240s | 0.001225s | byte equality observed |
| mp_size.test | 10 | 0.001264s | 0.001300s | 0.001225s | byte equality observed |
| mp_size_2.test | 10 | 0.000575s | 0.000585s | 0.001255s | byte equality observed |
| mp_slice.test | 10 | 0.001286s | 0.001302s | 0.001237s | byte equality observed |
| mp_slice_2.test | 10 | 0.000562s | 0.000553s | 0.001232s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.001294s | 0.001262s | 0.001283s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.001254s | 0.001310s | 0.001232s | byte equality observed |
| mp_sort.test | 10 | 0.001272s | 0.001290s | 0.001235s | byte equality observed |
| mp_sort_q.test | 10 | 0.001246s | 0.001223s | 0.001299s | byte equality observed |
| mp_split.test | 10 | 0.001299s | 0.001229s | 0.001233s | byte equality observed |
| mp_starts_with.test | 10 | 0.001253s | 0.001272s | 0.001243s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.001237s | 0.001298s | 0.001248s | byte equality observed |
| mp_take.test | 10 | 0.001262s | 0.001293s | 0.001284s | byte equality observed |
| mp_take_2.test | 10 | 0.000567s | 0.000568s | 0.001261s | byte equality observed |
| mp_third.test | 10 | 0.001278s | 0.001274s | 0.001215s | byte equality observed |
| mp_third_2.test | 10 | 0.000578s | 0.000581s | 0.001260s | byte equality observed |
| mp_transform.test | 10 | 0.001244s | 0.001268s | 0.001246s | byte equality observed |
| mp_transform_2.test | 10 | 0.001254s | 0.001206s | 0.001276s | byte equality observed |
| mp_transform_front.test | 10 | 0.001277s | 0.001258s | 0.001245s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000577s | 0.000583s | 0.001205s | byte equality observed |
| mp_transform_if.test | 10 | 0.001237s | 0.001269s | 0.001226s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.001220s | 0.001272s | 0.001243s | byte equality observed |
| mp_transform_q.test | 10 | 0.001233s | 0.001248s | 0.001278s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.001212s | 0.001208s | 0.001289s | byte equality observed |
| mp_transform_second.test | 10 | 0.001263s | 0.001261s | 0.001267s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000578s | 0.000568s | 0.001235s | byte equality observed |
| mp_transform_sf.test | 10 | 0.001212s | 0.001272s | 0.001253s | byte equality observed |
| mp_transform_third.test | 10 | 0.001244s | 0.001239s | 0.001235s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000562s | 0.000568s | 0.001220s | byte equality observed |
| mp_unique.test | 10 | 0.001263s | 0.001254s | 0.001223s | byte equality observed |
| mp_unique_if.test | 10 | 0.001241s | 0.001238s | 0.001235s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.001268s | 0.001234s | 0.001317s | byte equality observed |
| mp_valid.test | 10 | 0.001264s | 0.001268s | 0.001229s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.001253s | 0.001286s | 0.001261s | byte equality observed |
| mp_value.test | 10 | 0.000572s | 0.000559s | 0.001228s | byte equality observed |
| mp_with_index.test | 10 | 0.001630s | 0.001635s | 0.001562s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000563s | 0.000581s | 0.001218s | byte equality observed |
| mpl.test | 10 | 0.001279s | 0.001249s | 0.001260s | byte equality observed |
| mpl_list.test | 10 | 0.001267s | 0.001279s | 0.001263s | byte equality observed |
| mpl_tuple.test | 10 | 0.001279s | 0.001277s | 0.001284s | byte equality observed |
| mpl_version.test | 10 | 0.001275s | 0.001274s | 0.001258s | byte equality observed |
| set_version.test | 10 | 0.001234s | 0.001245s | 0.001227s | byte equality observed |
| tuple_apply.test | 10 | 0.001260s | 0.001257s | 0.001251s | byte equality observed |
| tuple_for_each.test | 10 | 0.001232s | 0.001253s | 0.001245s | byte equality observed |
| tuple_transform.test | 10 | 0.001246s | 0.001246s | 0.001272s | byte equality observed |
| tuple_transform_2.test | 10 | 0.001251s | 0.001250s | 0.001228s | byte equality observed |
| tuple_version.test | 10 | 0.001250s | 0.001301s | 0.001232s | byte equality observed |
| utility_version.test | 10 | 0.001219s | 0.001209s | 0.001283s | byte equality observed |
| version.test | 10 | 0.001271s | 0.001292s | 0.001290s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45850603565).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
