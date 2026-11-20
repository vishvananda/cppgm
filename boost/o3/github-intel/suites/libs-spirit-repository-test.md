# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.674532 | 5.023474 | 5.789847 | 0.001868 | 0.001756 | 0.001729 |
| qi_repo_confix.test | RUN | 1.745371 | 6.637263 | 6.365229 | 0.001714 | 0.002020 | 0.001874 |
| qi_repo_distinct.test | RUN | 1.260241 | 3.498615 | 3.962350 | 0.001806 | 0.001741 | 0.001651 |
| qi_repo_subrule.test | RUN | 4.146986 | 16.971550 | 18.445916 | 0.001897 | 0.001860 | 0.001968 |
| qi_repo_keywords.test | RUN | 4.025282 | 14.712499 | 17.286185 | 0.001404 | 0.001371 | 0.001285 |
| qi_repo_seek.test | RUN | 1.389573 | 5.431122 | 4.721324 | 0.001567 | 0.002011 | 0.001722 |
| karma_repo_confix.test | RUN | 1.270217 | 5.414414 | 4.731789 | 0.001956 | 0.001811 | 0.001782 |
| karma_repo_subrule.test | RUN | 2.046338 | 9.900499 | 8.182960 | 0.001311 | 0.001278 | 0.001348 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.971× | 0.978×, 0.965× | 1.014× |
| clang | 1.011× | 1.026×, 0.995× | 1.011× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44667760294).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.001171s | 0.001184s | 0.001264s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.001236s | 0.001185s | 0.001296s | byte equality observed |
| qi_repo_advance.test | 10 | 0.001204s | 0.001171s | 0.001245s | byte equality observed |
| qi_repo_confix.test | 10 | 0.001340s | 0.001241s | 0.001347s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.001218s | 0.001172s | 0.001234s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.001445s | 0.001342s | 0.001389s | byte equality observed |
| qi_repo_seek.test | 10 | 0.001262s | 0.001230s | 0.001244s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.001328s | 0.001268s | 0.001336s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44667760294).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
