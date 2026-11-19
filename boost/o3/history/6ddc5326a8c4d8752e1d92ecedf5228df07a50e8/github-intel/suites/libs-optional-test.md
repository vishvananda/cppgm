# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.291456 | 1.794077 | 1.026803 | 0.001743 | 0.001797 | 0.001773 |
| optional_test_assign.test | RUN | 0.145151 | 0.371969 | 0.465456 | 0.001472 | 0.001584 | 0.001178 |
| optional_test_swap.test | RUN | 0.164262 | 0.465470 | 0.500775 | 0.001510 | 0.001604 | 0.001430 |
| optional_test_constexpr.test | COMPILE | 0.104081 | 0.248710 | 0.288820 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.158036 | 0.609288 | 0.491771 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.111210 | 0.243124 | 0.277023 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.169849 | 0.481235 | 0.544851 | 0.001524 | 0.001759 | 0.001668 |
| optional_test_constructors.test | RUN | 0.342740 | 1.798427 | 1.473215 | 0.001602 | 0.001633 | 0.001683 |
| optional_test_convert_from_T.test | RUN | 0.149249 | 0.391592 | 0.473246 | 0.001697 | 0.001630 | 0.001735 |
| optional_test_convert_assign.test | RUN | 0.147616 | 0.386664 | 0.469402 | 0.001508 | 0.001518 | 0.001680 |
| optional_test_empty_braces.test | RUN | 0.145770 | 0.368159 | 0.440052 | 0.001656 | 0.001734 | 0.001629 |
| optional_test_make_optional.test | RUN | 0.204492 | 0.582263 | 0.732330 | 0.001617 | 0.001590 | 0.001640 |
| optional_test_flat_map.test | RUN | 0.222821 | 0.691181 | 0.812867 | 0.001434 | 0.001539 | 0.001771 |
| optional_test_hash.test | RUN | 0.178278 | 0.559377 | 0.603700 | 0.001333 | 0.001816 | 0.001527 |
| optional_test_map.test | RUN | 0.231899 | 0.666620 | 0.859383 | 0.001486 | 0.001620 | 0.001405 |
| optional_test_tie.test | RUN | 0.157991 | 0.427738 | 0.493086 | 0.001664 | 0.001530 | 0.001659 |
| optional_test_ranges_find.test | RUN | 0.146931 | 0.376023 | 0.439755 | 0.001534 | 0.001629 | 0.001668 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.185769 | 1.102068 | 0.664086 | 0.001534 | 0.001613 | 0.001664 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.151669 | 0.457902 | 0.497377 | 0.001843 | 0.001517 | 0.001663 |
| optional_test_ref_assign_const_int.test | RUN | 0.159153 | 0.475720 | 0.490907 | 0.001677 | 0.001577 | 0.001592 |
| optional_test_ref_converting_ctor.test | RUN | 0.173288 | 0.658309 | 0.545296 | 0.001420 | 0.001733 | 0.001600 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.159338 | 0.438875 | 0.483510 | 0.001432 | 0.001724 | 0.001741 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.149918 | 0.398785 | 0.439984 | 0.001780 | 0.001810 | 0.001631 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.144829 | 0.406465 | 0.456572 | 0.001584 | 0.001603 | 0.001662 |
| optional_test_ref_portable_minimum.test | RUN | 0.630027 | 2.180098 | 1.698077 | 0.001502 | 0.001708 | 0.001907 |
| optional_test_ref_move.test | RUN | 0.153802 | 0.419062 | 0.480760 | 0.001763 | 0.001820 | 0.001742 |
| optional_test_ref_to_val.test | RUN | 0.183701 | 0.867583 | 0.676841 | 0.001552 | 0.001494 | 0.001540 |
| optional_test_inplace_factory.test | RUN | 0.192107 | 0.780274 | 0.609792 | 0.001694 | 0.001574 | 0.001625 |
| optional_test_io.test | RUN | 0.185147 | 0.882772 | 0.627819 | 0.001517 | 0.001746 | 0.001622 |
| optional_test_move.test | RUN | 0.174829 | 0.584473 | 0.569452 | 0.001478 | 0.001608 | 0.001656 |
| optional_test_noexcept_move.test | RUN | 0.103654 | 0.247226 | 0.291342 | 0.000633 | 0.000728 | 0.001529 |
| optional_test_cmp_none.test | RUN | 0.151196 | 0.402116 | 0.469877 | 0.001763 | 0.001738 | 0.001680 |
| optional_test_value_access.test | RUN | 0.182485 | 0.690927 | 0.616076 | 0.001627 | 0.001288 | 0.001779 |
| optional_test_emplace.test | RUN | 0.179378 | 0.673964 | 0.638284 | 0.001676 | 0.001674 | 0.001747 |
| optional_test_minimum_requirements.test | RUN | 0.160431 | 0.543532 | 0.569065 | 0.001444 | 0.001512 | 0.001489 |
| optional_test_msvc_bug_workaround.test | RUN | 0.150886 | 0.374505 | 0.451033 | 0.001730 | 0.001043 | 0.001654 |
| optional_test_member_T.test | RUN | 0.146063 | 0.362627 | 0.436243 | 0.001414 | 0.001680 | 0.001566 |
| optional_test_tc_base.test | RUN | 0.145010 | 0.372745 | 0.456319 | 0.001496 | 0.001720 | 0.001530 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.106927 | 0.260429 | 0.303439 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.102779 | 0.248148 | 0.270742 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.094799 | 0.228566 | 0.251605 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.131944 | 0.320075 | 0.407765 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.095753 | 0.235127 | 0.263019 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.097299 | 0.235007 | 0.265575 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.097735 | 0.235143 | 0.269139 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.095322 | 0.224086 | 0.258512 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.094543 | 0.235156 | 0.263296 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.097858 | 0.229411 | 0.267151 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.097499 | 0.232323 | 0.256145 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.159060 | 0.362498 | 0.450685 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.157367 | 0.371846 | 0.455996 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.095306 | 0.231046 | 0.259692 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.099123 | 0.232349 | 0.262289 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.095833 | 0.225072 | 0.252393 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.098952 | 0.230398 | 0.254505 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.094946 | 0.228600 | 0.259039 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.098590 | 0.228744 | 0.259102 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.095689 | 0.226258 | 0.259168 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.096426 | 0.232790 | 0.253138 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.096023 | 0.230977 | 0.257853 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.094271 | 0.229770 | 0.257432 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.130349 | 0.305341 | 0.385620 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.105396 | 0.256545 | 0.319370 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.097979 | 0.238004 | 0.267523 | — | — | — |
| optional_test_static_properties.test | RUN | 0.227334 | 0.528911 | 0.679792 | 0.001566 | 0.001673 | 0.001657 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.101504 | 0.254287 | 0.295736 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.104966 | 0.252825 | 0.295436 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.099049 | 0.241897 | 0.277770 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.118474 | 0.311847 | 0.382078 | 0.001678 | 0.001402 | 0.001554 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.118785 | 0.315044 | 0.367799 | 0.001651 | 0.001356 | 0.001483 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.116473 | 0.309962 | 0.377732 | 0.001427 | 0.001582 | 0.001311 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.119911 | 0.325351 | 0.366882 | 0.001818 | 0.001274 | 0.001221 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.087441 | 0.206369 | 0.288400 | 0.001183 | 0.001158 | 0.001131 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.066107 | 0.200002 | 0.278247 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.995× | 0.997×, 0.992× | 0.998× |
| clang | 0.992× | 0.992×, 0.993× | 0.992× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44597827043).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.001099s | 0.001099s | 0.001098s | byte equality observed |
| optional_test_assign.test | 10 | 0.001030s | 0.001039s | 0.001031s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.001054s | 0.000990s | 0.001047s | byte equality observed |
| optional_test_constructors.test | 10 | 0.001032s | 0.001010s | 0.001030s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.001019s | 0.001016s | 0.001008s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.001023s | 0.000990s | 0.000987s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.001014s | 0.001025s | 0.001001s | byte equality observed |
| optional_test_emplace.test | 10 | 0.001059s | 0.001050s | 0.001048s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.001026s | 0.001019s | 0.001052s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.001044s | 0.001025s | 0.001042s | byte equality observed |
| optional_test_hash.test | 10 | 0.001025s | 0.001050s | 0.001036s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.001036s | 0.001044s | 0.001007s | byte equality observed |
| optional_test_io.test | 10 | 0.001038s | 0.001019s | 0.001042s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.001042s | 0.001037s | 0.001002s | byte equality observed |
| optional_test_map.test | 10 | 0.001026s | 0.001016s | 0.001032s | byte equality observed |
| optional_test_member_T.test | 10 | 0.001018s | 0.001006s | 0.001026s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.001054s | 0.001016s | 0.001077s | byte equality observed |
| optional_test_move.test | 10 | 0.001021s | 0.001051s | 0.001012s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.001038s | 0.001031s | 0.000995s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000452s | 0.000444s | 0.001001s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.001015s | 0.001028s | 0.001030s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.001018s | 0.000993s | 0.001016s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.001024s | 0.000992s | 0.001010s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.001025s | 0.001033s | 0.001001s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.001034s | 0.001017s | 0.001011s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.001053s | 0.001021s | 0.001029s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.001017s | 0.000993s | 0.001011s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.001025s | 0.001013s | 0.001011s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.001022s | 0.001015s | 0.001013s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.001063s | 0.001082s | 0.001025s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.001040s | 0.001030s | 0.001006s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.001026s | 0.001019s | 0.000990s | byte equality observed |
| optional_test_swap.test | 10 | 0.001061s | 0.001039s | 0.001011s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.001051s | 0.001067s | 0.001025s | byte equality observed |
| optional_test_tie.test | 10 | 0.001051s | 0.001055s | 0.001002s | byte equality observed |
| optional_test_value_access.test | 10 | 0.001077s | 0.001060s | 0.001035s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.000994s | 0.001021s | 0.000985s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.001016s | 0.001003s | 0.001026s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.001034s | 0.001017s | 0.000986s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44597827043).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
