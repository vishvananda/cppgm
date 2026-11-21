# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.926582 | 4.752985 | 4.489949 | 0.002595 | 0.002775 | 0.002755 |
| basic_parser.test | RUN | 4.925339 | 113.300844 | 71.440438 | 0.536421 | 0.195294 | 0.692109 |
| conversion.test | RUN | 0.621168 | 1.806985 | 2.367559 | 0.001702 | 0.001732 | 0.001726 |
| doc_background.test | RUN | 0.648423 | 1.814176 | 2.295150 | 0.001812 | 0.001684 | 0.001716 |
| doc_forward_conversion.test | RUN | 0.664674 | 2.105039 | 2.584885 | 0.001605 | 0.001697 | 0.001840 |
| doc_parsing.test | RUN | 0.655039 | 1.907712 | 2.421768 | 0.001845 | 0.001806 | 0.001806 |
| doc_quick_look.test | RUN | 0.860792 | 2.373328 | 3.196771 | 0.001705 | 0.001706 | 0.001790 |
| doc_serializing.test | RUN | 0.601104 | 1.712744 | 2.199584 | 0.001820 | 0.001516 | 0.001741 |
| doc_storage_ptr.test | RUN | 0.595159 | 1.717854 | 2.198176 | 0.001714 | 0.001738 | 0.002098 |
| doc_uses_allocator.test | RUN | 0.620309 | 1.758331 | 2.192530 | 0.001858 | 0.001832 | 0.001795 |
| doc_using_numbers.test | RUN | 0.660213 | 1.737166 | 2.428521 | 0.001630 | 0.001812 | 0.001798 |
| double.test | RUN | 0.710170 | 2.985117 | 2.907006 | 1.336800 | 1.350883 | 1.362992 |
| error.test | RUN | 0.501667 | 1.636163 | 1.727094 | 0.001718 | 0.001676 | 0.001840 |
| fwd.test | RUN | 0.604084 | 1.662254 | 2.221330 | 0.001680 | 0.001798 | 0.001767 |
| json.test | RUN | 0.620366 | 1.979218 | 2.460066 | 0.001678 | 0.001928 | 0.001764 |
| kind.test | RUN | 0.491397 | 1.546965 | 1.821194 | 0.001739 | 0.001979 | 0.001908 |
| memory_resource.test | RUN | 0.671338 | 2.009136 | 2.236652 | 0.001733 | 0.001844 | 0.001875 |
| monotonic_resource.test | RUN | 0.611623 | 1.982031 | 2.323379 | 0.002586 | 0.002498 | 0.002492 |
| natvis.test | RUN | 0.626933 | 1.840023 | 2.099849 | 0.001675 | 0.001779 | 0.001725 |
| null_resource.test | RUN | 0.515874 | 1.584166 | 1.726974 | 0.001744 | 0.001892 | 0.001940 |
| object.test | RUN | 1.040364 | 5.559852 | 5.549147 | 0.006621 | 0.005040 | 0.006674 |
| parse.test | RUN | 0.686911 | 2.804675 | 2.390465 | 0.002338 | 0.002559 | 0.002303 |
| parser.test | RUN | 0.674573 | 2.416934 | 2.246393 | 0.001974 | 0.002158 | 0.001934 |
| pilfer.test | RUN | 0.343620 | 1.094178 | 1.159028 | 0.001714 | 0.001618 | 0.001573 |
| pointer.test | RUN | 0.740218 | 3.256121 | 2.914871 | 0.001931 | 0.002148 | 0.002148 |
| result_for.test | RUN | 0.620217 | 1.931523 | 2.272256 | 0.001570 | 0.001918 | 0.001762 |
| serialize.test | RUN | 0.619862 | 2.030066 | 2.364175 | 0.001864 | 0.002006 | 0.001910 |
| serializer.test | RUN | 0.990487 | 5.621370 | 5.042957 | 0.002772 | 0.002693 | 0.002631 |
| snippets.test | RUN | 1.519909 | 7.898583 | 7.678996 | 0.001757 | 0.002044 | 0.002084 |
| static_resource.test | RUN | 0.605057 | 1.876801 | 2.225464 | 0.002012 | 0.001906 | 0.002018 |
| storage_ptr.test | RUN | 0.631280 | 1.877030 | 2.094024 | 0.001380 | 0.001941 | 0.001789 |
| stream_parser.test | RUN | 0.768339 | 3.650038 | 3.199291 | 0.086614 | 0.121935 | 0.080843 |
| string.test | RUN | 1.362820 | 8.790932 | 7.847097 | 0.002848 | 0.002576 | 0.002481 |
| string_view.test | RUN | 0.378917 | 1.183934 | 1.133221 | 0.001807 | 0.001865 | 0.001611 |
| value.test | RUN | 1.300163 | 8.572274 | 6.692521 | 0.003123 | 0.002988 | 0.003852 |
| value_from.test | RUN | 1.228186 | 5.744127 | 5.439401 | 0.001980 | 0.002150 | 0.001926 |
| value_stack.test | RUN | 0.596573 | 1.814091 | 2.054733 | 0.001776 | 0.002035 | 0.001901 |
| value_to.test | RUN | 2.798592 | 16.437808 | 14.457188 | 0.003154 | 0.002795 | 0.003097 |
| value_ref.test | RUN | 0.684593 | 2.658631 | 2.807087 | 0.001862 | 0.001923 | 0.001964 |
| utf8.test | RUN | 0.512161 | 1.687893 | 1.864045 | 0.001783 | 0.001874 | 0.001720 |
| visit.test | RUN | 0.702767 | 2.633686 | 2.611452 | 0.001696 | 0.001780 | 0.001961 |
| d2s_intrinsics_test.test | RUN | 0.517229 | 1.571883 | 1.811062 | 0.001840 | 0.001754 | 0.001661 |
| d2s_table_test.test | RUN | 0.513489 | 1.704184 | 1.823172 | 0.001800 | 0.001838 | 0.001638 |
| d2s_test.test | RUN | 0.543216 | 2.087299 | 1.970358 | 0.001763 | 0.002020 | 0.001872 |
| parse_into.test | RUN | 17.373668 | 144.547113 | 88.507006 | 0.003058 | 0.002893 | 0.002752 |
| limits.test | RUN | 2.084916 | 12.616837 | 8.818034 | 0.002128 | 0.001939 | 0.002120 |
| header_only.test | RUN | 1.420522 | 9.089275 | 7.247744 | 0.001630 | 0.001748 | 0.001874 |
| no_exceptions.test | RUN | 1.960576 | 10.229774 | 8.039995 | 0.001779 | 0.001746 | 0.001651 |
| intrusive_macros.test | RUN | 1.633001 | 10.260138 | 7.943498 | 0.001850 | 0.001949 | 0.001548 |
| _gdb-printers.test | RUN | 0.285288 | 0.693488 | 1.054590 | 0.186163 | 0.215726 | 0.205169 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.864× | 0.854×, 0.873× | 1.018× |
| clang | 1.075× | 1.056×, 1.094× | 0.988× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44815881069).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001640s | 0.001494s | 0.001617s | byte equality observed |
| basic_parser.test | 1 | 0.356648s | 0.208572s | 0.448389s | native test oracle; output varies |
| conversion.test | 10 | 0.000974s | 0.000973s | 0.000961s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000968s | 0.000980s | 0.000956s | byte equality observed |
| d2s_table_test.test | 10 | 0.000977s | 0.000987s | 0.000977s | byte equality observed |
| d2s_test.test | 10 | 0.001036s | 0.001048s | 0.001021s | byte equality observed |
| doc_background.test | 10 | 0.000990s | 0.000978s | 0.000959s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.001006s | 0.001019s | 0.000999s | byte equality observed |
| doc_parsing.test | 10 | 0.001037s | 0.001027s | 0.001006s | byte equality observed |
| doc_quick_look.test | 10 | 0.000995s | 0.001006s | 0.000983s | byte equality observed |
| doc_serializing.test | 10 | 0.000993s | 0.000989s | 0.000972s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.000993s | 0.001011s | 0.000988s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.001000s | 0.000981s | 0.000963s | byte equality observed |
| doc_using_numbers.test | 10 | 0.001000s | 0.000987s | 0.000973s | byte equality observed |
| double.test | 1 | 0.847552s | 0.814523s | 0.869167s | native test oracle; output varies |
| error.test | 10 | 0.001056s | 0.001002s | 0.001080s | byte equality observed |
| fwd.test | 10 | 0.000977s | 0.000962s | 0.000978s | byte equality observed |
| header_only.test | 10 | 0.000961s | 0.000953s | 0.000955s | byte equality observed |
| intrusive_macros.test | 10 | 0.001008s | 0.001002s | 0.001021s | byte equality observed |
| json.test | 10 | 0.000994s | 0.000982s | 0.000990s | byte equality observed |
| kind.test | 10 | 0.001014s | 0.001024s | 0.001003s | byte equality observed |
| limits.test | 10 | 0.001182s | 0.001156s | 0.001165s | byte equality observed |
| memory_resource.test | 10 | 0.001007s | 0.001004s | 0.001003s | byte equality observed |
| monotonic_resource.test | 10 | 0.001445s | 0.001356s | 0.001394s | byte equality observed |
| natvis.test | 10 | 0.001024s | 0.001014s | 0.001026s | byte equality observed |
| no_exceptions.test | 10 | 0.001010s | 0.001012s | 0.000998s | byte equality observed |
| null_resource.test | 10 | 0.001039s | 0.001015s | 0.001021s | byte equality observed |
| object.test | 5 | 0.003836s | 0.003185s | 0.003779s | native test oracle; output varies |
| parse.test | 10 | 0.001411s | 0.001392s | 0.001389s | byte equality observed |
| parse_into.test | 7 | 0.002285s | 0.002167s | 0.002083s | native test oracle; output varies |
| parser.test | 10 | 0.001141s | 0.001089s | 0.001113s | byte equality observed |
| pilfer.test | 10 | 0.000985s | 0.000960s | 0.000968s | byte equality observed |
| pointer.test | 10 | 0.001169s | 0.001149s | 0.001178s | byte equality observed |
| result_for.test | 10 | 0.000986s | 0.000983s | 0.000964s | byte equality observed |
| serialize.test | 10 | 0.001028s | 0.001027s | 0.001016s | byte equality observed |
| serializer.test | 10 | 0.001647s | 0.001644s | 0.001627s | byte equality observed |
| snippets.test | 10 | 0.001180s | 0.001152s | 0.001160s | byte equality observed |
| static_resource.test | 10 | 0.001062s | 0.001047s | 0.001053s | byte equality observed |
| storage_ptr.test | 10 | 0.001040s | 0.001045s | 0.001025s | byte equality observed |
| stream_parser.test | 1 | 0.049609s | 0.064893s | 0.046148s | native test oracle; output varies |
| string.test | 10 | 0.001630s | 0.001453s | 0.001631s | byte equality observed |
| string_view.test | 10 | 0.000991s | 0.000974s | 0.000978s | byte equality observed |
| utf8.test | 10 | 0.000994s | 0.000976s | 0.000973s | byte equality observed |
| value.test | 8 | 0.002071s | 0.001948s | 0.002310s | native test oracle; output varies |
| value_from.test | 10 | 0.001145s | 0.001135s | 0.001139s | byte equality observed |
| value_ref.test | 10 | 0.001045s | 0.001041s | 0.001061s | byte equality observed |
| value_stack.test | 10 | 0.001021s | 0.001021s | 0.001020s | byte equality observed |
| value_to.test | 10 | 0.001760s | 0.001735s | 0.001743s | native test oracle; output varies |
| visit.test | 10 | 0.001013s | 0.001016s | 0.001014s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44815881069).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
