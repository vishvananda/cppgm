# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.773534 | 4.418676 | 3.632181 | 0.002096 | 0.001826 | 0.002022 |
| basic_parser.test | RUN | 4.880729 | 105.338182 | 59.632392 | 0.411266 | 0.180913 | 0.601827 |
| conversion.test | RUN | 0.498620 | 1.589536 | 1.781190 | 0.001517 | 0.001348 | 0.001099 |
| doc_background.test | RUN | 0.511279 | 1.571392 | 1.758167 | 0.001119 | 0.001179 | 0.001197 |
| doc_forward_conversion.test | RUN | 0.547219 | 1.845837 | 2.011436 | 0.001191 | 0.001322 | 0.001209 |
| doc_parsing.test | RUN | 0.569319 | 1.730898 | 1.879567 | 0.001439 | 0.001445 | 0.001314 |
| doc_quick_look.test | RUN | 0.720510 | 2.111845 | 2.453081 | 0.001345 | 0.001300 | 0.001107 |
| doc_serializing.test | RUN | 0.505908 | 1.537177 | 1.697212 | 0.001293 | 0.001143 | 0.001220 |
| doc_storage_ptr.test | RUN | 0.500995 | 1.579314 | 1.723999 | 0.001655 | 0.001348 | 0.001214 |
| doc_uses_allocator.test | RUN | 0.496953 | 1.544816 | 1.698233 | 0.001324 | 0.001184 | 0.001210 |
| doc_using_numbers.test | RUN | 0.566191 | 1.606928 | 1.827719 | 0.001352 | 0.001278 | 0.001200 |
| double.test | RUN | 0.585255 | 2.800126 | 2.224680 | 1.244723 | 1.152439 | 1.380287 |
| error.test | RUN | 0.427750 | 1.539617 | 1.451830 | 0.001173 | 0.001371 | 0.001179 |
| fwd.test | RUN | 0.457893 | 1.559815 | 1.590291 | 0.001407 | 0.001380 | 0.001139 |
| json.test | RUN | 0.494025 | 1.819023 | 1.880079 | 0.001116 | 0.001378 | 0.001129 |
| kind.test | RUN | 0.352795 | 1.382668 | 1.375257 | 0.001119 | 0.001351 | 0.001270 |
| memory_resource.test | RUN | 0.526788 | 1.841416 | 1.839194 | 0.001071 | 0.001362 | 0.001201 |
| monotonic_resource.test | RUN | 0.461944 | 1.734524 | 1.769205 | 0.001768 | 0.001726 | 0.001852 |
| natvis.test | RUN | 0.495626 | 1.677949 | 1.729235 | 0.001307 | 0.001345 | 0.001241 |
| null_resource.test | RUN | 0.407853 | 1.372869 | 1.413728 | 0.001189 | 0.001422 | 0.001446 |
| object.test | RUN | 0.894539 | 5.087299 | 4.475826 | 0.005131 | 0.004433 | 0.004951 |
| parse.test | RUN | 0.547673 | 2.540483 | 1.961565 | 0.001664 | 0.001831 | 0.001755 |
| parser.test | RUN | 0.535329 | 2.160783 | 1.919368 | 0.001415 | 0.001506 | 0.001448 |
| pilfer.test | RUN | 0.280764 | 0.974655 | 0.902822 | 0.001274 | 0.001274 | 0.001131 |
| pointer.test | RUN | 0.622913 | 2.924152 | 2.483391 | 0.001402 | 0.001613 | 0.001340 |
| result_for.test | RUN | 0.498026 | 1.729081 | 1.827329 | 0.001159 | 0.001421 | 0.001354 |
| serialize.test | RUN | 0.508580 | 1.787982 | 1.828886 | 0.001131 | 0.001501 | 0.001305 |
| serializer.test | RUN | 0.855790 | 5.283709 | 4.059643 | 0.002236 | 0.002272 | 0.002044 |
| snippets.test | RUN | 1.366493 | 7.394321 | 6.265107 | 0.001394 | 0.001500 | 0.001718 |
| static_resource.test | RUN | 0.492705 | 1.639363 | 1.711261 | 0.001415 | 0.001517 | 0.001413 |
| storage_ptr.test | RUN | 0.513395 | 1.713447 | 1.843368 | 0.001333 | 0.001533 | 0.001261 |
| stream_parser.test | RUN | 0.646140 | 3.351294 | 2.528789 | 0.070042 | 0.072070 | 0.066892 |
| string.test | RUN | 1.257208 | 8.564344 | 6.703357 | 0.002089 | 0.001871 | 0.002143 |
| string_view.test | RUN | 0.305354 | 1.038850 | 0.965573 | 0.001170 | 0.001453 | 0.001171 |
| value.test | RUN | 1.144131 | 8.503205 | 5.460184 | 0.002710 | 0.002825 | 0.003094 |
| value_from.test | RUN | 1.050030 | 5.300912 | 4.675387 | 0.001329 | 0.001461 | 0.001395 |
| value_stack.test | RUN | 0.480001 | 1.580715 | 1.703711 | 0.001308 | 0.001581 | 0.001248 |
| value_to.test | RUN | 2.544555 | 17.735801 | 12.154559 | 0.002347 | 0.002585 | 0.002170 |
| value_ref.test | RUN | 0.561447 | 2.295743 | 2.082552 | 0.001208 | 0.001564 | 0.001273 |
| utf8.test | RUN | 0.420091 | 1.498059 | 1.439116 | 0.001156 | 0.001358 | 0.001123 |
| visit.test | RUN | 0.548211 | 2.349533 | 2.018579 | 0.001228 | 0.001464 | 0.001183 |
| d2s_intrinsics_test.test | RUN | 0.409379 | 1.379243 | 1.445517 | 0.001311 | 0.001200 | 0.001304 |
| d2s_table_test.test | RUN | 0.431547 | 1.526096 | 1.495093 | 0.001267 | 0.001366 | 0.001169 |
| d2s_test.test | RUN | 0.444914 | 1.850365 | 1.699149 | 0.001172 | 0.001533 | 0.001245 |
| parse_into.test | RUN | 17.163992 | 134.710364 | 79.569477 | 0.002448 | 0.002302 | 0.002006 |
| limits.test | RUN | 1.884999 | 12.355334 | 8.148422 | 0.001576 | 0.001527 | 0.001374 |
| header_only.test | RUN | 1.261044 | 8.795227 | 5.851457 | 0.001226 | 0.001266 | 0.001138 |
| no_exceptions.test | RUN | 1.748164 | 10.192881 | 7.601057 | 0.001198 | 0.001440 | 0.001117 |
| intrusive_macros.test | RUN | 1.501032 | 9.782758 | 6.728154 | 0.001120 | 0.001306 | 0.001101 |
| _gdb-printers.test | RUN | 0.224946 | 0.665211 | 0.773978 | 0.158752 | 0.250137 | 0.161357 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.904× | 0.909×, 0.898× | 1.008× |
| clang | 1.143× | 1.137×, 1.148× | 1.017× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44801983152).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001368s | 0.001228s | 0.001326s | byte equality observed |
| basic_parser.test | 1 | 0.284600s | 0.188587s | 0.426953s | native test oracle; output varies |
| conversion.test | 10 | 0.000751s | 0.000752s | 0.000744s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000745s | 0.000736s | 0.000731s | byte equality observed |
| d2s_table_test.test | 10 | 0.000773s | 0.000761s | 0.000769s | byte equality observed |
| d2s_test.test | 10 | 0.000793s | 0.000791s | 0.000793s | byte equality observed |
| doc_background.test | 10 | 0.000755s | 0.000732s | 0.000743s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.000780s | 0.000774s | 0.000766s | byte equality observed |
| doc_parsing.test | 10 | 0.000788s | 0.000793s | 0.000767s | byte equality observed |
| doc_quick_look.test | 10 | 0.000782s | 0.000760s | 0.000763s | byte equality observed |
| doc_serializing.test | 10 | 0.000761s | 0.000751s | 0.000755s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.000760s | 0.000758s | 0.000767s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.000782s | 0.000750s | 0.000737s | byte equality observed |
| doc_using_numbers.test | 10 | 0.000756s | 0.000741s | 0.000746s | byte equality observed |
| double.test | 1 | 0.831498s | 0.821974s | 0.866523s | native test oracle; output varies |
| error.test | 10 | 0.000796s | 0.000789s | 0.000776s | byte equality observed |
| fwd.test | 10 | 0.000756s | 0.000727s | 0.000749s | byte equality observed |
| header_only.test | 10 | 0.000757s | 0.000732s | 0.000730s | byte equality observed |
| intrusive_macros.test | 10 | 0.000774s | 0.000768s | 0.000759s | byte equality observed |
| json.test | 10 | 0.000778s | 0.000746s | 0.000755s | byte equality observed |
| kind.test | 10 | 0.000781s | 0.000778s | 0.000782s | byte equality observed |
| limits.test | 10 | 0.000929s | 0.000905s | 0.000912s | byte equality observed |
| memory_resource.test | 10 | 0.000776s | 0.000783s | 0.000776s | byte equality observed |
| monotonic_resource.test | 10 | 0.001142s | 0.001144s | 0.001144s | byte equality observed |
| natvis.test | 10 | 0.000788s | 0.000789s | 0.000778s | byte equality observed |
| no_exceptions.test | 10 | 0.000771s | 0.000769s | 0.000776s | byte equality observed |
| null_resource.test | 10 | 0.000794s | 0.000786s | 0.000787s | byte equality observed |
| object.test | 6 | 0.003355s | 0.002792s | 0.003292s | native test oracle; output varies |
| parse.test | 10 | 0.001094s | 0.001096s | 0.001083s | byte equality observed |
| parse_into.test | 9 | 0.001786s | 0.001763s | 0.001732s | native test oracle; output varies |
| parser.test | 10 | 0.000883s | 0.000848s | 0.000870s | byte equality observed |
| pilfer.test | 10 | 0.000755s | 0.000743s | 0.000745s | byte equality observed |
| pointer.test | 10 | 0.000912s | 0.000905s | 0.000906s | byte equality observed |
| result_for.test | 10 | 0.000758s | 0.000772s | 0.000743s | byte equality observed |
| serialize.test | 10 | 0.000792s | 0.000825s | 0.000777s | byte equality observed |
| serializer.test | 10 | 0.001360s | 0.001362s | 0.001343s | byte equality observed |
| snippets.test | 10 | 0.000919s | 0.000905s | 0.000897s | byte equality observed |
| static_resource.test | 10 | 0.000819s | 0.000809s | 0.000806s | byte equality observed |
| storage_ptr.test | 10 | 0.000796s | 0.000781s | 0.000784s | byte equality observed |
| stream_parser.test | 1 | 0.042805s | 0.039915s | 0.042870s | native test oracle; output varies |
| string.test | 10 | 0.001323s | 0.001142s | 0.001307s | byte equality observed |
| string_view.test | 10 | 0.000751s | 0.000733s | 0.000735s | byte equality observed |
| utf8.test | 10 | 0.000749s | 0.000735s | 0.000749s | byte equality observed |
| value.test | 10 | 0.001705s | 0.001574s | 0.001962s | native test oracle; output varies |
| value_from.test | 10 | 0.000892s | 0.000872s | 0.000887s | byte equality observed |
| value_ref.test | 10 | 0.000797s | 0.000813s | 0.000789s | byte equality observed |
| value_stack.test | 10 | 0.000795s | 0.000783s | 0.000783s | byte equality observed |
| value_to.test | 10 | 0.001436s | 0.001435s | 0.001437s | native test oracle; output varies |
| visit.test | 10 | 0.000783s | 0.000757s | 0.000781s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44801983152).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
