# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.721184 | 5.237336 | 6.393610 | 0.001398 | 0.001676 | 0.001718 |
| qi_repo_confix.test | RUN | 1.833898 | 6.896331 | 6.858897 | 0.001872 | 0.001865 | 0.001753 |
| qi_repo_distinct.test | RUN | 1.316004 | 3.713412 | 4.403441 | 0.001670 | 0.001718 | 0.001654 |
| qi_repo_subrule.test | RUN | 4.273790 | 16.068172 | 18.762345 | 0.001804 | 0.001231 | 0.001782 |
| qi_repo_keywords.test | RUN | 3.828511 | 16.043140 | 15.974693 | 0.001253 | 0.001295 | 0.001319 |
| qi_repo_seek.test | RUN | 1.450599 | 5.732362 | 5.137706 | 0.001939 | 0.001764 | 0.001666 |
| karma_repo_confix.test | RUN | 1.356279 | 5.642971 | 5.052906 | 0.001510 | 0.001669 | 0.001568 |
| karma_repo_subrule.test | RUN | 2.219898 | 9.645070 | 10.912921 | 0.001136 | 0.001103 | 0.001170 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.996× | 0.993×, 1.000× | 0.992× |
| clang | 0.998× | 1.004×, 0.991× | 1.005× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44927958294).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.001011s | 0.001011s | 0.001000s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.001019s | 0.001025s | 0.001024s | byte equality observed |
| qi_repo_advance.test | 10 | 0.000998s | 0.000986s | 0.001030s | byte equality observed |
| qi_repo_confix.test | 10 | 0.001033s | 0.001041s | 0.001030s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.001000s | 0.001024s | 0.001066s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.001098s | 0.001101s | 0.001076s | byte equality observed |
| qi_repo_seek.test | 10 | 0.000969s | 0.000997s | 0.001002s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.001039s | 0.001018s | 0.001025s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44927958294).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
