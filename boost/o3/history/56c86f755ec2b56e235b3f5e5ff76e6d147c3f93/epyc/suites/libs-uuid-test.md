# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.602193 | 1.311448 | 2.338324 | 0.000610 | 0.000836 | 0.002054 |
| test_uuid.test | RUN | 0.355029 | 1.094670 | 1.638170 | 0.002233 | 0.002182 | 0.002120 |
| test_uuid_no_simd.test | RUN | 0.366620 | 1.028459 | 1.383849 | 0.001919 | 0.002002 | 0.002248 |
| test_uuid_2.test | RUN | 0.243242 | 0.772529 | 1.047308 | 0.001858 | 0.002072 | 0.001780 |
| test_uuid_3.test | RUN | 0.207146 | 0.526509 | 0.885184 | 0.002072 | 0.002056 | 0.001998 |
| test_alignment.test | RUN | 0.206998 | 0.473776 | 0.737685 | 0.001926 | 0.001924 | 0.002189 |
| test_alignment_2.test | RUN | 0.193198 | 0.504408 | 0.801851 | 0.002118 | 0.001649 | 0.002104 |
| test_attribute_packed.test | RUN | 0.194501 | 0.497314 | 0.801693 | 0.002021 | 0.002136 | 0.001772 |
| test_pragma_pack.test | RUN | 0.212305 | 0.500689 | 0.739112 | 0.002232 | 0.001933 | 0.002204 |
| test_data.test | RUN | 0.232047 | 0.897229 | 1.045061 | 0.001831 | 0.002051 | 0.002020 |
| test_comparison.test | RUN | 0.328885 | 1.027547 | 1.512648 | 0.002366 | 0.002183 | 0.002078 |
| test_comparison_no_simd.test | RUN | 0.317036 | 1.185694 | 1.348517 | 0.001755 | 0.001990 | 0.001806 |
| test_io.test | RUN | 0.425725 | 1.917656 | 2.079583 | 0.002205 | 0.002264 | 0.002269 |
| test_io_no_simd.test | RUN | 0.395890 | 1.884978 | 2.068472 | 0.001900 | 0.002248 | 0.001816 |
| test_io_2.test | RUN | 0.319436 | 1.974623 | 1.503135 | 0.002107 | 0.002487 | 0.002383 |
| test_io_2_no_simd.test | RUN | 0.285585 | 1.835180 | 1.288168 | 0.002139 | 0.002573 | 0.001892 |
| test_to_chars.test | RUN | 0.287089 | 1.230956 | 1.388741 | 0.002178 | 0.002314 | 0.002303 |
| test_to_chars_no_simd.test | RUN | 0.285541 | 1.267589 | 1.346552 | 0.001965 | 0.002349 | 0.002254 |
| test_to_chars_2.test | RUN | 0.341744 | 2.230189 | 1.604518 | 0.001876 | 0.002370 | 0.002272 |
| test_to_chars_2_no_simd.test | RUN | 0.350823 | 2.411892 | 1.482612 | 0.001836 | 0.002215 | 0.002269 |
| test_to_chars_3.test | RUN | 0.237171 | 0.817682 | 1.061336 | 0.001954 | 0.002039 | 0.002145 |
| test_from_chars.test | RUN | 0.271741 | 1.151511 | 1.141815 | 0.001963 | 0.001808 | 0.002298 |
| test_from_chars_no_simd.test | RUN | 0.250246 | 0.934476 | 0.930451 | 0.001940 | 0.001808 | 0.002026 |
| test_from_chars_2.test | RUN | 0.266004 | 1.110462 | 1.122943 | 0.001801 | 0.001932 | 0.002064 |
| test_from_chars_2_no_simd.test | RUN | 0.246525 | 0.861153 | 0.916388 | 0.001922 | 0.001930 | 0.002151 |
| test_uuid_from_string.test | RUN | 0.304981 | 1.187530 | 1.345155 | 0.001854 | 0.002076 | 0.001698 |
| test_uuid_from_string_2.test | RUN | 0.279290 | 1.084769 | 1.140600 | 0.002340 | 0.002278 | 0.002295 |
| test_uuid_from_string_3.test | RUN | 0.279972 | 1.095338 | 1.198122 | 0.002016 | 0.002366 | 0.002304 |
| test_uuid_clock.test | RUN | 0.177299 | 0.486267 | 0.733391 | 0.001754 | 0.002046 | 0.001880 |
| test_nil_generator.test | RUN | 0.206919 | 0.548862 | 0.870809 | 0.001954 | 0.002015 | 0.002046 |
| test_string_generator.test | RUN | 0.268548 | 0.872345 | 1.127430 | 0.002160 | 0.002343 | 0.002179 |
| test_string_generator_2.test | RUN | 0.324730 | 1.239082 | 1.283004 | 0.002163 | 0.002331 | 0.002266 |
| test_random_generator.test | RUN | 0.436805 | 2.408874 | 1.957728 | 0.003301 | 0.003489 | 0.003501 |
| test_random_generator_2.test | RUN | 0.321056 | 0.922052 | 1.375274 | 0.001695 | 0.002135 | 0.001788 |
| test_name_generator.test | RUN | 0.282536 | 3.158309 | 1.425984 | 0.001794 | 0.002190 | 0.002097 |
| test_namespaces.test | RUN | 0.233238 | 0.669364 | 0.914324 | 0.001864 | 0.002120 | 0.002067 |
| test_name_generator_md5.test | RUN | 0.287390 | 1.445771 | 1.346291 | 0.002134 | 0.002180 | 0.002276 |
| test_name_generator_sha1.test | RUN | 0.281341 | 4.630897 | 1.334067 | 0.001908 | 0.002137 | 0.002357 |
| test_time_generator.test | RUN | 0.301209 | 0.920516 | 1.303575 | 0.001952 | 0.002024 | 0.002282 |
| test_time_generator_v1.test | RUN | 0.336043 | 1.009552 | 1.460187 | 0.002497 | 0.002755 | 0.002690 |
| test_time_generator_v1_2.test | RUN | 0.334189 | 0.940102 | 1.410603 | 0.002399 | 0.002587 | 0.002572 |
| test_time_generator_v1_3.test | RUN | 0.365339 | 1.010640 | 1.504621 | 0.005625 | 0.005672 | 0.005917 |
| test_time_generator_v6.test | RUN | 0.339412 | 1.016174 | 1.491296 | 0.002351 | 0.002856 | 0.002857 |
| test_time_generator_v6_2.test | RUN | 0.338103 | 0.961330 | 1.420545 | 0.001968 | 0.002772 | 0.002521 |
| test_time_generator_v6_3.test | RUN | 0.373200 | 1.018104 | 1.528857 | 0.005323 | 0.004598 | 0.005873 |
| test_time_generator_v7.test | RUN | 0.336940 | 1.012045 | 1.437271 | 0.002256 | 0.002336 | 0.002214 |
| test_time_generator_v7_2.test | RUN | 0.297913 | 0.912717 | 1.302777 | 0.001969 | 0.002280 | 0.002110 |
| test_time_generator_v7_3.test | RUN | 0.320192 | 1.158165 | 1.342237 | 0.002734 | 0.003145 | 0.003300 |
| test_serialization.test | RUN | 0.565507 | 1.721620 | 2.293361 | 0.002372 | 0.002230 | 0.002354 |
| test_tagging.test | RUN | 0.315216 | 1.119886 | 1.329265 | 0.002121 | 0.001799 | 0.001601 |
| test_uuid_class.test | RUN | 0.332317 | 0.985055 | 1.466245 | 0.001808 | 0.001868 | 0.002168 |
| test_uuid_in_map.test | RUN | 0.365493 | 1.137957 | 1.577297 | 0.001957 | 0.002208 | 0.002126 |
| test_hash.test | RUN | 0.358371 | 1.021161 | 1.439595 | 0.002148 | 0.002243 | 0.002187 |
| test_hash_value.test | RUN | 0.254940 | 0.676759 | 1.040631 | 0.006297 | 0.006148 | 0.006335 |
| test_std_unordered.test | RUN | 0.340020 | 1.140868 | 1.469448 | 0.002066 | 0.002160 | 0.002347 |
| test_boost_unordered.test | RUN | 0.479926 | 1.444128 | 1.901625 | 0.002172 | 0.002052 | 0.002116 |
| test_detail_md5.test | RUN | 0.223383 | 0.697441 | 0.990109 | 0.001805 | 0.001916 | 0.002030 |
| test_detail_sha1.test | RUN | 0.212504 | 0.914155 | 0.894268 | 0.011180 | 0.011356 | 0.012182 |
| test_detail_endian.test | RUN | 0.159772 | 0.512917 | 0.710523 | 0.001810 | 0.001994 | 0.002230 |
| test_detail_chacha20.test | RUN | 0.176197 | 0.647499 | 0.649002 | 0.001869 | 0.002106 | 0.001903 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.165186 | 0.383572 | 0.573910 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.162633 | 0.368980 | 0.573479 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.272042 | 0.744877 | 1.071745 | 0.001886 | 0.002174 | 0.002394 |
| test_bench_random.test | RUN | 0.303674 | 0.919011 | 1.400105 | 0.008619 | 0.008601 | 0.008853 |
| test_entropy_error.test | RUN | 0.155654 | 0.419306 | 0.625680 | 0.001880 | 0.002138 | 0.002094 |
| test_detail_random_provider.test | RUN | 0.292443 | 0.753684 | 1.204316 | 0.001838 | 0.002176 | 0.001621 |
| test_constants.test | RUN | 0.231838 | 0.655091 | 0.936047 | 0.002006 | 0.002118 | 0.002239 |
| test_uuid_cx.test | COMPILE | 0.137876 | 0.326302 | 0.502501 | — | — | — |
| test_uuid_cx2.test | RUN | 0.248120 | 0.766907 | 1.067473 | 0.001892 | 0.001823 | 0.002188 |
| test_uuid_cx3.test | RUN | 0.212446 | 0.581067 | 0.921045 | 0.001932 | 0.001963 | 0.001982 |
| test_uuid_cx3_no_simd.test | RUN | 0.201041 | 0.566133 | 0.783544 | 0.001522 | 0.001876 | 0.002278 |
| test_hash_value_cx.test | RUN | 0.202097 | 0.544234 | 0.842594 | 0.001815 | 0.001933 | 0.002250 |
| test_string_generator_cx.test | RUN | 0.240919 | 0.668759 | 0.936898 | 0.001969 | 0.001952 | 0.002057 |
| test_string_generator_cx2.test | RUN | 0.290348 | 0.823986 | 1.093192 | 0.001640 | 0.001941 | 0.001740 |
| test_constants_cx.test | RUN | 0.193378 | 0.463915 | 0.780581 | 0.001902 | 0.001942 | 0.002140 |
| test_from_chars_cx.test | RUN | 0.246320 | 0.889452 | 1.036445 | 0.001752 | 0.001972 | 0.002188 |
| test_from_chars_cx2.test | RUN | 0.248122 | 1.089112 | 1.167792 | 0.001948 | 0.001593 | 0.002074 |
| test_to_chars_cx.test | RUN | 0.265086 | 1.010664 | 1.189498 | 0.001520 | 0.001958 | 0.002137 |
| test_uuid_from_string_cx.test | RUN | 0.273561 | 0.996412 | 1.125475 | 0.001616 | 0.001823 | 0.001542 |
| quick.test | RUN | 0.280371 | 0.832904 | 1.103280 | 0.001452 | 0.001704 | 0.001431 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.994× | 0.993×, 0.995× | 1.000× |
| clang | 1.000× | 1.001×, 1.000× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44612055398).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.001506s | 0.001501s | 0.001488s | byte equality observed |
| test_alignment.test | 10 | 0.001489s | 0.001503s | 0.001485s | byte equality observed |
| test_alignment_2.test | 10 | 0.001436s | 0.001485s | 0.001468s | byte equality observed |
| test_attribute_packed.test | 10 | 0.001462s | 0.001467s | 0.001457s | byte equality observed |
| test_bench_random.test | 3 | 0.008371s | 0.008329s | 0.008465s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.001520s | 0.001530s | 0.001491s | byte equality observed |
| test_comparison.test | 10 | 0.001482s | 0.001516s | 0.001493s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.001525s | 0.001564s | 0.001555s | byte equality observed |
| test_constants.test | 10 | 0.001526s | 0.001512s | 0.001503s | byte equality observed |
| test_constants_cx.test | 10 | 0.001485s | 0.001497s | 0.001463s | byte equality observed |
| test_data.test | 10 | 0.001505s | 0.001496s | 0.001495s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.001508s | 0.001499s | 0.001489s | byte equality observed |
| test_detail_endian.test | 10 | 0.001482s | 0.001476s | 0.001552s | byte equality observed |
| test_detail_md5.test | 10 | 0.001537s | 0.001546s | 0.001532s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.001482s | 0.001494s | 0.001504s | byte equality observed |
| test_detail_sha1.test | 3 | 0.011417s | 0.010318s | 0.010453s | byte equality observed |
| test_entropy_error.test | 10 | 0.001478s | 0.001462s | 0.001421s | byte equality observed |
| test_from_chars.test | 10 | 0.001467s | 0.001435s | 0.001472s | byte equality observed |
| test_from_chars_2.test | 10 | 0.001470s | 0.001464s | 0.001473s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.001494s | 0.001491s | 0.001484s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.001527s | 0.001479s | 0.001530s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.001517s | 0.001488s | 0.001521s | byte equality observed |
| test_from_chars_no_simd.test | 9 | 0.001483s | 0.001505s | 0.001520s | byte equality observed |
| test_hash.test | 10 | 0.001541s | 0.001486s | 0.001516s | byte equality observed |
| test_hash_value.test | 4 | 0.005591s | 0.005430s | 0.005226s | byte equality observed |
| test_hash_value_cx.test | 9 | 0.001466s | 0.001473s | 0.001486s | byte equality observed |
| test_include1.test | 10 | 0.000643s | 0.000643s | 0.001467s | byte equality observed |
| test_io.test | 9 | 0.001577s | 0.001595s | 0.001568s | byte equality observed |
| test_io_2.test | 10 | 0.001678s | 0.001702s | 0.001665s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.001702s | 0.001719s | 0.001687s | byte equality observed |
| test_io_no_simd.test | 10 | 0.001584s | 0.001608s | 0.001568s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.001535s | 0.001476s | 0.001473s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.001581s | 0.001573s | 0.001530s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.001536s | 0.001525s | 0.001505s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.001608s | 0.001575s | 0.001593s | byte equality observed |
| test_namespaces.test | 10 | 0.001481s | 0.001501s | 0.001461s | byte equality observed |
| test_nil_generator.test | 10 | 0.001481s | 0.001484s | 0.001501s | byte equality observed |
| test_pragma_pack.test | 10 | 0.001483s | 0.001466s | 0.001457s | byte equality observed |
| test_random_generator.test | 7 | 0.002945s | 0.002880s | 0.002943s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.001496s | 0.001532s | 0.001487s | byte equality observed |
| test_serialization.test | 10 | 0.001650s | 0.001638s | 0.001615s | byte equality observed |
| test_std_unordered.test | 10 | 0.001612s | 0.001613s | 0.001598s | byte equality observed |
| test_string_generator.test | 10 | 0.001670s | 0.001681s | 0.001650s | byte equality observed |
| test_string_generator_2.test | 10 | 0.001531s | 0.001526s | 0.001530s | byte equality observed |
| test_string_generator_cx.test | 9 | 0.001505s | 0.001506s | 0.001462s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.001515s | 0.001546s | 0.001534s | byte equality observed |
| test_tagging.test | 10 | 0.001530s | 0.001507s | 0.001531s | byte equality observed |
| test_time_generator.test | 10 | 0.001494s | 0.001519s | 0.001555s | byte equality observed |
| test_time_generator_v1.test | 9 | 0.002054s | 0.002213s | 0.002246s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001828s | 0.001844s | 0.001869s | byte equality observed |
| test_time_generator_v1_3.test | 5 | 0.004729s | 0.004550s | 0.004723s | byte equality observed |
| test_time_generator_v6.test | 9 | 0.002064s | 0.002206s | 0.002190s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001834s | 0.001911s | 0.001869s | byte equality observed |
| test_time_generator_v6_3.test | 5 | 0.004763s | 0.004597s | 0.004844s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.001840s | 0.001868s | 0.001915s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.001576s | 0.001575s | 0.001572s | byte equality observed |
| test_time_generator_v7_3.test | 8 | 0.002533s | 0.002606s | 0.002589s | byte equality observed |
| test_to_chars.test | 10 | 0.001590s | 0.001587s | 0.001589s | byte equality observed |
| test_to_chars_2.test | 9 | 0.001519s | 0.001507s | 0.001492s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.001518s | 0.001568s | 0.001556s | byte equality observed |
| test_to_chars_3.test | 10 | 0.001512s | 0.001558s | 0.001518s | byte equality observed |
| test_to_chars_cx.test | 9 | 0.001541s | 0.001514s | 0.001516s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.001625s | 0.001603s | 0.001633s | byte equality observed |
| test_uuid.test | 8 | 0.001487s | 0.001523s | 0.001539s | byte equality observed |
| test_uuid_2.test | 10 | 0.001534s | 0.001516s | 0.001514s | byte equality observed |
| test_uuid_3.test | 10 | 0.001522s | 0.001501s | 0.001486s | byte equality observed |
| test_uuid_class.test | 10 | 0.001514s | 0.001525s | 0.001480s | byte equality observed |
| test_uuid_clock.test | 10 | 0.001483s | 0.001519s | 0.001467s | byte equality observed |
| test_uuid_cx2.test | 7 | 0.001510s | 0.001530s | 0.001528s | byte equality observed |
| test_uuid_cx3.test | 9 | 0.001505s | 0.001543s | 0.001492s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.001488s | 0.001502s | 0.001503s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.001522s | 0.001532s | 0.001525s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.001942s | 0.001918s | 0.001976s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.001658s | 0.001641s | 0.001667s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.001520s | 0.001506s | 0.001519s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.001544s | 0.001533s | 0.001553s | byte equality observed |
| test_uuid_no_simd.test | 9 | 0.001537s | 0.001561s | 0.001517s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44612055398).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
