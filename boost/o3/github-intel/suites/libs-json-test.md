# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.780983 | 4.319357 | 3.571603 | 0.002266 | 0.001912 | 0.002066 |
| basic_parser.test | RUN | 4.909008 | 106.032961 | 60.388692 | 0.404063 | 0.180634 | 0.567281 |
| conversion.test | RUN | 0.524551 | 1.535960 | 1.749253 | 0.001255 | 0.001325 | 0.001198 |
| doc_background.test | RUN | 0.521359 | 1.543199 | 1.723770 | 0.001257 | 0.001406 | 0.001180 |
| doc_forward_conversion.test | RUN | 0.569660 | 1.823987 | 1.963850 | 0.001297 | 0.001293 | 0.001177 |
| doc_parsing.test | RUN | 0.542564 | 1.702361 | 1.841792 | 0.001387 | 0.001393 | 0.001164 |
| doc_quick_look.test | RUN | 0.737696 | 2.073318 | 2.418429 | 0.001399 | 0.001231 | 0.001128 |
| doc_serializing.test | RUN | 0.493623 | 1.501013 | 1.652639 | 0.001244 | 0.001146 | 0.001125 |
| doc_storage_ptr.test | RUN | 0.499731 | 1.563213 | 1.672801 | 0.001377 | 0.001390 | 0.001191 |
| doc_uses_allocator.test | RUN | 0.501049 | 1.525861 | 1.665316 | 0.001464 | 0.001236 | 0.001171 |
| doc_using_numbers.test | RUN | 0.566396 | 1.588255 | 1.816370 | 0.001426 | 0.001254 | 0.001223 |
| double.test | RUN | 0.593234 | 2.768202 | 2.230144 | 1.227811 | 1.141029 | 1.303903 |
| error.test | RUN | 0.435002 | 1.524641 | 1.283264 | 0.001279 | 0.001479 | 0.001039 |
| fwd.test | RUN | 0.465992 | 1.575189 | 1.659593 | 0.001134 | 0.001423 | 0.001069 |
| json.test | RUN | 0.508748 | 1.832059 | 1.911673 | 0.001122 | 0.001338 | 0.001193 |
| kind.test | RUN | 0.377608 | 1.388695 | 1.363329 | 0.001100 | 0.001521 | 0.001298 |
| memory_resource.test | RUN | 0.528555 | 1.840430 | 1.855451 | 0.001174 | 0.001393 | 0.001234 |
| monotonic_resource.test | RUN | 0.471890 | 1.728173 | 1.726645 | 0.001806 | 0.001709 | 0.001839 |
| natvis.test | RUN | 0.494469 | 1.671884 | 1.722004 | 0.001308 | 0.001335 | 0.001204 |
| null_resource.test | RUN | 0.403008 | 1.362834 | 1.398641 | 0.001321 | 0.001320 | 0.001391 |
| object.test | RUN | 0.907950 | 5.051306 | 4.428436 | 0.005094 | 0.004428 | 0.005364 |
| parse.test | RUN | 0.551507 | 2.522041 | 1.976317 | 0.001715 | 0.001822 | 0.001803 |
| parser.test | RUN | 0.526161 | 2.144274 | 1.913603 | 0.001327 | 0.001315 | 0.001589 |
| pilfer.test | RUN | 0.281242 | 0.964213 | 0.935751 | 0.001341 | 0.001323 | 0.001168 |
| pointer.test | RUN | 0.624550 | 2.901092 | 2.433484 | 0.001483 | 0.001529 | 0.001521 |
| result_for.test | RUN | 0.501321 | 1.719242 | 1.841611 | 0.001221 | 0.001361 | 0.001218 |
| serialize.test | RUN | 0.505743 | 1.787774 | 1.793233 | 0.001183 | 0.001398 | 0.001352 |
| serializer.test | RUN | 0.854654 | 5.230247 | 4.061571 | 0.002194 | 0.002241 | 0.002064 |
| snippets.test | RUN | 1.361114 | 7.632743 | 6.147247 | 0.001553 | 0.001819 | 0.001598 |
| static_resource.test | RUN | 0.488889 | 1.628112 | 1.687032 | 0.001349 | 0.001396 | 0.001495 |
| storage_ptr.test | RUN | 0.522981 | 1.735913 | 1.839672 | 0.001257 | 0.001327 | 0.001250 |
| stream_parser.test | RUN | 0.641006 | 3.272366 | 2.564053 | 0.073969 | 0.069788 | 0.070432 |
| string.test | RUN | 1.264592 | 8.266660 | 6.639469 | 0.002218 | 0.001919 | 0.002120 |
| string_view.test | RUN | 0.305969 | 1.034115 | 0.979669 | 0.001352 | 0.001399 | 0.001273 |
| value.test | RUN | 1.163751 | 8.407798 | 5.427424 | 0.002639 | 0.002703 | 0.003045 |
| value_from.test | RUN | 1.068053 | 5.453685 | 4.712766 | 0.001381 | 0.001730 | 0.001618 |
| value_stack.test | RUN | 0.494682 | 1.552736 | 1.698679 | 0.001403 | 0.001254 | 0.001191 |
| value_to.test | RUN | 2.564954 | 17.489001 | 12.147180 | 0.002372 | 0.002579 | 0.002181 |
| value_ref.test | RUN | 0.565494 | 2.313807 | 2.158071 | 0.001254 | 0.001524 | 0.001356 |
| utf8.test | RUN | 0.426526 | 1.499292 | 1.446106 | 0.001322 | 0.001590 | 0.001349 |
| visit.test | RUN | 0.562072 | 2.406559 | 1.998423 | 0.001262 | 0.001612 | 0.001258 |
| d2s_intrinsics_test.test | RUN | 0.405508 | 1.399295 | 1.386562 | 0.001314 | 0.001387 | 0.001305 |
| d2s_table_test.test | RUN | 0.431558 | 1.546420 | 1.481860 | 0.001367 | 0.001296 | 0.001238 |
| d2s_test.test | RUN | 0.457021 | 1.853322 | 1.690393 | 0.001337 | 0.001537 | 0.001435 |
| parse_into.test | RUN | 17.409669 | 137.580514 | 80.020756 | 0.002412 | 0.002504 | 0.002036 |
| limits.test | RUN | 1.884761 | 12.186787 | 8.129431 | 0.001545 | 0.001568 | 0.001426 |
| header_only.test | RUN | 1.249328 | 8.781714 | 5.839760 | 0.001167 | 0.001404 | 0.001164 |
| no_exceptions.test | RUN | 1.738144 | 10.040165 | 7.405243 | 0.001186 | 0.001486 | 0.001328 |
| intrusive_macros.test | RUN | 1.501138 | 9.869580 | 6.669038 | 0.001228 | 0.001501 | 0.001259 |
| _gdb-printers.test | RUN | 0.228002 | 0.688616 | 0.774968 | 0.152196 | 0.254807 | 0.169464 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.906× | 0.900×, 0.913× | 1.021× |
| clang | 1.149× | 1.145×, 1.152× | 0.994× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45739944580).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001361s | 0.001243s | 0.001343s | byte equality observed |
| basic_parser.test | 1 | 0.285475s | 0.188219s | 0.428358s | native test oracle; output varies |
| conversion.test | 10 | 0.000723s | 0.000731s | 0.000736s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000724s | 0.000731s | 0.000750s | byte equality observed |
| d2s_table_test.test | 10 | 0.000752s | 0.000753s | 0.000767s | byte equality observed |
| d2s_test.test | 10 | 0.000786s | 0.000798s | 0.000780s | byte equality observed |
| doc_background.test | 10 | 0.000746s | 0.000734s | 0.000741s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.000772s | 0.000770s | 0.000764s | byte equality observed |
| doc_parsing.test | 10 | 0.000785s | 0.000769s | 0.000774s | byte equality observed |
| doc_quick_look.test | 10 | 0.000759s | 0.000746s | 0.000751s | byte equality observed |
| doc_serializing.test | 10 | 0.000755s | 0.000733s | 0.000741s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.000752s | 0.000765s | 0.000757s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.000752s | 0.000741s | 0.000742s | byte equality observed |
| doc_using_numbers.test | 10 | 0.000751s | 0.000742s | 0.000736s | byte equality observed |
| double.test | 1 | 0.825590s | 0.812127s | 0.859641s | native test oracle; output varies |
| error.test | 10 | 0.000800s | 0.000786s | 0.000872s | byte equality observed |
| fwd.test | 10 | 0.000748s | 0.000746s | 0.000747s | byte equality observed |
| header_only.test | 10 | 0.000740s | 0.000731s | 0.000721s | byte equality observed |
| intrusive_macros.test | 10 | 0.000772s | 0.000766s | 0.000762s | byte equality observed |
| json.test | 10 | 0.000758s | 0.000753s | 0.000754s | byte equality observed |
| kind.test | 10 | 0.000770s | 0.000780s | 0.000762s | byte equality observed |
| limits.test | 10 | 0.000918s | 0.000906s | 0.000908s | byte equality observed |
| memory_resource.test | 10 | 0.000772s | 0.000764s | 0.000768s | byte equality observed |
| monotonic_resource.test | 10 | 0.001140s | 0.001136s | 0.001116s | byte equality observed |
| natvis.test | 10 | 0.000781s | 0.000775s | 0.000774s | byte equality observed |
| no_exceptions.test | 10 | 0.000772s | 0.000758s | 0.000782s | byte equality observed |
| null_resource.test | 10 | 0.000786s | 0.000777s | 0.000780s | byte equality observed |
| object.test | 6 | 0.003348s | 0.002795s | 0.003301s | native test oracle; output varies |
| parse.test | 10 | 0.001088s | 0.001082s | 0.001084s | byte equality observed |
| parse_into.test | 8 | 0.001874s | 0.001791s | 0.001716s | native test oracle; output varies |
| parser.test | 10 | 0.000864s | 0.000848s | 0.000853s | byte equality observed |
| pilfer.test | 10 | 0.000741s | 0.000740s | 0.000756s | byte equality observed |
| pointer.test | 10 | 0.000906s | 0.000892s | 0.000903s | byte equality observed |
| result_for.test | 10 | 0.000751s | 0.000741s | 0.000738s | byte equality observed |
| serialize.test | 10 | 0.000790s | 0.000794s | 0.000778s | byte equality observed |
| serializer.test | 10 | 0.001348s | 0.001365s | 0.001343s | byte equality observed |
| snippets.test | 10 | 0.000913s | 0.000925s | 0.000892s | byte equality observed |
| static_resource.test | 10 | 0.000814s | 0.000815s | 0.000808s | byte equality observed |
| storage_ptr.test | 10 | 0.000789s | 0.000800s | 0.000777s | byte equality observed |
| stream_parser.test | 1 | 0.042938s | 0.039932s | 0.042988s | native test oracle; output varies |
| string.test | 10 | 0.001329s | 0.001151s | 0.001309s | byte equality observed |
| string_view.test | 10 | 0.000746s | 0.000755s | 0.000748s | byte equality observed |
| utf8.test | 10 | 0.000755s | 0.000752s | 0.000729s | byte equality observed |
| value.test | 10 | 0.001689s | 0.001574s | 0.001962s | native test oracle; output varies |
| value_from.test | 10 | 0.000890s | 0.000880s | 0.000875s | byte equality observed |
| value_ref.test | 10 | 0.000803s | 0.000781s | 0.000782s | byte equality observed |
| value_stack.test | 10 | 0.000783s | 0.000787s | 0.000773s | byte equality observed |
| value_to.test | 10 | 0.001418s | 0.001428s | 0.001412s | byte equality observed |
| visit.test | 10 | 0.000781s | 0.000775s | 0.000755s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45739944580).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
