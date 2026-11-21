# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.337377 | 0.743846 | 1.030267 | 0.001329 | 0.001587 | 0.001746 |
| any.test | RUN | 0.339158 | 0.696794 | 0.972016 | 0.001538 | 0.001507 | 0.001726 |
| clear.test | RUN | 0.249068 | 0.633208 | 0.794368 | 0.001518 | 0.001843 | 0.001692 |
| copy.test | RUN | 0.206219 | 0.476409 | 0.650981 | 0.001681 | 0.001808 | 0.001510 |
| count.test | RUN | 0.232959 | 0.521140 | 0.719660 | 0.002190 | 0.001633 | 0.001737 |
| count_if.test | RUN | 0.224556 | 0.488992 | 0.654237 | 0.001379 | 0.001793 | 0.001516 |
| erase.test | RUN | 0.312962 | 0.863810 | 1.061685 | 0.001449 | 0.001527 | 0.001629 |
| erase_key.test | RUN | 0.303332 | 0.845477 | 0.996517 | 0.001788 | 0.001888 | 0.001408 |
| filter.test | RUN | 0.267993 | 0.719072 | 0.932377 | 0.002006 | 0.001817 | 0.001695 |
| filter_if.test | RUN | 0.311342 | 0.840635 | 1.089577 | 0.001718 | 0.001828 | 0.001776 |
| find.test | RUN | 0.278303 | 0.576873 | 0.822546 | 0.001584 | 0.001688 | 0.001615 |
| find_if.test | RUN | 0.242286 | 0.546601 | 0.750190 | 0.001671 | 0.001674 | 0.001822 |
| fold.test | RUN | 0.275729 | 0.670573 | 0.929203 | 0.001796 | 0.001832 | 0.001646 |
| for_each.test | RUN | 0.245847 | 0.605308 | 0.792004 | 0.001667 | 0.001795 | 0.001594 |
| insert.test | RUN | 0.352611 | 1.072196 | 1.275090 | 0.001743 | 0.001592 | 0.001597 |
| insert_range.test | RUN | 0.354847 | 1.062304 | 1.304817 | 0.001561 | 0.001590 | 0.001798 |
| iter_fold.test | RUN | 0.424007 | 1.020434 | 1.525789 | 0.001774 | 0.001875 | 0.001760 |
| move.test | RUN | 0.219350 | 0.502290 | 0.683822 | 0.001629 | 0.001520 | 0.001605 |
| none.test | RUN | 0.342694 | 0.698872 | 1.015546 | 0.001712 | 0.001797 | 0.001556 |
| pop_back.test | RUN | 0.335006 | 0.927720 | 1.183622 | 0.001581 | 0.001590 | 0.001798 |
| pop_front.test | RUN | 0.286161 | 0.763679 | 0.913857 | 0.001715 | 0.001654 | 0.001649 |
| push_back.test | RUN | 0.343992 | 1.077376 | 1.286947 | 0.001843 | 0.001872 | 0.001744 |
| push_front.test | RUN | 0.305533 | 0.897764 | 1.032765 | 0.001751 | 0.001762 | 0.001652 |
| remove.test | RUN | 0.356196 | 1.006077 | 1.264119 | 0.001698 | 0.001808 | 0.001594 |
| remove_if.test | RUN | 0.309577 | 0.851213 | 1.064228 | 0.001729 | 0.001738 | 0.001584 |
| replace.test | RUN | 0.300249 | 0.824991 | 0.975292 | 0.001538 | 0.001714 | 0.001670 |
| replace_if.test | RUN | 0.298584 | 0.836013 | 0.966607 | 0.001822 | 0.001893 | 0.001488 |
| reverse_fold.test | RUN | 0.454797 | 1.156540 | 1.706543 | 0.001640 | 0.001731 | 0.001723 |
| reverse_iter_fold.test | RUN | 0.469098 | 1.193825 | 1.805885 | 0.001687 | 0.001764 | 0.001662 |
| reverse.test | RUN | 0.288908 | 0.835728 | 1.021356 | 0.001667 | 0.001857 | 0.001408 |
| segmented_for_each.test | RUN | 0.514559 | 1.610375 | 2.053059 | 0.001858 | 0.001824 | 0.001575 |
| segmented_find.test | RUN | 0.319257 | 0.839932 | 1.166304 | 0.001571 | 0.001518 | 0.001729 |
| segmented_find_if.test | RUN | 0.316438 | 0.856883 | 1.170766 | 0.001493 | 0.001643 | 0.001676 |
| segmented_fold.test | RUN | 0.399510 | 1.130505 | 1.436339 | 0.001722 | 0.001735 | 0.001678 |
| transform.test | RUN | 0.304284 | 0.900292 | 1.057051 | 0.001542 | 0.001858 | 0.001760 |
| join.test | RUN | 0.236768 | 0.562619 | 0.757225 | 0.001646 | 0.001799 | 0.001588 |
| zip.test | RUN | 0.398314 | 1.001130 | 1.423831 | 0.001743 | 0.001818 | 0.001781 |
| zip2.test | RUN | 0.404894 | 1.009500 | 1.356898 | 0.001635 | 0.001792 | 0.001605 |
| zip_ignore.test | RUN | 0.294404 | 0.676532 | 0.917073 | 0.001600 | 0.001698 | 0.001570 |
| flatten.test | RUN | 0.280401 | 0.762006 | 0.936050 | 0.001482 | 0.001844 | 0.001676 |
| ticket-5490.test | COMPILE | 0.152938 | 0.329593 | 0.415700 | — | — | — |
| as_deque.test | RUN | 0.281093 | 0.711344 | 0.996017 | 0.001625 | 0.001813 | 0.001534 |
| as_list.test | RUN | 0.314445 | 0.880285 | 1.060787 | 0.001664 | 0.001858 | 0.001805 |
| as_map.test | RUN | 0.313373 | 0.867870 | 1.078204 | 0.001386 | 0.001551 | 0.001502 |
| as_map_assoc.test | RUN | 0.305818 | 0.795879 | 1.020071 | 0.001626 | 0.001698 | 0.001730 |
| as_set.test | RUN | 0.354087 | 1.017370 | 1.236317 | 0.001792 | 0.001400 | 0.001712 |
| as_vector.test | RUN | 0.314729 | 0.915210 | 1.059971 | 0.001297 | 0.001368 | 0.001870 |
| boost_tuple.test | RUN | 0.329310 | 0.857933 | 1.087866 | 0.001460 | 0.001702 | 0.001770 |
| boost_tuple_iterator.test | RUN | 0.223689 | 0.517008 | 0.666648 | 0.001452 | 0.001714 | 0.001667 |
| cons.test | RUN | 0.404273 | 0.998810 | 1.266763 | 0.001534 | 0.001339 | 0.001509 |
| convert_boost_tuple.test | RUN | 0.249240 | 0.759492 | 0.842233 | 0.001403 | 0.001612 | 0.001586 |
| convert_deque.test | RUN | 0.254906 | 0.754666 | 0.847470 | 0.001516 | 0.001577 | 0.001537 |
| convert_list.test | RUN | 0.252987 | 0.773563 | 0.858436 | 0.001611 | 0.001298 | 0.001381 |
| convert_std_pair.test | RUN | 0.263327 | 0.763998 | 0.861150 | 0.001610 | 0.001670 | 0.001770 |
| convert_std_tuple.test | RUN | 0.256063 | 0.749136 | 0.849505 | 0.001359 | 0.001565 | 0.001436 |
| convert_vector.test | RUN | 0.256731 | 0.756054 | 0.830928 | 0.001465 | 0.001572 | 0.001475 |
| filter_view.test | RUN | 0.298920 | 0.792734 | 1.005429 | 0.001619 | 0.001519 | 0.001715 |
| hash.test | RUN | 0.298337 | 0.726969 | 0.983477 | 0.001727 | 0.001803 | 0.001534 |
| io.test | RUN | 0.319073 | 1.010236 | 1.146374 | 0.001696 | 0.002014 | 0.001942 |
| iterator_range.test | RUN | 0.282185 | 0.764256 | 0.940095 | 0.001656 | 0.001843 | 0.001567 |
| joint_view.test | RUN | 0.387929 | 1.245930 | 1.436782 | 0.001483 | 0.001746 | 0.001734 |
| list_comparison.test | RUN | 0.222742 | 0.527402 | 0.710469 | 0.001520 | 0.001774 | 0.001678 |
| list_construction.test | RUN | 0.216127 | 0.516899 | 0.679962 | 0.001537 | 0.001658 | 0.001603 |
| list_copy.test | RUN | 0.335621 | 0.933553 | 1.169132 | 0.001454 | 0.001806 | 0.001886 |
| list_iterator.test | RUN | 0.215162 | 0.508093 | 0.651284 | 0.001561 | 0.001736 | 0.001702 |
| list_hash.test | RUN | 0.298593 | 1.004867 | 0.956470 | 0.001549 | 0.001785 | 0.001692 |
| list_make.test | RUN | 0.234542 | 0.568444 | 0.731021 | 0.001566 | 0.001584 | 0.001515 |
| list_misc.test | RUN | 0.294945 | 0.678299 | 0.909329 | 0.001501 | 0.001742 | 0.001796 |
| list_mutate.test | RUN | 0.211344 | 0.461622 | 0.575059 | 0.001576 | 0.001750 | 0.001772 |
| list_nest.test | RUN | 0.400887 | 1.267745 | 1.649160 | 0.001484 | 0.001711 | 0.001566 |
| list_tie.test | RUN | 0.220801 | 0.506033 | 0.660320 | 0.001597 | 0.001805 | 0.001664 |
| list_value_at.test | RUN | 0.211587 | 0.502710 | 0.627243 | 0.001614 | 0.001548 | 0.001647 |
| deque_comparison.test | RUN | 0.221367 | 0.531794 | 0.743936 | 0.001384 | 0.001556 | 0.001524 |
| deque_construction.test | RUN | 0.226753 | 0.509987 | 0.675013 | 0.001811 | 0.001661 | 0.001523 |
| deque_copy.test | RUN | 0.315834 | 0.878345 | 1.083071 | 0.001479 | 0.001664 | 0.001780 |
| deque_iterator.test | RUN | 0.222423 | 0.561495 | 0.682970 | 0.001736 | 0.001508 | 0.001782 |
| deque_hash.test | RUN | 0.300478 | 0.956852 | 0.962518 | 0.001492 | 0.001847 | 0.001881 |
| deque_is_constructible.test | COMPILE | 0.116975 | 0.241256 | 0.319321 | — | — | — |
| deque_make.test | RUN | 0.222659 | 0.549805 | 0.707327 | 0.001638 | 0.001616 | 0.001724 |
| deque_misc.test | RUN | 0.287524 | 0.646375 | 0.861781 | 0.001463 | 0.001570 | 0.001457 |
| deque_move.test | RUN | 0.220713 | 0.576065 | 0.709897 | 0.001490 | 0.001678 | 0.001906 |
| deque_mutate.test | RUN | 0.199750 | 0.460622 | 0.622419 | 0.001447 | 0.001712 | 0.001664 |
| deque_nest.test | RUN | 0.591641 | 2.027202 | 2.660861 | 0.001570 | 0.001580 | 0.001476 |
| deque_tie.test | RUN | 0.212520 | 0.506848 | 0.646574 | 0.001321 | 0.001844 | 0.001472 |
| deque_value_at.test | RUN | 0.205571 | 0.455493 | 0.630991 | 0.001664 | 0.001690 | 0.001439 |
| front_extended_deque.test | RUN | 0.302355 | 0.689516 | 0.959300 | 0.001777 | 0.001793 | 0.001738 |
| back_extended_deque.test | RUN | 0.295095 | 0.726017 | 0.949034 | 0.001657 | 0.001770 | 0.001664 |
| make_list.test | RUN | 0.228665 | 0.561942 | 0.721229 | 0.001692 | 0.001724 | 0.001740 |
| make_vector.test | RUN | 0.232056 | 0.547436 | 0.768992 | 0.001881 | 0.001728 | 0.001646 |
| map.test | RUN | 0.301007 | 0.858626 | 1.014749 | 0.001716 | 0.001705 | 0.001494 |
| map_comparison.test | RUN | 0.234098 | 0.556845 | 0.729896 | 0.001536 | 0.001774 | 0.001649 |
| map_construction.test | RUN | 0.228928 | 0.528489 | 0.698747 | 0.001495 | 0.001625 | 0.001800 |
| map_copy.test | RUN | 0.275993 | 0.682234 | 0.857643 | 0.001625 | 0.001715 | 0.001668 |
| map_misc.test | RUN | 0.293187 | 0.700432 | 0.882565 | 0.001564 | 0.001452 | 0.001492 |
| map_move.test | RUN | 0.223539 | 0.586762 | 0.709524 | 0.002071 | 0.001411 | 0.001281 |
| map_mutate.test | RUN | 0.209023 | 0.448023 | 0.607701 | 0.001472 | 0.001602 | 0.001336 |
| map_tie.test | RUN | 0.213740 | 0.472712 | 0.619838 | 0.001628 | 0.001742 | 0.001747 |
| nil.test | RUN | 0.148830 | 0.321081 | 0.438664 | 0.001758 | 0.001879 | 0.001664 |
| nview.test | RUN | 0.278813 | 0.655653 | 0.869050 | 0.001710 | 0.001816 | 0.001666 |
| reverse_view.test | RUN | 0.369028 | 1.107734 | 1.335812 | 0.001766 | 0.001829 | 0.001637 |
| segmented_iterator_range.test | RUN | 0.433605 | 1.297088 | 1.613326 | 0.001846 | 0.001844 | 0.001469 |
| set.test | RUN | 0.274139 | 0.730818 | 0.916807 | 0.001567 | 0.001676 | 0.001774 |
| single_view.test | RUN | 0.251869 | 0.680618 | 0.838857 | 0.001773 | 0.001631 | 0.001496 |
| std_pair.test | RUN | 0.324531 | 0.848353 | 1.068204 | 0.001645 | 0.001539 | 0.001645 |
| boost_array.test | RUN | 0.272360 | 0.601628 | 0.813049 | 0.001752 | 0.001746 | 0.001649 |
| array.test | RUN | 0.270148 | 0.609936 | 0.807050 | 0.001561 | 0.001713 | 0.001716 |
| std_array.test | RUN | 0.272523 | 0.610379 | 0.792601 | 0.001693 | 0.001841 | 0.001679 |
| tuple_comparison.test | RUN | 0.246738 | 0.564460 | 0.733765 | 0.001586 | 0.001647 | 0.001603 |
| tuple_construction.test | RUN | 0.243509 | 0.566121 | 0.746986 | 0.001703 | 0.001828 | 0.001586 |
| tuple_conversion.test | RUN | 0.543726 | 1.741792 | 2.387091 | 0.001568 | 0.001793 | 0.001580 |
| tuple_copy.test | RUN | 0.366480 | 1.002131 | 1.282653 | 0.001522 | 0.001413 | 0.001746 |
| tuple_element.test | RUN | 0.220520 | 0.530005 | 0.719381 | 0.001244 | 0.001719 | 0.001670 |
| tuple_make.test | RUN | 0.239720 | 0.608932 | 0.757940 | 0.001513 | 0.001766 | 0.001729 |
| tuple_misc.test | RUN | 0.305904 | 0.726757 | 0.966613 | 0.001699 | 0.001790 | 0.001675 |
| tuple_mutate.test | RUN | 0.216940 | 0.476304 | 0.653825 | 0.001734 | 0.001293 | 0.001730 |
| tuple_nest.test | RUN | 0.883360 | 3.517992 | 4.481778 | 0.001727 | 0.001650 | 0.001685 |
| tuple_hash.test | RUN | 0.308366 | 0.991045 | 0.974617 | 0.001706 | 0.001503 | 0.001872 |
| tuple_tie.test | RUN | 0.230979 | 0.528651 | 0.741647 | 0.001678 | 0.001841 | 0.001762 |
| tuple_traits__maybe_variadic.test | RUN | 0.258244 | 0.667955 | 0.786953 | 0.001642 | 0.001707 | 0.001388 |
| tuple_traits__no_variadic.test | RUN | 0.277281 | 0.667364 | 0.855768 | 0.001516 | 0.001810 | 0.001590 |
| transform_view.test | RUN | 0.356730 | 1.075771 | 1.308635 | 0.001564 | 0.001471 | 0.001658 |
| identity_view.test | RUN | 0.347015 | 1.016003 | 1.240290 | 0.001345 | 0.001398 | 0.001170 |
| vector_comparison.test | RUN | 0.224717 | 0.561403 | 0.751983 | 0.001095 | 0.001664 | 0.001733 |
| vector_construction.test | RUN | 0.228723 | 0.531971 | 0.691760 | 0.001573 | 0.001601 | 0.001848 |
| vector_conversion.test | RUN | 0.623677 | 2.266357 | 3.050516 | 0.001774 | 0.001781 | 0.001692 |
| vector_copy.test | RUN | 0.334516 | 1.000544 | 1.296234 | 0.001504 | 0.001821 | 0.001441 |
| vector_iterator.test | RUN | 0.216170 | 0.541515 | 0.698235 | 0.001760 | 0.001568 | 0.001496 |
| vector_make.test | RUN | 0.235846 | 0.564004 | 0.753608 | 0.001524 | 0.001697 | 0.001612 |
| vector_misc.test | RUN | 0.299000 | 0.726456 | 0.884700 | 0.001575 | 0.001747 | 0.001538 |
| vector_move.test | RUN | 0.228715 | 0.564436 | 0.705597 | 0.001397 | 0.001630 | 0.001459 |
| vector_mutate.test | RUN | 0.206816 | 0.467961 | 0.665554 | 0.001380 | 0.001442 | 0.001733 |
| vector_n.test | RUN | 0.252911 | 0.568623 | 0.801302 | 0.001794 | 0.001892 | 0.001686 |
| vector_nest.test | RUN | 0.886869 | 3.664626 | 4.529682 | 0.001710 | 0.001708 | 0.001536 |
| vector_hash.test | RUN | 0.292784 | 0.977129 | 0.931442 | 0.001556 | 0.001798 | 0.001501 |
| vector_tie.test | RUN | 0.217306 | 0.518925 | 0.707294 | 0.001800 | 0.001787 | 0.001728 |
| vector_traits__maybe_variadic.test | RUN | 0.229257 | 0.574954 | 0.690394 | 0.001762 | 0.001722 | 0.001704 |
| vector_traits__no_variadic.test | RUN | 0.264035 | 0.643681 | 0.733457 | 0.001490 | 0.001630 | 0.001572 |
| vector_value_at.test | RUN | 0.208020 | 0.463225 | 0.663043 | 0.001611 | 0.001838 | 0.001823 |
| zip_view.test | RUN | 0.436237 | 1.137754 | 1.611718 | 0.001597 | 0.001505 | 0.001390 |
| zip_view2.test | RUN | 0.344686 | 0.908415 | 1.255725 | 0.001644 | 0.001584 | 0.001714 |
| zip_view_ignore.test | RUN | 0.334020 | 0.812525 | 1.114101 | 0.001475 | 0.001629 | 0.001528 |
| repetitive_view.test | RUN | 0.553187 | 1.473445 | 2.153982 | 0.001582 | 0.001813 | 0.001531 |
| deduce_sequence.test | RUN | 0.263197 | 0.647828 | 0.828778 | 0.001468 | 0.001498 | 0.001654 |
| adapt_adt_named.test | RUN | 0.314491 | 0.880106 | 1.030977 | 0.001421 | 0.001721 | 0.001702 |
| adapt_adt_named_empty.test | RUN | 0.277257 | 0.695777 | 0.861664 | 0.001666 | 0.001829 | 0.001735 |
| adapt_adt.test | RUN | 0.344014 | 1.140591 | 1.269021 | 0.001780 | 0.001843 | 0.001800 |
| adapt_adt_empty.test | RUN | 0.269822 | 0.717749 | 0.849991 | 0.001775 | 0.001711 | 0.001570 |
| adapt_assoc_adt_named.test | RUN | 0.358150 | 0.926087 | 1.125793 | 0.001711 | 0.001769 | 0.001298 |
| adapt_assoc_adt_named_empty.test | RUN | 0.270932 | 0.687906 | 0.866598 | 0.001610 | 0.001623 | 0.001624 |
| adapt_assoc_adt.test | RUN | 0.355160 | 0.942842 | 1.178494 | 0.001265 | 0.001472 | 0.001588 |
| adapt_assoc_adt_empty.test | RUN | 0.275484 | 0.685380 | 0.882555 | 0.001550 | 0.001671 | 0.001671 |
| adapt_assoc_struct_named.test | RUN | 0.344814 | 0.898335 | 1.126791 | 0.001718 | 0.001857 | 0.001701 |
| adapt_assoc_struct_named_empty.test | RUN | 0.277559 | 0.701730 | 0.887676 | 0.001380 | 0.001835 | 0.001817 |
| adapt_assoc_struct.test | RUN | 0.310405 | 0.846505 | 1.074464 | 0.001547 | 0.001867 | 0.001647 |
| adapt_assoc_struct_empty.test | RUN | 0.271931 | 0.687259 | 0.905504 | 0.001670 | 0.001713 | 0.001408 |
| adapt_assoc_tpl_adt.test | RUN | 0.373596 | 0.977795 | 1.200946 | 0.001593 | 0.001535 | 0.001778 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.275148 | 0.700971 | 0.874081 | 0.001655 | 0.001764 | 0.001595 |
| adapt_assoc_tpl_struct.test | RUN | 0.303029 | 0.847382 | 1.013250 | 0.001729 | 0.001862 | 0.001408 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.267532 | 0.719438 | 0.887761 | 0.001512 | 0.001435 | 0.001765 |
| adapt_struct_named.test | RUN | 0.317916 | 0.840468 | 1.007436 | 0.001725 | 0.001707 | 0.001620 |
| adapt_struct_named_empty.test | RUN | 0.273343 | 0.690492 | 0.851805 | 0.001547 | 0.001890 | 0.001611 |
| adapt_struct.test | RUN | 0.332538 | 0.969754 | 1.149543 | 0.001592 | 0.001852 | 0.001602 |
| adapt_struct_empty.test | RUN | 0.270817 | 0.703378 | 0.850477 | 0.001826 | 0.001681 | 0.001565 |
| adapt_tpl_adt.test | RUN | 0.348877 | 1.136289 | 1.202099 | 0.001476 | 0.001856 | 0.001528 |
| adapt_tpl_adt_empty.test | RUN | 0.280756 | 0.701530 | 0.862801 | 0.001619 | 0.001815 | 0.001692 |
| adapt_tpl_struct.test | RUN | 0.286569 | 0.774227 | 0.970578 | 0.001667 | 0.001648 | 0.001702 |
| adapt_tpl_struct_empty.test | RUN | 0.271436 | 0.720581 | 0.849588 | 0.001585 | 0.001693 | 0.001704 |
| adt_attribute_proxy.test | RUN | 0.310622 | 0.693010 | 0.923598 | 0.001726 | 0.001848 | 0.001598 |
| define_struct.test | RUN | 0.379146 | 0.965305 | 1.188323 | 0.001747 | 0.001689 | 0.001801 |
| define_struct_empty.test | RUN | 0.329436 | 0.790117 | 0.985707 | 0.001326 | 0.001510 | 0.001668 |
| define_struct_move.test | RUN | 0.209947 | 0.475667 | 0.606567 | 0.001594 | 0.001538 | 0.001708 |
| define_struct_inline.test | RUN | 0.398360 | 1.159246 | 1.328328 | 0.001685 | 0.001841 | 0.001708 |
| define_struct_inline_empty.test | RUN | 0.330961 | 0.806077 | 0.981971 | 0.001410 | 0.001687 | 0.001836 |
| define_struct_inline_move.test | RUN | 0.209774 | 0.457288 | 0.628487 | 0.001500 | 0.001796 | 0.001660 |
| define_assoc_struct.test | RUN | 0.357746 | 0.922291 | 1.161957 | 0.001752 | 0.001709 | 0.001740 |
| define_assoc_struct_empty.test | RUN | 0.322870 | 0.789491 | 1.029784 | 0.001747 | 0.001614 | 0.001781 |
| define_assoc_struct_move.test | RUN | 0.208257 | 0.467921 | 0.589786 | 0.001751 | 0.001562 | 0.001735 |
| define_tpl_struct.test | RUN | 0.363289 | 0.932042 | 1.148152 | 0.001763 | 0.001673 | 0.001701 |
| define_tpl_struct_empty.test | RUN | 0.332484 | 0.820720 | 1.022165 | 0.001726 | 0.001648 | 0.001704 |
| define_tpl_struct_move.test | RUN | 0.213569 | 0.441158 | 0.621716 | 0.001481 | 0.001820 | 0.001466 |
| define_tpl_struct_inline.test | RUN | 0.378435 | 1.067130 | 1.267619 | 0.001630 | 0.001574 | 0.001543 |
| define_tpl_struct_inline_empty.test | RUN | 0.320515 | 0.791155 | 0.991653 | 0.001540 | 0.001743 | 0.001795 |
| define_tpl_struct_inline_move.test | RUN | 0.217365 | 0.458507 | 0.622007 | 0.001671 | 0.001669 | 0.001626 |
| define_assoc_tpl_struct.test | RUN | 0.365235 | 0.934567 | 1.188420 | 0.001851 | 0.001848 | 0.001752 |
| define_assoc_tpl_struct_empty.test | RUN | 0.336047 | 0.797935 | 1.012253 | 0.001621 | 0.001480 | 0.001668 |
| define_assoc_tpl_struct_move.test | RUN | 0.213063 | 0.465027 | 0.591794 | 0.001519 | 0.001716 | 0.001707 |
| std_tuple.test | RUN | 0.216263 | 0.527492 | 0.650054 | 0.001410 | 0.001627 | 0.001760 |
| std_tuple_iterator.test | RUN | 0.217949 | 0.532461 | 0.661021 | 0.001601 | 0.001810 | 0.001691 |
| ref_vector.test | RUN | 0.249650 | 0.562930 | 0.730930 | 0.001700 | 0.001721 | 0.001626 |
| flatten_view.test | RUN | 0.262642 | 0.675939 | 0.877804 | 0.001530 | 0.001510 | 0.001385 |
| github-159.test | COMPILE | 0.117751 | 0.249611 | 0.307148 | — | — | — |
| github-176.test | RUN | 0.246310 | 0.599991 | 0.737096 | 0.001737 | 0.001832 | 0.001674 |
| size.test | COMPILE | 0.205384 | 0.440134 | 0.564638 | — | — | — |
| fused.test | RUN | 0.295770 | 0.651826 | 0.864874 | 0.001683 | 0.001628 | 0.001701 |
| fused_function_object.test | RUN | 0.213839 | 0.492597 | 0.631036 | 0.001515 | 0.001487 | 0.001704 |
| fused_procedure.test | RUN | 0.281057 | 0.619148 | 0.826055 | 0.001653 | 0.001656 | 0.001468 |
| unfused.test | RUN | 0.232185 | 0.492772 | 0.680258 | 0.001670 | 0.001743 | 0.001430 |
| unfused_typed.test | RUN | 0.228745 | 0.547290 | 0.690696 | 0.001777 | 0.001748 | 0.001682 |
| make_fused.test | RUN | 0.286754 | 0.655079 | 0.860862 | 0.001592 | 0.001644 | 0.001825 |
| make_fused_function_object.test | RUN | 0.218996 | 0.511086 | 0.659610 | 0.001294 | 0.001748 | 0.001532 |
| make_fused_procedure.test | RUN | 0.284684 | 0.614274 | 0.819713 | 0.001720 | 0.001750 | 0.001612 |
| make_unfused.test | RUN | 0.222126 | 0.509578 | 0.644088 | 0.001562 | 0.001763 | 0.001701 |
| invoke.test | RUN | 0.562161 | 1.800029 | 2.233994 | 0.001460 | 0.001624 | 0.001595 |
| invoke_function_object.test | RUN | 0.265096 | 0.653155 | 0.842393 | 0.001377 | 0.001802 | 0.001754 |
| invoke_procedure.test | RUN | 0.449711 | 1.314010 | 1.660992 | 0.001711 | 0.001658 | 0.001680 |
| swap.test | RUN | 0.329826 | 0.798930 | 1.101482 | 0.001633 | 0.001629 | 0.001835 |
| is_sequence.test | COMPILE | 0.057447 | 0.119234 | 0.139341 | — | — | — |
| is_view.test | COMPILE | 0.059335 | 0.114086 | 0.139606 | — | — | — |
| pair_deque.test | COMPILE | 0.122912 | 0.254627 | 0.347671 | — | — | — |
| pair_list.test | COMPILE | 0.122104 | 0.262679 | 0.355830 | — | — | — |
| pair_map.test | COMPILE | 0.124117 | 0.265630 | 0.332547 | — | — | — |
| pair_set.test | COMPILE | 0.126886 | 0.263337 | 0.327454 | — | — | — |
| pair_vector.test | COMPILE | 0.128017 | 0.266090 | 0.310649 | — | — | — |
| pair_nest.test | COMPILE | 0.052273 | 0.109604 | 0.125830 | — | — | — |
| index_sequence.test | COMPILE | 0.044444 | 0.074567 | 0.096567 | — | — | — |
| and.test | COMPILE | 0.034973 | 0.060614 | 0.068202 | — | — | — |
| tag_of.test | COMPILE | 0.057259 | 0.112457 | 0.129526 | — | — | — |
| unused.test | COMPILE | 0.031670 | 0.075509 | 0.080058 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.050727 | 0.117012 | 0.129599 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.045669 | 0.105803 | 0.112949 | — | — | — |
| quick.test | RUN | 0.161734 | 0.352987 | 0.395276 | 0.000510 | 0.001246 | 0.001188 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.004× | 0.997×, 1.011× | 1.003× |
| clang | 1.005× | 1.010×, 0.999× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44815881069).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.001015s | 0.001002s | 0.001018s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.001003s | 0.001010s | 0.000982s | byte equality observed |
| adapt_adt_named.test | 10 | 0.001001s | 0.001032s | 0.000992s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.001010s | 0.000997s | 0.000989s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.001013s | 0.001017s | 0.000999s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.001005s | 0.001001s | 0.000996s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.000999s | 0.001014s | 0.001007s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.000994s | 0.000989s | 0.000987s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.000992s | 0.000993s | 0.000991s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.001016s | 0.001008s | 0.000970s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.001007s | 0.001026s | 0.000988s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.001021s | 0.000999s | 0.000985s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.001016s | 0.001031s | 0.001005s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.000991s | 0.001037s | 0.000992s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.001021s | 0.001046s | 0.000992s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.000997s | 0.001040s | 0.000977s | byte equality observed |
| adapt_struct.test | 10 | 0.001022s | 0.001012s | 0.001007s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.000995s | 0.001006s | 0.000998s | byte equality observed |
| adapt_struct_named.test | 10 | 0.001007s | 0.001000s | 0.001004s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.001012s | 0.000994s | 0.001000s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.001034s | 0.001012s | 0.001009s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.001008s | 0.000988s | 0.000987s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.000998s | 0.000983s | 0.001000s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.001014s | 0.001001s | 0.001014s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.000976s | 0.000981s | 0.000981s | byte equality observed |
| all.test | 10 | 0.000984s | 0.001000s | 0.001005s | byte equality observed |
| any.test | 10 | 0.000977s | 0.000959s | 0.000996s | byte equality observed |
| array.test | 10 | 0.000981s | 0.000944s | 0.000969s | byte equality observed |
| as_deque.test | 10 | 0.000976s | 0.000987s | 0.000988s | byte equality observed |
| as_list.test | 10 | 0.001034s | 0.001011s | 0.001016s | byte equality observed |
| as_map.test | 10 | 0.001024s | 0.001023s | 0.001026s | byte equality observed |
| as_map_assoc.test | 10 | 0.001007s | 0.001012s | 0.001002s | byte equality observed |
| as_set.test | 10 | 0.001010s | 0.001021s | 0.001013s | byte equality observed |
| as_vector.test | 10 | 0.001024s | 0.001037s | 0.001018s | byte equality observed |
| back_extended_deque.test | 10 | 0.000979s | 0.000984s | 0.000993s | byte equality observed |
| boost_array.test | 10 | 0.000980s | 0.000990s | 0.000987s | byte equality observed |
| boost_tuple.test | 10 | 0.001011s | 0.001037s | 0.001010s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.000967s | 0.000967s | 0.001006s | byte equality observed |
| clear.test | 10 | 0.001008s | 0.000990s | 0.000994s | byte equality observed |
| cons.test | 10 | 0.001014s | 0.001040s | 0.001042s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.000992s | 0.000975s | 0.000972s | byte equality observed |
| convert_deque.test | 10 | 0.000993s | 0.001018s | 0.000970s | byte equality observed |
| convert_list.test | 10 | 0.000991s | 0.001011s | 0.000975s | byte equality observed |
| convert_std_pair.test | 10 | 0.000999s | 0.000997s | 0.000993s | byte equality observed |
| convert_std_tuple.test | 10 | 0.000986s | 0.000981s | 0.000975s | byte equality observed |
| convert_vector.test | 10 | 0.000983s | 0.000978s | 0.001005s | byte equality observed |
| copy.test | 10 | 0.000983s | 0.000998s | 0.000987s | byte equality observed |
| count.test | 10 | 0.000974s | 0.000973s | 0.000996s | byte equality observed |
| count_if.test | 10 | 0.000976s | 0.000950s | 0.001012s | byte equality observed |
| deduce_sequence.test | 10 | 0.000985s | 0.000981s | 0.001012s | byte equality observed |
| define_assoc_struct.test | 10 | 0.001017s | 0.001011s | 0.001009s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.001022s | 0.001019s | 0.001011s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.000996s | 0.001008s | 0.001006s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.001024s | 0.001014s | 0.000999s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.000999s | 0.001023s | 0.001015s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000999s | 0.000989s | 0.000984s | byte equality observed |
| define_struct.test | 10 | 0.001045s | 0.001002s | 0.001030s | byte equality observed |
| define_struct_empty.test | 10 | 0.001026s | 0.001000s | 0.001023s | byte equality observed |
| define_struct_inline.test | 10 | 0.001039s | 0.001030s | 0.001011s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.000991s | 0.000981s | 0.001024s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000973s | 0.000968s | 0.000960s | byte equality observed |
| define_struct_move.test | 10 | 0.000966s | 0.000973s | 0.001003s | byte equality observed |
| define_tpl_struct.test | 10 | 0.001009s | 0.000999s | 0.001024s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.000982s | 0.000978s | 0.001029s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.000999s | 0.000990s | 0.001014s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.000993s | 0.001008s | 0.001009s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000991s | 0.000973s | 0.001007s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000995s | 0.000995s | 0.000993s | byte equality observed |
| deque_comparison.test | 10 | 0.001001s | 0.000997s | 0.000976s | byte equality observed |
| deque_construction.test | 10 | 0.001011s | 0.000990s | 0.000986s | byte equality observed |
| deque_copy.test | 10 | 0.000990s | 0.001028s | 0.001051s | byte equality observed |
| deque_hash.test | 10 | 0.000994s | 0.000973s | 0.001011s | byte equality observed |
| deque_iterator.test | 10 | 0.000990s | 0.000981s | 0.000995s | byte equality observed |
| deque_make.test | 10 | 0.001006s | 0.000984s | 0.000982s | byte equality observed |
| deque_misc.test | 10 | 0.000968s | 0.000983s | 0.000991s | byte equality observed |
| deque_move.test | 10 | 0.001000s | 0.001021s | 0.000993s | byte equality observed |
| deque_mutate.test | 10 | 0.000988s | 0.000973s | 0.000980s | byte equality observed |
| deque_nest.test | 10 | 0.000975s | 0.000997s | 0.000971s | byte equality observed |
| deque_tie.test | 10 | 0.000992s | 0.001023s | 0.000989s | byte equality observed |
| deque_value_at.test | 10 | 0.000979s | 0.000964s | 0.000983s | byte equality observed |
| erase.test | 10 | 0.001010s | 0.001015s | 0.001027s | byte equality observed |
| erase_key.test | 10 | 0.001023s | 0.001019s | 0.001014s | byte equality observed |
| filter.test | 10 | 0.000994s | 0.001014s | 0.000979s | byte equality observed |
| filter_if.test | 10 | 0.001017s | 0.001035s | 0.000999s | byte equality observed |
| filter_view.test | 10 | 0.001015s | 0.001029s | 0.000991s | byte equality observed |
| find.test | 10 | 0.001011s | 0.001023s | 0.000999s | byte equality observed |
| find_if.test | 10 | 0.001012s | 0.001020s | 0.000990s | byte equality observed |
| flatten.test | 10 | 0.000989s | 0.000981s | 0.000998s | byte equality observed |
| flatten_view.test | 10 | 0.001013s | 0.000974s | 0.000995s | byte equality observed |
| fold.test | 10 | 0.001008s | 0.001025s | 0.001032s | byte equality observed |
| for_each.test | 10 | 0.001024s | 0.001005s | 0.001017s | byte equality observed |
| front_extended_deque.test | 10 | 0.000997s | 0.000979s | 0.000989s | byte equality observed |
| fused.test | 10 | 0.000997s | 0.000982s | 0.001024s | byte equality observed |
| fused_function_object.test | 10 | 0.000962s | 0.000987s | 0.001017s | byte equality observed |
| fused_procedure.test | 10 | 0.000994s | 0.000999s | 0.000988s | byte equality observed |
| github-176.test | 10 | 0.000974s | 0.001010s | 0.000994s | byte equality observed |
| hash.test | 10 | 0.001012s | 0.001003s | 0.000999s | byte equality observed |
| identity_view.test | 10 | 0.001016s | 0.001018s | 0.001015s | byte equality observed |
| insert.test | 10 | 0.001030s | 0.001012s | 0.001030s | byte equality observed |
| insert_range.test | 10 | 0.001015s | 0.001027s | 0.001034s | byte equality observed |
| invoke.test | 10 | 0.000997s | 0.000974s | 0.000973s | byte equality observed |
| invoke_function_object.test | 10 | 0.001021s | 0.000953s | 0.000982s | byte equality observed |
| invoke_procedure.test | 10 | 0.000992s | 0.000970s | 0.000991s | byte equality observed |
| io.test | 10 | 0.001134s | 0.001109s | 0.001132s | byte equality observed |
| iter_fold.test | 10 | 0.000989s | 0.001054s | 0.001047s | byte equality observed |
| iterator_range.test | 10 | 0.001033s | 0.001026s | 0.001057s | byte equality observed |
| join.test | 10 | 0.000978s | 0.001006s | 0.000983s | byte equality observed |
| joint_view.test | 10 | 0.001046s | 0.001065s | 0.001062s | byte equality observed |
| list_comparison.test | 10 | 0.000977s | 0.000996s | 0.001005s | byte equality observed |
| list_construction.test | 10 | 0.000975s | 0.000992s | 0.000968s | byte equality observed |
| list_copy.test | 10 | 0.000992s | 0.000995s | 0.000981s | byte equality observed |
| list_hash.test | 10 | 0.000999s | 0.001003s | 0.001000s | byte equality observed |
| list_iterator.test | 10 | 0.000992s | 0.001013s | 0.000983s | byte equality observed |
| list_make.test | 10 | 0.000993s | 0.000991s | 0.001005s | byte equality observed |
| list_misc.test | 10 | 0.001002s | 0.001011s | 0.001011s | byte equality observed |
| list_mutate.test | 10 | 0.001019s | 0.001008s | 0.001012s | byte equality observed |
| list_nest.test | 10 | 0.001005s | 0.000996s | 0.001015s | byte equality observed |
| list_tie.test | 10 | 0.000998s | 0.000973s | 0.001006s | byte equality observed |
| list_value_at.test | 10 | 0.000974s | 0.000977s | 0.001000s | byte equality observed |
| make_fused.test | 10 | 0.000969s | 0.000971s | 0.000984s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000982s | 0.000992s | 0.000976s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000973s | 0.000982s | 0.000971s | byte equality observed |
| make_list.test | 10 | 0.000979s | 0.000985s | 0.000979s | byte equality observed |
| make_unfused.test | 10 | 0.000978s | 0.000981s | 0.001002s | byte equality observed |
| make_vector.test | 10 | 0.000995s | 0.000977s | 0.000999s | byte equality observed |
| map.test | 10 | 0.001049s | 0.001035s | 0.001046s | byte equality observed |
| map_comparison.test | 10 | 0.000975s | 0.000975s | 0.000996s | byte equality observed |
| map_construction.test | 9 | 0.000965s | 0.001002s | 0.000993s | byte equality observed |
| map_copy.test | 10 | 0.001033s | 0.000995s | 0.001037s | byte equality observed |
| map_misc.test | 10 | 0.000992s | 0.001004s | 0.001005s | byte equality observed |
| map_move.test | 10 | 0.001016s | 0.001016s | 0.001015s | byte equality observed |
| map_mutate.test | 10 | 0.000989s | 0.001007s | 0.001024s | byte equality observed |
| map_tie.test | 10 | 0.000990s | 0.000999s | 0.001003s | byte equality observed |
| move.test | 10 | 0.000985s | 0.000986s | 0.000999s | byte equality observed |
| nil.test | 10 | 0.001004s | 0.000999s | 0.001028s | byte equality observed |
| none.test | 10 | 0.000976s | 0.000995s | 0.000978s | byte equality observed |
| nview.test | 10 | 0.000995s | 0.001007s | 0.000988s | byte equality observed |
| pop_back.test | 10 | 0.001021s | 0.001031s | 0.001029s | byte equality observed |
| pop_front.test | 10 | 0.001012s | 0.001051s | 0.001037s | byte equality observed |
| push_back.test | 10 | 0.001016s | 0.001010s | 0.001033s | byte equality observed |
| push_front.test | 10 | 0.001020s | 0.001016s | 0.001010s | byte equality observed |
| quick.test | 10 | 0.000451s | 0.000964s | 0.000981s | byte equality observed |
| ref_vector.test | 10 | 0.001021s | 0.000996s | 0.000999s | byte equality observed |
| remove.test | 10 | 0.001034s | 0.001043s | 0.001038s | byte equality observed |
| remove_if.test | 10 | 0.001035s | 0.001034s | 0.001012s | byte equality observed |
| repetitive_view.test | 10 | 0.000987s | 0.000972s | 0.001002s | byte equality observed |
| replace.test | 10 | 0.001003s | 0.001000s | 0.001018s | byte equality observed |
| replace_if.test | 10 | 0.001006s | 0.001042s | 0.001005s | byte equality observed |
| reverse.test | 10 | 0.001008s | 0.001018s | 0.001027s | byte equality observed |
| reverse_fold.test | 10 | 0.000996s | 0.001013s | 0.001014s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.001014s | 0.001020s | 0.001023s | byte equality observed |
| reverse_view.test | 10 | 0.001026s | 0.001021s | 0.001024s | byte equality observed |
| segmented_find.test | 10 | 0.000987s | 0.000972s | 0.000975s | byte equality observed |
| segmented_find_if.test | 10 | 0.000974s | 0.000989s | 0.001010s | byte equality observed |
| segmented_fold.test | 10 | 0.001019s | 0.001004s | 0.000986s | byte equality observed |
| segmented_for_each.test | 10 | 0.001025s | 0.001035s | 0.001012s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.001020s | 0.001058s | 0.001016s | byte equality observed |
| set.test | 10 | 0.001007s | 0.001007s | 0.001017s | byte equality observed |
| single_view.test | 10 | 0.001009s | 0.001020s | 0.001008s | byte equality observed |
| std_array.test | 10 | 0.001001s | 0.000993s | 0.000986s | byte equality observed |
| std_pair.test | 10 | 0.001017s | 0.001010s | 0.001027s | byte equality observed |
| std_tuple.test | 10 | 0.000991s | 0.000982s | 0.000984s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.000977s | 0.000969s | 0.000994s | byte equality observed |
| swap.test | 10 | 0.000991s | 0.000973s | 0.001016s | byte equality observed |
| transform.test | 10 | 0.001002s | 0.001026s | 0.001012s | byte equality observed |
| transform_view.test | 10 | 0.001018s | 0.001018s | 0.001024s | byte equality observed |
| tuple_comparison.test | 10 | 0.000972s | 0.000973s | 0.000976s | byte equality observed |
| tuple_construction.test | 10 | 0.000967s | 0.000993s | 0.000975s | byte equality observed |
| tuple_conversion.test | 10 | 0.000986s | 0.000971s | 0.000977s | byte equality observed |
| tuple_copy.test | 10 | 0.000995s | 0.000985s | 0.001003s | byte equality observed |
| tuple_element.test | 10 | 0.000978s | 0.000986s | 0.000989s | byte equality observed |
| tuple_hash.test | 10 | 0.000995s | 0.000982s | 0.000985s | byte equality observed |
| tuple_make.test | 10 | 0.000995s | 0.000983s | 0.000998s | byte equality observed |
| tuple_misc.test | 10 | 0.000990s | 0.000987s | 0.001017s | byte equality observed |
| tuple_mutate.test | 10 | 0.001000s | 0.000988s | 0.001020s | byte equality observed |
| tuple_nest.test | 10 | 0.000991s | 0.000994s | 0.000996s | byte equality observed |
| tuple_tie.test | 10 | 0.000989s | 0.000977s | 0.000982s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.000982s | 0.000994s | 0.000999s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.000994s | 0.000988s | 0.001010s | byte equality observed |
| unfused.test | 10 | 0.001011s | 0.000997s | 0.001014s | byte equality observed |
| unfused_typed.test | 10 | 0.000986s | 0.000997s | 0.000988s | byte equality observed |
| vector_comparison.test | 10 | 0.000986s | 0.000978s | 0.001007s | byte equality observed |
| vector_construction.test | 10 | 0.000991s | 0.001015s | 0.000986s | byte equality observed |
| vector_conversion.test | 10 | 0.000973s | 0.000978s | 0.001035s | byte equality observed |
| vector_copy.test | 10 | 0.001023s | 0.000973s | 0.001022s | byte equality observed |
| vector_hash.test | 10 | 0.000998s | 0.000994s | 0.000983s | byte equality observed |
| vector_iterator.test | 10 | 0.000987s | 0.000981s | 0.000996s | byte equality observed |
| vector_make.test | 10 | 0.001004s | 0.000999s | 0.001031s | byte equality observed |
| vector_misc.test | 10 | 0.000988s | 0.001013s | 0.001007s | byte equality observed |
| vector_move.test | 10 | 0.001012s | 0.001018s | 0.001006s | byte equality observed |
| vector_mutate.test | 10 | 0.000983s | 0.000993s | 0.000985s | byte equality observed |
| vector_n.test | 10 | 0.001003s | 0.001018s | 0.001039s | byte equality observed |
| vector_nest.test | 10 | 0.000978s | 0.000984s | 0.001004s | byte equality observed |
| vector_tie.test | 10 | 0.000964s | 0.000994s | 0.000987s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000990s | 0.001002s | 0.000991s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000978s | 0.000989s | 0.001033s | byte equality observed |
| vector_value_at.test | 10 | 0.000970s | 0.000988s | 0.000969s | byte equality observed |
| zip.test | 10 | 0.000989s | 0.000970s | 0.000997s | byte equality observed |
| zip2.test | 10 | 0.000990s | 0.000960s | 0.001018s | byte equality observed |
| zip_ignore.test | 10 | 0.000981s | 0.001002s | 0.000983s | byte equality observed |
| zip_view.test | 10 | 0.000970s | 0.000985s | 0.000977s | byte equality observed |
| zip_view2.test | 10 | 0.000962s | 0.000980s | 0.001007s | byte equality observed |
| zip_view_ignore.test | 10 | 0.000964s | 0.000967s | 0.000973s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44815881069).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
