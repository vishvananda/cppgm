# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.411977 | 1.196305 | 1.140580 | — | — | — |
| largest_int.test | COMPILE | 0.134722 | 0.330530 | 0.395274 | — | — | — |
| msvc_is_class.test | COMPILE | 0.015917 | 0.041436 | 0.046650 | — | — | — |
| template_arity.test | COMPILE | 0.129996 | 0.327111 | 0.390091 | — | — | — |
| is_seq.test | COMPILE | 0.005323 | 0.014460 | 0.027485 | — | — | — |
| token_equal.test | COMPILE | 0.005460 | 0.015040 | 0.027496 | — | — | — |
| advance.test | COMPILE | 0.146809 | 0.371243 | 0.441903 | — | — | — |
| always.test | COMPILE | 0.150607 | 0.385218 | 0.447795 | — | — | — |
| apply.test | COMPILE | 0.158764 | 0.389468 | 0.478020 | — | — | — |
| apply_wrap.test | COMPILE | 0.137185 | 0.335556 | 0.411711 | — | — | — |
| arithmetic.test | COMPILE | 0.151586 | 0.381601 | 0.452191 | — | — | — |
| as_sequence.test | COMPILE | 0.164826 | 0.419654 | 0.472427 | — | — | — |
| assert.test | COMPILE | 0.036877 | 0.080175 | 0.088171 | — | — | — |
| at.test | COMPILE | 0.161493 | 0.407888 | 0.483557 | — | — | — |
| back.test | COMPILE | 0.153359 | 0.389521 | 0.461252 | — | — | — |
| bind.test | COMPILE | 0.149411 | 0.372868 | 0.441233 | — | — | — |
| bitwise.test | COMPILE | 0.152647 | 0.384238 | 0.458587 | — | — | — |
| bool.test | RUN | 0.136769 | 0.337125 | 0.409495 | 0.001500 | 0.001705 | 0.001654 |
| comparison.test | COMPILE | 0.146463 | 0.377130 | 0.447093 | — | — | — |
| contains.test | COMPILE | 0.180549 | 0.465870 | 0.528247 | — | — | — |
| copy.test | COMPILE | 0.213783 | 0.550316 | 0.655235 | — | — | — |
| copy_if.test | COMPILE | 0.190885 | 0.489064 | 0.570811 | — | — | — |
| count.test | COMPILE | 0.182505 | 0.448399 | 0.543670 | — | — | — |
| count_if.test | COMPILE | 0.189635 | 0.480614 | 0.570856 | — | — | — |
| deque.test | COMPILE | 0.182779 | 0.461116 | 0.539688 | — | — | — |
| distance.test | COMPILE | 0.170093 | 0.421286 | 0.493562 | — | — | — |
| empty.test | COMPILE | 0.148355 | 0.375026 | 0.433718 | — | — | — |
| equal.test | COMPILE | 0.172062 | 0.444826 | 0.511755 | — | — | — |
| erase.test | COMPILE | 0.200441 | 0.505179 | 0.605242 | — | — | — |
| erase_range.test | COMPILE | 0.190206 | 0.482863 | 0.562360 | — | — | — |
| eval_if.test | COMPILE | 0.141520 | 0.337216 | 0.415148 | — | — | — |
| filter_view.test | COMPILE | 0.188865 | 0.484459 | 0.560569 | — | — | — |
| find.test | COMPILE | 0.183994 | 0.458199 | 0.544966 | — | — | — |
| find_if.test | COMPILE | 0.190485 | 0.473285 | 0.564576 | — | — | — |
| fold.test | COMPILE | 0.195354 | 0.493445 | 0.587631 | — | — | — |
| for_each.test | RUN | 0.280890 | 0.719934 | 0.927780 | 0.001526 | 0.001714 | 0.001674 |
| front.test | COMPILE | 0.152872 | 0.395776 | 0.463567 | — | — | — |
| get_tag_def.test | COMPILE | 0.135399 | 0.339931 | 0.408411 | — | — | — |
| has_xxx.test | COMPILE | 0.148497 | 0.356691 | 0.462944 | — | — | — |
| identity.test | COMPILE | 0.153575 | 0.382101 | 0.456618 | — | — | — |
| if.test | COMPILE | 0.137881 | 0.334307 | 0.412781 | — | — | — |
| index_of.test | COMPILE | 0.177183 | 0.435612 | 0.517933 | — | — | — |
| inherit.test | COMPILE | 0.142909 | 0.345048 | 0.424443 | — | — | — |
| insert.test | COMPILE | 0.202822 | 0.525727 | 0.620283 | — | — | — |
| insert_range.test | COMPILE | 0.272813 | 0.711836 | 0.893372 | — | — | — |
| int.test | RUN | 0.143846 | 0.377193 | 0.447046 | 0.001583 | 0.001656 | 0.001500 |
| char.test | RUN | 0.146387 | 0.384202 | 0.449577 | 0.001629 | 0.001460 | 0.001681 |
| char_unsigned.test | RUN | 0.146067 | 0.378790 | 0.442618 | 0.001551 | 0.001738 | 0.001686 |
| integral_c.test | RUN | 0.164173 | 0.485039 | 0.562198 | 0.001547 | 0.001745 | 0.001638 |
| integral_c_unsigned.test | RUN | 0.162914 | 0.482910 | 0.556810 | 0.001593 | 0.001561 | 0.001445 |
| is_placeholder.test | COMPILE | 0.140475 | 0.331236 | 0.396223 | — | — | — |
| is_sequence.test | COMPILE | 0.168387 | 0.415369 | 0.486889 | — | — | — |
| iterator_tags.test | COMPILE | 0.142324 | 0.354016 | 0.413228 | — | — | — |
| joint_view.test | COMPILE | 0.191404 | 0.476207 | 0.564035 | — | — | — |
| lambda.test | COMPILE | 0.173402 | 0.436626 | 0.529523 | — | — | — |
| lambda_args.test | COMPILE | 0.164631 | 0.405264 | 0.519825 | — | — | — |
| list.test | COMPILE | 0.171551 | 0.442233 | 0.515625 | — | — | — |
| list_c.test | COMPILE | 0.172985 | 0.431686 | 0.523874 | — | — | — |
| logical.test | COMPILE | 0.137156 | 0.343641 | 0.414730 | — | — | — |
| lower_bound.test | COMPILE | 0.178918 | 0.433838 | 0.513157 | — | — | — |
| map.test | COMPILE | 0.209249 | 0.556106 | 0.643042 | — | — | — |
| max_element.test | COMPILE | 0.171566 | 0.411060 | 0.502502 | — | — | — |
| min_max.test | COMPILE | 0.142319 | 0.360971 | 0.431927 | — | — | — |
| multiset.test | COMPILE | 0.184945 | 0.486308 | 0.540286 | — | — | — |
| next.test | COMPILE | 0.138046 | 0.339562 | 0.409842 | — | — | — |
| no_has_xxx.test | COMPILE | 0.150668 | 0.357181 | 0.436269 | — | — | — |
| numeric_ops.test | COMPILE | 0.160776 | 0.406370 | 0.485506 | — | — | — |
| pair_view.test | COMPILE | 0.190867 | 0.485748 | 0.544435 | — | — | — |
| partition.test | COMPILE | 0.203530 | 0.510848 | 0.606441 | — | — | — |
| pop_front.test | COMPILE | 0.167410 | 0.419189 | 0.488080 | — | — | — |
| push_back.test | COMPILE | 0.143402 | 0.356970 | 0.419662 | — | — | — |
| push_front.test | COMPILE | 0.169851 | 0.417440 | 0.502818 | — | — | — |
| quote.test | COMPILE | 0.138502 | 0.337286 | 0.411593 | — | — | — |
| range_c.test | COMPILE | 0.177986 | 0.452190 | 0.523095 | — | — | — |
| remove.test | COMPILE | 0.185136 | 0.473251 | 0.546464 | — | — | — |
| remove_if.test | COMPILE | 0.192433 | 0.492260 | 0.572443 | — | — | — |
| replace.test | COMPILE | 0.207252 | 0.527113 | 0.617189 | — | — | — |
| replace_if.test | COMPILE | 0.206881 | 0.545397 | 0.619332 | — | — | — |
| reverse.test | COMPILE | 0.192482 | 0.505726 | 0.576954 | — | — | — |
| same_as.test | COMPILE | 0.150014 | 0.371423 | 0.425907 | — | — | — |
| set.test | COMPILE | 0.259864 | 0.705116 | 0.876559 | — | — | — |
| set_c.test | COMPILE | 0.196510 | 0.482534 | 0.570221 | — | — | — |
| single_view.test | COMPILE | 0.170842 | 0.457765 | 0.506108 | — | — | — |
| size.test | COMPILE | 0.169746 | 0.419630 | 0.487678 | — | — | — |
| size_t.test | RUN | 0.144413 | 0.381043 | 0.453147 | 0.001445 | 0.001776 | 0.001709 |
| sizeof.test | COMPILE | 0.136031 | 0.336515 | 0.403402 | — | — | — |
| sort.test | COMPILE | 0.222063 | 0.540370 | 0.647670 | — | — | — |
| stable_partition.test | COMPILE | 0.204940 | 0.524813 | 0.610614 | — | — | — |
| transform.test | COMPILE | 0.217574 | 0.556162 | 0.653117 | — | — | — |
| transform_view.test | COMPILE | 0.180305 | 0.446025 | 0.524534 | — | — | — |
| unique.test | COMPILE | 0.186515 | 0.473276 | 0.542317 | — | — | — |
| unpack_args.test | COMPILE | 0.173450 | 0.444022 | 0.504186 | — | — | — |
| upper_bound.test | COMPILE | 0.178178 | 0.444573 | 0.518004 | — | — | — |
| vector.test | COMPILE | 0.202328 | 0.510878 | 0.620513 | — | — | — |
| vector_c.test | COMPILE | 0.177734 | 0.436512 | 0.530006 | — | — | — |
| zip_view.test | COMPILE | 0.249197 | 0.661233 | 0.751133 | — | — | — |
| string.test | RUN | 0.411541 | 1.229963 | 1.115582 | 0.001185 | 0.001217 | 0.001192 |
| issue_69.test | RUN | 0.017604 | 0.051780 | 0.050373 | 0.000500 | 0.000691 | 0.001669 |
| issue_84.test | RUN | 0.035197 | 0.095236 | 0.097049 | 0.000540 | 0.000439 | 0.001214 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.013× | 1.013×, 1.013× | 1.011× |
| clang | 1.104× | 1.110×, 1.097× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44597827043).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.001010s | 0.001057s | 0.001022s | byte equality observed |
| char.test | 10 | 0.001016s | 0.001027s | 0.001005s | byte equality observed |
| char_unsigned.test | 10 | 0.001014s | 0.001029s | 0.001039s | byte equality observed |
| for_each.test | 10 | 0.001031s | 0.001041s | 0.001046s | byte equality observed |
| int.test | 10 | 0.001008s | 0.001037s | 0.001025s | byte equality observed |
| integral_c.test | 10 | 0.001027s | 0.001001s | 0.000997s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.001009s | 0.001062s | 0.001018s | byte equality observed |
| issue_69.test | 10 | 0.000465s | 0.000477s | 0.000956s | byte equality observed |
| issue_84.test | 10 | 0.000449s | 0.000461s | 0.000974s | byte equality observed |
| size_t.test | 10 | 0.001020s | 0.001020s | 0.000994s | byte equality observed |
| string.test | 10 | 0.001006s | 0.001049s | 0.001023s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44597827043).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
