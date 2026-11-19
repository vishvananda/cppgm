# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.041206 | 0.082070 | 0.122460 | — | — | — |
| complex_h.test | COMPILE | 0.163770 | 0.352295 | 0.460329 | — | — | — |
| mp_size.test | RUN | 0.201746 | 1.139486 | 0.652426 | 0.001641 | 0.001488 | 0.001405 |
| mp_size_2.test | RUN | 0.016716 | 0.040810 | 0.054146 | 0.000693 | 0.000735 | 0.001600 |
| mp_empty.test | RUN | 0.200700 | 0.723805 | 0.611627 | 0.001474 | 0.001675 | 0.001631 |
| mp_empty_2.test | RUN | 0.018926 | 0.042122 | 0.056981 | 0.000553 | 0.000754 | 0.001433 |
| mp_assign.test | RUN | 0.219419 | 1.518829 | 0.804513 | 0.001585 | 0.001709 | 0.001510 |
| mp_assign_2.test | RUN | 0.016869 | 0.040934 | 0.058065 | 0.000602 | 0.000784 | 0.001498 |
| mp_clear.test | RUN | 0.182855 | 0.654280 | 0.581565 | 0.001752 | 0.001549 | 0.001609 |
| mp_clear_2.test | RUN | 0.017310 | 0.039491 | 0.057501 | 0.000601 | 0.000558 | 0.001656 |
| mp_front.test | RUN | 0.197003 | 1.032839 | 0.690655 | 0.001437 | 0.001634 | 0.001601 |
| mp_front_2.test | RUN | 0.017103 | 0.040339 | 0.057041 | 0.000602 | 0.000630 | 0.001512 |
| mp_pop_front.test | RUN | 0.200351 | 1.088719 | 0.694268 | 0.001548 | 0.001524 | 0.001771 |
| mp_pop_front_2.test | RUN | 0.016827 | 0.040916 | 0.055009 | 0.000688 | 0.000712 | 0.001596 |
| mp_second.test | RUN | 0.192202 | 0.678456 | 0.634555 | 0.001514 | 0.001730 | 0.001413 |
| mp_second_2.test | RUN | 0.017004 | 0.042374 | 0.057709 | 0.000635 | 0.000739 | 0.001562 |
| mp_third.test | RUN | 0.184646 | 0.623166 | 0.607189 | 0.001575 | 0.001730 | 0.001434 |
| mp_third_2.test | RUN | 0.017432 | 0.039612 | 0.058442 | 0.000665 | 0.000599 | 0.001493 |
| mp_push_front.test | RUN | 0.261420 | 2.330973 | 1.106972 | 0.001654 | 0.001693 | 0.001690 |
| mp_push_front_2.test | RUN | 0.017216 | 0.041694 | 0.056429 | 0.000604 | 0.000711 | 0.001608 |
| mp_push_back.test | RUN | 0.250740 | 2.315566 | 1.131107 | 0.001527 | 0.001628 | 0.001127 |
| mp_push_back_2.test | RUN | 0.016721 | 0.041996 | 0.057382 | 0.000759 | 0.000665 | 0.001675 |
| mp_rename.test | RUN | 0.250047 | 2.136150 | 0.986746 | 0.001539 | 0.001727 | 0.001638 |
| mp_rename_2.test | RUN | 0.017502 | 0.042135 | 0.057204 | 0.000605 | 0.000747 | 0.001604 |
| mp_append.test | RUN | 0.250468 | 2.434584 | 1.040547 | 0.001565 | 0.001737 | 0.001594 |
| mp_append_2.test | RUN | 0.586222 | 5.403894 | 1.420733 | 0.001212 | 0.001554 | 0.001267 |
| mp_append_3.test | RUN | 0.017037 | 0.041044 | 0.058811 | 0.000667 | 0.000674 | 0.001689 |
| mp_append_sf.test | RUN | 0.184258 | 0.577821 | 0.584516 | 0.001804 | 0.001634 | 0.001629 |
| mp_replace_front.test | RUN | 0.225064 | 1.694255 | 0.872933 | 0.001626 | 0.001534 | 0.001566 |
| mp_replace_front_2.test | RUN | 0.017571 | 0.041689 | 0.069075 | 0.000597 | 0.000664 | 0.001671 |
| mp_replace_second.test | RUN | 0.211144 | 1.088758 | 0.788254 | 0.001615 | 0.001650 | 0.001661 |
| mp_replace_second_2.test | RUN | 0.017595 | 0.041701 | 0.058343 | 0.000709 | 0.000730 | 0.001554 |
| mp_replace_third.test | RUN | 0.207229 | 0.904514 | 0.709152 | 0.001631 | 0.001540 | 0.001634 |
| mp_replace_third_2.test | RUN | 0.017122 | 0.040953 | 0.057806 | 0.000624 | 0.000657 | 0.001590 |
| mp_apply_q.test | RUN | 0.233472 | 2.116571 | 0.991210 | 0.001571 | 0.001595 | 0.001546 |
| mp_apply_q_sf.test | RUN | 0.188235 | 0.600757 | 0.613235 | 0.001554 | 0.001748 | 0.001610 |
| mp_is_list.test | RUN | 0.181211 | 0.709366 | 0.622652 | 0.001704 | 0.001652 | 0.001680 |
| mp_list_c.test | RUN | 0.201302 | 0.870340 | 0.677784 | 0.001601 | 0.001672 | 0.001506 |
| mp_transform_front.test | RUN | 0.220749 | 1.720742 | 0.838367 | 0.001516 | 0.001537 | 0.001518 |
| mp_transform_front_2.test | RUN | 0.017465 | 0.040735 | 0.057742 | 0.000596 | 0.000683 | 0.001595 |
| mp_transform_second.test | RUN | 0.213635 | 1.479243 | 0.787845 | 0.001530 | 0.001775 | 0.001598 |
| mp_transform_second_2.test | RUN | 0.017108 | 0.040767 | 0.054489 | 0.000742 | 0.000720 | 0.001477 |
| mp_transform_third.test | RUN | 0.200240 | 1.108436 | 0.675931 | 0.001512 | 0.001740 | 0.001628 |
| mp_transform_third_2.test | RUN | 0.017088 | 0.042112 | 0.057621 | 0.000695 | 0.000713 | 0.001557 |
| mp_list_v.test | RUN | 0.017095 | 0.041316 | 0.057754 | 0.000613 | 0.000666 | 0.001594 |
| mp_rename_v.test | RUN | 0.016624 | 0.041478 | 0.054653 | 0.000604 | 0.000659 | 0.001657 |
| mp_is_value_list.test | RUN | 0.178321 | 0.433413 | 0.574642 | 0.001766 | 0.001634 | 0.001698 |
| mp_transform.test | RUN | 0.452240 | 3.640707 | 1.831450 | 0.001680 | 0.001572 | 0.001644 |
| mp_transform_2.test | RUN | 0.169206 | 0.405414 | 0.525426 | 0.001586 | 0.001623 | 0.001567 |
| mp_transform_q.test | RUN | 0.442739 | 3.498534 | 1.772138 | 0.001460 | 0.001534 | 0.001602 |
| mp_transform_q_2.test | RUN | 0.456462 | 1.093475 | 2.287218 | 0.001656 | 0.001647 | 0.001509 |
| mp_transform_sf.test | RUN | 0.191646 | 0.619857 | 0.633017 | 0.001494 | 0.001653 | 0.001654 |
| mp_transform_if.test | RUN | 0.240525 | 1.729518 | 0.930474 | 0.001604 | 0.001477 | 0.001700 |
| mp_transform_if_q.test | RUN | 0.240200 | 1.724871 | 0.946701 | 0.001590 | 0.001714 | 0.001478 |
| mp_filter.test | RUN | 0.213029 | 1.024149 | 0.713543 | 0.001475 | 0.001686 | 0.001500 |
| mp_fill.test | RUN | 0.203714 | 0.760394 | 0.675138 | 0.001470 | 0.001764 | 0.001696 |
| mp_fill_2.test | RUN | 0.029748 | 0.061256 | 0.090434 | 0.000667 | 0.000604 | 0.001668 |
| mp_count.test | RUN | 0.374306 | 1.855336 | 1.057306 | 0.001740 | 0.001623 | 0.001629 |
| mp_count_if.test | RUN | 0.402446 | 1.865658 | 1.157078 | 0.001702 | 0.001555 | 0.001343 |
| mp_count_if_q.test | RUN | 0.207694 | 1.238623 | 0.672657 | 0.001716 | 0.001627 | 0.001671 |
| mp_contains.test | RUN | 0.189285 | 0.737068 | 0.615685 | 0.001436 | 0.001642 | 0.001649 |
| mp_starts_with.test | RUN | 0.192222 | 0.728345 | 0.640773 | 0.001696 | 0.001584 | 0.001731 |
| mp_starts_with_sf.test | RUN | 0.192211 | 0.621881 | 0.590767 | 0.001452 | 0.001520 | 0.001747 |
| mp_repeat.test | RUN | 0.284545 | 3.082355 | 1.216204 | 0.001798 | 0.001806 | 0.001736 |
| mp_repeat_2.test | RUN | 0.030733 | 0.066176 | 0.096013 | 0.000676 | 0.000746 | 0.001562 |
| mp_repeat_3.test | RUN | 0.239133 | 0.388584 | 0.622847 | 0.001392 | 0.001654 | 0.001700 |
| mp_product.test | RUN | 0.230604 | 1.839965 | 0.913501 | 0.001655 | 0.001652 | 0.001710 |
| mp_drop.test | RUN | 0.249011 | 2.327728 | 1.045045 | 0.001622 | 0.001550 | 0.001755 |
| mp_drop_2.test | RUN | 0.028644 | 0.065506 | 0.092640 | 0.000599 | 0.000739 | 0.001578 |
| mp_iota.test | RUN | 0.240335 | 1.960335 | 0.905189 | 0.002813 | 0.001597 | 0.001740 |
| mp_iota_2.test | RUN | 0.260492 | 2.322985 | 1.038022 | 0.002754 | 0.001781 | 0.001549 |
| mp_at.test | RUN | 0.211435 | 1.014426 | 0.689411 | 0.001542 | 0.001625 | 0.001574 |
| mp_at_2.test | RUN | 0.031058 | 0.063151 | 0.094754 | 0.000596 | 0.000758 | 0.001700 |
| mp_at_sf.test | RUN | 0.206750 | 0.620014 | 0.594848 | 0.001621 | 0.001772 | 0.001616 |
| mp_take.test | RUN | 0.333602 | 3.058093 | 1.223211 | 0.001626 | 0.001554 | 0.001667 |
| mp_take_2.test | RUN | 0.031227 | 0.064410 | 0.096098 | 0.000728 | 0.000651 | 0.001504 |
| mp_slice.test | RUN | 0.397609 | 3.096658 | 1.577426 | 0.001580 | 0.001728 | 0.001640 |
| mp_slice_2.test | RUN | 0.029171 | 0.064331 | 0.091653 | 0.000605 | 0.000714 | 0.001627 |
| mp_replace.test | RUN | 0.245677 | 1.555269 | 0.970128 | 0.001624 | 0.001671 | 0.001570 |
| mp_replace_if.test | RUN | 0.239872 | 1.361298 | 0.904138 | 0.001557 | 0.001625 | 0.001655 |
| mp_replace_if_q.test | RUN | 0.232704 | 1.374357 | 0.917855 | 0.001451 | 0.001676 | 0.001633 |
| mp_copy_if.test | RUN | 0.240134 | 1.923409 | 0.869163 | 0.001658 | 0.001586 | 0.001703 |
| mp_copy_if_q.test | RUN | 0.241315 | 1.918918 | 0.869217 | 0.001701 | 0.001565 | 0.001614 |
| mp_remove.test | RUN | 0.228110 | 1.298663 | 0.902286 | 0.001569 | 0.001778 | 0.001554 |
| mp_remove_if.test | RUN | 0.241240 | 2.033145 | 0.915456 | 0.001485 | 0.001810 | 0.001719 |
| mp_remove_if_q.test | RUN | 0.244057 | 2.032396 | 0.924692 | 0.001566 | 0.001735 | 0.001705 |
| mp_partition.test | RUN | 0.242102 | 1.916818 | 0.988254 | 0.001643 | 0.001730 | 0.001664 |
| mp_partition_q.test | RUN | 0.240470 | 1.913276 | 0.988832 | 0.001651 | 0.001815 | 0.001625 |
| mp_sort.test | RUN | 0.232210 | 1.369821 | 0.861932 | 0.001439 | 0.001748 | 0.001686 |
| mp_sort_q.test | RUN | 0.227959 | 1.370422 | 0.863686 | 0.001619 | 0.001744 | 0.001514 |
| mp_find.test | RUN | 0.220834 | 1.479204 | 0.752736 | 0.001451 | 0.001780 | 0.001731 |
| mp_find_if.test | RUN | 0.214647 | 1.351137 | 0.704882 | 0.001518 | 0.001296 | 0.001662 |
| mp_find_if_q.test | RUN | 0.230020 | 1.510996 | 0.880499 | 0.001502 | 0.001733 | 0.001642 |
| mp_reverse.test | RUN | 0.508189 | 4.066892 | 1.736398 | 0.001519 | 0.001764 | 0.001732 |
| mp_fold.test | RUN | 0.840883 | 3.147283 | 4.423610 | 0.001420 | 0.001644 | 0.001661 |
| mp_fold_q.test | RUN | 0.219839 | 1.380975 | 0.839571 | 0.001478 | 0.001752 | 0.001656 |
| mp_fold_q_sf.test | RUN | 0.192146 | 0.616497 | 0.647723 | 0.001467 | 0.001750 | 0.001783 |
| mp_reverse_fold.test | RUN | 0.389613 | 3.028039 | 1.207191 | 0.001696 | 0.001739 | 0.001636 |
| mp_reverse_fold_q.test | RUN | 0.224775 | 1.651536 | 0.886231 | 0.001533 | 0.001645 | 0.001690 |
| mp_unique.test | RUN | 0.223575 | 1.487651 | 0.871362 | 0.001344 | 0.001708 | 0.001670 |
| mp_unique_if.test | RUN | 0.422040 | 3.155339 | 1.364401 | 0.001604 | 0.001703 | 0.001549 |
| mp_unique_if_q.test | RUN | 0.355032 | 3.108178 | 1.118810 | 0.001580 | 0.001692 | 0.001634 |
| mp_all_of.test | RUN | 0.539299 | 1.689642 | 1.452124 | 0.001626 | 0.001612 | 0.001701 |
| mp_all_of_q.test | RUN | 0.192076 | 0.707145 | 0.620221 | 0.001752 | 0.001716 | 0.001636 |
| mp_any_of.test | RUN | 0.535620 | 1.741778 | 1.441246 | 0.001674 | 0.001616 | 0.001448 |
| mp_any_of_q.test | RUN | 0.193106 | 0.723182 | 0.659357 | 0.001661 | 0.001707 | 0.001639 |
| mp_none_of.test | RUN | 0.541762 | 1.724594 | 1.409562 | 0.001658 | 0.001772 | 0.001637 |
| mp_none_of_q.test | RUN | 0.187093 | 0.722646 | 0.635605 | 0.001584 | 0.001776 | 0.001456 |
| mp_replace_at.test | RUN | 0.239988 | 1.487966 | 0.968147 | 0.001685 | 0.001772 | 0.001792 |
| mp_replace_at_c.test | RUN | 0.241648 | 1.504624 | 0.961872 | 0.001743 | 0.001750 | 0.001375 |
| mp_for_each.test | RUN | 0.225565 | 1.010001 | 1.000265 | 0.001622 | 0.001644 | 0.001530 |
| mp_insert.test | RUN | 0.369875 | 3.064274 | 1.412857 | 0.001603 | 0.001876 | 0.001706 |
| mp_insert_2.test | RUN | 0.030498 | 0.064667 | 0.090669 | 0.000579 | 0.000546 | 0.001477 |
| mp_erase.test | RUN | 0.410612 | 3.274080 | 1.665335 | 0.001669 | 0.001733 | 0.001559 |
| mp_erase_2.test | RUN | 0.030490 | 0.064392 | 0.099572 | 0.000698 | 0.000754 | 0.001610 |
| mp_with_index.test | RUN | 0.534923 | 6.612026 | 3.598268 | 0.002266 | 0.001948 | 0.001944 |
| mp_with_index_cx.test | RUN | 0.003495 | 0.020771 | 0.027783 | 0.000663 | 0.000762 | 0.001620 |
| mp_from_sequence.test | RUN | 0.236568 | 1.718815 | 0.915110 | 0.001641 | 0.001593 | 0.001614 |
| mp_from_sequence_2.test | RUN | 0.253783 | 2.013602 | 1.020323 | 0.001645 | 0.001581 | 0.001644 |
| mp_from_sequence_3.test | RUN | 0.203495 | 0.875282 | 0.697171 | 0.001575 | 0.001654 | 0.001508 |
| mp_min_element.test | RUN | 0.202841 | 0.804379 | 0.657133 | 0.001509 | 0.001807 | 0.001434 |
| mp_min_element_2.test | RUN | 0.030273 | 0.064162 | 0.096142 | 0.000555 | 0.000718 | 0.001642 |
| mp_min_element_q.test | RUN | 0.198829 | 0.800599 | 0.650795 | 0.001452 | 0.001604 | 0.001483 |
| mp_min_element_q_2.test | RUN | 0.030515 | 0.062942 | 0.093373 | 0.000633 | 0.000667 | 0.001691 |
| mp_max_element.test | RUN | 0.200315 | 0.797373 | 0.639352 | 0.001674 | 0.001754 | 0.001482 |
| mp_max_element_2.test | RUN | 0.030897 | 0.061310 | 0.095969 | 0.000632 | 0.000657 | 0.001556 |
| mp_max_element_q.test | RUN | 0.202087 | 0.802034 | 0.665571 | 0.001628 | 0.001636 | 0.001675 |
| mp_max_element_q_2.test | RUN | 0.029820 | 0.063633 | 0.090183 | 0.000649 | 0.000756 | 0.001684 |
| mp_nth_element.test | RUN | 0.224507 | 1.143452 | 0.825124 | 0.001621 | 0.001669 | 0.001415 |
| mp_nth_element_q.test | RUN | 0.223273 | 1.125305 | 0.783805 | 0.001576 | 0.001734 | 0.001616 |
| mp_back.test | RUN | 0.216444 | 0.931986 | 0.768973 | 0.001566 | 0.001422 | 0.001469 |
| mp_back_2.test | RUN | 0.031612 | 0.065083 | 0.095891 | 0.000544 | 0.000703 | 0.001454 |
| mp_pop_back.test | RUN | 0.641106 | 6.294053 | 1.641174 | 0.001659 | 0.001778 | 0.001664 |
| mp_pop_back_2.test | RUN | 0.032021 | 0.062738 | 0.093792 | 0.000719 | 0.000765 | 0.001668 |
| mp_flatten.test | RUN | 0.256440 | 2.196422 | 1.087994 | 0.001548 | 0.001601 | 0.001690 |
| mp_rotate_left.test | RUN | 0.260528 | 2.359224 | 1.081770 | 0.001590 | 0.001722 | 0.001473 |
| mp_rotate_right.test | RUN | 0.256413 | 2.377813 | 1.082768 | 0.001676 | 0.001644 | 0.001655 |
| mp_power_set.test | RUN | 0.253429 | 2.251825 | 1.088874 | 0.001564 | 0.001728 | 0.001520 |
| mp_partial_sum.test | RUN | 0.342141 | 3.047629 | 1.239975 | 0.001606 | 0.001736 | 0.001722 |
| mp_iterate.test | RUN | 0.226702 | 0.894437 | 0.847462 | 0.001515 | 0.001687 | 0.001544 |
| mp_pairwise_fold.test | RUN | 0.256199 | 2.075012 | 1.112429 | 0.001550 | 0.001623 | 0.001656 |
| mp_pairwise_fold_q.test | RUN | 0.192828 | 0.600069 | 0.609185 | 0.001583 | 0.001657 | 0.001618 |
| mp_sliding_fold.test | RUN | 0.503347 | 4.033191 | 2.078674 | 0.001658 | 0.001697 | 0.001642 |
| mp_sliding_fold_q.test | RUN | 0.513657 | 4.014996 | 2.073928 | 0.001634 | 0.001731 | 0.001421 |
| mp_intersperse.test | RUN | 0.237936 | 1.498426 | 0.960125 | 0.001540 | 0.001700 | 0.001669 |
| mp_split.test | RUN | 0.349151 | 2.884252 | 1.335511 | 0.001497 | 0.001673 | 0.001768 |
| mp_join.test | RUN | 0.270619 | 2.426739 | 1.191852 | 0.001716 | 0.001760 | 0.001643 |
| integral.test | RUN | 0.202275 | 1.079646 | 0.726372 | 0.001717 | 0.001749 | 0.001546 |
| mp_value.test | RUN | 0.013019 | 0.034704 | 0.046751 | 0.000708 | 0.000779 | 0.001657 |
| mp_identity.test | RUN | 0.192435 | 0.981219 | 0.677451 | 0.001487 | 0.001652 | 0.001658 |
| mp_inherit.test | RUN | 0.187971 | 0.690302 | 0.635887 | 0.001564 | 0.001751 | 0.001609 |
| mp_if.test | RUN | 0.188629 | 0.789093 | 0.623957 | 0.001738 | 0.001604 | 0.001766 |
| mp_if_sf.test | RUN | 0.175177 | 0.579475 | 0.563285 | 0.001652 | 0.001601 | 0.001656 |
| mp_eval_if.test | RUN | 0.194059 | 0.847444 | 0.654083 | 0.001627 | 0.001508 | 0.001586 |
| mp_eval_if_sf.test | RUN | 0.179555 | 0.593440 | 0.592673 | 0.001530 | 0.001707 | 0.001648 |
| mp_valid.test | RUN | 0.184034 | 0.610599 | 0.600399 | 0.001586 | 0.001587 | 0.001692 |
| mp_defer.test | RUN | 0.200210 | 1.023770 | 0.729632 | 0.001614 | 0.001668 | 0.001702 |
| mp_quote.test | RUN | 0.201008 | 1.039321 | 0.739620 | 0.001615 | 0.001704 | 0.001702 |
| mp_invoke_q.test | RUN | 0.219530 | 1.364284 | 0.816989 | 0.001529 | 0.001697 | 0.001652 |
| mp_invoke_q_sf.test | RUN | 0.182145 | 0.598950 | 0.572298 | 0.001450 | 0.001763 | 0.001698 |
| mp_quote_trait.test | RUN | 0.199362 | 1.136950 | 0.699375 | 0.001656 | 0.001530 | 0.001712 |
| mp_cond.test | RUN | 0.193308 | 0.676295 | 0.612062 | 0.001618 | 0.001517 | 0.001667 |
| mp_cond_sf.test | RUN | 0.181562 | 0.594974 | 0.576447 | 0.001586 | 0.001662 | 0.001640 |
| mp_not_fn.test | RUN | 0.178463 | 0.587993 | 0.564373 | 0.001402 | 0.001735 | 0.001613 |
| mp_eval_if_not.test | RUN | 0.190448 | 0.839606 | 0.651685 | 0.001562 | 0.001615 | 0.001688 |
| mp_eval_or.test | RUN | 0.180140 | 0.447875 | 0.603008 | 0.001476 | 0.001603 | 0.001550 |
| mp_compose.test | RUN | 0.209888 | 1.391011 | 0.781745 | 0.001637 | 0.001592 | 0.001424 |
| mp_valid_and_true.test | RUN | 0.183500 | 0.718124 | 0.605861 | 0.001554 | 0.001686 | 0.001686 |
| mp_compose_sf.test | COMPILE | 0.042546 | 0.081793 | 0.141153 | — | — | — |
| integer_sequence.test | RUN | 0.227039 | 1.383585 | 0.893778 | 0.001567 | 0.001703 | 0.001443 |
| tuple_for_each.test | RUN | 0.181575 | 0.510168 | 0.639171 | 0.001489 | 0.001658 | 0.001583 |
| tuple_for_each_cx.test | COMPILE | 0.033036 | 0.069794 | 0.103345 | — | — | — |
| tuple_apply.test | RUN | 0.185902 | 0.501302 | 0.633719 | 0.001620 | 0.001714 | 0.001662 |
| tuple_apply_cx.test | COMPILE | 0.050217 | 0.101286 | 0.148748 | — | — | — |
| construct_from_tuple.test | RUN | 0.187896 | 0.541730 | 0.637265 | 0.001558 | 0.001677 | 0.001690 |
| construct_from_tuple_cx.test | COMPILE | 0.052113 | 0.101027 | 0.146529 | — | — | — |
| tuple_transform.test | RUN | 0.296050 | 1.079062 | 1.227378 | 0.001816 | 0.001559 | 0.001502 |
| tuple_transform_2.test | RUN | 0.257582 | 0.791693 | 1.115071 | 0.001738 | 0.001652 | 0.001700 |
| tuple_transform_cx.test | COMPILE | 0.043541 | 0.099004 | 0.146280 | — | — | — |
| mp_set_contains.test | RUN | 0.190443 | 0.713403 | 0.635621 | 0.001605 | 0.001640 | 0.001726 |
| mp_set_push_back.test | RUN | 0.257416 | 2.261268 | 1.089494 | 0.001759 | 0.001604 | 0.001646 |
| mp_set_push_front.test | RUN | 0.333938 | 2.700516 | 1.256150 | 0.001788 | 0.001666 | 0.001709 |
| mp_is_set.test | RUN | 0.192549 | 0.730813 | 0.646718 | 0.001848 | 0.001688 | 0.001668 |
| mp_set_union.test | RUN | 0.243188 | 1.932386 | 1.032209 | 0.001956 | 0.001678 | 0.001419 |
| mp_set_union_sf.test | RUN | 0.182560 | 0.576072 | 0.595084 | 0.001642 | 0.001580 | 0.001598 |
| mp_set_difference.test | RUN | 0.220494 | 1.497162 | 0.875069 | 0.001611 | 0.001640 | 0.001581 |
| mp_set_difference_sf.test | RUN | 0.182755 | 0.578046 | 0.589340 | 0.001565 | 0.001637 | 0.001669 |
| mp_set_intersection.test | RUN | 0.220751 | 1.492555 | 0.863107 | 0.001558 | 0.001699 | 0.001626 |
| mp_set_intersection_sf.test | RUN | 0.184315 | 0.574946 | 0.590253 | 0.001471 | 0.001642 | 0.001416 |
| mp_all.test | RUN | 0.189587 | 0.710736 | 0.622018 | 0.001919 | 0.001700 | 0.001658 |
| mp_all_2.test | RUN | 0.547204 | 1.548882 | 1.446713 | 0.001695 | 0.001522 | 0.001634 |
| mp_and.test | RUN | 0.186179 | 0.717755 | 0.614429 | 0.001530 | 0.001732 | 0.001699 |
| mp_any.test | RUN | 0.190918 | 0.721603 | 0.630483 | 0.001431 | 0.001759 | 0.001782 |
| mp_any_2.test | RUN | 0.550416 | 1.523730 | 1.416585 | 0.001774 | 0.001752 | 0.001578 |
| mp_or.test | RUN | 0.191570 | 0.724280 | 0.637939 | 0.001622 | 0.001675 | 0.001662 |
| mp_same.test | RUN | 0.366219 | 1.217591 | 1.009604 | 0.001435 | 0.001696 | 0.001540 |
| mp_plus.test | RUN | 0.201269 | 0.861583 | 0.675816 | 0.001538 | 0.001406 | 0.001549 |
| mp_less.test | RUN | 0.193984 | 0.710021 | 0.603529 | 0.001551 | 0.001566 | 0.001628 |
| mp_min.test | RUN | 0.183799 | 0.667378 | 0.610201 | 0.001756 | 0.001678 | 0.001584 |
| mp_max.test | RUN | 0.190490 | 0.736207 | 0.637713 | 0.001545 | 0.001784 | 0.001652 |
| mp_similar.test | RUN | 0.189465 | 0.715216 | 0.631279 | 0.001579 | 0.001542 | 0.001535 |
| mp_map_find.test | RUN | 0.221139 | 1.332166 | 0.828501 | 0.001578 | 0.001475 | 0.001641 |
| mp_map_find_2.test | RUN | 0.203455 | 0.501928 | 0.704816 | 0.001727 | 0.001670 | 0.001835 |
| mp_map_find_3.test | RUN | 0.207178 | 0.501951 | 0.718655 | 0.001423 | 0.001393 | 0.001585 |
| mp_map_find_4.test | RUN | 0.190955 | 0.471640 | 0.657536 | 0.001443 | 0.001496 | 0.001426 |
| mp_map_contains.test | RUN | 0.196399 | 0.741027 | 0.650546 | 0.001744 | 0.001786 | 0.001663 |
| mp_map_insert.test | RUN | 0.265606 | 2.552617 | 1.185622 | 0.001661 | 0.001654 | 0.001589 |
| mp_map_replace.test | RUN | 0.362697 | 2.887850 | 1.368136 | 0.001643 | 0.001600 | 0.001728 |
| mp_map_erase.test | RUN | 0.262008 | 2.134633 | 1.138427 | 0.001392 | 0.001696 | 0.001398 |
| mp_map_update.test | RUN | 0.220880 | 1.390649 | 0.873460 | 0.001653 | 0.001675 | 0.001365 |
| mp_map_update_q.test | RUN | 0.222761 | 1.392247 | 0.855615 | 0.001763 | 0.001471 | 0.001401 |
| mp_map_keys.test | RUN | 0.226442 | 1.235341 | 0.831363 | 0.001498 | 0.001672 | 0.001482 |
| mp_is_map.test | RUN | 0.198096 | 0.734341 | 0.680297 | 0.001620 | 0.001503 | 0.001702 |
| mp_bind.test | RUN | 0.254898 | 2.242057 | 1.017675 | 0.001570 | 0.001560 | 0.001591 |
| mp_bind_q.test | RUN | 0.218572 | 1.371802 | 0.813105 | 0.001608 | 0.001604 | 0.001484 |
| mp_bind_front.test | RUN | 0.215566 | 1.497946 | 0.778506 | 0.001382 | 0.001496 | 0.001495 |
| mp_bind_back.test | RUN | 0.218007 | 1.486984 | 0.787489 | 0.001578 | 0.001565 | 0.001304 |
| mp_lambda.test | RUN | 0.517049 | 4.514267 | 2.125885 | 0.001710 | 0.001181 | 0.001455 |
| mpl.test | RUN | 0.441873 | 1.172061 | 1.694690 | 0.001619 | 0.001707 | 0.001640 |
| mpl_list.test | RUN | 0.238068 | 0.892804 | 0.767080 | 0.001585 | 0.001718 | 0.001632 |
| mpl_tuple.test | RUN | 0.246481 | 0.910650 | 0.767262 | 0.001612 | 0.001608 | 0.001349 |
| version.test | RUN | 0.119371 | 0.316699 | 0.391409 | 0.001677 | 0.001730 | 0.001553 |
| mp11_version.test | RUN | 0.145695 | 0.367137 | 0.456608 | 0.001373 | 0.001922 | 0.001450 |
| list_version.test | RUN | 0.127179 | 0.324686 | 0.406327 | 0.001541 | 0.001600 | 0.001535 |
| algorithm_version.test | RUN | 0.139717 | 0.368485 | 0.446145 | 0.001485 | 0.001649 | 0.001353 |
| integral_version.test | RUN | 0.122419 | 0.341024 | 0.396506 | 0.001544 | 0.001609 | 0.001446 |
| utility_version.test | RUN | 0.123865 | 0.351674 | 0.412471 | 0.001519 | 0.001670 | 0.001698 |
| function_version.test | RUN | 0.125466 | 0.318995 | 0.404801 | 0.001367 | 0.001775 | 0.001651 |
| map_version.test | RUN | 0.140394 | 0.345921 | 0.433832 | 0.001544 | 0.001656 | 0.001387 |
| set_version.test | RUN | 0.126389 | 0.330884 | 0.401857 | 0.001616 | 0.001468 | 0.001374 |
| bind_version.test | RUN | 0.136772 | 0.347798 | 0.428793 | 0.001446 | 0.001565 | 0.001670 |
| integer_sequence_version.test | RUN | 0.119767 | 0.316895 | 0.393375 | 0.001460 | 0.001408 | 0.001082 |
| tuple_version.test | RUN | 0.137713 | 0.346211 | 0.353420 | 0.001415 | 0.001243 | 0.001131 |
| mpl_version.test | RUN | 0.110251 | 0.249958 | 0.356484 | 0.001169 | 0.001212 | 0.001074 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.004× | 0.995×, 1.014× | 1.003× |
| clang | 1.084× | 1.079×, 1.088× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44597827043).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000976s | 0.000969s | 0.000980s | byte equality observed |
| bind_version.test | 10 | 0.000969s | 0.000974s | 0.000986s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000997s | 0.000969s | 0.001039s | byte equality observed |
| function_version.test | 10 | 0.000982s | 0.000958s | 0.001035s | byte equality observed |
| integer_sequence.test | 10 | 0.000977s | 0.000982s | 0.001023s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000977s | 0.000952s | 0.001071s | byte equality observed |
| integral.test | 10 | 0.000969s | 0.000952s | 0.001079s | byte equality observed |
| integral_version.test | 10 | 0.000963s | 0.000936s | 0.001043s | byte equality observed |
| list_version.test | 10 | 0.000978s | 0.000939s | 0.001060s | byte equality observed |
| map_version.test | 10 | 0.000974s | 0.000941s | 0.001075s | byte equality observed |
| mp11_version.test | 10 | 0.000979s | 0.000950s | 0.001047s | byte equality observed |
| mp_all.test | 10 | 0.000973s | 0.000961s | 0.001082s | byte equality observed |
| mp_all_2.test | 10 | 0.000979s | 0.000949s | 0.001058s | byte equality observed |
| mp_all_of.test | 10 | 0.000982s | 0.000945s | 0.001025s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000973s | 0.000956s | 0.001032s | byte equality observed |
| mp_and.test | 10 | 0.000988s | 0.000964s | 0.001117s | byte equality observed |
| mp_any.test | 10 | 0.001006s | 0.000989s | 0.001037s | byte equality observed |
| mp_any_2.test | 10 | 0.001060s | 0.000970s | 0.001059s | byte equality observed |
| mp_any_of.test | 10 | 0.001075s | 0.000975s | 0.001055s | byte equality observed |
| mp_any_of_q.test | 10 | 0.001048s | 0.001015s | 0.001029s | byte equality observed |
| mp_append.test | 10 | 0.001060s | 0.001001s | 0.001005s | byte equality observed |
| mp_append_2.test | 10 | 0.001074s | 0.001058s | 0.001033s | byte equality observed |
| mp_append_3.test | 10 | 0.000473s | 0.000468s | 0.001019s | byte equality observed |
| mp_append_sf.test | 10 | 0.001030s | 0.001014s | 0.001020s | byte equality observed |
| mp_apply_q.test | 10 | 0.001042s | 0.001091s | 0.000986s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.001042s | 0.001034s | 0.001016s | byte equality observed |
| mp_assign.test | 10 | 0.001039s | 0.001035s | 0.001024s | byte equality observed |
| mp_assign_2.test | 10 | 0.000471s | 0.000476s | 0.001007s | byte equality observed |
| mp_at.test | 10 | 0.001032s | 0.001053s | 0.001024s | byte equality observed |
| mp_at_2.test | 10 | 0.000479s | 0.000474s | 0.001028s | byte equality observed |
| mp_at_sf.test | 10 | 0.001038s | 0.001071s | 0.001018s | byte equality observed |
| mp_back.test | 10 | 0.001050s | 0.001071s | 0.001011s | byte equality observed |
| mp_back_2.test | 10 | 0.000464s | 0.000488s | 0.001004s | byte equality observed |
| mp_bind.test | 10 | 0.001019s | 0.001053s | 0.001010s | byte equality observed |
| mp_bind_back.test | 10 | 0.001014s | 0.001058s | 0.001056s | byte equality observed |
| mp_bind_front.test | 10 | 0.001030s | 0.001049s | 0.001026s | byte equality observed |
| mp_bind_q.test | 10 | 0.001024s | 0.001052s | 0.001046s | byte equality observed |
| mp_clear.test | 10 | 0.001024s | 0.001018s | 0.001039s | byte equality observed |
| mp_clear_2.test | 10 | 0.000465s | 0.000473s | 0.001009s | byte equality observed |
| mp_compose.test | 10 | 0.001030s | 0.001039s | 0.001022s | byte equality observed |
| mp_cond.test | 10 | 0.001049s | 0.001044s | 0.001029s | byte equality observed |
| mp_cond_sf.test | 10 | 0.001065s | 0.001074s | 0.001060s | byte equality observed |
| mp_contains.test | 10 | 0.001022s | 0.001056s | 0.001011s | byte equality observed |
| mp_copy_if.test | 10 | 0.001016s | 0.001047s | 0.001053s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.001058s | 0.001049s | 0.001030s | byte equality observed |
| mp_count.test | 10 | 0.001029s | 0.001037s | 0.001049s | byte equality observed |
| mp_count_if.test | 10 | 0.001044s | 0.001065s | 0.001013s | byte equality observed |
| mp_count_if_q.test | 10 | 0.001051s | 0.001069s | 0.001058s | byte equality observed |
| mp_defer.test | 10 | 0.001045s | 0.001033s | 0.001047s | byte equality observed |
| mp_drop.test | 10 | 0.001059s | 0.001030s | 0.001031s | byte equality observed |
| mp_drop_2.test | 10 | 0.000469s | 0.000464s | 0.001004s | byte equality observed |
| mp_empty.test | 10 | 0.001061s | 0.001057s | 0.001005s | byte equality observed |
| mp_empty_2.test | 10 | 0.000479s | 0.000460s | 0.001009s | byte equality observed |
| mp_erase.test | 10 | 0.001082s | 0.001053s | 0.001005s | byte equality observed |
| mp_erase_2.test | 10 | 0.000457s | 0.000450s | 0.000994s | byte equality observed |
| mp_eval_if.test | 10 | 0.001014s | 0.001019s | 0.001022s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.001022s | 0.001007s | 0.001035s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.001027s | 0.001021s | 0.001014s | byte equality observed |
| mp_eval_or.test | 10 | 0.001005s | 0.001063s | 0.001066s | byte equality observed |
| mp_fill.test | 10 | 0.001028s | 0.001031s | 0.001025s | byte equality observed |
| mp_fill_2.test | 10 | 0.000472s | 0.000457s | 0.001028s | byte equality observed |
| mp_filter.test | 10 | 0.001036s | 0.001051s | 0.001010s | byte equality observed |
| mp_find.test | 10 | 0.001027s | 0.001066s | 0.001023s | byte equality observed |
| mp_find_if.test | 10 | 0.001046s | 0.001070s | 0.001006s | byte equality observed |
| mp_find_if_q.test | 10 | 0.001016s | 0.001048s | 0.001044s | byte equality observed |
| mp_flatten.test | 10 | 0.001051s | 0.001027s | 0.001021s | byte equality observed |
| mp_fold.test | 10 | 0.001051s | 0.001064s | 0.001042s | byte equality observed |
| mp_fold_q.test | 10 | 0.001030s | 0.001093s | 0.001053s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.001035s | 0.001038s | 0.001015s | byte equality observed |
| mp_for_each.test | 10 | 0.001013s | 0.001052s | 0.001036s | byte equality observed |
| mp_from_sequence.test | 10 | 0.001019s | 0.001040s | 0.001018s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.001052s | 0.001041s | 0.001034s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.001041s | 0.001063s | 0.001068s | byte equality observed |
| mp_front.test | 10 | 0.001040s | 0.001027s | 0.001036s | byte equality observed |
| mp_front_2.test | 10 | 0.000462s | 0.000455s | 0.000997s | byte equality observed |
| mp_identity.test | 10 | 0.001033s | 0.001072s | 0.001005s | byte equality observed |
| mp_if.test | 10 | 0.001004s | 0.001074s | 0.001008s | byte equality observed |
| mp_if_sf.test | 10 | 0.001017s | 0.001045s | 0.001010s | byte equality observed |
| mp_inherit.test | 10 | 0.001007s | 0.001054s | 0.001037s | byte equality observed |
| mp_insert.test | 10 | 0.001036s | 0.001073s | 0.000991s | byte equality observed |
| mp_insert_2.test | 10 | 0.000479s | 0.000456s | 0.001040s | byte equality observed |
| mp_intersperse.test | 10 | 0.001010s | 0.001042s | 0.001004s | byte equality observed |
| mp_invoke_q.test | 10 | 0.001060s | 0.001027s | 0.001012s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.001019s | 0.001026s | 0.001044s | byte equality observed |
| mp_iota.test | 10 | 0.001018s | 0.001045s | 0.001015s | byte equality observed |
| mp_iota_2.test | 10 | 0.001012s | 0.001069s | 0.001012s | byte equality observed |
| mp_is_list.test | 10 | 0.001016s | 0.001075s | 0.001009s | byte equality observed |
| mp_is_map.test | 10 | 0.001048s | 0.001084s | 0.000995s | byte equality observed |
| mp_is_set.test | 10 | 0.001008s | 0.001054s | 0.001000s | byte equality observed |
| mp_is_value_list.test | 10 | 0.001057s | 0.001034s | 0.001025s | byte equality observed |
| mp_iterate.test | 10 | 0.001037s | 0.001091s | 0.001012s | byte equality observed |
| mp_join.test | 10 | 0.001042s | 0.001046s | 0.001004s | byte equality observed |
| mp_lambda.test | 10 | 0.001100s | 0.001071s | 0.001010s | byte equality observed |
| mp_less.test | 10 | 0.001059s | 0.001046s | 0.001015s | byte equality observed |
| mp_list_c.test | 10 | 0.001025s | 0.001031s | 0.001055s | byte equality observed |
| mp_list_v.test | 10 | 0.000469s | 0.000462s | 0.001030s | byte equality observed |
| mp_map_contains.test | 10 | 0.001015s | 0.001061s | 0.001011s | byte equality observed |
| mp_map_erase.test | 10 | 0.001024s | 0.001045s | 0.001001s | byte equality observed |
| mp_map_find.test | 10 | 0.001041s | 0.001057s | 0.000995s | byte equality observed |
| mp_map_find_2.test | 10 | 0.001006s | 0.001013s | 0.001073s | byte equality observed |
| mp_map_find_3.test | 10 | 0.001007s | 0.001040s | 0.001009s | byte equality observed |
| mp_map_find_4.test | 10 | 0.001026s | 0.001022s | 0.001018s | byte equality observed |
| mp_map_insert.test | 10 | 0.001049s | 0.001048s | 0.001011s | byte equality observed |
| mp_map_keys.test | 10 | 0.001053s | 0.001089s | 0.001030s | byte equality observed |
| mp_map_replace.test | 10 | 0.001054s | 0.001050s | 0.001058s | byte equality observed |
| mp_map_update.test | 10 | 0.001056s | 0.001031s | 0.001003s | byte equality observed |
| mp_map_update_q.test | 10 | 0.001041s | 0.001060s | 0.001065s | byte equality observed |
| mp_max.test | 10 | 0.001040s | 0.001050s | 0.001043s | byte equality observed |
| mp_max_element.test | 10 | 0.001017s | 0.001072s | 0.001043s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000464s | 0.000452s | 0.000970s | byte equality observed |
| mp_max_element_q.test | 10 | 0.001039s | 0.001051s | 0.001015s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000451s | 0.000450s | 0.000980s | byte equality observed |
| mp_min.test | 10 | 0.001036s | 0.001062s | 0.000997s | byte equality observed |
| mp_min_element.test | 10 | 0.001034s | 0.001030s | 0.001029s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000459s | 0.000471s | 0.000990s | byte equality observed |
| mp_min_element_q.test | 10 | 0.001027s | 0.001027s | 0.001004s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000453s | 0.000454s | 0.000984s | byte equality observed |
| mp_none_of.test | 10 | 0.001020s | 0.001022s | 0.001022s | byte equality observed |
| mp_none_of_q.test | 10 | 0.001013s | 0.001035s | 0.001010s | byte equality observed |
| mp_not_fn.test | 10 | 0.001011s | 0.001030s | 0.001002s | byte equality observed |
| mp_nth_element.test | 10 | 0.000994s | 0.001025s | 0.000991s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.001021s | 0.001006s | 0.000998s | byte equality observed |
| mp_or.test | 10 | 0.001004s | 0.001107s | 0.001002s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.001027s | 0.001010s | 0.000993s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.001007s | 0.001039s | 0.000995s | byte equality observed |
| mp_partial_sum.test | 10 | 0.001041s | 0.001057s | 0.000986s | byte equality observed |
| mp_partition.test | 10 | 0.001000s | 0.001028s | 0.001035s | byte equality observed |
| mp_partition_q.test | 10 | 0.001022s | 0.001038s | 0.001031s | byte equality observed |
| mp_plus.test | 10 | 0.001008s | 0.001049s | 0.001059s | byte equality observed |
| mp_pop_back.test | 10 | 0.001042s | 0.001054s | 0.001009s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000455s | 0.000473s | 0.001004s | byte equality observed |
| mp_pop_front.test | 10 | 0.001054s | 0.001004s | 0.001026s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000448s | 0.000468s | 0.000974s | byte equality observed |
| mp_power_set.test | 10 | 0.001039s | 0.001009s | 0.001004s | byte equality observed |
| mp_product.test | 10 | 0.001006s | 0.001041s | 0.001029s | byte equality observed |
| mp_push_back.test | 10 | 0.001033s | 0.001046s | 0.001021s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000464s | 0.000465s | 0.000962s | byte equality observed |
| mp_push_front.test | 10 | 0.001039s | 0.001061s | 0.001012s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000463s | 0.000437s | 0.000998s | byte equality observed |
| mp_quote.test | 10 | 0.001036s | 0.001010s | 0.001011s | byte equality observed |
| mp_quote_trait.test | 10 | 0.001004s | 0.001033s | 0.001018s | byte equality observed |
| mp_remove.test | 10 | 0.001013s | 0.001036s | 0.001033s | byte equality observed |
| mp_remove_if.test | 10 | 0.001040s | 0.001037s | 0.001019s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.001067s | 0.001094s | 0.001022s | byte equality observed |
| mp_rename.test | 10 | 0.001030s | 0.001052s | 0.001038s | byte equality observed |
| mp_rename_2.test | 10 | 0.000464s | 0.000449s | 0.001001s | byte equality observed |
| mp_rename_v.test | 10 | 0.000457s | 0.000447s | 0.000964s | byte equality observed |
| mp_repeat.test | 10 | 0.001061s | 0.001053s | 0.001010s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000466s | 0.000450s | 0.000957s | byte equality observed |
| mp_repeat_3.test | 10 | 0.001013s | 0.001030s | 0.001000s | byte equality observed |
| mp_replace.test | 10 | 0.001002s | 0.001065s | 0.001051s | byte equality observed |
| mp_replace_at.test | 10 | 0.001003s | 0.001027s | 0.000991s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.001011s | 0.001029s | 0.000995s | byte equality observed |
| mp_replace_front.test | 10 | 0.001018s | 0.001047s | 0.000998s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000461s | 0.000468s | 0.001010s | byte equality observed |
| mp_replace_if.test | 10 | 0.001031s | 0.001011s | 0.000996s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.001005s | 0.001045s | 0.001050s | byte equality observed |
| mp_replace_second.test | 10 | 0.001057s | 0.001053s | 0.000998s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000458s | 0.000446s | 0.001023s | byte equality observed |
| mp_replace_third.test | 10 | 0.001032s | 0.001085s | 0.000984s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000460s | 0.000461s | 0.001020s | byte equality observed |
| mp_reverse.test | 10 | 0.001051s | 0.001020s | 0.000994s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.001063s | 0.001027s | 0.001004s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.001043s | 0.000999s | 0.001011s | byte equality observed |
| mp_rotate_left.test | 10 | 0.001028s | 0.001036s | 0.001008s | byte equality observed |
| mp_rotate_right.test | 10 | 0.001030s | 0.001049s | 0.001029s | byte equality observed |
| mp_same.test | 10 | 0.001048s | 0.001068s | 0.000994s | byte equality observed |
| mp_second.test | 10 | 0.001036s | 0.001026s | 0.001035s | byte equality observed |
| mp_second_2.test | 10 | 0.000466s | 0.000467s | 0.000990s | byte equality observed |
| mp_set_contains.test | 10 | 0.001027s | 0.001035s | 0.001017s | byte equality observed |
| mp_set_difference.test | 10 | 0.001003s | 0.001027s | 0.001000s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.001034s | 0.001041s | 0.001017s | byte equality observed |
| mp_set_intersection.test | 10 | 0.001042s | 0.001034s | 0.001022s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.001047s | 0.001019s | 0.001044s | byte equality observed |
| mp_set_push_back.test | 10 | 0.001042s | 0.001018s | 0.001010s | byte equality observed |
| mp_set_push_front.test | 10 | 0.001040s | 0.001049s | 0.001006s | byte equality observed |
| mp_set_union.test | 10 | 0.001020s | 0.001022s | 0.001011s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.001041s | 0.001024s | 0.001043s | byte equality observed |
| mp_similar.test | 10 | 0.001027s | 0.001071s | 0.001037s | byte equality observed |
| mp_size.test | 10 | 0.001009s | 0.001021s | 0.001031s | byte equality observed |
| mp_size_2.test | 10 | 0.000459s | 0.000470s | 0.000992s | byte equality observed |
| mp_slice.test | 10 | 0.001048s | 0.001046s | 0.000991s | byte equality observed |
| mp_slice_2.test | 10 | 0.000458s | 0.000444s | 0.001006s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.001058s | 0.001035s | 0.001018s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.001066s | 0.001047s | 0.000999s | byte equality observed |
| mp_sort.test | 10 | 0.001020s | 0.001016s | 0.001019s | byte equality observed |
| mp_sort_q.test | 10 | 0.001024s | 0.001008s | 0.001013s | byte equality observed |
| mp_split.test | 10 | 0.001039s | 0.001056s | 0.000997s | byte equality observed |
| mp_starts_with.test | 10 | 0.001082s | 0.001020s | 0.001007s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.001053s | 0.001009s | 0.001030s | byte equality observed |
| mp_take.test | 10 | 0.001047s | 0.001037s | 0.001022s | byte equality observed |
| mp_take_2.test | 10 | 0.000464s | 0.000452s | 0.000997s | byte equality observed |
| mp_third.test | 10 | 0.001051s | 0.001048s | 0.001028s | byte equality observed |
| mp_third_2.test | 10 | 0.000467s | 0.000464s | 0.000983s | byte equality observed |
| mp_transform.test | 10 | 0.001043s | 0.001045s | 0.001014s | byte equality observed |
| mp_transform_2.test | 10 | 0.001000s | 0.000982s | 0.000987s | byte equality observed |
| mp_transform_front.test | 10 | 0.001037s | 0.001035s | 0.000998s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000474s | 0.000462s | 0.000983s | byte equality observed |
| mp_transform_if.test | 10 | 0.001036s | 0.001049s | 0.001001s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.001006s | 0.001032s | 0.001049s | byte equality observed |
| mp_transform_q.test | 10 | 0.001070s | 0.001060s | 0.001070s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.001008s | 0.001014s | 0.000999s | byte equality observed |
| mp_transform_second.test | 10 | 0.001010s | 0.001020s | 0.001010s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000466s | 0.000454s | 0.000998s | byte equality observed |
| mp_transform_sf.test | 10 | 0.001004s | 0.001086s | 0.001013s | byte equality observed |
| mp_transform_third.test | 10 | 0.001002s | 0.001024s | 0.001050s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000452s | 0.000454s | 0.001006s | byte equality observed |
| mp_unique.test | 10 | 0.001013s | 0.001036s | 0.000991s | byte equality observed |
| mp_unique_if.test | 10 | 0.001014s | 0.001039s | 0.001023s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.001043s | 0.001037s | 0.001027s | byte equality observed |
| mp_valid.test | 10 | 0.001045s | 0.001051s | 0.001010s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.001022s | 0.001012s | 0.001032s | byte equality observed |
| mp_value.test | 10 | 0.000457s | 0.000455s | 0.000999s | byte equality observed |
| mp_with_index.test | 10 | 0.001420s | 0.001385s | 0.001273s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000446s | 0.000464s | 0.000973s | byte equality observed |
| mpl.test | 10 | 0.001026s | 0.001041s | 0.001030s | byte equality observed |
| mpl_list.test | 10 | 0.001045s | 0.001039s | 0.001012s | byte equality observed |
| mpl_tuple.test | 10 | 0.001016s | 0.001081s | 0.001020s | byte equality observed |
| mpl_version.test | 10 | 0.001015s | 0.001011s | 0.001032s | byte equality observed |
| set_version.test | 10 | 0.001018s | 0.001024s | 0.001016s | byte equality observed |
| tuple_apply.test | 10 | 0.001030s | 0.001056s | 0.000996s | byte equality observed |
| tuple_for_each.test | 10 | 0.001005s | 0.001003s | 0.001061s | byte equality observed |
| tuple_transform.test | 10 | 0.001046s | 0.001022s | 0.001033s | byte equality observed |
| tuple_transform_2.test | 10 | 0.001008s | 0.001070s | 0.001052s | byte equality observed |
| tuple_version.test | 10 | 0.001022s | 0.001011s | 0.001028s | byte equality observed |
| utility_version.test | 10 | 0.001050s | 0.001036s | 0.001031s | byte equality observed |
| version.test | 10 | 0.001011s | 0.000998s | 0.001016s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44597827043).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
