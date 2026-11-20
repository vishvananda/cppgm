# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.762855 | 4.372966 | 3.668824 | 0.002090 | 0.002198 | 0.002096 |
| basic_parser.test | RUN | 4.781669 | 105.980084 | 61.563457 | 0.410552 | 0.182493 | 0.574429 |
| conversion.test | RUN | 0.524762 | 1.604630 | 1.790858 | 0.000914 | 0.001423 | 0.001188 |
| doc_background.test | RUN | 0.507874 | 1.621315 | 1.768582 | 0.001298 | 0.001304 | 0.001285 |
| doc_forward_conversion.test | RUN | 0.548136 | 1.882041 | 2.018544 | 0.001320 | 0.001365 | 0.001126 |
| doc_parsing.test | RUN | 0.568305 | 1.761278 | 1.886004 | 0.001297 | 0.001282 | 0.001250 |
| doc_quick_look.test | RUN | 0.709693 | 2.099585 | 2.475768 | 0.001243 | 0.001311 | 0.001136 |
| doc_serializing.test | RUN | 0.497597 | 1.530412 | 1.702810 | 0.001184 | 0.001125 | 0.001157 |
| doc_storage_ptr.test | RUN | 0.486544 | 1.599744 | 1.725898 | 0.001353 | 0.001255 | 0.001280 |
| doc_uses_allocator.test | RUN | 0.505020 | 1.534226 | 1.715299 | 0.001286 | 0.001378 | 0.001168 |
| doc_using_numbers.test | RUN | 0.551220 | 1.618283 | 1.851804 | 0.001346 | 0.001227 | 0.001202 |
| double.test | RUN | 0.595619 | 2.745457 | 2.193028 | 1.248829 | 1.188600 | 1.312208 |
| error.test | RUN | 0.422510 | 1.562244 | 1.439874 | 0.001146 | 0.001300 | 0.001274 |
| fwd.test | RUN | 0.455395 | 1.588313 | 1.635080 | 0.001204 | 0.001243 | 0.001182 |
| json.test | RUN | 0.487719 | 1.761858 | 1.951676 | 0.001149 | 0.001384 | 0.001303 |
| kind.test | RUN | 0.361761 | 1.412027 | 1.372170 | 0.001113 | 0.001482 | 0.001287 |
| memory_resource.test | RUN | 0.519396 | 1.889580 | 1.867684 | 0.001234 | 0.001409 | 0.001226 |
| monotonic_resource.test | RUN | 0.470086 | 1.747534 | 1.793563 | 0.001759 | 0.001874 | 0.001734 |
| natvis.test | RUN | 0.494298 | 1.629823 | 1.754531 | 0.001198 | 0.001326 | 0.001364 |
| null_resource.test | RUN | 0.404315 | 1.425208 | 1.399327 | 0.001237 | 0.001427 | 0.001451 |
| object.test | RUN | 0.891881 | 5.153147 | 4.489937 | 0.005215 | 0.004486 | 0.005125 |
| parse.test | RUN | 0.545110 | 2.564292 | 2.006637 | 0.001707 | 0.002016 | 0.001820 |
| parser.test | RUN | 0.524704 | 2.171408 | 1.922059 | 0.001393 | 0.001510 | 0.001546 |
| pilfer.test | RUN | 0.283567 | 0.978310 | 0.912428 | 0.001248 | 0.001385 | 0.001448 |
| pointer.test | RUN | 0.632849 | 2.954147 | 2.504229 | 0.001562 | 0.001678 | 0.001425 |
| result_for.test | RUN | 0.513626 | 1.743011 | 1.840998 | 0.001298 | 0.001375 | 0.001274 |
| serialize.test | RUN | 0.526721 | 1.797057 | 1.840341 | 0.001406 | 0.001347 | 0.001443 |
| serializer.test | RUN | 0.871021 | 5.235568 | 4.088020 | 0.002355 | 0.002254 | 0.002143 |
| snippets.test | RUN | 1.376668 | 7.610015 | 6.300345 | 0.001411 | 0.001744 | 0.001565 |
| static_resource.test | RUN | 0.494826 | 1.685608 | 1.705686 | 0.001261 | 0.001673 | 0.001448 |
| storage_ptr.test | RUN | 0.511880 | 1.745421 | 1.827968 | 0.001400 | 0.001658 | 0.001341 |
| stream_parser.test | RUN | 0.644924 | 3.334125 | 2.604129 | 0.074566 | 0.070639 | 0.068865 |
| string.test | RUN | 1.258470 | 8.368604 | 6.733936 | 0.002058 | 0.002131 | 0.002158 |
| string_view.test | RUN | 0.304285 | 1.044601 | 0.982140 | 0.001308 | 0.001249 | 0.001344 |
| value.test | RUN | 1.139044 | 8.940588 | 5.509016 | 0.002678 | 0.002545 | 0.003188 |
| value_from.test | RUN | 1.057940 | 5.299291 | 4.706420 | 0.001543 | 0.001583 | 0.001378 |
| value_stack.test | RUN | 0.496810 | 1.603813 | 1.690173 | 0.001461 | 0.001530 | 0.001329 |
| value_to.test | RUN | 2.544475 | 16.519564 | 12.331058 | 0.002298 | 0.002508 | 0.002412 |
| value_ref.test | RUN | 0.570734 | 2.243503 | 2.099509 | 0.001214 | 0.001946 | 0.001223 |
| utf8.test | RUN | 0.417561 | 1.649545 | 1.458100 | 0.001220 | 0.001502 | 0.001330 |
| visit.test | RUN | 0.563909 | 2.316079 | 2.015495 | 0.001293 | 0.001438 | 0.001191 |
| d2s_intrinsics_test.test | RUN | 0.407277 | 1.373337 | 1.399417 | 0.001304 | 0.001503 | 0.001346 |
| d2s_table_test.test | RUN | 0.425321 | 1.602436 | 1.498311 | 0.001315 | 0.001485 | 0.001240 |
| d2s_test.test | RUN | 0.442221 | 1.897430 | 1.696889 | 0.001294 | 0.001357 | 0.001294 |
| parse_into.test | RUN | 17.066042 | 137.006513 | 81.521415 | 0.002310 | 0.002481 | 0.002096 |
| limits.test | RUN | 1.850724 | 12.290243 | 8.280163 | 0.001610 | 0.001667 | 0.001392 |
| header_only.test | RUN | 1.258414 | 9.195297 | 5.949147 | 0.001138 | 0.001353 | 0.001274 |
| no_exceptions.test | RUN | 1.769383 | 10.237110 | 7.718195 | 0.001262 | 0.001499 | 0.001231 |
| intrusive_macros.test | RUN | 1.482542 | 9.966965 | 6.883627 | 0.001153 | 0.001319 | 0.001274 |
| _gdb-printers.test | RUN | 0.227596 | 0.695886 | 0.827111 | 0.151371 | 0.248388 | 0.169898 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.877× | 0.875×, 0.879× | 1.001× |
| clang | 1.142× | 1.138×, 1.147× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44780058957).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001349s | 0.001247s | 0.001303s | byte equality observed |
| basic_parser.test | 1 | 0.287976s | 0.189497s | 0.430896s | native test oracle; output varies |
| conversion.test | 10 | 0.000737s | 0.000735s | 0.000742s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000727s | 0.000744s | 0.000738s | byte equality observed |
| d2s_table_test.test | 10 | 0.000751s | 0.000755s | 0.000745s | byte equality observed |
| d2s_test.test | 10 | 0.000792s | 0.000785s | 0.000773s | byte equality observed |
| doc_background.test | 10 | 0.000749s | 0.000729s | 0.000749s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.000770s | 0.000768s | 0.000772s | byte equality observed |
| doc_parsing.test | 10 | 0.000774s | 0.000767s | 0.000777s | byte equality observed |
| doc_quick_look.test | 10 | 0.000751s | 0.000760s | 0.000764s | byte equality observed |
| doc_serializing.test | 10 | 0.000766s | 0.000731s | 0.000741s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.000774s | 0.000750s | 0.000752s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.000763s | 0.000741s | 0.000747s | byte equality observed |
| doc_using_numbers.test | 10 | 0.000764s | 0.000758s | 0.000726s | byte equality observed |
| double.test | 1 | 0.847165s | 0.813561s | 0.870654s | native test oracle; output varies |
| error.test | 10 | 0.000824s | 0.000801s | 0.000830s | byte equality observed |
| fwd.test | 10 | 0.000758s | 0.000742s | 0.000768s | byte equality observed |
| header_only.test | 10 | 0.000748s | 0.000745s | 0.000745s | byte equality observed |
| intrusive_macros.test | 10 | 0.000775s | 0.000768s | 0.000777s | byte equality observed |
| json.test | 10 | 0.000775s | 0.000758s | 0.000771s | byte equality observed |
| kind.test | 10 | 0.000777s | 0.000787s | 0.000785s | byte equality observed |
| limits.test | 10 | 0.000924s | 0.000917s | 0.000920s | byte equality observed |
| memory_resource.test | 10 | 0.000773s | 0.000791s | 0.000798s | byte equality observed |
| monotonic_resource.test | 10 | 0.001149s | 0.001152s | 0.001150s | byte equality observed |
| natvis.test | 10 | 0.000781s | 0.000784s | 0.000785s | byte equality observed |
| no_exceptions.test | 10 | 0.000767s | 0.000774s | 0.000775s | byte equality observed |
| null_resource.test | 10 | 0.000793s | 0.000796s | 0.000786s | byte equality observed |
| object.test | 6 | 0.003372s | 0.002837s | 0.003319s | native test oracle; output varies |
| parse.test | 10 | 0.001087s | 0.001097s | 0.001095s | byte equality observed |
| parse_into.test | 8 | 0.001876s | 0.001747s | 0.001693s | native test oracle; output varies |
| parser.test | 10 | 0.000868s | 0.000855s | 0.000874s | byte equality observed |
| pilfer.test | 10 | 0.000747s | 0.000749s | 0.000744s | byte equality observed |
| pointer.test | 10 | 0.000903s | 0.000910s | 0.000891s | byte equality observed |
| result_for.test | 10 | 0.000739s | 0.000762s | 0.000757s | byte equality observed |
| serialize.test | 10 | 0.000789s | 0.000794s | 0.000768s | byte equality observed |
| serializer.test | 10 | 0.001362s | 0.001370s | 0.001345s | byte equality observed |
| snippets.test | 10 | 0.000913s | 0.000905s | 0.000892s | byte equality observed |
| static_resource.test | 10 | 0.000809s | 0.000807s | 0.000800s | byte equality observed |
| storage_ptr.test | 10 | 0.000791s | 0.000795s | 0.000777s | byte equality observed |
| stream_parser.test | 1 | 0.042997s | 0.040348s | 0.043111s | native test oracle; output varies |
| string.test | 10 | 0.001332s | 0.001153s | 0.001321s | byte equality observed |
| string_view.test | 10 | 0.000742s | 0.000746s | 0.000763s | byte equality observed |
| utf8.test | 10 | 0.000739s | 0.000757s | 0.000757s | byte equality observed |
| value.test | 9 | 0.001695s | 0.001594s | 0.001970s | native test oracle; output varies |
| value_from.test | 10 | 0.000893s | 0.000895s | 0.000875s | byte equality observed |
| value_ref.test | 10 | 0.000803s | 0.000804s | 0.000801s | byte equality observed |
| value_stack.test | 10 | 0.000775s | 0.000793s | 0.000773s | byte equality observed |
| value_to.test | 10 | 0.001437s | 0.001437s | 0.001425s | native test oracle; output varies |
| visit.test | 10 | 0.000784s | 0.000781s | 0.000774s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44780058957).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
