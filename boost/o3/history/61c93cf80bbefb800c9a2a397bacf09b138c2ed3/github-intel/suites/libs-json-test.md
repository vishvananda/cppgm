# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 1.057170 | 5.937829 | 4.919717 | 0.002606 | 0.002738 | 0.002930 |
| basic_parser.test | RUN | 6.480742 | 139.734728 | 82.732451 | 0.606457 | 0.263787 | 0.849978 |
| conversion.test | RUN | 0.710143 | 2.129564 | 2.439733 | 0.001496 | 0.001745 | 0.001678 |
| doc_background.test | RUN | 0.714287 | 2.159636 | 2.408583 | 0.001720 | 0.001807 | 0.001462 |
| doc_forward_conversion.test | RUN | 0.747397 | 2.516002 | 2.720030 | 0.001772 | 0.001653 | 0.001604 |
| doc_parsing.test | RUN | 0.767244 | 2.340330 | 2.470069 | 0.001760 | 0.001921 | 0.001567 |
| doc_quick_look.test | RUN | 0.986550 | 2.855885 | 3.399925 | 0.001668 | 0.001641 | 0.001667 |
| doc_serializing.test | RUN | 0.677152 | 2.067814 | 2.279276 | 0.001438 | 0.001527 | 0.001711 |
| doc_storage_ptr.test | RUN | 0.677902 | 2.133511 | 2.316659 | 0.001648 | 0.001797 | 0.001686 |
| doc_uses_allocator.test | RUN | 0.683774 | 2.075901 | 2.288393 | 0.001860 | 0.001722 | 0.001713 |
| doc_using_numbers.test | RUN | 0.754307 | 2.205856 | 2.432605 | 0.001712 | 0.001927 | 0.001670 |
| double.test | RUN | 0.817412 | 3.713288 | 3.071964 | 1.762265 | 1.701550 | 1.831735 |
| error.test | RUN | 0.587539 | 2.067375 | 1.794630 | 0.001736 | 0.001984 | 0.001638 |
| fwd.test | RUN | 0.685201 | 2.061449 | 2.333694 | 0.001738 | 0.001788 | 0.001701 |
| json.test | RUN | 0.724841 | 2.446561 | 2.588824 | 0.001793 | 0.001766 | 0.001694 |
| kind.test | RUN | 0.560840 | 1.870801 | 1.916882 | 0.001831 | 0.001882 | 0.001479 |
| memory_resource.test | RUN | 0.765814 | 2.506431 | 2.484560 | 0.001588 | 0.001839 | 0.001843 |
| monotonic_resource.test | RUN | 0.668288 | 2.350238 | 2.310458 | 0.002517 | 0.002572 | 0.002636 |
| natvis.test | RUN | 0.692419 | 2.309032 | 2.424925 | 0.001689 | 0.001830 | 0.001693 |
| null_resource.test | RUN | 0.566990 | 1.922759 | 1.866447 | 0.001593 | 0.001920 | 0.001864 |
| object.test | RUN | 1.222402 | 6.879436 | 5.899364 | 0.007457 | 0.006205 | 0.007733 |
| parse.test | RUN | 0.761908 | 3.470865 | 2.687949 | 0.002130 | 0.002404 | 0.002318 |
| parser.test | RUN | 0.727488 | 2.915972 | 2.504477 | 0.001934 | 0.001870 | 0.002036 |
| pilfer.test | RUN | 0.383114 | 1.304578 | 1.195338 | 0.001654 | 0.001720 | 0.001612 |
| pointer.test | RUN | 0.874902 | 3.981026 | 3.356724 | 0.001979 | 0.002128 | 0.002064 |
| result_for.test | RUN | 0.698298 | 2.347800 | 2.418484 | 0.001555 | 0.001556 | 0.001854 |
| serialize.test | RUN | 0.722217 | 2.433146 | 2.383203 | 0.001710 | 0.001918 | 0.001781 |
| serializer.test | RUN | 1.163497 | 7.132626 | 5.765743 | 0.002872 | 0.002893 | 0.002877 |
| snippets.test | RUN | 1.875627 | 10.006525 | 8.108849 | 0.001949 | 0.002176 | 0.002050 |
| static_resource.test | RUN | 0.683687 | 2.159534 | 2.272557 | 0.001861 | 0.001936 | 0.001838 |
| storage_ptr.test | RUN | 0.711227 | 2.362464 | 2.463321 | 0.001828 | 0.001818 | 0.001762 |
| stream_parser.test | RUN | 0.886010 | 4.420717 | 3.649537 | 0.103517 | 0.128814 | 0.102984 |
| string.test | RUN | 1.707872 | 10.986386 | 9.040832 | 0.002914 | 0.002484 | 0.002962 |
| string_view.test | RUN | 0.431526 | 1.401302 | 1.378407 | 0.001664 | 0.001592 | 0.001629 |
| value.test | RUN | 1.578059 | 11.748214 | 7.232359 | 0.003690 | 0.003494 | 0.004351 |
| value_from.test | RUN | 1.445359 | 6.916568 | 6.413088 | 0.001834 | 0.002022 | 0.001833 |
| value_stack.test | RUN | 0.677067 | 2.146439 | 2.215349 | 0.001661 | 0.001824 | 0.001858 |
| value_to.test | RUN | 3.447072 | 21.693263 | 16.565791 | 0.003151 | 0.003350 | 0.003318 |
| value_ref.test | RUN | 0.768657 | 3.075256 | 2.856092 | 0.001635 | 0.001840 | 0.001717 |
| utf8.test | RUN | 0.580352 | 1.962637 | 1.923589 | 0.001607 | 0.001704 | 0.001670 |
| visit.test | RUN | 0.779337 | 3.068415 | 2.715646 | 0.001856 | 0.001846 | 0.001740 |
| d2s_intrinsics_test.test | RUN | 0.573789 | 1.788713 | 1.872760 | 0.001700 | 0.002008 | 0.001738 |
| d2s_table_test.test | RUN | 0.589167 | 2.037170 | 1.950501 | 0.001831 | 0.001887 | 0.001768 |
| d2s_test.test | RUN | 0.619230 | 2.514567 | 2.312846 | 0.001795 | 0.002404 | 0.001792 |
| parse_into.test | RUN | 22.708172 | 173.718705 | 105.153726 | 0.003094 | 0.002940 | 0.002770 |
| limits.test | RUN | 2.515532 | 15.664076 | 11.239930 | 0.001998 | 0.002074 | 0.002168 |
| header_only.test | RUN | 1.720190 | 11.893681 | 8.074008 | 0.001558 | 0.001734 | 0.001601 |
| no_exceptions.test | RUN | 2.366081 | 13.595038 | 10.470996 | 0.001628 | 0.001809 | 0.001800 |
| intrusive_macros.test | RUN | 2.014411 | 12.998386 | 9.158556 | 0.001481 | 0.001885 | 0.001649 |
| _gdb-printers.test | RUN | 0.307199 | 0.903843 | 1.101305 | 0.205831 | 0.301590 | 0.223972 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.951× | 0.943×, 0.958× | 0.985× |
| clang | 1.172× | 1.165×, 1.179× | 1.005× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45754596224).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001757s | 0.001597s | 0.001724s | native test oracle; output varies |
| basic_parser.test | 1 | 0.401967s | 0.279729s | 0.630871s | native test oracle; output varies |
| conversion.test | 10 | 0.000970s | 0.000956s | 0.000947s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000966s | 0.000971s | 0.000960s | byte equality observed |
| d2s_table_test.test | 10 | 0.000999s | 0.000990s | 0.000991s | byte equality observed |
| d2s_test.test | 10 | 0.001020s | 0.001027s | 0.001011s | byte equality observed |
| doc_background.test | 10 | 0.000983s | 0.000996s | 0.000980s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.001018s | 0.001028s | 0.001030s | byte equality observed |
| doc_parsing.test | 10 | 0.001023s | 0.001050s | 0.001012s | byte equality observed |
| doc_quick_look.test | 10 | 0.000999s | 0.001004s | 0.001011s | byte equality observed |
| doc_serializing.test | 10 | 0.000988s | 0.000996s | 0.000987s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.000990s | 0.000999s | 0.001002s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.000985s | 0.000971s | 0.000978s | byte equality observed |
| doc_using_numbers.test | 10 | 0.001000s | 0.001008s | 0.000998s | byte equality observed |
| double.test | 1 | 1.088605s | 1.105179s | 1.141822s | native test oracle; output varies |
| error.test | 9 | 0.001098s | 0.001061s | 0.001114s | byte equality observed |
| fwd.test | 10 | 0.001008s | 0.000970s | 0.001005s | byte equality observed |
| header_only.test | 10 | 0.000976s | 0.000952s | 0.000998s | byte equality observed |
| intrusive_macros.test | 10 | 0.001026s | 0.001003s | 0.001011s | byte equality observed |
| json.test | 10 | 0.000998s | 0.000991s | 0.001008s | byte equality observed |
| kind.test | 10 | 0.001032s | 0.001002s | 0.001026s | byte equality observed |
| limits.test | 10 | 0.001221s | 0.001189s | 0.001191s | byte equality observed |
| memory_resource.test | 10 | 0.001029s | 0.000995s | 0.001011s | byte equality observed |
| monotonic_resource.test | 10 | 0.001507s | 0.001478s | 0.001453s | byte equality observed |
| natvis.test | 10 | 0.001024s | 0.001037s | 0.001022s | byte equality observed |
| no_exceptions.test | 10 | 0.001006s | 0.001029s | 0.001018s | byte equality observed |
| null_resource.test | 10 | 0.001026s | 0.001054s | 0.001043s | byte equality observed |
| object.test | 5 | 0.004367s | 0.003906s | 0.004383s | native test oracle; output varies |
| parse.test | 10 | 0.001439s | 0.001450s | 0.001445s | byte equality observed |
| parse_into.test | 6 | 0.002439s | 0.002311s | 0.002234s | native test oracle; output varies |
| parser.test | 10 | 0.001150s | 0.001129s | 0.001182s | byte equality observed |
| pilfer.test | 10 | 0.000981s | 0.000969s | 0.001006s | byte equality observed |
| pointer.test | 10 | 0.001180s | 0.001171s | 0.001216s | byte equality observed |
| result_for.test | 10 | 0.000985s | 0.000966s | 0.001012s | byte equality observed |
| serialize.test | 10 | 0.001047s | 0.001023s | 0.001051s | byte equality observed |
| serializer.test | 10 | 0.001796s | 0.001770s | 0.001758s | native test oracle; output varies |
| snippets.test | 10 | 0.001215s | 0.001177s | 0.001187s | byte equality observed |
| static_resource.test | 10 | 0.001089s | 0.001071s | 0.001075s | byte equality observed |
| storage_ptr.test | 10 | 0.001068s | 0.001042s | 0.001030s | byte equality observed |
| stream_parser.test | 1 | 0.057486s | 0.077447s | 0.056665s | native test oracle; output varies |
| string.test | 9 | 0.001765s | 0.001520s | 0.001761s | native test oracle; output varies |
| string_view.test | 10 | 0.001009s | 0.000979s | 0.001003s | byte equality observed |
| utf8.test | 10 | 0.001009s | 0.000991s | 0.001021s | byte equality observed |
| value.test | 7 | 0.002264s | 0.002110s | 0.002695s | byte equality observed |
| value_from.test | 10 | 0.001183s | 0.001136s | 0.001168s | byte equality observed |
| value_ref.test | 10 | 0.001059s | 0.001020s | 0.001049s | byte equality observed |
| value_stack.test | 10 | 0.001045s | 0.000982s | 0.001020s | byte equality observed |
| value_to.test | 7 | 0.001909s | 0.001872s | 0.001893s | native test oracle; output varies |
| visit.test | 10 | 0.001046s | 0.001042s | 0.001021s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45754596224).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
