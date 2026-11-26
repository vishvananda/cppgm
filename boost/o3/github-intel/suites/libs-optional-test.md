# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.294309 | 1.786638 | 1.027919 | 0.001847 | 0.001748 | 0.001814 |
| optional_test_assign.test | RUN | 0.147314 | 0.376057 | 0.475871 | 0.001604 | 0.001759 | 0.001535 |
| optional_test_swap.test | RUN | 0.158550 | 0.464297 | 0.515791 | 0.001526 | 0.001648 | 0.001472 |
| optional_test_constexpr.test | COMPILE | 0.105578 | 0.252334 | 0.292678 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.158525 | 0.609939 | 0.494632 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.104136 | 0.247619 | 0.289348 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.168326 | 0.483952 | 0.572856 | 0.001670 | 0.001783 | 0.001732 |
| optional_test_constructors.test | RUN | 0.352314 | 1.767569 | 1.447411 | 0.001587 | 0.001476 | 0.001751 |
| optional_test_convert_from_T.test | RUN | 0.154025 | 0.398858 | 0.484548 | 0.001648 | 0.001631 | 0.001660 |
| optional_test_convert_assign.test | RUN | 0.151666 | 0.388418 | 0.474681 | 0.001502 | 0.001626 | 0.001671 |
| optional_test_empty_braces.test | RUN | 0.150662 | 0.368400 | 0.462976 | 0.001694 | 0.001714 | 0.001719 |
| optional_test_make_optional.test | RUN | 0.214349 | 0.583487 | 0.736544 | 0.001670 | 0.001447 | 0.001668 |
| optional_test_flat_map.test | RUN | 0.230728 | 0.680769 | 0.829822 | 0.001509 | 0.001443 | 0.001580 |
| optional_test_hash.test | RUN | 0.188517 | 0.540080 | 0.610048 | 0.001652 | 0.001496 | 0.001698 |
| optional_test_map.test | RUN | 0.233757 | 0.654808 | 0.863597 | 0.001747 | 0.001702 | 0.001503 |
| optional_test_tie.test | RUN | 0.166675 | 0.418161 | 0.489465 | 0.001834 | 0.001598 | 0.001544 |
| optional_test_ranges_find.test | RUN | 0.146887 | 0.364609 | 0.449089 | 0.001524 | 0.001450 | 0.001426 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.187796 | 1.101320 | 0.657661 | 0.001412 | 0.001585 | 0.001603 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.156382 | 0.461030 | 0.492994 | 0.001745 | 0.001552 | 0.001483 |
| optional_test_ref_assign_const_int.test | RUN | 0.160667 | 0.478243 | 0.496126 | 0.001645 | 0.001546 | 0.001584 |
| optional_test_ref_converting_ctor.test | RUN | 0.170931 | 0.667192 | 0.561265 | 0.001496 | 0.001692 | 0.001600 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.154841 | 0.418945 | 0.471747 | 0.001530 | 0.001614 | 0.001584 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.152871 | 0.401083 | 0.460203 | 0.001748 | 0.001668 | 0.001641 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.149208 | 0.394165 | 0.456962 | 0.001625 | 0.001703 | 0.001629 |
| optional_test_ref_portable_minimum.test | RUN | 0.635713 | 2.198031 | 1.707268 | 0.001770 | 0.001565 | 0.001678 |
| optional_test_ref_move.test | RUN | 0.161342 | 0.413464 | 0.473689 | 0.001338 | 0.001679 | 0.001720 |
| optional_test_ref_to_val.test | RUN | 0.193646 | 0.850217 | 0.681741 | 0.001679 | 0.001494 | 0.001646 |
| optional_test_inplace_factory.test | RUN | 0.197065 | 0.785756 | 0.619921 | 0.001619 | 0.001674 | 0.001668 |
| optional_test_io.test | RUN | 0.190117 | 0.872063 | 0.645825 | 0.001671 | 0.001566 | 0.001586 |
| optional_test_move.test | RUN | 0.177688 | 0.586542 | 0.552322 | 0.001596 | 0.001652 | 0.001635 |
| optional_test_noexcept_move.test | RUN | 0.106046 | 0.250338 | 0.281546 | 0.000645 | 0.000704 | 0.001438 |
| optional_test_cmp_none.test | RUN | 0.148663 | 0.403249 | 0.464178 | 0.001736 | 0.001441 | 0.001634 |
| optional_test_value_access.test | RUN | 0.187903 | 0.686712 | 0.626355 | 0.001686 | 0.001666 | 0.001720 |
| optional_test_emplace.test | RUN | 0.181391 | 0.675799 | 0.621126 | 0.001462 | 0.001581 | 0.001415 |
| optional_test_minimum_requirements.test | RUN | 0.168176 | 0.533828 | 0.558892 | 0.001804 | 0.001649 | 0.001697 |
| optional_test_msvc_bug_workaround.test | RUN | 0.150614 | 0.368541 | 0.449136 | 0.001701 | 0.001610 | 0.001606 |
| optional_test_member_T.test | RUN | 0.147136 | 0.363422 | 0.440817 | 0.001545 | 0.001488 | 0.001770 |
| optional_test_tc_base.test | RUN | 0.151552 | 0.376880 | 0.459283 | 0.001463 | 0.001730 | 0.001524 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.110378 | 0.253612 | 0.307668 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.106739 | 0.255696 | 0.279312 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.097903 | 0.231340 | 0.259527 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.134919 | 0.323425 | 0.413121 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.096674 | 0.233542 | 0.266425 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.097845 | 0.237652 | 0.261382 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.100964 | 0.238313 | 0.268382 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.098712 | 0.230781 | 0.267184 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.097067 | 0.230915 | 0.261430 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.099168 | 0.234694 | 0.259817 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.097084 | 0.227395 | 0.261050 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.160941 | 0.370910 | 0.463408 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.162112 | 0.367551 | 0.465254 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.096815 | 0.236296 | 0.256340 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.101631 | 0.241528 | 0.266009 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.096705 | 0.229812 | 0.253071 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.099601 | 0.227364 | 0.261448 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.098945 | 0.234300 | 0.259121 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.097994 | 0.232620 | 0.263110 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.098240 | 0.224209 | 0.259503 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.097951 | 0.222239 | 0.258672 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.097144 | 0.230153 | 0.256569 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.098605 | 0.232154 | 0.261038 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.134082 | 0.309768 | 0.386364 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.105992 | 0.257991 | 0.325099 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.101001 | 0.229210 | 0.269370 | — | — | — |
| optional_test_static_properties.test | RUN | 0.228870 | 0.527744 | 0.683185 | 0.001673 | 0.001646 | 0.001637 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.104261 | 0.251683 | 0.294775 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.105918 | 0.256620 | 0.292479 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.104381 | 0.244872 | 0.277129 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.120546 | 0.309884 | 0.375823 | 0.001572 | 0.001509 | 0.001633 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.121174 | 0.318842 | 0.374941 | 0.001606 | 0.001482 | 0.001499 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.120716 | 0.308207 | 0.357788 | 0.001520 | 0.001414 | 0.001325 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.121334 | 0.320759 | 0.349937 | 0.001762 | 0.001218 | 0.001154 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.120118 | 0.197036 | 0.295009 | 0.001278 | 0.001118 | 0.001077 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.054672 | 0.195669 | 0.288259 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.005× | 0.999×, 1.012× | 0.997× |
| clang | 0.999× | 1.002×, 0.997× | 0.993× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45754596224).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.001079s | 0.001096s | 0.001082s | byte equality observed |
| optional_test_assign.test | 10 | 0.001024s | 0.000994s | 0.001051s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.001007s | 0.001008s | 0.001026s | byte equality observed |
| optional_test_constructors.test | 10 | 0.001060s | 0.001025s | 0.001032s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.001019s | 0.001007s | 0.000992s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.001067s | 0.001021s | 0.001024s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.001044s | 0.001069s | 0.000988s | byte equality observed |
| optional_test_emplace.test | 10 | 0.001029s | 0.001046s | 0.001031s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.001045s | 0.001027s | 0.001031s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.001012s | 0.001005s | 0.000981s | byte equality observed |
| optional_test_hash.test | 10 | 0.001047s | 0.001035s | 0.001038s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.001013s | 0.001007s | 0.001011s | byte equality observed |
| optional_test_io.test | 10 | 0.001057s | 0.001043s | 0.001077s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.001018s | 0.000991s | 0.001038s | byte equality observed |
| optional_test_map.test | 10 | 0.001024s | 0.001031s | 0.001065s | byte equality observed |
| optional_test_member_T.test | 10 | 0.000998s | 0.000992s | 0.001056s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.001065s | 0.001056s | 0.001075s | byte equality observed |
| optional_test_move.test | 10 | 0.001040s | 0.001005s | 0.001012s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.001037s | 0.001026s | 0.001018s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000451s | 0.000454s | 0.001008s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.001023s | 0.001042s | 0.001031s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.001025s | 0.001010s | 0.001011s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.001025s | 0.001059s | 0.001027s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.001037s | 0.001029s | 0.001021s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.001025s | 0.001041s | 0.001025s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.000987s | 0.001008s | 0.001055s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.001009s | 0.001031s | 0.001005s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.001013s | 0.001030s | 0.001025s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.001037s | 0.000996s | 0.001019s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.001066s | 0.001038s | 0.001035s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.001044s | 0.001060s | 0.001013s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.001021s | 0.001050s | 0.001011s | byte equality observed |
| optional_test_swap.test | 10 | 0.001019s | 0.001048s | 0.000971s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.001055s | 0.001044s | 0.001052s | byte equality observed |
| optional_test_tie.test | 10 | 0.001059s | 0.001059s | 0.001025s | byte equality observed |
| optional_test_value_access.test | 10 | 0.001044s | 0.001090s | 0.001074s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.001011s | 0.000989s | 0.000980s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.001032s | 0.001046s | 0.001033s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.001012s | 0.001034s | 0.001003s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45754596224).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
