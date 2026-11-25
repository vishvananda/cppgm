# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.335082 | 0.794446 | 1.053257 | 0.000546 | 0.000475 | 0.001048 |
| test_uuid.test | RUN | 0.214517 | 0.672394 | 0.763208 | 0.001255 | 0.001304 | 0.001122 |
| test_uuid_no_simd.test | RUN | 0.211240 | 0.637327 | 0.682687 | 0.001434 | 0.001128 | 0.001052 |
| test_uuid_2.test | RUN | 0.150472 | 0.483687 | 0.503473 | 0.001193 | 0.001297 | 0.001117 |
| test_uuid_3.test | RUN | 0.124447 | 0.339640 | 0.399890 | 0.001213 | 0.001360 | 0.001046 |
| test_alignment.test | RUN | 0.114816 | 0.299500 | 0.358132 | 0.001349 | 0.000984 | 0.000996 |
| test_alignment_2.test | RUN | 0.113340 | 0.287594 | 0.357397 | 0.001291 | 0.001156 | 0.001018 |
| test_attribute_packed.test | RUN | 0.119249 | 0.304938 | 0.362076 | 0.001413 | 0.001294 | 0.001121 |
| test_pragma_pack.test | RUN | 0.118010 | 0.301850 | 0.354443 | 0.001362 | 0.001343 | 0.000970 |
| test_data.test | RUN | 0.139696 | 0.565554 | 0.520361 | 0.001348 | 0.001419 | 0.001065 |
| test_comparison.test | RUN | 0.196632 | 0.643815 | 0.708641 | 0.001349 | 0.001528 | 0.001062 |
| test_comparison_no_simd.test | RUN | 0.197259 | 0.741992 | 0.634060 | 0.001273 | 0.001163 | 0.001047 |
| test_io.test | RUN | 0.260599 | 1.252435 | 1.084580 | 0.001385 | 0.001507 | 0.001147 |
| test_io_no_simd.test | RUN | 0.253892 | 1.245042 | 1.021554 | 0.001310 | 0.001478 | 0.001098 |
| test_io_2.test | RUN | 0.197324 | 1.298590 | 0.761530 | 0.001268 | 0.001322 | 0.001222 |
| test_io_2_no_simd.test | RUN | 0.187564 | 1.231931 | 0.686435 | 0.001542 | 0.001514 | 0.001197 |
| test_to_chars.test | RUN | 0.187168 | 0.812560 | 0.697060 | 0.001378 | 0.001352 | 0.001082 |
| test_to_chars_no_simd.test | RUN | 0.178689 | 0.825549 | 0.669272 | 0.001585 | 0.001239 | 0.001097 |
| test_to_chars_2.test | RUN | 0.226141 | 1.500493 | 0.846469 | 0.001329 | 0.001381 | 0.001069 |
| test_to_chars_2_no_simd.test | RUN | 0.241069 | 1.604312 | 0.765430 | 0.001153 | 0.001244 | 0.001057 |
| test_to_chars_3.test | RUN | 0.153693 | 0.512810 | 0.486688 | 0.001355 | 0.001133 | 0.001047 |
| test_from_chars.test | RUN | 0.169621 | 0.743509 | 0.569923 | 0.001341 | 0.001090 | 0.001072 |
| test_from_chars_no_simd.test | RUN | 0.134677 | 0.597455 | 0.473157 | 0.001340 | 0.001364 | 0.001034 |
| test_from_chars_2.test | RUN | 0.159811 | 0.708467 | 0.563025 | 0.001205 | 0.001285 | 0.000955 |
| test_from_chars_2_no_simd.test | RUN | 0.135889 | 0.529593 | 0.459735 | 0.001174 | 0.001346 | 0.000974 |
| test_uuid_from_string.test | RUN | 0.190162 | 0.773622 | 0.686895 | 0.001312 | 0.001236 | 0.001065 |
| test_uuid_from_string_2.test | RUN | 0.170902 | 0.711096 | 0.579047 | 0.001687 | 0.001614 | 0.000981 |
| test_uuid_from_string_3.test | RUN | 0.170424 | 0.708912 | 0.597162 | 0.001251 | 0.001463 | 0.001166 |
| test_uuid_clock.test | RUN | 0.103439 | 0.291802 | 0.349935 | 0.001139 | 0.001332 | 0.001129 |
| test_nil_generator.test | RUN | 0.123098 | 0.329244 | 0.401031 | 0.001328 | 0.001352 | 0.001113 |
| test_string_generator.test | RUN | 0.162078 | 0.562403 | 0.572362 | 0.001363 | 0.001440 | 0.001214 |
| test_string_generator_2.test | RUN | 0.205634 | 0.795670 | 0.635674 | 0.001185 | 0.001237 | 0.001086 |
| test_random_generator.test | RUN | 0.270295 | 1.520562 | 0.949748 | 0.004461 | 0.004333 | 0.004048 |
| test_random_generator_2.test | RUN | 0.192001 | 0.584275 | 0.644665 | 0.001254 | 0.001184 | 0.001009 |
| test_name_generator.test | RUN | 0.176296 | 2.010256 | 0.710542 | 0.001306 | 0.001372 | 0.001096 |
| test_namespaces.test | RUN | 0.146623 | 0.424536 | 0.465982 | 0.001147 | 0.001378 | 0.001013 |
| test_name_generator_md5.test | RUN | 0.177217 | 0.928357 | 0.690672 | 0.001279 | 0.001327 | 0.001132 |
| test_name_generator_sha1.test | RUN | 0.176566 | 2.964320 | 0.681663 | 0.001263 | 0.001425 | 0.001099 |
| test_time_generator.test | RUN | 0.183528 | 0.572324 | 0.639692 | 0.001274 | 0.001306 | 0.001076 |
| test_time_generator_v1.test | RUN | 0.203078 | 0.637874 | 0.705907 | 0.001633 | 0.001796 | 0.001547 |
| test_time_generator_v1_2.test | RUN | 0.201127 | 0.600170 | 0.681095 | 0.001601 | 0.001552 | 0.001428 |
| test_time_generator_v1_3.test | RUN | 0.226670 | 0.635833 | 0.737475 | 0.003759 | 0.003890 | 0.003822 |
| test_time_generator_v6.test | RUN | 0.204598 | 0.639773 | 0.714666 | 0.001633 | 0.001661 | 0.001623 |
| test_time_generator_v6_2.test | RUN | 0.199024 | 0.602024 | 0.668974 | 0.001375 | 0.001698 | 0.001355 |
| test_time_generator_v6_3.test | RUN | 0.224445 | 0.634211 | 0.753761 | 0.004104 | 0.004216 | 0.003310 |
| test_time_generator_v7.test | RUN | 0.197023 | 0.638989 | 0.694354 | 0.001608 | 0.001555 | 0.001428 |
| test_time_generator_v7_2.test | RUN | 0.182973 | 0.559200 | 0.630665 | 0.001195 | 0.001383 | 0.001143 |
| test_time_generator_v7_3.test | RUN | 0.188525 | 0.709445 | 0.648073 | 0.002642 | 0.003028 | 0.002586 |
| test_serialization.test | RUN | 0.332961 | 1.089031 | 1.199432 | 0.001400 | 0.001480 | 0.001113 |
| test_tagging.test | RUN | 0.187342 | 0.685299 | 0.637911 | 0.001461 | 0.001163 | 0.001273 |
| test_uuid_class.test | RUN | 0.196962 | 0.606491 | 0.688015 | 0.001279 | 0.001118 | 0.001158 |
| test_uuid_in_map.test | RUN | 0.219613 | 0.701530 | 0.741474 | 0.001137 | 0.001255 | 0.001076 |
| test_hash.test | RUN | 0.217932 | 0.628311 | 0.678499 | 0.001220 | 0.001234 | 0.001202 |
| test_hash_value.test | RUN | 0.155081 | 0.433198 | 0.500150 | 0.004332 | 0.004438 | 0.003964 |
| test_std_unordered.test | RUN | 0.204828 | 0.708851 | 0.718181 | 0.001546 | 0.001404 | 0.001179 |
| test_boost_unordered.test | RUN | 0.289864 | 0.908245 | 0.917098 | 0.001134 | 0.001390 | 0.001071 |
| test_detail_md5.test | RUN | 0.136641 | 0.434103 | 0.491555 | 0.001266 | 0.001213 | 0.001082 |
| test_detail_sha1.test | RUN | 0.127854 | 0.561259 | 0.449711 | 0.007651 | 0.008150 | 0.006586 |
| test_detail_endian.test | RUN | 0.096001 | 0.318912 | 0.333278 | 0.001219 | 0.001256 | 0.001018 |
| test_detail_chacha20.test | RUN | 0.107533 | 0.398446 | 0.342347 | 0.001292 | 0.001264 | 0.001076 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.094695 | 0.217673 | 0.265563 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.099801 | 0.219433 | 0.267643 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.161521 | 0.439908 | 0.497144 | 0.001396 | 0.001224 | 0.001137 |
| test_bench_random.test | RUN | 0.185350 | 0.586433 | 0.658164 | 0.017263 | 0.016906 | 0.016911 |
| test_entropy_error.test | RUN | 0.094208 | 0.261797 | 0.301108 | 0.001328 | 0.001149 | 0.001139 |
| test_detail_random_provider.test | RUN | 0.177124 | 0.449548 | 0.568912 | 0.001250 | 0.001333 | 0.001070 |
| test_constants.test | RUN | 0.141058 | 0.420801 | 0.461054 | 0.001204 | 0.001235 | 0.001048 |
| test_uuid_cx.test | COMPILE | 0.083316 | 0.190838 | 0.236791 | — | — | — |
| test_uuid_cx2.test | RUN | 0.153029 | 0.488723 | 0.501876 | 0.001299 | 0.001316 | 0.001062 |
| test_uuid_cx3.test | RUN | 0.128069 | 0.370002 | 0.448357 | 0.001198 | 0.001369 | 0.000979 |
| test_uuid_cx3_no_simd.test | RUN | 0.122375 | 0.351223 | 0.397429 | 0.001203 | 0.001188 | 0.001094 |
| test_hash_value_cx.test | RUN | 0.126537 | 0.329961 | 0.400118 | 0.001115 | 0.001228 | 0.001023 |
| test_string_generator_cx.test | RUN | 0.143687 | 0.423620 | 0.455285 | 0.001384 | 0.001317 | 0.001062 |
| test_string_generator_cx2.test | RUN | 0.178546 | 0.521663 | 0.544910 | 0.001003 | 0.001254 | 0.001011 |
| test_constants_cx.test | RUN | 0.113764 | 0.288186 | 0.378712 | 0.001575 | 0.001280 | 0.000983 |
| test_from_chars_cx.test | RUN | 0.148540 | 0.559830 | 0.487463 | 0.001242 | 0.001218 | 0.001010 |
| test_from_chars_cx2.test | RUN | 0.159278 | 0.693715 | 0.547670 | 0.001242 | 0.001224 | 0.001076 |
| test_to_chars_cx.test | RUN | 0.160522 | 0.649975 | 0.582880 | 0.000939 | 0.001288 | 0.000819 |
| test_uuid_from_string_cx.test | RUN | 0.165295 | 0.649858 | 0.585988 | 0.000872 | 0.000941 | 0.000791 |
| quick.test | RUN | 0.179006 | 0.495542 | 0.539082 | 0.000861 | 0.000916 | 0.000738 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.006× | 1.006×, 1.005× | 1.001× |
| clang | 1.004× | 0.996×, 1.012× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45651777895).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.000782s | 0.000785s | 0.000790s | byte equality observed |
| test_alignment.test | 10 | 0.000813s | 0.000772s | 0.000805s | byte equality observed |
| test_alignment_2.test | 10 | 0.000818s | 0.000803s | 0.000830s | byte equality observed |
| test_attribute_packed.test | 10 | 0.000763s | 0.000740s | 0.000732s | byte equality observed |
| test_bench_random.test | 2 | 0.016462s | 0.016452s | 0.016504s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.000803s | 0.000783s | 0.000779s | byte equality observed |
| test_comparison.test | 10 | 0.000768s | 0.000734s | 0.000753s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.000784s | 0.000768s | 0.000821s | byte equality observed |
| test_constants.test | 10 | 0.000815s | 0.000794s | 0.000831s | byte equality observed |
| test_constants_cx.test | 10 | 0.000769s | 0.000779s | 0.000806s | byte equality observed |
| test_data.test | 10 | 0.000790s | 0.000799s | 0.000792s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.000814s | 0.000796s | 0.000817s | byte equality observed |
| test_detail_endian.test | 10 | 0.000801s | 0.000806s | 0.000824s | byte equality observed |
| test_detail_md5.test | 10 | 0.000822s | 0.000804s | 0.000825s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.000811s | 0.000806s | 0.000814s | byte equality observed |
| test_detail_sha1.test | 4 | 0.005569s | 0.006358s | 0.005687s | byte equality observed |
| test_entropy_error.test | 10 | 0.000740s | 0.000750s | 0.000744s | byte equality observed |
| test_from_chars.test | 10 | 0.000765s | 0.000743s | 0.000754s | byte equality observed |
| test_from_chars_2.test | 10 | 0.000817s | 0.000796s | 0.000815s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.000806s | 0.000781s | 0.000804s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.000795s | 0.000793s | 0.000813s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.000820s | 0.000809s | 0.000833s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.000812s | 0.000798s | 0.000842s | byte equality observed |
| test_hash.test | 10 | 0.000798s | 0.000807s | 0.000840s | byte equality observed |
| test_hash_value.test | 6 | 0.003238s | 0.003199s | 0.003144s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.000748s | 0.000752s | 0.000768s | byte equality observed |
| test_include1.test | 10 | 0.000347s | 0.000314s | 0.000738s | byte equality observed |
| test_io.test | 10 | 0.000858s | 0.000832s | 0.000855s | byte equality observed |
| test_io_2.test | 10 | 0.000925s | 0.000886s | 0.000902s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.000900s | 0.000894s | 0.000890s | byte equality observed |
| test_io_no_simd.test | 10 | 0.000868s | 0.000855s | 0.000839s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.000786s | 0.000788s | 0.000803s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.000828s | 0.000838s | 0.000844s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.000819s | 0.000833s | 0.000840s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.000840s | 0.000859s | 0.000842s | byte equality observed |
| test_namespaces.test | 10 | 0.000845s | 0.000802s | 0.000787s | byte equality observed |
| test_nil_generator.test | 10 | 0.000813s | 0.000840s | 0.000822s | byte equality observed |
| test_pragma_pack.test | 10 | 0.000788s | 0.000797s | 0.000764s | byte equality observed |
| test_random_generator.test | 5 | 0.003847s | 0.003839s | 0.003825s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.000770s | 0.000746s | 0.000754s | byte equality observed |
| test_serialization.test | 10 | 0.000861s | 0.000848s | 0.000865s | byte equality observed |
| test_std_unordered.test | 10 | 0.000878s | 0.000854s | 0.000855s | byte equality observed |
| test_string_generator.test | 10 | 0.000874s | 0.000876s | 0.000884s | byte equality observed |
| test_string_generator_2.test | 10 | 0.000830s | 0.000819s | 0.000833s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.000840s | 0.000822s | 0.000810s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.000826s | 0.000813s | 0.000797s | byte equality observed |
| test_tagging.test | 10 | 0.000831s | 0.000802s | 0.000847s | byte equality observed |
| test_time_generator.test | 10 | 0.000843s | 0.000829s | 0.000822s | byte equality observed |
| test_time_generator_v1.test | 8 | 0.001130s | 0.001209s | 0.001258s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001012s | 0.001023s | 0.001032s | byte equality observed |
| test_time_generator_v1_3.test | 5 | 0.004509s | 0.004501s | 0.004484s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001176s | 0.001218s | 0.001285s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001025s | 0.001050s | 0.001050s | byte equality observed |
| test_time_generator_v6_3.test | 4 | 0.004731s | 0.004499s | 0.004483s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.000993s | 0.001020s | 0.001045s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.000871s | 0.000848s | 0.000864s | byte equality observed |
| test_time_generator_v7_3.test | 8 | 0.002367s | 0.002379s | 0.002375s | byte equality observed |
| test_to_chars.test | 7 | 0.000830s | 0.000801s | 0.000817s | byte equality observed |
| test_to_chars_2.test | 10 | 0.000790s | 0.000791s | 0.000779s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.000820s | 0.000821s | 0.000804s | byte equality observed |
| test_to_chars_3.test | 10 | 0.000801s | 0.000807s | 0.000783s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.000816s | 0.000825s | 0.000824s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.000867s | 0.000881s | 0.000868s | byte equality observed |
| test_uuid.test | 10 | 0.000818s | 0.000808s | 0.000806s | byte equality observed |
| test_uuid_2.test | 10 | 0.000836s | 0.000826s | 0.000791s | byte equality observed |
| test_uuid_3.test | 10 | 0.000790s | 0.000819s | 0.000787s | byte equality observed |
| test_uuid_class.test | 10 | 0.000827s | 0.000839s | 0.000806s | byte equality observed |
| test_uuid_clock.test | 10 | 0.000816s | 0.000788s | 0.000804s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.000820s | 0.000809s | 0.000829s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.000802s | 0.000812s | 0.000815s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.000826s | 0.000804s | 0.000812s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.000804s | 0.000810s | 0.000796s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.000988s | 0.000947s | 0.001014s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.000865s | 0.000852s | 0.000868s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.000796s | 0.000782s | 0.000803s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.000826s | 0.000794s | 0.000811s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.000809s | 0.000792s | 0.000834s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45651777895).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
