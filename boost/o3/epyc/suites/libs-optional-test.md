# libs/optional/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| optional_test.test | RUN | 0.330096 | 2.019285 | 1.396290 | 0.001905 | 0.002082 | 0.002178 |
| optional_test_assign.test | RUN | 0.179565 | 0.430541 | 0.665786 | 0.001728 | 0.001797 | 0.002122 |
| optional_test_swap.test | RUN | 0.200402 | 0.538886 | 0.749320 | 0.001725 | 0.001960 | 0.001956 |
| optional_test_constexpr.test | COMPILE | 0.130213 | 0.297078 | 0.449029 | — | — | — |
| optional_test_wuninitialized.test | COMPILE | 0.187607 | 0.710735 | 0.699281 | — | — | — |
| optional_test_fwd_header.test | COMPILE | 0.131424 | 0.287608 | 0.427650 | — | — | — |
| optional_test_conversions_from_U.test | RUN | 0.212670 | 0.568510 | 0.774028 | 0.001942 | 0.001932 | 0.002016 |
| optional_test_constructors.test | RUN | 0.418673 | 2.072113 | 2.067379 | 0.001827 | 0.001682 | 0.002036 |
| optional_test_convert_from_T.test | RUN | 0.192891 | 0.459325 | 0.728354 | 0.001914 | 0.001980 | 0.002016 |
| optional_test_convert_assign.test | RUN | 0.195533 | 0.435768 | 0.667643 | 0.001893 | 0.002012 | 0.002076 |
| optional_test_empty_braces.test | RUN | 0.186371 | 0.443682 | 0.662891 | 0.002015 | 0.002150 | 0.001996 |
| optional_test_make_optional.test | RUN | 0.254170 | 0.675424 | 1.084887 | 0.001896 | 0.001968 | 0.002087 |
| optional_test_flat_map.test | RUN | 0.277148 | 0.764194 | 1.148950 | 0.001739 | 0.001846 | 0.002053 |
| optional_test_hash.test | RUN | 0.230706 | 0.632108 | 0.842804 | 0.001764 | 0.001926 | 0.002108 |
| optional_test_map.test | RUN | 0.275501 | 0.764216 | 1.174720 | 0.001737 | 0.001998 | 0.001808 |
| optional_test_tie.test | RUN | 0.199988 | 0.518226 | 0.708414 | 0.001702 | 0.001802 | 0.001873 |
| optional_test_ranges_find.test | RUN | 0.181367 | 0.423243 | 0.677076 | 0.001723 | 0.001966 | 0.001593 |
| optional_test_ref_assign_portable_minimum.test | RUN | 0.234421 | 1.243169 | 0.897240 | 0.001843 | 0.001735 | 0.002030 |
| optional_test_ref_assign_mutable_int.test | RUN | 0.192037 | 0.532964 | 0.684238 | 0.001836 | 0.001944 | 0.002062 |
| optional_test_ref_assign_const_int.test | RUN | 0.191606 | 0.554362 | 0.764457 | 0.001764 | 0.001790 | 0.002024 |
| optional_test_ref_converting_ctor.test | RUN | 0.207631 | 0.748925 | 0.810323 | 0.001635 | 0.002069 | 0.002073 |
| optional_test_ref_convert_assign_non_int.test | RUN | 0.187984 | 0.504131 | 0.692849 | 0.001830 | 0.001952 | 0.001444 |
| optional_test_ref_convert_assign_mutable_int.test | RUN | 0.178560 | 0.465650 | 0.644836 | 0.002048 | 0.001761 | 0.002064 |
| optional_test_ref_convert_assign_const_int.test | RUN | 0.183071 | 0.469389 | 0.661938 | 0.001864 | 0.002048 | 0.002054 |
| optional_test_ref_portable_minimum.test | RUN | 0.742221 | 2.447499 | 2.395137 | 0.002000 | 0.002082 | 0.002010 |
| optional_test_ref_move.test | RUN | 0.193055 | 0.486745 | 0.716550 | 0.001949 | 0.002152 | 0.001865 |
| optional_test_ref_to_val.test | RUN | 0.226008 | 0.988459 | 0.985719 | 0.001990 | 0.002051 | 0.001972 |
| optional_test_inplace_factory.test | RUN | 0.242933 | 0.899140 | 0.913919 | 0.001888 | 0.001866 | 0.001928 |
| optional_test_io.test | RUN | 0.229512 | 0.961815 | 0.928414 | 0.001976 | 0.002110 | 0.002106 |
| optional_test_move.test | RUN | 0.212644 | 0.671950 | 0.826563 | 0.001828 | 0.002138 | 0.002106 |
| optional_test_noexcept_move.test | RUN | 0.133646 | 0.291118 | 0.409923 | 0.000749 | 0.000846 | 0.001685 |
| optional_test_cmp_none.test | RUN | 0.182578 | 0.467962 | 0.719916 | 0.002024 | 0.002166 | 0.002135 |
| optional_test_value_access.test | RUN | 0.228361 | 0.778488 | 0.859418 | 0.002081 | 0.002335 | 0.002116 |
| optional_test_emplace.test | RUN | 0.226568 | 0.787799 | 0.925056 | 0.001927 | 0.002003 | 0.001852 |
| optional_test_minimum_requirements.test | RUN | 0.206164 | 0.631132 | 0.818457 | 0.001916 | 0.001972 | 0.001996 |
| optional_test_msvc_bug_workaround.test | RUN | 0.184114 | 0.438086 | 0.667681 | 0.002030 | 0.001639 | 0.002101 |
| optional_test_member_T.test | RUN | 0.182423 | 0.426464 | 0.633217 | 0.001970 | 0.001874 | 0.002088 |
| optional_test_tc_base.test | RUN | 0.182482 | 0.446975 | 0.688080 | 0.001774 | 0.002076 | 0.001669 |
| optional_test_sfinae_friendly_ctor.test | COMPILE | 0.141853 | 0.305432 | 0.471950 | — | — | — |
| optional_test_path_assignment.test | COMPILE | 0.136058 | 0.295949 | 0.407092 | — | — | — |
| optional_test_fail_const_swap.test | COMPILE_FAIL | 0.120904 | 0.275950 | 0.388054 | — | — | — |
| optional_test_ref_convert_assign_const_int_prevented.test | COMPILE_FAIL | 0.174207 | 0.385962 | 0.634692 | — | — | — |
| optional_test_fail1.test | COMPILE_FAIL | 0.121380 | 0.272463 | 0.404149 | — | — | — |
| optional_test_fail3a.test | COMPILE_FAIL | 0.123366 | 0.281658 | 0.412082 | — | — | — |
| optional_test_fail3b.test | COMPILE_FAIL | 0.124346 | 0.286553 | 0.418942 | — | — | — |
| optional_test_ref_fail1.test | COMPILE_FAIL | 0.123481 | 0.272922 | 0.419926 | — | — | — |
| optional_test_ref_fail3.test | COMPILE_FAIL | 0.121751 | 0.286929 | 0.409223 | — | — | — |
| optional_test_ref_fail4.test | COMPILE_FAIL | 0.121602 | 0.274107 | 0.414230 | — | — | — |
| optional_test_ref_fail_convert_from_temporary_optional_T.test | COMPILE_FAIL | 0.121526 | 0.286757 | 0.416885 | — | — | — |
| optional_test_inplace_fail.test | COMPILE_FAIL | 0.200848 | 0.431878 | 0.692114 | — | — | — |
| optional_test_inplace_fail2.test | COMPILE_FAIL | 0.204077 | 0.447271 | 0.694589 | — | — | — |
| optional_test_fail_implicit_bool_convert.test | COMPILE_FAIL | 0.121326 | 0.273901 | 0.414814 | — | — | — |
| optional_test_fail_copying_a_moveable_type.test | COMPILE_FAIL | 0.125595 | 0.287832 | 0.416876 | — | — | — |
| optional_test_fail_optional_rvalue_ref.test | COMPILE_FAIL | 0.121667 | 0.275593 | 0.388677 | — | — | — |
| optional_test_ref_fail_init_from_Trefref.test | COMPILE_FAIL | 0.124367 | 0.272318 | 0.412855 | — | — | — |
| optional_test_ref_fail_init_from_Urefref.test | COMPILE_FAIL | 0.123537 | 0.289105 | 0.425444 | — | — | — |
| optional_test_ref_fail_assign_from_Trefref.test | COMPILE_FAIL | 0.123518 | 0.281863 | 0.413947 | — | — | — |
| optional_test_ref_fail_assign_from_Urefref.test | COMPILE_FAIL | 0.125761 | 0.270854 | 0.384539 | — | — | — |
| optional_test_fail_convert_from_null.test | COMPILE_FAIL | 0.121970 | 0.285507 | 0.409624 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or.test | COMPILE_FAIL | 0.119943 | 0.276200 | 0.411822 | — | — | — |
| optional_test_fail_explicit_convert_in_value_or_call.test | COMPILE_FAIL | 0.120437 | 0.285799 | 0.397117 | — | — | — |
| optional_test_fail_io_without_io.test | COMPILE_FAIL | 0.167943 | 0.368224 | 0.597160 | — | — | — |
| optional_test_fail_none_io_without_io.test | COMPILE_FAIL | 0.132131 | 0.300174 | 0.494754 | — | — | — |
| optional_test_fail_convert_assign_of_enums.test | COMPILE_FAIL | 0.124821 | 0.293741 | 0.415806 | — | — | — |
| optional_test_static_properties.test | RUN | 0.288359 | 0.634691 | 1.076887 | 0.002024 | 0.002132 | 0.002046 |
| optional_test_maybe_uninitialized_warning.test | COMPILE | 0.130888 | 0.301820 | 0.449308 | — | — | — |
| optional_test_deleted_default_ctor.test | COMPILE | 0.134183 | 0.308116 | 0.455450 | — | — | — |
| optional_test_constructible_from_other.test | COMPILE | 0.130535 | 0.298027 | 0.440276 | — | — | — |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | RUN | 0.151271 | 0.369316 | 0.581792 | 0.002038 | 0.001902 | 0.001614 |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_fail.test | RUN_FAIL | 0.152384 | 0.377371 | 0.520700 | 0.001652 | 0.001795 | 0.001982 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | RUN | 0.151956 | 0.362598 | 0.574357 | 0.001556 | 0.001750 | 0.001608 |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_fail.test | RUN_FAIL | 0.145448 | 0.368421 | 0.522214 | 0.001960 | 0.002185 | 0.002136 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | RUN | 0.102052 | 0.259437 | 0.347730 | 0.001490 | 0.001523 | 0.001495 |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_fail.test | COMPILE_FAIL | 0.064696 | 0.217728 | 0.361672 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.983× | 0.976×, 0.989× | 0.997× |
| clang | 1.003× | 0.999×, 1.007× | 1.009× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46045514956).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| optional_test.test | 10 | 0.001319s | 0.001329s | 0.001322s | byte equality observed |
| optional_test_assign.test | 10 | 0.001349s | 0.001207s | 0.001251s | byte equality observed |
| optional_test_cmp_none.test | 10 | 0.001258s | 0.001192s | 0.001217s | byte equality observed |
| optional_test_constructors.test | 10 | 0.001271s | 0.001238s | 0.001237s | byte equality observed |
| optional_test_conversions_from_U.test | 10 | 0.001258s | 0.001200s | 0.001233s | byte equality observed |
| optional_test_convert_assign.test | 10 | 0.001219s | 0.001229s | 0.001208s | byte equality observed |
| optional_test_convert_from_T.test | 10 | 0.001245s | 0.001237s | 0.001300s | byte equality observed |
| optional_test_emplace.test | 10 | 0.001261s | 0.001298s | 0.001221s | byte equality observed |
| optional_test_empty_braces.test | 10 | 0.001240s | 0.001208s | 0.001245s | byte equality observed |
| optional_test_flat_map.test | 10 | 0.001251s | 0.001217s | 0.001199s | byte equality observed |
| optional_test_hash.test | 10 | 0.001261s | 0.001281s | 0.001216s | byte equality observed |
| optional_test_inplace_factory.test | 10 | 0.001268s | 0.001248s | 0.001251s | byte equality observed |
| optional_test_io.test | 10 | 0.001281s | 0.001253s | 0.001302s | byte equality observed |
| optional_test_make_optional.test | 10 | 0.001291s | 0.001184s | 0.001212s | byte equality observed |
| optional_test_map.test | 10 | 0.001241s | 0.001199s | 0.001224s | byte equality observed |
| optional_test_member_T.test | 10 | 0.001262s | 0.001219s | 0.001250s | byte equality observed |
| optional_test_minimum_requirements.test | 10 | 0.001257s | 0.001288s | 0.001278s | byte equality observed |
| optional_test_move.test | 10 | 0.001278s | 0.001279s | 0.001244s | byte equality observed |
| optional_test_msvc_bug_workaround.test | 10 | 0.001250s | 0.001260s | 0.001241s | byte equality observed |
| optional_test_noexcept_move.test | 10 | 0.000565s | 0.000561s | 0.001226s | byte equality observed |
| optional_test_ranges_find.test | 10 | 0.001285s | 0.001225s | 0.001220s | byte equality observed |
| optional_test_ref_assign_const_int.test | 10 | 0.001249s | 0.001218s | 0.001327s | byte equality observed |
| optional_test_ref_assign_mutable_int.test | 10 | 0.001253s | 0.001203s | 0.001246s | byte equality observed |
| optional_test_ref_assign_portable_minimum.test | 10 | 0.001248s | 0.001217s | 0.001233s | byte equality observed |
| optional_test_ref_convert_assign_const_int.test | 10 | 0.001267s | 0.001282s | 0.001293s | byte equality observed |
| optional_test_ref_convert_assign_mutable_int.test | 10 | 0.001263s | 0.001213s | 0.001227s | byte equality observed |
| optional_test_ref_convert_assign_non_int.test | 10 | 0.001266s | 0.001188s | 0.001220s | byte equality observed |
| optional_test_ref_converting_ctor.test | 10 | 0.001267s | 0.001204s | 0.001238s | byte equality observed |
| optional_test_ref_move.test | 10 | 0.001299s | 0.001268s | 0.001290s | byte equality observed |
| optional_test_ref_portable_minimum.test | 10 | 0.001290s | 0.001226s | 0.001268s | byte equality observed |
| optional_test_ref_to_val.test | 10 | 0.001269s | 0.001251s | 0.001210s | byte equality observed |
| optional_test_static_properties.test | 10 | 0.001230s | 0.001237s | 0.001208s | byte equality observed |
| optional_test_swap.test | 10 | 0.001225s | 0.001232s | 0.001199s | byte equality observed |
| optional_test_tc_base.test | 10 | 0.001246s | 0.001233s | 0.001219s | byte equality observed |
| optional_test_tie.test | 10 | 0.001272s | 0.001307s | 0.001256s | byte equality observed |
| optional_test_value_access.test | 10 | 0.001255s | 0.001275s | 0.001267s | byte equality observed |
| optional_xconfig_NO_LEGAL_CONVERT_FROM_REF_pass.test | 10 | 0.001204s | 0.001194s | 0.001259s | byte equality observed |
| optional_xconfig_NO_PROPER_ASSIGN_FROM_CONST_INT_pass.test | 10 | 0.001217s | 0.001188s | 0.001213s | byte equality observed |
| optional_xconfig_NO_PROPER_CONVERT_FROM_CONST_INT_pass.test | 10 | 0.001214s | 0.001192s | 0.001229s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46045514956).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
