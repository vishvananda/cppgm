# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.427155 | 0.957341 | 1.458105 | 0.000652 | 0.000752 | 0.001739 |
| test_uuid.test | RUN | 0.255387 | 0.753732 | 1.013522 | 0.001798 | 0.001796 | 0.001762 |
| test_uuid_no_simd.test | RUN | 0.248002 | 0.734232 | 0.840669 | 0.001816 | 0.001673 | 0.001828 |
| test_uuid_2.test | RUN | 0.189995 | 0.565622 | 0.672653 | 0.001646 | 0.001436 | 0.001308 |
| test_uuid_3.test | RUN | 0.151775 | 0.382709 | 0.556826 | 0.001700 | 0.001926 | 0.001427 |
| test_alignment.test | RUN | 0.137630 | 0.356299 | 0.468722 | 0.001672 | 0.001448 | 0.001796 |
| test_alignment_2.test | RUN | 0.148195 | 0.337466 | 0.467029 | 0.001855 | 0.001866 | 0.001610 |
| test_attribute_packed.test | RUN | 0.137099 | 0.354730 | 0.504626 | 0.001561 | 0.001828 | 0.001474 |
| test_pragma_pack.test | RUN | 0.140173 | 0.344561 | 0.499135 | 0.001767 | 0.001884 | 0.001144 |
| test_data.test | RUN | 0.177742 | 0.636109 | 0.675860 | 0.001690 | 0.001826 | 0.001726 |
| test_comparison.test | RUN | 0.232430 | 0.725964 | 0.886359 | 0.001692 | 0.001859 | 0.001458 |
| test_comparison_no_simd.test | RUN | 0.232473 | 0.831784 | 0.857701 | 0.001788 | 0.001766 | 0.001645 |
| test_io.test | RUN | 0.307205 | 1.405625 | 1.371486 | 0.001891 | 0.001980 | 0.001836 |
| test_io_no_simd.test | RUN | 0.290251 | 1.371343 | 1.289831 | 0.001586 | 0.001636 | 0.001520 |
| test_io_2.test | RUN | 0.235507 | 1.430848 | 0.928973 | 0.001786 | 0.001894 | 0.001880 |
| test_io_2_no_simd.test | RUN | 0.211893 | 1.352481 | 0.890537 | 0.001710 | 0.001698 | 0.001724 |
| test_to_chars.test | RUN | 0.213697 | 0.896000 | 0.890526 | 0.001883 | 0.001794 | 0.001763 |
| test_to_chars_no_simd.test | RUN | 0.210036 | 0.906297 | 0.849311 | 0.001465 | 0.001803 | 0.001922 |
| test_to_chars_2.test | RUN | 0.255589 | 1.613367 | 1.053374 | 0.001799 | 0.001397 | 0.001609 |
| test_to_chars_2_no_simd.test | RUN | 0.262310 | 1.709145 | 0.932149 | 0.001440 | 0.001636 | 0.001759 |
| test_to_chars_3.test | RUN | 0.178969 | 0.586612 | 0.663505 | 0.001542 | 0.001782 | 0.001443 |
| test_from_chars.test | RUN | 0.204629 | 0.842983 | 0.742851 | 0.001739 | 0.001722 | 0.001658 |
| test_from_chars_no_simd.test | RUN | 0.161008 | 0.681436 | 0.613735 | 0.001468 | 0.001682 | 0.001689 |
| test_from_chars_2.test | RUN | 0.195924 | 0.795781 | 0.718689 | 0.001628 | 0.001640 | 0.001732 |
| test_from_chars_2_no_simd.test | RUN | 0.155098 | 0.611398 | 0.595794 | 0.001320 | 0.001924 | 0.001670 |
| test_uuid_from_string.test | RUN | 0.227425 | 0.864848 | 0.885144 | 0.001414 | 0.001774 | 0.001540 |
| test_uuid_from_string_2.test | RUN | 0.202302 | 0.788872 | 0.730350 | 0.001939 | 0.002032 | 0.002002 |
| test_uuid_from_string_3.test | RUN | 0.203177 | 0.777359 | 0.778077 | 0.001686 | 0.001829 | 0.001870 |
| test_uuid_clock.test | RUN | 0.125157 | 0.300360 | 0.474789 | 0.001521 | 0.001884 | 0.001536 |
| test_nil_generator.test | RUN | 0.151577 | 0.380845 | 0.549346 | 0.001791 | 0.001823 | 0.001733 |
| test_string_generator.test | RUN | 0.192582 | 0.644040 | 0.741556 | 0.001773 | 0.001966 | 0.001846 |
| test_string_generator_2.test | RUN | 0.237637 | 0.876110 | 0.820756 | 0.001598 | 0.001730 | 0.001745 |
| test_random_generator.test | RUN | 0.327511 | 1.712951 | 1.220985 | 0.002482 | 0.002710 | 0.002590 |
| test_random_generator_2.test | RUN | 0.234238 | 0.666095 | 0.853255 | 0.001364 | 0.001824 | 0.001248 |
| test_name_generator.test | RUN | 0.204923 | 2.234564 | 0.895355 | 0.001504 | 0.001911 | 0.001458 |
| test_namespaces.test | RUN | 0.169239 | 0.477140 | 0.597039 | 0.001647 | 0.001776 | 0.001760 |
| test_name_generator_md5.test | RUN | 0.211580 | 1.060280 | 0.870740 | 0.001551 | 0.001840 | 0.001812 |
| test_name_generator_sha1.test | RUN | 0.204120 | 3.247669 | 0.877418 | 0.001785 | 0.001971 | 0.001822 |
| test_time_generator.test | RUN | 0.223243 | 0.669064 | 0.858133 | 0.001612 | 0.001908 | 0.001883 |
| test_time_generator_v1.test | RUN | 0.246980 | 0.715559 | 0.903934 | 0.002081 | 0.002397 | 0.002064 |
| test_time_generator_v1_2.test | RUN | 0.241645 | 0.690086 | 0.878520 | 0.001902 | 0.002182 | 0.002082 |
| test_time_generator_v1_3.test | RUN | 0.266964 | 0.717994 | 0.981599 | 0.003964 | 0.004766 | 0.003705 |
| test_time_generator_v6.test | RUN | 0.246724 | 0.741562 | 0.964046 | 0.002068 | 0.002358 | 0.001988 |
| test_time_generator_v6_2.test | RUN | 0.242880 | 0.687434 | 0.917209 | 0.001601 | 0.002182 | 0.001885 |
| test_time_generator_v6_3.test | RUN | 0.266231 | 0.729217 | 0.981160 | 0.004558 | 0.005426 | 0.004826 |
| test_time_generator_v7.test | RUN | 0.239015 | 0.728598 | 0.897961 | 0.001916 | 0.002138 | 0.001974 |
| test_time_generator_v7_2.test | RUN | 0.220956 | 0.642983 | 0.854490 | 0.001399 | 0.001986 | 0.001587 |
| test_time_generator_v7_3.test | RUN | 0.221545 | 0.832873 | 0.862925 | 0.002096 | 0.002558 | 0.001911 |
| test_serialization.test | RUN | 0.410891 | 1.213725 | 1.488922 | 0.002286 | 0.001746 | 0.001945 |
| test_tagging.test | RUN | 0.231717 | 0.791279 | 0.834135 | 0.001734 | 0.001722 | 0.001724 |
| test_uuid_class.test | RUN | 0.237461 | 0.704368 | 0.926859 | 0.001522 | 0.001486 | 0.001571 |
| test_uuid_in_map.test | RUN | 0.256864 | 0.809832 | 0.999741 | 0.001664 | 0.001528 | 0.001739 |
| test_hash.test | RUN | 0.266477 | 0.727187 | 0.914861 | 0.001674 | 0.001880 | 0.001806 |
| test_hash_value.test | RUN | 0.187123 | 0.507424 | 0.666511 | 0.004896 | 0.004870 | 0.004755 |
| test_std_unordered.test | RUN | 0.250211 | 0.814514 | 0.937887 | 0.001858 | 0.001965 | 0.001789 |
| test_boost_unordered.test | RUN | 0.351823 | 1.056111 | 1.198172 | 0.001662 | 0.001898 | 0.001896 |
| test_detail_md5.test | RUN | 0.162357 | 0.510783 | 0.635480 | 0.001373 | 0.001479 | 0.001822 |
| test_detail_sha1.test | RUN | 0.152522 | 0.629971 | 0.594601 | 0.009680 | 0.009133 | 0.008508 |
| test_detail_endian.test | RUN | 0.118462 | 0.367827 | 0.427947 | 0.001554 | 0.001415 | 0.001665 |
| test_detail_chacha20.test | RUN | 0.129812 | 0.452811 | 0.456319 | 0.001523 | 0.001512 | 0.001349 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.116912 | 0.259250 | 0.371147 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.121576 | 0.270193 | 0.355422 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.202379 | 0.517235 | 0.680979 | 0.001737 | 0.001822 | 0.001523 |
| test_bench_random.test | RUN | 0.226861 | 0.657434 | 0.848752 | 0.005738 | 0.005872 | 0.005568 |
| test_entropy_error.test | RUN | 0.114608 | 0.303244 | 0.405336 | 0.001506 | 0.001802 | 0.001618 |
| test_detail_random_provider.test | RUN | 0.217038 | 0.533449 | 0.765459 | 0.001785 | 0.001834 | 0.001648 |
| test_constants.test | RUN | 0.170360 | 0.475601 | 0.635825 | 0.001423 | 0.001877 | 0.001611 |
| test_uuid_cx.test | COMPILE | 0.099040 | 0.236933 | 0.319292 | — | — | — |
| test_uuid_cx2.test | RUN | 0.179478 | 0.559067 | 0.635143 | 0.001608 | 0.001536 | 0.001844 |
| test_uuid_cx3.test | RUN | 0.154737 | 0.422339 | 0.607112 | 0.001440 | 0.001788 | 0.001428 |
| test_uuid_cx3_no_simd.test | RUN | 0.146491 | 0.410021 | 0.541696 | 0.001790 | 0.001679 | 0.001610 |
| test_hash_value_cx.test | RUN | 0.147440 | 0.386992 | 0.509202 | 0.001248 | 0.001670 | 0.001476 |
| test_string_generator_cx.test | RUN | 0.172326 | 0.488669 | 0.607264 | 0.001706 | 0.001538 | 0.001807 |
| test_string_generator_cx2.test | RUN | 0.211423 | 0.592946 | 0.713833 | 0.001638 | 0.001709 | 0.001418 |
| test_constants_cx.test | RUN | 0.141618 | 0.326386 | 0.523923 | 0.001692 | 0.001427 | 0.001410 |
| test_from_chars_cx.test | RUN | 0.180845 | 0.635365 | 0.642426 | 0.001573 | 0.001830 | 0.001438 |
| test_from_chars_cx2.test | RUN | 0.189333 | 0.788099 | 0.725918 | 0.001623 | 0.001698 | 0.001807 |
| test_to_chars_cx.test | RUN | 0.190369 | 0.690336 | 0.735328 | 0.001737 | 0.001861 | 0.001654 |
| test_uuid_from_string_cx.test | RUN | 0.199689 | 0.733324 | 0.761495 | 0.001377 | 0.001346 | 0.001298 |
| quick.test | RUN | 0.210490 | 0.570909 | 0.762437 | 0.001250 | 0.001292 | 0.001146 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.993× | 0.999×, 0.987× | 0.998× |
| clang | 1.007× | 1.001×, 1.013× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45272062060).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.001157s | 0.001145s | 0.001142s | byte equality observed |
| test_alignment.test | 10 | 0.001164s | 0.001137s | 0.001158s | byte equality observed |
| test_alignment_2.test | 10 | 0.001158s | 0.001148s | 0.001168s | byte equality observed |
| test_attribute_packed.test | 10 | 0.001164s | 0.001172s | 0.001176s | byte equality observed |
| test_bench_random.test | 4 | 0.005177s | 0.005161s | 0.005178s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.001230s | 0.001204s | 0.001209s | byte equality observed |
| test_comparison.test | 10 | 0.001185s | 0.001176s | 0.001188s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.001187s | 0.001164s | 0.001208s | byte equality observed |
| test_constants.test | 10 | 0.001157s | 0.001116s | 0.001179s | byte equality observed |
| test_constants_cx.test | 10 | 0.001144s | 0.001140s | 0.001093s | byte equality observed |
| test_data.test | 10 | 0.001148s | 0.001169s | 0.001110s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.001143s | 0.001156s | 0.001161s | byte equality observed |
| test_detail_endian.test | 10 | 0.001152s | 0.001148s | 0.001174s | byte equality observed |
| test_detail_md5.test | 10 | 0.001157s | 0.001156s | 0.001196s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.001136s | 0.001167s | 0.001168s | byte equality observed |
| test_detail_sha1.test | 3 | 0.008588s | 0.008295s | 0.007524s | byte equality observed |
| test_entropy_error.test | 10 | 0.001143s | 0.001163s | 0.001151s | byte equality observed |
| test_from_chars.test | 10 | 0.001139s | 0.001138s | 0.001155s | byte equality observed |
| test_from_chars_2.test | 10 | 0.001148s | 0.001154s | 0.001167s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.001171s | 0.001144s | 0.001162s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.001143s | 0.001149s | 0.001171s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.001143s | 0.001156s | 0.001164s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.001158s | 0.001162s | 0.001159s | byte equality observed |
| test_hash.test | 10 | 0.001162s | 0.001163s | 0.001157s | byte equality observed |
| test_hash_value.test | 6 | 0.004225s | 0.004087s | 0.004120s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.001128s | 0.001135s | 0.001130s | byte equality observed |
| test_include1.test | 10 | 0.000502s | 0.000499s | 0.001131s | byte equality observed |
| test_io.test | 10 | 0.001223s | 0.001247s | 0.001231s | byte equality observed |
| test_io_2.test | 10 | 0.001292s | 0.001298s | 0.001291s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.001297s | 0.001316s | 0.001309s | byte equality observed |
| test_io_no_simd.test | 10 | 0.001227s | 0.001240s | 0.001240s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.001157s | 0.001149s | 0.001174s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.001185s | 0.001186s | 0.001183s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.001181s | 0.001199s | 0.001185s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.001197s | 0.001201s | 0.001189s | byte equality observed |
| test_namespaces.test | 10 | 0.001173s | 0.001172s | 0.001148s | byte equality observed |
| test_nil_generator.test | 10 | 0.001172s | 0.001139s | 0.001115s | byte equality observed |
| test_pragma_pack.test | 10 | 0.001159s | 0.001158s | 0.001144s | byte equality observed |
| test_random_generator.test | 10 | 0.002007s | 0.001993s | 0.001987s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.001165s | 0.001144s | 0.001165s | byte equality observed |
| test_serialization.test | 10 | 0.001255s | 0.001262s | 0.001256s | byte equality observed |
| test_std_unordered.test | 10 | 0.001223s | 0.001215s | 0.001249s | byte equality observed |
| test_string_generator.test | 10 | 0.001254s | 0.001241s | 0.001285s | byte equality observed |
| test_string_generator_2.test | 10 | 0.001174s | 0.001177s | 0.001183s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.001185s | 0.001161s | 0.001165s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.001186s | 0.001168s | 0.001180s | byte equality observed |
| test_tagging.test | 10 | 0.001161s | 0.001156s | 0.001149s | byte equality observed |
| test_time_generator.test | 10 | 0.001191s | 0.001186s | 0.001177s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001588s | 0.001649s | 0.001722s | byte equality observed |
| test_time_generator_v1_2.test | 6 | 0.001394s | 0.001424s | 0.001453s | byte equality observed |
| test_time_generator_v1_3.test | 6 | 0.003524s | 0.003605s | 0.003682s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001596s | 0.001673s | 0.001703s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001423s | 0.001464s | 0.001441s | byte equality observed |
| test_time_generator_v6_3.test | 6 | 0.003581s | 0.003568s | 0.003573s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.001413s | 0.001485s | 0.001473s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.001261s | 0.001203s | 0.001234s | byte equality observed |
| test_time_generator_v7_3.test | 10 | 0.001829s | 0.001821s | 0.001835s | byte equality observed |
| test_to_chars.test | 10 | 0.001223s | 0.001239s | 0.001234s | byte equality observed |
| test_to_chars_2.test | 10 | 0.001186s | 0.001170s | 0.001178s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.001197s | 0.001216s | 0.001206s | byte equality observed |
| test_to_chars_3.test | 10 | 0.001165s | 0.001150s | 0.001176s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.001172s | 0.001179s | 0.001176s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.001223s | 0.001236s | 0.001224s | byte equality observed |
| test_uuid.test | 10 | 0.001151s | 0.001160s | 0.001159s | byte equality observed |
| test_uuid_2.test | 10 | 0.001170s | 0.001152s | 0.001179s | byte equality observed |
| test_uuid_3.test | 10 | 0.001145s | 0.001137s | 0.001155s | byte equality observed |
| test_uuid_class.test | 10 | 0.001171s | 0.001180s | 0.001182s | byte equality observed |
| test_uuid_clock.test | 10 | 0.001153s | 0.001148s | 0.001172s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.001159s | 0.001169s | 0.001156s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.001166s | 0.001156s | 0.001144s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.001151s | 0.001159s | 0.001174s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.001194s | 0.001194s | 0.001192s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.001412s | 0.001409s | 0.001472s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.001247s | 0.001243s | 0.001233s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.001169s | 0.001161s | 0.001166s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.001170s | 0.001188s | 0.001163s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.001158s | 0.001148s | 0.001152s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45272062060).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
