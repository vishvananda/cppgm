# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.373687 | 0.863727 | 1.084045 | 0.001532 | 0.001466 | 0.001400 |
| any.test | RUN | 0.376278 | 0.812586 | 1.035761 | 0.001866 | 0.001480 | 0.001392 |
| clear.test | RUN | 0.271175 | 0.759397 | 0.854531 | 0.001388 | 0.001728 | 0.001656 |
| copy.test | RUN | 0.228043 | 0.565460 | 0.684162 | 0.001506 | 0.001748 | 0.001656 |
| count.test | RUN | 0.256560 | 0.625409 | 0.765053 | 0.001569 | 0.001773 | 0.001433 |
| count_if.test | RUN | 0.239200 | 0.571963 | 0.696571 | 0.001339 | 0.001644 | 0.001428 |
| erase.test | RUN | 0.339462 | 1.023557 | 1.154235 | 0.001388 | 0.001912 | 0.001626 |
| erase_key.test | RUN | 0.328558 | 1.027072 | 1.096752 | 0.001660 | 0.001349 | 0.001590 |
| filter.test | RUN | 0.302198 | 0.877827 | 0.967382 | 0.001512 | 0.001698 | 0.001700 |
| filter_if.test | RUN | 0.336307 | 1.013591 | 1.143081 | 0.001510 | 0.001483 | 0.001732 |
| find.test | RUN | 0.283210 | 0.686663 | 0.875595 | 0.001408 | 0.001646 | 0.001718 |
| find_if.test | RUN | 0.265482 | 0.637409 | 0.804443 | 0.001576 | 0.001570 | 0.001826 |
| fold.test | RUN | 0.302923 | 0.793783 | 0.985006 | 0.001620 | 0.001494 | 0.001694 |
| for_each.test | RUN | 0.273684 | 0.718647 | 0.874421 | 0.001491 | 0.001626 | 0.001647 |
| insert.test | RUN | 0.391990 | 1.252446 | 1.412938 | 0.001626 | 0.001460 | 0.001684 |
| insert_range.test | RUN | 0.393521 | 1.274925 | 1.416160 | 0.001424 | 0.001500 | 0.001698 |
| iter_fold.test | RUN | 0.459142 | 1.180594 | 1.623213 | 0.001508 | 0.001711 | 0.001566 |
| move.test | RUN | 0.232771 | 0.561642 | 0.695742 | 0.001731 | 0.001634 | 0.001472 |
| none.test | RUN | 0.367381 | 0.822549 | 1.057617 | 0.001568 | 0.001477 | 0.001455 |
| pop_back.test | RUN | 0.363927 | 1.092964 | 1.261334 | 0.001582 | 0.001496 | 0.001728 |
| pop_front.test | RUN | 0.309745 | 0.894096 | 1.000099 | 0.001725 | 0.001702 | 0.001460 |
| push_back.test | RUN | 0.396476 | 1.264982 | 1.382300 | 0.001564 | 0.001745 | 0.001772 |
| push_front.test | RUN | 0.344519 | 1.050781 | 1.156364 | 0.001464 | 0.001696 | 0.001673 |
| remove.test | RUN | 0.378666 | 1.203733 | 1.355219 | 0.001477 | 0.001677 | 0.001614 |
| remove_if.test | RUN | 0.347957 | 1.020704 | 1.180411 | 0.001618 | 0.001890 | 0.001634 |
| replace.test | RUN | 0.331527 | 0.987082 | 1.102328 | 0.001660 | 0.001672 | 0.001693 |
| replace_if.test | RUN | 0.327829 | 0.964537 | 1.055669 | 0.001564 | 0.001692 | 0.001750 |
| reverse_fold.test | RUN | 0.495496 | 1.358008 | 1.792208 | 0.001704 | 0.001620 | 0.001707 |
| reverse_iter_fold.test | RUN | 0.521038 | 1.399619 | 1.914391 | 0.001736 | 0.001761 | 0.001254 |
| reverse.test | RUN | 0.324656 | 1.011775 | 1.094211 | 0.001622 | 0.001668 | 0.001686 |
| segmented_for_each.test | RUN | 0.555475 | 1.860699 | 2.204520 | 0.001422 | 0.001631 | 0.001658 |
| segmented_find.test | RUN | 0.353600 | 0.994171 | 1.244309 | 0.001528 | 0.001628 | 0.001566 |
| segmented_find_if.test | RUN | 0.341937 | 1.001050 | 1.247203 | 0.001416 | 0.001710 | 0.001676 |
| segmented_fold.test | RUN | 0.419041 | 1.314186 | 1.585684 | 0.001606 | 0.001702 | 0.001702 |
| transform.test | RUN | 0.346712 | 1.045090 | 1.144616 | 0.001650 | 0.001654 | 0.001667 |
| join.test | RUN | 0.254178 | 0.645431 | 0.791807 | 0.001567 | 0.001670 | 0.001638 |
| zip.test | RUN | 0.431282 | 1.222913 | 1.514222 | 0.001497 | 0.001666 | 0.001694 |
| zip2.test | RUN | 0.423928 | 1.149920 | 1.442274 | 0.001558 | 0.001546 | 0.001500 |
| zip_ignore.test | RUN | 0.329782 | 0.789658 | 0.955930 | 0.001591 | 0.001577 | 0.001480 |
| flatten.test | RUN | 0.305403 | 0.880370 | 0.973192 | 0.001424 | 0.001574 | 0.001600 |
| ticket-5490.test | COMPILE | 0.161791 | 0.381892 | 0.446061 | — | — | — |
| as_deque.test | RUN | 0.302577 | 0.835095 | 1.042108 | 0.001514 | 0.001513 | 0.001628 |
| as_list.test | RUN | 0.342603 | 1.037078 | 1.156885 | 0.001551 | 0.001669 | 0.001659 |
| as_map.test | RUN | 0.342868 | 1.009887 | 1.161672 | 0.001446 | 0.001518 | 0.001374 |
| as_map_assoc.test | RUN | 0.333422 | 0.950804 | 1.069663 | 0.001468 | 0.001494 | 0.001558 |
| as_set.test | RUN | 0.385294 | 1.186782 | 1.346304 | 0.001722 | 0.001578 | 0.001555 |
| as_vector.test | RUN | 0.351384 | 1.043442 | 1.169950 | 0.001566 | 0.001524 | 0.001647 |
| boost_tuple.test | RUN | 0.355950 | 1.060962 | 1.165935 | 0.001463 | 0.001472 | 0.001726 |
| boost_tuple_iterator.test | RUN | 0.236005 | 0.609455 | 0.705044 | 0.001363 | 0.001552 | 0.001671 |
| cons.test | RUN | 0.440842 | 1.156712 | 1.393290 | 0.001436 | 0.001524 | 0.001620 |
| convert_boost_tuple.test | RUN | 0.276598 | 0.905370 | 0.917143 | 0.001454 | 0.001698 | 0.001514 |
| convert_deque.test | RUN | 0.280925 | 0.895593 | 0.898184 | 0.001524 | 0.001215 | 0.001548 |
| convert_list.test | RUN | 0.278638 | 0.917794 | 0.913593 | 0.001406 | 0.001435 | 0.001635 |
| convert_std_pair.test | RUN | 0.296810 | 0.900575 | 0.929207 | 0.001361 | 0.001520 | 0.001652 |
| convert_std_tuple.test | RUN | 0.276840 | 0.881879 | 0.901008 | 0.001486 | 0.001189 | 0.001442 |
| convert_vector.test | RUN | 0.289010 | 0.895805 | 0.905221 | 0.001458 | 0.001548 | 0.001678 |
| filter_view.test | RUN | 0.340146 | 0.936292 | 1.077710 | 0.001686 | 0.001542 | 0.001700 |
| hash.test | RUN | 0.334378 | 0.853923 | 1.026703 | 0.001568 | 0.001624 | 0.001620 |
| io.test | RUN | 0.360254 | 1.239495 | 1.237649 | 0.001508 | 0.002106 | 0.001905 |
| iterator_range.test | RUN | 0.319301 | 0.891383 | 1.025211 | 0.001519 | 0.001607 | 0.001628 |
| joint_view.test | RUN | 0.437136 | 1.524608 | 1.563556 | 0.001562 | 0.001722 | 0.001555 |
| list_comparison.test | RUN | 0.249168 | 0.629767 | 0.728641 | 0.001592 | 0.001542 | 0.001478 |
| list_construction.test | RUN | 0.239640 | 0.615554 | 0.736957 | 0.001514 | 0.001673 | 0.001651 |
| list_copy.test | RUN | 0.363189 | 1.109487 | 1.234743 | 0.001610 | 0.001435 | 0.001623 |
| list_iterator.test | RUN | 0.238172 | 0.606401 | 0.705558 | 0.001460 | 0.001653 | 0.001696 |
| list_hash.test | RUN | 0.324010 | 1.216872 | 1.022076 | 0.001556 | 0.001749 | 0.001494 |
| list_make.test | RUN | 0.251535 | 0.682083 | 0.779446 | 0.001318 | 0.001580 | 0.001609 |
| list_misc.test | RUN | 0.324103 | 0.767385 | 0.962145 | 0.001561 | 0.001637 | 0.001519 |
| list_mutate.test | RUN | 0.223043 | 0.541172 | 0.640225 | 0.001337 | 0.001644 | 0.001678 |
| list_nest.test | RUN | 0.452502 | 1.522637 | 1.770794 | 0.001496 | 0.001540 | 0.001583 |
| list_tie.test | RUN | 0.237403 | 0.590793 | 0.718908 | 0.001548 | 0.001545 | 0.001705 |
| list_value_at.test | RUN | 0.232316 | 0.569403 | 0.673668 | 0.001574 | 0.001509 | 0.001624 |
| deque_comparison.test | RUN | 0.238468 | 0.645949 | 0.766768 | 0.001519 | 0.001702 | 0.001729 |
| deque_construction.test | RUN | 0.246635 | 0.593990 | 0.735473 | 0.001613 | 0.001674 | 0.001593 |
| deque_copy.test | RUN | 0.361127 | 1.027496 | 1.185408 | 0.001336 | 0.001464 | 0.001693 |
| deque_iterator.test | RUN | 0.240146 | 0.639535 | 0.708823 | 0.001612 | 0.001580 | 0.001689 |
| deque_hash.test | RUN | 0.328483 | 1.191359 | 1.038181 | 0.001476 | 0.001701 | 0.001597 |
| deque_is_constructible.test | COMPILE | 0.131103 | 0.285344 | 0.336220 | — | — | — |
| deque_make.test | RUN | 0.245902 | 0.627717 | 0.760632 | 0.001700 | 0.001667 | 0.001625 |
| deque_misc.test | RUN | 0.316605 | 0.808754 | 0.950672 | 0.001524 | 0.001516 | 0.001746 |
| deque_move.test | RUN | 0.244597 | 0.652131 | 0.717527 | 0.001383 | 0.001679 | 0.001653 |
| deque_mutate.test | RUN | 0.221894 | 0.531772 | 0.639558 | 0.001244 | 0.001666 | 0.001711 |
| deque_nest.test | RUN | 0.667028 | 2.390895 | 2.844482 | 0.001416 | 0.001579 | 0.001481 |
| deque_tie.test | RUN | 0.232095 | 0.559212 | 0.684660 | 0.001484 | 0.001534 | 0.001782 |
| deque_value_at.test | RUN | 0.224111 | 0.568735 | 0.665493 | 0.001449 | 0.001586 | 0.001468 |
| front_extended_deque.test | RUN | 0.330702 | 0.806530 | 1.016210 | 0.001444 | 0.001763 | 0.001665 |
| back_extended_deque.test | RUN | 0.326245 | 0.816446 | 1.000937 | 0.001505 | 0.001569 | 0.001710 |
| make_list.test | RUN | 0.254630 | 0.673927 | 0.791382 | 0.001830 | 0.001566 | 0.001550 |
| make_vector.test | RUN | 0.250036 | 0.653919 | 0.813198 | 0.001531 | 0.001990 | 0.001604 |
| map.test | RUN | 0.332466 | 1.009175 | 1.119981 | 0.001681 | 0.001748 | 0.001631 |
| map_comparison.test | RUN | 0.246264 | 0.641042 | 0.756393 | 0.001522 | 0.001618 | 0.001695 |
| map_construction.test | RUN | 0.248352 | 0.623452 | 0.744425 | 0.001633 | 0.001596 | 0.001497 |
| map_copy.test | RUN | 0.292333 | 0.791943 | 0.916682 | 0.001461 | 0.001555 | 0.001703 |
| map_misc.test | RUN | 0.314432 | 0.809362 | 0.934761 | 0.001554 | 0.001605 | 0.001665 |
| map_move.test | RUN | 0.248812 | 0.682004 | 0.757487 | 0.001298 | 0.001556 | 0.001520 |
| map_mutate.test | RUN | 0.222921 | 0.532074 | 0.649594 | 0.001409 | 0.001352 | 0.001545 |
| map_tie.test | RUN | 0.229026 | 0.539191 | 0.660051 | 0.001430 | 0.001580 | 0.001643 |
| nil.test | RUN | 0.159330 | 0.382968 | 0.454974 | 0.001558 | 0.001522 | 0.001654 |
| nview.test | RUN | 0.306599 | 0.795117 | 0.972675 | 0.001706 | 0.001582 | 0.001725 |
| reverse_view.test | RUN | 0.417970 | 1.288258 | 1.445614 | 0.001416 | 0.001678 | 0.001784 |
| segmented_iterator_range.test | RUN | 0.465404 | 1.508236 | 1.776708 | 0.001525 | 0.001609 | 0.001646 |
| set.test | RUN | 0.301390 | 0.884444 | 0.991260 | 0.001590 | 0.001504 | 0.001782 |
| single_view.test | RUN | 0.279939 | 0.792071 | 0.898975 | 0.001527 | 0.001600 | 0.001624 |
| std_pair.test | RUN | 0.347363 | 1.021018 | 1.164694 | 0.001670 | 0.001676 | 0.001754 |
| boost_array.test | RUN | 0.292893 | 0.700460 | 0.873633 | 0.001386 | 0.001632 | 0.001629 |
| array.test | RUN | 0.291730 | 0.706782 | 0.862896 | 0.001465 | 0.001507 | 0.001621 |
| std_array.test | RUN | 0.293559 | 0.724071 | 0.850936 | 0.001459 | 0.001471 | 0.001653 |
| tuple_comparison.test | RUN | 0.259521 | 0.658229 | 0.793875 | 0.001678 | 0.001710 | 0.001640 |
| tuple_construction.test | RUN | 0.265369 | 0.663509 | 0.802259 | 0.001443 | 0.001645 | 0.001691 |
| tuple_conversion.test | RUN | 0.601439 | 2.008054 | 2.621921 | 0.001441 | 0.001582 | 0.001683 |
| tuple_copy.test | RUN | 0.399920 | 1.190236 | 1.390829 | 0.001493 | 0.001658 | 0.001476 |
| tuple_element.test | RUN | 0.241147 | 0.601247 | 0.757002 | 0.001633 | 0.001577 | 0.001564 |
| tuple_make.test | RUN | 0.261556 | 0.696528 | 0.821715 | 0.001405 | 0.001585 | 0.001664 |
| tuple_misc.test | RUN | 0.344148 | 0.858102 | 1.008600 | 0.001470 | 0.001577 | 0.001608 |
| tuple_mutate.test | RUN | 0.237609 | 0.562107 | 0.700294 | 0.001777 | 0.001470 | 0.001664 |
| tuple_nest.test | RUN | 0.997671 | 4.131012 | 4.900936 | 0.001372 | 0.001655 | 0.001608 |
| tuple_hash.test | RUN | 0.341212 | 1.223785 | 1.043323 | 0.001456 | 0.001532 | 0.001582 |
| tuple_tie.test | RUN | 0.252159 | 0.638590 | 0.775890 | 0.001507 | 0.001682 | 0.001618 |
| tuple_traits__maybe_variadic.test | RUN | 0.271624 | 0.750952 | 0.822494 | 0.001532 | 0.001604 | 0.001396 |
| tuple_traits__no_variadic.test | RUN | 0.302160 | 0.780769 | 0.874392 | 0.001502 | 0.001638 | 0.001716 |
| transform_view.test | RUN | 0.403590 | 1.286671 | 1.422435 | 0.001524 | 0.001596 | 0.001576 |
| identity_view.test | RUN | 0.389259 | 1.195622 | 1.328971 | 0.001539 | 0.001610 | 0.001716 |
| vector_comparison.test | RUN | 0.248949 | 0.658399 | 0.753783 | 0.001498 | 0.001568 | 0.001695 |
| vector_construction.test | RUN | 0.237812 | 0.603659 | 0.783407 | 0.001416 | 0.001768 | 0.001608 |
| vector_conversion.test | RUN | 0.720987 | 2.680541 | 3.413180 | 0.001718 | 0.001598 | 0.001676 |
| vector_copy.test | RUN | 0.385772 | 1.160136 | 1.382026 | 0.001382 | 0.001618 | 0.001503 |
| vector_iterator.test | RUN | 0.236325 | 0.642306 | 0.692099 | 0.001685 | 0.001732 | 0.001570 |
| vector_make.test | RUN | 0.249169 | 0.658076 | 0.756076 | 0.001520 | 0.001574 | 0.001612 |
| vector_misc.test | RUN | 0.325149 | 0.810590 | 0.939774 | 0.001194 | 0.001761 | 0.001750 |
| vector_move.test | RUN | 0.252625 | 0.687675 | 0.764214 | 0.001408 | 0.001702 | 0.001584 |
| vector_mutate.test | RUN | 0.221758 | 0.551334 | 0.643457 | 0.001372 | 0.001540 | 0.001790 |
| vector_n.test | RUN | 0.274244 | 0.682933 | 0.897846 | 0.001582 | 0.001716 | 0.001742 |
| vector_nest.test | RUN | 1.009571 | 4.362837 | 4.974993 | 0.001577 | 0.001654 | 0.001513 |
| vector_hash.test | RUN | 0.330341 | 1.215305 | 1.017320 | 0.001561 | 0.001650 | 0.001683 |
| vector_tie.test | RUN | 0.239170 | 0.608592 | 0.713659 | 0.001728 | 0.001621 | 0.001605 |
| vector_traits__maybe_variadic.test | RUN | 0.258430 | 0.678140 | 0.735402 | 0.002334 | 0.001724 | 0.001723 |
| vector_traits__no_variadic.test | RUN | 0.299335 | 0.748057 | 0.793289 | 0.001439 | 0.001321 | 0.001670 |
| vector_value_at.test | RUN | 0.258622 | 0.564642 | 0.663718 | 0.001425 | 0.001589 | 0.001530 |
| zip_view.test | RUN | 0.464478 | 1.358103 | 1.707055 | 0.001730 | 0.001596 | 0.001456 |
| zip_view2.test | RUN | 0.382688 | 1.035929 | 1.333270 | 0.001335 | 0.001521 | 0.001614 |
| zip_view_ignore.test | RUN | 0.352087 | 0.943179 | 1.167843 | 0.001532 | 0.001486 | 0.001416 |
| repetitive_view.test | RUN | 0.588670 | 1.724474 | 2.210644 | 0.001550 | 0.001607 | 0.001642 |
| deduce_sequence.test | RUN | 0.289793 | 0.727722 | 0.950714 | 0.001517 | 0.001430 | 0.001478 |
| adapt_adt_named.test | RUN | 0.350585 | 1.022695 | 1.100956 | 0.001521 | 0.001546 | 0.001700 |
| adapt_adt_named_empty.test | RUN | 0.303757 | 0.822500 | 0.937559 | 0.001585 | 0.001615 | 0.001468 |
| adapt_adt.test | RUN | 0.423256 | 1.380952 | 1.387605 | 0.001424 | 0.001715 | 0.001649 |
| adapt_adt_empty.test | RUN | 0.332483 | 0.833725 | 0.945135 | 0.001552 | 0.001611 | 0.001720 |
| adapt_assoc_adt_named.test | RUN | 0.424568 | 1.073841 | 1.246866 | 0.001468 | 0.001756 | 0.001738 |
| adapt_assoc_adt_named_empty.test | RUN | 0.334144 | 0.843053 | 0.937248 | 0.001419 | 0.001710 | 0.001692 |
| adapt_assoc_adt.test | RUN | 0.397536 | 1.134411 | 1.291982 | 0.001387 | 0.001820 | 0.001479 |
| adapt_assoc_adt_empty.test | RUN | 0.302918 | 0.838849 | 0.946775 | 0.001551 | 0.001662 | 0.001610 |
| adapt_assoc_struct_named.test | RUN | 0.381277 | 1.094216 | 1.205270 | 0.001574 | 0.001788 | 0.001372 |
| adapt_assoc_struct_named_empty.test | RUN | 0.304078 | 0.828154 | 0.935867 | 0.001388 | 0.001672 | 0.001634 |
| adapt_assoc_struct.test | RUN | 0.352589 | 1.005187 | 1.148080 | 0.001535 | 0.001696 | 0.001622 |
| adapt_assoc_struct_empty.test | RUN | 0.300388 | 0.849759 | 0.942985 | 0.001442 | 0.001658 | 0.001696 |
| adapt_assoc_tpl_adt.test | RUN | 0.408577 | 1.169820 | 1.342194 | 0.001429 | 0.001762 | 0.001494 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.312942 | 0.847993 | 0.915471 | 0.001328 | 0.001786 | 0.001640 |
| adapt_assoc_tpl_struct.test | RUN | 0.333545 | 1.000535 | 1.091562 | 0.001522 | 0.001682 | 0.001392 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.295086 | 0.847046 | 0.919821 | 0.001430 | 0.001718 | 0.001133 |
| adapt_struct_named.test | RUN | 0.347732 | 1.041414 | 1.098824 | 0.001490 | 0.001562 | 0.001710 |
| adapt_struct_named_empty.test | RUN | 0.306401 | 0.834166 | 0.921627 | 0.001356 | 0.001730 | 0.001639 |
| adapt_struct.test | RUN | 0.375174 | 1.178725 | 1.250224 | 0.001864 | 0.001800 | 0.001737 |
| adapt_struct_empty.test | RUN | 0.300414 | 0.862095 | 0.927860 | 0.001694 | 0.001785 | 0.001525 |
| adapt_tpl_adt.test | RUN | 0.385046 | 1.370842 | 1.304423 | 0.001508 | 0.001648 | 0.001372 |
| adapt_tpl_adt_empty.test | RUN | 0.301072 | 0.855542 | 0.937060 | 0.001634 | 0.001688 | 0.001427 |
| adapt_tpl_struct.test | RUN | 0.320949 | 0.970839 | 1.035845 | 0.001589 | 0.001418 | 0.001238 |
| adapt_tpl_struct_empty.test | RUN | 0.308410 | 0.836666 | 0.951669 | 0.001615 | 0.001683 | 0.001684 |
| adt_attribute_proxy.test | RUN | 0.345522 | 0.828071 | 0.999013 | 0.001521 | 0.001676 | 0.001780 |
| define_struct.test | RUN | 0.424905 | 1.155176 | 1.319910 | 0.001655 | 0.001827 | 0.001639 |
| define_struct_empty.test | RUN | 0.367835 | 0.946920 | 1.075155 | 0.001520 | 0.001603 | 0.001751 |
| define_struct_move.test | RUN | 0.231560 | 0.536654 | 0.645947 | 0.001600 | 0.001724 | 0.001425 |
| define_struct_inline.test | RUN | 0.440519 | 1.377133 | 1.476039 | 0.001541 | 0.001526 | 0.001734 |
| define_struct_inline_empty.test | RUN | 0.364039 | 0.947412 | 1.081125 | 0.001560 | 0.001814 | 0.001656 |
| define_struct_inline_move.test | RUN | 0.232781 | 0.540439 | 0.648509 | 0.001549 | 0.001686 | 0.001648 |
| define_assoc_struct.test | RUN | 0.397267 | 1.082438 | 1.250452 | 0.001594 | 0.001726 | 0.001702 |
| define_assoc_struct_empty.test | RUN | 0.361588 | 0.947637 | 1.082509 | 0.001440 | 0.001585 | 0.001682 |
| define_assoc_struct_move.test | RUN | 0.226977 | 0.522614 | 0.651488 | 0.001616 | 0.001644 | 0.001426 |
| define_tpl_struct.test | RUN | 0.390984 | 1.117595 | 1.248599 | 0.001563 | 0.001568 | 0.001418 |
| define_tpl_struct_empty.test | RUN | 0.368891 | 0.942895 | 1.083289 | 0.001596 | 0.001675 | 0.001457 |
| define_tpl_struct_move.test | RUN | 0.236784 | 0.547516 | 0.653978 | 0.001560 | 0.001762 | 0.001560 |
| define_tpl_struct_inline.test | RUN | 0.420470 | 1.284148 | 1.380958 | 0.001504 | 0.001607 | 0.001725 |
| define_tpl_struct_inline_empty.test | RUN | 0.367526 | 0.958917 | 1.080229 | 0.001536 | 0.001556 | 0.001705 |
| define_tpl_struct_inline_move.test | RUN | 0.237539 | 0.539297 | 0.653815 | 0.001513 | 0.001740 | 0.001465 |
| define_assoc_tpl_struct.test | RUN | 0.404330 | 1.116932 | 1.287994 | 0.001644 | 0.001620 | 0.001717 |
| define_assoc_tpl_struct_empty.test | RUN | 0.361330 | 0.936924 | 1.100816 | 0.001492 | 0.001605 | 0.001609 |
| define_assoc_tpl_struct_move.test | RUN | 0.236384 | 0.538872 | 0.641005 | 0.001434 | 0.001536 | 0.001646 |
| std_tuple.test | RUN | 0.247505 | 0.599907 | 0.710852 | 0.001506 | 0.001489 | 0.001459 |
| std_tuple_iterator.test | RUN | 0.234514 | 0.629771 | 0.722937 | 0.001585 | 0.001623 | 0.001652 |
| ref_vector.test | RUN | 0.272816 | 0.652964 | 0.772488 | 0.001576 | 0.001618 | 0.001663 |
| flatten_view.test | RUN | 0.287860 | 0.797465 | 0.930942 | 0.001469 | 0.001662 | 0.001520 |
| github-159.test | COMPILE | 0.131611 | 0.288512 | 0.335965 | — | — | — |
| github-176.test | RUN | 0.276678 | 0.704012 | 0.785529 | 0.001646 | 0.001651 | 0.001638 |
| size.test | COMPILE | 0.230161 | 0.501636 | 0.599132 | — | — | — |
| fused.test | RUN | 0.328435 | 0.762957 | 0.913347 | 0.001597 | 0.001683 | 0.001703 |
| fused_function_object.test | RUN | 0.234950 | 0.564406 | 0.684517 | 0.001645 | 0.001604 | 0.001687 |
| fused_procedure.test | RUN | 0.315178 | 0.734886 | 0.869244 | 0.001558 | 0.001584 | 0.001385 |
| unfused.test | RUN | 0.245676 | 0.588530 | 0.716088 | 0.001645 | 0.001675 | 0.001496 |
| unfused_typed.test | RUN | 0.252660 | 0.631636 | 0.727675 | 0.001614 | 0.001564 | 0.001590 |
| make_fused.test | RUN | 0.319544 | 0.753351 | 0.906916 | 0.001507 | 0.001429 | 0.001597 |
| make_fused_function_object.test | RUN | 0.239790 | 0.590126 | 0.691636 | 0.001439 | 0.001584 | 0.001415 |
| make_fused_procedure.test | RUN | 0.314243 | 0.714410 | 0.877679 | 0.001448 | 0.001590 | 0.001602 |
| make_unfused.test | RUN | 0.245727 | 0.583636 | 0.691783 | 0.001572 | 0.001582 | 0.001655 |
| invoke.test | RUN | 0.642606 | 2.081700 | 2.424565 | 0.001597 | 0.001582 | 0.001680 |
| invoke_function_object.test | RUN | 0.296907 | 0.760721 | 0.909784 | 0.001552 | 0.001789 | 0.001690 |
| invoke_procedure.test | RUN | 0.496318 | 1.545265 | 1.784789 | 0.001491 | 0.001652 | 0.001422 |
| swap.test | RUN | 0.376590 | 0.972916 | 1.143205 | 0.001470 | 0.001642 | 0.001736 |
| is_sequence.test | COMPILE | 0.062212 | 0.134307 | 0.141789 | — | — | — |
| is_view.test | COMPILE | 0.062830 | 0.133705 | 0.141249 | — | — | — |
| pair_deque.test | COMPILE | 0.134704 | 0.307845 | 0.348741 | — | — | — |
| pair_list.test | COMPILE | 0.131875 | 0.296155 | 0.340386 | — | — | — |
| pair_map.test | COMPILE | 0.137527 | 0.314927 | 0.374163 | — | — | — |
| pair_set.test | COMPILE | 0.138374 | 0.306142 | 0.354582 | — | — | — |
| pair_vector.test | COMPILE | 0.135683 | 0.305474 | 0.347238 | — | — | — |
| pair_nest.test | COMPILE | 0.055200 | 0.123137 | 0.132998 | — | — | — |
| index_sequence.test | COMPILE | 0.046209 | 0.085376 | 0.098052 | — | — | — |
| and.test | COMPILE | 0.034812 | 0.064507 | 0.071131 | — | — | — |
| tag_of.test | COMPILE | 0.061582 | 0.129146 | 0.131790 | — | — | — |
| unused.test | COMPILE | 0.032443 | 0.083041 | 0.082129 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.060482 | 0.130130 | 0.143678 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.047409 | 0.089386 | 0.130460 | — | — | — |
| quick.test | RUN | 0.171449 | 0.420515 | 0.428096 | 0.000503 | 0.001126 | 0.001125 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.005× | 1.007×, 1.002× | 0.996× |
| clang | 1.001× | 1.005×, 0.998× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45754596224).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.001056s | 0.001055s | 0.001052s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.001075s | 0.001036s | 0.001044s | byte equality observed |
| adapt_adt_named.test | 10 | 0.001041s | 0.001048s | 0.001031s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.001064s | 0.001026s | 0.001026s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.001040s | 0.001040s | 0.001066s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.001057s | 0.001038s | 0.001045s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.001043s | 0.001015s | 0.001034s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.001049s | 0.001041s | 0.001045s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.001046s | 0.001062s | 0.001052s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.001041s | 0.001049s | 0.001048s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.001057s | 0.001052s | 0.001071s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.001052s | 0.001025s | 0.001053s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.001041s | 0.001031s | 0.001057s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.001061s | 0.001029s | 0.001012s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.001061s | 0.001091s | 0.001065s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.001048s | 0.001048s | 0.001067s | byte equality observed |
| adapt_struct.test | 10 | 0.001054s | 0.001035s | 0.001044s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.001035s | 0.001050s | 0.001081s | byte equality observed |
| adapt_struct_named.test | 10 | 0.001063s | 0.001065s | 0.001044s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.001079s | 0.001040s | 0.001038s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.001047s | 0.001074s | 0.001037s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.001050s | 0.001038s | 0.001035s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.001043s | 0.001050s | 0.001057s | byte equality observed |
| adapt_tpl_struct_empty.test | 9 | 0.001044s | 0.001027s | 0.001021s | byte equality observed |
| adt_attribute_proxy.test | 9 | 0.001038s | 0.001051s | 0.001017s | byte equality observed |
| all.test | 10 | 0.001038s | 0.001040s | 0.001012s | byte equality observed |
| any.test | 10 | 0.001036s | 0.001025s | 0.000992s | byte equality observed |
| array.test | 10 | 0.001025s | 0.001061s | 0.001008s | byte equality observed |
| as_deque.test | 10 | 0.001010s | 0.001019s | 0.001008s | byte equality observed |
| as_list.test | 10 | 0.001078s | 0.001049s | 0.001070s | byte equality observed |
| as_map.test | 10 | 0.001049s | 0.001035s | 0.001059s | byte equality observed |
| as_map_assoc.test | 10 | 0.001049s | 0.001027s | 0.001027s | byte equality observed |
| as_set.test | 10 | 0.001076s | 0.001052s | 0.001068s | byte equality observed |
| as_vector.test | 10 | 0.001075s | 0.001060s | 0.001052s | byte equality observed |
| back_extended_deque.test | 10 | 0.001017s | 0.001016s | 0.001026s | byte equality observed |
| boost_array.test | 10 | 0.001002s | 0.001033s | 0.001041s | byte equality observed |
| boost_tuple.test | 10 | 0.001068s | 0.001032s | 0.001048s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.001016s | 0.001019s | 0.001067s | byte equality observed |
| clear.test | 10 | 0.001034s | 0.001077s | 0.001031s | byte equality observed |
| cons.test | 10 | 0.001051s | 0.001054s | 0.001034s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.001006s | 0.001007s | 0.001044s | byte equality observed |
| convert_deque.test | 10 | 0.001028s | 0.001047s | 0.001030s | byte equality observed |
| convert_list.test | 10 | 0.001025s | 0.001040s | 0.001022s | byte equality observed |
| convert_std_pair.test | 10 | 0.001054s | 0.001018s | 0.001046s | byte equality observed |
| convert_std_tuple.test | 10 | 0.001032s | 0.001052s | 0.001061s | byte equality observed |
| convert_vector.test | 10 | 0.001051s | 0.001034s | 0.001028s | byte equality observed |
| copy.test | 10 | 0.001037s | 0.001022s | 0.000996s | byte equality observed |
| count.test | 10 | 0.001074s | 0.001011s | 0.001062s | byte equality observed |
| count_if.test | 10 | 0.001045s | 0.001079s | 0.001033s | byte equality observed |
| deduce_sequence.test | 10 | 0.001057s | 0.001068s | 0.001094s | byte equality observed |
| define_assoc_struct.test | 10 | 0.001056s | 0.001055s | 0.001043s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.001081s | 0.001044s | 0.001049s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.001019s | 0.001013s | 0.001055s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.001062s | 0.001051s | 0.001039s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.001041s | 0.001037s | 0.001048s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.001021s | 0.001002s | 0.001032s | byte equality observed |
| define_struct.test | 10 | 0.001059s | 0.001065s | 0.001018s | byte equality observed |
| define_struct_empty.test | 10 | 0.001037s | 0.001051s | 0.001044s | byte equality observed |
| define_struct_inline.test | 10 | 0.001057s | 0.001089s | 0.001038s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.001054s | 0.001053s | 0.001022s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.001011s | 0.001021s | 0.001009s | byte equality observed |
| define_struct_move.test | 10 | 0.001022s | 0.001035s | 0.001074s | byte equality observed |
| define_tpl_struct.test | 10 | 0.001060s | 0.001067s | 0.001043s | byte equality observed |
| define_tpl_struct_empty.test | 10 | 0.001059s | 0.001042s | 0.001062s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.001030s | 0.001064s | 0.001035s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.001044s | 0.001063s | 0.001063s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.001036s | 0.001051s | 0.001008s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.001033s | 0.001029s | 0.001028s | byte equality observed |
| deque_comparison.test | 10 | 0.001041s | 0.001011s | 0.001041s | byte equality observed |
| deque_construction.test | 10 | 0.001065s | 0.001016s | 0.001046s | byte equality observed |
| deque_copy.test | 10 | 0.001077s | 0.001062s | 0.001009s | byte equality observed |
| deque_hash.test | 10 | 0.001047s | 0.001046s | 0.001018s | byte equality observed |
| deque_iterator.test | 10 | 0.001070s | 0.001067s | 0.001066s | byte equality observed |
| deque_make.test | 8 | 0.001056s | 0.001036s | 0.001027s | byte equality observed |
| deque_misc.test | 10 | 0.001032s | 0.001004s | 0.001060s | byte equality observed |
| deque_move.test | 10 | 0.001049s | 0.001066s | 0.001040s | byte equality observed |
| deque_mutate.test | 10 | 0.001034s | 0.001040s | 0.001024s | byte equality observed |
| deque_nest.test | 10 | 0.001035s | 0.001000s | 0.001066s | byte equality observed |
| deque_tie.test | 10 | 0.001015s | 0.001008s | 0.001033s | byte equality observed |
| deque_value_at.test | 10 | 0.001014s | 0.001003s | 0.001057s | byte equality observed |
| erase.test | 10 | 0.001063s | 0.001032s | 0.001060s | byte equality observed |
| erase_key.test | 10 | 0.001043s | 0.001048s | 0.001063s | byte equality observed |
| filter.test | 10 | 0.001035s | 0.001072s | 0.001041s | byte equality observed |
| filter_if.test | 10 | 0.001032s | 0.001051s | 0.001078s | byte equality observed |
| filter_view.test | 10 | 0.001046s | 0.001057s | 0.001078s | byte equality observed |
| find.test | 10 | 0.001041s | 0.001041s | 0.001027s | byte equality observed |
| find_if.test | 10 | 0.001032s | 0.001023s | 0.001071s | byte equality observed |
| flatten.test | 10 | 0.001035s | 0.001004s | 0.001031s | byte equality observed |
| flatten_view.test | 10 | 0.001030s | 0.001035s | 0.001035s | byte equality observed |
| fold.test | 10 | 0.001044s | 0.001028s | 0.001056s | byte equality observed |
| for_each.test | 10 | 0.001062s | 0.001086s | 0.001048s | byte equality observed |
| front_extended_deque.test | 10 | 0.001021s | 0.001039s | 0.001028s | byte equality observed |
| fused.test | 10 | 0.001053s | 0.001013s | 0.001028s | byte equality observed |
| fused_function_object.test | 10 | 0.001028s | 0.001051s | 0.001001s | byte equality observed |
| fused_procedure.test | 10 | 0.001030s | 0.001059s | 0.001019s | byte equality observed |
| github-176.test | 10 | 0.001021s | 0.001030s | 0.001023s | byte equality observed |
| hash.test | 10 | 0.001031s | 0.001059s | 0.001023s | byte equality observed |
| identity_view.test | 10 | 0.001046s | 0.001067s | 0.001054s | byte equality observed |
| insert.test | 10 | 0.001061s | 0.001057s | 0.001031s | byte equality observed |
| insert_range.test | 8 | 0.001037s | 0.001038s | 0.001043s | byte equality observed |
| invoke.test | 10 | 0.001033s | 0.001023s | 0.001037s | byte equality observed |
| invoke_function_object.test | 10 | 0.001019s | 0.001064s | 0.001044s | byte equality observed |
| invoke_procedure.test | 10 | 0.001034s | 0.001041s | 0.000989s | byte equality observed |
| io.test | 5 | 0.001175s | 0.001206s | 0.001244s | byte equality observed |
| iter_fold.test | 10 | 0.001030s | 0.001029s | 0.001077s | byte equality observed |
| iterator_range.test | 10 | 0.001060s | 0.001102s | 0.001096s | byte equality observed |
| join.test | 10 | 0.001014s | 0.000996s | 0.001046s | byte equality observed |
| joint_view.test | 10 | 0.001080s | 0.001073s | 0.001097s | byte equality observed |
| list_comparison.test | 10 | 0.001032s | 0.001056s | 0.001044s | byte equality observed |
| list_construction.test | 10 | 0.001010s | 0.001027s | 0.001083s | byte equality observed |
| list_copy.test | 10 | 0.001048s | 0.001049s | 0.001034s | byte equality observed |
| list_hash.test | 10 | 0.001041s | 0.001055s | 0.001029s | byte equality observed |
| list_iterator.test | 10 | 0.001047s | 0.001010s | 0.001049s | byte equality observed |
| list_make.test | 10 | 0.001047s | 0.001007s | 0.001042s | byte equality observed |
| list_misc.test | 10 | 0.001036s | 0.001037s | 0.001043s | byte equality observed |
| list_mutate.test | 10 | 0.001052s | 0.001052s | 0.001037s | byte equality observed |
| list_nest.test | 10 | 0.001059s | 0.001060s | 0.001010s | byte equality observed |
| list_tie.test | 10 | 0.001029s | 0.001003s | 0.001031s | byte equality observed |
| list_value_at.test | 10 | 0.001037s | 0.000997s | 0.001036s | byte equality observed |
| make_fused.test | 10 | 0.001038s | 0.001037s | 0.001032s | byte equality observed |
| make_fused_function_object.test | 10 | 0.001066s | 0.001049s | 0.001013s | byte equality observed |
| make_fused_procedure.test | 10 | 0.001018s | 0.001039s | 0.001011s | byte equality observed |
| make_list.test | 10 | 0.001024s | 0.001005s | 0.001074s | byte equality observed |
| make_unfused.test | 10 | 0.001023s | 0.001072s | 0.001029s | byte equality observed |
| make_vector.test | 10 | 0.001019s | 0.001054s | 0.001037s | byte equality observed |
| map.test | 10 | 0.001071s | 0.001056s | 0.001041s | byte equality observed |
| map_comparison.test | 10 | 0.001004s | 0.001038s | 0.001014s | byte equality observed |
| map_construction.test | 10 | 0.001012s | 0.001014s | 0.001013s | byte equality observed |
| map_copy.test | 10 | 0.001001s | 0.001021s | 0.001069s | byte equality observed |
| map_misc.test | 10 | 0.001006s | 0.001028s | 0.001015s | byte equality observed |
| map_move.test | 10 | 0.001048s | 0.001053s | 0.001059s | byte equality observed |
| map_mutate.test | 10 | 0.001019s | 0.001035s | 0.001043s | byte equality observed |
| map_tie.test | 10 | 0.001016s | 0.001054s | 0.001011s | byte equality observed |
| move.test | 10 | 0.001051s | 0.001028s | 0.001051s | byte equality observed |
| nil.test | 10 | 0.001038s | 0.001026s | 0.000997s | byte equality observed |
| none.test | 10 | 0.001041s | 0.001026s | 0.001031s | byte equality observed |
| nview.test | 10 | 0.001071s | 0.001054s | 0.001068s | byte equality observed |
| pop_back.test | 10 | 0.001055s | 0.001067s | 0.001069s | byte equality observed |
| pop_front.test | 10 | 0.001049s | 0.001080s | 0.001032s | byte equality observed |
| push_back.test | 10 | 0.001049s | 0.001056s | 0.001056s | byte equality observed |
| push_front.test | 10 | 0.001063s | 0.001043s | 0.001067s | byte equality observed |
| quick.test | 10 | 0.000454s | 0.001026s | 0.001014s | byte equality observed |
| ref_vector.test | 10 | 0.001028s | 0.001047s | 0.001031s | byte equality observed |
| remove.test | 10 | 0.001051s | 0.001083s | 0.001062s | byte equality observed |
| remove_if.test | 10 | 0.001063s | 0.001070s | 0.001053s | byte equality observed |
| repetitive_view.test | 10 | 0.001030s | 0.001030s | 0.001017s | byte equality observed |
| replace.test | 10 | 0.001035s | 0.001032s | 0.001055s | byte equality observed |
| replace_if.test | 10 | 0.001057s | 0.001063s | 0.001079s | byte equality observed |
| reverse.test | 10 | 0.001038s | 0.001052s | 0.001043s | byte equality observed |
| reverse_fold.test | 10 | 0.001018s | 0.001056s | 0.001046s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.001036s | 0.001012s | 0.001026s | byte equality observed |
| reverse_view.test | 10 | 0.001043s | 0.001054s | 0.001031s | byte equality observed |
| segmented_find.test | 10 | 0.001024s | 0.001013s | 0.001016s | byte equality observed |
| segmented_find_if.test | 10 | 0.001017s | 0.001055s | 0.001053s | byte equality observed |
| segmented_fold.test | 10 | 0.001063s | 0.001095s | 0.001080s | byte equality observed |
| segmented_for_each.test | 10 | 0.001067s | 0.001072s | 0.001069s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.001055s | 0.001070s | 0.001048s | byte equality observed |
| set.test | 10 | 0.001040s | 0.001054s | 0.001039s | byte equality observed |
| single_view.test | 10 | 0.001055s | 0.001063s | 0.001069s | byte equality observed |
| std_array.test | 10 | 0.001015s | 0.001020s | 0.001032s | byte equality observed |
| std_pair.test | 10 | 0.001066s | 0.001066s | 0.001083s | byte equality observed |
| std_tuple.test | 10 | 0.001009s | 0.001047s | 0.001025s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.001029s | 0.001029s | 0.001049s | byte equality observed |
| swap.test | 10 | 0.001018s | 0.001067s | 0.001032s | byte equality observed |
| transform.test | 10 | 0.001054s | 0.001024s | 0.001062s | byte equality observed |
| transform_view.test | 10 | 0.001055s | 0.001077s | 0.001068s | byte equality observed |
| tuple_comparison.test | 10 | 0.001033s | 0.001048s | 0.001019s | byte equality observed |
| tuple_construction.test | 10 | 0.001025s | 0.001033s | 0.001041s | byte equality observed |
| tuple_conversion.test | 10 | 0.001032s | 0.001068s | 0.001000s | byte equality observed |
| tuple_copy.test | 10 | 0.001054s | 0.001020s | 0.001034s | byte equality observed |
| tuple_element.test | 10 | 0.001010s | 0.001035s | 0.001048s | byte equality observed |
| tuple_hash.test | 10 | 0.001044s | 0.001053s | 0.001044s | byte equality observed |
| tuple_make.test | 10 | 0.001008s | 0.001063s | 0.001014s | byte equality observed |
| tuple_misc.test | 10 | 0.001061s | 0.001039s | 0.001038s | byte equality observed |
| tuple_mutate.test | 10 | 0.001029s | 0.001022s | 0.001057s | byte equality observed |
| tuple_nest.test | 10 | 0.001012s | 0.001069s | 0.001003s | byte equality observed |
| tuple_tie.test | 10 | 0.001053s | 0.001023s | 0.001055s | byte equality observed |
| tuple_traits__maybe_variadic.test | 9 | 0.000990s | 0.001053s | 0.001035s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.001045s | 0.001036s | 0.001034s | byte equality observed |
| unfused.test | 10 | 0.001025s | 0.001028s | 0.000999s | byte equality observed |
| unfused_typed.test | 10 | 0.001051s | 0.001040s | 0.001019s | byte equality observed |
| vector_comparison.test | 10 | 0.001009s | 0.001034s | 0.001040s | byte equality observed |
| vector_construction.test | 10 | 0.001027s | 0.001021s | 0.001030s | byte equality observed |
| vector_conversion.test | 10 | 0.001025s | 0.001035s | 0.001043s | byte equality observed |
| vector_copy.test | 10 | 0.001017s | 0.001028s | 0.001013s | byte equality observed |
| vector_hash.test | 10 | 0.001060s | 0.001038s | 0.001037s | byte equality observed |
| vector_iterator.test | 10 | 0.001042s | 0.001055s | 0.001028s | byte equality observed |
| vector_make.test | 10 | 0.001055s | 0.001037s | 0.001006s | byte equality observed |
| vector_misc.test | 10 | 0.001021s | 0.001021s | 0.001026s | byte equality observed |
| vector_move.test | 10 | 0.001035s | 0.001050s | 0.001056s | byte equality observed |
| vector_mutate.test | 10 | 0.001007s | 0.001057s | 0.001012s | byte equality observed |
| vector_n.test | 10 | 0.001053s | 0.001083s | 0.001058s | byte equality observed |
| vector_nest.test | 10 | 0.001016s | 0.001049s | 0.001055s | byte equality observed |
| vector_tie.test | 10 | 0.001058s | 0.001032s | 0.001011s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.001016s | 0.001025s | 0.001037s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.001002s | 0.001062s | 0.001000s | byte equality observed |
| vector_value_at.test | 10 | 0.001038s | 0.001026s | 0.001076s | byte equality observed |
| zip.test | 10 | 0.001024s | 0.001043s | 0.001019s | byte equality observed |
| zip2.test | 10 | 0.001033s | 0.001059s | 0.001008s | byte equality observed |
| zip_ignore.test | 10 | 0.001015s | 0.001016s | 0.001033s | byte equality observed |
| zip_view.test | 10 | 0.001070s | 0.001094s | 0.001024s | byte equality observed |
| zip_view2.test | 10 | 0.001028s | 0.001059s | 0.001069s | byte equality observed |
| zip_view_ignore.test | 10 | 0.001024s | 0.001031s | 0.001006s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45754596224).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
