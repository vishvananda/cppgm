# libs/fusion/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| all.test | RUN | 0.395515 | 0.883507 | 1.147897 | 0.001649 | 0.001497 | 0.001661 |
| any.test | RUN | 0.384170 | 0.835080 | 1.053045 | 0.001676 | 0.001385 | 0.001656 |
| clear.test | RUN | 0.280983 | 0.777747 | 0.898270 | 0.001487 | 0.001612 | 0.001604 |
| copy.test | RUN | 0.237267 | 0.573894 | 0.703699 | 0.001504 | 0.001770 | 0.001670 |
| count.test | RUN | 0.263444 | 0.631014 | 0.793844 | 0.001551 | 0.001595 | 0.001553 |
| count_if.test | RUN | 0.249056 | 0.588628 | 0.722612 | 0.001466 | 0.001666 | 0.001608 |
| erase.test | RUN | 0.343892 | 1.055846 | 1.190512 | 0.001562 | 0.001562 | 0.001692 |
| erase_key.test | RUN | 0.353881 | 1.049360 | 1.123164 | 0.001502 | 0.001552 | 0.001554 |
| filter.test | RUN | 0.314481 | 0.880419 | 0.999206 | 0.001804 | 0.001749 | 0.001664 |
| filter_if.test | RUN | 0.344652 | 1.046888 | 1.186589 | 0.001694 | 0.001682 | 0.001749 |
| find.test | RUN | 0.306693 | 0.707005 | 0.900266 | 0.001698 | 0.001530 | 0.001636 |
| find_if.test | RUN | 0.286203 | 0.650890 | 0.824150 | 0.001536 | 0.001497 | 0.001763 |
| fold.test | RUN | 0.320864 | 0.819071 | 1.013189 | 0.001661 | 0.001724 | 0.001570 |
| for_each.test | RUN | 0.282787 | 0.754210 | 0.883091 | 0.001693 | 0.001747 | 0.001704 |
| insert.test | RUN | 0.415024 | 1.301366 | 1.428063 | 0.001760 | 0.001699 | 0.001657 |
| insert_range.test | RUN | 0.422106 | 1.293741 | 1.426874 | 0.001512 | 0.001508 | 0.001483 |
| iter_fold.test | RUN | 0.492088 | 1.220810 | 1.696231 | 0.001704 | 0.001810 | 0.001700 |
| move.test | RUN | 0.240361 | 0.592557 | 0.734399 | 0.001778 | 0.001648 | 0.001571 |
| none.test | RUN | 0.394536 | 0.850340 | 1.082010 | 0.001630 | 0.001620 | 0.001778 |
| pop_back.test | RUN | 0.392439 | 1.138586 | 1.287714 | 0.001647 | 0.001598 | 0.001719 |
| pop_front.test | RUN | 0.327799 | 0.927631 | 1.023803 | 0.001874 | 0.001794 | 0.001672 |
| push_back.test | RUN | 0.411398 | 1.298389 | 1.423322 | 0.001665 | 0.001800 | 0.001624 |
| push_front.test | RUN | 0.357924 | 1.076736 | 1.190750 | 0.001598 | 0.001748 | 0.001852 |
| remove.test | RUN | 0.390086 | 1.229178 | 1.397201 | 0.001502 | 0.001704 | 0.001327 |
| remove_if.test | RUN | 0.354033 | 1.050598 | 1.187141 | 0.001529 | 0.001801 | 0.001826 |
| replace.test | RUN | 0.344082 | 1.010132 | 1.113057 | 0.001925 | 0.001806 | 0.001580 |
| replace_if.test | RUN | 0.341603 | 0.996907 | 1.093687 | 0.001703 | 0.001826 | 0.001802 |
| reverse_fold.test | RUN | 0.508793 | 1.408745 | 1.865802 | 0.001568 | 0.001676 | 0.001656 |
| reverse_iter_fold.test | RUN | 0.527209 | 1.429522 | 1.956365 | 0.001513 | 0.001538 | 0.001561 |
| reverse.test | RUN | 0.332437 | 1.047220 | 1.115810 | 0.001687 | 0.001775 | 0.001460 |
| segmented_for_each.test | RUN | 0.574903 | 1.930595 | 2.280230 | 0.001680 | 0.001693 | 0.001445 |
| segmented_find.test | RUN | 0.367471 | 1.033220 | 1.283465 | 0.001650 | 0.001773 | 0.001694 |
| segmented_find_if.test | RUN | 0.350044 | 1.024044 | 1.264578 | 0.001335 | 0.001533 | 0.001678 |
| segmented_fold.test | RUN | 0.453233 | 1.356701 | 1.608532 | 0.001724 | 0.001857 | 0.001743 |
| transform.test | RUN | 0.366792 | 1.102191 | 1.179520 | 0.001674 | 0.001675 | 0.001754 |
| join.test | RUN | 0.259416 | 0.648138 | 0.816635 | 0.001670 | 0.001701 | 0.001674 |
| zip.test | RUN | 0.455305 | 1.258485 | 1.546252 | 0.001608 | 0.001722 | 0.001676 |
| zip2.test | RUN | 0.447227 | 1.180585 | 1.487990 | 0.001577 | 0.001573 | 0.001576 |
| zip_ignore.test | RUN | 0.335958 | 0.815491 | 0.993681 | 0.001598 | 0.001569 | 0.001547 |
| flatten.test | RUN | 0.323869 | 0.914515 | 1.019039 | 0.001599 | 0.001728 | 0.001744 |
| ticket-5490.test | COMPILE | 0.171485 | 0.387389 | 0.450707 | — | — | — |
| as_deque.test | RUN | 0.315734 | 0.858679 | 1.092047 | 0.001776 | 0.001598 | 0.001715 |
| as_list.test | RUN | 0.365798 | 1.059597 | 1.177407 | 0.001743 | 0.001627 | 0.001720 |
| as_map.test | RUN | 0.356794 | 1.059353 | 1.179611 | 0.001421 | 0.001604 | 0.001732 |
| as_map_assoc.test | RUN | 0.356000 | 0.970445 | 1.126502 | 0.001606 | 0.001769 | 0.001615 |
| as_set.test | RUN | 0.401196 | 1.225599 | 1.365073 | 0.001846 | 0.001745 | 0.001632 |
| as_vector.test | RUN | 0.363010 | 1.099162 | 1.224072 | 0.001634 | 0.001552 | 0.001764 |
| boost_tuple.test | RUN | 0.366264 | 1.091904 | 1.205532 | 0.001464 | 0.001748 | 0.001541 |
| boost_tuple_iterator.test | RUN | 0.247196 | 0.631887 | 0.731762 | 0.001383 | 0.001660 | 0.001526 |
| cons.test | RUN | 0.451143 | 1.205586 | 1.422632 | 0.001572 | 0.001444 | 0.001669 |
| convert_boost_tuple.test | RUN | 0.284432 | 0.922852 | 0.936511 | 0.001563 | 0.001751 | 0.001472 |
| convert_deque.test | RUN | 0.286385 | 0.919491 | 0.932335 | 0.001556 | 0.001599 | 0.001664 |
| convert_list.test | RUN | 0.284673 | 0.945444 | 0.942686 | 0.001282 | 0.001654 | 0.001528 |
| convert_std_pair.test | RUN | 0.298554 | 0.938024 | 0.966727 | 0.001674 | 0.001729 | 0.001482 |
| convert_std_tuple.test | RUN | 0.286635 | 0.918212 | 0.922615 | 0.001620 | 0.001414 | 0.001497 |
| convert_vector.test | RUN | 0.288115 | 0.933620 | 0.942858 | 0.001465 | 0.001607 | 0.001623 |
| filter_view.test | RUN | 0.350355 | 0.982191 | 1.099479 | 0.001730 | 0.001666 | 0.001774 |
| hash.test | RUN | 0.344691 | 0.884268 | 1.057167 | 0.001834 | 0.001710 | 0.001634 |
| io.test | RUN | 0.375314 | 1.276073 | 1.271321 | 0.001694 | 0.002066 | 0.002001 |
| iterator_range.test | RUN | 0.327209 | 0.933716 | 1.053554 | 0.001613 | 0.001719 | 0.001535 |
| joint_view.test | RUN | 0.447998 | 1.564295 | 1.590601 | 0.001855 | 0.001639 | 0.001786 |
| list_comparison.test | RUN | 0.249814 | 0.643550 | 0.787648 | 0.001580 | 0.001686 | 0.001574 |
| list_construction.test | RUN | 0.250119 | 0.631207 | 0.733599 | 0.001607 | 0.001690 | 0.001650 |
| list_copy.test | RUN | 0.379413 | 1.143954 | 1.284290 | 0.001484 | 0.001436 | 0.001621 |
| list_iterator.test | RUN | 0.246113 | 0.647851 | 0.713869 | 0.001586 | 0.001436 | 0.001599 |
| list_hash.test | RUN | 0.344414 | 1.262533 | 1.042333 | 0.001688 | 0.001644 | 0.001714 |
| list_make.test | RUN | 0.261507 | 0.695950 | 0.808654 | 0.001736 | 0.001536 | 0.001536 |
| list_misc.test | RUN | 0.335920 | 0.814663 | 0.975940 | 0.001827 | 0.001625 | 0.001572 |
| list_mutate.test | RUN | 0.231012 | 0.553693 | 0.678332 | 0.001642 | 0.001683 | 0.001675 |
| list_nest.test | RUN | 0.473898 | 1.550228 | 1.809002 | 0.001507 | 0.001549 | 0.001641 |
| list_tie.test | RUN | 0.254202 | 0.639225 | 0.726419 | 0.001556 | 0.001779 | 0.001676 |
| list_value_at.test | RUN | 0.233406 | 0.571932 | 0.730585 | 0.001504 | 0.001551 | 0.001683 |
| deque_comparison.test | RUN | 0.246639 | 0.671958 | 0.746786 | 0.001366 | 0.001680 | 0.001475 |
| deque_construction.test | RUN | 0.252525 | 0.612714 | 0.757245 | 0.001648 | 0.001718 | 0.001621 |
| deque_copy.test | RUN | 0.374489 | 1.062495 | 1.198983 | 0.001430 | 0.001661 | 0.001684 |
| deque_iterator.test | RUN | 0.251149 | 0.648766 | 0.736586 | 0.001556 | 0.001556 | 0.001662 |
| deque_hash.test | RUN | 0.335039 | 1.240994 | 1.054536 | 0.001622 | 0.001727 | 0.001574 |
| deque_is_constructible.test | COMPILE | 0.134466 | 0.280153 | 0.336432 | — | — | — |
| deque_make.test | RUN | 0.252531 | 0.669652 | 0.783248 | 0.001670 | 0.001512 | 0.001644 |
| deque_misc.test | RUN | 0.333081 | 0.794081 | 0.958909 | 0.001575 | 0.001777 | 0.001732 |
| deque_move.test | RUN | 0.254474 | 0.701065 | 0.750971 | 0.001647 | 0.001682 | 0.001566 |
| deque_mutate.test | RUN | 0.228388 | 0.539216 | 0.649550 | 0.001709 | 0.001701 | 0.001620 |
| deque_nest.test | RUN | 0.700171 | 2.480909 | 2.907775 | 0.001517 | 0.001645 | 0.001635 |
| deque_tie.test | RUN | 0.235690 | 0.569336 | 0.690147 | 0.001582 | 0.001418 | 0.001672 |
| deque_value_at.test | RUN | 0.237062 | 0.551848 | 0.699944 | 0.001868 | 0.001670 | 0.001700 |
| front_extended_deque.test | RUN | 0.338230 | 0.853502 | 1.023877 | 0.001622 | 0.001734 | 0.001619 |
| back_extended_deque.test | RUN | 0.334881 | 0.835912 | 1.009949 | 0.001482 | 0.001698 | 0.001544 |
| make_list.test | RUN | 0.260311 | 0.680623 | 0.825307 | 0.001794 | 0.001660 | 0.001605 |
| make_vector.test | RUN | 0.260439 | 0.687257 | 0.767505 | 0.001747 | 0.001712 | 0.001694 |
| map.test | RUN | 0.350182 | 1.033388 | 1.127931 | 0.001681 | 0.001815 | 0.001626 |
| map_comparison.test | RUN | 0.257135 | 0.667313 | 0.780530 | 0.001706 | 0.001622 | 0.001691 |
| map_construction.test | RUN | 0.257419 | 0.627668 | 0.757716 | 0.001532 | 0.001706 | 0.001638 |
| map_copy.test | RUN | 0.307613 | 0.810259 | 0.943720 | 0.001741 | 0.001733 | 0.001722 |
| map_misc.test | RUN | 0.332081 | 0.823621 | 0.952141 | 0.001469 | 0.001672 | 0.001635 |
| map_move.test | RUN | 0.259001 | 0.698506 | 0.769968 | 0.001652 | 0.001654 | 0.001515 |
| map_mutate.test | RUN | 0.231042 | 0.553559 | 0.654159 | 0.001279 | 0.001692 | 0.001477 |
| map_tie.test | RUN | 0.241277 | 0.546808 | 0.677509 | 0.001698 | 0.001642 | 0.001694 |
| nil.test | RUN | 0.159964 | 0.382079 | 0.466182 | 0.001730 | 0.001626 | 0.001696 |
| nview.test | RUN | 0.323643 | 0.799899 | 0.965298 | 0.001647 | 0.001730 | 0.001641 |
| reverse_view.test | RUN | 0.428762 | 1.337841 | 1.462181 | 0.001728 | 0.001739 | 0.001690 |
| segmented_iterator_range.test | RUN | 0.489896 | 1.575335 | 1.810710 | 0.001730 | 0.001836 | 0.001633 |
| set.test | RUN | 0.314073 | 0.892245 | 1.007095 | 0.001592 | 0.001688 | 0.001747 |
| single_view.test | RUN | 0.294282 | 0.819842 | 0.929570 | 0.001720 | 0.001742 | 0.001319 |
| std_pair.test | RUN | 0.371407 | 1.053778 | 1.188085 | 0.001598 | 0.001588 | 0.001697 |
| boost_array.test | RUN | 0.321070 | 0.726217 | 0.873468 | 0.001651 | 0.001677 | 0.001605 |
| array.test | RUN | 0.304497 | 0.750976 | 0.878012 | 0.001510 | 0.001534 | 0.001489 |
| std_array.test | RUN | 0.305363 | 0.721474 | 0.854612 | 0.001565 | 0.001650 | 0.001555 |
| tuple_comparison.test | RUN | 0.271507 | 0.687252 | 0.802239 | 0.001750 | 0.001759 | 0.001520 |
| tuple_construction.test | RUN | 0.277588 | 0.676812 | 0.811959 | 0.001794 | 0.001801 | 0.001601 |
| tuple_conversion.test | RUN | 0.610624 | 2.090866 | 2.646548 | 0.001585 | 0.001813 | 0.001491 |
| tuple_copy.test | RUN | 0.404724 | 1.214377 | 1.409095 | 0.001671 | 0.001584 | 0.001631 |
| tuple_element.test | RUN | 0.261369 | 0.622556 | 0.753667 | 0.001486 | 0.001709 | 0.001702 |
| tuple_make.test | RUN | 0.278090 | 0.717575 | 0.845780 | 0.001722 | 0.001782 | 0.001695 |
| tuple_misc.test | RUN | 0.356844 | 0.866532 | 1.035093 | 0.001489 | 0.001622 | 0.001554 |
| tuple_mutate.test | RUN | 0.247018 | 0.587362 | 0.751741 | 0.001774 | 0.001738 | 0.001795 |
| tuple_nest.test | RUN | 1.019449 | 4.213852 | 5.010563 | 0.001824 | 0.001612 | 0.001660 |
| tuple_hash.test | RUN | 0.358618 | 1.254857 | 1.061899 | 0.001723 | 0.001658 | 0.001474 |
| tuple_tie.test | RUN | 0.261723 | 0.657133 | 0.790062 | 0.001940 | 0.001735 | 0.001749 |
| tuple_traits__maybe_variadic.test | RUN | 0.278888 | 0.767321 | 0.828404 | 0.001580 | 0.001774 | 0.001589 |
| tuple_traits__no_variadic.test | RUN | 0.318040 | 0.823210 | 0.889717 | 0.001421 | 0.001865 | 0.001704 |
| transform_view.test | RUN | 0.414318 | 1.338083 | 1.459640 | 0.001886 | 0.001712 | 0.001804 |
| identity_view.test | RUN | 0.398234 | 1.205208 | 1.350807 | 0.001720 | 0.001682 | 0.001647 |
| vector_comparison.test | RUN | 0.254718 | 0.665027 | 0.763356 | 0.001481 | 0.001663 | 0.001652 |
| vector_construction.test | RUN | 0.254860 | 0.640001 | 0.739549 | 0.001554 | 0.001503 | 0.001657 |
| vector_conversion.test | RUN | 0.743384 | 2.772357 | 3.473609 | 0.001786 | 0.001690 | 0.001572 |
| vector_copy.test | RUN | 0.385256 | 1.225837 | 1.366608 | 0.001568 | 0.001677 | 0.001719 |
| vector_iterator.test | RUN | 0.248501 | 0.643559 | 0.748569 | 0.001805 | 0.001635 | 0.001705 |
| vector_make.test | RUN | 0.269163 | 0.678938 | 0.801919 | 0.001709 | 0.001774 | 0.001662 |
| vector_misc.test | RUN | 0.328449 | 0.835950 | 0.965120 | 0.001567 | 0.001648 | 0.001584 |
| vector_move.test | RUN | 0.258363 | 0.686390 | 0.757575 | 0.001532 | 0.001822 | 0.001536 |
| vector_mutate.test | RUN | 0.227792 | 0.562238 | 0.716172 | 0.001603 | 0.001490 | 0.001757 |
| vector_n.test | RUN | 0.284966 | 0.705639 | 0.905932 | 0.001611 | 0.001721 | 0.001692 |
| vector_nest.test | RUN | 1.046033 | 4.487060 | 5.100342 | 0.001650 | 0.001544 | 0.001768 |
| vector_hash.test | RUN | 0.337021 | 1.238829 | 1.023089 | 0.001542 | 0.001865 | 0.001821 |
| vector_tie.test | RUN | 0.248955 | 0.601176 | 0.744817 | 0.001634 | 0.001619 | 0.001432 |
| vector_traits__maybe_variadic.test | RUN | 0.265643 | 0.752982 | 0.772801 | 0.001869 | 0.001690 | 0.001738 |
| vector_traits__no_variadic.test | RUN | 0.294924 | 0.756381 | 0.796517 | 0.001725 | 0.001610 | 0.001414 |
| vector_value_at.test | RUN | 0.237664 | 0.579937 | 0.690277 | 0.001601 | 0.001621 | 0.001736 |
| zip_view.test | RUN | 0.478600 | 1.379097 | 1.796164 | 0.001574 | 0.001569 | 0.001386 |
| zip_view2.test | RUN | 0.391391 | 1.063540 | 1.329585 | 0.001525 | 0.001600 | 0.001561 |
| zip_view_ignore.test | RUN | 0.368832 | 0.956419 | 1.187437 | 0.001571 | 0.001428 | 0.001667 |
| repetitive_view.test | RUN | 0.640242 | 1.815192 | 2.276231 | 0.001746 | 0.001615 | 0.001419 |
| deduce_sequence.test | RUN | 0.300687 | 0.753605 | 0.961821 | 0.001750 | 0.001686 | 0.001525 |
| adapt_adt_named.test | RUN | 0.375659 | 1.072466 | 1.156486 | 0.001569 | 0.001831 | 0.001706 |
| adapt_adt_named_empty.test | RUN | 0.314903 | 0.887227 | 0.960168 | 0.001568 | 0.001676 | 0.001771 |
| adapt_adt.test | RUN | 0.417500 | 1.415914 | 1.395174 | 0.001671 | 0.001818 | 0.001719 |
| adapt_adt_empty.test | RUN | 0.316675 | 0.878067 | 0.972118 | 0.001847 | 0.001824 | 0.001720 |
| adapt_assoc_adt_named.test | RUN | 0.410031 | 1.119869 | 1.248193 | 0.001548 | 0.001806 | 0.001728 |
| adapt_assoc_adt_named_empty.test | RUN | 0.325340 | 0.871942 | 0.971636 | 0.001674 | 0.001650 | 0.001717 |
| adapt_assoc_adt.test | RUN | 0.419338 | 1.176348 | 1.317538 | 0.001430 | 0.001781 | 0.001598 |
| adapt_assoc_adt_empty.test | RUN | 0.317110 | 0.885621 | 0.963236 | 0.001609 | 0.001842 | 0.001668 |
| adapt_assoc_struct_named.test | RUN | 0.394717 | 1.094541 | 1.230608 | 0.001517 | 0.001752 | 0.001582 |
| adapt_assoc_struct_named_empty.test | RUN | 0.309548 | 0.852079 | 0.953479 | 0.001661 | 0.001762 | 0.001794 |
| adapt_assoc_struct.test | RUN | 0.357228 | 1.047215 | 1.157381 | 0.001536 | 0.001658 | 0.001685 |
| adapt_assoc_struct_empty.test | RUN | 0.312153 | 0.851832 | 0.965343 | 0.001529 | 0.001646 | 0.001837 |
| adapt_assoc_tpl_adt.test | RUN | 0.428916 | 1.217516 | 1.352922 | 0.001568 | 0.001862 | 0.001741 |
| adapt_assoc_tpl_adt_empty.test | RUN | 0.316768 | 0.892996 | 0.961297 | 0.001759 | 0.001840 | 0.001824 |
| adapt_assoc_tpl_struct.test | RUN | 0.353119 | 1.001610 | 1.117321 | 0.001497 | 0.001472 | 0.001676 |
| adapt_assoc_tpl_struct_empty.test | RUN | 0.314069 | 0.870314 | 0.964205 | 0.001890 | 0.001678 | 0.001533 |
| adapt_struct_named.test | RUN | 0.370190 | 1.075410 | 1.124665 | 0.001702 | 0.001651 | 0.001632 |
| adapt_struct_named_empty.test | RUN | 0.319805 | 0.884081 | 0.956349 | 0.001715 | 0.001494 | 0.001675 |
| adapt_struct.test | RUN | 0.389395 | 1.203015 | 1.307885 | 0.001470 | 0.001766 | 0.001710 |
| adapt_struct_empty.test | RUN | 0.315417 | 0.866702 | 0.957649 | 0.001940 | 0.001733 | 0.001675 |
| adapt_tpl_adt.test | RUN | 0.402765 | 1.377219 | 1.363903 | 0.001695 | 0.001608 | 0.001463 |
| adapt_tpl_adt_empty.test | RUN | 0.322751 | 0.866475 | 0.964245 | 0.001807 | 0.001794 | 0.001696 |
| adapt_tpl_struct.test | RUN | 0.331330 | 0.945980 | 1.051180 | 0.001661 | 0.001724 | 0.001584 |
| adapt_tpl_struct_empty.test | RUN | 0.309548 | 0.892434 | 0.972978 | 0.001646 | 0.001684 | 0.001587 |
| adt_attribute_proxy.test | RUN | 0.351665 | 0.843818 | 1.009507 | 0.001650 | 0.001932 | 0.001733 |
| define_struct.test | RUN | 0.425716 | 1.200248 | 1.350278 | 0.001765 | 0.001914 | 0.001744 |
| define_struct_empty.test | RUN | 0.377543 | 0.980096 | 1.109570 | 0.001605 | 0.001639 | 0.001728 |
| define_struct_move.test | RUN | 0.240012 | 0.551163 | 0.648938 | 0.001552 | 0.001753 | 0.001560 |
| define_struct_inline.test | RUN | 0.452235 | 1.425012 | 1.540348 | 0.001694 | 0.001769 | 0.001744 |
| define_struct_inline_empty.test | RUN | 0.370214 | 0.976529 | 1.111806 | 0.001625 | 0.001696 | 0.001720 |
| define_struct_inline_move.test | RUN | 0.240895 | 0.556002 | 0.665564 | 0.001628 | 0.001560 | 0.001606 |
| define_assoc_struct.test | RUN | 0.410844 | 1.139087 | 1.272849 | 0.001503 | 0.001721 | 0.001693 |
| define_assoc_struct_empty.test | RUN | 0.371233 | 0.979239 | 1.123492 | 0.001574 | 0.001693 | 0.001776 |
| define_assoc_struct_move.test | RUN | 0.232760 | 0.546890 | 0.665477 | 0.001819 | 0.001698 | 0.001636 |
| define_tpl_struct.test | RUN | 0.409416 | 1.139357 | 1.291966 | 0.001749 | 0.001754 | 0.001449 |
| define_tpl_struct_empty.test | RUN | 0.376022 | 0.994672 | 1.107903 | 0.001866 | 0.001704 | 0.001713 |
| define_tpl_struct_move.test | RUN | 0.238881 | 0.552251 | 0.663559 | 0.001603 | 0.001544 | 0.001570 |
| define_tpl_struct_inline.test | RUN | 0.441556 | 1.340164 | 1.429743 | 0.001683 | 0.001519 | 0.001694 |
| define_tpl_struct_inline_empty.test | RUN | 0.370880 | 1.010488 | 1.131637 | 0.001906 | 0.001714 | 0.001727 |
| define_tpl_struct_inline_move.test | RUN | 0.241283 | 0.540119 | 0.672437 | 0.001546 | 0.001724 | 0.001718 |
| define_assoc_tpl_struct.test | RUN | 0.427556 | 1.147227 | 1.296384 | 0.001772 | 0.001780 | 0.001636 |
| define_assoc_tpl_struct_empty.test | RUN | 0.380785 | 0.984300 | 1.124317 | 0.001543 | 0.001660 | 0.001507 |
| define_assoc_tpl_struct_move.test | RUN | 0.240463 | 0.555912 | 0.657271 | 0.001578 | 0.001587 | 0.001708 |
| std_tuple.test | RUN | 0.245991 | 0.625299 | 0.731190 | 0.001600 | 0.001546 | 0.001629 |
| std_tuple_iterator.test | RUN | 0.251046 | 0.653635 | 0.746087 | 0.001851 | 0.001518 | 0.001772 |
| ref_vector.test | RUN | 0.279048 | 0.669477 | 0.785891 | 0.001469 | 0.001714 | 0.001714 |
| flatten_view.test | RUN | 0.295468 | 0.827972 | 0.936505 | 0.001522 | 0.001597 | 0.001341 |
| github-159.test | COMPILE | 0.136508 | 0.301875 | 0.351173 | — | — | — |
| github-176.test | RUN | 0.274839 | 0.728357 | 0.798993 | 0.001722 | 0.001645 | 0.001641 |
| size.test | COMPILE | 0.232513 | 0.510896 | 0.633888 | — | — | — |
| fused.test | RUN | 0.329851 | 0.773726 | 0.925875 | 0.001472 | 0.001731 | 0.001664 |
| fused_function_object.test | RUN | 0.243871 | 0.609348 | 0.705631 | 0.001760 | 0.001564 | 0.001688 |
| fused_procedure.test | RUN | 0.315626 | 0.739166 | 0.885872 | 0.001436 | 0.001622 | 0.001726 |
| unfused.test | RUN | 0.255128 | 0.617792 | 0.732849 | 0.001644 | 0.001686 | 0.001594 |
| unfused_typed.test | RUN | 0.255436 | 0.652194 | 0.759373 | 0.001692 | 0.001790 | 0.001732 |
| make_fused.test | RUN | 0.332995 | 0.767619 | 0.931547 | 0.001545 | 0.001566 | 0.001271 |
| make_fused_function_object.test | RUN | 0.249892 | 0.604924 | 0.708806 | 0.001528 | 0.001528 | 0.001617 |
| make_fused_procedure.test | RUN | 0.321040 | 0.756781 | 0.893655 | 0.001554 | 0.001660 | 0.001636 |
| make_unfused.test | RUN | 0.249243 | 0.588873 | 0.718292 | 0.001616 | 0.001790 | 0.001682 |
| invoke.test | RUN | 0.626847 | 2.158198 | 2.474658 | 0.001618 | 0.001684 | 0.001624 |
| invoke_function_object.test | RUN | 0.295182 | 0.762218 | 0.919788 | 0.001529 | 0.001674 | 0.001695 |
| invoke_procedure.test | RUN | 0.504580 | 1.592035 | 1.876521 | 0.001516 | 0.001660 | 0.001428 |
| swap.test | RUN | 0.373886 | 0.996266 | 1.147010 | 0.001626 | 0.001693 | 0.001708 |
| is_sequence.test | COMPILE | 0.063380 | 0.139778 | 0.146492 | — | — | — |
| is_view.test | COMPILE | 0.064062 | 0.139846 | 0.145252 | — | — | — |
| pair_deque.test | COMPILE | 0.140816 | 0.317549 | 0.346746 | — | — | — |
| pair_list.test | COMPILE | 0.135736 | 0.306437 | 0.343095 | — | — | — |
| pair_map.test | COMPILE | 0.140268 | 0.315169 | 0.357199 | — | — | — |
| pair_set.test | COMPILE | 0.140417 | 0.319573 | 0.360388 | — | — | — |
| pair_vector.test | COMPILE | 0.140471 | 0.313332 | 0.343040 | — | — | — |
| pair_nest.test | COMPILE | 0.056187 | 0.124848 | 0.137586 | — | — | — |
| index_sequence.test | COMPILE | 0.046907 | 0.089878 | 0.101013 | — | — | — |
| and.test | COMPILE | 0.035688 | 0.067627 | 0.073083 | — | — | — |
| tag_of.test | COMPILE | 0.062787 | 0.135677 | 0.138865 | — | — | — |
| unused.test | COMPILE | 0.033652 | 0.085217 | 0.084681 | — | — | — |
| tag_of_fallback.test | COMPILE | 0.060624 | 0.136009 | 0.118644 | — | — | — |
| make_pair_r-value.test | COMPILE | 0.054952 | 0.125769 | 0.098981 | — | — | — |
| quick.test | RUN | 0.176159 | 0.396330 | 0.458593 | 0.000569 | 0.001132 | 0.001126 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.994× | 0.999×, 0.990× | 0.994× |
| clang | 1.002× | 1.003×, 1.001× | 1.007× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44667760294).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| adapt_adt.test | 10 | 0.001086s | 0.001092s | 0.001084s | byte equality observed |
| adapt_adt_empty.test | 10 | 0.001084s | 0.001082s | 0.001099s | byte equality observed |
| adapt_adt_named.test | 10 | 0.001073s | 0.001107s | 0.001041s | byte equality observed |
| adapt_adt_named_empty.test | 10 | 0.001064s | 0.001031s | 0.001053s | byte equality observed |
| adapt_assoc_adt.test | 10 | 0.001073s | 0.001074s | 0.001073s | byte equality observed |
| adapt_assoc_adt_empty.test | 10 | 0.001059s | 0.001062s | 0.001062s | byte equality observed |
| adapt_assoc_adt_named.test | 10 | 0.001085s | 0.001063s | 0.001067s | byte equality observed |
| adapt_assoc_adt_named_empty.test | 10 | 0.001059s | 0.001046s | 0.001051s | byte equality observed |
| adapt_assoc_struct.test | 10 | 0.001064s | 0.001072s | 0.001080s | byte equality observed |
| adapt_assoc_struct_empty.test | 10 | 0.001066s | 0.001040s | 0.001056s | byte equality observed |
| adapt_assoc_struct_named.test | 10 | 0.001052s | 0.001080s | 0.001059s | byte equality observed |
| adapt_assoc_struct_named_empty.test | 10 | 0.001067s | 0.001055s | 0.001069s | byte equality observed |
| adapt_assoc_tpl_adt.test | 10 | 0.001075s | 0.001040s | 0.001074s | byte equality observed |
| adapt_assoc_tpl_adt_empty.test | 10 | 0.001080s | 0.001059s | 0.001043s | byte equality observed |
| adapt_assoc_tpl_struct.test | 10 | 0.001083s | 0.001077s | 0.001073s | byte equality observed |
| adapt_assoc_tpl_struct_empty.test | 10 | 0.001059s | 0.001050s | 0.001076s | byte equality observed |
| adapt_struct.test | 10 | 0.001086s | 0.001052s | 0.001074s | byte equality observed |
| adapt_struct_empty.test | 10 | 0.001066s | 0.001039s | 0.001100s | byte equality observed |
| adapt_struct_named.test | 10 | 0.001079s | 0.001030s | 0.001088s | byte equality observed |
| adapt_struct_named_empty.test | 10 | 0.001070s | 0.001036s | 0.001045s | byte equality observed |
| adapt_tpl_adt.test | 10 | 0.001084s | 0.001059s | 0.001083s | byte equality observed |
| adapt_tpl_adt_empty.test | 10 | 0.001089s | 0.001060s | 0.001058s | byte equality observed |
| adapt_tpl_struct.test | 10 | 0.001090s | 0.001090s | 0.001082s | byte equality observed |
| adapt_tpl_struct_empty.test | 10 | 0.001074s | 0.001085s | 0.001059s | byte equality observed |
| adt_attribute_proxy.test | 10 | 0.001042s | 0.001051s | 0.001072s | byte equality observed |
| all.test | 10 | 0.001076s | 0.001091s | 0.001068s | byte equality observed |
| any.test | 8 | 0.001049s | 0.001043s | 0.001084s | byte equality observed |
| array.test | 10 | 0.001061s | 0.001050s | 0.001078s | byte equality observed |
| as_deque.test | 10 | 0.001070s | 0.001046s | 0.001074s | byte equality observed |
| as_list.test | 10 | 0.001093s | 0.001119s | 0.001103s | byte equality observed |
| as_map.test | 10 | 0.001083s | 0.001081s | 0.001070s | byte equality observed |
| as_map_assoc.test | 10 | 0.001091s | 0.001087s | 0.001056s | byte equality observed |
| as_set.test | 10 | 0.001085s | 0.001076s | 0.001053s | byte equality observed |
| as_vector.test | 10 | 0.001107s | 0.001125s | 0.001075s | byte equality observed |
| back_extended_deque.test | 10 | 0.001042s | 0.001042s | 0.001071s | byte equality observed |
| boost_array.test | 10 | 0.001071s | 0.001056s | 0.001066s | byte equality observed |
| boost_tuple.test | 10 | 0.001103s | 0.001084s | 0.001109s | byte equality observed |
| boost_tuple_iterator.test | 10 | 0.001041s | 0.001042s | 0.001066s | byte equality observed |
| clear.test | 10 | 0.001086s | 0.001060s | 0.001072s | byte equality observed |
| cons.test | 10 | 0.001100s | 0.001093s | 0.001070s | byte equality observed |
| convert_boost_tuple.test | 10 | 0.001083s | 0.001030s | 0.001083s | byte equality observed |
| convert_deque.test | 10 | 0.001060s | 0.001017s | 0.001076s | byte equality observed |
| convert_list.test | 10 | 0.001064s | 0.001066s | 0.001055s | byte equality observed |
| convert_std_pair.test | 10 | 0.001090s | 0.001074s | 0.001047s | byte equality observed |
| convert_std_tuple.test | 10 | 0.001067s | 0.001091s | 0.001034s | byte equality observed |
| convert_vector.test | 10 | 0.001061s | 0.001053s | 0.001094s | byte equality observed |
| copy.test | 10 | 0.001095s | 0.001080s | 0.001047s | byte equality observed |
| count.test | 10 | 0.001080s | 0.001062s | 0.001058s | byte equality observed |
| count_if.test | 10 | 0.001042s | 0.001092s | 0.001071s | byte equality observed |
| deduce_sequence.test | 10 | 0.001070s | 0.001026s | 0.001068s | byte equality observed |
| define_assoc_struct.test | 10 | 0.001080s | 0.001056s | 0.001058s | byte equality observed |
| define_assoc_struct_empty.test | 10 | 0.001093s | 0.001073s | 0.001079s | byte equality observed |
| define_assoc_struct_move.test | 10 | 0.001062s | 0.001070s | 0.001044s | byte equality observed |
| define_assoc_tpl_struct.test | 10 | 0.001100s | 0.001075s | 0.001093s | byte equality observed |
| define_assoc_tpl_struct_empty.test | 10 | 0.001089s | 0.001046s | 0.001091s | byte equality observed |
| define_assoc_tpl_struct_move.test | 10 | 0.001048s | 0.001054s | 0.001049s | byte equality observed |
| define_struct.test | 10 | 0.001078s | 0.001064s | 0.001091s | byte equality observed |
| define_struct_empty.test | 10 | 0.001066s | 0.001041s | 0.001081s | byte equality observed |
| define_struct_inline.test | 10 | 0.001083s | 0.001072s | 0.001071s | byte equality observed |
| define_struct_inline_empty.test | 10 | 0.001076s | 0.001044s | 0.001066s | byte equality observed |
| define_struct_inline_move.test | 10 | 0.001035s | 0.001087s | 0.001035s | byte equality observed |
| define_struct_move.test | 10 | 0.001038s | 0.001057s | 0.001056s | byte equality observed |
| define_tpl_struct.test | 10 | 0.001081s | 0.001048s | 0.001078s | byte equality observed |
| define_tpl_struct_empty.test | 9 | 0.001074s | 0.001035s | 0.001083s | byte equality observed |
| define_tpl_struct_inline.test | 10 | 0.001082s | 0.001049s | 0.001047s | byte equality observed |
| define_tpl_struct_inline_empty.test | 10 | 0.001064s | 0.001064s | 0.001074s | byte equality observed |
| define_tpl_struct_inline_move.test | 10 | 0.001058s | 0.001038s | 0.001048s | byte equality observed |
| define_tpl_struct_move.test | 10 | 0.001065s | 0.001010s | 0.001033s | byte equality observed |
| deque_comparison.test | 10 | 0.001058s | 0.001038s | 0.001060s | byte equality observed |
| deque_construction.test | 10 | 0.001073s | 0.001027s | 0.001049s | byte equality observed |
| deque_copy.test | 10 | 0.001064s | 0.001057s | 0.001064s | byte equality observed |
| deque_hash.test | 10 | 0.001068s | 0.001060s | 0.001040s | byte equality observed |
| deque_iterator.test | 10 | 0.001077s | 0.001048s | 0.001058s | byte equality observed |
| deque_make.test | 10 | 0.001074s | 0.001061s | 0.001086s | byte equality observed |
| deque_misc.test | 10 | 0.001068s | 0.001060s | 0.001049s | byte equality observed |
| deque_move.test | 10 | 0.001074s | 0.001090s | 0.001080s | byte equality observed |
| deque_mutate.test | 10 | 0.001043s | 0.001037s | 0.001036s | byte equality observed |
| deque_nest.test | 10 | 0.001066s | 0.001007s | 0.001071s | byte equality observed |
| deque_tie.test | 10 | 0.001050s | 0.001069s | 0.001030s | byte equality observed |
| deque_value_at.test | 10 | 0.001058s | 0.001043s | 0.001041s | byte equality observed |
| erase.test | 10 | 0.001089s | 0.001085s | 0.001071s | byte equality observed |
| erase_key.test | 10 | 0.001088s | 0.001082s | 0.001095s | byte equality observed |
| filter.test | 10 | 0.001094s | 0.001040s | 0.001074s | byte equality observed |
| filter_if.test | 10 | 0.001067s | 0.001062s | 0.001105s | byte equality observed |
| filter_view.test | 10 | 0.001099s | 0.001057s | 0.001061s | byte equality observed |
| find.test | 10 | 0.001057s | 0.001073s | 0.001090s | byte equality observed |
| find_if.test | 10 | 0.001084s | 0.001067s | 0.001069s | byte equality observed |
| flatten.test | 10 | 0.001070s | 0.001061s | 0.001074s | byte equality observed |
| flatten_view.test | 10 | 0.001064s | 0.001053s | 0.001052s | byte equality observed |
| fold.test | 10 | 0.001073s | 0.001068s | 0.001077s | byte equality observed |
| for_each.test | 10 | 0.001092s | 0.001078s | 0.001100s | byte equality observed |
| front_extended_deque.test | 10 | 0.001046s | 0.001018s | 0.001050s | byte equality observed |
| fused.test | 10 | 0.001077s | 0.001064s | 0.001107s | byte equality observed |
| fused_function_object.test | 10 | 0.001072s | 0.001071s | 0.001078s | byte equality observed |
| fused_procedure.test | 10 | 0.001034s | 0.001064s | 0.001055s | byte equality observed |
| github-176.test | 10 | 0.001091s | 0.001049s | 0.001057s | byte equality observed |
| hash.test | 10 | 0.001056s | 0.001036s | 0.001046s | byte equality observed |
| identity_view.test | 10 | 0.001089s | 0.001067s | 0.001096s | byte equality observed |
| insert.test | 10 | 0.001075s | 0.001083s | 0.001070s | byte equality observed |
| insert_range.test | 10 | 0.001081s | 0.001122s | 0.001089s | byte equality observed |
| invoke.test | 10 | 0.001058s | 0.001083s | 0.001031s | byte equality observed |
| invoke_function_object.test | 10 | 0.001066s | 0.001043s | 0.001064s | byte equality observed |
| invoke_procedure.test | 10 | 0.001049s | 0.001033s | 0.001095s | byte equality observed |
| io.test | 9 | 0.001249s | 0.001249s | 0.001272s | byte equality observed |
| iter_fold.test | 10 | 0.001084s | 0.001063s | 0.001052s | byte equality observed |
| iterator_range.test | 9 | 0.001070s | 0.001094s | 0.001113s | byte equality observed |
| join.test | 10 | 0.001054s | 0.001031s | 0.001045s | byte equality observed |
| joint_view.test | 10 | 0.001139s | 0.001122s | 0.001084s | byte equality observed |
| list_comparison.test | 10 | 0.001071s | 0.001022s | 0.001063s | byte equality observed |
| list_construction.test | 10 | 0.001063s | 0.001039s | 0.001020s | byte equality observed |
| list_copy.test | 10 | 0.001096s | 0.001039s | 0.001044s | byte equality observed |
| list_hash.test | 10 | 0.001063s | 0.001045s | 0.001031s | byte equality observed |
| list_iterator.test | 10 | 0.001044s | 0.001048s | 0.001054s | byte equality observed |
| list_make.test | 10 | 0.001054s | 0.001051s | 0.001042s | byte equality observed |
| list_misc.test | 10 | 0.001069s | 0.001030s | 0.001077s | byte equality observed |
| list_mutate.test | 10 | 0.001073s | 0.001066s | 0.001041s | byte equality observed |
| list_nest.test | 10 | 0.001054s | 0.001048s | 0.001075s | byte equality observed |
| list_tie.test | 10 | 0.001035s | 0.001023s | 0.001062s | byte equality observed |
| list_value_at.test | 10 | 0.001041s | 0.001027s | 0.001059s | byte equality observed |
| make_fused.test | 10 | 0.001067s | 0.001040s | 0.001048s | byte equality observed |
| make_fused_function_object.test | 10 | 0.001059s | 0.001052s | 0.001035s | byte equality observed |
| make_fused_procedure.test | 10 | 0.001032s | 0.001043s | 0.001055s | byte equality observed |
| make_list.test | 10 | 0.001057s | 0.001078s | 0.001086s | byte equality observed |
| make_unfused.test | 8 | 0.001061s | 0.001071s | 0.001081s | byte equality observed |
| make_vector.test | 10 | 0.001071s | 0.001050s | 0.001075s | byte equality observed |
| map.test | 10 | 0.001086s | 0.001074s | 0.001108s | byte equality observed |
| map_comparison.test | 10 | 0.001041s | 0.001060s | 0.001045s | byte equality observed |
| map_construction.test | 10 | 0.001049s | 0.001044s | 0.001090s | byte equality observed |
| map_copy.test | 10 | 0.001090s | 0.001057s | 0.001035s | byte equality observed |
| map_misc.test | 10 | 0.001059s | 0.001042s | 0.001055s | byte equality observed |
| map_move.test | 10 | 0.001072s | 0.001084s | 0.001074s | byte equality observed |
| map_mutate.test | 10 | 0.001061s | 0.001058s | 0.001083s | byte equality observed |
| map_tie.test | 10 | 0.001037s | 0.001044s | 0.001058s | byte equality observed |
| move.test | 10 | 0.001059s | 0.001037s | 0.001073s | byte equality observed |
| nil.test | 10 | 0.001034s | 0.001039s | 0.001079s | byte equality observed |
| none.test | 10 | 0.001048s | 0.001047s | 0.001062s | byte equality observed |
| nview.test | 10 | 0.001074s | 0.001084s | 0.001058s | byte equality observed |
| pop_back.test | 10 | 0.001099s | 0.001124s | 0.001083s | byte equality observed |
| pop_front.test | 10 | 0.001077s | 0.001106s | 0.001104s | byte equality observed |
| push_back.test | 10 | 0.001083s | 0.001075s | 0.001090s | byte equality observed |
| push_front.test | 10 | 0.001090s | 0.001095s | 0.001065s | byte equality observed |
| quick.test | 10 | 0.000475s | 0.001003s | 0.001037s | byte equality observed |
| ref_vector.test | 10 | 0.001073s | 0.001072s | 0.001052s | byte equality observed |
| remove.test | 10 | 0.001085s | 0.001086s | 0.001089s | byte equality observed |
| remove_if.test | 10 | 0.001095s | 0.001098s | 0.001097s | byte equality observed |
| repetitive_view.test | 10 | 0.001059s | 0.001050s | 0.001076s | byte equality observed |
| replace.test | 10 | 0.001089s | 0.001115s | 0.001083s | byte equality observed |
| replace_if.test | 10 | 0.001110s | 0.001070s | 0.001119s | byte equality observed |
| reverse.test | 10 | 0.001093s | 0.001116s | 0.001109s | byte equality observed |
| reverse_fold.test | 10 | 0.001067s | 0.001052s | 0.001085s | byte equality observed |
| reverse_iter_fold.test | 10 | 0.001048s | 0.001057s | 0.001058s | byte equality observed |
| reverse_view.test | 10 | 0.001077s | 0.001067s | 0.001062s | byte equality observed |
| segmented_find.test | 10 | 0.001090s | 0.001064s | 0.001029s | byte equality observed |
| segmented_find_if.test | 10 | 0.001072s | 0.001053s | 0.001064s | byte equality observed |
| segmented_fold.test | 10 | 0.001064s | 0.001133s | 0.001082s | byte equality observed |
| segmented_for_each.test | 10 | 0.001101s | 0.001083s | 0.001109s | byte equality observed |
| segmented_iterator_range.test | 10 | 0.001104s | 0.001097s | 0.001104s | byte equality observed |
| set.test | 10 | 0.001107s | 0.001072s | 0.001057s | byte equality observed |
| single_view.test | 10 | 0.001102s | 0.001093s | 0.001099s | byte equality observed |
| std_array.test | 10 | 0.001065s | 0.001042s | 0.001049s | byte equality observed |
| std_pair.test | 10 | 0.001093s | 0.001105s | 0.001092s | byte equality observed |
| std_tuple.test | 10 | 0.001050s | 0.001071s | 0.001045s | byte equality observed |
| std_tuple_iterator.test | 10 | 0.001059s | 0.001039s | 0.001045s | byte equality observed |
| swap.test | 10 | 0.001082s | 0.001118s | 0.001037s | byte equality observed |
| transform.test | 10 | 0.001071s | 0.001094s | 0.001101s | byte equality observed |
| transform_view.test | 10 | 0.001104s | 0.001084s | 0.001082s | byte equality observed |
| tuple_comparison.test | 10 | 0.001052s | 0.001082s | 0.001073s | byte equality observed |
| tuple_construction.test | 10 | 0.001058s | 0.001043s | 0.001093s | byte equality observed |
| tuple_conversion.test | 10 | 0.001043s | 0.001053s | 0.001106s | byte equality observed |
| tuple_copy.test | 10 | 0.001054s | 0.001042s | 0.001042s | byte equality observed |
| tuple_element.test | 10 | 0.001059s | 0.001103s | 0.001043s | byte equality observed |
| tuple_hash.test | 10 | 0.001081s | 0.001082s | 0.001142s | byte equality observed |
| tuple_make.test | 10 | 0.001068s | 0.001072s | 0.001081s | byte equality observed |
| tuple_misc.test | 10 | 0.001083s | 0.001047s | 0.001077s | byte equality observed |
| tuple_mutate.test | 10 | 0.001070s | 0.001029s | 0.001049s | byte equality observed |
| tuple_nest.test | 10 | 0.001054s | 0.001068s | 0.001048s | byte equality observed |
| tuple_tie.test | 10 | 0.001068s | 0.001053s | 0.001070s | byte equality observed |
| tuple_traits__maybe_variadic.test | 10 | 0.001065s | 0.001064s | 0.001077s | byte equality observed |
| tuple_traits__no_variadic.test | 10 | 0.001070s | 0.001050s | 0.001065s | byte equality observed |
| unfused.test | 10 | 0.001064s | 0.001070s | 0.001100s | byte equality observed |
| unfused_typed.test | 10 | 0.001046s | 0.001045s | 0.001067s | byte equality observed |
| vector_comparison.test | 10 | 0.001058s | 0.001033s | 0.001065s | byte equality observed |
| vector_construction.test | 8 | 0.001047s | 0.001048s | 0.001041s | byte equality observed |
| vector_conversion.test | 10 | 0.001075s | 0.001095s | 0.001073s | byte equality observed |
| vector_copy.test | 10 | 0.001051s | 0.001038s | 0.001073s | byte equality observed |
| vector_hash.test | 10 | 0.001071s | 0.001068s | 0.001041s | byte equality observed |
| vector_iterator.test | 9 | 0.001044s | 0.001058s | 0.001086s | byte equality observed |
| vector_make.test | 10 | 0.001082s | 0.001057s | 0.001064s | byte equality observed |
| vector_misc.test | 10 | 0.001081s | 0.001091s | 0.001033s | byte equality observed |
| vector_move.test | 10 | 0.001084s | 0.001067s | 0.001086s | byte equality observed |
| vector_mutate.test | 10 | 0.001055s | 0.001048s | 0.001052s | byte equality observed |
| vector_n.test | 10 | 0.001075s | 0.001088s | 0.001081s | byte equality observed |
| vector_nest.test | 10 | 0.001065s | 0.001040s | 0.001095s | byte equality observed |
| vector_tie.test | 10 | 0.001045s | 0.001049s | 0.001082s | byte equality observed |
| vector_traits__maybe_variadic.test | 10 | 0.001062s | 0.001039s | 0.001070s | byte equality observed |
| vector_traits__no_variadic.test | 10 | 0.001043s | 0.001023s | 0.001081s | byte equality observed |
| vector_value_at.test | 10 | 0.001042s | 0.001046s | 0.001136s | byte equality observed |
| zip.test | 10 | 0.001083s | 0.001072s | 0.001070s | byte equality observed |
| zip2.test | 9 | 0.001099s | 0.001034s | 0.001080s | byte equality observed |
| zip_ignore.test | 9 | 0.001071s | 0.001043s | 0.001068s | byte equality observed |
| zip_view.test | 10 | 0.001033s | 0.001127s | 0.001088s | byte equality observed |
| zip_view2.test | 10 | 0.001072s | 0.001070s | 0.001047s | byte equality observed |
| zip_view_ignore.test | 10 | 0.001040s | 0.001014s | 0.001075s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44667760294).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
