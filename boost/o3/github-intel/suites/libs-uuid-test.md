# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.339526 | 0.815479 | 1.105722 | 0.000536 | 0.000624 | 0.001242 |
| test_uuid.test | RUN | 0.216723 | 0.684857 | 0.793367 | 0.001172 | 0.001395 | 0.001211 |
| test_uuid_no_simd.test | RUN | 0.215179 | 0.659008 | 0.702119 | 0.001369 | 0.001055 | 0.001012 |
| test_uuid_2.test | RUN | 0.152613 | 0.498707 | 0.531957 | 0.001216 | 0.001461 | 0.001265 |
| test_uuid_3.test | RUN | 0.126819 | 0.345463 | 0.423529 | 0.001343 | 0.001279 | 0.001127 |
| test_alignment.test | RUN | 0.117496 | 0.304306 | 0.366459 | 0.001289 | 0.001116 | 0.001176 |
| test_alignment_2.test | RUN | 0.115009 | 0.295513 | 0.384144 | 0.001282 | 0.001105 | 0.001342 |
| test_attribute_packed.test | RUN | 0.118984 | 0.307842 | 0.373332 | 0.001232 | 0.001456 | 0.001224 |
| test_pragma_pack.test | RUN | 0.117531 | 0.310484 | 0.380790 | 0.001398 | 0.001369 | 0.001232 |
| test_data.test | RUN | 0.140239 | 0.565689 | 0.539736 | 0.001290 | 0.001417 | 0.001298 |
| test_comparison.test | RUN | 0.198483 | 0.663409 | 0.753625 | 0.001289 | 0.001458 | 0.001200 |
| test_comparison_no_simd.test | RUN | 0.198861 | 0.755041 | 0.686707 | 0.001356 | 0.001313 | 0.001253 |
| test_io.test | RUN | 0.262443 | 1.284925 | 1.126336 | 0.001541 | 0.001400 | 0.001488 |
| test_io_no_simd.test | RUN | 0.254218 | 1.282855 | 1.071181 | 0.001239 | 0.001540 | 0.001264 |
| test_io_2.test | RUN | 0.204461 | 1.314878 | 0.782847 | 0.001276 | 0.001481 | 0.001238 |
| test_io_2_no_simd.test | RUN | 0.185641 | 1.247588 | 0.719105 | 0.001514 | 0.001720 | 0.001421 |
| test_to_chars.test | RUN | 0.187309 | 0.840908 | 0.724364 | 0.001546 | 0.001462 | 0.001149 |
| test_to_chars_no_simd.test | RUN | 0.181931 | 0.842715 | 0.701391 | 0.001482 | 0.001354 | 0.001264 |
| test_to_chars_2.test | RUN | 0.226193 | 1.525382 | 0.865591 | 0.001280 | 0.001259 | 0.001194 |
| test_to_chars_2_no_simd.test | RUN | 0.239454 | 1.616209 | 0.790537 | 0.001153 | 0.001391 | 0.001293 |
| test_to_chars_3.test | RUN | 0.150209 | 0.531318 | 0.526661 | 0.001118 | 0.001410 | 0.001264 |
| test_from_chars.test | RUN | 0.167896 | 0.762936 | 0.600996 | 0.001351 | 0.001231 | 0.001179 |
| test_from_chars_no_simd.test | RUN | 0.134186 | 0.609413 | 0.498138 | 0.001225 | 0.001320 | 0.001052 |
| test_from_chars_2.test | RUN | 0.164274 | 0.713504 | 0.583197 | 0.001193 | 0.001282 | 0.001210 |
| test_from_chars_2_no_simd.test | RUN | 0.130887 | 0.534594 | 0.475495 | 0.001128 | 0.001304 | 0.001188 |
| test_uuid_from_string.test | RUN | 0.190410 | 0.788493 | 0.711312 | 0.001027 | 0.001349 | 0.001147 |
| test_uuid_from_string_2.test | RUN | 0.170417 | 0.718967 | 0.605053 | 0.001532 | 0.001670 | 0.001318 |
| test_uuid_from_string_3.test | RUN | 0.170922 | 0.715268 | 0.623089 | 0.001244 | 0.001493 | 0.001266 |
| test_uuid_clock.test | RUN | 0.102444 | 0.284102 | 0.362877 | 0.000980 | 0.001447 | 0.001196 |
| test_nil_generator.test | RUN | 0.122227 | 0.338306 | 0.434507 | 0.001292 | 0.001492 | 0.001358 |
| test_string_generator.test | RUN | 0.162465 | 0.563640 | 0.602842 | 0.001405 | 0.001415 | 0.001267 |
| test_string_generator_2.test | RUN | 0.202571 | 0.806006 | 0.653644 | 0.001242 | 0.001251 | 0.001224 |
| test_random_generator.test | RUN | 0.275073 | 1.564459 | 1.012943 | 0.003996 | 0.004345 | 0.004129 |
| test_random_generator_2.test | RUN | 0.193765 | 0.592637 | 0.677867 | 0.001223 | 0.001344 | 0.001181 |
| test_name_generator.test | RUN | 0.176356 | 2.053232 | 0.738475 | 0.001306 | 0.001333 | 0.000968 |
| test_namespaces.test | RUN | 0.143077 | 0.430371 | 0.489141 | 0.001299 | 0.001326 | 0.001054 |
| test_name_generator_md5.test | RUN | 0.182697 | 0.961490 | 0.719418 | 0.001522 | 0.001378 | 0.001344 |
| test_name_generator_sha1.test | RUN | 0.174683 | 3.025762 | 0.708316 | 0.001208 | 0.001384 | 0.001207 |
| test_time_generator.test | RUN | 0.182950 | 0.589966 | 0.666500 | 0.001171 | 0.001507 | 0.001490 |
| test_time_generator_v1.test | RUN | 0.210193 | 0.663830 | 0.737235 | 0.001642 | 0.001894 | 0.001992 |
| test_time_generator_v1_2.test | RUN | 0.204072 | 0.624320 | 0.704831 | 0.001599 | 0.001784 | 0.001540 |
| test_time_generator_v1_3.test | RUN | 0.221898 | 0.656970 | 0.778550 | 0.003988 | 0.004749 | 0.004887 |
| test_time_generator_v6.test | RUN | 0.205379 | 0.666337 | 0.742725 | 0.001314 | 0.001806 | 0.001827 |
| test_time_generator_v6_2.test | RUN | 0.208267 | 0.624609 | 0.701560 | 0.001590 | 0.001784 | 0.001420 |
| test_time_generator_v6_3.test | RUN | 0.225088 | 0.657768 | 0.780894 | 0.004291 | 0.003560 | 0.004305 |
| test_time_generator_v7.test | RUN | 0.197789 | 0.655859 | 0.713720 | 0.001399 | 0.001773 | 0.001493 |
| test_time_generator_v7_2.test | RUN | 0.182869 | 0.581416 | 0.652683 | 0.001348 | 0.001480 | 0.001191 |
| test_time_generator_v7_3.test | RUN | 0.190843 | 0.761761 | 0.668178 | 0.002544 | 0.002941 | 0.002567 |
| test_serialization.test | RUN | 0.336113 | 1.149492 | 1.248396 | 0.001570 | 0.001506 | 0.001445 |
| test_tagging.test | RUN | 0.189244 | 0.689159 | 0.680941 | 0.001257 | 0.001181 | 0.001200 |
| test_uuid_class.test | RUN | 0.198534 | 0.604425 | 0.717171 | 0.001348 | 0.001098 | 0.001254 |
| test_uuid_in_map.test | RUN | 0.214176 | 0.705244 | 0.768574 | 0.001278 | 0.001308 | 0.001171 |
| test_hash.test | RUN | 0.215897 | 0.635646 | 0.701387 | 0.001239 | 0.001396 | 0.001302 |
| test_hash_value.test | RUN | 0.158537 | 0.435553 | 0.532706 | 0.004184 | 0.004283 | 0.004154 |
| test_std_unordered.test | RUN | 0.203753 | 0.722396 | 0.727197 | 0.001236 | 0.001520 | 0.001360 |
| test_boost_unordered.test | RUN | 0.281727 | 0.918284 | 0.930207 | 0.001198 | 0.001383 | 0.001291 |
| test_detail_md5.test | RUN | 0.135781 | 0.448136 | 0.516881 | 0.001273 | 0.001455 | 0.001315 |
| test_detail_sha1.test | RUN | 0.130216 | 0.574688 | 0.473117 | 0.007597 | 0.008013 | 0.007470 |
| test_detail_endian.test | RUN | 0.099490 | 0.328129 | 0.354627 | 0.001106 | 0.001239 | 0.001475 |
| test_detail_chacha20.test | RUN | 0.110832 | 0.404966 | 0.370792 | 0.001310 | 0.001112 | 0.001169 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.097163 | 0.228273 | 0.291003 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.096668 | 0.225097 | 0.282552 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.165205 | 0.447746 | 0.524717 | 0.001391 | 0.001437 | 0.001307 |
| test_bench_random.test | RUN | 0.182218 | 0.591091 | 0.695624 | 0.016163 | 0.016063 | 0.015762 |
| test_entropy_error.test | RUN | 0.093349 | 0.267944 | 0.320518 | 0.001220 | 0.001348 | 0.001270 |
| test_detail_random_provider.test | RUN | 0.177733 | 0.454473 | 0.610758 | 0.001290 | 0.001318 | 0.001324 |
| test_constants.test | RUN | 0.148961 | 0.426151 | 0.488657 | 0.001209 | 0.001399 | 0.001129 |
| test_uuid_cx.test | COMPILE | 0.080408 | 0.191559 | 0.250250 | — | — | — |
| test_uuid_cx2.test | RUN | 0.150206 | 0.481091 | 0.539001 | 0.001219 | 0.001279 | 0.001352 |
| test_uuid_cx3.test | RUN | 0.133685 | 0.377695 | 0.469453 | 0.000998 | 0.001433 | 0.001209 |
| test_uuid_cx3_no_simd.test | RUN | 0.121064 | 0.355572 | 0.419946 | 0.001335 | 0.001237 | 0.001404 |
| test_hash_value_cx.test | RUN | 0.119217 | 0.340493 | 0.417758 | 0.001108 | 0.001258 | 0.001196 |
| test_string_generator_cx.test | RUN | 0.143808 | 0.428155 | 0.491571 | 0.001242 | 0.001279 | 0.001311 |
| test_string_generator_cx2.test | RUN | 0.186438 | 0.527706 | 0.566968 | 0.001291 | 0.001244 | 0.001221 |
| test_constants_cx.test | RUN | 0.116764 | 0.287825 | 0.386018 | 0.001193 | 0.001250 | 0.001183 |
| test_from_chars_cx.test | RUN | 0.148823 | 0.557881 | 0.530270 | 0.001250 | 0.001411 | 0.001284 |
| test_from_chars_cx2.test | RUN | 0.157254 | 0.701777 | 0.580247 | 0.001358 | 0.000888 | 0.001299 |
| test_to_chars_cx.test | RUN | 0.160214 | 0.649202 | 0.628012 | 0.000954 | 0.001423 | 0.001098 |
| test_uuid_from_string_cx.test | RUN | 0.161826 | 0.659428 | 0.579070 | 0.000892 | 0.000967 | 0.000938 |
| quick.test | RUN | 0.178883 | 0.508009 | 0.570811 | 0.000899 | 0.000893 | 0.000897 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.006× | 1.006×, 1.007× | 0.999× |
| clang | 1.012× | 1.007×, 1.016× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45617981312).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.000821s | 0.000809s | 0.000808s | byte equality observed |
| test_alignment.test | 10 | 0.000815s | 0.000794s | 0.000847s | byte equality observed |
| test_alignment_2.test | 10 | 0.000825s | 0.000805s | 0.000820s | byte equality observed |
| test_attribute_packed.test | 10 | 0.000762s | 0.000770s | 0.000778s | byte equality observed |
| test_bench_random.test | 2 | 0.015449s | 0.015409s | 0.015390s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.000798s | 0.000796s | 0.000800s | byte equality observed |
| test_comparison.test | 10 | 0.000749s | 0.000755s | 0.000766s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.000803s | 0.000808s | 0.000836s | byte equality observed |
| test_constants.test | 10 | 0.000821s | 0.000822s | 0.000835s | byte equality observed |
| test_constants_cx.test | 10 | 0.000797s | 0.000784s | 0.000816s | byte equality observed |
| test_data.test | 10 | 0.000808s | 0.000803s | 0.000828s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.000841s | 0.000817s | 0.000788s | byte equality observed |
| test_detail_endian.test | 10 | 0.000844s | 0.000850s | 0.000806s | byte equality observed |
| test_detail_md5.test | 10 | 0.000830s | 0.000852s | 0.000838s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.000831s | 0.000862s | 0.000832s | byte equality observed |
| test_detail_sha1.test | 4 | 0.005515s | 0.006401s | 0.005708s | byte equality observed |
| test_entropy_error.test | 10 | 0.000768s | 0.000759s | 0.000745s | byte equality observed |
| test_from_chars.test | 10 | 0.000753s | 0.000755s | 0.000734s | byte equality observed |
| test_from_chars_2.test | 10 | 0.000815s | 0.000793s | 0.000830s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.000800s | 0.000802s | 0.000826s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.000812s | 0.000784s | 0.000841s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.000807s | 0.000792s | 0.000831s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.000827s | 0.000835s | 0.000863s | byte equality observed |
| test_hash.test | 10 | 0.000828s | 0.000828s | 0.000873s | byte equality observed |
| test_hash_value.test | 6 | 0.003219s | 0.003226s | 0.003160s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.000771s | 0.000749s | 0.000781s | byte equality observed |
| test_include1.test | 10 | 0.000357s | 0.000357s | 0.000762s | byte equality observed |
| test_io.test | 10 | 0.000863s | 0.000871s | 0.000873s | byte equality observed |
| test_io_2.test | 10 | 0.000916s | 0.000918s | 0.000901s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.000915s | 0.000938s | 0.000906s | byte equality observed |
| test_io_no_simd.test | 10 | 0.000870s | 0.000882s | 0.000912s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.000832s | 0.000796s | 0.000842s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.000844s | 0.000815s | 0.000844s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.000856s | 0.000829s | 0.000851s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.000862s | 0.000858s | 0.000843s | byte equality observed |
| test_namespaces.test | 10 | 0.000860s | 0.000814s | 0.000817s | byte equality observed |
| test_nil_generator.test | 10 | 0.000832s | 0.000817s | 0.000805s | byte equality observed |
| test_pragma_pack.test | 10 | 0.000777s | 0.000786s | 0.000792s | byte equality observed |
| test_random_generator.test | 5 | 0.003675s | 0.003658s | 0.003688s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.000793s | 0.000754s | 0.000765s | byte equality observed |
| test_serialization.test | 10 | 0.000889s | 0.000866s | 0.000916s | byte equality observed |
| test_std_unordered.test | 10 | 0.000864s | 0.000870s | 0.000900s | byte equality observed |
| test_string_generator.test | 10 | 0.000878s | 0.000881s | 0.000908s | byte equality observed |
| test_string_generator_2.test | 10 | 0.000826s | 0.000814s | 0.000868s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.000831s | 0.000809s | 0.000823s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.000836s | 0.000807s | 0.000852s | byte equality observed |
| test_tagging.test | 10 | 0.000844s | 0.000837s | 0.000862s | byte equality observed |
| test_time_generator.test | 10 | 0.000866s | 0.000849s | 0.000848s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001145s | 0.001233s | 0.001237s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.000998s | 0.001054s | 0.001045s | byte equality observed |
| test_time_generator_v1_3.test | 4 | 0.004493s | 0.004228s | 0.004448s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001175s | 0.001246s | 0.001259s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001030s | 0.001061s | 0.001063s | byte equality observed |
| test_time_generator_v6_3.test | 4 | 0.004741s | 0.004919s | 0.004989s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.001012s | 0.001030s | 0.001054s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.000870s | 0.000875s | 0.000882s | byte equality observed |
| test_time_generator_v7_3.test | 7 | 0.002289s | 0.002281s | 0.002279s | byte equality observed |
| test_to_chars.test | 10 | 0.000833s | 0.000824s | 0.000828s | byte equality observed |
| test_to_chars_2.test | 10 | 0.000812s | 0.000826s | 0.000822s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.000831s | 0.000845s | 0.000839s | byte equality observed |
| test_to_chars_3.test | 10 | 0.000825s | 0.000859s | 0.000828s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.000835s | 0.000852s | 0.000851s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.000860s | 0.000869s | 0.000871s | byte equality observed |
| test_uuid.test | 10 | 0.000814s | 0.000785s | 0.000846s | byte equality observed |
| test_uuid_2.test | 10 | 0.000839s | 0.000801s | 0.000829s | byte equality observed |
| test_uuid_3.test | 10 | 0.000824s | 0.000804s | 0.000835s | byte equality observed |
| test_uuid_class.test | 10 | 0.000838s | 0.000841s | 0.000848s | byte equality observed |
| test_uuid_clock.test | 10 | 0.000817s | 0.000802s | 0.000825s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.000834s | 0.000814s | 0.000805s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.000837s | 0.000806s | 0.000814s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.000841s | 0.000806s | 0.000809s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.000825s | 0.000839s | 0.000815s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.000971s | 0.000966s | 0.000993s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.000888s | 0.000870s | 0.000899s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.000806s | 0.000856s | 0.000835s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.000818s | 0.000878s | 0.000811s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.000810s | 0.000827s | 0.000816s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45617981312).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
