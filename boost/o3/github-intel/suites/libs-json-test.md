# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.785229 | 4.477687 | 3.693897 | 0.002225 | 0.001690 | 0.002072 |
| basic_parser.test | RUN | 5.003372 | 111.542507 | 63.622455 | 0.412343 | 0.181288 | 0.602121 |
| conversion.test | RUN | 0.513104 | 1.604023 | 1.817765 | 0.001405 | 0.001313 | 0.001294 |
| doc_background.test | RUN | 0.518525 | 1.586373 | 1.797133 | 0.001478 | 0.001282 | 0.001214 |
| doc_forward_conversion.test | RUN | 0.558817 | 1.874501 | 2.024470 | 0.001390 | 0.001231 | 0.001304 |
| doc_parsing.test | RUN | 0.591232 | 1.735547 | 1.860524 | 0.001485 | 0.001336 | 0.001269 |
| doc_quick_look.test | RUN | 0.736003 | 2.134408 | 2.545317 | 0.001406 | 0.001310 | 0.001138 |
| doc_serializing.test | RUN | 0.522467 | 1.543140 | 1.710334 | 0.001322 | 0.001376 | 0.001224 |
| doc_storage_ptr.test | RUN | 0.493654 | 1.598466 | 1.753277 | 0.001430 | 0.001232 | 0.001513 |
| doc_uses_allocator.test | RUN | 0.503798 | 1.570234 | 1.746835 | 0.001458 | 0.001351 | 0.001326 |
| doc_using_numbers.test | RUN | 0.572645 | 1.632356 | 1.899065 | 0.001362 | 0.001379 | 0.001344 |
| double.test | RUN | 0.593236 | 2.771217 | 2.236384 | 1.223288 | 1.206790 | 1.309154 |
| error.test | RUN | 0.445619 | 1.563423 | 1.460415 | 0.001196 | 0.001348 | 0.001331 |
| fwd.test | RUN | 0.471369 | 1.529549 | 1.658809 | 0.001201 | 0.001268 | 0.001355 |
| json.test | RUN | 0.523255 | 1.836821 | 1.962983 | 0.001257 | 0.001372 | 0.001198 |
| kind.test | RUN | 0.407977 | 1.409024 | 1.394666 | 0.001323 | 0.001717 | 0.001311 |
| memory_resource.test | RUN | 0.555771 | 1.918815 | 1.915879 | 0.001352 | 0.001355 | 0.001411 |
| monotonic_resource.test | RUN | 0.479510 | 1.783117 | 1.829408 | 0.001886 | 0.001876 | 0.001996 |
| natvis.test | RUN | 0.502034 | 1.670184 | 1.802927 | 0.001433 | 0.001265 | 0.001388 |
| null_resource.test | RUN | 0.422718 | 1.443605 | 1.430091 | 0.001333 | 0.001357 | 0.001460 |
| object.test | RUN | 0.922549 | 5.209392 | 4.535951 | 0.005371 | 0.004565 | 0.005168 |
| parse.test | RUN | 0.557739 | 2.575401 | 2.045910 | 0.001711 | 0.002079 | 0.001665 |
| parser.test | RUN | 0.536589 | 2.206297 | 1.946053 | 0.001400 | 0.001531 | 0.001616 |
| pilfer.test | RUN | 0.287883 | 0.981089 | 0.936201 | 0.001267 | 0.001456 | 0.001230 |
| pointer.test | RUN | 0.640008 | 2.988312 | 2.536324 | 0.001571 | 0.001748 | 0.001411 |
| result_for.test | RUN | 0.517073 | 1.774862 | 1.886712 | 0.000996 | 0.001336 | 0.001320 |
| serialize.test | RUN | 0.527627 | 1.845407 | 1.847506 | 0.001438 | 0.001588 | 0.001446 |
| serializer.test | RUN | 0.871037 | 5.382517 | 4.196216 | 0.002386 | 0.002296 | 0.002252 |
| snippets.test | RUN | 1.402846 | 7.795335 | 6.444319 | 0.001684 | 0.001814 | 0.001697 |
| static_resource.test | RUN | 0.510234 | 1.661186 | 1.733913 | 0.001462 | 0.001682 | 0.001354 |
| storage_ptr.test | RUN | 0.525969 | 1.778465 | 1.878772 | 0.001506 | 0.001348 | 0.001546 |
| stream_parser.test | RUN | 0.666776 | 3.326185 | 2.706098 | 0.069798 | 0.071249 | 0.072434 |
| string.test | RUN | 1.276202 | 8.392217 | 6.899278 | 0.001915 | 0.001915 | 0.002224 |
| string_view.test | RUN | 0.316195 | 1.096101 | 1.005005 | 0.001198 | 0.001412 | 0.001420 |
| value.test | RUN | 1.188878 | 9.113983 | 5.675501 | 0.002691 | 0.002596 | 0.003196 |
| value_from.test | RUN | 1.104449 | 5.336032 | 4.882544 | 0.001474 | 0.001756 | 0.001812 |
| value_stack.test | RUN | 0.504534 | 1.607796 | 1.766447 | 0.001483 | 0.001531 | 0.001364 |
| value_to.test | RUN | 2.616488 | 17.799021 | 12.246427 | 0.002536 | 0.002764 | 0.002319 |
| value_ref.test | RUN | 0.580063 | 2.320596 | 2.255099 | 0.001292 | 0.001506 | 0.001600 |
| utf8.test | RUN | 0.423382 | 1.505276 | 1.523170 | 0.001260 | 0.001477 | 0.001387 |
| visit.test | RUN | 0.571796 | 2.459625 | 2.147953 | 0.001433 | 0.001560 | 0.001431 |
| d2s_intrinsics_test.test | RUN | 0.416914 | 1.413453 | 1.455061 | 0.001485 | 0.001531 | 0.001369 |
| d2s_table_test.test | RUN | 0.433554 | 1.561114 | 1.506756 | 0.001386 | 0.001475 | 0.001340 |
| d2s_test.test | RUN | 0.453509 | 1.878904 | 1.708478 | 0.001489 | 0.001538 | 0.001402 |
| parse_into.test | RUN | 17.612335 | 140.608531 | 83.807276 | 0.002685 | 0.002610 | 0.002512 |
| limits.test | RUN | 1.886485 | 12.156379 | 8.482638 | 0.001681 | 0.001796 | 0.001535 |
| header_only.test | RUN | 1.304005 | 9.466802 | 5.723810 | 0.001315 | 0.001385 | 0.001240 |
| no_exceptions.test | RUN | 1.765076 | 10.386373 | 7.717561 | 0.001262 | 0.001411 | 0.001246 |
| intrusive_macros.test | RUN | 1.522788 | 10.152633 | 6.650384 | 0.001338 | 0.001576 | 0.001405 |
| _gdb-printers.test | RUN | 0.232566 | 0.687695 | 0.832876 | 0.154212 | 0.258452 | 0.172272 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.907× | 0.912×, 0.901× | 1.001× |
| clang | 1.140× | 1.146×, 1.133× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45617981312).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001395s | 0.001250s | 0.001343s | byte equality observed |
| basic_parser.test | 1 | 0.286234s | 0.189863s | 0.432386s | native test oracle; output varies |
| conversion.test | 10 | 0.000760s | 0.000762s | 0.000750s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000761s | 0.000750s | 0.000740s | byte equality observed |
| d2s_table_test.test | 10 | 0.000780s | 0.000756s | 0.000779s | byte equality observed |
| d2s_test.test | 10 | 0.000812s | 0.000801s | 0.000793s | byte equality observed |
| doc_background.test | 10 | 0.000776s | 0.000768s | 0.000758s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.000787s | 0.000789s | 0.000784s | byte equality observed |
| doc_parsing.test | 10 | 0.000803s | 0.000799s | 0.000782s | byte equality observed |
| doc_quick_look.test | 10 | 0.000782s | 0.000783s | 0.000753s | byte equality observed |
| doc_serializing.test | 10 | 0.000766s | 0.000749s | 0.000744s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.000789s | 0.000773s | 0.000776s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.000769s | 0.000749s | 0.000760s | byte equality observed |
| doc_using_numbers.test | 10 | 0.000783s | 0.000745s | 0.000760s | byte equality observed |
| double.test | 1 | 0.833199s | 0.818207s | 0.862297s | native test oracle; output varies |
| error.test | 10 | 0.000881s | 0.000813s | 0.000879s | byte equality observed |
| fwd.test | 10 | 0.000768s | 0.000748s | 0.000788s | byte equality observed |
| header_only.test | 10 | 0.000742s | 0.000751s | 0.000767s | byte equality observed |
| intrusive_macros.test | 10 | 0.000799s | 0.000784s | 0.000787s | byte equality observed |
| json.test | 10 | 0.000778s | 0.000775s | 0.000786s | byte equality observed |
| kind.test | 10 | 0.000797s | 0.000795s | 0.000802s | byte equality observed |
| limits.test | 10 | 0.000955s | 0.000924s | 0.000940s | byte equality observed |
| memory_resource.test | 10 | 0.000789s | 0.000780s | 0.000796s | byte equality observed |
| monotonic_resource.test | 10 | 0.001163s | 0.001149s | 0.001163s | byte equality observed |
| natvis.test | 10 | 0.000803s | 0.000791s | 0.000797s | byte equality observed |
| no_exceptions.test | 10 | 0.000796s | 0.000798s | 0.000790s | byte equality observed |
| null_resource.test | 10 | 0.000816s | 0.000806s | 0.000812s | byte equality observed |
| object.test | 6 | 0.003388s | 0.002839s | 0.003370s | native test oracle; output varies |
| parse.test | 10 | 0.001127s | 0.001115s | 0.001122s | byte equality observed |
| parse_into.test | 8 | 0.001951s | 0.001848s | 0.001770s | native test oracle; output varies |
| parser.test | 10 | 0.000900s | 0.000865s | 0.000881s | byte equality observed |
| pilfer.test | 10 | 0.000767s | 0.000733s | 0.000767s | byte equality observed |
| pointer.test | 10 | 0.000930s | 0.000910s | 0.000931s | byte equality observed |
| result_for.test | 10 | 0.000771s | 0.000777s | 0.000766s | byte equality observed |
| serialize.test | 10 | 0.000809s | 0.000816s | 0.000812s | byte equality observed |
| serializer.test | 10 | 0.001373s | 0.001388s | 0.001379s | byte equality observed |
| snippets.test | 10 | 0.000935s | 0.000929s | 0.000941s | byte equality observed |
| static_resource.test | 10 | 0.000837s | 0.000834s | 0.000835s | byte equality observed |
| storage_ptr.test | 10 | 0.000815s | 0.000820s | 0.000820s | byte equality observed |
| stream_parser.test | 1 | 0.043024s | 0.040168s | 0.043251s | native test oracle; output varies |
| string.test | 10 | 0.001385s | 0.001170s | 0.001375s | byte equality observed |
| string_view.test | 10 | 0.000766s | 0.000772s | 0.000782s | byte equality observed |
| utf8.test | 10 | 0.000765s | 0.000772s | 0.000777s | byte equality observed |
| value.test | 10 | 0.001724s | 0.001615s | 0.002004s | native test oracle; output varies |
| value_from.test | 10 | 0.000907s | 0.000891s | 0.000908s | byte equality observed |
| value_ref.test | 10 | 0.000820s | 0.000828s | 0.000819s | byte equality observed |
| value_stack.test | 10 | 0.000793s | 0.000808s | 0.000798s | byte equality observed |
| value_to.test | 10 | 0.001454s | 0.001451s | 0.001456s | byte equality observed |
| visit.test | 10 | 0.000796s | 0.000786s | 0.000795s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45617981312).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
