# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.041396 | 0.083832 | 0.122270 | — | — | — |
| complex_h.test | COMPILE | 0.168136 | 0.352216 | 0.494023 | — | — | — |
| mp_size.test | RUN | 0.198084 | 1.195007 | 0.652209 | 0.001599 | 0.001746 | 0.001645 |
| mp_size_2.test | RUN | 0.017119 | 0.040809 | 0.056530 | 0.000689 | 0.000715 | 0.001454 |
| mp_empty.test | RUN | 0.191657 | 0.727985 | 0.595987 | 0.001543 | 0.001765 | 0.001498 |
| mp_empty_2.test | RUN | 0.017763 | 0.043520 | 0.058454 | 0.000612 | 0.000637 | 0.001567 |
| mp_assign.test | RUN | 0.217790 | 1.534091 | 0.813929 | 0.001475 | 0.001711 | 0.001435 |
| mp_assign_2.test | RUN | 0.017106 | 0.042215 | 0.057816 | 0.000613 | 0.000735 | 0.001517 |
| mp_clear.test | RUN | 0.187091 | 0.655494 | 0.630086 | 0.001685 | 0.001685 | 0.001714 |
| mp_clear_2.test | RUN | 0.017581 | 0.042381 | 0.058088 | 0.000679 | 0.000724 | 0.001554 |
| mp_front.test | RUN | 0.201393 | 1.061792 | 0.720409 | 0.001692 | 0.001593 | 0.001502 |
| mp_front_2.test | RUN | 0.018205 | 0.041527 | 0.058326 | 0.000645 | 0.000635 | 0.001456 |
| mp_pop_front.test | RUN | 0.197581 | 1.116334 | 0.680106 | 0.001638 | 0.001553 | 0.001780 |
| mp_pop_front_2.test | RUN | 0.017376 | 0.041527 | 0.057808 | 0.000727 | 0.000748 | 0.001689 |
| mp_second.test | RUN | 0.198912 | 0.689955 | 0.667002 | 0.001580 | 0.001606 | 0.001635 |
| mp_second_2.test | RUN | 0.017294 | 0.042381 | 0.057057 | 0.000609 | 0.000774 | 0.001667 |
| mp_third.test | RUN | 0.187725 | 0.639866 | 0.635071 | 0.001368 | 0.001676 | 0.001558 |
| mp_third_2.test | RUN | 0.017354 | 0.043264 | 0.054883 | 0.000699 | 0.000697 | 0.001515 |
| mp_push_front.test | RUN | 0.260770 | 2.370282 | 1.167956 | 0.001655 | 0.001632 | 0.001656 |
| mp_push_front_2.test | RUN | 0.017506 | 0.042680 | 0.056175 | 0.000654 | 0.000767 | 0.001408 |
| mp_push_back.test | RUN | 0.259096 | 2.372380 | 1.158952 | 0.001456 | 0.001650 | 0.001455 |
| mp_push_back_2.test | RUN | 0.017352 | 0.040348 | 0.056764 | 0.000710 | 0.000729 | 0.001724 |
| mp_rename.test | RUN | 0.245221 | 2.172901 | 0.967635 | 0.001598 | 0.001732 | 0.001552 |
| mp_rename_2.test | RUN | 0.017132 | 0.043304 | 0.058507 | 0.000594 | 0.000762 | 0.001593 |
| mp_append.test | RUN | 0.247653 | 2.492553 | 1.077418 | 0.001666 | 0.001682 | 0.001762 |
| mp_append_2.test | RUN | 0.589851 | 5.546573 | 1.430560 | 0.001668 | 0.001563 | 0.001307 |
| mp_append_3.test | RUN | 0.017926 | 0.041126 | 0.056918 | 0.000610 | 0.000733 | 0.001647 |
| mp_append_sf.test | RUN | 0.185060 | 0.593597 | 0.588638 | 0.001812 | 0.001591 | 0.001451 |
| mp_replace_front.test | RUN | 0.227950 | 1.763970 | 0.893965 | 0.001494 | 0.001828 | 0.001510 |
| mp_replace_front_2.test | RUN | 0.018216 | 0.040227 | 0.056877 | 0.000468 | 0.000758 | 0.001657 |
| mp_replace_second.test | RUN | 0.224665 | 1.123642 | 0.790935 | 0.001493 | 0.001532 | 0.001627 |
| mp_replace_second_2.test | RUN | 0.018880 | 0.041887 | 0.058093 | 0.000594 | 0.000735 | 0.001618 |
| mp_replace_third.test | RUN | 0.210090 | 0.919300 | 0.733811 | 0.001497 | 0.001449 | 0.001655 |
| mp_replace_third_2.test | RUN | 0.017965 | 0.040981 | 0.057008 | 0.000624 | 0.000632 | 0.001569 |
| mp_apply_q.test | RUN | 0.235971 | 2.158730 | 0.960268 | 0.001563 | 0.001712 | 0.001277 |
| mp_apply_q_sf.test | RUN | 0.186077 | 0.614370 | 0.592008 | 0.001630 | 0.001543 | 0.001578 |
| mp_is_list.test | RUN | 0.190340 | 0.727272 | 0.626983 | 0.001475 | 0.001613 | 0.001620 |
| mp_list_c.test | RUN | 0.196012 | 0.888497 | 0.702470 | 0.001524 | 0.001684 | 0.001637 |
| mp_transform_front.test | RUN | 0.222222 | 1.760869 | 0.877292 | 0.001652 | 0.001660 | 0.001600 |
| mp_transform_front_2.test | RUN | 0.017361 | 0.041966 | 0.054629 | 0.000681 | 0.000680 | 0.001648 |
| mp_transform_second.test | RUN | 0.216019 | 1.511840 | 0.777920 | 0.001534 | 0.001544 | 0.001580 |
| mp_transform_second_2.test | RUN | 0.017089 | 0.041462 | 0.058140 | 0.000683 | 0.000771 | 0.001491 |
| mp_transform_third.test | RUN | 0.200273 | 1.141295 | 0.692336 | 0.001549 | 0.001691 | 0.001673 |
| mp_transform_third_2.test | RUN | 0.017219 | 0.042154 | 0.058886 | 0.000628 | 0.000726 | 0.001402 |
| mp_list_v.test | RUN | 0.017268 | 0.041909 | 0.056248 | 0.000662 | 0.000707 | 0.001682 |
| mp_rename_v.test | RUN | 0.017983 | 0.041264 | 0.055800 | 0.000644 | 0.000745 | 0.001581 |
| mp_is_value_list.test | RUN | 0.181289 | 0.444002 | 0.564143 | 0.001701 | 0.001589 | 0.001646 |
| mp_transform.test | RUN | 0.473257 | 3.704374 | 1.821230 | 0.001766 | 0.001545 | 0.001876 |
| mp_transform_2.test | RUN | 0.173151 | 0.413053 | 0.534227 | 0.001468 | 0.001740 | 0.001598 |
| mp_transform_q.test | RUN | 0.450729 | 3.515470 | 1.780115 | 0.001730 | 0.001731 | 0.001740 |
| mp_transform_q_2.test | RUN | 0.468849 | 1.103136 | 2.289428 | 0.001574 | 0.001850 | 0.001492 |
| mp_transform_sf.test | RUN | 0.196282 | 0.626276 | 0.634818 | 0.001671 | 0.001770 | 0.001640 |
| mp_transform_if.test | RUN | 0.242711 | 1.755268 | 0.945703 | 0.001539 | 0.001621 | 0.001695 |
| mp_transform_if_q.test | RUN | 0.243289 | 1.771912 | 0.967217 | 0.001538 | 0.001509 | 0.001621 |
| mp_filter.test | RUN | 0.210988 | 1.030220 | 0.726565 | 0.001554 | 0.001715 | 0.001598 |
| mp_fill.test | RUN | 0.203611 | 0.783104 | 0.681904 | 0.001624 | 0.001606 | 0.001656 |
| mp_fill_2.test | RUN | 0.030810 | 0.064115 | 0.095527 | 0.000645 | 0.000717 | 0.001632 |
| mp_count.test | RUN | 0.383613 | 1.890874 | 1.095251 | 0.001658 | 0.001561 | 0.001546 |
| mp_count_if.test | RUN | 0.391849 | 1.925022 | 1.188061 | 0.001482 | 0.001720 | 0.001666 |
| mp_count_if_q.test | RUN | 0.207989 | 1.260846 | 0.698150 | 0.001534 | 0.001655 | 0.001680 |
| mp_contains.test | RUN | 0.193599 | 0.748482 | 0.630485 | 0.001463 | 0.001708 | 0.001521 |
| mp_starts_with.test | RUN | 0.198974 | 0.735655 | 0.635549 | 0.001466 | 0.001725 | 0.001684 |
| mp_starts_with_sf.test | RUN | 0.193614 | 0.636064 | 0.624786 | 0.001590 | 0.001641 | 0.001560 |
| mp_repeat.test | RUN | 0.297072 | 3.157513 | 1.234173 | 0.001605 | 0.001577 | 0.001686 |
| mp_repeat_2.test | RUN | 0.030713 | 0.066299 | 0.096590 | 0.000626 | 0.000729 | 0.001628 |
| mp_repeat_3.test | RUN | 0.238342 | 0.389763 | 0.596469 | 0.001835 | 0.001632 | 0.001724 |
| mp_product.test | RUN | 0.224935 | 1.894968 | 0.873406 | 0.001514 | 0.001764 | 0.001620 |
| mp_drop.test | RUN | 0.255026 | 2.368235 | 1.027153 | 0.001582 | 0.001592 | 0.001610 |
| mp_drop_2.test | RUN | 0.030280 | 0.067552 | 0.097348 | 0.000473 | 0.000710 | 0.001463 |
| mp_iota.test | RUN | 0.243138 | 2.000172 | 0.915836 | 0.001579 | 0.001646 | 0.001472 |
| mp_iota_2.test | RUN | 0.262057 | 2.403476 | 1.046197 | 0.001500 | 0.001709 | 0.001557 |
| mp_at.test | RUN | 0.214342 | 1.042194 | 0.699488 | 0.001449 | 0.001680 | 0.001369 |
| mp_at_2.test | RUN | 0.030810 | 0.063716 | 0.096679 | 0.000632 | 0.000770 | 0.001696 |
| mp_at_sf.test | RUN | 0.191213 | 0.634228 | 0.613406 | 0.001528 | 0.001768 | 0.001674 |
| mp_take.test | RUN | 0.341538 | 3.133642 | 1.227653 | 0.001551 | 0.001285 | 0.001654 |
| mp_take_2.test | RUN | 0.030451 | 0.066273 | 0.096143 | 0.000722 | 0.000726 | 0.001666 |
| mp_slice.test | RUN | 0.409831 | 3.184434 | 1.591826 | 0.001594 | 0.001669 | 0.001645 |
| mp_slice_2.test | RUN | 0.030129 | 0.066500 | 0.097711 | 0.000615 | 0.000729 | 0.001666 |
| mp_replace.test | RUN | 0.248930 | 1.606366 | 1.012977 | 0.001645 | 0.001751 | 0.001552 |
| mp_replace_if.test | RUN | 0.236255 | 1.405020 | 0.930296 | 0.001634 | 0.001629 | 0.001555 |
| mp_replace_if_q.test | RUN | 0.237530 | 1.408183 | 0.927218 | 0.001572 | 0.001725 | 0.001711 |
| mp_copy_if.test | RUN | 0.242432 | 1.972970 | 0.879922 | 0.001607 | 0.001502 | 0.001726 |
| mp_copy_if_q.test | RUN | 0.241063 | 1.988333 | 0.885429 | 0.001656 | 0.001641 | 0.001588 |
| mp_remove.test | RUN | 0.234430 | 1.323890 | 0.888670 | 0.001648 | 0.001722 | 0.001666 |
| mp_remove_if.test | RUN | 0.246825 | 2.088556 | 0.933431 | 0.001622 | 0.001806 | 0.001676 |
| mp_remove_if_q.test | RUN | 0.254176 | 2.069281 | 0.948199 | 0.001478 | 0.001746 | 0.001576 |
| mp_partition.test | RUN | 0.246590 | 1.949870 | 1.014853 | 0.001602 | 0.001539 | 0.001612 |
| mp_partition_q.test | RUN | 0.246664 | 1.952837 | 1.020416 | 0.001614 | 0.001818 | 0.001720 |
| mp_sort.test | RUN | 0.230433 | 1.406335 | 0.878085 | 0.001556 | 0.001708 | 0.001744 |
| mp_sort_q.test | RUN | 0.233185 | 1.400208 | 0.881831 | 0.001695 | 0.001634 | 0.001712 |
| mp_find.test | RUN | 0.218429 | 1.483182 | 0.758819 | 0.001622 | 0.001556 | 0.001630 |
| mp_find_if.test | RUN | 0.220478 | 1.381992 | 0.714313 | 0.001774 | 0.001761 | 0.001552 |
| mp_find_if_q.test | RUN | 0.232974 | 1.547163 | 0.883933 | 0.001643 | 0.001790 | 0.001572 |
| mp_reverse.test | RUN | 0.520168 | 4.133012 | 1.738329 | 0.001484 | 0.001732 | 0.001616 |
| mp_fold.test | RUN | 0.858764 | 3.181827 | 4.477715 | 0.001880 | 0.001756 | 0.001550 |
| mp_fold_q.test | RUN | 0.220973 | 1.400696 | 0.834393 | 0.001703 | 0.001574 | 0.001716 |
| mp_fold_q_sf.test | RUN | 0.193515 | 0.633838 | 0.649806 | 0.001446 | 0.001381 | 0.001669 |
| mp_reverse_fold.test | RUN | 0.406670 | 3.066136 | 1.221169 | 0.001664 | 0.001606 | 0.001704 |
| mp_reverse_fold_q.test | RUN | 0.229526 | 1.687077 | 0.893142 | 0.001481 | 0.001783 | 0.001634 |
| mp_unique.test | RUN | 0.227775 | 1.534701 | 0.875040 | 0.001515 | 0.001524 | 0.001650 |
| mp_unique_if.test | RUN | 0.432849 | 3.228625 | 1.410628 | 0.001521 | 0.001640 | 0.001656 |
| mp_unique_if_q.test | RUN | 0.370735 | 3.138866 | 1.118183 | 0.001560 | 0.001723 | 0.001666 |
| mp_all_of.test | RUN | 0.523150 | 1.722959 | 1.478563 | 0.001686 | 0.001896 | 0.001690 |
| mp_all_of_q.test | RUN | 0.188292 | 0.745273 | 0.629569 | 0.001562 | 0.001750 | 0.001651 |
| mp_any_of.test | RUN | 0.526713 | 1.778304 | 1.445665 | 0.001666 | 0.001591 | 0.001648 |
| mp_any_of_q.test | RUN | 0.196114 | 0.745324 | 0.656466 | 0.001691 | 0.001748 | 0.001634 |
| mp_none_of.test | RUN | 0.523986 | 1.794395 | 1.433960 | 0.001507 | 0.001709 | 0.001700 |
| mp_none_of_q.test | RUN | 0.190688 | 0.730189 | 0.655550 | 0.001533 | 0.001746 | 0.001444 |
| mp_replace_at.test | RUN | 0.237717 | 1.545554 | 0.992086 | 0.001485 | 0.001532 | 0.001709 |
| mp_replace_at_c.test | RUN | 0.246432 | 1.553271 | 0.979018 | 0.001510 | 0.001436 | 0.001650 |
| mp_for_each.test | RUN | 0.234765 | 1.016821 | 1.019021 | 0.001540 | 0.001494 | 0.001626 |
| mp_insert.test | RUN | 0.375174 | 3.120986 | 1.451375 | 0.001577 | 0.001716 | 0.001710 |
| mp_insert_2.test | RUN | 0.031444 | 0.063364 | 0.092245 | 0.000681 | 0.000626 | 0.001502 |
| mp_erase.test | RUN | 0.420737 | 3.337974 | 1.649027 | 0.001884 | 0.001716 | 0.001438 |
| mp_erase_2.test | RUN | 0.031195 | 0.063487 | 0.093684 | 0.000621 | 0.000717 | 0.001578 |
| mp_with_index.test | RUN | 0.543313 | 6.670515 | 3.637168 | 0.002255 | 0.001930 | 0.001798 |
| mp_with_index_cx.test | RUN | 0.003711 | 0.020498 | 0.027513 | 0.000720 | 0.000765 | 0.001590 |
| mp_from_sequence.test | RUN | 0.241306 | 1.744854 | 0.945853 | 0.001957 | 0.001648 | 0.001534 |
| mp_from_sequence_2.test | RUN | 0.259273 | 2.054742 | 1.039456 | 0.001788 | 0.001790 | 0.001622 |
| mp_from_sequence_3.test | RUN | 0.209148 | 0.895891 | 0.745844 | 0.001565 | 0.001780 | 0.001491 |
| mp_min_element.test | RUN | 0.191311 | 0.822578 | 0.697414 | 0.001580 | 0.001626 | 0.001642 |
| mp_min_element_2.test | RUN | 0.030886 | 0.065379 | 0.095339 | 0.000656 | 0.000730 | 0.001546 |
| mp_min_element_q.test | RUN | 0.201870 | 0.815256 | 0.662581 | 0.001523 | 0.001671 | 0.001248 |
| mp_min_element_q_2.test | RUN | 0.030442 | 0.064136 | 0.096425 | 0.000669 | 0.000614 | 0.001713 |
| mp_max_element.test | RUN | 0.198308 | 0.816422 | 0.661339 | 0.001582 | 0.001712 | 0.001670 |
| mp_max_element_2.test | RUN | 0.031156 | 0.065819 | 0.098975 | 0.000626 | 0.000656 | 0.001753 |
| mp_max_element_q.test | RUN | 0.201076 | 0.810137 | 0.675029 | 0.001597 | 0.001803 | 0.001639 |
| mp_max_element_q_2.test | RUN | 0.030922 | 0.064392 | 0.095228 | 0.000726 | 0.000680 | 0.001529 |
| mp_nth_element.test | RUN | 0.223534 | 1.155377 | 0.823014 | 0.001612 | 0.001601 | 0.001583 |
| mp_nth_element_q.test | RUN | 0.220032 | 1.161552 | 0.827585 | 0.001536 | 0.001528 | 0.001529 |
| mp_back.test | RUN | 0.216545 | 0.963396 | 0.780407 | 0.001585 | 0.001678 | 0.001826 |
| mp_back_2.test | RUN | 0.030718 | 0.064877 | 0.095555 | 0.000608 | 0.000590 | 0.001415 |
| mp_pop_back.test | RUN | 0.654926 | 6.363815 | 1.662747 | 0.001646 | 0.001635 | 0.001751 |
| mp_pop_back_2.test | RUN | 0.031452 | 0.066041 | 0.093053 | 0.000626 | 0.000654 | 0.001581 |
| mp_flatten.test | RUN | 0.259589 | 2.240702 | 1.108948 | 0.001570 | 0.001688 | 0.001636 |
| mp_rotate_left.test | RUN | 0.261107 | 2.433397 | 1.093824 | 0.001488 | 0.001699 | 0.001518 |
| mp_rotate_right.test | RUN | 0.262031 | 2.432515 | 1.098338 | 0.001760 | 0.001657 | 0.001794 |
| mp_power_set.test | RUN | 0.262249 | 2.309617 | 1.112944 | 0.001598 | 0.001675 | 0.001444 |
| mp_partial_sum.test | RUN | 0.353053 | 3.095441 | 1.270711 | 0.001393 | 0.001688 | 0.001638 |
| mp_iterate.test | RUN | 0.233236 | 0.920055 | 0.875932 | 0.001558 | 0.001776 | 0.001668 |
| mp_pairwise_fold.test | RUN | 0.260618 | 2.131965 | 1.138330 | 0.001480 | 0.001586 | 0.001589 |
| mp_pairwise_fold_q.test | RUN | 0.198229 | 0.612053 | 0.622918 | 0.001674 | 0.001702 | 0.001718 |
| mp_sliding_fold.test | RUN | 0.522955 | 4.122054 | 2.109071 | 0.001678 | 0.001756 | 0.001543 |
| mp_sliding_fold_q.test | RUN | 0.520456 | 4.118077 | 2.109608 | 0.001495 | 0.001499 | 0.001635 |
| mp_intersperse.test | RUN | 0.241981 | 1.534041 | 0.972934 | 0.001627 | 0.001657 | 0.001640 |
| mp_split.test | RUN | 0.358064 | 2.947887 | 1.366262 | 0.001660 | 0.001664 | 0.001655 |
| mp_join.test | RUN | 0.275613 | 2.465139 | 1.212817 | 0.001648 | 0.001759 | 0.001648 |
| integral.test | RUN | 0.206927 | 1.082773 | 0.727917 | 0.001702 | 0.001419 | 0.001655 |
| mp_value.test | RUN | 0.013327 | 0.035110 | 0.047530 | 0.000655 | 0.000686 | 0.001568 |
| mp_identity.test | RUN | 0.199197 | 0.982544 | 0.700449 | 0.001619 | 0.001788 | 0.001561 |
| mp_inherit.test | RUN | 0.187843 | 0.699881 | 0.620533 | 0.001512 | 0.001706 | 0.001683 |
| mp_if.test | RUN | 0.191671 | 0.795798 | 0.633019 | 0.001501 | 0.001529 | 0.001567 |
| mp_if_sf.test | RUN | 0.182974 | 0.596489 | 0.565338 | 0.001406 | 0.001663 | 0.001656 |
| mp_eval_if.test | RUN | 0.190436 | 0.859299 | 0.644687 | 0.001601 | 0.001622 | 0.001698 |
| mp_eval_if_sf.test | RUN | 0.183818 | 0.611891 | 0.595469 | 0.001226 | 0.001745 | 0.001551 |
| mp_valid.test | RUN | 0.188811 | 0.613786 | 0.598333 | 0.001570 | 0.001563 | 0.001695 |
| mp_defer.test | RUN | 0.203360 | 1.044600 | 0.722164 | 0.001554 | 0.001723 | 0.001627 |
| mp_quote.test | RUN | 0.206287 | 1.071292 | 0.744529 | 0.001620 | 0.001730 | 0.001636 |
| mp_invoke_q.test | RUN | 0.223733 | 1.399563 | 0.829216 | 0.001663 | 0.001787 | 0.001513 |
| mp_invoke_q_sf.test | RUN | 0.180607 | 0.602289 | 0.594476 | 0.001640 | 0.001763 | 0.001641 |
| mp_quote_trait.test | RUN | 0.202119 | 1.165210 | 0.722163 | 0.001646 | 0.001624 | 0.001717 |
| mp_cond.test | RUN | 0.187250 | 0.703237 | 0.628204 | 0.001460 | 0.001766 | 0.001662 |
| mp_cond_sf.test | RUN | 0.182861 | 0.606687 | 0.593406 | 0.001623 | 0.001782 | 0.001684 |
| mp_not_fn.test | RUN | 0.181861 | 0.599676 | 0.586227 | 0.001575 | 0.001782 | 0.001639 |
| mp_eval_if_not.test | RUN | 0.196569 | 0.858283 | 0.661030 | 0.001681 | 0.001691 | 0.001631 |
| mp_eval_or.test | RUN | 0.185671 | 0.462091 | 0.620693 | 0.001547 | 0.001633 | 0.001680 |
| mp_compose.test | RUN | 0.210654 | 1.427883 | 0.807986 | 0.001656 | 0.001491 | 0.001583 |
| mp_valid_and_true.test | RUN | 0.191113 | 0.729420 | 0.599740 | 0.001492 | 0.001672 | 0.001683 |
| mp_compose_sf.test | COMPILE | 0.043586 | 0.081964 | 0.137714 | — | — | — |
| integer_sequence.test | RUN | 0.232337 | 1.416887 | 0.907955 | 0.001321 | 0.001633 | 0.001610 |
| tuple_for_each.test | RUN | 0.188550 | 0.521131 | 0.622624 | 0.001511 | 0.001659 | 0.001631 |
| tuple_for_each_cx.test | COMPILE | 0.034641 | 0.071400 | 0.107517 | — | — | — |
| tuple_apply.test | RUN | 0.185832 | 0.519126 | 0.657769 | 0.001656 | 0.001531 | 0.001547 |
| tuple_apply_cx.test | COMPILE | 0.050737 | 0.105592 | 0.154068 | — | — | — |
| construct_from_tuple.test | RUN | 0.187846 | 0.563262 | 0.631821 | 0.001672 | 0.001760 | 0.001594 |
| construct_from_tuple_cx.test | COMPILE | 0.052420 | 0.104211 | 0.145447 | — | — | — |
| tuple_transform.test | RUN | 0.306055 | 1.116123 | 1.242991 | 0.001626 | 0.001574 | 0.001551 |
| tuple_transform_2.test | RUN | 0.258297 | 0.812808 | 1.108899 | 0.001633 | 0.001711 | 0.001727 |
| tuple_transform_cx.test | COMPILE | 0.046470 | 0.101438 | 0.146136 | — | — | — |
| mp_set_contains.test | RUN | 0.194423 | 0.742814 | 0.633576 | 0.001619 | 0.001576 | 0.001652 |
| mp_set_push_back.test | RUN | 0.259624 | 2.300387 | 1.104319 | 0.001653 | 0.001725 | 0.001665 |
| mp_set_push_front.test | RUN | 0.339464 | 2.777671 | 1.274560 | 0.001650 | 0.001793 | 0.001591 |
| mp_is_set.test | RUN | 0.194380 | 0.738724 | 0.655593 | 0.001522 | 0.001661 | 0.001677 |
| mp_set_union.test | RUN | 0.252787 | 1.970361 | 1.037126 | 0.001779 | 0.001741 | 0.001372 |
| mp_set_union_sf.test | RUN | 0.186873 | 0.596976 | 0.601501 | 0.001544 | 0.001647 | 0.001435 |
| mp_set_difference.test | RUN | 0.225898 | 1.535130 | 0.897146 | 0.001563 | 0.001534 | 0.001596 |
| mp_set_difference_sf.test | RUN | 0.183145 | 0.584642 | 0.599761 | 0.001514 | 0.001642 | 0.001535 |
| mp_set_intersection.test | RUN | 0.222226 | 1.510529 | 0.884482 | 0.001677 | 0.001605 | 0.001675 |
| mp_set_intersection_sf.test | RUN | 0.184828 | 0.577770 | 0.599976 | 0.001451 | 0.001720 | 0.001700 |
| mp_all.test | RUN | 0.187038 | 0.728147 | 0.632755 | 0.001568 | 0.001723 | 0.001454 |
| mp_all_2.test | RUN | 0.563786 | 1.568906 | 1.468382 | 0.001590 | 0.001620 | 0.001726 |
| mp_and.test | RUN | 0.199637 | 0.727907 | 0.639961 | 0.001769 | 0.001729 | 0.001672 |
| mp_any.test | RUN | 0.191878 | 0.735736 | 0.612033 | 0.001447 | 0.001700 | 0.001687 |
| mp_any_2.test | RUN | 0.520267 | 1.557261 | 1.474145 | 0.001667 | 0.001791 | 0.001475 |
| mp_or.test | RUN | 0.194810 | 0.738966 | 0.632652 | 0.001538 | 0.001726 | 0.001629 |
| mp_same.test | RUN | 0.367667 | 1.229173 | 1.023067 | 0.001498 | 0.001518 | 0.001522 |
| mp_plus.test | RUN | 0.196168 | 0.865369 | 0.693255 | 0.001590 | 0.001755 | 0.001514 |
| mp_less.test | RUN | 0.196111 | 0.707617 | 0.607942 | 0.001537 | 0.001587 | 0.001651 |
| mp_min.test | RUN | 0.188024 | 0.666192 | 0.615081 | 0.001657 | 0.001815 | 0.001606 |
| mp_max.test | RUN | 0.199639 | 0.732631 | 0.634278 | 0.001504 | 0.001554 | 0.001384 |
| mp_similar.test | RUN | 0.187361 | 0.724557 | 0.632527 | 0.001456 | 0.001682 | 0.001516 |
| mp_map_find.test | RUN | 0.225017 | 1.347400 | 0.850078 | 0.001622 | 0.001827 | 0.001698 |
| mp_map_find_2.test | RUN | 0.207795 | 0.518152 | 0.721815 | 0.001698 | 0.001668 | 0.001242 |
| mp_map_find_3.test | RUN | 0.206158 | 0.505869 | 0.714970 | 0.001476 | 0.001519 | 0.001390 |
| mp_map_find_4.test | RUN | 0.197748 | 0.481573 | 0.644550 | 0.001552 | 0.001545 | 0.001517 |
| mp_map_contains.test | RUN | 0.199848 | 0.750695 | 0.662137 | 0.001669 | 0.001824 | 0.001682 |
| mp_map_insert.test | RUN | 0.274761 | 2.599421 | 1.203386 | 0.001656 | 0.001758 | 0.001569 |
| mp_map_replace.test | RUN | 0.372783 | 2.971235 | 1.397001 | 0.001583 | 0.001867 | 0.001667 |
| mp_map_erase.test | RUN | 0.267125 | 2.192342 | 1.158118 | 0.001500 | 0.001707 | 0.001284 |
| mp_map_update.test | RUN | 0.234147 | 1.410387 | 0.886547 | 0.001694 | 0.001732 | 0.001358 |
| mp_map_update_q.test | RUN | 0.227382 | 1.416227 | 0.876043 | 0.001723 | 0.001777 | 0.001618 |
| mp_map_keys.test | RUN | 0.224968 | 1.256574 | 0.856205 | 0.001444 | 0.001602 | 0.001612 |
| mp_is_map.test | RUN | 0.202293 | 0.768397 | 0.688816 | 0.001352 | 0.001532 | 0.001494 |
| mp_bind.test | RUN | 0.254561 | 2.298557 | 1.041179 | 0.001582 | 0.001667 | 0.001673 |
| mp_bind_q.test | RUN | 0.225682 | 1.426341 | 0.828195 | 0.001674 | 0.001666 | 0.001667 |
| mp_bind_front.test | RUN | 0.220799 | 1.541164 | 0.811006 | 0.001535 | 0.001492 | 0.001498 |
| mp_bind_back.test | RUN | 0.219196 | 1.546000 | 0.807951 | 0.001566 | 0.001501 | 0.001517 |
| mp_lambda.test | RUN | 0.534126 | 4.589241 | 2.173012 | 0.001517 | 0.001253 | 0.001454 |
| mpl.test | RUN | 0.455255 | 1.190167 | 1.718563 | 0.001708 | 0.001661 | 0.001624 |
| mpl_list.test | RUN | 0.245709 | 0.911016 | 0.799832 | 0.001644 | 0.001701 | 0.001399 |
| mpl_tuple.test | RUN | 0.246411 | 0.914121 | 0.778997 | 0.001566 | 0.001528 | 0.001565 |
| version.test | RUN | 0.123801 | 0.330517 | 0.400781 | 0.001616 | 0.001589 | 0.001560 |
| mp11_version.test | RUN | 0.151322 | 0.373117 | 0.478511 | 0.001730 | 0.001597 | 0.001411 |
| list_version.test | RUN | 0.125754 | 0.338336 | 0.400684 | 0.001545 | 0.001563 | 0.001697 |
| algorithm_version.test | RUN | 0.140989 | 0.353208 | 0.438272 | 0.001663 | 0.001589 | 0.001550 |
| integral_version.test | RUN | 0.123944 | 0.322859 | 0.397756 | 0.001552 | 0.001407 | 0.001335 |
| utility_version.test | RUN | 0.126052 | 0.330441 | 0.395356 | 0.001606 | 0.001574 | 0.001615 |
| function_version.test | RUN | 0.129373 | 0.330635 | 0.414294 | 0.001416 | 0.001612 | 0.001814 |
| map_version.test | RUN | 0.142946 | 0.348134 | 0.438057 | 0.001593 | 0.001483 | 0.001403 |
| set_version.test | RUN | 0.129881 | 0.335407 | 0.410879 | 0.001576 | 0.001503 | 0.001457 |
| bind_version.test | RUN | 0.139765 | 0.348145 | 0.437877 | 0.001546 | 0.001541 | 0.001638 |
| integer_sequence_version.test | RUN | 0.124129 | 0.323150 | 0.399427 | 0.001496 | 0.001626 | 0.001170 |
| tuple_version.test | RUN | 0.144221 | 0.355681 | 0.399030 | 0.001166 | 0.001699 | 0.001118 |
| mpl_version.test | RUN | 0.106444 | 0.234103 | 0.294809 | 0.001186 | 0.001224 | 0.001068 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.003× | 1.008×, 0.999× | 1.009× |
| clang | 1.091× | 1.088×, 1.093× | 1.010× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44667760294).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.001010s | 0.001006s | 0.000988s | byte equality observed |
| bind_version.test | 10 | 0.001003s | 0.001012s | 0.001004s | byte equality observed |
| construct_from_tuple.test | 10 | 0.001016s | 0.001019s | 0.001018s | byte equality observed |
| function_version.test | 10 | 0.001007s | 0.000994s | 0.001051s | byte equality observed |
| integer_sequence.test | 10 | 0.000993s | 0.001011s | 0.001080s | byte equality observed |
| integer_sequence_version.test | 10 | 0.001004s | 0.001001s | 0.001067s | byte equality observed |
| integral.test | 10 | 0.001004s | 0.001016s | 0.001034s | byte equality observed |
| integral_version.test | 10 | 0.000998s | 0.000991s | 0.001087s | byte equality observed |
| list_version.test | 10 | 0.000994s | 0.000986s | 0.001088s | byte equality observed |
| map_version.test | 10 | 0.001006s | 0.000997s | 0.001051s | byte equality observed |
| mp11_version.test | 10 | 0.000998s | 0.001000s | 0.001102s | byte equality observed |
| mp_all.test | 10 | 0.001011s | 0.001011s | 0.001071s | byte equality observed |
| mp_all_2.test | 10 | 0.001013s | 0.001012s | 0.001063s | byte equality observed |
| mp_all_of.test | 10 | 0.000999s | 0.001011s | 0.001089s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000998s | 0.001009s | 0.001060s | byte equality observed |
| mp_and.test | 10 | 0.001004s | 0.001013s | 0.001048s | byte equality observed |
| mp_any.test | 10 | 0.001009s | 0.001014s | 0.001063s | byte equality observed |
| mp_any_2.test | 10 | 0.001025s | 0.001015s | 0.001079s | byte equality observed |
| mp_any_of.test | 10 | 0.001073s | 0.001010s | 0.001057s | byte equality observed |
| mp_any_of_q.test | 10 | 0.001078s | 0.001017s | 0.001061s | byte equality observed |
| mp_append.test | 10 | 0.001064s | 0.001062s | 0.001026s | byte equality observed |
| mp_append_2.test | 10 | 0.001087s | 0.001077s | 0.001058s | byte equality observed |
| mp_append_3.test | 10 | 0.000478s | 0.000471s | 0.001043s | byte equality observed |
| mp_append_sf.test | 10 | 0.001074s | 0.001078s | 0.001091s | byte equality observed |
| mp_apply_q.test | 10 | 0.001069s | 0.001077s | 0.001031s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.001035s | 0.001102s | 0.001039s | byte equality observed |
| mp_assign.test | 10 | 0.001088s | 0.001073s | 0.001067s | byte equality observed |
| mp_assign_2.test | 10 | 0.000477s | 0.000486s | 0.001012s | byte equality observed |
| mp_at.test | 10 | 0.001067s | 0.001060s | 0.001060s | byte equality observed |
| mp_at_2.test | 10 | 0.000477s | 0.000482s | 0.001032s | byte equality observed |
| mp_at_sf.test | 10 | 0.001062s | 0.001099s | 0.001036s | byte equality observed |
| mp_back.test | 10 | 0.001068s | 0.001070s | 0.001066s | byte equality observed |
| mp_back_2.test | 10 | 0.000476s | 0.000473s | 0.001023s | byte equality observed |
| mp_bind.test | 10 | 0.001080s | 0.001040s | 0.001081s | byte equality observed |
| mp_bind_back.test | 10 | 0.001082s | 0.001116s | 0.001092s | byte equality observed |
| mp_bind_front.test | 10 | 0.001050s | 0.001050s | 0.001079s | byte equality observed |
| mp_bind_q.test | 10 | 0.001046s | 0.001053s | 0.001070s | byte equality observed |
| mp_clear.test | 10 | 0.001064s | 0.001053s | 0.001059s | byte equality observed |
| mp_clear_2.test | 10 | 0.000480s | 0.000483s | 0.001029s | byte equality observed |
| mp_compose.test | 10 | 0.001052s | 0.001110s | 0.001092s | byte equality observed |
| mp_cond.test | 10 | 0.001050s | 0.001060s | 0.001084s | byte equality observed |
| mp_cond_sf.test | 10 | 0.001078s | 0.001103s | 0.001086s | byte equality observed |
| mp_contains.test | 10 | 0.001078s | 0.001067s | 0.001054s | byte equality observed |
| mp_copy_if.test | 10 | 0.001036s | 0.001075s | 0.001045s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.001056s | 0.001096s | 0.001034s | byte equality observed |
| mp_count.test | 10 | 0.001059s | 0.001047s | 0.001055s | byte equality observed |
| mp_count_if.test | 10 | 0.001052s | 0.001040s | 0.001041s | byte equality observed |
| mp_count_if_q.test | 10 | 0.001050s | 0.001052s | 0.001032s | byte equality observed |
| mp_defer.test | 10 | 0.001091s | 0.001068s | 0.001056s | byte equality observed |
| mp_drop.test | 10 | 0.001070s | 0.001061s | 0.001041s | byte equality observed |
| mp_drop_2.test | 10 | 0.000472s | 0.000471s | 0.001017s | byte equality observed |
| mp_empty.test | 10 | 0.001065s | 0.001085s | 0.001085s | byte equality observed |
| mp_empty_2.test | 10 | 0.000477s | 0.000472s | 0.001033s | byte equality observed |
| mp_erase.test | 10 | 0.001066s | 0.001110s | 0.001082s | byte equality observed |
| mp_erase_2.test | 10 | 0.000472s | 0.000472s | 0.001007s | byte equality observed |
| mp_eval_if.test | 10 | 0.001078s | 0.001079s | 0.001058s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.001051s | 0.001088s | 0.001081s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.001040s | 0.001092s | 0.001085s | byte equality observed |
| mp_eval_or.test | 10 | 0.001056s | 0.001069s | 0.001047s | byte equality observed |
| mp_fill.test | 10 | 0.001048s | 0.001069s | 0.001088s | byte equality observed |
| mp_fill_2.test | 10 | 0.000477s | 0.000469s | 0.001039s | byte equality observed |
| mp_filter.test | 10 | 0.001044s | 0.001080s | 0.001042s | byte equality observed |
| mp_find.test | 10 | 0.001060s | 0.001088s | 0.001057s | byte equality observed |
| mp_find_if.test | 10 | 0.001076s | 0.001065s | 0.001051s | byte equality observed |
| mp_find_if_q.test | 10 | 0.001032s | 0.001056s | 0.001043s | byte equality observed |
| mp_flatten.test | 10 | 0.001072s | 0.001069s | 0.001041s | byte equality observed |
| mp_fold.test | 10 | 0.001082s | 0.001046s | 0.001068s | byte equality observed |
| mp_fold_q.test | 10 | 0.001059s | 0.001072s | 0.001046s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.001062s | 0.001044s | 0.001097s | byte equality observed |
| mp_for_each.test | 10 | 0.001039s | 0.001078s | 0.001051s | byte equality observed |
| mp_from_sequence.test | 10 | 0.001040s | 0.001088s | 0.001087s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.001034s | 0.001059s | 0.001101s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.001049s | 0.001080s | 0.001040s | byte equality observed |
| mp_front.test | 10 | 0.001075s | 0.001076s | 0.001051s | byte equality observed |
| mp_front_2.test | 10 | 0.000473s | 0.000477s | 0.001034s | byte equality observed |
| mp_identity.test | 10 | 0.001050s | 0.001016s | 0.001057s | byte equality observed |
| mp_if.test | 10 | 0.001090s | 0.001071s | 0.001035s | byte equality observed |
| mp_if_sf.test | 10 | 0.001067s | 0.001035s | 0.001084s | byte equality observed |
| mp_inherit.test | 10 | 0.001040s | 0.001088s | 0.001057s | byte equality observed |
| mp_insert.test | 10 | 0.001078s | 0.001069s | 0.001062s | byte equality observed |
| mp_insert_2.test | 10 | 0.000468s | 0.000473s | 0.001048s | byte equality observed |
| mp_intersperse.test | 10 | 0.001077s | 0.001047s | 0.001065s | byte equality observed |
| mp_invoke_q.test | 10 | 0.001054s | 0.001036s | 0.001050s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.001061s | 0.001084s | 0.001054s | byte equality observed |
| mp_iota.test | 10 | 0.001070s | 0.001037s | 0.001097s | byte equality observed |
| mp_iota_2.test | 10 | 0.001081s | 0.001076s | 0.001075s | byte equality observed |
| mp_is_list.test | 10 | 0.001070s | 0.001029s | 0.001072s | byte equality observed |
| mp_is_map.test | 10 | 0.001077s | 0.001049s | 0.001081s | byte equality observed |
| mp_is_set.test | 10 | 0.001057s | 0.001058s | 0.001022s | byte equality observed |
| mp_is_value_list.test | 10 | 0.001037s | 0.001100s | 0.001071s | byte equality observed |
| mp_iterate.test | 10 | 0.001080s | 0.001036s | 0.001071s | byte equality observed |
| mp_join.test | 10 | 0.001065s | 0.001067s | 0.001044s | byte equality observed |
| mp_lambda.test | 10 | 0.001071s | 0.001082s | 0.001043s | byte equality observed |
| mp_less.test | 10 | 0.001046s | 0.001048s | 0.001048s | byte equality observed |
| mp_list_c.test | 10 | 0.001041s | 0.001072s | 0.001069s | byte equality observed |
| mp_list_v.test | 10 | 0.000463s | 0.000462s | 0.001068s | byte equality observed |
| mp_map_contains.test | 10 | 0.001053s | 0.001034s | 0.001044s | byte equality observed |
| mp_map_erase.test | 10 | 0.001079s | 0.001088s | 0.001056s | byte equality observed |
| mp_map_find.test | 10 | 0.001072s | 0.001060s | 0.001041s | byte equality observed |
| mp_map_find_2.test | 10 | 0.001084s | 0.001069s | 0.001038s | byte equality observed |
| mp_map_find_3.test | 10 | 0.001063s | 0.001048s | 0.001056s | byte equality observed |
| mp_map_find_4.test | 10 | 0.001059s | 0.001044s | 0.001076s | byte equality observed |
| mp_map_insert.test | 10 | 0.001069s | 0.001067s | 0.001041s | byte equality observed |
| mp_map_keys.test | 10 | 0.001071s | 0.001078s | 0.001039s | byte equality observed |
| mp_map_replace.test | 10 | 0.001061s | 0.001070s | 0.001102s | byte equality observed |
| mp_map_update.test | 10 | 0.001052s | 0.001083s | 0.001062s | byte equality observed |
| mp_map_update_q.test | 10 | 0.001047s | 0.001036s | 0.001048s | byte equality observed |
| mp_max.test | 10 | 0.001026s | 0.001077s | 0.001094s | byte equality observed |
| mp_max_element.test | 10 | 0.001068s | 0.001053s | 0.001040s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000491s | 0.000470s | 0.001018s | byte equality observed |
| mp_max_element_q.test | 10 | 0.001069s | 0.001078s | 0.001065s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000477s | 0.000485s | 0.001011s | byte equality observed |
| mp_min.test | 10 | 0.001060s | 0.001080s | 0.001039s | byte equality observed |
| mp_min_element.test | 10 | 0.001036s | 0.001076s | 0.001053s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000475s | 0.000482s | 0.001057s | byte equality observed |
| mp_min_element_q.test | 10 | 0.001056s | 0.001087s | 0.001056s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000473s | 0.000472s | 0.001043s | byte equality observed |
| mp_none_of.test | 10 | 0.001047s | 0.001109s | 0.001046s | byte equality observed |
| mp_none_of_q.test | 10 | 0.001062s | 0.001107s | 0.001018s | byte equality observed |
| mp_not_fn.test | 10 | 0.001035s | 0.001083s | 0.001079s | byte equality observed |
| mp_nth_element.test | 10 | 0.001035s | 0.001049s | 0.001101s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.001042s | 0.001043s | 0.001049s | byte equality observed |
| mp_or.test | 10 | 0.001045s | 0.001070s | 0.001052s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.001052s | 0.001055s | 0.001058s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.001031s | 0.001062s | 0.001030s | byte equality observed |
| mp_partial_sum.test | 10 | 0.001056s | 0.001083s | 0.001040s | byte equality observed |
| mp_partition.test | 10 | 0.001048s | 0.001083s | 0.001059s | byte equality observed |
| mp_partition_q.test | 10 | 0.001054s | 0.001048s | 0.001045s | byte equality observed |
| mp_plus.test | 10 | 0.001051s | 0.001125s | 0.001022s | byte equality observed |
| mp_pop_back.test | 10 | 0.001087s | 0.001065s | 0.001047s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000465s | 0.000476s | 0.001017s | byte equality observed |
| mp_pop_front.test | 10 | 0.001046s | 0.001098s | 0.001061s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000479s | 0.000464s | 0.001022s | byte equality observed |
| mp_power_set.test | 10 | 0.001036s | 0.001078s | 0.001046s | byte equality observed |
| mp_product.test | 10 | 0.001054s | 0.001058s | 0.001043s | byte equality observed |
| mp_push_back.test | 10 | 0.001071s | 0.001075s | 0.001044s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000482s | 0.000474s | 0.001056s | byte equality observed |
| mp_push_front.test | 10 | 0.001055s | 0.001064s | 0.001056s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000471s | 0.000463s | 0.001008s | byte equality observed |
| mp_quote.test | 10 | 0.001068s | 0.001044s | 0.001066s | byte equality observed |
| mp_quote_trait.test | 10 | 0.001043s | 0.001038s | 0.001064s | byte equality observed |
| mp_remove.test | 10 | 0.001072s | 0.001075s | 0.001032s | byte equality observed |
| mp_remove_if.test | 10 | 0.001103s | 0.001064s | 0.001095s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.001038s | 0.001106s | 0.001090s | byte equality observed |
| mp_rename.test | 10 | 0.001058s | 0.001076s | 0.001040s | byte equality observed |
| mp_rename_2.test | 10 | 0.000472s | 0.000469s | 0.001028s | byte equality observed |
| mp_rename_v.test | 10 | 0.000470s | 0.000464s | 0.001038s | byte equality observed |
| mp_repeat.test | 10 | 0.001084s | 0.001077s | 0.001033s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000458s | 0.000467s | 0.001043s | byte equality observed |
| mp_repeat_3.test | 10 | 0.001055s | 0.001051s | 0.001054s | byte equality observed |
| mp_replace.test | 10 | 0.001059s | 0.001065s | 0.001056s | byte equality observed |
| mp_replace_at.test | 10 | 0.001063s | 0.001025s | 0.001074s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.001060s | 0.001072s | 0.001066s | byte equality observed |
| mp_replace_front.test | 10 | 0.001051s | 0.001056s | 0.001074s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000464s | 0.000454s | 0.001050s | byte equality observed |
| mp_replace_if.test | 10 | 0.001030s | 0.001060s | 0.001029s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.001052s | 0.001056s | 0.001058s | byte equality observed |
| mp_replace_second.test | 10 | 0.001050s | 0.001051s | 0.001065s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000471s | 0.000478s | 0.001052s | byte equality observed |
| mp_replace_third.test | 10 | 0.001041s | 0.001053s | 0.001055s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000467s | 0.000477s | 0.001044s | byte equality observed |
| mp_reverse.test | 10 | 0.001079s | 0.001133s | 0.001091s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.001095s | 0.001075s | 0.001077s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.001049s | 0.001036s | 0.001081s | byte equality observed |
| mp_rotate_left.test | 10 | 0.001057s | 0.001070s | 0.001052s | byte equality observed |
| mp_rotate_right.test | 10 | 0.001044s | 0.001051s | 0.001050s | byte equality observed |
| mp_same.test | 10 | 0.001045s | 0.001087s | 0.001037s | byte equality observed |
| mp_second.test | 10 | 0.001036s | 0.001069s | 0.001054s | byte equality observed |
| mp_second_2.test | 10 | 0.000468s | 0.000461s | 0.001023s | byte equality observed |
| mp_set_contains.test | 10 | 0.001048s | 0.001053s | 0.001074s | byte equality observed |
| mp_set_difference.test | 10 | 0.001024s | 0.001042s | 0.001079s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.001032s | 0.001044s | 0.001083s | byte equality observed |
| mp_set_intersection.test | 10 | 0.001064s | 0.001028s | 0.001081s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.001081s | 0.001058s | 0.001043s | byte equality observed |
| mp_set_push_back.test | 10 | 0.001053s | 0.001065s | 0.001076s | byte equality observed |
| mp_set_push_front.test | 10 | 0.001109s | 0.001068s | 0.001060s | byte equality observed |
| mp_set_union.test | 10 | 0.001071s | 0.001077s | 0.001023s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.001052s | 0.001013s | 0.001018s | byte equality observed |
| mp_similar.test | 10 | 0.001073s | 0.001062s | 0.001057s | byte equality observed |
| mp_size.test | 10 | 0.001041s | 0.001066s | 0.001041s | byte equality observed |
| mp_size_2.test | 10 | 0.000462s | 0.000461s | 0.001023s | byte equality observed |
| mp_slice.test | 10 | 0.001094s | 0.001072s | 0.001062s | byte equality observed |
| mp_slice_2.test | 10 | 0.000469s | 0.000458s | 0.001024s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.001061s | 0.001052s | 0.001001s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.001076s | 0.001064s | 0.001053s | byte equality observed |
| mp_sort.test | 10 | 0.001048s | 0.001054s | 0.001054s | byte equality observed |
| mp_sort_q.test | 10 | 0.001083s | 0.001068s | 0.001048s | byte equality observed |
| mp_split.test | 10 | 0.001058s | 0.001058s | 0.001061s | byte equality observed |
| mp_starts_with.test | 10 | 0.001075s | 0.001086s | 0.001058s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.001066s | 0.001051s | 0.001062s | byte equality observed |
| mp_take.test | 10 | 0.001078s | 0.001061s | 0.001079s | byte equality observed |
| mp_take_2.test | 10 | 0.000467s | 0.000469s | 0.001043s | byte equality observed |
| mp_third.test | 10 | 0.001065s | 0.001068s | 0.001054s | byte equality observed |
| mp_third_2.test | 10 | 0.000469s | 0.000465s | 0.001041s | byte equality observed |
| mp_transform.test | 10 | 0.001073s | 0.001031s | 0.001039s | byte equality observed |
| mp_transform_2.test | 10 | 0.001015s | 0.001026s | 0.000995s | byte equality observed |
| mp_transform_front.test | 10 | 0.001070s | 0.001053s | 0.001046s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000466s | 0.000466s | 0.000995s | byte equality observed |
| mp_transform_if.test | 10 | 0.001064s | 0.001028s | 0.001067s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.001064s | 0.001031s | 0.001062s | byte equality observed |
| mp_transform_q.test | 10 | 0.001085s | 0.001053s | 0.001044s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.001042s | 0.001056s | 0.001068s | byte equality observed |
| mp_transform_second.test | 10 | 0.001072s | 0.001042s | 0.001047s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000471s | 0.000471s | 0.001034s | byte equality observed |
| mp_transform_sf.test | 10 | 0.001049s | 0.001035s | 0.001036s | byte equality observed |
| mp_transform_third.test | 10 | 0.001075s | 0.001042s | 0.001035s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000476s | 0.000476s | 0.001002s | byte equality observed |
| mp_unique.test | 10 | 0.001064s | 0.001072s | 0.001063s | byte equality observed |
| mp_unique_if.test | 10 | 0.001080s | 0.001069s | 0.001054s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.001080s | 0.001039s | 0.001107s | byte equality observed |
| mp_valid.test | 10 | 0.001061s | 0.001070s | 0.001080s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.001056s | 0.001032s | 0.001056s | byte equality observed |
| mp_value.test | 10 | 0.000470s | 0.000476s | 0.001027s | byte equality observed |
| mp_with_index.test | 10 | 0.001457s | 0.001407s | 0.001338s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000464s | 0.000466s | 0.001046s | byte equality observed |
| mpl.test | 10 | 0.001052s | 0.001014s | 0.001070s | byte equality observed |
| mpl_list.test | 10 | 0.001066s | 0.001055s | 0.001036s | byte equality observed |
| mpl_tuple.test | 10 | 0.001047s | 0.001018s | 0.001034s | byte equality observed |
| mpl_version.test | 10 | 0.001035s | 0.001029s | 0.001090s | byte equality observed |
| set_version.test | 10 | 0.001040s | 0.001038s | 0.001020s | byte equality observed |
| tuple_apply.test | 10 | 0.001075s | 0.001057s | 0.001054s | byte equality observed |
| tuple_for_each.test | 10 | 0.001046s | 0.001036s | 0.001093s | byte equality observed |
| tuple_transform.test | 10 | 0.001073s | 0.001065s | 0.001044s | byte equality observed |
| tuple_transform_2.test | 10 | 0.001045s | 0.001034s | 0.001038s | byte equality observed |
| tuple_version.test | 10 | 0.001047s | 0.001015s | 0.001038s | byte equality observed |
| utility_version.test | 10 | 0.001039s | 0.001064s | 0.001053s | byte equality observed |
| version.test | 10 | 0.001039s | 0.001033s | 0.001073s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44667760294).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
