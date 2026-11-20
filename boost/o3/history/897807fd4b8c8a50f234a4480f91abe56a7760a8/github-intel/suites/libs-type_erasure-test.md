# libs/type_erasure/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| test_binding.test | RUN | 0.407664 | 1.770328 | 1.514158 | 0.001812 | 0.002064 | 0.002242 |
| test_increment.test | RUN | 0.404616 | 1.341843 | 1.313426 | 0.002046 | 0.002207 | 0.002133 |
| test_add.test | RUN | 0.496057 | 2.163361 | 1.951725 | 0.002102 | 0.002357 | 0.002091 |
| test_add_assign.test | RUN | 0.515031 | 2.303112 | 2.036398 | 0.002561 | 0.002264 | 0.002348 |
| test_callable.test | RUN | 0.881405 | 3.999182 | 4.505126 | 0.003008 | 0.003194 | 0.003076 |
| test_reference.test | RUN | 0.394798 | 1.600862 | 1.348350 | 0.002118 | 0.002270 | 0.002093 |
| test_construct.test | RUN | 1.982618 | 18.478911 | 13.469197 | 0.004110 | 0.004036 | 0.003872 |
| test_relaxed.test | RUN | 0.387447 | 1.133017 | 1.207104 | 0.001848 | 0.002055 | 0.002051 |
| test_assign.test | RUN | 5.183982 | 61.181312 | 48.170973 | 0.006313 | 0.003754 | 0.004353 |
| test_construct_ref.test | RUN | 0.509374 | 2.872646 | 1.944287 | 0.002477 | 0.002536 | 0.002444 |
| test_construct_cref.test | RUN | 0.562489 | 2.610461 | 2.492931 | 0.002684 | 0.002777 | 0.002790 |
| test_any_cast.test | RUN | 0.470659 | 2.776793 | 1.913398 | 0.002678 | 0.002376 | 0.002421 |
| test_binding_of.test | RUN | 0.365163 | 1.028783 | 1.110563 | 0.002042 | 0.002251 | 0.002051 |
| test_typeid_of.test | RUN | 0.405924 | 1.532893 | 1.296026 | 0.002414 | 0.002163 | 0.002213 |
| test_nested.test | RUN | 0.433019 | 1.483521 | 1.476877 | 0.002160 | 0.002047 | 0.002161 |
| test_less.test | RUN | 0.566963 | 2.916758 | 2.466894 | 0.002506 | 0.002736 | 0.002608 |
| test_equal.test | RUN | 0.552278 | 2.836148 | 2.045236 | 0.002382 | 0.002599 | 0.002390 |
| test_negate.test | RUN | 0.372485 | 1.103465 | 1.184998 | 0.001966 | 0.002178 | 0.001936 |
| test_dereference.test | RUN | 0.418869 | 1.485450 | 1.346150 | 0.002096 | 0.002224 | 0.002087 |
| test_subscript.test | RUN | 0.453326 | 1.652692 | 1.467469 | 0.002246 | 0.002354 | 0.002082 |
| test_forward_iterator.test | RUN | 0.504237 | 1.845414 | 1.619373 | 0.002183 | 0.002220 | 0.002163 |
| test_tuple.test | RUN | 0.442309 | 1.879198 | 1.548958 | 0.002005 | 0.002289 | 0.002268 |
| test_stream.test | RUN | 0.622471 | 3.056236 | 2.463360 | 0.002944 | 0.002756 | 0.002764 |
| test_deduced.test | RUN | 0.369167 | 1.092646 | 1.153018 | 0.001970 | 0.002225 | 0.002234 |
| test_same_type.test | RUN | 0.419956 | 1.490057 | 1.451182 | 0.001814 | 0.002070 | 0.002230 |
| test_member.test | RUN | 0.564883 | 2.995000 | 2.271222 | 0.002893 | 0.002993 | 0.002811 |
| test_null.test | RUN | 0.417445 | 1.434702 | 1.220259 | 0.002278 | 0.002311 | 0.002176 |
| test_free.test | RUN | 0.479507 | 2.478853 | 1.763122 | 0.002269 | 0.002494 | 0.002514 |
| test_is_empty.test | RUN | 0.364740 | 1.200216 | 1.148768 | 0.002257 | 0.002058 | 0.002181 |
| test_dynamic_any_cast.test | RUN | 0.738142 | 3.534995 | 3.343889 | 0.002589 | 0.002711 | 0.002927 |
| test_limits.test | RUN | 0.628825 | 2.459332 | 2.306192 | 0.002078 | 0.002171 | 0.002348 |
| test_param.test | COMPILE | 0.248931 | 0.668619 | 0.745521 | — | — | — |
| test_is_subconcept.test | COMPILE | 0.240876 | 0.513978 | 0.635144 | — | — | — |
| test_sfinae.test | COMPILE | 0.237319 | 0.510382 | 0.669902 | — | — | — |
| test_interface_order.test | COMPILE | 0.228861 | 0.513620 | 0.636721 | — | — | — |
| test_is_placeholder.test | COMPILE | 0.027453 | 0.047642 | 0.055549 | — | — | — |
| fail_default_construct.test | COMPILE_FAIL | 0.230348 | 0.500537 | 0.610706 | — | — | — |
| fail_construct_mismatch.test | COMPILE_FAIL | 0.228061 | 0.498158 | 0.614988 | — | — | — |
| fail_construct_mismatch_ref.test | COMPILE_FAIL | 0.223433 | 0.497570 | 0.574201 | — | — | — |
| fail_construct_mismatch_cref.test | COMPILE_FAIL | 0.223020 | 0.489946 | 0.604834 | — | — | — |
| fail_construct_mismatch_rref.test | COMPILE_FAIL | 0.225779 | 0.497513 | 0.601698 | — | — | — |
| fail_binding_convert_no_mapping.test | COMPILE_FAIL | 0.222777 | 0.471182 | 0.556385 | — | — | — |
| fail_increment_discard_const.test | COMPILE_FAIL | 0.226385 | 0.491231 | 0.611715 | — | — | — |
| fail_not_incrementable.test | COMPILE_FAIL | 0.235427 | 0.514957 | 0.606733 | — | — | — |
| fail_ref_assign.test | COMPILE_FAIL | 0.229587 | 0.475488 | 0.588435 | — | — | — |
| fail_cref_assign.test | COMPILE_FAIL | 0.226263 | 0.483758 | 0.612270 | — | — | — |
| fail_rref_assign.test | COMPILE_FAIL | 0.224720 | 0.491757 | 0.598587 | — | — | — |
| fail_ref_discard_const.test | COMPILE_FAIL | 0.224835 | 0.499832 | 0.616528 | — | — | — |
| fail_ref_discard_const_convert.test | COMPILE_FAIL | 0.235213 | 0.518595 | 0.630018 | — | — | — |
| fail_ref_discard_const_convert_ref.test | COMPILE_FAIL | 0.231517 | 0.526598 | 0.601151 | — | — | — |
| fail_ref_discard_const_convert_cref.test | COMPILE_FAIL | 0.232704 | 0.516723 | 0.627490 | — | — | — |
| fail_ref_discard_const_init.test | COMPILE_FAIL | 0.224623 | 0.492635 | 0.593216 | — | — | — |
| fail_any_cast_discard_const1.test | COMPILE_FAIL | 0.231183 | 0.499615 | 0.624754 | — | — | — |
| fail_any_cast_discard_const2.test | COMPILE_FAIL | 0.234406 | 0.501134 | 0.624586 | — | — | — |
| fail_any_cast_discard_const3.test | COMPILE_FAIL | 0.232411 | 0.511510 | 0.624713 | — | — | — |
| fail_any_cast_discard_const4.test | COMPILE_FAIL | 0.229981 | 0.506737 | 0.609799 | — | — | — |
| fail_any_cast_discard_const5.test | COMPILE_FAIL | 0.237180 | 0.503237 | 0.631553 | — | — | — |
| fail_any_cast_discard_const6.test | COMPILE_FAIL | 0.232222 | 0.511835 | 0.630885 | — | — | — |
| fail_any_cast_pointer_to_ref.test | COMPILE_FAIL | 0.187232 | 0.509555 | 0.636171 | — | — | — |
| fail_any_cast_pointer_to_val.test | COMPILE_FAIL | 0.171567 | 0.369455 | 0.539967 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.973× | 0.978×, 0.968× | 0.997× |
| clang | 0.967× | 0.965×, 0.969× | 0.994× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44780058957).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| test_add.test | 10 | 0.001367s | 0.001344s | 0.001307s | byte equality observed |
| test_add_assign.test | 10 | 0.001332s | 0.001350s | 0.001303s | byte equality observed |
| test_any_cast.test | 10 | 0.001468s | 0.001431s | 0.001437s | byte equality observed |
| test_assign.test | 5 | 0.003901s | 0.003262s | 0.003808s | byte equality observed |
| test_binding.test | 10 | 0.001296s | 0.001280s | 0.001218s | byte equality observed |
| test_binding_of.test | 10 | 0.001255s | 0.001223s | 0.001214s | byte equality observed |
| test_callable.test | 10 | 0.001707s | 0.001687s | 0.001673s | byte equality observed |
| test_construct.test | 8 | 0.002189s | 0.002164s | 0.002167s | byte equality observed |
| test_construct_cref.test | 10 | 0.001635s | 0.001623s | 0.001609s | byte equality observed |
| test_construct_ref.test | 10 | 0.001493s | 0.001475s | 0.001422s | byte equality observed |
| test_deduced.test | 10 | 0.001272s | 0.001271s | 0.001252s | byte equality observed |
| test_dereference.test | 10 | 0.001302s | 0.001269s | 0.001251s | byte equality observed |
| test_dynamic_any_cast.test | 10 | 0.001594s | 0.001596s | 0.001586s | byte equality observed |
| test_equal.test | 10 | 0.001468s | 0.001383s | 0.001390s | byte equality observed |
| test_forward_iterator.test | 10 | 0.001307s | 0.001266s | 0.001280s | byte equality observed |
| test_free.test | 10 | 0.001411s | 0.001375s | 0.001345s | byte equality observed |
| test_increment.test | 10 | 0.001303s | 0.001297s | 0.001261s | byte equality observed |
| test_is_empty.test | 10 | 0.001291s | 0.001240s | 0.001210s | byte equality observed |
| test_less.test | 10 | 0.001478s | 0.001514s | 0.001449s | byte equality observed |
| test_limits.test | 10 | 0.001364s | 0.001315s | 0.001342s | byte equality observed |
| test_member.test | 10 | 0.001629s | 0.001606s | 0.001543s | byte equality observed |
| test_negate.test | 10 | 0.001268s | 0.001227s | 0.001245s | byte equality observed |
| test_nested.test | 10 | 0.001263s | 0.001237s | 0.001196s | byte equality observed |
| test_null.test | 10 | 0.001304s | 0.001310s | 0.001239s | byte equality observed |
| test_reference.test | 10 | 0.001296s | 0.001301s | 0.001263s | byte equality observed |
| test_relaxed.test | 10 | 0.001252s | 0.001239s | 0.001217s | byte equality observed |
| test_same_type.test | 10 | 0.001296s | 0.001288s | 0.001273s | byte equality observed |
| test_stream.test | 10 | 0.001541s | 0.001561s | 0.001524s | byte equality observed |
| test_subscript.test | 10 | 0.001349s | 0.001317s | 0.001274s | byte equality observed |
| test_tuple.test | 10 | 0.001297s | 0.001257s | 0.001268s | byte equality observed |
| test_typeid_of.test | 10 | 0.001327s | 0.001313s | 0.001258s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44780058957).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
