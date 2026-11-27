# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.420234 | 1.746155 | 1.477786 | 0.002186 | 0.002118 | 0.002061 |
| test_increment.test | RUN | 0.422798 | 1.323510 | 1.268843 | 0.002164 | 0.002139 | 0.002118 |
| test_add.test | RUN | 0.515060 | 2.151604 | 1.913518 | 0.002252 | 0.002265 | 0.002095 |
| test_add_assign.test | RUN | 0.539647 | 2.323663 | 1.917942 | 0.002274 | 0.002455 | 0.001939 |
| test_callable.test | RUN | 0.931401 | 4.036459 | 4.264695 | 0.003230 | 0.003361 | 0.002873 |
| test_reference.test | RUN | 0.409918 | 1.607001 | 1.363455 | 0.002112 | 0.002145 | 0.002124 |
| test_construct.test | RUN | 2.028621 | 18.794963 | 13.226448 | 0.004006 | 0.004162 | 0.003824 |
| test_relaxed.test | RUN | 0.398898 | 1.144696 | 1.171693 | 0.002127 | 0.002198 | 0.001868 |
| test_assign.test | RUN | 5.245491 | 63.198799 | 46.805983 | 0.006291 | 0.003957 | 0.004476 |
| test_construct_ref.test | RUN | 0.508651 | 2.836450 | 1.936086 | 0.002760 | 0.002682 | 0.002453 |
| test_construct_cref.test | RUN | 0.592162 | 2.656757 | 2.451352 | 0.002849 | 0.003057 | 0.002782 |
| test_any_cast.test | RUN | 0.496989 | 2.797540 | 1.879396 | 0.002652 | 0.002753 | 0.002391 |
| test_binding_of.test | RUN | 0.383703 | 1.056861 | 1.086732 | 0.002078 | 0.002330 | 0.001829 |
| test_typeid_of.test | RUN | 0.412151 | 1.541585 | 1.254535 | 0.002313 | 0.002354 | 0.001954 |
| test_nested.test | RUN | 0.446098 | 1.494001 | 1.429180 | 0.002319 | 0.002538 | 0.001917 |
| test_less.test | RUN | 0.614448 | 2.950766 | 2.369818 | 0.002864 | 0.002831 | 0.002548 |
| test_equal.test | RUN | 0.546128 | 2.819512 | 2.013002 | 0.002708 | 0.002666 | 0.002249 |
| test_negate.test | RUN | 0.394165 | 1.129916 | 1.150374 | 0.002290 | 0.002321 | 0.001919 |
| test_dereference.test | RUN | 0.446582 | 1.476959 | 1.361966 | 0.002092 | 0.002453 | 0.001775 |
| test_subscript.test | RUN | 0.440565 | 1.667214 | 1.442577 | 0.002404 | 0.002448 | 0.002127 |
| test_forward_iterator.test | RUN | 0.524687 | 1.870085 | 1.772149 | 0.002185 | 0.002326 | 0.002052 |
| test_tuple.test | RUN | 0.472919 | 1.879964 | 1.518756 | 0.002563 | 0.002435 | 0.002169 |
| test_stream.test | RUN | 0.604324 | 3.082802 | 2.331774 | 0.002834 | 0.002830 | 0.002577 |
| test_deduced.test | RUN | 0.392466 | 1.107653 | 1.132578 | 0.001958 | 0.001999 | 0.001952 |
| test_same_type.test | RUN | 0.449389 | 1.440446 | 1.380697 | 0.002594 | 0.002400 | 0.001967 |
| test_member.test | RUN | 0.570392 | 2.987959 | 2.300908 | 0.002669 | 0.003156 | 0.002639 |
| test_null.test | RUN | 0.396266 | 1.426694 | 1.161053 | 0.002307 | 0.002070 | 0.002064 |
| test_free.test | RUN | 0.501333 | 2.503778 | 1.697707 | 0.003089 | 0.002499 | 0.002185 |
| test_is_empty.test | RUN | 0.369417 | 1.184162 | 1.094711 | 0.002213 | 0.002044 | 0.001964 |
| test_dynamic_any_cast.test | RUN | 0.730102 | 3.538952 | 3.326776 | 0.002820 | 0.003247 | 0.002760 |
| test_limits.test | RUN | 0.653674 | 2.491880 | 2.234079 | 0.002224 | 0.002392 | 0.002371 |
| test_param.test | COMPILE | 0.247611 | 0.683399 | 0.706664 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.241558 | 0.505061 | 0.627788 | — | — | — |
| test_sfinae.test | COMPILE | 0.241258 | 0.516239 | 0.639313 | — | — | — |
| test_interface_order.test | COMPILE | 0.240464 | 0.508464 | 0.646380 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.028747 | 0.047653 | 0.055772 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.239058 | 0.497731 | 0.577583 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.231641 | 0.497074 | 0.586357 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.230811 | 0.496341 | 0.596187 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.232310 | 0.479245 | 0.574700 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.234665 | 0.482515 | 0.601454 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.222305 | 0.478241 | 0.582012 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.230726 | 0.491475 | 0.581935 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.240599 | 0.504382 | 0.622846 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.232290 | 0.463522 | 0.584436 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.228823 | 0.485395 | 0.568706 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.231028 | 0.483100 | 0.578968 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.228911 | 0.493013 | 0.595645 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.235010 | 0.515297 | 0.606710 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.230008 | 0.511786 | 0.601173 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.234721 | 0.524762 | 0.617248 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.229470 | 0.494522 | 0.560701 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.235837 | 0.500597 | 0.608041 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.229216 | 0.506090 | 0.618010 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.232429 | 0.500794 | 0.606123 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.231580 | 0.495551 | 0.608203 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.235297 | 0.506409 | 0.612465 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.230062 | 0.497634 | 0.610393 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.205994 | 0.399314 | 0.606603 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.184715 | 0.403010 | 0.498208 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.967× | 0.968×, 0.966× | 0.994× |
| clang | 0.962× | 0.959×, 0.964× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46032707836).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 10 | 0.001383s | 0.001346s | 0.001334s | byte equality observed |
| test_add_assign.test | 10 | 0.001365s | 0.001367s | 0.001315s | byte equality observed |
| test_any_cast.test | 10 | 0.001481s | 0.001456s | 0.001428s | byte equality observed |
| test_assign.test | 5 | 0.003925s | 0.003249s | 0.003754s | byte equality observed |
| test_binding.test | 10 | 0.001300s | 0.001286s | 0.001231s | byte equality observed |
| test_binding_of.test | 10 | 0.001279s | 0.001241s | 0.001221s | byte equality observed |
| test_callable.test | 10 | 0.001745s | 0.001710s | 0.001639s | byte equality observed |
| test_construct.test | 8 | 0.002243s | 0.002174s | 0.002118s | byte equality observed |
| test_construct_cref.test | 10 | 0.001634s | 0.001607s | 0.001582s | byte equality observed |
| test_construct_ref.test | 10 | 0.001512s | 0.001495s | 0.001432s | byte equality observed |
| test_deduced.test | 10 | 0.001253s | 0.001246s | 0.001219s | byte equality observed |
| test_dereference.test | 10 | 0.001309s | 0.001254s | 0.001278s | byte equality observed |
| test_dynamic_any_cast.test | 10 | 0.001641s | 0.001596s | 0.001615s | byte equality observed |
| test_equal.test | 10 | 0.001455s | 0.001407s | 0.001407s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001294s | 0.001273s | 0.001259s | byte equality observed |
| test_free.test | 10 | 0.001476s | 0.001434s | 0.001410s | byte equality observed |
| test_increment.test | 10 | 0.001277s | 0.001263s | 0.001266s | byte equality observed |
| test_is_empty.test | 10 | 0.001302s | 0.001253s | 0.001223s | byte equality observed |
| test_less.test | 10 | 0.001495s | 0.001496s | 0.001459s | byte equality observed |
| test_limits.test | 10 | 0.001385s | 0.001354s | 0.001335s | byte equality observed |
| test_member.test | 10 | 0.001640s | 0.001607s | 0.001591s | byte equality observed |
| test_negate.test | 10 | 0.001259s | 0.001255s | 0.001248s | byte equality observed |
| test_nested.test | 10 | 0.001276s | 0.001260s | 0.001233s | byte equality observed |
| test_null.test | 10 | 0.001322s | 0.001285s | 0.001252s | byte equality observed |
| test_reference.test | 10 | 0.001322s | 0.001286s | 0.001265s | byte equality observed |
| test_relaxed.test | 10 | 0.001301s | 0.001256s | 0.001200s | byte equality observed |
| test_same_type.test | 10 | 0.001314s | 0.001283s | 0.001259s | byte equality observed |
| test_stream.test | 10 | 0.001582s | 0.001562s | 0.001512s | byte equality observed |
| test_subscript.test | 10 | 0.001347s | 0.001303s | 0.001298s | byte equality observed |
| test_tuple.test | 10 | 0.001330s | 0.001300s | 0.001288s | byte equality observed |
| test_typeid_of.test | 10 | 0.001321s | 0.001307s | 0.001280s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46032707836).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
