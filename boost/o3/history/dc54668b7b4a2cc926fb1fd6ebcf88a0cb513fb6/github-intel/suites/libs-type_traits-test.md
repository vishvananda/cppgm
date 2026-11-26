# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.091531 | 0.265268 | 0.387814 | 0.001280 | 0.001336 | 0.001100 |
| type_traits_test.test | RUN | 0.126245 | 0.280221 | 0.378874 | 0.000498 | 0.000413 | 0.000950 |
| type_identity_test.test | RUN | 0.244058 | 0.942796 | 1.990458 | 0.001153 | 0.001242 | 0.001105 |
| tricky_rvalue_test.test | RUN | 0.084893 | 0.213707 | 0.293425 | 0.001210 | 0.001325 | 0.000979 |
| tricky_partial_spec_test.test | RUN | 0.104521 | 0.307108 | 0.484337 | 0.001234 | 0.001283 | 0.001162 |
| tricky_is_enum_test.test | RUN | 0.084283 | 0.205655 | 0.268424 | 0.001092 | 0.001333 | 0.001199 |
| tricky_incomplete_type_test.test | RUN | 0.132189 | 0.317507 | 0.433898 | 0.001154 | 0.001252 | 0.001155 |
| tricky_function_type_test.test | RUN | 0.111528 | 0.327338 | 0.514369 | 0.001164 | 0.001244 | 0.001176 |
| tricky_add_pointer_test.test | RUN | 0.169870 | 0.562524 | 1.125992 | 0.001073 | 0.001360 | 0.001130 |
| tricky_abstract_type_test.test | RUN | 0.086423 | 0.212371 | 0.282862 | 0.001164 | 0.001215 | 0.001284 |
| remove_volatile_test.test | RUN | 0.213877 | 0.814650 | 1.830731 | 0.001188 | 0.001354 | 0.001029 |
| remove_reference_test.test | RUN | 0.227998 | 0.860553 | 1.839112 | 0.001177 | 0.001437 | 0.001137 |
| remove_pointer_test.test | RUN | 0.238203 | 0.911638 | 1.992987 | 0.001198 | 0.001133 | 0.001033 |
| remove_extent_test.test | RUN | 0.227948 | 0.878107 | 1.840883 | 0.001006 | 0.001277 | 0.001108 |
| remove_cv_test.test | RUN | 0.229863 | 0.866460 | 1.834660 | 0.001097 | 0.001229 | 0.001212 |
| remove_cv_ref_test.test | RUN | 0.480992 | 2.139438 | 4.500296 | 0.001068 | 0.001170 | 0.001195 |
| remove_const_test.test | RUN | 0.216779 | 0.808569 | 1.744026 | 0.001118 | 0.001328 | 0.001162 |
| remove_bounds_test.test | RUN | 0.227145 | 0.876304 | 1.814230 | 0.001113 | 0.001262 | 0.001145 |
| remove_all_extents_test.test | RUN | 0.228619 | 0.860106 | 1.851664 | 0.001199 | 0.001300 | 0.001108 |
| rank_test.test | RUN | 0.087811 | 0.217168 | 0.276567 | 0.001091 | 0.001252 | 0.001197 |
| promote_mpl_test.test | RUN | 0.075376 | 0.193721 | 0.205231 | 0.000478 | 0.000525 | 0.001123 |
| promote_enum_test.test | RUN | 0.016358 | 0.047648 | 0.051922 | 0.000425 | 0.000481 | 0.001118 |
| promote_enum_msvc_bug_test.test | RUN | 0.014732 | 0.039468 | 0.043662 | 0.000476 | 0.000512 | 0.001099 |
| promote_basic_test.test | RUN | 0.017167 | 0.052939 | 0.054475 | 0.000492 | 0.000530 | 0.001183 |
| negation_test.test | RUN | 0.084539 | 0.198980 | 0.255750 | 0.001099 | 0.001266 | 0.001089 |
| mpl_interop_test3.test | RUN | 0.067341 | 0.194968 | 0.191878 | 0.000463 | 0.000404 | 0.001070 |
| mpl_interop_test2.test | RUN | 0.024711 | 0.052691 | 0.053756 | 0.000451 | 0.000554 | 0.001173 |
| mpl_interop_test1.test | RUN | 0.013982 | 0.035412 | 0.037421 | 0.000469 | 0.000492 | 0.001152 |
| make_void_test.test | RUN | 0.086741 | 0.213027 | 0.306956 | 0.001100 | 0.001277 | 0.001248 |
| make_unsigned_test.test | RUN | 0.099847 | 0.287200 | 0.411037 | 0.001282 | 0.001358 | 0.001195 |
| make_signed_test.test | RUN | 0.102384 | 0.285076 | 0.416758 | 0.000816 | 0.001168 | 0.000996 |
| is_volatile_test.test | RUN | 0.087707 | 0.240039 | 0.338540 | 0.001153 | 0.001419 | 0.001128 |
| is_void_test.test | RUN | 0.089752 | 0.229225 | 0.309305 | 0.001150 | 0.001427 | 0.001139 |
| is_virtual_base_of_test.test | RUN | 0.101195 | 0.291700 | 0.434203 | 0.001121 | 0.001418 | 0.001031 |
| is_unsigned_test.test | RUN | 0.088197 | 0.236963 | 0.331145 | 0.001092 | 0.001231 | 0.000996 |
| is_unscoped_enum_test.test | RUN | 0.090084 | 0.215193 | 0.276434 | 0.001028 | 0.001201 | 0.001170 |
| is_union_test.test | RUN | 0.095306 | 0.268276 | 0.381990 | 0.001394 | 0.001301 | 0.001285 |
| is_unbounded_array_test.test | RUN | 0.086827 | 0.228274 | 0.311226 | 0.001342 | 0.001202 | 0.001223 |
| is_trivially_copyable_test.test | RUN | 0.138002 | 0.458704 | 0.774035 | 0.001103 | 0.001335 | 0.000980 |
| is_swappable_test.test | RUN | 0.114398 | 0.356326 | 0.575060 | 0.001104 | 0.001376 | 0.001357 |
| is_stateless_test.test | RUN | 0.129700 | 0.409085 | 0.651263 | 0.001205 | 0.001074 | 0.001237 |
| is_signed_test.test | RUN | 0.091341 | 0.233878 | 0.325992 | 0.001190 | 0.001366 | 0.001121 |
| is_scoped_enum_test.test | RUN | 0.085078 | 0.215199 | 0.277965 | 0.001372 | 0.001177 | 0.001165 |
| is_scalar_test.test | RUN | 0.112029 | 0.369394 | 0.576664 | 0.001051 | 0.001354 | 0.001120 |
| is_same_test.test | RUN | 0.087563 | 0.222295 | 0.295546 | 0.001226 | 0.001304 | 0.001043 |
| is_rvalue_reference_test.test | RUN | 0.090415 | 0.254611 | 0.352356 | 0.001115 | 0.001236 | 0.001140 |
| is_reference_test.test | RUN | 0.088437 | 0.253547 | 0.344614 | 0.001246 | 0.001373 | 0.001157 |
| is_polymorphic_test.test | RUN | 0.092633 | 0.267498 | 0.385114 | 0.001144 | 0.001216 | 0.001054 |
| is_pointer_test.test | RUN | 0.093039 | 0.258945 | 0.368062 | 0.001319 | 0.001227 | 0.001131 |
| is_pod_test.test | RUN | 0.119450 | 0.421450 | 0.656536 | 0.001103 | 0.001366 | 0.001179 |
| is_object_test.test | RUN | 0.085752 | 0.216709 | 0.285497 | 0.001107 | 0.001308 | 0.001185 |
| is_nothrow_swappable_test.test | RUN | 0.123382 | 0.391024 | 0.625985 | 0.001077 | 0.001280 | 0.001123 |
| is_nothrow_move_constructible_test.test | RUN | 0.119090 | 0.399426 | 0.638909 | 0.001264 | 0.001168 | 0.001220 |
| is_nothrow_move_assignable_test.test | RUN | 0.118303 | 0.412856 | 0.642025 | 0.001209 | 0.001218 | 0.001094 |
| is_noncopyable_test.test | RUN | 0.083648 | 0.220641 | 0.293380 | 0.001262 | 0.001144 | 0.001094 |
| is_member_pointer_test.test | RUN | 0.091463 | 0.228789 | 0.299953 | 0.001013 | 0.001347 | 0.001072 |
| is_member_obj_test.test | RUN | 0.085969 | 0.228205 | 0.310427 | 0.001163 | 0.001311 | 0.001131 |
| is_member_func_test.test | RUN | 0.085411 | 0.241131 | 0.333592 | 0.001235 | 0.001254 | 0.001179 |
| is_lvalue_reference_test.test | RUN | 0.089309 | 0.258320 | 0.351283 | 0.001162 | 0.001132 | 0.001076 |
| is_list_constructible_test.test | RUN | 0.104847 | 0.295543 | 0.391927 | 0.001050 | 0.001428 | 0.001114 |
| is_integral_test.test | RUN | 0.107204 | 0.348648 | 0.554003 | 0.001183 | 0.001021 | 0.001193 |
| is_fundamental_test.test | RUN | 0.107679 | 0.361718 | 0.566654 | 0.001236 | 0.001114 | 0.001118 |
| is_function_test.test | RUN | 0.089518 | 0.243022 | 0.332748 | 0.001087 | 0.001249 | 0.001214 |
| is_floating_point_test.test | RUN | 0.095943 | 0.255091 | 0.372164 | 0.001045 | 0.001390 | 0.001179 |
| is_float_test.test | RUN | 0.090744 | 0.257497 | 0.370265 | 0.001086 | 0.001278 | 0.000876 |
| is_final_test.test | RUN | 0.089685 | 0.258463 | 0.376588 | 0.000954 | 0.001301 | 0.001107 |
| is_enum_test.test | RUN | 0.083580 | 0.216322 | 0.289432 | 0.001060 | 0.001072 | 0.001041 |
| is_empty_test.test | RUN | 0.092173 | 0.237355 | 0.333955 | 0.001027 | 0.001264 | 0.001135 |
| is_detected_test.test | RUN | 0.082755 | 0.205341 | 0.264188 | 0.001245 | 0.001335 | 0.001121 |
| is_detected_exact_test.test | RUN | 0.083617 | 0.204514 | 0.271281 | 0.001204 | 0.001182 | 0.001049 |
| is_destructible_test.test | RUN | 0.117444 | 0.396178 | 0.629375 | 0.001079 | 0.001403 | 0.001137 |
| is_default_constr_test.test | RUN | 0.122193 | 0.404280 | 0.652683 | 0.001023 | 0.001311 | 0.001228 |
| is_copy_constructible_test.test | RUN | 0.122339 | 0.428670 | 0.692969 | 0.001286 | 0.001234 | 0.001111 |
| is_copy_assignable_test.test | RUN | 0.122332 | 0.415366 | 0.692199 | 0.001322 | 0.001242 | 0.001098 |
| is_convertible_test.test | RUN | 0.119558 | 0.383073 | 0.559556 | 0.001237 | 0.001372 | 0.001066 |
| is_constructible_test.test | RUN | 0.099771 | 0.276915 | 0.394689 | 0.001075 | 0.001314 | 0.001106 |
| is_const_test.test | RUN | 0.088074 | 0.241798 | 0.331589 | 0.001038 | 0.001202 | 0.001234 |
| is_compound_test.test | RUN | 0.082310 | 0.209040 | 0.266886 | 0.000996 | 0.001136 | 0.001131 |
| is_complex_test.test | RUN | 0.108910 | 0.275631 | 0.371462 | 0.001184 | 0.001220 | 0.001072 |
| is_complete_test.test | RUN | 0.098549 | 0.282559 | 0.425176 | 0.001055 | 0.001060 | 0.001093 |
| is_class_test.test | RUN | 0.088873 | 0.250179 | 0.352801 | 0.001246 | 0.001297 | 0.001251 |
| is_bounded_array_test.test | RUN | 0.084793 | 0.229379 | 0.296955 | 0.001241 | 0.001113 | 0.000806 |
| is_base_of_test.test | RUN | 0.091077 | 0.248785 | 0.343583 | 0.001025 | 0.001116 | 0.001088 |
| is_base_and_derived_test.test | RUN | 0.090737 | 0.243152 | 0.341810 | 0.001087 | 0.001174 | 0.001185 |
| is_assignable_test.test | RUN | 0.108738 | 0.339267 | 0.522044 | 0.001069 | 0.001164 | 0.001185 |
| is_array_test.test | RUN | 0.090716 | 0.239421 | 0.324903 | 0.001258 | 0.001055 | 0.001160 |
| is_arithmetic_test.test | RUN | 0.110249 | 0.352664 | 0.530775 | 0.001223 | 0.001198 | 0.001136 |
| is_abstract_test.test | RUN | 0.196315 | 0.923700 | 1.965939 | 0.001151 | 0.001250 | 0.001109 |
| integral_constant_test.test | RUN | 0.012836 | 0.036660 | 0.041634 | 0.000480 | 0.000467 | 0.001103 |
| has_virtual_destructor_test.test | RUN | 0.094360 | 0.272817 | 0.415156 | 0.001089 | 0.001238 | 0.001151 |
| has_unary_plus_test.test | RUN | 0.185153 | 1.011289 | 1.456820 | 0.001165 | 0.001334 | 0.001319 |
| has_unary_minus_test.test | RUN | 0.180125 | 0.989918 | 1.446877 | 0.001028 | 0.001111 | 0.001209 |
| has_trivial_move_constructor_test.test | RUN | 0.120949 | 0.409260 | 0.660033 | 0.001135 | 0.001219 | 0.001298 |
| has_trivial_move_assign_test.test | RUN | 0.124054 | 0.410288 | 0.677722 | 0.001097 | 0.001323 | 0.001221 |
| has_trivial_destructor_test.test | RUN | 0.118357 | 0.419437 | 0.668112 | 0.001228 | 0.001182 | 0.001125 |
| has_trivial_copy_test.test | RUN | 0.121865 | 0.442185 | 0.712275 | 0.001209 | 0.001456 | 0.001124 |
| has_trivial_constr_test.test | RUN | 0.123383 | 0.443163 | 0.711321 | 0.001108 | 0.001357 | 0.001139 |
| has_trivial_assign_test.test | RUN | 0.124724 | 0.433974 | 0.703911 | 0.001117 | 0.001394 | 0.001177 |
| has_right_shift_test.test | RUN | 0.191097 | 0.780661 | 1.540279 | 0.001048 | 0.001337 | 0.001151 |
| has_right_shift_assign_test.test | RUN | 0.178516 | 0.752861 | 1.441046 | 0.001146 | 0.001187 | 0.001126 |
| has_prefix_classes3_test.test | RUN | 0.130570 | 0.444064 | 0.738223 | 0.001178 | 0.001215 | 0.001209 |
| has_prefix_classes2_test.test | RUN | 0.133104 | 0.448692 | 0.724121 | 0.001086 | 0.001215 | 0.001174 |
| has_prefix_classes1_test.test | RUN | 0.135229 | 0.447180 | 0.687847 | 0.001173 | 0.001312 | 0.001260 |
| has_prefix_classes0_test.test | RUN | 0.131984 | 0.453760 | 0.735515 | 0.001188 | 0.001338 | 0.001152 |
| has_pre_increment_test.test | RUN | 0.183560 | 0.972010 | 1.439858 | 0.001071 | 0.001061 | 0.001047 |
| has_pre_decrement_test.test | RUN | 0.180469 | 0.980598 | 1.430792 | 0.001089 | 0.001058 | 0.001073 |
| has_postfix_classes3_test.test | RUN | 0.136299 | 0.450908 | 0.750739 | 0.001165 | 0.001579 | 0.001163 |
| has_postfix_classes2_test.test | RUN | 0.131491 | 0.442123 | 0.698678 | 0.001179 | 0.001148 | 0.001092 |
| has_postfix_classes1_test.test | RUN | 0.134953 | 0.456539 | 0.718705 | 0.001088 | 0.001316 | 0.001196 |
| has_postfix_classes0_test.test | RUN | 0.134716 | 0.442852 | 0.730836 | 0.001035 | 0.000970 | 0.001189 |
| has_post_increment_test.test | RUN | 0.179967 | 0.967635 | 1.478711 | 0.001119 | 0.001224 | 0.001075 |
| has_post_decrement_test.test | RUN | 0.177819 | 0.972237 | 1.425839 | 0.001028 | 0.001234 | 0.001159 |
| has_plus_test.test | RUN | 0.180544 | 0.741709 | 1.433142 | 0.001165 | 0.001311 | 0.001211 |
| has_plus_assign_test.test | RUN | 0.185737 | 0.742339 | 1.428811 | 0.001055 | 0.001209 | 0.001069 |
| has_operator_new_test.test | RUN | 0.119404 | 0.393956 | 0.632719 | 0.001244 | 0.001404 | 0.001148 |
| has_nothrow_destructor_test.test | RUN | 0.122903 | 0.429004 | 0.688454 | 0.001280 | 0.001214 | 0.001230 |
| has_nothrow_copy_test.test | RUN | 0.119372 | 0.408748 | 0.672557 | 0.001055 | 0.001191 | 0.001247 |
| has_nothrow_constr_test.test | RUN | 0.116046 | 0.407704 | 0.675171 | 0.001103 | 0.001226 | 0.001093 |
| has_nothrow_assign_test.test | RUN | 0.119019 | 0.401998 | 0.643425 | 0.001225 | 0.001203 | 0.001109 |
| has_not_equal_to_test.test | RUN | 0.181759 | 0.953314 | 1.466047 | 0.001128 | 0.001355 | 0.001252 |
| has_negate_test.test | RUN | 0.171758 | 0.717547 | 1.401826 | 0.001086 | 0.001313 | 0.001300 |
| has_multiplies_test.test | RUN | 0.178273 | 0.740757 | 1.434035 | 0.001023 | 0.001204 | 0.001258 |
| has_multiplies_assign_test.test | RUN | 0.179193 | 0.740185 | 1.415359 | 0.001187 | 0.001161 | 0.001077 |
| has_modulus_test.test | RUN | 0.179823 | 0.747818 | 1.415563 | 0.001053 | 0.001175 | 0.001131 |
| has_modulus_assign_test.test | RUN | 0.182529 | 0.753507 | 1.458089 | 0.001129 | 0.001344 | 0.001343 |
| has_minus_test.test | RUN | 0.187513 | 0.762374 | 1.454163 | 0.001040 | 0.001330 | 0.001260 |
| has_minus_assign_test.test | RUN | 0.184830 | 0.749400 | 1.448626 | 0.001365 | 0.001304 | 0.001136 |
| has_logical_or_test.test | RUN | 0.180797 | 0.753209 | 1.423701 | 0.001051 | 0.001266 | 0.001096 |
| has_logical_not_test.test | RUN | 0.173871 | 0.739343 | 1.442735 | 0.001090 | 0.001286 | 0.001199 |
| has_logical_and_test.test | RUN | 0.180171 | 0.760525 | 1.432803 | 0.001100 | 0.001338 | 0.001293 |
| has_less_test.test | RUN | 0.180513 | 0.946006 | 1.475762 | 0.001149 | 0.001263 | 0.001120 |
| has_less_equal_test.test | RUN | 0.183227 | 0.963573 | 1.452100 | 0.001273 | 0.001133 | 0.001208 |
| has_left_shift_test.test | RUN | 0.199611 | 0.929272 | 1.846649 | 0.001205 | 0.001121 | 0.001090 |
| has_left_shift_assign_test.test | RUN | 0.176826 | 0.746146 | 1.433476 | 0.000839 | 0.001328 | 0.001151 |
| has_greater_test.test | RUN | 0.181941 | 0.945758 | 1.484629 | 0.001327 | 0.001324 | 0.001057 |
| has_greater_equal_test.test | RUN | 0.182197 | 0.944987 | 1.426598 | 0.001410 | 0.001247 | 0.001344 |
| has_equal_to_test.test | RUN | 0.180220 | 0.957665 | 1.491979 | 0.001182 | 0.001140 | 0.001040 |
| has_divides_test.test | RUN | 0.178846 | 0.761583 | 1.419968 | 0.001193 | 0.001300 | 0.001122 |
| has_divides_assign_test.test | RUN | 0.184883 | 0.738195 | 1.463757 | 0.001331 | 0.001251 | 0.001071 |
| has_dereference_test.test | RUN | 0.175254 | 0.736259 | 1.363031 | 0.001277 | 0.001386 | 0.001141 |
| has_complement_test.test | RUN | 0.170442 | 0.978055 | 1.467512 | 0.001147 | 0.001242 | 0.001111 |
| has_bit_xor_test.test | RUN | 0.182381 | 0.750956 | 1.417017 | 0.000987 | 0.001328 | 0.001186 |
| has_bit_xor_assign_test.test | RUN | 0.181758 | 0.753056 | 1.469267 | 0.001162 | 0.001226 | 0.001027 |
| has_bit_or_test.test | RUN | 0.175909 | 0.739537 | 1.429658 | 0.001323 | 0.001366 | 0.001220 |
| has_bit_or_assign_test.test | RUN | 0.179950 | 0.749294 | 1.420995 | 0.001079 | 0.001425 | 0.001152 |
| has_bit_and_test.test | RUN | 0.178662 | 0.752890 | 1.486865 | 0.001024 | 0.001275 | 0.001192 |
| has_bit_and_assign_test.test | RUN | 0.177726 | 0.759083 | 1.477034 | 0.001258 | 0.001410 | 0.001164 |
| has_binary_classes9_test.test | RUN | 0.195628 | 0.906740 | 1.626706 | 0.001329 | 0.001406 | 0.001164 |
| has_binary_classes8_test.test | RUN | 0.197171 | 0.918773 | 1.616106 | 0.001146 | 0.001329 | 0.001164 |
| has_binary_classes7_test.test | RUN | 0.199323 | 0.910099 | 1.684184 | 0.001080 | 0.001198 | 0.001058 |
| has_binary_classes6_test.test | RUN | 0.196626 | 0.859576 | 1.691688 | 0.001067 | 0.001261 | 0.001172 |
| has_binary_classes5_test.test | RUN | 0.193676 | 0.890925 | 1.630511 | 0.001326 | 0.001283 | 0.001112 |
| has_binary_classes4_test.test | RUN | 0.199278 | 0.910960 | 1.639523 | 0.001046 | 0.001424 | 0.001198 |
| has_binary_classes3_test.test | RUN | 0.200096 | 0.900381 | 1.672202 | 0.001048 | 0.001357 | 0.001174 |
| has_binary_classes2_test.test | RUN | 0.198514 | 0.920703 | 1.679557 | 0.001149 | 0.001195 | 0.001105 |
| has_binary_classes1_test.test | RUN | 0.194861 | 0.912952 | 1.616242 | 0.001151 | 0.001305 | 0.001119 |
| has_binary_classes0_test.test | RUN | 0.200450 | 0.919163 | 1.611549 | 0.001031 | 0.001394 | 0.001057 |
| function_traits_test.test | RUN | 0.088461 | 0.240067 | 0.340022 | 0.001116 | 0.001428 | 0.000826 |
| floating_point_promotion_test.test | RUN | 0.087894 | 0.239086 | 0.314295 | 0.001057 | 0.001262 | 0.001131 |
| extent_test.test | RUN | 0.089893 | 0.238160 | 0.335575 | 0.001170 | 0.001306 | 0.001168 |
| enable_if_test.test | RUN | 0.081109 | 0.202497 | 0.262512 | 0.001040 | 0.001134 | 0.001255 |
| disjunction_test.test | RUN | 0.086139 | 0.214743 | 0.285823 | 0.001062 | 0.001300 | 0.001182 |
| detected_test.test | RUN | 0.081711 | 0.200921 | 0.254557 | 0.001132 | 0.001116 | 0.001216 |
| detected_or_test.test | RUN | 0.082303 | 0.215100 | 0.272434 | 0.001207 | 0.001152 | 0.001127 |
| decay_test.test | RUN | 0.220030 | 0.803228 | 1.589590 | 0.001187 | 0.001210 | 0.001222 |
| cxx14_aliases_test.test | RUN | 0.133540 | 0.316662 | 0.433866 | 0.001113 | 0.001280 | 0.001028 |
| copy_reference_test.test | RUN | 0.086259 | 0.205875 | 0.285737 | 0.001051 | 0.001157 | 0.001158 |
| copy_cv_test.test | RUN | 0.085702 | 0.219070 | 0.305497 | 0.000964 | 0.001347 | 0.000826 |
| copy_cv_ref_test.test | RUN | 0.122440 | 0.363890 | 0.668258 | 0.001182 | 0.001134 | 0.000883 |
| conjunction_test.test | RUN | 0.083038 | 0.216832 | 0.280885 | 0.001308 | 0.001320 | 0.001235 |
| conditional_test.test | RUN | 0.082408 | 0.207023 | 0.270234 | 0.001124 | 0.001339 | 0.001117 |
| common_type_test.test | RUN | 0.112312 | 0.317426 | 0.517665 | 0.001072 | 0.001130 | 0.001160 |
| common_type_sfinae_test.test | RUN | 0.085533 | 0.198557 | 0.254199 | 0.001214 | 0.001224 | 0.001180 |
| common_type_sfinae2_test.test | RUN | 0.086978 | 0.211403 | 0.279017 | 0.001073 | 0.001042 | 0.001090 |
| common_type_6_test.test | RUN | 0.091822 | 0.213319 | 0.287464 | 0.001129 | 0.001017 | 0.001127 |
| common_type_5_test.test | RUN | 0.090554 | 0.214046 | 0.280883 | 0.001058 | 0.001392 | 0.001090 |
| common_type_4_test.test | RUN | 0.094658 | 0.235224 | 0.337210 | 0.001144 | 0.001143 | 0.001109 |
| common_type_3_test.test | RUN | 0.087006 | 0.195211 | 0.247148 | 0.001292 | 0.001065 | 0.001199 |
| common_type_2_test.test | RUN | 0.116534 | 0.312895 | 0.506901 | 0.001208 | 0.001272 | 0.001167 |
| alignment_of_test.test | RUN | 0.091722 | 0.258836 | 0.329455 | 0.001228 | 0.001215 | 0.001149 |
| alignment_of_a2_test.test | RUN | 0.090571 | 0.255919 | 0.336914 | 0.001160 | 0.001177 | 0.001158 |
| aligned_storage_test.test | RUN | 0.096585 | 0.252641 | 0.315371 | 0.001048 | 0.001334 | 0.001145 |
| aligned_storage_empy_test.test | RUN | 0.104922 | 0.281916 | 0.416087 | 0.001099 | 0.001365 | 0.001164 |
| aligned_storage_a2_test.test | RUN | 0.095040 | 0.252809 | 0.310758 | 0.001358 | 0.001507 | 0.001169 |
| add_volatile_test.test | RUN | 0.198294 | 0.717038 | 1.439314 | 0.001130 | 0.001290 | 0.001102 |
| add_rvalue_reference_test.test | RUN | 0.221065 | 0.828656 | 1.688072 | 0.001193 | 0.001255 | 0.001229 |
| add_reference_test.test | RUN | 0.214934 | 0.791821 | 1.651692 | 0.001184 | 0.001402 | 0.001312 |
| add_pointer_test.test | RUN | 0.141994 | 0.454223 | 0.867446 | 0.001054 | 0.001414 | 0.001124 |
| add_lvalue_reference_test.test | RUN | 0.217053 | 0.799136 | 1.679669 | 0.000976 | 0.001282 | 0.001155 |
| add_cv_test.test | RUN | 0.204338 | 0.754316 | 1.574510 | 0.001121 | 0.001190 | 0.001162 |
| add_const_test.test | RUN | 0.206030 | 0.749633 | 1.516086 | 0.001065 | 0.001050 | 0.001224 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.079148 | 0.197730 | 0.260789 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.082989 | 0.201645 | 0.262955 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.077975 | 0.189840 | 0.247948 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.078854 | 0.191157 | 0.240437 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.079224 | 0.192917 | 0.245159 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.079196 | 0.190502 | 0.237551 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.079520 | 0.191723 | 0.244260 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.078935 | 0.191566 | 0.242604 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.079818 | 0.192845 | 0.242515 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.079363 | 0.194075 | 0.244478 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.080221 | 0.191929 | 0.245096 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.079913 | 0.193003 | 0.245759 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.081337 | 0.191717 | 0.240923 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.079203 | 0.192659 | 0.246348 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.079307 | 0.192497 | 0.243280 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.079323 | 0.189911 | 0.243997 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.077851 | 0.190915 | 0.244416 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.077732 | 0.195931 | 0.247992 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.077257 | 0.195220 | 0.244992 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.079402 | 0.193453 | 0.244973 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.077909 | 0.195262 | 0.247745 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.077768 | 0.190666 | 0.244514 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.121202 | 0.413990 | 0.694668 | 0.001256 | 0.001380 | 0.001452 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.115601 | 0.414101 | 0.672910 | 0.001273 | 0.001444 | 0.001044 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.119644 | 0.417751 | 0.673997 | 0.001218 | 0.001272 | 0.001252 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.119193 | 0.406314 | 0.676773 | 0.000821 | 0.000880 | 0.000843 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.084527 | 0.311754 | 0.405140 | 0.000884 | 0.000885 | 0.000898 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.999× | 1.004×, 0.995× | 1.009× |
| clang | 1.029× | 1.029×, 1.029× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45710374989).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.000798s | 0.000791s | 0.000788s | byte equality observed |
| add_cv_test.test | 10 | 0.000795s | 0.000789s | 0.000780s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.000811s | 0.000791s | 0.000760s | byte equality observed |
| add_pointer_test.test | 10 | 0.000784s | 0.000780s | 0.000766s | byte equality observed |
| add_reference_test.test | 10 | 0.000792s | 0.000817s | 0.000789s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.000776s | 0.000792s | 0.000780s | byte equality observed |
| add_volatile_test.test | 10 | 0.000782s | 0.000798s | 0.000786s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.000837s | 0.000822s | 0.000843s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.000821s | 0.000812s | 0.000762s | byte equality observed |
| aligned_storage_test.test | 10 | 0.000836s | 0.000830s | 0.000818s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.000794s | 0.000782s | 0.000806s | byte equality observed |
| alignment_of_test.test | 10 | 0.000798s | 0.000799s | 0.000799s | byte equality observed |
| common_type_2_test.test | 10 | 0.000790s | 0.000784s | 0.000791s | byte equality observed |
| common_type_3_test.test | 10 | 0.000828s | 0.000763s | 0.000804s | byte equality observed |
| common_type_4_test.test | 10 | 0.000822s | 0.000781s | 0.000808s | byte equality observed |
| common_type_5_test.test | 10 | 0.000800s | 0.000788s | 0.000780s | byte equality observed |
| common_type_6_test.test | 10 | 0.000800s | 0.000793s | 0.000796s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.000784s | 0.000792s | 0.000784s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.000785s | 0.000801s | 0.000807s | byte equality observed |
| common_type_test.test | 10 | 0.000768s | 0.000804s | 0.000768s | byte equality observed |
| conditional_test.test | 10 | 0.000783s | 0.000809s | 0.000791s | byte equality observed |
| conjunction_test.test | 10 | 0.000787s | 0.000805s | 0.000798s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.000772s | 0.000816s | 0.000801s | byte equality observed |
| copy_cv_test.test | 10 | 0.000786s | 0.000808s | 0.000782s | byte equality observed |
| copy_reference_test.test | 10 | 0.000786s | 0.000777s | 0.000779s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.000793s | 0.000805s | 0.000785s | byte equality observed |
| decay_test.test | 10 | 0.000782s | 0.000787s | 0.000793s | byte equality observed |
| detected_or_test.test | 10 | 0.000805s | 0.000773s | 0.000785s | byte equality observed |
| detected_test.test | 10 | 0.000797s | 0.000796s | 0.000769s | byte equality observed |
| disjunction_test.test | 10 | 0.000769s | 0.000805s | 0.000780s | byte equality observed |
| enable_if_test.test | 10 | 0.000772s | 0.000813s | 0.000781s | byte equality observed |
| extent_test.test | 10 | 0.000776s | 0.000810s | 0.000795s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.000794s | 0.000779s | 0.000821s | byte equality observed |
| function_traits_test.test | 10 | 0.000803s | 0.000786s | 0.000820s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000812s | 0.000824s | 0.000818s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.000810s | 0.000801s | 0.000798s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.000798s | 0.000815s | 0.000804s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.000797s | 0.000825s | 0.000795s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.000808s | 0.000818s | 0.000776s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.000787s | 0.000802s | 0.000793s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.000776s | 0.000789s | 0.000805s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.000785s | 0.000780s | 0.000814s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.000798s | 0.000782s | 0.000825s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.000817s | 0.000785s | 0.000792s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.000822s | 0.000787s | 0.000775s | byte equality observed |
| has_bit_and_test.test | 10 | 0.000791s | 0.000792s | 0.000818s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.000796s | 0.000794s | 0.000798s | byte equality observed |
| has_bit_or_test.test | 10 | 0.000794s | 0.000808s | 0.000806s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.000812s | 0.000804s | 0.000810s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.000824s | 0.000810s | 0.000817s | byte equality observed |
| has_complement_test.test | 10 | 0.000808s | 0.000815s | 0.000808s | byte equality observed |
| has_dereference_test.test | 10 | 0.000802s | 0.000771s | 0.000799s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.000809s | 0.000781s | 0.000795s | byte equality observed |
| has_divides_test.test | 10 | 0.000792s | 0.000807s | 0.000794s | byte equality observed |
| has_equal_to_test.test | 10 | 0.000774s | 0.000831s | 0.000782s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.000790s | 0.000782s | 0.000765s | byte equality observed |
| has_greater_test.test | 10 | 0.000783s | 0.000761s | 0.000787s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.000782s | 0.000786s | 0.000779s | byte equality observed |
| has_left_shift_test.test | 10 | 0.000781s | 0.000798s | 0.000801s | byte equality observed |
| has_less_equal_test.test | 10 | 0.000790s | 0.000773s | 0.000799s | byte equality observed |
| has_less_test.test | 10 | 0.000799s | 0.000760s | 0.000789s | byte equality observed |
| has_logical_and_test.test | 10 | 0.000804s | 0.000777s | 0.000785s | byte equality observed |
| has_logical_not_test.test | 10 | 0.000797s | 0.000768s | 0.000797s | byte equality observed |
| has_logical_or_test.test | 10 | 0.000786s | 0.000798s | 0.000799s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.000775s | 0.000799s | 0.000801s | byte equality observed |
| has_minus_test.test | 10 | 0.000768s | 0.000771s | 0.000797s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.000781s | 0.000791s | 0.000821s | byte equality observed |
| has_modulus_test.test | 10 | 0.000771s | 0.000797s | 0.000807s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.000784s | 0.000789s | 0.000792s | byte equality observed |
| has_multiplies_test.test | 10 | 0.000793s | 0.000783s | 0.000798s | byte equality observed |
| has_negate_test.test | 10 | 0.000761s | 0.000807s | 0.000791s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.000790s | 0.000791s | 0.000780s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.000798s | 0.000791s | 0.000788s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.000803s | 0.000790s | 0.000775s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.000790s | 0.000759s | 0.000789s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.000771s | 0.000770s | 0.000824s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.000777s | 0.000767s | 0.000822s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.000779s | 0.000791s | 0.000810s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.000782s | 0.000799s | 0.000811s | byte equality observed |
| has_operator_new_test.test | 10 | 0.000778s | 0.000803s | 0.000791s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.000778s | 0.000783s | 0.000802s | byte equality observed |
| has_plus_test.test | 10 | 0.000770s | 0.000770s | 0.000784s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.000802s | 0.000771s | 0.000809s | byte equality observed |
| has_post_increment_test.test | 10 | 0.000804s | 0.000782s | 0.000804s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.000799s | 0.000810s | 0.000780s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.000786s | 0.000799s | 0.000776s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.000795s | 0.000785s | 0.000790s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.000782s | 0.000788s | 0.000784s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.000809s | 0.000800s | 0.000783s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.000802s | 0.000796s | 0.000817s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.000806s | 0.000803s | 0.000784s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.000817s | 0.000778s | 0.000787s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.000815s | 0.000786s | 0.000793s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.000817s | 0.000819s | 0.000779s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.000800s | 0.000817s | 0.000766s | byte equality observed |
| has_right_shift_test.test | 10 | 0.000791s | 0.000818s | 0.000793s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.000808s | 0.000815s | 0.000817s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.000815s | 0.000819s | 0.000834s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.000815s | 0.000822s | 0.000816s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.000775s | 0.000789s | 0.000814s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.000824s | 0.000791s | 0.000749s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.000769s | 0.000792s | 0.000805s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.000775s | 0.000777s | 0.000814s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.000795s | 0.000803s | 0.000764s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.000786s | 0.000812s | 0.000796s | byte equality observed |
| integral_constant_test.test | 10 | 0.000358s | 0.000363s | 0.000762s | byte equality observed |
| is_abstract_test.test | 10 | 0.000794s | 0.000772s | 0.000783s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.000790s | 0.000797s | 0.000781s | byte equality observed |
| is_array_test.test | 10 | 0.000768s | 0.000765s | 0.000800s | byte equality observed |
| is_assignable_test.test | 10 | 0.000786s | 0.000789s | 0.000781s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.000782s | 0.000816s | 0.000772s | byte equality observed |
| is_base_of_test.test | 10 | 0.000789s | 0.000793s | 0.000778s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.000778s | 0.000819s | 0.000791s | byte equality observed |
| is_class_test.test | 10 | 0.000795s | 0.000812s | 0.000786s | byte equality observed |
| is_complete_test.test | 10 | 0.000796s | 0.000800s | 0.000798s | byte equality observed |
| is_complex_test.test | 10 | 0.000802s | 0.000779s | 0.000780s | byte equality observed |
| is_compound_test.test | 10 | 0.000794s | 0.000767s | 0.000770s | byte equality observed |
| is_const_test.test | 10 | 0.000813s | 0.000810s | 0.000773s | byte equality observed |
| is_constructible_test.test | 10 | 0.000782s | 0.000782s | 0.000780s | byte equality observed |
| is_convertible_test.test | 10 | 0.000771s | 0.000817s | 0.000781s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.000792s | 0.000799s | 0.000788s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.000777s | 0.000801s | 0.000784s | byte equality observed |
| is_default_constr_test.test | 10 | 0.000792s | 0.000793s | 0.000786s | byte equality observed |
| is_destructible_test.test | 10 | 0.000806s | 0.000795s | 0.000792s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.000772s | 0.000794s | 0.000791s | byte equality observed |
| is_detected_test.test | 10 | 0.000779s | 0.000795s | 0.000774s | byte equality observed |
| is_empty_test.test | 10 | 0.000770s | 0.000801s | 0.000798s | byte equality observed |
| is_enum_test.test | 10 | 0.000795s | 0.000794s | 0.000806s | byte equality observed |
| is_final_test.test | 10 | 0.000783s | 0.000785s | 0.000791s | byte equality observed |
| is_float_test.test | 10 | 0.000782s | 0.000798s | 0.000817s | byte equality observed |
| is_floating_point_test.test | 10 | 0.000778s | 0.000817s | 0.000785s | byte equality observed |
| is_function_test.test | 10 | 0.000805s | 0.000792s | 0.000806s | byte equality observed |
| is_fundamental_test.test | 10 | 0.000773s | 0.000802s | 0.000806s | byte equality observed |
| is_integral_test.test | 10 | 0.000779s | 0.000786s | 0.000778s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.000802s | 0.000793s | 0.000795s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.000797s | 0.000808s | 0.000786s | byte equality observed |
| is_member_func_test.test | 10 | 0.000805s | 0.000788s | 0.000765s | byte equality observed |
| is_member_obj_test.test | 10 | 0.000798s | 0.000766s | 0.000801s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.000797s | 0.000791s | 0.000786s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.000797s | 0.000780s | 0.000790s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.000787s | 0.000775s | 0.000797s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.000811s | 0.000784s | 0.000801s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.000767s | 0.000793s | 0.000825s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.000764s | 0.000792s | 0.000815s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.000794s | 0.000815s | 0.000819s | byte equality observed |
| is_object_test.test | 10 | 0.000794s | 0.000795s | 0.000784s | byte equality observed |
| is_pod_test.test | 10 | 0.000803s | 0.000789s | 0.000789s | byte equality observed |
| is_pointer_test.test | 10 | 0.000806s | 0.000786s | 0.000773s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.000785s | 0.000801s | 0.000767s | byte equality observed |
| is_reference_test.test | 10 | 0.000778s | 0.000797s | 0.000785s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.000778s | 0.000784s | 0.000791s | byte equality observed |
| is_same_test.test | 10 | 0.000784s | 0.000799s | 0.000784s | byte equality observed |
| is_scalar_test.test | 10 | 0.000774s | 0.000814s | 0.000786s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.000793s | 0.000817s | 0.000751s | byte equality observed |
| is_signed_test.test | 10 | 0.000766s | 0.000771s | 0.000773s | byte equality observed |
| is_stateless_test.test | 10 | 0.000780s | 0.000810s | 0.000799s | byte equality observed |
| is_swappable_test.test | 10 | 0.000764s | 0.000797s | 0.000785s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.000812s | 0.000787s | 0.000798s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.000805s | 0.000785s | 0.000791s | byte equality observed |
| is_union_test.test | 10 | 0.000776s | 0.000776s | 0.000819s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.000783s | 0.000797s | 0.000821s | byte equality observed |
| is_unsigned_test.test | 10 | 0.000816s | 0.000773s | 0.000797s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.000810s | 0.000786s | 0.000811s | byte equality observed |
| is_void_test.test | 10 | 0.000776s | 0.000789s | 0.000812s | byte equality observed |
| is_volatile_test.test | 10 | 0.000784s | 0.000794s | 0.000797s | byte equality observed |
| make_signed_test.test | 10 | 0.000792s | 0.000781s | 0.000798s | byte equality observed |
| make_unsigned_test.test | 10 | 0.000767s | 0.000772s | 0.000778s | byte equality observed |
| make_void_test.test | 10 | 0.000791s | 0.000768s | 0.000763s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000360s | 0.000358s | 0.000793s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000364s | 0.000357s | 0.000781s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000360s | 0.000354s | 0.000803s | byte equality observed |
| negation_test.test | 10 | 0.000794s | 0.000779s | 0.000796s | byte equality observed |
| promote_basic_test.test | 10 | 0.000358s | 0.000357s | 0.000802s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000361s | 0.000362s | 0.000799s | byte equality observed |
| promote_enum_test.test | 10 | 0.000365s | 0.000364s | 0.000772s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000358s | 0.000361s | 0.000781s | byte equality observed |
| rank_test.test | 10 | 0.000789s | 0.000797s | 0.000782s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.000820s | 0.000805s | 0.000826s | byte equality observed |
| remove_bounds_test.test | 10 | 0.000789s | 0.000793s | 0.000803s | byte equality observed |
| remove_const_test.test | 10 | 0.000791s | 0.000789s | 0.000781s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.000806s | 0.000792s | 0.000769s | byte equality observed |
| remove_cv_test.test | 10 | 0.000802s | 0.000756s | 0.000799s | byte equality observed |
| remove_extent_test.test | 10 | 0.000778s | 0.000781s | 0.000798s | byte equality observed |
| remove_pointer_test.test | 10 | 0.000772s | 0.000787s | 0.000782s | byte equality observed |
| remove_reference_test.test | 10 | 0.000791s | 0.000772s | 0.000770s | byte equality observed |
| remove_volatile_test.test | 10 | 0.000774s | 0.000766s | 0.000793s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.000790s | 0.000786s | 0.000803s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.000784s | 0.000778s | 0.000784s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.000802s | 0.000795s | 0.000793s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.000791s | 0.000794s | 0.000795s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.000786s | 0.000802s | 0.000816s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.000786s | 0.000793s | 0.000817s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.000794s | 0.000783s | 0.000802s | byte equality observed |
| type_identity_test.test | 10 | 0.000778s | 0.000791s | 0.000775s | byte equality observed |
| type_traits_test.test | 10 | 0.000361s | 0.000360s | 0.000793s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.000841s | 0.000848s | 0.000836s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45710374989).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
