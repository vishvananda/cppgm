# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.092953 | 0.275805 | 0.385576 | 0.001241 | 0.001330 | 0.001173 |
| type_traits_test.test | RUN | 0.126806 | 0.279505 | 0.367012 | 0.000421 | 0.000486 | 0.001079 |
| type_identity_test.test | RUN | 0.246136 | 0.941774 | 1.965317 | 0.001190 | 0.001309 | 0.001192 |
| tricky_rvalue_test.test | RUN | 0.086366 | 0.217703 | 0.293500 | 0.001237 | 0.001244 | 0.000984 |
| tricky_partial_spec_test.test | RUN | 0.105952 | 0.308236 | 0.469536 | 0.001157 | 0.001431 | 0.001221 |
| tricky_is_enum_test.test | RUN | 0.088107 | 0.204933 | 0.271257 | 0.001297 | 0.001180 | 0.001115 |
| tricky_incomplete_type_test.test | RUN | 0.132415 | 0.317291 | 0.433361 | 0.001139 | 0.001170 | 0.001111 |
| tricky_function_type_test.test | RUN | 0.109092 | 0.324017 | 0.537965 | 0.001188 | 0.001161 | 0.001119 |
| tricky_add_pointer_test.test | RUN | 0.165710 | 0.576028 | 1.132674 | 0.001050 | 0.001353 | 0.001162 |
| tricky_abstract_type_test.test | RUN | 0.087500 | 0.213067 | 0.282502 | 0.001256 | 0.001229 | 0.001157 |
| remove_volatile_test.test | RUN | 0.218331 | 0.821360 | 1.729451 | 0.001305 | 0.001390 | 0.001232 |
| remove_reference_test.test | RUN | 0.227327 | 0.867205 | 1.829881 | 0.001407 | 0.001283 | 0.001151 |
| remove_pointer_test.test | RUN | 0.242213 | 0.906394 | 1.946268 | 0.001240 | 0.001147 | 0.001231 |
| remove_extent_test.test | RUN | 0.228195 | 0.880276 | 1.827738 | 0.001183 | 0.001370 | 0.001162 |
| remove_cv_test.test | RUN | 0.231021 | 0.867850 | 1.859180 | 0.001296 | 0.001223 | 0.001230 |
| remove_cv_ref_test.test | RUN | 0.470601 | 2.128235 | 4.384449 | 0.001370 | 0.001135 | 0.001153 |
| remove_const_test.test | RUN | 0.217636 | 0.809351 | 1.775973 | 0.001420 | 0.001217 | 0.001202 |
| remove_bounds_test.test | RUN | 0.223685 | 0.873784 | 1.846046 | 0.001177 | 0.001315 | 0.001218 |
| remove_all_extents_test.test | RUN | 0.227520 | 0.869134 | 1.766933 | 0.001145 | 0.001378 | 0.001144 |
| rank_test.test | RUN | 0.088924 | 0.219805 | 0.299278 | 0.001185 | 0.001202 | 0.001144 |
| promote_mpl_test.test | RUN | 0.077368 | 0.196217 | 0.216779 | 0.000454 | 0.000508 | 0.001091 |
| promote_enum_test.test | RUN | 0.016786 | 0.045751 | 0.054617 | 0.000427 | 0.000503 | 0.001115 |
| promote_enum_msvc_bug_test.test | RUN | 0.015876 | 0.038447 | 0.044611 | 0.000485 | 0.000477 | 0.001134 |
| promote_basic_test.test | RUN | 0.019083 | 0.054072 | 0.053929 | 0.000458 | 0.000505 | 0.001082 |
| negation_test.test | RUN | 0.083821 | 0.196281 | 0.263440 | 0.000985 | 0.001209 | 0.001076 |
| mpl_interop_test3.test | RUN | 0.072041 | 0.181658 | 0.200821 | 0.000507 | 0.000520 | 0.001086 |
| mpl_interop_test2.test | RUN | 0.024848 | 0.054391 | 0.052928 | 0.000416 | 0.000490 | 0.000978 |
| mpl_interop_test1.test | RUN | 0.013757 | 0.037370 | 0.036195 | 0.000478 | 0.000525 | 0.001223 |
| make_void_test.test | RUN | 0.089167 | 0.212480 | 0.301379 | 0.001314 | 0.001157 | 0.001109 |
| make_unsigned_test.test | RUN | 0.101448 | 0.282728 | 0.403105 | 0.001222 | 0.001216 | 0.001098 |
| make_signed_test.test | RUN | 0.103588 | 0.284845 | 0.409827 | 0.001184 | 0.001316 | 0.001066 |
| is_volatile_test.test | RUN | 0.096351 | 0.243521 | 0.329640 | 0.001093 | 0.001200 | 0.001228 |
| is_void_test.test | RUN | 0.090611 | 0.228155 | 0.313095 | 0.001191 | 0.001356 | 0.001118 |
| is_virtual_base_of_test.test | RUN | 0.100233 | 0.294136 | 0.427519 | 0.001321 | 0.001172 | 0.001297 |
| is_unsigned_test.test | RUN | 0.090942 | 0.234766 | 0.315252 | 0.001218 | 0.001261 | 0.001114 |
| is_unscoped_enum_test.test | RUN | 0.091206 | 0.216246 | 0.271221 | 0.001067 | 0.001210 | 0.001151 |
| is_union_test.test | RUN | 0.093486 | 0.266585 | 0.392398 | 0.001264 | 0.001276 | 0.001129 |
| is_unbounded_array_test.test | RUN | 0.086069 | 0.227842 | 0.305360 | 0.001130 | 0.001267 | 0.001190 |
| is_trivially_copyable_test.test | RUN | 0.139869 | 0.472589 | 0.784966 | 0.001096 | 0.001251 | 0.001152 |
| is_swappable_test.test | RUN | 0.118288 | 0.361680 | 0.564142 | 0.001114 | 0.001256 | 0.001299 |
| is_stateless_test.test | RUN | 0.131492 | 0.407727 | 0.660313 | 0.001286 | 0.001211 | 0.001221 |
| is_signed_test.test | RUN | 0.091043 | 0.238394 | 0.316440 | 0.001257 | 0.001315 | 0.001119 |
| is_scoped_enum_test.test | RUN | 0.088748 | 0.213741 | 0.275188 | 0.001128 | 0.001197 | 0.001225 |
| is_scalar_test.test | RUN | 0.115475 | 0.375047 | 0.585190 | 0.001087 | 0.001206 | 0.001259 |
| is_same_test.test | RUN | 0.089792 | 0.227770 | 0.292861 | 0.001075 | 0.000853 | 0.001154 |
| is_rvalue_reference_test.test | RUN | 0.091040 | 0.250494 | 0.352127 | 0.001149 | 0.001159 | 0.001094 |
| is_reference_test.test | RUN | 0.093087 | 0.255455 | 0.347664 | 0.001253 | 0.001319 | 0.001175 |
| is_polymorphic_test.test | RUN | 0.094770 | 0.268175 | 0.373389 | 0.000999 | 0.001401 | 0.001201 |
| is_pointer_test.test | RUN | 0.093646 | 0.253075 | 0.373936 | 0.001397 | 0.001197 | 0.001305 |
| is_pod_test.test | RUN | 0.121632 | 0.410338 | 0.667367 | 0.001088 | 0.001186 | 0.001111 |
| is_object_test.test | RUN | 0.084178 | 0.219659 | 0.282010 | 0.001057 | 0.001326 | 0.000960 |
| is_nothrow_swappable_test.test | RUN | 0.125337 | 0.393333 | 0.615631 | 0.001060 | 0.001231 | 0.001283 |
| is_nothrow_move_constructible_test.test | RUN | 0.121328 | 0.394474 | 0.666707 | 0.001367 | 0.001351 | 0.001135 |
| is_nothrow_move_assignable_test.test | RUN | 0.120276 | 0.403223 | 0.664825 | 0.001159 | 0.001267 | 0.001088 |
| is_noncopyable_test.test | RUN | 0.088539 | 0.219400 | 0.284873 | 0.001259 | 0.001162 | 0.001190 |
| is_member_pointer_test.test | RUN | 0.088721 | 0.225440 | 0.299083 | 0.001094 | 0.001245 | 0.001138 |
| is_member_obj_test.test | RUN | 0.090565 | 0.228226 | 0.301681 | 0.001271 | 0.001278 | 0.001125 |
| is_member_func_test.test | RUN | 0.089519 | 0.236917 | 0.334565 | 0.001161 | 0.001096 | 0.001054 |
| is_lvalue_reference_test.test | RUN | 0.091988 | 0.256238 | 0.364585 | 0.001065 | 0.001330 | 0.001085 |
| is_list_constructible_test.test | RUN | 0.110302 | 0.296023 | 0.388380 | 0.001174 | 0.001293 | 0.001166 |
| is_integral_test.test | RUN | 0.111738 | 0.348776 | 0.552266 | 0.001204 | 0.001180 | 0.001004 |
| is_fundamental_test.test | RUN | 0.110489 | 0.354679 | 0.557442 | 0.001187 | 0.001065 | 0.001095 |
| is_function_test.test | RUN | 0.088466 | 0.238815 | 0.332825 | 0.001246 | 0.001064 | 0.001140 |
| is_floating_point_test.test | RUN | 0.094509 | 0.258874 | 0.363075 | 0.001080 | 0.001193 | 0.001129 |
| is_float_test.test | RUN | 0.094650 | 0.257514 | 0.363213 | 0.001237 | 0.001381 | 0.001256 |
| is_final_test.test | RUN | 0.090710 | 0.249637 | 0.377771 | 0.001135 | 0.001208 | 0.001179 |
| is_enum_test.test | RUN | 0.082578 | 0.209407 | 0.296747 | 0.001085 | 0.001116 | 0.001102 |
| is_empty_test.test | RUN | 0.094028 | 0.235660 | 0.321676 | 0.001072 | 0.001335 | 0.001081 |
| is_detected_test.test | RUN | 0.085052 | 0.204386 | 0.273125 | 0.001284 | 0.001143 | 0.001276 |
| is_detected_exact_test.test | RUN | 0.085954 | 0.202120 | 0.269630 | 0.001148 | 0.001142 | 0.001151 |
| is_destructible_test.test | RUN | 0.115262 | 0.394305 | 0.650138 | 0.001173 | 0.001208 | 0.001340 |
| is_default_constr_test.test | RUN | 0.123272 | 0.405344 | 0.662006 | 0.001230 | 0.001268 | 0.001094 |
| is_copy_constructible_test.test | RUN | 0.126266 | 0.425516 | 0.718664 | 0.001175 | 0.001112 | 0.001152 |
| is_copy_assignable_test.test | RUN | 0.125040 | 0.420230 | 0.708493 | 0.001078 | 0.001282 | 0.001148 |
| is_convertible_test.test | RUN | 0.121643 | 0.379003 | 0.576687 | 0.001096 | 0.001329 | 0.001041 |
| is_constructible_test.test | RUN | 0.100775 | 0.276348 | 0.414720 | 0.001173 | 0.001321 | 0.001181 |
| is_const_test.test | RUN | 0.089562 | 0.242605 | 0.339132 | 0.001364 | 0.001140 | 0.001066 |
| is_compound_test.test | RUN | 0.084610 | 0.206615 | 0.281629 | 0.001023 | 0.001206 | 0.001276 |
| is_complex_test.test | RUN | 0.114351 | 0.267410 | 0.375881 | 0.001345 | 0.001205 | 0.001140 |
| is_complete_test.test | RUN | 0.099028 | 0.282559 | 0.425825 | 0.001078 | 0.001141 | 0.001074 |
| is_class_test.test | RUN | 0.094300 | 0.247804 | 0.349390 | 0.001302 | 0.001024 | 0.000953 |
| is_bounded_array_test.test | RUN | 0.090111 | 0.226064 | 0.302758 | 0.001280 | 0.001214 | 0.001099 |
| is_base_of_test.test | RUN | 0.092938 | 0.250971 | 0.345906 | 0.001194 | 0.001362 | 0.001136 |
| is_base_and_derived_test.test | RUN | 0.093633 | 0.243578 | 0.343766 | 0.001350 | 0.001320 | 0.001211 |
| is_assignable_test.test | RUN | 0.114440 | 0.354117 | 0.532099 | 0.001212 | 0.001375 | 0.001078 |
| is_array_test.test | RUN | 0.092043 | 0.243042 | 0.317344 | 0.001364 | 0.000909 | 0.001207 |
| is_arithmetic_test.test | RUN | 0.109202 | 0.353763 | 0.562401 | 0.001186 | 0.001242 | 0.001183 |
| is_abstract_test.test | RUN | 0.204545 | 0.931852 | 2.021665 | 0.001192 | 0.001237 | 0.001226 |
| integral_constant_test.test | RUN | 0.013268 | 0.035981 | 0.039444 | 0.000524 | 0.000497 | 0.001100 |
| has_virtual_destructor_test.test | RUN | 0.096984 | 0.276539 | 0.386490 | 0.001226 | 0.001233 | 0.001270 |
| has_unary_plus_test.test | RUN | 0.184678 | 0.983834 | 1.462089 | 0.001224 | 0.001284 | 0.001217 |
| has_unary_minus_test.test | RUN | 0.182372 | 0.958269 | 1.449323 | 0.001150 | 0.001323 | 0.001045 |
| has_trivial_move_constructor_test.test | RUN | 0.123633 | 0.423969 | 0.692009 | 0.001066 | 0.001199 | 0.001169 |
| has_trivial_move_assign_test.test | RUN | 0.123253 | 0.401219 | 0.667720 | 0.001075 | 0.001327 | 0.001166 |
| has_trivial_destructor_test.test | RUN | 0.123216 | 0.416685 | 0.668724 | 0.001273 | 0.001249 | 0.001204 |
| has_trivial_copy_test.test | RUN | 0.127485 | 0.435615 | 0.711160 | 0.001171 | 0.001493 | 0.001337 |
| has_trivial_constr_test.test | RUN | 0.131040 | 0.444446 | 0.709680 | 0.001213 | 0.001374 | 0.001158 |
| has_trivial_assign_test.test | RUN | 0.127744 | 0.438102 | 0.702466 | 0.001153 | 0.001431 | 0.001254 |
| has_right_shift_test.test | RUN | 0.193641 | 0.803913 | 1.573906 | 0.001362 | 0.001358 | 0.001118 |
| has_right_shift_assign_test.test | RUN | 0.183788 | 0.765419 | 1.427234 | 0.001126 | 0.001223 | 0.001201 |
| has_prefix_classes3_test.test | RUN | 0.136004 | 0.447387 | 0.738800 | 0.001225 | 0.001233 | 0.001168 |
| has_prefix_classes2_test.test | RUN | 0.135102 | 0.457263 | 0.727043 | 0.001145 | 0.001227 | 0.001305 |
| has_prefix_classes1_test.test | RUN | 0.137124 | 0.452656 | 0.711165 | 0.001431 | 0.001258 | 0.001296 |
| has_prefix_classes0_test.test | RUN | 0.134214 | 0.448252 | 0.686413 | 0.001161 | 0.001233 | 0.001210 |
| has_pre_increment_test.test | RUN | 0.185465 | 0.969803 | 1.480849 | 0.001137 | 0.001288 | 0.001107 |
| has_pre_decrement_test.test | RUN | 0.184342 | 0.998374 | 1.477299 | 0.001105 | 0.001182 | 0.001104 |
| has_postfix_classes3_test.test | RUN | 0.137511 | 0.449339 | 0.727665 | 0.001100 | 0.001040 | 0.001181 |
| has_postfix_classes2_test.test | RUN | 0.133908 | 0.438491 | 0.703786 | 0.001186 | 0.001528 | 0.001084 |
| has_postfix_classes1_test.test | RUN | 0.138492 | 0.446829 | 0.737132 | 0.001184 | 0.001260 | 0.001164 |
| has_postfix_classes0_test.test | RUN | 0.135354 | 0.445050 | 0.720782 | 0.001085 | 0.001294 | 0.001089 |
| has_post_increment_test.test | RUN | 0.184640 | 1.007204 | 1.502624 | 0.001466 | 0.001376 | 0.001189 |
| has_post_decrement_test.test | RUN | 0.184194 | 1.012688 | 1.491196 | 0.001142 | 0.001277 | 0.001133 |
| has_plus_test.test | RUN | 0.182941 | 0.737566 | 1.477994 | 0.001160 | 0.001291 | 0.001247 |
| has_plus_assign_test.test | RUN | 0.191326 | 0.750822 | 1.475060 | 0.001110 | 0.001087 | 0.001216 |
| has_operator_new_test.test | RUN | 0.126385 | 0.405598 | 0.646462 | 0.001148 | 0.001375 | 0.001119 |
| has_nothrow_destructor_test.test | RUN | 0.126979 | 0.449061 | 0.698389 | 0.001106 | 0.001294 | 0.001065 |
| has_nothrow_copy_test.test | RUN | 0.127390 | 0.407193 | 0.676536 | 0.001190 | 0.001090 | 0.001156 |
| has_nothrow_constr_test.test | RUN | 0.120781 | 0.402585 | 0.647202 | 0.001076 | 0.001057 | 0.001045 |
| has_nothrow_assign_test.test | RUN | 0.118385 | 0.418195 | 0.648983 | 0.001248 | 0.001324 | 0.001107 |
| has_not_equal_to_test.test | RUN | 0.185087 | 0.962573 | 1.437274 | 0.001393 | 0.001235 | 0.001141 |
| has_negate_test.test | RUN | 0.180547 | 0.720595 | 1.401838 | 0.001048 | 0.001309 | 0.001229 |
| has_multiplies_test.test | RUN | 0.180281 | 0.742431 | 1.447749 | 0.001098 | 0.001162 | 0.001112 |
| has_multiplies_assign_test.test | RUN | 0.189539 | 0.738143 | 1.383842 | 0.001224 | 0.001355 | 0.001111 |
| has_modulus_test.test | RUN | 0.182222 | 0.753778 | 1.406046 | 0.001314 | 0.001405 | 0.001074 |
| has_modulus_assign_test.test | RUN | 0.186300 | 0.750055 | 1.393592 | 0.001268 | 0.001191 | 0.001105 |
| has_minus_test.test | RUN | 0.184802 | 0.757301 | 1.493081 | 0.000976 | 0.001316 | 0.001111 |
| has_minus_assign_test.test | RUN | 0.192591 | 0.771657 | 1.488910 | 0.001246 | 0.001322 | 0.001066 |
| has_logical_or_test.test | RUN | 0.183636 | 0.774614 | 1.447477 | 0.001498 | 0.001319 | 0.001194 |
| has_logical_not_test.test | RUN | 0.180796 | 0.745065 | 1.397460 | 0.001225 | 0.000929 | 0.001096 |
| has_logical_and_test.test | RUN | 0.181015 | 0.772164 | 1.483674 | 0.001259 | 0.001305 | 0.001039 |
| has_less_test.test | RUN | 0.184342 | 0.970651 | 1.482956 | 0.001229 | 0.001340 | 0.000958 |
| has_less_equal_test.test | RUN | 0.187279 | 0.966949 | 1.431124 | 0.001157 | 0.001227 | 0.001161 |
| has_left_shift_test.test | RUN | 0.198425 | 0.972111 | 1.778903 | 0.001182 | 0.001230 | 0.001093 |
| has_left_shift_assign_test.test | RUN | 0.180021 | 0.759368 | 1.478863 | 0.001227 | 0.001424 | 0.001039 |
| has_greater_test.test | RUN | 0.183222 | 0.957265 | 1.481250 | 0.001369 | 0.001353 | 0.001028 |
| has_greater_equal_test.test | RUN | 0.182714 | 1.009995 | 1.376611 | 0.001427 | 0.001258 | 0.001110 |
| has_equal_to_test.test | RUN | 0.182743 | 0.998896 | 1.470080 | 0.001208 | 0.001422 | 0.001131 |
| has_divides_test.test | RUN | 0.180763 | 0.739832 | 1.450893 | 0.001141 | 0.001204 | 0.001074 |
| has_divides_assign_test.test | RUN | 0.186946 | 0.755314 | 1.381267 | 0.001319 | 0.001216 | 0.001036 |
| has_dereference_test.test | RUN | 0.178738 | 0.727175 | 1.319610 | 0.001204 | 0.001336 | 0.001129 |
| has_complement_test.test | RUN | 0.177840 | 0.997994 | 1.471394 | 0.001157 | 0.001301 | 0.001186 |
| has_bit_xor_test.test | RUN | 0.182771 | 0.762981 | 1.458975 | 0.001146 | 0.001282 | 0.001087 |
| has_bit_xor_assign_test.test | RUN | 0.185998 | 0.757299 | 1.392932 | 0.001366 | 0.001378 | 0.001007 |
| has_bit_or_test.test | RUN | 0.181625 | 0.745533 | 1.391837 | 0.001374 | 0.001296 | 0.001174 |
| has_bit_or_assign_test.test | RUN | 0.181192 | 0.770766 | 1.456677 | 0.001191 | 0.001180 | 0.001199 |
| has_bit_and_test.test | RUN | 0.184132 | 0.764697 | 1.383765 | 0.001152 | 0.001237 | 0.001086 |
| has_bit_and_assign_test.test | RUN | 0.185568 | 0.756833 | 1.454383 | 0.001270 | 0.001222 | 0.001033 |
| has_binary_classes9_test.test | RUN | 0.201827 | 0.891731 | 1.597041 | 0.001349 | 0.001303 | 0.001142 |
| has_binary_classes8_test.test | RUN | 0.198383 | 0.923346 | 1.669213 | 0.001236 | 0.001380 | 0.001053 |
| has_binary_classes7_test.test | RUN | 0.199240 | 0.893343 | 1.665520 | 0.001172 | 0.001326 | 0.000976 |
| has_binary_classes6_test.test | RUN | 0.198733 | 0.872991 | 1.591167 | 0.001338 | 0.001377 | 0.001119 |
| has_binary_classes5_test.test | RUN | 0.195442 | 0.872511 | 1.591941 | 0.001203 | 0.001403 | 0.001096 |
| has_binary_classes4_test.test | RUN | 0.200669 | 0.915081 | 1.675742 | 0.001124 | 0.001455 | 0.001086 |
| has_binary_classes3_test.test | RUN | 0.198139 | 0.896207 | 1.668700 | 0.001133 | 0.001382 | 0.001097 |
| has_binary_classes2_test.test | RUN | 0.202231 | 0.915361 | 1.585406 | 0.001300 | 0.001409 | 0.001202 |
| has_binary_classes1_test.test | RUN | 0.197842 | 0.892148 | 1.593889 | 0.001265 | 0.001307 | 0.001055 |
| has_binary_classes0_test.test | RUN | 0.201353 | 0.924479 | 1.633083 | 0.001192 | 0.001312 | 0.001205 |
| function_traits_test.test | RUN | 0.088828 | 0.240797 | 0.324126 | 0.001245 | 0.001378 | 0.001118 |
| floating_point_promotion_test.test | RUN | 0.087019 | 0.241310 | 0.318613 | 0.001029 | 0.001302 | 0.001129 |
| extent_test.test | RUN | 0.087738 | 0.237255 | 0.325224 | 0.001086 | 0.001331 | 0.001094 |
| enable_if_test.test | RUN | 0.084591 | 0.204780 | 0.264941 | 0.001299 | 0.001064 | 0.001165 |
| disjunction_test.test | RUN | 0.087626 | 0.206920 | 0.267797 | 0.001126 | 0.001103 | 0.001026 |
| detected_test.test | RUN | 0.086336 | 0.202447 | 0.255843 | 0.001152 | 0.001334 | 0.001099 |
| detected_or_test.test | RUN | 0.086901 | 0.214966 | 0.268538 | 0.001273 | 0.001226 | 0.001008 |
| decay_test.test | RUN | 0.223888 | 0.827727 | 1.565871 | 0.001139 | 0.001178 | 0.000977 |
| cxx14_aliases_test.test | RUN | 0.139722 | 0.307120 | 0.416052 | 0.001239 | 0.001542 | 0.001049 |
| copy_reference_test.test | RUN | 0.088230 | 0.202454 | 0.277020 | 0.001058 | 0.001224 | 0.001033 |
| copy_cv_test.test | RUN | 0.088728 | 0.223056 | 0.290127 | 0.001189 | 0.001386 | 0.001016 |
| copy_cv_ref_test.test | RUN | 0.125020 | 0.365453 | 0.663291 | 0.001245 | 0.001255 | 0.001037 |
| conjunction_test.test | RUN | 0.085786 | 0.213005 | 0.242903 | 0.001274 | 0.001056 | 0.001009 |
| conditional_test.test | RUN | 0.086638 | 0.209863 | 0.259854 | 0.001065 | 0.001199 | 0.001038 |
| common_type_test.test | RUN | 0.118636 | 0.318675 | 0.509783 | 0.001173 | 0.001220 | 0.001132 |
| common_type_sfinae_test.test | RUN | 0.086267 | 0.198255 | 0.244848 | 0.001157 | 0.001180 | 0.000993 |
| common_type_sfinae2_test.test | RUN | 0.088073 | 0.215933 | 0.274894 | 0.001176 | 0.001126 | 0.000997 |
| common_type_6_test.test | RUN | 0.093196 | 0.213515 | 0.278315 | 0.001107 | 0.001367 | 0.000985 |
| common_type_5_test.test | RUN | 0.092038 | 0.214015 | 0.286408 | 0.001181 | 0.001338 | 0.001009 |
| common_type_4_test.test | RUN | 0.093204 | 0.234896 | 0.323032 | 0.001405 | 0.001192 | 0.001032 |
| common_type_3_test.test | RUN | 0.083803 | 0.196929 | 0.241803 | 0.001236 | 0.001228 | 0.001063 |
| common_type_2_test.test | RUN | 0.116513 | 0.315588 | 0.506647 | 0.001216 | 0.001371 | 0.001137 |
| alignment_of_test.test | RUN | 0.093584 | 0.254247 | 0.336045 | 0.001143 | 0.001138 | 0.000922 |
| alignment_of_a2_test.test | RUN | 0.096080 | 0.255898 | 0.332069 | 0.001215 | 0.001215 | 0.000971 |
| aligned_storage_test.test | RUN | 0.095612 | 0.252409 | 0.313820 | 0.001323 | 0.001203 | 0.001078 |
| aligned_storage_empy_test.test | RUN | 0.108265 | 0.285209 | 0.421787 | 0.001198 | 0.001241 | 0.001076 |
| aligned_storage_a2_test.test | RUN | 0.093677 | 0.252403 | 0.309116 | 0.001150 | 0.001238 | 0.001221 |
| add_volatile_test.test | RUN | 0.197555 | 0.720065 | 1.423718 | 0.001196 | 0.001424 | 0.001075 |
| add_rvalue_reference_test.test | RUN | 0.223711 | 0.796979 | 1.682571 | 0.001166 | 0.001248 | 0.001056 |
| add_reference_test.test | RUN | 0.217993 | 0.803646 | 1.629635 | 0.001113 | 0.001367 | 0.001003 |
| add_pointer_test.test | RUN | 0.139441 | 0.463493 | 0.889535 | 0.001290 | 0.001187 | 0.001065 |
| add_lvalue_reference_test.test | RUN | 0.217027 | 0.802148 | 1.606006 | 0.001565 | 0.001371 | 0.001047 |
| add_cv_test.test | RUN | 0.203636 | 0.747742 | 1.546086 | 0.001154 | 0.001103 | 0.001006 |
| add_const_test.test | RUN | 0.208179 | 0.738256 | 1.533157 | 0.001161 | 0.001105 | 0.001091 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.080267 | 0.196096 | 0.245845 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.087302 | 0.193405 | 0.252610 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.078366 | 0.189535 | 0.242611 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.079916 | 0.188501 | 0.231480 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.080537 | 0.192641 | 0.240833 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.079297 | 0.189875 | 0.233783 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.081026 | 0.190817 | 0.237796 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.079397 | 0.188639 | 0.244255 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.078542 | 0.190329 | 0.237247 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.079366 | 0.191696 | 0.243269 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.080375 | 0.190190 | 0.235784 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.080645 | 0.190628 | 0.239782 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.079911 | 0.194838 | 0.236491 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.079442 | 0.194327 | 0.241630 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.079654 | 0.190860 | 0.234227 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.077448 | 0.189198 | 0.237653 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.081036 | 0.191553 | 0.236615 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.081826 | 0.190550 | 0.236021 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.081493 | 0.191939 | 0.240752 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.082088 | 0.187518 | 0.236670 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.080954 | 0.190084 | 0.239200 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.081649 | 0.190660 | 0.241818 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.123116 | 0.409173 | 0.661119 | 0.001161 | 0.001272 | 0.001045 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.121210 | 0.407811 | 0.642276 | 0.001194 | 0.001343 | 0.001071 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.121475 | 0.419627 | 0.663041 | 0.000813 | 0.000941 | 0.001055 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.121423 | 0.411324 | 0.653667 | 0.000903 | 0.001242 | 0.000734 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.080232 | 0.257561 | 0.401165 | 0.000858 | 0.000911 | 0.000777 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.991× | 0.991×, 0.991× | 1.001× |
| clang | 1.030× | 1.026×, 1.034× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45651777895).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.000791s | 0.000778s | 0.000780s | byte equality observed |
| add_cv_test.test | 10 | 0.000776s | 0.000775s | 0.000780s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.000769s | 0.000795s | 0.000772s | byte equality observed |
| add_pointer_test.test | 10 | 0.000780s | 0.000795s | 0.000781s | byte equality observed |
| add_reference_test.test | 10 | 0.000769s | 0.000781s | 0.000782s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.000783s | 0.000773s | 0.000783s | byte equality observed |
| add_volatile_test.test | 10 | 0.000798s | 0.000775s | 0.000790s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.000815s | 0.000829s | 0.000820s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.000784s | 0.000786s | 0.000808s | byte equality observed |
| aligned_storage_test.test | 10 | 0.000829s | 0.000822s | 0.000843s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.000801s | 0.000757s | 0.000809s | byte equality observed |
| alignment_of_test.test | 10 | 0.000777s | 0.000749s | 0.000783s | byte equality observed |
| common_type_2_test.test | 10 | 0.000779s | 0.000768s | 0.000779s | byte equality observed |
| common_type_3_test.test | 10 | 0.000797s | 0.000749s | 0.000773s | byte equality observed |
| common_type_4_test.test | 10 | 0.000784s | 0.000762s | 0.000774s | byte equality observed |
| common_type_5_test.test | 10 | 0.000772s | 0.000796s | 0.000774s | byte equality observed |
| common_type_6_test.test | 10 | 0.000774s | 0.000761s | 0.000778s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.000782s | 0.000783s | 0.000788s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.000773s | 0.000792s | 0.000829s | byte equality observed |
| common_type_test.test | 10 | 0.000775s | 0.000771s | 0.000816s | byte equality observed |
| conditional_test.test | 10 | 0.000773s | 0.000759s | 0.000799s | byte equality observed |
| conjunction_test.test | 10 | 0.000776s | 0.000767s | 0.000773s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.000771s | 0.000778s | 0.000803s | byte equality observed |
| copy_cv_test.test | 10 | 0.000797s | 0.000764s | 0.000786s | byte equality observed |
| copy_reference_test.test | 10 | 0.000774s | 0.000775s | 0.000788s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.000778s | 0.000769s | 0.000810s | byte equality observed |
| decay_test.test | 10 | 0.000777s | 0.000775s | 0.000822s | byte equality observed |
| detected_or_test.test | 10 | 0.000777s | 0.000754s | 0.000808s | byte equality observed |
| detected_test.test | 10 | 0.000772s | 0.000780s | 0.000780s | byte equality observed |
| disjunction_test.test | 10 | 0.000786s | 0.000749s | 0.000798s | byte equality observed |
| enable_if_test.test | 10 | 0.000771s | 0.000777s | 0.000807s | byte equality observed |
| extent_test.test | 10 | 0.000779s | 0.000761s | 0.000813s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.000778s | 0.000769s | 0.000771s | byte equality observed |
| function_traits_test.test | 10 | 0.000802s | 0.000800s | 0.000802s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000795s | 0.000795s | 0.000812s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.000783s | 0.000791s | 0.000795s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.000788s | 0.000798s | 0.000793s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.000773s | 0.000784s | 0.000777s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.000788s | 0.000766s | 0.000795s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.000789s | 0.000800s | 0.000814s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.000776s | 0.000755s | 0.000811s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.000789s | 0.000765s | 0.000784s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.000780s | 0.000748s | 0.000792s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.000761s | 0.000768s | 0.000786s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.000794s | 0.000776s | 0.000813s | byte equality observed |
| has_bit_and_test.test | 10 | 0.000768s | 0.000787s | 0.000795s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.000753s | 0.000760s | 0.000795s | byte equality observed |
| has_bit_or_test.test | 10 | 0.000774s | 0.000796s | 0.000796s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.000777s | 0.000783s | 0.000828s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.000774s | 0.000754s | 0.000763s | byte equality observed |
| has_complement_test.test | 10 | 0.000763s | 0.000777s | 0.000776s | byte equality observed |
| has_dereference_test.test | 10 | 0.000797s | 0.000779s | 0.000789s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.000803s | 0.000777s | 0.000744s | byte equality observed |
| has_divides_test.test | 10 | 0.000795s | 0.000766s | 0.000797s | byte equality observed |
| has_equal_to_test.test | 10 | 0.000788s | 0.000743s | 0.000776s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.000776s | 0.000790s | 0.000796s | byte equality observed |
| has_greater_test.test | 10 | 0.000776s | 0.000801s | 0.000809s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.000782s | 0.000797s | 0.000813s | byte equality observed |
| has_left_shift_test.test | 10 | 0.000784s | 0.000785s | 0.000782s | byte equality observed |
| has_less_equal_test.test | 10 | 0.000789s | 0.000769s | 0.000794s | byte equality observed |
| has_less_test.test | 10 | 0.000789s | 0.000796s | 0.000781s | byte equality observed |
| has_logical_and_test.test | 10 | 0.000797s | 0.000790s | 0.000805s | byte equality observed |
| has_logical_not_test.test | 10 | 0.000790s | 0.000760s | 0.000799s | byte equality observed |
| has_logical_or_test.test | 10 | 0.000776s | 0.000759s | 0.000793s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.000770s | 0.000790s | 0.000792s | byte equality observed |
| has_minus_test.test | 10 | 0.000767s | 0.000797s | 0.000787s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.000784s | 0.000768s | 0.000796s | byte equality observed |
| has_modulus_test.test | 10 | 0.000773s | 0.000769s | 0.000780s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.000771s | 0.000756s | 0.000796s | byte equality observed |
| has_multiplies_test.test | 10 | 0.000793s | 0.000783s | 0.000793s | byte equality observed |
| has_negate_test.test | 10 | 0.000771s | 0.000767s | 0.000815s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.000769s | 0.000778s | 0.000796s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.000771s | 0.000776s | 0.000799s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.000768s | 0.000788s | 0.000798s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.000798s | 0.000795s | 0.000775s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.000802s | 0.000793s | 0.000769s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.000809s | 0.000790s | 0.000769s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.000796s | 0.000763s | 0.000791s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.000791s | 0.000776s | 0.000782s | byte equality observed |
| has_operator_new_test.test | 10 | 0.000789s | 0.000756s | 0.000793s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.000789s | 0.000752s | 0.000786s | byte equality observed |
| has_plus_test.test | 10 | 0.000798s | 0.000768s | 0.000784s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.000798s | 0.000783s | 0.000809s | byte equality observed |
| has_post_increment_test.test | 10 | 0.000806s | 0.000768s | 0.000814s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.000789s | 0.000789s | 0.000800s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.000781s | 0.000794s | 0.000796s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.000793s | 0.000789s | 0.000795s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.000771s | 0.000797s | 0.000790s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.000768s | 0.000818s | 0.000799s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.000772s | 0.000794s | 0.000809s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.000787s | 0.000787s | 0.000813s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.000799s | 0.000801s | 0.000781s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.000800s | 0.000754s | 0.000771s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.000776s | 0.000787s | 0.000775s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.000787s | 0.000772s | 0.000815s | byte equality observed |
| has_right_shift_test.test | 10 | 0.000778s | 0.000784s | 0.000782s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.000819s | 0.000796s | 0.000795s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.000819s | 0.000817s | 0.000839s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.000823s | 0.000809s | 0.000854s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.000786s | 0.000758s | 0.000811s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.000785s | 0.000758s | 0.000809s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.000785s | 0.000795s | 0.000775s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.000792s | 0.000796s | 0.000783s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.000774s | 0.000795s | 0.000780s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.000774s | 0.000800s | 0.000795s | byte equality observed |
| integral_constant_test.test | 10 | 0.000359s | 0.000355s | 0.000800s | byte equality observed |
| is_abstract_test.test | 10 | 0.000796s | 0.000768s | 0.000774s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.000795s | 0.000792s | 0.000778s | byte equality observed |
| is_array_test.test | 10 | 0.000790s | 0.000780s | 0.000767s | byte equality observed |
| is_assignable_test.test | 10 | 0.000790s | 0.000773s | 0.000812s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.000769s | 0.000768s | 0.000785s | byte equality observed |
| is_base_of_test.test | 10 | 0.000782s | 0.000759s | 0.000782s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.000780s | 0.000770s | 0.000780s | byte equality observed |
| is_class_test.test | 10 | 0.000779s | 0.000765s | 0.000817s | byte equality observed |
| is_complete_test.test | 10 | 0.000799s | 0.000754s | 0.000791s | byte equality observed |
| is_complex_test.test | 10 | 0.000799s | 0.000763s | 0.000780s | byte equality observed |
| is_compound_test.test | 10 | 0.000793s | 0.000762s | 0.000773s | byte equality observed |
| is_const_test.test | 10 | 0.000797s | 0.000747s | 0.000775s | byte equality observed |
| is_constructible_test.test | 10 | 0.000809s | 0.000784s | 0.000775s | byte equality observed |
| is_convertible_test.test | 10 | 0.000806s | 0.000790s | 0.000802s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.000798s | 0.000792s | 0.000775s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.000797s | 0.000795s | 0.000780s | byte equality observed |
| is_default_constr_test.test | 10 | 0.000792s | 0.000776s | 0.000779s | byte equality observed |
| is_destructible_test.test | 10 | 0.000775s | 0.000754s | 0.000783s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.000791s | 0.000751s | 0.000790s | byte equality observed |
| is_detected_test.test | 10 | 0.000792s | 0.000770s | 0.000782s | byte equality observed |
| is_empty_test.test | 10 | 0.000790s | 0.000785s | 0.000792s | byte equality observed |
| is_enum_test.test | 10 | 0.000782s | 0.000774s | 0.000806s | byte equality observed |
| is_final_test.test | 10 | 0.000788s | 0.000788s | 0.000771s | byte equality observed |
| is_float_test.test | 10 | 0.000785s | 0.000806s | 0.000792s | byte equality observed |
| is_floating_point_test.test | 10 | 0.000793s | 0.000780s | 0.000774s | byte equality observed |
| is_function_test.test | 10 | 0.000791s | 0.000781s | 0.000798s | byte equality observed |
| is_fundamental_test.test | 10 | 0.000790s | 0.000780s | 0.000802s | byte equality observed |
| is_integral_test.test | 10 | 0.000768s | 0.000781s | 0.000799s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.000809s | 0.000777s | 0.000788s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.000805s | 0.000764s | 0.000807s | byte equality observed |
| is_member_func_test.test | 10 | 0.000769s | 0.000773s | 0.000783s | byte equality observed |
| is_member_obj_test.test | 10 | 0.000776s | 0.000765s | 0.000779s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.000789s | 0.000769s | 0.000808s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.000780s | 0.000781s | 0.000798s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.000782s | 0.000785s | 0.000794s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.000775s | 0.000784s | 0.000795s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.000773s | 0.000784s | 0.000794s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.000795s | 0.000790s | 0.000787s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.000760s | 0.000764s | 0.000795s | byte equality observed |
| is_object_test.test | 10 | 0.000795s | 0.000760s | 0.000807s | byte equality observed |
| is_pod_test.test | 10 | 0.000776s | 0.000780s | 0.000791s | byte equality observed |
| is_pointer_test.test | 10 | 0.000751s | 0.000772s | 0.000774s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.000793s | 0.000761s | 0.000782s | byte equality observed |
| is_reference_test.test | 10 | 0.000781s | 0.000760s | 0.000792s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.000806s | 0.000762s | 0.000774s | byte equality observed |
| is_same_test.test | 10 | 0.000774s | 0.000775s | 0.000796s | byte equality observed |
| is_scalar_test.test | 10 | 0.000805s | 0.000773s | 0.000773s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.000806s | 0.000769s | 0.000788s | byte equality observed |
| is_signed_test.test | 10 | 0.000809s | 0.000768s | 0.000777s | byte equality observed |
| is_stateless_test.test | 10 | 0.000793s | 0.000758s | 0.000777s | byte equality observed |
| is_swappable_test.test | 10 | 0.000799s | 0.000805s | 0.000794s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.000796s | 0.000797s | 0.000778s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.000780s | 0.000771s | 0.000802s | byte equality observed |
| is_union_test.test | 10 | 0.000756s | 0.000767s | 0.000780s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.000777s | 0.000780s | 0.000754s | byte equality observed |
| is_unsigned_test.test | 10 | 0.000787s | 0.000791s | 0.000780s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.000776s | 0.000791s | 0.000789s | byte equality observed |
| is_void_test.test | 10 | 0.000789s | 0.000791s | 0.000765s | byte equality observed |
| is_volatile_test.test | 10 | 0.000780s | 0.000779s | 0.000776s | byte equality observed |
| make_signed_test.test | 10 | 0.000793s | 0.000772s | 0.000788s | byte equality observed |
| make_unsigned_test.test | 10 | 0.000796s | 0.000772s | 0.000779s | byte equality observed |
| make_void_test.test | 10 | 0.000796s | 0.000783s | 0.000792s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000360s | 0.000352s | 0.000782s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000360s | 0.000356s | 0.000788s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000367s | 0.000352s | 0.000824s | byte equality observed |
| negation_test.test | 10 | 0.000772s | 0.000763s | 0.000785s | byte equality observed |
| promote_basic_test.test | 10 | 0.000352s | 0.000354s | 0.000788s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000356s | 0.000354s | 0.000799s | byte equality observed |
| promote_enum_test.test | 10 | 0.000354s | 0.000357s | 0.000788s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000357s | 0.000350s | 0.000794s | byte equality observed |
| rank_test.test | 10 | 0.000763s | 0.000787s | 0.000801s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.000787s | 0.000771s | 0.000788s | byte equality observed |
| remove_bounds_test.test | 10 | 0.000794s | 0.000800s | 0.000798s | byte equality observed |
| remove_const_test.test | 10 | 0.000789s | 0.000778s | 0.000755s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.000765s | 0.000789s | 0.000763s | byte equality observed |
| remove_cv_test.test | 10 | 0.000779s | 0.000795s | 0.000804s | byte equality observed |
| remove_extent_test.test | 10 | 0.000786s | 0.000779s | 0.000779s | byte equality observed |
| remove_pointer_test.test | 10 | 0.000783s | 0.000762s | 0.000795s | byte equality observed |
| remove_reference_test.test | 10 | 0.000800s | 0.000785s | 0.000798s | byte equality observed |
| remove_volatile_test.test | 10 | 0.000816s | 0.000752s | 0.000793s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.000787s | 0.000763s | 0.000794s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.000781s | 0.000783s | 0.000784s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.000766s | 0.000769s | 0.000798s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.000778s | 0.000778s | 0.000800s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.000787s | 0.000774s | 0.000779s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.000774s | 0.000743s | 0.000772s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.000785s | 0.000752s | 0.000791s | byte equality observed |
| type_identity_test.test | 10 | 0.000783s | 0.000770s | 0.000776s | byte equality observed |
| type_traits_test.test | 10 | 0.000354s | 0.000360s | 0.000761s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.000833s | 0.000820s | 0.000840s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45651777895).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
