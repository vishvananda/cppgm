# libs/mp11/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| mp11.test | COMPILE | 0.035775 | 0.072137 | 0.111345 | — | — | — |
| complex_h.test | COMPILE | 0.143390 | 0.314683 | 0.495356 | — | — | — |
| mp_size.test | RUN | 0.172149 | 0.948329 | 0.622704 | 0.001701 | 0.001795 | 0.001630 |
| mp_size_2.test | RUN | 0.015822 | 0.035951 | 0.050889 | 0.000624 | 0.000788 | 0.001196 |
| mp_empty.test | RUN | 0.159409 | 0.593364 | 0.535288 | 0.001465 | 0.001855 | 0.001456 |
| mp_empty_2.test | RUN | 0.015958 | 0.037154 | 0.058048 | 0.000698 | 0.000778 | 0.001690 |
| mp_assign.test | RUN | 0.187786 | 1.233976 | 0.712674 | 0.001575 | 0.001769 | 0.001399 |
| mp_assign_2.test | RUN | 0.016181 | 0.037182 | 0.049906 | 0.000683 | 0.000718 | 0.001216 |
| mp_clear.test | RUN | 0.160490 | 0.544651 | 0.586064 | 0.001616 | 0.001743 | 0.001678 |
| mp_clear_2.test | RUN | 0.016462 | 0.037809 | 0.058256 | 0.000597 | 0.000636 | 0.001642 |
| mp_front.test | RUN | 0.171830 | 0.852478 | 0.656499 | 0.001576 | 0.001887 | 0.001357 |
| mp_front_2.test | RUN | 0.015682 | 0.037329 | 0.055692 | 0.000642 | 0.000743 | 0.001417 |
| mp_pop_front.test | RUN | 0.173970 | 0.892772 | 0.641869 | 0.001579 | 0.001636 | 0.001637 |
| mp_pop_front_2.test | RUN | 0.015719 | 0.037584 | 0.058386 | 0.000619 | 0.000700 | 0.001479 |
| mp_second.test | RUN | 0.172041 | 0.587304 | 0.615697 | 0.001554 | 0.001557 | 0.001870 |
| mp_second_2.test | RUN | 0.015370 | 0.038166 | 0.052790 | 0.000703 | 0.000807 | 0.001672 |
| mp_third.test | RUN | 0.160912 | 0.535565 | 0.560113 | 0.001574 | 0.001766 | 0.001795 |
| mp_third_2.test | RUN | 0.015989 | 0.038571 | 0.057895 | 0.000743 | 0.000764 | 0.001613 |
| mp_push_front.test | RUN | 0.218889 | 1.895347 | 0.995671 | 0.001802 | 0.001830 | 0.001575 |
| mp_push_front_2.test | RUN | 0.015257 | 0.035217 | 0.074923 | 0.000641 | 0.000806 | 0.001462 |
| mp_push_back.test | RUN | 0.218544 | 1.868155 | 1.030136 | 0.001574 | 0.001620 | 0.001518 |
| mp_push_back_2.test | RUN | 0.016040 | 0.038861 | 0.059437 | 0.000731 | 0.000780 | 0.001701 |
| mp_rename.test | RUN | 0.203633 | 1.729642 | 0.905690 | 0.001368 | 0.001796 | 0.001415 |
| mp_rename_2.test | RUN | 0.015376 | 0.037535 | 0.056648 | 0.000612 | 0.000758 | 0.001642 |
| mp_append.test | RUN | 0.211706 | 1.968632 | 0.944218 | 0.001633 | 0.001740 | 0.001690 |
| mp_append_2.test | RUN | 0.451980 | 4.333304 | 1.233444 | 0.001587 | 0.001795 | 0.001305 |
| mp_append_3.test | RUN | 0.015589 | 0.035227 | 0.051267 | 0.000711 | 0.000734 | 0.001700 |
| mp_append_sf.test | RUN | 0.161477 | 0.489901 | 0.530690 | 0.001700 | 0.001778 | 0.001732 |
| mp_replace_front.test | RUN | 0.196547 | 1.410168 | 0.768851 | 0.001630 | 0.001674 | 0.001526 |
| mp_replace_front_2.test | RUN | 0.016516 | 0.035492 | 0.058370 | 0.000603 | 0.000730 | 0.001662 |
| mp_replace_second.test | RUN | 0.191277 | 0.903245 | 0.732607 | 0.001687 | 0.001711 | 0.001732 |
| mp_replace_second_2.test | RUN | 0.015621 | 0.037641 | 0.056910 | 0.000560 | 0.000748 | 0.001419 |
| mp_replace_third.test | RUN | 0.183982 | 0.740274 | 0.667311 | 0.001567 | 0.001643 | 0.001643 |
| mp_replace_third_2.test | RUN | 0.016000 | 0.036985 | 0.052087 | 0.000603 | 0.000490 | 0.001698 |
| mp_apply_q.test | RUN | 0.196992 | 1.694071 | 0.857392 | 0.001514 | 0.001740 | 0.001681 |
| mp_apply_q_sf.test | RUN | 0.159527 | 0.501212 | 0.549263 | 0.001603 | 0.001729 | 0.001594 |
| mp_is_list.test | RUN | 0.159682 | 0.596044 | 0.568350 | 0.001478 | 0.001812 | 0.001513 |
| mp_list_c.test | RUN | 0.171495 | 0.711883 | 0.644975 | 0.001559 | 0.001717 | 0.001612 |
| mp_transform_front.test | RUN | 0.187474 | 1.399352 | 0.780372 | 0.001351 | 0.001739 | 0.001320 |
| mp_transform_front_2.test | RUN | 0.015814 | 0.036899 | 0.050196 | 0.000611 | 0.000570 | 0.001442 |
| mp_transform_second.test | RUN | 0.181885 | 1.195482 | 0.700517 | 0.001669 | 0.001686 | 0.001579 |
| mp_transform_second_2.test | RUN | 0.014944 | 0.035708 | 0.058771 | 0.000735 | 0.000690 | 0.001457 |
| mp_transform_third.test | RUN | 0.168682 | 0.883083 | 0.646644 | 0.001503 | 0.001769 | 0.001652 |
| mp_transform_third_2.test | RUN | 0.015855 | 0.036713 | 0.052330 | 0.000597 | 0.000734 | 0.001480 |
| mp_list_v.test | RUN | 0.015283 | 0.036304 | 0.049535 | 0.000640 | 0.000709 | 0.001326 |
| mp_rename_v.test | RUN | 0.014949 | 0.036458 | 0.051316 | 0.000595 | 0.000658 | 0.001276 |
| mp_is_value_list.test | RUN | 0.159103 | 0.378138 | 0.545639 | 0.001511 | 0.001622 | 0.001605 |
| mp_transform.test | RUN | 0.359769 | 2.868345 | 1.541902 | 0.001783 | 0.001782 | 0.001628 |
| mp_transform_2.test | RUN | 0.153360 | 0.339640 | 0.527614 | 0.001484 | 0.001831 | 0.001257 |
| mp_transform_q.test | RUN | 0.354471 | 2.733393 | 1.540812 | 0.001712 | 0.001660 | 0.001898 |
| mp_transform_q_2.test | RUN | 0.389226 | 0.897285 | 1.990808 | 0.001666 | 0.001627 | 0.001394 |
| mp_transform_sf.test | RUN | 0.169970 | 0.519667 | 0.599176 | 0.001556 | 0.001571 | 0.001704 |
| mp_transform_if.test | RUN | 0.210010 | 1.387939 | 0.834660 | 0.001749 | 0.001596 | 0.001710 |
| mp_transform_if_q.test | RUN | 0.205911 | 1.398179 | 0.877046 | 0.001595 | 0.001508 | 0.001481 |
| mp_filter.test | RUN | 0.183106 | 0.835872 | 0.643626 | 0.001531 | 0.001756 | 0.001644 |
| mp_fill.test | RUN | 0.176059 | 0.633563 | 0.609128 | 0.001522 | 0.001618 | 0.001702 |
| mp_fill_2.test | RUN | 0.028199 | 0.056489 | 0.086065 | 0.000583 | 0.000740 | 0.001629 |
| mp_count.test | RUN | 0.350496 | 1.530426 | 0.962334 | 0.001559 | 0.001288 | 0.001700 |
| mp_count_if.test | RUN | 0.349510 | 1.547662 | 1.103178 | 0.001588 | 0.001707 | 0.001510 |
| mp_count_if_q.test | RUN | 0.181510 | 1.012111 | 0.614724 | 0.001723 | 0.001588 | 0.001497 |
| mp_contains.test | RUN | 0.172571 | 0.621152 | 0.569604 | 0.001756 | 0.001631 | 0.001484 |
| mp_starts_with.test | RUN | 0.175080 | 0.609460 | 0.623901 | 0.001582 | 0.001680 | 0.001436 |
| mp_starts_with_sf.test | RUN | 0.171915 | 0.523566 | 0.591465 | 0.001319 | 0.001319 | 0.001534 |
| mp_repeat.test | RUN | 0.246696 | 2.461231 | 1.050295 | 0.001737 | 0.001681 | 0.001766 |
| mp_repeat_2.test | RUN | 0.028771 | 0.057233 | 0.093725 | 0.000714 | 0.000682 | 0.001636 |
| mp_repeat_3.test | RUN | 0.209246 | 0.351043 | 0.584936 | 0.001556 | 0.001710 | 0.001488 |
| mp_product.test | RUN | 0.201590 | 1.488288 | 0.837173 | 0.001570 | 0.001779 | 0.001680 |
| mp_drop.test | RUN | 0.207934 | 1.854307 | 0.936402 | 0.001448 | 0.001640 | 0.001638 |
| mp_drop_2.test | RUN | 0.028040 | 0.056906 | 0.085944 | 0.000622 | 0.000712 | 0.001693 |
| mp_iota.test | RUN | 0.201856 | 1.573092 | 0.818305 | 0.001706 | 0.001699 | 0.001617 |
| mp_iota_2.test | RUN | 0.216720 | 1.878662 | 0.947361 | 0.001532 | 0.001788 | 0.001408 |
| mp_at.test | RUN | 0.180451 | 0.832313 | 0.610836 | 0.001552 | 0.001588 | 0.001576 |
| mp_at_2.test | RUN | 0.027017 | 0.059279 | 0.093570 | 0.000716 | 0.000635 | 0.001720 |
| mp_at_sf.test | RUN | 0.167489 | 0.511140 | 0.555572 | 0.001727 | 0.001653 | 0.001713 |
| mp_take.test | RUN | 0.282928 | 2.441797 | 1.094601 | 0.001627 | 0.001646 | 0.001648 |
| mp_take_2.test | RUN | 0.028306 | 0.056714 | 0.096376 | 0.000590 | 0.000726 | 0.001475 |
| mp_slice.test | RUN | 0.322789 | 2.478225 | 1.393512 | 0.001626 | 0.001799 | 0.001596 |
| mp_slice_2.test | RUN | 0.027074 | 0.056492 | 0.086393 | 0.000744 | 0.000670 | 0.001647 |
| mp_replace.test | RUN | 0.208106 | 1.257189 | 0.883673 | 0.001718 | 0.001354 | 0.001455 |
| mp_replace_if.test | RUN | 0.200155 | 1.115254 | 0.832238 | 0.001803 | 0.001662 | 0.001913 |
| mp_replace_if_q.test | RUN | 0.202116 | 1.107046 | 0.815448 | 0.001504 | 0.001736 | 0.001754 |
| mp_copy_if.test | RUN | 0.204959 | 1.551066 | 0.806174 | 0.001550 | 0.001698 | 0.001662 |
| mp_copy_if_q.test | RUN | 0.203241 | 1.559498 | 0.814528 | 0.001760 | 0.001686 | 0.001588 |
| mp_remove.test | RUN | 0.195987 | 1.043009 | 0.774079 | 0.001794 | 0.001768 | 0.001401 |
| mp_remove_if.test | RUN | 0.211771 | 1.635819 | 0.836104 | 0.001680 | 0.001738 | 0.001738 |
| mp_remove_if_q.test | RUN | 0.210192 | 1.627245 | 0.835851 | 0.001601 | 0.001612 | 0.001662 |
| mp_partition.test | RUN | 0.207612 | 1.537314 | 0.894367 | 0.001738 | 0.001623 | 0.001660 |
| mp_partition_q.test | RUN | 0.210067 | 1.538039 | 0.882750 | 0.001773 | 0.001769 | 0.001634 |
| mp_sort.test | RUN | 0.194907 | 1.114441 | 0.781395 | 0.001474 | 0.001762 | 0.001419 |
| mp_sort_q.test | RUN | 0.198974 | 1.091459 | 0.788806 | 0.001572 | 0.001626 | 0.001590 |
| mp_find.test | RUN | 0.195176 | 1.174527 | 0.672235 | 0.001726 | 0.001576 | 0.001670 |
| mp_find_if.test | RUN | 0.187097 | 1.094103 | 0.662267 | 0.001602 | 0.001800 | 0.001392 |
| mp_find_if_q.test | RUN | 0.201001 | 1.239849 | 0.817310 | 0.001722 | 0.001778 | 0.001695 |
| mp_reverse.test | RUN | 0.399831 | 3.204209 | 1.500112 | 0.001668 | 0.001513 | 0.001810 |
| mp_fold.test | RUN | 0.659800 | 2.532906 | 3.790353 | 0.001693 | 0.001728 | 0.001678 |
| mp_fold_q.test | RUN | 0.191112 | 1.106836 | 0.737135 | 0.001490 | 0.001793 | 0.001722 |
| mp_fold_q_sf.test | RUN | 0.173851 | 0.539706 | 0.596924 | 0.001355 | 0.001806 | 0.001641 |
| mp_reverse_fold.test | RUN | 0.326647 | 2.398416 | 1.066823 | 0.001670 | 0.001599 | 0.001551 |
| mp_reverse_fold_q.test | RUN | 0.198259 | 1.331574 | 0.793568 | 0.001632 | 0.001630 | 0.001655 |
| mp_unique.test | RUN | 0.192776 | 1.207603 | 0.784560 | 0.001736 | 0.001656 | 0.001632 |
| mp_unique_if.test | RUN | 0.343007 | 2.496579 | 1.224612 | 0.001560 | 0.001611 | 0.001640 |
| mp_unique_if_q.test | RUN | 0.291974 | 2.470784 | 0.993565 | 0.001341 | 0.001680 | 0.001636 |
| mp_all_of.test | RUN | 0.464098 | 1.365744 | 1.349277 | 0.001708 | 0.001958 | 0.001702 |
| mp_all_of_q.test | RUN | 0.171225 | 0.586534 | 0.552783 | 0.001533 | 0.001718 | 0.001843 |
| mp_any_of.test | RUN | 0.458501 | 1.435977 | 1.328531 | 0.001590 | 0.001681 | 0.001724 |
| mp_any_of_q.test | RUN | 0.168966 | 0.577149 | 0.582714 | 0.001734 | 0.001808 | 0.001588 |
| mp_none_of.test | RUN | 0.457302 | 1.429284 | 1.308700 | 0.001495 | 0.001719 | 0.001675 |
| mp_none_of_q.test | RUN | 0.165511 | 0.583209 | 0.587267 | 0.001869 | 0.001749 | 0.001685 |
| mp_replace_at.test | RUN | 0.202801 | 1.160832 | 0.869137 | 0.001720 | 0.001720 | 0.001670 |
| mp_replace_at_c.test | RUN | 0.204181 | 1.179088 | 0.817707 | 0.001444 | 0.001739 | 0.001424 |
| mp_for_each.test | RUN | 0.195893 | 0.880753 | 0.966721 | 0.001455 | 0.001225 | 0.001724 |
| mp_insert.test | RUN | 0.301713 | 2.466673 | 1.224600 | 0.001723 | 0.001798 | 0.001636 |
| mp_insert_2.test | RUN | 0.028285 | 0.054753 | 0.093556 | 0.000640 | 0.000630 | 0.001588 |
| mp_erase.test | RUN | 0.333205 | 2.683446 | 1.469948 | 0.001492 | 0.001722 | 0.001816 |
| mp_erase_2.test | RUN | 0.028771 | 0.054861 | 0.082158 | 0.000625 | 0.000680 | 0.001677 |
| mp_with_index.test | RUN | 0.459872 | 5.319156 | 3.293177 | 0.002326 | 0.002257 | 0.002163 |
| mp_with_index_cx.test | RUN | 0.003524 | 0.018074 | 0.025821 | 0.000676 | 0.001436 | 0.001736 |
| mp_from_sequence.test | RUN | 0.201575 | 1.388226 | 0.878633 | 0.001659 | 0.001602 | 0.001296 |
| mp_from_sequence_2.test | RUN | 0.213578 | 1.626731 | 0.914533 | 0.001392 | 0.001709 | 0.001718 |
| mp_from_sequence_3.test | RUN | 0.178254 | 0.745315 | 0.672403 | 0.001592 | 0.001772 | 0.001694 |
| mp_min_element.test | RUN | 0.175868 | 0.658351 | 0.591892 | 0.001616 | 0.001817 | 0.001469 |
| mp_min_element_2.test | RUN | 0.027535 | 0.057709 | 0.097982 | 0.000695 | 0.000697 | 0.001562 |
| mp_min_element_q.test | RUN | 0.173007 | 0.661325 | 0.592804 | 0.001498 | 0.001851 | 0.001647 |
| mp_min_element_q_2.test | RUN | 0.027401 | 0.058224 | 0.097967 | 0.000701 | 0.000599 | 0.001656 |
| mp_max_element.test | RUN | 0.178223 | 0.653999 | 0.606204 | 0.001376 | 0.001807 | 0.001615 |
| mp_max_element_2.test | RUN | 0.028938 | 0.056800 | 0.097024 | 0.000557 | 0.000720 | 0.001623 |
| mp_max_element_q.test | RUN | 0.176547 | 0.664574 | 0.630467 | 0.001585 | 0.001711 | 0.001700 |
| mp_max_element_q_2.test | RUN | 0.026591 | 0.055423 | 0.098520 | 0.000587 | 0.000740 | 0.001556 |
| mp_nth_element.test | RUN | 0.195407 | 0.931360 | 0.747961 | 0.001572 | 0.001736 | 0.001446 |
| mp_nth_element_q.test | RUN | 0.187273 | 0.926773 | 0.747723 | 0.001582 | 0.001674 | 0.001756 |
| mp_back.test | RUN | 0.188035 | 0.749437 | 0.734614 | 0.001496 | 0.001634 | 0.001618 |
| mp_back_2.test | RUN | 0.028364 | 0.056363 | 0.094347 | 0.000603 | 0.000543 | 0.001588 |
| mp_pop_back.test | RUN | 0.504367 | 5.028420 | 1.428946 | 0.001610 | 0.001843 | 0.001396 |
| mp_pop_back_2.test | RUN | 0.027526 | 0.059414 | 0.082315 | 0.000741 | 0.000721 | 0.001753 |
| mp_flatten.test | RUN | 0.222092 | 1.779241 | 0.988135 | 0.001630 | 0.001846 | 0.001672 |
| mp_rotate_left.test | RUN | 0.222164 | 1.909426 | 0.991447 | 0.001490 | 0.001834 | 0.001602 |
| mp_rotate_right.test | RUN | 0.224511 | 1.922201 | 0.977648 | 0.001616 | 0.001912 | 0.001539 |
| mp_power_set.test | RUN | 0.215471 | 1.842359 | 0.980401 | 0.001749 | 0.001824 | 0.001514 |
| mp_partial_sum.test | RUN | 0.282928 | 2.460384 | 1.109686 | 0.001730 | 0.001743 | 0.001667 |
| mp_iterate.test | RUN | 0.191946 | 0.762476 | 0.791650 | 0.001673 | 0.001790 | 0.001508 |
| mp_pairwise_fold.test | RUN | 0.210959 | 1.688153 | 0.986493 | 0.001580 | 0.001818 | 0.001762 |
| mp_pairwise_fold_q.test | RUN | 0.169704 | 0.504454 | 0.576193 | 0.001921 | 0.001655 | 0.001626 |
| mp_sliding_fold.test | RUN | 0.401273 | 3.195096 | 1.797699 | 0.001635 | 0.001660 | 0.001712 |
| mp_sliding_fold_q.test | RUN | 0.406686 | 3.189723 | 1.809391 | 0.001552 | 0.001799 | 0.001596 |
| mp_intersperse.test | RUN | 0.204395 | 1.208979 | 0.883382 | 0.001680 | 0.001816 | 0.001665 |
| mp_split.test | RUN | 0.288154 | 2.314663 | 1.195938 | 0.001648 | 0.001866 | 0.001684 |
| mp_join.test | RUN | 0.226624 | 1.957442 | 1.027998 | 0.001607 | 0.001906 | 0.001681 |
| integral.test | RUN | 0.177066 | 0.898156 | 0.621205 | 0.001463 | 0.001952 | 0.001708 |
| mp_value.test | RUN | 0.012269 | 0.029691 | 0.046503 | 0.000714 | 0.000657 | 0.001667 |
| mp_identity.test | RUN | 0.168688 | 0.811866 | 0.611056 | 0.001789 | 0.001792 | 0.001760 |
| mp_inherit.test | RUN | 0.163101 | 0.597104 | 0.569476 | 0.001647 | 0.001542 | 0.001675 |
| mp_if.test | RUN | 0.168470 | 0.675718 | 0.580864 | 0.001742 | 0.001758 | 0.001729 |
| mp_if_sf.test | RUN | 0.158007 | 0.508376 | 0.527634 | 0.001695 | 0.001504 | 0.001718 |
| mp_eval_if.test | RUN | 0.167863 | 0.713648 | 0.597057 | 0.001700 | 0.001531 | 0.001636 |
| mp_eval_if_sf.test | RUN | 0.158231 | 0.524166 | 0.543637 | 0.001568 | 0.001603 | 0.001720 |
| mp_valid.test | RUN | 0.158439 | 0.518058 | 0.558112 | 0.001609 | 0.001801 | 0.001715 |
| mp_defer.test | RUN | 0.175509 | 0.856032 | 0.650774 | 0.001557 | 0.001908 | 0.001749 |
| mp_quote.test | RUN | 0.175284 | 0.869357 | 0.677060 | 0.001530 | 0.001901 | 0.001660 |
| mp_invoke_q.test | RUN | 0.189642 | 1.140189 | 0.743686 | 0.001584 | 0.001922 | 0.001640 |
| mp_invoke_q_sf.test | RUN | 0.159644 | 0.492892 | 0.525381 | 0.001425 | 0.001665 | 0.001837 |
| mp_quote_trait.test | RUN | 0.176221 | 0.939468 | 0.640143 | 0.001757 | 0.001496 | 0.001688 |
| mp_cond.test | RUN | 0.162828 | 0.579007 | 0.571416 | 0.001595 | 0.001901 | 0.001691 |
| mp_cond_sf.test | RUN | 0.158456 | 0.513182 | 0.548124 | 0.001553 | 0.001496 | 0.001721 |
| mp_not_fn.test | RUN | 0.158713 | 0.501441 | 0.519219 | 0.001421 | 0.001842 | 0.001500 |
| mp_eval_if_not.test | RUN | 0.166959 | 0.708938 | 0.603382 | 0.001717 | 0.001758 | 0.001619 |
| mp_eval_or.test | RUN | 0.161255 | 0.384156 | 0.552079 | 0.001579 | 0.001836 | 0.001714 |
| mp_compose.test | RUN | 0.182793 | 1.142790 | 0.698346 | 0.001629 | 0.001778 | 0.001736 |
| mp_valid_and_true.test | RUN | 0.164515 | 0.605982 | 0.561293 | 0.001385 | 0.001842 | 0.001629 |
| mp_compose_sf.test | COMPILE | 0.039609 | 0.073708 | 0.139531 | — | — | — |
| integer_sequence.test | RUN | 0.192340 | 1.131223 | 0.774710 | 0.001636 | 0.001640 | 0.001582 |
| tuple_for_each.test | RUN | 0.162726 | 0.430455 | 0.583505 | 0.001316 | 0.001684 | 0.001456 |
| tuple_for_each_cx.test | COMPILE | 0.031272 | 0.066300 | 0.108616 | — | — | — |
| tuple_apply.test | RUN | 0.167550 | 0.428612 | 0.610683 | 0.001746 | 0.001808 | 0.001625 |
| tuple_apply_cx.test | COMPILE | 0.043956 | 0.093145 | 0.151851 | — | — | — |
| construct_from_tuple.test | RUN | 0.167607 | 0.462437 | 0.593818 | 0.001470 | 0.002126 | 0.001629 |
| construct_from_tuple_cx.test | COMPILE | 0.044801 | 0.090899 | 0.130870 | — | — | — |
| tuple_transform.test | RUN | 0.260018 | 0.946004 | 1.170757 | 0.001733 | 0.001462 | 0.001540 |
| tuple_transform_2.test | RUN | 0.229979 | 0.718276 | 1.084965 | 0.001589 | 0.001754 | 0.001428 |
| tuple_transform_cx.test | COMPILE | 0.038252 | 0.084399 | 0.126262 | — | — | — |
| mp_set_contains.test | RUN | 0.171680 | 0.604651 | 0.600788 | 0.001653 | 0.001812 | 0.001650 |
| mp_set_push_back.test | RUN | 0.218300 | 1.821385 | 0.986286 | 0.001788 | 0.001642 | 0.001744 |
| mp_set_push_front.test | RUN | 0.278246 | 2.193173 | 1.101618 | 0.001582 | 0.001881 | 0.001493 |
| mp_is_set.test | RUN | 0.168917 | 0.602688 | 0.615728 | 0.001764 | 0.001741 | 0.001647 |
| mp_set_union.test | RUN | 0.206907 | 1.584846 | 0.947089 | 0.001333 | 0.001861 | 0.001448 |
| mp_set_union_sf.test | RUN | 0.162419 | 0.479417 | 0.564776 | 0.001767 | 0.001806 | 0.001627 |
| mp_set_difference.test | RUN | 0.194699 | 1.236843 | 0.802062 | 0.001720 | 0.001651 | 0.001398 |
| mp_set_difference_sf.test | RUN | 0.165729 | 0.512705 | 0.555123 | 0.001545 | 0.001756 | 0.001271 |
| mp_set_intersection.test | RUN | 0.189688 | 1.223234 | 0.773523 | 0.001690 | 0.001953 | 0.001693 |
| mp_set_intersection_sf.test | RUN | 0.165938 | 0.485067 | 0.561695 | 0.001524 | 0.001714 | 0.001756 |
| mp_all.test | RUN | 0.167444 | 0.610090 | 0.575728 | 0.001634 | 0.001733 | 0.001639 |
| mp_all_2.test | RUN | 0.464852 | 1.335718 | 1.323205 | 0.001748 | 0.001877 | 0.001745 |
| mp_and.test | RUN | 0.162885 | 0.590829 | 0.597183 | 0.001711 | 0.001752 | 0.001730 |
| mp_any.test | RUN | 0.169227 | 0.626020 | 0.605595 | 0.001509 | 0.001784 | 0.001782 |
| mp_any_2.test | RUN | 0.499566 | 1.336840 | 1.261181 | 0.001607 | 0.001887 | 0.001293 |
| mp_or.test | RUN | 0.171807 | 0.602922 | 0.576922 | 0.001731 | 0.001869 | 0.001795 |
| mp_same.test | RUN | 0.335664 | 0.990087 | 0.898311 | 0.001590 | 0.001744 | 0.001614 |
| mp_plus.test | RUN | 0.178536 | 0.676719 | 0.663262 | 0.001231 | 0.001654 | 0.001600 |
| mp_less.test | RUN | 0.167670 | 0.596976 | 0.595952 | 0.001696 | 0.001872 | 0.001704 |
| mp_min.test | RUN | 0.158940 | 0.546158 | 0.594835 | 0.001302 | 0.001835 | 0.001494 |
| mp_max.test | RUN | 0.166379 | 0.618941 | 0.606749 | 0.001270 | 0.001810 | 0.001427 |
| mp_similar.test | RUN | 0.163512 | 0.611386 | 0.579092 | 0.001433 | 0.001586 | 0.001493 |
| mp_map_find.test | RUN | 0.185355 | 1.080167 | 0.761293 | 0.001723 | 0.001365 | 0.001634 |
| mp_map_find_2.test | RUN | 0.177082 | 0.447647 | 0.680970 | 0.001646 | 0.001802 | 0.001377 |
| mp_map_find_3.test | RUN | 0.175769 | 0.430106 | 0.678944 | 0.001332 | 0.001496 | 0.001409 |
| mp_map_find_4.test | RUN | 0.167711 | 0.409048 | 0.583644 | 0.001604 | 0.001595 | 0.001534 |
| mp_map_contains.test | RUN | 0.172714 | 0.619546 | 0.605646 | 0.001728 | 0.001724 | 0.001702 |
| mp_map_insert.test | RUN | 0.222842 | 2.036291 | 1.075973 | 0.001652 | 0.001885 | 0.001558 |
| mp_map_replace.test | RUN | 0.295460 | 2.310824 | 1.217462 | 0.001738 | 0.001838 | 0.001681 |
| mp_map_erase.test | RUN | 0.222573 | 1.717223 | 1.015019 | 0.001565 | 0.001586 | 0.001395 |
| mp_map_update.test | RUN | 0.192258 | 1.108424 | 0.793171 | 0.001510 | 0.001604 | 0.001727 |
| mp_map_update_q.test | RUN | 0.195182 | 1.122511 | 0.797150 | 0.001653 | 0.001680 | 0.001298 |
| mp_map_keys.test | RUN | 0.192832 | 1.018757 | 0.758764 | 0.001462 | 0.001663 | 0.001696 |
| mp_is_map.test | RUN | 0.174545 | 0.627414 | 0.641354 | 0.001386 | 0.001465 | 0.001305 |
| mp_bind.test | RUN | 0.217132 | 1.818185 | 0.918841 | 0.001354 | 0.001662 | 0.001671 |
| mp_bind_q.test | RUN | 0.185730 | 1.121212 | 0.751346 | 0.001620 | 0.001703 | 0.001336 |
| mp_bind_front.test | RUN | 0.188727 | 1.229377 | 0.708828 | 0.001690 | 0.001694 | 0.001612 |
| mp_bind_back.test | RUN | 0.194425 | 1.225717 | 0.731321 | 0.001742 | 0.001542 | 0.001359 |
| mp_lambda.test | RUN | 0.416467 | 3.712907 | 1.859753 | 0.001704 | 0.001411 | 0.001544 |
| mpl.test | RUN | 0.377356 | 1.012085 | 1.505062 | 0.001633 | 0.001810 | 0.001682 |
| mpl_list.test | RUN | 0.212337 | 0.743773 | 0.724369 | 0.001543 | 0.001734 | 0.001676 |
| mpl_tuple.test | RUN | 0.215406 | 0.751585 | 0.732801 | 0.001724 | 0.001576 | 0.001508 |
| version.test | RUN | 0.112555 | 0.277035 | 0.378820 | 0.001434 | 0.001574 | 0.001369 |
| mp11_version.test | RUN | 0.134041 | 0.324500 | 0.426712 | 0.001522 | 0.001716 | 0.001559 |
| list_version.test | RUN | 0.114075 | 0.288246 | 0.369352 | 0.001475 | 0.001850 | 0.001542 |
| algorithm_version.test | RUN | 0.126046 | 0.290884 | 0.417458 | 0.001710 | 0.001760 | 0.001682 |
| integral_version.test | RUN | 0.111282 | 0.280509 | 0.380582 | 0.001698 | 0.001740 | 0.001681 |
| utility_version.test | RUN | 0.108314 | 0.275043 | 0.365923 | 0.001586 | 0.001705 | 0.001561 |
| function_version.test | RUN | 0.116369 | 0.278197 | 0.383361 | 0.001550 | 0.001698 | 0.001441 |
| map_version.test | RUN | 0.127602 | 0.301155 | 0.404672 | 0.001773 | 0.001696 | 0.001401 |
| set_version.test | RUN | 0.115421 | 0.289032 | 0.381484 | 0.001658 | 0.001685 | 0.001435 |
| bind_version.test | RUN | 0.123406 | 0.298394 | 0.419394 | 0.001618 | 0.001613 | 0.001653 |
| integer_sequence_version.test | RUN | 0.110144 | 0.276893 | 0.281079 | 0.001257 | 0.001654 | 0.001278 |
| tuple_version.test | RUN | 0.125630 | 0.304889 | 0.392976 | 0.001313 | 0.001882 | 0.001260 |
| mpl_version.test | RUN | 0.107765 | 0.238248 | 0.392911 | 0.001280 | 0.001307 | 0.001207 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.990× | 0.976×, 1.004× | 1.022× |
| clang | 1.090× | 1.087×, 1.093× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44813597235).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| algorithm_version.test | 10 | 0.000948s | 0.000952s | 0.000946s | byte equality observed |
| bind_version.test | 10 | 0.000946s | 0.000955s | 0.000951s | byte equality observed |
| construct_from_tuple.test | 10 | 0.000952s | 0.000974s | 0.000959s | byte equality observed |
| function_version.test | 10 | 0.000976s | 0.000961s | 0.000992s | byte equality observed |
| integer_sequence.test | 10 | 0.000963s | 0.000980s | 0.001015s | byte equality observed |
| integer_sequence_version.test | 10 | 0.000988s | 0.000956s | 0.000995s | byte equality observed |
| integral.test | 10 | 0.001007s | 0.000967s | 0.000982s | byte equality observed |
| integral_version.test | 10 | 0.000998s | 0.000943s | 0.001034s | byte equality observed |
| list_version.test | 10 | 0.000999s | 0.000950s | 0.000982s | byte equality observed |
| map_version.test | 10 | 0.000980s | 0.000951s | 0.000992s | byte equality observed |
| mp11_version.test | 10 | 0.000994s | 0.000955s | 0.000976s | byte equality observed |
| mp_all.test | 10 | 0.001007s | 0.000981s | 0.001003s | byte equality observed |
| mp_all_2.test | 10 | 0.000994s | 0.000984s | 0.001010s | byte equality observed |
| mp_all_of.test | 10 | 0.000989s | 0.000979s | 0.000969s | byte equality observed |
| mp_all_of_q.test | 10 | 0.000991s | 0.000992s | 0.001002s | byte equality observed |
| mp_and.test | 10 | 0.001024s | 0.000993s | 0.001017s | byte equality observed |
| mp_any.test | 10 | 0.001011s | 0.000999s | 0.000997s | byte equality observed |
| mp_any_2.test | 10 | 0.000999s | 0.000988s | 0.000978s | byte equality observed |
| mp_any_of.test | 10 | 0.001010s | 0.001013s | 0.000993s | byte equality observed |
| mp_any_of_q.test | 10 | 0.001008s | 0.000981s | 0.001028s | byte equality observed |
| mp_append.test | 10 | 0.000966s | 0.000976s | 0.001019s | byte equality observed |
| mp_append_2.test | 10 | 0.001025s | 0.001007s | 0.001019s | byte equality observed |
| mp_append_3.test | 10 | 0.000469s | 0.000463s | 0.000960s | byte equality observed |
| mp_append_sf.test | 10 | 0.000993s | 0.000999s | 0.000985s | byte equality observed |
| mp_apply_q.test | 10 | 0.000992s | 0.001034s | 0.001008s | byte equality observed |
| mp_apply_q_sf.test | 10 | 0.000986s | 0.001031s | 0.000988s | byte equality observed |
| mp_assign.test | 10 | 0.001001s | 0.001046s | 0.001005s | byte equality observed |
| mp_assign_2.test | 10 | 0.000457s | 0.000462s | 0.001004s | byte equality observed |
| mp_at.test | 10 | 0.001016s | 0.001002s | 0.001010s | byte equality observed |
| mp_at_2.test | 10 | 0.000464s | 0.000468s | 0.000984s | byte equality observed |
| mp_at_sf.test | 10 | 0.000977s | 0.001003s | 0.000995s | byte equality observed |
| mp_back.test | 10 | 0.000989s | 0.000993s | 0.000999s | byte equality observed |
| mp_back_2.test | 10 | 0.000465s | 0.000452s | 0.000990s | byte equality observed |
| mp_bind.test | 10 | 0.001012s | 0.001007s | 0.001005s | byte equality observed |
| mp_bind_back.test | 10 | 0.000999s | 0.001014s | 0.000997s | byte equality observed |
| mp_bind_front.test | 10 | 0.000995s | 0.000994s | 0.000991s | byte equality observed |
| mp_bind_q.test | 10 | 0.000980s | 0.001017s | 0.000975s | byte equality observed |
| mp_clear.test | 10 | 0.001005s | 0.001017s | 0.000976s | byte equality observed |
| mp_clear_2.test | 10 | 0.000458s | 0.000460s | 0.000945s | byte equality observed |
| mp_compose.test | 10 | 0.001001s | 0.000995s | 0.000965s | byte equality observed |
| mp_cond.test | 10 | 0.001019s | 0.001038s | 0.000974s | byte equality observed |
| mp_cond_sf.test | 10 | 0.000994s | 0.000989s | 0.000996s | byte equality observed |
| mp_contains.test | 10 | 0.001002s | 0.000991s | 0.000963s | byte equality observed |
| mp_copy_if.test | 10 | 0.000984s | 0.001007s | 0.000992s | byte equality observed |
| mp_copy_if_q.test | 10 | 0.000995s | 0.001010s | 0.000995s | byte equality observed |
| mp_count.test | 10 | 0.000996s | 0.000990s | 0.001005s | byte equality observed |
| mp_count_if.test | 10 | 0.000991s | 0.000987s | 0.000992s | byte equality observed |
| mp_count_if_q.test | 10 | 0.000994s | 0.001004s | 0.001017s | byte equality observed |
| mp_defer.test | 10 | 0.000999s | 0.001008s | 0.000983s | byte equality observed |
| mp_drop.test | 10 | 0.001013s | 0.001013s | 0.000990s | byte equality observed |
| mp_drop_2.test | 10 | 0.000455s | 0.000457s | 0.000975s | byte equality observed |
| mp_empty.test | 10 | 0.001019s | 0.001033s | 0.000999s | byte equality observed |
| mp_empty_2.test | 10 | 0.000463s | 0.000457s | 0.000939s | byte equality observed |
| mp_erase.test | 10 | 0.001037s | 0.001025s | 0.000998s | byte equality observed |
| mp_erase_2.test | 10 | 0.000456s | 0.000455s | 0.000950s | byte equality observed |
| mp_eval_if.test | 10 | 0.000988s | 0.000998s | 0.000993s | byte equality observed |
| mp_eval_if_not.test | 10 | 0.001004s | 0.000986s | 0.001019s | byte equality observed |
| mp_eval_if_sf.test | 10 | 0.000998s | 0.001021s | 0.000995s | byte equality observed |
| mp_eval_or.test | 10 | 0.001009s | 0.000969s | 0.001008s | byte equality observed |
| mp_fill.test | 10 | 0.001004s | 0.001007s | 0.000985s | byte equality observed |
| mp_fill_2.test | 10 | 0.000465s | 0.000457s | 0.000988s | byte equality observed |
| mp_filter.test | 10 | 0.001033s | 0.001015s | 0.001001s | byte equality observed |
| mp_find.test | 10 | 0.000982s | 0.000988s | 0.001038s | byte equality observed |
| mp_find_if.test | 10 | 0.000999s | 0.001005s | 0.000998s | byte equality observed |
| mp_find_if_q.test | 10 | 0.001008s | 0.000998s | 0.001029s | byte equality observed |
| mp_flatten.test | 10 | 0.000981s | 0.001010s | 0.000980s | byte equality observed |
| mp_fold.test | 10 | 0.001042s | 0.001010s | 0.000989s | byte equality observed |
| mp_fold_q.test | 10 | 0.001003s | 0.000997s | 0.000981s | byte equality observed |
| mp_fold_q_sf.test | 10 | 0.000999s | 0.000968s | 0.000986s | byte equality observed |
| mp_for_each.test | 10 | 0.001008s | 0.000996s | 0.000979s | byte equality observed |
| mp_from_sequence.test | 10 | 0.001016s | 0.001008s | 0.000986s | byte equality observed |
| mp_from_sequence_2.test | 10 | 0.000995s | 0.001006s | 0.000972s | byte equality observed |
| mp_from_sequence_3.test | 10 | 0.001012s | 0.000987s | 0.001005s | byte equality observed |
| mp_front.test | 10 | 0.001005s | 0.001029s | 0.001014s | byte equality observed |
| mp_front_2.test | 10 | 0.000467s | 0.000455s | 0.001002s | byte equality observed |
| mp_identity.test | 10 | 0.000973s | 0.000981s | 0.000973s | byte equality observed |
| mp_if.test | 10 | 0.000980s | 0.000989s | 0.001011s | byte equality observed |
| mp_if_sf.test | 10 | 0.000993s | 0.000998s | 0.000977s | byte equality observed |
| mp_inherit.test | 10 | 0.001026s | 0.000995s | 0.000993s | byte equality observed |
| mp_insert.test | 10 | 0.001024s | 0.001022s | 0.000992s | byte equality observed |
| mp_insert_2.test | 10 | 0.000467s | 0.000455s | 0.000980s | byte equality observed |
| mp_intersperse.test | 10 | 0.001014s | 0.001026s | 0.001007s | byte equality observed |
| mp_invoke_q.test | 10 | 0.001001s | 0.001018s | 0.001023s | byte equality observed |
| mp_invoke_q_sf.test | 10 | 0.001012s | 0.001005s | 0.000986s | byte equality observed |
| mp_iota.test | 10 | 0.000990s | 0.000997s | 0.000974s | byte equality observed |
| mp_iota_2.test | 10 | 0.001007s | 0.000985s | 0.000966s | byte equality observed |
| mp_is_list.test | 10 | 0.000981s | 0.000994s | 0.000977s | byte equality observed |
| mp_is_map.test | 10 | 0.000997s | 0.000997s | 0.000982s | byte equality observed |
| mp_is_set.test | 10 | 0.000987s | 0.000974s | 0.001002s | byte equality observed |
| mp_is_value_list.test | 10 | 0.000970s | 0.000991s | 0.001018s | byte equality observed |
| mp_iterate.test | 10 | 0.000978s | 0.000991s | 0.001006s | byte equality observed |
| mp_join.test | 10 | 0.000995s | 0.000990s | 0.001012s | byte equality observed |
| mp_lambda.test | 10 | 0.001006s | 0.001009s | 0.001001s | byte equality observed |
| mp_less.test | 10 | 0.001022s | 0.001035s | 0.001004s | byte equality observed |
| mp_list_c.test | 10 | 0.001008s | 0.001006s | 0.000974s | byte equality observed |
| mp_list_v.test | 10 | 0.000469s | 0.000454s | 0.000953s | byte equality observed |
| mp_map_contains.test | 10 | 0.001007s | 0.001006s | 0.000993s | byte equality observed |
| mp_map_erase.test | 10 | 0.000998s | 0.001013s | 0.001010s | byte equality observed |
| mp_map_find.test | 10 | 0.000990s | 0.000999s | 0.001033s | byte equality observed |
| mp_map_find_2.test | 10 | 0.000989s | 0.000999s | 0.001020s | byte equality observed |
| mp_map_find_3.test | 10 | 0.001031s | 0.001006s | 0.000977s | byte equality observed |
| mp_map_find_4.test | 10 | 0.000992s | 0.001011s | 0.001004s | byte equality observed |
| mp_map_insert.test | 10 | 0.000989s | 0.001016s | 0.001000s | byte equality observed |
| mp_map_keys.test | 10 | 0.001018s | 0.001019s | 0.001006s | byte equality observed |
| mp_map_replace.test | 10 | 0.001000s | 0.000985s | 0.001021s | byte equality observed |
| mp_map_update.test | 10 | 0.000999s | 0.001021s | 0.001039s | byte equality observed |
| mp_map_update_q.test | 10 | 0.001001s | 0.000980s | 0.001022s | byte equality observed |
| mp_max.test | 10 | 0.001032s | 0.000996s | 0.001034s | byte equality observed |
| mp_max_element.test | 10 | 0.000997s | 0.000991s | 0.000992s | byte equality observed |
| mp_max_element_2.test | 10 | 0.000465s | 0.000479s | 0.001006s | byte equality observed |
| mp_max_element_q.test | 10 | 0.001013s | 0.001051s | 0.001017s | byte equality observed |
| mp_max_element_q_2.test | 10 | 0.000458s | 0.000476s | 0.000984s | byte equality observed |
| mp_min.test | 10 | 0.001004s | 0.001002s | 0.000987s | byte equality observed |
| mp_min_element.test | 10 | 0.001007s | 0.001017s | 0.000974s | byte equality observed |
| mp_min_element_2.test | 10 | 0.000471s | 0.000460s | 0.000989s | byte equality observed |
| mp_min_element_q.test | 10 | 0.001021s | 0.001042s | 0.001016s | byte equality observed |
| mp_min_element_q_2.test | 10 | 0.000467s | 0.000449s | 0.000973s | byte equality observed |
| mp_none_of.test | 10 | 0.001011s | 0.000985s | 0.001007s | byte equality observed |
| mp_none_of_q.test | 10 | 0.001008s | 0.001005s | 0.001008s | byte equality observed |
| mp_not_fn.test | 10 | 0.000980s | 0.001009s | 0.001020s | byte equality observed |
| mp_nth_element.test | 10 | 0.000979s | 0.001022s | 0.001008s | byte equality observed |
| mp_nth_element_q.test | 10 | 0.000986s | 0.001016s | 0.000998s | byte equality observed |
| mp_or.test | 10 | 0.001004s | 0.001043s | 0.001017s | byte equality observed |
| mp_pairwise_fold.test | 10 | 0.000993s | 0.001030s | 0.001033s | byte equality observed |
| mp_pairwise_fold_q.test | 10 | 0.000997s | 0.000991s | 0.001012s | byte equality observed |
| mp_partial_sum.test | 10 | 0.000994s | 0.001022s | 0.001008s | byte equality observed |
| mp_partition.test | 10 | 0.000993s | 0.000985s | 0.001007s | byte equality observed |
| mp_partition_q.test | 10 | 0.000998s | 0.000988s | 0.000997s | byte equality observed |
| mp_plus.test | 10 | 0.001014s | 0.001061s | 0.001017s | byte equality observed |
| mp_pop_back.test | 10 | 0.001032s | 0.001025s | 0.000990s | byte equality observed |
| mp_pop_back_2.test | 10 | 0.000453s | 0.000462s | 0.000991s | byte equality observed |
| mp_pop_front.test | 10 | 0.001016s | 0.001027s | 0.000994s | byte equality observed |
| mp_pop_front_2.test | 10 | 0.000461s | 0.000465s | 0.000986s | byte equality observed |
| mp_power_set.test | 10 | 0.001026s | 0.001007s | 0.000986s | byte equality observed |
| mp_product.test | 10 | 0.000994s | 0.001015s | 0.001013s | byte equality observed |
| mp_push_back.test | 10 | 0.001000s | 0.001015s | 0.000995s | byte equality observed |
| mp_push_back_2.test | 10 | 0.000461s | 0.000455s | 0.000972s | byte equality observed |
| mp_push_front.test | 10 | 0.001015s | 0.001027s | 0.000982s | byte equality observed |
| mp_push_front_2.test | 10 | 0.000462s | 0.000467s | 0.000973s | byte equality observed |
| mp_quote.test | 10 | 0.000977s | 0.001017s | 0.000991s | byte equality observed |
| mp_quote_trait.test | 10 | 0.001001s | 0.001019s | 0.000987s | byte equality observed |
| mp_remove.test | 10 | 0.000997s | 0.000993s | 0.001001s | byte equality observed |
| mp_remove_if.test | 10 | 0.000988s | 0.001008s | 0.001002s | byte equality observed |
| mp_remove_if_q.test | 10 | 0.000995s | 0.000977s | 0.000991s | byte equality observed |
| mp_rename.test | 10 | 0.001035s | 0.000987s | 0.001019s | byte equality observed |
| mp_rename_2.test | 10 | 0.000464s | 0.000484s | 0.000971s | byte equality observed |
| mp_rename_v.test | 10 | 0.000468s | 0.000471s | 0.000976s | byte equality observed |
| mp_repeat.test | 10 | 0.001034s | 0.001042s | 0.000988s | byte equality observed |
| mp_repeat_2.test | 10 | 0.000453s | 0.000451s | 0.001001s | byte equality observed |
| mp_repeat_3.test | 10 | 0.000989s | 0.001040s | 0.001026s | byte equality observed |
| mp_replace.test | 10 | 0.000973s | 0.000994s | 0.000993s | byte equality observed |
| mp_replace_at.test | 10 | 0.000985s | 0.001025s | 0.001012s | byte equality observed |
| mp_replace_at_c.test | 10 | 0.000989s | 0.001032s | 0.001020s | byte equality observed |
| mp_replace_front.test | 10 | 0.001019s | 0.001010s | 0.001011s | byte equality observed |
| mp_replace_front_2.test | 10 | 0.000455s | 0.000454s | 0.000986s | byte equality observed |
| mp_replace_if.test | 10 | 0.000996s | 0.000988s | 0.000998s | byte equality observed |
| mp_replace_if_q.test | 10 | 0.001020s | 0.001017s | 0.001016s | byte equality observed |
| mp_replace_second.test | 10 | 0.001014s | 0.001048s | 0.001006s | byte equality observed |
| mp_replace_second_2.test | 10 | 0.000464s | 0.000475s | 0.000994s | byte equality observed |
| mp_replace_third.test | 10 | 0.001020s | 0.001019s | 0.000998s | byte equality observed |
| mp_replace_third_2.test | 10 | 0.000463s | 0.000456s | 0.000955s | byte equality observed |
| mp_reverse.test | 10 | 0.001050s | 0.000991s | 0.001020s | byte equality observed |
| mp_reverse_fold.test | 10 | 0.001012s | 0.000982s | 0.001003s | byte equality observed |
| mp_reverse_fold_q.test | 10 | 0.000967s | 0.000981s | 0.001002s | byte equality observed |
| mp_rotate_left.test | 10 | 0.001011s | 0.000999s | 0.001015s | byte equality observed |
| mp_rotate_right.test | 10 | 0.001010s | 0.001027s | 0.000991s | byte equality observed |
| mp_same.test | 10 | 0.000988s | 0.001001s | 0.000974s | byte equality observed |
| mp_second.test | 10 | 0.000993s | 0.001019s | 0.000980s | byte equality observed |
| mp_second_2.test | 10 | 0.000467s | 0.000461s | 0.000955s | byte equality observed |
| mp_set_contains.test | 10 | 0.000982s | 0.001019s | 0.000977s | byte equality observed |
| mp_set_difference.test | 10 | 0.000988s | 0.001024s | 0.000981s | byte equality observed |
| mp_set_difference_sf.test | 10 | 0.000987s | 0.001033s | 0.000995s | byte equality observed |
| mp_set_intersection.test | 10 | 0.001005s | 0.000982s | 0.000996s | byte equality observed |
| mp_set_intersection_sf.test | 10 | 0.000992s | 0.000969s | 0.001021s | byte equality observed |
| mp_set_push_back.test | 10 | 0.000994s | 0.001026s | 0.001017s | byte equality observed |
| mp_set_push_front.test | 10 | 0.001028s | 0.000995s | 0.000986s | byte equality observed |
| mp_set_union.test | 10 | 0.000993s | 0.000978s | 0.000973s | byte equality observed |
| mp_set_union_sf.test | 10 | 0.001003s | 0.001021s | 0.001008s | byte equality observed |
| mp_similar.test | 10 | 0.001012s | 0.001040s | 0.000995s | byte equality observed |
| mp_size.test | 10 | 0.001007s | 0.001044s | 0.000984s | byte equality observed |
| mp_size_2.test | 10 | 0.000457s | 0.000466s | 0.000994s | byte equality observed |
| mp_slice.test | 10 | 0.001040s | 0.001026s | 0.001000s | byte equality observed |
| mp_slice_2.test | 10 | 0.000460s | 0.000465s | 0.000984s | byte equality observed |
| mp_sliding_fold.test | 10 | 0.001037s | 0.001040s | 0.001002s | byte equality observed |
| mp_sliding_fold_q.test | 10 | 0.001043s | 0.001029s | 0.001002s | byte equality observed |
| mp_sort.test | 10 | 0.001037s | 0.001027s | 0.000999s | byte equality observed |
| mp_sort_q.test | 10 | 0.001005s | 0.001039s | 0.001024s | byte equality observed |
| mp_split.test | 10 | 0.001035s | 0.001058s | 0.001002s | byte equality observed |
| mp_starts_with.test | 10 | 0.000992s | 0.001003s | 0.000993s | byte equality observed |
| mp_starts_with_sf.test | 10 | 0.001011s | 0.001028s | 0.000986s | byte equality observed |
| mp_take.test | 10 | 0.001017s | 0.001009s | 0.000995s | byte equality observed |
| mp_take_2.test | 10 | 0.000470s | 0.000458s | 0.001001s | byte equality observed |
| mp_third.test | 10 | 0.001033s | 0.001051s | 0.000989s | byte equality observed |
| mp_third_2.test | 10 | 0.000464s | 0.000459s | 0.000991s | byte equality observed |
| mp_transform.test | 10 | 0.001024s | 0.000996s | 0.000995s | byte equality observed |
| mp_transform_2.test | 10 | 0.000965s | 0.000998s | 0.001003s | byte equality observed |
| mp_transform_front.test | 10 | 0.001004s | 0.001014s | 0.000990s | byte equality observed |
| mp_transform_front_2.test | 10 | 0.000469s | 0.000466s | 0.000989s | byte equality observed |
| mp_transform_if.test | 10 | 0.001005s | 0.000998s | 0.001012s | byte equality observed |
| mp_transform_if_q.test | 10 | 0.000999s | 0.001037s | 0.001003s | byte equality observed |
| mp_transform_q.test | 10 | 0.001000s | 0.001022s | 0.000979s | byte equality observed |
| mp_transform_q_2.test | 10 | 0.001014s | 0.000983s | 0.000996s | byte equality observed |
| mp_transform_second.test | 10 | 0.001022s | 0.001019s | 0.000970s | byte equality observed |
| mp_transform_second_2.test | 10 | 0.000464s | 0.000460s | 0.000991s | byte equality observed |
| mp_transform_sf.test | 10 | 0.000980s | 0.001039s | 0.001023s | byte equality observed |
| mp_transform_third.test | 10 | 0.001001s | 0.000994s | 0.001005s | byte equality observed |
| mp_transform_third_2.test | 10 | 0.000461s | 0.000479s | 0.000982s | byte equality observed |
| mp_unique.test | 10 | 0.000990s | 0.001018s | 0.000997s | byte equality observed |
| mp_unique_if.test | 10 | 0.001043s | 0.001019s | 0.001001s | byte equality observed |
| mp_unique_if_q.test | 10 | 0.001002s | 0.001017s | 0.000998s | byte equality observed |
| mp_valid.test | 10 | 0.000980s | 0.000983s | 0.000963s | byte equality observed |
| mp_valid_and_true.test | 10 | 0.001014s | 0.001017s | 0.000980s | byte equality observed |
| mp_value.test | 10 | 0.000461s | 0.000470s | 0.000978s | byte equality observed |
| mp_with_index.test | 10 | 0.001363s | 0.001339s | 0.001247s | byte equality observed |
| mp_with_index_cx.test | 10 | 0.000464s | 0.000455s | 0.000997s | byte equality observed |
| mpl.test | 10 | 0.001002s | 0.001009s | 0.000999s | byte equality observed |
| mpl_list.test | 10 | 0.000980s | 0.001017s | 0.001003s | byte equality observed |
| mpl_tuple.test | 10 | 0.000986s | 0.000986s | 0.000999s | byte equality observed |
| mpl_version.test | 10 | 0.000984s | 0.001023s | 0.000992s | byte equality observed |
| set_version.test | 10 | 0.000989s | 0.001031s | 0.001008s | byte equality observed |
| tuple_apply.test | 10 | 0.001004s | 0.001008s | 0.001010s | byte equality observed |
| tuple_for_each.test | 10 | 0.001011s | 0.001005s | 0.000967s | byte equality observed |
| tuple_transform.test | 10 | 0.001003s | 0.001032s | 0.000984s | byte equality observed |
| tuple_transform_2.test | 10 | 0.001006s | 0.001046s | 0.001001s | byte equality observed |
| tuple_version.test | 10 | 0.000983s | 0.001007s | 0.000989s | byte equality observed |
| utility_version.test | 10 | 0.001016s | 0.001012s | 0.000984s | byte equality observed |
| version.test | 10 | 0.000997s | 0.001013s | 0.000970s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44813597235).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
