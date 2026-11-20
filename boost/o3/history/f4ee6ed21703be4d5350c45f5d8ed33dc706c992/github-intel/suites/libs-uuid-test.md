# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.469620 | 1.115466 | 1.495694 | 0.000756 | 0.000702 | 0.001624 |
| test_uuid.test | RUN | 0.304153 | 0.927426 | 1.061745 | 0.001698 | 0.001756 | 0.001686 |
| test_uuid_no_simd.test | RUN | 0.289271 | 0.895863 | 0.954266 | 0.001782 | 0.001514 | 0.001516 |
| test_uuid_2.test | RUN | 0.206170 | 0.671009 | 0.709826 | 0.001550 | 0.001502 | 0.001480 |
| test_uuid_3.test | RUN | 0.172513 | 0.471909 | 0.568622 | 0.001632 | 0.001710 | 0.001613 |
| test_alignment.test | RUN | 0.162659 | 0.417728 | 0.504058 | 0.001725 | 0.001645 | 0.001662 |
| test_alignment_2.test | RUN | 0.157754 | 0.405661 | 0.520381 | 0.001554 | 0.001440 | 0.001445 |
| test_attribute_packed.test | RUN | 0.161066 | 0.423402 | 0.507303 | 0.001711 | 0.001776 | 0.001577 |
| test_pragma_pack.test | RUN | 0.157548 | 0.420411 | 0.523485 | 0.001832 | 0.001713 | 0.001572 |
| test_data.test | RUN | 0.187205 | 0.762630 | 0.727714 | 0.001776 | 0.001627 | 0.001675 |
| test_comparison.test | RUN | 0.274003 | 0.890008 | 1.010492 | 0.001785 | 0.001864 | 0.001538 |
| test_comparison_no_simd.test | RUN | 0.265571 | 1.020331 | 0.911155 | 0.001553 | 0.001679 | 0.001546 |
| test_io.test | RUN | 0.358005 | 1.724673 | 1.522354 | 0.001754 | 0.001836 | 0.001784 |
| test_io_no_simd.test | RUN | 0.347238 | 1.706443 | 1.457947 | 0.001641 | 0.001795 | 0.001739 |
| test_io_2.test | RUN | 0.279490 | 1.772099 | 1.057798 | 0.001812 | 0.001918 | 0.001684 |
| test_io_2_no_simd.test | RUN | 0.256169 | 1.684902 | 0.985041 | 0.001890 | 0.001906 | 0.001843 |
| test_to_chars.test | RUN | 0.252132 | 1.112239 | 0.991454 | 0.001720 | 0.001796 | 0.001740 |
| test_to_chars_no_simd.test | RUN | 0.248297 | 1.131514 | 0.958628 | 0.001830 | 0.001650 | 0.001735 |
| test_to_chars_2.test | RUN | 0.312812 | 2.042224 | 1.181489 | 0.001534 | 0.001564 | 0.001488 |
| test_to_chars_2_no_simd.test | RUN | 0.325072 | 2.196521 | 1.078824 | 0.001529 | 0.001704 | 0.001677 |
| test_to_chars_3.test | RUN | 0.204672 | 0.715036 | 0.713022 | 0.001820 | 0.001715 | 0.001626 |
| test_from_chars.test | RUN | 0.241612 | 1.045333 | 0.808350 | 0.001577 | 0.001438 | 0.001627 |
| test_from_chars_no_simd.test | RUN | 0.213422 | 0.823663 | 0.686179 | 0.001594 | 0.001630 | 0.001523 |
| test_from_chars_2.test | RUN | 0.233696 | 0.975003 | 0.802425 | 0.001512 | 0.001624 | 0.001599 |
| test_from_chars_2_no_simd.test | RUN | 0.205992 | 0.739118 | 0.634742 | 0.001790 | 0.001738 | 0.001664 |
| test_uuid_from_string.test | RUN | 0.274228 | 1.078365 | 0.971632 | 0.001121 | 0.001665 | 0.001415 |
| test_uuid_from_string_2.test | RUN | 0.246415 | 0.981869 | 0.805847 | 0.001899 | 0.002054 | 0.001833 |
| test_uuid_from_string_3.test | RUN | 0.244742 | 0.986417 | 0.849907 | 0.001776 | 0.001828 | 0.001811 |
| test_uuid_clock.test | RUN | 0.145210 | 0.390073 | 0.493620 | 0.001535 | 0.001762 | 0.001491 |
| test_nil_generator.test | RUN | 0.170670 | 0.464063 | 0.590135 | 0.001653 | 0.001742 | 0.001664 |
| test_string_generator.test | RUN | 0.228360 | 0.778312 | 0.810511 | 0.001736 | 0.001874 | 0.001863 |
| test_string_generator_2.test | RUN | 0.281817 | 1.098879 | 0.914042 | 0.001671 | 0.001653 | 0.001745 |
| test_random_generator.test | RUN | 0.376612 | 2.131579 | 1.386827 | 0.003922 | 0.004072 | 0.003886 |
| test_random_generator_2.test | RUN | 0.274071 | 0.820795 | 0.918589 | 0.001667 | 0.001725 | 0.001652 |
| test_name_generator.test | RUN | 0.250518 | 2.792255 | 1.016809 | 0.001597 | 0.001747 | 0.001594 |
| test_namespaces.test | RUN | 0.195648 | 0.577212 | 0.666190 | 0.001484 | 0.001766 | 0.001601 |
| test_name_generator_md5.test | RUN | 0.252177 | 1.321155 | 0.964719 | 0.001761 | 0.001756 | 0.001774 |
| test_name_generator_sha1.test | RUN | 0.242574 | 4.149218 | 0.959237 | 0.001625 | 0.001806 | 0.001770 |
| test_time_generator.test | RUN | 0.257308 | 0.814109 | 0.897498 | 0.001684 | 0.001727 | 0.001663 |
| test_time_generator_v1.test | RUN | 0.286536 | 0.898614 | 1.019229 | 0.002383 | 0.002355 | 0.002378 |
| test_time_generator_v1_2.test | RUN | 0.279632 | 0.834630 | 0.952170 | 0.001972 | 0.002130 | 0.002117 |
| test_time_generator_v1_3.test | RUN | 0.315035 | 0.886155 | 1.051492 | 0.005357 | 0.004798 | 0.005033 |
| test_time_generator_v6.test | RUN | 0.290373 | 0.893579 | 1.009933 | 0.002115 | 0.002335 | 0.002373 |
| test_time_generator_v6_2.test | RUN | 0.285100 | 0.849806 | 0.963370 | 0.001891 | 0.002084 | 0.002096 |
| test_time_generator_v6_3.test | RUN | 0.312220 | 0.898974 | 1.066546 | 0.003711 | 0.005022 | 0.005217 |
| test_time_generator_v7.test | RUN | 0.279389 | 0.898585 | 0.974346 | 0.001981 | 0.002158 | 0.002157 |
| test_time_generator_v7_2.test | RUN | 0.257168 | 0.792679 | 0.890732 | 0.001721 | 0.001856 | 0.001577 |
| test_time_generator_v7_3.test | RUN | 0.257416 | 1.011592 | 0.919243 | 0.002663 | 0.002943 | 0.002791 |
| test_serialization.test | RUN | 0.470406 | 1.527211 | 1.674081 | 0.001938 | 0.001772 | 0.001869 |
| test_tagging.test | RUN | 0.259943 | 0.958845 | 0.909643 | 0.001549 | 0.001831 | 0.001562 |
| test_uuid_class.test | RUN | 0.271484 | 0.845263 | 0.976041 | 0.001684 | 0.001502 | 0.001747 |
| test_uuid_in_map.test | RUN | 0.299905 | 0.977763 | 1.058568 | 0.001674 | 0.001712 | 0.001704 |
| test_hash.test | RUN | 0.300067 | 0.875279 | 0.959788 | 0.001586 | 0.001771 | 0.001688 |
| test_hash_value.test | RUN | 0.219179 | 0.605726 | 0.718686 | 0.005672 | 0.005681 | 0.005679 |
| test_std_unordered.test | RUN | 0.282011 | 0.989013 | 0.992198 | 0.001680 | 0.001844 | 0.001776 |
| test_boost_unordered.test | RUN | 0.401930 | 1.278923 | 1.282912 | 0.001458 | 0.001520 | 0.001653 |
| test_detail_md5.test | RUN | 0.185388 | 0.611010 | 0.700870 | 0.001585 | 0.001614 | 0.001590 |
| test_detail_sha1.test | RUN | 0.173888 | 0.784076 | 0.648342 | 0.011027 | 0.010910 | 0.010050 |
| test_detail_endian.test | RUN | 0.135950 | 0.445716 | 0.475258 | 0.001504 | 0.001666 | 0.001717 |
| test_detail_chacha20.test | RUN | 0.149078 | 0.552234 | 0.502802 | 0.001463 | 0.001557 | 0.001644 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.132887 | 0.305761 | 0.382102 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.134945 | 0.310659 | 0.395219 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.224512 | 0.591641 | 0.695262 | 0.001719 | 0.001643 | 0.001654 |
| test_bench_random.test | RUN | 0.253831 | 0.816602 | 0.949036 | 0.012817 | 0.012660 | 0.012858 |
| test_entropy_error.test | RUN | 0.130745 | 0.368606 | 0.435324 | 0.001555 | 0.001630 | 0.001473 |
| test_detail_random_provider.test | RUN | 0.245112 | 0.622360 | 0.814537 | 0.001635 | 0.001492 | 0.001395 |
| test_constants.test | RUN | 0.197542 | 0.569225 | 0.643834 | 0.001284 | 0.001626 | 0.001526 |
| test_uuid_cx.test | COMPILE | 0.111697 | 0.273665 | 0.312324 | — | — | — |
| test_uuid_cx2.test | RUN | 0.207974 | 0.670894 | 0.714560 | 0.001365 | 0.001617 | 0.001667 |
| test_uuid_cx3.test | RUN | 0.178436 | 0.525704 | 0.651733 | 0.001502 | 0.001603 | 0.001592 |
| test_uuid_cx3_no_simd.test | RUN | 0.168571 | 0.488818 | 0.557936 | 0.001472 | 0.001672 | 0.001743 |
| test_hash_value_cx.test | RUN | 0.171260 | 0.470615 | 0.577762 | 0.001509 | 0.001616 | 0.001440 |
| test_string_generator_cx.test | RUN | 0.204232 | 0.574709 | 0.659901 | 0.001805 | 0.001461 | 0.001546 |
| test_string_generator_cx2.test | RUN | 0.250360 | 0.698622 | 0.775957 | 0.001624 | 0.001709 | 0.001640 |
| test_constants_cx.test | RUN | 0.163442 | 0.393907 | 0.546327 | 0.001370 | 0.001628 | 0.001501 |
| test_from_chars_cx.test | RUN | 0.214422 | 0.780648 | 0.711816 | 0.001577 | 0.001736 | 0.001429 |
| test_from_chars_cx2.test | RUN | 0.226768 | 0.965957 | 0.792023 | 0.001504 | 0.001158 | 0.001730 |
| test_to_chars_cx.test | RUN | 0.223330 | 0.892792 | 0.854578 | 0.001636 | 0.001614 | 0.001512 |
| test_uuid_from_string_cx.test | RUN | 0.236535 | 0.908320 | 0.794039 | 0.001142 | 0.001194 | 0.001163 |
| quick.test | RUN | 0.246271 | 0.696103 | 0.780779 | 0.001250 | 0.001196 | 0.001168 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.995× | 0.998×, 0.992× | 0.996× |
| clang | 0.997× | 0.994×, 1.000× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44667760294).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.001200s | 0.001204s | 0.001210s | byte equality observed |
| test_alignment.test | 10 | 0.001183s | 0.001186s | 0.001198s | byte equality observed |
| test_alignment_2.test | 10 | 0.001205s | 0.001169s | 0.001196s | byte equality observed |
| test_attribute_packed.test | 10 | 0.001176s | 0.001184s | 0.001177s | byte equality observed |
| test_bench_random.test | 2 | 0.012338s | 0.012326s | 0.012370s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.001253s | 0.001231s | 0.001228s | byte equality observed |
| test_comparison.test | 10 | 0.001234s | 0.001230s | 0.001258s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.001254s | 0.001248s | 0.001262s | byte equality observed |
| test_constants.test | 10 | 0.001233s | 0.001239s | 0.001239s | byte equality observed |
| test_constants_cx.test | 10 | 0.001218s | 0.001191s | 0.001211s | byte equality observed |
| test_data.test | 10 | 0.001251s | 0.001202s | 0.001250s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.001224s | 0.001223s | 0.001209s | byte equality observed |
| test_detail_endian.test | 10 | 0.001216s | 0.001223s | 0.001213s | byte equality observed |
| test_detail_md5.test | 10 | 0.001249s | 0.001249s | 0.001226s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.001233s | 0.001209s | 0.001275s | byte equality observed |
| test_detail_sha1.test | 3 | 0.009521s | 0.009655s | 0.008773s | byte equality observed |
| test_entropy_error.test | 10 | 0.001222s | 0.001208s | 0.001225s | byte equality observed |
| test_from_chars.test | 10 | 0.001204s | 0.001216s | 0.001216s | byte equality observed |
| test_from_chars_2.test | 10 | 0.001230s | 0.001193s | 0.001245s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.001233s | 0.001202s | 0.001237s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.001227s | 0.001218s | 0.001226s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.001211s | 0.001214s | 0.001251s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.001205s | 0.001233s | 0.001216s | byte equality observed |
| test_hash.test | 10 | 0.001242s | 0.001247s | 0.001213s | byte equality observed |
| test_hash_value.test | 5 | 0.005019s | 0.004944s | 0.004882s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.001213s | 0.001207s | 0.001255s | byte equality observed |
| test_include1.test | 10 | 0.000537s | 0.000523s | 0.001212s | byte equality observed |
| test_io.test | 10 | 0.001311s | 0.001342s | 0.001301s | byte equality observed |
| test_io_2.test | 10 | 0.001369s | 0.001360s | 0.001384s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.001364s | 0.001404s | 0.001371s | byte equality observed |
| test_io_no_simd.test | 10 | 0.001331s | 0.001319s | 0.001298s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.001234s | 0.001222s | 0.001225s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.001244s | 0.001250s | 0.001254s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.001269s | 0.001257s | 0.001280s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.001296s | 0.001249s | 0.001281s | byte equality observed |
| test_namespaces.test | 10 | 0.001218s | 0.001205s | 0.001220s | byte equality observed |
| test_nil_generator.test | 10 | 0.001198s | 0.001221s | 0.001203s | byte equality observed |
| test_pragma_pack.test | 10 | 0.001185s | 0.001183s | 0.001201s | byte equality observed |
| test_random_generator.test | 6 | 0.003415s | 0.003385s | 0.003399s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.001252s | 0.001226s | 0.001198s | byte equality observed |
| test_serialization.test | 10 | 0.001353s | 0.001343s | 0.001335s | byte equality observed |
| test_std_unordered.test | 10 | 0.001303s | 0.001320s | 0.001304s | byte equality observed |
| test_string_generator.test | 10 | 0.001350s | 0.001372s | 0.001368s | byte equality observed |
| test_string_generator_2.test | 10 | 0.001244s | 0.001249s | 0.001269s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.001242s | 0.001203s | 0.001246s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.001244s | 0.001198s | 0.001219s | byte equality observed |
| test_tagging.test | 10 | 0.001241s | 0.001244s | 0.001239s | byte equality observed |
| test_time_generator.test | 9 | 0.001250s | 0.001218s | 0.001263s | byte equality observed |
| test_time_generator_v1.test | 8 | 0.001756s | 0.001784s | 0.001839s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001537s | 0.001561s | 0.001570s | byte equality observed |
| test_time_generator_v1_3.test | 4 | 0.004444s | 0.004442s | 0.004512s | byte equality observed |
| test_time_generator_v6.test | 8 | 0.001759s | 0.001803s | 0.001882s | byte equality observed |
| test_time_generator_v6_2.test | 8 | 0.001538s | 0.001575s | 0.001566s | byte equality observed |
| test_time_generator_v6_3.test | 3 | 0.004769s | 0.004373s | 0.004843s | byte equality observed |
| test_time_generator_v7.test | 9 | 0.001528s | 0.001537s | 0.001596s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.001305s | 0.001287s | 0.001319s | byte equality observed |
| test_time_generator_v7_3.test | 8 | 0.002345s | 0.002340s | 0.002341s | byte equality observed |
| test_to_chars.test | 10 | 0.001304s | 0.001276s | 0.001278s | byte equality observed |
| test_to_chars_2.test | 10 | 0.001234s | 0.001237s | 0.001230s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.001246s | 0.001252s | 0.001237s | byte equality observed |
| test_to_chars_3.test | 10 | 0.001213s | 0.001210s | 0.001202s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.001231s | 0.001235s | 0.001248s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.001321s | 0.001288s | 0.001323s | byte equality observed |
| test_uuid.test | 10 | 0.001217s | 0.001210s | 0.001204s | byte equality observed |
| test_uuid_2.test | 10 | 0.001236s | 0.001207s | 0.001232s | byte equality observed |
| test_uuid_3.test | 10 | 0.001192s | 0.001185s | 0.001221s | byte equality observed |
| test_uuid_class.test | 10 | 0.001229s | 0.001253s | 0.001246s | byte equality observed |
| test_uuid_clock.test | 10 | 0.001233s | 0.001210s | 0.001192s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.001245s | 0.001219s | 0.001220s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.001210s | 0.001212s | 0.001235s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.001213s | 0.001205s | 0.001212s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.001243s | 0.001229s | 0.001236s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.001539s | 0.001532s | 0.001552s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.001329s | 0.001300s | 0.001329s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.001227s | 0.001206s | 0.001216s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.001230s | 0.001225s | 0.001251s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.001221s | 0.001208s | 0.001223s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44667760294).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
