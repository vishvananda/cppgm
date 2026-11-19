# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.620965 | 4.854214 | 5.781090 | 0.001590 | 0.001699 | 0.001713 |
| qi_repo_confix.test | RUN | 1.686871 | 6.495446 | 6.279254 | 0.001714 | 0.001922 | 0.001882 |
| qi_repo_distinct.test | RUN | 1.223377 | 3.418757 | 3.906531 | 0.001760 | 0.001811 | 0.001713 |
| qi_repo_subrule.test | RUN | 4.068334 | 15.266527 | 15.838955 | 0.001364 | 0.001350 | 0.001282 |
| qi_repo_keywords.test | RUN | 3.770439 | 15.485267 | 16.040577 | 0.001443 | 0.001396 | 0.001349 |
| qi_repo_seek.test | RUN | 1.438949 | 5.340260 | 4.638529 | 0.001515 | 0.001875 | 0.001515 |
| karma_repo_confix.test | RUN | 1.289874 | 5.294941 | 4.631022 | 0.001731 | 0.001810 | 0.001766 |
| karma_repo_subrule.test | RUN | 2.222785 | 9.436555 | 9.624974 | 0.001306 | 0.001318 | 0.001194 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.954×† | 0.901×, 1.006× | 1.017× |
| clang | 1.115×† | 1.108×, 1.123× | 1.139× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44597827043).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 8 | 0.001073s | 0.001133s | 0.001228s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.001101s | 0.001095s | 0.001237s | byte equality observed |
| qi_repo_advance.test | 10 | 0.001046s | 0.001053s | 0.001185s | byte equality observed |
| qi_repo_confix.test | 10 | 0.001126s | 0.001134s | 0.001249s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.001026s | 0.001019s | 0.001174s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.001209s | 0.001159s | 0.001317s | byte equality observed |
| qi_repo_seek.test | 10 | 0.001087s | 0.001019s | 0.001165s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.001143s | 0.001150s | 0.001295s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44597827043).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
