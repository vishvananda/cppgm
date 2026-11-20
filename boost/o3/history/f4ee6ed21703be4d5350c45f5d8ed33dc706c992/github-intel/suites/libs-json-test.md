# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 1.096883 | 6.073058 | 5.107665 | 0.002671 | 0.002788 | 0.002968 |
| basic_parser.test | RUN | 6.518303 | 145.399487 | 84.780244 | 0.625004 | 0.271632 | 0.869944 |
| conversion.test | RUN | 0.738822 | 2.209591 | 2.482642 | 0.001668 | 0.001798 | 0.001754 |
| doc_background.test | RUN | 0.735159 | 2.221400 | 2.450165 | 0.001604 | 0.001532 | 0.001564 |
| doc_forward_conversion.test | RUN | 0.785503 | 2.584945 | 2.796025 | 0.001692 | 0.001788 | 0.001818 |
| doc_parsing.test | RUN | 0.772117 | 2.417978 | 2.583551 | 0.001817 | 0.001654 | 0.001799 |
| doc_quick_look.test | RUN | 1.010477 | 2.899150 | 3.416966 | 0.001728 | 0.001874 | 0.001591 |
| doc_serializing.test | RUN | 0.693154 | 2.133765 | 2.335541 | 0.001709 | 0.001737 | 0.001633 |
| doc_storage_ptr.test | RUN | 0.688402 | 2.204363 | 2.373659 | 0.001849 | 0.001811 | 0.001836 |
| doc_uses_allocator.test | RUN | 0.702568 | 2.144889 | 2.387118 | 0.001886 | 0.001746 | 0.001685 |
| doc_using_numbers.test | RUN | 0.780437 | 2.171741 | 2.572239 | 0.001712 | 0.001779 | 0.001758 |
| double.test | RUN | 0.838771 | 3.795490 | 3.125345 | 1.834482 | 1.654932 | 1.871612 |
| error.test | RUN | 0.598580 | 2.138529 | 1.840799 | 0.001779 | 0.001878 | 0.001654 |
| fwd.test | RUN | 0.692542 | 2.189035 | 2.386973 | 0.001752 | 0.001924 | 0.001708 |
| json.test | RUN | 0.743278 | 2.546293 | 2.678411 | 0.001770 | 0.001827 | 0.001707 |
| kind.test | RUN | 0.569040 | 1.949394 | 1.938104 | 0.001634 | 0.001914 | 0.001733 |
| memory_resource.test | RUN | 0.772281 | 2.563315 | 2.566443 | 0.001749 | 0.001836 | 0.001822 |
| monotonic_resource.test | RUN | 0.698091 | 2.452206 | 2.406357 | 0.002671 | 0.002597 | 0.002618 |
| natvis.test | RUN | 0.718744 | 2.266998 | 2.402763 | 0.001642 | 0.001873 | 0.001775 |
| null_resource.test | RUN | 0.594703 | 2.002964 | 1.936187 | 0.001832 | 0.001870 | 0.001931 |
| object.test | RUN | 1.276713 | 7.080111 | 5.681415 | 0.007241 | 0.006420 | 0.007062 |
| parse.test | RUN | 0.787785 | 3.555066 | 2.911162 | 0.002438 | 0.002569 | 0.002554 |
| parser.test | RUN | 0.743200 | 2.988809 | 2.690782 | 0.002000 | 0.002074 | 0.002026 |
| pilfer.test | RUN | 0.398056 | 1.358052 | 1.322778 | 0.001711 | 0.001836 | 0.001777 |
| pointer.test | RUN | 0.888727 | 4.115670 | 3.398600 | 0.002034 | 0.002148 | 0.001952 |
| result_for.test | RUN | 0.720454 | 2.430402 | 2.483470 | 0.001582 | 0.001825 | 0.001811 |
| serialize.test | RUN | 0.748091 | 2.502703 | 2.429188 | 0.001840 | 0.001887 | 0.001882 |
| serializer.test | RUN | 1.220077 | 7.281322 | 5.794362 | 0.003097 | 0.002972 | 0.003048 |
| snippets.test | RUN | 1.927111 | 10.313668 | 8.563373 | 0.002092 | 0.001947 | 0.002150 |
| static_resource.test | RUN | 0.694454 | 2.223900 | 2.297579 | 0.002006 | 0.002028 | 0.001888 |
| storage_ptr.test | RUN | 0.733496 | 2.410387 | 2.561904 | 0.001827 | 0.001940 | 0.001880 |
| stream_parser.test | RUN | 0.901765 | 4.517082 | 3.645017 | 0.107498 | 0.133361 | 0.098469 |
| string.test | RUN | 1.755885 | 11.421727 | 9.228976 | 0.003132 | 0.002745 | 0.003148 |
| string_view.test | RUN | 0.447200 | 1.443967 | 1.311764 | 0.001862 | 0.001844 | 0.001812 |
| value.test | RUN | 1.614778 | 12.223075 | 7.647037 | 0.003907 | 0.003732 | 0.004615 |
| value_from.test | RUN | 1.498581 | 7.112655 | 6.306381 | 0.001898 | 0.002020 | 0.002052 |
| value_stack.test | RUN | 0.691954 | 2.205043 | 2.386225 | 0.002254 | 0.001870 | 0.001850 |
| value_to.test | RUN | 3.569200 | 21.828458 | 16.122275 | 0.003324 | 0.003328 | 0.002997 |
| value_ref.test | RUN | 0.814550 | 3.178684 | 3.039614 | 0.001900 | 0.001866 | 0.001843 |
| utf8.test | RUN | 0.585325 | 2.070507 | 2.034463 | 0.001698 | 0.001770 | 0.001776 |
| visit.test | RUN | 0.795323 | 3.283227 | 2.831136 | 0.001664 | 0.001824 | 0.001815 |
| d2s_intrinsics_test.test | RUN | 0.577653 | 1.926387 | 1.950624 | 0.001792 | 0.001702 | 0.001674 |
| d2s_table_test.test | RUN | 0.604635 | 2.125376 | 2.043706 | 0.001782 | 0.001776 | 0.001840 |
| d2s_test.test | RUN | 0.633582 | 2.596637 | 2.323913 | 0.001884 | 0.001982 | 0.001837 |
| parse_into.test | RUN | 23.054738 | 176.530435 | 108.314095 | 0.003170 | 0.003144 | 0.002902 |
| limits.test | RUN | 2.607720 | 16.163742 | 11.659000 | 0.002089 | 0.002500 | 0.002106 |
| header_only.test | RUN | 1.765791 | 12.322266 | 7.729035 | 0.001750 | 0.001829 | 0.001792 |
| no_exceptions.test | RUN | 2.507571 | 14.104376 | 10.222566 | 0.001730 | 0.001841 | 0.001812 |
| intrusive_macros.test | RUN | 2.078431 | 13.426774 | 9.366715 | 0.001653 | 0.001941 | 0.001746 |
| _gdb-printers.test | RUN | 0.318141 | 0.937262 | 1.105514 | 0.206034 | 0.346572 | 0.233150 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.901× | 0.904×, 0.899× | 0.992× |
| clang | 1.144× | 1.149×, 1.138× | 0.985× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44667760294).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001779s | 0.001614s | 0.001783s | native test oracle; output varies |
| basic_parser.test | 1 | 0.413571s | 0.287881s | 0.652357s | native test oracle; output varies |
| conversion.test | 10 | 0.000975s | 0.000983s | 0.000978s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000988s | 0.000986s | 0.000998s | byte equality observed |
| d2s_table_test.test | 10 | 0.001017s | 0.001009s | 0.001020s | byte equality observed |
| d2s_test.test | 10 | 0.001075s | 0.001077s | 0.001072s | byte equality observed |
| doc_background.test | 10 | 0.001019s | 0.001009s | 0.001021s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.001034s | 0.001067s | 0.001057s | byte equality observed |
| doc_parsing.test | 10 | 0.001065s | 0.001068s | 0.001085s | byte equality observed |
| doc_quick_look.test | 10 | 0.001063s | 0.001054s | 0.001032s | byte equality observed |
| doc_serializing.test | 10 | 0.001056s | 0.001038s | 0.001031s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.001028s | 0.001043s | 0.001039s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.001028s | 0.001034s | 0.001016s | byte equality observed |
| doc_using_numbers.test | 10 | 0.001061s | 0.001032s | 0.001022s | byte equality observed |
| double.test | 1 | 1.160942s | 1.099435s | 1.161134s | native test oracle; output varies |
| error.test | 10 | 0.001154s | 0.001113s | 0.001132s | byte equality observed |
| fwd.test | 10 | 0.001038s | 0.001017s | 0.001030s | byte equality observed |
| header_only.test | 10 | 0.001020s | 0.000991s | 0.001000s | byte equality observed |
| intrusive_macros.test | 10 | 0.001094s | 0.001048s | 0.001064s | byte equality observed |
| json.test | 10 | 0.001065s | 0.001017s | 0.001044s | byte equality observed |
| kind.test | 10 | 0.001088s | 0.001038s | 0.001060s | byte equality observed |
| limits.test | 10 | 0.001294s | 0.001211s | 0.001230s | byte equality observed |
| memory_resource.test | 10 | 0.001070s | 0.001042s | 0.001061s | byte equality observed |
| monotonic_resource.test | 10 | 0.001582s | 0.001520s | 0.001535s | native test oracle; output varies |
| natvis.test | 10 | 0.001082s | 0.001042s | 0.001061s | byte equality observed |
| no_exceptions.test | 10 | 0.001067s | 0.001026s | 0.001054s | byte equality observed |
| null_resource.test | 10 | 0.001094s | 0.001072s | 0.001094s | byte equality observed |
| object.test | 5 | 0.004541s | 0.003790s | 0.004494s | native test oracle; output varies |
| parse.test | 10 | 0.001499s | 0.001489s | 0.001482s | byte equality observed |
| parse_into.test | 7 | 0.002472s | 0.002386s | 0.002299s | native test oracle; output varies |
| parser.test | 10 | 0.001201s | 0.001175s | 0.001182s | byte equality observed |
| pilfer.test | 10 | 0.001029s | 0.001032s | 0.001025s | byte equality observed |
| pointer.test | 10 | 0.001235s | 0.001240s | 0.001262s | byte equality observed |
| result_for.test | 10 | 0.001017s | 0.001034s | 0.001032s | byte equality observed |
| serialize.test | 10 | 0.001075s | 0.001100s | 0.001076s | byte equality observed |
| serializer.test | 10 | 0.001854s | 0.001840s | 0.001826s | byte equality observed |
| snippets.test | 10 | 0.001241s | 0.001230s | 0.001233s | byte equality observed |
| static_resource.test | 10 | 0.001136s | 0.001112s | 0.001088s | byte equality observed |
| storage_ptr.test | 10 | 0.001086s | 0.001082s | 0.001088s | byte equality observed |
| stream_parser.test | 1 | 0.058570s | 0.079288s | 0.058824s | native test oracle; output varies |
| string.test | 9 | 0.001872s | 0.001617s | 0.001842s | byte equality observed |
| string_view.test | 10 | 0.001033s | 0.001022s | 0.001037s | byte equality observed |
| utf8.test | 10 | 0.001023s | 0.001022s | 0.001039s | byte equality observed |
| value.test | 6 | 0.002351s | 0.002185s | 0.002799s | native test oracle; output varies |
| value_from.test | 10 | 0.001217s | 0.001216s | 0.001214s | byte equality observed |
| value_ref.test | 10 | 0.001130s | 0.001091s | 0.001090s | byte equality observed |
| value_stack.test | 10 | 0.001078s | 0.001070s | 0.001058s | byte equality observed |
| value_to.test | 9 | 0.001976s | 0.001945s | 0.001960s | native test oracle; output varies |
| visit.test | 10 | 0.001079s | 0.001068s | 0.001057s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44667760294).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
