# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.355627 | 0.998562 | 1.032818 | — | — | — |
| largest_int.test | COMPILE | 0.121896 | 0.283346 | 0.343281 | — | — | — |
| msvc_is_class.test | COMPILE | 0.015532 | 0.036914 | 0.041906 | — | — | — |
| template_arity.test | COMPILE | 0.123202 | 0.284979 | 0.346539 | — | — | — |
| is_seq.test | COMPILE | 0.005061 | 0.012996 | 0.026749 | — | — | — |
| token_equal.test | COMPILE | 0.005275 | 0.013118 | 0.026514 | — | — | — |
| advance.test | COMPILE | 0.136387 | 0.317980 | 0.414577 | — | — | — |
| always.test | COMPILE | 0.136742 | 0.311093 | 0.428009 | — | — | — |
| apply.test | COMPILE | 0.146286 | 0.350342 | 0.431127 | — | — | — |
| apply_wrap.test | COMPILE | 0.126308 | 0.286381 | 0.380690 | — | — | — |
| arithmetic.test | COMPILE | 0.137292 | 0.330598 | 0.430893 | — | — | — |
| as_sequence.test | COMPILE | 0.147917 | 0.358467 | 0.425161 | — | — | — |
| assert.test | COMPILE | 0.035380 | 0.075367 | 0.085801 | — | — | — |
| at.test | COMPILE | 0.146011 | 0.348114 | 0.447980 | — | — | — |
| back.test | COMPILE | 0.140430 | 0.338566 | 0.421679 | — | — | — |
| bind.test | COMPILE | 0.137171 | 0.322191 | 0.418144 | — | — | — |
| bitwise.test | COMPILE | 0.138937 | 0.332637 | 0.425013 | — | — | — |
| bool.test | RUN | 0.124434 | 0.283546 | 0.369068 | 0.001733 | 0.001656 | 0.001685 |
| comparison.test | COMPILE | 0.134502 | 0.321165 | 0.411773 | — | — | — |
| contains.test | COMPILE | 0.162830 | 0.392457 | 0.493076 | — | — | — |
| copy.test | COMPILE | 0.196539 | 0.469653 | 0.598176 | — | — | — |
| copy_if.test | COMPILE | 0.173228 | 0.418005 | 0.541240 | — | — | — |
| count.test | COMPILE | 0.165585 | 0.367740 | 0.527150 | — | — | — |
| count_if.test | COMPILE | 0.171259 | 0.431491 | 0.548002 | — | — | — |
| deque.test | COMPILE | 0.163988 | 0.421356 | 0.511817 | — | — | — |
| distance.test | COMPILE | 0.153791 | 0.363027 | 0.463322 | — | — | — |
| empty.test | COMPILE | 0.133365 | 0.321364 | 0.409037 | — | — | — |
| equal.test | COMPILE | 0.155254 | 0.375229 | 0.482990 | — | — | — |
| erase.test | COMPILE | 0.180614 | 0.441219 | 0.560288 | — | — | — |
| erase_range.test | COMPILE | 0.175043 | 0.409942 | 0.533071 | — | — | — |
| eval_if.test | COMPILE | 0.130282 | 0.307569 | 0.375265 | — | — | — |
| filter_view.test | COMPILE | 0.171784 | 0.415471 | 0.515960 | — | — | — |
| find.test | COMPILE | 0.169223 | 0.396899 | 0.505530 | — | — | — |
| find_if.test | COMPILE | 0.169809 | 0.415408 | 0.518726 | — | — | — |
| fold.test | COMPILE | 0.178522 | 0.414370 | 0.557483 | — | — | — |
| for_each.test | RUN | 0.256447 | 0.624269 | 0.851061 | 0.001433 | 0.001749 | 0.001728 |
| front.test | COMPILE | 0.140451 | 0.331868 | 0.424298 | — | — | — |
| get_tag_def.test | COMPILE | 0.125084 | 0.288229 | 0.395882 | — | — | — |
| has_xxx.test | COMPILE | 0.137945 | 0.323945 | 0.419051 | — | — | — |
| identity.test | COMPILE | 0.142442 | 0.326239 | 0.418390 | — | — | — |
| if.test | COMPILE | 0.125566 | 0.288030 | 0.360551 | — | — | — |
| index_of.test | COMPILE | 0.160526 | 0.377211 | 0.476779 | — | — | — |
| inherit.test | COMPILE | 0.128297 | 0.305413 | 0.377056 | — | — | — |
| insert.test | COMPILE | 0.183716 | 0.438765 | 0.580885 | — | — | — |
| insert_range.test | COMPILE | 0.249392 | 0.587186 | 0.842641 | — | — | — |
| int.test | RUN | 0.132963 | 0.323908 | 0.415622 | 0.001488 | 0.001872 | 0.001592 |
| char.test | RUN | 0.132704 | 0.327992 | 0.435374 | 0.001774 | 0.001542 | 0.001537 |
| char_unsigned.test | RUN | 0.136673 | 0.322786 | 0.400277 | 0.001758 | 0.001871 | 0.001708 |
| integral_c.test | RUN | 0.150409 | 0.416542 | 0.491725 | 0.001670 | 0.001644 | 0.001532 |
| integral_c_unsigned.test | RUN | 0.148435 | 0.415704 | 0.511072 | 0.001595 | 0.001802 | 0.001415 |
| is_placeholder.test | COMPILE | 0.127017 | 0.304193 | 0.403793 | — | — | — |
| is_sequence.test | COMPILE | 0.152710 | 0.348523 | 0.464336 | — | — | — |
| iterator_tags.test | COMPILE | 0.129519 | 0.297562 | 0.399328 | — | — | — |
| joint_view.test | COMPILE | 0.168309 | 0.405436 | 0.525867 | — | — | — |
| lambda.test | COMPILE | 0.156025 | 0.378379 | 0.493052 | — | — | — |
| lambda_args.test | COMPILE | 0.149473 | 0.360505 | 0.474474 | — | — | — |
| list.test | COMPILE | 0.154788 | 0.366800 | 0.498088 | — | — | — |
| list_c.test | COMPILE | 0.156549 | 0.358208 | 0.477086 | — | — | — |
| logical.test | COMPILE | 0.125576 | 0.236912 | 0.401118 | — | — | — |
| lower_bound.test | COMPILE | 0.162235 | 0.378331 | 0.482275 | — | — | — |
| map.test | COMPILE | 0.190160 | 0.462302 | 0.605569 | — | — | — |
| max_element.test | COMPILE | 0.154846 | 0.356746 | 0.473664 | — | — | — |
| min_max.test | COMPILE | 0.131329 | 0.314351 | 0.415637 | — | — | — |
| multiset.test | COMPILE | 0.168011 | 0.389936 | 0.513945 | — | — | — |
| next.test | COMPILE | 0.125654 | 0.303513 | 0.374326 | — | — | — |
| no_has_xxx.test | COMPILE | 0.135693 | 0.285788 | 0.424881 | — | — | — |
| numeric_ops.test | COMPILE | 0.148091 | 0.359946 | 0.467296 | — | — | — |
| pair_view.test | COMPILE | 0.173866 | 0.401388 | 0.514442 | — | — | — |
| partition.test | COMPILE | 0.190353 | 0.423909 | 0.573382 | — | — | — |
| pop_front.test | COMPILE | 0.151904 | 0.362493 | 0.467226 | — | — | — |
| push_back.test | COMPILE | 0.130000 | 0.302763 | 0.406236 | — | — | — |
| push_front.test | COMPILE | 0.153633 | 0.366760 | 0.460538 | — | — | — |
| quote.test | COMPILE | 0.127029 | 0.294442 | 0.389922 | — | — | — |
| range_c.test | COMPILE | 0.160848 | 0.381839 | 0.490556 | — | — | — |
| remove.test | COMPILE | 0.165754 | 0.394491 | 0.509374 | — | — | — |
| remove_if.test | COMPILE | 0.174263 | 0.415413 | 0.534340 | — | — | — |
| replace.test | COMPILE | 0.185959 | 0.455966 | 0.564632 | — | — | — |
| replace_if.test | COMPILE | 0.188163 | 0.464875 | 0.575794 | — | — | — |
| reverse.test | COMPILE | 0.176530 | 0.434007 | 0.551303 | — | — | — |
| same_as.test | COMPILE | 0.137476 | 0.311317 | 0.411380 | — | — | — |
| set.test | COMPILE | 0.236598 | 0.606612 | 0.807815 | — | — | — |
| set_c.test | COMPILE | 0.173394 | 0.410543 | 0.554991 | — | — | — |
| single_view.test | COMPILE | 0.158188 | 0.383931 | 0.474478 | — | — | — |
| size.test | COMPILE | 0.152802 | 0.365747 | 0.462286 | — | — | — |
| size_t.test | RUN | 0.132709 | 0.338835 | 0.405873 | 0.001479 | 0.001746 | 0.001707 |
| sizeof.test | COMPILE | 0.125094 | 0.295115 | 0.370450 | — | — | — |
| sort.test | COMPILE | 0.199780 | 0.471184 | 0.595752 | — | — | — |
| stable_partition.test | COMPILE | 0.185590 | 0.450452 | 0.567319 | — | — | — |
| transform.test | COMPILE | 0.199880 | 0.477306 | 0.619414 | — | — | — |
| transform_view.test | COMPILE | 0.161247 | 0.393588 | 0.489215 | — | — | — |
| unique.test | COMPILE | 0.171693 | 0.402643 | 0.518909 | — | — | — |
| unpack_args.test | COMPILE | 0.154920 | 0.375985 | 0.472140 | — | — | — |
| upper_bound.test | COMPILE | 0.162004 | 0.376594 | 0.472088 | — | — | — |
| vector.test | COMPILE | 0.186194 | 0.458721 | 0.568772 | — | — | — |
| vector_c.test | COMPILE | 0.161168 | 0.365923 | 0.512550 | — | — | — |
| zip_view.test | COMPILE | 0.226875 | 0.563398 | 0.689296 | — | — | — |
| string.test | RUN | 0.359356 | 1.121381 | 1.013326 | 0.001301 | 0.001310 | 0.001231 |
| issue_69.test | RUN | 0.015505 | 0.047790 | 0.049346 | 0.000569 | 0.000490 | 0.001458 |
| issue_84.test | RUN | 0.040035 | 0.087763 | 0.089238 | 0.000552 | 0.000562 | 0.001243 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.966×† | 0.920×, 1.012× | 0.982× |
| clang | 1.147×† | 1.114×, 1.181× | 1.008× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45272062060).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.001003s | 0.000991s | 0.001005s | byte equality observed |
| char.test | 10 | 0.000986s | 0.000990s | 0.001020s | byte equality observed |
| char_unsigned.test | 10 | 0.001016s | 0.000995s | 0.001042s | byte equality observed |
| for_each.test | 10 | 0.001025s | 0.001005s | 0.001007s | byte equality observed |
| int.test | 10 | 0.001009s | 0.000996s | 0.001021s | byte equality observed |
| integral_c.test | 10 | 0.000989s | 0.000999s | 0.001024s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.001025s | 0.001038s | 0.001006s | byte equality observed |
| issue_69.test | 10 | 0.000460s | 0.000461s | 0.000998s | byte equality observed |
| issue_84.test | 10 | 0.000463s | 0.000464s | 0.001001s | byte equality observed |
| size_t.test | 10 | 0.001010s | 0.000986s | 0.001014s | byte equality observed |
| string.test | 10 | 0.001010s | 0.001004s | 0.000994s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45272062060).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
