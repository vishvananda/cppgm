# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.660095 | 4.849457 | 5.781794 | 0.001860 | 0.001702 | 0.001735 |
| qi_repo_confix.test | RUN | 1.737750 | 6.405783 | 6.213382 | 0.001900 | 0.002002 | 0.001637 |
| qi_repo_distinct.test | RUN | 1.313852 | 3.407318 | 3.924664 | 0.002202 | 0.001724 | 0.001714 |
| qi_repo_subrule.test | RUN | 4.130838 | 15.567234 | 18.055667 | 0.001390 | 0.001369 | 0.001741 |
| qi_repo_keywords.test | RUN | 3.942325 | 15.758637 | 14.108790 | 0.001406 | 0.001441 | 0.001303 |
| qi_repo_seek.test | RUN | 1.395144 | 5.388213 | 4.593062 | 0.001484 | 0.001798 | 0.001589 |
| karma_repo_confix.test | RUN | 1.274100 | 5.349142 | 4.566421 | 0.001593 | 0.001739 | 0.001599 |
| karma_repo_subrule.test | RUN | 1.955338 | 9.166107 | 10.594392 | 0.001260 | 0.001340 | 0.001185 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.009×† | 1.043×, 0.975× | 1.035× |
| clang | 1.131× | 1.152×, 1.110× | 1.047× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45754596224).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.001103s | 0.001073s | 0.001229s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.001127s | 0.001123s | 0.001275s | byte equality observed |
| qi_repo_advance.test | 10 | 0.001034s | 0.001064s | 0.001187s | byte equality observed |
| qi_repo_confix.test | 10 | 0.001144s | 0.001163s | 0.001299s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.001021s | 0.001072s | 0.001208s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.001207s | 0.001225s | 0.001368s | byte equality observed |
| qi_repo_seek.test | 10 | 0.001043s | 0.001088s | 0.001188s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.001108s | 0.001226s | 0.001312s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45754596224).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
