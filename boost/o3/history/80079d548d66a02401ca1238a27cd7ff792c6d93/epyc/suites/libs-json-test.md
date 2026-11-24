# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.916933 | 4.763150 | 4.487273 | 0.002734 | 0.002926 | 0.002838 |
| basic_parser.test | RUN | 5.018688 | 118.210595 | 71.991357 | 0.535849 | 0.195235 | 0.703600 |
| conversion.test | RUN | 0.656287 | 1.789480 | 2.338796 | 0.001477 | 0.002031 | 0.001932 |
| doc_background.test | RUN | 0.647950 | 1.840240 | 2.305362 | 0.001868 | 0.002013 | 0.001669 |
| doc_forward_conversion.test | RUN | 0.665616 | 2.152508 | 2.538984 | 0.001618 | 0.001894 | 0.001796 |
| doc_parsing.test | RUN | 0.657772 | 2.004707 | 2.303409 | 0.001916 | 0.001792 | 0.001992 |
| doc_quick_look.test | RUN | 0.869585 | 2.426282 | 3.203387 | 0.001879 | 0.001918 | 0.001754 |
| doc_serializing.test | RUN | 0.615126 | 1.730200 | 2.214647 | 0.001794 | 0.001623 | 0.001445 |
| doc_storage_ptr.test | RUN | 0.607253 | 1.760348 | 2.178919 | 0.001608 | 0.001616 | 0.001832 |
| doc_uses_allocator.test | RUN | 0.614606 | 1.682756 | 2.206608 | 0.001946 | 0.001652 | 0.001761 |
| doc_using_numbers.test | RUN | 0.669559 | 1.841781 | 2.410911 | 0.001609 | 0.001836 | 0.001785 |
| double.test | RUN | 0.710770 | 3.063186 | 2.855471 | 1.374240 | 1.328018 | 1.308388 |
| error.test | RUN | 0.512317 | 1.714447 | 1.763880 | 0.001766 | 0.001639 | 0.001858 |
| fwd.test | RUN | 0.583059 | 1.664856 | 2.389868 | 0.001708 | 0.001794 | 0.001812 |
| json.test | RUN | 0.614160 | 2.019566 | 2.505349 | 0.001705 | 0.001808 | 0.001873 |
| kind.test | RUN | 0.458973 | 1.630683 | 1.695044 | 0.001870 | 0.002037 | 0.001734 |
| memory_resource.test | RUN | 0.664882 | 2.027336 | 2.441994 | 0.001389 | 0.002005 | 0.001886 |
| monotonic_resource.test | RUN | 0.610681 | 1.971467 | 2.018452 | 0.002424 | 0.002334 | 0.002419 |
| natvis.test | RUN | 0.621070 | 1.942855 | 2.315456 | 0.001828 | 0.002000 | 0.001771 |
| null_resource.test | RUN | 0.513454 | 1.581284 | 1.699694 | 0.001780 | 0.002080 | 0.002000 |
| object.test | RUN | 1.045162 | 5.689356 | 4.800659 | 0.006602 | 0.005628 | 0.006587 |
| parse.test | RUN | 0.688094 | 2.897045 | 2.685950 | 0.002194 | 0.002568 | 0.002641 |
| parser.test | RUN | 0.645189 | 2.504966 | 2.494073 | 0.002132 | 0.002044 | 0.002036 |
| pilfer.test | RUN | 0.337260 | 1.151944 | 1.197730 | 0.001748 | 0.001702 | 0.001530 |
| pointer.test | RUN | 0.741898 | 3.382727 | 2.886310 | 0.002086 | 0.002306 | 0.001966 |
| result_for.test | RUN | 0.622336 | 2.017658 | 2.414535 | 0.001572 | 0.001858 | 0.001794 |
| serialize.test | RUN | 0.632790 | 2.079504 | 2.208672 | 0.001872 | 0.002105 | 0.001876 |
| serializer.test | RUN | 1.000691 | 5.708238 | 5.230896 | 0.002868 | 0.003087 | 0.002620 |
| snippets.test | RUN | 1.542596 | 8.278144 | 7.552545 | 0.002141 | 0.002060 | 0.002232 |
| static_resource.test | RUN | 0.616884 | 1.883529 | 2.166471 | 0.001916 | 0.002022 | 0.001828 |
| storage_ptr.test | RUN | 0.636075 | 1.918247 | 2.166329 | 0.001660 | 0.001854 | 0.001902 |
| stream_parser.test | RUN | 0.772756 | 3.597471 | 2.928336 | 0.090944 | 0.123546 | 0.079501 |
| string.test | RUN | 1.370736 | 8.438244 | 7.964704 | 0.002965 | 0.002536 | 0.002745 |
| string_view.test | RUN | 0.383504 | 1.222019 | 1.113496 | 0.001804 | 0.002002 | 0.001733 |
| value.test | RUN | 1.326662 | 9.474683 | 6.609527 | 0.003633 | 0.003367 | 0.004216 |
| value_from.test | RUN | 1.225444 | 5.518862 | 5.380849 | 0.001916 | 0.002290 | 0.002114 |
| value_stack.test | RUN | 0.607639 | 1.678356 | 2.028026 | 0.001876 | 0.001958 | 0.001708 |
| value_to.test | RUN | 2.818299 | 17.476860 | 15.070503 | 0.002928 | 0.002864 | 0.003279 |
| value_ref.test | RUN | 0.690912 | 2.594986 | 2.610156 | 0.001980 | 0.001814 | 0.001880 |
| utf8.test | RUN | 0.512804 | 1.675219 | 1.812731 | 0.001772 | 0.001767 | 0.001566 |
| visit.test | RUN | 0.683597 | 2.630918 | 2.560525 | 0.001692 | 0.001969 | 0.001886 |
| d2s_intrinsics_test.test | RUN | 0.506661 | 1.542679 | 1.780689 | 0.001792 | 0.001834 | 0.001942 |
| d2s_table_test.test | RUN | 0.515074 | 1.704789 | 1.724775 | 0.001858 | 0.001900 | 0.001844 |
| d2s_test.test | RUN | 0.551697 | 2.033040 | 2.064263 | 0.001716 | 0.001932 | 0.001870 |
| parse_into.test | RUN | 17.494488 | 144.813618 | 88.907548 | 0.003082 | 0.002890 | 0.002791 |
| limits.test | RUN | 2.112730 | 12.544010 | 9.939183 | 0.002217 | 0.002153 | 0.002248 |
| header_only.test | RUN | 1.376512 | 9.853120 | 6.833466 | 0.001753 | 0.001518 | 0.001697 |
| no_exceptions.test | RUN | 2.055177 | 11.095871 | 8.757735 | 0.001906 | 0.001909 | 0.001873 |
| intrusive_macros.test | RUN | 1.666460 | 10.585081 | 8.186640 | 0.001600 | 0.001786 | 0.001774 |
| _gdb-printers.test | RUN | 0.291553 | 0.791805 | 0.961072 | 0.182732 | 0.219111 | 0.205362 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.887× | 0.901×, 0.872× | 1.002× |
| clang | 1.065× | 1.062×, 1.068× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45272062060).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001637s | 0.001501s | 0.001649s | byte equality observed |
| basic_parser.test | 1 | 0.353799s | 0.211625s | 0.439975s | native test oracle; output varies |
| conversion.test | 10 | 0.000987s | 0.000966s | 0.000980s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000978s | 0.000975s | 0.000983s | byte equality observed |
| d2s_table_test.test | 10 | 0.001007s | 0.000998s | 0.000999s | byte equality observed |
| d2s_test.test | 10 | 0.001054s | 0.001046s | 0.001024s | byte equality observed |
| doc_background.test | 10 | 0.001001s | 0.000972s | 0.000971s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.001025s | 0.001022s | 0.001014s | byte equality observed |
| doc_parsing.test | 10 | 0.001045s | 0.001026s | 0.001027s | byte equality observed |
| doc_quick_look.test | 10 | 0.001014s | 0.001001s | 0.000979s | byte equality observed |
| doc_serializing.test | 10 | 0.001012s | 0.000986s | 0.000955s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.001003s | 0.001010s | 0.000977s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.001004s | 0.000984s | 0.000957s | byte equality observed |
| doc_using_numbers.test | 10 | 0.001013s | 0.000984s | 0.000958s | byte equality observed |
| double.test | 1 | 0.864684s | 0.837730s | 0.880398s | native test oracle; output varies |
| error.test | 10 | 0.001069s | 0.001027s | 0.001096s | byte equality observed |
| fwd.test | 10 | 0.000979s | 0.000967s | 0.000998s | byte equality observed |
| header_only.test | 10 | 0.000949s | 0.000959s | 0.000962s | byte equality observed |
| intrusive_macros.test | 10 | 0.001015s | 0.001005s | 0.001016s | byte equality observed |
| json.test | 10 | 0.000995s | 0.000989s | 0.001011s | byte equality observed |
| kind.test | 10 | 0.001012s | 0.001015s | 0.001016s | byte equality observed |
| limits.test | 10 | 0.001212s | 0.001165s | 0.001185s | byte equality observed |
| memory_resource.test | 10 | 0.001029s | 0.001014s | 0.001013s | byte equality observed |
| monotonic_resource.test | 7 | 0.001456s | 0.001327s | 0.001405s | byte equality observed |
| natvis.test | 10 | 0.001030s | 0.001023s | 0.001018s | byte equality observed |
| no_exceptions.test | 10 | 0.001016s | 0.001001s | 0.001015s | byte equality observed |
| null_resource.test | 10 | 0.001045s | 0.001034s | 0.001022s | byte equality observed |
| object.test | 5 | 0.003831s | 0.003189s | 0.003770s | native test oracle; output varies |
| parse.test | 10 | 0.001412s | 0.001408s | 0.001406s | byte equality observed |
| parse_into.test | 7 | 0.002293s | 0.002236s | 0.002153s | native test oracle; output varies |
| parser.test | 10 | 0.001151s | 0.001163s | 0.001113s | byte equality observed |
| pilfer.test | 10 | 0.000976s | 0.000985s | 0.000976s | byte equality observed |
| pointer.test | 10 | 0.001166s | 0.001163s | 0.001168s | byte equality observed |
| result_for.test | 10 | 0.000986s | 0.000979s | 0.000981s | byte equality observed |
| serialize.test | 10 | 0.001028s | 0.001036s | 0.001018s | byte equality observed |
| serializer.test | 10 | 0.001626s | 0.001663s | 0.001638s | byte equality observed |
| snippets.test | 10 | 0.001182s | 0.001162s | 0.001186s | byte equality observed |
| static_resource.test | 10 | 0.001054s | 0.001051s | 0.001046s | byte equality observed |
| storage_ptr.test | 10 | 0.001034s | 0.001028s | 0.001035s | byte equality observed |
| stream_parser.test | 1 | 0.049696s | 0.064978s | 0.046236s | native test oracle; output varies |
| string.test | 5 | 0.001668s | 0.001491s | 0.001675s | byte equality observed |
| string_view.test | 10 | 0.000975s | 0.000966s | 0.000987s | byte equality observed |
| utf8.test | 10 | 0.000976s | 0.000966s | 0.000990s | byte equality observed |
| value.test | 8 | 0.002076s | 0.001893s | 0.002333s | native test oracle; output varies |
| value_from.test | 10 | 0.001167s | 0.001133s | 0.001158s | byte equality observed |
| value_ref.test | 10 | 0.001040s | 0.001026s | 0.001056s | byte equality observed |
| value_stack.test | 10 | 0.001030s | 0.001041s | 0.001050s | byte equality observed |
| value_to.test | 10 | 0.001777s | 0.001732s | 0.001849s | native test oracle; output varies |
| visit.test | 10 | 0.001022s | 0.001018s | 0.001042s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45272062060).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
