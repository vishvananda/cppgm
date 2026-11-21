# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.091637 | 0.268198 | 0.372470 | 0.001302 | 0.001274 | 0.001273 |
| type_traits_test.test | RUN | 0.129509 | 0.277297 | 0.381421 | 0.000438 | 0.000392 | 0.001052 |
| type_identity_test.test | RUN | 0.247866 | 0.912475 | 1.947758 | 0.001245 | 0.001242 | 0.001191 |
| tricky_rvalue_test.test | RUN | 0.084689 | 0.218294 | 0.294627 | 0.001049 | 0.001468 | 0.001217 |
| tricky_partial_spec_test.test | RUN | 0.101302 | 0.306698 | 0.463919 | 0.001074 | 0.001153 | 0.001248 |
| tricky_is_enum_test.test | RUN | 0.080453 | 0.203801 | 0.270865 | 0.001186 | 0.001078 | 0.001156 |
| tricky_incomplete_type_test.test | RUN | 0.133513 | 0.311950 | 0.456812 | 0.001092 | 0.001208 | 0.001190 |
| tricky_function_type_test.test | RUN | 0.111366 | 0.333745 | 0.521952 | 0.001209 | 0.001062 | 0.001171 |
| tricky_add_pointer_test.test | RUN | 0.165813 | 0.562241 | 1.135572 | 0.000992 | 0.001226 | 0.001156 |
| tricky_abstract_type_test.test | RUN | 0.087565 | 0.210036 | 0.287506 | 0.001308 | 0.000983 | 0.001275 |
| remove_volatile_test.test | RUN | 0.220378 | 0.803557 | 1.723191 | 0.001204 | 0.001148 | 0.001274 |
| remove_reference_test.test | RUN | 0.228460 | 0.846981 | 1.840677 | 0.001194 | 0.001365 | 0.001350 |
| remove_pointer_test.test | RUN | 0.236203 | 0.878870 | 1.942996 | 0.001299 | 0.001124 | 0.001245 |
| remove_extent_test.test | RUN | 0.229829 | 0.857873 | 1.846155 | 0.001235 | 0.001212 | 0.001227 |
| remove_cv_test.test | RUN | 0.226518 | 0.858761 | 1.840770 | 0.000823 | 0.001193 | 0.001186 |
| remove_cv_ref_test.test | RUN | 0.473793 | 2.088325 | 4.501857 | 0.001107 | 0.001193 | 0.001146 |
| remove_const_test.test | RUN | 0.219936 | 0.813339 | 1.786708 | 0.001412 | 0.001173 | 0.001325 |
| remove_bounds_test.test | RUN | 0.228479 | 0.850925 | 1.890664 | 0.001119 | 0.001327 | 0.001232 |
| remove_all_extents_test.test | RUN | 0.227216 | 0.836711 | 1.767024 | 0.001080 | 0.001205 | 0.001109 |
| rank_test.test | RUN | 0.084129 | 0.218860 | 0.305258 | 0.001135 | 0.001214 | 0.001241 |
| promote_mpl_test.test | RUN | 0.075017 | 0.190403 | 0.220008 | 0.000434 | 0.000515 | 0.001177 |
| promote_enum_test.test | RUN | 0.016374 | 0.043254 | 0.052563 | 0.000419 | 0.000496 | 0.001125 |
| promote_enum_msvc_bug_test.test | RUN | 0.014596 | 0.040076 | 0.045663 | 0.000464 | 0.000468 | 0.001272 |
| promote_basic_test.test | RUN | 0.018266 | 0.050862 | 0.055393 | 0.000490 | 0.000492 | 0.001127 |
| negation_test.test | RUN | 0.083327 | 0.191927 | 0.276749 | 0.001150 | 0.001343 | 0.001330 |
| mpl_interop_test3.test | RUN | 0.071423 | 0.182759 | 0.196491 | 0.000459 | 0.000432 | 0.001086 |
| mpl_interop_test2.test | RUN | 0.024256 | 0.053916 | 0.054452 | 0.000502 | 0.000490 | 0.001242 |
| mpl_interop_test1.test | RUN | 0.013854 | 0.036212 | 0.039543 | 0.000487 | 0.000479 | 0.001137 |
| make_void_test.test | RUN | 0.087300 | 0.212389 | 0.304044 | 0.001216 | 0.001248 | 0.001308 |
| make_unsigned_test.test | RUN | 0.101031 | 0.281279 | 0.411960 | 0.001346 | 0.001216 | 0.001237 |
| make_signed_test.test | RUN | 0.102316 | 0.282321 | 0.408599 | 0.001056 | 0.001028 | 0.000876 |
| is_volatile_test.test | RUN | 0.086567 | 0.237165 | 0.337574 | 0.001084 | 0.001217 | 0.001289 |
| is_void_test.test | RUN | 0.087833 | 0.219240 | 0.315128 | 0.001171 | 0.001210 | 0.001088 |
| is_virtual_base_of_test.test | RUN | 0.099539 | 0.279851 | 0.432345 | 0.001303 | 0.001182 | 0.001258 |
| is_unsigned_test.test | RUN | 0.091095 | 0.228365 | 0.322083 | 0.001028 | 0.001115 | 0.001200 |
| is_unscoped_enum_test.test | RUN | 0.084345 | 0.208686 | 0.278710 | 0.001041 | 0.001194 | 0.001310 |
| is_union_test.test | RUN | 0.089066 | 0.258605 | 0.379317 | 0.001174 | 0.001127 | 0.001318 |
| is_unbounded_array_test.test | RUN | 0.085473 | 0.226144 | 0.314881 | 0.001178 | 0.001253 | 0.001174 |
| is_trivially_copyable_test.test | RUN | 0.139966 | 0.459771 | 0.783816 | 0.001110 | 0.001134 | 0.001112 |
| is_swappable_test.test | RUN | 0.112898 | 0.347941 | 0.569688 | 0.001083 | 0.001170 | 0.001379 |
| is_stateless_test.test | RUN | 0.128790 | 0.402962 | 0.658187 | 0.001345 | 0.001134 | 0.001141 |
| is_signed_test.test | RUN | 0.085843 | 0.235353 | 0.319234 | 0.001121 | 0.001255 | 0.001167 |
| is_scoped_enum_test.test | RUN | 0.084274 | 0.205060 | 0.279162 | 0.001181 | 0.001133 | 0.001119 |
| is_scalar_test.test | RUN | 0.115726 | 0.362568 | 0.592872 | 0.001116 | 0.001087 | 0.001349 |
| is_same_test.test | RUN | 0.086200 | 0.216391 | 0.301498 | 0.001156 | 0.001371 | 0.001171 |
| is_rvalue_reference_test.test | RUN | 0.088328 | 0.245496 | 0.358722 | 0.001046 | 0.001096 | 0.001217 |
| is_reference_test.test | RUN | 0.090472 | 0.252067 | 0.359680 | 0.001197 | 0.001035 | 0.001193 |
| is_polymorphic_test.test | RUN | 0.093571 | 0.260727 | 0.378174 | 0.001028 | 0.001272 | 0.001108 |
| is_pointer_test.test | RUN | 0.090756 | 0.251542 | 0.381108 | 0.001316 | 0.001213 | 0.001117 |
| is_pod_test.test | RUN | 0.117344 | 0.403281 | 0.677042 | 0.001050 | 0.001149 | 0.001274 |
| is_object_test.test | RUN | 0.079466 | 0.217487 | 0.286947 | 0.001090 | 0.001155 | 0.001102 |
| is_nothrow_swappable_test.test | RUN | 0.123437 | 0.389138 | 0.627919 | 0.001055 | 0.001290 | 0.001187 |
| is_nothrow_move_constructible_test.test | RUN | 0.118717 | 0.387493 | 0.677423 | 0.001153 | 0.001078 | 0.001188 |
| is_nothrow_move_assignable_test.test | RUN | 0.119526 | 0.391795 | 0.689486 | 0.001015 | 0.001082 | 0.001293 |
| is_noncopyable_test.test | RUN | 0.083973 | 0.216135 | 0.292742 | 0.001240 | 0.001074 | 0.001176 |
| is_member_pointer_test.test | RUN | 0.087628 | 0.213590 | 0.302620 | 0.001024 | 0.001158 | 0.001208 |
| is_member_obj_test.test | RUN | 0.089652 | 0.223611 | 0.313042 | 0.000998 | 0.001030 | 0.001216 |
| is_member_func_test.test | RUN | 0.090590 | 0.233310 | 0.341466 | 0.001376 | 0.001046 | 0.001141 |
| is_lvalue_reference_test.test | RUN | 0.090619 | 0.244081 | 0.360786 | 0.001040 | 0.001069 | 0.001187 |
| is_list_constructible_test.test | RUN | 0.107256 | 0.289179 | 0.390409 | 0.001039 | 0.001175 | 0.001152 |
| is_integral_test.test | RUN | 0.107310 | 0.347609 | 0.549349 | 0.001128 | 0.001053 | 0.001163 |
| is_fundamental_test.test | RUN | 0.106870 | 0.349630 | 0.581219 | 0.000854 | 0.001150 | 0.001106 |
| is_function_test.test | RUN | 0.090780 | 0.231458 | 0.341929 | 0.001091 | 0.001270 | 0.001184 |
| is_floating_point_test.test | RUN | 0.093251 | 0.248575 | 0.364655 | 0.001045 | 0.001448 | 0.001082 |
| is_float_test.test | RUN | 0.090655 | 0.246217 | 0.364219 | 0.001105 | 0.001097 | 0.001168 |
| is_final_test.test | RUN | 0.088688 | 0.255126 | 0.377497 | 0.000935 | 0.000981 | 0.001088 |
| is_enum_test.test | RUN | 0.085607 | 0.210448 | 0.292604 | 0.001073 | 0.001062 | 0.001040 |
| is_empty_test.test | RUN | 0.094691 | 0.229992 | 0.337110 | 0.001056 | 0.001240 | 0.001062 |
| is_detected_test.test | RUN | 0.084370 | 0.205442 | 0.272933 | 0.001161 | 0.001140 | 0.000856 |
| is_detected_exact_test.test | RUN | 0.080763 | 0.199064 | 0.267258 | 0.001220 | 0.001100 | 0.001173 |
| is_destructible_test.test | RUN | 0.110984 | 0.388119 | 0.654591 | 0.001107 | 0.001213 | 0.001259 |
| is_default_constr_test.test | RUN | 0.118333 | 0.398972 | 0.670185 | 0.001049 | 0.001332 | 0.001221 |
| is_copy_constructible_test.test | RUN | 0.123839 | 0.417718 | 0.715827 | 0.001213 | 0.001171 | 0.001044 |
| is_copy_assignable_test.test | RUN | 0.120596 | 0.413915 | 0.709900 | 0.001228 | 0.001095 | 0.001208 |
| is_convertible_test.test | RUN | 0.116484 | 0.369316 | 0.588174 | 0.001086 | 0.001165 | 0.001263 |
| is_constructible_test.test | RUN | 0.100528 | 0.266497 | 0.426086 | 0.001034 | 0.001125 | 0.001304 |
| is_const_test.test | RUN | 0.090254 | 0.231039 | 0.347097 | 0.001212 | 0.001008 | 0.001189 |
| is_compound_test.test | RUN | 0.083342 | 0.203051 | 0.282934 | 0.001331 | 0.001186 | 0.001617 |
| is_complex_test.test | RUN | 0.112013 | 0.260098 | 0.378178 | 0.001170 | 0.001109 | 0.001203 |
| is_complete_test.test | RUN | 0.096122 | 0.275270 | 0.425788 | 0.001107 | 0.001170 | 0.001304 |
| is_class_test.test | RUN | 0.087973 | 0.245436 | 0.367338 | 0.001176 | 0.001096 | 0.001133 |
| is_bounded_array_test.test | RUN | 0.084373 | 0.218403 | 0.312934 | 0.001178 | 0.001250 | 0.001229 |
| is_base_of_test.test | RUN | 0.089952 | 0.236411 | 0.347064 | 0.001033 | 0.001251 | 0.001275 |
| is_base_and_derived_test.test | RUN | 0.090646 | 0.238587 | 0.354534 | 0.001077 | 0.001284 | 0.001296 |
| is_assignable_test.test | RUN | 0.106378 | 0.337627 | 0.524220 | 0.001078 | 0.001016 | 0.001392 |
| is_array_test.test | RUN | 0.090708 | 0.237736 | 0.319276 | 0.000903 | 0.001094 | 0.001281 |
| is_arithmetic_test.test | RUN | 0.108691 | 0.344815 | 0.557286 | 0.001018 | 0.001217 | 0.001194 |
| is_abstract_test.test | RUN | 0.197093 | 0.891670 | 1.979050 | 0.001273 | 0.001224 | 0.001323 |
| integral_constant_test.test | RUN | 0.012462 | 0.035208 | 0.040762 | 0.000450 | 0.000450 | 0.001134 |
| has_virtual_destructor_test.test | RUN | 0.093470 | 0.266906 | 0.422608 | 0.001106 | 0.001215 | 0.001414 |
| has_unary_plus_test.test | RUN | 0.174183 | 0.947287 | 1.469862 | 0.001165 | 0.001294 | 0.001349 |
| has_unary_minus_test.test | RUN | 0.177869 | 0.932507 | 1.431245 | 0.001313 | 0.001155 | 0.001134 |
| has_trivial_move_constructor_test.test | RUN | 0.120565 | 0.418244 | 0.693789 | 0.001046 | 0.001149 | 0.001382 |
| has_trivial_move_assign_test.test | RUN | 0.120201 | 0.389528 | 0.692633 | 0.001134 | 0.001275 | 0.001484 |
| has_trivial_destructor_test.test | RUN | 0.118857 | 0.411204 | 0.690576 | 0.001201 | 0.001380 | 0.001339 |
| has_trivial_copy_test.test | RUN | 0.119021 | 0.426601 | 0.744208 | 0.001161 | 0.001314 | 0.001573 |
| has_trivial_constr_test.test | RUN | 0.121935 | 0.428530 | 0.744024 | 0.001166 | 0.001257 | 0.001234 |
| has_trivial_assign_test.test | RUN | 0.126672 | 0.407687 | 0.719538 | 0.001141 | 0.001363 | 0.001288 |
| has_right_shift_test.test | RUN | 0.190171 | 0.779124 | 1.600778 | 0.001327 | 0.001046 | 0.001170 |
| has_right_shift_assign_test.test | RUN | 0.182637 | 0.726553 | 1.463072 | 0.001170 | 0.001060 | 0.001169 |
| has_prefix_classes3_test.test | RUN | 0.132308 | 0.450082 | 0.766011 | 0.001155 | 0.001165 | 0.001326 |
| has_prefix_classes2_test.test | RUN | 0.133298 | 0.443465 | 0.747293 | 0.001080 | 0.001168 | 0.001274 |
| has_prefix_classes1_test.test | RUN | 0.130765 | 0.440634 | 0.694333 | 0.001178 | 0.001248 | 0.001290 |
| has_prefix_classes0_test.test | RUN | 0.131148 | 0.440935 | 0.749313 | 0.001135 | 0.001156 | 0.001380 |
| has_pre_increment_test.test | RUN | 0.179199 | 0.984641 | 1.467257 | 0.001164 | 0.000998 | 0.001240 |
| has_pre_decrement_test.test | RUN | 0.177569 | 0.970412 | 1.428371 | 0.001046 | 0.001089 | 0.001104 |
| has_postfix_classes3_test.test | RUN | 0.130839 | 0.435953 | 0.755741 | 0.001293 | 0.001188 | 0.001209 |
| has_postfix_classes2_test.test | RUN | 0.130274 | 0.433288 | 0.721649 | 0.001135 | 0.001151 | 0.001220 |
| has_postfix_classes1_test.test | RUN | 0.133542 | 0.437067 | 0.708109 | 0.001206 | 0.001153 | 0.001210 |
| has_postfix_classes0_test.test | RUN | 0.130930 | 0.437353 | 0.750834 | 0.001086 | 0.001106 | 0.001257 |
| has_post_increment_test.test | RUN | 0.178122 | 0.984915 | 1.437643 | 0.001304 | 0.001228 | 0.001234 |
| has_post_decrement_test.test | RUN | 0.179299 | 0.995917 | 1.463239 | 0.001204 | 0.001117 | 0.001222 |
| has_plus_test.test | RUN | 0.180503 | 0.725857 | 1.416802 | 0.001167 | 0.001145 | 0.001215 |
| has_plus_assign_test.test | RUN | 0.186710 | 0.738277 | 1.456553 | 0.001133 | 0.001072 | 0.001346 |
| has_operator_new_test.test | RUN | 0.122441 | 0.391900 | 0.616231 | 0.001333 | 0.001214 | 0.001322 |
| has_nothrow_destructor_test.test | RUN | 0.127129 | 0.418895 | 0.707154 | 0.001218 | 0.001175 | 0.001190 |
| has_nothrow_copy_test.test | RUN | 0.120108 | 0.398868 | 0.664162 | 0.001138 | 0.001268 | 0.001369 |
| has_nothrow_constr_test.test | RUN | 0.117920 | 0.390472 | 0.636832 | 0.000978 | 0.001207 | 0.001253 |
| has_nothrow_assign_test.test | RUN | 0.118814 | 0.393345 | 0.682507 | 0.001101 | 0.001185 | 0.001186 |
| has_not_equal_to_test.test | RUN | 0.185759 | 0.920881 | 1.491034 | 0.001103 | 0.001229 | 0.001256 |
| has_negate_test.test | RUN | 0.170903 | 0.695855 | 1.375735 | 0.001112 | 0.001038 | 0.001364 |
| has_multiplies_test.test | RUN | 0.178049 | 0.723067 | 1.446249 | 0.001062 | 0.001033 | 0.001238 |
| has_multiplies_assign_test.test | RUN | 0.186203 | 0.722839 | 1.409500 | 0.001247 | 0.001220 | 0.001220 |
| has_modulus_test.test | RUN | 0.184619 | 0.736316 | 1.452993 | 0.001061 | 0.001153 | 0.001376 |
| has_modulus_assign_test.test | RUN | 0.181168 | 0.733158 | 1.457574 | 0.001203 | 0.001300 | 0.001210 |
| has_minus_test.test | RUN | 0.182256 | 0.734586 | 1.463460 | 0.001070 | 0.001047 | 0.001223 |
| has_minus_assign_test.test | RUN | 0.184836 | 0.736676 | 1.456532 | 0.001185 | 0.001183 | 0.001141 |
| has_logical_or_test.test | RUN | 0.183607 | 0.726868 | 1.469007 | 0.001094 | 0.001051 | 0.001442 |
| has_logical_not_test.test | RUN | 0.178207 | 0.719761 | 1.382419 | 0.001094 | 0.001256 | 0.001252 |
| has_logical_and_test.test | RUN | 0.183366 | 0.733687 | 1.448866 | 0.001042 | 0.001107 | 0.001255 |
| has_less_test.test | RUN | 0.184466 | 0.923450 | 1.404732 | 0.001188 | 0.001200 | 0.001144 |
| has_less_equal_test.test | RUN | 0.182977 | 0.921858 | 1.460122 | 0.001180 | 0.001190 | 0.001108 |
| has_left_shift_test.test | RUN | 0.208368 | 0.926361 | 1.793430 | 0.001036 | 0.001250 | 0.001401 |
| has_left_shift_assign_test.test | RUN | 0.177729 | 0.735634 | 1.431244 | 0.001141 | 0.001277 | 0.001441 |
| has_greater_test.test | RUN | 0.182716 | 0.903439 | 1.437248 | 0.001145 | 0.001300 | 0.001148 |
| has_greater_equal_test.test | RUN | 0.182005 | 0.943647 | 1.485864 | 0.001106 | 0.001096 | 0.001230 |
| has_equal_to_test.test | RUN | 0.181132 | 0.929618 | 1.471866 | 0.001103 | 0.001194 | 0.001205 |
| has_divides_test.test | RUN | 0.181521 | 0.718809 | 1.477130 | 0.001116 | 0.001284 | 0.001200 |
| has_divides_assign_test.test | RUN | 0.184276 | 0.722939 | 1.472473 | 0.001215 | 0.001219 | 0.001202 |
| has_dereference_test.test | RUN | 0.179046 | 0.708087 | 1.394550 | 0.001220 | 0.001158 | 0.001313 |
| has_complement_test.test | RUN | 0.180400 | 0.930558 | 1.461592 | 0.001104 | 0.001183 | 0.001376 |
| has_bit_xor_test.test | RUN | 0.182159 | 0.727214 | 1.452459 | 0.001131 | 0.001276 | 0.001200 |
| has_bit_xor_assign_test.test | RUN | 0.184707 | 0.724109 | 1.450766 | 0.001167 | 0.001393 | 0.001161 |
| has_bit_or_test.test | RUN | 0.179133 | 0.734583 | 1.437251 | 0.001052 | 0.001245 | 0.001254 |
| has_bit_or_assign_test.test | RUN | 0.185006 | 0.738763 | 1.454177 | 0.001042 | 0.001199 | 0.001248 |
| has_bit_and_test.test | RUN | 0.180559 | 0.716853 | 1.425435 | 0.001045 | 0.001146 | 0.001206 |
| has_bit_and_assign_test.test | RUN | 0.177754 | 0.723564 | 1.452838 | 0.001266 | 0.001336 | 0.001178 |
| has_binary_classes9_test.test | RUN | 0.198921 | 0.879443 | 1.659317 | 0.001095 | 0.001319 | 0.001214 |
| has_binary_classes8_test.test | RUN | 0.193154 | 0.870274 | 1.647808 | 0.001212 | 0.001179 | 0.001257 |
| has_binary_classes7_test.test | RUN | 0.192337 | 0.881166 | 1.711095 | 0.001016 | 0.001216 | 0.001349 |
| has_binary_classes6_test.test | RUN | 0.195686 | 0.848958 | 1.716878 | 0.001195 | 0.001251 | 0.001123 |
| has_binary_classes5_test.test | RUN | 0.198746 | 0.838105 | 1.682244 | 0.001150 | 0.001434 | 0.001245 |
| has_binary_classes4_test.test | RUN | 0.192446 | 0.861927 | 1.651850 | 0.001158 | 0.001161 | 0.001240 |
| has_binary_classes3_test.test | RUN | 0.193374 | 0.884431 | 1.663316 | 0.001068 | 0.001118 | 0.001435 |
| has_binary_classes2_test.test | RUN | 0.201093 | 0.883451 | 1.666320 | 0.001198 | 0.001296 | 0.001185 |
| has_binary_classes1_test.test | RUN | 0.200580 | 0.852658 | 1.671308 | 0.001137 | 0.001232 | 0.001406 |
| has_binary_classes0_test.test | RUN | 0.202306 | 0.889783 | 1.657035 | 0.001216 | 0.001242 | 0.001304 |
| function_traits_test.test | RUN | 0.088866 | 0.237726 | 0.336892 | 0.001315 | 0.001179 | 0.001286 |
| floating_point_promotion_test.test | RUN | 0.088976 | 0.235531 | 0.319692 | 0.001205 | 0.001331 | 0.001170 |
| extent_test.test | RUN | 0.088106 | 0.230458 | 0.335402 | 0.001175 | 0.001154 | 0.001166 |
| enable_if_test.test | RUN | 0.084205 | 0.200410 | 0.265694 | 0.001067 | 0.001199 | 0.001421 |
| disjunction_test.test | RUN | 0.080506 | 0.203841 | 0.285000 | 0.001179 | 0.001356 | 0.001224 |
| detected_test.test | RUN | 0.082495 | 0.197547 | 0.263529 | 0.001142 | 0.001069 | 0.001190 |
| detected_or_test.test | RUN | 0.085077 | 0.211660 | 0.286499 | 0.001134 | 0.001198 | 0.001270 |
| decay_test.test | RUN | 0.223828 | 0.801008 | 1.606598 | 0.001290 | 0.001351 | 0.001157 |
| cxx14_aliases_test.test | RUN | 0.131785 | 0.296430 | 0.438915 | 0.001171 | 0.001102 | 0.001144 |
| copy_reference_test.test | RUN | 0.083174 | 0.206883 | 0.286156 | 0.001102 | 0.001323 | 0.001236 |
| copy_cv_test.test | RUN | 0.087109 | 0.222222 | 0.306870 | 0.001005 | 0.001208 | 0.001126 |
| copy_cv_ref_test.test | RUN | 0.121217 | 0.361087 | 0.693736 | 0.001020 | 0.001070 | 0.001197 |
| conjunction_test.test | RUN | 0.083121 | 0.211984 | 0.284020 | 0.001075 | 0.001360 | 0.001318 |
| conditional_test.test | RUN | 0.082869 | 0.205368 | 0.270851 | 0.001064 | 0.001102 | 0.001207 |
| common_type_test.test | RUN | 0.118731 | 0.314991 | 0.535576 | 0.001127 | 0.001161 | 0.001301 |
| common_type_sfinae_test.test | RUN | 0.080586 | 0.200381 | 0.265476 | 0.001348 | 0.001272 | 0.001169 |
| common_type_sfinae2_test.test | RUN | 0.085356 | 0.207247 | 0.283159 | 0.001164 | 0.001053 | 0.001311 |
| common_type_6_test.test | RUN | 0.088103 | 0.213078 | 0.285811 | 0.001114 | 0.001062 | 0.000886 |
| common_type_5_test.test | RUN | 0.090194 | 0.210870 | 0.285611 | 0.001127 | 0.001399 | 0.001140 |
| common_type_4_test.test | RUN | 0.094256 | 0.229659 | 0.322522 | 0.001254 | 0.001084 | 0.001114 |
| common_type_3_test.test | RUN | 0.085154 | 0.197520 | 0.253674 | 0.001203 | 0.001244 | 0.001232 |
| common_type_2_test.test | RUN | 0.113172 | 0.312986 | 0.516619 | 0.001177 | 0.001305 | 0.001050 |
| alignment_of_test.test | RUN | 0.091741 | 0.248937 | 0.348677 | 0.001160 | 0.001254 | 0.001119 |
| alignment_of_a2_test.test | RUN | 0.093711 | 0.254604 | 0.347821 | 0.001214 | 0.001252 | 0.001050 |
| aligned_storage_test.test | RUN | 0.093719 | 0.249318 | 0.319579 | 0.000918 | 0.001265 | 0.001281 |
| aligned_storage_empy_test.test | RUN | 0.107363 | 0.274809 | 0.426340 | 0.001197 | 0.001231 | 0.001360 |
| aligned_storage_a2_test.test | RUN | 0.093948 | 0.245851 | 0.312897 | 0.001179 | 0.001343 | 0.001247 |
| add_volatile_test.test | RUN | 0.198440 | 0.710623 | 1.478110 | 0.001155 | 0.001095 | 0.001194 |
| add_rvalue_reference_test.test | RUN | 0.220845 | 0.789678 | 1.691640 | 0.001194 | 0.001148 | 0.001268 |
| add_reference_test.test | RUN | 0.216053 | 0.773840 | 1.672620 | 0.000873 | 0.001267 | 0.001299 |
| add_pointer_test.test | RUN | 0.139935 | 0.443344 | 0.887905 | 0.001309 | 0.001292 | 0.001372 |
| add_lvalue_reference_test.test | RUN | 0.217461 | 0.768724 | 1.675471 | 0.001278 | 0.001252 | 0.001242 |
| add_cv_test.test | RUN | 0.203732 | 0.735346 | 1.546246 | 0.001094 | 0.001200 | 0.001207 |
| add_const_test.test | RUN | 0.206083 | 0.732869 | 1.576596 | 0.001068 | 0.001109 | 0.001424 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.078204 | 0.189581 | 0.254986 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.083351 | 0.194186 | 0.259208 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.077397 | 0.184997 | 0.249880 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.076603 | 0.189228 | 0.240291 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.078021 | 0.186751 | 0.245594 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.079353 | 0.182598 | 0.240414 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.080671 | 0.190030 | 0.247357 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.079372 | 0.184626 | 0.254994 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.077715 | 0.182806 | 0.244010 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.080627 | 0.190780 | 0.254785 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.079093 | 0.186087 | 0.245417 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.081437 | 0.190269 | 0.243921 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.079045 | 0.185630 | 0.248414 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.080556 | 0.189602 | 0.253000 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.077620 | 0.191537 | 0.243845 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.077775 | 0.183309 | 0.251555 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.079725 | 0.186216 | 0.241088 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.080016 | 0.191028 | 0.253934 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.078047 | 0.185198 | 0.248292 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.079003 | 0.187203 | 0.247185 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.077768 | 0.188144 | 0.249608 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.079001 | 0.187179 | 0.249976 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.120345 | 0.406195 | 0.690462 | 0.001211 | 0.001241 | 0.001271 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.114803 | 0.402676 | 0.665244 | 0.001246 | 0.001061 | 0.001308 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.119228 | 0.412336 | 0.691922 | 0.001163 | 0.000892 | 0.000887 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.123447 | 0.401029 | 0.676665 | 0.000810 | 0.000812 | 0.000930 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.077468 | 0.304443 | 0.419408 | 0.000918 | 0.000860 | 0.000905 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.996× | 1.001×, 0.990× | 1.004× |
| clang | 1.030× | 1.033×, 1.028× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44818861403).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.000786s | 0.000777s | 0.000782s | byte equality observed |
| add_cv_test.test | 10 | 0.000808s | 0.000782s | 0.000782s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.000805s | 0.000792s | 0.000754s | byte equality observed |
| add_pointer_test.test | 10 | 0.000798s | 0.000776s | 0.000788s | byte equality observed |
| add_reference_test.test | 10 | 0.000778s | 0.000771s | 0.000799s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.000812s | 0.000774s | 0.000784s | byte equality observed |
| add_volatile_test.test | 10 | 0.000787s | 0.000757s | 0.000776s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.000823s | 0.000841s | 0.000809s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.000790s | 0.000782s | 0.000794s | byte equality observed |
| aligned_storage_test.test | 10 | 0.000823s | 0.000825s | 0.000814s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.000783s | 0.000772s | 0.000788s | byte equality observed |
| alignment_of_test.test | 10 | 0.000795s | 0.000755s | 0.000778s | byte equality observed |
| common_type_2_test.test | 10 | 0.000806s | 0.000777s | 0.000804s | byte equality observed |
| common_type_3_test.test | 10 | 0.000774s | 0.000793s | 0.000790s | byte equality observed |
| common_type_4_test.test | 10 | 0.000783s | 0.000765s | 0.000802s | byte equality observed |
| common_type_5_test.test | 10 | 0.000763s | 0.000799s | 0.000793s | byte equality observed |
| common_type_6_test.test | 10 | 0.000791s | 0.000772s | 0.000802s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.000762s | 0.000789s | 0.000793s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.000762s | 0.000803s | 0.000781s | byte equality observed |
| common_type_test.test | 10 | 0.000776s | 0.000754s | 0.000797s | byte equality observed |
| conditional_test.test | 10 | 0.000771s | 0.000772s | 0.000778s | byte equality observed |
| conjunction_test.test | 10 | 0.000803s | 0.000770s | 0.000814s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.000806s | 0.000739s | 0.000821s | byte equality observed |
| copy_cv_test.test | 10 | 0.000780s | 0.000763s | 0.000778s | byte equality observed |
| copy_reference_test.test | 10 | 0.000780s | 0.000757s | 0.000780s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.000788s | 0.000777s | 0.000803s | byte equality observed |
| decay_test.test | 10 | 0.000800s | 0.000769s | 0.000804s | byte equality observed |
| detected_or_test.test | 10 | 0.000793s | 0.000776s | 0.000802s | byte equality observed |
| detected_test.test | 10 | 0.000776s | 0.000769s | 0.000799s | byte equality observed |
| disjunction_test.test | 10 | 0.000805s | 0.000762s | 0.000802s | byte equality observed |
| enable_if_test.test | 10 | 0.000799s | 0.000756s | 0.000798s | byte equality observed |
| extent_test.test | 10 | 0.000792s | 0.000768s | 0.000808s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.000785s | 0.000795s | 0.000804s | byte equality observed |
| function_traits_test.test | 10 | 0.000763s | 0.000778s | 0.000817s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000763s | 0.000776s | 0.000796s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.000787s | 0.000783s | 0.000797s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.000780s | 0.000752s | 0.000817s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.000786s | 0.000774s | 0.000783s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.000791s | 0.000794s | 0.000774s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.000791s | 0.000795s | 0.000766s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.000786s | 0.000811s | 0.000781s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.000808s | 0.000774s | 0.000766s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.000798s | 0.000775s | 0.000777s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.000779s | 0.000790s | 0.000784s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.000758s | 0.000780s | 0.000789s | byte equality observed |
| has_bit_and_test.test | 10 | 0.000756s | 0.000806s | 0.000759s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.000786s | 0.000781s | 0.000762s | byte equality observed |
| has_bit_or_test.test | 10 | 0.000786s | 0.000813s | 0.000778s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.000769s | 0.000797s | 0.000781s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.000804s | 0.000785s | 0.000773s | byte equality observed |
| has_complement_test.test | 10 | 0.000777s | 0.000779s | 0.000791s | byte equality observed |
| has_dereference_test.test | 10 | 0.000780s | 0.000772s | 0.000789s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.000762s | 0.000769s | 0.000788s | byte equality observed |
| has_divides_test.test | 10 | 0.000770s | 0.000772s | 0.000792s | byte equality observed |
| has_equal_to_test.test | 10 | 0.000776s | 0.000797s | 0.000771s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.000794s | 0.000771s | 0.000785s | byte equality observed |
| has_greater_test.test | 10 | 0.000807s | 0.000762s | 0.000752s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.000775s | 0.000746s | 0.000780s | byte equality observed |
| has_left_shift_test.test | 10 | 0.000796s | 0.000767s | 0.000792s | byte equality observed |
| has_less_equal_test.test | 10 | 0.000780s | 0.000785s | 0.000758s | byte equality observed |
| has_less_test.test | 10 | 0.000785s | 0.000780s | 0.000780s | byte equality observed |
| has_logical_and_test.test | 10 | 0.000783s | 0.000808s | 0.000761s | byte equality observed |
| has_logical_not_test.test | 10 | 0.000768s | 0.000800s | 0.000761s | byte equality observed |
| has_logical_or_test.test | 10 | 0.000783s | 0.000759s | 0.000785s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.000755s | 0.000793s | 0.000778s | byte equality observed |
| has_minus_test.test | 10 | 0.000777s | 0.000778s | 0.000788s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.000774s | 0.000774s | 0.000791s | byte equality observed |
| has_modulus_test.test | 10 | 0.000782s | 0.000788s | 0.000769s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.000791s | 0.000798s | 0.000780s | byte equality observed |
| has_multiplies_test.test | 10 | 0.000780s | 0.000786s | 0.000768s | byte equality observed |
| has_negate_test.test | 10 | 0.000776s | 0.000803s | 0.000791s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.000776s | 0.000816s | 0.000782s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.000765s | 0.000802s | 0.000757s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.000783s | 0.000784s | 0.000784s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.000792s | 0.000772s | 0.000780s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.000784s | 0.000776s | 0.000795s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.000782s | 0.000797s | 0.000790s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.000788s | 0.000775s | 0.000808s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.000778s | 0.000771s | 0.000806s | byte equality observed |
| has_operator_new_test.test | 10 | 0.000804s | 0.000784s | 0.000800s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.000804s | 0.000779s | 0.000793s | byte equality observed |
| has_plus_test.test | 10 | 0.000791s | 0.000775s | 0.000768s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.000793s | 0.000787s | 0.000777s | byte equality observed |
| has_post_increment_test.test | 10 | 0.000783s | 0.000778s | 0.000780s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.000799s | 0.000776s | 0.000796s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.000811s | 0.000772s | 0.000790s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.000807s | 0.000782s | 0.000789s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.000781s | 0.000787s | 0.000797s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.000775s | 0.000802s | 0.000784s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.000793s | 0.000801s | 0.000800s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.000776s | 0.000801s | 0.000784s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.000789s | 0.000797s | 0.000821s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.000792s | 0.000802s | 0.000814s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.000785s | 0.000784s | 0.000797s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.000778s | 0.000776s | 0.000772s | byte equality observed |
| has_right_shift_test.test | 10 | 0.000789s | 0.000790s | 0.000800s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.000790s | 0.000832s | 0.000797s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.000809s | 0.000813s | 0.000834s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.000801s | 0.000800s | 0.000835s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.000770s | 0.000790s | 0.000783s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.000768s | 0.000785s | 0.000781s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.000774s | 0.000782s | 0.000785s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.000767s | 0.000806s | 0.000796s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.000804s | 0.000786s | 0.000792s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.000790s | 0.000781s | 0.000797s | byte equality observed |
| integral_constant_test.test | 10 | 0.000360s | 0.000362s | 0.000796s | byte equality observed |
| is_abstract_test.test | 10 | 0.000761s | 0.000774s | 0.000787s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.000790s | 0.000787s | 0.000769s | byte equality observed |
| is_array_test.test | 10 | 0.000770s | 0.000771s | 0.000779s | byte equality observed |
| is_assignable_test.test | 10 | 0.000790s | 0.000786s | 0.000769s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.000771s | 0.000791s | 0.000783s | byte equality observed |
| is_base_of_test.test | 10 | 0.000770s | 0.000780s | 0.000787s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.000783s | 0.000790s | 0.000774s | byte equality observed |
| is_class_test.test | 10 | 0.000775s | 0.000745s | 0.000760s | byte equality observed |
| is_complete_test.test | 10 | 0.000808s | 0.000774s | 0.000790s | byte equality observed |
| is_complex_test.test | 10 | 0.000769s | 0.000784s | 0.000804s | byte equality observed |
| is_compound_test.test | 10 | 0.000788s | 0.000812s | 0.000790s | byte equality observed |
| is_const_test.test | 10 | 0.000784s | 0.000795s | 0.000792s | byte equality observed |
| is_constructible_test.test | 10 | 0.000799s | 0.000788s | 0.000776s | byte equality observed |
| is_convertible_test.test | 10 | 0.000770s | 0.000774s | 0.000794s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.000777s | 0.000759s | 0.000783s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.000791s | 0.000763s | 0.000778s | byte equality observed |
| is_default_constr_test.test | 10 | 0.000787s | 0.000767s | 0.000786s | byte equality observed |
| is_destructible_test.test | 10 | 0.000789s | 0.000789s | 0.000778s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.000777s | 0.000780s | 0.000769s | byte equality observed |
| is_detected_test.test | 10 | 0.000761s | 0.000769s | 0.000771s | byte equality observed |
| is_empty_test.test | 10 | 0.000763s | 0.000769s | 0.000760s | byte equality observed |
| is_enum_test.test | 10 | 0.000766s | 0.000752s | 0.000785s | byte equality observed |
| is_final_test.test | 10 | 0.000779s | 0.000748s | 0.000800s | byte equality observed |
| is_float_test.test | 10 | 0.000766s | 0.000802s | 0.000799s | byte equality observed |
| is_floating_point_test.test | 10 | 0.000758s | 0.000771s | 0.000779s | byte equality observed |
| is_function_test.test | 10 | 0.000771s | 0.000778s | 0.000805s | byte equality observed |
| is_fundamental_test.test | 10 | 0.000761s | 0.000783s | 0.000772s | byte equality observed |
| is_integral_test.test | 10 | 0.000772s | 0.000792s | 0.000787s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.000785s | 0.000790s | 0.000796s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.000792s | 0.000795s | 0.000820s | byte equality observed |
| is_member_func_test.test | 10 | 0.000772s | 0.000771s | 0.000801s | byte equality observed |
| is_member_obj_test.test | 10 | 0.000773s | 0.000759s | 0.000778s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.000783s | 0.000765s | 0.000806s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.000777s | 0.000787s | 0.000806s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.000784s | 0.000761s | 0.000776s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.000759s | 0.000757s | 0.000798s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.000777s | 0.000758s | 0.000776s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.000782s | 0.000761s | 0.000750s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.000765s | 0.000789s | 0.000762s | byte equality observed |
| is_object_test.test | 10 | 0.000783s | 0.000781s | 0.000806s | byte equality observed |
| is_pod_test.test | 10 | 0.000786s | 0.000793s | 0.000801s | byte equality observed |
| is_pointer_test.test | 10 | 0.000781s | 0.000790s | 0.000791s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.000774s | 0.000770s | 0.000801s | byte equality observed |
| is_reference_test.test | 10 | 0.000778s | 0.000757s | 0.000764s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.000785s | 0.000757s | 0.000775s | byte equality observed |
| is_same_test.test | 10 | 0.000782s | 0.000765s | 0.000791s | byte equality observed |
| is_scalar_test.test | 10 | 0.000781s | 0.000773s | 0.000804s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.000777s | 0.000772s | 0.000816s | byte equality observed |
| is_signed_test.test | 10 | 0.000802s | 0.000778s | 0.000820s | byte equality observed |
| is_stateless_test.test | 10 | 0.000770s | 0.000784s | 0.000788s | byte equality observed |
| is_swappable_test.test | 10 | 0.000770s | 0.000783s | 0.000770s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.000800s | 0.000811s | 0.000791s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.000808s | 0.000777s | 0.000818s | byte equality observed |
| is_union_test.test | 10 | 0.000785s | 0.000784s | 0.000772s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.000770s | 0.000801s | 0.000740s | byte equality observed |
| is_unsigned_test.test | 10 | 0.000760s | 0.000776s | 0.000775s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.000785s | 0.000801s | 0.000790s | byte equality observed |
| is_void_test.test | 10 | 0.000768s | 0.000778s | 0.000796s | byte equality observed |
| is_volatile_test.test | 10 | 0.000787s | 0.000780s | 0.000779s | byte equality observed |
| make_signed_test.test | 10 | 0.000787s | 0.000763s | 0.000776s | byte equality observed |
| make_unsigned_test.test | 10 | 0.000793s | 0.000786s | 0.000787s | byte equality observed |
| make_void_test.test | 10 | 0.000793s | 0.000788s | 0.000782s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000365s | 0.000360s | 0.000795s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000358s | 0.000355s | 0.000799s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000357s | 0.000362s | 0.000795s | byte equality observed |
| negation_test.test | 10 | 0.000789s | 0.000779s | 0.000786s | byte equality observed |
| promote_basic_test.test | 10 | 0.000354s | 0.000359s | 0.000759s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000364s | 0.000368s | 0.000775s | byte equality observed |
| promote_enum_test.test | 10 | 0.000358s | 0.000364s | 0.000781s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000347s | 0.000366s | 0.000789s | byte equality observed |
| rank_test.test | 10 | 0.000785s | 0.000761s | 0.000798s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.000798s | 0.000824s | 0.000795s | byte equality observed |
| remove_bounds_test.test | 10 | 0.000796s | 0.000789s | 0.000795s | byte equality observed |
| remove_const_test.test | 10 | 0.000788s | 0.000773s | 0.000781s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.000786s | 0.000770s | 0.000779s | byte equality observed |
| remove_cv_test.test | 10 | 0.000795s | 0.000760s | 0.000762s | byte equality observed |
| remove_extent_test.test | 10 | 0.000790s | 0.000764s | 0.000782s | byte equality observed |
| remove_pointer_test.test | 10 | 0.000804s | 0.000766s | 0.000806s | byte equality observed |
| remove_reference_test.test | 10 | 0.000782s | 0.000764s | 0.000788s | byte equality observed |
| remove_volatile_test.test | 10 | 0.000791s | 0.000777s | 0.000789s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.000795s | 0.000800s | 0.000775s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.000782s | 0.000789s | 0.000776s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.000773s | 0.000763s | 0.000790s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.000801s | 0.000768s | 0.000806s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.000774s | 0.000772s | 0.000785s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.000776s | 0.000806s | 0.000779s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.000786s | 0.000770s | 0.000780s | byte equality observed |
| type_identity_test.test | 10 | 0.000791s | 0.000769s | 0.000739s | byte equality observed |
| type_traits_test.test | 10 | 0.000360s | 0.000356s | 0.000773s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.000817s | 0.000838s | 0.000804s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44818861403).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
