# libs/variant2/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| quick.test | RUN | 0.127509 | 0.289736 | 0.362097 | 0.001687 | 0.000782 | 0.001594 |
| variant_size.test | RUN | 0.224529 | 0.730098 | 0.703155 | 0.001678 | 0.001728 | 0.001604 |
| variant_alternative.test | RUN | 0.301045 | 2.387133 | 1.251892 | 0.001651 | 0.001770 | 0.001640 |
| variant_holds_alternative.test | RUN | 0.208774 | 0.542483 | 0.719660 | 0.001654 | 0.001694 | 0.001555 |
| variant_holds_alternative_cx.test | COMPILE | 0.137930 | 0.311558 | 0.397763 | — | — | — |
| variant_get_by_index.test | RUN | 0.343257 | 2.608517 | 1.572674 | 0.001777 | 0.001802 | 0.001805 |
| variant_get_by_index_cx.test | COMPILE | 0.139861 | 0.324038 | 0.409702 | — | — | — |
| variant_get_by_type.test | RUN | 0.368008 | 2.762304 | 1.674365 | 0.001763 | 0.001696 | 0.001718 |
| variant_get_by_type_cx.test | COMPILE | 0.122504 | 0.282931 | 0.343893 | — | — | — |
| variant_default_construct.test | RUN | 0.329863 | 2.051112 | 1.337086 | 0.001668 | 0.001541 | 0.001718 |
| variant_default_construct_cx.test | COMPILE | 0.134528 | 0.314152 | 0.419872 | — | — | — |
| variant_copy_construct.test | RUN | 0.516794 | 3.434889 | 2.467849 | 0.001666 | 0.001694 | 0.001464 |
| variant_copy_construct_cx.test | COMPILE | 0.156085 | 0.350858 | 0.460469 | — | — | — |
| variant_move_construct.test | RUN | 0.483988 | 2.919647 | 2.147343 | 0.001797 | 0.001491 | 0.001641 |
| variant_move_construct_cx.test | COMPILE | 0.122663 | 0.279224 | 0.346616 | — | — | — |
| variant_value_construct.test | RUN | 0.256958 | 0.723659 | 0.892027 | 0.001634 | 0.001783 | 0.001575 |
| variant_value_construct_cx.test | COMPILE | 0.138858 | 0.328686 | 0.425730 | — | — | — |
| variant_in_place_index_construct.test | RUN | 0.268000 | 0.730804 | 0.925135 | 0.001552 | 0.001755 | 0.001544 |
| variant_in_place_index_construct_cx.test | COMPILE | 0.142382 | 0.327886 | 0.418465 | — | — | — |
| variant_in_place_type_construct.test | RUN | 0.263250 | 0.724802 | 0.917503 | 0.001684 | 0.001590 | 0.001411 |
| variant_in_place_type_construct_cx.test | COMPILE | 0.140705 | 0.331360 | 0.428651 | — | — | — |
| variant_copy_assign.test | RUN | 0.360555 | 2.328475 | 1.479172 | 0.001878 | 0.001631 | 0.001513 |
| variant_copy_assign_cx.test | COMPILE | 0.123474 | 0.276384 | 0.351594 | — | — | — |
| variant_move_assign.test | RUN | 0.353077 | 2.342189 | 1.484014 | 0.001528 | 0.001806 | 0.001667 |
| variant_move_assign_cx.test | COMPILE | 0.124403 | 0.279274 | 0.348525 | — | — | — |
| variant_value_assign.test | RUN | 0.266632 | 0.812546 | 1.010448 | 0.001407 | 0.001682 | 0.001372 |
| variant_value_assign_cx.test | COMPILE | 0.123683 | 0.282409 | 0.351397 | — | — | — |
| variant_emplace_index.test | RUN | 0.298345 | 0.942042 | 1.144619 | 0.001523 | 0.001742 | 0.001747 |
| variant_emplace_index_cx.test | COMPILE | 0.122120 | 0.281230 | 0.336624 | — | — | — |
| variant_emplace_type.test | RUN | 0.265839 | 0.799234 | 1.013069 | 0.001618 | 0.001696 | 0.001558 |
| variant_emplace_type_cx.test | COMPILE | 0.122567 | 0.279903 | 0.345478 | — | — | — |
| variant_swap.test | RUN | 0.277869 | 0.997181 | 1.082861 | 0.001506 | 0.001676 | 0.001432 |
| variant_eq_ne.test | RUN | 0.224556 | 0.600678 | 0.771174 | 0.001410 | 0.001694 | 0.001692 |
| variant_eq_ne_cx.test | COMPILE | 0.122683 | 0.285777 | 0.341055 | — | — | — |
| variant_lt_gt.test | RUN | 0.228484 | 0.685587 | 0.816052 | 0.001678 | 0.001688 | 0.001670 |
| variant_lt_gt_cx.test | COMPILE | 0.122012 | 0.276274 | 0.358307 | — | — | — |
| variant_destroy.test | RUN | 0.232972 | 0.691292 | 0.828127 | 0.001525 | 0.001740 | 0.001686 |
| variant_visit.test | RUN | 1.463752 | 5.227648 | 14.110672 | 0.001597 | 0.001813 | 0.001695 |
| variant_convert_construct.test | RUN | 0.292192 | 0.900452 | 1.149710 | 0.001542 | 0.001752 | 0.001660 |
| variant_subset.test | RUN | 0.302914 | 0.963960 | 1.224210 | 0.001628 | 0.001654 | 0.001515 |
| variant_valueless.test | RUN | 0.215925 | 0.645454 | 0.793194 | 0.001749 | 0.001852 | 0.001397 |
| variant_copy_construct_throw.test | RUN | 0.175301 | 0.470772 | 0.567291 | 0.001760 | 0.001742 | 0.001648 |
| variant_move_construct_throw.test | RUN | 0.174309 | 0.473555 | 0.583242 | 0.001624 | 0.001728 | 0.001710 |
| variant_convert_construct_throw.test | RUN | 0.183287 | 0.497275 | 0.601196 | 0.001798 | 0.001688 | 0.001572 |
| variant_copy_assign_throw.test | RUN | 0.171836 | 0.438397 | 0.561011 | 0.001581 | 0.001780 | 0.001680 |
| variant_move_assign_throw.test | RUN | 0.174441 | 0.440415 | 0.575375 | 0.001905 | 0.001466 | 0.001699 |
| variant_get_by_index_nx.test | RUN | 0.428302 | 2.196202 | 1.473288 | 0.001451 | 0.001757 | 0.001722 |
| variant_get_by_index_cx_nx.test | COMPILE | 0.136480 | 0.313440 | 0.414874 | — | — | — |
| variant_get_by_type_nx.test | RUN | 0.431141 | 2.470052 | 1.626068 | 0.001453 | 0.001765 | 0.001517 |
| variant_get_by_type_cx_nx.test | COMPILE | 0.121554 | 0.285513 | 0.349059 | — | — | — |
| variant_subset_nx.test | RUN | 0.320228 | 0.950769 | 1.213388 | 0.001468 | 0.001782 | 0.001662 |
| variant_hash.test | RUN | 0.309731 | 1.094832 | 1.114499 | 0.001841 | 0.001640 | 0.001699 |
| variant_trivial.test | RUN | 1.726868 | 5.853847 | 8.039639 | 0.001674 | 0.001770 | 0.001587 |
| variant_special.test | RUN | 1.625304 | 6.360031 | 8.599579 | 0.001744 | 0.001854 | 0.001730 |
| variant_visit_derived.test | RUN | 0.212646 | 0.560420 | 0.830427 | 0.001782 | 0.001728 | 0.001652 |
| variant_many_types.test | RUN | 1.931041 | 8.296965 | 11.913836 | 0.001595 | 0.001804 | 0.001688 |
| variant_visit_r.test | RUN | 0.809512 | 2.677091 | 4.644035 | 0.001457 | 0.001644 | 0.001648 |
| variant_derived_construct.test | COMPILE | 0.123057 | 0.271018 | 0.368112 | — | — | — |
| variant_visit_by_index.test | RUN | 0.271479 | 0.719346 | 1.095312 | 0.001608 | 0.001645 | 0.001855 |
| variant_ostream_insert.test | RUN | 0.199184 | 0.629438 | 0.699613 | 0.001553 | 0.001826 | 0.001665 |
| is_output_streamable.test | RUN | 0.252024 | 1.245490 | 1.012834 | 0.001428 | 0.001595 | 0.001694 |
| variant_json_value_from.test | RUN | 0.386727 | 1.030552 | 1.281850 | 0.001795 | 0.001720 | 0.001740 |
| variant_json_value_to.test | RUN | 0.480734 | 1.395260 | 1.721797 | 0.001727 | 0.001930 | 0.001780 |
| variant_uses_double_storage.test | COMPILE | 0.131707 | 0.295467 | 0.435415 | — | — | — |
| variant_derived_construct2.test | RUN | 0.178584 | 0.490685 | 0.611813 | 0.001389 | 0.001662 | 0.001668 |
| variant_visit_cx.test | COMPILE | 0.122572 | 0.286398 | 0.351444 | — | — | — |
| variant_visit_cx_2.test | COMPILE | 0.121548 | 0.289658 | 0.347912 | — | — | — |
| variant_visit_r_cx.test | COMPILE | 0.120268 | 0.278459 | 0.347047 | — | — | — |
| variant_index_type_126.test | RUN | 1.035107 | 2.701407 | 5.103634 | 0.001493 | 0.001696 | 0.001658 |
| variant_index_type_127.test | RUN | 1.107743 | 2.670993 | 5.209298 | 0.001668 | 0.001711 | 0.001564 |
| variant_index_type_128.test | RUN | 1.088768 | 2.778311 | 5.169998 | 0.001483 | 0.001612 | 0.001646 |
| variant_index_type_129.test | RUN | 1.113712 | 2.731635 | 5.252119 | 0.001623 | 0.001647 | 0.001659 |
| variant_index_type_254.test | RUN | 3.668184 | 10.189124 | 16.438843 | 0.001654 | 0.001531 | 0.001563 |
| variant_index_type_255.test | RUN | 3.709470 | 10.121656 | 16.607425 | 0.001638 | 0.001583 | 0.001609 |
| variant_index_type_256.test | RUN | 3.775209 | 10.455527 | 16.855331 | 0.001592 | 0.001766 | 0.001499 |
| variant_index_type_257.test | RUN | 3.822486 | 10.556868 | 16.735538 | 0.001512 | 0.001190 | 0.001361 |
| variant_default_construct_cx_2.test | COMPILE | 0.119100 | 0.290310 | 0.354807 | — | — | — |
| variant_default_construct_cx_3.test | COMPILE | 0.124627 | 0.296765 | 0.310780 | — | — | — |
| variant_default_construct_cx_4.test | COMPILE | 0.126950 | 0.293294 | 0.337769 | — | — | — |
| variant_default_construct_cx_5.test | COMPILE | 0.127028 | 0.272992 | 0.347671 | — | — | — |
| variant_value_construct_cx_2.test | COMPILE | 0.115428 | 0.278549 | 0.339514 | — | — | — |
| variant_value_construct_cx_3.test | COMPILE | 0.120794 | 0.280976 | 0.344192 | — | — | — |
| variant_value_construct_cx_4.test | COMPILE | 0.102713 | 0.279423 | 0.256853 | — | — | — |
| variant_issue_55.test | RUN | 0.159148 | 0.446372 | 0.501662 | 0.001287 | 0.001246 | 0.001160 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.986× | 0.989×, 0.984× | 0.994× |
| clang | 0.997× | 0.998×, 0.996× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45754596224).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| is_output_streamable.test | 10 | 0.001181s | 0.001200s | 0.001200s | byte equality observed |
| quick.test | 10 | 0.001177s | 0.000522s | 0.001161s | byte equality observed |
| variant_alternative.test | 10 | 0.001197s | 0.001194s | 0.001186s | byte equality observed |
| variant_convert_construct.test | 10 | 0.001188s | 0.001193s | 0.001182s | byte equality observed |
| variant_convert_construct_throw.test | 10 | 0.001230s | 0.001244s | 0.001241s | byte equality observed |
| variant_copy_assign.test | 10 | 0.001194s | 0.001187s | 0.001197s | byte equality observed |
| variant_copy_assign_throw.test | 10 | 0.001200s | 0.001243s | 0.001263s | byte equality observed |
| variant_copy_construct.test | 10 | 0.001215s | 0.001183s | 0.001186s | byte equality observed |
| variant_copy_construct_throw.test | 10 | 0.001237s | 0.001197s | 0.001213s | byte equality observed |
| variant_default_construct.test | 10 | 0.001210s | 0.001216s | 0.001180s | byte equality observed |
| variant_derived_construct2.test | 10 | 0.001221s | 0.001194s | 0.001183s | byte equality observed |
| variant_destroy.test | 10 | 0.001176s | 0.001161s | 0.001167s | byte equality observed |
| variant_emplace_index.test | 10 | 0.001203s | 0.001210s | 0.001172s | byte equality observed |
| variant_emplace_type.test | 10 | 0.001203s | 0.001187s | 0.001186s | byte equality observed |
| variant_eq_ne.test | 10 | 0.001184s | 0.001174s | 0.001172s | byte equality observed |
| variant_get_by_index.test | 10 | 0.001245s | 0.001292s | 0.001266s | byte equality observed |
| variant_get_by_index_nx.test | 10 | 0.001208s | 0.001191s | 0.001191s | byte equality observed |
| variant_get_by_type.test | 10 | 0.001250s | 0.001250s | 0.001250s | byte equality observed |
| variant_get_by_type_nx.test | 10 | 0.001199s | 0.001175s | 0.001173s | byte equality observed |
| variant_hash.test | 10 | 0.001168s | 0.001197s | 0.001201s | byte equality observed |
| variant_holds_alternative.test | 10 | 0.001189s | 0.001194s | 0.001153s | byte equality observed |
| variant_in_place_index_construct.test | 10 | 0.001205s | 0.001208s | 0.001160s | byte equality observed |
| variant_in_place_type_construct.test | 10 | 0.001221s | 0.001184s | 0.001189s | byte equality observed |
| variant_index_type_126.test | 10 | 0.001195s | 0.001199s | 0.001210s | byte equality observed |
| variant_index_type_127.test | 10 | 0.001178s | 0.001182s | 0.001200s | byte equality observed |
| variant_index_type_128.test | 10 | 0.001196s | 0.001189s | 0.001214s | byte equality observed |
| variant_index_type_129.test | 10 | 0.001187s | 0.001176s | 0.001185s | byte equality observed |
| variant_index_type_254.test | 10 | 0.001201s | 0.001190s | 0.001172s | byte equality observed |
| variant_index_type_255.test | 10 | 0.001186s | 0.001196s | 0.001195s | byte equality observed |
| variant_index_type_256.test | 10 | 0.001182s | 0.001193s | 0.001166s | byte equality observed |
| variant_index_type_257.test | 10 | 0.001209s | 0.001186s | 0.001202s | byte equality observed |
| variant_issue_55.test | 10 | 0.001221s | 0.001200s | 0.001236s | byte equality observed |
| variant_json_value_from.test | 10 | 0.001220s | 0.001221s | 0.001238s | byte equality observed |
| variant_json_value_to.test | 10 | 0.001246s | 0.001254s | 0.001227s | byte equality observed |
| variant_lt_gt.test | 10 | 0.001191s | 0.001162s | 0.001169s | byte equality observed |
| variant_many_types.test | 10 | 0.001221s | 0.001207s | 0.001214s | byte equality observed |
| variant_move_assign.test | 10 | 0.001199s | 0.001198s | 0.001200s | byte equality observed |
| variant_move_assign_throw.test | 10 | 0.001226s | 0.001222s | 0.001224s | byte equality observed |
| variant_move_construct.test | 10 | 0.001229s | 0.001216s | 0.001189s | byte equality observed |
| variant_move_construct_throw.test | 9 | 0.001243s | 0.001252s | 0.001198s | byte equality observed |
| variant_ostream_insert.test | 10 | 0.001224s | 0.001225s | 0.001216s | byte equality observed |
| variant_size.test | 10 | 0.001195s | 0.001206s | 0.001192s | byte equality observed |
| variant_special.test | 10 | 0.001275s | 0.001253s | 0.001248s | byte equality observed |
| variant_subset.test | 10 | 0.001227s | 0.001200s | 0.001198s | byte equality observed |
| variant_subset_nx.test | 10 | 0.001185s | 0.001174s | 0.001213s | byte equality observed |
| variant_swap.test | 10 | 0.001204s | 0.001185s | 0.001174s | byte equality observed |
| variant_trivial.test | 10 | 0.001252s | 0.001252s | 0.001212s | byte equality observed |
| variant_value_assign.test | 10 | 0.001205s | 0.001212s | 0.001173s | byte equality observed |
| variant_value_construct.test | 10 | 0.001192s | 0.001169s | 0.001187s | byte equality observed |
| variant_valueless.test | 10 | 0.001256s | 0.001256s | 0.001238s | byte equality observed |
| variant_visit.test | 10 | 0.001208s | 0.001197s | 0.001216s | byte equality observed |
| variant_visit_by_index.test | 10 | 0.001178s | 0.001176s | 0.001201s | byte equality observed |
| variant_visit_derived.test | 10 | 0.001207s | 0.001214s | 0.001196s | byte equality observed |
| variant_visit_r.test | 10 | 0.001208s | 0.001190s | 0.001213s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45754596224).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
