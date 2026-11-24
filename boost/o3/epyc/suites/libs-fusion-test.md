# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.341021 | 0.749884 | 1.058203 | 0.001648 | 0.001476 | 0.001479 |
| any.test | RUN | 0.341916 | 0.704239 | 1.011854 | 0.001632 | 0.001617 | 0.001686 |
| clear.test | RUN | 0.241984 | 0.638772 | 0.783861 | 0.001531 | 0.001782 | 0.001774 |
| copy.test | RUN | 0.211652 | 0.482640 | 0.649574 | 0.001600 | 0.001800 | 0.001519 |
| count.test | RUN | 0.233614 | 0.538468 | 0.698982 | 0.001652 | 0.001792 | 0.001498 |
| count_if.test | RUN | 0.220707 | 0.505997 | 0.654471 | 0.001493 | 0.001727 | 0.001484 |
| erase.test | RUN | 0.304408 | 0.877903 | 1.069395 | 0.001303 | 0.001748 | 0.001664 |
| erase_key.test | RUN | 0.297223 | 0.873216 | 1.015717 | 0.001730 | 0.001556 | 0.001346 |
| filter.test | RUN | 0.268960 | 0.725034 | 0.912257 | 0.001770 | 0.001834 | 0.001796 |
| filter_if.test | RUN | 0.303069 | 0.866151 | 1.066699 | 0.001586 | 0.001441 | 0.001830 |
| find.test | RUN | 0.260610 | 0.595713 | 0.819867 | 0.001337 | 0.001478 | 0.001536 |
| find_if.test | RUN | 0.247695 | 0.551362 | 0.758086 | 0.001778 | 0.001761 | 0.001794 |
| fold.test | RUN | 0.274854 | 0.667851 | 0.926543 | 0.001497 | 0.001822 | 0.001698 |
| for_each.test | RUN | 0.247375 | 0.616593 | 0.800929 | 0.001434 | 0.001942 | 0.001664 |
| insert.test | RUN | 0.356157 | 1.070916 | 1.303851 | 0.001430 | 0.001781 | 0.004056 |
| insert_range.test | RUN | 0.352703 | 1.098185 | 1.304624 | 0.001454 | 0.001535 | 0.001575 |
| iter_fold.test | RUN | 0.417813 | 1.056798 | 1.557695 | 0.001730 | 0.001826 | 0.001830 |
| move.test | RUN | 0.209777 | 0.506964 | 0.663546 | 0.001681 | 0.001765 | 0.001489 |
| none.test | RUN | 0.340582 | 0.727301 | 1.016574 | 0.001513 | 0.001752 | 0.001306 |
| pop_back.test | RUN | 0.329397 | 0.941418 | 1.157775 | 0.001707 | 0.001883 | 0.001822 |
| pop_front.test | RUN | 0.285341 | 0.756692 | 0.949203 | 0.001776 | 0.001968 | 0.001733 |
| push_back.test | RUN | 0.344596 | 1.090145 | 1.263971 | 0.001658 | 0.001950 | 0.001854 |
| push_front.test | RUN | 0.312993 | 0.906203 | 1.066250 | 0.001800 | 0.001706 | 0.001846 |
| remove.test | RUN | 0.342017 | 1.045946 | 1.262566 | 0.001601 | 0.001785 | 0.001639 |
| remove_if.test | RUN | 0.311066 | 0.845125 | 1.093664 | 0.001734 | 0.001750 | 0.001451 |
| replace.test | RUN | 0.299084 | 0.841920 | 0.995238 | 0.001576 | 0.001880 | 0.001824 |
| replace_if.test | RUN | 0.298595 | 0.826507 | 0.985957 | 0.001823 | 0.001758 | 0.001850 |
| reverse_fold.test | RUN | 0.461110 | 1.186003 | 1.708794 | 0.001786 | 0.001688 | 0.001535 |
| reverse_iter_fold.test | RUN | 0.499519 | 1.229129 | 1.788688 | 0.001782 | 0.001673 | 0.001467 |
| reverse.test | RUN | 0.306337 | 0.861283 | 0.996894 | 0.001556 | 0.001939 | 0.001628 |
| segmented_for_each.test | RUN | 0.517935 | 1.664469 | 2.051238 | 0.001687 | 0.001697 | 0.001591 |
| segmented_find.test | RUN | 0.326745 | 0.872338 | 1.178478 | 0.001638 | 0.001632 | 0.001403 |
| segmented_find_if.test | RUN | 0.319522 | 0.862148 | 1.177011 | 0.001676 | 0.001654 | 0.001696 |
| segmented_fold.test | RUN | 0.393370 | 1.123888 | 1.466404 | 0.001758 | 0.001870 | 0.001737 |
| transform.test | RUN | 0.310540 | 0.896931 | 1.038212 | 0.001580 | 0.001931 | 0.001821 |
| join.test | RUN | 0.236594 | 0.545651 | 0.747862 | 0.001720 | 0.001693 | 0.001793 |
| zip.test | RUN | 0.405330 | 1.013385 | 1.439651 | 0.001700 | 0.001834 | 0.001735 |
| zip2.test | RUN | 0.391270 | 1.006340 | 1.366523 | 0.001471 | 0.001605 | 0.001731 |
| zip_ignore.test | RUN | 0.298610 | 0.706611 | 0.900974 | 0.001578 | 0.001744 | 0.001669 |
| flatten.test | RUN | 0.278580 | 0.751507 | 0.914912 | 0.001614 | 0.001746 | 0.001728 |
| ticket-5490.test | COMPILE | 0.150224 | 0.344974 | 0.408881 | — | — | — |
| as_deque.test | RUN | 0.280927 | 0.739856 | 0.999042 | 0.001784 | 0.001816 | 0.001757 |
| as_list.test | RUN | 0.314111 | 0.911191 | 1.042186 | 0.001801 | 0.001608 | 0.001770 |
| as_map.test | RUN | 0.317273 | 0.871732 | 1.069505 | 0.001284 | 0.001836 | 0.001582 |
| as_map_assoc.test | RUN | 0.303715 | 0.835380 | 1.023534 | 0.001506 | 0.001756 | 0.001691 |
| as_set.test | RUN | 0.346826 | 1.027904 | 1.251454 | 0.001659 | 0.001622 | 0.001614 |
| as_vector.test | RUN | 0.313433 | 0.936177 | 1.106443 | 0.001553 | 0.001645 | 0.001272 |
| boost_tuple.test | RUN | 0.322996 | 0.872943 | 1.051806 | 0.001572 | 0.001812 | 0.001760 |
| boost_tuple_iterator.test | RUN | 0.216001 | 0.525684 | 0.666178 | 0.001592 | 0.001723 | 0.001740 |
| cons.test | RUN | 0.394388 | 1.009068 | 1.297522 | 0.001474 | 0.001534 | 0.001754 |
| convert_boost_tuple.test | RUN | 0.248513 | 0.763224 | 0.851383 | 0.001643 | 0.001775 | 0.001602 |
| convert_deque.test | RUN | 0.254232 | 0.776275 | 0.837605 | 0.001543 | 0.001500 | 0.001454 |
| convert_list.test | RUN | 0.256073 | 0.787149 | 0.853298 | 0.001491 | 0.001724 | 0.001698 |
| convert_std_pair.test | RUN | 0.263831 | 0.778165 | 0.860003 | 0.001581 | 0.001714 | 0.001502 |
| convert_std_tuple.test | RUN | 0.254429 | 0.739536 | 0.823142 | 0.001692 | 0.001618 | 0.001585 |
| convert_vector.test | RUN | 0.253659 | 0.738615 | 0.852184 | 0.001482 | 0.001551 | 0.001757 |
| filter_view.test | RUN | 0.299543 | 0.812611 | 1.022717 | 0.001648 | 0.001770 | 0.001808 |
| hash.test | RUN | 0.300073 | 0.724811 | 0.961456 | 0.001732 | 0.001687 | 0.001611 |
| io.test | RUN | 0.315380 | 1.013369 | 1.143994 | 0.001547 | 0.001986 | 0.001647 |
| iterator_range.test | RUN | 0.281366 | 0.773371 | 0.968912 | 0.001527 | 0.001863 | 0.001584 |
| joint_view.test | RUN | 0.381834 | 1.287809 | 1.430550 | 0.001793 | 0.001738 | 0.001522 |
| list_comparison.test | RUN | 0.221660 | 0.560478 | 0.729783 | 0.001790 | 0.001813 | 0.001362 |
| list_construction.test | RUN | 0.218396 | 0.504525 | 0.683060 | 0.001500 | 0.001674 | 0.001814 |
| list_copy.test | RUN | 0.318891 | 0.939087 | 1.172056 | 0.001555 | 0.001404 | 0.001752 |
| list_iterator.test | RUN | 0.212633 | 0.534556 | 0.645048 | 0.001523 | 0.001788 | 0.001764 |
| list_hash.test | RUN | 0.294121 | 1.021576 | 0.993658 | 0.001362 | 0.001850 | 0.001776 |
| list_make.test | RUN | 0.233840 | 0.596561 | 0.745113 | 0.001803 | 0.001744 | 0.001606 |
| list_misc.test | RUN | 0.296831 | 0.671232 | 0.886399 | 0.001592 | 0.001771 | 0.001592 |
| list_mutate.test | RUN | 0.207506 | 0.464929 | 0.624538 | 0.001727 | 0.001783 | 0.001353 |
| list_nest.test | RUN | 0.405947 | 1.276124 | 1.647495 | 0.001512 | 0.001569 | 0.001686 |
| list_tie.test | RUN | 0.218957 | 0.535339 | 0.702703 | 0.001818 | 0.001818 | 0.001783 |
| list_value_at.test | RUN | 0.216436 | 0.477603 | 0.670858 | 0.001716 | 0.001737 | 0.001356 |
| deque_comparison.test | RUN | 0.221037 | 0.547536 | 0.681956 | 0.001557 | 0.001684 | 0.001310 |
| deque_construction.test | RUN | 0.222375 | 0.520431 | 0.715897 | 0.001649 | 0.001885 | 0.001667 |
| deque_copy.test | RUN | 0.315390 | 0.896061 | 1.083180 | 0.001596 | 0.001514 | 0.001723 |
| deque_iterator.test | RUN | 0.219564 | 0.562090 | 0.687577 | 0.001724 | 0.001771 | 0.001581 |
| deque_hash.test | RUN | 0.301904 | 0.985754 | 0.949702 | 0.001542 | 0.001912 | 0.001751 |
| deque_is_constructible.test | COMPILE | 0.119711 | 0.241964 | 0.320318 | — | — | — |
| deque_make.test | RUN | 0.225391 | 0.554775 | 0.726967 | 0.001743 | 0.001762 | 0.001631 |
| deque_misc.test | RUN | 0.290525 | 0.698135 | 0.839307 | 0.001515 | 0.001579 | 0.001557 |
| deque_move.test | RUN | 0.223742 | 0.555653 | 0.668299 | 0.001514 | 0.001846 | 0.001679 |
| deque_mutate.test | RUN | 0.210479 | 0.450172 | 0.606702 | 0.001412 | 0.001718 | 0.001814 |
| deque_nest.test | RUN | 0.620354 | 2.077422 | 2.613702 | 0.001709 | 0.001894 | 0.001772 |
| deque_tie.test | RUN | 0.212809 | 0.475436 | 0.619859 | 0.002206 | 0.001876 | 0.001724 |
| deque_value_at.test | RUN | 0.209060 | 0.504943 | 0.613417 | 0.001581 | 0.001823 | 0.001826 |
| front_extended_deque.test | RUN | 0.302627 | 0.696760 | 0.969907 | 0.001594 | 0.001905 | 0.001908 |
| back_extended_deque.test | RUN | 0.305106 | 0.730907 | 0.912049 | 0.001585 | 0.001802 | 0.001771 |
| make_list.test | RUN | 0.235556 | 0.568862 | 0.717974 | 0.001824 | 0.001844 | 0.001302 |
| make_vector.test | RUN | 0.234686 | 0.567896 | 0.761790 | 0.001557 | 0.001874 | 0.001532 |
| map.test | RUN | 0.304499 | 0.856536 | 1.025408 | 0.001628 | 0.001940 | 0.001718 |
| map_comparison.test | RUN | 0.228347 | 0.552016 | 0.731714 | 0.001461 | 0.001926 | 0.001820 |
| map_construction.test | RUN | 0.230234 | 0.537900 | 0.694552 | 0.001480 | 0.001812 | 0.001764 |
| map_copy.test | RUN | 0.270061 | 0.688550 | 0.858307 | 0.001743 | 0.001879 | 0.001706 |
| map_misc.test | RUN | 0.294494 | 0.699687 | 0.858513 | 0.001480 | 0.001863 | 0.001416 |
| map_move.test | RUN | 0.224159 | 0.582852 | 0.701767 | 0.001620 | 0.001578 | 0.001638 |
| map_mutate.test | RUN | 0.204968 | 0.480738 | 0.604179 | 0.001452 | 0.001658 | 0.001500 |
| map_tie.test | RUN | 0.220137 | 0.469547 | 0.616577 | 0.001747 | 0.001758 | 0.001515 |
| nil.test | RUN | 0.147280 | 0.328370 | 0.433012 | 0.001764 | 0.001756 | 0.001550 |
| nview.test | RUN | 0.310593 | 0.681409 | 0.896874 | 0.001659 | 0.001875 | 0.001780 |
| reverse_view.test | RUN | 0.395173 | 1.114770 | 1.311110 | 0.001604 | 0.001643 | 0.001600 |
| segmented_iterator_range.test | RUN | 0.453384 | 1.337254 | 1.658395 | 0.001734 | 0.001818 | 0.001620 |
| set.test | RUN | 0.273539 | 0.770750 | 0.897250 | 0.001768 | 0.001816 | 0.001519 |
| single_view.test | RUN | 0.252979 | 0.714739 | 0.831267 | 0.001879 | 0.001403 | 0.001300 |
| std_pair.test | RUN | 0.317785 | 0.884892 | 1.070509 | 0.001853 | 0.001977 | 0.001770 |
| boost_array.test | RUN | 0.272315 | 0.638434 | 0.813046 | 0.001742 | 0.001855 | 0.001614 |
| array.test | RUN | 0.269054 | 0.595312 | 0.819311 | 0.001350 | 0.001552 | 0.001764 |
| std_array.test | RUN | 0.265457 | 0.592706 | 0.760864 | 0.001374 | 0.001674 | 0.001508 |
| tuple_comparison.test | RUN | 0.235097 | 0.566787 | 0.714081 | 0.001757 | 0.001788 | 0.001731 |
| tuple_construction.test | RUN | 0.244351 | 0.572297 | 0.723436 | 0.001752 | 0.001826 | 0.001780 |
| tuple_conversion.test | RUN | 0.519649 | 1.782531 | 2.438781 | 0.001710 | 0.001686 | 0.001819 |
| tuple_copy.test | RUN | 0.345184 | 1.044247 | 1.294709 | 0.001759 | 0.001385 | 0.001736 |
| tuple_element.test | RUN | 0.230936 | 0.509251 | 0.662384 | 0.001306 | 0.001759 | 0.001777 |
| tuple_make.test | RUN | 0.242610 | 0.596909 | 0.738165 | 0.001707 | 0.001909 | 0.001495 |
| tuple_misc.test | RUN | 0.314391 | 0.729324 | 0.933827 | 0.001812 | 0.001746 | 0.001574 |
| tuple_mutate.test | RUN | 0.214802 | 0.480746 | 0.665166 | 0.001771 | 0.001906 | 0.001430 |
| tuple_nest.test | RUN | 0.902744 | 3.540402 | 4.557173 | 0.001710 | 0.001871 | 0.001791 |
| tuple_hash.test | RUN | 0.315234 | 1.050364 | 1.037394 | 0.001822 | 0.001906 | 0.001486 |
| tuple_tie.test | RUN | 0.229799 | 0.530211 | 0.695122 | 0.001390 | 0.001882 | 0.001736 |
| tuple_traits__maybe_variadic.test | RUN | 0.249036 | 0.657032 | 0.748513 | 0.001912 | 0.001551 | 0.001641 |
| tuple_traits__no_variadic.test | RUN | 0.288636 | 0.645904 | 0.810105 | 0.001569 | 0.001941 | 0.001801 |
| transform_view.test | RUN | 0.401283 | 1.124305 | 1.270167 | 0.001891 | 0.001729 | 0.001858 |
| identity_view.test | RUN | 0.374228 | 1.018612 | 1.279841 | 0.001652 | 0.001549 | 0.001612 |
| vector_comparison.test | RUN | 0.225184 | 0.578221 | 0.713086 | 0.001559 | 0.001704 | 0.001573 |
| vector_construction.test | RUN | 0.227114 | 0.530769 | 0.678219 | 0.001364 | 0.001750 | 0.001798 |
| vector_conversion.test | RUN | 0.627378 | 2.292035 | 3.070310 | 0.001702 | 0.001889 | 0.001680 |
| vector_copy.test | RUN | 0.333738 | 0.990504 | 1.234031 | 0.001493 | 0.001802 | 0.001735 |
| vector_iterator.test | RUN | 0.216457 | 0.562729 | 0.674623 | 0.001832 | 0.001750 | 0.001780 |
| vector_make.test | RUN | 0.239212 | 0.583956 | 0.727890 | 0.001469 | 0.001542 | 0.001728 |
| vector_misc.test | RUN | 0.299208 | 0.747414 | 0.866087 | 0.001498 | 0.001711 | 0.001829 |
| vector_move.test | RUN | 0.222951 | 0.567819 | 0.713388 | 0.001585 | 0.001569 | 0.001438 |
| vector_mutate.test | RUN | 0.202381 | 0.465307 | 0.599997 | 0.001520 | 0.001780 | 0.001800 |
| vector_n.test | RUN | 0.257348 | 0.581265 | 0.841883 | 0.001908 | 0.001945 | 0.001788 |
| vector_nest.test | RUN | 0.907853 | 3.784941 | 4.552420 | 0.001772 | 0.001835 | 0.001393 |
| vector_hash.test | RUN | 0.300980 | 1.014366 | 0.929089 | 0.001842 | 0.001749 | 0.001642 |
| vector_tie.test | RUN | 0.214690 | 0.514719 | 0.671658 | 0.001790 | 0.001884 | 0.001725 |
| vector_traits__maybe_variadic.test | RUN | 0.244937 | 0.635623 | 0.733952 | 0.001840 | 0.001832 | 0.001721 |
| vector_traits__no_variadic.test | RUN | 0.253094 | 0.631360 | 0.736958 | 0.001483 | 0.001607 | 0.001453 |
| vector_value_at.test | RUN | 0.211689 | 0.494649 | 0.635174 | 0.001484 | 0.001625 | 0.001414 |
| zip_view.test | RUN | 0.438560 | 1.160555 | 1.650386 | 0.001672 | 0.001620 | 0.001710 |
| zip_view2.test | RUN | 0.351384 | 0.885119 | 1.212585 | 0.001772 | 0.001757 | 0.001539 |
| zip_view_ignore.test | RUN | 0.331931 | 0.812630 | 1.096799 | 0.001773 | 0.001310 | 0.001788 |
| repetitive_view.test | RUN | 0.563713 | 1.501823 | 2.073807 | 0.001538 | 0.001682 | 0.001706 |
| deduce_sequence.test | RUN | 0.277940 | 0.626098 | 0.858997 | 0.001680 | 0.001606 | 0.001705 |
| adapt_adt_named.test | RUN | 0.327043 | 0.888335 | 1.049593 | 0.001627 | 0.001809 | 0.001798 |
| adapt_adt_named_empty.test | RUN | 0.281160 | 0.700772 | 0.864266 | 0.001559 | 0.001684 | 0.001594 |
| adapt_adt.test | RUN | 0.349687 | 1.173318 | 1.218712 | 0.001568 | 0.001912 | 0.001650 |
| adapt_adt_empty.test | RUN | 0.273980 | 0.722882 | 0.879451 | 0.001730 | 0.001772 | 0.001599 |
| adapt_assoc_adt_named.test | RUN | 0.354496 | 0.922972 | 1.129375 | 0.001595 | 0.001924 | 0.001880 |
| adapt_assoc_adt_named_empty.test | RUN | 0.279347 | 0.702748 | 0.858679 | 0.001708 | 0.001910 | 0.001706 |
| adapt_assoc_adt.test | RUN | 0.363175 | 0.964571 | 1.146450 | 0.001642 | 0.001910 | 0.001750 |
| adapt_assoc_adt_empty.test | RUN | 0.276846 | 0.707053 | 0.875853 | 0.001598 | 0.001638 | 0.001805 |
| adapt_assoc_struct_named.test | RUN | 0.354284 | 0.908147 | 1.116553 | 0.001488 | 0.001717 | 0.001438 |
| adapt_assoc_struct_named_empty.test | RUN | 0.273782 | 0.696312 | 0.868251 | 0.001864 | 0.001774 | 0.001558 |
| adapt_assoc_struct.test | RUN | 0.308475 | 0.852423 | 1.039435 | 0.001743 | 0.001878 | 0.001849 |
| adapt_assoc_struct_empty.test | RUN | 0.272099 | 0.702599 | 0.871078 | 0.001390 | 0.001778 | 0.001480 |
| adapt_assoc_tpl_adt.test | RUN | 0.377046 | 0.983222 | 1.228457 | 0.001564 | 0.001875 | 0.001535 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.278868 | 0.699859 | 0.881468 | 0.001744 | 0.001888 | 0.001706 |
| adapt_assoc_tpl_struct.test | RUN | 0.298134 | 0.822260 | 1.007707 | 0.001714 | 0.001514 | 0.001796 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.274668 | 0.725263 | 0.862801 | 0.001770 | 0.001760 | 0.001330 |
| adapt_struct_named.test | RUN | 0.311873 | 0.864500 | 1.030829 | 0.001698 | 0.001890 | 0.001590 |
| adapt_struct_named_empty.test | RUN | 0.274698 | 0.702577 | 0.862989 | 0.001681 | 0.001762 | 0.001665 |
| adapt_struct.test | RUN | 0.332617 | 0.975232 | 1.141979 | 0.001622 | 0.001900 | 0.001772 |
| adapt_struct_empty.test | RUN | 0.268774 | 0.724686 | 0.879820 | 0.001889 | 0.001749 | 0.001436 |
| adapt_tpl_adt.test | RUN | 0.347109 | 1.135100 | 1.194571 | 0.001766 | 0.001780 | 0.001742 |
| adapt_tpl_adt_empty.test | RUN | 0.276179 | 0.712278 | 0.884180 | 0.001768 | 0.001876 | 0.001516 |
| adapt_tpl_struct.test | RUN | 0.294687 | 0.805021 | 0.954597 | 0.001742 | 0.001614 | 0.001384 |
| adapt_tpl_struct_empty.test | RUN | 0.273098 | 0.727831 | 0.882822 | 0.001548 | 0.001925 | 0.001689 |
| adt_attribute_proxy.test | RUN | 0.317181 | 0.713049 | 0.912015 | 0.001727 | 0.001888 | 0.001626 |
| define_struct.test | RUN | 0.371084 | 0.989911 | 1.241149 | 0.001776 | 0.001947 | 0.001827 |
| define_struct_empty.test | RUN | 0.327005 | 0.809403 | 1.005405 | 0.001770 | 0.001751 | 0.001692 |
| define_struct_move.test | RUN | 0.208540 | 0.455864 | 0.602069 | 0.001691 | 0.001587 | 0.001453 |
| define_struct_inline.test | RUN | 0.393986 | 1.138145 | 1.303490 | 0.001525 | 0.001628 | 0.001724 |
| define_struct_inline_empty.test | RUN | 0.326283 | 0.794611 | 1.016021 | 0.001620 | 0.001815 | 0.001753 |
| define_struct_inline_move.test | RUN | 0.215304 | 0.459150 | 0.620164 | 0.001434 | 0.001783 | 0.001978 |
| define_assoc_struct.test | RUN | 0.358182 | 0.940948 | 1.164591 | 0.001835 | 0.001927 | 0.001645 |
| define_assoc_struct_empty.test | RUN | 0.329126 | 0.797152 | 0.997211 | 0.001629 | 0.001752 | 0.001730 |
| define_assoc_struct_move.test | RUN | 0.210318 | 0.456853 | 0.587294 | 0.001736 | 0.001726 | 0.001687 |
| define_tpl_struct.test | RUN | 0.357141 | 0.960738 | 1.144278 | 0.001711 | 0.001660 | 0.001732 |
| define_tpl_struct_empty.test | RUN | 0.333424 | 0.793048 | 0.990582 | 0.001755 | 0.001886 | 0.001896 |
| define_tpl_struct_move.test | RUN | 0.213650 | 0.466377 | 0.612630 | 0.001542 | 0.001831 | 0.001509 |
| define_tpl_struct_inline.test | RUN | 0.394881 | 1.093128 | 1.269135 | 0.001814 | 0.001839 | 0.001697 |
| define_tpl_struct_inline_empty.test | RUN | 0.333860 | 0.807935 | 0.994280 | 0.001579 | 0.001767 | 0.001722 |
| define_tpl_struct_inline_move.test | RUN | 0.213320 | 0.467269 | 0.625263 | 0.001679 | 0.001670 | 0.001644 |
| define_assoc_tpl_struct.test | RUN | 0.367861 | 0.952241 | 1.156422 | 0.001796 | 0.001882 | 0.001760 |
| define_assoc_tpl_struct_empty.test | RUN | 0.330462 | 0.814658 | 0.986749 | 0.001626 | 0.001871 | 0.001838 |
| define_assoc_tpl_struct_move.test | RUN | 0.213148 | 0.463773 | 0.621017 | 0.001602 | 0.001615 | 0.001784 |
| std_tuple.test | RUN | 0.218263 | 0.528522 | 0.663428 | 0.001450 | 0.001593 | 0.001644 |
| std_tuple_iterator.test | RUN | 0.218777 | 0.543392 | 0.687189 | 0.001588 | 0.001890 | 0.001549 |
| ref_vector.test | RUN | 0.246684 | 0.562929 | 0.700956 | 0.001600 | 0.001918 | 0.001751 |
| flatten_view.test | RUN | 0.265892 | 0.689269 | 0.861206 | 0.001611 | 0.001728 | 0.001706 |
| github-159.test | COMPILE | 0.119039 | 0.247432 | 0.313204 | — | — | — |
| github-176.test | RUN | 0.245069 | 0.602994 | 0.707994 | 0.001711 | 0.001694 | 0.001650 |
| size.test | COMPILE | 0.209508 | 0.431043 | 0.573763 | — | — | — |
| fused.test | RUN | 0.290118 | 0.647757 | 0.859105 | 0.001766 | 0.001757 | 0.001644 |
| fused_function_object.test | RUN | 0.215800 | 0.510602 | 0.655583 | 0.001368 | 0.001682 | 0.001793 |
| fused_procedure.test | RUN | 0.283952 | 0.619116 | 0.825790 | 0.001658 | 0.001860 | 0.001663 |
| unfused.test | RUN | 0.228658 | 0.524781 | 0.638531 | 0.001631 | 0.001762 | 0.001357 |
| unfused_typed.test | RUN | 0.227539 | 0.539910 | 0.682217 | 0.001626 | 0.001890 | 0.001712 |
| make_fused.test | RUN | 0.291663 | 0.640947 | 0.851847 | 0.001632 | 0.001819 | 0.001681 |
| make_fused_function_object.test | RUN | 0.218841 | 0.496000 | 0.636703 | 0.001556 | 0.001553 | 0.001826 |
| make_fused_procedure.test | RUN | 0.288281 | 0.626439 | 0.825499 | 0.001752 | 0.001701 | 0.001640 |
| make_unfused.test | RUN | 0.219866 | 0.492076 | 0.650110 | 0.001669 | 0.001882 | 0.001660 |
| invoke.test | RUN | 0.560155 | 1.817239 | 2.244929 | 0.001563 | 0.001641 | 0.001636 |
| invoke_function_object.test | RUN | 0.268551 | 0.650864 | 0.842879 | 0.001765 | 0.001723 | 0.001775 |
| invoke_procedure.test | RUN | 0.451145 | 1.376105 | 1.663342 | 0.001643 | 0.001582 | 0.001815 |
| swap.test | RUN | 0.335868 | 0.802211 | 1.100296 | 0.001563 | 0.001839 | 0.001773 |
| is_sequence.test | COMPILE | 0.057805 | 0.121665 | 0.137145 | — | — | — |
| is_view.test | COMPILE | 0.059536 | 0.121897 | 0.137871 | — | — | — |
| pair_deque.test | COMPILE | 0.123039 | 0.265061 | 0.348761 | — | — | — |
| pair_list.test | COMPILE | 0.122321 | 0.262807 | 0.333647 | — | — | — |
| pair_map.test | COMPILE | 0.127559 | 0.264298 | 0.318021 | — | — | — |
| pair_set.test | COMPILE | 0.127304 | 0.265191 | 0.336069 | — | — | — |
| pair_vector.test | COMPILE | 0.126598 | 0.265020 | 0.318548 | — | — | — |
| pair_nest.test | COMPILE | 0.049767 | 0.106500 | 0.130207 | — | — | — |
| index_sequence.test | COMPILE | 0.044654 | 0.079210 | 0.101485 | — | — | — |
| and.test | COMPILE | 0.035305 | 0.060752 | 0.066364 | — | — | — |
| tag_of.test | COMPILE | 0.057953 | 0.114369 | 0.127040 | — | — | — |
| unused.test | COMPILE | 0.032383 | 0.076508 | 0.076978 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.056757 | 0.108191 | 0.133850 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.039065 | 0.087378 | 0.126065 | — | — | — |
| quick.test | RUN | 0.165464 | 0.375489 | 0.406492 | 0.000588 | 0.001330 | 0.001166 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998× | 0.995×, 1.001× | 1.001× |
| clang | 1.000× | 0.995×, 1.005× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45272062060).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.001034s | 0.001034s | 0.000997s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.001008s | 0.001015s | 0.000998s | byte equality observed |
| adapt_adt_named.test | 10 | 0.001013s | 0.001029s | 0.001014s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.001002s | 0.001042s | 0.001022s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.001016s | 0.001045s | 0.001035s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.001011s | 0.001006s | 0.001036s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.001011s | 0.001023s | 0.001047s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.001016s | 0.001004s | 0.001047s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.001043s | 0.001033s | 0.001063s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.001018s | 0.001028s | 0.001024s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.001023s | 0.000995s | 0.001053s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.001005s | 0.001014s | 0.001027s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.001032s | 0.000998s | 0.001043s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.001022s | 0.001028s | 0.001043s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.001014s | 0.001038s | 0.001037s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.001008s | 0.001049s | 0.001040s | byte equality observed |
| adapt_struct.test | 10 | 0.001048s | 0.001031s | 0.001045s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.001018s | 0.000989s | 0.001032s | byte equality observed |
| adapt_struct_named.test | 10 | 0.001043s | 0.000999s | 0.001060s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.001008s | 0.001028s | 0.001037s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.001029s | 0.001014s | 0.001004s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.001049s | 0.000987s | 0.001000s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.001031s | 0.001007s | 0.001012s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.001031s | 0.000991s | 0.001018s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.001012s | 0.000992s | 0.000986s | byte equality observed |
| all.test | 10 | 0.000992s | 0.001010s | 0.000983s | byte equality observed |
| any.test | 10 | 0.001016s | 0.000985s | 0.001009s | byte equality observed |
| array.test | 10 | 0.001001s | 0.000961s | 0.001007s | byte equality observed |
| as_deque.test | 10 | 0.001004s | 0.000977s | 0.000985s | byte equality observed |
| as_list.test | 10 | 0.001028s | 0.001036s | 0.001035s | byte equality observed |
| as_map.test | 10 | 0.001028s | 0.001017s | 0.001032s | byte equality observed |
| as_map_assoc.test | 10 | 0.001027s | 0.001021s | 0.001023s | byte equality observed |
| as_set.test | 10 | 0.001017s | 0.001025s | 0.001043s | byte equality observed |
| as_vector.test | 10 | 0.001048s | 0.001055s | 0.001033s | byte equality observed |
| back_extended_deque.test | 10 | 0.000992s | 0.000978s | 0.000992s | byte equality observed |
| boost_array.test | 10 | 0.000996s | 0.000995s | 0.000975s | byte equality observed |
| boost_tuple.test | 10 | 0.001018s | 0.001031s | 0.001023s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.001006s | 0.001009s | 0.000998s | byte equality observed |
| clear.test | 10 | 0.001012s | 0.001012s | 0.001004s | byte equality observed |
| cons.test | 10 | 0.001037s | 0.001035s | 0.001063s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.000999s | 0.001003s | 0.000979s | byte equality observed |
| convert_deque.test | 10 | 0.001005s | 0.001024s | 0.000992s | byte equality observed |
| convert_list.test | 10 | 0.001023s | 0.001007s | 0.001001s | byte equality observed |
| convert_std_pair.test | 10 | 0.000993s | 0.001012s | 0.000983s | byte equality observed |
| convert_std_tuple.test | 10 | 0.001007s | 0.001001s | 0.000984s | byte equality observed |
| convert_vector.test | 10 | 0.001008s | 0.000962s | 0.000994s | byte equality observed |
| copy.test | 10 | 0.000998s | 0.000998s | 0.000999s | byte equality observed |
| count.test | 10 | 0.000998s | 0.000972s | 0.000984s | byte equality observed |
| count_if.test | 10 | 0.000969s | 0.000992s | 0.000996s | byte equality observed |
| deduce_sequence.test | 10 | 0.000994s | 0.001032s | 0.001021s | byte equality observed |
| define_assoc_struct.test | 10 | 0.001030s | 0.001025s | 0.001016s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.001038s | 0.001018s | 0.001025s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.000993s | 0.000985s | 0.000990s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.001054s | 0.001019s | 0.001017s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.001021s | 0.000999s | 0.001023s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000996s | 0.001008s | 0.000999s | byte equality observed |
| define_struct.test | 10 | 0.001020s | 0.001024s | 0.001034s | byte equality observed |
| define_struct_empty.test | 10 | 0.000997s | 0.001002s | 0.001016s | byte equality observed |
| define_struct_inline.test | 10 | 0.001046s | 0.001000s | 0.001004s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.001026s | 0.000995s | 0.001027s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.001018s | 0.000974s | 0.000985s | byte equality observed |
| define_struct_move.test | 10 | 0.000997s | 0.000980s | 0.001010s | byte equality observed |
| define_tpl_struct.test | 10 | 0.001026s | 0.001010s | 0.001016s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.001041s | 0.001027s | 0.001019s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.001033s | 0.001025s | 0.001016s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.001019s | 0.001004s | 0.001012s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.001003s | 0.000976s | 0.000990s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000995s | 0.000973s | 0.001025s | byte equality observed |
| deque_comparison.test | 10 | 0.001011s | 0.000992s | 0.000991s | byte equality observed |
| deque_construction.test | 10 | 0.001016s | 0.000965s | 0.001017s | byte equality observed |
| deque_copy.test | 10 | 0.001005s | 0.000984s | 0.000972s | byte equality observed |
| deque_hash.test | 10 | 0.001025s | 0.001017s | 0.000985s | byte equality observed |
| deque_iterator.test | 10 | 0.000994s | 0.001000s | 0.000983s | byte equality observed |
| deque_make.test | 10 | 0.001000s | 0.001028s | 0.000989s | byte equality observed |
| deque_misc.test | 10 | 0.001014s | 0.001020s | 0.001006s | byte equality observed |
| deque_move.test | 10 | 0.001019s | 0.001013s | 0.001004s | byte equality observed |
| deque_mutate.test | 10 | 0.000983s | 0.000989s | 0.000999s | byte equality observed |
| deque_nest.test | 10 | 0.000980s | 0.000984s | 0.000999s | byte equality observed |
| deque_tie.test | 10 | 0.001002s | 0.000977s | 0.000992s | byte equality observed |
| deque_value_at.test | 10 | 0.000998s | 0.001009s | 0.001006s | byte equality observed |
| erase.test | 10 | 0.001025s | 0.001020s | 0.001005s | byte equality observed |
| erase_key.test | 10 | 0.001033s | 0.001021s | 0.001053s | byte equality observed |
| filter.test | 10 | 0.001047s | 0.000990s | 0.001023s | byte equality observed |
| filter_if.test | 10 | 0.001059s | 0.001009s | 0.001023s | byte equality observed |
| filter_view.test | 10 | 0.001020s | 0.000990s | 0.001012s | byte equality observed |
| find.test | 10 | 0.001027s | 0.001012s | 0.001012s | byte equality observed |
| find_if.test | 10 | 0.001018s | 0.001009s | 0.001001s | byte equality observed |
| flatten.test | 10 | 0.000998s | 0.001006s | 0.001010s | byte equality observed |
| flatten_view.test | 10 | 0.001015s | 0.001004s | 0.000991s | byte equality observed |
| fold.test | 10 | 0.001018s | 0.001033s | 0.001009s | byte equality observed |
| for_each.test | 10 | 0.001039s | 0.001022s | 0.001018s | byte equality observed |
| front_extended_deque.test | 10 | 0.001002s | 0.000999s | 0.000997s | byte equality observed |
| fused.test | 10 | 0.000994s | 0.000996s | 0.001009s | byte equality observed |
| fused_function_object.test | 10 | 0.001007s | 0.000969s | 0.001005s | byte equality observed |
| fused_procedure.test | 10 | 0.000980s | 0.000979s | 0.000991s | byte equality observed |
| github-176.test | 10 | 0.000998s | 0.000993s | 0.000995s | byte equality observed |
| hash.test | 10 | 0.000995s | 0.001011s | 0.000984s | byte equality observed |
| identity_view.test | 10 | 0.001019s | 0.001035s | 0.001023s | byte equality observed |
| insert.test | 10 | 0.001020s | 0.001042s | 0.001020s | byte equality observed |
| insert_range.test | 10 | 0.001031s | 0.001035s | 0.001032s | byte equality observed |
| invoke.test | 10 | 0.000999s | 0.001001s | 0.000986s | byte equality observed |
| invoke_function_object.test | 10 | 0.001028s | 0.000992s | 0.001011s | byte equality observed |
| invoke_procedure.test | 10 | 0.000990s | 0.000989s | 0.000980s | byte equality observed |
| io.test | 10 | 0.001145s | 0.001105s | 0.001142s | byte equality observed |
| iter_fold.test | 10 | 0.001018s | 0.001001s | 0.001027s | byte equality observed |
| iterator_range.test | 10 | 0.001031s | 0.001018s | 0.001039s | byte equality observed |
| join.test | 10 | 0.001009s | 0.000983s | 0.000988s | byte equality observed |
| joint_view.test | 10 | 0.001064s | 0.001068s | 0.001058s | byte equality observed |
| list_comparison.test | 10 | 0.000988s | 0.000987s | 0.000996s | byte equality observed |
| list_construction.test | 10 | 0.000991s | 0.000973s | 0.000985s | byte equality observed |
| list_copy.test | 10 | 0.001022s | 0.000970s | 0.001027s | byte equality observed |
| list_hash.test | 10 | 0.001029s | 0.000984s | 0.001008s | byte equality observed |
| list_iterator.test | 10 | 0.001020s | 0.000999s | 0.000989s | byte equality observed |
| list_make.test | 10 | 0.001027s | 0.001001s | 0.000996s | byte equality observed |
| list_misc.test | 8 | 0.001013s | 0.001012s | 0.000976s | byte equality observed |
| list_mutate.test | 10 | 0.001024s | 0.001003s | 0.001008s | byte equality observed |
| list_nest.test | 10 | 0.001017s | 0.001004s | 0.001011s | byte equality observed |
| list_tie.test | 10 | 0.001007s | 0.000990s | 0.001003s | byte equality observed |
| list_value_at.test | 10 | 0.001019s | 0.001022s | 0.001019s | byte equality observed |
| make_fused.test | 10 | 0.000983s | 0.001027s | 0.001014s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000994s | 0.000988s | 0.001031s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000977s | 0.001021s | 0.000991s | byte equality observed |
| make_list.test | 10 | 0.000992s | 0.001009s | 0.001018s | byte equality observed |
| make_unfused.test | 10 | 0.000997s | 0.001007s | 0.001007s | byte equality observed |
| make_vector.test | 10 | 0.001012s | 0.001063s | 0.001008s | byte equality observed |
| map.test | 10 | 0.001053s | 0.001049s | 0.001019s | byte equality observed |
| map_comparison.test | 10 | 0.000985s | 0.000984s | 0.001010s | byte equality observed |
| map_construction.test | 10 | 0.001025s | 0.001020s | 0.000990s | byte equality observed |
| map_copy.test | 10 | 0.001008s | 0.001004s | 0.000987s | byte equality observed |
| map_misc.test | 10 | 0.001009s | 0.001013s | 0.000987s | byte equality observed |
| map_move.test | 10 | 0.001012s | 0.001041s | 0.001025s | byte equality observed |
| map_mutate.test | 10 | 0.001001s | 0.001000s | 0.001007s | byte equality observed |
| map_tie.test | 10 | 0.001001s | 0.001007s | 0.001013s | byte equality observed |
| move.test | 10 | 0.000996s | 0.001003s | 0.001003s | byte equality observed |
| nil.test | 10 | 0.001011s | 0.000989s | 0.001042s | byte equality observed |
| none.test | 10 | 0.000989s | 0.001017s | 0.001056s | byte equality observed |
| nview.test | 10 | 0.001011s | 0.001005s | 0.001028s | byte equality observed |
| pop_back.test | 10 | 0.001039s | 0.001045s | 0.001039s | byte equality observed |
| pop_front.test | 10 | 0.001018s | 0.001052s | 0.001055s | byte equality observed |
| push_back.test | 10 | 0.001043s | 0.001042s | 0.001029s | byte equality observed |
| push_front.test | 10 | 0.001064s | 0.001035s | 0.001048s | byte equality observed |
| quick.test | 10 | 0.000447s | 0.001001s | 0.000993s | byte equality observed |
| ref_vector.test | 10 | 0.001024s | 0.000989s | 0.000991s | byte equality observed |
| remove.test | 10 | 0.001046s | 0.001055s | 0.001055s | byte equality observed |
| remove_if.test | 10 | 0.001033s | 0.001034s | 0.001032s | byte equality observed |
| repetitive_view.test | 10 | 0.001014s | 0.000986s | 0.000990s | byte equality observed |
| replace.test | 10 | 0.001008s | 0.001010s | 0.001040s | byte equality observed |
| replace_if.test | 10 | 0.001020s | 0.001018s | 0.001031s | byte equality observed |
| reverse.test | 10 | 0.001047s | 0.001041s | 0.001020s | byte equality observed |
| reverse_fold.test | 10 | 0.001014s | 0.001027s | 0.001014s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.001010s | 0.001019s | 0.001024s | byte equality observed |
| reverse_view.test | 10 | 0.001005s | 0.001004s | 0.001011s | byte equality observed |
| segmented_find.test | 10 | 0.000998s | 0.000999s | 0.000991s | byte equality observed |
| segmented_find_if.test | 10 | 0.000992s | 0.000998s | 0.001046s | byte equality observed |
| segmented_fold.test | 10 | 0.001022s | 0.001014s | 0.001024s | byte equality observed |
| segmented_for_each.test | 10 | 0.001041s | 0.001029s | 0.001037s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.001036s | 0.001018s | 0.001036s | byte equality observed |
| set.test | 10 | 0.001036s | 0.001005s | 0.001020s | byte equality observed |
| single_view.test | 10 | 0.001060s | 0.001027s | 0.001042s | byte equality observed |
| std_array.test | 10 | 0.000992s | 0.001000s | 0.000990s | byte equality observed |
| std_pair.test | 10 | 0.001023s | 0.001019s | 0.001009s | byte equality observed |
| std_tuple.test | 10 | 0.001013s | 0.001012s | 0.001023s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.001003s | 0.001005s | 0.000996s | byte equality observed |
| swap.test | 10 | 0.001001s | 0.000991s | 0.001018s | byte equality observed |
| transform.test | 10 | 0.001049s | 0.001005s | 0.001013s | byte equality observed |
| transform_view.test | 10 | 0.001059s | 0.001065s | 0.001030s | byte equality observed |
| tuple_comparison.test | 10 | 0.001005s | 0.000995s | 0.001043s | byte equality observed |
| tuple_construction.test | 10 | 0.001003s | 0.000990s | 0.001009s | byte equality observed |
| tuple_conversion.test | 10 | 0.001006s | 0.001017s | 0.001042s | byte equality observed |
| tuple_copy.test | 10 | 0.001027s | 0.001000s | 0.001014s | byte equality observed |
| tuple_element.test | 9 | 0.001015s | 0.001046s | 0.000981s | byte equality observed |
| tuple_hash.test | 10 | 0.001015s | 0.001001s | 0.001024s | byte equality observed |
| tuple_make.test | 10 | 0.001026s | 0.001012s | 0.001022s | byte equality observed |
| tuple_misc.test | 10 | 0.000994s | 0.001001s | 0.000994s | byte equality observed |
| tuple_mutate.test | 10 | 0.000993s | 0.001001s | 0.001014s | byte equality observed |
| tuple_nest.test | 10 | 0.001012s | 0.001021s | 0.001015s | byte equality observed |
| tuple_tie.test | 10 | 0.000994s | 0.001034s | 0.000976s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.001001s | 0.001006s | 0.000987s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.001024s | 0.001015s | 0.000983s | byte equality observed |
| unfused.test | 10 | 0.000994s | 0.000980s | 0.000999s | byte equality observed |
| unfused_typed.test | 10 | 0.000996s | 0.001018s | 0.001000s | byte equality observed |
| vector_comparison.test | 10 | 0.000999s | 0.000988s | 0.000993s | byte equality observed |
| vector_construction.test | 10 | 0.000990s | 0.001009s | 0.000973s | byte equality observed |
| vector_conversion.test | 10 | 0.000986s | 0.000991s | 0.000974s | byte equality observed |
| vector_copy.test | 10 | 0.001001s | 0.000992s | 0.000991s | byte equality observed |
| vector_hash.test | 10 | 0.000994s | 0.000991s | 0.000997s | byte equality observed |
| vector_iterator.test | 10 | 0.000997s | 0.000982s | 0.001025s | byte equality observed |
| vector_make.test | 10 | 0.001000s | 0.001043s | 0.001026s | byte equality observed |
| vector_misc.test | 10 | 0.000996s | 0.001008s | 0.000997s | byte equality observed |
| vector_move.test | 10 | 0.001026s | 0.001022s | 0.001023s | byte equality observed |
| vector_mutate.test | 10 | 0.000995s | 0.000991s | 0.001023s | byte equality observed |
| vector_n.test | 10 | 0.001032s | 0.001021s | 0.001015s | byte equality observed |
| vector_nest.test | 10 | 0.000982s | 0.000988s | 0.001016s | byte equality observed |
| vector_tie.test | 10 | 0.000986s | 0.001030s | 0.000983s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000980s | 0.001014s | 0.001036s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.001002s | 0.001012s | 0.001007s | byte equality observed |
| vector_value_at.test | 10 | 0.001005s | 0.000993s | 0.000997s | byte equality observed |
| zip.test | 10 | 0.000988s | 0.001013s | 0.000982s | byte equality observed |
| zip2.test | 10 | 0.001000s | 0.000987s | 0.001001s | byte equality observed |
| zip_ignore.test | 10 | 0.000998s | 0.000998s | 0.000998s | byte equality observed |
| zip_view.test | 10 | 0.000986s | 0.001002s | 0.001014s | byte equality observed |
| zip_view2.test | 10 | 0.000998s | 0.001015s | 0.000996s | byte equality observed |
| zip_view_ignore.test | 10 | 0.000977s | 0.000988s | 0.000995s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45272062060).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
