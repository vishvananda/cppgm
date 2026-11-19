# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 1.057599 | 5.800536 | 4.920467 | 0.002917 | 0.002784 | 0.003037 |
| basic_parser.test | RUN | 6.441432 | 142.595835 | 83.143871 | 0.587915 | 0.263081 | 0.820500 |
| conversion.test | RUN | 0.722134 | 2.201307 | 2.399037 | 0.001600 | 0.001728 | 0.001702 |
| doc_background.test | RUN | 0.723397 | 2.112595 | 2.371366 | 0.001874 | 0.001454 | 0.001487 |
| doc_forward_conversion.test | RUN | 0.767255 | 2.505560 | 2.745248 | 0.001656 | 0.001788 | 0.001744 |
| doc_parsing.test | RUN | 0.771987 | 2.329287 | 2.530656 | 0.001842 | 0.001846 | 0.001553 |
| doc_quick_look.test | RUN | 1.006331 | 2.810016 | 3.356206 | 0.001794 | 0.001710 | 0.001705 |
| doc_serializing.test | RUN | 0.687496 | 2.074241 | 2.285154 | 0.001762 | 0.001819 | 0.001646 |
| doc_storage_ptr.test | RUN | 0.698555 | 2.138195 | 2.321385 | 0.001773 | 0.001630 | 0.001601 |
| doc_uses_allocator.test | RUN | 0.695435 | 2.053307 | 2.297221 | 0.001843 | 0.001728 | 0.001680 |
| doc_using_numbers.test | RUN | 0.760147 | 2.191138 | 2.536773 | 0.001656 | 0.001944 | 0.001723 |
| double.test | RUN | 0.821667 | 3.673252 | 2.881061 | 1.798720 | 1.763582 | 1.840004 |
| error.test | RUN | 0.579651 | 2.066708 | 1.915993 | 0.001713 | 0.001807 | 0.001702 |
| fwd.test | RUN | 0.677561 | 2.075419 | 2.232575 | 0.001613 | 0.001718 | 0.001696 |
| json.test | RUN | 0.716835 | 2.371471 | 2.651610 | 0.001664 | 0.001788 | 0.001726 |
| kind.test | RUN | 0.537198 | 1.868484 | 1.821746 | 0.001696 | 0.001838 | 0.001832 |
| memory_resource.test | RUN | 0.762544 | 2.491185 | 2.441150 | 0.001559 | 0.001730 | 0.001716 |
| monotonic_resource.test | RUN | 0.687697 | 2.319502 | 2.399817 | 0.002605 | 0.002353 | 0.002527 |
| natvis.test | RUN | 0.702484 | 2.279496 | 2.276040 | 0.001720 | 0.001898 | 0.001767 |
| null_resource.test | RUN | 0.581132 | 1.931536 | 1.855993 | 0.001828 | 0.001916 | 0.001841 |
| object.test | RUN | 1.254802 | 6.856861 | 5.993460 | 0.007789 | 0.006206 | 0.007672 |
| parse.test | RUN | 0.762335 | 3.436631 | 2.594752 | 0.002424 | 0.002421 | 0.002411 |
| parser.test | RUN | 0.729820 | 2.920694 | 2.457506 | 0.001992 | 0.001967 | 0.001964 |
| pilfer.test | RUN | 0.391118 | 1.329716 | 1.201265 | 0.001862 | 0.001592 | 0.001765 |
| pointer.test | RUN | 0.874444 | 3.982830 | 3.308913 | 0.001799 | 0.002110 | 0.002061 |
| result_for.test | RUN | 0.707413 | 2.342542 | 2.400985 | 0.001816 | 0.001781 | 0.001698 |
| serialize.test | RUN | 0.726529 | 2.447824 | 2.447443 | 0.001816 | 0.002006 | 0.001693 |
| serializer.test | RUN | 1.205103 | 7.059462 | 5.527759 | 0.003001 | 0.003111 | 0.002974 |
| snippets.test | RUN | 1.892056 | 9.982510 | 8.466527 | 0.002099 | 0.001848 | 0.001960 |
| static_resource.test | RUN | 0.686766 | 2.175342 | 2.291703 | 0.001706 | 0.001977 | 0.001850 |
| storage_ptr.test | RUN | 0.712436 | 2.352337 | 2.439446 | 0.001970 | 0.001954 | 0.001830 |
| stream_parser.test | RUN | 0.902693 | 4.387758 | 3.356772 | 0.101473 | 0.130380 | 0.088090 |
| string.test | RUN | 1.707181 | 11.174459 | 9.086483 | 0.002915 | 0.002638 | 0.002929 |
| string_view.test | RUN | 0.426796 | 1.415697 | 1.269365 | 0.001526 | 0.001845 | 0.001741 |
| value.test | RUN | 1.580578 | 11.178553 | 7.509272 | 0.003892 | 0.003279 | 0.004424 |
| value_from.test | RUN | 1.448795 | 6.905506 | 6.226706 | 0.001938 | 0.002334 | 0.002050 |
| value_stack.test | RUN | 0.672662 | 2.144420 | 2.343302 | 0.001761 | 0.001862 | 0.001671 |
| value_to.test | RUN | 3.504733 | 21.587025 | 16.566140 | 0.003361 | 0.003024 | 0.003348 |
| value_ref.test | RUN | 0.782730 | 3.097351 | 2.886764 | 0.001850 | 0.001859 | 0.001781 |
| utf8.test | RUN | 0.575957 | 2.009285 | 1.937612 | 0.001668 | 0.001838 | 0.001706 |
| visit.test | RUN | 0.835691 | 3.142738 | 2.709249 | 0.001688 | 0.001804 | 0.001750 |
| d2s_intrinsics_test.test | RUN | 0.566756 | 1.856951 | 1.956608 | 0.001659 | 0.001704 | 0.001719 |
| d2s_table_test.test | RUN | 0.581827 | 2.090095 | 1.958146 | 0.001817 | 0.001766 | 0.001813 |
| d2s_test.test | RUN | 0.617848 | 2.527429 | 2.302723 | 0.001765 | 0.001908 | 0.001801 |
| parse_into.test | RUN | 22.799341 | 173.402980 | 107.776740 | 0.003266 | 0.002883 | 0.002877 |
| limits.test | RUN | 2.596588 | 15.992967 | 11.279145 | 0.002066 | 0.002010 | 0.002110 |
| header_only.test | RUN | 1.716503 | 12.133608 | 8.217098 | 0.001561 | 0.001657 | 0.001730 |
| no_exceptions.test | RUN | 2.389639 | 13.201144 | 9.975554 | 0.001598 | 0.002041 | 0.001973 |
| intrusive_macros.test | RUN | 2.047270 | 13.182207 | 9.529096 | 0.001621 | 0.001832 | 0.001761 |
| _gdb-printers.test | RUN | 0.313864 | 0.882289 | 1.079882 | 0.205534 | 0.360258 | 0.231824 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.913× | 0.923×, 0.903× | 1.017× |
| clang | 1.149× | 1.143×, 1.154× | 1.007× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44597827043).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 9 | 0.001791s | 0.001590s | 0.001725s | native test oracle; output varies |
| basic_parser.test | 1 | 0.400846s | 0.281263s | 0.639371s | native test oracle; output varies |
| conversion.test | 10 | 0.000980s | 0.000966s | 0.000944s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000974s | 0.000969s | 0.000944s | byte equality observed |
| d2s_table_test.test | 10 | 0.001006s | 0.000994s | 0.000973s | byte equality observed |
| d2s_test.test | 10 | 0.001072s | 0.001035s | 0.001017s | byte equality observed |
| doc_background.test | 10 | 0.001015s | 0.000973s | 0.000946s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.001036s | 0.001029s | 0.000994s | byte equality observed |
| doc_parsing.test | 10 | 0.001057s | 0.001045s | 0.001001s | byte equality observed |
| doc_quick_look.test | 10 | 0.001007s | 0.001014s | 0.000987s | byte equality observed |
| doc_serializing.test | 10 | 0.001006s | 0.001010s | 0.000965s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.001012s | 0.001028s | 0.000982s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.001016s | 0.000998s | 0.000978s | byte equality observed |
| doc_using_numbers.test | 10 | 0.001027s | 0.001008s | 0.000997s | byte equality observed |
| double.test | 1 | 1.126762s | 1.077400s | 1.142914s | native test oracle; output varies |
| error.test | 10 | 0.001114s | 0.001078s | 0.001091s | byte equality observed |
| fwd.test | 10 | 0.000991s | 0.000972s | 0.000977s | byte equality observed |
| header_only.test | 10 | 0.000996s | 0.000956s | 0.000946s | byte equality observed |
| intrusive_macros.test | 10 | 0.001048s | 0.001026s | 0.000968s | byte equality observed |
| json.test | 10 | 0.001021s | 0.000984s | 0.000978s | byte equality observed |
| kind.test | 10 | 0.001041s | 0.001023s | 0.001011s | byte equality observed |
| limits.test | 10 | 0.001232s | 0.001192s | 0.001192s | byte equality observed |
| memory_resource.test | 10 | 0.001041s | 0.001034s | 0.001005s | byte equality observed |
| monotonic_resource.test | 10 | 0.001529s | 0.001498s | 0.001471s | byte equality observed |
| natvis.test | 10 | 0.001062s | 0.001026s | 0.001028s | byte equality observed |
| no_exceptions.test | 10 | 0.001049s | 0.000993s | 0.001023s | byte equality observed |
| null_resource.test | 10 | 0.001070s | 0.001039s | 0.001037s | byte equality observed |
| object.test | 5 | 0.004441s | 0.003683s | 0.004357s | native test oracle; output varies |
| parse.test | 10 | 0.001460s | 0.001463s | 0.001453s | byte equality observed |
| parse_into.test | 7 | 0.002468s | 0.002319s | 0.002239s | native test oracle; output varies |
| parser.test | 10 | 0.001180s | 0.001146s | 0.001128s | byte equality observed |
| pilfer.test | 10 | 0.000990s | 0.000995s | 0.000969s | byte equality observed |
| pointer.test | 10 | 0.001211s | 0.001180s | 0.001191s | byte equality observed |
| result_for.test | 10 | 0.001004s | 0.000991s | 0.000968s | byte equality observed |
| serialize.test | 10 | 0.001057s | 0.001060s | 0.001015s | byte equality observed |
| serializer.test | 8 | 0.001791s | 0.001800s | 0.001779s | native test oracle; output varies |
| snippets.test | 10 | 0.001222s | 0.001193s | 0.001197s | byte equality observed |
| static_resource.test | 10 | 0.001103s | 0.001093s | 0.001063s | byte equality observed |
| storage_ptr.test | 10 | 0.001063s | 0.001059s | 0.001029s | byte equality observed |
| stream_parser.test | 1 | 0.056619s | 0.077407s | 0.056689s | native test oracle; output varies |
| string.test | 9 | 0.001817s | 0.001584s | 0.001807s | native test oracle; output varies |
| string_view.test | 10 | 0.000985s | 0.001005s | 0.000994s | byte equality observed |
| utf8.test | 10 | 0.001012s | 0.001001s | 0.001001s | byte equality observed |
| value.test | 7 | 0.002301s | 0.002126s | 0.002713s | native test oracle; output varies |
| value_from.test | 10 | 0.001195s | 0.001206s | 0.001180s | byte equality observed |
| value_ref.test | 10 | 0.001075s | 0.001052s | 0.001077s | byte equality observed |
| value_stack.test | 10 | 0.001051s | 0.001026s | 0.001039s | byte equality observed |
| value_to.test | 10 | 0.001921s | 0.001913s | 0.001918s | native test oracle; output varies |
| visit.test | 10 | 0.001059s | 0.001037s | 0.001022s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44597827043).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
