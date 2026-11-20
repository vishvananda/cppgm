# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.091274 | 0.272200 | 0.389367 | 0.001202 | 0.001216 | 0.001235 |
| type_traits_test.test | RUN | 0.124255 | 0.272811 | 0.380995 | 0.000456 | 0.000484 | 0.001213 |
| type_identity_test.test | RUN | 0.244504 | 0.918145 | 1.987569 | 0.001128 | 0.001149 | 0.001282 |
| tricky_rvalue_test.test | RUN | 0.082661 | 0.218530 | 0.302385 | 0.001202 | 0.001291 | 0.001212 |
| tricky_partial_spec_test.test | RUN | 0.099453 | 0.309367 | 0.475788 | 0.001007 | 0.001165 | 0.001407 |
| tricky_is_enum_test.test | RUN | 0.076452 | 0.196894 | 0.277660 | 0.001091 | 0.001176 | 0.001124 |
| tricky_incomplete_type_test.test | RUN | 0.129127 | 0.308184 | 0.446708 | 0.001042 | 0.001170 | 0.001370 |
| tricky_function_type_test.test | RUN | 0.108391 | 0.324427 | 0.516901 | 0.001124 | 0.001218 | 0.001372 |
| tricky_add_pointer_test.test | RUN | 0.162464 | 0.553701 | 1.142763 | 0.001163 | 0.001169 | 0.001434 |
| tricky_abstract_type_test.test | RUN | 0.087828 | 0.201464 | 0.285412 | 0.001197 | 0.001213 | 0.001153 |
| remove_volatile_test.test | RUN | 0.217753 | 0.806625 | 1.779649 | 0.001081 | 0.001284 | 0.001277 |
| remove_reference_test.test | RUN | 0.224001 | 0.840324 | 1.846366 | 0.001079 | 0.001274 | 0.001248 |
| remove_pointer_test.test | RUN | 0.233120 | 0.885066 | 1.947136 | 0.001083 | 0.001170 | 0.001412 |
| remove_extent_test.test | RUN | 0.222715 | 0.850176 | 1.864429 | 0.001039 | 0.001183 | 0.001366 |
| remove_cv_test.test | RUN | 0.220963 | 0.854078 | 1.865598 | 0.001092 | 0.001223 | 0.001316 |
| remove_cv_ref_test.test | RUN | 0.475912 | 2.092814 | 4.690842 | 0.001024 | 0.001190 | 0.001306 |
| remove_const_test.test | RUN | 0.210986 | 0.795214 | 1.754377 | 0.001173 | 0.001286 | 0.001274 |
| remove_bounds_test.test | RUN | 0.226802 | 0.850662 | 1.867748 | 0.001191 | 0.001344 | 0.001201 |
| remove_all_extents_test.test | RUN | 0.229672 | 0.854341 | 1.969977 | 0.001092 | 0.001163 | 0.001179 |
| rank_test.test | RUN | 0.081348 | 0.219573 | 0.286657 | 0.001044 | 0.001145 | 0.001204 |
| promote_mpl_test.test | RUN | 0.074840 | 0.195545 | 0.209327 | 0.000440 | 0.000525 | 0.001199 |
| promote_enum_test.test | RUN | 0.015405 | 0.045436 | 0.051549 | 0.000440 | 0.000462 | 0.001422 |
| promote_enum_msvc_bug_test.test | RUN | 0.014429 | 0.038801 | 0.044385 | 0.000457 | 0.000484 | 0.001378 |
| promote_basic_test.test | RUN | 0.017918 | 0.051612 | 0.052786 | 0.000461 | 0.000488 | 0.001274 |
| negation_test.test | RUN | 0.079460 | 0.206789 | 0.257417 | 0.001099 | 0.000892 | 0.001118 |
| mpl_interop_test3.test | RUN | 0.069956 | 0.183452 | 0.199311 | 0.000444 | 0.000424 | 0.000990 |
| mpl_interop_test2.test | RUN | 0.023469 | 0.049268 | 0.054780 | 0.000500 | 0.000490 | 0.001120 |
| mpl_interop_test1.test | RUN | 0.012569 | 0.037719 | 0.038618 | 0.000481 | 0.000483 | 0.001369 |
| make_void_test.test | RUN | 0.082956 | 0.208903 | 0.302965 | 0.001250 | 0.001148 | 0.001256 |
| make_unsigned_test.test | RUN | 0.097288 | 0.279561 | 0.397728 | 0.001186 | 0.001185 | 0.001161 |
| make_signed_test.test | RUN | 0.098959 | 0.281407 | 0.427599 | 0.000963 | 0.000989 | 0.000879 |
| is_volatile_test.test | RUN | 0.088298 | 0.232650 | 0.343328 | 0.001016 | 0.001172 | 0.001260 |
| is_void_test.test | RUN | 0.081499 | 0.222552 | 0.310854 | 0.001261 | 0.001121 | 0.001366 |
| is_virtual_base_of_test.test | RUN | 0.096421 | 0.285078 | 0.442135 | 0.001202 | 0.001018 | 0.001133 |
| is_unsigned_test.test | RUN | 0.085516 | 0.232352 | 0.336027 | 0.001096 | 0.000971 | 0.001294 |
| is_unscoped_enum_test.test | RUN | 0.083330 | 0.202427 | 0.280588 | 0.001080 | 0.001266 | 0.001195 |
| is_union_test.test | RUN | 0.088871 | 0.259011 | 0.380670 | 0.001419 | 0.001238 | 0.001243 |
| is_unbounded_array_test.test | RUN | 0.081762 | 0.220608 | 0.316769 | 0.001276 | 0.001251 | 0.001186 |
| is_trivially_copyable_test.test | RUN | 0.139282 | 0.465752 | 0.775452 | 0.001065 | 0.001223 | 0.001298 |
| is_swappable_test.test | RUN | 0.111946 | 0.347686 | 0.575720 | 0.001065 | 0.001054 | 0.001196 |
| is_stateless_test.test | RUN | 0.129224 | 0.407257 | 0.652386 | 0.001277 | 0.001102 | 0.001443 |
| is_signed_test.test | RUN | 0.085996 | 0.232159 | 0.322487 | 0.001274 | 0.001188 | 0.001374 |
| is_scoped_enum_test.test | RUN | 0.085090 | 0.205558 | 0.277852 | 0.001215 | 0.001172 | 0.001230 |
| is_scalar_test.test | RUN | 0.114298 | 0.367638 | 0.575844 | 0.000986 | 0.001080 | 0.001292 |
| is_same_test.test | RUN | 0.086200 | 0.217409 | 0.308576 | 0.001192 | 0.001188 | 0.001359 |
| is_rvalue_reference_test.test | RUN | 0.087743 | 0.249605 | 0.359349 | 0.001065 | 0.001253 | 0.001299 |
| is_reference_test.test | RUN | 0.088584 | 0.248857 | 0.356331 | 0.001104 | 0.001109 | 0.001452 |
| is_polymorphic_test.test | RUN | 0.091088 | 0.260061 | 0.391930 | 0.000999 | 0.001229 | 0.001283 |
| is_pointer_test.test | RUN | 0.091469 | 0.253966 | 0.373114 | 0.001123 | 0.001035 | 0.001238 |
| is_pod_test.test | RUN | 0.116909 | 0.409461 | 0.689036 | 0.001155 | 0.001222 | 0.001212 |
| is_object_test.test | RUN | 0.083620 | 0.212898 | 0.301659 | 0.001109 | 0.001203 | 0.001404 |
| is_nothrow_swappable_test.test | RUN | 0.121454 | 0.380552 | 0.624791 | 0.001041 | 0.001191 | 0.001201 |
| is_nothrow_move_constructible_test.test | RUN | 0.117153 | 0.393584 | 0.635561 | 0.001175 | 0.001074 | 0.001296 |
| is_nothrow_move_assignable_test.test | RUN | 0.117133 | 0.392301 | 0.642571 | 0.001143 | 0.001247 | 0.001125 |
| is_noncopyable_test.test | RUN | 0.080341 | 0.220127 | 0.291068 | 0.001064 | 0.000863 | 0.001134 |
| is_member_pointer_test.test | RUN | 0.085422 | 0.222603 | 0.291016 | 0.000967 | 0.001274 | 0.001143 |
| is_member_obj_test.test | RUN | 0.083372 | 0.224332 | 0.302004 | 0.001163 | 0.001208 | 0.001140 |
| is_member_func_test.test | RUN | 0.085906 | 0.227846 | 0.330891 | 0.001104 | 0.001123 | 0.001230 |
| is_lvalue_reference_test.test | RUN | 0.086203 | 0.241390 | 0.350267 | 0.001231 | 0.001132 | 0.001163 |
| is_list_constructible_test.test | RUN | 0.103326 | 0.290238 | 0.395283 | 0.001056 | 0.001226 | 0.001354 |
| is_integral_test.test | RUN | 0.105979 | 0.348553 | 0.547234 | 0.001210 | 0.001080 | 0.001261 |
| is_fundamental_test.test | RUN | 0.106804 | 0.347638 | 0.565803 | 0.001310 | 0.001100 | 0.001127 |
| is_function_test.test | RUN | 0.086279 | 0.233606 | 0.327547 | 0.001028 | 0.000861 | 0.001132 |
| is_floating_point_test.test | RUN | 0.089212 | 0.250393 | 0.362506 | 0.000933 | 0.001153 | 0.001281 |
| is_float_test.test | RUN | 0.087541 | 0.259326 | 0.370904 | 0.001141 | 0.001277 | 0.001465 |
| is_final_test.test | RUN | 0.084490 | 0.253954 | 0.375363 | 0.001192 | 0.001105 | 0.001043 |
| is_enum_test.test | RUN | 0.078897 | 0.217975 | 0.288932 | 0.001145 | 0.001125 | 0.001046 |
| is_empty_test.test | RUN | 0.089453 | 0.234817 | 0.332787 | 0.000991 | 0.001373 | 0.001251 |
| is_detected_test.test | RUN | 0.080577 | 0.207398 | 0.267847 | 0.001145 | 0.001190 | 0.001161 |
| is_detected_exact_test.test | RUN | 0.079546 | 0.198095 | 0.273036 | 0.001096 | 0.001075 | 0.001139 |
| is_destructible_test.test | RUN | 0.111963 | 0.391307 | 0.632259 | 0.001229 | 0.001219 | 0.001179 |
| is_default_constr_test.test | RUN | 0.118211 | 0.400401 | 0.652714 | 0.001012 | 0.001203 | 0.001143 |
| is_copy_constructible_test.test | RUN | 0.118786 | 0.419376 | 0.702038 | 0.001126 | 0.001231 | 0.001259 |
| is_copy_assignable_test.test | RUN | 0.120893 | 0.413183 | 0.683787 | 0.001178 | 0.000794 | 0.001172 |
| is_convertible_test.test | RUN | 0.111320 | 0.375007 | 0.560260 | 0.000995 | 0.001160 | 0.001073 |
| is_constructible_test.test | RUN | 0.097087 | 0.271344 | 0.392989 | 0.001010 | 0.001328 | 0.001118 |
| is_const_test.test | RUN | 0.083912 | 0.239736 | 0.327474 | 0.001180 | 0.001058 | 0.001171 |
| is_compound_test.test | RUN | 0.078774 | 0.208107 | 0.261448 | 0.001120 | 0.001131 | 0.001143 |
| is_complex_test.test | RUN | 0.105901 | 0.273908 | 0.366780 | 0.001041 | 0.001229 | 0.001186 |
| is_complete_test.test | RUN | 0.092756 | 0.278266 | 0.422523 | 0.000993 | 0.001046 | 0.001098 |
| is_class_test.test | RUN | 0.085037 | 0.246302 | 0.355634 | 0.001168 | 0.001383 | 0.001116 |
| is_bounded_array_test.test | RUN | 0.080360 | 0.228931 | 0.299378 | 0.001210 | 0.001228 | 0.001103 |
| is_base_of_test.test | RUN | 0.086783 | 0.245179 | 0.350164 | 0.000967 | 0.001180 | 0.001186 |
| is_base_and_derived_test.test | RUN | 0.084794 | 0.238344 | 0.343073 | 0.000967 | 0.001326 | 0.001151 |
| is_assignable_test.test | RUN | 0.102875 | 0.343270 | 0.528147 | 0.001049 | 0.001130 | 0.001254 |
| is_array_test.test | RUN | 0.081998 | 0.237172 | 0.330175 | 0.001057 | 0.001120 | 0.001218 |
| is_arithmetic_test.test | RUN | 0.103218 | 0.349413 | 0.538572 | 0.001120 | 0.001214 | 0.001095 |
| is_abstract_test.test | RUN | 0.192418 | 0.916393 | 1.997182 | 0.000989 | 0.001170 | 0.001100 |
| integral_constant_test.test | RUN | 0.012377 | 0.036505 | 0.039901 | 0.000488 | 0.000467 | 0.001154 |
| has_virtual_destructor_test.test | RUN | 0.088508 | 0.268320 | 0.384892 | 0.000983 | 0.001200 | 0.001256 |
| has_unary_plus_test.test | RUN | 0.174970 | 0.955784 | 1.469953 | 0.001120 | 0.001161 | 0.001053 |
| has_unary_minus_test.test | RUN | 0.172916 | 0.936602 | 1.419960 | 0.001083 | 0.001216 | 0.001108 |
| has_trivial_move_constructor_test.test | RUN | 0.118173 | 0.411136 | 0.694078 | 0.001144 | 0.001125 | 0.001279 |
| has_trivial_move_assign_test.test | RUN | 0.116108 | 0.393851 | 0.636023 | 0.001054 | 0.001302 | 0.001195 |
| has_trivial_destructor_test.test | RUN | 0.120032 | 0.406109 | 0.688668 | 0.001061 | 0.001157 | 0.001129 |
| has_trivial_copy_test.test | RUN | 0.120557 | 0.428884 | 0.703291 | 0.001060 | 0.001370 | 0.001202 |
| has_trivial_constr_test.test | RUN | 0.123062 | 0.428432 | 0.697763 | 0.001061 | 0.001248 | 0.001218 |
| has_trivial_assign_test.test | RUN | 0.117474 | 0.426801 | 0.694212 | 0.001056 | 0.001278 | 0.001182 |
| has_right_shift_test.test | RUN | 0.182895 | 0.765200 | 1.543426 | 0.001291 | 0.001327 | 0.001241 |
| has_right_shift_assign_test.test | RUN | 0.178215 | 0.735950 | 1.431984 | 0.001220 | 0.001128 | 0.001092 |
| has_prefix_classes3_test.test | RUN | 0.128171 | 0.441313 | 0.750419 | 0.001159 | 0.001194 | 0.001134 |
| has_prefix_classes2_test.test | RUN | 0.131132 | 0.436903 | 0.735718 | 0.001049 | 0.001096 | 0.001358 |
| has_prefix_classes1_test.test | RUN | 0.130486 | 0.443020 | 0.686113 | 0.001111 | 0.001341 | 0.001272 |
| has_prefix_classes0_test.test | RUN | 0.128668 | 0.436113 | 0.734875 | 0.001159 | 0.001079 | 0.001289 |
| has_pre_increment_test.test | RUN | 0.174205 | 0.984917 | 1.424732 | 0.001082 | 0.001108 | 0.001237 |
| has_pre_decrement_test.test | RUN | 0.178072 | 0.985788 | 1.426685 | 0.001054 | 0.001050 | 0.001017 |
| has_postfix_classes3_test.test | RUN | 0.128857 | 0.435809 | 0.754780 | 0.001207 | 0.001266 | 0.001186 |
| has_postfix_classes2_test.test | RUN | 0.129146 | 0.436181 | 0.710761 | 0.001053 | 0.001160 | 0.001092 |
| has_postfix_classes1_test.test | RUN | 0.129801 | 0.450239 | 0.723308 | 0.001181 | 0.001282 | 0.001166 |
| has_postfix_classes0_test.test | RUN | 0.130342 | 0.446517 | 0.741028 | 0.001002 | 0.001203 | 0.001167 |
| has_post_increment_test.test | RUN | 0.174419 | 0.942231 | 1.437597 | 0.001240 | 0.001180 | 0.001072 |
| has_post_decrement_test.test | RUN | 0.177066 | 0.929348 | 1.433035 | 0.001081 | 0.001213 | 0.001116 |
| has_plus_test.test | RUN | 0.177998 | 0.728409 | 1.419373 | 0.000995 | 0.001201 | 0.001182 |
| has_plus_assign_test.test | RUN | 0.179265 | 0.733297 | 1.437168 | 0.001043 | 0.001155 | 0.001097 |
| has_operator_new_test.test | RUN | 0.116253 | 0.384384 | 0.642176 | 0.001079 | 0.001225 | 0.001285 |
| has_nothrow_destructor_test.test | RUN | 0.123848 | 0.423653 | 0.674924 | 0.001092 | 0.001237 | 0.001153 |
| has_nothrow_copy_test.test | RUN | 0.117001 | 0.402738 | 0.677303 | 0.001038 | 0.001157 | 0.001160 |
| has_nothrow_constr_test.test | RUN | 0.118705 | 0.388293 | 0.647146 | 0.001022 | 0.001096 | 0.001191 |
| has_nothrow_assign_test.test | RUN | 0.116825 | 0.391564 | 0.667778 | 0.001152 | 0.001288 | 0.001130 |
| has_not_equal_to_test.test | RUN | 0.175234 | 0.940975 | 1.466934 | 0.001089 | 0.001144 | 0.001251 |
| has_negate_test.test | RUN | 0.169167 | 0.711341 | 1.396636 | 0.001063 | 0.001267 | 0.001189 |
| has_multiplies_test.test | RUN | 0.178117 | 0.728058 | 1.413375 | 0.001079 | 0.001083 | 0.001196 |
| has_multiplies_assign_test.test | RUN | 0.172306 | 0.723603 | 1.438683 | 0.001239 | 0.001243 | 0.001266 |
| has_modulus_test.test | RUN | 0.174764 | 0.730695 | 1.426157 | 0.001097 | 0.001307 | 0.001136 |
| has_modulus_assign_test.test | RUN | 0.167689 | 0.735912 | 1.396996 | 0.000981 | 0.001201 | 0.001145 |
| has_minus_test.test | RUN | 0.182995 | 0.742657 | 1.522587 | 0.001068 | 0.001075 | 0.001268 |
| has_minus_assign_test.test | RUN | 0.183859 | 0.730471 | 1.508542 | 0.001107 | 0.001205 | 0.001147 |
| has_logical_or_test.test | RUN | 0.175522 | 0.736444 | 1.435868 | 0.001120 | 0.001089 | 0.001212 |
| has_logical_not_test.test | RUN | 0.168423 | 0.714080 | 1.360007 | 0.001030 | 0.001065 | 0.001214 |
| has_logical_and_test.test | RUN | 0.179020 | 0.736289 | 1.475165 | 0.001102 | 0.001160 | 0.001088 |
| has_less_test.test | RUN | 0.181716 | 0.927369 | 1.482420 | 0.001143 | 0.001196 | 0.001055 |
| has_less_equal_test.test | RUN | 0.176775 | 0.928377 | 1.404952 | 0.001089 | 0.001177 | 0.001164 |
| has_left_shift_test.test | RUN | 0.195511 | 0.931445 | 1.783661 | 0.001001 | 0.001141 | 0.001266 |
| has_left_shift_assign_test.test | RUN | 0.171940 | 0.737886 | 1.403956 | 0.001038 | 0.001079 | 0.001258 |
| has_greater_test.test | RUN | 0.181062 | 0.917558 | 1.426997 | 0.001132 | 0.001214 | 0.001055 |
| has_greater_equal_test.test | RUN | 0.175761 | 0.942413 | 1.439484 | 0.001041 | 0.001189 | 0.001218 |
| has_equal_to_test.test | RUN | 0.172535 | 0.918661 | 1.418268 | 0.001072 | 0.001157 | 0.001385 |
| has_divides_test.test | RUN | 0.179056 | 0.736389 | 1.440056 | 0.001013 | 0.001303 | 0.001115 |
| has_divides_assign_test.test | RUN | 0.179983 | 0.731191 | 1.449398 | 0.001125 | 0.001232 | 0.001099 |
| has_dereference_test.test | RUN | 0.177050 | 0.723752 | 1.404687 | 0.001084 | 0.001174 | 0.001275 |
| has_complement_test.test | RUN | 0.172276 | 0.941247 | 1.408344 | 0.001031 | 0.001234 | 0.001173 |
| has_bit_xor_test.test | RUN | 0.176146 | 0.727148 | 1.464945 | 0.001026 | 0.001172 | 0.001121 |
| has_bit_xor_assign_test.test | RUN | 0.170455 | 0.722698 | 1.465310 | 0.001147 | 0.001294 | 0.001067 |
| has_bit_or_test.test | RUN | 0.178334 | 0.737370 | 1.421369 | 0.001108 | 0.001254 | 0.001262 |
| has_bit_or_assign_test.test | RUN | 0.176954 | 0.731428 | 1.402265 | 0.001064 | 0.001232 | 0.001127 |
| has_bit_and_test.test | RUN | 0.173627 | 0.715840 | 1.496158 | 0.001021 | 0.001289 | 0.001101 |
| has_bit_and_assign_test.test | RUN | 0.180625 | 0.726957 | 1.490441 | 0.001182 | 0.001262 | 0.001016 |
| has_binary_classes9_test.test | RUN | 0.196556 | 0.869597 | 1.628583 | 0.001141 | 0.001373 | 0.001150 |
| has_binary_classes8_test.test | RUN | 0.194393 | 0.886929 | 1.602909 | 0.000897 | 0.001307 | 0.001257 |
| has_binary_classes7_test.test | RUN | 0.190997 | 0.865481 | 1.659760 | 0.001043 | 0.001329 | 0.001121 |
| has_binary_classes6_test.test | RUN | 0.186018 | 0.846917 | 1.672677 | 0.001138 | 0.001177 | 0.001096 |
| has_binary_classes5_test.test | RUN | 0.187820 | 0.845640 | 1.623919 | 0.001021 | 0.001299 | 0.001161 |
| has_binary_classes4_test.test | RUN | 0.189321 | 0.869550 | 1.614570 | 0.000800 | 0.001331 | 0.001128 |
| has_binary_classes3_test.test | RUN | 0.199598 | 0.870852 | 1.667884 | 0.001031 | 0.001310 | 0.001186 |
| has_binary_classes2_test.test | RUN | 0.186858 | 0.887839 | 1.656702 | 0.001085 | 0.001327 | 0.001082 |
| has_binary_classes1_test.test | RUN | 0.189670 | 0.881731 | 1.620073 | 0.001010 | 0.001308 | 0.001205 |
| has_binary_classes0_test.test | RUN | 0.186167 | 0.880004 | 1.592001 | 0.001093 | 0.001164 | 0.001140 |
| function_traits_test.test | RUN | 0.087060 | 0.231784 | 0.338809 | 0.001051 | 0.001316 | 0.001258 |
| floating_point_promotion_test.test | RUN | 0.085997 | 0.226212 | 0.313033 | 0.001192 | 0.001335 | 0.001023 |
| extent_test.test | RUN | 0.085734 | 0.232584 | 0.334081 | 0.001180 | 0.001149 | 0.001070 |
| enable_if_test.test | RUN | 0.079044 | 0.200797 | 0.262137 | 0.001050 | 0.001239 | 0.001212 |
| disjunction_test.test | RUN | 0.082174 | 0.203800 | 0.268844 | 0.001051 | 0.001262 | 0.001155 |
| detected_test.test | RUN | 0.082236 | 0.197883 | 0.259072 | 0.001348 | 0.001150 | 0.001130 |
| detected_or_test.test | RUN | 0.089682 | 0.204284 | 0.276153 | 0.001126 | 0.001310 | 0.001015 |
| decay_test.test | RUN | 0.223295 | 0.789677 | 1.558826 | 0.001130 | 0.001317 | 0.001111 |
| cxx14_aliases_test.test | RUN | 0.133182 | 0.302816 | 0.425881 | 0.001232 | 0.001235 | 0.001041 |
| copy_reference_test.test | RUN | 0.083533 | 0.202302 | 0.271618 | 0.001142 | 0.001171 | 0.001046 |
| copy_cv_test.test | RUN | 0.087482 | 0.214170 | 0.293366 | 0.001038 | 0.001145 | 0.001087 |
| copy_cv_ref_test.test | RUN | 0.123104 | 0.356579 | 0.630298 | 0.001137 | 0.001057 | 0.001095 |
| conjunction_test.test | RUN | 0.082559 | 0.210441 | 0.280287 | 0.001088 | 0.001092 | 0.001094 |
| conditional_test.test | RUN | 0.082344 | 0.202594 | 0.272250 | 0.001130 | 0.001116 | 0.001123 |
| common_type_test.test | RUN | 0.113272 | 0.317905 | 0.516438 | 0.001095 | 0.001038 | 0.001088 |
| common_type_sfinae_test.test | RUN | 0.080366 | 0.191672 | 0.260398 | 0.001120 | 0.001144 | 0.001197 |
| common_type_sfinae2_test.test | RUN | 0.084174 | 0.206968 | 0.277613 | 0.001041 | 0.001062 | 0.001134 |
| common_type_6_test.test | RUN | 0.087830 | 0.207633 | 0.291482 | 0.000974 | 0.001049 | 0.001006 |
| common_type_5_test.test | RUN | 0.084957 | 0.209861 | 0.286072 | 0.001087 | 0.001347 | 0.001016 |
| common_type_4_test.test | RUN | 0.092070 | 0.224459 | 0.337557 | 0.001185 | 0.001049 | 0.001032 |
| common_type_3_test.test | RUN | 0.077273 | 0.191883 | 0.253448 | 0.000957 | 0.001142 | 0.001045 |
| common_type_2_test.test | RUN | 0.110407 | 0.312375 | 0.511120 | 0.001011 | 0.001129 | 0.001005 |
| alignment_of_test.test | RUN | 0.085730 | 0.246985 | 0.348590 | 0.001229 | 0.001100 | 0.001183 |
| alignment_of_a2_test.test | RUN | 0.089132 | 0.243382 | 0.341880 | 0.001354 | 0.001217 | 0.001186 |
| aligned_storage_test.test | RUN | 0.094463 | 0.249833 | 0.317851 | 0.001081 | 0.001068 | 0.001258 |
| aligned_storage_empy_test.test | RUN | 0.104598 | 0.274771 | 0.417732 | 0.001065 | 0.001164 | 0.000996 |
| aligned_storage_a2_test.test | RUN | 0.098962 | 0.242479 | 0.317022 | 0.001122 | 0.001418 | 0.001237 |
| add_volatile_test.test | RUN | 0.196962 | 0.702800 | 1.486658 | 0.001390 | 0.001116 | 0.001153 |
| add_rvalue_reference_test.test | RUN | 0.220563 | 0.787612 | 1.672132 | 0.001109 | 0.001091 | 0.001076 |
| add_reference_test.test | RUN | 0.214835 | 0.774994 | 1.652945 | 0.001061 | 0.001228 | 0.001117 |
| add_pointer_test.test | RUN | 0.138244 | 0.443674 | 0.866047 | 0.000992 | 0.001160 | 0.001167 |
| add_lvalue_reference_test.test | RUN | 0.212781 | 0.784430 | 1.630126 | 0.001203 | 0.001317 | 0.001218 |
| add_cv_test.test | RUN | 0.201297 | 0.740247 | 1.574403 | 0.001182 | 0.001141 | 0.001185 |
| add_const_test.test | RUN | 0.203558 | 0.730336 | 1.556800 | 0.001031 | 0.001138 | 0.001137 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.076153 | 0.191289 | 0.249664 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.081608 | 0.195960 | 0.260180 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.077308 | 0.184694 | 0.246243 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.076758 | 0.184291 | 0.244419 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.075704 | 0.187743 | 0.235275 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.077292 | 0.179206 | 0.239181 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.077909 | 0.178998 | 0.243335 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.078035 | 0.187320 | 0.243091 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.078889 | 0.185216 | 0.248682 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.078903 | 0.189753 | 0.245236 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.078438 | 0.185650 | 0.243714 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.078187 | 0.186659 | 0.240524 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.078897 | 0.180579 | 0.239523 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.076875 | 0.179712 | 0.241766 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.076492 | 0.186297 | 0.241115 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.077213 | 0.187406 | 0.241855 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.078513 | 0.186859 | 0.240677 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.077244 | 0.189788 | 0.246636 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.076804 | 0.186083 | 0.244706 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.075805 | 0.184538 | 0.243325 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.077586 | 0.186554 | 0.242995 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.077084 | 0.187307 | 0.246053 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.119607 | 0.397482 | 0.671278 | 0.001147 | 0.001201 | 0.000985 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.114649 | 0.404215 | 0.666429 | 0.001171 | 0.001388 | 0.001117 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.118158 | 0.402785 | 0.662728 | 0.001093 | 0.000768 | 0.001036 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.120330 | 0.396624 | 0.651039 | 0.000806 | 0.000810 | 0.000790 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.078363 | 0.320922 | 0.377896 | 0.000850 | 0.000900 | 0.000855 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998× | 1.000×, 0.996× | 1.005× |
| clang | 1.029× | 1.027×, 1.032× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44780058957).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.000777s | 0.000774s | 0.000786s | byte equality observed |
| add_cv_test.test | 10 | 0.000784s | 0.000762s | 0.000802s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.000808s | 0.000801s | 0.000762s | byte equality observed |
| add_pointer_test.test | 10 | 0.000781s | 0.000771s | 0.000779s | byte equality observed |
| add_reference_test.test | 10 | 0.000794s | 0.000777s | 0.000797s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.000791s | 0.000801s | 0.000759s | byte equality observed |
| add_volatile_test.test | 10 | 0.000771s | 0.000747s | 0.000800s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.000814s | 0.000827s | 0.000832s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.000775s | 0.000792s | 0.000800s | byte equality observed |
| aligned_storage_test.test | 10 | 0.000834s | 0.000808s | 0.000831s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.000796s | 0.000777s | 0.000765s | byte equality observed |
| alignment_of_test.test | 10 | 0.000782s | 0.000782s | 0.000805s | byte equality observed |
| common_type_2_test.test | 10 | 0.000753s | 0.000780s | 0.000798s | byte equality observed |
| common_type_3_test.test | 10 | 0.000785s | 0.000784s | 0.000807s | byte equality observed |
| common_type_4_test.test | 10 | 0.000767s | 0.000781s | 0.000812s | byte equality observed |
| common_type_5_test.test | 10 | 0.000787s | 0.000798s | 0.000774s | byte equality observed |
| common_type_6_test.test | 10 | 0.000780s | 0.000786s | 0.000776s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.000774s | 0.000760s | 0.000769s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.000773s | 0.000797s | 0.000779s | byte equality observed |
| common_type_test.test | 10 | 0.000776s | 0.000763s | 0.000752s | byte equality observed |
| conditional_test.test | 10 | 0.000781s | 0.000759s | 0.000772s | byte equality observed |
| conjunction_test.test | 10 | 0.000766s | 0.000794s | 0.000754s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.000784s | 0.000805s | 0.000769s | byte equality observed |
| copy_cv_test.test | 10 | 0.000762s | 0.000801s | 0.000799s | byte equality observed |
| copy_reference_test.test | 10 | 0.000788s | 0.000800s | 0.000798s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.000804s | 0.000797s | 0.000803s | byte equality observed |
| decay_test.test | 10 | 0.000789s | 0.000780s | 0.000795s | byte equality observed |
| detected_or_test.test | 10 | 0.000778s | 0.000781s | 0.000776s | byte equality observed |
| detected_test.test | 10 | 0.000790s | 0.000798s | 0.000782s | byte equality observed |
| disjunction_test.test | 10 | 0.000793s | 0.000789s | 0.000775s | byte equality observed |
| enable_if_test.test | 10 | 0.000792s | 0.000757s | 0.000773s | byte equality observed |
| extent_test.test | 10 | 0.000801s | 0.000777s | 0.000753s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.000778s | 0.000770s | 0.000756s | byte equality observed |
| function_traits_test.test | 10 | 0.000768s | 0.000793s | 0.000764s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000779s | 0.000776s | 0.000788s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.000798s | 0.000791s | 0.000807s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.000798s | 0.000759s | 0.000782s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.000784s | 0.000755s | 0.000771s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.000766s | 0.000768s | 0.000774s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.000776s | 0.000795s | 0.000774s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.000798s | 0.000743s | 0.000761s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.000780s | 0.000784s | 0.000791s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.000788s | 0.000786s | 0.000782s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.000772s | 0.000784s | 0.000769s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.000794s | 0.000772s | 0.000790s | byte equality observed |
| has_bit_and_test.test | 10 | 0.000785s | 0.000780s | 0.000819s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.000773s | 0.000781s | 0.000813s | byte equality observed |
| has_bit_or_test.test | 10 | 0.000786s | 0.000791s | 0.000801s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.000762s | 0.000783s | 0.000768s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.000797s | 0.000779s | 0.000774s | byte equality observed |
| has_complement_test.test | 10 | 0.000790s | 0.000767s | 0.000757s | byte equality observed |
| has_dereference_test.test | 10 | 0.000785s | 0.000774s | 0.000770s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.000785s | 0.000777s | 0.000750s | byte equality observed |
| has_divides_test.test | 10 | 0.000784s | 0.000780s | 0.000769s | byte equality observed |
| has_equal_to_test.test | 10 | 0.000764s | 0.000775s | 0.000778s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.000795s | 0.000761s | 0.000776s | byte equality observed |
| has_greater_test.test | 10 | 0.000779s | 0.000763s | 0.000778s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.000793s | 0.000766s | 0.000791s | byte equality observed |
| has_left_shift_test.test | 10 | 0.000782s | 0.000774s | 0.000787s | byte equality observed |
| has_less_equal_test.test | 10 | 0.000772s | 0.000758s | 0.000798s | byte equality observed |
| has_less_test.test | 10 | 0.000784s | 0.000782s | 0.000802s | byte equality observed |
| has_logical_and_test.test | 10 | 0.000775s | 0.000783s | 0.000775s | byte equality observed |
| has_logical_not_test.test | 10 | 0.000775s | 0.000771s | 0.000772s | byte equality observed |
| has_logical_or_test.test | 10 | 0.000780s | 0.000782s | 0.000771s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.000785s | 0.000776s | 0.000805s | byte equality observed |
| has_minus_test.test | 10 | 0.000785s | 0.000767s | 0.000787s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.000803s | 0.000768s | 0.000758s | byte equality observed |
| has_modulus_test.test | 10 | 0.000775s | 0.000774s | 0.000775s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.000768s | 0.000771s | 0.000777s | byte equality observed |
| has_multiplies_test.test | 10 | 0.000776s | 0.000776s | 0.000783s | byte equality observed |
| has_negate_test.test | 10 | 0.000792s | 0.000773s | 0.000749s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.000786s | 0.000782s | 0.000750s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.000765s | 0.000772s | 0.000778s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.000775s | 0.000787s | 0.000800s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.000758s | 0.000768s | 0.000778s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.000802s | 0.000768s | 0.000778s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.000804s | 0.000778s | 0.000791s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.000796s | 0.000781s | 0.000781s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.000775s | 0.000810s | 0.000790s | byte equality observed |
| has_operator_new_test.test | 10 | 0.000778s | 0.000775s | 0.000798s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.000789s | 0.000763s | 0.000764s | byte equality observed |
| has_plus_test.test | 10 | 0.000777s | 0.000768s | 0.000757s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.000760s | 0.000787s | 0.000785s | byte equality observed |
| has_post_increment_test.test | 10 | 0.000793s | 0.000778s | 0.000776s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.000787s | 0.000763s | 0.000775s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.000785s | 0.000782s | 0.000787s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.000768s | 0.000796s | 0.000771s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.000770s | 0.000797s | 0.000781s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.000765s | 0.000781s | 0.000773s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.000773s | 0.000801s | 0.000788s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.000790s | 0.000783s | 0.000776s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.000774s | 0.000767s | 0.000781s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.000779s | 0.000773s | 0.000785s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.000796s | 0.000771s | 0.000800s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.000794s | 0.000789s | 0.000783s | byte equality observed |
| has_right_shift_test.test | 10 | 0.000796s | 0.000785s | 0.000790s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.000803s | 0.000812s | 0.000786s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.000810s | 0.000817s | 0.000819s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.000799s | 0.000816s | 0.000829s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.000787s | 0.000755s | 0.000786s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.000766s | 0.000768s | 0.000753s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.000796s | 0.000750s | 0.000801s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.000796s | 0.000772s | 0.000783s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.000793s | 0.000768s | 0.000785s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.000799s | 0.000765s | 0.000759s | byte equality observed |
| integral_constant_test.test | 10 | 0.000359s | 0.000358s | 0.000748s | byte equality observed |
| is_abstract_test.test | 10 | 0.000771s | 0.000765s | 0.000773s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.000772s | 0.000774s | 0.000764s | byte equality observed |
| is_array_test.test | 10 | 0.000781s | 0.000769s | 0.000770s | byte equality observed |
| is_assignable_test.test | 10 | 0.000777s | 0.000788s | 0.000785s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.000779s | 0.000798s | 0.000771s | byte equality observed |
| is_base_of_test.test | 10 | 0.000771s | 0.000797s | 0.000799s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.000764s | 0.000794s | 0.000759s | byte equality observed |
| is_class_test.test | 10 | 0.000757s | 0.000777s | 0.000782s | byte equality observed |
| is_complete_test.test | 10 | 0.000769s | 0.000772s | 0.000787s | byte equality observed |
| is_complex_test.test | 10 | 0.000774s | 0.000757s | 0.000781s | byte equality observed |
| is_compound_test.test | 10 | 0.000771s | 0.000786s | 0.000782s | byte equality observed |
| is_const_test.test | 10 | 0.000780s | 0.000773s | 0.000801s | byte equality observed |
| is_constructible_test.test | 10 | 0.000769s | 0.000807s | 0.000791s | byte equality observed |
| is_convertible_test.test | 10 | 0.000760s | 0.000805s | 0.000804s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.000777s | 0.000760s | 0.000785s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.000783s | 0.000785s | 0.000784s | byte equality observed |
| is_default_constr_test.test | 10 | 0.000801s | 0.000798s | 0.000785s | byte equality observed |
| is_destructible_test.test | 10 | 0.000781s | 0.000782s | 0.000770s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.000766s | 0.000779s | 0.000771s | byte equality observed |
| is_detected_test.test | 10 | 0.000770s | 0.000789s | 0.000783s | byte equality observed |
| is_empty_test.test | 10 | 0.000785s | 0.000766s | 0.000778s | byte equality observed |
| is_enum_test.test | 10 | 0.000771s | 0.000768s | 0.000764s | byte equality observed |
| is_final_test.test | 10 | 0.000774s | 0.000774s | 0.000774s | byte equality observed |
| is_float_test.test | 10 | 0.000751s | 0.000760s | 0.000804s | byte equality observed |
| is_floating_point_test.test | 10 | 0.000775s | 0.000777s | 0.000797s | byte equality observed |
| is_function_test.test | 10 | 0.000762s | 0.000781s | 0.000777s | byte equality observed |
| is_fundamental_test.test | 10 | 0.000763s | 0.000761s | 0.000755s | byte equality observed |
| is_integral_test.test | 10 | 0.000771s | 0.000772s | 0.000804s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.000764s | 0.000749s | 0.000766s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.000769s | 0.000771s | 0.000791s | byte equality observed |
| is_member_func_test.test | 10 | 0.000786s | 0.000767s | 0.000817s | byte equality observed |
| is_member_obj_test.test | 10 | 0.000770s | 0.000786s | 0.000770s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.000769s | 0.000777s | 0.000790s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.000776s | 0.000767s | 0.000795s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.000787s | 0.000784s | 0.000788s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.000766s | 0.000782s | 0.000799s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.000762s | 0.000778s | 0.000814s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.000769s | 0.000771s | 0.000778s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.000772s | 0.000799s | 0.000792s | byte equality observed |
| is_object_test.test | 10 | 0.000772s | 0.000804s | 0.000800s | byte equality observed |
| is_pod_test.test | 10 | 0.000767s | 0.000763s | 0.000793s | byte equality observed |
| is_pointer_test.test | 10 | 0.000752s | 0.000770s | 0.000810s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.000760s | 0.000763s | 0.000796s | byte equality observed |
| is_reference_test.test | 10 | 0.000762s | 0.000753s | 0.000809s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.000764s | 0.000774s | 0.000793s | byte equality observed |
| is_same_test.test | 10 | 0.000774s | 0.000784s | 0.000798s | byte equality observed |
| is_scalar_test.test | 10 | 0.000754s | 0.000780s | 0.000811s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.000774s | 0.000759s | 0.000760s | byte equality observed |
| is_signed_test.test | 10 | 0.000757s | 0.000781s | 0.000783s | byte equality observed |
| is_stateless_test.test | 10 | 0.000766s | 0.000785s | 0.000805s | byte equality observed |
| is_swappable_test.test | 10 | 0.000796s | 0.000793s | 0.000752s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.000798s | 0.000789s | 0.000794s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.000773s | 0.000787s | 0.000782s | byte equality observed |
| is_union_test.test | 10 | 0.000782s | 0.000774s | 0.000777s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.000799s | 0.000786s | 0.000793s | byte equality observed |
| is_unsigned_test.test | 10 | 0.000800s | 0.000814s | 0.000766s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.000767s | 0.000818s | 0.000759s | byte equality observed |
| is_void_test.test | 10 | 0.000790s | 0.000784s | 0.000775s | byte equality observed |
| is_volatile_test.test | 10 | 0.000785s | 0.000777s | 0.000754s | byte equality observed |
| make_signed_test.test | 10 | 0.000791s | 0.000761s | 0.000771s | byte equality observed |
| make_unsigned_test.test | 10 | 0.000777s | 0.000801s | 0.000764s | byte equality observed |
| make_void_test.test | 10 | 0.000776s | 0.000780s | 0.000748s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000358s | 0.000358s | 0.000786s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000356s | 0.000352s | 0.000762s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000360s | 0.000356s | 0.000755s | byte equality observed |
| negation_test.test | 10 | 0.000765s | 0.000762s | 0.000780s | byte equality observed |
| promote_basic_test.test | 10 | 0.000358s | 0.000360s | 0.000788s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000360s | 0.000371s | 0.000788s | byte equality observed |
| promote_enum_test.test | 10 | 0.000361s | 0.000358s | 0.000783s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000361s | 0.000346s | 0.000781s | byte equality observed |
| rank_test.test | 10 | 0.000766s | 0.000774s | 0.000792s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.000776s | 0.000779s | 0.000800s | byte equality observed |
| remove_bounds_test.test | 10 | 0.000792s | 0.000772s | 0.000795s | byte equality observed |
| remove_const_test.test | 10 | 0.000764s | 0.000776s | 0.000789s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.000772s | 0.000793s | 0.000806s | byte equality observed |
| remove_cv_test.test | 10 | 0.000786s | 0.000773s | 0.000787s | byte equality observed |
| remove_extent_test.test | 10 | 0.000799s | 0.000780s | 0.000779s | byte equality observed |
| remove_pointer_test.test | 10 | 0.000793s | 0.000804s | 0.000791s | byte equality observed |
| remove_reference_test.test | 10 | 0.000769s | 0.000748s | 0.000788s | byte equality observed |
| remove_volatile_test.test | 10 | 0.000778s | 0.000758s | 0.000794s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.000776s | 0.000776s | 0.000784s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.000778s | 0.000774s | 0.000809s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.000794s | 0.000762s | 0.000795s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.000781s | 0.000763s | 0.000782s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.000803s | 0.000770s | 0.000794s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.000782s | 0.000761s | 0.000812s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.000770s | 0.000789s | 0.000775s | byte equality observed |
| type_identity_test.test | 10 | 0.000770s | 0.000794s | 0.000784s | byte equality observed |
| type_traits_test.test | 10 | 0.000361s | 0.000353s | 0.000783s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.000809s | 0.000840s | 0.000825s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44780058957).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
