# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.350694 | 1.008052 | 1.040712 | — | — | — |
| largest_int.test | COMPILE | 0.121878 | 0.280620 | 0.341218 | — | — | — |
| msvc_is_class.test | COMPILE | 0.015904 | 0.036535 | 0.042452 | — | — | — |
| template_arity.test | COMPILE | 0.120638 | 0.271466 | 0.346131 | — | — | — |
| is_seq.test | COMPILE | 0.005071 | 0.013518 | 0.027880 | — | — | — |
| token_equal.test | COMPILE | 0.005378 | 0.013828 | 0.028152 | — | — | — |
| advance.test | COMPILE | 0.134699 | 0.314918 | 0.419704 | — | — | — |
| always.test | COMPILE | 0.136341 | 0.304509 | 0.408635 | — | — | — |
| apply.test | COMPILE | 0.147275 | 0.339350 | 0.452632 | — | — | — |
| apply_wrap.test | COMPILE | 0.127322 | 0.285847 | 0.371330 | — | — | — |
| arithmetic.test | COMPILE | 0.134378 | 0.330539 | 0.430926 | — | — | — |
| as_sequence.test | COMPILE | 0.146995 | 0.353623 | 0.461569 | — | — | — |
| assert.test | COMPILE | 0.036430 | 0.069351 | 0.086361 | — | — | — |
| at.test | COMPILE | 0.143751 | 0.347252 | 0.456545 | — | — | — |
| back.test | COMPILE | 0.139064 | 0.330977 | 0.437323 | — | — | — |
| bind.test | COMPILE | 0.136211 | 0.317752 | 0.416466 | — | — | — |
| bitwise.test | COMPILE | 0.135299 | 0.325505 | 0.437021 | — | — | — |
| bool.test | RUN | 0.125594 | 0.278407 | 0.400010 | 0.001384 | 0.001543 | 0.001573 |
| comparison.test | COMPILE | 0.132448 | 0.319595 | 0.430573 | — | — | — |
| contains.test | COMPILE | 0.163203 | 0.397036 | 0.497929 | — | — | — |
| copy.test | COMPILE | 0.196802 | 0.465459 | 0.620054 | — | — | — |
| copy_if.test | COMPILE | 0.171217 | 0.418217 | 0.530090 | — | — | — |
| count.test | COMPILE | 0.164173 | 0.387412 | 0.508918 | — | — | — |
| count_if.test | COMPILE | 0.174193 | 0.396240 | 0.540047 | — | — | — |
| deque.test | COMPILE | 0.167239 | 0.398050 | 0.509066 | — | — | — |
| distance.test | COMPILE | 0.152054 | 0.360955 | 0.467740 | — | — | — |
| empty.test | COMPILE | 0.138295 | 0.319981 | 0.405738 | — | — | — |
| equal.test | COMPILE | 0.159708 | 0.360124 | 0.483992 | — | — | — |
| erase.test | COMPILE | 0.179177 | 0.431415 | 0.568874 | — | — | — |
| erase_range.test | COMPILE | 0.171672 | 0.413649 | 0.537112 | — | — | — |
| eval_if.test | COMPILE | 0.128374 | 0.295080 | 0.373742 | — | — | — |
| filter_view.test | COMPILE | 0.167371 | 0.400792 | 0.521106 | — | — | — |
| find.test | COMPILE | 0.166589 | 0.394258 | 0.508592 | — | — | — |
| find_if.test | COMPILE | 0.171109 | 0.397947 | 0.523309 | — | — | — |
| fold.test | COMPILE | 0.178820 | 0.424154 | 0.551026 | — | — | — |
| for_each.test | RUN | 0.255746 | 0.599752 | 0.859191 | 0.001444 | 0.001692 | 0.001756 |
| front.test | COMPILE | 0.139578 | 0.339601 | 0.448200 | — | — | — |
| get_tag_def.test | COMPILE | 0.124181 | 0.283174 | 0.374241 | — | — | — |
| has_xxx.test | COMPILE | 0.140737 | 0.313338 | 0.421569 | — | — | — |
| identity.test | COMPILE | 0.139682 | 0.318797 | 0.426588 | — | — | — |
| if.test | COMPILE | 0.122440 | 0.280171 | 0.354886 | — | — | — |
| index_of.test | COMPILE | 0.153444 | 0.369340 | 0.483779 | — | — | — |
| inherit.test | COMPILE | 0.131405 | 0.293971 | 0.381621 | — | — | — |
| insert.test | COMPILE | 0.184433 | 0.416295 | 0.587983 | — | — | — |
| insert_range.test | COMPILE | 0.247210 | 0.586790 | 0.819539 | — | — | — |
| int.test | RUN | 0.134266 | 0.317356 | 0.434190 | 0.001652 | 0.001455 | 0.001419 |
| char.test | RUN | 0.132000 | 0.328638 | 0.415551 | 0.001518 | 0.001687 | 0.001372 |
| char_unsigned.test | RUN | 0.134603 | 0.326383 | 0.403300 | 0.001285 | 0.001870 | 0.001642 |
| integral_c.test | RUN | 0.149612 | 0.410496 | 0.483956 | 0.001665 | 0.001552 | 0.001600 |
| integral_c_unsigned.test | RUN | 0.145209 | 0.413192 | 0.522094 | 0.001376 | 0.001735 | 0.001588 |
| is_placeholder.test | COMPILE | 0.126294 | 0.282632 | 0.397006 | — | — | — |
| is_sequence.test | COMPILE | 0.151560 | 0.353800 | 0.437318 | — | — | — |
| iterator_tags.test | COMPILE | 0.130876 | 0.306951 | 0.368889 | — | — | — |
| joint_view.test | COMPILE | 0.166535 | 0.399247 | 0.524583 | — | — | — |
| lambda.test | COMPILE | 0.147902 | 0.377871 | 0.480834 | — | — | — |
| lambda_args.test | COMPILE | 0.151714 | 0.340365 | 0.496670 | — | — | — |
| list.test | COMPILE | 0.153559 | 0.375943 | 0.486475 | — | — | — |
| list_c.test | COMPILE | 0.155371 | 0.362183 | 0.491264 | — | — | — |
| logical.test | COMPILE | 0.123369 | 0.281435 | 0.375231 | — | — | — |
| lower_bound.test | COMPILE | 0.156356 | 0.385653 | 0.495835 | — | — | — |
| map.test | COMPILE | 0.189748 | 0.465730 | 0.612278 | — | — | — |
| max_element.test | COMPILE | 0.147806 | 0.363877 | 0.477298 | — | — | — |
| min_max.test | COMPILE | 0.130771 | 0.299745 | 0.394852 | — | — | — |
| multiset.test | COMPILE | 0.162332 | 0.405223 | 0.519872 | — | — | — |
| next.test | COMPILE | 0.124663 | 0.294240 | 0.379089 | — | — | — |
| no_has_xxx.test | COMPILE | 0.133165 | 0.317637 | 0.407745 | — | — | — |
| numeric_ops.test | COMPILE | 0.147323 | 0.348542 | 0.451795 | — | — | — |
| pair_view.test | COMPILE | 0.169922 | 0.407041 | 0.507518 | — | — | — |
| partition.test | COMPILE | 0.184341 | 0.437352 | 0.584241 | — | — | — |
| pop_front.test | COMPILE | 0.153250 | 0.362536 | 0.471716 | — | — | — |
| push_back.test | COMPILE | 0.130545 | 0.301382 | 0.390968 | — | — | — |
| push_front.test | COMPILE | 0.151432 | 0.361081 | 0.463792 | — | — | — |
| quote.test | COMPILE | 0.130012 | 0.284012 | 0.387666 | — | — | — |
| range_c.test | COMPILE | 0.160858 | 0.383900 | 0.484937 | — | — | — |
| remove.test | COMPILE | 0.169595 | 0.406097 | 0.514303 | — | — | — |
| remove_if.test | COMPILE | 0.173001 | 0.417341 | 0.525322 | — | — | — |
| replace.test | COMPILE | 0.188901 | 0.435156 | 0.575852 | — | — | — |
| replace_if.test | COMPILE | 0.187593 | 0.459696 | 0.587177 | — | — | — |
| reverse.test | COMPILE | 0.178352 | 0.423684 | 0.547752 | — | — | — |
| same_as.test | COMPILE | 0.138691 | 0.315852 | 0.421102 | — | — | — |
| set.test | COMPILE | 0.239209 | 0.594397 | 0.810202 | — | — | — |
| set_c.test | COMPILE | 0.173862 | 0.420016 | 0.553220 | — | — | — |
| single_view.test | COMPILE | 0.155480 | 0.375988 | 0.480934 | — | — | — |
| size.test | COMPILE | 0.146978 | 0.352865 | 0.462160 | — | — | — |
| size_t.test | RUN | 0.129645 | 0.327223 | 0.412182 | 0.001537 | 0.001831 | 0.001754 |
| sizeof.test | COMPILE | 0.125796 | 0.278240 | 0.362484 | — | — | — |
| sort.test | COMPILE | 0.196147 | 0.466597 | 0.599891 | — | — | — |
| stable_partition.test | COMPILE | 0.189397 | 0.443565 | 0.578148 | — | — | — |
| transform.test | COMPILE | 0.194420 | 0.469989 | 0.612481 | — | — | — |
| transform_view.test | COMPILE | 0.160073 | 0.373650 | 0.491628 | — | — | — |
| unique.test | COMPILE | 0.169013 | 0.405002 | 0.532018 | — | — | — |
| unpack_args.test | COMPILE | 0.160708 | 0.375225 | 0.489535 | — | — | — |
| upper_bound.test | COMPILE | 0.159677 | 0.372319 | 0.489891 | — | — | — |
| vector.test | COMPILE | 0.184108 | 0.442060 | 0.587566 | — | — | — |
| vector_c.test | COMPILE | 0.160655 | 0.375404 | 0.493658 | — | — | — |
| zip_view.test | COMPILE | 0.230535 | 0.568016 | 0.709668 | — | — | — |
| string.test | RUN | 0.358398 | 1.091475 | 1.016609 | 0.001289 | 0.001276 | 0.001196 |
| issue_69.test | RUN | 0.017137 | 0.044315 | 0.051543 | 0.000616 | 0.000617 | 0.001544 |
| issue_84.test | RUN | 0.032312 | 0.090831 | 0.093630 | 0.000508 | 0.000521 | 0.001211 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.030× | 1.051×, 1.010× | 1.014× |
| clang | 1.098× | 1.085×, 1.111× | 1.030× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44815881069).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.001008s | 0.001002s | 0.000998s | byte equality observed |
| char.test | 10 | 0.000974s | 0.001024s | 0.000967s | byte equality observed |
| char_unsigned.test | 10 | 0.001015s | 0.000961s | 0.000987s | byte equality observed |
| for_each.test | 10 | 0.000999s | 0.001031s | 0.000994s | byte equality observed |
| int.test | 10 | 0.000986s | 0.001018s | 0.000997s | byte equality observed |
| integral_c.test | 10 | 0.000970s | 0.000986s | 0.000963s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.000991s | 0.000998s | 0.000968s | byte equality observed |
| issue_69.test | 10 | 0.000459s | 0.000459s | 0.000994s | byte equality observed |
| issue_84.test | 10 | 0.000461s | 0.000472s | 0.000961s | byte equality observed |
| size_t.test | 10 | 0.000985s | 0.001019s | 0.000981s | byte equality observed |
| string.test | 10 | 0.000978s | 0.001012s | 0.000985s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44815881069).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
