# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.262775 | 3.576626 | 4.356698 | 0.001468 | 0.001325 | 0.001258 |
| qi_repo_confix.test | RUN | 1.311714 | 4.725952 | 4.645113 | 0.001362 | 0.001277 | 0.001233 |
| qi_repo_distinct.test | RUN | 0.944125 | 2.464361 | 2.899963 | 0.001374 | 0.001414 | 0.000971 |
| qi_repo_subrule.test | RUN | 3.105397 | 12.458882 | 13.501385 | 0.001620 | 0.001276 | 0.001232 |
| qi_repo_keywords.test | RUN | 2.998694 | 10.828864 | 12.581425 | 0.001101 | 0.001003 | 0.001010 |
| qi_repo_seek.test | RUN | 1.037283 | 3.893291 | 3.396678 | 0.001260 | 0.001343 | 0.001184 |
| karma_repo_confix.test | RUN | 0.954284 | 3.800290 | 3.415403 | 0.001419 | 0.001343 | 0.001290 |
| karma_repo_subrule.test | RUN | 1.555579 | 7.437082 | 6.051038 | 0.001094 | 0.000945 | 0.000959 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.986× | 0.983×, 0.989× | 0.981× |
| clang | 0.976× | 0.981×, 0.971× | 1.008× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46032707836).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.000838s | 0.000830s | 0.000822s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.000873s | 0.000859s | 0.000877s | byte equality observed |
| qi_repo_advance.test | 10 | 0.000825s | 0.000817s | 0.000818s | byte equality observed |
| qi_repo_confix.test | 10 | 0.000887s | 0.000867s | 0.000838s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.000810s | 0.000796s | 0.000782s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.000946s | 0.000916s | 0.000909s | byte equality observed |
| qi_repo_seek.test | 10 | 0.000819s | 0.000813s | 0.000812s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.000874s | 0.000858s | 0.000870s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46032707836).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
