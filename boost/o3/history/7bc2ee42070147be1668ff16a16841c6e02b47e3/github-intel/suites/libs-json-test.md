# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 1.110600 | 6.298689 | 5.474300 | 0.002919 | 0.002578 | 0.003000 |
| basic_parser.test | RUN | 6.603170 | 145.727775 | 88.517593 | 0.741609 | 0.241079 | 0.933406 |
| conversion.test | RUN | 0.772724 | 2.323343 | 2.762707 | 0.001687 | 0.001736 | 0.001627 |
| doc_background.test | RUN | 0.759034 | 2.357347 | 2.725330 | 0.001583 | 0.001685 | 0.003522 |
| doc_forward_conversion.test | RUN | 0.803127 | 2.729501 | 3.100576 | 0.001779 | 0.001754 | 0.001700 |
| doc_parsing.test | RUN | 0.794249 | 2.495754 | 2.891002 | 0.001789 | 0.001687 | 0.001750 |
| doc_quick_look.test | RUN | 1.032632 | 3.100489 | 3.777181 | 0.001665 | 0.001832 | 0.001683 |
| doc_serializing.test | RUN | 0.729417 | 2.219002 | 2.575162 | 0.001640 | 0.001577 | 0.001682 |
| doc_storage_ptr.test | RUN | 0.717155 | 2.333246 | 2.603867 | 0.001530 | 0.001626 | 0.001680 |
| doc_uses_allocator.test | RUN | 0.724527 | 2.274328 | 2.589370 | 0.001679 | 0.001720 | 0.001598 |
| doc_using_numbers.test | RUN | 0.787584 | 2.283825 | 2.854849 | 0.001740 | 0.001738 | 0.001664 |
| double.test | RUN | 0.857270 | 3.986100 | 3.474040 | 1.856043 | 1.894668 | 1.938735 |
| error.test | RUN | 0.616481 | 2.175382 | 2.104236 | 0.001659 | 0.001681 | 0.001631 |
| fwd.test | RUN | 0.723076 | 2.235090 | 2.641885 | 0.001598 | 0.001649 | 0.001642 |
| json.test | RUN | 0.764428 | 2.536649 | 3.058850 | 0.001649 | 0.001603 | 0.001633 |
| kind.test | RUN | 0.581667 | 2.051350 | 2.052449 | 0.001700 | 0.001768 | 0.001714 |
| memory_resource.test | RUN | 0.804800 | 2.655279 | 2.863589 | 0.001820 | 0.001770 | 0.001700 |
| monotonic_resource.test | RUN | 0.710833 | 2.530187 | 2.571997 | 0.002755 | 0.002671 | 0.002466 |
| natvis.test | RUN | 0.735986 | 2.457753 | 2.628899 | 0.001762 | 0.001644 | 0.001629 |
| null_resource.test | RUN | 0.616785 | 2.088723 | 2.158743 | 0.001780 | 0.001762 | 0.001705 |
| object.test | RUN | 1.290149 | 7.284489 | 6.512575 | 0.008286 | 0.006724 | 0.006959 |
| parse.test | RUN | 0.808776 | 3.698420 | 3.140746 | 0.002336 | 0.002440 | 0.002367 |
| parser.test | RUN | 0.780220 | 3.169487 | 2.767879 | 0.001968 | 0.001783 | 0.001738 |
| pilfer.test | RUN | 0.410656 | 1.424302 | 1.407077 | 0.001530 | 0.001669 | 0.001646 |
| pointer.test | RUN | 0.891864 | 4.218429 | 3.602697 | 0.001962 | 0.002026 | 0.001759 |
| result_for.test | RUN | 0.737270 | 2.517724 | 2.690859 | 0.001540 | 0.001731 | 0.001704 |
| serialize.test | RUN | 0.743873 | 2.625961 | 2.757817 | 0.001710 | 0.001820 | 0.001692 |
| serializer.test | RUN | 1.230299 | 7.557205 | 6.108759 | 0.003105 | 0.002901 | 0.002910 |
| snippets.test | RUN | 1.914543 | 10.488717 | 9.251962 | 0.002076 | 0.002062 | 0.002011 |
| static_resource.test | RUN | 0.732275 | 2.423423 | 2.567971 | 0.001837 | 0.001843 | 0.001802 |
| storage_ptr.test | RUN | 0.762019 | 2.492421 | 2.792279 | 0.001759 | 0.001802 | 0.001731 |
| stream_parser.test | RUN | 0.927818 | 4.704135 | 3.893198 | 0.124691 | 0.146539 | 0.105664 |
| string.test | RUN | 1.736697 | 11.405095 | 9.659425 | 0.003084 | 0.002667 | 0.002847 |
| string_view.test | RUN | 0.452804 | 1.515645 | 1.415888 | 0.001630 | 0.001762 | 0.001626 |
| value.test | RUN | 1.633651 | 12.001669 | 8.283652 | 0.003637 | 0.003698 | 0.004565 |
| value_from.test | RUN | 1.498907 | 7.802733 | 6.724068 | 0.001912 | 0.001862 | 0.001912 |
| value_stack.test | RUN | 0.714237 | 2.325449 | 2.629462 | 0.001725 | 0.001750 | 0.001698 |
| value_to.test | RUN | 3.469549 | 22.114422 | 16.907609 | 0.003311 | 0.003079 | 0.003229 |
| value_ref.test | RUN | 0.833811 | 3.328010 | 3.327531 | 0.001575 | 0.001835 | 0.001718 |
| utf8.test | RUN | 0.602174 | 2.149087 | 2.227490 | 0.001612 | 0.001765 | 0.001639 |
| visit.test | RUN | 0.831780 | 3.417629 | 3.122417 | 0.001612 | 0.001790 | 0.001689 |
| d2s_intrinsics_test.test | RUN | 0.614063 | 2.071592 | 2.156700 | 0.001650 | 0.001715 | 0.001706 |
| d2s_table_test.test | RUN | 0.624777 | 2.290964 | 2.259022 | 0.001672 | 0.001761 | 0.001677 |
| d2s_test.test | RUN | 0.658112 | 2.648968 | 2.572767 | 0.001758 | 0.001747 | 0.001728 |
| parse_into.test | RUN | 22.179852 | 176.369393 | 111.445118 | 0.002817 | 0.002769 | 0.002697 |
| limits.test | RUN | 2.602290 | 16.093452 | 11.525035 | 0.002080 | 0.002054 | 0.001852 |
| header_only.test | RUN | 1.746216 | 12.298547 | 8.663399 | 0.001528 | 0.001630 | 0.001586 |
| no_exceptions.test | RUN | 2.447393 | 13.746492 | 11.343959 | 0.001776 | 0.001724 | 0.001647 |
| intrusive_macros.test | RUN | 2.056116 | 13.753795 | 9.214364 | 0.001563 | 0.001668 | 0.001735 |
| _gdb-printers.test | RUN | 0.333026 | 0.925402 | 1.210029 | 0.203885 | 0.340366 | 0.236737 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.901× | 0.891×, 0.911× | 1.004× |
| clang | 1.098× | 1.107×, 1.089× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44927958294).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001721s | 0.001533s | 0.001750s | native test oracle; output varies |
| basic_parser.test | 1 | 0.395191s | 0.259277s | 0.570529s | native test oracle; output varies |
| conversion.test | 10 | 0.000892s | 0.000902s | 0.000923s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000894s | 0.000922s | 0.000903s | byte equality observed |
| d2s_table_test.test | 10 | 0.000927s | 0.000944s | 0.000934s | byte equality observed |
| d2s_test.test | 10 | 0.000954s | 0.000983s | 0.000966s | byte equality observed |
| doc_background.test | 10 | 0.000924s | 0.000920s | 0.000926s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.000950s | 0.000975s | 0.000956s | byte equality observed |
| doc_parsing.test | 10 | 0.000969s | 0.000976s | 0.000948s | byte equality observed |
| doc_quick_look.test | 10 | 0.000953s | 0.000952s | 0.000920s | byte equality observed |
| doc_serializing.test | 10 | 0.000946s | 0.000952s | 0.000914s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.000946s | 0.000954s | 0.000936s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.000949s | 0.000927s | 0.000909s | byte equality observed |
| doc_using_numbers.test | 10 | 0.000948s | 0.000927s | 0.000929s | byte equality observed |
| double.test | 1 | 1.178778s | 1.134583s | 1.181172s | native test oracle; output varies |
| error.test | 10 | 0.001000s | 0.001005s | 0.000987s | byte equality observed |
| fwd.test | 10 | 0.000919s | 0.000921s | 0.000911s | byte equality observed |
| header_only.test | 10 | 0.000915s | 0.000901s | 0.000890s | byte equality observed |
| intrusive_macros.test | 10 | 0.000967s | 0.000971s | 0.000928s | byte equality observed |
| json.test | 10 | 0.000932s | 0.000954s | 0.000921s | byte equality observed |
| kind.test | 10 | 0.000947s | 0.000967s | 0.000958s | byte equality observed |
| limits.test | 10 | 0.001151s | 0.001148s | 0.001121s | byte equality observed |
| memory_resource.test | 10 | 0.000955s | 0.000983s | 0.000948s | byte equality observed |
| monotonic_resource.test | 10 | 0.001660s | 0.001591s | 0.001579s | native test oracle; output varies |
| natvis.test | 10 | 0.000978s | 0.000971s | 0.000965s | byte equality observed |
| no_exceptions.test | 10 | 0.000965s | 0.000965s | 0.000953s | byte equality observed |
| null_resource.test | 10 | 0.000992s | 0.000977s | 0.000981s | byte equality observed |
| object.test | 5 | 0.004467s | 0.003635s | 0.004318s | native test oracle; output varies |
| parse.test | 10 | 0.001388s | 0.001361s | 0.001355s | byte equality observed |
| parse_into.test | 8 | 0.002230s | 0.002107s | 0.002049s | native test oracle; output varies |
| parser.test | 10 | 0.001110s | 0.001066s | 0.001084s | byte equality observed |
| pilfer.test | 10 | 0.000933s | 0.000930s | 0.000922s | byte equality observed |
| pointer.test | 10 | 0.001142s | 0.001110s | 0.001114s | byte equality observed |
| result_for.test | 10 | 0.000951s | 0.000914s | 0.000928s | byte equality observed |
| serialize.test | 10 | 0.000980s | 0.000959s | 0.000969s | byte equality observed |
| serializer.test | 10 | 0.001714s | 0.001709s | 0.001685s | native test oracle; output varies |
| snippets.test | 10 | 0.001143s | 0.001099s | 0.001099s | byte equality observed |
| static_resource.test | 10 | 0.001019s | 0.001003s | 0.000978s | byte equality observed |
| storage_ptr.test | 10 | 0.000989s | 0.000990s | 0.000953s | byte equality observed |
| stream_parser.test | 1 | 0.064589s | 0.075521s | 0.058080s | native test oracle; output varies |
| string.test | 7 | 0.001729s | 0.001503s | 0.001692s | native test oracle; output varies |
| string_view.test | 10 | 0.000952s | 0.000937s | 0.000897s | byte equality observed |
| utf8.test | 10 | 0.000946s | 0.000957s | 0.000886s | byte equality observed |
| value.test | 8 | 0.002192s | 0.002015s | 0.002514s | native test oracle; output varies |
| value_from.test | 10 | 0.001118s | 0.001095s | 0.001055s | byte equality observed |
| value_ref.test | 10 | 0.001006s | 0.000993s | 0.000963s | byte equality observed |
| value_stack.test | 10 | 0.000978s | 0.000976s | 0.000959s | byte equality observed |
| value_to.test | 10 | 0.001829s | 0.001803s | 0.001795s | native test oracle; output varies |
| visit.test | 10 | 0.000980s | 0.000959s | 0.000934s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44927958294).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
