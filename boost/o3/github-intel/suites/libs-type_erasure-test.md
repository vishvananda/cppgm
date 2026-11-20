# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.587605 | 2.481097 | 2.030808 | 0.003239 | 0.002902 | 0.003010 |
| test_increment.test | RUN | 0.553606 | 1.873159 | 1.758664 | 0.003087 | 0.002810 | 0.002814 |
| test_add.test | RUN | 0.712023 | 3.006319 | 2.643934 | 0.003429 | 0.003260 | 0.002980 |
| test_add_assign.test | RUN | 0.757417 | 3.255145 | 2.753328 | 0.003081 | 0.003300 | 0.003168 |
| test_callable.test | RUN | 1.216771 | 5.504714 | 6.027523 | 0.004518 | 0.004563 | 0.004572 |
| test_reference.test | RUN | 0.594345 | 2.247010 | 1.858996 | 0.003243 | 0.003283 | 0.003073 |
| test_construct.test | RUN | 2.790477 | 26.245785 | 18.349969 | 0.006106 | 0.006004 | 0.005800 |
| test_relaxed.test | RUN | 0.543363 | 1.611743 | 1.651938 | 0.002858 | 0.003011 | 0.002756 |
| test_assign.test | RUN | 7.029187 | 83.246049 | 62.864595 | 0.009508 | 0.005602 | 0.005960 |
| test_construct_ref.test | RUN | 0.700484 | 3.920734 | 2.703931 | 0.003401 | 0.003880 | 0.003669 |
| test_construct_cref.test | RUN | 0.791334 | 3.707359 | 3.532041 | 0.004043 | 0.004170 | 0.004076 |
| test_any_cast.test | RUN | 0.689188 | 3.828020 | 2.643936 | 0.003745 | 0.003533 | 0.003751 |
| test_binding_of.test | RUN | 0.520393 | 1.409329 | 1.566787 | 0.002748 | 0.002930 | 0.002867 |
| test_typeid_of.test | RUN | 0.580796 | 2.131522 | 1.796850 | 0.003195 | 0.003095 | 0.003062 |
| test_nested.test | RUN | 0.641637 | 2.050551 | 2.049164 | 0.002901 | 0.003065 | 0.002928 |
| test_less.test | RUN | 0.799475 | 4.055758 | 3.332838 | 0.003706 | 0.003966 | 0.003789 |
| test_equal.test | RUN | 0.747874 | 3.870631 | 2.770795 | 0.003585 | 0.003428 | 0.003491 |
| test_negate.test | RUN | 0.550425 | 1.530486 | 1.639887 | 0.002940 | 0.002957 | 0.002698 |
| test_dereference.test | RUN | 0.592007 | 1.985775 | 1.913206 | 0.003179 | 0.003060 | 0.002900 |
| test_subscript.test | RUN | 0.625052 | 2.240769 | 1.825268 | 0.003068 | 0.003046 | 0.002891 |
| test_forward_iterator.test | RUN | 0.754075 | 2.594464 | 2.471166 | 0.003163 | 0.003173 | 0.002929 |
| test_tuple.test | RUN | 0.654677 | 2.573132 | 2.036622 | 0.003110 | 0.003070 | 0.002989 |
| test_stream.test | RUN | 0.870547 | 4.179694 | 3.369153 | 0.003965 | 0.003735 | 0.003813 |
| test_deduced.test | RUN | 0.533571 | 1.461447 | 1.522529 | 0.002838 | 0.002919 | 0.002914 |
| test_same_type.test | RUN | 0.589323 | 2.030296 | 1.969682 | 0.003106 | 0.002620 | 0.002939 |
| test_member.test | RUN | 0.813064 | 4.127859 | 2.951583 | 0.004140 | 0.004204 | 0.003801 |
| test_null.test | RUN | 0.545915 | 1.985497 | 1.687568 | 0.003085 | 0.003123 | 0.002842 |
| test_free.test | RUN | 0.667742 | 3.393398 | 2.409000 | 0.003357 | 0.003633 | 0.003396 |
| test_is_empty.test | RUN | 0.526334 | 1.684993 | 1.592363 | 0.003087 | 0.003215 | 0.002908 |
| test_dynamic_any_cast.test | RUN | 1.007134 | 4.853078 | 4.463731 | 0.004086 | 0.003919 | 0.004032 |
| test_limits.test | RUN | 0.915089 | 3.362074 | 3.189869 | 0.003017 | 0.003220 | 0.003163 |
| test_param.test | COMPILE | 0.356679 | 0.941289 | 1.019967 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.349847 | 0.725835 | 0.903161 | — | — | — |
| test_sfinae.test | COMPILE | 0.350634 | 0.740031 | 0.902395 | — | — | — |
| test_interface_order.test | COMPILE | 0.336879 | 0.716827 | 0.898327 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.039154 | 0.063379 | 0.073277 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.329374 | 0.695624 | 0.831903 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.326479 | 0.698731 | 0.770463 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.328025 | 0.676820 | 0.837351 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.327287 | 0.691783 | 0.834579 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.329736 | 0.704376 | 0.756950 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.315845 | 0.680291 | 0.816292 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.329325 | 0.679554 | 0.835034 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.343163 | 0.720570 | 0.802905 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.326464 | 0.674519 | 0.825153 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.328920 | 0.683991 | 0.824098 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.328133 | 0.702072 | 0.802190 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.322919 | 0.693456 | 0.847137 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.331238 | 0.733334 | 0.787706 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.329401 | 0.749900 | 0.858658 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.330384 | 0.742423 | 0.866283 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.323795 | 0.683481 | 0.767095 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.331383 | 0.720110 | 0.857148 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.331007 | 0.719106 | 0.867875 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.332681 | 0.697207 | 0.807085 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.330500 | 0.723416 | 0.862461 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.331754 | 0.704327 | 0.883066 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.331657 | 0.716931 | 0.856061 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.331996 | 0.713307 | 0.857715 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.260351 | 0.502699 | 0.717896 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.968× | 0.968×, 0.968× | 1.007× |
| clang | 0.966× | 0.963×, 0.969× | 1.009× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44667760294).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 10 | 0.002246s | 0.002182s | 0.002146s | byte equality observed |
| test_add_assign.test | 10 | 0.002254s | 0.002172s | 0.002172s | byte equality observed |
| test_any_cast.test | 9 | 0.002538s | 0.002487s | 0.002466s | byte equality observed |
| test_assign.test | 4 | 0.006915s | 0.005596s | 0.006786s | byte equality observed |
| test_binding.test | 10 | 0.002169s | 0.002079s | 0.002117s | byte equality observed |
| test_binding_of.test | 10 | 0.002063s | 0.001990s | 0.001991s | byte equality observed |
| test_callable.test | 8 | 0.002982s | 0.002893s | 0.002863s | byte equality observed |
| test_construct.test | 6 | 0.003852s | 0.003782s | 0.003622s | byte equality observed |
| test_construct_cref.test | 8 | 0.002761s | 0.002668s | 0.002654s | byte equality observed |
| test_construct_ref.test | 9 | 0.002520s | 0.002468s | 0.002465s | byte equality observed |
| test_deduced.test | 10 | 0.002055s | 0.002012s | 0.001994s | byte equality observed |
| test_dereference.test | 10 | 0.002124s | 0.002077s | 0.002045s | byte equality observed |
| test_dynamic_any_cast.test | 8 | 0.002717s | 0.002689s | 0.002751s | byte equality observed |
| test_equal.test | 9 | 0.002397s | 0.002385s | 0.002295s | byte equality observed |
| test_forward_iterator.test | 10 | 0.002174s | 0.002108s | 0.002069s | byte equality observed |
| test_free.test | 9 | 0.002380s | 0.002308s | 0.002281s | byte equality observed |
| test_increment.test | 10 | 0.002083s | 0.002037s | 0.002035s | byte equality observed |
| test_is_empty.test | 10 | 0.002091s | 0.002020s | 0.002044s | byte equality observed |
| test_less.test | 9 | 0.002531s | 0.002543s | 0.002503s | byte equality observed |
| test_limits.test | 10 | 0.002264s | 0.002193s | 0.002151s | byte equality observed |
| test_member.test | 7 | 0.002731s | 0.002718s | 0.002700s | byte equality observed |
| test_negate.test | 10 | 0.002051s | 0.002041s | 0.001971s | byte equality observed |
| test_nested.test | 9 | 0.002096s | 0.002056s | 0.001992s | byte equality observed |
| test_null.test | 10 | 0.002139s | 0.002061s | 0.002067s | byte equality observed |
| test_reference.test | 7 | 0.002153s | 0.002068s | 0.002128s | byte equality observed |
| test_relaxed.test | 9 | 0.002073s | 0.002013s | 0.002061s | byte equality observed |
| test_same_type.test | 10 | 0.002091s | 0.002094s | 0.002093s | byte equality observed |
| test_stream.test | 8 | 0.002638s | 0.002574s | 0.002569s | byte equality observed |
| test_subscript.test | 10 | 0.002163s | 0.002137s | 0.002085s | byte equality observed |
| test_tuple.test | 10 | 0.002134s | 0.002151s | 0.002093s | byte equality observed |
| test_typeid_of.test | 9 | 0.002191s | 0.002133s | 0.002143s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44667760294).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
