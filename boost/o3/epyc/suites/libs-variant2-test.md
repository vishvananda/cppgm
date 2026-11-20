# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.165380 | 0.347763 | 0.570706 | 0.001800 | 0.000883 | 0.001838 |
| variant_size.test | RUN | 0.266910 | 0.839162 | 1.100295 | 0.002095 | 0.002162 | 0.002348 |
| variant_alternative.test | RUN | 0.350555 | 2.622320 | 1.700699 | 0.001854 | 0.002245 | 0.001994 |
| variant_holds_alternative.test | RUN | 0.260042 | 0.643957 | 1.116675 | 0.001742 | 0.001965 | 0.002274 |
| variant_holds_alternative_cx.test | COMPILE | 0.164918 | 0.379849 | 0.609881 | — | — | — |
| variant_get_by_index.test | RUN | 0.403712 | 2.886854 | 2.077293 | 0.002140 | 0.002194 | 0.002130 |
| variant_get_by_index_cx.test | COMPILE | 0.176859 | 0.420025 | 0.649345 | — | — | — |
| variant_get_by_type.test | RUN | 0.416878 | 3.052256 | 2.345705 | 0.002179 | 0.002191 | 0.002148 |
| variant_get_by_type_cx.test | COMPILE | 0.161802 | 0.346021 | 0.518449 | — | — | — |
| variant_default_construct.test | RUN | 0.401672 | 2.300680 | 1.823681 | 0.001876 | 0.002136 | 0.002208 |
| variant_default_construct_cx.test | COMPILE | 0.166597 | 0.370830 | 0.628077 | — | — | — |
| variant_copy_construct.test | RUN | 0.609696 | 3.819879 | 3.203577 | 0.001873 | 0.001747 | 0.002128 |
| variant_copy_construct_cx.test | COMPILE | 0.198723 | 0.442113 | 0.767445 | — | — | — |
| variant_move_construct.test | RUN | 0.574533 | 3.358818 | 3.012046 | 0.002180 | 0.001774 | 0.002045 |
| variant_move_construct_cx.test | COMPILE | 0.150407 | 0.366518 | 0.552987 | — | — | — |
| variant_value_construct.test | RUN | 0.310701 | 0.852382 | 1.353170 | 0.001682 | 0.002022 | 0.002150 |
| variant_value_construct_cx.test | COMPILE | 0.181513 | 0.400777 | 0.605222 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.322612 | 0.859526 | 1.317218 | 0.002088 | 0.002070 | 0.001769 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.169317 | 0.401473 | 0.628998 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.321135 | 0.871803 | 1.343406 | 0.002056 | 0.002034 | 0.002307 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.180459 | 0.403592 | 0.658225 | — | — | — |
| variant_copy_assign.test | RUN | 0.428635 | 2.666259 | 2.159817 | 0.001750 | 0.002170 | 0.002007 |
| variant_copy_assign_cx.test | COMPILE | 0.158986 | 0.343430 | 0.575191 | — | — | — |
| variant_move_assign.test | RUN | 0.421588 | 2.643314 | 2.014771 | 0.002088 | 0.002144 | 0.002018 |
| variant_move_assign_cx.test | COMPILE | 0.150268 | 0.354030 | 0.553779 | — | — | — |
| variant_value_assign.test | RUN | 0.326448 | 0.956974 | 1.471032 | 0.002048 | 0.001816 | 0.002314 |
| variant_value_assign_cx.test | COMPILE | 0.155822 | 0.339695 | 0.541246 | — | — | — |
| variant_emplace_index.test | RUN | 0.356771 | 1.139328 | 1.518115 | 0.002077 | 0.002168 | 0.002028 |
| variant_emplace_index_cx.test | COMPILE | 0.154986 | 0.341652 | 0.514243 | — | — | — |
| variant_emplace_type.test | RUN | 0.330948 | 0.954500 | 1.522529 | 0.002182 | 0.002304 | 0.002025 |
| variant_emplace_type_cx.test | COMPILE | 0.147413 | 0.331726 | 0.542635 | — | — | — |
| variant_swap.test | RUN | 0.344056 | 1.185804 | 1.569415 | 0.002116 | 0.001942 | 0.002416 |
| variant_eq_ne.test | RUN | 0.278047 | 0.747860 | 1.048331 | 0.001908 | 0.002056 | 0.002050 |
| variant_eq_ne_cx.test | COMPILE | 0.157333 | 0.333464 | 0.547873 | — | — | — |
| variant_lt_gt.test | RUN | 0.282634 | 0.824136 | 1.207841 | 0.002135 | 0.002134 | 0.002288 |
| variant_lt_gt_cx.test | COMPILE | 0.152055 | 0.341610 | 0.488527 | — | — | — |
| variant_destroy.test | RUN | 0.288265 | 0.809160 | 1.208694 | 0.002112 | 0.002159 | 0.001899 |
| variant_visit.test | RUN | 1.820739 | 6.202742 | 18.487474 | 0.002110 | 0.002006 | 0.002152 |
| variant_convert_construct.test | RUN | 0.367947 | 1.054514 | 1.639316 | 0.002152 | 0.002136 | 0.001928 |
| variant_subset.test | RUN | 0.379712 | 1.191153 | 1.782082 | 0.002088 | 0.002220 | 0.002370 |
| variant_valueless.test | RUN | 0.283767 | 0.736749 | 1.152566 | 0.002002 | 0.002095 | 0.001950 |
| variant_copy_construct_throw.test | RUN | 0.231877 | 0.559050 | 0.801865 | 0.002022 | 0.002322 | 0.002111 |
| variant_move_construct_throw.test | RUN | 0.224016 | 0.510274 | 0.844023 | 0.001908 | 0.002198 | 0.002218 |
| variant_convert_construct_throw.test | RUN | 0.228361 | 0.596586 | 0.941747 | 0.002022 | 0.002070 | 0.002488 |
| variant_copy_assign_throw.test | RUN | 0.219644 | 0.538667 | 0.794463 | 0.002058 | 0.002016 | 0.002029 |
| variant_move_assign_throw.test | RUN | 0.215341 | 0.565205 | 0.770449 | 0.002080 | 0.002280 | 0.002046 |
| variant_get_by_index_nx.test | RUN | 0.491903 | 2.489193 | 2.185721 | 0.002144 | 0.002112 | 0.002298 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.175858 | 0.406160 | 0.596482 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.505329 | 2.769308 | 2.199398 | 0.001998 | 0.002142 | 0.001991 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.151427 | 0.343063 | 0.543063 | — | — | — |
| variant_subset_nx.test | RUN | 0.410972 | 1.104351 | 1.724694 | 0.001906 | 0.001954 | 0.002052 |
| variant_hash.test | RUN | 0.390502 | 1.292754 | 1.720683 | 0.002130 | 0.002150 | 0.001903 |
| variant_trivial.test | RUN | 2.193921 | 7.030559 | 11.980295 | 0.002080 | 0.002354 | 0.001950 |
| variant_special.test | RUN | 2.188070 | 7.681868 | 11.980438 | 0.002331 | 0.002436 | 0.002070 |
| variant_visit_derived.test | RUN | 0.271132 | 0.696466 | 1.192012 | 0.002228 | 0.002137 | 0.002044 |
| variant_many_types.test | RUN | 2.282243 | 9.748879 | 16.839831 | 0.002178 | 0.002276 | 0.001818 |
| variant_visit_r.test | RUN | 1.050659 | 3.059574 | 6.051289 | 0.002032 | 0.002010 | 0.002162 |
| variant_derived_construct.test | COMPILE | 0.158174 | 0.327956 | 0.484321 | — | — | — |
| variant_visit_by_index.test | RUN | 0.345043 | 0.944644 | 1.524151 | 0.001840 | 0.001938 | 0.002154 |
| variant_ostream_insert.test | RUN | 0.251867 | 0.750425 | 1.064348 | 0.001990 | 0.002166 | 0.002080 |
| is_output_streamable.test | RUN | 0.305457 | 1.472213 | 1.397855 | 0.002070 | 0.001978 | 0.001917 |
| variant_json_value_from.test | RUN | 0.478112 | 1.196101 | 1.856387 | 0.002080 | 0.002246 | 0.001930 |
| variant_json_value_to.test | RUN | 0.575816 | 1.613344 | 2.637864 | 0.002146 | 0.002130 | 0.001958 |
| variant_uses_double_storage.test | COMPILE | 0.164921 | 0.367360 | 0.560010 | — | — | — |
| variant_derived_construct2.test | RUN | 0.222372 | 0.594344 | 0.868832 | 0.001774 | 0.002064 | 0.001449 |
| variant_visit_cx.test | COMPILE | 0.154263 | 0.357233 | 0.531930 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.149266 | 0.366848 | 0.524438 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.147850 | 0.340632 | 0.492440 | — | — | — |
| variant_index_type_126.test | RUN | 1.356964 | 3.412266 | 7.578214 | 0.002094 | 0.002310 | 0.001964 |
| variant_index_type_127.test | RUN | 1.355606 | 3.399256 | 7.747478 | 0.001994 | 0.002262 | 0.002104 |
| variant_index_type_128.test | RUN | 1.396251 | 3.524003 | 8.078022 | 0.001833 | 0.002136 | 0.002388 |
| variant_index_type_129.test | RUN | 1.386541 | 3.423138 | 7.900159 | 0.001958 | 0.001966 | 0.002035 |
| variant_index_type_254.test | RUN | 4.629634 | 11.959434 | 22.469197 | 0.002040 | 0.002151 | 0.002108 |
| variant_index_type_255.test | RUN | 4.640936 | 12.178738 | 22.313950 | 0.001716 | 0.002280 | 0.002088 |
| variant_index_type_256.test | RUN | 4.841984 | 12.119399 | 22.156572 | 0.001914 | 0.002140 | 0.001610 |
| variant_index_type_257.test | RUN | 4.812047 | 12.522942 | 23.312795 | 0.002170 | 0.002030 | 0.002299 |
| variant_default_construct_cx_2.test | COMPILE | 0.146599 | 0.383428 | 0.601034 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.157909 | 0.379799 | 0.450303 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.149334 | 0.331105 | 0.523289 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.149063 | 0.342654 | 0.596871 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.154306 | 0.345949 | 0.530408 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.153103 | 0.328420 | 0.510090 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.123083 | 0.237996 | 0.452172 | — | — | — |
| variant_issue_55.test | RUN | 0.202168 | 0.536998 | 0.877434 | 0.001758 | 0.001524 | 0.001542 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.987× | 0.991×, 0.984× | 1.002× |
| clang | 0.995× | 1.000×, 0.990× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44612055398).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.001523s | 0.001516s | 0.001521s | byte equality observed |
| quick.test | 10 | 0.001499s | 0.000640s | 0.001477s | byte equality observed |
| variant_alternative.test | 10 | 0.001492s | 0.001528s | 0.001542s | byte equality observed |
| variant_convert_construct.test | 10 | 0.001520s | 0.001520s | 0.001556s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.001558s | 0.001569s | 0.001531s | byte equality observed |
| variant_copy_assign.test | 10 | 0.001515s | 0.001548s | 0.001526s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.001559s | 0.001562s | 0.001542s | byte equality observed |
| variant_copy_construct.test | 10 | 0.001540s | 0.001538s | 0.001475s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.001533s | 0.001541s | 0.001568s | byte equality observed |
| variant_default_construct.test | 10 | 0.001497s | 0.001543s | 0.001477s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.001540s | 0.001507s | 0.001499s | byte equality observed |
| variant_destroy.test | 10 | 0.001510s | 0.001516s | 0.001486s | byte equality observed |
| variant_emplace_index.test | 10 | 0.001525s | 0.001492s | 0.001478s | byte equality observed |
| variant_emplace_type.test | 10 | 0.001538s | 0.001519s | 0.001488s | byte equality observed |
| variant_eq_ne.test | 10 | 0.001521s | 0.001508s | 0.001490s | byte equality observed |
| variant_get_by_index.test | 10 | 0.001613s | 0.001588s | 0.001612s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.001526s | 0.001504s | 0.001500s | byte equality observed |
| variant_get_by_type.test | 10 | 0.001557s | 0.001608s | 0.001624s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.001516s | 0.001524s | 0.001518s | byte equality observed |
| variant_hash.test | 10 | 0.001524s | 0.001504s | 0.001506s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.001503s | 0.001500s | 0.001531s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.001504s | 0.001523s | 0.001518s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.001536s | 0.001481s | 0.001515s | byte equality observed |
| variant_index_type_126.test | 10 | 0.001518s | 0.001488s | 0.001538s | byte equality observed |
| variant_index_type_127.test | 10 | 0.001486s | 0.001498s | 0.001498s | byte equality observed |
| variant_index_type_128.test | 10 | 0.001534s | 0.001492s | 0.001550s | byte equality observed |
| variant_index_type_129.test | 10 | 0.001517s | 0.001499s | 0.001484s | byte equality observed |
| variant_index_type_254.test | 10 | 0.001494s | 0.001466s | 0.001507s | byte equality observed |
| variant_index_type_255.test | 10 | 0.001506s | 0.001493s | 0.001490s | byte equality observed |
| variant_index_type_256.test | 10 | 0.001508s | 0.001489s | 0.001497s | byte equality observed |
| variant_index_type_257.test | 10 | 0.001486s | 0.001506s | 0.001517s | byte equality observed |
| variant_issue_55.test | 10 | 0.001512s | 0.001535s | 0.001541s | byte equality observed |
| variant_json_value_from.test | 10 | 0.001579s | 0.001600s | 0.001561s | byte equality observed |
| variant_json_value_to.test | 10 | 0.001584s | 0.001545s | 0.001562s | byte equality observed |
| variant_lt_gt.test | 10 | 0.001500s | 0.001488s | 0.001469s | byte equality observed |
| variant_many_types.test | 10 | 0.001573s | 0.001541s | 0.001561s | byte equality observed |
| variant_move_assign.test | 10 | 0.001524s | 0.001562s | 0.001494s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.001556s | 0.001548s | 0.001548s | byte equality observed |
| variant_move_construct.test | 10 | 0.001528s | 0.001530s | 0.001530s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.001535s | 0.001555s | 0.001555s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.001543s | 0.001561s | 0.001526s | byte equality observed |
| variant_size.test | 10 | 0.001507s | 0.001505s | 0.001529s | byte equality observed |
| variant_special.test | 10 | 0.001608s | 0.001603s | 0.001575s | byte equality observed |
| variant_subset.test | 10 | 0.001561s | 0.001574s | 0.001558s | byte equality observed |
| variant_subset_nx.test | 10 | 0.001512s | 0.001505s | 0.001476s | byte equality observed |
| variant_swap.test | 10 | 0.001538s | 0.001517s | 0.001489s | byte equality observed |
| variant_trivial.test | 10 | 0.001585s | 0.001543s | 0.001556s | byte equality observed |
| variant_value_assign.test | 10 | 0.001512s | 0.001485s | 0.001504s | byte equality observed |
| variant_value_construct.test | 10 | 0.001516s | 0.001507s | 0.001517s | byte equality observed |
| variant_valueless.test | 9 | 0.001590s | 0.001560s | 0.001611s | byte equality observed |
| variant_visit.test | 10 | 0.001535s | 0.001518s | 0.001523s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.001526s | 0.001499s | 0.001499s | byte equality observed |
| variant_visit_derived.test | 10 | 0.001535s | 0.001480s | 0.001486s | byte equality observed |
| variant_visit_r.test | 10 | 0.001517s | 0.001473s | 0.001553s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44612055398).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
