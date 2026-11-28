# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.434968 | 1.832588 | 1.505577 | 0.002880 | 0.002298 | 0.002130 |
| test_increment.test | RUN | 0.445237 | 1.366442 | 1.307039 | 0.002674 | 0.002263 | 0.002003 |
| test_add.test | RUN | 0.546825 | 2.232966 | 1.946793 | 0.002559 | 0.002381 | 0.002431 |
| test_add_assign.test | RUN | 0.562973 | 2.402971 | 2.009437 | 0.002990 | 0.002210 | 0.002429 |
| test_callable.test | RUN | 0.948353 | 4.155503 | 4.531851 | 0.003096 | 0.003516 | 0.003235 |
| test_reference.test | RUN | 0.416402 | 1.661733 | 1.354530 | 0.002210 | 0.002473 | 0.002282 |
| test_construct.test | RUN | 2.108282 | 20.732484 | 13.638480 | 0.004410 | 0.004263 | 0.004041 |
| test_relaxed.test | RUN | 0.412660 | 1.164210 | 1.230529 | 0.002208 | 0.002299 | 0.002080 |
| test_assign.test | RUN | 5.628947 | 69.445972 | 50.094916 | 0.006818 | 0.004213 | 0.004510 |
| test_construct_ref.test | RUN | 0.518319 | 2.943401 | 1.996595 | 0.003080 | 0.002725 | 0.002692 |
| test_construct_cref.test | RUN | 0.616140 | 2.662943 | 2.502185 | 0.003073 | 0.003138 | 0.002940 |
| test_any_cast.test | RUN | 0.508470 | 2.828594 | 1.980096 | 0.003062 | 0.002969 | 0.002660 |
| test_binding_of.test | RUN | 0.386838 | 1.085095 | 1.167345 | 0.002412 | 0.002385 | 0.002249 |
| test_typeid_of.test | RUN | 0.432341 | 1.588753 | 1.298518 | 0.002640 | 0.002512 | 0.002182 |
| test_nested.test | RUN | 0.489902 | 1.528802 | 1.535031 | 0.002308 | 0.002419 | 0.002047 |
| test_less.test | RUN | 0.617411 | 3.037539 | 2.472259 | 0.003362 | 0.003162 | 0.002633 |
| test_equal.test | RUN | 0.567851 | 2.908216 | 2.080679 | 0.003011 | 0.002763 | 0.002642 |
| test_negate.test | RUN | 0.410014 | 1.168775 | 1.228344 | 0.002480 | 0.002247 | 0.002198 |
| test_dereference.test | RUN | 0.472567 | 1.522339 | 1.435121 | 0.002476 | 0.002669 | 0.002342 |
| test_subscript.test | RUN | 0.466458 | 1.720526 | 1.507321 | 0.002582 | 0.002752 | 0.002332 |
| test_forward_iterator.test | RUN | 0.560737 | 1.938770 | 1.745906 | 0.002603 | 0.002569 | 0.002065 |
| test_tuple.test | RUN | 0.492659 | 1.938828 | 1.560094 | 0.002849 | 0.002609 | 0.002390 |
| test_stream.test | RUN | 0.642452 | 3.275676 | 2.441584 | 0.003603 | 0.002844 | 0.002902 |
| test_deduced.test | RUN | 0.412910 | 1.147112 | 1.190546 | 0.002336 | 0.002352 | 0.002320 |
| test_same_type.test | RUN | 0.490958 | 1.564287 | 1.465565 | 0.002813 | 0.002422 | 0.002503 |
| test_member.test | RUN | 0.595019 | 3.116461 | 2.446129 | 0.003141 | 0.003204 | 0.002946 |
| test_null.test | RUN | 0.411127 | 1.467317 | 1.181237 | 0.002682 | 0.002647 | 0.002319 |
| test_free.test | RUN | 0.539086 | 2.559902 | 1.809895 | 0.003200 | 0.002690 | 0.002489 |
| test_is_empty.test | RUN | 0.385042 | 1.259958 | 1.116306 | 0.002249 | 0.002156 | 0.002521 |
| test_dynamic_any_cast.test | RUN | 0.748126 | 3.758986 | 3.508389 | 0.003141 | 0.003111 | 0.003067 |
| test_limits.test | RUN | 0.679789 | 2.588592 | 2.363591 | 0.002408 | 0.002617 | 0.002411 |
| test_param.test | COMPILE | 0.264508 | 0.701170 | 0.740487 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.244471 | 0.510743 | 0.624246 | — | — | — |
| test_sfinae.test | COMPILE | 0.255686 | 0.529778 | 0.663979 | — | — | — |
| test_interface_order.test | COMPILE | 0.247570 | 0.522137 | 0.643798 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.029147 | 0.049645 | 0.054972 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.238723 | 0.501014 | 0.624634 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.237782 | 0.508171 | 0.595275 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.240978 | 0.500248 | 0.596462 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.239880 | 0.507193 | 0.622383 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.241142 | 0.501245 | 0.575008 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.235717 | 0.497654 | 0.588272 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.243881 | 0.508005 | 0.615274 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.256682 | 0.528529 | 0.610925 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.240129 | 0.496676 | 0.601750 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.239661 | 0.499360 | 0.617760 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.240233 | 0.499263 | 0.572119 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.236258 | 0.513573 | 0.618361 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.239774 | 0.509043 | 0.635702 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.239736 | 0.533458 | 0.646760 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.239763 | 0.532694 | 0.632723 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.234912 | 0.501799 | 0.573478 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.237945 | 0.524501 | 0.642646 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.237435 | 0.515796 | 0.646250 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.240337 | 0.522290 | 0.621441 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.242103 | 0.526385 | 0.640886 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.243188 | 0.520497 | 0.638074 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.243128 | 0.519556 | 0.611455 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.234053 | 0.346733 | 0.632438 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.217212 | 0.458398 | 0.553527 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.963× | 0.961×, 0.965× | 1.009× |
| clang | 0.967× | 0.962×, 0.971× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46092715613).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 10 | 0.001420s | 0.001358s | 0.001361s | byte equality observed |
| test_add_assign.test | 10 | 0.001382s | 0.001360s | 0.001329s | byte equality observed |
| test_any_cast.test | 10 | 0.001517s | 0.001455s | 0.001442s | byte equality observed |
| test_assign.test | 5 | 0.003874s | 0.003276s | 0.003805s | byte equality observed |
| test_binding.test | 10 | 0.001300s | 0.001323s | 0.001254s | byte equality observed |
| test_binding_of.test | 10 | 0.001292s | 0.001263s | 0.001213s | byte equality observed |
| test_callable.test | 10 | 0.001769s | 0.001721s | 0.001676s | byte equality observed |
| test_construct.test | 8 | 0.002273s | 0.002142s | 0.002208s | byte equality observed |
| test_construct_cref.test | 10 | 0.001635s | 0.001609s | 0.001609s | byte equality observed |
| test_construct_ref.test | 10 | 0.001533s | 0.001499s | 0.001472s | byte equality observed |
| test_deduced.test | 10 | 0.001297s | 0.001258s | 0.001261s | byte equality observed |
| test_dereference.test | 10 | 0.001333s | 0.001308s | 0.001272s | byte equality observed |
| test_dynamic_any_cast.test | 10 | 0.001616s | 0.001607s | 0.001615s | byte equality observed |
| test_equal.test | 10 | 0.001482s | 0.001444s | 0.001411s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001324s | 0.001315s | 0.001265s | byte equality observed |
| test_free.test | 10 | 0.001420s | 0.001452s | 0.001391s | byte equality observed |
| test_increment.test | 10 | 0.001344s | 0.001320s | 0.001278s | byte equality observed |
| test_is_empty.test | 10 | 0.001296s | 0.001275s | 0.001247s | byte equality observed |
| test_less.test | 10 | 0.001539s | 0.001502s | 0.001451s | byte equality observed |
| test_limits.test | 10 | 0.001382s | 0.001372s | 0.001341s | byte equality observed |
| test_member.test | 10 | 0.001659s | 0.001635s | 0.001570s | byte equality observed |
| test_negate.test | 10 | 0.001280s | 0.001267s | 0.001235s | byte equality observed |
| test_nested.test | 10 | 0.001326s | 0.001279s | 0.001258s | byte equality observed |
| test_null.test | 10 | 0.001316s | 0.001286s | 0.001271s | byte equality observed |
| test_reference.test | 10 | 0.001328s | 0.001317s | 0.001273s | byte equality observed |
| test_relaxed.test | 10 | 0.001289s | 0.001304s | 0.001256s | byte equality observed |
| test_same_type.test | 10 | 0.001334s | 0.001291s | 0.001278s | byte equality observed |
| test_stream.test | 10 | 0.001564s | 0.001544s | 0.001533s | byte equality observed |
| test_subscript.test | 10 | 0.001361s | 0.001323s | 0.001276s | byte equality observed |
| test_tuple.test | 10 | 0.001350s | 0.001272s | 0.001295s | byte equality observed |
| test_typeid_of.test | 10 | 0.001355s | 0.001329s | 0.001293s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46092715613).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
