# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.279203 | 0.593076 | 0.676654 | 0.001466 | 0.001472 | 0.001442 |
| any.test | RUN | 0.279074 | 0.570405 | 0.662001 | 0.001476 | 0.001453 | 0.001532 |
| clear.test | RUN | 0.199961 | 0.530743 | 0.550239 | 0.001436 | 0.001797 | 0.001596 |
| copy.test | RUN | 0.168458 | 0.383284 | 0.430077 | 0.001442 | 0.001792 | 0.001471 |
| count.test | RUN | 0.186274 | 0.451310 | 0.498748 | 0.001533 | 0.001708 | 0.001500 |
| count_if.test | RUN | 0.176103 | 0.411955 | 0.474986 | 0.001870 | 0.001910 | 0.001478 |
| erase.test | RUN | 0.257816 | 0.744171 | 0.757239 | 0.001432 | 0.001907 | 0.001414 |
| erase_key.test | RUN | 0.252998 | 0.737832 | 0.722247 | 0.001818 | 0.001769 | 0.001545 |
| filter.test | RUN | 0.230221 | 0.618938 | 0.654303 | 0.001786 | 0.001866 | 0.001616 |
| filter_if.test | RUN | 0.259094 | 0.734546 | 0.768377 | 0.001538 | 0.001459 | 0.001730 |
| find.test | RUN | 0.216634 | 0.504046 | 0.585958 | 0.001703 | 0.001346 | 0.001436 |
| find_if.test | RUN | 0.210771 | 0.477795 | 0.532447 | 0.001502 | 0.001866 | 0.001658 |
| fold.test | RUN | 0.223219 | 0.572921 | 0.651978 | 0.001728 | 0.001955 | 0.001463 |
| for_each.test | RUN | 0.199338 | 0.562713 | 0.567463 | 0.001707 | 0.001882 | 0.001666 |
| insert.test | RUN | 0.282485 | 0.932213 | 0.914068 | 0.001807 | 0.001720 | 0.001840 |
| insert_range.test | RUN | 0.298410 | 0.948093 | 0.920704 | 0.001614 | 0.001570 | 0.001508 |
| iter_fold.test | RUN | 0.358843 | 0.869124 | 1.098939 | 0.001830 | 0.001866 | 0.001653 |
| move.test | RUN | 0.177879 | 0.417964 | 0.482665 | 0.001756 | 0.001961 | 0.001704 |
| none.test | RUN | 0.288107 | 0.605286 | 0.698904 | 0.001457 | 0.001792 | 0.001476 |
| pop_back.test | RUN | 0.284633 | 0.801757 | 0.828749 | 0.001565 | 0.001725 | 0.001523 |
| pop_front.test | RUN | 0.234881 | 0.639194 | 0.648121 | 0.001818 | 0.001803 | 0.001404 |
| push_back.test | RUN | 0.294758 | 0.964251 | 0.923927 | 0.001858 | 0.002084 | 0.001699 |
| push_front.test | RUN | 0.258560 | 0.814485 | 0.777269 | 0.001746 | 0.001841 | 0.001709 |
| remove.test | RUN | 0.293723 | 0.947936 | 0.930582 | 0.001543 | 0.001971 | 0.001734 |
| remove_if.test | RUN | 0.271195 | 0.773515 | 0.785802 | 0.001778 | 0.001837 | 0.001621 |
| replace.test | RUN | 0.252696 | 0.729678 | 0.725519 | 0.001782 | 0.001956 | 0.001717 |
| replace_if.test | RUN | 0.253596 | 0.723115 | 0.700135 | 0.001618 | 0.001956 | 0.001409 |
| reverse_fold.test | RUN | 0.397690 | 1.030373 | 1.217335 | 0.001703 | 0.001943 | 0.001740 |
| reverse_iter_fold.test | RUN | 0.394954 | 1.048404 | 1.273978 | 0.001743 | 0.001810 | 0.001544 |
| reverse.test | RUN | 0.247726 | 0.730472 | 0.720117 | 0.001725 | 0.001622 | 0.001494 |
| segmented_for_each.test | RUN | 0.421209 | 1.431384 | 1.452860 | 0.001784 | 0.001740 | 0.001806 |
| segmented_find.test | RUN | 0.270799 | 0.795794 | 0.814334 | 0.001592 | 0.001746 | 0.001416 |
| segmented_find_if.test | RUN | 0.266629 | 0.756377 | 0.817343 | 0.001553 | 0.001678 | 0.001592 |
| segmented_fold.test | RUN | 0.334389 | 1.006350 | 1.054811 | 0.001815 | 0.002144 | 0.001640 |
| transform.test | RUN | 0.251952 | 0.830884 | 0.758104 | 0.001632 | 0.001897 | 0.001656 |
| join.test | RUN | 0.190400 | 0.494072 | 0.541561 | 0.001684 | 0.001966 | 0.001617 |
| zip.test | RUN | 0.330139 | 0.938635 | 1.019754 | 0.001620 | 0.001916 | 0.001640 |
| zip2.test | RUN | 0.317518 | 0.854694 | 0.970497 | 0.001521 | 0.001786 | 0.001366 |
| zip_ignore.test | RUN | 0.241430 | 0.566004 | 0.633892 | 0.001259 | 0.001752 | 0.001537 |
| flatten.test | RUN | 0.224013 | 0.658322 | 0.629520 | 0.001398 | 0.001861 | 0.001458 |
| ticket-5490.test | COMPILE | 0.119055 | 0.282812 | 0.297968 | — | — | — |
| as_deque.test | RUN | 0.231578 | 0.629099 | 0.690949 | 0.001493 | 0.002164 | 0.001505 |
| as_list.test | RUN | 0.254369 | 0.778228 | 0.736210 | 0.001685 | 0.001854 | 0.001345 |
| as_map.test | RUN | 0.255767 | 0.756768 | 0.748550 | 0.001350 | 0.001574 | 0.001308 |
| as_map_assoc.test | RUN | 0.247667 | 0.721749 | 0.711681 | 0.001072 | 0.001846 | 0.001469 |
| as_set.test | RUN | 0.281932 | 0.883716 | 0.913037 | 0.001477 | 0.001738 | 0.001560 |
| as_vector.test | RUN | 0.249351 | 0.781327 | 0.810664 | 0.001402 | 0.001806 | 0.001621 |
| boost_tuple.test | RUN | 0.253479 | 0.782919 | 0.774289 | 0.001542 | 0.001507 | 0.001316 |
| boost_tuple_iterator.test | RUN | 0.174453 | 0.463228 | 0.475981 | 0.001493 | 0.001544 | 0.001643 |
| cons.test | RUN | 0.323623 | 0.882085 | 0.920446 | 0.001401 | 0.001906 | 0.001491 |
| convert_boost_tuple.test | RUN | 0.208604 | 0.654656 | 0.598175 | 0.001614 | 0.001878 | 0.001649 |
| convert_deque.test | RUN | 0.208356 | 0.651369 | 0.597228 | 0.001468 | 0.001575 | 0.001318 |
| convert_list.test | RUN | 0.208746 | 0.667331 | 0.606289 | 0.001416 | 0.001594 | 0.001342 |
| convert_std_pair.test | RUN | 0.213165 | 0.653039 | 0.628969 | 0.001578 | 0.001896 | 0.001551 |
| convert_std_tuple.test | RUN | 0.201661 | 0.640194 | 0.642163 | 0.001596 | 0.001528 | 0.001383 |
| convert_vector.test | RUN | 0.200839 | 0.637031 | 0.618217 | 0.001454 | 0.001494 | 0.001446 |
| filter_view.test | RUN | 0.254337 | 0.687730 | 0.750601 | 0.001579 | 0.002138 | 0.001576 |
| hash.test | RUN | 0.247988 | 0.662118 | 0.691740 | 0.001572 | 0.001805 | 0.001632 |
| io.test | RUN | 0.263677 | 0.930635 | 0.831355 | 0.001710 | 0.002095 | 0.001828 |
| iterator_range.test | RUN | 0.238627 | 0.713289 | 0.686404 | 0.001335 | 0.001864 | 0.001369 |
| joint_view.test | RUN | 0.318154 | 1.108081 | 1.027654 | 0.001774 | 0.001664 | 0.001591 |
| list_comparison.test | RUN | 0.182156 | 0.449321 | 0.497350 | 0.001509 | 0.001856 | 0.001567 |
| list_construction.test | RUN | 0.180784 | 0.443665 | 0.487693 | 0.001532 | 0.001501 | 0.001419 |
| list_copy.test | RUN | 0.272048 | 0.833777 | 0.800564 | 0.001437 | 0.001620 | 0.001200 |
| list_iterator.test | RUN | 0.187612 | 0.463994 | 0.459494 | 0.001496 | 0.001395 | 0.001593 |
| list_hash.test | RUN | 0.244803 | 0.861906 | 0.673157 | 0.001484 | 0.001801 | 0.001567 |
| list_make.test | RUN | 0.187592 | 0.491089 | 0.508769 | 0.001612 | 0.001637 | 0.001587 |
| list_misc.test | RUN | 0.242182 | 0.577526 | 0.647870 | 0.001562 | 0.001846 | 0.001546 |
| list_mutate.test | RUN | 0.173548 | 0.384049 | 0.413927 | 0.001422 | 0.001770 | 0.001652 |
| list_nest.test | RUN | 0.322678 | 1.093301 | 1.179023 | 0.001492 | 0.001995 | 0.001613 |
| list_tie.test | RUN | 0.180689 | 0.444675 | 0.478298 | 0.001458 | 0.001745 | 0.001602 |
| list_value_at.test | RUN | 0.169360 | 0.412184 | 0.438326 | 0.001400 | 0.001763 | 0.001623 |
| deque_comparison.test | RUN | 0.179010 | 0.476130 | 0.488438 | 0.001363 | 0.001578 | 0.001418 |
| deque_construction.test | RUN | 0.178492 | 0.445468 | 0.521420 | 0.001492 | 0.001876 | 0.001585 |
| deque_copy.test | RUN | 0.257673 | 0.742604 | 0.758704 | 0.001612 | 0.001862 | 0.001611 |
| deque_iterator.test | RUN | 0.173933 | 0.460272 | 0.465554 | 0.001702 | 0.001548 | 0.002294 |
| deque_hash.test | RUN | 0.237984 | 0.824695 | 0.704863 | 0.001538 | 0.001890 | 0.001576 |
| deque_is_constructible.test | COMPILE | 0.097722 | 0.204202 | 0.232139 | — | — | — |
| deque_make.test | RUN | 0.181733 | 0.464642 | 0.515092 | 0.001819 | 0.001705 | 0.001493 |
| deque_misc.test | RUN | 0.234510 | 0.577340 | 0.611316 | 0.001238 | 0.001512 | 0.001365 |
| deque_move.test | RUN | 0.183238 | 0.482919 | 0.478244 | 0.001510 | 0.001735 | 0.001605 |
| deque_mutate.test | RUN | 0.169409 | 0.389625 | 0.419323 | 0.001373 | 0.001796 | 0.001610 |
| deque_nest.test | RUN | 0.473136 | 1.741546 | 1.973018 | 0.001772 | 0.001746 | 0.001602 |
| deque_tie.test | RUN | 0.166022 | 0.406105 | 0.464784 | 0.001416 | 0.001547 | 0.001700 |
| deque_value_at.test | RUN | 0.163426 | 0.393097 | 0.436645 | 0.001400 | 0.001918 | 0.001444 |
| front_extended_deque.test | RUN | 0.240685 | 0.588626 | 0.656292 | 0.001534 | 0.001879 | 0.001631 |
| back_extended_deque.test | RUN | 0.232039 | 0.587776 | 0.731025 | 0.001397 | 0.001884 | 0.001692 |
| make_list.test | RUN | 0.189456 | 0.501744 | 0.537401 | 0.001527 | 0.001990 | 0.001644 |
| make_vector.test | RUN | 0.190121 | 0.477959 | 0.571784 | 0.001448 | 0.001826 | 0.001642 |
| map.test | RUN | 0.250604 | 0.741730 | 0.779564 | 0.001492 | 0.001867 | 0.001445 |
| map_comparison.test | RUN | 0.187814 | 0.468105 | 0.533139 | 0.001628 | 0.001836 | 0.001467 |
| map_construction.test | RUN | 0.185754 | 0.443524 | 0.507010 | 0.001411 | 0.001541 | 0.001618 |
| map_copy.test | RUN | 0.219253 | 0.589188 | 0.609442 | 0.001658 | 0.001948 | 0.001539 |
| map_misc.test | RUN | 0.234713 | 0.617092 | 0.617657 | 0.001487 | 0.001910 | 0.001314 |
| map_move.test | RUN | 0.187628 | 0.522831 | 0.502292 | 0.001477 | 0.001497 | 0.001611 |
| map_mutate.test | RUN | 0.169333 | 0.432245 | 0.438424 | 0.001302 | 0.001799 | 0.001178 |
| map_tie.test | RUN | 0.167600 | 0.387862 | 0.439108 | 0.001722 | 0.001802 | 0.001620 |
| nil.test | RUN | 0.118914 | 0.274251 | 0.295639 | 0.001749 | 0.001854 | 0.001568 |
| nview.test | RUN | 0.225467 | 0.571166 | 0.633208 | 0.001595 | 0.001867 | 0.001640 |
| reverse_view.test | RUN | 0.294149 | 0.938863 | 0.945949 | 0.001790 | 0.001596 | 0.001665 |
| segmented_iterator_range.test | RUN | 0.354171 | 1.124160 | 1.211752 | 0.001577 | 0.001798 | 0.001562 |
| set.test | RUN | 0.218757 | 0.652684 | 0.663321 | 0.001427 | 0.001945 | 0.001663 |
| single_view.test | RUN | 0.206708 | 0.602152 | 0.608313 | 0.001747 | 0.001619 | 0.001578 |
| std_pair.test | RUN | 0.263510 | 0.757457 | 0.834010 | 0.001750 | 0.001656 | 0.001463 |
| boost_array.test | RUN | 0.213988 | 0.528695 | 0.609274 | 0.001546 | 0.001660 | 0.001600 |
| array.test | RUN | 0.208700 | 0.498928 | 0.608318 | 0.001384 | 0.001674 | 0.001662 |
| std_array.test | RUN | 0.211006 | 0.511796 | 0.591402 | 0.001618 | 0.001544 | 0.001568 |
| tuple_comparison.test | RUN | 0.197284 | 0.497657 | 0.533723 | 0.001768 | 0.001838 | 0.001289 |
| tuple_construction.test | RUN | 0.200309 | 0.514951 | 0.523180 | 0.001675 | 0.001828 | 0.001588 |
| tuple_conversion.test | RUN | 0.419315 | 1.496383 | 1.762175 | 0.001393 | 0.001721 | 0.001767 |
| tuple_copy.test | RUN | 0.278291 | 0.862515 | 0.911199 | 0.001528 | 0.001936 | 0.001408 |
| tuple_element.test | RUN | 0.178536 | 0.427030 | 0.503369 | 0.001359 | 0.001838 | 0.001460 |
| tuple_make.test | RUN | 0.200705 | 0.496042 | 0.564693 | 0.001572 | 0.001878 | 0.001433 |
| tuple_misc.test | RUN | 0.251111 | 0.604402 | 0.653033 | 0.001419 | 0.001756 | 0.001475 |
| tuple_mutate.test | RUN | 0.174205 | 0.415261 | 0.460862 | 0.001662 | 0.001874 | 0.001554 |
| tuple_nest.test | RUN | 0.696052 | 3.106351 | 3.389975 | 0.001505 | 0.001948 | 0.001572 |
| tuple_hash.test | RUN | 0.261347 | 0.826961 | 0.695700 | 0.001755 | 0.001530 | 0.001451 |
| tuple_tie.test | RUN | 0.185854 | 0.466835 | 0.514710 | 0.001584 | 0.001806 | 0.001523 |
| tuple_traits__maybe_variadic.test | RUN | 0.202724 | 0.527108 | 0.567232 | 0.001665 | 0.001763 | 0.001235 |
| tuple_traits__no_variadic.test | RUN | 0.224225 | 0.536116 | 0.589426 | 0.001678 | 0.001949 | 0.001543 |
| transform_view.test | RUN | 0.292141 | 0.970355 | 0.949575 | 0.001484 | 0.001700 | 0.001499 |
| identity_view.test | RUN | 0.286275 | 0.857061 | 0.890561 | 0.001497 | 0.001851 | 0.001577 |
| vector_comparison.test | RUN | 0.185530 | 0.476275 | 0.500071 | 0.001433 | 0.001900 | 0.001312 |
| vector_construction.test | RUN | 0.188249 | 0.431665 | 0.550566 | 0.001617 | 0.001797 | 0.001546 |
| vector_conversion.test | RUN | 0.513930 | 1.977748 | 2.216987 | 0.001716 | 0.001542 | 0.001577 |
| vector_copy.test | RUN | 0.269904 | 0.852926 | 0.918946 | 0.001386 | 0.001834 | 0.001527 |
| vector_iterator.test | RUN | 0.178283 | 0.471851 | 0.465419 | 0.001690 | 0.001968 | 0.001219 |
| vector_make.test | RUN | 0.192054 | 0.491004 | 0.507277 | 0.001501 | 0.001942 | 0.001710 |
| vector_misc.test | RUN | 0.236023 | 0.575099 | 0.675821 | 0.001526 | 0.001790 | 0.001402 |
| vector_move.test | RUN | 0.179885 | 0.471855 | 0.482892 | 0.001590 | 0.001576 | 0.001614 |
| vector_mutate.test | RUN | 0.169456 | 0.409167 | 0.432042 | 0.001471 | 0.001712 | 0.001749 |
| vector_n.test | RUN | 0.203935 | 0.491273 | 0.567012 | 0.001872 | 0.001934 | 0.001629 |
| vector_nest.test | RUN | 0.702850 | 3.287936 | 3.294380 | 0.001370 | 0.001499 | 0.001686 |
| vector_hash.test | RUN | 0.248471 | 0.816966 | 0.654060 | 0.001506 | 0.002040 | 0.001475 |
| vector_tie.test | RUN | 0.178094 | 0.432977 | 0.467609 | 0.001818 | 0.001738 | 0.001463 |
| vector_traits__maybe_variadic.test | RUN | 0.191813 | 0.514907 | 0.516274 | 0.001655 | 0.001723 | 0.001688 |
| vector_traits__no_variadic.test | RUN | 0.200958 | 0.529392 | 0.512789 | 0.001480 | 0.002045 | 0.001479 |
| vector_value_at.test | RUN | 0.166524 | 0.403676 | 0.444849 | 0.001383 | 0.001844 | 0.001264 |
| zip_view.test | RUN | 0.346458 | 0.975541 | 1.164581 | 0.001812 | 0.001993 | 0.001653 |
| zip_view2.test | RUN | 0.275872 | 0.781279 | 0.852793 | 0.001678 | 0.001957 | 0.001505 |
| zip_view_ignore.test | RUN | 0.257557 | 0.696419 | 0.760388 | 0.001459 | 0.001380 | 0.001354 |
| repetitive_view.test | RUN | 0.451055 | 1.267867 | 1.501311 | 0.001624 | 0.001810 | 0.001601 |
| deduce_sequence.test | RUN | 0.210983 | 0.547292 | 0.588743 | 0.001538 | 0.001820 | 0.001631 |
| adapt_adt_named.test | RUN | 0.251381 | 0.759027 | 0.792277 | 0.001431 | 0.001822 | 0.002422 |
| adapt_adt_named_empty.test | RUN | 0.228342 | 0.610293 | 0.670773 | 0.001559 | 0.001770 | 0.001428 |
| adapt_adt.test | RUN | 0.277099 | 1.010052 | 0.932036 | 0.001560 | 0.001900 | 0.001280 |
| adapt_adt_empty.test | RUN | 0.218483 | 0.606581 | 0.650769 | 0.001674 | 0.001898 | 0.001511 |
| adapt_assoc_adt_named.test | RUN | 0.282344 | 0.775199 | 0.805377 | 0.001565 | 0.001696 | 0.001662 |
| adapt_assoc_adt_named_empty.test | RUN | 0.223577 | 0.596542 | 0.621484 | 0.001718 | 0.001704 | 0.001473 |
| adapt_assoc_adt.test | RUN | 0.293023 | 0.830237 | 0.840119 | 0.001574 | 0.001834 | 0.001692 |
| adapt_assoc_adt_empty.test | RUN | 0.217081 | 0.625523 | 0.628235 | 0.001791 | 0.001625 | 0.001604 |
| adapt_assoc_struct_named.test | RUN | 0.285979 | 0.796106 | 0.786082 | 0.001486 | 0.001928 | 0.001513 |
| adapt_assoc_struct_named_empty.test | RUN | 0.222123 | 0.611013 | 0.601576 | 0.001478 | 0.001653 | 0.001662 |
| adapt_assoc_struct.test | RUN | 0.253729 | 0.732412 | 0.752645 | 0.001492 | 0.001891 | 0.001520 |
| adapt_assoc_struct_empty.test | RUN | 0.220349 | 0.603631 | 0.622775 | 0.001489 | 0.001750 | 0.001505 |
| adapt_assoc_tpl_adt.test | RUN | 0.295368 | 0.827118 | 0.873571 | 0.001664 | 0.001512 | 0.001673 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.223762 | 0.605745 | 0.626033 | 0.001514 | 0.001810 | 0.001577 |
| adapt_assoc_tpl_struct.test | RUN | 0.241114 | 0.729411 | 0.743799 | 0.001471 | 0.001711 | 0.001480 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.214668 | 0.609141 | 0.625182 | 0.001688 | 0.001901 | 0.001621 |
| adapt_struct_named.test | RUN | 0.248250 | 0.744456 | 0.743076 | 0.001777 | 0.001924 | 0.001497 |
| adapt_struct_named_empty.test | RUN | 0.224130 | 0.611075 | 0.617989 | 0.001494 | 0.002982 | 0.001493 |
| adapt_struct.test | RUN | 0.277435 | 0.890869 | 0.853334 | 0.001577 | 0.001900 | 0.001604 |
| adapt_struct_empty.test | RUN | 0.226347 | 0.639482 | 0.626184 | 0.001774 | 0.001924 | 0.001664 |
| adapt_tpl_adt.test | RUN | 0.288711 | 0.977850 | 0.900144 | 0.001552 | 0.001937 | 0.001624 |
| adapt_tpl_adt_empty.test | RUN | 0.225857 | 0.621419 | 0.673419 | 0.001558 | 0.001814 | 0.001623 |
| adapt_tpl_struct.test | RUN | 0.232721 | 0.679708 | 0.721632 | 0.001734 | 0.001648 | 0.001483 |
| adapt_tpl_struct_empty.test | RUN | 0.214514 | 0.623156 | 0.631933 | 0.001742 | 0.001820 | 0.001622 |
| adt_attribute_proxy.test | RUN | 0.257379 | 0.588340 | 0.648743 | 0.001632 | 0.001824 | 0.001710 |
| define_struct.test | RUN | 0.307929 | 0.819867 | 0.866744 | 0.001606 | 0.001854 | 0.001637 |
| define_struct_empty.test | RUN | 0.270857 | 0.674060 | 0.709900 | 0.001582 | 0.001750 | 0.001422 |
| define_struct_move.test | RUN | 0.171711 | 0.384758 | 0.424840 | 0.001390 | 0.001622 | 0.001619 |
| define_struct_inline.test | RUN | 0.313762 | 0.998846 | 0.970953 | 0.001453 | 0.001704 | 0.001507 |
| define_struct_inline_empty.test | RUN | 0.261211 | 0.703533 | 0.696356 | 0.001555 | 0.001501 | 0.001726 |
| define_struct_inline_move.test | RUN | 0.174878 | 0.375317 | 0.431626 | 0.001369 | 0.001822 | 0.001439 |
| define_assoc_struct.test | RUN | 0.301397 | 0.784010 | 0.863690 | 0.001784 | 0.001794 | 0.001681 |
| define_assoc_struct_empty.test | RUN | 0.272179 | 0.670078 | 0.780810 | 0.001846 | 0.002015 | 0.001567 |
| define_assoc_struct_move.test | RUN | 0.174206 | 0.382317 | 0.495529 | 0.001458 | 0.001848 | 0.001654 |
| define_tpl_struct.test | RUN | 0.297687 | 0.791035 | 0.874351 | 0.001231 | 0.001910 | 0.001644 |
| define_tpl_struct_empty.test | RUN | 0.274953 | 0.697810 | 0.755698 | 0.001381 | 0.001751 | 0.001372 |
| define_tpl_struct_move.test | RUN | 0.180567 | 0.402990 | 0.452202 | 0.001694 | 0.001559 | 0.001288 |
| define_tpl_struct_inline.test | RUN | 0.316742 | 0.922275 | 0.926531 | 0.001720 | 0.001718 | 0.001438 |
| define_tpl_struct_inline_empty.test | RUN | 0.272068 | 0.677210 | 0.714908 | 0.001347 | 0.001628 | 0.001544 |
| define_tpl_struct_inline_move.test | RUN | 0.181895 | 0.406365 | 0.431201 | 0.001636 | 0.001936 | 0.001323 |
| define_assoc_tpl_struct.test | RUN | 0.293972 | 0.816607 | 0.841585 | 0.001690 | 0.001960 | 0.001538 |
| define_assoc_tpl_struct_empty.test | RUN | 0.267942 | 0.684609 | 0.731059 | 0.001457 | 0.002054 | 0.001696 |
| define_assoc_tpl_struct_move.test | RUN | 0.170872 | 0.375883 | 0.424058 | 0.001591 | 0.001850 | 0.001627 |
| std_tuple.test | RUN | 0.182874 | 0.431336 | 0.485787 | 0.001537 | 0.001840 | 0.001544 |
| std_tuple_iterator.test | RUN | 0.180499 | 0.464507 | 0.459759 | 0.001404 | 0.001797 | 0.001539 |
| ref_vector.test | RUN | 0.202935 | 0.445183 | 0.523074 | 0.001560 | 0.001840 | 0.001564 |
| flatten_view.test | RUN | 0.217141 | 0.569423 | 0.629529 | 0.001871 | 0.001822 | 0.001628 |
| github-159.test | COMPILE | 0.098237 | 0.206665 | 0.226713 | — | — | — |
| github-176.test | RUN | 0.203056 | 0.519844 | 0.522738 | 0.001858 | 0.001926 | 0.001519 |
| size.test | COMPILE | 0.171080 | 0.353191 | 0.414173 | — | — | — |
| fused.test | RUN | 0.273831 | 0.555118 | 0.599799 | 0.001670 | 0.001951 | 0.001498 |
| fused_function_object.test | RUN | 0.218246 | 0.422810 | 0.443945 | 0.001492 | 0.001740 | 0.001655 |
| fused_procedure.test | RUN | 0.255969 | 0.542877 | 0.546103 | 0.001373 | 0.001718 | 0.001422 |
| unfused.test | RUN | 0.180903 | 0.435692 | 0.458181 | 0.001559 | 0.001846 | 0.001465 |
| unfused_typed.test | RUN | 0.186081 | 0.450577 | 0.478189 | 0.001569 | 0.001944 | 0.001592 |
| make_fused.test | RUN | 0.242204 | 0.539122 | 0.567093 | 0.001675 | 0.001857 | 0.001550 |
| make_fused_function_object.test | RUN | 0.181640 | 0.418935 | 0.461340 | 0.001471 | 0.001299 | 0.001498 |
| make_fused_procedure.test | RUN | 0.228247 | 0.537849 | 0.577388 | 0.001730 | 0.001906 | 0.001472 |
| make_unfused.test | RUN | 0.178335 | 0.424386 | 0.453613 | 0.001746 | 0.001866 | 0.001552 |
| invoke.test | RUN | 0.497907 | 1.584524 | 1.551239 | 0.001683 | 0.001323 | 0.001479 |
| invoke_function_object.test | RUN | 0.232120 | 0.557262 | 0.575433 | 0.001767 | 0.002015 | 0.001625 |
| invoke_procedure.test | RUN | 0.401328 | 1.159157 | 1.159457 | 0.001413 | 0.001868 | 0.001333 |
| swap.test | RUN | 0.276883 | 0.728745 | 0.770662 | 0.001466 | 0.001886 | 0.001413 |
| is_sequence.test | COMPILE | 0.047632 | 0.102201 | 0.097614 | — | — | — |
| is_view.test | COMPILE | 0.049248 | 0.107238 | 0.100248 | — | — | — |
| pair_deque.test | COMPILE | 0.098327 | 0.227560 | 0.258480 | — | — | — |
| pair_list.test | COMPILE | 0.098429 | 0.222526 | 0.223688 | — | — | — |
| pair_map.test | COMPILE | 0.098972 | 0.219858 | 0.228285 | — | — | — |
| pair_set.test | COMPILE | 0.102652 | 0.220251 | 0.233671 | — | — | — |
| pair_vector.test | COMPILE | 0.097933 | 0.211029 | 0.229204 | — | — | — |
| pair_nest.test | COMPILE | 0.042106 | 0.086511 | 0.092496 | — | — | — |
| index_sequence.test | COMPILE | 0.036175 | 0.061828 | 0.074113 | — | — | — |
| and.test | COMPILE | 0.027217 | 0.048301 | 0.052219 | — | — | — |
| tag_of.test | COMPILE | 0.045316 | 0.091742 | 0.097772 | — | — | — |
| unused.test | COMPILE | 0.025905 | 0.061712 | 0.059406 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.039040 | 0.093186 | 0.092853 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.040911 | 0.066986 | 0.067195 | — | — | — |
| quick.test | RUN | 0.128945 | 0.311610 | 0.282117 | 0.000460 | 0.001424 | 0.001070 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 1.025×, 0.976× | 0.989× |
| clang | 1.021× | 1.015×, 1.027× | 0.988× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45790989032).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.000903s | 0.000927s | 0.000945s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.000899s | 0.000924s | 0.000915s | byte equality observed |
| adapt_adt_named.test | 10 | 0.000901s | 0.000916s | 0.000943s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.000894s | 0.000900s | 0.000939s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.000913s | 0.000894s | 0.000947s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.000909s | 0.000895s | 0.000937s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.000902s | 0.000894s | 0.000932s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.000914s | 0.000893s | 0.000933s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.000907s | 0.000883s | 0.000945s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.000929s | 0.000884s | 0.000963s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.000920s | 0.000888s | 0.000944s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.000911s | 0.000888s | 0.000905s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.000912s | 0.000904s | 0.000949s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.000902s | 0.000892s | 0.000945s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.000940s | 0.000926s | 0.000940s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.000923s | 0.000904s | 0.000960s | byte equality observed |
| adapt_struct.test | 10 | 0.000917s | 0.000911s | 0.000962s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.000904s | 0.000890s | 0.000951s | byte equality observed |
| adapt_struct_named.test | 10 | 0.000915s | 0.000903s | 0.000951s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.000902s | 0.000900s | 0.000938s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.000914s | 0.000896s | 0.000929s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.000910s | 0.000897s | 0.000934s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.000917s | 0.000897s | 0.000936s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.000902s | 0.000897s | 0.000932s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.000901s | 0.000886s | 0.000928s | byte equality observed |
| all.test | 10 | 0.000888s | 0.000878s | 0.000948s | byte equality observed |
| any.test | 10 | 0.000891s | 0.000876s | 0.000953s | byte equality observed |
| array.test | 10 | 0.000879s | 0.000869s | 0.000960s | byte equality observed |
| as_deque.test | 10 | 0.000901s | 0.000884s | 0.000913s | byte equality observed |
| as_list.test | 10 | 0.000939s | 0.000928s | 0.000945s | byte equality observed |
| as_map.test | 10 | 0.000931s | 0.000885s | 0.000959s | byte equality observed |
| as_map_assoc.test | 10 | 0.000922s | 0.000902s | 0.000968s | byte equality observed |
| as_set.test | 10 | 0.000944s | 0.000926s | 0.000944s | byte equality observed |
| as_vector.test | 10 | 0.000952s | 0.000912s | 0.000953s | byte equality observed |
| back_extended_deque.test | 10 | 0.000901s | 0.000887s | 0.000928s | byte equality observed |
| boost_array.test | 10 | 0.000912s | 0.000894s | 0.000907s | byte equality observed |
| boost_tuple.test | 10 | 0.000930s | 0.000909s | 0.000966s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.000891s | 0.000859s | 0.000913s | byte equality observed |
| clear.test | 10 | 0.000920s | 0.000891s | 0.000939s | byte equality observed |
| cons.test | 10 | 0.000932s | 0.000912s | 0.000937s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.000899s | 0.000883s | 0.000952s | byte equality observed |
| convert_deque.test | 10 | 0.000908s | 0.000886s | 0.000940s | byte equality observed |
| convert_list.test | 10 | 0.000919s | 0.000893s | 0.000913s | byte equality observed |
| convert_std_pair.test | 10 | 0.000911s | 0.000889s | 0.000931s | byte equality observed |
| convert_std_tuple.test | 10 | 0.000903s | 0.000869s | 0.000952s | byte equality observed |
| convert_vector.test | 10 | 0.000898s | 0.000897s | 0.000924s | byte equality observed |
| copy.test | 10 | 0.000905s | 0.000883s | 0.000903s | byte equality observed |
| count.test | 10 | 0.000900s | 0.000889s | 0.000931s | byte equality observed |
| count_if.test | 10 | 0.000897s | 0.000887s | 0.000908s | byte equality observed |
| deduce_sequence.test | 10 | 0.000900s | 0.000881s | 0.000919s | byte equality observed |
| define_assoc_struct.test | 10 | 0.000907s | 0.000918s | 0.000943s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.000920s | 0.000936s | 0.000941s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.000906s | 0.000879s | 0.000903s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.000913s | 0.000920s | 0.000941s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.000912s | 0.000901s | 0.000946s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000900s | 0.000887s | 0.000918s | byte equality observed |
| define_struct.test | 10 | 0.000906s | 0.000914s | 0.000937s | byte equality observed |
| define_struct_empty.test | 10 | 0.000903s | 0.000891s | 0.000959s | byte equality observed |
| define_struct_inline.test | 10 | 0.000908s | 0.000897s | 0.000944s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.000910s | 0.000904s | 0.000944s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000904s | 0.000866s | 0.000955s | byte equality observed |
| define_struct_move.test | 10 | 0.000895s | 0.000863s | 0.000931s | byte equality observed |
| define_tpl_struct.test | 10 | 0.000931s | 0.000899s | 0.000936s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.000910s | 0.000900s | 0.000942s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.000912s | 0.000900s | 0.000928s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.000907s | 0.000893s | 0.000924s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000900s | 0.000865s | 0.000897s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000878s | 0.000867s | 0.000921s | byte equality observed |
| deque_comparison.test | 10 | 0.000891s | 0.000884s | 0.000930s | byte equality observed |
| deque_construction.test | 10 | 0.000885s | 0.000885s | 0.000935s | byte equality observed |
| deque_copy.test | 10 | 0.000892s | 0.000862s | 0.000933s | byte equality observed |
| deque_hash.test | 10 | 0.000879s | 0.000875s | 0.000913s | byte equality observed |
| deque_iterator.test | 10 | 0.000880s | 0.000879s | 0.000918s | byte equality observed |
| deque_make.test | 10 | 0.000887s | 0.000894s | 0.000907s | byte equality observed |
| deque_misc.test | 10 | 0.000899s | 0.000878s | 0.000931s | byte equality observed |
| deque_move.test | 10 | 0.000910s | 0.000902s | 0.000924s | byte equality observed |
| deque_mutate.test | 10 | 0.000896s | 0.000872s | 0.000915s | byte equality observed |
| deque_nest.test | 10 | 0.000894s | 0.000894s | 0.000909s | byte equality observed |
| deque_tie.test | 10 | 0.000896s | 0.000879s | 0.000899s | byte equality observed |
| deque_value_at.test | 10 | 0.000892s | 0.000877s | 0.000901s | byte equality observed |
| erase.test | 10 | 0.000926s | 0.000913s | 0.000918s | byte equality observed |
| erase_key.test | 10 | 0.000942s | 0.000911s | 0.000921s | byte equality observed |
| filter.test | 10 | 0.000902s | 0.000906s | 0.000905s | byte equality observed |
| filter_if.test | 10 | 0.000909s | 0.000943s | 0.000927s | byte equality observed |
| filter_view.test | 10 | 0.000915s | 0.000944s | 0.000933s | byte equality observed |
| find.test | 10 | 0.000920s | 0.000918s | 0.000962s | byte equality observed |
| find_if.test | 10 | 0.000907s | 0.000915s | 0.000930s | byte equality observed |
| flatten.test | 10 | 0.000918s | 0.000902s | 0.000952s | byte equality observed |
| flatten_view.test | 10 | 0.000905s | 0.000904s | 0.000942s | byte equality observed |
| fold.test | 10 | 0.000907s | 0.000913s | 0.000976s | byte equality observed |
| for_each.test | 10 | 0.000940s | 0.000917s | 0.000966s | byte equality observed |
| front_extended_deque.test | 10 | 0.000906s | 0.000874s | 0.000920s | byte equality observed |
| fused.test | 10 | 0.000907s | 0.000893s | 0.000913s | byte equality observed |
| fused_function_object.test | 10 | 0.000890s | 0.000885s | 0.000914s | byte equality observed |
| fused_procedure.test | 10 | 0.000909s | 0.000881s | 0.000918s | byte equality observed |
| github-176.test | 10 | 0.000900s | 0.000875s | 0.000920s | byte equality observed |
| hash.test | 10 | 0.000912s | 0.000886s | 0.000922s | byte equality observed |
| identity_view.test | 10 | 0.000936s | 0.000932s | 0.000951s | byte equality observed |
| insert.test | 10 | 0.000936s | 0.000915s | 0.000959s | byte equality observed |
| insert_range.test | 10 | 0.000935s | 0.000925s | 0.000946s | byte equality observed |
| invoke.test | 10 | 0.000918s | 0.000891s | 0.000925s | byte equality observed |
| invoke_function_object.test | 10 | 0.000913s | 0.000890s | 0.000941s | byte equality observed |
| invoke_procedure.test | 10 | 0.000910s | 0.000897s | 0.000922s | byte equality observed |
| io.test | 10 | 0.001056s | 0.001009s | 0.001043s | byte equality observed |
| iter_fold.test | 10 | 0.000934s | 0.000876s | 0.000951s | byte equality observed |
| iterator_range.test | 10 | 0.000940s | 0.000912s | 0.000971s | byte equality observed |
| join.test | 10 | 0.000899s | 0.000888s | 0.000916s | byte equality observed |
| joint_view.test | 10 | 0.000967s | 0.000942s | 0.000951s | byte equality observed |
| list_comparison.test | 10 | 0.000912s | 0.000868s | 0.000925s | byte equality observed |
| list_construction.test | 10 | 0.000915s | 0.000863s | 0.000912s | byte equality observed |
| list_copy.test | 10 | 0.000908s | 0.000871s | 0.000919s | byte equality observed |
| list_hash.test | 10 | 0.000895s | 0.000894s | 0.000918s | byte equality observed |
| list_iterator.test | 10 | 0.000905s | 0.000872s | 0.000929s | byte equality observed |
| list_make.test | 10 | 0.000903s | 0.000888s | 0.000915s | byte equality observed |
| list_misc.test | 10 | 0.000904s | 0.000889s | 0.000917s | byte equality observed |
| list_mutate.test | 10 | 0.000894s | 0.000891s | 0.000955s | byte equality observed |
| list_nest.test | 10 | 0.000897s | 0.000883s | 0.000905s | byte equality observed |
| list_tie.test | 10 | 0.000898s | 0.000892s | 0.000929s | byte equality observed |
| list_value_at.test | 10 | 0.000902s | 0.000879s | 0.000937s | byte equality observed |
| make_fused.test | 10 | 0.000904s | 0.000897s | 0.000925s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000896s | 0.000883s | 0.000914s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000896s | 0.000908s | 0.000920s | byte equality observed |
| make_list.test | 10 | 0.000900s | 0.000896s | 0.000916s | byte equality observed |
| make_unfused.test | 10 | 0.000898s | 0.000893s | 0.000933s | byte equality observed |
| make_vector.test | 10 | 0.000898s | 0.000877s | 0.000936s | byte equality observed |
| map.test | 10 | 0.000932s | 0.000926s | 0.000961s | byte equality observed |
| map_comparison.test | 10 | 0.000900s | 0.000897s | 0.000942s | byte equality observed |
| map_construction.test | 10 | 0.000893s | 0.000883s | 0.000965s | byte equality observed |
| map_copy.test | 10 | 0.000903s | 0.000918s | 0.001024s | byte equality observed |
| map_misc.test | 10 | 0.000899s | 0.000875s | 0.000924s | byte equality observed |
| map_move.test | 10 | 0.000910s | 0.000900s | 0.000936s | byte equality observed |
| map_mutate.test | 10 | 0.000884s | 0.000875s | 0.000934s | byte equality observed |
| map_tie.test | 10 | 0.000892s | 0.000893s | 0.000951s | byte equality observed |
| move.test | 10 | 0.000882s | 0.000887s | 0.000957s | byte equality observed |
| nil.test | 10 | 0.000891s | 0.000890s | 0.000932s | byte equality observed |
| none.test | 10 | 0.000891s | 0.000878s | 0.000921s | byte equality observed |
| nview.test | 10 | 0.000895s | 0.000907s | 0.000927s | byte equality observed |
| pop_back.test | 10 | 0.000929s | 0.000930s | 0.000975s | byte equality observed |
| pop_front.test | 10 | 0.000918s | 0.000916s | 0.000943s | byte equality observed |
| push_back.test | 10 | 0.000925s | 0.000931s | 0.000958s | byte equality observed |
| push_front.test | 10 | 0.000922s | 0.000941s | 0.000970s | byte equality observed |
| quick.test | 10 | 0.000413s | 0.000893s | 0.000895s | byte equality observed |
| ref_vector.test | 10 | 0.000909s | 0.000900s | 0.000921s | byte equality observed |
| remove.test | 10 | 0.000925s | 0.000935s | 0.000960s | byte equality observed |
| remove_if.test | 10 | 0.000921s | 0.000928s | 0.000951s | byte equality observed |
| repetitive_view.test | 10 | 0.000877s | 0.000899s | 0.000935s | byte equality observed |
| replace.test | 10 | 0.000908s | 0.000903s | 0.000933s | byte equality observed |
| replace_if.test | 10 | 0.000931s | 0.000923s | 0.000950s | byte equality observed |
| reverse.test | 10 | 0.000924s | 0.000920s | 0.000966s | byte equality observed |
| reverse_fold.test | 10 | 0.000911s | 0.000917s | 0.000939s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.000902s | 0.000903s | 0.000956s | byte equality observed |
| reverse_view.test | 10 | 0.000898s | 0.000912s | 0.000960s | byte equality observed |
| segmented_find.test | 10 | 0.000881s | 0.000891s | 0.000924s | byte equality observed |
| segmented_find_if.test | 10 | 0.000899s | 0.000877s | 0.000932s | byte equality observed |
| segmented_fold.test | 10 | 0.000900s | 0.000919s | 0.000947s | byte equality observed |
| segmented_for_each.test | 10 | 0.000922s | 0.000889s | 0.000937s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.000920s | 0.000904s | 0.000961s | byte equality observed |
| set.test | 10 | 0.000906s | 0.000879s | 0.000967s | byte equality observed |
| single_view.test | 10 | 0.000908s | 0.000893s | 0.000946s | byte equality observed |
| std_array.test | 10 | 0.000898s | 0.000866s | 0.000918s | byte equality observed |
| std_pair.test | 10 | 0.000925s | 0.000913s | 0.000936s | byte equality observed |
| std_tuple.test | 10 | 0.000897s | 0.000873s | 0.000914s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.000893s | 0.000870s | 0.000933s | byte equality observed |
| swap.test | 10 | 0.000891s | 0.000866s | 0.000917s | byte equality observed |
| transform.test | 10 | 0.000912s | 0.000890s | 0.000938s | byte equality observed |
| transform_view.test | 10 | 0.000934s | 0.000907s | 0.000955s | byte equality observed |
| tuple_comparison.test | 10 | 0.000901s | 0.000859s | 0.000910s | byte equality observed |
| tuple_construction.test | 10 | 0.000888s | 0.000886s | 0.000930s | byte equality observed |
| tuple_conversion.test | 10 | 0.000889s | 0.000889s | 0.000924s | byte equality observed |
| tuple_copy.test | 10 | 0.000893s | 0.000881s | 0.000939s | byte equality observed |
| tuple_element.test | 10 | 0.000902s | 0.000882s | 0.000936s | byte equality observed |
| tuple_hash.test | 10 | 0.000907s | 0.000884s | 0.000893s | byte equality observed |
| tuple_make.test | 10 | 0.000908s | 0.000893s | 0.000917s | byte equality observed |
| tuple_misc.test | 10 | 0.000891s | 0.000891s | 0.000917s | byte equality observed |
| tuple_mutate.test | 10 | 0.000883s | 0.000893s | 0.000922s | byte equality observed |
| tuple_nest.test | 10 | 0.000869s | 0.000929s | 0.000897s | byte equality observed |
| tuple_tie.test | 10 | 0.000867s | 0.000910s | 0.000904s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.000867s | 0.000888s | 0.000899s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.000882s | 0.000885s | 0.000911s | byte equality observed |
| unfused.test | 10 | 0.000874s | 0.000885s | 0.000916s | byte equality observed |
| unfused_typed.test | 10 | 0.000868s | 0.000894s | 0.000908s | byte equality observed |
| vector_comparison.test | 10 | 0.000871s | 0.000883s | 0.000924s | byte equality observed |
| vector_construction.test | 10 | 0.000858s | 0.000871s | 0.000903s | byte equality observed |
| vector_conversion.test | 10 | 0.000883s | 0.000888s | 0.000935s | byte equality observed |
| vector_copy.test | 10 | 0.000894s | 0.000889s | 0.000934s | byte equality observed |
| vector_hash.test | 10 | 0.000909s | 0.000885s | 0.000932s | byte equality observed |
| vector_iterator.test | 10 | 0.000888s | 0.000876s | 0.000930s | byte equality observed |
| vector_make.test | 10 | 0.000873s | 0.000877s | 0.000911s | byte equality observed |
| vector_misc.test | 10 | 0.000875s | 0.000885s | 0.000931s | byte equality observed |
| vector_move.test | 10 | 0.000906s | 0.000915s | 0.000935s | byte equality observed |
| vector_mutate.test | 10 | 0.000891s | 0.000901s | 0.000914s | byte equality observed |
| vector_n.test | 10 | 0.000928s | 0.000919s | 0.000958s | byte equality observed |
| vector_nest.test | 10 | 0.000896s | 0.000905s | 0.000928s | byte equality observed |
| vector_tie.test | 10 | 0.000894s | 0.000895s | 0.000917s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000895s | 0.000902s | 0.000923s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000899s | 0.000871s | 0.000924s | byte equality observed |
| vector_value_at.test | 10 | 0.000887s | 0.000890s | 0.000919s | byte equality observed |
| zip.test | 10 | 0.000883s | 0.000901s | 0.000931s | byte equality observed |
| zip2.test | 10 | 0.000889s | 0.000909s | 0.000915s | byte equality observed |
| zip_ignore.test | 10 | 0.000885s | 0.000892s | 0.000924s | byte equality observed |
| zip_view.test | 10 | 0.000896s | 0.000885s | 0.000918s | byte equality observed |
| zip_view2.test | 10 | 0.000880s | 0.000865s | 0.000916s | byte equality observed |
| zip_view_ignore.test | 10 | 0.000868s | 0.000901s | 0.000915s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45790989032).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
