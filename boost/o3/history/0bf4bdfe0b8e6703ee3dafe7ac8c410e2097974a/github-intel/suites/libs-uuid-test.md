# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.325100 | 0.813746 | 1.071555 | 0.000492 | 0.000546 | 0.001212 |
| test_uuid.test | RUN | 0.204240 | 0.679073 | 0.767220 | 0.001140 | 0.001420 | 0.001121 |
| test_uuid_no_simd.test | RUN | 0.206239 | 0.652884 | 0.695574 | 0.001216 | 0.001306 | 0.001235 |
| test_uuid_2.test | RUN | 0.145361 | 0.489128 | 0.508358 | 0.001210 | 0.001524 | 0.001131 |
| test_uuid_3.test | RUN | 0.116075 | 0.341689 | 0.409382 | 0.001057 | 0.001416 | 0.001150 |
| test_alignment.test | RUN | 0.110012 | 0.304923 | 0.366892 | 0.001100 | 0.001292 | 0.001109 |
| test_alignment_2.test | RUN | 0.107436 | 0.297847 | 0.361464 | 0.001170 | 0.001384 | 0.001192 |
| test_attribute_packed.test | RUN | 0.111447 | 0.304628 | 0.371557 | 0.001043 | 0.001422 | 0.001027 |
| test_pragma_pack.test | RUN | 0.108152 | 0.306358 | 0.371275 | 0.001075 | 0.001531 | 0.001004 |
| test_data.test | RUN | 0.131880 | 0.566587 | 0.530936 | 0.001080 | 0.001510 | 0.001081 |
| test_comparison.test | RUN | 0.190108 | 0.659961 | 0.710049 | 0.001187 | 0.001598 | 0.001077 |
| test_comparison_no_simd.test | RUN | 0.190761 | 0.748263 | 0.657752 | 0.001292 | 0.001167 | 0.001181 |
| test_io.test | RUN | 0.260672 | 1.282450 | 1.119492 | 0.001226 | 0.001608 | 0.001158 |
| test_io_no_simd.test | RUN | 0.248654 | 1.271522 | 1.041653 | 0.001073 | 0.001584 | 0.001276 |
| test_io_2.test | RUN | 0.198291 | 1.323898 | 0.773559 | 0.001248 | 0.001456 | 0.001244 |
| test_io_2_no_simd.test | RUN | 0.176972 | 1.255484 | 0.708013 | 0.001203 | 0.001776 | 0.001276 |
| test_to_chars.test | RUN | 0.179872 | 0.837286 | 0.717043 | 0.001183 | 0.001469 | 0.001182 |
| test_to_chars_no_simd.test | RUN | 0.174900 | 0.841924 | 0.692711 | 0.001142 | 0.001183 | 0.001260 |
| test_to_chars_2.test | RUN | 0.222675 | 1.524291 | 0.855997 | 0.001192 | 0.001356 | 0.001217 |
| test_to_chars_2_no_simd.test | RUN | 0.229299 | 1.629545 | 0.783462 | 0.001182 | 0.001224 | 0.001086 |
| test_to_chars_3.test | RUN | 0.145070 | 0.533161 | 0.507487 | 0.001150 | 0.001294 | 0.001069 |
| test_from_chars.test | RUN | 0.168502 | 0.765726 | 0.588797 | 0.001061 | 0.001247 | 0.001142 |
| test_from_chars_no_simd.test | RUN | 0.150336 | 0.611513 | 0.487471 | 0.001139 | 0.001384 | 0.001071 |
| test_from_chars_2.test | RUN | 0.164209 | 0.717384 | 0.570113 | 0.001102 | 0.001296 | 0.001133 |
| test_from_chars_2_no_simd.test | RUN | 0.140789 | 0.540108 | 0.471806 | 0.001185 | 0.001379 | 0.001237 |
| test_uuid_from_string.test | RUN | 0.190564 | 0.796415 | 0.709577 | 0.001180 | 0.001310 | 0.001203 |
| test_uuid_from_string_2.test | RUN | 0.167177 | 0.727760 | 0.589367 | 0.001346 | 0.001555 | 0.001302 |
| test_uuid_from_string_3.test | RUN | 0.173979 | 0.725456 | 0.622202 | 0.001283 | 0.001479 | 0.001211 |
| test_uuid_clock.test | RUN | 0.100924 | 0.288633 | 0.359235 | 0.000898 | 0.001488 | 0.001189 |
| test_nil_generator.test | RUN | 0.121016 | 0.341578 | 0.425749 | 0.001138 | 0.001367 | 0.001206 |
| test_string_generator.test | RUN | 0.160994 | 0.578543 | 0.584723 | 0.001253 | 0.001584 | 0.001270 |
| test_string_generator_2.test | RUN | 0.204293 | 0.820886 | 0.659988 | 0.001223 | 0.001480 | 0.001142 |
| test_random_generator.test | RUN | 0.261028 | 1.557119 | 1.007462 | 0.004113 | 0.004476 | 0.004234 |
| test_random_generator_2.test | RUN | 0.190679 | 0.597513 | 0.673505 | 0.001137 | 0.001523 | 0.001278 |
| test_name_generator.test | RUN | 0.173629 | 2.063996 | 0.728136 | 0.001184 | 0.001462 | 0.001246 |
| test_namespaces.test | RUN | 0.134987 | 0.431052 | 0.479034 | 0.001079 | 0.001506 | 0.001206 |
| test_name_generator_md5.test | RUN | 0.175734 | 0.970935 | 0.706691 | 0.001191 | 0.001447 | 0.001250 |
| test_name_generator_sha1.test | RUN | 0.164795 | 3.020572 | 0.696728 | 0.001209 | 0.001462 | 0.001121 |
| test_time_generator.test | RUN | 0.176578 | 0.594219 | 0.658707 | 0.001235 | 0.001578 | 0.001092 |
| test_time_generator_v1.test | RUN | 0.197143 | 0.668588 | 0.722384 | 0.001566 | 0.001944 | 0.001727 |
| test_time_generator_v1_2.test | RUN | 0.200112 | 0.614525 | 0.696193 | 0.001569 | 0.001888 | 0.001521 |
| test_time_generator_v1_3.test | RUN | 0.219639 | 0.652993 | 0.777037 | 0.003543 | 0.003400 | 0.003924 |
| test_time_generator_v6.test | RUN | 0.208633 | 0.656318 | 0.732916 | 0.001709 | 0.001720 | 0.001730 |
| test_time_generator_v6_2.test | RUN | 0.197694 | 0.615210 | 0.697313 | 0.001348 | 0.001663 | 0.001438 |
| test_time_generator_v6_3.test | RUN | 0.217533 | 0.650715 | 0.780113 | 0.002742 | 0.004135 | 0.004107 |
| test_time_generator_v7.test | RUN | 0.189132 | 0.653625 | 0.709252 | 0.001416 | 0.001650 | 0.001375 |
| test_time_generator_v7_2.test | RUN | 0.183264 | 0.571852 | 0.640457 | 0.001198 | 0.001449 | 0.000919 |
| test_time_generator_v7_3.test | RUN | 0.178379 | 0.745092 | 0.664123 | 0.002563 | 0.002875 | 0.002579 |
| test_serialization.test | RUN | 0.322203 | 1.116197 | 1.217892 | 0.001246 | 0.001625 | 0.001324 |
| test_tagging.test | RUN | 0.180719 | 0.693651 | 0.658055 | 0.001126 | 0.001245 | 0.001197 |
| test_uuid_class.test | RUN | 0.186280 | 0.617581 | 0.698759 | 0.001075 | 0.001250 | 0.001108 |
| test_uuid_in_map.test | RUN | 0.209543 | 0.705921 | 0.760761 | 0.001138 | 0.001477 | 0.001145 |
| test_hash.test | RUN | 0.203998 | 0.637054 | 0.695837 | 0.001087 | 0.001423 | 0.001139 |
| test_hash_value.test | RUN | 0.144906 | 0.449865 | 0.518930 | 0.004096 | 0.004248 | 0.004128 |
| test_std_unordered.test | RUN | 0.198083 | 0.715802 | 0.710083 | 0.001144 | 0.001579 | 0.001193 |
| test_boost_unordered.test | RUN | 0.284098 | 0.929900 | 0.932058 | 0.001054 | 0.001287 | 0.001279 |
| test_detail_md5.test | RUN | 0.126312 | 0.452626 | 0.505033 | 0.001138 | 0.001331 | 0.001124 |
| test_detail_sha1.test | RUN | 0.117361 | 0.579187 | 0.477783 | 0.008120 | 0.007805 | 0.006762 |
| test_detail_endian.test | RUN | 0.093199 | 0.320946 | 0.336478 | 0.000970 | 0.001451 | 0.001099 |
| test_detail_chacha20.test | RUN | 0.101128 | 0.408366 | 0.352877 | 0.001116 | 0.001265 | 0.001079 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.092227 | 0.222505 | 0.277343 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.088776 | 0.220900 | 0.283035 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.155992 | 0.432313 | 0.495519 | 0.001102 | 0.001380 | 0.001136 |
| test_bench_random.test | RUN | 0.172496 | 0.585364 | 0.665153 | 0.016099 | 0.016540 | 0.016053 |
| test_entropy_error.test | RUN | 0.085496 | 0.263243 | 0.309524 | 0.001093 | 0.001487 | 0.001173 |
| test_detail_random_provider.test | RUN | 0.171315 | 0.458051 | 0.586880 | 0.001198 | 0.001495 | 0.001264 |
| test_constants.test | RUN | 0.132155 | 0.427401 | 0.478485 | 0.001079 | 0.001464 | 0.001020 |
| test_uuid_cx.test | COMPILE | 0.074029 | 0.193026 | 0.230979 | — | — | — |
| test_uuid_cx2.test | RUN | 0.139265 | 0.492432 | 0.525531 | 0.001182 | 0.001358 | 0.001256 |
| test_uuid_cx3.test | RUN | 0.122792 | 0.374567 | 0.471514 | 0.000973 | 0.001150 | 0.001252 |
| test_uuid_cx3_no_simd.test | RUN | 0.114126 | 0.354267 | 0.417136 | 0.001064 | 0.001176 | 0.001107 |
| test_hash_value_cx.test | RUN | 0.118851 | 0.336762 | 0.413683 | 0.000927 | 0.001378 | 0.001102 |
| test_string_generator_cx.test | RUN | 0.136989 | 0.429293 | 0.487314 | 0.001173 | 0.001280 | 0.001229 |
| test_string_generator_cx2.test | RUN | 0.175633 | 0.527545 | 0.554217 | 0.001051 | 0.001444 | 0.001257 |
| test_constants_cx.test | RUN | 0.111576 | 0.292558 | 0.384545 | 0.001055 | 0.001276 | 0.001149 |
| test_from_chars_cx.test | RUN | 0.148133 | 0.569390 | 0.514073 | 0.001217 | 0.001442 | 0.001034 |
| test_from_chars_cx2.test | RUN | 0.156814 | 0.700895 | 0.578773 | 0.001109 | 0.001309 | 0.001165 |
| test_to_chars_cx.test | RUN | 0.150396 | 0.658220 | 0.620329 | 0.001200 | 0.001197 | 0.001406 |
| test_uuid_from_string_cx.test | RUN | 0.161845 | 0.668761 | 0.612321 | 0.000828 | 0.001012 | 0.000882 |
| quick.test | RUN | 0.158979 | 0.507909 | 0.604629 | 0.000755 | 0.000991 | 0.000834 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.005× | 1.003×, 1.008× | 1.004× |
| clang | 1.003× | 1.004×, 1.002× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44774088589).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.000806s | 0.000801s | 0.000775s | byte equality observed |
| test_alignment.test | 10 | 0.000807s | 0.000816s | 0.000815s | byte equality observed |
| test_alignment_2.test | 10 | 0.000815s | 0.000833s | 0.000789s | byte equality observed |
| test_attribute_packed.test | 10 | 0.000753s | 0.000746s | 0.000780s | byte equality observed |
| test_bench_random.test | 2 | 0.015694s | 0.015687s | 0.015679s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.000802s | 0.000800s | 0.000798s | byte equality observed |
| test_comparison.test | 10 | 0.000746s | 0.000747s | 0.000757s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.000819s | 0.000808s | 0.000780s | byte equality observed |
| test_constants.test | 10 | 0.000842s | 0.000804s | 0.000798s | byte equality observed |
| test_constants_cx.test | 10 | 0.000794s | 0.000813s | 0.000805s | byte equality observed |
| test_data.test | 10 | 0.000813s | 0.000819s | 0.000807s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.000847s | 0.000802s | 0.000806s | byte equality observed |
| test_detail_endian.test | 10 | 0.000839s | 0.000818s | 0.000826s | byte equality observed |
| test_detail_md5.test | 10 | 0.000845s | 0.000830s | 0.000853s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.000849s | 0.000854s | 0.000810s | byte equality observed |
| test_detail_sha1.test | 3 | 0.005371s | 0.006389s | 0.005645s | byte equality observed |
| test_entropy_error.test | 10 | 0.000776s | 0.000748s | 0.000772s | byte equality observed |
| test_from_chars.test | 10 | 0.000792s | 0.000765s | 0.000823s | byte equality observed |
| test_from_chars_2.test | 10 | 0.000809s | 0.000794s | 0.000833s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.000832s | 0.000809s | 0.000833s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.000813s | 0.000824s | 0.000822s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.000801s | 0.000834s | 0.000824s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.000803s | 0.000803s | 0.000857s | byte equality observed |
| test_hash.test | 8 | 0.000782s | 0.000826s | 0.000803s | byte equality observed |
| test_hash_value.test | 6 | 0.003264s | 0.003187s | 0.003133s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.000748s | 0.000765s | 0.000770s | byte equality observed |
| test_include1.test | 10 | 0.000340s | 0.000326s | 0.000763s | byte equality observed |
| test_io.test | 10 | 0.000852s | 0.000857s | 0.000824s | byte equality observed |
| test_io_2.test | 10 | 0.000898s | 0.000902s | 0.000890s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.000908s | 0.000903s | 0.000933s | byte equality observed |
| test_io_no_simd.test | 10 | 0.000850s | 0.000883s | 0.000852s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.000798s | 0.000780s | 0.000818s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.000824s | 0.000854s | 0.000814s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.000846s | 0.000836s | 0.000830s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.000834s | 0.000840s | 0.000873s | byte equality observed |
| test_namespaces.test | 10 | 0.000827s | 0.000819s | 0.000829s | byte equality observed |
| test_nil_generator.test | 10 | 0.000804s | 0.000807s | 0.000818s | byte equality observed |
| test_pragma_pack.test | 10 | 0.000770s | 0.000777s | 0.000780s | byte equality observed |
| test_random_generator.test | 5 | 0.003697s | 0.003719s | 0.003701s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.000783s | 0.000749s | 0.000747s | byte equality observed |
| test_serialization.test | 10 | 0.000911s | 0.000877s | 0.000879s | byte equality observed |
| test_std_unordered.test | 10 | 0.000893s | 0.000871s | 0.000901s | byte equality observed |
| test_string_generator.test | 10 | 0.000885s | 0.000866s | 0.000893s | byte equality observed |
| test_string_generator_2.test | 10 | 0.000861s | 0.000838s | 0.000837s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.000836s | 0.000817s | 0.000823s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.000849s | 0.000827s | 0.000834s | byte equality observed |
| test_tagging.test | 10 | 0.000839s | 0.000854s | 0.000844s | byte equality observed |
| test_time_generator.test | 10 | 0.000841s | 0.000864s | 0.000844s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001136s | 0.001214s | 0.001232s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001018s | 0.001040s | 0.001056s | byte equality observed |
| test_time_generator_v1_3.test | 5 | 0.004629s | 0.003948s | 0.004718s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001174s | 0.001243s | 0.001264s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001015s | 0.001035s | 0.001053s | byte equality observed |
| test_time_generator_v6_3.test | 5 | 0.004780s | 0.004799s | 0.004785s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.000993s | 0.001046s | 0.001048s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.000868s | 0.000857s | 0.000860s | byte equality observed |
| test_time_generator_v7_3.test | 8 | 0.002287s | 0.002295s | 0.002290s | byte equality observed |
| test_to_chars.test | 10 | 0.000830s | 0.000817s | 0.000815s | byte equality observed |
| test_to_chars_2.test | 10 | 0.000800s | 0.000802s | 0.000796s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.000852s | 0.000841s | 0.000831s | byte equality observed |
| test_to_chars_3.test | 10 | 0.000833s | 0.000834s | 0.000832s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.000850s | 0.000845s | 0.000831s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.000872s | 0.000859s | 0.000862s | byte equality observed |
| test_uuid.test | 10 | 0.000795s | 0.000797s | 0.000834s | byte equality observed |
| test_uuid_2.test | 10 | 0.000822s | 0.000811s | 0.000832s | byte equality observed |
| test_uuid_3.test | 10 | 0.000817s | 0.000797s | 0.000841s | byte equality observed |
| test_uuid_class.test | 10 | 0.000834s | 0.000839s | 0.000821s | byte equality observed |
| test_uuid_clock.test | 10 | 0.000812s | 0.000775s | 0.000824s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.000846s | 0.000817s | 0.000850s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.000827s | 0.000806s | 0.000800s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.000811s | 0.000818s | 0.000823s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.000837s | 0.000816s | 0.000828s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.000980s | 0.000996s | 0.000994s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.000881s | 0.000869s | 0.000871s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.000822s | 0.000798s | 0.000792s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.000838s | 0.000808s | 0.000803s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.000821s | 0.000820s | 0.000794s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44774088589).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
