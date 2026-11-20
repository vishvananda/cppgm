# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 1.286758 | 6.647017 | 6.977307 | 0.003627 | 0.003459 | 0.003658 |
| basic_parser.test | RUN | 6.838164 | 156.077882 | 107.853026 | 0.837514 | 0.299098 | 1.120466 |
| conversion.test | RUN | 0.929366 | 2.567117 | 3.520825 | 0.001869 | 0.002144 | 0.002190 |
| doc_background.test | RUN | 0.865360 | 2.546582 | 3.641466 | 0.002276 | 0.001944 | 0.002200 |
| doc_forward_conversion.test | RUN | 0.909096 | 2.957788 | 4.094877 | 0.002159 | 0.001972 | 0.002203 |
| doc_parsing.test | RUN | 0.901745 | 2.629614 | 3.742478 | 0.002281 | 0.002082 | 0.002268 |
| doc_quick_look.test | RUN | 1.149758 | 3.300556 | 5.071683 | 0.002058 | 0.002171 | 0.001978 |
| doc_serializing.test | RUN | 0.819901 | 2.350317 | 3.409664 | 0.002024 | 0.001856 | 0.001925 |
| doc_storage_ptr.test | RUN | 0.835787 | 2.527429 | 3.526133 | 0.002020 | 0.002326 | 0.002222 |
| doc_uses_allocator.test | RUN | 0.868330 | 2.444143 | 3.410258 | 0.001968 | 0.002088 | 0.002278 |
| doc_using_numbers.test | RUN | 0.908234 | 2.441839 | 3.793714 | 0.002000 | 0.002147 | 0.002264 |
| double.test | RUN | 0.980692 | 4.197645 | 4.544789 | 1.834324 | 1.995120 | 2.113445 |
| error.test | RUN | 0.678896 | 2.279913 | 2.869763 | 0.002112 | 0.002018 | 0.002194 |
| fwd.test | RUN | 0.835389 | 2.321068 | 3.157643 | 0.002065 | 0.001949 | 0.001943 |
| json.test | RUN | 0.894039 | 2.718423 | 3.867113 | 0.002098 | 0.002082 | 0.002246 |
| kind.test | RUN | 0.672300 | 2.191874 | 2.731739 | 0.002320 | 0.002306 | 0.002138 |
| memory_resource.test | RUN | 0.948685 | 2.813075 | 3.813491 | 0.002063 | 0.002306 | 0.002466 |
| monotonic_resource.test | RUN | 0.860850 | 2.711531 | 3.241943 | 0.003148 | 0.002812 | 0.002998 |
| natvis.test | RUN | 0.865248 | 2.528125 | 3.300375 | 0.002155 | 0.002132 | 0.002014 |
| null_resource.test | RUN | 0.709876 | 2.247862 | 2.922177 | 0.002122 | 0.002298 | 0.002398 |
| object.test | RUN | 1.430143 | 7.708975 | 7.304595 | 0.009579 | 0.007533 | 0.007569 |
| parse.test | RUN | 0.940023 | 3.977423 | 4.210435 | 0.002896 | 0.002968 | 0.003263 |
| parser.test | RUN | 0.906235 | 3.411857 | 3.940708 | 0.002464 | 0.002624 | 0.001825 |
| pilfer.test | RUN | 0.462401 | 1.533761 | 1.771514 | 0.001925 | 0.002134 | 0.002115 |
| pointer.test | RUN | 1.015768 | 4.607034 | 4.632492 | 0.002395 | 0.002469 | 0.002450 |
| result_for.test | RUN | 0.848117 | 2.723174 | 3.322855 | 0.001614 | 0.002206 | 0.001980 |
| serialize.test | RUN | 0.866940 | 2.840918 | 3.362891 | 0.002228 | 0.002390 | 0.002306 |
| serializer.test | RUN | 1.357397 | 8.121161 | 7.928830 | 0.003360 | 0.003438 | 0.003442 |
| snippets.test | RUN | 2.118016 | 10.630381 | 10.592769 | 0.002445 | 0.002250 | 0.002669 |
| static_resource.test | RUN | 0.857896 | 2.490876 | 3.199836 | 0.002353 | 0.002370 | 0.002297 |
| storage_ptr.test | RUN | 0.871526 | 2.598898 | 3.576887 | 0.002254 | 0.002136 | 0.002230 |
| stream_parser.test | RUN | 1.027419 | 4.905907 | 5.281116 | 0.124632 | 0.166366 | 0.121185 |
| string.test | RUN | 1.839243 | 11.897352 | 10.159188 | 0.003676 | 0.003160 | 0.003846 |
| string_view.test | RUN | 0.523780 | 1.516556 | 2.141322 | 0.002042 | 0.002278 | 0.002332 |
| value.test | RUN | 1.790056 | 11.886088 | 10.916995 | 0.004715 | 0.003419 | 0.005718 |
| value_from.test | RUN | 1.661743 | 7.815610 | 8.411300 | 0.002503 | 0.002477 | 0.002440 |
| value_stack.test | RUN | 0.816091 | 2.538892 | 3.347807 | 0.002174 | 0.002122 | 0.002294 |
| value_to.test | RUN | 3.841231 | 23.553112 | 22.193050 | 0.003852 | 0.003644 | 0.004040 |
| value_ref.test | RUN | 0.941108 | 3.644011 | 4.226913 | 0.002135 | 0.002086 | 0.002424 |
| utf8.test | RUN | 0.714302 | 2.419162 | 2.649785 | 0.002240 | 0.002036 | 0.001880 |
| visit.test | RUN | 0.962437 | 3.450145 | 3.933046 | 0.002062 | 0.002234 | 0.001859 |
| d2s_intrinsics_test.test | RUN | 0.693997 | 2.047303 | 2.857492 | 0.002106 | 0.002231 | 0.002054 |
| d2s_table_test.test | RUN | 0.704859 | 2.186408 | 2.876363 | 0.002242 | 0.002127 | 0.002244 |
| d2s_test.test | RUN | 0.749168 | 2.786564 | 3.066136 | 0.002245 | 0.002158 | 0.002317 |
| parse_into.test | RUN | 22.309385 | 189.746831 | 124.526702 | 0.003649 | 0.003526 | 0.003142 |
| limits.test | RUN | 2.972767 | 17.279078 | 15.093051 | 0.002582 | 0.002432 | 0.002667 |
| header_only.test | RUN | 1.845146 | 12.797221 | 9.741890 | 0.002082 | 0.002150 | 0.002009 |
| no_exceptions.test | RUN | 2.701303 | 14.854116 | 13.696470 | 0.002166 | 0.001928 | 0.002244 |
| intrusive_macros.test | RUN | 2.246733 | 14.134330 | 10.997518 | 0.002154 | 0.001997 | 0.002106 |
| _gdb-printers.test | RUN | 0.379984 | 0.977165 | 1.632566 | 0.248810 | 0.283374 | 0.277884 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.893× | 0.889×, 0.897× | 0.990× |
| clang | 1.086× | 1.086×, 1.085× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44612055398).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 8 | 0.002147s | 0.001940s | 0.001989s | native test oracle; output varies |
| basic_parser.test | 1 | 0.484030s | 0.296585s | 0.652705s | native test oracle; output varies |
| conversion.test | 10 | 0.001194s | 0.001202s | 0.001169s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.001180s | 0.001203s | 0.001162s | byte equality observed |
| d2s_table_test.test | 10 | 0.001200s | 0.001211s | 0.001197s | byte equality observed |
| d2s_test.test | 10 | 0.001272s | 0.001286s | 0.001253s | byte equality observed |
| doc_background.test | 10 | 0.001216s | 0.001252s | 0.001181s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.001231s | 0.001256s | 0.001216s | byte equality observed |
| doc_parsing.test | 10 | 0.001275s | 0.001250s | 0.001243s | byte equality observed |
| doc_quick_look.test | 10 | 0.001226s | 0.001204s | 0.001206s | byte equality observed |
| doc_serializing.test | 10 | 0.001211s | 0.001228s | 0.001171s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.001218s | 0.001258s | 0.001206s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.001231s | 0.001173s | 0.001174s | byte equality observed |
| doc_using_numbers.test | 10 | 0.001207s | 0.001186s | 0.001155s | byte equality observed |
| double.test | 1 | 1.174457s | 1.166303s | 1.167727s | native test oracle; output varies |
| error.test | 10 | 0.001331s | 0.001316s | 0.001309s | byte equality observed |
| fwd.test | 10 | 0.001190s | 0.001188s | 0.001188s | byte equality observed |
| header_only.test | 10 | 0.001185s | 0.001193s | 0.001174s | byte equality observed |
| intrusive_macros.test | 10 | 0.001241s | 0.001235s | 0.001263s | byte equality observed |
| json.test | 10 | 0.001213s | 0.001241s | 0.001229s | byte equality observed |
| kind.test | 10 | 0.001255s | 0.001239s | 0.001234s | byte equality observed |
| limits.test | 10 | 0.001449s | 0.001436s | 0.001443s | byte equality observed |
| memory_resource.test | 10 | 0.001241s | 0.001254s | 0.001232s | byte equality observed |
| monotonic_resource.test | 10 | 0.001796s | 0.001643s | 0.001763s | byte equality observed |
| natvis.test | 10 | 0.001275s | 0.001282s | 0.001258s | byte equality observed |
| no_exceptions.test | 10 | 0.001243s | 0.001229s | 0.001242s | byte equality observed |
| null_resource.test | 10 | 0.001315s | 0.001265s | 0.001269s | byte equality observed |
| object.test | 4 | 0.005057s | 0.004117s | 0.005340s | native test oracle; output varies |
| parse.test | 10 | 0.001745s | 0.001688s | 0.001742s | byte equality observed |
| parse_into.test | 6 | 0.002794s | 0.002666s | 0.002623s | native test oracle; output varies |
| parser.test | 10 | 0.001402s | 0.001346s | 0.001397s | byte equality observed |
| pilfer.test | 10 | 0.001174s | 0.001167s | 0.001191s | byte equality observed |
| pointer.test | 10 | 0.001436s | 0.001399s | 0.001433s | byte equality observed |
| result_for.test | 10 | 0.001205s | 0.001207s | 0.001206s | byte equality observed |
| serialize.test | 10 | 0.001240s | 0.001314s | 0.001251s | byte equality observed |
| serializer.test | 9 | 0.002007s | 0.002041s | 0.001989s | native test oracle; output varies |
| snippets.test | 10 | 0.001455s | 0.001442s | 0.001415s | byte equality observed |
| static_resource.test | 10 | 0.001302s | 0.001293s | 0.001279s | byte equality observed |
| storage_ptr.test | 10 | 0.001279s | 0.001275s | 0.001242s | byte equality observed |
| stream_parser.test | 1 | 0.080166s | 0.077939s | 0.056992s | native test oracle; output varies |
| string.test | 8 | 0.002073s | 0.001829s | 0.002080s | native test oracle; output varies |
| string_view.test | 10 | 0.001192s | 0.001205s | 0.001207s | byte equality observed |
| utf8.test | 10 | 0.001201s | 0.001184s | 0.001199s | byte equality observed |
| value.test | 7 | 0.002655s | 0.002399s | 0.003030s | native test oracle; output varies |
| value_from.test | 10 | 0.001415s | 0.001385s | 0.001401s | byte equality observed |
| value_ref.test | 10 | 0.001263s | 0.001261s | 0.001242s | byte equality observed |
| value_stack.test | 10 | 0.001252s | 0.001237s | 0.001254s | byte equality observed |
| value_to.test | 6 | 0.002201s | 0.002170s | 0.002194s | native test oracle; output varies |
| visit.test | 10 | 0.001242s | 0.001231s | 0.001216s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44612055398).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
