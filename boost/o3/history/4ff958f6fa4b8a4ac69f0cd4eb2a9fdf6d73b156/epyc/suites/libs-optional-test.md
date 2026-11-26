# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.333144 | 2.090496 | 1.439017 | 0.002006 | 0.002266 | 0.002169 |
| optional_test_assign.test | RUN | 0.186925 | 0.444946 | 0.704812 | 0.001854 | 0.002174 | 0.001803 |
| optional_test_swap.test | RUN | 0.188731 | 0.540869 | 0.761061 | 0.001919 | 0.002266 | 0.001684 |
| optional_test_constexpr.test | COMPILE | 0.127068 | 0.302009 | 0.451615 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.184637 | 0.746243 | 0.739840 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.128721 | 0.296869 | 0.440693 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.209675 | 0.584174 | 0.837012 | 0.001874 | 0.002306 | 0.002038 |
| optional_test_constructors.test | RUN | 0.423797 | 2.128380 | 2.008115 | 0.001922 | 0.001925 | 0.002012 |
| optional_test_convert_from_T.test | RUN | 0.185439 | 0.467106 | 0.738081 | 0.001916 | 0.002274 | 0.001926 |
| optional_test_convert_assign.test | RUN | 0.197846 | 0.437213 | 0.681132 | 0.001834 | 0.001892 | 0.002026 |
| optional_test_empty_braces.test | RUN | 0.186283 | 0.462479 | 0.734098 | 0.001956 | 0.002330 | 0.002070 |
| optional_test_make_optional.test | RUN | 0.255154 | 0.700992 | 1.045755 | 0.001804 | 0.002257 | 0.002154 |
| optional_test_flat_map.test | RUN | 0.275080 | 0.791590 | 1.228122 | 0.001763 | 0.001808 | 0.002073 |
| optional_test_hash.test | RUN | 0.227183 | 0.658977 | 0.902381 | 0.001862 | 0.002254 | 0.002120 |
| optional_test_map.test | RUN | 0.268158 | 0.755052 | 1.128681 | 0.002045 | 0.001978 | 0.002145 |
| optional_test_tie.test | RUN | 0.200790 | 0.504165 | 0.756664 | 0.002048 | 0.001772 | 0.001866 |
| optional_test_ranges_find.test | RUN | 0.182551 | 0.444374 | 0.654882 | 0.001680 | 0.002023 | 0.001896 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.222918 | 1.280542 | 0.930381 | 0.001864 | 0.001877 | 0.002076 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.195459 | 0.550680 | 0.729425 | 0.002046 | 0.002041 | 0.002202 |
| optional_test_ref_assign_const_int.test | RUN | 0.195225 | 0.571819 | 0.688961 | 0.001743 | 0.001901 | 0.002016 |
| optional_test_ref_converting_ctor.test | RUN | 0.211880 | 0.790613 | 0.803720 | 0.001929 | 0.002197 | 0.002120 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.188043 | 0.522870 | 0.692416 | 0.001780 | 0.001738 | 0.002122 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.181842 | 0.471384 | 0.690555 | 0.002005 | 0.002092 | 0.001753 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.186106 | 0.480790 | 0.703093 | 0.001961 | 0.002328 | 0.001734 |
| optional_test_ref_portable_minimum.test | RUN | 0.756354 | 2.507675 | 2.401189 | 0.002076 | 0.002070 | 0.001562 |
| optional_test_ref_move.test | RUN | 0.188715 | 0.495361 | 0.766812 | 0.002026 | 0.002140 | 0.002051 |
| optional_test_ref_to_val.test | RUN | 0.237406 | 1.001845 | 0.998721 | 0.002096 | 0.001996 | 0.001910 |
| optional_test_inplace_factory.test | RUN | 0.233412 | 0.915190 | 0.938746 | 0.002031 | 0.001798 | 0.001678 |
| optional_test_io.test | RUN | 0.225842 | 1.004321 | 0.880272 | 0.002152 | 0.002124 | 0.001768 |
| optional_test_move.test | RUN | 0.217432 | 0.700333 | 0.817247 | 0.001878 | 0.002130 | 0.002078 |
| optional_test_noexcept_move.test | RUN | 0.134120 | 0.306843 | 0.473278 | 0.000838 | 0.000844 | 0.001864 |
| optional_test_cmp_none.test | RUN | 0.184437 | 0.496596 | 0.722455 | 0.001888 | 0.002016 | 0.001714 |
| optional_test_value_access.test | RUN | 0.221257 | 0.806959 | 0.895052 | 0.001940 | 0.002338 | 0.002208 |
| optional_test_emplace.test | RUN | 0.215617 | 0.803320 | 0.906876 | 0.002120 | 0.001793 | 0.001840 |
| optional_test_minimum_requirements.test | RUN | 0.203658 | 0.644761 | 0.804445 | 0.001828 | 0.002085 | 0.002140 |
| optional_test_msvc_bug_workaround.test | RUN | 0.186183 | 0.448388 | 0.694726 | 0.001784 | 0.002098 | 0.001928 |
| optional_test_member_T.test | RUN | 0.181279 | 0.439930 | 0.673143 | 0.001693 | 0.001892 | 0.001733 |
| optional_test_tc_base.test | RUN | 0.183383 | 0.444359 | 0.674789 | 0.001718 | 0.002248 | 0.002116 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.138290 | 0.313826 | 0.484407 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.132559 | 0.311002 | 0.436069 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.119908 | 0.277764 | 0.396638 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.169691 | 0.390812 | 0.642132 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.122250 | 0.290028 | 0.399770 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.121277 | 0.294201 | 0.412000 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.123575 | 0.281905 | 0.412674 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.125809 | 0.287732 | 0.418362 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.122754 | 0.278064 | 0.392275 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.123705 | 0.287779 | 0.409412 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.121398 | 0.276724 | 0.408664 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.200696 | 0.442889 | 0.696058 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.198634 | 0.444202 | 0.701738 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.121324 | 0.286241 | 0.417514 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.121378 | 0.294472 | 0.423269 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.121148 | 0.274891 | 0.419615 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.124464 | 0.262396 | 0.423987 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.121611 | 0.259406 | 0.423256 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.124028 | 0.287644 | 0.415894 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.123526 | 0.276959 | 0.425811 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.120708 | 0.277452 | 0.423194 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.122582 | 0.276870 | 0.416930 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.122700 | 0.286867 | 0.423152 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.168076 | 0.368232 | 0.593953 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.130733 | 0.308232 | 0.510308 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.123573 | 0.276481 | 0.423136 | — | — | — |
| optional_test_static_properties.test | RUN | 0.291769 | 0.640696 | 1.061264 | 0.002000 | 0.002104 | 0.001928 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.133175 | 0.302889 | 0.451298 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.133006 | 0.322121 | 0.454601 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.128728 | 0.299258 | 0.443804 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.147731 | 0.379896 | 0.588634 | 0.001867 | 0.002076 | 0.001699 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.149829 | 0.375235 | 0.574728 | 0.001734 | 0.001854 | 0.001703 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.146908 | 0.382271 | 0.558139 | 0.001686 | 0.001706 | 0.001802 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.151099 | 0.381969 | 0.554457 | 0.001926 | 0.002160 | 0.001503 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.105936 | 0.263667 | 0.395528 | 0.001324 | 0.001480 | 0.001381 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.066074 | 0.212598 | 0.382295 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998× | 0.999×, 0.996× | 1.010× |
| clang | 1.017× | 1.012×, 1.022× | 1.010× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45850603565).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.001323s | 0.001319s | 0.001327s | byte equality observed |
| optional_test_assign.test | 10 | 0.001253s | 0.001265s | 0.001288s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.001240s | 0.001241s | 0.001237s | byte equality observed |
| optional_test_constructors.test | 10 | 0.001247s | 0.001270s | 0.001216s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.001281s | 0.001267s | 0.001198s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.001235s | 0.001231s | 0.001215s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.001243s | 0.001283s | 0.001261s | byte equality observed |
| optional_test_emplace.test | 10 | 0.001267s | 0.001313s | 0.001261s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.001255s | 0.001225s | 0.001287s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.001274s | 0.001254s | 0.001262s | byte equality observed |
| optional_test_hash.test | 8 | 0.001261s | 0.001239s | 0.001242s | byte equality observed |
| optional_test_inplace_factory.test | 8 | 0.001240s | 0.001252s | 0.001244s | byte equality observed |
| optional_test_io.test | 10 | 0.001265s | 0.001273s | 0.001293s | byte equality observed |
| optional_test_make_optional.test | 8 | 0.001286s | 0.001250s | 0.001300s | byte equality observed |
| optional_test_map.test | 10 | 0.001266s | 0.001243s | 0.001293s | byte equality observed |
| optional_test_member_T.test | 10 | 0.001252s | 0.001239s | 0.001248s | byte equality observed |
| optional_test_minimum_requirements.test | 8 | 0.001275s | 0.001263s | 0.001274s | byte equality observed |
| optional_test_move.test | 9 | 0.001289s | 0.001275s | 0.001263s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 9 | 0.001244s | 0.001261s | 0.001222s | byte equality observed |
| optional_test_noexcept_move.test | 7 | 0.000593s | 0.000585s | 0.001217s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.001231s | 0.001231s | 0.001223s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.001248s | 0.001295s | 0.001258s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.001287s | 0.001245s | 0.001293s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.001260s | 0.001240s | 0.001275s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.001265s | 0.001259s | 0.001279s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.001253s | 0.001256s | 0.001257s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.001274s | 0.001276s | 0.001244s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.001243s | 0.001235s | 0.001226s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.001245s | 0.001255s | 0.001296s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.001295s | 0.001284s | 0.001308s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.001263s | 0.001253s | 0.001250s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.001241s | 0.001283s | 0.001241s | byte equality observed |
| optional_test_swap.test | 10 | 0.001256s | 0.001247s | 0.001278s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.001284s | 0.001294s | 0.001294s | byte equality observed |
| optional_test_tie.test | 10 | 0.001290s | 0.001260s | 0.001224s | byte equality observed |
| optional_test_value_access.test | 10 | 0.001308s | 0.001283s | 0.001287s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.001209s | 0.001252s | 0.001242s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.001236s | 0.001209s | 0.001267s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.001219s | 0.001222s | 0.001239s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45850603565).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
