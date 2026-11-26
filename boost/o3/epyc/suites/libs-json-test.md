# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 0.779287 | 4.288772 | 3.186133 | 0.002507 | 0.002774 | 0.002349 |
| basic_parser.test | RUN | 4.244258 | 115.930957 | 55.028291 | 0.387070 | 0.177898 | 0.488773 |
| conversion.test | RUN | 0.544916 | 1.524964 | 1.582934 | 0.001823 | 0.001874 | 0.001356 |
| doc_background.test | RUN | 0.557674 | 1.526682 | 1.529823 | 0.001760 | 0.001887 | 0.001642 |
| doc_forward_conversion.test | RUN | 0.582857 | 1.788294 | 1.723264 | 0.001952 | 0.001817 | 0.001558 |
| doc_parsing.test | RUN | 0.593726 | 1.701241 | 1.685333 | 0.001704 | 0.001761 | 0.001664 |
| doc_quick_look.test | RUN | 0.741946 | 2.056477 | 2.156818 | 0.001836 | 0.001703 | 0.001579 |
| doc_serializing.test | RUN | 0.511377 | 1.561723 | 1.506085 | 0.001940 | 0.001822 | 0.001463 |
| doc_storage_ptr.test | RUN | 0.541954 | 1.483668 | 1.590478 | 0.001926 | 0.001560 | 0.001861 |
| doc_uses_allocator.test | RUN | 0.533497 | 1.469317 | 1.532085 | 0.001860 | 0.002011 | 0.001560 |
| doc_using_numbers.test | RUN | 0.563889 | 1.601378 | 1.516436 | 0.001658 | 0.001911 | 0.001571 |
| double.test | RUN | 0.610902 | 2.561786 | 1.966381 | 1.021903 | 0.901323 | 1.089010 |
| error.test | RUN | 0.448945 | 1.535063 | 1.167126 | 0.001843 | 0.002016 | 0.001575 |
| fwd.test | RUN | 0.509915 | 1.499955 | 1.512028 | 0.001665 | 0.001800 | 0.001659 |
| json.test | RUN | 0.550799 | 1.780207 | 1.677943 | 0.001827 | 0.001844 | 0.001511 |
| kind.test | RUN | 0.461993 | 1.446835 | 1.266020 | 0.001888 | 0.001911 | 0.001680 |
| memory_resource.test | RUN | 0.655286 | 1.739579 | 1.612881 | 0.001634 | 0.002048 | 0.001696 |
| monotonic_resource.test | RUN | 0.528634 | 1.696732 | 1.506404 | 0.002364 | 0.002401 | 0.002142 |
| natvis.test | RUN | 0.529017 | 1.736571 | 1.646255 | 0.001994 | 0.001952 | 0.001679 |
| null_resource.test | RUN | 0.463364 | 1.526034 | 1.257950 | 0.001933 | 0.002190 | 0.001901 |
| object.test | RUN | 0.912161 | 4.968631 | 3.702071 | 0.005282 | 0.004966 | 0.005333 |
| parse.test | RUN | 0.589809 | 2.519834 | 1.890637 | 0.002385 | 0.002441 | 0.002334 |
| parser.test | RUN | 0.558919 | 2.121639 | 1.697260 | 0.002084 | 0.002054 | 0.001892 |
| pilfer.test | RUN | 0.290626 | 0.951189 | 0.800324 | 0.001624 | 0.001826 | 0.001533 |
| pointer.test | RUN | 0.647951 | 2.859126 | 2.218811 | 0.002048 | 0.002196 | 0.001799 |
| result_for.test | RUN | 0.550793 | 1.761885 | 1.548934 | 0.001482 | 0.001808 | 0.001728 |
| serialize.test | RUN | 0.529859 | 1.816329 | 1.674420 | 0.001725 | 0.001927 | 0.001367 |
| serializer.test | RUN | 0.871641 | 4.922184 | 3.887259 | 0.002858 | 0.002722 | 0.002576 |
| snippets.test | RUN | 1.370078 | 7.229033 | 5.552004 | 0.001862 | 0.001892 | 0.001799 |
| static_resource.test | RUN | 0.554241 | 1.622560 | 1.610691 | 0.002058 | 0.002018 | 0.001754 |
| storage_ptr.test | RUN | 0.560787 | 1.669561 | 1.550059 | 0.001869 | 0.001956 | 0.001758 |
| stream_parser.test | RUN | 0.678575 | 3.009510 | 2.304425 | 0.063491 | 0.077829 | 0.062811 |
| string.test | RUN | 1.174783 | 7.661977 | 5.841371 | 0.002889 | 0.002382 | 0.002393 |
| string_view.test | RUN | 0.332886 | 1.000111 | 1.007130 | 0.001872 | 0.001914 | 0.001894 |
| value.test | RUN | 1.123607 | 7.544611 | 5.077201 | 0.003367 | 0.002863 | 0.003417 |
| value_from.test | RUN | 1.064649 | 4.882464 | 4.223867 | 0.001963 | 0.001909 | 0.001981 |
| value_stack.test | RUN | 0.546055 | 1.484864 | 1.503678 | 0.001938 | 0.002055 | 0.001633 |
| value_to.test | RUN | 2.452535 | 14.934972 | 11.429393 | 0.003183 | 0.003120 | 0.002653 |
| value_ref.test | RUN | 0.594056 | 2.011952 | 1.848000 | 0.001965 | 0.001961 | 0.001767 |
| utf8.test | RUN | 0.444952 | 1.385253 | 1.259430 | 0.001799 | 0.001769 | 0.001621 |
| visit.test | RUN | 0.591113 | 1.919422 | 1.727392 | 0.001861 | 0.001862 | 0.001848 |
| d2s_intrinsics_test.test | RUN | 0.447174 | 1.162097 | 1.413663 | 0.001701 | 0.001610 | 0.001716 |
| d2s_table_test.test | RUN | 0.454078 | 1.313700 | 1.273711 | 0.001606 | 0.001967 | 0.001808 |
| d2s_test.test | RUN | 0.497952 | 1.684016 | 1.446319 | 0.002071 | 0.001837 | 0.001886 |
| parse_into.test | RUN | 15.042325 | 131.069134 | 68.866717 | 0.003317 | 0.003258 | 0.002894 |
| limits.test | RUN | 1.799085 | 11.073485 | 7.330740 | 0.002236 | 0.002270 | 0.002082 |
| header_only.test | RUN | 1.190572 | 8.290803 | 5.310095 | 0.001613 | 0.001978 | 0.001381 |
| no_exceptions.test | RUN | 1.724838 | 9.310785 | 6.739712 | 0.001892 | 0.001652 | 0.001658 |
| intrusive_macros.test | RUN | 1.383191 | 9.188701 | 5.969674 | 0.001710 | 0.001880 | 0.001728 |
| _gdb-printers.test | RUN | 0.240814 | 0.652141 | 0.699956 | 0.161063 | 0.187483 | 0.162051 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.892× | 0.901×, 0.883× | 0.982× |
| clang | 1.110×† | 1.151×, 1.069× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45790989032).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 7 | 0.001433s | 0.001336s | 0.001438s | native test oracle; output varies |
| basic_parser.test | 1 | 0.237437s | 0.153177s | 0.352137s | native test oracle; output varies |
| conversion.test | 10 | 0.000885s | 0.000865s | 0.000902s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.000869s | 0.000867s | 0.000902s | byte equality observed |
| d2s_table_test.test | 10 | 0.000909s | 0.000892s | 0.000929s | byte equality observed |
| d2s_test.test | 10 | 0.000950s | 0.000960s | 0.000945s | byte equality observed |
| doc_background.test | 10 | 0.000905s | 0.000865s | 0.000910s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.000914s | 0.000916s | 0.000942s | byte equality observed |
| doc_parsing.test | 10 | 0.000942s | 0.000920s | 0.000945s | byte equality observed |
| doc_quick_look.test | 10 | 0.000906s | 0.000897s | 0.000923s | byte equality observed |
| doc_serializing.test | 10 | 0.000891s | 0.000894s | 0.000898s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.000886s | 0.000915s | 0.000909s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.000882s | 0.000894s | 0.000896s | byte equality observed |
| doc_using_numbers.test | 10 | 0.000894s | 0.000887s | 0.000919s | byte equality observed |
| double.test | 1 | 0.680555s | 0.639117s | 0.717139s | native test oracle; output varies |
| error.test | 10 | 0.000954s | 0.000939s | 0.000978s | byte equality observed |
| fwd.test | 10 | 0.000900s | 0.000897s | 0.000878s | byte equality observed |
| header_only.test | 10 | 0.000868s | 0.000879s | 0.000870s | byte equality observed |
| intrusive_macros.test | 10 | 0.000915s | 0.000922s | 0.000941s | byte equality observed |
| json.test | 10 | 0.000904s | 0.000916s | 0.000937s | byte equality observed |
| kind.test | 10 | 0.000933s | 0.000943s | 0.000949s | byte equality observed |
| limits.test | 10 | 0.001087s | 0.001062s | 0.001097s | byte equality observed |
| memory_resource.test | 10 | 0.000911s | 0.000961s | 0.000932s | byte equality observed |
| monotonic_resource.test | 10 | 0.001264s | 0.001227s | 0.001233s | byte equality observed |
| natvis.test | 10 | 0.000916s | 0.000939s | 0.000932s | byte equality observed |
| no_exceptions.test | 10 | 0.000915s | 0.000925s | 0.000931s | byte equality observed |
| null_resource.test | 10 | 0.000923s | 0.000964s | 0.000961s | byte equality observed |
| object.test | 7 | 0.002947s | 0.002553s | 0.002914s | native test oracle; output varies |
| parse.test | 10 | 0.001242s | 0.001266s | 0.001256s | byte equality observed |
| parse_into.test | 7 | 0.002257s | 0.002213s | 0.002094s | native test oracle; output varies |
| parser.test | 10 | 0.001033s | 0.001028s | 0.001026s | byte equality observed |
| pilfer.test | 10 | 0.000887s | 0.000890s | 0.000919s | byte equality observed |
| pointer.test | 10 | 0.001075s | 0.001076s | 0.001086s | byte equality observed |
| result_for.test | 10 | 0.000895s | 0.000892s | 0.000928s | byte equality observed |
| serialize.test | 10 | 0.000940s | 0.000949s | 0.000960s | byte equality observed |
| serializer.test | 10 | 0.001445s | 0.001470s | 0.001489s | byte equality observed |
| snippets.test | 10 | 0.001096s | 0.001085s | 0.001106s | byte equality observed |
| static_resource.test | 10 | 0.000960s | 0.000967s | 0.000969s | byte equality observed |
| storage_ptr.test | 10 | 0.000951s | 0.000953s | 0.000959s | byte equality observed |
| stream_parser.test | 1 | 0.041930s | 0.047627s | 0.039025s | native test oracle; output varies |
| string.test | 10 | 0.001462s | 0.001285s | 0.001449s | byte equality observed |
| string_view.test | 10 | 0.000879s | 0.000889s | 0.000896s | byte equality observed |
| utf8.test | 10 | 0.000904s | 0.000918s | 0.000920s | byte equality observed |
| value.test | 10 | 0.001723s | 0.001596s | 0.001921s | native test oracle; output varies |
| value_from.test | 10 | 0.001053s | 0.001071s | 0.001059s | byte equality observed |
| value_ref.test | 10 | 0.000936s | 0.000958s | 0.000960s | byte equality observed |
| value_stack.test | 10 | 0.000932s | 0.000927s | 0.000937s | byte equality observed |
| value_to.test | 10 | 0.001534s | 0.001487s | 0.001564s | native test oracle; output varies |
| visit.test | 10 | 0.000926s | 0.000907s | 0.000961s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45790989032).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
