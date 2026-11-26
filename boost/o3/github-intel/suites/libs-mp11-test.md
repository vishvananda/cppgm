# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.041193 | 0.082406 | 0.115261 | — | — | — |
| complex_h.test | COMPILE | 0.165000 | 0.356698 | 0.491887 | — | — | — |
| mp_size.test | RUN | 0.192522 | 1.157675 | 0.651699 | 0.001435 | 0.001458 | 0.001495 |
| mp_size_2.test | RUN | 0.017087 | 0.041189 | 0.053671 | 0.000722 | 0.000657 | 0.001596 |
| mp_empty.test | RUN | 0.182726 | 0.709660 | 0.581094 | 0.001419 | 0.001566 | 0.001499 |
| mp_empty_2.test | RUN | 0.016551 | 0.042572 | 0.056880 | 0.000550 | 0.000702 | 0.001461 |
| mp_assign.test | RUN | 0.220246 | 1.504745 | 0.799766 | 0.001380 | 0.001588 | 0.001450 |
| mp_assign_2.test | RUN | 0.017509 | 0.041065 | 0.053507 | 0.000667 | 0.000648 | 0.001351 |
| mp_clear.test | RUN | 0.184055 | 0.639806 | 0.605471 | 0.001519 | 0.001539 | 0.001668 |
| mp_clear_2.test | RUN | 0.016640 | 0.039796 | 0.056185 | 0.000590 | 0.000587 | 0.001518 |
| mp_front.test | RUN | 0.190255 | 1.016803 | 0.702643 | 0.001516 | 0.001704 | 0.001398 |
| mp_front_2.test | RUN | 0.016294 | 0.038923 | 0.056214 | 0.000592 | 0.000618 | 0.001594 |
| mp_pop_front.test | RUN | 0.197469 | 1.074916 | 0.684884 | 0.001452 | 0.001578 | 0.001562 |
| mp_pop_front_2.test | RUN | 0.015414 | 0.041446 | 0.056259 | 0.000609 | 0.000676 | 0.001537 |
| mp_second.test | RUN | 0.190907 | 0.674064 | 0.635817 | 0.001374 | 0.001666 | 0.001461 |
| mp_second_2.test | RUN | 0.017385 | 0.041502 | 0.057125 | 0.000630 | 0.000632 | 0.001682 |
| mp_third.test | RUN | 0.177443 | 0.627983 | 0.600162 | 0.001453 | 0.001503 | 0.001611 |
| mp_third_2.test | RUN | 0.017455 | 0.038100 | 0.058552 | 0.000641 | 0.000631 | 0.001720 |
| mp_push_front.test | RUN | 0.246968 | 2.311860 | 1.120864 | 0.001498 | 0.001614 | 0.001590 |
| mp_push_front_2.test | RUN | 0.016779 | 0.039646 | 0.056276 | 0.000625 | 0.000697 | 0.001597 |
| mp_push_back.test | RUN | 0.245621 | 2.323384 | 1.107590 | 0.001430 | 0.001563 | 0.001483 |
| mp_push_back_2.test | RUN | 0.016991 | 0.040376 | 0.056737 | 0.000707 | 0.000593 | 0.001493 |
| mp_rename.test | RUN | 0.236759 | 2.143700 | 0.968493 | 0.001585 | 0.001485 | 0.001595 |
| mp_rename_2.test | RUN | 0.014661 | 0.039344 | 0.057737 | 0.000572 | 0.000716 | 0.001488 |
| mp_append.test | RUN | 0.247218 | 2.441489 | 1.072150 | 0.001585 | 0.001795 | 0.001544 |
| mp_append_2.test | RUN | 0.574555 | 5.388698 | 1.432329 | 0.001530 | 0.001588 | 0.001435 |
| mp_append_3.test | RUN | 0.017383 | 0.042207 | 0.055256 | 0.000688 | 0.000650 | 0.001600 |
| mp_append_sf.test | RUN | 0.186227 | 0.582951 | 0.564209 | 0.001545 | 0.001721 | 0.001491 |
| mp_replace_front.test | RUN | 0.222314 | 1.729427 | 0.836763 | 0.001371 | 0.001666 | 0.001522 |
| mp_replace_front_2.test | RUN | 0.017646 | 0.040990 | 0.058038 | 0.000539 | 0.000665 | 0.001626 |
| mp_replace_second.test | RUN | 0.213634 | 1.091811 | 0.795010 | 0.001501 | 0.001596 | 0.001659 |
| mp_replace_second_2.test | RUN | 0.017315 | 0.042153 | 0.057662 | 0.000583 | 0.000684 | 0.001457 |
| mp_replace_third.test | RUN | 0.204811 | 0.908445 | 0.710340 | 0.001581 | 0.001575 | 0.001544 |
| mp_replace_third_2.test | RUN | 0.016382 | 0.039408 | 0.056268 | 0.000625 | 0.000680 | 0.001612 |
| mp_apply_q.test | RUN | 0.229482 | 2.126917 | 0.963689 | 0.001561 | 0.001550 | 0.001702 |
| mp_apply_q_sf.test | RUN | 0.184864 | 0.607560 | 0.593231 | 0.001604 | 0.001591 | 0.001630 |
| mp_is_list.test | RUN | 0.184036 | 0.706074 | 0.596670 | 0.001439 | 0.001667 | 0.001636 |
| mp_list_c.test | RUN | 0.200957 | 0.867798 | 0.680124 | 0.001639 | 0.001660 | 0.001565 |
| mp_transform_front.test | RUN | 0.220610 | 1.711187 | 0.839458 | 0.001496 | 0.001730 | 0.001577 |
| mp_transform_front_2.test | RUN | 0.017196 | 0.038605 | 0.057561 | 0.000662 | 0.000646 | 0.001598 |
| mp_transform_second.test | RUN | 0.211594 | 1.487979 | 0.790621 | 0.001544 | 0.001436 | 0.001443 |
| mp_transform_second_2.test | RUN | 0.017216 | 0.039872 | 0.054248 | 0.000740 | 0.000729 | 0.001575 |
| mp_transform_third.test | RUN | 0.196651 | 1.131987 | 0.672373 | 0.001428 | 0.001803 | 0.001658 |
| mp_transform_third_2.test | RUN | 0.017779 | 0.038545 | 0.057079 | 0.000632 | 0.000845 | 0.001612 |
| mp_list_v.test | RUN | 0.017577 | 0.039370 | 0.057183 | 0.000660 | 0.000654 | 0.001452 |
| mp_rename_v.test | RUN | 0.017567 | 0.040349 | 0.054922 | 0.000635 | 0.000727 | 0.001428 |
| mp_is_value_list.test | RUN | 0.177633 | 0.436041 | 0.555622 | 0.001515 | 0.001516 | 0.001496 |
| mp_transform.test | RUN | 0.467055 | 3.620985 | 1.796189 | 0.001566 | 0.001744 | 0.001484 |
| mp_transform_2.test | RUN | 0.168872 | 0.390914 | 0.543623 | 0.001580 | 0.001609 | 0.001431 |
| mp_transform_q.test | RUN | 0.447924 | 3.454904 | 1.707945 | 0.001481 | 0.001523 | 0.001558 |
| mp_transform_q_2.test | RUN | 0.451674 | 1.082032 | 2.220748 | 0.001612 | 0.001622 | 0.001481 |
| mp_transform_sf.test | RUN | 0.190858 | 0.604751 | 0.608625 | 0.001628 | 0.001586 | 0.001598 |
| mp_transform_if.test | RUN | 0.237886 | 1.714337 | 0.924117 | 0.001511 | 0.001655 | 0.001667 |
| mp_transform_if_q.test | RUN | 0.239740 | 1.736913 | 0.935169 | 0.001447 | 0.001458 | 0.001621 |
| mp_filter.test | RUN | 0.206588 | 0.999168 | 0.709173 | 0.001526 | 0.001744 | 0.001615 |
| mp_fill.test | RUN | 0.195847 | 0.768077 | 0.669007 | 0.001568 | 0.001643 | 0.001658 |
| mp_fill_2.test | RUN | 0.031075 | 0.063608 | 0.091053 | 0.000648 | 0.000633 | 0.001626 |
| mp_count.test | RUN | 0.372887 | 1.857880 | 1.061035 | 0.001620 | 0.001643 | 0.001538 |
| mp_count_if.test | RUN | 0.385793 | 1.873424 | 1.183480 | 0.001473 | 0.001247 | 0.001656 |
| mp_count_if_q.test | RUN | 0.199356 | 1.226393 | 0.666145 | 0.001574 | 0.001544 | 0.001582 |
| mp_contains.test | RUN | 0.185048 | 0.730169 | 0.637741 | 0.001521 | 0.001630 | 0.001649 |
| mp_starts_with.test | RUN | 0.195672 | 0.727653 | 0.645019 | 0.001495 | 0.001539 | 0.001678 |
| mp_starts_with_sf.test | RUN | 0.187667 | 0.619573 | 0.586078 | 0.001440 | 0.001526 | 0.001441 |
| mp_repeat.test | RUN | 0.287900 | 3.099836 | 1.222559 | 0.001624 | 0.001622 | 0.001549 |
| mp_repeat_2.test | RUN | 0.031358 | 0.063496 | 0.094023 | 0.000673 | 0.000723 | 0.001627 |
| mp_repeat_3.test | RUN | 0.234508 | 0.401905 | 0.565860 | 0.001465 | 0.001641 | 0.001604 |
| mp_product.test | RUN | 0.226445 | 1.849117 | 0.900438 | 0.001444 | 0.001703 | 0.001658 |
| mp_drop.test | RUN | 0.248693 | 2.317760 | 0.978399 | 0.001474 | 0.001670 | 0.001619 |
| mp_drop_2.test | RUN | 0.029364 | 0.064895 | 0.088597 | 0.000600 | 0.000723 | 0.001604 |
| mp_iota.test | RUN | 0.233755 | 1.932238 | 0.899496 | 0.001697 | 0.001594 | 0.001714 |
| mp_iota_2.test | RUN | 0.254282 | 2.358790 | 0.994256 | 0.001504 | 0.001672 | 0.001355 |
| mp_at.test | RUN | 0.198758 | 1.009152 | 0.728940 | 0.001526 | 0.001434 | 0.001550 |
| mp_at_2.test | RUN | 0.030150 | 0.061904 | 0.094242 | 0.000536 | 0.000703 | 0.001628 |
| mp_at_sf.test | RUN | 0.189065 | 0.624587 | 0.597565 | 0.001437 | 0.001638 | 0.001502 |
| mp_take.test | RUN | 0.329832 | 3.008909 | 1.204115 | 0.001537 | 0.001631 | 0.001692 |
| mp_take_2.test | RUN | 0.030076 | 0.064048 | 0.095202 | 0.000640 | 0.000641 | 0.001579 |
| mp_slice.test | RUN | 0.398462 | 3.078827 | 1.533529 | 0.001588 | 0.001659 | 0.001618 |
| mp_slice_2.test | RUN | 0.029765 | 0.063140 | 0.095307 | 0.000711 | 0.000670 | 0.001471 |
| mp_replace.test | RUN | 0.236990 | 1.549762 | 0.985051 | 0.001574 | 0.001567 | 0.001654 |
| mp_replace_if.test | RUN | 0.228898 | 1.369690 | 0.902978 | 0.001572 | 0.001917 | 0.001534 |
| mp_replace_if_q.test | RUN | 0.227809 | 1.371168 | 0.900523 | 0.001527 | 0.001610 | 0.001717 |
| mp_copy_if.test | RUN | 0.230898 | 1.905354 | 0.856783 | 0.001586 | 0.001688 | 0.001615 |
| mp_copy_if_q.test | RUN | 0.234617 | 1.933608 | 0.868781 | 0.001527 | 0.001654 | 0.001689 |
| mp_remove.test | RUN | 0.223730 | 1.297822 | 0.885727 | 0.001663 | 0.001734 | 0.001507 |
| mp_remove_if.test | RUN | 0.242452 | 2.024711 | 0.929611 | 0.001401 | 0.001753 | 0.001596 |
| mp_remove_if_q.test | RUN | 0.241177 | 2.028165 | 0.909557 | 0.001530 | 0.001702 | 0.001589 |
| mp_partition.test | RUN | 0.238765 | 1.924655 | 0.991422 | 0.001451 | 0.001670 | 0.001570 |
| mp_partition_q.test | RUN | 0.241988 | 1.939628 | 0.988706 | 0.001614 | 0.002826 | 0.001503 |
| mp_sort.test | RUN | 0.224544 | 1.382996 | 0.859102 | 0.001508 | 0.001697 | 0.001694 |
| mp_sort_q.test | RUN | 0.226128 | 1.389217 | 0.845995 | 0.001498 | 0.001780 | 0.001632 |
| mp_find.test | RUN | 0.218202 | 1.503298 | 0.738624 | 0.001498 | 0.001630 | 0.001554 |
| mp_find_if.test | RUN | 0.210735 | 1.363492 | 0.697060 | 0.001583 | 0.001779 | 0.001314 |
| mp_find_if_q.test | RUN | 0.228722 | 1.517712 | 0.881530 | 0.001558 | 0.001706 | 0.001603 |
| mp_reverse.test | RUN | 0.461301 | 4.050192 | 1.728092 | 0.001427 | 0.001747 | 0.001613 |
| mp_fold.test | RUN | 0.842404 | 3.139383 | 4.347238 | 0.001430 | 0.001634 | 0.001602 |
| mp_fold_q.test | RUN | 0.217249 | 1.384537 | 0.802227 | 0.001644 | 0.001719 | 0.001609 |
| mp_fold_q_sf.test | RUN | 0.190523 | 0.617480 | 0.639466 | 0.001421 | 0.001536 | 0.001620 |
| mp_reverse_fold.test | RUN | 0.394852 | 3.035595 | 1.191854 | 0.001551 | 0.001680 | 0.001654 |
| mp_reverse_fold_q.test | RUN | 0.224803 | 1.684127 | 0.888830 | 0.001699 | 0.001672 | 0.001596 |
| mp_unique.test | RUN | 0.222991 | 1.486032 | 0.869055 | 0.001440 | 0.001576 | 0.001612 |
| mp_unique_if.test | RUN | 0.422784 | 3.084413 | 1.373466 | 0.001586 | 0.001578 | 0.001475 |
| mp_unique_if_q.test | RUN | 0.347806 | 3.091871 | 1.111664 | 0.001626 | 0.001540 | 0.001762 |
| mp_all_of.test | RUN | 0.516803 | 1.668146 | 1.451023 | 0.001532 | 0.001570 | 0.001334 |
| mp_all_of_q.test | RUN | 0.191992 | 0.733647 | 0.649285 | 0.001737 | 0.001655 | 0.001605 |
| mp_any_of.test | RUN | 0.536374 | 1.754704 | 1.462834 | 0.001604 | 0.001728 | 0.001552 |
| mp_any_of_q.test | RUN | 0.192360 | 0.728168 | 0.631696 | 0.001584 | 0.001674 | 0.001635 |
| mp_none_of.test | RUN | 0.528609 | 1.739056 | 1.443362 | 0.001434 | 0.001710 | 0.001702 |
| mp_none_of_q.test | RUN | 0.186281 | 0.739235 | 0.602579 | 0.001974 | 0.001726 | 0.001622 |
| mp_replace_at.test | RUN | 0.249476 | 1.463338 | 0.927081 | 0.001525 | 0.001625 | 0.001655 |
| mp_replace_at_c.test | RUN | 0.235402 | 1.504360 | 0.965541 | 0.001464 | 0.001555 | 0.001439 |
| mp_for_each.test | RUN | 0.218509 | 1.012682 | 0.998855 | 0.001440 | 0.001564 | 0.001374 |
| mp_insert.test | RUN | 0.371485 | 3.065616 | 1.389349 | 0.001502 | 0.001482 | 0.001664 |
| mp_insert_2.test | RUN | 0.031026 | 0.064144 | 0.094561 | 0.000728 | 0.000599 | 0.001804 |
| mp_erase.test | RUN | 0.415248 | 3.281769 | 1.649135 | 0.001539 | 0.001690 | 0.001524 |
| mp_erase_2.test | RUN | 0.030174 | 0.064336 | 0.091573 | 0.000673 | 0.000733 | 0.001621 |
| mp_with_index.test | RUN | 0.527089 | 6.557854 | 3.575103 | 0.002120 | 0.002034 | 0.001903 |
| mp_with_index_cx.test | RUN | 0.003510 | 0.019551 | 0.027592 | 0.000598 | 0.000672 | 0.001667 |
| mp_from_sequence.test | RUN | 0.235397 | 1.704096 | 0.931804 | 0.001690 | 0.001492 | 0.001519 |
| mp_from_sequence_2.test | RUN | 0.251605 | 2.009895 | 1.007379 | 0.001404 | 0.001722 | 0.001654 |
| mp_from_sequence_3.test | RUN | 0.205539 | 0.882519 | 0.688953 | 0.001706 | 0.001739 | 0.001459 |
| mp_min_element.test | RUN | 0.199106 | 0.802883 | 0.660347 | 0.001622 | 0.001661 | 0.001695 |
| mp_min_element_2.test | RUN | 0.030163 | 0.064900 | 0.094789 | 0.000628 | 0.000769 | 0.001565 |
| mp_min_element_q.test | RUN | 0.197077 | 0.806700 | 0.659902 | 0.001423 | 0.001716 | 0.001679 |
| mp_min_element_q_2.test | RUN | 0.031389 | 0.061756 | 0.094846 | 0.000646 | 0.000627 | 0.001599 |
| mp_max_element.test | RUN | 0.196695 | 0.798023 | 0.658037 | 0.001632 | 0.001652 | 0.001482 |
| mp_max_element_2.test | RUN | 0.029795 | 0.064569 | 0.092700 | 0.000674 | 0.000745 | 0.001473 |
| mp_max_element_q.test | RUN | 0.196855 | 0.796088 | 0.644460 | 0.001545 | 0.001737 | 0.001636 |
| mp_max_element_q_2.test | RUN | 0.030382 | 0.063993 | 0.094579 | 0.000658 | 0.000702 | 0.001610 |
| mp_nth_element.test | RUN | 0.217032 | 1.134195 | 0.818146 | 0.001633 | 0.001773 | 0.001574 |
| mp_nth_element_q.test | RUN | 0.217474 | 1.133370 | 0.813913 | 0.001416 | 0.001732 | 0.001492 |
| mp_back.test | RUN | 0.211800 | 0.944825 | 0.742214 | 0.001495 | 0.001470 | 0.001716 |
| mp_back_2.test | RUN | 0.029754 | 0.063727 | 0.094470 | 0.000556 | 0.000649 | 0.001590 |
| mp_pop_back.test | RUN | 0.632386 | 6.286461 | 1.640613 | 0.001722 | 0.001633 | 0.001528 |
| mp_pop_back_2.test | RUN | 0.030229 | 0.063153 | 0.094134 | 0.000625 | 0.000638 | 0.001586 |
| mp_flatten.test | RUN | 0.254645 | 2.217363 | 1.103126 | 0.001557 | 0.001695 | 0.001504 |
| mp_rotate_left.test | RUN | 0.254561 | 2.372017 | 1.079163 | 0.001557 | 0.001750 | 0.001519 |
| mp_rotate_right.test | RUN | 0.253352 | 2.377057 | 1.095656 | 0.001422 | 0.001576 | 0.001639 |
| mp_power_set.test | RUN | 0.252963 | 2.255286 | 1.098658 | 0.001698 | 0.001672 | 0.001776 |
| mp_partial_sum.test | RUN | 0.347449 | 3.058817 | 1.233142 | 0.001488 | 0.001562 | 0.001637 |
| mp_iterate.test | RUN | 0.225911 | 0.902628 | 0.872326 | 0.001532 | 0.001711 | 0.001395 |
| mp_pairwise_fold.test | RUN | 0.256306 | 2.100965 | 1.101826 | 0.001573 | 0.001661 | 0.001625 |
| mp_pairwise_fold_q.test | RUN | 0.192382 | 0.604883 | 0.635182 | 0.001608 | 0.001584 | 0.001729 |
| mp_sliding_fold.test | RUN | 0.494547 | 4.008945 | 2.100547 | 0.001573 | 0.001680 | 0.001586 |
| mp_sliding_fold_q.test | RUN | 0.511962 | 4.041643 | 2.078638 | 0.001456 | 0.001516 | 0.001381 |
| mp_intersperse.test | RUN | 0.235497 | 1.479694 | 0.962976 | 0.001643 | 0.001546 | 0.001584 |
| mp_split.test | RUN | 0.349453 | 2.865719 | 1.348257 | 0.001517 | 0.001681 | 0.001620 |
| mp_join.test | RUN | 0.258102 | 2.395878 | 1.198607 | 0.001604 | 0.001512 | 0.001638 |
| integral.test | RUN | 0.202467 | 1.067263 | 0.707891 | 0.001501 | 0.001658 | 0.001736 |
| mp_value.test | RUN | 0.012967 | 0.034591 | 0.046964 | 0.000640 | 0.000644 | 0.001552 |
| mp_identity.test | RUN | 0.193601 | 0.968756 | 0.685570 | 0.001586 | 0.001661 | 0.001686 |
| mp_inherit.test | RUN | 0.184367 | 0.687520 | 0.620823 | 0.001499 | 0.001555 | 0.001558 |
| mp_if.test | RUN | 0.186302 | 0.787214 | 0.653265 | 0.001794 | 0.001435 | 0.001660 |
| mp_if_sf.test | RUN | 0.177162 | 0.582743 | 0.563942 | 0.001546 | 0.001782 | 0.001592 |
| mp_eval_if.test | RUN | 0.190222 | 0.847426 | 0.641769 | 0.001535 | 0.001535 | 0.001496 |
| mp_eval_if_sf.test | RUN | 0.176725 | 0.589632 | 0.580105 | 0.001450 | 0.001398 | 0.001596 |
| mp_valid.test | RUN | 0.186283 | 0.592872 | 0.582172 | 0.001531 | 0.001471 | 0.001644 |
| mp_defer.test | RUN | 0.197938 | 1.029299 | 0.704261 | 0.001555 | 0.001730 | 0.001658 |
| mp_quote.test | RUN | 0.201505 | 1.029196 | 0.733853 | 0.001634 | 0.001684 | 0.001668 |
| mp_invoke_q.test | RUN | 0.222153 | 1.345815 | 0.810114 | 0.001496 | 0.001736 | 0.001730 |
| mp_invoke_q_sf.test | RUN | 0.179110 | 0.590944 | 0.570888 | 0.001584 | 0.001662 | 0.001505 |
| mp_quote_trait.test | RUN | 0.198139 | 1.150615 | 0.715028 | 0.001570 | 0.001613 | 0.001560 |
| mp_cond.test | RUN | 0.186413 | 0.695602 | 0.609257 | 0.001617 | 0.001892 | 0.001507 |
| mp_cond_sf.test | RUN | 0.181461 | 0.595894 | 0.574482 | 0.001197 | 0.001791 | 0.001559 |
| mp_not_fn.test | RUN | 0.180093 | 0.598349 | 0.566194 | 0.001588 | 0.001529 | 0.001496 |
| mp_eval_if_not.test | RUN | 0.190583 | 0.855414 | 0.644530 | 0.001513 | 0.001742 | 0.001705 |
| mp_eval_or.test | RUN | 0.178474 | 0.449765 | 0.594752 | 0.001805 | 0.001787 | 0.001490 |
| mp_compose.test | RUN | 0.204466 | 1.419571 | 0.773961 | 0.001493 | 0.001627 | 0.001651 |
| mp_valid_and_true.test | RUN | 0.186730 | 0.719094 | 0.605013 | 0.001596 | 0.001694 | 0.001488 |
| mp_compose_sf.test | COMPILE | 0.042644 | 0.083771 | 0.137088 | — | — | — |
| integer_sequence.test | RUN | 0.223762 | 1.397563 | 0.902263 | 0.001468 | 0.001490 | 0.001292 |
| tuple_for_each.test | RUN | 0.183254 | 0.509284 | 0.639006 | 0.001456 | 0.001790 | 0.001723 |
| tuple_for_each_cx.test | COMPILE | 0.033728 | 0.073258 | 0.102120 | — | — | — |
| tuple_apply.test | RUN | 0.183436 | 0.505795 | 0.632405 | 0.001463 | 0.001665 | 0.001340 |
| tuple_apply_cx.test | COMPILE | 0.049448 | 0.101018 | 0.152622 | — | — | — |
| construct_from_tuple.test | RUN | 0.184381 | 0.549574 | 0.633617 | 0.001523 | 0.001658 | 0.001587 |
| construct_from_tuple_cx.test | COMPILE | 0.050184 | 0.103542 | 0.135959 | — | — | — |
| tuple_transform.test | RUN | 0.286647 | 1.106520 | 1.223919 | 0.001666 | 0.001498 | 0.001430 |
| tuple_transform_2.test | RUN | 0.253762 | 0.797279 | 1.116007 | 0.001524 | 0.001475 | 0.001732 |
| tuple_transform_cx.test | COMPILE | 0.043817 | 0.098259 | 0.136778 | — | — | — |
| mp_set_contains.test | RUN | 0.187998 | 0.720288 | 0.648387 | 0.001511 | 0.001601 | 0.001479 |
| mp_set_push_back.test | RUN | 0.254117 | 2.280190 | 1.118101 | 0.001522 | 0.001710 | 0.001677 |
| mp_set_push_front.test | RUN | 0.333473 | 2.745844 | 1.261179 | 0.001584 | 0.001818 | 0.001522 |
| mp_is_set.test | RUN | 0.189893 | 0.728590 | 0.640178 | 0.001660 | 0.001680 | 0.001618 |
| mp_set_union.test | RUN | 0.240850 | 1.930766 | 1.037021 | 0.001488 | 0.001814 | 0.001603 |
| mp_set_union_sf.test | RUN | 0.181112 | 0.579100 | 0.598926 | 0.001472 | 0.001711 | 0.001468 |
| mp_set_difference.test | RUN | 0.226052 | 1.514857 | 0.873644 | 0.001594 | 0.001530 | 0.001669 |
| mp_set_difference_sf.test | RUN | 0.184197 | 0.548478 | 0.588076 | 0.001469 | 0.001797 | 0.001496 |
| mp_set_intersection.test | RUN | 0.218616 | 1.491537 | 0.862857 | 0.001473 | 0.001812 | 0.001683 |
| mp_set_intersection_sf.test | RUN | 0.179769 | 0.589651 | 0.596068 | 0.001523 | 0.001657 | 0.001599 |
| mp_all.test | RUN | 0.192890 | 0.728044 | 0.624000 | 0.001518 | 0.001636 | 0.001559 |
| mp_all_2.test | RUN | 0.521852 | 1.572478 | 1.445543 | 0.001658 | 0.001601 | 0.001607 |
| mp_and.test | RUN | 0.180112 | 0.726642 | 0.618970 | 0.001636 | 0.001626 | 0.001605 |
| mp_any.test | RUN | 0.194128 | 0.725925 | 0.653450 | 0.001499 | 0.001752 | 0.001620 |
| mp_any_2.test | RUN | 0.548188 | 1.556792 | 1.456864 | 0.001352 | 0.001722 | 0.001368 |
| mp_or.test | RUN | 0.187782 | 0.729241 | 0.621926 | 0.001683 | 0.001655 | 0.001509 |
| mp_same.test | RUN | 0.369205 | 1.217059 | 0.990466 | 0.001063 | 0.001548 | 0.001508 |
| mp_plus.test | RUN | 0.199486 | 0.860945 | 0.678940 | 0.001425 | 0.001490 | 0.001609 |
| mp_less.test | RUN | 0.188255 | 0.704543 | 0.592504 | 0.001689 | 0.001369 | 0.001587 |
| mp_min.test | RUN | 0.183997 | 0.664083 | 0.613879 | 0.001568 | 0.001730 | 0.001428 |
| mp_max.test | RUN | 0.190910 | 0.730266 | 0.623059 | 0.001369 | 0.001556 | 0.001545 |
| mp_similar.test | RUN | 0.184011 | 0.716622 | 0.625902 | 0.001279 | 0.001626 | 0.001456 |
| mp_map_find.test | RUN | 0.222064 | 1.313862 | 0.828167 | 0.001558 | 0.001627 | 0.001582 |
| mp_map_find_2.test | RUN | 0.202861 | 0.508088 | 0.689783 | 0.001568 | 0.001689 | 0.001570 |
| mp_map_find_3.test | RUN | 0.192304 | 0.497066 | 0.709356 | 0.001624 | 0.001400 | 0.001590 |
| mp_map_find_4.test | RUN | 0.192377 | 0.468207 | 0.646737 | 0.001441 | 0.001454 | 0.001615 |
| mp_map_contains.test | RUN | 0.199726 | 0.742967 | 0.627623 | 0.001623 | 0.001636 | 0.001617 |
| mp_map_insert.test | RUN | 0.265158 | 2.536048 | 1.201252 | 0.001453 | 0.001630 | 0.001560 |
| mp_map_replace.test | RUN | 0.358870 | 2.860035 | 1.387684 | 0.001571 | 0.001580 | 0.001764 |
| mp_map_erase.test | RUN | 0.262331 | 2.099731 | 1.118259 | 0.001602 | 0.001612 | 0.001504 |
| mp_map_update.test | RUN | 0.224558 | 1.371014 | 0.862860 | 0.001612 | 0.001677 | 0.001227 |
| mp_map_update_q.test | RUN | 0.226011 | 1.369370 | 0.862826 | 0.001475 | 0.001529 | 0.001544 |
| mp_map_keys.test | RUN | 0.221186 | 1.210904 | 0.851693 | 0.001743 | 0.001566 | 0.001336 |
| mp_is_map.test | RUN | 0.200215 | 0.739958 | 0.663673 | 0.001648 | 0.001563 | 0.001432 |
| mp_bind.test | RUN | 0.248856 | 2.240201 | 1.031285 | 0.001676 | 0.001530 | 0.001762 |
| mp_bind_q.test | RUN | 0.224996 | 1.371863 | 0.820365 | 0.001599 | 0.001680 | 0.001562 |
| mp_bind_front.test | RUN | 0.216497 | 1.504324 | 0.786421 | 0.001774 | 0.001699 | 0.001653 |
| mp_bind_back.test | RUN | 0.213785 | 1.500144 | 0.801409 | 0.001629 | 0.001608 | 0.001507 |
| mp_lambda.test | RUN | 0.522447 | 4.472982 | 2.140262 | 0.001541 | 0.001200 | 0.001379 |
| mpl.test | RUN | 0.443099 | 1.174176 | 1.712581 | 0.001668 | 0.001646 | 0.001430 |
| mpl_list.test | RUN | 0.238582 | 0.898133 | 0.788258 | 0.001768 | 0.001506 | 0.001672 |
| mpl_tuple.test | RUN | 0.240734 | 0.888189 | 0.791927 | 0.001528 | 0.001472 | 0.001362 |
| version.test | RUN | 0.120452 | 0.317113 | 0.389790 | 0.001673 | 0.001717 | 0.001576 |
| mp11_version.test | RUN | 0.147233 | 0.362106 | 0.471893 | 0.001440 | 0.001539 | 0.001538 |
| list_version.test | RUN | 0.124251 | 0.329232 | 0.399599 | 0.001550 | 0.001736 | 0.001425 |
| algorithm_version.test | RUN | 0.139351 | 0.343784 | 0.437139 | 0.001472 | 0.001571 | 0.001445 |
| integral_version.test | RUN | 0.120193 | 0.317110 | 0.387389 | 0.001438 | 0.001474 | 0.001390 |
| utility_version.test | RUN | 0.122939 | 0.319889 | 0.401226 | 0.001484 | 0.001594 | 0.001393 |
| function_version.test | RUN | 0.125972 | 0.335876 | 0.405946 | 0.001334 | 0.001555 | 0.001414 |
| map_version.test | RUN | 0.138966 | 0.354572 | 0.427352 | 0.001430 | 0.001390 | 0.001653 |
| set_version.test | RUN | 0.125866 | 0.328432 | 0.410599 | 0.001433 | 0.001606 | 0.001375 |
| bind_version.test | RUN | 0.137412 | 0.342059 | 0.438735 | 0.001439 | 0.001570 | 0.001512 |
| integer_sequence_version.test | RUN | 0.118926 | 0.316473 | 0.392816 | 0.001384 | 0.001386 | 0.001112 |
| tuple_version.test | RUN | 0.138060 | 0.342658 | 0.412640 | 0.001153 | 0.001617 | 0.001144 |
| mpl_version.test | RUN | 0.102355 | 0.266988 | 0.272497 | 0.001113 | 0.001232 | 0.001153 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.005× | 1.007×, 1.002× | 1.006× |
| clang | 1.088× | 1.092×, 1.085× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45754596224).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000961s | 0.000939s | 0.000961s | byte equality observed |
| bind_version.test | 10 | 0.000984s | 0.000940s | 0.000971s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000972s | 0.000953s | 0.001007s | byte equality observed |
| function_version.test | 10 | 0.000959s | 0.000942s | 0.001022s | byte equality observed |
| integer_sequence.test | 10 | 0.000965s | 0.000964s | 0.001011s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000952s | 0.000949s | 0.001038s | byte equality observed |
| integral.test | 10 | 0.000968s | 0.000954s | 0.000995s | byte equality observed |
| integral_version.test | 10 | 0.000965s | 0.000952s | 0.001055s | byte equality observed |
| list_version.test | 10 | 0.000964s | 0.000935s | 0.001074s | byte equality observed |
| map_version.test | 10 | 0.000974s | 0.000938s | 0.001058s | byte equality observed |
| mp11_version.test | 10 | 0.000977s | 0.000931s | 0.001016s | byte equality observed |
| mp_all.test | 10 | 0.000993s | 0.000958s | 0.001027s | byte equality observed |
| mp_all_2.test | 10 | 0.000972s | 0.000963s | 0.001014s | byte equality observed |
| mp_all_of.test | 10 | 0.000969s | 0.000958s | 0.001041s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000997s | 0.000958s | 0.001026s | byte equality observed |
| mp_and.test | 10 | 0.001021s | 0.000977s | 0.001064s | byte equality observed |
| mp_any.test | 10 | 0.001035s | 0.000983s | 0.001071s | byte equality observed |
| mp_any_2.test | 10 | 0.001055s | 0.000987s | 0.001036s | byte equality observed |
| mp_any_of.test | 10 | 0.001027s | 0.001021s | 0.001014s | byte equality observed |
| mp_any_of_q.test | 10 | 0.001021s | 0.000986s | 0.001035s | byte equality observed |
| mp_append.test | 10 | 0.001042s | 0.000970s | 0.001031s | byte equality observed |
| mp_append_2.test | 10 | 0.001086s | 0.000983s | 0.001027s | byte equality observed |
| mp_append_3.test | 10 | 0.000464s | 0.000449s | 0.001013s | byte equality observed |
| mp_append_sf.test | 10 | 0.001009s | 0.001008s | 0.001036s | byte equality observed |
| mp_apply_q.test | 10 | 0.001036s | 0.001072s | 0.001039s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.001063s | 0.001055s | 0.001068s | byte equality observed |
| mp_assign.test | 10 | 0.001038s | 0.001042s | 0.001020s | byte equality observed |
| mp_assign_2.test | 10 | 0.000469s | 0.000477s | 0.001023s | byte equality observed |
| mp_at.test | 10 | 0.001028s | 0.001042s | 0.001035s | byte equality observed |
| mp_at_2.test | 10 | 0.000468s | 0.000466s | 0.001054s | byte equality observed |
| mp_at_sf.test | 10 | 0.001091s | 0.001062s | 0.001037s | byte equality observed |
| mp_back.test | 10 | 0.001066s | 0.001055s | 0.001052s | byte equality observed |
| mp_back_2.test | 10 | 0.000464s | 0.000473s | 0.001019s | byte equality observed |
| mp_bind.test | 10 | 0.001049s | 0.001018s | 0.001028s | byte equality observed |
| mp_bind_back.test | 10 | 0.001039s | 0.001067s | 0.001041s | byte equality observed |
| mp_bind_front.test | 10 | 0.001038s | 0.001055s | 0.001020s | byte equality observed |
| mp_bind_q.test | 10 | 0.001017s | 0.001034s | 0.001008s | byte equality observed |
| mp_clear.test | 10 | 0.001037s | 0.001044s | 0.001028s | byte equality observed |
| mp_clear_2.test | 10 | 0.000463s | 0.000452s | 0.000997s | byte equality observed |
| mp_compose.test | 10 | 0.001037s | 0.001011s | 0.001028s | byte equality observed |
| mp_cond.test | 10 | 0.001050s | 0.001017s | 0.001008s | byte equality observed |
| mp_cond_sf.test | 10 | 0.001022s | 0.001019s | 0.001008s | byte equality observed |
| mp_contains.test | 10 | 0.001047s | 0.001033s | 0.001004s | byte equality observed |
| mp_copy_if.test | 10 | 0.001042s | 0.001016s | 0.001031s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.001039s | 0.001055s | 0.001020s | byte equality observed |
| mp_count.test | 10 | 0.001016s | 0.001025s | 0.001010s | byte equality observed |
| mp_count_if.test | 10 | 0.001001s | 0.001047s | 0.001038s | byte equality observed |
| mp_count_if_q.test | 10 | 0.001049s | 0.001039s | 0.001046s | byte equality observed |
| mp_defer.test | 10 | 0.001037s | 0.001049s | 0.001029s | byte equality observed |
| mp_drop.test | 10 | 0.001057s | 0.001064s | 0.001021s | byte equality observed |
| mp_drop_2.test | 10 | 0.000461s | 0.000458s | 0.001007s | byte equality observed |
| mp_empty.test | 10 | 0.001035s | 0.001076s | 0.001061s | byte equality observed |
| mp_empty_2.test | 10 | 0.000460s | 0.000455s | 0.000975s | byte equality observed |
| mp_erase.test | 10 | 0.001051s | 0.001076s | 0.001018s | byte equality observed |
| mp_erase_2.test | 10 | 0.000472s | 0.000439s | 0.001010s | byte equality observed |
| mp_eval_if.test | 10 | 0.001050s | 0.001022s | 0.001037s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.001035s | 0.001018s | 0.001028s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.001065s | 0.001017s | 0.000996s | byte equality observed |
| mp_eval_or.test | 10 | 0.001042s | 0.001032s | 0.001020s | byte equality observed |
| mp_fill.test | 10 | 0.001048s | 0.001029s | 0.001029s | byte equality observed |
| mp_fill_2.test | 10 | 0.000463s | 0.000467s | 0.001031s | byte equality observed |
| mp_filter.test | 10 | 0.001057s | 0.001057s | 0.001024s | byte equality observed |
| mp_find.test | 10 | 0.001051s | 0.001061s | 0.001046s | byte equality observed |
| mp_find_if.test | 10 | 0.001010s | 0.001048s | 0.001084s | byte equality observed |
| mp_find_if_q.test | 10 | 0.001063s | 0.001046s | 0.001018s | byte equality observed |
| mp_flatten.test | 10 | 0.001058s | 0.001058s | 0.001070s | byte equality observed |
| mp_fold.test | 10 | 0.001065s | 0.001027s | 0.001044s | byte equality observed |
| mp_fold_q.test | 10 | 0.001029s | 0.001044s | 0.001053s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.001056s | 0.001023s | 0.001044s | byte equality observed |
| mp_for_each.test | 10 | 0.001061s | 0.001031s | 0.001004s | byte equality observed |
| mp_from_sequence.test | 10 | 0.001074s | 0.001063s | 0.001061s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.001013s | 0.001047s | 0.001017s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.001010s | 0.001020s | 0.001090s | byte equality observed |
| mp_front.test | 10 | 0.001028s | 0.001017s | 0.001011s | byte equality observed |
| mp_front_2.test | 10 | 0.000466s | 0.000474s | 0.001019s | byte equality observed |
| mp_identity.test | 10 | 0.001007s | 0.001055s | 0.001030s | byte equality observed |
| mp_if.test | 10 | 0.001039s | 0.001021s | 0.001025s | byte equality observed |
| mp_if_sf.test | 10 | 0.001031s | 0.001057s | 0.001044s | byte equality observed |
| mp_inherit.test | 10 | 0.001050s | 0.001069s | 0.001030s | byte equality observed |
| mp_insert.test | 10 | 0.001058s | 0.001074s | 0.001017s | byte equality observed |
| mp_insert_2.test | 10 | 0.000462s | 0.000445s | 0.001014s | byte equality observed |
| mp_intersperse.test | 10 | 0.001025s | 0.001048s | 0.001006s | byte equality observed |
| mp_invoke_q.test | 10 | 0.001030s | 0.001026s | 0.001021s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.001011s | 0.001070s | 0.001031s | byte equality observed |
| mp_iota.test | 10 | 0.001027s | 0.001067s | 0.001051s | byte equality observed |
| mp_iota_2.test | 10 | 0.001019s | 0.001052s | 0.001024s | byte equality observed |
| mp_is_list.test | 10 | 0.001042s | 0.001078s | 0.001022s | byte equality observed |
| mp_is_map.test | 10 | 0.001013s | 0.001023s | 0.001050s | byte equality observed |
| mp_is_set.test | 10 | 0.001048s | 0.001063s | 0.001009s | byte equality observed |
| mp_is_value_list.test | 10 | 0.001027s | 0.001041s | 0.001011s | byte equality observed |
| mp_iterate.test | 10 | 0.001050s | 0.001032s | 0.001037s | byte equality observed |
| mp_join.test | 10 | 0.001028s | 0.001054s | 0.001019s | byte equality observed |
| mp_lambda.test | 10 | 0.001036s | 0.001043s | 0.001035s | byte equality observed |
| mp_less.test | 10 | 0.001036s | 0.001027s | 0.001002s | byte equality observed |
| mp_list_c.test | 10 | 0.001031s | 0.001048s | 0.001077s | byte equality observed |
| mp_list_v.test | 10 | 0.000453s | 0.000450s | 0.001004s | byte equality observed |
| mp_map_contains.test | 10 | 0.001010s | 0.001016s | 0.001029s | byte equality observed |
| mp_map_erase.test | 10 | 0.001001s | 0.001055s | 0.001060s | byte equality observed |
| mp_map_find.test | 10 | 0.000982s | 0.001046s | 0.001063s | byte equality observed |
| mp_map_find_2.test | 10 | 0.001018s | 0.001017s | 0.001050s | byte equality observed |
| mp_map_find_3.test | 10 | 0.001036s | 0.001022s | 0.001032s | byte equality observed |
| mp_map_find_4.test | 10 | 0.001031s | 0.001005s | 0.001015s | byte equality observed |
| mp_map_insert.test | 10 | 0.001040s | 0.001034s | 0.000982s | byte equality observed |
| mp_map_keys.test | 10 | 0.001025s | 0.001005s | 0.001034s | byte equality observed |
| mp_map_replace.test | 10 | 0.001048s | 0.001013s | 0.001017s | byte equality observed |
| mp_map_update.test | 10 | 0.001056s | 0.001051s | 0.001046s | byte equality observed |
| mp_map_update_q.test | 10 | 0.001024s | 0.001051s | 0.001033s | byte equality observed |
| mp_max.test | 10 | 0.001038s | 0.001030s | 0.001028s | byte equality observed |
| mp_max_element.test | 10 | 0.001020s | 0.001054s | 0.001036s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000456s | 0.000470s | 0.000998s | byte equality observed |
| mp_max_element_q.test | 10 | 0.001033s | 0.001042s | 0.001008s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000455s | 0.000467s | 0.001030s | byte equality observed |
| mp_min.test | 10 | 0.001026s | 0.001062s | 0.001004s | byte equality observed |
| mp_min_element.test | 10 | 0.001011s | 0.001070s | 0.001023s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000464s | 0.000462s | 0.000974s | byte equality observed |
| mp_min_element_q.test | 10 | 0.001019s | 0.001054s | 0.001003s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000472s | 0.000469s | 0.000985s | byte equality observed |
| mp_none_of.test | 10 | 0.001025s | 0.001025s | 0.001069s | byte equality observed |
| mp_none_of_q.test | 10 | 0.001032s | 0.001034s | 0.001017s | byte equality observed |
| mp_not_fn.test | 10 | 0.001036s | 0.001027s | 0.001027s | byte equality observed |
| mp_nth_element.test | 10 | 0.001036s | 0.001029s | 0.001022s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.001036s | 0.001055s | 0.001026s | byte equality observed |
| mp_or.test | 10 | 0.001045s | 0.001066s | 0.001048s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.001062s | 0.001076s | 0.001020s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.001020s | 0.001016s | 0.001089s | byte equality observed |
| mp_partial_sum.test | 10 | 0.001054s | 0.001051s | 0.001068s | byte equality observed |
| mp_partition.test | 10 | 0.001009s | 0.001064s | 0.001031s | byte equality observed |
| mp_partition_q.test | 10 | 0.001014s | 0.001018s | 0.001016s | byte equality observed |
| mp_plus.test | 10 | 0.001011s | 0.001038s | 0.001050s | byte equality observed |
| mp_pop_back.test | 10 | 0.001065s | 0.001051s | 0.001021s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000456s | 0.000446s | 0.001029s | byte equality observed |
| mp_pop_front.test | 10 | 0.001043s | 0.001043s | 0.001014s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000464s | 0.000451s | 0.001012s | byte equality observed |
| mp_power_set.test | 10 | 0.001020s | 0.001046s | 0.001002s | byte equality observed |
| mp_product.test | 10 | 0.001013s | 0.001028s | 0.001029s | byte equality observed |
| mp_push_back.test | 10 | 0.001029s | 0.001019s | 0.001009s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000459s | 0.000449s | 0.001019s | byte equality observed |
| mp_push_front.test | 10 | 0.001042s | 0.001066s | 0.001030s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000452s | 0.000457s | 0.001012s | byte equality observed |
| mp_quote.test | 10 | 0.000988s | 0.001063s | 0.001004s | byte equality observed |
| mp_quote_trait.test | 10 | 0.001015s | 0.001062s | 0.001036s | byte equality observed |
| mp_remove.test | 10 | 0.001014s | 0.001056s | 0.000992s | byte equality observed |
| mp_remove_if.test | 10 | 0.001027s | 0.001039s | 0.001052s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.001036s | 0.001066s | 0.001016s | byte equality observed |
| mp_rename.test | 10 | 0.001044s | 0.001051s | 0.001021s | byte equality observed |
| mp_rename_2.test | 10 | 0.000447s | 0.000454s | 0.001003s | byte equality observed |
| mp_rename_v.test | 10 | 0.000456s | 0.000444s | 0.001001s | byte equality observed |
| mp_repeat.test | 10 | 0.001039s | 0.001057s | 0.001016s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000447s | 0.000451s | 0.001008s | byte equality observed |
| mp_repeat_3.test | 10 | 0.001036s | 0.001010s | 0.001017s | byte equality observed |
| mp_replace.test | 10 | 0.001053s | 0.001026s | 0.000988s | byte equality observed |
| mp_replace_at.test | 10 | 0.001035s | 0.001028s | 0.001044s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.001070s | 0.001025s | 0.001049s | byte equality observed |
| mp_replace_front.test | 10 | 0.001016s | 0.001041s | 0.001007s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000458s | 0.000460s | 0.001017s | byte equality observed |
| mp_replace_if.test | 10 | 0.001032s | 0.001023s | 0.001058s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.001042s | 0.001047s | 0.001038s | byte equality observed |
| mp_replace_second.test | 10 | 0.001033s | 0.001041s | 0.001008s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000464s | 0.000459s | 0.001000s | byte equality observed |
| mp_replace_third.test | 10 | 0.001045s | 0.001027s | 0.001035s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000451s | 0.000450s | 0.001039s | byte equality observed |
| mp_reverse.test | 10 | 0.001049s | 0.001029s | 0.001031s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.001071s | 0.001079s | 0.001035s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.001024s | 0.001037s | 0.001031s | byte equality observed |
| mp_rotate_left.test | 10 | 0.001027s | 0.001033s | 0.001020s | byte equality observed |
| mp_rotate_right.test | 10 | 0.001060s | 0.001070s | 0.001033s | byte equality observed |
| mp_same.test | 10 | 0.001033s | 0.001014s | 0.001027s | byte equality observed |
| mp_second.test | 10 | 0.001019s | 0.001025s | 0.001020s | byte equality observed |
| mp_second_2.test | 10 | 0.000459s | 0.000438s | 0.001026s | byte equality observed |
| mp_set_contains.test | 10 | 0.001016s | 0.001036s | 0.001024s | byte equality observed |
| mp_set_difference.test | 10 | 0.001028s | 0.001013s | 0.001009s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.001005s | 0.001043s | 0.000996s | byte equality observed |
| mp_set_intersection.test | 10 | 0.001044s | 0.001058s | 0.001036s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.001020s | 0.001031s | 0.001033s | byte equality observed |
| mp_set_push_back.test | 10 | 0.001027s | 0.001069s | 0.001018s | byte equality observed |
| mp_set_push_front.test | 10 | 0.001035s | 0.001035s | 0.001028s | byte equality observed |
| mp_set_union.test | 10 | 0.001040s | 0.001040s | 0.001047s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.001018s | 0.001072s | 0.001038s | byte equality observed |
| mp_similar.test | 10 | 0.001041s | 0.001019s | 0.001030s | byte equality observed |
| mp_size.test | 10 | 0.001037s | 0.001049s | 0.001025s | byte equality observed |
| mp_size_2.test | 10 | 0.000453s | 0.000451s | 0.001005s | byte equality observed |
| mp_slice.test | 10 | 0.001052s | 0.001065s | 0.001000s | byte equality observed |
| mp_slice_2.test | 10 | 0.000453s | 0.000471s | 0.001008s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.001052s | 0.001077s | 0.001036s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.001051s | 0.001042s | 0.001000s | byte equality observed |
| mp_sort.test | 10 | 0.001002s | 0.001013s | 0.001008s | byte equality observed |
| mp_sort_q.test | 10 | 0.001046s | 0.001045s | 0.001021s | byte equality observed |
| mp_split.test | 10 | 0.001041s | 0.001033s | 0.001040s | byte equality observed |
| mp_starts_with.test | 10 | 0.001060s | 0.001079s | 0.001018s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.001031s | 0.001027s | 0.001008s | byte equality observed |
| mp_take.test | 10 | 0.001047s | 0.001044s | 0.001021s | byte equality observed |
| mp_take_2.test | 10 | 0.000449s | 0.000475s | 0.000989s | byte equality observed |
| mp_third.test | 10 | 0.001020s | 0.001030s | 0.001008s | byte equality observed |
| mp_third_2.test | 10 | 0.000459s | 0.000444s | 0.001001s | byte equality observed |
| mp_transform.test | 10 | 0.001041s | 0.001028s | 0.001026s | byte equality observed |
| mp_transform_2.test | 10 | 0.000978s | 0.000991s | 0.001004s | byte equality observed |
| mp_transform_front.test | 10 | 0.001044s | 0.001035s | 0.001022s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000465s | 0.000454s | 0.001011s | byte equality observed |
| mp_transform_if.test | 10 | 0.001008s | 0.001043s | 0.001022s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.001064s | 0.001032s | 0.001032s | byte equality observed |
| mp_transform_q.test | 10 | 0.001021s | 0.001046s | 0.001014s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.001034s | 0.001024s | 0.001026s | byte equality observed |
| mp_transform_second.test | 10 | 0.001033s | 0.001041s | 0.001004s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000461s | 0.000448s | 0.000986s | byte equality observed |
| mp_transform_sf.test | 10 | 0.001034s | 0.001039s | 0.001024s | byte equality observed |
| mp_transform_third.test | 10 | 0.001024s | 0.000999s | 0.001037s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000450s | 0.000462s | 0.000981s | byte equality observed |
| mp_unique.test | 10 | 0.001021s | 0.001038s | 0.001025s | byte equality observed |
| mp_unique_if.test | 10 | 0.001055s | 0.001053s | 0.001041s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.001031s | 0.001018s | 0.001053s | byte equality observed |
| mp_valid.test | 10 | 0.001010s | 0.001022s | 0.001055s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.001014s | 0.001048s | 0.001023s | byte equality observed |
| mp_value.test | 10 | 0.000460s | 0.000463s | 0.000989s | byte equality observed |
| mp_with_index.test | 10 | 0.001420s | 0.001373s | 0.001281s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000445s | 0.000450s | 0.001011s | byte equality observed |
| mpl.test | 10 | 0.001043s | 0.001032s | 0.001016s | byte equality observed |
| mpl_list.test | 10 | 0.001033s | 0.001025s | 0.001076s | byte equality observed |
| mpl_tuple.test | 10 | 0.001020s | 0.001058s | 0.001042s | byte equality observed |
| mpl_version.test | 10 | 0.001038s | 0.001039s | 0.001001s | byte equality observed |
| set_version.test | 10 | 0.001025s | 0.001056s | 0.000993s | byte equality observed |
| tuple_apply.test | 10 | 0.001051s | 0.001019s | 0.001036s | byte equality observed |
| tuple_for_each.test | 10 | 0.001041s | 0.001047s | 0.001045s | byte equality observed |
| tuple_transform.test | 10 | 0.001033s | 0.001066s | 0.001011s | byte equality observed |
| tuple_transform_2.test | 10 | 0.001026s | 0.001045s | 0.001005s | byte equality observed |
| tuple_version.test | 10 | 0.001009s | 0.000998s | 0.001014s | byte equality observed |
| utility_version.test | 10 | 0.001014s | 0.001028s | 0.000991s | byte equality observed |
| version.test | 10 | 0.001036s | 0.001025s | 0.001042s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45754596224).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
