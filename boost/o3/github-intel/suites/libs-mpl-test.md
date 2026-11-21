# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.292226 | 0.853072 | 0.814370 | — | — | — |
| largest_int.test | COMPILE | 0.099804 | 0.240237 | 0.278969 | — | — | — |
| msvc_is_class.test | COMPILE | 0.008728 | 0.029465 | 0.034378 | — | — | — |
| template_arity.test | COMPILE | 0.096993 | 0.237578 | 0.273974 | — | — | — |
| is_seq.test | COMPILE | 0.003708 | 0.010481 | 0.020425 | — | — | — |
| token_equal.test | COMPILE | 0.003916 | 0.010853 | 0.019553 | — | — | — |
| advance.test | COMPILE | 0.105660 | 0.272016 | 0.315136 | — | — | — |
| always.test | COMPILE | 0.108925 | 0.273295 | 0.320698 | — | — | — |
| apply.test | COMPILE | 0.115545 | 0.281979 | 0.336732 | — | — | — |
| apply_wrap.test | COMPILE | 0.096352 | 0.241652 | 0.293459 | — | — | — |
| arithmetic.test | COMPILE | 0.109407 | 0.277409 | 0.327916 | — | — | — |
| as_sequence.test | COMPILE | 0.115506 | 0.297240 | 0.338380 | — | — | — |
| assert.test | COMPILE | 0.026318 | 0.055294 | 0.064618 | — | — | — |
| at.test | COMPILE | 0.112500 | 0.294064 | 0.344724 | — | — | — |
| back.test | COMPILE | 0.109240 | 0.286238 | 0.328400 | — | — | — |
| bind.test | COMPILE | 0.104998 | 0.269032 | 0.316677 | — | — | — |
| bitwise.test | COMPILE | 0.106271 | 0.271883 | 0.327705 | — | — | — |
| bool.test | RUN | 0.094602 | 0.242143 | 0.293847 | 0.001113 | 0.001270 | 0.001121 |
| comparison.test | COMPILE | 0.103138 | 0.271390 | 0.305900 | — | — | — |
| contains.test | COMPILE | 0.131614 | 0.330894 | 0.383901 | — | — | — |
| copy.test | COMPILE | 0.156633 | 0.401545 | 0.460484 | — | — | — |
| copy_if.test | COMPILE | 0.136879 | 0.359035 | 0.414624 | — | — | — |
| count.test | COMPILE | 0.135330 | 0.327719 | 0.389417 | — | — | — |
| count_if.test | COMPILE | 0.140789 | 0.338590 | 0.411643 | — | — | — |
| deque.test | COMPILE | 0.132578 | 0.338332 | 0.389073 | — | — | — |
| distance.test | COMPILE | 0.123203 | 0.310173 | 0.360111 | — | — | — |
| empty.test | COMPILE | 0.107931 | 0.275649 | 0.311526 | — | — | — |
| equal.test | COMPILE | 0.128663 | 0.313961 | 0.371746 | — | — | — |
| erase.test | COMPILE | 0.144513 | 0.371818 | 0.429846 | — | — | — |
| erase_range.test | COMPILE | 0.141695 | 0.355345 | 0.404086 | — | — | — |
| eval_if.test | COMPILE | 0.102451 | 0.253611 | 0.297442 | — | — | — |
| filter_view.test | COMPILE | 0.140356 | 0.342633 | 0.406228 | — | — | — |
| find.test | COMPILE | 0.135248 | 0.340391 | 0.391701 | — | — | — |
| find_if.test | COMPILE | 0.139394 | 0.344485 | 0.403180 | — | — | — |
| fold.test | COMPILE | 0.142202 | 0.359881 | 0.424284 | — | — | — |
| for_each.test | RUN | 0.207418 | 0.514409 | 0.673023 | 0.001158 | 0.001380 | 0.001087 |
| front.test | COMPILE | 0.111427 | 0.290414 | 0.329230 | — | — | — |
| get_tag_def.test | COMPILE | 0.099619 | 0.237684 | 0.288955 | — | — | — |
| has_xxx.test | COMPILE | 0.107177 | 0.262585 | 0.337838 | — | — | — |
| identity.test | COMPILE | 0.110126 | 0.274667 | 0.327716 | — | — | — |
| if.test | COMPILE | 0.099551 | 0.242198 | 0.294428 | — | — | — |
| index_of.test | COMPILE | 0.127520 | 0.318890 | 0.377811 | — | — | — |
| inherit.test | COMPILE | 0.103522 | 0.251244 | 0.308532 | — | — | — |
| insert.test | COMPILE | 0.145212 | 0.379451 | 0.444091 | — | — | — |
| insert_range.test | COMPILE | 0.203302 | 0.511389 | 0.622189 | — | — | — |
| int.test | RUN | 0.104966 | 0.279198 | 0.324734 | 0.001429 | 0.001169 | 0.001019 |
| char.test | RUN | 0.106672 | 0.275530 | 0.325059 | 0.001318 | 0.001166 | 0.001051 |
| char_unsigned.test | RUN | 0.107396 | 0.276213 | 0.319486 | 0.001091 | 0.001365 | 0.001089 |
| integral_c.test | RUN | 0.121425 | 0.356752 | 0.402736 | 0.001022 | 0.001278 | 0.001130 |
| integral_c_unsigned.test | RUN | 0.123047 | 0.350702 | 0.399968 | 0.001143 | 0.001314 | 0.001048 |
| is_placeholder.test | COMPILE | 0.101777 | 0.244281 | 0.282333 | — | — | — |
| is_sequence.test | COMPILE | 0.122180 | 0.307208 | 0.355030 | — | — | — |
| iterator_tags.test | COMPILE | 0.104496 | 0.254796 | 0.301224 | — | — | — |
| joint_view.test | COMPILE | 0.136023 | 0.345487 | 0.405956 | — | — | — |
| lambda.test | COMPILE | 0.127827 | 0.313401 | 0.376478 | — | — | — |
| lambda_args.test | COMPILE | 0.121052 | 0.299256 | 0.369282 | — | — | — |
| list.test | COMPILE | 0.126169 | 0.314615 | 0.367899 | — | — | — |
| list_c.test | COMPILE | 0.125001 | 0.310703 | 0.380295 | — | — | — |
| logical.test | COMPILE | 0.100368 | 0.250258 | 0.300094 | — | — | — |
| lower_bound.test | COMPILE | 0.129499 | 0.313448 | 0.364472 | — | — | — |
| map.test | COMPILE | 0.156620 | 0.396050 | 0.460367 | — | — | — |
| max_element.test | COMPILE | 0.124430 | 0.306110 | 0.360988 | — | — | — |
| min_max.test | COMPILE | 0.104475 | 0.261798 | 0.308120 | — | — | — |
| multiset.test | COMPILE | 0.132988 | 0.341493 | 0.391159 | — | — | — |
| next.test | COMPILE | 0.101819 | 0.247756 | 0.288646 | — | — | — |
| no_has_xxx.test | COMPILE | 0.105943 | 0.263630 | 0.326446 | — | — | — |
| numeric_ops.test | COMPILE | 0.119468 | 0.303012 | 0.358219 | — | — | — |
| pair_view.test | COMPILE | 0.136418 | 0.337145 | 0.390865 | — | — | — |
| partition.test | COMPILE | 0.151097 | 0.377350 | 0.433970 | — | — | — |
| pop_front.test | COMPILE | 0.122128 | 0.295461 | 0.359198 | — | — | — |
| push_back.test | COMPILE | 0.104580 | 0.249380 | 0.304637 | — | — | — |
| push_front.test | COMPILE | 0.125992 | 0.302087 | 0.348589 | — | — | — |
| quote.test | COMPILE | 0.102133 | 0.245618 | 0.296804 | — | — | — |
| range_c.test | COMPILE | 0.129933 | 0.328189 | 0.367830 | — | — | — |
| remove.test | COMPILE | 0.135414 | 0.343961 | 0.384989 | — | — | — |
| remove_if.test | COMPILE | 0.141770 | 0.349583 | 0.410481 | — | — | — |
| replace.test | COMPILE | 0.150439 | 0.381743 | 0.439386 | — | — | — |
| replace_if.test | COMPILE | 0.148897 | 0.389641 | 0.445966 | — | — | — |
| reverse.test | COMPILE | 0.144488 | 0.361446 | 0.424166 | — | — | — |
| same_as.test | COMPILE | 0.111622 | 0.269598 | 0.314305 | — | — | — |
| set.test | COMPILE | 0.186794 | 0.502334 | 0.625132 | — | — | — |
| set_c.test | COMPILE | 0.140904 | 0.355874 | 0.412279 | — | — | — |
| single_view.test | COMPILE | 0.125344 | 0.317773 | 0.378400 | — | — | — |
| size.test | COMPILE | 0.119881 | 0.301972 | 0.348657 | — | — | — |
| size_t.test | RUN | 0.107960 | 0.278545 | 0.321749 | 0.001237 | 0.001135 | 0.001071 |
| sizeof.test | COMPILE | 0.099243 | 0.244091 | 0.283912 | — | — | — |
| sort.test | COMPILE | 0.157571 | 0.401843 | 0.469436 | — | — | — |
| stable_partition.test | COMPILE | 0.152330 | 0.380037 | 0.435024 | — | — | — |
| transform.test | COMPILE | 0.161784 | 0.406903 | 0.477510 | — | — | — |
| transform_view.test | COMPILE | 0.131162 | 0.325016 | 0.370730 | — | — | — |
| unique.test | COMPILE | 0.133637 | 0.341696 | 0.394989 | — | — | — |
| unpack_args.test | COMPILE | 0.122696 | 0.318754 | 0.366293 | — | — | — |
| upper_bound.test | COMPILE | 0.128135 | 0.319607 | 0.375617 | — | — | — |
| vector.test | COMPILE | 0.147783 | 0.386610 | 0.437404 | — | — | — |
| vector_c.test | COMPILE | 0.124923 | 0.315526 | 0.386471 | — | — | — |
| zip_view.test | COMPILE | 0.181014 | 0.483627 | 0.556109 | — | — | — |
| string.test | RUN | 0.297515 | 0.927689 | 0.832470 | 0.000932 | 0.000851 | 0.000819 |
| issue_69.test | RUN | 0.011835 | 0.037533 | 0.035956 | 0.000365 | 0.000457 | 0.001147 |
| issue_84.test | RUN | 0.029365 | 0.068938 | 0.071191 | 0.000361 | 0.000390 | 0.000833 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.016× | 1.011×, 1.021× | 1.002× |
| clang | 1.106× | 1.115×, 1.096× | 0.980× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44801983152).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.000805s | 0.000802s | 0.000812s | byte equality observed |
| char.test | 10 | 0.000820s | 0.000812s | 0.000802s | byte equality observed |
| char_unsigned.test | 10 | 0.000793s | 0.000809s | 0.000813s | byte equality observed |
| for_each.test | 10 | 0.000815s | 0.000831s | 0.000839s | byte equality observed |
| int.test | 10 | 0.000778s | 0.000837s | 0.000832s | byte equality observed |
| integral_c.test | 10 | 0.000804s | 0.000819s | 0.000824s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.000802s | 0.000788s | 0.000807s | byte equality observed |
| issue_69.test | 10 | 0.000367s | 0.000368s | 0.000787s | byte equality observed |
| issue_84.test | 10 | 0.000359s | 0.000364s | 0.000789s | byte equality observed |
| size_t.test | 10 | 0.000803s | 0.000810s | 0.000798s | byte equality observed |
| string.test | 10 | 0.000821s | 0.000795s | 0.000799s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44801983152).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
