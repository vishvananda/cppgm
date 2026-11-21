# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.420629 | 4.094067 | 5.238206 | 0.001742 | 0.001755 | 0.001752 |
| qi_repo_confix.test | RUN | 1.495008 | 5.323136 | 5.666961 | 0.001933 | 0.001979 | 0.001904 |
| qi_repo_distinct.test | RUN | 1.078735 | 2.843249 | 3.591866 | 0.001834 | 0.001850 | 0.001674 |
| qi_repo_subrule.test | RUN | 3.457061 | 13.821809 | 16.038013 | 0.001435 | 0.002026 | 0.001822 |
| qi_repo_keywords.test | RUN | 3.298411 | 12.107218 | 13.210709 | 0.001486 | 0.001864 | 0.001390 |
| qi_repo_seek.test | RUN | 1.228610 | 4.388016 | 4.227870 | 0.001769 | 0.001943 | 0.001750 |
| karma_repo_confix.test | RUN | 1.122236 | 4.302123 | 4.133993 | 0.001412 | 0.001859 | 0.001898 |
| karma_repo_subrule.test | RUN | 1.933743 | 8.242319 | 8.887126 | 0.001343 | 0.001338 | 0.001260 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001×† | 0.998×, 1.003× | 0.932× |
| clang | 0.997× | 1.007×, 0.987× | 1.009× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44815881069).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.001011s | 0.001020s | 0.001013s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.001070s | 0.001054s | 0.001023s | byte equality observed |
| qi_repo_advance.test | 10 | 0.000994s | 0.001032s | 0.001005s | byte equality observed |
| qi_repo_confix.test | 10 | 0.001145s | 0.001139s | 0.001127s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.000988s | 0.000988s | 0.001009s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.001136s | 0.001135s | 0.001135s | byte equality observed |
| qi_repo_seek.test | 10 | 0.000997s | 0.001007s | 0.000999s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.001040s | 0.001060s | 0.001048s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44815881069).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
