# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.090887 | 0.268092 | 0.386639 | 0.001139 | 0.001338 | 0.001100 |
| type_traits_test.test | RUN | 0.124022 | 0.284718 | 0.377447 | 0.000469 | 0.000501 | 0.001150 |
| type_identity_test.test | RUN | 0.244657 | 0.962197 | 1.938894 | 0.001407 | 0.001404 | 0.001173 |
| tricky_rvalue_test.test | RUN | 0.083701 | 0.214338 | 0.293740 | 0.001219 | 0.001397 | 0.001062 |
| tricky_partial_spec_test.test | RUN | 0.103766 | 0.317292 | 0.465534 | 0.001035 | 0.001306 | 0.001144 |
| tricky_is_enum_test.test | RUN | 0.080359 | 0.205600 | 0.268927 | 0.001355 | 0.001096 | 0.001105 |
| tricky_incomplete_type_test.test | RUN | 0.131862 | 0.317019 | 0.453171 | 0.001069 | 0.001251 | 0.001276 |
| tricky_function_type_test.test | RUN | 0.103078 | 0.337412 | 0.515074 | 0.001071 | 0.001399 | 0.001062 |
| tricky_add_pointer_test.test | RUN | 0.162520 | 0.579596 | 1.132697 | 0.001015 | 0.001261 | 0.001186 |
| tricky_abstract_type_test.test | RUN | 0.077600 | 0.215023 | 0.283672 | 0.001054 | 0.001087 | 0.001146 |
| remove_volatile_test.test | RUN | 0.217784 | 0.839581 | 1.733616 | 0.001057 | 0.001572 | 0.001178 |
| remove_reference_test.test | RUN | 0.219581 | 0.870637 | 1.810027 | 0.001066 | 0.001492 | 0.001060 |
| remove_pointer_test.test | RUN | 0.238614 | 0.915974 | 1.914269 | 0.001212 | 0.001242 | 0.001175 |
| remove_extent_test.test | RUN | 0.221627 | 0.900093 | 1.821233 | 0.001025 | 0.001274 | 0.001187 |
| remove_cv_test.test | RUN | 0.218819 | 0.886246 | 1.815253 | 0.001050 | 0.001437 | 0.001211 |
| remove_cv_ref_test.test | RUN | 0.469376 | 2.185139 | 4.497996 | 0.001167 | 0.001143 | 0.000999 |
| remove_const_test.test | RUN | 0.215197 | 0.824638 | 1.765469 | 0.001140 | 0.001385 | 0.001176 |
| remove_bounds_test.test | RUN | 0.228934 | 0.888121 | 1.849500 | 0.001222 | 0.001608 | 0.001110 |
| remove_all_extents_test.test | RUN | 0.227808 | 0.884747 | 1.855982 | 0.001019 | 0.001346 | 0.000935 |
| rank_test.test | RUN | 0.085125 | 0.220726 | 0.277236 | 0.001027 | 0.001214 | 0.001218 |
| promote_mpl_test.test | RUN | 0.074970 | 0.194253 | 0.210225 | 0.000388 | 0.000490 | 0.001061 |
| promote_enum_test.test | RUN | 0.016833 | 0.047970 | 0.050260 | 0.000457 | 0.000516 | 0.001326 |
| promote_enum_msvc_bug_test.test | RUN | 0.014652 | 0.040763 | 0.043100 | 0.000397 | 0.000582 | 0.001200 |
| promote_basic_test.test | RUN | 0.017233 | 0.054651 | 0.051993 | 0.000448 | 0.000567 | 0.001195 |
| negation_test.test | RUN | 0.079790 | 0.212165 | 0.253429 | 0.001155 | 0.001176 | 0.000960 |
| mpl_interop_test3.test | RUN | 0.069642 | 0.183329 | 0.195840 | 0.000547 | 0.000493 | 0.001107 |
| mpl_interop_test2.test | RUN | 0.024158 | 0.052174 | 0.051732 | 0.000453 | 0.000477 | 0.001061 |
| mpl_interop_test1.test | RUN | 0.013129 | 0.037153 | 0.036540 | 0.000409 | 0.000524 | 0.001247 |
| make_void_test.test | RUN | 0.083737 | 0.216216 | 0.296485 | 0.001257 | 0.001356 | 0.001129 |
| make_unsigned_test.test | RUN | 0.098717 | 0.290134 | 0.401132 | 0.001009 | 0.001299 | 0.001156 |
| make_signed_test.test | RUN | 0.098918 | 0.291803 | 0.410351 | 0.001090 | 0.001395 | 0.001116 |
| is_volatile_test.test | RUN | 0.086901 | 0.247656 | 0.333899 | 0.000954 | 0.001237 | 0.001105 |
| is_void_test.test | RUN | 0.083172 | 0.226826 | 0.319019 | 0.001304 | 0.001308 | 0.001122 |
| is_virtual_base_of_test.test | RUN | 0.099323 | 0.289530 | 0.430415 | 0.001142 | 0.001230 | 0.001056 |
| is_unsigned_test.test | RUN | 0.085215 | 0.239344 | 0.311919 | 0.001083 | 0.001316 | 0.000780 |
| is_unscoped_enum_test.test | RUN | 0.081534 | 0.214857 | 0.270234 | 0.001166 | 0.000910 | 0.001177 |
| is_union_test.test | RUN | 0.092436 | 0.267476 | 0.390041 | 0.001293 | 0.001405 | 0.001083 |
| is_unbounded_array_test.test | RUN | 0.084965 | 0.227937 | 0.313512 | 0.001325 | 0.001453 | 0.001047 |
| is_trivially_copyable_test.test | RUN | 0.138262 | 0.476637 | 0.783332 | 0.001107 | 0.001216 | 0.001183 |
| is_swappable_test.test | RUN | 0.117258 | 0.359484 | 0.591698 | 0.001081 | 0.001200 | 0.001204 |
| is_stateless_test.test | RUN | 0.128239 | 0.411875 | 0.664085 | 0.001289 | 0.001184 | 0.001199 |
| is_signed_test.test | RUN | 0.088927 | 0.241715 | 0.336422 | 0.001091 | 0.001161 | 0.001152 |
| is_scoped_enum_test.test | RUN | 0.085426 | 0.212858 | 0.278557 | 0.001224 | 0.001357 | 0.001163 |
| is_scalar_test.test | RUN | 0.113294 | 0.383007 | 0.579710 | 0.001039 | 0.001407 | 0.001247 |
| is_same_test.test | RUN | 0.086962 | 0.229385 | 0.294075 | 0.001223 | 0.001228 | 0.001086 |
| is_rvalue_reference_test.test | RUN | 0.087634 | 0.258586 | 0.350498 | 0.001157 | 0.001281 | 0.001157 |
| is_reference_test.test | RUN | 0.090065 | 0.256888 | 0.352252 | 0.001148 | 0.001325 | 0.001137 |
| is_polymorphic_test.test | RUN | 0.091990 | 0.270660 | 0.383134 | 0.001009 | 0.001446 | 0.001212 |
| is_pointer_test.test | RUN | 0.086946 | 0.266195 | 0.376153 | 0.001330 | 0.001206 | 0.001196 |
| is_pod_test.test | RUN | 0.116899 | 0.420905 | 0.682861 | 0.001157 | 0.001427 | 0.001129 |
| is_object_test.test | RUN | 0.083792 | 0.225859 | 0.285954 | 0.001071 | 0.001283 | 0.001136 |
| is_nothrow_swappable_test.test | RUN | 0.124444 | 0.390966 | 0.631893 | 0.001008 | 0.001537 | 0.001240 |
| is_nothrow_move_constructible_test.test | RUN | 0.113914 | 0.408195 | 0.679669 | 0.001242 | 0.001108 | 0.001070 |
| is_nothrow_move_assignable_test.test | RUN | 0.116028 | 0.416488 | 0.678422 | 0.001069 | 0.001127 | 0.001148 |
| is_noncopyable_test.test | RUN | 0.080825 | 0.220987 | 0.288151 | 0.001164 | 0.001293 | 0.001238 |
| is_member_pointer_test.test | RUN | 0.089803 | 0.228302 | 0.298979 | 0.001059 | 0.001352 | 0.001231 |
| is_member_obj_test.test | RUN | 0.084198 | 0.231822 | 0.317224 | 0.001181 | 0.001207 | 0.001299 |
| is_member_func_test.test | RUN | 0.084875 | 0.242924 | 0.336950 | 0.001194 | 0.001166 | 0.001078 |
| is_lvalue_reference_test.test | RUN | 0.087664 | 0.263310 | 0.368345 | 0.001103 | 0.001357 | 0.001173 |
| is_list_constructible_test.test | RUN | 0.101323 | 0.303437 | 0.403071 | 0.001028 | 0.001241 | 0.001284 |
| is_integral_test.test | RUN | 0.101288 | 0.359891 | 0.561308 | 0.001201 | 0.001303 | 0.001136 |
| is_fundamental_test.test | RUN | 0.104590 | 0.369012 | 0.585771 | 0.001166 | 0.001107 | 0.001057 |
| is_function_test.test | RUN | 0.084090 | 0.242566 | 0.322943 | 0.001137 | 0.001320 | 0.001331 |
| is_floating_point_test.test | RUN | 0.090718 | 0.259613 | 0.355485 | 0.000951 | 0.001176 | 0.001192 |
| is_float_test.test | RUN | 0.085777 | 0.254536 | 0.367582 | 0.001070 | 0.001147 | 0.001142 |
| is_final_test.test | RUN | 0.087115 | 0.268162 | 0.377261 | 0.001110 | 0.001091 | 0.001051 |
| is_enum_test.test | RUN | 0.080036 | 0.220736 | 0.295107 | 0.001117 | 0.001190 | 0.001044 |
| is_empty_test.test | RUN | 0.087212 | 0.242653 | 0.331998 | 0.000957 | 0.001386 | 0.001052 |
| is_detected_test.test | RUN | 0.079764 | 0.210004 | 0.268215 | 0.001310 | 0.001232 | 0.001148 |
| is_detected_exact_test.test | RUN | 0.079243 | 0.208681 | 0.270837 | 0.001204 | 0.001182 | 0.001126 |
| is_destructible_test.test | RUN | 0.113331 | 0.403227 | 0.630066 | 0.001109 | 0.001342 | 0.001246 |
| is_default_constr_test.test | RUN | 0.121902 | 0.421067 | 0.655455 | 0.001019 | 0.001366 | 0.001193 |
| is_copy_constructible_test.test | RUN | 0.120369 | 0.440225 | 0.695715 | 0.001139 | 0.001024 | 0.001139 |
| is_copy_assignable_test.test | RUN | 0.120838 | 0.428699 | 0.688659 | 0.001192 | 0.001134 | 0.001185 |
| is_convertible_test.test | RUN | 0.113777 | 0.394425 | 0.565472 | 0.001019 | 0.001416 | 0.001089 |
| is_constructible_test.test | RUN | 0.099105 | 0.281071 | 0.394358 | 0.001025 | 0.001280 | 0.001158 |
| is_const_test.test | RUN | 0.083582 | 0.234646 | 0.330331 | 0.001141 | 0.001154 | 0.001081 |
| is_compound_test.test | RUN | 0.078006 | 0.209441 | 0.265927 | 0.001091 | 0.001248 | 0.001245 |
| is_complex_test.test | RUN | 0.107278 | 0.281978 | 0.377605 | 0.000803 | 0.001408 | 0.001118 |
| is_complete_test.test | RUN | 0.096129 | 0.291581 | 0.424068 | 0.001031 | 0.001225 | 0.001160 |
| is_class_test.test | RUN | 0.088511 | 0.257362 | 0.351879 | 0.001089 | 0.001093 | 0.001001 |
| is_bounded_array_test.test | RUN | 0.078942 | 0.233824 | 0.305731 | 0.001141 | 0.001215 | 0.001222 |
| is_base_of_test.test | RUN | 0.085301 | 0.255413 | 0.354617 | 0.001101 | 0.001470 | 0.001097 |
| is_base_and_derived_test.test | RUN | 0.087146 | 0.247564 | 0.338797 | 0.001019 | 0.001222 | 0.001146 |
| is_assignable_test.test | RUN | 0.103093 | 0.354539 | 0.539317 | 0.001240 | 0.001151 | 0.001158 |
| is_array_test.test | RUN | 0.085934 | 0.240690 | 0.346723 | 0.001062 | 0.001241 | 0.001147 |
| is_arithmetic_test.test | RUN | 0.106661 | 0.355726 | 0.564745 | 0.001084 | 0.001297 | 0.001134 |
| is_abstract_test.test | RUN | 0.194110 | 0.958438 | 2.012567 | 0.001020 | 0.001516 | 0.001022 |
| integral_constant_test.test | RUN | 0.012692 | 0.037208 | 0.038679 | 0.000434 | 0.000526 | 0.001066 |
| has_virtual_destructor_test.test | RUN | 0.087910 | 0.271817 | 0.406848 | 0.001000 | 0.001356 | 0.001162 |
| has_unary_plus_test.test | RUN | 0.171152 | 0.994256 | 1.454330 | 0.001165 | 0.001381 | 0.001129 |
| has_unary_minus_test.test | RUN | 0.172363 | 0.969868 | 1.430033 | 0.001027 | 0.001276 | 0.001164 |
| has_trivial_move_constructor_test.test | RUN | 0.120229 | 0.427771 | 0.691813 | 0.001051 | 0.001222 | 0.001313 |
| has_trivial_move_assign_test.test | RUN | 0.118429 | 0.405952 | 0.670296 | 0.001033 | 0.001463 | 0.001164 |
| has_trivial_destructor_test.test | RUN | 0.118165 | 0.417281 | 0.680135 | 0.001056 | 0.001068 | 0.001206 |
| has_trivial_copy_test.test | RUN | 0.122298 | 0.446998 | 0.695289 | 0.001244 | 0.001378 | 0.001212 |
| has_trivial_constr_test.test | RUN | 0.122538 | 0.439553 | 0.696002 | 0.001030 | 0.001287 | 0.001122 |
| has_trivial_assign_test.test | RUN | 0.120084 | 0.432588 | 0.690744 | 0.001092 | 0.001447 | 0.001205 |
| has_right_shift_test.test | RUN | 0.184403 | 0.810675 | 1.542159 | 0.001136 | 0.001125 | 0.001152 |
| has_right_shift_assign_test.test | RUN | 0.181578 | 0.774607 | 1.458150 | 0.001109 | 0.001414 | 0.001046 |
| has_prefix_classes3_test.test | RUN | 0.127456 | 0.450891 | 0.747889 | 0.001042 | 0.000866 | 0.001342 |
| has_prefix_classes2_test.test | RUN | 0.129277 | 0.448024 | 0.740705 | 0.000956 | 0.001310 | 0.001252 |
| has_prefix_classes1_test.test | RUN | 0.127401 | 0.451018 | 0.721075 | 0.001228 | 0.001356 | 0.001114 |
| has_prefix_classes0_test.test | RUN | 0.130233 | 0.453419 | 0.708677 | 0.001036 | 0.001314 | 0.001264 |
| has_pre_increment_test.test | RUN | 0.172205 | 0.987791 | 1.476813 | 0.001152 | 0.001216 | 0.001002 |
| has_pre_decrement_test.test | RUN | 0.175904 | 0.986911 | 1.466858 | 0.001097 | 0.001289 | 0.001043 |
| has_postfix_classes3_test.test | RUN | 0.132385 | 0.452699 | 0.717857 | 0.001128 | 0.001078 | 0.001286 |
| has_postfix_classes2_test.test | RUN | 0.130120 | 0.450884 | 0.708610 | 0.001301 | 0.001274 | 0.001087 |
| has_postfix_classes1_test.test | RUN | 0.132562 | 0.457224 | 0.729916 | 0.001095 | 0.001241 | 0.001198 |
| has_postfix_classes0_test.test | RUN | 0.135480 | 0.456650 | 0.745347 | 0.001070 | 0.001383 | 0.001148 |
| has_post_increment_test.test | RUN | 0.175665 | 0.989612 | 1.469266 | 0.001064 | 0.001347 | 0.001149 |
| has_post_decrement_test.test | RUN | 0.174285 | 0.987033 | 1.452591 | 0.001345 | 0.001179 | 0.001107 |
| has_plus_test.test | RUN | 0.176231 | 0.758539 | 1.418493 | 0.000989 | 0.001370 | 0.001157 |
| has_plus_assign_test.test | RUN | 0.178650 | 0.766372 | 1.452906 | 0.001101 | 0.001206 | 0.001158 |
| has_operator_new_test.test | RUN | 0.116934 | 0.401225 | 0.643026 | 0.001142 | 0.001404 | 0.001232 |
| has_nothrow_destructor_test.test | RUN | 0.119270 | 0.434140 | 0.690377 | 0.001237 | 0.001246 | 0.001075 |
| has_nothrow_copy_test.test | RUN | 0.122554 | 0.414290 | 0.664370 | 0.000853 | 0.001063 | 0.001225 |
| has_nothrow_constr_test.test | RUN | 0.114552 | 0.405390 | 0.646487 | 0.001078 | 0.001199 | 0.001217 |
| has_nothrow_assign_test.test | RUN | 0.118582 | 0.410732 | 0.676663 | 0.001112 | 0.001438 | 0.001127 |
| has_not_equal_to_test.test | RUN | 0.179025 | 0.976022 | 1.478555 | 0.001155 | 0.001421 | 0.001334 |
| has_negate_test.test | RUN | 0.170763 | 0.734886 | 1.426019 | 0.001072 | 0.001227 | 0.001216 |
| has_multiplies_test.test | RUN | 0.178270 | 0.762779 | 1.449705 | 0.001040 | 0.001258 | 0.001092 |
| has_multiplies_assign_test.test | RUN | 0.180073 | 0.770238 | 1.437837 | 0.001139 | 0.001328 | 0.001231 |
| has_modulus_test.test | RUN | 0.174825 | 0.765940 | 1.433945 | 0.001187 | 0.001420 | 0.001250 |
| has_modulus_assign_test.test | RUN | 0.176312 | 0.771074 | 1.474982 | 0.001057 | 0.001299 | 0.001174 |
| has_minus_test.test | RUN | 0.182911 | 0.789073 | 1.458601 | 0.001051 | 0.001422 | 0.001276 |
| has_minus_assign_test.test | RUN | 0.189037 | 0.763152 | 1.473234 | 0.001155 | 0.001392 | 0.001317 |
| has_logical_or_test.test | RUN | 0.177181 | 0.776435 | 1.461359 | 0.001136 | 0.001248 | 0.001177 |
| has_logical_not_test.test | RUN | 0.173907 | 0.741291 | 1.442519 | 0.001118 | 0.001158 | 0.001246 |
| has_logical_and_test.test | RUN | 0.180863 | 0.785402 | 1.446834 | 0.001058 | 0.001217 | 0.001274 |
| has_less_test.test | RUN | 0.178222 | 0.969808 | 1.473289 | 0.001090 | 0.001263 | 0.001279 |
| has_less_equal_test.test | RUN | 0.178032 | 0.971483 | 1.439738 | 0.001058 | 0.001180 | 0.001188 |
| has_left_shift_test.test | RUN | 0.194482 | 0.953340 | 1.846457 | 0.001062 | 0.001246 | 0.001050 |
| has_left_shift_assign_test.test | RUN | 0.176409 | 0.764569 | 1.487790 | 0.001031 | 0.001194 | 0.001203 |
| has_greater_test.test | RUN | 0.174611 | 0.948185 | 1.448176 | 0.001071 | 0.001403 | 0.001149 |
| has_greater_equal_test.test | RUN | 0.177180 | 0.970987 | 1.467460 | 0.001062 | 0.001219 | 0.001271 |
| has_equal_to_test.test | RUN | 0.176172 | 0.961556 | 1.491649 | 0.001074 | 0.001236 | 0.001116 |
| has_divides_test.test | RUN | 0.179661 | 0.752939 | 1.433802 | 0.001028 | 0.001305 | 0.001264 |
| has_divides_assign_test.test | RUN | 0.179490 | 0.764621 | 1.471789 | 0.001061 | 0.001313 | 0.001070 |
| has_dereference_test.test | RUN | 0.174177 | 0.752363 | 1.378059 | 0.001111 | 0.001270 | 0.001121 |
| has_complement_test.test | RUN | 0.174205 | 0.990809 | 1.471895 | 0.001415 | 0.001372 | 0.001246 |
| has_bit_xor_test.test | RUN | 0.178704 | 0.758339 | 1.485942 | 0.001117 | 0.001502 | 0.001160 |
| has_bit_xor_assign_test.test | RUN | 0.179929 | 0.760246 | 1.463604 | 0.001067 | 0.001304 | 0.001212 |
| has_bit_or_test.test | RUN | 0.176079 | 0.756269 | 1.424029 | 0.001081 | 0.001275 | 0.001358 |
| has_bit_or_assign_test.test | RUN | 0.169808 | 0.756748 | 1.532700 | 0.001144 | 0.001267 | 0.001088 |
| has_bit_and_test.test | RUN | 0.178954 | 0.742452 | 1.489905 | 0.000978 | 0.001489 | 0.001076 |
| has_bit_and_assign_test.test | RUN | 0.180513 | 0.751164 | 1.460796 | 0.001127 | 0.001258 | 0.001025 |
| has_binary_classes9_test.test | RUN | 0.193832 | 0.915737 | 1.648994 | 0.001106 | 0.001340 | 0.001271 |
| has_binary_classes8_test.test | RUN | 0.193625 | 0.916250 | 1.622819 | 0.000903 | 0.001448 | 0.001165 |
| has_binary_classes7_test.test | RUN | 0.194265 | 0.905622 | 1.698797 | 0.001168 | 0.001322 | 0.001172 |
| has_binary_classes6_test.test | RUN | 0.193785 | 0.886104 | 1.692143 | 0.000960 | 0.001420 | 0.001005 |
| has_binary_classes5_test.test | RUN | 0.195459 | 0.902658 | 1.619798 | 0.001201 | 0.001329 | 0.001240 |
| has_binary_classes4_test.test | RUN | 0.194895 | 0.909614 | 1.680907 | 0.001114 | 0.001306 | 0.001197 |
| has_binary_classes3_test.test | RUN | 0.193117 | 0.920758 | 1.614300 | 0.001079 | 0.001373 | 0.001245 |
| has_binary_classes2_test.test | RUN | 0.198537 | 0.919022 | 1.656544 | 0.001093 | 0.001435 | 0.001196 |
| has_binary_classes1_test.test | RUN | 0.193065 | 0.909239 | 1.637012 | 0.001069 | 0.001283 | 0.001148 |
| has_binary_classes0_test.test | RUN | 0.194638 | 0.935590 | 1.649040 | 0.001098 | 0.001390 | 0.001266 |
| function_traits_test.test | RUN | 0.085482 | 0.234579 | 0.344491 | 0.001173 | 0.001389 | 0.001150 |
| floating_point_promotion_test.test | RUN | 0.082332 | 0.232438 | 0.312946 | 0.001217 | 0.001369 | 0.001195 |
| extent_test.test | RUN | 0.089208 | 0.240660 | 0.348918 | 0.001212 | 0.001343 | 0.001268 |
| enable_if_test.test | RUN | 0.080735 | 0.206544 | 0.257654 | 0.001067 | 0.001372 | 0.001081 |
| disjunction_test.test | RUN | 0.084583 | 0.214171 | 0.275929 | 0.001085 | 0.001340 | 0.001291 |
| detected_test.test | RUN | 0.082993 | 0.205416 | 0.266720 | 0.001112 | 0.001229 | 0.001246 |
| detected_or_test.test | RUN | 0.083895 | 0.213730 | 0.278021 | 0.001100 | 0.001269 | 0.001073 |
| decay_test.test | RUN | 0.221711 | 0.815124 | 1.570937 | 0.001120 | 0.001375 | 0.001108 |
| cxx14_aliases_test.test | RUN | 0.136670 | 0.310979 | 0.433216 | 0.001219 | 0.001386 | 0.001065 |
| copy_reference_test.test | RUN | 0.083965 | 0.209993 | 0.282172 | 0.001061 | 0.001274 | 0.001330 |
| copy_cv_test.test | RUN | 0.086459 | 0.225999 | 0.314373 | 0.001061 | 0.001328 | 0.001184 |
| copy_cv_ref_test.test | RUN | 0.117660 | 0.370546 | 0.645015 | 0.001189 | 0.001290 | 0.001178 |
| conjunction_test.test | RUN | 0.082113 | 0.220517 | 0.293927 | 0.001056 | 0.001201 | 0.001232 |
| conditional_test.test | RUN | 0.082308 | 0.209775 | 0.282159 | 0.000977 | 0.001170 | 0.001173 |
| common_type_test.test | RUN | 0.114060 | 0.324434 | 0.495374 | 0.001119 | 0.001441 | 0.001141 |
| common_type_sfinae_test.test | RUN | 0.079876 | 0.205069 | 0.253873 | 0.001138 | 0.001382 | 0.001137 |
| common_type_sfinae2_test.test | RUN | 0.080886 | 0.212239 | 0.276861 | 0.001025 | 0.001068 | 0.001122 |
| common_type_6_test.test | RUN | 0.087560 | 0.217350 | 0.291203 | 0.000956 | 0.001164 | 0.001257 |
| common_type_5_test.test | RUN | 0.087406 | 0.216337 | 0.284531 | 0.001042 | 0.001326 | 0.001218 |
| common_type_4_test.test | RUN | 0.090702 | 0.236675 | 0.340406 | 0.001034 | 0.001144 | 0.001025 |
| common_type_3_test.test | RUN | 0.075557 | 0.199152 | 0.255772 | 0.001035 | 0.001339 | 0.000968 |
| common_type_2_test.test | RUN | 0.108758 | 0.321866 | 0.530334 | 0.000976 | 0.001399 | 0.001195 |
| alignment_of_test.test | RUN | 0.086565 | 0.261605 | 0.352568 | 0.000971 | 0.001362 | 0.001137 |
| alignment_of_a2_test.test | RUN | 0.085921 | 0.259340 | 0.345311 | 0.001029 | 0.000901 | 0.001000 |
| aligned_storage_test.test | RUN | 0.091028 | 0.251735 | 0.321396 | 0.001119 | 0.001287 | 0.001006 |
| aligned_storage_empy_test.test | RUN | 0.103057 | 0.284858 | 0.422900 | 0.001004 | 0.001423 | 0.001125 |
| aligned_storage_a2_test.test | RUN | 0.089747 | 0.250612 | 0.320169 | 0.001109 | 0.001396 | 0.001417 |
| add_volatile_test.test | RUN | 0.193904 | 0.722804 | 1.495884 | 0.001182 | 0.001248 | 0.001072 |
| add_rvalue_reference_test.test | RUN | 0.216549 | 0.815584 | 1.687989 | 0.001182 | 0.001085 | 0.001049 |
| add_reference_test.test | RUN | 0.209964 | 0.809135 | 1.675680 | 0.001028 | 0.001314 | 0.001116 |
| add_pointer_test.test | RUN | 0.136721 | 0.459373 | 0.870429 | 0.001026 | 0.001218 | 0.001143 |
| add_lvalue_reference_test.test | RUN | 0.213639 | 0.804279 | 1.668570 | 0.001218 | 0.001322 | 0.001143 |
| add_cv_test.test | RUN | 0.199657 | 0.748325 | 1.573149 | 0.000949 | 0.001184 | 0.001022 |
| add_const_test.test | RUN | 0.199500 | 0.739172 | 1.571622 | 0.001036 | 0.001227 | 0.001186 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.074315 | 0.200040 | 0.253446 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.078005 | 0.201259 | 0.262265 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.070646 | 0.196963 | 0.250880 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.074431 | 0.188049 | 0.244293 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.075335 | 0.193071 | 0.246177 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.077220 | 0.195297 | 0.236422 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.074246 | 0.192433 | 0.247869 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.074085 | 0.189519 | 0.243503 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.074955 | 0.191394 | 0.247858 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.076771 | 0.196254 | 0.245517 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.075460 | 0.190416 | 0.247440 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.076165 | 0.193836 | 0.245052 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.074858 | 0.193106 | 0.242293 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.073827 | 0.193678 | 0.246701 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.074753 | 0.193639 | 0.243715 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.074649 | 0.188967 | 0.243656 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.075118 | 0.195282 | 0.241793 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.076060 | 0.192039 | 0.249315 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.075354 | 0.191644 | 0.244316 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.075071 | 0.191560 | 0.244857 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.073889 | 0.191018 | 0.245895 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.075095 | 0.188130 | 0.244608 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.117069 | 0.411974 | 0.677482 | 0.001009 | 0.001308 | 0.001169 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.110294 | 0.412835 | 0.668060 | 0.001224 | 0.001424 | 0.001149 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.115992 | 0.412017 | 0.670712 | 0.000773 | 0.000849 | 0.001066 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.118778 | 0.400958 | 0.656273 | 0.000739 | 0.001322 | 0.000845 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.076581 | 0.309520 | 0.381242 | 0.000788 | 0.000889 | 0.000853 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998× | 1.002×, 0.993× | 1.005× |
| clang | 1.026× | 1.027×, 1.025× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44774088589).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.000793s | 0.000786s | 0.000780s | byte equality observed |
| add_cv_test.test | 10 | 0.000804s | 0.000777s | 0.000784s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.000829s | 0.000775s | 0.000794s | byte equality observed |
| add_pointer_test.test | 10 | 0.000784s | 0.000815s | 0.000775s | byte equality observed |
| add_reference_test.test | 10 | 0.000801s | 0.000763s | 0.000766s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.000777s | 0.000781s | 0.000786s | byte equality observed |
| add_volatile_test.test | 10 | 0.000798s | 0.000803s | 0.000796s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.000847s | 0.000827s | 0.000825s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.000792s | 0.000770s | 0.000836s | byte equality observed |
| aligned_storage_test.test | 10 | 0.000823s | 0.000840s | 0.000843s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.000774s | 0.000770s | 0.000784s | byte equality observed |
| alignment_of_test.test | 10 | 0.000790s | 0.000770s | 0.000798s | byte equality observed |
| common_type_2_test.test | 10 | 0.000787s | 0.000769s | 0.000804s | byte equality observed |
| common_type_3_test.test | 10 | 0.000798s | 0.000787s | 0.000817s | byte equality observed |
| common_type_4_test.test | 10 | 0.000815s | 0.000794s | 0.000818s | byte equality observed |
| common_type_5_test.test | 10 | 0.000793s | 0.000790s | 0.000802s | byte equality observed |
| common_type_6_test.test | 10 | 0.000791s | 0.000800s | 0.000794s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.000774s | 0.000777s | 0.000779s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.000783s | 0.000745s | 0.000780s | byte equality observed |
| common_type_test.test | 10 | 0.000778s | 0.000773s | 0.000789s | byte equality observed |
| conditional_test.test | 10 | 0.000776s | 0.000785s | 0.000785s | byte equality observed |
| conjunction_test.test | 10 | 0.000756s | 0.000785s | 0.000803s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.000783s | 0.000773s | 0.000778s | byte equality observed |
| copy_cv_test.test | 10 | 0.000796s | 0.000795s | 0.000811s | byte equality observed |
| copy_reference_test.test | 10 | 0.000795s | 0.000780s | 0.000804s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.000797s | 0.000768s | 0.000806s | byte equality observed |
| decay_test.test | 10 | 0.000787s | 0.000789s | 0.000767s | byte equality observed |
| detected_or_test.test | 10 | 0.000800s | 0.000808s | 0.000801s | byte equality observed |
| detected_test.test | 10 | 0.000792s | 0.000753s | 0.000825s | byte equality observed |
| disjunction_test.test | 10 | 0.000793s | 0.000788s | 0.000812s | byte equality observed |
| enable_if_test.test | 10 | 0.000788s | 0.000755s | 0.000789s | byte equality observed |
| extent_test.test | 10 | 0.000788s | 0.000765s | 0.000778s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.000802s | 0.000786s | 0.000790s | byte equality observed |
| function_traits_test.test | 10 | 0.000780s | 0.000780s | 0.000786s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000801s | 0.000785s | 0.000768s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.000772s | 0.000824s | 0.000795s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.000792s | 0.000807s | 0.000766s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.000788s | 0.000810s | 0.000765s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.000777s | 0.000809s | 0.000766s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.000777s | 0.000787s | 0.000782s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.000784s | 0.000787s | 0.000779s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.000800s | 0.000768s | 0.000787s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.000800s | 0.000807s | 0.000792s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.000788s | 0.000754s | 0.000776s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.000794s | 0.000775s | 0.000781s | byte equality observed |
| has_bit_and_test.test | 10 | 0.000779s | 0.000786s | 0.000775s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.000787s | 0.000774s | 0.000784s | byte equality observed |
| has_bit_or_test.test | 10 | 0.000789s | 0.000775s | 0.000794s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.000798s | 0.000767s | 0.000796s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.000796s | 0.000792s | 0.000814s | byte equality observed |
| has_complement_test.test | 10 | 0.000795s | 0.000819s | 0.000811s | byte equality observed |
| has_dereference_test.test | 10 | 0.000795s | 0.000807s | 0.000814s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.000787s | 0.000798s | 0.000789s | byte equality observed |
| has_divides_test.test | 10 | 0.000785s | 0.000808s | 0.000773s | byte equality observed |
| has_equal_to_test.test | 10 | 0.000785s | 0.000813s | 0.000776s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.000787s | 0.000781s | 0.000778s | byte equality observed |
| has_greater_test.test | 10 | 0.000781s | 0.000803s | 0.000791s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.000775s | 0.000793s | 0.000808s | byte equality observed |
| has_left_shift_test.test | 10 | 0.000791s | 0.000796s | 0.000814s | byte equality observed |
| has_less_equal_test.test | 10 | 0.000805s | 0.000812s | 0.000811s | byte equality observed |
| has_less_test.test | 10 | 0.000799s | 0.000809s | 0.000794s | byte equality observed |
| has_logical_and_test.test | 10 | 0.000810s | 0.000788s | 0.000801s | byte equality observed |
| has_logical_not_test.test | 10 | 0.000803s | 0.000796s | 0.000799s | byte equality observed |
| has_logical_or_test.test | 10 | 0.000795s | 0.000800s | 0.000781s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.000784s | 0.000782s | 0.000779s | byte equality observed |
| has_minus_test.test | 10 | 0.000780s | 0.000777s | 0.000798s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.000794s | 0.000773s | 0.000817s | byte equality observed |
| has_modulus_test.test | 10 | 0.000782s | 0.000755s | 0.000800s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.000788s | 0.000779s | 0.000782s | byte equality observed |
| has_multiplies_test.test | 10 | 0.000782s | 0.000780s | 0.000802s | byte equality observed |
| has_negate_test.test | 10 | 0.000783s | 0.000801s | 0.000770s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.000791s | 0.000789s | 0.000782s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.000800s | 0.000771s | 0.000813s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.000808s | 0.000811s | 0.000804s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.000794s | 0.000808s | 0.000791s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.000806s | 0.000771s | 0.000803s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.000806s | 0.000777s | 0.000778s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.000807s | 0.000760s | 0.000783s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.000795s | 0.000791s | 0.000798s | byte equality observed |
| has_operator_new_test.test | 10 | 0.000779s | 0.000792s | 0.000814s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.000772s | 0.000819s | 0.000798s | byte equality observed |
| has_plus_test.test | 10 | 0.000792s | 0.000805s | 0.000772s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.000805s | 0.000798s | 0.000794s | byte equality observed |
| has_post_increment_test.test | 10 | 0.000794s | 0.000784s | 0.000785s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.000809s | 0.000782s | 0.000764s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.000775s | 0.000809s | 0.000788s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.000782s | 0.000764s | 0.000764s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.000792s | 0.000777s | 0.000775s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.000776s | 0.000803s | 0.000774s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.000798s | 0.000793s | 0.000786s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.000798s | 0.000813s | 0.000802s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.000780s | 0.000815s | 0.000792s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.000778s | 0.000798s | 0.000771s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.000773s | 0.000769s | 0.000808s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.000786s | 0.000783s | 0.000807s | byte equality observed |
| has_right_shift_test.test | 10 | 0.000800s | 0.000807s | 0.000790s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.000807s | 0.000803s | 0.000812s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.000813s | 0.000841s | 0.000809s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.000821s | 0.000826s | 0.000851s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.000777s | 0.000783s | 0.000802s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.000770s | 0.000791s | 0.000780s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.000787s | 0.000807s | 0.000784s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.000781s | 0.000812s | 0.000805s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.000783s | 0.000798s | 0.000788s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.000790s | 0.000776s | 0.000786s | byte equality observed |
| integral_constant_test.test | 10 | 0.000366s | 0.000351s | 0.000787s | byte equality observed |
| is_abstract_test.test | 10 | 0.000789s | 0.000783s | 0.000773s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.000823s | 0.000776s | 0.000790s | byte equality observed |
| is_array_test.test | 10 | 0.000812s | 0.000786s | 0.000797s | byte equality observed |
| is_assignable_test.test | 10 | 0.000797s | 0.000791s | 0.000816s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.000783s | 0.000801s | 0.000803s | byte equality observed |
| is_base_of_test.test | 10 | 0.000778s | 0.000767s | 0.000797s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.000799s | 0.000804s | 0.000792s | byte equality observed |
| is_class_test.test | 10 | 0.000796s | 0.000802s | 0.000768s | byte equality observed |
| is_complete_test.test | 10 | 0.000792s | 0.000821s | 0.000771s | byte equality observed |
| is_complex_test.test | 10 | 0.000775s | 0.000794s | 0.000817s | byte equality observed |
| is_compound_test.test | 10 | 0.000787s | 0.000786s | 0.000796s | byte equality observed |
| is_const_test.test | 10 | 0.000781s | 0.000765s | 0.000799s | byte equality observed |
| is_constructible_test.test | 10 | 0.000790s | 0.000802s | 0.000769s | byte equality observed |
| is_convertible_test.test | 10 | 0.000789s | 0.000826s | 0.000773s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.000795s | 0.000802s | 0.000769s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.000788s | 0.000788s | 0.000795s | byte equality observed |
| is_default_constr_test.test | 10 | 0.000784s | 0.000795s | 0.000796s | byte equality observed |
| is_destructible_test.test | 10 | 0.000792s | 0.000797s | 0.000801s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.000785s | 0.000763s | 0.000829s | byte equality observed |
| is_detected_test.test | 10 | 0.000785s | 0.000769s | 0.000790s | byte equality observed |
| is_empty_test.test | 10 | 0.000769s | 0.000769s | 0.000793s | byte equality observed |
| is_enum_test.test | 10 | 0.000777s | 0.000779s | 0.000819s | byte equality observed |
| is_final_test.test | 10 | 0.000771s | 0.000759s | 0.000798s | byte equality observed |
| is_float_test.test | 10 | 0.000766s | 0.000778s | 0.000768s | byte equality observed |
| is_floating_point_test.test | 10 | 0.000803s | 0.000788s | 0.000786s | byte equality observed |
| is_function_test.test | 10 | 0.000782s | 0.000780s | 0.000805s | byte equality observed |
| is_fundamental_test.test | 10 | 0.000784s | 0.000773s | 0.000801s | byte equality observed |
| is_integral_test.test | 10 | 0.000789s | 0.000771s | 0.000785s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.000791s | 0.000774s | 0.000794s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.000793s | 0.000782s | 0.000798s | byte equality observed |
| is_member_func_test.test | 10 | 0.000787s | 0.000800s | 0.000809s | byte equality observed |
| is_member_obj_test.test | 10 | 0.000801s | 0.000801s | 0.000804s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.000796s | 0.000811s | 0.000787s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.000794s | 0.000817s | 0.000806s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.000818s | 0.000782s | 0.000811s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.000789s | 0.000798s | 0.000815s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.000804s | 0.000791s | 0.000800s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.000792s | 0.000774s | 0.000796s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.000790s | 0.000783s | 0.000791s | byte equality observed |
| is_object_test.test | 10 | 0.000806s | 0.000794s | 0.000776s | byte equality observed |
| is_pod_test.test | 10 | 0.000802s | 0.000788s | 0.000797s | byte equality observed |
| is_pointer_test.test | 10 | 0.000801s | 0.000791s | 0.000768s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.000783s | 0.000766s | 0.000791s | byte equality observed |
| is_reference_test.test | 10 | 0.000770s | 0.000764s | 0.000792s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.000794s | 0.000782s | 0.000807s | byte equality observed |
| is_same_test.test | 10 | 0.000784s | 0.000794s | 0.000807s | byte equality observed |
| is_scalar_test.test | 10 | 0.000775s | 0.000798s | 0.000789s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.000791s | 0.000802s | 0.000803s | byte equality observed |
| is_signed_test.test | 10 | 0.000782s | 0.000811s | 0.000783s | byte equality observed |
| is_stateless_test.test | 10 | 0.000795s | 0.000807s | 0.000767s | byte equality observed |
| is_swappable_test.test | 10 | 0.000783s | 0.000785s | 0.000764s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.000791s | 0.000791s | 0.000806s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.000800s | 0.000777s | 0.000799s | byte equality observed |
| is_union_test.test | 10 | 0.000804s | 0.000789s | 0.000786s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.000810s | 0.000795s | 0.000786s | byte equality observed |
| is_unsigned_test.test | 10 | 0.000808s | 0.000785s | 0.000801s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.000805s | 0.000758s | 0.000784s | byte equality observed |
| is_void_test.test | 10 | 0.000785s | 0.000779s | 0.000791s | byte equality observed |
| is_volatile_test.test | 10 | 0.000783s | 0.000782s | 0.000764s | byte equality observed |
| make_signed_test.test | 10 | 0.000789s | 0.000789s | 0.000791s | byte equality observed |
| make_unsigned_test.test | 10 | 0.000790s | 0.000808s | 0.000797s | byte equality observed |
| make_void_test.test | 10 | 0.000778s | 0.000799s | 0.000780s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000365s | 0.000361s | 0.000796s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000363s | 0.000352s | 0.000795s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000352s | 0.000361s | 0.000808s | byte equality observed |
| negation_test.test | 10 | 0.000786s | 0.000782s | 0.000796s | byte equality observed |
| promote_basic_test.test | 10 | 0.000362s | 0.000357s | 0.000829s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000363s | 0.000364s | 0.000809s | byte equality observed |
| promote_enum_test.test | 10 | 0.000361s | 0.000376s | 0.000785s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000360s | 0.000353s | 0.000792s | byte equality observed |
| rank_test.test | 10 | 0.000786s | 0.000773s | 0.000800s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.000794s | 0.000777s | 0.000790s | byte equality observed |
| remove_bounds_test.test | 10 | 0.000799s | 0.000781s | 0.000770s | byte equality observed |
| remove_const_test.test | 10 | 0.000776s | 0.000771s | 0.000789s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.000784s | 0.000802s | 0.000772s | byte equality observed |
| remove_cv_test.test | 10 | 0.000806s | 0.000791s | 0.000818s | byte equality observed |
| remove_extent_test.test | 10 | 0.000794s | 0.000762s | 0.000773s | byte equality observed |
| remove_pointer_test.test | 10 | 0.000792s | 0.000775s | 0.000796s | byte equality observed |
| remove_reference_test.test | 10 | 0.000799s | 0.000766s | 0.000791s | byte equality observed |
| remove_volatile_test.test | 10 | 0.000792s | 0.000792s | 0.000789s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.000783s | 0.000802s | 0.000799s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.000782s | 0.000809s | 0.000780s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.000766s | 0.000769s | 0.000777s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.000765s | 0.000781s | 0.000775s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.000817s | 0.000763s | 0.000780s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.000808s | 0.000777s | 0.000804s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.000781s | 0.000770s | 0.000770s | byte equality observed |
| type_identity_test.test | 10 | 0.000784s | 0.000774s | 0.000782s | byte equality observed |
| type_traits_test.test | 10 | 0.000360s | 0.000357s | 0.000784s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.000840s | 0.000847s | 0.000837s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44774088589).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
