# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.201210 | 3.595216 | 4.244876 | 0.001177 | 0.001358 | 0.001323 |
| qi_repo_confix.test | RUN | 1.248313 | 4.777969 | 4.577099 | 0.001294 | 0.001431 | 0.001218 |
| qi_repo_distinct.test | RUN | 0.896170 | 2.516332 | 2.888419 | 0.001331 | 0.001286 | 0.001229 |
| qi_repo_subrule.test | RUN | 2.981022 | 11.651442 | 11.717294 | 0.001395 | 0.000996 | 0.000919 |
| qi_repo_keywords.test | RUN | 2.789234 | 11.745342 | 11.990842 | 0.001042 | 0.000994 | 0.001024 |
| qi_repo_seek.test | RUN | 1.008865 | 3.902226 | 3.361749 | 0.001124 | 0.001237 | 0.001224 |
| karma_repo_confix.test | RUN | 0.929385 | 3.888129 | 3.418697 | 0.001187 | 0.001498 | 0.001124 |
| karma_repo_subrule.test | RUN | 1.641432 | 7.214528 | 7.330244 | 0.000969 | 0.000936 | 0.000865 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.003× | 0.997×, 1.008× | 0.986× |
| clang | 1.004× | 1.010×, 0.999× | 1.019× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45241427099).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.000840s | 0.000835s | 0.000865s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.000853s | 0.000862s | 0.000882s | byte equality observed |
| qi_repo_advance.test | 10 | 0.000798s | 0.000836s | 0.000817s | byte equality observed |
| qi_repo_confix.test | 10 | 0.000856s | 0.000847s | 0.000836s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.000806s | 0.000818s | 0.000798s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.000947s | 0.000906s | 0.000928s | byte equality observed |
| qi_repo_seek.test | 10 | 0.000823s | 0.000839s | 0.000831s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.000879s | 0.000883s | 0.000893s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45241427099).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
