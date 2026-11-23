# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.411425 | 1.792815 | 1.459760 | 0.002288 | 0.002162 | 0.001863 |
| test_increment.test | RUN | 0.390037 | 1.338092 | 1.281894 | 0.002193 | 0.002038 | 0.002046 |
| test_add.test | RUN | 0.520281 | 2.180892 | 1.921139 | 0.002488 | 0.002266 | 0.002106 |
| test_add_assign.test | RUN | 0.514539 | 2.325477 | 1.977043 | 0.002228 | 0.002236 | 0.002060 |
| test_callable.test | RUN | 0.872391 | 4.006715 | 4.335961 | 0.003188 | 0.003098 | 0.002490 |
| test_reference.test | RUN | 0.415674 | 1.620201 | 1.373587 | 0.001986 | 0.002352 | 0.002023 |
| test_construct.test | RUN | 2.037887 | 18.745106 | 13.544922 | 0.003996 | 0.004005 | 0.003910 |
| test_relaxed.test | RUN | 0.387009 | 1.127426 | 1.196975 | 0.001920 | 0.002370 | 0.002175 |
| test_assign.test | RUN | 5.350628 | 61.881010 | 47.796439 | 0.006635 | 0.003847 | 0.004378 |
| test_construct_ref.test | RUN | 0.501766 | 2.854404 | 1.969209 | 0.002727 | 0.002629 | 0.002450 |
| test_construct_cref.test | RUN | 0.582636 | 2.611240 | 2.489362 | 0.002812 | 0.002864 | 0.002654 |
| test_any_cast.test | RUN | 0.493433 | 2.787445 | 1.916066 | 0.002556 | 0.002614 | 0.002487 |
| test_binding_of.test | RUN | 0.367359 | 1.054596 | 1.109793 | 0.002119 | 0.002025 | 0.001962 |
| test_typeid_of.test | RUN | 0.398759 | 1.548793 | 1.328951 | 0.002418 | 0.002198 | 0.002309 |
| test_nested.test | RUN | 0.447496 | 1.484711 | 1.522819 | 0.002120 | 0.002088 | 0.002024 |
| test_less.test | RUN | 0.616635 | 2.947713 | 2.493061 | 0.002702 | 0.002728 | 0.002570 |
| test_equal.test | RUN | 0.533134 | 2.806693 | 1.985910 | 0.002511 | 0.002785 | 0.002284 |
| test_negate.test | RUN | 0.386072 | 1.127157 | 1.173249 | 0.002109 | 0.002284 | 0.002055 |
| test_dereference.test | RUN | 0.441258 | 1.490535 | 1.348477 | 0.002298 | 0.002241 | 0.001910 |
| test_subscript.test | RUN | 0.437025 | 1.669140 | 1.474722 | 0.002326 | 0.002195 | 0.002202 |
| test_forward_iterator.test | RUN | 0.523800 | 1.878270 | 1.607209 | 0.002292 | 0.002250 | 0.002141 |
| test_tuple.test | RUN | 0.478702 | 1.890847 | 1.541370 | 0.002630 | 0.002389 | 0.002046 |
| test_stream.test | RUN | 0.597681 | 3.157811 | 2.478854 | 0.002959 | 0.002677 | 0.002590 |
| test_deduced.test | RUN | 0.383385 | 1.127245 | 1.142418 | 0.001922 | 0.002158 | 0.001897 |
| test_same_type.test | RUN | 0.452466 | 1.416873 | 1.444611 | 0.002569 | 0.002067 | 0.002055 |
| test_member.test | RUN | 0.572714 | 3.003369 | 2.246475 | 0.002776 | 0.002651 | 0.002791 |
| test_null.test | RUN | 0.394092 | 1.419458 | 1.223796 | 0.002212 | 0.002180 | 0.001932 |
| test_free.test | RUN | 0.507080 | 2.478589 | 1.761530 | 0.002420 | 0.002611 | 0.002423 |
| test_is_empty.test | RUN | 0.366788 | 1.183353 | 1.159523 | 0.002129 | 0.002223 | 0.001916 |
| test_dynamic_any_cast.test | RUN | 0.729359 | 3.566467 | 3.327893 | 0.002913 | 0.003049 | 0.002852 |
| test_limits.test | RUN | 0.635964 | 2.458291 | 2.346401 | 0.002271 | 0.002405 | 0.002233 |
| test_param.test | COMPILE | 0.246898 | 0.665959 | 0.747522 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.249771 | 0.513207 | 0.643162 | — | — | — |
| test_sfinae.test | COMPILE | 0.248154 | 0.507730 | 0.654757 | — | — | — |
| test_interface_order.test | COMPILE | 0.242193 | 0.512226 | 0.647422 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.027071 | 0.046493 | 0.053164 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.237156 | 0.497132 | 0.595367 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.231783 | 0.494859 | 0.575884 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.228821 | 0.488339 | 0.598702 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.229429 | 0.479529 | 0.568741 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.229977 | 0.491560 | 0.602900 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.224979 | 0.468464 | 0.590919 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.228069 | 0.492775 | 0.583214 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.241138 | 0.506061 | 0.626941 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.231376 | 0.461813 | 0.595623 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.229172 | 0.484938 | 0.585620 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.228092 | 0.483948 | 0.592361 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.227465 | 0.494355 | 0.607959 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.232783 | 0.514252 | 0.588299 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.232230 | 0.520142 | 0.618224 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.232430 | 0.520048 | 0.634227 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.226192 | 0.500593 | 0.574335 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.233767 | 0.500302 | 0.621159 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.230927 | 0.508421 | 0.625968 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.232308 | 0.510476 | 0.611744 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.231858 | 0.496659 | 0.615503 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.240781 | 0.501358 | 0.629363 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.237136 | 0.503492 | 0.604926 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.194131 | 0.384937 | 0.612896 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.180910 | 0.404236 | 0.518765 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.974× | 0.972×, 0.975× | 1.001× |
| clang | 0.964× | 0.966×, 0.961× | 0.996× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45241427099).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 10 | 0.001362s | 0.001344s | 0.001319s | byte equality observed |
| test_add_assign.test | 10 | 0.001374s | 0.001332s | 0.001315s | byte equality observed |
| test_any_cast.test | 10 | 0.001501s | 0.001422s | 0.001441s | byte equality observed |
| test_assign.test | 5 | 0.003937s | 0.003273s | 0.003807s | byte equality observed |
| test_binding.test | 10 | 0.001275s | 0.001278s | 0.001234s | byte equality observed |
| test_binding_of.test | 10 | 0.001263s | 0.001226s | 0.001232s | byte equality observed |
| test_callable.test | 10 | 0.001724s | 0.001675s | 0.001665s | byte equality observed |
| test_construct.test | 8 | 0.002235s | 0.002153s | 0.002116s | byte equality observed |
| test_construct_cref.test | 10 | 0.001595s | 0.001603s | 0.001581s | byte equality observed |
| test_construct_ref.test | 10 | 0.001521s | 0.001529s | 0.001435s | byte equality observed |
| test_deduced.test | 10 | 0.001269s | 0.001246s | 0.001232s | byte equality observed |
| test_dereference.test | 10 | 0.001313s | 0.001273s | 0.001259s | byte equality observed |
| test_dynamic_any_cast.test | 10 | 0.001620s | 0.001611s | 0.001610s | byte equality observed |
| test_equal.test | 10 | 0.001446s | 0.001453s | 0.001372s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001324s | 0.001317s | 0.001278s | byte equality observed |
| test_free.test | 10 | 0.001397s | 0.001385s | 0.001389s | byte equality observed |
| test_increment.test | 10 | 0.001335s | 0.001272s | 0.001250s | byte equality observed |
| test_is_empty.test | 10 | 0.001271s | 0.001237s | 0.001242s | byte equality observed |
| test_less.test | 10 | 0.001499s | 0.001530s | 0.001481s | byte equality observed |
| test_limits.test | 10 | 0.001380s | 0.001368s | 0.001344s | byte equality observed |
| test_member.test | 10 | 0.001637s | 0.001602s | 0.001559s | byte equality observed |
| test_negate.test | 10 | 0.001281s | 0.001257s | 0.001242s | byte equality observed |
| test_nested.test | 10 | 0.001267s | 0.001279s | 0.001266s | byte equality observed |
| test_null.test | 10 | 0.001300s | 0.001269s | 0.001272s | byte equality observed |
| test_reference.test | 10 | 0.001306s | 0.001289s | 0.001273s | byte equality observed |
| test_relaxed.test | 10 | 0.001300s | 0.001236s | 0.001220s | byte equality observed |
| test_same_type.test | 8 | 0.001300s | 0.001286s | 0.001262s | byte equality observed |
| test_stream.test | 7 | 0.001597s | 0.001564s | 0.001509s | byte equality observed |
| test_subscript.test | 10 | 0.001341s | 0.001343s | 0.001323s | byte equality observed |
| test_tuple.test | 10 | 0.001319s | 0.001355s | 0.001272s | byte equality observed |
| test_typeid_of.test | 10 | 0.001338s | 0.001311s | 0.001296s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45241427099).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
