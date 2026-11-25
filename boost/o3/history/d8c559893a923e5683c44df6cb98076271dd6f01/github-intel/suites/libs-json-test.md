# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.793931 | 4.426905 | 3.708620 | 0.002154 | 0.002117 | 0.001999 |
| basic_parser.test | RUN | 5.013287 | 109.873471 | 64.013293 | 0.407071 | 0.182969 | 0.425959 |
| conversion.test | RUN | 0.540213 | 1.637160 | 1.811504 | 0.001298 | 0.001330 | 0.001465 |
| doc_background.test | RUN | 0.540279 | 1.598158 | 1.810364 | 0.001355 | 0.001210 | 0.001156 |
| doc_forward_conversion.test | RUN | 0.574298 | 1.841918 | 2.025384 | 0.001480 | 0.001005 | 0.001222 |
| doc_parsing.test | RUN | 0.579296 | 1.764223 | 1.869573 | 0.001404 | 0.001371 | 0.001428 |
| doc_quick_look.test | RUN | 0.738040 | 2.152280 | 2.512933 | 0.001470 | 0.001442 | 0.001240 |
| doc_serializing.test | RUN | 0.523501 | 1.547408 | 1.720516 | 0.001241 | 0.001190 | 0.001348 |
| doc_storage_ptr.test | RUN | 0.515583 | 1.589074 | 1.750333 | 0.001445 | 0.001435 | 0.001348 |
| doc_uses_allocator.test | RUN | 0.517083 | 1.561783 | 1.750528 | 0.001527 | 0.001488 | 0.001228 |
| doc_using_numbers.test | RUN | 0.581047 | 1.618305 | 1.923515 | 0.001352 | 0.001397 | 0.001314 |
| double.test | RUN | 0.605073 | 2.768156 | 2.167889 | 1.235819 | 1.207534 | 1.298393 |
| error.test | RUN | 0.446475 | 1.550492 | 1.429932 | 0.001342 | 0.001671 | 0.001489 |
| fwd.test | RUN | 0.477079 | 1.542890 | 1.667268 | 0.001658 | 0.001376 | 0.001470 |
| json.test | RUN | 0.509026 | 1.741336 | 2.016558 | 0.001381 | 0.001385 | 0.001431 |
| kind.test | RUN | 0.383494 | 1.444063 | 1.390128 | 0.001337 | 0.001589 | 0.001511 |
| memory_resource.test | RUN | 0.564328 | 1.849857 | 1.893027 | 0.001041 | 0.001338 | 0.001394 |
| monotonic_resource.test | RUN | 0.474863 | 1.777151 | 1.833880 | 0.002022 | 0.001950 | 0.001918 |
| natvis.test | RUN | 0.525909 | 1.697690 | 1.795025 | 0.001586 | 0.001488 | 0.001509 |
| null_resource.test | RUN | 0.426249 | 1.414666 | 1.423620 | 0.001430 | 0.001588 | 0.001512 |
| object.test | RUN | 0.936049 | 5.167302 | 4.549440 | 0.005265 | 0.004531 | 0.005028 |
| parse.test | RUN | 0.568669 | 2.580590 | 2.028485 | 0.001961 | 0.001890 | 0.001954 |
| parser.test | RUN | 0.538309 | 2.222758 | 1.950700 | 0.001426 | 0.001732 | 0.001589 |
| pilfer.test | RUN | 0.291038 | 0.997552 | 0.935588 | 0.001430 | 0.001461 | 0.001518 |
| pointer.test | RUN | 0.640821 | 3.013009 | 2.555365 | 0.001621 | 0.001596 | 0.001595 |
| result_for.test | RUN | 0.526977 | 1.751767 | 1.861198 | 0.001369 | 0.001573 | 0.001395 |
| serialize.test | RUN | 0.521814 | 1.842167 | 1.831845 | 0.001488 | 0.001636 | 0.001466 |
| serializer.test | RUN | 0.892541 | 5.321823 | 4.203102 | 0.002318 | 0.002379 | 0.002234 |
| snippets.test | RUN | 1.429716 | 7.475282 | 6.368807 | 0.001751 | 0.001780 | 0.001704 |
| static_resource.test | RUN | 0.512795 | 1.680235 | 1.685154 | 0.001575 | 0.001659 | 0.001598 |
| storage_ptr.test | RUN | 0.537566 | 1.778797 | 1.878261 | 0.001357 | 0.001638 | 0.001474 |
| stream_parser.test | RUN | 0.664417 | 3.489432 | 2.721333 | 0.074241 | 0.074208 | 0.066202 |
| string.test | RUN | 1.295294 | 8.468127 | 6.599488 | 0.002431 | 0.002035 | 0.002363 |
| string_view.test | RUN | 0.317830 | 1.135865 | 1.075874 | 0.001402 | 0.001495 | 0.001496 |
| value.test | RUN | 1.201365 | 8.531808 | 5.783589 | 0.002775 | 0.002991 | 0.003140 |
| value_from.test | RUN | 1.117941 | 5.652123 | 4.868723 | 0.001614 | 0.001835 | 0.001507 |
| value_stack.test | RUN | 0.505842 | 1.566696 | 1.728425 | 0.001545 | 0.001593 | 0.001327 |
| value_to.test | RUN | 2.615207 | 16.749982 | 12.633388 | 0.003131 | 0.002443 | 0.002282 |
| value_ref.test | RUN | 0.582435 | 2.323997 | 2.213229 | 0.001392 | 0.001484 | 0.001542 |
| utf8.test | RUN | 0.426411 | 1.485734 | 1.405568 | 0.001448 | 0.001550 | 0.001360 |
| visit.test | RUN | 0.588289 | 2.419397 | 2.021550 | 0.001512 | 0.001599 | 0.001490 |
| d2s_intrinsics_test.test | RUN | 0.430895 | 1.412652 | 1.387745 | 0.001244 | 0.001224 | 0.001346 |
| d2s_table_test.test | RUN | 0.431584 | 1.547152 | 1.468330 | 0.001475 | 0.001495 | 0.001524 |
| d2s_test.test | RUN | 0.458679 | 1.889190 | 1.698168 | 0.001527 | 0.001593 | 0.001486 |
| parse_into.test | RUN | 17.739973 | 139.627435 | 84.617682 | 0.002570 | 0.002602 | 0.002367 |
| limits.test | RUN | 1.911503 | 12.054997 | 8.339377 | 0.001940 | 0.001698 | 0.001677 |
| header_only.test | RUN | 1.285839 | 9.216446 | 5.734357 | 0.001400 | 0.001495 | 0.001339 |
| no_exceptions.test | RUN | 1.831431 | 10.453485 | 7.596469 | 0.001540 | 0.001489 | 0.001408 |
| intrusive_macros.test | RUN | 1.522147 | 10.021789 | 6.982214 | 0.001250 | 0.001725 | 0.001433 |
| _gdb-printers.test | RUN | 0.236589 | 0.687392 | 0.817889 | 0.162932 | 0.185088 | 0.172866 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.902× | 0.905×, 0.899× | 1.009× |
| clang | 1.149× | 1.144×, 1.154× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45697047144).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001380s | 0.001233s | 0.001384s | byte equality observed |
| basic_parser.test | 1 | 0.286955s | 0.190837s | 0.431727s | native test oracle; output varies |
| conversion.test | 10 | 0.000748s | 0.000742s | 0.000743s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000759s | 0.000745s | 0.000759s | byte equality observed |
| d2s_table_test.test | 10 | 0.000771s | 0.000750s | 0.000779s | byte equality observed |
| d2s_test.test | 10 | 0.000810s | 0.000803s | 0.000781s | byte equality observed |
| doc_background.test | 10 | 0.000774s | 0.000736s | 0.000754s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.000781s | 0.000773s | 0.000765s | byte equality observed |
| doc_parsing.test | 10 | 0.000803s | 0.000778s | 0.000777s | byte equality observed |
| doc_quick_look.test | 10 | 0.000773s | 0.000759s | 0.000749s | byte equality observed |
| doc_serializing.test | 10 | 0.000758s | 0.000730s | 0.000745s | byte equality observed |
| doc_storage_ptr.test | 6 | 0.000762s | 0.000750s | 0.000757s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.000766s | 0.000733s | 0.000757s | byte equality observed |
| doc_using_numbers.test | 10 | 0.000772s | 0.000739s | 0.000748s | byte equality observed |
| double.test | 1 | 0.831235s | 0.813909s | 0.868818s | native test oracle; output varies |
| error.test | 10 | 0.000879s | 0.000845s | 0.000862s | byte equality observed |
| fwd.test | 10 | 0.000773s | 0.000761s | 0.000768s | byte equality observed |
| header_only.test | 10 | 0.000760s | 0.000750s | 0.000761s | byte equality observed |
| intrusive_macros.test | 10 | 0.000804s | 0.000766s | 0.000779s | byte equality observed |
| json.test | 10 | 0.000786s | 0.000775s | 0.000778s | byte equality observed |
| kind.test | 10 | 0.000797s | 0.000796s | 0.000762s | byte equality observed |
| limits.test | 10 | 0.000938s | 0.000922s | 0.000921s | byte equality observed |
| memory_resource.test | 10 | 0.000797s | 0.000783s | 0.000768s | byte equality observed |
| monotonic_resource.test | 10 | 0.001173s | 0.001160s | 0.001128s | byte equality observed |
| natvis.test | 10 | 0.000801s | 0.000775s | 0.000799s | byte equality observed |
| no_exceptions.test | 10 | 0.000783s | 0.000784s | 0.000765s | byte equality observed |
| null_resource.test | 10 | 0.000815s | 0.000796s | 0.000806s | byte equality observed |
| object.test | 6 | 0.003398s | 0.002834s | 0.003337s | native test oracle; output varies |
| parse.test | 10 | 0.001115s | 0.001105s | 0.001109s | byte equality observed |
| parse_into.test | 9 | 0.001841s | 0.001777s | 0.001742s | native test oracle; output varies |
| parser.test | 10 | 0.000897s | 0.000869s | 0.000886s | byte equality observed |
| pilfer.test | 10 | 0.000771s | 0.000776s | 0.000749s | byte equality observed |
| pointer.test | 10 | 0.000934s | 0.000922s | 0.000918s | byte equality observed |
| result_for.test | 10 | 0.000772s | 0.000775s | 0.000751s | byte equality observed |
| serialize.test | 10 | 0.000806s | 0.000814s | 0.000802s | byte equality observed |
| serializer.test | 10 | 0.001379s | 0.001374s | 0.001369s | byte equality observed |
| snippets.test | 10 | 0.000928s | 0.000917s | 0.000916s | byte equality observed |
| static_resource.test | 10 | 0.000842s | 0.000817s | 0.000820s | byte equality observed |
| storage_ptr.test | 10 | 0.000811s | 0.000801s | 0.000802s | byte equality observed |
| stream_parser.test | 1 | 0.043165s | 0.040251s | 0.043371s | native test oracle; output varies |
| string.test | 10 | 0.001376s | 0.001168s | 0.001380s | byte equality observed |
| string_view.test | 10 | 0.000771s | 0.000771s | 0.000767s | byte equality observed |
| utf8.test | 10 | 0.000776s | 0.000768s | 0.000759s | byte equality observed |
| value.test | 9 | 0.001738s | 0.001598s | 0.002000s | native test oracle; output varies |
| value_from.test | 10 | 0.000917s | 0.000898s | 0.000898s | byte equality observed |
| value_ref.test | 10 | 0.000822s | 0.000823s | 0.000794s | byte equality observed |
| value_stack.test | 10 | 0.000800s | 0.000806s | 0.000792s | byte equality observed |
| value_to.test | 10 | 0.001447s | 0.001439s | 0.001463s | native test oracle; output varies |
| visit.test | 10 | 0.000799s | 0.000791s | 0.000791s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45697047144).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
