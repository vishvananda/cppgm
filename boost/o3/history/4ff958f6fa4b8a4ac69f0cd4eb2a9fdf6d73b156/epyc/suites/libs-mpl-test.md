# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.494808 | 1.390773 | 1.552691 | — | — | — |
| largest_int.test | COMPILE | 0.172188 | 0.391890 | 0.573159 | — | — | — |
| msvc_is_class.test | COMPILE | 0.020888 | 0.049270 | 0.054300 | — | — | — |
| template_arity.test | COMPILE | 0.167692 | 0.388507 | 0.566601 | — | — | — |
| is_seq.test | COMPILE | 0.006652 | 0.018373 | 0.029265 | — | — | — |
| token_equal.test | COMPILE | 0.006426 | 0.017050 | 0.032762 | — | — | — |
| advance.test | COMPILE | 0.191407 | 0.424555 | 0.598114 | — | — | — |
| always.test | COMPILE | 0.191715 | 0.453025 | 0.671602 | — | — | — |
| apply.test | COMPILE | 0.208721 | 0.479586 | 0.697862 | — | — | — |
| apply_wrap.test | COMPILE | 0.175369 | 0.389653 | 0.599114 | — | — | — |
| arithmetic.test | COMPILE | 0.193486 | 0.450701 | 0.666742 | — | — | — |
| as_sequence.test | COMPILE | 0.207828 | 0.496892 | 0.710263 | — | — | — |
| assert.test | COMPILE | 0.048528 | 0.095554 | 0.117312 | — | — | — |
| at.test | COMPILE | 0.203258 | 0.481554 | 0.698656 | — | — | — |
| back.test | COMPILE | 0.193386 | 0.449650 | 0.672876 | — | — | — |
| bind.test | COMPILE | 0.189330 | 0.426555 | 0.638663 | — | — | — |
| bitwise.test | COMPILE | 0.192520 | 0.467846 | 0.673065 | — | — | — |
| bool.test | RUN | 0.172914 | 0.394399 | 0.610794 | 0.002067 | 0.002086 | 0.001791 |
| comparison.test | COMPILE | 0.188240 | 0.445445 | 0.660998 | — | — | — |
| contains.test | COMPILE | 0.226663 | 0.547115 | 0.770161 | — | — | — |
| copy.test | COMPILE | 0.281813 | 0.660302 | 0.947430 | — | — | — |
| copy_if.test | COMPILE | 0.248881 | 0.579999 | 0.837789 | — | — | — |
| count.test | COMPILE | 0.231506 | 0.526557 | 0.802140 | — | — | — |
| count_if.test | COMPILE | 0.245613 | 0.571232 | 0.822676 | — | — | — |
| deque.test | COMPILE | 0.239351 | 0.553685 | 0.792275 | — | — | — |
| distance.test | COMPILE | 0.220589 | 0.501572 | 0.737548 | — | — | — |
| empty.test | COMPILE | 0.189186 | 0.441208 | 0.664746 | — | — | — |
| equal.test | COMPILE | 0.222098 | 0.529056 | 0.741845 | — | — | — |
| erase.test | COMPILE | 0.255518 | 0.617660 | 0.851189 | — | — | — |
| erase_range.test | COMPILE | 0.239628 | 0.573026 | 0.820288 | — | — | — |
| eval_if.test | COMPILE | 0.180287 | 0.429708 | 0.607718 | — | — | — |
| filter_view.test | COMPILE | 0.239191 | 0.585191 | 0.805098 | — | — | — |
| find.test | COMPILE | 0.231085 | 0.554915 | 0.769372 | — | — | — |
| find_if.test | COMPILE | 0.240318 | 0.583684 | 0.796577 | — | — | — |
| fold.test | COMPILE | 0.248391 | 0.587119 | 0.855480 | — | — | — |
| for_each.test | RUN | 0.360895 | 0.858098 | 1.324678 | 0.001893 | 0.001928 | 0.001899 |
| front.test | COMPILE | 0.194728 | 0.461950 | 0.654599 | — | — | — |
| get_tag_def.test | COMPILE | 0.175531 | 0.405627 | 0.613996 | — | — | — |
| has_xxx.test | COMPILE | 0.200318 | 0.448956 | 0.649275 | — | — | — |
| identity.test | COMPILE | 0.196804 | 0.458260 | 0.656092 | — | — | — |
| if.test | COMPILE | 0.175986 | 0.405170 | 0.571875 | — | — | — |
| index_of.test | COMPILE | 0.217923 | 0.529122 | 0.750267 | — | — | — |
| inherit.test | COMPILE | 0.181030 | 0.415957 | 0.595242 | — | — | — |
| insert.test | COMPILE | 0.258538 | 0.613536 | 0.902252 | — | — | — |
| insert_range.test | COMPILE | 0.347466 | 0.836917 | 1.317146 | — | — | — |
| int.test | RUN | 0.186931 | 0.448550 | 0.660556 | 0.001945 | 0.002052 | 0.001937 |
| char.test | RUN | 0.189208 | 0.463376 | 0.660600 | 0.001936 | 0.002156 | 0.001885 |
| char_unsigned.test | RUN | 0.188642 | 0.450901 | 0.604057 | 0.001936 | 0.002256 | 0.002038 |
| integral_c.test | RUN | 0.210878 | 0.579241 | 0.781530 | 0.001956 | 0.001896 | 0.001664 |
| integral_c_unsigned.test | RUN | 0.208596 | 0.577948 | 0.803489 | 0.001756 | 0.001822 | 0.001928 |
| is_placeholder.test | COMPILE | 0.181844 | 0.398188 | 0.565079 | — | — | — |
| is_sequence.test | COMPILE | 0.212387 | 0.498052 | 0.723213 | — | — | — |
| iterator_tags.test | COMPILE | 0.184166 | 0.432098 | 0.624159 | — | — | — |
| joint_view.test | COMPILE | 0.244135 | 0.562694 | 0.790766 | — | — | — |
| lambda.test | COMPILE | 0.218656 | 0.522968 | 0.753814 | — | — | — |
| lambda_args.test | COMPILE | 0.208764 | 0.493502 | 0.745834 | — | — | — |
| list.test | COMPILE | 0.216387 | 0.535212 | 0.760732 | — | — | — |
| list_c.test | COMPILE | 0.223278 | 0.518617 | 0.774602 | — | — | — |
| logical.test | COMPILE | 0.174631 | 0.406325 | 0.627862 | — | — | — |
| lower_bound.test | COMPILE | 0.225005 | 0.523666 | 0.743487 | — | — | — |
| map.test | COMPILE | 0.263470 | 0.660588 | 0.929698 | — | — | — |
| max_element.test | COMPILE | 0.214707 | 0.499261 | 0.726785 | — | — | — |
| min_max.test | COMPILE | 0.188834 | 0.435763 | 0.638429 | — | — | — |
| multiset.test | COMPILE | 0.234955 | 0.561713 | 0.771905 | — | — | — |
| next.test | COMPILE | 0.177699 | 0.404876 | 0.583713 | — | — | — |
| no_has_xxx.test | COMPILE | 0.187286 | 0.446228 | 0.646757 | — | — | — |
| numeric_ops.test | COMPILE | 0.203661 | 0.508304 | 0.719986 | — | — | — |
| pair_view.test | COMPILE | 0.240899 | 0.553565 | 0.793819 | — | — | — |
| partition.test | COMPILE | 0.261443 | 0.593437 | 0.899484 | — | — | — |
| pop_front.test | COMPILE | 0.214665 | 0.509883 | 0.728830 | — | — | — |
| push_back.test | COMPILE | 0.178949 | 0.408689 | 0.624134 | — | — | — |
| push_front.test | COMPILE | 0.220365 | 0.496579 | 0.689858 | — | — | — |
| quote.test | COMPILE | 0.176503 | 0.397531 | 0.604031 | — | — | — |
| range_c.test | COMPILE | 0.221735 | 0.543428 | 0.749414 | — | — | — |
| remove.test | COMPILE | 0.237849 | 0.569862 | 0.792756 | — | — | — |
| remove_if.test | COMPILE | 0.244031 | 0.571667 | 0.823375 | — | — | — |
| replace.test | COMPILE | 0.257672 | 0.618819 | 0.870776 | — | — | — |
| replace_if.test | COMPILE | 0.260572 | 0.649515 | 0.888187 | — | — | — |
| reverse.test | COMPILE | 0.252422 | 0.600759 | 0.836423 | — | — | — |
| same_as.test | COMPILE | 0.191548 | 0.437140 | 0.648981 | — | — | — |
| set.test | COMPILE | 0.333064 | 0.838746 | 1.250537 | — | — | — |
| set_c.test | COMPILE | 0.242867 | 0.570389 | 0.862660 | — | — | — |
| single_view.test | COMPILE | 0.229606 | 0.542457 | 0.747238 | — | — | — |
| size.test | COMPILE | 0.211242 | 0.511022 | 0.698377 | — | — | — |
| size_t.test | RUN | 0.186208 | 0.439434 | 0.648444 | 0.001750 | 0.002012 | 0.001877 |
| sizeof.test | COMPILE | 0.172212 | 0.380825 | 0.569684 | — | — | — |
| sort.test | COMPILE | 0.280131 | 0.653287 | 0.961304 | — | — | — |
| stable_partition.test | COMPILE | 0.257492 | 0.630164 | 0.858729 | — | — | — |
| transform.test | COMPILE | 0.276817 | 0.663179 | 0.941967 | — | — | — |
| transform_view.test | COMPILE | 0.221637 | 0.547253 | 0.731121 | — | — | — |
| unique.test | COMPILE | 0.227467 | 0.557260 | 0.803627 | — | — | — |
| unpack_args.test | COMPILE | 0.228507 | 0.528412 | 0.734402 | — | — | — |
| upper_bound.test | COMPILE | 0.223120 | 0.524487 | 0.739175 | — | — | — |
| vector.test | COMPILE | 0.249440 | 0.643253 | 0.903967 | — | — | — |
| vector_c.test | COMPILE | 0.221090 | 0.503756 | 0.776605 | — | — | — |
| zip_view.test | COMPILE | 0.327429 | 0.793096 | 1.131551 | — | — | — |
| string.test | RUN | 0.473140 | 1.452867 | 1.503534 | 0.001351 | 0.001489 | 0.001314 |
| issue_69.test | RUN | 0.024636 | 0.059004 | 0.069254 | 0.000762 | 0.000714 | 0.001896 |
| issue_84.test | RUN | 0.047661 | 0.125769 | 0.106370 | 0.000569 | 0.000654 | 0.001458 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.996× | 0.988×, 1.003× | 0.982× |
| clang | 1.103× | 1.090×, 1.117× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45850603565).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.001248s | 0.001297s | 0.001261s | byte equality observed |
| char.test | 10 | 0.001244s | 0.001280s | 0.001282s | byte equality observed |
| char_unsigned.test | 10 | 0.001243s | 0.001227s | 0.001203s | byte equality observed |
| for_each.test | 10 | 0.001250s | 0.001299s | 0.001208s | byte equality observed |
| int.test | 10 | 0.001274s | 0.001210s | 0.001220s | byte equality observed |
| integral_c.test | 10 | 0.001247s | 0.001220s | 0.001251s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.001284s | 0.001266s | 0.001268s | byte equality observed |
| issue_69.test | 10 | 0.000569s | 0.000570s | 0.001232s | byte equality observed |
| issue_84.test | 10 | 0.000583s | 0.000574s | 0.001257s | byte equality observed |
| size_t.test | 10 | 0.001251s | 0.001254s | 0.001252s | byte equality observed |
| string.test | 10 | 0.001253s | 0.001246s | 0.001347s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45850603565).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
