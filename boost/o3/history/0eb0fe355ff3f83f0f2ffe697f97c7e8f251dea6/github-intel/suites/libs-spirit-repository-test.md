# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.229940 | 3.667406 | 4.202082 | 0.001217 | 0.001398 | 0.001102 |
| qi_repo_confix.test | RUN | 1.300757 | 4.850659 | 4.642929 | 0.001319 | 0.001453 | 0.001251 |
| qi_repo_distinct.test | RUN | 0.913754 | 2.531781 | 2.898716 | 0.001409 | 0.001305 | 0.001305 |
| qi_repo_subrule.test | RUN | 2.935234 | 11.888987 | 11.659328 | 0.001013 | 0.001046 | 0.000977 |
| qi_repo_keywords.test | RUN | 2.915230 | 12.141589 | 12.035460 | 0.001054 | 0.001062 | 0.000964 |
| qi_repo_seek.test | RUN | 1.021800 | 3.957781 | 3.400868 | 0.001292 | 0.001344 | 0.001304 |
| karma_repo_confix.test | RUN | 0.936622 | 3.973691 | 3.379144 | 0.001226 | 0.001468 | 0.001195 |
| karma_repo_subrule.test | RUN | 1.628813 | 7.515739 | 7.266186 | 0.000953 | 0.001035 | 0.000856 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.992× | 0.994×, 0.990× | 1.009× |
| clang | 0.987× | 0.996×, 0.978× | 0.986× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44801983152).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.000853s | 0.000836s | 0.000860s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.000887s | 0.000884s | 0.000877s | byte equality observed |
| qi_repo_advance.test | 10 | 0.000827s | 0.000812s | 0.000818s | byte equality observed |
| qi_repo_confix.test | 10 | 0.000871s | 0.000854s | 0.000851s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.000798s | 0.000809s | 0.000798s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.000940s | 0.000914s | 0.000927s | byte equality observed |
| qi_repo_seek.test | 10 | 0.000818s | 0.000845s | 0.000842s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.000889s | 0.000862s | 0.000877s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44801983152).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
