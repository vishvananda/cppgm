# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.029817 | 0.058281 | 0.077405 | — | — | — |
| complex_h.test | COMPILE | 0.116698 | 0.252351 | 0.310388 | — | — | — |
| mp_size.test | RUN | 0.136143 | 0.800838 | 0.406686 | 0.001591 | 0.001949 | 0.001550 |
| mp_size_2.test | RUN | 0.012923 | 0.030384 | 0.040182 | 0.000609 | 0.000772 | 0.001516 |
| mp_empty.test | RUN | 0.134948 | 0.486630 | 0.377784 | 0.001542 | 0.001861 | 0.001408 |
| mp_empty_2.test | RUN | 0.013935 | 0.032143 | 0.042389 | 0.000510 | 0.000824 | 0.001472 |
| mp_assign.test | RUN | 0.149833 | 1.058467 | 0.497775 | 0.001419 | 0.001554 | 0.001455 |
| mp_assign_2.test | RUN | 0.012690 | 0.031849 | 0.041287 | 0.000603 | 0.000781 | 0.001330 |
| mp_clear.test | RUN | 0.132921 | 0.460795 | 0.372711 | 0.001321 | 0.001683 | 0.001240 |
| mp_clear_2.test | RUN | 0.013897 | 0.032999 | 0.042588 | 0.000583 | 0.000782 | 0.001445 |
| mp_front.test | RUN | 0.137609 | 0.748922 | 0.431738 | 0.001438 | 0.001849 | 0.001487 |
| mp_front_2.test | RUN | 0.012899 | 0.033885 | 0.039307 | 0.000558 | 0.000739 | 0.001380 |
| mp_pop_front.test | RUN | 0.138942 | 0.770891 | 0.440996 | 0.001533 | 0.001578 | 0.001476 |
| mp_pop_front_2.test | RUN | 0.013393 | 0.031953 | 0.039864 | 0.000512 | 0.000634 | 0.001325 |
| mp_second.test | RUN | 0.130972 | 0.497694 | 0.400619 | 0.001309 | 0.001752 | 0.001753 |
| mp_second_2.test | RUN | 0.014062 | 0.032018 | 0.042043 | 0.000697 | 0.000806 | 0.001582 |
| mp_third.test | RUN | 0.138133 | 0.468628 | 0.398149 | 0.001544 | 0.001867 | 0.001515 |
| mp_third_2.test | RUN | 0.013995 | 0.032125 | 0.044077 | 0.000719 | 0.000759 | 0.001326 |
| mp_push_front.test | RUN | 0.176036 | 1.622001 | 0.753193 | 0.001644 | 0.001804 | 0.001611 |
| mp_push_front_2.test | RUN | 0.014664 | 0.031909 | 0.040234 | 0.000648 | 0.000657 | 0.001556 |
| mp_push_back.test | RUN | 0.183341 | 1.639473 | 0.745718 | 0.001622 | 0.001908 | 0.001684 |
| mp_push_back_2.test | RUN | 0.013306 | 0.032788 | 0.041152 | 0.000741 | 0.000800 | 0.001571 |
| mp_rename.test | RUN | 0.164148 | 1.520222 | 0.610458 | 0.001667 | 0.001912 | 0.001671 |
| mp_rename_2.test | RUN | 0.014456 | 0.033170 | 0.042951 | 0.000531 | 0.000807 | 0.001592 |
| mp_append.test | RUN | 0.181991 | 1.724720 | 0.702186 | 0.001740 | 0.001610 | 0.001521 |
| mp_append_2.test | RUN | 0.357133 | 3.823212 | 0.934231 | 0.001615 | 0.001892 | 0.001604 |
| mp_append_3.test | RUN | 0.014035 | 0.031309 | 0.045053 | 0.000746 | 0.000770 | 0.001640 |
| mp_append_sf.test | RUN | 0.133146 | 0.419360 | 0.382791 | 0.001736 | 0.001742 | 0.001575 |
| mp_replace_front.test | RUN | 0.167896 | 1.189965 | 0.584431 | 0.001532 | 0.001862 | 0.001336 |
| mp_replace_front_2.test | RUN | 0.013387 | 0.033705 | 0.040810 | 0.000505 | 0.000799 | 0.001517 |
| mp_replace_second.test | RUN | 0.156692 | 0.799809 | 0.495268 | 0.001591 | 0.001774 | 0.001653 |
| mp_replace_second_2.test | RUN | 0.013338 | 0.032655 | 0.041563 | 0.000554 | 0.000800 | 0.001328 |
| mp_replace_third.test | RUN | 0.146299 | 0.635140 | 0.492013 | 0.001566 | 0.001957 | 0.001663 |
| mp_replace_third_2.test | RUN | 0.013494 | 0.033614 | 0.042502 | 0.000586 | 0.000628 | 0.001540 |
| mp_apply_q.test | RUN | 0.163409 | 1.495706 | 0.645681 | 0.001822 | 0.001871 | 0.001529 |
| mp_apply_q_sf.test | RUN | 0.143036 | 0.425697 | 0.414460 | 0.001525 | 0.001960 | 0.001256 |
| mp_is_list.test | RUN | 0.141221 | 0.511993 | 0.435951 | 0.001481 | 0.001821 | 0.001405 |
| mp_list_c.test | RUN | 0.153508 | 0.612126 | 0.444751 | 0.001752 | 0.001746 | 0.001608 |
| mp_transform_front.test | RUN | 0.165354 | 1.218667 | 0.533223 | 0.001640 | 0.001649 | 0.001524 |
| mp_transform_front_2.test | RUN | 0.013403 | 0.033249 | 0.044166 | 0.000549 | 0.000838 | 0.001630 |
| mp_transform_second.test | RUN | 0.157205 | 1.049466 | 0.511000 | 0.001508 | 0.001966 | 0.001469 |
| mp_transform_second_2.test | RUN | 0.014163 | 0.033437 | 0.044692 | 0.000746 | 0.000765 | 0.001525 |
| mp_transform_third.test | RUN | 0.152376 | 0.791877 | 0.462757 | 0.001604 | 0.001581 | 0.001615 |
| mp_transform_third_2.test | RUN | 0.013501 | 0.032670 | 0.041210 | 0.000607 | 0.000771 | 0.001366 |
| mp_list_v.test | RUN | 0.013256 | 0.032302 | 0.042195 | 0.000586 | 0.000749 | 0.001312 |
| mp_rename_v.test | RUN | 0.014354 | 0.033088 | 0.041945 | 0.000579 | 0.000613 | 0.001386 |
| mp_is_value_list.test | RUN | 0.131319 | 0.316333 | 0.386005 | 0.001890 | 0.001874 | 0.001542 |
| mp_transform.test | RUN | 0.289598 | 2.532905 | 1.174084 | 0.001883 | 0.001830 | 0.001556 |
| mp_transform_2.test | RUN | 0.130424 | 0.284615 | 0.338134 | 0.001727 | 0.001896 | 0.001625 |
| mp_transform_q.test | RUN | 0.292087 | 2.428383 | 1.128902 | 0.001806 | 0.001652 | 0.001602 |
| mp_transform_q_2.test | RUN | 0.362932 | 0.786950 | 1.477525 | 0.001760 | 0.001838 | 0.001426 |
| mp_transform_sf.test | RUN | 0.182118 | 0.450762 | 0.396995 | 0.001726 | 0.001692 | 0.001690 |
| mp_transform_if.test | RUN | 0.176889 | 1.199047 | 0.641020 | 0.001718 | 0.001640 | 0.001536 |
| mp_transform_if_q.test | RUN | 0.176752 | 1.220006 | 0.657574 | 0.001635 | 0.001904 | 0.001673 |
| mp_filter.test | RUN | 0.157270 | 0.748006 | 0.471182 | 0.001753 | 0.001922 | 0.001264 |
| mp_fill.test | RUN | 0.147670 | 0.571790 | 0.439968 | 0.001727 | 0.001556 | 0.001618 |
| mp_fill_2.test | RUN | 0.023331 | 0.048542 | 0.064714 | 0.000785 | 0.000831 | 0.001552 |
| mp_count.test | RUN | 0.298940 | 1.359631 | 0.694667 | 0.001422 | 0.001825 | 0.001259 |
| mp_count_if.test | RUN | 0.305264 | 1.383952 | 0.756141 | 0.001698 | 0.001531 | 0.001610 |
| mp_count_if_q.test | RUN | 0.154414 | 0.909233 | 0.430706 | 0.001633 | 0.001897 | 0.001420 |
| mp_contains.test | RUN | 0.152867 | 0.584175 | 0.408733 | 0.001405 | 0.001822 | 0.001721 |
| mp_starts_with.test | RUN | 0.145840 | 0.528491 | 0.430032 | 0.001542 | 0.001811 | 0.001328 |
| mp_starts_with_sf.test | RUN | 0.144868 | 0.447915 | 0.410528 | 0.001496 | 0.001915 | 0.001254 |
| mp_repeat.test | RUN | 0.203564 | 2.197449 | 0.811229 | 0.001621 | 0.001942 | 0.001755 |
| mp_repeat_2.test | RUN | 0.025021 | 0.046787 | 0.068287 | 0.000596 | 0.000849 | 0.001490 |
| mp_repeat_3.test | RUN | 0.183072 | 0.280713 | 0.436557 | 0.001458 | 0.001904 | 0.001591 |
| mp_product.test | RUN | 0.164990 | 1.360708 | 0.622441 | 0.001417 | 0.001949 | 0.001466 |
| mp_drop.test | RUN | 0.183819 | 1.673660 | 0.688956 | 0.001532 | 0.001685 | 0.001314 |
| mp_drop_2.test | RUN | 0.026046 | 0.049439 | 0.069890 | 0.000696 | 0.000824 | 0.001574 |
| mp_iota.test | RUN | 0.168123 | 1.472322 | 0.595596 | 0.001738 | 0.001976 | 0.001637 |
| mp_iota_2.test | RUN | 0.178887 | 1.718638 | 0.688400 | 0.001430 | 0.001690 | 0.001761 |
| mp_at.test | RUN | 0.149317 | 0.741182 | 0.467340 | 0.001394 | 0.001642 | 0.001671 |
| mp_at_2.test | RUN | 0.023249 | 0.049192 | 0.065742 | 0.000634 | 0.000663 | 0.001487 |
| mp_at_sf.test | RUN | 0.146480 | 0.468074 | 0.409773 | 0.001556 | 0.001853 | 0.001387 |
| mp_take.test | RUN | 0.263817 | 2.166108 | 0.807137 | 0.001570 | 0.001738 | 0.001646 |
| mp_take_2.test | RUN | 0.025911 | 0.052221 | 0.065342 | 0.000699 | 0.000822 | 0.001325 |
| mp_slice.test | RUN | 0.293264 | 2.236676 | 1.042393 | 0.001699 | 0.001838 | 0.001624 |
| mp_slice_2.test | RUN | 0.024444 | 0.050739 | 0.063271 | 0.000597 | 0.000819 | 0.001681 |
| mp_replace.test | RUN | 0.188751 | 1.136183 | 0.634878 | 0.001615 | 0.001795 | 0.001702 |
| mp_replace_if.test | RUN | 0.168847 | 1.011763 | 0.597606 | 0.001452 | 0.001754 | 0.001688 |
| mp_replace_if_q.test | RUN | 0.166511 | 0.988227 | 0.599514 | 0.001494 | 0.001962 | 0.001711 |
| mp_copy_if.test | RUN | 0.166280 | 1.418893 | 0.560018 | 0.001522 | 0.001772 | 0.001696 |
| mp_copy_if_q.test | RUN | 0.167747 | 1.409684 | 0.581867 | 0.001669 | 0.001652 | 0.001592 |
| mp_remove.test | RUN | 0.170708 | 0.933641 | 0.601510 | 0.001550 | 0.001900 | 0.001708 |
| mp_remove_if.test | RUN | 0.171187 | 1.557964 | 0.619093 | 0.001328 | 0.001828 | 0.001660 |
| mp_remove_if_q.test | RUN | 0.172129 | 1.540173 | 0.618559 | 0.003860 | 0.001882 | 0.001749 |
| mp_partition.test | RUN | 0.182568 | 1.407675 | 0.655675 | 0.001996 | 0.001922 | 0.001726 |
| mp_partition_q.test | RUN | 0.230374 | 1.415783 | 0.695128 | 0.001171 | 0.001708 | 0.001840 |
| mp_sort.test | RUN | 0.206297 | 0.993015 | 0.636578 | 0.001633 | 0.001964 | 0.001362 |
| mp_sort_q.test | RUN | 0.179586 | 0.985756 | 0.587372 | 0.001719 | 0.001886 | 0.001630 |
| mp_find.test | RUN | 0.171290 | 1.048212 | 0.522194 | 0.001728 | 0.001976 | 0.001564 |
| mp_find_if.test | RUN | 0.168259 | 0.974146 | 0.454568 | 0.001634 | 0.001575 | 0.001692 |
| mp_find_if_q.test | RUN | 0.175644 | 1.111830 | 0.537941 | 0.001668 | 0.001784 | 0.001666 |
| mp_reverse.test | RUN | 0.314439 | 2.899982 | 1.144757 | 0.001947 | 0.001962 | 0.001407 |
| mp_fold.test | RUN | 0.557903 | 2.318242 | 2.983147 | 0.001816 | 0.001907 | 0.001648 |
| mp_fold_q.test | RUN | 0.158553 | 0.991512 | 0.574059 | 0.001353 | 0.001845 | 0.001604 |
| mp_fold_q_sf.test | RUN | 0.144927 | 0.469595 | 0.447370 | 0.001647 | 0.001900 | 0.001571 |
| mp_reverse_fold.test | RUN | 0.263462 | 2.196116 | 0.791113 | 0.001460 | 0.001807 | 0.001352 |
| mp_reverse_fold_q.test | RUN | 0.174947 | 1.191095 | 0.592678 | 0.001483 | 0.001776 | 0.001447 |
| mp_unique.test | RUN | 0.172559 | 1.134920 | 0.561468 | 0.001644 | 0.001802 | 0.001373 |
| mp_unique_if.test | RUN | 0.289952 | 2.355465 | 0.887827 | 0.001730 | 0.002028 | 0.001506 |
| mp_unique_if_q.test | RUN | 0.259093 | 2.317334 | 0.781958 | 0.001740 | 0.001831 | 0.001510 |
| mp_all_of.test | RUN | 0.419857 | 1.278800 | 0.959838 | 0.001728 | 0.001974 | 0.001323 |
| mp_all_of_q.test | RUN | 0.161327 | 0.537940 | 0.419328 | 0.002104 | 0.001876 | 0.001647 |
| mp_any_of.test | RUN | 0.398113 | 1.290972 | 0.931957 | 0.001555 | 0.002002 | 0.001446 |
| mp_any_of_q.test | RUN | 0.148555 | 0.540337 | 0.412221 | 0.001822 | 0.001924 | 0.001602 |
| mp_none_of.test | RUN | 0.402905 | 1.305747 | 0.926610 | 0.001528 | 0.001960 | 0.001661 |
| mp_none_of_q.test | RUN | 0.150376 | 0.537111 | 0.389357 | 0.001849 | 0.001901 | 0.001610 |
| mp_replace_at.test | RUN | 0.182942 | 1.070549 | 0.624055 | 0.001878 | 0.001766 | 0.001555 |
| mp_replace_at_c.test | RUN | 0.176973 | 1.073357 | 0.611626 | 0.001531 | 0.002011 | 0.001248 |
| mp_for_each.test | RUN | 0.170919 | 0.735889 | 0.680774 | 0.001546 | 0.001778 | 0.001582 |
| mp_insert.test | RUN | 0.263084 | 2.182729 | 0.898787 | 0.001876 | 0.001785 | 0.001499 |
| mp_insert_2.test | RUN | 0.024737 | 0.050245 | 0.068603 | 0.000644 | 0.000616 | 0.001262 |
| mp_erase.test | RUN | 0.276390 | 2.347699 | 1.037088 | 0.001930 | 0.001892 | 0.001648 |
| mp_erase_2.test | RUN | 0.024021 | 0.047446 | 0.066777 | 0.000585 | 0.000821 | 0.001644 |
| mp_with_index.test | RUN | 0.367689 | 4.787318 | 2.248835 | 0.002138 | 0.002493 | 0.001910 |
| mp_with_index_cx.test | RUN | 0.003918 | 0.017567 | 0.024238 | 0.000582 | 0.000812 | 0.001401 |
| mp_from_sequence.test | RUN | 0.178587 | 1.243877 | 0.621839 | 0.001678 | 0.001750 | 0.001639 |
| mp_from_sequence_2.test | RUN | 0.188541 | 1.426227 | 0.666039 | 0.001665 | 0.001970 | 0.001496 |
| mp_from_sequence_3.test | RUN | 0.152563 | 0.653666 | 0.461299 | 0.001538 | 0.001957 | 0.001662 |
| mp_min_element.test | RUN | 0.151567 | 0.599328 | 0.434922 | 0.001750 | 0.001868 | 0.001385 |
| mp_min_element_2.test | RUN | 0.023532 | 0.049095 | 0.061875 | 0.000730 | 0.000802 | 0.001560 |
| mp_min_element_q.test | RUN | 0.154415 | 0.603363 | 0.444407 | 0.001504 | 0.001967 | 0.001576 |
| mp_min_element_q_2.test | RUN | 0.024962 | 0.047282 | 0.060300 | 0.000573 | 0.000782 | 0.001556 |
| mp_max_element.test | RUN | 0.155246 | 0.574820 | 0.408758 | 0.001544 | 0.001643 | 0.001445 |
| mp_max_element_2.test | RUN | 0.025186 | 0.050562 | 0.064317 | 0.000632 | 0.000751 | 0.001344 |
| mp_max_element_q.test | RUN | 0.156372 | 0.594052 | 0.426237 | 0.001734 | 0.001855 | 0.001590 |
| mp_max_element_q_2.test | RUN | 0.024696 | 0.050068 | 0.065741 | 0.000791 | 0.000769 | 0.001250 |
| mp_nth_element.test | RUN | 0.170697 | 0.818881 | 0.514375 | 0.001543 | 0.001974 | 0.001362 |
| mp_nth_element_q.test | RUN | 0.170819 | 0.828979 | 0.528240 | 0.001480 | 0.001726 | 0.001323 |
| mp_back.test | RUN | 0.169289 | 0.674585 | 0.500884 | 0.001502 | 0.001663 | 0.001172 |
| mp_back_2.test | RUN | 0.024230 | 0.049939 | 0.067466 | 0.000604 | 0.000601 | 0.001253 |
| mp_pop_back.test | RUN | 0.404293 | 4.436144 | 1.047680 | 0.001580 | 0.001657 | 0.001458 |
| mp_pop_back_2.test | RUN | 0.023052 | 0.047626 | 0.062913 | 0.000748 | 0.000816 | 0.001600 |
| mp_flatten.test | RUN | 0.192426 | 1.546769 | 0.686662 | 0.001737 | 0.001930 | 0.001422 |
| mp_rotate_left.test | RUN | 0.183843 | 1.670421 | 0.673844 | 0.001653 | 0.001906 | 0.001525 |
| mp_rotate_right.test | RUN | 0.186173 | 1.673022 | 0.669624 | 0.001608 | 0.001946 | 0.001530 |
| mp_power_set.test | RUN | 0.191115 | 1.609303 | 0.675604 | 0.001810 | 0.002006 | 0.001203 |
| mp_partial_sum.test | RUN | 0.247067 | 2.164953 | 0.786081 | 0.001474 | 0.001725 | 0.001427 |
| mp_iterate.test | RUN | 0.173400 | 0.653708 | 0.547347 | 0.001522 | 0.001956 | 0.001572 |
| mp_pairwise_fold.test | RUN | 0.187195 | 1.491427 | 0.708382 | 0.001392 | 0.001978 | 0.001637 |
| mp_pairwise_fold_q.test | RUN | 0.149354 | 0.457266 | 0.406388 | 0.001755 | 0.001704 | 0.001608 |
| mp_sliding_fold.test | RUN | 0.373772 | 2.857874 | 1.356410 | 0.001466 | 0.001805 | 0.001610 |
| mp_sliding_fold_q.test | RUN | 0.362302 | 2.844896 | 1.340842 | 0.001739 | 0.001862 | 0.001354 |
| mp_intersperse.test | RUN | 0.217511 | 1.059132 | 0.614035 | 0.001680 | 0.001940 | 0.001512 |
| mp_split.test | RUN | 0.246312 | 2.033947 | 0.863803 | 0.001689 | 0.001896 | 0.001149 |
| mp_join.test | RUN | 0.194886 | 1.692426 | 0.775959 | 0.001762 | 0.001980 | 0.001630 |
| integral.test | RUN | 0.156653 | 0.765533 | 0.446907 | 0.001749 | 0.001938 | 0.001590 |
| mp_value.test | RUN | 0.010925 | 0.028585 | 0.035669 | 0.000828 | 0.000763 | 0.001578 |
| mp_identity.test | RUN | 0.155377 | 0.702269 | 0.437331 | 0.001708 | 0.001946 | 0.001358 |
| mp_inherit.test | RUN | 0.147191 | 0.490977 | 0.400258 | 0.002194 | 0.001854 | 0.001590 |
| mp_if.test | RUN | 0.153727 | 0.572115 | 0.400411 | 0.001650 | 0.001692 | 0.001544 |
| mp_if_sf.test | RUN | 0.139255 | 0.419910 | 0.360896 | 0.001562 | 0.001892 | 0.001461 |
| mp_eval_if.test | RUN | 0.149389 | 0.600363 | 0.397840 | 0.001791 | 0.001612 | 0.001525 |
| mp_eval_if_sf.test | RUN | 0.144882 | 0.419788 | 0.368275 | 0.001706 | 0.001826 | 0.001629 |
| mp_valid.test | RUN | 0.141419 | 0.437868 | 0.378617 | 0.001656 | 0.001554 | 0.001694 |
| mp_defer.test | RUN | 0.151533 | 0.724967 | 0.461918 | 0.001820 | 0.001931 | 0.001493 |
| mp_quote.test | RUN | 0.155450 | 0.726357 | 0.477782 | 0.001468 | 0.001902 | 0.001582 |
| mp_invoke_q.test | RUN | 0.164774 | 0.975845 | 0.535438 | 0.001659 | 0.001933 | 0.001698 |
| mp_invoke_q_sf.test | RUN | 0.139626 | 0.424318 | 0.381817 | 0.001544 | 0.001860 | 0.001554 |
| mp_quote_trait.test | RUN | 0.154598 | 0.818962 | 0.488455 | 0.001790 | 0.001744 | 0.001604 |
| mp_cond.test | RUN | 0.143641 | 0.498938 | 0.424785 | 0.001963 | 0.001778 | 0.001257 |
| mp_cond_sf.test | RUN | 0.142243 | 0.437736 | 0.415206 | 0.002010 | 0.001805 | 0.001442 |
| mp_not_fn.test | RUN | 0.140918 | 0.439224 | 0.400168 | 0.001613 | 0.001880 | 0.001348 |
| mp_eval_if_not.test | RUN | 0.178453 | 0.610296 | 0.431568 | 0.001870 | 0.001539 | 0.001307 |
| mp_eval_or.test | RUN | 0.140196 | 0.333348 | 0.399059 | 0.001645 | 0.001773 | 0.001523 |
| mp_compose.test | RUN | 0.156187 | 1.013891 | 0.526939 | 0.001634 | 0.002003 | 0.001542 |
| mp_valid_and_true.test | RUN | 0.142137 | 0.537728 | 0.419259 | 0.001454 | 0.001906 | 0.001505 |
| mp_compose_sf.test | COMPILE | 0.036469 | 0.058255 | 0.089953 | — | — | — |
| integer_sequence.test | RUN | 0.171790 | 1.000611 | 0.585623 | 0.001640 | 0.001641 | 0.001287 |
| tuple_for_each.test | RUN | 0.144703 | 0.387065 | 0.419978 | 0.001636 | 0.001625 | 0.001514 |
| tuple_for_each_cx.test | COMPILE | 0.027805 | 0.052765 | 0.071920 | — | — | — |
| tuple_apply.test | RUN | 0.156716 | 0.379591 | 0.396730 | 0.001938 | 0.001563 | 0.001414 |
| tuple_apply_cx.test | COMPILE | 0.042417 | 0.073555 | 0.097162 | — | — | — |
| construct_from_tuple.test | RUN | 0.154139 | 0.388436 | 0.397438 | 0.001700 | 0.001296 | 0.001432 |
| construct_from_tuple_cx.test | COMPILE | 0.042368 | 0.075291 | 0.095173 | — | — | — |
| tuple_transform.test | RUN | 0.235803 | 0.817915 | 0.807732 | 0.001879 | 0.001614 | 0.001543 |
| tuple_transform_2.test | RUN | 0.214454 | 0.589772 | 0.730206 | 0.001824 | 0.001548 | 0.001358 |
| tuple_transform_cx.test | COMPILE | 0.034842 | 0.071647 | 0.090697 | — | — | — |
| mp_set_contains.test | RUN | 0.159406 | 0.531832 | 0.410236 | 0.001621 | 0.001495 | 0.001242 |
| mp_set_push_back.test | RUN | 0.195711 | 1.602626 | 0.744716 | 0.001918 | 0.001954 | 0.001714 |
| mp_set_push_front.test | RUN | 0.242448 | 1.906281 | 0.853433 | 0.001837 | 0.001640 | 0.001177 |
| mp_is_set.test | RUN | 0.155333 | 0.516738 | 0.436678 | 0.001912 | 0.001882 | 0.001662 |
| mp_set_union.test | RUN | 0.184378 | 1.351051 | 0.712799 | 0.001595 | 0.001900 | 0.001387 |
| mp_set_union_sf.test | RUN | 0.148974 | 0.435827 | 0.411656 | 0.001502 | 0.001892 | 0.001508 |
| mp_set_difference.test | RUN | 0.173727 | 1.075464 | 0.595387 | 0.001657 | 0.001931 | 0.001605 |
| mp_set_difference_sf.test | RUN | 0.143408 | 0.439596 | 0.395211 | 0.001597 | 0.001693 | 0.001602 |
| mp_set_intersection.test | RUN | 0.165560 | 1.060355 | 0.558801 | 0.001480 | 0.001744 | 0.001612 |
| mp_set_intersection_sf.test | RUN | 0.146898 | 0.422599 | 0.398679 | 0.001871 | 0.001686 | 0.001462 |
| mp_all.test | RUN | 0.150610 | 0.534237 | 0.425209 | 0.001790 | 0.001557 | 0.001505 |
| mp_all_2.test | RUN | 0.410581 | 1.189869 | 0.988518 | 0.001844 | 0.001969 | 0.001502 |
| mp_and.test | RUN | 0.155004 | 0.505758 | 0.404276 | 0.001697 | 0.001686 | 0.001543 |
| mp_any.test | RUN | 0.158707 | 0.522399 | 0.419867 | 0.001980 | 0.001822 | 0.001718 |
| mp_any_2.test | RUN | 0.437208 | 1.187985 | 1.007099 | 0.001538 | 0.001768 | 0.001590 |
| mp_or.test | RUN | 0.150087 | 0.588364 | 0.460138 | 0.001805 | 0.001782 | 0.001549 |
| mp_same.test | RUN | 0.284996 | 0.950501 | 0.760072 | 0.001720 | 0.001966 | 0.001402 |
| mp_plus.test | RUN | 0.158440 | 0.637229 | 0.512982 | 0.001800 | 0.001766 | 0.001442 |
| mp_less.test | RUN | 0.149406 | 0.530311 | 0.417086 | 0.001949 | 0.001695 | 0.001286 |
| mp_min.test | RUN | 0.169334 | 0.489317 | 0.412308 | 0.001481 | 0.001992 | 0.001511 |
| mp_max.test | RUN | 0.172837 | 0.544863 | 0.420802 | 0.001852 | 0.001798 | 0.001348 |
| mp_similar.test | RUN | 0.149904 | 0.523629 | 0.420770 | 0.001918 | 0.001642 | 0.001720 |
| mp_map_find.test | RUN | 0.176701 | 0.979859 | 0.563953 | 0.002706 | 0.001604 | 0.001758 |
| mp_map_find_2.test | RUN | 0.188789 | 0.396259 | 0.481756 | 0.001844 | 0.001677 | 0.001678 |
| mp_map_find_3.test | RUN | 0.183984 | 0.395615 | 0.469361 | 0.001680 | 0.001648 | 0.001620 |
| mp_map_find_4.test | RUN | 0.174113 | 0.352989 | 0.446031 | 0.001516 | 0.001217 | 0.001677 |
| mp_map_contains.test | RUN | 0.156335 | 0.544511 | 0.434383 | 0.001888 | 0.001935 | 0.001715 |
| mp_map_insert.test | RUN | 0.190310 | 1.796437 | 0.814767 | 0.001713 | 0.001881 | 0.001479 |
| mp_map_replace.test | RUN | 0.244622 | 2.037607 | 0.952092 | 0.001760 | 0.001844 | 0.001376 |
| mp_map_erase.test | RUN | 0.188373 | 1.522806 | 0.780940 | 0.001680 | 0.001856 | 0.001370 |
| mp_map_update.test | RUN | 0.174265 | 1.009162 | 0.613378 | 0.001713 | 0.001866 | 0.001826 |
| mp_map_update_q.test | RUN | 0.169950 | 0.981732 | 0.603612 | 0.001838 | 0.001831 | 0.001554 |
| mp_map_keys.test | RUN | 0.171100 | 0.872210 | 0.572504 | 0.001326 | 0.001986 | 0.001713 |
| mp_is_map.test | RUN | 0.156687 | 0.541154 | 0.464602 | 0.001492 | 0.001846 | 0.001539 |
| mp_bind.test | RUN | 0.193183 | 1.596926 | 0.706373 | 0.001774 | 0.001121 | 0.001743 |
| mp_bind_q.test | RUN | 0.168784 | 0.981926 | 0.573675 | 0.001492 | 0.001894 | 0.001707 |
| mp_bind_front.test | RUN | 0.157368 | 1.098231 | 0.559984 | 0.001172 | 0.001512 | 0.001615 |
| mp_bind_back.test | RUN | 0.160888 | 1.089201 | 0.534558 | 0.001458 | 0.001970 | 0.001751 |
| mp_lambda.test | RUN | 0.344511 | 3.339141 | 1.492004 | 0.001964 | 0.001406 | 0.001521 |
| mpl.test | RUN | 0.313657 | 0.861864 | 1.160582 | 0.001776 | 0.001762 | 0.001372 |
| mpl_list.test | RUN | 0.182829 | 0.628207 | 0.548755 | 0.001500 | 0.001719 | 0.001740 |
| mpl_tuple.test | RUN | 0.184163 | 0.636349 | 0.541364 | 0.001370 | 0.001903 | 0.001724 |
| version.test | RUN | 0.096803 | 0.246842 | 0.293276 | 0.001802 | 0.001930 | 0.001575 |
| mp11_version.test | RUN | 0.120692 | 0.266452 | 0.302746 | 0.001402 | 0.001820 | 0.001500 |
| list_version.test | RUN | 0.099361 | 0.248852 | 0.278804 | 0.001730 | 0.001791 | 0.001732 |
| algorithm_version.test | RUN | 0.112240 | 0.255656 | 0.300921 | 0.001789 | 0.001710 | 0.001765 |
| integral_version.test | RUN | 0.094679 | 0.235809 | 0.275337 | 0.001668 | 0.001540 | 0.001305 |
| utility_version.test | RUN | 0.097704 | 0.249518 | 0.259962 | 0.001726 | 0.001912 | 0.001482 |
| function_version.test | RUN | 0.101973 | 0.238339 | 0.280998 | 0.001336 | 0.001703 | 0.001576 |
| map_version.test | RUN | 0.110283 | 0.255326 | 0.303140 | 0.001773 | 0.001741 | 0.001595 |
| set_version.test | RUN | 0.097651 | 0.259031 | 0.269409 | 0.001892 | 0.001929 | 0.001512 |
| bind_version.test | RUN | 0.105786 | 0.252875 | 0.299410 | 0.001512 | 0.001900 | 0.001427 |
| integer_sequence_version.test | RUN | 0.092506 | 0.244886 | 0.295016 | 0.001795 | 0.001896 | 0.001488 |
| tuple_version.test | RUN | 0.113625 | 0.253086 | 0.263265 | 0.001461 | 0.001846 | 0.001397 |
| mpl_version.test | RUN | 0.085443 | 0.221388 | 0.294128 | 0.001476 | 0.001473 | 0.001219 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.996× | 1.010×, 0.982× | 0.979× |
| clang | 1.102× | 1.096×, 1.107× | 1.012× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45790989032).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000854s | 0.000862s | 0.000919s | byte equality observed |
| bind_version.test | 10 | 0.000850s | 0.000849s | 0.000928s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000860s | 0.000859s | 0.000925s | byte equality observed |
| function_version.test | 10 | 0.000854s | 0.000853s | 0.000917s | byte equality observed |
| integer_sequence.test | 10 | 0.000859s | 0.000878s | 0.000917s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000882s | 0.000883s | 0.000918s | byte equality observed |
| integral.test | 10 | 0.000900s | 0.000886s | 0.000919s | byte equality observed |
| integral_version.test | 10 | 0.000893s | 0.000879s | 0.000910s | byte equality observed |
| list_version.test | 10 | 0.000883s | 0.000898s | 0.000905s | byte equality observed |
| map_version.test | 10 | 0.000902s | 0.000908s | 0.000908s | byte equality observed |
| mp11_version.test | 10 | 0.000909s | 0.000889s | 0.000932s | byte equality observed |
| mp_all.test | 10 | 0.000888s | 0.000929s | 0.000919s | byte equality observed |
| mp_all_2.test | 10 | 0.000896s | 0.000902s | 0.000898s | byte equality observed |
| mp_all_of.test | 10 | 0.000889s | 0.000910s | 0.000915s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000893s | 0.000910s | 0.000918s | byte equality observed |
| mp_and.test | 10 | 0.000904s | 0.000913s | 0.000937s | byte equality observed |
| mp_any.test | 10 | 0.000904s | 0.000907s | 0.000935s | byte equality observed |
| mp_any_2.test | 10 | 0.000902s | 0.000892s | 0.000929s | byte equality observed |
| mp_any_of.test | 10 | 0.000894s | 0.000912s | 0.000932s | byte equality observed |
| mp_any_of_q.test | 10 | 0.000897s | 0.000902s | 0.000922s | byte equality observed |
| mp_append.test | 10 | 0.000886s | 0.000904s | 0.000917s | byte equality observed |
| mp_append_2.test | 10 | 0.000917s | 0.000919s | 0.000933s | byte equality observed |
| mp_append_3.test | 10 | 0.000408s | 0.000408s | 0.000922s | byte equality observed |
| mp_append_sf.test | 10 | 0.000886s | 0.000896s | 0.000918s | byte equality observed |
| mp_apply_q.test | 10 | 0.000887s | 0.000883s | 0.000948s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.000892s | 0.000903s | 0.000920s | byte equality observed |
| mp_assign.test | 10 | 0.000901s | 0.000900s | 0.000907s | byte equality observed |
| mp_assign_2.test | 10 | 0.000418s | 0.000394s | 0.000885s | byte equality observed |
| mp_at.test | 10 | 0.000908s | 0.000906s | 0.000938s | byte equality observed |
| mp_at_2.test | 10 | 0.000402s | 0.000400s | 0.000891s | byte equality observed |
| mp_at_sf.test | 10 | 0.000890s | 0.000892s | 0.000910s | byte equality observed |
| mp_back.test | 10 | 0.000902s | 0.000886s | 0.000912s | byte equality observed |
| mp_back_2.test | 10 | 0.000407s | 0.000416s | 0.000886s | byte equality observed |
| mp_bind.test | 10 | 0.000887s | 0.000901s | 0.000921s | byte equality observed |
| mp_bind_back.test | 10 | 0.000878s | 0.000892s | 0.000922s | byte equality observed |
| mp_bind_front.test | 10 | 0.000881s | 0.000895s | 0.000931s | byte equality observed |
| mp_bind_q.test | 10 | 0.000885s | 0.000891s | 0.000926s | byte equality observed |
| mp_clear.test | 10 | 0.000899s | 0.000898s | 0.000928s | byte equality observed |
| mp_clear_2.test | 10 | 0.000395s | 0.000403s | 0.000908s | byte equality observed |
| mp_compose.test | 10 | 0.000905s | 0.000889s | 0.000924s | byte equality observed |
| mp_cond.test | 10 | 0.000907s | 0.000872s | 0.000926s | byte equality observed |
| mp_cond_sf.test | 10 | 0.000898s | 0.000892s | 0.000906s | byte equality observed |
| mp_contains.test | 10 | 0.000875s | 0.000876s | 0.000908s | byte equality observed |
| mp_copy_if.test | 10 | 0.000875s | 0.000881s | 0.000901s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.000875s | 0.000869s | 0.000915s | byte equality observed |
| mp_count.test | 10 | 0.000880s | 0.000876s | 0.000939s | byte equality observed |
| mp_count_if.test | 10 | 0.000880s | 0.000885s | 0.000928s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000881s | 0.000882s | 0.000899s | byte equality observed |
| mp_defer.test | 10 | 0.000884s | 0.000885s | 0.000906s | byte equality observed |
| mp_drop.test | 10 | 0.000892s | 0.000889s | 0.000923s | byte equality observed |
| mp_drop_2.test | 10 | 0.000416s | 0.000402s | 0.000907s | byte equality observed |
| mp_empty.test | 10 | 0.000904s | 0.000893s | 0.000913s | byte equality observed |
| mp_empty_2.test | 10 | 0.000409s | 0.000404s | 0.000888s | byte equality observed |
| mp_erase.test | 10 | 0.000912s | 0.000911s | 0.000946s | byte equality observed |
| mp_erase_2.test | 10 | 0.000405s | 0.000389s | 0.000904s | byte equality observed |
| mp_eval_if.test | 10 | 0.000897s | 0.000881s | 0.000968s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.000885s | 0.000885s | 0.000924s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.000892s | 0.000873s | 0.000971s | byte equality observed |
| mp_eval_or.test | 10 | 0.000886s | 0.000871s | 0.000933s | byte equality observed |
| mp_fill.test | 10 | 0.000915s | 0.000888s | 0.000937s | byte equality observed |
| mp_fill_2.test | 10 | 0.000409s | 0.000398s | 0.000900s | byte equality observed |
| mp_filter.test | 10 | 0.000896s | 0.000888s | 0.000930s | byte equality observed |
| mp_find.test | 10 | 0.000921s | 0.000884s | 0.000910s | byte equality observed |
| mp_find_if.test | 10 | 0.000912s | 0.000872s | 0.000941s | byte equality observed |
| mp_find_if_q.test | 10 | 0.000917s | 0.000880s | 0.000920s | byte equality observed |
| mp_flatten.test | 10 | 0.000911s | 0.000892s | 0.000932s | byte equality observed |
| mp_fold.test | 10 | 0.000922s | 0.000891s | 0.000931s | byte equality observed |
| mp_fold_q.test | 10 | 0.000911s | 0.000872s | 0.000913s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.000889s | 0.000863s | 0.000904s | byte equality observed |
| mp_for_each.test | 10 | 0.000882s | 0.000870s | 0.000912s | byte equality observed |
| mp_from_sequence.test | 10 | 0.000890s | 0.000885s | 0.000916s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.000900s | 0.000894s | 0.000905s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.000891s | 0.000871s | 0.000922s | byte equality observed |
| mp_front.test | 10 | 0.000911s | 0.000882s | 0.000910s | byte equality observed |
| mp_front_2.test | 10 | 0.000410s | 0.000405s | 0.000895s | byte equality observed |
| mp_identity.test | 10 | 0.000905s | 0.000870s | 0.000898s | byte equality observed |
| mp_if.test | 10 | 0.000901s | 0.000877s | 0.000914s | byte equality observed |
| mp_if_sf.test | 10 | 0.000904s | 0.000857s | 0.000905s | byte equality observed |
| mp_inherit.test | 10 | 0.000899s | 0.000882s | 0.000949s | byte equality observed |
| mp_insert.test | 10 | 0.000933s | 0.000899s | 0.000908s | byte equality observed |
| mp_insert_2.test | 10 | 0.000411s | 0.000398s | 0.000898s | byte equality observed |
| mp_intersperse.test | 10 | 0.000923s | 0.000906s | 0.000912s | byte equality observed |
| mp_invoke_q.test | 10 | 0.000899s | 0.000892s | 0.000925s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.000909s | 0.000899s | 0.000922s | byte equality observed |
| mp_iota.test | 10 | 0.000903s | 0.000896s | 0.000916s | byte equality observed |
| mp_iota_2.test | 10 | 0.000898s | 0.000894s | 0.000903s | byte equality observed |
| mp_is_list.test | 10 | 0.000885s | 0.000888s | 0.000899s | byte equality observed |
| mp_is_map.test | 10 | 0.000877s | 0.000893s | 0.000918s | byte equality observed |
| mp_is_set.test | 10 | 0.000889s | 0.000897s | 0.000896s | byte equality observed |
| mp_is_value_list.test | 10 | 0.000889s | 0.000917s | 0.000920s | byte equality observed |
| mp_iterate.test | 10 | 0.000898s | 0.000904s | 0.000913s | byte equality observed |
| mp_join.test | 10 | 0.000888s | 0.000910s | 0.000920s | byte equality observed |
| mp_lambda.test | 10 | 0.000927s | 0.000934s | 0.000938s | byte equality observed |
| mp_less.test | 10 | 0.000896s | 0.000892s | 0.000926s | byte equality observed |
| mp_list_c.test | 10 | 0.000915s | 0.000912s | 0.000932s | byte equality observed |
| mp_list_v.test | 10 | 0.000414s | 0.000413s | 0.000892s | byte equality observed |
| mp_map_contains.test | 10 | 0.000907s | 0.000919s | 0.000920s | byte equality observed |
| mp_map_erase.test | 10 | 0.000887s | 0.000896s | 0.000925s | byte equality observed |
| mp_map_find.test | 10 | 0.000895s | 0.000897s | 0.000917s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000898s | 0.000898s | 0.000899s | byte equality observed |
| mp_map_find_3.test | 10 | 0.000891s | 0.000928s | 0.000891s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000912s | 0.000922s | 0.000884s | byte equality observed |
| mp_map_insert.test | 10 | 0.000900s | 0.000926s | 0.000891s | byte equality observed |
| mp_map_keys.test | 10 | 0.000908s | 0.000904s | 0.000918s | byte equality observed |
| mp_map_replace.test | 10 | 0.000927s | 0.000889s | 0.000904s | byte equality observed |
| mp_map_update.test | 10 | 0.000906s | 0.000908s | 0.000902s | byte equality observed |
| mp_map_update_q.test | 10 | 0.000894s | 0.000902s | 0.000895s | byte equality observed |
| mp_max.test | 10 | 0.000895s | 0.000909s | 0.000886s | byte equality observed |
| mp_max_element.test | 10 | 0.000905s | 0.000909s | 0.000894s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000410s | 0.000420s | 0.000891s | byte equality observed |
| mp_max_element_q.test | 10 | 0.000897s | 0.000927s | 0.000906s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000412s | 0.000399s | 0.000893s | byte equality observed |
| mp_min.test | 10 | 0.000882s | 0.000896s | 0.000942s | byte equality observed |
| mp_min_element.test | 10 | 0.000896s | 0.000916s | 0.000904s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000405s | 0.000412s | 0.000894s | byte equality observed |
| mp_min_element_q.test | 10 | 0.000926s | 0.000912s | 0.000904s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000403s | 0.000408s | 0.000891s | byte equality observed |
| mp_none_of.test | 10 | 0.000912s | 0.000885s | 0.000909s | byte equality observed |
| mp_none_of_q.test | 10 | 0.000887s | 0.000901s | 0.000911s | byte equality observed |
| mp_not_fn.test | 10 | 0.000913s | 0.000888s | 0.000921s | byte equality observed |
| mp_nth_element.test | 10 | 0.000887s | 0.000925s | 0.000927s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.000896s | 0.000886s | 0.000899s | byte equality observed |
| mp_or.test | 10 | 0.000889s | 0.000893s | 0.000920s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.000899s | 0.000884s | 0.000903s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.000897s | 0.000882s | 0.000916s | byte equality observed |
| mp_partial_sum.test | 10 | 0.000925s | 0.000905s | 0.000909s | byte equality observed |
| mp_partition.test | 10 | 0.000889s | 0.000875s | 0.000902s | byte equality observed |
| mp_partition_q.test | 10 | 0.000915s | 0.000893s | 0.000928s | byte equality observed |
| mp_plus.test | 10 | 0.000908s | 0.000892s | 0.000895s | byte equality observed |
| mp_pop_back.test | 10 | 0.000935s | 0.000908s | 0.000916s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000414s | 0.000407s | 0.000909s | byte equality observed |
| mp_pop_front.test | 10 | 0.000911s | 0.000886s | 0.000927s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000412s | 0.000397s | 0.000907s | byte equality observed |
| mp_power_set.test | 10 | 0.000903s | 0.000882s | 0.000917s | byte equality observed |
| mp_product.test | 10 | 0.000906s | 0.000875s | 0.000931s | byte equality observed |
| mp_push_back.test | 10 | 0.000914s | 0.000907s | 0.000908s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000412s | 0.000416s | 0.000922s | byte equality observed |
| mp_push_front.test | 10 | 0.000919s | 0.000914s | 0.000922s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000412s | 0.000415s | 0.000888s | byte equality observed |
| mp_quote.test | 10 | 0.000901s | 0.000900s | 0.000904s | byte equality observed |
| mp_quote_trait.test | 10 | 0.000903s | 0.000898s | 0.000903s | byte equality observed |
| mp_remove.test | 10 | 0.000905s | 0.000889s | 0.000915s | byte equality observed |
| mp_remove_if.test | 10 | 0.000909s | 0.000893s | 0.000895s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.000895s | 0.000909s | 0.000923s | byte equality observed |
| mp_rename.test | 10 | 0.000904s | 0.000921s | 0.000911s | byte equality observed |
| mp_rename_2.test | 10 | 0.000411s | 0.000410s | 0.000882s | byte equality observed |
| mp_rename_v.test | 10 | 0.000416s | 0.000403s | 0.000889s | byte equality observed |
| mp_repeat.test | 10 | 0.000925s | 0.000922s | 0.000923s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000407s | 0.000401s | 0.000879s | byte equality observed |
| mp_repeat_3.test | 10 | 0.000898s | 0.000885s | 0.000896s | byte equality observed |
| mp_replace.test | 10 | 0.000899s | 0.000906s | 0.000933s | byte equality observed |
| mp_replace_at.test | 10 | 0.000891s | 0.000906s | 0.000905s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.000904s | 0.000916s | 0.000927s | byte equality observed |
| mp_replace_front.test | 10 | 0.000914s | 0.000934s | 0.000928s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000409s | 0.000400s | 0.000893s | byte equality observed |
| mp_replace_if.test | 10 | 0.000900s | 0.000891s | 0.000883s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.000886s | 0.000895s | 0.000896s | byte equality observed |
| mp_replace_second.test | 10 | 0.000910s | 0.000939s | 0.000930s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000414s | 0.000402s | 0.000900s | byte equality observed |
| mp_replace_third.test | 10 | 0.000908s | 0.000908s | 0.000913s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000408s | 0.000392s | 0.000892s | byte equality observed |
| mp_reverse.test | 10 | 0.000902s | 0.000909s | 0.000896s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.000917s | 0.000902s | 0.000898s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000915s | 0.000878s | 0.000891s | byte equality observed |
| mp_rotate_left.test | 10 | 0.000900s | 0.000895s | 0.000911s | byte equality observed |
| mp_rotate_right.test | 10 | 0.000891s | 0.000897s | 0.000911s | byte equality observed |
| mp_same.test | 10 | 0.000894s | 0.000881s | 0.000903s | byte equality observed |
| mp_second.test | 10 | 0.000906s | 0.000889s | 0.000900s | byte equality observed |
| mp_second_2.test | 10 | 0.000408s | 0.000400s | 0.000892s | byte equality observed |
| mp_set_contains.test | 10 | 0.000893s | 0.000882s | 0.000923s | byte equality observed |
| mp_set_difference.test | 10 | 0.000888s | 0.000888s | 0.000922s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000923s | 0.000878s | 0.000906s | byte equality observed |
| mp_set_intersection.test | 10 | 0.000909s | 0.000876s | 0.000915s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000893s | 0.000887s | 0.000907s | byte equality observed |
| mp_set_push_back.test | 10 | 0.000903s | 0.000880s | 0.000912s | byte equality observed |
| mp_set_push_front.test | 10 | 0.000920s | 0.000884s | 0.000906s | byte equality observed |
| mp_set_union.test | 10 | 0.000904s | 0.000881s | 0.000895s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.000905s | 0.000879s | 0.000900s | byte equality observed |
| mp_similar.test | 10 | 0.000895s | 0.000910s | 0.000903s | byte equality observed |
| mp_size.test | 10 | 0.000909s | 0.000889s | 0.000892s | byte equality observed |
| mp_size_2.test | 10 | 0.000413s | 0.000397s | 0.000895s | byte equality observed |
| mp_slice.test | 10 | 0.000930s | 0.000907s | 0.000914s | byte equality observed |
| mp_slice_2.test | 10 | 0.000414s | 0.000396s | 0.000908s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.000915s | 0.000901s | 0.000912s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.000929s | 0.000903s | 0.000922s | byte equality observed |
| mp_sort.test | 10 | 0.000905s | 0.000883s | 0.000901s | byte equality observed |
| mp_sort_q.test | 10 | 0.000911s | 0.000889s | 0.000909s | byte equality observed |
| mp_split.test | 10 | 0.000918s | 0.000902s | 0.000922s | byte equality observed |
| mp_starts_with.test | 10 | 0.000901s | 0.000888s | 0.000932s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.000897s | 0.000895s | 0.000931s | byte equality observed |
| mp_take.test | 10 | 0.000924s | 0.000908s | 0.000917s | byte equality observed |
| mp_take_2.test | 10 | 0.000406s | 0.000395s | 0.000912s | byte equality observed |
| mp_third.test | 10 | 0.000911s | 0.000904s | 0.000925s | byte equality observed |
| mp_third_2.test | 10 | 0.000412s | 0.000406s | 0.000892s | byte equality observed |
| mp_transform.test | 10 | 0.000921s | 0.000905s | 0.000905s | byte equality observed |
| mp_transform_2.test | 10 | 0.000885s | 0.000877s | 0.000880s | byte equality observed |
| mp_transform_front.test | 10 | 0.000914s | 0.000887s | 0.000920s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000418s | 0.000409s | 0.000924s | byte equality observed |
| mp_transform_if.test | 10 | 0.000906s | 0.000889s | 0.000921s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.000916s | 0.000876s | 0.000950s | byte equality observed |
| mp_transform_q.test | 10 | 0.000927s | 0.000905s | 0.000918s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.000902s | 0.000867s | 0.000912s | byte equality observed |
| mp_transform_second.test | 10 | 0.000906s | 0.000902s | 0.000917s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000410s | 0.000403s | 0.000901s | byte equality observed |
| mp_transform_sf.test | 10 | 0.000908s | 0.000902s | 0.000896s | byte equality observed |
| mp_transform_third.test | 10 | 0.000900s | 0.000901s | 0.000909s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000411s | 0.000403s | 0.000889s | byte equality observed |
| mp_unique.test | 10 | 0.000909s | 0.000884s | 0.000931s | byte equality observed |
| mp_unique_if.test | 10 | 0.000922s | 0.000895s | 0.000918s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.000930s | 0.000877s | 0.000913s | byte equality observed |
| mp_valid.test | 10 | 0.000908s | 0.000864s | 0.000926s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.000931s | 0.000881s | 0.000920s | byte equality observed |
| mp_value.test | 10 | 0.000412s | 0.000398s | 0.000901s | byte equality observed |
| mp_with_index.test | 10 | 0.001300s | 0.001243s | 0.001250s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000418s | 0.000397s | 0.000892s | byte equality observed |
| mpl.test | 10 | 0.000928s | 0.000869s | 0.000933s | byte equality observed |
| mpl_list.test | 10 | 0.000923s | 0.000883s | 0.000921s | byte equality observed |
| mpl_tuple.test | 10 | 0.000915s | 0.000888s | 0.000909s | byte equality observed |
| mpl_version.test | 10 | 0.000912s | 0.000884s | 0.000909s | byte equality observed |
| set_version.test | 10 | 0.000909s | 0.000878s | 0.000920s | byte equality observed |
| tuple_apply.test | 10 | 0.000908s | 0.000879s | 0.000926s | byte equality observed |
| tuple_for_each.test | 10 | 0.000903s | 0.000875s | 0.000917s | byte equality observed |
| tuple_transform.test | 10 | 0.000906s | 0.000882s | 0.000912s | byte equality observed |
| tuple_transform_2.test | 10 | 0.000909s | 0.000853s | 0.000901s | byte equality observed |
| tuple_version.test | 10 | 0.000898s | 0.000871s | 0.000930s | byte equality observed |
| utility_version.test | 10 | 0.000899s | 0.000849s | 0.000907s | byte equality observed |
| version.test | 10 | 0.000903s | 0.000871s | 0.000919s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45790989032).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
