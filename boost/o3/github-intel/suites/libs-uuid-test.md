# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.325086 | 0.784943 | 1.094316 | 0.000490 | 0.000448 | 0.001286 |
| test_uuid.test | RUN | 0.212549 | 0.650138 | 0.786535 | 0.001200 | 0.001147 | 0.001255 |
| test_uuid_no_simd.test | RUN | 0.213843 | 0.627835 | 0.701206 | 0.001348 | 0.001131 | 0.000984 |
| test_uuid_2.test | RUN | 0.149224 | 0.477127 | 0.517730 | 0.001260 | 0.001167 | 0.001239 |
| test_uuid_3.test | RUN | 0.122932 | 0.325161 | 0.416934 | 0.001204 | 0.001197 | 0.001032 |
| test_alignment.test | RUN | 0.113596 | 0.291772 | 0.368446 | 0.001255 | 0.001096 | 0.001196 |
| test_alignment_2.test | RUN | 0.111062 | 0.281660 | 0.387096 | 0.001203 | 0.001101 | 0.001119 |
| test_attribute_packed.test | RUN | 0.113350 | 0.289221 | 0.385808 | 0.001216 | 0.001233 | 0.001078 |
| test_pragma_pack.test | RUN | 0.107970 | 0.295139 | 0.371713 | 0.001204 | 0.001272 | 0.001047 |
| test_data.test | RUN | 0.134279 | 0.541795 | 0.539269 | 0.001103 | 0.001281 | 0.001289 |
| test_comparison.test | RUN | 0.194164 | 0.624815 | 0.731753 | 0.001235 | 0.001318 | 0.001181 |
| test_comparison_no_simd.test | RUN | 0.193820 | 0.714719 | 0.665416 | 0.001117 | 0.001284 | 0.001361 |
| test_io.test | RUN | 0.259082 | 1.235772 | 1.095146 | 0.001330 | 0.001431 | 0.001344 |
| test_io_no_simd.test | RUN | 0.247273 | 1.231394 | 1.041545 | 0.001229 | 0.001423 | 0.001337 |
| test_io_2.test | RUN | 0.199071 | 1.262093 | 0.768911 | 0.001296 | 0.001334 | 0.001415 |
| test_io_2_no_simd.test | RUN | 0.182163 | 1.184111 | 0.712404 | 0.001328 | 0.001495 | 0.001344 |
| test_to_chars.test | RUN | 0.181926 | 0.805989 | 0.730742 | 0.001225 | 0.001280 | 0.001286 |
| test_to_chars_no_simd.test | RUN | 0.175879 | 0.810714 | 0.698070 | 0.001268 | 0.001332 | 0.001366 |
| test_to_chars_2.test | RUN | 0.223951 | 1.450624 | 0.850076 | 0.001113 | 0.001318 | 0.001220 |
| test_to_chars_2_no_simd.test | RUN | 0.234158 | 1.559117 | 0.782008 | 0.001092 | 0.001330 | 0.001243 |
| test_to_chars_3.test | RUN | 0.150685 | 0.509597 | 0.517234 | 0.001253 | 0.001228 | 0.001114 |
| test_from_chars.test | RUN | 0.169443 | 0.740746 | 0.584514 | 0.001359 | 0.001234 | 0.001300 |
| test_from_chars_no_simd.test | RUN | 0.149706 | 0.595483 | 0.499600 | 0.001121 | 0.001350 | 0.001158 |
| test_from_chars_2.test | RUN | 0.164278 | 0.687304 | 0.567567 | 0.001092 | 0.001269 | 0.001025 |
| test_from_chars_2_no_simd.test | RUN | 0.147409 | 0.526221 | 0.463499 | 0.001125 | 0.001089 | 0.001111 |
| test_uuid_from_string.test | RUN | 0.197700 | 0.752771 | 0.715710 | 0.001579 | 0.001278 | 0.001154 |
| test_uuid_from_string_2.test | RUN | 0.173146 | 0.691368 | 0.609650 | 0.001375 | 0.001645 | 0.001610 |
| test_uuid_from_string_3.test | RUN | 0.171924 | 0.693739 | 0.607061 | 0.001194 | 0.001320 | 0.001228 |
| test_uuid_clock.test | RUN | 0.102302 | 0.277426 | 0.357993 | 0.001021 | 0.001208 | 0.001271 |
| test_nil_generator.test | RUN | 0.121568 | 0.328444 | 0.418078 | 0.001257 | 0.001189 | 0.001246 |
| test_string_generator.test | RUN | 0.158676 | 0.554936 | 0.584263 | 0.001458 | 0.001426 | 0.001307 |
| test_string_generator_2.test | RUN | 0.201779 | 0.772630 | 0.672352 | 0.001222 | 0.001172 | 0.001385 |
| test_random_generator.test | RUN | 0.266611 | 1.512735 | 1.021373 | 0.004132 | 0.004329 | 0.004289 |
| test_random_generator_2.test | RUN | 0.188670 | 0.576229 | 0.675615 | 0.001344 | 0.001315 | 0.001186 |
| test_name_generator.test | RUN | 0.175280 | 1.947530 | 0.732900 | 0.001061 | 0.001346 | 0.001395 |
| test_namespaces.test | RUN | 0.136858 | 0.416215 | 0.485232 | 0.001084 | 0.001282 | 0.001291 |
| test_name_generator_md5.test | RUN | 0.180739 | 0.925408 | 0.718727 | 0.001174 | 0.001276 | 0.001363 |
| test_name_generator_sha1.test | RUN | 0.169536 | 2.892032 | 0.690011 | 0.001194 | 0.001393 | 0.001274 |
| test_time_generator.test | RUN | 0.180489 | 0.567600 | 0.652616 | 0.001173 | 0.001369 | 0.001371 |
| test_time_generator_v1.test | RUN | 0.204176 | 0.637309 | 0.731825 | 0.001533 | 0.001740 | 0.001858 |
| test_time_generator_v1_2.test | RUN | 0.196281 | 0.602379 | 0.702981 | 0.001329 | 0.001760 | 0.001724 |
| test_time_generator_v1_3.test | RUN | 0.218497 | 0.629343 | 0.753748 | 0.003544 | 0.003816 | 0.003790 |
| test_time_generator_v6.test | RUN | 0.207904 | 0.638746 | 0.734785 | 0.001657 | 0.001745 | 0.001771 |
| test_time_generator_v6_2.test | RUN | 0.197238 | 0.602651 | 0.694280 | 0.001429 | 0.001679 | 0.001572 |
| test_time_generator_v6_3.test | RUN | 0.221064 | 0.633269 | 0.788131 | 0.003622 | 0.003120 | 0.004144 |
| test_time_generator_v7.test | RUN | 0.194753 | 0.628463 | 0.707497 | 0.001482 | 0.001634 | 0.001546 |
| test_time_generator_v7_2.test | RUN | 0.183330 | 0.548542 | 0.639914 | 0.001232 | 0.001422 | 0.001257 |
| test_time_generator_v7_3.test | RUN | 0.180797 | 0.713633 | 0.659840 | 0.002566 | 0.002826 | 0.002746 |
| test_serialization.test | RUN | 0.333858 | 1.095876 | 1.238325 | 0.001340 | 0.001289 | 0.001386 |
| test_tagging.test | RUN | 0.181709 | 0.661696 | 0.655644 | 0.000987 | 0.001263 | 0.001136 |
| test_uuid_class.test | RUN | 0.194511 | 0.598479 | 0.706910 | 0.001136 | 0.001083 | 0.001117 |
| test_uuid_in_map.test | RUN | 0.212610 | 0.677988 | 0.778416 | 0.001118 | 0.001179 | 0.001352 |
| test_hash.test | RUN | 0.210751 | 0.613598 | 0.698758 | 0.001254 | 0.001343 | 0.001165 |
| test_hash_value.test | RUN | 0.152923 | 0.423436 | 0.512440 | 0.003921 | 0.004203 | 0.004034 |
| test_std_unordered.test | RUN | 0.199879 | 0.691900 | 0.724756 | 0.001224 | 0.001241 | 0.001298 |
| test_boost_unordered.test | RUN | 0.284088 | 0.903658 | 0.939172 | 0.001279 | 0.001093 | 0.001130 |
| test_detail_md5.test | RUN | 0.130458 | 0.423168 | 0.499970 | 0.001135 | 0.001389 | 0.001354 |
| test_detail_sha1.test | RUN | 0.124371 | 0.555896 | 0.459284 | 0.007748 | 0.008146 | 0.006832 |
| test_detail_endian.test | RUN | 0.096719 | 0.306341 | 0.352480 | 0.001063 | 0.001250 | 0.001153 |
| test_detail_chacha20.test | RUN | 0.104763 | 0.391469 | 0.349622 | 0.001206 | 0.001168 | 0.001105 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.088028 | 0.210475 | 0.276111 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.094745 | 0.214381 | 0.276502 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.156288 | 0.428981 | 0.507179 | 0.001120 | 0.001102 | 0.001290 |
| test_bench_random.test | RUN | 0.181353 | 0.560272 | 0.667287 | 0.016723 | 0.016685 | 0.016528 |
| test_entropy_error.test | RUN | 0.090694 | 0.256219 | 0.310581 | 0.001022 | 0.001259 | 0.001098 |
| test_detail_random_provider.test | RUN | 0.171263 | 0.441710 | 0.580325 | 0.001061 | 0.001053 | 0.001200 |
| test_constants.test | RUN | 0.137961 | 0.408117 | 0.475817 | 0.001177 | 0.001180 | 0.001192 |
| test_uuid_cx.test | COMPILE | 0.076738 | 0.183491 | 0.239898 | — | — | — |
| test_uuid_cx2.test | RUN | 0.147268 | 0.470949 | 0.508813 | 0.001180 | 0.001166 | 0.001251 |
| test_uuid_cx3.test | RUN | 0.126381 | 0.366446 | 0.453813 | 0.001199 | 0.001236 | 0.001098 |
| test_uuid_cx3_no_simd.test | RUN | 0.120112 | 0.341844 | 0.415354 | 0.001041 | 0.001171 | 0.001300 |
| test_hash_value_cx.test | RUN | 0.123709 | 0.322888 | 0.414069 | 0.001117 | 0.001087 | 0.001016 |
| test_string_generator_cx.test | RUN | 0.139284 | 0.414084 | 0.478027 | 0.001314 | 0.001152 | 0.001152 |
| test_string_generator_cx2.test | RUN | 0.179111 | 0.512094 | 0.564388 | 0.001212 | 0.001139 | 0.001189 |
| test_constants_cx.test | RUN | 0.112971 | 0.271900 | 0.375327 | 0.001105 | 0.001157 | 0.001165 |
| test_from_chars_cx.test | RUN | 0.149975 | 0.541975 | 0.522895 | 0.001282 | 0.001196 | 0.001126 |
| test_from_chars_cx2.test | RUN | 0.157738 | 0.683924 | 0.561914 | 0.001297 | 0.001174 | 0.001362 |
| test_to_chars_cx.test | RUN | 0.155581 | 0.637127 | 0.618886 | 0.001554 | 0.000841 | 0.000896 |
| test_uuid_from_string_cx.test | RUN | 0.166850 | 0.637352 | 0.581126 | 0.000880 | 0.000827 | 0.000899 |
| quick.test | RUN | 0.171043 | 0.495161 | 0.541442 | 0.000883 | 0.000796 | 0.000902 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.997× | 0.993×, 1.001× | 1.005× |
| clang | 1.019× | 1.020×, 1.019× | 0.993× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44818861403).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 10 | 0.000800s | 0.000773s | 0.000808s | byte equality observed |
| test_alignment.test | 10 | 0.000799s | 0.000796s | 0.000792s | byte equality observed |
| test_alignment_2.test | 10 | 0.000802s | 0.000805s | 0.000785s | byte equality observed |
| test_attribute_packed.test | 10 | 0.000751s | 0.000745s | 0.000739s | byte equality observed |
| test_bench_random.test | 2 | 0.016112s | 0.016080s | 0.016150s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.000794s | 0.000785s | 0.000789s | byte equality observed |
| test_comparison.test | 10 | 0.000741s | 0.000753s | 0.000754s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.000781s | 0.000811s | 0.000789s | byte equality observed |
| test_constants.test | 10 | 0.000797s | 0.000819s | 0.000802s | byte equality observed |
| test_constants_cx.test | 10 | 0.000792s | 0.000770s | 0.000812s | byte equality observed |
| test_data.test | 10 | 0.000791s | 0.000791s | 0.000820s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.000791s | 0.000770s | 0.000808s | byte equality observed |
| test_detail_endian.test | 10 | 0.000778s | 0.000779s | 0.000822s | byte equality observed |
| test_detail_md5.test | 10 | 0.000834s | 0.000824s | 0.000853s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.000809s | 0.000833s | 0.000830s | byte equality observed |
| test_detail_sha1.test | 4 | 0.005306s | 0.006415s | 0.005718s | byte equality observed |
| test_entropy_error.test | 10 | 0.000753s | 0.000753s | 0.000723s | byte equality observed |
| test_from_chars.test | 10 | 0.000754s | 0.000744s | 0.000780s | byte equality observed |
| test_from_chars_2.test | 10 | 0.000801s | 0.000805s | 0.000819s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.000807s | 0.000807s | 0.000820s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.000812s | 0.000837s | 0.000846s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.000848s | 0.000831s | 0.000842s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.000802s | 0.000851s | 0.000837s | byte equality observed |
| test_hash.test | 10 | 0.000824s | 0.000822s | 0.000805s | byte equality observed |
| test_hash_value.test | 6 | 0.003215s | 0.003130s | 0.003135s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.000760s | 0.000767s | 0.000743s | byte equality observed |
| test_include1.test | 10 | 0.000345s | 0.000351s | 0.000745s | byte equality observed |
| test_io.test | 10 | 0.000857s | 0.000877s | 0.000862s | byte equality observed |
| test_io_2.test | 10 | 0.000890s | 0.000875s | 0.000882s | byte equality observed |
| test_io_2_no_simd.test | 10 | 0.000912s | 0.000924s | 0.000896s | byte equality observed |
| test_io_no_simd.test | 10 | 0.000868s | 0.000886s | 0.000833s | byte equality observed |
| test_msvc_simd_bug981648.test | 10 | 0.000801s | 0.000813s | 0.000806s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.000817s | 0.000853s | 0.000860s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.000858s | 0.000857s | 0.000876s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.000845s | 0.000874s | 0.000854s | byte equality observed |
| test_namespaces.test | 10 | 0.000808s | 0.000817s | 0.000829s | byte equality observed |
| test_nil_generator.test | 10 | 0.000819s | 0.000797s | 0.000816s | byte equality observed |
| test_pragma_pack.test | 10 | 0.000758s | 0.000749s | 0.000766s | byte equality observed |
| test_random_generator.test | 5 | 0.003784s | 0.003766s | 0.003783s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.000765s | 0.000765s | 0.000767s | byte equality observed |
| test_serialization.test | 10 | 0.000882s | 0.000873s | 0.000870s | byte equality observed |
| test_std_unordered.test | 10 | 0.000880s | 0.000850s | 0.000874s | byte equality observed |
| test_string_generator.test | 10 | 0.000884s | 0.000877s | 0.000879s | byte equality observed |
| test_string_generator_2.test | 10 | 0.000820s | 0.000841s | 0.000826s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.000814s | 0.000833s | 0.000797s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.000813s | 0.000823s | 0.000820s | byte equality observed |
| test_tagging.test | 10 | 0.000836s | 0.000824s | 0.000834s | byte equality observed |
| test_time_generator.test | 10 | 0.000849s | 0.000836s | 0.000840s | byte equality observed |
| test_time_generator_v1.test | 10 | 0.001152s | 0.001221s | 0.001247s | byte equality observed |
| test_time_generator_v1_2.test | 10 | 0.001002s | 0.001024s | 0.001029s | byte equality observed |
| test_time_generator_v1_3.test | 5 | 0.004402s | 0.004046s | 0.004409s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.001167s | 0.001245s | 0.001238s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001019s | 0.001041s | 0.001047s | byte equality observed |
| test_time_generator_v6_3.test | 4 | 0.004560s | 0.004142s | 0.004626s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.000988s | 0.001033s | 0.001033s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.000859s | 0.000856s | 0.000865s | byte equality observed |
| test_time_generator_v7_3.test | 8 | 0.002353s | 0.002329s | 0.002321s | byte equality observed |
| test_to_chars.test | 10 | 0.000813s | 0.000818s | 0.000807s | byte equality observed |
| test_to_chars_2.test | 10 | 0.000791s | 0.000778s | 0.000794s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.000834s | 0.000815s | 0.000837s | byte equality observed |
| test_to_chars_3.test | 10 | 0.000826s | 0.000803s | 0.000817s | byte equality observed |
| test_to_chars_cx.test | 10 | 0.000811s | 0.000805s | 0.000804s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.000852s | 0.000832s | 0.000834s | byte equality observed |
| test_uuid.test | 10 | 0.000798s | 0.000798s | 0.000819s | byte equality observed |
| test_uuid_2.test | 10 | 0.000818s | 0.000796s | 0.000797s | byte equality observed |
| test_uuid_3.test | 10 | 0.000799s | 0.000834s | 0.000815s | byte equality observed |
| test_uuid_class.test | 10 | 0.000825s | 0.000842s | 0.000818s | byte equality observed |
| test_uuid_clock.test | 10 | 0.000827s | 0.000837s | 0.000790s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.000808s | 0.000834s | 0.000799s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.000834s | 0.000811s | 0.000811s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.000820s | 0.000815s | 0.000814s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.000819s | 0.000829s | 0.000807s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.000968s | 0.000969s | 0.000979s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.000876s | 0.000858s | 0.000893s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.000814s | 0.000823s | 0.000799s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.000820s | 0.000834s | 0.000798s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.000797s | 0.000828s | 0.000805s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44818861403).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
