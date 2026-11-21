# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.438522 | 0.976274 | 1.470334 | 0.000773 | 0.000727 | 0.001802 |
| test_uuid.test | RUN | 0.263384 | 0.788393 | 1.071189 | 0.001874 | 0.001899 | 0.001887 |
| test_uuid_no_simd.test | RUN | 0.255884 | 0.767477 | 0.903426 | 0.001963 | 0.001756 | 0.001922 |
| test_uuid_2.test | RUN | 0.199109 | 0.570281 | 0.689278 | 0.001765 | 0.001942 | 0.001534 |
| test_uuid_3.test | RUN | 0.156233 | 0.406426 | 0.573663 | 0.001926 | 0.001974 | 0.001442 |
| test_alignment.test | RUN | 0.153101 | 0.360931 | 0.476643 | 0.001827 | 0.001826 | 0.001892 |
| test_alignment_2.test | RUN | 0.143817 | 0.358981 | 0.498550 | 0.002010 | 0.001650 | 0.001808 |
| test_attribute_packed.test | RUN | 0.150256 | 0.375770 | 0.502646 | 0.001523 | 0.001848 | 0.001369 |
| test_pragma_pack.test | RUN | 0.142576 | 0.377909 | 0.517334 | 0.001875 | 0.001960 | 0.001452 |
| test_data.test | RUN | 0.183532 | 0.662391 | 0.703997 | 0.001847 | 0.001818 | 0.001948 |
| test_comparison.test | RUN | 0.237420 | 0.771983 | 0.950866 | 0.002061 | 0.002016 | 0.001508 |
| test_comparison_no_simd.test | RUN | 0.236617 | 0.868559 | 0.885725 | 0.001587 | 0.001684 | 0.001787 |
| test_io.test | RUN | 0.316698 | 1.450701 | 1.420892 | 0.001884 | 0.002024 | 0.002002 |
| test_io_no_simd.test | RUN | 0.294691 | 1.409916 | 1.325803 | 0.001670 | 0.001882 | 0.001736 |
| test_io_2.test | RUN | 0.239905 | 1.452985 | 1.002478 | 0.001885 | 0.001874 | 0.001550 |
| test_io_2_no_simd.test | RUN | 0.215736 | 1.367154 | 0.923508 | 0.001672 | 0.001788 | 0.001858 |
| test_to_chars.test | RUN | 0.220965 | 0.937448 | 0.927496 | 0.001865 | 0.002028 | 0.001978 |
| test_to_chars_no_simd.test | RUN | 0.209806 | 0.942909 | 0.925798 | 0.001733 | 0.001687 | 0.001920 |
| test_to_chars_2.test | RUN | 0.253890 | 1.683446 | 1.115607 | 0.001668 | 0.001748 | 0.002032 |
| test_to_chars_2_no_simd.test | RUN | 0.259037 | 1.787544 | 1.010950 | 0.001799 | 0.001750 | 0.001961 |
| test_to_chars_3.test | RUN | 0.180415 | 0.628885 | 0.707351 | 0.001723 | 0.001841 | 0.001801 |
| test_from_chars.test | RUN | 0.209644 | 0.885005 | 0.772025 | 0.001713 | 0.001859 | 0.001774 |
| test_from_chars_no_simd.test | RUN | 0.183890 | 0.713094 | 0.623035 | 0.001755 | 0.001570 | 0.001595 |
| test_from_chars_2.test | RUN | 0.197377 | 0.839619 | 0.744539 | 0.001547 | 0.001769 | 0.001550 |
| test_from_chars_2_no_simd.test | RUN | 0.174197 | 0.637148 | 0.606073 | 0.001553 | 0.001819 | 0.001822 |
| test_uuid_from_string.test | RUN | 0.235209 | 0.909211 | 0.904555 | 0.001525 | 0.001750 | 0.001652 |
| test_uuid_from_string_2.test | RUN | 0.208279 | 0.828554 | 0.783427 | 0.001843 | 0.002012 | 0.001691 |
| test_uuid_from_string_3.test | RUN | 0.203630 | 0.815654 | 0.797116 | 0.001400 | 0.001819 | 0.002086 |
| test_uuid_clock.test | RUN | 0.126108 | 0.335965 | 0.497545 | 0.001775 | 0.001974 | 0.001912 |
| test_nil_generator.test | RUN | 0.155313 | 0.419517 | 0.548753 | 0.001585 | 0.001780 | 0.001898 |
| test_string_generator.test | RUN | 0.192594 | 0.649800 | 0.777650 | 0.001962 | 0.002048 | 0.001869 |
| test_string_generator_2.test | RUN | 0.238717 | 0.913238 | 0.859913 | 0.001820 | 0.001695 | 0.001770 |
| test_random_generator.test | RUN | 0.325892 | 1.767871 | 1.268888 | 0.002614 | 0.002679 | 0.002722 |
| test_random_generator_2.test | RUN | 0.240298 | 0.687061 | 0.887212 | 0.001584 | 0.001918 | 0.001898 |
| test_name_generator.test | RUN | 0.210762 | 2.338495 | 0.941027 | 0.001712 | 0.001822 | 0.001778 |
| test_namespaces.test | RUN | 0.173324 | 0.495397 | 0.599219 | 0.001558 | 0.001932 | 0.001502 |
| test_name_generator_md5.test | RUN | 0.214141 | 1.088289 | 0.889202 | 0.001826 | 0.001964 | 0.001857 |
| test_name_generator_sha1.test | RUN | 0.207214 | 3.389104 | 0.892796 | 0.001802 | 0.002050 | 0.001874 |
| test_time_generator.test | RUN | 0.228392 | 0.681698 | 0.896096 | 0.001632 | 0.001885 | 0.001899 |
| test_time_generator_v1.test | RUN | 0.252424 | 0.764278 | 0.921133 | 0.001944 | 0.002392 | 0.002309 |
| test_time_generator_v1_2.test | RUN | 0.253137 | 0.728674 | 0.883311 | 0.002034 | 0.002379 | 0.002140 |
| test_time_generator_v1_3.test | RUN | 0.275495 | 0.730164 | 1.016418 | 0.004053 | 0.004124 | 0.004746 |
| test_time_generator_v6.test | RUN | 0.251696 | 0.789418 | 0.943938 | 0.002248 | 0.002694 | 0.002021 |
| test_time_generator_v6_2.test | RUN | 0.247821 | 0.752222 | 0.937412 | 0.001850 | 0.002221 | 0.002162 |
| test_time_generator_v6_3.test | RUN | 0.280710 | 0.768607 | 1.005818 | 0.004165 | 0.005021 | 0.005172 |
| test_time_generator_v7.test | RUN | 0.243908 | 0.784343 | 0.943534 | 0.001556 | 0.002154 | 0.001980 |
| test_time_generator_v7_2.test | RUN | 0.226340 | 0.694210 | 0.837157 | 0.001762 | 0.001924 | 0.001585 |
| test_time_generator_v7_3.test | RUN | 0.226917 | 0.857182 | 0.892218 | 0.002361 | 0.002719 | 0.002232 |
| test_serialization.test | RUN | 0.420991 | 1.286351 | 1.498326 | 0.001976 | 0.001806 | 0.002026 |
| test_tagging.test | RUN | 0.239205 | 0.806420 | 0.917627 | 0.001469 | 0.001517 | 0.001906 |
| test_uuid_class.test | RUN | 0.241829 | 0.720309 | 0.952512 | 0.001749 | 0.001799 | 0.001826 |
| test_uuid_in_map.test | RUN | 0.276381 | 0.830170 | 0.980129 | 0.001501 | 0.001872 | 0.001920 |
| test_hash.test | RUN | 0.274912 | 0.754932 | 0.935445 | 0.001842 | 0.001822 | 0.001885 |
| test_hash_value.test | RUN | 0.191844 | 0.526547 | 0.711245 | 0.005048 | 0.004866 | 0.004893 |
| test_std_unordered.test | RUN | 0.258756 | 0.819964 | 0.948300 | 0.001861 | 0.001947 | 0.001715 |
| test_boost_unordered.test | RUN | 0.365626 | 1.065638 | 1.225075 | 0.001639 | 0.001687 | 0.001962 |
| test_detail_md5.test | RUN | 0.156534 | 0.519358 | 0.712118 | 0.001764 | 0.001851 | 0.001935 |
| test_detail_sha1.test | RUN | 0.158587 | 0.658261 | 0.619619 | 0.009926 | 0.009358 | 0.008152 |
| test_detail_endian.test | RUN | 0.123725 | 0.387093 | 0.437659 | 0.001615 | 0.001647 | 0.001685 |
| test_detail_chacha20.test | RUN | 0.133146 | 0.473588 | 0.454225 | 0.001528 | 0.001714 | 0.001922 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.122083 | 0.267706 | 0.386091 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.119391 | 0.265674 | 0.369643 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.202782 | 0.515757 | 0.689677 | 0.001850 | 0.001945 | 0.001800 |
| test_bench_random.test | RUN | 0.229995 | 0.685867 | 0.895137 | 0.005572 | 0.005631 | 0.005742 |
| test_entropy_error.test | RUN | 0.114723 | 0.322775 | 0.424282 | 0.001839 | 0.001848 | 0.001494 |
| test_detail_random_provider.test | RUN | 0.224076 | 0.551061 | 0.778155 | 0.001654 | 0.001642 | 0.001714 |
| test_constants.test | RUN | 0.176659 | 0.507921 | 0.597719 | 0.001534 | 0.001888 | 0.001654 |
| test_uuid_cx.test | COMPILE | 0.100627 | 0.225628 | 0.307140 | — | — | — |
| test_uuid_cx2.test | RUN | 0.180460 | 0.552554 | 0.646611 | 0.001906 | 0.001779 | 0.001784 |
| test_uuid_cx3.test | RUN | 0.161305 | 0.441573 | 0.618819 | 0.001637 | 0.001520 | 0.001459 |
| test_uuid_cx3_no_simd.test | RUN | 0.152883 | 0.417249 | 0.505144 | 0.001472 | 0.001776 | 0.001848 |
| test_hash_value_cx.test | RUN | 0.149770 | 0.391634 | 0.565806 | 0.001527 | 0.001874 | 0.001561 |
| test_string_generator_cx.test | RUN | 0.178555 | 0.488505 | 0.605136 | 0.001774 | 0.001666 | 0.001858 |
| test_string_generator_cx2.test | RUN | 0.213511 | 0.597949 | 0.726858 | 0.001500 | 0.001943 | 0.001563 |
| test_constants_cx.test | RUN | 0.145731 | 0.345904 | 0.498737 | 0.001801 | 0.001766 | 0.001763 |
| test_from_chars_cx.test | RUN | 0.181129 | 0.657024 | 0.687152 | 0.001604 | 0.002002 | 0.001441 |
| test_from_chars_cx2.test | RUN | 0.197059 | 0.818159 | 0.771074 | 0.001791 | 0.001872 | 0.001894 |
| test_to_chars_cx.test | RUN | 0.195026 | 0.754578 | 0.815002 | 0.001645 | 0.001634 | 0.001386 |
| test_uuid_from_string_cx.test | RUN | 0.196756 | 0.765745 | 0.747224 | 0.001401 | 0.001468 | 0.001419 |
| quick.test | RUN | 0.223492 | 0.591588 | 0.765617 | 0.001290 | 0.001361 | 0.001300 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997× | 0.995×, 1.000× | 1.000× |
| clang | 1.006× | 1.015×, 0.996× | 0.995× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44830361139).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.001145s | 0.001138s | 0.001149s | byte equality observed |
| test_alignment.test | 10 | 0.001150s | 0.001146s | 0.001152s | byte equality observed |
| test_alignment_2.test | 10 | 0.001141s | 0.001134s | 0.001163s | byte equality observed |
| test_attribute_packed.test | 10 | 0.001166s | 0.001163s | 0.001165s | byte equality observed |
| test_bench_random.test | 4 | 0.005129s | 0.005075s | 0.005178s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.001198s | 0.001198s | 0.001184s | byte equality observed |
| test_comparison.test | 10 | 0.001191s | 0.001194s | 0.001168s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.001178s | 0.001172s | 0.001195s | byte equality observed |
| test_constants.test | 10 | 0.001146s | 0.001163s | 0.001171s | byte equality observed |
| test_constants_cx.test | 10 | 0.001092s | 0.001133s | 0.001118s | byte equality observed |
| test_data.test | 10 | 0.001137s | 0.001129s | 0.001146s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.001146s | 0.001148s | 0.001146s | byte equality observed |
| test_detail_endian.test | 10 | 0.001147s | 0.001144s | 0.001135s | byte equality observed |
| test_detail_md5.test | 10 | 0.001163s | 0.001137s | 0.001149s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.001133s | 0.001130s | 0.001140s | byte equality observed |
| test_detail_sha1.test | 3 | 0.008468s | 0.008292s | 0.007355s | byte equality observed |
| test_entropy_error.test | 10 | 0.001132s | 0.001113s | 0.001129s | byte equality observed |
| test_from_chars.test | 10 | 0.001144s | 0.001143s | 0.001150s | byte equality observed |
| test_from_chars_2.test | 10 | 0.001149s | 0.001120s | 0.001153s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.001153s | 0.001153s | 0.001127s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.001133s | 0.001120s | 0.001161s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.001142s | 0.001123s | 0.001135s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.001135s | 0.001160s | 0.001146s | byte equality observed |
| test_hash.test | 10 | 0.001156s | 0.001142s | 0.001177s | byte equality observed |
| test_hash_value.test | 6 | 0.004206s | 0.004109s | 0.004133s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.001122s | 0.001135s | 0.001143s | byte equality observed |
| test_include1.test | 10 | 0.000502s | 0.000499s | 0.001099s | byte equality observed |
| test_io.test | 10 | 0.001223s | 0.001214s | 0.001235s | byte equality observed |
| test_io_2.test | 10 | 0.001282s | 0.001272s | 0.001297s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.001277s | 0.001283s | 0.001295s | byte equality observed |
| test_io_no_simd.test | 10 | 0.001193s | 0.001202s | 0.001219s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.001122s | 0.001168s | 0.001141s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.001156s | 0.001188s | 0.001177s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.001174s | 0.001176s | 0.001161s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.001189s | 0.001193s | 0.001185s | byte equality observed |
| test_namespaces.test | 10 | 0.001143s | 0.001145s | 0.001141s | byte equality observed |
| test_nil_generator.test | 10 | 0.001148s | 0.001134s | 0.001134s | byte equality observed |
| test_pragma_pack.test | 10 | 0.001148s | 0.001169s | 0.001155s | byte equality observed |
| test_random_generator.test | 10 | 0.001976s | 0.001982s | 0.001996s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.001160s | 0.001171s | 0.001164s | byte equality observed |
| test_serialization.test | 10 | 0.001234s | 0.001254s | 0.001254s | byte equality observed |
| test_std_unordered.test | 10 | 0.001225s | 0.001207s | 0.001208s | byte equality observed |
| test_string_generator.test | 10 | 0.001239s | 0.001291s | 0.001259s | byte equality observed |
| test_string_generator_2.test | 10 | 0.001175s | 0.001202s | 0.001159s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.001156s | 0.001183s | 0.001171s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.001160s | 0.001164s | 0.001132s | byte equality observed |
| test_tagging.test | 10 | 0.001162s | 0.001128s | 0.001132s | byte equality observed |
| test_time_generator.test | 10 | 0.001177s | 0.001175s | 0.001166s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001550s | 0.001677s | 0.001679s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001382s | 0.001428s | 0.001437s | byte equality observed |
| test_time_generator_v1_3.test | 6 | 0.003565s | 0.003718s | 0.003665s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001581s | 0.001695s | 0.001721s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001414s | 0.001479s | 0.001478s | byte equality observed |
| test_time_generator_v6_3.test | 6 | 0.003646s | 0.003604s | 0.003554s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.001425s | 0.001429s | 0.001509s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.001223s | 0.001203s | 0.001233s | byte equality observed |
| test_time_generator_v7_3.test | 10 | 0.001816s | 0.001835s | 0.001814s | byte equality observed |
| test_to_chars.test | 10 | 0.001230s | 0.001213s | 0.001214s | byte equality observed |
| test_to_chars_2.test | 10 | 0.001181s | 0.001203s | 0.001209s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.001176s | 0.001184s | 0.001196s | byte equality observed |
| test_to_chars_3.test | 10 | 0.001152s | 0.001157s | 0.001129s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.001180s | 0.001143s | 0.001084s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.001226s | 0.001210s | 0.001214s | byte equality observed |
| test_uuid.test | 10 | 0.001149s | 0.001136s | 0.001158s | byte equality observed |
| test_uuid_2.test | 10 | 0.001158s | 0.001152s | 0.001141s | byte equality observed |
| test_uuid_3.test | 10 | 0.001145s | 0.001148s | 0.001149s | byte equality observed |
| test_uuid_class.test | 10 | 0.001160s | 0.001168s | 0.001148s | byte equality observed |
| test_uuid_clock.test | 10 | 0.001153s | 0.001134s | 0.001118s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.001175s | 0.001169s | 0.001163s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.001125s | 0.001140s | 0.001130s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.001150s | 0.001150s | 0.001155s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.001163s | 0.001182s | 0.001143s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.001425s | 0.001423s | 0.001477s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.001250s | 0.001236s | 0.001222s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.001162s | 0.001169s | 0.001173s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.001161s | 0.001164s | 0.001142s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.001158s | 0.001163s | 0.001117s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44830361139).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
