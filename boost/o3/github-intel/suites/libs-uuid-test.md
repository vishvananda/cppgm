# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.349120 | 0.792197 | 1.090249 | 0.000625 | 0.000525 | 0.001222 |
| test_uuid.test | RUN | 0.215951 | 0.664953 | 0.773841 | 0.001448 | 0.001351 | 0.001231 |
| test_uuid_no_simd.test | RUN | 0.216584 | 0.646193 | 0.709670 | 0.001294 | 0.001254 | 0.001160 |
| test_uuid_2.test | RUN | 0.154800 | 0.478625 | 0.514404 | 0.001395 | 0.001298 | 0.001213 |
| test_uuid_3.test | RUN | 0.128494 | 0.330682 | 0.412761 | 0.001358 | 0.001268 | 0.001151 |
| test_alignment.test | RUN | 0.114630 | 0.301262 | 0.369704 | 0.001606 | 0.001358 | 0.001188 |
| test_alignment_2.test | RUN | 0.114935 | 0.293557 | 0.376756 | 0.001366 | 0.001233 | 0.001219 |
| test_attribute_packed.test | RUN | 0.117512 | 0.298964 | 0.364873 | 0.001432 | 0.001347 | 0.001422 |
| test_pragma_pack.test | RUN | 0.114945 | 0.302280 | 0.373399 | 0.001580 | 0.001339 | 0.001101 |
| test_data.test | RUN | 0.142483 | 0.551756 | 0.524529 | 0.001241 | 0.001359 | 0.001149 |
| test_comparison.test | RUN | 0.201174 | 0.647905 | 0.715106 | 0.001489 | 0.001476 | 0.001118 |
| test_comparison_no_simd.test | RUN | 0.193911 | 0.736052 | 0.656501 | 0.001466 | 0.001318 | 0.001152 |
| test_io.test | RUN | 0.265223 | 1.253265 | 1.101507 | 0.001492 | 0.001519 | 0.001262 |
| test_io_no_simd.test | RUN | 0.256238 | 1.243437 | 1.054888 | 0.001442 | 0.001447 | 0.001258 |
| test_io_2.test | RUN | 0.205665 | 1.289806 | 0.806702 | 0.001446 | 0.001301 | 0.001201 |
| test_io_2_no_simd.test | RUN | 0.187183 | 1.228834 | 0.706921 | 0.001437 | 0.001529 | 0.001392 |
| test_to_chars.test | RUN | 0.188212 | 0.815713 | 0.738801 | 0.001436 | 0.001461 | 0.001236 |
| test_to_chars_no_simd.test | RUN | 0.184911 | 0.815019 | 0.691835 | 0.001526 | 0.001468 | 0.001358 |
| test_to_chars_2.test | RUN | 0.228525 | 1.483175 | 0.867676 | 0.001244 | 0.001289 | 0.001474 |
| test_to_chars_2_no_simd.test | RUN | 0.236624 | 1.603947 | 0.796450 | 0.001184 | 0.001246 | 0.001216 |
| test_to_chars_3.test | RUN | 0.152658 | 0.514203 | 0.511449 | 0.001464 | 0.001296 | 0.001208 |
| test_from_chars.test | RUN | 0.174686 | 0.751554 | 0.592325 | 0.001578 | 0.001169 | 0.001171 |
| test_from_chars_no_simd.test | RUN | 0.154868 | 0.598675 | 0.497957 | 0.000945 | 0.001241 | 0.001127 |
| test_from_chars_2.test | RUN | 0.169103 | 0.707605 | 0.576010 | 0.001335 | 0.001267 | 0.001276 |
| test_from_chars_2_no_simd.test | RUN | 0.147706 | 0.531911 | 0.474011 | 0.001198 | 0.001334 | 0.001018 |
| test_uuid_from_string.test | RUN | 0.199396 | 0.774401 | 0.705364 | 0.001403 | 0.001226 | 0.001305 |
| test_uuid_from_string_2.test | RUN | 0.176170 | 0.707222 | 0.606995 | 0.001398 | 0.001654 | 0.001602 |
| test_uuid_from_string_3.test | RUN | 0.179110 | 0.703514 | 0.619986 | 0.001150 | 0.001319 | 0.001288 |
| test_uuid_clock.test | RUN | 0.104284 | 0.283140 | 0.359800 | 0.001144 | 0.001234 | 0.001283 |
| test_nil_generator.test | RUN | 0.123940 | 0.326931 | 0.426281 | 0.001229 | 0.001402 | 0.001401 |
| test_string_generator.test | RUN | 0.163915 | 0.570523 | 0.599876 | 0.001585 | 0.001382 | 0.001265 |
| test_string_generator_2.test | RUN | 0.205480 | 0.790842 | 0.658980 | 0.001201 | 0.001309 | 0.001285 |
| test_random_generator.test | RUN | 0.280087 | 1.523728 | 1.004077 | 0.004295 | 0.004274 | 0.004218 |
| test_random_generator_2.test | RUN | 0.195173 | 0.586813 | 0.670361 | 0.001168 | 0.001394 | 0.001173 |
| test_name_generator.test | RUN | 0.179994 | 2.000495 | 0.737788 | 0.001211 | 0.001372 | 0.001211 |
| test_namespaces.test | RUN | 0.144263 | 0.417278 | 0.484694 | 0.001298 | 0.001372 | 0.001306 |
| test_name_generator_md5.test | RUN | 0.182797 | 0.947609 | 0.708864 | 0.001236 | 0.001437 | 0.001338 |
| test_name_generator_sha1.test | RUN | 0.174928 | 2.969137 | 0.701223 | 0.001267 | 0.001348 | 0.001230 |
| test_time_generator.test | RUN | 0.184372 | 0.588001 | 0.661237 | 0.001405 | 0.001271 | 0.001361 |
| test_time_generator_v1.test | RUN | 0.214077 | 0.657758 | 0.735543 | 0.001724 | 0.001792 | 0.001873 |
| test_time_generator_v1_2.test | RUN | 0.202626 | 0.601845 | 0.696020 | 0.001562 | 0.001738 | 0.001538 |
| test_time_generator_v1_3.test | RUN | 0.224400 | 0.643975 | 0.782702 | 0.005263 | 0.003438 | 0.004405 |
| test_time_generator_v6.test | RUN | 0.210872 | 0.643186 | 0.748010 | 0.001491 | 0.001768 | 0.001846 |
| test_time_generator_v6_2.test | RUN | 0.205040 | 0.601126 | 0.720991 | 0.001458 | 0.001651 | 0.001669 |
| test_time_generator_v6_3.test | RUN | 0.229587 | 0.639959 | 0.783708 | 0.004752 | 0.004138 | 0.004891 |
| test_time_generator_v7.test | RUN | 0.199338 | 0.640442 | 0.726502 | 0.001553 | 0.001440 | 0.001526 |
| test_time_generator_v7_2.test | RUN | 0.183936 | 0.554170 | 0.650447 | 0.001306 | 0.001369 | 0.001349 |
| test_time_generator_v7_3.test | RUN | 0.187873 | 0.729575 | 0.682016 | 0.002635 | 0.002856 | 0.002770 |
| test_serialization.test | RUN | 0.349910 | 1.101532 | 1.227487 | 0.001638 | 0.001281 | 0.001506 |
| test_tagging.test | RUN | 0.188272 | 0.675060 | 0.673886 | 0.001345 | 0.001174 | 0.001144 |
| test_uuid_class.test | RUN | 0.202171 | 0.608158 | 0.702587 | 0.001374 | 0.001098 | 0.001199 |
| test_uuid_in_map.test | RUN | 0.221184 | 0.691577 | 0.772076 | 0.001259 | 0.001227 | 0.001250 |
| test_hash.test | RUN | 0.221090 | 0.626416 | 0.715882 | 0.001270 | 0.001268 | 0.001486 |
| test_hash_value.test | RUN | 0.155209 | 0.435512 | 0.535462 | 0.004154 | 0.004162 | 0.004195 |
| test_std_unordered.test | RUN | 0.205238 | 0.710987 | 0.727889 | 0.001334 | 0.001226 | 0.001436 |
| test_boost_unordered.test | RUN | 0.299488 | 0.910183 | 0.945875 | 0.001359 | 0.001280 | 0.001321 |
| test_detail_md5.test | RUN | 0.133213 | 0.433494 | 0.533404 | 0.000979 | 0.001268 | 0.001214 |
| test_detail_sha1.test | RUN | 0.132891 | 0.566555 | 0.473813 | 0.008118 | 0.008301 | 0.006541 |
| test_detail_endian.test | RUN | 0.100199 | 0.316647 | 0.349164 | 0.001299 | 0.001255 | 0.001246 |
| test_detail_chacha20.test | RUN | 0.110174 | 0.393288 | 0.363615 | 0.001185 | 0.001218 | 0.001135 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.099182 | 0.219753 | 0.287337 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.095455 | 0.218662 | 0.292562 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.164721 | 0.441239 | 0.513415 | 0.001347 | 0.001193 | 0.001415 |
| test_bench_random.test | RUN | 0.189842 | 0.582704 | 0.693995 | 0.016458 | 0.016253 | 0.016032 |
| test_entropy_error.test | RUN | 0.094790 | 0.263505 | 0.323724 | 0.001236 | 0.001330 | 0.001220 |
| test_detail_random_provider.test | RUN | 0.178148 | 0.448408 | 0.596696 | 0.001402 | 0.001306 | 0.001197 |
| test_constants.test | RUN | 0.140916 | 0.417416 | 0.480146 | 0.001423 | 0.001265 | 0.001282 |
| test_uuid_cx.test | COMPILE | 0.082124 | 0.191295 | 0.233887 | — | — | — |
| test_uuid_cx2.test | RUN | 0.152722 | 0.482134 | 0.524862 | 0.001224 | 0.001492 | 0.001252 |
| test_uuid_cx3.test | RUN | 0.133547 | 0.368131 | 0.477046 | 0.001081 | 0.001325 | 0.001175 |
| test_uuid_cx3_no_simd.test | RUN | 0.121675 | 0.349970 | 0.421150 | 0.001209 | 0.001282 | 0.001202 |
| test_hash_value_cx.test | RUN | 0.120948 | 0.332364 | 0.412530 | 0.001288 | 0.001267 | 0.001255 |
| test_string_generator_cx.test | RUN | 0.141667 | 0.419672 | 0.484025 | 0.001322 | 0.001233 | 0.001162 |
| test_string_generator_cx2.test | RUN | 0.182878 | 0.517594 | 0.555513 | 0.001250 | 0.001333 | 0.001271 |
| test_constants_cx.test | RUN | 0.120990 | 0.286227 | 0.387564 | 0.001207 | 0.001253 | 0.001243 |
| test_from_chars_cx.test | RUN | 0.155980 | 0.560025 | 0.519206 | 0.001241 | 0.001253 | 0.001130 |
| test_from_chars_cx2.test | RUN | 0.165986 | 0.697292 | 0.575019 | 0.001466 | 0.001331 | 0.001354 |
| test_to_chars_cx.test | RUN | 0.163962 | 0.643613 | 0.617567 | 0.001616 | 0.001300 | 0.000935 |
| test_uuid_from_string_cx.test | RUN | 0.176733 | 0.653505 | 0.597398 | 0.000968 | 0.000962 | 0.000873 |
| quick.test | RUN | 0.183147 | 0.492690 | 0.557991 | 0.000966 | 0.000883 | 0.000840 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.017× | 1.020×, 1.015× | 0.997× |
| clang | 1.006× | 0.997×, 1.014× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44656576225).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.000793s | 0.000812s | 0.000798s | byte equality observed |
| test_alignment.test | 10 | 0.000817s | 0.000815s | 0.000794s | byte equality observed |
| test_alignment_2.test | 10 | 0.000828s | 0.000824s | 0.000804s | byte equality observed |
| test_attribute_packed.test | 10 | 0.000750s | 0.000742s | 0.000757s | byte equality observed |
| test_bench_random.test | 2 | 0.015677s | 0.015714s | 0.015606s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.000808s | 0.000802s | 0.000793s | byte equality observed |
| test_comparison.test | 10 | 0.000771s | 0.000769s | 0.000753s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.000846s | 0.000841s | 0.000808s | byte equality observed |
| test_constants.test | 10 | 0.000861s | 0.000858s | 0.000786s | byte equality observed |
| test_constants_cx.test | 10 | 0.000805s | 0.000787s | 0.000787s | byte equality observed |
| test_data.test | 10 | 0.000810s | 0.000794s | 0.000829s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.000837s | 0.000813s | 0.000828s | byte equality observed |
| test_detail_endian.test | 10 | 0.000828s | 0.000820s | 0.000810s | byte equality observed |
| test_detail_md5.test | 10 | 0.000837s | 0.000848s | 0.000824s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.000826s | 0.000836s | 0.000814s | byte equality observed |
| test_detail_sha1.test | 4 | 0.005345s | 0.006447s | 0.005761s | byte equality observed |
| test_entropy_error.test | 10 | 0.000771s | 0.000769s | 0.000751s | byte equality observed |
| test_from_chars.test | 10 | 0.000766s | 0.000754s | 0.000757s | byte equality observed |
| test_from_chars_2.test | 10 | 0.000819s | 0.000812s | 0.000821s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.000817s | 0.000820s | 0.000836s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.000816s | 0.000843s | 0.000806s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.000836s | 0.000833s | 0.000827s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.000824s | 0.000802s | 0.000820s | byte equality observed |
| test_hash.test | 10 | 0.000823s | 0.000829s | 0.000816s | byte equality observed |
| test_hash_value.test | 6 | 0.003257s | 0.003214s | 0.003213s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.000758s | 0.000778s | 0.000752s | byte equality observed |
| test_include1.test | 10 | 0.000342s | 0.000364s | 0.000735s | byte equality observed |
| test_io.test | 10 | 0.000842s | 0.000890s | 0.000874s | byte equality observed |
| test_io_2.test | 10 | 0.000886s | 0.000900s | 0.000881s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.000898s | 0.000936s | 0.000889s | byte equality observed |
| test_io_no_simd.test | 10 | 0.000894s | 0.000902s | 0.000874s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.000797s | 0.000807s | 0.000772s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.000836s | 0.000834s | 0.000830s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.000845s | 0.000859s | 0.000833s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.000826s | 0.000871s | 0.000839s | byte equality observed |
| test_namespaces.test | 10 | 0.000816s | 0.000841s | 0.000815s | byte equality observed |
| test_nil_generator.test | 10 | 0.000812s | 0.000832s | 0.000819s | byte equality observed |
| test_pragma_pack.test | 10 | 0.000768s | 0.000774s | 0.000743s | byte equality observed |
| test_random_generator.test | 5 | 0.003696s | 0.003742s | 0.003690s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.000778s | 0.000757s | 0.000760s | byte equality observed |
| test_serialization.test | 10 | 0.000883s | 0.000878s | 0.000899s | byte equality observed |
| test_std_unordered.test | 10 | 0.000877s | 0.000893s | 0.000875s | byte equality observed |
| test_string_generator.test | 10 | 0.000884s | 0.000891s | 0.000866s | byte equality observed |
| test_string_generator_2.test | 10 | 0.000824s | 0.000828s | 0.000823s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.000814s | 0.000795s | 0.000815s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.000812s | 0.000810s | 0.000832s | byte equality observed |
| test_tagging.test | 10 | 0.000834s | 0.000813s | 0.000819s | byte equality observed |
| test_time_generator.test | 10 | 0.000837s | 0.000829s | 0.000832s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001135s | 0.001251s | 0.001227s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001019s | 0.001050s | 0.001037s | byte equality observed |
| test_time_generator_v1_3.test | 5 | 0.004719s | 0.004646s | 0.004636s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001168s | 0.001273s | 0.001269s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001038s | 0.001066s | 0.001053s | byte equality observed |
| test_time_generator_v6_3.test | 5 | 0.004617s | 0.004861s | 0.004451s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.001001s | 0.001061s | 0.001043s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.000860s | 0.000870s | 0.000871s | byte equality observed |
| test_time_generator_v7_3.test | 8 | 0.002301s | 0.002309s | 0.002298s | byte equality observed |
| test_to_chars.test | 10 | 0.000826s | 0.000820s | 0.000813s | byte equality observed |
| test_to_chars_2.test | 10 | 0.000801s | 0.000805s | 0.000785s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.000836s | 0.000843s | 0.000822s | byte equality observed |
| test_to_chars_3.test | 10 | 0.000833s | 0.000821s | 0.000816s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.000848s | 0.000837s | 0.000830s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.000861s | 0.000883s | 0.000851s | byte equality observed |
| test_uuid.test | 10 | 0.000808s | 0.000835s | 0.000821s | byte equality observed |
| test_uuid_2.test | 10 | 0.000818s | 0.000809s | 0.000826s | byte equality observed |
| test_uuid_3.test | 10 | 0.000825s | 0.000823s | 0.000809s | byte equality observed |
| test_uuid_class.test | 10 | 0.000861s | 0.000831s | 0.000821s | byte equality observed |
| test_uuid_clock.test | 10 | 0.000830s | 0.000811s | 0.000842s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.000845s | 0.000823s | 0.000819s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.000819s | 0.000809s | 0.000838s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.000820s | 0.000822s | 0.000828s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.000829s | 0.000828s | 0.000845s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.000969s | 0.000977s | 0.001015s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.000872s | 0.000875s | 0.000881s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.000801s | 0.000827s | 0.000827s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.000799s | 0.000843s | 0.000851s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.000811s | 0.000846s | 0.000850s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44656576225).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
