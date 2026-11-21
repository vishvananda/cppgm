# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.346688 | 0.738093 | 1.031494 | 0.001579 | 0.001592 | 0.001423 |
| any.test | RUN | 0.339119 | 0.712933 | 0.962723 | 0.001374 | 0.001802 | 0.001724 |
| clear.test | RUN | 0.246741 | 0.641717 | 0.802970 | 0.001626 | 0.001782 | 0.001724 |
| copy.test | RUN | 0.205784 | 0.482605 | 0.653962 | 0.001474 | 0.001854 | 0.001644 |
| count.test | RUN | 0.232908 | 0.532966 | 0.713549 | 0.001632 | 0.001784 | 0.001831 |
| count_if.test | RUN | 0.218728 | 0.486815 | 0.657113 | 0.001538 | 0.001822 | 0.001637 |
| erase.test | RUN | 0.312997 | 0.881590 | 1.063192 | 0.001638 | 0.001836 | 0.001336 |
| erase_key.test | RUN | 0.302817 | 0.883550 | 1.016746 | 0.001632 | 0.001553 | 0.001579 |
| filter.test | RUN | 0.269168 | 0.748923 | 0.923884 | 0.001785 | 0.001805 | 0.001741 |
| filter_if.test | RUN | 0.301009 | 0.880689 | 1.059952 | 0.001560 | 0.001807 | 0.001774 |
| find.test | RUN | 0.258030 | 0.595263 | 0.830572 | 0.001516 | 0.001917 | 0.001434 |
| find_if.test | RUN | 0.246899 | 0.554314 | 0.773475 | 0.001604 | 0.001392 | 0.001536 |
| fold.test | RUN | 0.279319 | 0.654797 | 0.922678 | 0.001795 | 0.001888 | 0.001665 |
| for_each.test | RUN | 0.245211 | 0.612177 | 0.816949 | 0.001628 | 0.001982 | 0.001444 |
| insert.test | RUN | 0.350366 | 1.083103 | 1.297147 | 0.001684 | 0.001794 | 0.001572 |
| insert_range.test | RUN | 0.365750 | 1.098564 | 1.312110 | 0.001661 | 0.001877 | 0.001342 |
| iter_fold.test | RUN | 0.416107 | 1.054380 | 1.523242 | 0.001840 | 0.001890 | 0.001741 |
| move.test | RUN | 0.218708 | 0.504078 | 0.670603 | 0.001764 | 0.001838 | 0.001776 |
| none.test | RUN | 0.343126 | 0.729794 | 1.024137 | 0.001763 | 0.001813 | 0.001533 |
| pop_back.test | RUN | 0.332100 | 0.951707 | 1.168554 | 0.001437 | 0.001812 | 0.001729 |
| pop_front.test | RUN | 0.284014 | 0.780109 | 0.936089 | 0.001778 | 0.001879 | 0.001416 |
| push_back.test | RUN | 0.349169 | 1.109945 | 1.273710 | 0.001746 | 0.001965 | 0.001700 |
| push_front.test | RUN | 0.310880 | 0.933033 | 1.065320 | 0.001768 | 0.001692 | 0.001690 |
| remove.test | RUN | 0.338843 | 1.025517 | 1.256124 | 0.001535 | 0.001597 | 0.001316 |
| remove_if.test | RUN | 0.312030 | 0.880077 | 1.088967 | 0.001890 | 0.001787 | 0.001684 |
| replace.test | RUN | 0.302872 | 0.846962 | 0.996665 | 0.001714 | 0.001952 | 0.001519 |
| replace_if.test | RUN | 0.296026 | 0.831248 | 0.990437 | 0.001490 | 0.002004 | 0.001768 |
| reverse_fold.test | RUN | 0.457302 | 1.214368 | 1.690480 | 0.001785 | 0.001726 | 0.001740 |
| reverse_iter_fold.test | RUN | 0.478798 | 1.244009 | 1.759503 | 0.001801 | 0.001618 | 0.001596 |
| reverse.test | RUN | 0.298682 | 0.897829 | 1.009794 | 0.001818 | 0.001841 | 0.001729 |
| segmented_for_each.test | RUN | 0.514760 | 1.636198 | 2.038064 | 0.001850 | 0.001930 | 0.001568 |
| segmented_find.test | RUN | 0.326177 | 0.875039 | 1.164072 | 0.001411 | 0.001833 | 0.001557 |
| segmented_find_if.test | RUN | 0.316228 | 0.851936 | 1.166036 | 0.001696 | 0.001517 | 0.001549 |
| segmented_fold.test | RUN | 0.388130 | 1.135825 | 1.447223 | 0.001806 | 0.001776 | 0.001638 |
| transform.test | RUN | 0.309918 | 0.904446 | 1.056421 | 0.001816 | 0.001794 | 0.001704 |
| join.test | RUN | 0.233061 | 0.561767 | 0.769688 | 0.001793 | 0.001818 | 0.001779 |
| zip.test | RUN | 0.396827 | 1.047613 | 1.407468 | 0.001771 | 0.001872 | 0.001689 |
| zip2.test | RUN | 0.402549 | 1.042273 | 1.347239 | 0.001701 | 0.001528 | 0.001731 |
| zip_ignore.test | RUN | 0.309690 | 0.674613 | 0.912291 | 0.001560 | 0.001765 | 0.001260 |
| flatten.test | RUN | 0.278599 | 0.787948 | 0.935348 | 0.001485 | 0.001837 | 0.001686 |
| ticket-5490.test | COMPILE | 0.150793 | 0.343145 | 0.400386 | — | — | — |
| as_deque.test | RUN | 0.281259 | 0.731468 | 1.010634 | 0.001623 | 0.001934 | 0.001611 |
| as_list.test | RUN | 0.311100 | 0.904723 | 1.043848 | 0.001600 | 0.001820 | 0.001179 |
| as_map.test | RUN | 0.306888 | 0.867881 | 1.051553 | 0.001592 | 0.001743 | 0.001654 |
| as_map_assoc.test | RUN | 0.307069 | 0.838644 | 1.001072 | 0.001538 | 0.001981 | 0.001759 |
| as_set.test | RUN | 0.344608 | 1.041060 | 1.223698 | 0.001789 | 0.001864 | 0.001708 |
| as_vector.test | RUN | 0.311059 | 0.913400 | 1.081118 | 0.001661 | 0.001763 | 0.001272 |
| boost_tuple.test | RUN | 0.311762 | 0.908819 | 1.080778 | 0.001595 | 0.001794 | 0.001523 |
| boost_tuple_iterator.test | RUN | 0.221844 | 0.547376 | 0.662372 | 0.001574 | 0.001592 | 0.001735 |
| cons.test | RUN | 0.399323 | 1.022061 | 1.294840 | 0.001443 | 0.001678 | 0.001694 |
| convert_boost_tuple.test | RUN | 0.252681 | 0.774273 | 0.860614 | 0.001794 | 0.001768 | 0.001606 |
| convert_deque.test | RUN | 0.254532 | 0.758856 | 0.839444 | 0.001546 | 0.001560 | 0.001774 |
| convert_list.test | RUN | 0.254746 | 0.779437 | 0.849036 | 0.001622 | 0.001775 | 0.001622 |
| convert_std_pair.test | RUN | 0.265943 | 0.769900 | 0.871156 | 0.001392 | 0.001770 | 0.001303 |
| convert_std_tuple.test | RUN | 0.250013 | 0.753032 | 0.835989 | 0.001441 | 0.001487 | 0.001698 |
| convert_vector.test | RUN | 0.254830 | 0.763711 | 0.841684 | 0.001392 | 0.001602 | 0.001393 |
| filter_view.test | RUN | 0.311382 | 0.815962 | 0.998463 | 0.001754 | 0.001751 | 0.001627 |
| hash.test | RUN | 0.295918 | 0.739058 | 0.975888 | 0.001744 | 0.001722 | 0.001574 |
| io.test | RUN | 0.313091 | 1.020500 | 1.128957 | 0.001620 | 0.001968 | 0.001966 |
| iterator_range.test | RUN | 0.283462 | 0.787572 | 0.963458 | 0.001564 | 0.001898 | 0.001486 |
| joint_view.test | RUN | 0.382866 | 1.308230 | 1.417546 | 0.001892 | 0.001480 | 0.001655 |
| list_comparison.test | RUN | 0.223075 | 0.525969 | 0.706063 | 0.001694 | 0.001643 | 0.001412 |
| list_construction.test | RUN | 0.218702 | 0.531505 | 0.689962 | 0.001533 | 0.001676 | 0.001308 |
| list_copy.test | RUN | 0.326787 | 0.961342 | 1.167336 | 0.001744 | 0.001628 | 0.001828 |
| list_iterator.test | RUN | 0.221487 | 0.549980 | 0.661442 | 0.001812 | 0.001704 | 0.001582 |
| list_hash.test | RUN | 0.296755 | 1.000581 | 0.979966 | 0.001590 | 0.001920 | 0.001724 |
| list_make.test | RUN | 0.236840 | 0.583761 | 0.735049 | 0.001742 | 0.001648 | 0.001837 |
| list_misc.test | RUN | 0.296445 | 0.705054 | 0.854417 | 0.001547 | 0.001829 | 0.001562 |
| list_mutate.test | RUN | 0.207932 | 0.474559 | 0.607913 | 0.001650 | 0.001663 | 0.001424 |
| list_nest.test | RUN | 0.418531 | 1.291729 | 1.643178 | 0.001225 | 0.001636 | 0.001514 |
| list_tie.test | RUN | 0.217822 | 0.512632 | 0.663047 | 0.001824 | 0.001822 | 0.001758 |
| list_value_at.test | RUN | 0.223584 | 0.518325 | 0.609796 | 0.001471 | 0.001800 | 0.001764 |
| deque_comparison.test | RUN | 0.218559 | 0.545028 | 0.732861 | 0.001348 | 0.001736 | 0.001776 |
| deque_construction.test | RUN | 0.225810 | 0.524197 | 0.661027 | 0.001795 | 0.001750 | 0.001606 |
| deque_copy.test | RUN | 0.316761 | 0.882056 | 1.104101 | 0.001516 | 0.001762 | 0.001661 |
| deque_iterator.test | RUN | 0.221826 | 0.570138 | 0.652651 | 0.001960 | 0.001539 | 0.001684 |
| deque_hash.test | RUN | 0.301946 | 0.963743 | 0.988714 | 0.001313 | 0.001926 | 0.001640 |
| deque_is_constructible.test | COMPILE | 0.119549 | 0.250883 | 0.321873 | — | — | — |
| deque_make.test | RUN | 0.222083 | 0.541706 | 0.709231 | 0.001706 | 0.001788 | 0.001658 |
| deque_misc.test | RUN | 0.286278 | 0.682824 | 0.876365 | 0.001284 | 0.001834 | 0.001720 |
| deque_move.test | RUN | 0.222421 | 0.569692 | 0.689099 | 0.001305 | 0.001547 | 0.001233 |
| deque_mutate.test | RUN | 0.204496 | 0.452505 | 0.618315 | 0.001578 | 0.001734 | 0.001602 |
| deque_nest.test | RUN | 0.625291 | 2.091600 | 2.575591 | 0.001617 | 0.001946 | 0.001521 |
| deque_tie.test | RUN | 0.212149 | 0.512139 | 0.669139 | 0.001718 | 0.001662 | 0.001684 |
| deque_value_at.test | RUN | 0.205550 | 0.457830 | 0.623539 | 0.001436 | 0.001818 | 0.001606 |
| front_extended_deque.test | RUN | 0.308540 | 0.704574 | 0.970124 | 0.001671 | 0.001744 | 0.001724 |
| back_extended_deque.test | RUN | 0.308512 | 0.702130 | 0.905856 | 0.001584 | 0.001680 | 0.001535 |
| make_list.test | RUN | 0.239212 | 0.601319 | 0.763367 | 0.001682 | 0.001865 | 0.001808 |
| make_vector.test | RUN | 0.233919 | 0.583680 | 0.687158 | 0.001444 | 0.001674 | 0.001772 |
| map.test | RUN | 0.306485 | 0.865983 | 1.021088 | 0.001650 | 0.001571 | 0.001790 |
| map_comparison.test | RUN | 0.234014 | 0.549480 | 0.692227 | 0.001576 | 0.001982 | 0.001700 |
| map_construction.test | RUN | 0.224252 | 0.551240 | 0.693070 | 0.001542 | 0.001566 | 0.001502 |
| map_copy.test | RUN | 0.272583 | 0.687219 | 0.855828 | 0.001668 | 0.001878 | 0.001675 |
| map_misc.test | RUN | 0.291101 | 0.690077 | 0.862871 | 0.001549 | 0.001459 | 0.001242 |
| map_move.test | RUN | 0.228958 | 0.578394 | 0.691302 | 0.001528 | 0.001592 | 0.001434 |
| map_mutate.test | RUN | 0.206347 | 0.472483 | 0.609618 | 0.001610 | 0.001771 | 0.001582 |
| map_tie.test | RUN | 0.216900 | 0.477542 | 0.633738 | 0.001689 | 0.001775 | 0.001677 |
| nil.test | RUN | 0.144758 | 0.328242 | 0.411545 | 0.001738 | 0.001840 | 0.001763 |
| nview.test | RUN | 0.284357 | 0.688847 | 0.907758 | 0.001670 | 0.001978 | 0.001784 |
| reverse_view.test | RUN | 0.363446 | 1.125312 | 1.297245 | 0.001719 | 0.001792 | 0.001684 |
| segmented_iterator_range.test | RUN | 0.444584 | 1.344944 | 1.613889 | 0.001767 | 0.001659 | 0.001872 |
| set.test | RUN | 0.275393 | 0.768461 | 0.929798 | 0.001587 | 0.001751 | 0.001781 |
| single_view.test | RUN | 0.254839 | 0.684447 | 0.818749 | 0.001750 | 0.001676 | 0.001621 |
| std_pair.test | RUN | 0.321874 | 0.872629 | 1.066992 | 0.001838 | 0.001787 | 0.001562 |
| boost_array.test | RUN | 0.274516 | 0.601831 | 0.793452 | 0.001576 | 0.001669 | 0.001764 |
| array.test | RUN | 0.266881 | 0.630311 | 0.780143 | 0.001441 | 0.001577 | 0.001677 |
| std_array.test | RUN | 0.269483 | 0.634710 | 0.803820 | 0.001836 | 0.001586 | 0.001642 |
| tuple_comparison.test | RUN | 0.243074 | 0.571397 | 0.707452 | 0.001828 | 0.001689 | 0.001633 |
| tuple_construction.test | RUN | 0.245739 | 0.573837 | 0.754755 | 0.001826 | 0.001940 | 0.001415 |
| tuple_conversion.test | RUN | 0.531006 | 1.793537 | 2.382502 | 0.001345 | 0.001533 | 0.001484 |
| tuple_copy.test | RUN | 0.362745 | 1.025047 | 1.271251 | 0.001628 | 0.001550 | 0.001456 |
| tuple_element.test | RUN | 0.241693 | 0.542458 | 0.711700 | 0.001530 | 0.001507 | 0.001530 |
| tuple_make.test | RUN | 0.246877 | 0.612846 | 0.787124 | 0.001738 | 0.001743 | 0.001650 |
| tuple_misc.test | RUN | 0.305926 | 0.733241 | 0.935429 | 0.001639 | 0.001912 | 0.001550 |
| tuple_mutate.test | RUN | 0.219052 | 0.508911 | 0.697822 | 0.001815 | 0.001811 | 0.001474 |
| tuple_nest.test | RUN | 0.910289 | 3.595823 | 4.528657 | 0.001732 | 0.001847 | 0.002050 |
| tuple_hash.test | RUN | 0.320953 | 0.996358 | 1.029321 | 0.001818 | 0.001983 | 0.001723 |
| tuple_tie.test | RUN | 0.238426 | 0.540866 | 0.717682 | 0.001869 | 0.001649 | 0.001443 |
| tuple_traits__maybe_variadic.test | RUN | 0.248353 | 0.672241 | 0.763779 | 0.001612 | 0.001806 | 0.001686 |
| tuple_traits__no_variadic.test | RUN | 0.284576 | 0.682513 | 0.807978 | 0.001562 | 0.001933 | 0.001714 |
| transform_view.test | RUN | 0.364077 | 1.109505 | 1.290237 | 0.001676 | 0.001926 | 0.001686 |
| identity_view.test | RUN | 0.343277 | 1.019011 | 1.232752 | 0.001514 | 0.001556 | 0.001559 |
| vector_comparison.test | RUN | 0.229132 | 0.570852 | 0.690098 | 0.001414 | 0.001516 | 0.001666 |
| vector_construction.test | RUN | 0.227534 | 0.539322 | 0.659377 | 0.001444 | 0.001763 | 0.001804 |
| vector_conversion.test | RUN | 0.642467 | 2.335561 | 3.203277 | 0.001783 | 0.001766 | 0.001615 |
| vector_copy.test | RUN | 0.335280 | 0.999808 | 1.243407 | 0.001550 | 0.001937 | 0.001536 |
| vector_iterator.test | RUN | 0.218907 | 0.563569 | 0.676778 | 0.001736 | 0.001627 | 0.001456 |
| vector_make.test | RUN | 0.244858 | 0.558130 | 0.751638 | 0.001567 | 0.001878 | 0.001628 |
| vector_misc.test | RUN | 0.296351 | 0.694997 | 0.857703 | 0.001546 | 0.001549 | 0.001628 |
| vector_move.test | RUN | 0.229485 | 0.581026 | 0.688103 | 0.001710 | 0.001647 | 0.001696 |
| vector_mutate.test | RUN | 0.207295 | 0.487471 | 0.658554 | 0.001280 | 0.001546 | 0.001658 |
| vector_n.test | RUN | 0.253027 | 0.588198 | 0.848691 | 0.001766 | 0.001966 | 0.001755 |
| vector_nest.test | RUN | 0.901459 | 3.807355 | 4.481264 | 0.001806 | 0.001868 | 0.001715 |
| vector_hash.test | RUN | 0.297736 | 0.977630 | 0.943787 | 0.001793 | 0.001775 | 0.001525 |
| vector_tie.test | RUN | 0.214460 | 0.523776 | 0.693276 | 0.001773 | 0.001811 | 0.001364 |
| vector_traits__maybe_variadic.test | RUN | 0.233193 | 0.641460 | 0.725463 | 0.001650 | 0.001868 | 0.001689 |
| vector_traits__no_variadic.test | RUN | 0.250569 | 0.635290 | 0.739606 | 0.001744 | 0.001809 | 0.001595 |
| vector_value_at.test | RUN | 0.215972 | 0.496318 | 0.653948 | 0.001580 | 0.001804 | 0.001759 |
| zip_view.test | RUN | 0.426193 | 1.175897 | 1.623695 | 0.001598 | 0.001423 | 0.001492 |
| zip_view2.test | RUN | 0.347023 | 0.890252 | 1.238259 | 0.001782 | 0.001573 | 0.001606 |
| zip_view_ignore.test | RUN | 0.319305 | 0.815596 | 1.103666 | 0.001304 | 0.001509 | 0.001505 |
| repetitive_view.test | RUN | 0.564228 | 1.542293 | 2.058593 | 0.001635 | 0.001812 | 0.001710 |
| deduce_sequence.test | RUN | 0.261881 | 0.664034 | 0.837656 | 0.001654 | 0.001652 | 0.001758 |
| adapt_adt_named.test | RUN | 0.324908 | 0.902691 | 1.047666 | 0.001485 | 0.001878 | 0.001724 |
| adapt_adt_named_empty.test | RUN | 0.267827 | 0.695447 | 0.873545 | 0.001458 | 0.001708 | 0.001746 |
| adapt_adt.test | RUN | 0.347630 | 1.185829 | 1.250355 | 0.001664 | 0.001809 | 0.001441 |
| adapt_adt_empty.test | RUN | 0.269297 | 0.724424 | 0.870595 | 0.001556 | 0.001936 | 0.001467 |
| adapt_assoc_adt_named.test | RUN | 0.347076 | 0.923492 | 1.136101 | 0.001310 | 0.001814 | 0.001611 |
| adapt_assoc_adt_named_empty.test | RUN | 0.272529 | 0.727546 | 0.845719 | 0.001576 | 0.001757 | 0.001748 |
| adapt_assoc_adt.test | RUN | 0.357825 | 1.017901 | 1.164590 | 0.001566 | 0.001625 | 0.001698 |
| adapt_assoc_adt_empty.test | RUN | 0.270026 | 0.728710 | 0.853815 | 0.001783 | 0.001796 | 0.001764 |
| adapt_assoc_struct_named.test | RUN | 0.343325 | 0.920273 | 1.123372 | 0.001639 | 0.001476 | 0.001710 |
| adapt_assoc_struct_named_empty.test | RUN | 0.269761 | 0.728991 | 0.870932 | 0.001634 | 0.001815 | 0.001818 |
| adapt_assoc_struct.test | RUN | 0.314501 | 0.869299 | 1.041288 | 0.001570 | 0.001576 | 0.001527 |
| adapt_assoc_struct_empty.test | RUN | 0.263453 | 0.733382 | 0.850288 | 0.001391 | 0.001734 | 0.001427 |
| adapt_assoc_tpl_adt.test | RUN | 0.361333 | 0.988568 | 1.220474 | 0.001450 | 0.001794 | 0.001642 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.278548 | 0.714181 | 0.863395 | 0.001406 | 0.001883 | 0.001433 |
| adapt_assoc_tpl_struct.test | RUN | 0.302223 | 0.846564 | 1.006275 | 0.001326 | 0.001724 | 0.001740 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.275516 | 0.727691 | 0.884512 | 0.001758 | 0.001817 | 0.001718 |
| adapt_struct_named.test | RUN | 0.310965 | 0.882953 | 0.998340 | 0.001469 | 0.001612 | 0.001324 |
| adapt_struct_named_empty.test | RUN | 0.281371 | 0.747077 | 0.862571 | 0.001361 | 0.001754 | 0.001641 |
| adapt_struct.test | RUN | 0.332342 | 0.994088 | 1.180063 | 0.001680 | 0.001739 | 0.001738 |
| adapt_struct_empty.test | RUN | 0.267893 | 0.730028 | 0.887020 | 0.001820 | 0.001848 | 0.001781 |
| adapt_tpl_adt.test | RUN | 0.342532 | 1.129846 | 1.199107 | 0.001517 | 0.001426 | 0.001610 |
| adapt_tpl_adt_empty.test | RUN | 0.279017 | 0.726456 | 0.858407 | 0.001540 | 0.001926 | 0.001703 |
| adapt_tpl_struct.test | RUN | 0.283924 | 0.797493 | 0.964477 | 0.001731 | 0.001821 | 0.001281 |
| adapt_tpl_struct_empty.test | RUN | 0.271621 | 0.749619 | 0.858779 | 0.001449 | 0.001700 | 0.001732 |
| adt_attribute_proxy.test | RUN | 0.306319 | 0.703176 | 0.953557 | 0.001600 | 0.001895 | 0.001667 |
| define_struct.test | RUN | 0.376366 | 0.977806 | 1.194354 | 0.001711 | 0.001920 | 0.001688 |
| define_struct_empty.test | RUN | 0.321790 | 0.804219 | 0.977872 | 0.001509 | 0.001791 | 0.001764 |
| define_struct_move.test | RUN | 0.209482 | 0.459850 | 0.604992 | 0.001692 | 0.001823 | 0.001700 |
| define_struct_inline.test | RUN | 0.392380 | 1.155385 | 1.345094 | 0.001770 | 0.001909 | 0.001762 |
| define_struct_inline_empty.test | RUN | 0.328632 | 0.804803 | 0.996060 | 0.001532 | 0.001710 | 0.001779 |
| define_struct_inline_move.test | RUN | 0.212095 | 0.476030 | 0.614581 | 0.001604 | 0.001749 | 0.001480 |
| define_assoc_struct.test | RUN | 0.353488 | 0.939757 | 1.154723 | 0.001739 | 0.001960 | 0.001743 |
| define_assoc_struct_empty.test | RUN | 0.320458 | 0.806644 | 0.996064 | 0.001690 | 0.001961 | 0.001699 |
| define_assoc_struct_move.test | RUN | 0.207921 | 0.448383 | 0.596151 | 0.001681 | 0.001757 | 0.001774 |
| define_tpl_struct.test | RUN | 0.367251 | 0.966174 | 1.163568 | 0.001801 | 0.001829 | 0.001594 |
| define_tpl_struct_empty.test | RUN | 0.337898 | 0.824243 | 0.985850 | 0.001571 | 0.001769 | 0.001697 |
| define_tpl_struct_move.test | RUN | 0.211574 | 0.473468 | 0.607297 | 0.001560 | 0.001702 | 0.001214 |
| define_tpl_struct_inline.test | RUN | 0.374424 | 1.087147 | 1.253696 | 0.001787 | 0.001653 | 0.001509 |
| define_tpl_struct_inline_empty.test | RUN | 0.324368 | 0.803422 | 0.996757 | 0.001722 | 0.001960 | 0.001774 |
| define_tpl_struct_inline_move.test | RUN | 0.213383 | 0.487245 | 0.629948 | 0.001457 | 0.001636 | 0.001700 |
| define_assoc_tpl_struct.test | RUN | 0.358864 | 0.969999 | 1.185741 | 0.001826 | 0.001941 | 0.001750 |
| define_assoc_tpl_struct_empty.test | RUN | 0.327405 | 0.808596 | 1.000756 | 0.001700 | 0.001736 | 0.001622 |
| define_assoc_tpl_struct_move.test | RUN | 0.210864 | 0.476226 | 0.606237 | 0.001510 | 0.001635 | 0.001643 |
| std_tuple.test | RUN | 0.225177 | 0.513684 | 0.680951 | 0.001764 | 0.001729 | 0.001672 |
| std_tuple_iterator.test | RUN | 0.222626 | 0.553062 | 0.673436 | 0.001769 | 0.001756 | 0.001686 |
| ref_vector.test | RUN | 0.253870 | 0.562418 | 0.721821 | 0.001640 | 0.001872 | 0.001730 |
| flatten_view.test | RUN | 0.269418 | 0.700122 | 0.859266 | 0.001532 | 0.001590 | 0.001609 |
| github-159.test | COMPILE | 0.125858 | 0.248109 | 0.335148 | — | — | — |
| github-176.test | RUN | 0.247628 | 0.614456 | 0.717809 | 0.001742 | 0.001909 | 0.001646 |
| size.test | COMPILE | 0.209553 | 0.433392 | 0.570008 | — | — | — |
| fused.test | RUN | 0.287225 | 0.643524 | 0.870882 | 0.001454 | 0.001795 | 0.001708 |
| fused_function_object.test | RUN | 0.215697 | 0.510621 | 0.637024 | 0.001725 | 0.001748 | 0.001791 |
| fused_procedure.test | RUN | 0.280428 | 0.617140 | 0.811684 | 0.001758 | 0.001732 | 0.001649 |
| unfused.test | RUN | 0.219618 | 0.513563 | 0.661301 | 0.001652 | 0.001884 | 0.001279 |
| unfused_typed.test | RUN | 0.228678 | 0.554295 | 0.705785 | 0.001626 | 0.001813 | 0.001652 |
| make_fused.test | RUN | 0.298441 | 0.652184 | 0.860413 | 0.002026 | 0.001487 | 0.001579 |
| make_fused_function_object.test | RUN | 0.216265 | 0.506381 | 0.656411 | 0.001540 | 0.001645 | 0.001557 |
| make_fused_procedure.test | RUN | 0.281733 | 0.629891 | 0.819384 | 0.001778 | 0.001878 | 0.001585 |
| make_unfused.test | RUN | 0.223967 | 0.512983 | 0.655942 | 0.001784 | 0.001781 | 0.001630 |
| invoke.test | RUN | 0.570424 | 1.799535 | 2.232268 | 0.001618 | 0.001544 | 0.001508 |
| invoke_function_object.test | RUN | 0.268787 | 0.657699 | 0.851486 | 0.001782 | 0.001930 | 0.001644 |
| invoke_procedure.test | RUN | 0.457923 | 1.317031 | 1.650094 | 0.001601 | 0.001803 | 0.001663 |
| swap.test | RUN | 0.347473 | 0.831551 | 1.101899 | 0.001428 | 0.001786 | 0.001818 |
| is_sequence.test | COMPILE | 0.060751 | 0.122371 | 0.137002 | — | — | — |
| is_view.test | COMPILE | 0.058583 | 0.117362 | 0.134225 | — | — | — |
| pair_deque.test | COMPILE | 0.122888 | 0.273936 | 0.326602 | — | — | — |
| pair_list.test | COMPILE | 0.123127 | 0.253316 | 0.355379 | — | — | — |
| pair_map.test | COMPILE | 0.127149 | 0.271390 | 0.332236 | — | — | — |
| pair_set.test | COMPILE | 0.132739 | 0.266892 | 0.332206 | — | — | — |
| pair_vector.test | COMPILE | 0.123553 | 0.259533 | 0.311688 | — | — | — |
| pair_nest.test | COMPILE | 0.053050 | 0.105435 | 0.124237 | — | — | — |
| index_sequence.test | COMPILE | 0.044991 | 0.075459 | 0.097693 | — | — | — |
| and.test | COMPILE | 0.034736 | 0.058651 | 0.066364 | — | — | — |
| tag_of.test | COMPILE | 0.058928 | 0.114614 | 0.127606 | — | — | — |
| unused.test | COMPILE | 0.031604 | 0.074718 | 0.078067 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.044815 | 0.117790 | 0.133241 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.051756 | 0.106036 | 0.127142 | — | — | — |
| quick.test | RUN | 0.165541 | 0.357627 | 0.398028 | 0.000543 | 0.001236 | 0.001174 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.007× | 1.012×, 1.002× | 0.997× |
| clang | 1.007× | 1.008×, 1.007× | 0.992× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44922642903).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.001046s | 0.001012s | 0.001055s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.001029s | 0.001009s | 0.001016s | byte equality observed |
| adapt_adt_named.test | 10 | 0.001044s | 0.001021s | 0.001055s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.001034s | 0.001001s | 0.001027s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.001035s | 0.001022s | 0.001033s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.001019s | 0.001035s | 0.001021s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.001045s | 0.001031s | 0.001045s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.001030s | 0.001019s | 0.001025s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.001035s | 0.001019s | 0.001036s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.001036s | 0.001038s | 0.001035s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.001021s | 0.001013s | 0.001036s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.001018s | 0.001031s | 0.001021s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.001020s | 0.001054s | 0.001047s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.001013s | 0.001050s | 0.001047s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.001046s | 0.001041s | 0.001071s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.001025s | 0.001034s | 0.001042s | byte equality observed |
| adapt_struct.test | 10 | 0.001054s | 0.001050s | 0.001077s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.001052s | 0.001016s | 0.001045s | byte equality observed |
| adapt_struct_named.test | 10 | 0.001034s | 0.001023s | 0.001077s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.001058s | 0.001014s | 0.001056s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.001049s | 0.001009s | 0.001073s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.001022s | 0.001020s | 0.001061s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.001033s | 0.001022s | 0.001054s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.001027s | 0.001024s | 0.001046s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.001017s | 0.001011s | 0.001024s | byte equality observed |
| all.test | 10 | 0.001016s | 0.000985s | 0.001048s | byte equality observed |
| any.test | 10 | 0.000993s | 0.001029s | 0.001028s | byte equality observed |
| array.test | 10 | 0.001016s | 0.000996s | 0.001040s | byte equality observed |
| as_deque.test | 10 | 0.001005s | 0.000980s | 0.001044s | byte equality observed |
| as_list.test | 10 | 0.001051s | 0.001050s | 0.001061s | byte equality observed |
| as_map.test | 10 | 0.001044s | 0.001022s | 0.001061s | byte equality observed |
| as_map_assoc.test | 10 | 0.001035s | 0.001049s | 0.001091s | byte equality observed |
| as_set.test | 10 | 0.001055s | 0.001041s | 0.001053s | byte equality observed |
| as_vector.test | 10 | 0.001053s | 0.001034s | 0.001048s | byte equality observed |
| back_extended_deque.test | 10 | 0.001021s | 0.000993s | 0.001041s | byte equality observed |
| boost_array.test | 10 | 0.001032s | 0.000976s | 0.001014s | byte equality observed |
| boost_tuple.test | 10 | 0.001049s | 0.001032s | 0.001059s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.001007s | 0.000966s | 0.001030s | byte equality observed |
| clear.test | 10 | 0.001042s | 0.001041s | 0.001057s | byte equality observed |
| cons.test | 10 | 0.001043s | 0.001054s | 0.001071s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.001032s | 0.001006s | 0.001037s | byte equality observed |
| convert_deque.test | 10 | 0.001047s | 0.001017s | 0.001013s | byte equality observed |
| convert_list.test | 10 | 0.001034s | 0.001047s | 0.001066s | byte equality observed |
| convert_std_pair.test | 10 | 0.001003s | 0.001028s | 0.001063s | byte equality observed |
| convert_std_tuple.test | 10 | 0.001009s | 0.001027s | 0.001048s | byte equality observed |
| convert_vector.test | 10 | 0.001023s | 0.001018s | 0.001089s | byte equality observed |
| copy.test | 10 | 0.001021s | 0.000997s | 0.001019s | byte equality observed |
| count.test | 10 | 0.001004s | 0.000994s | 0.001019s | byte equality observed |
| count_if.test | 10 | 0.001006s | 0.000990s | 0.000994s | byte equality observed |
| deduce_sequence.test | 10 | 0.001021s | 0.000977s | 0.001023s | byte equality observed |
| define_assoc_struct.test | 10 | 0.001054s | 0.001024s | 0.001054s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.001034s | 0.001013s | 0.001039s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.000996s | 0.000994s | 0.001041s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.001037s | 0.001050s | 0.001069s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.001022s | 0.001020s | 0.001065s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.001003s | 0.001002s | 0.001013s | byte equality observed |
| define_struct.test | 10 | 0.001045s | 0.001017s | 0.001065s | byte equality observed |
| define_struct_empty.test | 10 | 0.001023s | 0.001015s | 0.001055s | byte equality observed |
| define_struct_inline.test | 10 | 0.001044s | 0.001043s | 0.001048s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.001013s | 0.001008s | 0.001054s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.001031s | 0.001002s | 0.001009s | byte equality observed |
| define_struct_move.test | 10 | 0.001019s | 0.001018s | 0.001013s | byte equality observed |
| define_tpl_struct.test | 10 | 0.001041s | 0.001048s | 0.001035s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.001035s | 0.001005s | 0.001057s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.001045s | 0.001023s | 0.001082s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.001025s | 0.001006s | 0.001045s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.001004s | 0.000978s | 0.001029s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.001012s | 0.001009s | 0.001046s | byte equality observed |
| deque_comparison.test | 10 | 0.001001s | 0.001004s | 0.001035s | byte equality observed |
| deque_construction.test | 10 | 0.001027s | 0.001025s | 0.001035s | byte equality observed |
| deque_copy.test | 10 | 0.001016s | 0.001000s | 0.001063s | byte equality observed |
| deque_hash.test | 10 | 0.001048s | 0.001025s | 0.001052s | byte equality observed |
| deque_iterator.test | 10 | 0.001029s | 0.001015s | 0.001027s | byte equality observed |
| deque_make.test | 10 | 0.001009s | 0.001015s | 0.001082s | byte equality observed |
| deque_misc.test | 10 | 0.001014s | 0.001007s | 0.001027s | byte equality observed |
| deque_move.test | 10 | 0.001028s | 0.001010s | 0.001026s | byte equality observed |
| deque_mutate.test | 10 | 0.001015s | 0.000984s | 0.001027s | byte equality observed |
| deque_nest.test | 10 | 0.001037s | 0.000991s | 0.000999s | byte equality observed |
| deque_tie.test | 10 | 0.001008s | 0.000994s | 0.001012s | byte equality observed |
| deque_value_at.test | 10 | 0.001010s | 0.001020s | 0.001012s | byte equality observed |
| erase.test | 10 | 0.001044s | 0.001034s | 0.001048s | byte equality observed |
| erase_key.test | 10 | 0.001049s | 0.001077s | 0.001046s | byte equality observed |
| filter.test | 10 | 0.001029s | 0.001064s | 0.001071s | byte equality observed |
| filter_if.test | 10 | 0.001048s | 0.001053s | 0.001093s | byte equality observed |
| filter_view.test | 10 | 0.001026s | 0.001090s | 0.001051s | byte equality observed |
| find.test | 10 | 0.001029s | 0.001048s | 0.001059s | byte equality observed |
| find_if.test | 10 | 0.001012s | 0.001059s | 0.001034s | byte equality observed |
| flatten.test | 10 | 0.001014s | 0.001017s | 0.001032s | byte equality observed |
| flatten_view.test | 10 | 0.001005s | 0.001032s | 0.001041s | byte equality observed |
| fold.test | 10 | 0.001029s | 0.001043s | 0.001030s | byte equality observed |
| for_each.test | 10 | 0.001055s | 0.001048s | 0.001063s | byte equality observed |
| front_extended_deque.test | 10 | 0.001014s | 0.001001s | 0.001016s | byte equality observed |
| fused.test | 10 | 0.001002s | 0.001024s | 0.001020s | byte equality observed |
| fused_function_object.test | 10 | 0.000995s | 0.001010s | 0.001056s | byte equality observed |
| fused_procedure.test | 10 | 0.000981s | 0.001009s | 0.001038s | byte equality observed |
| github-176.test | 10 | 0.001010s | 0.000990s | 0.001038s | byte equality observed |
| hash.test | 10 | 0.001029s | 0.001014s | 0.001032s | byte equality observed |
| identity_view.test | 10 | 0.001057s | 0.001033s | 0.001057s | byte equality observed |
| insert.test | 10 | 0.001071s | 0.001051s | 0.001115s | byte equality observed |
| insert_range.test | 10 | 0.001060s | 0.001028s | 0.001076s | byte equality observed |
| invoke.test | 10 | 0.001003s | 0.000991s | 0.001041s | byte equality observed |
| invoke_function_object.test | 10 | 0.001006s | 0.001006s | 0.001014s | byte equality observed |
| invoke_procedure.test | 10 | 0.001000s | 0.001010s | 0.001057s | byte equality observed |
| io.test | 1 | 0.001149s | 0.001151s | 0.001256s | byte equality observed |
| iter_fold.test | 10 | 0.001033s | 0.001020s | 0.001049s | byte equality observed |
| iterator_range.test | 10 | 0.001028s | 0.001056s | 0.001094s | byte equality observed |
| join.test | 10 | 0.001010s | 0.000994s | 0.001008s | byte equality observed |
| joint_view.test | 10 | 0.001082s | 0.001075s | 0.001079s | byte equality observed |
| list_comparison.test | 10 | 0.001010s | 0.000971s | 0.001041s | byte equality observed |
| list_construction.test | 10 | 0.001005s | 0.001009s | 0.001040s | byte equality observed |
| list_copy.test | 10 | 0.001004s | 0.000988s | 0.001029s | byte equality observed |
| list_hash.test | 10 | 0.000999s | 0.001016s | 0.001029s | byte equality observed |
| list_iterator.test | 10 | 0.000996s | 0.000998s | 0.001003s | byte equality observed |
| list_make.test | 10 | 0.001020s | 0.001022s | 0.000993s | byte equality observed |
| list_misc.test | 10 | 0.001007s | 0.000990s | 0.001002s | byte equality observed |
| list_mutate.test | 10 | 0.001033s | 0.001058s | 0.001014s | byte equality observed |
| list_nest.test | 10 | 0.001002s | 0.001008s | 0.001041s | byte equality observed |
| list_tie.test | 10 | 0.000993s | 0.001033s | 0.001020s | byte equality observed |
| list_value_at.test | 10 | 0.000994s | 0.001050s | 0.001026s | byte equality observed |
| make_fused.test | 10 | 0.000982s | 0.001011s | 0.001026s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000994s | 0.001000s | 0.001024s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000996s | 0.001026s | 0.001039s | byte equality observed |
| make_list.test | 10 | 0.000996s | 0.001015s | 0.001013s | byte equality observed |
| make_unfused.test | 10 | 0.001003s | 0.000992s | 0.001034s | byte equality observed |
| make_vector.test | 10 | 0.001002s | 0.001025s | 0.001014s | byte equality observed |
| map.test | 10 | 0.001031s | 0.001048s | 0.001051s | byte equality observed |
| map_comparison.test | 10 | 0.001008s | 0.000993s | 0.001013s | byte equality observed |
| map_construction.test | 10 | 0.000989s | 0.000991s | 0.001055s | byte equality observed |
| map_copy.test | 10 | 0.001033s | 0.000988s | 0.001027s | byte equality observed |
| map_misc.test | 10 | 0.001000s | 0.001000s | 0.001027s | byte equality observed |
| map_move.test | 10 | 0.001032s | 0.001013s | 0.001024s | byte equality observed |
| map_mutate.test | 10 | 0.000999s | 0.000999s | 0.001026s | byte equality observed |
| map_tie.test | 10 | 0.000987s | 0.001012s | 0.001016s | byte equality observed |
| move.test | 10 | 0.000988s | 0.000995s | 0.001020s | byte equality observed |
| nil.test | 10 | 0.000997s | 0.000987s | 0.001016s | byte equality observed |
| none.test | 10 | 0.000993s | 0.001041s | 0.001005s | byte equality observed |
| nview.test | 10 | 0.001011s | 0.001037s | 0.001015s | byte equality observed |
| pop_back.test | 10 | 0.001054s | 0.001060s | 0.001071s | byte equality observed |
| pop_front.test | 10 | 0.001025s | 0.001024s | 0.001056s | byte equality observed |
| push_back.test | 10 | 0.001017s | 0.001053s | 0.001045s | byte equality observed |
| push_front.test | 10 | 0.001043s | 0.001039s | 0.001063s | byte equality observed |
| quick.test | 10 | 0.000456s | 0.001014s | 0.000980s | byte equality observed |
| ref_vector.test | 10 | 0.001022s | 0.000994s | 0.001047s | byte equality observed |
| remove.test | 10 | 0.001039s | 0.001034s | 0.001079s | byte equality observed |
| remove_if.test | 10 | 0.001061s | 0.001047s | 0.001039s | byte equality observed |
| repetitive_view.test | 10 | 0.001014s | 0.001000s | 0.001032s | byte equality observed |
| replace.test | 10 | 0.001028s | 0.001029s | 0.001045s | byte equality observed |
| replace_if.test | 10 | 0.001022s | 0.001033s | 0.001051s | byte equality observed |
| reverse.test | 10 | 0.001041s | 0.001020s | 0.001074s | byte equality observed |
| reverse_fold.test | 10 | 0.001029s | 0.001005s | 0.001063s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.001039s | 0.001008s | 0.001050s | byte equality observed |
| reverse_view.test | 10 | 0.001036s | 0.001034s | 0.001059s | byte equality observed |
| segmented_find.test | 10 | 0.001017s | 0.000983s | 0.001036s | byte equality observed |
| segmented_find_if.test | 10 | 0.001012s | 0.000984s | 0.001013s | byte equality observed |
| segmented_fold.test | 10 | 0.001050s | 0.001004s | 0.001050s | byte equality observed |
| segmented_for_each.test | 10 | 0.001058s | 0.001024s | 0.001049s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.001056s | 0.001040s | 0.001044s | byte equality observed |
| set.test | 10 | 0.001015s | 0.001008s | 0.001050s | byte equality observed |
| single_view.test | 10 | 0.001041s | 0.001035s | 0.001035s | byte equality observed |
| std_array.test | 10 | 0.001011s | 0.000987s | 0.001022s | byte equality observed |
| std_pair.test | 10 | 0.001044s | 0.001029s | 0.001057s | byte equality observed |
| std_tuple.test | 10 | 0.001018s | 0.000983s | 0.001010s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.001012s | 0.000970s | 0.001012s | byte equality observed |
| swap.test | 10 | 0.001021s | 0.000990s | 0.001003s | byte equality observed |
| transform.test | 10 | 0.001022s | 0.001026s | 0.001033s | byte equality observed |
| transform_view.test | 10 | 0.001034s | 0.001048s | 0.001059s | byte equality observed |
| tuple_comparison.test | 10 | 0.001012s | 0.001009s | 0.001034s | byte equality observed |
| tuple_construction.test | 10 | 0.001000s | 0.001035s | 0.001027s | byte equality observed |
| tuple_conversion.test | 10 | 0.001010s | 0.001002s | 0.001031s | byte equality observed |
| tuple_copy.test | 10 | 0.001011s | 0.001002s | 0.001057s | byte equality observed |
| tuple_element.test | 10 | 0.000993s | 0.000992s | 0.001031s | byte equality observed |
| tuple_hash.test | 10 | 0.001032s | 0.001011s | 0.001055s | byte equality observed |
| tuple_make.test | 10 | 0.001007s | 0.001055s | 0.001027s | byte equality observed |
| tuple_misc.test | 10 | 0.001009s | 0.001022s | 0.001016s | byte equality observed |
| tuple_mutate.test | 10 | 0.000997s | 0.001031s | 0.000996s | byte equality observed |
| tuple_nest.test | 10 | 0.001044s | 0.001006s | 0.001004s | byte equality observed |
| tuple_tie.test | 10 | 0.001011s | 0.000999s | 0.001008s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.001004s | 0.001016s | 0.001019s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.001015s | 0.000984s | 0.001003s | byte equality observed |
| unfused.test | 10 | 0.001019s | 0.000993s | 0.001017s | byte equality observed |
| unfused_typed.test | 10 | 0.001006s | 0.001009s | 0.001034s | byte equality observed |
| vector_comparison.test | 10 | 0.001007s | 0.000996s | 0.001023s | byte equality observed |
| vector_construction.test | 10 | 0.000994s | 0.000982s | 0.001024s | byte equality observed |
| vector_conversion.test | 10 | 0.000986s | 0.000981s | 0.001014s | byte equality observed |
| vector_copy.test | 10 | 0.000998s | 0.001006s | 0.000991s | byte equality observed |
| vector_hash.test | 10 | 0.001014s | 0.000989s | 0.000986s | byte equality observed |
| vector_iterator.test | 10 | 0.001020s | 0.000999s | 0.000998s | byte equality observed |
| vector_make.test | 10 | 0.001014s | 0.001006s | 0.001023s | byte equality observed |
| vector_misc.test | 10 | 0.001037s | 0.001019s | 0.001056s | byte equality observed |
| vector_move.test | 10 | 0.001033s | 0.001013s | 0.001025s | byte equality observed |
| vector_mutate.test | 10 | 0.001013s | 0.001006s | 0.001020s | byte equality observed |
| vector_n.test | 10 | 0.001039s | 0.001041s | 0.001035s | byte equality observed |
| vector_nest.test | 10 | 0.001024s | 0.000990s | 0.001034s | byte equality observed |
| vector_tie.test | 10 | 0.001019s | 0.001000s | 0.001010s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.001033s | 0.001008s | 0.001022s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.001025s | 0.000998s | 0.001040s | byte equality observed |
| vector_value_at.test | 10 | 0.001012s | 0.000992s | 0.001027s | byte equality observed |
| zip.test | 10 | 0.000994s | 0.001009s | 0.001057s | byte equality observed |
| zip2.test | 10 | 0.000999s | 0.001002s | 0.001035s | byte equality observed |
| zip_ignore.test | 10 | 0.001021s | 0.001029s | 0.001013s | byte equality observed |
| zip_view.test | 10 | 0.000997s | 0.001030s | 0.001025s | byte equality observed |
| zip_view2.test | 10 | 0.001031s | 0.000994s | 0.001021s | byte equality observed |
| zip_view_ignore.test | 10 | 0.001007s | 0.001005s | 0.000990s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44922642903).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
