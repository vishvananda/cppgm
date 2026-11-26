# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.438899 | 1.721236 | 1.401218 | 0.003016 | 0.003268 | 0.003041 |
| test_increment.test | RUN | 0.427861 | 1.359016 | 1.136074 | 0.002920 | 0.003247 | 0.002902 |
| test_add.test | RUN | 0.533796 | 2.119335 | 1.666374 | 0.003173 | 0.003461 | 0.002954 |
| test_add_assign.test | RUN | 0.577133 | 2.351546 | 1.780648 | 0.003629 | 0.003813 | 0.002925 |
| test_callable.test | RUN | 0.874858 | 4.105970 | 3.911125 | 0.005421 | 0.005408 | 0.005164 |
| test_reference.test | RUN | 0.421964 | 1.644622 | 1.169112 | 0.003143 | 0.003582 | 0.002947 |
| test_construct.test | RUN | 1.808635 | 23.411985 | 11.560634 | 0.006752 | 0.006331 | 0.006612 |
| test_relaxed.test | RUN | 0.398762 | 1.187477 | 1.043156 | 0.003016 | 0.003152 | 0.002720 |
| test_assign.test | RUN | 4.603831 | 74.935007 | 40.710256 | 0.009075 | 0.006608 | 0.006382 |
| test_construct_ref.test | RUN | 0.525609 | 2.767195 | 1.729029 | 0.004083 | 0.004243 | 0.004044 |
| test_construct_cref.test | RUN | 0.582527 | 2.641581 | 2.257707 | 0.004706 | 0.005154 | 0.004653 |
| test_any_cast.test | RUN | 0.485288 | 2.638570 | 1.708694 | 0.004013 | 0.003794 | 0.003420 |
| test_binding_of.test | RUN | 0.396568 | 1.073588 | 0.965500 | 0.002886 | 0.003081 | 0.002836 |
| test_typeid_of.test | RUN | 0.424266 | 1.426132 | 1.152246 | 0.003249 | 0.003439 | 0.003023 |
| test_nested.test | RUN | 0.462016 | 1.349048 | 1.319499 | 0.003073 | 0.002857 | 0.002641 |
| test_less.test | RUN | 0.626983 | 2.845870 | 2.056116 | 0.004196 | 0.004330 | 0.004078 |
| test_equal.test | RUN | 0.549460 | 2.618645 | 1.851102 | 0.003876 | 0.004031 | 0.003538 |
| test_negate.test | RUN | 0.430221 | 1.073969 | 1.065453 | 0.003120 | 0.003120 | 0.002633 |
| test_dereference.test | RUN | 0.450606 | 1.367880 | 1.194308 | 0.002722 | 0.003177 | 0.002948 |
| test_subscript.test | RUN | 0.469430 | 1.495548 | 1.140302 | 0.003343 | 0.003440 | 0.002971 |
| test_forward_iterator.test | RUN | 0.551352 | 1.824829 | 1.366959 | 0.003573 | 0.003364 | 0.002920 |
| test_tuple.test | RUN | 0.475906 | 1.851251 | 1.335693 | 0.003299 | 0.003389 | 0.002877 |
| test_stream.test | RUN | 0.632676 | 2.995955 | 2.115101 | 0.004259 | 0.004465 | 0.003815 |
| test_deduced.test | RUN | 0.415771 | 0.995530 | 1.013589 | 0.002765 | 0.002982 | 0.002431 |
| test_same_type.test | RUN | 0.455584 | 1.426883 | 1.170351 | 0.003311 | 0.003233 | 0.003047 |
| test_member.test | RUN | 0.606083 | 3.023988 | 1.878972 | 0.004853 | 0.004761 | 0.004422 |
| test_null.test | RUN | 0.418224 | 1.394037 | 1.047104 | 0.003392 | 0.003257 | 0.002774 |
| test_free.test | RUN | 0.535325 | 2.305991 | 1.561694 | 0.003655 | 0.003798 | 0.003710 |
| test_is_empty.test | RUN | 0.402439 | 1.087288 | 1.026012 | 0.003288 | 0.003062 | 0.002847 |
| test_dynamic_any_cast.test | RUN | 0.765347 | 3.491987 | 2.840596 | 0.004813 | 0.004782 | 0.004193 |
| test_limits.test | RUN | 0.677674 | 2.298121 | 2.077966 | 0.002811 | 0.003607 | 0.002727 |
| test_param.test | COMPILE | 0.275188 | 0.651715 | 0.667511 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.269623 | 0.487282 | 0.570647 | — | — | — |
| test_sfinae.test | COMPILE | 0.269479 | 0.515780 | 0.619148 | — | — | — |
| test_interface_order.test | COMPILE | 0.266143 | 0.492716 | 0.584160 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.032034 | 0.051249 | 0.052141 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.247366 | 0.466413 | 0.543071 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.247470 | 0.502702 | 0.482094 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.253722 | 0.497230 | 0.500812 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.251750 | 0.493380 | 0.516259 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.239795 | 0.485451 | 0.465861 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.238673 | 0.469721 | 0.489690 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.244716 | 0.476058 | 0.509959 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.260767 | 0.471024 | 0.500836 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.249595 | 0.445103 | 0.507322 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.245173 | 0.448436 | 0.532862 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.249215 | 0.469044 | 0.471797 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.248853 | 0.474483 | 0.530687 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.249961 | 0.482142 | 0.544066 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.250568 | 0.503360 | 0.535643 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.250616 | 0.502923 | 0.553949 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.245701 | 0.466107 | 0.517364 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.255318 | 0.497363 | 0.503177 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.256202 | 0.496518 | 0.548183 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.258950 | 0.484984 | 0.541965 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.257949 | 0.485823 | 0.517638 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.259425 | 0.486073 | 0.542055 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.255377 | 0.494019 | 0.545201 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.244549 | 0.355269 | 0.503766 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.240939 | 0.476347 | 0.439028 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.974× | 0.961×, 0.987× | 0.987× |
| clang | 0.992× | 1.005×, 0.979× | 1.023× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45790989032).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 10 | 0.001741s | 0.001623s | 0.001693s | byte equality observed |
| test_add_assign.test | 10 | 0.001700s | 0.001658s | 0.001692s | byte equality observed |
| test_any_cast.test | 9 | 0.001929s | 0.001817s | 0.001986s | byte equality observed |
| test_assign.test | 4 | 0.004830s | 0.004309s | 0.004782s | byte equality observed |
| test_binding.test | 10 | 0.001607s | 0.001551s | 0.001590s | byte equality observed |
| test_binding_of.test | 10 | 0.001505s | 0.001457s | 0.001518s | byte equality observed |
| test_callable.test | 7 | 0.002552s | 0.002452s | 0.002568s | byte equality observed |
| test_construct.test | 6 | 0.003243s | 0.003164s | 0.003251s | byte equality observed |
| test_construct_cref.test | 9 | 0.002271s | 0.002144s | 0.002306s | byte equality observed |
| test_construct_ref.test | 9 | 0.002025s | 0.001917s | 0.002014s | byte equality observed |
| test_deduced.test | 10 | 0.001504s | 0.001449s | 0.001540s | byte equality observed |
| test_dereference.test | 10 | 0.001604s | 0.001531s | 0.001623s | byte equality observed |
| test_dynamic_any_cast.test | 9 | 0.002226s | 0.002158s | 0.002281s | byte equality observed |
| test_equal.test | 10 | 0.001920s | 0.001801s | 0.001874s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001613s | 0.001579s | 0.001586s | byte equality observed |
| test_free.test | 10 | 0.001899s | 0.001797s | 0.001874s | byte equality observed |
| test_increment.test | 10 | 0.001538s | 0.001505s | 0.001541s | byte equality observed |
| test_is_empty.test | 10 | 0.001549s | 0.001461s | 0.001523s | byte equality observed |
| test_less.test | 9 | 0.002037s | 0.001975s | 0.002034s | byte equality observed |
| test_limits.test | 10 | 0.001676s | 0.001607s | 0.001675s | byte equality observed |
| test_member.test | 6 | 0.002316s | 0.002237s | 0.002321s | byte equality observed |
| test_negate.test | 10 | 0.001515s | 0.001436s | 0.001512s | byte equality observed |
| test_nested.test | 10 | 0.001545s | 0.001476s | 0.001530s | byte equality observed |
| test_null.test | 10 | 0.001613s | 0.001505s | 0.001615s | byte equality observed |
| test_reference.test | 8 | 0.001653s | 0.001587s | 0.001628s | byte equality observed |
| test_relaxed.test | 9 | 0.001546s | 0.001497s | 0.001562s | byte equality observed |
| test_same_type.test | 10 | 0.001614s | 0.001539s | 0.001598s | byte equality observed |
| test_stream.test | 8 | 0.002186s | 0.002085s | 0.002148s | byte equality observed |
| test_subscript.test | 10 | 0.001665s | 0.001578s | 0.001659s | byte equality observed |
| test_tuple.test | 10 | 0.001641s | 0.001599s | 0.001658s | byte equality observed |
| test_typeid_of.test | 10 | 0.001661s | 0.001589s | 0.001657s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45790989032).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
