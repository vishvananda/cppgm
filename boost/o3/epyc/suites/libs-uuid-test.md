# libs/uuid/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_include1.test | RUN | 0.612394 | 1.297804 | 2.304270 | 0.000815 | 0.000811 | 0.001470 |
| test_uuid.test | RUN | 0.363018 | 1.069053 | 1.612128 | 0.002034 | 0.002144 | 0.002026 |
| test_uuid_no_simd.test | RUN | 0.349977 | 1.002501 | 1.382474 | 0.001910 | 0.002042 | 0.002061 |
| test_uuid_2.test | RUN | 0.264600 | 0.752191 | 1.027096 | 0.001980 | 0.001868 | 0.001795 |
| test_uuid_3.test | RUN | 0.224742 | 0.561214 | 0.865706 | 0.001991 | 0.002025 | 0.001718 |
| test_alignment.test | RUN | 0.191265 | 0.489527 | 0.745607 | 0.002018 | 0.001733 | 0.002078 |
| test_alignment_2.test | RUN | 0.204818 | 0.468251 | 0.754712 | 0.001964 | 0.001918 | 0.002102 |
| test_attribute_packed.test | RUN | 0.197602 | 0.482991 | 0.722521 | 0.002120 | 0.002076 | 0.001897 |
| test_pragma_pack.test | RUN | 0.203054 | 0.488478 | 0.766459 | 0.002140 | 0.001909 | 0.001996 |
| test_data.test | RUN | 0.233809 | 0.860766 | 1.058399 | 0.001938 | 0.002110 | 0.002108 |
| test_comparison.test | RUN | 0.349772 | 1.021625 | 1.468591 | 0.001728 | 0.002125 | 0.002051 |
| test_comparison_no_simd.test | RUN | 0.314285 | 1.168281 | 1.235668 | 0.002015 | 0.001997 | 0.001990 |
| test_io.test | RUN | 0.413093 | 1.851697 | 2.107449 | 0.001946 | 0.002188 | 0.002184 |
| test_io_no_simd.test | RUN | 0.368594 | 1.846186 | 1.937253 | 0.001863 | 0.001944 | 0.001517 |
| test_io_2.test | RUN | 0.319273 | 1.904514 | 1.422619 | 0.001969 | 0.002164 | 0.002275 |
| test_io_2_no_simd.test | RUN | 0.292996 | 1.810624 | 1.335573 | 0.001903 | 0.002202 | 0.002319 |
| test_to_chars.test | RUN | 0.262514 | 1.204568 | 1.367320 | 0.002042 | 0.002217 | 0.002155 |
| test_to_chars_no_simd.test | RUN | 0.291291 | 1.237916 | 1.300034 | 0.001804 | 0.002093 | 0.002124 |
| test_to_chars_2.test | RUN | 0.343694 | 2.212946 | 1.609930 | 0.002060 | 0.002045 | 0.001800 |
| test_to_chars_2_no_simd.test | RUN | 0.366154 | 2.374657 | 1.441534 | 0.001832 | 0.002071 | 0.001606 |
| test_to_chars_3.test | RUN | 0.243628 | 0.809583 | 0.993815 | 0.002060 | 0.001880 | 0.001890 |
| test_from_chars.test | RUN | 0.275607 | 1.140585 | 1.164091 | 0.002094 | 0.001853 | 0.001824 |
| test_from_chars_no_simd.test | RUN | 0.224685 | 0.932979 | 0.936686 | 0.001890 | 0.001924 | 0.002106 |
| test_from_chars_2.test | RUN | 0.260027 | 1.096190 | 1.113362 | 0.002042 | 0.002116 | 0.002076 |
| test_from_chars_2_no_simd.test | RUN | 0.217305 | 0.829788 | 0.935931 | 0.001900 | 0.002011 | 0.001815 |
| test_uuid_from_string.test | RUN | 0.314709 | 1.177960 | 1.348018 | 0.001885 | 0.002190 | 0.001632 |
| test_uuid_from_string_2.test | RUN | 0.270535 | 1.081460 | 1.163922 | 0.002056 | 0.002140 | 0.002461 |
| test_uuid_from_string_3.test | RUN | 0.275097 | 1.084838 | 1.154415 | 0.001974 | 0.002089 | 0.002066 |
| test_uuid_clock.test | RUN | 0.183558 | 0.450327 | 0.714169 | 0.001919 | 0.002128 | 0.001848 |
| test_nil_generator.test | RUN | 0.210159 | 0.558498 | 0.847873 | 0.001984 | 0.002110 | 0.002204 |
| test_string_generator.test | RUN | 0.270608 | 0.870091 | 1.163129 | 0.002018 | 0.002377 | 0.002124 |
| test_string_generator_2.test | RUN | 0.327695 | 1.229934 | 1.272430 | 0.001844 | 0.002108 | 0.002090 |
| test_random_generator.test | RUN | 0.442390 | 2.360554 | 1.902781 | 0.003274 | 0.003414 | 0.003246 |
| test_random_generator_2.test | RUN | 0.332886 | 0.906579 | 1.353473 | 0.001916 | 0.002098 | 0.002076 |
| test_name_generator.test | RUN | 0.293972 | 3.046301 | 1.399497 | 0.001897 | 0.002038 | 0.002116 |
| test_namespaces.test | RUN | 0.234118 | 0.648660 | 0.941825 | 0.001721 | 0.002105 | 0.001675 |
| test_name_generator_md5.test | RUN | 0.295239 | 1.461072 | 1.344651 | 0.002036 | 0.002162 | 0.002112 |
| test_name_generator_sha1.test | RUN | 0.282769 | 4.535021 | 1.319088 | 0.002084 | 0.001980 | 0.002118 |
| test_time_generator.test | RUN | 0.313045 | 0.911917 | 1.298286 | 0.002096 | 0.001935 | 0.002176 |
| test_time_generator_v1.test | RUN | 0.342009 | 1.002030 | 1.458676 | 0.002449 | 0.002623 | 0.002763 |
| test_time_generator_v1_2.test | RUN | 0.342498 | 0.929339 | 1.394045 | 0.002364 | 0.002509 | 0.002516 |
| test_time_generator_v1_3.test | RUN | 0.387281 | 0.992319 | 1.542734 | 0.005537 | 0.005260 | 0.005672 |
| test_time_generator_v6.test | RUN | 0.351573 | 1.004824 | 1.451462 | 0.002424 | 0.002713 | 0.002658 |
| test_time_generator_v6_2.test | RUN | 0.337623 | 0.954313 | 1.380776 | 0.002278 | 0.002438 | 0.002448 |
| test_time_generator_v6_3.test | RUN | 0.371699 | 0.998976 | 1.569006 | 0.005812 | 0.005369 | 0.005526 |
| test_time_generator_v7.test | RUN | 0.325188 | 0.991492 | 1.383580 | 0.002364 | 0.002278 | 0.002254 |
| test_time_generator_v7_2.test | RUN | 0.316916 | 0.890867 | 1.329455 | 0.001918 | 0.002171 | 0.001859 |
| test_time_generator_v7_3.test | RUN | 0.320096 | 1.130841 | 1.321967 | 0.002871 | 0.003192 | 0.003078 |
| test_serialization.test | RUN | 0.575163 | 1.693813 | 2.276647 | 0.002172 | 0.002200 | 0.002359 |
| test_tagging.test | RUN | 0.322886 | 1.091496 | 1.367329 | 0.001809 | 0.001906 | 0.002010 |
| test_uuid_class.test | RUN | 0.338055 | 0.953721 | 1.371546 | 0.002008 | 0.001757 | 0.001862 |
| test_uuid_in_map.test | RUN | 0.367950 | 1.110451 | 1.550245 | 0.001910 | 0.001936 | 0.001986 |
| test_hash.test | RUN | 0.359133 | 0.998634 | 1.440966 | 0.002131 | 0.002211 | 0.002158 |
| test_hash_value.test | RUN | 0.264383 | 0.688970 | 1.037106 | 0.005632 | 0.006060 | 0.006142 |
| test_std_unordered.test | RUN | 0.345305 | 1.106884 | 1.441315 | 0.001940 | 0.002208 | 0.002160 |
| test_boost_unordered.test | RUN | 0.474041 | 1.442717 | 1.861764 | 0.001802 | 0.002032 | 0.002013 |
| test_detail_md5.test | RUN | 0.224798 | 0.699711 | 0.998721 | 0.002032 | 0.002032 | 0.002207 |
| test_detail_sha1.test | RUN | 0.208874 | 0.894927 | 0.901106 | 0.013534 | 0.011210 | 0.011854 |
| test_detail_endian.test | RUN | 0.164987 | 0.498578 | 0.664301 | 0.001914 | 0.001800 | 0.002031 |
| test_detail_chacha20.test | RUN | 0.179092 | 0.621663 | 0.696214 | 0.002071 | 0.001808 | 0.002078 |
| random_provider_no_copy_ctor.test | COMPILE_FAIL | 0.163511 | 0.359273 | 0.582931 | — | — | — |
| random_provider_no_copy_assign.test | COMPILE_FAIL | 0.169917 | 0.368097 | 0.580822 | — | — | — |
| test_msvc_simd_bug981648.test | RUN | 0.277055 | 0.706756 | 1.059542 | 0.001990 | 0.002158 | 0.002035 |
| test_bench_random.test | RUN | 0.305089 | 0.918161 | 1.338942 | 0.008497 | 0.008442 | 0.008797 |
| test_entropy_error.test | RUN | 0.159251 | 0.431894 | 0.618008 | 0.001784 | 0.001986 | 0.002103 |
| test_detail_random_provider.test | RUN | 0.305384 | 0.727456 | 1.213699 | 0.001696 | 0.001855 | 0.002002 |
| test_constants.test | RUN | 0.236126 | 0.667682 | 0.920702 | 0.001760 | 0.002140 | 0.001951 |
| test_uuid_cx.test | COMPILE | 0.135165 | 0.304491 | 0.505098 | — | — | — |
| test_uuid_cx2.test | RUN | 0.249550 | 0.747929 | 1.003681 | 0.001796 | 0.001980 | 0.002015 |
| test_uuid_cx3.test | RUN | 0.217389 | 0.607033 | 0.935693 | 0.001942 | 0.001950 | 0.002093 |
| test_uuid_cx3_no_simd.test | RUN | 0.203760 | 0.558086 | 0.829086 | 0.001465 | 0.001910 | 0.001861 |
| test_hash_value_cx.test | RUN | 0.207870 | 0.526323 | 0.812936 | 0.001714 | 0.001761 | 0.001865 |
| test_string_generator_cx.test | RUN | 0.242020 | 0.664666 | 0.934857 | 0.002094 | 0.001750 | 0.002104 |
| test_string_generator_cx2.test | RUN | 0.296667 | 0.816106 | 1.077909 | 0.001783 | 0.001950 | 0.002083 |
| test_constants_cx.test | RUN | 0.213055 | 0.482973 | 0.779790 | 0.001760 | 0.001721 | 0.001995 |
| test_from_chars_cx.test | RUN | 0.243820 | 0.897998 | 1.049521 | 0.001736 | 0.002112 | 0.001565 |
| test_from_chars_cx2.test | RUN | 0.253503 | 1.104373 | 1.083235 | 0.001932 | 0.001526 | 0.001900 |
| test_to_chars_cx.test | RUN | 0.263469 | 1.001830 | 1.118982 | 0.001829 | 0.002099 | 0.001792 |
| test_uuid_from_string_cx.test | RUN | 0.256751 | 0.985499 | 1.107782 | 0.001395 | 0.001451 | 0.001634 |
| quick.test | RUN | 0.280182 | 0.759843 | 1.094561 | 0.001268 | 0.001533 | 0.001595 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.982× | 0.972×, 0.992× | 1.010× |
| clang | 0.994× | 0.992×, 0.997× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46045514956).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| quick.test | 9 | 0.001489s | 0.001464s | 0.001479s | byte equality observed |
| test_alignment.test | 10 | 0.001439s | 0.001477s | 0.001481s | byte equality observed |
| test_alignment_2.test | 10 | 0.001447s | 0.001450s | 0.001452s | byte equality observed |
| test_attribute_packed.test | 10 | 0.001429s | 0.001412s | 0.001443s | byte equality observed |
| test_bench_random.test | 3 | 0.008313s | 0.008262s | 0.008306s | native test oracle; output varies |
| test_boost_unordered.test | 10 | 0.001513s | 0.001448s | 0.001505s | byte equality observed |
| test_comparison.test | 10 | 0.001499s | 0.001485s | 0.001480s | byte equality observed |
| test_comparison_no_simd.test | 10 | 0.001513s | 0.001509s | 0.001467s | byte equality observed |
| test_constants.test | 10 | 0.001481s | 0.001493s | 0.001514s | byte equality observed |
| test_constants_cx.test | 10 | 0.001460s | 0.001508s | 0.001476s | byte equality observed |
| test_data.test | 10 | 0.001470s | 0.001476s | 0.001458s | byte equality observed |
| test_detail_chacha20.test | 10 | 0.001501s | 0.001482s | 0.001460s | byte equality observed |
| test_detail_endian.test | 10 | 0.001470s | 0.001449s | 0.001449s | byte equality observed |
| test_detail_md5.test | 10 | 0.001519s | 0.001527s | 0.001491s | byte equality observed |
| test_detail_random_provider.test | 10 | 0.001493s | 0.001426s | 0.001458s | byte equality observed |
| test_detail_sha1.test | 2 | 0.012065s | 0.010421s | 0.010703s | byte equality observed |
| test_entropy_error.test | 10 | 0.001483s | 0.001448s | 0.001501s | byte equality observed |
| test_from_chars.test | 10 | 0.001476s | 0.001463s | 0.001451s | byte equality observed |
| test_from_chars_2.test | 10 | 0.001467s | 0.001465s | 0.001475s | byte equality observed |
| test_from_chars_2_no_simd.test | 10 | 0.001499s | 0.001498s | 0.001502s | byte equality observed |
| test_from_chars_cx.test | 10 | 0.001471s | 0.001487s | 0.001490s | byte equality observed |
| test_from_chars_cx2.test | 10 | 0.001493s | 0.001496s | 0.001539s | byte equality observed |
| test_from_chars_no_simd.test | 10 | 0.001491s | 0.001471s | 0.001516s | byte equality observed |
| test_hash.test | 8 | 0.001526s | 0.001493s | 0.001518s | byte equality observed |
| test_hash_value.test | 4 | 0.005577s | 0.005274s | 0.005411s | byte equality observed |
| test_hash_value_cx.test | 10 | 0.001470s | 0.001465s | 0.001436s | byte equality observed |
| test_include1.test | 10 | 0.000639s | 0.000636s | 0.001433s | byte equality observed |
| test_io.test | 10 | 0.001542s | 0.001561s | 0.001536s | byte equality observed |
| test_io_2.test | 10 | 0.001665s | 0.001680s | 0.001694s | byte equality observed |
| test_io_2_no_simd.test | 9 | 0.001689s | 0.001702s | 0.001677s | byte equality observed |
| test_io_no_simd.test | 10 | 0.001568s | 0.001604s | 0.001579s | byte equality observed |
| test_msvc_simd_bug981648.test | 9 | 0.001521s | 0.001512s | 0.001489s | native test oracle; output varies |
| test_name_generator.test | 10 | 0.001523s | 0.001540s | 0.001513s | byte equality observed |
| test_name_generator_md5.test | 10 | 0.001546s | 0.001532s | 0.001516s | byte equality observed |
| test_name_generator_sha1.test | 10 | 0.001556s | 0.001592s | 0.001539s | byte equality observed |
| test_namespaces.test | 10 | 0.001497s | 0.001458s | 0.001497s | byte equality observed |
| test_nil_generator.test | 10 | 0.001452s | 0.001463s | 0.001442s | byte equality observed |
| test_pragma_pack.test | 10 | 0.001447s | 0.001438s | 0.001476s | byte equality observed |
| test_random_generator.test | 7 | 0.002934s | 0.002884s | 0.002855s | native test oracle; output varies |
| test_random_generator_2.test | 10 | 0.001488s | 0.001513s | 0.001441s | byte equality observed |
| test_serialization.test | 10 | 0.001637s | 0.001621s | 0.001573s | byte equality observed |
| test_std_unordered.test | 10 | 0.001568s | 0.001631s | 0.001546s | byte equality observed |
| test_string_generator.test | 10 | 0.001644s | 0.001679s | 0.001626s | byte equality observed |
| test_string_generator_2.test | 10 | 0.001516s | 0.001512s | 0.001504s | byte equality observed |
| test_string_generator_cx.test | 10 | 0.001516s | 0.001493s | 0.001449s | byte equality observed |
| test_string_generator_cx2.test | 10 | 0.001503s | 0.001542s | 0.001488s | byte equality observed |
| test_tagging.test | 8 | 0.001517s | 0.001549s | 0.001497s | byte equality observed |
| test_time_generator.test | 10 | 0.001517s | 0.001509s | 0.001495s | byte equality observed |
| test_time_generator_v1.test | 9 | 0.002025s | 0.002138s | 0.002198s | byte equality observed |
| test_time_generator_v1_2.test | 9 | 0.001819s | 0.001835s | 0.001854s | byte equality observed |
| test_time_generator_v1_3.test | 5 | 0.004527s | 0.004526s | 0.004943s | byte equality observed |
| test_time_generator_v6.test | 10 | 0.002052s | 0.002149s | 0.002133s | byte equality observed |
| test_time_generator_v6_2.test | 10 | 0.001833s | 0.001826s | 0.001860s | byte equality observed |
| test_time_generator_v6_3.test | 5 | 0.004823s | 0.004557s | 0.004664s | byte equality observed |
| test_time_generator_v7.test | 10 | 0.001822s | 0.001817s | 0.001833s | byte equality observed |
| test_time_generator_v7_2.test | 10 | 0.001580s | 0.001547s | 0.001529s | byte equality observed |
| test_time_generator_v7_3.test | 8 | 0.002504s | 0.002498s | 0.002499s | byte equality observed |
| test_to_chars.test | 10 | 0.001568s | 0.001583s | 0.001554s | byte equality observed |
| test_to_chars_2.test | 9 | 0.001521s | 0.001535s | 0.001537s | byte equality observed |
| test_to_chars_2_no_simd.test | 10 | 0.001527s | 0.001507s | 0.001501s | byte equality observed |
| test_to_chars_3.test | 10 | 0.001511s | 0.001529s | 0.001469s | byte equality observed |
| test_to_chars_cx.test | 8 | 0.001515s | 0.001509s | 0.001496s | byte equality observed |
| test_to_chars_no_simd.test | 10 | 0.001607s | 0.001566s | 0.001564s | byte equality observed |
| test_uuid.test | 10 | 0.001491s | 0.001479s | 0.001508s | byte equality observed |
| test_uuid_2.test | 10 | 0.001490s | 0.001496s | 0.001458s | byte equality observed |
| test_uuid_3.test | 10 | 0.001481s | 0.001486s | 0.001471s | byte equality observed |
| test_uuid_class.test | 10 | 0.001494s | 0.001507s | 0.001522s | byte equality observed |
| test_uuid_clock.test | 8 | 0.001496s | 0.001472s | 0.001497s | byte equality observed |
| test_uuid_cx2.test | 10 | 0.001501s | 0.001500s | 0.001504s | byte equality observed |
| test_uuid_cx3.test | 10 | 0.001494s | 0.001468s | 0.001493s | byte equality observed |
| test_uuid_cx3_no_simd.test | 10 | 0.001502s | 0.001480s | 0.001461s | byte equality observed |
| test_uuid_from_string.test | 10 | 0.001533s | 0.001512s | 0.001501s | byte equality observed |
| test_uuid_from_string_2.test | 10 | 0.001937s | 0.001856s | 0.001984s | byte equality observed |
| test_uuid_from_string_3.test | 10 | 0.001645s | 0.001603s | 0.001643s | byte equality observed |
| test_uuid_from_string_cx.test | 10 | 0.001494s | 0.001446s | 0.001491s | byte equality observed |
| test_uuid_in_map.test | 10 | 0.001503s | 0.001521s | 0.001498s | byte equality observed |
| test_uuid_no_simd.test | 10 | 0.001493s | 0.001493s | 0.001500s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46045514956).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
