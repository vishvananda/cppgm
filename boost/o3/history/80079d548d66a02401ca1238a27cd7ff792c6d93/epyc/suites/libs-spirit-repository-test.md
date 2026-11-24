# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.482101 | 4.104553 | 5.261160 | 0.001753 | 0.001752 | 0.001826 |
| qi_repo_confix.test | RUN | 1.532818 | 5.326146 | 5.593002 | 0.001688 | 0.002033 | 0.001731 |
| qi_repo_distinct.test | RUN | 1.105019 | 2.876407 | 3.605576 | 0.001839 | 0.001938 | 0.001777 |
| qi_repo_subrule.test | RUN | 3.522121 | 13.743651 | 14.059736 | 0.002266 | 0.001978 | 0.001952 |
| qi_repo_keywords.test | RUN | 3.225680 | 13.271058 | 14.211816 | 0.001595 | 0.001444 | 0.001436 |
| qi_repo_seek.test | RUN | 1.204224 | 4.507021 | 4.243968 | 0.001578 | 0.001962 | 0.001858 |
| karma_repo_confix.test | RUN | 1.106304 | 4.420300 | 4.181601 | 0.001768 | 0.001796 | 0.001812 |
| karma_repo_subrule.test | RUN | 1.943012 | 7.482912 | 8.580682 | 0.001406 | 0.001344 | 0.001323 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.960×† | 0.920×, 0.999× | 1.008× |
| clang | 1.003×† | 0.938×, 1.068× | 0.859× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45272062060).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.001057s | 0.001048s | 0.001061s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.001080s | 0.001046s | 0.001114s | byte equality observed |
| qi_repo_advance.test | 10 | 0.001013s | 0.001010s | 0.001008s | byte equality observed |
| qi_repo_confix.test | 10 | 0.001146s | 0.001140s | 0.001158s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.001020s | 0.001005s | 0.000993s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.001152s | 0.001124s | 0.001137s | byte equality observed |
| qi_repo_seek.test | 10 | 0.001008s | 0.001005s | 0.001031s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.001084s | 0.001040s | 0.001066s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45272062060).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
