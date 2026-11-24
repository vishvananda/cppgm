# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.036253 | 0.071079 | 0.123479 | — | — | — |
| complex_h.test | COMPILE | 0.147543 | 0.317259 | 0.479063 | — | — | — |
| mp_size.test | RUN | 0.172685 | 0.963150 | 0.557470 | 0.001722 | 0.001696 | 0.001623 |
| mp_size_2.test | RUN | 0.014144 | 0.035559 | 0.052108 | 0.000651 | 0.000722 | 0.001373 |
| mp_empty.test | RUN | 0.165760 | 0.607541 | 0.564946 | 0.001473 | 0.001812 | 0.001715 |
| mp_empty_2.test | RUN | 0.014930 | 0.038153 | 0.058304 | 0.000566 | 0.000725 | 0.001537 |
| mp_assign.test | RUN | 0.191750 | 1.230478 | 0.716562 | 0.001506 | 0.001915 | 0.001425 |
| mp_assign_2.test | RUN | 0.016432 | 0.036123 | 0.058735 | 0.000716 | 0.000804 | 0.001447 |
| mp_clear.test | RUN | 0.164318 | 0.557229 | 0.531138 | 0.001484 | 0.001607 | 0.001405 |
| mp_clear_2.test | RUN | 0.017197 | 0.035934 | 0.058661 | 0.000587 | 0.000578 | 0.001717 |
| mp_front.test | RUN | 0.172457 | 0.850888 | 0.640589 | 0.001378 | 0.001790 | 0.001664 |
| mp_front_2.test | RUN | 0.015782 | 0.034863 | 0.057648 | 0.000649 | 0.000653 | 0.001756 |
| mp_pop_front.test | RUN | 0.165570 | 0.893658 | 0.636774 | 0.001568 | 0.001615 | 0.001276 |
| mp_pop_front_2.test | RUN | 0.016500 | 0.036793 | 0.056003 | 0.000580 | 0.000661 | 0.001411 |
| mp_second.test | RUN | 0.169713 | 0.567041 | 0.563860 | 0.001540 | 0.001459 | 0.001506 |
| mp_second_2.test | RUN | 0.015776 | 0.038072 | 0.058111 | 0.000660 | 0.000681 | 0.001788 |
| mp_third.test | RUN | 0.162361 | 0.531000 | 0.570297 | 0.001839 | 0.001816 | 0.001440 |
| mp_third_2.test | RUN | 0.015941 | 0.033521 | 0.053054 | 0.000617 | 0.000681 | 0.001345 |
| mp_push_front.test | RUN | 0.215700 | 1.862434 | 1.039965 | 0.001490 | 0.001779 | 0.001504 |
| mp_push_front_2.test | RUN | 0.015904 | 0.034710 | 0.056526 | 0.000637 | 0.000766 | 0.001519 |
| mp_push_back.test | RUN | 0.216664 | 1.877041 | 1.044302 | 0.001671 | 0.001715 | 0.001389 |
| mp_push_back_2.test | RUN | 0.015361 | 0.037749 | 0.051229 | 0.000631 | 0.000790 | 0.001809 |
| mp_rename.test | RUN | 0.201395 | 1.701725 | 0.839849 | 0.001615 | 0.001651 | 0.001728 |
| mp_rename_2.test | RUN | 0.016429 | 0.038614 | 0.060194 | 0.000692 | 0.000768 | 0.001793 |
| mp_append.test | RUN | 0.211181 | 1.965209 | 0.911049 | 0.001580 | 0.001794 | 0.001770 |
| mp_append_2.test | RUN | 0.445155 | 4.373695 | 1.258769 | 0.001744 | 0.001731 | 0.001757 |
| mp_append_3.test | RUN | 0.016184 | 0.034853 | 0.057949 | 0.000708 | 0.000654 | 0.001715 |
| mp_append_sf.test | RUN | 0.160633 | 0.488885 | 0.567911 | 0.001683 | 0.001678 | 0.001681 |
| mp_replace_front.test | RUN | 0.197628 | 1.399475 | 0.743084 | 0.001384 | 0.001760 | 0.001649 |
| mp_replace_front_2.test | RUN | 0.015495 | 0.035789 | 0.059244 | 0.000551 | 0.000756 | 0.001578 |
| mp_replace_second.test | RUN | 0.186683 | 0.897616 | 0.712289 | 0.001685 | 0.001834 | 0.001845 |
| mp_replace_second_2.test | RUN | 0.015420 | 0.036972 | 0.052712 | 0.000612 | 0.000724 | 0.001382 |
| mp_replace_third.test | RUN | 0.182226 | 0.752554 | 0.679098 | 0.001670 | 0.001850 | 0.001675 |
| mp_replace_third_2.test | RUN | 0.016754 | 0.035702 | 0.058742 | 0.000591 | 0.000735 | 0.001705 |
| mp_apply_q.test | RUN | 0.201849 | 1.735813 | 0.874790 | 0.001660 | 0.001734 | 0.001618 |
| mp_apply_q_sf.test | RUN | 0.160352 | 0.509179 | 0.530608 | 0.001705 | 0.001760 | 0.001727 |
| mp_is_list.test | RUN | 0.162288 | 0.602953 | 0.563175 | 0.001440 | 0.001774 | 0.001790 |
| mp_list_c.test | RUN | 0.164472 | 0.745090 | 0.595770 | 0.001655 | 0.001731 | 0.001726 |
| mp_transform_front.test | RUN | 0.194060 | 1.443811 | 0.723355 | 0.001457 | 0.001631 | 0.001556 |
| mp_transform_front_2.test | RUN | 0.016685 | 0.034705 | 0.058942 | 0.000603 | 0.000558 | 0.001716 |
| mp_transform_second.test | RUN | 0.179029 | 1.176012 | 0.709350 | 0.001498 | 0.001722 | 0.001496 |
| mp_transform_second_2.test | RUN | 0.016333 | 0.037591 | 0.056357 | 0.000528 | 0.000739 | 0.001698 |
| mp_transform_third.test | RUN | 0.173597 | 0.898470 | 0.644612 | 0.001598 | 0.001636 | 0.001717 |
| mp_transform_third_2.test | RUN | 0.016039 | 0.037470 | 0.050641 | 0.000714 | 0.000752 | 0.001439 |
| mp_list_v.test | RUN | 0.016863 | 0.037082 | 0.051896 | 0.000601 | 0.000636 | 0.001346 |
| mp_rename_v.test | RUN | 0.016663 | 0.036739 | 0.050127 | 0.000541 | 0.000648 | 0.001370 |
| mp_is_value_list.test | RUN | 0.160329 | 0.371712 | 0.514812 | 0.001626 | 0.001840 | 0.001722 |
| mp_transform.test | RUN | 0.369419 | 2.896349 | 1.577934 | 0.001839 | 0.001622 | 0.001702 |
| mp_transform_2.test | RUN | 0.152632 | 0.359445 | 0.530771 | 0.001740 | 0.001776 | 0.001399 |
| mp_transform_q.test | RUN | 0.348270 | 2.785700 | 1.490103 | 0.001484 | 0.001577 | 0.001784 |
| mp_transform_q_2.test | RUN | 0.399977 | 0.930241 | 1.988456 | 0.001617 | 0.001612 | 0.001576 |
| mp_transform_sf.test | RUN | 0.172989 | 0.517368 | 0.602742 | 0.001681 | 0.001758 | 0.001703 |
| mp_transform_if.test | RUN | 0.211633 | 1.378060 | 0.854208 | 0.001348 | 0.001620 | 0.001558 |
| mp_transform_if_q.test | RUN | 0.207896 | 1.402443 | 0.869615 | 0.001710 | 0.001788 | 0.001496 |
| mp_filter.test | RUN | 0.189597 | 0.850779 | 0.686356 | 0.001709 | 0.001850 | 0.001544 |
| mp_fill.test | RUN | 0.173334 | 0.646379 | 0.599799 | 0.001387 | 0.001695 | 0.001792 |
| mp_fill_2.test | RUN | 0.026674 | 0.057989 | 0.094850 | 0.000709 | 0.000822 | 0.001615 |
| mp_count.test | RUN | 0.336303 | 1.517315 | 1.000764 | 0.001571 | 0.001755 | 0.001674 |
| mp_count_if.test | RUN | 0.345323 | 1.520779 | 1.104914 | 0.001565 | 0.001672 | 0.001520 |
| mp_count_if_q.test | RUN | 0.177017 | 0.980585 | 0.596221 | 0.001536 | 0.001767 | 0.001566 |
| mp_contains.test | RUN | 0.169528 | 0.609728 | 0.580914 | 0.001380 | 0.001705 | 0.001795 |
| mp_starts_with.test | RUN | 0.171960 | 0.600248 | 0.639619 | 0.001532 | 0.001465 | 0.001764 |
| mp_starts_with_sf.test | RUN | 0.168459 | 0.516713 | 0.606483 | 0.001362 | 0.001668 | 0.001712 |
| mp_repeat.test | RUN | 0.242803 | 2.483186 | 1.044452 | 0.001608 | 0.001691 | 0.001592 |
| mp_repeat_2.test | RUN | 0.028474 | 0.058435 | 0.097771 | 0.000640 | 0.000749 | 0.001742 |
| mp_repeat_3.test | RUN | 0.211109 | 0.353785 | 0.550304 | 0.001598 | 0.001730 | 0.001605 |
| mp_product.test | RUN | 0.190616 | 1.498192 | 0.790328 | 0.001537 | 0.001747 | 0.001664 |
| mp_drop.test | RUN | 0.213309 | 1.851809 | 0.890974 | 0.001502 | 0.001753 | 0.001724 |
| mp_drop_2.test | RUN | 0.027641 | 0.056589 | 0.094880 | 0.000672 | 0.000726 | 0.001292 |
| mp_iota.test | RUN | 0.205610 | 1.570290 | 0.841247 | 0.001575 | 0.001761 | 0.001720 |
| mp_iota_2.test | RUN | 0.219704 | 1.897642 | 0.850101 | 0.001540 | 0.001839 | 0.001598 |
| mp_at.test | RUN | 0.177723 | 0.826981 | 0.681012 | 0.001578 | 0.001558 | 0.001762 |
| mp_at_2.test | RUN | 0.027890 | 0.058165 | 0.095917 | 0.000734 | 0.000655 | 0.001645 |
| mp_at_sf.test | RUN | 0.169246 | 0.529491 | 0.560012 | 0.001651 | 0.001760 | 0.001604 |
| mp_take.test | RUN | 0.273217 | 2.442521 | 1.032241 | 0.001590 | 0.001544 | 0.001663 |
| mp_take_2.test | RUN | 0.028434 | 0.055723 | 0.099386 | 0.000737 | 0.000768 | 0.001834 |
| mp_slice.test | RUN | 0.323307 | 2.467020 | 1.369979 | 0.001690 | 0.001790 | 0.001770 |
| mp_slice_2.test | RUN | 0.028573 | 0.058269 | 0.096917 | 0.000686 | 0.000738 | 0.001672 |
| mp_replace.test | RUN | 0.211369 | 1.274922 | 0.910355 | 0.001546 | 0.001722 | 0.001541 |
| mp_replace_if.test | RUN | 0.197694 | 1.117986 | 0.814297 | 0.001728 | 0.001685 | 0.001696 |
| mp_replace_if_q.test | RUN | 0.203223 | 1.121448 | 0.830897 | 0.001379 | 0.001810 | 0.001652 |
| mp_copy_if.test | RUN | 0.208960 | 1.560712 | 0.803938 | 0.001674 | 0.001649 | 0.001609 |
| mp_copy_if_q.test | RUN | 0.205826 | 1.575822 | 0.803411 | 0.001667 | 0.001796 | 0.001710 |
| mp_remove.test | RUN | 0.198558 | 1.052305 | 0.800540 | 0.001710 | 0.001867 | 0.001632 |
| mp_remove_if.test | RUN | 0.206095 | 1.641746 | 0.838290 | 0.001466 | 0.001806 | 0.001736 |
| mp_remove_if_q.test | RUN | 0.209008 | 1.662537 | 0.852812 | 0.001708 | 0.001662 | 0.001746 |
| mp_partition.test | RUN | 0.211862 | 1.562429 | 0.900211 | 0.001747 | 0.001746 | 0.001620 |
| mp_partition_q.test | RUN | 0.207144 | 1.524481 | 0.894131 | 0.001417 | 0.001552 | 0.001676 |
| mp_sort.test | RUN | 0.195299 | 1.115297 | 0.789580 | 0.001775 | 0.001814 | 0.001760 |
| mp_sort_q.test | RUN | 0.198766 | 1.100838 | 0.798553 | 0.001698 | 0.001774 | 0.001449 |
| mp_find.test | RUN | 0.195463 | 1.192770 | 0.706316 | 0.001597 | 0.001601 | 0.001426 |
| mp_find_if.test | RUN | 0.183518 | 1.092919 | 0.648942 | 0.001704 | 0.001736 | 0.001468 |
| mp_find_if_q.test | RUN | 0.202733 | 1.242262 | 0.841740 | 0.001577 | 0.001886 | 0.001734 |
| mp_reverse.test | RUN | 0.409113 | 3.254167 | 1.480009 | 0.001345 | 0.001841 | 0.001651 |
| mp_fold.test | RUN | 0.670176 | 2.524275 | 3.794021 | 0.001589 | 0.001764 | 0.001789 |
| mp_fold_q.test | RUN | 0.193836 | 1.108482 | 0.775893 | 0.001655 | 0.001823 | 0.001779 |
| mp_fold_q_sf.test | RUN | 0.174463 | 0.537973 | 0.600781 | 0.001530 | 0.001748 | 0.001738 |
| mp_reverse_fold.test | RUN | 0.324425 | 2.432982 | 1.067915 | 0.001724 | 0.001759 | 0.001754 |
| mp_reverse_fold_q.test | RUN | 0.197639 | 1.330037 | 0.800683 | 0.001509 | 0.001771 | 0.001522 |
| mp_unique.test | RUN | 0.196346 | 1.208722 | 0.782981 | 0.001467 | 0.001794 | 0.001760 |
| mp_unique_if.test | RUN | 0.334878 | 2.488613 | 1.192841 | 0.001412 | 0.001810 | 0.001710 |
| mp_unique_if_q.test | RUN | 0.301635 | 2.477494 | 1.012065 | 0.001582 | 0.001809 | 0.001710 |
| mp_all_of.test | RUN | 0.481414 | 1.374082 | 1.348401 | 0.001747 | 0.001844 | 0.001706 |
| mp_all_of_q.test | RUN | 0.176441 | 0.608220 | 0.585205 | 0.002208 | 0.001818 | 0.001807 |
| mp_any_of.test | RUN | 0.468128 | 1.460228 | 1.313954 | 0.001759 | 0.001761 | 0.001650 |
| mp_any_of_q.test | RUN | 0.171293 | 0.600037 | 0.594316 | 0.001748 | 0.001779 | 0.001694 |
| mp_none_of.test | RUN | 0.485672 | 1.432041 | 1.276679 | 0.001703 | 0.001702 | 0.001678 |
| mp_none_of_q.test | RUN | 0.167974 | 0.617936 | 0.572281 | 0.001470 | 0.001874 | 0.001757 |
| mp_replace_at.test | RUN | 0.213362 | 1.228855 | 0.824521 | 0.001620 | 0.001776 | 0.001730 |
| mp_replace_at_c.test | RUN | 0.212197 | 1.180165 | 0.897577 | 0.001564 | 0.001804 | 0.001555 |
| mp_for_each.test | RUN | 0.202960 | 0.876318 | 1.004112 | 0.001460 | 0.001338 | 0.001614 |
| mp_insert.test | RUN | 0.308757 | 2.466021 | 1.251508 | 0.001668 | 0.001827 | 0.001646 |
| mp_insert_2.test | RUN | 0.027746 | 0.053911 | 0.096031 | 0.000585 | 0.000728 | 0.001741 |
| mp_erase.test | RUN | 0.346671 | 2.625650 | 1.463781 | 0.001765 | 0.001830 | 0.001707 |
| mp_erase_2.test | RUN | 0.028512 | 0.055402 | 0.083714 | 0.000711 | 0.000785 | 0.001739 |
| mp_with_index.test | RUN | 0.464163 | 5.326213 | 3.217666 | 0.002678 | 0.002179 | 0.002179 |
| mp_with_index_cx.test | RUN | 0.003688 | 0.017942 | 0.026716 | 0.000682 | 0.000773 | 0.001820 |
| mp_from_sequence.test | RUN | 0.209343 | 1.385580 | 0.891193 | 0.001782 | 0.001736 | 0.001742 |
| mp_from_sequence_2.test | RUN | 0.221894 | 1.638578 | 0.893994 | 0.001606 | 0.001772 | 0.001755 |
| mp_from_sequence_3.test | RUN | 0.181337 | 0.726264 | 0.681596 | 0.001516 | 0.001838 | 0.001675 |
| mp_min_element.test | RUN | 0.174557 | 0.653553 | 0.577403 | 0.001731 | 0.001862 | 0.001854 |
| mp_min_element_2.test | RUN | 0.028488 | 0.057261 | 0.099601 | 0.000574 | 0.000701 | 0.001756 |
| mp_min_element_q.test | RUN | 0.174795 | 0.652018 | 0.612229 | 0.001640 | 0.001802 | 0.001556 |
| mp_min_element_q_2.test | RUN | 0.028377 | 0.058939 | 0.087440 | 0.000622 | 0.000725 | 0.001584 |
| mp_max_element.test | RUN | 0.176267 | 0.667463 | 0.579116 | 0.001623 | 0.001862 | 0.001684 |
| mp_max_element_2.test | RUN | 0.028543 | 0.057001 | 0.094851 | 0.000605 | 0.000750 | 0.001602 |
| mp_max_element_q.test | RUN | 0.178514 | 0.664803 | 0.616329 | 0.001541 | 0.001770 | 0.001702 |
| mp_max_element_q_2.test | RUN | 0.028000 | 0.056161 | 0.089684 | 0.000631 | 0.000788 | 0.001489 |
| mp_nth_element.test | RUN | 0.192458 | 0.936365 | 0.741294 | 0.001637 | 0.001717 | 0.001581 |
| mp_nth_element_q.test | RUN | 0.196413 | 0.907320 | 0.742571 | 0.001514 | 0.001720 | 0.001584 |
| mp_back.test | RUN | 0.189994 | 0.774079 | 0.717741 | 0.001637 | 0.001706 | 0.001671 |
| mp_back_2.test | RUN | 0.027189 | 0.057205 | 0.096470 | 0.000637 | 0.000728 | 0.001383 |
| mp_pop_back.test | RUN | 0.510187 | 4.947792 | 1.423361 | 0.001538 | 0.001882 | 0.001388 |
| mp_pop_back_2.test | RUN | 0.028724 | 0.054862 | 0.098332 | 0.000757 | 0.000638 | 0.001466 |
| mp_flatten.test | RUN | 0.223800 | 1.783158 | 0.982268 | 0.001650 | 0.001854 | 0.001625 |
| mp_rotate_left.test | RUN | 0.221306 | 1.917442 | 0.979001 | 0.001477 | 0.001617 | 0.001439 |
| mp_rotate_right.test | RUN | 0.223275 | 1.906995 | 1.001339 | 0.001768 | 0.001758 | 0.001489 |
| mp_power_set.test | RUN | 0.226249 | 1.829979 | 0.974456 | 0.001840 | 0.001705 | 0.001401 |
| mp_partial_sum.test | RUN | 0.287970 | 2.476813 | 1.117036 | 0.001485 | 0.001636 | 0.001401 |
| mp_iterate.test | RUN | 0.193840 | 0.738373 | 0.781686 | 0.001312 | 0.001893 | 0.001592 |
| mp_pairwise_fold.test | RUN | 0.218344 | 1.690885 | 1.002180 | 0.001578 | 0.001727 | 0.001660 |
| mp_pairwise_fold_q.test | RUN | 0.173983 | 0.502899 | 0.605421 | 0.001836 | 0.001753 | 0.001726 |
| mp_sliding_fold.test | RUN | 0.404559 | 3.244768 | 1.853061 | 0.001628 | 0.001750 | 0.001678 |
| mp_sliding_fold_q.test | RUN | 0.407007 | 3.251860 | 1.818619 | 0.001343 | 0.001617 | 0.001703 |
| mp_intersperse.test | RUN | 0.209147 | 1.215971 | 0.892265 | 0.001796 | 0.001739 | 0.001750 |
| mp_split.test | RUN | 0.290054 | 2.323390 | 1.195922 | 0.001695 | 0.001809 | 0.001558 |
| mp_join.test | RUN | 0.225845 | 1.947411 | 1.032884 | 0.001605 | 0.001727 | 0.001754 |
| integral.test | RUN | 0.177219 | 0.890101 | 0.642126 | 0.001652 | 0.001741 | 0.001792 |
| mp_value.test | RUN | 0.012346 | 0.031059 | 0.047063 | 0.000755 | 0.000729 | 0.001596 |
| mp_identity.test | RUN | 0.175843 | 0.804554 | 0.638550 | 0.001732 | 0.001604 | 0.001498 |
| mp_inherit.test | RUN | 0.164273 | 0.579605 | 0.599506 | 0.001627 | 0.001820 | 0.001744 |
| mp_if.test | RUN | 0.168424 | 0.661048 | 0.572371 | 0.001636 | 0.001534 | 0.001696 |
| mp_if_sf.test | RUN | 0.159032 | 0.497911 | 0.552101 | 0.001652 | 0.001745 | 0.001744 |
| mp_eval_if.test | RUN | 0.173016 | 0.700597 | 0.593453 | 0.001772 | 0.001622 | 0.001828 |
| mp_eval_if_sf.test | RUN | 0.159751 | 0.502354 | 0.536399 | 0.001725 | 0.001640 | 0.001709 |
| mp_valid.test | RUN | 0.165931 | 0.511846 | 0.551989 | 0.001671 | 0.001626 | 0.001772 |
| mp_defer.test | RUN | 0.173069 | 0.856809 | 0.650120 | 0.001673 | 0.001819 | 0.001717 |
| mp_quote.test | RUN | 0.180330 | 0.848191 | 0.667943 | 0.001706 | 0.001852 | 0.001380 |
| mp_invoke_q.test | RUN | 0.186943 | 1.122744 | 0.741305 | 0.001756 | 0.001888 | 0.001450 |
| mp_invoke_q_sf.test | RUN | 0.160970 | 0.515215 | 0.549711 | 0.001594 | 0.001797 | 0.001476 |
| mp_quote_trait.test | RUN | 0.174247 | 0.935003 | 0.664508 | 0.001752 | 0.001577 | 0.001740 |
| mp_cond.test | RUN | 0.165714 | 0.569053 | 0.585695 | 0.001741 | 0.001580 | 0.001492 |
| mp_cond_sf.test | RUN | 0.160823 | 0.499482 | 0.570802 | 0.001791 | 0.001794 | 0.001473 |
| mp_not_fn.test | RUN | 0.163016 | 0.489326 | 0.565159 | 0.001474 | 0.001881 | 0.001618 |
| mp_eval_if_not.test | RUN | 0.175332 | 0.718068 | 0.606049 | 0.001742 | 0.001749 | 0.001703 |
| mp_eval_or.test | RUN | 0.166194 | 0.386753 | 0.573545 | 0.001535 | 0.001824 | 0.001600 |
| mp_compose.test | RUN | 0.180653 | 1.161825 | 0.721896 | 0.001666 | 0.001628 | 0.001797 |
| mp_valid_and_true.test | RUN | 0.164442 | 0.598237 | 0.562534 | 0.001552 | 0.001840 | 0.001334 |
| mp_compose_sf.test | COMPILE | 0.040089 | 0.074130 | 0.122722 | — | — | — |
| integer_sequence.test | RUN | 0.197637 | 1.122806 | 0.819994 | 0.001627 | 0.001774 | 0.001337 |
| tuple_for_each.test | RUN | 0.164778 | 0.445842 | 0.626751 | 0.001386 | 0.001629 | 0.001442 |
| tuple_for_each_cx.test | COMPILE | 0.030743 | 0.064502 | 0.092799 | — | — | — |
| tuple_apply.test | RUN | 0.169352 | 0.430001 | 0.622265 | 0.001766 | 0.001728 | 0.001466 |
| tuple_apply_cx.test | COMPILE | 0.046391 | 0.092519 | 0.151181 | — | — | — |
| construct_from_tuple.test | RUN | 0.168860 | 0.463540 | 0.624556 | 0.001646 | 0.001846 | 0.001856 |
| construct_from_tuple_cx.test | COMPILE | 0.046415 | 0.092998 | 0.149009 | — | — | — |
| tuple_transform.test | RUN | 0.264390 | 0.929694 | 1.155507 | 0.001580 | 0.001771 | 0.001607 |
| tuple_transform_2.test | RUN | 0.232082 | 0.694162 | 1.093344 | 0.001727 | 0.001667 | 0.001538 |
| tuple_transform_cx.test | COMPILE | 0.039582 | 0.087525 | 0.126069 | — | — | — |
| mp_set_contains.test | RUN | 0.171365 | 0.607948 | 0.604043 | 0.001692 | 0.001372 | 0.001789 |
| mp_set_push_back.test | RUN | 0.218709 | 1.834001 | 0.971461 | 0.001752 | 0.001855 | 0.001728 |
| mp_set_push_front.test | RUN | 0.280066 | 2.195905 | 1.104442 | 0.001688 | 0.001653 | 0.001777 |
| mp_is_set.test | RUN | 0.170301 | 0.615912 | 0.621427 | 0.001750 | 0.001760 | 0.001630 |
| mp_set_union.test | RUN | 0.215124 | 1.540946 | 0.929972 | 0.001673 | 0.001950 | 0.001738 |
| mp_set_union_sf.test | RUN | 0.166035 | 0.488782 | 0.570657 | 0.001636 | 0.001797 | 0.001628 |
| mp_set_difference.test | RUN | 0.194012 | 1.216111 | 0.796632 | 0.001588 | 0.001879 | 0.001628 |
| mp_set_difference_sf.test | RUN | 0.162909 | 0.496787 | 0.540284 | 0.001521 | 0.001599 | 0.001661 |
| mp_set_intersection.test | RUN | 0.192984 | 1.206603 | 0.784910 | 0.001571 | 0.001863 | 0.001724 |
| mp_set_intersection_sf.test | RUN | 0.167703 | 0.495127 | 0.539531 | 0.001560 | 0.001778 | 0.001573 |
| mp_all.test | RUN | 0.168607 | 0.614971 | 0.587125 | 0.001744 | 0.001762 | 0.001653 |
| mp_all_2.test | RUN | 0.469717 | 1.284716 | 1.305892 | 0.001713 | 0.001867 | 0.001643 |
| mp_and.test | RUN | 0.169456 | 0.608072 | 0.585106 | 0.001557 | 0.001810 | 0.001725 |
| mp_any.test | RUN | 0.172267 | 0.618455 | 0.584909 | 0.001538 | 0.001823 | 0.001730 |
| mp_any_2.test | RUN | 0.496599 | 1.259406 | 1.261146 | 0.001524 | 0.001789 | 0.001806 |
| mp_or.test | RUN | 0.177396 | 0.608932 | 0.606653 | 0.002252 | 0.001730 | 0.001696 |
| mp_same.test | RUN | 0.328810 | 0.993833 | 0.962218 | 0.001515 | 0.001602 | 0.001364 |
| mp_plus.test | RUN | 0.182811 | 0.699213 | 0.620627 | 0.001494 | 0.001800 | 0.001618 |
| mp_less.test | RUN | 0.169672 | 0.595298 | 0.559800 | 0.001820 | 0.001674 | 0.001722 |
| mp_min.test | RUN | 0.166124 | 0.560354 | 0.570733 | 0.001715 | 0.001568 | 0.001530 |
| mp_max.test | RUN | 0.169584 | 0.619780 | 0.571041 | 0.001513 | 0.001636 | 0.001394 |
| mp_similar.test | RUN | 0.166582 | 0.607238 | 0.590264 | 0.001556 | 0.001504 | 0.001851 |
| mp_map_find.test | RUN | 0.196192 | 1.086022 | 0.765130 | 0.001830 | 0.001569 | 0.001709 |
| mp_map_find_2.test | RUN | 0.180148 | 0.442571 | 0.677310 | 0.001704 | 0.001676 | 0.001507 |
| mp_map_find_3.test | RUN | 0.178672 | 0.439011 | 0.676212 | 0.001554 | 0.001741 | 0.001441 |
| mp_map_find_4.test | RUN | 0.173189 | 0.414303 | 0.584562 | 0.001418 | 0.001466 | 0.001572 |
| mp_map_contains.test | RUN | 0.174276 | 0.611957 | 0.608909 | 0.001810 | 0.001822 | 0.001819 |
| mp_map_insert.test | RUN | 0.230236 | 2.020390 | 1.082971 | 0.001328 | 0.001832 | 0.001756 |
| mp_map_replace.test | RUN | 0.294071 | 2.271610 | 1.234175 | 0.001746 | 0.001892 | 0.001506 |
| mp_map_erase.test | RUN | 0.221186 | 1.723047 | 1.024574 | 0.001566 | 0.001802 | 0.001562 |
| mp_map_update.test | RUN | 0.194051 | 1.138386 | 0.822309 | 0.001733 | 0.001791 | 0.001381 |
| mp_map_update_q.test | RUN | 0.194909 | 1.136429 | 0.797730 | 0.001528 | 0.001829 | 0.001433 |
| mp_map_keys.test | RUN | 0.191959 | 1.009853 | 0.786416 | 0.001637 | 0.001840 | 0.001505 |
| mp_is_map.test | RUN | 0.174314 | 0.614545 | 0.651274 | 0.001337 | 0.001753 | 0.001667 |
| mp_bind.test | RUN | 0.220492 | 1.797459 | 0.924789 | 0.001778 | 0.001381 | 0.001627 |
| mp_bind_q.test | RUN | 0.193879 | 1.118894 | 0.768125 | 0.001562 | 0.001617 | 0.001651 |
| mp_bind_front.test | RUN | 0.188142 | 1.223678 | 0.745162 | 0.001970 | 0.001798 | 0.001359 |
| mp_bind_back.test | RUN | 0.186482 | 1.237550 | 0.719000 | 0.001582 | 0.001889 | 0.001753 |
| mp_lambda.test | RUN | 0.420037 | 3.700293 | 1.866552 | 0.001610 | 0.001345 | 0.001640 |
| mpl.test | RUN | 0.375324 | 1.014116 | 1.505923 | 0.001353 | 0.001656 | 0.001230 |
| mpl_list.test | RUN | 0.217478 | 0.715648 | 0.726006 | 0.001603 | 0.001716 | 0.001724 |
| mpl_tuple.test | RUN | 0.217877 | 0.756433 | 0.732457 | 0.001514 | 0.001699 | 0.001331 |
| version.test | RUN | 0.109304 | 0.274690 | 0.351947 | 0.001861 | 0.001882 | 0.001510 |
| mp11_version.test | RUN | 0.133445 | 0.315357 | 0.450432 | 0.001628 | 0.001548 | 0.001596 |
| list_version.test | RUN | 0.113303 | 0.269777 | 0.383485 | 0.001416 | 0.001772 | 0.001651 |
| algorithm_version.test | RUN | 0.127168 | 0.293467 | 0.406192 | 0.001521 | 0.001741 | 0.001750 |
| integral_version.test | RUN | 0.110524 | 0.275912 | 0.384712 | 0.001763 | 0.001456 | 0.001519 |
| utility_version.test | RUN | 0.112350 | 0.265721 | 0.388575 | 0.001317 | 0.001733 | 0.001279 |
| function_version.test | RUN | 0.111866 | 0.280347 | 0.377623 | 0.001518 | 0.001856 | 0.001744 |
| map_version.test | RUN | 0.126071 | 0.299722 | 0.420982 | 0.001612 | 0.001434 | 0.001674 |
| set_version.test | RUN | 0.111460 | 0.272968 | 0.369743 | 0.001784 | 0.001683 | 0.001429 |
| bind_version.test | RUN | 0.124162 | 0.294850 | 0.423264 | 0.001610 | 0.001893 | 0.001630 |
| integer_sequence_version.test | RUN | 0.107784 | 0.275486 | 0.362029 | 0.001513 | 0.001574 | 0.001241 |
| tuple_version.test | RUN | 0.126110 | 0.286944 | 0.302104 | 0.001355 | 0.001754 | 0.001252 |
| mpl_version.test | RUN | 0.090012 | 0.286119 | 0.317783 | 0.001282 | 0.001341 | 0.001080 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.986× | 0.971×, 1.001× | 1.007× |
| clang | 1.087× | 1.078×, 1.096× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45272062060).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000974s | 0.000926s | 0.000951s | byte equality observed |
| bind_version.test | 10 | 0.000964s | 0.000923s | 0.000960s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000974s | 0.000931s | 0.000983s | byte equality observed |
| function_version.test | 10 | 0.000963s | 0.000924s | 0.001005s | byte equality observed |
| integer_sequence.test | 10 | 0.000976s | 0.000944s | 0.001012s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000972s | 0.000943s | 0.001050s | byte equality observed |
| integral.test | 10 | 0.000958s | 0.000955s | 0.001017s | byte equality observed |
| integral_version.test | 10 | 0.000990s | 0.000946s | 0.000984s | byte equality observed |
| list_version.test | 10 | 0.000976s | 0.000951s | 0.000994s | byte equality observed |
| map_version.test | 10 | 0.001003s | 0.000946s | 0.000980s | byte equality observed |
| mp11_version.test | 10 | 0.000986s | 0.000943s | 0.001005s | byte equality observed |
| mp_all.test | 10 | 0.001023s | 0.000971s | 0.001025s | byte equality observed |
| mp_all_2.test | 10 | 0.000993s | 0.000982s | 0.001021s | byte equality observed |
| mp_all_of.test | 10 | 0.001003s | 0.000981s | 0.001018s | byte equality observed |
| mp_all_of_q.test | 10 | 0.001005s | 0.000979s | 0.001032s | byte equality observed |
| mp_and.test | 10 | 0.000993s | 0.000979s | 0.000986s | byte equality observed |
| mp_any.test | 10 | 0.000999s | 0.000962s | 0.000979s | byte equality observed |
| mp_any_2.test | 10 | 0.000988s | 0.000959s | 0.001032s | byte equality observed |
| mp_any_of.test | 10 | 0.000991s | 0.001022s | 0.000997s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000988s | 0.000998s | 0.001002s | byte equality observed |
| mp_append.test | 10 | 0.000994s | 0.001009s | 0.001013s | byte equality observed |
| mp_append_2.test | 10 | 0.001018s | 0.001047s | 0.001022s | byte equality observed |
| mp_append_3.test | 10 | 0.000466s | 0.000459s | 0.000979s | byte equality observed |
| mp_append_sf.test | 10 | 0.000998s | 0.000989s | 0.001006s | byte equality observed |
| mp_apply_q.test | 10 | 0.000992s | 0.001020s | 0.000998s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.001018s | 0.000985s | 0.001016s | byte equality observed |
| mp_assign.test | 10 | 0.001014s | 0.001043s | 0.001014s | byte equality observed |
| mp_assign_2.test | 10 | 0.000455s | 0.000463s | 0.000991s | byte equality observed |
| mp_at.test | 10 | 0.001036s | 0.001029s | 0.000990s | byte equality observed |
| mp_at_2.test | 10 | 0.000459s | 0.000461s | 0.000980s | byte equality observed |
| mp_at_sf.test | 10 | 0.001001s | 0.001010s | 0.000993s | byte equality observed |
| mp_back.test | 10 | 0.001005s | 0.001004s | 0.001011s | byte equality observed |
| mp_back_2.test | 10 | 0.000460s | 0.000466s | 0.000972s | byte equality observed |
| mp_bind.test | 10 | 0.000998s | 0.001037s | 0.000982s | byte equality observed |
| mp_bind_back.test | 10 | 0.000992s | 0.001005s | 0.001024s | byte equality observed |
| mp_bind_front.test | 10 | 0.000995s | 0.001007s | 0.000989s | byte equality observed |
| mp_bind_q.test | 10 | 0.000984s | 0.001036s | 0.000993s | byte equality observed |
| mp_clear.test | 10 | 0.001025s | 0.001026s | 0.000998s | byte equality observed |
| mp_clear_2.test | 10 | 0.000459s | 0.000462s | 0.000990s | byte equality observed |
| mp_compose.test | 10 | 0.001021s | 0.000998s | 0.001010s | byte equality observed |
| mp_cond.test | 10 | 0.001002s | 0.001024s | 0.001029s | byte equality observed |
| mp_cond_sf.test | 10 | 0.001013s | 0.001004s | 0.001040s | byte equality observed |
| mp_contains.test | 10 | 0.001021s | 0.000977s | 0.001011s | byte equality observed |
| mp_copy_if.test | 10 | 0.001004s | 0.000989s | 0.001031s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.001025s | 0.001025s | 0.001012s | byte equality observed |
| mp_count.test | 10 | 0.001005s | 0.000992s | 0.001069s | byte equality observed |
| mp_count_if.test | 10 | 0.001012s | 0.001001s | 0.001008s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000994s | 0.000995s | 0.001035s | byte equality observed |
| mp_defer.test | 10 | 0.000980s | 0.000990s | 0.001037s | byte equality observed |
| mp_drop.test | 10 | 0.001012s | 0.001019s | 0.001004s | byte equality observed |
| mp_drop_2.test | 10 | 0.000457s | 0.000459s | 0.001013s | byte equality observed |
| mp_empty.test | 10 | 0.001012s | 0.001031s | 0.001005s | byte equality observed |
| mp_empty_2.test | 10 | 0.000464s | 0.000452s | 0.000971s | byte equality observed |
| mp_erase.test | 10 | 0.001037s | 0.001026s | 0.000986s | byte equality observed |
| mp_erase_2.test | 10 | 0.000461s | 0.000460s | 0.000993s | byte equality observed |
| mp_eval_if.test | 10 | 0.001014s | 0.001017s | 0.000997s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.001019s | 0.001004s | 0.000999s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.001016s | 0.001015s | 0.001022s | byte equality observed |
| mp_eval_or.test | 10 | 0.000995s | 0.001019s | 0.001027s | byte equality observed |
| mp_fill.test | 10 | 0.001032s | 0.001001s | 0.000996s | byte equality observed |
| mp_fill_2.test | 10 | 0.000458s | 0.000456s | 0.000970s | byte equality observed |
| mp_filter.test | 10 | 0.001014s | 0.001001s | 0.000993s | byte equality observed |
| mp_find.test | 10 | 0.001008s | 0.001037s | 0.001021s | byte equality observed |
| mp_find_if.test | 10 | 0.000998s | 0.000993s | 0.001014s | byte equality observed |
| mp_find_if_q.test | 10 | 0.000985s | 0.001016s | 0.001003s | byte equality observed |
| mp_flatten.test | 10 | 0.000987s | 0.001005s | 0.001009s | byte equality observed |
| mp_fold.test | 10 | 0.001037s | 0.001025s | 0.001006s | byte equality observed |
| mp_fold_q.test | 10 | 0.001009s | 0.000994s | 0.001034s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.001002s | 0.001002s | 0.000998s | byte equality observed |
| mp_for_each.test | 10 | 0.001021s | 0.000987s | 0.001000s | byte equality observed |
| mp_from_sequence.test | 10 | 0.001004s | 0.001013s | 0.001055s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.001011s | 0.001010s | 0.001005s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.001027s | 0.001020s | 0.001023s | byte equality observed |
| mp_front.test | 10 | 0.001019s | 0.001024s | 0.000999s | byte equality observed |
| mp_front_2.test | 10 | 0.000463s | 0.000464s | 0.000981s | byte equality observed |
| mp_identity.test | 10 | 0.001001s | 0.001004s | 0.000997s | byte equality observed |
| mp_if.test | 10 | 0.000987s | 0.001015s | 0.001005s | byte equality observed |
| mp_if_sf.test | 10 | 0.001035s | 0.001024s | 0.000985s | byte equality observed |
| mp_inherit.test | 10 | 0.000999s | 0.001023s | 0.001005s | byte equality observed |
| mp_insert.test | 10 | 0.001023s | 0.001025s | 0.000995s | byte equality observed |
| mp_insert_2.test | 10 | 0.000461s | 0.000452s | 0.000986s | byte equality observed |
| mp_intersperse.test | 10 | 0.001025s | 0.000983s | 0.000998s | byte equality observed |
| mp_invoke_q.test | 10 | 0.000999s | 0.001014s | 0.001000s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.001011s | 0.000983s | 0.001007s | byte equality observed |
| mp_iota.test | 10 | 0.001000s | 0.001013s | 0.001001s | byte equality observed |
| mp_iota_2.test | 10 | 0.000994s | 0.000995s | 0.000999s | byte equality observed |
| mp_is_list.test | 10 | 0.001010s | 0.001019s | 0.001044s | byte equality observed |
| mp_is_map.test | 10 | 0.001003s | 0.000986s | 0.001012s | byte equality observed |
| mp_is_set.test | 10 | 0.001010s | 0.001003s | 0.001012s | byte equality observed |
| mp_is_value_list.test | 10 | 0.001019s | 0.001034s | 0.001015s | byte equality observed |
| mp_iterate.test | 10 | 0.001012s | 0.001010s | 0.000995s | byte equality observed |
| mp_join.test | 10 | 0.001001s | 0.001017s | 0.001035s | byte equality observed |
| mp_lambda.test | 10 | 0.001030s | 0.001020s | 0.000996s | byte equality observed |
| mp_less.test | 10 | 0.001008s | 0.000984s | 0.001006s | byte equality observed |
| mp_list_c.test | 10 | 0.001014s | 0.001009s | 0.001005s | byte equality observed |
| mp_list_v.test | 10 | 0.000462s | 0.000464s | 0.000979s | byte equality observed |
| mp_map_contains.test | 10 | 0.001011s | 0.001000s | 0.000987s | byte equality observed |
| mp_map_erase.test | 10 | 0.000999s | 0.001028s | 0.000993s | byte equality observed |
| mp_map_find.test | 10 | 0.001027s | 0.001019s | 0.000981s | byte equality observed |
| mp_map_find_2.test | 10 | 0.001005s | 0.000984s | 0.001014s | byte equality observed |
| mp_map_find_3.test | 10 | 0.000995s | 0.001002s | 0.001022s | byte equality observed |
| mp_map_find_4.test | 10 | 0.001000s | 0.001010s | 0.000995s | byte equality observed |
| mp_map_insert.test | 10 | 0.001001s | 0.001014s | 0.001017s | byte equality observed |
| mp_map_keys.test | 10 | 0.000995s | 0.001045s | 0.001015s | byte equality observed |
| mp_map_replace.test | 10 | 0.001002s | 0.001038s | 0.000993s | byte equality observed |
| mp_map_update.test | 10 | 0.000985s | 0.001006s | 0.000993s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000993s | 0.000988s | 0.000988s | byte equality observed |
| mp_max.test | 10 | 0.000999s | 0.001003s | 0.000993s | byte equality observed |
| mp_max_element.test | 10 | 0.001034s | 0.001009s | 0.001015s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000463s | 0.000459s | 0.000980s | byte equality observed |
| mp_max_element_q.test | 10 | 0.001013s | 0.001015s | 0.001011s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000455s | 0.000456s | 0.000976s | byte equality observed |
| mp_min.test | 10 | 0.001004s | 0.001002s | 0.000982s | byte equality observed |
| mp_min_element.test | 10 | 0.001015s | 0.001025s | 0.001025s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000457s | 0.000454s | 0.000971s | byte equality observed |
| mp_min_element_q.test | 10 | 0.001027s | 0.001020s | 0.001040s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000462s | 0.000460s | 0.000990s | byte equality observed |
| mp_none_of.test | 10 | 0.000997s | 0.001073s | 0.000981s | byte equality observed |
| mp_none_of_q.test | 10 | 0.001003s | 0.001017s | 0.001016s | byte equality observed |
| mp_not_fn.test | 10 | 0.001005s | 0.000989s | 0.000992s | byte equality observed |
| mp_nth_element.test | 10 | 0.001006s | 0.001020s | 0.000989s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.001023s | 0.001031s | 0.000993s | byte equality observed |
| mp_or.test | 10 | 0.001007s | 0.001000s | 0.001003s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.001021s | 0.000991s | 0.001001s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.001005s | 0.001004s | 0.000990s | byte equality observed |
| mp_partial_sum.test | 10 | 0.001015s | 0.001034s | 0.000987s | byte equality observed |
| mp_partition.test | 10 | 0.001033s | 0.001009s | 0.000991s | byte equality observed |
| mp_partition_q.test | 10 | 0.001036s | 0.001011s | 0.001032s | byte equality observed |
| mp_plus.test | 10 | 0.001015s | 0.000973s | 0.000991s | byte equality observed |
| mp_pop_back.test | 10 | 0.001043s | 0.001030s | 0.000989s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000457s | 0.000451s | 0.000981s | byte equality observed |
| mp_pop_front.test | 10 | 0.001027s | 0.001032s | 0.001013s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000466s | 0.000457s | 0.000993s | byte equality observed |
| mp_power_set.test | 10 | 0.001005s | 0.001005s | 0.001007s | byte equality observed |
| mp_product.test | 10 | 0.000991s | 0.000994s | 0.000994s | byte equality observed |
| mp_push_back.test | 10 | 0.001020s | 0.001035s | 0.000990s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000460s | 0.000454s | 0.000992s | byte equality observed |
| mp_push_front.test | 10 | 0.001024s | 0.001010s | 0.000990s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000466s | 0.000459s | 0.000955s | byte equality observed |
| mp_quote.test | 10 | 0.000993s | 0.001042s | 0.000998s | byte equality observed |
| mp_quote_trait.test | 10 | 0.001006s | 0.001040s | 0.000989s | byte equality observed |
| mp_remove.test | 10 | 0.001017s | 0.001030s | 0.000983s | byte equality observed |
| mp_remove_if.test | 10 | 0.001004s | 0.001052s | 0.000970s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.001027s | 0.000990s | 0.000977s | byte equality observed |
| mp_rename.test | 10 | 0.001013s | 0.001030s | 0.001003s | byte equality observed |
| mp_rename_2.test | 10 | 0.000468s | 0.000474s | 0.000949s | byte equality observed |
| mp_rename_v.test | 10 | 0.000477s | 0.000459s | 0.000947s | byte equality observed |
| mp_repeat.test | 10 | 0.001034s | 0.001041s | 0.000999s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000467s | 0.000446s | 0.000974s | byte equality observed |
| mp_repeat_3.test | 10 | 0.001037s | 0.001012s | 0.000998s | byte equality observed |
| mp_replace.test | 10 | 0.001030s | 0.000989s | 0.001001s | byte equality observed |
| mp_replace_at.test | 10 | 0.000988s | 0.000987s | 0.000995s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.001004s | 0.000990s | 0.000976s | byte equality observed |
| mp_replace_front.test | 10 | 0.001005s | 0.001014s | 0.000986s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000463s | 0.000459s | 0.000990s | byte equality observed |
| mp_replace_if.test | 10 | 0.000995s | 0.001017s | 0.000994s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.001004s | 0.001006s | 0.001005s | byte equality observed |
| mp_replace_second.test | 10 | 0.001005s | 0.001011s | 0.000993s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000459s | 0.000463s | 0.000995s | byte equality observed |
| mp_replace_third.test | 10 | 0.001015s | 0.001030s | 0.001002s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000469s | 0.000455s | 0.000976s | byte equality observed |
| mp_reverse.test | 10 | 0.001038s | 0.001037s | 0.001014s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.001054s | 0.001037s | 0.000997s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.001020s | 0.001011s | 0.000991s | byte equality observed |
| mp_rotate_left.test | 10 | 0.001018s | 0.001023s | 0.000983s | byte equality observed |
| mp_rotate_right.test | 10 | 0.001020s | 0.001036s | 0.001016s | byte equality observed |
| mp_same.test | 10 | 0.001031s | 0.001002s | 0.001001s | byte equality observed |
| mp_second.test | 10 | 0.001014s | 0.001010s | 0.001006s | byte equality observed |
| mp_second_2.test | 10 | 0.000457s | 0.000455s | 0.001005s | byte equality observed |
| mp_set_contains.test | 10 | 0.001013s | 0.001004s | 0.001012s | byte equality observed |
| mp_set_difference.test | 10 | 0.001037s | 0.001014s | 0.001028s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.001012s | 0.001011s | 0.000991s | byte equality observed |
| mp_set_intersection.test | 10 | 0.001014s | 0.001026s | 0.000988s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.001013s | 0.001053s | 0.001018s | byte equality observed |
| mp_set_push_back.test | 10 | 0.001026s | 0.001006s | 0.000987s | byte equality observed |
| mp_set_push_front.test | 10 | 0.001034s | 0.001020s | 0.000996s | byte equality observed |
| mp_set_union.test | 10 | 0.000979s | 0.001007s | 0.001003s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.001003s | 0.001013s | 0.001014s | byte equality observed |
| mp_similar.test | 10 | 0.000988s | 0.001004s | 0.001016s | byte equality observed |
| mp_size.test | 10 | 0.001013s | 0.001024s | 0.001005s | byte equality observed |
| mp_size_2.test | 10 | 0.000462s | 0.000456s | 0.000976s | byte equality observed |
| mp_slice.test | 10 | 0.001030s | 0.001053s | 0.000996s | byte equality observed |
| mp_slice_2.test | 10 | 0.000469s | 0.000455s | 0.000970s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.001017s | 0.000977s | 0.000990s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.001044s | 0.000989s | 0.001008s | byte equality observed |
| mp_sort.test | 10 | 0.000994s | 0.000992s | 0.001008s | byte equality observed |
| mp_sort_q.test | 10 | 0.001005s | 0.001003s | 0.001002s | byte equality observed |
| mp_split.test | 10 | 0.001017s | 0.001020s | 0.000992s | byte equality observed |
| mp_starts_with.test | 10 | 0.001001s | 0.000977s | 0.000997s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.001017s | 0.000995s | 0.000971s | byte equality observed |
| mp_take.test | 10 | 0.001028s | 0.001026s | 0.000992s | byte equality observed |
| mp_take_2.test | 10 | 0.000453s | 0.000468s | 0.000998s | byte equality observed |
| mp_third.test | 10 | 0.001013s | 0.001032s | 0.000986s | byte equality observed |
| mp_third_2.test | 10 | 0.000459s | 0.000462s | 0.001006s | byte equality observed |
| mp_transform.test | 10 | 0.001020s | 0.001021s | 0.000988s | byte equality observed |
| mp_transform_2.test | 10 | 0.000993s | 0.000993s | 0.001007s | byte equality observed |
| mp_transform_front.test | 10 | 0.001014s | 0.001008s | 0.000977s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000462s | 0.000461s | 0.000984s | byte equality observed |
| mp_transform_if.test | 10 | 0.001007s | 0.001008s | 0.000994s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.001013s | 0.001007s | 0.001008s | byte equality observed |
| mp_transform_q.test | 10 | 0.001015s | 0.001040s | 0.000974s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.001011s | 0.000972s | 0.000972s | byte equality observed |
| mp_transform_second.test | 10 | 0.001014s | 0.001020s | 0.000982s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000464s | 0.000460s | 0.000989s | byte equality observed |
| mp_transform_sf.test | 10 | 0.001022s | 0.001036s | 0.000983s | byte equality observed |
| mp_transform_third.test | 10 | 0.001024s | 0.001010s | 0.001003s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000464s | 0.000454s | 0.000999s | byte equality observed |
| mp_unique.test | 10 | 0.001019s | 0.001024s | 0.001010s | byte equality observed |
| mp_unique_if.test | 10 | 0.001008s | 0.001015s | 0.000990s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.001020s | 0.001041s | 0.001026s | byte equality observed |
| mp_valid.test | 10 | 0.000982s | 0.000987s | 0.001012s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.001006s | 0.001016s | 0.001004s | byte equality observed |
| mp_value.test | 10 | 0.000464s | 0.000458s | 0.000963s | byte equality observed |
| mp_with_index.test | 10 | 0.001367s | 0.001311s | 0.001274s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000455s | 0.000459s | 0.000984s | byte equality observed |
| mpl.test | 10 | 0.001004s | 0.000996s | 0.000994s | byte equality observed |
| mpl_list.test | 10 | 0.000990s | 0.001025s | 0.001034s | byte equality observed |
| mpl_tuple.test | 10 | 0.000990s | 0.000997s | 0.001003s | byte equality observed |
| mpl_version.test | 10 | 0.001010s | 0.000989s | 0.001022s | byte equality observed |
| set_version.test | 10 | 0.000988s | 0.000988s | 0.001038s | byte equality observed |
| tuple_apply.test | 10 | 0.001009s | 0.001001s | 0.000987s | byte equality observed |
| tuple_for_each.test | 10 | 0.001007s | 0.001007s | 0.001023s | byte equality observed |
| tuple_transform.test | 10 | 0.001019s | 0.001047s | 0.001024s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000990s | 0.000996s | 0.001031s | byte equality observed |
| tuple_version.test | 10 | 0.000989s | 0.000965s | 0.001024s | byte equality observed |
| utility_version.test | 10 | 0.001006s | 0.000979s | 0.001050s | byte equality observed |
| version.test | 10 | 0.000980s | 0.000997s | 0.001005s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45272062060).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
