# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.453512 | 1.187550 | 1.333606 | 0.002477 | 0.002257 | 0.001990 |
| constrained_ops.test | RUN | 0.516190 | 1.268335 | 1.490964 | 0.002017 | 0.002004 | 0.002086 |
| cpp-next_bug.test | RUN | 0.522941 | 1.363049 | 1.535354 | 0.002064 | 0.001983 | 0.002036 |
| deep_copy.test | RUN | 0.436524 | 1.178716 | 1.356940 | 0.002246 | 0.001847 | 0.002300 |
| display_expr.test | RUN | 0.539956 | 1.494592 | 1.631226 | 0.002397 | 0.002102 | 0.002121 |
| deduce_domain.test | RUN | 0.419057 | 1.052239 | 1.230999 | 0.002257 | 0.002036 | 0.002007 |
| env_var.test | RUN | 0.588801 | 2.612345 | 1.942995 | 0.002401 | 0.002324 | 0.002254 |
| examples.test | RUN | 0.552382 | 1.669304 | 1.819158 | 0.002082 | 0.001943 | 0.002041 |
| external_transforms.test | RUN | 0.540845 | 1.433737 | 1.653953 | 0.002486 | 0.002151 | 0.002276 |
| lambda.test | RUN | 0.523561 | 1.457205 | 1.668635 | 0.002506 | 0.002226 | 0.002070 |
| make_expr.test | RUN | 0.541416 | 2.417512 | 1.763780 | 0.002420 | 0.002567 | 0.002420 |
| matches.test | RUN | 0.470427 | 1.204640 | 1.437750 | 0.002095 | 0.002208 | 0.002149 |
| flatten.test | RUN | 0.906582 | 3.539027 | 3.578465 | 0.002220 | 0.002208 | 0.002036 |
| switch.test | RUN | 0.452370 | 1.189077 | 1.349157 | 0.002137 | 0.002097 | 0.001974 |
| toy_spirit.test | RUN | 0.527128 | 1.529525 | 1.738154 | 0.002206 | 0.002274 | 0.002213 |
| toy_spirit2.test | RUN | 0.564072 | 1.612003 | 1.886375 | 0.002155 | 0.002277 | 0.001961 |
| make.test | RUN | 0.443586 | 1.525983 | 1.339550 | 0.002451 | 0.002416 | 0.002258 |
| mem_ptr.test | RUN | 0.582163 | 2.552395 | 1.967160 | 0.002391 | 0.002378 | 0.002528 |
| mpl.test | RUN | 0.516508 | 1.238956 | 1.486348 | 0.001966 | 0.002289 | 0.002004 |
| noinvoke.test | RUN | 0.432402 | 1.068427 | 1.210486 | 0.002198 | 0.002175 | 0.001972 |
| pack_expansion.test | RUN | 0.529907 | 1.563137 | 1.487603 | 0.001816 | 0.002350 | 0.001508 |
| protect.test | RUN | 0.326386 | 1.078954 | 1.058887 | 0.001653 | 0.001545 | 0.001577 |
| bug2407.test | COMPILE | 0.389454 | 0.703582 | 0.863589 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.984× | 0.984×, 0.983× | 1.002× |
| clang | 0.970× | 0.962×, 0.979× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44656576225).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001299s | 0.001272s | 0.001247s | byte equality observed |
| constrained_ops.test | 10 | 0.001275s | 0.001243s | 0.001234s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001259s | 0.001235s | 0.001229s | byte equality observed |
| deduce_domain.test | 10 | 0.001257s | 0.001223s | 0.001231s | byte equality observed |
| deep_copy.test | 10 | 0.001251s | 0.001251s | 0.001236s | byte equality observed |
| display_expr.test | 10 | 0.001281s | 0.001241s | 0.001219s | byte equality observed |
| env_var.test | 10 | 0.001387s | 0.001354s | 0.001317s | byte equality observed |
| examples.test | 10 | 0.001279s | 0.001259s | 0.001217s | byte equality observed |
| external_transforms.test | 10 | 0.001257s | 0.001274s | 0.001244s | byte equality observed |
| flatten.test | 10 | 0.001299s | 0.001277s | 0.001247s | byte equality observed |
| lambda.test | 10 | 0.001256s | 0.001264s | 0.001230s | byte equality observed |
| make.test | 10 | 0.001325s | 0.001316s | 0.001271s | byte equality observed |
| make_expr.test | 10 | 0.001417s | 0.001400s | 0.001383s | byte equality observed |
| matches.test | 10 | 0.001259s | 0.001268s | 0.001254s | byte equality observed |
| mem_ptr.test | 10 | 0.001364s | 0.001387s | 0.001335s | byte equality observed |
| mpl.test | 10 | 0.001270s | 0.001263s | 0.001221s | byte equality observed |
| noinvoke.test | 10 | 0.001275s | 0.001264s | 0.001197s | byte equality observed |
| pack_expansion.test | 10 | 0.001286s | 0.001258s | 0.001232s | byte equality observed |
| protect.test | 10 | 0.001288s | 0.001285s | 0.001226s | byte equality observed |
| switch.test | 10 | 0.001257s | 0.001240s | 0.001214s | byte equality observed |
| toy_spirit.test | 10 | 0.001271s | 0.001267s | 0.001228s | byte equality observed |
| toy_spirit2.test | 10 | 0.001270s | 0.001267s | 0.001219s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44656576225).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
