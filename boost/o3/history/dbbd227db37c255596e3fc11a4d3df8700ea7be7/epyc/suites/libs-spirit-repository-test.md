# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.445744 | 4.096272 | 5.214455 | 0.001858 | 0.001753 | 0.001764 |
| qi_repo_confix.test | RUN | 1.486609 | 5.283677 | 5.640835 | 0.001818 | 0.002062 | 0.001888 |
| qi_repo_distinct.test | RUN | 1.095785 | 2.876158 | 3.551162 | 0.001821 | 0.001886 | 0.001714 |
| qi_repo_subrule.test | RUN | 3.529658 | 13.942903 | 14.239025 | 0.001952 | 0.001900 | 0.001862 |
| qi_repo_keywords.test | RUN | 3.317171 | 13.122021 | 14.137239 | 0.001654 | 0.001396 | 0.001112 |
| qi_repo_seek.test | RUN | 1.247318 | 4.376747 | 4.201994 | 0.001681 | 0.001844 | 0.001788 |
| karma_repo_confix.test | RUN | 1.143112 | 4.365128 | 4.122768 | 0.001748 | 0.001932 | 0.001617 |
| karma_repo_subrule.test | RUN | 1.988184 | 7.202143 | 8.172074 | 0.001442 | 0.001451 | 0.001342 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.067×† | 1.001×, 1.133× | 1.010× |
| clang | 1.071×† | 1.000×, 1.142× | 0.977× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44922642903).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.001053s | 0.001124s | 0.001146s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.001082s | 0.001125s | 0.001160s | byte equality observed |
| qi_repo_advance.test | 10 | 0.001010s | 0.001111s | 0.001107s | byte equality observed |
| qi_repo_confix.test | 10 | 0.001171s | 0.001262s | 0.001264s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.001012s | 0.001081s | 0.001082s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.001162s | 0.001201s | 0.001240s | byte equality observed |
| qi_repo_seek.test | 10 | 0.000999s | 0.001088s | 0.001108s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.001080s | 0.001146s | 0.001176s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44922642903).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
