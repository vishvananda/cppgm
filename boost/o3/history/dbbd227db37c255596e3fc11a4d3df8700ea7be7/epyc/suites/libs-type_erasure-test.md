# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.506363 | 2.023932 | 1.868024 | 0.003404 | 0.003241 | 0.003234 |
| test_increment.test | RUN | 0.518156 | 1.526342 | 1.615358 | 0.002766 | 0.003196 | 0.003159 |
| test_add.test | RUN | 0.622085 | 2.415957 | 2.354218 | 0.003575 | 0.003755 | 0.003499 |
| test_add_assign.test | RUN | 0.644049 | 2.580680 | 2.478650 | 0.003294 | 0.003636 | 0.003636 |
| test_callable.test | RUN | 1.084393 | 4.528352 | 5.300623 | 0.005676 | 0.006051 | 0.005888 |
| test_reference.test | RUN | 0.505695 | 1.810349 | 1.670443 | 0.003045 | 0.003526 | 0.003455 |
| test_construct.test | RUN | 2.211471 | 22.401232 | 15.412823 | 0.007433 | 0.007236 | 0.007701 |
| test_relaxed.test | RUN | 0.478543 | 1.288134 | 1.501250 | 0.003253 | 0.003017 | 0.002851 |
| test_assign.test | RUN | 5.522613 | 69.118047 | 51.800187 | 0.011597 | 0.006914 | 0.007220 |
| test_construct_ref.test | RUN | 0.637530 | 3.132606 | 2.469711 | 0.004659 | 0.004390 | 0.004611 |
| test_construct_cref.test | RUN | 0.719325 | 2.950855 | 2.953450 | 0.005155 | 0.005374 | 0.005271 |
| test_any_cast.test | RUN | 0.578211 | 2.990661 | 2.397116 | 0.004106 | 0.004333 | 0.004297 |
| test_binding_of.test | RUN | 0.478521 | 1.210340 | 1.450436 | 0.003406 | 0.002966 | 0.003025 |
| test_typeid_of.test | RUN | 0.502719 | 1.737435 | 1.627989 | 0.003537 | 0.003548 | 0.003475 |
| test_nested.test | RUN | 0.544195 | 1.579270 | 1.772175 | 0.003323 | 0.003206 | 0.003199 |
| test_less.test | RUN | 0.709359 | 3.286706 | 3.013109 | 0.004527 | 0.004640 | 0.004450 |
| test_equal.test | RUN | 0.664016 | 3.069584 | 2.420131 | 0.003971 | 0.003901 | 0.004113 |
| test_negate.test | RUN | 0.491495 | 1.245085 | 1.421577 | 0.002720 | 0.002941 | 0.003033 |
| test_dereference.test | RUN | 0.534245 | 1.526196 | 1.698251 | 0.003387 | 0.003155 | 0.002975 |
| test_subscript.test | RUN | 0.550903 | 1.760393 | 1.805812 | 0.003353 | 0.003207 | 0.003515 |
| test_forward_iterator.test | RUN | 0.634636 | 2.032081 | 1.890569 | 0.003417 | 0.003234 | 0.003527 |
| test_tuple.test | RUN | 0.568831 | 1.960213 | 1.800538 | 0.003682 | 0.003421 | 0.003580 |
| test_stream.test | RUN | 0.754934 | 3.226792 | 2.849171 | 0.004541 | 0.005039 | 0.004344 |
| test_deduced.test | RUN | 0.509347 | 1.210268 | 1.494811 | 0.002996 | 0.002928 | 0.003079 |
| test_same_type.test | RUN | 0.538861 | 1.701329 | 1.726466 | 0.003446 | 0.003542 | 0.003376 |
| test_member.test | RUN | 0.710112 | 3.363790 | 2.894468 | 0.005177 | 0.004990 | 0.004812 |
| test_null.test | RUN | 0.496390 | 1.627965 | 1.353493 | 0.003428 | 0.003345 | 0.002962 |
| test_free.test | RUN | 0.592519 | 2.700405 | 2.207191 | 0.004193 | 0.003709 | 0.003589 |
| test_is_empty.test | RUN | 0.468912 | 1.395651 | 1.306833 | 0.003325 | 0.003131 | 0.002790 |
| test_dynamic_any_cast.test | RUN | 0.892642 | 3.832864 | 4.109625 | 0.005046 | 0.004814 | 0.004952 |
| test_limits.test | RUN | 0.781082 | 2.761644 | 2.909899 | 0.003307 | 0.003655 | 0.003488 |
| test_param.test | COMPILE | 0.322126 | 0.793027 | 0.868260 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.321934 | 0.591209 | 0.751921 | — | — | — |
| test_sfinae.test | COMPILE | 0.320864 | 0.634074 | 0.782891 | — | — | — |
| test_interface_order.test | COMPILE | 0.307860 | 0.590013 | 0.834752 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.040069 | 0.058742 | 0.061190 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.294526 | 0.586180 | 0.671898 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.296002 | 0.602095 | 0.773780 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.295208 | 0.582107 | 0.670036 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.296258 | 0.583555 | 0.797097 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.291920 | 0.590603 | 0.785734 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.283944 | 0.554790 | 0.652721 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.294808 | 0.584176 | 0.800431 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.311083 | 0.617503 | 0.767013 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.290343 | 0.517918 | 0.769039 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.292802 | 0.575606 | 0.794983 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.291806 | 0.593394 | 0.678070 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.296564 | 0.541301 | 0.803037 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.294461 | 0.619419 | 0.829179 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.290777 | 0.638283 | 0.737890 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.305836 | 0.581450 | 0.815465 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.299706 | 0.584066 | 0.778863 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.293829 | 0.608086 | 0.755705 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.294538 | 0.586046 | 0.818442 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.301733 | 0.597970 | 0.821302 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.308635 | 0.614242 | 0.718212 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.297338 | 0.586282 | 0.824271 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.306274 | 0.604354 | 0.832503 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.275292 | 0.621836 | 0.704255 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.276720 | 0.578481 | 0.593746 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.058×† | 0.989×, 1.126× | 0.996× |
| clang | 1.043×† | 0.973×, 1.113× | 1.007× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44922642903).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 9 | 0.001960s | 0.002052s | 0.002054s | byte equality observed |
| test_add_assign.test | 10 | 0.001928s | 0.002146s | 0.002105s | byte equality observed |
| test_any_cast.test | 8 | 0.002250s | 0.002376s | 0.002387s | byte equality observed |
| test_assign.test | 4 | 0.006052s | 0.005694s | 0.005515s | byte equality observed |
| test_binding.test | 10 | 0.001824s | 0.001978s | 0.001840s | byte equality observed |
| test_binding_of.test | 10 | 0.001696s | 0.001794s | 0.001845s | byte equality observed |
| test_callable.test | 7 | 0.002896s | 0.002886s | 0.003107s | byte equality observed |
| test_construct.test | 5 | 0.003714s | 0.003907s | 0.004047s | byte equality observed |
| test_construct_cref.test | 7 | 0.002580s | 0.002707s | 0.002784s | byte equality observed |
| test_construct_ref.test | 7 | 0.002344s | 0.002377s | 0.002446s | byte equality observed |
| test_deduced.test | 10 | 0.001725s | 0.001769s | 0.001837s | byte equality observed |
| test_dereference.test | 10 | 0.001813s | 0.001898s | 0.001924s | byte equality observed |
| test_dynamic_any_cast.test | 8 | 0.002586s | 0.002739s | 0.002692s | byte equality observed |
| test_equal.test | 9 | 0.002154s | 0.002305s | 0.002298s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001814s | 0.001937s | 0.001878s | byte equality observed |
| test_free.test | 9 | 0.002200s | 0.002291s | 0.002175s | byte equality observed |
| test_increment.test | 10 | 0.001776s | 0.001818s | 0.001878s | byte equality observed |
| test_is_empty.test | 10 | 0.001777s | 0.001899s | 0.001729s | byte equality observed |
| test_less.test | 8 | 0.002359s | 0.002515s | 0.002504s | byte equality observed |
| test_limits.test | 10 | 0.001897s | 0.002012s | 0.002039s | byte equality observed |
| test_member.test | 7 | 0.002715s | 0.002875s | 0.002832s | byte equality observed |
| test_negate.test | 10 | 0.001720s | 0.001811s | 0.001850s | byte equality observed |
| test_nested.test | 10 | 0.001797s | 0.001875s | 0.001935s | byte equality observed |
| test_null.test | 10 | 0.001824s | 0.001958s | 0.002006s | byte equality observed |
| test_reference.test | 9 | 0.001876s | 0.002006s | 0.001994s | byte equality observed |
| test_relaxed.test | 10 | 0.001731s | 0.001860s | 0.001907s | byte equality observed |
| test_same_type.test | 8 | 0.001841s | 0.001925s | 0.001966s | byte equality observed |
| test_stream.test | 7 | 0.002467s | 0.002586s | 0.002719s | byte equality observed |
| test_subscript.test | 9 | 0.001903s | 0.001909s | 0.002036s | byte equality observed |
| test_tuple.test | 9 | 0.001906s | 0.002027s | 0.002063s | byte equality observed |
| test_typeid_of.test | 9 | 0.001877s | 0.001975s | 0.002073s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44922642903).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
