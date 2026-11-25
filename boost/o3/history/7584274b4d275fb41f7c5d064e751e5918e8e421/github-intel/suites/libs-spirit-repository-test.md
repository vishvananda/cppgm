# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.247893 | 3.668409 | 4.308153 | 0.001407 | 0.001345 | 0.001137 |
| qi_repo_confix.test | RUN | 1.304376 | 4.880446 | 4.630123 | 0.001291 | 0.001550 | 0.001264 |
| qi_repo_distinct.test | RUN | 0.936329 | 2.555775 | 2.901925 | 0.001393 | 0.001499 | 0.001161 |
| qi_repo_subrule.test | RUN | 3.089792 | 13.226770 | 13.723630 | 0.001467 | 0.001555 | 0.001293 |
| qi_repo_keywords.test | RUN | 2.858007 | 11.497859 | 11.011458 | 0.001069 | 0.001064 | 0.001010 |
| qi_repo_seek.test | RUN | 1.044915 | 4.028882 | 3.445154 | 0.001227 | 0.001292 | 0.001310 |
| karma_repo_confix.test | RUN | 0.955733 | 4.000934 | 3.414166 | 0.001479 | 0.001383 | 0.001228 |
| karma_repo_subrule.test | RUN | 1.677374 | 7.619524 | 8.067516 | 0.001010 | 0.000950 | 0.000920 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.992× | 0.992×, 0.992× | 0.997× |
| clang | 0.977× | 0.980×, 0.975× | 1.027× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45617981312).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.000852s | 0.000837s | 0.000840s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.000868s | 0.000866s | 0.000853s | byte equality observed |
| qi_repo_advance.test | 10 | 0.000847s | 0.000815s | 0.000795s | byte equality observed |
| qi_repo_confix.test | 10 | 0.000895s | 0.000878s | 0.000873s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.000831s | 0.000829s | 0.000815s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.000961s | 0.000922s | 0.000931s | byte equality observed |
| qi_repo_seek.test | 10 | 0.000827s | 0.000852s | 0.000838s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.000886s | 0.000863s | 0.000878s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45617981312).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
