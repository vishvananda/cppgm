# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.705560 | 2.827450 | 2.843182 | 0.004106 | 0.003844 | 0.004275 |
| test_increment.test | RUN | 0.665602 | 2.085195 | 2.476450 | 0.003575 | 0.003800 | 0.004287 |
| test_add.test | RUN | 0.842521 | 3.364720 | 3.583824 | 0.004156 | 0.004664 | 0.004396 |
| test_add_assign.test | RUN | 0.922521 | 3.628557 | 3.703055 | 0.003976 | 0.004316 | 0.004469 |
| test_callable.test | RUN | 1.431144 | 6.082047 | 7.824917 | 0.007637 | 0.007646 | 0.006825 |
| test_reference.test | RUN | 0.716711 | 2.474917 | 2.606601 | 0.004264 | 0.004475 | 0.004394 |
| test_construct.test | RUN | 3.087331 | 28.805654 | 22.166179 | 0.009848 | 0.008176 | 0.008339 |
| test_relaxed.test | RUN | 0.653739 | 1.815945 | 2.329692 | 0.003871 | 0.003773 | 0.003711 |
| test_assign.test | RUN | 7.424802 | 89.463962 | 71.660160 | 0.014165 | 0.008402 | 0.008766 |
| test_construct_ref.test | RUN | 0.850275 | 4.314572 | 3.561881 | 0.005536 | 0.004832 | 0.005573 |
| test_construct_cref.test | RUN | 0.939111 | 4.058221 | 4.494484 | 0.006457 | 0.006552 | 0.006383 |
| test_any_cast.test | RUN | 0.812744 | 4.239465 | 3.456223 | 0.005154 | 0.004944 | 0.005479 |
| test_binding_of.test | RUN | 0.656429 | 1.639565 | 2.143508 | 0.003800 | 0.003877 | 0.003903 |
| test_typeid_of.test | RUN | 0.682436 | 2.400658 | 2.483075 | 0.004325 | 0.004624 | 0.003958 |
| test_nested.test | RUN | 0.766073 | 2.337869 | 2.835102 | 0.003790 | 0.003841 | 0.003982 |
| test_less.test | RUN | 0.944840 | 4.573214 | 4.583394 | 0.005490 | 0.005403 | 0.006005 |
| test_equal.test | RUN | 0.893290 | 4.405980 | 3.743826 | 0.004686 | 0.005425 | 0.005465 |
| test_negate.test | RUN | 0.678813 | 1.753095 | 2.249777 | 0.003605 | 0.003738 | 0.003872 |
| test_dereference.test | RUN | 0.699899 | 2.365509 | 2.701648 | 0.004109 | 0.004053 | 0.003547 |
| test_subscript.test | RUN | 0.728047 | 2.641605 | 2.793200 | 0.004109 | 0.004106 | 0.004095 |
| test_forward_iterator.test | RUN | 0.874979 | 2.697811 | 3.355559 | 0.003966 | 0.003675 | 0.003606 |
| test_tuple.test | RUN | 0.756564 | 2.732283 | 2.700854 | 0.004130 | 0.004025 | 0.004496 |
| test_stream.test | RUN | 0.983915 | 4.363485 | 4.321230 | 0.005598 | 0.005618 | 0.006362 |
| test_deduced.test | RUN | 0.659956 | 1.645780 | 2.280389 | 0.003489 | 0.003596 | 0.003589 |
| test_same_type.test | RUN | 0.720407 | 2.215325 | 2.463963 | 0.003891 | 0.004319 | 0.003770 |
| test_member.test | RUN | 0.950472 | 4.658072 | 4.339648 | 0.006283 | 0.005954 | 0.005931 |
| test_null.test | RUN | 0.643492 | 2.232843 | 2.433678 | 0.003503 | 0.004226 | 0.004024 |
| test_free.test | RUN | 0.809907 | 3.704962 | 2.904657 | 0.004721 | 0.004929 | 0.004364 |
| test_is_empty.test | RUN | 0.656225 | 1.904486 | 2.235769 | 0.003842 | 0.003120 | 0.003252 |
| test_dynamic_any_cast.test | RUN | 1.183127 | 5.479877 | 6.073029 | 0.005632 | 0.006295 | 0.005411 |
| test_limits.test | RUN | 1.112175 | 3.743215 | 3.961957 | 0.003873 | 0.003978 | 0.004141 |
| test_param.test | COMPILE | 0.430566 | 1.011291 | 1.503141 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.424432 | 0.786511 | 1.340536 | — | — | — |
| test_sfinae.test | COMPILE | 0.414456 | 0.847194 | 1.165622 | — | — | — |
| test_interface_order.test | COMPILE | 0.420001 | 0.859017 | 1.238476 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.050658 | 0.081044 | 0.087872 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.408596 | 0.819228 | 1.141278 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.416858 | 0.779296 | 1.243283 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.404008 | 0.731524 | 1.231832 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.404111 | 0.811616 | 1.070442 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.406648 | 0.720298 | 1.218939 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.394459 | 0.809659 | 1.199769 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.402363 | 0.833840 | 1.126599 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.419912 | 0.781555 | 1.291641 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.405662 | 0.787631 | 1.181117 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.401046 | 0.792843 | 1.141974 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.400159 | 0.774998 | 1.162128 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.397546 | 0.806095 | 1.238334 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.405753 | 0.850934 | 1.263284 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.409654 | 0.819591 | 1.095914 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.408112 | 0.858183 | 1.256496 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.399574 | 0.831645 | 1.202021 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.411141 | 0.778462 | 1.083502 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.409327 | 0.830478 | 1.246262 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.411397 | 0.847380 | 1.281634 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.408656 | 0.770207 | 1.088584 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.410610 | 0.840983 | 1.274006 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.414823 | 0.852542 | 1.120608 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.324239 | 0.775965 | 1.252499 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.298133 | 0.535697 | 0.979782 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.969× | 0.965×, 0.974× | 1.001× |
| clang | 0.961× | 0.961×, 0.961× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45850603565).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 8 | 0.002897s | 0.002837s | 0.002792s | byte equality observed |
| test_add_assign.test | 8 | 0.002908s | 0.002852s | 0.002837s | byte equality observed |
| test_any_cast.test | 7 | 0.003363s | 0.003261s | 0.003292s | byte equality observed |
| test_assign.test | 3 | 0.010351s | 0.008578s | 0.009407s | byte equality observed |
| test_binding.test | 9 | 0.002698s | 0.002724s | 0.002635s | byte equality observed |
| test_binding_of.test | 9 | 0.002560s | 0.002512s | 0.002423s | byte equality observed |
| test_callable.test | 6 | 0.004354s | 0.004277s | 0.004238s | byte equality observed |
| test_construct.test | 5 | 0.005770s | 0.005678s | 0.005424s | byte equality observed |
| test_construct_cref.test | 6 | 0.003941s | 0.003907s | 0.003869s | byte equality observed |
| test_construct_ref.test | 7 | 0.003493s | 0.003505s | 0.003517s | byte equality observed |
| test_deduced.test | 9 | 0.002539s | 0.002543s | 0.002489s | byte equality observed |
| test_dereference.test | 8 | 0.002759s | 0.002701s | 0.002685s | byte equality observed |
| test_dynamic_any_cast.test | 6 | 0.003949s | 0.003833s | 0.003809s | byte equality observed |
| test_equal.test | 7 | 0.003304s | 0.003292s | 0.003189s | byte equality observed |
| test_forward_iterator.test | 8 | 0.002763s | 0.002705s | 0.002724s | byte equality observed |
| test_free.test | 7 | 0.003238s | 0.003229s | 0.003190s | byte equality observed |
| test_increment.test | 8 | 0.002651s | 0.002632s | 0.002583s | byte equality observed |
| test_is_empty.test | 8 | 0.002665s | 0.002592s | 0.002480s | byte equality observed |
| test_less.test | 7 | 0.003601s | 0.003567s | 0.003422s | byte equality observed |
| test_limits.test | 8 | 0.002857s | 0.002880s | 0.002799s | byte equality observed |
| test_member.test | 6 | 0.003999s | 0.004044s | 0.003833s | byte equality observed |
| test_negate.test | 9 | 0.002552s | 0.002480s | 0.002469s | byte equality observed |
| test_nested.test | 9 | 0.002667s | 0.002617s | 0.002577s | byte equality observed |
| test_null.test | 8 | 0.002734s | 0.002627s | 0.002640s | byte equality observed |
| test_reference.test | 8 | 0.002834s | 0.002800s | 0.002779s | byte equality observed |
| test_relaxed.test | 8 | 0.002625s | 0.002564s | 0.002523s | byte equality observed |
| test_same_type.test | 8 | 0.002772s | 0.002678s | 0.002703s | byte equality observed |
| test_stream.test | 6 | 0.003775s | 0.003693s | 0.003756s | byte equality observed |
| test_subscript.test | 7 | 0.002883s | 0.002817s | 0.002729s | byte equality observed |
| test_tuple.test | 8 | 0.002868s | 0.002826s | 0.002698s | byte equality observed |
| test_typeid_of.test | 7 | 0.002897s | 0.002789s | 0.002748s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45850603565).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
