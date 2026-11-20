# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.255493 | 3.628578 | 4.470083 | 0.001501 | 0.001260 | 0.001349 |
| qi_repo_confix.test | RUN | 1.308480 | 4.782922 | 4.845718 | 0.001377 | 0.001365 | 0.001495 |
| qi_repo_distinct.test | RUN | 0.939027 | 2.512723 | 2.960262 | 0.001340 | 0.001392 | 0.001399 |
| qi_repo_subrule.test | RUN | 3.141782 | 12.826801 | 12.499278 | 0.001672 | 0.001540 | 0.001101 |
| qi_repo_keywords.test | RUN | 3.070784 | 12.215243 | 12.716194 | 0.001096 | 0.000981 | 0.001010 |
| qi_repo_seek.test | RUN | 1.055707 | 3.932764 | 3.515141 | 0.001316 | 0.001275 | 0.001384 |
| karma_repo_confix.test | RUN | 0.963361 | 3.894237 | 3.516233 | 0.001675 | 0.001242 | 0.001422 |
| karma_repo_subrule.test | RUN | 1.607266 | 6.338328 | 7.504989 | 0.001075 | 0.000982 | 0.001124 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.975× | 0.976×, 0.974× | 0.987× |
| clang | 0.978× | 0.976×, 0.981× | 1.018× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44656576225).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.000850s | 0.000844s | 0.000820s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.000875s | 0.000874s | 0.000865s | byte equality observed |
| qi_repo_advance.test | 10 | 0.000846s | 0.000829s | 0.000825s | byte equality observed |
| qi_repo_confix.test | 10 | 0.000887s | 0.000855s | 0.000841s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.000832s | 0.000804s | 0.000800s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.000956s | 0.000910s | 0.000897s | byte equality observed |
| qi_repo_seek.test | 10 | 0.000828s | 0.000820s | 0.000819s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.000880s | 0.000875s | 0.000879s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44656576225).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
