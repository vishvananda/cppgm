# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.292042 | 0.837652 | 0.803604 | — | — | — |
| largest_int.test | COMPILE | 0.097399 | 0.240738 | 0.297579 | — | — | — |
| msvc_is_class.test | COMPILE | 0.011330 | 0.028563 | 0.035241 | — | — | — |
| template_arity.test | COMPILE | 0.093429 | 0.240998 | 0.291793 | — | — | — |
| is_seq.test | COMPILE | 0.004143 | 0.010177 | 0.018920 | — | — | — |
| token_equal.test | COMPILE | 0.004218 | 0.010212 | 0.019450 | — | — | — |
| advance.test | COMPILE | 0.105186 | 0.264241 | 0.297764 | — | — | — |
| always.test | COMPILE | 0.108903 | 0.269413 | 0.326233 | — | — | — |
| apply.test | COMPILE | 0.111631 | 0.280211 | 0.341168 | — | — | — |
| apply_wrap.test | COMPILE | 0.100323 | 0.243630 | 0.287267 | — | — | — |
| arithmetic.test | COMPILE | 0.108559 | 0.272472 | 0.327812 | — | — | — |
| as_sequence.test | COMPILE | 0.112136 | 0.297197 | 0.347195 | — | — | — |
| assert.test | COMPILE | 0.026588 | 0.055617 | 0.060077 | — | — | — |
| at.test | COMPILE | 0.116442 | 0.291773 | 0.341761 | — | — | — |
| back.test | COMPILE | 0.110770 | 0.285369 | 0.327177 | — | — | — |
| bind.test | COMPILE | 0.105692 | 0.270037 | 0.321485 | — | — | — |
| bitwise.test | COMPILE | 0.107714 | 0.273731 | 0.327675 | — | — | — |
| bool.test | RUN | 0.098106 | 0.242141 | 0.300384 | 0.001072 | 0.001351 | 0.001061 |
| comparison.test | COMPILE | 0.108105 | 0.276348 | 0.325337 | — | — | — |
| contains.test | COMPILE | 0.128001 | 0.330250 | 0.386947 | — | — | — |
| copy.test | COMPILE | 0.160441 | 0.396827 | 0.467669 | — | — | — |
| copy_if.test | COMPILE | 0.141151 | 0.350839 | 0.410880 | — | — | — |
| count.test | COMPILE | 0.133391 | 0.323081 | 0.393353 | — | — | — |
| count_if.test | COMPILE | 0.140530 | 0.345252 | 0.410847 | — | — | — |
| deque.test | COMPILE | 0.132356 | 0.330924 | 0.393449 | — | — | — |
| distance.test | COMPILE | 0.117835 | 0.309432 | 0.358009 | — | — | — |
| empty.test | COMPILE | 0.109037 | 0.271056 | 0.319699 | — | — | — |
| equal.test | COMPILE | 0.124185 | 0.312331 | 0.371194 | — | — | — |
| erase.test | COMPILE | 0.142979 | 0.366292 | 0.432817 | — | — | — |
| erase_range.test | COMPILE | 0.134360 | 0.347890 | 0.408175 | — | — | — |
| eval_if.test | COMPILE | 0.102803 | 0.245314 | 0.297429 | — | — | — |
| filter_view.test | COMPILE | 0.137505 | 0.344271 | 0.407678 | — | — | — |
| find.test | COMPILE | 0.132777 | 0.329349 | 0.389021 | — | — | — |
| find_if.test | COMPILE | 0.136007 | 0.344353 | 0.399720 | — | — | — |
| fold.test | COMPILE | 0.141735 | 0.354997 | 0.424330 | — | — | — |
| for_each.test | RUN | 0.205630 | 0.520859 | 0.671312 | 0.001101 | 0.001356 | 0.001427 |
| front.test | COMPILE | 0.113228 | 0.284463 | 0.335045 | — | — | — |
| get_tag_def.test | COMPILE | 0.096991 | 0.248987 | 0.288097 | — | — | — |
| has_xxx.test | COMPILE | 0.107491 | 0.254044 | 0.324235 | — | — | — |
| identity.test | COMPILE | 0.110209 | 0.275501 | 0.324591 | — | — | — |
| if.test | COMPILE | 0.098213 | 0.243859 | 0.295462 | — | — | — |
| index_of.test | COMPILE | 0.121145 | 0.315863 | 0.372309 | — | — | — |
| inherit.test | COMPILE | 0.101773 | 0.250575 | 0.304604 | — | — | — |
| insert.test | COMPILE | 0.146068 | 0.372088 | 0.443663 | — | — | — |
| insert_range.test | COMPILE | 0.194604 | 0.506847 | 0.641884 | — | — | — |
| int.test | RUN | 0.106309 | 0.270134 | 0.318982 | 0.001302 | 0.001320 | 0.001289 |
| char.test | RUN | 0.101122 | 0.275309 | 0.323451 | 0.001145 | 0.001131 | 0.001231 |
| char_unsigned.test | RUN | 0.100835 | 0.274598 | 0.322813 | 0.001104 | 0.001204 | 0.001158 |
| integral_c.test | RUN | 0.117585 | 0.356114 | 0.405983 | 0.001081 | 0.001401 | 0.001163 |
| integral_c_unsigned.test | RUN | 0.123510 | 0.354100 | 0.392539 | 0.001316 | 0.001219 | 0.001284 |
| is_placeholder.test | COMPILE | 0.099601 | 0.243374 | 0.299434 | — | — | — |
| is_sequence.test | COMPILE | 0.124012 | 0.295461 | 0.349470 | — | — | — |
| iterator_tags.test | COMPILE | 0.105888 | 0.256063 | 0.308980 | — | — | — |
| joint_view.test | COMPILE | 0.140443 | 0.347199 | 0.400452 | — | — | — |
| lambda.test | COMPILE | 0.126730 | 0.310440 | 0.380468 | — | — | — |
| lambda_args.test | COMPILE | 0.119499 | 0.296243 | 0.365981 | — | — | — |
| list.test | COMPILE | 0.123465 | 0.315675 | 0.369586 | — | — | — |
| list_c.test | COMPILE | 0.123325 | 0.309745 | 0.372808 | — | — | — |
| logical.test | COMPILE | 0.100054 | 0.240990 | 0.300761 | — | — | — |
| lower_bound.test | COMPILE | 0.127953 | 0.319876 | 0.375596 | — | — | — |
| map.test | COMPILE | 0.148736 | 0.396384 | 0.477767 | — | — | — |
| max_element.test | COMPILE | 0.122714 | 0.299080 | 0.357225 | — | — | — |
| min_max.test | COMPILE | 0.103152 | 0.257722 | 0.318469 | — | — | — |
| multiset.test | COMPILE | 0.132292 | 0.344242 | 0.396881 | — | — | — |
| next.test | COMPILE | 0.092196 | 0.242688 | 0.299852 | — | — | — |
| no_has_xxx.test | COMPILE | 0.103031 | 0.254368 | 0.320820 | — | — | — |
| numeric_ops.test | COMPILE | 0.117265 | 0.293470 | 0.354096 | — | — | — |
| pair_view.test | COMPILE | 0.130252 | 0.340079 | 0.399550 | — | — | — |
| partition.test | COMPILE | 0.142822 | 0.377238 | 0.447030 | — | — | — |
| pop_front.test | COMPILE | 0.120106 | 0.300928 | 0.353832 | — | — | — |
| push_back.test | COMPILE | 0.099044 | 0.258160 | 0.306724 | — | — | — |
| push_front.test | COMPILE | 0.121508 | 0.310093 | 0.358586 | — | — | — |
| quote.test | COMPILE | 0.096878 | 0.239097 | 0.295679 | — | — | — |
| range_c.test | COMPILE | 0.127657 | 0.318058 | 0.374724 | — | — | — |
| remove.test | COMPILE | 0.132123 | 0.334908 | 0.404027 | — | — | — |
| remove_if.test | COMPILE | 0.137172 | 0.353251 | 0.414461 | — | — | — |
| replace.test | COMPILE | 0.143387 | 0.378368 | 0.449269 | — | — | — |
| replace_if.test | COMPILE | 0.150129 | 0.385846 | 0.446260 | — | — | — |
| reverse.test | COMPILE | 0.137604 | 0.361071 | 0.429995 | — | — | — |
| same_as.test | COMPILE | 0.108004 | 0.264719 | 0.313711 | — | — | — |
| set.test | COMPILE | 0.184063 | 0.507106 | 0.631787 | — | — | — |
| set_c.test | COMPILE | 0.137720 | 0.357314 | 0.417092 | — | — | — |
| single_view.test | COMPILE | 0.121461 | 0.319092 | 0.385327 | — | — | — |
| size.test | COMPILE | 0.118550 | 0.297645 | 0.340803 | — | — | — |
| size_t.test | RUN | 0.108045 | 0.272876 | 0.320953 | 0.001158 | 0.001187 | 0.001222 |
| sizeof.test | COMPILE | 0.098766 | 0.238305 | 0.287766 | — | — | — |
| sort.test | COMPILE | 0.159316 | 0.402333 | 0.466751 | — | — | — |
| stable_partition.test | COMPILE | 0.149905 | 0.377109 | 0.441781 | — | — | — |
| transform.test | COMPILE | 0.158732 | 0.406278 | 0.485389 | — | — | — |
| transform_view.test | COMPILE | 0.130216 | 0.318835 | 0.374991 | — | — | — |
| unique.test | COMPILE | 0.137253 | 0.343967 | 0.398619 | — | — | — |
| unpack_args.test | COMPILE | 0.125310 | 0.315062 | 0.369641 | — | — | — |
| upper_bound.test | COMPILE | 0.131715 | 0.319180 | 0.378561 | — | — | — |
| vector.test | COMPILE | 0.147485 | 0.388198 | 0.446798 | — | — | — |
| vector_c.test | COMPILE | 0.130965 | 0.315668 | 0.385932 | — | — | — |
| zip_view.test | COMPILE | 0.184969 | 0.478032 | 0.560091 | — | — | — |
| string.test | RUN | 0.305578 | 0.930006 | 0.835526 | 0.000859 | 0.000859 | 0.000889 |
| issue_69.test | RUN | 0.011572 | 0.035169 | 0.037027 | 0.000388 | 0.000392 | 0.001169 |
| issue_84.test | RUN | 0.029979 | 0.069345 | 0.070765 | 0.000385 | 0.000364 | 0.000917 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.996× | 1.004×, 0.988× | 1.005× |
| clang | 1.107× | 1.115×, 1.098× | 0.984× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46032707836).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.000817s | 0.000787s | 0.000786s | byte equality observed |
| char.test | 10 | 0.000793s | 0.000794s | 0.000801s | byte equality observed |
| char_unsigned.test | 10 | 0.000804s | 0.000806s | 0.000797s | byte equality observed |
| for_each.test | 10 | 0.000808s | 0.000837s | 0.000815s | byte equality observed |
| int.test | 10 | 0.000811s | 0.000798s | 0.000784s | byte equality observed |
| integral_c.test | 10 | 0.000810s | 0.000809s | 0.000793s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.000811s | 0.000787s | 0.000796s | byte equality observed |
| issue_69.test | 10 | 0.000363s | 0.000364s | 0.000796s | byte equality observed |
| issue_84.test | 10 | 0.000355s | 0.000355s | 0.000794s | byte equality observed |
| size_t.test | 10 | 0.000804s | 0.000812s | 0.000774s | byte equality observed |
| string.test | 10 | 0.000799s | 0.000828s | 0.000840s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46032707836).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
