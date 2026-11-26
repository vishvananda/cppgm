# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.246195 | 3.433217 | 3.737495 | 0.001999 | 0.001861 | 0.001748 |
| qi_repo_confix.test | RUN | 1.294421 | 4.401860 | 4.058855 | 0.001802 | 0.002032 | 0.001852 |
| qi_repo_distinct.test | RUN | 0.950103 | 2.382423 | 2.537841 | 0.001961 | 0.001713 | 0.001669 |
| qi_repo_subrule.test | RUN | 3.078448 | 12.014614 | 10.517617 | 0.001580 | 0.001886 | 0.001311 |
| qi_repo_keywords.test | RUN | 2.937247 | 10.334947 | 10.926714 | 0.001645 | 0.001576 | 0.001516 |
| qi_repo_seek.test | RUN | 1.131815 | 3.578434 | 3.144142 | 0.001612 | 0.002002 | 0.001624 |
| karma_repo_confix.test | RUN | 1.045711 | 3.558559 | 3.110839 | 0.001767 | 0.001830 | 0.001526 |
| karma_repo_subrule.test | RUN | 1.657445 | 7.263614 | 6.451255 | 0.001512 | 0.001386 | 0.001282 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.987× | 0.982×, 0.993× | 0.996× |
| clang | 1.099×† | 1.013×, 1.186× | 1.023× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45790989032).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.000946s | 0.000914s | 0.000953s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.000958s | 0.000929s | 0.000995s | byte equality observed |
| qi_repo_advance.test | 10 | 0.000917s | 0.000886s | 0.000923s | byte equality observed |
| qi_repo_confix.test | 10 | 0.001027s | 0.000994s | 0.001064s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.000892s | 0.000887s | 0.000914s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.001034s | 0.000972s | 0.001048s | byte equality observed |
| qi_repo_seek.test | 10 | 0.000912s | 0.000910s | 0.000951s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.000980s | 0.000943s | 0.001007s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45790989032).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
