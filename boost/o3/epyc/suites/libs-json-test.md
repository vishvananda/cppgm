# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 1.200090 | 6.562822 | 6.774577 | 0.003546 | 0.002893 | 0.003603 |
| basic_parser.test | RUN | 6.806790 | 145.719243 | 101.794466 | 0.846197 | 0.276320 | 1.116912 |
| conversion.test | RUN | 0.760871 | 2.583548 | 3.548896 | 0.001859 | 0.002147 | 0.002084 |
| doc_background.test | RUN | 0.937036 | 2.472887 | 3.581914 | 0.002050 | 0.001929 | 0.002119 |
| doc_forward_conversion.test | RUN | 0.914114 | 2.962969 | 4.027181 | 0.001737 | 0.002158 | 0.002222 |
| doc_parsing.test | RUN | 0.911108 | 2.678791 | 3.698514 | 0.002212 | 0.002079 | 0.002212 |
| doc_quick_look.test | RUN | 1.149117 | 3.338957 | 5.014887 | 0.002107 | 0.002182 | 0.002240 |
| doc_serializing.test | RUN | 0.836607 | 2.409319 | 3.522027 | 0.002181 | 0.001939 | 0.001778 |
| doc_storage_ptr.test | RUN | 0.826486 | 2.342393 | 3.509739 | 0.002046 | 0.001958 | 0.002158 |
| doc_uses_allocator.test | RUN | 0.842754 | 2.442509 | 3.427755 | 0.002092 | 0.002253 | 0.001976 |
| doc_using_numbers.test | RUN | 0.901757 | 2.423444 | 3.762961 | 0.002102 | 0.002307 | 0.002143 |
| double.test | RUN | 1.004354 | 4.175344 | 4.491354 | 2.021007 | 1.793536 | 1.929687 |
| error.test | RUN | 0.698477 | 2.263226 | 2.884057 | 0.002043 | 0.002189 | 0.002214 |
| fwd.test | RUN | 0.806804 | 2.461245 | 3.698553 | 0.001972 | 0.002230 | 0.002238 |
| json.test | RUN | 0.852702 | 2.885366 | 3.917874 | 0.001764 | 0.002224 | 0.002190 |
| kind.test | RUN | 0.620489 | 2.146374 | 2.671525 | 0.001913 | 0.002324 | 0.002082 |
| memory_resource.test | RUN | 0.893363 | 2.837033 | 3.835437 | 0.001848 | 0.002260 | 0.002073 |
| monotonic_resource.test | RUN | 0.836475 | 2.662711 | 3.212790 | 0.003104 | 0.002940 | 0.003096 |
| natvis.test | RUN | 0.841036 | 2.572735 | 3.296724 | 0.002094 | 0.002287 | 0.002072 |
| null_resource.test | RUN | 0.707577 | 2.223991 | 2.880358 | 0.001970 | 0.002331 | 0.002442 |
| object.test | RUN | 1.448901 | 7.586108 | 7.809775 | 0.009154 | 0.007936 | 0.009705 |
| parse.test | RUN | 0.962128 | 3.892983 | 3.959226 | 0.002647 | 0.003064 | 0.002905 |
| parser.test | RUN | 0.905941 | 3.339282 | 3.392122 | 0.002085 | 0.002384 | 0.002138 |
| pilfer.test | RUN | 0.476612 | 1.522115 | 1.754116 | 0.002081 | 0.002220 | 0.002166 |
| pointer.test | RUN | 1.040124 | 4.552678 | 4.443138 | 0.002252 | 0.002608 | 0.002220 |
| result_for.test | RUN | 0.867584 | 2.678003 | 3.751432 | 0.001840 | 0.002307 | 0.002206 |
| serialize.test | RUN | 0.873036 | 2.771872 | 3.359063 | 0.002268 | 0.002414 | 0.002246 |
| serializer.test | RUN | 1.389138 | 8.122146 | 8.047277 | 0.003315 | 0.003441 | 0.003547 |
| snippets.test | RUN | 2.102704 | 10.762665 | 10.302260 | 0.002526 | 0.002413 | 0.002168 |
| static_resource.test | RUN | 0.857030 | 2.412587 | 2.990692 | 0.002256 | 0.002074 | 0.002096 |
| storage_ptr.test | RUN | 0.887478 | 2.566234 | 3.642235 | 0.001968 | 0.002098 | 0.002246 |
| stream_parser.test | RUN | 1.067823 | 4.598707 | 5.193133 | 0.130085 | 0.176391 | 0.132051 |
| string.test | RUN | 1.861579 | 10.863764 | 10.600164 | 0.003541 | 0.002734 | 0.003399 |
| string_view.test | RUN | 0.527963 | 1.661590 | 2.006434 | 0.001820 | 0.002332 | 0.002114 |
| value.test | RUN | 1.803378 | 12.998745 | 10.545978 | 0.004656 | 0.004290 | 0.005440 |
| value_from.test | RUN | 1.645285 | 7.352356 | 8.601263 | 0.002320 | 0.002224 | 0.002129 |
| value_stack.test | RUN | 0.845932 | 2.326864 | 3.196276 | 0.002272 | 0.002117 | 0.001932 |
| value_to.test | RUN | 3.794116 | 23.106921 | 21.826353 | 0.004150 | 0.003941 | 0.004140 |
| value_ref.test | RUN | 0.974305 | 3.589782 | 4.409849 | 0.001815 | 0.002146 | 0.002354 |
| utf8.test | RUN | 0.733821 | 2.273927 | 2.952867 | 0.002088 | 0.002110 | 0.002129 |
| visit.test | RUN | 0.970801 | 3.609355 | 4.099709 | 0.001936 | 0.002042 | 0.002144 |
| d2s_intrinsics_test.test | RUN | 0.706694 | 2.009084 | 2.522053 | 0.002031 | 0.001989 | 0.002156 |
| d2s_table_test.test | RUN | 0.721121 | 2.229836 | 2.585958 | 0.002103 | 0.001953 | 0.002168 |
| d2s_test.test | RUN | 0.757818 | 2.739332 | 3.354453 | 0.002260 | 0.002097 | 0.001970 |
| parse_into.test | RUN | 22.187053 | 184.212238 | 122.186549 | 0.003464 | 0.003324 | 0.003070 |
| limits.test | RUN | 2.822711 | 15.586086 | 14.132343 | 0.002562 | 0.002491 | 0.002540 |
| header_only.test | RUN | 1.919180 | 12.650690 | 10.430971 | 0.001956 | 0.002124 | 0.002130 |
| no_exceptions.test | RUN | 2.670429 | 14.340370 | 13.918465 | 0.002220 | 0.001946 | 0.002314 |
| intrusive_macros.test | RUN | 2.210595 | 14.404276 | 12.116503 | 0.001806 | 0.001874 | 0.002170 |
| _gdb-printers.test | RUN | 0.405121 | 1.103229 | 1.648296 | 0.236697 | 0.391573 | 0.258449 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.893× | 0.884×, 0.902× | 1.008× |
| clang | 1.084× | 1.102×, 1.066× | 1.007× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45850603565).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 8 | 0.002118s | 0.001888s | 0.002113s | native test oracle; output varies |
| basic_parser.test | 1 | 0.489004s | 0.302226s | 0.647761s | native test oracle; output varies |
| conversion.test | 10 | 0.001154s | 0.001157s | 0.001186s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.001156s | 0.001175s | 0.001165s | byte equality observed |
| d2s_table_test.test | 10 | 0.001171s | 0.001236s | 0.001181s | byte equality observed |
| d2s_test.test | 10 | 0.001235s | 0.001259s | 0.001218s | byte equality observed |
| doc_background.test | 10 | 0.001179s | 0.001187s | 0.001151s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.001218s | 0.001236s | 0.001200s | byte equality observed |
| doc_parsing.test | 10 | 0.001230s | 0.001263s | 0.001229s | byte equality observed |
| doc_quick_look.test | 10 | 0.001195s | 0.001241s | 0.001212s | byte equality observed |
| doc_serializing.test | 10 | 0.001203s | 0.001178s | 0.001219s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.001197s | 0.001218s | 0.001202s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.001205s | 0.001171s | 0.001181s | byte equality observed |
| doc_using_numbers.test | 10 | 0.001209s | 0.001180s | 0.001168s | byte equality observed |
| double.test | 1 | 1.164834s | 1.154170s | 1.174182s | native test oracle; output varies |
| error.test | 10 | 0.001266s | 0.001299s | 0.001296s | byte equality observed |
| fwd.test | 10 | 0.001202s | 0.001197s | 0.001170s | byte equality observed |
| header_only.test | 10 | 0.001173s | 0.001182s | 0.001157s | byte equality observed |
| intrusive_macros.test | 10 | 0.001238s | 0.001233s | 0.001226s | byte equality observed |
| json.test | 10 | 0.001210s | 0.001221s | 0.001183s | byte equality observed |
| kind.test | 10 | 0.001227s | 0.001245s | 0.001203s | byte equality observed |
| limits.test | 10 | 0.001435s | 0.001430s | 0.001398s | byte equality observed |
| memory_resource.test | 10 | 0.001230s | 0.001260s | 0.001206s | byte equality observed |
| monotonic_resource.test | 10 | 0.001770s | 0.001617s | 0.001688s | native test oracle; output varies |
| natvis.test | 10 | 0.001238s | 0.001266s | 0.001216s | byte equality observed |
| no_exceptions.test | 10 | 0.001233s | 0.001244s | 0.001206s | byte equality observed |
| null_resource.test | 10 | 0.001256s | 0.001288s | 0.001234s | byte equality observed |
| object.test | 4 | 0.005007s | 0.004080s | 0.004877s | native test oracle; output varies |
| parse.test | 10 | 0.001696s | 0.001693s | 0.001694s | byte equality observed |
| parse_into.test | 6 | 0.002720s | 0.002623s | 0.002496s | native test oracle; output varies |
| parser.test | 10 | 0.001376s | 0.001335s | 0.001357s | byte equality observed |
| pilfer.test | 10 | 0.001190s | 0.001166s | 0.001192s | byte equality observed |
| pointer.test | 10 | 0.001417s | 0.001409s | 0.001404s | byte equality observed |
| result_for.test | 10 | 0.001198s | 0.001192s | 0.001171s | byte equality observed |
| serialize.test | 10 | 0.001245s | 0.001276s | 0.001241s | byte equality observed |
| serializer.test | 9 | 0.002010s | 0.002003s | 0.002008s | native test oracle; output varies |
| snippets.test | 10 | 0.001446s | 0.001414s | 0.001406s | byte equality observed |
| static_resource.test | 10 | 0.001281s | 0.001254s | 0.001259s | byte equality observed |
| storage_ptr.test | 10 | 0.001248s | 0.001241s | 0.001228s | byte equality observed |
| stream_parser.test | 1 | 0.080771s | 0.078228s | 0.056982s | native test oracle; output varies |
| string.test | 8 | 0.002007s | 0.001781s | 0.002007s | native test oracle; output varies |
| string_view.test | 10 | 0.001171s | 0.001157s | 0.001210s | byte equality observed |
| utf8.test | 10 | 0.001183s | 0.001171s | 0.001195s | byte equality observed |
| value.test | 7 | 0.002609s | 0.002390s | 0.002972s | native test oracle; output varies |
| value_from.test | 10 | 0.001389s | 0.001376s | 0.001401s | byte equality observed |
| value_ref.test | 10 | 0.001252s | 0.001260s | 0.001243s | byte equality observed |
| value_stack.test | 10 | 0.001236s | 0.001262s | 0.001225s | byte equality observed |
| value_to.test | 8 | 0.002187s | 0.002160s | 0.002171s | native test oracle; output varies |
| visit.test | 10 | 0.001207s | 0.001229s | 0.001248s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45850603565).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
