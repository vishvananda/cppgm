# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.355884 | 0.760779 | 0.937099 | 0.000605 | 0.000775 | 0.001529 |
| test_uuid.test | RUN | 0.220747 | 0.614977 | 0.693612 | 0.001784 | 0.001810 | 0.001562 |
| test_uuid_no_simd.test | RUN | 0.210636 | 0.610176 | 0.604937 | 0.001758 | 0.001590 | 0.001350 |
| test_uuid_2.test | RUN | 0.156176 | 0.456045 | 0.430876 | 0.001710 | 0.001578 | 0.001323 |
| test_uuid_3.test | RUN | 0.125876 | 0.311149 | 0.356373 | 0.003523 | 0.001807 | 0.001412 |
| test_alignment.test | RUN | 0.128719 | 0.276681 | 0.314942 | 0.001629 | 0.001651 | 0.001736 |
| test_alignment_2.test | RUN | 0.160984 | 0.290319 | 0.352890 | 0.001708 | 0.001556 | 0.001495 |
| test_attribute_packed.test | RUN | 0.149616 | 0.284201 | 0.375733 | 0.001635 | 0.001626 | 0.001519 |
| test_pragma_pack.test | RUN | 0.122536 | 0.275094 | 0.366734 | 0.001876 | 0.001649 | 0.001588 |
| test_data.test | RUN | 0.139287 | 0.500850 | 0.477585 | 0.001540 | 0.001732 | 0.001643 |
| test_comparison.test | RUN | 0.199650 | 0.598165 | 0.665455 | 0.001791 | 0.001910 | 0.001410 |
| test_comparison_no_simd.test | RUN | 0.198102 | 0.663702 | 0.578684 | 0.001504 | 0.001587 | 0.001530 |
| test_io.test | RUN | 0.248801 | 1.154149 | 0.980160 | 0.001884 | 0.001913 | 0.001875 |
| test_io_no_simd.test | RUN | 0.240597 | 1.106185 | 0.955317 | 0.001464 | 0.001522 | 0.001774 |
| test_io_2.test | RUN | 0.190190 | 1.141046 | 0.700011 | 0.001296 | 0.001748 | 0.001566 |
| test_io_2_no_simd.test | RUN | 0.175175 | 1.066907 | 0.661182 | 0.001672 | 0.001762 | 0.001547 |
| test_to_chars.test | RUN | 0.179925 | 0.731643 | 0.655379 | 0.001816 | 0.001925 | 0.001797 |
| test_to_chars_no_simd.test | RUN | 0.179408 | 0.728694 | 0.626088 | 0.001718 | 0.001756 | 0.001767 |
| test_to_chars_2.test | RUN | 0.221587 | 1.313507 | 0.783608 | 0.002415 | 0.001794 | 0.001582 |
| test_to_chars_2_no_simd.test | RUN | 0.228634 | 1.396172 | 0.737071 | 0.001402 | 0.001632 | 0.001663 |
| test_to_chars_3.test | RUN | 0.151040 | 0.477703 | 0.462557 | 0.001569 | 0.001563 | 0.001378 |
| test_from_chars.test | RUN | 0.163221 | 0.674880 | 0.519443 | 0.001421 | 0.001682 | 0.001552 |
| test_from_chars_no_simd.test | RUN | 0.136847 | 0.529430 | 0.451465 | 0.001798 | 0.001444 | 0.001272 |
| test_from_chars_2.test | RUN | 0.164390 | 0.642789 | 0.526376 | 0.001632 | 0.001766 | 0.001452 |
| test_from_chars_2_no_simd.test | RUN | 0.135995 | 0.493012 | 0.405790 | 0.001586 | 0.001421 | 0.001731 |
| test_uuid_from_string.test | RUN | 0.194283 | 0.711283 | 0.680467 | 0.001673 | 0.001655 | 0.001462 |
| test_uuid_from_string_2.test | RUN | 0.170479 | 0.648554 | 0.584721 | 0.001905 | 0.001818 | 0.001518 |
| test_uuid_from_string_3.test | RUN | 0.171336 | 0.627485 | 0.605670 | 0.001666 | 0.001876 | 0.001705 |
| test_uuid_clock.test | RUN | 0.112454 | 0.258729 | 0.385521 | 0.001367 | 0.001723 | 0.001586 |
| test_nil_generator.test | RUN | 0.129996 | 0.309515 | 0.382456 | 0.001585 | 0.001706 | 0.001660 |
| test_string_generator.test | RUN | 0.163000 | 0.510776 | 0.513328 | 0.001818 | 0.001938 | 0.001679 |
| test_string_generator_2.test | RUN | 0.201920 | 0.730809 | 0.594839 | 0.001530 | 0.001394 | 0.001569 |
| test_random_generator.test | RUN | 0.273357 | 1.391860 | 0.888374 | 0.059219 | 0.059882 | 0.059501 |
| test_random_generator_2.test | RUN | 0.204544 | 0.561623 | 0.565775 | 0.001597 | 0.001838 | 0.001686 |
| test_name_generator.test | RUN | 0.181924 | 1.809482 | 0.645279 | 0.001622 | 0.001839 | 0.001447 |
| test_namespaces.test | RUN | 0.148207 | 0.393092 | 0.428150 | 0.001556 | 0.001765 | 0.001651 |
| test_name_generator_md5.test | RUN | 0.183362 | 0.849258 | 0.604219 | 0.001702 | 0.001948 | 0.001640 |
| test_name_generator_sha1.test | RUN | 0.176172 | 2.592214 | 0.619124 | 0.001567 | 0.001911 | 0.002479 |
| test_time_generator.test | RUN | 0.197272 | 0.548629 | 0.555493 | 0.001660 | 0.001818 | 0.001477 |
| test_time_generator_v1.test | RUN | 0.220546 | 0.602424 | 0.643640 | 0.001982 | 0.002342 | 0.002365 |
| test_time_generator_v1_2.test | RUN | 0.212614 | 0.568869 | 0.622422 | 0.001985 | 0.002223 | 0.001930 |
| test_time_generator_v1_3.test | RUN | 0.234998 | 0.611553 | 0.671227 | 0.003898 | 0.003781 | 0.004102 |
| test_time_generator_v6.test | RUN | 0.218389 | 0.606545 | 0.642563 | 0.001900 | 0.002327 | 0.001930 |
| test_time_generator_v6_2.test | RUN | 0.215198 | 0.571566 | 0.616429 | 0.001626 | 0.002202 | 0.001850 |
| test_time_generator_v6_3.test | RUN | 0.227135 | 0.609569 | 0.670784 | 0.004288 | 0.003866 | 0.003184 |
| test_time_generator_v7.test | RUN | 0.200566 | 0.613316 | 0.610506 | 0.001732 | 0.002168 | 0.001710 |
| test_time_generator_v7_2.test | RUN | 0.188485 | 0.537588 | 0.562535 | 0.001648 | 0.001884 | 0.001530 |
| test_time_generator_v7_3.test | RUN | 0.191396 | 0.686878 | 0.584192 | 0.030219 | 0.030694 | 0.030738 |
| test_serialization.test | RUN | 0.348535 | 1.097530 | 1.073144 | 0.002006 | 0.001943 | 0.001773 |
| test_tagging.test | RUN | 0.195744 | 0.636946 | 0.579977 | 0.001775 | 0.001744 | 0.001717 |
| test_uuid_class.test | RUN | 0.203993 | 0.574469 | 0.608827 | 0.001797 | 0.001632 | 0.001514 |
| test_uuid_in_map.test | RUN | 0.226547 | 0.665762 | 0.673480 | 0.001547 | 0.001939 | 0.001452 |
| test_hash.test | RUN | 0.227213 | 0.612052 | 0.609542 | 0.002024 | 0.001736 | 0.001589 |
| test_hash_value.test | RUN | 0.162892 | 0.418485 | 0.449957 | 0.004247 | 0.004285 | 0.004119 |
| test_std_unordered.test | RUN | 0.214965 | 0.679669 | 0.619751 | 0.001630 | 0.001904 | 0.001718 |
| test_boost_unordered.test | RUN | 0.297243 | 0.852104 | 0.804571 | 0.001824 | 0.001566 | 0.001605 |
| test_detail_md5.test | RUN | 0.139076 | 0.400158 | 0.441865 | 0.001633 | 0.001734 | 0.001590 |
| test_detail_sha1.test | RUN | 0.129875 | 0.526246 | 0.403914 | 0.007813 | 0.007432 | 0.006486 |
| test_detail_endian.test | RUN | 0.101361 | 0.299506 | 0.297099 | 0.001704 | 0.001765 | 0.001614 |
| test_detail_chacha20.test | RUN | 0.111766 | 0.377566 | 0.304213 | 0.001471 | 0.001562 | 0.001587 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.099447 | 0.215928 | 0.239853 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.100073 | 0.214343 | 0.251306 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.171573 | 0.425163 | 0.437504 | 0.001849 | 0.001804 | 0.001577 |
| test_bench_random.test | RUN | 0.191397 | 0.545953 | 0.600463 | 0.313038 | 0.313060 | 0.306979 |
| test_entropy_error.test | RUN | 0.098851 | 0.244847 | 0.273093 | 0.001640 | 0.001654 | 0.001540 |
| test_detail_random_provider.test | RUN | 0.217645 | 0.430137 | 0.531538 | 0.002967 | 0.003400 | 0.002871 |
| test_constants.test | RUN | 0.174360 | 0.400922 | 0.418089 | 0.001339 | 0.001623 | 0.001330 |
| test_uuid_cx.test | COMPILE | 0.079217 | 0.153883 | 0.161686 | — | — | — |
| test_uuid_cx2.test | RUN | 0.143582 | 0.426832 | 0.473705 | 0.001417 | 0.001856 | 0.001580 |
| test_uuid_cx3.test | RUN | 0.127279 | 0.350342 | 0.425584 | 0.001348 | 0.001554 | 0.001406 |
| test_uuid_cx3_no_simd.test | RUN | 0.107964 | 0.335921 | 0.388148 | 0.001517 | 0.001745 | 0.001370 |
| test_hash_value_cx.test | RUN | 0.126310 | 0.325888 | 0.383557 | 0.001686 | 0.001591 | 0.001450 |
| test_string_generator_cx.test | RUN | 0.141377 | 0.393133 | 0.447888 | 0.001805 | 0.001481 | 0.001561 |
| test_string_generator_cx2.test | RUN | 0.178000 | 0.475126 | 0.505559 | 0.001651 | 0.001820 | 0.001447 |
| test_constants_cx.test | RUN | 0.121134 | 0.276100 | 0.357101 | 0.001453 | 0.001568 | 0.001535 |
| test_from_chars_cx.test | RUN | 0.150815 | 0.523068 | 0.480498 | 0.001830 | 0.001854 | 0.001329 |
| test_from_chars_cx2.test | RUN | 0.154688 | 0.639260 | 0.503275 | 0.001700 | 0.001744 | 0.001416 |
| test_to_chars_cx.test | RUN | 0.160240 | 0.593040 | 0.544689 | 0.001882 | 0.001740 | 0.001263 |
| test_uuid_from_string_cx.test | RUN | 0.164401 | 0.603502 | 0.530169 | 0.001524 | 0.001378 | 0.001381 |
| quick.test | RUN | 0.175485 | 0.478472 | 0.530271 | 0.001311 | 0.001193 | 0.000939 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.003× | 1.004×, 1.001× | 1.015× |
| clang | 1.006× | 1.006×, 1.005× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45790989032).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.000900s | 0.000905s | 0.000874s | byte equality observed |
| test_alignment.test | 10 | 0.000906s | 0.000907s | 0.000884s | byte equality observed |
| test_alignment_2.test | 10 | 0.000912s | 0.000918s | 0.000900s | byte equality observed |
| test_attribute_packed.test | 10 | 0.000872s | 0.000874s | 0.000870s | byte equality observed |
| test_bench_random.test | 1 | 0.323636s | 0.323611s | 0.323738s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.001443s | 0.001425s | 0.001429s | byte equality observed |
| test_comparison.test | 10 | 0.000899s | 0.000895s | 0.000865s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.000883s | 0.000898s | 0.000878s | byte equality observed |
| test_constants.test | 10 | 0.000881s | 0.000874s | 0.000871s | byte equality observed |
| test_constants_cx.test | 10 | 0.000837s | 0.000865s | 0.000850s | byte equality observed |
| test_data.test | 10 | 0.000887s | 0.000862s | 0.000876s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.000883s | 0.000876s | 0.000874s | byte equality observed |
| test_detail_endian.test | 10 | 0.000878s | 0.000877s | 0.000883s | byte equality observed |
| test_detail_md5.test | 10 | 0.000894s | 0.000890s | 0.000889s | byte equality observed |
| test_detail_random_provider.test | 8 | 0.002461s | 0.002456s | 0.002481s | byte equality observed |
| test_detail_sha1.test | 4 | 0.005125s | 0.005458s | 0.004255s | byte equality observed |
| test_entropy_error.test | 10 | 0.000890s | 0.000887s | 0.000903s | byte equality observed |
| test_from_chars.test | 10 | 0.000872s | 0.000875s | 0.000885s | byte equality observed |
| test_from_chars_2.test | 10 | 0.000874s | 0.000883s | 0.000901s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.000866s | 0.000889s | 0.000898s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.000858s | 0.000890s | 0.000884s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.000865s | 0.000889s | 0.000894s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.000869s | 0.000880s | 0.000877s | byte equality observed |
| test_hash.test | 10 | 0.001424s | 0.001406s | 0.001437s | byte equality observed |
| test_hash_value.test | 7 | 0.002877s | 0.002841s | 0.002835s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.000886s | 0.000880s | 0.000883s | byte equality observed |
| test_include1.test | 10 | 0.000407s | 0.000411s | 0.000886s | byte equality observed |
| test_io.test | 10 | 0.000969s | 0.000963s | 0.000979s | byte equality observed |
| test_io_2.test | 10 | 0.001016s | 0.000981s | 0.000982s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.001010s | 0.000967s | 0.001004s | byte equality observed |
| test_io_no_simd.test | 10 | 0.000971s | 0.000955s | 0.000978s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.000917s | 0.000880s | 0.000909s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.000955s | 0.000936s | 0.000953s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.000932s | 0.000916s | 0.000920s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.000953s | 0.000930s | 0.000943s | byte equality observed |
| test_namespaces.test | 10 | 0.000898s | 0.000884s | 0.000915s | byte equality observed |
| test_nil_generator.test | 10 | 0.000911s | 0.000866s | 0.000938s | byte equality observed |
| test_pragma_pack.test | 10 | 0.000880s | 0.000863s | 0.000916s | byte equality observed |
| test_random_generator.test | 1 | 0.061571s | 0.061497s | 0.061595s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.000886s | 0.000855s | 0.000873s | byte equality observed |
| test_serialization.test | 10 | 0.000958s | 0.000936s | 0.000973s | byte equality observed |
| test_std_unordered.test | 10 | 0.001455s | 0.001479s | 0.001477s | byte equality observed |
| test_string_generator.test | 10 | 0.000987s | 0.000999s | 0.000966s | byte equality observed |
| test_string_generator_2.test | 10 | 0.000911s | 0.000908s | 0.000952s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.000903s | 0.000899s | 0.000910s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.000928s | 0.000902s | 0.000942s | byte equality observed |
| test_tagging.test | 10 | 0.000925s | 0.000891s | 0.000955s | byte equality observed |
| test_time_generator.test | 10 | 0.000943s | 0.000914s | 0.000939s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001214s | 0.001277s | 0.001348s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001086s | 0.001110s | 0.001164s | byte equality observed |
| test_time_generator_v1_3.test | 7 | 0.003153s | 0.003025s | 0.003288s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001237s | 0.001290s | 0.001473s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001104s | 0.001111s | 0.001227s | byte equality observed |
| test_time_generator_v6_3.test | 7 | 0.003221s | 0.003053s | 0.003118s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.001103s | 0.001142s | 0.001575s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.001232s | 0.001221s | 0.001551s | byte equality observed |
| test_time_generator_v7_3.test | 1 | 0.031352s | 0.031358s | 0.032944s | byte equality observed |
| test_to_chars.test | 10 | 0.000911s | 0.000888s | 0.001045s | byte equality observed |
| test_to_chars_2.test | 10 | 0.000922s | 0.000903s | 0.001025s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.000923s | 0.000908s | 0.001010s | byte equality observed |
| test_to_chars_3.test | 10 | 0.000911s | 0.000889s | 0.001038s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.000908s | 0.000912s | 0.001033s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.000938s | 0.000961s | 0.001077s | byte equality observed |
| test_uuid.test | 10 | 0.000907s | 0.000894s | 0.001028s | byte equality observed |
| test_uuid_2.test | 10 | 0.000912s | 0.000927s | 0.001040s | byte equality observed |
| test_uuid_3.test | 10 | 0.000918s | 0.000913s | 0.001025s | byte equality observed |
| test_uuid_class.test | 10 | 0.000941s | 0.000934s | 0.001037s | byte equality observed |
| test_uuid_clock.test | 10 | 0.000907s | 0.000916s | 0.001016s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.000918s | 0.000883s | 0.001028s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.000904s | 0.000910s | 0.001020s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.000889s | 0.000898s | 0.001024s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.000929s | 0.000899s | 0.001033s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.001078s | 0.001053s | 0.001245s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.001008s | 0.000962s | 0.001105s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.000907s | 0.000904s | 0.001032s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.000936s | 0.000930s | 0.001044s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.000935s | 0.000923s | 0.001026s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45790989032).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
