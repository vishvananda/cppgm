# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.116097 | 0.309040 | 0.486625 | 0.001848 | 0.001679 | 0.001828 |
| type_traits_test.test | RUN | 0.162773 | 0.335397 | 0.506461 | 0.000528 | 0.000589 | 0.001513 |
| type_identity_test.test | RUN | 0.312679 | 1.162515 | 2.890512 | 0.001729 | 0.001752 | 0.001597 |
| tricky_rvalue_test.test | RUN | 0.108499 | 0.246521 | 0.391001 | 0.001589 | 0.001794 | 0.001384 |
| tricky_partial_spec_test.test | RUN | 0.130682 | 0.376663 | 0.637886 | 0.001484 | 0.001585 | 0.001375 |
| tricky_is_enum_test.test | RUN | 0.104109 | 0.235893 | 0.359285 | 0.001618 | 0.001830 | 0.001720 |
| tricky_incomplete_type_test.test | RUN | 0.171202 | 0.372195 | 0.598851 | 0.001544 | 0.001476 | 0.001639 |
| tricky_function_type_test.test | RUN | 0.135541 | 0.383773 | 0.689670 | 0.001676 | 0.001344 | 0.001448 |
| tricky_add_pointer_test.test | RUN | 0.209516 | 0.691914 | 1.647351 | 0.001715 | 0.001802 | 0.001650 |
| tricky_abstract_type_test.test | RUN | 0.107869 | 0.253794 | 0.376095 | 0.001736 | 0.001764 | 0.001588 |
| remove_volatile_test.test | RUN | 0.282427 | 0.986602 | 2.577576 | 0.001776 | 0.001788 | 0.001589 |
| remove_reference_test.test | RUN | 0.299138 | 1.065023 | 2.707864 | 0.001758 | 0.001752 | 0.001677 |
| remove_pointer_test.test | RUN | 0.306321 | 1.080557 | 2.864532 | 0.001754 | 0.001627 | 0.001480 |
| remove_extent_test.test | RUN | 0.299082 | 1.054610 | 2.706283 | 0.001722 | 0.001702 | 0.001616 |
| remove_cv_test.test | RUN | 0.284355 | 1.049860 | 2.773886 | 0.001729 | 0.001731 | 0.001682 |
| remove_cv_ref_test.test | RUN | 0.610712 | 2.498717 | 6.702161 | 0.001670 | 0.001547 | 0.001658 |
| remove_const_test.test | RUN | 0.287544 | 0.975796 | 2.603716 | 0.001756 | 0.001763 | 0.001634 |
| remove_bounds_test.test | RUN | 0.294514 | 1.051885 | 2.729265 | 0.001488 | 0.001710 | 0.001647 |
| remove_all_extents_test.test | RUN | 0.293505 | 1.020994 | 2.566862 | 0.001532 | 0.001698 | 0.001452 |
| rank_test.test | RUN | 0.111873 | 0.248422 | 0.400375 | 0.001692 | 0.001454 | 0.001649 |
| promote_mpl_test.test | RUN | 0.095160 | 0.224614 | 0.278121 | 0.000584 | 0.000611 | 0.001665 |
| promote_enum_test.test | RUN | 0.022975 | 0.055367 | 0.070533 | 0.000743 | 0.000811 | 0.001562 |
| promote_enum_msvc_bug_test.test | RUN | 0.019522 | 0.048886 | 0.058045 | 0.000603 | 0.000714 | 0.001637 |
| promote_basic_test.test | RUN | 0.026252 | 0.066670 | 0.073336 | 0.000716 | 0.000653 | 0.001403 |
| negation_test.test | RUN | 0.104142 | 0.235167 | 0.362016 | 0.001521 | 0.001616 | 0.001578 |
| mpl_interop_test3.test | RUN | 0.087389 | 0.207183 | 0.254921 | 0.000583 | 0.000544 | 0.001339 |
| mpl_interop_test2.test | RUN | 0.032244 | 0.066811 | 0.062622 | 0.000599 | 0.000660 | 0.001683 |
| mpl_interop_test1.test | RUN | 0.017380 | 0.045567 | 0.052334 | 0.000572 | 0.000670 | 0.001557 |
| make_void_test.test | RUN | 0.109341 | 0.255445 | 0.397378 | 0.001712 | 0.001588 | 0.001661 |
| make_unsigned_test.test | RUN | 0.128409 | 0.335833 | 0.536866 | 0.001453 | 0.001535 | 0.001538 |
| make_signed_test.test | RUN | 0.127927 | 0.338929 | 0.572867 | 0.001663 | 0.001456 | 0.001623 |
| is_volatile_test.test | RUN | 0.114562 | 0.290801 | 0.416073 | 0.001520 | 0.001458 | 0.001350 |
| is_void_test.test | RUN | 0.111662 | 0.264451 | 0.390951 | 0.001563 | 0.001717 | 0.001706 |
| is_virtual_base_of_test.test | RUN | 0.128593 | 0.334937 | 0.576692 | 0.001337 | 0.001658 | 0.001467 |
| is_unsigned_test.test | RUN | 0.114382 | 0.283161 | 0.415258 | 0.001606 | 0.001465 | 0.001610 |
| is_unscoped_enum_test.test | RUN | 0.110876 | 0.260915 | 0.358711 | 0.001366 | 0.001563 | 0.001658 |
| is_union_test.test | RUN | 0.119937 | 0.310880 | 0.520870 | 0.001652 | 0.001706 | 0.001638 |
| is_unbounded_array_test.test | RUN | 0.109335 | 0.268816 | 0.406901 | 0.001659 | 0.001729 | 0.001625 |
| is_trivially_copyable_test.test | RUN | 0.175436 | 0.568341 | 1.059381 | 0.001422 | 0.001610 | 0.001464 |
| is_swappable_test.test | RUN | 0.146538 | 0.416885 | 0.788097 | 0.001492 | 0.001750 | 0.001587 |
| is_stateless_test.test | RUN | 0.167505 | 0.480264 | 0.894993 | 0.001758 | 0.001561 | 0.001650 |
| is_signed_test.test | RUN | 0.115221 | 0.269159 | 0.447628 | 0.001408 | 0.001551 | 0.001502 |
| is_scoped_enum_test.test | RUN | 0.112892 | 0.248645 | 0.364610 | 0.001603 | 0.001561 | 0.001703 |
| is_scalar_test.test | RUN | 0.139902 | 0.454596 | 0.792894 | 0.001521 | 0.001499 | 0.001419 |
| is_same_test.test | RUN | 0.108941 | 0.276092 | 0.395896 | 0.001734 | 0.001676 | 0.001660 |
| is_rvalue_reference_test.test | RUN | 0.117387 | 0.298782 | 0.450193 | 0.001427 | 0.001626 | 0.001680 |
| is_reference_test.test | RUN | 0.114396 | 0.314219 | 0.497893 | 0.001617 | 0.001824 | 0.001538 |
| is_polymorphic_test.test | RUN | 0.117617 | 0.310063 | 0.498507 | 0.001605 | 0.001578 | 0.001666 |
| is_pointer_test.test | RUN | 0.116136 | 0.307722 | 0.476263 | 0.001674 | 0.001642 | 0.001672 |
| is_pod_test.test | RUN | 0.151750 | 0.492629 | 0.967864 | 0.001536 | 0.001625 | 0.001660 |
| is_object_test.test | RUN | 0.109256 | 0.254448 | 0.394357 | 0.001548 | 0.001584 | 0.001660 |
| is_nothrow_swappable_test.test | RUN | 0.160622 | 0.437798 | 0.829124 | 0.001740 | 0.001551 | 0.001653 |
| is_nothrow_move_constructible_test.test | RUN | 0.153215 | 0.455274 | 0.889982 | 0.001502 | 0.001410 | 0.001606 |
| is_nothrow_move_assignable_test.test | RUN | 0.153749 | 0.492690 | 0.900029 | 0.001468 | 0.001626 | 0.001495 |
| is_noncopyable_test.test | RUN | 0.110225 | 0.274778 | 0.397546 | 0.001492 | 0.001563 | 0.001433 |
| is_member_pointer_test.test | RUN | 0.112001 | 0.264380 | 0.402911 | 0.001706 | 0.001506 | 0.001648 |
| is_member_obj_test.test | RUN | 0.110112 | 0.264205 | 0.426829 | 0.001623 | 0.001572 | 0.001614 |
| is_member_func_test.test | RUN | 0.113653 | 0.285341 | 0.459882 | 0.001427 | 0.001604 | 0.001514 |
| is_lvalue_reference_test.test | RUN | 0.113404 | 0.303411 | 0.488451 | 0.001515 | 0.001816 | 0.001696 |
| is_list_constructible_test.test | RUN | 0.135086 | 0.355724 | 0.544374 | 0.001768 | 0.001808 | 0.001636 |
| is_integral_test.test | RUN | 0.136295 | 0.411328 | 0.712969 | 0.001363 | 0.001480 | 0.001507 |
| is_fundamental_test.test | RUN | 0.137375 | 0.431491 | 0.777462 | 0.001420 | 0.001497 | 0.001718 |
| is_function_test.test | RUN | 0.113299 | 0.283677 | 0.445002 | 0.001626 | 0.001608 | 0.001415 |
| is_floating_point_test.test | RUN | 0.117629 | 0.309586 | 0.476688 | 0.001623 | 0.001560 | 0.001608 |
| is_float_test.test | RUN | 0.117990 | 0.300543 | 0.492199 | 0.001544 | 0.001504 | 0.001601 |
| is_final_test.test | RUN | 0.116872 | 0.305301 | 0.494375 | 0.001575 | 0.001426 | 0.001454 |
| is_enum_test.test | RUN | 0.108947 | 0.258730 | 0.384511 | 0.001230 | 0.001583 | 0.001234 |
| is_empty_test.test | RUN | 0.117346 | 0.280503 | 0.438401 | 0.001752 | 0.001249 | 0.001586 |
| is_detected_test.test | RUN | 0.105640 | 0.244381 | 0.359370 | 0.001708 | 0.001637 | 0.001656 |
| is_detected_exact_test.test | RUN | 0.103709 | 0.246966 | 0.350688 | 0.001713 | 0.001702 | 0.001478 |
| is_destructible_test.test | RUN | 0.152415 | 0.471287 | 0.879514 | 0.001508 | 0.001786 | 0.001520 |
| is_default_constr_test.test | RUN | 0.155378 | 0.483216 | 0.901214 | 0.001634 | 0.001551 | 0.001682 |
| is_copy_constructible_test.test | RUN | 0.161413 | 0.522184 | 0.994599 | 0.001790 | 0.001505 | 0.001646 |
| is_copy_assignable_test.test | RUN | 0.158439 | 0.494864 | 0.958614 | 0.001574 | 0.001617 | 0.001662 |
| is_convertible_test.test | RUN | 0.155464 | 0.445159 | 0.757463 | 0.001600 | 0.001760 | 0.001566 |
| is_constructible_test.test | RUN | 0.123831 | 0.328232 | 0.530235 | 0.001734 | 0.001728 | 0.001626 |
| is_const_test.test | RUN | 0.111548 | 0.293953 | 0.438789 | 0.001371 | 0.001442 | 0.001638 |
| is_compound_test.test | RUN | 0.104931 | 0.246197 | 0.369473 | 0.001636 | 0.001442 | 0.001731 |
| is_complex_test.test | RUN | 0.142780 | 0.329854 | 0.486687 | 0.001780 | 0.001806 | 0.001466 |
| is_complete_test.test | RUN | 0.128212 | 0.341011 | 0.581891 | 0.001620 | 0.001352 | 0.001648 |
| is_class_test.test | RUN | 0.113814 | 0.298744 | 0.463866 | 0.001253 | 0.001672 | 0.001229 |
| is_bounded_array_test.test | RUN | 0.110124 | 0.277400 | 0.400134 | 0.001464 | 0.001511 | 0.001464 |
| is_base_of_test.test | RUN | 0.117691 | 0.297762 | 0.484366 | 0.001758 | 0.001779 | 0.001424 |
| is_base_and_derived_test.test | RUN | 0.118270 | 0.290425 | 0.446439 | 0.001516 | 0.001584 | 0.001676 |
| is_assignable_test.test | RUN | 0.137435 | 0.412501 | 0.719841 | 0.001461 | 0.001706 | 0.001585 |
| is_array_test.test | RUN | 0.114257 | 0.283867 | 0.462970 | 0.001292 | 0.001445 | 0.001661 |
| is_arithmetic_test.test | RUN | 0.138043 | 0.412224 | 0.768550 | 0.001604 | 0.001771 | 0.001706 |
| is_abstract_test.test | RUN | 0.252832 | 1.164503 | 2.534470 | 0.001600 | 0.001695 | 0.001667 |
| integral_constant_test.test | RUN | 0.017982 | 0.044649 | 0.047984 | 0.000738 | 0.000751 | 0.001328 |
| has_virtual_destructor_test.test | RUN | 0.120833 | 0.318936 | 0.525940 | 0.001652 | 0.001778 | 0.001671 |
| has_unary_plus_test.test | RUN | 0.233710 | 1.256157 | 2.002332 | 0.001572 | 0.001778 | 0.001658 |
| has_unary_minus_test.test | RUN | 0.231103 | 1.204289 | 1.897233 | 0.001486 | 0.001733 | 0.001688 |
| has_trivial_move_constructor_test.test | RUN | 0.158503 | 0.503264 | 0.936866 | 0.001563 | 0.001521 | 0.001618 |
| has_trivial_move_assign_test.test | RUN | 0.156661 | 0.463217 | 0.856378 | 0.001685 | 0.001856 | 0.001674 |
| has_trivial_destructor_test.test | RUN | 0.157218 | 0.484454 | 0.944665 | 0.001745 | 0.001673 | 0.001491 |
| has_trivial_copy_test.test | RUN | 0.163338 | 0.512151 | 0.965308 | 0.001747 | 0.001790 | 0.001837 |
| has_trivial_constr_test.test | RUN | 0.165318 | 0.530959 | 0.962340 | 0.001636 | 0.001726 | 0.001865 |
| has_trivial_assign_test.test | RUN | 0.157879 | 0.526488 | 0.949076 | 0.001620 | 0.001866 | 0.001841 |
| has_right_shift_test.test | RUN | 0.245730 | 0.978816 | 2.104299 | 0.001786 | 0.001776 | 0.001539 |
| has_right_shift_assign_test.test | RUN | 0.234601 | 0.886765 | 1.985709 | 0.001552 | 0.001651 | 0.001464 |
| has_prefix_classes3_test.test | RUN | 0.174746 | 0.544134 | 0.982824 | 0.001524 | 0.001510 | 0.001760 |
| has_prefix_classes2_test.test | RUN | 0.172695 | 0.541885 | 0.970673 | 0.001278 | 0.001667 | 0.001797 |
| has_prefix_classes1_test.test | RUN | 0.174452 | 0.537649 | 0.983320 | 0.001598 | 0.001812 | 0.001711 |
| has_prefix_classes0_test.test | RUN | 0.174344 | 0.533971 | 0.982625 | 0.001501 | 0.001617 | 0.001682 |
| has_pre_increment_test.test | RUN | 0.230453 | 1.242073 | 1.985183 | 0.001600 | 0.001553 | 0.001785 |
| has_pre_decrement_test.test | RUN | 0.228770 | 1.255455 | 1.985653 | 0.001371 | 0.001638 | 0.001541 |
| has_postfix_classes3_test.test | RUN | 0.173747 | 0.537532 | 0.996471 | 0.001696 | 0.001514 | 0.001734 |
| has_postfix_classes2_test.test | RUN | 0.172709 | 0.523805 | 0.975516 | 0.001494 | 0.001531 | 0.001564 |
| has_postfix_classes1_test.test | RUN | 0.172148 | 0.535904 | 0.960638 | 0.001520 | 0.001698 | 0.001720 |
| has_postfix_classes0_test.test | RUN | 0.170542 | 0.535264 | 1.010321 | 0.001492 | 0.001466 | 0.001668 |
| has_post_increment_test.test | RUN | 0.222839 | 1.282526 | 1.968805 | 0.001668 | 0.001508 | 0.001467 |
| has_post_decrement_test.test | RUN | 0.220580 | 1.269310 | 1.952756 | 0.001510 | 0.001450 | 0.001502 |
| has_plus_test.test | RUN | 0.235578 | 0.902318 | 1.995136 | 0.001686 | 0.001637 | 0.001623 |
| has_plus_assign_test.test | RUN | 0.241183 | 0.917988 | 1.977722 | 0.001432 | 0.001404 | 0.001372 |
| has_operator_new_test.test | RUN | 0.160414 | 0.470046 | 0.856460 | 0.001719 | 0.001801 | 0.001518 |
| has_nothrow_destructor_test.test | RUN | 0.163267 | 0.509904 | 0.982451 | 0.001507 | 0.001626 | 0.001690 |
| has_nothrow_copy_test.test | RUN | 0.157787 | 0.491161 | 0.857075 | 0.001617 | 0.001684 | 0.001621 |
| has_nothrow_constr_test.test | RUN | 0.152957 | 0.478772 | 0.929095 | 0.001281 | 0.001378 | 0.001293 |
| has_nothrow_assign_test.test | RUN | 0.152741 | 0.487607 | 0.926309 | 0.001626 | 0.001741 | 0.001324 |
| has_not_equal_to_test.test | RUN | 0.238644 | 1.212327 | 1.989010 | 0.001738 | 0.001704 | 0.001612 |
| has_negate_test.test | RUN | 0.224680 | 0.892828 | 1.858583 | 0.001625 | 0.001645 | 0.001665 |
| has_multiplies_test.test | RUN | 0.226762 | 0.913430 | 1.985091 | 0.001392 | 0.001678 | 0.001647 |
| has_multiplies_assign_test.test | RUN | 0.233034 | 0.893127 | 1.972991 | 0.001773 | 0.001777 | 0.001284 |
| has_modulus_test.test | RUN | 0.232105 | 0.925164 | 1.871395 | 0.001590 | 0.001660 | 0.001715 |
| has_modulus_assign_test.test | RUN | 0.233579 | 0.926623 | 1.939065 | 0.001374 | 0.001584 | 0.001656 |
| has_minus_test.test | RUN | 0.237738 | 0.919573 | 1.953683 | 0.001420 | 0.001706 | 0.001609 |
| has_minus_assign_test.test | RUN | 0.241038 | 0.914883 | 1.953585 | 0.001858 | 0.001772 | 0.001441 |
| has_logical_or_test.test | RUN | 0.236259 | 0.904944 | 1.946361 | 0.001723 | 0.001788 | 0.001646 |
| has_logical_not_test.test | RUN | 0.227482 | 0.893926 | 1.864963 | 0.001651 | 0.001662 | 0.001659 |
| has_logical_and_test.test | RUN | 0.230255 | 0.908180 | 1.939682 | 0.001451 | 0.001814 | 0.001630 |
| has_less_test.test | RUN | 0.234944 | 1.233925 | 1.931441 | 0.001808 | 0.001780 | 0.001405 |
| has_less_equal_test.test | RUN | 0.238500 | 1.216682 | 1.960392 | 0.001586 | 0.001521 | 0.001637 |
| has_left_shift_test.test | RUN | 0.258919 | 1.141874 | 2.419953 | 0.001402 | 0.001554 | 0.001424 |
| has_left_shift_assign_test.test | RUN | 0.232542 | 0.922561 | 1.921773 | 0.001662 | 0.001620 | 0.001574 |
| has_greater_test.test | RUN | 0.234417 | 1.236115 | 1.942245 | 0.001834 | 0.001870 | 0.001383 |
| has_greater_equal_test.test | RUN | 0.239446 | 1.193063 | 1.947099 | 0.001522 | 0.001650 | 0.001710 |
| has_equal_to_test.test | RUN | 0.235323 | 1.202259 | 1.994489 | 0.001359 | 0.001807 | 0.001720 |
| has_divides_test.test | RUN | 0.230731 | 0.900255 | 1.922495 | 0.001724 | 0.001721 | 0.001426 |
| has_divides_assign_test.test | RUN | 0.231998 | 0.917499 | 1.966072 | 0.001747 | 0.001878 | 0.001475 |
| has_dereference_test.test | RUN | 0.230420 | 0.892776 | 1.854778 | 0.001606 | 0.001670 | 0.001593 |
| has_complement_test.test | RUN | 0.228690 | 1.261847 | 1.962124 | 0.001630 | 0.001749 | 0.001572 |
| has_bit_xor_test.test | RUN | 0.231914 | 0.880227 | 1.921559 | 0.001615 | 0.001713 | 0.001656 |
| has_bit_xor_assign_test.test | RUN | 0.240797 | 0.865748 | 1.978096 | 0.001506 | 0.001898 | 0.001359 |
| has_bit_or_test.test | RUN | 0.232355 | 0.914022 | 1.929267 | 0.001586 | 0.001782 | 0.001622 |
| has_bit_or_assign_test.test | RUN | 0.234976 | 0.922644 | 1.963022 | 0.001606 | 0.001844 | 0.001301 |
| has_bit_and_test.test | RUN | 0.235421 | 0.889951 | 1.914404 | 0.001589 | 0.001848 | 0.001514 |
| has_bit_and_assign_test.test | RUN | 0.232364 | 0.916583 | 1.957299 | 0.001846 | 0.001835 | 0.001569 |
| has_binary_classes9_test.test | RUN | 0.257665 | 1.063420 | 2.113516 | 0.001686 | 0.001796 | 0.001633 |
| has_binary_classes8_test.test | RUN | 0.255857 | 1.074845 | 2.169784 | 0.001542 | 0.001775 | 0.001370 |
| has_binary_classes7_test.test | RUN | 0.260692 | 1.051653 | 2.177837 | 0.001504 | 0.001735 | 0.001325 |
| has_binary_classes6_test.test | RUN | 0.249175 | 1.029859 | 2.108500 | 0.001830 | 0.001701 | 0.001328 |
| has_binary_classes5_test.test | RUN | 0.263516 | 0.994206 | 2.126188 | 0.001698 | 0.001780 | 0.001626 |
| has_binary_classes4_test.test | RUN | 0.253764 | 1.063891 | 2.155210 | 0.001566 | 0.001532 | 0.001274 |
| has_binary_classes3_test.test | RUN | 0.260920 | 1.061025 | 2.170083 | 0.001560 | 0.001750 | 0.001317 |
| has_binary_classes2_test.test | RUN | 0.255787 | 1.075698 | 2.104878 | 0.001785 | 0.001612 | 0.001582 |
| has_binary_classes1_test.test | RUN | 0.259810 | 1.043978 | 2.087942 | 0.001491 | 0.001822 | 0.001634 |
| has_binary_classes0_test.test | RUN | 0.257239 | 1.106129 | 2.099800 | 0.001609 | 0.001666 | 0.001657 |
| function_traits_test.test | RUN | 0.125151 | 0.293277 | 0.468440 | 0.001612 | 0.001761 | 0.001435 |
| floating_point_promotion_test.test | RUN | 0.107723 | 0.271019 | 0.429427 | 0.001696 | 0.001720 | 0.001637 |
| extent_test.test | RUN | 0.113936 | 0.282470 | 0.394259 | 0.001673 | 0.001748 | 0.001522 |
| enable_if_test.test | RUN | 0.108007 | 0.242431 | 0.351423 | 0.001510 | 0.001771 | 0.001701 |
| disjunction_test.test | RUN | 0.109123 | 0.246421 | 0.357425 | 0.001613 | 0.001713 | 0.001508 |
| detected_test.test | RUN | 0.103270 | 0.233838 | 0.356083 | 0.001541 | 0.001690 | 0.001669 |
| detected_or_test.test | RUN | 0.110018 | 0.249046 | 0.359870 | 0.001770 | 0.001755 | 0.001628 |
| decay_test.test | RUN | 0.291306 | 0.997833 | 2.292368 | 0.001326 | 0.001749 | 0.001503 |
| cxx14_aliases_test.test | RUN | 0.176843 | 0.379603 | 0.539746 | 0.001601 | 0.001692 | 0.001374 |
| copy_reference_test.test | RUN | 0.114218 | 0.242272 | 0.382365 | 0.001777 | 0.001574 | 0.001508 |
| copy_cv_test.test | RUN | 0.109458 | 0.265112 | 0.402595 | 0.001693 | 0.001793 | 0.001618 |
| copy_cv_ref_test.test | RUN | 0.157221 | 0.448023 | 0.912048 | 0.001621 | 0.001614 | 0.001643 |
| conjunction_test.test | RUN | 0.106038 | 0.252677 | 0.353421 | 0.001728 | 0.001505 | 0.001690 |
| conditional_test.test | RUN | 0.105508 | 0.256298 | 0.370339 | 0.001454 | 0.001521 | 0.001592 |
| common_type_test.test | RUN | 0.147503 | 0.386901 | 0.733282 | 0.001760 | 0.001608 | 0.001356 |
| common_type_sfinae_test.test | RUN | 0.106610 | 0.231806 | 0.354824 | 0.001641 | 0.001840 | 0.001221 |
| common_type_sfinae2_test.test | RUN | 0.106094 | 0.257936 | 0.369433 | 0.001479 | 0.001574 | 0.001320 |
| common_type_6_test.test | RUN | 0.111272 | 0.251260 | 0.383632 | 0.001621 | 0.001494 | 0.001552 |
| common_type_5_test.test | RUN | 0.112444 | 0.246875 | 0.381567 | 0.001724 | 0.001713 | 0.001480 |
| common_type_4_test.test | RUN | 0.121561 | 0.279619 | 0.445659 | 0.001697 | 0.001376 | 0.001663 |
| common_type_3_test.test | RUN | 0.106997 | 0.239590 | 0.329494 | 0.001575 | 0.001528 | 0.001237 |
| common_type_2_test.test | RUN | 0.145092 | 0.372093 | 0.708536 | 0.001378 | 0.001664 | 0.001580 |
| alignment_of_test.test | RUN | 0.117257 | 0.303079 | 0.463762 | 0.001654 | 0.001579 | 0.001411 |
| alignment_of_a2_test.test | RUN | 0.117296 | 0.301424 | 0.467129 | 0.001642 | 0.001803 | 0.001364 |
| aligned_storage_test.test | RUN | 0.120283 | 0.288707 | 0.430965 | 0.001674 | 0.001463 | 0.001448 |
| aligned_storage_empy_test.test | RUN | 0.141375 | 0.339021 | 0.529720 | 0.001446 | 0.001856 | 0.001664 |
| aligned_storage_a2_test.test | RUN | 0.118910 | 0.287992 | 0.408110 | 0.001886 | 0.001908 | 0.001874 |
| add_volatile_test.test | RUN | 0.259424 | 0.862838 | 2.124640 | 0.001711 | 0.001643 | 0.001666 |
| add_rvalue_reference_test.test | RUN | 0.286804 | 0.984023 | 2.509583 | 0.001668 | 0.001518 | 0.001678 |
| add_reference_test.test | RUN | 0.278789 | 0.955952 | 2.511576 | 0.001685 | 0.001811 | 0.001626 |
| add_pointer_test.test | RUN | 0.178088 | 0.537711 | 1.275096 | 0.001356 | 0.001338 | 0.001610 |
| add_lvalue_reference_test.test | RUN | 0.276745 | 0.955507 | 2.464783 | 0.001592 | 0.001811 | 0.001601 |
| add_cv_test.test | RUN | 0.263365 | 0.926249 | 2.319254 | 0.001518 | 0.001607 | 0.001461 |
| add_const_test.test | RUN | 0.266549 | 0.890905 | 2.315543 | 0.001629 | 0.001263 | 0.001435 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.102120 | 0.236101 | 0.341849 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.102217 | 0.240924 | 0.352470 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.103730 | 0.220236 | 0.333763 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.101179 | 0.222348 | 0.290325 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.104931 | 0.224552 | 0.316501 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.102550 | 0.223223 | 0.321493 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.103681 | 0.229719 | 0.318460 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.100948 | 0.224269 | 0.324392 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.101802 | 0.225846 | 0.324634 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.102355 | 0.227561 | 0.327333 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.101122 | 0.225443 | 0.324915 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.105707 | 0.227085 | 0.319560 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.105188 | 0.230295 | 0.321214 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.102553 | 0.225931 | 0.328074 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.100635 | 0.224076 | 0.327560 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.102448 | 0.223480 | 0.316120 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.100903 | 0.227897 | 0.318151 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.102742 | 0.230687 | 0.324184 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.100493 | 0.226330 | 0.322826 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.099777 | 0.223632 | 0.326944 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.101631 | 0.229698 | 0.323171 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.105487 | 0.226257 | 0.325875 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.157666 | 0.487198 | 0.951232 | 0.001250 | 0.001827 | 0.001679 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.149723 | 0.489858 | 0.922890 | 0.001505 | 0.001728 | 0.001475 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.154472 | 0.492079 | 0.933621 | 0.001271 | 0.001224 | 0.001242 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.157597 | 0.478200 | 0.879232 | 0.001348 | 0.001279 | 0.001242 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.103706 | 0.367670 | 0.555635 | 0.001270 | 0.001241 | 0.001194 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.031×† | 0.993×, 1.069× | 0.974× |
| clang | 1.060× | 1.065×, 1.055× | 1.010× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44922642903).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.000982s | 0.001055s | 0.001043s | byte equality observed |
| add_cv_test.test | 10 | 0.001009s | 0.001040s | 0.001090s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.001012s | 0.001004s | 0.001094s | byte equality observed |
| add_pointer_test.test | 10 | 0.001023s | 0.001000s | 0.001090s | byte equality observed |
| add_reference_test.test | 10 | 0.001005s | 0.001036s | 0.001076s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.001011s | 0.001080s | 0.001084s | byte equality observed |
| add_volatile_test.test | 10 | 0.000997s | 0.001059s | 0.001121s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.001086s | 0.001164s | 0.001223s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.000985s | 0.001064s | 0.001102s | byte equality observed |
| aligned_storage_test.test | 10 | 0.001086s | 0.001153s | 0.001214s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.000991s | 0.001054s | 0.001080s | byte equality observed |
| alignment_of_test.test | 10 | 0.001016s | 0.001055s | 0.001089s | byte equality observed |
| common_type_2_test.test | 10 | 0.000992s | 0.001090s | 0.001092s | byte equality observed |
| common_type_3_test.test | 10 | 0.000993s | 0.001036s | 0.001094s | byte equality observed |
| common_type_4_test.test | 10 | 0.001000s | 0.001047s | 0.001076s | byte equality observed |
| common_type_5_test.test | 10 | 0.000992s | 0.001037s | 0.001092s | byte equality observed |
| common_type_6_test.test | 10 | 0.000995s | 0.001048s | 0.001077s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.001018s | 0.001053s | 0.001072s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.001014s | 0.001059s | 0.001099s | byte equality observed |
| common_type_test.test | 10 | 0.000982s | 0.001042s | 0.001069s | byte equality observed |
| conditional_test.test | 10 | 0.000989s | 0.001037s | 0.001062s | byte equality observed |
| conjunction_test.test | 10 | 0.001012s | 0.001058s | 0.001086s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.001000s | 0.001057s | 0.001048s | byte equality observed |
| copy_cv_test.test | 10 | 0.000983s | 0.001054s | 0.001089s | byte equality observed |
| copy_reference_test.test | 10 | 0.000979s | 0.001082s | 0.001115s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.000992s | 0.001060s | 0.001103s | byte equality observed |
| decay_test.test | 10 | 0.001030s | 0.001071s | 0.001142s | byte equality observed |
| detected_or_test.test | 10 | 0.001010s | 0.001085s | 0.001125s | byte equality observed |
| detected_test.test | 10 | 0.000974s | 0.001062s | 0.001135s | byte equality observed |
| disjunction_test.test | 10 | 0.000983s | 0.001074s | 0.001099s | byte equality observed |
| enable_if_test.test | 10 | 0.001002s | 0.001038s | 0.001151s | byte equality observed |
| extent_test.test | 10 | 0.000996s | 0.001079s | 0.001155s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.001008s | 0.001028s | 0.001143s | byte equality observed |
| function_traits_test.test | 10 | 0.001010s | 0.001064s | 0.001161s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000996s | 0.001049s | 0.001160s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.000994s | 0.001070s | 0.001138s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.000994s | 0.001048s | 0.001149s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.000995s | 0.001050s | 0.001155s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.000995s | 0.001084s | 0.001144s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.000993s | 0.001067s | 0.001141s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.000985s | 0.001062s | 0.001135s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.001010s | 0.001062s | 0.001143s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.000999s | 0.001069s | 0.001135s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.000989s | 0.001066s | 0.001160s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.001029s | 0.001070s | 0.001165s | byte equality observed |
| has_bit_and_test.test | 10 | 0.001013s | 0.001095s | 0.001159s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.001008s | 0.001072s | 0.001151s | byte equality observed |
| has_bit_or_test.test | 10 | 0.000987s | 0.001060s | 0.001168s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.000990s | 0.001062s | 0.001160s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.000996s | 0.001066s | 0.001147s | byte equality observed |
| has_complement_test.test | 10 | 0.000988s | 0.001070s | 0.001148s | byte equality observed |
| has_dereference_test.test | 10 | 0.001001s | 0.001075s | 0.001145s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.001001s | 0.001054s | 0.001132s | byte equality observed |
| has_divides_test.test | 10 | 0.001004s | 0.001059s | 0.001152s | byte equality observed |
| has_equal_to_test.test | 10 | 0.000976s | 0.001065s | 0.001121s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.001009s | 0.001087s | 0.001150s | byte equality observed |
| has_greater_test.test | 10 | 0.001012s | 0.001035s | 0.001146s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.000995s | 0.001085s | 0.001136s | byte equality observed |
| has_left_shift_test.test | 10 | 0.001010s | 0.001055s | 0.001130s | byte equality observed |
| has_less_equal_test.test | 10 | 0.000991s | 0.001033s | 0.001174s | byte equality observed |
| has_less_test.test | 10 | 0.001011s | 0.001063s | 0.001154s | byte equality observed |
| has_logical_and_test.test | 10 | 0.001022s | 0.001093s | 0.001116s | byte equality observed |
| has_logical_not_test.test | 10 | 0.001013s | 0.001068s | 0.001166s | byte equality observed |
| has_logical_or_test.test | 10 | 0.001012s | 0.001131s | 0.001125s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.001010s | 0.001073s | 0.001147s | byte equality observed |
| has_minus_test.test | 10 | 0.001018s | 0.001071s | 0.001171s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.001038s | 0.001096s | 0.001132s | byte equality observed |
| has_modulus_test.test | 10 | 0.001020s | 0.001094s | 0.001137s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.001020s | 0.001050s | 0.001160s | byte equality observed |
| has_multiplies_test.test | 10 | 0.001002s | 0.001072s | 0.001140s | byte equality observed |
| has_negate_test.test | 10 | 0.001020s | 0.001068s | 0.001161s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.001002s | 0.001076s | 0.001152s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.001004s | 0.001041s | 0.001146s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.000991s | 0.001060s | 0.001169s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.001016s | 0.001052s | 0.001174s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.000998s | 0.001098s | 0.001148s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.001020s | 0.001050s | 0.001154s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.001009s | 0.001063s | 0.001130s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.001022s | 0.001051s | 0.001182s | byte equality observed |
| has_operator_new_test.test | 10 | 0.001031s | 0.001050s | 0.001135s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.001035s | 0.001060s | 0.001144s | byte equality observed |
| has_plus_test.test | 10 | 0.001033s | 0.001071s | 0.001163s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.001028s | 0.001057s | 0.001134s | byte equality observed |
| has_post_increment_test.test | 10 | 0.001005s | 0.001050s | 0.001154s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.001036s | 0.001069s | 0.001155s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.001039s | 0.001074s | 0.001150s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.001022s | 0.001064s | 0.001135s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.001024s | 0.001059s | 0.001153s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.001015s | 0.001031s | 0.001138s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.001004s | 0.001050s | 0.001178s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.001067s | 0.001048s | 0.001142s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.001011s | 0.001056s | 0.001183s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.001022s | 0.001028s | 0.001148s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.000996s | 0.001067s | 0.001160s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.001022s | 0.001047s | 0.001160s | byte equality observed |
| has_right_shift_test.test | 10 | 0.001030s | 0.001076s | 0.001196s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.001072s | 0.001109s | 0.001220s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.001101s | 0.001103s | 0.001210s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.001139s | 0.001145s | 0.001263s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.001060s | 0.001000s | 0.001146s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.001101s | 0.001053s | 0.001153s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.001062s | 0.001063s | 0.001154s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.001081s | 0.001042s | 0.001143s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.001073s | 0.001004s | 0.001177s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.001066s | 0.001000s | 0.001170s | byte equality observed |
| integral_constant_test.test | 10 | 0.000492s | 0.000474s | 0.001169s | byte equality observed |
| is_abstract_test.test | 10 | 0.001062s | 0.001025s | 0.001145s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.001086s | 0.001004s | 0.001135s | byte equality observed |
| is_array_test.test | 10 | 0.001088s | 0.000973s | 0.001171s | byte equality observed |
| is_assignable_test.test | 10 | 0.001061s | 0.000997s | 0.001136s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.001091s | 0.000973s | 0.001151s | byte equality observed |
| is_base_of_test.test | 10 | 0.001090s | 0.000993s | 0.001180s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.001060s | 0.001024s | 0.001145s | byte equality observed |
| is_class_test.test | 10 | 0.001099s | 0.001024s | 0.001164s | byte equality observed |
| is_complete_test.test | 10 | 0.001114s | 0.001004s | 0.001164s | byte equality observed |
| is_complex_test.test | 10 | 0.001132s | 0.000982s | 0.001165s | byte equality observed |
| is_compound_test.test | 10 | 0.001118s | 0.001003s | 0.001149s | byte equality observed |
| is_const_test.test | 10 | 0.001125s | 0.001015s | 0.001150s | byte equality observed |
| is_constructible_test.test | 10 | 0.001149s | 0.001066s | 0.001156s | byte equality observed |
| is_convertible_test.test | 10 | 0.001152s | 0.001043s | 0.001152s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.001115s | 0.001089s | 0.001156s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.001115s | 0.001064s | 0.001148s | byte equality observed |
| is_default_constr_test.test | 10 | 0.001126s | 0.001049s | 0.001125s | byte equality observed |
| is_destructible_test.test | 10 | 0.001138s | 0.001088s | 0.001157s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.001146s | 0.001074s | 0.001174s | byte equality observed |
| is_detected_test.test | 10 | 0.001128s | 0.001071s | 0.001160s | byte equality observed |
| is_empty_test.test | 10 | 0.001140s | 0.001075s | 0.001156s | byte equality observed |
| is_enum_test.test | 10 | 0.001140s | 0.001063s | 0.001174s | byte equality observed |
| is_final_test.test | 10 | 0.001135s | 0.001055s | 0.001164s | byte equality observed |
| is_float_test.test | 10 | 0.001163s | 0.001057s | 0.001149s | byte equality observed |
| is_floating_point_test.test | 10 | 0.001135s | 0.001082s | 0.001175s | byte equality observed |
| is_function_test.test | 10 | 0.001136s | 0.001096s | 0.001159s | byte equality observed |
| is_fundamental_test.test | 10 | 0.001133s | 0.001060s | 0.001153s | byte equality observed |
| is_integral_test.test | 10 | 0.001141s | 0.001038s | 0.001155s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.001120s | 0.001074s | 0.001160s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.001126s | 0.001048s | 0.001151s | byte equality observed |
| is_member_func_test.test | 10 | 0.001144s | 0.001055s | 0.001146s | byte equality observed |
| is_member_obj_test.test | 10 | 0.001146s | 0.001099s | 0.001152s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.001125s | 0.001059s | 0.001155s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.001141s | 0.001089s | 0.001174s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.001111s | 0.001047s | 0.001155s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.001132s | 0.001086s | 0.001173s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.001155s | 0.001095s | 0.001139s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.001130s | 0.001121s | 0.001169s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.001125s | 0.001103s | 0.001155s | byte equality observed |
| is_object_test.test | 10 | 0.001158s | 0.001127s | 0.001175s | byte equality observed |
| is_pod_test.test | 10 | 0.001146s | 0.001113s | 0.001167s | byte equality observed |
| is_pointer_test.test | 10 | 0.001129s | 0.001122s | 0.001173s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.001133s | 0.001138s | 0.001147s | byte equality observed |
| is_reference_test.test | 10 | 0.001141s | 0.001119s | 0.001156s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.001131s | 0.001121s | 0.001147s | byte equality observed |
| is_same_test.test | 10 | 0.001142s | 0.001105s | 0.001161s | byte equality observed |
| is_scalar_test.test | 10 | 0.001140s | 0.001183s | 0.001154s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.001143s | 0.001137s | 0.001147s | byte equality observed |
| is_signed_test.test | 10 | 0.001123s | 0.001150s | 0.001169s | byte equality observed |
| is_stateless_test.test | 10 | 0.001148s | 0.001124s | 0.001151s | byte equality observed |
| is_swappable_test.test | 10 | 0.001152s | 0.001143s | 0.001158s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.001170s | 0.001156s | 0.001179s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.001135s | 0.001129s | 0.001146s | byte equality observed |
| is_union_test.test | 10 | 0.001133s | 0.001123s | 0.001161s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.001162s | 0.001134s | 0.001151s | byte equality observed |
| is_unsigned_test.test | 10 | 0.001119s | 0.001152s | 0.001168s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.001128s | 0.001122s | 0.001138s | byte equality observed |
| is_void_test.test | 10 | 0.001151s | 0.001132s | 0.001157s | byte equality observed |
| is_volatile_test.test | 10 | 0.001132s | 0.001136s | 0.001179s | byte equality observed |
| make_signed_test.test | 10 | 0.001141s | 0.001116s | 0.001134s | byte equality observed |
| make_unsigned_test.test | 10 | 0.001158s | 0.001137s | 0.001157s | byte equality observed |
| make_void_test.test | 10 | 0.001165s | 0.001156s | 0.001189s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000506s | 0.000515s | 0.001161s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000520s | 0.000510s | 0.001161s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000516s | 0.000508s | 0.001153s | byte equality observed |
| negation_test.test | 10 | 0.001203s | 0.001174s | 0.001164s | byte equality observed |
| promote_basic_test.test | 10 | 0.000516s | 0.000513s | 0.001158s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000515s | 0.000508s | 0.001158s | byte equality observed |
| promote_enum_test.test | 10 | 0.000514s | 0.000504s | 0.001147s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000519s | 0.000502s | 0.001154s | byte equality observed |
| rank_test.test | 10 | 0.001168s | 0.001138s | 0.001156s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.001166s | 0.001153s | 0.001156s | byte equality observed |
| remove_bounds_test.test | 10 | 0.001154s | 0.001128s | 0.001145s | byte equality observed |
| remove_const_test.test | 10 | 0.001155s | 0.001145s | 0.001148s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.001155s | 0.001116s | 0.001130s | byte equality observed |
| remove_cv_test.test | 10 | 0.001134s | 0.001128s | 0.001162s | byte equality observed |
| remove_extent_test.test | 10 | 0.001157s | 0.001123s | 0.001169s | byte equality observed |
| remove_pointer_test.test | 10 | 0.001169s | 0.001122s | 0.001147s | byte equality observed |
| remove_reference_test.test | 10 | 0.001146s | 0.001141s | 0.001172s | byte equality observed |
| remove_volatile_test.test | 10 | 0.001140s | 0.001138s | 0.001170s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.001154s | 0.001125s | 0.001157s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.001162s | 0.001134s | 0.001139s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.001139s | 0.001133s | 0.001161s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.001147s | 0.001145s | 0.001163s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.001138s | 0.001111s | 0.001185s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.001145s | 0.001136s | 0.001142s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.001151s | 0.001140s | 0.001156s | byte equality observed |
| type_identity_test.test | 10 | 0.001149s | 0.001138s | 0.001155s | byte equality observed |
| type_traits_test.test | 10 | 0.000514s | 0.000504s | 0.001139s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.001294s | 0.001270s | 0.001299s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44922642903).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
