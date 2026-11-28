# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.792433 | 4.410693 | 3.699466 | 0.002340 | 0.001302 | 0.002155 |
| basic_parser.test | RUN | 5.061542 | 107.689717 | 65.779588 | 0.411727 | 0.186538 | 0.424140 |
| conversion.test | RUN | 0.538637 | 1.575071 | 1.836939 | 0.001334 | 0.001261 | 0.001314 |
| doc_background.test | RUN | 0.541880 | 1.575774 | 1.824661 | 0.001297 | 0.001256 | 0.001231 |
| doc_forward_conversion.test | RUN | 0.584565 | 1.868632 | 2.047195 | 0.001664 | 0.001305 | 0.001161 |
| doc_parsing.test | RUN | 0.590739 | 1.730352 | 1.839565 | 0.001635 | 0.001400 | 0.001206 |
| doc_quick_look.test | RUN | 0.749792 | 2.125788 | 2.506335 | 0.001629 | 0.001398 | 0.001278 |
| doc_serializing.test | RUN | 0.536601 | 1.524995 | 1.685824 | 0.001338 | 0.001261 | 0.001280 |
| doc_storage_ptr.test | RUN | 0.518045 | 1.587587 | 1.749578 | 0.001448 | 0.001476 | 0.001309 |
| doc_uses_allocator.test | RUN | 0.539561 | 1.549580 | 1.740852 | 0.001604 | 0.001294 | 0.001532 |
| doc_using_numbers.test | RUN | 0.570094 | 1.598351 | 1.930002 | 0.001369 | 0.001390 | 0.001432 |
| double.test | RUN | 0.631280 | 2.781564 | 2.203300 | 1.234657 | 1.177716 | 1.298615 |
| error.test | RUN | 0.437439 | 1.535851 | 1.433714 | 0.001499 | 0.001464 | 0.001534 |
| fwd.test | RUN | 0.484604 | 1.546616 | 1.682091 | 0.001506 | 0.001190 | 0.001351 |
| json.test | RUN | 0.514006 | 1.775301 | 2.014555 | 0.001380 | 0.001487 | 0.001342 |
| kind.test | RUN | 0.375984 | 1.399188 | 1.392837 | 0.001228 | 0.001471 | 0.001448 |
| memory_resource.test | RUN | 0.554347 | 1.842389 | 1.920237 | 0.001350 | 0.001290 | 0.001550 |
| monotonic_resource.test | RUN | 0.489738 | 1.744265 | 1.828029 | 0.002112 | 0.001886 | 0.001860 |
| natvis.test | RUN | 0.514296 | 1.646583 | 1.792813 | 0.001482 | 0.001418 | 0.001278 |
| null_resource.test | RUN | 0.428064 | 1.373434 | 1.434335 | 0.001542 | 0.001290 | 0.001400 |
| object.test | RUN | 0.931521 | 5.146237 | 4.590049 | 0.005476 | 0.004504 | 0.005399 |
| parse.test | RUN | 0.575230 | 2.548769 | 2.071456 | 0.001915 | 0.002108 | 0.002163 |
| parser.test | RUN | 0.548572 | 2.172498 | 1.954082 | 0.001571 | 0.001561 | 0.001722 |
| pilfer.test | RUN | 0.293525 | 0.975559 | 0.942680 | 0.001371 | 0.001267 | 0.001388 |
| pointer.test | RUN | 0.658775 | 2.943779 | 2.570172 | 0.001794 | 0.001659 | 0.001564 |
| result_for.test | RUN | 0.527012 | 1.747682 | 1.856756 | 0.001224 | 0.001280 | 0.001344 |
| serialize.test | RUN | 0.538506 | 1.793708 | 1.849096 | 0.001383 | 0.001513 | 0.001602 |
| serializer.test | RUN | 0.891620 | 5.241885 | 4.248934 | 0.002355 | 0.002256 | 0.002074 |
| snippets.test | RUN | 1.432296 | 7.696783 | 6.387113 | 0.001838 | 0.001796 | 0.001521 |
| static_resource.test | RUN | 0.517129 | 1.586265 | 1.688121 | 0.001608 | 0.001493 | 0.001447 |
| storage_ptr.test | RUN | 0.545844 | 1.758231 | 1.877406 | 0.001419 | 0.001539 | 0.001445 |
| stream_parser.test | RUN | 0.670322 | 3.295180 | 2.704083 | 0.074538 | 0.070659 | 0.072591 |
| string.test | RUN | 1.312437 | 8.306439 | 6.904725 | 0.002151 | 0.002171 | 0.002374 |
| string_view.test | RUN | 0.318382 | 1.104565 | 0.998332 | 0.001492 | 0.001381 | 0.001587 |
| value.test | RUN | 1.209410 | 8.434264 | 5.694481 | 0.002977 | 0.002606 | 0.003288 |
| value_from.test | RUN | 1.098818 | 5.569187 | 4.891020 | 0.001459 | 0.001729 | 0.001773 |
| value_stack.test | RUN | 0.512915 | 1.575709 | 1.738378 | 0.001924 | 0.001220 | 0.001538 |
| value_to.test | RUN | 2.632571 | 16.528906 | 13.049054 | 0.002613 | 0.002625 | 0.002758 |
| value_ref.test | RUN | 0.580482 | 2.299921 | 2.185526 | 0.001430 | 0.001583 | 0.001598 |
| utf8.test | RUN | 0.439850 | 1.468069 | 1.452933 | 0.001425 | 0.001360 | 0.001296 |
| visit.test | RUN | 0.579127 | 2.584497 | 2.056584 | 0.001392 | 0.001355 | 0.001387 |
| d2s_intrinsics_test.test | RUN | 0.428272 | 1.323464 | 1.423857 | 0.001444 | 0.001339 | 0.001334 |
| d2s_table_test.test | RUN | 0.438856 | 1.579483 | 1.450359 | 0.001256 | 0.001552 | 0.001398 |
| d2s_test.test | RUN | 0.451757 | 1.944400 | 1.762381 | 0.001560 | 0.001510 | 0.001430 |
| parse_into.test | RUN | 17.784266 | 138.778881 | 86.528406 | 0.002806 | 0.002643 | 0.002574 |
| limits.test | RUN | 1.887309 | 12.550595 | 8.268534 | 0.001778 | 0.001632 | 0.001744 |
| header_only.test | RUN | 1.276686 | 8.861900 | 6.237254 | 0.001259 | 0.001414 | 0.001254 |
| no_exceptions.test | RUN | 1.834083 | 10.198261 | 7.806456 | 0.001404 | 0.001479 | 0.001420 |
| intrusive_macros.test | RUN | 1.525174 | 9.916284 | 6.758523 | 0.001290 | 0.001598 | 0.001569 |
| _gdb-printers.test | RUN | 0.238940 | 0.674094 | 0.762888 | 0.156091 | 0.181095 | 0.174804 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.907× | 0.903×, 0.911× | 1.025× |
| clang | 1.158× | 1.157×, 1.159× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46092715613).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001378s | 0.001242s | 0.001352s | byte equality observed |
| basic_parser.test | 1 | 0.287054s | 0.189436s | 0.431468s | native test oracle; output varies |
| conversion.test | 10 | 0.000763s | 0.000768s | 0.000737s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000755s | 0.000760s | 0.000734s | byte equality observed |
| d2s_table_test.test | 10 | 0.000761s | 0.000790s | 0.000751s | byte equality observed |
| d2s_test.test | 10 | 0.000816s | 0.000818s | 0.000780s | byte equality observed |
| doc_background.test | 10 | 0.000787s | 0.000765s | 0.000735s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.000793s | 0.000790s | 0.000776s | byte equality observed |
| doc_parsing.test | 10 | 0.000810s | 0.000813s | 0.000785s | byte equality observed |
| doc_quick_look.test | 10 | 0.000780s | 0.000785s | 0.000755s | byte equality observed |
| doc_serializing.test | 10 | 0.000759s | 0.000775s | 0.000744s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.000777s | 0.000793s | 0.000759s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.000775s | 0.000767s | 0.000745s | byte equality observed |
| doc_using_numbers.test | 10 | 0.000777s | 0.000763s | 0.000746s | byte equality observed |
| double.test | 1 | 0.827169s | 0.818749s | 0.870565s | native test oracle; output varies |
| error.test | 10 | 0.000875s | 0.000870s | 0.000824s | byte equality observed |
| fwd.test | 10 | 0.000783s | 0.000779s | 0.000785s | byte equality observed |
| header_only.test | 10 | 0.000770s | 0.000773s | 0.000752s | byte equality observed |
| intrusive_macros.test | 10 | 0.000798s | 0.000790s | 0.000775s | byte equality observed |
| json.test | 10 | 0.000783s | 0.000789s | 0.000771s | byte equality observed |
| kind.test | 10 | 0.000796s | 0.000799s | 0.000798s | byte equality observed |
| limits.test | 10 | 0.000955s | 0.000941s | 0.000920s | byte equality observed |
| memory_resource.test | 10 | 0.000791s | 0.000788s | 0.000789s | byte equality observed |
| monotonic_resource.test | 10 | 0.001174s | 0.001162s | 0.001164s | byte equality observed |
| natvis.test | 10 | 0.000792s | 0.000796s | 0.000784s | byte equality observed |
| no_exceptions.test | 10 | 0.000792s | 0.000788s | 0.000785s | byte equality observed |
| null_resource.test | 10 | 0.000813s | 0.000812s | 0.000797s | byte equality observed |
| object.test | 6 | 0.003433s | 0.002853s | 0.003316s | native test oracle; output varies |
| parse.test | 10 | 0.001110s | 0.001125s | 0.001092s | byte equality observed |
| parse_into.test | 8 | 0.001898s | 0.001860s | 0.001771s | native test oracle; output varies |
| parser.test | 10 | 0.000894s | 0.000894s | 0.000864s | byte equality observed |
| pilfer.test | 10 | 0.000766s | 0.000767s | 0.000749s | byte equality observed |
| pointer.test | 10 | 0.000929s | 0.000921s | 0.000910s | byte equality observed |
| result_for.test | 10 | 0.000772s | 0.000775s | 0.000750s | byte equality observed |
| serialize.test | 10 | 0.000809s | 0.000816s | 0.000798s | byte equality observed |
| serializer.test | 10 | 0.001367s | 0.001400s | 0.001364s | byte equality observed |
| snippets.test | 10 | 0.000930s | 0.000920s | 0.000910s | byte equality observed |
| static_resource.test | 10 | 0.000834s | 0.000835s | 0.000825s | byte equality observed |
| storage_ptr.test | 10 | 0.000812s | 0.000813s | 0.000801s | byte equality observed |
| stream_parser.test | 1 | 0.043144s | 0.040470s | 0.043476s | native test oracle; output varies |
| string.test | 10 | 0.001356s | 0.001192s | 0.001343s | byte equality observed |
| string_view.test | 10 | 0.000773s | 0.000766s | 0.000756s | byte equality observed |
| utf8.test | 10 | 0.000761s | 0.000772s | 0.000775s | byte equality observed |
| value.test | 9 | 0.001715s | 0.001609s | 0.002007s | native test oracle; output varies |
| value_from.test | 10 | 0.000907s | 0.000904s | 0.000891s | byte equality observed |
| value_ref.test | 10 | 0.000820s | 0.000815s | 0.000803s | byte equality observed |
| value_stack.test | 10 | 0.000799s | 0.000804s | 0.000791s | byte equality observed |
| value_to.test | 10 | 0.001455s | 0.001468s | 0.001434s | native test oracle; output varies |
| visit.test | 10 | 0.000801s | 0.000796s | 0.000771s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46092715613).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
