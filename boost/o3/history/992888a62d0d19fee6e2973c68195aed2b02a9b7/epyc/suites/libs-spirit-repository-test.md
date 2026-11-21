# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.416552 | 4.185260 | 5.245734 | 0.001744 | 0.001892 | 0.001736 |
| qi_repo_confix.test | RUN | 1.458795 | 5.442635 | 5.554771 | 0.001738 | 0.002022 | 0.001876 |
| qi_repo_distinct.test | RUN | 1.076776 | 2.890672 | 3.563596 | 0.001718 | 0.001873 | 0.001696 |
| qi_repo_subrule.test | RUN | 3.327101 | 13.344659 | 15.907703 | 0.001479 | 0.001549 | 0.001903 |
| qi_repo_keywords.test | RUN | 3.286581 | 13.487996 | 12.630136 | 0.001482 | 0.001513 | 0.001411 |
| qi_repo_seek.test | RUN | 1.245947 | 4.454077 | 4.200483 | 0.001615 | 0.002075 | 0.001562 |
| karma_repo_confix.test | RUN | 1.173977 | 4.414659 | 4.166758 | 0.001669 | 0.001871 | 0.001774 |
| karma_repo_subrule.test | RUN | 1.860348 | 8.206698 | 9.233615 | 0.001335 | 0.001348 | 0.001301 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.996× | 0.984×, 1.009× | 1.034× |
| clang | 0.949×† | 0.906×, 0.992× | 0.981× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44813597235).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.001031s | 0.001023s | 0.001027s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.001057s | 0.001078s | 0.001055s | byte equality observed |
| qi_repo_advance.test | 10 | 0.001023s | 0.001014s | 0.000994s | byte equality observed |
| qi_repo_confix.test | 10 | 0.001150s | 0.001121s | 0.001133s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.000997s | 0.001027s | 0.000994s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.001158s | 0.001109s | 0.001121s | byte equality observed |
| qi_repo_seek.test | 10 | 0.001026s | 0.001054s | 0.001012s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.001072s | 0.001039s | 0.001074s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44813597235).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
