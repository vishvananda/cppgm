# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.375047 | 0.853348 | 1.088618 | 0.001371 | 0.001305 | 0.001449 |
| any.test | RUN | 0.369577 | 0.822920 | 1.027288 | 0.001607 | 0.001551 | 0.001631 |
| clear.test | RUN | 0.272113 | 0.755314 | 0.834977 | 0.001414 | 0.001597 | 0.001651 |
| copy.test | RUN | 0.228202 | 0.562938 | 0.678277 | 0.001672 | 0.001566 | 0.001498 |
| count.test | RUN | 0.249934 | 0.635432 | 0.754842 | 0.001927 | 0.001651 | 0.001522 |
| count_if.test | RUN | 0.241802 | 0.595660 | 0.690362 | 0.001503 | 0.001731 | 0.001528 |
| erase.test | RUN | 0.353558 | 1.029137 | 1.139697 | 0.001431 | 0.001815 | 0.001630 |
| erase_key.test | RUN | 0.333555 | 1.020503 | 1.075946 | 0.001624 | 0.001624 | 0.001483 |
| filter.test | RUN | 0.304225 | 0.856533 | 0.971527 | 0.001672 | 0.001778 | 0.001649 |
| filter_if.test | RUN | 0.336884 | 1.023274 | 1.138684 | 0.001569 | 0.001776 | 0.001684 |
| find.test | RUN | 0.287948 | 0.711523 | 0.867580 | 0.001524 | 0.001571 | 0.001527 |
| find_if.test | RUN | 0.274737 | 0.638787 | 0.795525 | 0.001600 | 0.001828 | 0.001680 |
| fold.test | RUN | 0.302616 | 0.800417 | 0.976486 | 0.001719 | 0.001862 | 0.001592 |
| for_each.test | RUN | 0.271469 | 0.735672 | 0.842638 | 0.001706 | 0.001756 | 0.001681 |
| insert.test | RUN | 0.392079 | 1.288610 | 1.381651 | 0.001524 | 0.001761 | 0.001483 |
| insert_range.test | RUN | 0.407381 | 1.286866 | 1.392231 | 0.001560 | 0.001679 | 0.001560 |
| iter_fold.test | RUN | 0.453867 | 1.224197 | 1.621183 | 0.001770 | 0.001793 | 0.001676 |
| move.test | RUN | 0.237944 | 0.580581 | 0.720625 | 0.001645 | 0.001565 | 0.001458 |
| none.test | RUN | 0.374841 | 0.835762 | 1.047008 | 0.001636 | 0.001690 | 0.001653 |
| pop_back.test | RUN | 0.376689 | 1.130183 | 1.232674 | 0.001625 | 0.001772 | 0.001635 |
| pop_front.test | RUN | 0.307945 | 0.911401 | 0.981652 | 0.001642 | 0.001788 | 0.001502 |
| push_back.test | RUN | 0.390986 | 1.302561 | 1.347710 | 0.001668 | 0.001902 | 0.001606 |
| push_front.test | RUN | 0.345779 | 1.071608 | 1.143541 | 0.001704 | 0.001760 | 0.001566 |
| remove.test | RUN | 0.383407 | 1.224351 | 1.364133 | 0.001510 | 0.001547 | 0.001856 |
| remove_if.test | RUN | 0.349429 | 1.024788 | 1.131706 | 0.001689 | 0.001860 | 0.001674 |
| replace.test | RUN | 0.340590 | 0.984102 | 1.080304 | 0.001693 | 0.001733 | 0.001636 |
| replace_if.test | RUN | 0.335097 | 0.969769 | 1.055623 | 0.001728 | 0.001834 | 0.001652 |
| reverse_fold.test | RUN | 0.510648 | 1.379582 | 1.791373 | 0.001478 | 0.001752 | 0.001492 |
| reverse_iter_fold.test | RUN | 0.514110 | 1.425813 | 1.880637 | 0.001592 | 0.001605 | 0.001636 |
| reverse.test | RUN | 0.324705 | 1.034315 | 1.074514 | 0.001631 | 0.001714 | 0.001549 |
| segmented_for_each.test | RUN | 0.564449 | 1.904319 | 2.205401 | 0.001751 | 0.001564 | 0.001295 |
| segmented_find.test | RUN | 0.346454 | 1.034090 | 1.215456 | 0.001450 | 0.001662 | 0.001454 |
| segmented_find_if.test | RUN | 0.339961 | 1.018756 | 1.240621 | 0.001625 | 0.001718 | 0.001675 |
| segmented_fold.test | RUN | 0.427633 | 1.343702 | 1.549545 | 0.001706 | 0.001878 | 0.001573 |
| transform.test | RUN | 0.343379 | 1.067924 | 1.139937 | 0.001630 | 0.001708 | 0.001653 |
| join.test | RUN | 0.252987 | 0.649061 | 0.792880 | 0.001542 | 0.001778 | 0.001632 |
| zip.test | RUN | 0.443218 | 1.212065 | 1.510668 | 0.001714 | 0.001619 | 0.001554 |
| zip2.test | RUN | 0.437393 | 1.151858 | 1.422651 | 0.001523 | 0.001746 | 0.001399 |
| zip_ignore.test | RUN | 0.334230 | 0.823128 | 0.968648 | 0.001488 | 0.001626 | 0.001399 |
| flatten.test | RUN | 0.313657 | 0.887239 | 0.990973 | 0.001524 | 0.001787 | 0.001524 |
| ticket-5490.test | COMPILE | 0.166973 | 0.399119 | 0.460797 | — | — | — |
| as_deque.test | RUN | 0.308629 | 0.845397 | 1.049049 | 0.001395 | 0.001688 | 0.001596 |
| as_list.test | RUN | 0.343768 | 1.045537 | 1.146746 | 0.001663 | 0.001645 | 0.001597 |
| as_map.test | RUN | 0.351372 | 1.018541 | 1.141561 | 0.001535 | 0.001633 | 0.001670 |
| as_map_assoc.test | RUN | 0.337907 | 0.955204 | 1.070962 | 0.001480 | 0.001650 | 0.001618 |
| as_set.test | RUN | 0.390806 | 1.205162 | 1.329036 | 0.001621 | 0.001407 | 0.001263 |
| as_vector.test | RUN | 0.353089 | 1.093247 | 1.153634 | 0.001520 | 0.001497 | 0.001410 |
| boost_tuple.test | RUN | 0.359815 | 1.043974 | 1.163146 | 0.001451 | 0.001167 | 0.001573 |
| boost_tuple_iterator.test | RUN | 0.234030 | 0.619391 | 0.690990 | 0.001594 | 0.001466 | 0.001617 |
| cons.test | RUN | 0.445637 | 1.203579 | 1.369471 | 0.001548 | 0.001664 | 0.001452 |
| convert_boost_tuple.test | RUN | 0.280865 | 0.917748 | 0.890401 | 0.001813 | 0.001676 | 0.001653 |
| convert_deque.test | RUN | 0.283865 | 0.905414 | 0.899086 | 0.001488 | 0.001458 | 0.001546 |
| convert_list.test | RUN | 0.279244 | 0.927101 | 0.916972 | 0.001559 | 0.001714 | 0.001389 |
| convert_std_pair.test | RUN | 0.296393 | 0.918482 | 0.999413 | 0.001706 | 0.001770 | 0.001656 |
| convert_std_tuple.test | RUN | 0.277079 | 0.903838 | 0.965886 | 0.001704 | 0.001470 | 0.001435 |
| convert_vector.test | RUN | 0.281120 | 0.892376 | 0.946798 | 0.001381 | 0.001498 | 0.001674 |
| filter_view.test | RUN | 0.338232 | 0.956944 | 1.112279 | 0.001745 | 0.001664 | 0.001638 |
| hash.test | RUN | 0.329156 | 0.874027 | 1.019694 | 0.001774 | 0.001738 | 0.001643 |
| io.test | RUN | 0.358129 | 1.230529 | 1.260170 | 0.001786 | 0.002030 | 0.001842 |
| iterator_range.test | RUN | 0.319337 | 0.938344 | 1.040372 | 0.001494 | 0.001672 | 0.001578 |
| joint_view.test | RUN | 0.440689 | 1.547207 | 1.526363 | 0.001656 | 0.001695 | 0.001594 |
| list_comparison.test | RUN | 0.250793 | 0.619536 | 0.726764 | 0.001590 | 0.001643 | 0.001469 |
| list_construction.test | RUN | 0.239694 | 0.612243 | 0.719243 | 0.001432 | 0.001487 | 0.001637 |
| list_copy.test | RUN | 0.374492 | 1.104775 | 1.255658 | 0.001655 | 0.001494 | 0.001485 |
| list_iterator.test | RUN | 0.242412 | 0.606146 | 0.714413 | 0.001676 | 0.001509 | 0.001590 |
| list_hash.test | RUN | 0.335085 | 1.255577 | 1.036541 | 0.001682 | 0.001746 | 0.001393 |
| list_make.test | RUN | 0.258167 | 0.668897 | 0.797641 | 0.001535 | 0.001594 | 0.001535 |
| list_misc.test | RUN | 0.338687 | 0.808101 | 0.963470 | 0.001582 | 0.001675 | 0.001666 |
| list_mutate.test | RUN | 0.227070 | 0.510269 | 0.645919 | 0.001518 | 0.001592 | 0.001492 |
| list_nest.test | RUN | 0.455803 | 1.512596 | 1.769242 | 0.001489 | 0.001716 | 0.001662 |
| list_tie.test | RUN | 0.245506 | 0.600902 | 0.724951 | 0.001646 | 0.001531 | 0.001664 |
| list_value_at.test | RUN | 0.233560 | 0.565299 | 0.665728 | 0.001513 | 0.001436 | 0.001670 |
| deque_comparison.test | RUN | 0.245789 | 0.643283 | 0.723894 | 0.001417 | 0.001462 | 0.001601 |
| deque_construction.test | RUN | 0.248776 | 0.607545 | 0.770851 | 0.001844 | 0.001729 | 0.001377 |
| deque_copy.test | RUN | 0.364191 | 1.026038 | 1.170697 | 0.001524 | 0.001488 | 0.001617 |
| deque_iterator.test | RUN | 0.247198 | 0.644153 | 0.721234 | 0.001578 | 0.001544 | 0.001534 |
| deque_hash.test | RUN | 0.347691 | 1.202372 | 1.008733 | 0.001404 | 0.001634 | 0.001602 |
| deque_is_constructible.test | COMPILE | 0.132222 | 0.279026 | 0.327337 | — | — | — |
| deque_make.test | RUN | 0.245405 | 0.620051 | 0.750843 | 0.001790 | 0.001534 | 0.001643 |
| deque_misc.test | RUN | 0.320554 | 0.809195 | 0.919064 | 0.001455 | 0.001551 | 0.001588 |
| deque_move.test | RUN | 0.253228 | 0.665390 | 0.732868 | 0.001435 | 0.001614 | 0.001486 |
| deque_mutate.test | RUN | 0.224711 | 0.530479 | 0.636391 | 0.001610 | 0.001690 | 0.001551 |
| deque_nest.test | RUN | 0.697622 | 2.421318 | 2.826520 | 0.001657 | 0.001854 | 0.001547 |
| deque_tie.test | RUN | 0.239936 | 0.567132 | 0.667142 | 0.001636 | 0.001497 | 0.001646 |
| deque_value_at.test | RUN | 0.235131 | 0.558835 | 0.678623 | 0.001294 | 0.001583 | 0.001424 |
| front_extended_deque.test | RUN | 0.339819 | 0.842472 | 0.975223 | 0.001625 | 0.001712 | 0.001515 |
| back_extended_deque.test | RUN | 0.326109 | 0.822657 | 1.014723 | 0.001533 | 0.001482 | 0.001698 |
| make_list.test | RUN | 0.256780 | 0.668546 | 0.762256 | 0.001843 | 0.001791 | 0.001680 |
| make_vector.test | RUN | 0.256719 | 0.680805 | 0.736576 | 0.001399 | 0.001840 | 0.001453 |
| map.test | RUN | 0.344768 | 1.031763 | 1.143384 | 0.001664 | 0.001648 | 0.001187 |
| map_comparison.test | RUN | 0.252864 | 0.655339 | 0.730812 | 0.001543 | 0.001638 | 0.001584 |
| map_construction.test | RUN | 0.257517 | 0.637701 | 0.739026 | 0.001534 | 0.001749 | 0.001566 |
| map_copy.test | RUN | 0.308798 | 0.826904 | 0.899952 | 0.001520 | 0.001660 | 0.001567 |
| map_misc.test | RUN | 0.320379 | 0.817095 | 0.908695 | 0.001424 | 0.001634 | 0.001767 |
| map_move.test | RUN | 0.253829 | 0.691674 | 0.734924 | 0.001678 | 0.001644 | 0.001468 |
| map_mutate.test | RUN | 0.226490 | 0.533721 | 0.635375 | 0.001571 | 0.001715 | 0.001352 |
| map_tie.test | RUN | 0.238063 | 0.545069 | 0.655715 | 0.001632 | 0.001477 | 0.001520 |
| nil.test | RUN | 0.152875 | 0.372960 | 0.447216 | 0.001775 | 0.001456 | 0.001689 |
| nview.test | RUN | 0.316186 | 0.790180 | 0.933737 | 0.001536 | 0.001690 | 0.001569 |
| reverse_view.test | RUN | 0.431423 | 1.286496 | 1.397321 | 0.001606 | 0.001703 | 0.001632 |
| segmented_iterator_range.test | RUN | 0.477124 | 1.539917 | 1.743296 | 0.001944 | 0.001798 | 0.001440 |
| set.test | RUN | 0.317812 | 0.890236 | 0.968888 | 0.001563 | 0.001765 | 0.001583 |
| single_view.test | RUN | 0.286022 | 0.809994 | 0.896144 | 0.001634 | 0.001652 | 0.001470 |
| std_pair.test | RUN | 0.355305 | 1.044384 | 1.124346 | 0.001884 | 0.001812 | 0.001398 |
| boost_array.test | RUN | 0.302999 | 0.720864 | 0.855810 | 0.001426 | 0.001652 | 0.001567 |
| array.test | RUN | 0.302742 | 0.722814 | 0.838566 | 0.001627 | 0.001546 | 0.001594 |
| std_array.test | RUN | 0.299997 | 0.711946 | 0.834605 | 0.001684 | 0.001630 | 0.001392 |
| tuple_comparison.test | RUN | 0.262705 | 0.681233 | 0.782625 | 0.001630 | 0.001661 | 0.001626 |
| tuple_construction.test | RUN | 0.270890 | 0.667510 | 0.793085 | 0.001540 | 0.001729 | 0.001490 |
| tuple_conversion.test | RUN | 0.604306 | 2.107534 | 2.558592 | 0.001522 | 0.001630 | 0.001487 |
| tuple_copy.test | RUN | 0.397456 | 1.181477 | 1.372911 | 0.001639 | 0.001478 | 0.001444 |
| tuple_element.test | RUN | 0.245351 | 0.616871 | 0.708699 | 0.001126 | 0.001591 | 0.001544 |
| tuple_make.test | RUN | 0.263948 | 0.699627 | 0.775089 | 0.001674 | 0.001685 | 0.001552 |
| tuple_misc.test | RUN | 0.338387 | 0.910497 | 0.990340 | 0.001652 | 0.001714 | 0.001583 |
| tuple_mutate.test | RUN | 0.237881 | 0.612152 | 0.721289 | 0.001818 | 0.001581 | 0.001454 |
| tuple_nest.test | RUN | 0.996214 | 4.168093 | 4.831950 | 0.001539 | 0.001564 | 0.001658 |
| tuple_hash.test | RUN | 0.342621 | 1.232931 | 1.022911 | 0.001650 | 0.001814 | 0.001407 |
| tuple_tie.test | RUN | 0.253155 | 0.621566 | 0.753396 | 0.001541 | 0.001674 | 0.001544 |
| tuple_traits__maybe_variadic.test | RUN | 0.270476 | 0.786058 | 0.814731 | 0.001697 | 0.001702 | 0.001544 |
| tuple_traits__no_variadic.test | RUN | 0.305882 | 0.786314 | 0.849714 | 0.001463 | 0.001705 | 0.001616 |
| transform_view.test | RUN | 0.407870 | 1.309095 | 1.382599 | 0.001653 | 0.001819 | 0.001608 |
| identity_view.test | RUN | 0.387302 | 1.188856 | 1.328475 | 0.001618 | 0.001313 | 0.001668 |
| vector_comparison.test | RUN | 0.250017 | 0.655743 | 0.729080 | 0.001404 | 0.001594 | 0.001637 |
| vector_construction.test | RUN | 0.248567 | 0.627822 | 0.705839 | 0.001506 | 0.001701 | 0.001649 |
| vector_conversion.test | RUN | 0.728738 | 2.664054 | 3.354994 | 0.001680 | 0.001765 | 0.001535 |
| vector_copy.test | RUN | 0.370167 | 1.157310 | 1.331679 | 0.001546 | 0.001704 | 0.001659 |
| vector_iterator.test | RUN | 0.237213 | 0.652209 | 0.734556 | 0.001505 | 0.001704 | 0.001587 |
| vector_make.test | RUN | 0.258195 | 0.658146 | 0.758328 | 0.001491 | 0.001477 | 0.001680 |
| vector_misc.test | RUN | 0.322296 | 0.813768 | 0.925760 | 0.001447 | 0.001717 | 0.001470 |
| vector_move.test | RUN | 0.249203 | 0.674446 | 0.755720 | 0.001717 | 0.001618 | 0.001529 |
| vector_mutate.test | RUN | 0.231819 | 0.554653 | 0.636271 | 0.001404 | 0.001570 | 0.001426 |
| vector_n.test | RUN | 0.281257 | 0.691088 | 0.871010 | 0.001666 | 0.001664 | 0.001732 |
| vector_nest.test | RUN | 1.037787 | 4.355916 | 4.868776 | 0.001586 | 0.001603 | 0.001523 |
| vector_hash.test | RUN | 0.329127 | 1.216371 | 1.009665 | 0.001619 | 0.001553 | 0.001617 |
| vector_tie.test | RUN | 0.247848 | 0.612093 | 0.700961 | 0.001712 | 0.001764 | 0.001603 |
| vector_traits__maybe_variadic.test | RUN | 0.260517 | 0.688337 | 0.722158 | 0.001764 | 0.001740 | 0.001730 |
| vector_traits__no_variadic.test | RUN | 0.281295 | 0.756812 | 0.798092 | 0.001526 | 0.001674 | 0.001590 |
| vector_value_at.test | RUN | 0.230567 | 0.555514 | 0.660982 | 0.001507 | 0.001669 | 0.001482 |
| zip_view.test | RUN | 0.476763 | 1.364576 | 1.674138 | 0.001519 | 0.001762 | 0.001488 |
| zip_view2.test | RUN | 0.395401 | 1.083299 | 1.298232 | 0.001502 | 0.001289 | 0.001337 |
| zip_view_ignore.test | RUN | 0.357552 | 0.967051 | 1.154266 | 0.001559 | 0.001646 | 0.001532 |
| repetitive_view.test | RUN | 0.602713 | 1.737430 | 2.240732 | 0.001561 | 0.001670 | 0.001391 |
| deduce_sequence.test | RUN | 0.290657 | 0.736163 | 0.886904 | 0.001499 | 0.001790 | 0.001678 |
| adapt_adt_named.test | RUN | 0.355220 | 1.048477 | 1.119150 | 0.001515 | 0.001648 | 0.001703 |
| adapt_adt_named_empty.test | RUN | 0.309538 | 0.833868 | 0.944055 | 0.001542 | 0.001674 | 0.001574 |
| adapt_adt.test | RUN | 0.395300 | 1.365126 | 1.357362 | 0.001548 | 0.001786 | 0.001682 |
| adapt_adt_empty.test | RUN | 0.303527 | 0.848647 | 0.935871 | 0.001726 | 0.001691 | 0.001655 |
| adapt_assoc_adt_named.test | RUN | 0.392565 | 1.088187 | 1.229652 | 0.001536 | 0.001741 | 0.001625 |
| adapt_assoc_adt_named_empty.test | RUN | 0.317176 | 0.832652 | 0.944831 | 0.001574 | 0.001648 | 0.001683 |
| adapt_assoc_adt.test | RUN | 0.402728 | 1.123678 | 1.257086 | 0.001572 | 0.001660 | 0.001557 |
| adapt_assoc_adt_empty.test | RUN | 0.304562 | 0.844571 | 0.930473 | 0.001678 | 0.001542 | 0.001531 |
| adapt_assoc_struct_named.test | RUN | 0.390077 | 1.068633 | 1.183487 | 0.001566 | 0.001684 | 0.001442 |
| adapt_assoc_struct_named_empty.test | RUN | 0.303253 | 0.833794 | 0.922451 | 0.001531 | 0.001725 | 0.001522 |
| adapt_assoc_struct.test | RUN | 0.349176 | 1.025340 | 1.117204 | 0.001556 | 0.001710 | 0.001599 |
| adapt_assoc_struct_empty.test | RUN | 0.302179 | 0.830427 | 0.927624 | 0.001496 | 0.002452 | 0.001621 |
| adapt_assoc_tpl_adt.test | RUN | 0.416700 | 1.184126 | 1.303871 | 0.001617 | 0.001666 | 0.001450 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.310871 | 0.847821 | 0.918562 | 0.001669 | 0.001732 | 0.001611 |
| adapt_assoc_tpl_struct.test | RUN | 0.335604 | 0.997854 | 1.080762 | 0.001432 | 0.001569 | 0.001545 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.302820 | 0.825843 | 0.926885 | 0.001560 | 0.001473 | 0.001570 |
| adapt_struct_named.test | RUN | 0.353235 | 1.021553 | 1.091342 | 0.001581 | 0.001539 | 0.001631 |
| adapt_struct_named_empty.test | RUN | 0.312443 | 0.830541 | 0.925062 | 0.001438 | 0.001573 | 0.001641 |
| adapt_struct.test | RUN | 0.378530 | 1.161686 | 1.247135 | 0.001502 | 0.001930 | 0.001685 |
| adapt_struct_empty.test | RUN | 0.306653 | 0.838588 | 0.925975 | 0.001708 | 0.001590 | 0.001675 |
| adapt_tpl_adt.test | RUN | 0.396549 | 1.351430 | 1.313199 | 0.001472 | 0.001471 | 0.001570 |
| adapt_tpl_adt_empty.test | RUN | 0.312210 | 0.849678 | 0.928235 | 0.001644 | 0.001683 | 0.001568 |
| adapt_tpl_struct.test | RUN | 0.322849 | 0.942696 | 1.035796 | 0.001482 | 0.001610 | 0.001610 |
| adapt_tpl_struct_empty.test | RUN | 0.310089 | 0.850224 | 0.926603 | 0.001473 | 0.001617 | 0.001639 |
| adt_attribute_proxy.test | RUN | 0.343075 | 0.818028 | 0.973558 | 0.001483 | 0.001815 | 0.001656 |
| define_struct.test | RUN | 0.425376 | 1.160895 | 1.304239 | 0.001660 | 0.001618 | 0.001624 |
| define_struct_empty.test | RUN | 0.367356 | 0.956972 | 1.056688 | 0.001656 | 0.001694 | 0.001700 |
| define_struct_move.test | RUN | 0.233936 | 0.538324 | 0.631893 | 0.001476 | 0.002362 | 0.001483 |
| define_struct_inline.test | RUN | 0.447284 | 1.397434 | 1.494273 | 0.001676 | 0.001571 | 0.001714 |
| define_struct_inline_empty.test | RUN | 0.358346 | 0.965764 | 1.070899 | 0.001500 | 0.001780 | 0.001684 |
| define_struct_inline_move.test | RUN | 0.235756 | 0.521004 | 0.642601 | 0.001449 | 0.001689 | 0.001420 |
| define_assoc_struct.test | RUN | 0.410358 | 1.081359 | 1.247953 | 0.001589 | 0.001641 | 0.001648 |
| define_assoc_struct_empty.test | RUN | 0.363523 | 0.945460 | 1.074950 | 0.001559 | 0.001738 | 0.001624 |
| define_assoc_struct_move.test | RUN | 0.234526 | 0.516309 | 0.633287 | 0.001697 | 0.001689 | 0.001624 |
| define_tpl_struct.test | RUN | 0.398727 | 1.105576 | 1.220632 | 0.001683 | 0.001490 | 0.001454 |
| define_tpl_struct_empty.test | RUN | 0.365546 | 0.946344 | 1.072287 | 0.001712 | 0.001716 | 0.001616 |
| define_tpl_struct_move.test | RUN | 0.235024 | 0.542647 | 0.638544 | 0.001395 | 0.001506 | 0.001554 |
| define_tpl_struct_inline.test | RUN | 0.424172 | 1.277404 | 1.382398 | 0.001731 | 0.001555 | 0.001237 |
| define_tpl_struct_inline_empty.test | RUN | 0.370359 | 0.948676 | 1.093859 | 0.001554 | 0.001620 | 0.001626 |
| define_tpl_struct_inline_move.test | RUN | 0.238132 | 0.534630 | 0.643616 | 0.001666 | 0.001626 | 0.001324 |
| define_assoc_tpl_struct.test | RUN | 0.405920 | 1.117161 | 1.267907 | 0.001638 | 0.001786 | 0.001663 |
| define_assoc_tpl_struct_empty.test | RUN | 0.367696 | 0.950105 | 1.085176 | 0.001520 | 0.001481 | 0.001557 |
| define_assoc_tpl_struct_move.test | RUN | 0.230992 | 0.541936 | 0.640179 | 0.001832 | 0.001481 | 0.001656 |
| std_tuple.test | RUN | 0.253479 | 0.607734 | 0.707469 | 0.001502 | 0.001648 | 0.001539 |
| std_tuple_iterator.test | RUN | 0.244274 | 0.635038 | 0.717822 | 0.001708 | 0.001462 | 0.001544 |
| ref_vector.test | RUN | 0.274308 | 0.658054 | 0.775686 | 0.001935 | 0.001634 | 0.001659 |
| flatten_view.test | RUN | 0.298763 | 0.816804 | 0.908733 | 0.001687 | 0.001666 | 0.001446 |
| github-159.test | COMPILE | 0.134237 | 0.319556 | 0.329680 | — | — | — |
| github-176.test | RUN | 0.269370 | 0.704400 | 0.772384 | 0.001666 | 0.001687 | 0.001580 |
| size.test | COMPILE | 0.226282 | 0.499434 | 0.603730 | — | — | — |
| fused.test | RUN | 0.326362 | 0.759684 | 0.899404 | 0.001449 | 0.001622 | 0.001652 |
| fused_function_object.test | RUN | 0.244565 | 0.566490 | 0.670676 | 0.001624 | 0.001553 | 0.001642 |
| fused_procedure.test | RUN | 0.312644 | 0.723482 | 0.852186 | 0.001471 | 0.001645 | 0.001609 |
| unfused.test | RUN | 0.251011 | 0.584096 | 0.702118 | 0.001588 | 0.001592 | 0.001566 |
| unfused_typed.test | RUN | 0.249441 | 0.626341 | 0.720979 | 0.001762 | 0.001692 | 0.001718 |
| make_fused.test | RUN | 0.321188 | 0.767247 | 0.899911 | 0.001549 | 0.001569 | 0.001608 |
| make_fused_function_object.test | RUN | 0.248728 | 0.566120 | 0.694821 | 0.001478 | 0.001466 | 0.001313 |
| make_fused_procedure.test | RUN | 0.310424 | 0.733272 | 0.862022 | 0.001657 | 0.001671 | 0.001656 |
| make_unfused.test | RUN | 0.243246 | 0.576430 | 0.698075 | 0.001764 | 0.001747 | 0.001599 |
| invoke.test | RUN | 0.625070 | 2.095635 | 2.383325 | 0.001670 | 0.001650 | 0.001660 |
| invoke_function_object.test | RUN | 0.293419 | 0.743081 | 0.892752 | 0.001730 | 0.001701 | 0.001710 |
| invoke_procedure.test | RUN | 0.502325 | 1.547419 | 1.783687 | 0.001586 | 0.001743 | 0.001542 |
| swap.test | RUN | 0.371683 | 0.956506 | 1.142794 | 0.001554 | 0.001708 | 0.001682 |
| is_sequence.test | COMPILE | 0.063091 | 0.134615 | 0.139679 | — | — | — |
| is_view.test | COMPILE | 0.062675 | 0.134601 | 0.139722 | — | — | — |
| pair_deque.test | COMPILE | 0.134052 | 0.307717 | 0.344619 | — | — | — |
| pair_list.test | COMPILE | 0.132157 | 0.300913 | 0.333296 | — | — | — |
| pair_map.test | COMPILE | 0.138858 | 0.308014 | 0.367590 | — | — | — |
| pair_set.test | COMPILE | 0.138713 | 0.310452 | 0.358083 | — | — | — |
| pair_vector.test | COMPILE | 0.135375 | 0.305503 | 0.355418 | — | — | — |
| pair_nest.test | COMPILE | 0.056777 | 0.123956 | 0.131799 | — | — | — |
| index_sequence.test | COMPILE | 0.046791 | 0.088545 | 0.098413 | — | — | — |
| and.test | COMPILE | 0.035803 | 0.065548 | 0.070750 | — | — | — |
| tag_of.test | COMPILE | 0.063544 | 0.131946 | 0.136885 | — | — | — |
| unused.test | COMPILE | 0.032946 | 0.082899 | 0.083021 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.055658 | 0.124841 | 0.142844 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.056109 | 0.115331 | 0.131542 | — | — | — |
| quick.test | RUN | 0.177707 | 0.390437 | 0.429418 | 0.000519 | 0.001158 | 0.001150 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.004× | 1.005×, 1.002× | 1.000× |
| clang | 1.000× | 1.002×, 0.997× | 1.011× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44597827043).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.001071s | 0.001067s | 0.001053s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.001038s | 0.001033s | 0.001032s | byte equality observed |
| adapt_adt_named.test | 10 | 0.001054s | 0.001051s | 0.001040s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.001029s | 0.001042s | 0.001046s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.001060s | 0.001072s | 0.001064s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.001040s | 0.001037s | 0.001032s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.001047s | 0.001071s | 0.001030s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.001032s | 0.001093s | 0.001023s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.001038s | 0.001073s | 0.001034s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.001053s | 0.001065s | 0.001020s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.001045s | 0.001051s | 0.001014s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.001054s | 0.001059s | 0.001047s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.001042s | 0.001038s | 0.001054s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.001048s | 0.001062s | 0.001033s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.001050s | 0.001059s | 0.001072s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.001036s | 0.001034s | 0.001041s | byte equality observed |
| adapt_struct.test | 10 | 0.001046s | 0.001034s | 0.001034s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.001047s | 0.001029s | 0.001035s | byte equality observed |
| adapt_struct_named.test | 10 | 0.001057s | 0.001051s | 0.001021s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.001043s | 0.001029s | 0.001027s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.001046s | 0.001071s | 0.001044s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.001047s | 0.001019s | 0.001040s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.001056s | 0.001066s | 0.001034s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.001043s | 0.001043s | 0.001019s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.001028s | 0.001040s | 0.001017s | byte equality observed |
| all.test | 10 | 0.001063s | 0.001000s | 0.001037s | byte equality observed |
| any.test | 10 | 0.001049s | 0.001012s | 0.001014s | byte equality observed |
| array.test | 10 | 0.001015s | 0.001057s | 0.001075s | byte equality observed |
| as_deque.test | 10 | 0.001023s | 0.001036s | 0.000996s | byte equality observed |
| as_list.test | 10 | 0.001086s | 0.001062s | 0.001079s | byte equality observed |
| as_map.test | 10 | 0.001042s | 0.001053s | 0.001036s | byte equality observed |
| as_map_assoc.test | 10 | 0.001041s | 0.001036s | 0.001036s | byte equality observed |
| as_set.test | 10 | 0.001056s | 0.001098s | 0.001073s | byte equality observed |
| as_vector.test | 10 | 0.001055s | 0.001077s | 0.001073s | byte equality observed |
| back_extended_deque.test | 10 | 0.001028s | 0.001034s | 0.001009s | byte equality observed |
| boost_array.test | 9 | 0.001020s | 0.001015s | 0.001016s | byte equality observed |
| boost_tuple.test | 10 | 0.001047s | 0.001053s | 0.001049s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.001029s | 0.001042s | 0.001013s | byte equality observed |
| clear.test | 10 | 0.001042s | 0.001041s | 0.001054s | byte equality observed |
| cons.test | 10 | 0.001077s | 0.001077s | 0.001038s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.001031s | 0.001073s | 0.001019s | byte equality observed |
| convert_deque.test | 10 | 0.001027s | 0.001027s | 0.001043s | byte equality observed |
| convert_list.test | 10 | 0.001009s | 0.001072s | 0.001035s | byte equality observed |
| convert_std_pair.test | 10 | 0.001038s | 0.001057s | 0.001033s | byte equality observed |
| convert_std_tuple.test | 10 | 0.001028s | 0.001071s | 0.001006s | byte equality observed |
| convert_vector.test | 10 | 0.001059s | 0.001046s | 0.001053s | byte equality observed |
| copy.test | 10 | 0.001074s | 0.001039s | 0.001037s | byte equality observed |
| count.test | 10 | 0.001038s | 0.001051s | 0.001033s | byte equality observed |
| count_if.test | 10 | 0.001039s | 0.001070s | 0.001008s | byte equality observed |
| deduce_sequence.test | 10 | 0.001020s | 0.001028s | 0.001039s | byte equality observed |
| define_assoc_struct.test | 10 | 0.001058s | 0.001039s | 0.001017s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.001070s | 0.001061s | 0.001056s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.001017s | 0.001025s | 0.001017s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.001073s | 0.001056s | 0.001061s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.001061s | 0.001064s | 0.001069s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.001029s | 0.001017s | 0.001028s | byte equality observed |
| define_struct.test | 10 | 0.001042s | 0.001054s | 0.001035s | byte equality observed |
| define_struct_empty.test | 10 | 0.001047s | 0.001046s | 0.001051s | byte equality observed |
| define_struct_inline.test | 10 | 0.001062s | 0.001092s | 0.001034s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.001079s | 0.001065s | 0.001036s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.001022s | 0.001046s | 0.001025s | byte equality observed |
| define_struct_move.test | 10 | 0.001003s | 0.001028s | 0.001058s | byte equality observed |
| define_tpl_struct.test | 10 | 0.001037s | 0.001065s | 0.001049s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.001047s | 0.001037s | 0.001048s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.001042s | 0.001052s | 0.001042s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.001071s | 0.001027s | 0.001030s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.001048s | 0.001032s | 0.001008s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.001053s | 0.001036s | 0.001012s | byte equality observed |
| deque_comparison.test | 10 | 0.001026s | 0.001017s | 0.001057s | byte equality observed |
| deque_construction.test | 10 | 0.001068s | 0.001009s | 0.001004s | byte equality observed |
| deque_copy.test | 10 | 0.001027s | 0.001014s | 0.001043s | byte equality observed |
| deque_hash.test | 10 | 0.001060s | 0.001045s | 0.001031s | byte equality observed |
| deque_iterator.test | 10 | 0.001064s | 0.001032s | 0.001060s | byte equality observed |
| deque_make.test | 10 | 0.001070s | 0.001031s | 0.001076s | byte equality observed |
| deque_misc.test | 10 | 0.001051s | 0.001037s | 0.001005s | byte equality observed |
| deque_move.test | 10 | 0.001048s | 0.001063s | 0.001059s | byte equality observed |
| deque_mutate.test | 10 | 0.001034s | 0.001046s | 0.001038s | byte equality observed |
| deque_nest.test | 9 | 0.001014s | 0.001019s | 0.001045s | byte equality observed |
| deque_tie.test | 10 | 0.001034s | 0.001064s | 0.001033s | byte equality observed |
| deque_value_at.test | 10 | 0.001028s | 0.001018s | 0.001011s | byte equality observed |
| erase.test | 10 | 0.001063s | 0.001046s | 0.001049s | byte equality observed |
| erase_key.test | 10 | 0.001069s | 0.001101s | 0.001051s | byte equality observed |
| filter.test | 10 | 0.001042s | 0.001025s | 0.001043s | byte equality observed |
| filter_if.test | 10 | 0.001060s | 0.001085s | 0.001087s | byte equality observed |
| filter_view.test | 10 | 0.001063s | 0.001082s | 0.001063s | byte equality observed |
| find.test | 10 | 0.001080s | 0.001065s | 0.001055s | byte equality observed |
| find_if.test | 10 | 0.001045s | 0.001057s | 0.001082s | byte equality observed |
| flatten.test | 10 | 0.001038s | 0.001078s | 0.001016s | byte equality observed |
| flatten_view.test | 10 | 0.001039s | 0.001054s | 0.001030s | byte equality observed |
| fold.test | 10 | 0.001051s | 0.001053s | 0.001039s | byte equality observed |
| for_each.test | 10 | 0.001078s | 0.001067s | 0.001048s | byte equality observed |
| front_extended_deque.test | 10 | 0.001028s | 0.001016s | 0.001034s | byte equality observed |
| fused.test | 10 | 0.001033s | 0.001025s | 0.001007s | byte equality observed |
| fused_function_object.test | 10 | 0.001040s | 0.001052s | 0.001021s | byte equality observed |
| fused_procedure.test | 10 | 0.001039s | 0.001040s | 0.001013s | byte equality observed |
| github-176.test | 10 | 0.001049s | 0.001029s | 0.001070s | byte equality observed |
| hash.test | 10 | 0.001037s | 0.001007s | 0.001036s | byte equality observed |
| identity_view.test | 10 | 0.001064s | 0.001040s | 0.001024s | byte equality observed |
| insert.test | 10 | 0.001068s | 0.001075s | 0.001067s | byte equality observed |
| insert_range.test | 10 | 0.001073s | 0.001086s | 0.001066s | byte equality observed |
| invoke.test | 10 | 0.001035s | 0.001052s | 0.001029s | byte equality observed |
| invoke_function_object.test | 10 | 0.001041s | 0.001001s | 0.001036s | byte equality observed |
| invoke_procedure.test | 10 | 0.001024s | 0.001017s | 0.001052s | byte equality observed |
| io.test | 3 | 0.001242s | 0.001191s | 0.001222s | byte equality observed |
| iter_fold.test | 10 | 0.001028s | 0.001046s | 0.001035s | byte equality observed |
| iterator_range.test | 10 | 0.001059s | 0.001062s | 0.001091s | byte equality observed |
| join.test | 10 | 0.001009s | 0.001053s | 0.001009s | byte equality observed |
| joint_view.test | 10 | 0.001105s | 0.001086s | 0.001070s | byte equality observed |
| list_comparison.test | 10 | 0.001053s | 0.001017s | 0.001052s | byte equality observed |
| list_construction.test | 10 | 0.001040s | 0.001001s | 0.001033s | byte equality observed |
| list_copy.test | 10 | 0.001045s | 0.001080s | 0.001010s | byte equality observed |
| list_hash.test | 10 | 0.001044s | 0.001027s | 0.001025s | byte equality observed |
| list_iterator.test | 10 | 0.001044s | 0.001031s | 0.001056s | byte equality observed |
| list_make.test | 10 | 0.001035s | 0.001031s | 0.001044s | byte equality observed |
| list_misc.test | 10 | 0.001039s | 0.001013s | 0.000987s | byte equality observed |
| list_mutate.test | 10 | 0.001019s | 0.001009s | 0.001036s | byte equality observed |
| list_nest.test | 10 | 0.001043s | 0.001001s | 0.000990s | byte equality observed |
| list_tie.test | 10 | 0.001031s | 0.001014s | 0.000996s | byte equality observed |
| list_value_at.test | 10 | 0.001002s | 0.001003s | 0.001009s | byte equality observed |
| make_fused.test | 10 | 0.001037s | 0.001085s | 0.001024s | byte equality observed |
| make_fused_function_object.test | 10 | 0.001030s | 0.001018s | 0.001006s | byte equality observed |
| make_fused_procedure.test | 10 | 0.001044s | 0.001012s | 0.001039s | byte equality observed |
| make_list.test | 10 | 0.001025s | 0.001041s | 0.001045s | byte equality observed |
| make_unfused.test | 10 | 0.001033s | 0.001029s | 0.001033s | byte equality observed |
| make_vector.test | 10 | 0.001069s | 0.001041s | 0.001043s | byte equality observed |
| map.test | 10 | 0.001066s | 0.001042s | 0.001039s | byte equality observed |
| map_comparison.test | 10 | 0.001017s | 0.001003s | 0.001015s | byte equality observed |
| map_construction.test | 10 | 0.001048s | 0.000994s | 0.001017s | byte equality observed |
| map_copy.test | 10 | 0.001026s | 0.001087s | 0.001012s | byte equality observed |
| map_misc.test | 10 | 0.001029s | 0.001029s | 0.001044s | byte equality observed |
| map_move.test | 10 | 0.001057s | 0.001061s | 0.001023s | byte equality observed |
| map_mutate.test | 10 | 0.001020s | 0.001006s | 0.001003s | byte equality observed |
| map_tie.test | 10 | 0.001012s | 0.001024s | 0.001060s | byte equality observed |
| move.test | 10 | 0.001030s | 0.001004s | 0.001044s | byte equality observed |
| nil.test | 10 | 0.000993s | 0.001065s | 0.001025s | byte equality observed |
| none.test | 10 | 0.001012s | 0.001061s | 0.001040s | byte equality observed |
| nview.test | 10 | 0.001040s | 0.001073s | 0.001046s | byte equality observed |
| pop_back.test | 10 | 0.001068s | 0.001053s | 0.001056s | byte equality observed |
| pop_front.test | 10 | 0.001047s | 0.001064s | 0.001058s | byte equality observed |
| push_back.test | 10 | 0.001051s | 0.001065s | 0.001030s | byte equality observed |
| push_front.test | 10 | 0.001063s | 0.001047s | 0.001042s | byte equality observed |
| quick.test | 10 | 0.000462s | 0.001014s | 0.000995s | byte equality observed |
| ref_vector.test | 10 | 0.001031s | 0.001019s | 0.001042s | byte equality observed |
| remove.test | 10 | 0.001066s | 0.001066s | 0.001056s | byte equality observed |
| remove_if.test | 10 | 0.001037s | 0.001077s | 0.001054s | byte equality observed |
| repetitive_view.test | 10 | 0.001018s | 0.001030s | 0.001039s | byte equality observed |
| replace.test | 10 | 0.001053s | 0.001041s | 0.001064s | byte equality observed |
| replace_if.test | 10 | 0.001039s | 0.001041s | 0.001050s | byte equality observed |
| reverse.test | 10 | 0.001048s | 0.001111s | 0.001072s | byte equality observed |
| reverse_fold.test | 10 | 0.001039s | 0.001062s | 0.001053s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.001020s | 0.001007s | 0.001036s | byte equality observed |
| reverse_view.test | 10 | 0.001056s | 0.001061s | 0.001044s | byte equality observed |
| segmented_find.test | 10 | 0.001013s | 0.001015s | 0.001016s | byte equality observed |
| segmented_find_if.test | 10 | 0.001049s | 0.001011s | 0.001034s | byte equality observed |
| segmented_fold.test | 10 | 0.001072s | 0.001068s | 0.001074s | byte equality observed |
| segmented_for_each.test | 10 | 0.001053s | 0.001049s | 0.001071s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.001047s | 0.001091s | 0.001075s | byte equality observed |
| set.test | 10 | 0.001045s | 0.001057s | 0.001065s | byte equality observed |
| single_view.test | 10 | 0.001048s | 0.001051s | 0.001076s | byte equality observed |
| std_array.test | 10 | 0.001028s | 0.001013s | 0.001070s | byte equality observed |
| std_pair.test | 10 | 0.001049s | 0.001041s | 0.001037s | byte equality observed |
| std_tuple.test | 10 | 0.001026s | 0.001036s | 0.001046s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.000992s | 0.001005s | 0.001044s | byte equality observed |
| swap.test | 10 | 0.001072s | 0.001001s | 0.001021s | byte equality observed |
| transform.test | 10 | 0.001064s | 0.001085s | 0.001041s | byte equality observed |
| transform_view.test | 10 | 0.001055s | 0.001076s | 0.001050s | byte equality observed |
| tuple_comparison.test | 10 | 0.001009s | 0.001039s | 0.001006s | byte equality observed |
| tuple_construction.test | 10 | 0.001039s | 0.001050s | 0.001057s | byte equality observed |
| tuple_conversion.test | 10 | 0.001007s | 0.001040s | 0.001038s | byte equality observed |
| tuple_copy.test | 10 | 0.001049s | 0.001044s | 0.001039s | byte equality observed |
| tuple_element.test | 10 | 0.001023s | 0.001009s | 0.001000s | byte equality observed |
| tuple_hash.test | 10 | 0.001037s | 0.001037s | 0.001053s | byte equality observed |
| tuple_make.test | 10 | 0.001030s | 0.001020s | 0.001045s | byte equality observed |
| tuple_misc.test | 10 | 0.001035s | 0.001058s | 0.001028s | byte equality observed |
| tuple_mutate.test | 10 | 0.001023s | 0.001048s | 0.001030s | byte equality observed |
| tuple_nest.test | 10 | 0.001005s | 0.001014s | 0.001041s | byte equality observed |
| tuple_tie.test | 10 | 0.001006s | 0.001043s | 0.001009s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.001019s | 0.001006s | 0.001011s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.001050s | 0.001066s | 0.001063s | byte equality observed |
| unfused.test | 8 | 0.001039s | 0.001022s | 0.001014s | byte equality observed |
| unfused_typed.test | 10 | 0.001019s | 0.001046s | 0.001068s | byte equality observed |
| vector_comparison.test | 10 | 0.001023s | 0.001069s | 0.001077s | byte equality observed |
| vector_construction.test | 10 | 0.001006s | 0.001011s | 0.001060s | byte equality observed |
| vector_conversion.test | 10 | 0.001019s | 0.001030s | 0.001029s | byte equality observed |
| vector_copy.test | 10 | 0.001012s | 0.001051s | 0.001070s | byte equality observed |
| vector_hash.test | 10 | 0.001039s | 0.001031s | 0.001061s | byte equality observed |
| vector_iterator.test | 10 | 0.001025s | 0.001028s | 0.001052s | byte equality observed |
| vector_make.test | 10 | 0.001058s | 0.001023s | 0.001062s | byte equality observed |
| vector_misc.test | 10 | 0.001036s | 0.001021s | 0.001021s | byte equality observed |
| vector_move.test | 10 | 0.001058s | 0.001091s | 0.001044s | byte equality observed |
| vector_mutate.test | 10 | 0.001036s | 0.001039s | 0.001025s | byte equality observed |
| vector_n.test | 10 | 0.001045s | 0.001077s | 0.001054s | byte equality observed |
| vector_nest.test | 10 | 0.001017s | 0.001025s | 0.001031s | byte equality observed |
| vector_tie.test | 10 | 0.001047s | 0.001009s | 0.001013s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000994s | 0.001004s | 0.001023s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.001062s | 0.001005s | 0.001025s | byte equality observed |
| vector_value_at.test | 10 | 0.001055s | 0.001010s | 0.001013s | byte equality observed |
| zip.test | 10 | 0.001050s | 0.001035s | 0.001037s | byte equality observed |
| zip2.test | 10 | 0.001033s | 0.001029s | 0.001063s | byte equality observed |
| zip_ignore.test | 10 | 0.001048s | 0.001048s | 0.001071s | byte equality observed |
| zip_view.test | 10 | 0.001002s | 0.001071s | 0.001027s | byte equality observed |
| zip_view2.test | 10 | 0.001023s | 0.001046s | 0.001010s | byte equality observed |
| zip_view_ignore.test | 10 | 0.001015s | 0.001048s | 0.001000s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44597827043).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
