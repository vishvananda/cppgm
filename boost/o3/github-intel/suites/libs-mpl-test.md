# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.460142 | 1.315570 | 1.283130 | — | — | — |
| largest_int.test | COMPILE | 0.140446 | 0.356507 | 0.451378 | — | — | — |
| msvc_is_class.test | COMPILE | 0.017547 | 0.044343 | 0.047330 | — | — | — |
| template_arity.test | COMPILE | 0.141099 | 0.351056 | 0.442242 | — | — | — |
| is_seq.test | COMPILE | 0.005280 | 0.014366 | 0.027061 | — | — | — |
| token_equal.test | COMPILE | 0.005649 | 0.014803 | 0.027821 | — | — | — |
| advance.test | COMPILE | 0.159608 | 0.396778 | 0.483239 | — | — | — |
| always.test | COMPILE | 0.162220 | 0.412469 | 0.516643 | — | — | — |
| apply.test | COMPILE | 0.170049 | 0.432942 | 0.549542 | — | — | — |
| apply_wrap.test | COMPILE | 0.149219 | 0.368674 | 0.454510 | — | — | — |
| arithmetic.test | COMPILE | 0.162513 | 0.415560 | 0.505793 | — | — | — |
| as_sequence.test | COMPILE | 0.178048 | 0.453648 | 0.552354 | — | — | — |
| assert.test | COMPILE | 0.040335 | 0.079808 | 0.091483 | — | — | — |
| at.test | COMPILE | 0.174955 | 0.440086 | 0.547978 | — | — | — |
| back.test | COMPILE | 0.166144 | 0.422506 | 0.522048 | — | — | — |
| bind.test | COMPILE | 0.161818 | 0.402573 | 0.502698 | — | — | — |
| bitwise.test | COMPILE | 0.160292 | 0.413231 | 0.520656 | — | — | — |
| bool.test | RUN | 0.147790 | 0.372460 | 0.471504 | 0.001650 | 0.001566 | 0.001565 |
| comparison.test | COMPILE | 0.162147 | 0.415060 | 0.517365 | — | — | — |
| contains.test | COMPILE | 0.193064 | 0.496705 | 0.597503 | — | — | — |
| copy.test | COMPILE | 0.232883 | 0.602919 | 0.742793 | — | — | — |
| copy_if.test | COMPILE | 0.208016 | 0.532144 | 0.664064 | — | — | — |
| count.test | COMPILE | 0.198266 | 0.497898 | 0.634762 | — | — | — |
| count_if.test | COMPILE | 0.207171 | 0.510027 | 0.641275 | — | — | — |
| deque.test | COMPILE | 0.196899 | 0.508120 | 0.614417 | — | — | — |
| distance.test | COMPILE | 0.182552 | 0.453260 | 0.571772 | — | — | — |
| empty.test | COMPILE | 0.160210 | 0.401131 | 0.504590 | — | — | — |
| equal.test | COMPILE | 0.185914 | 0.476138 | 0.577055 | — | — | — |
| erase.test | COMPILE | 0.214539 | 0.552962 | 0.676135 | — | — | — |
| erase_range.test | COMPILE | 0.204186 | 0.522731 | 0.647343 | — | — | — |
| eval_if.test | COMPILE | 0.150925 | 0.378472 | 0.470733 | — | — | — |
| filter_view.test | COMPILE | 0.204173 | 0.525218 | 0.633989 | — | — | — |
| find.test | COMPILE | 0.199189 | 0.495540 | 0.622782 | — | — | — |
| find_if.test | COMPILE | 0.205157 | 0.519380 | 0.633431 | — | — | — |
| fold.test | COMPILE | 0.213542 | 0.530474 | 0.678120 | — | — | — |
| for_each.test | RUN | 0.306350 | 0.778021 | 1.030482 | 0.001644 | 0.001435 | 0.001691 |
| front.test | COMPILE | 0.168618 | 0.420271 | 0.517889 | — | — | — |
| get_tag_def.test | COMPILE | 0.148050 | 0.366967 | 0.457540 | — | — | — |
| has_xxx.test | COMPILE | 0.162343 | 0.399129 | 0.514650 | — | — | — |
| identity.test | COMPILE | 0.168285 | 0.411735 | 0.496389 | — | — | — |
| if.test | COMPILE | 0.149266 | 0.372944 | 0.459164 | — | — | — |
| index_of.test | COMPILE | 0.189841 | 0.480053 | 0.587294 | — | — | — |
| inherit.test | COMPILE | 0.153545 | 0.384265 | 0.468025 | — | — | — |
| insert.test | COMPILE | 0.220155 | 0.572085 | 0.699351 | — | — | — |
| insert_range.test | COMPILE | 0.297650 | 0.780766 | 1.000027 | — | — | — |
| int.test | RUN | 0.154732 | 0.407644 | 0.502507 | 0.001798 | 0.001695 | 0.001399 |
| char.test | RUN | 0.153715 | 0.411928 | 0.506827 | 0.001631 | 0.001490 | 0.001356 |
| char_unsigned.test | RUN | 0.154601 | 0.414335 | 0.500698 | 0.001559 | 0.001683 | 0.001683 |
| integral_c.test | RUN | 0.175064 | 0.529677 | 0.617292 | 0.001405 | 0.001701 | 0.001562 |
| integral_c_unsigned.test | RUN | 0.179113 | 0.533841 | 0.612177 | 0.001514 | 0.001466 | 0.001480 |
| is_placeholder.test | COMPILE | 0.148692 | 0.362728 | 0.464130 | — | — | — |
| is_sequence.test | COMPILE | 0.178428 | 0.449588 | 0.540070 | — | — | — |
| iterator_tags.test | COMPILE | 0.154409 | 0.386994 | 0.466994 | — | — | — |
| joint_view.test | COMPILE | 0.203679 | 0.512588 | 0.617109 | — | — | — |
| lambda.test | COMPILE | 0.186524 | 0.473328 | 0.590150 | — | — | — |
| lambda_args.test | COMPILE | 0.178497 | 0.445127 | 0.579547 | — | — | — |
| list.test | COMPILE | 0.186430 | 0.475649 | 0.578347 | — | — | — |
| list_c.test | COMPILE | 0.183949 | 0.465934 | 0.594031 | — | — | — |
| logical.test | COMPILE | 0.154380 | 0.372256 | 0.459614 | — | — | — |
| lower_bound.test | COMPILE | 0.191479 | 0.473626 | 0.585548 | — | — | — |
| map.test | COMPILE | 0.229477 | 0.600536 | 0.742145 | — | — | — |
| max_element.test | COMPILE | 0.183415 | 0.452122 | 0.558312 | — | — | — |
| min_max.test | COMPILE | 0.155399 | 0.391283 | 0.487583 | — | — | — |
| multiset.test | COMPILE | 0.202730 | 0.507221 | 0.613109 | — | — | — |
| next.test | COMPILE | 0.148667 | 0.374479 | 0.461470 | — | — | — |
| no_has_xxx.test | COMPILE | 0.163055 | 0.392123 | 0.500406 | — | — | — |
| numeric_ops.test | COMPILE | 0.177958 | 0.452262 | 0.556293 | — | — | — |
| pair_view.test | COMPILE | 0.209216 | 0.507584 | 0.619064 | — | — | — |
| partition.test | COMPILE | 0.223844 | 0.564870 | 0.696990 | — | — | — |
| pop_front.test | COMPILE | 0.181870 | 0.451261 | 0.557070 | — | — | — |
| push_back.test | COMPILE | 0.155625 | 0.381672 | 0.481191 | — | — | — |
| push_front.test | COMPILE | 0.183763 | 0.452267 | 0.567718 | — | — | — |
| quote.test | COMPILE | 0.149321 | 0.368014 | 0.466724 | — | — | — |
| range_c.test | COMPILE | 0.192068 | 0.485109 | 0.595821 | — | — | — |
| remove.test | COMPILE | 0.203673 | 0.511824 | 0.625563 | — | — | — |
| remove_if.test | COMPILE | 0.210163 | 0.526579 | 0.646529 | — | — | — |
| replace.test | COMPILE | 0.222790 | 0.575716 | 0.692806 | — | — | — |
| replace_if.test | COMPILE | 0.228815 | 0.586678 | 0.710151 | — | — | — |
| reverse.test | COMPILE | 0.212516 | 0.544678 | 0.666883 | — | — | — |
| same_as.test | COMPILE | 0.163995 | 0.400483 | 0.491183 | — | — | — |
| set.test | COMPILE | 0.283333 | 0.771157 | 0.999030 | — | — | — |
| set_c.test | COMPILE | 0.210800 | 0.520055 | 0.660706 | — | — | — |
| single_view.test | COMPILE | 0.184013 | 0.486087 | 0.585855 | — | — | — |
| size.test | COMPILE | 0.182222 | 0.450321 | 0.546866 | — | — | — |
| size_t.test | RUN | 0.162058 | 0.410598 | 0.521008 | 0.001245 | 0.001597 | 0.001567 |
| sizeof.test | COMPILE | 0.145429 | 0.362171 | 0.469397 | — | — | — |
| sort.test | COMPILE | 0.234019 | 0.601035 | 0.746081 | — | — | — |
| stable_partition.test | COMPILE | 0.223719 | 0.556987 | 0.698027 | — | — | — |
| transform.test | COMPILE | 0.239228 | 0.609500 | 0.763377 | — | — | — |
| transform_view.test | COMPILE | 0.194561 | 0.478483 | 0.609179 | — | — | — |
| unique.test | COMPILE | 0.203004 | 0.510700 | 0.623238 | — | — | — |
| unpack_args.test | COMPILE | 0.187685 | 0.475411 | 0.579042 | — | — | — |
| upper_bound.test | COMPILE | 0.192986 | 0.478941 | 0.580811 | — | — | — |
| vector.test | COMPILE | 0.221345 | 0.567745 | 0.706144 | — | — | — |
| vector_c.test | COMPILE | 0.192503 | 0.476609 | 0.608259 | — | — | — |
| zip_view.test | COMPILE | 0.273759 | 0.713082 | 0.868800 | — | — | — |
| string.test | RUN | 0.404542 | 1.265243 | 1.216886 | 0.001312 | 0.001065 | 0.001143 |
| issue_69.test | RUN | 0.018464 | 0.054499 | 0.053581 | 0.000628 | 0.000739 | 0.001613 |
| issue_84.test | RUN | 0.046173 | 0.105079 | 0.104605 | 0.000478 | 0.000511 | 0.001189 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.002× | 0.997×, 1.007× | 0.994× |
| clang | 1.105× | 1.104×, 1.106× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44927958294).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.000973s | 0.000952s | 0.001007s | byte equality observed |
| char.test | 10 | 0.000962s | 0.000958s | 0.000966s | byte equality observed |
| char_unsigned.test | 10 | 0.000986s | 0.000976s | 0.000955s | byte equality observed |
| for_each.test | 10 | 0.000977s | 0.001002s | 0.000991s | byte equality observed |
| int.test | 10 | 0.000955s | 0.000995s | 0.000962s | byte equality observed |
| integral_c.test | 10 | 0.000965s | 0.000992s | 0.000959s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.000976s | 0.000949s | 0.000952s | byte equality observed |
| issue_69.test | 10 | 0.000421s | 0.000425s | 0.000975s | byte equality observed |
| issue_84.test | 10 | 0.000418s | 0.000423s | 0.000923s | byte equality observed |
| size_t.test | 10 | 0.000960s | 0.000966s | 0.000954s | byte equality observed |
| string.test | 10 | 0.000958s | 0.000978s | 0.000986s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44927958294).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
