# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.337313 | 0.729051 | 1.020191 | 0.001401 | 0.001562 | 0.001521 |
| any.test | RUN | 0.327812 | 0.690515 | 0.965138 | 0.001349 | 0.001680 | 0.001724 |
| clear.test | RUN | 0.244482 | 0.628942 | 0.796424 | 0.001558 | 0.001748 | 0.001968 |
| copy.test | RUN | 0.203986 | 0.479948 | 0.641036 | 0.001533 | 0.001616 | 0.001600 |
| count.test | RUN | 0.228923 | 0.525454 | 0.708342 | 0.001580 | 0.001744 | 0.001491 |
| count_if.test | RUN | 0.215820 | 0.479264 | 0.655512 | 0.001489 | 0.001681 | 0.001625 |
| erase.test | RUN | 0.306907 | 0.869627 | 1.052830 | 0.001742 | 0.001776 | 0.001517 |
| erase_key.test | RUN | 0.297189 | 0.849187 | 1.000685 | 0.001398 | 0.001571 | 0.001460 |
| filter.test | RUN | 0.266618 | 0.744503 | 0.921045 | 0.001722 | 0.001833 | 0.001781 |
| filter_if.test | RUN | 0.300145 | 0.877243 | 1.093831 | 0.001342 | 0.001848 | 0.001754 |
| find.test | RUN | 0.256270 | 0.600223 | 0.826136 | 0.001318 | 0.001631 | 0.001525 |
| find_if.test | RUN | 0.249737 | 0.562361 | 0.755374 | 0.001375 | 0.001620 | 0.001831 |
| fold.test | RUN | 0.273560 | 0.673428 | 0.929170 | 0.001560 | 0.001817 | 0.001658 |
| for_each.test | RUN | 0.247023 | 0.610334 | 0.792101 | 0.001586 | 0.001876 | 0.001744 |
| insert.test | RUN | 0.349882 | 1.087189 | 1.274659 | 0.001664 | 0.001776 | 0.001692 |
| insert_range.test | RUN | 0.349945 | 1.080872 | 1.297625 | 0.001584 | 0.001545 | 0.001640 |
| iter_fold.test | RUN | 0.426192 | 1.037696 | 1.551186 | 0.001776 | 0.001875 | 0.001581 |
| move.test | RUN | 0.209711 | 0.493556 | 0.662605 | 0.001730 | 0.001655 | 0.001754 |
| none.test | RUN | 0.335033 | 0.712087 | 1.009550 | 0.001299 | 0.001723 | 0.001513 |
| pop_back.test | RUN | 0.331139 | 0.959339 | 1.163637 | 0.001593 | 0.001932 | 0.001712 |
| pop_front.test | RUN | 0.279755 | 0.744390 | 0.920718 | 0.001795 | 0.001734 | 0.001377 |
| push_back.test | RUN | 0.347137 | 1.112454 | 1.243761 | 0.001608 | 0.001880 | 0.001533 |
| push_front.test | RUN | 0.304859 | 0.879858 | 1.061169 | 0.001723 | 0.001704 | 0.001779 |
| remove.test | RUN | 0.337914 | 1.032542 | 1.267514 | 0.001606 | 0.001623 | 0.001516 |
| remove_if.test | RUN | 0.310107 | 0.850751 | 1.083785 | 0.001552 | 0.001787 | 0.001820 |
| replace.test | RUN | 0.291232 | 0.817866 | 0.983249 | 0.001611 | 0.001849 | 0.001618 |
| replace_if.test | RUN | 0.289048 | 0.828069 | 0.971428 | 0.001798 | 0.001764 | 0.001747 |
| reverse_fold.test | RUN | 0.457172 | 1.150840 | 1.688890 | 0.001710 | 0.001574 | 0.001772 |
| reverse_iter_fold.test | RUN | 0.475457 | 1.192741 | 1.805476 | 0.001754 | 0.001654 | 0.001429 |
| reverse.test | RUN | 0.295539 | 0.836333 | 1.014852 | 0.001813 | 0.001798 | 0.001617 |
| segmented_for_each.test | RUN | 0.494192 | 1.614849 | 2.071244 | 0.001718 | 0.001682 | 0.001529 |
| segmented_find.test | RUN | 0.307811 | 0.844243 | 1.169332 | 0.001225 | 0.001618 | 0.001484 |
| segmented_find_if.test | RUN | 0.294432 | 0.852852 | 1.182600 | 0.001547 | 0.001627 | 0.001719 |
| segmented_fold.test | RUN | 0.342079 | 1.134799 | 1.455383 | 0.001674 | 0.001916 | 0.001641 |
| transform.test | RUN | 0.299981 | 0.865411 | 1.077221 | 0.001680 | 0.001734 | 0.001758 |
| join.test | RUN | 0.227747 | 0.549396 | 0.768010 | 0.001767 | 0.001820 | 0.001666 |
| zip.test | RUN | 0.396572 | 1.066593 | 1.437829 | 0.001599 | 0.001818 | 0.001604 |
| zip2.test | RUN | 0.398140 | 1.018937 | 1.342279 | 0.001863 | 0.001540 | 0.001694 |
| zip_ignore.test | RUN | 0.297757 | 0.687402 | 0.920935 | 0.001422 | 0.001761 | 0.001708 |
| flatten.test | RUN | 0.279388 | 0.763561 | 0.914586 | 0.001565 | 0.001620 | 0.001591 |
| ticket-5490.test | COMPILE | 0.154716 | 0.327009 | 0.408652 | — | — | — |
| as_deque.test | RUN | 0.280635 | 0.718560 | 1.003422 | 0.001788 | 0.001845 | 0.001680 |
| as_list.test | RUN | 0.312332 | 0.864391 | 1.057901 | 0.001576 | 0.001704 | 0.001475 |
| as_map.test | RUN | 0.316590 | 0.886042 | 1.046579 | 0.001621 | 0.001671 | 0.001758 |
| as_map_assoc.test | RUN | 0.307047 | 0.827370 | 1.002352 | 0.001558 | 0.001539 | 0.001700 |
| as_set.test | RUN | 0.352558 | 0.997773 | 1.241303 | 0.001731 | 0.001746 | 0.001558 |
| as_vector.test | RUN | 0.311004 | 0.874810 | 1.060713 | 0.001484 | 0.001758 | 0.001535 |
| boost_tuple.test | RUN | 0.324188 | 0.911165 | 1.078325 | 0.001336 | 0.001766 | 0.001714 |
| boost_tuple_iterator.test | RUN | 0.219338 | 0.525515 | 0.660894 | 0.001525 | 0.001680 | 0.001691 |
| cons.test | RUN | 0.392573 | 1.013768 | 1.272661 | 0.001528 | 0.001706 | 0.001406 |
| convert_boost_tuple.test | RUN | 0.248617 | 0.754311 | 0.830725 | 0.001690 | 0.001675 | 0.001770 |
| convert_deque.test | RUN | 0.252830 | 0.767974 | 0.848374 | 0.001562 | 0.001793 | 0.001440 |
| convert_list.test | RUN | 0.250984 | 0.783429 | 0.851645 | 0.001640 | 0.001729 | 0.001669 |
| convert_std_pair.test | RUN | 0.260995 | 0.779568 | 0.854048 | 0.001629 | 0.001642 | 0.001484 |
| convert_std_tuple.test | RUN | 0.245648 | 0.763040 | 0.840804 | 0.001488 | 0.001747 | 0.001415 |
| convert_vector.test | RUN | 0.245314 | 0.751098 | 0.838887 | 0.001512 | 0.001826 | 0.001596 |
| filter_view.test | RUN | 0.296900 | 0.804215 | 0.988149 | 0.001625 | 0.001750 | 0.001688 |
| hash.test | RUN | 0.300951 | 0.723687 | 0.943258 | 0.001610 | 0.001773 | 0.001769 |
| io.test | RUN | 0.309617 | 1.029732 | 1.137939 | 0.001526 | 0.001989 | 0.001596 |
| iterator_range.test | RUN | 0.282335 | 0.769391 | 0.965725 | 0.001518 | 0.001790 | 0.001710 |
| joint_view.test | RUN | 0.387716 | 1.290611 | 1.384318 | 0.001819 | 0.001720 | 0.001776 |
| list_comparison.test | RUN | 0.222195 | 0.540865 | 0.692916 | 0.001599 | 0.001633 | 0.001693 |
| list_construction.test | RUN | 0.216801 | 0.516780 | 0.696567 | 0.001549 | 0.001502 | 0.001718 |
| list_copy.test | RUN | 0.324793 | 0.956653 | 1.150820 | 0.001504 | 0.001451 | 0.001734 |
| list_iterator.test | RUN | 0.215581 | 0.535158 | 0.631923 | 0.001647 | 0.001697 | 0.001419 |
| list_hash.test | RUN | 0.291559 | 1.015250 | 0.970526 | 0.001524 | 0.001811 | 0.001574 |
| list_make.test | RUN | 0.225633 | 0.602774 | 0.722094 | 0.001770 | 0.001577 | 0.001802 |
| list_misc.test | RUN | 0.300740 | 0.681091 | 0.883006 | 0.001586 | 0.001738 | 0.001700 |
| list_mutate.test | RUN | 0.208946 | 0.463125 | 0.591396 | 0.001388 | 0.001858 | 0.001668 |
| list_nest.test | RUN | 0.405381 | 1.281080 | 1.620613 | 0.001459 | 0.001622 | 0.001601 |
| list_tie.test | RUN | 0.216200 | 0.547269 | 0.647953 | 0.001572 | 0.001911 | 0.001773 |
| list_value_at.test | RUN | 0.208824 | 0.473712 | 0.672013 | 0.001537 | 0.001730 | 0.001736 |
| deque_comparison.test | RUN | 0.224657 | 0.544373 | 0.677257 | 0.001228 | 0.001536 | 0.001750 |
| deque_construction.test | RUN | 0.220216 | 0.520205 | 0.688668 | 0.001656 | 0.001897 | 0.001633 |
| deque_copy.test | RUN | 0.314471 | 0.883080 | 1.106956 | 0.001630 | 0.001481 | 0.001646 |
| deque_iterator.test | RUN | 0.215144 | 0.583936 | 0.648703 | 0.001610 | 0.001531 | 0.001749 |
| deque_hash.test | RUN | 0.299538 | 0.972600 | 0.974796 | 0.001351 | 0.001861 | 0.001710 |
| deque_is_constructible.test | COMPILE | 0.118516 | 0.253619 | 0.321356 | — | — | — |
| deque_make.test | RUN | 0.219800 | 0.563479 | 0.698742 | 0.001715 | 0.001861 | 0.001647 |
| deque_misc.test | RUN | 0.285138 | 0.702796 | 0.889774 | 0.001498 | 0.001712 | 0.001620 |
| deque_move.test | RUN | 0.219852 | 0.561081 | 0.657390 | 0.001521 | 0.001818 | 0.001531 |
| deque_mutate.test | RUN | 0.200332 | 0.469732 | 0.585661 | 0.001625 | 0.001762 | 0.001726 |
| deque_nest.test | RUN | 0.609036 | 2.050418 | 2.608525 | 0.001630 | 0.001856 | 0.001610 |
| deque_tie.test | RUN | 0.217860 | 0.484477 | 0.665502 | 0.001526 | 0.001732 | 0.001540 |
| deque_value_at.test | RUN | 0.204056 | 0.494803 | 0.616966 | 0.001614 | 0.001852 | 0.001420 |
| front_extended_deque.test | RUN | 0.296145 | 0.713306 | 0.967194 | 0.001625 | 0.001891 | 0.001577 |
| back_extended_deque.test | RUN | 0.298372 | 0.725803 | 0.925411 | 0.001634 | 0.001698 | 0.001703 |
| make_list.test | RUN | 0.226481 | 0.566903 | 0.736530 | 0.001744 | 0.001912 | 0.001554 |
| make_vector.test | RUN | 0.231848 | 0.562645 | 0.754271 | 0.001360 | 0.001874 | 0.001587 |
| map.test | RUN | 0.305867 | 0.838710 | 1.010014 | 0.001834 | 0.001764 | 0.001759 |
| map_comparison.test | RUN | 0.223577 | 0.545374 | 0.722457 | 0.001575 | 0.001849 | 0.001648 |
| map_construction.test | RUN | 0.234076 | 0.530703 | 0.697489 | 0.001591 | 0.001711 | 0.001760 |
| map_copy.test | RUN | 0.272040 | 0.671953 | 0.850471 | 0.001602 | 0.001814 | 0.001647 |
| map_misc.test | RUN | 0.294676 | 0.666573 | 0.874678 | 0.001638 | 0.001680 | 0.001428 |
| map_move.test | RUN | 0.224850 | 0.562853 | 0.709717 | 0.001723 | 0.001655 | 0.001308 |
| map_mutate.test | RUN | 0.205566 | 0.474051 | 0.592177 | 0.001364 | 0.001566 | 0.001700 |
| map_tie.test | RUN | 0.210998 | 0.463475 | 0.625873 | 0.001695 | 0.001562 | 0.001559 |
| nil.test | RUN | 0.144484 | 0.321333 | 0.432743 | 0.001862 | 0.001865 | 0.001706 |
| nview.test | RUN | 0.281217 | 0.664466 | 0.876707 | 0.001806 | 0.001776 | 0.001716 |
| reverse_view.test | RUN | 0.365843 | 1.102934 | 1.300771 | 0.001686 | 0.001979 | 0.001545 |
| segmented_iterator_range.test | RUN | 0.431294 | 1.275263 | 1.619458 | 0.001790 | 0.001682 | 0.001466 |
| set.test | RUN | 0.277095 | 0.755704 | 0.924177 | 0.001546 | 0.001731 | 0.001767 |
| single_view.test | RUN | 0.252088 | 0.680437 | 0.849344 | 0.001748 | 0.001624 | 0.001576 |
| std_pair.test | RUN | 0.322861 | 0.862825 | 1.047526 | 0.001660 | 0.001866 | 0.001661 |
| boost_array.test | RUN | 0.262447 | 0.607209 | 0.824500 | 0.001751 | 0.001804 | 0.001559 |
| array.test | RUN | 0.273224 | 0.618075 | 0.806815 | 0.001526 | 0.001625 | 0.001609 |
| std_array.test | RUN | 0.269283 | 0.604608 | 0.801789 | 0.001735 | 0.001811 | 0.001442 |
| tuple_comparison.test | RUN | 0.238021 | 0.573533 | 0.747690 | 0.001636 | 0.001828 | 0.001514 |
| tuple_construction.test | RUN | 0.245796 | 0.559925 | 0.761014 | 0.001830 | 0.001797 | 0.001527 |
| tuple_conversion.test | RUN | 0.523988 | 1.739528 | 2.399026 | 0.001352 | 0.001810 | 0.001718 |
| tuple_copy.test | RUN | 0.349132 | 0.997738 | 1.305050 | 0.001615 | 0.001449 | 0.001332 |
| tuple_element.test | RUN | 0.227780 | 0.532893 | 0.678600 | 0.001492 | 0.001598 | 0.001603 |
| tuple_make.test | RUN | 0.245168 | 0.600472 | 0.742101 | 0.001668 | 0.001890 | 0.001485 |
| tuple_misc.test | RUN | 0.306045 | 0.718362 | 0.971389 | 0.001657 | 0.001736 | 0.001691 |
| tuple_mutate.test | RUN | 0.217235 | 0.474318 | 0.658306 | 0.001761 | 0.001837 | 0.001782 |
| tuple_nest.test | RUN | 0.867981 | 3.520365 | 4.453038 | 0.001566 | 0.001785 | 0.001730 |
| tuple_hash.test | RUN | 0.310626 | 1.016527 | 0.983438 | 0.001799 | 0.001622 | 0.001790 |
| tuple_tie.test | RUN | 0.223885 | 0.528171 | 0.735180 | 0.001612 | 0.001593 | 0.001241 |
| tuple_traits__maybe_variadic.test | RUN | 0.257164 | 0.644258 | 0.791951 | 0.001661 | 0.001718 | 0.001621 |
| tuple_traits__no_variadic.test | RUN | 0.279669 | 0.681950 | 0.816915 | 0.001437 | 0.001761 | 0.001738 |
| transform_view.test | RUN | 0.357704 | 1.129206 | 1.289314 | 0.001842 | 0.001507 | 0.001760 |
| identity_view.test | RUN | 0.341316 | 0.974777 | 1.232517 | 0.001609 | 0.001646 | 0.001743 |
| vector_comparison.test | RUN | 0.220754 | 0.548221 | 0.694238 | 0.001546 | 0.001850 | 0.001699 |
| vector_construction.test | RUN | 0.224171 | 0.517351 | 0.658858 | 0.001278 | 0.001740 | 0.001681 |
| vector_conversion.test | RUN | 0.624739 | 2.276480 | 3.073266 | 0.001800 | 0.001695 | 0.001637 |
| vector_copy.test | RUN | 0.337937 | 0.983965 | 1.210799 | 0.001105 | 0.001749 | 0.001444 |
| vector_iterator.test | RUN | 0.218369 | 0.546573 | 0.699800 | 0.001685 | 0.001618 | 0.001464 |
| vector_make.test | RUN | 0.234664 | 0.567112 | 0.712701 | 0.001599 | 0.001846 | 0.001727 |
| vector_misc.test | RUN | 0.298823 | 0.684956 | 0.882540 | 0.001407 | 0.001688 | 0.001401 |
| vector_move.test | RUN | 0.221573 | 0.571922 | 0.696287 | 0.001608 | 0.001704 | 0.001448 |
| vector_mutate.test | RUN | 0.202010 | 0.482628 | 0.631704 | 0.001327 | 0.001472 | 0.001590 |
| vector_n.test | RUN | 0.248601 | 0.592822 | 0.787383 | 0.001900 | 0.001853 | 0.001761 |
| vector_nest.test | RUN | 0.879971 | 3.725062 | 4.536575 | 0.001673 | 0.001676 | 0.001427 |
| vector_hash.test | RUN | 0.293028 | 0.950085 | 0.977247 | 0.001591 | 0.001824 | 0.001623 |
| vector_tie.test | RUN | 0.213343 | 0.521811 | 0.661322 | 0.001714 | 0.001570 | 0.001574 |
| vector_traits__maybe_variadic.test | RUN | 0.239657 | 0.616707 | 0.681296 | 0.001799 | 0.001798 | 0.001694 |
| vector_traits__no_variadic.test | RUN | 0.249451 | 0.621151 | 0.767000 | 0.001567 | 0.001598 | 0.001429 |
| vector_value_at.test | RUN | 0.207541 | 0.480654 | 0.613797 | 0.001567 | 0.001710 | 0.001772 |
| zip_view.test | RUN | 0.422582 | 1.147905 | 1.578542 | 0.002026 | 0.001638 | 0.001416 |
| zip_view2.test | RUN | 0.346827 | 0.881400 | 1.229366 | 0.001338 | 0.001583 | 0.001388 |
| zip_view_ignore.test | RUN | 0.323274 | 0.822316 | 1.104743 | 0.001601 | 0.001586 | 0.001649 |
| repetitive_view.test | RUN | 0.562472 | 1.471365 | 2.071528 | 0.001630 | 0.001887 | 0.001493 |
| deduce_sequence.test | RUN | 0.259962 | 0.652085 | 0.883092 | 0.001496 | 0.001661 | 0.001557 |
| adapt_adt_named.test | RUN | 0.313452 | 0.878778 | 1.046767 | 0.001509 | 0.001754 | 0.001732 |
| adapt_adt_named_empty.test | RUN | 0.275129 | 0.702151 | 0.871252 | 0.001736 | 0.001780 | 0.001827 |
| adapt_adt.test | RUN | 0.346224 | 1.178257 | 1.237759 | 0.001778 | 0.001803 | 0.001716 |
| adapt_adt_empty.test | RUN | 0.267261 | 0.737270 | 0.875811 | 0.001739 | 0.001882 | 0.001747 |
| adapt_assoc_adt_named.test | RUN | 0.347290 | 0.927040 | 1.135200 | 0.001629 | 0.001508 | 0.001613 |
| adapt_assoc_adt_named_empty.test | RUN | 0.268929 | 0.727855 | 0.851634 | 0.001560 | 0.001556 | 0.001794 |
| adapt_assoc_adt.test | RUN | 0.351239 | 0.949533 | 1.185675 | 0.001446 | 0.001680 | 0.001710 |
| adapt_assoc_adt_empty.test | RUN | 0.266776 | 0.742132 | 0.859776 | 0.001701 | 0.001635 | 0.001485 |
| adapt_assoc_struct_named.test | RUN | 0.338206 | 0.939044 | 1.097569 | 0.001452 | 0.001767 | 0.001429 |
| adapt_assoc_struct_named_empty.test | RUN | 0.269543 | 0.715717 | 0.875008 | 0.001647 | 0.002014 | 0.001397 |
| adapt_assoc_struct.test | RUN | 0.308416 | 0.871642 | 1.025518 | 0.001567 | 0.001789 | 0.001318 |
| adapt_assoc_struct_empty.test | RUN | 0.264899 | 0.715513 | 0.864617 | 0.001538 | 0.001829 | 0.001316 |
| adapt_assoc_tpl_adt.test | RUN | 0.364486 | 0.960224 | 1.222815 | 0.001571 | 0.001636 | 0.001438 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.274753 | 0.698314 | 0.872075 | 0.001455 | 0.001865 | 0.001751 |
| adapt_assoc_tpl_struct.test | RUN | 0.297202 | 0.819461 | 0.992774 | 0.001659 | 0.001708 | 0.001501 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.265630 | 0.705930 | 0.863022 | 0.001378 | 0.001793 | 0.001369 |
| adapt_struct_named.test | RUN | 0.307313 | 0.849029 | 1.015295 | 0.001519 | 0.001863 | 0.001665 |
| adapt_struct_named_empty.test | RUN | 0.274821 | 0.695242 | 0.865792 | 0.001545 | 0.001745 | 0.001654 |
| adapt_struct.test | RUN | 0.334470 | 0.975876 | 1.140672 | 0.001598 | 0.001914 | 0.001772 |
| adapt_struct_empty.test | RUN | 0.269444 | 0.697490 | 0.875571 | 0.001640 | 0.001774 | 0.001643 |
| adapt_tpl_adt.test | RUN | 0.341047 | 1.101775 | 1.201610 | 0.001415 | 0.001497 | 0.001562 |
| adapt_tpl_adt_empty.test | RUN | 0.274355 | 0.720131 | 0.877479 | 0.001658 | 0.001790 | 0.001723 |
| adapt_tpl_struct.test | RUN | 0.284026 | 0.784132 | 0.933339 | 0.001580 | 0.001715 | 0.001842 |
| adapt_tpl_struct_empty.test | RUN | 0.268567 | 0.720638 | 0.870605 | 0.001568 | 0.001736 | 0.001691 |
| adt_attribute_proxy.test | RUN | 0.310673 | 0.705666 | 0.908953 | 0.001554 | 0.001849 | 0.001684 |
| define_struct.test | RUN | 0.371730 | 0.970216 | 1.195947 | 0.001665 | 0.001608 | 0.001463 |
| define_struct_empty.test | RUN | 0.319431 | 0.792315 | 1.015886 | 0.001602 | 0.001802 | 0.001470 |
| define_struct_move.test | RUN | 0.209157 | 0.462098 | 0.597864 | 0.001721 | 0.001525 | 0.001517 |
| define_struct_inline.test | RUN | 0.390031 | 1.158576 | 1.349335 | 0.001756 | 0.001553 | 0.001761 |
| define_struct_inline_empty.test | RUN | 0.329456 | 0.826373 | 1.021616 | 0.001502 | 0.001712 | 0.001659 |
| define_struct_inline_move.test | RUN | 0.218322 | 0.444036 | 0.612012 | 0.001759 | 0.001804 | 0.001648 |
| define_assoc_struct.test | RUN | 0.353992 | 0.917002 | 1.149366 | 0.001696 | 0.002304 | 0.001692 |
| define_assoc_struct_empty.test | RUN | 0.322039 | 0.801137 | 0.998638 | 0.001774 | 0.001744 | 0.001674 |
| define_assoc_struct_move.test | RUN | 0.207460 | 0.446511 | 0.588424 | 0.001605 | 0.001667 | 0.001707 |
| define_tpl_struct.test | RUN | 0.353800 | 0.931952 | 1.138126 | 0.001796 | 0.001538 | 0.001492 |
| define_tpl_struct_empty.test | RUN | 0.325021 | 0.795781 | 1.004136 | 0.001428 | 0.001721 | 0.001637 |
| define_tpl_struct_move.test | RUN | 0.212475 | 0.457180 | 0.591403 | 0.001724 | 0.001487 | 0.001536 |
| define_tpl_struct_inline.test | RUN | 0.375800 | 1.083212 | 1.251773 | 0.001773 | 0.001606 | 0.001760 |
| define_tpl_struct_inline_empty.test | RUN | 0.332600 | 0.785885 | 1.017736 | 0.001730 | 0.001698 | 0.001764 |
| define_tpl_struct_inline_move.test | RUN | 0.209396 | 0.459960 | 0.611614 | 0.001541 | 0.001846 | 0.001698 |
| define_assoc_tpl_struct.test | RUN | 0.362063 | 0.951735 | 1.144018 | 0.001808 | 0.001934 | 0.001797 |
| define_assoc_tpl_struct_empty.test | RUN | 0.329161 | 0.805920 | 0.988108 | 0.001620 | 0.001779 | 0.001720 |
| define_assoc_tpl_struct_move.test | RUN | 0.210807 | 0.457469 | 0.613373 | 0.001574 | 0.001626 | 0.001756 |
| std_tuple.test | RUN | 0.217291 | 0.518003 | 0.654964 | 0.001359 | 0.001752 | 0.001536 |
| std_tuple_iterator.test | RUN | 0.222384 | 0.556112 | 0.686652 | 0.001638 | 0.001926 | 0.001661 |
| ref_vector.test | RUN | 0.245311 | 0.565605 | 0.726439 | 0.001744 | 0.001791 | 0.001714 |
| flatten_view.test | RUN | 0.261520 | 0.706852 | 0.838895 | 0.001530 | 0.001844 | 0.001717 |
| github-159.test | COMPILE | 0.119489 | 0.261401 | 0.304818 | — | — | — |
| github-176.test | RUN | 0.241152 | 0.621301 | 0.707839 | 0.001589 | 0.001840 | 0.001646 |
| size.test | COMPILE | 0.206130 | 0.453583 | 0.583138 | — | — | — |
| fused.test | RUN | 0.284855 | 0.641583 | 0.869521 | 0.001472 | 0.001718 | 0.001627 |
| fused_function_object.test | RUN | 0.214049 | 0.485768 | 0.646468 | 0.001610 | 0.001812 | 0.001613 |
| fused_procedure.test | RUN | 0.281841 | 0.621623 | 0.808747 | 0.001380 | 0.001741 | 0.001816 |
| unfused.test | RUN | 0.220810 | 0.500857 | 0.684998 | 0.001322 | 0.001746 | 0.001521 |
| unfused_typed.test | RUN | 0.224498 | 0.552275 | 0.667202 | 0.001722 | 0.001880 | 0.001668 |
| make_fused.test | RUN | 0.286720 | 0.660259 | 0.839941 | 0.001723 | 0.001422 | 0.001654 |
| make_fused_function_object.test | RUN | 0.215319 | 0.482050 | 0.641307 | 0.001501 | 0.001379 | 0.001532 |
| make_fused_procedure.test | RUN | 0.278602 | 0.624590 | 0.819284 | 0.001618 | 0.001872 | 0.001660 |
| make_unfused.test | RUN | 0.217200 | 0.501994 | 0.653739 | 0.001708 | 0.001840 | 0.001615 |
| invoke.test | RUN | 0.554731 | 1.789467 | 2.256952 | 0.001454 | 0.001656 | 0.001780 |
| invoke_function_object.test | RUN | 0.266853 | 0.622467 | 0.829851 | 0.001824 | 0.001678 | 0.001724 |
| invoke_procedure.test | RUN | 0.457840 | 1.361578 | 1.629363 | 0.001550 | 0.001643 | 0.001756 |
| swap.test | RUN | 0.339766 | 0.797212 | 1.099646 | 0.001441 | 0.001581 | 0.001661 |
| is_sequence.test | COMPILE | 0.058388 | 0.117952 | 0.138082 | — | — | — |
| is_view.test | COMPILE | 0.057270 | 0.123131 | 0.137048 | — | — | — |
| pair_deque.test | COMPILE | 0.121796 | 0.260169 | 0.344515 | — | — | — |
| pair_list.test | COMPILE | 0.119670 | 0.259688 | 0.334949 | — | — | — |
| pair_map.test | COMPILE | 0.124378 | 0.267843 | 0.317233 | — | — | — |
| pair_set.test | COMPILE | 0.128919 | 0.271092 | 0.328830 | — | — | — |
| pair_vector.test | COMPILE | 0.123277 | 0.265586 | 0.312239 | — | — | — |
| pair_nest.test | COMPILE | 0.050473 | 0.107729 | 0.127680 | — | — | — |
| index_sequence.test | COMPILE | 0.043854 | 0.078050 | 0.095980 | — | — | — |
| and.test | COMPILE | 0.034397 | 0.062998 | 0.066477 | — | — | — |
| tag_of.test | COMPILE | 0.057660 | 0.113226 | 0.123757 | — | — | — |
| unused.test | COMPILE | 0.031079 | 0.074541 | 0.076235 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.054368 | 0.106419 | 0.113804 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.040061 | 0.105589 | 0.089609 | — | — | — |
| quick.test | RUN | 0.163466 | 0.354215 | 0.410937 | 0.000471 | 0.001235 | 0.001178 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.002× | 1.007×, 0.997× | 1.004× |
| clang | 1.000× | 0.995×, 1.004× | 1.009× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44813597235).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.001039s | 0.001054s | 0.001027s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.001017s | 0.001056s | 0.001013s | byte equality observed |
| adapt_adt_named.test | 10 | 0.001040s | 0.001034s | 0.001020s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.001033s | 0.001006s | 0.001024s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.001009s | 0.001001s | 0.001040s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.001005s | 0.001016s | 0.001019s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.001027s | 0.001046s | 0.001018s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.001013s | 0.001022s | 0.000991s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.001028s | 0.001017s | 0.001001s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.001010s | 0.001059s | 0.000999s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.001014s | 0.001023s | 0.001010s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.001026s | 0.001012s | 0.001014s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.001012s | 0.001015s | 0.001025s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.001019s | 0.000997s | 0.001001s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.001040s | 0.001030s | 0.001025s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.001002s | 0.001021s | 0.001016s | byte equality observed |
| adapt_struct.test | 10 | 0.001056s | 0.001028s | 0.001023s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.001018s | 0.001010s | 0.001012s | byte equality observed |
| adapt_struct_named.test | 10 | 0.001032s | 0.001030s | 0.001024s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.001018s | 0.001018s | 0.000999s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.001040s | 0.001014s | 0.001022s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.001026s | 0.001000s | 0.001008s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.001027s | 0.001020s | 0.000999s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.001021s | 0.001000s | 0.001024s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.000993s | 0.000981s | 0.001008s | byte equality observed |
| all.test | 10 | 0.000999s | 0.000973s | 0.000998s | byte equality observed |
| any.test | 10 | 0.000985s | 0.000991s | 0.000981s | byte equality observed |
| array.test | 10 | 0.000998s | 0.001017s | 0.001008s | byte equality observed |
| as_deque.test | 10 | 0.001015s | 0.001009s | 0.000979s | byte equality observed |
| as_list.test | 10 | 0.001020s | 0.001048s | 0.001042s | byte equality observed |
| as_map.test | 10 | 0.001009s | 0.001037s | 0.001013s | byte equality observed |
| as_map_assoc.test | 10 | 0.001006s | 0.001031s | 0.001046s | byte equality observed |
| as_set.test | 10 | 0.001023s | 0.001052s | 0.001025s | byte equality observed |
| as_vector.test | 10 | 0.001026s | 0.001037s | 0.001034s | byte equality observed |
| back_extended_deque.test | 10 | 0.000980s | 0.000999s | 0.000991s | byte equality observed |
| boost_array.test | 10 | 0.001010s | 0.001023s | 0.000961s | byte equality observed |
| boost_tuple.test | 10 | 0.001044s | 0.001006s | 0.001015s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.001009s | 0.000979s | 0.001013s | byte equality observed |
| clear.test | 10 | 0.001012s | 0.001038s | 0.001008s | byte equality observed |
| cons.test | 10 | 0.001025s | 0.001039s | 0.001009s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.001003s | 0.001006s | 0.000983s | byte equality observed |
| convert_deque.test | 10 | 0.001025s | 0.000979s | 0.001012s | byte equality observed |
| convert_list.test | 10 | 0.000993s | 0.000986s | 0.001029s | byte equality observed |
| convert_std_pair.test | 10 | 0.001005s | 0.000969s | 0.001011s | byte equality observed |
| convert_std_tuple.test | 10 | 0.001007s | 0.000988s | 0.000978s | byte equality observed |
| convert_vector.test | 10 | 0.001008s | 0.000998s | 0.000972s | byte equality observed |
| copy.test | 10 | 0.000993s | 0.000981s | 0.001008s | byte equality observed |
| count.test | 10 | 0.000980s | 0.000975s | 0.000996s | byte equality observed |
| count_if.test | 10 | 0.001018s | 0.000997s | 0.001006s | byte equality observed |
| deduce_sequence.test | 10 | 0.000993s | 0.001022s | 0.000988s | byte equality observed |
| define_assoc_struct.test | 10 | 0.001033s | 0.001030s | 0.001023s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.001030s | 0.001023s | 0.001018s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.001010s | 0.001000s | 0.001014s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.001033s | 0.001047s | 0.001018s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.001018s | 0.001028s | 0.001004s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000991s | 0.000993s | 0.000999s | byte equality observed |
| define_struct.test | 10 | 0.001026s | 0.001015s | 0.001032s | byte equality observed |
| define_struct_empty.test | 10 | 0.001003s | 0.001019s | 0.001035s | byte equality observed |
| define_struct_inline.test | 10 | 0.001023s | 0.001008s | 0.001044s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.001021s | 0.001005s | 0.001039s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000989s | 0.000975s | 0.001001s | byte equality observed |
| define_struct_move.test | 10 | 0.001004s | 0.001019s | 0.000994s | byte equality observed |
| define_tpl_struct.test | 10 | 0.001025s | 0.001016s | 0.001034s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.001005s | 0.000987s | 0.001010s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.001027s | 0.001004s | 0.001038s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.001018s | 0.000998s | 0.001026s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.001003s | 0.000984s | 0.001010s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000996s | 0.000979s | 0.001006s | byte equality observed |
| deque_comparison.test | 10 | 0.000997s | 0.000993s | 0.000997s | byte equality observed |
| deque_construction.test | 10 | 0.001007s | 0.000972s | 0.001014s | byte equality observed |
| deque_copy.test | 10 | 0.001004s | 0.000996s | 0.001003s | byte equality observed |
| deque_hash.test | 10 | 0.001005s | 0.001011s | 0.001006s | byte equality observed |
| deque_iterator.test | 10 | 0.001012s | 0.000988s | 0.001007s | byte equality observed |
| deque_make.test | 10 | 0.001007s | 0.001000s | 0.001009s | byte equality observed |
| deque_misc.test | 10 | 0.000979s | 0.001009s | 0.000992s | byte equality observed |
| deque_move.test | 10 | 0.001031s | 0.001002s | 0.001019s | byte equality observed |
| deque_mutate.test | 10 | 0.000994s | 0.001031s | 0.000983s | byte equality observed |
| deque_nest.test | 10 | 0.001008s | 0.000987s | 0.000997s | byte equality observed |
| deque_tie.test | 10 | 0.000995s | 0.000980s | 0.001009s | byte equality observed |
| deque_value_at.test | 10 | 0.001007s | 0.000990s | 0.001034s | byte equality observed |
| erase.test | 10 | 0.001010s | 0.001023s | 0.001011s | byte equality observed |
| erase_key.test | 10 | 0.001046s | 0.001007s | 0.001057s | byte equality observed |
| filter.test | 10 | 0.001007s | 0.001004s | 0.001033s | byte equality observed |
| filter_if.test | 10 | 0.001010s | 0.001037s | 0.001060s | byte equality observed |
| filter_view.test | 10 | 0.001034s | 0.001029s | 0.001026s | byte equality observed |
| find.test | 10 | 0.001029s | 0.001029s | 0.001040s | byte equality observed |
| find_if.test | 10 | 0.001027s | 0.001042s | 0.001041s | byte equality observed |
| flatten.test | 10 | 0.001008s | 0.001017s | 0.001003s | byte equality observed |
| flatten_view.test | 10 | 0.001012s | 0.001003s | 0.001005s | byte equality observed |
| fold.test | 10 | 0.001034s | 0.001026s | 0.001011s | byte equality observed |
| for_each.test | 10 | 0.001033s | 0.001053s | 0.001036s | byte equality observed |
| front_extended_deque.test | 10 | 0.000984s | 0.001026s | 0.000982s | byte equality observed |
| fused.test | 10 | 0.000992s | 0.001001s | 0.000982s | byte equality observed |
| fused_function_object.test | 10 | 0.001012s | 0.001032s | 0.000975s | byte equality observed |
| fused_procedure.test | 10 | 0.001021s | 0.000992s | 0.000987s | byte equality observed |
| github-176.test | 10 | 0.000992s | 0.001026s | 0.000996s | byte equality observed |
| hash.test | 10 | 0.000989s | 0.000990s | 0.000978s | byte equality observed |
| identity_view.test | 10 | 0.001030s | 0.001030s | 0.001038s | byte equality observed |
| insert.test | 10 | 0.001016s | 0.001030s | 0.001051s | byte equality observed |
| insert_range.test | 10 | 0.001033s | 0.001029s | 0.001029s | byte equality observed |
| invoke.test | 10 | 0.000986s | 0.000995s | 0.000978s | byte equality observed |
| invoke_function_object.test | 10 | 0.000994s | 0.001006s | 0.000991s | byte equality observed |
| invoke_procedure.test | 10 | 0.000990s | 0.001017s | 0.001001s | byte equality observed |
| io.test | 10 | 0.001137s | 0.001152s | 0.001118s | byte equality observed |
| iter_fold.test | 10 | 0.001035s | 0.001020s | 0.000992s | byte equality observed |
| iterator_range.test | 10 | 0.001054s | 0.001042s | 0.001027s | byte equality observed |
| join.test | 10 | 0.000990s | 0.000979s | 0.000996s | byte equality observed |
| joint_view.test | 10 | 0.001056s | 0.001054s | 0.001081s | byte equality observed |
| list_comparison.test | 10 | 0.000979s | 0.000990s | 0.000984s | byte equality observed |
| list_construction.test | 10 | 0.001009s | 0.001004s | 0.001011s | byte equality observed |
| list_copy.test | 10 | 0.001031s | 0.000972s | 0.000986s | byte equality observed |
| list_hash.test | 10 | 0.001008s | 0.000987s | 0.000994s | byte equality observed |
| list_iterator.test | 10 | 0.000999s | 0.000987s | 0.001031s | byte equality observed |
| list_make.test | 10 | 0.001007s | 0.000993s | 0.000991s | byte equality observed |
| list_misc.test | 10 | 0.001006s | 0.001020s | 0.001008s | byte equality observed |
| list_mutate.test | 10 | 0.000996s | 0.001023s | 0.001018s | byte equality observed |
| list_nest.test | 10 | 0.000991s | 0.001015s | 0.000989s | byte equality observed |
| list_tie.test | 10 | 0.001004s | 0.001006s | 0.000963s | byte equality observed |
| list_value_at.test | 10 | 0.000998s | 0.000997s | 0.001003s | byte equality observed |
| make_fused.test | 10 | 0.001028s | 0.001017s | 0.000959s | byte equality observed |
| make_fused_function_object.test | 10 | 0.001010s | 0.001016s | 0.000985s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000992s | 0.000977s | 0.000972s | byte equality observed |
| make_list.test | 10 | 0.001020s | 0.000995s | 0.000972s | byte equality observed |
| make_unfused.test | 10 | 0.000972s | 0.000992s | 0.000974s | byte equality observed |
| make_vector.test | 10 | 0.000994s | 0.000986s | 0.000989s | byte equality observed |
| map.test | 10 | 0.001038s | 0.001022s | 0.001020s | byte equality observed |
| map_comparison.test | 10 | 0.000994s | 0.000972s | 0.000979s | byte equality observed |
| map_construction.test | 10 | 0.000992s | 0.001004s | 0.000982s | byte equality observed |
| map_copy.test | 10 | 0.001006s | 0.001011s | 0.001012s | byte equality observed |
| map_misc.test | 10 | 0.001001s | 0.001009s | 0.000970s | byte equality observed |
| map_move.test | 10 | 0.001006s | 0.001005s | 0.001009s | byte equality observed |
| map_mutate.test | 10 | 0.000991s | 0.000998s | 0.000968s | byte equality observed |
| map_tie.test | 10 | 0.000979s | 0.000981s | 0.000984s | byte equality observed |
| move.test | 10 | 0.000995s | 0.000979s | 0.001021s | byte equality observed |
| nil.test | 10 | 0.001016s | 0.000968s | 0.000970s | byte equality observed |
| none.test | 10 | 0.001019s | 0.000982s | 0.001028s | byte equality observed |
| nview.test | 10 | 0.001018s | 0.000981s | 0.000999s | byte equality observed |
| pop_back.test | 10 | 0.001053s | 0.001019s | 0.001051s | byte equality observed |
| pop_front.test | 10 | 0.001020s | 0.001033s | 0.001048s | byte equality observed |
| push_back.test | 10 | 0.001056s | 0.001066s | 0.001033s | byte equality observed |
| push_front.test | 10 | 0.001043s | 0.001026s | 0.001033s | byte equality observed |
| quick.test | 10 | 0.000461s | 0.000973s | 0.000975s | byte equality observed |
| ref_vector.test | 10 | 0.001010s | 0.001017s | 0.001030s | byte equality observed |
| remove.test | 10 | 0.001025s | 0.001045s | 0.001044s | byte equality observed |
| remove_if.test | 10 | 0.001038s | 0.001040s | 0.001009s | byte equality observed |
| repetitive_view.test | 10 | 0.000987s | 0.001007s | 0.000987s | byte equality observed |
| replace.test | 10 | 0.001025s | 0.001021s | 0.001018s | byte equality observed |
| replace_if.test | 10 | 0.001034s | 0.001019s | 0.001010s | byte equality observed |
| reverse.test | 10 | 0.001026s | 0.001010s | 0.001026s | byte equality observed |
| reverse_fold.test | 10 | 0.001016s | 0.001016s | 0.001024s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.001018s | 0.001008s | 0.001014s | byte equality observed |
| reverse_view.test | 10 | 0.001025s | 0.001034s | 0.001026s | byte equality observed |
| segmented_find.test | 10 | 0.000981s | 0.000992s | 0.001009s | byte equality observed |
| segmented_find_if.test | 10 | 0.001008s | 0.000981s | 0.001015s | byte equality observed |
| segmented_fold.test | 10 | 0.001004s | 0.001012s | 0.001039s | byte equality observed |
| segmented_for_each.test | 10 | 0.001021s | 0.001028s | 0.001025s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.001018s | 0.001046s | 0.001050s | byte equality observed |
| set.test | 10 | 0.001007s | 0.001006s | 0.001028s | byte equality observed |
| single_view.test | 10 | 0.001027s | 0.001033s | 0.001045s | byte equality observed |
| std_array.test | 10 | 0.001000s | 0.000984s | 0.001021s | byte equality observed |
| std_pair.test | 10 | 0.001026s | 0.001022s | 0.001006s | byte equality observed |
| std_tuple.test | 10 | 0.001001s | 0.000985s | 0.001009s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.000997s | 0.000965s | 0.001010s | byte equality observed |
| swap.test | 10 | 0.001043s | 0.000966s | 0.000992s | byte equality observed |
| transform.test | 10 | 0.001009s | 0.001023s | 0.001025s | byte equality observed |
| transform_view.test | 10 | 0.001012s | 0.001021s | 0.001038s | byte equality observed |
| tuple_comparison.test | 10 | 0.000991s | 0.000975s | 0.001018s | byte equality observed |
| tuple_construction.test | 10 | 0.001013s | 0.000964s | 0.001023s | byte equality observed |
| tuple_conversion.test | 10 | 0.000990s | 0.000965s | 0.001004s | byte equality observed |
| tuple_copy.test | 10 | 0.001001s | 0.001007s | 0.001005s | byte equality observed |
| tuple_element.test | 10 | 0.001002s | 0.001017s | 0.000989s | byte equality observed |
| tuple_hash.test | 10 | 0.000998s | 0.000983s | 0.001014s | byte equality observed |
| tuple_make.test | 10 | 0.001012s | 0.000989s | 0.001013s | byte equality observed |
| tuple_misc.test | 10 | 0.001001s | 0.001011s | 0.000979s | byte equality observed |
| tuple_mutate.test | 10 | 0.000994s | 0.001012s | 0.000976s | byte equality observed |
| tuple_nest.test | 10 | 0.000998s | 0.000980s | 0.000981s | byte equality observed |
| tuple_tie.test | 10 | 0.001003s | 0.000987s | 0.000989s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.001007s | 0.000997s | 0.000990s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.000997s | 0.000972s | 0.001011s | byte equality observed |
| unfused.test | 10 | 0.000992s | 0.000995s | 0.001016s | byte equality observed |
| unfused_typed.test | 10 | 0.000990s | 0.000970s | 0.001002s | byte equality observed |
| vector_comparison.test | 10 | 0.000980s | 0.001004s | 0.001017s | byte equality observed |
| vector_construction.test | 10 | 0.000984s | 0.001017s | 0.001020s | byte equality observed |
| vector_conversion.test | 10 | 0.000988s | 0.000997s | 0.000968s | byte equality observed |
| vector_copy.test | 10 | 0.000995s | 0.001030s | 0.000971s | byte equality observed |
| vector_hash.test | 10 | 0.000994s | 0.001048s | 0.000997s | byte equality observed |
| vector_iterator.test | 10 | 0.000995s | 0.001017s | 0.001027s | byte equality observed |
| vector_make.test | 10 | 0.001005s | 0.001021s | 0.000982s | byte equality observed |
| vector_misc.test | 10 | 0.000968s | 0.001017s | 0.000994s | byte equality observed |
| vector_move.test | 10 | 0.001007s | 0.001021s | 0.001021s | byte equality observed |
| vector_mutate.test | 10 | 0.000987s | 0.000984s | 0.000981s | byte equality observed |
| vector_n.test | 10 | 0.001012s | 0.001033s | 0.001031s | byte equality observed |
| vector_nest.test | 10 | 0.000990s | 0.001002s | 0.000984s | byte equality observed |
| vector_tie.test | 10 | 0.000991s | 0.000984s | 0.000978s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000982s | 0.000988s | 0.000981s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000982s | 0.000989s | 0.000983s | byte equality observed |
| vector_value_at.test | 10 | 0.001000s | 0.000997s | 0.000987s | byte equality observed |
| zip.test | 10 | 0.000988s | 0.001008s | 0.000986s | byte equality observed |
| zip2.test | 10 | 0.000979s | 0.000976s | 0.001012s | byte equality observed |
| zip_ignore.test | 10 | 0.000992s | 0.000985s | 0.000979s | byte equality observed |
| zip_view.test | 10 | 0.000980s | 0.000980s | 0.001014s | byte equality observed |
| zip_view2.test | 10 | 0.000981s | 0.001009s | 0.001051s | byte equality observed |
| zip_view_ignore.test | 10 | 0.000981s | 0.000988s | 0.000986s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44813597235).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
