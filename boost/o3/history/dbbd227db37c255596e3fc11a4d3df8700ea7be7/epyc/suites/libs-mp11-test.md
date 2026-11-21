# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.036802 | 0.070267 | 0.123212 | — | — | — |
| complex_h.test | COMPILE | 0.148576 | 0.307671 | 0.481681 | — | — | — |
| mp_size.test | RUN | 0.170019 | 0.955207 | 0.556513 | 0.001638 | 0.001752 | 0.001558 |
| mp_size_2.test | RUN | 0.016007 | 0.035222 | 0.054557 | 0.000702 | 0.000723 | 0.001460 |
| mp_empty.test | RUN | 0.163567 | 0.583081 | 0.556106 | 0.001474 | 0.001803 | 0.001456 |
| mp_empty_2.test | RUN | 0.016652 | 0.038549 | 0.059338 | 0.000621 | 0.000723 | 0.001577 |
| mp_assign.test | RUN | 0.183345 | 1.238829 | 0.754249 | 0.001742 | 0.001889 | 0.001410 |
| mp_assign_2.test | RUN | 0.015403 | 0.038656 | 0.055649 | 0.000695 | 0.000719 | 0.001408 |
| mp_clear.test | RUN | 0.163144 | 0.542801 | 0.597315 | 0.001436 | 0.001664 | 0.001640 |
| mp_clear_2.test | RUN | 0.016074 | 0.035152 | 0.051785 | 0.000534 | 0.000566 | 0.001746 |
| mp_front.test | RUN | 0.172984 | 0.847420 | 0.611522 | 0.001497 | 0.001777 | 0.001493 |
| mp_front_2.test | RUN | 0.016065 | 0.035234 | 0.058458 | 0.000571 | 0.000644 | 0.001617 |
| mp_pop_front.test | RUN | 0.175743 | 0.885595 | 0.607102 | 0.001367 | 0.001093 | 0.001501 |
| mp_pop_front_2.test | RUN | 0.015676 | 0.035835 | 0.055298 | 0.000564 | 0.000656 | 0.001417 |
| mp_second.test | RUN | 0.165512 | 0.576371 | 0.628465 | 0.001489 | 0.001654 | 0.001490 |
| mp_second_2.test | RUN | 0.015066 | 0.037400 | 0.057852 | 0.000703 | 0.000688 | 0.001645 |
| mp_third.test | RUN | 0.157041 | 0.530555 | 0.595143 | 0.001716 | 0.001831 | 0.001653 |
| mp_third_2.test | RUN | 0.016259 | 0.036554 | 0.050236 | 0.000657 | 0.000743 | 0.001376 |
| mp_push_front.test | RUN | 0.216365 | 1.873144 | 1.030098 | 0.001584 | 0.001664 | 0.001727 |
| mp_push_front_2.test | RUN | 0.016779 | 0.036285 | 0.058893 | 0.000556 | 0.000734 | 0.001334 |
| mp_push_back.test | RUN | 0.214615 | 1.882348 | 1.018913 | 0.001598 | 0.001617 | 0.001389 |
| mp_push_back_2.test | RUN | 0.014683 | 0.035273 | 0.052572 | 0.000682 | 0.000708 | 0.001702 |
| mp_rename.test | RUN | 0.205058 | 1.696679 | 0.835863 | 0.001381 | 0.001666 | 0.001637 |
| mp_rename_2.test | RUN | 0.015966 | 0.038097 | 0.057577 | 0.000532 | 0.000719 | 0.001693 |
| mp_append.test | RUN | 0.217948 | 1.936583 | 0.910247 | 0.001716 | 0.001774 | 0.001737 |
| mp_append_2.test | RUN | 0.444559 | 4.314225 | 1.240179 | 0.001554 | 0.001765 | 0.001555 |
| mp_append_3.test | RUN | 0.015661 | 0.034663 | 0.055395 | 0.000731 | 0.000599 | 0.001678 |
| mp_append_sf.test | RUN | 0.163342 | 0.487921 | 0.568244 | 0.001665 | 0.001812 | 0.001709 |
| mp_replace_front.test | RUN | 0.192236 | 1.388074 | 0.737018 | 0.001580 | 0.001759 | 0.001408 |
| mp_replace_front_2.test | RUN | 0.015927 | 0.036263 | 0.057457 | 0.000604 | 0.000751 | 0.001711 |
| mp_replace_second.test | RUN | 0.185842 | 0.897742 | 0.729218 | 0.001702 | 0.001665 | 0.001627 |
| mp_replace_second_2.test | RUN | 0.016145 | 0.037177 | 0.057424 | 0.000621 | 0.000714 | 0.001646 |
| mp_replace_third.test | RUN | 0.178553 | 0.731961 | 0.651845 | 0.001626 | 0.001812 | 0.001793 |
| mp_replace_third_2.test | RUN | 0.015872 | 0.038209 | 0.057768 | 0.000586 | 0.000609 | 0.001664 |
| mp_apply_q.test | RUN | 0.199592 | 1.692515 | 0.867578 | 0.001541 | 0.001406 | 0.001710 |
| mp_apply_q_sf.test | RUN | 0.160398 | 0.516994 | 0.536826 | 0.001471 | 0.001740 | 0.001706 |
| mp_is_list.test | RUN | 0.162034 | 0.594618 | 0.561473 | 0.001547 | 0.001707 | 0.001511 |
| mp_list_c.test | RUN | 0.169708 | 0.710150 | 0.589108 | 0.001563 | 0.001631 | 0.001664 |
| mp_transform_front.test | RUN | 0.191180 | 1.383590 | 0.764696 | 0.001459 | 0.001762 | 0.001630 |
| mp_transform_front_2.test | RUN | 0.015893 | 0.034872 | 0.055918 | 0.000564 | 0.000703 | 0.001624 |
| mp_transform_second.test | RUN | 0.180928 | 1.201353 | 0.724887 | 0.001359 | 0.001594 | 0.001655 |
| mp_transform_second_2.test | RUN | 0.014324 | 0.035789 | 0.053387 | 0.000648 | 0.000755 | 0.001450 |
| mp_transform_third.test | RUN | 0.171176 | 0.916183 | 0.604372 | 0.001481 | 0.001492 | 0.001696 |
| mp_transform_third_2.test | RUN | 0.015850 | 0.035524 | 0.055725 | 0.000594 | 0.000586 | 0.001690 |
| mp_list_v.test | RUN | 0.016478 | 0.034721 | 0.057821 | 0.000602 | 0.000648 | 0.001407 |
| mp_rename_v.test | RUN | 0.016341 | 0.035250 | 0.051199 | 0.000569 | 0.000705 | 0.001386 |
| mp_is_value_list.test | RUN | 0.155668 | 0.370030 | 0.549515 | 0.001707 | 0.001588 | 0.001732 |
| mp_transform.test | RUN | 0.356298 | 2.911321 | 1.576229 | 0.001434 | 0.001618 | 0.001680 |
| mp_transform_2.test | RUN | 0.149178 | 0.339061 | 0.525667 | 0.001441 | 0.001754 | 0.001512 |
| mp_transform_q.test | RUN | 0.355524 | 2.787110 | 1.539664 | 0.001608 | 0.001817 | 0.001759 |
| mp_transform_q_2.test | RUN | 0.399211 | 0.906221 | 1.969904 | 0.001593 | 0.001754 | 0.001556 |
| mp_transform_sf.test | RUN | 0.166474 | 0.514812 | 0.593951 | 0.001724 | 0.001606 | 0.001805 |
| mp_transform_if.test | RUN | 0.204757 | 1.391029 | 0.841200 | 0.001606 | 0.001452 | 0.001658 |
| mp_transform_if_q.test | RUN | 0.205000 | 1.382912 | 0.861609 | 0.001495 | 0.001659 | 0.001634 |
| mp_filter.test | RUN | 0.187181 | 0.832415 | 0.660856 | 0.001610 | 0.001858 | 0.001420 |
| mp_fill.test | RUN | 0.173303 | 0.638046 | 0.601675 | 0.001625 | 0.001742 | 0.001754 |
| mp_fill_2.test | RUN | 0.028122 | 0.054979 | 0.092934 | 0.000753 | 0.000699 | 0.001620 |
| mp_count.test | RUN | 0.348227 | 1.488376 | 0.981312 | 0.001662 | 0.001484 | 0.001444 |
| mp_count_if.test | RUN | 0.355188 | 1.503639 | 1.111633 | 0.001477 | 0.001756 | 0.001778 |
| mp_count_if_q.test | RUN | 0.181787 | 1.003138 | 0.609775 | 0.001558 | 0.001829 | 0.001539 |
| mp_contains.test | RUN | 0.166978 | 0.612807 | 0.564993 | 0.001538 | 0.001686 | 0.001633 |
| mp_starts_with.test | RUN | 0.175691 | 0.598907 | 0.558191 | 0.001394 | 0.001661 | 0.001802 |
| mp_starts_with_sf.test | RUN | 0.169536 | 0.508412 | 0.577059 | 0.001480 | 0.001916 | 0.001546 |
| mp_repeat.test | RUN | 0.248342 | 2.467271 | 1.102445 | 0.001793 | 0.001801 | 0.001715 |
| mp_repeat_2.test | RUN | 0.027484 | 0.058635 | 0.096429 | 0.000626 | 0.000772 | 0.001495 |
| mp_repeat_3.test | RUN | 0.218071 | 0.338678 | 0.540277 | 0.001574 | 0.001881 | 0.001727 |
| mp_product.test | RUN | 0.202935 | 1.490156 | 0.799888 | 0.001648 | 0.001763 | 0.001576 |
| mp_drop.test | RUN | 0.209693 | 1.857685 | 0.875913 | 0.001472 | 0.001634 | 0.001704 |
| mp_drop_2.test | RUN | 0.029305 | 0.060031 | 0.091541 | 0.000631 | 0.000717 | 0.001396 |
| mp_iota.test | RUN | 0.197917 | 1.570547 | 0.768591 | 0.001694 | 0.001738 | 0.001698 |
| mp_iota_2.test | RUN | 0.218122 | 1.886313 | 0.935593 | 0.001413 | 0.001865 | 0.001708 |
| mp_at.test | RUN | 0.183645 | 0.828078 | 0.698424 | 0.001512 | 0.001406 | 0.001668 |
| mp_at_2.test | RUN | 0.027892 | 0.054641 | 0.097235 | 0.000595 | 0.000630 | 0.001681 |
| mp_at_sf.test | RUN | 0.168486 | 0.522809 | 0.541837 | 0.001505 | 0.001486 | 0.001466 |
| mp_take.test | RUN | 0.282804 | 2.445693 | 1.059648 | 0.001741 | 0.001626 | 0.001667 |
| mp_take_2.test | RUN | 0.027488 | 0.057809 | 0.093897 | 0.000714 | 0.000741 | 0.001678 |
| mp_slice.test | RUN | 0.325072 | 2.470925 | 1.345569 | 0.001564 | 0.001727 | 0.001362 |
| mp_slice_2.test | RUN | 0.027704 | 0.057334 | 0.094894 | 0.000713 | 0.000728 | 0.001736 |
| mp_replace.test | RUN | 0.205157 | 1.264232 | 0.876792 | 0.001721 | 0.001582 | 0.001681 |
| mp_replace_if.test | RUN | 0.199685 | 1.133368 | 0.826956 | 0.001731 | 0.001743 | 0.001553 |
| mp_replace_if_q.test | RUN | 0.197951 | 1.126433 | 0.814580 | 0.001576 | 0.001729 | 0.001627 |
| mp_copy_if.test | RUN | 0.202872 | 1.559994 | 0.768150 | 0.001470 | 0.001708 | 0.001757 |
| mp_copy_if_q.test | RUN | 0.203032 | 1.547377 | 0.792565 | 0.001692 | 0.001629 | 0.001329 |
| mp_remove.test | RUN | 0.199946 | 1.064355 | 0.811523 | 0.001840 | 0.001833 | 0.001332 |
| mp_remove_if.test | RUN | 0.209687 | 1.647071 | 0.833050 | 0.001525 | 0.001718 | 0.001791 |
| mp_remove_if_q.test | RUN | 0.210882 | 1.646940 | 0.843547 | 0.001577 | 0.001650 | 0.001704 |
| mp_partition.test | RUN | 0.208662 | 1.525496 | 0.897337 | 0.001723 | 0.001740 | 0.001296 |
| mp_partition_q.test | RUN | 0.209371 | 1.562578 | 0.913710 | 0.001643 | 0.001774 | 0.001638 |
| mp_sort.test | RUN | 0.195342 | 1.112592 | 0.786858 | 0.001599 | 0.001751 | 0.001667 |
| mp_sort_q.test | RUN | 0.195263 | 1.108723 | 0.791369 | 0.001460 | 0.001612 | 0.001750 |
| mp_find.test | RUN | 0.193654 | 1.205522 | 0.704007 | 0.001741 | 0.001729 | 0.001390 |
| mp_find_if.test | RUN | 0.185057 | 1.096528 | 0.672881 | 0.001767 | 0.001573 | 0.001531 |
| mp_find_if_q.test | RUN | 0.203828 | 1.235905 | 0.810411 | 0.001705 | 0.001967 | 0.001694 |
| mp_reverse.test | RUN | 0.405697 | 3.234857 | 1.497871 | 0.001655 | 0.001566 | 0.001727 |
| mp_fold.test | RUN | 0.678155 | 2.565496 | 3.741744 | 0.001504 | 0.001685 | 0.001829 |
| mp_fold_q.test | RUN | 0.189754 | 1.095515 | 0.778528 | 0.001585 | 0.001838 | 0.001720 |
| mp_fold_q_sf.test | RUN | 0.170935 | 0.525433 | 0.606349 | 0.001515 | 0.001762 | 0.001462 |
| mp_reverse_fold.test | RUN | 0.322785 | 2.404746 | 1.119531 | 0.001566 | 0.001808 | 0.001226 |
| mp_reverse_fold_q.test | RUN | 0.196104 | 1.336782 | 0.783743 | 0.001565 | 0.001633 | 0.001662 |
| mp_unique.test | RUN | 0.199716 | 1.214265 | 0.784245 | 0.001272 | 0.001859 | 0.001675 |
| mp_unique_if.test | RUN | 0.348997 | 2.515138 | 1.229416 | 0.001724 | 0.001532 | 0.001604 |
| mp_unique_if_q.test | RUN | 0.304292 | 2.485750 | 1.023583 | 0.001555 | 0.001638 | 0.001683 |
| mp_all_of.test | RUN | 0.486194 | 1.381029 | 1.306939 | 0.001755 | 0.001713 | 0.001653 |
| mp_all_of_q.test | RUN | 0.170673 | 0.576108 | 0.573777 | 0.001698 | 0.001742 | 0.001631 |
| mp_any_of.test | RUN | 0.458217 | 1.440015 | 1.292860 | 0.001607 | 0.001723 | 0.001788 |
| mp_any_of_q.test | RUN | 0.170202 | 0.577012 | 0.630650 | 0.001893 | 0.001711 | 0.001690 |
| mp_none_of.test | RUN | 0.452695 | 1.411035 | 1.362870 | 0.001343 | 0.001716 | 0.001694 |
| mp_none_of_q.test | RUN | 0.174362 | 0.586436 | 0.545248 | 0.001756 | 0.001686 | 0.001549 |
| mp_replace_at.test | RUN | 0.209205 | 1.237488 | 0.840218 | 0.001780 | 0.001870 | 0.001740 |
| mp_replace_at_c.test | RUN | 0.205132 | 1.245473 | 0.868709 | 0.001579 | 0.001822 | 0.001466 |
| mp_for_each.test | RUN | 0.196141 | 0.846158 | 0.979388 | 0.001498 | 0.001552 | 0.001614 |
| mp_insert.test | RUN | 0.303207 | 2.450919 | 1.216559 | 0.001666 | 0.001784 | 0.001723 |
| mp_insert_2.test | RUN | 0.028305 | 0.055470 | 0.096821 | 0.000554 | 0.000702 | 0.001620 |
| mp_erase.test | RUN | 0.330526 | 2.599460 | 1.472000 | 0.001738 | 0.001830 | 0.001667 |
| mp_erase_2.test | RUN | 0.028227 | 0.059316 | 0.097349 | 0.000734 | 0.000767 | 0.001371 |
| mp_with_index.test | RUN | 0.465340 | 5.304958 | 3.146470 | 0.002381 | 0.002184 | 0.002058 |
| mp_with_index_cx.test | RUN | 0.003792 | 0.018583 | 0.026807 | 0.000691 | 0.000737 | 0.001719 |
| mp_from_sequence.test | RUN | 0.205945 | 1.391836 | 0.832257 | 0.001613 | 0.001793 | 0.001371 |
| mp_from_sequence_2.test | RUN | 0.211734 | 1.622019 | 0.912557 | 0.001702 | 0.001809 | 0.001729 |
| mp_from_sequence_3.test | RUN | 0.178599 | 0.737827 | 0.644995 | 0.001539 | 0.001735 | 0.001562 |
| mp_min_element.test | RUN | 0.176184 | 0.662538 | 0.626920 | 0.001452 | 0.001607 | 0.001612 |
| mp_min_element_2.test | RUN | 0.027405 | 0.056463 | 0.098749 | 0.000664 | 0.000767 | 0.001747 |
| mp_min_element_q.test | RUN | 0.175787 | 0.651679 | 0.615551 | 0.001568 | 0.001785 | 0.001655 |
| mp_min_element_q_2.test | RUN | 0.027578 | 0.058271 | 0.088564 | 0.000632 | 0.000731 | 0.001622 |
| mp_max_element.test | RUN | 0.174490 | 0.676890 | 0.611779 | 0.001450 | 0.001755 | 0.001621 |
| mp_max_element_2.test | RUN | 0.027949 | 0.057545 | 0.089087 | 0.000661 | 0.000677 | 0.001644 |
| mp_max_element_q.test | RUN | 0.175546 | 0.660016 | 0.633435 | 0.001509 | 0.001767 | 0.001735 |
| mp_max_element_q_2.test | RUN | 0.027902 | 0.057111 | 0.083252 | 0.000636 | 0.000776 | 0.001685 |
| mp_nth_element.test | RUN | 0.191336 | 0.925270 | 0.752714 | 0.001648 | 0.001726 | 0.001503 |
| mp_nth_element_q.test | RUN | 0.193090 | 0.913725 | 0.742178 | 0.001709 | 0.001631 | 0.001590 |
| mp_back.test | RUN | 0.192508 | 0.754416 | 0.711642 | 0.001559 | 0.001701 | 0.001566 |
| mp_back_2.test | RUN | 0.026838 | 0.055842 | 0.093910 | 0.000602 | 0.000598 | 0.001498 |
| mp_pop_back.test | RUN | 0.498986 | 4.983680 | 1.427099 | 0.001633 | 0.001527 | 0.001621 |
| mp_pop_back_2.test | RUN | 0.027338 | 0.055949 | 0.098704 | 0.000832 | 0.000649 | 0.001600 |
| mp_flatten.test | RUN | 0.220917 | 1.764926 | 0.993535 | 0.001768 | 0.001690 | 0.001511 |
| mp_rotate_left.test | RUN | 0.223797 | 1.908405 | 0.983417 | 0.001575 | 0.001879 | 0.001614 |
| mp_rotate_right.test | RUN | 0.221785 | 1.921709 | 1.000755 | 0.001717 | 0.001879 | 0.001625 |
| mp_power_set.test | RUN | 0.218434 | 1.808786 | 0.992456 | 0.001681 | 0.001801 | 0.001700 |
| mp_partial_sum.test | RUN | 0.279269 | 2.444820 | 1.107207 | 0.001621 | 0.001537 | 0.001639 |
| mp_iterate.test | RUN | 0.196082 | 0.744042 | 0.790326 | 0.001383 | 0.001687 | 0.001377 |
| mp_pairwise_fold.test | RUN | 0.219950 | 1.682198 | 0.994588 | 0.001343 | 0.001900 | 0.001617 |
| mp_pairwise_fold_q.test | RUN | 0.175124 | 0.501898 | 0.574712 | 0.001788 | 0.001752 | 0.001744 |
| mp_sliding_fold.test | RUN | 0.406778 | 3.196020 | 1.818487 | 0.001663 | 0.001861 | 0.001628 |
| mp_sliding_fold_q.test | RUN | 0.402238 | 3.219034 | 1.804334 | 0.001732 | 0.001626 | 0.001648 |
| mp_intersperse.test | RUN | 0.206250 | 1.218155 | 0.856621 | 0.001674 | 0.001738 | 0.001746 |
| mp_split.test | RUN | 0.292174 | 2.321754 | 1.186048 | 0.001781 | 0.001716 | 0.001839 |
| mp_join.test | RUN | 0.233873 | 1.937574 | 1.037812 | 0.001800 | 0.001840 | 0.001716 |
| integral.test | RUN | 0.180149 | 0.873868 | 0.660946 | 0.001350 | 0.001731 | 0.001745 |
| mp_value.test | RUN | 0.011822 | 0.032055 | 0.046420 | 0.000706 | 0.000662 | 0.001642 |
| mp_identity.test | RUN | 0.171466 | 0.803039 | 0.631585 | 0.001585 | 0.001680 | 0.001764 |
| mp_inherit.test | RUN | 0.160825 | 0.575032 | 0.586262 | 0.001293 | 0.001773 | 0.001698 |
| mp_if.test | RUN | 0.169339 | 0.657448 | 0.595110 | 0.001662 | 0.001739 | 0.001746 |
| mp_if_sf.test | RUN | 0.160365 | 0.483033 | 0.536229 | 0.001588 | 0.001784 | 0.001770 |
| mp_eval_if.test | RUN | 0.167732 | 0.706623 | 0.597969 | 0.001699 | 0.001772 | 0.001542 |
| mp_eval_if_sf.test | RUN | 0.158925 | 0.505836 | 0.544582 | 0.001458 | 0.001548 | 0.001696 |
| mp_valid.test | RUN | 0.158349 | 0.508252 | 0.557388 | 0.001318 | 0.001720 | 0.001684 |
| mp_defer.test | RUN | 0.175482 | 0.852767 | 0.661003 | 0.001515 | 0.001737 | 0.001704 |
| mp_quote.test | RUN | 0.175660 | 0.852911 | 0.677352 | 0.001784 | 0.001717 | 0.001777 |
| mp_invoke_q.test | RUN | 0.192617 | 1.116504 | 0.748125 | 0.001737 | 0.001712 | 0.001769 |
| mp_invoke_q_sf.test | RUN | 0.164365 | 0.490859 | 0.567705 | 0.001582 | 0.001855 | 0.001552 |
| mp_quote_trait.test | RUN | 0.177674 | 0.927094 | 0.615165 | 0.001527 | 0.001639 | 0.001688 |
| mp_cond.test | RUN | 0.170355 | 0.599677 | 0.574388 | 0.001526 | 0.001584 | 0.001472 |
| mp_cond_sf.test | RUN | 0.163718 | 0.505240 | 0.549392 | 0.001735 | 0.001594 | 0.001383 |
| mp_not_fn.test | RUN | 0.159940 | 0.493426 | 0.521993 | 0.001615 | 0.001847 | 0.001666 |
| mp_eval_if_not.test | RUN | 0.167917 | 0.710726 | 0.612550 | 0.001586 | 0.001635 | 0.001505 |
| mp_eval_or.test | RUN | 0.159772 | 0.384466 | 0.559381 | 0.001619 | 0.001783 | 0.001689 |
| mp_compose.test | RUN | 0.180866 | 1.153094 | 0.735429 | 0.001568 | 0.001454 | 0.001705 |
| mp_valid_and_true.test | RUN | 0.160007 | 0.579041 | 0.583219 | 0.001512 | 0.001850 | 0.001580 |
| mp_compose_sf.test | COMPILE | 0.037224 | 0.075040 | 0.143262 | — | — | — |
| integer_sequence.test | RUN | 0.195037 | 1.137098 | 0.789016 | 0.001501 | 0.001928 | 0.001636 |
| tuple_for_each.test | RUN | 0.162354 | 0.422410 | 0.583278 | 0.001652 | 0.001622 | 0.001686 |
| tuple_for_each_cx.test | COMPILE | 0.031389 | 0.067683 | 0.106289 | — | — | — |
| tuple_apply.test | RUN | 0.168533 | 0.441239 | 0.591776 | 0.001596 | 0.001574 | 0.001747 |
| tuple_apply_cx.test | COMPILE | 0.046671 | 0.087548 | 0.151898 | — | — | — |
| construct_from_tuple.test | RUN | 0.164494 | 0.461563 | 0.591360 | 0.001456 | 0.001701 | 0.001646 |
| construct_from_tuple_cx.test | COMPILE | 0.046652 | 0.089966 | 0.148678 | — | — | — |
| tuple_transform.test | RUN | 0.263918 | 0.938008 | 1.170626 | 0.001728 | 0.001482 | 0.001204 |
| tuple_transform_2.test | RUN | 0.235829 | 0.692744 | 1.027240 | 0.001655 | 0.001531 | 0.001558 |
| tuple_transform_cx.test | COMPILE | 0.040216 | 0.088138 | 0.145064 | — | — | — |
| mp_set_contains.test | RUN | 0.166028 | 0.603827 | 0.610948 | 0.001873 | 0.001626 | 0.001686 |
| mp_set_push_back.test | RUN | 0.220317 | 1.828891 | 0.998650 | 0.001651 | 0.001651 | 0.001776 |
| mp_set_push_front.test | RUN | 0.278621 | 2.192019 | 1.143167 | 0.001568 | 0.001726 | 0.001753 |
| mp_is_set.test | RUN | 0.166174 | 0.605197 | 0.579168 | 0.001659 | 0.001698 | 0.001798 |
| mp_set_union.test | RUN | 0.209805 | 1.542708 | 0.964362 | 0.001582 | 0.001887 | 0.001392 |
| mp_set_union_sf.test | RUN | 0.164822 | 0.486405 | 0.541101 | 0.001657 | 0.001664 | 0.001526 |
| mp_set_difference.test | RUN | 0.193108 | 1.219137 | 0.772352 | 0.001472 | 0.001786 | 0.001390 |
| mp_set_difference_sf.test | RUN | 0.158131 | 0.478458 | 0.540623 | 0.001578 | 0.001817 | 0.001720 |
| mp_set_intersection.test | RUN | 0.194255 | 1.209335 | 0.755195 | 0.001728 | 0.001719 | 0.001690 |
| mp_set_intersection_sf.test | RUN | 0.165532 | 0.494638 | 0.538386 | 0.001809 | 0.001672 | 0.001652 |
| mp_all.test | RUN | 0.171038 | 0.600870 | 0.619359 | 0.001673 | 0.001616 | 0.001363 |
| mp_all_2.test | RUN | 0.494827 | 1.295923 | 1.320870 | 0.001830 | 0.001886 | 0.001700 |
| mp_and.test | RUN | 0.167051 | 0.591892 | 0.567962 | 0.001633 | 0.001722 | 0.001734 |
| mp_any.test | RUN | 0.167978 | 0.606043 | 0.550747 | 0.001346 | 0.001730 | 0.001630 |
| mp_any_2.test | RUN | 0.470903 | 1.318045 | 1.330987 | 0.001771 | 0.001792 | 0.001586 |
| mp_or.test | RUN | 0.168181 | 0.596653 | 0.600197 | 0.001722 | 0.001862 | 0.001756 |
| mp_same.test | RUN | 0.318877 | 1.001803 | 0.919371 | 0.001586 | 0.001502 | 0.001445 |
| mp_plus.test | RUN | 0.173586 | 0.682417 | 0.612921 | 0.001469 | 0.001546 | 0.001300 |
| mp_less.test | RUN | 0.167684 | 0.583475 | 0.541971 | 0.001792 | 0.001601 | 0.001680 |
| mp_min.test | RUN | 0.162825 | 0.548921 | 0.589460 | 0.001708 | 0.001866 | 0.001196 |
| mp_max.test | RUN | 0.164713 | 0.609786 | 0.602653 | 0.001598 | 0.001357 | 0.001581 |
| mp_similar.test | RUN | 0.164962 | 0.593749 | 0.590759 | 0.001676 | 0.001748 | 0.001406 |
| mp_map_find.test | RUN | 0.198468 | 1.074376 | 0.786484 | 0.001829 | 0.001706 | 0.001719 |
| mp_map_find_2.test | RUN | 0.177425 | 0.435281 | 0.638500 | 0.001800 | 0.001723 | 0.001462 |
| mp_map_find_3.test | RUN | 0.176496 | 0.429889 | 0.677101 | 0.001476 | 0.001528 | 0.001286 |
| mp_map_find_4.test | RUN | 0.172911 | 0.403191 | 0.627458 | 0.001693 | 0.001545 | 0.001432 |
| mp_map_contains.test | RUN | 0.175985 | 0.605679 | 0.595149 | 0.001774 | 0.001879 | 0.001520 |
| mp_map_insert.test | RUN | 0.228059 | 2.024567 | 1.056707 | 0.001720 | 0.001858 | 0.001792 |
| mp_map_replace.test | RUN | 0.294101 | 2.314173 | 1.214840 | 0.001574 | 0.001738 | 0.001576 |
| mp_map_erase.test | RUN | 0.220217 | 1.723546 | 1.031509 | 0.001603 | 0.001850 | 0.001475 |
| mp_map_update.test | RUN | 0.198181 | 1.127294 | 0.797069 | 0.001745 | 0.001746 | 0.001755 |
| mp_map_update_q.test | RUN | 0.194957 | 1.107825 | 0.795452 | 0.001834 | 0.001611 | 0.001502 |
| mp_map_keys.test | RUN | 0.193901 | 0.994278 | 0.773760 | 0.001414 | 0.001870 | 0.001465 |
| mp_is_map.test | RUN | 0.176044 | 0.631874 | 0.644428 | 0.001596 | 0.001612 | 0.001169 |
| mp_bind.test | RUN | 0.215303 | 1.782223 | 0.928681 | 0.001855 | 0.001530 | 0.001662 |
| mp_bind_q.test | RUN | 0.194873 | 1.109820 | 0.770305 | 0.001762 | 0.001776 | 0.001380 |
| mp_bind_front.test | RUN | 0.188687 | 1.222567 | 0.718688 | 0.001494 | 0.001663 | 0.001560 |
| mp_bind_back.test | RUN | 0.186263 | 1.218380 | 0.735742 | 0.001434 | 0.001806 | 0.001344 |
| mp_lambda.test | RUN | 0.422525 | 3.650827 | 1.863769 | 0.001712 | 0.001324 | 0.001751 |
| mpl.test | RUN | 0.374557 | 0.970859 | 1.512180 | 0.001732 | 0.001718 | 0.001652 |
| mpl_list.test | RUN | 0.211807 | 0.738695 | 0.727726 | 0.001374 | 0.001750 | 0.001534 |
| mpl_tuple.test | RUN | 0.215842 | 0.756722 | 0.735737 | 0.001342 | 0.001533 | 0.001412 |
| version.test | RUN | 0.108348 | 0.275976 | 0.383892 | 0.001583 | 0.001610 | 0.001391 |
| mp11_version.test | RUN | 0.132948 | 0.313519 | 0.450857 | 0.001481 | 0.001726 | 0.001471 |
| list_version.test | RUN | 0.111730 | 0.287009 | 0.393947 | 0.001500 | 0.001784 | 0.001624 |
| algorithm_version.test | RUN | 0.124245 | 0.300230 | 0.404309 | 0.001763 | 0.001648 | 0.001633 |
| integral_version.test | RUN | 0.109265 | 0.270155 | 0.387199 | 0.001644 | 0.001611 | 0.001700 |
| utility_version.test | RUN | 0.109642 | 0.283513 | 0.383661 | 0.001540 | 0.001544 | 0.001604 |
| function_version.test | RUN | 0.112945 | 0.284054 | 0.365355 | 0.001474 | 0.001746 | 0.001596 |
| map_version.test | RUN | 0.125085 | 0.296641 | 0.423107 | 0.001701 | 0.001775 | 0.001588 |
| set_version.test | RUN | 0.114172 | 0.289031 | 0.396607 | 0.001581 | 0.001739 | 0.001572 |
| bind_version.test | RUN | 0.124354 | 0.292662 | 0.384015 | 0.001555 | 0.001636 | 0.001628 |
| integer_sequence_version.test | RUN | 0.107239 | 0.273221 | 0.368546 | 0.001335 | 0.001679 | 0.001329 |
| tuple_version.test | RUN | 0.115930 | 0.297619 | 0.269947 | 0.001337 | 0.001744 | 0.001242 |
| mpl_version.test | RUN | 0.090438 | 0.239655 | 0.386176 | 0.001298 | 0.001364 | 0.001196 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.006× | 1.000×, 1.012× | 1.003× |
| clang | 1.082× | 1.082×, 1.082× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44922642903).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000975s | 0.000943s | 0.001008s | byte equality observed |
| bind_version.test | 10 | 0.000970s | 0.000940s | 0.000988s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000974s | 0.000938s | 0.000999s | byte equality observed |
| function_version.test | 10 | 0.000964s | 0.000944s | 0.001038s | byte equality observed |
| integer_sequence.test | 10 | 0.000992s | 0.000962s | 0.001023s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000986s | 0.000966s | 0.001020s | byte equality observed |
| integral.test | 10 | 0.000990s | 0.001008s | 0.001042s | byte equality observed |
| integral_version.test | 10 | 0.000990s | 0.000967s | 0.001033s | byte equality observed |
| list_version.test | 10 | 0.001004s | 0.000962s | 0.001080s | byte equality observed |
| map_version.test | 10 | 0.001010s | 0.000951s | 0.001032s | byte equality observed |
| mp11_version.test | 10 | 0.001019s | 0.000946s | 0.001019s | byte equality observed |
| mp_all.test | 10 | 0.001020s | 0.000957s | 0.001049s | byte equality observed |
| mp_all_2.test | 10 | 0.001003s | 0.000970s | 0.000996s | byte equality observed |
| mp_all_of.test | 10 | 0.000996s | 0.000976s | 0.001004s | byte equality observed |
| mp_all_of_q.test | 10 | 0.001008s | 0.000979s | 0.001031s | byte equality observed |
| mp_and.test | 10 | 0.001014s | 0.000992s | 0.001022s | byte equality observed |
| mp_any.test | 10 | 0.001020s | 0.001020s | 0.001032s | byte equality observed |
| mp_any_2.test | 10 | 0.001014s | 0.001007s | 0.001012s | byte equality observed |
| mp_any_of.test | 10 | 0.001018s | 0.001047s | 0.001043s | byte equality observed |
| mp_any_of_q.test | 10 | 0.001008s | 0.001003s | 0.001040s | byte equality observed |
| mp_append.test | 10 | 0.001004s | 0.001011s | 0.001058s | byte equality observed |
| mp_append_2.test | 10 | 0.001043s | 0.001031s | 0.001022s | byte equality observed |
| mp_append_3.test | 10 | 0.000469s | 0.000464s | 0.000999s | byte equality observed |
| mp_append_sf.test | 10 | 0.001028s | 0.000987s | 0.001029s | byte equality observed |
| mp_apply_q.test | 10 | 0.001013s | 0.001011s | 0.001007s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.001033s | 0.001026s | 0.000992s | byte equality observed |
| mp_assign.test | 10 | 0.001020s | 0.001025s | 0.000987s | byte equality observed |
| mp_assign_2.test | 10 | 0.000473s | 0.000474s | 0.001022s | byte equality observed |
| mp_at.test | 10 | 0.001050s | 0.001047s | 0.001024s | byte equality observed |
| mp_at_2.test | 10 | 0.000470s | 0.000463s | 0.001025s | byte equality observed |
| mp_at_sf.test | 10 | 0.001026s | 0.001027s | 0.001019s | byte equality observed |
| mp_back.test | 10 | 0.001033s | 0.001020s | 0.001028s | byte equality observed |
| mp_back_2.test | 10 | 0.000465s | 0.000461s | 0.000983s | byte equality observed |
| mp_bind.test | 10 | 0.001013s | 0.001011s | 0.001025s | byte equality observed |
| mp_bind_back.test | 10 | 0.001011s | 0.001003s | 0.001012s | byte equality observed |
| mp_bind_front.test | 10 | 0.001007s | 0.001020s | 0.001025s | byte equality observed |
| mp_bind_q.test | 10 | 0.001022s | 0.001010s | 0.000993s | byte equality observed |
| mp_clear.test | 10 | 0.001003s | 0.001029s | 0.001011s | byte equality observed |
| mp_clear_2.test | 10 | 0.000471s | 0.000472s | 0.000984s | byte equality observed |
| mp_compose.test | 10 | 0.001003s | 0.001017s | 0.001027s | byte equality observed |
| mp_cond.test | 10 | 0.001055s | 0.001012s | 0.001015s | byte equality observed |
| mp_cond_sf.test | 10 | 0.001023s | 0.001011s | 0.001067s | byte equality observed |
| mp_contains.test | 10 | 0.001004s | 0.001014s | 0.001056s | byte equality observed |
| mp_copy_if.test | 10 | 0.000998s | 0.001016s | 0.001026s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.001002s | 0.001003s | 0.000996s | byte equality observed |
| mp_count.test | 10 | 0.001012s | 0.001034s | 0.001025s | byte equality observed |
| mp_count_if.test | 10 | 0.001020s | 0.000992s | 0.001014s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000991s | 0.000987s | 0.001007s | byte equality observed |
| mp_defer.test | 10 | 0.001009s | 0.000996s | 0.001007s | byte equality observed |
| mp_drop.test | 10 | 0.001026s | 0.001037s | 0.001017s | byte equality observed |
| mp_drop_2.test | 10 | 0.000461s | 0.000463s | 0.001012s | byte equality observed |
| mp_empty.test | 10 | 0.001009s | 0.001011s | 0.001005s | byte equality observed |
| mp_empty_2.test | 10 | 0.000462s | 0.000465s | 0.001025s | byte equality observed |
| mp_erase.test | 10 | 0.001057s | 0.001026s | 0.001014s | byte equality observed |
| mp_erase_2.test | 10 | 0.000469s | 0.000454s | 0.001014s | byte equality observed |
| mp_eval_if.test | 10 | 0.001020s | 0.001030s | 0.001009s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.001025s | 0.001018s | 0.001025s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.001007s | 0.001008s | 0.001024s | byte equality observed |
| mp_eval_or.test | 10 | 0.000996s | 0.000995s | 0.001060s | byte equality observed |
| mp_fill.test | 10 | 0.001031s | 0.001043s | 0.001006s | byte equality observed |
| mp_fill_2.test | 10 | 0.000462s | 0.000461s | 0.001028s | byte equality observed |
| mp_filter.test | 10 | 0.001027s | 0.000995s | 0.001014s | byte equality observed |
| mp_find.test | 10 | 0.001021s | 0.000995s | 0.001027s | byte equality observed |
| mp_find_if.test | 10 | 0.001011s | 0.001001s | 0.001057s | byte equality observed |
| mp_find_if_q.test | 10 | 0.001000s | 0.000998s | 0.001004s | byte equality observed |
| mp_flatten.test | 10 | 0.000993s | 0.001004s | 0.001012s | byte equality observed |
| mp_fold.test | 10 | 0.001025s | 0.000998s | 0.001015s | byte equality observed |
| mp_fold_q.test | 10 | 0.001001s | 0.001013s | 0.001011s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.001001s | 0.000973s | 0.000991s | byte equality observed |
| mp_for_each.test | 10 | 0.001011s | 0.000995s | 0.001003s | byte equality observed |
| mp_from_sequence.test | 10 | 0.001017s | 0.001016s | 0.001007s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.001008s | 0.001014s | 0.001005s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.001016s | 0.001015s | 0.000996s | byte equality observed |
| mp_front.test | 10 | 0.001025s | 0.001018s | 0.001001s | byte equality observed |
| mp_front_2.test | 10 | 0.000458s | 0.000459s | 0.000991s | byte equality observed |
| mp_identity.test | 10 | 0.001028s | 0.001015s | 0.001014s | byte equality observed |
| mp_if.test | 10 | 0.001011s | 0.001016s | 0.000999s | byte equality observed |
| mp_if_sf.test | 10 | 0.001005s | 0.001039s | 0.001014s | byte equality observed |
| mp_inherit.test | 10 | 0.001016s | 0.001047s | 0.001012s | byte equality observed |
| mp_insert.test | 10 | 0.001031s | 0.001026s | 0.001013s | byte equality observed |
| mp_insert_2.test | 10 | 0.000474s | 0.000466s | 0.001000s | byte equality observed |
| mp_intersperse.test | 10 | 0.001011s | 0.001021s | 0.001017s | byte equality observed |
| mp_invoke_q.test | 10 | 0.001009s | 0.001006s | 0.001027s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.001007s | 0.001000s | 0.000995s | byte equality observed |
| mp_iota.test | 10 | 0.001015s | 0.000987s | 0.001013s | byte equality observed |
| mp_iota_2.test | 10 | 0.001006s | 0.001013s | 0.001015s | byte equality observed |
| mp_is_list.test | 10 | 0.001002s | 0.001037s | 0.001004s | byte equality observed |
| mp_is_map.test | 10 | 0.001002s | 0.001015s | 0.001019s | byte equality observed |
| mp_is_set.test | 10 | 0.000996s | 0.000991s | 0.000990s | byte equality observed |
| mp_is_value_list.test | 10 | 0.001012s | 0.001000s | 0.000999s | byte equality observed |
| mp_iterate.test | 10 | 0.001013s | 0.000997s | 0.000997s | byte equality observed |
| mp_join.test | 10 | 0.001026s | 0.001024s | 0.001004s | byte equality observed |
| mp_lambda.test | 10 | 0.001021s | 0.001028s | 0.001051s | byte equality observed |
| mp_less.test | 10 | 0.001012s | 0.001000s | 0.001020s | byte equality observed |
| mp_list_c.test | 10 | 0.001012s | 0.001020s | 0.001004s | byte equality observed |
| mp_list_v.test | 10 | 0.000466s | 0.000457s | 0.000997s | byte equality observed |
| mp_map_contains.test | 10 | 0.001034s | 0.000986s | 0.001032s | byte equality observed |
| mp_map_erase.test | 10 | 0.001010s | 0.000999s | 0.001022s | byte equality observed |
| mp_map_find.test | 10 | 0.001026s | 0.000998s | 0.001005s | byte equality observed |
| mp_map_find_2.test | 10 | 0.001027s | 0.001013s | 0.001004s | byte equality observed |
| mp_map_find_3.test | 10 | 0.001054s | 0.000991s | 0.001031s | byte equality observed |
| mp_map_find_4.test | 10 | 0.001000s | 0.000978s | 0.001021s | byte equality observed |
| mp_map_insert.test | 10 | 0.001025s | 0.000972s | 0.000986s | byte equality observed |
| mp_map_keys.test | 10 | 0.001021s | 0.000993s | 0.001006s | byte equality observed |
| mp_map_replace.test | 10 | 0.001013s | 0.001019s | 0.001038s | byte equality observed |
| mp_map_update.test | 10 | 0.001005s | 0.001048s | 0.001017s | byte equality observed |
| mp_map_update_q.test | 10 | 0.001020s | 0.000999s | 0.001009s | byte equality observed |
| mp_max.test | 10 | 0.001002s | 0.001038s | 0.001012s | byte equality observed |
| mp_max_element.test | 10 | 0.001026s | 0.001046s | 0.001034s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000465s | 0.000467s | 0.001002s | byte equality observed |
| mp_max_element_q.test | 10 | 0.001030s | 0.001020s | 0.001009s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000466s | 0.000461s | 0.001004s | byte equality observed |
| mp_min.test | 10 | 0.001022s | 0.001019s | 0.001017s | byte equality observed |
| mp_min_element.test | 10 | 0.001026s | 0.000997s | 0.001015s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000470s | 0.000464s | 0.000989s | byte equality observed |
| mp_min_element_q.test | 10 | 0.001044s | 0.001026s | 0.001022s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000469s | 0.000467s | 0.001001s | byte equality observed |
| mp_none_of.test | 10 | 0.001014s | 0.001006s | 0.001021s | byte equality observed |
| mp_none_of_q.test | 10 | 0.001017s | 0.000996s | 0.001046s | byte equality observed |
| mp_not_fn.test | 10 | 0.001016s | 0.001031s | 0.001018s | byte equality observed |
| mp_nth_element.test | 10 | 0.001032s | 0.001031s | 0.001063s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.001021s | 0.001006s | 0.001011s | byte equality observed |
| mp_or.test | 10 | 0.001028s | 0.001014s | 0.001037s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.001011s | 0.000999s | 0.001035s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.001016s | 0.000981s | 0.001032s | byte equality observed |
| mp_partial_sum.test | 10 | 0.001065s | 0.001010s | 0.001031s | byte equality observed |
| mp_partition.test | 10 | 0.001007s | 0.001020s | 0.001015s | byte equality observed |
| mp_partition_q.test | 10 | 0.001042s | 0.000994s | 0.001015s | byte equality observed |
| mp_plus.test | 10 | 0.001033s | 0.001004s | 0.001024s | byte equality observed |
| mp_pop_back.test | 10 | 0.001033s | 0.001055s | 0.000992s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000469s | 0.000469s | 0.001008s | byte equality observed |
| mp_pop_front.test | 10 | 0.001031s | 0.001016s | 0.001028s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000472s | 0.000466s | 0.000991s | byte equality observed |
| mp_power_set.test | 10 | 0.001008s | 0.001023s | 0.001026s | byte equality observed |
| mp_product.test | 10 | 0.000994s | 0.001003s | 0.001017s | byte equality observed |
| mp_push_back.test | 10 | 0.001031s | 0.001035s | 0.001001s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000467s | 0.000464s | 0.000993s | byte equality observed |
| mp_push_front.test | 10 | 0.001027s | 0.001043s | 0.001017s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000461s | 0.000460s | 0.000993s | byte equality observed |
| mp_quote.test | 10 | 0.000991s | 0.001007s | 0.001038s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000980s | 0.001003s | 0.001035s | byte equality observed |
| mp_remove.test | 10 | 0.000986s | 0.001002s | 0.001016s | byte equality observed |
| mp_remove_if.test | 10 | 0.001002s | 0.000988s | 0.001069s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.001016s | 0.001008s | 0.001058s | byte equality observed |
| mp_rename.test | 10 | 0.001027s | 0.001033s | 0.001021s | byte equality observed |
| mp_rename_2.test | 10 | 0.000472s | 0.000467s | 0.000986s | byte equality observed |
| mp_rename_v.test | 10 | 0.000473s | 0.000470s | 0.001010s | byte equality observed |
| mp_repeat.test | 10 | 0.001051s | 0.001042s | 0.001031s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000462s | 0.000469s | 0.001012s | byte equality observed |
| mp_repeat_3.test | 10 | 0.000998s | 0.001016s | 0.000994s | byte equality observed |
| mp_replace.test | 10 | 0.000997s | 0.001028s | 0.001025s | byte equality observed |
| mp_replace_at.test | 10 | 0.001005s | 0.001027s | 0.001019s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.001004s | 0.001024s | 0.001006s | byte equality observed |
| mp_replace_front.test | 10 | 0.001017s | 0.001040s | 0.001025s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000459s | 0.000453s | 0.001014s | byte equality observed |
| mp_replace_if.test | 10 | 0.001014s | 0.001022s | 0.001001s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.001005s | 0.001033s | 0.001040s | byte equality observed |
| mp_replace_second.test | 10 | 0.001023s | 0.001019s | 0.001019s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000469s | 0.000459s | 0.001022s | byte equality observed |
| mp_replace_third.test | 10 | 0.001030s | 0.001032s | 0.001010s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000463s | 0.000463s | 0.001006s | byte equality observed |
| mp_reverse.test | 10 | 0.001044s | 0.000997s | 0.001034s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.001046s | 0.001016s | 0.000998s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.001012s | 0.000985s | 0.001032s | byte equality observed |
| mp_rotate_left.test | 10 | 0.000992s | 0.001003s | 0.001014s | byte equality observed |
| mp_rotate_right.test | 10 | 0.001000s | 0.001038s | 0.001009s | byte equality observed |
| mp_same.test | 10 | 0.001001s | 0.001023s | 0.001061s | byte equality observed |
| mp_second.test | 10 | 0.001034s | 0.001024s | 0.001013s | byte equality observed |
| mp_second_2.test | 10 | 0.000474s | 0.000459s | 0.001021s | byte equality observed |
| mp_set_contains.test | 10 | 0.001040s | 0.001018s | 0.001011s | byte equality observed |
| mp_set_difference.test | 10 | 0.001003s | 0.001030s | 0.000995s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000995s | 0.001005s | 0.001000s | byte equality observed |
| mp_set_intersection.test | 10 | 0.000995s | 0.001014s | 0.001014s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000995s | 0.001017s | 0.001034s | byte equality observed |
| mp_set_push_back.test | 10 | 0.001036s | 0.001025s | 0.001027s | byte equality observed |
| mp_set_push_front.test | 10 | 0.001048s | 0.001054s | 0.001017s | byte equality observed |
| mp_set_union.test | 10 | 0.001025s | 0.001004s | 0.001034s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.001035s | 0.001020s | 0.001026s | byte equality observed |
| mp_similar.test | 10 | 0.001031s | 0.001029s | 0.001053s | byte equality observed |
| mp_size.test | 10 | 0.001025s | 0.001057s | 0.001019s | byte equality observed |
| mp_size_2.test | 10 | 0.000469s | 0.000465s | 0.000993s | byte equality observed |
| mp_slice.test | 10 | 0.001057s | 0.001043s | 0.001023s | byte equality observed |
| mp_slice_2.test | 10 | 0.000464s | 0.000466s | 0.000970s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.001048s | 0.001045s | 0.001012s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.001055s | 0.001023s | 0.001004s | byte equality observed |
| mp_sort.test | 10 | 0.001009s | 0.001019s | 0.001024s | byte equality observed |
| mp_sort_q.test | 10 | 0.001013s | 0.001011s | 0.001039s | byte equality observed |
| mp_split.test | 10 | 0.001040s | 0.001013s | 0.001016s | byte equality observed |
| mp_starts_with.test | 10 | 0.001034s | 0.000989s | 0.000998s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.001049s | 0.000975s | 0.001021s | byte equality observed |
| mp_take.test | 10 | 0.001043s | 0.001005s | 0.001032s | byte equality observed |
| mp_take_2.test | 10 | 0.000475s | 0.000458s | 0.001025s | byte equality observed |
| mp_third.test | 10 | 0.001029s | 0.001022s | 0.001028s | byte equality observed |
| mp_third_2.test | 10 | 0.000471s | 0.000455s | 0.000999s | byte equality observed |
| mp_transform.test | 10 | 0.001024s | 0.001013s | 0.001012s | byte equality observed |
| mp_transform_2.test | 10 | 0.001004s | 0.000998s | 0.001017s | byte equality observed |
| mp_transform_front.test | 10 | 0.001024s | 0.001019s | 0.001000s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000473s | 0.000459s | 0.001004s | byte equality observed |
| mp_transform_if.test | 10 | 0.001008s | 0.000997s | 0.001017s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.000996s | 0.001017s | 0.001029s | byte equality observed |
| mp_transform_q.test | 10 | 0.001025s | 0.001021s | 0.001059s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.001026s | 0.001015s | 0.001047s | byte equality observed |
| mp_transform_second.test | 10 | 0.001019s | 0.001024s | 0.001051s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000465s | 0.000456s | 0.001006s | byte equality observed |
| mp_transform_sf.test | 10 | 0.001024s | 0.000992s | 0.001004s | byte equality observed |
| mp_transform_third.test | 10 | 0.001018s | 0.000992s | 0.001045s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000463s | 0.000454s | 0.001025s | byte equality observed |
| mp_unique.test | 10 | 0.001022s | 0.001007s | 0.001012s | byte equality observed |
| mp_unique_if.test | 10 | 0.001033s | 0.001001s | 0.001042s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.001034s | 0.000990s | 0.001010s | byte equality observed |
| mp_valid.test | 10 | 0.001023s | 0.000987s | 0.001016s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.001029s | 0.001016s | 0.001005s | byte equality observed |
| mp_value.test | 10 | 0.000465s | 0.000466s | 0.000990s | byte equality observed |
| mp_with_index.test | 10 | 0.001383s | 0.001339s | 0.001280s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000465s | 0.000465s | 0.001004s | byte equality observed |
| mpl.test | 10 | 0.001042s | 0.001002s | 0.001006s | byte equality observed |
| mpl_list.test | 10 | 0.001020s | 0.001074s | 0.001019s | byte equality observed |
| mpl_tuple.test | 10 | 0.001008s | 0.001020s | 0.000994s | byte equality observed |
| mpl_version.test | 10 | 0.000993s | 0.001000s | 0.001028s | byte equality observed |
| set_version.test | 10 | 0.001004s | 0.001015s | 0.001007s | byte equality observed |
| tuple_apply.test | 10 | 0.001033s | 0.001037s | 0.001002s | byte equality observed |
| tuple_for_each.test | 10 | 0.001032s | 0.001012s | 0.001006s | byte equality observed |
| tuple_transform.test | 10 | 0.001000s | 0.001015s | 0.001010s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000995s | 0.001017s | 0.001033s | byte equality observed |
| tuple_version.test | 10 | 0.000990s | 0.001006s | 0.001016s | byte equality observed |
| utility_version.test | 10 | 0.001022s | 0.000990s | 0.001057s | byte equality observed |
| version.test | 10 | 0.001015s | 0.001005s | 0.001020s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44922642903).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
