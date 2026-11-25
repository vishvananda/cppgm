# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.238109 | 3.673189 | 4.339941 | 0.001215 | 0.001536 | 0.001234 |
| qi_repo_confix.test | RUN | 1.283593 | 4.909799 | 4.820245 | 0.001257 | 0.001539 | 0.001454 |
| qi_repo_distinct.test | RUN | 0.923230 | 2.574404 | 2.977133 | 0.001265 | 0.001255 | 0.001270 |
| qi_repo_subrule.test | RUN | 2.922991 | 13.379668 | 13.926718 | 0.001722 | 0.001403 | 0.001453 |
| qi_repo_keywords.test | RUN | 2.942798 | 11.256404 | 13.154033 | 0.001168 | 0.001101 | 0.001052 |
| qi_repo_seek.test | RUN | 1.037213 | 3.999073 | 3.508374 | 0.001271 | 0.001362 | 0.001402 |
| karma_repo_confix.test | RUN | 0.949651 | 3.986080 | 3.543532 | 0.001305 | 0.001500 | 0.001412 |
| karma_repo_subrule.test | RUN | 1.676520 | 8.063440 | 6.411909 | 0.001001 | 0.001012 | 0.000974 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.981× | 0.979×, 0.983× | 1.019× |
| clang | 0.983× | 0.985×, 0.980× | 0.989× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45651777895).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.000840s | 0.000831s | 0.000835s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.000883s | 0.000844s | 0.000823s | byte equality observed |
| qi_repo_advance.test | 10 | 0.000848s | 0.000805s | 0.000815s | byte equality observed |
| qi_repo_confix.test | 10 | 0.000870s | 0.000844s | 0.000873s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.000818s | 0.000799s | 0.000809s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.000928s | 0.000891s | 0.000918s | byte equality observed |
| qi_repo_seek.test | 10 | 0.000822s | 0.000815s | 0.000822s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.000873s | 0.000864s | 0.000880s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45651777895).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
