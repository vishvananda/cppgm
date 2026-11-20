# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.779979 | 4.260220 | 3.767387 | 0.002259 | 0.001986 | 0.002022 |
| basic_parser.test | RUN | 4.874340 | 103.578561 | 66.046482 | 0.405518 | 0.181436 | 0.424740 |
| conversion.test | RUN | 0.529697 | 1.576246 | 1.877859 | 0.001387 | 0.001279 | 0.001277 |
| doc_background.test | RUN | 0.525836 | 1.529007 | 1.832565 | 0.001495 | 0.001260 | 0.001101 |
| doc_forward_conversion.test | RUN | 0.555987 | 1.834511 | 2.050735 | 0.001590 | 0.001355 | 0.001230 |
| doc_parsing.test | RUN | 0.584288 | 1.701872 | 1.886601 | 0.001446 | 0.001377 | 0.001403 |
| doc_quick_look.test | RUN | 0.732863 | 2.063654 | 2.526272 | 0.001323 | 0.001148 | 0.001323 |
| doc_serializing.test | RUN | 0.511043 | 1.506490 | 1.699347 | 0.001338 | 0.001256 | 0.001349 |
| doc_storage_ptr.test | RUN | 0.512925 | 1.557595 | 1.761135 | 0.001246 | 0.001115 | 0.001188 |
| doc_uses_allocator.test | RUN | 0.504795 | 1.530785 | 1.754111 | 0.001358 | 0.001236 | 0.001328 |
| doc_using_numbers.test | RUN | 0.579246 | 1.589178 | 1.903481 | 0.001569 | 0.001363 | 0.001420 |
| double.test | RUN | 0.608121 | 2.704651 | 2.181054 | 1.233115 | 1.210909 | 1.289913 |
| error.test | RUN | 0.438872 | 1.540825 | 1.509128 | 0.001272 | 0.001426 | 0.001455 |
| fwd.test | RUN | 0.489606 | 1.486798 | 1.852839 | 0.001403 | 0.001249 | 0.001267 |
| json.test | RUN | 0.512637 | 1.665259 | 1.995770 | 0.001290 | 0.001350 | 0.001418 |
| kind.test | RUN | 0.372845 | 1.406886 | 1.405958 | 0.001486 | 0.001420 | 0.001660 |
| memory_resource.test | RUN | 0.530569 | 1.824933 | 1.946341 | 0.001508 | 0.001235 | 0.001438 |
| monotonic_resource.test | RUN | 0.495206 | 1.706934 | 1.799894 | 0.001987 | 0.001811 | 0.001896 |
| natvis.test | RUN | 0.514608 | 1.647957 | 1.779606 | 0.001510 | 0.001269 | 0.001566 |
| null_resource.test | RUN | 0.429960 | 1.366180 | 1.456221 | 0.001367 | 0.001332 | 0.001330 |
| object.test | RUN | 0.917601 | 5.047026 | 4.307937 | 0.005220 | 0.004368 | 0.006210 |
| parse.test | RUN | 0.563981 | 2.515118 | 2.121847 | 0.001816 | 0.001762 | 0.001916 |
| parser.test | RUN | 0.541973 | 2.135053 | 1.971719 | 0.001430 | 0.001562 | 0.001654 |
| pilfer.test | RUN | 0.285433 | 0.956363 | 0.976433 | 0.001355 | 0.001344 | 0.001159 |
| pointer.test | RUN | 0.639701 | 2.887747 | 2.579012 | 0.001632 | 0.001496 | 0.001677 |
| result_for.test | RUN | 0.517289 | 1.705742 | 1.877276 | 0.001233 | 0.001211 | 0.001432 |
| serialize.test | RUN | 0.528217 | 1.776404 | 1.863050 | 0.001344 | 0.001306 | 0.001554 |
| serializer.test | RUN | 0.882799 | 5.178005 | 4.204038 | 0.002196 | 0.002182 | 0.002206 |
| snippets.test | RUN | 1.392083 | 7.579987 | 6.484841 | 0.001696 | 0.001469 | 0.001688 |
| static_resource.test | RUN | 0.505428 | 1.640000 | 1.736349 | 0.001402 | 0.001422 | 0.001502 |
| storage_ptr.test | RUN | 0.522195 | 1.699808 | 1.890370 | 0.001366 | 0.001327 | 0.001442 |
| stream_parser.test | RUN | 0.657276 | 3.213015 | 2.713812 | 0.069150 | 0.070081 | 0.072220 |
| string.test | RUN | 1.259198 | 8.110219 | 6.936488 | 0.002245 | 0.002018 | 0.002324 |
| string_view.test | RUN | 0.307097 | 1.029194 | 1.005321 | 0.001199 | 0.001359 | 0.001427 |
| value.test | RUN | 1.182361 | 8.946142 | 5.746058 | 0.002858 | 0.002545 | 0.003328 |
| value_from.test | RUN | 1.089901 | 5.156403 | 4.974276 | 0.001512 | 0.001613 | 0.001655 |
| value_stack.test | RUN | 0.494933 | 1.543789 | 1.745741 | 0.001376 | 0.001445 | 0.001350 |
| value_to.test | RUN | 2.610936 | 17.073614 | 12.859056 | 0.002691 | 0.002118 | 0.002710 |
| value_ref.test | RUN | 0.572156 | 2.284369 | 2.180921 | 0.001315 | 0.001278 | 0.001499 |
| utf8.test | RUN | 0.425233 | 1.456096 | 1.438616 | 0.001317 | 0.001272 | 0.001343 |
| visit.test | RUN | 0.573715 | 2.354154 | 2.048556 | 0.001363 | 0.001292 | 0.001353 |
| d2s_intrinsics_test.test | RUN | 0.420197 | 1.373267 | 1.433665 | 0.001460 | 0.001249 | 0.001400 |
| d2s_table_test.test | RUN | 0.439486 | 1.514588 | 1.519248 | 0.001379 | 0.001316 | 0.001380 |
| d2s_test.test | RUN | 0.457956 | 1.847403 | 1.685967 | 0.001559 | 0.001316 | 0.001456 |
| parse_into.test | RUN | 17.506069 | 134.500583 | 85.409151 | 0.002724 | 0.002252 | 0.002495 |
| limits.test | RUN | 1.898077 | 11.811628 | 8.203310 | 0.001767 | 0.001568 | 0.001663 |
| header_only.test | RUN | 1.301322 | 9.085888 | 6.133447 | 0.001154 | 0.001336 | 0.001312 |
| no_exceptions.test | RUN | 1.833172 | 10.091572 | 7.787239 | 0.001389 | 0.001281 | 0.001514 |
| intrusive_macros.test | RUN | 1.528411 | 9.884867 | 6.735354 | 0.001214 | 0.001252 | 0.001429 |
| _gdb-printers.test | RUN | 0.233710 | 0.669173 | 0.765359 | 0.155692 | 0.249875 | 0.178022 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.895× | 0.888×, 0.902× | 1.002× |
| clang | 1.147× | 1.138×, 1.156× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44656576225).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 10 | 0.001394s | 0.001274s | 0.001332s | byte equality observed |
| basic_parser.test | 1 | 0.287211s | 0.186149s | 0.432099s | native test oracle; output varies |
| conversion.test | 10 | 0.000759s | 0.000765s | 0.000746s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000758s | 0.000770s | 0.000728s | byte equality observed |
| d2s_table_test.test | 10 | 0.000776s | 0.000772s | 0.000759s | byte equality observed |
| d2s_test.test | 10 | 0.000824s | 0.000813s | 0.000775s | byte equality observed |
| doc_background.test | 10 | 0.000788s | 0.000767s | 0.000748s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.000807s | 0.000793s | 0.000777s | byte equality observed |
| doc_parsing.test | 10 | 0.000819s | 0.000814s | 0.000786s | byte equality observed |
| doc_quick_look.test | 10 | 0.000785s | 0.000783s | 0.000748s | byte equality observed |
| doc_serializing.test | 10 | 0.000797s | 0.000765s | 0.000728s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.000786s | 0.000787s | 0.000750s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.000786s | 0.000761s | 0.000747s | byte equality observed |
| doc_using_numbers.test | 10 | 0.000788s | 0.000772s | 0.000735s | byte equality observed |
| double.test | 1 | 0.834975s | 0.808162s | 0.871998s | native test oracle; output varies |
| error.test | 10 | 0.000894s | 0.000884s | 0.000860s | byte equality observed |
| fwd.test | 10 | 0.000769s | 0.000779s | 0.000763s | byte equality observed |
| header_only.test | 10 | 0.000773s | 0.000763s | 0.000759s | byte equality observed |
| intrusive_macros.test | 10 | 0.000804s | 0.000796s | 0.000784s | byte equality observed |
| json.test | 10 | 0.000790s | 0.000779s | 0.000767s | byte equality observed |
| kind.test | 10 | 0.000812s | 0.000800s | 0.000772s | byte equality observed |
| limits.test | 10 | 0.000954s | 0.000930s | 0.000915s | byte equality observed |
| memory_resource.test | 10 | 0.000792s | 0.000781s | 0.000765s | byte equality observed |
| monotonic_resource.test | 10 | 0.001172s | 0.001158s | 0.001147s | byte equality observed |
| natvis.test | 10 | 0.000809s | 0.000804s | 0.000787s | byte equality observed |
| no_exceptions.test | 10 | 0.000793s | 0.000780s | 0.000783s | byte equality observed |
| null_resource.test | 10 | 0.000819s | 0.000815s | 0.000800s | byte equality observed |
| object.test | 6 | 0.003398s | 0.002854s | 0.003311s | native test oracle; output varies |
| parse.test | 10 | 0.001134s | 0.001126s | 0.001097s | byte equality observed |
| parse_into.test | 8 | 0.001960s | 0.001805s | 0.001746s | native test oracle; output varies |
| parser.test | 10 | 0.000897s | 0.000871s | 0.000861s | byte equality observed |
| pilfer.test | 10 | 0.000771s | 0.000752s | 0.000739s | byte equality observed |
| pointer.test | 10 | 0.000940s | 0.000918s | 0.000901s | byte equality observed |
| result_for.test | 10 | 0.000776s | 0.000771s | 0.000748s | byte equality observed |
| serialize.test | 10 | 0.000821s | 0.000820s | 0.000783s | byte equality observed |
| serializer.test | 10 | 0.001384s | 0.001385s | 0.001349s | byte equality observed |
| snippets.test | 10 | 0.000946s | 0.000922s | 0.000904s | byte equality observed |
| static_resource.test | 10 | 0.000847s | 0.000827s | 0.000811s | byte equality observed |
| storage_ptr.test | 10 | 0.000820s | 0.000814s | 0.000789s | byte equality observed |
| stream_parser.test | 1 | 0.042963s | 0.040105s | 0.043166s | native test oracle; output varies |
| string.test | 10 | 0.001406s | 0.001239s | 0.001344s | byte equality observed |
| string_view.test | 10 | 0.000774s | 0.000774s | 0.000740s | byte equality observed |
| utf8.test | 10 | 0.000772s | 0.000766s | 0.000752s | byte equality observed |
| value.test | 9 | 0.001729s | 0.001610s | 0.001990s | native test oracle; output varies |
| value_from.test | 10 | 0.000920s | 0.000908s | 0.000895s | byte equality observed |
| value_ref.test | 10 | 0.000821s | 0.000830s | 0.000800s | byte equality observed |
| value_stack.test | 10 | 0.000806s | 0.000799s | 0.000765s | byte equality observed |
| value_to.test | 9 | 0.001457s | 0.001463s | 0.001431s | native test oracle; output varies |
| visit.test | 10 | 0.000803s | 0.000796s | 0.000774s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44656576225).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
