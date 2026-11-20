# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.498373 | 1.398005 | 1.549769 | — | — | — |
| largest_int.test | COMPILE | 0.175116 | 0.390823 | 0.604260 | — | — | — |
| msvc_is_class.test | COMPILE | 0.020638 | 0.049389 | 0.055596 | — | — | — |
| template_arity.test | COMPILE | 0.172034 | 0.386126 | 0.596927 | — | — | — |
| is_seq.test | COMPILE | 0.006504 | 0.017591 | 0.029566 | — | — | — |
| token_equal.test | COMPILE | 0.006583 | 0.016460 | 0.029637 | — | — | — |
| advance.test | COMPILE | 0.190579 | 0.424654 | 0.594464 | — | — | — |
| always.test | COMPILE | 0.191470 | 0.448948 | 0.674553 | — | — | — |
| apply.test | COMPILE | 0.207672 | 0.470269 | 0.693085 | — | — | — |
| apply_wrap.test | COMPILE | 0.175605 | 0.397866 | 0.594006 | — | — | — |
| arithmetic.test | COMPILE | 0.188204 | 0.460877 | 0.669446 | — | — | — |
| as_sequence.test | COMPILE | 0.207101 | 0.500599 | 0.708634 | — | — | — |
| assert.test | COMPILE | 0.048411 | 0.096503 | 0.108983 | — | — | — |
| at.test | COMPILE | 0.202086 | 0.478887 | 0.702899 | — | — | — |
| back.test | COMPILE | 0.195179 | 0.459416 | 0.680060 | — | — | — |
| bind.test | COMPILE | 0.184981 | 0.433386 | 0.649122 | — | — | — |
| bitwise.test | COMPILE | 0.192242 | 0.464114 | 0.675324 | — | — | — |
| bool.test | RUN | 0.173733 | 0.392995 | 0.588035 | 0.001742 | 0.001915 | 0.001869 |
| comparison.test | COMPILE | 0.185503 | 0.453183 | 0.658254 | — | — | — |
| contains.test | COMPILE | 0.228530 | 0.553597 | 0.759292 | — | — | — |
| copy.test | COMPILE | 0.275627 | 0.664167 | 0.944568 | — | — | — |
| copy_if.test | COMPILE | 0.244537 | 0.579876 | 0.836679 | — | — | — |
| count.test | COMPILE | 0.231059 | 0.523985 | 0.813251 | — | — | — |
| count_if.test | COMPILE | 0.242363 | 0.563012 | 0.827712 | — | — | — |
| deque.test | COMPILE | 0.234792 | 0.560416 | 0.773113 | — | — | — |
| distance.test | COMPILE | 0.220569 | 0.510104 | 0.717522 | — | — | — |
| empty.test | COMPILE | 0.189115 | 0.447763 | 0.661999 | — | — | — |
| equal.test | COMPILE | 0.228284 | 0.510031 | 0.743016 | — | — | — |
| erase.test | COMPILE | 0.253783 | 0.611915 | 0.875610 | — | — | — |
| erase_range.test | COMPILE | 0.241656 | 0.576081 | 0.797892 | — | — | — |
| eval_if.test | COMPILE | 0.182207 | 0.417105 | 0.607559 | — | — | — |
| filter_view.test | COMPILE | 0.247481 | 0.567555 | 0.792363 | — | — | — |
| find.test | COMPILE | 0.235644 | 0.560915 | 0.782406 | — | — | — |
| find_if.test | COMPILE | 0.242669 | 0.563953 | 0.815919 | — | — | — |
| fold.test | COMPILE | 0.259545 | 0.592992 | 0.841557 | — | — | — |
| for_each.test | RUN | 0.370542 | 0.846886 | 1.339217 | 0.001912 | 0.002019 | 0.002330 |
| front.test | COMPILE | 0.196836 | 0.483269 | 0.664086 | — | — | — |
| get_tag_def.test | COMPILE | 0.177089 | 0.402477 | 0.610395 | — | — | — |
| has_xxx.test | COMPILE | 0.199294 | 0.445995 | 0.657148 | — | — | — |
| identity.test | COMPILE | 0.196004 | 0.450884 | 0.649512 | — | — | — |
| if.test | COMPILE | 0.174738 | 0.395277 | 0.571676 | — | — | — |
| index_of.test | COMPILE | 0.226478 | 0.532130 | 0.751000 | — | — | — |
| inherit.test | COMPILE | 0.178860 | 0.422271 | 0.611703 | — | — | — |
| insert.test | COMPILE | 0.262757 | 0.630326 | 0.907351 | — | — | — |
| insert_range.test | COMPILE | 0.350662 | 0.832452 | 1.303528 | — | — | — |
| int.test | RUN | 0.182898 | 0.455752 | 0.656761 | 0.001615 | 0.001992 | 0.002208 |
| char.test | RUN | 0.189138 | 0.463829 | 0.614383 | 0.001846 | 0.001905 | 0.002110 |
| char_unsigned.test | RUN | 0.178835 | 0.445605 | 0.654179 | 0.001816 | 0.002160 | 0.002214 |
| integral_c.test | RUN | 0.209089 | 0.583462 | 0.771941 | 0.001868 | 0.002086 | 0.002000 |
| integral_c_unsigned.test | RUN | 0.211493 | 0.583216 | 0.757864 | 0.001932 | 0.001782 | 0.002242 |
| is_placeholder.test | COMPILE | 0.170764 | 0.398171 | 0.602839 | — | — | — |
| is_sequence.test | COMPILE | 0.222609 | 0.498175 | 0.676952 | — | — | — |
| iterator_tags.test | COMPILE | 0.180651 | 0.425918 | 0.601640 | — | — | — |
| joint_view.test | COMPILE | 0.242774 | 0.565315 | 0.826070 | — | — | — |
| lambda.test | COMPILE | 0.223347 | 0.524141 | 0.751977 | — | — | — |
| lambda_args.test | COMPILE | 0.215002 | 0.496184 | 0.760675 | — | — | — |
| list.test | COMPILE | 0.222583 | 0.527765 | 0.736440 | — | — | — |
| list_c.test | COMPILE | 0.218225 | 0.516829 | 0.770605 | — | — | — |
| logical.test | COMPILE | 0.182139 | 0.414416 | 0.577746 | — | — | — |
| lower_bound.test | COMPILE | 0.228582 | 0.518157 | 0.736420 | — | — | — |
| map.test | COMPILE | 0.274818 | 0.659190 | 0.951977 | — | — | — |
| max_element.test | COMPILE | 0.215780 | 0.502670 | 0.745702 | — | — | — |
| min_max.test | COMPILE | 0.185616 | 0.436307 | 0.604676 | — | — | — |
| multiset.test | COMPILE | 0.234407 | 0.558942 | 0.786633 | — | — | — |
| next.test | COMPILE | 0.175113 | 0.419206 | 0.601644 | — | — | — |
| no_has_xxx.test | COMPILE | 0.192127 | 0.436793 | 0.667735 | — | — | — |
| numeric_ops.test | COMPILE | 0.207074 | 0.511010 | 0.691173 | — | — | — |
| pair_view.test | COMPILE | 0.241349 | 0.551438 | 0.806580 | — | — | — |
| partition.test | COMPILE | 0.260311 | 0.607347 | 0.882085 | — | — | — |
| pop_front.test | COMPILE | 0.212044 | 0.517611 | 0.734650 | — | — | — |
| push_back.test | COMPILE | 0.186329 | 0.434150 | 0.618662 | — | — | — |
| push_front.test | COMPILE | 0.216507 | 0.500915 | 0.738676 | — | — | — |
| quote.test | COMPILE | 0.175638 | 0.398353 | 0.608554 | — | — | — |
| range_c.test | COMPILE | 0.222839 | 0.546016 | 0.761453 | — | — | — |
| remove.test | COMPILE | 0.240099 | 0.569634 | 0.804564 | — | — | — |
| remove_if.test | COMPILE | 0.242237 | 0.562572 | 0.814841 | — | — | — |
| replace.test | COMPILE | 0.260627 | 0.622824 | 0.874607 | — | — | — |
| replace_if.test | COMPILE | 0.271008 | 0.654028 | 0.889658 | — | — | — |
| reverse.test | COMPILE | 0.254428 | 0.607455 | 0.852957 | — | — | — |
| same_as.test | COMPILE | 0.188750 | 0.444918 | 0.630929 | — | — | — |
| set.test | COMPILE | 0.334853 | 0.843297 | 1.285624 | — | — | — |
| set_c.test | COMPILE | 0.246345 | 0.572506 | 0.839025 | — | — | — |
| single_view.test | COMPILE | 0.219082 | 0.540253 | 0.758410 | — | — | — |
| size.test | COMPILE | 0.209960 | 0.513351 | 0.720764 | — | — | — |
| size_t.test | RUN | 0.187543 | 0.461669 | 0.672723 | 0.002038 | 0.002162 | 0.002092 |
| sizeof.test | COMPILE | 0.175589 | 0.405048 | 0.615295 | — | — | — |
| sort.test | COMPILE | 0.276394 | 0.642024 | 0.939143 | — | — | — |
| stable_partition.test | COMPILE | 0.258418 | 0.604913 | 0.871611 | — | — | — |
| transform.test | COMPILE | 0.279479 | 0.670987 | 0.929825 | — | — | — |
| transform_view.test | COMPILE | 0.229635 | 0.528755 | 0.773744 | — | — | — |
| unique.test | COMPILE | 0.239763 | 0.566584 | 0.793021 | — | — | — |
| unpack_args.test | COMPILE | 0.226979 | 0.529155 | 0.730058 | — | — | — |
| upper_bound.test | COMPILE | 0.226922 | 0.513526 | 0.744312 | — | — | — |
| vector.test | COMPILE | 0.264617 | 0.620823 | 0.897650 | — | — | — |
| vector_c.test | COMPILE | 0.222779 | 0.526593 | 0.790607 | — | — | — |
| zip_view.test | COMPILE | 0.329099 | 0.792996 | 1.076931 | — | — | — |
| string.test | RUN | 0.493193 | 1.408750 | 1.414757 | 0.001519 | 0.001555 | 0.001387 |
| issue_69.test | RUN | 0.024342 | 0.059855 | 0.068554 | 0.000730 | 0.000810 | 0.002018 |
| issue_84.test | RUN | 0.052859 | 0.122830 | 0.132212 | 0.000720 | 0.000725 | 0.001461 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.004× | 1.014×, 0.994× | 0.989× |
| clang | 1.093× | 1.089×, 1.097× | 1.020× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44612055398).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.001273s | 0.001301s | 0.001295s | byte equality observed |
| char.test | 10 | 0.001254s | 0.001270s | 0.001274s | byte equality observed |
| char_unsigned.test | 10 | 0.001271s | 0.001274s | 0.001302s | byte equality observed |
| for_each.test | 10 | 0.001291s | 0.001305s | 0.001250s | byte equality observed |
| int.test | 10 | 0.001261s | 0.001294s | 0.001251s | byte equality observed |
| integral_c.test | 10 | 0.001266s | 0.001328s | 0.001286s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.001272s | 0.001258s | 0.001233s | byte equality observed |
| issue_69.test | 10 | 0.000592s | 0.000574s | 0.001177s | byte equality observed |
| issue_84.test | 10 | 0.000588s | 0.000561s | 0.001221s | byte equality observed |
| size_t.test | 10 | 0.001286s | 0.001280s | 0.001237s | byte equality observed |
| string.test | 10 | 0.001247s | 0.001231s | 0.001272s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44612055398).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
