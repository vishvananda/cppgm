# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.322913 | 0.803677 | 1.065941 | 0.000467 | 0.000541 | 0.001156 |
| test_uuid.test | RUN | 0.211588 | 0.661226 | 0.782685 | 0.001199 | 0.001446 | 0.001145 |
| test_uuid_no_simd.test | RUN | 0.203697 | 0.656548 | 0.688213 | 0.001230 | 0.001227 | 0.001109 |
| test_uuid_2.test | RUN | 0.144921 | 0.483138 | 0.514609 | 0.001155 | 0.001305 | 0.001003 |
| test_uuid_3.test | RUN | 0.124737 | 0.331746 | 0.408705 | 0.001074 | 0.001331 | 0.001046 |
| test_alignment.test | RUN | 0.114041 | 0.298412 | 0.364323 | 0.001203 | 0.001254 | 0.001123 |
| test_alignment_2.test | RUN | 0.110959 | 0.297528 | 0.364949 | 0.001241 | 0.001169 | 0.001081 |
| test_attribute_packed.test | RUN | 0.113182 | 0.298777 | 0.371393 | 0.001102 | 0.001373 | 0.001169 |
| test_pragma_pack.test | RUN | 0.112300 | 0.300471 | 0.367648 | 0.001295 | 0.001405 | 0.001098 |
| test_data.test | RUN | 0.133422 | 0.563289 | 0.533351 | 0.001146 | 0.001290 | 0.001255 |
| test_comparison.test | RUN | 0.194884 | 0.658680 | 0.720276 | 0.001295 | 0.001332 | 0.001108 |
| test_comparison_no_simd.test | RUN | 0.190317 | 0.738304 | 0.652174 | 0.001186 | 0.001184 | 0.001237 |
| test_io.test | RUN | 0.256868 | 1.276945 | 1.100116 | 0.001244 | 0.001625 | 0.001186 |
| test_io_no_simd.test | RUN | 0.248829 | 1.267063 | 1.053298 | 0.001088 | 0.001525 | 0.001236 |
| test_io_2.test | RUN | 0.200625 | 1.323340 | 0.761593 | 0.001259 | 0.001458 | 0.001280 |
| test_io_2_no_simd.test | RUN | 0.181963 | 1.249414 | 0.696644 | 0.001293 | 0.001343 | 0.001101 |
| test_to_chars.test | RUN | 0.183013 | 0.826923 | 0.714598 | 0.001403 | 0.001569 | 0.001159 |
| test_to_chars_no_simd.test | RUN | 0.176465 | 0.827029 | 0.689186 | 0.001198 | 0.001420 | 0.001210 |
| test_to_chars_2.test | RUN | 0.220357 | 1.506369 | 0.843293 | 0.001258 | 0.001253 | 0.001073 |
| test_to_chars_2_no_simd.test | RUN | 0.229682 | 1.632213 | 0.785111 | 0.001061 | 0.001239 | 0.001052 |
| test_to_chars_3.test | RUN | 0.144703 | 0.524426 | 0.523029 | 0.001132 | 0.001505 | 0.001061 |
| test_from_chars.test | RUN | 0.172536 | 0.774285 | 0.585406 | 0.001444 | 0.001380 | 0.001090 |
| test_from_chars_no_simd.test | RUN | 0.147015 | 0.605610 | 0.488834 | 0.001264 | 0.001116 | 0.001136 |
| test_from_chars_2.test | RUN | 0.163186 | 0.712277 | 0.566536 | 0.001144 | 0.001318 | 0.001116 |
| test_from_chars_2_no_simd.test | RUN | 0.149322 | 0.543741 | 0.468539 | 0.001366 | 0.001558 | 0.001057 |
| test_uuid_from_string.test | RUN | 0.195334 | 0.783160 | 0.700311 | 0.001285 | 0.001266 | 0.001102 |
| test_uuid_from_string_2.test | RUN | 0.178446 | 0.717004 | 0.591617 | 0.001435 | 0.001366 | 0.001364 |
| test_uuid_from_string_3.test | RUN | 0.174062 | 0.712101 | 0.609320 | 0.001001 | 0.001420 | 0.001164 |
| test_uuid_clock.test | RUN | 0.102256 | 0.288764 | 0.358638 | 0.001079 | 0.001340 | 0.001210 |
| test_nil_generator.test | RUN | 0.121048 | 0.336244 | 0.425134 | 0.001169 | 0.001302 | 0.001213 |
| test_string_generator.test | RUN | 0.163716 | 0.568309 | 0.575063 | 0.001183 | 0.001475 | 0.001215 |
| test_string_generator_2.test | RUN | 0.200139 | 0.798206 | 0.652207 | 0.001164 | 0.001138 | 0.001145 |
| test_random_generator.test | RUN | 0.265106 | 1.541475 | 0.987729 | 0.004355 | 0.004555 | 0.004160 |
| test_random_generator_2.test | RUN | 0.192193 | 0.595294 | 0.660516 | 0.001139 | 0.001386 | 0.001121 |
| test_name_generator.test | RUN | 0.181353 | 2.011800 | 0.729631 | 0.001073 | 0.001392 | 0.001250 |
| test_namespaces.test | RUN | 0.139412 | 0.418057 | 0.481007 | 0.001223 | 0.001514 | 0.001147 |
| test_name_generator_md5.test | RUN | 0.183304 | 0.950144 | 0.681807 | 0.001239 | 0.001354 | 0.001138 |
| test_name_generator_sha1.test | RUN | 0.171455 | 2.955981 | 0.690367 | 0.001210 | 0.001482 | 0.001340 |
| test_time_generator.test | RUN | 0.181578 | 0.584731 | 0.640971 | 0.001142 | 0.001526 | 0.001178 |
| test_time_generator_v1.test | RUN | 0.201707 | 0.654631 | 0.734145 | 0.001566 | 0.002023 | 0.001661 |
| test_time_generator_v1_2.test | RUN | 0.198798 | 0.613400 | 0.668412 | 0.001434 | 0.001816 | 0.001433 |
| test_time_generator_v1_3.test | RUN | 0.220752 | 0.645357 | 0.770688 | 0.003610 | 0.004038 | 0.003148 |
| test_time_generator_v6.test | RUN | 0.202364 | 0.657310 | 0.740282 | 0.001642 | 0.001983 | 0.001623 |
| test_time_generator_v6_2.test | RUN | 0.195941 | 0.614382 | 0.678301 | 0.001403 | 0.001713 | 0.001414 |
| test_time_generator_v6_3.test | RUN | 0.220967 | 0.649681 | 0.763113 | 0.004009 | 0.004040 | 0.004541 |
| test_time_generator_v7.test | RUN | 0.194354 | 0.651879 | 0.710198 | 0.001376 | 0.001708 | 0.001442 |
| test_time_generator_v7_2.test | RUN | 0.180212 | 0.574115 | 0.635994 | 0.001179 | 0.001606 | 0.001281 |
| test_time_generator_v7_3.test | RUN | 0.185723 | 0.735322 | 0.660433 | 0.002601 | 0.002910 | 0.002670 |
| test_serialization.test | RUN | 0.328846 | 1.119019 | 1.219838 | 0.001411 | 0.001398 | 0.001234 |
| test_tagging.test | RUN | 0.187734 | 0.683256 | 0.656664 | 0.001614 | 0.001540 | 0.001116 |
| test_uuid_class.test | RUN | 0.199389 | 0.609411 | 0.691084 | 0.001358 | 0.001276 | 0.001115 |
| test_uuid_in_map.test | RUN | 0.213279 | 0.710131 | 0.758897 | 0.001221 | 0.001424 | 0.001062 |
| test_hash.test | RUN | 0.215727 | 0.631359 | 0.708390 | 0.001279 | 0.001435 | 0.001186 |
| test_hash_value.test | RUN | 0.153374 | 0.434201 | 0.515691 | 0.004170 | 0.004424 | 0.003913 |
| test_std_unordered.test | RUN | 0.203621 | 0.711349 | 0.712478 | 0.001327 | 0.001405 | 0.001211 |
| test_boost_unordered.test | RUN | 0.293041 | 0.920306 | 0.912556 | 0.001188 | 0.001370 | 0.001190 |
| test_detail_md5.test | RUN | 0.135778 | 0.449770 | 0.515691 | 0.001296 | 0.001557 | 0.001114 |
| test_detail_sha1.test | RUN | 0.128257 | 0.572803 | 0.459156 | 0.007973 | 0.008304 | 0.006941 |
| test_detail_endian.test | RUN | 0.099031 | 0.325539 | 0.343973 | 0.001290 | 0.001259 | 0.001129 |
| test_detail_chacha20.test | RUN | 0.110857 | 0.400960 | 0.347028 | 0.001094 | 0.001336 | 0.001133 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.095015 | 0.226766 | 0.279118 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.092860 | 0.223934 | 0.282305 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.161926 | 0.447999 | 0.499458 | 0.001232 | 0.001342 | 0.001165 |
| test_bench_random.test | RUN | 0.180235 | 0.588659 | 0.676974 | 0.016734 | 0.016994 | 0.016434 |
| test_entropy_error.test | RUN | 0.092403 | 0.263774 | 0.313093 | 0.001066 | 0.001420 | 0.000805 |
| test_detail_random_provider.test | RUN | 0.173787 | 0.450152 | 0.581825 | 0.001093 | 0.001283 | 0.001228 |
| test_constants.test | RUN | 0.138085 | 0.428492 | 0.476047 | 0.001075 | 0.001492 | 0.001060 |
| test_uuid_cx.test | COMPILE | 0.078576 | 0.193551 | 0.242738 | — | — | — |
| test_uuid_cx2.test | RUN | 0.149905 | 0.488660 | 0.525535 | 0.001190 | 0.001303 | 0.001111 |
| test_uuid_cx3.test | RUN | 0.128355 | 0.372519 | 0.460297 | 0.001418 | 0.001247 | 0.000985 |
| test_uuid_cx3_no_simd.test | RUN | 0.120059 | 0.354303 | 0.405424 | 0.001160 | 0.001242 | 0.001133 |
| test_hash_value_cx.test | RUN | 0.119023 | 0.338055 | 0.408664 | 0.001198 | 0.001399 | 0.001070 |
| test_string_generator_cx.test | RUN | 0.142561 | 0.424749 | 0.482386 | 0.001122 | 0.001303 | 0.001188 |
| test_string_generator_cx2.test | RUN | 0.178619 | 0.527210 | 0.552882 | 0.001395 | 0.001419 | 0.001088 |
| test_constants_cx.test | RUN | 0.115494 | 0.286693 | 0.380171 | 0.001193 | 0.001222 | 0.001072 |
| test_from_chars_cx.test | RUN | 0.154128 | 0.563055 | 0.507992 | 0.001150 | 0.001526 | 0.001086 |
| test_from_chars_cx2.test | RUN | 0.160522 | 0.702700 | 0.569115 | 0.001402 | 0.001563 | 0.001122 |
| test_to_chars_cx.test | RUN | 0.160035 | 0.653608 | 0.609811 | 0.001294 | 0.000927 | 0.000863 |
| test_uuid_from_string_cx.test | RUN | 0.167644 | 0.650016 | 0.560501 | 0.000861 | 0.000968 | 0.000813 |
| quick.test | RUN | 0.174790 | 0.506497 | 0.568805 | 0.000847 | 0.000866 | 0.000743 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.006× | 1.000×, 1.012× | 0.998× |
| clang | 1.004× | 0.997×, 1.012× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44801983152).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.000816s | 0.000810s | 0.000788s | byte equality observed |
| test_alignment.test | 10 | 0.000796s | 0.000797s | 0.000819s | byte equality observed |
| test_alignment_2.test | 10 | 0.000786s | 0.000826s | 0.000795s | byte equality observed |
| test_attribute_packed.test | 10 | 0.000752s | 0.000760s | 0.000743s | byte equality observed |
| test_bench_random.test | 2 | 0.016389s | 0.016406s | 0.016396s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.000804s | 0.000785s | 0.000772s | byte equality observed |
| test_comparison.test | 10 | 0.000737s | 0.000757s | 0.000733s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.000789s | 0.000793s | 0.000771s | byte equality observed |
| test_constants.test | 10 | 0.000823s | 0.000801s | 0.000806s | byte equality observed |
| test_constants_cx.test | 10 | 0.000789s | 0.000804s | 0.000820s | byte equality observed |
| test_data.test | 10 | 0.000783s | 0.000794s | 0.000829s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.000817s | 0.000831s | 0.000841s | byte equality observed |
| test_detail_endian.test | 10 | 0.000809s | 0.000820s | 0.000836s | byte equality observed |
| test_detail_md5.test | 10 | 0.000830s | 0.000827s | 0.000843s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.000819s | 0.000819s | 0.000843s | byte equality observed |
| test_detail_sha1.test | 4 | 0.005313s | 0.006325s | 0.005652s | byte equality observed |
| test_entropy_error.test | 10 | 0.000763s | 0.000759s | 0.000757s | byte equality observed |
| test_from_chars.test | 10 | 0.000770s | 0.000742s | 0.000773s | byte equality observed |
| test_from_chars_2.test | 10 | 0.000816s | 0.000810s | 0.000803s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.000834s | 0.000818s | 0.000827s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.000810s | 0.000815s | 0.000812s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.000800s | 0.000823s | 0.000833s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.000833s | 0.000816s | 0.000822s | byte equality observed |
| test_hash.test | 9 | 0.000801s | 0.000819s | 0.000812s | byte equality observed |
| test_hash_value.test | 6 | 0.003210s | 0.003219s | 0.003123s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.000765s | 0.000763s | 0.000775s | byte equality observed |
| test_include1.test | 10 | 0.000356s | 0.000341s | 0.000766s | byte equality observed |
| test_io.test | 10 | 0.000857s | 0.000849s | 0.000863s | byte equality observed |
| test_io_2.test | 10 | 0.000911s | 0.000883s | 0.000904s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.000897s | 0.000908s | 0.000881s | byte equality observed |
| test_io_no_simd.test | 10 | 0.000862s | 0.000865s | 0.000854s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.000829s | 0.000789s | 0.000794s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.000849s | 0.000824s | 0.000811s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.000851s | 0.000814s | 0.000838s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.000840s | 0.000844s | 0.000852s | byte equality observed |
| test_namespaces.test | 10 | 0.000826s | 0.000798s | 0.000843s | byte equality observed |
| test_nil_generator.test | 10 | 0.000805s | 0.000809s | 0.000828s | byte equality observed |
| test_pragma_pack.test | 10 | 0.000778s | 0.000767s | 0.000775s | byte equality observed |
| test_random_generator.test | 5 | 0.003830s | 0.003830s | 0.003801s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.000768s | 0.000755s | 0.000750s | byte equality observed |
| test_serialization.test | 10 | 0.000866s | 0.000871s | 0.000851s | byte equality observed |
| test_std_unordered.test | 10 | 0.000863s | 0.000880s | 0.000883s | byte equality observed |
| test_string_generator.test | 10 | 0.000856s | 0.000875s | 0.000884s | byte equality observed |
| test_string_generator_2.test | 10 | 0.000826s | 0.000847s | 0.000837s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.000826s | 0.000820s | 0.000802s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.000825s | 0.000827s | 0.000808s | byte equality observed |
| test_tagging.test | 10 | 0.000852s | 0.000826s | 0.000819s | byte equality observed |
| test_time_generator.test | 10 | 0.000831s | 0.000851s | 0.000852s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001129s | 0.001234s | 0.001242s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.000988s | 0.001034s | 0.001023s | byte equality observed |
| test_time_generator_v1_3.test | 5 | 0.004474s | 0.004278s | 0.004305s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001160s | 0.001250s | 0.001247s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001005s | 0.001054s | 0.001030s | byte equality observed |
| test_time_generator_v6_3.test | 4 | 0.004587s | 0.004387s | 0.004507s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.000999s | 0.001032s | 0.001027s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.000865s | 0.000863s | 0.000865s | byte equality observed |
| test_time_generator_v7_3.test | 8 | 0.002376s | 0.002365s | 0.002367s | byte equality observed |
| test_to_chars.test | 10 | 0.000823s | 0.000807s | 0.000805s | byte equality observed |
| test_to_chars_2.test | 10 | 0.000798s | 0.000800s | 0.000788s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.000823s | 0.000857s | 0.000843s | byte equality observed |
| test_to_chars_3.test | 10 | 0.000819s | 0.000835s | 0.000847s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.000816s | 0.000807s | 0.000816s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.000848s | 0.000860s | 0.000857s | byte equality observed |
| test_uuid.test | 10 | 0.000812s | 0.000796s | 0.000797s | byte equality observed |
| test_uuid_2.test | 10 | 0.000816s | 0.000796s | 0.000806s | byte equality observed |
| test_uuid_3.test | 10 | 0.000804s | 0.000804s | 0.000804s | byte equality observed |
| test_uuid_class.test | 10 | 0.000831s | 0.000848s | 0.000846s | byte equality observed |
| test_uuid_clock.test | 10 | 0.000803s | 0.000778s | 0.000824s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.000814s | 0.000794s | 0.000842s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.000796s | 0.000818s | 0.000827s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.000797s | 0.000813s | 0.000815s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.000819s | 0.000808s | 0.000820s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.000963s | 0.000950s | 0.000979s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.000854s | 0.000861s | 0.000896s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.000824s | 0.000784s | 0.000804s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.000825s | 0.000803s | 0.000808s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.000824s | 0.000792s | 0.000778s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44801983152).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
