# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.754383 | 4.349784 | 3.625333 | 0.002007 | 0.001921 | 0.001956 |
| basic_parser.test | RUN | 4.776825 | 107.097033 | 59.604355 | 0.410233 | 0.180036 | 0.592229 |
| conversion.test | RUN | 0.511653 | 1.586037 | 1.764659 | 0.001110 | 0.001490 | 0.001166 |
| doc_background.test | RUN | 0.513778 | 1.592756 | 1.737653 | 0.001405 | 0.001560 | 0.001171 |
| doc_forward_conversion.test | RUN | 0.571693 | 1.866639 | 1.971531 | 0.001381 | 0.001330 | 0.001210 |
| doc_parsing.test | RUN | 0.544525 | 1.748689 | 1.817915 | 0.001472 | 0.001492 | 0.001179 |
| doc_quick_look.test | RUN | 0.729024 | 2.100050 | 2.501333 | 0.001220 | 0.001610 | 0.001245 |
| doc_serializing.test | RUN | 0.484217 | 1.520586 | 1.665722 | 0.001214 | 0.001326 | 0.001177 |
| doc_storage_ptr.test | RUN | 0.495161 | 1.588623 | 1.699824 | 0.001226 | 0.001512 | 0.001253 |
| doc_uses_allocator.test | RUN | 0.509106 | 1.537246 | 1.691429 | 0.001321 | 0.001509 | 0.001125 |
| doc_using_numbers.test | RUN | 0.554864 | 1.610937 | 1.839825 | 0.001522 | 0.001294 | 0.001293 |
| double.test | RUN | 0.584726 | 2.746723 | 2.190552 | 1.239578 | 1.137333 | 1.314364 |
| error.test | RUN | 0.428005 | 1.525320 | 1.422724 | 0.001218 | 0.001476 | 0.001233 |
| fwd.test | RUN | 0.470260 | 1.571454 | 1.609847 | 0.001234 | 0.001356 | 0.001212 |
| json.test | RUN | 0.489595 | 1.829265 | 1.946032 | 0.001157 | 0.001380 | 0.001200 |
| kind.test | RUN | 0.383325 | 1.415557 | 1.374127 | 0.001051 | 0.001328 | 0.001348 |
| memory_resource.test | RUN | 0.526178 | 1.844231 | 1.855114 | 0.001277 | 0.001487 | 0.001178 |
| monotonic_resource.test | RUN | 0.468990 | 1.734567 | 1.742403 | 0.001842 | 0.001837 | 0.001773 |
| natvis.test | RUN | 0.511567 | 1.666106 | 1.783733 | 0.001409 | 0.001316 | 0.001217 |
| null_resource.test | RUN | 0.417877 | 1.370966 | 1.391770 | 0.001172 | 0.001510 | 0.001266 |
| object.test | RUN | 0.902091 | 5.138470 | 4.109230 | 0.005153 | 0.004549 | 0.004756 |
| parse.test | RUN | 0.546597 | 2.554089 | 2.090799 | 0.001929 | 0.002043 | 0.001744 |
| parser.test | RUN | 0.527533 | 2.151625 | 1.944445 | 0.001176 | 0.001708 | 0.001341 |
| pilfer.test | RUN | 0.281127 | 0.972488 | 0.953963 | 0.001306 | 0.001273 | 0.001200 |
| pointer.test | RUN | 0.629103 | 2.985823 | 2.476980 | 0.001673 | 0.001674 | 0.001582 |
| result_for.test | RUN | 0.510335 | 1.739507 | 1.815754 | 0.001261 | 0.001351 | 0.001190 |
| serialize.test | RUN | 0.508223 | 1.810298 | 1.763061 | 0.001203 | 0.001520 | 0.001266 |
| serializer.test | RUN | 0.867453 | 5.227110 | 4.153245 | 0.002130 | 0.002336 | 0.002130 |
| snippets.test | RUN | 1.377228 | 7.717935 | 6.188611 | 0.001548 | 0.001820 | 0.001555 |
| static_resource.test | RUN | 0.493842 | 1.590315 | 1.650791 | 0.001248 | 0.001641 | 0.001356 |
| storage_ptr.test | RUN | 0.524100 | 1.757419 | 1.850419 | 0.001406 | 0.001509 | 0.001424 |
| stream_parser.test | RUN | 0.640013 | 3.290336 | 2.583014 | 0.069625 | 0.070284 | 0.066632 |
| string.test | RUN | 1.258273 | 8.288321 | 6.394156 | 0.002182 | 0.002222 | 0.002315 |
| string_view.test | RUN | 0.308595 | 1.151017 | 1.058174 | 0.001180 | 0.001331 | 0.001186 |
| value.test | RUN | 1.145585 | 8.393741 | 5.579879 | 0.002749 | 0.002676 | 0.002949 |
| value_from.test | RUN | 1.068002 | 5.647327 | 4.729221 | 0.001465 | 0.001573 | 0.001452 |
| value_stack.test | RUN | 0.494027 | 1.538245 | 1.682313 | 0.001312 | 0.001141 | 0.001192 |
| value_to.test | RUN | 2.572509 | 16.688708 | 12.287271 | 0.002571 | 0.002395 | 0.002192 |
| value_ref.test | RUN | 0.573598 | 2.305986 | 2.140136 | 0.001346 | 0.001643 | 0.001308 |
| utf8.test | RUN | 0.419904 | 1.474513 | 1.461193 | 0.001121 | 0.001343 | 0.001137 |
| visit.test | RUN | 0.559531 | 2.369985 | 2.006022 | 0.001258 | 0.001467 | 0.001247 |
| d2s_intrinsics_test.test | RUN | 0.411932 | 1.411556 | 1.369422 | 0.001266 | 0.001457 | 0.001168 |
| d2s_table_test.test | RUN | 0.416258 | 1.539250 | 1.473748 | 0.001292 | 0.001354 | 0.001348 |
| d2s_test.test | RUN | 0.449182 | 1.811491 | 1.689941 | 0.001393 | 0.001642 | 0.001394 |
| parse_into.test | RUN | 17.231503 | 138.206432 | 81.519444 | 0.002391 | 0.002715 | 0.002222 |
| limits.test | RUN | 1.875917 | 12.087058 | 7.736124 | 0.001583 | 0.001851 | 0.001566 |
| header_only.test | RUN | 1.289327 | 9.121016 | 6.008893 | 0.001217 | 0.001340 | 0.001258 |
| no_exceptions.test | RUN | 1.765284 | 10.259286 | 7.263039 | 0.001183 | 0.001477 | 0.001269 |
| intrusive_macros.test | RUN | 1.510402 | 9.866351 | 6.769416 | 0.001216 | 0.001698 | 0.001341 |
| _gdb-printers.test | RUN | 0.222359 | 0.678550 | 0.767279 | 0.160398 | 0.248768 | 0.166805 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.903× | 0.895×, 0.910× | 1.005× |
| clang | 1.134× | 1.132×, 1.137× | 1.005× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44818861403).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001348s | 0.001220s | 0.001309s | byte equality observed |
| basic_parser.test | 1 | 0.286529s | 0.188553s | 0.430910s | native test oracle; output varies |
| conversion.test | 10 | 0.000742s | 0.000747s | 0.000727s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000734s | 0.000741s | 0.000725s | byte equality observed |
| d2s_table_test.test | 10 | 0.000764s | 0.000755s | 0.000735s | byte equality observed |
| d2s_test.test | 10 | 0.000805s | 0.000782s | 0.000767s | byte equality observed |
| doc_background.test | 10 | 0.000767s | 0.000731s | 0.000723s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.000771s | 0.000771s | 0.000755s | byte equality observed |
| doc_parsing.test | 10 | 0.000777s | 0.000773s | 0.000759s | byte equality observed |
| doc_quick_look.test | 10 | 0.000750s | 0.000739s | 0.000737s | byte equality observed |
| doc_serializing.test | 10 | 0.000770s | 0.000733s | 0.000729s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.000769s | 0.000758s | 0.000737s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.000763s | 0.000726s | 0.000721s | byte equality observed |
| doc_using_numbers.test | 10 | 0.000758s | 0.000748s | 0.000722s | byte equality observed |
| double.test | 1 | 0.839335s | 0.812204s | 0.860369s | native test oracle; output varies |
| error.test | 10 | 0.000817s | 0.000808s | 0.000873s | byte equality observed |
| fwd.test | 10 | 0.000753s | 0.000769s | 0.000764s | byte equality observed |
| header_only.test | 10 | 0.000736s | 0.000740s | 0.000754s | byte equality observed |
| intrusive_macros.test | 10 | 0.000772s | 0.000779s | 0.000760s | byte equality observed |
| json.test | 10 | 0.000776s | 0.000784s | 0.000772s | byte equality observed |
| kind.test | 10 | 0.000780s | 0.000784s | 0.000787s | byte equality observed |
| limits.test | 10 | 0.000928s | 0.000909s | 0.000926s | byte equality observed |
| memory_resource.test | 10 | 0.000779s | 0.000787s | 0.000779s | byte equality observed |
| monotonic_resource.test | 10 | 0.001142s | 0.001149s | 0.001134s | byte equality observed |
| natvis.test | 10 | 0.000781s | 0.000795s | 0.000783s | byte equality observed |
| no_exceptions.test | 10 | 0.000775s | 0.000785s | 0.000768s | byte equality observed |
| null_resource.test | 10 | 0.000799s | 0.000797s | 0.000795s | byte equality observed |
| object.test | 6 | 0.003368s | 0.002835s | 0.003298s | native test oracle; output varies |
| parse.test | 10 | 0.001091s | 0.001106s | 0.001094s | byte equality observed |
| parse_into.test | 8 | 0.001816s | 0.001823s | 0.001730s | native test oracle; output varies |
| parser.test | 10 | 0.000884s | 0.000854s | 0.000872s | byte equality observed |
| pilfer.test | 10 | 0.000756s | 0.000768s | 0.000767s | byte equality observed |
| pointer.test | 10 | 0.000919s | 0.000911s | 0.000916s | byte equality observed |
| result_for.test | 10 | 0.000765s | 0.000749s | 0.000742s | byte equality observed |
| serialize.test | 10 | 0.000788s | 0.000808s | 0.000796s | byte equality observed |
| serializer.test | 10 | 0.001354s | 0.001376s | 0.001361s | byte equality observed |
| snippets.test | 10 | 0.000923s | 0.000916s | 0.000918s | byte equality observed |
| static_resource.test | 10 | 0.000819s | 0.000820s | 0.000819s | byte equality observed |
| storage_ptr.test | 10 | 0.000798s | 0.000809s | 0.000795s | byte equality observed |
| stream_parser.test | 1 | 0.042756s | 0.040123s | 0.043037s | native test oracle; output varies |
| string.test | 10 | 0.001324s | 0.001177s | 0.001337s | byte equality observed |
| string_view.test | 10 | 0.000755s | 0.000765s | 0.000759s | byte equality observed |
| utf8.test | 10 | 0.000749s | 0.000753s | 0.000750s | byte equality observed |
| value.test | 9 | 0.001698s | 0.001614s | 0.001989s | native test oracle; output varies |
| value_from.test | 10 | 0.000885s | 0.000895s | 0.000902s | byte equality observed |
| value_ref.test | 10 | 0.000796s | 0.000806s | 0.000804s | byte equality observed |
| value_stack.test | 10 | 0.000791s | 0.000768s | 0.000793s | byte equality observed |
| value_to.test | 10 | 0.001431s | 0.001449s | 0.001426s | byte equality observed |
| visit.test | 10 | 0.000783s | 0.000784s | 0.000779s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44818861403).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
