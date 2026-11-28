# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.360724 | 0.818737 | 1.108855 | 0.000509 | 0.000616 | 0.001425 |
| test_uuid.test | RUN | 0.220748 | 0.671024 | 0.791336 | 0.001460 | 0.001328 | 0.001512 |
| test_uuid_no_simd.test | RUN | 0.219274 | 0.658217 | 0.727650 | 0.001525 | 0.001220 | 0.001183 |
| test_uuid_2.test | RUN | 0.154730 | 0.495539 | 0.526662 | 0.001183 | 0.001401 | 0.001278 |
| test_uuid_3.test | RUN | 0.127683 | 0.338341 | 0.423782 | 0.001366 | 0.001356 | 0.001191 |
| test_alignment.test | RUN | 0.116837 | 0.308647 | 0.373724 | 0.001430 | 0.001202 | 0.001252 |
| test_alignment_2.test | RUN | 0.118963 | 0.297888 | 0.376729 | 0.001366 | 0.001238 | 0.001450 |
| test_attribute_packed.test | RUN | 0.121528 | 0.311260 | 0.386526 | 0.001487 | 0.001427 | 0.001397 |
| test_pragma_pack.test | RUN | 0.118437 | 0.306748 | 0.384999 | 0.001566 | 0.001614 | 0.001301 |
| test_data.test | RUN | 0.143055 | 0.569516 | 0.547970 | 0.001399 | 0.001465 | 0.001422 |
| test_comparison.test | RUN | 0.205413 | 0.665147 | 0.731064 | 0.001582 | 0.001512 | 0.001395 |
| test_comparison_no_simd.test | RUN | 0.199893 | 0.756136 | 0.678110 | 0.001411 | 0.001256 | 0.001227 |
| test_io.test | RUN | 0.267206 | 1.277039 | 1.146597 | 0.001635 | 0.001658 | 0.001594 |
| test_io_no_simd.test | RUN | 0.267107 | 1.262474 | 1.083661 | 0.001339 | 0.001434 | 0.001500 |
| test_io_2.test | RUN | 0.212333 | 1.319849 | 0.806246 | 0.001471 | 0.001042 | 0.001360 |
| test_io_2_no_simd.test | RUN | 0.191341 | 1.246041 | 0.733250 | 0.001521 | 0.001632 | 0.001289 |
| test_to_chars.test | RUN | 0.193712 | 0.833018 | 0.745984 | 0.001630 | 0.001602 | 0.001578 |
| test_to_chars_no_simd.test | RUN | 0.187798 | 0.837857 | 0.714157 | 0.001181 | 0.001322 | 0.001373 |
| test_to_chars_2.test | RUN | 0.237732 | 1.527184 | 0.884968 | 0.001261 | 0.001286 | 0.001285 |
| test_to_chars_2_no_simd.test | RUN | 0.242589 | 1.612699 | 0.805539 | 0.001311 | 0.001307 | 0.001446 |
| test_to_chars_3.test | RUN | 0.157928 | 0.526048 | 0.532446 | 0.001515 | 0.001408 | 0.001242 |
| test_from_chars.test | RUN | 0.176586 | 0.765137 | 0.606784 | 0.001411 | 0.001249 | 0.001207 |
| test_from_chars_no_simd.test | RUN | 0.140338 | 0.605328 | 0.505236 | 0.001293 | 0.001229 | 0.001243 |
| test_from_chars_2.test | RUN | 0.167130 | 0.716213 | 0.590246 | 0.001557 | 0.001368 | 0.001152 |
| test_from_chars_2_no_simd.test | RUN | 0.133007 | 0.543792 | 0.483574 | 0.001343 | 0.001533 | 0.001094 |
| test_uuid_from_string.test | RUN | 0.196722 | 0.784990 | 0.725408 | 0.001170 | 0.001373 | 0.001240 |
| test_uuid_from_string_2.test | RUN | 0.174037 | 0.710042 | 0.608323 | 0.001420 | 0.001868 | 0.001715 |
| test_uuid_from_string_3.test | RUN | 0.177268 | 0.717592 | 0.629943 | 0.001286 | 0.001344 | 0.001597 |
| test_uuid_clock.test | RUN | 0.107223 | 0.293058 | 0.367595 | 0.001395 | 0.001421 | 0.001397 |
| test_nil_generator.test | RUN | 0.129382 | 0.339505 | 0.430409 | 0.001508 | 0.001297 | 0.001452 |
| test_string_generator.test | RUN | 0.170319 | 0.576388 | 0.607901 | 0.001507 | 0.001399 | 0.001508 |
| test_string_generator_2.test | RUN | 0.212481 | 0.805066 | 0.679197 | 0.001220 | 0.001311 | 0.001434 |
| test_random_generator.test | RUN | 0.287829 | 1.553883 | 1.011664 | 0.004346 | 0.004296 | 0.004276 |
| test_random_generator_2.test | RUN | 0.201629 | 0.590952 | 0.685175 | 0.001577 | 0.001427 | 0.001356 |
| test_name_generator.test | RUN | 0.183357 | 2.066049 | 0.746127 | 0.001231 | 0.001710 | 0.001298 |
| test_namespaces.test | RUN | 0.149890 | 0.427051 | 0.482025 | 0.001387 | 0.001434 | 0.001442 |
| test_name_generator_md5.test | RUN | 0.189870 | 0.952339 | 0.722316 | 0.001275 | 0.001499 | 0.001523 |
| test_name_generator_sha1.test | RUN | 0.178744 | 3.017748 | 0.717125 | 0.001550 | 0.001405 | 0.001583 |
| test_time_generator.test | RUN | 0.192440 | 0.589160 | 0.662353 | 0.001425 | 0.001548 | 0.001486 |
| test_time_generator_v1.test | RUN | 0.218831 | 0.664677 | 0.768830 | 0.001704 | 0.001902 | 0.001898 |
| test_time_generator_v1_2.test | RUN | 0.216974 | 0.632203 | 0.719951 | 0.001720 | 0.001828 | 0.001704 |
| test_time_generator_v1_3.test | RUN | 0.232960 | 0.657429 | 0.798422 | 0.005108 | 0.004346 | 0.004449 |
| test_time_generator_v6.test | RUN | 0.213320 | 0.666349 | 0.760240 | 0.001697 | 0.001788 | 0.001681 |
| test_time_generator_v6_2.test | RUN | 0.215063 | 0.613140 | 0.716675 | 0.001573 | 0.001814 | 0.001800 |
| test_time_generator_v6_3.test | RUN | 0.235655 | 0.658622 | 0.805953 | 0.004355 | 0.005784 | 0.003703 |
| test_time_generator_v7.test | RUN | 0.205480 | 0.662910 | 0.720399 | 0.001492 | 0.001491 | 0.001466 |
| test_time_generator_v7_2.test | RUN | 0.191908 | 0.569431 | 0.658749 | 0.001042 | 0.001495 | 0.001498 |
| test_time_generator_v7_3.test | RUN | 0.194259 | 0.741418 | 0.676156 | 0.002683 | 0.002888 | 0.002737 |
| test_serialization.test | RUN | 0.348479 | 1.139036 | 1.258376 | 0.001757 | 0.001522 | 0.001534 |
| test_tagging.test | RUN | 0.196767 | 0.694520 | 0.678116 | 0.001440 | 0.001271 | 0.001216 |
| test_uuid_class.test | RUN | 0.205242 | 0.623831 | 0.722973 | 0.001360 | 0.001194 | 0.001455 |
| test_uuid_in_map.test | RUN | 0.228159 | 0.721011 | 0.781803 | 0.001224 | 0.001282 | 0.001598 |
| test_hash.test | RUN | 0.225725 | 0.634364 | 0.728428 | 0.001369 | 0.001458 | 0.001440 |
| test_hash_value.test | RUN | 0.168114 | 0.446098 | 0.535045 | 0.004780 | 0.004415 | 0.004382 |
| test_std_unordered.test | RUN | 0.212869 | 0.731918 | 0.749021 | 0.001372 | 0.001398 | 0.001651 |
| test_boost_unordered.test | RUN | 0.296417 | 0.936820 | 0.972517 | 0.001440 | 0.001327 | 0.001345 |
| test_detail_md5.test | RUN | 0.137885 | 0.438584 | 0.521166 | 0.001315 | 0.001261 | 0.001440 |
| test_detail_sha1.test | RUN | 0.130919 | 0.567677 | 0.487292 | 0.008267 | 0.008540 | 0.007217 |
| test_detail_endian.test | RUN | 0.100054 | 0.322446 | 0.349841 | 0.001282 | 0.001103 | 0.001450 |
| test_detail_chacha20.test | RUN | 0.118027 | 0.402739 | 0.366846 | 0.001275 | 0.001368 | 0.001392 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.099182 | 0.224633 | 0.277156 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.100021 | 0.222735 | 0.291253 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.172296 | 0.452061 | 0.519644 | 0.001440 | 0.001341 | 0.001515 |
| test_bench_random.test | RUN | 0.192959 | 0.593354 | 0.694001 | 0.016253 | 0.016217 | 0.016064 |
| test_entropy_error.test | RUN | 0.098124 | 0.261499 | 0.323327 | 0.001316 | 0.001477 | 0.001621 |
| test_detail_random_provider.test | RUN | 0.185010 | 0.465319 | 0.603325 | 0.001404 | 0.001238 | 0.001292 |
| test_constants.test | RUN | 0.151265 | 0.427346 | 0.490016 | 0.001267 | 0.001520 | 0.001124 |
| test_uuid_cx.test | COMPILE | 0.085031 | 0.189830 | 0.245158 | — | — | — |
| test_uuid_cx2.test | RUN | 0.159130 | 0.489535 | 0.529471 | 0.001312 | 0.001375 | 0.001337 |
| test_uuid_cx3.test | RUN | 0.130668 | 0.377873 | 0.490091 | 0.001486 | 0.001205 | 0.001303 |
| test_uuid_cx3_no_simd.test | RUN | 0.128432 | 0.357032 | 0.428449 | 0.001267 | 0.001305 | 0.001221 |
| test_hash_value_cx.test | RUN | 0.124861 | 0.339741 | 0.417557 | 0.001044 | 0.001556 | 0.001314 |
| test_string_generator_cx.test | RUN | 0.151830 | 0.432221 | 0.493745 | 0.001259 | 0.001382 | 0.001212 |
| test_string_generator_cx2.test | RUN | 0.188262 | 0.526843 | 0.572037 | 0.001343 | 0.001460 | 0.001270 |
| test_constants_cx.test | RUN | 0.125220 | 0.291497 | 0.389275 | 0.001277 | 0.001308 | 0.001249 |
| test_from_chars_cx.test | RUN | 0.151728 | 0.568607 | 0.527623 | 0.001359 | 0.001440 | 0.001365 |
| test_from_chars_cx2.test | RUN | 0.163585 | 0.710705 | 0.585388 | 0.001395 | 0.001350 | 0.001557 |
| test_to_chars_cx.test | RUN | 0.172199 | 0.659487 | 0.634386 | 0.001430 | 0.001288 | 0.000955 |
| test_uuid_from_string_cx.test | RUN | 0.169205 | 0.663337 | 0.616412 | 0.001017 | 0.001010 | 0.000948 |
| quick.test | RUN | 0.184182 | 0.506899 | 0.556530 | 0.001108 | 0.000898 | 0.000903 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.007× | 1.004×, 1.009× | 1.006× |
| clang | 1.003× | 1.001×, 1.005× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46092715613).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.000823s | 0.000815s | 0.000798s | byte equality observed |
| test_alignment.test | 10 | 0.000805s | 0.000825s | 0.000797s | byte equality observed |
| test_alignment_2.test | 10 | 0.000817s | 0.000810s | 0.000812s | byte equality observed |
| test_attribute_packed.test | 10 | 0.000741s | 0.000763s | 0.000767s | byte equality observed |
| test_bench_random.test | 2 | 0.015470s | 0.015461s | 0.015453s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.000805s | 0.000801s | 0.000797s | byte equality observed |
| test_comparison.test | 10 | 0.000761s | 0.000755s | 0.000767s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.000845s | 0.000810s | 0.000822s | byte equality observed |
| test_constants.test | 10 | 0.000845s | 0.000814s | 0.000834s | byte equality observed |
| test_constants_cx.test | 10 | 0.000826s | 0.000818s | 0.000808s | byte equality observed |
| test_data.test | 10 | 0.000815s | 0.000814s | 0.000827s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.000821s | 0.000849s | 0.000799s | byte equality observed |
| test_detail_endian.test | 10 | 0.000827s | 0.000837s | 0.000807s | byte equality observed |
| test_detail_md5.test | 10 | 0.000866s | 0.000830s | 0.000832s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.000850s | 0.000863s | 0.000851s | byte equality observed |
| test_detail_sha1.test | 4 | 0.005549s | 0.006452s | 0.005759s | byte equality observed |
| test_entropy_error.test | 10 | 0.000764s | 0.000762s | 0.000755s | byte equality observed |
| test_from_chars.test | 10 | 0.000755s | 0.000754s | 0.000768s | byte equality observed |
| test_from_chars_2.test | 10 | 0.000832s | 0.000798s | 0.000822s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.000841s | 0.000854s | 0.000848s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.000830s | 0.000822s | 0.000801s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.000794s | 0.000827s | 0.000821s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.000841s | 0.000842s | 0.000809s | byte equality observed |
| test_hash.test | 10 | 0.000808s | 0.000837s | 0.000802s | byte equality observed |
| test_hash_value.test | 6 | 0.003270s | 0.003178s | 0.003182s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.000754s | 0.000769s | 0.000780s | byte equality observed |
| test_include1.test | 10 | 0.000347s | 0.000345s | 0.000750s | byte equality observed |
| test_io.test | 10 | 0.000875s | 0.000873s | 0.000871s | byte equality observed |
| test_io_2.test | 10 | 0.000897s | 0.000910s | 0.000891s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.000908s | 0.000944s | 0.000903s | byte equality observed |
| test_io_no_simd.test | 10 | 0.000878s | 0.000892s | 0.000856s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.000796s | 0.000847s | 0.000831s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.000852s | 0.000869s | 0.000852s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.000830s | 0.000833s | 0.000851s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.000851s | 0.000876s | 0.000870s | byte equality observed |
| test_namespaces.test | 10 | 0.000817s | 0.000851s | 0.000829s | byte equality observed |
| test_nil_generator.test | 10 | 0.000802s | 0.000829s | 0.000822s | byte equality observed |
| test_pragma_pack.test | 10 | 0.000784s | 0.000780s | 0.000759s | byte equality observed |
| test_random_generator.test | 6 | 0.003679s | 0.003649s | 0.003689s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.000778s | 0.000772s | 0.000741s | byte equality observed |
| test_serialization.test | 10 | 0.000850s | 0.000899s | 0.000839s | byte equality observed |
| test_std_unordered.test | 10 | 0.000892s | 0.000903s | 0.000867s | byte equality observed |
| test_string_generator.test | 10 | 0.000891s | 0.000903s | 0.000894s | byte equality observed |
| test_string_generator_2.test | 10 | 0.000828s | 0.000836s | 0.000805s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.000815s | 0.000805s | 0.000780s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.000825s | 0.000797s | 0.000813s | byte equality observed |
| test_tagging.test | 10 | 0.000840s | 0.000825s | 0.000842s | byte equality observed |
| test_time_generator.test | 10 | 0.000834s | 0.000831s | 0.000825s | byte equality observed |
| test_time_generator_v1.test | 8 | 0.001147s | 0.001243s | 0.001249s | byte equality observed |
| test_time_generator_v1_2.test | 9 | 0.001015s | 0.001054s | 0.001069s | byte equality observed |
| test_time_generator_v1_3.test | 5 | 0.004674s | 0.004499s | 0.004929s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001148s | 0.001255s | 0.001287s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001010s | 0.001072s | 0.001064s | byte equality observed |
| test_time_generator_v6_3.test | 4 | 0.004529s | 0.004430s | 0.004638s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.001022s | 0.001052s | 0.001051s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.000869s | 0.000872s | 0.000877s | byte equality observed |
| test_time_generator_v7_3.test | 8 | 0.002283s | 0.002284s | 0.002274s | byte equality observed |
| test_to_chars.test | 10 | 0.000844s | 0.000826s | 0.000829s | byte equality observed |
| test_to_chars_2.test | 10 | 0.000835s | 0.000808s | 0.000803s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.000852s | 0.000856s | 0.000800s | byte equality observed |
| test_to_chars_3.test | 10 | 0.000826s | 0.000857s | 0.000832s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.000841s | 0.000824s | 0.000799s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.000861s | 0.000853s | 0.000844s | byte equality observed |
| test_uuid.test | 10 | 0.000823s | 0.000824s | 0.000815s | byte equality observed |
| test_uuid_2.test | 10 | 0.000821s | 0.000838s | 0.000824s | byte equality observed |
| test_uuid_3.test | 10 | 0.000817s | 0.000798s | 0.000815s | byte equality observed |
| test_uuid_class.test | 10 | 0.000836s | 0.000822s | 0.000863s | byte equality observed |
| test_uuid_clock.test | 10 | 0.000817s | 0.000816s | 0.000792s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.000818s | 0.000818s | 0.000839s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.000829s | 0.000843s | 0.000807s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.000819s | 0.000836s | 0.000824s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.000829s | 0.000835s | 0.000823s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.000970s | 0.000964s | 0.000988s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.000893s | 0.000888s | 0.000876s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.000819s | 0.000826s | 0.000802s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.000821s | 0.000818s | 0.000816s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.000799s | 0.000811s | 0.000795s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46092715613).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
