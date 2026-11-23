# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.287572 | 0.839538 | 0.810891 | — | — | — |
| largest_int.test | COMPILE | 0.098441 | 0.236224 | 0.276920 | — | — | — |
| msvc_is_class.test | COMPILE | 0.011564 | 0.030675 | 0.033976 | — | — | — |
| template_arity.test | COMPILE | 0.098543 | 0.235919 | 0.283558 | — | — | — |
| is_seq.test | COMPILE | 0.003764 | 0.010245 | 0.018829 | — | — | — |
| token_equal.test | COMPILE | 0.004201 | 0.010185 | 0.018566 | — | — | — |
| advance.test | COMPILE | 0.107141 | 0.262180 | 0.322097 | — | — | — |
| always.test | COMPILE | 0.109016 | 0.263432 | 0.327006 | — | — | — |
| apply.test | COMPILE | 0.115772 | 0.282924 | 0.335004 | — | — | — |
| apply_wrap.test | COMPILE | 0.101774 | 0.243224 | 0.294450 | — | — | — |
| arithmetic.test | COMPILE | 0.107385 | 0.268558 | 0.327526 | — | — | — |
| as_sequence.test | COMPILE | 0.117295 | 0.297260 | 0.333298 | — | — | — |
| assert.test | COMPILE | 0.027112 | 0.054474 | 0.060818 | — | — | — |
| at.test | COMPILE | 0.114167 | 0.292572 | 0.343882 | — | — | — |
| back.test | COMPILE | 0.111352 | 0.276872 | 0.325494 | — | — | — |
| bind.test | COMPILE | 0.105727 | 0.266497 | 0.317365 | — | — | — |
| bitwise.test | COMPILE | 0.109305 | 0.270069 | 0.324215 | — | — | — |
| bool.test | RUN | 0.098671 | 0.242574 | 0.291644 | 0.001046 | 0.001250 | 0.001150 |
| comparison.test | COMPILE | 0.106373 | 0.273023 | 0.310000 | — | — | — |
| contains.test | COMPILE | 0.128187 | 0.334289 | 0.380638 | — | — | — |
| copy.test | COMPILE | 0.152919 | 0.390855 | 0.464587 | — | — | — |
| copy_if.test | COMPILE | 0.136875 | 0.353564 | 0.410947 | — | — | — |
| count.test | COMPILE | 0.131331 | 0.325244 | 0.390988 | — | — | — |
| count_if.test | COMPILE | 0.139006 | 0.337716 | 0.413832 | — | — | — |
| deque.test | COMPILE | 0.134345 | 0.329935 | 0.389846 | — | — | — |
| distance.test | COMPILE | 0.117217 | 0.304316 | 0.360535 | — | — | — |
| empty.test | COMPILE | 0.107168 | 0.267724 | 0.317808 | — | — | — |
| equal.test | COMPILE | 0.126555 | 0.307912 | 0.372201 | — | — | — |
| erase.test | COMPILE | 0.143464 | 0.359681 | 0.425834 | — | — | — |
| erase_range.test | COMPILE | 0.134012 | 0.349967 | 0.409363 | — | — | — |
| eval_if.test | COMPILE | 0.100998 | 0.245379 | 0.292568 | — | — | — |
| filter_view.test | COMPILE | 0.134732 | 0.338751 | 0.405226 | — | — | — |
| find.test | COMPILE | 0.129082 | 0.328647 | 0.390060 | — | — | — |
| find_if.test | COMPILE | 0.134238 | 0.338988 | 0.403995 | — | — | — |
| fold.test | COMPILE | 0.136141 | 0.355331 | 0.426916 | — | — | — |
| for_each.test | RUN | 0.198143 | 0.505734 | 0.671874 | 0.001135 | 0.001334 | 0.001171 |
| front.test | COMPILE | 0.108844 | 0.280574 | 0.331134 | — | — | — |
| get_tag_def.test | COMPILE | 0.097896 | 0.234917 | 0.297725 | — | — | — |
| has_xxx.test | COMPILE | 0.104849 | 0.255128 | 0.328197 | — | — | — |
| identity.test | COMPILE | 0.107054 | 0.267789 | 0.328344 | — | — | — |
| if.test | COMPILE | 0.097654 | 0.238357 | 0.284917 | — | — | — |
| index_of.test | COMPILE | 0.124209 | 0.309552 | 0.366469 | — | — | — |
| inherit.test | COMPILE | 0.102903 | 0.249076 | 0.294472 | — | — | — |
| insert.test | COMPILE | 0.141004 | 0.365041 | 0.435546 | — | — | — |
| insert_range.test | COMPILE | 0.195790 | 0.505398 | 0.634855 | — | — | — |
| int.test | RUN | 0.102375 | 0.274136 | 0.320412 | 0.001354 | 0.001200 | 0.001092 |
| char.test | RUN | 0.103306 | 0.264273 | 0.323036 | 0.001189 | 0.001117 | 0.001050 |
| char_unsigned.test | RUN | 0.101685 | 0.274307 | 0.317738 | 0.001137 | 0.001315 | 0.001072 |
| integral_c.test | RUN | 0.124330 | 0.352233 | 0.401722 | 0.001097 | 0.001207 | 0.001116 |
| integral_c_unsigned.test | RUN | 0.117292 | 0.342299 | 0.390152 | 0.001055 | 0.001270 | 0.001093 |
| is_placeholder.test | COMPILE | 0.099538 | 0.245698 | 0.299177 | — | — | — |
| is_sequence.test | COMPILE | 0.112196 | 0.298270 | 0.348246 | — | — | — |
| iterator_tags.test | COMPILE | 0.095122 | 0.251390 | 0.301539 | — | — | — |
| joint_view.test | COMPILE | 0.131192 | 0.334802 | 0.399055 | — | — | — |
| lambda.test | COMPILE | 0.121926 | 0.315210 | 0.372833 | — | — | — |
| lambda_args.test | COMPILE | 0.113554 | 0.290996 | 0.373420 | — | — | — |
| list.test | COMPILE | 0.118886 | 0.311701 | 0.369921 | — | — | — |
| list_c.test | COMPILE | 0.117325 | 0.309375 | 0.380135 | — | — | — |
| logical.test | COMPILE | 0.092056 | 0.245643 | 0.301352 | — | — | — |
| lower_bound.test | COMPILE | 0.122037 | 0.315102 | 0.381040 | — | — | — |
| map.test | COMPILE | 0.145370 | 0.392871 | 0.481733 | — | — | — |
| max_element.test | COMPILE | 0.118460 | 0.297709 | 0.368819 | — | — | — |
| min_max.test | COMPILE | 0.100837 | 0.260937 | 0.308750 | — | — | — |
| multiset.test | COMPILE | 0.128591 | 0.339943 | 0.400051 | — | — | — |
| next.test | COMPILE | 0.095633 | 0.245895 | 0.304172 | — | — | — |
| no_has_xxx.test | COMPILE | 0.102584 | 0.255386 | 0.325479 | — | — | — |
| numeric_ops.test | COMPILE | 0.114102 | 0.298387 | 0.363332 | — | — | — |
| pair_view.test | COMPILE | 0.132684 | 0.333762 | 0.402521 | — | — | — |
| partition.test | COMPILE | 0.145139 | 0.370538 | 0.444601 | — | — | — |
| pop_front.test | COMPILE | 0.118017 | 0.297948 | 0.369371 | — | — | — |
| push_back.test | COMPILE | 0.100365 | 0.253862 | 0.316799 | — | — | — |
| push_front.test | COMPILE | 0.119252 | 0.302628 | 0.360084 | — | — | — |
| quote.test | COMPILE | 0.099235 | 0.239359 | 0.302286 | — | — | — |
| range_c.test | COMPILE | 0.125023 | 0.324169 | 0.387149 | — | — | — |
| remove.test | COMPILE | 0.130477 | 0.340153 | 0.392228 | — | — | — |
| remove_if.test | COMPILE | 0.134426 | 0.354483 | 0.413885 | — | — | — |
| replace.test | COMPILE | 0.144119 | 0.386584 | 0.443588 | — | — | — |
| replace_if.test | COMPILE | 0.149596 | 0.381240 | 0.456747 | — | — | — |
| reverse.test | COMPILE | 0.136905 | 0.349935 | 0.424644 | — | — | — |
| same_as.test | COMPILE | 0.105322 | 0.259446 | 0.324459 | — | — | — |
| set.test | COMPILE | 0.192796 | 0.507668 | 0.620132 | — | — | — |
| set_c.test | COMPILE | 0.143062 | 0.342676 | 0.423157 | — | — | — |
| single_view.test | COMPILE | 0.131423 | 0.320799 | 0.370003 | — | — | — |
| size.test | COMPILE | 0.119086 | 0.300344 | 0.347064 | — | — | — |
| size_t.test | RUN | 0.106004 | 0.273784 | 0.318329 | 0.001110 | 0.001211 | 0.001069 |
| sizeof.test | COMPILE | 0.097516 | 0.241434 | 0.281206 | — | — | — |
| sort.test | COMPILE | 0.155572 | 0.395328 | 0.463935 | — | — | — |
| stable_partition.test | COMPILE | 0.146200 | 0.380081 | 0.435093 | — | — | — |
| transform.test | COMPILE | 0.157164 | 0.407123 | 0.475824 | — | — | — |
| transform_view.test | COMPILE | 0.123373 | 0.327426 | 0.378152 | — | — | — |
| unique.test | COMPILE | 0.133266 | 0.343121 | 0.394310 | — | — | — |
| unpack_args.test | COMPILE | 0.117132 | 0.315593 | 0.364832 | — | — | — |
| upper_bound.test | COMPILE | 0.128308 | 0.314167 | 0.367908 | — | — | — |
| vector.test | COMPILE | 0.139387 | 0.381865 | 0.451181 | — | — | — |
| vector_c.test | COMPILE | 0.126924 | 0.312027 | 0.388535 | — | — | — |
| zip_view.test | COMPILE | 0.176135 | 0.477040 | 0.551186 | — | — | — |
| string.test | RUN | 0.295133 | 0.942376 | 0.862619 | 0.000855 | 0.000905 | 0.000817 |
| issue_69.test | RUN | 0.012491 | 0.034454 | 0.036379 | 0.000372 | 0.000478 | 0.001074 |
| issue_84.test | RUN | 0.024460 | 0.070332 | 0.067862 | 0.000358 | 0.000385 | 0.000757 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.020× | 1.017×, 1.024× | 0.994× |
| clang | 1.120× | 1.104×, 1.136× | 0.975× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45241427099).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.000793s | 0.000831s | 0.000835s | byte equality observed |
| char.test | 10 | 0.000791s | 0.000809s | 0.000828s | byte equality observed |
| char_unsigned.test | 10 | 0.000810s | 0.000786s | 0.000819s | byte equality observed |
| for_each.test | 10 | 0.000817s | 0.000845s | 0.000840s | byte equality observed |
| int.test | 10 | 0.000804s | 0.000806s | 0.000849s | byte equality observed |
| integral_c.test | 10 | 0.000793s | 0.000801s | 0.000842s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.000787s | 0.000804s | 0.000814s | byte equality observed |
| issue_69.test | 10 | 0.000371s | 0.000366s | 0.000793s | byte equality observed |
| issue_84.test | 10 | 0.000366s | 0.000367s | 0.000784s | byte equality observed |
| size_t.test | 10 | 0.000802s | 0.000799s | 0.000793s | byte equality observed |
| string.test | 10 | 0.000820s | 0.000843s | 0.000803s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45241427099).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
