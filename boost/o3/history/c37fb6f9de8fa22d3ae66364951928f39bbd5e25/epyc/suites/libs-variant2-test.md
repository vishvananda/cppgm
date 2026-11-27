# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.160123 | 0.378344 | 0.591855 | 0.002062 | 0.000896 | 0.002031 |
| variant_size.test | RUN | 0.293704 | 0.842245 | 1.075521 | 0.002150 | 0.002094 | 0.002079 |
| variant_alternative.test | RUN | 0.371292 | 2.651531 | 1.799469 | 0.002038 | 0.002116 | 0.002102 |
| variant_holds_alternative.test | RUN | 0.269311 | 0.644796 | 1.051539 | 0.002141 | 0.002150 | 0.001922 |
| variant_holds_alternative_cx.test | COMPILE | 0.177672 | 0.398310 | 0.628290 | — | — | — |
| variant_get_by_index.test | RUN | 0.393103 | 2.842999 | 2.117748 | 0.002132 | 0.002215 | 0.002144 |
| variant_get_by_index_cx.test | COMPILE | 0.181682 | 0.403907 | 0.626533 | — | — | — |
| variant_get_by_type.test | RUN | 0.439806 | 3.018673 | 2.283649 | 0.002052 | 0.002300 | 0.001902 |
| variant_get_by_type_cx.test | COMPILE | 0.164722 | 0.337754 | 0.551378 | — | — | — |
| variant_default_construct.test | RUN | 0.411826 | 2.256296 | 1.851409 | 0.001907 | 0.002096 | 0.001776 |
| variant_default_construct_cx.test | COMPILE | 0.167047 | 0.378137 | 0.646674 | — | — | — |
| variant_copy_construct.test | RUN | 0.604619 | 3.719099 | 3.304080 | 0.001707 | 0.001774 | 0.002072 |
| variant_copy_construct_cx.test | COMPILE | 0.199675 | 0.437117 | 0.711663 | — | — | — |
| variant_move_construct.test | RUN | 0.576164 | 3.241010 | 2.974629 | 0.002154 | 0.002020 | 0.002058 |
| variant_move_construct_cx.test | COMPILE | 0.164351 | 0.353384 | 0.519158 | — | — | — |
| variant_value_construct.test | RUN | 0.324022 | 0.861065 | 1.335138 | 0.001832 | 0.002172 | 0.002077 |
| variant_value_construct_cx.test | COMPILE | 0.177155 | 0.409767 | 0.597063 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.329929 | 0.871137 | 1.382916 | 0.001844 | 0.001868 | 0.001678 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.185372 | 0.400712 | 0.670844 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.324613 | 0.833863 | 1.335468 | 0.001826 | 0.001927 | 0.002004 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.186709 | 0.397117 | 0.638856 | — | — | — |
| variant_copy_assign.test | RUN | 0.432749 | 2.608955 | 2.066843 | 0.002086 | 0.002124 | 0.001801 |
| variant_copy_assign_cx.test | COMPILE | 0.169931 | 0.342338 | 0.548565 | — | — | — |
| variant_move_assign.test | RUN | 0.420654 | 2.595723 | 2.063089 | 0.001804 | 0.002058 | 0.001809 |
| variant_move_assign_cx.test | COMPILE | 0.160036 | 0.349862 | 0.555927 | — | — | — |
| variant_value_assign.test | RUN | 0.325949 | 0.950667 | 1.488596 | 0.001955 | 0.001974 | 0.001512 |
| variant_value_assign_cx.test | COMPILE | 0.158805 | 0.334761 | 0.493035 | — | — | — |
| variant_emplace_index.test | RUN | 0.365080 | 1.111926 | 1.623242 | 0.001907 | 0.001948 | 0.002021 |
| variant_emplace_index_cx.test | COMPILE | 0.160656 | 0.333164 | 0.555279 | — | — | — |
| variant_emplace_type.test | RUN | 0.328654 | 0.947936 | 1.433938 | 0.001994 | 0.002167 | 0.002019 |
| variant_emplace_type_cx.test | COMPILE | 0.151719 | 0.329112 | 0.544860 | — | — | — |
| variant_swap.test | RUN | 0.352849 | 1.160315 | 1.573965 | 0.001906 | 0.002082 | 0.001818 |
| variant_eq_ne.test | RUN | 0.279563 | 0.724454 | 1.142447 | 0.002010 | 0.002140 | 0.002005 |
| variant_eq_ne_cx.test | COMPILE | 0.156871 | 0.329790 | 0.496664 | — | — | — |
| variant_lt_gt.test | RUN | 0.284959 | 0.789615 | 1.226599 | 0.001968 | 0.002156 | 0.001961 |
| variant_lt_gt_cx.test | COMPILE | 0.163927 | 0.343509 | 0.504429 | — | — | — |
| variant_destroy.test | RUN | 0.298135 | 0.778446 | 1.194762 | 0.002069 | 0.002114 | 0.001942 |
| variant_visit.test | RUN | 1.825016 | 6.088265 | 18.136276 | 0.001826 | 0.001815 | 0.002049 |
| variant_convert_construct.test | RUN | 0.371360 | 1.067095 | 1.664106 | 0.002068 | 0.002166 | 0.002058 |
| variant_subset.test | RUN | 0.398593 | 1.114445 | 1.732604 | 0.002049 | 0.001889 | 0.002134 |
| variant_valueless.test | RUN | 0.277650 | 0.762031 | 1.229590 | 0.001798 | 0.001941 | 0.002166 |
| variant_copy_construct_throw.test | RUN | 0.223817 | 0.566764 | 0.869398 | 0.002079 | 0.001872 | 0.002144 |
| variant_move_construct_throw.test | RUN | 0.223711 | 0.550523 | 0.814401 | 0.001912 | 0.001938 | 0.002037 |
| variant_convert_construct_throw.test | RUN | 0.231299 | 0.602850 | 0.892543 | 0.001940 | 0.002002 | 0.002167 |
| variant_copy_assign_throw.test | RUN | 0.219700 | 0.537197 | 0.865600 | 0.002009 | 0.002160 | 0.002056 |
| variant_move_assign_throw.test | RUN | 0.214254 | 0.524798 | 0.810598 | 0.002188 | 0.002140 | 0.002106 |
| variant_get_by_index_nx.test | RUN | 0.501916 | 2.487978 | 2.115070 | 0.001962 | 0.002030 | 0.002024 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.171188 | 0.418570 | 0.634250 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.509117 | 2.713877 | 2.188648 | 0.001974 | 0.001814 | 0.002151 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.152018 | 0.355994 | 0.564769 | — | — | — |
| variant_subset_nx.test | RUN | 0.408308 | 1.092336 | 1.820018 | 0.002024 | 0.001871 | 0.002066 |
| variant_hash.test | RUN | 0.392720 | 1.290394 | 1.635846 | 0.002102 | 0.002150 | 0.002037 |
| variant_trivial.test | RUN | 2.235879 | 6.671629 | 12.281199 | 0.001902 | 0.002148 | 0.001981 |
| variant_special.test | RUN | 2.220502 | 7.490834 | 12.113403 | 0.002138 | 0.002159 | 0.001883 |
| variant_visit_derived.test | RUN | 0.281296 | 0.678002 | 1.234309 | 0.002060 | 0.002084 | 0.001809 |
| variant_many_types.test | RUN | 2.230690 | 9.592520 | 16.438457 | 0.001778 | 0.002112 | 0.001701 |
| variant_visit_r.test | RUN | 0.976916 | 3.011680 | 6.051242 | 0.001997 | 0.002164 | 0.001917 |
| variant_derived_construct.test | COMPILE | 0.168311 | 0.366536 | 0.544782 | — | — | — |
| variant_visit_by_index.test | RUN | 0.344449 | 0.868944 | 1.524248 | 0.001880 | 0.001886 | 0.002037 |
| variant_ostream_insert.test | RUN | 0.252003 | 0.741658 | 1.058097 | 0.001737 | 0.002042 | 0.002130 |
| is_output_streamable.test | RUN | 0.316455 | 1.527605 | 1.441838 | 0.001860 | 0.001892 | 0.002134 |
| variant_json_value_from.test | RUN | 0.482942 | 1.135458 | 1.961572 | 0.001902 | 0.002208 | 0.002108 |
| variant_json_value_to.test | RUN | 0.580623 | 1.606927 | 2.514899 | 0.001954 | 0.002014 | 0.001996 |
| variant_uses_double_storage.test | COMPILE | 0.169987 | 0.355837 | 0.654136 | — | — | — |
| variant_derived_construct2.test | RUN | 0.226300 | 0.568368 | 0.936356 | 0.001966 | 0.002143 | 0.001851 |
| variant_visit_cx.test | COMPILE | 0.150982 | 0.348953 | 0.552412 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.153838 | 0.333529 | 0.552618 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.153292 | 0.331333 | 0.473563 | — | — | — |
| variant_index_type_126.test | RUN | 1.344862 | 3.282851 | 7.702393 | 0.002036 | 0.002136 | 0.001940 |
| variant_index_type_127.test | RUN | 1.377230 | 3.316027 | 7.763875 | 0.001912 | 0.002031 | 0.001737 |
| variant_index_type_128.test | RUN | 1.409449 | 3.344113 | 7.741305 | 0.002003 | 0.001938 | 0.001650 |
| variant_index_type_129.test | RUN | 1.392168 | 3.376519 | 7.865161 | 0.002003 | 0.002112 | 0.002058 |
| variant_index_type_254.test | RUN | 4.725444 | 11.807126 | 22.021127 | 0.001843 | 0.001857 | 0.002072 |
| variant_index_type_255.test | RUN | 4.615330 | 11.812617 | 22.421007 | 0.002034 | 0.001918 | 0.001936 |
| variant_index_type_256.test | RUN | 4.625021 | 12.010223 | 22.416924 | 0.001866 | 0.002026 | 0.002021 |
| variant_index_type_257.test | RUN | 4.796298 | 12.192798 | 22.979819 | 0.001796 | 0.001545 | 0.001405 |
| variant_default_construct_cx_2.test | COMPILE | 0.157227 | 0.336793 | 0.447529 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.138751 | 0.355356 | 0.581865 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.154008 | 0.331357 | 0.524973 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.151717 | 0.373087 | 0.534339 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.156116 | 0.341423 | 0.525021 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.146566 | 0.334021 | 0.498762 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.117131 | 0.290686 | 0.509621 | — | — | — |
| variant_issue_55.test | RUN | 0.184397 | 0.572010 | 0.720015 | 0.001652 | 0.001638 | 0.001509 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.986× | 0.981×, 0.992× | 1.013× |
| clang | 0.997× | 0.990×, 1.003× | 1.008× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46045514956).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.001476s | 0.001496s | 0.001492s | byte equality observed |
| quick.test | 10 | 0.001465s | 0.000650s | 0.001462s | byte equality observed |
| variant_alternative.test | 10 | 0.001495s | 0.001537s | 0.001449s | byte equality observed |
| variant_convert_construct.test | 10 | 0.001508s | 0.001502s | 0.001477s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.001536s | 0.001526s | 0.001550s | byte equality observed |
| variant_copy_assign.test | 10 | 0.001480s | 0.001490s | 0.001514s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.001545s | 0.001547s | 0.001542s | byte equality observed |
| variant_copy_construct.test | 10 | 0.001508s | 0.001512s | 0.001500s | byte equality observed |
| variant_copy_construct_throw.test | 7 | 0.001508s | 0.001507s | 0.001595s | byte equality observed |
| variant_default_construct.test | 9 | 0.001491s | 0.001525s | 0.001481s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.001470s | 0.001456s | 0.001478s | byte equality observed |
| variant_destroy.test | 10 | 0.001504s | 0.001495s | 0.001512s | byte equality observed |
| variant_emplace_index.test | 10 | 0.001481s | 0.001499s | 0.001503s | byte equality observed |
| variant_emplace_type.test | 10 | 0.001491s | 0.001485s | 0.001510s | byte equality observed |
| variant_eq_ne.test | 10 | 0.001473s | 0.001443s | 0.001497s | byte equality observed |
| variant_get_by_index.test | 10 | 0.001583s | 0.001613s | 0.001597s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.001507s | 0.001507s | 0.001522s | byte equality observed |
| variant_get_by_type.test | 10 | 0.001566s | 0.001548s | 0.001530s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.001499s | 0.001485s | 0.001501s | byte equality observed |
| variant_hash.test | 10 | 0.001474s | 0.001509s | 0.001495s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.001501s | 0.001505s | 0.001477s | byte equality observed |
| variant_in_place_index_construct.test | 8 | 0.001523s | 0.001515s | 0.001516s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.001502s | 0.001504s | 0.001524s | byte equality observed |
| variant_index_type_126.test | 10 | 0.001488s | 0.001509s | 0.001446s | byte equality observed |
| variant_index_type_127.test | 10 | 0.001498s | 0.001462s | 0.001536s | byte equality observed |
| variant_index_type_128.test | 10 | 0.001463s | 0.001495s | 0.001487s | byte equality observed |
| variant_index_type_129.test | 10 | 0.001534s | 0.001496s | 0.001468s | byte equality observed |
| variant_index_type_254.test | 10 | 0.001480s | 0.001473s | 0.001458s | byte equality observed |
| variant_index_type_255.test | 10 | 0.001488s | 0.001453s | 0.001490s | byte equality observed |
| variant_index_type_256.test | 10 | 0.001497s | 0.001482s | 0.001461s | byte equality observed |
| variant_index_type_257.test | 10 | 0.001483s | 0.001500s | 0.001497s | byte equality observed |
| variant_issue_55.test | 10 | 0.001512s | 0.001483s | 0.001491s | byte equality observed |
| variant_json_value_from.test | 10 | 0.001524s | 0.001511s | 0.001537s | byte equality observed |
| variant_json_value_to.test | 10 | 0.001550s | 0.001533s | 0.001498s | byte equality observed |
| variant_lt_gt.test | 10 | 0.001492s | 0.001470s | 0.001462s | byte equality observed |
| variant_many_types.test | 10 | 0.001575s | 0.001523s | 0.001506s | byte equality observed |
| variant_move_assign.test | 10 | 0.001501s | 0.001506s | 0.001467s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.001549s | 0.001516s | 0.001531s | byte equality observed |
| variant_move_construct.test | 10 | 0.001506s | 0.001486s | 0.001491s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.001532s | 0.001529s | 0.001549s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.001534s | 0.001515s | 0.001528s | byte equality observed |
| variant_size.test | 10 | 0.001504s | 0.001497s | 0.001465s | byte equality observed |
| variant_special.test | 10 | 0.001565s | 0.001543s | 0.001543s | byte equality observed |
| variant_subset.test | 10 | 0.001524s | 0.001490s | 0.001551s | byte equality observed |
| variant_subset_nx.test | 10 | 0.001504s | 0.001494s | 0.001474s | byte equality observed |
| variant_swap.test | 10 | 0.001500s | 0.001512s | 0.001495s | byte equality observed |
| variant_trivial.test | 10 | 0.001529s | 0.001538s | 0.001479s | byte equality observed |
| variant_value_assign.test | 10 | 0.001503s | 0.001506s | 0.001456s | byte equality observed |
| variant_value_construct.test | 10 | 0.001479s | 0.001507s | 0.001477s | byte equality observed |
| variant_valueless.test | 10 | 0.001554s | 0.001574s | 0.001567s | byte equality observed |
| variant_visit.test | 10 | 0.001515s | 0.001476s | 0.001472s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.001478s | 0.001487s | 0.001465s | byte equality observed |
| variant_visit_derived.test | 10 | 0.001474s | 0.001485s | 0.001489s | byte equality observed |
| variant_visit_r.test | 10 | 0.001496s | 0.001427s | 0.001472s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46045514956).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
