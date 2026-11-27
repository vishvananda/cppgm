# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.489738 | 1.375961 | 1.555219 | — | — | — |
| largest_int.test | COMPILE | 0.173800 | 0.385243 | 0.549698 | — | — | — |
| msvc_is_class.test | COMPILE | 0.020691 | 0.047437 | 0.053160 | — | — | — |
| template_arity.test | COMPILE | 0.164975 | 0.378602 | 0.533213 | — | — | — |
| is_seq.test | COMPILE | 0.006975 | 0.017236 | 0.031162 | — | — | — |
| token_equal.test | COMPILE | 0.006643 | 0.016484 | 0.032101 | — | — | — |
| advance.test | COMPILE | 0.184934 | 0.423962 | 0.627698 | — | — | — |
| always.test | COMPILE | 0.192378 | 0.416531 | 0.629642 | — | — | — |
| apply.test | COMPILE | 0.207045 | 0.476111 | 0.692844 | — | — | — |
| apply_wrap.test | COMPILE | 0.174836 | 0.386305 | 0.574778 | — | — | — |
| arithmetic.test | COMPILE | 0.191864 | 0.453734 | 0.624478 | — | — | — |
| as_sequence.test | COMPILE | 0.206536 | 0.491573 | 0.698301 | — | — | — |
| assert.test | COMPILE | 0.048353 | 0.100677 | 0.120393 | — | — | — |
| at.test | COMPILE | 0.204231 | 0.473323 | 0.691476 | — | — | — |
| back.test | COMPILE | 0.193568 | 0.447684 | 0.665309 | — | — | — |
| bind.test | COMPILE | 0.190955 | 0.422034 | 0.642788 | — | — | — |
| bitwise.test | COMPILE | 0.191841 | 0.454734 | 0.653296 | — | — | — |
| bool.test | RUN | 0.172786 | 0.390785 | 0.590751 | 0.001853 | 0.001760 | 0.001854 |
| comparison.test | COMPILE | 0.189157 | 0.447011 | 0.630717 | — | — | — |
| contains.test | COMPILE | 0.226963 | 0.526165 | 0.758419 | — | — | — |
| copy.test | COMPILE | 0.269960 | 0.643014 | 0.927130 | — | — | — |
| copy_if.test | COMPILE | 0.240655 | 0.566433 | 0.845425 | — | — | — |
| count.test | COMPILE | 0.232173 | 0.527103 | 0.784589 | — | — | — |
| count_if.test | COMPILE | 0.243066 | 0.542864 | 0.831975 | — | — | — |
| deque.test | COMPILE | 0.233190 | 0.544454 | 0.790852 | — | — | — |
| distance.test | COMPILE | 0.220719 | 0.489236 | 0.737140 | — | — | — |
| empty.test | COMPILE | 0.191043 | 0.437319 | 0.646512 | — | — | — |
| equal.test | COMPILE | 0.226479 | 0.518597 | 0.735754 | — | — | — |
| erase.test | COMPILE | 0.253212 | 0.587169 | 0.866613 | — | — | — |
| erase_range.test | COMPILE | 0.243946 | 0.572268 | 0.816189 | — | — | — |
| eval_if.test | COMPILE | 0.180068 | 0.392397 | 0.591470 | — | — | — |
| filter_view.test | COMPILE | 0.245180 | 0.559058 | 0.793185 | — | — | — |
| find.test | COMPILE | 0.233017 | 0.543712 | 0.776268 | — | — | — |
| find_if.test | COMPILE | 0.239584 | 0.546852 | 0.808383 | — | — | — |
| fold.test | COMPILE | 0.244723 | 0.588181 | 0.849274 | — | — | — |
| for_each.test | RUN | 0.355582 | 0.825480 | 1.309006 | 0.002016 | 0.001857 | 0.002076 |
| front.test | COMPILE | 0.199305 | 0.473888 | 0.666271 | — | — | — |
| get_tag_def.test | COMPILE | 0.181656 | 0.385372 | 0.608045 | — | — | — |
| has_xxx.test | COMPILE | 0.190870 | 0.432968 | 0.639526 | — | — | — |
| identity.test | COMPILE | 0.196484 | 0.435776 | 0.637328 | — | — | — |
| if.test | COMPILE | 0.180451 | 0.393717 | 0.563903 | — | — | — |
| index_of.test | COMPILE | 0.221626 | 0.506069 | 0.748108 | — | — | — |
| inherit.test | COMPILE | 0.182242 | 0.411837 | 0.589157 | — | — | — |
| insert.test | COMPILE | 0.259236 | 0.614233 | 0.889522 | — | — | — |
| insert_range.test | COMPILE | 0.353209 | 0.821402 | 1.274167 | — | — | — |
| int.test | RUN | 0.186009 | 0.449802 | 0.656464 | 0.001614 | 0.001728 | 0.002220 |
| char.test | RUN | 0.190635 | 0.452342 | 0.671730 | 0.001938 | 0.002006 | 0.001906 |
| char_unsigned.test | RUN | 0.182129 | 0.439287 | 0.585941 | 0.001943 | 0.002124 | 0.002116 |
| integral_c.test | RUN | 0.207577 | 0.567214 | 0.788928 | 0.001768 | 0.001743 | 0.001611 |
| integral_c_unsigned.test | RUN | 0.209500 | 0.569691 | 0.748231 | 0.001717 | 0.001750 | 0.001835 |
| is_placeholder.test | COMPILE | 0.180363 | 0.390606 | 0.579097 | — | — | — |
| is_sequence.test | COMPILE | 0.212088 | 0.486032 | 0.702892 | — | — | — |
| iterator_tags.test | COMPILE | 0.181578 | 0.418824 | 0.596626 | — | — | — |
| joint_view.test | COMPILE | 0.237329 | 0.538235 | 0.792933 | — | — | — |
| lambda.test | COMPILE | 0.223456 | 0.499329 | 0.758497 | — | — | — |
| lambda_args.test | COMPILE | 0.214718 | 0.481487 | 0.720955 | — | — | — |
| list.test | COMPILE | 0.224423 | 0.515470 | 0.714854 | — | — | — |
| list_c.test | COMPILE | 0.216436 | 0.505724 | 0.776373 | — | — | — |
| logical.test | COMPILE | 0.183225 | 0.400304 | 0.586717 | — | — | — |
| lower_bound.test | COMPILE | 0.227947 | 0.507534 | 0.754886 | — | — | — |
| map.test | COMPILE | 0.264688 | 0.642741 | 0.925702 | — | — | — |
| max_element.test | COMPILE | 0.212601 | 0.486496 | 0.708935 | — | — | — |
| min_max.test | COMPILE | 0.182670 | 0.426785 | 0.635707 | — | — | — |
| multiset.test | COMPILE | 0.235436 | 0.548318 | 0.794754 | — | — | — |
| next.test | COMPILE | 0.177487 | 0.386586 | 0.574332 | — | — | — |
| no_has_xxx.test | COMPILE | 0.188102 | 0.441671 | 0.646151 | — | — | — |
| numeric_ops.test | COMPILE | 0.205197 | 0.496220 | 0.704615 | — | — | — |
| pair_view.test | COMPILE | 0.241116 | 0.549764 | 0.778398 | — | — | — |
| partition.test | COMPILE | 0.252229 | 0.599659 | 0.866075 | — | — | — |
| pop_front.test | COMPILE | 0.207071 | 0.502755 | 0.725526 | — | — | — |
| push_back.test | COMPILE | 0.181703 | 0.423787 | 0.633863 | — | — | — |
| push_front.test | COMPILE | 0.216144 | 0.491593 | 0.708864 | — | — | — |
| quote.test | COMPILE | 0.179277 | 0.402648 | 0.590761 | — | — | — |
| range_c.test | COMPILE | 0.220450 | 0.537846 | 0.755581 | — | — | — |
| remove.test | COMPILE | 0.229842 | 0.564143 | 0.777798 | — | — | — |
| remove_if.test | COMPILE | 0.241083 | 0.566991 | 0.822309 | — | — | — |
| replace.test | COMPILE | 0.264677 | 0.610790 | 0.871112 | — | — | — |
| replace_if.test | COMPILE | 0.262993 | 0.647488 | 0.886606 | — | — | — |
| reverse.test | COMPILE | 0.250886 | 0.595619 | 0.848385 | — | — | — |
| same_as.test | COMPILE | 0.194353 | 0.435383 | 0.631955 | — | — | — |
| set.test | COMPILE | 0.331150 | 0.818591 | 1.246567 | — | — | — |
| set_c.test | COMPILE | 0.240761 | 0.563170 | 0.835838 | — | — | — |
| single_view.test | COMPILE | 0.217507 | 0.535779 | 0.758375 | — | — | — |
| size.test | COMPILE | 0.216635 | 0.488580 | 0.708555 | — | — | — |
| size_t.test | RUN | 0.186709 | 0.442277 | 0.639497 | 0.001975 | 0.002096 | 0.002046 |
| sizeof.test | COMPILE | 0.174806 | 0.391120 | 0.574005 | — | — | — |
| sort.test | COMPILE | 0.273022 | 0.648209 | 0.917936 | — | — | — |
| stable_partition.test | COMPILE | 0.259859 | 0.604909 | 0.878632 | — | — | — |
| transform.test | COMPILE | 0.274838 | 0.651562 | 0.954138 | — | — | — |
| transform_view.test | COMPILE | 0.230492 | 0.515282 | 0.738934 | — | — | — |
| unique.test | COMPILE | 0.233305 | 0.562712 | 0.802856 | — | — | — |
| unpack_args.test | COMPILE | 0.219191 | 0.518869 | 0.728460 | — | — | — |
| upper_bound.test | COMPILE | 0.223178 | 0.507152 | 0.709165 | — | — | — |
| vector.test | COMPILE | 0.261773 | 0.602569 | 0.893085 | — | — | — |
| vector_c.test | COMPILE | 0.225420 | 0.528885 | 0.786296 | — | — | — |
| zip_view.test | COMPILE | 0.318003 | 0.766680 | 1.105957 | — | — | — |
| string.test | RUN | 0.468450 | 1.393229 | 1.437257 | 0.001530 | 0.001366 | 0.001416 |
| issue_69.test | RUN | 0.022221 | 0.064210 | 0.063085 | 0.000628 | 0.000773 | 0.001752 |
| issue_84.test | RUN | 0.044881 | 0.112197 | 0.122087 | 0.000695 | 0.000580 | 0.001401 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.005× | 1.012×, 0.997× | 1.020× |
| clang | 1.120× | 1.125×, 1.114× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46045514956).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.001235s | 0.001241s | 0.001229s | byte equality observed |
| char.test | 10 | 0.001237s | 0.001224s | 0.001234s | byte equality observed |
| char_unsigned.test | 10 | 0.001245s | 0.001245s | 0.001215s | byte equality observed |
| for_each.test | 10 | 0.001240s | 0.001293s | 0.001275s | byte equality observed |
| int.test | 10 | 0.001227s | 0.001279s | 0.001224s | byte equality observed |
| integral_c.test | 10 | 0.001205s | 0.001218s | 0.001261s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.001239s | 0.001227s | 0.001210s | byte equality observed |
| issue_69.test | 10 | 0.000573s | 0.000574s | 0.001251s | byte equality observed |
| issue_84.test | 10 | 0.000572s | 0.000572s | 0.001227s | byte equality observed |
| size_t.test | 10 | 0.001247s | 0.001281s | 0.001221s | byte equality observed |
| string.test | 10 | 0.001234s | 0.001246s | 0.001242s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46045514956).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
