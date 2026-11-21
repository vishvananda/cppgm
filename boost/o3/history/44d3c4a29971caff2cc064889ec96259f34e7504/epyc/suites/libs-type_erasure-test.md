# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.502645 | 2.008777 | 1.880549 | 0.003396 | 0.003448 | 0.003411 |
| test_increment.test | RUN | 0.492261 | 1.497974 | 1.647713 | 0.003143 | 0.003224 | 0.003472 |
| test_add.test | RUN | 0.615974 | 2.428872 | 2.479436 | 0.003820 | 0.003696 | 0.003953 |
| test_add_assign.test | RUN | 0.679997 | 2.606275 | 2.582431 | 0.003586 | 0.003362 | 0.003808 |
| test_callable.test | RUN | 1.038234 | 4.436238 | 5.577320 | 0.006009 | 0.005337 | 0.005940 |
| test_reference.test | RUN | 0.506695 | 1.824489 | 1.737371 | 0.003569 | 0.003500 | 0.003386 |
| test_construct.test | RUN | 2.207870 | 22.577891 | 15.524541 | 0.007361 | 0.007675 | 0.007550 |
| test_relaxed.test | RUN | 0.479865 | 1.320379 | 1.512045 | 0.003104 | 0.003163 | 0.003161 |
| test_assign.test | RUN | 5.527184 | 83.447452 | 52.474879 | 0.010566 | 0.007340 | 0.007143 |
| test_construct_ref.test | RUN | 0.614976 | 3.094405 | 2.654437 | 0.004720 | 0.004534 | 0.004508 |
| test_construct_cref.test | RUN | 0.689597 | 2.995877 | 3.084307 | 0.005258 | 0.005402 | 0.005398 |
| test_any_cast.test | RUN | 0.584763 | 3.042208 | 2.446911 | 0.004122 | 0.003945 | 0.004289 |
| test_binding_of.test | RUN | 0.472305 | 1.225794 | 1.431440 | 0.002800 | 0.002924 | 0.003134 |
| test_typeid_of.test | RUN | 0.516355 | 1.578105 | 1.617121 | 0.003516 | 0.003538 | 0.003520 |
| test_nested.test | RUN | 0.554988 | 1.674977 | 1.852773 | 0.002885 | 0.003174 | 0.003336 |
| test_less.test | RUN | 0.686123 | 3.242559 | 3.044519 | 0.004401 | 0.005418 | 0.004530 |
| test_equal.test | RUN | 0.654616 | 3.044470 | 2.533981 | 0.004194 | 0.004085 | 0.003695 |
| test_negate.test | RUN | 0.477307 | 1.183571 | 1.490798 | 0.002885 | 0.002855 | 0.003049 |
| test_dereference.test | RUN | 0.524657 | 1.609114 | 1.782557 | 0.003188 | 0.003202 | 0.003531 |
| test_subscript.test | RUN | 0.556842 | 1.700387 | 1.835701 | 0.003762 | 0.003655 | 0.003490 |
| test_forward_iterator.test | RUN | 0.634784 | 2.085029 | 1.952088 | 0.003210 | 0.003031 | 0.003245 |
| test_tuple.test | RUN | 0.577641 | 2.123646 | 1.929644 | 0.003434 | 0.003142 | 0.003481 |
| test_stream.test | RUN | 0.721086 | 3.532524 | 3.035064 | 0.004824 | 0.004356 | 0.004516 |
| test_deduced.test | RUN | 0.477094 | 1.297093 | 1.357721 | 0.003156 | 0.003232 | 0.002844 |
| test_same_type.test | RUN | 0.538870 | 1.662547 | 1.815109 | 0.003542 | 0.002974 | 0.003113 |
| test_member.test | RUN | 0.712910 | 3.393079 | 2.764323 | 0.004837 | 0.004910 | 0.005163 |
| test_null.test | RUN | 0.478657 | 1.552473 | 1.539744 | 0.003293 | 0.003273 | 0.003151 |
| test_free.test | RUN | 0.607279 | 2.789311 | 1.953640 | 0.004259 | 0.003992 | 0.003818 |
| test_is_empty.test | RUN | 0.472106 | 1.352273 | 1.443351 | 0.003282 | 0.003273 | 0.003165 |
| test_dynamic_any_cast.test | RUN | 0.856086 | 4.084855 | 3.757929 | 0.004550 | 0.004598 | 0.005440 |
| test_limits.test | RUN | 0.788754 | 2.698890 | 2.973016 | 0.003430 | 0.003496 | 0.003180 |
| test_param.test | COMPILE | 0.321596 | 0.804966 | 0.971566 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.314301 | 0.594095 | 0.845414 | — | — | — |
| test_sfinae.test | COMPILE | 0.317359 | 0.675367 | 0.850254 | — | — | — |
| test_interface_order.test | COMPILE | 0.297765 | 0.570472 | 0.853314 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.038437 | 0.062828 | 0.067352 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.296024 | 0.598922 | 0.792035 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.304246 | 0.582436 | 0.684917 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.292003 | 0.590471 | 0.795847 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.295120 | 0.587955 | 0.669225 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.299462 | 0.572612 | 0.793313 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.284886 | 0.571231 | 0.768394 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.303896 | 0.593359 | 0.739252 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.311780 | 0.607342 | 0.830825 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.302541 | 0.591092 | 0.778154 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.297619 | 0.585747 | 0.680539 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.307103 | 0.629082 | 0.789548 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.300169 | 0.573988 | 0.806099 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.291326 | 0.668272 | 0.735548 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.302290 | 0.634153 | 0.829952 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.298077 | 0.560395 | 0.822129 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.294631 | 0.612586 | 0.691185 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.298259 | 0.612300 | 0.821824 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.299432 | 0.550843 | 0.817831 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.304521 | 0.628879 | 0.738637 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.299379 | 0.616898 | 0.827130 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.305278 | 0.552792 | 0.702790 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.294244 | 0.636303 | 0.829636 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.277173 | 0.533857 | 0.681224 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.217136 | 0.542664 | 0.493269 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.977×† | 0.978×, 0.976× | 0.930× |
| clang | 0.981×† | 0.978×, 0.985× | 0.928× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44815881069).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 9 | 0.001952s | 0.001881s | 0.001884s | byte equality observed |
| test_add_assign.test | 10 | 0.001903s | 0.001907s | 0.001838s | byte equality observed |
| test_any_cast.test | 8 | 0.002180s | 0.002122s | 0.002177s | byte equality observed |
| test_assign.test | 4 | 0.005776s | 0.005091s | 0.005249s | byte equality observed |
| test_binding.test | 10 | 0.001777s | 0.001739s | 0.001769s | byte equality observed |
| test_binding_of.test | 10 | 0.001692s | 0.001655s | 0.001598s | byte equality observed |
| test_callable.test | 7 | 0.002831s | 0.002817s | 0.002800s | byte equality observed |
| test_construct.test | 5 | 0.003638s | 0.003609s | 0.003631s | byte equality observed |
| test_construct_cref.test | 8 | 0.002587s | 0.002579s | 0.002555s | byte equality observed |
| test_construct_ref.test | 7 | 0.002295s | 0.002252s | 0.002216s | byte equality observed |
| test_deduced.test | 10 | 0.001658s | 0.001745s | 0.001666s | byte equality observed |
| test_dereference.test | 10 | 0.001772s | 0.001808s | 0.001756s | byte equality observed |
| test_dynamic_any_cast.test | 8 | 0.002535s | 0.002506s | 0.002517s | byte equality observed |
| test_equal.test | 8 | 0.002103s | 0.002111s | 0.002080s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001818s | 0.001767s | 0.001759s | byte equality observed |
| test_free.test | 9 | 0.002115s | 0.002135s | 0.002094s | byte equality observed |
| test_increment.test | 10 | 0.001777s | 0.001776s | 0.001675s | byte equality observed |
| test_is_empty.test | 10 | 0.001708s | 0.001745s | 0.001684s | byte equality observed |
| test_less.test | 8 | 0.002305s | 0.002320s | 0.002274s | byte equality observed |
| test_limits.test | 10 | 0.001888s | 0.001856s | 0.001843s | byte equality observed |
| test_member.test | 7 | 0.002628s | 0.002652s | 0.002629s | byte equality observed |
| test_negate.test | 10 | 0.001667s | 0.001610s | 0.001622s | byte equality observed |
| test_nested.test | 10 | 0.001722s | 0.001694s | 0.001693s | byte equality observed |
| test_null.test | 9 | 0.001786s | 0.001734s | 0.001794s | byte equality observed |
| test_reference.test | 10 | 0.001831s | 0.001864s | 0.001807s | byte equality observed |
| test_relaxed.test | 10 | 0.001705s | 0.001668s | 0.001666s | byte equality observed |
| test_same_type.test | 9 | 0.001803s | 0.001751s | 0.001754s | byte equality observed |
| test_stream.test | 8 | 0.002417s | 0.002433s | 0.002397s | byte equality observed |
| test_subscript.test | 10 | 0.001826s | 0.001793s | 0.001776s | byte equality observed |
| test_tuple.test | 10 | 0.001889s | 0.001843s | 0.001788s | byte equality observed |
| test_typeid_of.test | 8 | 0.001852s | 0.001870s | 0.001821s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44815881069).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
