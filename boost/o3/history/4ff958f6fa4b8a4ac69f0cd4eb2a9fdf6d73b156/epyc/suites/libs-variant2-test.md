# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.161603 | 0.389349 | 0.597048 | 0.001994 | 0.000955 | 0.002003 |
| variant_size.test | RUN | 0.289318 | 0.868786 | 1.100878 | 0.001943 | 0.002138 | 0.002082 |
| variant_alternative.test | RUN | 0.369772 | 2.693827 | 1.806497 | 0.002115 | 0.002118 | 0.001955 |
| variant_holds_alternative.test | RUN | 0.258299 | 0.657683 | 1.075465 | 0.001890 | 0.002146 | 0.002245 |
| variant_holds_alternative_cx.test | COMPILE | 0.169255 | 0.408904 | 0.612816 | — | — | — |
| variant_get_by_index.test | RUN | 0.426803 | 2.910031 | 2.146042 | 0.002256 | 0.002146 | 0.002352 |
| variant_get_by_index_cx.test | COMPILE | 0.172060 | 0.414642 | 0.669406 | — | — | — |
| variant_get_by_type.test | RUN | 0.426957 | 3.066758 | 2.313879 | 0.002143 | 0.002207 | 0.001946 |
| variant_get_by_type_cx.test | COMPILE | 0.162491 | 0.346237 | 0.559433 | — | — | — |
| variant_default_construct.test | RUN | 0.405812 | 2.308249 | 1.880472 | 0.001996 | 0.001950 | 0.001736 |
| variant_default_construct_cx.test | COMPILE | 0.182732 | 0.373669 | 0.654359 | — | — | — |
| variant_copy_construct.test | RUN | 0.621805 | 3.808638 | 3.335526 | 0.001910 | 0.002001 | 0.001934 |
| variant_copy_construct_cx.test | COMPILE | 0.196009 | 0.440630 | 0.737176 | — | — | — |
| variant_move_construct.test | RUN | 0.582120 | 3.324208 | 3.083212 | 0.001944 | 0.002000 | 0.001708 |
| variant_move_construct_cx.test | COMPILE | 0.164262 | 0.374918 | 0.564703 | — | — | — |
| variant_value_construct.test | RUN | 0.326336 | 0.866522 | 1.367192 | 0.001853 | 0.002177 | 0.002108 |
| variant_value_construct_cx.test | COMPILE | 0.175648 | 0.404890 | 0.654978 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.326400 | 0.865078 | 1.371969 | 0.001960 | 0.002093 | 0.002044 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.174693 | 0.404197 | 0.658745 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.327610 | 0.860485 | 1.357635 | 0.001810 | 0.001926 | 0.002080 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.171950 | 0.402625 | 0.593525 | — | — | — |
| variant_copy_assign.test | RUN | 0.435685 | 2.643387 | 2.089421 | 0.001897 | 0.002281 | 0.001946 |
| variant_copy_assign_cx.test | COMPILE | 0.152818 | 0.347386 | 0.543651 | — | — | — |
| variant_move_assign.test | RUN | 0.405966 | 2.631573 | 2.092912 | 0.001851 | 0.001778 | 0.001867 |
| variant_move_assign_cx.test | COMPILE | 0.156201 | 0.345630 | 0.559065 | — | — | — |
| variant_value_assign.test | RUN | 0.333525 | 0.965936 | 1.498812 | 0.001953 | 0.002156 | 0.001859 |
| variant_value_assign_cx.test | COMPILE | 0.163456 | 0.343093 | 0.508859 | — | — | — |
| variant_emplace_index.test | RUN | 0.368064 | 1.131911 | 1.633914 | 0.001774 | 0.002240 | 0.002056 |
| variant_emplace_index_cx.test | COMPILE | 0.155280 | 0.340871 | 0.527928 | — | — | — |
| variant_emplace_type.test | RUN | 0.333633 | 0.968264 | 1.477712 | 0.002028 | 0.002153 | 0.002058 |
| variant_emplace_type_cx.test | COMPILE | 0.148888 | 0.327364 | 0.571564 | — | — | — |
| variant_swap.test | RUN | 0.333895 | 1.174123 | 1.596068 | 0.001966 | 0.002068 | 0.001792 |
| variant_eq_ne.test | RUN | 0.277949 | 0.703857 | 1.086348 | 0.001771 | 0.002103 | 0.002012 |
| variant_eq_ne_cx.test | COMPILE | 0.153216 | 0.365045 | 0.527762 | — | — | — |
| variant_lt_gt.test | RUN | 0.289586 | 0.805583 | 1.223578 | 0.001814 | 0.002130 | 0.002144 |
| variant_lt_gt_cx.test | COMPILE | 0.157931 | 0.341999 | 0.532371 | — | — | — |
| variant_destroy.test | RUN | 0.292714 | 0.824228 | 1.202071 | 0.001934 | 0.002278 | 0.002048 |
| variant_visit.test | RUN | 1.830936 | 6.164929 | 18.492714 | 0.001991 | 0.002116 | 0.002137 |
| variant_convert_construct.test | RUN | 0.365998 | 1.061360 | 1.730535 | 0.001954 | 0.002152 | 0.002166 |
| variant_subset.test | RUN | 0.391288 | 1.141831 | 1.742358 | 0.002160 | 0.002350 | 0.002142 |
| variant_valueless.test | RUN | 0.281849 | 0.778588 | 1.223280 | 0.002044 | 0.002230 | 0.001980 |
| variant_copy_construct_throw.test | RUN | 0.226667 | 0.540727 | 0.873186 | 0.001869 | 0.001818 | 0.002116 |
| variant_move_construct_throw.test | RUN | 0.221655 | 0.578754 | 0.819751 | 0.002050 | 0.001903 | 0.001519 |
| variant_convert_construct_throw.test | RUN | 0.226402 | 0.609096 | 0.931561 | 0.001920 | 0.002016 | 0.002088 |
| variant_copy_assign_throw.test | RUN | 0.214930 | 0.537341 | 0.801113 | 0.001733 | 0.002269 | 0.002269 |
| variant_move_assign_throw.test | RUN | 0.213721 | 0.532309 | 0.815960 | 0.002075 | 0.002073 | 0.002052 |
| variant_get_by_index_nx.test | RUN | 0.501162 | 2.526170 | 2.125406 | 0.002194 | 0.002082 | 0.002081 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.185396 | 0.387529 | 0.645405 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.496049 | 2.838993 | 2.280920 | 0.002008 | 0.002082 | 0.002210 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.151471 | 0.352858 | 0.564601 | — | — | — |
| variant_subset_nx.test | RUN | 0.399071 | 1.146327 | 1.795034 | 0.001825 | 0.002065 | 0.002172 |
| variant_hash.test | RUN | 0.374530 | 1.271192 | 1.681363 | 0.001988 | 0.002240 | 0.002160 |
| variant_trivial.test | RUN | 2.276204 | 6.949628 | 12.057482 | 0.002033 | 0.002260 | 0.001939 |
| variant_special.test | RUN | 2.180669 | 7.425221 | 12.161504 | 0.002101 | 0.002216 | 0.002222 |
| variant_visit_derived.test | RUN | 0.290317 | 0.705219 | 1.211834 | 0.002159 | 0.002160 | 0.002217 |
| variant_many_types.test | RUN | 2.370070 | 9.873098 | 16.622070 | 0.001558 | 0.002198 | 0.002132 |
| variant_visit_r.test | RUN | 1.020200 | 3.076359 | 6.023133 | 0.002124 | 0.002010 | 0.001950 |
| variant_derived_construct.test | COMPILE | 0.157686 | 0.355509 | 0.542385 | — | — | — |
| variant_visit_by_index.test | RUN | 0.356611 | 0.886543 | 1.565439 | 0.001795 | 0.001890 | 0.001633 |
| variant_ostream_insert.test | RUN | 0.253712 | 0.776814 | 1.071272 | 0.001835 | 0.002117 | 0.001840 |
| is_output_streamable.test | RUN | 0.315214 | 1.537794 | 1.472062 | 0.001870 | 0.002172 | 0.002118 |
| variant_json_value_from.test | RUN | 0.484541 | 1.169533 | 1.868304 | 0.002290 | 0.002165 | 0.002070 |
| variant_json_value_to.test | RUN | 0.584868 | 1.605658 | 2.491874 | 0.002299 | 0.002242 | 0.002115 |
| variant_uses_double_storage.test | COMPILE | 0.167214 | 0.360517 | 0.655536 | — | — | — |
| variant_derived_construct2.test | RUN | 0.232989 | 0.593355 | 0.971446 | 0.001776 | 0.002092 | 0.001992 |
| variant_visit_cx.test | COMPILE | 0.156522 | 0.353793 | 0.555477 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.156640 | 0.363528 | 0.496219 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.155654 | 0.348047 | 0.568008 | — | — | — |
| variant_index_type_126.test | RUN | 1.405013 | 3.266324 | 7.765551 | 0.001781 | 0.001900 | 0.001895 |
| variant_index_type_127.test | RUN | 1.364656 | 3.294498 | 7.856874 | 0.001922 | 0.002125 | 0.002050 |
| variant_index_type_128.test | RUN | 1.382584 | 3.410860 | 7.968036 | 0.001800 | 0.002100 | 0.001850 |
| variant_index_type_129.test | RUN | 1.422461 | 3.359524 | 7.924857 | 0.002008 | 0.002160 | 0.001604 |
| variant_index_type_254.test | RUN | 4.761905 | 11.847140 | 22.618512 | 0.001634 | 0.002014 | 0.002200 |
| variant_index_type_255.test | RUN | 4.636555 | 11.710479 | 22.661923 | 0.001998 | 0.002007 | 0.001738 |
| variant_index_type_256.test | RUN | 4.831188 | 12.190545 | 22.741471 | 0.001882 | 0.001840 | 0.001968 |
| variant_index_type_257.test | RUN | 4.743873 | 12.266781 | 23.438551 | 0.001638 | 0.002147 | 0.002137 |
| variant_default_construct_cx_2.test | COMPILE | 0.141146 | 0.335900 | 0.540005 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.154064 | 0.345771 | 0.585089 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.153958 | 0.339920 | 0.540593 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.152164 | 0.348699 | 0.550661 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.154378 | 0.338327 | 0.503614 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.147065 | 0.324252 | 0.440627 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.108184 | 0.305516 | 0.430277 | — | — | — |
| variant_issue_55.test | RUN | 0.185398 | 0.553455 | 0.726891 | 0.001626 | 0.001564 | 0.001444 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.994× | 0.993×, 0.995× | 0.998× |
| clang | 0.997× | 1.007×, 0.988× | 0.994× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45850603565).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.001473s | 0.001490s | 0.001483s | byte equality observed |
| quick.test | 10 | 0.001469s | 0.000647s | 0.001449s | byte equality observed |
| variant_alternative.test | 10 | 0.001491s | 0.001503s | 0.001494s | byte equality observed |
| variant_convert_construct.test | 10 | 0.001478s | 0.001521s | 0.001505s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.001558s | 0.001536s | 0.001554s | byte equality observed |
| variant_copy_assign.test | 9 | 0.001493s | 0.001520s | 0.001492s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.001527s | 0.001536s | 0.001529s | byte equality observed |
| variant_copy_construct.test | 10 | 0.001532s | 0.001537s | 0.001457s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.001541s | 0.001506s | 0.001527s | byte equality observed |
| variant_default_construct.test | 10 | 0.001496s | 0.001491s | 0.001455s | byte equality observed |
| variant_derived_construct2.test | 9 | 0.001511s | 0.001516s | 0.001496s | byte equality observed |
| variant_destroy.test | 10 | 0.001505s | 0.001537s | 0.001487s | byte equality observed |
| variant_emplace_index.test | 10 | 0.001497s | 0.001515s | 0.001503s | byte equality observed |
| variant_emplace_type.test | 10 | 0.001522s | 0.001508s | 0.001487s | byte equality observed |
| variant_eq_ne.test | 10 | 0.001486s | 0.001464s | 0.001517s | byte equality observed |
| variant_get_by_index.test | 10 | 0.001603s | 0.001596s | 0.001587s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.001497s | 0.001537s | 0.001503s | byte equality observed |
| variant_get_by_type.test | 10 | 0.001585s | 0.001597s | 0.001588s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.001527s | 0.001509s | 0.001527s | byte equality observed |
| variant_hash.test | 10 | 0.001479s | 0.001504s | 0.001515s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.001479s | 0.001507s | 0.001529s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.001509s | 0.001519s | 0.001516s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.001488s | 0.001506s | 0.001487s | byte equality observed |
| variant_index_type_126.test | 10 | 0.001507s | 0.001471s | 0.001509s | byte equality observed |
| variant_index_type_127.test | 10 | 0.001491s | 0.001498s | 0.001523s | byte equality observed |
| variant_index_type_128.test | 10 | 0.001478s | 0.001501s | 0.001507s | byte equality observed |
| variant_index_type_129.test | 10 | 0.001503s | 0.001487s | 0.001512s | byte equality observed |
| variant_index_type_254.test | 10 | 0.001511s | 0.001499s | 0.001486s | byte equality observed |
| variant_index_type_255.test | 10 | 0.001500s | 0.001520s | 0.001488s | byte equality observed |
| variant_index_type_256.test | 10 | 0.001495s | 0.001474s | 0.001461s | byte equality observed |
| variant_index_type_257.test | 10 | 0.001490s | 0.001480s | 0.001481s | byte equality observed |
| variant_issue_55.test | 10 | 0.001497s | 0.001473s | 0.001519s | byte equality observed |
| variant_json_value_from.test | 10 | 0.001535s | 0.001555s | 0.001507s | byte equality observed |
| variant_json_value_to.test | 10 | 0.001543s | 0.001558s | 0.001555s | byte equality observed |
| variant_lt_gt.test | 10 | 0.001503s | 0.001466s | 0.001503s | byte equality observed |
| variant_many_types.test | 10 | 0.001559s | 0.001552s | 0.001562s | byte equality observed |
| variant_move_assign.test | 9 | 0.001507s | 0.001527s | 0.001491s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.001525s | 0.001550s | 0.001539s | byte equality observed |
| variant_move_construct.test | 10 | 0.001559s | 0.001547s | 0.001505s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.001568s | 0.001539s | 0.001534s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.001537s | 0.001487s | 0.001535s | byte equality observed |
| variant_size.test | 10 | 0.001467s | 0.001527s | 0.001502s | byte equality observed |
| variant_special.test | 10 | 0.001562s | 0.001571s | 0.001570s | byte equality observed |
| variant_subset.test | 10 | 0.001533s | 0.001589s | 0.001546s | byte equality observed |
| variant_subset_nx.test | 10 | 0.001494s | 0.001508s | 0.001492s | byte equality observed |
| variant_swap.test | 10 | 0.001486s | 0.001536s | 0.001495s | byte equality observed |
| variant_trivial.test | 10 | 0.001560s | 0.001550s | 0.001528s | byte equality observed |
| variant_value_assign.test | 10 | 0.001501s | 0.001516s | 0.001484s | byte equality observed |
| variant_value_construct.test | 10 | 0.001496s | 0.001509s | 0.001466s | byte equality observed |
| variant_valueless.test | 10 | 0.001595s | 0.001537s | 0.001596s | byte equality observed |
| variant_visit.test | 10 | 0.001509s | 0.001501s | 0.001518s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.001482s | 0.001487s | 0.001468s | byte equality observed |
| variant_visit_derived.test | 10 | 0.001481s | 0.001486s | 0.001527s | byte equality observed |
| variant_visit_r.test | 10 | 0.001498s | 0.001496s | 0.001493s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45850603565).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
