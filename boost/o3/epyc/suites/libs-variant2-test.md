# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.112852 | 0.243960 | 0.376144 | 0.001537 | 0.000786 | 0.001662 |
| variant_size.test | RUN | 0.189044 | 0.596016 | 0.698131 | 0.001736 | 0.001849 | 0.001630 |
| variant_alternative.test | RUN | 0.249256 | 1.881410 | 1.190030 | 0.001708 | 0.001908 | 0.001691 |
| variant_holds_alternative.test | RUN | 0.182639 | 0.456676 | 0.678339 | 0.001494 | 0.001845 | 0.001333 |
| variant_holds_alternative_cx.test | COMPILE | 0.117612 | 0.268605 | 0.396465 | — | — | — |
| variant_get_by_index.test | RUN | 0.287049 | 2.072860 | 1.384289 | 0.001816 | 0.001900 | 0.001812 |
| variant_get_by_index_cx.test | COMPILE | 0.124827 | 0.289520 | 0.422898 | — | — | — |
| variant_get_by_type.test | RUN | 0.298431 | 2.195713 | 1.517025 | 0.001576 | 0.001697 | 0.001834 |
| variant_get_by_type_cx.test | COMPILE | 0.112686 | 0.247319 | 0.348308 | — | — | — |
| variant_default_construct.test | RUN | 0.293799 | 1.651765 | 1.178500 | 0.001674 | 0.001608 | 0.001681 |
| variant_default_construct_cx.test | COMPILE | 0.119598 | 0.269056 | 0.404589 | — | — | — |
| variant_copy_construct.test | RUN | 0.431061 | 2.735967 | 2.207334 | 0.001473 | 0.001388 | 0.001672 |
| variant_copy_construct_cx.test | COMPILE | 0.136531 | 0.309473 | 0.449668 | — | — | — |
| variant_move_construct.test | RUN | 0.405332 | 2.375402 | 2.001110 | 0.001703 | 0.001672 | 0.001595 |
| variant_move_construct_cx.test | COMPILE | 0.112665 | 0.249391 | 0.356476 | — | — | — |
| variant_value_construct.test | RUN | 0.226139 | 0.616014 | 0.882670 | 0.001705 | 0.001708 | 0.001717 |
| variant_value_construct_cx.test | COMPILE | 0.121596 | 0.290941 | 0.407744 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.225466 | 0.626532 | 0.842569 | 0.001690 | 0.001802 | 0.001755 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.125553 | 0.279997 | 0.414516 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.224133 | 0.620417 | 0.888045 | 0.001745 | 0.001775 | 0.001615 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.123509 | 0.279958 | 0.432035 | — | — | — |
| variant_copy_assign.test | RUN | 0.306329 | 1.910546 | 1.335760 | 0.001731 | 0.001784 | 0.001589 |
| variant_copy_assign_cx.test | COMPILE | 0.109601 | 0.253337 | 0.356232 | — | — | — |
| variant_move_assign.test | RUN | 0.297328 | 1.877734 | 1.328725 | 0.001608 | 0.001770 | 0.001546 |
| variant_move_assign_cx.test | COMPILE | 0.112579 | 0.243558 | 0.356781 | — | — | — |
| variant_value_assign.test | RUN | 0.227235 | 0.679393 | 0.971354 | 0.001638 | 0.001738 | 0.001643 |
| variant_value_assign_cx.test | COMPILE | 0.110281 | 0.239982 | 0.323308 | — | — | — |
| variant_emplace_index.test | RUN | 0.260477 | 0.784311 | 1.051653 | 0.001540 | 0.001822 | 0.001730 |
| variant_emplace_index_cx.test | COMPILE | 0.109426 | 0.252210 | 0.359058 | — | — | — |
| variant_emplace_type.test | RUN | 0.234684 | 0.672874 | 0.942290 | 0.001619 | 0.001834 | 0.001612 |
| variant_emplace_type_cx.test | COMPILE | 0.111180 | 0.254584 | 0.357629 | — | — | — |
| variant_swap.test | RUN | 0.240443 | 0.822151 | 1.002392 | 0.001602 | 0.001654 | 0.001624 |
| variant_eq_ne.test | RUN | 0.193670 | 0.510320 | 0.707765 | 0.001500 | 0.001704 | 0.001442 |
| variant_eq_ne_cx.test | COMPILE | 0.108069 | 0.254378 | 0.359518 | — | — | — |
| variant_lt_gt.test | RUN | 0.195013 | 0.586167 | 0.768233 | 0.001745 | 0.001820 | 0.001748 |
| variant_lt_gt_cx.test | COMPILE | 0.109909 | 0.237982 | 0.326044 | — | — | — |
| variant_destroy.test | RUN | 0.208126 | 0.581990 | 0.774512 | 0.001720 | 0.001766 | 0.001684 |
| variant_visit.test | RUN | 1.269106 | 4.502019 | 12.178980 | 0.001572 | 0.001670 | 0.001522 |
| variant_convert_construct.test | RUN | 0.257221 | 0.747672 | 1.089923 | 0.001537 | 0.001863 | 0.001691 |
| variant_subset.test | RUN | 0.267823 | 0.836007 | 1.119774 | 0.001716 | 0.001588 | 0.001460 |
| variant_valueless.test | RUN | 0.193866 | 0.517050 | 0.803477 | 0.001638 | 0.001788 | 0.001658 |
| variant_copy_construct_throw.test | RUN | 0.158589 | 0.409472 | 0.554393 | 0.001644 | 0.001624 | 0.001785 |
| variant_move_construct_throw.test | RUN | 0.155677 | 0.396215 | 0.555640 | 0.001580 | 0.001830 | 0.001836 |
| variant_convert_construct_throw.test | RUN | 0.163762 | 0.437859 | 0.587882 | 0.001596 | 0.001858 | 0.001668 |
| variant_copy_assign_throw.test | RUN | 0.155631 | 0.359558 | 0.541882 | 0.001560 | 0.001669 | 0.001764 |
| variant_move_assign_throw.test | RUN | 0.152435 | 0.368821 | 0.562936 | 0.001570 | 0.001859 | 0.001690 |
| variant_get_by_index_nx.test | RUN | 0.359920 | 1.791357 | 1.343425 | 0.001293 | 0.001671 | 0.001440 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.120113 | 0.295955 | 0.424891 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.358777 | 1.987403 | 1.489897 | 0.001762 | 0.001436 | 0.001746 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.110725 | 0.252065 | 0.319015 | — | — | — |
| variant_subset_nx.test | RUN | 0.280967 | 0.779406 | 1.177862 | 0.001627 | 0.001705 | 0.001636 |
| variant_hash.test | RUN | 0.272558 | 0.909553 | 1.080424 | 0.001909 | 0.001848 | 0.001742 |
| variant_trivial.test | RUN | 1.523482 | 4.985964 | 7.667391 | 0.001888 | 0.001908 | 0.001787 |
| variant_special.test | RUN | 1.529088 | 5.573662 | 8.508764 | 0.001848 | 0.001901 | 0.001753 |
| variant_visit_derived.test | RUN | 0.189678 | 0.493678 | 0.795645 | 0.001796 | 0.001704 | 0.001685 |
| variant_many_types.test | RUN | 1.636546 | 7.078927 | 11.216173 | 0.001765 | 0.001869 | 0.001510 |
| variant_visit_r.test | RUN | 0.727263 | 2.169618 | 4.110358 | 0.001693 | 0.001848 | 0.001482 |
| variant_derived_construct.test | COMPILE | 0.111838 | 0.261005 | 0.354435 | — | — | — |
| variant_visit_by_index.test | RUN | 0.253354 | 0.628790 | 0.990175 | 0.001609 | 0.001754 | 0.001808 |
| variant_ostream_insert.test | RUN | 0.173690 | 0.529653 | 0.649962 | 0.001942 | 0.001798 | 0.001734 |
| is_output_streamable.test | RUN | 0.225674 | 1.078049 | 0.932463 | 0.001532 | 0.001525 | 0.001663 |
| variant_json_value_from.test | RUN | 0.349540 | 0.820453 | 1.291795 | 0.001844 | 0.001764 | 0.001795 |
| variant_json_value_to.test | RUN | 0.417783 | 1.152346 | 1.606941 | 0.001835 | 0.001902 | 0.001738 |
| variant_uses_double_storage.test | COMPILE | 0.117365 | 0.260959 | 0.417522 | — | — | — |
| variant_derived_construct2.test | RUN | 0.163669 | 0.418156 | 0.598346 | 0.001562 | 0.001756 | 0.001564 |
| variant_visit_cx.test | COMPILE | 0.113152 | 0.249176 | 0.353748 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.108502 | 0.255857 | 0.347851 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.108288 | 0.245231 | 0.302498 | — | — | — |
| variant_index_type_126.test | RUN | 0.972067 | 2.380769 | 5.044051 | 0.001388 | 0.001782 | 0.001550 |
| variant_index_type_127.test | RUN | 0.987472 | 2.400244 | 5.126998 | 0.001736 | 0.001876 | 0.001664 |
| variant_index_type_128.test | RUN | 1.016564 | 2.461736 | 5.176285 | 0.001369 | 0.001796 | 0.001466 |
| variant_index_type_129.test | RUN | 1.004328 | 2.455652 | 5.213204 | 0.001738 | 0.001727 | 0.001714 |
| variant_index_type_254.test | RUN | 3.420307 | 8.985327 | 15.386283 | 0.001620 | 0.001683 | 0.001791 |
| variant_index_type_255.test | RUN | 3.420758 | 8.932244 | 15.702078 | 0.001704 | 0.001787 | 0.001512 |
| variant_index_type_256.test | RUN | 3.509038 | 9.148183 | 15.805261 | 0.001645 | 0.001870 | 0.001712 |
| variant_index_type_257.test | RUN | 3.442352 | 9.176235 | 15.822033 | 0.001493 | 0.001564 | 0.001557 |
| variant_default_construct_cx_2.test | COMPILE | 0.109808 | 0.272387 | 0.350632 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.113728 | 0.271821 | 0.372728 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.110649 | 0.239998 | 0.329196 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.112076 | 0.239566 | 0.339868 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.107108 | 0.239805 | 0.302689 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.107674 | 0.225602 | 0.336288 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.077831 | 0.209725 | 0.276548 | — | — | — |
| variant_issue_55.test | RUN | 0.143399 | 0.424351 | 0.480681 | 0.001282 | 0.001275 | 0.001192 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.979× | 0.976×, 0.982× | 0.993× |
| clang | 0.998× | 1.001×, 0.995× | 0.996× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44813597235).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.001162s | 0.001146s | 0.001146s | byte equality observed |
| quick.test | 10 | 0.001123s | 0.000496s | 0.001138s | byte equality observed |
| variant_alternative.test | 10 | 0.001156s | 0.001168s | 0.001163s | byte equality observed |
| variant_convert_construct.test | 10 | 0.001154s | 0.001138s | 0.001136s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.001197s | 0.001175s | 0.001198s | byte equality observed |
| variant_copy_assign.test | 10 | 0.001152s | 0.001148s | 0.001156s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.001175s | 0.001152s | 0.001186s | byte equality observed |
| variant_copy_construct.test | 10 | 0.001154s | 0.001157s | 0.001164s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.001177s | 0.001170s | 0.001192s | byte equality observed |
| variant_default_construct.test | 10 | 0.001148s | 0.001162s | 0.001162s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.001139s | 0.001147s | 0.001145s | byte equality observed |
| variant_destroy.test | 10 | 0.001138s | 0.001130s | 0.001146s | byte equality observed |
| variant_emplace_index.test | 10 | 0.001155s | 0.001171s | 0.001158s | byte equality observed |
| variant_emplace_type.test | 10 | 0.001157s | 0.001130s | 0.001151s | byte equality observed |
| variant_eq_ne.test | 10 | 0.001152s | 0.001149s | 0.001162s | byte equality observed |
| variant_get_by_index.test | 10 | 0.001215s | 0.001238s | 0.001236s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.001150s | 0.001146s | 0.001131s | byte equality observed |
| variant_get_by_type.test | 10 | 0.001193s | 0.001240s | 0.001185s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.001174s | 0.001150s | 0.001152s | byte equality observed |
| variant_hash.test | 10 | 0.001150s | 0.001132s | 0.001137s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.001157s | 0.001143s | 0.001131s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.001163s | 0.001132s | 0.001151s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.001150s | 0.001144s | 0.001152s | byte equality observed |
| variant_index_type_126.test | 10 | 0.001155s | 0.001162s | 0.001143s | byte equality observed |
| variant_index_type_127.test | 10 | 0.001155s | 0.001107s | 0.001139s | byte equality observed |
| variant_index_type_128.test | 10 | 0.001145s | 0.001161s | 0.001137s | byte equality observed |
| variant_index_type_129.test | 10 | 0.001167s | 0.001133s | 0.001157s | byte equality observed |
| variant_index_type_254.test | 10 | 0.001153s | 0.001137s | 0.001139s | byte equality observed |
| variant_index_type_255.test | 10 | 0.001151s | 0.001132s | 0.001172s | byte equality observed |
| variant_index_type_256.test | 10 | 0.001160s | 0.001156s | 0.001146s | byte equality observed |
| variant_index_type_257.test | 10 | 0.001159s | 0.001138s | 0.001162s | byte equality observed |
| variant_issue_55.test | 10 | 0.001165s | 0.001162s | 0.001154s | byte equality observed |
| variant_json_value_from.test | 10 | 0.001201s | 0.001183s | 0.001175s | byte equality observed |
| variant_json_value_to.test | 10 | 0.001202s | 0.001139s | 0.001191s | byte equality observed |
| variant_lt_gt.test | 10 | 0.001160s | 0.001147s | 0.001127s | byte equality observed |
| variant_many_types.test | 10 | 0.001196s | 0.001165s | 0.001180s | byte equality observed |
| variant_move_assign.test | 10 | 0.001150s | 0.001153s | 0.001144s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.001186s | 0.001162s | 0.001177s | byte equality observed |
| variant_move_construct.test | 10 | 0.001160s | 0.001153s | 0.001165s | byte equality observed |
| variant_move_construct_throw.test | 10 | 0.001176s | 0.001176s | 0.001182s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.001164s | 0.001190s | 0.001164s | byte equality observed |
| variant_size.test | 10 | 0.001146s | 0.001148s | 0.001165s | byte equality observed |
| variant_special.test | 10 | 0.001255s | 0.001182s | 0.001210s | byte equality observed |
| variant_subset.test | 10 | 0.001193s | 0.001189s | 0.001180s | byte equality observed |
| variant_subset_nx.test | 10 | 0.001126s | 0.001133s | 0.001156s | byte equality observed |
| variant_swap.test | 10 | 0.001148s | 0.001141s | 0.001156s | byte equality observed |
| variant_trivial.test | 10 | 0.001203s | 0.001188s | 0.001175s | byte equality observed |
| variant_value_assign.test | 10 | 0.001182s | 0.001137s | 0.001162s | byte equality observed |
| variant_value_construct.test | 10 | 0.001158s | 0.001139s | 0.001142s | byte equality observed |
| variant_valueless.test | 10 | 0.001193s | 0.001194s | 0.001187s | byte equality observed |
| variant_visit.test | 10 | 0.001158s | 0.001144s | 0.001154s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.001140s | 0.001133s | 0.001133s | byte equality observed |
| variant_visit_derived.test | 10 | 0.001152s | 0.001138s | 0.001144s | byte equality observed |
| variant_visit_r.test | 10 | 0.001170s | 0.001121s | 0.001164s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44813597235).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
