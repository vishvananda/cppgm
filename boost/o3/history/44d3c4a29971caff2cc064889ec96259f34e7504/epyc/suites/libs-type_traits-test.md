# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.114527 | 0.332694 | 0.507317 | 0.001393 | 0.001960 | 0.001562 |
| type_traits_test.test | RUN | 0.159647 | 0.354975 | 0.504237 | 0.000594 | 0.000753 | 0.001606 |
| type_identity_test.test | RUN | 0.314642 | 1.136684 | 2.914045 | 0.001565 | 0.001870 | 0.001680 |
| tricky_rvalue_test.test | RUN | 0.108075 | 0.271350 | 0.390457 | 0.001587 | 0.001697 | 0.001310 |
| tricky_partial_spec_test.test | RUN | 0.131698 | 0.361413 | 0.644283 | 0.001559 | 0.001588 | 0.001356 |
| tricky_is_enum_test.test | RUN | 0.104624 | 0.254831 | 0.363913 | 0.001526 | 0.001672 | 0.001648 |
| tricky_incomplete_type_test.test | RUN | 0.167479 | 0.362530 | 0.603370 | 0.001602 | 0.001633 | 0.001340 |
| tricky_function_type_test.test | RUN | 0.137001 | 0.402996 | 0.719295 | 0.001719 | 0.001662 | 0.001536 |
| tricky_add_pointer_test.test | RUN | 0.203039 | 0.699756 | 1.645721 | 0.001340 | 0.001834 | 0.001656 |
| tricky_abstract_type_test.test | RUN | 0.109773 | 0.258214 | 0.376312 | 0.001411 | 0.001915 | 0.001549 |
| remove_volatile_test.test | RUN | 0.278613 | 1.013768 | 2.573201 | 0.001648 | 0.001846 | 0.001597 |
| remove_reference_test.test | RUN | 0.293374 | 1.073710 | 2.712854 | 0.001692 | 0.001843 | 0.001722 |
| remove_pointer_test.test | RUN | 0.300591 | 1.105328 | 2.872593 | 0.001516 | 0.001856 | 0.001639 |
| remove_extent_test.test | RUN | 0.293176 | 1.065665 | 2.711092 | 0.001506 | 0.001916 | 0.001334 |
| remove_cv_test.test | RUN | 0.287083 | 1.065995 | 2.690345 | 0.001623 | 0.001890 | 0.001670 |
| remove_cv_ref_test.test | RUN | 0.602882 | 2.618927 | 6.624608 | 0.001462 | 0.001579 | 0.001516 |
| remove_const_test.test | RUN | 0.282002 | 1.001363 | 2.588292 | 0.001676 | 0.001868 | 0.001560 |
| remove_bounds_test.test | RUN | 0.290813 | 1.058318 | 2.741012 | 0.001746 | 0.001893 | 0.001598 |
| remove_all_extents_test.test | RUN | 0.293739 | 1.088700 | 2.531692 | 0.001315 | 0.001664 | 0.001363 |
| rank_test.test | RUN | 0.108449 | 0.269993 | 0.396234 | 0.001393 | 0.001294 | 0.001624 |
| promote_mpl_test.test | RUN | 0.093187 | 0.226548 | 0.272464 | 0.000576 | 0.000675 | 0.001410 |
| promote_enum_test.test | RUN | 0.022174 | 0.056923 | 0.070207 | 0.000641 | 0.000720 | 0.001333 |
| promote_enum_msvc_bug_test.test | RUN | 0.019302 | 0.049733 | 0.054887 | 0.000587 | 0.000684 | 0.001622 |
| promote_basic_test.test | RUN | 0.024678 | 0.057915 | 0.073593 | 0.000632 | 0.000653 | 0.001481 |
| negation_test.test | RUN | 0.105326 | 0.264936 | 0.356996 | 0.001466 | 0.001670 | 0.001554 |
| mpl_interop_test3.test | RUN | 0.089020 | 0.247328 | 0.227861 | 0.000557 | 0.000590 | 0.001533 |
| mpl_interop_test2.test | RUN | 0.032347 | 0.067815 | 0.061143 | 0.000595 | 0.000789 | 0.001625 |
| mpl_interop_test1.test | RUN | 0.017185 | 0.045656 | 0.051413 | 0.000588 | 0.000761 | 0.001073 |
| make_void_test.test | RUN | 0.108528 | 0.266151 | 0.394233 | 0.001714 | 0.001575 | 0.001647 |
| make_unsigned_test.test | RUN | 0.129371 | 0.360020 | 0.529950 | 0.001532 | 0.001712 | 0.001710 |
| make_signed_test.test | RUN | 0.127235 | 0.344248 | 0.562670 | 0.001415 | 0.002651 | 0.001536 |
| is_volatile_test.test | RUN | 0.110858 | 0.312565 | 0.441152 | 0.001424 | 0.001715 | 0.001493 |
| is_void_test.test | RUN | 0.108419 | 0.307281 | 0.439943 | 0.001672 | 0.001695 | 0.001600 |
| is_virtual_base_of_test.test | RUN | 0.124286 | 0.359726 | 0.567297 | 0.001366 | 0.001616 | 0.001706 |
| is_unsigned_test.test | RUN | 0.107605 | 0.286318 | 0.429922 | 0.001294 | 0.001795 | 0.001775 |
| is_unscoped_enum_test.test | RUN | 0.104708 | 0.265816 | 0.366975 | 0.001413 | 0.001560 | 0.001678 |
| is_union_test.test | RUN | 0.118223 | 0.324906 | 0.498626 | 0.001512 | 0.001719 | 0.001769 |
| is_unbounded_array_test.test | RUN | 0.107015 | 0.275704 | 0.387269 | 0.001511 | 0.001763 | 0.001608 |
| is_trivially_copyable_test.test | RUN | 0.171793 | 0.577346 | 1.083629 | 0.001391 | 0.001908 | 0.001774 |
| is_swappable_test.test | RUN | 0.145852 | 0.430329 | 0.770118 | 0.001401 | 0.001874 | 0.001629 |
| is_stateless_test.test | RUN | 0.162406 | 0.499787 | 0.906100 | 0.001522 | 0.001902 | 0.001602 |
| is_signed_test.test | RUN | 0.112707 | 0.278129 | 0.436509 | 0.001282 | 0.001881 | 0.001446 |
| is_scoped_enum_test.test | RUN | 0.108084 | 0.256437 | 0.370235 | 0.001457 | 0.001631 | 0.001591 |
| is_scalar_test.test | RUN | 0.139583 | 0.454341 | 0.777957 | 0.001579 | 0.001669 | 0.001566 |
| is_same_test.test | RUN | 0.109574 | 0.272174 | 0.376698 | 0.001496 | 0.001665 | 0.001654 |
| is_rvalue_reference_test.test | RUN | 0.112251 | 0.300300 | 0.484512 | 0.001574 | 0.001832 | 0.001632 |
| is_reference_test.test | RUN | 0.111163 | 0.302820 | 0.487020 | 0.001540 | 0.001669 | 0.001633 |
| is_polymorphic_test.test | RUN | 0.118644 | 0.327165 | 0.480262 | 0.001340 | 0.001829 | 0.001660 |
| is_pointer_test.test | RUN | 0.115858 | 0.316967 | 0.487756 | 0.001602 | 0.001624 | 0.001611 |
| is_pod_test.test | RUN | 0.150422 | 0.519994 | 0.879398 | 0.001489 | 0.001854 | 0.001674 |
| is_object_test.test | RUN | 0.104941 | 0.266789 | 0.392210 | 0.001248 | 0.001744 | 0.001660 |
| is_nothrow_swappable_test.test | RUN | 0.156337 | 0.463190 | 0.835749 | 0.001494 | 0.001761 | 0.001699 |
| is_nothrow_move_constructible_test.test | RUN | 0.146045 | 0.510777 | 0.925997 | 0.001614 | 0.001737 | 0.001385 |
| is_nothrow_move_assignable_test.test | RUN | 0.145964 | 0.512504 | 0.909621 | 0.001589 | 0.001566 | 0.001686 |
| is_noncopyable_test.test | RUN | 0.108392 | 0.260445 | 0.398520 | 0.001495 | 0.001820 | 0.001632 |
| is_member_pointer_test.test | RUN | 0.108957 | 0.278777 | 0.416539 | 0.001311 | 0.001896 | 0.001599 |
| is_member_obj_test.test | RUN | 0.109278 | 0.276253 | 0.388439 | 0.001692 | 0.001570 | 0.001742 |
| is_member_func_test.test | RUN | 0.109764 | 0.300288 | 0.438944 | 0.001335 | 0.001622 | 0.001583 |
| is_lvalue_reference_test.test | RUN | 0.115109 | 0.323921 | 0.473353 | 0.001510 | 0.001518 | 0.001661 |
| is_list_constructible_test.test | RUN | 0.137211 | 0.366940 | 0.524849 | 0.001601 | 0.001817 | 0.001659 |
| is_integral_test.test | RUN | 0.134990 | 0.438693 | 0.756792 | 0.001590 | 0.001621 | 0.001746 |
| is_fundamental_test.test | RUN | 0.139031 | 0.450592 | 0.769634 | 0.001232 | 0.001718 | 0.001553 |
| is_function_test.test | RUN | 0.111581 | 0.297022 | 0.450968 | 0.001505 | 0.001502 | 0.001594 |
| is_floating_point_test.test | RUN | 0.115741 | 0.306299 | 0.473300 | 0.001452 | 0.001688 | 0.001710 |
| is_float_test.test | RUN | 0.115017 | 0.319412 | 0.486301 | 0.001624 | 0.001501 | 0.001328 |
| is_final_test.test | RUN | 0.113761 | 0.326181 | 0.507254 | 0.001487 | 0.001546 | 0.001354 |
| is_enum_test.test | RUN | 0.107338 | 0.258543 | 0.387513 | 0.001339 | 0.001614 | 0.001469 |
| is_empty_test.test | RUN | 0.119270 | 0.293172 | 0.443314 | 0.001522 | 0.001509 | 0.001484 |
| is_detected_test.test | RUN | 0.106426 | 0.249749 | 0.363130 | 0.001704 | 0.001736 | 0.001548 |
| is_detected_exact_test.test | RUN | 0.104810 | 0.258694 | 0.359852 | 0.001404 | 0.001517 | 0.001243 |
| is_destructible_test.test | RUN | 0.149389 | 0.490800 | 0.906221 | 0.001640 | 0.001812 | 0.001437 |
| is_default_constr_test.test | RUN | 0.152764 | 0.492495 | 0.945121 | 0.001686 | 0.001877 | 0.001750 |
| is_copy_constructible_test.test | RUN | 0.158201 | 0.546952 | 1.000325 | 0.001406 | 0.001739 | 0.001580 |
| is_copy_assignable_test.test | RUN | 0.157961 | 0.524661 | 0.934757 | 0.001749 | 0.001589 | 0.001751 |
| is_convertible_test.test | RUN | 0.156504 | 0.466992 | 0.777619 | 0.001634 | 0.001834 | 0.001642 |
| is_constructible_test.test | RUN | 0.126814 | 0.356849 | 0.504520 | 0.001398 | 0.001764 | 0.001501 |
| is_const_test.test | RUN | 0.114060 | 0.288650 | 0.428840 | 0.001470 | 0.001518 | 0.001359 |
| is_compound_test.test | RUN | 0.105773 | 0.270179 | 0.333785 | 0.001532 | 0.001612 | 0.001462 |
| is_complex_test.test | RUN | 0.141434 | 0.340742 | 0.512573 | 0.001526 | 0.001909 | 0.001598 |
| is_complete_test.test | RUN | 0.124267 | 0.352184 | 0.565231 | 0.001438 | 0.001190 | 0.001711 |
| is_class_test.test | RUN | 0.115880 | 0.298278 | 0.493072 | 0.001605 | 0.001720 | 0.001610 |
| is_bounded_array_test.test | RUN | 0.108281 | 0.281132 | 0.426846 | 0.001505 | 0.001657 | 0.001340 |
| is_base_of_test.test | RUN | 0.111930 | 0.303756 | 0.463854 | 0.001369 | 0.001863 | 0.001622 |
| is_base_and_derived_test.test | RUN | 0.115389 | 0.290154 | 0.474727 | 0.001500 | 0.001821 | 0.001551 |
| is_assignable_test.test | RUN | 0.138428 | 0.420556 | 0.714831 | 0.001561 | 0.001777 | 0.001608 |
| is_array_test.test | RUN | 0.113041 | 0.287665 | 0.430718 | 0.001603 | 0.001774 | 0.001553 |
| is_arithmetic_test.test | RUN | 0.138139 | 0.437842 | 0.764089 | 0.001339 | 0.001890 | 0.001676 |
| is_abstract_test.test | RUN | 0.252739 | 1.231243 | 2.557650 | 0.001469 | 0.001821 | 0.001402 |
| integral_constant_test.test | RUN | 0.017669 | 0.046311 | 0.047142 | 0.000732 | 0.000736 | 0.001494 |
| has_virtual_destructor_test.test | RUN | 0.118180 | 0.340438 | 0.553090 | 0.001521 | 0.001858 | 0.001614 |
| has_unary_plus_test.test | RUN | 0.223354 | 1.289073 | 1.936812 | 0.001527 | 0.001841 | 0.001676 |
| has_unary_minus_test.test | RUN | 0.227792 | 1.244619 | 1.908920 | 0.001481 | 0.001876 | 0.001689 |
| has_trivial_move_constructor_test.test | RUN | 0.155054 | 0.528653 | 0.948375 | 0.001468 | 0.001709 | 0.001640 |
| has_trivial_move_assign_test.test | RUN | 0.151241 | 0.487560 | 0.918951 | 0.001538 | 0.001892 | 0.001670 |
| has_trivial_destructor_test.test | RUN | 0.151510 | 0.519899 | 0.925478 | 0.001481 | 0.001623 | 0.001603 |
| has_trivial_copy_test.test | RUN | 0.159333 | 0.533793 | 0.978836 | 0.001652 | 0.001927 | 0.001639 |
| has_trivial_constr_test.test | RUN | 0.151025 | 0.551112 | 0.975763 | 0.001647 | 0.001835 | 0.001727 |
| has_trivial_assign_test.test | RUN | 0.158349 | 0.546523 | 0.960767 | 0.001738 | 0.001954 | 0.001743 |
| has_right_shift_test.test | RUN | 0.249479 | 1.024318 | 2.094788 | 0.001520 | 0.001674 | 0.001803 |
| has_right_shift_assign_test.test | RUN | 0.235257 | 0.949578 | 1.944854 | 0.001503 | 0.001811 | 0.001627 |
| has_prefix_classes3_test.test | RUN | 0.169800 | 0.556045 | 1.020055 | 0.001528 | 0.001782 | 0.001517 |
| has_prefix_classes2_test.test | RUN | 0.171321 | 0.551088 | 1.006788 | 0.001502 | 0.001724 | 0.001461 |
| has_prefix_classes1_test.test | RUN | 0.170679 | 0.560438 | 0.945528 | 0.001382 | 0.001682 | 0.001635 |
| has_prefix_classes0_test.test | RUN | 0.168539 | 0.551263 | 0.985964 | 0.001558 | 0.001788 | 0.001676 |
| has_pre_increment_test.test | RUN | 0.228669 | 1.322386 | 1.987467 | 0.001616 | 0.001789 | 0.001678 |
| has_pre_decrement_test.test | RUN | 0.228444 | 1.284968 | 1.885548 | 0.001502 | 0.001963 | 0.001632 |
| has_postfix_classes3_test.test | RUN | 0.168997 | 0.551405 | 0.986971 | 0.001801 | 0.001704 | 0.001694 |
| has_postfix_classes2_test.test | RUN | 0.170786 | 0.547017 | 0.974109 | 0.001488 | 0.001852 | 0.001554 |
| has_postfix_classes1_test.test | RUN | 0.171543 | 0.541513 | 1.002805 | 0.001686 | 0.001974 | 0.001623 |
| has_postfix_classes0_test.test | RUN | 0.167322 | 0.577203 | 0.971776 | 0.001264 | 0.001887 | 0.001613 |
| has_post_increment_test.test | RUN | 0.230599 | 1.363476 | 1.961838 | 0.002190 | 0.001656 | 0.001676 |
| has_post_decrement_test.test | RUN | 0.231222 | 1.313271 | 2.011394 | 0.001639 | 0.001594 | 0.001632 |
| has_plus_test.test | RUN | 0.231895 | 0.971111 | 1.885824 | 0.001658 | 0.001777 | 0.001677 |
| has_plus_assign_test.test | RUN | 0.240614 | 0.954100 | 1.968893 | 0.001410 | 0.001830 | 0.001499 |
| has_operator_new_test.test | RUN | 0.157657 | 0.487105 | 0.824513 | 0.001781 | 0.001766 | 0.001478 |
| has_nothrow_destructor_test.test | RUN | 0.161329 | 0.554510 | 0.936523 | 0.001579 | 0.001848 | 0.001721 |
| has_nothrow_copy_test.test | RUN | 0.154257 | 0.524036 | 0.925825 | 0.001370 | 0.001682 | 0.001667 |
| has_nothrow_constr_test.test | RUN | 0.150672 | 0.503179 | 0.932820 | 0.001426 | 0.001521 | 0.001634 |
| has_nothrow_assign_test.test | RUN | 0.155143 | 0.504124 | 0.845910 | 0.001461 | 0.001875 | 0.001604 |
| has_not_equal_to_test.test | RUN | 0.234072 | 1.321284 | 1.989326 | 0.001728 | 0.001676 | 0.001639 |
| has_negate_test.test | RUN | 0.217624 | 0.903210 | 1.850753 | 0.001676 | 0.001628 | 0.001690 |
| has_multiplies_test.test | RUN | 0.225527 | 0.937669 | 1.946368 | 0.001362 | 0.001621 | 0.001626 |
| has_multiplies_assign_test.test | RUN | 0.235627 | 0.965520 | 1.979885 | 0.001557 | 0.001890 | 0.001530 |
| has_modulus_test.test | RUN | 0.231054 | 0.933175 | 1.915272 | 0.001574 | 0.001658 | 0.001789 |
| has_modulus_assign_test.test | RUN | 0.229867 | 0.928170 | 1.932017 | 0.001647 | 0.001738 | 0.001670 |
| has_minus_test.test | RUN | 0.240065 | 0.986189 | 2.033417 | 0.001460 | 0.001910 | 0.001466 |
| has_minus_assign_test.test | RUN | 0.238417 | 0.995509 | 1.986465 | 0.001692 | 0.001846 | 0.001679 |
| has_logical_or_test.test | RUN | 0.234877 | 0.989620 | 1.885188 | 0.001714 | 0.001623 | 0.001674 |
| has_logical_not_test.test | RUN | 0.223244 | 0.944555 | 1.882486 | 0.001324 | 0.001850 | 0.001662 |
| has_logical_and_test.test | RUN | 0.225232 | 0.946650 | 1.932877 | 0.001722 | 0.001844 | 0.001539 |
| has_less_test.test | RUN | 0.234525 | 1.292165 | 1.936130 | 0.001648 | 0.001889 | 0.001445 |
| has_less_equal_test.test | RUN | 0.231233 | 1.244997 | 1.939173 | 0.001705 | 0.001568 | 0.001721 |
| has_left_shift_test.test | RUN | 0.253755 | 1.220421 | 2.440324 | 0.001342 | 0.001648 | 0.001490 |
| has_left_shift_assign_test.test | RUN | 0.229534 | 0.963240 | 1.967589 | 0.001558 | 0.001706 | 0.001516 |
| has_greater_test.test | RUN | 0.231639 | 1.300105 | 1.950760 | 0.001672 | 0.001878 | 0.001437 |
| has_greater_equal_test.test | RUN | 0.233689 | 1.214383 | 1.949047 | 0.001513 | 0.001942 | 0.001694 |
| has_equal_to_test.test | RUN | 0.231195 | 1.282803 | 1.933431 | 0.001555 | 0.001768 | 0.001724 |
| has_divides_test.test | RUN | 0.227074 | 0.996592 | 1.965770 | 0.001389 | 0.001557 | 0.001385 |
| has_divides_assign_test.test | RUN | 0.237215 | 1.001839 | 1.974610 | 0.001557 | 0.001773 | 0.001367 |
| has_dereference_test.test | RUN | 0.228426 | 0.978886 | 1.866708 | 0.001371 | 0.001743 | 0.001599 |
| has_complement_test.test | RUN | 0.222415 | 1.322610 | 1.895824 | 0.001535 | 0.001755 | 0.001594 |
| has_bit_xor_test.test | RUN | 0.227425 | 0.970887 | 1.980908 | 0.001220 | 0.001732 | 0.001450 |
| has_bit_xor_assign_test.test | RUN | 0.233014 | 0.975274 | 1.984366 | 0.001692 | 0.001914 | 0.001327 |
| has_bit_or_test.test | RUN | 0.234922 | 1.014706 | 1.925190 | 0.001388 | 0.001862 | 0.001655 |
| has_bit_or_assign_test.test | RUN | 0.229167 | 0.994943 | 1.919013 | 0.001536 | 0.001879 | 0.001539 |
| has_bit_and_test.test | RUN | 0.235110 | 1.010845 | 1.979298 | 0.001463 | 0.001841 | 0.001595 |
| has_bit_and_assign_test.test | RUN | 0.231188 | 0.979106 | 1.975287 | 0.001697 | 0.001727 | 0.001353 |
| has_binary_classes9_test.test | RUN | 0.256590 | 1.214768 | 2.128683 | 0.001665 | 0.001714 | 0.001892 |
| has_binary_classes8_test.test | RUN | 0.251908 | 1.210618 | 2.136309 | 0.001471 | 0.001824 | 0.001654 |
| has_binary_classes7_test.test | RUN | 0.248969 | 1.137247 | 2.208936 | 0.001510 | 0.001859 | 0.001548 |
| has_binary_classes6_test.test | RUN | 0.252930 | 1.130140 | 2.206507 | 0.001681 | 0.001839 | 0.001594 |
| has_binary_classes5_test.test | RUN | 0.249369 | 1.223712 | 2.143109 | 0.001698 | 0.001894 | 0.001917 |
| has_binary_classes4_test.test | RUN | 0.252925 | 1.220890 | 2.184683 | 0.001453 | 0.001911 | 0.001548 |
| has_binary_classes3_test.test | RUN | 0.254633 | 1.204934 | 2.203298 | 0.001556 | 0.001884 | 0.001469 |
| has_binary_classes2_test.test | RUN | 0.254979 | 1.191114 | 2.105759 | 0.001569 | 0.001903 | 0.001722 |
| has_binary_classes1_test.test | RUN | 0.257105 | 1.165480 | 2.166697 | 0.001656 | 0.001752 | 0.001406 |
| has_binary_classes0_test.test | RUN | 0.251201 | 1.126794 | 2.095598 | 0.001533 | 0.001707 | 0.001776 |
| function_traits_test.test | RUN | 0.117813 | 0.314209 | 0.460588 | 0.001516 | 0.001976 | 0.001612 |
| floating_point_promotion_test.test | RUN | 0.110834 | 0.269019 | 0.427178 | 0.001703 | 0.001753 | 0.001121 |
| extent_test.test | RUN | 0.114476 | 0.280897 | 0.442174 | 0.001480 | 0.001543 | 0.001341 |
| enable_if_test.test | RUN | 0.105839 | 0.252366 | 0.347810 | 0.001618 | 0.001700 | 0.001291 |
| disjunction_test.test | RUN | 0.107988 | 0.261422 | 0.386473 | 0.001484 | 0.001643 | 0.001480 |
| detected_test.test | RUN | 0.105960 | 0.247583 | 0.350149 | 0.001716 | 0.001708 | 0.001508 |
| detected_or_test.test | RUN | 0.107560 | 0.269295 | 0.383395 | 0.001560 | 0.001728 | 0.001499 |
| decay_test.test | RUN | 0.277710 | 1.013936 | 2.268574 | 0.001532 | 0.001925 | 0.001464 |
| cxx14_aliases_test.test | RUN | 0.170539 | 0.391787 | 0.557610 | 0.001731 | 0.001800 | 0.001728 |
| copy_reference_test.test | RUN | 0.106493 | 0.259904 | 0.385669 | 0.001520 | 0.001722 | 0.001692 |
| copy_cv_test.test | RUN | 0.110341 | 0.273670 | 0.378376 | 0.001342 | 0.001422 | 0.001620 |
| copy_cv_ref_test.test | RUN | 0.158936 | 0.471598 | 0.902837 | 0.001672 | 0.001733 | 0.001714 |
| conjunction_test.test | RUN | 0.105918 | 0.255944 | 0.380585 | 0.001400 | 0.001671 | 0.001651 |
| conditional_test.test | RUN | 0.106812 | 0.251770 | 0.373845 | 0.001466 | 0.001428 | 0.001597 |
| common_type_test.test | RUN | 0.146200 | 0.395470 | 0.730719 | 0.001285 | 0.001596 | 0.001756 |
| common_type_sfinae_test.test | RUN | 0.103473 | 0.250446 | 0.357803 | 0.001428 | 0.001698 | 0.001684 |
| common_type_sfinae2_test.test | RUN | 0.104586 | 0.255735 | 0.374850 | 0.001523 | 0.001672 | 0.001612 |
| common_type_6_test.test | RUN | 0.110219 | 0.265898 | 0.371182 | 0.001472 | 0.001684 | 0.001816 |
| common_type_5_test.test | RUN | 0.110458 | 0.270684 | 0.409838 | 0.001418 | 0.001690 | 0.001450 |
| common_type_4_test.test | RUN | 0.117470 | 0.291207 | 0.471206 | 0.001347 | 0.001714 | 0.001536 |
| common_type_3_test.test | RUN | 0.105972 | 0.251022 | 0.309800 | 0.001359 | 0.001476 | 0.001518 |
| common_type_2_test.test | RUN | 0.144252 | 0.385918 | 0.712035 | 0.001644 | 0.001898 | 0.001528 |
| alignment_of_test.test | RUN | 0.114647 | 0.310389 | 0.479298 | 0.001509 | 0.001730 | 0.001659 |
| alignment_of_a2_test.test | RUN | 0.114175 | 0.301678 | 0.473763 | 0.001574 | 0.001552 | 0.001618 |
| aligned_storage_test.test | RUN | 0.116904 | 0.314596 | 0.421858 | 0.001298 | 0.001848 | 0.001593 |
| aligned_storage_empy_test.test | RUN | 0.132952 | 0.344352 | 0.575851 | 0.001551 | 0.001867 | 0.001718 |
| aligned_storage_a2_test.test | RUN | 0.117032 | 0.302801 | 0.416900 | 0.001586 | 0.002059 | 0.001813 |
| add_volatile_test.test | RUN | 0.250207 | 0.875123 | 2.159438 | 0.001623 | 0.001910 | 0.001641 |
| add_rvalue_reference_test.test | RUN | 0.281100 | 1.014517 | 2.500537 | 0.001511 | 0.001656 | 0.001691 |
| add_reference_test.test | RUN | 0.272122 | 0.974580 | 2.490122 | 0.001586 | 0.001942 | 0.001720 |
| add_pointer_test.test | RUN | 0.178763 | 0.559549 | 1.286403 | 0.001522 | 0.001536 | 0.001288 |
| add_lvalue_reference_test.test | RUN | 0.272103 | 0.984286 | 2.405770 | 0.001648 | 0.001682 | 0.001635 |
| add_cv_test.test | RUN | 0.256288 | 0.916053 | 2.334614 | 0.001487 | 0.001552 | 0.001423 |
| add_const_test.test | RUN | 0.259236 | 0.945675 | 2.339888 | 0.001451 | 0.001557 | 0.001335 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.102486 | 0.247263 | 0.340121 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.101965 | 0.251449 | 0.355546 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.097986 | 0.228290 | 0.338524 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.096690 | 0.230200 | 0.346460 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.096457 | 0.233984 | 0.328910 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.098124 | 0.227111 | 0.329589 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.099320 | 0.236077 | 0.299420 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.100153 | 0.203475 | 0.323380 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.096244 | 0.220069 | 0.314348 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.101269 | 0.219254 | 0.329035 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.098773 | 0.230676 | 0.326743 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.099547 | 0.241121 | 0.321449 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.098988 | 0.233984 | 0.326235 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.099877 | 0.239458 | 0.332406 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.098567 | 0.233685 | 0.311605 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.098365 | 0.244759 | 0.318142 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.097240 | 0.242603 | 0.317508 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.099607 | 0.233244 | 0.333331 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.099585 | 0.229476 | 0.322928 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.099643 | 0.242958 | 0.322190 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.098533 | 0.239003 | 0.324135 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.100049 | 0.240461 | 0.330524 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.155174 | 0.537548 | 0.934682 | 0.001173 | 0.001729 | 0.001529 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.149319 | 0.507415 | 0.911219 | 0.001528 | 0.001688 | 0.001588 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.151566 | 0.512134 | 0.936415 | 0.001516 | 0.001898 | 0.001517 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.155720 | 0.507502 | 0.931287 | 0.001129 | 0.001954 | 0.001207 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.097781 | 0.376004 | 0.534039 | 0.001229 | 0.001410 | 0.001188 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.007× | 1.004×, 1.010× | 0.987× |
| clang | 1.039× | 1.020×, 1.057× | 0.959× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44815881069).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.000968s | 0.000970s | 0.000967s | byte equality observed |
| add_cv_test.test | 10 | 0.000983s | 0.000976s | 0.000967s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.000964s | 0.000966s | 0.000983s | byte equality observed |
| add_pointer_test.test | 10 | 0.000988s | 0.001014s | 0.000981s | byte equality observed |
| add_reference_test.test | 10 | 0.000989s | 0.000972s | 0.000965s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.000978s | 0.000990s | 0.000964s | byte equality observed |
| add_volatile_test.test | 10 | 0.001013s | 0.000978s | 0.000962s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.001072s | 0.001086s | 0.001050s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.000991s | 0.000962s | 0.001001s | byte equality observed |
| aligned_storage_test.test | 10 | 0.001070s | 0.001080s | 0.001057s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.000992s | 0.000989s | 0.000963s | byte equality observed |
| alignment_of_test.test | 10 | 0.000977s | 0.000974s | 0.000992s | byte equality observed |
| common_type_2_test.test | 10 | 0.000951s | 0.001021s | 0.000980s | byte equality observed |
| common_type_3_test.test | 10 | 0.000979s | 0.000974s | 0.000973s | byte equality observed |
| common_type_4_test.test | 10 | 0.000973s | 0.000982s | 0.000950s | byte equality observed |
| common_type_5_test.test | 10 | 0.000983s | 0.000985s | 0.000971s | byte equality observed |
| common_type_6_test.test | 10 | 0.000984s | 0.000979s | 0.000989s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.000988s | 0.000984s | 0.000994s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.000958s | 0.000995s | 0.000969s | byte equality observed |
| common_type_test.test | 10 | 0.000967s | 0.000963s | 0.000983s | byte equality observed |
| conditional_test.test | 10 | 0.000984s | 0.001007s | 0.000974s | byte equality observed |
| conjunction_test.test | 10 | 0.000994s | 0.000989s | 0.001026s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.000982s | 0.000989s | 0.000953s | byte equality observed |
| copy_cv_test.test | 10 | 0.000990s | 0.000996s | 0.000959s | byte equality observed |
| copy_reference_test.test | 10 | 0.000981s | 0.000981s | 0.000964s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.000974s | 0.001004s | 0.000960s | byte equality observed |
| decay_test.test | 10 | 0.001004s | 0.001009s | 0.000982s | byte equality observed |
| detected_or_test.test | 10 | 0.000995s | 0.000970s | 0.000954s | byte equality observed |
| detected_test.test | 10 | 0.000985s | 0.000994s | 0.000966s | byte equality observed |
| disjunction_test.test | 10 | 0.000973s | 0.000975s | 0.000950s | byte equality observed |
| enable_if_test.test | 10 | 0.000973s | 0.000994s | 0.000970s | byte equality observed |
| extent_test.test | 10 | 0.000997s | 0.001004s | 0.000978s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.000963s | 0.001006s | 0.001012s | byte equality observed |
| function_traits_test.test | 10 | 0.000973s | 0.000954s | 0.000979s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000998s | 0.000973s | 0.000996s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.000969s | 0.001032s | 0.000992s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.000963s | 0.001004s | 0.000957s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.000998s | 0.000983s | 0.000992s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.000980s | 0.000978s | 0.000970s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.000995s | 0.001013s | 0.000982s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.000994s | 0.001016s | 0.000964s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.000988s | 0.001004s | 0.001000s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.000983s | 0.000983s | 0.000978s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.000967s | 0.001014s | 0.000993s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.000977s | 0.000966s | 0.000956s | byte equality observed |
| has_bit_and_test.test | 10 | 0.000980s | 0.000982s | 0.000946s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.001000s | 0.000990s | 0.001000s | byte equality observed |
| has_bit_or_test.test | 10 | 0.001000s | 0.000983s | 0.000957s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.000984s | 0.001041s | 0.000967s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.000963s | 0.000969s | 0.000968s | byte equality observed |
| has_complement_test.test | 10 | 0.000992s | 0.000993s | 0.000960s | byte equality observed |
| has_dereference_test.test | 10 | 0.000996s | 0.001020s | 0.001001s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.000988s | 0.000969s | 0.000960s | byte equality observed |
| has_divides_test.test | 10 | 0.000983s | 0.000988s | 0.000993s | byte equality observed |
| has_equal_to_test.test | 10 | 0.000971s | 0.001012s | 0.000954s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.000982s | 0.000974s | 0.000952s | byte equality observed |
| has_greater_test.test | 10 | 0.000964s | 0.001005s | 0.000956s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.000979s | 0.000983s | 0.000987s | byte equality observed |
| has_left_shift_test.test | 10 | 0.000993s | 0.000997s | 0.000970s | byte equality observed |
| has_less_equal_test.test | 10 | 0.000997s | 0.000994s | 0.000958s | byte equality observed |
| has_less_test.test | 10 | 0.000971s | 0.000952s | 0.000964s | byte equality observed |
| has_logical_and_test.test | 10 | 0.001002s | 0.001004s | 0.000955s | byte equality observed |
| has_logical_not_test.test | 10 | 0.000962s | 0.000989s | 0.000954s | byte equality observed |
| has_logical_or_test.test | 10 | 0.000982s | 0.000990s | 0.000958s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.000984s | 0.000982s | 0.000979s | byte equality observed |
| has_minus_test.test | 10 | 0.000997s | 0.000981s | 0.000962s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.000983s | 0.001002s | 0.000994s | byte equality observed |
| has_modulus_test.test | 10 | 0.000981s | 0.000971s | 0.000969s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.000991s | 0.001053s | 0.000990s | byte equality observed |
| has_multiplies_test.test | 10 | 0.000962s | 0.001004s | 0.000966s | byte equality observed |
| has_negate_test.test | 10 | 0.000982s | 0.000986s | 0.000966s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.000978s | 0.001017s | 0.000977s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.000990s | 0.001032s | 0.000998s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.000983s | 0.001039s | 0.000974s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.000988s | 0.001023s | 0.000957s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.000977s | 0.001005s | 0.000973s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.001005s | 0.000969s | 0.000971s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.000989s | 0.001014s | 0.000998s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.000973s | 0.000972s | 0.000998s | byte equality observed |
| has_operator_new_test.test | 10 | 0.000975s | 0.000984s | 0.000970s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.000958s | 0.001007s | 0.000998s | byte equality observed |
| has_plus_test.test | 10 | 0.000974s | 0.001000s | 0.000979s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.000995s | 0.001009s | 0.000973s | byte equality observed |
| has_post_increment_test.test | 10 | 0.000983s | 0.000988s | 0.000977s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.000979s | 0.000966s | 0.000979s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.001008s | 0.000994s | 0.000975s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.000965s | 0.000991s | 0.000950s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.000999s | 0.000975s | 0.000979s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.000962s | 0.000971s | 0.000977s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.000983s | 0.000980s | 0.000995s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.001010s | 0.001006s | 0.000964s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.000957s | 0.001006s | 0.000979s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.000983s | 0.000984s | 0.000969s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.000973s | 0.000953s | 0.000966s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.000983s | 0.001001s | 0.000969s | byte equality observed |
| has_right_shift_test.test | 10 | 0.000986s | 0.000975s | 0.000976s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.001026s | 0.001077s | 0.001025s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.001017s | 0.001012s | 0.001069s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.001030s | 0.001089s | 0.001050s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.000967s | 0.001036s | 0.000983s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.000951s | 0.001067s | 0.000968s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.000975s | 0.001090s | 0.000950s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.001001s | 0.001056s | 0.000959s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.000999s | 0.001067s | 0.000973s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.001009s | 0.001048s | 0.000950s | byte equality observed |
| integral_constant_test.test | 10 | 0.000452s | 0.000480s | 0.000973s | byte equality observed |
| is_abstract_test.test | 10 | 0.000975s | 0.001058s | 0.000969s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.000991s | 0.001074s | 0.000958s | byte equality observed |
| is_array_test.test | 10 | 0.000991s | 0.001084s | 0.000978s | byte equality observed |
| is_assignable_test.test | 10 | 0.000974s | 0.001097s | 0.001002s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.001008s | 0.001064s | 0.000965s | byte equality observed |
| is_base_of_test.test | 10 | 0.000954s | 0.001033s | 0.000983s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.001002s | 0.001057s | 0.000958s | byte equality observed |
| is_class_test.test | 10 | 0.001024s | 0.001072s | 0.000966s | byte equality observed |
| is_complete_test.test | 10 | 0.001012s | 0.001057s | 0.001001s | byte equality observed |
| is_complex_test.test | 10 | 0.000977s | 0.001071s | 0.000954s | byte equality observed |
| is_compound_test.test | 10 | 0.001027s | 0.001031s | 0.000953s | byte equality observed |
| is_const_test.test | 10 | 0.000961s | 0.001073s | 0.000994s | byte equality observed |
| is_constructible_test.test | 10 | 0.000997s | 0.001050s | 0.000962s | byte equality observed |
| is_convertible_test.test | 10 | 0.001007s | 0.001059s | 0.000983s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.000975s | 0.001070s | 0.000945s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.000987s | 0.001054s | 0.000967s | byte equality observed |
| is_default_constr_test.test | 10 | 0.000990s | 0.001033s | 0.001034s | byte equality observed |
| is_destructible_test.test | 10 | 0.000979s | 0.001045s | 0.001044s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.001022s | 0.001077s | 0.001061s | byte equality observed |
| is_detected_test.test | 10 | 0.001010s | 0.001053s | 0.001053s | byte equality observed |
| is_empty_test.test | 10 | 0.001029s | 0.001091s | 0.001034s | byte equality observed |
| is_enum_test.test | 10 | 0.001017s | 0.001064s | 0.001070s | byte equality observed |
| is_final_test.test | 10 | 0.001001s | 0.001087s | 0.001054s | byte equality observed |
| is_float_test.test | 10 | 0.001010s | 0.001080s | 0.001108s | byte equality observed |
| is_floating_point_test.test | 10 | 0.001051s | 0.001067s | 0.001112s | byte equality observed |
| is_function_test.test | 10 | 0.001018s | 0.001049s | 0.001094s | byte equality observed |
| is_fundamental_test.test | 10 | 0.001001s | 0.001064s | 0.001120s | byte equality observed |
| is_integral_test.test | 10 | 0.001041s | 0.001047s | 0.001102s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.001034s | 0.001037s | 0.001108s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.001064s | 0.001090s | 0.001105s | byte equality observed |
| is_member_func_test.test | 10 | 0.001072s | 0.001098s | 0.001128s | byte equality observed |
| is_member_obj_test.test | 10 | 0.001046s | 0.001077s | 0.001128s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.001068s | 0.001075s | 0.001121s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.001069s | 0.001115s | 0.001107s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.001045s | 0.001110s | 0.001132s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.001038s | 0.001108s | 0.001111s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.001025s | 0.001119s | 0.001130s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.001051s | 0.001131s | 0.001117s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.001055s | 0.001131s | 0.001115s | byte equality observed |
| is_object_test.test | 10 | 0.001055s | 0.001124s | 0.001123s | byte equality observed |
| is_pod_test.test | 10 | 0.001044s | 0.001115s | 0.001105s | byte equality observed |
| is_pointer_test.test | 10 | 0.001079s | 0.001104s | 0.001133s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.001081s | 0.001132s | 0.001138s | byte equality observed |
| is_reference_test.test | 10 | 0.001052s | 0.001123s | 0.001125s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.001096s | 0.001135s | 0.001137s | byte equality observed |
| is_same_test.test | 10 | 0.001099s | 0.001134s | 0.001116s | byte equality observed |
| is_scalar_test.test | 10 | 0.001137s | 0.001129s | 0.001116s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.001109s | 0.001138s | 0.001105s | byte equality observed |
| is_signed_test.test | 10 | 0.001115s | 0.001123s | 0.001098s | byte equality observed |
| is_stateless_test.test | 10 | 0.001103s | 0.001145s | 0.001120s | byte equality observed |
| is_swappable_test.test | 10 | 0.001098s | 0.001115s | 0.001122s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.001140s | 0.001177s | 0.001171s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.001115s | 0.001120s | 0.001126s | byte equality observed |
| is_union_test.test | 10 | 0.001108s | 0.001115s | 0.001145s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.001097s | 0.001140s | 0.001140s | byte equality observed |
| is_unsigned_test.test | 10 | 0.001096s | 0.001130s | 0.001127s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.001121s | 0.001123s | 0.001136s | byte equality observed |
| is_void_test.test | 10 | 0.001130s | 0.001136s | 0.001130s | byte equality observed |
| is_volatile_test.test | 10 | 0.001124s | 0.001111s | 0.001129s | byte equality observed |
| make_signed_test.test | 10 | 0.001127s | 0.001111s | 0.001112s | byte equality observed |
| make_unsigned_test.test | 10 | 0.001130s | 0.001126s | 0.001130s | byte equality observed |
| make_void_test.test | 10 | 0.001134s | 0.001149s | 0.001115s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000503s | 0.000502s | 0.001118s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000505s | 0.000507s | 0.001136s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000506s | 0.000500s | 0.001117s | byte equality observed |
| negation_test.test | 10 | 0.001160s | 0.001172s | 0.001129s | byte equality observed |
| promote_basic_test.test | 10 | 0.000509s | 0.000512s | 0.001126s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000515s | 0.000500s | 0.001134s | byte equality observed |
| promote_enum_test.test | 10 | 0.000502s | 0.000506s | 0.001138s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000507s | 0.000504s | 0.001149s | byte equality observed |
| rank_test.test | 10 | 0.001147s | 0.001143s | 0.001120s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.001125s | 0.001147s | 0.001137s | byte equality observed |
| remove_bounds_test.test | 10 | 0.001126s | 0.001134s | 0.001128s | byte equality observed |
| remove_const_test.test | 10 | 0.001135s | 0.001105s | 0.001122s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.001118s | 0.001144s | 0.001152s | byte equality observed |
| remove_cv_test.test | 10 | 0.001147s | 0.001148s | 0.001151s | byte equality observed |
| remove_extent_test.test | 10 | 0.001130s | 0.001109s | 0.001130s | byte equality observed |
| remove_pointer_test.test | 10 | 0.001136s | 0.001118s | 0.001112s | byte equality observed |
| remove_reference_test.test | 10 | 0.001112s | 0.001101s | 0.001135s | byte equality observed |
| remove_volatile_test.test | 10 | 0.001122s | 0.001112s | 0.001120s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.001114s | 0.001133s | 0.001133s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.001124s | 0.001142s | 0.001128s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.001119s | 0.001126s | 0.001153s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.001114s | 0.001137s | 0.001133s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.001132s | 0.001105s | 0.001111s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.001130s | 0.001138s | 0.001150s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.001129s | 0.001136s | 0.001139s | byte equality observed |
| type_identity_test.test | 10 | 0.001128s | 0.001141s | 0.001124s | byte equality observed |
| type_traits_test.test | 10 | 0.000504s | 0.000506s | 0.001135s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.001252s | 0.001246s | 0.001237s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44815881069).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
