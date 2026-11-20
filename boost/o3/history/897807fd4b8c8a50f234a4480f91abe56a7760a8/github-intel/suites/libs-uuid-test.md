# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.327038 | 0.774087 | 1.079082 | 0.000470 | 0.000499 | 0.001142 |
| test_uuid.test | RUN | 0.210784 | 0.649487 | 0.766282 | 0.001172 | 0.001152 | 0.001342 |
| test_uuid_no_simd.test | RUN | 0.201731 | 0.628123 | 0.693283 | 0.001225 | 0.001131 | 0.001028 |
| test_uuid_2.test | RUN | 0.143551 | 0.477112 | 0.518877 | 0.001140 | 0.001219 | 0.001154 |
| test_uuid_3.test | RUN | 0.118348 | 0.316672 | 0.413354 | 0.001123 | 0.001174 | 0.001156 |
| test_alignment.test | RUN | 0.103299 | 0.294752 | 0.363421 | 0.001124 | 0.001093 | 0.001173 |
| test_alignment_2.test | RUN | 0.105920 | 0.282777 | 0.378682 | 0.001069 | 0.001257 | 0.001332 |
| test_attribute_packed.test | RUN | 0.108172 | 0.294455 | 0.370812 | 0.001082 | 0.001208 | 0.001181 |
| test_pragma_pack.test | RUN | 0.106444 | 0.298108 | 0.369752 | 0.001152 | 0.001356 | 0.001132 |
| test_data.test | RUN | 0.129733 | 0.549651 | 0.536821 | 0.001012 | 0.001178 | 0.001326 |
| test_comparison.test | RUN | 0.194359 | 0.631545 | 0.737784 | 0.001202 | 0.001281 | 0.001366 |
| test_comparison_no_simd.test | RUN | 0.182697 | 0.721957 | 0.643409 | 0.001128 | 0.001245 | 0.001288 |
| test_io.test | RUN | 0.252061 | 1.236607 | 1.108002 | 0.001252 | 0.001438 | 0.001328 |
| test_io_no_simd.test | RUN | 0.242942 | 1.215295 | 1.046662 | 0.001108 | 0.001160 | 0.001294 |
| test_io_2.test | RUN | 0.196586 | 1.276064 | 0.770435 | 0.001177 | 0.001391 | 0.001227 |
| test_io_2_no_simd.test | RUN | 0.176636 | 1.194508 | 0.707713 | 0.001240 | 0.001336 | 0.001454 |
| test_to_chars.test | RUN | 0.178227 | 0.794746 | 0.720203 | 0.001196 | 0.001281 | 0.001211 |
| test_to_chars_no_simd.test | RUN | 0.171123 | 0.805806 | 0.691596 | 0.001178 | 0.001403 | 0.001377 |
| test_to_chars_2.test | RUN | 0.218894 | 1.467682 | 0.854915 | 0.001166 | 0.001337 | 0.001300 |
| test_to_chars_2_no_simd.test | RUN | 0.225850 | 1.561773 | 0.779588 | 0.001095 | 0.001345 | 0.001133 |
| test_to_chars_3.test | RUN | 0.143209 | 0.504898 | 0.506098 | 0.001133 | 0.001178 | 0.001095 |
| test_from_chars.test | RUN | 0.164331 | 0.742651 | 0.583580 | 0.001148 | 0.001116 | 0.001357 |
| test_from_chars_no_simd.test | RUN | 0.148726 | 0.586196 | 0.490854 | 0.001131 | 0.001146 | 0.001422 |
| test_from_chars_2.test | RUN | 0.159608 | 0.695594 | 0.577728 | 0.001050 | 0.001162 | 0.001278 |
| test_from_chars_2_no_simd.test | RUN | 0.140857 | 0.523494 | 0.464979 | 0.001153 | 0.001234 | 0.001226 |
| test_uuid_from_string.test | RUN | 0.189681 | 0.756795 | 0.704694 | 0.001093 | 0.001211 | 0.001140 |
| test_uuid_from_string_2.test | RUN | 0.166822 | 0.692048 | 0.604648 | 0.001450 | 0.001472 | 0.001499 |
| test_uuid_from_string_3.test | RUN | 0.170751 | 0.689696 | 0.626540 | 0.001220 | 0.001142 | 0.001392 |
| test_uuid_clock.test | RUN | 0.101044 | 0.274145 | 0.365791 | 0.001062 | 0.001197 | 0.001214 |
| test_nil_generator.test | RUN | 0.118752 | 0.322544 | 0.423576 | 0.001131 | 0.001164 | 0.001290 |
| test_string_generator.test | RUN | 0.155700 | 0.554552 | 0.591968 | 0.001258 | 0.001299 | 0.001289 |
| test_string_generator_2.test | RUN | 0.195306 | 0.774392 | 0.653305 | 0.001051 | 0.001143 | 0.001105 |
| test_random_generator.test | RUN | 0.257377 | 1.492144 | 0.990147 | 0.004185 | 0.004316 | 0.004373 |
| test_random_generator_2.test | RUN | 0.187090 | 0.569387 | 0.663325 | 0.001260 | 0.001200 | 0.001181 |
| test_name_generator.test | RUN | 0.170597 | 1.955430 | 0.721701 | 0.001139 | 0.001365 | 0.001176 |
| test_namespaces.test | RUN | 0.135819 | 0.408455 | 0.480515 | 0.001186 | 0.001182 | 0.001155 |
| test_name_generator_md5.test | RUN | 0.175478 | 0.925036 | 0.699574 | 0.001258 | 0.001253 | 0.001338 |
| test_name_generator_sha1.test | RUN | 0.164084 | 2.897179 | 0.701279 | 0.001266 | 0.001379 | 0.001461 |
| test_time_generator.test | RUN | 0.181005 | 0.571218 | 0.661809 | 0.001259 | 0.001151 | 0.001172 |
| test_time_generator_v1.test | RUN | 0.200921 | 0.637134 | 0.727719 | 0.001578 | 0.001776 | 0.001714 |
| test_time_generator_v1_2.test | RUN | 0.205531 | 0.587285 | 0.704871 | 0.001501 | 0.001500 | 0.001607 |
| test_time_generator_v1_3.test | RUN | 0.221579 | 0.619912 | 0.769563 | 0.005128 | 0.004313 | 0.004365 |
| test_time_generator_v6.test | RUN | 0.206566 | 0.631215 | 0.724113 | 0.001660 | 0.001730 | 0.001884 |
| test_time_generator_v6_2.test | RUN | 0.198147 | 0.585026 | 0.703169 | 0.001342 | 0.001597 | 0.001459 |
| test_time_generator_v6_3.test | RUN | 0.220970 | 0.627944 | 0.778628 | 0.004263 | 0.003414 | 0.003680 |
| test_time_generator_v7.test | RUN | 0.193722 | 0.628827 | 0.712381 | 0.001515 | 0.001533 | 0.001640 |
| test_time_generator_v7_2.test | RUN | 0.179579 | 0.552340 | 0.645322 | 0.001157 | 0.001281 | 0.001432 |
| test_time_generator_v7_3.test | RUN | 0.181467 | 0.710949 | 0.670915 | 0.002647 | 0.002797 | 0.002732 |
| test_serialization.test | RUN | 0.329574 | 1.070039 | 1.217001 | 0.001169 | 0.001195 | 0.001498 |
| test_tagging.test | RUN | 0.178887 | 0.671454 | 0.657808 | 0.001229 | 0.001149 | 0.001145 |
| test_uuid_class.test | RUN | 0.188706 | 0.593307 | 0.691776 | 0.001130 | 0.001105 | 0.001175 |
| test_uuid_in_map.test | RUN | 0.208453 | 0.675024 | 0.758466 | 0.001116 | 0.001066 | 0.001261 |
| test_hash.test | RUN | 0.207939 | 0.607560 | 0.703649 | 0.001165 | 0.001131 | 0.001149 |
| test_hash_value.test | RUN | 0.146660 | 0.431178 | 0.516028 | 0.004073 | 0.004174 | 0.004062 |
| test_std_unordered.test | RUN | 0.189813 | 0.691828 | 0.699255 | 0.001242 | 0.001334 | 0.001502 |
| test_boost_unordered.test | RUN | 0.274068 | 0.882395 | 0.925317 | 0.001181 | 0.001346 | 0.001258 |
| test_detail_md5.test | RUN | 0.127090 | 0.431872 | 0.516699 | 0.001074 | 0.001191 | 0.001240 |
| test_detail_sha1.test | RUN | 0.121055 | 0.556829 | 0.468764 | 0.007824 | 0.008082 | 0.007200 |
| test_detail_endian.test | RUN | 0.093567 | 0.308788 | 0.348433 | 0.001026 | 0.001243 | 0.001300 |
| test_detail_chacha20.test | RUN | 0.101631 | 0.391164 | 0.362608 | 0.001132 | 0.001154 | 0.001219 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.088846 | 0.211979 | 0.282509 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.093782 | 0.210774 | 0.278411 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.155175 | 0.424214 | 0.503786 | 0.001203 | 0.001088 | 0.001136 |
| test_bench_random.test | RUN | 0.177890 | 0.571744 | 0.678847 | 0.016552 | 0.016602 | 0.016614 |
| test_entropy_error.test | RUN | 0.088916 | 0.257703 | 0.312931 | 0.001039 | 0.001130 | 0.001179 |
| test_detail_random_provider.test | RUN | 0.172394 | 0.438334 | 0.585456 | 0.001085 | 0.001294 | 0.001173 |
| test_constants.test | RUN | 0.130739 | 0.412184 | 0.464400 | 0.001091 | 0.001360 | 0.001011 |
| test_uuid_cx.test | COMPILE | 0.077883 | 0.187062 | 0.229297 | — | — | — |
| test_uuid_cx2.test | RUN | 0.145406 | 0.468564 | 0.508126 | 0.001143 | 0.000860 | 0.001195 |
| test_uuid_cx3.test | RUN | 0.126737 | 0.367697 | 0.464599 | 0.001065 | 0.001342 | 0.001023 |
| test_uuid_cx3_no_simd.test | RUN | 0.118574 | 0.338301 | 0.401813 | 0.000924 | 0.001042 | 0.001120 |
| test_hash_value_cx.test | RUN | 0.116734 | 0.329477 | 0.413017 | 0.001069 | 0.001166 | 0.001133 |
| test_string_generator_cx.test | RUN | 0.135393 | 0.417017 | 0.476210 | 0.001324 | 0.001231 | 0.001199 |
| test_string_generator_cx2.test | RUN | 0.177813 | 0.511263 | 0.545668 | 0.001177 | 0.001172 | 0.001194 |
| test_constants_cx.test | RUN | 0.110030 | 0.274192 | 0.380349 | 0.001216 | 0.001213 | 0.001103 |
| test_from_chars_cx.test | RUN | 0.148344 | 0.551452 | 0.506721 | 0.001170 | 0.001174 | 0.001054 |
| test_from_chars_cx2.test | RUN | 0.159336 | 0.684467 | 0.565766 | 0.001245 | 0.001092 | 0.001314 |
| test_to_chars_cx.test | RUN | 0.152709 | 0.632388 | 0.611768 | 0.000836 | 0.001270 | 0.000970 |
| test_uuid_from_string_cx.test | RUN | 0.167682 | 0.631181 | 0.547937 | 0.000868 | 0.000873 | 0.000860 |
| quick.test | RUN | 0.173505 | 0.471703 | 0.584862 | 0.000811 | 0.000819 | 0.000794 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.013× | 1.011×, 1.015× | 1.008× |
| clang | 1.013× | 1.013×, 1.014× | 0.995× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44780058957).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.000811s | 0.000816s | 0.000794s | byte equality observed |
| test_alignment.test | 10 | 0.000786s | 0.000797s | 0.000793s | byte equality observed |
| test_alignment_2.test | 10 | 0.000801s | 0.000815s | 0.000826s | byte equality observed |
| test_attribute_packed.test | 10 | 0.000755s | 0.000732s | 0.000739s | byte equality observed |
| test_bench_random.test | 2 | 0.016194s | 0.016215s | 0.016203s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.000788s | 0.000770s | 0.000782s | byte equality observed |
| test_comparison.test | 10 | 0.000738s | 0.000740s | 0.000759s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.000785s | 0.000747s | 0.000782s | byte equality observed |
| test_constants.test | 10 | 0.000819s | 0.000831s | 0.000767s | byte equality observed |
| test_constants_cx.test | 10 | 0.000777s | 0.000780s | 0.000774s | byte equality observed |
| test_data.test | 10 | 0.000790s | 0.000804s | 0.000816s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.000808s | 0.000809s | 0.000813s | byte equality observed |
| test_detail_endian.test | 10 | 0.000791s | 0.000819s | 0.000799s | byte equality observed |
| test_detail_md5.test | 10 | 0.000834s | 0.000808s | 0.000822s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.000805s | 0.000793s | 0.000784s | byte equality observed |
| test_detail_sha1.test | 4 | 0.005383s | 0.006415s | 0.005642s | byte equality observed |
| test_entropy_error.test | 10 | 0.000734s | 0.000767s | 0.000750s | byte equality observed |
| test_from_chars.test | 10 | 0.000765s | 0.000744s | 0.000745s | byte equality observed |
| test_from_chars_2.test | 10 | 0.000810s | 0.000828s | 0.000786s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.000817s | 0.000826s | 0.000797s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.000793s | 0.000821s | 0.000814s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.000785s | 0.000807s | 0.000808s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.000793s | 0.000813s | 0.000801s | byte equality observed |
| test_hash.test | 10 | 0.000799s | 0.000793s | 0.000829s | byte equality observed |
| test_hash_value.test | 6 | 0.003234s | 0.003206s | 0.003178s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.000757s | 0.000747s | 0.000747s | byte equality observed |
| test_include1.test | 10 | 0.000352s | 0.000338s | 0.000755s | byte equality observed |
| test_io.test | 10 | 0.000862s | 0.000853s | 0.000850s | byte equality observed |
| test_io_2.test | 10 | 0.000884s | 0.000884s | 0.000877s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.000891s | 0.000884s | 0.000888s | byte equality observed |
| test_io_no_simd.test | 10 | 0.000868s | 0.000838s | 0.000840s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.000792s | 0.000795s | 0.000791s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.000820s | 0.000837s | 0.000793s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.000838s | 0.000827s | 0.000818s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.000851s | 0.000859s | 0.000831s | byte equality observed |
| test_namespaces.test | 10 | 0.000804s | 0.000803s | 0.000807s | byte equality observed |
| test_nil_generator.test | 10 | 0.000797s | 0.000808s | 0.000813s | byte equality observed |
| test_pragma_pack.test | 10 | 0.000750s | 0.000772s | 0.000763s | byte equality observed |
| test_random_generator.test | 5 | 0.003811s | 0.003776s | 0.003810s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.000765s | 0.000752s | 0.000739s | byte equality observed |
| test_serialization.test | 10 | 0.000861s | 0.000871s | 0.000863s | byte equality observed |
| test_std_unordered.test | 10 | 0.000855s | 0.000860s | 0.000841s | byte equality observed |
| test_string_generator.test | 10 | 0.000850s | 0.000868s | 0.000864s | byte equality observed |
| test_string_generator_2.test | 10 | 0.000816s | 0.000809s | 0.000815s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.000806s | 0.000793s | 0.000811s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.000834s | 0.000790s | 0.000826s | byte equality observed |
| test_tagging.test | 10 | 0.000838s | 0.000815s | 0.000832s | byte equality observed |
| test_time_generator.test | 10 | 0.000833s | 0.000822s | 0.000843s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001123s | 0.001213s | 0.001243s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001013s | 0.001023s | 0.001028s | byte equality observed |
| test_time_generator_v1_3.test | 4 | 0.004310s | 0.004425s | 0.004472s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001149s | 0.001245s | 0.001256s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001002s | 0.001050s | 0.001052s | byte equality observed |
| test_time_generator_v6_3.test | 5 | 0.004691s | 0.004729s | 0.004982s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.000998s | 0.001034s | 0.001034s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.000858s | 0.000851s | 0.000841s | byte equality observed |
| test_time_generator_v7_3.test | 8 | 0.002349s | 0.002354s | 0.002331s | byte equality observed |
| test_to_chars.test | 10 | 0.000815s | 0.000807s | 0.000809s | byte equality observed |
| test_to_chars_2.test | 10 | 0.000795s | 0.000800s | 0.000795s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.000849s | 0.000815s | 0.000846s | byte equality observed |
| test_to_chars_3.test | 10 | 0.000819s | 0.000790s | 0.000843s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.000826s | 0.000832s | 0.000832s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.000859s | 0.000852s | 0.000850s | byte equality observed |
| test_uuid.test | 10 | 0.000790s | 0.000802s | 0.000797s | byte equality observed |
| test_uuid_2.test | 10 | 0.000797s | 0.000824s | 0.000797s | byte equality observed |
| test_uuid_3.test | 10 | 0.000788s | 0.000802s | 0.000825s | byte equality observed |
| test_uuid_class.test | 10 | 0.000802s | 0.000842s | 0.000828s | byte equality observed |
| test_uuid_clock.test | 10 | 0.000799s | 0.000812s | 0.000806s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.000837s | 0.000808s | 0.000834s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.000787s | 0.000844s | 0.000820s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.000798s | 0.000796s | 0.000813s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.000825s | 0.000813s | 0.000807s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.000945s | 0.000952s | 0.000983s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.000865s | 0.000872s | 0.000852s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.000787s | 0.000804s | 0.000787s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.000797s | 0.000807s | 0.000792s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.000802s | 0.000798s | 0.000817s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44780058957).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
