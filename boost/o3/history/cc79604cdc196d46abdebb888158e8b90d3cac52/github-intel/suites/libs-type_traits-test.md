# libs/type_traits/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| type_with_alignment_test.test | RUN | 0.090443 | 0.271465 | 0.382367 | 0.001188 | 0.001230 | 0.001187 |
| type_traits_test.test | RUN | 0.122560 | 0.278282 | 0.362843 | 0.000408 | 0.000472 | 0.001129 |
| type_identity_test.test | RUN | 0.241210 | 0.929951 | 1.975414 | 0.001017 | 0.001287 | 0.001117 |
| tricky_rvalue_test.test | RUN | 0.083609 | 0.218086 | 0.294638 | 0.001182 | 0.001238 | 0.001180 |
| tricky_partial_spec_test.test | RUN | 0.098619 | 0.309454 | 0.460474 | 0.001025 | 0.001174 | 0.001052 |
| tricky_is_enum_test.test | RUN | 0.078263 | 0.195336 | 0.267660 | 0.001079 | 0.001234 | 0.001121 |
| tricky_incomplete_type_test.test | RUN | 0.131052 | 0.312848 | 0.451056 | 0.001042 | 0.001256 | 0.001200 |
| tricky_function_type_test.test | RUN | 0.104646 | 0.329574 | 0.513968 | 0.000804 | 0.001224 | 0.001097 |
| tricky_add_pointer_test.test | RUN | 0.153816 | 0.556202 | 1.118500 | 0.001074 | 0.001271 | 0.001162 |
| tricky_abstract_type_test.test | RUN | 0.081637 | 0.208391 | 0.280804 | 0.001069 | 0.001054 | 0.001302 |
| remove_volatile_test.test | RUN | 0.214076 | 0.801779 | 1.759579 | 0.001024 | 0.001264 | 0.001007 |
| remove_reference_test.test | RUN | 0.226640 | 0.848027 | 1.857840 | 0.001048 | 0.001307 | 0.001149 |
| remove_pointer_test.test | RUN | 0.231968 | 0.872807 | 1.988809 | 0.001176 | 0.001092 | 0.001102 |
| remove_extent_test.test | RUN | 0.222654 | 0.855158 | 1.898110 | 0.001152 | 0.001257 | 0.001062 |
| remove_cv_test.test | RUN | 0.226169 | 0.856925 | 1.848264 | 0.001092 | 0.001172 | 0.001176 |
| remove_cv_ref_test.test | RUN | 0.472922 | 2.083846 | 4.569911 | 0.001026 | 0.001063 | 0.000969 |
| remove_const_test.test | RUN | 0.215076 | 0.805551 | 1.745904 | 0.001118 | 0.001278 | 0.001114 |
| remove_bounds_test.test | RUN | 0.225009 | 0.857715 | 1.839402 | 0.001266 | 0.001161 | 0.001158 |
| remove_all_extents_test.test | RUN | 0.223550 | 0.842929 | 1.868873 | 0.001011 | 0.001221 | 0.001042 |
| rank_test.test | RUN | 0.081023 | 0.219929 | 0.281325 | 0.001031 | 0.001234 | 0.001258 |
| promote_mpl_test.test | RUN | 0.073092 | 0.193590 | 0.211097 | 0.000448 | 0.000470 | 0.001015 |
| promote_enum_test.test | RUN | 0.015500 | 0.045239 | 0.050544 | 0.000471 | 0.000435 | 0.001005 |
| promote_enum_msvc_bug_test.test | RUN | 0.013714 | 0.035647 | 0.042588 | 0.000477 | 0.000413 | 0.001126 |
| promote_basic_test.test | RUN | 0.015268 | 0.052221 | 0.051028 | 0.000420 | 0.000455 | 0.001088 |
| negation_test.test | RUN | 0.074946 | 0.192525 | 0.255641 | 0.001016 | 0.001201 | 0.001078 |
| mpl_interop_test3.test | RUN | 0.069595 | 0.184796 | 0.200239 | 0.000394 | 0.000483 | 0.001242 |
| mpl_interop_test2.test | RUN | 0.023133 | 0.053875 | 0.052066 | 0.000450 | 0.000463 | 0.001121 |
| mpl_interop_test1.test | RUN | 0.012632 | 0.035741 | 0.036757 | 0.000482 | 0.000503 | 0.000952 |
| make_void_test.test | RUN | 0.075606 | 0.215504 | 0.292675 | 0.001138 | 0.001331 | 0.001187 |
| make_unsigned_test.test | RUN | 0.096733 | 0.288106 | 0.394289 | 0.001114 | 0.001046 | 0.001111 |
| make_signed_test.test | RUN | 0.094249 | 0.283091 | 0.414588 | 0.001011 | 0.001232 | 0.001243 |
| is_volatile_test.test | RUN | 0.084551 | 0.238235 | 0.333094 | 0.001007 | 0.001151 | 0.001146 |
| is_void_test.test | RUN | 0.078549 | 0.220695 | 0.309372 | 0.001170 | 0.001263 | 0.001166 |
| is_virtual_base_of_test.test | RUN | 0.093705 | 0.280291 | 0.439583 | 0.001140 | 0.001398 | 0.001138 |
| is_unsigned_test.test | RUN | 0.081065 | 0.228510 | 0.330769 | 0.001007 | 0.001145 | 0.001116 |
| is_unscoped_enum_test.test | RUN | 0.083569 | 0.208806 | 0.270763 | 0.001024 | 0.001021 | 0.001165 |
| is_union_test.test | RUN | 0.088413 | 0.258856 | 0.393702 | 0.001073 | 0.001163 | 0.001154 |
| is_unbounded_array_test.test | RUN | 0.082216 | 0.222266 | 0.303751 | 0.000953 | 0.001134 | 0.001093 |
| is_trivially_copyable_test.test | RUN | 0.132110 | 0.463717 | 0.781062 | 0.001074 | 0.001111 | 0.001030 |
| is_swappable_test.test | RUN | 0.107441 | 0.350508 | 0.569994 | 0.000940 | 0.001180 | 0.001178 |
| is_stateless_test.test | RUN | 0.117612 | 0.400427 | 0.664885 | 0.001080 | 0.001117 | 0.001255 |
| is_signed_test.test | RUN | 0.082481 | 0.235194 | 0.318934 | 0.000979 | 0.001448 | 0.001221 |
| is_scoped_enum_test.test | RUN | 0.077219 | 0.208162 | 0.281418 | 0.001015 | 0.001295 | 0.001154 |
| is_scalar_test.test | RUN | 0.106371 | 0.366031 | 0.585188 | 0.001003 | 0.001078 | 0.001263 |
| is_same_test.test | RUN | 0.075653 | 0.222617 | 0.310119 | 0.001056 | 0.001153 | 0.001201 |
| is_rvalue_reference_test.test | RUN | 0.083881 | 0.248743 | 0.361825 | 0.000980 | 0.001142 | 0.001111 |
| is_reference_test.test | RUN | 0.082974 | 0.250032 | 0.361145 | 0.000755 | 0.001215 | 0.001149 |
| is_polymorphic_test.test | RUN | 0.085767 | 0.256877 | 0.361757 | 0.001002 | 0.001206 | 0.001082 |
| is_pointer_test.test | RUN | 0.085590 | 0.252924 | 0.376287 | 0.001018 | 0.001179 | 0.001132 |
| is_pod_test.test | RUN | 0.109633 | 0.406695 | 0.668118 | 0.000996 | 0.001223 | 0.001360 |
| is_object_test.test | RUN | 0.074458 | 0.210014 | 0.284370 | 0.001049 | 0.001178 | 0.001151 |
| is_nothrow_swappable_test.test | RUN | 0.115924 | 0.378868 | 0.640692 | 0.001000 | 0.001341 | 0.001111 |
| is_nothrow_move_constructible_test.test | RUN | 0.111925 | 0.395247 | 0.644018 | 0.000940 | 0.001243 | 0.001166 |
| is_nothrow_move_assignable_test.test | RUN | 0.113631 | 0.396753 | 0.639033 | 0.000944 | 0.001127 | 0.001213 |
| is_noncopyable_test.test | RUN | 0.079312 | 0.214845 | 0.291920 | 0.001054 | 0.001137 | 0.001044 |
| is_member_pointer_test.test | RUN | 0.080824 | 0.219049 | 0.294440 | 0.001011 | 0.001351 | 0.001047 |
| is_member_obj_test.test | RUN | 0.079513 | 0.226160 | 0.310966 | 0.001032 | 0.001091 | 0.001101 |
| is_member_func_test.test | RUN | 0.082565 | 0.243043 | 0.333193 | 0.000889 | 0.001113 | 0.001156 |
| is_lvalue_reference_test.test | RUN | 0.084645 | 0.248729 | 0.353434 | 0.000772 | 0.001231 | 0.001138 |
| is_list_constructible_test.test | RUN | 0.100709 | 0.288330 | 0.392529 | 0.000969 | 0.001296 | 0.001190 |
| is_integral_test.test | RUN | 0.101134 | 0.344334 | 0.550695 | 0.001111 | 0.001264 | 0.001136 |
| is_fundamental_test.test | RUN | 0.102359 | 0.356040 | 0.577843 | 0.001119 | 0.001155 | 0.001225 |
| is_function_test.test | RUN | 0.082540 | 0.228610 | 0.332066 | 0.000954 | 0.000979 | 0.001115 |
| is_floating_point_test.test | RUN | 0.091194 | 0.248179 | 0.375056 | 0.001001 | 0.001297 | 0.001214 |
| is_float_test.test | RUN | 0.088565 | 0.247321 | 0.369187 | 0.001116 | 0.001146 | 0.001059 |
| is_final_test.test | RUN | 0.086418 | 0.250787 | 0.379034 | 0.001154 | 0.001012 | 0.001219 |
| is_enum_test.test | RUN | 0.079414 | 0.215258 | 0.282492 | 0.001033 | 0.001061 | 0.001165 |
| is_empty_test.test | RUN | 0.095622 | 0.235592 | 0.333191 | 0.000975 | 0.001219 | 0.001169 |
| is_detected_test.test | RUN | 0.077954 | 0.205783 | 0.272265 | 0.001045 | 0.001103 | 0.001136 |
| is_detected_exact_test.test | RUN | 0.075985 | 0.201418 | 0.274797 | 0.001034 | 0.001259 | 0.001191 |
| is_destructible_test.test | RUN | 0.113318 | 0.394396 | 0.641664 | 0.001015 | 0.001288 | 0.001123 |
| is_default_constr_test.test | RUN | 0.119183 | 0.405287 | 0.638456 | 0.001055 | 0.001196 | 0.001411 |
| is_copy_constructible_test.test | RUN | 0.117434 | 0.422173 | 0.701784 | 0.001098 | 0.001166 | 0.001109 |
| is_copy_assignable_test.test | RUN | 0.117487 | 0.421411 | 0.702512 | 0.001059 | 0.001073 | 0.001134 |
| is_convertible_test.test | RUN | 0.113213 | 0.365979 | 0.558363 | 0.000960 | 0.001210 | 0.001113 |
| is_constructible_test.test | RUN | 0.095056 | 0.276708 | 0.393530 | 0.000973 | 0.001289 | 0.001052 |
| is_const_test.test | RUN | 0.085751 | 0.235583 | 0.332096 | 0.001040 | 0.001022 | 0.001153 |
| is_compound_test.test | RUN | 0.077618 | 0.203510 | 0.269779 | 0.001234 | 0.000876 | 0.001076 |
| is_complex_test.test | RUN | 0.101778 | 0.265920 | 0.371920 | 0.001024 | 0.001235 | 0.001081 |
| is_complete_test.test | RUN | 0.092846 | 0.274218 | 0.425237 | 0.001003 | 0.001224 | 0.001202 |
| is_class_test.test | RUN | 0.086241 | 0.245214 | 0.352644 | 0.001114 | 0.001144 | 0.001096 |
| is_bounded_array_test.test | RUN | 0.085962 | 0.222281 | 0.303894 | 0.001046 | 0.001226 | 0.001114 |
| is_base_of_test.test | RUN | 0.085885 | 0.245329 | 0.337598 | 0.001069 | 0.001307 | 0.001266 |
| is_base_and_derived_test.test | RUN | 0.086509 | 0.240266 | 0.350594 | 0.001003 | 0.001312 | 0.001062 |
| is_assignable_test.test | RUN | 0.102105 | 0.337500 | 0.553353 | 0.000980 | 0.001088 | 0.001164 |
| is_array_test.test | RUN | 0.084659 | 0.234126 | 0.322257 | 0.001070 | 0.001248 | 0.001133 |
| is_arithmetic_test.test | RUN | 0.101696 | 0.339081 | 0.551051 | 0.001014 | 0.001302 | 0.001092 |
| is_abstract_test.test | RUN | 0.189891 | 0.919344 | 1.997130 | 0.001206 | 0.001194 | 0.001112 |
| integral_constant_test.test | RUN | 0.012214 | 0.037277 | 0.039584 | 0.000513 | 0.000486 | 0.001126 |
| has_virtual_destructor_test.test | RUN | 0.092874 | 0.275819 | 0.412252 | 0.001041 | 0.001260 | 0.001166 |
| has_unary_plus_test.test | RUN | 0.172874 | 0.980415 | 1.471797 | 0.001063 | 0.001320 | 0.001190 |
| has_unary_minus_test.test | RUN | 0.176384 | 0.963514 | 1.447056 | 0.001078 | 0.001236 | 0.000989 |
| has_trivial_move_constructor_test.test | RUN | 0.117224 | 0.404391 | 0.675962 | 0.001021 | 0.001039 | 0.001257 |
| has_trivial_move_assign_test.test | RUN | 0.119130 | 0.402351 | 0.684933 | 0.001005 | 0.001302 | 0.001220 |
| has_trivial_destructor_test.test | RUN | 0.118131 | 0.412466 | 0.676962 | 0.001082 | 0.001090 | 0.001168 |
| has_trivial_copy_test.test | RUN | 0.122020 | 0.437614 | 0.721352 | 0.001120 | 0.001348 | 0.001182 |
| has_trivial_constr_test.test | RUN | 0.122640 | 0.437146 | 0.720642 | 0.001056 | 0.001328 | 0.001125 |
| has_trivial_assign_test.test | RUN | 0.116283 | 0.427180 | 0.706403 | 0.001065 | 0.001248 | 0.001169 |
| has_right_shift_test.test | RUN | 0.184080 | 0.775147 | 1.552012 | 0.001111 | 0.001404 | 0.001076 |
| has_right_shift_assign_test.test | RUN | 0.175552 | 0.739709 | 1.440882 | 0.001016 | 0.001123 | 0.001096 |
| has_prefix_classes3_test.test | RUN | 0.123279 | 0.438699 | 0.735273 | 0.001082 | 0.001166 | 0.001245 |
| has_prefix_classes2_test.test | RUN | 0.128062 | 0.444623 | 0.719046 | 0.000998 | 0.001188 | 0.001200 |
| has_prefix_classes1_test.test | RUN | 0.130241 | 0.437289 | 0.691642 | 0.001048 | 0.001345 | 0.001159 |
| has_prefix_classes0_test.test | RUN | 0.122748 | 0.444855 | 0.740621 | 0.001053 | 0.001173 | 0.001180 |
| has_pre_increment_test.test | RUN | 0.176094 | 0.986644 | 1.444687 | 0.000975 | 0.001068 | 0.001099 |
| has_pre_decrement_test.test | RUN | 0.169917 | 0.974555 | 1.434945 | 0.001039 | 0.001178 | 0.001061 |
| has_postfix_classes3_test.test | RUN | 0.122536 | 0.444313 | 0.748471 | 0.001010 | 0.001374 | 0.001123 |
| has_postfix_classes2_test.test | RUN | 0.126832 | 0.433630 | 0.705878 | 0.001007 | 0.001108 | 0.001109 |
| has_postfix_classes1_test.test | RUN | 0.125842 | 0.449341 | 0.698642 | 0.000902 | 0.001302 | 0.001072 |
| has_postfix_classes0_test.test | RUN | 0.123465 | 0.447146 | 0.738230 | 0.000949 | 0.001101 | 0.001169 |
| has_post_increment_test.test | RUN | 0.167811 | 0.954805 | 1.445371 | 0.001066 | 0.001188 | 0.001235 |
| has_post_decrement_test.test | RUN | 0.175390 | 0.941756 | 1.450526 | 0.000892 | 0.001215 | 0.001216 |
| has_plus_test.test | RUN | 0.170782 | 0.722814 | 1.427318 | 0.001043 | 0.001338 | 0.001152 |
| has_plus_assign_test.test | RUN | 0.177631 | 0.724906 | 1.443607 | 0.001041 | 0.001141 | 0.001022 |
| has_operator_new_test.test | RUN | 0.114525 | 0.386147 | 0.633551 | 0.001026 | 0.001177 | 0.000966 |
| has_nothrow_destructor_test.test | RUN | 0.120485 | 0.422050 | 0.705434 | 0.001026 | 0.001192 | 0.001172 |
| has_nothrow_copy_test.test | RUN | 0.116736 | 0.403373 | 0.665636 | 0.001018 | 0.001398 | 0.001157 |
| has_nothrow_constr_test.test | RUN | 0.112063 | 0.398679 | 0.676325 | 0.001046 | 0.001209 | 0.001150 |
| has_nothrow_assign_test.test | RUN | 0.113310 | 0.398868 | 0.672378 | 0.001051 | 0.001252 | 0.001174 |
| has_not_equal_to_test.test | RUN | 0.180658 | 0.952342 | 1.456272 | 0.001060 | 0.001337 | 0.001113 |
| has_negate_test.test | RUN | 0.175361 | 0.708080 | 1.417199 | 0.001072 | 0.001126 | 0.001239 |
| has_multiplies_test.test | RUN | 0.181278 | 0.743393 | 1.456269 | 0.000949 | 0.001175 | 0.001125 |
| has_multiplies_assign_test.test | RUN | 0.178315 | 0.717009 | 1.440160 | 0.001080 | 0.001284 | 0.001175 |
| has_modulus_test.test | RUN | 0.175873 | 0.745275 | 1.434848 | 0.001091 | 0.001310 | 0.001106 |
| has_modulus_assign_test.test | RUN | 0.176137 | 0.736394 | 1.470632 | 0.001041 | 0.001236 | 0.001195 |
| has_minus_test.test | RUN | 0.181691 | 0.749007 | 1.462671 | 0.001031 | 0.001053 | 0.001191 |
| has_minus_assign_test.test | RUN | 0.181784 | 0.735726 | 1.450126 | 0.001006 | 0.001203 | 0.001039 |
| has_logical_or_test.test | RUN | 0.175672 | 0.740806 | 1.464598 | 0.001152 | 0.001197 | 0.001222 |
| has_logical_not_test.test | RUN | 0.172764 | 0.724301 | 1.397143 | 0.001016 | 0.001212 | 0.001138 |
| has_logical_and_test.test | RUN | 0.176099 | 0.733353 | 1.498923 | 0.001067 | 0.001002 | 0.001094 |
| has_less_test.test | RUN | 0.178151 | 0.933505 | 1.497945 | 0.001002 | 0.001252 | 0.001026 |
| has_less_equal_test.test | RUN | 0.176582 | 0.935597 | 1.469629 | 0.001102 | 0.001251 | 0.001140 |
| has_left_shift_test.test | RUN | 0.196300 | 0.935205 | 1.793918 | 0.000989 | 0.001289 | 0.001182 |
| has_left_shift_assign_test.test | RUN | 0.177378 | 0.723701 | 1.496418 | 0.000957 | 0.001317 | 0.001207 |
| has_greater_test.test | RUN | 0.177382 | 0.931180 | 1.505889 | 0.001042 | 0.001304 | 0.001259 |
| has_greater_equal_test.test | RUN | 0.181815 | 0.952106 | 1.442742 | 0.001162 | 0.001209 | 0.001138 |
| has_equal_to_test.test | RUN | 0.179814 | 0.958022 | 1.423207 | 0.001312 | 0.001268 | 0.001132 |
| has_divides_test.test | RUN | 0.180149 | 0.729451 | 1.487855 | 0.001007 | 0.001184 | 0.001000 |
| has_divides_assign_test.test | RUN | 0.180905 | 0.727728 | 1.491522 | 0.001071 | 0.001184 | 0.000996 |
| has_dereference_test.test | RUN | 0.174973 | 0.714409 | 1.376583 | 0.001110 | 0.001254 | 0.001272 |
| has_complement_test.test | RUN | 0.172929 | 0.946483 | 1.407694 | 0.001146 | 0.001092 | 0.001107 |
| has_bit_xor_test.test | RUN | 0.176279 | 0.731144 | 1.490115 | 0.001011 | 0.001201 | 0.001190 |
| has_bit_xor_assign_test.test | RUN | 0.179471 | 0.727494 | 1.491734 | 0.001059 | 0.001290 | 0.001019 |
| has_bit_or_test.test | RUN | 0.174464 | 0.731811 | 1.427853 | 0.001057 | 0.001238 | 0.001244 |
| has_bit_or_assign_test.test | RUN | 0.179140 | 0.736227 | 1.400546 | 0.001048 | 0.001323 | 0.001209 |
| has_bit_and_test.test | RUN | 0.178535 | 0.738401 | 1.495447 | 0.001014 | 0.001176 | 0.001248 |
| has_bit_and_assign_test.test | RUN | 0.176490 | 0.733580 | 1.494921 | 0.001074 | 0.001222 | 0.001207 |
| has_binary_classes9_test.test | RUN | 0.193951 | 0.881345 | 1.631073 | 0.001075 | 0.001286 | 0.001114 |
| has_binary_classes8_test.test | RUN | 0.191818 | 0.872577 | 1.619086 | 0.001242 | 0.001305 | 0.001125 |
| has_binary_classes7_test.test | RUN | 0.193857 | 0.864683 | 1.709321 | 0.001054 | 0.001188 | 0.001137 |
| has_binary_classes6_test.test | RUN | 0.194932 | 0.842464 | 1.716275 | 0.000994 | 0.001308 | 0.001047 |
| has_binary_classes5_test.test | RUN | 0.190223 | 0.860796 | 1.645892 | 0.001404 | 0.001200 | 0.001236 |
| has_binary_classes4_test.test | RUN | 0.194230 | 0.880992 | 1.617879 | 0.001067 | 0.001277 | 0.001180 |
| has_binary_classes3_test.test | RUN | 0.197557 | 0.868008 | 1.703209 | 0.000971 | 0.001176 | 0.000887 |
| has_binary_classes2_test.test | RUN | 0.201578 | 0.894378 | 1.698093 | 0.001075 | 0.001286 | 0.001006 |
| has_binary_classes1_test.test | RUN | 0.197382 | 0.873742 | 1.657579 | 0.001081 | 0.001306 | 0.001078 |
| has_binary_classes0_test.test | RUN | 0.193420 | 0.889514 | 1.615648 | 0.001056 | 0.001234 | 0.000963 |
| function_traits_test.test | RUN | 0.084986 | 0.234794 | 0.349880 | 0.000991 | 0.001238 | 0.000984 |
| floating_point_promotion_test.test | RUN | 0.084720 | 0.232839 | 0.327908 | 0.000710 | 0.001208 | 0.001099 |
| extent_test.test | RUN | 0.084105 | 0.234098 | 0.330339 | 0.001030 | 0.001104 | 0.001064 |
| enable_if_test.test | RUN | 0.075186 | 0.198599 | 0.271091 | 0.000975 | 0.001060 | 0.001073 |
| disjunction_test.test | RUN | 0.078168 | 0.205222 | 0.284196 | 0.001060 | 0.001183 | 0.001118 |
| detected_test.test | RUN | 0.077978 | 0.197586 | 0.263797 | 0.000968 | 0.001103 | 0.001155 |
| detected_or_test.test | RUN | 0.077736 | 0.207603 | 0.280951 | 0.001050 | 0.001212 | 0.001120 |
| decay_test.test | RUN | 0.213613 | 0.784834 | 1.558419 | 0.001025 | 0.001107 | 0.001182 |
| cxx14_aliases_test.test | RUN | 0.129436 | 0.300868 | 0.425092 | 0.001013 | 0.001209 | 0.001142 |
| copy_reference_test.test | RUN | 0.078075 | 0.202349 | 0.272096 | 0.001054 | 0.001277 | 0.001216 |
| copy_cv_test.test | RUN | 0.085596 | 0.217665 | 0.307577 | 0.001094 | 0.001135 | 0.001207 |
| copy_cv_ref_test.test | RUN | 0.116457 | 0.356630 | 0.647853 | 0.000913 | 0.001202 | 0.001068 |
| conjunction_test.test | RUN | 0.078016 | 0.204603 | 0.289585 | 0.001039 | 0.001195 | 0.001208 |
| conditional_test.test | RUN | 0.077822 | 0.205141 | 0.272225 | 0.001069 | 0.000871 | 0.001084 |
| common_type_test.test | RUN | 0.104591 | 0.313649 | 0.523492 | 0.001047 | 0.001163 | 0.001031 |
| common_type_sfinae_test.test | RUN | 0.076794 | 0.198966 | 0.264477 | 0.001029 | 0.001325 | 0.001120 |
| common_type_sfinae2_test.test | RUN | 0.079442 | 0.203810 | 0.271985 | 0.001050 | 0.001099 | 0.001039 |
| common_type_6_test.test | RUN | 0.080905 | 0.210405 | 0.282476 | 0.001000 | 0.001120 | 0.001133 |
| common_type_5_test.test | RUN | 0.083155 | 0.212139 | 0.283461 | 0.001060 | 0.001106 | 0.001259 |
| common_type_4_test.test | RUN | 0.086929 | 0.227948 | 0.329650 | 0.001075 | 0.001096 | 0.001077 |
| common_type_3_test.test | RUN | 0.077411 | 0.195645 | 0.255069 | 0.001007 | 0.000983 | 0.001117 |
| common_type_2_test.test | RUN | 0.109912 | 0.309273 | 0.516979 | 0.001057 | 0.001264 | 0.001046 |
| alignment_of_test.test | RUN | 0.087840 | 0.244995 | 0.346961 | 0.001074 | 0.001182 | 0.001094 |
| alignment_of_a2_test.test | RUN | 0.084821 | 0.247091 | 0.338519 | 0.001053 | 0.001144 | 0.001222 |
| aligned_storage_test.test | RUN | 0.091937 | 0.244983 | 0.318802 | 0.001129 | 0.001129 | 0.001160 |
| aligned_storage_empy_test.test | RUN | 0.105022 | 0.272234 | 0.426161 | 0.001056 | 0.001313 | 0.001158 |
| aligned_storage_a2_test.test | RUN | 0.091170 | 0.241405 | 0.315233 | 0.001240 | 0.001280 | 0.001293 |
| add_volatile_test.test | RUN | 0.200404 | 0.702258 | 1.476983 | 0.001146 | 0.001310 | 0.001155 |
| add_rvalue_reference_test.test | RUN | 0.226807 | 0.800952 | 1.676878 | 0.001029 | 0.001208 | 0.001185 |
| add_reference_test.test | RUN | 0.217329 | 0.774692 | 1.677749 | 0.001065 | 0.001230 | 0.001167 |
| add_pointer_test.test | RUN | 0.136277 | 0.449550 | 0.887207 | 0.001085 | 0.001183 | 0.001118 |
| add_lvalue_reference_test.test | RUN | 0.211417 | 0.769933 | 1.675205 | 0.001080 | 0.001150 | 0.001113 |
| add_cv_test.test | RUN | 0.196066 | 0.716153 | 1.522650 | 0.001067 | 0.001290 | 0.001048 |
| add_const_test.test | RUN | 0.197664 | 0.724115 | 1.568963 | 0.001036 | 0.001140 | 0.001128 |
| is_virtual_base_of_fail.test | COMPILE_FAIL | 0.076729 | 0.194850 | 0.252864 | — | — | — |
| is_stateless_fail.test | COMPILE_FAIL | 0.079718 | 0.196054 | 0.260936 | — | — | — |
| is_polymorphic_fail.test | COMPILE_FAIL | 0.072654 | 0.187565 | 0.243975 | — | — | — |
| is_nothrow_move_constructible_fail.test | COMPILE_FAIL | 0.072160 | 0.184538 | 0.239872 | — | — | — |
| is_nothrow_move_assignable_fail.test | COMPILE_FAIL | 0.074589 | 0.190227 | 0.246225 | — | — | — |
| is_list_constructible_fail.test | COMPILE_FAIL | 0.076500 | 0.190241 | 0.243060 | — | — | — |
| is_empty_fail.test | COMPILE_FAIL | 0.073779 | 0.191947 | 0.245545 | — | — | — |
| is_destructible_fail.test | COMPILE_FAIL | 0.072737 | 0.183735 | 0.250937 | — | — | — |
| is_default_constructible_fail.test | COMPILE_FAIL | 0.072665 | 0.184278 | 0.248317 | — | — | — |
| is_copy_constructible_fail.test | COMPILE_FAIL | 0.074219 | 0.189339 | 0.246235 | — | — | — |
| is_copy_assignable_fail.test | COMPILE_FAIL | 0.071153 | 0.186070 | 0.244223 | — | — | — |
| is_convertible_fail.test | COMPILE_FAIL | 0.073170 | 0.183511 | 0.253331 | — | — | — |
| is_convertible2_fail.test | COMPILE_FAIL | 0.077580 | 0.185189 | 0.249425 | — | — | — |
| is_constructible_fail.test | COMPILE_FAIL | 0.071664 | 0.187506 | 0.244556 | — | — | — |
| is_base_of_fail.test | COMPILE_FAIL | 0.072937 | 0.185986 | 0.242565 | — | — | — |
| is_assignable_fail.test | COMPILE_FAIL | 0.073319 | 0.184801 | 0.248338 | — | — | — |
| has_nothrow_destruct_fail.test | COMPILE_FAIL | 0.074068 | 0.184955 | 0.249068 | — | — | — |
| has_nothrow_copy_fail.test | COMPILE_FAIL | 0.074569 | 0.184498 | 0.249108 | — | — | — |
| has_nothrow_cons_fail.test | COMPILE_FAIL | 0.072377 | 0.189104 | 0.245338 | — | — | — |
| has_nothrow_assign_fail.test | COMPILE_FAIL | 0.074506 | 0.183836 | 0.252878 | — | — | — |
| common_type_fail.test | COMPILE_FAIL | 0.072468 | 0.187868 | 0.251315 | — | — | — |
| common_type2_fail.test | COMPILE_FAIL | 0.072202 | 0.183223 | 0.248558 | — | — | — |
| has_nothrow_assign_test_no_intrinsics.test | RUN | 0.114073 | 0.405135 | 0.679140 | 0.001162 | 0.001466 | 0.001253 |
| has_nothrow_constr_test_no_intrinsics.test | RUN | 0.111413 | 0.397441 | 0.670038 | 0.001265 | 0.001231 | 0.000914 |
| has_nothrow_copy_test_no_intrinsics.test | RUN | 0.114054 | 0.408955 | 0.674016 | 0.001246 | 0.001298 | 0.001127 |
| is_nothrow_move_assignable_test_no_intrinsics.test | RUN | 0.115624 | 0.399602 | 0.644731 | 0.000818 | 0.000848 | 0.000781 |
| is_nothrow_move_constructible_test_no_intrinsics.test | RUN | 0.077368 | 0.280767 | 0.401832 | 0.000793 | 0.000851 | 0.000833 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998× | 0.997×, 0.999× | 1.000× |
| clang | 1.025× | 1.031×, 1.020× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45241427099).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| add_const_test.test | 10 | 0.000787s | 0.000784s | 0.000789s | byte equality observed |
| add_cv_test.test | 10 | 0.000798s | 0.000771s | 0.000783s | byte equality observed |
| add_lvalue_reference_test.test | 10 | 0.000779s | 0.000758s | 0.000791s | byte equality observed |
| add_pointer_test.test | 10 | 0.000787s | 0.000790s | 0.000753s | byte equality observed |
| add_reference_test.test | 10 | 0.000791s | 0.000788s | 0.000773s | byte equality observed |
| add_rvalue_reference_test.test | 10 | 0.000807s | 0.000755s | 0.000805s | byte equality observed |
| add_volatile_test.test | 10 | 0.000814s | 0.000782s | 0.000814s | byte equality observed |
| aligned_storage_a2_test.test | 10 | 0.000839s | 0.000840s | 0.000840s | byte equality observed |
| aligned_storage_empy_test.test | 10 | 0.000799s | 0.000776s | 0.000798s | byte equality observed |
| aligned_storage_test.test | 10 | 0.000835s | 0.000855s | 0.000838s | byte equality observed |
| alignment_of_a2_test.test | 10 | 0.000810s | 0.000784s | 0.000794s | byte equality observed |
| alignment_of_test.test | 10 | 0.000792s | 0.000798s | 0.000809s | byte equality observed |
| common_type_2_test.test | 10 | 0.000761s | 0.000799s | 0.000797s | byte equality observed |
| common_type_3_test.test | 10 | 0.000780s | 0.000783s | 0.000779s | byte equality observed |
| common_type_4_test.test | 10 | 0.000774s | 0.000771s | 0.000812s | byte equality observed |
| common_type_5_test.test | 10 | 0.000797s | 0.000778s | 0.000776s | byte equality observed |
| common_type_6_test.test | 10 | 0.000783s | 0.000770s | 0.000790s | byte equality observed |
| common_type_sfinae2_test.test | 10 | 0.000796s | 0.000777s | 0.000785s | byte equality observed |
| common_type_sfinae_test.test | 10 | 0.000806s | 0.000785s | 0.000797s | byte equality observed |
| common_type_test.test | 10 | 0.000800s | 0.000779s | 0.000804s | byte equality observed |
| conditional_test.test | 10 | 0.000788s | 0.000780s | 0.000779s | byte equality observed |
| conjunction_test.test | 10 | 0.000803s | 0.000785s | 0.000809s | byte equality observed |
| copy_cv_ref_test.test | 10 | 0.000815s | 0.000752s | 0.000806s | byte equality observed |
| copy_cv_test.test | 10 | 0.000805s | 0.000778s | 0.000774s | byte equality observed |
| copy_reference_test.test | 10 | 0.000800s | 0.000790s | 0.000795s | byte equality observed |
| cxx14_aliases_test.test | 10 | 0.000809s | 0.000796s | 0.000811s | byte equality observed |
| decay_test.test | 10 | 0.000818s | 0.000826s | 0.000789s | byte equality observed |
| detected_or_test.test | 10 | 0.000801s | 0.000786s | 0.000782s | byte equality observed |
| detected_test.test | 10 | 0.000797s | 0.000784s | 0.000784s | byte equality observed |
| disjunction_test.test | 10 | 0.000787s | 0.000792s | 0.000821s | byte equality observed |
| enable_if_test.test | 10 | 0.000787s | 0.000800s | 0.000806s | byte equality observed |
| extent_test.test | 10 | 0.000786s | 0.000772s | 0.000793s | byte equality observed |
| floating_point_promotion_test.test | 10 | 0.000773s | 0.000764s | 0.000799s | byte equality observed |
| function_traits_test.test | 10 | 0.000782s | 0.000788s | 0.000773s | byte equality observed |
| has_binary_classes0_test.test | 10 | 0.000793s | 0.000809s | 0.000775s | byte equality observed |
| has_binary_classes1_test.test | 10 | 0.000784s | 0.000794s | 0.000805s | byte equality observed |
| has_binary_classes2_test.test | 10 | 0.000772s | 0.000796s | 0.000802s | byte equality observed |
| has_binary_classes3_test.test | 10 | 0.000785s | 0.000786s | 0.000792s | byte equality observed |
| has_binary_classes4_test.test | 10 | 0.000771s | 0.000792s | 0.000784s | byte equality observed |
| has_binary_classes5_test.test | 10 | 0.000794s | 0.000762s | 0.000779s | byte equality observed |
| has_binary_classes6_test.test | 10 | 0.000788s | 0.000772s | 0.000801s | byte equality observed |
| has_binary_classes7_test.test | 10 | 0.000777s | 0.000815s | 0.000799s | byte equality observed |
| has_binary_classes8_test.test | 10 | 0.000794s | 0.000799s | 0.000784s | byte equality observed |
| has_binary_classes9_test.test | 10 | 0.000798s | 0.000803s | 0.000792s | byte equality observed |
| has_bit_and_assign_test.test | 10 | 0.000795s | 0.000806s | 0.000787s | byte equality observed |
| has_bit_and_test.test | 10 | 0.000778s | 0.000788s | 0.000773s | byte equality observed |
| has_bit_or_assign_test.test | 10 | 0.000810s | 0.000797s | 0.000794s | byte equality observed |
| has_bit_or_test.test | 10 | 0.000765s | 0.000799s | 0.000772s | byte equality observed |
| has_bit_xor_assign_test.test | 10 | 0.000773s | 0.000793s | 0.000793s | byte equality observed |
| has_bit_xor_test.test | 10 | 0.000798s | 0.000805s | 0.000770s | byte equality observed |
| has_complement_test.test | 10 | 0.000773s | 0.000785s | 0.000782s | byte equality observed |
| has_dereference_test.test | 10 | 0.000777s | 0.000786s | 0.000767s | byte equality observed |
| has_divides_assign_test.test | 10 | 0.000778s | 0.000801s | 0.000805s | byte equality observed |
| has_divides_test.test | 10 | 0.000789s | 0.000790s | 0.000780s | byte equality observed |
| has_equal_to_test.test | 10 | 0.000790s | 0.000790s | 0.000783s | byte equality observed |
| has_greater_equal_test.test | 10 | 0.000790s | 0.000785s | 0.000763s | byte equality observed |
| has_greater_test.test | 10 | 0.000780s | 0.000773s | 0.000771s | byte equality observed |
| has_left_shift_assign_test.test | 10 | 0.000797s | 0.000775s | 0.000757s | byte equality observed |
| has_left_shift_test.test | 10 | 0.000795s | 0.000785s | 0.000787s | byte equality observed |
| has_less_equal_test.test | 10 | 0.000787s | 0.000783s | 0.000793s | byte equality observed |
| has_less_test.test | 10 | 0.000799s | 0.000782s | 0.000793s | byte equality observed |
| has_logical_and_test.test | 10 | 0.000802s | 0.000773s | 0.000804s | byte equality observed |
| has_logical_not_test.test | 10 | 0.000802s | 0.000783s | 0.000803s | byte equality observed |
| has_logical_or_test.test | 10 | 0.000783s | 0.000778s | 0.000797s | byte equality observed |
| has_minus_assign_test.test | 10 | 0.000768s | 0.000750s | 0.000776s | byte equality observed |
| has_minus_test.test | 10 | 0.000796s | 0.000783s | 0.000806s | byte equality observed |
| has_modulus_assign_test.test | 10 | 0.000786s | 0.000758s | 0.000816s | byte equality observed |
| has_modulus_test.test | 10 | 0.000794s | 0.000775s | 0.000790s | byte equality observed |
| has_multiplies_assign_test.test | 10 | 0.000797s | 0.000792s | 0.000775s | byte equality observed |
| has_multiplies_test.test | 10 | 0.000789s | 0.000813s | 0.000765s | byte equality observed |
| has_negate_test.test | 10 | 0.000800s | 0.000818s | 0.000777s | byte equality observed |
| has_not_equal_to_test.test | 10 | 0.000792s | 0.000775s | 0.000776s | byte equality observed |
| has_nothrow_assign_test.test | 10 | 0.000773s | 0.000781s | 0.000770s | byte equality observed |
| has_nothrow_assign_test_no_intrinsics.test | 10 | 0.000772s | 0.000790s | 0.000772s | byte equality observed |
| has_nothrow_constr_test.test | 10 | 0.000798s | 0.000787s | 0.000771s | byte equality observed |
| has_nothrow_constr_test_no_intrinsics.test | 10 | 0.000758s | 0.000803s | 0.000783s | byte equality observed |
| has_nothrow_copy_test.test | 10 | 0.000775s | 0.000779s | 0.000774s | byte equality observed |
| has_nothrow_copy_test_no_intrinsics.test | 10 | 0.000782s | 0.000778s | 0.000818s | byte equality observed |
| has_nothrow_destructor_test.test | 10 | 0.000790s | 0.000781s | 0.000817s | byte equality observed |
| has_operator_new_test.test | 10 | 0.000783s | 0.000795s | 0.000818s | byte equality observed |
| has_plus_assign_test.test | 10 | 0.000794s | 0.000777s | 0.000829s | byte equality observed |
| has_plus_test.test | 10 | 0.000792s | 0.000777s | 0.000822s | byte equality observed |
| has_post_decrement_test.test | 10 | 0.000808s | 0.000765s | 0.000791s | byte equality observed |
| has_post_increment_test.test | 10 | 0.000788s | 0.000759s | 0.000780s | byte equality observed |
| has_postfix_classes0_test.test | 10 | 0.000796s | 0.000771s | 0.000785s | byte equality observed |
| has_postfix_classes1_test.test | 10 | 0.000808s | 0.000767s | 0.000782s | byte equality observed |
| has_postfix_classes2_test.test | 10 | 0.000803s | 0.000765s | 0.000793s | byte equality observed |
| has_postfix_classes3_test.test | 10 | 0.000798s | 0.000779s | 0.000791s | byte equality observed |
| has_pre_decrement_test.test | 10 | 0.000795s | 0.000780s | 0.000790s | byte equality observed |
| has_pre_increment_test.test | 10 | 0.000791s | 0.000802s | 0.000803s | byte equality observed |
| has_prefix_classes0_test.test | 10 | 0.000792s | 0.000797s | 0.000807s | byte equality observed |
| has_prefix_classes1_test.test | 10 | 0.000802s | 0.000806s | 0.000796s | byte equality observed |
| has_prefix_classes2_test.test | 10 | 0.000804s | 0.000788s | 0.000788s | byte equality observed |
| has_prefix_classes3_test.test | 10 | 0.000787s | 0.000784s | 0.000788s | byte equality observed |
| has_right_shift_assign_test.test | 10 | 0.000805s | 0.000795s | 0.000772s | byte equality observed |
| has_right_shift_test.test | 10 | 0.000797s | 0.000809s | 0.000775s | byte equality observed |
| has_trivial_assign_test.test | 10 | 0.000811s | 0.000828s | 0.000802s | byte equality observed |
| has_trivial_constr_test.test | 10 | 0.000831s | 0.000835s | 0.000855s | native test oracle; output varies |
| has_trivial_copy_test.test | 10 | 0.000819s | 0.000820s | 0.000824s | native test oracle; output varies |
| has_trivial_destructor_test.test | 10 | 0.000797s | 0.000815s | 0.000816s | byte equality observed |
| has_trivial_move_assign_test.test | 10 | 0.000784s | 0.000784s | 0.000776s | byte equality observed |
| has_trivial_move_constructor_test.test | 10 | 0.000786s | 0.000768s | 0.000787s | byte equality observed |
| has_unary_minus_test.test | 10 | 0.000794s | 0.000786s | 0.000791s | byte equality observed |
| has_unary_plus_test.test | 10 | 0.000797s | 0.000797s | 0.000818s | byte equality observed |
| has_virtual_destructor_test.test | 10 | 0.000773s | 0.000801s | 0.000801s | byte equality observed |
| integral_constant_test.test | 10 | 0.000365s | 0.000360s | 0.000792s | byte equality observed |
| is_abstract_test.test | 10 | 0.000768s | 0.000785s | 0.000782s | byte equality observed |
| is_arithmetic_test.test | 10 | 0.000790s | 0.000799s | 0.000771s | byte equality observed |
| is_array_test.test | 10 | 0.000789s | 0.000802s | 0.000782s | byte equality observed |
| is_assignable_test.test | 10 | 0.000804s | 0.000772s | 0.000797s | byte equality observed |
| is_base_and_derived_test.test | 10 | 0.000776s | 0.000803s | 0.000792s | byte equality observed |
| is_base_of_test.test | 10 | 0.000770s | 0.000777s | 0.000800s | byte equality observed |
| is_bounded_array_test.test | 10 | 0.000784s | 0.000788s | 0.000776s | byte equality observed |
| is_class_test.test | 10 | 0.000793s | 0.000793s | 0.000807s | byte equality observed |
| is_complete_test.test | 10 | 0.000795s | 0.000794s | 0.000814s | byte equality observed |
| is_complex_test.test | 10 | 0.000802s | 0.000791s | 0.000791s | byte equality observed |
| is_compound_test.test | 10 | 0.000791s | 0.000769s | 0.000799s | byte equality observed |
| is_const_test.test | 10 | 0.000762s | 0.000791s | 0.000804s | byte equality observed |
| is_constructible_test.test | 10 | 0.000791s | 0.000788s | 0.000788s | byte equality observed |
| is_convertible_test.test | 10 | 0.000780s | 0.000767s | 0.000773s | byte equality observed |
| is_copy_assignable_test.test | 10 | 0.000782s | 0.000776s | 0.000772s | byte equality observed |
| is_copy_constructible_test.test | 10 | 0.000778s | 0.000773s | 0.000801s | byte equality observed |
| is_default_constr_test.test | 10 | 0.000790s | 0.000782s | 0.000800s | byte equality observed |
| is_destructible_test.test | 10 | 0.000795s | 0.000774s | 0.000796s | byte equality observed |
| is_detected_exact_test.test | 10 | 0.000779s | 0.000818s | 0.000804s | byte equality observed |
| is_detected_test.test | 10 | 0.000779s | 0.000830s | 0.000789s | byte equality observed |
| is_empty_test.test | 10 | 0.000771s | 0.000804s | 0.000798s | byte equality observed |
| is_enum_test.test | 10 | 0.000787s | 0.000797s | 0.000780s | byte equality observed |
| is_final_test.test | 10 | 0.000788s | 0.000782s | 0.000779s | byte equality observed |
| is_float_test.test | 10 | 0.000796s | 0.000807s | 0.000784s | byte equality observed |
| is_floating_point_test.test | 10 | 0.000779s | 0.000791s | 0.000782s | byte equality observed |
| is_function_test.test | 10 | 0.000800s | 0.000782s | 0.000801s | byte equality observed |
| is_fundamental_test.test | 10 | 0.000787s | 0.000804s | 0.000797s | byte equality observed |
| is_integral_test.test | 10 | 0.000796s | 0.000792s | 0.000807s | byte equality observed |
| is_list_constructible_test.test | 10 | 0.000766s | 0.000799s | 0.000789s | byte equality observed |
| is_lvalue_reference_test.test | 10 | 0.000794s | 0.000806s | 0.000780s | byte equality observed |
| is_member_func_test.test | 10 | 0.000786s | 0.000810s | 0.000793s | byte equality observed |
| is_member_obj_test.test | 10 | 0.000778s | 0.000793s | 0.000809s | byte equality observed |
| is_member_pointer_test.test | 10 | 0.000788s | 0.000783s | 0.000810s | byte equality observed |
| is_noncopyable_test.test | 10 | 0.000802s | 0.000779s | 0.000794s | byte equality observed |
| is_nothrow_move_assignable_test.test | 10 | 0.000784s | 0.000805s | 0.000810s | byte equality observed |
| is_nothrow_move_assignable_test_no_intrinsics.test | 10 | 0.000780s | 0.000760s | 0.000806s | byte equality observed |
| is_nothrow_move_constructible_test.test | 10 | 0.000766s | 0.000768s | 0.000799s | byte equality observed |
| is_nothrow_move_constructible_test_no_intrinsics.test | 10 | 0.000776s | 0.000790s | 0.000784s | byte equality observed |
| is_nothrow_swappable_test.test | 10 | 0.000791s | 0.000777s | 0.000800s | byte equality observed |
| is_object_test.test | 10 | 0.000782s | 0.000776s | 0.000756s | byte equality observed |
| is_pod_test.test | 10 | 0.000797s | 0.000778s | 0.000773s | byte equality observed |
| is_pointer_test.test | 10 | 0.000803s | 0.000798s | 0.000795s | byte equality observed |
| is_polymorphic_test.test | 10 | 0.000783s | 0.000754s | 0.000776s | byte equality observed |
| is_reference_test.test | 10 | 0.000822s | 0.000762s | 0.000780s | byte equality observed |
| is_rvalue_reference_test.test | 10 | 0.000790s | 0.000762s | 0.000759s | byte equality observed |
| is_same_test.test | 10 | 0.000786s | 0.000759s | 0.000799s | byte equality observed |
| is_scalar_test.test | 10 | 0.000784s | 0.000784s | 0.000804s | byte equality observed |
| is_scoped_enum_test.test | 10 | 0.000769s | 0.000798s | 0.000809s | byte equality observed |
| is_signed_test.test | 10 | 0.000768s | 0.000772s | 0.000804s | byte equality observed |
| is_stateless_test.test | 10 | 0.000778s | 0.000787s | 0.000804s | byte equality observed |
| is_swappable_test.test | 10 | 0.000786s | 0.000797s | 0.000815s | byte equality observed |
| is_trivially_copyable_test.test | 10 | 0.000782s | 0.000804s | 0.000805s | byte equality observed |
| is_unbounded_array_test.test | 10 | 0.000781s | 0.000780s | 0.000809s | byte equality observed |
| is_union_test.test | 10 | 0.000801s | 0.000776s | 0.000790s | byte equality observed |
| is_unscoped_enum_test.test | 10 | 0.000788s | 0.000772s | 0.000787s | byte equality observed |
| is_unsigned_test.test | 10 | 0.000779s | 0.000772s | 0.000785s | byte equality observed |
| is_virtual_base_of_test.test | 10 | 0.000774s | 0.000792s | 0.000785s | byte equality observed |
| is_void_test.test | 10 | 0.000783s | 0.000777s | 0.000804s | byte equality observed |
| is_volatile_test.test | 10 | 0.000783s | 0.000787s | 0.000814s | byte equality observed |
| make_signed_test.test | 10 | 0.000787s | 0.000777s | 0.000804s | byte equality observed |
| make_unsigned_test.test | 10 | 0.000784s | 0.000760s | 0.000812s | byte equality observed |
| make_void_test.test | 10 | 0.000783s | 0.000772s | 0.000762s | byte equality observed |
| mpl_interop_test1.test | 10 | 0.000359s | 0.000353s | 0.000794s | byte equality observed |
| mpl_interop_test2.test | 10 | 0.000365s | 0.000363s | 0.000789s | byte equality observed |
| mpl_interop_test3.test | 10 | 0.000360s | 0.000350s | 0.000787s | byte equality observed |
| negation_test.test | 10 | 0.000797s | 0.000780s | 0.000761s | byte equality observed |
| promote_basic_test.test | 10 | 0.000364s | 0.000361s | 0.000791s | byte equality observed |
| promote_enum_msvc_bug_test.test | 10 | 0.000363s | 0.000364s | 0.000790s | byte equality observed |
| promote_enum_test.test | 10 | 0.000361s | 0.000363s | 0.000768s | byte equality observed |
| promote_mpl_test.test | 10 | 0.000360s | 0.000358s | 0.000791s | byte equality observed |
| rank_test.test | 10 | 0.000782s | 0.000789s | 0.000811s | byte equality observed |
| remove_all_extents_test.test | 10 | 0.000794s | 0.000784s | 0.000828s | byte equality observed |
| remove_bounds_test.test | 10 | 0.000772s | 0.000780s | 0.000811s | byte equality observed |
| remove_const_test.test | 10 | 0.000777s | 0.000775s | 0.000793s | byte equality observed |
| remove_cv_ref_test.test | 10 | 0.000807s | 0.000775s | 0.000779s | byte equality observed |
| remove_cv_test.test | 10 | 0.000781s | 0.000774s | 0.000782s | byte equality observed |
| remove_extent_test.test | 10 | 0.000804s | 0.000780s | 0.000774s | byte equality observed |
| remove_pointer_test.test | 10 | 0.000819s | 0.000784s | 0.000785s | byte equality observed |
| remove_reference_test.test | 10 | 0.000810s | 0.000795s | 0.000801s | byte equality observed |
| remove_volatile_test.test | 10 | 0.000801s | 0.000790s | 0.000779s | byte equality observed |
| tricky_abstract_type_test.test | 10 | 0.000807s | 0.000794s | 0.000788s | byte equality observed |
| tricky_add_pointer_test.test | 10 | 0.000779s | 0.000774s | 0.000790s | byte equality observed |
| tricky_function_type_test.test | 10 | 0.000780s | 0.000785s | 0.000802s | byte equality observed |
| tricky_incomplete_type_test.test | 10 | 0.000773s | 0.000793s | 0.000777s | byte equality observed |
| tricky_is_enum_test.test | 10 | 0.000765s | 0.000802s | 0.000797s | byte equality observed |
| tricky_partial_spec_test.test | 10 | 0.000785s | 0.000767s | 0.000803s | byte equality observed |
| tricky_rvalue_test.test | 10 | 0.000772s | 0.000783s | 0.000823s | byte equality observed |
| type_identity_test.test | 10 | 0.000808s | 0.000800s | 0.000814s | byte equality observed |
| type_traits_test.test | 10 | 0.000361s | 0.000364s | 0.000801s | byte equality observed |
| type_with_alignment_test.test | 10 | 0.000841s | 0.000832s | 0.000843s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45241427099).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
