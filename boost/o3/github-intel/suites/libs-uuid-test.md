# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.453296 | 1.103865 | 1.460193 | 0.000697 | 0.000713 | 0.001606 |
| test_uuid.test | RUN | 0.295306 | 0.900782 | 1.062052 | 0.001673 | 0.001621 | 0.001654 |
| test_uuid_no_simd.test | RUN | 0.283642 | 0.878632 | 0.981477 | 0.001680 | 0.001570 | 0.001429 |
| test_uuid_2.test | RUN | 0.201613 | 0.664917 | 0.736861 | 0.001565 | 0.001656 | 0.001429 |
| test_uuid_3.test | RUN | 0.169404 | 0.453719 | 0.590552 | 0.001679 | 0.001648 | 0.001488 |
| test_alignment.test | RUN | 0.154825 | 0.410431 | 0.521340 | 0.001786 | 0.001575 | 0.001670 |
| test_alignment_2.test | RUN | 0.152867 | 0.397950 | 0.489538 | 0.001574 | 0.001502 | 0.001508 |
| test_attribute_packed.test | RUN | 0.157336 | 0.411426 | 0.503524 | 0.001678 | 0.001779 | 0.001444 |
| test_pragma_pack.test | RUN | 0.152496 | 0.417082 | 0.501960 | 0.001583 | 0.001787 | 0.001570 |
| test_data.test | RUN | 0.189739 | 0.740606 | 0.719102 | 0.001617 | 0.001590 | 0.001664 |
| test_comparison.test | RUN | 0.263094 | 0.883437 | 0.985068 | 0.001718 | 0.001737 | 0.001696 |
| test_comparison_no_simd.test | RUN | 0.266346 | 1.002007 | 0.869285 | 0.001767 | 0.001636 | 0.001560 |
| test_io.test | RUN | 0.362195 | 1.685785 | 1.503143 | 0.001792 | 0.001859 | 0.001827 |
| test_io_no_simd.test | RUN | 0.343006 | 1.678499 | 1.442518 | 0.001566 | 0.001813 | 0.001749 |
| test_io_2.test | RUN | 0.278526 | 1.736976 | 1.038560 | 0.001573 | 0.001756 | 0.001803 |
| test_io_2_no_simd.test | RUN | 0.254926 | 1.656650 | 0.972760 | 0.001784 | 0.001689 | 0.001712 |
| test_to_chars.test | RUN | 0.248043 | 1.091972 | 0.975969 | 0.001750 | 0.001831 | 0.001752 |
| test_to_chars_no_simd.test | RUN | 0.244524 | 1.106894 | 0.933282 | 0.001878 | 0.001753 | 0.001735 |
| test_to_chars_2.test | RUN | 0.308795 | 2.006428 | 1.159550 | 0.001746 | 0.001736 | 0.001702 |
| test_to_chars_2_no_simd.test | RUN | 0.315405 | 2.162788 | 1.059225 | 0.001565 | 0.001739 | 0.001672 |
| test_to_chars_3.test | RUN | 0.201421 | 0.703318 | 0.681380 | 0.001680 | 0.001737 | 0.001622 |
| test_from_chars.test | RUN | 0.235915 | 1.032852 | 0.789227 | 0.001537 | 0.001713 | 0.001563 |
| test_from_chars_no_simd.test | RUN | 0.206175 | 0.815356 | 0.652895 | 0.001546 | 0.001596 | 0.001574 |
| test_from_chars_2.test | RUN | 0.229222 | 0.958612 | 0.773589 | 0.001485 | 0.001568 | 0.001459 |
| test_from_chars_2_no_simd.test | RUN | 0.200529 | 0.728335 | 0.628539 | 0.001660 | 0.001537 | 0.001592 |
| test_uuid_from_string.test | RUN | 0.265845 | 1.055481 | 0.945869 | 0.002072 | 0.001624 | 0.001516 |
| test_uuid_from_string_2.test | RUN | 0.237256 | 0.957607 | 0.793883 | 0.002595 | 0.001959 | 0.001810 |
| test_uuid_from_string_3.test | RUN | 0.235093 | 0.961721 | 0.831716 | 0.001529 | 0.001842 | 0.001821 |
| test_uuid_clock.test | RUN | 0.142777 | 0.385689 | 0.485629 | 0.001538 | 0.001716 | 0.001486 |
| test_nil_generator.test | RUN | 0.167845 | 0.452893 | 0.572198 | 0.001560 | 0.001726 | 0.001649 |
| test_string_generator.test | RUN | 0.221072 | 0.767526 | 0.788327 | 0.001938 | 0.001770 | 0.001794 |
| test_string_generator_2.test | RUN | 0.274726 | 1.084899 | 0.884632 | 0.001612 | 0.001706 | 0.001714 |
| test_random_generator.test | RUN | 0.364682 | 2.106724 | 1.340061 | 0.003722 | 0.003919 | 0.003856 |
| test_random_generator_2.test | RUN | 0.264087 | 0.815144 | 0.906221 | 0.001806 | 0.001815 | 0.001500 |
| test_name_generator.test | RUN | 0.241267 | 2.772724 | 0.977398 | 0.001494 | 0.001927 | 0.001579 |
| test_namespaces.test | RUN | 0.190406 | 0.573198 | 0.643216 | 0.001443 | 0.001632 | 0.001604 |
| test_name_generator_md5.test | RUN | 0.243803 | 1.300072 | 0.939009 | 0.001508 | 0.001821 | 0.001711 |
| test_name_generator_sha1.test | RUN | 0.235755 | 4.083912 | 0.929391 | 0.001810 | 0.001788 | 0.001542 |
| test_time_generator.test | RUN | 0.249342 | 0.800416 | 0.882874 | 0.001322 | 0.001724 | 0.001554 |
| test_time_generator_v1.test | RUN | 0.279244 | 0.878551 | 0.966488 | 0.002184 | 0.002214 | 0.002299 |
| test_time_generator_v1_2.test | RUN | 0.280998 | 0.831283 | 0.920844 | 0.001920 | 0.002060 | 0.002024 |
| test_time_generator_v1_3.test | RUN | 0.301532 | 0.867585 | 1.034172 | 0.003932 | 0.005249 | 0.005278 |
| test_time_generator_v6.test | RUN | 0.278101 | 0.876507 | 0.985630 | 0.002214 | 0.002212 | 0.002209 |
| test_time_generator_v6_2.test | RUN | 0.278377 | 0.822840 | 0.930854 | 0.001992 | 0.002122 | 0.001942 |
| test_time_generator_v6_3.test | RUN | 0.299980 | 0.883995 | 1.038682 | 0.004314 | 0.004601 | 0.004977 |
| test_time_generator_v7.test | RUN | 0.267683 | 0.881414 | 0.956376 | 0.001817 | 0.002054 | 0.001882 |
| test_time_generator_v7_2.test | RUN | 0.250291 | 0.776515 | 0.876333 | 0.001332 | 0.001826 | 0.001705 |
| test_time_generator_v7_3.test | RUN | 0.252492 | 1.024976 | 0.878507 | 0.002583 | 0.002815 | 0.002724 |
| test_serialization.test | RUN | 0.449239 | 1.507769 | 1.617340 | 0.001840 | 0.001741 | 0.001876 |
| test_tagging.test | RUN | 0.255577 | 0.943259 | 0.906133 | 0.001579 | 0.001719 | 0.001585 |
| test_uuid_class.test | RUN | 0.266556 | 0.837622 | 0.957889 | 0.001673 | 0.001583 | 0.001469 |
| test_uuid_in_map.test | RUN | 0.294839 | 0.965209 | 1.020236 | 0.001516 | 0.001477 | 0.001645 |
| test_hash.test | RUN | 0.285330 | 0.863222 | 0.959315 | 0.001633 | 0.001772 | 0.001652 |
| test_hash_value.test | RUN | 0.219214 | 0.600376 | 0.693899 | 0.005632 | 0.005602 | 0.005395 |
| test_std_unordered.test | RUN | 0.281131 | 0.981309 | 0.959739 | 0.001738 | 0.001834 | 0.001768 |
| test_boost_unordered.test | RUN | 0.386960 | 1.257286 | 1.252488 | 0.001528 | 0.001774 | 0.001553 |
| test_detail_md5.test | RUN | 0.178883 | 0.605113 | 0.676253 | 0.001518 | 0.001600 | 0.001555 |
| test_detail_sha1.test | RUN | 0.170578 | 0.785834 | 0.644674 | 0.010286 | 0.010411 | 0.009560 |
| test_detail_endian.test | RUN | 0.134048 | 0.438893 | 0.446800 | 0.001556 | 0.001742 | 0.001607 |
| test_detail_chacha20.test | RUN | 0.145578 | 0.546003 | 0.484982 | 0.001750 | 0.001609 | 0.001645 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.129503 | 0.304818 | 0.379542 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.129743 | 0.308008 | 0.376549 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.220246 | 0.600761 | 0.677689 | 0.001705 | 0.001708 | 0.001615 |
| test_bench_random.test | RUN | 0.252036 | 0.799954 | 0.909806 | 0.012542 | 0.012589 | 0.012424 |
| test_entropy_error.test | RUN | 0.127559 | 0.361851 | 0.414030 | 0.001620 | 0.001860 | 0.001523 |
| test_detail_random_provider.test | RUN | 0.241301 | 0.617900 | 0.781337 | 0.001779 | 0.001804 | 0.001627 |
| test_constants.test | RUN | 0.193170 | 0.571108 | 0.632175 | 0.001560 | 0.001602 | 0.001653 |
| test_uuid_cx.test | COMPILE | 0.107239 | 0.264860 | 0.310812 | — | — | — |
| test_uuid_cx2.test | RUN | 0.204327 | 0.654775 | 0.689730 | 0.001660 | 0.001684 | 0.001656 |
| test_uuid_cx3.test | RUN | 0.177213 | 0.513526 | 0.637460 | 0.001564 | 0.001772 | 0.001620 |
| test_uuid_cx3_no_simd.test | RUN | 0.168391 | 0.472649 | 0.553931 | 0.001640 | 0.001554 | 0.001632 |
| test_hash_value_cx.test | RUN | 0.168124 | 0.457709 | 0.554790 | 0.001502 | 0.001693 | 0.001342 |
| test_string_generator_cx.test | RUN | 0.193905 | 0.576728 | 0.637299 | 0.001828 | 0.001675 | 0.001509 |
| test_string_generator_cx2.test | RUN | 0.248770 | 0.713205 | 0.751771 | 0.001624 | 0.001678 | 0.001704 |
| test_constants_cx.test | RUN | 0.160468 | 0.387990 | 0.509575 | 0.001375 | 0.001720 | 0.001612 |
| test_from_chars_cx.test | RUN | 0.218561 | 0.770925 | 0.707559 | 0.001666 | 0.001780 | 0.001475 |
| test_from_chars_cx2.test | RUN | 0.219008 | 0.953097 | 0.781868 | 0.001818 | 0.001663 | 0.001743 |
| test_to_chars_cx.test | RUN | 0.221993 | 0.887341 | 0.835202 | 0.001172 | 0.001631 | 0.001792 |
| test_uuid_from_string_cx.test | RUN | 0.233915 | 0.890923 | 0.804503 | 0.001311 | 0.001295 | 0.001174 |
| quick.test | RUN | 0.249952 | 0.681860 | 0.740756 | 0.001179 | 0.001218 | 0.001045 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.005× | 1.000×, 1.009× | 0.986× |
| clang | 1.000× | 0.998×, 1.001× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44597827043).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.001197s | 0.001186s | 0.001140s | byte equality observed |
| test_alignment.test | 10 | 0.001186s | 0.001166s | 0.001170s | byte equality observed |
| test_alignment_2.test | 10 | 0.001166s | 0.001173s | 0.001152s | byte equality observed |
| test_attribute_packed.test | 10 | 0.001154s | 0.001128s | 0.001148s | byte equality observed |
| test_bench_random.test | 2 | 0.012133s | 0.012088s | 0.012109s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.001196s | 0.001180s | 0.001167s | byte equality observed |
| test_comparison.test | 10 | 0.001202s | 0.001225s | 0.001198s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.001219s | 0.001218s | 0.001205s | byte equality observed |
| test_constants.test | 10 | 0.001206s | 0.001181s | 0.001197s | byte equality observed |
| test_constants_cx.test | 10 | 0.001157s | 0.001162s | 0.001150s | byte equality observed |
| test_data.test | 10 | 0.001198s | 0.001206s | 0.001204s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.001196s | 0.001175s | 0.001203s | byte equality observed |
| test_detail_endian.test | 10 | 0.001188s | 0.001197s | 0.001186s | byte equality observed |
| test_detail_md5.test | 10 | 0.001213s | 0.001212s | 0.001235s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.001223s | 0.001171s | 0.001210s | byte equality observed |
| test_detail_sha1.test | 3 | 0.009278s | 0.009586s | 0.008450s | byte equality observed |
| test_entropy_error.test | 10 | 0.001182s | 0.001191s | 0.001193s | byte equality observed |
| test_from_chars.test | 10 | 0.001194s | 0.001156s | 0.001193s | byte equality observed |
| test_from_chars_2.test | 10 | 0.001209s | 0.001188s | 0.001218s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.001208s | 0.001193s | 0.001207s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.001182s | 0.001184s | 0.001185s | byte equality observed |
| test_from_chars_cx2.test | 9 | 0.001201s | 0.001188s | 0.001197s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.001191s | 0.001202s | 0.001208s | byte equality observed |
| test_hash.test | 10 | 0.001204s | 0.001212s | 0.001209s | byte equality observed |
| test_hash_value.test | 5 | 0.004907s | 0.004750s | 0.004735s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.001189s | 0.001176s | 0.001185s | byte equality observed |
| test_include1.test | 10 | 0.000526s | 0.000523s | 0.001162s | byte equality observed |
| test_io.test | 10 | 0.001293s | 0.001296s | 0.001265s | byte equality observed |
| test_io_2.test | 9 | 0.001337s | 0.001307s | 0.001373s | byte equality observed |
| test_io_2_no_simd.test | 9 | 0.001353s | 0.001380s | 0.001338s | byte equality observed |
| test_io_no_simd.test | 10 | 0.001273s | 0.001301s | 0.001246s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.001175s | 0.001193s | 0.001194s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.001233s | 0.001237s | 0.001217s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.001240s | 0.001193s | 0.001232s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.001252s | 0.001231s | 0.001223s | byte equality observed |
| test_namespaces.test | 10 | 0.001205s | 0.001192s | 0.001199s | byte equality observed |
| test_nil_generator.test | 10 | 0.001150s | 0.001179s | 0.001170s | byte equality observed |
| test_pragma_pack.test | 10 | 0.001158s | 0.001199s | 0.001172s | byte equality observed |
| test_random_generator.test | 6 | 0.003349s | 0.003339s | 0.003333s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.001209s | 0.001189s | 0.001174s | byte equality observed |
| test_serialization.test | 10 | 0.001309s | 0.001304s | 0.001285s | byte equality observed |
| test_std_unordered.test | 10 | 0.001279s | 0.001275s | 0.001252s | byte equality observed |
| test_string_generator.test | 10 | 0.001316s | 0.001305s | 0.001307s | byte equality observed |
| test_string_generator_2.test | 10 | 0.001204s | 0.001241s | 0.001224s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.001200s | 0.001192s | 0.001202s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.001217s | 0.001205s | 0.001199s | byte equality observed |
| test_tagging.test | 10 | 0.001209s | 0.001215s | 0.001182s | byte equality observed |
| test_time_generator.test | 10 | 0.001212s | 0.001224s | 0.001215s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001687s | 0.001766s | 0.001838s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001531s | 0.001538s | 0.001572s | byte equality observed |
| test_time_generator_v1_3.test | 4 | 0.004103s | 0.004300s | 0.004509s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001737s | 0.001751s | 0.001845s | byte equality observed |
| test_time_generator_v6_2.test | 9 | 0.001509s | 0.001505s | 0.001571s | byte equality observed |
| test_time_generator_v6_3.test | 4 | 0.004353s | 0.004540s | 0.004705s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.001497s | 0.001509s | 0.001559s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.001268s | 0.001244s | 0.001237s | byte equality observed |
| test_time_generator_v7_3.test | 8 | 0.002306s | 0.002295s | 0.002263s | byte equality observed |
| test_to_chars.test | 10 | 0.001244s | 0.001249s | 0.001240s | byte equality observed |
| test_to_chars_2.test | 10 | 0.001218s | 0.001226s | 0.001194s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.001213s | 0.001207s | 0.001203s | byte equality observed |
| test_to_chars_3.test | 10 | 0.001224s | 0.001202s | 0.001190s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.001214s | 0.001197s | 0.001201s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.001277s | 0.001261s | 0.001244s | byte equality observed |
| test_uuid.test | 10 | 0.001191s | 0.001194s | 0.001176s | byte equality observed |
| test_uuid_2.test | 10 | 0.001206s | 0.001164s | 0.001202s | byte equality observed |
| test_uuid_3.test | 10 | 0.001188s | 0.001200s | 0.001200s | byte equality observed |
| test_uuid_class.test | 10 | 0.001223s | 0.001205s | 0.001188s | byte equality observed |
| test_uuid_clock.test | 10 | 0.001184s | 0.001175s | 0.001189s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.001218s | 0.001236s | 0.001184s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.001174s | 0.001182s | 0.001161s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.001202s | 0.001170s | 0.001187s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.001209s | 0.001214s | 0.001203s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.001503s | 0.001499s | 0.001553s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.001304s | 0.001308s | 0.001317s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.001209s | 0.001178s | 0.001197s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.001221s | 0.001202s | 0.001159s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.001188s | 0.001194s | 0.001189s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44597827043).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
