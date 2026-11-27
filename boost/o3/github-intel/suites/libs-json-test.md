# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.799331 | 4.289810 | 3.619438 | 0.002179 | 0.001961 | 0.002114 |
| basic_parser.test | RUN | 4.985166 | 102.667066 | 58.656799 | 0.409163 | 0.184133 | 0.588200 |
| conversion.test | RUN | 0.531114 | 1.570289 | 1.757477 | 0.001554 | 0.001279 | 0.001149 |
| doc_background.test | RUN | 0.555659 | 1.582368 | 1.742617 | 0.001406 | 0.001277 | 0.001104 |
| doc_forward_conversion.test | RUN | 0.605907 | 1.855103 | 1.959213 | 0.001480 | 0.001226 | 0.001148 |
| doc_parsing.test | RUN | 0.572053 | 1.732402 | 1.806374 | 0.001548 | 0.001487 | 0.001156 |
| doc_quick_look.test | RUN | 0.736452 | 2.059714 | 2.460758 | 0.001367 | 0.001138 | 0.001267 |
| doc_serializing.test | RUN | 0.516567 | 1.514483 | 1.633454 | 0.001277 | 0.001261 | 0.001317 |
| doc_storage_ptr.test | RUN | 0.501092 | 1.583137 | 1.701291 | 0.001522 | 0.001232 | 0.001130 |
| doc_uses_allocator.test | RUN | 0.530783 | 1.529689 | 1.676988 | 0.001588 | 0.001352 | 0.001123 |
| doc_using_numbers.test | RUN | 0.551628 | 1.562724 | 1.852527 | 0.001298 | 0.001323 | 0.001359 |
| double.test | RUN | 0.614064 | 2.758751 | 2.143890 | 1.217602 | 1.171880 | 1.298554 |
| error.test | RUN | 0.428229 | 1.527753 | 1.393648 | 0.001444 | 0.001292 | 0.001128 |
| fwd.test | RUN | 0.504356 | 1.547841 | 1.602201 | 0.001285 | 0.001245 | 0.001268 |
| json.test | RUN | 0.542088 | 1.698184 | 1.972506 | 0.001436 | 0.001384 | 0.001200 |
| kind.test | RUN | 0.415890 | 1.396580 | 1.350877 | 0.001185 | 0.001407 | 0.001218 |
| memory_resource.test | RUN | 0.541926 | 1.824747 | 1.834620 | 0.001207 | 0.001270 | 0.001280 |
| monotonic_resource.test | RUN | 0.502148 | 1.725263 | 1.766351 | 0.002046 | 0.001944 | 0.001778 |
| natvis.test | RUN | 0.513106 | 1.594230 | 1.720345 | 0.001379 | 0.001373 | 0.001178 |
| null_resource.test | RUN | 0.426685 | 1.402219 | 1.369844 | 0.001396 | 0.001373 | 0.001241 |
| object.test | RUN | 0.911909 | 5.071320 | 4.403515 | 0.005374 | 0.004061 | 0.004952 |
| parse.test | RUN | 0.565710 | 2.511648 | 1.960373 | 0.001790 | 0.001798 | 0.001670 |
| parser.test | RUN | 0.545369 | 2.122630 | 1.858238 | 0.001486 | 0.001535 | 0.001421 |
| pilfer.test | RUN | 0.290152 | 0.952649 | 0.903956 | 0.001398 | 0.001207 | 0.001148 |
| pointer.test | RUN | 0.645871 | 2.875808 | 2.446447 | 0.001654 | 0.001516 | 0.001368 |
| result_for.test | RUN | 0.523210 | 1.698345 | 1.800635 | 0.001156 | 0.001183 | 0.001377 |
| serialize.test | RUN | 0.535291 | 1.776932 | 1.802564 | 0.001509 | 0.001497 | 0.001226 |
| serializer.test | RUN | 0.883433 | 5.125852 | 3.963486 | 0.002132 | 0.002110 | 0.002123 |
| snippets.test | RUN | 1.401827 | 7.706537 | 6.159993 | 0.001570 | 0.001638 | 0.001468 |
| static_resource.test | RUN | 0.512785 | 1.548051 | 1.700977 | 0.001420 | 0.001438 | 0.001240 |
| storage_ptr.test | RUN | 0.534294 | 1.697330 | 1.801787 | 0.001460 | 0.001306 | 0.001346 |
| stream_parser.test | RUN | 0.665031 | 3.208625 | 2.482428 | 0.074154 | 0.070151 | 0.069160 |
| string.test | RUN | 1.293887 | 8.054641 | 6.589292 | 0.002240 | 0.001928 | 0.001869 |
| string_view.test | RUN | 0.314082 | 1.036108 | 0.953612 | 0.001388 | 0.001422 | 0.001253 |
| value.test | RUN | 1.185047 | 8.917254 | 5.362785 | 0.002845 | 0.002602 | 0.002907 |
| value_from.test | RUN | 1.097279 | 5.128721 | 4.520919 | 0.001658 | 0.001428 | 0.001336 |
| value_stack.test | RUN | 0.509910 | 1.538058 | 1.670121 | 0.001392 | 0.001428 | 0.001148 |
| value_to.test | RUN | 2.610002 | 15.999470 | 12.079787 | 0.002545 | 0.002301 | 0.002231 |
| value_ref.test | RUN | 0.577302 | 2.261774 | 2.052408 | 0.001503 | 0.001816 | 0.001232 |
| utf8.test | RUN | 0.431875 | 1.591855 | 1.442613 | 0.001273 | 0.001269 | 0.001227 |
| visit.test | RUN | 0.581413 | 2.254836 | 2.000613 | 0.001369 | 0.001409 | 0.001196 |
| d2s_intrinsics_test.test | RUN | 0.426010 | 1.347555 | 1.353981 | 0.001375 | 0.001264 | 0.001113 |
| d2s_table_test.test | RUN | 0.434241 | 1.571979 | 1.447792 | 0.001508 | 0.001429 | 0.001189 |
| d2s_test.test | RUN | 0.464382 | 1.861101 | 1.644426 | 0.001623 | 0.001327 | 0.001311 |
| parse_into.test | RUN | 17.771114 | 131.538425 | 80.210441 | 0.002608 | 0.002081 | 0.001927 |
| limits.test | RUN | 1.888320 | 12.474010 | 7.649748 | 0.001624 | 0.002048 | 0.001396 |
| header_only.test | RUN | 1.313415 | 8.702850 | 5.919309 | 0.001289 | 0.001283 | 0.001255 |
| no_exceptions.test | RUN | 1.781097 | 10.086456 | 7.207794 | 0.001198 | 0.001530 | 0.001319 |
| intrusive_macros.test | RUN | 1.549446 | 9.777162 | 6.713051 | 0.001261 | 0.001492 | 0.001233 |
| _gdb-printers.test | RUN | 0.236448 | 0.665291 | 0.767556 | 0.153919 | 0.239345 | 0.164623 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.895× | 0.888×, 0.901× | 1.003× |
| clang | 1.151× | 1.152×, 1.150× | 0.995× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46032707836).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001378s | 0.001241s | 0.001350s | byte equality observed |
| basic_parser.test | 1 | 0.285686s | 0.188057s | 0.431462s | native test oracle; output varies |
| conversion.test | 10 | 0.000759s | 0.000749s | 0.000757s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000740s | 0.000730s | 0.000761s | byte equality observed |
| d2s_table_test.test | 10 | 0.000777s | 0.000768s | 0.000762s | byte equality observed |
| d2s_test.test | 10 | 0.000806s | 0.000804s | 0.000791s | byte equality observed |
| doc_background.test | 10 | 0.000761s | 0.000758s | 0.000749s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.000788s | 0.000788s | 0.000784s | byte equality observed |
| doc_parsing.test | 10 | 0.000797s | 0.000808s | 0.000796s | byte equality observed |
| doc_quick_look.test | 10 | 0.000776s | 0.000785s | 0.000766s | byte equality observed |
| doc_serializing.test | 10 | 0.000763s | 0.000755s | 0.000736s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.000770s | 0.000780s | 0.000756s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.000772s | 0.000747s | 0.000756s | byte equality observed |
| doc_using_numbers.test | 10 | 0.000769s | 0.000744s | 0.000738s | byte equality observed |
| double.test | 1 | 0.835676s | 0.810137s | 0.869282s | native test oracle; output varies |
| error.test | 10 | 0.000864s | 0.000864s | 0.000871s | byte equality observed |
| fwd.test | 10 | 0.000768s | 0.000765s | 0.000767s | byte equality observed |
| header_only.test | 10 | 0.000745s | 0.000741s | 0.000747s | byte equality observed |
| intrusive_macros.test | 10 | 0.000780s | 0.000777s | 0.000767s | byte equality observed |
| json.test | 10 | 0.000768s | 0.000762s | 0.000776s | byte equality observed |
| kind.test | 10 | 0.000786s | 0.000794s | 0.000775s | byte equality observed |
| limits.test | 10 | 0.000934s | 0.000919s | 0.000915s | byte equality observed |
| memory_resource.test | 10 | 0.000781s | 0.000789s | 0.000782s | byte equality observed |
| monotonic_resource.test | 10 | 0.001158s | 0.001185s | 0.001131s | byte equality observed |
| natvis.test | 10 | 0.000792s | 0.000795s | 0.000780s | byte equality observed |
| no_exceptions.test | 10 | 0.000782s | 0.000782s | 0.000774s | byte equality observed |
| null_resource.test | 10 | 0.000791s | 0.000806s | 0.000789s | byte equality observed |
| object.test | 6 | 0.003384s | 0.002829s | 0.003325s | native test oracle; output varies |
| parse.test | 10 | 0.001109s | 0.001111s | 0.001109s | byte equality observed |
| parse_into.test | 9 | 0.001830s | 0.001770s | 0.001728s | native test oracle; output varies |
| parser.test | 10 | 0.000891s | 0.000875s | 0.000875s | byte equality observed |
| pilfer.test | 10 | 0.000757s | 0.000756s | 0.000757s | byte equality observed |
| pointer.test | 10 | 0.000934s | 0.000917s | 0.000909s | byte equality observed |
| result_for.test | 10 | 0.000763s | 0.000760s | 0.000736s | byte equality observed |
| serialize.test | 10 | 0.000799s | 0.000803s | 0.000792s | byte equality observed |
| serializer.test | 10 | 0.001373s | 0.001382s | 0.001389s | byte equality observed |
| snippets.test | 10 | 0.000935s | 0.000908s | 0.000908s | byte equality observed |
| static_resource.test | 10 | 0.000832s | 0.000823s | 0.000799s | byte equality observed |
| storage_ptr.test | 10 | 0.000801s | 0.000804s | 0.000787s | byte equality observed |
| stream_parser.test | 1 | 0.043345s | 0.040233s | 0.043353s | native test oracle; output varies |
| string.test | 10 | 0.001378s | 0.001197s | 0.001355s | byte equality observed |
| string_view.test | 10 | 0.000759s | 0.000769s | 0.000769s | byte equality observed |
| utf8.test | 10 | 0.000764s | 0.000758s | 0.000772s | byte equality observed |
| value.test | 9 | 0.001722s | 0.001605s | 0.001990s | native test oracle; output varies |
| value_from.test | 10 | 0.000902s | 0.000899s | 0.000903s | byte equality observed |
| value_ref.test | 10 | 0.000798s | 0.000804s | 0.000801s | byte equality observed |
| value_stack.test | 10 | 0.000792s | 0.000799s | 0.000791s | byte equality observed |
| value_to.test | 10 | 0.001436s | 0.001450s | 0.001476s | byte equality observed |
| visit.test | 10 | 0.000789s | 0.000792s | 0.000785s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46032707836).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
