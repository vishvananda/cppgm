# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.291112 | 0.854713 | 0.811246 | — | — | — |
| largest_int.test | COMPILE | 0.100830 | 0.241268 | 0.299175 | — | — | — |
| msvc_is_class.test | COMPILE | 0.011356 | 0.029351 | 0.032657 | — | — | — |
| template_arity.test | COMPILE | 0.099954 | 0.240896 | 0.296203 | — | — | — |
| is_seq.test | COMPILE | 0.004044 | 0.010160 | 0.021870 | — | — | — |
| token_equal.test | COMPILE | 0.004044 | 0.010397 | 0.022212 | — | — | — |
| advance.test | COMPILE | 0.109891 | 0.264880 | 0.318649 | — | — | — |
| always.test | COMPILE | 0.110836 | 0.271596 | 0.331209 | — | — | — |
| apply.test | COMPILE | 0.114836 | 0.283962 | 0.347620 | — | — | — |
| apply_wrap.test | COMPILE | 0.101033 | 0.242445 | 0.297302 | — | — | — |
| arithmetic.test | COMPILE | 0.110639 | 0.274461 | 0.334702 | — | — | — |
| as_sequence.test | COMPILE | 0.113496 | 0.294228 | 0.353060 | — | — | — |
| assert.test | COMPILE | 0.027090 | 0.055477 | 0.065668 | — | — | — |
| at.test | COMPILE | 0.116637 | 0.297627 | 0.357125 | — | — | — |
| back.test | COMPILE | 0.111714 | 0.282086 | 0.338868 | — | — | — |
| bind.test | COMPILE | 0.109356 | 0.271485 | 0.325574 | — | — | — |
| bitwise.test | COMPILE | 0.107478 | 0.274211 | 0.333413 | — | — | — |
| bool.test | RUN | 0.100571 | 0.245834 | 0.303974 | 0.001180 | 0.001307 | 0.001284 |
| comparison.test | COMPILE | 0.106950 | 0.276110 | 0.329689 | — | — | — |
| contains.test | COMPILE | 0.130685 | 0.332385 | 0.389662 | — | — | — |
| copy.test | COMPILE | 0.158048 | 0.402294 | 0.478490 | — | — | — |
| copy_if.test | COMPILE | 0.131412 | 0.358063 | 0.428385 | — | — | — |
| count.test | COMPILE | 0.137120 | 0.324680 | 0.410736 | — | — | — |
| count_if.test | COMPILE | 0.141204 | 0.343558 | 0.414349 | — | — | — |
| deque.test | COMPILE | 0.129952 | 0.337537 | 0.399072 | — | — | — |
| distance.test | COMPILE | 0.121710 | 0.302153 | 0.370107 | — | — | — |
| empty.test | COMPILE | 0.109961 | 0.273105 | 0.326448 | — | — | — |
| equal.test | COMPILE | 0.121081 | 0.314738 | 0.368677 | — | — | — |
| erase.test | COMPILE | 0.146211 | 0.368140 | 0.435649 | — | — | — |
| erase_range.test | COMPILE | 0.135315 | 0.351867 | 0.419146 | — | — | — |
| eval_if.test | COMPILE | 0.101514 | 0.250253 | 0.303185 | — | — | — |
| filter_view.test | COMPILE | 0.141245 | 0.348898 | 0.404631 | — | — | — |
| find.test | COMPILE | 0.136648 | 0.333461 | 0.396104 | — | — | — |
| find_if.test | COMPILE | 0.139775 | 0.348708 | 0.408194 | — | — | — |
| fold.test | COMPILE | 0.144253 | 0.358366 | 0.438866 | — | — | — |
| for_each.test | RUN | 0.207201 | 0.522905 | 0.665171 | 0.001146 | 0.001257 | 0.001292 |
| front.test | COMPILE | 0.114340 | 0.284170 | 0.337313 | — | — | — |
| get_tag_def.test | COMPILE | 0.101872 | 0.242895 | 0.297607 | — | — | — |
| has_xxx.test | COMPILE | 0.108309 | 0.263247 | 0.336182 | — | — | — |
| identity.test | COMPILE | 0.111395 | 0.277286 | 0.326198 | — | — | — |
| if.test | COMPILE | 0.100619 | 0.239966 | 0.291610 | — | — | — |
| index_of.test | COMPILE | 0.127143 | 0.316274 | 0.377657 | — | — | — |
| inherit.test | COMPILE | 0.101039 | 0.248507 | 0.298249 | — | — | — |
| insert.test | COMPILE | 0.150141 | 0.380096 | 0.452223 | — | — | — |
| insert_range.test | COMPILE | 0.202131 | 0.505681 | 0.647190 | — | — | — |
| int.test | RUN | 0.105032 | 0.275020 | 0.331605 | 0.001425 | 0.001230 | 0.001040 |
| char.test | RUN | 0.109006 | 0.279351 | 0.319223 | 0.001239 | 0.001156 | 0.001099 |
| char_unsigned.test | RUN | 0.105029 | 0.273472 | 0.323764 | 0.001299 | 0.001319 | 0.001322 |
| integral_c.test | RUN | 0.119897 | 0.357502 | 0.393483 | 0.001005 | 0.001394 | 0.001355 |
| integral_c_unsigned.test | RUN | 0.120929 | 0.349504 | 0.402991 | 0.001227 | 0.001277 | 0.001275 |
| is_placeholder.test | COMPILE | 0.103488 | 0.245985 | 0.303060 | — | — | — |
| is_sequence.test | COMPILE | 0.122756 | 0.304129 | 0.356443 | — | — | — |
| iterator_tags.test | COMPILE | 0.103396 | 0.257282 | 0.299988 | — | — | — |
| joint_view.test | COMPILE | 0.139202 | 0.350940 | 0.406700 | — | — | — |
| lambda.test | COMPILE | 0.128331 | 0.317462 | 0.378425 | — | — | — |
| lambda_args.test | COMPILE | 0.121194 | 0.298761 | 0.386255 | — | — | — |
| list.test | COMPILE | 0.126450 | 0.316675 | 0.363647 | — | — | — |
| list_c.test | COMPILE | 0.121506 | 0.313713 | 0.376677 | — | — | — |
| logical.test | COMPILE | 0.104027 | 0.251072 | 0.299053 | — | — | — |
| lower_bound.test | COMPILE | 0.130516 | 0.317876 | 0.384569 | — | — | — |
| map.test | COMPILE | 0.152651 | 0.397796 | 0.475839 | — | — | — |
| max_element.test | COMPILE | 0.124751 | 0.306838 | 0.362015 | — | — | — |
| min_max.test | COMPILE | 0.103860 | 0.262844 | 0.308628 | — | — | — |
| multiset.test | COMPILE | 0.133573 | 0.342431 | 0.401392 | — | — | — |
| next.test | COMPILE | 0.099463 | 0.246410 | 0.295654 | — | — | — |
| no_has_xxx.test | COMPILE | 0.109335 | 0.262525 | 0.328299 | — | — | — |
| numeric_ops.test | COMPILE | 0.118896 | 0.304006 | 0.350222 | — | — | — |
| pair_view.test | COMPILE | 0.134320 | 0.342153 | 0.409996 | — | — | — |
| partition.test | COMPILE | 0.149791 | 0.374477 | 0.442561 | — | — | — |
| pop_front.test | COMPILE | 0.125596 | 0.303076 | 0.360729 | — | — | — |
| push_back.test | COMPILE | 0.101073 | 0.255881 | 0.307502 | — | — | — |
| push_front.test | COMPILE | 0.121817 | 0.310108 | 0.373111 | — | — | — |
| quote.test | COMPILE | 0.098582 | 0.245039 | 0.302906 | — | — | — |
| range_c.test | COMPILE | 0.125827 | 0.329357 | 0.383394 | — | — | — |
| remove.test | COMPILE | 0.133627 | 0.340748 | 0.401594 | — | — | — |
| remove_if.test | COMPILE | 0.139253 | 0.357141 | 0.416581 | — | — | — |
| replace.test | COMPILE | 0.145357 | 0.388265 | 0.451064 | — | — | — |
| replace_if.test | COMPILE | 0.151430 | 0.393835 | 0.462140 | — | — | — |
| reverse.test | COMPILE | 0.141718 | 0.363938 | 0.433530 | — | — | — |
| same_as.test | COMPILE | 0.110123 | 0.264035 | 0.325487 | — | — | — |
| set.test | COMPILE | 0.187669 | 0.505728 | 0.652145 | — | — | — |
| set_c.test | COMPILE | 0.141593 | 0.349366 | 0.421224 | — | — | — |
| single_view.test | COMPILE | 0.128838 | 0.322654 | 0.377810 | — | — | — |
| size.test | COMPILE | 0.122115 | 0.301325 | 0.359448 | — | — | — |
| size_t.test | RUN | 0.106086 | 0.275215 | 0.333551 | 0.001241 | 0.001235 | 0.001444 |
| sizeof.test | COMPILE | 0.100194 | 0.241529 | 0.299193 | — | — | — |
| sort.test | COMPILE | 0.158856 | 0.396995 | 0.482915 | — | — | — |
| stable_partition.test | COMPILE | 0.152928 | 0.377626 | 0.451268 | — | — | — |
| transform.test | COMPILE | 0.164634 | 0.406780 | 0.485702 | — | — | — |
| transform_view.test | COMPILE | 0.132790 | 0.331041 | 0.386076 | — | — | — |
| unique.test | COMPILE | 0.141051 | 0.338749 | 0.403051 | — | — | — |
| unpack_args.test | COMPILE | 0.126707 | 0.319962 | 0.377472 | — | — | — |
| upper_bound.test | COMPILE | 0.132714 | 0.317141 | 0.384310 | — | — | — |
| vector.test | COMPILE | 0.150414 | 0.383584 | 0.457540 | — | — | — |
| vector_c.test | COMPILE | 0.133639 | 0.320441 | 0.390399 | — | — | — |
| zip_view.test | COMPILE | 0.181253 | 0.479910 | 0.566013 | — | — | — |
| string.test | RUN | 0.302650 | 0.959797 | 0.845903 | 0.000957 | 0.000964 | 0.000877 |
| issue_69.test | RUN | 0.012920 | 0.035979 | 0.038563 | 0.000392 | 0.000479 | 0.001101 |
| issue_84.test | RUN | 0.027729 | 0.072695 | 0.069195 | 0.000401 | 0.000371 | 0.000944 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.999× | 1.004×, 0.993× | 1.009× |
| clang | 1.125× | 1.121×, 1.130× | 1.009× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45651777895).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.000809s | 0.000800s | 0.000824s | byte equality observed |
| char.test | 10 | 0.000790s | 0.000798s | 0.000785s | byte equality observed |
| char_unsigned.test | 10 | 0.000789s | 0.000800s | 0.000779s | byte equality observed |
| for_each.test | 10 | 0.000826s | 0.000815s | 0.000801s | byte equality observed |
| int.test | 10 | 0.000786s | 0.000799s | 0.000806s | byte equality observed |
| integral_c.test | 10 | 0.000797s | 0.000781s | 0.000820s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.000784s | 0.000780s | 0.000811s | byte equality observed |
| issue_69.test | 10 | 0.000365s | 0.000361s | 0.000801s | byte equality observed |
| issue_84.test | 10 | 0.000362s | 0.000355s | 0.000797s | byte equality observed |
| size_t.test | 10 | 0.000795s | 0.000802s | 0.000822s | byte equality observed |
| string.test | 10 | 0.000808s | 0.000813s | 0.000845s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45651777895).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
