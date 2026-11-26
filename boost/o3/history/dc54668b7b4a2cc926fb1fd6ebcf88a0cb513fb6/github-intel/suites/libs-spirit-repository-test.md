# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.259173 | 3.623517 | 4.253281 | 0.001257 | 0.001232 | 0.001130 |
| qi_repo_confix.test | RUN | 1.305585 | 4.833087 | 4.672704 | 0.001299 | 0.001335 | 0.001362 |
| qi_repo_distinct.test | RUN | 0.954277 | 2.516614 | 2.892040 | 0.001433 | 0.001453 | 0.001194 |
| qi_repo_subrule.test | RUN | 3.090290 | 13.170760 | 13.734880 | 0.001426 | 0.001314 | 0.001331 |
| qi_repo_keywords.test | RUN | 2.852756 | 11.061225 | 11.021490 | 0.001075 | 0.001036 | 0.001017 |
| qi_repo_seek.test | RUN | 1.049261 | 3.979023 | 3.443549 | 0.001362 | 0.001307 | 0.001135 |
| karma_repo_confix.test | RUN | 0.969523 | 3.917543 | 3.444502 | 0.001359 | 0.001325 | 0.001243 |
| karma_repo_subrule.test | RUN | 1.708791 | 7.821756 | 8.237537 | 0.001071 | 0.000957 | 0.000973 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.000× | 1.006×, 0.993× | 1.014× |
| clang | 0.994× | 0.998×, 0.991× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45710374989).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.000844s | 0.000863s | 0.000848s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.000883s | 0.000852s | 0.000877s | byte equality observed |
| qi_repo_advance.test | 10 | 0.000830s | 0.000847s | 0.000836s | byte equality observed |
| qi_repo_confix.test | 10 | 0.000873s | 0.000847s | 0.000854s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.000815s | 0.000844s | 0.000799s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.000924s | 0.000898s | 0.000917s | byte equality observed |
| qi_repo_seek.test | 10 | 0.000823s | 0.000850s | 0.000825s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.000871s | 0.000849s | 0.000869s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45710374989).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
