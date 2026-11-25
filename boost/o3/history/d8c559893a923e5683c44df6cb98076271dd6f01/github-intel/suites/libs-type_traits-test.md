# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.095010 | 0.275682 | 0.383395 | 0.001075 | 0.001348 | 0.001257 |
| type_traits_test.test | RUN | 0.126700 | 0.279454 | 0.369990 | 0.000437 | 0.000445 | 0.001218 |
| type_identity_test.test | RUN | 0.245472 | 0.966519 | 1.957120 | 0.001233 | 0.001223 | 0.001298 |
| tricky_rvalue_test.test | RUN | 0.086382 | 0.220488 | 0.291749 | 0.001160 | 0.001251 | 0.001127 |
| tricky_partial_spec_test.test | RUN | 0.103651 | 0.318552 | 0.485184 | 0.000850 | 0.001143 | 0.001291 |
| tricky_is_enum_test.test | RUN | 0.085079 | 0.209529 | 0.273616 | 0.001253 | 0.001049 | 0.001156 |
| tricky_incomplete_type_test.test | RUN | 0.134216 | 0.325949 | 0.449901 | 0.001234 | 0.001203 | 0.001097 |
| tricky_function_type_test.test | RUN | 0.107918 | 0.341580 | 0.532781 | 0.001134 | 0.001276 | 0.001229 |
| tricky_add_pointer_test.test | RUN | 0.162863 | 0.568891 | 1.128739 | 0.001165 | 0.001305 | 0.001201 |
| tricky_abstract_type_test.test | RUN | 0.087195 | 0.208566 | 0.279542 | 0.001341 | 0.001218 | 0.001236 |
| remove_volatile_test.test | RUN | 0.219763 | 0.826431 | 1.772371 | 0.001191 | 0.001392 | 0.001270 |
| remove_reference_test.test | RUN | 0.225778 | 0.843769 | 1.854339 | 0.001335 | 0.001123 | 0.001327 |
| remove_pointer_test.test | RUN | 0.240938 | 0.911778 | 1.942750 | 0.001365 | 0.001135 | 0.001294 |
| remove_extent_test.test | RUN | 0.227184 | 0.877939 | 1.867942 | 0.001221 | 0.001203 | 0.001360 |
| remove_cv_test.test | RUN | 0.227761 | 0.874070 | 1.848110 | 0.001128 | 0.001348 | 0.001048 |
| remove_cv_ref_test.test | RUN | 0.469357 | 2.160435 | 4.629012 | 0.001195 | 0.001160 | 0.001127 |
| remove_const_test.test | RUN | 0.215871 | 0.811850 | 1.881301 | 0.001197 | 0.001262 | 0.001366 |
| remove_bounds_test.test | RUN | 0.224074 | 0.876605 | 1.900632 | 0.001164 | 0.001282 | 0.001333 |
| remove_all_extents_test.test | RUN | 0.230787 | 0.874305 | 1.879007 | 0.001274 | 0.001243 | 0.001182 |
| rank_test.test | RUN | 0.087881 | 0.218634 | 0.304378 | 0.001104 | 0.001168 | 0.001183 |
| promote_mpl_test.test | RUN | 0.076178 | 0.192279 | 0.212222 | 0.000439 | 0.000458 | 0.001388 |
| promote_enum_test.test | RUN | 0.017577 | 0.046836 | 0.050150 | 0.000411 | 0.000454 | 0.001220 |
| promote_enum_msvc_bug_test.test | RUN | 0.015538 | 0.039460 | 0.045078 | 0.000412 | 0.000440 | 0.001296 |
| promote_basic_test.test | RUN | 0.019312 | 0.053309 | 0.050115 | 0.000463 | 0.000449 | 0.001170 |
| negation_test.test | RUN | 0.084606 | 0.201697 | 0.254990 | 0.001282 | 0.001323 | 0.001126 |
| mpl_interop_test3.test | RUN | 0.072116 | 0.197587 | 0.197417 | 0.000410 | 0.000446 | 0.000956 |
| mpl_interop_test2.test | RUN | 0.024153 | 0.052646 | 0.047559 | 0.000502 | 0.000458 | 0.001100 |
| mpl_interop_test1.test | RUN | 0.014116 | 0.036995 | 0.039002 | 0.000465 | 0.000507 | 0.001095 |
| make_void_test.test | RUN | 0.090287 | 0.215031 | 0.283243 | 0.001238 | 0.001278 | 0.001195 |
| make_unsigned_test.test | RUN | 0.101631 | 0.285488 | 0.405547 | 0.001163 | 0.001162 | 0.001263 |
| make_signed_test.test | RUN | 0.100529 | 0.290864 | 0.420965 | 0.001170 | 0.001256 | 0.001062 |
| is_volatile_test.test | RUN | 0.092983 | 0.244730 | 0.337824 | 0.001165 | 0.001251 | 0.001163 |
| is_void_test.test | RUN | 0.088034 | 0.231438 | 0.318055 | 0.001463 | 0.001156 | 0.001167 |
| is_virtual_base_of_test.test | RUN | 0.102170 | 0.287418 | 0.433559 | 0.001040 | 0.001156 | 0.001181 |
| is_unsigned_test.test | RUN | 0.090245 | 0.227662 | 0.318577 | 0.001026 | 0.001094 | 0.001108 |
| is_unscoped_enum_test.test | RUN | 0.088167 | 0.203321 | 0.274460 | 0.001123 | 0.001202 | 0.001102 |
| is_union_test.test | RUN | 0.093716 | 0.267890 | 0.396824 | 0.001290 | 0.001293 | 0.001221 |
| is_unbounded_array_test.test | RUN | 0.088936 | 0.225139 | 0.308298 | 0.001235 | 0.001104 | 0.001134 |
| is_trivially_copyable_test.test | RUN | 0.140057 | 0.469588 | 0.785088 | 0.001242 | 0.001250 | 0.001173 |
| is_swappable_test.test | RUN | 0.115411 | 0.355508 | 0.567428 | 0.001176 | 0.001169 | 0.001291 |
| is_stateless_test.test | RUN | 0.131594 | 0.414247 | 0.660112 | 0.001046 | 0.001229 | 0.001173 |
| is_signed_test.test | RUN | 0.090353 | 0.235123 | 0.326140 | 0.001037 | 0.001198 | 0.001081 |
| is_scoped_enum_test.test | RUN | 0.087998 | 0.208706 | 0.281399 | 0.001276 | 0.001172 | 0.001259 |
| is_scalar_test.test | RUN | 0.116422 | 0.375897 | 0.588622 | 0.001108 | 0.001150 | 0.001263 |
| is_same_test.test | RUN | 0.082276 | 0.221305 | 0.316515 | 0.001202 | 0.000894 | 0.001328 |
| is_rvalue_reference_test.test | RUN | 0.090653 | 0.249843 | 0.358994 | 0.001233 | 0.001269 | 0.001113 |
| is_reference_test.test | RUN | 0.091432 | 0.251612 | 0.359594 | 0.001260 | 0.001235 | 0.001099 |
| is_polymorphic_test.test | RUN | 0.098001 | 0.264349 | 0.379204 | 0.001166 | 0.001221 | 0.001285 |
| is_pointer_test.test | RUN | 0.092066 | 0.261029 | 0.386873 | 0.001336 | 0.000883 | 0.001135 |
| is_pod_test.test | RUN | 0.121354 | 0.414523 | 0.671234 | 0.001244 | 0.001318 | 0.001364 |
| is_object_test.test | RUN | 0.087723 | 0.218475 | 0.282234 | 0.000884 | 0.001159 | 0.001285 |
| is_nothrow_swappable_test.test | RUN | 0.125461 | 0.388678 | 0.653993 | 0.001159 | 0.001218 | 0.001257 |
| is_nothrow_move_constructible_test.test | RUN | 0.120933 | 0.405124 | 0.657880 | 0.001404 | 0.000888 | 0.001343 |
| is_nothrow_move_assignable_test.test | RUN | 0.118587 | 0.406227 | 0.651763 | 0.001131 | 0.001157 | 0.001253 |
| is_noncopyable_test.test | RUN | 0.087715 | 0.218832 | 0.306735 | 0.001175 | 0.001164 | 0.001209 |
| is_member_pointer_test.test | RUN | 0.093838 | 0.226405 | 0.315242 | 0.001141 | 0.001188 | 0.001306 |
| is_member_obj_test.test | RUN | 0.090318 | 0.226849 | 0.318164 | 0.001251 | 0.001155 | 0.001265 |
| is_member_func_test.test | RUN | 0.089289 | 0.243595 | 0.331798 | 0.001129 | 0.001219 | 0.001224 |
| is_lvalue_reference_test.test | RUN | 0.090883 | 0.250802 | 0.363558 | 0.001034 | 0.001181 | 0.001198 |
| is_list_constructible_test.test | RUN | 0.112507 | 0.299141 | 0.406885 | 0.001232 | 0.001297 | 0.001223 |
| is_integral_test.test | RUN | 0.109518 | 0.354648 | 0.544350 | 0.001277 | 0.001257 | 0.001272 |
| is_fundamental_test.test | RUN | 0.111658 | 0.360620 | 0.557247 | 0.001061 | 0.001308 | 0.001162 |
| is_function_test.test | RUN | 0.089623 | 0.240061 | 0.331987 | 0.001132 | 0.001155 | 0.001153 |
| is_floating_point_test.test | RUN | 0.097248 | 0.257605 | 0.368956 | 0.001171 | 0.001447 | 0.001219 |
| is_float_test.test | RUN | 0.091599 | 0.255995 | 0.363668 | 0.001027 | 0.001231 | 0.001168 |
| is_final_test.test | RUN | 0.091490 | 0.258792 | 0.377308 | 0.001072 | 0.001241 | 0.001097 |
| is_enum_test.test | RUN | 0.088068 | 0.221622 | 0.299418 | 0.001144 | 0.001360 | 0.001104 |
| is_empty_test.test | RUN | 0.097382 | 0.239775 | 0.331322 | 0.001205 | 0.001373 | 0.001187 |
| is_detected_test.test | RUN | 0.085458 | 0.209813 | 0.273596 | 0.001230 | 0.001223 | 0.001145 |
| is_detected_exact_test.test | RUN | 0.085469 | 0.207639 | 0.274199 | 0.001176 | 0.001126 | 0.001063 |
| is_destructible_test.test | RUN | 0.117421 | 0.401589 | 0.632306 | 0.001118 | 0.001277 | 0.001251 |
| is_default_constr_test.test | RUN | 0.121719 | 0.410407 | 0.660634 | 0.001146 | 0.001438 | 0.001269 |
| is_copy_constructible_test.test | RUN | 0.125951 | 0.428442 | 0.705643 | 0.001041 | 0.001250 | 0.001184 |
| is_copy_assignable_test.test | RUN | 0.126148 | 0.418874 | 0.694084 | 0.001046 | 0.001001 | 0.001321 |
| is_convertible_test.test | RUN | 0.121695 | 0.381489 | 0.567212 | 0.001253 | 0.001455 | 0.001157 |
| is_constructible_test.test | RUN | 0.102209 | 0.280834 | 0.401419 | 0.001102 | 0.001149 | 0.001121 |
| is_const_test.test | RUN | 0.088771 | 0.241988 | 0.333039 | 0.001112 | 0.000990 | 0.001202 |
| is_compound_test.test | RUN | 0.084539 | 0.213725 | 0.274007 | 0.001346 | 0.001323 | 0.001160 |
| is_complex_test.test | RUN | 0.114208 | 0.285376 | 0.386050 | 0.001133 | 0.001258 | 0.001245 |
| is_complete_test.test | RUN | 0.099538 | 0.285676 | 0.430876 | 0.001304 | 0.001065 | 0.001131 |
| is_class_test.test | RUN | 0.095631 | 0.251017 | 0.356754 | 0.001166 | 0.001145 | 0.001021 |
| is_bounded_array_test.test | RUN | 0.088394 | 0.226514 | 0.310867 | 0.001058 | 0.001145 | 0.001217 |
| is_base_of_test.test | RUN | 0.095437 | 0.249665 | 0.356335 | 0.001135 | 0.001172 | 0.001282 |
| is_base_and_derived_test.test | RUN | 0.093932 | 0.243449 | 0.347904 | 0.001197 | 0.001395 | 0.001022 |
| is_assignable_test.test | RUN | 0.111638 | 0.342488 | 0.521414 | 0.001178 | 0.001326 | 0.001180 |
| is_array_test.test | RUN | 0.092272 | 0.241126 | 0.335366 | 0.000944 | 0.001212 | 0.001175 |
| is_arithmetic_test.test | RUN | 0.112471 | 0.349722 | 0.536801 | 0.001058 | 0.001292 | 0.001203 |
| is_abstract_test.test | RUN | 0.203819 | 0.942832 | 2.010892 | 0.001377 | 0.001250 | 0.001117 |
| integral_constant_test.test | RUN | 0.013403 | 0.036561 | 0.039753 | 0.000520 | 0.000523 | 0.001190 |
| has_virtual_destructor_test.test | RUN | 0.098346 | 0.274359 | 0.420259 | 0.001186 | 0.001238 | 0.001196 |
| has_unary_plus_test.test | RUN | 0.186194 | 0.964850 | 1.492935 | 0.001567 | 0.001280 | 0.001275 |
| has_unary_minus_test.test | RUN | 0.177015 | 0.965573 | 1.459392 | 0.001415 | 0.001277 | 0.001113 |
| has_trivial_move_constructor_test.test | RUN | 0.127285 | 0.420363 | 0.687334 | 0.001184 | 0.001309 | 0.001387 |
| has_trivial_move_assign_test.test | RUN | 0.128558 | 0.410192 | 0.661595 | 0.001224 | 0.001352 | 0.001208 |
| has_trivial_destructor_test.test | RUN | 0.125622 | 0.404705 | 0.676945 | 0.001436 | 0.001260 | 0.001193 |
| has_trivial_copy_test.test | RUN | 0.128592 | 0.435447 | 0.703507 | 0.001086 | 0.001281 | 0.001263 |
| has_trivial_constr_test.test | RUN | 0.129822 | 0.441897 | 0.695317 | 0.001358 | 0.001214 | 0.001172 |
| has_trivial_assign_test.test | RUN | 0.128236 | 0.432163 | 0.687625 | 0.001233 | 0.001343 | 0.001219 |
| has_right_shift_test.test | RUN | 0.193548 | 0.782917 | 1.572714 | 0.001373 | 0.001324 | 0.001342 |
| has_right_shift_assign_test.test | RUN | 0.182223 | 0.753926 | 1.451236 | 0.001079 | 0.001241 | 0.001162 |
| has_prefix_classes3_test.test | RUN | 0.134996 | 0.450709 | 0.768317 | 0.001300 | 0.001346 | 0.001200 |
| has_prefix_classes2_test.test | RUN | 0.135350 | 0.445679 | 0.753126 | 0.001118 | 0.001139 | 0.001296 |
| has_prefix_classes1_test.test | RUN | 0.135875 | 0.454496 | 0.693584 | 0.001231 | 0.001262 | 0.001249 |
| has_prefix_classes0_test.test | RUN | 0.134299 | 0.449255 | 0.732014 | 0.001403 | 0.001253 | 0.001241 |
| has_pre_increment_test.test | RUN | 0.184100 | 0.967261 | 1.454370 | 0.001147 | 0.001262 | 0.001118 |
| has_pre_decrement_test.test | RUN | 0.183925 | 0.954014 | 1.441063 | 0.001154 | 0.001108 | 0.001129 |
| has_postfix_classes3_test.test | RUN | 0.139628 | 0.449685 | 0.756595 | 0.001242 | 0.001298 | 0.001410 |
| has_postfix_classes2_test.test | RUN | 0.135244 | 0.442345 | 0.736356 | 0.001362 | 0.001034 | 0.001095 |
| has_postfix_classes1_test.test | RUN | 0.134128 | 0.453282 | 0.732172 | 0.001206 | 0.001247 | 0.001324 |
| has_postfix_classes0_test.test | RUN | 0.139219 | 0.452412 | 0.721577 | 0.001216 | 0.001283 | 0.001349 |
| has_post_increment_test.test | RUN | 0.182039 | 0.967062 | 1.494104 | 0.001406 | 0.001206 | 0.001058 |
| has_post_decrement_test.test | RUN | 0.183924 | 0.970228 | 1.487869 | 0.001233 | 0.001177 | 0.001080 |
| has_plus_test.test | RUN | 0.185920 | 0.750828 | 1.471259 | 0.001197 | 0.001310 | 0.001417 |
| has_plus_assign_test.test | RUN | 0.189795 | 0.751918 | 1.468323 | 0.001332 | 0.001244 | 0.001116 |
| has_operator_new_test.test | RUN | 0.126941 | 0.388833 | 0.662080 | 0.001334 | 0.001400 | 0.001359 |
| has_nothrow_destructor_test.test | RUN | 0.131244 | 0.434650 | 0.718423 | 0.001236 | 0.001324 | 0.001232 |
| has_nothrow_copy_test.test | RUN | 0.124820 | 0.418421 | 0.690598 | 0.001222 | 0.001176 | 0.001287 |
| has_nothrow_constr_test.test | RUN | 0.123014 | 0.406473 | 0.657348 | 0.001195 | 0.001123 | 0.001173 |
| has_nothrow_assign_test.test | RUN | 0.122626 | 0.418870 | 0.672198 | 0.001426 | 0.001376 | 0.001177 |
| has_not_equal_to_test.test | RUN | 0.186802 | 0.964646 | 1.476491 | 0.001168 | 0.001328 | 0.001331 |
| has_negate_test.test | RUN | 0.179478 | 0.731497 | 1.453460 | 0.001390 | 0.001371 | 0.001412 |
| has_multiplies_test.test | RUN | 0.183264 | 0.753839 | 1.483957 | 0.001161 | 0.001298 | 0.001183 |
| has_multiplies_assign_test.test | RUN | 0.188650 | 0.744077 | 1.429206 | 0.001092 | 0.001234 | 0.001112 |
| has_modulus_test.test | RUN | 0.186335 | 0.751296 | 1.439584 | 0.001253 | 0.001340 | 0.001196 |
| has_modulus_assign_test.test | RUN | 0.183806 | 0.754799 | 1.469322 | 0.001164 | 0.001339 | 0.001317 |
| has_minus_test.test | RUN | 0.188056 | 0.762486 | 1.475371 | 0.001247 | 0.001345 | 0.001134 |
| has_minus_assign_test.test | RUN | 0.191758 | 0.758129 | 1.453492 | 0.001206 | 0.001351 | 0.001326 |
| has_logical_or_test.test | RUN | 0.186095 | 0.760729 | 1.439140 | 0.001176 | 0.001359 | 0.001308 |
| has_logical_not_test.test | RUN | 0.170982 | 0.742726 | 1.443069 | 0.001164 | 0.001208 | 0.001397 |
| has_logical_and_test.test | RUN | 0.186529 | 0.767699 | 1.481156 | 0.001202 | 0.001222 | 0.001173 |
| has_less_test.test | RUN | 0.185073 | 0.961655 | 1.458571 | 0.001175 | 0.001312 | 0.001274 |
| has_less_equal_test.test | RUN | 0.189352 | 0.951869 | 1.448117 | 0.001163 | 0.001072 | 0.001441 |
| has_left_shift_test.test | RUN | 0.203399 | 0.956938 | 1.845209 | 0.001165 | 0.001210 | 0.001208 |
| has_left_shift_assign_test.test | RUN | 0.182656 | 0.745854 | 1.485254 | 0.001229 | 0.001204 | 0.001170 |
| has_greater_test.test | RUN | 0.185403 | 0.960878 | 1.450047 | 0.001292 | 0.001276 | 0.001166 |
| has_greater_equal_test.test | RUN | 0.188797 | 0.974215 | 1.447043 | 0.001284 | 0.001342 | 0.001328 |
| has_equal_to_test.test | RUN | 0.183072 | 0.944935 | 1.515952 | 0.001477 | 0.001185 | 0.001059 |
| has_divides_test.test | RUN | 0.182278 | 0.756586 | 1.488731 | 0.001143 | 0.001241 | 0.001054 |
| has_divides_assign_test.test | RUN | 0.189256 | 0.736509 | 1.441180 | 0.001520 | 0.001334 | 0.001301 |
| has_dereference_test.test | RUN | 0.179420 | 0.741154 | 1.389618 | 0.001086 | 0.001367 | 0.001297 |
| has_complement_test.test | RUN | 0.178445 | 0.980544 | 1.425644 | 0.001025 | 0.001319 | 0.000934 |
| has_bit_xor_test.test | RUN | 0.183192 | 0.762512 | 1.495865 | 0.001264 | 0.001263 | 0.001136 |
| has_bit_xor_assign_test.test | RUN | 0.186800 | 0.755379 | 1.483449 | 0.001283 | 0.001194 | 0.001101 |
| has_bit_or_test.test | RUN | 0.181787 | 0.757969 | 1.443125 | 0.001196 | 0.001172 | 0.001221 |
| has_bit_or_assign_test.test | RUN | 0.183810 | 0.763427 | 1.426433 | 0.001081 | 0.001286 | 0.001115 |
| has_bit_and_test.test | RUN | 0.181177 | 0.761233 | 1.494617 | 0.001130 | 0.001097 | 0.001108 |
| has_bit_and_assign_test.test | RUN | 0.184085 | 0.757865 | 1.491702 | 0.001335 | 0.001246 | 0.001371 |
| has_binary_classes9_test.test | RUN | 0.197074 | 0.901808 | 1.638328 | 0.001045 | 0.001456 | 0.001204 |
| has_binary_classes8_test.test | RUN | 0.197169 | 0.923617 | 1.673576 | 0.001036 | 0.001328 | 0.001414 |
| has_binary_classes7_test.test | RUN | 0.201512 | 0.914862 | 1.679903 | 0.001183 | 0.001158 | 0.001150 |
| has_binary_classes6_test.test | RUN | 0.199804 | 0.876252 | 1.648416 | 0.001323 | 0.001294 | 0.001228 |
| has_binary_classes5_test.test | RUN | 0.195765 | 0.874899 | 1.650586 | 0.000974 | 0.001351 | 0.001341 |
| has_binary_classes4_test.test | RUN | 0.194694 | 0.904127 | 1.635159 | 0.001183 | 0.001534 | 0.001255 |
| has_binary_classes3_test.test | RUN | 0.200603 | 0.916869 | 1.681845 | 0.001223 | 0.001306 | 0.001441 |
| has_binary_classes2_test.test | RUN | 0.202297 | 0.916982 | 1.685035 | 0.001446 | 0.001181 | 0.001181 |
| has_binary_classes1_test.test | RUN | 0.200508 | 0.920085 | 1.654684 | 0.001026 | 0.001246 | 0.001347 |
| has_binary_classes0_test.test | RUN | 0.198632 | 0.937803 | 1.627067 | 0.001068 | 0.001142 | 0.001124 |
| function_traits_test.test | RUN | 0.092659 | 0.239048 | 0.343682 | 0.001330 | 0.001312 | 0.001136 |
| floating_point_promotion_test.test | RUN | 0.089611 | 0.237258 | 0.324981 | 0.001240 | 0.001258 | 0.001125 |
| extent_test.test | RUN | 0.090492 | 0.242395 | 0.343637 | 0.001164 | 0.001382 | 0.001329 |
| enable_if_test.test | RUN | 0.085724 | 0.208592 | 0.265852 | 0.001111 | 0.001044 | 0.001348 |
| disjunction_test.test | RUN | 0.086318 | 0.214479 | 0.293208 | 0.000886 | 0.001391 | 0.001506 |
| detected_test.test | RUN | 0.084869 | 0.200709 | 0.268369 | 0.001174 | 0.001138 | 0.001155 |
| detected_or_test.test | RUN | 0.086623 | 0.215345 | 0.283120 | 0.001140 | 0.001371 | 0.001251 |
| decay_test.test | RUN | 0.220378 | 0.815085 | 1.571267 | 0.001205 | 0.001170 | 0.001225 |
| cxx14_aliases_test.test | RUN | 0.134971 | 0.313787 | 0.453275 | 0.001187 | 0.001337 | 0.001120 |
| copy_reference_test.test | RUN | 0.089231 | 0.205968 | 0.282200 | 0.001228 | 0.001163 | 0.001106 |
| copy_cv_test.test | RUN | 0.092073 | 0.224903 | 0.302930 | 0.001140 | 0.001140 | 0.001164 |
| copy_cv_ref_test.test | RUN | 0.127781 | 0.376887 | 0.643792 | 0.001353 | 0.001231 | 0.001232 |
| conjunction_test.test | RUN | 0.087138 | 0.211926 | 0.287793 | 0.001189 | 0.001412 | 0.001178 |
| conditional_test.test | RUN | 0.088691 | 0.213483 | 0.279203 | 0.001231 | 0.001199 | 0.001310 |
| common_type_test.test | RUN | 0.118780 | 0.322624 | 0.519287 | 0.001164 | 0.001345 | 0.001402 |
| common_type_sfinae_test.test | RUN | 0.082784 | 0.201066 | 0.266307 | 0.001208 | 0.001324 | 0.001218 |
| common_type_sfinae2_test.test | RUN | 0.090753 | 0.212904 | 0.282087 | 0.001192 | 0.001264 | 0.001186 |
| common_type_6_test.test | RUN | 0.094179 | 0.214185 | 0.298110 | 0.001270 | 0.001149 | 0.001346 |
| common_type_5_test.test | RUN | 0.091814 | 0.215105 | 0.289402 | 0.001283 | 0.001281 | 0.001321 |
| common_type_4_test.test | RUN | 0.098256 | 0.237322 | 0.343239 | 0.001421 | 0.001281 | 0.001174 |
| common_type_3_test.test | RUN | 0.086506 | 0.198680 | 0.255339 | 0.001298 | 0.001162 | 0.001229 |
| common_type_2_test.test | RUN | 0.117394 | 0.317630 | 0.519135 | 0.001334 | 0.001234 | 0.001371 |
| alignment_of_test.test | RUN | 0.096256 | 0.256580 | 0.342431 | 0.001173 | 0.001168 | 0.001335 |
| alignment_of_a2_test.test | RUN | 0.098770 | 0.256862 | 0.337244 | 0.001426 | 0.001203 | 0.001167 |
| aligned_storage_test.test | RUN | 0.098867 | 0.254025 | 0.324870 | 0.001280 | 0.001273 | 0.001172 |
| aligned_storage_empy_test.test | RUN | 0.108287 | 0.276854 | 0.420444 | 0.001164 | 0.001290 | 0.001114 |
| aligned_storage_a2_test.test | RUN | 0.095857 | 0.249459 | 0.320194 | 0.001322 | 0.001544 | 0.001341 |
| add_volatile_test.test | RUN | 0.202981 | 0.721500 | 1.453441 | 0.001022 | 0.001295 | 0.001299 |
| add_rvalue_reference_test.test | RUN | 0.227814 | 0.822154 | 1.712130 | 0.001405 | 0.001315 | 0.001204 |
| add_reference_test.test | RUN | 0.221567 | 0.794007 | 1.678096 | 0.001250 | 0.001309 | 0.001219 |
| add_pointer_test.test | RUN | 0.142887 | 0.448940 | 0.875750 | 0.001191 | 0.001346 | 0.001353 |
| add_lvalue_reference_test.test | RUN | 0.219364 | 0.793608 | 1.708595 | 0.001206 | 0.001113 | 0.001404 |
| add_cv_test.test | RUN | 0.206991 | 0.731911 | 1.593960 | 0.001325 | 0.001181 | 0.001086 |
| add_const_test.test | RUN | 0.208710 | 0.735631 | 1.537821 | 0.001197 | 0.001231 | 0.001196 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.081233 | 0.194748 | 0.256943 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.087702 | 0.193993 | 0.269412 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.080965 | 0.190323 | 0.252594 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.080860 | 0.191238 | 0.253236 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.081425 | 0.189464 | 0.251329 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.081429 | 0.192256 | 0.247432 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.082255 | 0.191301 | 0.250729 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.081460 | 0.187578 | 0.248161 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.080654 | 0.191673 | 0.251329 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.081611 | 0.189231 | 0.249608 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.081587 | 0.193573 | 0.250332 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.082858 | 0.194194 | 0.248345 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.082687 | 0.194911 | 0.251195 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.081558 | 0.191849 | 0.250879 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.080269 | 0.193479 | 0.249932 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.080755 | 0.188437 | 0.247312 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.080007 | 0.191756 | 0.248904 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.081329 | 0.191802 | 0.254144 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.081313 | 0.192741 | 0.250606 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.081061 | 0.187639 | 0.246566 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.080952 | 0.191543 | 0.250884 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.081353 | 0.193379 | 0.252288 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.127259 | 0.407308 | 0.690667 | 0.001371 | 0.001284 | 0.001211 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.119935 | 0.417777 | 0.675671 | 0.001334 | 0.001184 | 0.001166 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.123882 | 0.418277 | 0.691604 | 0.001309 | 0.001195 | 0.001180 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.124013 | 0.405691 | 0.681672 | 0.000860 | 0.001300 | 0.000814 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.080811 | 0.272303 | 0.401040 | 0.000993 | 0.000902 | 0.000951 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.004× | 1.003×, 1.004× | 1.000× |
| clang | 1.026× | 1.021×, 1.030× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45697047144).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.000795s | 0.000768s | 0.000766s | byte equality observed |
| add_cv_test.test | 10 | 0.000790s | 0.000791s | 0.000819s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.000763s | 0.000794s | 0.000785s | byte equality observed |
| add_pointer_test.test | 10 | 0.000791s | 0.000792s | 0.000793s | byte equality observed |
| add_reference_test.test | 10 | 0.000770s | 0.000820s | 0.000795s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.000783s | 0.000798s | 0.000786s | byte equality observed |
| add_volatile_test.test | 10 | 0.000779s | 0.000777s | 0.000779s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.000821s | 0.000854s | 0.000821s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.000799s | 0.000803s | 0.000815s | byte equality observed |
| aligned_storage_test.test | 10 | 0.000853s | 0.000821s | 0.000842s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.000792s | 0.000797s | 0.000812s | byte equality observed |
| alignment_of_test.test | 10 | 0.000784s | 0.000783s | 0.000807s | byte equality observed |
| common_type_2_test.test | 10 | 0.000794s | 0.000774s | 0.000800s | byte equality observed |
| common_type_3_test.test | 10 | 0.000792s | 0.000798s | 0.000808s | byte equality observed |
| common_type_4_test.test | 10 | 0.000782s | 0.000823s | 0.000790s | byte equality observed |
| common_type_5_test.test | 10 | 0.000788s | 0.000811s | 0.000785s | byte equality observed |
| common_type_6_test.test | 10 | 0.000773s | 0.000804s | 0.000791s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.000780s | 0.000799s | 0.000772s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.000798s | 0.000805s | 0.000796s | byte equality observed |
| common_type_test.test | 10 | 0.000779s | 0.000788s | 0.000791s | byte equality observed |
| conditional_test.test | 10 | 0.000788s | 0.000780s | 0.000800s | byte equality observed |
| conjunction_test.test | 10 | 0.000782s | 0.000812s | 0.000780s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.000787s | 0.000799s | 0.000808s | byte equality observed |
| copy_cv_test.test | 10 | 0.000792s | 0.000797s | 0.000787s | byte equality observed |
| copy_reference_test.test | 10 | 0.000788s | 0.000810s | 0.000802s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.000776s | 0.000773s | 0.000796s | byte equality observed |
| decay_test.test | 10 | 0.000786s | 0.000790s | 0.000817s | byte equality observed |
| detected_or_test.test | 10 | 0.000780s | 0.000831s | 0.000779s | byte equality observed |
| detected_test.test | 10 | 0.000784s | 0.000825s | 0.000794s | byte equality observed |
| disjunction_test.test | 10 | 0.000793s | 0.000779s | 0.000797s | byte equality observed |
| enable_if_test.test | 10 | 0.000784s | 0.000805s | 0.000781s | byte equality observed |
| extent_test.test | 10 | 0.000775s | 0.000778s | 0.000815s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.000772s | 0.000766s | 0.000808s | byte equality observed |
| function_traits_test.test | 10 | 0.000782s | 0.000747s | 0.000800s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000793s | 0.000774s | 0.000783s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.000777s | 0.000788s | 0.000780s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.000768s | 0.000786s | 0.000785s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.000781s | 0.000839s | 0.000792s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.000776s | 0.000809s | 0.000800s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.000775s | 0.000797s | 0.000821s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.000785s | 0.000811s | 0.000799s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.000794s | 0.000789s | 0.000801s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.000804s | 0.000835s | 0.000795s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.000805s | 0.000799s | 0.000793s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.000792s | 0.000794s | 0.000788s | byte equality observed |
| has_bit_and_test.test | 10 | 0.000779s | 0.000777s | 0.000819s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.000796s | 0.000793s | 0.000816s | byte equality observed |
| has_bit_or_test.test | 10 | 0.000783s | 0.000820s | 0.000790s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.000796s | 0.000797s | 0.000776s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.000779s | 0.000808s | 0.000785s | byte equality observed |
| has_complement_test.test | 10 | 0.000780s | 0.000804s | 0.000789s | byte equality observed |
| has_dereference_test.test | 10 | 0.000765s | 0.000785s | 0.000783s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.000792s | 0.000774s | 0.000804s | byte equality observed |
| has_divides_test.test | 10 | 0.000771s | 0.000763s | 0.000808s | byte equality observed |
| has_equal_to_test.test | 10 | 0.000781s | 0.000768s | 0.000796s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.000778s | 0.000786s | 0.000809s | byte equality observed |
| has_greater_test.test | 10 | 0.000798s | 0.000817s | 0.000816s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.000797s | 0.000801s | 0.000836s | byte equality observed |
| has_left_shift_test.test | 10 | 0.000792s | 0.000813s | 0.000793s | byte equality observed |
| has_less_equal_test.test | 10 | 0.000772s | 0.000813s | 0.000791s | byte equality observed |
| has_less_test.test | 10 | 0.000795s | 0.000806s | 0.000800s | byte equality observed |
| has_logical_and_test.test | 10 | 0.000792s | 0.000808s | 0.000780s | byte equality observed |
| has_logical_not_test.test | 10 | 0.000793s | 0.000815s | 0.000807s | byte equality observed |
| has_logical_or_test.test | 10 | 0.000771s | 0.000795s | 0.000788s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.000786s | 0.000795s | 0.000796s | byte equality observed |
| has_minus_test.test | 10 | 0.000782s | 0.000785s | 0.000811s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.000777s | 0.000786s | 0.000796s | byte equality observed |
| has_modulus_test.test | 10 | 0.000780s | 0.000788s | 0.000797s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.000785s | 0.000782s | 0.000786s | byte equality observed |
| has_multiplies_test.test | 10 | 0.000782s | 0.000782s | 0.000802s | byte equality observed |
| has_negate_test.test | 10 | 0.000798s | 0.000806s | 0.000777s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.000805s | 0.000804s | 0.000775s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.000799s | 0.000786s | 0.000793s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.000795s | 0.000800s | 0.000808s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.000769s | 0.000777s | 0.000807s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.000795s | 0.000786s | 0.000812s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.000809s | 0.000757s | 0.000765s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.000806s | 0.000798s | 0.000787s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.000791s | 0.000773s | 0.000779s | byte equality observed |
| has_operator_new_test.test | 10 | 0.000795s | 0.000788s | 0.000778s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.000790s | 0.000783s | 0.000793s | byte equality observed |
| has_plus_test.test | 10 | 0.000770s | 0.000768s | 0.000794s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.000795s | 0.000774s | 0.000820s | byte equality observed |
| has_post_increment_test.test | 10 | 0.000767s | 0.000783s | 0.000775s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.000785s | 0.000794s | 0.000775s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.000788s | 0.000779s | 0.000773s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.000767s | 0.000812s | 0.000793s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.000775s | 0.000800s | 0.000785s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.000791s | 0.000796s | 0.000824s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.000806s | 0.000786s | 0.000798s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.000788s | 0.000787s | 0.000785s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.000804s | 0.000792s | 0.000791s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.000801s | 0.000768s | 0.000798s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.000777s | 0.000774s | 0.000783s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.000795s | 0.000780s | 0.000795s | byte equality observed |
| has_right_shift_test.test | 10 | 0.000778s | 0.000775s | 0.000799s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.000816s | 0.000805s | 0.000825s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.000838s | 0.000808s | 0.000851s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.000821s | 0.000792s | 0.000832s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.000781s | 0.000779s | 0.000778s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.000784s | 0.000794s | 0.000791s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.000775s | 0.000752s | 0.000801s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.000781s | 0.000787s | 0.000782s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.000780s | 0.000781s | 0.000789s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.000805s | 0.000789s | 0.000774s | byte equality observed |
| integral_constant_test.test | 10 | 0.000364s | 0.000368s | 0.000794s | byte equality observed |
| is_abstract_test.test | 10 | 0.000783s | 0.000786s | 0.000773s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.000794s | 0.000778s | 0.000786s | byte equality observed |
| is_array_test.test | 10 | 0.000774s | 0.000778s | 0.000797s | byte equality observed |
| is_assignable_test.test | 10 | 0.000782s | 0.000790s | 0.000825s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.000798s | 0.000795s | 0.000808s | byte equality observed |
| is_base_of_test.test | 10 | 0.000783s | 0.000788s | 0.000788s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.000784s | 0.000806s | 0.000792s | byte equality observed |
| is_class_test.test | 10 | 0.000788s | 0.000772s | 0.000783s | byte equality observed |
| is_complete_test.test | 10 | 0.000797s | 0.000793s | 0.000796s | byte equality observed |
| is_complex_test.test | 10 | 0.000795s | 0.000797s | 0.000782s | byte equality observed |
| is_compound_test.test | 10 | 0.000832s | 0.000783s | 0.000766s | byte equality observed |
| is_const_test.test | 10 | 0.000790s | 0.000782s | 0.000796s | byte equality observed |
| is_constructible_test.test | 10 | 0.000815s | 0.000770s | 0.000800s | byte equality observed |
| is_convertible_test.test | 10 | 0.000811s | 0.000782s | 0.000824s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.000796s | 0.000791s | 0.000805s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.000787s | 0.000774s | 0.000783s | byte equality observed |
| is_default_constr_test.test | 10 | 0.000781s | 0.000774s | 0.000777s | byte equality observed |
| is_destructible_test.test | 10 | 0.000776s | 0.000797s | 0.000803s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.000780s | 0.000773s | 0.000777s | byte equality observed |
| is_detected_test.test | 10 | 0.000788s | 0.000792s | 0.000776s | byte equality observed |
| is_empty_test.test | 10 | 0.000787s | 0.000799s | 0.000775s | byte equality observed |
| is_enum_test.test | 10 | 0.000781s | 0.000784s | 0.000785s | byte equality observed |
| is_final_test.test | 10 | 0.000802s | 0.000783s | 0.000810s | byte equality observed |
| is_float_test.test | 10 | 0.000790s | 0.000793s | 0.000814s | byte equality observed |
| is_floating_point_test.test | 10 | 0.000799s | 0.000794s | 0.000777s | byte equality observed |
| is_function_test.test | 10 | 0.000806s | 0.000778s | 0.000784s | byte equality observed |
| is_fundamental_test.test | 10 | 0.000808s | 0.000775s | 0.000798s | byte equality observed |
| is_integral_test.test | 10 | 0.000785s | 0.000770s | 0.000826s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.000770s | 0.000811s | 0.000780s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.000783s | 0.000799s | 0.000781s | byte equality observed |
| is_member_func_test.test | 10 | 0.000778s | 0.000783s | 0.000777s | byte equality observed |
| is_member_obj_test.test | 10 | 0.000770s | 0.000792s | 0.000775s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.000792s | 0.000770s | 0.000784s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.000789s | 0.000789s | 0.000797s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.000760s | 0.000788s | 0.000824s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.000792s | 0.000815s | 0.000814s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.000804s | 0.000777s | 0.000781s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.000810s | 0.000776s | 0.000771s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.000793s | 0.000781s | 0.000778s | byte equality observed |
| is_object_test.test | 10 | 0.000795s | 0.000805s | 0.000765s | byte equality observed |
| is_pod_test.test | 10 | 0.000784s | 0.000778s | 0.000787s | byte equality observed |
| is_pointer_test.test | 10 | 0.000785s | 0.000798s | 0.000780s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.000786s | 0.000788s | 0.000794s | byte equality observed |
| is_reference_test.test | 10 | 0.000802s | 0.000783s | 0.000797s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.000818s | 0.000781s | 0.000794s | byte equality observed |
| is_same_test.test | 10 | 0.000788s | 0.000762s | 0.000798s | byte equality observed |
| is_scalar_test.test | 10 | 0.000778s | 0.000783s | 0.000807s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.000799s | 0.000808s | 0.000767s | byte equality observed |
| is_signed_test.test | 10 | 0.000807s | 0.000768s | 0.000788s | byte equality observed |
| is_stateless_test.test | 10 | 0.000799s | 0.000794s | 0.000792s | byte equality observed |
| is_swappable_test.test | 10 | 0.000786s | 0.000805s | 0.000812s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.000801s | 0.000795s | 0.000794s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.000803s | 0.000765s | 0.000800s | byte equality observed |
| is_union_test.test | 10 | 0.000789s | 0.000799s | 0.000774s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.000792s | 0.000765s | 0.000785s | byte equality observed |
| is_unsigned_test.test | 10 | 0.000786s | 0.000772s | 0.000795s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.000799s | 0.000752s | 0.000794s | byte equality observed |
| is_void_test.test | 10 | 0.000786s | 0.000765s | 0.000778s | byte equality observed |
| is_volatile_test.test | 10 | 0.000781s | 0.000791s | 0.000790s | byte equality observed |
| make_signed_test.test | 10 | 0.000777s | 0.000783s | 0.000793s | byte equality observed |
| make_unsigned_test.test | 10 | 0.000798s | 0.000806s | 0.000771s | byte equality observed |
| make_void_test.test | 10 | 0.000780s | 0.000820s | 0.000796s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000365s | 0.000370s | 0.000770s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000367s | 0.000366s | 0.000788s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000360s | 0.000359s | 0.000803s | byte equality observed |
| negation_test.test | 10 | 0.000787s | 0.000790s | 0.000792s | byte equality observed |
| promote_basic_test.test | 10 | 0.000364s | 0.000361s | 0.000796s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000360s | 0.000369s | 0.000807s | byte equality observed |
| promote_enum_test.test | 10 | 0.000359s | 0.000370s | 0.000785s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000366s | 0.000361s | 0.000757s | byte equality observed |
| rank_test.test | 10 | 0.000783s | 0.000801s | 0.000774s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.000819s | 0.000797s | 0.000795s | byte equality observed |
| remove_bounds_test.test | 10 | 0.000800s | 0.000789s | 0.000786s | byte equality observed |
| remove_const_test.test | 10 | 0.000797s | 0.000766s | 0.000761s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.000783s | 0.000775s | 0.000774s | byte equality observed |
| remove_cv_test.test | 10 | 0.000786s | 0.000795s | 0.000788s | byte equality observed |
| remove_extent_test.test | 10 | 0.000816s | 0.000796s | 0.000787s | byte equality observed |
| remove_pointer_test.test | 10 | 0.000795s | 0.000803s | 0.000801s | byte equality observed |
| remove_reference_test.test | 10 | 0.000780s | 0.000796s | 0.000789s | byte equality observed |
| remove_volatile_test.test | 10 | 0.000793s | 0.000795s | 0.000770s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.000761s | 0.000822s | 0.000767s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.000776s | 0.000772s | 0.000775s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.000803s | 0.000756s | 0.000776s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.000762s | 0.000789s | 0.000769s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.000779s | 0.000796s | 0.000779s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.000786s | 0.000782s | 0.000804s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.000803s | 0.000808s | 0.000792s | byte equality observed |
| type_identity_test.test | 10 | 0.000802s | 0.000782s | 0.000806s | byte equality observed |
| type_traits_test.test | 10 | 0.000364s | 0.000364s | 0.000796s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.000844s | 0.000853s | 0.000834s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45697047144).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
