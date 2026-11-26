# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.438993 | 1.801355 | 1.502890 | 0.002519 | 0.002331 | 0.002238 |
| test_increment.test | RUN | 0.410106 | 1.370436 | 1.295589 | 0.002272 | 0.002224 | 0.002306 |
| test_add.test | RUN | 0.530595 | 2.206340 | 1.959498 | 0.002633 | 0.002390 | 0.002305 |
| test_add_assign.test | RUN | 0.556954 | 2.365739 | 2.059105 | 0.002436 | 0.002412 | 0.002318 |
| test_callable.test | RUN | 0.924508 | 4.089317 | 4.515678 | 0.002984 | 0.003382 | 0.003054 |
| test_reference.test | RUN | 0.445284 | 1.641268 | 1.357125 | 0.002216 | 0.002283 | 0.002246 |
| test_construct.test | RUN | 2.125923 | 19.724475 | 13.777278 | 0.004380 | 0.003817 | 0.003865 |
| test_relaxed.test | RUN | 0.420927 | 1.156747 | 1.234432 | 0.002006 | 0.002138 | 0.002063 |
| test_assign.test | RUN | 5.525529 | 64.442274 | 49.714452 | 0.006543 | 0.003906 | 0.004492 |
| test_construct_ref.test | RUN | 0.515713 | 2.873670 | 1.968127 | 0.002749 | 0.002627 | 0.002672 |
| test_construct_cref.test | RUN | 0.599269 | 2.707838 | 2.500846 | 0.002898 | 0.003152 | 0.002911 |
| test_any_cast.test | RUN | 0.497705 | 2.775152 | 1.966758 | 0.002742 | 0.002621 | 0.002174 |
| test_binding_of.test | RUN | 0.398854 | 1.034792 | 1.131120 | 0.002256 | 0.002255 | 0.002065 |
| test_typeid_of.test | RUN | 0.420181 | 1.541965 | 1.354710 | 0.002402 | 0.002420 | 0.002329 |
| test_nested.test | RUN | 0.450128 | 1.501605 | 1.509767 | 0.002450 | 0.002178 | 0.002207 |
| test_less.test | RUN | 0.628617 | 3.008522 | 2.498607 | 0.002659 | 0.002765 | 0.002683 |
| test_equal.test | RUN | 0.560469 | 2.891755 | 2.046462 | 0.002576 | 0.002804 | 0.002461 |
| test_negate.test | RUN | 0.391287 | 1.115506 | 1.193054 | 0.002189 | 0.002304 | 0.002111 |
| test_dereference.test | RUN | 0.456793 | 1.498061 | 1.377251 | 0.002329 | 0.002714 | 0.002216 |
| test_subscript.test | RUN | 0.446704 | 1.653589 | 1.503836 | 0.002361 | 0.002389 | 0.002171 |
| test_forward_iterator.test | RUN | 0.537211 | 1.891771 | 1.624473 | 0.002347 | 0.002506 | 0.002337 |
| test_tuple.test | RUN | 0.490090 | 1.877728 | 1.555354 | 0.002620 | 0.002337 | 0.002102 |
| test_stream.test | RUN | 0.605070 | 3.232232 | 2.504013 | 0.002785 | 0.002760 | 0.002785 |
| test_deduced.test | RUN | 0.384142 | 1.119393 | 1.151276 | 0.001891 | 0.002158 | 0.002212 |
| test_same_type.test | RUN | 0.455712 | 1.536926 | 1.462401 | 0.002732 | 0.001646 | 0.002254 |
| test_member.test | RUN | 0.575042 | 3.047711 | 2.312075 | 0.002827 | 0.003040 | 0.002948 |
| test_null.test | RUN | 0.390623 | 1.447493 | 1.261771 | 0.002182 | 0.002230 | 0.002081 |
| test_free.test | RUN | 0.508546 | 2.523313 | 1.812305 | 0.002768 | 0.002748 | 0.002482 |
| test_is_empty.test | RUN | 0.369351 | 1.207388 | 1.188478 | 0.002220 | 0.002321 | 0.002090 |
| test_dynamic_any_cast.test | RUN | 0.731867 | 3.607351 | 3.370416 | 0.002853 | 0.003225 | 0.003015 |
| test_limits.test | RUN | 0.644485 | 2.496757 | 2.391454 | 0.002127 | 0.002379 | 0.002314 |
| test_param.test | COMPILE | 0.250185 | 0.688870 | 0.744515 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.237816 | 0.505185 | 0.651590 | — | — | — |
| test_sfinae.test | COMPILE | 0.242608 | 0.524685 | 0.666773 | — | — | — |
| test_interface_order.test | COMPILE | 0.245411 | 0.514729 | 0.650440 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.028110 | 0.047772 | 0.055197 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.232829 | 0.492412 | 0.572796 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.231958 | 0.502437 | 0.608867 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.232784 | 0.497439 | 0.608981 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.229159 | 0.482807 | 0.575367 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.228497 | 0.489376 | 0.612651 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.220656 | 0.479537 | 0.594018 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.226288 | 0.499650 | 0.579588 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.243180 | 0.514160 | 0.644709 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.230085 | 0.469072 | 0.599190 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.228467 | 0.492454 | 0.578182 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.229043 | 0.488261 | 0.603400 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.227060 | 0.491352 | 0.614367 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.232200 | 0.524472 | 0.630052 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.235509 | 0.524306 | 0.637341 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.231839 | 0.525197 | 0.639024 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.226433 | 0.497797 | 0.563507 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.234385 | 0.500724 | 0.637844 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.231045 | 0.507770 | 0.636941 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.237166 | 0.508229 | 0.622697 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.230643 | 0.504352 | 0.634865 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.237177 | 0.504176 | 0.634460 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.233578 | 0.508080 | 0.608075 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.183262 | 0.383899 | 0.632445 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.188409 | 0.444008 | 0.557974 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.971× | 0.971×, 0.971× | 1.002× |
| clang | 0.961× | 0.957×, 0.964× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45710374989).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 10 | 0.001375s | 0.001378s | 0.001360s | byte equality observed |
| test_add_assign.test | 10 | 0.001419s | 0.001343s | 0.001354s | byte equality observed |
| test_any_cast.test | 10 | 0.001481s | 0.001436s | 0.001440s | byte equality observed |
| test_assign.test | 5 | 0.003956s | 0.003299s | 0.003734s | byte equality observed |
| test_binding.test | 10 | 0.001280s | 0.001279s | 0.001255s | byte equality observed |
| test_binding_of.test | 10 | 0.001260s | 0.001272s | 0.001221s | byte equality observed |
| test_callable.test | 10 | 0.001740s | 0.001682s | 0.001672s | byte equality observed |
| test_construct.test | 8 | 0.002233s | 0.002232s | 0.002109s | byte equality observed |
| test_construct_cref.test | 10 | 0.001631s | 0.001601s | 0.001591s | byte equality observed |
| test_construct_ref.test | 10 | 0.001481s | 0.001503s | 0.001430s | byte equality observed |
| test_deduced.test | 10 | 0.001284s | 0.001280s | 0.001234s | byte equality observed |
| test_dereference.test | 10 | 0.001312s | 0.001299s | 0.001269s | byte equality observed |
| test_dynamic_any_cast.test | 10 | 0.001628s | 0.001606s | 0.001582s | byte equality observed |
| test_equal.test | 10 | 0.001450s | 0.001445s | 0.001380s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001337s | 0.001311s | 0.001290s | byte equality observed |
| test_free.test | 10 | 0.001406s | 0.001434s | 0.001399s | byte equality observed |
| test_increment.test | 9 | 0.001332s | 0.001260s | 0.001245s | byte equality observed |
| test_is_empty.test | 10 | 0.001291s | 0.001247s | 0.001261s | byte equality observed |
| test_less.test | 10 | 0.001514s | 0.001490s | 0.001448s | byte equality observed |
| test_limits.test | 10 | 0.001378s | 0.001353s | 0.001334s | byte equality observed |
| test_member.test | 10 | 0.001640s | 0.001604s | 0.001582s | byte equality observed |
| test_negate.test | 10 | 0.001273s | 0.001260s | 0.001253s | byte equality observed |
| test_nested.test | 10 | 0.001302s | 0.001255s | 0.001234s | byte equality observed |
| test_null.test | 10 | 0.001327s | 0.001298s | 0.001262s | byte equality observed |
| test_reference.test | 10 | 0.001335s | 0.001305s | 0.001272s | byte equality observed |
| test_relaxed.test | 10 | 0.001308s | 0.001280s | 0.001233s | byte equality observed |
| test_same_type.test | 10 | 0.001322s | 0.001294s | 0.001287s | byte equality observed |
| test_stream.test | 10 | 0.001563s | 0.001524s | 0.001515s | byte equality observed |
| test_subscript.test | 10 | 0.001371s | 0.001313s | 0.001305s | byte equality observed |
| test_tuple.test | 10 | 0.001312s | 0.001296s | 0.001262s | byte equality observed |
| test_typeid_of.test | 10 | 0.001346s | 0.001301s | 0.001277s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45710374989).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
