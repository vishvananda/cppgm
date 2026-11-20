# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.292712 | 0.845626 | 0.799028 | — | — | — |
| largest_int.test | COMPILE | 0.095365 | 0.228609 | 0.297903 | — | — | — |
| msvc_is_class.test | COMPILE | 0.011779 | 0.028766 | 0.034520 | — | — | — |
| template_arity.test | COMPILE | 0.090541 | 0.231555 | 0.296644 | — | — | — |
| is_seq.test | COMPILE | 0.003706 | 0.010229 | 0.020661 | — | — | — |
| token_equal.test | COMPILE | 0.003848 | 0.010372 | 0.021129 | — | — | — |
| advance.test | COMPILE | 0.102022 | 0.262643 | 0.316990 | — | — | — |
| always.test | COMPILE | 0.105085 | 0.262420 | 0.333429 | — | — | — |
| apply.test | COMPILE | 0.112512 | 0.278520 | 0.344985 | — | — | — |
| apply_wrap.test | COMPILE | 0.093557 | 0.243741 | 0.291962 | — | — | — |
| arithmetic.test | COMPILE | 0.105838 | 0.263779 | 0.329361 | — | — | — |
| as_sequence.test | COMPILE | 0.115359 | 0.294749 | 0.346507 | — | — | — |
| assert.test | COMPILE | 0.026809 | 0.054975 | 0.061581 | — | — | — |
| at.test | COMPILE | 0.111799 | 0.288627 | 0.345882 | — | — | — |
| back.test | COMPILE | 0.108182 | 0.278222 | 0.329646 | — | — | — |
| bind.test | COMPILE | 0.105356 | 0.261877 | 0.321821 | — | — | — |
| bitwise.test | COMPILE | 0.103347 | 0.269500 | 0.326608 | — | — | — |
| bool.test | RUN | 0.094169 | 0.242277 | 0.298461 | 0.001012 | 0.001263 | 0.001159 |
| comparison.test | COMPILE | 0.102860 | 0.262801 | 0.322215 | — | — | — |
| contains.test | COMPILE | 0.127146 | 0.326805 | 0.387384 | — | — | — |
| copy.test | COMPILE | 0.151737 | 0.398082 | 0.466877 | — | — | — |
| copy_if.test | COMPILE | 0.136622 | 0.353965 | 0.413702 | — | — | — |
| count.test | COMPILE | 0.128774 | 0.328756 | 0.396930 | — | — | — |
| count_if.test | COMPILE | 0.134231 | 0.336900 | 0.407749 | — | — | — |
| deque.test | COMPILE | 0.127868 | 0.333242 | 0.394246 | — | — | — |
| distance.test | COMPILE | 0.119678 | 0.306111 | 0.362292 | — | — | — |
| empty.test | COMPILE | 0.103587 | 0.269540 | 0.321451 | — | — | — |
| equal.test | COMPILE | 0.119804 | 0.306007 | 0.372705 | — | — | — |
| erase.test | COMPILE | 0.139293 | 0.363353 | 0.437565 | — | — | — |
| erase_range.test | COMPILE | 0.133363 | 0.348958 | 0.410315 | — | — | — |
| eval_if.test | COMPILE | 0.095353 | 0.249355 | 0.301517 | — | — | — |
| filter_view.test | COMPILE | 0.131164 | 0.337038 | 0.406853 | — | — | — |
| find.test | COMPILE | 0.131308 | 0.332060 | 0.392459 | — | — | — |
| find_if.test | COMPILE | 0.130988 | 0.340029 | 0.404650 | — | — | — |
| fold.test | COMPILE | 0.138883 | 0.356094 | 0.424998 | — | — | — |
| for_each.test | RUN | 0.205282 | 0.505938 | 0.660404 | 0.001161 | 0.001278 | 0.001142 |
| front.test | COMPILE | 0.108382 | 0.286070 | 0.334797 | — | — | — |
| get_tag_def.test | COMPILE | 0.096246 | 0.235884 | 0.286399 | — | — | — |
| has_xxx.test | COMPILE | 0.106196 | 0.260834 | 0.321495 | — | — | — |
| identity.test | COMPILE | 0.109977 | 0.267474 | 0.323090 | — | — | — |
| if.test | COMPILE | 0.097438 | 0.236812 | 0.288967 | — | — | — |
| index_of.test | COMPILE | 0.123268 | 0.304938 | 0.370138 | — | — | — |
| inherit.test | COMPILE | 0.097845 | 0.247826 | 0.301742 | — | — | — |
| insert.test | COMPILE | 0.146304 | 0.369991 | 0.443912 | — | — | — |
| insert_range.test | COMPILE | 0.189769 | 0.494981 | 0.624744 | — | — | — |
| int.test | RUN | 0.101124 | 0.272885 | 0.322629 | 0.001111 | 0.001313 | 0.001005 |
| char.test | RUN | 0.103021 | 0.270948 | 0.324374 | 0.001103 | 0.001197 | 0.001158 |
| char_unsigned.test | RUN | 0.106126 | 0.265716 | 0.319079 | 0.001099 | 0.001250 | 0.001155 |
| integral_c.test | RUN | 0.118884 | 0.348323 | 0.400727 | 0.001151 | 0.001348 | 0.001193 |
| integral_c_unsigned.test | RUN | 0.117363 | 0.351937 | 0.397058 | 0.001125 | 0.001267 | 0.000869 |
| is_placeholder.test | COMPILE | 0.098917 | 0.239857 | 0.284737 | — | — | — |
| is_sequence.test | COMPILE | 0.118814 | 0.292457 | 0.353709 | — | — | — |
| iterator_tags.test | COMPILE | 0.103491 | 0.251157 | 0.306008 | — | — | — |
| joint_view.test | COMPILE | 0.130186 | 0.339851 | 0.406448 | — | — | — |
| lambda.test | COMPILE | 0.118967 | 0.313164 | 0.374587 | — | — | — |
| lambda_args.test | COMPILE | 0.116855 | 0.291499 | 0.377520 | — | — | — |
| list.test | COMPILE | 0.123115 | 0.315954 | 0.363724 | — | — | — |
| list_c.test | COMPILE | 0.121656 | 0.311394 | 0.371354 | — | — | — |
| logical.test | COMPILE | 0.096211 | 0.245367 | 0.292828 | — | — | — |
| lower_bound.test | COMPILE | 0.124362 | 0.312662 | 0.371815 | — | — | — |
| map.test | COMPILE | 0.147555 | 0.391804 | 0.472951 | — | — | — |
| max_element.test | COMPILE | 0.120987 | 0.298914 | 0.355014 | — | — | — |
| min_max.test | COMPILE | 0.099354 | 0.260342 | 0.306161 | — | — | — |
| multiset.test | COMPILE | 0.128480 | 0.336541 | 0.393530 | — | — | — |
| next.test | COMPILE | 0.097610 | 0.248203 | 0.300245 | — | — | — |
| no_has_xxx.test | COMPILE | 0.104775 | 0.259101 | 0.318548 | — | — | — |
| numeric_ops.test | COMPILE | 0.116268 | 0.303072 | 0.353778 | — | — | — |
| pair_view.test | COMPILE | 0.133727 | 0.336184 | 0.400841 | — | — | — |
| partition.test | COMPILE | 0.144463 | 0.373247 | 0.443795 | — | — | — |
| pop_front.test | COMPILE | 0.118848 | 0.297465 | 0.358599 | — | — | — |
| push_back.test | COMPILE | 0.100284 | 0.254355 | 0.304757 | — | — | — |
| push_front.test | COMPILE | 0.117454 | 0.300785 | 0.360769 | — | — | — |
| quote.test | COMPILE | 0.099587 | 0.240423 | 0.293104 | — | — | — |
| range_c.test | COMPILE | 0.121490 | 0.313672 | 0.376714 | — | — | — |
| remove.test | COMPILE | 0.132758 | 0.334946 | 0.397006 | — | — | — |
| remove_if.test | COMPILE | 0.133623 | 0.352066 | 0.416367 | — | — | — |
| replace.test | COMPILE | 0.143988 | 0.384619 | 0.439685 | — | — | — |
| replace_if.test | COMPILE | 0.152483 | 0.379633 | 0.454441 | — | — | — |
| reverse.test | COMPILE | 0.139385 | 0.351975 | 0.425341 | — | — | — |
| same_as.test | COMPILE | 0.106279 | 0.261782 | 0.317568 | — | — | — |
| set.test | COMPILE | 0.184279 | 0.491833 | 0.614640 | — | — | — |
| set_c.test | COMPILE | 0.135879 | 0.342075 | 0.426080 | — | — | — |
| single_view.test | COMPILE | 0.125486 | 0.321240 | 0.372629 | — | — | — |
| size.test | COMPILE | 0.117306 | 0.298495 | 0.350927 | — | — | — |
| size_t.test | RUN | 0.103842 | 0.276861 | 0.324648 | 0.001155 | 0.001222 | 0.001237 |
| sizeof.test | COMPILE | 0.095931 | 0.238407 | 0.284650 | — | — | — |
| sort.test | COMPILE | 0.151396 | 0.398279 | 0.470266 | — | — | — |
| stable_partition.test | COMPILE | 0.145242 | 0.379127 | 0.434267 | — | — | — |
| transform.test | COMPILE | 0.154464 | 0.398173 | 0.479280 | — | — | — |
| transform_view.test | COMPILE | 0.125175 | 0.311412 | 0.382649 | — | — | — |
| unique.test | COMPILE | 0.129029 | 0.336526 | 0.396223 | — | — | — |
| unpack_args.test | COMPILE | 0.121736 | 0.316610 | 0.371113 | — | — | — |
| upper_bound.test | COMPILE | 0.126117 | 0.312595 | 0.378413 | — | — | — |
| vector.test | COMPILE | 0.141737 | 0.372003 | 0.449217 | — | — | — |
| vector_c.test | COMPILE | 0.126847 | 0.311990 | 0.391604 | — | — | — |
| zip_view.test | COMPILE | 0.176920 | 0.477810 | 0.561913 | — | — | — |
| string.test | RUN | 0.297810 | 0.937025 | 0.848042 | 0.000852 | 0.000879 | 0.000865 |
| issue_69.test | RUN | 0.012154 | 0.035994 | 0.039225 | 0.000362 | 0.000494 | 0.001307 |
| issue_84.test | RUN | 0.028811 | 0.067900 | 0.072811 | 0.000405 | 0.000351 | 0.000811 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 0.999×, 1.003× | 1.018× |
| clang | 1.100× | 1.094×, 1.105× | 1.030× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44780058957).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.000795s | 0.000818s | 0.000790s | byte equality observed |
| char.test | 10 | 0.000809s | 0.000811s | 0.000789s | byte equality observed |
| char_unsigned.test | 10 | 0.000800s | 0.000812s | 0.000783s | byte equality observed |
| for_each.test | 10 | 0.000820s | 0.000830s | 0.000792s | byte equality observed |
| int.test | 10 | 0.000816s | 0.000773s | 0.000779s | byte equality observed |
| integral_c.test | 10 | 0.000805s | 0.000801s | 0.000795s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.000820s | 0.000781s | 0.000806s | byte equality observed |
| issue_69.test | 10 | 0.000364s | 0.000359s | 0.000767s | byte equality observed |
| issue_84.test | 10 | 0.000355s | 0.000354s | 0.000802s | byte equality observed |
| size_t.test | 10 | 0.000787s | 0.000795s | 0.000773s | byte equality observed |
| string.test | 10 | 0.000807s | 0.000833s | 0.000842s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44780058957).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
