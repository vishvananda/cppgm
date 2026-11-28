# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.100842 | 0.281654 | 0.386932 | 0.001208 | 0.001282 | 0.001081 |
| type_traits_test.test | RUN | 0.140067 | 0.283203 | 0.373516 | 0.000440 | 0.000553 | 0.001138 |
| type_identity_test.test | RUN | 0.255427 | 0.984458 | 1.957125 | 0.001296 | 0.001399 | 0.001268 |
| tricky_rvalue_test.test | RUN | 0.092081 | 0.226812 | 0.299048 | 0.001305 | 0.001356 | 0.001134 |
| tricky_partial_spec_test.test | RUN | 0.105268 | 0.319123 | 0.488046 | 0.001201 | 0.001548 | 0.001318 |
| tricky_is_enum_test.test | RUN | 0.083615 | 0.214610 | 0.271243 | 0.001354 | 0.001282 | 0.001232 |
| tricky_incomplete_type_test.test | RUN | 0.141419 | 0.327533 | 0.442769 | 0.001228 | 0.001347 | 0.001116 |
| tricky_function_type_test.test | RUN | 0.116631 | 0.335583 | 0.520161 | 0.001359 | 0.001403 | 0.001193 |
| tricky_add_pointer_test.test | RUN | 0.168784 | 0.581963 | 1.149015 | 0.001407 | 0.001440 | 0.001282 |
| tricky_abstract_type_test.test | RUN | 0.089226 | 0.220515 | 0.288949 | 0.001622 | 0.001320 | 0.001257 |
| remove_volatile_test.test | RUN | 0.225978 | 0.843918 | 1.729411 | 0.001221 | 0.001531 | 0.001232 |
| remove_reference_test.test | RUN | 0.235883 | 0.901544 | 1.872197 | 0.001384 | 0.001424 | 0.001333 |
| remove_pointer_test.test | RUN | 0.245425 | 0.937821 | 1.935306 | 0.001458 | 0.001359 | 0.001314 |
| remove_extent_test.test | RUN | 0.229111 | 0.897525 | 1.878141 | 0.001326 | 0.001455 | 0.001274 |
| remove_cv_test.test | RUN | 0.237884 | 0.898875 | 1.845799 | 0.001352 | 0.001519 | 0.001256 |
| remove_cv_ref_test.test | RUN | 0.494193 | 2.229602 | 4.496047 | 0.001480 | 0.001241 | 0.001235 |
| remove_const_test.test | RUN | 0.229527 | 0.840112 | 1.771996 | 0.001518 | 0.001511 | 0.001583 |
| remove_bounds_test.test | RUN | 0.231002 | 0.880937 | 1.868199 | 0.001378 | 0.001388 | 0.001145 |
| remove_all_extents_test.test | RUN | 0.232944 | 0.911894 | 1.790649 | 0.001222 | 0.000961 | 0.001231 |
| rank_test.test | RUN | 0.092829 | 0.224974 | 0.305322 | 0.001195 | 0.001424 | 0.001246 |
| promote_mpl_test.test | RUN | 0.080367 | 0.193548 | 0.220170 | 0.000509 | 0.000535 | 0.001222 |
| promote_enum_test.test | RUN | 0.017717 | 0.048912 | 0.055845 | 0.000491 | 0.000612 | 0.001302 |
| promote_enum_msvc_bug_test.test | RUN | 0.016071 | 0.040121 | 0.046094 | 0.000496 | 0.000502 | 0.001156 |
| promote_basic_test.test | RUN | 0.019476 | 0.056611 | 0.057390 | 0.000508 | 0.000586 | 0.001220 |
| negation_test.test | RUN | 0.084305 | 0.219389 | 0.278005 | 0.001269 | 0.001272 | 0.001155 |
| mpl_interop_test3.test | RUN | 0.071863 | 0.184925 | 0.193606 | 0.000479 | 0.000543 | 0.001144 |
| mpl_interop_test2.test | RUN | 0.026423 | 0.052708 | 0.055742 | 0.000413 | 0.000544 | 0.001167 |
| mpl_interop_test1.test | RUN | 0.014498 | 0.039303 | 0.039814 | 0.000614 | 0.000500 | 0.001290 |
| make_void_test.test | RUN | 0.091993 | 0.224579 | 0.295066 | 0.001498 | 0.001592 | 0.001294 |
| make_unsigned_test.test | RUN | 0.109090 | 0.296003 | 0.423481 | 0.001362 | 0.001646 | 0.001151 |
| make_signed_test.test | RUN | 0.106922 | 0.290796 | 0.409497 | 0.001327 | 0.001261 | 0.001104 |
| is_volatile_test.test | RUN | 0.097270 | 0.254850 | 0.343292 | 0.001128 | 0.001234 | 0.001393 |
| is_void_test.test | RUN | 0.093389 | 0.234901 | 0.327080 | 0.001302 | 0.001575 | 0.001237 |
| is_virtual_base_of_test.test | RUN | 0.104403 | 0.296928 | 0.436032 | 0.001227 | 0.001399 | 0.001132 |
| is_unsigned_test.test | RUN | 0.090698 | 0.240657 | 0.327933 | 0.001422 | 0.001234 | 0.001293 |
| is_unscoped_enum_test.test | RUN | 0.096633 | 0.217613 | 0.282618 | 0.001270 | 0.001333 | 0.001316 |
| is_union_test.test | RUN | 0.099333 | 0.275078 | 0.404540 | 0.001096 | 0.001287 | 0.001216 |
| is_unbounded_array_test.test | RUN | 0.090375 | 0.233127 | 0.315466 | 0.001298 | 0.001431 | 0.001422 |
| is_trivially_copyable_test.test | RUN | 0.146460 | 0.490977 | 0.794230 | 0.001359 | 0.001416 | 0.001238 |
| is_swappable_test.test | RUN | 0.121738 | 0.361892 | 0.584166 | 0.001274 | 0.001290 | 0.001310 |
| is_stateless_test.test | RUN | 0.133861 | 0.423860 | 0.653268 | 0.001217 | 0.001163 | 0.001401 |
| is_signed_test.test | RUN | 0.092458 | 0.245168 | 0.326276 | 0.001306 | 0.001240 | 0.001286 |
| is_scoped_enum_test.test | RUN | 0.090552 | 0.218442 | 0.284113 | 0.001366 | 0.001301 | 0.001360 |
| is_scalar_test.test | RUN | 0.119155 | 0.384013 | 0.590139 | 0.001348 | 0.001621 | 0.001195 |
| is_same_test.test | RUN | 0.090243 | 0.232799 | 0.309139 | 0.001271 | 0.001318 | 0.001269 |
| is_rvalue_reference_test.test | RUN | 0.094759 | 0.262130 | 0.359321 | 0.001266 | 0.001300 | 0.001568 |
| is_reference_test.test | RUN | 0.097459 | 0.260886 | 0.368402 | 0.001411 | 0.001367 | 0.001284 |
| is_polymorphic_test.test | RUN | 0.096449 | 0.272866 | 0.394210 | 0.001196 | 0.001269 | 0.001640 |
| is_pointer_test.test | RUN | 0.094223 | 0.267580 | 0.385151 | 0.001046 | 0.001382 | 0.001163 |
| is_pod_test.test | RUN | 0.128512 | 0.431846 | 0.697941 | 0.001198 | 0.001570 | 0.001326 |
| is_object_test.test | RUN | 0.090512 | 0.225530 | 0.295566 | 0.001177 | 0.001205 | 0.001199 |
| is_nothrow_swappable_test.test | RUN | 0.130838 | 0.405150 | 0.654418 | 0.001327 | 0.001604 | 0.001427 |
| is_nothrow_move_constructible_test.test | RUN | 0.121839 | 0.422761 | 0.645186 | 0.001197 | 0.001413 | 0.001172 |
| is_nothrow_move_assignable_test.test | RUN | 0.127958 | 0.435809 | 0.667836 | 0.001218 | 0.001437 | 0.001320 |
| is_noncopyable_test.test | RUN | 0.095146 | 0.228027 | 0.308502 | 0.001346 | 0.001244 | 0.001232 |
| is_member_pointer_test.test | RUN | 0.094392 | 0.233790 | 0.300631 | 0.001144 | 0.001669 | 0.001403 |
| is_member_obj_test.test | RUN | 0.091069 | 0.234543 | 0.310029 | 0.001352 | 0.001361 | 0.001229 |
| is_member_func_test.test | RUN | 0.098705 | 0.247202 | 0.343904 | 0.001390 | 0.001297 | 0.001215 |
| is_lvalue_reference_test.test | RUN | 0.096036 | 0.262171 | 0.370669 | 0.001272 | 0.001149 | 0.001193 |
| is_list_constructible_test.test | RUN | 0.110362 | 0.311728 | 0.409769 | 0.001160 | 0.001297 | 0.001395 |
| is_integral_test.test | RUN | 0.112049 | 0.374090 | 0.558798 | 0.001420 | 0.001325 | 0.001354 |
| is_fundamental_test.test | RUN | 0.111432 | 0.373455 | 0.576811 | 0.001062 | 0.001210 | 0.001198 |
| is_function_test.test | RUN | 0.091649 | 0.251414 | 0.337042 | 0.001183 | 0.001199 | 0.001217 |
| is_floating_point_test.test | RUN | 0.098789 | 0.268624 | 0.366266 | 0.001431 | 0.001260 | 0.001160 |
| is_float_test.test | RUN | 0.099134 | 0.267752 | 0.372789 | 0.001339 | 0.001606 | 0.001164 |
| is_final_test.test | RUN | 0.096285 | 0.266779 | 0.390620 | 0.001131 | 0.001466 | 0.001254 |
| is_enum_test.test | RUN | 0.088510 | 0.228265 | 0.298038 | 0.001338 | 0.001348 | 0.001401 |
| is_empty_test.test | RUN | 0.099359 | 0.243516 | 0.341068 | 0.001400 | 0.001632 | 0.001310 |
| is_detected_test.test | RUN | 0.090474 | 0.204086 | 0.271918 | 0.001152 | 0.001154 | 0.001266 |
| is_detected_exact_test.test | RUN | 0.090731 | 0.205081 | 0.282218 | 0.001289 | 0.001272 | 0.001393 |
| is_destructible_test.test | RUN | 0.119628 | 0.411326 | 0.646685 | 0.001497 | 0.001483 | 0.001315 |
| is_default_constr_test.test | RUN | 0.126937 | 0.426514 | 0.656817 | 0.001572 | 0.001477 | 0.001436 |
| is_copy_constructible_test.test | RUN | 0.132613 | 0.451833 | 0.710695 | 0.001272 | 0.001229 | 0.001456 |
| is_copy_assignable_test.test | RUN | 0.134141 | 0.441291 | 0.703359 | 0.001246 | 0.001206 | 0.001176 |
| is_convertible_test.test | RUN | 0.123455 | 0.396673 | 0.574070 | 0.001254 | 0.001554 | 0.001238 |
| is_constructible_test.test | RUN | 0.104127 | 0.287107 | 0.405316 | 0.001128 | 0.001498 | 0.001397 |
| is_const_test.test | RUN | 0.096155 | 0.247739 | 0.335141 | 0.001382 | 0.001310 | 0.001313 |
| is_compound_test.test | RUN | 0.090843 | 0.220530 | 0.282352 | 0.001083 | 0.001266 | 0.001147 |
| is_complex_test.test | RUN | 0.122193 | 0.284476 | 0.383148 | 0.001009 | 0.001541 | 0.001308 |
| is_complete_test.test | RUN | 0.106326 | 0.293309 | 0.439895 | 0.001249 | 0.001224 | 0.001270 |
| is_class_test.test | RUN | 0.098597 | 0.257402 | 0.367995 | 0.001398 | 0.001278 | 0.001069 |
| is_bounded_array_test.test | RUN | 0.091915 | 0.233883 | 0.308373 | 0.001298 | 0.001369 | 0.001155 |
| is_base_of_test.test | RUN | 0.094508 | 0.255492 | 0.348232 | 0.001320 | 0.001379 | 0.001465 |
| is_base_and_derived_test.test | RUN | 0.096722 | 0.247807 | 0.352115 | 0.001200 | 0.001305 | 0.001201 |
| is_assignable_test.test | RUN | 0.116049 | 0.362487 | 0.549104 | 0.001353 | 0.001360 | 0.001357 |
| is_array_test.test | RUN | 0.093008 | 0.245584 | 0.341816 | 0.001316 | 0.001267 | 0.001108 |
| is_arithmetic_test.test | RUN | 0.111874 | 0.364176 | 0.553644 | 0.001312 | 0.001470 | 0.001352 |
| is_abstract_test.test | RUN | 0.200142 | 0.976127 | 2.086571 | 0.001193 | 0.001504 | 0.001234 |
| integral_constant_test.test | RUN | 0.014256 | 0.036752 | 0.043832 | 0.000608 | 0.000597 | 0.001249 |
| has_virtual_destructor_test.test | RUN | 0.103361 | 0.285037 | 0.396363 | 0.001282 | 0.001415 | 0.001433 |
| has_unary_plus_test.test | RUN | 0.188271 | 1.037587 | 1.545514 | 0.001836 | 0.001439 | 0.001493 |
| has_unary_minus_test.test | RUN | 0.186848 | 1.031146 | 1.458348 | 0.001178 | 0.001525 | 0.001237 |
| has_trivial_move_constructor_test.test | RUN | 0.128888 | 0.414692 | 0.712137 | 0.001165 | 0.001326 | 0.001341 |
| has_trivial_move_assign_test.test | RUN | 0.129932 | 0.419507 | 0.663453 | 0.001240 | 0.001417 | 0.001546 |
| has_trivial_destructor_test.test | RUN | 0.124943 | 0.431939 | 0.701484 | 0.001473 | 0.001198 | 0.001248 |
| has_trivial_copy_test.test | RUN | 0.129291 | 0.453237 | 0.708633 | 0.001504 | 0.001391 | 0.001257 |
| has_trivial_constr_test.test | RUN | 0.132927 | 0.457763 | 0.710180 | 0.001278 | 0.001543 | 0.001151 |
| has_trivial_assign_test.test | RUN | 0.131741 | 0.453007 | 0.701755 | 0.001436 | 0.001491 | 0.001467 |
| has_right_shift_test.test | RUN | 0.184040 | 0.819369 | 1.555414 | 0.001226 | 0.001443 | 0.001172 |
| has_right_shift_assign_test.test | RUN | 0.186350 | 0.806933 | 1.472952 | 0.001200 | 0.001509 | 0.001107 |
| has_prefix_classes3_test.test | RUN | 0.137422 | 0.461233 | 0.752251 | 0.001272 | 0.001600 | 0.001273 |
| has_prefix_classes2_test.test | RUN | 0.142101 | 0.454022 | 0.750918 | 0.001274 | 0.001342 | 0.001428 |
| has_prefix_classes1_test.test | RUN | 0.138683 | 0.463443 | 0.698812 | 0.001321 | 0.001462 | 0.001312 |
| has_prefix_classes0_test.test | RUN | 0.138378 | 0.467398 | 0.737502 | 0.001192 | 0.001369 | 0.001374 |
| has_pre_increment_test.test | RUN | 0.186766 | 1.050477 | 1.452021 | 0.001462 | 0.001274 | 0.001229 |
| has_pre_decrement_test.test | RUN | 0.186544 | 1.079301 | 1.459518 | 0.001281 | 0.001292 | 0.001201 |
| has_postfix_classes3_test.test | RUN | 0.138494 | 0.459918 | 0.756254 | 0.001180 | 0.001594 | 0.001288 |
| has_postfix_classes2_test.test | RUN | 0.135085 | 0.457058 | 0.743781 | 0.001214 | 0.001266 | 0.001387 |
| has_postfix_classes1_test.test | RUN | 0.138303 | 0.461100 | 0.722578 | 0.001355 | 0.001504 | 0.001382 |
| has_postfix_classes0_test.test | RUN | 0.136953 | 0.464487 | 0.767350 | 0.001247 | 0.001248 | 0.001453 |
| has_post_increment_test.test | RUN | 0.184709 | 1.052038 | 1.479518 | 0.001317 | 0.001504 | 0.001334 |
| has_post_decrement_test.test | RUN | 0.179448 | 1.059270 | 1.508276 | 0.001249 | 0.001289 | 0.001271 |
| has_plus_test.test | RUN | 0.192355 | 0.794692 | 1.467316 | 0.001311 | 0.001410 | 0.001382 |
| has_plus_assign_test.test | RUN | 0.194556 | 0.791977 | 1.481931 | 0.001225 | 0.001252 | 0.001322 |
| has_operator_new_test.test | RUN | 0.125380 | 0.390173 | 0.669463 | 0.001197 | 0.001329 | 0.001485 |
| has_nothrow_destructor_test.test | RUN | 0.129414 | 0.451030 | 0.723476 | 0.001231 | 0.001572 | 0.001440 |
| has_nothrow_copy_test.test | RUN | 0.126933 | 0.431984 | 0.673397 | 0.001217 | 0.001413 | 0.001468 |
| has_nothrow_constr_test.test | RUN | 0.121109 | 0.418010 | 0.689687 | 0.001145 | 0.001283 | 0.001417 |
| has_nothrow_assign_test.test | RUN | 0.120690 | 0.413895 | 0.682574 | 0.001774 | 0.001477 | 0.001219 |
| has_not_equal_to_test.test | RUN | 0.188259 | 1.011763 | 1.490141 | 0.001290 | 0.001311 | 0.001522 |
| has_negate_test.test | RUN | 0.182443 | 0.767748 | 1.407218 | 0.001709 | 0.001138 | 0.001405 |
| has_multiplies_test.test | RUN | 0.188036 | 0.782843 | 1.508390 | 0.001450 | 0.001064 | 0.001225 |
| has_multiplies_assign_test.test | RUN | 0.198294 | 0.781788 | 1.495276 | 0.001324 | 0.001504 | 0.001085 |
| has_modulus_test.test | RUN | 0.200625 | 0.789477 | 1.473028 | 0.001265 | 0.001099 | 0.001442 |
| has_modulus_assign_test.test | RUN | 0.196411 | 0.782527 | 1.465016 | 0.001542 | 0.001181 | 0.001220 |
| has_minus_test.test | RUN | 0.200646 | 0.785885 | 1.533743 | 0.001300 | 0.001244 | 0.001262 |
| has_minus_assign_test.test | RUN | 0.196282 | 0.792364 | 1.532506 | 0.001284 | 0.001490 | 0.001079 |
| has_logical_or_test.test | RUN | 0.193602 | 0.799186 | 1.496371 | 0.001320 | 0.001009 | 0.001712 |
| has_logical_not_test.test | RUN | 0.183087 | 0.763917 | 1.458140 | 0.001418 | 0.001562 | 0.001444 |
| has_logical_and_test.test | RUN | 0.187860 | 0.791044 | 1.559466 | 0.001199 | 0.001101 | 0.001371 |
| has_less_test.test | RUN | 0.186886 | 0.996914 | 1.554755 | 0.001366 | 0.001471 | 0.001422 |
| has_less_equal_test.test | RUN | 0.187275 | 1.003432 | 1.526988 | 0.001204 | 0.001624 | 0.001373 |
| has_left_shift_test.test | RUN | 0.205650 | 0.993812 | 1.853385 | 0.001531 | 0.001227 | 0.001462 |
| has_left_shift_assign_test.test | RUN | 0.190113 | 0.788410 | 1.511490 | 0.001188 | 0.001637 | 0.001422 |
| has_greater_test.test | RUN | 0.188186 | 1.007892 | 1.519476 | 0.001558 | 0.001515 | 0.001083 |
| has_greater_equal_test.test | RUN | 0.187680 | 0.998239 | 1.479126 | 0.001159 | 0.001338 | 0.001354 |
| has_equal_to_test.test | RUN | 0.187799 | 1.002576 | 1.473159 | 0.001296 | 0.001539 | 0.001426 |
| has_divides_test.test | RUN | 0.182455 | 0.790787 | 1.531520 | 0.001232 | 0.001486 | 0.001143 |
| has_divides_assign_test.test | RUN | 0.188515 | 0.797785 | 1.527997 | 0.001797 | 0.001380 | 0.001046 |
| has_dereference_test.test | RUN | 0.185298 | 0.789545 | 1.405538 | 0.001515 | 0.001357 | 0.001311 |
| has_complement_test.test | RUN | 0.186231 | 0.998514 | 1.448689 | 0.001619 | 0.001214 | 0.001712 |
| has_bit_xor_test.test | RUN | 0.188218 | 0.799459 | 1.518474 | 0.001323 | 0.001418 | 0.001222 |
| has_bit_xor_assign_test.test | RUN | 0.186823 | 0.786132 | 1.518807 | 0.001327 | 0.001481 | 0.001471 |
| has_bit_or_test.test | RUN | 0.186832 | 0.789113 | 1.469258 | 0.001227 | 0.001423 | 0.001522 |
| has_bit_or_assign_test.test | RUN | 0.187203 | 0.795043 | 1.479862 | 0.001303 | 0.001244 | 0.001544 |
| has_bit_and_test.test | RUN | 0.191739 | 0.794110 | 1.549966 | 0.001222 | 0.001307 | 0.001230 |
| has_bit_and_assign_test.test | RUN | 0.188778 | 0.783698 | 1.542384 | 0.001546 | 0.001391 | 0.001235 |
| has_binary_classes9_test.test | RUN | 0.205610 | 0.945594 | 1.688208 | 0.001295 | 0.001371 | 0.001452 |
| has_binary_classes8_test.test | RUN | 0.203751 | 0.970261 | 1.680702 | 0.001248 | 0.001280 | 0.001425 |
| has_binary_classes7_test.test | RUN | 0.207802 | 0.923194 | 1.742950 | 0.001309 | 0.001485 | 0.001125 |
| has_binary_classes6_test.test | RUN | 0.207049 | 0.898357 | 1.740945 | 0.001452 | 0.001501 | 0.001518 |
| has_binary_classes5_test.test | RUN | 0.204613 | 0.924152 | 1.710082 | 0.001290 | 0.001466 | 0.001600 |
| has_binary_classes4_test.test | RUN | 0.203534 | 0.943608 | 1.699843 | 0.001202 | 0.001347 | 0.001421 |
| has_binary_classes3_test.test | RUN | 0.203913 | 0.960105 | 1.757784 | 0.001295 | 0.001376 | 0.001402 |
| has_binary_classes2_test.test | RUN | 0.206904 | 0.936151 | 1.742919 | 0.001360 | 0.001464 | 0.001486 |
| has_binary_classes1_test.test | RUN | 0.204512 | 0.936473 | 1.703721 | 0.001136 | 0.001487 | 0.001466 |
| has_binary_classes0_test.test | RUN | 0.208135 | 0.967340 | 1.683691 | 0.001306 | 0.001282 | 0.001405 |
| function_traits_test.test | RUN | 0.096682 | 0.244218 | 0.356301 | 0.001058 | 0.001467 | 0.001211 |
| floating_point_promotion_test.test | RUN | 0.092507 | 0.236726 | 0.336308 | 0.001241 | 0.001621 | 0.001366 |
| extent_test.test | RUN | 0.094685 | 0.247817 | 0.360871 | 0.001092 | 0.001346 | 0.001495 |
| enable_if_test.test | RUN | 0.087301 | 0.212168 | 0.282314 | 0.001139 | 0.001660 | 0.001607 |
| disjunction_test.test | RUN | 0.090894 | 0.214023 | 0.296500 | 0.001147 | 0.001143 | 0.001585 |
| detected_test.test | RUN | 0.088479 | 0.201639 | 0.269603 | 0.001278 | 0.001261 | 0.001420 |
| detected_or_test.test | RUN | 0.093034 | 0.220166 | 0.301170 | 0.001244 | 0.001293 | 0.001433 |
| decay_test.test | RUN | 0.229082 | 0.833148 | 1.637369 | 0.001260 | 0.001329 | 0.001438 |
| cxx14_aliases_test.test | RUN | 0.139114 | 0.317279 | 0.452117 | 0.001332 | 0.001368 | 0.001260 |
| copy_reference_test.test | RUN | 0.091280 | 0.219523 | 0.289180 | 0.000916 | 0.001324 | 0.001225 |
| copy_cv_test.test | RUN | 0.096647 | 0.228098 | 0.329285 | 0.001634 | 0.001403 | 0.001425 |
| copy_cv_ref_test.test | RUN | 0.132127 | 0.374092 | 0.678496 | 0.001281 | 0.001349 | 0.001422 |
| conjunction_test.test | RUN | 0.091033 | 0.215615 | 0.302854 | 0.001456 | 0.001234 | 0.001417 |
| conditional_test.test | RUN | 0.089295 | 0.215552 | 0.297606 | 0.001216 | 0.001206 | 0.001095 |
| common_type_test.test | RUN | 0.120881 | 0.333290 | 0.566502 | 0.001409 | 0.001448 | 0.001388 |
| common_type_sfinae_test.test | RUN | 0.082803 | 0.204821 | 0.272219 | 0.001507 | 0.001268 | 0.001391 |
| common_type_sfinae2_test.test | RUN | 0.092486 | 0.220841 | 0.301773 | 0.001267 | 0.001304 | 0.001270 |
| common_type_6_test.test | RUN | 0.092922 | 0.221357 | 0.309143 | 0.001173 | 0.001300 | 0.001391 |
| common_type_5_test.test | RUN | 0.093385 | 0.221019 | 0.302649 | 0.001227 | 0.001493 | 0.001319 |
| common_type_4_test.test | RUN | 0.097502 | 0.243355 | 0.353531 | 0.001228 | 0.001210 | 0.001558 |
| common_type_3_test.test | RUN | 0.084823 | 0.200472 | 0.267453 | 0.001412 | 0.001248 | 0.001491 |
| common_type_2_test.test | RUN | 0.119777 | 0.328722 | 0.552042 | 0.001176 | 0.001519 | 0.001469 |
| alignment_of_test.test | RUN | 0.097854 | 0.257463 | 0.372303 | 0.001222 | 0.001409 | 0.001420 |
| alignment_of_a2_test.test | RUN | 0.098366 | 0.264800 | 0.364437 | 0.001171 | 0.001110 | 0.001467 |
| aligned_storage_test.test | RUN | 0.097946 | 0.257889 | 0.339315 | 0.001462 | 0.001439 | 0.001405 |
| aligned_storage_empy_test.test | RUN | 0.111694 | 0.287244 | 0.444166 | 0.001229 | 0.001562 | 0.001317 |
| aligned_storage_a2_test.test | RUN | 0.099062 | 0.254001 | 0.333456 | 0.001424 | 0.001484 | 0.001583 |
| add_volatile_test.test | RUN | 0.202575 | 0.732254 | 1.519010 | 0.001242 | 0.001316 | 0.001141 |
| add_rvalue_reference_test.test | RUN | 0.228515 | 0.855296 | 1.753164 | 0.001474 | 0.001353 | 0.001393 |
| add_reference_test.test | RUN | 0.226764 | 0.806764 | 1.727282 | 0.001196 | 0.001516 | 0.001445 |
| add_pointer_test.test | RUN | 0.149457 | 0.456776 | 0.918116 | 0.001261 | 0.001170 | 0.001254 |
| add_lvalue_reference_test.test | RUN | 0.221977 | 0.804778 | 1.729452 | 0.001215 | 0.001576 | 0.001334 |
| add_cv_test.test | RUN | 0.209059 | 0.778737 | 1.640461 | 0.001215 | 0.001213 | 0.001356 |
| add_const_test.test | RUN | 0.211441 | 0.755419 | 1.567392 | 0.001104 | 0.001091 | 0.001336 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.079821 | 0.199210 | 0.266457 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.085373 | 0.203348 | 0.279449 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.080967 | 0.193933 | 0.262367 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.083134 | 0.194054 | 0.259666 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.080706 | 0.198126 | 0.253843 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.081174 | 0.193992 | 0.251514 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.082271 | 0.195991 | 0.259272 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.081707 | 0.193156 | 0.258222 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.083061 | 0.195604 | 0.261026 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.084712 | 0.196864 | 0.255132 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.082845 | 0.192776 | 0.259287 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.084316 | 0.194840 | 0.258847 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.085143 | 0.195025 | 0.262594 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.084545 | 0.198233 | 0.256453 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.082936 | 0.192124 | 0.256710 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.082354 | 0.193112 | 0.255328 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.082560 | 0.196132 | 0.255945 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.083992 | 0.199989 | 0.258573 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.082811 | 0.194652 | 0.257318 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.082063 | 0.194237 | 0.256784 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.084306 | 0.196583 | 0.258284 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.083602 | 0.199623 | 0.257598 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.129172 | 0.417081 | 0.711835 | 0.001386 | 0.001718 | 0.001442 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.120459 | 0.426730 | 0.699956 | 0.001371 | 0.001635 | 0.001147 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.126590 | 0.422281 | 0.704539 | 0.000983 | 0.001254 | 0.001021 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.133018 | 0.416062 | 0.693787 | 0.001033 | 0.000975 | 0.001250 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.083606 | 0.319256 | 0.410367 | 0.001019 | 0.001041 | 0.001091 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.996× | 0.992×, 1.001× | 0.999× |
| clang | 1.031× | 1.027×, 1.036× | 0.996× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46092715613).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.000795s | 0.000785s | 0.000775s | byte equality observed |
| add_cv_test.test | 10 | 0.000781s | 0.000781s | 0.000785s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.000798s | 0.000787s | 0.000795s | byte equality observed |
| add_pointer_test.test | 10 | 0.000799s | 0.000805s | 0.000783s | byte equality observed |
| add_reference_test.test | 10 | 0.000788s | 0.000770s | 0.000774s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.000793s | 0.000805s | 0.000793s | byte equality observed |
| add_volatile_test.test | 10 | 0.000809s | 0.000799s | 0.000791s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.000842s | 0.000824s | 0.000841s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.000785s | 0.000771s | 0.000820s | byte equality observed |
| aligned_storage_test.test | 10 | 0.000837s | 0.000849s | 0.000814s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.000804s | 0.000792s | 0.000800s | byte equality observed |
| alignment_of_test.test | 10 | 0.000792s | 0.000786s | 0.000809s | byte equality observed |
| common_type_2_test.test | 10 | 0.000786s | 0.000807s | 0.000812s | byte equality observed |
| common_type_3_test.test | 10 | 0.000797s | 0.000812s | 0.000834s | byte equality observed |
| common_type_4_test.test | 10 | 0.000781s | 0.000786s | 0.000816s | byte equality observed |
| common_type_5_test.test | 10 | 0.000790s | 0.000796s | 0.000790s | byte equality observed |
| common_type_6_test.test | 10 | 0.000812s | 0.000792s | 0.000803s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.000795s | 0.000813s | 0.000777s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.000797s | 0.000801s | 0.000775s | byte equality observed |
| common_type_test.test | 10 | 0.000791s | 0.000787s | 0.000769s | byte equality observed |
| conditional_test.test | 10 | 0.000800s | 0.000773s | 0.000799s | byte equality observed |
| conjunction_test.test | 10 | 0.000797s | 0.000815s | 0.000772s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.000808s | 0.000823s | 0.000782s | byte equality observed |
| copy_cv_test.test | 10 | 0.000814s | 0.000797s | 0.000799s | byte equality observed |
| copy_reference_test.test | 10 | 0.000812s | 0.000796s | 0.000815s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.000810s | 0.000806s | 0.000787s | byte equality observed |
| decay_test.test | 10 | 0.000808s | 0.000824s | 0.000767s | byte equality observed |
| detected_or_test.test | 10 | 0.000773s | 0.000779s | 0.000818s | byte equality observed |
| detected_test.test | 10 | 0.000787s | 0.000798s | 0.000815s | byte equality observed |
| disjunction_test.test | 10 | 0.000782s | 0.000780s | 0.000792s | byte equality observed |
| enable_if_test.test | 10 | 0.000774s | 0.000787s | 0.000795s | byte equality observed |
| extent_test.test | 10 | 0.000811s | 0.000815s | 0.000774s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.000793s | 0.000836s | 0.000779s | byte equality observed |
| function_traits_test.test | 10 | 0.000791s | 0.000801s | 0.000787s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000806s | 0.000800s | 0.000791s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.000827s | 0.000788s | 0.000806s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.000818s | 0.000790s | 0.000800s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.000776s | 0.000803s | 0.000795s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.000797s | 0.000799s | 0.000833s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.000807s | 0.000795s | 0.000813s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.000795s | 0.000811s | 0.000814s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.000810s | 0.000798s | 0.000816s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.000804s | 0.000821s | 0.000826s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.000786s | 0.000784s | 0.000781s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.000820s | 0.000791s | 0.000799s | byte equality observed |
| has_bit_and_test.test | 10 | 0.000801s | 0.000794s | 0.000797s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.000798s | 0.000786s | 0.000819s | byte equality observed |
| has_bit_or_test.test | 10 | 0.000785s | 0.000803s | 0.000793s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.000809s | 0.000768s | 0.000800s | byte equality observed |
| has_bit_xor_test.test | 8 | 0.000804s | 0.000793s | 0.000801s | byte equality observed |
| has_complement_test.test | 10 | 0.000806s | 0.000811s | 0.000813s | byte equality observed |
| has_dereference_test.test | 10 | 0.000812s | 0.000805s | 0.000820s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.000802s | 0.000815s | 0.000793s | byte equality observed |
| has_divides_test.test | 10 | 0.000800s | 0.000786s | 0.000784s | byte equality observed |
| has_equal_to_test.test | 10 | 0.000804s | 0.000780s | 0.000785s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.000793s | 0.000776s | 0.000782s | byte equality observed |
| has_greater_test.test | 10 | 0.000797s | 0.000781s | 0.000790s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.000785s | 0.000790s | 0.000804s | byte equality observed |
| has_left_shift_test.test | 10 | 0.000805s | 0.000791s | 0.000772s | byte equality observed |
| has_less_equal_test.test | 10 | 0.000802s | 0.000803s | 0.000781s | byte equality observed |
| has_less_test.test | 10 | 0.000813s | 0.000776s | 0.000788s | byte equality observed |
| has_logical_and_test.test | 10 | 0.000797s | 0.000776s | 0.000773s | byte equality observed |
| has_logical_not_test.test | 10 | 0.000785s | 0.000774s | 0.000820s | byte equality observed |
| has_logical_or_test.test | 10 | 0.000800s | 0.000801s | 0.000783s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.000801s | 0.000766s | 0.000784s | byte equality observed |
| has_minus_test.test | 10 | 0.000782s | 0.000808s | 0.000786s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.000789s | 0.000796s | 0.000772s | byte equality observed |
| has_modulus_test.test | 10 | 0.000780s | 0.000770s | 0.000782s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.000788s | 0.000791s | 0.000781s | byte equality observed |
| has_multiplies_test.test | 10 | 0.000786s | 0.000764s | 0.000802s | byte equality observed |
| has_negate_test.test | 10 | 0.000781s | 0.000790s | 0.000800s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.000787s | 0.000802s | 0.000775s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.000797s | 0.000773s | 0.000773s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.000773s | 0.000786s | 0.000781s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.000793s | 0.000788s | 0.000776s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.000793s | 0.000812s | 0.000795s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.000790s | 0.000797s | 0.000788s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.000804s | 0.000823s | 0.000803s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.000801s | 0.000802s | 0.000777s | byte equality observed |
| has_operator_new_test.test | 10 | 0.000805s | 0.000787s | 0.000786s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.000793s | 0.000774s | 0.000781s | byte equality observed |
| has_plus_test.test | 10 | 0.000777s | 0.000788s | 0.000787s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.000777s | 0.000798s | 0.000819s | byte equality observed |
| has_post_increment_test.test | 10 | 0.000783s | 0.000799s | 0.000794s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.000786s | 0.000814s | 0.000811s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.000797s | 0.000796s | 0.000806s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.000807s | 0.000782s | 0.000805s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.000763s | 0.000795s | 0.000817s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.000779s | 0.000777s | 0.000798s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.000794s | 0.000819s | 0.000819s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.000804s | 0.000791s | 0.000780s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.000785s | 0.000806s | 0.000816s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.000777s | 0.000821s | 0.000807s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.000788s | 0.000792s | 0.000805s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.000787s | 0.000784s | 0.000791s | byte equality observed |
| has_right_shift_test.test | 10 | 0.000791s | 0.000803s | 0.000816s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.000806s | 0.000820s | 0.000827s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.000814s | 0.000844s | 0.000834s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.000840s | 0.000866s | 0.000857s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.000814s | 0.000799s | 0.000781s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.000781s | 0.000830s | 0.000774s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.000795s | 0.000786s | 0.000775s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.000793s | 0.000793s | 0.000780s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.000773s | 0.000801s | 0.000794s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.000786s | 0.000811s | 0.000810s | byte equality observed |
| integral_constant_test.test | 10 | 0.000368s | 0.000364s | 0.000797s | byte equality observed |
| is_abstract_test.test | 10 | 0.000775s | 0.000790s | 0.000773s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.000796s | 0.000819s | 0.000790s | byte equality observed |
| is_array_test.test | 10 | 0.000793s | 0.000765s | 0.000769s | byte equality observed |
| is_assignable_test.test | 10 | 0.000776s | 0.000775s | 0.000777s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.000784s | 0.000792s | 0.000755s | byte equality observed |
| is_base_of_test.test | 10 | 0.000785s | 0.000806s | 0.000778s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.000793s | 0.000816s | 0.000795s | byte equality observed |
| is_class_test.test | 10 | 0.000776s | 0.000810s | 0.000800s | byte equality observed |
| is_complete_test.test | 10 | 0.000797s | 0.000774s | 0.000778s | byte equality observed |
| is_complex_test.test | 10 | 0.000802s | 0.000784s | 0.000793s | byte equality observed |
| is_compound_test.test | 10 | 0.000786s | 0.000800s | 0.000801s | byte equality observed |
| is_const_test.test | 10 | 0.000807s | 0.000786s | 0.000801s | byte equality observed |
| is_constructible_test.test | 10 | 0.000770s | 0.000800s | 0.000807s | byte equality observed |
| is_convertible_test.test | 10 | 0.000778s | 0.000795s | 0.000798s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.000769s | 0.000795s | 0.000800s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.000786s | 0.000806s | 0.000810s | byte equality observed |
| is_default_constr_test.test | 10 | 0.000820s | 0.000789s | 0.000804s | byte equality observed |
| is_destructible_test.test | 10 | 0.000792s | 0.000795s | 0.000803s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.000800s | 0.000782s | 0.000792s | byte equality observed |
| is_detected_test.test | 10 | 0.000773s | 0.000792s | 0.000782s | byte equality observed |
| is_empty_test.test | 10 | 0.000767s | 0.000790s | 0.000779s | byte equality observed |
| is_enum_test.test | 10 | 0.000795s | 0.000777s | 0.000800s | byte equality observed |
| is_final_test.test | 10 | 0.000813s | 0.000800s | 0.000828s | byte equality observed |
| is_float_test.test | 10 | 0.000800s | 0.000811s | 0.000809s | byte equality observed |
| is_floating_point_test.test | 10 | 0.000825s | 0.000793s | 0.000771s | byte equality observed |
| is_function_test.test | 10 | 0.000818s | 0.000765s | 0.000765s | byte equality observed |
| is_fundamental_test.test | 10 | 0.000802s | 0.000769s | 0.000778s | byte equality observed |
| is_integral_test.test | 10 | 0.000792s | 0.000773s | 0.000790s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.000788s | 0.000791s | 0.000786s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.000770s | 0.000808s | 0.000804s | byte equality observed |
| is_member_func_test.test | 10 | 0.000788s | 0.000784s | 0.000786s | byte equality observed |
| is_member_obj_test.test | 10 | 0.000788s | 0.000793s | 0.000820s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.000791s | 0.000783s | 0.000784s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.000803s | 0.000776s | 0.000777s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.000803s | 0.000790s | 0.000799s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.000801s | 0.000792s | 0.000772s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.000794s | 0.000806s | 0.000795s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.000784s | 0.000785s | 0.000791s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.000802s | 0.000786s | 0.000808s | byte equality observed |
| is_object_test.test | 10 | 0.000789s | 0.000787s | 0.000777s | byte equality observed |
| is_pod_test.test | 10 | 0.000794s | 0.000788s | 0.000778s | byte equality observed |
| is_pointer_test.test | 10 | 0.000792s | 0.000765s | 0.000805s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.000793s | 0.000796s | 0.000761s | byte equality observed |
| is_reference_test.test | 10 | 0.000777s | 0.000793s | 0.000782s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.000789s | 0.000792s | 0.000779s | byte equality observed |
| is_same_test.test | 10 | 0.000811s | 0.000790s | 0.000792s | byte equality observed |
| is_scalar_test.test | 10 | 0.000797s | 0.000813s | 0.000814s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.000805s | 0.000804s | 0.000793s | byte equality observed |
| is_signed_test.test | 10 | 0.000776s | 0.000824s | 0.000792s | byte equality observed |
| is_stateless_test.test | 10 | 0.000786s | 0.000806s | 0.000814s | byte equality observed |
| is_swappable_test.test | 10 | 0.000777s | 0.000805s | 0.000780s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.000805s | 0.000806s | 0.000831s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.000818s | 0.000813s | 0.000792s | byte equality observed |
| is_union_test.test | 10 | 0.000758s | 0.000793s | 0.000794s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.000781s | 0.000809s | 0.000772s | byte equality observed |
| is_unsigned_test.test | 10 | 0.000784s | 0.000772s | 0.000766s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.000773s | 0.000797s | 0.000776s | byte equality observed |
| is_void_test.test | 10 | 0.000798s | 0.000790s | 0.000794s | byte equality observed |
| is_volatile_test.test | 10 | 0.000776s | 0.000798s | 0.000785s | byte equality observed |
| make_signed_test.test | 10 | 0.000778s | 0.000787s | 0.000791s | byte equality observed |
| make_unsigned_test.test | 10 | 0.000761s | 0.000798s | 0.000791s | byte equality observed |
| make_void_test.test | 10 | 0.000787s | 0.000800s | 0.000775s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000371s | 0.000368s | 0.000787s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000364s | 0.000371s | 0.000774s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000360s | 0.000361s | 0.000783s | byte equality observed |
| negation_test.test | 10 | 0.000780s | 0.000793s | 0.000797s | byte equality observed |
| promote_basic_test.test | 10 | 0.000369s | 0.000360s | 0.000776s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000360s | 0.000380s | 0.000768s | byte equality observed |
| promote_enum_test.test | 10 | 0.000357s | 0.000376s | 0.000781s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000362s | 0.000353s | 0.000806s | byte equality observed |
| rank_test.test | 10 | 0.000786s | 0.000779s | 0.000817s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.000809s | 0.000814s | 0.000765s | byte equality observed |
| remove_bounds_test.test | 10 | 0.000784s | 0.000781s | 0.000784s | byte equality observed |
| remove_const_test.test | 10 | 0.000800s | 0.000789s | 0.000788s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.000821s | 0.000799s | 0.000779s | byte equality observed |
| remove_cv_test.test | 10 | 0.000774s | 0.000830s | 0.000823s | byte equality observed |
| remove_extent_test.test | 10 | 0.000797s | 0.000791s | 0.000814s | byte equality observed |
| remove_pointer_test.test | 10 | 0.000775s | 0.000790s | 0.000786s | byte equality observed |
| remove_reference_test.test | 10 | 0.000764s | 0.000804s | 0.000789s | byte equality observed |
| remove_volatile_test.test | 10 | 0.000787s | 0.000779s | 0.000795s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.000814s | 0.000777s | 0.000787s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.000807s | 0.000774s | 0.000806s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.000785s | 0.000792s | 0.000807s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.000803s | 0.000797s | 0.000780s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.000792s | 0.000805s | 0.000790s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.000780s | 0.000783s | 0.000822s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.000788s | 0.000795s | 0.000797s | byte equality observed |
| type_identity_test.test | 10 | 0.000797s | 0.000799s | 0.000770s | byte equality observed |
| type_traits_test.test | 10 | 0.000366s | 0.000366s | 0.000802s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.000830s | 0.000843s | 0.000840s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46092715613).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
