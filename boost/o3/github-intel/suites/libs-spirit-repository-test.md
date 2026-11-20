# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.188693 | 3.704144 | 4.294613 | 0.001308 | 0.001426 | 0.001341 |
| qi_repo_confix.test | RUN | 1.244470 | 4.841438 | 4.713541 | 0.001280 | 0.001503 | 0.001246 |
| qi_repo_distinct.test | RUN | 0.888177 | 2.557512 | 2.918688 | 0.001374 | 0.001292 | 0.001298 |
| qi_repo_subrule.test | RUN | 2.988080 | 12.017344 | 13.691497 | 0.001460 | 0.001033 | 0.001285 |
| qi_repo_keywords.test | RUN | 2.920879 | 12.177943 | 10.822439 | 0.001136 | 0.001059 | 0.000959 |
| qi_repo_seek.test | RUN | 0.996668 | 4.022928 | 3.406312 | 0.001225 | 0.001471 | 0.001144 |
| karma_repo_confix.test | RUN | 0.914670 | 3.984164 | 3.417230 | 0.001272 | 0.001521 | 0.001171 |
| karma_repo_subrule.test | RUN | 1.486395 | 7.585250 | 8.055762 | 0.000881 | 0.000984 | 0.000842 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.989× | 0.980×, 0.997× | 1.007× |
| clang | 1.006× | 1.012×, 1.000× | 0.995× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44774088589).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.000836s | 0.000863s | 0.000859s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.000866s | 0.000890s | 0.000868s | byte equality observed |
| qi_repo_advance.test | 10 | 0.000821s | 0.000833s | 0.000812s | byte equality observed |
| qi_repo_confix.test | 10 | 0.000861s | 0.000866s | 0.000878s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.000824s | 0.000815s | 0.000819s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.000940s | 0.000898s | 0.000907s | byte equality observed |
| qi_repo_seek.test | 10 | 0.000825s | 0.000801s | 0.000845s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.000884s | 0.000855s | 0.000886s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44774088589).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
