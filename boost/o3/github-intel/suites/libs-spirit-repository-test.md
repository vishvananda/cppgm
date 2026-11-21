# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.217768 | 3.546338 | 4.352879 | 0.001335 | 0.001358 | 0.001337 |
| qi_repo_confix.test | RUN | 1.261681 | 4.820508 | 4.741342 | 0.001357 | 0.001338 | 0.001469 |
| qi_repo_distinct.test | RUN | 0.914578 | 2.507612 | 2.909560 | 0.001409 | 0.001251 | 0.001065 |
| qi_repo_subrule.test | RUN | 2.875899 | 11.807411 | 13.022345 | 0.001009 | 0.000941 | 0.001044 |
| qi_repo_keywords.test | RUN | 2.904076 | 11.429431 | 12.015007 | 0.001015 | 0.001040 | 0.001068 |
| qi_repo_seek.test | RUN | 1.022055 | 3.877265 | 3.465794 | 0.001333 | 0.001253 | 0.001240 |
| karma_repo_confix.test | RUN | 0.931530 | 3.826526 | 3.471157 | 0.001471 | 0.001366 | 0.001359 |
| karma_repo_subrule.test | RUN | 1.625486 | 7.213737 | 8.026635 | 0.000959 | 0.000949 | 0.001013 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.002× | 0.999×, 1.006× | 0.990× |
| clang | 0.986× | 0.987×, 0.986× | 0.991× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44818861403).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.000829s | 0.000828s | 0.000811s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.000858s | 0.000849s | 0.000860s | byte equality observed |
| qi_repo_advance.test | 10 | 0.000815s | 0.000832s | 0.000824s | byte equality observed |
| qi_repo_confix.test | 10 | 0.000844s | 0.000856s | 0.000847s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.000797s | 0.000791s | 0.000818s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.000929s | 0.000902s | 0.000891s | byte equality observed |
| qi_repo_seek.test | 10 | 0.000821s | 0.000819s | 0.000805s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.000868s | 0.000859s | 0.000864s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44818861403).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
