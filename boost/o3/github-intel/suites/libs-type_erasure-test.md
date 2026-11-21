# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.410563 | 1.796427 | 1.457213 | 0.002370 | 0.002315 | 0.001932 |
| test_increment.test | RUN | 0.401792 | 1.355551 | 1.286153 | 0.002153 | 0.002399 | 0.001833 |
| test_add.test | RUN | 0.514331 | 2.211618 | 1.927037 | 0.002586 | 0.002401 | 0.002112 |
| test_add_assign.test | RUN | 0.551983 | 2.380853 | 1.958516 | 0.002334 | 0.002290 | 0.002053 |
| test_callable.test | RUN | 0.889089 | 4.089846 | 4.315299 | 0.003152 | 0.003356 | 0.002999 |
| test_reference.test | RUN | 0.421853 | 1.631468 | 1.366475 | 0.002535 | 0.002405 | 0.002012 |
| test_construct.test | RUN | 2.074669 | 19.728072 | 13.404728 | 0.003977 | 0.003796 | 0.003811 |
| test_relaxed.test | RUN | 0.394499 | 1.172252 | 1.177513 | 0.002138 | 0.002176 | 0.002017 |
| test_assign.test | RUN | 5.416346 | 65.439862 | 45.062072 | 0.006694 | 0.003900 | 0.004234 |
| test_construct_ref.test | RUN | 0.505733 | 2.888080 | 1.950722 | 0.002638 | 0.002634 | 0.002526 |
| test_construct_cref.test | RUN | 0.579549 | 2.670809 | 2.454435 | 0.002782 | 0.003030 | 0.002440 |
| test_any_cast.test | RUN | 0.480715 | 2.786414 | 1.912154 | 0.002681 | 0.002765 | 0.002503 |
| test_binding_of.test | RUN | 0.372670 | 1.065562 | 1.104403 | 0.002084 | 0.002069 | 0.002017 |
| test_typeid_of.test | RUN | 0.420382 | 1.504081 | 1.309518 | 0.002175 | 0.002393 | 0.002073 |
| test_nested.test | RUN | 0.436990 | 1.509187 | 1.473971 | 0.002313 | 0.002300 | 0.001985 |
| test_less.test | RUN | 0.579741 | 3.003434 | 2.463254 | 0.002563 | 0.002841 | 0.002431 |
| test_equal.test | RUN | 0.567645 | 2.898184 | 1.979055 | 0.002447 | 0.002767 | 0.002376 |
| test_negate.test | RUN | 0.372799 | 1.143067 | 1.172118 | 0.002108 | 0.002036 | 0.001962 |
| test_dereference.test | RUN | 0.425520 | 1.507424 | 1.321727 | 0.001957 | 0.002200 | 0.002063 |
| test_subscript.test | RUN | 0.433130 | 1.669360 | 1.473371 | 0.002242 | 0.002432 | 0.002154 |
| test_forward_iterator.test | RUN | 0.542878 | 1.897671 | 1.593189 | 0.002435 | 0.002381 | 0.002024 |
| test_tuple.test | RUN | 0.462165 | 1.879480 | 1.545057 | 0.002276 | 0.002624 | 0.002048 |
| test_stream.test | RUN | 0.604684 | 3.184672 | 2.446233 | 0.003016 | 0.002835 | 0.002516 |
| test_deduced.test | RUN | 0.414917 | 1.119053 | 1.125141 | 0.002121 | 0.002446 | 0.001954 |
| test_same_type.test | RUN | 0.438480 | 1.446932 | 1.439696 | 0.002217 | 0.002208 | 0.001948 |
| test_member.test | RUN | 0.626136 | 3.020870 | 2.209926 | 0.002933 | 0.002800 | 0.002766 |
| test_null.test | RUN | 0.391349 | 1.463339 | 1.220852 | 0.002421 | 0.002347 | 0.002094 |
| test_free.test | RUN | 0.492213 | 2.498699 | 1.768070 | 0.002494 | 0.002607 | 0.002311 |
| test_is_empty.test | RUN | 0.373159 | 1.231631 | 1.125968 | 0.002313 | 0.002350 | 0.002029 |
| test_dynamic_any_cast.test | RUN | 0.747818 | 3.621895 | 3.405862 | 0.002664 | 0.002942 | 0.002636 |
| test_limits.test | RUN | 0.681499 | 2.527198 | 2.321634 | 0.002328 | 0.002306 | 0.002180 |
| test_param.test | COMPILE | 0.257238 | 0.683539 | 0.712297 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.251629 | 0.513657 | 0.602395 | — | — | — |
| test_sfinae.test | COMPILE | 0.249100 | 0.525851 | 0.637840 | — | — | — |
| test_interface_order.test | COMPILE | 0.241386 | 0.516789 | 0.635887 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.028678 | 0.048039 | 0.052979 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.235948 | 0.501993 | 0.562881 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.237106 | 0.511211 | 0.596223 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.233871 | 0.488043 | 0.597192 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.234286 | 0.497811 | 0.563244 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.233618 | 0.491922 | 0.603586 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.227565 | 0.480223 | 0.587485 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.235255 | 0.502763 | 0.577883 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.243901 | 0.509487 | 0.614817 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.233333 | 0.486309 | 0.588879 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.234211 | 0.477605 | 0.576375 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.234222 | 0.488332 | 0.586799 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.231734 | 0.499276 | 0.605001 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.236713 | 0.525449 | 0.590806 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.236238 | 0.525194 | 0.611679 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.237362 | 0.521872 | 0.621200 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.231866 | 0.506817 | 0.555265 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.236842 | 0.513565 | 0.610419 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.237037 | 0.512455 | 0.619549 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.238944 | 0.524162 | 0.620438 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.237505 | 0.510208 | 0.624756 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.233877 | 0.512978 | 0.630667 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.239645 | 0.516231 | 0.596146 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.236001 | 0.504845 | 0.614690 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.163130 | 0.405469 | 0.522615 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.969× | 0.970×, 0.969× | 1.003× |
| clang | 0.962× | 0.960×, 0.963× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44801983152).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 10 | 0.001370s | 0.001343s | 0.001342s | byte equality observed |
| test_add_assign.test | 10 | 0.001407s | 0.001354s | 0.001299s | byte equality observed |
| test_any_cast.test | 10 | 0.001473s | 0.001432s | 0.001417s | byte equality observed |
| test_assign.test | 5 | 0.003882s | 0.003287s | 0.003788s | byte equality observed |
| test_binding.test | 10 | 0.001289s | 0.001279s | 0.001246s | byte equality observed |
| test_binding_of.test | 10 | 0.001252s | 0.001234s | 0.001210s | byte equality observed |
| test_callable.test | 10 | 0.001729s | 0.001713s | 0.001664s | byte equality observed |
| test_construct.test | 8 | 0.002205s | 0.002139s | 0.002164s | byte equality observed |
| test_construct_cref.test | 10 | 0.001624s | 0.001589s | 0.001574s | byte equality observed |
| test_construct_ref.test | 10 | 0.001508s | 0.001508s | 0.001491s | byte equality observed |
| test_deduced.test | 10 | 0.001270s | 0.001239s | 0.001219s | byte equality observed |
| test_dereference.test | 10 | 0.001301s | 0.001268s | 0.001265s | byte equality observed |
| test_dynamic_any_cast.test | 10 | 0.001624s | 0.001610s | 0.001588s | byte equality observed |
| test_equal.test | 10 | 0.001452s | 0.001432s | 0.001352s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001305s | 0.001269s | 0.001304s | byte equality observed |
| test_free.test | 10 | 0.001427s | 0.001431s | 0.001387s | byte equality observed |
| test_increment.test | 10 | 0.001302s | 0.001267s | 0.001248s | byte equality observed |
| test_is_empty.test | 10 | 0.001282s | 0.001218s | 0.001253s | byte equality observed |
| test_less.test | 10 | 0.001509s | 0.001496s | 0.001429s | byte equality observed |
| test_limits.test | 10 | 0.001383s | 0.001328s | 0.001333s | byte equality observed |
| test_member.test | 10 | 0.001631s | 0.001608s | 0.001568s | byte equality observed |
| test_negate.test | 10 | 0.001260s | 0.001261s | 0.001251s | byte equality observed |
| test_nested.test | 10 | 0.001275s | 0.001234s | 0.001246s | byte equality observed |
| test_null.test | 10 | 0.001305s | 0.001271s | 0.001251s | byte equality observed |
| test_reference.test | 10 | 0.001312s | 0.001292s | 0.001283s | byte equality observed |
| test_relaxed.test | 10 | 0.001289s | 0.001269s | 0.001231s | byte equality observed |
| test_same_type.test | 10 | 0.001316s | 0.001276s | 0.001267s | byte equality observed |
| test_stream.test | 10 | 0.001560s | 0.001558s | 0.001506s | byte equality observed |
| test_subscript.test | 10 | 0.001347s | 0.001363s | 0.001288s | byte equality observed |
| test_tuple.test | 10 | 0.001362s | 0.001272s | 0.001254s | byte equality observed |
| test_typeid_of.test | 10 | 0.001331s | 0.001330s | 0.001293s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44801983152).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
