# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.977897 | 5.373707 | 7.792748 | 0.001962 | 0.001950 | 0.002092 |
| qi_repo_confix.test | RUN | 2.029126 | 7.246310 | 8.289400 | 0.002031 | 0.002366 | 0.002294 |
| qi_repo_distinct.test | RUN | 1.534518 | 3.886919 | 5.394315 | 0.002182 | 0.002166 | 0.002080 |
| qi_repo_subrule.test | RUN | 4.781840 | 18.373182 | 23.019628 | 0.002176 | 0.002288 | 0.002186 |
| qi_repo_keywords.test | RUN | 4.329714 | 17.203272 | 17.982592 | 0.001668 | 0.002282 | 0.001550 |
| qi_repo_seek.test | RUN | 1.713240 | 6.126138 | 6.251004 | 0.001997 | 0.002252 | 0.001807 |
| karma_repo_confix.test | RUN | 1.600031 | 6.099913 | 6.163232 | 0.002276 | 0.002241 | 0.002170 |
| karma_repo_subrule.test | RUN | 2.321959 | 9.521465 | 13.038445 | 0.001584 | 0.001506 | 0.001380 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.987× | 0.985×, 0.988× | 0.995× |
| clang | 0.995× | 0.999×, 0.990× | 1.011× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45850603565).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.001542s | 0.001509s | 0.001518s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.001554s | 0.001559s | 0.001581s | byte equality observed |
| qi_repo_advance.test | 10 | 0.001519s | 0.001501s | 0.001482s | byte equality observed |
| qi_repo_confix.test | 10 | 0.001725s | 0.001688s | 0.001687s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.001505s | 0.001514s | 0.001480s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.001717s | 0.001669s | 0.001683s | byte equality observed |
| qi_repo_seek.test | 10 | 0.001515s | 0.001499s | 0.001501s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.001598s | 0.001587s | 0.001632s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45850603565).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
