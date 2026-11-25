# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.794930 | 4.396432 | 3.728580 | 0.002338 | 0.002248 | 0.002078 |
| basic_parser.test | RUN | 4.922884 | 105.417834 | 62.391194 | 0.407528 | 0.180899 | 0.569105 |
| conversion.test | RUN | 0.529737 | 1.563011 | 1.824047 | 0.001228 | 0.001267 | 0.001225 |
| doc_background.test | RUN | 0.539475 | 1.552206 | 1.813517 | 0.001448 | 0.001441 | 0.001224 |
| doc_forward_conversion.test | RUN | 0.555020 | 1.840106 | 2.051803 | 0.001456 | 0.001267 | 0.001228 |
| doc_parsing.test | RUN | 0.561535 | 1.720989 | 1.924129 | 0.001244 | 0.001485 | 0.001380 |
| doc_quick_look.test | RUN | 0.749741 | 2.086810 | 2.517999 | 0.001368 | 0.001149 | 0.001252 |
| doc_serializing.test | RUN | 0.499680 | 1.513176 | 1.690662 | 0.001314 | 0.001330 | 0.001308 |
| doc_storage_ptr.test | RUN | 0.520315 | 1.562115 | 1.738166 | 0.001636 | 0.001267 | 0.001267 |
| doc_uses_allocator.test | RUN | 0.504537 | 1.527728 | 1.719701 | 0.001411 | 0.001243 | 0.001195 |
| doc_using_numbers.test | RUN | 0.567721 | 1.581755 | 1.893922 | 0.001519 | 0.001321 | 0.001389 |
| double.test | RUN | 0.619742 | 2.707608 | 2.142623 | 1.232591 | 1.207538 | 1.290857 |
| error.test | RUN | 0.439481 | 1.542989 | 1.511339 | 0.001267 | 0.001302 | 0.001243 |
| fwd.test | RUN | 0.495175 | 1.483353 | 1.857769 | 0.001501 | 0.001161 | 0.001237 |
| json.test | RUN | 0.506135 | 1.756444 | 1.973546 | 0.001363 | 0.001278 | 0.001313 |
| kind.test | RUN | 0.373846 | 1.371476 | 1.430588 | 0.001198 | 0.001487 | 0.001245 |
| memory_resource.test | RUN | 0.548823 | 1.852952 | 1.891757 | 0.001185 | 0.001426 | 0.001257 |
| monotonic_resource.test | RUN | 0.483369 | 1.733229 | 1.765105 | 0.002041 | 0.001749 | 0.001777 |
| natvis.test | RUN | 0.518595 | 1.641709 | 1.780022 | 0.001562 | 0.001300 | 0.001312 |
| null_resource.test | RUN | 0.424079 | 1.420404 | 1.389106 | 0.001449 | 0.001465 | 0.001475 |
| object.test | RUN | 0.914626 | 5.127757 | 4.181195 | 0.005539 | 0.004430 | 0.005014 |
| parse.test | RUN | 0.562123 | 2.525968 | 2.105996 | 0.001686 | 0.001936 | 0.001893 |
| parser.test | RUN | 0.529769 | 2.152608 | 1.981672 | 0.001374 | 0.001355 | 0.001444 |
| pilfer.test | RUN | 0.285185 | 0.969512 | 0.981881 | 0.001387 | 0.001252 | 0.001224 |
| pointer.test | RUN | 0.640351 | 2.947922 | 2.513628 | 0.001488 | 0.001603 | 0.001643 |
| result_for.test | RUN | 0.517744 | 1.735704 | 1.848705 | 0.001190 | 0.001405 | 0.001407 |
| serialize.test | RUN | 0.532928 | 1.815148 | 1.780897 | 0.001478 | 0.001484 | 0.001516 |
| serializer.test | RUN | 0.876759 | 5.226866 | 4.266724 | 0.002224 | 0.002372 | 0.002232 |
| snippets.test | RUN | 1.398188 | 7.324181 | 6.423385 | 0.001750 | 0.001770 | 0.001517 |
| static_resource.test | RUN | 0.493187 | 1.678529 | 1.703836 | 0.001283 | 0.001344 | 0.001498 |
| storage_ptr.test | RUN | 0.531203 | 1.758372 | 1.901826 | 0.001427 | 0.001488 | 0.001578 |
| stream_parser.test | RUN | 0.652864 | 3.542805 | 2.641195 | 0.074277 | 0.074204 | 0.066660 |
| string.test | RUN | 1.293106 | 8.299626 | 6.571760 | 0.002204 | 0.002009 | 0.002397 |
| string_view.test | RUN | 0.314788 | 1.072177 | 1.078970 | 0.001185 | 0.001323 | 0.001466 |
| value.test | RUN | 1.175112 | 8.848345 | 5.753006 | 0.002803 | 0.002815 | 0.003222 |
| value_from.test | RUN | 1.094932 | 5.233211 | 4.873362 | 0.001557 | 0.001510 | 0.001402 |
| value_stack.test | RUN | 0.509893 | 1.543906 | 1.689755 | 0.001453 | 0.001284 | 0.001469 |
| value_to.test | RUN | 2.614739 | 16.484416 | 12.715067 | 0.002493 | 0.002585 | 0.002308 |
| value_ref.test | RUN | 0.581421 | 2.241075 | 2.110554 | 0.001415 | 0.001400 | 0.001314 |
| utf8.test | RUN | 0.429926 | 1.467164 | 1.457796 | 0.001322 | 0.001438 | 0.001572 |
| visit.test | RUN | 0.576422 | 2.432084 | 2.017591 | 0.001379 | 0.001546 | 0.001578 |
| d2s_intrinsics_test.test | RUN | 0.422664 | 1.328595 | 1.395366 | 0.001497 | 0.001416 | 0.001365 |
| d2s_table_test.test | RUN | 0.437605 | 1.598614 | 1.439029 | 0.001403 | 0.001382 | 0.001294 |
| d2s_test.test | RUN | 0.460273 | 1.916833 | 1.715356 | 0.001496 | 0.001349 | 0.001331 |
| parse_into.test | RUN | 17.599363 | 135.529321 | 83.254049 | 0.002719 | 0.002437 | 0.002434 |
| limits.test | RUN | 1.873340 | 12.460083 | 7.981697 | 0.001798 | 0.001672 | 0.001672 |
| header_only.test | RUN | 1.270640 | 8.859746 | 5.787610 | 0.001317 | 0.001369 | 0.001232 |
| no_exceptions.test | RUN | 1.800004 | 10.024213 | 7.759707 | 0.001552 | 0.001324 | 0.001433 |
| intrusive_macros.test | RUN | 1.497181 | 9.888083 | 6.883013 | 0.001222 | 0.001393 | 0.001341 |
| _gdb-printers.test | RUN | 0.229149 | 0.661799 | 0.804940 | 0.158729 | 0.248488 | 0.180686 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.897× | 0.905×, 0.890× | 1.022× |
| clang | 1.146× | 1.150×, 1.142× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45651777895).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001358s | 0.001251s | 0.001343s | byte equality observed |
| basic_parser.test | 1 | 0.285514s | 0.187974s | 0.431091s | native test oracle; output varies |
| conversion.test | 10 | 0.000755s | 0.000724s | 0.000746s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000753s | 0.000737s | 0.000742s | byte equality observed |
| d2s_table_test.test | 10 | 0.000772s | 0.000759s | 0.000755s | byte equality observed |
| d2s_test.test | 10 | 0.000798s | 0.000781s | 0.000774s | byte equality observed |
| doc_background.test | 10 | 0.000761s | 0.000737s | 0.000734s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.000785s | 0.000773s | 0.000773s | byte equality observed |
| doc_parsing.test | 10 | 0.000804s | 0.000803s | 0.000768s | byte equality observed |
| doc_quick_look.test | 10 | 0.000770s | 0.000750s | 0.000743s | byte equality observed |
| doc_serializing.test | 10 | 0.000762s | 0.000737s | 0.000728s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.000767s | 0.000765s | 0.000745s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.000762s | 0.000733s | 0.000729s | byte equality observed |
| doc_using_numbers.test | 10 | 0.000777s | 0.000763s | 0.000731s | byte equality observed |
| double.test | 1 | 0.834631s | 0.814065s | 0.866062s | native test oracle; output varies |
| error.test | 10 | 0.000847s | 0.000799s | 0.000880s | byte equality observed |
| fwd.test | 10 | 0.000759s | 0.000755s | 0.000771s | byte equality observed |
| header_only.test | 10 | 0.000741s | 0.000741s | 0.000749s | byte equality observed |
| intrusive_macros.test | 10 | 0.000788s | 0.000778s | 0.000759s | byte equality observed |
| json.test | 10 | 0.000773s | 0.000773s | 0.000763s | byte equality observed |
| kind.test | 10 | 0.000785s | 0.000785s | 0.000778s | byte equality observed |
| limits.test | 10 | 0.000927s | 0.000911s | 0.000918s | byte equality observed |
| memory_resource.test | 10 | 0.000780s | 0.000782s | 0.000786s | byte equality observed |
| monotonic_resource.test | 10 | 0.001151s | 0.001148s | 0.001172s | byte equality observed |
| natvis.test | 10 | 0.000789s | 0.000796s | 0.000784s | byte equality observed |
| no_exceptions.test | 10 | 0.000780s | 0.000792s | 0.000773s | byte equality observed |
| null_resource.test | 10 | 0.000793s | 0.000802s | 0.000799s | byte equality observed |
| object.test | 6 | 0.003358s | 0.002815s | 0.003334s | native test oracle; output varies |
| parse.test | 10 | 0.001097s | 0.001099s | 0.001102s | byte equality observed |
| parse_into.test | 8 | 0.001881s | 0.001767s | 0.001750s | native test oracle; output varies |
| parser.test | 10 | 0.000882s | 0.000868s | 0.000877s | byte equality observed |
| pilfer.test | 10 | 0.000758s | 0.000739s | 0.000756s | byte equality observed |
| pointer.test | 10 | 0.000917s | 0.000903s | 0.000917s | byte equality observed |
| result_for.test | 10 | 0.000747s | 0.000762s | 0.000776s | byte equality observed |
| serialize.test | 10 | 0.000792s | 0.000795s | 0.000786s | byte equality observed |
| serializer.test | 10 | 0.001357s | 0.001377s | 0.001374s | byte equality observed |
| snippets.test | 6 | 0.000933s | 0.000907s | 0.000931s | byte equality observed |
| static_resource.test | 10 | 0.000822s | 0.000815s | 0.000817s | byte equality observed |
| storage_ptr.test | 10 | 0.000797s | 0.000805s | 0.000796s | byte equality observed |
| stream_parser.test | 1 | 0.043006s | 0.040068s | 0.043344s | native test oracle; output varies |
| string.test | 10 | 0.001350s | 0.001160s | 0.001373s | byte equality observed |
| string_view.test | 10 | 0.000765s | 0.000747s | 0.000769s | byte equality observed |
| utf8.test | 10 | 0.000749s | 0.000733s | 0.000768s | byte equality observed |
| value.test | 10 | 0.001708s | 0.001588s | 0.001992s | native test oracle; output varies |
| value_from.test | 10 | 0.000892s | 0.000889s | 0.000901s | byte equality observed |
| value_ref.test | 10 | 0.000805s | 0.000809s | 0.000808s | byte equality observed |
| value_stack.test | 10 | 0.000782s | 0.000793s | 0.000790s | byte equality observed |
| value_to.test | 10 | 0.001434s | 0.001445s | 0.001451s | byte equality observed |
| visit.test | 10 | 0.000780s | 0.000792s | 0.000764s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45651777895).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
