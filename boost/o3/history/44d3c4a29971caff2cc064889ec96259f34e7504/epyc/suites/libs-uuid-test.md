# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.423952 | 0.999610 | 1.444230 | 0.000663 | 0.000820 | 0.001684 |
| test_uuid.test | RUN | 0.257031 | 0.785802 | 1.002557 | 0.001773 | 0.001932 | 0.001820 |
| test_uuid_no_simd.test | RUN | 0.246961 | 0.766248 | 0.901425 | 0.001740 | 0.001844 | 0.001404 |
| test_uuid_2.test | RUN | 0.187906 | 0.615293 | 0.676939 | 0.001782 | 0.001946 | 0.001531 |
| test_uuid_3.test | RUN | 0.146944 | 0.393404 | 0.515679 | 0.001634 | 0.001871 | 0.001582 |
| test_alignment.test | RUN | 0.136990 | 0.352707 | 0.478363 | 0.001750 | 0.001830 | 0.001719 |
| test_alignment_2.test | RUN | 0.147455 | 0.366118 | 0.505138 | 0.001774 | 0.001887 | 0.001282 |
| test_attribute_packed.test | RUN | 0.136525 | 0.359283 | 0.507289 | 0.001639 | 0.001822 | 0.001411 |
| test_pragma_pack.test | RUN | 0.141068 | 0.361399 | 0.461649 | 0.001517 | 0.001865 | 0.001530 |
| test_data.test | RUN | 0.163687 | 0.642700 | 0.686323 | 0.001606 | 0.001878 | 0.001586 |
| test_comparison.test | RUN | 0.244970 | 0.748816 | 0.966184 | 0.001802 | 0.001968 | 0.001548 |
| test_comparison_no_simd.test | RUN | 0.227279 | 0.852245 | 0.790616 | 0.001697 | 0.001572 | 0.001798 |
| test_io.test | RUN | 0.303575 | 1.438692 | 1.386635 | 0.001850 | 0.002148 | 0.001772 |
| test_io_no_simd.test | RUN | 0.289818 | 1.407532 | 1.277956 | 0.001649 | 0.001921 | 0.001722 |
| test_io_2.test | RUN | 0.233873 | 1.446692 | 0.927564 | 0.001400 | 0.001694 | 0.001754 |
| test_io_2_no_simd.test | RUN | 0.212051 | 1.358826 | 0.883559 | 0.001686 | 0.001840 | 0.001621 |
| test_to_chars.test | RUN | 0.214955 | 0.927488 | 0.900307 | 0.001814 | 0.002065 | 0.001904 |
| test_to_chars_no_simd.test | RUN | 0.207376 | 0.926234 | 0.858070 | 0.001850 | 0.001908 | 0.001736 |
| test_to_chars_2.test | RUN | 0.249575 | 1.648606 | 1.040238 | 0.001786 | 0.001858 | 0.001538 |
| test_to_chars_2_no_simd.test | RUN | 0.256986 | 1.761906 | 0.954133 | 0.001351 | 0.001583 | 0.001478 |
| test_to_chars_3.test | RUN | 0.174978 | 0.608643 | 0.681113 | 0.001691 | 0.001672 | 0.001660 |
| test_from_chars.test | RUN | 0.198257 | 0.858604 | 0.732527 | 0.001706 | 0.001766 | 0.001650 |
| test_from_chars_no_simd.test | RUN | 0.176605 | 0.690108 | 0.616474 | 0.001690 | 0.001680 | 0.001588 |
| test_from_chars_2.test | RUN | 0.191754 | 0.810883 | 0.736359 | 0.001595 | 0.001908 | 0.001531 |
| test_from_chars_2_no_simd.test | RUN | 0.170497 | 0.611330 | 0.614264 | 0.001503 | 0.001852 | 0.001748 |
| test_uuid_from_string.test | RUN | 0.226087 | 0.883628 | 0.902050 | 0.001706 | 0.001922 | 0.001442 |
| test_uuid_from_string_2.test | RUN | 0.198600 | 0.804064 | 0.753140 | 0.001532 | 0.001950 | 0.001702 |
| test_uuid_from_string_3.test | RUN | 0.198583 | 0.809460 | 0.777412 | 0.001514 | 0.002064 | 0.001912 |
| test_uuid_clock.test | RUN | 0.128526 | 0.334912 | 0.476678 | 0.001494 | 0.001888 | 0.001283 |
| test_nil_generator.test | RUN | 0.151326 | 0.391005 | 0.526898 | 0.001828 | 0.001870 | 0.001744 |
| test_string_generator.test | RUN | 0.189501 | 0.662781 | 0.762774 | 0.001657 | 0.002034 | 0.001486 |
| test_string_generator_2.test | RUN | 0.234615 | 0.931575 | 0.838327 | 0.001634 | 0.001584 | 0.001722 |
| test_random_generator.test | RUN | 0.315110 | 1.743810 | 1.233453 | 0.002490 | 0.002794 | 0.002488 |
| test_random_generator_2.test | RUN | 0.236253 | 0.703684 | 0.867200 | 0.001347 | 0.001836 | 0.001624 |
| test_name_generator.test | RUN | 0.208046 | 2.440582 | 0.918754 | 0.001587 | 0.001943 | 0.001336 |
| test_namespaces.test | RUN | 0.167934 | 0.499489 | 0.592143 | 0.001549 | 0.001848 | 0.001622 |
| test_name_generator_md5.test | RUN | 0.206974 | 1.094464 | 0.892449 | 0.001697 | 0.001840 | 0.001778 |
| test_name_generator_sha1.test | RUN | 0.200917 | 3.436396 | 0.844108 | 0.001714 | 0.001958 | 0.001624 |
| test_time_generator.test | RUN | 0.219135 | 0.698109 | 0.865511 | 0.001546 | 0.001945 | 0.001583 |
| test_time_generator_v1.test | RUN | 0.241258 | 0.761564 | 0.946933 | 0.001938 | 0.002349 | 0.002015 |
| test_time_generator_v1_2.test | RUN | 0.243648 | 0.693941 | 0.872859 | 0.001828 | 0.002324 | 0.002020 |
| test_time_generator_v1_3.test | RUN | 0.260420 | 0.750841 | 0.985460 | 0.003418 | 0.004143 | 0.004649 |
| test_time_generator_v6.test | RUN | 0.241511 | 0.760250 | 0.954020 | 0.002101 | 0.002367 | 0.002338 |
| test_time_generator_v6_2.test | RUN | 0.240938 | 0.715459 | 0.929405 | 0.001770 | 0.002226 | 0.001976 |
| test_time_generator_v6_3.test | RUN | 0.264732 | 0.761598 | 0.972388 | 0.004300 | 0.004662 | 0.004719 |
| test_time_generator_v7.test | RUN | 0.233412 | 0.741204 | 0.909004 | 0.001712 | 0.002217 | 0.001380 |
| test_time_generator_v7_2.test | RUN | 0.221142 | 0.671530 | 0.820922 | 0.001486 | 0.001843 | 0.001606 |
| test_time_generator_v7_3.test | RUN | 0.220853 | 0.838304 | 0.866622 | 0.002233 | 0.002424 | 0.002371 |
| test_serialization.test | RUN | 0.416450 | 1.284059 | 1.498901 | 0.001946 | 0.001848 | 0.001839 |
| test_tagging.test | RUN | 0.224329 | 0.828208 | 0.876545 | 0.001660 | 0.001579 | 0.001636 |
| test_uuid_class.test | RUN | 0.234276 | 0.710326 | 0.911708 | 0.001733 | 0.001814 | 0.001670 |
| test_uuid_in_map.test | RUN | 0.254126 | 0.832052 | 0.977199 | 0.001546 | 0.001915 | 0.001388 |
| test_hash.test | RUN | 0.262240 | 0.754127 | 0.921436 | 0.001717 | 0.001932 | 0.001758 |
| test_hash_value.test | RUN | 0.187779 | 0.508538 | 0.680041 | 0.004680 | 0.004915 | 0.004771 |
| test_std_unordered.test | RUN | 0.249065 | 0.846925 | 0.969885 | 0.001703 | 0.002096 | 0.001618 |
| test_boost_unordered.test | RUN | 0.349219 | 1.070838 | 1.177515 | 0.001537 | 0.001787 | 0.001654 |
| test_detail_md5.test | RUN | 0.160108 | 0.519632 | 0.632378 | 0.001634 | 0.001856 | 0.001738 |
| test_detail_sha1.test | RUN | 0.148836 | 0.667819 | 0.585486 | 0.008903 | 0.009372 | 0.008456 |
| test_detail_endian.test | RUN | 0.117329 | 0.383177 | 0.431855 | 0.001770 | 0.001890 | 0.001757 |
| test_detail_chacha20.test | RUN | 0.132392 | 0.473081 | 0.431514 | 0.001718 | 0.001568 | 0.001533 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.122489 | 0.266325 | 0.360685 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.120304 | 0.274911 | 0.357648 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.200399 | 0.516660 | 0.673783 | 0.001790 | 0.001766 | 0.001670 |
| test_bench_random.test | RUN | 0.221026 | 0.701102 | 0.860623 | 0.005540 | 0.005819 | 0.005468 |
| test_entropy_error.test | RUN | 0.115453 | 0.330455 | 0.407667 | 0.001534 | 0.001792 | 0.001319 |
| test_detail_random_provider.test | RUN | 0.214779 | 0.547706 | 0.789688 | 0.001618 | 0.002000 | 0.001652 |
| test_constants.test | RUN | 0.175007 | 0.494977 | 0.631098 | 0.001314 | 0.001848 | 0.001617 |
| test_uuid_cx.test | COMPILE | 0.098311 | 0.232598 | 0.331843 | — | — | — |
| test_uuid_cx2.test | RUN | 0.179074 | 0.562127 | 0.686022 | 0.001652 | 0.001918 | 0.001667 |
| test_uuid_cx3.test | RUN | 0.159829 | 0.451816 | 0.587686 | 0.001557 | 0.001830 | 0.001716 |
| test_uuid_cx3_no_simd.test | RUN | 0.144989 | 0.429962 | 0.536446 | 0.001309 | 0.001748 | 0.001762 |
| test_hash_value_cx.test | RUN | 0.154743 | 0.398407 | 0.548965 | 0.001507 | 0.001844 | 0.001686 |
| test_string_generator_cx.test | RUN | 0.171756 | 0.507294 | 0.565180 | 0.001720 | 0.001836 | 0.001712 |
| test_string_generator_cx2.test | RUN | 0.209581 | 0.617810 | 0.699274 | 0.001629 | 0.001856 | 0.001640 |
| test_constants_cx.test | RUN | 0.145859 | 0.365090 | 0.524960 | 0.001512 | 0.001545 | 0.001566 |
| test_from_chars_cx.test | RUN | 0.182156 | 0.669781 | 0.649699 | 0.001608 | 0.001822 | 0.001710 |
| test_from_chars_cx2.test | RUN | 0.187178 | 0.818552 | 0.716709 | 0.001568 | 0.001872 | 0.001728 |
| test_to_chars_cx.test | RUN | 0.189907 | 0.769314 | 0.802818 | 0.001582 | 0.001768 | 0.001257 |
| test_uuid_from_string_cx.test | RUN | 0.195058 | 0.746810 | 0.650885 | 0.001316 | 0.001349 | 0.001514 |
| quick.test | RUN | 0.215137 | 0.578218 | 0.709801 | 0.001224 | 0.001396 | 0.001187 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.005× | 1.003×, 1.007× | 1.005× |
| clang | 0.998× | 0.993×, 1.003× | 1.013× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44815881069).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.001129s | 0.001147s | 0.001141s | byte equality observed |
| test_alignment.test | 10 | 0.001124s | 0.001154s | 0.001148s | byte equality observed |
| test_alignment_2.test | 10 | 0.001135s | 0.001132s | 0.001140s | byte equality observed |
| test_attribute_packed.test | 10 | 0.001145s | 0.001145s | 0.001154s | byte equality observed |
| test_bench_random.test | 4 | 0.005170s | 0.005172s | 0.005163s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.001197s | 0.001179s | 0.001221s | byte equality observed |
| test_comparison.test | 10 | 0.001193s | 0.001167s | 0.001193s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.001185s | 0.001180s | 0.001197s | byte equality observed |
| test_constants.test | 10 | 0.001145s | 0.001156s | 0.001125s | byte equality observed |
| test_constants_cx.test | 10 | 0.001123s | 0.001147s | 0.001112s | byte equality observed |
| test_data.test | 10 | 0.001137s | 0.001139s | 0.001150s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.001143s | 0.001142s | 0.001112s | byte equality observed |
| test_detail_endian.test | 10 | 0.001139s | 0.001135s | 0.001141s | byte equality observed |
| test_detail_md5.test | 10 | 0.001174s | 0.001158s | 0.001164s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.001151s | 0.001146s | 0.001164s | byte equality observed |
| test_detail_sha1.test | 3 | 0.008196s | 0.008475s | 0.007285s | byte equality observed |
| test_entropy_error.test | 10 | 0.001129s | 0.001132s | 0.001139s | byte equality observed |
| test_from_chars.test | 10 | 0.001111s | 0.001124s | 0.001137s | byte equality observed |
| test_from_chars_2.test | 10 | 0.001130s | 0.001096s | 0.001154s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.001138s | 0.001129s | 0.001132s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.001133s | 0.001154s | 0.001148s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.001149s | 0.001180s | 0.001154s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.001136s | 0.001170s | 0.001146s | byte equality observed |
| test_hash.test | 10 | 0.001163s | 0.001149s | 0.001138s | byte equality observed |
| test_hash_value.test | 6 | 0.004180s | 0.004131s | 0.004065s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.001119s | 0.001126s | 0.001131s | byte equality observed |
| test_include1.test | 10 | 0.000503s | 0.000492s | 0.001114s | byte equality observed |
| test_io.test | 10 | 0.001216s | 0.001216s | 0.001208s | byte equality observed |
| test_io_2.test | 10 | 0.001252s | 0.001301s | 0.001262s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.001288s | 0.001288s | 0.001287s | byte equality observed |
| test_io_no_simd.test | 10 | 0.001215s | 0.001236s | 0.001215s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.001168s | 0.001139s | 0.001130s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.001170s | 0.001177s | 0.001163s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.001165s | 0.001178s | 0.001164s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.001181s | 0.001195s | 0.001181s | byte equality observed |
| test_namespaces.test | 10 | 0.001123s | 0.001125s | 0.001158s | byte equality observed |
| test_nil_generator.test | 10 | 0.001133s | 0.001152s | 0.001166s | byte equality observed |
| test_pragma_pack.test | 10 | 0.001148s | 0.001147s | 0.001146s | byte equality observed |
| test_random_generator.test | 10 | 0.001998s | 0.001988s | 0.001982s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.001163s | 0.001170s | 0.001149s | byte equality observed |
| test_serialization.test | 10 | 0.001249s | 0.001279s | 0.001249s | byte equality observed |
| test_std_unordered.test | 10 | 0.001206s | 0.001228s | 0.001235s | byte equality observed |
| test_string_generator.test | 10 | 0.001252s | 0.001254s | 0.001274s | byte equality observed |
| test_string_generator_2.test | 10 | 0.001181s | 0.001185s | 0.001158s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.001163s | 0.001165s | 0.001130s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.001137s | 0.001158s | 0.001155s | byte equality observed |
| test_tagging.test | 10 | 0.001159s | 0.001129s | 0.001154s | byte equality observed |
| test_time_generator.test | 10 | 0.001171s | 0.001169s | 0.001157s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001587s | 0.001680s | 0.001684s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001395s | 0.001442s | 0.001429s | byte equality observed |
| test_time_generator_v1_3.test | 5 | 0.003626s | 0.003439s | 0.003495s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001585s | 0.001647s | 0.001688s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001394s | 0.001432s | 0.001428s | byte equality observed |
| test_time_generator_v6_3.test | 5 | 0.003571s | 0.003408s | 0.003462s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.001417s | 0.001448s | 0.001471s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.001215s | 0.001221s | 0.001235s | byte equality observed |
| test_time_generator_v7_3.test | 10 | 0.001801s | 0.001811s | 0.001810s | byte equality observed |
| test_to_chars.test | 10 | 0.001223s | 0.001215s | 0.001189s | byte equality observed |
| test_to_chars_2.test | 10 | 0.001140s | 0.001192s | 0.001158s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.001168s | 0.001182s | 0.001169s | byte equality observed |
| test_to_chars_3.test | 10 | 0.001157s | 0.001164s | 0.001147s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.001155s | 0.001151s | 0.001164s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.001199s | 0.001215s | 0.001217s | byte equality observed |
| test_uuid.test | 10 | 0.001159s | 0.001157s | 0.001148s | byte equality observed |
| test_uuid_2.test | 9 | 0.001158s | 0.001118s | 0.001131s | byte equality observed |
| test_uuid_3.test | 10 | 0.001145s | 0.001144s | 0.001150s | byte equality observed |
| test_uuid_class.test | 10 | 0.001166s | 0.001151s | 0.001143s | byte equality observed |
| test_uuid_clock.test | 10 | 0.001144s | 0.001119s | 0.001141s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.001148s | 0.001142s | 0.001120s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.001139s | 0.001132s | 0.001148s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.001138s | 0.001122s | 0.001148s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.001165s | 0.001162s | 0.001140s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.001424s | 0.001404s | 0.001486s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.001241s | 0.001261s | 0.001242s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.001148s | 0.001144s | 0.001141s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.001153s | 0.001145s | 0.001153s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.001128s | 0.001167s | 0.001123s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44815881069).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
