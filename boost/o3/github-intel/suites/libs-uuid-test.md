# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.321153 | 0.791329 | 1.086463 | 0.000441 | 0.000488 | 0.001071 |
| test_uuid.test | RUN | 0.202248 | 0.656247 | 0.776853 | 0.001166 | 0.001276 | 0.001251 |
| test_uuid_no_simd.test | RUN | 0.211971 | 0.632299 | 0.694728 | 0.001317 | 0.001071 | 0.001099 |
| test_uuid_2.test | RUN | 0.147094 | 0.477887 | 0.522946 | 0.001146 | 0.001393 | 0.001212 |
| test_uuid_3.test | RUN | 0.116725 | 0.330609 | 0.414861 | 0.001050 | 0.001186 | 0.001085 |
| test_alignment.test | RUN | 0.109640 | 0.294344 | 0.362428 | 0.001079 | 0.001270 | 0.001175 |
| test_alignment_2.test | RUN | 0.105832 | 0.288682 | 0.374921 | 0.001134 | 0.001113 | 0.001140 |
| test_attribute_packed.test | RUN | 0.106724 | 0.295890 | 0.372285 | 0.001059 | 0.001364 | 0.001109 |
| test_pragma_pack.test | RUN | 0.108243 | 0.300825 | 0.374004 | 0.001156 | 0.001337 | 0.001041 |
| test_data.test | RUN | 0.124692 | 0.551267 | 0.544662 | 0.001152 | 0.001280 | 0.001190 |
| test_comparison.test | RUN | 0.190332 | 0.636320 | 0.730702 | 0.001105 | 0.001150 | 0.001215 |
| test_comparison_no_simd.test | RUN | 0.184321 | 0.719507 | 0.645306 | 0.001080 | 0.001200 | 0.001272 |
| test_io.test | RUN | 0.260087 | 1.237601 | 1.109420 | 0.001400 | 0.001396 | 0.001390 |
| test_io_no_simd.test | RUN | 0.241935 | 1.226239 | 1.052921 | 0.001138 | 0.001281 | 0.001240 |
| test_io_2.test | RUN | 0.197809 | 1.272291 | 0.781810 | 0.001184 | 0.001363 | 0.001307 |
| test_io_2_no_simd.test | RUN | 0.178229 | 1.209765 | 0.704967 | 0.001251 | 0.001226 | 0.001405 |
| test_to_chars.test | RUN | 0.185864 | 0.800423 | 0.717992 | 0.001198 | 0.001376 | 0.001177 |
| test_to_chars_no_simd.test | RUN | 0.175398 | 0.804747 | 0.690181 | 0.001277 | 0.001618 | 0.001120 |
| test_to_chars_2.test | RUN | 0.220942 | 1.471233 | 0.865916 | 0.001061 | 0.001303 | 0.001107 |
| test_to_chars_2_no_simd.test | RUN | 0.230275 | 1.570792 | 0.784969 | 0.001093 | 0.001161 | 0.001139 |
| test_to_chars_3.test | RUN | 0.142137 | 0.506712 | 0.510097 | 0.001127 | 0.001219 | 0.001040 |
| test_from_chars.test | RUN | 0.165333 | 0.744082 | 0.584834 | 0.001176 | 0.001107 | 0.001099 |
| test_from_chars_no_simd.test | RUN | 0.128485 | 0.585951 | 0.484640 | 0.001030 | 0.001253 | 0.001151 |
| test_from_chars_2.test | RUN | 0.160351 | 0.697879 | 0.570837 | 0.001049 | 0.001237 | 0.001005 |
| test_from_chars_2_no_simd.test | RUN | 0.125764 | 0.523880 | 0.467604 | 0.001030 | 0.001277 | 0.001067 |
| test_uuid_from_string.test | RUN | 0.189246 | 0.767120 | 0.704238 | 0.001087 | 0.001310 | 0.001118 |
| test_uuid_from_string_2.test | RUN | 0.166974 | 0.705829 | 0.591983 | 0.001431 | 0.001520 | 0.001337 |
| test_uuid_from_string_3.test | RUN | 0.171954 | 0.684799 | 0.614146 | 0.001119 | 0.001260 | 0.001136 |
| test_uuid_clock.test | RUN | 0.095324 | 0.278767 | 0.360271 | 0.001036 | 0.001211 | 0.001170 |
| test_nil_generator.test | RUN | 0.111929 | 0.328174 | 0.413244 | 0.001025 | 0.001071 | 0.001416 |
| test_string_generator.test | RUN | 0.153206 | 0.557193 | 0.592088 | 0.001279 | 0.001448 | 0.001160 |
| test_string_generator_2.test | RUN | 0.200553 | 0.783385 | 0.657102 | 0.001091 | 0.001323 | 0.001097 |
| test_random_generator.test | RUN | 0.255728 | 1.495031 | 0.980603 | 0.004317 | 0.004371 | 0.004290 |
| test_random_generator_2.test | RUN | 0.189834 | 0.575807 | 0.664341 | 0.000861 | 0.001324 | 0.001172 |
| test_name_generator.test | RUN | 0.179606 | 1.979146 | 0.720953 | 0.001064 | 0.001436 | 0.001157 |
| test_namespaces.test | RUN | 0.140596 | 0.413901 | 0.464569 | 0.001094 | 0.001356 | 0.001118 |
| test_name_generator_md5.test | RUN | 0.170344 | 0.936667 | 0.684636 | 0.001163 | 0.001294 | 0.001265 |
| test_name_generator_sha1.test | RUN | 0.167739 | 2.924092 | 0.697259 | 0.001092 | 0.001351 | 0.001210 |
| test_time_generator.test | RUN | 0.173027 | 0.571340 | 0.655993 | 0.001125 | 0.001156 | 0.001097 |
| test_time_generator_v1.test | RUN | 0.199570 | 0.644696 | 0.713958 | 0.001451 | 0.001706 | 0.001609 |
| test_time_generator_v1_2.test | RUN | 0.194801 | 0.585569 | 0.689274 | 0.001330 | 0.001458 | 0.001389 |
| test_time_generator_v1_3.test | RUN | 0.209445 | 0.619107 | 0.749762 | 0.003256 | 0.004462 | 0.003960 |
| test_time_generator_v6.test | RUN | 0.196164 | 0.639674 | 0.720584 | 0.001482 | 0.001690 | 0.001589 |
| test_time_generator_v6_2.test | RUN | 0.192647 | 0.599331 | 0.691039 | 0.001308 | 0.001506 | 0.001378 |
| test_time_generator_v6_3.test | RUN | 0.214420 | 0.633354 | 0.760961 | 0.003398 | 0.002980 | 0.003549 |
| test_time_generator_v7.test | RUN | 0.187726 | 0.634715 | 0.696131 | 0.001488 | 0.001457 | 0.001337 |
| test_time_generator_v7_2.test | RUN | 0.175234 | 0.547462 | 0.649426 | 0.001238 | 0.001257 | 0.001340 |
| test_time_generator_v7_3.test | RUN | 0.177881 | 0.714394 | 0.645042 | 0.002619 | 0.002757 | 0.002607 |
| test_serialization.test | RUN | 0.317558 | 1.089689 | 1.208943 | 0.001170 | 0.001339 | 0.001207 |
| test_tagging.test | RUN | 0.176268 | 0.670084 | 0.662831 | 0.001234 | 0.001181 | 0.000929 |
| test_uuid_class.test | RUN | 0.185859 | 0.599594 | 0.691870 | 0.001132 | 0.001052 | 0.001137 |
| test_uuid_in_map.test | RUN | 0.203305 | 0.689576 | 0.751951 | 0.001059 | 0.001187 | 0.001067 |
| test_hash.test | RUN | 0.202458 | 0.611222 | 0.690986 | 0.001138 | 0.001273 | 0.001137 |
| test_hash_value.test | RUN | 0.144835 | 0.433937 | 0.521719 | 0.004090 | 0.004137 | 0.003910 |
| test_std_unordered.test | RUN | 0.190555 | 0.695936 | 0.710495 | 0.001140 | 0.001678 | 0.001134 |
| test_boost_unordered.test | RUN | 0.282112 | 0.890633 | 0.898045 | 0.001136 | 0.001125 | 0.001096 |
| test_detail_md5.test | RUN | 0.130135 | 0.437837 | 0.506915 | 0.001078 | 0.001162 | 0.000969 |
| test_detail_sha1.test | RUN | 0.118080 | 0.566756 | 0.463640 | 0.007493 | 0.008179 | 0.006990 |
| test_detail_endian.test | RUN | 0.091023 | 0.322826 | 0.345769 | 0.001009 | 0.001225 | 0.001028 |
| test_detail_chacha20.test | RUN | 0.098375 | 0.385381 | 0.355153 | 0.001093 | 0.001258 | 0.001032 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.084745 | 0.214348 | 0.277312 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.084867 | 0.211964 | 0.273881 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.150934 | 0.431509 | 0.493121 | 0.001107 | 0.001157 | 0.001137 |
| test_bench_random.test | RUN | 0.170873 | 0.565765 | 0.676311 | 0.016916 | 0.017078 | 0.016980 |
| test_entropy_error.test | RUN | 0.082720 | 0.260011 | 0.303975 | 0.001010 | 0.001193 | 0.001085 |
| test_detail_random_provider.test | RUN | 0.165229 | 0.440554 | 0.576330 | 0.001062 | 0.001183 | 0.001119 |
| test_constants.test | RUN | 0.132694 | 0.413358 | 0.464303 | 0.001054 | 0.001200 | 0.001113 |
| test_uuid_cx.test | COMPILE | 0.072508 | 0.182551 | 0.231189 | — | — | — |
| test_uuid_cx2.test | RUN | 0.135943 | 0.471461 | 0.520213 | 0.001080 | 0.001193 | 0.001129 |
| test_uuid_cx3.test | RUN | 0.118274 | 0.363951 | 0.460038 | 0.000900 | 0.001299 | 0.000962 |
| test_uuid_cx3_no_simd.test | RUN | 0.117819 | 0.347940 | 0.399815 | 0.001027 | 0.001279 | 0.001033 |
| test_hash_value_cx.test | RUN | 0.113060 | 0.328019 | 0.410934 | 0.001009 | 0.001169 | 0.001024 |
| test_string_generator_cx.test | RUN | 0.130982 | 0.420719 | 0.471670 | 0.001358 | 0.001138 | 0.001063 |
| test_string_generator_cx2.test | RUN | 0.172320 | 0.520520 | 0.538633 | 0.001370 | 0.001164 | 0.000937 |
| test_constants_cx.test | RUN | 0.110585 | 0.282742 | 0.373630 | 0.001077 | 0.001209 | 0.001026 |
| test_from_chars_cx.test | RUN | 0.152106 | 0.547908 | 0.503053 | 0.001074 | 0.001305 | 0.001039 |
| test_from_chars_cx2.test | RUN | 0.151131 | 0.682835 | 0.579372 | 0.001227 | 0.000931 | 0.001113 |
| test_to_chars_cx.test | RUN | 0.151291 | 0.632183 | 0.610963 | 0.001205 | 0.001431 | 0.000829 |
| test_uuid_from_string_cx.test | RUN | 0.167092 | 0.646802 | 0.599905 | 0.000844 | 0.000875 | 0.000804 |
| quick.test | RUN | 0.166724 | 0.501660 | 0.587869 | 0.000778 | 0.000855 | 0.000801 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.011× | 1.014×, 1.008× | 1.008× |
| clang | 1.005× | 1.014×, 0.995× | 1.007× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45241427099).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.000793s | 0.000802s | 0.000818s | byte equality observed |
| test_alignment.test | 10 | 0.000825s | 0.000797s | 0.000798s | byte equality observed |
| test_alignment_2.test | 10 | 0.000831s | 0.000786s | 0.000841s | byte equality observed |
| test_attribute_packed.test | 10 | 0.000763s | 0.000754s | 0.000776s | byte equality observed |
| test_bench_random.test | 2 | 0.016605s | 0.016602s | 0.016634s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.000804s | 0.000789s | 0.000815s | byte equality observed |
| test_comparison.test | 10 | 0.000758s | 0.000764s | 0.000783s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.000793s | 0.000804s | 0.000817s | byte equality observed |
| test_constants.test | 10 | 0.000830s | 0.000796s | 0.000844s | byte equality observed |
| test_constants_cx.test | 10 | 0.000822s | 0.000794s | 0.000783s | byte equality observed |
| test_data.test | 10 | 0.000814s | 0.000802s | 0.000818s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.000836s | 0.000790s | 0.000832s | byte equality observed |
| test_detail_endian.test | 10 | 0.000804s | 0.000821s | 0.000808s | byte equality observed |
| test_detail_md5.test | 10 | 0.000827s | 0.000858s | 0.000806s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.000812s | 0.000826s | 0.000849s | byte equality observed |
| test_detail_sha1.test | 4 | 0.005577s | 0.006456s | 0.005690s | byte equality observed |
| test_entropy_error.test | 10 | 0.000753s | 0.000748s | 0.000762s | byte equality observed |
| test_from_chars.test | 10 | 0.000770s | 0.000728s | 0.000795s | byte equality observed |
| test_from_chars_2.test | 10 | 0.000825s | 0.000786s | 0.000836s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.000820s | 0.000801s | 0.000812s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.000838s | 0.000819s | 0.000815s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.000845s | 0.000817s | 0.000817s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.000807s | 0.000836s | 0.000833s | byte equality observed |
| test_hash.test | 10 | 0.000825s | 0.000808s | 0.000841s | byte equality observed |
| test_hash_value.test | 6 | 0.003246s | 0.003176s | 0.003133s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.000761s | 0.000758s | 0.000772s | byte equality observed |
| test_include1.test | 10 | 0.000341s | 0.000335s | 0.000759s | byte equality observed |
| test_io.test | 10 | 0.000854s | 0.000841s | 0.000861s | byte equality observed |
| test_io_2.test | 10 | 0.000898s | 0.000897s | 0.000877s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.000911s | 0.000906s | 0.000893s | byte equality observed |
| test_io_no_simd.test | 10 | 0.000879s | 0.000871s | 0.000867s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.000830s | 0.000819s | 0.000811s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.000858s | 0.000824s | 0.000825s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.000834s | 0.000830s | 0.000825s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.000846s | 0.000856s | 0.000831s | byte equality observed |
| test_namespaces.test | 10 | 0.000838s | 0.000814s | 0.000810s | byte equality observed |
| test_nil_generator.test | 10 | 0.000809s | 0.000823s | 0.000792s | byte equality observed |
| test_pragma_pack.test | 10 | 0.000769s | 0.000769s | 0.000779s | byte equality observed |
| test_random_generator.test | 5 | 0.003878s | 0.003890s | 0.003877s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.000766s | 0.000767s | 0.000759s | byte equality observed |
| test_serialization.test | 10 | 0.000880s | 0.000883s | 0.000876s | byte equality observed |
| test_std_unordered.test | 10 | 0.000879s | 0.000886s | 0.000878s | byte equality observed |
| test_string_generator.test | 10 | 0.000881s | 0.000905s | 0.000902s | byte equality observed |
| test_string_generator_2.test | 10 | 0.000819s | 0.000871s | 0.000857s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.000841s | 0.000813s | 0.000833s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.000817s | 0.000808s | 0.000826s | byte equality observed |
| test_tagging.test | 10 | 0.000812s | 0.000829s | 0.000817s | byte equality observed |
| test_time_generator.test | 10 | 0.000832s | 0.000838s | 0.000825s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001146s | 0.001242s | 0.001256s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001017s | 0.001037s | 0.001044s | byte equality observed |
| test_time_generator_v1_3.test | 4 | 0.004465s | 0.004551s | 0.004088s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001169s | 0.001236s | 0.001242s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001031s | 0.001069s | 0.001060s | byte equality observed |
| test_time_generator_v6_3.test | 4 | 0.004540s | 0.004518s | 0.004477s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.000993s | 0.001068s | 0.001073s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.000857s | 0.000864s | 0.000887s | byte equality observed |
| test_time_generator_v7_3.test | 8 | 0.002392s | 0.002396s | 0.002396s | byte equality observed |
| test_to_chars.test | 10 | 0.000830s | 0.000820s | 0.000815s | byte equality observed |
| test_to_chars_2.test | 10 | 0.000800s | 0.000779s | 0.000803s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.000830s | 0.000857s | 0.000846s | byte equality observed |
| test_to_chars_3.test | 10 | 0.000844s | 0.000828s | 0.000819s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.000803s | 0.000829s | 0.000838s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.000859s | 0.000851s | 0.000835s | byte equality observed |
| test_uuid.test | 10 | 0.000802s | 0.000792s | 0.000820s | byte equality observed |
| test_uuid_2.test | 10 | 0.000814s | 0.000828s | 0.000831s | byte equality observed |
| test_uuid_3.test | 10 | 0.000818s | 0.000834s | 0.000791s | byte equality observed |
| test_uuid_class.test | 10 | 0.000848s | 0.000850s | 0.000833s | byte equality observed |
| test_uuid_clock.test | 10 | 0.000810s | 0.000781s | 0.000797s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.000817s | 0.000816s | 0.000814s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.000834s | 0.000843s | 0.000818s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.000809s | 0.000833s | 0.000824s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.000814s | 0.000825s | 0.000828s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.000979s | 0.000967s | 0.000993s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.000884s | 0.000851s | 0.000872s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.000809s | 0.000783s | 0.000806s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.000839s | 0.000806s | 0.000813s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.000805s | 0.000821s | 0.000801s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45241427099).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
