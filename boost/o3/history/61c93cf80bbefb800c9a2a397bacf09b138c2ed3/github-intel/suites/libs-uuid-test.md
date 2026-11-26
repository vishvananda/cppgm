# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.459656 | 1.095772 | 1.454006 | 0.000722 | 0.000743 | 0.001548 |
| test_uuid.test | RUN | 0.301655 | 0.912627 | 1.041214 | 0.001679 | 0.001632 | 0.001617 |
| test_uuid_no_simd.test | RUN | 0.286159 | 0.875675 | 0.934408 | 0.001782 | 0.001471 | 0.001442 |
| test_uuid_2.test | RUN | 0.205135 | 0.657679 | 0.682805 | 0.001568 | 0.001705 | 0.001387 |
| test_uuid_3.test | RUN | 0.173355 | 0.460803 | 0.545794 | 0.001724 | 0.001720 | 0.001444 |
| test_alignment.test | RUN | 0.159208 | 0.403390 | 0.490905 | 0.001792 | 0.001459 | 0.001510 |
| test_alignment_2.test | RUN | 0.158401 | 0.391095 | 0.500897 | 0.001480 | 0.001660 | 0.001443 |
| test_attribute_packed.test | RUN | 0.160480 | 0.410193 | 0.481133 | 0.001754 | 0.001710 | 0.001476 |
| test_pragma_pack.test | RUN | 0.157563 | 0.413511 | 0.501821 | 0.001764 | 0.001764 | 0.001386 |
| test_data.test | RUN | 0.188908 | 0.747819 | 0.710395 | 0.001529 | 0.001548 | 0.001572 |
| test_comparison.test | RUN | 0.274006 | 0.878954 | 0.953812 | 0.001768 | 0.001800 | 0.001489 |
| test_comparison_no_simd.test | RUN | 0.268644 | 1.004427 | 0.901394 | 0.001697 | 0.001607 | 0.001604 |
| test_io.test | RUN | 0.355026 | 1.705409 | 1.517667 | 0.001811 | 0.001810 | 0.001758 |
| test_io_no_simd.test | RUN | 0.349205 | 1.683476 | 1.439210 | 0.001683 | 0.001771 | 0.001628 |
| test_io_2.test | RUN | 0.274402 | 1.722899 | 1.043629 | 0.001964 | 0.001787 | 0.001667 |
| test_io_2_no_simd.test | RUN | 0.252243 | 1.623383 | 0.956463 | 0.001885 | 0.001788 | 0.001542 |
| test_to_chars.test | RUN | 0.255486 | 1.103241 | 0.973618 | 0.001724 | 0.001886 | 0.001588 |
| test_to_chars_no_simd.test | RUN | 0.251227 | 1.100461 | 0.943602 | 0.001680 | 0.001816 | 0.001649 |
| test_to_chars_2.test | RUN | 0.315727 | 2.010000 | 1.159578 | 0.001472 | 0.001794 | 0.001594 |
| test_to_chars_2_no_simd.test | RUN | 0.324680 | 2.160159 | 1.061846 | 0.001694 | 0.001910 | 0.001494 |
| test_to_chars_3.test | RUN | 0.208112 | 0.708902 | 0.712060 | 0.001746 | 0.001674 | 0.001395 |
| test_from_chars.test | RUN | 0.231141 | 1.020784 | 0.787412 | 0.001681 | 0.002155 | 0.001461 |
| test_from_chars_no_simd.test | RUN | 0.188588 | 0.816695 | 0.655791 | 0.001581 | 0.002264 | 0.001473 |
| test_from_chars_2.test | RUN | 0.222153 | 0.979546 | 0.783780 | 0.001703 | 0.001662 | 0.001437 |
| test_from_chars_2_no_simd.test | RUN | 0.183520 | 0.736505 | 0.639703 | 0.001712 | 0.001530 | 0.001466 |
| test_uuid_from_string.test | RUN | 0.263058 | 1.071514 | 0.949387 | 0.001707 | 0.001664 | 0.001504 |
| test_uuid_from_string_2.test | RUN | 0.234187 | 0.962614 | 0.805644 | 0.001602 | 0.002107 | 0.001888 |
| test_uuid_from_string_3.test | RUN | 0.234342 | 0.973251 | 0.843865 | 0.001757 | 0.002029 | 0.001806 |
| test_uuid_clock.test | RUN | 0.145132 | 0.381720 | 0.496965 | 0.001561 | 0.001680 | 0.001622 |
| test_nil_generator.test | RUN | 0.172715 | 0.443045 | 0.563497 | 0.001791 | 0.001675 | 0.001648 |
| test_string_generator.test | RUN | 0.224300 | 0.766992 | 0.801105 | 0.001609 | 0.001959 | 0.001764 |
| test_string_generator_2.test | RUN | 0.283466 | 1.079870 | 0.892182 | 0.001516 | 0.001670 | 0.001541 |
| test_random_generator.test | RUN | 0.378709 | 2.107562 | 1.348660 | 0.003849 | 0.003880 | 0.003910 |
| test_random_generator_2.test | RUN | 0.268772 | 0.809390 | 0.899996 | 0.001708 | 0.001808 | 0.001544 |
| test_name_generator.test | RUN | 0.248621 | 2.723604 | 0.980299 | 0.001585 | 0.001810 | 0.001564 |
| test_namespaces.test | RUN | 0.196772 | 0.572897 | 0.632731 | 0.001515 | 0.001800 | 0.001477 |
| test_name_generator_md5.test | RUN | 0.249753 | 1.293190 | 0.953861 | 0.001743 | 0.001811 | 0.001639 |
| test_name_generator_sha1.test | RUN | 0.240310 | 4.066284 | 0.922803 | 0.001782 | 0.001764 | 0.001486 |
| test_time_generator.test | RUN | 0.261525 | 0.793713 | 0.873699 | 0.001792 | 0.001780 | 0.001515 |
| test_time_generator_v1.test | RUN | 0.288066 | 0.883951 | 0.972255 | 0.002068 | 0.002305 | 0.002173 |
| test_time_generator_v1_2.test | RUN | 0.283005 | 0.815131 | 0.933751 | 0.002022 | 0.002096 | 0.001896 |
| test_time_generator_v1_3.test | RUN | 0.315095 | 0.857985 | 1.024577 | 0.005333 | 0.004890 | 0.005924 |
| test_time_generator_v6.test | RUN | 0.280548 | 0.884717 | 0.988232 | 0.002068 | 0.002377 | 0.002388 |
| test_time_generator_v6_2.test | RUN | 0.281432 | 0.814226 | 0.942637 | 0.001744 | 0.002074 | 0.001939 |
| test_time_generator_v6_3.test | RUN | 0.307205 | 0.876999 | 1.043393 | 0.003741 | 0.004501 | 0.005170 |
| test_time_generator_v7.test | RUN | 0.276612 | 0.875229 | 0.958012 | 0.002032 | 0.002074 | 0.002055 |
| test_time_generator_v7_2.test | RUN | 0.259008 | 0.772171 | 0.883870 | 0.001456 | 0.001806 | 0.001680 |
| test_time_generator_v7_3.test | RUN | 0.255674 | 0.991940 | 0.891124 | 0.002727 | 0.002862 | 0.002694 |
| test_serialization.test | RUN | 0.458866 | 1.499864 | 1.672517 | 0.001902 | 0.001800 | 0.001833 |
| test_tagging.test | RUN | 0.261839 | 0.943480 | 0.893292 | 0.001772 | 0.001606 | 0.001613 |
| test_uuid_class.test | RUN | 0.270478 | 0.835247 | 0.965553 | 0.001575 | 0.001474 | 0.001566 |
| test_uuid_in_map.test | RUN | 0.300157 | 0.966031 | 1.049234 | 0.001472 | 0.001812 | 0.001617 |
| test_hash.test | RUN | 0.294128 | 0.878337 | 0.939930 | 0.001497 | 0.001587 | 0.001555 |
| test_hash_value.test | RUN | 0.214974 | 0.601757 | 0.691839 | 0.005696 | 0.005675 | 0.005374 |
| test_std_unordered.test | RUN | 0.283610 | 0.983620 | 0.975690 | 0.001674 | 0.001769 | 0.001761 |
| test_boost_unordered.test | RUN | 0.389424 | 1.266701 | 1.270792 | 0.001729 | 0.001738 | 0.001471 |
| test_detail_md5.test | RUN | 0.185856 | 0.611037 | 0.679387 | 0.001684 | 0.001803 | 0.001634 |
| test_detail_sha1.test | RUN | 0.174394 | 0.776478 | 0.624355 | 0.010473 | 0.010658 | 0.010045 |
| test_detail_endian.test | RUN | 0.138125 | 0.446613 | 0.470941 | 0.001544 | 0.001733 | 0.001496 |
| test_detail_chacha20.test | RUN | 0.148555 | 0.548339 | 0.478151 | 0.001678 | 0.001481 | 0.001393 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.131412 | 0.312210 | 0.375325 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.134398 | 0.302719 | 0.369986 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.224739 | 0.600385 | 0.689780 | 0.001764 | 0.001767 | 0.001540 |
| test_bench_random.test | RUN | 0.253495 | 0.789195 | 0.903032 | 0.013029 | 0.013038 | 0.012681 |
| test_entropy_error.test | RUN | 0.126690 | 0.353440 | 0.417528 | 0.001554 | 0.001670 | 0.001536 |
| test_detail_random_provider.test | RUN | 0.247253 | 0.615686 | 0.806610 | 0.001532 | 0.001662 | 0.001592 |
| test_constants.test | RUN | 0.194101 | 0.585242 | 0.653873 | 0.001479 | 0.001670 | 0.001508 |
| test_uuid_cx.test | COMPILE | 0.109956 | 0.251104 | 0.311073 | — | — | — |
| test_uuid_cx2.test | RUN | 0.208159 | 0.650274 | 0.695904 | 0.001606 | 0.001560 | 0.001581 |
| test_uuid_cx3.test | RUN | 0.178478 | 0.512776 | 0.612502 | 0.001615 | 0.001513 | 0.001558 |
| test_uuid_cx3_no_simd.test | RUN | 0.169680 | 0.486825 | 0.566850 | 0.001635 | 0.001674 | 0.001432 |
| test_hash_value_cx.test | RUN | 0.174478 | 0.441909 | 0.562569 | 0.001704 | 0.001805 | 0.001004 |
| test_string_generator_cx.test | RUN | 0.195233 | 0.575031 | 0.630558 | 0.001600 | 0.001500 | 0.001592 |
| test_string_generator_cx2.test | RUN | 0.251291 | 0.712002 | 0.755627 | 0.001513 | 0.001778 | 0.001576 |
| test_constants_cx.test | RUN | 0.161337 | 0.397789 | 0.501890 | 0.001778 | 0.001554 | 0.001574 |
| test_from_chars_cx.test | RUN | 0.202340 | 0.772603 | 0.707606 | 0.001712 | 0.001779 | 0.001473 |
| test_from_chars_cx2.test | RUN | 0.217323 | 0.947378 | 0.749783 | 0.001730 | 0.001669 | 0.001642 |
| test_to_chars_cx.test | RUN | 0.216260 | 0.882067 | 0.835319 | 0.001716 | 0.001752 | 0.001481 |
| test_uuid_from_string_cx.test | RUN | 0.223741 | 0.895650 | 0.766408 | 0.001158 | 0.001592 | 0.001560 |
| quick.test | RUN | 0.239782 | 0.694628 | 0.694425 | 0.001102 | 0.001214 | 0.001034 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997× | 0.997×, 0.997× | 1.012× |
| clang | 1.002× | 1.006×, 0.998× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45754596224).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.001183s | 0.001180s | 0.001186s | byte equality observed |
| test_alignment.test | 10 | 0.001159s | 0.001209s | 0.001209s | byte equality observed |
| test_alignment_2.test | 10 | 0.001170s | 0.001169s | 0.001163s | byte equality observed |
| test_attribute_packed.test | 10 | 0.001127s | 0.001169s | 0.001168s | byte equality observed |
| test_bench_random.test | 2 | 0.012570s | 0.012456s | 0.012449s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.001213s | 0.001199s | 0.001202s | byte equality observed |
| test_comparison.test | 10 | 0.001202s | 0.001191s | 0.001164s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.001207s | 0.001215s | 0.001234s | byte equality observed |
| test_constants.test | 10 | 0.001204s | 0.001205s | 0.001178s | byte equality observed |
| test_constants_cx.test | 10 | 0.001173s | 0.001148s | 0.001144s | byte equality observed |
| test_data.test | 10 | 0.001173s | 0.001181s | 0.001209s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.001195s | 0.001186s | 0.001172s | byte equality observed |
| test_detail_endian.test | 10 | 0.001197s | 0.001185s | 0.001171s | byte equality observed |
| test_detail_md5.test | 10 | 0.001218s | 0.001232s | 0.001229s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.001226s | 0.001225s | 0.001215s | byte equality observed |
| test_detail_sha1.test | 3 | 0.009445s | 0.009572s | 0.008777s | byte equality observed |
| test_entropy_error.test | 10 | 0.001188s | 0.001177s | 0.001219s | byte equality observed |
| test_from_chars.test | 10 | 0.001190s | 0.001170s | 0.001211s | byte equality observed |
| test_from_chars_2.test | 10 | 0.001200s | 0.001178s | 0.001169s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.001174s | 0.001181s | 0.001205s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.001197s | 0.001210s | 0.001197s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.001183s | 0.001183s | 0.001185s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.001193s | 0.001203s | 0.001206s | byte equality observed |
| test_hash.test | 10 | 0.001218s | 0.001173s | 0.001214s | byte equality observed |
| test_hash_value.test | 5 | 0.004927s | 0.004863s | 0.004754s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.001177s | 0.001145s | 0.001199s | byte equality observed |
| test_include1.test | 10 | 0.000520s | 0.000513s | 0.001143s | byte equality observed |
| test_io.test | 10 | 0.001253s | 0.001296s | 0.001282s | byte equality observed |
| test_io_2.test | 10 | 0.001347s | 0.001322s | 0.001306s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.001377s | 0.001382s | 0.001324s | byte equality observed |
| test_io_no_simd.test | 10 | 0.001281s | 0.001289s | 0.001251s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.001198s | 0.001191s | 0.001196s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.001239s | 0.001234s | 0.001242s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.001236s | 0.001209s | 0.001214s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.001228s | 0.001288s | 0.001227s | byte equality observed |
| test_namespaces.test | 10 | 0.001186s | 0.001196s | 0.001170s | byte equality observed |
| test_nil_generator.test | 10 | 0.001160s | 0.001165s | 0.001165s | byte equality observed |
| test_pragma_pack.test | 10 | 0.001158s | 0.001181s | 0.001147s | byte equality observed |
| test_random_generator.test | 6 | 0.003451s | 0.003400s | 0.003437s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.001199s | 0.001218s | 0.001168s | byte equality observed |
| test_serialization.test | 10 | 0.001322s | 0.001327s | 0.001288s | byte equality observed |
| test_std_unordered.test | 10 | 0.001275s | 0.001265s | 0.001281s | byte equality observed |
| test_string_generator.test | 10 | 0.001330s | 0.001285s | 0.001333s | byte equality observed |
| test_string_generator_2.test | 10 | 0.001227s | 0.001247s | 0.001185s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.001183s | 0.001210s | 0.001180s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.001205s | 0.001222s | 0.001211s | byte equality observed |
| test_tagging.test | 10 | 0.001219s | 0.001182s | 0.001198s | byte equality observed |
| test_time_generator.test | 10 | 0.001214s | 0.001206s | 0.001206s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001700s | 0.001739s | 0.001862s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001502s | 0.001471s | 0.001573s | byte equality observed |
| test_time_generator_v1_3.test | 4 | 0.004571s | 0.004091s | 0.005329s | byte equality observed |
| test_time_generator_v6.test | 9 | 0.001712s | 0.001792s | 0.001826s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001486s | 0.001510s | 0.001527s | byte equality observed |
| test_time_generator_v6_3.test | 4 | 0.004552s | 0.004752s | 0.004227s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.001480s | 0.001518s | 0.001527s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.001266s | 0.001241s | 0.001251s | byte equality observed |
| test_time_generator_v7_3.test | 7 | 0.002335s | 0.002293s | 0.002297s | byte equality observed |
| test_to_chars.test | 10 | 0.001254s | 0.001265s | 0.001222s | byte equality observed |
| test_to_chars_2.test | 10 | 0.001210s | 0.001225s | 0.001228s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.001230s | 0.001207s | 0.001193s | byte equality observed |
| test_to_chars_3.test | 10 | 0.001206s | 0.001225s | 0.001221s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.001215s | 0.001231s | 0.001215s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.001284s | 0.001278s | 0.001255s | byte equality observed |
| test_uuid.test | 10 | 0.001206s | 0.001192s | 0.001181s | byte equality observed |
| test_uuid_2.test | 10 | 0.001205s | 0.001180s | 0.001190s | byte equality observed |
| test_uuid_3.test | 10 | 0.001198s | 0.001176s | 0.001205s | byte equality observed |
| test_uuid_class.test | 10 | 0.001199s | 0.001201s | 0.001239s | byte equality observed |
| test_uuid_clock.test | 10 | 0.001198s | 0.001204s | 0.001184s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.001199s | 0.001240s | 0.001189s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.001187s | 0.001191s | 0.001213s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.001196s | 0.001191s | 0.001195s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.001214s | 0.001222s | 0.001187s | byte equality observed |
| test_uuid_from_string_2.test | 8 | 0.001524s | 0.001504s | 0.001559s | byte equality observed |
| test_uuid_from_string_3.test | 9 | 0.001312s | 0.001308s | 0.001312s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.001206s | 0.001178s | 0.001185s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.001199s | 0.001177s | 0.001212s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.001196s | 0.001196s | 0.001184s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45754596224).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
