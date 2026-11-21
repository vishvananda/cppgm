# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.412067 | 0.940020 | 1.257641 | 0.001432 | 0.001413 | 0.001629 |
| any.test | RUN | 0.396588 | 0.893734 | 1.174027 | 0.001469 | 0.001609 | 0.001585 |
| clear.test | RUN | 0.291770 | 0.815014 | 0.957938 | 0.001557 | 0.001632 | 0.001628 |
| copy.test | RUN | 0.249712 | 0.611059 | 0.781036 | 0.001417 | 0.001636 | 0.001588 |
| count.test | RUN | 0.275123 | 0.675646 | 0.864264 | 0.001513 | 0.001577 | 0.001653 |
| count_if.test | RUN | 0.260463 | 0.634740 | 0.784192 | 0.001442 | 0.001561 | 0.001583 |
| erase.test | RUN | 0.364137 | 1.089010 | 1.297141 | 0.001496 | 0.001740 | 0.001564 |
| erase_key.test | RUN | 0.361042 | 1.095555 | 1.209144 | 0.001115 | 0.001474 | 0.001644 |
| filter.test | RUN | 0.328848 | 0.930936 | 1.096674 | 0.001692 | 0.001627 | 0.001568 |
| filter_if.test | RUN | 0.358132 | 1.086479 | 1.310141 | 0.001432 | 0.001624 | 0.001654 |
| find.test | RUN | 0.312405 | 0.763966 | 0.997417 | 0.001637 | 0.001395 | 0.001638 |
| find_if.test | RUN | 0.293927 | 0.703984 | 0.911222 | 0.001448 | 0.001603 | 0.001623 |
| fold.test | RUN | 0.326975 | 0.855813 | 1.124381 | 0.001690 | 0.001684 | 0.001481 |
| for_each.test | RUN | 0.292545 | 0.792058 | 0.969979 | 0.001570 | 0.001612 | 0.001567 |
| insert.test | RUN | 0.425496 | 1.356058 | 1.538796 | 0.001619 | 0.001570 | 0.001625 |
| insert_range.test | RUN | 0.428165 | 1.361056 | 1.552065 | 0.001452 | 0.001454 | 0.001716 |
| iter_fold.test | RUN | 0.503267 | 1.305011 | 1.834988 | 0.001667 | 0.001668 | 0.001621 |
| move.test | RUN | 0.249468 | 0.624908 | 0.792191 | 0.001519 | 0.001554 | 0.001368 |
| none.test | RUN | 0.411275 | 0.909279 | 1.235782 | 0.001427 | 0.001486 | 0.001556 |
| pop_back.test | RUN | 0.397154 | 1.199835 | 1.383177 | 0.001538 | 0.001690 | 0.001650 |
| pop_front.test | RUN | 0.331929 | 0.979946 | 1.126424 | 0.001559 | 0.001528 | 0.001541 |
| push_back.test | RUN | 0.418756 | 1.377322 | 1.516397 | 0.001550 | 0.001758 | 0.001664 |
| push_front.test | RUN | 0.366559 | 1.153960 | 1.295850 | 0.001710 | 0.001698 | 0.001571 |
| remove.test | RUN | 0.416032 | 1.302261 | 1.530939 | 0.001499 | 0.001437 | 0.001648 |
| remove_if.test | RUN | 0.359364 | 1.116766 | 1.263727 | 0.001376 | 0.001820 | 0.001615 |
| replace.test | RUN | 0.352477 | 1.064718 | 1.205474 | 0.001616 | 0.001714 | 0.001673 |
| replace_if.test | RUN | 0.351957 | 1.068167 | 1.186589 | 0.001705 | 0.001706 | 0.001650 |
| reverse_fold.test | RUN | 0.540923 | 1.469941 | 2.048816 | 0.001714 | 0.001768 | 0.001699 |
| reverse_iter_fold.test | RUN | 0.559081 | 1.526697 | 2.156175 | 0.001407 | 0.001553 | 0.001602 |
| reverse.test | RUN | 0.349929 | 1.082539 | 1.214831 | 0.001566 | 0.001699 | 0.001399 |
| segmented_for_each.test | RUN | 0.601412 | 2.055467 | 2.457956 | 0.001610 | 0.001612 | 0.001567 |
| segmented_find.test | RUN | 0.373106 | 1.095726 | 1.407609 | 0.001489 | 0.001645 | 0.001397 |
| segmented_find_if.test | RUN | 0.381689 | 1.107884 | 1.407880 | 0.001465 | 0.001593 | 0.001585 |
| segmented_fold.test | RUN | 0.476015 | 1.444060 | 1.762160 | 0.001628 | 0.001664 | 0.001632 |
| transform.test | RUN | 0.369142 | 1.146374 | 1.286513 | 0.001555 | 0.001689 | 0.001581 |
| join.test | RUN | 0.278008 | 0.707302 | 0.902580 | 0.001538 | 0.001692 | 0.001653 |
| zip.test | RUN | 0.478487 | 1.305648 | 1.705969 | 0.001560 | 0.001672 | 0.001648 |
| zip2.test | RUN | 0.455882 | 1.272650 | 1.632346 | 0.001533 | 0.001566 | 0.001534 |
| zip_ignore.test | RUN | 0.352597 | 0.871256 | 1.102055 | 0.001697 | 0.001606 | 0.001614 |
| flatten.test | RUN | 0.331842 | 0.972284 | 1.122468 | 0.001415 | 0.001575 | 0.001606 |
| ticket-5490.test | COMPILE | 0.177593 | 0.407737 | 0.503977 | — | — | — |
| as_deque.test | RUN | 0.330950 | 0.921992 | 1.193640 | 0.001620 | 0.001722 | 0.001642 |
| as_list.test | RUN | 0.366565 | 1.118724 | 1.290858 | 0.001490 | 0.001706 | 0.001712 |
| as_map.test | RUN | 0.365076 | 1.115714 | 1.289612 | 0.001486 | 0.001704 | 0.001593 |
| as_map_assoc.test | RUN | 0.357829 | 1.034424 | 1.227145 | 0.001449 | 0.001775 | 0.001665 |
| as_set.test | RUN | 0.411023 | 1.301044 | 1.520636 | 0.001537 | 0.001636 | 0.001679 |
| as_vector.test | RUN | 0.378860 | 1.152901 | 1.331102 | 0.001508 | 0.001505 | 0.001401 |
| boost_tuple.test | RUN | 0.373495 | 1.144762 | 1.311813 | 0.001602 | 0.001654 | 0.001596 |
| boost_tuple_iterator.test | RUN | 0.259083 | 0.676042 | 0.803190 | 0.001341 | 0.001258 | 0.001433 |
| cons.test | RUN | 0.471669 | 1.280758 | 1.564453 | 0.001515 | 0.001625 | 0.001702 |
| convert_boost_tuple.test | RUN | 0.296799 | 0.990074 | 1.014238 | 0.001574 | 0.001578 | 0.001630 |
| convert_deque.test | RUN | 0.297627 | 0.987329 | 1.015357 | 0.001403 | 0.001546 | 0.001368 |
| convert_list.test | RUN | 0.299272 | 0.992993 | 1.015615 | 0.001573 | 0.001677 | 0.001655 |
| convert_std_pair.test | RUN | 0.321428 | 1.013498 | 1.039730 | 0.001386 | 0.001754 | 0.001566 |
| convert_std_tuple.test | RUN | 0.299000 | 0.992519 | 1.012047 | 0.001646 | 0.001616 | 0.001382 |
| convert_vector.test | RUN | 0.294379 | 0.988582 | 1.007308 | 0.001380 | 0.001649 | 0.001629 |
| filter_view.test | RUN | 0.355629 | 1.042188 | 1.199940 | 0.001524 | 0.001438 | 0.001655 |
| hash.test | RUN | 0.363619 | 0.948298 | 1.172900 | 0.001701 | 0.001665 | 0.001663 |
| io.test | RUN | 0.380000 | 1.338004 | 1.405399 | 0.001634 | 0.001952 | 0.001690 |
| iterator_range.test | RUN | 0.343259 | 1.008002 | 1.171238 | 0.001437 | 0.001791 | 0.001626 |
| joint_view.test | RUN | 0.448099 | 1.665990 | 1.718015 | 0.001719 | 0.001624 | 0.001684 |
| list_comparison.test | RUN | 0.265411 | 0.702302 | 0.838114 | 0.001480 | 0.001740 | 0.001483 |
| list_construction.test | RUN | 0.258014 | 0.674547 | 0.833018 | 0.001516 | 0.001594 | 0.001554 |
| list_copy.test | RUN | 0.394436 | 1.221383 | 1.419867 | 0.001588 | 0.001417 | 0.001605 |
| list_iterator.test | RUN | 0.257989 | 0.692936 | 0.787308 | 0.001594 | 0.001515 | 0.001636 |
| list_hash.test | RUN | 0.360962 | 1.315817 | 1.192873 | 0.001519 | 0.001643 | 0.001607 |
| list_make.test | RUN | 0.279126 | 0.733024 | 0.883058 | 0.001530 | 0.001526 | 0.001672 |
| list_misc.test | RUN | 0.352397 | 0.875338 | 1.105417 | 0.001404 | 0.001637 | 0.001632 |
| list_mutate.test | RUN | 0.241482 | 0.595210 | 0.726054 | 0.001716 | 0.001671 | 0.001594 |
| list_nest.test | RUN | 0.495530 | 1.636670 | 1.987463 | 0.001398 | 0.001748 | 0.001596 |
| list_tie.test | RUN | 0.264493 | 0.667686 | 0.812846 | 0.001490 | 0.001623 | 0.001637 |
| list_value_at.test | RUN | 0.249584 | 0.615935 | 0.779600 | 0.001570 | 0.001706 | 0.001421 |
| deque_comparison.test | RUN | 0.264404 | 0.710300 | 0.819336 | 0.001481 | 0.001517 | 0.001639 |
| deque_construction.test | RUN | 0.263411 | 0.657471 | 0.866437 | 0.001609 | 0.001658 | 0.001506 |
| deque_copy.test | RUN | 0.377573 | 1.134706 | 1.306917 | 0.001443 | 0.001594 | 0.001652 |
| deque_iterator.test | RUN | 0.260238 | 0.701613 | 0.816402 | 0.001605 | 0.001563 | 0.001660 |
| deque_hash.test | RUN | 0.357380 | 1.282326 | 1.190121 | 0.001452 | 0.001683 | 0.001607 |
| deque_is_constructible.test | COMPILE | 0.140015 | 0.303140 | 0.373514 | — | — | — |
| deque_make.test | RUN | 0.266307 | 0.698838 | 0.859461 | 0.001613 | 0.001646 | 0.001584 |
| deque_misc.test | RUN | 0.343843 | 0.844673 | 1.051869 | 0.001371 | 0.001467 | 0.001481 |
| deque_move.test | RUN | 0.264601 | 0.732068 | 0.838909 | 0.001342 | 0.001556 | 0.001626 |
| deque_mutate.test | RUN | 0.242166 | 0.576095 | 0.725347 | 0.001568 | 0.001683 | 0.001597 |
| deque_nest.test | RUN | 0.725258 | 2.592696 | 3.158365 | 0.001686 | 0.001540 | 0.001453 |
| deque_tie.test | RUN | 0.248729 | 0.614990 | 0.768946 | 0.001563 | 0.001539 | 0.001531 |
| deque_value_at.test | RUN | 0.243377 | 0.618130 | 0.754425 | 0.001533 | 0.001354 | 0.001605 |
| front_extended_deque.test | RUN | 0.353932 | 0.883729 | 1.135807 | 0.001519 | 0.001638 | 0.001625 |
| back_extended_deque.test | RUN | 0.349243 | 0.901529 | 1.118576 | 0.001379 | 0.001633 | 0.001586 |
| make_list.test | RUN | 0.275097 | 0.726646 | 0.887444 | 0.001495 | 0.001523 | 0.001410 |
| make_vector.test | RUN | 0.267701 | 0.721662 | 0.904190 | 0.001485 | 0.001505 | 0.001581 |
| map.test | RUN | 0.363144 | 1.098117 | 1.247815 | 0.001525 | 0.001625 | 0.001641 |
| map_comparison.test | RUN | 0.271717 | 0.712612 | 0.861073 | 0.001388 | 0.001683 | 0.001656 |
| map_construction.test | RUN | 0.269481 | 0.682770 | 0.835738 | 0.001508 | 0.001547 | 0.001605 |
| map_copy.test | RUN | 0.328146 | 0.860559 | 1.028848 | 0.001611 | 0.001579 | 0.001638 |
| map_misc.test | RUN | 0.348115 | 0.872016 | 1.050385 | 0.001462 | 0.001669 | 0.001694 |
| map_move.test | RUN | 0.269065 | 0.733853 | 0.854857 | 0.001566 | 0.001510 | 0.001589 |
| map_mutate.test | RUN | 0.246177 | 0.583691 | 0.735141 | 0.001407 | 0.001575 | 0.001634 |
| map_tie.test | RUN | 0.251668 | 0.597702 | 0.758158 | 0.001592 | 0.001627 | 0.001651 |
| nil.test | RUN | 0.172609 | 0.419244 | 0.523108 | 0.001720 | 0.001567 | 0.001628 |
| nview.test | RUN | 0.341184 | 0.865209 | 1.096804 | 0.001590 | 0.001714 | 0.001622 |
| reverse_view.test | RUN | 0.441800 | 1.414482 | 1.591178 | 0.001656 | 0.001555 | 0.001643 |
| segmented_iterator_range.test | RUN | 0.508947 | 1.650013 | 1.995148 | 0.001700 | 0.001649 | 0.001471 |
| set.test | RUN | 0.331241 | 0.950349 | 1.112369 | 0.001512 | 0.001572 | 0.001572 |
| single_view.test | RUN | 0.304984 | 0.873864 | 1.019712 | 0.001659 | 0.001540 | 0.001646 |
| std_pair.test | RUN | 0.388132 | 1.110638 | 1.304434 | 0.001674 | 0.001520 | 0.001630 |
| boost_array.test | RUN | 0.321389 | 0.765525 | 0.986370 | 0.001584 | 0.001673 | 0.001572 |
| array.test | RUN | 0.324788 | 0.769349 | 0.950876 | 0.001585 | 0.001647 | 0.001652 |
| std_array.test | RUN | 0.323513 | 0.793750 | 0.973453 | 0.001567 | 0.001360 | 0.001607 |
| tuple_comparison.test | RUN | 0.289738 | 0.731983 | 0.906080 | 0.001639 | 0.001651 | 0.001653 |
| tuple_construction.test | RUN | 0.294437 | 0.737352 | 0.909790 | 0.001601 | 0.001577 | 0.001661 |
| tuple_conversion.test | RUN | 0.652804 | 2.213494 | 2.903612 | 0.001405 | 0.001647 | 0.001381 |
| tuple_copy.test | RUN | 0.431873 | 1.299590 | 1.558257 | 0.001632 | 0.001690 | 0.001650 |
| tuple_element.test | RUN | 0.270166 | 0.638220 | 0.813645 | 0.001454 | 0.001647 | 0.001345 |
| tuple_make.test | RUN | 0.295163 | 0.750264 | 0.907718 | 0.001540 | 0.001702 | 0.001600 |
| tuple_misc.test | RUN | 0.373611 | 0.930805 | 1.130376 | 0.001570 | 0.001672 | 0.001340 |
| tuple_mutate.test | RUN | 0.257303 | 0.621578 | 0.792549 | 0.001537 | 0.001483 | 0.001474 |
| tuple_nest.test | RUN | 1.071013 | 4.347613 | 5.483058 | 0.001474 | 0.001684 | 0.001654 |
| tuple_hash.test | RUN | 0.366760 | 1.325723 | 1.216082 | 0.001671 | 0.001519 | 0.001676 |
| tuple_tie.test | RUN | 0.271319 | 0.675802 | 0.860393 | 0.001571 | 0.001678 | 0.001670 |
| tuple_traits__maybe_variadic.test | RUN | 0.302824 | 0.844171 | 0.920165 | 0.001715 | 0.001679 | 0.001754 |
| tuple_traits__no_variadic.test | RUN | 0.332277 | 0.880543 | 1.024523 | 0.001503 | 0.001732 | 0.001512 |
| transform_view.test | RUN | 0.443800 | 1.397691 | 1.580398 | 0.001639 | 0.001702 | 0.001662 |
| identity_view.test | RUN | 0.429492 | 1.285170 | 1.494742 | 0.001547 | 0.001658 | 0.001390 |
| vector_comparison.test | RUN | 0.276227 | 0.702644 | 0.884068 | 0.001716 | 0.001530 | 0.001676 |
| vector_construction.test | RUN | 0.275297 | 0.660283 | 0.828630 | 0.001169 | 0.001367 | 0.001622 |
| vector_conversion.test | RUN | 0.788989 | 2.914117 | 3.705067 | 0.001654 | 0.001636 | 0.001616 |
| vector_copy.test | RUN | 0.411695 | 1.265549 | 1.547366 | 0.001651 | 0.001725 | 0.001596 |
| vector_iterator.test | RUN | 0.271004 | 0.696290 | 0.800610 | 0.001324 | 0.001648 | 0.001495 |
| vector_make.test | RUN | 0.275527 | 0.725783 | 0.859010 | 0.001608 | 0.001598 | 0.001629 |
| vector_misc.test | RUN | 0.349361 | 0.879445 | 1.072544 | 0.001660 | 0.001523 | 0.001372 |
| vector_move.test | RUN | 0.272749 | 0.739893 | 0.859768 | 0.001667 | 0.001563 | 0.001642 |
| vector_mutate.test | RUN | 0.247993 | 0.592761 | 0.733062 | 0.001384 | 0.001430 | 0.001668 |
| vector_n.test | RUN | 0.307154 | 0.755353 | 0.982533 | 0.001708 | 0.001669 | 0.001658 |
| vector_nest.test | RUN | 1.091469 | 4.601721 | 5.431351 | 0.001624 | 0.001468 | 0.001437 |
| vector_hash.test | RUN | 0.355255 | 1.292084 | 1.145109 | 0.001664 | 0.001736 | 0.001586 |
| vector_tie.test | RUN | 0.264332 | 0.662141 | 0.813281 | 0.001622 | 0.001717 | 0.001636 |
| vector_traits__maybe_variadic.test | RUN | 0.280428 | 0.769463 | 0.849899 | 0.001625 | 0.001640 | 0.001616 |
| vector_traits__no_variadic.test | RUN | 0.307105 | 0.815439 | 0.884019 | 0.001520 | 0.001803 | 0.001382 |
| vector_value_at.test | RUN | 0.252944 | 0.606161 | 0.762408 | 0.001438 | 0.001456 | 0.001507 |
| zip_view.test | RUN | 0.519985 | 1.481664 | 1.953670 | 0.001684 | 0.001620 | 0.001661 |
| zip_view2.test | RUN | 0.417083 | 1.164691 | 1.454324 | 0.001478 | 0.001454 | 0.001582 |
| zip_view_ignore.test | RUN | 0.390382 | 1.066968 | 1.310565 | 0.001390 | 0.001503 | 0.001635 |
| repetitive_view.test | RUN | 0.659186 | 1.936487 | 2.517128 | 0.001570 | 0.001524 | 0.001555 |
| deduce_sequence.test | RUN | 0.315685 | 0.814229 | 1.011756 | 0.001446 | 0.001742 | 0.001466 |
| adapt_adt_named.test | RUN | 0.377683 | 1.133211 | 1.291173 | 0.001093 | 0.001598 | 0.001662 |
| adapt_adt_named_empty.test | RUN | 0.330284 | 0.897502 | 1.040088 | 0.001904 | 0.001588 | 0.001596 |
| adapt_adt.test | RUN | 0.423873 | 1.508584 | 1.541309 | 0.001536 | 0.001668 | 0.001557 |
| adapt_adt_empty.test | RUN | 0.327327 | 0.929511 | 1.039843 | 0.001696 | 0.001695 | 0.001558 |
| adapt_assoc_adt_named.test | RUN | 0.437040 | 1.191002 | 1.378646 | 0.001625 | 0.001621 | 0.001711 |
| adapt_assoc_adt_named_empty.test | RUN | 0.329860 | 0.924860 | 1.052143 | 0.001696 | 0.001549 | 0.001638 |
| adapt_assoc_adt.test | RUN | 0.434389 | 1.219200 | 1.466303 | 0.001549 | 0.001456 | 0.001562 |
| adapt_assoc_adt_empty.test | RUN | 0.327320 | 0.915289 | 1.050856 | 0.001703 | 0.001743 | 0.001687 |
| adapt_assoc_struct_named.test | RUN | 0.415302 | 1.172638 | 1.363336 | 0.001469 | 0.001692 | 0.001549 |
| adapt_assoc_struct_named_empty.test | RUN | 0.325098 | 0.918801 | 1.034605 | 0.001555 | 0.001792 | 0.001653 |
| adapt_assoc_struct.test | RUN | 0.373593 | 1.103475 | 1.257919 | 0.001845 | 0.001635 | 0.001597 |
| adapt_assoc_struct_empty.test | RUN | 0.323859 | 0.914182 | 1.052088 | 0.001407 | 0.001576 | 0.001590 |
| adapt_assoc_tpl_adt.test | RUN | 0.452155 | 1.268178 | 1.487772 | 0.001574 | 0.001620 | 0.001534 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.332056 | 0.918660 | 1.049033 | 0.001512 | 0.001698 | 0.001656 |
| adapt_assoc_tpl_struct.test | RUN | 0.361604 | 1.067988 | 1.239194 | 0.001249 | 0.001446 | 0.001632 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.329772 | 0.921094 | 1.051195 | 0.001502 | 0.001672 | 0.001594 |
| adapt_struct_named.test | RUN | 0.368206 | 1.111708 | 1.246659 | 0.001621 | 0.001618 | 0.001627 |
| adapt_struct_named_empty.test | RUN | 0.328687 | 0.921962 | 1.037882 | 0.001550 | 0.001447 | 0.001693 |
| adapt_struct.test | RUN | 0.408146 | 1.260382 | 1.414215 | 0.001570 | 0.001626 | 0.001612 |
| adapt_struct_empty.test | RUN | 0.323211 | 0.906993 | 1.048709 | 0.001682 | 0.001650 | 0.001618 |
| adapt_tpl_adt.test | RUN | 0.415221 | 1.456367 | 1.488462 | 0.001386 | 0.001652 | 0.001578 |
| adapt_tpl_adt_empty.test | RUN | 0.337810 | 0.920417 | 1.043434 | 0.001583 | 0.001693 | 0.001654 |
| adapt_tpl_struct.test | RUN | 0.339960 | 0.998019 | 1.155129 | 0.001551 | 0.001649 | 0.001386 |
| adapt_tpl_struct_empty.test | RUN | 0.328546 | 0.927521 | 1.067061 | 0.001527 | 0.001731 | 0.001651 |
| adt_attribute_proxy.test | RUN | 0.364862 | 0.907245 | 1.124239 | 0.001590 | 0.001728 | 0.001601 |
| define_struct.test | RUN | 0.454165 | 1.258178 | 1.464774 | 0.001595 | 0.001650 | 0.001663 |
| define_struct_empty.test | RUN | 0.391601 | 1.034032 | 1.216583 | 0.001586 | 0.001643 | 0.001612 |
| define_struct_move.test | RUN | 0.250390 | 0.571088 | 0.726196 | 0.001522 | 0.001621 | 0.001644 |
| define_struct_inline.test | RUN | 0.469606 | 1.485723 | 1.663260 | 0.001576 | 0.001621 | 0.001761 |
| define_struct_inline_empty.test | RUN | 0.397123 | 1.038298 | 1.230174 | 0.001514 | 0.001554 | 0.001612 |
| define_struct_inline_move.test | RUN | 0.255567 | 0.576905 | 0.739024 | 0.001390 | 0.001677 | 0.001613 |
| define_assoc_struct.test | RUN | 0.433365 | 1.184232 | 1.392064 | 0.001564 | 0.001740 | 0.001636 |
| define_assoc_struct_empty.test | RUN | 0.387898 | 1.013393 | 1.225577 | 0.001520 | 0.001681 | 0.001637 |
| define_assoc_struct_move.test | RUN | 0.246509 | 0.583583 | 0.730930 | 0.001669 | 0.001612 | 0.001600 |
| define_tpl_struct.test | RUN | 0.421182 | 1.210204 | 1.410324 | 0.001623 | 0.001589 | 0.001450 |
| define_tpl_struct_empty.test | RUN | 0.388037 | 1.032403 | 1.203994 | 0.001548 | 0.001717 | 0.001623 |
| define_tpl_struct_move.test | RUN | 0.256179 | 0.600416 | 0.728482 | 0.001528 | 0.001623 | 0.001604 |
| define_tpl_struct_inline.test | RUN | 0.450823 | 1.392970 | 1.559744 | 0.001400 | 0.001691 | 0.001611 |
| define_tpl_struct_inline_empty.test | RUN | 0.387683 | 1.025605 | 1.213253 | 0.001465 | 0.001625 | 0.001581 |
| define_tpl_struct_inline_move.test | RUN | 0.254264 | 0.602560 | 0.759248 | 0.001509 | 0.001604 | 0.001651 |
| define_assoc_tpl_struct.test | RUN | 0.434890 | 1.212184 | 1.405502 | 0.001518 | 0.001712 | 0.001576 |
| define_assoc_tpl_struct_empty.test | RUN | 0.394288 | 1.016765 | 1.220573 | 0.001375 | 0.001492 | 0.001614 |
| define_assoc_tpl_struct_move.test | RUN | 0.257002 | 0.591597 | 0.742858 | 0.001402 | 0.001579 | 0.001604 |
| std_tuple.test | RUN | 0.261416 | 0.657109 | 0.802070 | 0.001508 | 0.001583 | 0.001538 |
| std_tuple_iterator.test | RUN | 0.261354 | 0.702417 | 0.818508 | 0.001541 | 0.001566 | 0.001636 |
| ref_vector.test | RUN | 0.298976 | 0.699406 | 0.875082 | 0.001534 | 0.001640 | 0.001674 |
| flatten_view.test | RUN | 0.316073 | 0.881091 | 1.050304 | 0.001628 | 0.001485 | 0.001685 |
| github-159.test | COMPILE | 0.144445 | 0.320308 | 0.378488 | — | — | — |
| github-176.test | RUN | 0.289127 | 0.776136 | 0.888564 | 0.001556 | 0.001690 | 0.001669 |
| size.test | COMPILE | 0.241582 | 0.561971 | 0.687065 | — | — | — |
| fused.test | RUN | 0.345792 | 0.836816 | 1.043450 | 0.001516 | 0.001642 | 0.001623 |
| fused_function_object.test | RUN | 0.258788 | 0.633146 | 0.780667 | 0.001430 | 0.001679 | 0.001601 |
| fused_procedure.test | RUN | 0.332818 | 0.796983 | 0.996367 | 0.001470 | 0.001505 | 0.001572 |
| unfused.test | RUN | 0.255025 | 0.646069 | 0.804877 | 0.001522 | 0.001577 | 0.001614 |
| unfused_typed.test | RUN | 0.266531 | 0.700844 | 0.836627 | 0.001492 | 0.001723 | 0.001599 |
| make_fused.test | RUN | 0.343889 | 0.845821 | 1.026977 | 0.001633 | 0.001479 | 0.001652 |
| make_fused_function_object.test | RUN | 0.261484 | 0.634134 | 0.781913 | 0.001497 | 0.001681 | 0.001483 |
| make_fused_procedure.test | RUN | 0.330133 | 0.808566 | 0.993083 | 0.001608 | 0.001606 | 0.001601 |
| make_unfused.test | RUN | 0.260231 | 0.640468 | 0.798140 | 0.001569 | 0.001668 | 0.001620 |
| invoke.test | RUN | 0.679422 | 2.272095 | 2.721765 | 0.001482 | 0.001638 | 0.001585 |
| invoke_function_object.test | RUN | 0.318142 | 0.835707 | 1.033916 | 0.001720 | 0.001706 | 0.001608 |
| invoke_procedure.test | RUN | 0.523778 | 1.699824 | 2.009079 | 0.001560 | 0.001591 | 0.001600 |
| swap.test | RUN | 0.392854 | 1.032259 | 1.281526 | 0.001537 | 0.001732 | 0.001680 |
| is_sequence.test | COMPILE | 0.067440 | 0.143948 | 0.156424 | — | — | — |
| is_view.test | COMPILE | 0.066840 | 0.146055 | 0.157478 | — | — | — |
| pair_deque.test | COMPILE | 0.146499 | 0.334119 | 0.397072 | — | — | — |
| pair_list.test | COMPILE | 0.145566 | 0.325729 | 0.374672 | — | — | — |
| pair_map.test | COMPILE | 0.149904 | 0.345536 | 0.421403 | — | — | — |
| pair_set.test | COMPILE | 0.151363 | 0.339486 | 0.400482 | — | — | — |
| pair_vector.test | COMPILE | 0.149070 | 0.333620 | 0.387881 | — | — | — |
| pair_nest.test | COMPILE | 0.059461 | 0.141216 | 0.156123 | — | — | — |
| index_sequence.test | COMPILE | 0.050557 | 0.097378 | 0.110196 | — | — | — |
| and.test | COMPILE | 0.039209 | 0.072118 | 0.076891 | — | — | — |
| tag_of.test | COMPILE | 0.067201 | 0.142612 | 0.152515 | — | — | — |
| unused.test | COMPILE | 0.035894 | 0.093444 | 0.090581 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.066098 | 0.140995 | 0.132889 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.045835 | 0.093731 | 0.114774 | — | — | — |
| quick.test | RUN | 0.169946 | 0.411024 | 0.489838 | 0.000489 | 0.001120 | 0.001055 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 0.998×, 1.003× | 1.001× |
| clang | 0.997× | 1.003×, 0.991× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44927958294).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.001004s | 0.000981s | 0.000979s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.001034s | 0.000981s | 0.000971s | byte equality observed |
| adapt_adt_named.test | 10 | 0.001010s | 0.001000s | 0.000994s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.001013s | 0.000963s | 0.000982s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.001034s | 0.000964s | 0.000998s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.000978s | 0.001011s | 0.001000s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.000968s | 0.000983s | 0.001002s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.000999s | 0.001027s | 0.001005s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.001016s | 0.000974s | 0.000989s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.000985s | 0.001013s | 0.000994s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.001031s | 0.001027s | 0.001010s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.000983s | 0.000987s | 0.000966s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.000977s | 0.000967s | 0.000981s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.000994s | 0.000980s | 0.000951s | byte equality observed |
| adapt_assoc_tpl_struct.test | 6 | 0.001001s | 0.001030s | 0.000994s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.001005s | 0.001034s | 0.000990s | byte equality observed |
| adapt_struct.test | 10 | 0.001003s | 0.000987s | 0.000975s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.000983s | 0.000986s | 0.001021s | byte equality observed |
| adapt_struct_named.test | 10 | 0.001004s | 0.001009s | 0.001023s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.001028s | 0.000982s | 0.000972s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.000995s | 0.000972s | 0.000984s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.000977s | 0.000961s | 0.000965s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.001002s | 0.001020s | 0.000960s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.000981s | 0.001024s | 0.000959s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.000958s | 0.000969s | 0.000956s | byte equality observed |
| all.test | 10 | 0.000981s | 0.000972s | 0.000984s | byte equality observed |
| any.test | 10 | 0.000964s | 0.000971s | 0.000957s | byte equality observed |
| array.test | 10 | 0.000967s | 0.001002s | 0.000996s | byte equality observed |
| as_deque.test | 10 | 0.000976s | 0.000942s | 0.000974s | byte equality observed |
| as_list.test | 10 | 0.000996s | 0.000984s | 0.000984s | byte equality observed |
| as_map.test | 10 | 0.000997s | 0.000990s | 0.001012s | byte equality observed |
| as_map_assoc.test | 10 | 0.000970s | 0.001015s | 0.000995s | byte equality observed |
| as_set.test | 10 | 0.000996s | 0.000998s | 0.000982s | byte equality observed |
| as_vector.test | 10 | 0.000998s | 0.001024s | 0.000967s | byte equality observed |
| back_extended_deque.test | 10 | 0.000940s | 0.000953s | 0.000934s | byte equality observed |
| boost_array.test | 10 | 0.000979s | 0.000946s | 0.000939s | byte equality observed |
| boost_tuple.test | 10 | 0.000990s | 0.000977s | 0.000975s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.000985s | 0.000975s | 0.000937s | byte equality observed |
| clear.test | 10 | 0.000979s | 0.001009s | 0.000984s | byte equality observed |
| cons.test | 10 | 0.001015s | 0.001006s | 0.001012s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.000968s | 0.001009s | 0.000993s | byte equality observed |
| convert_deque.test | 10 | 0.000951s | 0.000970s | 0.001003s | byte equality observed |
| convert_list.test | 10 | 0.000973s | 0.001003s | 0.001018s | byte equality observed |
| convert_std_pair.test | 10 | 0.000981s | 0.000946s | 0.000972s | byte equality observed |
| convert_std_tuple.test | 10 | 0.000985s | 0.000976s | 0.000964s | byte equality observed |
| convert_vector.test | 10 | 0.000958s | 0.000946s | 0.000973s | byte equality observed |
| copy.test | 10 | 0.000991s | 0.000976s | 0.000993s | byte equality observed |
| count.test | 10 | 0.000977s | 0.000985s | 0.000946s | byte equality observed |
| count_if.test | 10 | 0.000988s | 0.000978s | 0.000962s | byte equality observed |
| deduce_sequence.test | 10 | 0.000956s | 0.000990s | 0.000987s | byte equality observed |
| define_assoc_struct.test | 10 | 0.000990s | 0.000975s | 0.001011s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.000975s | 0.000969s | 0.000997s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.000988s | 0.000970s | 0.000940s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.000978s | 0.000993s | 0.000988s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.001001s | 0.000996s | 0.001004s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.000964s | 0.000976s | 0.000953s | byte equality observed |
| define_struct.test | 10 | 0.000998s | 0.001003s | 0.000951s | byte equality observed |
| define_struct_empty.test | 10 | 0.001015s | 0.001055s | 0.000968s | byte equality observed |
| define_struct_inline.test | 10 | 0.001015s | 0.001015s | 0.000991s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.000984s | 0.000971s | 0.001010s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.000962s | 0.001009s | 0.000942s | byte equality observed |
| define_struct_move.test | 10 | 0.000940s | 0.000944s | 0.001023s | byte equality observed |
| define_tpl_struct.test | 10 | 0.000994s | 0.000987s | 0.000953s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.000996s | 0.000997s | 0.000990s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.001006s | 0.001039s | 0.001006s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.000969s | 0.001017s | 0.000990s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.000972s | 0.000972s | 0.000953s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.000961s | 0.000964s | 0.000983s | byte equality observed |
| deque_comparison.test | 10 | 0.000958s | 0.000995s | 0.000977s | byte equality observed |
| deque_construction.test | 10 | 0.000958s | 0.000954s | 0.000984s | byte equality observed |
| deque_copy.test | 10 | 0.000982s | 0.000989s | 0.000973s | byte equality observed |
| deque_hash.test | 10 | 0.000963s | 0.000998s | 0.000984s | byte equality observed |
| deque_iterator.test | 10 | 0.000949s | 0.000985s | 0.000961s | byte equality observed |
| deque_make.test | 10 | 0.000955s | 0.000985s | 0.000951s | byte equality observed |
| deque_misc.test | 10 | 0.000974s | 0.000965s | 0.000950s | byte equality observed |
| deque_move.test | 10 | 0.000955s | 0.000970s | 0.000955s | byte equality observed |
| deque_mutate.test | 10 | 0.000982s | 0.000952s | 0.000961s | byte equality observed |
| deque_nest.test | 10 | 0.000969s | 0.000971s | 0.000938s | byte equality observed |
| deque_tie.test | 10 | 0.000950s | 0.000991s | 0.000972s | byte equality observed |
| deque_value_at.test | 10 | 0.000985s | 0.000975s | 0.000963s | byte equality observed |
| erase.test | 10 | 0.000975s | 0.000991s | 0.000946s | byte equality observed |
| erase_key.test | 10 | 0.001027s | 0.001027s | 0.000965s | byte equality observed |
| filter.test | 10 | 0.001001s | 0.000998s | 0.001031s | byte equality observed |
| filter_if.test | 10 | 0.000998s | 0.000971s | 0.001025s | byte equality observed |
| filter_view.test | 10 | 0.001008s | 0.001002s | 0.000988s | byte equality observed |
| find.test | 10 | 0.001015s | 0.000989s | 0.001007s | byte equality observed |
| find_if.test | 10 | 0.001021s | 0.001027s | 0.001015s | byte equality observed |
| flatten.test | 10 | 0.000991s | 0.001015s | 0.000967s | byte equality observed |
| flatten_view.test | 10 | 0.000996s | 0.000981s | 0.000990s | byte equality observed |
| fold.test | 10 | 0.001035s | 0.001028s | 0.000978s | byte equality observed |
| for_each.test | 10 | 0.000998s | 0.000986s | 0.000963s | byte equality observed |
| front_extended_deque.test | 10 | 0.000994s | 0.000956s | 0.000975s | byte equality observed |
| fused.test | 10 | 0.000958s | 0.000966s | 0.000972s | byte equality observed |
| fused_function_object.test | 10 | 0.000978s | 0.000994s | 0.000937s | byte equality observed |
| fused_procedure.test | 10 | 0.000975s | 0.000963s | 0.000956s | byte equality observed |
| github-176.test | 10 | 0.000963s | 0.000977s | 0.001004s | byte equality observed |
| hash.test | 10 | 0.000975s | 0.000972s | 0.000938s | byte equality observed |
| identity_view.test | 10 | 0.001015s | 0.001004s | 0.000992s | byte equality observed |
| insert.test | 10 | 0.001014s | 0.001033s | 0.001042s | byte equality observed |
| insert_range.test | 10 | 0.001000s | 0.001000s | 0.000986s | byte equality observed |
| invoke.test | 10 | 0.000942s | 0.000978s | 0.000992s | byte equality observed |
| invoke_function_object.test | 10 | 0.000931s | 0.000961s | 0.001000s | byte equality observed |
| invoke_procedure.test | 10 | 0.001010s | 0.000955s | 0.000947s | byte equality observed |
| io.test | 10 | 0.001105s | 0.001119s | 0.001115s | byte equality observed |
| iter_fold.test | 10 | 0.000983s | 0.000970s | 0.000947s | byte equality observed |
| iterator_range.test | 10 | 0.001012s | 0.000981s | 0.001005s | byte equality observed |
| join.test | 10 | 0.000937s | 0.000960s | 0.001006s | byte equality observed |
| joint_view.test | 10 | 0.001024s | 0.001009s | 0.001002s | byte equality observed |
| list_comparison.test | 10 | 0.000950s | 0.000954s | 0.000974s | byte equality observed |
| list_construction.test | 10 | 0.000963s | 0.000922s | 0.000976s | byte equality observed |
| list_copy.test | 10 | 0.000977s | 0.001021s | 0.000983s | byte equality observed |
| list_hash.test | 10 | 0.000969s | 0.000972s | 0.000995s | byte equality observed |
| list_iterator.test | 10 | 0.000983s | 0.000974s | 0.001007s | byte equality observed |
| list_make.test | 10 | 0.001000s | 0.000971s | 0.000965s | byte equality observed |
| list_misc.test | 10 | 0.000990s | 0.000941s | 0.000957s | byte equality observed |
| list_mutate.test | 10 | 0.000947s | 0.000952s | 0.000937s | byte equality observed |
| list_nest.test | 10 | 0.000983s | 0.000958s | 0.000964s | byte equality observed |
| list_tie.test | 10 | 0.000971s | 0.000955s | 0.000981s | byte equality observed |
| list_value_at.test | 10 | 0.000950s | 0.000979s | 0.000953s | byte equality observed |
| make_fused.test | 10 | 0.000967s | 0.000981s | 0.000970s | byte equality observed |
| make_fused_function_object.test | 10 | 0.000988s | 0.000999s | 0.000986s | byte equality observed |
| make_fused_procedure.test | 10 | 0.000952s | 0.000993s | 0.000973s | byte equality observed |
| make_list.test | 10 | 0.000974s | 0.000984s | 0.000980s | byte equality observed |
| make_unfused.test | 10 | 0.000991s | 0.000993s | 0.000994s | byte equality observed |
| make_vector.test | 10 | 0.000969s | 0.000995s | 0.000975s | byte equality observed |
| map.test | 10 | 0.000965s | 0.000994s | 0.000966s | byte equality observed |
| map_comparison.test | 10 | 0.000990s | 0.000978s | 0.001034s | byte equality observed |
| map_construction.test | 10 | 0.000999s | 0.000941s | 0.001023s | byte equality observed |
| map_copy.test | 10 | 0.000964s | 0.000978s | 0.000966s | byte equality observed |
| map_misc.test | 10 | 0.000988s | 0.000946s | 0.000939s | byte equality observed |
| map_move.test | 10 | 0.000974s | 0.000956s | 0.000957s | byte equality observed |
| map_mutate.test | 10 | 0.000967s | 0.001020s | 0.000959s | byte equality observed |
| map_tie.test | 10 | 0.001005s | 0.000982s | 0.000994s | byte equality observed |
| move.test | 10 | 0.000998s | 0.000954s | 0.000975s | byte equality observed |
| nil.test | 10 | 0.000951s | 0.000969s | 0.000956s | byte equality observed |
| none.test | 10 | 0.000974s | 0.000966s | 0.001000s | byte equality observed |
| nview.test | 10 | 0.001013s | 0.000961s | 0.000962s | byte equality observed |
| pop_back.test | 10 | 0.001005s | 0.000996s | 0.001021s | byte equality observed |
| pop_front.test | 10 | 0.001017s | 0.000984s | 0.001021s | byte equality observed |
| push_back.test | 10 | 0.001013s | 0.000978s | 0.001019s | byte equality observed |
| push_front.test | 10 | 0.001009s | 0.001000s | 0.000981s | byte equality observed |
| quick.test | 10 | 0.000427s | 0.000968s | 0.001026s | byte equality observed |
| ref_vector.test | 10 | 0.001037s | 0.000952s | 0.000929s | byte equality observed |
| remove.test | 10 | 0.000986s | 0.001019s | 0.000995s | byte equality observed |
| remove_if.test | 10 | 0.001021s | 0.000981s | 0.001025s | byte equality observed |
| repetitive_view.test | 10 | 0.000993s | 0.000944s | 0.000933s | byte equality observed |
| replace.test | 10 | 0.000997s | 0.000986s | 0.000980s | byte equality observed |
| replace_if.test | 10 | 0.001016s | 0.001048s | 0.001039s | byte equality observed |
| reverse.test | 10 | 0.001022s | 0.001031s | 0.001040s | byte equality observed |
| reverse_fold.test | 10 | 0.000985s | 0.000968s | 0.001015s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.001011s | 0.000984s | 0.000969s | byte equality observed |
| reverse_view.test | 10 | 0.000999s | 0.000981s | 0.000985s | byte equality observed |
| segmented_find.test | 10 | 0.000975s | 0.000967s | 0.000929s | byte equality observed |
| segmented_find_if.test | 10 | 0.000965s | 0.000958s | 0.000987s | byte equality observed |
| segmented_fold.test | 10 | 0.000994s | 0.001010s | 0.000969s | byte equality observed |
| segmented_for_each.test | 10 | 0.001001s | 0.000993s | 0.000964s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.001018s | 0.000983s | 0.000967s | byte equality observed |
| set.test | 10 | 0.000982s | 0.001018s | 0.000969s | byte equality observed |
| single_view.test | 10 | 0.000997s | 0.000989s | 0.001010s | byte equality observed |
| std_array.test | 10 | 0.000971s | 0.000981s | 0.000943s | byte equality observed |
| std_pair.test | 10 | 0.000977s | 0.000952s | 0.000969s | byte equality observed |
| std_tuple.test | 10 | 0.000961s | 0.001010s | 0.000950s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.000975s | 0.000935s | 0.000969s | byte equality observed |
| swap.test | 10 | 0.000976s | 0.000950s | 0.000968s | byte equality observed |
| transform.test | 10 | 0.000995s | 0.000999s | 0.000987s | byte equality observed |
| transform_view.test | 10 | 0.001015s | 0.000980s | 0.000998s | byte equality observed |
| tuple_comparison.test | 10 | 0.001016s | 0.000982s | 0.000999s | byte equality observed |
| tuple_construction.test | 10 | 0.000962s | 0.000974s | 0.000936s | byte equality observed |
| tuple_conversion.test | 10 | 0.000971s | 0.000985s | 0.000951s | byte equality observed |
| tuple_copy.test | 10 | 0.000963s | 0.000998s | 0.000980s | byte equality observed |
| tuple_element.test | 10 | 0.000959s | 0.000974s | 0.000951s | byte equality observed |
| tuple_hash.test | 10 | 0.000971s | 0.000977s | 0.000927s | byte equality observed |
| tuple_make.test | 10 | 0.000972s | 0.000985s | 0.000956s | byte equality observed |
| tuple_misc.test | 10 | 0.000960s | 0.000984s | 0.000940s | byte equality observed |
| tuple_mutate.test | 10 | 0.000943s | 0.000956s | 0.000943s | byte equality observed |
| tuple_nest.test | 10 | 0.000979s | 0.000964s | 0.000922s | byte equality observed |
| tuple_tie.test | 10 | 0.000967s | 0.000952s | 0.000971s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.001001s | 0.001023s | 0.000978s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.001002s | 0.000945s | 0.000972s | byte equality observed |
| unfused.test | 10 | 0.000954s | 0.000968s | 0.000963s | byte equality observed |
| unfused_typed.test | 10 | 0.000962s | 0.001003s | 0.000986s | byte equality observed |
| vector_comparison.test | 10 | 0.000994s | 0.000935s | 0.000955s | byte equality observed |
| vector_construction.test | 10 | 0.000991s | 0.000925s | 0.000985s | byte equality observed |
| vector_conversion.test | 9 | 0.000960s | 0.000977s | 0.000977s | byte equality observed |
| vector_copy.test | 10 | 0.000961s | 0.001001s | 0.000938s | byte equality observed |
| vector_hash.test | 10 | 0.000997s | 0.000963s | 0.000981s | byte equality observed |
| vector_iterator.test | 10 | 0.000946s | 0.000947s | 0.000951s | byte equality observed |
| vector_make.test | 10 | 0.000945s | 0.000999s | 0.000969s | byte equality observed |
| vector_misc.test | 10 | 0.000965s | 0.000930s | 0.001016s | byte equality observed |
| vector_move.test | 10 | 0.000961s | 0.000974s | 0.000953s | byte equality observed |
| vector_mutate.test | 10 | 0.000978s | 0.000953s | 0.001057s | byte equality observed |
| vector_n.test | 10 | 0.000975s | 0.000975s | 0.000963s | byte equality observed |
| vector_nest.test | 10 | 0.000972s | 0.000996s | 0.000956s | byte equality observed |
| vector_tie.test | 10 | 0.000947s | 0.000972s | 0.001002s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.000959s | 0.000967s | 0.000965s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.000984s | 0.000991s | 0.001002s | byte equality observed |
| vector_value_at.test | 10 | 0.001002s | 0.000988s | 0.000962s | byte equality observed |
| zip.test | 10 | 0.000958s | 0.000970s | 0.000956s | byte equality observed |
| zip2.test | 10 | 0.000960s | 0.000958s | 0.000939s | byte equality observed |
| zip_ignore.test | 10 | 0.001013s | 0.000960s | 0.001014s | byte equality observed |
| zip_view.test | 10 | 0.000958s | 0.000947s | 0.001010s | byte equality observed |
| zip_view2.test | 10 | 0.000996s | 0.000960s | 0.000947s | byte equality observed |
| zip_view_ignore.test | 10 | 0.000940s | 0.000958s | 0.000988s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44927958294).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
