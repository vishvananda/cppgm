# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.335191 | 0.777628 | 1.070723 | 0.000509 | 0.000484 | 0.001105 |
| test_uuid.test | RUN | 0.207226 | 0.659797 | 0.772973 | 0.001290 | 0.001330 | 0.001092 |
| test_uuid_no_simd.test | RUN | 0.212518 | 0.639974 | 0.681623 | 0.001230 | 0.001188 | 0.001075 |
| test_uuid_2.test | RUN | 0.150297 | 0.478453 | 0.509844 | 0.001190 | 0.001333 | 0.000860 |
| test_uuid_3.test | RUN | 0.124270 | 0.341260 | 0.404717 | 0.001206 | 0.001211 | 0.001048 |
| test_alignment.test | RUN | 0.115348 | 0.299271 | 0.366559 | 0.001145 | 0.001231 | 0.001194 |
| test_alignment_2.test | RUN | 0.113641 | 0.287075 | 0.371294 | 0.001231 | 0.001361 | 0.000801 |
| test_attribute_packed.test | RUN | 0.113688 | 0.298020 | 0.367181 | 0.001133 | 0.001266 | 0.001164 |
| test_pragma_pack.test | RUN | 0.115365 | 0.300114 | 0.366699 | 0.001319 | 0.001356 | 0.001073 |
| test_data.test | RUN | 0.136199 | 0.548663 | 0.532133 | 0.001196 | 0.001264 | 0.001152 |
| test_comparison.test | RUN | 0.189725 | 0.636169 | 0.714363 | 0.001276 | 0.001342 | 0.001088 |
| test_comparison_no_simd.test | RUN | 0.189303 | 0.735259 | 0.647864 | 0.001477 | 0.001204 | 0.001283 |
| test_io.test | RUN | 0.259626 | 1.240975 | 1.083665 | 0.001401 | 0.001437 | 0.001278 |
| test_io_no_simd.test | RUN | 0.253960 | 1.229491 | 1.042873 | 0.001252 | 0.001399 | 0.001226 |
| test_io_2.test | RUN | 0.175176 | 1.283210 | 0.760309 | 0.001398 | 0.001518 | 0.001292 |
| test_io_2_no_simd.test | RUN | 0.183112 | 1.208373 | 0.695965 | 0.001186 | 0.001484 | 0.001178 |
| test_to_chars.test | RUN | 0.184906 | 0.804542 | 0.709633 | 0.001491 | 0.001420 | 0.001234 |
| test_to_chars_no_simd.test | RUN | 0.162169 | 0.810622 | 0.690440 | 0.001324 | 0.001358 | 0.001247 |
| test_to_chars_2.test | RUN | 0.206741 | 1.481361 | 0.843972 | 0.001310 | 0.001368 | 0.001257 |
| test_to_chars_2_no_simd.test | RUN | 0.240585 | 1.555641 | 0.766935 | 0.001228 | 0.001289 | 0.001080 |
| test_to_chars_3.test | RUN | 0.150992 | 0.515150 | 0.518255 | 0.001183 | 0.001219 | 0.001170 |
| test_from_chars.test | RUN | 0.167385 | 0.748088 | 0.582894 | 0.001200 | 0.001365 | 0.001064 |
| test_from_chars_no_simd.test | RUN | 0.137210 | 0.588101 | 0.489691 | 0.001280 | 0.001186 | 0.001060 |
| test_from_chars_2.test | RUN | 0.162469 | 0.689883 | 0.564278 | 0.001314 | 0.001194 | 0.000976 |
| test_from_chars_2_no_simd.test | RUN | 0.131283 | 0.528499 | 0.458086 | 0.001065 | 0.001253 | 0.001135 |
| test_uuid_from_string.test | RUN | 0.187390 | 0.772052 | 0.690613 | 0.001220 | 0.001110 | 0.001032 |
| test_uuid_from_string_2.test | RUN | 0.165450 | 0.702254 | 0.586044 | 0.001403 | 0.001530 | 0.001405 |
| test_uuid_from_string_3.test | RUN | 0.166310 | 0.697804 | 0.599667 | 0.001191 | 0.001409 | 0.001135 |
| test_uuid_clock.test | RUN | 0.101074 | 0.282927 | 0.355096 | 0.001020 | 0.001181 | 0.001076 |
| test_nil_generator.test | RUN | 0.122803 | 0.330045 | 0.417511 | 0.001210 | 0.001191 | 0.001140 |
| test_string_generator.test | RUN | 0.163000 | 0.547319 | 0.574873 | 0.001420 | 0.001244 | 0.001201 |
| test_string_generator_2.test | RUN | 0.200443 | 0.783981 | 0.650220 | 0.001230 | 0.001258 | 0.001089 |
| test_random_generator.test | RUN | 0.271855 | 1.501274 | 0.985689 | 0.004265 | 0.004361 | 0.004165 |
| test_random_generator_2.test | RUN | 0.197829 | 0.577120 | 0.661961 | 0.001207 | 0.001399 | 0.001138 |
| test_name_generator.test | RUN | 0.174443 | 1.991701 | 0.711267 | 0.001061 | 0.001322 | 0.001096 |
| test_namespaces.test | RUN | 0.138300 | 0.416024 | 0.470151 | 0.001240 | 0.001202 | 0.001129 |
| test_name_generator_md5.test | RUN | 0.180650 | 0.939478 | 0.694627 | 0.001366 | 0.001255 | 0.001122 |
| test_name_generator_sha1.test | RUN | 0.168555 | 2.921803 | 0.689249 | 0.001330 | 0.001452 | 0.001331 |
| test_time_generator.test | RUN | 0.183543 | 0.579421 | 0.634407 | 0.001203 | 0.001381 | 0.001267 |
| test_time_generator_v1.test | RUN | 0.203844 | 0.641759 | 0.728652 | 0.001593 | 0.001692 | 0.001635 |
| test_time_generator_v1_2.test | RUN | 0.202666 | 0.606178 | 0.690533 | 0.001414 | 0.001608 | 0.001386 |
| test_time_generator_v1_3.test | RUN | 0.217991 | 0.616989 | 0.748190 | 0.004598 | 0.003727 | 0.003734 |
| test_time_generator_v6.test | RUN | 0.208834 | 0.631673 | 0.726980 | 0.001670 | 0.001771 | 0.001622 |
| test_time_generator_v6_2.test | RUN | 0.199553 | 0.594290 | 0.701486 | 0.001400 | 0.001650 | 0.001364 |
| test_time_generator_v6_3.test | RUN | 0.222151 | 0.626655 | 0.764473 | 0.002894 | 0.003768 | 0.003590 |
| test_time_generator_v7.test | RUN | 0.192900 | 0.636468 | 0.689873 | 0.001511 | 0.001502 | 0.001403 |
| test_time_generator_v7_2.test | RUN | 0.180276 | 0.560701 | 0.638137 | 0.001328 | 0.001341 | 0.001215 |
| test_time_generator_v7_3.test | RUN | 0.184483 | 0.706890 | 0.652068 | 0.002622 | 0.002770 | 0.002558 |
| test_serialization.test | RUN | 0.328741 | 1.094482 | 1.211048 | 0.001559 | 0.001413 | 0.001274 |
| test_tagging.test | RUN | 0.184597 | 0.678545 | 0.648749 | 0.001457 | 0.001242 | 0.001245 |
| test_uuid_class.test | RUN | 0.196983 | 0.600398 | 0.687316 | 0.001306 | 0.001359 | 0.001079 |
| test_uuid_in_map.test | RUN | 0.216695 | 0.690649 | 0.749542 | 0.001219 | 0.001291 | 0.001143 |
| test_hash.test | RUN | 0.217313 | 0.620645 | 0.697855 | 0.001274 | 0.001365 | 0.001164 |
| test_hash_value.test | RUN | 0.153465 | 0.431629 | 0.518452 | 0.004274 | 0.004140 | 0.004072 |
| test_std_unordered.test | RUN | 0.205504 | 0.700650 | 0.703184 | 0.001298 | 0.001262 | 0.001186 |
| test_boost_unordered.test | RUN | 0.279861 | 0.900867 | 0.914348 | 0.001193 | 0.001439 | 0.001102 |
| test_detail_md5.test | RUN | 0.129923 | 0.435230 | 0.495833 | 0.001112 | 0.001236 | 0.001074 |
| test_detail_sha1.test | RUN | 0.127870 | 0.549437 | 0.463849 | 0.008106 | 0.008313 | 0.006742 |
| test_detail_endian.test | RUN | 0.099020 | 0.314355 | 0.345847 | 0.001099 | 0.001344 | 0.001167 |
| test_detail_chacha20.test | RUN | 0.111963 | 0.397350 | 0.338060 | 0.001255 | 0.000941 | 0.001015 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.094475 | 0.218166 | 0.278311 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.090256 | 0.211799 | 0.277683 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.159966 | 0.435076 | 0.492544 | 0.001244 | 0.001232 | 0.001075 |
| test_bench_random.test | RUN | 0.177335 | 0.570036 | 0.668280 | 0.016965 | 0.016867 | 0.016766 |
| test_entropy_error.test | RUN | 0.089587 | 0.254424 | 0.314135 | 0.001242 | 0.001245 | 0.001206 |
| test_detail_random_provider.test | RUN | 0.172373 | 0.444458 | 0.582228 | 0.001356 | 0.001168 | 0.001248 |
| test_constants.test | RUN | 0.137051 | 0.424975 | 0.474864 | 0.001360 | 0.001223 | 0.001235 |
| test_uuid_cx.test | COMPILE | 0.079769 | 0.183551 | 0.230000 | — | — | — |
| test_uuid_cx2.test | RUN | 0.148568 | 0.473101 | 0.510178 | 0.001193 | 0.001072 | 0.001221 |
| test_uuid_cx3.test | RUN | 0.127491 | 0.371597 | 0.457165 | 0.001165 | 0.001229 | 0.000986 |
| test_uuid_cx3_no_simd.test | RUN | 0.118724 | 0.344491 | 0.400368 | 0.001068 | 0.001059 | 0.001076 |
| test_hash_value_cx.test | RUN | 0.122919 | 0.332752 | 0.405017 | 0.001054 | 0.001231 | 0.001079 |
| test_string_generator_cx.test | RUN | 0.141085 | 0.407435 | 0.473131 | 0.001229 | 0.001278 | 0.001164 |
| test_string_generator_cx2.test | RUN | 0.182500 | 0.504997 | 0.549642 | 0.001107 | 0.001216 | 0.001155 |
| test_constants_cx.test | RUN | 0.114201 | 0.280211 | 0.372808 | 0.001308 | 0.001221 | 0.001179 |
| test_from_chars_cx.test | RUN | 0.145964 | 0.552535 | 0.514560 | 0.001189 | 0.001258 | 0.001079 |
| test_from_chars_cx2.test | RUN | 0.147746 | 0.688402 | 0.559849 | 0.001328 | 0.001032 | 0.001115 |
| test_to_chars_cx.test | RUN | 0.158984 | 0.631819 | 0.602979 | 0.001402 | 0.001231 | 0.001121 |
| test_uuid_from_string_cx.test | RUN | 0.162298 | 0.645273 | 0.547341 | 0.000894 | 0.000860 | 0.000816 |
| quick.test | RUN | 0.179548 | 0.479995 | 0.569967 | 0.000918 | 0.000897 | 0.000762 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.008× | 1.011×, 1.005× | 1.007× |
| clang | 1.004× | 1.006×, 1.002× | 0.996× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45739944580).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.000793s | 0.000788s | 0.000774s | byte equality observed |
| test_alignment.test | 10 | 0.000791s | 0.000776s | 0.000792s | byte equality observed |
| test_alignment_2.test | 10 | 0.000822s | 0.000776s | 0.000794s | byte equality observed |
| test_attribute_packed.test | 10 | 0.000738s | 0.000714s | 0.000748s | byte equality observed |
| test_bench_random.test | 2 | 0.016287s | 0.016310s | 0.016272s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.000788s | 0.000783s | 0.000780s | byte equality observed |
| test_comparison.test | 10 | 0.000757s | 0.000736s | 0.000745s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.000806s | 0.000798s | 0.000788s | byte equality observed |
| test_constants.test | 10 | 0.000830s | 0.000815s | 0.000771s | byte equality observed |
| test_constants_cx.test | 10 | 0.000780s | 0.000775s | 0.000794s | byte equality observed |
| test_data.test | 10 | 0.000788s | 0.000775s | 0.000812s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.000796s | 0.000798s | 0.000776s | byte equality observed |
| test_detail_endian.test | 10 | 0.000813s | 0.000785s | 0.000781s | byte equality observed |
| test_detail_md5.test | 10 | 0.000839s | 0.000793s | 0.000803s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.000816s | 0.000794s | 0.000801s | byte equality observed |
| test_detail_sha1.test | 4 | 0.005480s | 0.006419s | 0.005590s | byte equality observed |
| test_entropy_error.test | 10 | 0.000743s | 0.000721s | 0.000735s | byte equality observed |
| test_from_chars.test | 10 | 0.000748s | 0.000726s | 0.000728s | byte equality observed |
| test_from_chars_2.test | 10 | 0.000796s | 0.000788s | 0.000793s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.000819s | 0.000805s | 0.000816s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.000806s | 0.000822s | 0.000802s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.000806s | 0.000827s | 0.000805s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.000814s | 0.000811s | 0.000810s | byte equality observed |
| test_hash.test | 10 | 0.000828s | 0.000772s | 0.000816s | byte equality observed |
| test_hash_value.test | 6 | 0.003214s | 0.003173s | 0.003116s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.000745s | 0.000755s | 0.000759s | byte equality observed |
| test_include1.test | 10 | 0.000346s | 0.000345s | 0.000746s | byte equality observed |
| test_io.test | 10 | 0.000844s | 0.000826s | 0.000845s | byte equality observed |
| test_io_2.test | 10 | 0.000871s | 0.000868s | 0.000870s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.000867s | 0.000907s | 0.000896s | byte equality observed |
| test_io_no_simd.test | 10 | 0.000860s | 0.000872s | 0.000836s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.000795s | 0.000819s | 0.000814s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.000815s | 0.000828s | 0.000839s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.000845s | 0.000816s | 0.000807s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.000843s | 0.000841s | 0.000818s | byte equality observed |
| test_namespaces.test | 10 | 0.000807s | 0.000808s | 0.000826s | byte equality observed |
| test_nil_generator.test | 10 | 0.000806s | 0.000795s | 0.000776s | byte equality observed |
| test_pragma_pack.test | 10 | 0.000751s | 0.000761s | 0.000759s | byte equality observed |
| test_random_generator.test | 5 | 0.003797s | 0.003808s | 0.003826s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.000768s | 0.000750s | 0.000747s | byte equality observed |
| test_serialization.test | 10 | 0.000863s | 0.000864s | 0.000851s | byte equality observed |
| test_std_unordered.test | 10 | 0.000838s | 0.000860s | 0.000850s | byte equality observed |
| test_string_generator.test | 10 | 0.000865s | 0.000855s | 0.000832s | byte equality observed |
| test_string_generator_2.test | 10 | 0.000808s | 0.000812s | 0.000801s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.000808s | 0.000816s | 0.000786s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.000832s | 0.000830s | 0.000790s | byte equality observed |
| test_tagging.test | 10 | 0.000842s | 0.000849s | 0.000822s | byte equality observed |
| test_time_generator.test | 10 | 0.000839s | 0.000846s | 0.000842s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001124s | 0.001217s | 0.001210s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.000983s | 0.001000s | 0.001029s | byte equality observed |
| test_time_generator_v1_3.test | 5 | 0.004518s | 0.004367s | 0.004316s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001155s | 0.001242s | 0.001238s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001003s | 0.001029s | 0.001036s | byte equality observed |
| test_time_generator_v6_3.test | 5 | 0.004511s | 0.004771s | 0.004488s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.001006s | 0.001038s | 0.001024s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.000861s | 0.000850s | 0.000855s | byte equality observed |
| test_time_generator_v7_3.test | 8 | 0.002342s | 0.002343s | 0.002340s | byte equality observed |
| test_to_chars.test | 10 | 0.000811s | 0.000812s | 0.000805s | byte equality observed |
| test_to_chars_2.test | 10 | 0.000779s | 0.000779s | 0.000767s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.000824s | 0.000809s | 0.000796s | byte equality observed |
| test_to_chars_3.test | 10 | 0.000817s | 0.000821s | 0.000815s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.000813s | 0.000818s | 0.000807s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.000853s | 0.000844s | 0.000837s | byte equality observed |
| test_uuid.test | 10 | 0.000804s | 0.000783s | 0.000805s | byte equality observed |
| test_uuid_2.test | 10 | 0.000817s | 0.000781s | 0.000792s | byte equality observed |
| test_uuid_3.test | 10 | 0.000807s | 0.000774s | 0.000775s | byte equality observed |
| test_uuid_class.test | 10 | 0.000814s | 0.000811s | 0.000793s | byte equality observed |
| test_uuid_clock.test | 10 | 0.000802s | 0.000819s | 0.000805s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.000800s | 0.000816s | 0.000814s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.000794s | 0.000816s | 0.000777s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.000791s | 0.000812s | 0.000803s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.000805s | 0.000811s | 0.000800s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.000951s | 0.000943s | 0.000969s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.000878s | 0.000854s | 0.000867s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.000785s | 0.000791s | 0.000793s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.000812s | 0.000823s | 0.000828s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.000812s | 0.000768s | 0.000805s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45739944580).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
