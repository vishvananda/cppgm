# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.294016 | 0.857247 | 0.794495 | — | — | — |
| largest_int.test | COMPILE | 0.096913 | 0.239540 | 0.303165 | — | — | — |
| msvc_is_class.test | COMPILE | 0.011962 | 0.029595 | 0.033356 | — | — | — |
| template_arity.test | COMPILE | 0.093412 | 0.239909 | 0.305280 | — | — | — |
| is_seq.test | COMPILE | 0.004087 | 0.010492 | 0.021978 | — | — | — |
| token_equal.test | COMPILE | 0.004395 | 0.010623 | 0.022464 | — | — | — |
| advance.test | COMPILE | 0.106900 | 0.267932 | 0.325734 | — | — | — |
| always.test | COMPILE | 0.111754 | 0.269205 | 0.330228 | — | — | — |
| apply.test | COMPILE | 0.114400 | 0.291170 | 0.351158 | — | — | — |
| apply_wrap.test | COMPILE | 0.099216 | 0.244308 | 0.303294 | — | — | — |
| arithmetic.test | COMPILE | 0.110615 | 0.276570 | 0.337606 | — | — | — |
| as_sequence.test | COMPILE | 0.118069 | 0.306861 | 0.343404 | — | — | — |
| assert.test | COMPILE | 0.027318 | 0.057042 | 0.065401 | — | — | — |
| at.test | COMPILE | 0.121522 | 0.297660 | 0.357645 | — | — | — |
| back.test | COMPILE | 0.112608 | 0.283011 | 0.339266 | — | — | — |
| bind.test | COMPILE | 0.107935 | 0.271585 | 0.325978 | — | — | — |
| bitwise.test | COMPILE | 0.110805 | 0.279389 | 0.330905 | — | — | — |
| bool.test | RUN | 0.100770 | 0.248773 | 0.298606 | 0.001360 | 0.001357 | 0.001249 |
| comparison.test | COMPILE | 0.109036 | 0.274013 | 0.328688 | — | — | — |
| contains.test | COMPILE | 0.131155 | 0.336223 | 0.394448 | — | — | — |
| copy.test | COMPILE | 0.160002 | 0.405932 | 0.474630 | — | — | — |
| copy_if.test | COMPILE | 0.141748 | 0.358483 | 0.433615 | — | — | — |
| count.test | COMPILE | 0.131176 | 0.323910 | 0.403983 | — | — | — |
| count_if.test | COMPILE | 0.139152 | 0.347875 | 0.420890 | — | — | — |
| deque.test | COMPILE | 0.130044 | 0.335800 | 0.404653 | — | — | — |
| distance.test | COMPILE | 0.124497 | 0.303961 | 0.369328 | — | — | — |
| empty.test | COMPILE | 0.107544 | 0.273684 | 0.322557 | — | — | — |
| equal.test | COMPILE | 0.126961 | 0.317497 | 0.380265 | — | — | — |
| erase.test | COMPILE | 0.143025 | 0.370688 | 0.441082 | — | — | — |
| erase_range.test | COMPILE | 0.137034 | 0.350697 | 0.417795 | — | — | — |
| eval_if.test | COMPILE | 0.099506 | 0.252306 | 0.298075 | — | — | — |
| filter_view.test | COMPILE | 0.138009 | 0.351761 | 0.410928 | — | — | — |
| find.test | COMPILE | 0.130559 | 0.333642 | 0.399242 | — | — | — |
| find_if.test | COMPILE | 0.138886 | 0.347909 | 0.412240 | — | — | — |
| fold.test | COMPILE | 0.143387 | 0.358459 | 0.436503 | — | — | — |
| for_each.test | RUN | 0.210316 | 0.530168 | 0.684169 | 0.001144 | 0.001233 | 0.001338 |
| front.test | COMPILE | 0.110236 | 0.282766 | 0.338009 | — | — | — |
| get_tag_def.test | COMPILE | 0.101521 | 0.245238 | 0.301932 | — | — | — |
| has_xxx.test | COMPILE | 0.110572 | 0.271516 | 0.332172 | — | — | — |
| identity.test | COMPILE | 0.114765 | 0.281520 | 0.325862 | — | — | — |
| if.test | COMPILE | 0.099049 | 0.246020 | 0.298469 | — | — | — |
| index_of.test | COMPILE | 0.127083 | 0.321243 | 0.376379 | — | — | — |
| inherit.test | COMPILE | 0.104475 | 0.259920 | 0.311462 | — | — | — |
| insert.test | COMPILE | 0.149476 | 0.383388 | 0.459897 | — | — | — |
| insert_range.test | COMPILE | 0.204045 | 0.507288 | 0.641243 | — | — | — |
| int.test | RUN | 0.106090 | 0.274465 | 0.333108 | 0.001223 | 0.001448 | 0.001135 |
| char.test | RUN | 0.103981 | 0.278638 | 0.328745 | 0.001185 | 0.001215 | 0.001140 |
| char_unsigned.test | RUN | 0.110401 | 0.276476 | 0.327864 | 0.001245 | 0.001464 | 0.001235 |
| integral_c.test | RUN | 0.121845 | 0.359954 | 0.402755 | 0.001348 | 0.001281 | 0.001245 |
| integral_c_unsigned.test | RUN | 0.120225 | 0.347234 | 0.405678 | 0.001096 | 0.001364 | 0.001110 |
| is_placeholder.test | COMPILE | 0.104261 | 0.250895 | 0.304113 | — | — | — |
| is_sequence.test | COMPILE | 0.121302 | 0.309780 | 0.355233 | — | — | — |
| iterator_tags.test | COMPILE | 0.105954 | 0.254157 | 0.296160 | — | — | — |
| joint_view.test | COMPILE | 0.136154 | 0.343509 | 0.405493 | — | — | — |
| lambda.test | COMPILE | 0.127478 | 0.320965 | 0.374697 | — | — | — |
| lambda_args.test | COMPILE | 0.113990 | 0.300811 | 0.374872 | — | — | — |
| list.test | COMPILE | 0.125222 | 0.313739 | 0.361699 | — | — | — |
| list_c.test | COMPILE | 0.124073 | 0.310276 | 0.374583 | — | — | — |
| logical.test | COMPILE | 0.103797 | 0.247737 | 0.295908 | — | — | — |
| lower_bound.test | COMPILE | 0.127414 | 0.325751 | 0.378502 | — | — | — |
| map.test | COMPILE | 0.150935 | 0.405789 | 0.477343 | — | — | — |
| max_element.test | COMPILE | 0.124321 | 0.300076 | 0.362788 | — | — | — |
| min_max.test | COMPILE | 0.105680 | 0.270150 | 0.304280 | — | — | — |
| multiset.test | COMPILE | 0.131573 | 0.345960 | 0.402619 | — | — | — |
| next.test | COMPILE | 0.101246 | 0.251559 | 0.294170 | — | — | — |
| no_has_xxx.test | COMPILE | 0.108603 | 0.264640 | 0.321641 | — | — | — |
| numeric_ops.test | COMPILE | 0.112858 | 0.298027 | 0.351665 | — | — | — |
| pair_view.test | COMPILE | 0.135291 | 0.348320 | 0.403075 | — | — | — |
| partition.test | COMPILE | 0.148633 | 0.380163 | 0.445519 | — | — | — |
| pop_front.test | COMPILE | 0.122172 | 0.309677 | 0.357117 | — | — | — |
| push_back.test | COMPILE | 0.103080 | 0.259393 | 0.305674 | — | — | — |
| push_front.test | COMPILE | 0.123208 | 0.312924 | 0.370313 | — | — | — |
| quote.test | COMPILE | 0.103325 | 0.250375 | 0.300855 | — | — | — |
| range_c.test | COMPILE | 0.129383 | 0.332784 | 0.380416 | — | — | — |
| remove.test | COMPILE | 0.134700 | 0.349379 | 0.398785 | — | — | — |
| remove_if.test | COMPILE | 0.141037 | 0.359391 | 0.419567 | — | — | — |
| replace.test | COMPILE | 0.150695 | 0.383124 | 0.443145 | — | — | — |
| replace_if.test | COMPILE | 0.154186 | 0.399264 | 0.449092 | — | — | — |
| reverse.test | COMPILE | 0.145595 | 0.365354 | 0.421695 | — | — | — |
| same_as.test | COMPILE | 0.111157 | 0.267093 | 0.319776 | — | — | — |
| set.test | COMPILE | 0.192673 | 0.510289 | 0.632891 | — | — | — |
| set_c.test | COMPILE | 0.140235 | 0.350207 | 0.423089 | — | — | — |
| single_view.test | COMPILE | 0.129726 | 0.334336 | 0.373889 | — | — | — |
| size.test | COMPILE | 0.118406 | 0.298342 | 0.358242 | — | — | — |
| size_t.test | RUN | 0.107360 | 0.278220 | 0.337339 | 0.001139 | 0.001244 | 0.001138 |
| sizeof.test | COMPILE | 0.097713 | 0.243910 | 0.297467 | — | — | — |
| sort.test | COMPILE | 0.157708 | 0.402537 | 0.475582 | — | — | — |
| stable_partition.test | COMPILE | 0.150886 | 0.378146 | 0.445146 | — | — | — |
| transform.test | COMPILE | 0.157048 | 0.409249 | 0.486437 | — | — | — |
| transform_view.test | COMPILE | 0.128544 | 0.323363 | 0.389041 | — | — | — |
| unique.test | COMPILE | 0.132805 | 0.343915 | 0.404479 | — | — | — |
| unpack_args.test | COMPILE | 0.127160 | 0.319533 | 0.372811 | — | — | — |
| upper_bound.test | COMPILE | 0.129402 | 0.319571 | 0.377591 | — | — | — |
| vector.test | COMPILE | 0.148771 | 0.383986 | 0.450172 | — | — | — |
| vector_c.test | COMPILE | 0.129345 | 0.319850 | 0.381485 | — | — | — |
| zip_view.test | COMPILE | 0.179818 | 0.485761 | 0.554959 | — | — | — |
| string.test | RUN | 0.296881 | 0.957064 | 0.830445 | 0.000956 | 0.000984 | 0.000876 |
| issue_69.test | RUN | 0.013079 | 0.037492 | 0.036424 | 0.000383 | 0.000427 | 0.001149 |
| issue_84.test | RUN | 0.031439 | 0.070494 | 0.069934 | 0.000367 | 0.000421 | 0.000871 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.996× | 1.010×, 0.982× | 1.022× |
| clang | 1.090× | 1.084×, 1.096× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45617981312).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.000818s | 0.000791s | 0.000807s | byte equality observed |
| char.test | 10 | 0.000816s | 0.000822s | 0.000823s | byte equality observed |
| char_unsigned.test | 10 | 0.000819s | 0.000812s | 0.000838s | byte equality observed |
| for_each.test | 10 | 0.000834s | 0.000826s | 0.000823s | byte equality observed |
| int.test | 10 | 0.000833s | 0.000825s | 0.000798s | byte equality observed |
| integral_c.test | 10 | 0.000796s | 0.000835s | 0.000819s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.000818s | 0.000797s | 0.000799s | byte equality observed |
| issue_69.test | 10 | 0.000366s | 0.000374s | 0.000784s | byte equality observed |
| issue_84.test | 10 | 0.000373s | 0.000365s | 0.000765s | byte equality observed |
| size_t.test | 10 | 0.000825s | 0.000821s | 0.000816s | byte equality observed |
| string.test | 10 | 0.000836s | 0.000828s | 0.000789s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45617981312).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
