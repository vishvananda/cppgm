# libs/function/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| function_test.test | RUN | 0.335459 | 1.931376 | 1.651813 | 0.001546 | 0.001587 | 0.001652 |
| function_test_no_rtti.test | RUN | 0.330249 | 1.904534 | 1.653526 | 0.001499 | 0.001634 | 0.001461 |
| function_n_test.test | RUN | 0.311550 | 1.583961 | 1.356468 | 0.001531 | 0.001583 | 0.001656 |
| allocator_test.test | RUN | 0.252004 | 0.897922 | 0.907571 | 0.001671 | 0.001624 | 0.001653 |
| stateless_test.test | RUN | 0.182867 | 0.481362 | 0.592721 | 0.001573 | 0.001518 | 0.001540 |
| lambda_test.test | RUN | 0.394387 | 1.167663 | 1.295666 | 0.001682 | 0.001480 | 0.001621 |
| function_test_fail1.test | COMPILE_FAIL | 0.139680 | 0.323100 | 0.406161 | — | — | — |
| function_test_fail2.test | COMPILE_FAIL | 0.144270 | 0.326333 | 0.410676 | — | — | — |
| function_30.test | COMPILE | 0.145429 | 0.345066 | 0.420567 | — | — | — |
| function_30_repeat.test | COMPILE | 0.144615 | 0.341186 | 0.435596 | — | — | — |
| function_arith_cxx98.test | RUN | 0.189260 | 0.576900 | 0.637275 | 0.001395 | 0.001586 | 0.001609 |
| function_arith_portable.test | RUN | 0.189672 | 0.548721 | 0.603003 | 0.001560 | 0.001432 | 0.001669 |
| sum_avg_cxx98.test | RUN | 0.182130 | 0.476747 | 0.573368 | 0.001432 | 0.001334 | 0.001601 |
| sum_avg_portable.test | RUN | 0.181321 | 0.437366 | 0.560549 | 0.001546 | 0.001505 | 0.001611 |
| mem_fun_cxx98.test | RUN | 0.208289 | 0.670031 | 0.725834 | 0.001570 | 0.001455 | 0.001510 |
| mem_fun_portable.test | RUN | 0.203913 | 0.612960 | 0.669191 | 0.001450 | 0.001470 | 0.001468 |
| std_bind_cxx98.test | RUN | 0.191626 | 0.562390 | 0.630391 | 0.001401 | 0.001620 | 0.001661 |
| std_bind_portable.test | RUN | 0.191367 | 0.518773 | 0.588817 | 0.001588 | 0.001647 | 0.001626 |
| function_ref_cxx98.test | RUN | 0.180070 | 0.470862 | 0.585245 | 0.001472 | 0.001524 | 0.001315 |
| function_ref_portable.test | RUN | 0.178292 | 0.435465 | 0.557630 | 0.001402 | 0.001375 | 0.001542 |
| contains_test.test | RUN | 0.223731 | 0.891518 | 0.889854 | 0.001417 | 0.001675 | 0.001671 |
| contains2_test.test | RUN | 0.204418 | 0.649245 | 0.684087 | 0.001497 | 0.001592 | 0.001670 |
| nothrow_swap.test | RUN | 0.196189 | 0.619952 | 0.673118 | 0.001436 | 0.001468 | 0.001601 |
| rvalues_test.test | RUN | 0.223828 | 0.737111 | 0.759886 | 0.001563 | 0.001534 | 0.001618 |
| function_typeof_test.test | COMPILE | 0.142806 | 0.342298 | 0.403336 | — | — | — |
| result_arg_types_test.test | RUN | 0.205723 | 0.518201 | 0.694115 | 0.001568 | 0.001513 | 0.001620 |
| result_arg_n_types_test.test | RUN | 0.225822 | 0.564122 | 0.812334 | 0.001616 | 0.001625 | 0.001613 |
| test_bad_function_call_shared.test | RUN | 0.181187 | 0.479520 | 0.595465 | 0.001626 | 0.001616 | 0.001608 |
| test_bad_function_call_static.test | RUN | 0.182524 | 0.478323 | 0.571732 | 0.001511 | 0.001743 | 0.001682 |
| mixed_cxxstd_shared.test | RUN | 0.194378 | 0.573176 | 0.672290 | 0.001416 | 0.001712 | 0.001593 |
| mixed_cxxstd_static.test | RUN | 0.196432 | 0.563207 | 0.671060 | 0.001467 | 0.001437 | 0.001523 |
| mixed_cxxstd_shared_0x.test | RUN | 0.197042 | 0.567405 | 0.644153 | 0.001725 | 0.001781 | 0.001777 |
| mixed_cxxstd_static_0x.test | RUN | 0.195610 | 0.566411 | 0.668349 | 0.001461 | 0.001644 | 0.001447 |
| mixed_cxxstd_shared_14.test | RUN | 0.195688 | 0.561938 | 0.667254 | 0.001666 | 0.001640 | 0.001651 |
| mixed_cxxstd_static_14.test | RUN | 0.195230 | 0.571104 | 0.654982 | 0.001601 | 0.001736 | 0.001613 |
| return_function_shared.test | RUN | 0.190603 | 0.560293 | 0.657479 | 0.001656 | 0.001766 | 0.001596 |
| return_function_static.test | RUN | 0.195670 | 0.565832 | 0.654684 | 0.001379 | 0.001514 | 0.001674 |
| return_function_shared_0x.test | RUN | 0.197664 | 0.574386 | 0.643944 | 0.001691 | 0.001800 | 0.001750 |
| return_function_static_0x.test | RUN | 0.191869 | 0.564185 | 0.642698 | 0.001566 | 0.001626 | 0.001586 |
| return_function_shared_14.test | RUN | 0.192618 | 0.571724 | 0.634017 | 0.001524 | 0.001763 | 0.001584 |
| return_function_static_14.test | RUN | 0.193481 | 0.567555 | 0.646633 | 0.001542 | 0.001670 | 0.001628 |
| quick.test | RUN | 0.191846 | 0.569662 | 0.621313 | 0.001645 | 0.001680 | 0.001633 |
| issue_42.test | COMPILE | 0.149682 | 0.365254 | 0.439481 | — | — | — |
| fn_eq_bind_test.test | RUN | 0.256448 | 0.787501 | 0.925054 | 0.001522 | 0.001564 | 0.001430 |
| contains_test_no_rtti.test | RUN | 0.230036 | 0.880940 | 0.908612 | 0.001420 | 0.001426 | 0.001425 |
| contains2_test_no_rtti.test | RUN | 0.206791 | 0.657835 | 0.703938 | 0.001395 | 0.001396 | 0.001464 |
| contains3_test.test | RUN | 0.194991 | 0.510590 | 0.636298 | 0.001586 | 0.001507 | 0.001072 |
| contains3_test_no_rtti.test | RUN | 0.133887 | 0.400081 | 0.419320 | 0.001091 | 0.001105 | 0.001103 |
| issue_53.test | COMPILE | 0.105069 | 0.290944 | 0.305419 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.003× | 0.994×, 1.011× | 0.996× |
| clang | 0.995× | 1.002×, 0.988× | 0.996× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44927958294).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| allocator_test.test | 10 | 0.000907s | 0.000913s | 0.000928s | byte equality observed |
| contains2_test.test | 10 | 0.000918s | 0.000914s | 0.000907s | byte equality observed |
| contains2_test_no_rtti.test | 10 | 0.000914s | 0.000911s | 0.000907s | byte equality observed |
| contains3_test.test | 10 | 0.000910s | 0.000932s | 0.000905s | byte equality observed |
| contains3_test_no_rtti.test | 10 | 0.000908s | 0.000994s | 0.000903s | byte equality observed |
| contains_test.test | 10 | 0.000909s | 0.000984s | 0.000908s | byte equality observed |
| contains_test_no_rtti.test | 10 | 0.000900s | 0.001021s | 0.000910s | byte equality observed |
| fn_eq_bind_test.test | 10 | 0.000917s | 0.000985s | 0.000929s | byte equality observed |
| function_arith_cxx98.test | 10 | 0.000962s | 0.001007s | 0.000992s | byte equality observed |
| function_arith_portable.test | 10 | 0.000984s | 0.001005s | 0.001008s | byte equality observed |
| function_n_test.test | 10 | 0.000985s | 0.000976s | 0.001002s | byte equality observed |
| function_ref_cxx98.test | 10 | 0.000969s | 0.000943s | 0.000942s | byte equality observed |
| function_ref_portable.test | 10 | 0.000940s | 0.000962s | 0.000974s | byte equality observed |
| function_test.test | 10 | 0.001023s | 0.001002s | 0.000986s | byte equality observed |
| function_test_no_rtti.test | 10 | 0.001013s | 0.001020s | 0.001050s | byte equality observed |
| lambda_test.test | 10 | 0.000975s | 0.000988s | 0.001011s | byte equality observed |
| mem_fun_cxx98.test | 10 | 0.000984s | 0.000986s | 0.000996s | byte equality observed |
| mem_fun_portable.test | 10 | 0.001013s | 0.000983s | 0.000997s | byte equality observed |
| mixed_cxxstd_shared.test | 10 | 0.001051s | 0.001034s | 0.001054s | byte equality observed |
| mixed_cxxstd_shared_0x.test | 10 | 0.001065s | 0.001023s | 0.001042s | byte equality observed |
| mixed_cxxstd_shared_14.test | 10 | 0.001052s | 0.001018s | 0.001045s | byte equality observed |
| mixed_cxxstd_static.test | 10 | 0.000984s | 0.000993s | 0.000968s | byte equality observed |
| mixed_cxxstd_static_0x.test | 10 | 0.000973s | 0.000954s | 0.000945s | byte equality observed |
| mixed_cxxstd_static_14.test | 10 | 0.000964s | 0.000958s | 0.001001s | byte equality observed |
| nothrow_swap.test | 10 | 0.001005s | 0.000940s | 0.000969s | byte equality observed |
| quick.test | 10 | 0.000989s | 0.000939s | 0.000950s | byte equality observed |
| result_arg_n_types_test.test | 10 | 0.001003s | 0.000937s | 0.001003s | byte equality observed |
| result_arg_types_test.test | 10 | 0.000965s | 0.000964s | 0.000995s | byte equality observed |
| return_function_shared.test | 10 | 0.001045s | 0.001040s | 0.001070s | byte equality observed |
| return_function_shared_0x.test | 10 | 0.001062s | 0.001040s | 0.001056s | byte equality observed |
| return_function_shared_14.test | 10 | 0.001047s | 0.001017s | 0.001014s | byte equality observed |
| return_function_static.test | 10 | 0.000998s | 0.000954s | 0.001000s | byte equality observed |
| return_function_static_0x.test | 10 | 0.000983s | 0.001026s | 0.000988s | byte equality observed |
| return_function_static_14.test | 10 | 0.000990s | 0.000958s | 0.000994s | byte equality observed |
| rvalues_test.test | 10 | 0.001011s | 0.000989s | 0.000971s | byte equality observed |
| stateless_test.test | 10 | 0.000995s | 0.000974s | 0.000944s | byte equality observed |
| std_bind_cxx98.test | 10 | 0.000944s | 0.000965s | 0.000945s | byte equality observed |
| std_bind_portable.test | 10 | 0.000961s | 0.000918s | 0.000953s | byte equality observed |
| sum_avg_cxx98.test | 10 | 0.000942s | 0.000932s | 0.000925s | byte equality observed |
| sum_avg_portable.test | 10 | 0.000959s | 0.000976s | 0.000967s | byte equality observed |
| test_bad_function_call_shared.test | 10 | 0.001038s | 0.001028s | 0.001048s | byte equality observed |
| test_bad_function_call_static.test | 10 | 0.001000s | 0.001017s | 0.001030s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44927958294).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
