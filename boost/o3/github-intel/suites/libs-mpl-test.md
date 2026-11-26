# libs/mpl/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| increased_arity.test | COMPILE | 0.297721 | 0.852234 | 0.801437 | — | — | — |
| largest_int.test | COMPILE | 0.095666 | 0.233611 | 0.302051 | — | — | — |
| msvc_is_class.test | COMPILE | 0.011664 | 0.029188 | 0.033425 | — | — | — |
| template_arity.test | COMPILE | 0.098763 | 0.232408 | 0.297829 | — | — | — |
| is_seq.test | COMPILE | 0.004442 | 0.010144 | 0.021788 | — | — | — |
| token_equal.test | COMPILE | 0.004564 | 0.010922 | 0.021074 | — | — | — |
| advance.test | COMPILE | 0.108032 | 0.265535 | 0.310724 | — | — | — |
| always.test | COMPILE | 0.107405 | 0.265331 | 0.330664 | — | — | — |
| apply.test | COMPILE | 0.116755 | 0.286398 | 0.344804 | — | — | — |
| apply_wrap.test | COMPILE | 0.102923 | 0.243052 | 0.294431 | — | — | — |
| arithmetic.test | COMPILE | 0.110673 | 0.270177 | 0.331969 | — | — | — |
| as_sequence.test | COMPILE | 0.120626 | 0.295157 | 0.350935 | — | — | — |
| assert.test | COMPILE | 0.027590 | 0.051794 | 0.064669 | — | — | — |
| at.test | COMPILE | 0.119617 | 0.293195 | 0.350250 | — | — | — |
| back.test | COMPILE | 0.113186 | 0.280228 | 0.333981 | — | — | — |
| bind.test | COMPILE | 0.110375 | 0.266668 | 0.329040 | — | — | — |
| bitwise.test | COMPILE | 0.112029 | 0.273794 | 0.335736 | — | — | — |
| bool.test | RUN | 0.102045 | 0.245228 | 0.302123 | 0.001192 | 0.001266 | 0.001099 |
| comparison.test | COMPILE | 0.111791 | 0.274163 | 0.327713 | — | — | — |
| contains.test | COMPILE | 0.132844 | 0.328960 | 0.386775 | — | — | — |
| copy.test | COMPILE | 0.167642 | 0.394956 | 0.476641 | — | — | — |
| copy_if.test | COMPILE | 0.150398 | 0.355907 | 0.422446 | — | — | — |
| count.test | COMPILE | 0.137581 | 0.329045 | 0.399627 | — | — | — |
| count_if.test | COMPILE | 0.145918 | 0.338745 | 0.409845 | — | — | — |
| deque.test | COMPILE | 0.137151 | 0.333490 | 0.400685 | — | — | — |
| distance.test | COMPILE | 0.126210 | 0.302429 | 0.367979 | — | — | — |
| empty.test | COMPILE | 0.109668 | 0.265462 | 0.321388 | — | — | — |
| equal.test | COMPILE | 0.128493 | 0.320506 | 0.368278 | — | — | — |
| erase.test | COMPILE | 0.148071 | 0.365374 | 0.434985 | — | — | — |
| erase_range.test | COMPILE | 0.138560 | 0.345266 | 0.412446 | — | — | — |
| eval_if.test | COMPILE | 0.101166 | 0.248984 | 0.295980 | — | — | — |
| filter_view.test | COMPILE | 0.136065 | 0.335995 | 0.404569 | — | — | — |
| find.test | COMPILE | 0.133315 | 0.329075 | 0.392961 | — | — | — |
| find_if.test | COMPILE | 0.136618 | 0.348063 | 0.401443 | — | — | — |
| fold.test | COMPILE | 0.139957 | 0.356438 | 0.433604 | — | — | — |
| for_each.test | RUN | 0.208782 | 0.510140 | 0.664873 | 0.001221 | 0.001237 | 0.001142 |
| front.test | COMPILE | 0.109522 | 0.282175 | 0.336228 | — | — | — |
| get_tag_def.test | COMPILE | 0.100413 | 0.241258 | 0.290167 | — | — | — |
| has_xxx.test | COMPILE | 0.110383 | 0.261941 | 0.329654 | — | — | — |
| identity.test | COMPILE | 0.113011 | 0.274367 | 0.322998 | — | — | — |
| if.test | COMPILE | 0.101473 | 0.244443 | 0.293816 | — | — | — |
| index_of.test | COMPILE | 0.132765 | 0.317338 | 0.368712 | — | — | — |
| inherit.test | COMPILE | 0.109653 | 0.253468 | 0.302923 | — | — | — |
| insert.test | COMPILE | 0.156045 | 0.371968 | 0.454355 | — | — | — |
| insert_range.test | COMPILE | 0.205624 | 0.502381 | 0.628701 | — | — | — |
| int.test | RUN | 0.108825 | 0.270446 | 0.328407 | 0.001372 | 0.001395 | 0.001150 |
| char.test | RUN | 0.110678 | 0.271485 | 0.313568 | 0.001766 | 0.001130 | 0.001059 |
| char_unsigned.test | RUN | 0.111956 | 0.270902 | 0.325417 | 0.001279 | 0.001205 | 0.001172 |
| integral_c.test | RUN | 0.125156 | 0.353431 | 0.402750 | 0.001188 | 0.001331 | 0.001132 |
| integral_c_unsigned.test | RUN | 0.131367 | 0.347025 | 0.391343 | 0.001159 | 0.001218 | 0.001155 |
| is_placeholder.test | COMPILE | 0.108425 | 0.243898 | 0.295256 | — | — | — |
| is_sequence.test | COMPILE | 0.122427 | 0.297478 | 0.350805 | — | — | — |
| iterator_tags.test | COMPILE | 0.101033 | 0.255719 | 0.296621 | — | — | — |
| joint_view.test | COMPILE | 0.133954 | 0.341816 | 0.403200 | — | — | — |
| lambda.test | COMPILE | 0.126803 | 0.313285 | 0.371221 | — | — | — |
| lambda_args.test | COMPILE | 0.122655 | 0.291610 | 0.374543 | — | — | — |
| list.test | COMPILE | 0.123918 | 0.310987 | 0.359842 | — | — | — |
| list_c.test | COMPILE | 0.124875 | 0.302505 | 0.380631 | — | — | — |
| logical.test | COMPILE | 0.103470 | 0.243476 | 0.293507 | — | — | — |
| lower_bound.test | COMPILE | 0.131412 | 0.320581 | 0.381094 | — | — | — |
| map.test | COMPILE | 0.157499 | 0.393444 | 0.473774 | — | — | — |
| max_element.test | COMPILE | 0.123670 | 0.300340 | 0.364049 | — | — | — |
| min_max.test | COMPILE | 0.111471 | 0.250723 | 0.304214 | — | — | — |
| multiset.test | COMPILE | 0.133290 | 0.341511 | 0.397716 | — | — | — |
| next.test | COMPILE | 0.102450 | 0.246118 | 0.293053 | — | — | — |
| no_has_xxx.test | COMPILE | 0.113624 | 0.263135 | 0.325516 | — | — | — |
| numeric_ops.test | COMPILE | 0.117832 | 0.294995 | 0.350391 | — | — | — |
| pair_view.test | COMPILE | 0.144653 | 0.341878 | 0.406130 | — | — | — |
| partition.test | COMPILE | 0.147722 | 0.373614 | 0.447325 | — | — | — |
| pop_front.test | COMPILE | 0.128297 | 0.303580 | 0.363493 | — | — | — |
| push_back.test | COMPILE | 0.108406 | 0.254769 | 0.307245 | — | — | — |
| push_front.test | COMPILE | 0.128034 | 0.305928 | 0.366553 | — | — | — |
| quote.test | COMPILE | 0.104036 | 0.244971 | 0.303232 | — | — | — |
| range_c.test | COMPILE | 0.131447 | 0.322815 | 0.378671 | — | — | — |
| remove.test | COMPILE | 0.136983 | 0.343335 | 0.399513 | — | — | — |
| remove_if.test | COMPILE | 0.143749 | 0.349006 | 0.420610 | — | — | — |
| replace.test | COMPILE | 0.152026 | 0.382446 | 0.446771 | — | — | — |
| replace_if.test | COMPILE | 0.151164 | 0.388088 | 0.452412 | — | — | — |
| reverse.test | COMPILE | 0.146844 | 0.361735 | 0.423245 | — | — | — |
| same_as.test | COMPILE | 0.112928 | 0.265279 | 0.313904 | — | — | — |
| set.test | COMPILE | 0.196570 | 0.501053 | 0.630938 | — | — | — |
| set_c.test | COMPILE | 0.144616 | 0.351375 | 0.418355 | — | — | — |
| single_view.test | COMPILE | 0.132846 | 0.318359 | 0.380686 | — | — | — |
| size.test | COMPILE | 0.124504 | 0.292679 | 0.357885 | — | — | — |
| size_t.test | RUN | 0.110752 | 0.274671 | 0.324173 | 0.001115 | 0.001379 | 0.001286 |
| sizeof.test | COMPILE | 0.101177 | 0.236044 | 0.290060 | — | — | — |
| sort.test | COMPILE | 0.156300 | 0.397431 | 0.473610 | — | — | — |
| stable_partition.test | COMPILE | 0.150354 | 0.378979 | 0.444484 | — | — | — |
| transform.test | COMPILE | 0.161028 | 0.402165 | 0.480453 | — | — | — |
| transform_view.test | COMPILE | 0.129962 | 0.321325 | 0.382348 | — | — | — |
| unique.test | COMPILE | 0.137872 | 0.341619 | 0.400364 | — | — | — |
| unpack_args.test | COMPILE | 0.125206 | 0.315836 | 0.367526 | — | — | — |
| upper_bound.test | COMPILE | 0.131638 | 0.322877 | 0.373942 | — | — | — |
| vector.test | COMPILE | 0.150059 | 0.382642 | 0.447884 | — | — | — |
| vector_c.test | COMPILE | 0.129189 | 0.316122 | 0.392798 | — | — | — |
| zip_view.test | COMPILE | 0.187118 | 0.481463 | 0.543519 | — | — | — |
| string.test | RUN | 0.307798 | 0.940677 | 0.861656 | 0.000994 | 0.000911 | 0.000910 |
| issue_69.test | RUN | 0.013504 | 0.034955 | 0.038773 | 0.000458 | 0.000476 | 0.001286 |
| issue_84.test | RUN | 0.024786 | 0.071349 | 0.072316 | 0.000472 | 0.000371 | 0.000848 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.996× | 0.990×, 1.003× | 1.007× |
| clang | 1.090× | 1.064×, 1.115× | 0.992× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45710374989).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| bool.test | 10 | 0.000801s | 0.000809s | 0.000804s | byte equality observed |
| char.test | 10 | 0.000835s | 0.000825s | 0.000805s | byte equality observed |
| char_unsigned.test | 10 | 0.000824s | 0.000842s | 0.000809s | byte equality observed |
| for_each.test | 10 | 0.000827s | 0.000819s | 0.000799s | byte equality observed |
| int.test | 10 | 0.000830s | 0.000811s | 0.000799s | byte equality observed |
| integral_c.test | 10 | 0.000821s | 0.000802s | 0.000811s | byte equality observed |
| integral_c_unsigned.test | 10 | 0.000821s | 0.000799s | 0.000811s | byte equality observed |
| issue_69.test | 10 | 0.000361s | 0.000366s | 0.000812s | byte equality observed |
| issue_84.test | 10 | 0.000359s | 0.000372s | 0.000787s | byte equality observed |
| size_t.test | 10 | 0.000790s | 0.000783s | 0.000793s | byte equality observed |
| string.test | 10 | 0.000819s | 0.000824s | 0.000831s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45710374989).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
