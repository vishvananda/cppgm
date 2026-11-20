# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.409029 | 1.821005 | 1.477540 | 0.002299 | 0.002411 | 0.002129 |
| test_increment.test | RUN | 0.390843 | 1.384595 | 1.279104 | 0.002061 | 0.002176 | 0.001957 |
| test_add.test | RUN | 0.496485 | 2.234481 | 1.927022 | 0.002358 | 0.002394 | 0.002071 |
| test_add_assign.test | RUN | 0.528818 | 2.413759 | 2.015606 | 0.002238 | 0.002469 | 0.002006 |
| test_callable.test | RUN | 0.853401 | 4.185634 | 4.394865 | 0.003013 | 0.003343 | 0.003111 |
| test_reference.test | RUN | 0.410646 | 1.691905 | 1.373729 | 0.002023 | 0.002434 | 0.002138 |
| test_construct.test | RUN | 2.022436 | 20.823427 | 13.510649 | 0.003996 | 0.004061 | 0.003868 |
| test_relaxed.test | RUN | 0.388647 | 1.166325 | 1.209823 | 0.001885 | 0.002166 | 0.002168 |
| test_assign.test | RUN | 5.275179 | 67.472434 | 46.917111 | 0.006305 | 0.003974 | 0.004255 |
| test_construct_ref.test | RUN | 0.516532 | 2.922210 | 1.935366 | 0.002444 | 0.002854 | 0.002499 |
| test_construct_cref.test | RUN | 0.568539 | 2.725212 | 2.529079 | 0.002811 | 0.002999 | 0.002754 |
| test_any_cast.test | RUN | 0.479608 | 2.823634 | 1.908564 | 0.002446 | 0.002712 | 0.002397 |
| test_binding_of.test | RUN | 0.379045 | 1.084047 | 1.106650 | 0.002149 | 0.002367 | 0.001977 |
| test_typeid_of.test | RUN | 0.404109 | 1.588425 | 1.319724 | 0.002350 | 0.002550 | 0.002200 |
| test_nested.test | RUN | 0.434704 | 1.514655 | 1.484189 | 0.002220 | 0.002164 | 0.002025 |
| test_less.test | RUN | 0.602578 | 3.034036 | 2.466251 | 0.002598 | 0.002794 | 0.002510 |
| test_equal.test | RUN | 0.530626 | 2.896875 | 1.992814 | 0.002612 | 0.002864 | 0.002353 |
| test_negate.test | RUN | 0.388629 | 1.113723 | 1.171847 | 0.002098 | 0.002375 | 0.002078 |
| test_dereference.test | RUN | 0.439003 | 1.494218 | 1.368173 | 0.002010 | 0.002329 | 0.001923 |
| test_subscript.test | RUN | 0.432884 | 1.684754 | 1.469831 | 0.002330 | 0.002369 | 0.002186 |
| test_forward_iterator.test | RUN | 0.524974 | 1.929896 | 1.600090 | 0.002250 | 0.002292 | 0.001820 |
| test_tuple.test | RUN | 0.479497 | 1.911924 | 1.542558 | 0.002448 | 0.002559 | 0.002241 |
| test_stream.test | RUN | 0.600343 | 3.212075 | 2.464307 | 0.002997 | 0.003023 | 0.002529 |
| test_deduced.test | RUN | 0.381331 | 1.119198 | 1.135293 | 0.002044 | 0.002302 | 0.002014 |
| test_same_type.test | RUN | 0.447762 | 1.511200 | 1.442868 | 0.002274 | 0.002407 | 0.001982 |
| test_member.test | RUN | 0.563837 | 3.073053 | 2.287860 | 0.002732 | 0.003350 | 0.002734 |
| test_null.test | RUN | 0.388395 | 1.412799 | 1.228675 | 0.002083 | 0.002408 | 0.001942 |
| test_free.test | RUN | 0.496593 | 2.557668 | 1.754814 | 0.002561 | 0.002862 | 0.002467 |
| test_is_empty.test | RUN | 0.362924 | 1.263016 | 1.151335 | 0.002188 | 0.002286 | 0.001943 |
| test_dynamic_any_cast.test | RUN | 0.729070 | 3.766525 | 3.303030 | 0.002766 | 0.003160 | 0.002725 |
| test_limits.test | RUN | 0.624240 | 2.580202 | 2.320594 | 0.002125 | 0.002553 | 0.002069 |
| test_param.test | COMPILE | 0.247878 | 0.695997 | 0.728469 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.243541 | 0.519137 | 0.640886 | — | — | — |
| test_sfinae.test | COMPILE | 0.240778 | 0.529014 | 0.644159 | — | — | — |
| test_interface_order.test | COMPILE | 0.236941 | 0.514898 | 0.646794 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.028118 | 0.048770 | 0.051773 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.228028 | 0.508559 | 0.597428 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.226118 | 0.513997 | 0.577426 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.229060 | 0.499485 | 0.607532 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.230002 | 0.514329 | 0.596242 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.225332 | 0.500967 | 0.566131 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.220196 | 0.491017 | 0.582068 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.227646 | 0.514213 | 0.564413 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.239242 | 0.523046 | 0.619924 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.226566 | 0.497225 | 0.586742 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.222300 | 0.499711 | 0.591758 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.227275 | 0.500062 | 0.585741 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.224861 | 0.511697 | 0.606348 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.228983 | 0.512379 | 0.594321 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.226794 | 0.536235 | 0.625332 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.231089 | 0.543423 | 0.620214 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.222491 | 0.513996 | 0.574688 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.227596 | 0.511176 | 0.619130 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.226280 | 0.517790 | 0.619587 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.231100 | 0.509673 | 0.600992 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.233440 | 0.509558 | 0.625938 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.231590 | 0.518018 | 0.629379 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.231692 | 0.522727 | 0.634507 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.193426 | 0.512695 | 0.625857 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.192642 | 0.487848 | 0.548391 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.965× | 0.961×, 0.969× | 1.004× |
| clang | 0.967× | 0.970×, 0.963× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44774088589).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 10 | 0.001380s | 0.001339s | 0.001340s | byte equality observed |
| test_add_assign.test | 10 | 0.001376s | 0.001357s | 0.001342s | byte equality observed |
| test_any_cast.test | 10 | 0.001491s | 0.001479s | 0.001429s | byte equality observed |
| test_assign.test | 5 | 0.003883s | 0.003184s | 0.003722s | byte equality observed |
| test_binding.test | 10 | 0.001312s | 0.001289s | 0.001230s | byte equality observed |
| test_binding_of.test | 10 | 0.001271s | 0.001254s | 0.001210s | byte equality observed |
| test_callable.test | 10 | 0.001739s | 0.001695s | 0.001664s | byte equality observed |
| test_construct.test | 9 | 0.002224s | 0.002158s | 0.002117s | byte equality observed |
| test_construct_cref.test | 10 | 0.001604s | 0.001566s | 0.001567s | byte equality observed |
| test_construct_ref.test | 9 | 0.001507s | 0.001494s | 0.001462s | byte equality observed |
| test_deduced.test | 10 | 0.001263s | 0.001227s | 0.001224s | byte equality observed |
| test_dereference.test | 10 | 0.001313s | 0.001285s | 0.001289s | byte equality observed |
| test_dynamic_any_cast.test | 10 | 0.001622s | 0.001590s | 0.001568s | byte equality observed |
| test_equal.test | 10 | 0.001437s | 0.001438s | 0.001431s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001301s | 0.001302s | 0.001264s | byte equality observed |
| test_free.test | 10 | 0.001404s | 0.001394s | 0.001384s | byte equality observed |
| test_increment.test | 10 | 0.001312s | 0.001298s | 0.001239s | byte equality observed |
| test_is_empty.test | 9 | 0.001294s | 0.001249s | 0.001238s | byte equality observed |
| test_less.test | 8 | 0.001515s | 0.001476s | 0.001456s | byte equality observed |
| test_limits.test | 10 | 0.001386s | 0.001367s | 0.001326s | byte equality observed |
| test_member.test | 10 | 0.001632s | 0.001565s | 0.001564s | byte equality observed |
| test_negate.test | 10 | 0.001275s | 0.001241s | 0.001242s | byte equality observed |
| test_nested.test | 10 | 0.001311s | 0.001228s | 0.001264s | byte equality observed |
| test_null.test | 10 | 0.001279s | 0.001265s | 0.001278s | byte equality observed |
| test_reference.test | 10 | 0.001318s | 0.001281s | 0.001267s | byte equality observed |
| test_relaxed.test | 10 | 0.001280s | 0.001260s | 0.001229s | byte equality observed |
| test_same_type.test | 10 | 0.001309s | 0.001272s | 0.001253s | byte equality observed |
| test_stream.test | 10 | 0.001579s | 0.001531s | 0.001521s | byte equality observed |
| test_subscript.test | 10 | 0.001336s | 0.001313s | 0.001289s | byte equality observed |
| test_tuple.test | 10 | 0.001328s | 0.001260s | 0.001300s | byte equality observed |
| test_typeid_of.test | 10 | 0.001338s | 0.001311s | 0.001287s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44774088589).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
