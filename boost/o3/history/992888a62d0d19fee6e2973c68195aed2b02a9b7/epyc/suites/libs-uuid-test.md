# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.400381 | 0.935683 | 1.461475 | 0.000709 | 0.000749 | 0.001822 |
| test_uuid.test | RUN | 0.267110 | 0.753904 | 1.015890 | 0.001756 | 0.001768 | 0.001722 |
| test_uuid_no_simd.test | RUN | 0.246487 | 0.721547 | 0.906944 | 0.001695 | 0.001686 | 0.001410 |
| test_uuid_2.test | RUN | 0.178971 | 0.555481 | 0.685288 | 0.001513 | 0.001634 | 0.001470 |
| test_uuid_3.test | RUN | 0.156147 | 0.378918 | 0.518980 | 0.001729 | 0.001838 | 0.001614 |
| test_alignment.test | RUN | 0.141488 | 0.338639 | 0.486862 | 0.001722 | 0.001780 | 0.001796 |
| test_alignment_2.test | RUN | 0.133288 | 0.349760 | 0.476735 | 0.001518 | 0.001660 | 0.001602 |
| test_attribute_packed.test | RUN | 0.144843 | 0.342036 | 0.509782 | 0.001638 | 0.001755 | 0.001450 |
| test_pragma_pack.test | RUN | 0.135374 | 0.344776 | 0.508952 | 0.001664 | 0.001663 | 0.001372 |
| test_data.test | RUN | 0.172267 | 0.639790 | 0.672253 | 0.001645 | 0.001624 | 0.001882 |
| test_comparison.test | RUN | 0.228971 | 0.719506 | 0.990650 | 0.001797 | 0.001824 | 0.001595 |
| test_comparison_no_simd.test | RUN | 0.236594 | 0.810699 | 0.907064 | 0.001553 | 0.001739 | 0.001776 |
| test_io.test | RUN | 0.296407 | 1.363606 | 1.352402 | 0.001880 | 0.001801 | 0.001761 |
| test_io_no_simd.test | RUN | 0.290487 | 1.341088 | 1.300711 | 0.001480 | 0.001856 | 0.001816 |
| test_io_2.test | RUN | 0.230919 | 1.389106 | 0.935618 | 0.001786 | 0.001503 | 0.001364 |
| test_io_2_no_simd.test | RUN | 0.210722 | 1.318193 | 0.890753 | 0.001760 | 0.001941 | 0.001812 |
| test_to_chars.test | RUN | 0.212481 | 0.878168 | 0.898949 | 0.001856 | 0.001906 | 0.001688 |
| test_to_chars_no_simd.test | RUN | 0.207437 | 0.888725 | 0.850031 | 0.001829 | 0.001595 | 0.001777 |
| test_to_chars_2.test | RUN | 0.250437 | 1.597731 | 1.047560 | 0.001465 | 0.001759 | 0.001688 |
| test_to_chars_2_no_simd.test | RUN | 0.262517 | 1.699632 | 0.927033 | 0.001570 | 0.001349 | 0.001734 |
| test_to_chars_3.test | RUN | 0.174422 | 0.583071 | 0.662020 | 0.001499 | 0.001775 | 0.001513 |
| test_from_chars.test | RUN | 0.201628 | 0.831064 | 0.743666 | 0.001636 | 0.001730 | 0.001676 |
| test_from_chars_no_simd.test | RUN | 0.177162 | 0.666640 | 0.600732 | 0.001594 | 0.001692 | 0.001601 |
| test_from_chars_2.test | RUN | 0.193888 | 0.785116 | 0.726630 | 0.001626 | 0.001824 | 0.001613 |
| test_from_chars_2_no_simd.test | RUN | 0.170965 | 0.600796 | 0.583694 | 0.001310 | 0.001789 | 0.001484 |
| test_uuid_from_string.test | RUN | 0.226732 | 0.865458 | 0.877244 | 0.001534 | 0.001688 | 0.001455 |
| test_uuid_from_string_2.test | RUN | 0.201450 | 0.788475 | 0.734921 | 0.001675 | 0.001879 | 0.001908 |
| test_uuid_from_string_3.test | RUN | 0.205119 | 0.777579 | 0.779478 | 0.001522 | 0.001816 | 0.001844 |
| test_uuid_clock.test | RUN | 0.128617 | 0.342348 | 0.473772 | 0.001564 | 0.001862 | 0.001544 |
| test_nil_generator.test | RUN | 0.149166 | 0.384521 | 0.560778 | 0.001770 | 0.001718 | 0.001621 |
| test_string_generator.test | RUN | 0.191245 | 0.629738 | 0.733703 | 0.001680 | 0.001956 | 0.001878 |
| test_string_generator_2.test | RUN | 0.231422 | 0.902760 | 0.838503 | 0.001570 | 0.001780 | 0.001756 |
| test_random_generator.test | RUN | 0.323102 | 1.709637 | 1.247959 | 0.002393 | 0.002686 | 0.002611 |
| test_random_generator_2.test | RUN | 0.230820 | 0.666798 | 0.864443 | 0.001403 | 0.001819 | 0.001482 |
| test_name_generator.test | RUN | 0.204323 | 2.184565 | 0.895061 | 0.001520 | 0.001814 | 0.001479 |
| test_namespaces.test | RUN | 0.168343 | 0.477649 | 0.609387 | 0.001617 | 0.001795 | 0.001584 |
| test_name_generator_md5.test | RUN | 0.211521 | 1.044966 | 0.884451 | 0.001707 | 0.001792 | 0.001727 |
| test_name_generator_sha1.test | RUN | 0.203053 | 3.201245 | 0.847045 | 0.001751 | 0.001785 | 0.001710 |
| test_time_generator.test | RUN | 0.222527 | 0.663714 | 0.861632 | 0.001578 | 0.001832 | 0.001648 |
| test_time_generator_v1.test | RUN | 0.245915 | 0.716444 | 0.945792 | 0.001660 | 0.002295 | 0.002276 |
| test_time_generator_v1_2.test | RUN | 0.244167 | 0.684604 | 0.856073 | 0.001898 | 0.002042 | 0.002008 |
| test_time_generator_v1_3.test | RUN | 0.262832 | 0.725682 | 0.940638 | 0.004681 | 0.004226 | 0.005237 |
| test_time_generator_v6.test | RUN | 0.242037 | 0.724565 | 0.969587 | 0.001887 | 0.002296 | 0.002016 |
| test_time_generator_v6_2.test | RUN | 0.247345 | 0.680695 | 0.912272 | 0.001771 | 0.002080 | 0.001836 |
| test_time_generator_v6_3.test | RUN | 0.262446 | 0.724967 | 0.985114 | 0.004464 | 0.004269 | 0.004240 |
| test_time_generator_v7.test | RUN | 0.234095 | 0.720633 | 0.891946 | 0.001793 | 0.002170 | 0.002012 |
| test_time_generator_v7_2.test | RUN | 0.219275 | 0.646767 | 0.858121 | 0.001374 | 0.001890 | 0.001502 |
| test_time_generator_v7_3.test | RUN | 0.221214 | 0.805529 | 0.874903 | 0.002192 | 0.002516 | 0.002264 |
| test_serialization.test | RUN | 0.412588 | 1.231802 | 1.474473 | 0.001891 | 0.001691 | 0.001820 |
| test_tagging.test | RUN | 0.225300 | 0.773897 | 0.834691 | 0.001615 | 0.001419 | 0.001530 |
| test_uuid_class.test | RUN | 0.231585 | 0.684294 | 0.944961 | 0.001604 | 0.001781 | 0.001737 |
| test_uuid_in_map.test | RUN | 0.258873 | 0.794273 | 1.004382 | 0.001726 | 0.001752 | 0.001664 |
| test_hash.test | RUN | 0.264532 | 0.717179 | 0.876490 | 0.001624 | 0.001630 | 0.001772 |
| test_hash_value.test | RUN | 0.187985 | 0.489374 | 0.686226 | 0.004841 | 0.004935 | 0.004713 |
| test_std_unordered.test | RUN | 0.241258 | 0.795036 | 0.918121 | 0.001666 | 0.001908 | 0.001510 |
| test_boost_unordered.test | RUN | 0.347533 | 1.033691 | 1.176183 | 0.001626 | 0.001672 | 0.001520 |
| test_detail_md5.test | RUN | 0.161745 | 0.517628 | 0.659270 | 0.001486 | 0.001535 | 0.001732 |
| test_detail_sha1.test | RUN | 0.148361 | 0.636861 | 0.622895 | 0.009464 | 0.009034 | 0.008307 |
| test_detail_endian.test | RUN | 0.116086 | 0.360380 | 0.448762 | 0.001488 | 0.001796 | 0.001630 |
| test_detail_chacha20.test | RUN | 0.122795 | 0.448906 | 0.462425 | 0.001543 | 0.001580 | 0.001687 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.116710 | 0.256246 | 0.382973 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.118308 | 0.259081 | 0.390188 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.198533 | 0.509128 | 0.677152 | 0.001745 | 0.001688 | 0.001702 |
| test_bench_random.test | RUN | 0.215613 | 0.660376 | 0.873750 | 0.005590 | 0.005833 | 0.005625 |
| test_entropy_error.test | RUN | 0.108496 | 0.295735 | 0.403041 | 0.001613 | 0.001726 | 0.001303 |
| test_detail_random_provider.test | RUN | 0.213974 | 0.520698 | 0.778247 | 0.001753 | 0.001796 | 0.001440 |
| test_constants.test | RUN | 0.168022 | 0.469650 | 0.629609 | 0.001583 | 0.001808 | 0.001592 |
| test_uuid_cx.test | COMPILE | 0.095797 | 0.229970 | 0.328385 | — | — | — |
| test_uuid_cx2.test | RUN | 0.177676 | 0.530174 | 0.666111 | 0.001379 | 0.001742 | 0.001712 |
| test_uuid_cx3.test | RUN | 0.153348 | 0.428351 | 0.605094 | 0.001511 | 0.001270 | 0.001541 |
| test_uuid_cx3_no_simd.test | RUN | 0.147621 | 0.402621 | 0.542689 | 0.001646 | 0.001670 | 0.001664 |
| test_hash_value_cx.test | RUN | 0.147940 | 0.380293 | 0.517348 | 0.001565 | 0.001600 | 0.001512 |
| test_string_generator_cx.test | RUN | 0.169557 | 0.468699 | 0.605442 | 0.001697 | 0.001706 | 0.001690 |
| test_string_generator_cx2.test | RUN | 0.209189 | 0.571667 | 0.697904 | 0.001570 | 0.001669 | 0.001526 |
| test_constants_cx.test | RUN | 0.144920 | 0.326798 | 0.521830 | 0.001483 | 0.001658 | 0.001566 |
| test_from_chars_cx.test | RUN | 0.179470 | 0.626504 | 0.654361 | 0.001467 | 0.001836 | 0.001340 |
| test_from_chars_cx2.test | RUN | 0.186833 | 0.786048 | 0.737453 | 0.001715 | 0.001589 | 0.001709 |
| test_to_chars_cx.test | RUN | 0.187764 | 0.722044 | 0.791402 | 0.001447 | 0.001556 | 0.001114 |
| test_uuid_from_string_cx.test | RUN | 0.196491 | 0.726587 | 0.679614 | 0.001264 | 0.001301 | 0.001556 |
| quick.test | RUN | 0.215760 | 0.583395 | 0.763756 | 0.001221 | 0.001245 | 0.001191 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.993× | 0.997×, 0.989× | 0.983× |
| clang | 1.008× | 1.012×, 1.005× | 0.996× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44813597235).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.001133s | 0.001154s | 0.001145s | byte equality observed |
| test_alignment.test | 10 | 0.001156s | 0.001133s | 0.001165s | byte equality observed |
| test_alignment_2.test | 10 | 0.001147s | 0.001133s | 0.001150s | byte equality observed |
| test_attribute_packed.test | 10 | 0.001127s | 0.001150s | 0.001136s | byte equality observed |
| test_bench_random.test | 4 | 0.005188s | 0.005119s | 0.005228s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.001209s | 0.001191s | 0.001202s | byte equality observed |
| test_comparison.test | 10 | 0.001198s | 0.001149s | 0.001212s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.001173s | 0.001139s | 0.001194s | byte equality observed |
| test_constants.test | 10 | 0.001146s | 0.001105s | 0.001183s | byte equality observed |
| test_constants_cx.test | 10 | 0.001127s | 0.001088s | 0.001140s | byte equality observed |
| test_data.test | 10 | 0.001162s | 0.001156s | 0.001151s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.001146s | 0.001127s | 0.001146s | byte equality observed |
| test_detail_endian.test | 10 | 0.001167s | 0.001135s | 0.001153s | byte equality observed |
| test_detail_md5.test | 10 | 0.001161s | 0.001157s | 0.001166s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.001159s | 0.001153s | 0.001149s | byte equality observed |
| test_detail_sha1.test | 3 | 0.008289s | 0.008481s | 0.007677s | byte equality observed |
| test_entropy_error.test | 10 | 0.001147s | 0.001156s | 0.001154s | byte equality observed |
| test_from_chars.test | 10 | 0.001130s | 0.001144s | 0.001130s | byte equality observed |
| test_from_chars_2.test | 10 | 0.001141s | 0.001143s | 0.001149s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.001144s | 0.001117s | 0.001159s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.001136s | 0.001150s | 0.001151s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.001167s | 0.001147s | 0.001156s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.001185s | 0.001147s | 0.001147s | byte equality observed |
| test_hash.test | 10 | 0.001173s | 0.001160s | 0.001153s | byte equality observed |
| test_hash_value.test | 6 | 0.004194s | 0.004154s | 0.004053s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.001138s | 0.001118s | 0.001130s | byte equality observed |
| test_include1.test | 10 | 0.000492s | 0.000491s | 0.001122s | byte equality observed |
| test_io.test | 10 | 0.001216s | 0.001222s | 0.001241s | byte equality observed |
| test_io_2.test | 10 | 0.001258s | 0.001279s | 0.001288s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.001295s | 0.001274s | 0.001287s | byte equality observed |
| test_io_no_simd.test | 10 | 0.001226s | 0.001202s | 0.001233s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.001165s | 0.001154s | 0.001158s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.001182s | 0.001163s | 0.001199s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.001178s | 0.001148s | 0.001187s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.001172s | 0.001192s | 0.001221s | byte equality observed |
| test_namespaces.test | 10 | 0.001136s | 0.001158s | 0.001162s | byte equality observed |
| test_nil_generator.test | 10 | 0.001146s | 0.001148s | 0.001137s | byte equality observed |
| test_pragma_pack.test | 10 | 0.001159s | 0.001129s | 0.001160s | byte equality observed |
| test_random_generator.test | 10 | 0.002011s | 0.001991s | 0.002002s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.001154s | 0.001141s | 0.001143s | byte equality observed |
| test_serialization.test | 10 | 0.001262s | 0.001248s | 0.001259s | byte equality observed |
| test_std_unordered.test | 10 | 0.001228s | 0.001220s | 0.001232s | byte equality observed |
| test_string_generator.test | 10 | 0.001271s | 0.001277s | 0.001292s | byte equality observed |
| test_string_generator_2.test | 10 | 0.001154s | 0.001158s | 0.001166s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.001159s | 0.001141s | 0.001151s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.001158s | 0.001164s | 0.001140s | byte equality observed |
| test_tagging.test | 10 | 0.001157s | 0.001156s | 0.001158s | byte equality observed |
| test_time_generator.test | 10 | 0.001183s | 0.001174s | 0.001190s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001582s | 0.001658s | 0.001699s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001396s | 0.001417s | 0.001447s | byte equality observed |
| test_time_generator_v1_3.test | 5 | 0.003613s | 0.003615s | 0.003795s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001590s | 0.001682s | 0.001686s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001406s | 0.001445s | 0.001441s | byte equality observed |
| test_time_generator_v6_3.test | 5 | 0.003579s | 0.003626s | 0.003639s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.001417s | 0.001455s | 0.001462s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.001217s | 0.001187s | 0.001215s | byte equality observed |
| test_time_generator_v7_3.test | 10 | 0.001819s | 0.001788s | 0.001834s | byte equality observed |
| test_to_chars.test | 10 | 0.001227s | 0.001174s | 0.001232s | byte equality observed |
| test_to_chars_2.test | 10 | 0.001201s | 0.001151s | 0.001181s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.001165s | 0.001160s | 0.001186s | byte equality observed |
| test_to_chars_3.test | 10 | 0.001176s | 0.001122s | 0.001169s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.001163s | 0.001151s | 0.001156s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.001225s | 0.001168s | 0.001235s | byte equality observed |
| test_uuid.test | 10 | 0.001155s | 0.001121s | 0.001153s | byte equality observed |
| test_uuid_2.test | 10 | 0.001165s | 0.001146s | 0.001156s | byte equality observed |
| test_uuid_3.test | 10 | 0.001142s | 0.001154s | 0.001141s | byte equality observed |
| test_uuid_class.test | 10 | 0.001168s | 0.001152s | 0.001172s | byte equality observed |
| test_uuid_clock.test | 10 | 0.001156s | 0.001145s | 0.001122s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.001167s | 0.001155s | 0.001172s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.001151s | 0.001125s | 0.001158s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.001127s | 0.001130s | 0.001153s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.001165s | 0.001137s | 0.001150s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.001425s | 0.001403s | 0.001477s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.001260s | 0.001233s | 0.001243s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.001166s | 0.001157s | 0.001160s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.001160s | 0.001190s | 0.001158s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.001142s | 0.001160s | 0.001164s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44813597235).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
