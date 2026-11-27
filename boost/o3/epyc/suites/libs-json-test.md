# libs/json/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| array.test | RUN | 1.278634 | 6.493210 | 6.746994 | 0.003268 | 0.003190 | 0.003569 |
| basic_parser.test | RUN | 6.812192 | 143.099815 | 101.034492 | 0.836108 | 0.299203 | 1.086030 |
| conversion.test | RUN | 0.927566 | 2.462002 | 3.584980 | 0.001975 | 0.002190 | 0.002080 |
| doc_background.test | RUN | 0.892795 | 2.520379 | 3.582865 | 0.002074 | 0.001930 | 0.002104 |
| doc_forward_conversion.test | RUN | 0.887332 | 2.901162 | 3.953896 | 0.002072 | 0.002185 | 0.002150 |
| doc_parsing.test | RUN | 0.924789 | 2.731566 | 3.538081 | 0.002136 | 0.002094 | 0.002187 |
| doc_quick_look.test | RUN | 1.202427 | 3.276408 | 4.915013 | 0.002008 | 0.002111 | 0.002203 |
| doc_serializing.test | RUN | 0.831443 | 2.385264 | 3.455553 | 0.002025 | 0.001798 | 0.002192 |
| doc_storage_ptr.test | RUN | 0.821602 | 2.416588 | 3.395756 | 0.001978 | 0.002032 | 0.002090 |
| doc_uses_allocator.test | RUN | 0.831279 | 2.298214 | 3.466599 | 0.002055 | 0.001985 | 0.002142 |
| doc_using_numbers.test | RUN | 0.912668 | 2.440981 | 3.698630 | 0.001974 | 0.002110 | 0.002030 |
| double.test | RUN | 0.976520 | 4.191181 | 4.496988 | 1.924785 | 1.995688 | 2.181331 |
| error.test | RUN | 0.691522 | 2.253680 | 2.905048 | 0.001972 | 0.002034 | 0.002080 |
| fwd.test | RUN | 0.814859 | 2.303658 | 3.070266 | 0.002005 | 0.001926 | 0.002151 |
| json.test | RUN | 0.893233 | 2.587286 | 3.804298 | 0.001878 | 0.002187 | 0.002140 |
| kind.test | RUN | 0.676316 | 2.129580 | 2.760797 | 0.001834 | 0.002044 | 0.002134 |
| memory_resource.test | RUN | 0.928983 | 2.887910 | 3.567273 | 0.001841 | 0.002132 | 0.002150 |
| monotonic_resource.test | RUN | 0.864517 | 2.562193 | 3.565856 | 0.003063 | 0.002679 | 0.003111 |
| natvis.test | RUN | 0.862365 | 2.588408 | 3.115685 | 0.002156 | 0.002290 | 0.001928 |
| null_resource.test | RUN | 0.707443 | 2.237132 | 2.862218 | 0.002154 | 0.002263 | 0.002256 |
| object.test | RUN | 1.444919 | 7.585349 | 7.374739 | 0.009270 | 0.007890 | 0.008670 |
| parse.test | RUN | 0.955061 | 3.864437 | 4.113178 | 0.002832 | 0.002907 | 0.003126 |
| parser.test | RUN | 0.887882 | 3.341913 | 3.907984 | 0.002302 | 0.002236 | 0.002212 |
| pilfer.test | RUN | 0.470418 | 1.482945 | 1.497644 | 0.001918 | 0.002099 | 0.001921 |
| pointer.test | RUN | 1.039230 | 4.481029 | 4.905148 | 0.002271 | 0.002464 | 0.002352 |
| result_for.test | RUN | 0.861656 | 2.722116 | 3.459884 | 0.002032 | 0.002191 | 0.001998 |
| serialize.test | RUN | 0.868800 | 2.772743 | 3.278269 | 0.002088 | 0.002371 | 0.002271 |
| serializer.test | RUN | 1.357750 | 7.984510 | 7.767548 | 0.003444 | 0.003145 | 0.003159 |
| snippets.test | RUN | 2.090294 | 10.750032 | 11.329387 | 0.002379 | 0.002512 | 0.002310 |
| static_resource.test | RUN | 0.870053 | 2.451616 | 3.371880 | 0.002264 | 0.002436 | 0.002314 |
| storage_ptr.test | RUN | 0.890407 | 2.543632 | 3.187482 | 0.002044 | 0.002058 | 0.002106 |
| stream_parser.test | RUN | 1.063899 | 4.714070 | 4.426650 | 0.127852 | 0.150583 | 0.128450 |
| string.test | RUN | 1.860889 | 10.813742 | 11.517818 | 0.003547 | 0.002874 | 0.003672 |
| string_view.test | RUN | 0.534324 | 1.643073 | 1.680482 | 0.002023 | 0.002227 | 0.001990 |
| value.test | RUN | 1.817721 | 12.751572 | 9.836922 | 0.004622 | 0.004026 | 0.004682 |
| value_from.test | RUN | 1.677931 | 7.211623 | 8.069367 | 0.002462 | 0.002520 | 0.002525 |
| value_stack.test | RUN | 0.832539 | 2.252277 | 3.255752 | 0.001907 | 0.002202 | 0.002316 |
| value_to.test | RUN | 3.724489 | 21.983773 | 21.813671 | 0.003880 | 0.003493 | 0.004046 |
| value_ref.test | RUN | 0.972653 | 3.531215 | 4.167331 | 0.002184 | 0.002156 | 0.002302 |
| utf8.test | RUN | 0.720689 | 2.262498 | 2.938254 | 0.002012 | 0.002050 | 0.001847 |
| visit.test | RUN | 0.965529 | 3.597650 | 3.732396 | 0.001925 | 0.002204 | 0.002122 |
| d2s_intrinsics_test.test | RUN | 0.706611 | 2.149707 | 2.676514 | 0.001980 | 0.001885 | 0.001800 |
| d2s_table_test.test | RUN | 0.717934 | 2.361483 | 2.683134 | 0.002094 | 0.002193 | 0.002287 |
| d2s_test.test | RUN | 0.745799 | 2.905285 | 3.014336 | 0.002167 | 0.002255 | 0.002259 |
| parse_into.test | RUN | 22.043251 | 182.165232 | 120.825162 | 0.003370 | 0.003306 | 0.003066 |
| limits.test | RUN | 2.809634 | 15.854609 | 14.593308 | 0.002598 | 0.002193 | 0.002604 |
| header_only.test | RUN | 1.913836 | 12.479584 | 9.101192 | 0.001787 | 0.002050 | 0.001837 |
| no_exceptions.test | RUN | 2.681791 | 14.524222 | 12.822593 | 0.002182 | 0.002155 | 0.002164 |
| intrusive_macros.test | RUN | 2.202504 | 13.418793 | 11.907233 | 0.002022 | 0.002310 | 0.002136 |
| _gdb-printers.test | RUN | 0.412708 | 1.041838 | 1.635326 | 0.234802 | 0.278502 | 0.259932 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.896× | 0.903×, 0.889× | 0.994× |
| clang | 1.084× | 1.088×, 1.081× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46045514956).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| array.test | 9 | 0.002104s | 0.001872s | 0.002042s | native test oracle; output varies |
| basic_parser.test | 1 | 0.479659s | 0.295629s | 0.657755s | native test oracle; output varies |
| conversion.test | 10 | 0.001160s | 0.001163s | 0.001190s | byte equality observed |
| d2s_intrinsics_test.test | 10 | 0.001159s | 0.001168s | 0.001174s | byte equality observed |
| d2s_table_test.test | 10 | 0.001201s | 0.001193s | 0.001196s | byte equality observed |
| d2s_test.test | 10 | 0.001233s | 0.001240s | 0.001249s | byte equality observed |
| doc_background.test | 10 | 0.001197s | 0.001168s | 0.001172s | byte equality observed |
| doc_forward_conversion.test | 10 | 0.001208s | 0.001215s | 0.001221s | byte equality observed |
| doc_parsing.test | 10 | 0.001223s | 0.001228s | 0.001219s | byte equality observed |
| doc_quick_look.test | 10 | 0.001193s | 0.001208s | 0.001187s | byte equality observed |
| doc_serializing.test | 10 | 0.001187s | 0.001176s | 0.001176s | byte equality observed |
| doc_storage_ptr.test | 10 | 0.001184s | 0.001180s | 0.001209s | byte equality observed |
| doc_uses_allocator.test | 10 | 0.001190s | 0.001165s | 0.001190s | byte equality observed |
| doc_using_numbers.test | 10 | 0.001185s | 0.001166s | 0.001168s | byte equality observed |
| double.test | 1 | 1.168832s | 1.180999s | 1.164313s | native test oracle; output varies |
| error.test | 10 | 0.001254s | 0.001252s | 0.001288s | byte equality observed |
| fwd.test | 10 | 0.001167s | 0.001186s | 0.001188s | byte equality observed |
| header_only.test | 10 | 0.001168s | 0.001157s | 0.001168s | byte equality observed |
| intrusive_macros.test | 8 | 0.001228s | 0.001217s | 0.001217s | byte equality observed |
| json.test | 10 | 0.001197s | 0.001197s | 0.001227s | byte equality observed |
| kind.test | 10 | 0.001205s | 0.001222s | 0.001227s | byte equality observed |
| limits.test | 10 | 0.001406s | 0.001412s | 0.001399s | byte equality observed |
| memory_resource.test | 10 | 0.001189s | 0.001195s | 0.001212s | byte equality observed |
| monotonic_resource.test | 10 | 0.001732s | 0.001545s | 0.001686s | byte equality observed |
| natvis.test | 10 | 0.001202s | 0.001231s | 0.001220s | byte equality observed |
| no_exceptions.test | 5 | 0.001202s | 0.001206s | 0.001221s | byte equality observed |
| null_resource.test | 10 | 0.001228s | 0.001224s | 0.001245s | byte equality observed |
| object.test | 4 | 0.004973s | 0.004050s | 0.004826s | native test oracle; output varies |
| parse.test | 8 | 0.001667s | 0.001650s | 0.001697s | byte equality observed |
| parse_into.test | 6 | 0.002665s | 0.002576s | 0.002473s | native test oracle; output varies |
| parser.test | 10 | 0.001361s | 0.001324s | 0.001355s | byte equality observed |
| pilfer.test | 10 | 0.001176s | 0.001166s | 0.001179s | byte equality observed |
| pointer.test | 10 | 0.001407s | 0.001379s | 0.001412s | byte equality observed |
| result_for.test | 10 | 0.001207s | 0.001175s | 0.001176s | byte equality observed |
| serialize.test | 10 | 0.001231s | 0.001237s | 0.001230s | byte equality observed |
| serializer.test | 9 | 0.001995s | 0.001968s | 0.001976s | byte equality observed |
| snippets.test | 10 | 0.001424s | 0.001369s | 0.001384s | byte equality observed |
| static_resource.test | 10 | 0.001279s | 0.001228s | 0.001262s | byte equality observed |
| storage_ptr.test | 10 | 0.001236s | 0.001224s | 0.001235s | byte equality observed |
| stream_parser.test | 1 | 0.080481s | 0.077635s | 0.057000s | native test oracle; output varies |
| string.test | 7 | 0.001995s | 0.001762s | 0.001993s | native test oracle; output varies |
| string_view.test | 10 | 0.001165s | 0.001164s | 0.001185s | byte equality observed |
| utf8.test | 10 | 0.001176s | 0.001158s | 0.001164s | byte equality observed |
| value.test | 6 | 0.002613s | 0.002354s | 0.002921s | byte equality observed |
| value_from.test | 10 | 0.001366s | 0.001357s | 0.001381s | byte equality observed |
| value_ref.test | 10 | 0.001233s | 0.001237s | 0.001242s | byte equality observed |
| value_stack.test | 10 | 0.001234s | 0.001221s | 0.001214s | byte equality observed |
| value_to.test | 9 | 0.002164s | 0.002123s | 0.002135s | native test oracle; output varies |
| visit.test | 10 | 0.001215s | 0.001221s | 0.001193s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46045514956).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
