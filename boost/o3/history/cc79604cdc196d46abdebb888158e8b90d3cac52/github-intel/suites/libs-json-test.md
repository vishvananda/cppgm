# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.770124 | 4.276261 | 3.687830 | 0.002095 | 0.001679 | 0.002021 |
| basic_parser.test | RUN | 4.934455 | 102.002402 | 61.845287 | 0.406928 | 0.180684 | 0.600926 |
| conversion.test | RUN | 0.528907 | 1.549982 | 1.789547 | 0.001342 | 0.001201 | 0.001213 |
| doc_background.test | RUN | 0.524789 | 1.568862 | 1.785316 | 0.001282 | 0.001097 | 0.001125 |
| doc_forward_conversion.test | RUN | 0.568900 | 1.843576 | 1.989411 | 0.001307 | 0.001325 | 0.001144 |
| doc_parsing.test | RUN | 0.566168 | 1.723571 | 1.827366 | 0.001446 | 0.001198 | 0.001127 |
| doc_quick_look.test | RUN | 0.726102 | 2.048282 | 2.471224 | 0.001255 | 0.001240 | 0.001358 |
| doc_serializing.test | RUN | 0.513395 | 1.498334 | 1.691900 | 0.001268 | 0.001169 | 0.001205 |
| doc_storage_ptr.test | RUN | 0.506343 | 1.552612 | 1.723492 | 0.001115 | 0.001072 | 0.001298 |
| doc_uses_allocator.test | RUN | 0.516304 | 1.547284 | 1.710604 | 0.001358 | 0.001232 | 0.001247 |
| doc_using_numbers.test | RUN | 0.578352 | 1.579227 | 1.873117 | 0.001453 | 0.001329 | 0.001366 |
| double.test | RUN | 0.596656 | 2.694295 | 2.203628 | 1.237643 | 1.210438 | 1.297109 |
| error.test | RUN | 0.443279 | 1.538847 | 1.413157 | 0.001257 | 0.001251 | 0.001224 |
| fwd.test | RUN | 0.481776 | 1.459894 | 1.648071 | 0.001350 | 0.001080 | 0.001322 |
| json.test | RUN | 0.511952 | 1.730199 | 1.960003 | 0.001153 | 0.001270 | 0.001256 |
| kind.test | RUN | 0.372820 | 1.370694 | 1.369100 | 0.001315 | 0.001397 | 0.001344 |
| memory_resource.test | RUN | 0.529792 | 1.841232 | 1.888992 | 0.001367 | 0.001342 | 0.001364 |
| monotonic_resource.test | RUN | 0.484021 | 1.729771 | 1.772521 | 0.001884 | 0.001874 | 0.001734 |
| natvis.test | RUN | 0.506504 | 1.618342 | 1.774668 | 0.001418 | 0.001404 | 0.001236 |
| null_resource.test | RUN | 0.422751 | 1.384446 | 1.416271 | 0.001287 | 0.001318 | 0.001346 |
| object.test | RUN | 0.912931 | 5.064747 | 4.436660 | 0.005367 | 0.004591 | 0.005035 |
| parse.test | RUN | 0.565968 | 2.523731 | 2.025526 | 0.001783 | 0.001846 | 0.001800 |
| parser.test | RUN | 0.535918 | 2.124790 | 1.927600 | 0.001195 | 0.001439 | 0.001459 |
| pilfer.test | RUN | 0.280491 | 0.956996 | 0.940443 | 0.001372 | 0.001229 | 0.001288 |
| pointer.test | RUN | 0.643336 | 2.902823 | 2.443627 | 0.001785 | 0.001495 | 0.001608 |
| result_for.test | RUN | 0.515904 | 1.710340 | 1.863992 | 0.001330 | 0.001379 | 0.001169 |
| serialize.test | RUN | 0.513778 | 1.778904 | 1.817710 | 0.001426 | 0.001346 | 0.001485 |
| serializer.test | RUN | 0.892124 | 5.180504 | 4.200219 | 0.002186 | 0.002356 | 0.002199 |
| snippets.test | RUN | 1.408115 | 7.589339 | 6.034891 | 0.001624 | 0.001539 | 0.001484 |
| static_resource.test | RUN | 0.513375 | 1.568181 | 1.751582 | 0.001411 | 0.001417 | 0.001315 |
| storage_ptr.test | RUN | 0.527434 | 1.713393 | 1.810793 | 0.001149 | 0.001250 | 0.001285 |
| stream_parser.test | RUN | 0.651608 | 3.236221 | 2.684587 | 0.068134 | 0.069702 | 0.065866 |
| string.test | RUN | 1.299209 | 8.206591 | 6.583569 | 0.002116 | 0.001981 | 0.001978 |
| string_view.test | RUN | 0.317877 | 1.060911 | 1.030261 | 0.001340 | 0.001329 | 0.001526 |
| value.test | RUN | 1.189337 | 8.330167 | 5.475071 | 0.002766 | 0.002494 | 0.002972 |
| value_from.test | RUN | 1.076613 | 5.328602 | 4.716408 | 0.001557 | 0.001436 | 0.001593 |
| value_stack.test | RUN | 0.493637 | 1.556756 | 1.728430 | 0.001506 | 0.001273 | 0.001297 |
| value_to.test | RUN | 2.614079 | 16.116825 | 12.223749 | 0.002469 | 0.002151 | 0.002583 |
| value_ref.test | RUN | 0.565484 | 2.375017 | 2.192650 | 0.001333 | 0.001738 | 0.001334 |
| utf8.test | RUN | 0.428817 | 1.476697 | 1.482223 | 0.001223 | 0.001368 | 0.001222 |
| visit.test | RUN | 0.580586 | 2.274834 | 2.094612 | 0.001095 | 0.001473 | 0.001296 |
| d2s_intrinsics_test.test | RUN | 0.420874 | 1.362712 | 1.417639 | 0.001314 | 0.001199 | 0.001311 |
| d2s_table_test.test | RUN | 0.427546 | 1.523844 | 1.458836 | 0.001377 | 0.001344 | 0.001214 |
| d2s_test.test | RUN | 0.460455 | 1.883391 | 1.728905 | 0.001465 | 0.001389 | 0.001283 |
| parse_into.test | RUN | 17.578775 | 133.677459 | 81.590049 | 0.002488 | 0.002068 | 0.001928 |
| limits.test | RUN | 1.900100 | 11.635735 | 7.982380 | 0.001490 | 0.001453 | 0.001437 |
| header_only.test | RUN | 1.318804 | 8.995699 | 5.946447 | 0.001274 | 0.001334 | 0.001131 |
| no_exceptions.test | RUN | 1.796967 | 10.091045 | 7.606337 | 0.001353 | 0.001401 | 0.001250 |
| intrusive_macros.test | RUN | 1.541089 | 9.870902 | 6.841621 | 0.001112 | 0.001358 | 0.001159 |
| _gdb-printers.test | RUN | 0.236818 | 0.653001 | 0.791013 | 0.156223 | 0.244056 | 0.174498 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.896× | 0.896×, 0.895× | 1.001× |
| clang | 1.135× | 1.133×, 1.136× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45241427099).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001383s | 0.001212s | 0.001338s | byte equality observed |
| basic_parser.test | 1 | 0.286288s | 0.189231s | 0.432217s | native test oracle; output varies |
| conversion.test | 10 | 0.000740s | 0.000739s | 0.000736s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000736s | 0.000747s | 0.000728s | byte equality observed |
| d2s_table_test.test | 10 | 0.000771s | 0.000756s | 0.000755s | byte equality observed |
| d2s_test.test | 10 | 0.000796s | 0.000800s | 0.000766s | byte equality observed |
| doc_background.test | 10 | 0.000757s | 0.000739s | 0.000731s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.000778s | 0.000777s | 0.000761s | byte equality observed |
| doc_parsing.test | 10 | 0.000794s | 0.000774s | 0.000768s | byte equality observed |
| doc_quick_look.test | 10 | 0.000767s | 0.000766s | 0.000742s | byte equality observed |
| doc_serializing.test | 10 | 0.000762s | 0.000749s | 0.000730s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.000762s | 0.000779s | 0.000747s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.000774s | 0.000748s | 0.000740s | byte equality observed |
| doc_using_numbers.test | 10 | 0.000763s | 0.000767s | 0.000737s | byte equality observed |
| double.test | 1 | 0.840013s | 0.808782s | 0.861665s | native test oracle; output varies |
| error.test | 10 | 0.000856s | 0.000806s | 0.000861s | byte equality observed |
| fwd.test | 10 | 0.000772s | 0.000770s | 0.000793s | byte equality observed |
| header_only.test | 10 | 0.000736s | 0.000743s | 0.000751s | byte equality observed |
| intrusive_macros.test | 10 | 0.000791s | 0.000781s | 0.000790s | byte equality observed |
| json.test | 10 | 0.000773s | 0.000774s | 0.000776s | byte equality observed |
| kind.test | 10 | 0.000792s | 0.000801s | 0.000786s | byte equality observed |
| limits.test | 10 | 0.000944s | 0.000917s | 0.000933s | byte equality observed |
| memory_resource.test | 10 | 0.000789s | 0.000789s | 0.000783s | byte equality observed |
| monotonic_resource.test | 10 | 0.001162s | 0.001158s | 0.001172s | native test oracle; output varies |
| natvis.test | 10 | 0.000796s | 0.000803s | 0.000770s | byte equality observed |
| no_exceptions.test | 10 | 0.000793s | 0.000795s | 0.000785s | byte equality observed |
| null_resource.test | 10 | 0.000813s | 0.000828s | 0.000797s | byte equality observed |
| object.test | 6 | 0.003386s | 0.002870s | 0.003318s | native test oracle; output varies |
| parse.test | 10 | 0.001110s | 0.001126s | 0.001122s | byte equality observed |
| parse_into.test | 9 | 0.001798s | 0.001835s | 0.001726s | native test oracle; output varies |
| parser.test | 10 | 0.000883s | 0.000872s | 0.000882s | byte equality observed |
| pilfer.test | 10 | 0.000764s | 0.000773s | 0.000765s | byte equality observed |
| pointer.test | 10 | 0.000924s | 0.000921s | 0.000930s | byte equality observed |
| result_for.test | 10 | 0.000768s | 0.000770s | 0.000758s | byte equality observed |
| serialize.test | 10 | 0.000795s | 0.000801s | 0.000798s | byte equality observed |
| serializer.test | 10 | 0.001380s | 0.001386s | 0.001365s | byte equality observed |
| snippets.test | 10 | 0.000926s | 0.000915s | 0.000919s | byte equality observed |
| static_resource.test | 10 | 0.000830s | 0.000820s | 0.000825s | byte equality observed |
| storage_ptr.test | 10 | 0.000803s | 0.000801s | 0.000806s | byte equality observed |
| stream_parser.test | 1 | 0.042818s | 0.040239s | 0.043244s | native test oracle; output varies |
| string.test | 10 | 0.001349s | 0.001168s | 0.001382s | byte equality observed |
| string_view.test | 10 | 0.000761s | 0.000764s | 0.000778s | byte equality observed |
| utf8.test | 10 | 0.000772s | 0.000731s | 0.000752s | byte equality observed |
| value.test | 10 | 0.001708s | 0.001602s | 0.001987s | native test oracle; output varies |
| value_from.test | 10 | 0.000908s | 0.000908s | 0.000886s | byte equality observed |
| value_ref.test | 10 | 0.000813s | 0.000813s | 0.000799s | byte equality observed |
| value_stack.test | 10 | 0.000802s | 0.000787s | 0.000780s | byte equality observed |
| value_to.test | 10 | 0.001441s | 0.001449s | 0.001439s | byte equality observed |
| visit.test | 10 | 0.000788s | 0.000779s | 0.000796s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45241427099).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
