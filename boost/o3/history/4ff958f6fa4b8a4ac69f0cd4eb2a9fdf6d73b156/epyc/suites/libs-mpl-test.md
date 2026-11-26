# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.282603 | 0.816045 | 0.721143 | — | — | — |
| largest_int.test | COMPILE | 0.112431 | 0.226089 | 0.271615 | — | — | — |
| msvc_is_class.test | COMPILE | 0.014593 | 0.031570 | 0.034192 | — | — | — |
| template_arity.test | COMPILE | 0.110702 | 0.224627 | 0.272069 | — | — | — |
| is_seq.test | COMPILE | 0.005181 | 0.011790 | 0.023645 | — | — | — |
| token_equal.test | COMPILE | 0.005438 | 0.012301 | 0.023614 | — | — | — |
| advance.test | COMPILE | 0.117562 | 0.260528 | 0.293779 | — | — | — |
| always.test | COMPILE | 0.122733 | 0.264666 | 0.304148 | — | — | — |
| apply.test | COMPILE | 0.127643 | 0.275685 | 0.321319 | — | — | — |
| apply_wrap.test | COMPILE | 0.111417 | 0.239337 | 0.259775 | — | — | — |
| arithmetic.test | COMPILE | 0.120935 | 0.275944 | 0.304603 | — | — | — |
| as_sequence.test | COMPILE | 0.127739 | 0.302442 | 0.318812 | — | — | — |
| assert.test | COMPILE | 0.030779 | 0.059533 | 0.067285 | — | — | — |
| at.test | COMPILE | 0.130472 | 0.291697 | 0.319902 | — | — | — |
| back.test | COMPILE | 0.123273 | 0.269707 | 0.304829 | — | — | — |
| bind.test | COMPILE | 0.120416 | 0.251553 | 0.294673 | — | — | — |
| bitwise.test | COMPILE | 0.121933 | 0.273749 | 0.309187 | — | — | — |
| bool.test | RUN | 0.113757 | 0.240098 | 0.276751 | 0.001973 | 0.001589 | 0.001514 |
| comparison.test | COMPILE | 0.121630 | 0.269942 | 0.294200 | — | — | — |
| contains.test | COMPILE | 0.144989 | 0.321655 | 0.350615 | — | — | — |
| copy.test | COMPILE | 0.174417 | 0.382060 | 0.431192 | — | — | — |
| copy_if.test | COMPILE | 0.160194 | 0.329301 | 0.379952 | — | — | — |
| count.test | COMPILE | 0.149851 | 0.311330 | 0.368595 | — | — | — |
| count_if.test | COMPILE | 0.155360 | 0.321318 | 0.371850 | — | — | — |
| deque.test | COMPILE | 0.151453 | 0.314164 | 0.358666 | — | — | — |
| distance.test | COMPILE | 0.142560 | 0.286016 | 0.327026 | — | — | — |
| empty.test | COMPILE | 0.123358 | 0.254105 | 0.291862 | — | — | — |
| equal.test | COMPILE | 0.136585 | 0.296661 | 0.335813 | — | — | — |
| erase.test | COMPILE | 0.155039 | 0.349578 | 0.388428 | — | — | — |
| erase_range.test | COMPILE | 0.152027 | 0.328995 | 0.368740 | — | — | — |
| eval_if.test | COMPILE | 0.111182 | 0.237078 | 0.274673 | — | — | — |
| filter_view.test | COMPILE | 0.176908 | 0.336835 | 0.368636 | — | — | — |
| find.test | COMPILE | 0.189854 | 0.322572 | 0.357764 | — | — | — |
| find_if.test | COMPILE | 0.173833 | 0.325762 | 0.364115 | — | — | — |
| fold.test | COMPILE | 0.164779 | 0.342042 | 0.390906 | — | — | — |
| for_each.test | RUN | 0.237583 | 0.509957 | 0.590108 | 0.001884 | 0.001706 | 0.001634 |
| front.test | COMPILE | 0.126477 | 0.279101 | 0.295786 | — | — | — |
| get_tag_def.test | COMPILE | 0.110718 | 0.242954 | 0.274553 | — | — | — |
| has_xxx.test | COMPILE | 0.125508 | 0.256189 | 0.287212 | — | — | — |
| identity.test | COMPILE | 0.126570 | 0.274382 | 0.285175 | — | — | — |
| if.test | COMPILE | 0.110938 | 0.232106 | 0.246962 | — | — | — |
| index_of.test | COMPILE | 0.145538 | 0.303110 | 0.329980 | — | — | — |
| inherit.test | COMPILE | 0.115019 | 0.246756 | 0.258271 | — | — | — |
| insert.test | COMPILE | 0.159564 | 0.361145 | 0.397932 | — | — | — |
| insert_range.test | COMPILE | 0.216550 | 0.473538 | 0.570107 | — | — | — |
| int.test | RUN | 0.116713 | 0.263854 | 0.283856 | 0.001837 | 0.001874 | 0.001682 |
| char.test | RUN | 0.118639 | 0.262949 | 0.291317 | 0.001792 | 0.001689 | 0.001389 |
| char_unsigned.test | RUN | 0.117332 | 0.276324 | 0.284243 | 0.001890 | 0.001792 | 0.001736 |
| integral_c.test | RUN | 0.133714 | 0.340088 | 0.372893 | 0.001896 | 0.001702 | 0.001497 |
| integral_c_unsigned.test | RUN | 0.134338 | 0.357729 | 0.373662 | 0.001944 | 0.001730 | 0.001611 |
| is_placeholder.test | COMPILE | 0.116729 | 0.273601 | 0.263554 | — | — | — |
| is_sequence.test | COMPILE | 0.135793 | 0.311359 | 0.339445 | — | — | — |
| iterator_tags.test | COMPILE | 0.119701 | 0.258634 | 0.286093 | — | — | — |
| joint_view.test | COMPILE | 0.152219 | 0.370389 | 0.364974 | — | — | — |
| lambda.test | COMPILE | 0.139112 | 0.345641 | 0.347138 | — | — | — |
| lambda_args.test | COMPILE | 0.131914 | 0.318256 | 0.338343 | — | — | — |
| list.test | COMPILE | 0.138442 | 0.302377 | 0.345070 | — | — | — |
| list_c.test | COMPILE | 0.139681 | 0.296947 | 0.349934 | — | — | — |
| logical.test | COMPILE | 0.115086 | 0.231618 | 0.281634 | — | — | — |
| lower_bound.test | COMPILE | 0.143067 | 0.308008 | 0.333945 | — | — | — |
| map.test | COMPILE | 0.163090 | 0.373352 | 0.419916 | — | — | — |
| max_element.test | COMPILE | 0.136423 | 0.278333 | 0.324758 | — | — | — |
| min_max.test | COMPILE | 0.118054 | 0.255599 | 0.280094 | — | — | — |
| multiset.test | COMPILE | 0.141902 | 0.327403 | 0.363087 | — | — | — |
| next.test | COMPILE | 0.109736 | 0.237746 | 0.267420 | — | — | — |
| no_has_xxx.test | COMPILE | 0.118726 | 0.246863 | 0.295819 | — | — | — |
| numeric_ops.test | COMPILE | 0.128982 | 0.287540 | 0.314934 | — | — | — |
| pair_view.test | COMPILE | 0.147403 | 0.323615 | 0.353926 | — | — | — |
| partition.test | COMPILE | 0.158535 | 0.346350 | 0.391915 | — | — | — |
| pop_front.test | COMPILE | 0.130654 | 0.291148 | 0.321515 | — | — | — |
| push_back.test | COMPILE | 0.116321 | 0.245190 | 0.277593 | — | — | — |
| push_front.test | COMPILE | 0.135058 | 0.293456 | 0.320953 | — | — | — |
| quote.test | COMPILE | 0.111984 | 0.233215 | 0.262885 | — | — | — |
| range_c.test | COMPILE | 0.137782 | 0.308070 | 0.332827 | — | — | — |
| remove.test | COMPILE | 0.145705 | 0.319916 | 0.345546 | — | — | — |
| remove_if.test | COMPILE | 0.147510 | 0.328633 | 0.362171 | — | — | — |
| replace.test | COMPILE | 0.159895 | 0.359242 | 0.385779 | — | — | — |
| replace_if.test | COMPILE | 0.162045 | 0.373664 | 0.384621 | — | — | — |
| reverse.test | COMPILE | 0.156010 | 0.345987 | 0.363218 | — | — | — |
| same_as.test | COMPILE | 0.118617 | 0.260413 | 0.283307 | — | — | — |
| set.test | COMPILE | 0.204463 | 0.474819 | 0.560305 | — | — | — |
| set_c.test | COMPILE | 0.154510 | 0.334159 | 0.376890 | — | — | — |
| single_view.test | COMPILE | 0.139889 | 0.311627 | 0.325249 | — | — | — |
| size.test | COMPILE | 0.134017 | 0.303858 | 0.307301 | — | — | — |
| size_t.test | RUN | 0.121978 | 0.271563 | 0.313295 | 0.001696 | 0.001733 | 0.001667 |
| sizeof.test | COMPILE | 0.113185 | 0.237355 | 0.275238 | — | — | — |
| sort.test | COMPILE | 0.172589 | 0.389898 | 0.428975 | — | — | — |
| stable_partition.test | COMPILE | 0.167750 | 0.369844 | 0.399222 | — | — | — |
| transform.test | COMPILE | 0.178413 | 0.384976 | 0.424715 | — | — | — |
| transform_view.test | COMPILE | 0.140482 | 0.316808 | 0.347449 | — | — | — |
| unique.test | COMPILE | 0.147128 | 0.336025 | 0.351241 | — | — | — |
| unpack_args.test | COMPILE | 0.134655 | 0.305767 | 0.330255 | — | — | — |
| upper_bound.test | COMPILE | 0.143666 | 0.306278 | 0.326391 | — | — | — |
| vector.test | COMPILE | 0.163460 | 0.375752 | 0.398665 | — | — | — |
| vector_c.test | COMPILE | 0.138835 | 0.316604 | 0.341057 | — | — | — |
| zip_view.test | COMPILE | 0.193782 | 0.469507 | 0.483888 | — | — | — |
| string.test | RUN | 0.286280 | 0.918983 | 0.740071 | 0.001364 | 0.001364 | 0.001229 |
| issue_69.test | RUN | 0.014803 | 0.042201 | 0.039036 | 0.000639 | 0.000506 | 0.001233 |
| issue_84.test | RUN | 0.025437 | 0.073582 | 0.070514 | 0.000464 | 0.000556 | 0.001181 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.977× | 0.999×, 0.955× | 0.962× |
| clang | 1.121× | 1.121×, 1.122× | 1.018× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45790989032).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.000898s | 0.000867s | 0.000927s | byte equality observed |
| char.test | 10 | 0.000924s | 0.000869s | 0.000923s | byte equality observed |
| char_unsigned.test | 10 | 0.000897s | 0.000876s | 0.000899s | byte equality observed |
| for_each.test | 10 | 0.000916s | 0.000866s | 0.000934s | byte equality observed |
| int.test | 10 | 0.000904s | 0.000884s | 0.000946s | byte equality observed |
| integral_c.test | 10 | 0.000901s | 0.000876s | 0.000920s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.000913s | 0.000883s | 0.000916s | byte equality observed |
| issue_69.test | 10 | 0.000415s | 0.000395s | 0.000887s | byte equality observed |
| issue_84.test | 10 | 0.000410s | 0.000402s | 0.000867s | byte equality observed |
| size_t.test | 10 | 0.000903s | 0.000884s | 0.000925s | byte equality observed |
| string.test | 10 | 0.000902s | 0.000883s | 0.000917s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45790989032).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
