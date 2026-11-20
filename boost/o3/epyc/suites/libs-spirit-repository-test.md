# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 2.009445 | 5.581376 | 7.831543 | 0.002028 | 0.002072 | 0.002142 |
| qi_repo_confix.test | RUN | 2.007626 | 7.260062 | 8.525190 | 0.002272 | 0.002364 | 0.002205 |
| qi_repo_distinct.test | RUN | 1.471592 | 3.923266 | 5.339367 | 0.002008 | 0.002200 | 0.002206 |
| qi_repo_subrule.test | RUN | 4.609109 | 17.326917 | 23.389532 | 0.001784 | 0.001674 | 0.002178 |
| qi_repo_keywords.test | RUN | 4.470718 | 17.349500 | 18.529444 | 0.001769 | 0.001750 | 0.001806 |
| qi_repo_seek.test | RUN | 1.695661 | 6.117808 | 6.333294 | 0.002200 | 0.002064 | 0.002115 |
| karma_repo_confix.test | RUN | 1.579198 | 6.087602 | 6.323503 | 0.002407 | 0.002066 | 0.001999 |
| karma_repo_subrule.test | RUN | 2.523824 | 10.509012 | 13.550428 | 0.001964 | 0.001880 | 0.001589 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.992× | 1.000×, 0.984× | 0.994× |
| clang | 1.005× | 1.020×, 0.989× | 1.020× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44612055398).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.001541s | 0.001585s | 0.001583s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.001578s | 0.001577s | 0.001600s | byte equality observed |
| qi_repo_advance.test | 10 | 0.001512s | 0.001508s | 0.001503s | byte equality observed |
| qi_repo_confix.test | 10 | 0.001708s | 0.001715s | 0.001694s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.001501s | 0.001511s | 0.001484s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.001704s | 0.001665s | 0.001695s | byte equality observed |
| qi_repo_seek.test | 10 | 0.001528s | 0.001520s | 0.001513s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.001592s | 0.001569s | 0.001596s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44612055398).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
