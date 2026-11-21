# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.936649 | 4.819038 | 4.465642 | 0.002917 | 0.002738 | 0.002846 |
| basic_parser.test | RUN | 5.027299 | 122.867622 | 74.096184 | 0.538062 | 0.194140 | 0.551167 |
| conversion.test | RUN | 0.692478 | 1.839244 | 2.320301 | 0.001640 | 0.002090 | 0.001728 |
| doc_background.test | RUN | 0.656623 | 1.834686 | 2.282794 | 0.002012 | 0.001940 | 0.001772 |
| doc_forward_conversion.test | RUN | 0.690541 | 2.138360 | 2.555239 | 0.001634 | 0.002142 | 0.001790 |
| doc_parsing.test | RUN | 0.673989 | 1.927914 | 2.259502 | 0.001978 | 0.001854 | 0.001796 |
| doc_quick_look.test | RUN | 0.873224 | 2.375159 | 3.208284 | 0.001905 | 0.002059 | 0.001772 |
| doc_serializing.test | RUN | 0.611710 | 1.770843 | 2.205686 | 0.001823 | 0.001818 | 0.001565 |
| doc_storage_ptr.test | RUN | 0.617268 | 1.736430 | 2.217119 | 0.001635 | 0.001707 | 0.001730 |
| doc_uses_allocator.test | RUN | 0.642652 | 1.916802 | 2.164832 | 0.001904 | 0.001862 | 0.001788 |
| doc_using_numbers.test | RUN | 0.688488 | 1.829522 | 2.446890 | 0.002078 | 0.001841 | 0.001868 |
| double.test | RUN | 0.733225 | 2.972908 | 2.819481 | 1.291231 | 1.227561 | 1.326533 |
| error.test | RUN | 0.536001 | 1.751998 | 1.902055 | 0.001883 | 0.001900 | 0.001816 |
| fwd.test | RUN | 0.638253 | 1.679425 | 2.181084 | 0.001839 | 0.002013 | 0.001742 |
| json.test | RUN | 0.665302 | 2.121484 | 2.520878 | 0.001767 | 0.002082 | 0.001833 |
| kind.test | RUN | 0.506346 | 1.620302 | 1.701827 | 0.001901 | 0.002199 | 0.001859 |
| memory_resource.test | RUN | 0.701260 | 2.162031 | 2.256614 | 0.001776 | 0.001833 | 0.001802 |
| monotonic_resource.test | RUN | 0.628664 | 1.958637 | 2.139877 | 0.002654 | 0.002554 | 0.002442 |
| natvis.test | RUN | 0.627122 | 1.901003 | 2.131626 | 0.001909 | 0.001847 | 0.001928 |
| null_resource.test | RUN | 0.529090 | 1.620518 | 1.749774 | 0.001851 | 0.002062 | 0.001928 |
| object.test | RUN | 1.052248 | 5.577495 | 5.562228 | 0.006379 | 0.005900 | 0.006763 |
| parse.test | RUN | 0.691318 | 2.847290 | 2.397009 | 0.002433 | 0.002621 | 0.002268 |
| parser.test | RUN | 0.669156 | 2.423141 | 2.316923 | 0.002151 | 0.002178 | 0.002128 |
| pilfer.test | RUN | 0.345352 | 1.088483 | 1.031905 | 0.001862 | 0.001815 | 0.001654 |
| pointer.test | RUN | 0.758743 | 3.300411 | 3.013349 | 0.001668 | 0.002154 | 0.002138 |
| result_for.test | RUN | 0.650145 | 1.999769 | 2.216076 | 0.001844 | 0.001790 | 0.001734 |
| serialize.test | RUN | 0.640416 | 2.056665 | 2.350182 | 0.002028 | 0.002068 | 0.001957 |
| serializer.test | RUN | 1.021264 | 5.887085 | 5.318815 | 0.002877 | 0.003015 | 0.002931 |
| snippets.test | RUN | 1.587547 | 8.078442 | 7.503319 | 0.002278 | 0.002076 | 0.002246 |
| static_resource.test | RUN | 0.626907 | 1.828957 | 2.152947 | 0.002042 | 0.001998 | 0.001984 |
| storage_ptr.test | RUN | 0.660656 | 2.024922 | 2.182803 | 0.001746 | 0.002130 | 0.001860 |
| stream_parser.test | RUN | 0.788933 | 3.531805 | 2.909826 | 0.086486 | 0.119481 | 0.083292 |
| string.test | RUN | 1.414022 | 8.809288 | 8.033781 | 0.002925 | 0.002654 | 0.002720 |
| string_view.test | RUN | 0.383232 | 1.196060 | 1.096198 | 0.001933 | 0.001909 | 0.001700 |
| value.test | RUN | 1.444842 | 9.118474 | 6.658856 | 0.003534 | 0.003394 | 0.003966 |
| value_from.test | RUN | 1.256009 | 5.853054 | 5.414920 | 0.002446 | 0.002198 | 0.002138 |
| value_stack.test | RUN | 0.612021 | 1.853882 | 1.988885 | 0.001569 | 0.002178 | 0.001762 |
| value_to.test | RUN | 2.888687 | 18.014550 | 15.107484 | 0.003331 | 0.003295 | 0.002884 |
| value_ref.test | RUN | 0.736938 | 2.489231 | 2.613681 | 0.001928 | 0.001928 | 0.002020 |
| utf8.test | RUN | 0.537470 | 1.600892 | 1.868239 | 0.001934 | 0.001950 | 0.001667 |
| visit.test | RUN | 0.709220 | 2.474125 | 2.468773 | 0.001910 | 0.001879 | 0.001920 |
| d2s_intrinsics_test.test | RUN | 0.528810 | 1.525470 | 1.747165 | 0.001853 | 0.001930 | 0.001803 |
| d2s_table_test.test | RUN | 0.537234 | 1.764765 | 1.850417 | 0.001992 | 0.001913 | 0.001799 |
| d2s_test.test | RUN | 0.587026 | 2.053864 | 2.068625 | 0.001795 | 0.002040 | 0.001826 |
| parse_into.test | RUN | 17.861246 | 147.642671 | 94.594270 | 0.003238 | 0.002923 | 0.003031 |
| limits.test | RUN | 2.168024 | 12.817129 | 9.877350 | 0.002146 | 0.002295 | 0.002260 |
| header_only.test | RUN | 1.455215 | 9.467400 | 6.261604 | 0.001848 | 0.001742 | 0.001726 |
| no_exceptions.test | RUN | 2.035848 | 11.151694 | 9.440309 | 0.001917 | 0.001975 | 0.001882 |
| intrusive_macros.test | RUN | 1.666164 | 10.076429 | 7.382011 | 0.001838 | 0.002046 | 0.002014 |
| _gdb-printers.test | RUN | 0.285672 | 0.822259 | 0.996049 | 0.201082 | 0.279547 | 0.214555 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.864× | 0.861×, 0.868× | 0.988× |
| clang | 1.075× | 1.072×, 1.078× | 1.005× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44830361139).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001660s | 0.001503s | 0.001642s | byte equality observed |
| basic_parser.test | 1 | 0.350785s | 0.208250s | 0.446541s | native test oracle; output varies |
| conversion.test | 10 | 0.000969s | 0.000992s | 0.001001s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000975s | 0.000980s | 0.000984s | byte equality observed |
| d2s_table_test.test | 10 | 0.001009s | 0.000998s | 0.000998s | byte equality observed |
| d2s_test.test | 10 | 0.001052s | 0.001049s | 0.001040s | byte equality observed |
| doc_background.test | 10 | 0.000998s | 0.000988s | 0.000986s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.001019s | 0.001030s | 0.001018s | byte equality observed |
| doc_parsing.test | 10 | 0.001035s | 0.001030s | 0.001030s | byte equality observed |
| doc_quick_look.test | 10 | 0.001009s | 0.001026s | 0.001013s | byte equality observed |
| doc_serializing.test | 10 | 0.001007s | 0.000992s | 0.000980s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.001008s | 0.001009s | 0.001007s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.001019s | 0.000978s | 0.000995s | byte equality observed |
| doc_using_numbers.test | 10 | 0.001009s | 0.000976s | 0.000981s | byte equality observed |
| double.test | 1 | 0.878142s | 0.835465s | 0.884678s | native test oracle; output varies |
| error.test | 10 | 0.001032s | 0.000992s | 0.001041s | byte equality observed |
| fwd.test | 10 | 0.000981s | 0.000958s | 0.000955s | byte equality observed |
| header_only.test | 10 | 0.000954s | 0.000926s | 0.000932s | byte equality observed |
| intrusive_macros.test | 10 | 0.001011s | 0.000976s | 0.000982s | byte equality observed |
| json.test | 10 | 0.000993s | 0.000961s | 0.000974s | byte equality observed |
| kind.test | 10 | 0.001002s | 0.000983s | 0.001004s | byte equality observed |
| limits.test | 10 | 0.001194s | 0.001164s | 0.001159s | byte equality observed |
| memory_resource.test | 10 | 0.001013s | 0.000998s | 0.000979s | byte equality observed |
| monotonic_resource.test | 8 | 0.001436s | 0.001308s | 0.001356s | byte equality observed |
| natvis.test | 10 | 0.001010s | 0.001010s | 0.000978s | byte equality observed |
| no_exceptions.test | 10 | 0.001016s | 0.000985s | 0.000967s | byte equality observed |
| null_resource.test | 10 | 0.001040s | 0.001029s | 0.000998s | byte equality observed |
| object.test | 5 | 0.003840s | 0.003200s | 0.003742s | native test oracle; output varies |
| parse.test | 10 | 0.001403s | 0.001380s | 0.001400s | byte equality observed |
| parse_into.test | 4 | 0.002385s | 0.002200s | 0.002165s | native test oracle; output varies |
| parser.test | 10 | 0.001135s | 0.001108s | 0.001095s | byte equality observed |
| pilfer.test | 10 | 0.000975s | 0.000955s | 0.000951s | byte equality observed |
| pointer.test | 10 | 0.001186s | 0.001150s | 0.001141s | byte equality observed |
| result_for.test | 10 | 0.000986s | 0.000963s | 0.000954s | byte equality observed |
| serialize.test | 10 | 0.001022s | 0.001003s | 0.001004s | byte equality observed |
| serializer.test | 9 | 0.001626s | 0.001612s | 0.001627s | byte equality observed |
| snippets.test | 10 | 0.001192s | 0.001147s | 0.001166s | byte equality observed |
| static_resource.test | 10 | 0.001065s | 0.001037s | 0.001063s | byte equality observed |
| storage_ptr.test | 10 | 0.001034s | 0.001017s | 0.001022s | byte equality observed |
| stream_parser.test | 1 | 0.049725s | 0.064902s | 0.046141s | native test oracle; output varies |
| string.test | 9 | 0.001647s | 0.001439s | 0.001639s | byte equality observed |
| string_view.test | 10 | 0.000984s | 0.000950s | 0.000997s | byte equality observed |
| utf8.test | 10 | 0.000971s | 0.000951s | 0.000994s | byte equality observed |
| value.test | 8 | 0.002078s | 0.001896s | 0.002379s | native test oracle; output varies |
| value_from.test | 10 | 0.001159s | 0.001121s | 0.001150s | byte equality observed |
| value_ref.test | 10 | 0.001045s | 0.001013s | 0.001038s | byte equality observed |
| value_stack.test | 10 | 0.001020s | 0.001002s | 0.001040s | byte equality observed |
| value_to.test | 10 | 0.001765s | 0.001716s | 0.001716s | native test oracle; output varies |
| visit.test | 10 | 0.001009s | 0.001006s | 0.000997s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44830361139).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
