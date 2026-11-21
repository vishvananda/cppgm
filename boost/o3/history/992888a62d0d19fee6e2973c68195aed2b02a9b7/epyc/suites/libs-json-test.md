# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.906223 | 4.733372 | 4.438873 | 0.002576 | 0.002635 | 0.002754 |
| basic_parser.test | RUN | 4.939346 | 112.777126 | 70.439786 | 0.541372 | 0.194740 | 0.705307 |
| conversion.test | RUN | 0.618150 | 1.776317 | 2.258236 | 0.001814 | 0.001764 | 0.001738 |
| doc_background.test | RUN | 0.639167 | 1.814934 | 2.269042 | 0.001685 | 0.001800 | 0.001739 |
| doc_forward_conversion.test | RUN | 0.659124 | 2.107136 | 2.577831 | 0.001784 | 0.001836 | 0.001718 |
| doc_parsing.test | RUN | 0.659136 | 1.970069 | 2.379442 | 0.001832 | 0.001756 | 0.001810 |
| doc_quick_look.test | RUN | 0.848449 | 2.346155 | 3.207916 | 0.001715 | 0.001649 | 0.001726 |
| doc_serializing.test | RUN | 0.595511 | 1.733107 | 2.165723 | 0.001848 | 0.001642 | 0.001731 |
| doc_storage_ptr.test | RUN | 0.608214 | 1.837123 | 2.202890 | 0.001732 | 0.001854 | 0.001810 |
| doc_uses_allocator.test | RUN | 0.607212 | 1.678418 | 2.205692 | 0.001834 | 0.001614 | 0.001702 |
| doc_using_numbers.test | RUN | 0.658032 | 1.796652 | 2.436780 | 0.001493 | 0.001801 | 0.001752 |
| double.test | RUN | 0.702194 | 3.068102 | 2.819882 | 1.305347 | 1.345853 | 1.460230 |
| error.test | RUN | 0.500065 | 1.661224 | 1.665211 | 0.001720 | 0.001837 | 0.001707 |
| fwd.test | RUN | 0.575290 | 1.709443 | 2.053647 | 0.001657 | 0.001681 | 0.001701 |
| json.test | RUN | 0.646308 | 1.951102 | 2.560706 | 0.001749 | 0.001954 | 0.001777 |
| kind.test | RUN | 0.484605 | 1.522652 | 1.707621 | 0.001852 | 0.001959 | 0.001883 |
| memory_resource.test | RUN | 0.670373 | 2.031279 | 2.254223 | 0.001816 | 0.001870 | 0.001685 |
| monotonic_resource.test | RUN | 0.608751 | 1.958712 | 2.214989 | 0.002556 | 0.002305 | 0.002475 |
| natvis.test | RUN | 0.607619 | 1.904213 | 2.139433 | 0.001846 | 0.001938 | 0.001682 |
| null_resource.test | RUN | 0.503833 | 1.561127 | 1.839216 | 0.001878 | 0.002011 | 0.001917 |
| object.test | RUN | 1.029388 | 5.542404 | 5.294920 | 0.006519 | 0.005826 | 0.005904 |
| parse.test | RUN | 0.671563 | 2.786518 | 2.510482 | 0.002368 | 0.002395 | 0.002520 |
| parser.test | RUN | 0.634161 | 2.368792 | 2.229483 | 0.001964 | 0.002092 | 0.002020 |
| pilfer.test | RUN | 0.338871 | 1.084203 | 1.078525 | 0.001729 | 0.001966 | 0.001850 |
| pointer.test | RUN | 0.739093 | 3.240282 | 3.134827 | 0.001965 | 0.002055 | 0.001777 |
| result_for.test | RUN | 0.618221 | 1.938867 | 2.137619 | 0.001515 | 0.001882 | 0.001820 |
| serialize.test | RUN | 0.614747 | 2.016230 | 2.158541 | 0.001892 | 0.001919 | 0.001818 |
| serializer.test | RUN | 0.993440 | 5.758378 | 5.196236 | 0.002722 | 0.003031 | 0.002770 |
| snippets.test | RUN | 1.542177 | 8.004044 | 7.062675 | 0.002050 | 0.002050 | 0.001976 |
| static_resource.test | RUN | 0.614333 | 1.768006 | 2.052580 | 0.001978 | 0.001840 | 0.002004 |
| storage_ptr.test | RUN | 0.635726 | 1.874739 | 2.377819 | 0.001741 | 0.002010 | 0.001890 |
| stream_parser.test | RUN | 0.759063 | 3.327745 | 3.371327 | 0.085075 | 0.122110 | 0.091625 |
| string.test | RUN | 1.354674 | 8.694934 | 7.149004 | 0.003004 | 0.002463 | 0.002525 |
| string_view.test | RUN | 0.382182 | 1.179564 | 1.297704 | 0.001594 | 0.001747 | 0.001939 |
| value.test | RUN | 1.284996 | 8.666823 | 6.913095 | 0.003662 | 0.003394 | 0.004154 |
| value_from.test | RUN | 1.227477 | 5.617199 | 5.660630 | 0.001708 | 0.001962 | 0.002048 |
| value_stack.test | RUN | 0.597905 | 1.813133 | 2.069148 | 0.001848 | 0.002097 | 0.002058 |
| value_to.test | RUN | 2.746117 | 17.313476 | 14.023538 | 0.003040 | 0.002782 | 0.003225 |
| value_ref.test | RUN | 0.673609 | 2.563163 | 2.811346 | 0.001674 | 0.002034 | 0.001860 |
| utf8.test | RUN | 0.510864 | 1.674175 | 1.870784 | 0.001767 | 0.001854 | 0.001768 |
| visit.test | RUN | 0.688287 | 2.471476 | 2.620779 | 0.001608 | 0.001869 | 0.001933 |
| d2s_intrinsics_test.test | RUN | 0.507498 | 1.468961 | 1.808651 | 0.001773 | 0.001725 | 0.001854 |
| d2s_table_test.test | RUN | 0.514073 | 1.646003 | 1.857436 | 0.001815 | 0.001753 | 0.001825 |
| d2s_test.test | RUN | 0.539242 | 1.910853 | 2.095465 | 0.001934 | 0.001852 | 0.001950 |
| parse_into.test | RUN | 17.245409 | 144.415030 | 87.906865 | 0.003066 | 0.003136 | 0.002764 |
| limits.test | RUN | 2.074731 | 12.117623 | 9.876424 | 0.002156 | 0.002197 | 0.001980 |
| header_only.test | RUN | 1.419911 | 9.324119 | 6.676527 | 0.001614 | 0.001619 | 0.001728 |
| no_exceptions.test | RUN | 1.965113 | 10.212542 | 8.493691 | 0.001883 | 0.001845 | 0.001802 |
| intrusive_macros.test | RUN | 1.639201 | 10.383430 | 7.984935 | 0.001552 | 0.001835 | 0.001809 |
| _gdb-printers.test | RUN | 0.284467 | 0.718001 | 0.816024 | 0.186607 | 0.277118 | 0.219942 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.861× | 0.844×, 0.877× | 0.998× |
| clang | 1.074× | 1.058×, 1.090× | 1.013× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44813597235).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001637s | 0.001526s | 0.001652s | byte equality observed |
| basic_parser.test | 1 | 0.358631s | 0.213184s | 0.438416s | native test oracle; output varies |
| conversion.test | 10 | 0.000976s | 0.000975s | 0.000990s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000975s | 0.000960s | 0.000987s | byte equality observed |
| d2s_table_test.test | 10 | 0.000989s | 0.000989s | 0.001012s | byte equality observed |
| d2s_test.test | 10 | 0.001035s | 0.001048s | 0.001046s | byte equality observed |
| doc_background.test | 10 | 0.000998s | 0.000986s | 0.000977s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.001014s | 0.001018s | 0.001024s | byte equality observed |
| doc_parsing.test | 10 | 0.001034s | 0.001024s | 0.001037s | byte equality observed |
| doc_quick_look.test | 10 | 0.000989s | 0.001016s | 0.001003s | byte equality observed |
| doc_serializing.test | 10 | 0.001017s | 0.000973s | 0.000985s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.000998s | 0.001000s | 0.000997s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.001019s | 0.000980s | 0.000982s | byte equality observed |
| doc_using_numbers.test | 10 | 0.001009s | 0.000978s | 0.000992s | byte equality observed |
| double.test | 1 | 0.853398s | 0.819320s | 0.880077s | native test oracle; output varies |
| error.test | 10 | 0.001052s | 0.001025s | 0.001081s | byte equality observed |
| fwd.test | 10 | 0.000969s | 0.000975s | 0.000961s | byte equality observed |
| header_only.test | 10 | 0.000952s | 0.000961s | 0.000937s | byte equality observed |
| intrusive_macros.test | 10 | 0.001010s | 0.001002s | 0.000983s | byte equality observed |
| json.test | 10 | 0.000997s | 0.001008s | 0.000974s | byte equality observed |
| kind.test | 10 | 0.001004s | 0.001021s | 0.000991s | byte equality observed |
| limits.test | 10 | 0.001202s | 0.001171s | 0.001157s | byte equality observed |
| memory_resource.test | 10 | 0.001015s | 0.001001s | 0.000989s | byte equality observed |
| monotonic_resource.test | 10 | 0.001456s | 0.001325s | 0.001386s | byte equality observed |
| natvis.test | 10 | 0.001033s | 0.001015s | 0.001005s | byte equality observed |
| no_exceptions.test | 10 | 0.001020s | 0.001000s | 0.001000s | byte equality observed |
| null_resource.test | 10 | 0.001039s | 0.001033s | 0.001020s | byte equality observed |
| object.test | 5 | 0.003843s | 0.003206s | 0.003794s | native test oracle; output varies |
| parse.test | 10 | 0.001421s | 0.001397s | 0.001389s | byte equality observed |
| parse_into.test | 7 | 0.002344s | 0.002207s | 0.002124s | native test oracle; output varies |
| parser.test | 10 | 0.001150s | 0.001132s | 0.001126s | byte equality observed |
| pilfer.test | 10 | 0.000986s | 0.000982s | 0.000977s | byte equality observed |
| pointer.test | 10 | 0.001177s | 0.001165s | 0.001174s | byte equality observed |
| result_for.test | 10 | 0.000989s | 0.000999s | 0.000980s | byte equality observed |
| serialize.test | 10 | 0.001051s | 0.001054s | 0.001020s | byte equality observed |
| serializer.test | 10 | 0.001645s | 0.001657s | 0.001638s | byte equality observed |
| snippets.test | 10 | 0.001216s | 0.001185s | 0.001178s | byte equality observed |
| static_resource.test | 10 | 0.001070s | 0.001095s | 0.001050s | byte equality observed |
| storage_ptr.test | 10 | 0.001044s | 0.001043s | 0.001037s | byte equality observed |
| stream_parser.test | 1 | 0.049695s | 0.065370s | 0.046210s | native test oracle; output varies |
| string.test | 10 | 0.001645s | 0.001499s | 0.001637s | native test oracle; output varies |
| string_view.test | 10 | 0.001005s | 0.000991s | 0.000973s | byte equality observed |
| utf8.test | 10 | 0.000997s | 0.001004s | 0.000968s | byte equality observed |
| value.test | 8 | 0.002150s | 0.001951s | 0.002307s | native test oracle; output varies |
| value_from.test | 10 | 0.001156s | 0.001152s | 0.001123s | byte equality observed |
| value_ref.test | 10 | 0.001073s | 0.001043s | 0.001021s | byte equality observed |
| value_stack.test | 10 | 0.001054s | 0.001010s | 0.001008s | byte equality observed |
| value_to.test | 10 | 0.001778s | 0.001742s | 0.001739s | native test oracle; output varies |
| visit.test | 10 | 0.001012s | 0.001015s | 0.000997s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44813597235).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
