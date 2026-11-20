# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.291273 | 1.845640 | 1.045157 | 0.001758 | 0.001834 | 0.001805 |
| optional_test_assign.test | RUN | 0.146076 | 0.380386 | 0.464458 | 0.001532 | 0.001686 | 0.001739 |
| optional_test_swap.test | RUN | 0.157095 | 0.475388 | 0.514583 | 0.001560 | 0.001662 | 0.001446 |
| optional_test_constexpr.test | COMPILE | 0.106059 | 0.256397 | 0.291905 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.154474 | 0.635769 | 0.500937 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.105296 | 0.252608 | 0.287602 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.168865 | 0.491686 | 0.580405 | 0.001626 | 0.001678 | 0.001649 |
| optional_test_constructors.test | RUN | 0.355329 | 1.825378 | 1.490339 | 0.001430 | 0.001646 | 0.001553 |
| optional_test_convert_from_T.test | RUN | 0.154464 | 0.397497 | 0.485776 | 0.001755 | 0.001742 | 0.001695 |
| optional_test_convert_assign.test | RUN | 0.150720 | 0.376826 | 0.487543 | 0.001492 | 0.001505 | 0.001779 |
| optional_test_empty_braces.test | RUN | 0.147927 | 0.385981 | 0.449283 | 0.001646 | 0.001740 | 0.001710 |
| optional_test_make_optional.test | RUN | 0.210981 | 0.598837 | 0.749323 | 0.001818 | 0.001550 | 0.001656 |
| optional_test_flat_map.test | RUN | 0.225791 | 0.698589 | 0.841555 | 0.001317 | 0.001460 | 0.001768 |
| optional_test_hash.test | RUN | 0.187282 | 0.567233 | 0.632198 | 0.001586 | 0.001648 | 0.001496 |
| optional_test_map.test | RUN | 0.234080 | 0.678349 | 0.869700 | 0.001627 | 0.001638 | 0.001655 |
| optional_test_tie.test | RUN | 0.165899 | 0.428414 | 0.512249 | 0.001480 | 0.001538 | 0.001551 |
| optional_test_ranges_find.test | RUN | 0.145655 | 0.368734 | 0.454591 | 0.001474 | 0.001546 | 0.001496 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.188114 | 1.120919 | 0.668342 | 0.001659 | 0.001687 | 0.001669 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.158523 | 0.469261 | 0.501507 | 0.001579 | 0.001763 | 0.001724 |
| optional_test_ref_assign_const_int.test | RUN | 0.157245 | 0.478986 | 0.501615 | 0.001626 | 0.001572 | 0.001635 |
| optional_test_ref_converting_ctor.test | RUN | 0.174516 | 0.667727 | 0.567767 | 0.001454 | 0.001657 | 0.001567 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.154264 | 0.447814 | 0.497628 | 0.001522 | 0.001880 | 0.001681 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.149742 | 0.403954 | 0.468066 | 0.001650 | 0.001568 | 0.001587 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.153240 | 0.409265 | 0.468279 | 0.001759 | 0.001774 | 0.001667 |
| optional_test_ref_portable_minimum.test | RUN | 0.639537 | 2.238512 | 1.721696 | 0.001549 | 0.001734 | 0.001585 |
| optional_test_ref_move.test | RUN | 0.157959 | 0.422350 | 0.504406 | 0.001716 | 0.001815 | 0.001703 |
| optional_test_ref_to_val.test | RUN | 0.187923 | 0.880943 | 0.696287 | 0.001515 | 0.001610 | 0.001648 |
| optional_test_inplace_factory.test | RUN | 0.197692 | 0.795360 | 0.627178 | 0.001822 | 0.001472 | 0.001751 |
| optional_test_io.test | RUN | 0.190692 | 0.894875 | 0.664505 | 0.001667 | 0.001730 | 0.001694 |
| optional_test_move.test | RUN | 0.177658 | 0.597307 | 0.572095 | 0.001590 | 0.001758 | 0.001701 |
| optional_test_noexcept_move.test | RUN | 0.106254 | 0.258119 | 0.282726 | 0.000615 | 0.000790 | 0.001422 |
| optional_test_cmp_none.test | RUN | 0.153952 | 0.414601 | 0.482381 | 0.001691 | 0.001652 | 0.001629 |
| optional_test_value_access.test | RUN | 0.181621 | 0.709426 | 0.638485 | 0.001686 | 0.001680 | 0.001609 |
| optional_test_emplace.test | RUN | 0.182927 | 0.691045 | 0.636295 | 0.001661 | 0.001723 | 0.001589 |
| optional_test_minimum_requirements.test | RUN | 0.168656 | 0.557494 | 0.566658 | 0.001580 | 0.001627 | 0.001600 |
| optional_test_msvc_bug_workaround.test | RUN | 0.150910 | 0.378454 | 0.462711 | 0.001621 | 0.001569 | 0.001689 |
| optional_test_member_T.test | RUN | 0.145636 | 0.373211 | 0.459337 | 0.001486 | 0.001728 | 0.001512 |
| optional_test_tc_base.test | RUN | 0.149747 | 0.377262 | 0.456849 | 0.001558 | 0.001812 | 0.001514 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.110372 | 0.265072 | 0.309211 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.103852 | 0.260651 | 0.279272 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.098964 | 0.233636 | 0.256934 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.135790 | 0.325399 | 0.414554 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.097675 | 0.235548 | 0.266250 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.098019 | 0.239196 | 0.278760 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.100709 | 0.237295 | 0.277463 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.099371 | 0.233442 | 0.268216 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.096247 | 0.233254 | 0.269069 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.098363 | 0.234658 | 0.262865 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.096527 | 0.236618 | 0.271049 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.162799 | 0.372559 | 0.471018 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.162239 | 0.364082 | 0.468996 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.096251 | 0.232663 | 0.268491 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.099961 | 0.242630 | 0.273172 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.095772 | 0.226441 | 0.270236 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.101321 | 0.235126 | 0.272404 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.098323 | 0.227444 | 0.268148 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.098319 | 0.237279 | 0.268485 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.100725 | 0.234184 | 0.276587 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.095330 | 0.234849 | 0.270209 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.099706 | 0.233156 | 0.266370 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.096141 | 0.236042 | 0.267291 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.131567 | 0.312535 | 0.402552 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.104563 | 0.258442 | 0.337214 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.099065 | 0.242058 | 0.269728 | — | — | — |
| optional_test_static_properties.test | RUN | 0.229774 | 0.540727 | 0.691721 | 0.001650 | 0.001594 | 0.001708 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.103568 | 0.257280 | 0.296180 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.105888 | 0.257857 | 0.300723 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.101383 | 0.248854 | 0.284852 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.122687 | 0.310673 | 0.373778 | 0.001505 | 0.001663 | 0.001542 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.120069 | 0.315499 | 0.391628 | 0.001507 | 0.001594 | 0.001534 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.121325 | 0.319638 | 0.391425 | 0.001402 | 0.001554 | 0.001426 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.123810 | 0.330382 | 0.358351 | 0.001690 | 0.001806 | 0.001235 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.082305 | 0.181471 | 0.311712 | 0.001123 | 0.001173 | 0.001121 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.067819 | 0.216554 | 0.306006 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.999× | 0.999×, 0.999× | 1.008× |
| clang | 1.011× | 1.018×, 1.004× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44667760294).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.001125s | 0.001160s | 0.001126s | byte equality observed |
| optional_test_assign.test | 10 | 0.001053s | 0.001030s | 0.001057s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.001062s | 0.001007s | 0.001050s | byte equality observed |
| optional_test_constructors.test | 10 | 0.001076s | 0.001068s | 0.001038s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.001040s | 0.001050s | 0.001103s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.001023s | 0.001064s | 0.001051s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.001049s | 0.001037s | 0.001039s | byte equality observed |
| optional_test_emplace.test | 10 | 0.001084s | 0.001125s | 0.001075s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.001050s | 0.001035s | 0.001059s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.001040s | 0.001062s | 0.001074s | byte equality observed |
| optional_test_hash.test | 10 | 0.001055s | 0.001054s | 0.001055s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.001047s | 0.001060s | 0.001071s | byte equality observed |
| optional_test_io.test | 10 | 0.001077s | 0.001066s | 0.001059s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.001054s | 0.001065s | 0.001079s | byte equality observed |
| optional_test_map.test | 10 | 0.001043s | 0.001043s | 0.001056s | byte equality observed |
| optional_test_member_T.test | 10 | 0.001086s | 0.001029s | 0.001056s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.001092s | 0.001061s | 0.001088s | byte equality observed |
| optional_test_move.test | 10 | 0.001034s | 0.001053s | 0.001075s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.001060s | 0.001046s | 0.001051s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000467s | 0.000468s | 0.001066s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.001058s | 0.001060s | 0.001064s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.001060s | 0.001047s | 0.001040s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.001089s | 0.001018s | 0.001040s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.001064s | 0.001037s | 0.001081s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.001052s | 0.001066s | 0.001046s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.001040s | 0.001037s | 0.001039s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.001059s | 0.001044s | 0.001060s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.001036s | 0.001085s | 0.001047s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.001051s | 0.001090s | 0.001063s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.001093s | 0.001079s | 0.001091s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.001058s | 0.001081s | 0.001040s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.001019s | 0.001047s | 0.001041s | byte equality observed |
| optional_test_swap.test | 10 | 0.001056s | 0.001071s | 0.001087s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.001053s | 0.001084s | 0.001053s | byte equality observed |
| optional_test_tie.test | 10 | 0.001045s | 0.001032s | 0.001060s | byte equality observed |
| optional_test_value_access.test | 10 | 0.001123s | 0.001074s | 0.001134s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.001028s | 0.001019s | 0.001024s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.001047s | 0.001031s | 0.001028s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.001052s | 0.001026s | 0.001049s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44667760294).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
