# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.300616 | 0.853991 | 0.818330 | — | — | — |
| largest_int.test | COMPILE | 0.100168 | 0.238099 | 0.281974 | — | — | — |
| msvc_is_class.test | COMPILE | 0.011775 | 0.029521 | 0.034714 | — | — | — |
| template_arity.test | COMPILE | 0.100373 | 0.236978 | 0.276813 | — | — | — |
| is_seq.test | COMPILE | 0.004000 | 0.010557 | 0.021924 | — | — | — |
| token_equal.test | COMPILE | 0.004093 | 0.010866 | 0.022689 | — | — | — |
| advance.test | COMPILE | 0.109432 | 0.270627 | 0.325567 | — | — | — |
| always.test | COMPILE | 0.110885 | 0.275600 | 0.330074 | — | — | — |
| apply.test | COMPILE | 0.118208 | 0.280774 | 0.340215 | — | — | — |
| apply_wrap.test | COMPILE | 0.105118 | 0.245551 | 0.298200 | — | — | — |
| arithmetic.test | COMPILE | 0.112371 | 0.274260 | 0.319709 | — | — | — |
| as_sequence.test | COMPILE | 0.121049 | 0.300740 | 0.353841 | — | — | — |
| assert.test | COMPILE | 0.027703 | 0.054606 | 0.065715 | — | — | — |
| at.test | COMPILE | 0.120597 | 0.295562 | 0.345084 | — | — | — |
| back.test | COMPILE | 0.116227 | 0.283263 | 0.333879 | — | — | — |
| bind.test | COMPILE | 0.111126 | 0.268703 | 0.329307 | — | — | — |
| bitwise.test | COMPILE | 0.113005 | 0.272492 | 0.329762 | — | — | — |
| bool.test | RUN | 0.101941 | 0.243201 | 0.296806 | 0.001202 | 0.001260 | 0.001314 |
| comparison.test | COMPILE | 0.109813 | 0.272081 | 0.320783 | — | — | — |
| contains.test | COMPILE | 0.135137 | 0.331073 | 0.386261 | — | — | — |
| copy.test | COMPILE | 0.159494 | 0.399999 | 0.471084 | — | — | — |
| copy_if.test | COMPILE | 0.144708 | 0.357509 | 0.421035 | — | — | — |
| count.test | COMPILE | 0.137445 | 0.322793 | 0.394078 | — | — | — |
| count_if.test | COMPILE | 0.144503 | 0.344420 | 0.411427 | — | — | — |
| deque.test | COMPILE | 0.134958 | 0.335179 | 0.398426 | — | — | — |
| distance.test | COMPILE | 0.128699 | 0.306117 | 0.365963 | — | — | — |
| empty.test | COMPILE | 0.109821 | 0.274621 | 0.314148 | — | — | — |
| equal.test | COMPILE | 0.131916 | 0.310890 | 0.368591 | — | — | — |
| erase.test | COMPILE | 0.148459 | 0.373984 | 0.442051 | — | — | — |
| erase_range.test | COMPILE | 0.140688 | 0.350730 | 0.409074 | — | — | — |
| eval_if.test | COMPILE | 0.105550 | 0.252212 | 0.299804 | — | — | — |
| filter_view.test | COMPILE | 0.144842 | 0.339623 | 0.406465 | — | — | — |
| find.test | COMPILE | 0.137751 | 0.339902 | 0.398784 | — | — | — |
| find_if.test | COMPILE | 0.141397 | 0.343399 | 0.410140 | — | — | — |
| fold.test | COMPILE | 0.147020 | 0.361406 | 0.434623 | — | — | — |
| for_each.test | RUN | 0.215546 | 0.513225 | 0.673064 | 0.001139 | 0.001359 | 0.001173 |
| front.test | COMPILE | 0.116628 | 0.291504 | 0.338421 | — | — | — |
| get_tag_def.test | COMPILE | 0.102856 | 0.239767 | 0.297146 | — | — | — |
| has_xxx.test | COMPILE | 0.109580 | 0.260233 | 0.336291 | — | — | — |
| identity.test | COMPILE | 0.117324 | 0.274961 | 0.335573 | — | — | — |
| if.test | COMPILE | 0.102442 | 0.242032 | 0.297956 | — | — | — |
| index_of.test | COMPILE | 0.132202 | 0.315159 | 0.379499 | — | — | — |
| inherit.test | COMPILE | 0.107785 | 0.251704 | 0.312669 | — | — | — |
| insert.test | COMPILE | 0.152922 | 0.375936 | 0.450525 | — | — | — |
| insert_range.test | COMPILE | 0.207836 | 0.501794 | 0.644372 | — | — | — |
| int.test | RUN | 0.109873 | 0.278521 | 0.325374 | 0.001212 | 0.001178 | 0.001224 |
| char.test | RUN | 0.110355 | 0.273326 | 0.326534 | 0.001062 | 0.001234 | 0.001048 |
| char_unsigned.test | RUN | 0.110882 | 0.277044 | 0.321505 | 0.001257 | 0.001558 | 0.001292 |
| integral_c.test | RUN | 0.122747 | 0.354943 | 0.407651 | 0.001221 | 0.001433 | 0.001384 |
| integral_c_unsigned.test | RUN | 0.123412 | 0.360454 | 0.394793 | 0.001248 | 0.001347 | 0.001291 |
| is_placeholder.test | COMPILE | 0.104026 | 0.249477 | 0.301503 | — | — | — |
| is_sequence.test | COMPILE | 0.126057 | 0.297169 | 0.345494 | — | — | — |
| iterator_tags.test | COMPILE | 0.106241 | 0.253275 | 0.303092 | — | — | — |
| joint_view.test | COMPILE | 0.142320 | 0.348718 | 0.413262 | — | — | — |
| lambda.test | COMPILE | 0.127765 | 0.322779 | 0.376648 | — | — | — |
| lambda_args.test | COMPILE | 0.121397 | 0.298506 | 0.378477 | — | — | — |
| list.test | COMPILE | 0.127946 | 0.314486 | 0.377232 | — | — | — |
| list_c.test | COMPILE | 0.128841 | 0.312950 | 0.390422 | — | — | — |
| logical.test | COMPILE | 0.102912 | 0.247187 | 0.304758 | — | — | — |
| lower_bound.test | COMPILE | 0.133399 | 0.327814 | 0.377050 | — | — | — |
| map.test | COMPILE | 0.156872 | 0.393230 | 0.482166 | — | — | — |
| max_element.test | COMPILE | 0.128870 | 0.306001 | 0.369639 | — | — | — |
| min_max.test | COMPILE | 0.106440 | 0.263573 | 0.318764 | — | — | — |
| multiset.test | COMPILE | 0.137406 | 0.342671 | 0.401363 | — | — | — |
| next.test | COMPILE | 0.104710 | 0.246279 | 0.302932 | — | — | — |
| no_has_xxx.test | COMPILE | 0.112953 | 0.272408 | 0.335735 | — | — | — |
| numeric_ops.test | COMPILE | 0.120635 | 0.301875 | 0.364891 | — | — | — |
| pair_view.test | COMPILE | 0.142939 | 0.331190 | 0.402974 | — | — | — |
| partition.test | COMPILE | 0.153088 | 0.375291 | 0.453417 | — | — | — |
| pop_front.test | COMPILE | 0.121827 | 0.309433 | 0.366927 | — | — | — |
| push_back.test | COMPILE | 0.108142 | 0.257972 | 0.313780 | — | — | — |
| push_front.test | COMPILE | 0.126571 | 0.313001 | 0.369308 | — | — | — |
| quote.test | COMPILE | 0.101860 | 0.252443 | 0.304748 | — | — | — |
| range_c.test | COMPILE | 0.131186 | 0.327965 | 0.387507 | — | — | — |
| remove.test | COMPILE | 0.138127 | 0.345981 | 0.403306 | — | — | — |
| remove_if.test | COMPILE | 0.143949 | 0.362657 | 0.422270 | — | — | — |
| replace.test | COMPILE | 0.152449 | 0.396062 | 0.458530 | — | — | — |
| replace_if.test | COMPILE | 0.154104 | 0.386148 | 0.452423 | — | — | — |
| reverse.test | COMPILE | 0.146983 | 0.360880 | 0.427845 | — | — | — |
| same_as.test | COMPILE | 0.104634 | 0.268089 | 0.325108 | — | — | — |
| set.test | COMPILE | 0.194311 | 0.509819 | 0.638477 | — | — | — |
| set_c.test | COMPILE | 0.137842 | 0.349552 | 0.439367 | — | — | — |
| single_view.test | COMPILE | 0.130669 | 0.327258 | 0.379247 | — | — | — |
| size.test | COMPILE | 0.125427 | 0.303856 | 0.357257 | — | — | — |
| size_t.test | RUN | 0.108982 | 0.273849 | 0.324838 | 0.001371 | 0.001294 | 0.001324 |
| sizeof.test | COMPILE | 0.101011 | 0.243928 | 0.292352 | — | — | — |
| sort.test | COMPILE | 0.164379 | 0.399517 | 0.463976 | — | — | — |
| stable_partition.test | COMPILE | 0.153858 | 0.384126 | 0.446178 | — | — | — |
| transform.test | COMPILE | 0.163352 | 0.408729 | 0.488528 | — | — | — |
| transform_view.test | COMPILE | 0.132832 | 0.326468 | 0.384779 | — | — | — |
| unique.test | COMPILE | 0.140142 | 0.347832 | 0.407031 | — | — | — |
| unpack_args.test | COMPILE | 0.131388 | 0.320167 | 0.373853 | — | — | — |
| upper_bound.test | COMPILE | 0.133546 | 0.321274 | 0.375179 | — | — | — |
| vector.test | COMPILE | 0.150013 | 0.390177 | 0.453300 | — | — | — |
| vector_c.test | COMPILE | 0.134883 | 0.318561 | 0.390528 | — | — | — |
| zip_view.test | COMPILE | 0.191826 | 0.489969 | 0.576161 | — | — | — |
| string.test | RUN | 0.301327 | 0.949817 | 0.832984 | 0.000975 | 0.000927 | 0.000913 |
| issue_69.test | RUN | 0.013352 | 0.037589 | 0.037929 | 0.000471 | 0.000445 | 0.001412 |
| issue_84.test | RUN | 0.030601 | 0.069184 | 0.070049 | 0.000428 | 0.000411 | 0.000857 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.003×† | 0.975×, 1.031× | 0.996× |
| clang | 1.093× | 1.078×, 1.109× | 0.984× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45697047144).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.000830s | 0.000839s | 0.000810s | byte equality observed |
| char.test | 10 | 0.000837s | 0.000800s | 0.000802s | byte equality observed |
| char_unsigned.test | 10 | 0.000836s | 0.000822s | 0.000804s | byte equality observed |
| for_each.test | 10 | 0.000831s | 0.000820s | 0.000820s | byte equality observed |
| int.test | 10 | 0.000810s | 0.000819s | 0.000807s | byte equality observed |
| integral_c.test | 10 | 0.000797s | 0.000839s | 0.000805s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.000821s | 0.000809s | 0.000824s | byte equality observed |
| issue_69.test | 10 | 0.000367s | 0.000369s | 0.000793s | byte equality observed |
| issue_84.test | 10 | 0.000357s | 0.000358s | 0.000808s | byte equality observed |
| size_t.test | 10 | 0.000820s | 0.000802s | 0.000786s | byte equality observed |
| string.test | 10 | 0.000815s | 0.000819s | 0.000830s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45697047144).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
