# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.091429 | 0.271136 | 0.380393 | 0.001059 | 0.001150 | 0.001169 |
| type_traits_test.test | RUN | 0.122437 | 0.275878 | 0.366351 | 0.000430 | 0.000482 | 0.001101 |
| type_identity_test.test | RUN | 0.243106 | 0.929604 | 1.928157 | 0.001237 | 0.001243 | 0.001146 |
| tricky_rvalue_test.test | RUN | 0.084276 | 0.216017 | 0.289108 | 0.001260 | 0.001268 | 0.001064 |
| tricky_partial_spec_test.test | RUN | 0.101953 | 0.310678 | 0.458391 | 0.001058 | 0.001212 | 0.001120 |
| tricky_is_enum_test.test | RUN | 0.081300 | 0.196688 | 0.268414 | 0.001202 | 0.001113 | 0.001094 |
| tricky_incomplete_type_test.test | RUN | 0.135087 | 0.308143 | 0.450430 | 0.001136 | 0.001234 | 0.001078 |
| tricky_function_type_test.test | RUN | 0.111528 | 0.330658 | 0.511474 | 0.001149 | 0.001222 | 0.001152 |
| tricky_add_pointer_test.test | RUN | 0.167482 | 0.557671 | 1.118388 | 0.001140 | 0.001134 | 0.001176 |
| tricky_abstract_type_test.test | RUN | 0.086553 | 0.201555 | 0.279662 | 0.001092 | 0.001108 | 0.001128 |
| remove_volatile_test.test | RUN | 0.220546 | 0.805088 | 1.719385 | 0.001116 | 0.001230 | 0.001153 |
| remove_reference_test.test | RUN | 0.226356 | 0.849126 | 1.805667 | 0.001258 | 0.001257 | 0.001088 |
| remove_pointer_test.test | RUN | 0.239777 | 0.887397 | 1.908866 | 0.001193 | 0.001189 | 0.001143 |
| remove_extent_test.test | RUN | 0.227449 | 0.855135 | 1.840286 | 0.001249 | 0.001186 | 0.001088 |
| remove_cv_test.test | RUN | 0.225237 | 0.870366 | 1.812437 | 0.001131 | 0.001219 | 0.001228 |
| remove_cv_ref_test.test | RUN | 0.480100 | 2.107344 | 4.427764 | 0.001238 | 0.001140 | 0.001241 |
| remove_const_test.test | RUN | 0.218996 | 0.802771 | 1.719428 | 0.001250 | 0.001175 | 0.001160 |
| remove_bounds_test.test | RUN | 0.227502 | 0.864326 | 1.853832 | 0.001174 | 0.001301 | 0.001165 |
| remove_all_extents_test.test | RUN | 0.232725 | 0.853344 | 1.699046 | 0.001078 | 0.001243 | 0.001094 |
| rank_test.test | RUN | 0.087787 | 0.217910 | 0.292949 | 0.001255 | 0.001331 | 0.001056 |
| promote_mpl_test.test | RUN | 0.078956 | 0.191464 | 0.210377 | 0.000471 | 0.000383 | 0.001002 |
| promote_enum_test.test | RUN | 0.016927 | 0.045770 | 0.052182 | 0.000425 | 0.000512 | 0.001094 |
| promote_enum_msvc_bug_test.test | RUN | 0.015125 | 0.040757 | 0.044346 | 0.000461 | 0.000456 | 0.001121 |
| promote_basic_test.test | RUN | 0.018768 | 0.052647 | 0.050794 | 0.000467 | 0.000472 | 0.001124 |
| negation_test.test | RUN | 0.084108 | 0.206942 | 0.267059 | 0.001265 | 0.001154 | 0.000920 |
| mpl_interop_test3.test | RUN | 0.071066 | 0.182302 | 0.190702 | 0.000439 | 0.000488 | 0.001128 |
| mpl_interop_test2.test | RUN | 0.024848 | 0.049828 | 0.051865 | 0.000558 | 0.000431 | 0.001068 |
| mpl_interop_test1.test | RUN | 0.014222 | 0.035678 | 0.037657 | 0.000432 | 0.000454 | 0.001064 |
| make_void_test.test | RUN | 0.088480 | 0.213550 | 0.285031 | 0.001245 | 0.001123 | 0.001142 |
| make_unsigned_test.test | RUN | 0.102882 | 0.278716 | 0.408240 | 0.001147 | 0.001241 | 0.001157 |
| make_signed_test.test | RUN | 0.100722 | 0.277918 | 0.394662 | 0.001099 | 0.001333 | 0.001032 |
| is_volatile_test.test | RUN | 0.091034 | 0.240765 | 0.336344 | 0.001103 | 0.001110 | 0.001187 |
| is_void_test.test | RUN | 0.089150 | 0.226642 | 0.302478 | 0.001306 | 0.001208 | 0.001074 |
| is_virtual_base_of_test.test | RUN | 0.099411 | 0.283811 | 0.424955 | 0.001277 | 0.001078 | 0.001065 |
| is_unsigned_test.test | RUN | 0.087739 | 0.229074 | 0.328240 | 0.001050 | 0.001182 | 0.001013 |
| is_unscoped_enum_test.test | RUN | 0.089960 | 0.211385 | 0.263700 | 0.001012 | 0.000936 | 0.001045 |
| is_union_test.test | RUN | 0.092695 | 0.262573 | 0.387724 | 0.001201 | 0.001257 | 0.001056 |
| is_unbounded_array_test.test | RUN | 0.083183 | 0.222840 | 0.301912 | 0.001274 | 0.001257 | 0.001080 |
| is_trivially_copyable_test.test | RUN | 0.137309 | 0.463637 | 0.760347 | 0.001124 | 0.001387 | 0.001058 |
| is_swappable_test.test | RUN | 0.116580 | 0.346677 | 0.564209 | 0.001046 | 0.001209 | 0.001203 |
| is_stateless_test.test | RUN | 0.129072 | 0.404672 | 0.632115 | 0.001109 | 0.001095 | 0.001190 |
| is_signed_test.test | RUN | 0.087084 | 0.229847 | 0.319927 | 0.000911 | 0.001293 | 0.001047 |
| is_scoped_enum_test.test | RUN | 0.083691 | 0.209602 | 0.271044 | 0.001169 | 0.001211 | 0.001056 |
| is_scalar_test.test | RUN | 0.109655 | 0.360668 | 0.576703 | 0.001118 | 0.001194 | 0.001075 |
| is_same_test.test | RUN | 0.084253 | 0.217115 | 0.294138 | 0.001275 | 0.001174 | 0.001053 |
| is_rvalue_reference_test.test | RUN | 0.087474 | 0.244716 | 0.343415 | 0.001224 | 0.001198 | 0.000976 |
| is_reference_test.test | RUN | 0.090129 | 0.246015 | 0.350296 | 0.001218 | 0.001189 | 0.001110 |
| is_polymorphic_test.test | RUN | 0.091820 | 0.258888 | 0.377821 | 0.001026 | 0.001135 | 0.001084 |
| is_pointer_test.test | RUN | 0.093430 | 0.250949 | 0.374948 | 0.001305 | 0.001129 | 0.001127 |
| is_pod_test.test | RUN | 0.121035 | 0.403213 | 0.655152 | 0.001075 | 0.001262 | 0.001121 |
| is_object_test.test | RUN | 0.084599 | 0.212614 | 0.279349 | 0.001119 | 0.001218 | 0.001143 |
| is_nothrow_swappable_test.test | RUN | 0.122796 | 0.380843 | 0.638364 | 0.001043 | 0.001088 | 0.001127 |
| is_nothrow_move_constructible_test.test | RUN | 0.117848 | 0.394805 | 0.619141 | 0.001162 | 0.001106 | 0.001149 |
| is_nothrow_move_assignable_test.test | RUN | 0.118372 | 0.406891 | 0.653147 | 0.001019 | 0.001084 | 0.001006 |
| is_noncopyable_test.test | RUN | 0.087367 | 0.217418 | 0.303393 | 0.001201 | 0.001149 | 0.001206 |
| is_member_pointer_test.test | RUN | 0.088399 | 0.219987 | 0.291287 | 0.001040 | 0.000842 | 0.001032 |
| is_member_obj_test.test | RUN | 0.088543 | 0.221253 | 0.300204 | 0.001274 | 0.001229 | 0.001086 |
| is_member_func_test.test | RUN | 0.088384 | 0.237452 | 0.332691 | 0.001167 | 0.001170 | 0.001145 |
| is_lvalue_reference_test.test | RUN | 0.090171 | 0.247040 | 0.355378 | 0.001155 | 0.001131 | 0.000985 |
| is_list_constructible_test.test | RUN | 0.108766 | 0.293544 | 0.392239 | 0.001110 | 0.001109 | 0.001107 |
| is_integral_test.test | RUN | 0.109796 | 0.347827 | 0.539979 | 0.001183 | 0.001232 | 0.001016 |
| is_fundamental_test.test | RUN | 0.109926 | 0.356459 | 0.559394 | 0.001030 | 0.001190 | 0.001098 |
| is_function_test.test | RUN | 0.088230 | 0.233836 | 0.334581 | 0.001172 | 0.001153 | 0.001148 |
| is_floating_point_test.test | RUN | 0.095098 | 0.251056 | 0.352130 | 0.001062 | 0.001384 | 0.001116 |
| is_float_test.test | RUN | 0.093129 | 0.248341 | 0.365781 | 0.001105 | 0.001092 | 0.001037 |
| is_final_test.test | RUN | 0.090520 | 0.256637 | 0.375428 | 0.001134 | 0.001167 | 0.001081 |
| is_enum_test.test | RUN | 0.084272 | 0.214588 | 0.286918 | 0.001138 | 0.001151 | 0.001056 |
| is_empty_test.test | RUN | 0.093682 | 0.235517 | 0.328796 | 0.001056 | 0.001406 | 0.001116 |
| is_detected_test.test | RUN | 0.082712 | 0.204718 | 0.270753 | 0.001134 | 0.001137 | 0.001073 |
| is_detected_exact_test.test | RUN | 0.082370 | 0.199173 | 0.265798 | 0.001196 | 0.001087 | 0.001030 |
| is_destructible_test.test | RUN | 0.118564 | 0.394241 | 0.651877 | 0.001037 | 0.001319 | 0.001105 |
| is_default_constr_test.test | RUN | 0.122124 | 0.403924 | 0.661204 | 0.001068 | 0.001370 | 0.001013 |
| is_copy_constructible_test.test | RUN | 0.125752 | 0.426781 | 0.713477 | 0.001166 | 0.001151 | 0.001069 |
| is_copy_assignable_test.test | RUN | 0.127577 | 0.413117 | 0.695513 | 0.001203 | 0.001098 | 0.001088 |
| is_convertible_test.test | RUN | 0.117101 | 0.376503 | 0.580017 | 0.001060 | 0.001325 | 0.001123 |
| is_constructible_test.test | RUN | 0.098899 | 0.274097 | 0.415215 | 0.001037 | 0.001121 | 0.001159 |
| is_const_test.test | RUN | 0.087384 | 0.232284 | 0.339541 | 0.001200 | 0.001020 | 0.001108 |
| is_compound_test.test | RUN | 0.079857 | 0.209594 | 0.277431 | 0.001313 | 0.001315 | 0.000959 |
| is_complex_test.test | RUN | 0.111374 | 0.272231 | 0.381567 | 0.001164 | 0.001348 | 0.001210 |
| is_complete_test.test | RUN | 0.102175 | 0.281262 | 0.422856 | 0.001298 | 0.000977 | 0.001091 |
| is_class_test.test | RUN | 0.091675 | 0.246357 | 0.362016 | 0.001210 | 0.001081 | 0.001187 |
| is_bounded_array_test.test | RUN | 0.086553 | 0.224569 | 0.310863 | 0.001200 | 0.001221 | 0.001118 |
| is_base_of_test.test | RUN | 0.092929 | 0.240365 | 0.353597 | 0.001178 | 0.001309 | 0.001170 |
| is_base_and_derived_test.test | RUN | 0.094847 | 0.242401 | 0.332225 | 0.001103 | 0.001238 | 0.001155 |
| is_assignable_test.test | RUN | 0.111933 | 0.335301 | 0.529236 | 0.001290 | 0.001138 | 0.001155 |
| is_array_test.test | RUN | 0.089901 | 0.236938 | 0.328473 | 0.001342 | 0.001177 | 0.001180 |
| is_arithmetic_test.test | RUN | 0.108031 | 0.346610 | 0.569223 | 0.001171 | 0.001229 | 0.001324 |
| is_abstract_test.test | RUN | 0.200113 | 0.893139 | 1.970748 | 0.001230 | 0.001313 | 0.001270 |
| integral_constant_test.test | RUN | 0.012551 | 0.033809 | 0.040166 | 0.000485 | 0.000439 | 0.001125 |
| has_virtual_destructor_test.test | RUN | 0.095449 | 0.267956 | 0.406485 | 0.001102 | 0.001273 | 0.001168 |
| has_unary_plus_test.test | RUN | 0.184803 | 0.951926 | 1.441847 | 0.001352 | 0.001219 | 0.001231 |
| has_unary_minus_test.test | RUN | 0.180927 | 0.939193 | 1.408086 | 0.001147 | 0.001177 | 0.001158 |
| has_trivial_move_constructor_test.test | RUN | 0.123221 | 0.412383 | 0.695298 | 0.001160 | 0.001156 | 0.001362 |
| has_trivial_move_assign_test.test | RUN | 0.127642 | 0.399844 | 0.662462 | 0.001233 | 0.001246 | 0.001186 |
| has_trivial_destructor_test.test | RUN | 0.126645 | 0.402826 | 0.660323 | 0.001348 | 0.001159 | 0.001109 |
| has_trivial_copy_test.test | RUN | 0.129361 | 0.438246 | 0.707526 | 0.001292 | 0.001355 | 0.001203 |
| has_trivial_constr_test.test | RUN | 0.132490 | 0.435047 | 0.698150 | 0.001282 | 0.001363 | 0.001158 |
| has_trivial_assign_test.test | RUN | 0.127573 | 0.431347 | 0.657583 | 0.001232 | 0.001380 | 0.001288 |
| has_right_shift_test.test | RUN | 0.193061 | 0.774269 | 1.584223 | 0.001295 | 0.001214 | 0.001220 |
| has_right_shift_assign_test.test | RUN | 0.183053 | 0.731961 | 1.447779 | 0.001026 | 0.001212 | 0.001104 |
| has_prefix_classes3_test.test | RUN | 0.135570 | 0.438316 | 0.719128 | 0.001075 | 0.001212 | 0.001207 |
| has_prefix_classes2_test.test | RUN | 0.137984 | 0.441396 | 0.700393 | 0.001217 | 0.001126 | 0.001244 |
| has_prefix_classes1_test.test | RUN | 0.135756 | 0.437413 | 0.725617 | 0.001252 | 0.001207 | 0.001298 |
| has_prefix_classes0_test.test | RUN | 0.132269 | 0.443810 | 0.712212 | 0.001285 | 0.001133 | 0.001143 |
| has_pre_increment_test.test | RUN | 0.177848 | 0.936904 | 1.472648 | 0.001124 | 0.001082 | 0.001052 |
| has_pre_decrement_test.test | RUN | 0.185092 | 0.921079 | 1.460034 | 0.001132 | 0.001083 | 0.001164 |
| has_postfix_classes3_test.test | RUN | 0.136832 | 0.441187 | 0.727257 | 0.001209 | 0.001319 | 0.001050 |
| has_postfix_classes2_test.test | RUN | 0.131620 | 0.430745 | 0.712039 | 0.001247 | 0.001097 | 0.001111 |
| has_postfix_classes1_test.test | RUN | 0.132974 | 0.436949 | 0.722980 | 0.001132 | 0.001236 | 0.001225 |
| has_postfix_classes0_test.test | RUN | 0.132474 | 0.440714 | 0.741654 | 0.001162 | 0.001270 | 0.001312 |
| has_post_increment_test.test | RUN | 0.179971 | 0.945109 | 1.443157 | 0.001140 | 0.001144 | 0.001188 |
| has_post_decrement_test.test | RUN | 0.181043 | 0.937098 | 1.455053 | 0.001288 | 0.001239 | 0.001086 |
| has_plus_test.test | RUN | 0.183779 | 0.722962 | 1.433635 | 0.001100 | 0.001308 | 0.001175 |
| has_plus_assign_test.test | RUN | 0.186564 | 0.733407 | 1.432516 | 0.001304 | 0.001211 | 0.001093 |
| has_operator_new_test.test | RUN | 0.125338 | 0.387792 | 0.640170 | 0.001168 | 0.001264 | 0.000986 |
| has_nothrow_destructor_test.test | RUN | 0.126373 | 0.420154 | 0.680865 | 0.001285 | 0.001121 | 0.001152 |
| has_nothrow_copy_test.test | RUN | 0.121768 | 0.406120 | 0.669369 | 0.001199 | 0.001235 | 0.001220 |
| has_nothrow_constr_test.test | RUN | 0.121226 | 0.396305 | 0.672001 | 0.001118 | 0.001240 | 0.001104 |
| has_nothrow_assign_test.test | RUN | 0.122663 | 0.395206 | 0.660446 | 0.001280 | 0.001148 | 0.001041 |
| has_not_equal_to_test.test | RUN | 0.183024 | 0.948843 | 1.455846 | 0.001101 | 0.001121 | 0.001200 |
| has_negate_test.test | RUN | 0.177874 | 0.711801 | 1.377814 | 0.001282 | 0.001158 | 0.001194 |
| has_multiplies_test.test | RUN | 0.184929 | 0.738100 | 1.482284 | 0.001132 | 0.001248 | 0.001013 |
| has_multiplies_assign_test.test | RUN | 0.184492 | 0.731535 | 1.483311 | 0.001237 | 0.001143 | 0.001009 |
| has_modulus_test.test | RUN | 0.181323 | 0.734022 | 1.437861 | 0.001193 | 0.001010 | 0.001180 |
| has_modulus_assign_test.test | RUN | 0.180033 | 0.738301 | 1.417833 | 0.001305 | 0.001163 | 0.001143 |
| has_minus_test.test | RUN | 0.183181 | 0.749623 | 1.505207 | 0.001065 | 0.001222 | 0.001107 |
| has_minus_assign_test.test | RUN | 0.187300 | 0.738699 | 1.509635 | 0.001179 | 0.001217 | 0.001043 |
| has_logical_or_test.test | RUN | 0.181680 | 0.754282 | 1.450900 | 0.001210 | 0.001307 | 0.001190 |
| has_logical_not_test.test | RUN | 0.172652 | 0.717202 | 1.385997 | 0.001223 | 0.001129 | 0.001140 |
| has_logical_and_test.test | RUN | 0.178828 | 0.750307 | 1.482593 | 0.001049 | 0.001362 | 0.001233 |
| has_less_test.test | RUN | 0.182000 | 0.932485 | 1.488064 | 0.001140 | 0.001178 | 0.001018 |
| has_less_equal_test.test | RUN | 0.183742 | 0.930256 | 1.467880 | 0.001197 | 0.001318 | 0.001193 |
| has_left_shift_test.test | RUN | 0.198934 | 0.933267 | 1.836014 | 0.001147 | 0.001201 | 0.001161 |
| has_left_shift_assign_test.test | RUN | 0.177969 | 0.727885 | 1.489327 | 0.001045 | 0.001209 | 0.000925 |
| has_greater_test.test | RUN | 0.179612 | 0.922055 | 1.491699 | 0.001163 | 0.001260 | 0.001102 |
| has_greater_equal_test.test | RUN | 0.182808 | 0.923755 | 1.418436 | 0.001282 | 0.001301 | 0.001093 |
| has_equal_to_test.test | RUN | 0.181601 | 0.939008 | 1.435105 | 0.001170 | 0.001164 | 0.001185 |
| has_divides_test.test | RUN | 0.181819 | 0.746225 | 1.474501 | 0.001084 | 0.001309 | 0.001159 |
| has_divides_assign_test.test | RUN | 0.184401 | 0.716600 | 1.469294 | 0.001226 | 0.001265 | 0.001228 |
| has_dereference_test.test | RUN | 0.179314 | 0.713159 | 1.358158 | 0.001368 | 0.001233 | 0.001176 |
| has_complement_test.test | RUN | 0.184789 | 0.942783 | 1.411974 | 0.001175 | 0.001163 | 0.001183 |
| has_bit_xor_test.test | RUN | 0.178098 | 0.745277 | 1.480032 | 0.001339 | 0.001314 | 0.000966 |
| has_bit_xor_assign_test.test | RUN | 0.184140 | 0.729561 | 1.481078 | 0.001316 | 0.001105 | 0.001014 |
| has_bit_or_test.test | RUN | 0.185540 | 0.721203 | 1.412722 | 0.001554 | 0.001262 | 0.001258 |
| has_bit_or_assign_test.test | RUN | 0.180079 | 0.729260 | 1.421898 | 0.001242 | 0.001159 | 0.001280 |
| has_bit_and_test.test | RUN | 0.178426 | 0.741775 | 1.468155 | 0.001086 | 0.001228 | 0.001321 |
| has_bit_and_assign_test.test | RUN | 0.182824 | 0.731824 | 1.467786 | 0.001250 | 0.001092 | 0.001230 |
| has_binary_classes9_test.test | RUN | 0.196190 | 0.867754 | 1.620285 | 0.001379 | 0.001287 | 0.001137 |
| has_binary_classes8_test.test | RUN | 0.199342 | 0.858750 | 1.625239 | 0.001124 | 0.001260 | 0.001285 |
| has_binary_classes7_test.test | RUN | 0.195471 | 0.857215 | 1.673319 | 0.001241 | 0.001168 | 0.001028 |
| has_binary_classes6_test.test | RUN | 0.196490 | 0.828198 | 1.676433 | 0.001014 | 0.001177 | 0.001025 |
| has_binary_classes5_test.test | RUN | 0.195159 | 0.851709 | 1.614028 | 0.001328 | 0.001207 | 0.001166 |
| has_binary_classes4_test.test | RUN | 0.193853 | 0.865370 | 1.625359 | 0.001131 | 0.001335 | 0.001167 |
| has_binary_classes3_test.test | RUN | 0.193919 | 0.890451 | 1.670821 | 0.001207 | 0.001224 | 0.001040 |
| has_binary_classes2_test.test | RUN | 0.197932 | 0.892510 | 1.671941 | 0.001127 | 0.001233 | 0.001232 |
| has_binary_classes1_test.test | RUN | 0.197714 | 0.876435 | 1.609142 | 0.001289 | 0.001332 | 0.000958 |
| has_binary_classes0_test.test | RUN | 0.200331 | 0.887533 | 1.600722 | 0.001176 | 0.001211 | 0.001084 |
| function_traits_test.test | RUN | 0.089327 | 0.238813 | 0.335903 | 0.001375 | 0.001171 | 0.001022 |
| floating_point_promotion_test.test | RUN | 0.091464 | 0.229940 | 0.315101 | 0.001143 | 0.001240 | 0.001130 |
| extent_test.test | RUN | 0.089957 | 0.234625 | 0.334244 | 0.001217 | 0.001071 | 0.001058 |
| enable_if_test.test | RUN | 0.084828 | 0.200506 | 0.262669 | 0.001106 | 0.001226 | 0.001114 |
| disjunction_test.test | RUN | 0.084316 | 0.204614 | 0.276903 | 0.001179 | 0.001224 | 0.001240 |
| detected_test.test | RUN | 0.087165 | 0.195618 | 0.252981 | 0.001105 | 0.001250 | 0.001169 |
| detected_or_test.test | RUN | 0.085539 | 0.207586 | 0.280028 | 0.001136 | 0.000969 | 0.000988 |
| decay_test.test | RUN | 0.222768 | 0.796962 | 1.577586 | 0.001145 | 0.001298 | 0.001078 |
| cxx14_aliases_test.test | RUN | 0.136757 | 0.307302 | 0.443305 | 0.001418 | 0.001297 | 0.001147 |
| copy_reference_test.test | RUN | 0.084274 | 0.204043 | 0.276978 | 0.001131 | 0.001159 | 0.001263 |
| copy_cv_test.test | RUN | 0.091724 | 0.212476 | 0.299441 | 0.001050 | 0.001148 | 0.001152 |
| copy_cv_ref_test.test | RUN | 0.122310 | 0.362732 | 0.656089 | 0.001026 | 0.000908 | 0.001023 |
| conjunction_test.test | RUN | 0.084455 | 0.205075 | 0.279052 | 0.001070 | 0.001206 | 0.001155 |
| conditional_test.test | RUN | 0.080459 | 0.205615 | 0.270328 | 0.001029 | 0.001104 | 0.001062 |
| common_type_test.test | RUN | 0.114382 | 0.313740 | 0.518716 | 0.001162 | 0.001240 | 0.001061 |
| common_type_sfinae_test.test | RUN | 0.080963 | 0.194781 | 0.262029 | 0.001177 | 0.001171 | 0.001214 |
| common_type_sfinae2_test.test | RUN | 0.084743 | 0.205315 | 0.279879 | 0.001169 | 0.001088 | 0.001175 |
| common_type_6_test.test | RUN | 0.086159 | 0.208402 | 0.290182 | 0.001068 | 0.001175 | 0.000939 |
| common_type_5_test.test | RUN | 0.089542 | 0.205528 | 0.287753 | 0.001092 | 0.001335 | 0.001141 |
| common_type_4_test.test | RUN | 0.091661 | 0.229135 | 0.327121 | 0.001221 | 0.001078 | 0.001066 |
| common_type_3_test.test | RUN | 0.080181 | 0.193175 | 0.251061 | 0.001263 | 0.001210 | 0.001038 |
| common_type_2_test.test | RUN | 0.110471 | 0.299949 | 0.496569 | 0.001016 | 0.001300 | 0.001075 |
| alignment_of_test.test | RUN | 0.094131 | 0.253782 | 0.335191 | 0.001101 | 0.001359 | 0.001047 |
| alignment_of_a2_test.test | RUN | 0.088288 | 0.251423 | 0.335773 | 0.001266 | 0.001176 | 0.001071 |
| aligned_storage_test.test | RUN | 0.091214 | 0.243084 | 0.305630 | 0.001368 | 0.001168 | 0.001125 |
| aligned_storage_empy_test.test | RUN | 0.106849 | 0.276156 | 0.414287 | 0.001154 | 0.001223 | 0.001148 |
| aligned_storage_a2_test.test | RUN | 0.095833 | 0.242083 | 0.307647 | 0.001332 | 0.001234 | 0.001263 |
| add_volatile_test.test | RUN | 0.200508 | 0.692933 | 1.429755 | 0.001310 | 0.001260 | 0.001088 |
| add_rvalue_reference_test.test | RUN | 0.222222 | 0.797506 | 1.730259 | 0.001320 | 0.001304 | 0.001085 |
| add_reference_test.test | RUN | 0.213866 | 0.770193 | 1.717222 | 0.001093 | 0.001172 | 0.001180 |
| add_pointer_test.test | RUN | 0.141567 | 0.440673 | 0.860198 | 0.000914 | 0.001105 | 0.001120 |
| add_lvalue_reference_test.test | RUN | 0.215802 | 0.771427 | 1.606137 | 0.001440 | 0.001252 | 0.001175 |
| add_cv_test.test | RUN | 0.203413 | 0.726994 | 1.571758 | 0.001194 | 0.001127 | 0.001129 |
| add_const_test.test | RUN | 0.206080 | 0.720272 | 1.541111 | 0.001136 | 0.001086 | 0.001112 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.079174 | 0.192041 | 0.246130 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.086450 | 0.193855 | 0.259047 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.078791 | 0.184637 | 0.242049 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.076718 | 0.186396 | 0.253360 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.080456 | 0.185213 | 0.236672 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.078415 | 0.185490 | 0.241119 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.080357 | 0.188111 | 0.240538 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.079995 | 0.185450 | 0.240158 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.079602 | 0.183038 | 0.243300 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.081633 | 0.185403 | 0.241946 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.080686 | 0.185967 | 0.240352 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.082184 | 0.187041 | 0.242369 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.082114 | 0.188387 | 0.242680 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.083131 | 0.187650 | 0.243407 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.081103 | 0.187142 | 0.241927 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.080406 | 0.184097 | 0.243507 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.080951 | 0.187795 | 0.241928 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.080652 | 0.188152 | 0.245496 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.078658 | 0.187877 | 0.244088 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.080666 | 0.185432 | 0.244623 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.080568 | 0.185737 | 0.244130 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.080963 | 0.186316 | 0.243382 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.124515 | 0.401378 | 0.673654 | 0.001325 | 0.001249 | 0.001281 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.119160 | 0.403123 | 0.663571 | 0.001351 | 0.001386 | 0.001089 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.121786 | 0.404836 | 0.674943 | 0.001130 | 0.000815 | 0.001093 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.123592 | 0.391289 | 0.668044 | 0.001197 | 0.000852 | 0.000807 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.086022 | 0.299927 | 0.391248 | 0.000897 | 0.000787 | 0.000796 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 1.000×, 1.001× | 1.005× |
| clang | 1.026× | 1.028×, 1.024× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45739944580).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.000776s | 0.000766s | 0.000762s | byte equality observed |
| add_cv_test.test | 10 | 0.000750s | 0.000756s | 0.000774s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.000782s | 0.000760s | 0.000789s | byte equality observed |
| add_pointer_test.test | 10 | 0.000762s | 0.000767s | 0.000756s | byte equality observed |
| add_reference_test.test | 10 | 0.000782s | 0.000769s | 0.000757s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.000788s | 0.000768s | 0.000780s | byte equality observed |
| add_volatile_test.test | 10 | 0.000787s | 0.000769s | 0.000761s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.000807s | 0.000803s | 0.000823s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.000775s | 0.000783s | 0.000762s | byte equality observed |
| aligned_storage_test.test | 10 | 0.000809s | 0.000812s | 0.000823s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.000801s | 0.000793s | 0.000770s | byte equality observed |
| alignment_of_test.test | 10 | 0.000794s | 0.000774s | 0.000752s | byte equality observed |
| common_type_2_test.test | 10 | 0.000792s | 0.000754s | 0.000753s | byte equality observed |
| common_type_3_test.test | 10 | 0.000783s | 0.000770s | 0.000769s | byte equality observed |
| common_type_4_test.test | 10 | 0.000775s | 0.000752s | 0.000787s | byte equality observed |
| common_type_5_test.test | 10 | 0.000781s | 0.000758s | 0.000791s | byte equality observed |
| common_type_6_test.test | 10 | 0.000777s | 0.000767s | 0.000789s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.000781s | 0.000783s | 0.000800s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.000745s | 0.000787s | 0.000792s | byte equality observed |
| common_type_test.test | 10 | 0.000764s | 0.000796s | 0.000799s | byte equality observed |
| conditional_test.test | 10 | 0.000757s | 0.000814s | 0.000798s | byte equality observed |
| conjunction_test.test | 10 | 0.000763s | 0.000799s | 0.000772s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.000763s | 0.000805s | 0.000774s | byte equality observed |
| copy_cv_test.test | 10 | 0.000766s | 0.000760s | 0.000783s | byte equality observed |
| copy_reference_test.test | 10 | 0.000774s | 0.000770s | 0.000773s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.000774s | 0.000785s | 0.000802s | byte equality observed |
| decay_test.test | 10 | 0.000782s | 0.000796s | 0.000795s | byte equality observed |
| detected_or_test.test | 10 | 0.000777s | 0.000761s | 0.000780s | byte equality observed |
| detected_test.test | 10 | 0.000763s | 0.000748s | 0.000782s | byte equality observed |
| disjunction_test.test | 10 | 0.000775s | 0.000769s | 0.000780s | byte equality observed |
| enable_if_test.test | 10 | 0.000788s | 0.000776s | 0.000783s | byte equality observed |
| extent_test.test | 10 | 0.000766s | 0.000765s | 0.000815s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.000778s | 0.000778s | 0.000799s | byte equality observed |
| function_traits_test.test | 10 | 0.000766s | 0.000769s | 0.000776s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000780s | 0.000789s | 0.000787s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.000781s | 0.000756s | 0.000803s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.000792s | 0.000781s | 0.000802s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.000788s | 0.000776s | 0.000771s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.000796s | 0.000758s | 0.000786s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.000778s | 0.000769s | 0.000785s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.000747s | 0.000767s | 0.000756s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.000768s | 0.000766s | 0.000764s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.000765s | 0.000748s | 0.000763s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.000772s | 0.000757s | 0.000800s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.000758s | 0.000751s | 0.000780s | byte equality observed |
| has_bit_and_test.test | 10 | 0.000758s | 0.000750s | 0.000774s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.000755s | 0.000795s | 0.000767s | byte equality observed |
| has_bit_or_test.test | 10 | 0.000768s | 0.000790s | 0.000742s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.000754s | 0.000795s | 0.000759s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.000804s | 0.000782s | 0.000771s | byte equality observed |
| has_complement_test.test | 10 | 0.000809s | 0.000775s | 0.000754s | byte equality observed |
| has_dereference_test.test | 10 | 0.000768s | 0.000781s | 0.000785s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.000756s | 0.000778s | 0.000785s | byte equality observed |
| has_divides_test.test | 10 | 0.000783s | 0.000761s | 0.000763s | byte equality observed |
| has_equal_to_test.test | 10 | 0.000747s | 0.000766s | 0.000744s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.000791s | 0.000746s | 0.000754s | byte equality observed |
| has_greater_test.test | 10 | 0.000783s | 0.000764s | 0.000766s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.000776s | 0.000739s | 0.000763s | byte equality observed |
| has_left_shift_test.test | 10 | 0.000755s | 0.000764s | 0.000793s | byte equality observed |
| has_less_equal_test.test | 10 | 0.000772s | 0.000773s | 0.000815s | byte equality observed |
| has_less_test.test | 10 | 0.000759s | 0.000775s | 0.000769s | byte equality observed |
| has_logical_and_test.test | 10 | 0.000774s | 0.000763s | 0.000775s | byte equality observed |
| has_logical_not_test.test | 10 | 0.000767s | 0.000770s | 0.000758s | byte equality observed |
| has_logical_or_test.test | 10 | 0.000756s | 0.000783s | 0.000765s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.000763s | 0.000758s | 0.000763s | byte equality observed |
| has_minus_test.test | 10 | 0.000772s | 0.000766s | 0.000759s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.000782s | 0.000790s | 0.000769s | byte equality observed |
| has_modulus_test.test | 10 | 0.000762s | 0.000770s | 0.000769s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.000779s | 0.000759s | 0.000767s | byte equality observed |
| has_multiplies_test.test | 10 | 0.000774s | 0.000776s | 0.000765s | byte equality observed |
| has_negate_test.test | 10 | 0.000777s | 0.000753s | 0.000780s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.000758s | 0.000752s | 0.000797s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.000770s | 0.000761s | 0.000783s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.000753s | 0.000763s | 0.000775s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.000767s | 0.000756s | 0.000789s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.000767s | 0.000795s | 0.000796s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.000753s | 0.000797s | 0.000802s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.000778s | 0.000793s | 0.000771s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.000774s | 0.000796s | 0.000790s | byte equality observed |
| has_operator_new_test.test | 10 | 0.000775s | 0.000780s | 0.000768s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.000788s | 0.000791s | 0.000761s | byte equality observed |
| has_plus_test.test | 10 | 0.000769s | 0.000772s | 0.000791s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.000757s | 0.000781s | 0.000786s | byte equality observed |
| has_post_increment_test.test | 10 | 0.000776s | 0.000749s | 0.000782s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.000778s | 0.000759s | 0.000771s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.000788s | 0.000818s | 0.000783s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.000787s | 0.000776s | 0.000781s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.000769s | 0.000771s | 0.000759s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.000777s | 0.000771s | 0.000743s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.000773s | 0.000784s | 0.000788s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.000785s | 0.000777s | 0.000806s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.000771s | 0.000758s | 0.000793s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.000778s | 0.000782s | 0.000788s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.000780s | 0.000781s | 0.000779s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.000788s | 0.000766s | 0.000749s | byte equality observed |
| has_right_shift_test.test | 10 | 0.000778s | 0.000785s | 0.000795s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.000811s | 0.000789s | 0.000790s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.000816s | 0.000810s | 0.000812s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.000825s | 0.000836s | 0.000829s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.000791s | 0.000801s | 0.000766s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.000761s | 0.000771s | 0.000784s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.000749s | 0.000785s | 0.000752s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.000750s | 0.000757s | 0.000783s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.000765s | 0.000773s | 0.000767s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.000763s | 0.000765s | 0.000752s | byte equality observed |
| integral_constant_test.test | 10 | 0.000355s | 0.000359s | 0.000771s | byte equality observed |
| is_abstract_test.test | 10 | 0.000766s | 0.000762s | 0.000765s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.000783s | 0.000782s | 0.000795s | byte equality observed |
| is_array_test.test | 10 | 0.000784s | 0.000760s | 0.000785s | byte equality observed |
| is_assignable_test.test | 10 | 0.000785s | 0.000766s | 0.000768s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.000744s | 0.000782s | 0.000738s | byte equality observed |
| is_base_of_test.test | 10 | 0.000744s | 0.000801s | 0.000762s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.000770s | 0.000776s | 0.000789s | byte equality observed |
| is_class_test.test | 10 | 0.000780s | 0.000775s | 0.000754s | byte equality observed |
| is_complete_test.test | 10 | 0.000784s | 0.000778s | 0.000763s | byte equality observed |
| is_complex_test.test | 10 | 0.000800s | 0.000754s | 0.000749s | byte equality observed |
| is_compound_test.test | 10 | 0.000779s | 0.000769s | 0.000767s | byte equality observed |
| is_const_test.test | 10 | 0.000809s | 0.000773s | 0.000774s | byte equality observed |
| is_constructible_test.test | 10 | 0.000788s | 0.000764s | 0.000783s | byte equality observed |
| is_convertible_test.test | 10 | 0.000774s | 0.000753s | 0.000779s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.000753s | 0.000780s | 0.000806s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.000753s | 0.000769s | 0.000773s | byte equality observed |
| is_default_constr_test.test | 10 | 0.000745s | 0.000756s | 0.000770s | byte equality observed |
| is_destructible_test.test | 10 | 0.000763s | 0.000770s | 0.000788s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.000782s | 0.000766s | 0.000777s | byte equality observed |
| is_detected_test.test | 10 | 0.000777s | 0.000764s | 0.000795s | byte equality observed |
| is_empty_test.test | 10 | 0.000787s | 0.000775s | 0.000794s | byte equality observed |
| is_enum_test.test | 10 | 0.000773s | 0.000757s | 0.000757s | byte equality observed |
| is_final_test.test | 10 | 0.000769s | 0.000744s | 0.000778s | byte equality observed |
| is_float_test.test | 10 | 0.000770s | 0.000755s | 0.000800s | byte equality observed |
| is_floating_point_test.test | 10 | 0.000771s | 0.000781s | 0.000795s | byte equality observed |
| is_function_test.test | 10 | 0.000767s | 0.000800s | 0.000773s | byte equality observed |
| is_fundamental_test.test | 10 | 0.000782s | 0.000781s | 0.000758s | byte equality observed |
| is_integral_test.test | 10 | 0.000767s | 0.000771s | 0.000760s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.000765s | 0.000780s | 0.000744s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.000755s | 0.000758s | 0.000757s | byte equality observed |
| is_member_func_test.test | 10 | 0.000776s | 0.000784s | 0.000762s | byte equality observed |
| is_member_obj_test.test | 10 | 0.000770s | 0.000793s | 0.000771s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.000790s | 0.000775s | 0.000778s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.000787s | 0.000811s | 0.000753s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.000791s | 0.000754s | 0.000761s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.000785s | 0.000750s | 0.000778s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.000784s | 0.000771s | 0.000790s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.000783s | 0.000785s | 0.000777s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.000769s | 0.000779s | 0.000786s | byte equality observed |
| is_object_test.test | 10 | 0.000778s | 0.000777s | 0.000772s | byte equality observed |
| is_pod_test.test | 10 | 0.000762s | 0.000787s | 0.000771s | byte equality observed |
| is_pointer_test.test | 10 | 0.000763s | 0.000764s | 0.000770s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.000777s | 0.000762s | 0.000748s | byte equality observed |
| is_reference_test.test | 10 | 0.000777s | 0.000742s | 0.000770s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.000778s | 0.000769s | 0.000784s | byte equality observed |
| is_same_test.test | 10 | 0.000800s | 0.000797s | 0.000794s | byte equality observed |
| is_scalar_test.test | 10 | 0.000788s | 0.000802s | 0.000733s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.000790s | 0.000787s | 0.000764s | byte equality observed |
| is_signed_test.test | 10 | 0.000779s | 0.000775s | 0.000750s | byte equality observed |
| is_stateless_test.test | 10 | 0.000771s | 0.000776s | 0.000778s | byte equality observed |
| is_swappable_test.test | 10 | 0.000772s | 0.000770s | 0.000758s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.000779s | 0.000791s | 0.000771s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.000775s | 0.000769s | 0.000754s | byte equality observed |
| is_union_test.test | 10 | 0.000761s | 0.000797s | 0.000770s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.000776s | 0.000798s | 0.000771s | byte equality observed |
| is_unsigned_test.test | 10 | 0.000764s | 0.000808s | 0.000782s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.000760s | 0.000786s | 0.000787s | byte equality observed |
| is_void_test.test | 10 | 0.000750s | 0.000776s | 0.000795s | byte equality observed |
| is_volatile_test.test | 10 | 0.000782s | 0.000784s | 0.000793s | byte equality observed |
| make_signed_test.test | 10 | 0.000784s | 0.000783s | 0.000773s | byte equality observed |
| make_unsigned_test.test | 10 | 0.000768s | 0.000755s | 0.000768s | byte equality observed |
| make_void_test.test | 10 | 0.000770s | 0.000765s | 0.000768s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000356s | 0.000356s | 0.000756s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000361s | 0.000349s | 0.000758s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000355s | 0.000358s | 0.000783s | byte equality observed |
| negation_test.test | 10 | 0.000764s | 0.000763s | 0.000775s | byte equality observed |
| promote_basic_test.test | 10 | 0.000347s | 0.000359s | 0.000791s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000357s | 0.000346s | 0.000773s | byte equality observed |
| promote_enum_test.test | 10 | 0.000361s | 0.000358s | 0.000767s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000359s | 0.000347s | 0.000782s | byte equality observed |
| rank_test.test | 10 | 0.000782s | 0.000775s | 0.000768s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.000790s | 0.000807s | 0.000785s | byte equality observed |
| remove_bounds_test.test | 10 | 0.000789s | 0.000779s | 0.000783s | byte equality observed |
| remove_const_test.test | 10 | 0.000763s | 0.000762s | 0.000760s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.000783s | 0.000771s | 0.000751s | byte equality observed |
| remove_cv_test.test | 10 | 0.000785s | 0.000759s | 0.000771s | byte equality observed |
| remove_extent_test.test | 10 | 0.000773s | 0.000760s | 0.000776s | byte equality observed |
| remove_pointer_test.test | 10 | 0.000787s | 0.000767s | 0.000792s | byte equality observed |
| remove_reference_test.test | 10 | 0.000765s | 0.000792s | 0.000780s | byte equality observed |
| remove_volatile_test.test | 10 | 0.000787s | 0.000795s | 0.000764s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.000752s | 0.000783s | 0.000752s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.000768s | 0.000792s | 0.000758s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.000748s | 0.000780s | 0.000776s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.000759s | 0.000762s | 0.000779s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.000780s | 0.000770s | 0.000779s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.000787s | 0.000788s | 0.000792s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.000773s | 0.000779s | 0.000784s | byte equality observed |
| type_identity_test.test | 10 | 0.000768s | 0.000774s | 0.000779s | byte equality observed |
| type_traits_test.test | 10 | 0.000352s | 0.000358s | 0.000780s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.000830s | 0.000832s | 0.000818s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45739944580).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
