# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.043854 | 0.090322 | 0.144116 | — | — | — |
| complex_h.test | COMPILE | 0.167485 | 0.393959 | 0.553131 | — | — | — |
| mp_size.test | RUN | 0.201929 | 1.223359 | 0.731238 | 0.001450 | 0.001516 | 0.001547 |
| mp_size_2.test | RUN | 0.018163 | 0.043395 | 0.061369 | 0.000639 | 0.000725 | 0.001558 |
| mp_empty.test | RUN | 0.188928 | 0.752304 | 0.687598 | 0.001351 | 0.001578 | 0.001604 |
| mp_empty_2.test | RUN | 0.018036 | 0.044009 | 0.063260 | 0.000530 | 0.000607 | 0.001322 |
| mp_assign.test | RUN | 0.225317 | 1.594874 | 0.921329 | 0.001489 | 0.001732 | 0.001612 |
| mp_assign_2.test | RUN | 0.018426 | 0.044683 | 0.063547 | 0.000654 | 0.000697 | 0.001548 |
| mp_clear.test | RUN | 0.187461 | 0.696032 | 0.706155 | 0.001424 | 0.001650 | 0.001613 |
| mp_clear_2.test | RUN | 0.018079 | 0.045048 | 0.058814 | 0.000632 | 0.000644 | 0.001496 |
| mp_front.test | RUN | 0.200264 | 1.086942 | 0.772080 | 0.001504 | 0.001648 | 0.001487 |
| mp_front_2.test | RUN | 0.016019 | 0.041669 | 0.062182 | 0.000592 | 0.000647 | 0.001613 |
| mp_pop_front.test | RUN | 0.199245 | 1.146937 | 0.786171 | 0.001667 | 0.001558 | 0.001608 |
| mp_pop_front_2.test | RUN | 0.018198 | 0.042668 | 0.061556 | 0.000676 | 0.000700 | 0.001597 |
| mp_second.test | RUN | 0.195743 | 0.743981 | 0.727772 | 0.001378 | 0.001400 | 0.001631 |
| mp_second_2.test | RUN | 0.018198 | 0.043463 | 0.063248 | 0.000581 | 0.000707 | 0.001579 |
| mp_third.test | RUN | 0.190567 | 0.680013 | 0.693819 | 0.001567 | 0.001605 | 0.001508 |
| mp_third_2.test | RUN | 0.017959 | 0.044354 | 0.063114 | 0.000676 | 0.000675 | 0.001611 |
| mp_push_front.test | RUN | 0.265478 | 2.437503 | 1.217679 | 0.001546 | 0.001524 | 0.001677 |
| mp_push_front_2.test | RUN | 0.018604 | 0.042501 | 0.060388 | 0.000653 | 0.000700 | 0.001564 |
| mp_push_back.test | RUN | 0.261323 | 2.449609 | 1.259908 | 0.001569 | 0.001510 | 0.001688 |
| mp_push_back_2.test | RUN | 0.014785 | 0.043940 | 0.061817 | 0.000727 | 0.000634 | 0.001614 |
| mp_rename.test | RUN | 0.252527 | 2.234213 | 1.099641 | 0.001556 | 0.001512 | 0.001383 |
| mp_rename_2.test | RUN | 0.015472 | 0.044608 | 0.062721 | 0.000588 | 0.000710 | 0.001634 |
| mp_append.test | RUN | 0.251734 | 2.557307 | 1.164467 | 0.001587 | 0.001640 | 0.001633 |
| mp_append_2.test | RUN | 0.576547 | 5.699361 | 1.540672 | 0.001532 | 0.001719 | 0.001394 |
| mp_append_3.test | RUN | 0.017486 | 0.042338 | 0.060887 | 0.000674 | 0.000581 | 0.001608 |
| mp_append_sf.test | RUN | 0.188694 | 0.621621 | 0.655641 | 0.001522 | 0.001580 | 0.001707 |
| mp_replace_front.test | RUN | 0.233101 | 1.801151 | 0.964737 | 0.001658 | 0.001609 | 0.001388 |
| mp_replace_front_2.test | RUN | 0.018029 | 0.044545 | 0.063235 | 0.000622 | 0.000582 | 0.001596 |
| mp_replace_second.test | RUN | 0.227604 | 1.171546 | 0.904900 | 0.001502 | 0.001622 | 0.001602 |
| mp_replace_second_2.test | RUN | 0.018185 | 0.043795 | 0.064782 | 0.000527 | 0.000702 | 0.001565 |
| mp_replace_third.test | RUN | 0.211355 | 0.961738 | 0.815247 | 0.001549 | 0.001500 | 0.001644 |
| mp_replace_third_2.test | RUN | 0.018270 | 0.043357 | 0.061967 | 0.000702 | 0.000512 | 0.001631 |
| mp_apply_q.test | RUN | 0.238403 | 2.214739 | 1.072761 | 0.001554 | 0.001597 | 0.001518 |
| mp_apply_q_sf.test | RUN | 0.192009 | 0.642609 | 0.681621 | 0.001516 | 0.001508 | 0.001576 |
| mp_is_list.test | RUN | 0.194723 | 0.767169 | 0.690179 | 0.001247 | 0.001680 | 0.001674 |
| mp_list_c.test | RUN | 0.204758 | 0.929017 | 0.766289 | 0.001438 | 0.001574 | 0.001382 |
| mp_transform_front.test | RUN | 0.230995 | 1.826392 | 0.949715 | 0.001508 | 0.001627 | 0.001610 |
| mp_transform_front_2.test | RUN | 0.018256 | 0.043906 | 0.063304 | 0.000627 | 0.000694 | 0.001600 |
| mp_transform_second.test | RUN | 0.214481 | 1.572571 | 0.886031 | 0.001136 | 0.001522 | 0.001394 |
| mp_transform_second_2.test | RUN | 0.015682 | 0.044017 | 0.062488 | 0.000607 | 0.000709 | 0.001286 |
| mp_transform_third.test | RUN | 0.203685 | 1.173948 | 0.755351 | 0.001407 | 0.001622 | 0.001631 |
| mp_transform_third_2.test | RUN | 0.017440 | 0.044538 | 0.061257 | 0.000631 | 0.000625 | 0.001600 |
| mp_list_v.test | RUN | 0.016769 | 0.044147 | 0.063297 | 0.000615 | 0.000701 | 0.001543 |
| mp_rename_v.test | RUN | 0.017722 | 0.044695 | 0.062016 | 0.000482 | 0.000692 | 0.001567 |
| mp_is_value_list.test | RUN | 0.177803 | 0.485589 | 0.670997 | 0.001614 | 0.001603 | 0.001618 |
| mp_transform.test | RUN | 0.455059 | 3.796255 | 1.980259 | 0.001900 | 0.001733 | 0.001628 |
| mp_transform_2.test | RUN | 0.180923 | 0.430721 | 0.604272 | 0.001490 | 0.001728 | 0.001433 |
| mp_transform_q.test | RUN | 0.448510 | 3.602038 | 1.895531 | 0.001522 | 0.001470 | 0.001659 |
| mp_transform_q_2.test | RUN | 0.482926 | 1.164542 | 2.464192 | 0.001634 | 0.001609 | 0.001446 |
| mp_transform_sf.test | RUN | 0.201790 | 0.668933 | 0.724623 | 0.001445 | 0.001400 | 0.001619 |
| mp_transform_if.test | RUN | 0.245033 | 1.826153 | 1.048779 | 0.001620 | 0.001659 | 0.001599 |
| mp_transform_if_q.test | RUN | 0.253939 | 1.837884 | 1.073368 | 0.001530 | 0.001436 | 0.001490 |
| mp_filter.test | RUN | 0.220948 | 1.095385 | 0.814569 | 0.001589 | 0.001698 | 0.001594 |
| mp_fill.test | RUN | 0.208335 | 0.807469 | 0.755146 | 0.001567 | 0.001687 | 0.001686 |
| mp_fill_2.test | RUN | 0.032928 | 0.070157 | 0.109618 | 0.000593 | 0.000694 | 0.001611 |
| mp_count.test | RUN | 0.394179 | 1.969837 | 1.205521 | 0.001784 | 0.001436 | 0.001406 |
| mp_count_if.test | RUN | 0.404087 | 2.029266 | 1.342468 | 0.001461 | 0.001564 | 0.001536 |
| mp_count_if_q.test | RUN | 0.215070 | 1.310367 | 0.784738 | 0.001463 | 0.001546 | 0.001640 |
| mp_contains.test | RUN | 0.207272 | 0.789790 | 0.741629 | 0.001558 | 0.001641 | 0.001636 |
| mp_starts_with.test | RUN | 0.205522 | 0.785371 | 0.723186 | 0.001408 | 0.001463 | 0.001560 |
| mp_starts_with_sf.test | RUN | 0.197456 | 0.658617 | 0.679375 | 0.001265 | 0.001425 | 0.001428 |
| mp_repeat.test | RUN | 0.304837 | 3.253001 | 1.340561 | 0.001625 | 0.001454 | 0.001619 |
| mp_repeat_2.test | RUN | 0.031823 | 0.069924 | 0.109198 | 0.000604 | 0.000727 | 0.001644 |
| mp_repeat_3.test | RUN | 0.253582 | 0.430073 | 0.679084 | 0.001500 | 0.001633 | 0.001639 |
| mp_product.test | RUN | 0.243015 | 1.984747 | 0.993448 | 0.001438 | 0.001701 | 0.001723 |
| mp_drop.test | RUN | 0.259485 | 2.442130 | 1.103370 | 0.001323 | 0.001590 | 0.001697 |
| mp_drop_2.test | RUN | 0.031603 | 0.069923 | 0.112326 | 0.000508 | 0.000737 | 0.001553 |
| mp_iota.test | RUN | 0.245161 | 2.068113 | 0.990768 | 0.001634 | 0.001582 | 0.001665 |
| mp_iota_2.test | RUN | 0.266067 | 2.502831 | 1.116696 | 0.001375 | 0.001700 | 0.001616 |
| mp_at.test | RUN | 0.218114 | 1.078149 | 0.816321 | 0.001415 | 0.001625 | 0.001601 |
| mp_at_2.test | RUN | 0.032444 | 0.068322 | 0.111254 | 0.000630 | 0.000687 | 0.001576 |
| mp_at_sf.test | RUN | 0.201545 | 0.674580 | 0.703451 | 0.001412 | 0.001663 | 0.001721 |
| mp_take.test | RUN | 0.344893 | 3.190091 | 1.361200 | 0.001544 | 0.001643 | 0.001679 |
| mp_take_2.test | RUN | 0.032498 | 0.070140 | 0.103423 | 0.000612 | 0.000566 | 0.001609 |
| mp_slice.test | RUN | 0.404246 | 3.236264 | 1.699529 | 0.001555 | 0.001678 | 0.001366 |
| mp_slice_2.test | RUN | 0.032631 | 0.071857 | 0.108951 | 0.000733 | 0.000700 | 0.001598 |
| mp_replace.test | RUN | 0.252143 | 1.662478 | 1.109217 | 0.001602 | 0.001698 | 0.001638 |
| mp_replace_if.test | RUN | 0.240186 | 1.467336 | 1.020145 | 0.001762 | 0.001689 | 0.001540 |
| mp_replace_if_q.test | RUN | 0.242553 | 1.460544 | 1.022849 | 0.001399 | 0.001660 | 0.001653 |
| mp_copy_if.test | RUN | 0.247693 | 2.045612 | 0.977407 | 0.001544 | 0.001636 | 0.001620 |
| mp_copy_if_q.test | RUN | 0.246776 | 2.071774 | 0.959960 | 0.001630 | 0.001678 | 0.001496 |
| mp_remove.test | RUN | 0.241271 | 1.370592 | 0.977034 | 0.001609 | 0.001688 | 0.001331 |
| mp_remove_if.test | RUN | 0.255088 | 2.175886 | 1.038344 | 0.001492 | 0.001622 | 0.001753 |
| mp_remove_if_q.test | RUN | 0.251798 | 2.149914 | 1.042371 | 0.001497 | 0.001706 | 0.001659 |
| mp_partition.test | RUN | 0.252146 | 2.039623 | 1.085806 | 0.001640 | 0.001523 | 0.001690 |
| mp_partition_q.test | RUN | 0.257225 | 2.029945 | 1.099517 | 0.001570 | 0.001614 | 0.001368 |
| mp_sort.test | RUN | 0.236422 | 1.469874 | 0.980607 | 0.001492 | 0.001598 | 0.001630 |
| mp_sort_q.test | RUN | 0.237787 | 1.457460 | 0.976355 | 0.001632 | 0.001651 | 0.001606 |
| mp_find.test | RUN | 0.231517 | 1.568419 | 0.838189 | 0.001554 | 0.001481 | 0.001310 |
| mp_find_if.test | RUN | 0.224534 | 1.440875 | 0.798681 | 0.001571 | 0.001575 | 0.001454 |
| mp_find_if_q.test | RUN | 0.248639 | 1.619839 | 0.995076 | 0.001522 | 0.001650 | 0.001601 |
| mp_reverse.test | RUN | 0.505122 | 4.213319 | 1.869159 | 0.001573 | 0.001709 | 0.001620 |
| mp_fold.test | RUN | 0.857115 | 3.274364 | 4.785794 | 0.001703 | 0.001639 | 0.001660 |
| mp_fold_q.test | RUN | 0.231620 | 1.436139 | 0.925215 | 0.001396 | 0.001598 | 0.001572 |
| mp_fold_q_sf.test | RUN | 0.205570 | 0.685903 | 0.725404 | 0.001445 | 0.001604 | 0.001582 |
| mp_reverse_fold.test | RUN | 0.408650 | 3.157593 | 1.342148 | 0.001578 | 0.001636 | 0.001615 |
| mp_reverse_fold_q.test | RUN | 0.237491 | 1.752244 | 1.011831 | 0.001317 | 0.001688 | 0.001646 |
| mp_unique.test | RUN | 0.234889 | 1.582457 | 0.956595 | 0.001429 | 0.001666 | 0.001689 |
| mp_unique_if.test | RUN | 0.425282 | 3.286554 | 1.509676 | 0.001377 | 0.001810 | 0.001517 |
| mp_unique_if_q.test | RUN | 0.362501 | 3.288965 | 1.273608 | 0.001490 | 0.001659 | 0.001621 |
| mp_all_of.test | RUN | 0.541321 | 1.825567 | 1.696525 | 0.001638 | 0.001647 | 0.001653 |
| mp_all_of_q.test | RUN | 0.204630 | 0.766486 | 0.722209 | 0.001450 | 0.001664 | 0.001562 |
| mp_any_of.test | RUN | 0.567398 | 1.864044 | 1.672411 | 0.001365 | 0.001740 | 0.001517 |
| mp_any_of_q.test | RUN | 0.204193 | 0.760876 | 0.748134 | 0.001694 | 0.001666 | 0.001679 |
| mp_none_of.test | RUN | 0.539289 | 1.876092 | 1.650151 | 0.001500 | 0.001623 | 0.001641 |
| mp_none_of_q.test | RUN | 0.200645 | 0.755750 | 0.750850 | 0.001482 | 0.001629 | 0.001646 |
| mp_replace_at.test | RUN | 0.240298 | 1.605912 | 1.108194 | 0.001628 | 0.001644 | 0.001647 |
| mp_replace_at_c.test | RUN | 0.247115 | 1.611959 | 1.100209 | 0.001401 | 0.001493 | 0.001644 |
| mp_for_each.test | RUN | 0.236060 | 1.172122 | 1.198202 | 0.001415 | 0.001585 | 0.001603 |
| mp_insert.test | RUN | 0.373022 | 3.206154 | 1.546669 | 0.001526 | 0.001594 | 0.001680 |
| mp_insert_2.test | RUN | 0.032219 | 0.067486 | 0.111240 | 0.000607 | 0.000590 | 0.001562 |
| mp_erase.test | RUN | 0.419774 | 3.404249 | 1.807324 | 0.001529 | 0.001660 | 0.001533 |
| mp_erase_2.test | RUN | 0.031078 | 0.070925 | 0.109924 | 0.000589 | 0.000687 | 0.001557 |
| mp_with_index.test | RUN | 0.570780 | 7.025728 | 4.027044 | 0.001982 | 0.002028 | 0.001974 |
| mp_with_index_cx.test | RUN | 0.003387 | 0.019693 | 0.026545 | 0.000681 | 0.000728 | 0.001580 |
| mp_from_sequence.test | RUN | 0.247528 | 1.826872 | 1.038983 | 0.001456 | 0.001525 | 0.001368 |
| mp_from_sequence_2.test | RUN | 0.258893 | 2.119857 | 1.129832 | 0.001381 | 0.001474 | 0.001571 |
| mp_from_sequence_3.test | RUN | 0.212015 | 0.947264 | 0.826644 | 0.001739 | 0.001686 | 0.001643 |
| mp_min_element.test | RUN | 0.207584 | 0.853013 | 0.772274 | 0.001524 | 0.001723 | 0.001546 |
| mp_min_element_2.test | RUN | 0.032944 | 0.070746 | 0.109221 | 0.000612 | 0.000741 | 0.001553 |
| mp_min_element_q.test | RUN | 0.208984 | 0.862373 | 0.760884 | 0.001493 | 0.001566 | 0.001639 |
| mp_min_element_q_2.test | RUN | 0.031510 | 0.069974 | 0.105592 | 0.000600 | 0.000602 | 0.001549 |
| mp_max_element.test | RUN | 0.210702 | 0.863646 | 0.770087 | 0.001563 | 0.001682 | 0.001680 |
| mp_max_element_2.test | RUN | 0.030355 | 0.070566 | 0.106401 | 0.000579 | 0.000603 | 0.001657 |
| mp_max_element_q.test | RUN | 0.214419 | 0.870564 | 0.767379 | 0.001552 | 0.001695 | 0.001669 |
| mp_max_element_q_2.test | RUN | 0.032638 | 0.069719 | 0.105222 | 0.000528 | 0.000687 | 0.001457 |
| mp_nth_element.test | RUN | 0.231814 | 1.198806 | 0.900146 | 0.001628 | 0.001728 | 0.001592 |
| mp_nth_element_q.test | RUN | 0.234068 | 1.205618 | 0.954846 | 0.001424 | 0.001500 | 0.001469 |
| mp_back.test | RUN | 0.223520 | 1.019469 | 0.883267 | 0.001282 | 0.001507 | 0.001646 |
| mp_back_2.test | RUN | 0.032246 | 0.070030 | 0.113614 | 0.000693 | 0.000678 | 0.001632 |
| mp_pop_back.test | RUN | 0.637155 | 6.521474 | 1.783094 | 0.001427 | 0.001620 | 0.001277 |
| mp_pop_back_2.test | RUN | 0.031879 | 0.069968 | 0.110383 | 0.000698 | 0.000569 | 0.001537 |
| mp_flatten.test | RUN | 0.266555 | 2.325352 | 1.211624 | 0.001452 | 0.001686 | 0.001558 |
| mp_rotate_left.test | RUN | 0.263264 | 2.509377 | 1.198503 | 0.001558 | 0.001586 | 0.001617 |
| mp_rotate_right.test | RUN | 0.267392 | 2.501077 | 1.235331 | 0.001587 | 0.001496 | 0.001067 |
| mp_power_set.test | RUN | 0.263374 | 2.404284 | 1.203878 | 0.001655 | 0.001709 | 0.001574 |
| mp_partial_sum.test | RUN | 0.347483 | 3.206391 | 1.378285 | 0.001556 | 0.001640 | 0.001536 |
| mp_iterate.test | RUN | 0.234857 | 0.962720 | 0.958586 | 0.001503 | 0.001716 | 0.001482 |
| mp_pairwise_fold.test | RUN | 0.271587 | 2.209873 | 1.233880 | 0.001378 | 0.001466 | 0.001487 |
| mp_pairwise_fold_q.test | RUN | 0.198423 | 0.659663 | 0.696236 | 0.001566 | 0.001630 | 0.001590 |
| mp_sliding_fold.test | RUN | 0.508621 | 4.181101 | 2.283724 | 0.001602 | 0.001562 | 0.001695 |
| mp_sliding_fold_q.test | RUN | 0.512713 | 4.198304 | 2.287643 | 0.001471 | 0.001560 | 0.001727 |
| mp_intersperse.test | RUN | 0.248186 | 1.566905 | 1.058004 | 0.001435 | 0.001584 | 0.001644 |
| mp_split.test | RUN | 0.358275 | 3.035675 | 1.472170 | 0.001470 | 0.001773 | 0.001636 |
| mp_join.test | RUN | 0.280762 | 2.558456 | 1.327871 | 0.001486 | 0.001638 | 0.001582 |
| integral.test | RUN | 0.211041 | 1.142131 | 0.815781 | 0.001532 | 0.001592 | 0.001622 |
| mp_value.test | RUN | 0.013876 | 0.035233 | 0.051226 | 0.000609 | 0.000539 | 0.001531 |
| mp_identity.test | RUN | 0.192017 | 1.025250 | 0.777240 | 0.001471 | 0.001140 | 0.001621 |
| mp_inherit.test | RUN | 0.194757 | 0.741088 | 0.701834 | 0.001527 | 0.001565 | 0.001467 |
| mp_if.test | RUN | 0.194111 | 0.843296 | 0.717559 | 0.001514 | 0.001591 | 0.001584 |
| mp_if_sf.test | RUN | 0.187008 | 0.630995 | 0.652343 | 0.001607 | 0.001534 | 0.001662 |
| mp_eval_if.test | RUN | 0.198093 | 0.900284 | 0.739799 | 0.001518 | 0.001468 | 0.001644 |
| mp_eval_if_sf.test | RUN | 0.189134 | 0.646365 | 0.652594 | 0.001578 | 0.001480 | 0.001607 |
| mp_valid.test | RUN | 0.191024 | 0.648026 | 0.673164 | 0.001490 | 0.001540 | 0.001670 |
| mp_defer.test | RUN | 0.212795 | 1.091969 | 0.809603 | 0.001524 | 0.001655 | 0.001584 |
| mp_quote.test | RUN | 0.208460 | 1.096707 | 0.814114 | 0.001474 | 0.001559 | 0.001547 |
| mp_invoke_q.test | RUN | 0.224047 | 1.444617 | 0.923713 | 0.001405 | 0.001614 | 0.001666 |
| mp_invoke_q_sf.test | RUN | 0.188181 | 0.643856 | 0.662951 | 0.001403 | 0.001512 | 0.001742 |
| mp_quote_trait.test | RUN | 0.206703 | 1.207276 | 0.809166 | 0.001568 | 0.001620 | 0.001672 |
| mp_cond.test | RUN | 0.200814 | 0.736637 | 0.695187 | 0.001662 | 0.001524 | 0.001575 |
| mp_cond_sf.test | RUN | 0.186730 | 0.643189 | 0.659670 | 0.001516 | 0.001574 | 0.001590 |
| mp_not_fn.test | RUN | 0.186838 | 0.643006 | 0.658246 | 0.001496 | 0.001523 | 0.001658 |
| mp_eval_if_not.test | RUN | 0.201979 | 0.911429 | 0.734753 | 0.001567 | 0.001554 | 0.001591 |
| mp_eval_or.test | RUN | 0.186354 | 0.482856 | 0.678915 | 0.001489 | 0.001588 | 0.001610 |
| mp_compose.test | RUN | 0.219588 | 1.482598 | 0.872215 | 0.001490 | 0.001389 | 0.001571 |
| mp_valid_and_true.test | RUN | 0.191659 | 0.767110 | 0.695584 | 0.001544 | 0.001622 | 0.001408 |
| mp_compose_sf.test | COMPILE | 0.046679 | 0.091031 | 0.153018 | — | — | — |
| integer_sequence.test | RUN | 0.235649 | 1.453205 | 0.983589 | 0.001511 | 0.001570 | 0.001456 |
| tuple_for_each.test | RUN | 0.192856 | 0.548399 | 0.721239 | 0.001560 | 0.001397 | 0.001690 |
| tuple_for_each_cx.test | COMPILE | 0.036646 | 0.077907 | 0.122378 | — | — | — |
| tuple_apply.test | RUN | 0.196519 | 0.557568 | 0.745393 | 0.001440 | 0.001556 | 0.001430 |
| tuple_apply_cx.test | COMPILE | 0.053046 | 0.110351 | 0.170633 | — | — | — |
| construct_from_tuple.test | RUN | 0.200006 | 0.592117 | 0.724933 | 0.001656 | 0.001495 | 0.001651 |
| construct_from_tuple_cx.test | COMPILE | 0.054313 | 0.111696 | 0.163749 | — | — | — |
| tuple_transform.test | RUN | 0.314973 | 1.189116 | 1.403605 | 0.001582 | 0.001524 | 0.001463 |
| tuple_transform_2.test | RUN | 0.272882 | 0.872840 | 1.303637 | 0.001690 | 0.001617 | 0.001498 |
| tuple_transform_cx.test | COMPILE | 0.047522 | 0.106222 | 0.166851 | — | — | — |
| mp_set_contains.test | RUN | 0.199154 | 0.774120 | 0.710106 | 0.001567 | 0.001457 | 0.001654 |
| mp_set_push_back.test | RUN | 0.266061 | 2.387948 | 1.208267 | 0.001610 | 0.001691 | 0.001701 |
| mp_set_push_front.test | RUN | 0.339184 | 2.867868 | 1.374504 | 0.001593 | 0.001674 | 0.001702 |
| mp_is_set.test | RUN | 0.204793 | 0.770348 | 0.722719 | 0.001564 | 0.001610 | 0.001588 |
| mp_set_union.test | RUN | 0.256563 | 2.027558 | 1.156956 | 0.001482 | 0.001679 | 0.001541 |
| mp_set_union_sf.test | RUN | 0.194572 | 0.630433 | 0.665002 | 0.001582 | 0.001602 | 0.001653 |
| mp_set_difference.test | RUN | 0.226905 | 1.595464 | 0.991501 | 0.001433 | 0.001528 | 0.001618 |
| mp_set_difference_sf.test | RUN | 0.190028 | 0.626411 | 0.678342 | 0.001324 | 0.001590 | 0.001602 |
| mp_set_intersection.test | RUN | 0.228234 | 1.563511 | 0.951082 | 0.001497 | 0.001496 | 0.001591 |
| mp_set_intersection_sf.test | RUN | 0.192938 | 0.629957 | 0.666039 | 0.001585 | 0.001425 | 0.001615 |
| mp_all.test | RUN | 0.196856 | 0.772863 | 0.721824 | 0.001549 | 0.001576 | 0.001611 |
| mp_all_2.test | RUN | 0.541600 | 1.683615 | 1.700452 | 0.001538 | 0.001541 | 0.001562 |
| mp_and.test | RUN | 0.193315 | 0.779713 | 0.701472 | 0.001523 | 0.001703 | 0.001620 |
| mp_any.test | RUN | 0.199012 | 0.778506 | 0.740236 | 0.001494 | 0.001669 | 0.001651 |
| mp_any_2.test | RUN | 0.567612 | 1.661116 | 1.685546 | 0.001506 | 0.001691 | 0.001542 |
| mp_or.test | RUN | 0.198833 | 0.788055 | 0.699122 | 0.001576 | 0.001736 | 0.001373 |
| mp_same.test | RUN | 0.379750 | 1.313854 | 1.131924 | 0.001352 | 0.001606 | 0.001606 |
| mp_plus.test | RUN | 0.208221 | 0.895692 | 0.820428 | 0.001454 | 0.001477 | 0.001379 |
| mp_less.test | RUN | 0.201171 | 0.770823 | 0.729913 | 0.001615 | 0.001501 | 0.001431 |
| mp_min.test | RUN | 0.196311 | 0.712531 | 0.690335 | 0.001452 | 0.001674 | 0.001490 |
| mp_max.test | RUN | 0.196404 | 0.782222 | 0.715472 | 0.001374 | 0.001427 | 0.001496 |
| mp_similar.test | RUN | 0.198418 | 0.760684 | 0.713702 | 0.001355 | 0.001492 | 0.001625 |
| mp_map_find.test | RUN | 0.230032 | 1.411757 | 0.942182 | 0.001610 | 0.001628 | 0.001626 |
| mp_map_find_2.test | RUN | 0.213539 | 0.551446 | 0.800790 | 0.001493 | 0.001481 | 0.001554 |
| mp_map_find_3.test | RUN | 0.217855 | 0.538477 | 0.803221 | 0.001473 | 0.001444 | 0.001535 |
| mp_map_find_4.test | RUN | 0.207017 | 0.509564 | 0.737398 | 0.001371 | 0.001488 | 0.001668 |
| mp_map_contains.test | RUN | 0.203841 | 0.789982 | 0.752316 | 0.001592 | 0.001670 | 0.001668 |
| mp_map_insert.test | RUN | 0.275650 | 2.687222 | 1.299687 | 0.001559 | 0.001733 | 0.001596 |
| mp_map_replace.test | RUN | 0.365801 | 2.975534 | 1.507322 | 0.001521 | 0.001644 | 0.001363 |
| mp_map_erase.test | RUN | 0.268178 | 2.214928 | 1.256240 | 0.001183 | 0.001700 | 0.001561 |
| mp_map_update.test | RUN | 0.236847 | 1.480147 | 0.990788 | 0.001641 | 0.001656 | 0.001421 |
| mp_map_update_q.test | RUN | 0.232990 | 1.477998 | 0.951959 | 0.001438 | 0.001574 | 0.001635 |
| mp_map_keys.test | RUN | 0.230908 | 1.302386 | 0.953549 | 0.001362 | 0.001568 | 0.001603 |
| mp_is_map.test | RUN | 0.209698 | 0.801639 | 0.762418 | 0.001586 | 0.001605 | 0.001652 |
| mp_bind.test | RUN | 0.259375 | 2.337239 | 1.138360 | 0.001585 | 0.001604 | 0.001669 |
| mp_bind_q.test | RUN | 0.229771 | 1.467431 | 0.910281 | 0.001633 | 0.001612 | 0.001588 |
| mp_bind_front.test | RUN | 0.225452 | 1.598216 | 0.891167 | 0.001515 | 0.001498 | 0.001502 |
| mp_bind_back.test | RUN | 0.222819 | 1.619562 | 0.890397 | 0.001468 | 0.001470 | 0.001554 |
| mp_lambda.test | RUN | 0.524712 | 4.670655 | 2.367037 | 0.001513 | 0.001091 | 0.001618 |
| mpl.test | RUN | 0.475769 | 1.249487 | 1.839625 | 0.001495 | 0.001592 | 0.001561 |
| mpl_list.test | RUN | 0.253123 | 0.965345 | 0.908073 | 0.001574 | 0.001542 | 0.001149 |
| mpl_tuple.test | RUN | 0.257933 | 0.950165 | 0.870301 | 0.001356 | 0.001546 | 0.001614 |
| version.test | RUN | 0.127900 | 0.351472 | 0.454488 | 0.001463 | 0.001567 | 0.001081 |
| mp11_version.test | RUN | 0.156801 | 0.392824 | 0.536985 | 0.001364 | 0.001596 | 0.001601 |
| list_version.test | RUN | 0.133235 | 0.355435 | 0.458639 | 0.001502 | 0.001608 | 0.001566 |
| algorithm_version.test | RUN | 0.145056 | 0.381044 | 0.495857 | 0.001495 | 0.001566 | 0.001406 |
| integral_version.test | RUN | 0.129916 | 0.341450 | 0.448981 | 0.001749 | 0.001416 | 0.001483 |
| utility_version.test | RUN | 0.130818 | 0.347562 | 0.456051 | 0.001548 | 0.001596 | 0.001488 |
| function_version.test | RUN | 0.132775 | 0.351877 | 0.462504 | 0.001501 | 0.001508 | 0.001420 |
| map_version.test | RUN | 0.144970 | 0.382563 | 0.499116 | 0.001479 | 0.001365 | 0.001457 |
| set_version.test | RUN | 0.135052 | 0.356096 | 0.468431 | 0.001660 | 0.001618 | 0.001343 |
| bind_version.test | RUN | 0.137346 | 0.372969 | 0.498083 | 0.001444 | 0.001497 | 0.001645 |
| integer_sequence_version.test | RUN | 0.129693 | 0.345156 | 0.339697 | 0.001463 | 0.001386 | 0.001605 |
| tuple_version.test | RUN | 0.111151 | 0.381800 | 0.458537 | 0.001069 | 0.001707 | 0.001128 |
| mpl_version.test | RUN | 0.093756 | 0.250287 | 0.412260 | 0.001180 | 0.001104 | 0.001071 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.004× | 1.002×, 1.007× | 0.992× |
| clang | 1.085× | 1.088×, 1.083× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44927958294).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000912s | 0.000901s | 0.000880s | byte equality observed |
| bind_version.test | 10 | 0.000914s | 0.000925s | 0.000883s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000919s | 0.000929s | 0.000905s | byte equality observed |
| function_version.test | 10 | 0.000910s | 0.000924s | 0.000903s | byte equality observed |
| integer_sequence.test | 10 | 0.000907s | 0.000928s | 0.000902s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000902s | 0.000909s | 0.000902s | byte equality observed |
| integral.test | 10 | 0.000906s | 0.000920s | 0.000884s | byte equality observed |
| integral_version.test | 10 | 0.000910s | 0.000911s | 0.000879s | byte equality observed |
| list_version.test | 10 | 0.000909s | 0.000907s | 0.000880s | byte equality observed |
| map_version.test | 10 | 0.000914s | 0.000912s | 0.000880s | byte equality observed |
| mp11_version.test | 10 | 0.000908s | 0.000914s | 0.000874s | byte equality observed |
| mp_all.test | 10 | 0.000901s | 0.000931s | 0.000887s | byte equality observed |
| mp_all_2.test | 10 | 0.000911s | 0.000916s | 0.000888s | byte equality observed |
| mp_all_of.test | 10 | 0.000907s | 0.000913s | 0.000898s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000912s | 0.000943s | 0.000911s | byte equality observed |
| mp_and.test | 10 | 0.000902s | 0.000913s | 0.000909s | byte equality observed |
| mp_any.test | 10 | 0.000902s | 0.000913s | 0.000945s | byte equality observed |
| mp_any_2.test | 10 | 0.000906s | 0.000917s | 0.000985s | byte equality observed |
| mp_any_of.test | 10 | 0.000905s | 0.000909s | 0.000976s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000900s | 0.000915s | 0.000966s | byte equality observed |
| mp_append.test | 10 | 0.000901s | 0.000915s | 0.000997s | byte equality observed |
| mp_append_2.test | 10 | 0.000918s | 0.000924s | 0.000975s | byte equality observed |
| mp_append_3.test | 10 | 0.000420s | 0.000422s | 0.000955s | byte equality observed |
| mp_append_sf.test | 10 | 0.000914s | 0.000930s | 0.000921s | byte equality observed |
| mp_apply_q.test | 10 | 0.000916s | 0.000908s | 0.000970s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.000909s | 0.000912s | 0.000940s | byte equality observed |
| mp_assign.test | 10 | 0.000930s | 0.000907s | 0.000974s | byte equality observed |
| mp_assign_2.test | 10 | 0.000433s | 0.000417s | 0.000924s | byte equality observed |
| mp_at.test | 10 | 0.000918s | 0.000915s | 0.000956s | byte equality observed |
| mp_at_2.test | 10 | 0.000424s | 0.000417s | 0.000984s | byte equality observed |
| mp_at_sf.test | 10 | 0.000963s | 0.000922s | 0.000980s | byte equality observed |
| mp_back.test | 10 | 0.000985s | 0.000931s | 0.000970s | byte equality observed |
| mp_back_2.test | 10 | 0.000430s | 0.000415s | 0.000958s | byte equality observed |
| mp_bind.test | 10 | 0.001010s | 0.000917s | 0.000949s | byte equality observed |
| mp_bind_back.test | 10 | 0.000966s | 0.000956s | 0.000960s | byte equality observed |
| mp_bind_front.test | 10 | 0.000976s | 0.000936s | 0.000990s | byte equality observed |
| mp_bind_q.test | 10 | 0.000996s | 0.000913s | 0.000979s | byte equality observed |
| mp_clear.test | 10 | 0.000989s | 0.000941s | 0.000966s | byte equality observed |
| mp_clear_2.test | 10 | 0.000434s | 0.000429s | 0.000923s | byte equality observed |
| mp_compose.test | 10 | 0.000971s | 0.000963s | 0.000976s | byte equality observed |
| mp_cond.test | 10 | 0.000993s | 0.000967s | 0.000992s | byte equality observed |
| mp_cond_sf.test | 10 | 0.001008s | 0.000965s | 0.000997s | byte equality observed |
| mp_contains.test | 10 | 0.000963s | 0.001002s | 0.000959s | byte equality observed |
| mp_copy_if.test | 10 | 0.000981s | 0.000965s | 0.000986s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.000992s | 0.000979s | 0.000966s | byte equality observed |
| mp_count.test | 10 | 0.000978s | 0.001003s | 0.000960s | byte equality observed |
| mp_count_if.test | 10 | 0.000966s | 0.001010s | 0.000965s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000966s | 0.000998s | 0.000972s | byte equality observed |
| mp_defer.test | 10 | 0.001005s | 0.000996s | 0.000963s | byte equality observed |
| mp_drop.test | 10 | 0.000966s | 0.000968s | 0.000949s | byte equality observed |
| mp_drop_2.test | 10 | 0.000423s | 0.000421s | 0.000981s | byte equality observed |
| mp_empty.test | 10 | 0.000963s | 0.000984s | 0.000936s | byte equality observed |
| mp_empty_2.test | 10 | 0.000432s | 0.000437s | 0.001039s | byte equality observed |
| mp_erase.test | 10 | 0.000992s | 0.000972s | 0.000914s | byte equality observed |
| mp_erase_2.test | 10 | 0.000427s | 0.000432s | 0.000990s | byte equality observed |
| mp_eval_if.test | 10 | 0.001018s | 0.000953s | 0.000946s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.000965s | 0.000976s | 0.000944s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.000971s | 0.000960s | 0.000952s | byte equality observed |
| mp_eval_or.test | 10 | 0.000960s | 0.000966s | 0.000928s | byte equality observed |
| mp_fill.test | 10 | 0.000981s | 0.000973s | 0.000940s | byte equality observed |
| mp_fill_2.test | 10 | 0.000429s | 0.000434s | 0.000925s | byte equality observed |
| mp_filter.test | 10 | 0.000955s | 0.001050s | 0.000950s | byte equality observed |
| mp_find.test | 10 | 0.000989s | 0.000958s | 0.000963s | byte equality observed |
| mp_find_if.test | 10 | 0.000983s | 0.000977s | 0.000997s | byte equality observed |
| mp_find_if_q.test | 10 | 0.000976s | 0.001005s | 0.000962s | byte equality observed |
| mp_flatten.test | 10 | 0.000974s | 0.001005s | 0.000958s | byte equality observed |
| mp_fold.test | 10 | 0.001004s | 0.001006s | 0.000952s | byte equality observed |
| mp_fold_q.test | 10 | 0.000987s | 0.000959s | 0.000979s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.000987s | 0.001007s | 0.000966s | byte equality observed |
| mp_for_each.test | 10 | 0.000970s | 0.000966s | 0.000985s | byte equality observed |
| mp_from_sequence.test | 10 | 0.000969s | 0.000973s | 0.000962s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.000970s | 0.000994s | 0.000932s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.000974s | 0.000996s | 0.000939s | byte equality observed |
| mp_front.test | 10 | 0.000987s | 0.000970s | 0.000994s | byte equality observed |
| mp_front_2.test | 10 | 0.000428s | 0.000436s | 0.000977s | byte equality observed |
| mp_identity.test | 10 | 0.000945s | 0.000985s | 0.000960s | byte equality observed |
| mp_if.test | 10 | 0.000952s | 0.000967s | 0.000970s | byte equality observed |
| mp_if_sf.test | 10 | 0.000961s | 0.000985s | 0.000952s | byte equality observed |
| mp_inherit.test | 10 | 0.000948s | 0.000984s | 0.000954s | byte equality observed |
| mp_insert.test | 10 | 0.000992s | 0.000966s | 0.000948s | byte equality observed |
| mp_insert_2.test | 10 | 0.000425s | 0.000427s | 0.000984s | byte equality observed |
| mp_intersperse.test | 10 | 0.000955s | 0.000937s | 0.000966s | byte equality observed |
| mp_invoke_q.test | 10 | 0.000980s | 0.000957s | 0.000962s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.000971s | 0.000969s | 0.000950s | byte equality observed |
| mp_iota.test | 10 | 0.000979s | 0.000970s | 0.000962s | byte equality observed |
| mp_iota_2.test | 10 | 0.000960s | 0.000984s | 0.000928s | byte equality observed |
| mp_is_list.test | 10 | 0.000947s | 0.000997s | 0.000961s | byte equality observed |
| mp_is_map.test | 10 | 0.000978s | 0.000987s | 0.000927s | byte equality observed |
| mp_is_set.test | 10 | 0.000948s | 0.000970s | 0.000987s | byte equality observed |
| mp_is_value_list.test | 10 | 0.000970s | 0.000967s | 0.000978s | byte equality observed |
| mp_iterate.test | 10 | 0.000953s | 0.000997s | 0.000971s | byte equality observed |
| mp_join.test | 10 | 0.000971s | 0.000956s | 0.000945s | byte equality observed |
| mp_lambda.test | 10 | 0.001001s | 0.001015s | 0.000971s | byte equality observed |
| mp_less.test | 10 | 0.000962s | 0.000965s | 0.000984s | byte equality observed |
| mp_list_c.test | 10 | 0.000974s | 0.000973s | 0.001000s | byte equality observed |
| mp_list_v.test | 10 | 0.000423s | 0.000426s | 0.000915s | byte equality observed |
| mp_map_contains.test | 10 | 0.000974s | 0.000993s | 0.000954s | byte equality observed |
| mp_map_erase.test | 10 | 0.001005s | 0.000968s | 0.000934s | byte equality observed |
| mp_map_find.test | 10 | 0.000971s | 0.000982s | 0.000927s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000932s | 0.000996s | 0.000937s | byte equality observed |
| mp_map_find_3.test | 10 | 0.000988s | 0.000963s | 0.000941s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000963s | 0.001011s | 0.000929s | byte equality observed |
| mp_map_insert.test | 10 | 0.000971s | 0.001004s | 0.000978s | byte equality observed |
| mp_map_keys.test | 10 | 0.000954s | 0.000989s | 0.000977s | byte equality observed |
| mp_map_replace.test | 10 | 0.000988s | 0.001034s | 0.000963s | byte equality observed |
| mp_map_update.test | 10 | 0.000981s | 0.000973s | 0.000936s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000969s | 0.000993s | 0.000987s | byte equality observed |
| mp_max.test | 10 | 0.000958s | 0.000983s | 0.000961s | byte equality observed |
| mp_max_element.test | 10 | 0.000962s | 0.000980s | 0.000945s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000430s | 0.000431s | 0.000954s | byte equality observed |
| mp_max_element_q.test | 10 | 0.000954s | 0.001009s | 0.000957s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000426s | 0.000423s | 0.000959s | byte equality observed |
| mp_min.test | 10 | 0.000955s | 0.000950s | 0.000956s | byte equality observed |
| mp_min_element.test | 10 | 0.000992s | 0.000945s | 0.000945s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000423s | 0.000427s | 0.000986s | byte equality observed |
| mp_min_element_q.test | 10 | 0.000979s | 0.000985s | 0.000923s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000423s | 0.000427s | 0.000939s | byte equality observed |
| mp_none_of.test | 10 | 0.000962s | 0.000961s | 0.000953s | byte equality observed |
| mp_none_of_q.test | 10 | 0.000993s | 0.001017s | 0.000955s | byte equality observed |
| mp_not_fn.test | 10 | 0.000956s | 0.000975s | 0.000956s | byte equality observed |
| mp_nth_element.test | 10 | 0.000963s | 0.000997s | 0.000947s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.000979s | 0.000959s | 0.000992s | byte equality observed |
| mp_or.test | 10 | 0.000951s | 0.000968s | 0.000943s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.000956s | 0.000987s | 0.000942s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.000994s | 0.000962s | 0.000947s | byte equality observed |
| mp_partial_sum.test | 10 | 0.000962s | 0.000973s | 0.001004s | byte equality observed |
| mp_partition.test | 10 | 0.000971s | 0.000994s | 0.000971s | byte equality observed |
| mp_partition_q.test | 10 | 0.000985s | 0.000967s | 0.000938s | byte equality observed |
| mp_plus.test | 10 | 0.000970s | 0.001006s | 0.000974s | byte equality observed |
| mp_pop_back.test | 10 | 0.000999s | 0.000987s | 0.000935s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000413s | 0.000421s | 0.000954s | byte equality observed |
| mp_pop_front.test | 10 | 0.000972s | 0.000979s | 0.000955s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000429s | 0.000422s | 0.000977s | byte equality observed |
| mp_power_set.test | 10 | 0.000999s | 0.000974s | 0.000942s | byte equality observed |
| mp_product.test | 10 | 0.000997s | 0.000988s | 0.000969s | byte equality observed |
| mp_push_back.test | 10 | 0.000986s | 0.000973s | 0.000941s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000425s | 0.000431s | 0.000977s | byte equality observed |
| mp_push_front.test | 10 | 0.000965s | 0.000989s | 0.000910s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000420s | 0.000423s | 0.001041s | byte equality observed |
| mp_quote.test | 10 | 0.000966s | 0.001012s | 0.000982s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000993s | 0.000979s | 0.000970s | byte equality observed |
| mp_remove.test | 10 | 0.000972s | 0.001007s | 0.000942s | byte equality observed |
| mp_remove_if.test | 10 | 0.000944s | 0.000990s | 0.000979s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.000971s | 0.000987s | 0.000993s | byte equality observed |
| mp_rename.test | 10 | 0.000972s | 0.000993s | 0.000978s | byte equality observed |
| mp_rename_2.test | 10 | 0.000449s | 0.000437s | 0.000931s | byte equality observed |
| mp_rename_v.test | 10 | 0.000427s | 0.000425s | 0.000920s | byte equality observed |
| mp_repeat.test | 10 | 0.000989s | 0.000996s | 0.000950s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000430s | 0.000439s | 0.000938s | byte equality observed |
| mp_repeat_3.test | 10 | 0.000971s | 0.000935s | 0.000959s | byte equality observed |
| mp_replace.test | 10 | 0.000970s | 0.000951s | 0.000982s | byte equality observed |
| mp_replace_at.test | 10 | 0.000963s | 0.000958s | 0.000943s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.000964s | 0.000995s | 0.000959s | byte equality observed |
| mp_replace_front.test | 10 | 0.000953s | 0.000967s | 0.000957s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000418s | 0.000426s | 0.000955s | byte equality observed |
| mp_replace_if.test | 10 | 0.001001s | 0.000994s | 0.000962s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.000958s | 0.000967s | 0.000942s | byte equality observed |
| mp_replace_second.test | 10 | 0.000972s | 0.000980s | 0.000922s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000433s | 0.000427s | 0.001002s | byte equality observed |
| mp_replace_third.test | 10 | 0.000965s | 0.000978s | 0.000937s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000427s | 0.000420s | 0.000979s | byte equality observed |
| mp_reverse.test | 10 | 0.000987s | 0.000989s | 0.000997s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.001009s | 0.000979s | 0.000946s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000965s | 0.000987s | 0.000979s | byte equality observed |
| mp_rotate_left.test | 10 | 0.000978s | 0.000994s | 0.000970s | byte equality observed |
| mp_rotate_right.test | 10 | 0.000988s | 0.000986s | 0.000946s | byte equality observed |
| mp_same.test | 10 | 0.000939s | 0.000969s | 0.000955s | byte equality observed |
| mp_second.test | 10 | 0.000991s | 0.000962s | 0.000927s | byte equality observed |
| mp_second_2.test | 10 | 0.000419s | 0.000425s | 0.000942s | byte equality observed |
| mp_set_contains.test | 10 | 0.000958s | 0.000967s | 0.000962s | byte equality observed |
| mp_set_difference.test | 10 | 0.000967s | 0.000983s | 0.000959s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000959s | 0.000955s | 0.000967s | byte equality observed |
| mp_set_intersection.test | 10 | 0.000957s | 0.001003s | 0.000947s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000968s | 0.001000s | 0.000986s | byte equality observed |
| mp_set_push_back.test | 10 | 0.000980s | 0.000987s | 0.000952s | byte equality observed |
| mp_set_push_front.test | 10 | 0.000977s | 0.000953s | 0.000967s | byte equality observed |
| mp_set_union.test | 10 | 0.000992s | 0.000997s | 0.000956s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.001003s | 0.000983s | 0.000976s | byte equality observed |
| mp_similar.test | 10 | 0.000980s | 0.001013s | 0.000974s | byte equality observed |
| mp_size.test | 10 | 0.000975s | 0.001007s | 0.000923s | byte equality observed |
| mp_size_2.test | 10 | 0.000441s | 0.000445s | 0.000927s | byte equality observed |
| mp_slice.test | 10 | 0.001032s | 0.001016s | 0.000955s | byte equality observed |
| mp_slice_2.test | 10 | 0.000421s | 0.000441s | 0.000940s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.000984s | 0.001015s | 0.000954s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.000996s | 0.000955s | 0.000977s | byte equality observed |
| mp_sort.test | 10 | 0.000981s | 0.001018s | 0.001019s | byte equality observed |
| mp_sort_q.test | 10 | 0.000988s | 0.001052s | 0.000982s | byte equality observed |
| mp_split.test | 10 | 0.000996s | 0.001000s | 0.000963s | byte equality observed |
| mp_starts_with.test | 10 | 0.000982s | 0.000984s | 0.000997s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.001008s | 0.000999s | 0.000945s | byte equality observed |
| mp_take.test | 10 | 0.000969s | 0.000964s | 0.000990s | byte equality observed |
| mp_take_2.test | 10 | 0.000426s | 0.000420s | 0.000958s | byte equality observed |
| mp_third.test | 10 | 0.000987s | 0.000973s | 0.000944s | byte equality observed |
| mp_third_2.test | 10 | 0.000429s | 0.000436s | 0.000951s | byte equality observed |
| mp_transform.test | 10 | 0.000980s | 0.000963s | 0.000925s | byte equality observed |
| mp_transform_2.test | 10 | 0.000972s | 0.000952s | 0.000914s | byte equality observed |
| mp_transform_front.test | 10 | 0.000953s | 0.000980s | 0.000945s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000437s | 0.000425s | 0.000960s | byte equality observed |
| mp_transform_if.test | 10 | 0.000969s | 0.000996s | 0.000939s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.000993s | 0.000981s | 0.000998s | byte equality observed |
| mp_transform_q.test | 10 | 0.001001s | 0.000974s | 0.001004s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.001002s | 0.000959s | 0.000957s | byte equality observed |
| mp_transform_second.test | 10 | 0.000980s | 0.000988s | 0.000963s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000423s | 0.000427s | 0.000907s | byte equality observed |
| mp_transform_sf.test | 10 | 0.000961s | 0.000975s | 0.000994s | byte equality observed |
| mp_transform_third.test | 10 | 0.000974s | 0.001018s | 0.000961s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000427s | 0.000434s | 0.000904s | byte equality observed |
| mp_unique.test | 10 | 0.000971s | 0.000982s | 0.000954s | byte equality observed |
| mp_unique_if.test | 10 | 0.000969s | 0.000959s | 0.000962s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.001003s | 0.001014s | 0.000980s | byte equality observed |
| mp_valid.test | 10 | 0.000958s | 0.000965s | 0.000962s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.000988s | 0.000955s | 0.000954s | byte equality observed |
| mp_value.test | 10 | 0.000419s | 0.000432s | 0.000940s | byte equality observed |
| mp_with_index.test | 10 | 0.001325s | 0.001250s | 0.001203s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000421s | 0.000428s | 0.000952s | byte equality observed |
| mpl.test | 10 | 0.000951s | 0.001011s | 0.000961s | byte equality observed |
| mpl_list.test | 10 | 0.000954s | 0.000978s | 0.000965s | byte equality observed |
| mpl_tuple.test | 10 | 0.000967s | 0.000958s | 0.000984s | byte equality observed |
| mpl_version.test | 10 | 0.000994s | 0.000958s | 0.000981s | byte equality observed |
| set_version.test | 10 | 0.000969s | 0.000937s | 0.000983s | byte equality observed |
| tuple_apply.test | 10 | 0.001002s | 0.000962s | 0.000928s | byte equality observed |
| tuple_for_each.test | 10 | 0.000993s | 0.000983s | 0.000962s | byte equality observed |
| tuple_transform.test | 10 | 0.000985s | 0.001007s | 0.000998s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000976s | 0.000977s | 0.000985s | byte equality observed |
| tuple_version.test | 10 | 0.000958s | 0.000975s | 0.000956s | byte equality observed |
| utility_version.test | 10 | 0.000963s | 0.000989s | 0.000969s | byte equality observed |
| version.test | 10 | 0.000956s | 0.000980s | 0.000974s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44927958294).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
