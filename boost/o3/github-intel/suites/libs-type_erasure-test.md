# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.426769 | 1.823312 | 1.515081 | 0.002463 | 0.002374 | 0.002061 |
| test_increment.test | RUN | 0.406543 | 1.364601 | 1.309956 | 0.002493 | 0.002395 | 0.002084 |
| test_add.test | RUN | 0.542088 | 2.244727 | 1.955197 | 0.001900 | 0.002569 | 0.002150 |
| test_add_assign.test | RUN | 0.541746 | 2.394350 | 2.037090 | 0.002473 | 0.002278 | 0.002171 |
| test_callable.test | RUN | 0.907731 | 4.137047 | 4.450674 | 0.003457 | 0.003251 | 0.002986 |
| test_reference.test | RUN | 0.435230 | 1.644092 | 1.402508 | 0.002222 | 0.002492 | 0.002035 |
| test_construct.test | RUN | 2.119090 | 19.927408 | 13.626136 | 0.004286 | 0.003960 | 0.003978 |
| test_relaxed.test | RUN | 0.413780 | 1.167056 | 1.213832 | 0.002251 | 0.002241 | 0.002019 |
| test_assign.test | RUN | 5.505601 | 65.876009 | 47.809643 | 0.006625 | 0.003934 | 0.004335 |
| test_construct_ref.test | RUN | 0.515653 | 2.868860 | 1.976378 | 0.002673 | 0.002797 | 0.002558 |
| test_construct_cref.test | RUN | 0.604109 | 2.689147 | 2.467625 | 0.003056 | 0.002977 | 0.002846 |
| test_any_cast.test | RUN | 0.507067 | 2.821118 | 1.929905 | 0.002761 | 0.002695 | 0.002520 |
| test_binding_of.test | RUN | 0.379686 | 1.064982 | 1.129678 | 0.002141 | 0.002158 | 0.001854 |
| test_typeid_of.test | RUN | 0.424425 | 1.557686 | 1.309144 | 0.002488 | 0.002223 | 0.002067 |
| test_nested.test | RUN | 0.460470 | 1.524290 | 1.470512 | 0.002525 | 0.002049 | 0.002213 |
| test_less.test | RUN | 0.596721 | 3.006070 | 2.488837 | 0.002786 | 0.002845 | 0.002588 |
| test_equal.test | RUN | 0.564723 | 2.853192 | 2.052558 | 0.003131 | 0.002520 | 0.002504 |
| test_negate.test | RUN | 0.400528 | 1.139251 | 1.218772 | 0.002235 | 0.002178 | 0.002093 |
| test_dereference.test | RUN | 0.437405 | 1.514970 | 1.413107 | 0.002259 | 0.002333 | 0.002172 |
| test_subscript.test | RUN | 0.478535 | 1.700152 | 1.478037 | 0.002377 | 0.002312 | 0.002449 |
| test_forward_iterator.test | RUN | 0.527966 | 1.882479 | 1.705657 | 0.002558 | 0.002402 | 0.002099 |
| test_tuple.test | RUN | 0.464536 | 1.931073 | 1.509775 | 0.002464 | 0.002639 | 0.002100 |
| test_stream.test | RUN | 0.656140 | 3.173141 | 2.425299 | 0.002781 | 0.002603 | 0.002583 |
| test_deduced.test | RUN | 0.391301 | 1.110402 | 1.160096 | 0.002078 | 0.002486 | 0.001957 |
| test_same_type.test | RUN | 0.446063 | 1.512587 | 1.382530 | 0.002199 | 0.002156 | 0.001979 |
| test_member.test | RUN | 0.587925 | 3.046447 | 2.353359 | 0.002959 | 0.003029 | 0.002734 |
| test_null.test | RUN | 0.437914 | 1.450806 | 1.231965 | 0.002473 | 0.002310 | 0.002057 |
| test_free.test | RUN | 0.495506 | 2.527825 | 1.654767 | 0.002973 | 0.002669 | 0.002290 |
| test_is_empty.test | RUN | 0.377298 | 1.220262 | 1.153925 | 0.002499 | 0.002415 | 0.001975 |
| test_dynamic_any_cast.test | RUN | 0.759801 | 3.654736 | 3.476464 | 0.002777 | 0.003098 | 0.002786 |
| test_limits.test | RUN | 0.674939 | 2.520750 | 2.276194 | 0.002330 | 0.002397 | 0.002223 |
| test_param.test | COMPILE | 0.258008 | 0.679059 | 0.751823 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.247942 | 0.514877 | 0.669817 | — | — | — |
| test_sfinae.test | COMPILE | 0.258254 | 0.520295 | 0.672071 | — | — | — |
| test_interface_order.test | COMPILE | 0.245266 | 0.505904 | 0.635871 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.028421 | 0.047580 | 0.054231 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.238732 | 0.500786 | 0.608744 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.236569 | 0.503627 | 0.612224 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.238128 | 0.495634 | 0.582980 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.232288 | 0.505738 | 0.601793 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.236081 | 0.500699 | 0.599965 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.226568 | 0.485542 | 0.556433 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.236422 | 0.494228 | 0.604544 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.244771 | 0.517650 | 0.631072 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.236975 | 0.488153 | 0.567395 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.233272 | 0.474571 | 0.606677 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.237200 | 0.499241 | 0.599063 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.229344 | 0.504035 | 0.582894 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.239337 | 0.529664 | 0.615930 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.236742 | 0.525958 | 0.616885 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.242272 | 0.533021 | 0.597773 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.232155 | 0.501043 | 0.580664 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.242958 | 0.503466 | 0.617232 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.236366 | 0.513148 | 0.594750 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.243131 | 0.513180 | 0.627853 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.240036 | 0.512998 | 0.624119 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.243639 | 0.526704 | 0.622671 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.246350 | 0.511950 | 0.624295 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.207523 | 0.511823 | 0.570494 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.186455 | 0.489118 | 0.583234 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.965× | 0.965×, 0.964× | 0.995× |
| clang | 0.961× | 0.964×, 0.957× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45617981312).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 10 | 0.001390s | 0.001367s | 0.001339s | byte equality observed |
| test_add_assign.test | 10 | 0.001389s | 0.001382s | 0.001328s | byte equality observed |
| test_any_cast.test | 10 | 0.001503s | 0.001455s | 0.001465s | byte equality observed |
| test_assign.test | 5 | 0.003900s | 0.003281s | 0.003747s | byte equality observed |
| test_binding.test | 10 | 0.001304s | 0.001310s | 0.001251s | byte equality observed |
| test_binding_of.test | 10 | 0.001299s | 0.001232s | 0.001249s | byte equality observed |
| test_callable.test | 10 | 0.001748s | 0.001699s | 0.001664s | byte equality observed |
| test_construct.test | 8 | 0.002253s | 0.002210s | 0.002111s | byte equality observed |
| test_construct_cref.test | 10 | 0.001649s | 0.001598s | 0.001608s | byte equality observed |
| test_construct_ref.test | 10 | 0.001512s | 0.001503s | 0.001460s | byte equality observed |
| test_deduced.test | 10 | 0.001286s | 0.001245s | 0.001247s | byte equality observed |
| test_dereference.test | 10 | 0.001302s | 0.001273s | 0.001287s | byte equality observed |
| test_dynamic_any_cast.test | 10 | 0.001656s | 0.001615s | 0.001579s | byte equality observed |
| test_equal.test | 10 | 0.001475s | 0.001450s | 0.001422s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001329s | 0.001334s | 0.001275s | byte equality observed |
| test_free.test | 10 | 0.001431s | 0.001398s | 0.001371s | byte equality observed |
| test_increment.test | 10 | 0.001359s | 0.001300s | 0.001293s | byte equality observed |
| test_is_empty.test | 10 | 0.001297s | 0.001230s | 0.001274s | byte equality observed |
| test_less.test | 10 | 0.001528s | 0.001482s | 0.001479s | byte equality observed |
| test_limits.test | 10 | 0.001403s | 0.001375s | 0.001357s | byte equality observed |
| test_member.test | 10 | 0.001641s | 0.001600s | 0.001606s | byte equality observed |
| test_negate.test | 10 | 0.001287s | 0.001243s | 0.001260s | byte equality observed |
| test_nested.test | 10 | 0.001285s | 0.001289s | 0.001267s | byte equality observed |
| test_null.test | 10 | 0.001332s | 0.001291s | 0.001263s | byte equality observed |
| test_reference.test | 10 | 0.001320s | 0.001317s | 0.001287s | byte equality observed |
| test_relaxed.test | 10 | 0.001312s | 0.001263s | 0.001243s | byte equality observed |
| test_same_type.test | 10 | 0.001325s | 0.001309s | 0.001266s | byte equality observed |
| test_stream.test | 10 | 0.001590s | 0.001543s | 0.001520s | byte equality observed |
| test_subscript.test | 10 | 0.001352s | 0.001323s | 0.001300s | byte equality observed |
| test_tuple.test | 10 | 0.001340s | 0.001295s | 0.001306s | byte equality observed |
| test_typeid_of.test | 10 | 0.001349s | 0.001307s | 0.001304s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45617981312).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
