# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.296830 | 0.853928 | 0.803641 | — | — | — |
| largest_int.test | COMPILE | 0.094406 | 0.236839 | 0.277396 | — | — | — |
| msvc_is_class.test | COMPILE | 0.011654 | 0.028930 | 0.032384 | — | — | — |
| template_arity.test | COMPILE | 0.101890 | 0.236749 | 0.274231 | — | — | — |
| is_seq.test | COMPILE | 0.003974 | 0.010486 | 0.017452 | — | — | — |
| token_equal.test | COMPILE | 0.004032 | 0.010728 | 0.017464 | — | — | — |
| advance.test | COMPILE | 0.110107 | 0.267743 | 0.306971 | — | — | — |
| always.test | COMPILE | 0.110718 | 0.272763 | 0.315895 | — | — | — |
| apply.test | COMPILE | 0.117566 | 0.278727 | 0.337080 | — | — | — |
| apply_wrap.test | COMPILE | 0.101487 | 0.242873 | 0.289351 | — | — | — |
| arithmetic.test | COMPILE | 0.108825 | 0.276305 | 0.315334 | — | — | — |
| as_sequence.test | COMPILE | 0.119582 | 0.293010 | 0.332567 | — | — | — |
| assert.test | COMPILE | 0.027037 | 0.054835 | 0.060982 | — | — | — |
| at.test | COMPILE | 0.118045 | 0.285127 | 0.339775 | — | — | — |
| back.test | COMPILE | 0.111243 | 0.277965 | 0.321979 | — | — | — |
| bind.test | COMPILE | 0.108267 | 0.264222 | 0.318260 | — | — | — |
| bitwise.test | COMPILE | 0.112028 | 0.275041 | 0.317670 | — | — | — |
| bool.test | RUN | 0.101106 | 0.241555 | 0.282180 | 0.001070 | 0.001326 | 0.001110 |
| comparison.test | COMPILE | 0.106861 | 0.268035 | 0.311376 | — | — | — |
| contains.test | COMPILE | 0.131564 | 0.326747 | 0.373960 | — | — | — |
| copy.test | COMPILE | 0.165465 | 0.395410 | 0.458608 | — | — | — |
| copy_if.test | COMPILE | 0.140790 | 0.350579 | 0.405926 | — | — | — |
| count.test | COMPILE | 0.134722 | 0.327597 | 0.379207 | — | — | — |
| count_if.test | COMPILE | 0.137135 | 0.344776 | 0.403340 | — | — | — |
| deque.test | COMPILE | 0.131903 | 0.324633 | 0.384463 | — | — | — |
| distance.test | COMPILE | 0.125198 | 0.304700 | 0.352455 | — | — | — |
| empty.test | COMPILE | 0.108542 | 0.267111 | 0.306629 | — | — | — |
| equal.test | COMPILE | 0.126759 | 0.316824 | 0.359511 | — | — | — |
| erase.test | COMPILE | 0.147079 | 0.358662 | 0.424725 | — | — | — |
| erase_range.test | COMPILE | 0.140362 | 0.346220 | 0.393988 | — | — | — |
| eval_if.test | COMPILE | 0.101048 | 0.244464 | 0.293312 | — | — | — |
| filter_view.test | COMPILE | 0.138618 | 0.344116 | 0.398249 | — | — | — |
| find.test | COMPILE | 0.133737 | 0.330275 | 0.387607 | — | — | — |
| find_if.test | COMPILE | 0.137520 | 0.340152 | 0.395940 | — | — | — |
| fold.test | COMPILE | 0.147010 | 0.353963 | 0.412121 | — | — | — |
| for_each.test | RUN | 0.214189 | 0.516142 | 0.648748 | 0.001190 | 0.001390 | 0.001177 |
| front.test | COMPILE | 0.112456 | 0.280229 | 0.321440 | — | — | — |
| get_tag_def.test | COMPILE | 0.100417 | 0.244937 | 0.282117 | — | — | — |
| has_xxx.test | COMPILE | 0.110385 | 0.258763 | 0.323826 | — | — | — |
| identity.test | COMPILE | 0.115427 | 0.273806 | 0.321711 | — | — | — |
| if.test | COMPILE | 0.098741 | 0.239027 | 0.290981 | — | — | — |
| index_of.test | COMPILE | 0.128916 | 0.315066 | 0.366443 | — | — | — |
| inherit.test | COMPILE | 0.102015 | 0.251150 | 0.297229 | — | — | — |
| insert.test | COMPILE | 0.148669 | 0.373925 | 0.432791 | — | — | — |
| insert_range.test | COMPILE | 0.202507 | 0.505331 | 0.614780 | — | — | — |
| int.test | RUN | 0.106484 | 0.276702 | 0.312328 | 0.001475 | 0.001193 | 0.001080 |
| char.test | RUN | 0.107510 | 0.272962 | 0.315954 | 0.001183 | 0.001151 | 0.001065 |
| char_unsigned.test | RUN | 0.105323 | 0.274326 | 0.319206 | 0.001131 | 0.001413 | 0.001068 |
| integral_c.test | RUN | 0.120369 | 0.353480 | 0.389034 | 0.001145 | 0.001251 | 0.001113 |
| integral_c_unsigned.test | RUN | 0.118759 | 0.351356 | 0.386604 | 0.001184 | 0.001373 | 0.001081 |
| is_placeholder.test | COMPILE | 0.099714 | 0.246668 | 0.291412 | — | — | — |
| is_sequence.test | COMPILE | 0.122776 | 0.305122 | 0.343056 | — | — | — |
| iterator_tags.test | COMPILE | 0.105574 | 0.254365 | 0.287148 | — | — | — |
| joint_view.test | COMPILE | 0.139166 | 0.347168 | 0.391657 | — | — | — |
| lambda.test | COMPILE | 0.125996 | 0.315705 | 0.368482 | — | — | — |
| lambda_args.test | COMPILE | 0.120383 | 0.296020 | 0.366058 | — | — | — |
| list.test | COMPILE | 0.126258 | 0.319722 | 0.353666 | — | — | — |
| list_c.test | COMPILE | 0.127029 | 0.306716 | 0.372041 | — | — | — |
| logical.test | COMPILE | 0.100053 | 0.249381 | 0.288156 | — | — | — |
| lower_bound.test | COMPILE | 0.130256 | 0.314370 | 0.369379 | — | — | — |
| map.test | COMPILE | 0.153565 | 0.402395 | 0.464915 | — | — | — |
| max_element.test | COMPILE | 0.122971 | 0.293857 | 0.362798 | — | — | — |
| min_max.test | COMPILE | 0.104700 | 0.260339 | 0.302179 | — | — | — |
| multiset.test | COMPILE | 0.135191 | 0.342673 | 0.393181 | — | — | — |
| next.test | COMPILE | 0.100493 | 0.243797 | 0.287638 | — | — | — |
| no_has_xxx.test | COMPILE | 0.109112 | 0.259379 | 0.314897 | — | — | — |
| numeric_ops.test | COMPILE | 0.118413 | 0.299446 | 0.348001 | — | — | — |
| pair_view.test | COMPILE | 0.141175 | 0.340445 | 0.390552 | — | — | — |
| partition.test | COMPILE | 0.147540 | 0.375844 | 0.429793 | — | — | — |
| pop_front.test | COMPILE | 0.119957 | 0.303777 | 0.350587 | — | — | — |
| push_back.test | COMPILE | 0.103343 | 0.257843 | 0.298226 | — | — | — |
| push_front.test | COMPILE | 0.122557 | 0.306566 | 0.352945 | — | — | — |
| quote.test | COMPILE | 0.100102 | 0.245884 | 0.282512 | — | — | — |
| range_c.test | COMPILE | 0.128505 | 0.326086 | 0.372220 | — | — | — |
| remove.test | COMPILE | 0.136548 | 0.341130 | 0.386028 | — | — | — |
| remove_if.test | COMPILE | 0.140366 | 0.350217 | 0.401055 | — | — | — |
| replace.test | COMPILE | 0.149522 | 0.379633 | 0.429002 | — | — | — |
| replace_if.test | COMPILE | 0.151080 | 0.391029 | 0.436924 | — | — | — |
| reverse.test | COMPILE | 0.143412 | 0.360729 | 0.412724 | — | — | — |
| same_as.test | COMPILE | 0.105137 | 0.262741 | 0.306326 | — | — | — |
| set.test | COMPILE | 0.190824 | 0.495886 | 0.608219 | — | — | — |
| set_c.test | COMPILE | 0.138895 | 0.345310 | 0.411459 | — | — | — |
| single_view.test | COMPILE | 0.125004 | 0.330564 | 0.373734 | — | — | — |
| size.test | COMPILE | 0.121196 | 0.298865 | 0.344906 | — | — | — |
| size_t.test | RUN | 0.104969 | 0.277287 | 0.321673 | 0.001168 | 0.001214 | 0.001130 |
| sizeof.test | COMPILE | 0.098101 | 0.238741 | 0.291077 | — | — | — |
| sort.test | COMPILE | 0.158446 | 0.402552 | 0.472570 | — | — | — |
| stable_partition.test | COMPILE | 0.149032 | 0.372150 | 0.437788 | — | — | — |
| transform.test | COMPILE | 0.158229 | 0.402860 | 0.477923 | — | — | — |
| transform_view.test | COMPILE | 0.127095 | 0.324288 | 0.378749 | — | — | — |
| unique.test | COMPILE | 0.135971 | 0.341806 | 0.396328 | — | — | — |
| unpack_args.test | COMPILE | 0.125245 | 0.313469 | 0.365857 | — | — | — |
| upper_bound.test | COMPILE | 0.128256 | 0.314092 | 0.381089 | — | — | — |
| vector.test | COMPILE | 0.143893 | 0.383563 | 0.446741 | — | — | — |
| vector_c.test | COMPILE | 0.129945 | 0.319876 | 0.377535 | — | — | — |
| zip_view.test | COMPILE | 0.184521 | 0.474486 | 0.543548 | — | — | — |
| string.test | RUN | 0.297504 | 0.941545 | 0.825653 | 0.000946 | 0.000909 | 0.000762 |
| issue_69.test | RUN | 0.012818 | 0.035712 | 0.035457 | 0.000473 | 0.000481 | 0.001115 |
| issue_84.test | RUN | 0.030052 | 0.069497 | 0.066883 | 0.000363 | 0.000378 | 0.000798 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.986× | 0.975×, 0.997× | 0.980× |
| clang | 1.107× | 1.102×, 1.111× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45739944580).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.000822s | 0.000825s | 0.000813s | byte equality observed |
| char.test | 10 | 0.000813s | 0.000820s | 0.000777s | byte equality observed |
| char_unsigned.test | 10 | 0.000800s | 0.000801s | 0.000803s | byte equality observed |
| for_each.test | 10 | 0.000806s | 0.000811s | 0.000817s | byte equality observed |
| int.test | 10 | 0.000800s | 0.000770s | 0.000798s | byte equality observed |
| integral_c.test | 10 | 0.000821s | 0.000790s | 0.000795s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.000813s | 0.000786s | 0.000796s | byte equality observed |
| issue_69.test | 10 | 0.000363s | 0.000359s | 0.000785s | byte equality observed |
| issue_84.test | 10 | 0.000352s | 0.000355s | 0.000793s | byte equality observed |
| size_t.test | 10 | 0.000784s | 0.000801s | 0.000789s | byte equality observed |
| string.test | 10 | 0.000803s | 0.000812s | 0.000796s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45739944580).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
