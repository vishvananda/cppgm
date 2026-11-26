# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.236430 | 3.581590 | 4.199748 | 0.001364 | 0.001287 | 0.001151 |
| qi_repo_confix.test | RUN | 1.289212 | 4.798011 | 4.679802 | 0.001226 | 0.001450 | 0.001240 |
| qi_repo_distinct.test | RUN | 0.928958 | 2.538325 | 2.874419 | 0.001351 | 0.001424 | 0.001172 |
| qi_repo_subrule.test | RUN | 3.052774 | 12.741009 | 13.511491 | 0.001508 | 0.001500 | 0.001403 |
| qi_repo_keywords.test | RUN | 2.932892 | 11.725716 | 10.798921 | 0.001053 | 0.001026 | 0.001003 |
| qi_repo_seek.test | RUN | 1.024391 | 3.887169 | 3.354897 | 0.001244 | 0.001259 | 0.001207 |
| karma_repo_confix.test | RUN | 0.937040 | 3.885705 | 3.400920 | 0.001454 | 0.001407 | 0.001184 |
| karma_repo_subrule.test | RUN | 1.535696 | 6.846313 | 8.049409 | 0.001025 | 0.000925 | 0.000874 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.001× | 0.999×, 1.002× | 0.982× |
| clang | 0.988× | 0.994×, 0.983× | 0.983× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45739944580).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.000825s | 0.000837s | 0.000844s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.000853s | 0.000855s | 0.000819s | byte equality observed |
| qi_repo_advance.test | 10 | 0.000826s | 0.000829s | 0.000808s | byte equality observed |
| qi_repo_confix.test | 10 | 0.000858s | 0.000836s | 0.000846s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.000792s | 0.000791s | 0.000816s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.000910s | 0.000893s | 0.000904s | byte equality observed |
| qi_repo_seek.test | 10 | 0.000834s | 0.000831s | 0.000803s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.000872s | 0.000869s | 0.000869s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45739944580).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
