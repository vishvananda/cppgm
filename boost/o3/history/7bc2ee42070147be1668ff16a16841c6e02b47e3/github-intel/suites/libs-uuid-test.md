# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.497031 | 1.203484 | 1.718530 | 0.000657 | 0.000773 | 0.001597 |
| test_uuid.test | RUN | 0.301042 | 0.970083 | 1.206136 | 0.001619 | 0.001699 | 0.001608 |
| test_uuid_no_simd.test | RUN | 0.308218 | 0.974125 | 1.119860 | 0.001456 | 0.001548 | 0.001376 |
| test_uuid_2.test | RUN | 0.214865 | 0.692824 | 0.798910 | 0.001423 | 0.001569 | 0.001602 |
| test_uuid_3.test | RUN | 0.176758 | 0.487591 | 0.666269 | 0.001566 | 0.001571 | 0.001454 |
| test_alignment.test | RUN | 0.165392 | 0.437371 | 0.573820 | 0.001410 | 0.001508 | 0.001580 |
| test_alignment_2.test | RUN | 0.163534 | 0.446091 | 0.568977 | 0.001413 | 0.001496 | 0.001560 |
| test_attribute_packed.test | RUN | 0.170369 | 0.442026 | 0.588713 | 0.001624 | 0.001583 | 0.001632 |
| test_pragma_pack.test | RUN | 0.165648 | 0.436197 | 0.585920 | 0.001642 | 0.001672 | 0.001359 |
| test_data.test | RUN | 0.195522 | 0.815654 | 0.828448 | 0.001609 | 0.001597 | 0.001594 |
| test_comparison.test | RUN | 0.287246 | 0.948118 | 1.112235 | 0.001716 | 0.001656 | 0.001550 |
| test_comparison_no_simd.test | RUN | 0.277810 | 1.081140 | 1.033274 | 0.001764 | 0.001490 | 0.001514 |
| test_io.test | RUN | 0.366426 | 1.770344 | 1.708042 | 0.001728 | 0.001677 | 0.001695 |
| test_io_no_simd.test | RUN | 0.360924 | 1.756675 | 1.612981 | 0.001177 | 0.001799 | 0.001686 |
| test_io_2.test | RUN | 0.288809 | 1.843928 | 1.164441 | 0.001644 | 0.001779 | 0.001219 |
| test_io_2_no_simd.test | RUN | 0.255326 | 1.742058 | 1.064886 | 0.001673 | 0.001734 | 0.001851 |
| test_to_chars.test | RUN | 0.260910 | 1.146963 | 1.125098 | 0.001723 | 0.001658 | 0.001712 |
| test_to_chars_no_simd.test | RUN | 0.258006 | 1.169217 | 1.061191 | 0.001848 | 0.001692 | 0.001664 |
| test_to_chars_2.test | RUN | 0.316882 | 2.088437 | 1.305331 | 0.001492 | 0.001649 | 0.001499 |
| test_to_chars_2_no_simd.test | RUN | 0.325779 | 2.291542 | 1.193350 | 0.001470 | 0.001496 | 0.001652 |
| test_to_chars_3.test | RUN | 0.215176 | 0.749844 | 0.816376 | 0.001560 | 0.001496 | 0.001646 |
| test_from_chars.test | RUN | 0.242160 | 1.098994 | 0.909221 | 0.001521 | 0.001525 | 0.001650 |
| test_from_chars_no_simd.test | RUN | 0.191138 | 0.883313 | 0.741990 | 0.001486 | 0.001450 | 0.001615 |
| test_from_chars_2.test | RUN | 0.239412 | 1.030731 | 0.898754 | 0.001589 | 0.001510 | 0.001404 |
| test_from_chars_2_no_simd.test | RUN | 0.187717 | 0.780005 | 0.720794 | 0.001621 | 0.001509 | 0.001417 |
| test_uuid_from_string.test | RUN | 0.282130 | 1.128935 | 1.071525 | 0.001738 | 0.001561 | 0.001634 |
| test_uuid_from_string_2.test | RUN | 0.249784 | 1.022014 | 0.907540 | 0.001936 | 0.002006 | 0.001956 |
| test_uuid_from_string_3.test | RUN | 0.250749 | 1.032731 | 0.945201 | 0.001778 | 0.001863 | 0.001743 |
| test_uuid_clock.test | RUN | 0.154419 | 0.416320 | 0.558243 | 0.001484 | 0.001662 | 0.001593 |
| test_nil_generator.test | RUN | 0.180790 | 0.490846 | 0.655012 | 0.001695 | 0.001537 | 0.001635 |
| test_string_generator.test | RUN | 0.237141 | 0.825512 | 0.899605 | 0.001606 | 0.001781 | 0.001716 |
| test_string_generator_2.test | RUN | 0.292407 | 1.146850 | 0.995513 | 0.001634 | 0.001536 | 0.001650 |
| test_random_generator.test | RUN | 0.391263 | 2.254715 | 1.506940 | 0.004160 | 0.004366 | 0.004278 |
| test_random_generator_2.test | RUN | 0.283045 | 0.865937 | 1.018642 | 0.001730 | 0.001683 | 0.001601 |
| test_name_generator.test | RUN | 0.250768 | 2.948722 | 1.092570 | 0.001552 | 0.001676 | 0.001626 |
| test_namespaces.test | RUN | 0.202471 | 0.611816 | 0.724887 | 0.001440 | 0.001629 | 0.001482 |
| test_name_generator_md5.test | RUN | 0.254733 | 1.373842 | 1.078455 | 0.001644 | 0.001751 | 0.001618 |
| test_name_generator_sha1.test | RUN | 0.250581 | 4.399046 | 1.029173 | 0.001612 | 0.001496 | 0.001689 |
| test_time_generator.test | RUN | 0.267547 | 0.856015 | 1.019562 | 0.001778 | 0.001664 | 0.001645 |
| test_time_generator_v1.test | RUN | 0.300032 | 0.954863 | 1.126224 | 0.002199 | 0.002226 | 0.002348 |
| test_time_generator_v1_2.test | RUN | 0.295666 | 0.879908 | 1.065944 | 0.001934 | 0.001990 | 0.002050 |
| test_time_generator_v1_3.test | RUN | 0.321739 | 0.923505 | 1.174360 | 0.005140 | 0.005003 | 0.004170 |
| test_time_generator_v6.test | RUN | 0.295660 | 0.950913 | 1.123935 | 0.002100 | 0.002344 | 0.002339 |
| test_time_generator_v6_2.test | RUN | 0.299530 | 0.882631 | 1.081689 | 0.001942 | 0.001967 | 0.001697 |
| test_time_generator_v6_3.test | RUN | 0.325941 | 0.931838 | 1.201374 | 0.006117 | 0.005336 | 0.004622 |
| test_time_generator_v7.test | RUN | 0.291583 | 0.945725 | 1.070930 | 0.001930 | 0.001910 | 0.002021 |
| test_time_generator_v7_2.test | RUN | 0.258943 | 0.831721 | 1.010611 | 0.001631 | 0.001677 | 0.001723 |
| test_time_generator_v7_3.test | RUN | 0.270696 | 1.071703 | 1.023402 | 0.002910 | 0.003067 | 0.003016 |
| test_serialization.test | RUN | 0.492934 | 1.595480 | 1.839859 | 0.001830 | 0.001560 | 0.001756 |
| test_tagging.test | RUN | 0.276059 | 1.024726 | 1.028751 | 0.001506 | 0.001516 | 0.001542 |
| test_uuid_class.test | RUN | 0.284180 | 0.898504 | 1.089765 | 0.001528 | 0.001461 | 0.001596 |
| test_uuid_in_map.test | RUN | 0.313708 | 1.033004 | 1.194844 | 0.001542 | 0.001646 | 0.001634 |
| test_hash.test | RUN | 0.308016 | 0.939651 | 1.125528 | 0.001537 | 0.001654 | 0.001644 |
| test_hash_value.test | RUN | 0.223377 | 0.642408 | 0.799930 | 0.005616 | 0.005548 | 0.005411 |
| test_std_unordered.test | RUN | 0.292106 | 1.058397 | 1.116690 | 0.001708 | 0.001756 | 0.001737 |
| test_boost_unordered.test | RUN | 0.418715 | 1.362471 | 1.420943 | 0.001491 | 0.001558 | 0.001661 |
| test_detail_md5.test | RUN | 0.196480 | 0.650166 | 0.793025 | 0.001588 | 0.001554 | 0.001650 |
| test_detail_sha1.test | RUN | 0.181480 | 0.841326 | 0.731889 | 0.012149 | 0.010791 | 0.010388 |
| test_detail_endian.test | RUN | 0.140484 | 0.479978 | 0.525140 | 0.001541 | 0.001705 | 0.001579 |
| test_detail_chacha20.test | RUN | 0.152162 | 0.591685 | 0.550455 | 0.001499 | 0.001624 | 0.001529 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.139462 | 0.332949 | 0.448056 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.142532 | 0.333211 | 0.439396 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.236298 | 0.654724 | 0.788359 | 0.001614 | 0.001612 | 0.001628 |
| test_bench_random.test | RUN | 0.269052 | 0.874598 | 1.054076 | 0.015034 | 0.015145 | 0.015082 |
| test_entropy_error.test | RUN | 0.133965 | 0.388024 | 0.469503 | 0.001443 | 0.001636 | 0.001567 |
| test_detail_random_provider.test | RUN | 0.256683 | 0.670943 | 0.918239 | 0.001679 | 0.001544 | 0.001591 |
| test_constants.test | RUN | 0.200082 | 0.607812 | 0.729958 | 0.001558 | 0.001606 | 0.001383 |
| test_uuid_cx.test | COMPILE | 0.114793 | 0.286863 | 0.369014 | — | — | — |
| test_uuid_cx2.test | RUN | 0.213371 | 0.706040 | 0.802263 | 0.001407 | 0.001501 | 0.001638 |
| test_uuid_cx3.test | RUN | 0.186709 | 0.556549 | 0.719723 | 0.001524 | 0.001473 | 0.001510 |
| test_uuid_cx3_no_simd.test | RUN | 0.175470 | 0.509479 | 0.631591 | 0.001482 | 0.001546 | 0.001646 |
| test_hash_value_cx.test | RUN | 0.174898 | 0.500806 | 0.648227 | 0.001632 | 0.001579 | 0.001369 |
| test_string_generator_cx.test | RUN | 0.204718 | 0.610611 | 0.740386 | 0.001598 | 0.001414 | 0.001620 |
| test_string_generator_cx2.test | RUN | 0.258077 | 0.748722 | 0.848745 | 0.001546 | 0.001571 | 0.001697 |
| test_constants_cx.test | RUN | 0.168090 | 0.434683 | 0.596073 | 0.001510 | 0.001512 | 0.001558 |
| test_from_chars_cx.test | RUN | 0.226095 | 0.837040 | 0.802643 | 0.001709 | 0.001610 | 0.001443 |
| test_from_chars_cx2.test | RUN | 0.230708 | 1.032433 | 0.870393 | 0.001670 | 0.001529 | 0.001683 |
| test_to_chars_cx.test | RUN | 0.232018 | 0.930014 | 0.949226 | 0.001570 | 0.001694 | 0.001047 |
| test_uuid_from_string_cx.test | RUN | 0.242455 | 0.958247 | 0.862451 | 0.001078 | 0.001138 | 0.001621 |
| quick.test | RUN | 0.242260 | 0.720131 | 0.856174 | 0.001034 | 0.001092 | 0.001147 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.985× | 0.990×, 0.979× | 1.010× |
| clang | 0.989× | 0.992×, 0.986× | 1.005× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44927958294).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.001155s | 0.001018s | 0.001136s | byte equality observed |
| test_alignment.test | 10 | 0.001149s | 0.001047s | 0.001135s | byte equality observed |
| test_alignment_2.test | 10 | 0.001136s | 0.001049s | 0.001108s | byte equality observed |
| test_attribute_packed.test | 10 | 0.001104s | 0.001059s | 0.001094s | byte equality observed |
| test_bench_random.test | 2 | 0.014750s | 0.014628s | 0.014709s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.001192s | 0.001121s | 0.001136s | byte equality observed |
| test_comparison.test | 10 | 0.001153s | 0.001135s | 0.001132s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.001179s | 0.001161s | 0.001164s | byte equality observed |
| test_constants.test | 10 | 0.001164s | 0.001131s | 0.001150s | byte equality observed |
| test_constants_cx.test | 10 | 0.001135s | 0.001116s | 0.001139s | byte equality observed |
| test_data.test | 10 | 0.001167s | 0.001146s | 0.001148s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.001155s | 0.001184s | 0.001154s | byte equality observed |
| test_detail_endian.test | 10 | 0.001160s | 0.001150s | 0.001132s | byte equality observed |
| test_detail_md5.test | 10 | 0.001198s | 0.001214s | 0.001139s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.001187s | 0.001187s | 0.001181s | byte equality observed |
| test_detail_sha1.test | 3 | 0.010273s | 0.009751s | 0.009208s | byte equality observed |
| test_entropy_error.test | 10 | 0.001158s | 0.001181s | 0.001152s | byte equality observed |
| test_from_chars.test | 10 | 0.001154s | 0.001156s | 0.001148s | byte equality observed |
| test_from_chars_2.test | 10 | 0.001162s | 0.001154s | 0.001200s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.001186s | 0.001153s | 0.001149s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.001176s | 0.001149s | 0.001151s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.001151s | 0.001177s | 0.001147s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.001181s | 0.001173s | 0.001149s | byte equality observed |
| test_hash.test | 10 | 0.001179s | 0.001153s | 0.001135s | byte equality observed |
| test_hash_value.test | 5 | 0.004941s | 0.004745s | 0.004689s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.001139s | 0.001130s | 0.001138s | byte equality observed |
| test_include1.test | 10 | 0.000492s | 0.000490s | 0.001105s | byte equality observed |
| test_io.test | 10 | 0.001249s | 0.001239s | 0.001208s | byte equality observed |
| test_io_2.test | 10 | 0.001319s | 0.001340s | 0.001340s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.001349s | 0.001343s | 0.001324s | byte equality observed |
| test_io_no_simd.test | 10 | 0.001246s | 0.001252s | 0.001267s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.001178s | 0.001158s | 0.001175s | native test oracle; output varies |
| test_name_generator.test | 9 | 0.001211s | 0.001163s | 0.001210s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.001219s | 0.001192s | 0.001190s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.001219s | 0.001232s | 0.001201s | byte equality observed |
| test_namespaces.test | 10 | 0.001167s | 0.001154s | 0.001155s | byte equality observed |
| test_nil_generator.test | 10 | 0.001149s | 0.001136s | 0.001127s | byte equality observed |
| test_pragma_pack.test | 10 | 0.001122s | 0.001128s | 0.001147s | byte equality observed |
| test_random_generator.test | 6 | 0.003824s | 0.003797s | 0.003838s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.001164s | 0.001139s | 0.001140s | byte equality observed |
| test_serialization.test | 10 | 0.001263s | 0.001253s | 0.001265s | byte equality observed |
| test_std_unordered.test | 10 | 0.001237s | 0.001242s | 0.001242s | byte equality observed |
| test_string_generator.test | 10 | 0.001295s | 0.001331s | 0.001278s | byte equality observed |
| test_string_generator_2.test | 10 | 0.001192s | 0.001182s | 0.001207s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.001173s | 0.001166s | 0.001169s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.001192s | 0.001157s | 0.001182s | byte equality observed |
| test_tagging.test | 10 | 0.001183s | 0.001178s | 0.001183s | byte equality observed |
| test_time_generator.test | 10 | 0.001193s | 0.001195s | 0.001182s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001701s | 0.001787s | 0.001807s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001492s | 0.001468s | 0.001496s | byte equality observed |
| test_time_generator_v1_3.test | 4 | 0.004414s | 0.004363s | 0.004263s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001675s | 0.001730s | 0.001805s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001489s | 0.001497s | 0.001539s | byte equality observed |
| test_time_generator_v6_3.test | 4 | 0.004352s | 0.004543s | 0.004556s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.001458s | 0.001474s | 0.001508s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.001249s | 0.001216s | 0.001203s | byte equality observed |
| test_time_generator_v7_3.test | 7 | 0.002536s | 0.002497s | 0.002557s | byte equality observed |
| test_to_chars.test | 10 | 0.001247s | 0.001238s | 0.001213s | byte equality observed |
| test_to_chars_2.test | 10 | 0.001199s | 0.001181s | 0.001188s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.001213s | 0.001202s | 0.001194s | byte equality observed |
| test_to_chars_3.test | 10 | 0.001184s | 0.001162s | 0.001198s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.001211s | 0.001153s | 0.001168s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.001281s | 0.001248s | 0.001247s | byte equality observed |
| test_uuid.test | 10 | 0.001161s | 0.001133s | 0.001172s | byte equality observed |
| test_uuid_2.test | 10 | 0.001189s | 0.001162s | 0.001167s | byte equality observed |
| test_uuid_3.test | 10 | 0.001172s | 0.001163s | 0.001165s | byte equality observed |
| test_uuid_class.test | 10 | 0.001207s | 0.001185s | 0.001156s | byte equality observed |
| test_uuid_clock.test | 10 | 0.001164s | 0.001136s | 0.001157s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.001197s | 0.001182s | 0.001183s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.001174s | 0.001162s | 0.001167s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.001153s | 0.001176s | 0.001142s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.001185s | 0.001179s | 0.001168s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.001543s | 0.001500s | 0.001595s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.001307s | 0.001275s | 0.001300s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.001171s | 0.001197s | 0.001162s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.001177s | 0.001174s | 0.001193s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.001176s | 0.001146s | 0.001152s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44927958294).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
