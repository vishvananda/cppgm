# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.543736 | 4.130646 | 5.787844 | 0.001936 | 0.001817 | 0.001716 |
| qi_repo_confix.test | RUN | 1.616494 | 5.472687 | 6.188801 | 0.002267 | 0.002132 | 0.002172 |
| qi_repo_distinct.test | RUN | 1.169412 | 2.940398 | 3.991222 | 0.002070 | 0.001790 | 0.001865 |
| qi_repo_subrule.test | RUN | 3.894032 | 14.861127 | 17.891028 | 0.002100 | 0.002104 | 0.001546 |
| qi_repo_keywords.test | RUN | 3.468937 | 13.725927 | 14.387613 | 0.001708 | 0.001592 | 0.001541 |
| qi_repo_seek.test | RUN | 1.297773 | 4.592142 | 4.516659 | 0.001688 | 0.001939 | 0.001876 |
| karma_repo_confix.test | RUN | 1.176267 | 4.521585 | 4.550881 | 0.001682 | 0.001944 | 0.001927 |
| karma_repo_subrule.test | RUN | 2.159977 | 8.052239 | 10.357218 | 0.001521 | 0.001379 | 0.001462 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.996×† | 0.925×, 1.067× | 0.870× |
| clang | 1.001×† | 0.940×, 1.063× | 1.061× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44830361139).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.001041s | 0.001030s | 0.001137s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.001153s | 0.001040s | 0.001223s | byte equality observed |
| qi_repo_advance.test | 10 | 0.001081s | 0.001020s | 0.001141s | byte equality observed |
| qi_repo_confix.test | 10 | 0.001225s | 0.001165s | 0.001237s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.001098s | 0.001006s | 0.001154s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.001224s | 0.001132s | 0.001267s | byte equality observed |
| qi_repo_seek.test | 10 | 0.001104s | 0.001003s | 0.001167s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.001133s | 0.001064s | 0.001206s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44830361139).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
