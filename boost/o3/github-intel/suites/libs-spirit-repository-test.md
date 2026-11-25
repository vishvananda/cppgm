# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.236936 | 3.702068 | 4.370531 | 0.001423 | 0.001375 | 0.001380 |
| qi_repo_confix.test | RUN | 1.287852 | 4.852924 | 4.820042 | 0.001444 | 0.001449 | 0.001417 |
| qi_repo_distinct.test | RUN | 0.934098 | 2.554971 | 2.967364 | 0.001309 | 0.001371 | 0.001427 |
| qi_repo_subrule.test | RUN | 3.097433 | 12.113137 | 14.022927 | 0.001460 | 0.001041 | 0.001411 |
| qi_repo_keywords.test | RUN | 2.934554 | 12.026534 | 11.131439 | 0.001132 | 0.001063 | 0.001044 |
| qi_repo_seek.test | RUN | 1.035041 | 3.991050 | 3.514467 | 0.001330 | 0.001447 | 0.001182 |
| karma_repo_confix.test | RUN | 0.947837 | 4.002567 | 3.542542 | 0.001263 | 0.001390 | 0.001358 |
| karma_repo_subrule.test | RUN | 1.581363 | 7.652628 | 8.248102 | 0.001146 | 0.000961 | 0.000943 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.998× | 1.008×, 0.988× | 0.994× |
| clang | 0.995× | 0.982×, 1.008× | 0.991× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45697047144).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.000856s | 0.000847s | 0.000881s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.000860s | 0.000887s | 0.000838s | byte equality observed |
| qi_repo_advance.test | 10 | 0.000835s | 0.000858s | 0.000824s | byte equality observed |
| qi_repo_confix.test | 10 | 0.000881s | 0.000864s | 0.000859s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.000824s | 0.000796s | 0.000850s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.000949s | 0.000909s | 0.000930s | byte equality observed |
| qi_repo_seek.test | 10 | 0.000831s | 0.000829s | 0.000821s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.000882s | 0.000876s | 0.000882s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45697047144).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
