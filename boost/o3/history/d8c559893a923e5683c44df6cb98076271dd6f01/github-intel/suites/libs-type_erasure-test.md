# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.419778 | 1.811239 | 1.495360 | 0.002387 | 0.002324 | 0.002304 |
| test_increment.test | RUN | 0.402572 | 1.357866 | 1.294058 | 0.002073 | 0.002225 | 0.001906 |
| test_add.test | RUN | 0.518788 | 2.212108 | 1.924802 | 0.002436 | 0.002512 | 0.002052 |
| test_add_assign.test | RUN | 0.546041 | 2.377273 | 2.000014 | 0.002373 | 0.002332 | 0.002154 |
| test_callable.test | RUN | 0.904077 | 4.133877 | 4.455353 | 0.002952 | 0.003472 | 0.003075 |
| test_reference.test | RUN | 0.429159 | 1.655757 | 1.332223 | 0.002247 | 0.002388 | 0.002199 |
| test_construct.test | RUN | 2.098172 | 20.145646 | 13.644417 | 0.004057 | 0.004327 | 0.003851 |
| test_relaxed.test | RUN | 0.407684 | 1.150460 | 1.188411 | 0.002000 | 0.002336 | 0.002086 |
| test_assign.test | RUN | 5.362554 | 67.049896 | 48.297307 | 0.006913 | 0.004016 | 0.004393 |
| test_construct_ref.test | RUN | 0.506708 | 2.942029 | 1.938555 | 0.002635 | 0.002408 | 0.002649 |
| test_construct_cref.test | RUN | 0.583853 | 2.664679 | 2.561403 | 0.003061 | 0.003136 | 0.002814 |
| test_any_cast.test | RUN | 0.486590 | 2.796510 | 1.911627 | 0.002881 | 0.002552 | 0.002530 |
| test_binding_of.test | RUN | 0.381534 | 1.026685 | 1.152993 | 0.001964 | 0.002278 | 0.002095 |
| test_typeid_of.test | RUN | 0.413295 | 1.560803 | 1.302991 | 0.002247 | 0.002481 | 0.002340 |
| test_nested.test | RUN | 0.437691 | 1.490032 | 1.500729 | 0.002112 | 0.002160 | 0.002247 |
| test_less.test | RUN | 0.588408 | 2.982783 | 2.488266 | 0.002762 | 0.002614 | 0.002668 |
| test_equal.test | RUN | 0.560504 | 2.881956 | 2.056188 | 0.002908 | 0.002536 | 0.002562 |
| test_negate.test | RUN | 0.382459 | 1.119580 | 1.237460 | 0.002050 | 0.002177 | 0.002255 |
| test_dereference.test | RUN | 0.442681 | 1.497854 | 1.413098 | 0.002375 | 0.002582 | 0.002262 |
| test_subscript.test | RUN | 0.444869 | 1.693610 | 1.378256 | 0.002392 | 0.002356 | 0.002046 |
| test_forward_iterator.test | RUN | 0.540872 | 1.901982 | 1.823978 | 0.002469 | 0.002226 | 0.002187 |
| test_tuple.test | RUN | 0.462667 | 1.918991 | 1.468307 | 0.002442 | 0.002271 | 0.002098 |
| test_stream.test | RUN | 0.607037 | 3.246765 | 2.500369 | 0.002768 | 0.002993 | 0.002558 |
| test_deduced.test | RUN | 0.410598 | 1.143404 | 1.184500 | 0.002413 | 0.002396 | 0.002009 |
| test_same_type.test | RUN | 0.440142 | 1.560801 | 1.420480 | 0.002322 | 0.002168 | 0.002204 |
| test_member.test | RUN | 0.572281 | 3.067775 | 2.381712 | 0.002967 | 0.003052 | 0.002862 |
| test_null.test | RUN | 0.428255 | 1.461131 | 1.193137 | 0.002392 | 0.002331 | 0.002242 |
| test_free.test | RUN | 0.494069 | 2.563733 | 1.780965 | 0.002428 | 0.002484 | 0.002646 |
| test_is_empty.test | RUN | 0.387695 | 1.223852 | 1.124304 | 0.002417 | 0.002456 | 0.002135 |
| test_dynamic_any_cast.test | RUN | 0.749560 | 3.680637 | 3.457067 | 0.002933 | 0.002997 | 0.002914 |
| test_limits.test | RUN | 0.660256 | 2.527976 | 2.362775 | 0.002327 | 0.002471 | 0.002369 |
| test_param.test | COMPILE | 0.254088 | 0.676028 | 0.729978 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.249549 | 0.509609 | 0.652979 | — | — | — |
| test_sfinae.test | COMPILE | 0.251092 | 0.528415 | 0.643648 | — | — | — |
| test_interface_order.test | COMPILE | 0.244932 | 0.508724 | 0.659643 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.028088 | 0.049756 | 0.056900 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.235591 | 0.509232 | 0.593278 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.241557 | 0.511982 | 0.609747 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.232255 | 0.500453 | 0.612898 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.236790 | 0.501754 | 0.574598 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.237620 | 0.485681 | 0.610937 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.225535 | 0.484018 | 0.593194 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.236445 | 0.504354 | 0.582749 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.243708 | 0.517478 | 0.625564 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.233339 | 0.476407 | 0.585067 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.226601 | 0.501587 | 0.572206 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.234412 | 0.487756 | 0.594342 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.233812 | 0.485826 | 0.609193 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.234574 | 0.527928 | 0.614453 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.238303 | 0.522653 | 0.620609 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.239110 | 0.529861 | 0.622166 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.232931 | 0.510821 | 0.560920 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.238464 | 0.501339 | 0.618186 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.234868 | 0.503576 | 0.619935 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.238864 | 0.515965 | 0.628983 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.239001 | 0.519358 | 0.607601 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.238012 | 0.503716 | 0.625392 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.241509 | 0.514194 | 0.630601 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.214118 | 0.451807 | 0.567905 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.190398 | 0.508602 | 0.395729 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.974× | 0.974×, 0.975× | 0.996× |
| clang | 0.962× | 0.962×, 0.961× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45697047144).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 10 | 0.001391s | 0.001355s | 0.001336s | byte equality observed |
| test_add_assign.test | 10 | 0.001402s | 0.001351s | 0.001365s | byte equality observed |
| test_any_cast.test | 10 | 0.001492s | 0.001446s | 0.001421s | byte equality observed |
| test_assign.test | 5 | 0.003890s | 0.003279s | 0.003740s | byte equality observed |
| test_binding.test | 10 | 0.001314s | 0.001315s | 0.001264s | byte equality observed |
| test_binding_of.test | 10 | 0.001274s | 0.001252s | 0.001222s | byte equality observed |
| test_callable.test | 10 | 0.001732s | 0.001700s | 0.001685s | byte equality observed |
| test_construct.test | 9 | 0.002224s | 0.002190s | 0.002120s | byte equality observed |
| test_construct_cref.test | 10 | 0.001627s | 0.001626s | 0.001588s | byte equality observed |
| test_construct_ref.test | 10 | 0.001525s | 0.001490s | 0.001469s | byte equality observed |
| test_deduced.test | 10 | 0.001265s | 0.001275s | 0.001252s | byte equality observed |
| test_dereference.test | 10 | 0.001335s | 0.001283s | 0.001249s | byte equality observed |
| test_dynamic_any_cast.test | 10 | 0.001620s | 0.001585s | 0.001582s | byte equality observed |
| test_equal.test | 10 | 0.001468s | 0.001428s | 0.001385s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001332s | 0.001284s | 0.001244s | byte equality observed |
| test_free.test | 9 | 0.001432s | 0.001424s | 0.001395s | byte equality observed |
| test_increment.test | 10 | 0.001306s | 0.001285s | 0.001249s | byte equality observed |
| test_is_empty.test | 10 | 0.001287s | 0.001269s | 0.001259s | byte equality observed |
| test_less.test | 10 | 0.001527s | 0.001512s | 0.001474s | byte equality observed |
| test_limits.test | 10 | 0.001388s | 0.001352s | 0.001333s | byte equality observed |
| test_member.test | 10 | 0.001652s | 0.001644s | 0.001574s | byte equality observed |
| test_negate.test | 10 | 0.001295s | 0.001261s | 0.001237s | byte equality observed |
| test_nested.test | 10 | 0.001307s | 0.001238s | 0.001230s | byte equality observed |
| test_null.test | 10 | 0.001322s | 0.001264s | 0.001255s | byte equality observed |
| test_reference.test | 10 | 0.001318s | 0.001314s | 0.001291s | byte equality observed |
| test_relaxed.test | 10 | 0.001303s | 0.001273s | 0.001275s | byte equality observed |
| test_same_type.test | 10 | 0.001324s | 0.001309s | 0.001309s | byte equality observed |
| test_stream.test | 10 | 0.001579s | 0.001534s | 0.001547s | byte equality observed |
| test_subscript.test | 10 | 0.001325s | 0.001326s | 0.001292s | byte equality observed |
| test_tuple.test | 10 | 0.001326s | 0.001306s | 0.001293s | byte equality observed |
| test_typeid_of.test | 9 | 0.001331s | 0.001325s | 0.001299s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45697047144).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
