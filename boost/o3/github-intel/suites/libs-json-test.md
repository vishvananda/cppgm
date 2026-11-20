# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.752322 | 4.422628 | 3.715187 | 0.001948 | 0.001885 | 0.002046 |
| basic_parser.test | RUN | 4.827162 | 110.503586 | 62.260900 | 0.408895 | 0.186004 | 0.423862 |
| conversion.test | RUN | 0.426814 | 1.600302 | 1.805886 | 0.001203 | 0.001372 | 0.001152 |
| doc_background.test | RUN | 0.501682 | 1.615210 | 1.772146 | 0.001270 | 0.001359 | 0.001200 |
| doc_forward_conversion.test | RUN | 0.535185 | 1.880552 | 2.010999 | 0.001516 | 0.001349 | 0.001233 |
| doc_parsing.test | RUN | 0.531756 | 1.766198 | 1.838847 | 0.001275 | 0.001349 | 0.001357 |
| doc_quick_look.test | RUN | 0.714860 | 2.090746 | 2.489551 | 0.001318 | 0.001375 | 0.001158 |
| doc_serializing.test | RUN | 0.479425 | 1.523068 | 1.698707 | 0.001414 | 0.001349 | 0.001185 |
| doc_storage_ptr.test | RUN | 0.483682 | 1.579940 | 1.726320 | 0.001336 | 0.001286 | 0.001215 |
| doc_uses_allocator.test | RUN | 0.493578 | 1.554513 | 1.707266 | 0.001319 | 0.001295 | 0.001254 |
| doc_using_numbers.test | RUN | 0.555614 | 1.613895 | 1.854346 | 0.001210 | 0.001319 | 0.001373 |
| double.test | RUN | 0.576590 | 2.757482 | 2.314562 | 1.233615 | 1.201442 | 1.299995 |
| error.test | RUN | 0.422638 | 1.561340 | 1.315572 | 0.001139 | 0.001417 | 0.001118 |
| fwd.test | RUN | 0.466322 | 1.505095 | 1.711903 | 0.001078 | 0.001163 | 0.001256 |
| json.test | RUN | 0.505989 | 1.797329 | 1.988244 | 0.001092 | 0.001406 | 0.001280 |
| kind.test | RUN | 0.374463 | 1.393957 | 1.407622 | 0.001313 | 0.001342 | 0.001351 |
| memory_resource.test | RUN | 0.536050 | 1.893787 | 1.921444 | 0.001238 | 0.001569 | 0.001317 |
| monotonic_resource.test | RUN | 0.478099 | 1.771376 | 1.776994 | 0.001793 | 0.001952 | 0.002104 |
| natvis.test | RUN | 0.477193 | 1.669756 | 1.821409 | 0.001189 | 0.001318 | 0.001389 |
| null_resource.test | RUN | 0.418677 | 1.441232 | 1.428279 | 0.001271 | 0.001507 | 0.001466 |
| object.test | RUN | 0.894127 | 5.164469 | 4.253869 | 0.005007 | 0.004911 | 0.004734 |
| parse.test | RUN | 0.542474 | 2.577915 | 2.108901 | 0.001649 | 0.001876 | 0.001949 |
| parser.test | RUN | 0.521129 | 2.196254 | 1.986595 | 0.001332 | 0.001644 | 0.001275 |
| pilfer.test | RUN | 0.277251 | 0.972188 | 0.967310 | 0.001156 | 0.001224 | 0.001270 |
| pointer.test | RUN | 0.611791 | 2.985052 | 2.497499 | 0.001649 | 0.001744 | 0.001463 |
| result_for.test | RUN | 0.500431 | 1.753638 | 1.840638 | 0.001126 | 0.001395 | 0.001282 |
| serialize.test | RUN | 0.502197 | 1.819926 | 1.840102 | 0.001340 | 0.001463 | 0.001448 |
| serializer.test | RUN | 0.848039 | 5.261493 | 4.158798 | 0.002113 | 0.002356 | 0.002353 |
| snippets.test | RUN | 1.362268 | 7.738476 | 6.323314 | 0.001460 | 0.001904 | 0.001627 |
| static_resource.test | RUN | 0.486813 | 1.592673 | 1.735928 | 0.001207 | 0.001365 | 0.001369 |
| storage_ptr.test | RUN | 0.509719 | 1.765071 | 1.843296 | 0.001346 | 0.001467 | 0.001457 |
| stream_parser.test | RUN | 0.632249 | 3.324029 | 2.630224 | 0.070420 | 0.069192 | 0.072230 |
| string.test | RUN | 1.238558 | 8.402347 | 6.753635 | 0.002056 | 0.002278 | 0.002095 |
| string_view.test | RUN | 0.300576 | 1.100939 | 0.996745 | 0.001152 | 0.001433 | 0.001322 |
| value.test | RUN | 1.142066 | 8.539596 | 5.548117 | 0.002682 | 0.002875 | 0.003164 |
| value_from.test | RUN | 1.066695 | 5.640694 | 4.705341 | 0.001390 | 0.001618 | 0.001631 |
| value_stack.test | RUN | 0.483581 | 1.551577 | 1.696235 | 0.001405 | 0.001403 | 0.001326 |
| value_to.test | RUN | 2.547018 | 16.737130 | 12.387929 | 0.002314 | 0.002785 | 0.002318 |
| value_ref.test | RUN | 0.573227 | 2.305253 | 2.150295 | 0.001211 | 0.001634 | 0.001424 |
| utf8.test | RUN | 0.408465 | 1.459380 | 1.451434 | 0.001165 | 0.001436 | 0.001177 |
| visit.test | RUN | 0.559609 | 2.419612 | 2.038648 | 0.001278 | 0.001494 | 0.001432 |
| d2s_intrinsics_test.test | RUN | 0.405071 | 1.479584 | 1.411206 | 0.001326 | 0.001434 | 0.001379 |
| d2s_table_test.test | RUN | 0.425490 | 1.549967 | 1.476897 | 0.001269 | 0.001468 | 0.001364 |
| d2s_test.test | RUN | 0.449573 | 1.807285 | 1.730567 | 0.001321 | 0.001522 | 0.001307 |
| parse_into.test | RUN | 17.122339 | 138.811566 | 82.035005 | 0.002285 | 0.002612 | 0.002076 |
| limits.test | RUN | 1.884268 | 12.632461 | 7.921558 | 0.001564 | 0.002122 | 0.001689 |
| header_only.test | RUN | 1.253841 | 8.888587 | 6.014997 | 0.001214 | 0.001425 | 0.001309 |
| no_exceptions.test | RUN | 1.733746 | 10.298868 | 7.577959 | 0.001233 | 0.001449 | 0.001281 |
| intrusive_macros.test | RUN | 1.505716 | 10.059637 | 6.481417 | 0.000877 | 0.001515 | 0.001211 |
| _gdb-printers.test | RUN | 0.225673 | 0.690620 | 0.833133 | 0.153863 | 0.183856 | 0.168854 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.898× | 0.896×, 0.899× | 0.988× |
| clang | 1.141× | 1.138×, 1.144× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44774088589).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 9 | 0.001383s | 0.001213s | 0.001336s | byte equality observed |
| basic_parser.test | 1 | 0.285577s | 0.188103s | 0.427559s | native test oracle; output varies |
| conversion.test | 10 | 0.000754s | 0.000742s | 0.000756s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000747s | 0.000736s | 0.000750s | byte equality observed |
| d2s_table_test.test | 10 | 0.000763s | 0.000754s | 0.000753s | byte equality observed |
| d2s_test.test | 10 | 0.000804s | 0.000796s | 0.000783s | byte equality observed |
| doc_background.test | 10 | 0.000753s | 0.000738s | 0.000740s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.000786s | 0.000781s | 0.000777s | byte equality observed |
| doc_parsing.test | 10 | 0.000790s | 0.000786s | 0.000783s | byte equality observed |
| doc_quick_look.test | 10 | 0.000763s | 0.000752s | 0.000746s | byte equality observed |
| doc_serializing.test | 10 | 0.000776s | 0.000745s | 0.000765s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.000764s | 0.000756s | 0.000775s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.000766s | 0.000758s | 0.000748s | byte equality observed |
| doc_using_numbers.test | 10 | 0.000757s | 0.000737s | 0.000745s | byte equality observed |
| double.test | 1 | 0.831185s | 0.809194s | 0.857804s | native test oracle; output varies |
| error.test | 10 | 0.000827s | 0.000787s | 0.000864s | byte equality observed |
| fwd.test | 10 | 0.000753s | 0.000765s | 0.000769s | byte equality observed |
| header_only.test | 10 | 0.000743s | 0.000741s | 0.000742s | byte equality observed |
| intrusive_macros.test | 10 | 0.000779s | 0.000777s | 0.000770s | byte equality observed |
| json.test | 10 | 0.000771s | 0.000769s | 0.000780s | byte equality observed |
| kind.test | 10 | 0.000790s | 0.000785s | 0.000784s | byte equality observed |
| limits.test | 10 | 0.000934s | 0.000908s | 0.000916s | byte equality observed |
| memory_resource.test | 10 | 0.000790s | 0.000779s | 0.000766s | byte equality observed |
| monotonic_resource.test | 10 | 0.001159s | 0.001154s | 0.001143s | byte equality observed |
| natvis.test | 10 | 0.000791s | 0.000781s | 0.000794s | byte equality observed |
| no_exceptions.test | 10 | 0.000783s | 0.000767s | 0.000756s | byte equality observed |
| null_resource.test | 10 | 0.000805s | 0.000804s | 0.000790s | byte equality observed |
| object.test | 6 | 0.003367s | 0.002811s | 0.003281s | native test oracle; output varies |
| parse.test | 10 | 0.001095s | 0.001092s | 0.001094s | byte equality observed |
| parse_into.test | 8 | 0.001907s | 0.001826s | 0.001747s | native test oracle; output varies |
| parser.test | 10 | 0.000883s | 0.000855s | 0.000865s | byte equality observed |
| pilfer.test | 10 | 0.000756s | 0.000742s | 0.000761s | byte equality observed |
| pointer.test | 10 | 0.000920s | 0.000898s | 0.000911s | byte equality observed |
| result_for.test | 10 | 0.000767s | 0.000747s | 0.000740s | byte equality observed |
| serialize.test | 10 | 0.000796s | 0.000797s | 0.000795s | byte equality observed |
| serializer.test | 10 | 0.001356s | 0.001357s | 0.001355s | byte equality observed |
| snippets.test | 10 | 0.000920s | 0.000908s | 0.000915s | byte equality observed |
| static_resource.test | 10 | 0.000827s | 0.000814s | 0.000813s | byte equality observed |
| storage_ptr.test | 10 | 0.000800s | 0.000800s | 0.000794s | byte equality observed |
| stream_parser.test | 1 | 0.042720s | 0.039960s | 0.042935s | native test oracle; output varies |
| string.test | 10 | 0.001337s | 0.001159s | 0.001324s | byte equality observed |
| string_view.test | 10 | 0.000764s | 0.000760s | 0.000764s | byte equality observed |
| utf8.test | 10 | 0.000754s | 0.000740s | 0.000733s | byte equality observed |
| value.test | 10 | 0.001701s | 0.001589s | 0.001979s | native test oracle; output varies |
| value_from.test | 10 | 0.000900s | 0.000886s | 0.000896s | byte equality observed |
| value_ref.test | 10 | 0.000810s | 0.000799s | 0.000809s | byte equality observed |
| value_stack.test | 10 | 0.000786s | 0.000784s | 0.000786s | byte equality observed |
| value_to.test | 10 | 0.001435s | 0.001442s | 0.001427s | byte equality observed |
| visit.test | 10 | 0.000773s | 0.000789s | 0.000787s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44774088589).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
