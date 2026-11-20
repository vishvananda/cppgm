# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.431784 | 1.820256 | 1.508124 | 0.002732 | 0.002306 | 0.002256 |
| test_increment.test | RUN | 0.433687 | 1.347655 | 1.341854 | 0.002460 | 0.002206 | 0.002331 |
| test_add.test | RUN | 0.534752 | 2.184340 | 2.011252 | 0.002283 | 0.002315 | 0.002265 |
| test_add_assign.test | RUN | 0.551411 | 2.336070 | 2.031791 | 0.002718 | 0.002293 | 0.002078 |
| test_callable.test | RUN | 0.960186 | 4.069432 | 4.491609 | 0.003326 | 0.003064 | 0.003186 |
| test_reference.test | RUN | 0.423960 | 1.654957 | 1.413040 | 0.002497 | 0.002347 | 0.002206 |
| test_construct.test | RUN | 2.107547 | 19.965083 | 14.113081 | 0.004232 | 0.003898 | 0.004106 |
| test_relaxed.test | RUN | 0.418120 | 1.156513 | 1.221312 | 0.002293 | 0.002142 | 0.002176 |
| test_assign.test | RUN | 5.542898 | 65.560127 | 49.768243 | 0.006820 | 0.003985 | 0.004449 |
| test_construct_ref.test | RUN | 0.516354 | 2.862961 | 2.038362 | 0.003060 | 0.002561 | 0.002768 |
| test_construct_cref.test | RUN | 0.610721 | 2.702514 | 2.555368 | 0.003154 | 0.003134 | 0.003037 |
| test_any_cast.test | RUN | 0.511258 | 2.778365 | 1.958101 | 0.002990 | 0.002645 | 0.002645 |
| test_binding_of.test | RUN | 0.385503 | 1.060622 | 1.141934 | 0.002241 | 0.002202 | 0.002180 |
| test_typeid_of.test | RUN | 0.433802 | 1.499159 | 1.329922 | 0.002419 | 0.002422 | 0.002495 |
| test_nested.test | RUN | 0.485792 | 1.523606 | 1.527250 | 0.002418 | 0.002233 | 0.002218 |
| test_less.test | RUN | 0.605513 | 2.993108 | 2.550930 | 0.002849 | 0.002667 | 0.002602 |
| test_equal.test | RUN | 0.567440 | 2.886569 | 2.060518 | 0.002677 | 0.002734 | 0.002325 |
| test_negate.test | RUN | 0.421354 | 1.127153 | 1.209429 | 0.002615 | 0.002201 | 0.002138 |
| test_dereference.test | RUN | 0.437604 | 1.508153 | 1.403329 | 0.002527 | 0.002377 | 0.002304 |
| test_subscript.test | RUN | 0.460139 | 1.703975 | 1.536758 | 0.002402 | 0.002451 | 0.002312 |
| test_forward_iterator.test | RUN | 0.544288 | 1.909770 | 1.646894 | 0.002512 | 0.002351 | 0.002529 |
| test_tuple.test | RUN | 0.483408 | 1.898404 | 1.599745 | 0.002759 | 0.002576 | 0.002397 |
| test_stream.test | RUN | 0.633196 | 3.168714 | 2.554650 | 0.003039 | 0.002770 | 0.002666 |
| test_deduced.test | RUN | 0.403948 | 1.115359 | 1.166862 | 0.002247 | 0.002308 | 0.002223 |
| test_same_type.test | RUN | 0.477833 | 1.477127 | 1.486298 | 0.002595 | 0.002231 | 0.002142 |
| test_member.test | RUN | 0.618425 | 3.045455 | 2.321524 | 0.002913 | 0.002783 | 0.002928 |
| test_null.test | RUN | 0.401419 | 1.423121 | 1.274136 | 0.002703 | 0.002330 | 0.002206 |
| test_free.test | RUN | 0.517184 | 2.510732 | 1.831828 | 0.003079 | 0.002723 | 0.002678 |
| test_is_empty.test | RUN | 0.388360 | 1.227794 | 1.204458 | 0.002291 | 0.002220 | 0.002321 |
| test_dynamic_any_cast.test | RUN | 0.764988 | 3.609845 | 3.401262 | 0.002888 | 0.003031 | 0.002863 |
| test_limits.test | RUN | 0.678524 | 2.522191 | 2.425404 | 0.002324 | 0.002410 | 0.002461 |
| test_param.test | COMPILE | 0.266749 | 0.683361 | 0.751336 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.249800 | 0.501660 | 0.666682 | — | — | — |
| test_sfinae.test | COMPILE | 0.251227 | 0.530739 | 0.671054 | — | — | — |
| test_interface_order.test | COMPILE | 0.249883 | 0.513593 | 0.665600 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.030563 | 0.048312 | 0.053788 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.243490 | 0.498704 | 0.611889 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.244419 | 0.501081 | 0.583505 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.238250 | 0.491839 | 0.620939 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.244416 | 0.503012 | 0.622225 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.242067 | 0.495422 | 0.573408 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.231223 | 0.491801 | 0.597908 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.237560 | 0.498929 | 0.610974 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.254756 | 0.513471 | 0.608228 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.240452 | 0.491489 | 0.601305 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.238319 | 0.477312 | 0.611358 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.236103 | 0.490771 | 0.567095 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.241395 | 0.496920 | 0.615882 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.241818 | 0.534694 | 0.626700 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.244918 | 0.519867 | 0.632709 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.240834 | 0.530823 | 0.635551 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.244026 | 0.500684 | 0.592696 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.245544 | 0.511257 | 0.599385 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.242551 | 0.510013 | 0.633486 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.241223 | 0.518838 | 0.635151 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.246711 | 0.512563 | 0.621288 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.246292 | 0.506667 | 0.633418 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.240766 | 0.511433 | 0.633060 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.240038 | 0.509355 | 0.601137 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.207347 | 0.417391 | 0.528629 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.967× | 0.966×, 0.968× | 0.996× |
| clang | 0.959× | 0.955×, 0.964× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44656576225).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 10 | 0.001385s | 0.001366s | 0.001352s | byte equality observed |
| test_add_assign.test | 10 | 0.001419s | 0.001360s | 0.001377s | byte equality observed |
| test_any_cast.test | 10 | 0.001488s | 0.001438s | 0.001407s | byte equality observed |
| test_assign.test | 5 | 0.003928s | 0.003303s | 0.003736s | byte equality observed |
| test_binding.test | 10 | 0.001314s | 0.001277s | 0.001269s | byte equality observed |
| test_binding_of.test | 10 | 0.001277s | 0.001272s | 0.001207s | byte equality observed |
| test_callable.test | 10 | 0.001752s | 0.001709s | 0.001714s | byte equality observed |
| test_construct.test | 8 | 0.002234s | 0.002154s | 0.002120s | byte equality observed |
| test_construct_cref.test | 10 | 0.001625s | 0.001609s | 0.001567s | byte equality observed |
| test_construct_ref.test | 10 | 0.001534s | 0.001507s | 0.001453s | byte equality observed |
| test_deduced.test | 10 | 0.001326s | 0.001255s | 0.001224s | byte equality observed |
| test_dereference.test | 10 | 0.001311s | 0.001318s | 0.001281s | byte equality observed |
| test_dynamic_any_cast.test | 10 | 0.001646s | 0.001627s | 0.001560s | byte equality observed |
| test_equal.test | 10 | 0.001485s | 0.001421s | 0.001381s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001328s | 0.001301s | 0.001247s | byte equality observed |
| test_free.test | 10 | 0.001456s | 0.001434s | 0.001366s | byte equality observed |
| test_increment.test | 10 | 0.001309s | 0.001309s | 0.001299s | byte equality observed |
| test_is_empty.test | 10 | 0.001288s | 0.001282s | 0.001240s | byte equality observed |
| test_less.test | 10 | 0.001540s | 0.001535s | 0.001442s | byte equality observed |
| test_limits.test | 10 | 0.001389s | 0.001353s | 0.001341s | byte equality observed |
| test_member.test | 10 | 0.001643s | 0.001661s | 0.001596s | byte equality observed |
| test_negate.test | 10 | 0.001273s | 0.001252s | 0.001213s | byte equality observed |
| test_nested.test | 10 | 0.001269s | 0.001283s | 0.001231s | byte equality observed |
| test_null.test | 10 | 0.001302s | 0.001301s | 0.001260s | byte equality observed |
| test_reference.test | 10 | 0.001323s | 0.001346s | 0.001274s | byte equality observed |
| test_relaxed.test | 10 | 0.001296s | 0.001254s | 0.001276s | byte equality observed |
| test_same_type.test | 10 | 0.001298s | 0.001305s | 0.001273s | byte equality observed |
| test_stream.test | 7 | 0.001587s | 0.001561s | 0.001521s | byte equality observed |
| test_subscript.test | 8 | 0.001355s | 0.001298s | 0.001281s | byte equality observed |
| test_tuple.test | 10 | 0.001351s | 0.001297s | 0.001275s | byte equality observed |
| test_typeid_of.test | 10 | 0.001337s | 0.001307s | 0.001293s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44656576225).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
