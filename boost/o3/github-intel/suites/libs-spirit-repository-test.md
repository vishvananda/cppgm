# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.288852 | 3.726571 | 4.389084 | 0.001422 | 0.001492 | 0.001271 |
| qi_repo_confix.test | RUN | 1.332207 | 4.901344 | 4.800511 | 0.001346 | 0.001605 | 0.001407 |
| qi_repo_distinct.test | RUN | 0.964645 | 2.582516 | 2.942238 | 0.001378 | 0.001436 | 0.001382 |
| qi_repo_subrule.test | RUN | 3.084753 | 13.363137 | 12.328721 | 0.001880 | 0.001472 | 0.001684 |
| qi_repo_keywords.test | RUN | 3.023755 | 11.512267 | 12.474204 | 0.001135 | 0.001085 | 0.001092 |
| qi_repo_seek.test | RUN | 1.081328 | 4.048772 | 3.482638 | 0.001189 | 0.001443 | 0.001248 |
| karma_repo_confix.test | RUN | 0.992101 | 3.987386 | 3.481460 | 0.001425 | 0.001371 | 0.001451 |
| karma_repo_subrule.test | RUN | 1.718976 | 7.678680 | 7.661566 | 0.001138 | 0.000979 | 0.000976 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.010× | 1.012×, 1.008× | 1.010× |
| clang | 0.995× | 0.986×, 1.005× | 0.985× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46092715613).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.000854s | 0.000867s | 0.000840s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.000862s | 0.000884s | 0.000863s | byte equality observed |
| qi_repo_advance.test | 10 | 0.000828s | 0.000855s | 0.000826s | byte equality observed |
| qi_repo_confix.test | 10 | 0.000860s | 0.000874s | 0.000879s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.000813s | 0.000802s | 0.000843s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.000956s | 0.000950s | 0.000904s | byte equality observed |
| qi_repo_seek.test | 10 | 0.000824s | 0.000848s | 0.000823s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.000885s | 0.000879s | 0.000888s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46092715613).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
