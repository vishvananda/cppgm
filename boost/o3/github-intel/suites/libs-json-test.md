# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.787822 | 4.288299 | 3.752741 | 0.002113 | 0.002037 | 0.002294 |
| basic_parser.test | RUN | 5.017234 | 106.543862 | 65.295960 | 0.405063 | 0.185726 | 0.602766 |
| conversion.test | RUN | 0.553686 | 1.605090 | 1.832300 | 0.001418 | 0.001210 | 0.001204 |
| doc_background.test | RUN | 0.546529 | 1.535019 | 1.806602 | 0.001310 | 0.001163 | 0.001255 |
| doc_forward_conversion.test | RUN | 0.588052 | 1.829348 | 2.067707 | 0.001224 | 0.001342 | 0.001157 |
| doc_parsing.test | RUN | 0.555737 | 1.696224 | 1.907822 | 0.001454 | 0.001254 | 0.001258 |
| doc_quick_look.test | RUN | 0.744620 | 2.067650 | 2.524121 | 0.001653 | 0.001320 | 0.001200 |
| doc_serializing.test | RUN | 0.527428 | 1.504630 | 1.730246 | 0.001617 | 0.001412 | 0.001256 |
| doc_storage_ptr.test | RUN | 0.529150 | 1.567621 | 1.753819 | 0.001534 | 0.001349 | 0.001419 |
| doc_uses_allocator.test | RUN | 0.522454 | 1.526839 | 1.782807 | 0.001675 | 0.001234 | 0.001543 |
| doc_using_numbers.test | RUN | 0.591237 | 1.582361 | 1.945166 | 0.001358 | 0.001285 | 0.001460 |
| double.test | RUN | 0.617325 | 2.712082 | 2.205361 | 1.228547 | 1.206337 | 1.305616 |
| error.test | RUN | 0.424132 | 1.538611 | 1.461998 | 0.001282 | 0.001238 | 0.001525 |
| fwd.test | RUN | 0.509317 | 1.505975 | 1.683837 | 0.001437 | 0.001120 | 0.001396 |
| json.test | RUN | 0.563794 | 1.747331 | 2.039206 | 0.001399 | 0.001453 | 0.001311 |
| kind.test | RUN | 0.416923 | 1.370170 | 1.408838 | 0.001265 | 0.001420 | 0.001413 |
| memory_resource.test | RUN | 0.543169 | 1.848920 | 1.908577 | 0.001315 | 0.001457 | 0.001428 |
| monotonic_resource.test | RUN | 0.499179 | 1.731689 | 1.846729 | 0.001978 | 0.001898 | 0.001903 |
| natvis.test | RUN | 0.526642 | 1.609825 | 1.788829 | 0.001329 | 0.001411 | 0.001382 |
| null_resource.test | RUN | 0.431916 | 1.413134 | 1.435772 | 0.001419 | 0.001282 | 0.001521 |
| object.test | RUN | 0.911657 | 5.118922 | 4.455764 | 0.005430 | 0.004515 | 0.005588 |
| parse.test | RUN | 0.573154 | 2.544555 | 2.049552 | 0.001958 | 0.001788 | 0.001860 |
| parser.test | RUN | 0.552348 | 2.181233 | 1.977460 | 0.001298 | 0.001406 | 0.001780 |
| pilfer.test | RUN | 0.293024 | 0.982129 | 0.933271 | 0.001357 | 0.001343 | 0.001401 |
| pointer.test | RUN | 0.646776 | 2.935935 | 2.552629 | 0.001794 | 0.001587 | 0.001508 |
| result_for.test | RUN | 0.532451 | 1.730764 | 1.858945 | 0.001222 | 0.001256 | 0.001230 |
| serialize.test | RUN | 0.524908 | 1.792159 | 1.856817 | 0.001528 | 0.001332 | 0.001364 |
| serializer.test | RUN | 0.889219 | 5.223026 | 4.206821 | 0.002272 | 0.002304 | 0.002401 |
| snippets.test | RUN | 1.426453 | 7.276753 | 6.460482 | 0.001892 | 0.001765 | 0.001555 |
| static_resource.test | RUN | 0.507302 | 1.660634 | 1.738123 | 0.001831 | 0.001506 | 0.001454 |
| storage_ptr.test | RUN | 0.551827 | 1.714518 | 1.880497 | 0.001375 | 0.001492 | 0.001268 |
| stream_parser.test | RUN | 0.664189 | 3.544966 | 2.683394 | 0.071697 | 0.074198 | 0.072642 |
| string.test | RUN | 1.277989 | 8.272289 | 6.839555 | 0.002189 | 0.001995 | 0.002280 |
| string_view.test | RUN | 0.308780 | 1.057773 | 0.996014 | 0.001299 | 0.001349 | 0.001293 |
| value.test | RUN | 1.193406 | 8.959145 | 5.673835 | 0.002773 | 0.002624 | 0.003288 |
| value_from.test | RUN | 1.106005 | 5.247868 | 4.852007 | 0.001782 | 0.001738 | 0.001744 |
| value_stack.test | RUN | 0.502179 | 1.580347 | 1.764549 | 0.001574 | 0.001476 | 0.001499 |
| value_to.test | RUN | 2.641009 | 17.612280 | 12.311686 | 0.002488 | 0.002448 | 0.002326 |
| value_ref.test | RUN | 0.580636 | 2.283849 | 2.237963 | 0.001482 | 0.001386 | 0.001638 |
| utf8.test | RUN | 0.426040 | 1.491669 | 1.508674 | 0.001345 | 0.001258 | 0.001326 |
| visit.test | RUN | 0.572113 | 2.382439 | 2.116161 | 0.001420 | 0.001326 | 0.001366 |
| d2s_intrinsics_test.test | RUN | 0.428887 | 1.391370 | 1.447666 | 0.001354 | 0.001318 | 0.001511 |
| d2s_table_test.test | RUN | 0.444172 | 1.540896 | 1.522449 | 0.001426 | 0.001397 | 0.001352 |
| d2s_test.test | RUN | 0.468423 | 1.853368 | 1.716050 | 0.001717 | 0.001438 | 0.001564 |
| parse_into.test | RUN | 17.872514 | 136.719377 | 84.413812 | 0.002755 | 0.002473 | 0.002362 |
| limits.test | RUN | 1.936258 | 11.991298 | 8.544196 | 0.001948 | 0.002084 | 0.001665 |
| header_only.test | RUN | 1.286816 | 9.231222 | 5.717355 | 0.001386 | 0.001407 | 0.001303 |
| no_exceptions.test | RUN | 1.796373 | 9.992336 | 7.671980 | 0.001538 | 0.001443 | 0.001590 |
| intrusive_macros.test | RUN | 1.530167 | 9.815339 | 6.980278 | 0.001247 | 0.001367 | 0.001374 |
| _gdb-printers.test | RUN | 0.237435 | 0.661009 | 0.805420 | 0.164562 | 0.179520 | 0.171852 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.892× | 0.895×, 0.889× | 1.007× |
| clang | 1.151× | 1.158×, 1.143× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45710374989).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 6 | 0.001422s | 0.001314s | 0.001354s | byte equality observed |
| basic_parser.test | 1 | 0.286583s | 0.188750s | 0.431949s | native test oracle; output varies |
| conversion.test | 10 | 0.000736s | 0.000766s | 0.000741s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000748s | 0.000738s | 0.000728s | byte equality observed |
| d2s_table_test.test | 10 | 0.000762s | 0.000773s | 0.000748s | byte equality observed |
| d2s_test.test | 10 | 0.000804s | 0.000799s | 0.000778s | byte equality observed |
| doc_background.test | 10 | 0.000782s | 0.000741s | 0.000740s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.000775s | 0.000781s | 0.000771s | byte equality observed |
| doc_parsing.test | 10 | 0.000800s | 0.000791s | 0.000784s | byte equality observed |
| doc_quick_look.test | 10 | 0.000770s | 0.000783s | 0.000747s | byte equality observed |
| doc_serializing.test | 10 | 0.000782s | 0.000752s | 0.000729s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.000777s | 0.000767s | 0.000757s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.000772s | 0.000751s | 0.000746s | byte equality observed |
| doc_using_numbers.test | 10 | 0.000775s | 0.000763s | 0.000736s | byte equality observed |
| double.test | 1 | 0.836148s | 0.813230s | 0.869346s | native test oracle; output varies |
| error.test | 10 | 0.000869s | 0.000831s | 0.000891s | byte equality observed |
| fwd.test | 10 | 0.000771s | 0.000764s | 0.000765s | byte equality observed |
| header_only.test | 10 | 0.000744s | 0.000757s | 0.000750s | byte equality observed |
| intrusive_macros.test | 10 | 0.000789s | 0.000786s | 0.000771s | byte equality observed |
| json.test | 10 | 0.000766s | 0.000778s | 0.000779s | byte equality observed |
| kind.test | 10 | 0.000785s | 0.000803s | 0.000786s | byte equality observed |
| limits.test | 10 | 0.000938s | 0.000923s | 0.000918s | byte equality observed |
| memory_resource.test | 10 | 0.000791s | 0.000789s | 0.000771s | byte equality observed |
| monotonic_resource.test | 10 | 0.001154s | 0.001162s | 0.001159s | byte equality observed |
| natvis.test | 10 | 0.000799s | 0.000797s | 0.000794s | byte equality observed |
| no_exceptions.test | 10 | 0.000776s | 0.000783s | 0.000785s | byte equality observed |
| null_resource.test | 10 | 0.000810s | 0.000813s | 0.000803s | byte equality observed |
| object.test | 6 | 0.003371s | 0.002853s | 0.003319s | native test oracle; output varies |
| parse.test | 10 | 0.001111s | 0.001112s | 0.001103s | byte equality observed |
| parse_into.test | 8 | 0.001908s | 0.001844s | 0.001775s | native test oracle; output varies |
| parser.test | 10 | 0.000878s | 0.000861s | 0.000889s | byte equality observed |
| pilfer.test | 10 | 0.000739s | 0.000749s | 0.000776s | byte equality observed |
| pointer.test | 10 | 0.000914s | 0.000921s | 0.000938s | byte equality observed |
| result_for.test | 10 | 0.000771s | 0.000765s | 0.000774s | byte equality observed |
| serialize.test | 10 | 0.000805s | 0.000813s | 0.000794s | byte equality observed |
| serializer.test | 10 | 0.001373s | 0.001374s | 0.001362s | byte equality observed |
| snippets.test | 10 | 0.000927s | 0.000916s | 0.000918s | byte equality observed |
| static_resource.test | 10 | 0.000825s | 0.000820s | 0.000814s | byte equality observed |
| storage_ptr.test | 10 | 0.000804s | 0.000812s | 0.000794s | byte equality observed |
| stream_parser.test | 1 | 0.043026s | 0.040250s | 0.043174s | native test oracle; output varies |
| string.test | 10 | 0.001343s | 0.001176s | 0.001338s | byte equality observed |
| string_view.test | 10 | 0.000762s | 0.000768s | 0.000762s | byte equality observed |
| utf8.test | 10 | 0.000765s | 0.000767s | 0.000766s | byte equality observed |
| value.test | 9 | 0.001735s | 0.001608s | 0.001990s | native test oracle; output varies |
| value_from.test | 10 | 0.000902s | 0.000916s | 0.000893s | byte equality observed |
| value_ref.test | 10 | 0.000806s | 0.000821s | 0.000800s | byte equality observed |
| value_stack.test | 10 | 0.000800s | 0.000796s | 0.000767s | byte equality observed |
| value_to.test | 10 | 0.001443s | 0.001449s | 0.001430s | byte equality observed |
| visit.test | 10 | 0.000792s | 0.000800s | 0.000781s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45710374989).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
