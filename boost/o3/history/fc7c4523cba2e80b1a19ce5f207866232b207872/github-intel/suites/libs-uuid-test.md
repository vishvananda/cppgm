# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.321876 | 0.787515 | 1.079295 | 0.000450 | 0.000480 | 0.001134 |
| test_uuid.test | RUN | 0.207272 | 0.651582 | 0.781278 | 0.001109 | 0.001189 | 0.001254 |
| test_uuid_no_simd.test | RUN | 0.200840 | 0.633508 | 0.702965 | 0.001174 | 0.001106 | 0.000909 |
| test_uuid_2.test | RUN | 0.141933 | 0.474721 | 0.518431 | 0.001181 | 0.001345 | 0.001032 |
| test_uuid_3.test | RUN | 0.114514 | 0.328088 | 0.399879 | 0.001067 | 0.001254 | 0.001088 |
| test_alignment.test | RUN | 0.104890 | 0.298917 | 0.366140 | 0.001117 | 0.001264 | 0.001142 |
| test_alignment_2.test | RUN | 0.107153 | 0.287951 | 0.374959 | 0.001122 | 0.001134 | 0.001029 |
| test_attribute_packed.test | RUN | 0.107266 | 0.294356 | 0.373358 | 0.001010 | 0.001187 | 0.001067 |
| test_pragma_pack.test | RUN | 0.107309 | 0.290985 | 0.367080 | 0.001103 | 0.001182 | 0.001263 |
| test_data.test | RUN | 0.128564 | 0.552907 | 0.535192 | 0.001139 | 0.001144 | 0.001189 |
| test_comparison.test | RUN | 0.177463 | 0.636603 | 0.711906 | 0.001194 | 0.001294 | 0.001256 |
| test_comparison_no_simd.test | RUN | 0.188792 | 0.706473 | 0.669557 | 0.001146 | 0.001180 | 0.001195 |
| test_io.test | RUN | 0.220288 | 1.238490 | 1.127259 | 0.001376 | 0.001398 | 0.001360 |
| test_io_no_simd.test | RUN | 0.223380 | 1.231298 | 1.039749 | 0.001341 | 0.001430 | 0.001196 |
| test_io_2.test | RUN | 0.199900 | 1.260077 | 0.776309 | 0.001090 | 0.001349 | 0.001381 |
| test_io_2_no_simd.test | RUN | 0.179898 | 1.190362 | 0.701722 | 0.001126 | 0.001335 | 0.001390 |
| test_to_chars.test | RUN | 0.183557 | 0.803209 | 0.725740 | 0.001326 | 0.001239 | 0.001248 |
| test_to_chars_no_simd.test | RUN | 0.157712 | 0.811269 | 0.689294 | 0.001351 | 0.001323 | 0.001377 |
| test_to_chars_2.test | RUN | 0.223783 | 1.456142 | 0.867483 | 0.001104 | 0.001244 | 0.001283 |
| test_to_chars_2_no_simd.test | RUN | 0.236048 | 1.567714 | 0.774373 | 0.001073 | 0.001257 | 0.001121 |
| test_to_chars_3.test | RUN | 0.145354 | 0.501038 | 0.524815 | 0.001126 | 0.001281 | 0.001091 |
| test_from_chars.test | RUN | 0.162910 | 0.748435 | 0.596916 | 0.001054 | 0.001093 | 0.001183 |
| test_from_chars_no_simd.test | RUN | 0.132496 | 0.580615 | 0.488707 | 0.001074 | 0.001223 | 0.001191 |
| test_from_chars_2.test | RUN | 0.159324 | 0.691603 | 0.573509 | 0.001106 | 0.001110 | 0.001077 |
| test_from_chars_2_no_simd.test | RUN | 0.127490 | 0.520879 | 0.465878 | 0.001146 | 0.001379 | 0.001091 |
| test_uuid_from_string.test | RUN | 0.188556 | 0.761639 | 0.711622 | 0.001172 | 0.001298 | 0.001032 |
| test_uuid_from_string_2.test | RUN | 0.166207 | 0.699471 | 0.600675 | 0.001341 | 0.001422 | 0.001476 |
| test_uuid_from_string_3.test | RUN | 0.169121 | 0.682948 | 0.600353 | 0.001128 | 0.001268 | 0.001172 |
| test_uuid_clock.test | RUN | 0.100977 | 0.280991 | 0.358764 | 0.001081 | 0.001322 | 0.001255 |
| test_nil_generator.test | RUN | 0.122941 | 0.332448 | 0.424978 | 0.001052 | 0.001250 | 0.001234 |
| test_string_generator.test | RUN | 0.159153 | 0.555647 | 0.588637 | 0.001142 | 0.001311 | 0.001366 |
| test_string_generator_2.test | RUN | 0.199551 | 0.785000 | 0.658130 | 0.001097 | 0.001240 | 0.001168 |
| test_random_generator.test | RUN | 0.260381 | 1.491199 | 0.995749 | 0.004090 | 0.004034 | 0.004157 |
| test_random_generator_2.test | RUN | 0.185308 | 0.573691 | 0.673872 | 0.001098 | 0.001244 | 0.001112 |
| test_name_generator.test | RUN | 0.170600 | 1.936262 | 0.718336 | 0.001094 | 0.001276 | 0.001114 |
| test_namespaces.test | RUN | 0.133545 | 0.413959 | 0.481299 | 0.001143 | 0.001203 | 0.001315 |
| test_name_generator_md5.test | RUN | 0.175060 | 0.931495 | 0.705043 | 0.001088 | 0.001257 | 0.001244 |
| test_name_generator_sha1.test | RUN | 0.172165 | 2.918042 | 0.686817 | 0.001085 | 0.001159 | 0.001308 |
| test_time_generator.test | RUN | 0.177438 | 0.571875 | 0.659081 | 0.001133 | 0.001212 | 0.001211 |
| test_time_generator_v1.test | RUN | 0.199910 | 0.642322 | 0.735321 | 0.001506 | 0.001710 | 0.001819 |
| test_time_generator_v1_2.test | RUN | 0.200414 | 0.584499 | 0.683217 | 0.001430 | 0.001513 | 0.001502 |
| test_time_generator_v1_3.test | RUN | 0.216512 | 0.625299 | 0.761278 | 0.003893 | 0.004130 | 0.003409 |
| test_time_generator_v6.test | RUN | 0.200635 | 0.624662 | 0.734952 | 0.001591 | 0.001712 | 0.001664 |
| test_time_generator_v6_2.test | RUN | 0.195198 | 0.589999 | 0.700151 | 0.001343 | 0.001529 | 0.001454 |
| test_time_generator_v6_3.test | RUN | 0.210563 | 0.626713 | 0.761299 | 0.004302 | 0.004735 | 0.004358 |
| test_time_generator_v7.test | RUN | 0.188122 | 0.626294 | 0.711001 | 0.001544 | 0.001456 | 0.001612 |
| test_time_generator_v7_2.test | RUN | 0.175359 | 0.552285 | 0.638531 | 0.001140 | 0.001246 | 0.001224 |
| test_time_generator_v7_3.test | RUN | 0.179527 | 0.718900 | 0.660741 | 0.002577 | 0.002707 | 0.002547 |
| test_serialization.test | RUN | 0.327098 | 1.083764 | 1.215716 | 0.001334 | 0.001248 | 0.001229 |
| test_tagging.test | RUN | 0.188762 | 0.664874 | 0.656688 | 0.001187 | 0.001142 | 0.001155 |
| test_uuid_class.test | RUN | 0.189762 | 0.596945 | 0.678488 | 0.001196 | 0.001131 | 0.001210 |
| test_uuid_in_map.test | RUN | 0.206948 | 0.674574 | 0.757753 | 0.001115 | 0.001130 | 0.001176 |
| test_hash.test | RUN | 0.204324 | 0.616295 | 0.677916 | 0.001284 | 0.001154 | 0.001163 |
| test_hash_value.test | RUN | 0.147986 | 0.428512 | 0.531966 | 0.004261 | 0.004056 | 0.004017 |
| test_std_unordered.test | RUN | 0.195237 | 0.699723 | 0.716623 | 0.001336 | 0.001368 | 0.001268 |
| test_boost_unordered.test | RUN | 0.275498 | 0.891186 | 0.898066 | 0.001097 | 0.001206 | 0.001163 |
| test_detail_md5.test | RUN | 0.132387 | 0.427792 | 0.502647 | 0.001088 | 0.001246 | 0.001220 |
| test_detail_sha1.test | RUN | 0.124121 | 0.551284 | 0.464386 | 0.008021 | 0.008239 | 0.007150 |
| test_detail_endian.test | RUN | 0.095531 | 0.317559 | 0.349894 | 0.000937 | 0.001382 | 0.001102 |
| test_detail_chacha20.test | RUN | 0.103544 | 0.387160 | 0.341889 | 0.001152 | 0.001125 | 0.001128 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.089422 | 0.215162 | 0.274915 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.088485 | 0.216466 | 0.285565 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.153414 | 0.430539 | 0.491115 | 0.001050 | 0.001228 | 0.001225 |
| test_bench_random.test | RUN | 0.171436 | 0.574761 | 0.674083 | 0.016307 | 0.016357 | 0.016182 |
| test_entropy_error.test | RUN | 0.089762 | 0.257865 | 0.313525 | 0.001073 | 0.001203 | 0.001084 |
| test_detail_random_provider.test | RUN | 0.175269 | 0.438765 | 0.582590 | 0.001069 | 0.001162 | 0.001238 |
| test_constants.test | RUN | 0.140918 | 0.418913 | 0.472898 | 0.001067 | 0.001262 | 0.001058 |
| test_uuid_cx.test | COMPILE | 0.078646 | 0.178630 | 0.231387 | — | — | — |
| test_uuid_cx2.test | RUN | 0.147905 | 0.471722 | 0.525148 | 0.001133 | 0.001192 | 0.001335 |
| test_uuid_cx3.test | RUN | 0.128178 | 0.370038 | 0.467399 | 0.001272 | 0.001230 | 0.001166 |
| test_uuid_cx3_no_simd.test | RUN | 0.119886 | 0.343296 | 0.405845 | 0.001107 | 0.001194 | 0.001223 |
| test_hash_value_cx.test | RUN | 0.120809 | 0.323791 | 0.408995 | 0.001110 | 0.001264 | 0.000995 |
| test_string_generator_cx.test | RUN | 0.141516 | 0.409411 | 0.484517 | 0.001426 | 0.001183 | 0.001129 |
| test_string_generator_cx2.test | RUN | 0.178699 | 0.513628 | 0.542946 | 0.001096 | 0.001316 | 0.001049 |
| test_constants_cx.test | RUN | 0.111588 | 0.283845 | 0.378375 | 0.001112 | 0.001328 | 0.001055 |
| test_from_chars_cx.test | RUN | 0.149737 | 0.541423 | 0.517241 | 0.001063 | 0.001356 | 0.001029 |
| test_from_chars_cx2.test | RUN | 0.150876 | 0.687326 | 0.570517 | 0.001320 | 0.001098 | 0.001071 |
| test_to_chars_cx.test | RUN | 0.157076 | 0.633775 | 0.603825 | 0.001223 | 0.001247 | 0.000807 |
| test_uuid_from_string_cx.test | RUN | 0.162461 | 0.637276 | 0.579473 | 0.000849 | 0.000882 | 0.001122 |
| quick.test | RUN | 0.175750 | 0.495048 | 0.576991 | 0.000833 | 0.000776 | 0.000755 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.006× | 1.006×, 1.006× | 0.978× |
| clang | 1.001× | 1.001×, 1.001× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46032707836).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.000791s | 0.000808s | 0.000820s | byte equality observed |
| test_alignment.test | 10 | 0.000806s | 0.000790s | 0.000788s | byte equality observed |
| test_alignment_2.test | 10 | 0.000804s | 0.000782s | 0.000832s | byte equality observed |
| test_attribute_packed.test | 9 | 0.000749s | 0.000757s | 0.000742s | byte equality observed |
| test_bench_random.test | 2 | 0.015786s | 0.015779s | 0.015783s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.000804s | 0.000786s | 0.000780s | byte equality observed |
| test_comparison.test | 10 | 0.000766s | 0.000754s | 0.000760s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.000815s | 0.000804s | 0.000791s | byte equality observed |
| test_constants.test | 10 | 0.000822s | 0.000792s | 0.000807s | byte equality observed |
| test_constants_cx.test | 10 | 0.000805s | 0.000796s | 0.000801s | byte equality observed |
| test_data.test | 10 | 0.000819s | 0.000792s | 0.000831s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.000788s | 0.000812s | 0.000854s | byte equality observed |
| test_detail_endian.test | 10 | 0.000795s | 0.000816s | 0.000850s | byte equality observed |
| test_detail_md5.test | 10 | 0.000822s | 0.000800s | 0.000850s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.000818s | 0.000806s | 0.000830s | byte equality observed |
| test_detail_sha1.test | 4 | 0.005527s | 0.006339s | 0.005677s | byte equality observed |
| test_entropy_error.test | 10 | 0.000759s | 0.000744s | 0.000760s | byte equality observed |
| test_from_chars.test | 10 | 0.000767s | 0.000757s | 0.000756s | byte equality observed |
| test_from_chars_2.test | 10 | 0.000824s | 0.000822s | 0.000843s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.000817s | 0.000782s | 0.000831s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.000802s | 0.000795s | 0.000842s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.000801s | 0.000802s | 0.000845s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.000824s | 0.000826s | 0.000812s | byte equality observed |
| test_hash.test | 10 | 0.000839s | 0.000821s | 0.000824s | byte equality observed |
| test_hash_value.test | 6 | 0.003266s | 0.003216s | 0.003172s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.000749s | 0.000778s | 0.000761s | byte equality observed |
| test_include1.test | 10 | 0.000356s | 0.000336s | 0.000774s | byte equality observed |
| test_io.test | 10 | 0.000845s | 0.000880s | 0.000830s | byte equality observed |
| test_io_2.test | 10 | 0.000905s | 0.000928s | 0.000882s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.000900s | 0.000914s | 0.000873s | byte equality observed |
| test_io_no_simd.test | 10 | 0.000869s | 0.000839s | 0.000849s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.000796s | 0.000819s | 0.000793s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.000824s | 0.000839s | 0.000817s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.000843s | 0.000859s | 0.000853s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.000847s | 0.000835s | 0.000829s | byte equality observed |
| test_namespaces.test | 10 | 0.000812s | 0.000835s | 0.000822s | byte equality observed |
| test_nil_generator.test | 10 | 0.000790s | 0.000833s | 0.000819s | byte equality observed |
| test_pragma_pack.test | 10 | 0.000787s | 0.000780s | 0.000774s | byte equality observed |
| test_random_generator.test | 5 | 0.003750s | 0.003694s | 0.003703s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.000765s | 0.000754s | 0.000751s | byte equality observed |
| test_serialization.test | 10 | 0.000866s | 0.000871s | 0.000851s | byte equality observed |
| test_std_unordered.test | 10 | 0.000833s | 0.000873s | 0.000899s | byte equality observed |
| test_string_generator.test | 10 | 0.000884s | 0.000868s | 0.000875s | byte equality observed |
| test_string_generator_2.test | 10 | 0.000828s | 0.000834s | 0.000827s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.000816s | 0.000819s | 0.000799s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.000811s | 0.000793s | 0.000808s | byte equality observed |
| test_tagging.test | 10 | 0.000844s | 0.000834s | 0.000839s | byte equality observed |
| test_time_generator.test | 10 | 0.000839s | 0.000815s | 0.000858s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001143s | 0.001221s | 0.001248s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001007s | 0.001049s | 0.001055s | byte equality observed |
| test_time_generator_v1_3.test | 4 | 0.004406s | 0.004290s | 0.004439s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001164s | 0.001233s | 0.001260s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001018s | 0.001041s | 0.001042s | byte equality observed |
| test_time_generator_v6_3.test | 5 | 0.004694s | 0.004473s | 0.004514s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.001002s | 0.001044s | 0.001050s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.000864s | 0.000876s | 0.000844s | byte equality observed |
| test_time_generator_v7_3.test | 8 | 0.002312s | 0.002300s | 0.002300s | byte equality observed |
| test_to_chars.test | 10 | 0.000832s | 0.000830s | 0.000816s | byte equality observed |
| test_to_chars_2.test | 10 | 0.000805s | 0.000812s | 0.000797s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.000819s | 0.000823s | 0.000804s | byte equality observed |
| test_to_chars_3.test | 10 | 0.000803s | 0.000818s | 0.000796s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.000846s | 0.000813s | 0.000802s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.000873s | 0.000836s | 0.000856s | byte equality observed |
| test_uuid.test | 10 | 0.000821s | 0.000825s | 0.000802s | byte equality observed |
| test_uuid_2.test | 10 | 0.000838s | 0.000848s | 0.000800s | byte equality observed |
| test_uuid_3.test | 10 | 0.000818s | 0.000813s | 0.000812s | byte equality observed |
| test_uuid_class.test | 10 | 0.000833s | 0.000836s | 0.000814s | byte equality observed |
| test_uuid_clock.test | 10 | 0.000796s | 0.000829s | 0.000811s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.000822s | 0.000790s | 0.000799s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.000815s | 0.000814s | 0.000786s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.000793s | 0.000793s | 0.000793s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.000824s | 0.000814s | 0.000811s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.000988s | 0.000959s | 0.001001s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.000884s | 0.000875s | 0.000861s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.000801s | 0.000798s | 0.000806s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.000798s | 0.000807s | 0.000820s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.000805s | 0.000780s | 0.000803s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46032707836).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
