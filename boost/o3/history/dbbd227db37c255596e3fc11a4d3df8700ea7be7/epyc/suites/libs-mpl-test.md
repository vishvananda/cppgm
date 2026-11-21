# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.352605 | 1.011351 | 1.028361 | — | — | — |
| largest_int.test | COMPILE | 0.121063 | 0.272936 | 0.347408 | — | — | — |
| msvc_is_class.test | COMPILE | 0.015543 | 0.037743 | 0.041664 | — | — | — |
| template_arity.test | COMPILE | 0.121888 | 0.273709 | 0.351140 | — | — | — |
| is_seq.test | COMPILE | 0.005093 | 0.013623 | 0.027597 | — | — | — |
| token_equal.test | COMPILE | 0.005288 | 0.013594 | 0.026642 | — | — | — |
| advance.test | COMPILE | 0.135439 | 0.304272 | 0.414933 | — | — | — |
| always.test | COMPILE | 0.136397 | 0.326015 | 0.426678 | — | — | — |
| apply.test | COMPILE | 0.143530 | 0.344514 | 0.437438 | — | — | — |
| apply_wrap.test | COMPILE | 0.123968 | 0.292288 | 0.375238 | — | — | — |
| arithmetic.test | COMPILE | 0.135457 | 0.322366 | 0.399285 | — | — | — |
| as_sequence.test | COMPILE | 0.148794 | 0.359555 | 0.448550 | — | — | — |
| assert.test | COMPILE | 0.035136 | 0.069511 | 0.085283 | — | — | — |
| at.test | COMPILE | 0.147575 | 0.342052 | 0.446156 | — | — | — |
| back.test | COMPILE | 0.135913 | 0.332929 | 0.426668 | — | — | — |
| bind.test | COMPILE | 0.134851 | 0.321705 | 0.418957 | — | — | — |
| bitwise.test | COMPILE | 0.137003 | 0.327918 | 0.429362 | — | — | — |
| bool.test | RUN | 0.124328 | 0.283125 | 0.376053 | 0.001708 | 0.001654 | 0.001678 |
| comparison.test | COMPILE | 0.131871 | 0.318960 | 0.410642 | — | — | — |
| contains.test | COMPILE | 0.160173 | 0.395288 | 0.498012 | — | — | — |
| copy.test | COMPILE | 0.200149 | 0.461267 | 0.586481 | — | — | — |
| copy_if.test | COMPILE | 0.173214 | 0.411027 | 0.552484 | — | — | — |
| count.test | COMPILE | 0.167469 | 0.381064 | 0.527337 | — | — | — |
| count_if.test | COMPILE | 0.173893 | 0.412016 | 0.505020 | — | — | — |
| deque.test | COMPILE | 0.167238 | 0.394665 | 0.519591 | — | — | — |
| distance.test | COMPILE | 0.151760 | 0.355490 | 0.484118 | — | — | — |
| empty.test | COMPILE | 0.134154 | 0.313703 | 0.412037 | — | — | — |
| equal.test | COMPILE | 0.157720 | 0.376897 | 0.456918 | — | — | — |
| erase.test | COMPILE | 0.181044 | 0.433537 | 0.574983 | — | — | — |
| erase_range.test | COMPILE | 0.175983 | 0.403322 | 0.530628 | — | — | — |
| eval_if.test | COMPILE | 0.128396 | 0.305204 | 0.391112 | — | — | — |
| filter_view.test | COMPILE | 0.168392 | 0.412426 | 0.527805 | — | — | — |
| find.test | COMPILE | 0.171253 | 0.388462 | 0.511921 | — | — | — |
| find_if.test | COMPILE | 0.173094 | 0.414013 | 0.525155 | — | — | — |
| fold.test | COMPILE | 0.174623 | 0.415172 | 0.563709 | — | — | — |
| for_each.test | RUN | 0.258011 | 0.622294 | 0.861204 | 0.001666 | 0.001663 | 0.001546 |
| front.test | COMPILE | 0.137687 | 0.330090 | 0.433964 | — | — | — |
| get_tag_def.test | COMPILE | 0.125714 | 0.293778 | 0.389194 | — | — | — |
| has_xxx.test | COMPILE | 0.142822 | 0.326856 | 0.419776 | — | — | — |
| identity.test | COMPILE | 0.144670 | 0.322671 | 0.435538 | — | — | — |
| if.test | COMPILE | 0.124509 | 0.297962 | 0.396693 | — | — | — |
| index_of.test | COMPILE | 0.161921 | 0.377512 | 0.484194 | — | — | — |
| inherit.test | COMPILE | 0.130486 | 0.303850 | 0.395438 | — | — | — |
| insert.test | COMPILE | 0.181196 | 0.437262 | 0.572168 | — | — | — |
| insert_range.test | COMPILE | 0.250624 | 0.596816 | 0.820957 | — | — | — |
| int.test | RUN | 0.134109 | 0.322211 | 0.417756 | 0.001383 | 0.001704 | 0.001703 |
| char.test | RUN | 0.131621 | 0.328954 | 0.425545 | 0.001688 | 0.001534 | 0.001431 |
| char_unsigned.test | RUN | 0.133795 | 0.322626 | 0.409796 | 0.001488 | 0.001836 | 0.001702 |
| integral_c.test | RUN | 0.148207 | 0.407879 | 0.513575 | 0.001654 | 0.001684 | 0.001636 |
| integral_c_unsigned.test | RUN | 0.146375 | 0.410694 | 0.521888 | 0.001339 | 0.001614 | 0.001402 |
| is_placeholder.test | COMPILE | 0.126000 | 0.293286 | 0.366174 | — | — | — |
| is_sequence.test | COMPILE | 0.151686 | 0.354528 | 0.469211 | — | — | — |
| iterator_tags.test | COMPILE | 0.128622 | 0.300131 | 0.402885 | — | — | — |
| joint_view.test | COMPILE | 0.167271 | 0.402993 | 0.527048 | — | — | — |
| lambda.test | COMPILE | 0.156158 | 0.368011 | 0.496067 | — | — | — |
| lambda_args.test | COMPILE | 0.151866 | 0.352823 | 0.486740 | — | — | — |
| list.test | COMPILE | 0.151678 | 0.381420 | 0.489434 | — | — | — |
| list_c.test | COMPILE | 0.155256 | 0.368379 | 0.496525 | — | — | — |
| logical.test | COMPILE | 0.126952 | 0.292089 | 0.395422 | — | — | — |
| lower_bound.test | COMPILE | 0.166484 | 0.364978 | 0.480330 | — | — | — |
| map.test | COMPILE | 0.186798 | 0.474467 | 0.605030 | — | — | — |
| max_element.test | COMPILE | 0.153980 | 0.349949 | 0.466932 | — | — | — |
| min_max.test | COMPILE | 0.134321 | 0.307137 | 0.412742 | — | — | — |
| multiset.test | COMPILE | 0.169027 | 0.408095 | 0.509398 | — | — | — |
| next.test | COMPILE | 0.123610 | 0.290261 | 0.390507 | — | — | — |
| no_has_xxx.test | COMPILE | 0.132374 | 0.303777 | 0.422362 | — | — | — |
| numeric_ops.test | COMPILE | 0.145785 | 0.356471 | 0.468441 | — | — | — |
| pair_view.test | COMPILE | 0.176903 | 0.398638 | 0.511342 | — | — | — |
| partition.test | COMPILE | 0.189652 | 0.445964 | 0.573697 | — | — | — |
| pop_front.test | COMPILE | 0.150952 | 0.354301 | 0.458383 | — | — | — |
| push_back.test | COMPILE | 0.132146 | 0.313406 | 0.404715 | — | — | — |
| push_front.test | COMPILE | 0.151661 | 0.365390 | 0.471778 | — | — | — |
| quote.test | COMPILE | 0.129247 | 0.294047 | 0.391319 | — | — | — |
| range_c.test | COMPILE | 0.159874 | 0.387083 | 0.486306 | — | — | — |
| remove.test | COMPILE | 0.168254 | 0.397751 | 0.515806 | — | — | — |
| remove_if.test | COMPILE | 0.175479 | 0.423808 | 0.534117 | — | — | — |
| replace.test | COMPILE | 0.190089 | 0.446094 | 0.574339 | — | — | — |
| replace_if.test | COMPILE | 0.189591 | 0.460895 | 0.579033 | — | — | — |
| reverse.test | COMPILE | 0.183522 | 0.426412 | 0.547112 | — | — | — |
| same_as.test | COMPILE | 0.136581 | 0.326843 | 0.403904 | — | — | — |
| set.test | COMPILE | 0.238758 | 0.597437 | 0.838019 | — | — | — |
| set_c.test | COMPILE | 0.173339 | 0.417545 | 0.538464 | — | — | — |
| single_view.test | COMPILE | 0.162511 | 0.375799 | 0.486061 | — | — | — |
| size.test | COMPILE | 0.149690 | 0.359468 | 0.467199 | — | — | — |
| size_t.test | RUN | 0.133447 | 0.317135 | 0.434408 | 0.001578 | 0.001744 | 0.001632 |
| sizeof.test | COMPILE | 0.124511 | 0.279155 | 0.394126 | — | — | — |
| sort.test | COMPILE | 0.198798 | 0.471759 | 0.616493 | — | — | — |
| stable_partition.test | COMPILE | 0.184632 | 0.451165 | 0.581410 | — | — | — |
| transform.test | COMPILE | 0.197280 | 0.480045 | 0.609817 | — | — | — |
| transform_view.test | COMPILE | 0.160512 | 0.370952 | 0.498174 | — | — | — |
| unique.test | COMPILE | 0.168886 | 0.413441 | 0.522134 | — | — | — |
| unpack_args.test | COMPILE | 0.155543 | 0.382173 | 0.485479 | — | — | — |
| upper_bound.test | COMPILE | 0.160781 | 0.368770 | 0.488574 | — | — | — |
| vector.test | COMPILE | 0.185235 | 0.450332 | 0.583151 | — | — | — |
| vector_c.test | COMPILE | 0.164506 | 0.379890 | 0.487260 | — | — | — |
| zip_view.test | COMPILE | 0.228482 | 0.552462 | 0.682233 | — | — | — |
| string.test | RUN | 0.359654 | 1.097663 | 1.012740 | 0.001298 | 0.001296 | 0.001224 |
| issue_69.test | RUN | 0.017161 | 0.045276 | 0.051184 | 0.000516 | 0.000631 | 0.001681 |
| issue_84.test | RUN | 0.039911 | 0.084534 | 0.089918 | 0.000517 | 0.000539 | 0.001251 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.004× | 1.006×, 1.003× | 0.988× |
| clang | 1.096× | 1.101×, 1.092× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44922642903).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.001013s | 0.001027s | 0.001006s | byte equality observed |
| char.test | 10 | 0.001039s | 0.001022s | 0.001032s | byte equality observed |
| char_unsigned.test | 10 | 0.001033s | 0.001012s | 0.001051s | byte equality observed |
| for_each.test | 10 | 0.001045s | 0.001011s | 0.001049s | byte equality observed |
| int.test | 10 | 0.001007s | 0.001021s | 0.001015s | byte equality observed |
| integral_c.test | 10 | 0.000998s | 0.001001s | 0.001034s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.001015s | 0.001018s | 0.001025s | byte equality observed |
| issue_69.test | 10 | 0.000460s | 0.000470s | 0.000984s | byte equality observed |
| issue_84.test | 10 | 0.000473s | 0.000462s | 0.001011s | byte equality observed |
| size_t.test | 10 | 0.001049s | 0.000997s | 0.001021s | byte equality observed |
| string.test | 10 | 0.001024s | 0.001018s | 0.001000s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44922642903).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
