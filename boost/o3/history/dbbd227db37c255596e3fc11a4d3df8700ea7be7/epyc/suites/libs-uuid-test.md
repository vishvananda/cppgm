# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.425373 | 0.949044 | 1.456170 | 0.000657 | 0.000738 | 0.001738 |
| test_uuid.test | RUN | 0.257950 | 0.758350 | 1.018584 | 0.001789 | 0.001757 | 0.001840 |
| test_uuid_no_simd.test | RUN | 0.263163 | 0.725447 | 0.847294 | 0.001703 | 0.001664 | 0.001570 |
| test_uuid_2.test | RUN | 0.180788 | 0.561732 | 0.658885 | 0.001741 | 0.001694 | 0.001435 |
| test_uuid_3.test | RUN | 0.149567 | 0.377952 | 0.552485 | 0.001532 | 0.001805 | 0.001428 |
| test_alignment.test | RUN | 0.146511 | 0.338815 | 0.479344 | 0.001664 | 0.001860 | 0.001772 |
| test_alignment_2.test | RUN | 0.142449 | 0.354744 | 0.498758 | 0.001815 | 0.001539 | 0.001455 |
| test_attribute_packed.test | RUN | 0.142382 | 0.353502 | 0.466362 | 0.001713 | 0.001705 | 0.001470 |
| test_pragma_pack.test | RUN | 0.139173 | 0.345821 | 0.505068 | 0.001638 | 0.001820 | 0.001650 |
| test_data.test | RUN | 0.163734 | 0.633042 | 0.659156 | 0.001586 | 0.001542 | 0.001761 |
| test_comparison.test | RUN | 0.249184 | 0.728946 | 0.937924 | 0.001828 | 0.001802 | 0.001661 |
| test_comparison_no_simd.test | RUN | 0.233920 | 0.831904 | 0.852665 | 0.001626 | 0.001788 | 0.001716 |
| test_io.test | RUN | 0.307841 | 1.379878 | 1.309677 | 0.001904 | 0.001869 | 0.001797 |
| test_io_no_simd.test | RUN | 0.291560 | 1.349292 | 1.283559 | 0.001658 | 0.001712 | 0.001668 |
| test_io_2.test | RUN | 0.235407 | 1.398532 | 0.977740 | 0.001779 | 0.001670 | 0.001770 |
| test_io_2_no_simd.test | RUN | 0.208254 | 1.325846 | 0.844723 | 0.002012 | 0.001873 | 0.001872 |
| test_to_chars.test | RUN | 0.217824 | 0.879086 | 0.888430 | 0.001859 | 0.001896 | 0.001755 |
| test_to_chars_no_simd.test | RUN | 0.208064 | 0.881584 | 0.838696 | 0.001884 | 0.001858 | 0.001849 |
| test_to_chars_2.test | RUN | 0.258534 | 1.612029 | 1.027870 | 0.001742 | 0.001718 | 0.001888 |
| test_to_chars_2_no_simd.test | RUN | 0.263634 | 1.714150 | 0.948277 | 0.001663 | 0.001597 | 0.001686 |
| test_to_chars_3.test | RUN | 0.176263 | 0.582491 | 0.673748 | 0.001460 | 0.001521 | 0.001532 |
| test_from_chars.test | RUN | 0.205778 | 0.828956 | 0.756482 | 0.001467 | 0.001683 | 0.001654 |
| test_from_chars_no_simd.test | RUN | 0.160960 | 0.664808 | 0.622906 | 0.001604 | 0.001474 | 0.001652 |
| test_from_chars_2.test | RUN | 0.196520 | 0.798868 | 0.734707 | 0.001367 | 0.001762 | 0.001659 |
| test_from_chars_2_no_simd.test | RUN | 0.156456 | 0.607193 | 0.606583 | 0.001665 | 0.001820 | 0.001350 |
| test_uuid_from_string.test | RUN | 0.231936 | 0.863273 | 0.873647 | 0.001274 | 0.001879 | 0.001387 |
| test_uuid_from_string_2.test | RUN | 0.203925 | 0.778719 | 0.739495 | 0.002080 | 0.001977 | 0.001758 |
| test_uuid_from_string_3.test | RUN | 0.206839 | 0.793792 | 0.797630 | 0.002185 | 0.001950 | 0.001853 |
| test_uuid_clock.test | RUN | 0.128480 | 0.326395 | 0.475363 | 0.001373 | 0.001857 | 0.001470 |
| test_nil_generator.test | RUN | 0.143969 | 0.377502 | 0.528217 | 0.001632 | 0.001605 | 0.001837 |
| test_string_generator.test | RUN | 0.191391 | 0.637125 | 0.754174 | 0.001519 | 0.002006 | 0.001610 |
| test_string_generator_2.test | RUN | 0.237131 | 0.891473 | 0.831762 | 0.001709 | 0.001533 | 0.001739 |
| test_random_generator.test | RUN | 0.322021 | 1.704605 | 1.235614 | 0.002499 | 0.002673 | 0.002553 |
| test_random_generator_2.test | RUN | 0.234932 | 0.677387 | 0.848944 | 0.001640 | 0.001747 | 0.001720 |
| test_name_generator.test | RUN | 0.207900 | 2.191900 | 0.889519 | 0.001489 | 0.001720 | 0.001439 |
| test_namespaces.test | RUN | 0.171248 | 0.481433 | 0.605274 | 0.001356 | 0.001734 | 0.001654 |
| test_name_generator_md5.test | RUN | 0.214037 | 1.042043 | 0.858294 | 0.001573 | 0.001891 | 0.001781 |
| test_name_generator_sha1.test | RUN | 0.207865 | 3.241892 | 0.856596 | 0.001804 | 0.001757 | 0.001780 |
| test_time_generator.test | RUN | 0.228360 | 0.674742 | 0.816099 | 0.001623 | 0.001826 | 0.001536 |
| test_time_generator_v1.test | RUN | 0.252053 | 0.705699 | 0.926331 | 0.002056 | 0.002334 | 0.002304 |
| test_time_generator_v1_2.test | RUN | 0.248648 | 0.685699 | 0.876723 | 0.001756 | 0.002139 | 0.002009 |
| test_time_generator_v1_3.test | RUN | 0.268603 | 0.720892 | 0.978289 | 0.004632 | 0.003453 | 0.004470 |
| test_time_generator_v6.test | RUN | 0.249868 | 0.735641 | 0.922988 | 0.002077 | 0.002384 | 0.002358 |
| test_time_generator_v6_2.test | RUN | 0.243732 | 0.686754 | 0.895440 | 0.001656 | 0.002141 | 0.002102 |
| test_time_generator_v6_3.test | RUN | 0.268271 | 0.729226 | 0.976913 | 0.004422 | 0.003625 | 0.003502 |
| test_time_generator_v7.test | RUN | 0.236118 | 0.711252 | 0.897262 | 0.001956 | 0.001951 | 0.001830 |
| test_time_generator_v7_2.test | RUN | 0.223612 | 0.648859 | 0.858763 | 0.001517 | 0.002010 | 0.001771 |
| test_time_generator_v7_3.test | RUN | 0.220383 | 0.817122 | 0.843222 | 0.002024 | 0.002581 | 0.002339 |
| test_serialization.test | RUN | 0.408473 | 1.251075 | 1.473751 | 0.001858 | 0.001496 | 0.001872 |
| test_tagging.test | RUN | 0.229018 | 0.783057 | 0.826018 | 0.001592 | 0.001387 | 0.001622 |
| test_uuid_class.test | RUN | 0.234483 | 0.684837 | 0.921698 | 0.001377 | 0.001311 | 0.001468 |
| test_uuid_in_map.test | RUN | 0.259541 | 0.812685 | 1.010215 | 0.001538 | 0.001858 | 0.001742 |
| test_hash.test | RUN | 0.259504 | 0.720305 | 0.893960 | 0.001610 | 0.001865 | 0.001714 |
| test_hash_value.test | RUN | 0.183687 | 0.504307 | 0.668609 | 0.004790 | 0.004877 | 0.004842 |
| test_std_unordered.test | RUN | 0.242596 | 0.805187 | 0.903858 | 0.001752 | 0.001809 | 0.002042 |
| test_boost_unordered.test | RUN | 0.357101 | 1.050684 | 1.145901 | 0.001712 | 0.001608 | 0.001822 |
| test_detail_md5.test | RUN | 0.165906 | 0.502438 | 0.679701 | 0.001543 | 0.001775 | 0.001717 |
| test_detail_sha1.test | RUN | 0.150575 | 0.632015 | 0.607165 | 0.009651 | 0.009365 | 0.008389 |
| test_detail_endian.test | RUN | 0.119524 | 0.366585 | 0.445533 | 0.001437 | 0.001718 | 0.001804 |
| test_detail_chacha20.test | RUN | 0.131938 | 0.456720 | 0.454852 | 0.001524 | 0.001751 | 0.001536 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.118787 | 0.271456 | 0.372098 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.119587 | 0.259077 | 0.375169 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.202009 | 0.512266 | 0.692305 | 0.001742 | 0.001690 | 0.001701 |
| test_bench_random.test | RUN | 0.221194 | 0.664790 | 0.846736 | 0.005853 | 0.005691 | 0.005382 |
| test_entropy_error.test | RUN | 0.111476 | 0.312348 | 0.405401 | 0.001720 | 0.001835 | 0.001453 |
| test_detail_random_provider.test | RUN | 0.213163 | 0.521121 | 0.780633 | 0.001426 | 0.001690 | 0.001617 |
| test_constants.test | RUN | 0.167972 | 0.483417 | 0.626246 | 0.001727 | 0.001740 | 0.002230 |
| test_uuid_cx.test | COMPILE | 0.097903 | 0.233482 | 0.322675 | — | — | — |
| test_uuid_cx2.test | RUN | 0.179201 | 0.553029 | 0.717994 | 0.001782 | 0.001799 | 0.001718 |
| test_uuid_cx3.test | RUN | 0.156107 | 0.427121 | 0.639090 | 0.001364 | 0.001519 | 0.001640 |
| test_uuid_cx3_no_simd.test | RUN | 0.146961 | 0.407741 | 0.575724 | 0.001345 | 0.001736 | 0.001674 |
| test_hash_value_cx.test | RUN | 0.148032 | 0.378675 | 0.573034 | 0.001550 | 0.001691 | 0.001473 |
| test_string_generator_cx.test | RUN | 0.168163 | 0.477363 | 0.592880 | 0.001446 | 0.001739 | 0.001690 |
| test_string_generator_cx2.test | RUN | 0.210247 | 0.602278 | 0.708109 | 0.001496 | 0.001868 | 0.001746 |
| test_constants_cx.test | RUN | 0.142423 | 0.349550 | 0.524591 | 0.001622 | 0.001605 | 0.001199 |
| test_from_chars_cx.test | RUN | 0.182039 | 0.634018 | 0.648092 | 0.001586 | 0.001851 | 0.001534 |
| test_from_chars_cx2.test | RUN | 0.191351 | 0.784793 | 0.710384 | 0.001703 | 0.001901 | 0.001852 |
| test_to_chars_cx.test | RUN | 0.190969 | 0.716152 | 0.781958 | 0.001795 | 0.001788 | 0.001329 |
| test_uuid_from_string_cx.test | RUN | 0.201573 | 0.731976 | 0.743152 | 0.001298 | 0.001268 | 0.001210 |
| quick.test | RUN | 0.211883 | 0.556821 | 0.633149 | 0.001075 | 0.001254 | 0.001235 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 1.014×, 0.988× | 1.008× |
| clang | 0.995× | 1.002×, 0.987× | 1.008× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44922642903).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.001162s | 0.001117s | 0.001169s | byte equality observed |
| test_alignment.test | 10 | 0.001167s | 0.001146s | 0.001177s | byte equality observed |
| test_alignment_2.test | 10 | 0.001161s | 0.001161s | 0.001164s | byte equality observed |
| test_attribute_packed.test | 10 | 0.001164s | 0.001146s | 0.001195s | byte equality observed |
| test_bench_random.test | 4 | 0.005224s | 0.005194s | 0.005226s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.001228s | 0.001225s | 0.001240s | byte equality observed |
| test_comparison.test | 10 | 0.001197s | 0.001188s | 0.001212s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.001212s | 0.001189s | 0.001213s | byte equality observed |
| test_constants.test | 10 | 0.001158s | 0.001164s | 0.001165s | byte equality observed |
| test_constants_cx.test | 10 | 0.001129s | 0.001116s | 0.001173s | byte equality observed |
| test_data.test | 10 | 0.001147s | 0.001143s | 0.001184s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.001151s | 0.001179s | 0.001148s | byte equality observed |
| test_detail_endian.test | 10 | 0.001167s | 0.001156s | 0.001174s | byte equality observed |
| test_detail_md5.test | 10 | 0.001202s | 0.001167s | 0.001187s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.001160s | 0.001151s | 0.001186s | byte equality observed |
| test_detail_sha1.test | 3 | 0.008554s | 0.008398s | 0.007738s | byte equality observed |
| test_entropy_error.test | 10 | 0.001166s | 0.001141s | 0.001162s | byte equality observed |
| test_from_chars.test | 10 | 0.001148s | 0.001120s | 0.001166s | byte equality observed |
| test_from_chars_2.test | 10 | 0.001140s | 0.001149s | 0.001178s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.001153s | 0.001169s | 0.001185s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.001133s | 0.001166s | 0.001171s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.001158s | 0.001148s | 0.001152s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.001149s | 0.001168s | 0.001171s | byte equality observed |
| test_hash.test | 10 | 0.001187s | 0.001173s | 0.001186s | byte equality observed |
| test_hash_value.test | 6 | 0.004206s | 0.004069s | 0.004113s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.001144s | 0.001151s | 0.001151s | byte equality observed |
| test_include1.test | 10 | 0.000508s | 0.000504s | 0.001145s | byte equality observed |
| test_io.test | 10 | 0.001242s | 0.001213s | 0.001237s | byte equality observed |
| test_io_2.test | 10 | 0.001289s | 0.001234s | 0.001321s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.001306s | 0.001303s | 0.001332s | byte equality observed |
| test_io_no_simd.test | 10 | 0.001248s | 0.001210s | 0.001251s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.001158s | 0.001102s | 0.001183s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.001197s | 0.001185s | 0.001210s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.001198s | 0.001179s | 0.001176s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.001208s | 0.001222s | 0.001215s | byte equality observed |
| test_namespaces.test | 10 | 0.001161s | 0.001181s | 0.001180s | byte equality observed |
| test_nil_generator.test | 10 | 0.001150s | 0.001170s | 0.001164s | byte equality observed |
| test_pragma_pack.test | 10 | 0.001165s | 0.001129s | 0.001144s | byte equality observed |
| test_random_generator.test | 9 | 0.002029s | 0.002022s | 0.001975s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.001164s | 0.001138s | 0.001197s | byte equality observed |
| test_serialization.test | 10 | 0.001286s | 0.001255s | 0.001290s | byte equality observed |
| test_std_unordered.test | 10 | 0.001247s | 0.001226s | 0.001249s | byte equality observed |
| test_string_generator.test | 10 | 0.001267s | 0.001275s | 0.001306s | byte equality observed |
| test_string_generator_2.test | 10 | 0.001201s | 0.001171s | 0.001213s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.001158s | 0.001158s | 0.001174s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.001190s | 0.001147s | 0.001178s | byte equality observed |
| test_tagging.test | 10 | 0.001175s | 0.001171s | 0.001193s | byte equality observed |
| test_time_generator.test | 10 | 0.001191s | 0.001153s | 0.001177s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001606s | 0.001681s | 0.001740s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001437s | 0.001463s | 0.001508s | byte equality observed |
| test_time_generator_v1_3.test | 6 | 0.003661s | 0.003679s | 0.003693s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001606s | 0.001685s | 0.001758s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001426s | 0.001446s | 0.001485s | byte equality observed |
| test_time_generator_v6_3.test | 6 | 0.003705s | 0.003555s | 0.003578s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.001440s | 0.001475s | 0.001502s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.001260s | 0.001214s | 0.001250s | byte equality observed |
| test_time_generator_v7_3.test | 10 | 0.001864s | 0.001821s | 0.001856s | byte equality observed |
| test_to_chars.test | 10 | 0.001257s | 0.001222s | 0.001261s | byte equality observed |
| test_to_chars_2.test | 10 | 0.001176s | 0.001217s | 0.001190s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.001196s | 0.001205s | 0.001191s | byte equality observed |
| test_to_chars_3.test | 10 | 0.001171s | 0.001173s | 0.001188s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.001172s | 0.001157s | 0.001197s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.001231s | 0.001230s | 0.001272s | byte equality observed |
| test_uuid.test | 10 | 0.001175s | 0.001151s | 0.001173s | byte equality observed |
| test_uuid_2.test | 10 | 0.001190s | 0.001131s | 0.001160s | byte equality observed |
| test_uuid_3.test | 10 | 0.001172s | 0.001127s | 0.001194s | byte equality observed |
| test_uuid_class.test | 10 | 0.001188s | 0.001188s | 0.001183s | byte equality observed |
| test_uuid_clock.test | 10 | 0.001172s | 0.001143s | 0.001167s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.001159s | 0.001162s | 0.001191s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.001134s | 0.001170s | 0.001188s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.001148s | 0.001142s | 0.001182s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.001195s | 0.001164s | 0.001211s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.001446s | 0.001424s | 0.001507s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.001252s | 0.001245s | 0.001284s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.001178s | 0.001143s | 0.001187s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.001170s | 0.001147s | 0.001165s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.001176s | 0.001164s | 0.001184s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44922642903).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
