# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.403107 | 1.007175 | 1.053263 | — | — | — |
| largest_int.test | COMPILE | 0.183106 | 0.283015 | 0.375944 | — | — | — |
| msvc_is_class.test | COMPILE | 0.019129 | 0.037419 | 0.041553 | — | — | — |
| template_arity.test | COMPILE | 0.175545 | 0.269458 | 0.378585 | — | — | — |
| is_seq.test | COMPILE | 0.007958 | 0.013468 | 0.030014 | — | — | — |
| token_equal.test | COMPILE | 0.005503 | 0.014251 | 0.029313 | — | — | — |
| advance.test | COMPILE | 0.143072 | 0.319398 | 0.430659 | — | — | — |
| always.test | COMPILE | 0.148559 | 0.321235 | 0.430437 | — | — | — |
| apply.test | COMPILE | 0.153958 | 0.330744 | 0.467682 | — | — | — |
| apply_wrap.test | COMPILE | 0.134885 | 0.288499 | 0.388392 | — | — | — |
| arithmetic.test | COMPILE | 0.142453 | 0.322902 | 0.408233 | — | — | — |
| as_sequence.test | COMPILE | 0.156334 | 0.360353 | 0.470358 | — | — | — |
| assert.test | COMPILE | 0.036435 | 0.070395 | 0.088750 | — | — | — |
| at.test | COMPILE | 0.152731 | 0.350951 | 0.465116 | — | — | — |
| back.test | COMPILE | 0.149002 | 0.338129 | 0.437876 | — | — | — |
| bind.test | COMPILE | 0.141954 | 0.319722 | 0.436179 | — | — | — |
| bitwise.test | COMPILE | 0.147969 | 0.328738 | 0.445000 | — | — | — |
| bool.test | RUN | 0.132871 | 0.291900 | 0.395717 | 0.001566 | 0.001731 | 0.001969 |
| comparison.test | COMPILE | 0.141571 | 0.330532 | 0.425840 | — | — | — |
| contains.test | COMPILE | 0.172292 | 0.389865 | 0.513017 | — | — | — |
| copy.test | COMPILE | 0.210367 | 0.465487 | 0.641183 | — | — | — |
| copy_if.test | COMPILE | 0.184152 | 0.421252 | 0.552563 | — | — | — |
| count.test | COMPILE | 0.173583 | 0.380831 | 0.540049 | — | — | — |
| count_if.test | COMPILE | 0.179157 | 0.401119 | 0.560623 | — | — | — |
| deque.test | COMPILE | 0.167954 | 0.399785 | 0.514884 | — | — | — |
| distance.test | COMPILE | 0.159138 | 0.368210 | 0.482791 | — | — | — |
| empty.test | COMPILE | 0.138410 | 0.324503 | 0.430042 | — | — | — |
| equal.test | COMPILE | 0.165687 | 0.366703 | 0.501351 | — | — | — |
| erase.test | COMPILE | 0.185280 | 0.423638 | 0.575527 | — | — | — |
| erase_range.test | COMPILE | 0.180666 | 0.400408 | 0.550895 | — | — | — |
| eval_if.test | COMPILE | 0.129658 | 0.290502 | 0.393264 | — | — | — |
| filter_view.test | COMPILE | 0.175236 | 0.381131 | 0.542164 | — | — | — |
| find.test | COMPILE | 0.175829 | 0.369325 | 0.522054 | — | — | — |
| find_if.test | COMPILE | 0.176153 | 0.412076 | 0.534949 | — | — | — |
| fold.test | COMPILE | 0.188586 | 0.411920 | 0.574044 | — | — | — |
| for_each.test | RUN | 0.266192 | 0.600633 | 0.888609 | 0.001594 | 0.001470 | 0.001920 |
| front.test | COMPILE | 0.148599 | 0.338268 | 0.437720 | — | — | — |
| get_tag_def.test | COMPILE | 0.132556 | 0.268523 | 0.406292 | — | — | — |
| has_xxx.test | COMPILE | 0.139341 | 0.300067 | 0.435500 | — | — | — |
| identity.test | COMPILE | 0.143774 | 0.300289 | 0.431182 | — | — | — |
| if.test | COMPILE | 0.127646 | 0.278467 | 0.367758 | — | — | — |
| index_of.test | COMPILE | 0.170345 | 0.380977 | 0.497128 | — | — | — |
| inherit.test | COMPILE | 0.136526 | 0.301587 | 0.403865 | — | — | — |
| insert.test | COMPILE | 0.189296 | 0.441049 | 0.616011 | — | — | — |
| insert_range.test | COMPILE | 0.261360 | 0.612272 | 0.889337 | — | — | — |
| int.test | RUN | 0.136148 | 0.326539 | 0.459423 | 0.001613 | 0.001779 | 0.001556 |
| char.test | RUN | 0.137888 | 0.334791 | 0.442510 | 0.001674 | 0.001761 | 0.001708 |
| char_unsigned.test | RUN | 0.138821 | 0.342627 | 0.416072 | 0.001772 | 0.001886 | 0.001888 |
| integral_c.test | RUN | 0.155991 | 0.417612 | 0.534972 | 0.001722 | 0.001842 | 0.001888 |
| integral_c_unsigned.test | RUN | 0.149884 | 0.407228 | 0.495806 | 0.001640 | 0.001716 | 0.001585 |
| is_placeholder.test | COMPILE | 0.134113 | 0.299261 | 0.420670 | — | — | — |
| is_sequence.test | COMPILE | 0.164353 | 0.367485 | 0.450043 | — | — | — |
| iterator_tags.test | COMPILE | 0.135201 | 0.302169 | 0.384910 | — | — | — |
| joint_view.test | COMPILE | 0.180311 | 0.409677 | 0.536998 | — | — | — |
| lambda.test | COMPILE | 0.167355 | 0.380846 | 0.501915 | — | — | — |
| lambda_args.test | COMPILE | 0.159459 | 0.340303 | 0.510598 | — | — | — |
| list.test | COMPILE | 0.165110 | 0.381214 | 0.498181 | — | — | — |
| list_c.test | COMPILE | 0.163670 | 0.371929 | 0.505363 | — | — | — |
| logical.test | COMPILE | 0.138060 | 0.286161 | 0.391297 | — | — | — |
| lower_bound.test | COMPILE | 0.170577 | 0.384342 | 0.507016 | — | — | — |
| map.test | COMPILE | 0.201262 | 0.477080 | 0.632045 | — | — | — |
| max_element.test | COMPILE | 0.159189 | 0.351253 | 0.491280 | — | — | — |
| min_max.test | COMPILE | 0.137572 | 0.312863 | 0.400323 | — | — | — |
| multiset.test | COMPILE | 0.175059 | 0.411763 | 0.525475 | — | — | — |
| next.test | COMPILE | 0.131420 | 0.282090 | 0.403467 | — | — | — |
| no_has_xxx.test | COMPILE | 0.144894 | 0.322011 | 0.448422 | — | — | — |
| numeric_ops.test | COMPILE | 0.162493 | 0.353666 | 0.472852 | — | — | — |
| pair_view.test | COMPILE | 0.187719 | 0.400490 | 0.550095 | — | — | — |
| partition.test | COMPILE | 0.194472 | 0.447340 | 0.604817 | — | — | — |
| pop_front.test | COMPILE | 0.165473 | 0.364699 | 0.489527 | — | — | — |
| push_back.test | COMPILE | 0.135090 | 0.314899 | 0.431848 | — | — | — |
| push_front.test | COMPILE | 0.162512 | 0.364865 | 0.500860 | — | — | — |
| quote.test | COMPILE | 0.137253 | 0.292383 | 0.420173 | — | — | — |
| range_c.test | COMPILE | 0.166571 | 0.385802 | 0.514243 | — | — | — |
| remove.test | COMPILE | 0.178979 | 0.411358 | 0.542087 | — | — | — |
| remove_if.test | COMPILE | 0.181192 | 0.422320 | 0.574568 | — | — | — |
| replace.test | COMPILE | 0.197194 | 0.455826 | 0.608986 | — | — | — |
| replace_if.test | COMPILE | 0.192502 | 0.464840 | 0.620334 | — | — | — |
| reverse.test | COMPILE | 0.190750 | 0.433704 | 0.586266 | — | — | — |
| same_as.test | COMPILE | 0.142505 | 0.326501 | 0.469273 | — | — | — |
| set.test | COMPILE | 0.254222 | 0.607944 | 0.930432 | — | — | — |
| set_c.test | COMPILE | 0.182844 | 0.409514 | 0.588331 | — | — | — |
| single_view.test | COMPILE | 0.168908 | 0.390862 | 0.518112 | — | — | — |
| size.test | COMPILE | 0.161370 | 0.362940 | 0.483995 | — | — | — |
| size_t.test | RUN | 0.143737 | 0.330465 | 0.456832 | 0.001560 | 0.001717 | 0.001932 |
| sizeof.test | COMPILE | 0.132162 | 0.294467 | 0.416074 | — | — | — |
| sort.test | COMPILE | 0.211321 | 0.463614 | 0.654798 | — | — | — |
| stable_partition.test | COMPILE | 0.191928 | 0.439686 | 0.614544 | — | — | — |
| transform.test | COMPILE | 0.210788 | 0.478392 | 0.646100 | — | — | — |
| transform_view.test | COMPILE | 0.174590 | 0.385864 | 0.530960 | — | — | — |
| unique.test | COMPILE | 0.180884 | 0.412835 | 0.550786 | — | — | — |
| unpack_args.test | COMPILE | 0.164143 | 0.382168 | 0.510667 | — | — | — |
| upper_bound.test | COMPILE | 0.173385 | 0.371058 | 0.511651 | — | — | — |
| vector.test | COMPILE | 0.192446 | 0.445874 | 0.622543 | — | — | — |
| vector_c.test | COMPILE | 0.168003 | 0.386868 | 0.522540 | — | — | — |
| zip_view.test | COMPILE | 0.239709 | 0.561176 | 0.737241 | — | — | — |
| string.test | RUN | 0.377339 | 1.116260 | 1.098610 | 0.001427 | 0.001368 | 0.001343 |
| issue_69.test | RUN | 0.017934 | 0.047165 | 0.053480 | 0.000619 | 0.000711 | 0.001873 |
| issue_84.test | RUN | 0.041384 | 0.084452 | 0.097620 | 0.000651 | 0.000565 | 0.001379 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.981×† | 0.960×, 1.003× | 0.924× |
| clang | 1.204× | 1.195×, 1.214× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44830361139).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.000972s | 0.000993s | 0.001034s | byte equality observed |
| char.test | 10 | 0.000983s | 0.000978s | 0.001091s | byte equality observed |
| char_unsigned.test | 10 | 0.001004s | 0.001001s | 0.001074s | byte equality observed |
| for_each.test | 10 | 0.000995s | 0.000992s | 0.001097s | byte equality observed |
| int.test | 10 | 0.001004s | 0.001006s | 0.001070s | byte equality observed |
| integral_c.test | 10 | 0.000982s | 0.000995s | 0.001084s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.001007s | 0.001025s | 0.001074s | byte equality observed |
| issue_69.test | 10 | 0.000459s | 0.000469s | 0.001066s | byte equality observed |
| issue_84.test | 10 | 0.000462s | 0.000466s | 0.001045s | byte equality observed |
| size_t.test | 10 | 0.001004s | 0.001036s | 0.001070s | byte equality observed |
| string.test | 10 | 0.000991s | 0.000994s | 0.001126s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44830361139).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
