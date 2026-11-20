# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.049278 | 0.098420 | 0.193639 | — | — | — |
| complex_h.test | COMPILE | 0.207070 | 0.426367 | 0.746502 | — | — | — |
| mp_size.test | RUN | 0.242412 | 1.341967 | 0.947937 | 0.001950 | 0.001957 | 0.002071 |
| mp_size_2.test | RUN | 0.020934 | 0.046183 | 0.075474 | 0.000850 | 0.000930 | 0.002105 |
| mp_empty.test | RUN | 0.228049 | 0.841225 | 0.797583 | 0.002048 | 0.002091 | 0.001880 |
| mp_empty_2.test | RUN | 0.022184 | 0.050740 | 0.084056 | 0.000665 | 0.000897 | 0.002040 |
| mp_assign.test | RUN | 0.259737 | 1.692872 | 1.162209 | 0.001847 | 0.002209 | 0.002329 |
| mp_assign_2.test | RUN | 0.021556 | 0.047713 | 0.081166 | 0.000796 | 0.000921 | 0.001826 |
| mp_clear.test | RUN | 0.225189 | 0.747853 | 0.931941 | 0.001788 | 0.001896 | 0.001676 |
| mp_clear_2.test | RUN | 0.020202 | 0.051806 | 0.072450 | 0.000844 | 0.000673 | 0.002101 |
| mp_front.test | RUN | 0.240380 | 1.193756 | 0.925337 | 0.001862 | 0.002156 | 0.002082 |
| mp_front_2.test | RUN | 0.020890 | 0.042855 | 0.078830 | 0.000851 | 0.000696 | 0.001888 |
| mp_pop_front.test | RUN | 0.239059 | 1.234214 | 0.953994 | 0.001978 | 0.001728 | 0.001955 |
| mp_pop_front_2.test | RUN | 0.018973 | 0.048857 | 0.078669 | 0.000769 | 0.000851 | 0.002112 |
| mp_second.test | RUN | 0.235472 | 0.789959 | 0.911887 | 0.001866 | 0.001770 | 0.001787 |
| mp_second_2.test | RUN | 0.022910 | 0.051206 | 0.083818 | 0.000861 | 0.000925 | 0.002082 |
| mp_third.test | RUN | 0.230725 | 0.735849 | 0.913534 | 0.002139 | 0.001957 | 0.002245 |
| mp_third_2.test | RUN | 0.019983 | 0.052135 | 0.070153 | 0.000880 | 0.000745 | 0.002036 |
| mp_push_front.test | RUN | 0.300600 | 2.582458 | 1.550779 | 0.001831 | 0.001876 | 0.002125 |
| mp_push_front_2.test | RUN | 0.020125 | 0.048287 | 0.082791 | 0.000802 | 0.000866 | 0.002106 |
| mp_push_back.test | RUN | 0.302788 | 2.578272 | 1.471535 | 0.001856 | 0.001808 | 0.002109 |
| mp_push_back_2.test | RUN | 0.022049 | 0.048719 | 0.083832 | 0.000844 | 0.000873 | 0.002084 |
| mp_rename.test | RUN | 0.286830 | 2.376829 | 1.346142 | 0.001875 | 0.002129 | 0.002031 |
| mp_rename_2.test | RUN | 0.021043 | 0.051552 | 0.084417 | 0.000702 | 0.000941 | 0.002029 |
| mp_append.test | RUN | 0.282558 | 2.689288 | 1.441669 | 0.002076 | 0.002194 | 0.002256 |
| mp_append_2.test | RUN | 0.622990 | 5.985283 | 1.860321 | 0.001832 | 0.001882 | 0.001917 |
| mp_append_3.test | RUN | 0.021856 | 0.050857 | 0.082102 | 0.000887 | 0.000831 | 0.001951 |
| mp_append_sf.test | RUN | 0.217928 | 0.708206 | 0.814255 | 0.002065 | 0.002174 | 0.001957 |
| mp_replace_front.test | RUN | 0.275949 | 1.923728 | 1.231713 | 0.001960 | 0.002154 | 0.002173 |
| mp_replace_front_2.test | RUN | 0.022265 | 0.049346 | 0.074579 | 0.000704 | 0.000874 | 0.001713 |
| mp_replace_second.test | RUN | 0.255612 | 1.248910 | 1.073897 | 0.002036 | 0.002185 | 0.001998 |
| mp_replace_second_2.test | RUN | 0.020593 | 0.049195 | 0.079824 | 0.000716 | 0.000864 | 0.002106 |
| mp_replace_third.test | RUN | 0.251418 | 1.027052 | 0.942012 | 0.002063 | 0.001847 | 0.002118 |
| mp_replace_third_2.test | RUN | 0.022319 | 0.048092 | 0.082542 | 0.000790 | 0.000677 | 0.002148 |
| mp_apply_q.test | RUN | 0.278024 | 2.365669 | 1.382846 | 0.002024 | 0.001848 | 0.002044 |
| mp_apply_q_sf.test | RUN | 0.221323 | 0.709389 | 0.891447 | 0.001840 | 0.002020 | 0.002084 |
| mp_is_list.test | RUN | 0.225160 | 0.818483 | 0.835515 | 0.002235 | 0.002077 | 0.002020 |
| mp_list_c.test | RUN | 0.235620 | 1.002108 | 0.946536 | 0.001960 | 0.002292 | 0.002217 |
| mp_transform_front.test | RUN | 0.267798 | 1.912919 | 1.154973 | 0.001628 | 0.002042 | 0.002149 |
| mp_transform_front_2.test | RUN | 0.021446 | 0.048468 | 0.083335 | 0.000696 | 0.000837 | 0.002130 |
| mp_transform_second.test | RUN | 0.255575 | 1.666342 | 0.994549 | 0.002076 | 0.002017 | 0.001952 |
| mp_transform_second_2.test | RUN | 0.022364 | 0.047488 | 0.079206 | 0.000757 | 0.000930 | 0.002204 |
| mp_transform_third.test | RUN | 0.244686 | 1.286271 | 0.958120 | 0.001906 | 0.001767 | 0.002025 |
| mp_transform_third_2.test | RUN | 0.022858 | 0.046920 | 0.081712 | 0.000692 | 0.000807 | 0.001684 |
| mp_list_v.test | RUN | 0.022692 | 0.047917 | 0.071506 | 0.000826 | 0.000814 | 0.001854 |
| mp_rename_v.test | RUN | 0.020506 | 0.048460 | 0.072706 | 0.000686 | 0.000831 | 0.002148 |
| mp_is_value_list.test | RUN | 0.224792 | 0.522676 | 0.821759 | 0.002086 | 0.001994 | 0.002184 |
| mp_transform.test | RUN | 0.516496 | 4.047481 | 2.367089 | 0.002170 | 0.002110 | 0.001999 |
| mp_transform_2.test | RUN | 0.209792 | 0.483307 | 0.779288 | 0.002058 | 0.002024 | 0.001886 |
| mp_transform_q.test | RUN | 0.499434 | 3.818199 | 2.311383 | 0.001869 | 0.002274 | 0.002176 |
| mp_transform_q_2.test | RUN | 0.542081 | 1.248582 | 2.966415 | 0.002000 | 0.001832 | 0.001841 |
| mp_transform_sf.test | RUN | 0.245370 | 0.726687 | 0.940175 | 0.002114 | 0.001978 | 0.002204 |
| mp_transform_if.test | RUN | 0.292468 | 1.957229 | 1.313919 | 0.002064 | 0.002010 | 0.001788 |
| mp_transform_if_q.test | RUN | 0.293112 | 1.950190 | 1.342110 | 0.001758 | 0.002021 | 0.001972 |
| mp_filter.test | RUN | 0.262336 | 1.173551 | 1.043312 | 0.002061 | 0.001970 | 0.001707 |
| mp_fill.test | RUN | 0.245985 | 0.887505 | 0.996576 | 0.001922 | 0.001963 | 0.001895 |
| mp_fill_2.test | RUN | 0.039600 | 0.080313 | 0.126880 | 0.000746 | 0.000969 | 0.002124 |
| mp_count.test | RUN | 0.448984 | 2.086605 | 1.505609 | 0.002049 | 0.001916 | 0.002115 |
| mp_count_if.test | RUN | 0.469143 | 2.109731 | 1.675582 | 0.001974 | 0.002056 | 0.001758 |
| mp_count_if_q.test | RUN | 0.250918 | 1.334284 | 0.937184 | 0.001810 | 0.002033 | 0.002030 |
| mp_contains.test | RUN | 0.237238 | 0.848960 | 0.861125 | 0.001840 | 0.002050 | 0.002146 |
| mp_starts_with.test | RUN | 0.240182 | 0.833185 | 0.969556 | 0.002124 | 0.002060 | 0.001699 |
| mp_starts_with_sf.test | RUN | 0.233378 | 0.742587 | 0.932882 | 0.001814 | 0.002028 | 0.001555 |
| mp_repeat.test | RUN | 0.340441 | 3.468151 | 1.566909 | 0.002116 | 0.002144 | 0.002136 |
| mp_repeat_2.test | RUN | 0.039546 | 0.082108 | 0.145645 | 0.000711 | 0.000927 | 0.001984 |
| mp_repeat_3.test | RUN | 0.278598 | 0.476906 | 0.852064 | 0.001798 | 0.002258 | 0.002004 |
| mp_product.test | RUN | 0.282471 | 2.078815 | 1.239735 | 0.001914 | 0.002060 | 0.001684 |
| mp_drop.test | RUN | 0.299060 | 2.589319 | 1.426934 | 0.002048 | 0.001958 | 0.002116 |
| mp_drop_2.test | RUN | 0.036368 | 0.082361 | 0.143371 | 0.000792 | 0.000870 | 0.001872 |
| mp_iota.test | RUN | 0.282699 | 2.164948 | 1.196682 | 0.002100 | 0.002132 | 0.002165 |
| mp_iota_2.test | RUN | 0.294101 | 2.673089 | 1.407394 | 0.001928 | 0.002028 | 0.002003 |
| mp_at.test | RUN | 0.247382 | 1.159679 | 1.056932 | 0.001704 | 0.002208 | 0.002100 |
| mp_at_2.test | RUN | 0.039169 | 0.079270 | 0.145095 | 0.000724 | 0.000834 | 0.002148 |
| mp_at_sf.test | RUN | 0.236737 | 0.742681 | 0.890343 | 0.002276 | 0.001900 | 0.002090 |
| mp_take.test | RUN | 0.385805 | 3.372872 | 1.668351 | 0.001999 | 0.001948 | 0.001961 |
| mp_take_2.test | RUN | 0.039356 | 0.079677 | 0.118786 | 0.000978 | 0.000968 | 0.002022 |
| mp_slice.test | RUN | 0.451211 | 3.416724 | 2.062635 | 0.001997 | 0.002086 | 0.001665 |
| mp_slice_2.test | RUN | 0.037222 | 0.081663 | 0.148819 | 0.000805 | 0.000943 | 0.002177 |
| mp_replace.test | RUN | 0.289870 | 1.769452 | 1.337035 | 0.001977 | 0.002400 | 0.002103 |
| mp_replace_if.test | RUN | 0.285817 | 1.550587 | 1.286866 | 0.002030 | 0.001966 | 0.001820 |
| mp_replace_if_q.test | RUN | 0.287560 | 1.556718 | 1.265356 | 0.002028 | 0.002044 | 0.002058 |
| mp_copy_if.test | RUN | 0.285311 | 2.192597 | 1.188909 | 0.002026 | 0.002388 | 0.002218 |
| mp_copy_if_q.test | RUN | 0.283097 | 2.209460 | 1.223947 | 0.002025 | 0.001959 | 0.001852 |
| mp_remove.test | RUN | 0.268292 | 1.443264 | 1.247265 | 0.002082 | 0.001809 | 0.001741 |
| mp_remove_if.test | RUN | 0.281547 | 2.304649 | 1.285365 | 0.002172 | 0.002140 | 0.002023 |
| mp_remove_if_q.test | RUN | 0.286830 | 2.281450 | 1.272140 | 0.001934 | 0.001882 | 0.002226 |
| mp_partition.test | RUN | 0.283146 | 2.165939 | 1.372076 | 0.002090 | 0.001824 | 0.001958 |
| mp_partition_q.test | RUN | 0.290282 | 2.182368 | 1.407210 | 0.002028 | 0.002015 | 0.002092 |
| mp_sort.test | RUN | 0.278707 | 1.544092 | 1.221950 | 0.001999 | 0.001989 | 0.002112 |
| mp_sort_q.test | RUN | 0.273612 | 1.569258 | 1.199747 | 0.002000 | 0.001768 | 0.002060 |
| mp_find.test | RUN | 0.261679 | 1.682218 | 1.093238 | 0.002186 | 0.001919 | 0.001757 |
| mp_find_if.test | RUN | 0.260755 | 1.557363 | 1.049357 | 0.001862 | 0.001862 | 0.001796 |
| mp_find_if_q.test | RUN | 0.276735 | 1.747492 | 1.250676 | 0.001804 | 0.002020 | 0.002112 |
| mp_reverse.test | RUN | 0.565072 | 4.421425 | 2.283217 | 0.001966 | 0.002097 | 0.002252 |
| mp_fold.test | RUN | 0.918602 | 3.408232 | 5.539745 | 0.001952 | 0.002081 | 0.002015 |
| mp_fold_q.test | RUN | 0.267591 | 1.541885 | 1.201547 | 0.001937 | 0.002208 | 0.002155 |
| mp_fold_q_sf.test | RUN | 0.243559 | 0.756881 | 0.932095 | 0.001878 | 0.002158 | 0.001984 |
| mp_reverse_fold.test | RUN | 0.449734 | 3.371803 | 1.616714 | 0.002171 | 0.002023 | 0.001910 |
| mp_reverse_fold_q.test | RUN | 0.272493 | 1.884444 | 1.231968 | 0.001775 | 0.002054 | 0.001868 |
| mp_unique.test | RUN | 0.276639 | 1.706098 | 1.218893 | 0.001938 | 0.002024 | 0.002032 |
| mp_unique_if.test | RUN | 0.471286 | 3.475969 | 1.841490 | 0.001710 | 0.001960 | 0.001774 |
| mp_unique_if_q.test | RUN | 0.415710 | 3.438375 | 1.578273 | 0.001934 | 0.002215 | 0.002246 |
| mp_all_of.test | RUN | 0.614065 | 1.927447 | 1.970761 | 0.002143 | 0.001962 | 0.002184 |
| mp_all_of_q.test | RUN | 0.242480 | 0.859497 | 0.903574 | 0.001680 | 0.002104 | 0.002248 |
| mp_any_of.test | RUN | 0.644100 | 1.954880 | 1.982334 | 0.001774 | 0.002056 | 0.001701 |
| mp_any_of_q.test | RUN | 0.236215 | 0.853811 | 0.975807 | 0.001984 | 0.002188 | 0.002287 |
| mp_none_of.test | RUN | 0.608200 | 1.929034 | 1.873505 | 0.001284 | 0.001981 | 0.002078 |
| mp_none_of_q.test | RUN | 0.233165 | 0.845873 | 0.942960 | 0.001919 | 0.002212 | 0.001849 |
| mp_replace_at.test | RUN | 0.287321 | 1.614985 | 1.336255 | 0.002085 | 0.002020 | 0.002187 |
| mp_replace_at_c.test | RUN | 0.297056 | 1.682846 | 1.385961 | 0.001858 | 0.002108 | 0.001739 |
| mp_for_each.test | RUN | 0.275069 | 1.274547 | 1.549516 | 0.001750 | 0.002078 | 0.002303 |
| mp_insert.test | RUN | 0.428805 | 3.387732 | 1.857928 | 0.002006 | 0.002086 | 0.001804 |
| mp_insert_2.test | RUN | 0.037675 | 0.074057 | 0.144997 | 0.000703 | 0.000737 | 0.002147 |
| mp_erase.test | RUN | 0.458187 | 3.607684 | 2.200426 | 0.002030 | 0.002158 | 0.001944 |
| mp_erase_2.test | RUN | 0.039874 | 0.074541 | 0.126217 | 0.000754 | 0.000895 | 0.002022 |
| mp_with_index.test | RUN | 0.652679 | 7.401978 | 4.901481 | 0.002700 | 0.002365 | 0.002086 |
| mp_with_index_cx.test | RUN | 0.004301 | 0.023768 | 0.031920 | 0.000923 | 0.000895 | 0.002080 |
| mp_from_sequence.test | RUN | 0.284836 | 1.962187 | 1.246815 | 0.002076 | 0.002107 | 0.002180 |
| mp_from_sequence_2.test | RUN | 0.298423 | 2.271445 | 1.461785 | 0.001925 | 0.001790 | 0.002083 |
| mp_from_sequence_3.test | RUN | 0.242111 | 1.030369 | 1.050250 | 0.001930 | 0.002110 | 0.001816 |
| mp_min_element.test | RUN | 0.243747 | 0.933590 | 0.983389 | 0.002192 | 0.002239 | 0.002091 |
| mp_min_element_2.test | RUN | 0.038640 | 0.078455 | 0.142035 | 0.000729 | 0.000835 | 0.001975 |
| mp_min_element_q.test | RUN | 0.238186 | 0.930592 | 0.912242 | 0.001965 | 0.002084 | 0.001993 |
| mp_min_element_q_2.test | RUN | 0.040473 | 0.073165 | 0.127954 | 0.000878 | 0.000686 | 0.002170 |
| mp_max_element.test | RUN | 0.245107 | 0.945911 | 0.903963 | 0.001869 | 0.002283 | 0.001743 |
| mp_max_element_2.test | RUN | 0.035501 | 0.073158 | 0.146293 | 0.000838 | 0.000873 | 0.002050 |
| mp_max_element_q.test | RUN | 0.247294 | 0.942483 | 0.914694 | 0.002068 | 0.002227 | 0.001663 |
| mp_max_element_q_2.test | RUN | 0.035223 | 0.078529 | 0.140068 | 0.000822 | 0.000829 | 0.001778 |
| mp_nth_element.test | RUN | 0.277634 | 1.288218 | 1.148414 | 0.001854 | 0.002142 | 0.001615 |
| mp_nth_element_q.test | RUN | 0.268613 | 1.306086 | 1.149173 | 0.001876 | 0.001691 | 0.001961 |
| mp_back.test | RUN | 0.269168 | 1.104460 | 1.086117 | 0.001919 | 0.002323 | 0.002166 |
| mp_back_2.test | RUN | 0.038753 | 0.075266 | 0.147055 | 0.000718 | 0.000919 | 0.002021 |
| mp_pop_back.test | RUN | 0.697327 | 6.861753 | 2.142447 | 0.001788 | 0.001864 | 0.001716 |
| mp_pop_back_2.test | RUN | 0.038694 | 0.081644 | 0.140077 | 0.000825 | 0.000941 | 0.002024 |
| mp_flatten.test | RUN | 0.310166 | 2.481439 | 1.513499 | 0.002308 | 0.002127 | 0.002040 |
| mp_rotate_left.test | RUN | 0.312998 | 2.658964 | 1.526933 | 0.001892 | 0.001892 | 0.001847 |
| mp_rotate_right.test | RUN | 0.315635 | 2.643002 | 1.481447 | 0.001831 | 0.002005 | 0.002067 |
| mp_power_set.test | RUN | 0.314628 | 2.556179 | 1.471624 | 0.002184 | 0.002067 | 0.002156 |
| mp_partial_sum.test | RUN | 0.400660 | 3.422905 | 1.672250 | 0.002168 | 0.002096 | 0.001688 |
| mp_iterate.test | RUN | 0.278546 | 1.070688 | 1.226907 | 0.001898 | 0.002166 | 0.001961 |
| mp_pairwise_fold.test | RUN | 0.306262 | 2.314015 | 1.499522 | 0.001885 | 0.002223 | 0.002129 |
| mp_pairwise_fold_q.test | RUN | 0.237135 | 0.689127 | 0.953356 | 0.002116 | 0.001866 | 0.002239 |
| mp_sliding_fold.test | RUN | 0.579190 | 4.417804 | 2.741959 | 0.002149 | 0.002012 | 0.001918 |
| mp_sliding_fold_q.test | RUN | 0.567578 | 4.431725 | 2.724811 | 0.001840 | 0.001954 | 0.001720 |
| mp_intersperse.test | RUN | 0.288080 | 1.704962 | 1.334168 | 0.002116 | 0.002106 | 0.002030 |
| mp_split.test | RUN | 0.408926 | 3.263006 | 1.791136 | 0.001855 | 0.002103 | 0.002028 |
| mp_join.test | RUN | 0.317194 | 2.729613 | 1.620786 | 0.001800 | 0.002110 | 0.002263 |
| integral.test | RUN | 0.252276 | 1.230442 | 1.010422 | 0.001758 | 0.002261 | 0.002064 |
| mp_value.test | RUN | 0.017110 | 0.038894 | 0.059797 | 0.000808 | 0.000803 | 0.001962 |
| mp_identity.test | RUN | 0.242216 | 1.109573 | 0.975593 | 0.002037 | 0.002200 | 0.002242 |
| mp_inherit.test | RUN | 0.236366 | 0.813149 | 0.857972 | 0.002228 | 0.002014 | 0.001956 |
| mp_if.test | RUN | 0.241061 | 0.926829 | 0.904106 | 0.001806 | 0.001804 | 0.002006 |
| mp_if_sf.test | RUN | 0.218947 | 0.692389 | 0.778255 | 0.002084 | 0.002022 | 0.002178 |
| mp_eval_if.test | RUN | 0.235163 | 0.965882 | 0.965764 | 0.001821 | 0.001790 | 0.001914 |
| mp_eval_if_sf.test | RUN | 0.218399 | 0.698182 | 0.868625 | 0.001876 | 0.001882 | 0.001980 |
| mp_valid.test | RUN | 0.230794 | 0.712384 | 0.805626 | 0.001767 | 0.001903 | 0.002044 |
| mp_defer.test | RUN | 0.247296 | 1.202565 | 0.952070 | 0.001797 | 0.002094 | 0.001532 |
| mp_quote.test | RUN | 0.243164 | 1.177571 | 1.067023 | 0.002122 | 0.001675 | 0.001879 |
| mp_invoke_q.test | RUN | 0.255104 | 1.540001 | 1.157407 | 0.002116 | 0.002096 | 0.001872 |
| mp_invoke_q_sf.test | RUN | 0.219640 | 0.708671 | 0.821522 | 0.001818 | 0.002124 | 0.001825 |
| mp_quote_trait.test | RUN | 0.239727 | 1.264489 | 1.047562 | 0.002004 | 0.001804 | 0.002044 |
| mp_cond.test | RUN | 0.225641 | 0.815028 | 0.893413 | 0.001895 | 0.002013 | 0.001760 |
| mp_cond_sf.test | RUN | 0.219549 | 0.710440 | 0.864436 | 0.001882 | 0.001778 | 0.002101 |
| mp_not_fn.test | RUN | 0.217098 | 0.691620 | 0.873722 | 0.002014 | 0.002156 | 0.001908 |
| mp_eval_if_not.test | RUN | 0.234721 | 0.987793 | 0.959714 | 0.001935 | 0.002184 | 0.002238 |
| mp_eval_or.test | RUN | 0.225308 | 0.549147 | 0.878451 | 0.002246 | 0.002102 | 0.001744 |
| mp_compose.test | RUN | 0.249543 | 1.586168 | 1.081053 | 0.002107 | 0.001916 | 0.002038 |
| mp_valid_and_true.test | RUN | 0.228118 | 0.837269 | 0.890276 | 0.002014 | 0.002145 | 0.002205 |
| mp_compose_sf.test | COMPILE | 0.058538 | 0.102972 | 0.216865 | — | — | — |
| integer_sequence.test | RUN | 0.269191 | 1.525770 | 1.204009 | 0.002086 | 0.002268 | 0.001997 |
| tuple_for_each.test | RUN | 0.227874 | 0.609672 | 0.924984 | 0.001830 | 0.001954 | 0.002258 |
| tuple_for_each_cx.test | COMPILE | 0.043582 | 0.091304 | 0.164102 | — | — | — |
| tuple_apply.test | RUN | 0.230663 | 0.600247 | 0.941601 | 0.002002 | 0.001924 | 0.001796 |
| tuple_apply_cx.test | COMPILE | 0.062854 | 0.125591 | 0.236437 | — | — | — |
| construct_from_tuple.test | RUN | 0.234644 | 0.653218 | 0.890132 | 0.002018 | 0.002206 | 0.001826 |
| construct_from_tuple_cx.test | COMPILE | 0.063730 | 0.125608 | 0.191632 | — | — | — |
| tuple_transform.test | RUN | 0.373080 | 1.302352 | 1.790874 | 0.002358 | 0.001822 | 0.001652 |
| tuple_transform_2.test | RUN | 0.322354 | 0.971294 | 1.706676 | 0.001602 | 0.001842 | 0.001805 |
| tuple_transform_cx.test | COMPILE | 0.055412 | 0.120722 | 0.205861 | — | — | — |
| mp_set_contains.test | RUN | 0.237486 | 0.843659 | 0.927226 | 0.001889 | 0.002061 | 0.002071 |
| mp_set_push_back.test | RUN | 0.295096 | 2.522169 | 1.507282 | 0.002132 | 0.001800 | 0.002058 |
| mp_set_push_front.test | RUN | 0.392868 | 3.017415 | 1.699648 | 0.001958 | 0.002012 | 0.001699 |
| mp_is_set.test | RUN | 0.247051 | 0.849907 | 0.929041 | 0.001996 | 0.002246 | 0.002038 |
| mp_set_union.test | RUN | 0.285509 | 2.115973 | 1.454710 | 0.002129 | 0.002222 | 0.002141 |
| mp_set_union_sf.test | RUN | 0.219148 | 0.690748 | 0.891701 | 0.002076 | 0.001932 | 0.001763 |
| mp_set_difference.test | RUN | 0.272488 | 1.700919 | 1.201072 | 0.001932 | 0.002202 | 0.002198 |
| mp_set_difference_sf.test | RUN | 0.227541 | 0.703392 | 0.876794 | 0.002062 | 0.001994 | 0.001762 |
| mp_set_intersection.test | RUN | 0.270625 | 1.685627 | 1.199356 | 0.001960 | 0.002228 | 0.001900 |
| mp_set_intersection_sf.test | RUN | 0.226660 | 0.694097 | 0.854018 | 0.001868 | 0.002119 | 0.002222 |
| mp_all.test | RUN | 0.226791 | 0.833378 | 0.896753 | 0.002171 | 0.002250 | 0.002176 |
| mp_all_2.test | RUN | 0.640478 | 1.756703 | 1.951218 | 0.002064 | 0.002268 | 0.002058 |
| mp_and.test | RUN | 0.219252 | 0.840294 | 0.896123 | 0.002102 | 0.001951 | 0.002233 |
| mp_any.test | RUN | 0.234136 | 0.784458 | 0.876515 | 0.002038 | 0.001998 | 0.001666 |
| mp_any_2.test | RUN | 0.662678 | 1.773040 | 1.968926 | 0.001665 | 0.002112 | 0.002345 |
| mp_or.test | RUN | 0.247847 | 0.786884 | 0.863801 | 0.001868 | 0.002137 | 0.002274 |
| mp_same.test | RUN | 0.453587 | 1.368995 | 1.335005 | 0.001613 | 0.002004 | 0.001891 |
| mp_plus.test | RUN | 0.234665 | 0.922535 | 0.988642 | 0.002134 | 0.002086 | 0.002082 |
| mp_less.test | RUN | 0.235734 | 0.824406 | 0.892943 | 0.002060 | 0.002049 | 0.002156 |
| mp_min.test | RUN | 0.225048 | 0.772513 | 0.886980 | 0.001976 | 0.002195 | 0.002140 |
| mp_max.test | RUN | 0.230457 | 0.844813 | 0.920195 | 0.001843 | 0.002084 | 0.002066 |
| mp_similar.test | RUN | 0.226682 | 0.834673 | 0.893764 | 0.001839 | 0.002039 | 0.002168 |
| mp_map_find.test | RUN | 0.265206 | 1.504065 | 1.176695 | 0.001972 | 0.001906 | 0.002178 |
| mp_map_find_2.test | RUN | 0.253274 | 0.625323 | 0.996416 | 0.001604 | 0.002140 | 0.002088 |
| mp_map_find_3.test | RUN | 0.255816 | 0.604821 | 1.001238 | 0.001763 | 0.001812 | 0.002086 |
| mp_map_find_4.test | RUN | 0.239968 | 0.578497 | 0.914503 | 0.002041 | 0.001741 | 0.002142 |
| mp_map_contains.test | RUN | 0.241186 | 0.845099 | 0.939601 | 0.002058 | 0.002140 | 0.002138 |
| mp_map_insert.test | RUN | 0.319730 | 2.801670 | 1.604508 | 0.001992 | 0.002099 | 0.002022 |
| mp_map_replace.test | RUN | 0.408985 | 3.167773 | 1.842053 | 0.002122 | 0.002054 | 0.001696 |
| mp_map_erase.test | RUN | 0.312952 | 2.351003 | 1.541238 | 0.002142 | 0.002062 | 0.002167 |
| mp_map_update.test | RUN | 0.272820 | 1.541494 | 1.240256 | 0.002154 | 0.002037 | 0.001996 |
| mp_map_update_q.test | RUN | 0.278912 | 1.579769 | 1.224654 | 0.002226 | 0.001727 | 0.002080 |
| mp_map_keys.test | RUN | 0.265370 | 1.392604 | 1.195830 | 0.002140 | 0.001762 | 0.001948 |
| mp_is_map.test | RUN | 0.256241 | 0.869390 | 0.997179 | 0.002010 | 0.001917 | 0.002028 |
| mp_bind.test | RUN | 0.300154 | 2.480731 | 1.417307 | 0.002053 | 0.001794 | 0.002138 |
| mp_bind_q.test | RUN | 0.278729 | 1.549193 | 1.179055 | 0.002288 | 0.001952 | 0.002156 |
| mp_bind_front.test | RUN | 0.260844 | 1.616972 | 1.135487 | 0.002026 | 0.001732 | 0.002129 |
| mp_bind_back.test | RUN | 0.280179 | 1.621596 | 1.095817 | 0.001812 | 0.001854 | 0.001817 |
| mp_lambda.test | RUN | 0.578089 | 4.989706 | 2.826231 | 0.002020 | 0.001614 | 0.002071 |
| mpl.test | RUN | 0.525772 | 1.341719 | 2.284268 | 0.002244 | 0.002046 | 0.001733 |
| mpl_list.test | RUN | 0.296863 | 1.059040 | 1.112561 | 0.001936 | 0.001856 | 0.001908 |
| mpl_tuple.test | RUN | 0.301237 | 1.022998 | 1.128048 | 0.001722 | 0.002056 | 0.001992 |
| version.test | RUN | 0.157201 | 0.389983 | 0.588053 | 0.001902 | 0.001891 | 0.001906 |
| mp11_version.test | RUN | 0.189685 | 0.436653 | 0.640268 | 0.001597 | 0.001748 | 0.001748 |
| list_version.test | RUN | 0.160568 | 0.395035 | 0.589518 | 0.001777 | 0.002338 | 0.001882 |
| algorithm_version.test | RUN | 0.169118 | 0.405567 | 0.648155 | 0.002164 | 0.002110 | 0.001515 |
| integral_version.test | RUN | 0.157839 | 0.384190 | 0.600518 | 0.001966 | 0.001812 | 0.001998 |
| utility_version.test | RUN | 0.152117 | 0.378629 | 0.573729 | 0.001472 | 0.002026 | 0.001692 |
| function_version.test | RUN | 0.161282 | 0.397232 | 0.597894 | 0.001957 | 0.001845 | 0.002175 |
| map_version.test | RUN | 0.169075 | 0.424669 | 0.640224 | 0.002098 | 0.001828 | 0.001710 |
| set_version.test | RUN | 0.164616 | 0.398506 | 0.624586 | 0.002114 | 0.002126 | 0.002012 |
| bind_version.test | RUN | 0.176165 | 0.414479 | 0.667296 | 0.002004 | 0.002104 | 0.001955 |
| integer_sequence_version.test | RUN | 0.155419 | 0.382746 | 0.561749 | 0.001972 | 0.001867 | 0.001900 |
| tuple_version.test | RUN | 0.170003 | 0.421122 | 0.571616 | 0.001709 | 0.001572 | 0.001555 |
| mpl_version.test | RUN | 0.120038 | 0.347152 | 0.415617 | 0.001654 | 0.001556 | 0.001411 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 1.007×, 0.993× | 0.994× |
| clang | 1.085× | 1.086×, 1.085× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44612055398).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.001148s | 0.001167s | 0.001171s | byte equality observed |
| bind_version.test | 10 | 0.001162s | 0.001148s | 0.001144s | byte equality observed |
| construct_from_tuple.test | 10 | 0.001158s | 0.001176s | 0.001146s | byte equality observed |
| function_version.test | 10 | 0.001139s | 0.001163s | 0.001179s | byte equality observed |
| integer_sequence.test | 10 | 0.001150s | 0.001175s | 0.001178s | byte equality observed |
| integer_sequence_version.test | 10 | 0.001171s | 0.001164s | 0.001181s | byte equality observed |
| integral.test | 10 | 0.001174s | 0.001154s | 0.001266s | byte equality observed |
| integral_version.test | 10 | 0.001165s | 0.001145s | 0.001282s | byte equality observed |
| list_version.test | 10 | 0.001158s | 0.001158s | 0.001254s | byte equality observed |
| map_version.test | 10 | 0.001165s | 0.001176s | 0.001303s | byte equality observed |
| mp11_version.test | 10 | 0.001164s | 0.001159s | 0.001276s | byte equality observed |
| mp_all.test | 10 | 0.001179s | 0.001181s | 0.001253s | byte equality observed |
| mp_all_2.test | 10 | 0.001251s | 0.001180s | 0.001254s | byte equality observed |
| mp_all_of.test | 10 | 0.001260s | 0.001168s | 0.001240s | byte equality observed |
| mp_all_of_q.test | 10 | 0.001269s | 0.001150s | 0.001299s | byte equality observed |
| mp_and.test | 10 | 0.001250s | 0.001163s | 0.001267s | byte equality observed |
| mp_any.test | 10 | 0.001272s | 0.001166s | 0.001258s | byte equality observed |
| mp_any_2.test | 10 | 0.001261s | 0.001178s | 0.001296s | byte equality observed |
| mp_any_of.test | 10 | 0.001266s | 0.001173s | 0.001235s | byte equality observed |
| mp_any_of_q.test | 10 | 0.001274s | 0.001180s | 0.001299s | byte equality observed |
| mp_append.test | 10 | 0.001292s | 0.001197s | 0.001281s | byte equality observed |
| mp_append_2.test | 10 | 0.001304s | 0.001195s | 0.001233s | byte equality observed |
| mp_append_3.test | 10 | 0.000581s | 0.000559s | 0.001316s | byte equality observed |
| mp_append_sf.test | 10 | 0.001254s | 0.001225s | 0.001231s | byte equality observed |
| mp_apply_q.test | 10 | 0.001234s | 0.001273s | 0.001328s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.001280s | 0.001249s | 0.001276s | byte equality observed |
| mp_assign.test | 10 | 0.001292s | 0.001267s | 0.001261s | byte equality observed |
| mp_assign_2.test | 10 | 0.000577s | 0.000565s | 0.001232s | byte equality observed |
| mp_at.test | 10 | 0.001279s | 0.001300s | 0.001241s | byte equality observed |
| mp_at_2.test | 10 | 0.000581s | 0.000586s | 0.001246s | byte equality observed |
| mp_at_sf.test | 10 | 0.001255s | 0.001241s | 0.001217s | byte equality observed |
| mp_back.test | 10 | 0.001277s | 0.001241s | 0.001262s | byte equality observed |
| mp_back_2.test | 10 | 0.000570s | 0.000576s | 0.001231s | byte equality observed |
| mp_bind.test | 10 | 0.001259s | 0.001267s | 0.001267s | byte equality observed |
| mp_bind_back.test | 10 | 0.001257s | 0.001257s | 0.001251s | byte equality observed |
| mp_bind_front.test | 10 | 0.001236s | 0.001259s | 0.001261s | byte equality observed |
| mp_bind_q.test | 10 | 0.001254s | 0.001314s | 0.001221s | byte equality observed |
| mp_clear.test | 10 | 0.001289s | 0.001294s | 0.001256s | byte equality observed |
| mp_clear_2.test | 10 | 0.000559s | 0.000561s | 0.001237s | byte equality observed |
| mp_compose.test | 10 | 0.001272s | 0.001258s | 0.001245s | byte equality observed |
| mp_cond.test | 10 | 0.001267s | 0.001274s | 0.001237s | byte equality observed |
| mp_cond_sf.test | 10 | 0.001260s | 0.001249s | 0.001299s | byte equality observed |
| mp_contains.test | 10 | 0.001266s | 0.001300s | 0.001243s | byte equality observed |
| mp_copy_if.test | 10 | 0.001241s | 0.001291s | 0.001277s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.001288s | 0.001296s | 0.001235s | byte equality observed |
| mp_count.test | 10 | 0.001279s | 0.001270s | 0.001268s | byte equality observed |
| mp_count_if.test | 10 | 0.001259s | 0.001314s | 0.001275s | byte equality observed |
| mp_count_if_q.test | 10 | 0.001266s | 0.001234s | 0.001259s | byte equality observed |
| mp_defer.test | 10 | 0.001298s | 0.001267s | 0.001282s | byte equality observed |
| mp_drop.test | 10 | 0.001240s | 0.001260s | 0.001257s | byte equality observed |
| mp_drop_2.test | 10 | 0.000575s | 0.000579s | 0.001195s | byte equality observed |
| mp_empty.test | 10 | 0.001279s | 0.001282s | 0.001245s | byte equality observed |
| mp_empty_2.test | 10 | 0.000588s | 0.000562s | 0.001210s | byte equality observed |
| mp_erase.test | 10 | 0.001293s | 0.001290s | 0.001245s | byte equality observed |
| mp_erase_2.test | 10 | 0.000572s | 0.000592s | 0.001213s | byte equality observed |
| mp_eval_if.test | 10 | 0.001270s | 0.001291s | 0.001243s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.001289s | 0.001291s | 0.001266s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.001251s | 0.001313s | 0.001266s | byte equality observed |
| mp_eval_or.test | 10 | 0.001274s | 0.001219s | 0.001284s | byte equality observed |
| mp_fill.test | 10 | 0.001271s | 0.001300s | 0.001235s | byte equality observed |
| mp_fill_2.test | 10 | 0.000572s | 0.000575s | 0.001265s | byte equality observed |
| mp_filter.test | 10 | 0.001253s | 0.001263s | 0.001265s | byte equality observed |
| mp_find.test | 10 | 0.001299s | 0.001280s | 0.001234s | byte equality observed |
| mp_find_if.test | 10 | 0.001301s | 0.001272s | 0.001257s | byte equality observed |
| mp_find_if_q.test | 10 | 0.001263s | 0.001244s | 0.001247s | byte equality observed |
| mp_flatten.test | 10 | 0.001264s | 0.001257s | 0.001253s | byte equality observed |
| mp_fold.test | 10 | 0.001308s | 0.001313s | 0.001292s | byte equality observed |
| mp_fold_q.test | 10 | 0.001275s | 0.001311s | 0.001305s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.001234s | 0.001222s | 0.001320s | byte equality observed |
| mp_for_each.test | 10 | 0.001250s | 0.001251s | 0.001288s | byte equality observed |
| mp_from_sequence.test | 10 | 0.001261s | 0.001315s | 0.001272s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.001268s | 0.001264s | 0.001213s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.001256s | 0.001301s | 0.001229s | byte equality observed |
| mp_front.test | 10 | 0.001244s | 0.001268s | 0.001250s | byte equality observed |
| mp_front_2.test | 10 | 0.000567s | 0.000578s | 0.001234s | byte equality observed |
| mp_identity.test | 10 | 0.001262s | 0.001278s | 0.001225s | byte equality observed |
| mp_if.test | 10 | 0.001281s | 0.001277s | 0.001263s | byte equality observed |
| mp_if_sf.test | 10 | 0.001263s | 0.001276s | 0.001261s | byte equality observed |
| mp_inherit.test | 10 | 0.001275s | 0.001253s | 0.001289s | byte equality observed |
| mp_insert.test | 10 | 0.001318s | 0.001305s | 0.001239s | byte equality observed |
| mp_insert_2.test | 10 | 0.000573s | 0.000577s | 0.001269s | byte equality observed |
| mp_intersperse.test | 10 | 0.001249s | 0.001257s | 0.001269s | byte equality observed |
| mp_invoke_q.test | 10 | 0.001259s | 0.001300s | 0.001288s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.001276s | 0.001316s | 0.001288s | byte equality observed |
| mp_iota.test | 10 | 0.001257s | 0.001269s | 0.001274s | byte equality observed |
| mp_iota_2.test | 10 | 0.001282s | 0.001280s | 0.001266s | byte equality observed |
| mp_is_list.test | 10 | 0.001281s | 0.001282s | 0.001284s | byte equality observed |
| mp_is_map.test | 10 | 0.001278s | 0.001296s | 0.001280s | byte equality observed |
| mp_is_set.test | 10 | 0.001265s | 0.001230s | 0.001287s | byte equality observed |
| mp_is_value_list.test | 10 | 0.001288s | 0.001262s | 0.001231s | byte equality observed |
| mp_iterate.test | 10 | 0.001260s | 0.001281s | 0.001225s | byte equality observed |
| mp_join.test | 10 | 0.001254s | 0.001259s | 0.001253s | byte equality observed |
| mp_lambda.test | 10 | 0.001308s | 0.001266s | 0.001235s | byte equality observed |
| mp_less.test | 10 | 0.001303s | 0.001294s | 0.001237s | byte equality observed |
| mp_list_c.test | 10 | 0.001275s | 0.001259s | 0.001242s | byte equality observed |
| mp_list_v.test | 10 | 0.000573s | 0.000572s | 0.001230s | byte equality observed |
| mp_map_contains.test | 10 | 0.001258s | 0.001261s | 0.001276s | byte equality observed |
| mp_map_erase.test | 10 | 0.001252s | 0.001249s | 0.001267s | byte equality observed |
| mp_map_find.test | 10 | 0.001283s | 0.001260s | 0.001253s | byte equality observed |
| mp_map_find_2.test | 10 | 0.001255s | 0.001251s | 0.001279s | byte equality observed |
| mp_map_find_3.test | 10 | 0.001245s | 0.001254s | 0.001271s | byte equality observed |
| mp_map_find_4.test | 10 | 0.001267s | 0.001252s | 0.001283s | byte equality observed |
| mp_map_insert.test | 10 | 0.001309s | 0.001307s | 0.001297s | byte equality observed |
| mp_map_keys.test | 10 | 0.001260s | 0.001233s | 0.001291s | byte equality observed |
| mp_map_replace.test | 10 | 0.001277s | 0.001256s | 0.001231s | byte equality observed |
| mp_map_update.test | 10 | 0.001321s | 0.001314s | 0.001238s | byte equality observed |
| mp_map_update_q.test | 10 | 0.001247s | 0.001275s | 0.001253s | byte equality observed |
| mp_max.test | 10 | 0.001293s | 0.001263s | 0.001244s | byte equality observed |
| mp_max_element.test | 10 | 0.001272s | 0.001256s | 0.001250s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000576s | 0.000573s | 0.001192s | byte equality observed |
| mp_max_element_q.test | 10 | 0.001270s | 0.001305s | 0.001239s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000567s | 0.000566s | 0.001243s | byte equality observed |
| mp_min.test | 10 | 0.001238s | 0.001281s | 0.001210s | byte equality observed |
| mp_min_element.test | 10 | 0.001292s | 0.001294s | 0.001228s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000582s | 0.000572s | 0.001241s | byte equality observed |
| mp_min_element_q.test | 10 | 0.001267s | 0.001294s | 0.001227s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000582s | 0.000600s | 0.001201s | byte equality observed |
| mp_none_of.test | 10 | 0.001242s | 0.001306s | 0.001273s | byte equality observed |
| mp_none_of_q.test | 10 | 0.001255s | 0.001234s | 0.001286s | byte equality observed |
| mp_not_fn.test | 10 | 0.001291s | 0.001244s | 0.001296s | byte equality observed |
| mp_nth_element.test | 10 | 0.001236s | 0.001301s | 0.001266s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.001246s | 0.001275s | 0.001283s | byte equality observed |
| mp_or.test | 10 | 0.001294s | 0.001276s | 0.001280s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.001224s | 0.001260s | 0.001275s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.001242s | 0.001268s | 0.001293s | byte equality observed |
| mp_partial_sum.test | 10 | 0.001275s | 0.001306s | 0.001274s | byte equality observed |
| mp_partition.test | 10 | 0.001251s | 0.001273s | 0.001225s | byte equality observed |
| mp_partition_q.test | 10 | 0.001283s | 0.001300s | 0.001248s | byte equality observed |
| mp_plus.test | 10 | 0.001293s | 0.001238s | 0.001278s | byte equality observed |
| mp_pop_back.test | 10 | 0.001289s | 0.001292s | 0.001242s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000557s | 0.000570s | 0.001214s | byte equality observed |
| mp_pop_front.test | 10 | 0.001250s | 0.001282s | 0.001196s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000578s | 0.000569s | 0.001216s | byte equality observed |
| mp_power_set.test | 10 | 0.001267s | 0.001263s | 0.001203s | byte equality observed |
| mp_product.test | 10 | 0.001274s | 0.001250s | 0.001215s | byte equality observed |
| mp_push_back.test | 10 | 0.001271s | 0.001286s | 0.001235s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000580s | 0.000590s | 0.001234s | byte equality observed |
| mp_push_front.test | 10 | 0.001244s | 0.001289s | 0.001233s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000577s | 0.000574s | 0.001255s | byte equality observed |
| mp_quote.test | 10 | 0.001272s | 0.001279s | 0.001275s | byte equality observed |
| mp_quote_trait.test | 10 | 0.001270s | 0.001311s | 0.001249s | byte equality observed |
| mp_remove.test | 10 | 0.001287s | 0.001240s | 0.001311s | byte equality observed |
| mp_remove_if.test | 10 | 0.001283s | 0.001292s | 0.001239s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.001261s | 0.001312s | 0.001246s | byte equality observed |
| mp_rename.test | 10 | 0.001269s | 0.001249s | 0.001258s | byte equality observed |
| mp_rename_2.test | 10 | 0.000588s | 0.000598s | 0.001195s | byte equality observed |
| mp_rename_v.test | 10 | 0.000589s | 0.000581s | 0.001245s | byte equality observed |
| mp_repeat.test | 10 | 0.001328s | 0.001307s | 0.001231s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000552s | 0.000576s | 0.001306s | byte equality observed |
| mp_repeat_3.test | 10 | 0.001283s | 0.001243s | 0.001268s | byte equality observed |
| mp_replace.test | 10 | 0.001264s | 0.001231s | 0.001243s | byte equality observed |
| mp_replace_at.test | 10 | 0.001286s | 0.001264s | 0.001207s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.001239s | 0.001246s | 0.001190s | byte equality observed |
| mp_replace_front.test | 10 | 0.001273s | 0.001294s | 0.001211s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000582s | 0.000585s | 0.001223s | byte equality observed |
| mp_replace_if.test | 10 | 0.001262s | 0.001275s | 0.001274s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.001227s | 0.001269s | 0.001261s | byte equality observed |
| mp_replace_second.test | 10 | 0.001277s | 0.001274s | 0.001238s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000573s | 0.000583s | 0.001202s | byte equality observed |
| mp_replace_third.test | 10 | 0.001276s | 0.001274s | 0.001241s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000573s | 0.000581s | 0.001214s | byte equality observed |
| mp_reverse.test | 10 | 0.001272s | 0.001284s | 0.001244s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.001274s | 0.001323s | 0.001237s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.001257s | 0.001260s | 0.001243s | byte equality observed |
| mp_rotate_left.test | 10 | 0.001258s | 0.001265s | 0.001307s | byte equality observed |
| mp_rotate_right.test | 10 | 0.001240s | 0.001329s | 0.001261s | byte equality observed |
| mp_same.test | 10 | 0.001265s | 0.001300s | 0.001270s | byte equality observed |
| mp_second.test | 10 | 0.001258s | 0.001292s | 0.001234s | byte equality observed |
| mp_second_2.test | 10 | 0.000581s | 0.000584s | 0.001220s | byte equality observed |
| mp_set_contains.test | 10 | 0.001256s | 0.001262s | 0.001252s | byte equality observed |
| mp_set_difference.test | 10 | 0.001264s | 0.001257s | 0.001231s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.001265s | 0.001295s | 0.001252s | byte equality observed |
| mp_set_intersection.test | 10 | 0.001253s | 0.001263s | 0.001235s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.001246s | 0.001273s | 0.001235s | byte equality observed |
| mp_set_push_back.test | 10 | 0.001247s | 0.001319s | 0.001255s | byte equality observed |
| mp_set_push_front.test | 10 | 0.001288s | 0.001326s | 0.001238s | byte equality observed |
| mp_set_union.test | 10 | 0.001305s | 0.001244s | 0.001227s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.001226s | 0.001289s | 0.001282s | byte equality observed |
| mp_similar.test | 10 | 0.001282s | 0.001239s | 0.001323s | byte equality observed |
| mp_size.test | 10 | 0.001292s | 0.001300s | 0.001222s | byte equality observed |
| mp_size_2.test | 10 | 0.000588s | 0.000580s | 0.001285s | byte equality observed |
| mp_slice.test | 10 | 0.001320s | 0.001318s | 0.001234s | byte equality observed |
| mp_slice_2.test | 10 | 0.000569s | 0.000582s | 0.001235s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.001267s | 0.001270s | 0.001245s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.001285s | 0.001306s | 0.001206s | byte equality observed |
| mp_sort.test | 10 | 0.001274s | 0.001263s | 0.001248s | byte equality observed |
| mp_sort_q.test | 10 | 0.001241s | 0.001281s | 0.001232s | byte equality observed |
| mp_split.test | 10 | 0.001280s | 0.001290s | 0.001295s | byte equality observed |
| mp_starts_with.test | 10 | 0.001244s | 0.001261s | 0.001239s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.001252s | 0.001300s | 0.001265s | byte equality observed |
| mp_take.test | 10 | 0.001262s | 0.001275s | 0.001228s | byte equality observed |
| mp_take_2.test | 10 | 0.000573s | 0.000565s | 0.001323s | byte equality observed |
| mp_third.test | 10 | 0.001262s | 0.001280s | 0.001210s | byte equality observed |
| mp_third_2.test | 10 | 0.000578s | 0.000568s | 0.001229s | byte equality observed |
| mp_transform.test | 10 | 0.001270s | 0.001251s | 0.001224s | byte equality observed |
| mp_transform_2.test | 10 | 0.001215s | 0.001240s | 0.001234s | byte equality observed |
| mp_transform_front.test | 10 | 0.001258s | 0.001290s | 0.001234s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000574s | 0.000573s | 0.001242s | byte equality observed |
| mp_transform_if.test | 10 | 0.001254s | 0.001258s | 0.001219s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.001244s | 0.001303s | 0.001243s | byte equality observed |
| mp_transform_q.test | 10 | 0.001288s | 0.001278s | 0.001280s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.001281s | 0.001306s | 0.001259s | byte equality observed |
| mp_transform_second.test | 10 | 0.001270s | 0.001270s | 0.001250s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000576s | 0.000577s | 0.001248s | byte equality observed |
| mp_transform_sf.test | 10 | 0.001229s | 0.001229s | 0.001245s | byte equality observed |
| mp_transform_third.test | 10 | 0.001286s | 0.001265s | 0.001270s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000571s | 0.000576s | 0.001210s | byte equality observed |
| mp_unique.test | 10 | 0.001252s | 0.001249s | 0.001283s | byte equality observed |
| mp_unique_if.test | 10 | 0.001262s | 0.001246s | 0.001265s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.001277s | 0.001285s | 0.001242s | byte equality observed |
| mp_valid.test | 10 | 0.001269s | 0.001266s | 0.001271s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.001287s | 0.001258s | 0.001243s | byte equality observed |
| mp_value.test | 10 | 0.000588s | 0.000579s | 0.001323s | byte equality observed |
| mp_with_index.test | 10 | 0.001665s | 0.001653s | 0.001560s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000573s | 0.000581s | 0.001209s | byte equality observed |
| mpl.test | 10 | 0.001278s | 0.001219s | 0.001230s | byte equality observed |
| mpl_list.test | 10 | 0.001263s | 0.001233s | 0.001266s | byte equality observed |
| mpl_tuple.test | 10 | 0.001296s | 0.001241s | 0.001226s | byte equality observed |
| mpl_version.test | 10 | 0.001252s | 0.001288s | 0.001246s | byte equality observed |
| set_version.test | 10 | 0.001285s | 0.001284s | 0.001262s | byte equality observed |
| tuple_apply.test | 10 | 0.001244s | 0.001285s | 0.001247s | byte equality observed |
| tuple_for_each.test | 10 | 0.001276s | 0.001277s | 0.001283s | byte equality observed |
| tuple_transform.test | 10 | 0.001239s | 0.001266s | 0.001263s | byte equality observed |
| tuple_transform_2.test | 10 | 0.001247s | 0.001285s | 0.001291s | byte equality observed |
| tuple_version.test | 10 | 0.001247s | 0.001275s | 0.001277s | byte equality observed |
| utility_version.test | 10 | 0.001258s | 0.001241s | 0.001244s | byte equality observed |
| version.test | 10 | 0.001276s | 0.001264s | 0.001269s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44612055398).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
