# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.037060 | 0.072043 | 0.132277 | — | — | — |
| complex_h.test | COMPILE | 0.150909 | 0.310306 | 0.501332 | — | — | — |
| mp_size.test | RUN | 0.178029 | 0.940062 | 0.583795 | 0.001600 | 0.001687 | 0.001719 |
| mp_size_2.test | RUN | 0.015561 | 0.035367 | 0.057748 | 0.000760 | 0.000710 | 0.001858 |
| mp_empty.test | RUN | 0.162459 | 0.601354 | 0.615460 | 0.001753 | 0.001742 | 0.001856 |
| mp_empty_2.test | RUN | 0.017473 | 0.037698 | 0.062778 | 0.000603 | 0.000611 | 0.001452 |
| mp_assign.test | RUN | 0.191394 | 1.236526 | 0.783124 | 0.001569 | 0.001777 | 0.001363 |
| mp_assign_2.test | RUN | 0.016582 | 0.037946 | 0.051780 | 0.000532 | 0.000758 | 0.001833 |
| mp_clear.test | RUN | 0.163306 | 0.544979 | 0.550145 | 0.001842 | 0.001568 | 0.001786 |
| mp_clear_2.test | RUN | 0.015712 | 0.037631 | 0.062720 | 0.000679 | 0.000656 | 0.001872 |
| mp_front.test | RUN | 0.174295 | 0.846710 | 0.661773 | 0.001554 | 0.001753 | 0.001519 |
| mp_front_2.test | RUN | 0.016576 | 0.032747 | 0.057359 | 0.000676 | 0.000641 | 0.001530 |
| mp_pop_front.test | RUN | 0.179912 | 0.878097 | 0.673630 | 0.001705 | 0.001569 | 0.001608 |
| mp_pop_front_2.test | RUN | 0.015802 | 0.034796 | 0.057096 | 0.000589 | 0.000675 | 0.001673 |
| mp_second.test | RUN | 0.178416 | 0.577477 | 0.627550 | 0.001547 | 0.001576 | 0.001698 |
| mp_second_2.test | RUN | 0.015617 | 0.037886 | 0.057428 | 0.000697 | 0.000675 | 0.001868 |
| mp_third.test | RUN | 0.167036 | 0.527850 | 0.559411 | 0.001533 | 0.001642 | 0.001908 |
| mp_third_2.test | RUN | 0.016583 | 0.038126 | 0.059661 | 0.000630 | 0.000739 | 0.001876 |
| mp_push_front.test | RUN | 0.219241 | 1.914464 | 0.976763 | 0.001631 | 0.001712 | 0.001977 |
| mp_push_front_2.test | RUN | 0.016005 | 0.035071 | 0.057802 | 0.000576 | 0.000685 | 0.001753 |
| mp_push_back.test | RUN | 0.224543 | 1.905252 | 1.068024 | 0.001569 | 0.001696 | 0.001874 |
| mp_push_back_2.test | RUN | 0.016605 | 0.036496 | 0.061954 | 0.000567 | 0.000753 | 0.001849 |
| mp_rename.test | RUN | 0.208640 | 1.758321 | 0.947541 | 0.001652 | 0.001648 | 0.001701 |
| mp_rename_2.test | RUN | 0.016682 | 0.040633 | 0.060882 | 0.000603 | 0.000866 | 0.001872 |
| mp_append.test | RUN | 0.211003 | 2.004937 | 1.010263 | 0.001732 | 0.001530 | 0.001806 |
| mp_append_2.test | RUN | 0.457566 | 4.275956 | 1.341242 | 0.001626 | 0.001703 | 0.001696 |
| mp_append_3.test | RUN | 0.014625 | 0.037632 | 0.055729 | 0.000744 | 0.000716 | 0.001922 |
| mp_append_sf.test | RUN | 0.163202 | 0.513351 | 0.565575 | 0.001567 | 0.001728 | 0.001824 |
| mp_replace_front.test | RUN | 0.200854 | 1.292762 | 0.802367 | 0.001639 | 0.001856 | 0.001798 |
| mp_replace_front_2.test | RUN | 0.015455 | 0.036889 | 0.062769 | 0.000578 | 0.000697 | 0.001926 |
| mp_replace_second.test | RUN | 0.191015 | 0.938924 | 0.763549 | 0.001690 | 0.001901 | 0.001962 |
| mp_replace_second_2.test | RUN | 0.016069 | 0.037523 | 0.053739 | 0.000572 | 0.000717 | 0.001614 |
| mp_replace_third.test | RUN | 0.180462 | 0.795153 | 0.683034 | 0.001750 | 0.001782 | 0.001857 |
| mp_replace_third_2.test | RUN | 0.016807 | 0.036892 | 0.056888 | 0.000586 | 0.000699 | 0.001882 |
| mp_apply_q.test | RUN | 0.205448 | 1.700221 | 0.902609 | 0.001778 | 0.001563 | 0.001572 |
| mp_apply_q_sf.test | RUN | 0.160501 | 0.515965 | 0.596410 | 0.001722 | 0.001726 | 0.001677 |
| mp_is_list.test | RUN | 0.168459 | 0.597631 | 0.553964 | 0.001550 | 0.001753 | 0.001620 |
| mp_list_c.test | RUN | 0.168409 | 0.709460 | 0.600646 | 0.001522 | 0.001666 | 0.001942 |
| mp_transform_front.test | RUN | 0.198627 | 1.378372 | 0.763099 | 0.001421 | 0.001665 | 0.001597 |
| mp_transform_front_2.test | RUN | 0.017636 | 0.034950 | 0.059971 | 0.000583 | 0.000718 | 0.001821 |
| mp_transform_second.test | RUN | 0.179844 | 1.193176 | 0.725610 | 0.001570 | 0.001807 | 0.001849 |
| mp_transform_second_2.test | RUN | 0.016998 | 0.038493 | 0.062563 | 0.000678 | 0.000716 | 0.001845 |
| mp_transform_third.test | RUN | 0.174289 | 0.929757 | 0.661971 | 0.001547 | 0.001658 | 0.001822 |
| mp_transform_third_2.test | RUN | 0.016471 | 0.037207 | 0.060668 | 0.000681 | 0.000695 | 0.001569 |
| mp_list_v.test | RUN | 0.017134 | 0.035087 | 0.056139 | 0.000555 | 0.000750 | 0.001762 |
| mp_rename_v.test | RUN | 0.016336 | 0.036847 | 0.052411 | 0.000595 | 0.000685 | 0.001439 |
| mp_is_value_list.test | RUN | 0.163403 | 0.383484 | 0.559888 | 0.001858 | 0.001886 | 0.001658 |
| mp_transform.test | RUN | 0.363164 | 2.931488 | 1.669044 | 0.001896 | 0.001432 | 0.001711 |
| mp_transform_2.test | RUN | 0.154652 | 0.343806 | 0.513289 | 0.001740 | 0.001726 | 0.001816 |
| mp_transform_q.test | RUN | 0.348927 | 2.780840 | 1.594342 | 0.001734 | 0.001761 | 0.001855 |
| mp_transform_q_2.test | RUN | 0.391593 | 0.922008 | 2.156661 | 0.001592 | 0.001599 | 0.001590 |
| mp_transform_sf.test | RUN | 0.174526 | 0.519990 | 0.622791 | 0.001683 | 0.001819 | 0.001819 |
| mp_transform_if.test | RUN | 0.214570 | 1.402741 | 0.895817 | 0.001706 | 0.001453 | 0.001694 |
| mp_transform_if_q.test | RUN | 0.215780 | 1.431455 | 0.911641 | 0.001538 | 0.001820 | 0.001234 |
| mp_filter.test | RUN | 0.193898 | 0.828197 | 0.710701 | 0.001668 | 0.001793 | 0.001684 |
| mp_fill.test | RUN | 0.181121 | 0.640825 | 0.614776 | 0.001872 | 0.001692 | 0.001890 |
| mp_fill_2.test | RUN | 0.030178 | 0.056723 | 0.096140 | 0.000772 | 0.000812 | 0.001850 |
| mp_count.test | RUN | 0.356943 | 1.535382 | 1.002661 | 0.001546 | 0.001614 | 0.001500 |
| mp_count_if.test | RUN | 0.354650 | 1.562336 | 1.117948 | 0.001549 | 0.001772 | 0.001639 |
| mp_count_if_q.test | RUN | 0.186475 | 1.010578 | 0.654066 | 0.001563 | 0.001931 | 0.001728 |
| mp_contains.test | RUN | 0.182020 | 0.615095 | 0.624322 | 0.001557 | 0.001663 | 0.001926 |
| mp_starts_with.test | RUN | 0.176412 | 0.621753 | 0.585052 | 0.001413 | 0.001959 | 0.001872 |
| mp_starts_with_sf.test | RUN | 0.172209 | 0.528239 | 0.620285 | 0.001500 | 0.001532 | 0.001525 |
| mp_repeat.test | RUN | 0.248720 | 2.513557 | 1.148124 | 0.001800 | 0.001613 | 0.001797 |
| mp_repeat_2.test | RUN | 0.028327 | 0.062517 | 0.105093 | 0.000702 | 0.000820 | 0.001744 |
| mp_repeat_3.test | RUN | 0.219550 | 0.345070 | 0.597803 | 0.001543 | 0.001826 | 0.001633 |
| mp_product.test | RUN | 0.201621 | 1.516014 | 0.811251 | 0.001589 | 0.001985 | 0.001619 |
| mp_drop.test | RUN | 0.209067 | 1.878801 | 0.946398 | 0.001784 | 0.001747 | 0.001836 |
| mp_drop_2.test | RUN | 0.028454 | 0.059484 | 0.100213 | 0.000636 | 0.000802 | 0.001501 |
| mp_iota.test | RUN | 0.207119 | 1.588165 | 0.890227 | 0.001711 | 0.001750 | 0.001973 |
| mp_iota_2.test | RUN | 0.222150 | 1.926533 | 0.948465 | 0.001544 | 0.001761 | 0.001712 |
| mp_at.test | RUN | 0.185292 | 0.836600 | 0.637884 | 0.001583 | 0.001731 | 0.001892 |
| mp_at_2.test | RUN | 0.028327 | 0.057942 | 0.101208 | 0.000684 | 0.000678 | 0.001948 |
| mp_at_sf.test | RUN | 0.174330 | 0.533588 | 0.584696 | 0.001622 | 0.001678 | 0.001928 |
| mp_take.test | RUN | 0.283673 | 2.455091 | 1.198380 | 0.001732 | 0.001616 | 0.001918 |
| mp_take_2.test | RUN | 0.028113 | 0.055554 | 0.091393 | 0.000775 | 0.000726 | 0.001452 |
| mp_slice.test | RUN | 0.327292 | 2.483807 | 1.484337 | 0.001832 | 0.001782 | 0.001953 |
| mp_slice_2.test | RUN | 0.028967 | 0.059478 | 0.090898 | 0.000707 | 0.000822 | 0.001869 |
| mp_replace.test | RUN | 0.212862 | 1.275477 | 0.887681 | 0.002028 | 0.001611 | 0.001950 |
| mp_replace_if.test | RUN | 0.207875 | 1.112454 | 0.890535 | 0.001643 | 0.001512 | 0.001824 |
| mp_replace_if_q.test | RUN | 0.209470 | 1.137710 | 0.872969 | 0.001700 | 0.001884 | 0.001896 |
| mp_copy_if.test | RUN | 0.212929 | 1.588815 | 0.835964 | 0.001853 | 0.001852 | 0.001996 |
| mp_copy_if_q.test | RUN | 0.211939 | 1.596411 | 0.847888 | 0.001774 | 0.001880 | 0.001904 |
| mp_remove.test | RUN | 0.211936 | 1.083476 | 0.863981 | 0.001707 | 0.002090 | 0.001822 |
| mp_remove_if.test | RUN | 0.211730 | 1.799372 | 0.837918 | 0.001675 | 0.002006 | 0.001918 |
| mp_remove_if_q.test | RUN | 0.219595 | 1.847605 | 0.904167 | 0.001902 | 0.002106 | 0.001806 |
| mp_partition.test | RUN | 0.210217 | 1.642271 | 0.940967 | 0.001862 | 0.001925 | 0.001956 |
| mp_partition_q.test | RUN | 0.221274 | 1.744093 | 0.943625 | 0.001589 | 0.002020 | 0.001856 |
| mp_sort.test | RUN | 0.203951 | 1.218844 | 0.830107 | 0.001572 | 0.001844 | 0.001929 |
| mp_sort_q.test | RUN | 0.207950 | 1.164643 | 0.829307 | 0.001911 | 0.001774 | 0.001708 |
| mp_find.test | RUN | 0.199873 | 1.256221 | 0.752054 | 0.001868 | 0.002024 | 0.001863 |
| mp_find_if.test | RUN | 0.192918 | 1.117765 | 0.630105 | 0.001678 | 0.001686 | 0.001864 |
| mp_find_if_q.test | RUN | 0.209632 | 1.270045 | 0.827922 | 0.001642 | 0.001898 | 0.001870 |
| mp_reverse.test | RUN | 0.419718 | 3.325322 | 1.605455 | 0.001655 | 0.001812 | 0.001930 |
| mp_fold.test | RUN | 0.681854 | 2.614674 | 4.073184 | 0.001672 | 0.001909 | 0.001768 |
| mp_fold_q.test | RUN | 0.195463 | 1.112851 | 0.770473 | 0.001662 | 0.001880 | 0.001881 |
| mp_fold_q_sf.test | RUN | 0.175474 | 0.556132 | 0.642490 | 0.001662 | 0.001829 | 0.001433 |
| mp_reverse_fold.test | RUN | 0.328350 | 2.492706 | 1.115658 | 0.001956 | 0.001900 | 0.001908 |
| mp_reverse_fold_q.test | RUN | 0.202697 | 1.336366 | 0.855481 | 0.001570 | 0.001868 | 0.001726 |
| mp_unique.test | RUN | 0.199129 | 1.236535 | 0.841271 | 0.001505 | 0.001867 | 0.001882 |
| mp_unique_if.test | RUN | 0.388473 | 2.631565 | 1.300674 | 0.001826 | 0.002043 | 0.001648 |
| mp_unique_if_q.test | RUN | 0.308489 | 2.656748 | 1.030418 | 0.001546 | 0.002024 | 0.001683 |
| mp_all_of.test | RUN | 0.495632 | 1.448363 | 1.397894 | 0.001797 | 0.001857 | 0.001718 |
| mp_all_of_q.test | RUN | 0.183050 | 0.622983 | 0.643434 | 0.001534 | 0.001910 | 0.001928 |
| mp_any_of.test | RUN | 0.537137 | 1.552905 | 1.461327 | 0.001824 | 0.001738 | 0.001925 |
| mp_any_of_q.test | RUN | 0.176784 | 0.634389 | 0.646500 | 0.001783 | 0.001882 | 0.001969 |
| mp_none_of.test | RUN | 0.514696 | 1.479083 | 1.419171 | 0.001571 | 0.001834 | 0.001912 |
| mp_none_of_q.test | RUN | 0.206325 | 0.625427 | 0.600359 | 0.001835 | 0.001860 | 0.001464 |
| mp_replace_at.test | RUN | 0.215663 | 1.232054 | 0.888782 | 0.001732 | 0.001532 | 0.001872 |
| mp_replace_at_c.test | RUN | 0.217076 | 1.202598 | 0.955721 | 0.001778 | 0.001744 | 0.001773 |
| mp_for_each.test | RUN | 0.213480 | 0.900243 | 1.077214 | 0.001499 | 0.001627 | 0.001898 |
| mp_insert.test | RUN | 0.314288 | 2.516228 | 1.246892 | 0.001890 | 0.001712 | 0.001816 |
| mp_insert_2.test | RUN | 0.029828 | 0.056896 | 0.103807 | 0.000599 | 0.000615 | 0.001863 |
| mp_erase.test | RUN | 0.340805 | 2.675990 | 1.460349 | 0.001832 | 0.001875 | 0.001752 |
| mp_erase_2.test | RUN | 0.027856 | 0.062536 | 0.101893 | 0.000698 | 0.000822 | 0.001884 |
| mp_with_index.test | RUN | 0.469579 | 5.452194 | 3.557775 | 0.002356 | 0.002226 | 0.002074 |
| mp_with_index_cx.test | RUN | 0.003736 | 0.019149 | 0.029159 | 0.000733 | 0.000799 | 0.001594 |
| mp_from_sequence.test | RUN | 0.214211 | 1.451258 | 0.847814 | 0.001806 | 0.001605 | 0.001823 |
| mp_from_sequence_2.test | RUN | 0.218393 | 1.641720 | 0.999939 | 0.001650 | 0.001816 | 0.001862 |
| mp_from_sequence_3.test | RUN | 0.192066 | 0.747555 | 0.645247 | 0.001761 | 0.001897 | 0.001853 |
| mp_min_element.test | RUN | 0.186786 | 0.692912 | 0.656558 | 0.001825 | 0.001928 | 0.001866 |
| mp_min_element_2.test | RUN | 0.028898 | 0.057792 | 0.103041 | 0.000604 | 0.000753 | 0.001615 |
| mp_min_element_q.test | RUN | 0.188956 | 0.666916 | 0.632511 | 0.001606 | 0.001784 | 0.001800 |
| mp_min_element_q_2.test | RUN | 0.030824 | 0.059247 | 0.097082 | 0.000685 | 0.000739 | 0.001820 |
| mp_max_element.test | RUN | 0.180264 | 0.651726 | 0.644378 | 0.001795 | 0.001818 | 0.001476 |
| mp_max_element_2.test | RUN | 0.028812 | 0.057135 | 0.097508 | 0.000597 | 0.000648 | 0.001798 |
| mp_max_element_q.test | RUN | 0.183569 | 0.666796 | 0.622891 | 0.001946 | 0.001828 | 0.001638 |
| mp_max_element_q_2.test | RUN | 0.027373 | 0.056742 | 0.101623 | 0.000659 | 0.000718 | 0.001524 |
| mp_nth_element.test | RUN | 0.198137 | 0.935580 | 0.821962 | 0.001728 | 0.001752 | 0.001954 |
| mp_nth_element_q.test | RUN | 0.198343 | 0.948934 | 0.813103 | 0.001832 | 0.001643 | 0.001678 |
| mp_back.test | RUN | 0.196212 | 0.762293 | 0.688686 | 0.001870 | 0.001609 | 0.001694 |
| mp_back_2.test | RUN | 0.029126 | 0.058955 | 0.105358 | 0.000783 | 0.000695 | 0.001642 |
| mp_pop_back.test | RUN | 0.511535 | 5.026384 | 1.523825 | 0.001937 | 0.001322 | 0.001685 |
| mp_pop_back_2.test | RUN | 0.034400 | 0.055644 | 0.091401 | 0.000759 | 0.000682 | 0.001722 |
| mp_flatten.test | RUN | 0.228922 | 1.773236 | 1.067527 | 0.001865 | 0.001636 | 0.001809 |
| mp_rotate_left.test | RUN | 0.230612 | 1.914832 | 1.048145 | 0.001549 | 0.001693 | 0.001862 |
| mp_rotate_right.test | RUN | 0.220607 | 1.825595 | 1.056974 | 0.001650 | 0.001554 | 0.001612 |
| mp_power_set.test | RUN | 0.222991 | 1.822144 | 1.034222 | 0.001646 | 0.001820 | 0.001732 |
| mp_partial_sum.test | RUN | 0.301647 | 2.454173 | 1.193024 | 0.001926 | 0.001637 | 0.001767 |
| mp_iterate.test | RUN | 0.203001 | 0.747769 | 0.823174 | 0.001741 | 0.001864 | 0.001479 |
| mp_pairwise_fold.test | RUN | 0.234072 | 1.686060 | 1.070752 | 0.001614 | 0.001903 | 0.001762 |
| mp_pairwise_fold_q.test | RUN | 0.178223 | 0.506924 | 0.644620 | 0.001831 | 0.001667 | 0.001962 |
| mp_sliding_fold.test | RUN | 0.431339 | 3.209933 | 1.966189 | 0.001808 | 0.001906 | 0.001752 |
| mp_sliding_fold_q.test | RUN | 0.429052 | 3.279850 | 1.970230 | 0.001541 | 0.001756 | 0.001790 |
| mp_intersperse.test | RUN | 0.209603 | 1.228473 | 0.939786 | 0.001808 | 0.001781 | 0.002004 |
| mp_split.test | RUN | 0.292515 | 2.372600 | 1.239667 | 0.001650 | 0.001878 | 0.001765 |
| mp_join.test | RUN | 0.237533 | 1.961257 | 1.113627 | 0.001608 | 0.001760 | 0.001784 |
| integral.test | RUN | 0.182918 | 0.902672 | 0.664594 | 0.001833 | 0.001880 | 0.001900 |
| mp_value.test | RUN | 0.012904 | 0.031598 | 0.050272 | 0.000743 | 0.000635 | 0.001808 |
| mp_identity.test | RUN | 0.170425 | 0.824313 | 0.595441 | 0.001804 | 0.001664 | 0.001876 |
| mp_inherit.test | RUN | 0.169344 | 0.593797 | 0.620362 | 0.001821 | 0.001834 | 0.001974 |
| mp_if.test | RUN | 0.170101 | 0.677065 | 0.647002 | 0.001944 | 0.001918 | 0.001707 |
| mp_if_sf.test | RUN | 0.159140 | 0.507332 | 0.547284 | 0.001661 | 0.001564 | 0.001679 |
| mp_eval_if.test | RUN | 0.176170 | 0.690128 | 0.633362 | 0.001625 | 0.001411 | 0.001525 |
| mp_eval_if_sf.test | RUN | 0.160621 | 0.528588 | 0.578141 | 0.001820 | 0.001834 | 0.001995 |
| mp_valid.test | RUN | 0.161450 | 0.523301 | 0.606991 | 0.001683 | 0.001506 | 0.001838 |
| mp_defer.test | RUN | 0.183106 | 0.881576 | 0.702247 | 0.001685 | 0.001964 | 0.001880 |
| mp_quote.test | RUN | 0.184942 | 0.896312 | 0.722947 | 0.001592 | 0.001875 | 0.001876 |
| mp_invoke_q.test | RUN | 0.194445 | 1.168727 | 0.792144 | 0.001785 | 0.001850 | 0.002040 |
| mp_invoke_q_sf.test | RUN | 0.164377 | 0.537956 | 0.559960 | 0.001580 | 0.001882 | 0.001896 |
| mp_quote_trait.test | RUN | 0.177276 | 0.949118 | 0.675235 | 0.001625 | 0.001458 | 0.001974 |
| mp_cond.test | RUN | 0.178108 | 0.577979 | 0.602197 | 0.001631 | 0.001842 | 0.001944 |
| mp_cond_sf.test | RUN | 0.166367 | 0.522108 | 0.550893 | 0.001672 | 0.001960 | 0.001833 |
| mp_not_fn.test | RUN | 0.166043 | 0.523086 | 0.583868 | 0.001582 | 0.001646 | 0.002035 |
| mp_eval_if_not.test | RUN | 0.182821 | 0.710995 | 0.594406 | 0.001843 | 0.001750 | 0.001978 |
| mp_eval_or.test | RUN | 0.170183 | 0.380771 | 0.615377 | 0.001686 | 0.001664 | 0.001865 |
| mp_compose.test | RUN | 0.185511 | 1.168823 | 0.767962 | 0.001834 | 0.001795 | 0.001802 |
| mp_valid_and_true.test | RUN | 0.167055 | 0.612915 | 0.573254 | 0.001640 | 0.001823 | 0.001816 |
| mp_compose_sf.test | COMPILE | 0.040898 | 0.079049 | 0.155371 | — | — | — |
| integer_sequence.test | RUN | 0.205327 | 1.149120 | 0.818528 | 0.001552 | 0.001892 | 0.001918 |
| tuple_for_each.test | RUN | 0.172259 | 0.461156 | 0.613984 | 0.001602 | 0.001528 | 0.001638 |
| tuple_for_each_cx.test | COMPILE | 0.033528 | 0.062949 | 0.116724 | — | — | — |
| tuple_apply.test | RUN | 0.171182 | 0.446882 | 0.649794 | 0.001642 | 0.001764 | 0.001748 |
| tuple_apply_cx.test | COMPILE | 0.044871 | 0.090798 | 0.159845 | — | — | — |
| construct_from_tuple.test | RUN | 0.173812 | 0.480041 | 0.651101 | 0.001818 | 0.001610 | 0.001906 |
| construct_from_tuple_cx.test | COMPILE | 0.046749 | 0.091232 | 0.140672 | — | — | — |
| tuple_transform.test | RUN | 0.277055 | 0.961673 | 1.261505 | 0.001724 | 0.001902 | 0.001694 |
| tuple_transform_2.test | RUN | 0.244954 | 0.738417 | 1.126391 | 0.001788 | 0.001622 | 0.001957 |
| tuple_transform_cx.test | COMPILE | 0.041179 | 0.085384 | 0.159813 | — | — | — |
| mp_set_contains.test | RUN | 0.176226 | 0.580025 | 0.631999 | 0.001536 | 0.001419 | 0.001670 |
| mp_set_push_back.test | RUN | 0.234951 | 1.829312 | 1.043979 | 0.001900 | 0.001866 | 0.001837 |
| mp_set_push_front.test | RUN | 0.289426 | 2.268867 | 1.193176 | 0.001633 | 0.001897 | 0.001597 |
| mp_is_set.test | RUN | 0.172907 | 0.658799 | 0.651972 | 0.001701 | 0.001980 | 0.001970 |
| mp_set_union.test | RUN | 0.225133 | 1.617142 | 0.974130 | 0.001500 | 0.001882 | 0.001782 |
| mp_set_union_sf.test | RUN | 0.168585 | 0.495998 | 0.603020 | 0.001932 | 0.001974 | 0.001495 |
| mp_set_difference.test | RUN | 0.200338 | 1.250600 | 0.868676 | 0.001806 | 0.001843 | 0.001974 |
| mp_set_difference_sf.test | RUN | 0.165874 | 0.508989 | 0.599121 | 0.001578 | 0.001875 | 0.001649 |
| mp_set_intersection.test | RUN | 0.195543 | 1.235727 | 0.831012 | 0.001573 | 0.001890 | 0.001964 |
| mp_set_intersection_sf.test | RUN | 0.167512 | 0.506342 | 0.602719 | 0.001865 | 0.001838 | 0.001470 |
| mp_all.test | RUN | 0.172521 | 0.598500 | 0.637830 | 0.001804 | 0.001464 | 0.001642 |
| mp_all_2.test | RUN | 0.473490 | 1.332729 | 1.376793 | 0.001810 | 0.001721 | 0.002018 |
| mp_and.test | RUN | 0.180046 | 0.622850 | 0.638560 | 0.001832 | 0.001912 | 0.001730 |
| mp_any.test | RUN | 0.179110 | 0.630960 | 0.608597 | 0.001672 | 0.001894 | 0.001736 |
| mp_any_2.test | RUN | 0.505125 | 1.320248 | 1.395821 | 0.001460 | 0.001692 | 0.001693 |
| mp_or.test | RUN | 0.172218 | 0.632907 | 0.629916 | 0.001826 | 0.001622 | 0.001706 |
| mp_same.test | RUN | 0.346907 | 1.045396 | 0.958481 | 0.001534 | 0.001961 | 0.001940 |
| mp_plus.test | RUN | 0.177950 | 0.727171 | 0.649348 | 0.001652 | 0.001916 | 0.001676 |
| mp_less.test | RUN | 0.173991 | 0.612441 | 0.574044 | 0.001872 | 0.001668 | 0.001759 |
| mp_min.test | RUN | 0.167410 | 0.562935 | 0.601507 | 0.001889 | 0.001859 | 0.001770 |
| mp_max.test | RUN | 0.177242 | 0.623851 | 0.606069 | 0.001511 | 0.001988 | 0.001923 |
| mp_similar.test | RUN | 0.182067 | 0.622028 | 0.623444 | 0.001559 | 0.001798 | 0.001839 |
| mp_map_find.test | RUN | 0.203139 | 1.097633 | 0.806339 | 0.001821 | 0.001682 | 0.001812 |
| mp_map_find_2.test | RUN | 0.190197 | 0.452846 | 0.699521 | 0.001784 | 0.001886 | 0.001716 |
| mp_map_find_3.test | RUN | 0.192359 | 0.446757 | 0.688398 | 0.001688 | 0.001774 | 0.001721 |
| mp_map_find_4.test | RUN | 0.182570 | 0.420075 | 0.607936 | 0.001587 | 0.001834 | 0.001768 |
| mp_map_contains.test | RUN | 0.177929 | 0.636765 | 0.628191 | 0.001824 | 0.001958 | 0.001920 |
| mp_map_insert.test | RUN | 0.240377 | 2.076087 | 1.137316 | 0.001826 | 0.001891 | 0.001882 |
| mp_map_replace.test | RUN | 0.295776 | 2.369353 | 1.287575 | 0.001426 | 0.001934 | 0.001921 |
| mp_map_erase.test | RUN | 0.229193 | 1.745779 | 1.052305 | 0.001568 | 0.001796 | 0.001744 |
| mp_map_update.test | RUN | 0.201787 | 1.150521 | 0.848272 | 0.002008 | 0.001931 | 0.001577 |
| mp_map_update_q.test | RUN | 0.202706 | 1.150263 | 0.811276 | 0.001740 | 0.001739 | 0.001651 |
| mp_map_keys.test | RUN | 0.203615 | 1.026938 | 0.815188 | 0.001626 | 0.001966 | 0.001426 |
| mp_is_map.test | RUN | 0.182257 | 0.629564 | 0.680392 | 0.001582 | 0.001840 | 0.001465 |
| mp_bind.test | RUN | 0.217480 | 1.857682 | 0.969483 | 0.001554 | 0.001901 | 0.001844 |
| mp_bind_q.test | RUN | 0.197542 | 1.149146 | 0.805188 | 0.001851 | 0.001891 | 0.001768 |
| mp_bind_front.test | RUN | 0.194029 | 1.258971 | 0.788720 | 0.001654 | 0.001834 | 0.001658 |
| mp_bind_back.test | RUN | 0.191639 | 1.282885 | 0.735705 | 0.001682 | 0.001865 | 0.001536 |
| mp_lambda.test | RUN | 0.423653 | 3.808911 | 2.004029 | 0.001745 | 0.001322 | 0.001691 |
| mpl.test | RUN | 0.391265 | 1.001928 | 1.589191 | 0.002018 | 0.001650 | 0.001806 |
| mpl_list.test | RUN | 0.228046 | 0.753479 | 0.756608 | 0.001662 | 0.001819 | 0.001627 |
| mpl_tuple.test | RUN | 0.226903 | 0.772945 | 0.770246 | 0.001660 | 0.001686 | 0.001539 |
| version.test | RUN | 0.119476 | 0.283476 | 0.404575 | 0.001978 | 0.001833 | 0.001530 |
| mp11_version.test | RUN | 0.140909 | 0.328451 | 0.475420 | 0.001834 | 0.001530 | 0.001868 |
| list_version.test | RUN | 0.122961 | 0.286933 | 0.408471 | 0.001550 | 0.001732 | 0.001526 |
| algorithm_version.test | RUN | 0.133066 | 0.307991 | 0.428682 | 0.001771 | 0.001823 | 0.001497 |
| integral_version.test | RUN | 0.116169 | 0.279057 | 0.385616 | 0.001742 | 0.001638 | 0.001876 |
| utility_version.test | RUN | 0.116225 | 0.289953 | 0.393633 | 0.001661 | 0.001670 | 0.001866 |
| function_version.test | RUN | 0.116033 | 0.289746 | 0.402495 | 0.001664 | 0.001704 | 0.001886 |
| map_version.test | RUN | 0.133281 | 0.303375 | 0.431784 | 0.002016 | 0.001504 | 0.001431 |
| set_version.test | RUN | 0.124866 | 0.276205 | 0.396828 | 0.001798 | 0.001794 | 0.001761 |
| bind_version.test | RUN | 0.137832 | 0.304421 | 0.429710 | 0.001924 | 0.001608 | 0.001626 |
| integer_sequence_version.test | RUN | 0.118817 | 0.270057 | 0.402175 | 0.001748 | 0.001748 | 0.001850 |
| tuple_version.test | RUN | 0.135846 | 0.300129 | 0.423558 | 0.001522 | 0.001470 | 0.001164 |
| mpl_version.test | RUN | 0.129352 | 0.250766 | 0.285130 | 0.001381 | 0.001516 | 0.001364 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.969×† | 0.932×, 1.005× | 1.004× |
| clang | 1.121×† | 1.154×, 1.087× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44830361139).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000949s | 0.000941s | 0.000954s | byte equality observed |
| bind_version.test | 10 | 0.000974s | 0.000916s | 0.000966s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000961s | 0.000929s | 0.000966s | byte equality observed |
| function_version.test | 10 | 0.000953s | 0.000927s | 0.000965s | byte equality observed |
| integer_sequence.test | 10 | 0.000971s | 0.000959s | 0.000963s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000970s | 0.000929s | 0.000966s | byte equality observed |
| integral.test | 10 | 0.000986s | 0.000932s | 0.001022s | byte equality observed |
| integral_version.test | 10 | 0.000989s | 0.000936s | 0.000988s | byte equality observed |
| list_version.test | 10 | 0.000989s | 0.000924s | 0.000990s | byte equality observed |
| map_version.test | 10 | 0.000976s | 0.000937s | 0.000959s | byte equality observed |
| mp11_version.test | 10 | 0.000984s | 0.000932s | 0.000969s | byte equality observed |
| mp_all.test | 10 | 0.000983s | 0.000930s | 0.001019s | byte equality observed |
| mp_all_2.test | 10 | 0.000984s | 0.000954s | 0.000956s | byte equality observed |
| mp_all_of.test | 10 | 0.000986s | 0.000980s | 0.000998s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000993s | 0.000998s | 0.001064s | byte equality observed |
| mp_and.test | 10 | 0.000977s | 0.001002s | 0.001007s | byte equality observed |
| mp_any.test | 10 | 0.000993s | 0.001011s | 0.000991s | byte equality observed |
| mp_any_2.test | 10 | 0.000979s | 0.000981s | 0.001026s | byte equality observed |
| mp_any_of.test | 10 | 0.000985s | 0.000992s | 0.001024s | byte equality observed |
| mp_any_of_q.test | 10 | 0.001030s | 0.001037s | 0.000998s | byte equality observed |
| mp_append.test | 10 | 0.000992s | 0.001019s | 0.000974s | byte equality observed |
| mp_append_2.test | 10 | 0.001022s | 0.001015s | 0.000985s | byte equality observed |
| mp_append_3.test | 10 | 0.000462s | 0.000460s | 0.000973s | byte equality observed |
| mp_append_sf.test | 10 | 0.000982s | 0.001015s | 0.001011s | byte equality observed |
| mp_apply_q.test | 10 | 0.000984s | 0.000997s | 0.001002s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.001008s | 0.001000s | 0.000994s | byte equality observed |
| mp_assign.test | 5 | 0.000994s | 0.000986s | 0.001025s | byte equality observed |
| mp_assign_2.test | 10 | 0.000455s | 0.000455s | 0.000954s | byte equality observed |
| mp_at.test | 10 | 0.001014s | 0.001033s | 0.001014s | byte equality observed |
| mp_at_2.test | 10 | 0.000455s | 0.000457s | 0.001000s | byte equality observed |
| mp_at_sf.test | 10 | 0.000974s | 0.000988s | 0.001009s | byte equality observed |
| mp_back.test | 10 | 0.000996s | 0.001020s | 0.000994s | byte equality observed |
| mp_back_2.test | 10 | 0.000452s | 0.000454s | 0.000988s | byte equality observed |
| mp_bind.test | 10 | 0.001011s | 0.001015s | 0.000999s | byte equality observed |
| mp_bind_back.test | 10 | 0.000993s | 0.000995s | 0.000976s | byte equality observed |
| mp_bind_front.test | 10 | 0.001008s | 0.000985s | 0.001018s | byte equality observed |
| mp_bind_q.test | 10 | 0.000991s | 0.000984s | 0.001018s | byte equality observed |
| mp_clear.test | 10 | 0.001015s | 0.000989s | 0.001007s | byte equality observed |
| mp_clear_2.test | 10 | 0.000450s | 0.000465s | 0.000944s | byte equality observed |
| mp_compose.test | 10 | 0.001015s | 0.000999s | 0.000982s | byte equality observed |
| mp_cond.test | 10 | 0.001004s | 0.000994s | 0.000996s | byte equality observed |
| mp_cond_sf.test | 10 | 0.001007s | 0.001023s | 0.001004s | byte equality observed |
| mp_contains.test | 10 | 0.001007s | 0.000976s | 0.000998s | byte equality observed |
| mp_copy_if.test | 10 | 0.001001s | 0.000981s | 0.000985s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.000988s | 0.000974s | 0.001024s | byte equality observed |
| mp_count.test | 10 | 0.000979s | 0.001003s | 0.001000s | byte equality observed |
| mp_count_if.test | 10 | 0.000981s | 0.000987s | 0.001016s | byte equality observed |
| mp_count_if_q.test | 10 | 0.001005s | 0.001000s | 0.001016s | byte equality observed |
| mp_defer.test | 10 | 0.000983s | 0.001000s | 0.001020s | byte equality observed |
| mp_drop.test | 10 | 0.001022s | 0.001006s | 0.000995s | byte equality observed |
| mp_drop_2.test | 10 | 0.000458s | 0.000457s | 0.000974s | byte equality observed |
| mp_empty.test | 10 | 0.001017s | 0.000996s | 0.001004s | byte equality observed |
| mp_empty_2.test | 10 | 0.000458s | 0.000458s | 0.000982s | byte equality observed |
| mp_erase.test | 10 | 0.001033s | 0.001016s | 0.000999s | byte equality observed |
| mp_erase_2.test | 10 | 0.000469s | 0.000467s | 0.001009s | byte equality observed |
| mp_eval_if.test | 10 | 0.000995s | 0.000994s | 0.001027s | byte equality observed |
| mp_eval_if_not.test | 9 | 0.001026s | 0.000986s | 0.001014s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.000987s | 0.000987s | 0.001027s | byte equality observed |
| mp_eval_or.test | 10 | 0.000994s | 0.000962s | 0.000997s | byte equality observed |
| mp_fill.test | 10 | 0.001004s | 0.001007s | 0.000977s | byte equality observed |
| mp_fill_2.test | 10 | 0.000469s | 0.000456s | 0.000995s | byte equality observed |
| mp_filter.test | 10 | 0.001004s | 0.000972s | 0.000988s | byte equality observed |
| mp_find.test | 10 | 0.001009s | 0.000977s | 0.001031s | byte equality observed |
| mp_find_if.test | 10 | 0.001018s | 0.000980s | 0.001017s | byte equality observed |
| mp_find_if_q.test | 10 | 0.001016s | 0.000972s | 0.001035s | byte equality observed |
| mp_flatten.test | 10 | 0.000990s | 0.000967s | 0.001001s | byte equality observed |
| mp_fold.test | 10 | 0.001045s | 0.000970s | 0.001032s | byte equality observed |
| mp_fold_q.test | 10 | 0.000981s | 0.000983s | 0.000978s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.001036s | 0.000996s | 0.001029s | byte equality observed |
| mp_for_each.test | 10 | 0.000987s | 0.000974s | 0.001018s | byte equality observed |
| mp_from_sequence.test | 10 | 0.000976s | 0.001000s | 0.001005s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.001009s | 0.000996s | 0.001001s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.001009s | 0.000994s | 0.000986s | byte equality observed |
| mp_front.test | 10 | 0.001010s | 0.001029s | 0.000979s | byte equality observed |
| mp_front_2.test | 10 | 0.000464s | 0.000464s | 0.000997s | byte equality observed |
| mp_identity.test | 10 | 0.000994s | 0.000992s | 0.001023s | byte equality observed |
| mp_if.test | 10 | 0.000999s | 0.000974s | 0.000992s | byte equality observed |
| mp_if_sf.test | 10 | 0.000993s | 0.000944s | 0.000975s | byte equality observed |
| mp_inherit.test | 10 | 0.000991s | 0.000977s | 0.000996s | byte equality observed |
| mp_insert.test | 10 | 0.001010s | 0.001008s | 0.000988s | byte equality observed |
| mp_insert_2.test | 10 | 0.000457s | 0.000450s | 0.000961s | byte equality observed |
| mp_intersperse.test | 10 | 0.000998s | 0.000980s | 0.001021s | byte equality observed |
| mp_invoke_q.test | 10 | 0.000987s | 0.000982s | 0.001027s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.000981s | 0.000995s | 0.001043s | byte equality observed |
| mp_iota.test | 10 | 0.000993s | 0.000997s | 0.001042s | byte equality observed |
| mp_iota_2.test | 10 | 0.000966s | 0.000997s | 0.001012s | byte equality observed |
| mp_is_list.test | 10 | 0.001006s | 0.000978s | 0.001059s | byte equality observed |
| mp_is_map.test | 10 | 0.001021s | 0.001015s | 0.001009s | byte equality observed |
| mp_is_set.test | 10 | 0.001026s | 0.001000s | 0.000997s | byte equality observed |
| mp_is_value_list.test | 10 | 0.000989s | 0.001004s | 0.001029s | byte equality observed |
| mp_iterate.test | 10 | 0.000985s | 0.000982s | 0.001006s | byte equality observed |
| mp_join.test | 10 | 0.000989s | 0.000968s | 0.001004s | byte equality observed |
| mp_lambda.test | 10 | 0.001029s | 0.001004s | 0.001003s | byte equality observed |
| mp_less.test | 10 | 0.000994s | 0.001040s | 0.000979s | byte equality observed |
| mp_list_c.test | 10 | 0.001005s | 0.001020s | 0.001005s | byte equality observed |
| mp_list_v.test | 10 | 0.000460s | 0.000456s | 0.000979s | byte equality observed |
| mp_map_contains.test | 10 | 0.000991s | 0.000993s | 0.000999s | byte equality observed |
| mp_map_erase.test | 10 | 0.000989s | 0.001035s | 0.001003s | byte equality observed |
| mp_map_find.test | 10 | 0.000989s | 0.000979s | 0.000984s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000992s | 0.000985s | 0.000978s | byte equality observed |
| mp_map_find_3.test | 10 | 0.000972s | 0.000990s | 0.001036s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000995s | 0.000970s | 0.001007s | byte equality observed |
| mp_map_insert.test | 10 | 0.000999s | 0.000994s | 0.001024s | byte equality observed |
| mp_map_keys.test | 10 | 0.000992s | 0.001019s | 0.001021s | byte equality observed |
| mp_map_replace.test | 10 | 0.000998s | 0.000999s | 0.001056s | byte equality observed |
| mp_map_update.test | 10 | 0.001001s | 0.001006s | 0.001014s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000989s | 0.000999s | 0.000990s | byte equality observed |
| mp_max.test | 10 | 0.001014s | 0.001005s | 0.000993s | byte equality observed |
| mp_max_element.test | 10 | 0.001006s | 0.001026s | 0.000990s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000458s | 0.000458s | 0.000962s | byte equality observed |
| mp_max_element_q.test | 10 | 0.001010s | 0.001035s | 0.001002s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000466s | 0.000461s | 0.000960s | byte equality observed |
| mp_min.test | 10 | 0.000991s | 0.001026s | 0.000979s | byte equality observed |
| mp_min_element.test | 10 | 0.001000s | 0.001006s | 0.000998s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000460s | 0.000455s | 0.000997s | byte equality observed |
| mp_min_element_q.test | 10 | 0.001021s | 0.001016s | 0.001019s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000466s | 0.000456s | 0.001003s | byte equality observed |
| mp_none_of.test | 10 | 0.000981s | 0.000987s | 0.000980s | byte equality observed |
| mp_none_of_q.test | 10 | 0.001009s | 0.001022s | 0.001013s | byte equality observed |
| mp_not_fn.test | 10 | 0.000992s | 0.000984s | 0.001012s | byte equality observed |
| mp_nth_element.test | 10 | 0.000995s | 0.000997s | 0.001020s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.000984s | 0.000969s | 0.001007s | byte equality observed |
| mp_or.test | 10 | 0.000978s | 0.001025s | 0.001011s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.001022s | 0.001000s | 0.001012s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.000974s | 0.001001s | 0.000998s | byte equality observed |
| mp_partial_sum.test | 10 | 0.001003s | 0.001034s | 0.000998s | byte equality observed |
| mp_partition.test | 10 | 0.000989s | 0.000992s | 0.000989s | byte equality observed |
| mp_partition_q.test | 10 | 0.000979s | 0.000995s | 0.000995s | byte equality observed |
| mp_plus.test | 10 | 0.000993s | 0.000995s | 0.000969s | byte equality observed |
| mp_pop_back.test | 10 | 0.001010s | 0.001016s | 0.001004s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000453s | 0.000452s | 0.000967s | byte equality observed |
| mp_pop_front.test | 10 | 0.001001s | 0.001041s | 0.001009s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000458s | 0.000459s | 0.001004s | byte equality observed |
| mp_power_set.test | 10 | 0.000986s | 0.001001s | 0.001014s | byte equality observed |
| mp_product.test | 10 | 0.000998s | 0.001023s | 0.001031s | byte equality observed |
| mp_push_back.test | 10 | 0.001002s | 0.001034s | 0.001017s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000453s | 0.000453s | 0.001016s | byte equality observed |
| mp_push_front.test | 10 | 0.001025s | 0.001004s | 0.001032s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000456s | 0.000459s | 0.000964s | byte equality observed |
| mp_quote.test | 10 | 0.000992s | 0.001013s | 0.001033s | byte equality observed |
| mp_quote_trait.test | 10 | 0.001010s | 0.001000s | 0.001017s | byte equality observed |
| mp_remove.test | 10 | 0.000997s | 0.001009s | 0.001014s | byte equality observed |
| mp_remove_if.test | 10 | 0.000989s | 0.001021s | 0.001048s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.000986s | 0.000995s | 0.000991s | byte equality observed |
| mp_rename.test | 10 | 0.000993s | 0.000998s | 0.001029s | byte equality observed |
| mp_rename_2.test | 10 | 0.000461s | 0.000460s | 0.000972s | byte equality observed |
| mp_rename_v.test | 10 | 0.000467s | 0.000461s | 0.001003s | byte equality observed |
| mp_repeat.test | 10 | 0.001034s | 0.001002s | 0.001012s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000460s | 0.000453s | 0.000964s | byte equality observed |
| mp_repeat_3.test | 10 | 0.001014s | 0.000964s | 0.000994s | byte equality observed |
| mp_replace.test | 10 | 0.000990s | 0.000973s | 0.001032s | byte equality observed |
| mp_replace_at.test | 10 | 0.000992s | 0.000979s | 0.001000s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.000988s | 0.000980s | 0.001026s | byte equality observed |
| mp_replace_front.test | 10 | 0.000986s | 0.001015s | 0.001008s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000464s | 0.000443s | 0.000960s | byte equality observed |
| mp_replace_if.test | 10 | 0.000997s | 0.000983s | 0.000984s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.001008s | 0.001004s | 0.000990s | byte equality observed |
| mp_replace_second.test | 10 | 0.001025s | 0.001010s | 0.001014s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000447s | 0.000461s | 0.000977s | byte equality observed |
| mp_replace_third.test | 10 | 0.001014s | 0.001022s | 0.000973s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000458s | 0.000459s | 0.000970s | byte equality observed |
| mp_reverse.test | 10 | 0.001009s | 0.001008s | 0.000981s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.001020s | 0.001009s | 0.000991s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000972s | 0.000979s | 0.001014s | byte equality observed |
| mp_rotate_left.test | 10 | 0.000970s | 0.001004s | 0.000968s | byte equality observed |
| mp_rotate_right.test | 10 | 0.000974s | 0.001000s | 0.001005s | byte equality observed |
| mp_same.test | 10 | 0.000994s | 0.000999s | 0.000984s | byte equality observed |
| mp_second.test | 10 | 0.001010s | 0.000988s | 0.001046s | byte equality observed |
| mp_second_2.test | 10 | 0.000466s | 0.000452s | 0.000968s | byte equality observed |
| mp_set_contains.test | 10 | 0.001008s | 0.000988s | 0.001015s | byte equality observed |
| mp_set_difference.test | 10 | 0.000997s | 0.000998s | 0.001020s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000988s | 0.000982s | 0.000989s | byte equality observed |
| mp_set_intersection.test | 10 | 0.001005s | 0.000990s | 0.000999s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000984s | 0.000975s | 0.001033s | byte equality observed |
| mp_set_push_back.test | 10 | 0.000991s | 0.001000s | 0.001001s | byte equality observed |
| mp_set_push_front.test | 10 | 0.001008s | 0.001006s | 0.000986s | byte equality observed |
| mp_set_union.test | 10 | 0.001024s | 0.001026s | 0.001018s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.000991s | 0.001006s | 0.000962s | byte equality observed |
| mp_similar.test | 10 | 0.000994s | 0.000990s | 0.000985s | byte equality observed |
| mp_size.test | 10 | 0.001024s | 0.001013s | 0.000996s | byte equality observed |
| mp_size_2.test | 10 | 0.000460s | 0.000453s | 0.000982s | byte equality observed |
| mp_slice.test | 10 | 0.001033s | 0.001031s | 0.000988s | byte equality observed |
| mp_slice_2.test | 10 | 0.000456s | 0.000451s | 0.001007s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.000993s | 0.000999s | 0.000989s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.001018s | 0.001012s | 0.001061s | byte equality observed |
| mp_sort.test | 10 | 0.001000s | 0.000982s | 0.000989s | byte equality observed |
| mp_sort_q.test | 10 | 0.000979s | 0.000985s | 0.000971s | byte equality observed |
| mp_split.test | 10 | 0.000991s | 0.000980s | 0.001008s | byte equality observed |
| mp_starts_with.test | 10 | 0.000986s | 0.001020s | 0.001014s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.000983s | 0.001014s | 0.001001s | byte equality observed |
| mp_take.test | 10 | 0.001015s | 0.001005s | 0.000994s | byte equality observed |
| mp_take_2.test | 10 | 0.000458s | 0.000454s | 0.000968s | byte equality observed |
| mp_third.test | 10 | 0.001008s | 0.001012s | 0.000987s | byte equality observed |
| mp_third_2.test | 10 | 0.000454s | 0.000446s | 0.000964s | byte equality observed |
| mp_transform.test | 10 | 0.001025s | 0.000997s | 0.000985s | byte equality observed |
| mp_transform_2.test | 10 | 0.000973s | 0.000957s | 0.000931s | byte equality observed |
| mp_transform_front.test | 10 | 0.000998s | 0.001034s | 0.000984s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000467s | 0.000462s | 0.000944s | byte equality observed |
| mp_transform_if.test | 10 | 0.001004s | 0.001022s | 0.000982s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.000992s | 0.001003s | 0.001040s | byte equality observed |
| mp_transform_q.test | 10 | 0.001003s | 0.000984s | 0.001021s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.000985s | 0.000990s | 0.001029s | byte equality observed |
| mp_transform_second.test | 10 | 0.001015s | 0.001002s | 0.000998s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000462s | 0.000452s | 0.000982s | byte equality observed |
| mp_transform_sf.test | 10 | 0.001017s | 0.001002s | 0.001016s | byte equality observed |
| mp_transform_third.test | 10 | 0.001018s | 0.001024s | 0.000997s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000462s | 0.000455s | 0.001020s | byte equality observed |
| mp_unique.test | 10 | 0.000978s | 0.000994s | 0.000996s | byte equality observed |
| mp_unique_if.test | 10 | 0.000999s | 0.001051s | 0.000983s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.000994s | 0.001004s | 0.000967s | byte equality observed |
| mp_valid.test | 10 | 0.000978s | 0.000989s | 0.001027s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.001008s | 0.001027s | 0.001030s | byte equality observed |
| mp_value.test | 10 | 0.000458s | 0.000465s | 0.000969s | byte equality observed |
| mp_with_index.test | 10 | 0.001370s | 0.001306s | 0.001301s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000459s | 0.000464s | 0.000975s | byte equality observed |
| mpl.test | 10 | 0.001018s | 0.000992s | 0.001006s | byte equality observed |
| mpl_list.test | 10 | 0.000980s | 0.000993s | 0.001010s | byte equality observed |
| mpl_tuple.test | 10 | 0.001010s | 0.000979s | 0.001000s | byte equality observed |
| mpl_version.test | 10 | 0.000992s | 0.000990s | 0.001076s | byte equality observed |
| set_version.test | 10 | 0.001054s | 0.000990s | 0.001025s | byte equality observed |
| tuple_apply.test | 10 | 0.001005s | 0.000996s | 0.001020s | byte equality observed |
| tuple_for_each.test | 10 | 0.001004s | 0.000979s | 0.001065s | byte equality observed |
| tuple_transform.test | 10 | 0.001007s | 0.001008s | 0.001082s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000990s | 0.001007s | 0.000986s | byte equality observed |
| tuple_version.test | 10 | 0.000974s | 0.001016s | 0.001002s | byte equality observed |
| utility_version.test | 10 | 0.000998s | 0.000973s | 0.001057s | byte equality observed |
| version.test | 10 | 0.000998s | 0.000980s | 0.001090s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44830361139).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
