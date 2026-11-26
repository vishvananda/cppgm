# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.606383 | 1.347334 | 2.319458 | 0.000839 | 0.000924 | 0.002058 |
| test_uuid.test | RUN | 0.363770 | 1.065548 | 1.568533 | 0.001918 | 0.002238 | 0.002198 |
| test_uuid_no_simd.test | RUN | 0.345357 | 1.065388 | 1.415684 | 0.001571 | 0.001994 | 0.002050 |
| test_uuid_2.test | RUN | 0.257306 | 0.750290 | 0.998596 | 0.002320 | 0.001989 | 0.002100 |
| test_uuid_3.test | RUN | 0.219018 | 0.537638 | 0.875431 | 0.001896 | 0.002152 | 0.001624 |
| test_alignment.test | RUN | 0.205938 | 0.514540 | 0.733136 | 0.001886 | 0.001841 | 0.001916 |
| test_alignment_2.test | RUN | 0.198280 | 0.468681 | 0.748415 | 0.001934 | 0.002162 | 0.001830 |
| test_attribute_packed.test | RUN | 0.200937 | 0.502018 | 0.770018 | 0.001862 | 0.002123 | 0.001888 |
| test_pragma_pack.test | RUN | 0.208923 | 0.482559 | 0.765218 | 0.001909 | 0.002091 | 0.002260 |
| test_data.test | RUN | 0.234238 | 0.866729 | 1.065181 | 0.001887 | 0.002229 | 0.002037 |
| test_comparison.test | RUN | 0.341746 | 1.050145 | 1.489402 | 0.002084 | 0.002147 | 0.001937 |
| test_comparison_no_simd.test | RUN | 0.340574 | 1.189217 | 1.254783 | 0.001919 | 0.002142 | 0.002100 |
| test_io.test | RUN | 0.417734 | 1.905555 | 2.149358 | 0.002191 | 0.002182 | 0.002228 |
| test_io_no_simd.test | RUN | 0.402028 | 1.847068 | 1.946797 | 0.001940 | 0.002110 | 0.002163 |
| test_io_2.test | RUN | 0.318150 | 1.947823 | 1.483736 | 0.002002 | 0.002095 | 0.002040 |
| test_io_2_no_simd.test | RUN | 0.291182 | 1.833295 | 1.347882 | 0.002196 | 0.002196 | 0.002084 |
| test_to_chars.test | RUN | 0.296444 | 1.236755 | 1.352781 | 0.002183 | 0.002258 | 0.002176 |
| test_to_chars_no_simd.test | RUN | 0.290195 | 1.252474 | 1.339345 | 0.002162 | 0.001963 | 0.002184 |
| test_to_chars_2.test | RUN | 0.350421 | 2.221456 | 1.603971 | 0.001884 | 0.002046 | 0.001981 |
| test_to_chars_2_no_simd.test | RUN | 0.359157 | 2.393061 | 1.461482 | 0.001960 | 0.002246 | 0.002109 |
| test_to_chars_3.test | RUN | 0.249474 | 0.805946 | 1.033408 | 0.001891 | 0.001954 | 0.001968 |
| test_from_chars.test | RUN | 0.264601 | 1.166163 | 1.121492 | 0.001860 | 0.002098 | 0.001970 |
| test_from_chars_no_simd.test | RUN | 0.223654 | 0.949840 | 0.950101 | 0.001697 | 0.002246 | 0.002027 |
| test_from_chars_2.test | RUN | 0.264008 | 1.116592 | 1.122654 | 0.001964 | 0.001979 | 0.002135 |
| test_from_chars_2_no_simd.test | RUN | 0.218996 | 0.838757 | 0.869601 | 0.001880 | 0.002124 | 0.002110 |
| test_uuid_from_string.test | RUN | 0.305503 | 1.214887 | 1.351606 | 0.001906 | 0.002117 | 0.001766 |
| test_uuid_from_string_2.test | RUN | 0.271946 | 1.088568 | 1.132735 | 0.002218 | 0.002653 | 0.002425 |
| test_uuid_from_string_3.test | RUN | 0.275091 | 1.090658 | 1.200073 | 0.001830 | 0.002056 | 0.002200 |
| test_uuid_clock.test | RUN | 0.180620 | 0.460200 | 0.743288 | 0.001908 | 0.002151 | 0.001640 |
| test_nil_generator.test | RUN | 0.209947 | 0.566336 | 0.858689 | 0.002048 | 0.001944 | 0.002005 |
| test_string_generator.test | RUN | 0.270976 | 0.875475 | 1.127971 | 0.001940 | 0.002390 | 0.002156 |
| test_string_generator_2.test | RUN | 0.330586 | 1.265713 | 1.283943 | 0.001876 | 0.001804 | 0.002142 |
| test_random_generator.test | RUN | 0.443758 | 2.389095 | 1.907098 | 0.003291 | 0.003468 | 0.003471 |
| test_random_generator_2.test | RUN | 0.328398 | 0.955347 | 1.355088 | 0.001863 | 0.001996 | 0.001855 |
| test_name_generator.test | RUN | 0.292665 | 3.121709 | 1.375452 | 0.001832 | 0.002194 | 0.001800 |
| test_namespaces.test | RUN | 0.232111 | 0.673591 | 0.940296 | 0.001756 | 0.002129 | 0.001657 |
| test_name_generator_md5.test | RUN | 0.290857 | 1.453237 | 1.349341 | 0.002110 | 0.002234 | 0.002191 |
| test_name_generator_sha1.test | RUN | 0.287786 | 4.553265 | 1.302379 | 0.001840 | 0.002073 | 0.002251 |
| test_time_generator.test | RUN | 0.315366 | 0.922318 | 1.362853 | 0.001876 | 0.002226 | 0.002195 |
| test_time_generator_v1.test | RUN | 0.346938 | 1.017374 | 1.511230 | 0.002544 | 0.002734 | 0.002848 |
| test_time_generator_v1_2.test | RUN | 0.343689 | 0.970360 | 1.359880 | 0.002292 | 0.002454 | 0.002446 |
| test_time_generator_v1_3.test | RUN | 0.381894 | 1.013842 | 1.544237 | 0.005183 | 0.006032 | 0.005550 |
| test_time_generator_v6.test | RUN | 0.353993 | 1.040032 | 1.458087 | 0.002430 | 0.002714 | 0.002967 |
| test_time_generator_v6_2.test | RUN | 0.356440 | 0.966801 | 1.439813 | 0.002276 | 0.002584 | 0.002604 |
| test_time_generator_v6_3.test | RUN | 0.378408 | 1.021416 | 1.559494 | 0.005258 | 0.005368 | 0.006192 |
| test_time_generator_v7.test | RUN | 0.333983 | 0.997490 | 1.463344 | 0.002221 | 0.002542 | 0.002248 |
| test_time_generator_v7_2.test | RUN | 0.315236 | 0.913148 | 1.359301 | 0.001924 | 0.002340 | 0.001628 |
| test_time_generator_v7_3.test | RUN | 0.319101 | 1.154294 | 1.338381 | 0.003024 | 0.003399 | 0.003135 |
| test_serialization.test | RUN | 0.566416 | 1.736478 | 2.297410 | 0.002328 | 0.002154 | 0.002297 |
| test_tagging.test | RUN | 0.328559 | 1.090920 | 1.385964 | 0.002020 | 0.001632 | 0.001796 |
| test_uuid_class.test | RUN | 0.335272 | 0.975061 | 1.441128 | 0.001654 | 0.001926 | 0.002076 |
| test_uuid_in_map.test | RUN | 0.378881 | 1.128077 | 1.556031 | 0.002118 | 0.002136 | 0.002232 |
| test_hash.test | RUN | 0.373880 | 1.028294 | 1.458451 | 0.002076 | 0.002022 | 0.001957 |
| test_hash_value.test | RUN | 0.260393 | 0.700472 | 1.083321 | 0.006189 | 0.006074 | 0.006015 |
| test_std_unordered.test | RUN | 0.348619 | 1.096641 | 1.431882 | 0.002115 | 0.002268 | 0.002277 |
| test_boost_unordered.test | RUN | 0.466883 | 1.462443 | 1.816714 | 0.001948 | 0.001819 | 0.001957 |
| test_detail_md5.test | RUN | 0.224445 | 0.695078 | 1.058591 | 0.001685 | 0.002098 | 0.002056 |
| test_detail_sha1.test | RUN | 0.209892 | 0.899493 | 0.934489 | 0.013710 | 0.011244 | 0.011997 |
| test_detail_endian.test | RUN | 0.165899 | 0.519165 | 0.692622 | 0.001825 | 0.001904 | 0.002087 |
| test_detail_chacha20.test | RUN | 0.183074 | 0.645217 | 0.660930 | 0.001876 | 0.001906 | 0.001760 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.167297 | 0.364914 | 0.598027 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.167355 | 0.379924 | 0.588215 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.284473 | 0.689604 | 1.042519 | 0.001935 | 0.002186 | 0.002019 |
| test_bench_random.test | RUN | 0.311293 | 0.940003 | 1.347780 | 0.008703 | 0.008861 | 0.008814 |
| test_entropy_error.test | RUN | 0.156202 | 0.433185 | 0.641142 | 0.001916 | 0.001902 | 0.001940 |
| test_detail_random_provider.test | RUN | 0.299286 | 0.709106 | 1.250416 | 0.001985 | 0.002045 | 0.001943 |
| test_constants.test | RUN | 0.240880 | 0.653644 | 0.957264 | 0.002014 | 0.002104 | 0.001912 |
| test_uuid_cx.test | COMPILE | 0.139071 | 0.326391 | 0.503742 | — | — | — |
| test_uuid_cx2.test | RUN | 0.243111 | 0.761665 | 1.049536 | 0.001850 | 0.002078 | 0.002069 |
| test_uuid_cx3.test | RUN | 0.218535 | 0.599607 | 0.929256 | 0.001727 | 0.002292 | 0.002056 |
| test_uuid_cx3_no_simd.test | RUN | 0.205371 | 0.565165 | 0.839786 | 0.001998 | 0.002121 | 0.001740 |
| test_hash_value_cx.test | RUN | 0.210221 | 0.549845 | 0.849430 | 0.002146 | 0.002135 | 0.001660 |
| test_string_generator_cx.test | RUN | 0.241143 | 0.654067 | 0.950449 | 0.002051 | 0.002084 | 0.002101 |
| test_string_generator_cx2.test | RUN | 0.292560 | 0.817237 | 1.123690 | 0.001921 | 0.002044 | 0.002161 |
| test_constants_cx.test | RUN | 0.204351 | 0.487534 | 0.780820 | 0.001762 | 0.001897 | 0.002180 |
| test_from_chars_cx.test | RUN | 0.247254 | 0.895387 | 1.061618 | 0.002036 | 0.002046 | 0.002152 |
| test_from_chars_cx2.test | RUN | 0.254420 | 1.100575 | 1.079319 | 0.001786 | 0.001966 | 0.002118 |
| test_to_chars_cx.test | RUN | 0.257919 | 1.014579 | 1.173141 | 0.002096 | 0.001965 | 0.001692 |
| test_uuid_from_string_cx.test | RUN | 0.273784 | 1.036569 | 1.013661 | 0.001427 | 0.001492 | 0.001373 |
| quick.test | RUN | 0.274282 | 0.758130 | 1.081365 | 0.001336 | 0.001564 | 0.001537 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.990× | 0.996×, 0.985× | 1.001× |
| clang | 0.992× | 1.007×, 0.977× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45850603565).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.001499s | 0.001472s | 0.001497s | byte equality observed |
| test_alignment.test | 10 | 0.001466s | 0.001496s | 0.001484s | byte equality observed |
| test_alignment_2.test | 10 | 0.001464s | 0.001462s | 0.001467s | byte equality observed |
| test_attribute_packed.test | 10 | 0.001436s | 0.001449s | 0.001457s | byte equality observed |
| test_bench_random.test | 3 | 0.008249s | 0.008229s | 0.008283s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.001511s | 0.001476s | 0.001498s | byte equality observed |
| test_comparison.test | 10 | 0.001510s | 0.001496s | 0.001469s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.001555s | 0.001566s | 0.001514s | byte equality observed |
| test_constants.test | 10 | 0.001502s | 0.001487s | 0.001486s | byte equality observed |
| test_constants_cx.test | 10 | 0.001457s | 0.001475s | 0.001470s | byte equality observed |
| test_data.test | 10 | 0.001479s | 0.001473s | 0.001488s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.001513s | 0.001501s | 0.001515s | byte equality observed |
| test_detail_endian.test | 10 | 0.001496s | 0.001519s | 0.001477s | byte equality observed |
| test_detail_md5.test | 10 | 0.001525s | 0.001564s | 0.001512s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.001507s | 0.001502s | 0.001485s | byte equality observed |
| test_detail_sha1.test | 3 | 0.012081s | 0.010499s | 0.010412s | byte equality observed |
| test_entropy_error.test | 10 | 0.001449s | 0.001447s | 0.001449s | byte equality observed |
| test_from_chars.test | 10 | 0.001451s | 0.001428s | 0.001445s | byte equality observed |
| test_from_chars_2.test | 10 | 0.001465s | 0.001464s | 0.001464s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.001468s | 0.001474s | 0.001512s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.001489s | 0.001495s | 0.001480s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.001506s | 0.001498s | 0.001456s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.001492s | 0.001461s | 0.001529s | byte equality observed |
| test_hash.test | 10 | 0.001509s | 0.001492s | 0.001503s | byte equality observed |
| test_hash_value.test | 5 | 0.005606s | 0.005471s | 0.005269s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.001471s | 0.001435s | 0.001454s | byte equality observed |
| test_include1.test | 10 | 0.000646s | 0.000654s | 0.001459s | byte equality observed |
| test_io.test | 10 | 0.001587s | 0.001595s | 0.001579s | byte equality observed |
| test_io_2.test | 10 | 0.001667s | 0.001687s | 0.001645s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.001685s | 0.001679s | 0.001676s | byte equality observed |
| test_io_no_simd.test | 10 | 0.001612s | 0.001602s | 0.001536s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.001490s | 0.001531s | 0.001497s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.001536s | 0.001528s | 0.001551s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.001523s | 0.001543s | 0.001544s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.001559s | 0.001586s | 0.001541s | byte equality observed |
| test_namespaces.test | 10 | 0.001502s | 0.001478s | 0.001452s | byte equality observed |
| test_nil_generator.test | 10 | 0.001460s | 0.001497s | 0.001472s | byte equality observed |
| test_pragma_pack.test | 10 | 0.001486s | 0.001470s | 0.001428s | byte equality observed |
| test_random_generator.test | 6 | 0.002908s | 0.002871s | 0.002870s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.001518s | 0.001499s | 0.001497s | byte equality observed |
| test_serialization.test | 10 | 0.001597s | 0.001626s | 0.001633s | byte equality observed |
| test_std_unordered.test | 10 | 0.001610s | 0.001572s | 0.001599s | byte equality observed |
| test_string_generator.test | 10 | 0.001667s | 0.001613s | 0.001599s | byte equality observed |
| test_string_generator_2.test | 10 | 0.001543s | 0.001514s | 0.001547s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.001484s | 0.001487s | 0.001517s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.001486s | 0.001509s | 0.001490s | byte equality observed |
| test_tagging.test | 10 | 0.001503s | 0.001518s | 0.001512s | byte equality observed |
| test_time_generator.test | 10 | 0.001529s | 0.001522s | 0.001496s | byte equality observed |
| test_time_generator_v1.test | 9 | 0.002063s | 0.002149s | 0.002214s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001825s | 0.001854s | 0.001838s | byte equality observed |
| test_time_generator_v1_3.test | 5 | 0.004660s | 0.004631s | 0.004684s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001974s | 0.002130s | 0.002187s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001818s | 0.001881s | 0.001856s | byte equality observed |
| test_time_generator_v6_3.test | 5 | 0.004624s | 0.004714s | 0.004562s | byte equality observed |
| test_time_generator_v7.test | 8 | 0.001795s | 0.001824s | 0.001880s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.001560s | 0.001592s | 0.001561s | byte equality observed |
| test_time_generator_v7_3.test | 8 | 0.002523s | 0.002525s | 0.002523s | byte equality observed |
| test_to_chars.test | 10 | 0.001576s | 0.001587s | 0.001585s | byte equality observed |
| test_to_chars_2.test | 10 | 0.001550s | 0.001574s | 0.001490s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.001520s | 0.001563s | 0.001537s | byte equality observed |
| test_to_chars_3.test | 10 | 0.001521s | 0.001495s | 0.001488s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.001537s | 0.001523s | 0.001522s | byte equality observed |
| test_to_chars_no_simd.test | 9 | 0.001602s | 0.001632s | 0.001594s | byte equality observed |
| test_uuid.test | 10 | 0.001474s | 0.001495s | 0.001512s | byte equality observed |
| test_uuid_2.test | 10 | 0.001520s | 0.001521s | 0.001489s | byte equality observed |
| test_uuid_3.test | 10 | 0.001506s | 0.001485s | 0.001513s | byte equality observed |
| test_uuid_class.test | 10 | 0.001555s | 0.001532s | 0.001548s | byte equality observed |
| test_uuid_clock.test | 10 | 0.001445s | 0.001485s | 0.001468s | byte equality observed |
| test_uuid_cx2.test | 9 | 0.001515s | 0.001499s | 0.001460s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.001518s | 0.001490s | 0.001524s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.001481s | 0.001498s | 0.001507s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.001526s | 0.001497s | 0.001477s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.001891s | 0.001859s | 0.002005s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.001634s | 0.001646s | 0.001649s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.001473s | 0.001513s | 0.001496s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.001524s | 0.001479s | 0.001493s | byte equality observed |
| test_uuid_no_simd.test | 9 | 0.001510s | 0.001465s | 0.001503s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45850603565).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
