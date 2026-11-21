# libs/proto/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| calculator.test | RUN | 0.543173 | 1.382278 | 1.693207 | 0.002786 | 0.003071 | 0.002908 |
| constrained_ops.test | RUN | 0.612790 | 1.498657 | 1.876605 | 0.002725 | 0.003013 | 0.002869 |
| cpp-next_bug.test | RUN | 0.621375 | 1.558719 | 1.945510 | 0.002748 | 0.003050 | 0.003119 |
| deep_copy.test | RUN | 0.531590 | 1.383838 | 1.678113 | 0.002719 | 0.002680 | 0.003073 |
| display_expr.test | RUN | 0.635608 | 1.736847 | 1.934550 | 0.003070 | 0.002879 | 0.003246 |
| deduce_domain.test | RUN | 0.501348 | 1.183503 | 1.530925 | 0.002903 | 0.002810 | 0.002789 |
| env_var.test | RUN | 0.676138 | 2.900048 | 2.442469 | 0.003392 | 0.003368 | 0.003405 |
| examples.test | RUN | 0.644183 | 1.932458 | 2.285429 | 0.002802 | 0.002756 | 0.003065 |
| external_transforms.test | RUN | 0.641931 | 1.621309 | 2.026016 | 0.002988 | 0.002536 | 0.003224 |
| lambda.test | RUN | 0.620560 | 1.631797 | 2.095835 | 0.002791 | 0.002836 | 0.002855 |
| make_expr.test | RUN | 0.618567 | 2.661430 | 2.111253 | 0.003648 | 0.003926 | 0.003980 |
| matches.test | RUN | 0.570487 | 1.361403 | 1.783437 | 0.002807 | 0.002977 | 0.003069 |
| flatten.test | RUN | 1.050615 | 3.878064 | 4.359928 | 0.003101 | 0.003327 | 0.003099 |
| switch.test | RUN | 0.550525 | 1.353556 | 1.666371 | 0.002988 | 0.003132 | 0.003051 |
| toy_spirit.test | RUN | 0.614277 | 1.724254 | 2.101221 | 0.003144 | 0.003143 | 0.003070 |
| toy_spirit2.test | RUN | 0.679785 | 1.801263 | 2.324213 | 0.002863 | 0.003122 | 0.002224 |
| make.test | RUN | 0.533436 | 1.694164 | 1.647492 | 0.003370 | 0.003600 | 0.003404 |
| mem_ptr.test | RUN | 0.685534 | 2.823251 | 2.421861 | 0.003365 | 0.003701 | 0.003509 |
| mpl.test | RUN | 0.610824 | 1.430403 | 1.849569 | 0.002772 | 0.002874 | 0.003027 |
| noinvoke.test | RUN | 0.517248 | 1.203570 | 1.542148 | 0.002781 | 0.003142 | 0.002849 |
| pack_expansion.test | RUN | 0.566228 | 1.684894 | 1.998226 | 0.002381 | 0.002405 | 0.003172 |
| protect.test | RUN | 0.480056 | 1.330209 | 1.007699 | 0.002312 | 0.002360 | 0.002252 |
| bug2407.test | COMPILE | 0.455381 | 0.894096 | 1.086468 | — | — | — |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.037×† | 1.085×, 0.989× | 0.923× |
| clang | 0.979× | 0.979×, 0.979× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44815881069).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| calculator.test | 10 | 0.001685s | 0.001683s | 0.001611s | byte equality observed |
| constrained_ops.test | 10 | 0.001635s | 0.001646s | 0.001627s | byte equality observed |
| cpp-next_bug.test | 10 | 0.001659s | 0.001615s | 0.001616s | byte equality observed |
| deduce_domain.test | 10 | 0.001655s | 0.001721s | 0.001634s | byte equality observed |
| deep_copy.test | 10 | 0.001640s | 0.001648s | 0.001630s | byte equality observed |
| display_expr.test | 10 | 0.001624s | 0.001724s | 0.001631s | byte equality observed |
| env_var.test | 10 | 0.001944s | 0.001937s | 0.001930s | byte equality observed |
| examples.test | 10 | 0.001703s | 0.001698s | 0.001661s | byte equality observed |
| external_transforms.test | 10 | 0.001671s | 0.001726s | 0.001628s | byte equality observed |
| flatten.test | 10 | 0.001718s | 0.001719s | 0.001673s | byte equality observed |
| lambda.test | 10 | 0.001628s | 0.001658s | 0.001652s | byte equality observed |
| make.test | 10 | 0.001842s | 0.001839s | 0.001809s | byte equality observed |
| make_expr.test | 10 | 0.002061s | 0.002037s | 0.002036s | byte equality observed |
| matches.test | 10 | 0.001652s | 0.001629s | 0.001586s | byte equality observed |
| mem_ptr.test | 10 | 0.001944s | 0.001948s | 0.001926s | byte equality observed |
| mpl.test | 10 | 0.001642s | 0.001647s | 0.001604s | byte equality observed |
| noinvoke.test | 10 | 0.001643s | 0.001620s | 0.001600s | byte equality observed |
| pack_expansion.test | 10 | 0.001708s | 0.001722s | 0.001659s | byte equality observed |
| protect.test | 10 | 0.001713s | 0.001699s | 0.001670s | byte equality observed |
| switch.test | 10 | 0.001658s | 0.001596s | 0.001616s | byte equality observed |
| toy_spirit.test | 10 | 0.001700s | 0.001657s | 0.001629s | byte equality observed |
| toy_spirit2.test | 9 | 0.001666s | 0.001673s | 0.001630s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44815881069).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
