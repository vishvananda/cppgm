# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.327468 | 0.800641 | 1.071082 | 0.000492 | 0.000520 | 0.001153 |
| test_uuid.test | RUN | 0.214439 | 0.657616 | 0.766205 | 0.001179 | 0.001208 | 0.001218 |
| test_uuid_no_simd.test | RUN | 0.206153 | 0.646652 | 0.698622 | 0.001238 | 0.001234 | 0.001139 |
| test_uuid_2.test | RUN | 0.146591 | 0.490778 | 0.507987 | 0.001133 | 0.001173 | 0.000860 |
| test_uuid_3.test | RUN | 0.121657 | 0.334413 | 0.413464 | 0.001043 | 0.001439 | 0.001081 |
| test_alignment.test | RUN | 0.111171 | 0.298647 | 0.363447 | 0.001123 | 0.001219 | 0.001086 |
| test_alignment_2.test | RUN | 0.113319 | 0.294866 | 0.372444 | 0.001108 | 0.001347 | 0.001160 |
| test_attribute_packed.test | RUN | 0.112825 | 0.303096 | 0.361669 | 0.001128 | 0.001405 | 0.001098 |
| test_pragma_pack.test | RUN | 0.108594 | 0.303642 | 0.370064 | 0.001243 | 0.001366 | 0.001167 |
| test_data.test | RUN | 0.133245 | 0.559477 | 0.530855 | 0.001159 | 0.001429 | 0.001158 |
| test_comparison.test | RUN | 0.192445 | 0.648195 | 0.727093 | 0.001409 | 0.001218 | 0.001137 |
| test_comparison_no_simd.test | RUN | 0.193481 | 0.730109 | 0.642357 | 0.001203 | 0.001279 | 0.001164 |
| test_io.test | RUN | 0.253780 | 1.257236 | 1.107082 | 0.001263 | 0.001482 | 0.001317 |
| test_io_no_simd.test | RUN | 0.250475 | 1.259373 | 1.040100 | 0.001153 | 0.001427 | 0.001195 |
| test_io_2.test | RUN | 0.196174 | 1.314924 | 0.774491 | 0.001286 | 0.001456 | 0.001251 |
| test_io_2_no_simd.test | RUN | 0.180246 | 1.235874 | 0.702908 | 0.001255 | 0.001310 | 0.001280 |
| test_to_chars.test | RUN | 0.182210 | 0.818345 | 0.720524 | 0.001309 | 0.001535 | 0.001197 |
| test_to_chars_no_simd.test | RUN | 0.177185 | 0.831516 | 0.689902 | 0.001276 | 0.001420 | 0.001281 |
| test_to_chars_2.test | RUN | 0.224692 | 1.502948 | 0.851660 | 0.001177 | 0.001152 | 0.001204 |
| test_to_chars_2_no_simd.test | RUN | 0.226737 | 1.608315 | 0.768310 | 0.001090 | 0.001354 | 0.001140 |
| test_to_chars_3.test | RUN | 0.145166 | 0.526220 | 0.513930 | 0.001147 | 0.001432 | 0.001137 |
| test_from_chars.test | RUN | 0.164509 | 0.764302 | 0.588129 | 0.001312 | 0.001256 | 0.001208 |
| test_from_chars_no_simd.test | RUN | 0.134602 | 0.606097 | 0.486773 | 0.001280 | 0.001147 | 0.001086 |
| test_from_chars_2.test | RUN | 0.156578 | 0.708843 | 0.563102 | 0.001111 | 0.001325 | 0.001152 |
| test_from_chars_2_no_simd.test | RUN | 0.131645 | 0.535283 | 0.463688 | 0.001156 | 0.001283 | 0.001147 |
| test_uuid_from_string.test | RUN | 0.191732 | 0.789065 | 0.691555 | 0.001344 | 0.001263 | 0.001108 |
| test_uuid_from_string_2.test | RUN | 0.163813 | 0.719044 | 0.593761 | 0.001479 | 0.001461 | 0.001276 |
| test_uuid_from_string_3.test | RUN | 0.164450 | 0.719877 | 0.612541 | 0.001193 | 0.001392 | 0.001222 |
| test_uuid_clock.test | RUN | 0.104883 | 0.284361 | 0.354832 | 0.001129 | 0.001370 | 0.001050 |
| test_nil_generator.test | RUN | 0.117463 | 0.338020 | 0.417301 | 0.001510 | 0.001209 | 0.001115 |
| test_string_generator.test | RUN | 0.163791 | 0.570818 | 0.585263 | 0.001369 | 0.001606 | 0.001278 |
| test_string_generator_2.test | RUN | 0.200906 | 0.799909 | 0.649147 | 0.001204 | 0.001203 | 0.001079 |
| test_random_generator.test | RUN | 0.259615 | 1.535682 | 0.980273 | 0.004252 | 0.004455 | 0.004250 |
| test_random_generator_2.test | RUN | 0.193887 | 0.581445 | 0.661200 | 0.001178 | 0.001417 | 0.001139 |
| test_name_generator.test | RUN | 0.178107 | 2.021648 | 0.716518 | 0.001098 | 0.001427 | 0.001050 |
| test_namespaces.test | RUN | 0.138381 | 0.423565 | 0.468832 | 0.001142 | 0.001311 | 0.001077 |
| test_name_generator_md5.test | RUN | 0.182999 | 0.954829 | 0.707133 | 0.001285 | 0.001325 | 0.001145 |
| test_name_generator_sha1.test | RUN | 0.171458 | 2.952541 | 0.688832 | 0.001399 | 0.001438 | 0.001128 |
| test_time_generator.test | RUN | 0.178089 | 0.585910 | 0.629582 | 0.001202 | 0.001470 | 0.001167 |
| test_time_generator_v1.test | RUN | 0.205638 | 0.642999 | 0.729435 | 0.001579 | 0.001688 | 0.001688 |
| test_time_generator_v1_2.test | RUN | 0.199584 | 0.601798 | 0.688556 | 0.001510 | 0.001506 | 0.001533 |
| test_time_generator_v1_3.test | RUN | 0.217930 | 0.627049 | 0.758902 | 0.003956 | 0.003950 | 0.003962 |
| test_time_generator_v6.test | RUN | 0.199620 | 0.635049 | 0.723380 | 0.001729 | 0.001788 | 0.001675 |
| test_time_generator_v6_2.test | RUN | 0.197822 | 0.606011 | 0.694012 | 0.001413 | 0.001661 | 0.001540 |
| test_time_generator_v6_3.test | RUN | 0.219010 | 0.632016 | 0.773210 | 0.004268 | 0.004047 | 0.003614 |
| test_time_generator_v7.test | RUN | 0.191002 | 0.634741 | 0.696169 | 0.001374 | 0.001403 | 0.001393 |
| test_time_generator_v7_2.test | RUN | 0.177015 | 0.557388 | 0.648019 | 0.001382 | 0.001350 | 0.001099 |
| test_time_generator_v7_3.test | RUN | 0.185641 | 0.720624 | 0.656846 | 0.002638 | 0.003001 | 0.002706 |
| test_serialization.test | RUN | 0.326631 | 1.106899 | 1.218564 | 0.001413 | 0.001353 | 0.001192 |
| test_tagging.test | RUN | 0.181995 | 0.680026 | 0.652347 | 0.001163 | 0.001262 | 0.001139 |
| test_uuid_class.test | RUN | 0.188301 | 0.599378 | 0.697446 | 0.001332 | 0.001210 | 0.001118 |
| test_uuid_in_map.test | RUN | 0.211139 | 0.691529 | 0.757212 | 0.001036 | 0.001206 | 0.001095 |
| test_hash.test | RUN | 0.207328 | 0.620404 | 0.686767 | 0.000900 | 0.001247 | 0.001128 |
| test_hash_value.test | RUN | 0.154565 | 0.432052 | 0.512519 | 0.004271 | 0.003721 | 0.004018 |
| test_std_unordered.test | RUN | 0.198550 | 0.709906 | 0.709562 | 0.001411 | 0.001371 | 0.001168 |
| test_boost_unordered.test | RUN | 0.274538 | 0.903160 | 0.927332 | 0.001284 | 0.001293 | 0.001125 |
| test_detail_md5.test | RUN | 0.128528 | 0.439139 | 0.502502 | 0.001333 | 0.001296 | 0.001168 |
| test_detail_sha1.test | RUN | 0.122984 | 0.557996 | 0.463217 | 0.008074 | 0.007919 | 0.006745 |
| test_detail_endian.test | RUN | 0.095556 | 0.312396 | 0.345282 | 0.001212 | 0.001194 | 0.001158 |
| test_detail_chacha20.test | RUN | 0.103365 | 0.394737 | 0.344836 | 0.000963 | 0.001214 | 0.001310 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.092013 | 0.220434 | 0.280719 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.091245 | 0.219842 | 0.279349 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.157109 | 0.436292 | 0.500016 | 0.001154 | 0.001262 | 0.001228 |
| test_bench_random.test | RUN | 0.176237 | 0.577582 | 0.673564 | 0.016984 | 0.017069 | 0.016737 |
| test_entropy_error.test | RUN | 0.089061 | 0.256965 | 0.308714 | 0.001191 | 0.001330 | 0.001123 |
| test_detail_random_provider.test | RUN | 0.170350 | 0.442296 | 0.583743 | 0.001268 | 0.001260 | 0.001243 |
| test_constants.test | RUN | 0.137002 | 0.424660 | 0.459614 | 0.001135 | 0.001219 | 0.001082 |
| test_uuid_cx.test | COMPILE | 0.076832 | 0.183526 | 0.227123 | — | — | — |
| test_uuid_cx2.test | RUN | 0.146243 | 0.478704 | 0.519335 | 0.001208 | 0.001242 | 0.001180 |
| test_uuid_cx3.test | RUN | 0.127568 | 0.373035 | 0.460678 | 0.001114 | 0.001166 | 0.001029 |
| test_uuid_cx3_no_simd.test | RUN | 0.116760 | 0.347696 | 0.414162 | 0.001149 | 0.001161 | 0.001084 |
| test_hash_value_cx.test | RUN | 0.116378 | 0.331581 | 0.415182 | 0.001063 | 0.001316 | 0.000778 |
| test_string_generator_cx.test | RUN | 0.138735 | 0.419914 | 0.477815 | 0.001226 | 0.001220 | 0.001159 |
| test_string_generator_cx2.test | RUN | 0.178707 | 0.518377 | 0.548696 | 0.001194 | 0.001320 | 0.001034 |
| test_constants_cx.test | RUN | 0.112867 | 0.287821 | 0.378584 | 0.001261 | 0.001332 | 0.001192 |
| test_from_chars_cx.test | RUN | 0.143523 | 0.561113 | 0.514762 | 0.001191 | 0.001286 | 0.001122 |
| test_from_chars_cx2.test | RUN | 0.148946 | 0.687005 | 0.574970 | 0.001113 | 0.001215 | 0.000974 |
| test_to_chars_cx.test | RUN | 0.153199 | 0.640937 | 0.605137 | 0.000896 | 0.001365 | 0.000855 |
| test_uuid_from_string_cx.test | RUN | 0.160294 | 0.635258 | 0.602507 | 0.001254 | 0.000950 | 0.000876 |
| quick.test | RUN | 0.163540 | 0.473855 | 0.592755 | 0.000818 | 0.000935 | 0.000806 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.010× | 1.010×, 1.010× | 1.012× |
| clang | 1.011× | 1.010×, 1.013× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45710374989).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.000808s | 0.000821s | 0.000780s | byte equality observed |
| test_alignment.test | 10 | 0.000805s | 0.000790s | 0.000828s | byte equality observed |
| test_alignment_2.test | 10 | 0.000811s | 0.000815s | 0.000844s | byte equality observed |
| test_attribute_packed.test | 10 | 0.000749s | 0.000754s | 0.000754s | byte equality observed |
| test_bench_random.test | 2 | 0.016494s | 0.016493s | 0.016503s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.000805s | 0.000800s | 0.000791s | byte equality observed |
| test_comparison.test | 10 | 0.000757s | 0.000759s | 0.000765s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.000806s | 0.000787s | 0.000829s | byte equality observed |
| test_constants.test | 10 | 0.000806s | 0.000804s | 0.000813s | byte equality observed |
| test_constants_cx.test | 10 | 0.000777s | 0.000764s | 0.000828s | byte equality observed |
| test_data.test | 10 | 0.000796s | 0.000802s | 0.000801s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.000828s | 0.000838s | 0.000800s | byte equality observed |
| test_detail_endian.test | 10 | 0.000812s | 0.000841s | 0.000823s | byte equality observed |
| test_detail_md5.test | 10 | 0.000850s | 0.000813s | 0.000845s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.000820s | 0.000833s | 0.000808s | byte equality observed |
| test_detail_sha1.test | 3 | 0.005602s | 0.006370s | 0.005712s | byte equality observed |
| test_entropy_error.test | 10 | 0.000752s | 0.000769s | 0.000752s | byte equality observed |
| test_from_chars.test | 10 | 0.000782s | 0.000777s | 0.000783s | byte equality observed |
| test_from_chars_2.test | 10 | 0.000806s | 0.000807s | 0.000813s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.000804s | 0.000821s | 0.000837s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.000809s | 0.000807s | 0.000841s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.000804s | 0.000829s | 0.000832s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.000825s | 0.000844s | 0.000804s | byte equality observed |
| test_hash.test | 10 | 0.000789s | 0.000810s | 0.000793s | byte equality observed |
| test_hash_value.test | 6 | 0.003273s | 0.003184s | 0.003120s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.000760s | 0.000773s | 0.000772s | byte equality observed |
| test_include1.test | 10 | 0.000343s | 0.000358s | 0.000798s | byte equality observed |
| test_io.test | 10 | 0.000866s | 0.000849s | 0.000834s | byte equality observed |
| test_io_2.test | 10 | 0.000886s | 0.000886s | 0.000895s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.000915s | 0.000910s | 0.000902s | byte equality observed |
| test_io_no_simd.test | 10 | 0.000878s | 0.000887s | 0.000883s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.000824s | 0.000820s | 0.000797s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.000851s | 0.000825s | 0.000811s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.000837s | 0.000836s | 0.000812s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.000840s | 0.000865s | 0.000839s | byte equality observed |
| test_namespaces.test | 10 | 0.000830s | 0.000811s | 0.000805s | byte equality observed |
| test_nil_generator.test | 10 | 0.000818s | 0.000815s | 0.000818s | byte equality observed |
| test_pragma_pack.test | 10 | 0.000774s | 0.000773s | 0.000824s | byte equality observed |
| test_random_generator.test | 5 | 0.003854s | 0.003835s | 0.003847s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.000772s | 0.000771s | 0.000772s | byte equality observed |
| test_serialization.test | 10 | 0.000872s | 0.000887s | 0.000834s | byte equality observed |
| test_std_unordered.test | 10 | 0.000882s | 0.000857s | 0.000885s | byte equality observed |
| test_string_generator.test | 10 | 0.000877s | 0.000874s | 0.000872s | byte equality observed |
| test_string_generator_2.test | 10 | 0.000845s | 0.000820s | 0.000830s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.000818s | 0.000829s | 0.000857s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.000820s | 0.000811s | 0.000830s | byte equality observed |
| test_tagging.test | 10 | 0.000847s | 0.000841s | 0.000863s | byte equality observed |
| test_time_generator.test | 10 | 0.000835s | 0.000811s | 0.000824s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001135s | 0.001220s | 0.001230s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.000997s | 0.001034s | 0.001068s | byte equality observed |
| test_time_generator_v1_3.test | 5 | 0.004395s | 0.004240s | 0.004772s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001170s | 0.001232s | 0.001260s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001015s | 0.001061s | 0.001069s | byte equality observed |
| test_time_generator_v6_3.test | 4 | 0.004657s | 0.004677s | 0.004326s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.000990s | 0.001028s | 0.001037s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.000865s | 0.000866s | 0.000868s | byte equality observed |
| test_time_generator_v7_3.test | 8 | 0.002380s | 0.002380s | 0.002374s | byte equality observed |
| test_to_chars.test | 10 | 0.000818s | 0.000831s | 0.000815s | byte equality observed |
| test_to_chars_2.test | 10 | 0.000790s | 0.000783s | 0.000791s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.000837s | 0.000850s | 0.000816s | byte equality observed |
| test_to_chars_3.test | 10 | 0.000800s | 0.000843s | 0.000848s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.000833s | 0.000824s | 0.000823s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.000862s | 0.000872s | 0.000855s | byte equality observed |
| test_uuid.test | 10 | 0.000807s | 0.000806s | 0.000788s | byte equality observed |
| test_uuid_2.test | 10 | 0.000804s | 0.000829s | 0.000799s | byte equality observed |
| test_uuid_3.test | 10 | 0.000820s | 0.000832s | 0.000798s | byte equality observed |
| test_uuid_class.test | 10 | 0.000838s | 0.000834s | 0.000828s | byte equality observed |
| test_uuid_clock.test | 10 | 0.000820s | 0.000837s | 0.000788s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.000818s | 0.000826s | 0.000809s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.000816s | 0.000830s | 0.000817s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.000814s | 0.000833s | 0.000834s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.000823s | 0.000831s | 0.000824s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.000957s | 0.000993s | 0.000997s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.000900s | 0.000888s | 0.000854s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.000818s | 0.000809s | 0.000807s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.000821s | 0.000825s | 0.000818s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.000806s | 0.000821s | 0.000824s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45710374989).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
