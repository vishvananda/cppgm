# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.400645 | 1.187959 | 1.123805 | — | — | — |
| largest_int.test | COMPILE | 0.139267 | 0.332100 | 0.399188 | — | — | — |
| msvc_is_class.test | COMPILE | 0.016714 | 0.040990 | 0.044338 | — | — | — |
| template_arity.test | COMPILE | 0.138160 | 0.324015 | 0.393944 | — | — | — |
| is_seq.test | COMPILE | 0.005270 | 0.014755 | 0.027175 | — | — | — |
| token_equal.test | COMPILE | 0.005447 | 0.014210 | 0.029555 | — | — | — |
| advance.test | COMPILE | 0.155646 | 0.364987 | 0.434099 | — | — | — |
| always.test | COMPILE | 0.153963 | 0.366413 | 0.444061 | — | — | — |
| apply.test | COMPILE | 0.161499 | 0.388761 | 0.469100 | — | — | — |
| apply_wrap.test | COMPILE | 0.141057 | 0.336492 | 0.397507 | — | — | — |
| arithmetic.test | COMPILE | 0.156885 | 0.368958 | 0.444967 | — | — | — |
| as_sequence.test | COMPILE | 0.164705 | 0.402484 | 0.462990 | — | — | — |
| assert.test | COMPILE | 0.038374 | 0.075341 | 0.086305 | — | — | — |
| at.test | COMPILE | 0.166902 | 0.399886 | 0.484694 | — | — | — |
| back.test | COMPILE | 0.156828 | 0.380573 | 0.451872 | — | — | — |
| bind.test | COMPILE | 0.156414 | 0.370444 | 0.441216 | — | — | — |
| bitwise.test | COMPILE | 0.154897 | 0.365938 | 0.458649 | — | — | — |
| bool.test | RUN | 0.140188 | 0.338115 | 0.397666 | 0.001502 | 0.001639 | 0.001679 |
| comparison.test | COMPILE | 0.153822 | 0.376496 | 0.442924 | — | — | — |
| contains.test | COMPILE | 0.182752 | 0.442565 | 0.526596 | — | — | — |
| copy.test | COMPILE | 0.218837 | 0.545960 | 0.653274 | — | — | — |
| copy_if.test | COMPILE | 0.196336 | 0.487946 | 0.572867 | — | — | — |
| count.test | COMPILE | 0.188006 | 0.443375 | 0.544048 | — | — | — |
| count_if.test | COMPILE | 0.196356 | 0.472761 | 0.569793 | — | — | — |
| deque.test | COMPILE | 0.185500 | 0.466231 | 0.535284 | — | — | — |
| distance.test | COMPILE | 0.173378 | 0.412164 | 0.506241 | — | — | — |
| empty.test | COMPILE | 0.150126 | 0.371793 | 0.434395 | — | — | — |
| equal.test | COMPILE | 0.177005 | 0.438118 | 0.507667 | — | — | — |
| erase.test | COMPILE | 0.201154 | 0.498825 | 0.606295 | — | — | — |
| erase_range.test | COMPILE | 0.192279 | 0.480001 | 0.562448 | — | — | — |
| eval_if.test | COMPILE | 0.142701 | 0.338599 | 0.397967 | — | — | — |
| filter_view.test | COMPILE | 0.192467 | 0.484696 | 0.559290 | — | — | — |
| find.test | COMPILE | 0.186997 | 0.459557 | 0.543204 | — | — | — |
| find_if.test | COMPILE | 0.192959 | 0.477334 | 0.557375 | — | — | — |
| fold.test | COMPILE | 0.199209 | 0.493279 | 0.601731 | — | — | — |
| for_each.test | RUN | 0.289443 | 0.714088 | 0.907324 | 0.001478 | 0.001656 | 0.001602 |
| front.test | COMPILE | 0.157031 | 0.390098 | 0.456989 | — | — | — |
| get_tag_def.test | COMPILE | 0.140600 | 0.341745 | 0.400133 | — | — | — |
| has_xxx.test | COMPILE | 0.153739 | 0.354006 | 0.448478 | — | — | — |
| identity.test | COMPILE | 0.159932 | 0.376539 | 0.444649 | — | — | — |
| if.test | COMPILE | 0.143536 | 0.329935 | 0.392599 | — | — | — |
| index_of.test | COMPILE | 0.179916 | 0.428484 | 0.521017 | — | — | — |
| inherit.test | COMPILE | 0.146722 | 0.342904 | 0.416382 | — | — | — |
| insert.test | COMPILE | 0.207751 | 0.520043 | 0.611170 | — | — | — |
| insert_range.test | COMPILE | 0.283525 | 0.698923 | 0.857842 | — | — | — |
| int.test | RUN | 0.148325 | 0.374651 | 0.442201 | 0.001678 | 0.001565 | 0.001586 |
| char.test | RUN | 0.148425 | 0.375776 | 0.439890 | 0.001622 | 0.001402 | 0.001624 |
| char_unsigned.test | RUN | 0.149743 | 0.378225 | 0.437155 | 0.001462 | 0.001680 | 0.001646 |
| integral_c.test | RUN | 0.166482 | 0.478950 | 0.537666 | 0.001605 | 0.001538 | 0.001721 |
| integral_c_unsigned.test | RUN | 0.170906 | 0.481333 | 0.551792 | 0.001536 | 0.001476 | 0.001657 |
| is_placeholder.test | COMPILE | 0.139996 | 0.331662 | 0.409659 | — | — | — |
| is_sequence.test | COMPILE | 0.170126 | 0.411620 | 0.478766 | — | — | — |
| iterator_tags.test | COMPILE | 0.146861 | 0.356333 | 0.411299 | — | — | — |
| joint_view.test | COMPILE | 0.187129 | 0.471235 | 0.554503 | — | — | — |
| lambda.test | COMPILE | 0.175441 | 0.435258 | 0.519871 | — | — | — |
| lambda_args.test | COMPILE | 0.166600 | 0.406851 | 0.501661 | — | — | — |
| list.test | COMPILE | 0.174017 | 0.439923 | 0.499831 | — | — | — |
| list_c.test | COMPILE | 0.177570 | 0.423108 | 0.534380 | — | — | — |
| logical.test | COMPILE | 0.143922 | 0.332778 | 0.419932 | — | — | — |
| lower_bound.test | COMPILE | 0.180091 | 0.445810 | 0.503340 | — | — | — |
| map.test | COMPILE | 0.212533 | 0.551063 | 0.644028 | — | — | — |
| max_element.test | COMPILE | 0.174065 | 0.420320 | 0.499576 | — | — | — |
| min_max.test | COMPILE | 0.150283 | 0.346901 | 0.432405 | — | — | — |
| multiset.test | COMPILE | 0.186458 | 0.475209 | 0.545039 | — | — | — |
| next.test | COMPILE | 0.143154 | 0.335438 | 0.399834 | — | — | — |
| no_has_xxx.test | COMPILE | 0.154734 | 0.351797 | 0.431687 | — | — | — |
| numeric_ops.test | COMPILE | 0.171963 | 0.412327 | 0.489077 | — | — | — |
| pair_view.test | COMPILE | 0.193697 | 0.465869 | 0.544525 | — | — | — |
| partition.test | COMPILE | 0.207681 | 0.518046 | 0.609741 | — | — | — |
| pop_front.test | COMPILE | 0.170949 | 0.419352 | 0.488382 | — | — | — |
| push_back.test | COMPILE | 0.147338 | 0.353878 | 0.420356 | — | — | — |
| push_front.test | COMPILE | 0.172378 | 0.421038 | 0.490544 | — | — | — |
| quote.test | COMPILE | 0.143088 | 0.334817 | 0.403202 | — | — | — |
| range_c.test | COMPILE | 0.178442 | 0.446761 | 0.516391 | — | — | — |
| remove.test | COMPILE | 0.190493 | 0.471043 | 0.546970 | — | — | — |
| remove_if.test | COMPILE | 0.196814 | 0.491893 | 0.566188 | — | — | — |
| replace.test | COMPILE | 0.209568 | 0.527031 | 0.609401 | — | — | — |
| replace_if.test | COMPILE | 0.212648 | 0.546318 | 0.608194 | — | — | — |
| reverse.test | COMPILE | 0.199031 | 0.499192 | 0.583412 | — | — | — |
| same_as.test | COMPILE | 0.155008 | 0.369149 | 0.428412 | — | — | — |
| set.test | COMPILE | 0.269311 | 0.695372 | 0.858279 | — | — | — |
| set_c.test | COMPILE | 0.197762 | 0.490330 | 0.568526 | — | — | — |
| single_view.test | COMPILE | 0.177529 | 0.441255 | 0.521167 | — | — | — |
| size.test | COMPILE | 0.169469 | 0.412752 | 0.478022 | — | — | — |
| size_t.test | RUN | 0.148501 | 0.379524 | 0.440675 | 0.001532 | 0.001665 | 0.001613 |
| sizeof.test | COMPILE | 0.136813 | 0.325225 | 0.392322 | — | — | — |
| sort.test | COMPILE | 0.225138 | 0.544416 | 0.646080 | — | — | — |
| stable_partition.test | COMPILE | 0.210301 | 0.521628 | 0.596203 | — | — | — |
| transform.test | COMPILE | 0.222195 | 0.560050 | 0.656161 | — | — | — |
| transform_view.test | COMPILE | 0.180801 | 0.440966 | 0.512641 | — | — | — |
| unique.test | COMPILE | 0.190961 | 0.470813 | 0.541003 | — | — | — |
| unpack_args.test | COMPILE | 0.177914 | 0.439812 | 0.501511 | — | — | — |
| upper_bound.test | COMPILE | 0.182332 | 0.435017 | 0.517964 | — | — | — |
| vector.test | COMPILE | 0.205723 | 0.524741 | 0.609089 | — | — | — |
| vector_c.test | COMPILE | 0.184185 | 0.434225 | 0.541482 | — | — | — |
| zip_view.test | COMPILE | 0.258227 | 0.656053 | 0.744018 | — | — | — |
| string.test | RUN | 0.409992 | 1.260562 | 1.148626 | 0.001280 | 0.001169 | 0.001255 |
| issue_69.test | RUN | 0.017596 | 0.049411 | 0.049652 | 0.000765 | 0.000637 | 0.001602 |
| issue_84.test | RUN | 0.033642 | 0.096041 | 0.098138 | 0.000496 | 0.000442 | 0.001221 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.019× | 1.004×, 1.034× | 1.011× |
| clang | 1.109× | 1.104×, 1.114× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45754596224).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.001024s | 0.001014s | 0.001014s | byte equality observed |
| char.test | 10 | 0.001017s | 0.001013s | 0.001021s | byte equality observed |
| char_unsigned.test | 10 | 0.001012s | 0.001069s | 0.001028s | byte equality observed |
| for_each.test | 10 | 0.001004s | 0.001021s | 0.001008s | byte equality observed |
| int.test | 10 | 0.001011s | 0.000987s | 0.001028s | byte equality observed |
| integral_c.test | 10 | 0.001003s | 0.001003s | 0.001068s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.001019s | 0.001050s | 0.001005s | byte equality observed |
| issue_69.test | 10 | 0.000466s | 0.000453s | 0.000977s | byte equality observed |
| issue_84.test | 10 | 0.000452s | 0.000452s | 0.000983s | byte equality observed |
| size_t.test | 10 | 0.001014s | 0.001023s | 0.001034s | byte equality observed |
| string.test | 10 | 0.001033s | 0.001070s | 0.001055s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45754596224).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
