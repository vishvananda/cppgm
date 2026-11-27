# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.930793 | 5.438418 | 7.647528 | 0.001898 | 0.002106 | 0.002068 |
| qi_repo_confix.test | RUN | 1.991859 | 7.175456 | 8.275116 | 0.002132 | 0.002344 | 0.002310 |
| qi_repo_distinct.test | RUN | 1.481312 | 3.851197 | 5.330757 | 0.002124 | 0.001972 | 0.002030 |
| qi_repo_subrule.test | RUN | 4.585577 | 16.415500 | 19.736952 | 0.002120 | 0.001622 | 0.001553 |
| qi_repo_keywords.test | RUN | 4.203854 | 16.684268 | 19.778947 | 0.001762 | 0.001702 | 0.001581 |
| qi_repo_seek.test | RUN | 1.676299 | 6.073519 | 6.278413 | 0.001954 | 0.002194 | 0.002042 |
| karma_repo_confix.test | RUN | 1.565366 | 5.976442 | 6.094570 | 0.002058 | 0.002130 | 0.001801 |
| karma_repo_subrule.test | RUN | 2.387271 | 10.182251 | 11.919422 | 0.001497 | 0.001665 | 0.001438 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.991× | 0.995×, 0.986× | 0.999× |
| clang | 1.015× | 1.023×, 1.007× | 0.993× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46045514956).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.001499s | 0.001534s | 0.001558s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.001599s | 0.001581s | 0.001589s | byte equality observed |
| qi_repo_advance.test | 10 | 0.001480s | 0.001471s | 0.001492s | byte equality observed |
| qi_repo_confix.test | 10 | 0.001680s | 0.001727s | 0.001709s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.001478s | 0.001518s | 0.001468s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.001696s | 0.001661s | 0.001636s | byte equality observed |
| qi_repo_seek.test | 10 | 0.001486s | 0.001503s | 0.001510s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.001586s | 0.001549s | 0.001576s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46045514956).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
