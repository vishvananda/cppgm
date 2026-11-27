# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.092598 | 0.275303 | 0.381919 | 0.001192 | 0.001259 | 0.001236 |
| type_traits_test.test | RUN | 0.127133 | 0.275979 | 0.377463 | 0.000407 | 0.000373 | 0.001157 |
| type_identity_test.test | RUN | 0.247846 | 0.942222 | 1.958825 | 0.001266 | 0.001222 | 0.001302 |
| tricky_rvalue_test.test | RUN | 0.085053 | 0.215922 | 0.297986 | 0.001276 | 0.001244 | 0.001241 |
| tricky_partial_spec_test.test | RUN | 0.103804 | 0.311601 | 0.488088 | 0.001142 | 0.001196 | 0.001142 |
| tricky_is_enum_test.test | RUN | 0.083540 | 0.197615 | 0.265365 | 0.001125 | 0.001253 | 0.001159 |
| tricky_incomplete_type_test.test | RUN | 0.138397 | 0.313304 | 0.428941 | 0.001174 | 0.001097 | 0.001105 |
| tricky_function_type_test.test | RUN | 0.115299 | 0.327976 | 0.503577 | 0.001148 | 0.001129 | 0.001109 |
| tricky_add_pointer_test.test | RUN | 0.161452 | 0.565827 | 1.146491 | 0.001114 | 0.001265 | 0.001158 |
| tricky_abstract_type_test.test | RUN | 0.085446 | 0.208111 | 0.280216 | 0.001180 | 0.001065 | 0.001147 |
| remove_volatile_test.test | RUN | 0.222751 | 0.819868 | 1.706585 | 0.001306 | 0.001267 | 0.001151 |
| remove_reference_test.test | RUN | 0.224547 | 0.854273 | 1.836514 | 0.001118 | 0.001400 | 0.001119 |
| remove_pointer_test.test | RUN | 0.237949 | 0.882057 | 1.926440 | 0.001107 | 0.001186 | 0.001178 |
| remove_extent_test.test | RUN | 0.230002 | 0.857361 | 1.826353 | 0.001157 | 0.001296 | 0.001095 |
| remove_cv_test.test | RUN | 0.228785 | 0.844148 | 1.807706 | 0.001187 | 0.001190 | 0.001150 |
| remove_cv_ref_test.test | RUN | 0.474968 | 2.131267 | 4.474626 | 0.001140 | 0.001118 | 0.001035 |
| remove_const_test.test | RUN | 0.219896 | 0.793119 | 1.785248 | 0.001388 | 0.001230 | 0.001185 |
| remove_bounds_test.test | RUN | 0.226795 | 0.875437 | 1.841030 | 0.001168 | 0.001205 | 0.001259 |
| remove_all_extents_test.test | RUN | 0.230679 | 0.836899 | 1.779330 | 0.001085 | 0.001211 | 0.001060 |
| rank_test.test | RUN | 0.087954 | 0.216618 | 0.295664 | 0.001230 | 0.001205 | 0.001093 |
| promote_mpl_test.test | RUN | 0.076147 | 0.192382 | 0.214923 | 0.000488 | 0.000534 | 0.001109 |
| promote_enum_test.test | RUN | 0.016262 | 0.047193 | 0.052032 | 0.000518 | 0.000479 | 0.001125 |
| promote_enum_msvc_bug_test.test | RUN | 0.015278 | 0.041104 | 0.044316 | 0.000441 | 0.000432 | 0.001059 |
| promote_basic_test.test | RUN | 0.018037 | 0.049729 | 0.051059 | 0.000462 | 0.000498 | 0.001018 |
| negation_test.test | RUN | 0.082372 | 0.195851 | 0.252465 | 0.001120 | 0.000938 | 0.001128 |
| mpl_interop_test3.test | RUN | 0.071568 | 0.194644 | 0.195723 | 0.000464 | 0.000439 | 0.000800 |
| mpl_interop_test2.test | RUN | 0.023449 | 0.050146 | 0.053388 | 0.000460 | 0.000489 | 0.000907 |
| mpl_interop_test1.test | RUN | 0.013474 | 0.036263 | 0.039765 | 0.000460 | 0.000444 | 0.001122 |
| make_void_test.test | RUN | 0.084427 | 0.213618 | 0.294651 | 0.001223 | 0.001198 | 0.001167 |
| make_unsigned_test.test | RUN | 0.098193 | 0.280409 | 0.405708 | 0.000857 | 0.001214 | 0.001234 |
| make_signed_test.test | RUN | 0.097265 | 0.279146 | 0.399932 | 0.001064 | 0.001133 | 0.001151 |
| is_volatile_test.test | RUN | 0.088331 | 0.239249 | 0.329836 | 0.001112 | 0.001185 | 0.001198 |
| is_void_test.test | RUN | 0.088499 | 0.226885 | 0.313418 | 0.001214 | 0.001308 | 0.001133 |
| is_virtual_base_of_test.test | RUN | 0.098486 | 0.285839 | 0.427601 | 0.001091 | 0.001373 | 0.001043 |
| is_unsigned_test.test | RUN | 0.087624 | 0.232045 | 0.311901 | 0.001250 | 0.001129 | 0.001112 |
| is_unscoped_enum_test.test | RUN | 0.092390 | 0.208502 | 0.270149 | 0.001082 | 0.001177 | 0.001100 |
| is_union_test.test | RUN | 0.096326 | 0.264478 | 0.397602 | 0.001169 | 0.001236 | 0.001242 |
| is_unbounded_array_test.test | RUN | 0.085795 | 0.219176 | 0.312753 | 0.001339 | 0.001125 | 0.001151 |
| is_trivially_copyable_test.test | RUN | 0.139490 | 0.469780 | 0.780072 | 0.001137 | 0.001309 | 0.001134 |
| is_swappable_test.test | RUN | 0.119457 | 0.352556 | 0.582653 | 0.001098 | 0.001310 | 0.001187 |
| is_stateless_test.test | RUN | 0.129780 | 0.402345 | 0.657181 | 0.001174 | 0.001199 | 0.001102 |
| is_signed_test.test | RUN | 0.091063 | 0.228181 | 0.327252 | 0.001424 | 0.001198 | 0.001037 |
| is_scoped_enum_test.test | RUN | 0.087446 | 0.208783 | 0.272526 | 0.001087 | 0.001157 | 0.001142 |
| is_scalar_test.test | RUN | 0.114191 | 0.367193 | 0.585427 | 0.001062 | 0.001209 | 0.001212 |
| is_same_test.test | RUN | 0.085723 | 0.215955 | 0.295186 | 0.001199 | 0.001262 | 0.001133 |
| is_rvalue_reference_test.test | RUN | 0.090136 | 0.250795 | 0.350799 | 0.001208 | 0.001273 | 0.001086 |
| is_reference_test.test | RUN | 0.087775 | 0.248077 | 0.355745 | 0.001098 | 0.001192 | 0.001117 |
| is_polymorphic_test.test | RUN | 0.098331 | 0.259610 | 0.377192 | 0.001028 | 0.001225 | 0.001146 |
| is_pointer_test.test | RUN | 0.090667 | 0.246279 | 0.375240 | 0.001267 | 0.001188 | 0.001180 |
| is_pod_test.test | RUN | 0.120395 | 0.412776 | 0.669365 | 0.001151 | 0.001310 | 0.001176 |
| is_object_test.test | RUN | 0.085068 | 0.214978 | 0.282250 | 0.001286 | 0.001249 | 0.001079 |
| is_nothrow_swappable_test.test | RUN | 0.126425 | 0.383763 | 0.615884 | 0.001040 | 0.001204 | 0.001272 |
| is_nothrow_move_constructible_test.test | RUN | 0.116881 | 0.394603 | 0.664152 | 0.001142 | 0.001012 | 0.001063 |
| is_nothrow_move_assignable_test.test | RUN | 0.118003 | 0.399518 | 0.660213 | 0.000988 | 0.001120 | 0.000983 |
| is_noncopyable_test.test | RUN | 0.081284 | 0.222259 | 0.287847 | 0.001143 | 0.001312 | 0.001128 |
| is_member_pointer_test.test | RUN | 0.085055 | 0.224627 | 0.300244 | 0.001033 | 0.001170 | 0.001028 |
| is_member_obj_test.test | RUN | 0.086693 | 0.225241 | 0.316178 | 0.001170 | 0.001152 | 0.001111 |
| is_member_func_test.test | RUN | 0.086886 | 0.240299 | 0.333745 | 0.001313 | 0.001151 | 0.001084 |
| is_lvalue_reference_test.test | RUN | 0.089193 | 0.250123 | 0.359999 | 0.001054 | 0.001230 | 0.001065 |
| is_list_constructible_test.test | RUN | 0.106592 | 0.290531 | 0.394133 | 0.001062 | 0.001225 | 0.001075 |
| is_integral_test.test | RUN | 0.110363 | 0.346978 | 0.549903 | 0.001253 | 0.001336 | 0.001344 |
| is_fundamental_test.test | RUN | 0.107842 | 0.351540 | 0.567012 | 0.001138 | 0.001263 | 0.001131 |
| is_function_test.test | RUN | 0.087041 | 0.236815 | 0.315825 | 0.001088 | 0.001262 | 0.001169 |
| is_floating_point_test.test | RUN | 0.093098 | 0.248166 | 0.350947 | 0.001078 | 0.001257 | 0.001083 |
| is_float_test.test | RUN | 0.092267 | 0.252689 | 0.367593 | 0.001075 | 0.001298 | 0.001214 |
| is_final_test.test | RUN | 0.089292 | 0.259306 | 0.370014 | 0.001185 | 0.001102 | 0.001070 |
| is_enum_test.test | RUN | 0.081506 | 0.213792 | 0.288576 | 0.001260 | 0.001170 | 0.001088 |
| is_empty_test.test | RUN | 0.094220 | 0.228037 | 0.327798 | 0.001027 | 0.001290 | 0.001011 |
| is_detected_test.test | RUN | 0.077739 | 0.202879 | 0.271623 | 0.001179 | 0.001482 | 0.001169 |
| is_detected_exact_test.test | RUN | 0.081542 | 0.204450 | 0.266907 | 0.001176 | 0.001060 | 0.001116 |
| is_destructible_test.test | RUN | 0.118208 | 0.387699 | 0.632363 | 0.001118 | 0.001373 | 0.001193 |
| is_default_constr_test.test | RUN | 0.120943 | 0.397804 | 0.653152 | 0.001070 | 0.001220 | 0.001143 |
| is_copy_constructible_test.test | RUN | 0.121748 | 0.429535 | 0.692472 | 0.001121 | 0.001109 | 0.001125 |
| is_copy_assignable_test.test | RUN | 0.123594 | 0.417043 | 0.678841 | 0.000961 | 0.001292 | 0.001056 |
| is_convertible_test.test | RUN | 0.115882 | 0.375234 | 0.554513 | 0.000973 | 0.001402 | 0.001092 |
| is_constructible_test.test | RUN | 0.095752 | 0.272619 | 0.392396 | 0.001033 | 0.001296 | 0.001021 |
| is_const_test.test | RUN | 0.082811 | 0.235013 | 0.318320 | 0.001231 | 0.001190 | 0.001151 |
| is_compound_test.test | RUN | 0.082644 | 0.212973 | 0.270712 | 0.001086 | 0.001154 | 0.001166 |
| is_complex_test.test | RUN | 0.106569 | 0.274036 | 0.371989 | 0.000932 | 0.001384 | 0.001131 |
| is_complete_test.test | RUN | 0.095648 | 0.286168 | 0.427599 | 0.001070 | 0.001196 | 0.001005 |
| is_class_test.test | RUN | 0.085643 | 0.251848 | 0.352383 | 0.001057 | 0.001261 | 0.001065 |
| is_bounded_array_test.test | RUN | 0.084088 | 0.222256 | 0.304490 | 0.001144 | 0.001144 | 0.001132 |
| is_base_of_test.test | RUN | 0.087011 | 0.244128 | 0.348560 | 0.001015 | 0.001332 | 0.001186 |
| is_base_and_derived_test.test | RUN | 0.083804 | 0.241979 | 0.340648 | 0.000922 | 0.001112 | 0.000987 |
| is_assignable_test.test | RUN | 0.102062 | 0.347245 | 0.534786 | 0.000964 | 0.001344 | 0.001122 |
| is_array_test.test | RUN | 0.084594 | 0.236533 | 0.326355 | 0.000968 | 0.001121 | 0.001002 |
| is_arithmetic_test.test | RUN | 0.099470 | 0.347926 | 0.536939 | 0.001014 | 0.001331 | 0.001182 |
| is_abstract_test.test | RUN | 0.184514 | 0.937386 | 1.977604 | 0.001039 | 0.001196 | 0.001112 |
| integral_constant_test.test | RUN | 0.011765 | 0.035229 | 0.039461 | 0.000461 | 0.000504 | 0.001117 |
| has_virtual_destructor_test.test | RUN | 0.088479 | 0.275193 | 0.388883 | 0.001033 | 0.001344 | 0.001286 |
| has_unary_plus_test.test | RUN | 0.172345 | 0.955214 | 1.460372 | 0.001051 | 0.001244 | 0.001340 |
| has_unary_minus_test.test | RUN | 0.175250 | 0.957893 | 1.431007 | 0.001045 | 0.001254 | 0.001139 |
| has_trivial_move_constructor_test.test | RUN | 0.115237 | 0.414797 | 0.694666 | 0.001055 | 0.001228 | 0.001204 |
| has_trivial_move_assign_test.test | RUN | 0.114541 | 0.405510 | 0.650491 | 0.000943 | 0.001324 | 0.001243 |
| has_trivial_destructor_test.test | RUN | 0.106303 | 0.415296 | 0.676485 | 0.001040 | 0.001302 | 0.001166 |
| has_trivial_copy_test.test | RUN | 0.118565 | 0.428671 | 0.691841 | 0.001034 | 0.001330 | 0.001256 |
| has_trivial_constr_test.test | RUN | 0.119503 | 0.441816 | 0.704033 | 0.001197 | 0.001282 | 0.001142 |
| has_trivial_assign_test.test | RUN | 0.119325 | 0.426695 | 0.689916 | 0.000982 | 0.001267 | 0.001383 |
| has_right_shift_test.test | RUN | 0.179544 | 0.780876 | 1.542216 | 0.001136 | 0.001348 | 0.001056 |
| has_right_shift_assign_test.test | RUN | 0.173964 | 0.735571 | 1.437178 | 0.001023 | 0.001204 | 0.001053 |
| has_prefix_classes3_test.test | RUN | 0.126922 | 0.447147 | 0.717603 | 0.001046 | 0.001122 | 0.001110 |
| has_prefix_classes2_test.test | RUN | 0.131090 | 0.440604 | 0.703309 | 0.001065 | 0.001218 | 0.001103 |
| has_prefix_classes1_test.test | RUN | 0.129854 | 0.445925 | 0.724718 | 0.001146 | 0.001220 | 0.001182 |
| has_prefix_classes0_test.test | RUN | 0.126625 | 0.449397 | 0.704136 | 0.001107 | 0.001239 | 0.001248 |
| has_pre_increment_test.test | RUN | 0.182444 | 0.950131 | 1.446821 | 0.001073 | 0.001140 | 0.001103 |
| has_pre_decrement_test.test | RUN | 0.172685 | 0.959509 | 1.439204 | 0.001200 | 0.001086 | 0.001092 |
| has_postfix_classes3_test.test | RUN | 0.141979 | 0.437798 | 0.723194 | 0.001107 | 0.001152 | 0.001189 |
| has_postfix_classes2_test.test | RUN | 0.140893 | 0.440578 | 0.710432 | 0.001121 | 0.001159 | 0.001091 |
| has_postfix_classes1_test.test | RUN | 0.138800 | 0.447996 | 0.725534 | 0.000999 | 0.001179 | 0.001200 |
| has_postfix_classes0_test.test | RUN | 0.138766 | 0.450328 | 0.735704 | 0.001094 | 0.001333 | 0.001301 |
| has_post_increment_test.test | RUN | 0.183868 | 0.967539 | 1.425108 | 0.001096 | 0.001306 | 0.001128 |
| has_post_decrement_test.test | RUN | 0.186117 | 0.946094 | 1.461804 | 0.001194 | 0.001129 | 0.001203 |
| has_plus_test.test | RUN | 0.177467 | 0.736140 | 1.435053 | 0.001080 | 0.001164 | 0.001179 |
| has_plus_assign_test.test | RUN | 0.183365 | 0.746512 | 1.414515 | 0.001055 | 0.001209 | 0.001160 |
| has_operator_new_test.test | RUN | 0.120528 | 0.396337 | 0.617262 | 0.001000 | 0.001343 | 0.001126 |
| has_nothrow_destructor_test.test | RUN | 0.120982 | 0.417598 | 0.690067 | 0.000967 | 0.001121 | 0.001052 |
| has_nothrow_copy_test.test | RUN | 0.117584 | 0.410064 | 0.681318 | 0.001049 | 0.001230 | 0.001150 |
| has_nothrow_constr_test.test | RUN | 0.114127 | 0.399544 | 0.654032 | 0.001004 | 0.001186 | 0.001077 |
| has_nothrow_assign_test.test | RUN | 0.117044 | 0.401506 | 0.658991 | 0.001159 | 0.001342 | 0.001070 |
| has_not_equal_to_test.test | RUN | 0.178941 | 0.950174 | 1.443079 | 0.001133 | 0.001233 | 0.001211 |
| has_negate_test.test | RUN | 0.172845 | 0.711506 | 1.422887 | 0.001179 | 0.001371 | 0.001290 |
| has_multiplies_test.test | RUN | 0.180563 | 0.732333 | 1.459842 | 0.001017 | 0.001103 | 0.001182 |
| has_multiplies_assign_test.test | RUN | 0.177977 | 0.728489 | 1.402468 | 0.001237 | 0.001285 | 0.001064 |
| has_modulus_test.test | RUN | 0.174720 | 0.745803 | 1.411096 | 0.001265 | 0.001192 | 0.001254 |
| has_modulus_assign_test.test | RUN | 0.176891 | 0.736991 | 1.470574 | 0.001160 | 0.001172 | 0.001325 |
| has_minus_test.test | RUN | 0.184668 | 0.756922 | 1.469950 | 0.001105 | 0.001313 | 0.001091 |
| has_minus_assign_test.test | RUN | 0.184277 | 0.762512 | 1.427301 | 0.001086 | 0.001356 | 0.001152 |
| has_logical_or_test.test | RUN | 0.180122 | 0.754704 | 1.395584 | 0.001134 | 0.001251 | 0.001267 |
| has_logical_not_test.test | RUN | 0.174296 | 0.718969 | 1.416526 | 0.001124 | 0.001315 | 0.001350 |
| has_logical_and_test.test | RUN | 0.171704 | 0.763969 | 1.457717 | 0.001067 | 0.001147 | 0.001248 |
| has_less_test.test | RUN | 0.175069 | 0.949572 | 1.407342 | 0.001175 | 0.001237 | 0.000932 |
| has_less_equal_test.test | RUN | 0.180678 | 0.944946 | 1.414906 | 0.001213 | 0.001174 | 0.001206 |
| has_left_shift_test.test | RUN | 0.197840 | 0.939399 | 1.834563 | 0.001051 | 0.001100 | 0.001066 |
| has_left_shift_assign_test.test | RUN | 0.178279 | 0.735630 | 1.388215 | 0.001017 | 0.001038 | 0.001227 |
| has_greater_test.test | RUN | 0.183655 | 0.937476 | 1.478283 | 0.001123 | 0.001330 | 0.001081 |
| has_greater_equal_test.test | RUN | 0.181958 | 0.941342 | 1.414971 | 0.001207 | 0.001074 | 0.001247 |
| has_equal_to_test.test | RUN | 0.182425 | 0.945278 | 1.423282 | 0.000939 | 0.001192 | 0.001111 |
| has_divides_test.test | RUN | 0.175083 | 0.733832 | 1.520256 | 0.001083 | 0.001233 | 0.001146 |
| has_divides_assign_test.test | RUN | 0.179687 | 0.747358 | 1.503473 | 0.001101 | 0.001167 | 0.001029 |
| has_dereference_test.test | RUN | 0.175097 | 0.721191 | 1.343869 | 0.001369 | 0.001280 | 0.001165 |
| has_complement_test.test | RUN | 0.174542 | 0.963940 | 1.402526 | 0.000945 | 0.000880 | 0.001234 |
| has_bit_xor_test.test | RUN | 0.177375 | 0.730774 | 1.476978 | 0.000964 | 0.001246 | 0.001071 |
| has_bit_xor_assign_test.test | RUN | 0.180327 | 0.742347 | 1.469568 | 0.000995 | 0.001175 | 0.001116 |
| has_bit_or_test.test | RUN | 0.174002 | 0.732092 | 1.412997 | 0.001067 | 0.001265 | 0.001212 |
| has_bit_or_assign_test.test | RUN | 0.173840 | 0.734123 | 1.516235 | 0.001065 | 0.001323 | 0.001278 |
| has_bit_and_test.test | RUN | 0.175779 | 0.729986 | 1.479908 | 0.000969 | 0.001196 | 0.001110 |
| has_bit_and_assign_test.test | RUN | 0.172632 | 0.739091 | 1.416207 | 0.001141 | 0.001279 | 0.001111 |
| has_binary_classes9_test.test | RUN | 0.190805 | 0.882217 | 1.606389 | 0.001145 | 0.001349 | 0.001323 |
| has_binary_classes8_test.test | RUN | 0.191360 | 0.862595 | 1.659795 | 0.001126 | 0.001282 | 0.001240 |
| has_binary_classes7_test.test | RUN | 0.193914 | 0.863461 | 1.612015 | 0.001104 | 0.001354 | 0.001087 |
| has_binary_classes6_test.test | RUN | 0.185235 | 0.862174 | 1.668195 | 0.000974 | 0.001370 | 0.001104 |
| has_binary_classes5_test.test | RUN | 0.170063 | 0.865547 | 1.604637 | 0.001147 | 0.001509 | 0.001105 |
| has_binary_classes4_test.test | RUN | 0.190941 | 0.886196 | 1.665350 | 0.001072 | 0.001265 | 0.001295 |
| has_binary_classes3_test.test | RUN | 0.191896 | 0.881935 | 1.603150 | 0.001126 | 0.001343 | 0.001102 |
| has_binary_classes2_test.test | RUN | 0.192597 | 0.892846 | 1.648808 | 0.001060 | 0.001390 | 0.001110 |
| has_binary_classes1_test.test | RUN | 0.197561 | 0.866033 | 1.585912 | 0.001109 | 0.001244 | 0.001097 |
| has_binary_classes0_test.test | RUN | 0.193186 | 0.888736 | 1.648070 | 0.000923 | 0.001158 | 0.001095 |
| function_traits_test.test | RUN | 0.086229 | 0.232354 | 0.316832 | 0.001030 | 0.001228 | 0.001164 |
| floating_point_promotion_test.test | RUN | 0.083158 | 0.230281 | 0.330096 | 0.000953 | 0.001262 | 0.000987 |
| extent_test.test | RUN | 0.086418 | 0.240287 | 0.351864 | 0.001169 | 0.001289 | 0.001100 |
| enable_if_test.test | RUN | 0.078338 | 0.201670 | 0.262137 | 0.001071 | 0.001466 | 0.001202 |
| disjunction_test.test | RUN | 0.081616 | 0.211300 | 0.275929 | 0.001073 | 0.001063 | 0.000951 |
| detected_test.test | RUN | 0.080121 | 0.198479 | 0.250397 | 0.001020 | 0.001134 | 0.001166 |
| detected_or_test.test | RUN | 0.082646 | 0.211965 | 0.279282 | 0.001134 | 0.001163 | 0.001115 |
| decay_test.test | RUN | 0.216758 | 0.792144 | 1.584481 | 0.001148 | 0.001340 | 0.001264 |
| cxx14_aliases_test.test | RUN | 0.132113 | 0.297944 | 0.428637 | 0.001007 | 0.001301 | 0.001244 |
| copy_reference_test.test | RUN | 0.079432 | 0.211449 | 0.280976 | 0.001151 | 0.001173 | 0.001268 |
| copy_cv_test.test | RUN | 0.088329 | 0.216066 | 0.299668 | 0.001110 | 0.001174 | 0.001190 |
| copy_cv_ref_test.test | RUN | 0.119756 | 0.362082 | 0.686838 | 0.001138 | 0.001170 | 0.001010 |
| conjunction_test.test | RUN | 0.082210 | 0.212862 | 0.281451 | 0.001082 | 0.001006 | 0.001181 |
| conditional_test.test | RUN | 0.075671 | 0.209916 | 0.273067 | 0.001126 | 0.001190 | 0.001153 |
| common_type_test.test | RUN | 0.112142 | 0.316729 | 0.527626 | 0.001013 | 0.001009 | 0.000936 |
| common_type_sfinae_test.test | RUN | 0.082075 | 0.196115 | 0.264190 | 0.000911 | 0.001201 | 0.001128 |
| common_type_sfinae2_test.test | RUN | 0.081953 | 0.214749 | 0.280357 | 0.000851 | 0.001243 | 0.000989 |
| common_type_6_test.test | RUN | 0.081792 | 0.212436 | 0.289099 | 0.001048 | 0.001075 | 0.001186 |
| common_type_5_test.test | RUN | 0.083744 | 0.212156 | 0.288429 | 0.000811 | 0.001267 | 0.001209 |
| common_type_4_test.test | RUN | 0.087146 | 0.227396 | 0.338117 | 0.001087 | 0.001057 | 0.001103 |
| common_type_3_test.test | RUN | 0.080539 | 0.196854 | 0.251158 | 0.001200 | 0.001179 | 0.001186 |
| common_type_2_test.test | RUN | 0.109096 | 0.313049 | 0.506137 | 0.001009 | 0.001271 | 0.001081 |
| alignment_of_test.test | RUN | 0.089659 | 0.251933 | 0.342010 | 0.001050 | 0.001277 | 0.001059 |
| alignment_of_a2_test.test | RUN | 0.088300 | 0.256255 | 0.341011 | 0.000931 | 0.001154 | 0.001183 |
| aligned_storage_test.test | RUN | 0.088159 | 0.247147 | 0.308922 | 0.001214 | 0.001272 | 0.001167 |
| aligned_storage_empy_test.test | RUN | 0.104719 | 0.276439 | 0.415233 | 0.001048 | 0.001187 | 0.001109 |
| aligned_storage_a2_test.test | RUN | 0.091925 | 0.243836 | 0.314567 | 0.001140 | 0.001347 | 0.001268 |
| add_volatile_test.test | RUN | 0.196978 | 0.710579 | 1.495314 | 0.001269 | 0.001277 | 0.001220 |
| add_rvalue_reference_test.test | RUN | 0.216699 | 0.803641 | 1.667494 | 0.001082 | 0.001206 | 0.001126 |
| add_reference_test.test | RUN | 0.211661 | 0.770465 | 1.674847 | 0.001001 | 0.001169 | 0.001245 |
| add_pointer_test.test | RUN | 0.135695 | 0.440831 | 0.872876 | 0.001032 | 0.001189 | 0.001239 |
| add_lvalue_reference_test.test | RUN | 0.214160 | 0.780043 | 1.648167 | 0.001186 | 0.001161 | 0.001217 |
| add_cv_test.test | RUN | 0.200187 | 0.728061 | 1.528628 | 0.001203 | 0.001280 | 0.001187 |
| add_const_test.test | RUN | 0.202941 | 0.735771 | 1.542871 | 0.000975 | 0.001195 | 0.001124 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.075514 | 0.191011 | 0.254509 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.079115 | 0.195986 | 0.263164 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.071939 | 0.183969 | 0.252538 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.079133 | 0.187429 | 0.235447 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.075247 | 0.187137 | 0.245933 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.077583 | 0.189298 | 0.238546 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.075002 | 0.190520 | 0.242824 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.075793 | 0.186430 | 0.244953 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.076554 | 0.187279 | 0.246817 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.077017 | 0.192242 | 0.246741 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.074914 | 0.186712 | 0.247272 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.073096 | 0.186251 | 0.247534 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.074742 | 0.184876 | 0.245951 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.073013 | 0.186646 | 0.246458 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.071161 | 0.186839 | 0.241266 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.075377 | 0.189717 | 0.244015 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.075591 | 0.188557 | 0.245554 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.078391 | 0.188578 | 0.243879 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.073305 | 0.187209 | 0.244080 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.075026 | 0.185807 | 0.245202 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.075202 | 0.185251 | 0.250360 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.077326 | 0.184727 | 0.247404 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.118049 | 0.403902 | 0.674766 | 0.001125 | 0.001317 | 0.001262 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.114795 | 0.398712 | 0.662857 | 0.001042 | 0.001266 | 0.001210 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.118723 | 0.404388 | 0.685400 | 0.001049 | 0.000849 | 0.001100 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.118477 | 0.404966 | 0.664898 | 0.000780 | 0.000783 | 0.000816 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.083658 | 0.304416 | 0.397612 | 0.000808 | 0.000886 | 0.000835 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997× | 0.998×, 0.997× | 0.993× |
| clang | 1.021× | 1.020×, 1.021× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46032707836).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.000807s | 0.000756s | 0.000775s | byte equality observed |
| add_cv_test.test | 10 | 0.000800s | 0.000805s | 0.000770s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.000784s | 0.000811s | 0.000795s | byte equality observed |
| add_pointer_test.test | 10 | 0.000795s | 0.000816s | 0.000793s | byte equality observed |
| add_reference_test.test | 10 | 0.000781s | 0.000795s | 0.000803s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.000805s | 0.000787s | 0.000766s | byte equality observed |
| add_volatile_test.test | 10 | 0.000816s | 0.000754s | 0.000776s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.000848s | 0.000848s | 0.000832s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.000820s | 0.000795s | 0.000803s | byte equality observed |
| aligned_storage_test.test | 10 | 0.000828s | 0.000830s | 0.000831s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.000774s | 0.000823s | 0.000758s | byte equality observed |
| alignment_of_test.test | 10 | 0.000778s | 0.000761s | 0.000784s | byte equality observed |
| common_type_2_test.test | 10 | 0.000788s | 0.000763s | 0.000783s | byte equality observed |
| common_type_3_test.test | 10 | 0.000777s | 0.000766s | 0.000760s | byte equality observed |
| common_type_4_test.test | 10 | 0.000784s | 0.000770s | 0.000777s | byte equality observed |
| common_type_5_test.test | 10 | 0.000765s | 0.000778s | 0.000785s | byte equality observed |
| common_type_6_test.test | 10 | 0.000793s | 0.000761s | 0.000798s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.000783s | 0.000788s | 0.000793s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.000795s | 0.000810s | 0.000758s | byte equality observed |
| common_type_test.test | 10 | 0.000774s | 0.000814s | 0.000794s | byte equality observed |
| conditional_test.test | 10 | 0.000764s | 0.000801s | 0.000749s | byte equality observed |
| conjunction_test.test | 10 | 0.000809s | 0.000793s | 0.000784s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.000813s | 0.000754s | 0.000768s | byte equality observed |
| copy_cv_test.test | 10 | 0.000786s | 0.000760s | 0.000777s | byte equality observed |
| copy_reference_test.test | 10 | 0.000778s | 0.000782s | 0.000785s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.000777s | 0.000783s | 0.000753s | byte equality observed |
| decay_test.test | 10 | 0.000803s | 0.000801s | 0.000786s | byte equality observed |
| detected_or_test.test | 10 | 0.000797s | 0.000767s | 0.000767s | byte equality observed |
| detected_test.test | 10 | 0.000782s | 0.000786s | 0.000775s | byte equality observed |
| disjunction_test.test | 10 | 0.000778s | 0.000790s | 0.000778s | byte equality observed |
| enable_if_test.test | 10 | 0.000783s | 0.000792s | 0.000766s | byte equality observed |
| extent_test.test | 10 | 0.000793s | 0.000819s | 0.000760s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.000798s | 0.000792s | 0.000779s | byte equality observed |
| function_traits_test.test | 10 | 0.000814s | 0.000808s | 0.000799s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000789s | 0.000819s | 0.000796s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.000771s | 0.000807s | 0.000787s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.000776s | 0.000817s | 0.000779s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.000771s | 0.000788s | 0.000770s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.000782s | 0.000762s | 0.000815s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.000772s | 0.000784s | 0.000791s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.000799s | 0.000761s | 0.000783s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.000786s | 0.000810s | 0.000777s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.000763s | 0.000792s | 0.000784s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.000781s | 0.000787s | 0.000775s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.000791s | 0.000805s | 0.000795s | byte equality observed |
| has_bit_and_test.test | 10 | 0.000773s | 0.000756s | 0.000784s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.000789s | 0.000759s | 0.000766s | byte equality observed |
| has_bit_or_test.test | 10 | 0.000792s | 0.000744s | 0.000795s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.000770s | 0.000783s | 0.000798s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.000778s | 0.000759s | 0.000785s | byte equality observed |
| has_complement_test.test | 10 | 0.000777s | 0.000760s | 0.000797s | byte equality observed |
| has_dereference_test.test | 10 | 0.000784s | 0.000793s | 0.000771s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.000796s | 0.000794s | 0.000769s | byte equality observed |
| has_divides_test.test | 10 | 0.000799s | 0.000810s | 0.000773s | byte equality observed |
| has_equal_to_test.test | 10 | 0.000806s | 0.000811s | 0.000782s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.000800s | 0.000767s | 0.000769s | byte equality observed |
| has_greater_test.test | 10 | 0.000785s | 0.000769s | 0.000764s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.000788s | 0.000769s | 0.000781s | byte equality observed |
| has_left_shift_test.test | 10 | 0.000775s | 0.000760s | 0.000775s | byte equality observed |
| has_less_equal_test.test | 10 | 0.000777s | 0.000756s | 0.000780s | byte equality observed |
| has_less_test.test | 10 | 0.000783s | 0.000771s | 0.000785s | byte equality observed |
| has_logical_and_test.test | 10 | 0.000781s | 0.000779s | 0.000778s | byte equality observed |
| has_logical_not_test.test | 10 | 0.000774s | 0.000769s | 0.000776s | byte equality observed |
| has_logical_or_test.test | 10 | 0.000789s | 0.000776s | 0.000774s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.000780s | 0.000779s | 0.000763s | byte equality observed |
| has_minus_test.test | 10 | 0.000790s | 0.000767s | 0.000774s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.000790s | 0.000790s | 0.000781s | byte equality observed |
| has_modulus_test.test | 10 | 0.000800s | 0.000786s | 0.000773s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.000795s | 0.000792s | 0.000765s | byte equality observed |
| has_multiplies_test.test | 10 | 0.000765s | 0.000781s | 0.000783s | byte equality observed |
| has_negate_test.test | 10 | 0.000777s | 0.000780s | 0.000762s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.000790s | 0.000804s | 0.000756s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.000782s | 0.000784s | 0.000775s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.000799s | 0.000772s | 0.000767s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.000792s | 0.000762s | 0.000778s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.000790s | 0.000793s | 0.000788s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.000782s | 0.000780s | 0.000779s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.000796s | 0.000794s | 0.000807s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.000780s | 0.000790s | 0.000793s | byte equality observed |
| has_operator_new_test.test | 10 | 0.000768s | 0.000782s | 0.000773s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.000783s | 0.000783s | 0.000771s | byte equality observed |
| has_plus_test.test | 10 | 0.000780s | 0.000775s | 0.000779s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.000765s | 0.000786s | 0.000775s | byte equality observed |
| has_post_increment_test.test | 10 | 0.000761s | 0.000786s | 0.000799s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.000780s | 0.000791s | 0.000794s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.000771s | 0.000801s | 0.000805s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.000766s | 0.000795s | 0.000792s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.000777s | 0.000792s | 0.000776s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.000796s | 0.000779s | 0.000774s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.000804s | 0.000769s | 0.000792s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.000791s | 0.000772s | 0.000763s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.000788s | 0.000791s | 0.000778s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.000797s | 0.000780s | 0.000762s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.000785s | 0.000785s | 0.000775s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.000794s | 0.000791s | 0.000764s | byte equality observed |
| has_right_shift_test.test | 10 | 0.000779s | 0.000801s | 0.000779s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.000813s | 0.000836s | 0.000791s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.000811s | 0.000823s | 0.000846s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.000806s | 0.000800s | 0.000840s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.000791s | 0.000802s | 0.000778s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.000781s | 0.000781s | 0.000774s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.000790s | 0.000775s | 0.000768s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.000793s | 0.000791s | 0.000790s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.000806s | 0.000776s | 0.000782s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.000787s | 0.000774s | 0.000798s | byte equality observed |
| integral_constant_test.test | 10 | 0.000357s | 0.000360s | 0.000768s | byte equality observed |
| is_abstract_test.test | 10 | 0.000783s | 0.000775s | 0.000781s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.000790s | 0.000810s | 0.000773s | byte equality observed |
| is_array_test.test | 10 | 0.000787s | 0.000792s | 0.000761s | byte equality observed |
| is_assignable_test.test | 10 | 0.000769s | 0.000790s | 0.000774s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.000770s | 0.000798s | 0.000760s | byte equality observed |
| is_base_of_test.test | 10 | 0.000774s | 0.000752s | 0.000763s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.000759s | 0.000768s | 0.000761s | byte equality observed |
| is_class_test.test | 10 | 0.000789s | 0.000796s | 0.000776s | byte equality observed |
| is_complete_test.test | 10 | 0.000794s | 0.000754s | 0.000782s | byte equality observed |
| is_complex_test.test | 10 | 0.000773s | 0.000770s | 0.000816s | byte equality observed |
| is_compound_test.test | 10 | 0.000780s | 0.000781s | 0.000801s | byte equality observed |
| is_const_test.test | 10 | 0.000770s | 0.000773s | 0.000782s | byte equality observed |
| is_constructible_test.test | 10 | 0.000769s | 0.000780s | 0.000765s | byte equality observed |
| is_convertible_test.test | 10 | 0.000767s | 0.000774s | 0.000780s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.000803s | 0.000805s | 0.000784s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.000794s | 0.000816s | 0.000807s | byte equality observed |
| is_default_constr_test.test | 10 | 0.000783s | 0.000801s | 0.000799s | byte equality observed |
| is_destructible_test.test | 10 | 0.000789s | 0.000783s | 0.000808s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.000791s | 0.000793s | 0.000784s | byte equality observed |
| is_detected_test.test | 10 | 0.000798s | 0.000785s | 0.000775s | byte equality observed |
| is_empty_test.test | 10 | 0.000788s | 0.000805s | 0.000776s | byte equality observed |
| is_enum_test.test | 10 | 0.000771s | 0.000801s | 0.000770s | byte equality observed |
| is_final_test.test | 10 | 0.000780s | 0.000774s | 0.000779s | byte equality observed |
| is_float_test.test | 10 | 0.000778s | 0.000770s | 0.000780s | byte equality observed |
| is_floating_point_test.test | 10 | 0.000790s | 0.000806s | 0.000771s | byte equality observed |
| is_function_test.test | 10 | 0.000781s | 0.000806s | 0.000772s | byte equality observed |
| is_fundamental_test.test | 10 | 0.000802s | 0.000798s | 0.000775s | byte equality observed |
| is_integral_test.test | 10 | 0.000787s | 0.000796s | 0.000781s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.000794s | 0.000790s | 0.000792s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.000807s | 0.000786s | 0.000799s | byte equality observed |
| is_member_func_test.test | 10 | 0.000780s | 0.000778s | 0.000775s | byte equality observed |
| is_member_obj_test.test | 10 | 0.000773s | 0.000769s | 0.000811s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.000776s | 0.000781s | 0.000784s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.000788s | 0.000763s | 0.000764s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.000781s | 0.000767s | 0.000757s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.000778s | 0.000749s | 0.000800s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.000761s | 0.000759s | 0.000804s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.000798s | 0.000767s | 0.000770s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.000760s | 0.000803s | 0.000774s | byte equality observed |
| is_object_test.test | 10 | 0.000752s | 0.000786s | 0.000760s | byte equality observed |
| is_pod_test.test | 10 | 0.000768s | 0.000772s | 0.000791s | byte equality observed |
| is_pointer_test.test | 10 | 0.000773s | 0.000791s | 0.000804s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.000768s | 0.000755s | 0.000779s | byte equality observed |
| is_reference_test.test | 10 | 0.000771s | 0.000777s | 0.000816s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.000784s | 0.000794s | 0.000802s | byte equality observed |
| is_same_test.test | 10 | 0.000780s | 0.000788s | 0.000770s | byte equality observed |
| is_scalar_test.test | 10 | 0.000802s | 0.000796s | 0.000777s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.000809s | 0.000782s | 0.000781s | byte equality observed |
| is_signed_test.test | 10 | 0.000789s | 0.000793s | 0.000779s | byte equality observed |
| is_stateless_test.test | 10 | 0.000788s | 0.000791s | 0.000760s | byte equality observed |
| is_swappable_test.test | 10 | 0.000795s | 0.000755s | 0.000785s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.000804s | 0.000805s | 0.000805s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.000800s | 0.000782s | 0.000795s | byte equality observed |
| is_union_test.test | 10 | 0.000782s | 0.000776s | 0.000797s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.000772s | 0.000785s | 0.000803s | byte equality observed |
| is_unsigned_test.test | 10 | 0.000775s | 0.000768s | 0.000793s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.000779s | 0.000778s | 0.000798s | byte equality observed |
| is_void_test.test | 10 | 0.000769s | 0.000809s | 0.000786s | byte equality observed |
| is_volatile_test.test | 10 | 0.000767s | 0.000785s | 0.000798s | byte equality observed |
| make_signed_test.test | 10 | 0.000785s | 0.000799s | 0.000822s | byte equality observed |
| make_unsigned_test.test | 10 | 0.000785s | 0.000783s | 0.000809s | byte equality observed |
| make_void_test.test | 10 | 0.000791s | 0.000787s | 0.000775s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000369s | 0.000353s | 0.000788s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000364s | 0.000361s | 0.000761s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000362s | 0.000355s | 0.000772s | byte equality observed |
| negation_test.test | 10 | 0.000775s | 0.000788s | 0.000778s | byte equality observed |
| promote_basic_test.test | 10 | 0.000361s | 0.000356s | 0.000767s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000366s | 0.000359s | 0.000796s | byte equality observed |
| promote_enum_test.test | 10 | 0.000361s | 0.000357s | 0.000799s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000355s | 0.000359s | 0.000812s | byte equality observed |
| rank_test.test | 10 | 0.000799s | 0.000778s | 0.000813s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.000776s | 0.000786s | 0.000796s | byte equality observed |
| remove_bounds_test.test | 10 | 0.000784s | 0.000765s | 0.000790s | byte equality observed |
| remove_const_test.test | 10 | 0.000800s | 0.000770s | 0.000781s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.000791s | 0.000772s | 0.000776s | byte equality observed |
| remove_cv_test.test | 10 | 0.000791s | 0.000763s | 0.000763s | byte equality observed |
| remove_extent_test.test | 10 | 0.000801s | 0.000800s | 0.000792s | byte equality observed |
| remove_pointer_test.test | 10 | 0.000794s | 0.000813s | 0.000761s | byte equality observed |
| remove_reference_test.test | 10 | 0.000795s | 0.000806s | 0.000756s | byte equality observed |
| remove_volatile_test.test | 10 | 0.000796s | 0.000783s | 0.000764s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.000801s | 0.000777s | 0.000760s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.000798s | 0.000771s | 0.000792s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.000778s | 0.000777s | 0.000792s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.000778s | 0.000750s | 0.000818s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.000790s | 0.000798s | 0.000798s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.000790s | 0.000824s | 0.000778s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.000790s | 0.000826s | 0.000782s | byte equality observed |
| type_identity_test.test | 10 | 0.000796s | 0.000805s | 0.000809s | byte equality observed |
| type_traits_test.test | 10 | 0.000356s | 0.000360s | 0.000792s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.000834s | 0.000821s | 0.000835s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46032707836).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
