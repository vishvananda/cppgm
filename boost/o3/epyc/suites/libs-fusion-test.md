# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.360290 | 0.746298 | 1.111037 | 0.001622 | 0.001523 | 0.001856 |
| any.test | RUN | 0.347649 | 0.709810 | 1.014697 | 0.001529 | 0.001679 | 0.001881 |
| clear.test | RUN | 0.254283 | 0.642930 | 0.857576 | 0.001642 | 0.001602 | 0.001618 |
| copy.test | RUN | 0.212918 | 0.495063 | 0.702220 | 0.001660 | 0.001588 | 0.001620 |
| count.test | RUN | 0.243132 | 0.537250 | 0.789200 | 0.001858 | 0.001866 | 0.001830 |
| count_if.test | RUN | 0.229970 | 0.495723 | 0.732068 | 0.001497 | 0.001688 | 0.001741 |
| erase.test | RUN | 0.319928 | 0.879986 | 1.137431 | 0.001576 | 0.001669 | 0.001678 |
| erase_key.test | RUN | 0.308164 | 0.868708 | 1.056395 | 0.001694 | 0.001789 | 0.001582 |
| filter.test | RUN | 0.283750 | 0.723310 | 0.931610 | 0.001814 | 0.001922 | 0.001701 |
| filter_if.test | RUN | 0.319079 | 0.843487 | 1.114286 | 0.001854 | 0.002002 | 0.002004 |
| find.test | RUN | 0.280587 | 0.602725 | 0.842423 | 0.001826 | 0.001633 | 0.001643 |
| find_if.test | RUN | 0.265154 | 0.546450 | 0.775952 | 0.001461 | 0.001746 | 0.001726 |
| fold.test | RUN | 0.286831 | 0.680029 | 0.958165 | 0.001822 | 0.001740 | 0.001762 |
| for_each.test | RUN | 0.258162 | 0.621451 | 0.813321 | 0.001664 | 0.001918 | 0.001875 |
| insert.test | RUN | 0.378074 | 1.111730 | 1.340861 | 0.001963 | 0.001909 | 0.001817 |
| insert_range.test | RUN | 0.378696 | 1.146342 | 1.341572 | 0.001600 | 0.001566 | 0.001626 |
| iter_fold.test | RUN | 0.478299 | 1.078671 | 1.618405 | 0.001911 | 0.001949 | 0.001882 |
| move.test | RUN | 0.230658 | 0.535346 | 0.697758 | 0.001817 | 0.001536 | 0.001919 |
| none.test | RUN | 0.360604 | 0.716729 | 0.993938 | 0.002299 | 0.001787 | 0.001871 |
| pop_back.test | RUN | 0.348991 | 0.954637 | 1.223041 | 0.001948 | 0.001827 | 0.001893 |
| pop_front.test | RUN | 0.300087 | 0.782101 | 0.977967 | 0.001878 | 0.001826 | 0.001752 |
| push_back.test | RUN | 0.390361 | 1.075017 | 1.273857 | 0.001932 | 0.001943 | 0.001930 |
| push_front.test | RUN | 0.343066 | 0.914988 | 1.098370 | 0.001710 | 0.001948 | 0.001956 |
| remove.test | RUN | 0.372385 | 1.054145 | 1.306543 | 0.001634 | 0.001787 | 0.001854 |
| remove_if.test | RUN | 0.324525 | 0.847156 | 1.078191 | 0.001611 | 0.001850 | 0.001909 |
| replace.test | RUN | 0.309315 | 0.829230 | 1.015748 | 0.001908 | 0.002000 | 0.001770 |
| replace_if.test | RUN | 0.297304 | 0.834811 | 1.013532 | 0.001932 | 0.001900 | 0.001862 |
| reverse_fold.test | RUN | 0.496050 | 1.165271 | 1.773824 | 0.001620 | 0.001500 | 0.001881 |
| reverse_iter_fold.test | RUN | 0.500104 | 1.255995 | 1.861593 | 0.001655 | 0.001854 | 0.001630 |
| reverse.test | RUN | 0.299518 | 0.863215 | 1.047652 | 0.001640 | 0.001862 | 0.001840 |
| segmented_for_each.test | RUN | 0.530814 | 1.611201 | 2.107625 | 0.001666 | 0.001619 | 0.001578 |
| segmented_find.test | RUN | 0.320448 | 0.855652 | 1.189371 | 0.001581 | 0.001830 | 0.001613 |
| segmented_find_if.test | RUN | 0.328640 | 0.875457 | 1.203841 | 0.001531 | 0.001887 | 0.001856 |
| segmented_fold.test | RUN | 0.401051 | 1.143981 | 1.507583 | 0.001782 | 0.001967 | 0.001853 |
| transform.test | RUN | 0.316383 | 0.908708 | 1.084060 | 0.001678 | 0.001896 | 0.001934 |
| join.test | RUN | 0.245010 | 0.546218 | 0.775247 | 0.001795 | 0.001740 | 0.001788 |
| zip.test | RUN | 0.423844 | 1.065138 | 1.470932 | 0.001670 | 0.001917 | 0.001852 |
| zip2.test | RUN | 0.413437 | 0.970080 | 1.415197 | 0.001793 | 0.001691 | 0.001838 |
| zip_ignore.test | RUN | 0.303557 | 0.710471 | 0.948088 | 0.001802 | 0.001702 | 0.001598 |
| flatten.test | RUN | 0.289161 | 0.771913 | 0.932073 | 0.001485 | 0.001744 | 0.001630 |
| ticket-5490.test | COMPILE | 0.154801 | 0.323812 | 0.414431 | — | — | — |
| as_deque.test | RUN | 0.295991 | 0.744237 | 1.019432 | 0.001628 | 0.001933 | 0.001852 |
| as_list.test | RUN | 0.318644 | 0.892268 | 1.100868 | 0.001732 | 0.001938 | 0.001942 |
| as_map.test | RUN | 0.324556 | 0.886822 | 1.092351 | 0.001679 | 0.001360 | 0.001514 |
| as_map_assoc.test | RUN | 0.310906 | 0.839456 | 1.033392 | 0.001773 | 0.002010 | 0.001738 |
| as_set.test | RUN | 0.370536 | 1.048164 | 1.287583 | 0.001755 | 0.001493 | 0.001998 |
| as_vector.test | RUN | 0.336629 | 0.934869 | 1.138457 | 0.001673 | 0.001802 | 0.002013 |
| boost_tuple.test | RUN | 0.323662 | 0.925006 | 1.096278 | 0.001782 | 0.001784 | 0.001749 |
| boost_tuple_iterator.test | RUN | 0.229058 | 0.555149 | 0.693628 | 0.001654 | 0.001398 | 0.001910 |
| cons.test | RUN | 0.407768 | 1.038310 | 1.339663 | 0.001727 | 0.001673 | 0.001914 |
| convert_boost_tuple.test | RUN | 0.257692 | 0.788613 | 0.871562 | 0.001761 | 0.001656 | 0.001406 |
| convert_deque.test | RUN | 0.259133 | 0.785938 | 0.886015 | 0.001561 | 0.001623 | 0.001829 |
| convert_list.test | RUN | 0.259038 | 0.795641 | 0.881505 | 0.001650 | 0.001661 | 0.001522 |
| convert_std_pair.test | RUN | 0.283969 | 0.788685 | 0.888249 | 0.001488 | 0.001818 | 0.001882 |
| convert_std_tuple.test | RUN | 0.272596 | 0.772414 | 0.866178 | 0.001748 | 0.001686 | 0.001554 |
| convert_vector.test | RUN | 0.273691 | 0.771862 | 0.870704 | 0.001627 | 0.001630 | 0.001685 |
| filter_view.test | RUN | 0.318792 | 0.811711 | 1.049041 | 0.001774 | 0.001639 | 0.001952 |
| hash.test | RUN | 0.311590 | 0.726720 | 1.011487 | 0.001810 | 0.001831 | 0.001642 |
| io.test | RUN | 0.330538 | 1.009992 | 1.163917 | 0.001783 | 0.002029 | 0.002105 |
| iterator_range.test | RUN | 0.290482 | 0.795985 | 0.994773 | 0.001572 | 0.001836 | 0.001628 |
| joint_view.test | RUN | 0.397415 | 1.315495 | 1.474549 | 0.002006 | 0.001623 | 0.001790 |
| list_comparison.test | RUN | 0.254268 | 0.533649 | 0.712638 | 0.001697 | 0.001693 | 0.001600 |
| list_construction.test | RUN | 0.250722 | 0.525912 | 0.702510 | 0.001542 | 0.001800 | 0.001653 |
| list_copy.test | RUN | 0.360285 | 0.957387 | 1.193601 | 0.001807 | 0.001687 | 0.001787 |
| list_iterator.test | RUN | 0.227744 | 0.560562 | 0.673957 | 0.001457 | 0.001534 | 0.001877 |
| list_hash.test | RUN | 0.302506 | 1.009863 | 0.976204 | 0.001889 | 0.001756 | 0.001859 |
| list_make.test | RUN | 0.235115 | 0.588953 | 0.742526 | 0.001819 | 0.001608 | 0.001624 |
| list_misc.test | RUN | 0.303890 | 0.704197 | 0.878665 | 0.001870 | 0.001863 | 0.001786 |
| list_mutate.test | RUN | 0.212176 | 0.467845 | 0.613316 | 0.001623 | 0.001788 | 0.001668 |
| list_nest.test | RUN | 0.417976 | 1.289071 | 1.688411 | 0.001818 | 0.001496 | 0.001653 |
| list_tie.test | RUN | 0.229760 | 0.521658 | 0.678317 | 0.001618 | 0.001706 | 0.001745 |
| list_value_at.test | RUN | 0.219557 | 0.493525 | 0.680248 | 0.001642 | 0.001720 | 0.001762 |
| deque_comparison.test | RUN | 0.227853 | 0.573145 | 0.683650 | 0.001660 | 0.001748 | 0.001640 |
| deque_construction.test | RUN | 0.228232 | 0.522953 | 0.690529 | 0.001569 | 0.001864 | 0.001463 |
| deque_copy.test | RUN | 0.320361 | 0.889174 | 1.139661 | 0.001663 | 0.001561 | 0.001738 |
| deque_iterator.test | RUN | 0.226467 | 0.561335 | 0.710315 | 0.001599 | 0.001869 | 0.001785 |
| deque_hash.test | RUN | 0.306764 | 0.987699 | 0.945709 | 0.001747 | 0.001870 | 0.001942 |
| deque_is_constructible.test | COMPILE | 0.124325 | 0.249912 | 0.316689 | — | — | — |
| deque_make.test | RUN | 0.228400 | 0.562285 | 0.719573 | 0.001642 | 0.001843 | 0.001833 |
| deque_misc.test | RUN | 0.292765 | 0.671134 | 0.875069 | 0.001365 | 0.001694 | 0.001768 |
| deque_move.test | RUN | 0.234169 | 0.584618 | 0.686514 | 0.001551 | 0.001784 | 0.001806 |
| deque_mutate.test | RUN | 0.213492 | 0.468894 | 0.597382 | 0.001678 | 0.001859 | 0.001575 |
| deque_nest.test | RUN | 0.626770 | 2.062091 | 2.660375 | 0.001802 | 0.001710 | 0.001904 |
| deque_tie.test | RUN | 0.216285 | 0.479678 | 0.646958 | 0.001818 | 0.001768 | 0.001756 |
| deque_value_at.test | RUN | 0.217058 | 0.498976 | 0.657649 | 0.001529 | 0.001767 | 0.001754 |
| front_extended_deque.test | RUN | 0.301358 | 0.707272 | 0.949306 | 0.001859 | 0.001900 | 0.001843 |
| back_extended_deque.test | RUN | 0.307822 | 0.733953 | 0.936833 | 0.001526 | 0.001718 | 0.001653 |
| make_list.test | RUN | 0.242484 | 0.578678 | 0.764461 | 0.001785 | 0.001727 | 0.001797 |
| make_vector.test | RUN | 0.237209 | 0.554585 | 0.706576 | 0.001596 | 0.001807 | 0.001554 |
| map.test | RUN | 0.307849 | 0.862713 | 1.025689 | 0.001750 | 0.001901 | 0.001495 |
| map_comparison.test | RUN | 0.234925 | 0.551888 | 0.738357 | 0.001786 | 0.001929 | 0.001806 |
| map_construction.test | RUN | 0.228761 | 0.538676 | 0.707743 | 0.001732 | 0.001729 | 0.001700 |
| map_copy.test | RUN | 0.272275 | 0.689248 | 0.904861 | 0.001543 | 0.001883 | 0.001860 |
| map_misc.test | RUN | 0.298109 | 0.692898 | 0.898915 | 0.001818 | 0.001897 | 0.001642 |
| map_move.test | RUN | 0.229363 | 0.573009 | 0.731667 | 0.001484 | 0.001729 | 0.001526 |
| map_mutate.test | RUN | 0.211146 | 0.477242 | 0.619116 | 0.001570 | 0.001770 | 0.001433 |
| map_tie.test | RUN | 0.219101 | 0.479980 | 0.618354 | 0.001515 | 0.001894 | 0.001825 |
| nil.test | RUN | 0.146890 | 0.330620 | 0.446190 | 0.002078 | 0.001858 | 0.001808 |
| nview.test | RUN | 0.289960 | 0.689567 | 0.896037 | 0.001912 | 0.001904 | 0.001746 |
| reverse_view.test | RUN | 0.382455 | 1.066424 | 1.316963 | 0.001861 | 0.001557 | 0.001685 |
| segmented_iterator_range.test | RUN | 0.436265 | 1.357082 | 1.665438 | 0.001695 | 0.001622 | 0.001584 |
| set.test | RUN | 0.271743 | 0.761376 | 0.928661 | 0.001736 | 0.001814 | 0.001948 |
| single_view.test | RUN | 0.250465 | 0.700682 | 0.865888 | 0.001807 | 0.001961 | 0.001467 |
| std_pair.test | RUN | 0.336886 | 0.875569 | 1.095243 | 0.001674 | 0.001834 | 0.001570 |
| boost_array.test | RUN | 0.283911 | 0.615788 | 0.828819 | 0.001564 | 0.001771 | 0.001798 |
| array.test | RUN | 0.272925 | 0.631068 | 0.803486 | 0.001716 | 0.001498 | 0.001657 |
| std_array.test | RUN | 0.279656 | 0.622348 | 0.806432 | 0.001806 | 0.001782 | 0.001479 |
| tuple_comparison.test | RUN | 0.239062 | 0.580753 | 0.779211 | 0.001779 | 0.001808 | 0.001754 |
| tuple_construction.test | RUN | 0.250561 | 0.565478 | 0.779651 | 0.001642 | 0.001824 | 0.001620 |
| tuple_conversion.test | RUN | 0.557491 | 1.789582 | 2.440797 | 0.001605 | 0.001867 | 0.001851 |
| tuple_copy.test | RUN | 0.358772 | 0.994021 | 1.300398 | 0.001710 | 0.002602 | 0.001505 |
| tuple_element.test | RUN | 0.241431 | 0.530228 | 0.714161 | 0.001532 | 0.004298 | 0.001564 |
| tuple_make.test | RUN | 0.251451 | 0.577501 | 0.804064 | 0.001626 | 0.001677 | 0.001540 |
| tuple_misc.test | RUN | 0.315629 | 0.739952 | 0.952626 | 0.001727 | 0.001735 | 0.001601 |
| tuple_mutate.test | RUN | 0.223919 | 0.492796 | 0.671670 | 0.001860 | 0.001615 | 0.001503 |
| tuple_nest.test | RUN | 0.919631 | 3.611478 | 4.704685 | 0.001566 | 0.001618 | 0.001856 |
| tuple_hash.test | RUN | 0.318674 | 1.029843 | 0.983090 | 0.001899 | 0.001478 | 0.001779 |
| tuple_tie.test | RUN | 0.243935 | 0.521110 | 0.755813 | 0.001790 | 0.001839 | 0.001587 |
| tuple_traits__maybe_variadic.test | RUN | 0.262041 | 0.652393 | 0.789623 | 0.001622 | 0.001851 | 0.001574 |
| tuple_traits__no_variadic.test | RUN | 0.293026 | 0.685644 | 0.868608 | 0.001756 | 0.001886 | 0.001778 |
| transform_view.test | RUN | 0.371692 | 1.146272 | 1.367317 | 0.001799 | 0.001580 | 0.001876 |
| identity_view.test | RUN | 0.359942 | 1.026676 | 1.254811 | 0.001829 | 0.001722 | 0.001668 |
| vector_comparison.test | RUN | 0.236494 | 0.575768 | 0.689811 | 0.001490 | 0.001542 | 0.001819 |
| vector_construction.test | RUN | 0.234375 | 0.543899 | 0.757484 | 0.001549 | 0.001848 | 0.001741 |
| vector_conversion.test | RUN | 0.658719 | 2.350115 | 3.144150 | 0.002097 | 0.001865 | 0.001652 |
| vector_copy.test | RUN | 0.338019 | 1.015531 | 1.258263 | 0.001590 | 0.001938 | 0.001497 |
| vector_iterator.test | RUN | 0.217735 | 0.573469 | 0.712091 | 0.001594 | 0.001582 | 0.001719 |
| vector_make.test | RUN | 0.239839 | 0.592568 | 0.763495 | 0.001589 | 0.001523 | 0.001602 |
| vector_misc.test | RUN | 0.299242 | 0.682004 | 0.890558 | 0.001724 | 0.001573 | 0.001808 |
| vector_move.test | RUN | 0.230359 | 0.579037 | 0.707658 | 0.001308 | 0.001581 | 0.001684 |
| vector_mutate.test | RUN | 0.214651 | 0.488811 | 0.677606 | 0.001540 | 0.001779 | 0.001668 |
| vector_n.test | RUN | 0.259857 | 0.587177 | 0.831237 | 0.001794 | 0.001942 | 0.001816 |
| vector_nest.test | RUN | 0.984571 | 3.786532 | 4.579382 | 0.001807 | 0.001650 | 0.001570 |
| vector_hash.test | RUN | 0.338201 | 1.011223 | 0.915535 | 0.001872 | 0.001888 | 0.001409 |
| vector_tie.test | RUN | 0.221224 | 0.528306 | 0.707474 | 0.002032 | 0.001844 | 0.001807 |
| vector_traits__maybe_variadic.test | RUN | 0.241367 | 0.612235 | 0.686420 | 0.001814 | 0.001867 | 0.001802 |
| vector_traits__no_variadic.test | RUN | 0.265352 | 0.648832 | 0.782610 | 0.001824 | 0.001632 | 0.001783 |
| vector_value_at.test | RUN | 0.213155 | 0.465930 | 0.617038 | 0.001608 | 0.001792 | 0.001756 |
| zip_view.test | RUN | 0.453980 | 1.177997 | 1.614382 | 0.001588 | 0.001732 | 0.001245 |
| zip_view2.test | RUN | 0.356921 | 0.959486 | 1.241287 | 0.001699 | 0.001630 | 0.001453 |
| zip_view_ignore.test | RUN | 0.337682 | 0.865986 | 1.101793 | 0.001790 | 0.001915 | 0.001437 |
| repetitive_view.test | RUN | 0.590931 | 1.585154 | 2.119110 | 0.001235 | 0.001824 | 0.001648 |
| deduce_sequence.test | RUN | 0.270632 | 0.667655 | 0.847946 | 0.001570 | 0.001655 | 0.001741 |
| adapt_adt_named.test | RUN | 0.330469 | 0.919725 | 1.028012 | 0.001624 | 0.001810 | 0.001845 |
| adapt_adt_named_empty.test | RUN | 0.282181 | 0.743796 | 0.881659 | 0.001799 | 0.001945 | 0.001663 |
| adapt_adt.test | RUN | 0.363230 | 1.209300 | 1.243559 | 0.001821 | 0.001961 | 0.001818 |
| adapt_adt_empty.test | RUN | 0.278093 | 0.735666 | 0.875842 | 0.001780 | 0.001876 | 0.001602 |
| adapt_assoc_adt_named.test | RUN | 0.358686 | 0.951095 | 1.130404 | 0.001627 | 0.001975 | 0.001440 |
| adapt_assoc_adt_named_empty.test | RUN | 0.278535 | 0.724156 | 0.879631 | 0.001595 | 0.001783 | 0.001704 |
| adapt_assoc_adt.test | RUN | 0.376967 | 0.991680 | 1.185498 | 0.001612 | 0.001716 | 0.001693 |
| adapt_assoc_adt_empty.test | RUN | 0.277678 | 0.713479 | 0.879071 | 0.001724 | 0.001914 | 0.001284 |
| adapt_assoc_struct_named.test | RUN | 0.349562 | 0.924885 | 1.119656 | 0.001738 | 0.001901 | 0.001444 |
| adapt_assoc_struct_named_empty.test | RUN | 0.286390 | 0.711562 | 0.875066 | 0.001860 | 0.001825 | 0.001660 |
| adapt_assoc_struct.test | RUN | 0.328510 | 0.857455 | 1.052093 | 0.001631 | 0.001936 | 0.001585 |
| adapt_assoc_struct_empty.test | RUN | 0.278818 | 0.722279 | 0.879571 | 0.001769 | 0.001660 | 0.001496 |
| adapt_assoc_tpl_adt.test | RUN | 0.380195 | 0.993681 | 1.196639 | 0.001491 | 0.001934 | 0.001595 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.290805 | 0.716092 | 0.868948 | 0.001879 | 0.001875 | 0.001411 |
| adapt_assoc_tpl_struct.test | RUN | 0.310566 | 0.856756 | 1.018299 | 0.001918 | 0.001826 | 0.001661 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.288057 | 0.727138 | 0.889780 | 0.001606 | 0.001570 | 0.001493 |
| adapt_struct_named.test | RUN | 0.332949 | 0.872766 | 1.016779 | 0.001724 | 0.001784 | 0.001566 |
| adapt_struct_named_empty.test | RUN | 0.291667 | 0.710736 | 0.881421 | 0.001628 | 0.001822 | 0.001408 |
| adapt_struct.test | RUN | 0.346107 | 0.996474 | 1.144215 | 0.001856 | 0.001970 | 0.001778 |
| adapt_struct_empty.test | RUN | 0.280770 | 0.727177 | 0.877963 | 0.001778 | 0.001854 | 0.001653 |
| adapt_tpl_adt.test | RUN | 0.356443 | 1.154646 | 1.214375 | 0.001622 | 0.001878 | 0.001539 |
| adapt_tpl_adt_empty.test | RUN | 0.285440 | 0.728674 | 0.875992 | 0.001724 | 0.001940 | 0.001554 |
| adapt_tpl_struct.test | RUN | 0.294236 | 0.833300 | 0.959912 | 0.001838 | 0.001468 | 0.001737 |
| adapt_tpl_struct_empty.test | RUN | 0.282443 | 0.715089 | 0.884969 | 0.001614 | 0.001696 | 0.001741 |
| adt_attribute_proxy.test | RUN | 0.327781 | 0.720550 | 0.922915 | 0.001717 | 0.001958 | 0.001206 |
| define_struct.test | RUN | 0.392662 | 1.019911 | 1.200892 | 0.001865 | 0.001818 | 0.001777 |
| define_struct_empty.test | RUN | 0.350344 | 0.821206 | 0.990490 | 0.001767 | 0.001969 | 0.001864 |
| define_struct_move.test | RUN | 0.219950 | 0.455802 | 0.609700 | 0.001845 | 0.001805 | 0.001718 |
| define_struct_inline.test | RUN | 0.461015 | 1.211918 | 1.367363 | 0.001724 | 0.001744 | 0.001916 |
| define_struct_inline_empty.test | RUN | 0.394958 | 0.853191 | 1.018032 | 0.001739 | 0.001742 | 0.001682 |
| define_struct_inline_move.test | RUN | 0.226109 | 0.459476 | 0.631304 | 0.001762 | 0.001942 | 0.001739 |
| define_assoc_struct.test | RUN | 0.374222 | 0.976194 | 1.186770 | 0.001838 | 0.002057 | 0.002046 |
| define_assoc_struct_empty.test | RUN | 0.328142 | 0.850428 | 1.028368 | 0.001599 | 0.001850 | 0.001721 |
| define_assoc_struct_move.test | RUN | 0.220777 | 0.467814 | 0.608841 | 0.002107 | 0.001856 | 0.001794 |
| define_tpl_struct.test | RUN | 0.371263 | 1.005258 | 1.173197 | 0.001817 | 0.001737 | 0.001582 |
| define_tpl_struct_empty.test | RUN | 0.339911 | 0.837271 | 1.021705 | 0.001783 | 0.001879 | 0.001587 |
| define_tpl_struct_move.test | RUN | 0.220747 | 0.486643 | 0.620455 | 0.001741 | 0.001830 | 0.001632 |
| define_tpl_struct_inline.test | RUN | 0.378273 | 1.143179 | 1.321318 | 0.001806 | 0.001699 | 0.001878 |
| define_tpl_struct_inline_empty.test | RUN | 0.330228 | 0.813139 | 1.028047 | 0.001758 | 0.001791 | 0.001849 |
| define_tpl_struct_inline_move.test | RUN | 0.221669 | 0.488776 | 0.630142 | 0.001513 | 0.001705 | 0.001644 |
| define_assoc_tpl_struct.test | RUN | 0.368449 | 0.987912 | 1.204404 | 0.001825 | 0.002039 | 0.001810 |
| define_assoc_tpl_struct_empty.test | RUN | 0.340166 | 0.830756 | 1.027034 | 0.001612 | 0.001790 | 0.001789 |
| define_assoc_tpl_struct_move.test | RUN | 0.220662 | 0.475331 | 0.613299 | 0.001896 | 0.001475 | 0.001900 |
| std_tuple.test | RUN | 0.228498 | 0.543690 | 0.667100 | 0.001549 | 0.001711 | 0.001638 |
| std_tuple_iterator.test | RUN | 0.231222 | 0.561244 | 0.682396 | 0.001521 | 0.001650 | 0.001754 |
| ref_vector.test | RUN | 0.260046 | 0.556731 | 0.709996 | 0.001762 | 0.001834 | 0.001855 |
| flatten_view.test | RUN | 0.269970 | 0.723682 | 0.872753 | 0.001574 | 0.001946 | 0.001833 |
| github-159.test | COMPILE | 0.122743 | 0.260818 | 0.304309 | — | — | — |
| github-176.test | RUN | 0.250194 | 0.613617 | 0.740922 | 0.001776 | 0.001914 | 0.001792 |
| size.test | COMPILE | 0.216934 | 0.442310 | 0.555911 | — | — | — |
| fused.test | RUN | 0.296998 | 0.667815 | 0.865755 | 0.001606 | 0.001878 | 0.001697 |
| fused_function_object.test | RUN | 0.224262 | 0.499628 | 0.676934 | 0.001602 | 0.001916 | 0.001766 |
| fused_procedure.test | RUN | 0.291040 | 0.654351 | 0.811028 | 0.001841 | 0.001587 | 0.001697 |
| unfused.test | RUN | 0.233438 | 0.510000 | 0.663833 | 0.001733 | 0.001658 | 0.001654 |
| unfused_typed.test | RUN | 0.230379 | 0.553478 | 0.690356 | 0.001902 | 0.001822 | 0.001837 |
| make_fused.test | RUN | 0.301130 | 0.652284 | 0.857752 | 0.001821 | 0.001868 | 0.001630 |
| make_fused_function_object.test | RUN | 0.225241 | 0.522415 | 0.676092 | 0.001470 | 0.001868 | 0.001483 |
| make_fused_procedure.test | RUN | 0.294987 | 0.670664 | 0.826885 | 0.001784 | 0.001860 | 0.001826 |
| make_unfused.test | RUN | 0.230509 | 0.502168 | 0.667557 | 0.001835 | 0.001887 | 0.001788 |
| invoke.test | RUN | 0.600760 | 1.851101 | 2.265371 | 0.001622 | 0.001744 | 0.001444 |
| invoke_function_object.test | RUN | 0.282816 | 0.680524 | 0.877567 | 0.002185 | 0.001846 | 0.001805 |
| invoke_procedure.test | RUN | 0.473408 | 1.374830 | 1.661663 | 0.001375 | 0.001676 | 0.001832 |
| swap.test | RUN | 0.357794 | 0.857270 | 1.101926 | 0.001688 | 0.001827 | 0.001770 |
| is_sequence.test | COMPILE | 0.060870 | 0.115445 | 0.139348 | — | — | — |
| is_view.test | COMPILE | 0.060926 | 0.125935 | 0.139874 | — | — | — |
| pair_deque.test | COMPILE | 0.126915 | 0.275349 | 0.340162 | — | — | — |
| pair_list.test | COMPILE | 0.124181 | 0.259754 | 0.337763 | — | — | — |
| pair_map.test | COMPILE | 0.126441 | 0.263806 | 0.331857 | — | — | — |
| pair_set.test | COMPILE | 0.132737 | 0.266683 | 0.338242 | — | — | — |
| pair_vector.test | COMPILE | 0.127930 | 0.271374 | 0.326754 | — | — | — |
| pair_nest.test | COMPILE | 0.051961 | 0.115051 | 0.132713 | — | — | — |
| index_sequence.test | COMPILE | 0.044415 | 0.078466 | 0.103015 | — | — | — |
| and.test | COMPILE | 0.035170 | 0.060075 | 0.069189 | — | — | — |
| tag_of.test | COMPILE | 0.058749 | 0.116806 | 0.121112 | — | — | — |
| unused.test | COMPILE | 0.032160 | 0.074119 | 0.077824 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.057984 | 0.122206 | 0.124785 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.052819 | 0.109118 | 0.087020 | — | — | — |
| quick.test | RUN | 0.172698 | 0.364609 | 0.439242 | 0.000570 | 0.001358 | 0.001228 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.993× | 0.980×, 1.006× | 0.993× |
| clang | 1.002× | 1.001×, 1.004× | 0.996× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44830361139).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.001025s | 0.001017s | 0.001036s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.001026s | 0.000983s | 0.001016s | byte equality observed |
| adapt_adt_named.test | 10 | 0.001014s | 0.001023s | 0.001042s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.001012s | 0.001004s | 0.001008s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.001005s | 0.001024s | 0.001023s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.001004s | 0.001016s | 0.000997s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.001011s | 0.001026s | 0.000992s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.001001s | 0.001022s | 0.001025s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.001036s | 0.001011s | 0.001003s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.001011s | 0.001001s | 0.001024s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.001001s | 0.000988s | 0.001028s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.000984s | 0.001015s | 0.001004s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.001026s | 0.000999s | 0.001040s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.001020s | 0.000997s | 0.001044s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.001038s | 0.001009s | 0.001026s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.001011s | 0.001001s | 0.000987s | byte equality observed |
| adapt_struct.test | 10 | 0.001028s | 0.001001s | 0.001013s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.001018s | 0.000984s | 0.000984s | byte equality observed |
| adapt_struct_named.test | 10 | 0.001004s | 0.000981s | 0.001018s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.001027s | 0.000981s | 0.000994s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.001030s | 0.000988s | 0.001020s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.001008s | 0.000999s | 0.001010s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.001027s | 0.000984s | 0.000993s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.001021s | 0.001004s | 0.001036s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.001013s | 0.000972s | 0.000996s | byte equality observed |
| all.test | 10 | 0.001000s | 0.000981s | 0.001009s | byte equality observed |
| any.test | 10 | 0.000988s | 0.000997s | 0.000993s | byte equality observed |
| array.test | 10 | 0.000987s | 0.000986s | 0.000999s | byte equality observed |
| as_deque.test | 10 | 0.001016s | 0.000982s | 0.000994s | byte equality observed |
| as_list.test | 10 | 0.001048s | 0.001029s | 0.001036s | byte equality observed |
| as_map.test | 10 | 0.000999s | 0.001029s | 0.001014s | byte equality observed |
| as_map_assoc.test | 10 | 0.001008s | 0.001021s | 0.001034s | byte equality observed |
| as_set.test | 10 | 0.001023s | 0.001019s | 0.001029s | byte equality observed |
| as_vector.test | 10 | 0.001031s | 0.001009s | 0.001026s | byte equality observed |
| back_extended_deque.test | 10 | 0.000997s | 0.000997s | 0.000989s | byte equality observed |
| boost_array.test | 10 | 0.000969s | 0.000996s | 0.000982s | byte equality observed |
| boost_tuple.test | 10 | 0.001019s | 0.001019s | 0.001022s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.000983s | 0.000967s | 0.001000s | byte equality observed |
| clear.test | 10 | 0.001000s | 0.001004s | 0.001028s | byte equality observed |
| cons.test | 10 | 0.001030s | 0.001043s | 0.001048s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.000992s | 0.001000s | 0.001007s | byte equality observed |
| convert_deque.test | 10 | 0.000996s | 0.000981s | 0.000980s | byte equality observed |
| convert_list.test | 10 | 0.001003s | 0.000991s | 0.001036s | byte equality observed |
| convert_std_pair.test | 10 | 0.000979s | 0.001007s | 0.001009s | byte equality observed |
| convert_std_tuple.test | 10 | 0.000988s | 0.000978s | 0.000983s | byte equality observed |
| convert_vector.test | 10 | 0.000986s | 0.000995s | 0.001014s | byte equality observed |
| copy.test | 10 | 0.000999s | 0.000972s | 0.000987s | byte equality observed |
| count.test | 10 | 0.000997s | 0.000998s | 0.000998s | byte equality observed |
| count_if.test | 10 | 0.000977s | 0.000992s | 0.001005s | byte equality observed |
| deduce_sequence.test | 10 | 0.000998s | 0.000966s | 0.000956s | byte equality observed |
| define_assoc_struct.test | 10 | 0.001041s | 0.001012s | 0.001020s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.001033s | 0.001019s | 0.001020s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.001016s | 0.000993s | 0.000984s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.001045s | 0.001013s | 0.001032s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.001015s | 0.000999s | 0.001017s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.001019s | 0.000979s | 0.001004s | byte equality observed |
| define_struct.test | 10 | 0.001036s | 0.001017s | 0.001022s | byte equality observed |
| define_struct_empty.test | 10 | 0.001039s | 0.001006s | 0.001012s | byte equality observed |
| define_struct_inline.test | 10 | 0.001033s | 0.001059s | 0.001031s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.001016s | 0.001018s | 0.001004s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000986s | 0.000967s | 0.001004s | byte equality observed |
| define_struct_move.test | 10 | 0.000988s | 0.000966s | 0.001000s | byte equality observed |
| define_tpl_struct.test | 10 | 0.001035s | 0.001025s | 0.001043s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.001034s | 0.000999s | 0.001019s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.001028s | 0.000998s | 0.001017s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.001005s | 0.000992s | 0.001020s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000990s | 0.000973s | 0.000981s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000988s | 0.000965s | 0.000986s | byte equality observed |
| deque_comparison.test | 10 | 0.000976s | 0.000982s | 0.000972s | byte equality observed |
| deque_construction.test | 10 | 0.001009s | 0.001012s | 0.001003s | byte equality observed |
| deque_copy.test | 10 | 0.000985s | 0.001001s | 0.000967s | byte equality observed |
| deque_hash.test | 10 | 0.001017s | 0.001007s | 0.000984s | byte equality observed |
| deque_iterator.test | 10 | 0.000996s | 0.000976s | 0.001005s | byte equality observed |
| deque_make.test | 10 | 0.000993s | 0.000989s | 0.001031s | byte equality observed |
| deque_misc.test | 10 | 0.000986s | 0.000987s | 0.000991s | byte equality observed |
| deque_move.test | 10 | 0.001014s | 0.001005s | 0.001030s | byte equality observed |
| deque_mutate.test | 10 | 0.000987s | 0.001004s | 0.001030s | byte equality observed |
| deque_nest.test | 10 | 0.000981s | 0.001002s | 0.000975s | byte equality observed |
| deque_tie.test | 10 | 0.000986s | 0.000981s | 0.000990s | byte equality observed |
| deque_value_at.test | 10 | 0.000992s | 0.000998s | 0.000992s | byte equality observed |
| erase.test | 10 | 0.001027s | 0.001006s | 0.001041s | byte equality observed |
| erase_key.test | 10 | 0.001028s | 0.001024s | 0.001031s | byte equality observed |
| filter.test | 10 | 0.001017s | 0.001003s | 0.000989s | byte equality observed |
| filter_if.test | 10 | 0.001035s | 0.001012s | 0.001025s | byte equality observed |
| filter_view.test | 10 | 0.001035s | 0.001023s | 0.001013s | byte equality observed |
| find.test | 10 | 0.001013s | 0.001008s | 0.001018s | byte equality observed |
| find_if.test | 10 | 0.001035s | 0.001022s | 0.001043s | byte equality observed |
| flatten.test | 10 | 0.000991s | 0.001010s | 0.001008s | byte equality observed |
| flatten_view.test | 10 | 0.000986s | 0.000978s | 0.001004s | byte equality observed |
| fold.test | 10 | 0.001009s | 0.001009s | 0.001018s | byte equality observed |
| for_each.test | 10 | 0.001027s | 0.001021s | 0.001022s | byte equality observed |
| front_extended_deque.test | 10 | 0.000977s | 0.001011s | 0.000994s | byte equality observed |
| fused.test | 10 | 0.000963s | 0.000998s | 0.000980s | byte equality observed |
| fused_function_object.test | 10 | 0.000979s | 0.000984s | 0.000983s | byte equality observed |
| fused_procedure.test | 10 | 0.000985s | 0.000982s | 0.000943s | byte equality observed |
| github-176.test | 10 | 0.000983s | 0.001028s | 0.000951s | byte equality observed |
| hash.test | 10 | 0.000978s | 0.000996s | 0.000965s | byte equality observed |
| identity_view.test | 10 | 0.001016s | 0.001033s | 0.001034s | byte equality observed |
| insert.test | 10 | 0.001044s | 0.001022s | 0.001033s | byte equality observed |
| insert_range.test | 10 | 0.001021s | 0.001050s | 0.001013s | byte equality observed |
| invoke.test | 10 | 0.000985s | 0.000975s | 0.000977s | byte equality observed |
| invoke_function_object.test | 10 | 0.001012s | 0.001009s | 0.001003s | byte equality observed |
| invoke_procedure.test | 10 | 0.000995s | 0.000982s | 0.001013s | byte equality observed |
| io.test | 1 | 0.001195s | 0.001151s | 0.001142s | byte equality observed |
| iter_fold.test | 10 | 0.001019s | 0.001001s | 0.001024s | byte equality observed |
| iterator_range.test | 10 | 0.001038s | 0.001012s | 0.001045s | byte equality observed |
| join.test | 10 | 0.000981s | 0.000986s | 0.000970s | byte equality observed |
| joint_view.test | 10 | 0.001069s | 0.001062s | 0.001071s | byte equality observed |
| list_comparison.test | 10 | 0.000985s | 0.000967s | 0.000995s | byte equality observed |
| list_construction.test | 10 | 0.000970s | 0.000980s | 0.000996s | byte equality observed |
| list_copy.test | 10 | 0.000988s | 0.000972s | 0.001008s | byte equality observed |
| list_hash.test | 10 | 0.000998s | 0.000971s | 0.000990s | byte equality observed |
| list_iterator.test | 10 | 0.000983s | 0.001005s | 0.001025s | byte equality observed |
| list_make.test | 10 | 0.000986s | 0.000986s | 0.001000s | byte equality observed |
| list_misc.test | 10 | 0.000992s | 0.000941s | 0.001000s | byte equality observed |
| list_mutate.test | 10 | 0.000996s | 0.000967s | 0.000989s | byte equality observed |
| list_nest.test | 10 | 0.000965s | 0.000981s | 0.000987s | byte equality observed |
| list_tie.test | 10 | 0.000954s | 0.000984s | 0.000990s | byte equality observed |
| list_value_at.test | 10 | 0.000992s | 0.000978s | 0.000983s | byte equality observed |
| make_fused.test | 10 | 0.000985s | 0.000992s | 0.000981s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000987s | 0.000974s | 0.000996s | byte equality observed |
| make_fused_procedure.test | 10 | 0.001006s | 0.000963s | 0.000992s | byte equality observed |
| make_list.test | 10 | 0.001001s | 0.000983s | 0.000979s | byte equality observed |
| make_unfused.test | 10 | 0.000991s | 0.000987s | 0.000977s | byte equality observed |
| make_vector.test | 10 | 0.000993s | 0.000982s | 0.000973s | byte equality observed |
| map.test | 10 | 0.001033s | 0.001013s | 0.000994s | byte equality observed |
| map_comparison.test | 10 | 0.000980s | 0.001005s | 0.000983s | byte equality observed |
| map_construction.test | 10 | 0.000999s | 0.001004s | 0.001010s | byte equality observed |
| map_copy.test | 10 | 0.001010s | 0.000985s | 0.000969s | byte equality observed |
| map_misc.test | 10 | 0.000985s | 0.001008s | 0.000975s | byte equality observed |
| map_move.test | 10 | 0.001009s | 0.001011s | 0.001014s | byte equality observed |
| map_mutate.test | 10 | 0.000989s | 0.000991s | 0.000997s | byte equality observed |
| map_tie.test | 10 | 0.000978s | 0.001003s | 0.000978s | byte equality observed |
| move.test | 10 | 0.000965s | 0.000996s | 0.000965s | byte equality observed |
| nil.test | 10 | 0.000960s | 0.001004s | 0.001009s | byte equality observed |
| none.test | 10 | 0.000972s | 0.001005s | 0.000974s | byte equality observed |
| nview.test | 10 | 0.000991s | 0.000992s | 0.000994s | byte equality observed |
| pop_back.test | 10 | 0.001038s | 0.001033s | 0.001036s | byte equality observed |
| pop_front.test | 10 | 0.001043s | 0.000987s | 0.001037s | byte equality observed |
| push_back.test | 10 | 0.001030s | 0.001000s | 0.001019s | byte equality observed |
| push_front.test | 10 | 0.001037s | 0.001012s | 0.001029s | byte equality observed |
| quick.test | 10 | 0.000457s | 0.000973s | 0.000977s | byte equality observed |
| ref_vector.test | 10 | 0.001003s | 0.000981s | 0.000981s | byte equality observed |
| remove.test | 10 | 0.001052s | 0.001028s | 0.001006s | byte equality observed |
| remove_if.test | 10 | 0.001046s | 0.001033s | 0.001009s | byte equality observed |
| repetitive_view.test | 10 | 0.000970s | 0.000961s | 0.000989s | byte equality observed |
| replace.test | 10 | 0.001010s | 0.001010s | 0.001027s | byte equality observed |
| replace_if.test | 10 | 0.001014s | 0.001019s | 0.001017s | byte equality observed |
| reverse.test | 10 | 0.001008s | 0.001028s | 0.001035s | byte equality observed |
| reverse_fold.test | 10 | 0.000988s | 0.000996s | 0.001025s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.000988s | 0.000997s | 0.001040s | byte equality observed |
| reverse_view.test | 10 | 0.001002s | 0.000995s | 0.001039s | byte equality observed |
| segmented_find.test | 10 | 0.000982s | 0.000994s | 0.001000s | byte equality observed |
| segmented_find_if.test | 10 | 0.000988s | 0.000989s | 0.001019s | byte equality observed |
| segmented_fold.test | 10 | 0.001026s | 0.001005s | 0.001000s | byte equality observed |
| segmented_for_each.test | 10 | 0.001029s | 0.001015s | 0.000994s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.001038s | 0.001004s | 0.001016s | byte equality observed |
| set.test | 10 | 0.001006s | 0.001008s | 0.000991s | byte equality observed |
| single_view.test | 10 | 0.001015s | 0.001040s | 0.000995s | byte equality observed |
| std_array.test | 10 | 0.000985s | 0.000976s | 0.000993s | byte equality observed |
| std_pair.test | 10 | 0.001004s | 0.001023s | 0.001020s | byte equality observed |
| std_tuple.test | 10 | 0.000992s | 0.000984s | 0.001007s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.000997s | 0.000975s | 0.000994s | byte equality observed |
| swap.test | 10 | 0.000989s | 0.001012s | 0.000977s | byte equality observed |
| transform.test | 10 | 0.001004s | 0.001012s | 0.001045s | byte equality observed |
| transform_view.test | 10 | 0.001027s | 0.001029s | 0.001036s | byte equality observed |
| tuple_comparison.test | 10 | 0.000992s | 0.000979s | 0.000976s | byte equality observed |
| tuple_construction.test | 10 | 0.000985s | 0.000995s | 0.000980s | byte equality observed |
| tuple_conversion.test | 10 | 0.000974s | 0.000990s | 0.000990s | byte equality observed |
| tuple_copy.test | 10 | 0.001007s | 0.000987s | 0.000998s | byte equality observed |
| tuple_element.test | 10 | 0.000981s | 0.000995s | 0.001003s | byte equality observed |
| tuple_hash.test | 10 | 0.000991s | 0.000981s | 0.000991s | byte equality observed |
| tuple_make.test | 10 | 0.000983s | 0.000984s | 0.001000s | byte equality observed |
| tuple_misc.test | 10 | 0.000985s | 0.001010s | 0.000974s | byte equality observed |
| tuple_mutate.test | 10 | 0.000974s | 0.000980s | 0.000993s | byte equality observed |
| tuple_nest.test | 10 | 0.000979s | 0.000989s | 0.000977s | byte equality observed |
| tuple_tie.test | 10 | 0.000996s | 0.000974s | 0.000987s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.000976s | 0.000967s | 0.001001s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.000983s | 0.000972s | 0.000996s | byte equality observed |
| unfused.test | 10 | 0.000996s | 0.000945s | 0.001010s | byte equality observed |
| unfused_typed.test | 10 | 0.000977s | 0.000989s | 0.001031s | byte equality observed |
| vector_comparison.test | 10 | 0.000999s | 0.000957s | 0.001009s | byte equality observed |
| vector_construction.test | 10 | 0.000984s | 0.000961s | 0.000973s | byte equality observed |
| vector_conversion.test | 10 | 0.000985s | 0.000991s | 0.000987s | byte equality observed |
| vector_copy.test | 10 | 0.000997s | 0.000992s | 0.001005s | byte equality observed |
| vector_hash.test | 10 | 0.001024s | 0.000985s | 0.000999s | byte equality observed |
| vector_iterator.test | 10 | 0.000990s | 0.000979s | 0.001031s | byte equality observed |
| vector_make.test | 10 | 0.000990s | 0.000982s | 0.001029s | byte equality observed |
| vector_misc.test | 10 | 0.000990s | 0.000975s | 0.001018s | byte equality observed |
| vector_move.test | 10 | 0.000994s | 0.001031s | 0.001007s | byte equality observed |
| vector_mutate.test | 10 | 0.000980s | 0.000967s | 0.000996s | byte equality observed |
| vector_n.test | 10 | 0.001006s | 0.000989s | 0.001030s | byte equality observed |
| vector_nest.test | 10 | 0.000981s | 0.000980s | 0.001009s | byte equality observed |
| vector_tie.test | 10 | 0.000984s | 0.000959s | 0.000990s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000993s | 0.000984s | 0.000983s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000995s | 0.000953s | 0.001010s | byte equality observed |
| vector_value_at.test | 10 | 0.001003s | 0.000974s | 0.000978s | byte equality observed |
| zip.test | 10 | 0.000979s | 0.000974s | 0.000987s | byte equality observed |
| zip2.test | 10 | 0.000988s | 0.000976s | 0.000986s | byte equality observed |
| zip_ignore.test | 10 | 0.001003s | 0.000974s | 0.001002s | byte equality observed |
| zip_view.test | 10 | 0.000983s | 0.000970s | 0.001031s | byte equality observed |
| zip_view2.test | 10 | 0.000980s | 0.000984s | 0.001002s | byte equality observed |
| zip_view_ignore.test | 10 | 0.000978s | 0.000965s | 0.001006s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44830361139).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
