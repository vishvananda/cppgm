# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.288623 | 0.853777 | 0.800130 | — | — | — |
| largest_int.test | COMPILE | 0.097346 | 0.239693 | 0.272475 | — | — | — |
| msvc_is_class.test | COMPILE | 0.011486 | 0.029689 | 0.034425 | — | — | — |
| template_arity.test | COMPILE | 0.091222 | 0.237738 | 0.268661 | — | — | — |
| is_seq.test | COMPILE | 0.003673 | 0.010785 | 0.018290 | — | — | — |
| token_equal.test | COMPILE | 0.003846 | 0.010974 | 0.019193 | — | — | — |
| advance.test | COMPILE | 0.102588 | 0.272248 | 0.313403 | — | — | — |
| always.test | COMPILE | 0.109201 | 0.271300 | 0.317027 | — | — | — |
| apply.test | COMPILE | 0.114478 | 0.296220 | 0.339699 | — | — | — |
| apply_wrap.test | COMPILE | 0.098560 | 0.247194 | 0.291662 | — | — | — |
| arithmetic.test | COMPILE | 0.107861 | 0.282702 | 0.317057 | — | — | — |
| as_sequence.test | COMPILE | 0.114826 | 0.303473 | 0.342594 | — | — | — |
| assert.test | COMPILE | 0.026061 | 0.057996 | 0.063794 | — | — | — |
| at.test | COMPILE | 0.113271 | 0.298786 | 0.349290 | — | — | — |
| back.test | COMPILE | 0.106118 | 0.284635 | 0.328525 | — | — | — |
| bind.test | COMPILE | 0.105634 | 0.273816 | 0.316367 | — | — | — |
| bitwise.test | COMPILE | 0.106772 | 0.274182 | 0.325265 | — | — | — |
| bool.test | RUN | 0.093566 | 0.244539 | 0.294825 | 0.001168 | 0.001346 | 0.001142 |
| comparison.test | COMPILE | 0.100469 | 0.278800 | 0.316415 | — | — | — |
| contains.test | COMPILE | 0.128177 | 0.341068 | 0.386793 | — | — | — |
| copy.test | COMPILE | 0.146695 | 0.408802 | 0.464953 | — | — | — |
| copy_if.test | COMPILE | 0.132854 | 0.367056 | 0.414597 | — | — | — |
| count.test | COMPILE | 0.127168 | 0.333931 | 0.393568 | — | — | — |
| count_if.test | COMPILE | 0.134262 | 0.342518 | 0.410885 | — | — | — |
| deque.test | COMPILE | 0.130363 | 0.341748 | 0.392496 | — | — | — |
| distance.test | COMPILE | 0.120562 | 0.309915 | 0.360352 | — | — | — |
| empty.test | COMPILE | 0.103515 | 0.279926 | 0.317897 | — | — | — |
| equal.test | COMPILE | 0.123290 | 0.316712 | 0.369884 | — | — | — |
| erase.test | COMPILE | 0.136250 | 0.373859 | 0.428106 | — | — | — |
| erase_range.test | COMPILE | 0.131062 | 0.355433 | 0.401695 | — | — | — |
| eval_if.test | COMPILE | 0.100510 | 0.256136 | 0.297733 | — | — | — |
| filter_view.test | COMPILE | 0.131239 | 0.349628 | 0.402322 | — | — | — |
| find.test | COMPILE | 0.128773 | 0.342168 | 0.385364 | — | — | — |
| find_if.test | COMPILE | 0.130089 | 0.350021 | 0.398656 | — | — | — |
| fold.test | COMPILE | 0.139386 | 0.365864 | 0.422820 | — | — | — |
| for_each.test | RUN | 0.204802 | 0.523612 | 0.656989 | 0.001074 | 0.001303 | 0.001234 |
| front.test | COMPILE | 0.102754 | 0.294813 | 0.330410 | — | — | — |
| get_tag_def.test | COMPILE | 0.099047 | 0.245437 | 0.293776 | — | — | — |
| has_xxx.test | COMPILE | 0.099142 | 0.269043 | 0.325973 | — | — | — |
| identity.test | COMPILE | 0.111977 | 0.282069 | 0.324988 | — | — | — |
| if.test | COMPILE | 0.092645 | 0.247061 | 0.285034 | — | — | — |
| index_of.test | COMPILE | 0.125169 | 0.326434 | 0.368181 | — | — | — |
| inherit.test | COMPILE | 0.101527 | 0.260974 | 0.296276 | — | — | — |
| insert.test | COMPILE | 0.144194 | 0.383678 | 0.446484 | — | — | — |
| insert_range.test | COMPILE | 0.198530 | 0.508760 | 0.623865 | — | — | — |
| int.test | RUN | 0.099446 | 0.278455 | 0.327254 | 0.001098 | 0.001450 | 0.001195 |
| char.test | RUN | 0.104306 | 0.278619 | 0.320979 | 0.001224 | 0.001227 | 0.001099 |
| char_unsigned.test | RUN | 0.103422 | 0.271756 | 0.323939 | 0.001116 | 0.001468 | 0.001099 |
| integral_c.test | RUN | 0.112361 | 0.356599 | 0.399716 | 0.001153 | 0.001414 | 0.001147 |
| integral_c_unsigned.test | RUN | 0.111750 | 0.356651 | 0.399000 | 0.001006 | 0.001270 | 0.001075 |
| is_placeholder.test | COMPILE | 0.100912 | 0.251390 | 0.294585 | — | — | — |
| is_sequence.test | COMPILE | 0.121469 | 0.304840 | 0.349984 | — | — | — |
| iterator_tags.test | COMPILE | 0.100206 | 0.257906 | 0.295767 | — | — | — |
| joint_view.test | COMPILE | 0.131991 | 0.343088 | 0.403739 | — | — | — |
| lambda.test | COMPILE | 0.125376 | 0.322734 | 0.371454 | — | — | — |
| lambda_args.test | COMPILE | 0.117561 | 0.303305 | 0.373103 | — | — | — |
| list.test | COMPILE | 0.119982 | 0.318485 | 0.359406 | — | — | — |
| list_c.test | COMPILE | 0.118467 | 0.306279 | 0.373043 | — | — | — |
| logical.test | COMPILE | 0.099026 | 0.246319 | 0.296719 | — | — | — |
| lower_bound.test | COMPILE | 0.125927 | 0.320313 | 0.375235 | — | — | — |
| map.test | COMPILE | 0.150855 | 0.402106 | 0.469405 | — | — | — |
| max_element.test | COMPILE | 0.122932 | 0.305671 | 0.358059 | — | — | — |
| min_max.test | COMPILE | 0.102664 | 0.260415 | 0.309744 | — | — | — |
| multiset.test | COMPILE | 0.128892 | 0.345928 | 0.396050 | — | — | — |
| next.test | COMPILE | 0.098880 | 0.244707 | 0.293309 | — | — | — |
| no_has_xxx.test | COMPILE | 0.103827 | 0.263350 | 0.317393 | — | — | — |
| numeric_ops.test | COMPILE | 0.117089 | 0.305773 | 0.348004 | — | — | — |
| pair_view.test | COMPILE | 0.136316 | 0.343422 | 0.392072 | — | — | — |
| partition.test | COMPILE | 0.143086 | 0.378699 | 0.442557 | — | — | — |
| pop_front.test | COMPILE | 0.120744 | 0.315180 | 0.358001 | — | — | — |
| push_back.test | COMPILE | 0.103203 | 0.263813 | 0.304166 | — | — | — |
| push_front.test | COMPILE | 0.117775 | 0.316583 | 0.356477 | — | — | — |
| quote.test | COMPILE | 0.098555 | 0.248881 | 0.290449 | — | — | — |
| range_c.test | COMPILE | 0.125981 | 0.329152 | 0.381383 | — | — | — |
| remove.test | COMPILE | 0.129591 | 0.344532 | 0.392035 | — | — | — |
| remove_if.test | COMPILE | 0.135027 | 0.365327 | 0.414125 | — | — | — |
| replace.test | COMPILE | 0.143162 | 0.392872 | 0.435083 | — | — | — |
| replace_if.test | COMPILE | 0.147652 | 0.398778 | 0.448224 | — | — | — |
| reverse.test | COMPILE | 0.137025 | 0.365393 | 0.419695 | — | — | — |
| same_as.test | COMPILE | 0.105432 | 0.267909 | 0.315751 | — | — | — |
| set.test | COMPILE | 0.178737 | 0.519433 | 0.618012 | — | — | — |
| set_c.test | COMPILE | 0.136731 | 0.353401 | 0.426677 | — | — | — |
| single_view.test | COMPILE | 0.120083 | 0.326561 | 0.372746 | — | — | — |
| size.test | COMPILE | 0.117321 | 0.306814 | 0.349525 | — | — | — |
| size_t.test | RUN | 0.101384 | 0.284443 | 0.326966 | 0.000919 | 0.001246 | 0.001121 |
| sizeof.test | COMPILE | 0.095322 | 0.247478 | 0.285206 | — | — | — |
| sort.test | COMPILE | 0.152660 | 0.404200 | 0.469493 | — | — | — |
| stable_partition.test | COMPILE | 0.145863 | 0.385508 | 0.429659 | — | — | — |
| transform.test | COMPILE | 0.153117 | 0.417157 | 0.478994 | — | — | — |
| transform_view.test | COMPILE | 0.126679 | 0.332019 | 0.379443 | — | — | — |
| unique.test | COMPILE | 0.132361 | 0.348063 | 0.398199 | — | — | — |
| unpack_args.test | COMPILE | 0.121570 | 0.322007 | 0.366410 | — | — | — |
| upper_bound.test | COMPILE | 0.124020 | 0.325427 | 0.367488 | — | — | — |
| vector.test | COMPILE | 0.144375 | 0.395823 | 0.453345 | — | — | — |
| vector_c.test | COMPILE | 0.126862 | 0.318991 | 0.390599 | — | — | — |
| zip_view.test | COMPILE | 0.179278 | 0.490858 | 0.558669 | — | — | — |
| string.test | RUN | 0.294349 | 0.957383 | 0.835715 | 0.000859 | 0.000975 | 0.000875 |
| issue_69.test | RUN | 0.011711 | 0.036932 | 0.036429 | 0.000395 | 0.000545 | 0.001011 |
| issue_84.test | RUN | 0.030552 | 0.074804 | 0.068168 | 0.000356 | 0.000397 | 0.000794 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.002× | 0.993×, 1.011× | 0.980× |
| clang | 1.114× | 1.129×, 1.099× | 1.013× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44774088589).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.000804s | 0.000824s | 0.000805s | byte equality observed |
| char.test | 10 | 0.000806s | 0.000837s | 0.000784s | byte equality observed |
| char_unsigned.test | 10 | 0.000803s | 0.000827s | 0.000817s | byte equality observed |
| for_each.test | 10 | 0.000819s | 0.000831s | 0.000840s | byte equality observed |
| int.test | 10 | 0.000801s | 0.000787s | 0.000826s | byte equality observed |
| integral_c.test | 10 | 0.000831s | 0.000809s | 0.000817s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.000818s | 0.000794s | 0.000802s | byte equality observed |
| issue_69.test | 10 | 0.000369s | 0.000362s | 0.000808s | byte equality observed |
| issue_84.test | 10 | 0.000362s | 0.000359s | 0.000787s | byte equality observed |
| size_t.test | 10 | 0.000797s | 0.000810s | 0.000815s | byte equality observed |
| string.test | 10 | 0.000824s | 0.000844s | 0.000803s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44774088589).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
