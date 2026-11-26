# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.416222 | 1.761955 | 1.469858 | 0.002384 | 0.002149 | 0.001970 |
| test_increment.test | RUN | 0.398747 | 1.353257 | 1.277633 | 0.002148 | 0.002049 | 0.002069 |
| test_add.test | RUN | 0.506097 | 2.191651 | 1.907490 | 0.002354 | 0.002196 | 0.002184 |
| test_add_assign.test | RUN | 0.539077 | 2.320462 | 1.957309 | 0.002400 | 0.001932 | 0.002131 |
| test_callable.test | RUN | 0.886940 | 4.052471 | 4.336356 | 0.003512 | 0.003277 | 0.002904 |
| test_reference.test | RUN | 0.416074 | 1.629181 | 1.358713 | 0.002196 | 0.002398 | 0.002195 |
| test_construct.test | RUN | 2.081742 | 19.312470 | 13.350278 | 0.004463 | 0.003858 | 0.003768 |
| test_relaxed.test | RUN | 0.395550 | 1.134710 | 1.202273 | 0.002004 | 0.002295 | 0.002021 |
| test_assign.test | RUN | 5.374159 | 63.348210 | 46.976012 | 0.006576 | 0.003770 | 0.004316 |
| test_construct_ref.test | RUN | 0.501846 | 2.807925 | 1.995284 | 0.002744 | 0.002465 | 0.002454 |
| test_construct_cref.test | RUN | 0.576502 | 2.673136 | 2.438445 | 0.002962 | 0.002914 | 0.002639 |
| test_any_cast.test | RUN | 0.482457 | 2.747461 | 1.932276 | 0.002691 | 0.002480 | 0.002480 |
| test_binding_of.test | RUN | 0.370565 | 1.062094 | 1.128335 | 0.001977 | 0.002066 | 0.001915 |
| test_typeid_of.test | RUN | 0.413634 | 1.489292 | 1.270027 | 0.002357 | 0.002361 | 0.002108 |
| test_nested.test | RUN | 0.443128 | 1.469336 | 1.473563 | 0.002285 | 0.002074 | 0.002028 |
| test_less.test | RUN | 0.581217 | 2.955620 | 2.405095 | 0.002566 | 0.002686 | 0.002746 |
| test_equal.test | RUN | 0.568527 | 2.855202 | 2.024481 | 0.002471 | 0.002735 | 0.002454 |
| test_negate.test | RUN | 0.381866 | 1.118837 | 1.202368 | 0.002306 | 0.002100 | 0.002049 |
| test_dereference.test | RUN | 0.431807 | 1.495948 | 1.376360 | 0.002377 | 0.002104 | 0.002141 |
| test_subscript.test | RUN | 0.465917 | 1.677765 | 1.328609 | 0.002250 | 0.002224 | 0.001806 |
| test_forward_iterator.test | RUN | 0.521034 | 1.878861 | 1.784590 | 0.002259 | 0.002442 | 0.002161 |
| test_tuple.test | RUN | 0.453823 | 1.908486 | 1.521273 | 0.002240 | 0.002497 | 0.002200 |
| test_stream.test | RUN | 0.645219 | 3.107990 | 2.334993 | 0.002795 | 0.002942 | 0.002460 |
| test_deduced.test | RUN | 0.377787 | 1.117276 | 1.138250 | 0.001910 | 0.002175 | 0.001863 |
| test_same_type.test | RUN | 0.432368 | 1.494319 | 1.404572 | 0.002139 | 0.002223 | 0.002111 |
| test_member.test | RUN | 0.578264 | 3.025678 | 2.324346 | 0.002817 | 0.003065 | 0.002586 |
| test_null.test | RUN | 0.400764 | 1.449582 | 1.160639 | 0.002107 | 0.002237 | 0.002063 |
| test_free.test | RUN | 0.528431 | 2.497164 | 1.728409 | 0.002401 | 0.002622 | 0.002438 |
| test_is_empty.test | RUN | 0.368755 | 1.227949 | 1.112233 | 0.002169 | 0.002146 | 0.002122 |
| test_dynamic_any_cast.test | RUN | 0.749201 | 3.615700 | 3.390388 | 0.002907 | 0.003035 | 0.002892 |
| test_limits.test | RUN | 0.645643 | 2.525972 | 2.286516 | 0.002173 | 0.002306 | 0.002393 |
| test_param.test | COMPILE | 0.255519 | 0.684228 | 0.696424 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.248828 | 0.502737 | 0.630437 | — | — | — |
| test_sfinae.test | COMPILE | 0.246546 | 0.520730 | 0.673316 | — | — | — |
| test_interface_order.test | COMPILE | 0.240754 | 0.516094 | 0.662207 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.027597 | 0.048073 | 0.051698 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.234640 | 0.498316 | 0.575488 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.235850 | 0.500607 | 0.605581 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.234090 | 0.494068 | 0.570707 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.229850 | 0.492772 | 0.599511 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.230925 | 0.484694 | 0.598582 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.226582 | 0.488066 | 0.573761 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.230566 | 0.488587 | 0.600716 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.241672 | 0.502111 | 0.633658 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.228880 | 0.488614 | 0.559332 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.229990 | 0.470915 | 0.605325 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.231055 | 0.482159 | 0.605994 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.229702 | 0.502436 | 0.608459 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.231780 | 0.535584 | 0.631672 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.236192 | 0.514438 | 0.595536 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.234789 | 0.524707 | 0.623640 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.228886 | 0.493317 | 0.596610 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.233717 | 0.498988 | 0.620718 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.237852 | 0.508696 | 0.630459 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.243207 | 0.514744 | 0.638639 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.236195 | 0.497267 | 0.602928 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.234297 | 0.506676 | 0.623045 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.226176 | 0.507319 | 0.630960 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.180589 | 0.491693 | 0.627808 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.163874 | 0.415048 | 0.416852 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.973× | 0.972×, 0.974× | 0.994× |
| clang | 0.964× | 0.962×, 0.965× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45739944580).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 10 | 0.001355s | 0.001329s | 0.001308s | byte equality observed |
| test_add_assign.test | 10 | 0.001379s | 0.001291s | 0.001307s | byte equality observed |
| test_any_cast.test | 10 | 0.001454s | 0.001435s | 0.001448s | byte equality observed |
| test_assign.test | 5 | 0.003920s | 0.003186s | 0.003645s | byte equality observed |
| test_binding.test | 10 | 0.001258s | 0.001275s | 0.001258s | byte equality observed |
| test_binding_of.test | 10 | 0.001233s | 0.001221s | 0.001178s | byte equality observed |
| test_callable.test | 10 | 0.001706s | 0.001681s | 0.001676s | byte equality observed |
| test_construct.test | 8 | 0.002185s | 0.002133s | 0.002095s | byte equality observed |
| test_construct_cref.test | 10 | 0.001629s | 0.001589s | 0.001534s | byte equality observed |
| test_construct_ref.test | 10 | 0.001455s | 0.001496s | 0.001455s | byte equality observed |
| test_deduced.test | 10 | 0.001259s | 0.001225s | 0.001220s | byte equality observed |
| test_dereference.test | 10 | 0.001300s | 0.001281s | 0.001259s | byte equality observed |
| test_dynamic_any_cast.test | 10 | 0.001616s | 0.001623s | 0.001562s | byte equality observed |
| test_equal.test | 10 | 0.001407s | 0.001406s | 0.001351s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001297s | 0.001299s | 0.001238s | byte equality observed |
| test_free.test | 10 | 0.001394s | 0.001362s | 0.001347s | byte equality observed |
| test_increment.test | 10 | 0.001315s | 0.001273s | 0.001262s | byte equality observed |
| test_is_empty.test | 10 | 0.001265s | 0.001226s | 0.001237s | byte equality observed |
| test_less.test | 10 | 0.001490s | 0.001456s | 0.001441s | byte equality observed |
| test_limits.test | 10 | 0.001353s | 0.001324s | 0.001295s | byte equality observed |
| test_member.test | 10 | 0.001609s | 0.001590s | 0.001573s | byte equality observed |
| test_negate.test | 10 | 0.001254s | 0.001229s | 0.001204s | byte equality observed |
| test_nested.test | 10 | 0.001268s | 0.001270s | 0.001200s | byte equality observed |
| test_null.test | 10 | 0.001274s | 0.001274s | 0.001243s | byte equality observed |
| test_reference.test | 10 | 0.001297s | 0.001281s | 0.001237s | byte equality observed |
| test_relaxed.test | 10 | 0.001277s | 0.001229s | 0.001222s | byte equality observed |
| test_same_type.test | 10 | 0.001279s | 0.001265s | 0.001244s | byte equality observed |
| test_stream.test | 10 | 0.001547s | 0.001520s | 0.001492s | byte equality observed |
| test_subscript.test | 10 | 0.001320s | 0.001300s | 0.001292s | byte equality observed |
| test_tuple.test | 10 | 0.001306s | 0.001290s | 0.001246s | byte equality observed |
| test_typeid_of.test | 10 | 0.001311s | 0.001299s | 0.001260s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45739944580).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
