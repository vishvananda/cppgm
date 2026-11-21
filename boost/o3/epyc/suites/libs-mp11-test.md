# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.036166 | 0.070184 | 0.111621 | — | — | — |
| complex_h.test | COMPILE | 0.148820 | 0.305703 | 0.468950 | — | — | — |
| mp_size.test | RUN | 0.174013 | 0.926000 | 0.641134 | 0.001685 | 0.001631 | 0.001499 |
| mp_size_2.test | RUN | 0.015427 | 0.034903 | 0.054822 | 0.000722 | 0.000742 | 0.001226 |
| mp_empty.test | RUN | 0.166648 | 0.597755 | 0.572089 | 0.001527 | 0.001828 | 0.001821 |
| mp_empty_2.test | RUN | 0.015808 | 0.037551 | 0.059833 | 0.000603 | 0.000726 | 0.001394 |
| mp_assign.test | RUN | 0.186976 | 1.237313 | 0.697385 | 0.001512 | 0.001857 | 0.001260 |
| mp_assign_2.test | RUN | 0.016037 | 0.037325 | 0.057258 | 0.000574 | 0.000744 | 0.001551 |
| mp_clear.test | RUN | 0.158097 | 0.548242 | 0.592210 | 0.001712 | 0.001583 | 0.001735 |
| mp_clear_2.test | RUN | 0.016353 | 0.034715 | 0.055199 | 0.000598 | 0.000610 | 0.001676 |
| mp_front.test | RUN | 0.173879 | 0.837389 | 0.660869 | 0.001518 | 0.001686 | 0.001756 |
| mp_front_2.test | RUN | 0.015966 | 0.034859 | 0.055730 | 0.000745 | 0.000633 | 0.001607 |
| mp_pop_front.test | RUN | 0.169866 | 0.878521 | 0.606140 | 0.001401 | 0.001721 | 0.001803 |
| mp_pop_front_2.test | RUN | 0.015608 | 0.036743 | 0.052975 | 0.000631 | 0.000720 | 0.001581 |
| mp_second.test | RUN | 0.166411 | 0.561044 | 0.566952 | 0.001501 | 0.001764 | 0.001753 |
| mp_second_2.test | RUN | 0.015859 | 0.037978 | 0.058642 | 0.000772 | 0.000601 | 0.001721 |
| mp_third.test | RUN | 0.163532 | 0.534642 | 0.555254 | 0.001588 | 0.001663 | 0.001456 |
| mp_third_2.test | RUN | 0.015887 | 0.034162 | 0.058523 | 0.000616 | 0.000622 | 0.001444 |
| mp_push_front.test | RUN | 0.218026 | 1.853851 | 1.009017 | 0.001524 | 0.001782 | 0.001644 |
| mp_push_front_2.test | RUN | 0.015681 | 0.034576 | 0.058051 | 0.000580 | 0.000741 | 0.001649 |
| mp_push_back.test | RUN | 0.214385 | 1.856405 | 0.954535 | 0.001577 | 0.001660 | 0.001404 |
| mp_push_back_2.test | RUN | 0.015814 | 0.035028 | 0.057766 | 0.000595 | 0.000587 | 0.001668 |
| mp_rename.test | RUN | 0.205372 | 1.703134 | 0.878924 | 0.001569 | 0.001381 | 0.001428 |
| mp_rename_2.test | RUN | 0.016163 | 0.035492 | 0.059086 | 0.000672 | 0.000758 | 0.001656 |
| mp_append.test | RUN | 0.209032 | 1.928909 | 0.968103 | 0.001490 | 0.001856 | 0.001438 |
| mp_append_2.test | RUN | 0.450792 | 4.331229 | 1.278238 | 0.001545 | 0.001411 | 0.001266 |
| mp_append_3.test | RUN | 0.015381 | 0.037909 | 0.052026 | 0.000698 | 0.000680 | 0.001699 |
| mp_append_sf.test | RUN | 0.161342 | 0.502734 | 0.550676 | 0.001591 | 0.001765 | 0.001401 |
| mp_replace_front.test | RUN | 0.196352 | 1.375428 | 0.795504 | 0.001618 | 0.001732 | 0.001526 |
| mp_replace_front_2.test | RUN | 0.015714 | 0.037266 | 0.052133 | 0.000729 | 0.000623 | 0.001595 |
| mp_replace_second.test | RUN | 0.186817 | 0.890867 | 0.699866 | 0.001592 | 0.001751 | 0.001725 |
| mp_replace_second_2.test | RUN | 0.016281 | 0.036483 | 0.059743 | 0.000569 | 0.000736 | 0.001356 |
| mp_replace_third.test | RUN | 0.179387 | 0.733132 | 0.659230 | 0.001759 | 0.001550 | 0.001762 |
| mp_replace_third_2.test | RUN | 0.015536 | 0.037208 | 0.054482 | 0.000625 | 0.000684 | 0.001584 |
| mp_apply_q.test | RUN | 0.202496 | 1.687176 | 0.860430 | 0.001479 | 0.001572 | 0.001578 |
| mp_apply_q_sf.test | RUN | 0.157959 | 0.508884 | 0.571019 | 0.001616 | 0.001689 | 0.001446 |
| mp_is_list.test | RUN | 0.162294 | 0.592970 | 0.559963 | 0.001465 | 0.001702 | 0.001708 |
| mp_list_c.test | RUN | 0.173946 | 0.716827 | 0.643089 | 0.001576 | 0.001745 | 0.001566 |
| mp_transform_front.test | RUN | 0.188459 | 1.374400 | 0.709728 | 0.001264 | 0.001789 | 0.001642 |
| mp_transform_front_2.test | RUN | 0.016571 | 0.034917 | 0.058740 | 0.000657 | 0.000616 | 0.001658 |
| mp_transform_second.test | RUN | 0.186497 | 1.194423 | 0.689504 | 0.001571 | 0.001642 | 0.001570 |
| mp_transform_second_2.test | RUN | 0.015281 | 0.035208 | 0.058587 | 0.000619 | 0.000733 | 0.001706 |
| mp_transform_third.test | RUN | 0.171649 | 0.919232 | 0.595560 | 0.001583 | 0.001369 | 0.001706 |
| mp_transform_third_2.test | RUN | 0.015660 | 0.035502 | 0.058573 | 0.000615 | 0.000604 | 0.001290 |
| mp_list_v.test | RUN | 0.016315 | 0.033886 | 0.052314 | 0.000669 | 0.000577 | 0.001762 |
| mp_rename_v.test | RUN | 0.016214 | 0.035100 | 0.053026 | 0.000575 | 0.000768 | 0.001526 |
| mp_is_value_list.test | RUN | 0.159395 | 0.366276 | 0.541352 | 0.001694 | 0.001572 | 0.001689 |
| mp_transform.test | RUN | 0.358396 | 2.876308 | 1.547384 | 0.001495 | 0.001768 | 0.001786 |
| mp_transform_2.test | RUN | 0.152993 | 0.353306 | 0.484728 | 0.001616 | 0.001749 | 0.001558 |
| mp_transform_q.test | RUN | 0.354659 | 2.760151 | 1.555320 | 0.001750 | 0.001834 | 0.001725 |
| mp_transform_q_2.test | RUN | 0.392595 | 0.909200 | 2.064950 | 0.001734 | 0.001645 | 0.001578 |
| mp_transform_sf.test | RUN | 0.166661 | 0.507893 | 0.590597 | 0.001590 | 0.001746 | 0.001548 |
| mp_transform_if.test | RUN | 0.212566 | 1.380925 | 0.831180 | 0.001333 | 0.001470 | 0.001731 |
| mp_transform_if_q.test | RUN | 0.204881 | 1.395238 | 0.868361 | 0.001636 | 0.001762 | 0.001790 |
| mp_filter.test | RUN | 0.188921 | 0.830352 | 0.644930 | 0.001550 | 0.001801 | 0.001297 |
| mp_fill.test | RUN | 0.176323 | 0.632462 | 0.633854 | 0.001565 | 0.001717 | 0.001582 |
| mp_fill_2.test | RUN | 0.027250 | 0.055531 | 0.090586 | 0.000699 | 0.000706 | 0.001616 |
| mp_count.test | RUN | 0.333323 | 1.474888 | 0.989050 | 0.001674 | 0.001614 | 0.001577 |
| mp_count_if.test | RUN | 0.349377 | 1.501946 | 1.092769 | 0.001384 | 0.001697 | 0.001667 |
| mp_count_if_q.test | RUN | 0.186031 | 0.994073 | 0.625800 | 0.001429 | 0.001702 | 0.001491 |
| mp_contains.test | RUN | 0.174776 | 0.611614 | 0.565213 | 0.001620 | 0.001716 | 0.001619 |
| mp_starts_with.test | RUN | 0.171882 | 0.614950 | 0.620540 | 0.001513 | 0.001566 | 0.001524 |
| mp_starts_with_sf.test | RUN | 0.167323 | 0.502961 | 0.540502 | 0.001559 | 0.001631 | 0.001350 |
| mp_repeat.test | RUN | 0.240997 | 2.451671 | 1.105941 | 0.001795 | 0.001900 | 0.001728 |
| mp_repeat_2.test | RUN | 0.028375 | 0.058247 | 0.099816 | 0.000614 | 0.000792 | 0.001658 |
| mp_repeat_3.test | RUN | 0.211395 | 0.335010 | 0.541588 | 0.001492 | 0.001809 | 0.001728 |
| mp_product.test | RUN | 0.194378 | 1.488328 | 0.797409 | 0.001398 | 0.001753 | 0.001551 |
| mp_drop.test | RUN | 0.212115 | 1.851909 | 0.860492 | 0.001484 | 0.001689 | 0.001670 |
| mp_drop_2.test | RUN | 0.027713 | 0.058762 | 0.096936 | 0.000678 | 0.000750 | 0.001588 |
| mp_iota.test | RUN | 0.201465 | 1.576489 | 0.822837 | 0.001808 | 0.001720 | 0.001678 |
| mp_iota_2.test | RUN | 0.214772 | 1.863405 | 0.877007 | 0.001636 | 0.001788 | 0.001426 |
| mp_at.test | RUN | 0.181223 | 0.824443 | 0.638686 | 0.001521 | 0.001568 | 0.001401 |
| mp_at_2.test | RUN | 0.028269 | 0.057770 | 0.099333 | 0.000616 | 0.000668 | 0.001696 |
| mp_at_sf.test | RUN | 0.172416 | 0.519550 | 0.608281 | 0.001560 | 0.001688 | 0.001702 |
| mp_take.test | RUN | 0.278269 | 2.413194 | 1.087044 | 0.001573 | 0.001603 | 0.001584 |
| mp_take_2.test | RUN | 0.029108 | 0.054909 | 0.088655 | 0.000731 | 0.000755 | 0.001716 |
| mp_slice.test | RUN | 0.321931 | 2.472354 | 1.334932 | 0.001667 | 0.001757 | 0.001508 |
| mp_slice_2.test | RUN | 0.028078 | 0.058995 | 0.096457 | 0.000678 | 0.000729 | 0.001674 |
| mp_replace.test | RUN | 0.212417 | 1.267679 | 0.901554 | 0.001716 | 0.001644 | 0.001499 |
| mp_replace_if.test | RUN | 0.201158 | 1.102082 | 0.810777 | 0.001384 | 0.001668 | 0.001780 |
| mp_replace_if_q.test | RUN | 0.201109 | 1.109085 | 0.856124 | 0.001660 | 0.001710 | 0.001676 |
| mp_copy_if.test | RUN | 0.206916 | 1.562011 | 0.809249 | 0.001655 | 0.001734 | 0.001442 |
| mp_copy_if_q.test | RUN | 0.206751 | 1.557315 | 0.767404 | 0.001489 | 0.001608 | 0.001555 |
| mp_remove.test | RUN | 0.201163 | 1.040345 | 0.820694 | 0.001598 | 0.001726 | 0.001656 |
| mp_remove_if.test | RUN | 0.204047 | 1.644890 | 0.840194 | 0.001217 | 0.001832 | 0.001669 |
| mp_remove_if_q.test | RUN | 0.209080 | 1.626436 | 0.838828 | 0.001682 | 0.001759 | 0.001612 |
| mp_partition.test | RUN | 0.208710 | 1.539234 | 0.900435 | 0.001576 | 0.001562 | 0.001498 |
| mp_partition_q.test | RUN | 0.207947 | 1.562503 | 0.906427 | 0.001480 | 0.001974 | 0.001706 |
| mp_sort.test | RUN | 0.192859 | 1.109353 | 0.788785 | 0.001575 | 0.001836 | 0.001702 |
| mp_sort_q.test | RUN | 0.196329 | 1.102591 | 0.777533 | 0.001689 | 0.001654 | 0.001328 |
| mp_find.test | RUN | 0.194882 | 1.196334 | 0.700674 | 0.001638 | 0.001737 | 0.001648 |
| mp_find_if.test | RUN | 0.185988 | 1.123427 | 0.673117 | 0.001533 | 0.001605 | 0.001679 |
| mp_find_if_q.test | RUN | 0.206020 | 1.223403 | 0.803322 | 0.001571 | 0.001757 | 0.001766 |
| mp_reverse.test | RUN | 0.402635 | 3.248845 | 1.507249 | 0.001768 | 0.001836 | 0.001712 |
| mp_fold.test | RUN | 0.669986 | 2.535022 | 3.806236 | 0.001274 | 0.001773 | 0.001805 |
| mp_fold_q.test | RUN | 0.194882 | 1.083500 | 0.769676 | 0.001327 | 0.001736 | 0.001661 |
| mp_fold_q_sf.test | RUN | 0.168697 | 0.540981 | 0.607698 | 0.001594 | 0.001795 | 0.001567 |
| mp_reverse_fold.test | RUN | 0.321478 | 2.420004 | 1.086131 | 0.001466 | 0.001813 | 0.001748 |
| mp_reverse_fold_q.test | RUN | 0.196943 | 1.311964 | 0.824000 | 0.001249 | 0.001791 | 0.001676 |
| mp_unique.test | RUN | 0.193483 | 1.196044 | 0.782377 | 0.001707 | 0.001732 | 0.001839 |
| mp_unique_if.test | RUN | 0.330878 | 2.474636 | 1.207308 | 0.001445 | 0.001853 | 0.001617 |
| mp_unique_if_q.test | RUN | 0.300215 | 2.475052 | 1.012891 | 0.001547 | 0.001716 | 0.001228 |
| mp_all_of.test | RUN | 0.478932 | 1.397403 | 1.360618 | 0.001772 | 0.001778 | 0.001703 |
| mp_all_of_q.test | RUN | 0.174064 | 0.604496 | 0.576652 | 0.001618 | 0.001799 | 0.001774 |
| mp_any_of.test | RUN | 0.481772 | 1.441609 | 1.301453 | 0.001783 | 0.001744 | 0.001668 |
| mp_any_of_q.test | RUN | 0.168828 | 0.610555 | 0.598410 | 0.001872 | 0.001694 | 0.001768 |
| mp_none_of.test | RUN | 0.481551 | 1.457834 | 1.298674 | 0.001682 | 0.001726 | 0.001783 |
| mp_none_of_q.test | RUN | 0.177286 | 0.602488 | 0.618526 | 0.001824 | 0.001896 | 0.001658 |
| mp_replace_at.test | RUN | 0.212787 | 1.199368 | 0.867155 | 0.001498 | 0.001748 | 0.001644 |
| mp_replace_at_c.test | RUN | 0.205542 | 1.205125 | 0.868677 | 0.001701 | 0.001618 | 0.001751 |
| mp_for_each.test | RUN | 0.198946 | 0.876908 | 0.943856 | 0.001540 | 0.001734 | 0.001670 |
| mp_insert.test | RUN | 0.306243 | 2.448732 | 1.257796 | 0.001606 | 0.001643 | 0.001678 |
| mp_insert_2.test | RUN | 0.027596 | 0.055171 | 0.101011 | 0.000572 | 0.000696 | 0.001572 |
| mp_erase.test | RUN | 0.342185 | 2.595322 | 1.375812 | 0.001707 | 0.001766 | 0.001732 |
| mp_erase_2.test | RUN | 0.027251 | 0.053199 | 0.093115 | 0.000560 | 0.000742 | 0.001604 |
| mp_with_index.test | RUN | 0.462378 | 5.279755 | 3.255235 | 0.002044 | 0.002334 | 0.002124 |
| mp_with_index_cx.test | RUN | 0.003379 | 0.017884 | 0.027503 | 0.000622 | 0.000733 | 0.001646 |
| mp_from_sequence.test | RUN | 0.205010 | 1.386429 | 0.894724 | 0.001501 | 0.001576 | 0.001938 |
| mp_from_sequence_2.test | RUN | 0.215822 | 1.610713 | 0.891806 | 0.001344 | 0.001510 | 0.001693 |
| mp_from_sequence_3.test | RUN | 0.179834 | 0.735139 | 0.658533 | 0.001593 | 0.001799 | 0.001421 |
| mp_min_element.test | RUN | 0.174354 | 0.667065 | 0.634809 | 0.001605 | 0.001728 | 0.001710 |
| mp_min_element_2.test | RUN | 0.027307 | 0.056920 | 0.089063 | 0.000583 | 0.000669 | 0.001413 |
| mp_min_element_q.test | RUN | 0.177189 | 0.677182 | 0.588227 | 0.001597 | 0.001724 | 0.001352 |
| mp_min_element_q_2.test | RUN | 0.027517 | 0.055708 | 0.095507 | 0.000645 | 0.000653 | 0.001615 |
| mp_max_element.test | RUN | 0.175387 | 0.658805 | 0.613711 | 0.001642 | 0.001879 | 0.001299 |
| mp_max_element_2.test | RUN | 0.027202 | 0.056074 | 0.096626 | 0.000569 | 0.000691 | 0.001594 |
| mp_max_element_q.test | RUN | 0.171104 | 0.667826 | 0.600327 | 0.001652 | 0.001745 | 0.001723 |
| mp_max_element_q_2.test | RUN | 0.027770 | 0.057283 | 0.097779 | 0.000641 | 0.000715 | 0.001672 |
| mp_nth_element.test | RUN | 0.193898 | 0.923670 | 0.717103 | 0.001509 | 0.001686 | 0.001581 |
| mp_nth_element_q.test | RUN | 0.191397 | 0.909375 | 0.728721 | 0.001688 | 0.001535 | 0.001457 |
| mp_back.test | RUN | 0.192358 | 0.760863 | 0.745432 | 0.001703 | 0.001701 | 0.001532 |
| mp_back_2.test | RUN | 0.028978 | 0.055367 | 0.096766 | 0.000608 | 0.000662 | 0.001708 |
| mp_pop_back.test | RUN | 0.503037 | 4.996466 | 1.468078 | 0.001629 | 0.001569 | 0.001481 |
| mp_pop_back_2.test | RUN | 0.026893 | 0.056142 | 0.092892 | 0.000730 | 0.000527 | 0.001693 |
| mp_flatten.test | RUN | 0.223027 | 1.765718 | 0.977520 | 0.001786 | 0.001732 | 0.001960 |
| mp_rotate_left.test | RUN | 0.223324 | 1.899813 | 1.003013 | 0.001677 | 0.001606 | 0.001500 |
| mp_rotate_right.test | RUN | 0.219701 | 1.907481 | 1.042544 | 0.001391 | 0.001516 | 0.001603 |
| mp_power_set.test | RUN | 0.227593 | 1.850650 | 0.976666 | 0.001631 | 0.001717 | 0.001599 |
| mp_partial_sum.test | RUN | 0.287142 | 2.453799 | 1.126751 | 0.001639 | 0.001765 | 0.001720 |
| mp_iterate.test | RUN | 0.194739 | 0.741479 | 0.797597 | 0.001509 | 0.002864 | 0.001756 |
| mp_pairwise_fold.test | RUN | 0.219441 | 1.694331 | 0.972923 | 0.001457 | 0.001838 | 0.001552 |
| mp_pairwise_fold_q.test | RUN | 0.171663 | 0.500467 | 0.575230 | 0.001798 | 0.001712 | 0.001862 |
| mp_sliding_fold.test | RUN | 0.403984 | 3.202312 | 1.824633 | 0.001568 | 0.001628 | 0.001811 |
| mp_sliding_fold_q.test | RUN | 0.407972 | 3.197190 | 1.824426 | 0.001544 | 0.001519 | 0.001608 |
| mp_intersperse.test | RUN | 0.210069 | 1.216420 | 0.890094 | 0.001696 | 0.001751 | 0.001808 |
| mp_split.test | RUN | 0.287088 | 2.329615 | 1.215931 | 0.001525 | 0.001755 | 0.001529 |
| mp_join.test | RUN | 0.229668 | 1.945619 | 1.045425 | 0.001538 | 0.001774 | 0.001904 |
| integral.test | RUN | 0.183941 | 0.875253 | 0.655643 | 0.001601 | 0.001753 | 0.001755 |
| mp_value.test | RUN | 0.012779 | 0.029333 | 0.049778 | 0.000705 | 0.000565 | 0.001808 |
| mp_identity.test | RUN | 0.173980 | 0.806919 | 0.618642 | 0.001603 | 0.001753 | 0.001659 |
| mp_inherit.test | RUN | 0.165201 | 0.573155 | 0.584418 | 0.001660 | 0.001750 | 0.001720 |
| mp_if.test | RUN | 0.167488 | 0.654385 | 0.578090 | 0.001588 | 0.001628 | 0.001726 |
| mp_if_sf.test | RUN | 0.157498 | 0.483536 | 0.525652 | 0.001634 | 0.001679 | 0.001797 |
| mp_eval_if.test | RUN | 0.172522 | 0.688672 | 0.568772 | 0.001506 | 0.001634 | 0.001704 |
| mp_eval_if_sf.test | RUN | 0.164181 | 0.502624 | 0.584590 | 0.001300 | 0.001492 | 0.001718 |
| mp_valid.test | RUN | 0.159982 | 0.511829 | 0.572291 | 0.001398 | 0.001804 | 0.001749 |
| mp_defer.test | RUN | 0.173140 | 0.831337 | 0.636071 | 0.001749 | 0.001778 | 0.001898 |
| mp_quote.test | RUN | 0.173987 | 0.853704 | 0.671129 | 0.001648 | 0.001822 | 0.001738 |
| mp_invoke_q.test | RUN | 0.196020 | 1.120999 | 0.777933 | 0.001394 | 0.001734 | 0.001514 |
| mp_invoke_q_sf.test | RUN | 0.160304 | 0.497797 | 0.501632 | 0.001553 | 0.001746 | 0.001679 |
| mp_quote_trait.test | RUN | 0.176011 | 0.932837 | 0.651961 | 0.001635 | 0.001784 | 0.001812 |
| mp_cond.test | RUN | 0.169242 | 0.573255 | 0.570845 | 0.001590 | 0.001712 | 0.001639 |
| mp_cond_sf.test | RUN | 0.166844 | 0.510959 | 0.548172 | 0.001458 | 0.001625 | 0.001465 |
| mp_not_fn.test | RUN | 0.158817 | 0.496388 | 0.515267 | 0.001339 | 0.001828 | 0.001621 |
| mp_eval_if_not.test | RUN | 0.170110 | 0.699183 | 0.596725 | 0.001643 | 0.001682 | 0.001666 |
| mp_eval_or.test | RUN | 0.162695 | 0.396092 | 0.570427 | 0.001520 | 0.001713 | 0.001657 |
| mp_compose.test | RUN | 0.185525 | 1.125751 | 0.716335 | 0.001483 | 0.001574 | 0.001706 |
| mp_valid_and_true.test | RUN | 0.160771 | 0.595019 | 0.555027 | 0.001574 | 0.001835 | 0.001527 |
| mp_compose_sf.test | COMPILE | 0.041617 | 0.070264 | 0.126665 | — | — | — |
| integer_sequence.test | RUN | 0.194747 | 1.116246 | 0.803735 | 0.001308 | 0.001611 | 0.001732 |
| tuple_for_each.test | RUN | 0.166001 | 0.439174 | 0.587714 | 0.001477 | 0.001592 | 0.001588 |
| tuple_for_each_cx.test | COMPILE | 0.031294 | 0.062434 | 0.110775 | — | — | — |
| tuple_apply.test | RUN | 0.169855 | 0.431145 | 0.619603 | 0.001455 | 0.001696 | 0.001354 |
| tuple_apply_cx.test | COMPILE | 0.046944 | 0.091952 | 0.151787 | — | — | — |
| construct_from_tuple.test | RUN | 0.166319 | 0.463297 | 0.566300 | 0.001488 | 0.001494 | 0.001614 |
| construct_from_tuple_cx.test | COMPILE | 0.046146 | 0.090388 | 0.125632 | — | — | — |
| tuple_transform.test | RUN | 0.271948 | 0.935381 | 1.179356 | 0.001577 | 0.001760 | 0.001396 |
| tuple_transform_2.test | RUN | 0.236698 | 0.695909 | 1.054172 | 0.001731 | 0.001410 | 0.001844 |
| tuple_transform_cx.test | COMPILE | 0.038023 | 0.083056 | 0.148024 | — | — | — |
| mp_set_contains.test | RUN | 0.167623 | 0.596214 | 0.611713 | 0.001588 | 0.001790 | 0.001787 |
| mp_set_push_back.test | RUN | 0.216606 | 1.822056 | 1.006072 | 0.001722 | 0.001545 | 0.001396 |
| mp_set_push_front.test | RUN | 0.276325 | 2.173438 | 1.112499 | 0.001607 | 0.001830 | 0.001637 |
| mp_is_set.test | RUN | 0.168331 | 0.601289 | 0.631724 | 0.001557 | 0.001714 | 0.001725 |
| mp_set_union.test | RUN | 0.206383 | 1.579040 | 0.933691 | 0.001465 | 0.001839 | 0.001574 |
| mp_set_union_sf.test | RUN | 0.161018 | 0.475034 | 0.578964 | 0.001650 | 0.001700 | 0.001738 |
| mp_set_difference.test | RUN | 0.192977 | 1.215904 | 0.798391 | 0.001602 | 0.001662 | 0.001683 |
| mp_set_difference_sf.test | RUN | 0.160484 | 0.500003 | 0.567433 | 0.001494 | 0.001738 | 0.001420 |
| mp_set_intersection.test | RUN | 0.188956 | 1.202006 | 0.809012 | 0.001548 | 0.001769 | 0.001395 |
| mp_set_intersection_sf.test | RUN | 0.163121 | 0.479408 | 0.580646 | 0.001480 | 0.001642 | 0.001627 |
| mp_all.test | RUN | 0.167127 | 0.599812 | 0.583966 | 0.001656 | 0.001437 | 0.001656 |
| mp_all_2.test | RUN | 0.475103 | 1.289701 | 1.320548 | 0.001618 | 0.001774 | 0.001632 |
| mp_and.test | RUN | 0.166363 | 0.582700 | 0.608266 | 0.001510 | 0.001686 | 0.001373 |
| mp_any.test | RUN | 0.168484 | 0.602493 | 0.625440 | 0.001542 | 0.001712 | 0.001504 |
| mp_any_2.test | RUN | 0.482267 | 1.296960 | 1.237277 | 0.001526 | 0.001813 | 0.001519 |
| mp_or.test | RUN | 0.165847 | 0.595768 | 0.620923 | 0.001781 | 0.001903 | 0.001730 |
| mp_same.test | RUN | 0.329598 | 0.983353 | 0.949375 | 0.001578 | 0.001519 | 0.001740 |
| mp_plus.test | RUN | 0.176978 | 0.705232 | 0.640928 | 0.001587 | 0.001517 | 0.001783 |
| mp_less.test | RUN | 0.165074 | 0.612339 | 0.594265 | 0.001670 | 0.001629 | 0.001692 |
| mp_min.test | RUN | 0.166533 | 0.557590 | 0.565803 | 0.001772 | 0.001823 | 0.001507 |
| mp_max.test | RUN | 0.170438 | 0.608559 | 0.601925 | 0.001592 | 0.001718 | 0.001782 |
| mp_similar.test | RUN | 0.166878 | 0.590844 | 0.567295 | 0.001424 | 0.001529 | 0.001774 |
| mp_map_find.test | RUN | 0.192673 | 1.075528 | 0.764538 | 0.001752 | 0.001682 | 0.001573 |
| mp_map_find_2.test | RUN | 0.176491 | 0.430594 | 0.668990 | 0.001800 | 0.001817 | 0.001453 |
| mp_map_find_3.test | RUN | 0.179622 | 0.421362 | 0.669193 | 0.001616 | 0.001485 | 0.001565 |
| mp_map_find_4.test | RUN | 0.167706 | 0.400504 | 0.586114 | 0.001390 | 0.001402 | 0.001680 |
| mp_map_contains.test | RUN | 0.177602 | 0.616702 | 0.590265 | 0.001748 | 0.001753 | 0.001754 |
| mp_map_insert.test | RUN | 0.228489 | 2.021873 | 1.076075 | 0.001561 | 0.001844 | 0.001690 |
| mp_map_replace.test | RUN | 0.290743 | 2.301187 | 1.228136 | 0.001678 | 0.001790 | 0.001668 |
| mp_map_erase.test | RUN | 0.221658 | 1.717257 | 1.022215 | 0.001564 | 0.001702 | 0.001595 |
| mp_map_update.test | RUN | 0.198244 | 1.123628 | 0.796750 | 0.001488 | 0.001635 | 0.001856 |
| mp_map_update_q.test | RUN | 0.194706 | 1.107240 | 0.786364 | 0.001586 | 0.001694 | 0.001432 |
| mp_map_keys.test | RUN | 0.187834 | 1.001329 | 0.765305 | 0.001524 | 0.001345 | 0.001406 |
| mp_is_map.test | RUN | 0.179443 | 0.614412 | 0.634625 | 0.001632 | 0.001514 | 0.001581 |
| mp_bind.test | RUN | 0.218194 | 1.796040 | 0.963311 | 0.001401 | 0.001460 | 0.001691 |
| mp_bind_q.test | RUN | 0.192998 | 1.126470 | 0.733119 | 0.001485 | 0.001696 | 0.001591 |
| mp_bind_front.test | RUN | 0.188214 | 1.178350 | 0.754189 | 0.001580 | 0.001664 | 0.001401 |
| mp_bind_back.test | RUN | 0.191396 | 1.175615 | 0.747304 | 0.001702 | 0.001310 | 0.001401 |
| mp_lambda.test | RUN | 0.416568 | 3.660397 | 1.871513 | 0.001661 | 0.001298 | 0.001641 |
| mpl.test | RUN | 0.380002 | 0.966033 | 1.536267 | 0.001398 | 0.001829 | 0.001457 |
| mpl_list.test | RUN | 0.213856 | 0.731964 | 0.736206 | 0.001426 | 0.001779 | 0.001415 |
| mpl_tuple.test | RUN | 0.215119 | 0.746387 | 0.738221 | 0.001714 | 0.001482 | 0.001425 |
| version.test | RUN | 0.107290 | 0.265376 | 0.386741 | 0.001721 | 0.001818 | 0.001548 |
| mp11_version.test | RUN | 0.134599 | 0.312484 | 0.450366 | 0.001637 | 0.001630 | 0.001393 |
| list_version.test | RUN | 0.114993 | 0.270192 | 0.369998 | 0.001473 | 0.001786 | 0.001601 |
| algorithm_version.test | RUN | 0.126524 | 0.296733 | 0.423381 | 0.001556 | 0.001397 | 0.001555 |
| integral_version.test | RUN | 0.109956 | 0.268623 | 0.384820 | 0.001656 | 0.001775 | 0.001578 |
| utility_version.test | RUN | 0.108070 | 0.273333 | 0.365127 | 0.001659 | 0.001809 | 0.001513 |
| function_version.test | RUN | 0.112684 | 0.273360 | 0.383995 | 0.001590 | 0.001631 | 0.001587 |
| map_version.test | RUN | 0.123697 | 0.298089 | 0.432220 | 0.001563 | 0.001562 | 0.001671 |
| set_version.test | RUN | 0.115558 | 0.280855 | 0.392944 | 0.001708 | 0.001768 | 0.001562 |
| bind_version.test | RUN | 0.125480 | 0.290376 | 0.417420 | 0.001755 | 0.001422 | 0.001570 |
| integer_sequence_version.test | RUN | 0.109878 | 0.272452 | 0.360113 | 0.001544 | 0.001791 | 0.001251 |
| tuple_version.test | RUN | 0.124955 | 0.288020 | 0.267187 | 0.001289 | 0.001338 | 0.001671 |
| mpl_version.test | RUN | 0.093248 | 0.236332 | 0.403281 | 0.001262 | 0.001363 | 0.001225 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.033×† | 1.060×, 1.007× | 0.996× |
| clang | 1.081× | 1.079×, 1.083× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44815881069).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000946s | 0.000969s | 0.000958s | byte equality observed |
| bind_version.test | 10 | 0.000956s | 0.000951s | 0.000972s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000952s | 0.000958s | 0.000980s | byte equality observed |
| function_version.test | 10 | 0.000943s | 0.000949s | 0.000987s | byte equality observed |
| integer_sequence.test | 10 | 0.000951s | 0.000968s | 0.001015s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000948s | 0.000953s | 0.000996s | byte equality observed |
| integral.test | 10 | 0.000969s | 0.000978s | 0.000975s | byte equality observed |
| integral_version.test | 10 | 0.000982s | 0.000951s | 0.000977s | byte equality observed |
| list_version.test | 10 | 0.000982s | 0.000974s | 0.001007s | byte equality observed |
| map_version.test | 10 | 0.000960s | 0.000944s | 0.000990s | byte equality observed |
| mp11_version.test | 10 | 0.000967s | 0.000944s | 0.000982s | byte equality observed |
| mp_all.test | 10 | 0.000966s | 0.000966s | 0.000985s | byte equality observed |
| mp_all_2.test | 10 | 0.000985s | 0.000968s | 0.000991s | byte equality observed |
| mp_all_of.test | 10 | 0.001005s | 0.000976s | 0.000987s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000974s | 0.000973s | 0.000977s | byte equality observed |
| mp_and.test | 10 | 0.000979s | 0.000987s | 0.000982s | byte equality observed |
| mp_any.test | 10 | 0.000968s | 0.001015s | 0.000999s | byte equality observed |
| mp_any_2.test | 10 | 0.000961s | 0.001027s | 0.001000s | byte equality observed |
| mp_any_of.test | 10 | 0.000977s | 0.001042s | 0.000997s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000991s | 0.000966s | 0.000994s | byte equality observed |
| mp_append.test | 10 | 0.001005s | 0.000995s | 0.000974s | byte equality observed |
| mp_append_2.test | 10 | 0.001025s | 0.001018s | 0.000972s | byte equality observed |
| mp_append_3.test | 10 | 0.000447s | 0.000444s | 0.000973s | byte equality observed |
| mp_append_sf.test | 10 | 0.000969s | 0.000979s | 0.001002s | byte equality observed |
| mp_apply_q.test | 10 | 0.000969s | 0.001051s | 0.001015s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.000987s | 0.001003s | 0.000977s | byte equality observed |
| mp_assign.test | 10 | 0.000995s | 0.001013s | 0.000994s | byte equality observed |
| mp_assign_2.test | 10 | 0.000451s | 0.000452s | 0.000979s | byte equality observed |
| mp_at.test | 10 | 0.001011s | 0.001022s | 0.000974s | byte equality observed |
| mp_at_2.test | 10 | 0.000446s | 0.000462s | 0.000989s | byte equality observed |
| mp_at_sf.test | 10 | 0.001011s | 0.000993s | 0.000984s | byte equality observed |
| mp_back.test | 10 | 0.000985s | 0.001010s | 0.000986s | byte equality observed |
| mp_back_2.test | 10 | 0.000449s | 0.000451s | 0.000969s | byte equality observed |
| mp_bind.test | 10 | 0.001010s | 0.001010s | 0.001001s | byte equality observed |
| mp_bind_back.test | 10 | 0.000984s | 0.001038s | 0.000997s | byte equality observed |
| mp_bind_front.test | 10 | 0.000983s | 0.001041s | 0.000974s | byte equality observed |
| mp_bind_q.test | 10 | 0.000980s | 0.001020s | 0.000976s | byte equality observed |
| mp_clear.test | 10 | 0.001007s | 0.001005s | 0.000979s | byte equality observed |
| mp_clear_2.test | 10 | 0.000458s | 0.000453s | 0.000955s | byte equality observed |
| mp_compose.test | 10 | 0.000979s | 0.001028s | 0.000969s | byte equality observed |
| mp_cond.test | 10 | 0.000983s | 0.001005s | 0.000956s | byte equality observed |
| mp_cond_sf.test | 10 | 0.000995s | 0.001027s | 0.000978s | byte equality observed |
| mp_contains.test | 10 | 0.000988s | 0.000985s | 0.000970s | byte equality observed |
| mp_copy_if.test | 10 | 0.000997s | 0.001026s | 0.001025s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.001000s | 0.001047s | 0.000991s | byte equality observed |
| mp_count.test | 10 | 0.000998s | 0.001016s | 0.001001s | byte equality observed |
| mp_count_if.test | 10 | 0.000992s | 0.001031s | 0.000992s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000959s | 0.000981s | 0.001007s | byte equality observed |
| mp_defer.test | 10 | 0.000989s | 0.000994s | 0.000985s | byte equality observed |
| mp_drop.test | 10 | 0.000989s | 0.000995s | 0.000981s | byte equality observed |
| mp_drop_2.test | 10 | 0.000452s | 0.000461s | 0.000964s | byte equality observed |
| mp_empty.test | 10 | 0.000998s | 0.001029s | 0.000966s | byte equality observed |
| mp_empty_2.test | 10 | 0.000457s | 0.000462s | 0.000965s | byte equality observed |
| mp_erase.test | 10 | 0.001018s | 0.001007s | 0.000984s | byte equality observed |
| mp_erase_2.test | 10 | 0.000457s | 0.000461s | 0.000944s | byte equality observed |
| mp_eval_if.test | 10 | 0.000974s | 0.001008s | 0.000973s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.000974s | 0.001011s | 0.000977s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.000971s | 0.001002s | 0.000977s | byte equality observed |
| mp_eval_or.test | 10 | 0.000992s | 0.001007s | 0.001009s | byte equality observed |
| mp_fill.test | 10 | 0.000974s | 0.001017s | 0.000987s | byte equality observed |
| mp_fill_2.test | 10 | 0.000462s | 0.000458s | 0.000966s | byte equality observed |
| mp_filter.test | 10 | 0.000990s | 0.000995s | 0.001001s | byte equality observed |
| mp_find.test | 10 | 0.000979s | 0.000996s | 0.000984s | byte equality observed |
| mp_find_if.test | 10 | 0.000978s | 0.001031s | 0.001008s | byte equality observed |
| mp_find_if_q.test | 10 | 0.000992s | 0.001027s | 0.000974s | byte equality observed |
| mp_flatten.test | 10 | 0.000981s | 0.001008s | 0.000957s | byte equality observed |
| mp_fold.test | 10 | 0.001011s | 0.001038s | 0.000974s | byte equality observed |
| mp_fold_q.test | 10 | 0.000986s | 0.000994s | 0.000980s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.000987s | 0.001013s | 0.000968s | byte equality observed |
| mp_for_each.test | 10 | 0.000991s | 0.001023s | 0.000989s | byte equality observed |
| mp_from_sequence.test | 10 | 0.001002s | 0.001044s | 0.000961s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.000992s | 0.000996s | 0.000994s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.000982s | 0.001047s | 0.000994s | byte equality observed |
| mp_front.test | 10 | 0.000983s | 0.001023s | 0.000970s | byte equality observed |
| mp_front_2.test | 10 | 0.000465s | 0.000461s | 0.000977s | byte equality observed |
| mp_identity.test | 10 | 0.000996s | 0.000986s | 0.000999s | byte equality observed |
| mp_if.test | 10 | 0.000989s | 0.000982s | 0.000965s | byte equality observed |
| mp_if_sf.test | 10 | 0.000972s | 0.001008s | 0.001018s | byte equality observed |
| mp_inherit.test | 10 | 0.000982s | 0.001005s | 0.000975s | byte equality observed |
| mp_insert.test | 10 | 0.001003s | 0.001031s | 0.000971s | byte equality observed |
| mp_insert_2.test | 10 | 0.000462s | 0.000441s | 0.000981s | byte equality observed |
| mp_intersperse.test | 10 | 0.000991s | 0.000994s | 0.000957s | byte equality observed |
| mp_invoke_q.test | 10 | 0.001003s | 0.001015s | 0.000946s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.001007s | 0.000994s | 0.000959s | byte equality observed |
| mp_iota.test | 10 | 0.000980s | 0.001000s | 0.000960s | byte equality observed |
| mp_iota_2.test | 10 | 0.001005s | 0.000994s | 0.000977s | byte equality observed |
| mp_is_list.test | 10 | 0.000981s | 0.001020s | 0.000984s | byte equality observed |
| mp_is_map.test | 10 | 0.000993s | 0.001015s | 0.000981s | byte equality observed |
| mp_is_set.test | 10 | 0.000965s | 0.001036s | 0.000980s | byte equality observed |
| mp_is_value_list.test | 10 | 0.000978s | 0.001021s | 0.000973s | byte equality observed |
| mp_iterate.test | 10 | 0.000985s | 0.000994s | 0.000967s | byte equality observed |
| mp_join.test | 10 | 0.001025s | 0.000989s | 0.000990s | byte equality observed |
| mp_lambda.test | 10 | 0.001013s | 0.001027s | 0.000997s | byte equality observed |
| mp_less.test | 10 | 0.000992s | 0.000982s | 0.000979s | byte equality observed |
| mp_list_c.test | 10 | 0.000978s | 0.000994s | 0.000968s | byte equality observed |
| mp_list_v.test | 10 | 0.000457s | 0.000465s | 0.000978s | byte equality observed |
| mp_map_contains.test | 10 | 0.000991s | 0.001021s | 0.000961s | byte equality observed |
| mp_map_erase.test | 10 | 0.000974s | 0.000990s | 0.000978s | byte equality observed |
| mp_map_find.test | 10 | 0.001003s | 0.001006s | 0.000972s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000987s | 0.000984s | 0.000970s | byte equality observed |
| mp_map_find_3.test | 10 | 0.001015s | 0.000981s | 0.000997s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000982s | 0.000997s | 0.001015s | byte equality observed |
| mp_map_insert.test | 10 | 0.000977s | 0.000985s | 0.000978s | byte equality observed |
| mp_map_keys.test | 10 | 0.000977s | 0.000998s | 0.001026s | byte equality observed |
| mp_map_replace.test | 10 | 0.001010s | 0.001025s | 0.001013s | byte equality observed |
| mp_map_update.test | 10 | 0.000983s | 0.000997s | 0.000976s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000978s | 0.001006s | 0.001043s | byte equality observed |
| mp_max.test | 10 | 0.000984s | 0.000982s | 0.001011s | byte equality observed |
| mp_max_element.test | 10 | 0.000997s | 0.000997s | 0.000995s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000454s | 0.000466s | 0.000959s | byte equality observed |
| mp_max_element_q.test | 10 | 0.001009s | 0.001034s | 0.000969s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000460s | 0.000463s | 0.000968s | byte equality observed |
| mp_min.test | 10 | 0.000993s | 0.001040s | 0.000985s | byte equality observed |
| mp_min_element.test | 10 | 0.001008s | 0.001054s | 0.000977s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000450s | 0.000465s | 0.000939s | byte equality observed |
| mp_min_element_q.test | 10 | 0.001004s | 0.001006s | 0.000982s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000458s | 0.000456s | 0.000958s | byte equality observed |
| mp_none_of.test | 10 | 0.000985s | 0.000989s | 0.000981s | byte equality observed |
| mp_none_of_q.test | 10 | 0.000998s | 0.000995s | 0.000961s | byte equality observed |
| mp_not_fn.test | 10 | 0.001000s | 0.001020s | 0.000992s | byte equality observed |
| mp_nth_element.test | 10 | 0.000980s | 0.001029s | 0.000980s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.000994s | 0.001012s | 0.000985s | byte equality observed |
| mp_or.test | 10 | 0.001007s | 0.001038s | 0.000994s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.000981s | 0.001020s | 0.000990s | byte equality observed |
| mp_pairwise_fold_q.test | 5 | 0.000986s | 0.000990s | 0.000981s | byte equality observed |
| mp_partial_sum.test | 10 | 0.001001s | 0.001037s | 0.000981s | byte equality observed |
| mp_partition.test | 10 | 0.000980s | 0.001009s | 0.000977s | byte equality observed |
| mp_partition_q.test | 10 | 0.000972s | 0.001026s | 0.001019s | byte equality observed |
| mp_plus.test | 10 | 0.000987s | 0.001003s | 0.000992s | byte equality observed |
| mp_pop_back.test | 10 | 0.001024s | 0.001044s | 0.000960s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000457s | 0.000458s | 0.000956s | byte equality observed |
| mp_pop_front.test | 10 | 0.001007s | 0.001017s | 0.000969s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000461s | 0.000466s | 0.000989s | byte equality observed |
| mp_power_set.test | 10 | 0.000980s | 0.000987s | 0.000982s | byte equality observed |
| mp_product.test | 10 | 0.001005s | 0.001001s | 0.000964s | byte equality observed |
| mp_push_back.test | 10 | 0.001005s | 0.001069s | 0.000952s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000455s | 0.000462s | 0.000953s | byte equality observed |
| mp_push_front.test | 10 | 0.000998s | 0.001030s | 0.000984s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000450s | 0.000461s | 0.000958s | byte equality observed |
| mp_quote.test | 10 | 0.000985s | 0.001008s | 0.000979s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000986s | 0.001032s | 0.000969s | byte equality observed |
| mp_remove.test | 10 | 0.000985s | 0.001012s | 0.000959s | byte equality observed |
| mp_remove_if.test | 10 | 0.000997s | 0.001015s | 0.000964s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.000986s | 0.001021s | 0.000968s | byte equality observed |
| mp_rename.test | 10 | 0.001001s | 0.001024s | 0.000973s | byte equality observed |
| mp_rename_2.test | 10 | 0.000471s | 0.000473s | 0.000978s | byte equality observed |
| mp_rename_v.test | 10 | 0.000461s | 0.000477s | 0.000950s | byte equality observed |
| mp_repeat.test | 10 | 0.001019s | 0.001036s | 0.000967s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000461s | 0.000455s | 0.000966s | byte equality observed |
| mp_repeat_3.test | 10 | 0.001004s | 0.001014s | 0.000989s | byte equality observed |
| mp_replace.test | 10 | 0.001004s | 0.001000s | 0.000983s | byte equality observed |
| mp_replace_at.test | 10 | 0.001000s | 0.001014s | 0.000955s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.001011s | 0.001010s | 0.000966s | byte equality observed |
| mp_replace_front.test | 10 | 0.000998s | 0.001026s | 0.000979s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000458s | 0.000483s | 0.000982s | byte equality observed |
| mp_replace_if.test | 10 | 0.000987s | 0.001017s | 0.000984s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.000963s | 0.001011s | 0.000995s | byte equality observed |
| mp_replace_second.test | 10 | 0.001005s | 0.001045s | 0.000973s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000458s | 0.000456s | 0.000950s | byte equality observed |
| mp_replace_third.test | 10 | 0.001003s | 0.001030s | 0.000983s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000461s | 0.000456s | 0.000966s | byte equality observed |
| mp_reverse.test | 10 | 0.000999s | 0.000997s | 0.000978s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.000988s | 0.001001s | 0.000979s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000962s | 0.001006s | 0.000994s | byte equality observed |
| mp_rotate_left.test | 10 | 0.000981s | 0.000996s | 0.000990s | byte equality observed |
| mp_rotate_right.test | 10 | 0.000986s | 0.001022s | 0.001029s | byte equality observed |
| mp_same.test | 10 | 0.000994s | 0.001018s | 0.000994s | byte equality observed |
| mp_second.test | 10 | 0.000995s | 0.001022s | 0.000987s | byte equality observed |
| mp_second_2.test | 10 | 0.000460s | 0.000456s | 0.000953s | byte equality observed |
| mp_set_contains.test | 10 | 0.000986s | 0.001047s | 0.000986s | byte equality observed |
| mp_set_difference.test | 10 | 0.000998s | 0.001010s | 0.000975s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000989s | 0.001004s | 0.000966s | byte equality observed |
| mp_set_intersection.test | 10 | 0.001003s | 0.001014s | 0.000969s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000974s | 0.000987s | 0.000984s | byte equality observed |
| mp_set_push_back.test | 10 | 0.000981s | 0.000978s | 0.000975s | byte equality observed |
| mp_set_push_front.test | 10 | 0.000984s | 0.001009s | 0.000984s | byte equality observed |
| mp_set_union.test | 10 | 0.000999s | 0.001020s | 0.000990s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.000988s | 0.000971s | 0.000966s | byte equality observed |
| mp_similar.test | 10 | 0.000975s | 0.000980s | 0.000972s | byte equality observed |
| mp_size.test | 10 | 0.000992s | 0.001035s | 0.000979s | byte equality observed |
| mp_size_2.test | 10 | 0.000454s | 0.000452s | 0.000948s | byte equality observed |
| mp_slice.test | 10 | 0.001014s | 0.001017s | 0.001004s | byte equality observed |
| mp_slice_2.test | 10 | 0.000464s | 0.000466s | 0.000957s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.001024s | 0.001019s | 0.000973s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.001017s | 0.001012s | 0.000974s | byte equality observed |
| mp_sort.test | 10 | 0.000993s | 0.000970s | 0.000989s | byte equality observed |
| mp_sort_q.test | 10 | 0.000985s | 0.001015s | 0.000995s | byte equality observed |
| mp_split.test | 10 | 0.001002s | 0.001008s | 0.000991s | byte equality observed |
| mp_starts_with.test | 10 | 0.000981s | 0.000994s | 0.000985s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.000993s | 0.000985s | 0.000985s | byte equality observed |
| mp_take.test | 10 | 0.001025s | 0.000998s | 0.000997s | byte equality observed |
| mp_take_2.test | 10 | 0.000454s | 0.000467s | 0.000962s | byte equality observed |
| mp_third.test | 10 | 0.000999s | 0.001007s | 0.000980s | byte equality observed |
| mp_third_2.test | 10 | 0.000461s | 0.000464s | 0.000983s | byte equality observed |
| mp_transform.test | 10 | 0.001013s | 0.001013s | 0.000986s | byte equality observed |
| mp_transform_2.test | 10 | 0.000954s | 0.000973s | 0.001006s | byte equality observed |
| mp_transform_front.test | 10 | 0.001006s | 0.001010s | 0.000973s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000450s | 0.000455s | 0.000971s | byte equality observed |
| mp_transform_if.test | 10 | 0.000987s | 0.000997s | 0.000979s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.001007s | 0.001001s | 0.001000s | byte equality observed |
| mp_transform_q.test | 10 | 0.001010s | 0.001020s | 0.000993s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.000985s | 0.001004s | 0.000997s | byte equality observed |
| mp_transform_second.test | 10 | 0.000985s | 0.001031s | 0.000962s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000458s | 0.000461s | 0.001009s | byte equality observed |
| mp_transform_sf.test | 10 | 0.000997s | 0.001038s | 0.000969s | byte equality observed |
| mp_transform_third.test | 10 | 0.000984s | 0.001069s | 0.000980s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000460s | 0.000472s | 0.000953s | byte equality observed |
| mp_unique.test | 10 | 0.000995s | 0.001050s | 0.000985s | byte equality observed |
| mp_unique_if.test | 10 | 0.001023s | 0.001058s | 0.000978s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.001010s | 0.001044s | 0.001010s | byte equality observed |
| mp_valid.test | 10 | 0.000976s | 0.001012s | 0.000978s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.001017s | 0.000987s | 0.001015s | byte equality observed |
| mp_value.test | 10 | 0.000454s | 0.000459s | 0.000963s | byte equality observed |
| mp_with_index.test | 10 | 0.001349s | 0.001307s | 0.001251s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000457s | 0.000438s | 0.000962s | byte equality observed |
| mpl.test | 10 | 0.000994s | 0.000980s | 0.000986s | byte equality observed |
| mpl_list.test | 10 | 0.000980s | 0.001000s | 0.000988s | byte equality observed |
| mpl_tuple.test | 10 | 0.001004s | 0.001001s | 0.000988s | byte equality observed |
| mpl_version.test | 10 | 0.000995s | 0.000968s | 0.000988s | byte equality observed |
| set_version.test | 10 | 0.000983s | 0.000983s | 0.000983s | byte equality observed |
| tuple_apply.test | 10 | 0.000988s | 0.000967s | 0.000989s | byte equality observed |
| tuple_for_each.test | 10 | 0.000979s | 0.000984s | 0.000964s | byte equality observed |
| tuple_transform.test | 10 | 0.000987s | 0.000986s | 0.000979s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000989s | 0.000974s | 0.000966s | byte equality observed |
| tuple_version.test | 10 | 0.000989s | 0.001028s | 0.000951s | byte equality observed |
| utility_version.test | 10 | 0.000999s | 0.000974s | 0.000972s | byte equality observed |
| version.test | 10 | 0.000996s | 0.001001s | 0.001022s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44815881069).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
