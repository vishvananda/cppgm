# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.341862 | 0.808174 | 1.109985 | 0.000514 | 0.000568 | 0.001435 |
| test_uuid.test | RUN | 0.208515 | 0.670847 | 0.800950 | 0.001394 | 0.001288 | 0.001472 |
| test_uuid_no_simd.test | RUN | 0.205492 | 0.643820 | 0.713637 | 0.001346 | 0.001242 | 0.001353 |
| test_uuid_2.test | RUN | 0.151272 | 0.487956 | 0.531991 | 0.001216 | 0.001340 | 0.001365 |
| test_uuid_3.test | RUN | 0.127065 | 0.339877 | 0.427512 | 0.001289 | 0.001401 | 0.001236 |
| test_alignment.test | RUN | 0.115743 | 0.307656 | 0.373621 | 0.001328 | 0.001102 | 0.001376 |
| test_alignment_2.test | RUN | 0.115467 | 0.291550 | 0.375461 | 0.001146 | 0.001380 | 0.001265 |
| test_attribute_packed.test | RUN | 0.115242 | 0.303044 | 0.377050 | 0.001158 | 0.001329 | 0.001036 |
| test_pragma_pack.test | RUN | 0.117292 | 0.302432 | 0.380519 | 0.001250 | 0.001250 | 0.001118 |
| test_data.test | RUN | 0.140412 | 0.560753 | 0.542944 | 0.001443 | 0.001164 | 0.001364 |
| test_comparison.test | RUN | 0.199776 | 0.647216 | 0.727504 | 0.001359 | 0.001352 | 0.001222 |
| test_comparison_no_simd.test | RUN | 0.198203 | 0.735894 | 0.667727 | 0.001377 | 0.001392 | 0.001232 |
| test_io.test | RUN | 0.262064 | 1.271131 | 1.130293 | 0.001407 | 0.001523 | 0.001230 |
| test_io_no_simd.test | RUN | 0.259158 | 1.251831 | 1.068752 | 0.001289 | 0.001416 | 0.001428 |
| test_io_2.test | RUN | 0.200479 | 1.301197 | 0.784477 | 0.001347 | 0.001343 | 0.001147 |
| test_io_2_no_simd.test | RUN | 0.183561 | 1.234634 | 0.719902 | 0.001478 | 0.001550 | 0.001332 |
| test_to_chars.test | RUN | 0.186713 | 0.825371 | 0.729674 | 0.001319 | 0.001470 | 0.001401 |
| test_to_chars_no_simd.test | RUN | 0.184404 | 0.830469 | 0.706242 | 0.001432 | 0.001500 | 0.001256 |
| test_to_chars_2.test | RUN | 0.226777 | 1.509152 | 0.867025 | 0.001326 | 0.001243 | 0.001250 |
| test_to_chars_2_no_simd.test | RUN | 0.236588 | 1.603289 | 0.786148 | 0.001318 | 0.001351 | 0.001225 |
| test_to_chars_3.test | RUN | 0.152782 | 0.525528 | 0.526603 | 0.001302 | 0.001412 | 0.001196 |
| test_from_chars.test | RUN | 0.170646 | 0.759176 | 0.596789 | 0.001233 | 0.001100 | 0.001284 |
| test_from_chars_no_simd.test | RUN | 0.136229 | 0.608064 | 0.504864 | 0.001278 | 0.001190 | 0.001253 |
| test_from_chars_2.test | RUN | 0.163047 | 0.708708 | 0.586384 | 0.001375 | 0.001215 | 0.001184 |
| test_from_chars_2_no_simd.test | RUN | 0.133998 | 0.533655 | 0.474336 | 0.001126 | 0.001461 | 0.001331 |
| test_uuid_from_string.test | RUN | 0.191316 | 0.774876 | 0.723159 | 0.001402 | 0.001356 | 0.001308 |
| test_uuid_from_string_2.test | RUN | 0.170137 | 0.717246 | 0.599035 | 0.001660 | 0.001728 | 0.001708 |
| test_uuid_from_string_3.test | RUN | 0.167930 | 0.709057 | 0.633239 | 0.001252 | 0.001383 | 0.001312 |
| test_uuid_clock.test | RUN | 0.103094 | 0.286075 | 0.362031 | 0.001213 | 0.001440 | 0.001366 |
| test_nil_generator.test | RUN | 0.124757 | 0.338687 | 0.422458 | 0.001431 | 0.001386 | 0.001448 |
| test_string_generator.test | RUN | 0.162881 | 0.569406 | 0.604689 | 0.001243 | 0.001401 | 0.001543 |
| test_string_generator_2.test | RUN | 0.204252 | 0.796818 | 0.678697 | 0.001290 | 0.001283 | 0.001281 |
| test_random_generator.test | RUN | 0.276454 | 1.556008 | 0.995150 | 0.004218 | 0.004230 | 0.004233 |
| test_random_generator_2.test | RUN | 0.197175 | 0.586537 | 0.680718 | 0.001248 | 0.001535 | 0.001409 |
| test_name_generator.test | RUN | 0.179607 | 2.034212 | 0.734613 | 0.001215 | 0.001497 | 0.001276 |
| test_namespaces.test | RUN | 0.141405 | 0.426061 | 0.474114 | 0.001260 | 0.001339 | 0.001267 |
| test_name_generator_md5.test | RUN | 0.183686 | 0.953894 | 0.718167 | 0.001278 | 0.001594 | 0.001333 |
| test_name_generator_sha1.test | RUN | 0.176764 | 2.982656 | 0.703254 | 0.001291 | 0.001304 | 0.001325 |
| test_time_generator.test | RUN | 0.182234 | 0.591895 | 0.672849 | 0.001330 | 0.001501 | 0.001325 |
| test_time_generator_v1.test | RUN | 0.202698 | 0.643631 | 0.752195 | 0.001590 | 0.001842 | 0.001961 |
| test_time_generator_v1_2.test | RUN | 0.203404 | 0.614368 | 0.702177 | 0.001620 | 0.001859 | 0.001743 |
| test_time_generator_v1_3.test | RUN | 0.226387 | 0.642105 | 0.771337 | 0.006166 | 0.004369 | 0.003874 |
| test_time_generator_v6.test | RUN | 0.204568 | 0.645226 | 0.746331 | 0.001670 | 0.001692 | 0.001738 |
| test_time_generator_v6_2.test | RUN | 0.200015 | 0.618065 | 0.709260 | 0.001472 | 0.001696 | 0.001776 |
| test_time_generator_v6_3.test | RUN | 0.223938 | 0.644998 | 0.790850 | 0.004056 | 0.003940 | 0.004018 |
| test_time_generator_v7.test | RUN | 0.196598 | 0.638604 | 0.713548 | 0.001644 | 0.001660 | 0.001564 |
| test_time_generator_v7_2.test | RUN | 0.183018 | 0.565388 | 0.656455 | 0.001092 | 0.001489 | 0.001365 |
| test_time_generator_v7_3.test | RUN | 0.188584 | 0.716401 | 0.673344 | 0.002617 | 0.002793 | 0.003110 |
| test_serialization.test | RUN | 0.339457 | 1.108165 | 1.254262 | 0.001623 | 0.001348 | 0.001437 |
| test_tagging.test | RUN | 0.193050 | 0.682849 | 0.666768 | 0.001200 | 0.001118 | 0.001260 |
| test_uuid_class.test | RUN | 0.194205 | 0.607946 | 0.710367 | 0.001247 | 0.001214 | 0.001201 |
| test_uuid_in_map.test | RUN | 0.214989 | 0.699506 | 0.773728 | 0.001283 | 0.001473 | 0.001407 |
| test_hash.test | RUN | 0.216191 | 0.631533 | 0.715922 | 0.001362 | 0.001321 | 0.001266 |
| test_hash_value.test | RUN | 0.156413 | 0.438089 | 0.530175 | 0.004363 | 0.004261 | 0.004109 |
| test_std_unordered.test | RUN | 0.209060 | 0.722714 | 0.736761 | 0.001303 | 0.001376 | 0.001361 |
| test_boost_unordered.test | RUN | 0.284995 | 0.924706 | 0.947339 | 0.001496 | 0.001212 | 0.001380 |
| test_detail_md5.test | RUN | 0.137014 | 0.439503 | 0.528570 | 0.001252 | 0.001228 | 0.001232 |
| test_detail_sha1.test | RUN | 0.129715 | 0.573224 | 0.482346 | 0.007914 | 0.008460 | 0.007078 |
| test_detail_endian.test | RUN | 0.100089 | 0.326249 | 0.348717 | 0.001257 | 0.001453 | 0.001238 |
| test_detail_chacha20.test | RUN | 0.108830 | 0.399607 | 0.357089 | 0.001335 | 0.001384 | 0.001124 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.096079 | 0.226444 | 0.287820 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.093976 | 0.223356 | 0.289835 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.164236 | 0.445574 | 0.511323 | 0.001411 | 0.001264 | 0.001172 |
| test_bench_random.test | RUN | 0.185427 | 0.584088 | 0.685619 | 0.015697 | 0.015976 | 0.016022 |
| test_entropy_error.test | RUN | 0.090715 | 0.263463 | 0.308693 | 0.001255 | 0.001412 | 0.001316 |
| test_detail_random_provider.test | RUN | 0.177395 | 0.452189 | 0.594552 | 0.001381 | 0.001327 | 0.001420 |
| test_constants.test | RUN | 0.140648 | 0.417254 | 0.483975 | 0.001342 | 0.001585 | 0.001106 |
| test_uuid_cx.test | COMPILE | 0.079220 | 0.190978 | 0.230579 | — | — | — |
| test_uuid_cx2.test | RUN | 0.152728 | 0.489923 | 0.531675 | 0.001338 | 0.001012 | 0.001162 |
| test_uuid_cx3.test | RUN | 0.128313 | 0.373257 | 0.475134 | 0.001212 | 0.001329 | 0.001191 |
| test_uuid_cx3_no_simd.test | RUN | 0.123242 | 0.352747 | 0.414637 | 0.001123 | 0.001218 | 0.001339 |
| test_hash_value_cx.test | RUN | 0.122103 | 0.335729 | 0.418867 | 0.001219 | 0.001447 | 0.001195 |
| test_string_generator_cx.test | RUN | 0.140594 | 0.429823 | 0.482778 | 0.001490 | 0.001355 | 0.001257 |
| test_string_generator_cx2.test | RUN | 0.179926 | 0.523870 | 0.553862 | 0.001385 | 0.001400 | 0.001152 |
| test_constants_cx.test | RUN | 0.113250 | 0.290634 | 0.385160 | 0.001245 | 0.001228 | 0.001203 |
| test_from_chars_cx.test | RUN | 0.135458 | 0.568995 | 0.525865 | 0.001101 | 0.001572 | 0.001324 |
| test_from_chars_cx2.test | RUN | 0.153147 | 0.707800 | 0.580599 | 0.001318 | 0.001203 | 0.001128 |
| test_to_chars_cx.test | RUN | 0.158226 | 0.659242 | 0.616438 | 0.001241 | 0.001367 | 0.000822 |
| test_uuid_from_string_cx.test | RUN | 0.162532 | 0.653687 | 0.607752 | 0.000858 | 0.000966 | 0.000868 |
| quick.test | RUN | 0.177640 | 0.506950 | 0.589806 | 0.000895 | 0.000970 | 0.000874 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.005× | 1.005×, 1.005× | 0.990× |
| clang | 1.001× | 1.003×, 0.999× | 1.015× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45697047144).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.000796s | 0.000841s | 0.000790s | byte equality observed |
| test_alignment.test | 10 | 0.000810s | 0.000813s | 0.000830s | byte equality observed |
| test_alignment_2.test | 10 | 0.000830s | 0.000818s | 0.000808s | byte equality observed |
| test_attribute_packed.test | 10 | 0.000757s | 0.000740s | 0.000768s | byte equality observed |
| test_bench_random.test | 2 | 0.015356s | 0.015345s | 0.015320s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.000814s | 0.000794s | 0.000795s | byte equality observed |
| test_comparison.test | 10 | 0.000757s | 0.000735s | 0.000773s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.000832s | 0.000824s | 0.000795s | byte equality observed |
| test_constants.test | 10 | 0.000824s | 0.000818s | 0.000787s | byte equality observed |
| test_constants_cx.test | 10 | 0.000783s | 0.000748s | 0.000786s | byte equality observed |
| test_data.test | 10 | 0.000788s | 0.000796s | 0.000799s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.000822s | 0.000804s | 0.000816s | byte equality observed |
| test_detail_endian.test | 10 | 0.000820s | 0.000822s | 0.000831s | byte equality observed |
| test_detail_md5.test | 10 | 0.000824s | 0.000824s | 0.000856s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.000840s | 0.000831s | 0.000816s | byte equality observed |
| test_detail_sha1.test | 4 | 0.005616s | 0.006490s | 0.005721s | byte equality observed |
| test_entropy_error.test | 10 | 0.000771s | 0.000750s | 0.000775s | byte equality observed |
| test_from_chars.test | 10 | 0.000750s | 0.000740s | 0.000767s | byte equality observed |
| test_from_chars_2.test | 10 | 0.000827s | 0.000811s | 0.000805s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.000841s | 0.000820s | 0.000827s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.000852s | 0.000809s | 0.000832s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.000843s | 0.000798s | 0.000849s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.000827s | 0.000823s | 0.000817s | byte equality observed |
| test_hash.test | 10 | 0.000842s | 0.000842s | 0.000814s | byte equality observed |
| test_hash_value.test | 6 | 0.003262s | 0.003237s | 0.003175s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.000760s | 0.000774s | 0.000760s | byte equality observed |
| test_include1.test | 10 | 0.000339s | 0.000319s | 0.000761s | byte equality observed |
| test_io.test | 10 | 0.000862s | 0.000843s | 0.000881s | byte equality observed |
| test_io_2.test | 10 | 0.000911s | 0.000910s | 0.000889s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.000916s | 0.000931s | 0.000912s | byte equality observed |
| test_io_no_simd.test | 10 | 0.000882s | 0.000893s | 0.000890s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.000814s | 0.000813s | 0.000851s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.000829s | 0.000852s | 0.000839s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.000823s | 0.000858s | 0.000843s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.000847s | 0.000855s | 0.000846s | byte equality observed |
| test_namespaces.test | 10 | 0.000821s | 0.000826s | 0.000825s | byte equality observed |
| test_nil_generator.test | 10 | 0.000816s | 0.000803s | 0.000830s | byte equality observed |
| test_pragma_pack.test | 10 | 0.000770s | 0.000757s | 0.000752s | byte equality observed |
| test_random_generator.test | 6 | 0.003649s | 0.003645s | 0.003645s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.000782s | 0.000751s | 0.000768s | byte equality observed |
| test_serialization.test | 10 | 0.000866s | 0.000867s | 0.000864s | byte equality observed |
| test_std_unordered.test | 10 | 0.000858s | 0.000862s | 0.000889s | byte equality observed |
| test_string_generator.test | 10 | 0.000878s | 0.000880s | 0.000868s | byte equality observed |
| test_string_generator_2.test | 10 | 0.000829s | 0.000829s | 0.000824s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.000845s | 0.000816s | 0.000804s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.000845s | 0.000839s | 0.000844s | byte equality observed |
| test_tagging.test | 10 | 0.000845s | 0.000875s | 0.000862s | byte equality observed |
| test_time_generator.test | 10 | 0.000845s | 0.000835s | 0.000865s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001138s | 0.001224s | 0.001229s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001018s | 0.001041s | 0.001056s | byte equality observed |
| test_time_generator_v1_3.test | 4 | 0.004445s | 0.004302s | 0.004327s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001201s | 0.001235s | 0.001273s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001029s | 0.001069s | 0.001052s | byte equality observed |
| test_time_generator_v6_3.test | 4 | 0.004893s | 0.004762s | 0.004531s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.001026s | 0.001051s | 0.001053s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.000864s | 0.000861s | 0.000858s | byte equality observed |
| test_time_generator_v7_3.test | 8 | 0.002285s | 0.002264s | 0.002266s | byte equality observed |
| test_to_chars.test | 10 | 0.000835s | 0.000824s | 0.000821s | byte equality observed |
| test_to_chars_2.test | 10 | 0.000811s | 0.000822s | 0.000812s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.000824s | 0.000818s | 0.000832s | byte equality observed |
| test_to_chars_3.test | 10 | 0.000844s | 0.000805s | 0.000834s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.000837s | 0.000815s | 0.000837s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.000879s | 0.000849s | 0.000905s | byte equality observed |
| test_uuid.test | 10 | 0.000804s | 0.000781s | 0.000846s | byte equality observed |
| test_uuid_2.test | 10 | 0.000821s | 0.000802s | 0.000815s | byte equality observed |
| test_uuid_3.test | 10 | 0.000811s | 0.000790s | 0.000819s | byte equality observed |
| test_uuid_class.test | 10 | 0.000839s | 0.000818s | 0.000860s | byte equality observed |
| test_uuid_clock.test | 10 | 0.000818s | 0.000788s | 0.000850s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.000839s | 0.000826s | 0.000829s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.000797s | 0.000793s | 0.000844s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.000829s | 0.000809s | 0.000816s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.000824s | 0.000832s | 0.000820s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.000980s | 0.000954s | 0.001009s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.000894s | 0.000884s | 0.000885s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.000825s | 0.000792s | 0.000794s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.000829s | 0.000822s | 0.000821s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.000828s | 0.000824s | 0.000824s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45697047144).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
