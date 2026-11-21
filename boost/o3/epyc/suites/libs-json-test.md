# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.923658 | 4.807415 | 4.479136 | 0.002733 | 0.002712 | 0.002814 |
| basic_parser.test | RUN | 5.093888 | 117.189792 | 70.584041 | 0.540441 | 0.198391 | 0.689858 |
| conversion.test | RUN | 0.629133 | 1.841685 | 2.341490 | 0.001301 | 0.001832 | 0.001770 |
| doc_background.test | RUN | 0.642213 | 1.830917 | 2.288856 | 0.001855 | 0.001711 | 0.001777 |
| doc_forward_conversion.test | RUN | 0.661881 | 2.133409 | 2.566451 | 0.001894 | 0.002038 | 0.001569 |
| doc_parsing.test | RUN | 0.661746 | 1.930446 | 2.262570 | 0.001860 | 0.001881 | 0.001831 |
| doc_quick_look.test | RUN | 0.858524 | 2.409473 | 3.182330 | 0.001859 | 0.001433 | 0.001782 |
| doc_serializing.test | RUN | 0.612440 | 1.749317 | 2.206320 | 0.001534 | 0.001454 | 0.001542 |
| doc_storage_ptr.test | RUN | 0.603587 | 1.789434 | 2.208556 | 0.001628 | 0.001779 | 0.001785 |
| doc_uses_allocator.test | RUN | 0.603953 | 1.678957 | 2.160579 | 0.001900 | 0.001852 | 0.001740 |
| doc_using_numbers.test | RUN | 0.666443 | 1.900759 | 2.434292 | 0.001718 | 0.001916 | 0.001842 |
| double.test | RUN | 0.714228 | 2.965013 | 2.867228 | 1.322043 | 1.145192 | 1.460588 |
| error.test | RUN | 0.502473 | 1.763281 | 1.711338 | 0.001821 | 0.002028 | 0.001606 |
| fwd.test | RUN | 0.610957 | 1.837658 | 2.060634 | 0.001821 | 0.001961 | 0.001740 |
| json.test | RUN | 0.660163 | 2.049319 | 2.455954 | 0.001719 | 0.001812 | 0.001850 |
| kind.test | RUN | 0.463819 | 1.630463 | 1.766642 | 0.001788 | 0.001989 | 0.001932 |
| memory_resource.test | RUN | 0.645952 | 2.050330 | 2.274210 | 0.001845 | 0.001968 | 0.001840 |
| monotonic_resource.test | RUN | 0.621686 | 1.967604 | 2.121613 | 0.002538 | 0.002514 | 0.002536 |
| natvis.test | RUN | 0.619952 | 1.889810 | 2.151641 | 0.001812 | 0.001924 | 0.001716 |
| null_resource.test | RUN | 0.514316 | 1.638200 | 1.860822 | 0.001887 | 0.001982 | 0.001912 |
| object.test | RUN | 1.054701 | 5.704838 | 4.816298 | 0.006461 | 0.005126 | 0.004185 |
| parse.test | RUN | 0.697734 | 2.864184 | 2.687025 | 0.002209 | 0.002644 | 0.002532 |
| parser.test | RUN | 0.659324 | 2.450763 | 2.505946 | 0.002072 | 0.001974 | 0.001582 |
| pilfer.test | RUN | 0.343814 | 1.109993 | 1.044392 | 0.001864 | 0.001826 | 0.001697 |
| pointer.test | RUN | 0.759589 | 3.379114 | 3.203112 | 0.002040 | 0.002205 | 0.002174 |
| result_for.test | RUN | 0.637922 | 2.030938 | 2.205508 | 0.001490 | 0.001921 | 0.001790 |
| serialize.test | RUN | 0.623978 | 2.069616 | 2.149424 | 0.001918 | 0.001854 | 0.001966 |
| serializer.test | RUN | 1.000579 | 5.849046 | 5.441010 | 0.002683 | 0.002712 | 0.002611 |
| snippets.test | RUN | 1.560044 | 8.103166 | 7.506797 | 0.002162 | 0.002206 | 0.002087 |
| static_resource.test | RUN | 0.617666 | 1.838692 | 2.142893 | 0.001886 | 0.002064 | 0.001959 |
| storage_ptr.test | RUN | 0.641643 | 1.999073 | 2.086709 | 0.001714 | 0.001815 | 0.001769 |
| stream_parser.test | RUN | 0.767084 | 3.529211 | 2.971755 | 0.090832 | 0.120084 | 0.091873 |
| string.test | RUN | 1.379092 | 8.154621 | 7.244434 | 0.002977 | 0.002571 | 0.002950 |
| string_view.test | RUN | 0.387759 | 1.212509 | 1.358496 | 0.001855 | 0.001909 | 0.001850 |
| value.test | RUN | 1.311598 | 9.959546 | 6.879915 | 0.003688 | 0.002870 | 0.003660 |
| value_from.test | RUN | 1.248439 | 5.614576 | 5.673619 | 0.002134 | 0.002234 | 0.002108 |
| value_stack.test | RUN | 0.609053 | 1.701342 | 2.080184 | 0.001920 | 0.001872 | 0.001858 |
| value_to.test | RUN | 2.796662 | 17.986619 | 13.661721 | 0.003052 | 0.003198 | 0.002908 |
| value_ref.test | RUN | 0.683239 | 2.484682 | 2.638080 | 0.001910 | 0.002123 | 0.001838 |
| utf8.test | RUN | 0.518808 | 1.479073 | 1.877312 | 0.001734 | 0.001760 | 0.001776 |
| visit.test | RUN | 0.699068 | 2.595381 | 2.626590 | 0.001885 | 0.002034 | 0.001950 |
| d2s_intrinsics_test.test | RUN | 0.508304 | 1.553655 | 1.819147 | 0.001793 | 0.001678 | 0.001762 |
| d2s_table_test.test | RUN | 0.528649 | 1.736913 | 1.879028 | 0.001895 | 0.001901 | 0.001863 |
| d2s_test.test | RUN | 0.539915 | 2.040098 | 2.132423 | 0.001974 | 0.001884 | 0.001937 |
| parse_into.test | RUN | 17.559235 | 145.238189 | 88.836585 | 0.002968 | 0.002850 | 0.002748 |
| limits.test | RUN | 2.092826 | 12.008888 | 10.143492 | 0.002254 | 0.001990 | 0.002196 |
| header_only.test | RUN | 1.372862 | 9.310033 | 6.213949 | 0.001781 | 0.001960 | 0.001623 |
| no_exceptions.test | RUN | 2.074705 | 10.321507 | 8.442720 | 0.001836 | 0.002023 | 0.001796 |
| intrusive_macros.test | RUN | 1.657916 | 10.335923 | 7.875876 | 0.001896 | 0.001765 | 0.001715 |
| _gdb-printers.test | RUN | 0.290455 | 0.787984 | 1.039311 | 0.195348 | 0.274133 | 0.208748 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.872× | 0.870×, 0.874× | 0.973× |
| clang | 1.075× | 1.072×, 1.079× | 1.010× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44922642903).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001684s | 0.001512s | 0.001685s | byte equality observed |
| basic_parser.test | 1 | 0.354054s | 0.209925s | 0.449786s | native test oracle; output varies |
| conversion.test | 10 | 0.000981s | 0.001030s | 0.001014s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000984s | 0.000992s | 0.001003s | byte equality observed |
| d2s_table_test.test | 10 | 0.001007s | 0.001017s | 0.001026s | byte equality observed |
| d2s_test.test | 10 | 0.001061s | 0.001060s | 0.001084s | byte equality observed |
| doc_background.test | 10 | 0.001006s | 0.001009s | 0.001011s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.001028s | 0.001046s | 0.001047s | byte equality observed |
| doc_parsing.test | 10 | 0.001043s | 0.001067s | 0.001063s | byte equality observed |
| doc_quick_look.test | 10 | 0.001011s | 0.001028s | 0.001031s | byte equality observed |
| doc_serializing.test | 10 | 0.001026s | 0.001002s | 0.001015s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.001006s | 0.001047s | 0.001058s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.001005s | 0.000998s | 0.001004s | byte equality observed |
| doc_using_numbers.test | 9 | 0.001044s | 0.000989s | 0.001008s | byte equality observed |
| double.test | 1 | 0.873667s | 0.840488s | 0.880399s | native test oracle; output varies |
| error.test | 10 | 0.001127s | 0.001031s | 0.001127s | byte equality observed |
| fwd.test | 10 | 0.000986s | 0.000978s | 0.000997s | byte equality observed |
| header_only.test | 10 | 0.000958s | 0.000962s | 0.000975s | byte equality observed |
| intrusive_macros.test | 10 | 0.001019s | 0.001010s | 0.001035s | byte equality observed |
| json.test | 10 | 0.001000s | 0.000990s | 0.001022s | byte equality observed |
| kind.test | 10 | 0.001017s | 0.001022s | 0.001055s | byte equality observed |
| limits.test | 10 | 0.001201s | 0.001167s | 0.001195s | byte equality observed |
| memory_resource.test | 10 | 0.001026s | 0.001008s | 0.001046s | byte equality observed |
| monotonic_resource.test | 10 | 0.001468s | 0.001333s | 0.001431s | byte equality observed |
| natvis.test | 10 | 0.001023s | 0.001025s | 0.001045s | byte equality observed |
| no_exceptions.test | 10 | 0.001021s | 0.001012s | 0.001031s | byte equality observed |
| null_resource.test | 10 | 0.001055s | 0.001039s | 0.001061s | byte equality observed |
| object.test | 5 | 0.003872s | 0.003234s | 0.003840s | byte equality observed |
| parse.test | 10 | 0.001428s | 0.001401s | 0.001479s | byte equality observed |
| parse_into.test | 7 | 0.002404s | 0.002189s | 0.002302s | native test oracle; output varies |
| parser.test | 10 | 0.001165s | 0.001111s | 0.001181s | byte equality observed |
| pilfer.test | 10 | 0.000996s | 0.000976s | 0.001026s | byte equality observed |
| pointer.test | 10 | 0.001194s | 0.001183s | 0.001219s | byte equality observed |
| result_for.test | 10 | 0.001022s | 0.000967s | 0.001022s | byte equality observed |
| serialize.test | 10 | 0.001059s | 0.001014s | 0.001067s | byte equality observed |
| serializer.test | 10 | 0.001671s | 0.001626s | 0.001690s | byte equality observed |
| snippets.test | 10 | 0.001219s | 0.001148s | 0.001219s | byte equality observed |
| static_resource.test | 10 | 0.001106s | 0.001046s | 0.001099s | byte equality observed |
| storage_ptr.test | 10 | 0.001061s | 0.001028s | 0.001065s | byte equality observed |
| stream_parser.test | 1 | 0.049620s | 0.065108s | 0.046231s | native test oracle; output varies |
| string.test | 10 | 0.001732s | 0.001451s | 0.001784s | byte equality observed |
| string_view.test | 10 | 0.001006s | 0.000962s | 0.001006s | byte equality observed |
| utf8.test | 10 | 0.001005s | 0.000964s | 0.001029s | byte equality observed |
| value.test | 6 | 0.002122s | 0.001895s | 0.002395s | native test oracle; output varies |
| value_from.test | 10 | 0.001184s | 0.001146s | 0.001182s | byte equality observed |
| value_ref.test | 10 | 0.001060s | 0.001034s | 0.001070s | byte equality observed |
| value_stack.test | 10 | 0.001042s | 0.001018s | 0.001052s | byte equality observed |
| value_to.test | 10 | 0.001800s | 0.001733s | 0.001789s | native test oracle; output varies |
| visit.test | 10 | 0.001059s | 0.001004s | 0.001048s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44922642903).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
