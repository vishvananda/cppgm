# libs/spirit/repository/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| qi_repo_advance.test | RUN | 1.199549 | 3.561824 | 4.298444 | 0.001319 | 0.001244 | 0.001140 |
| qi_repo_confix.test | RUN | 1.252643 | 4.760275 | 4.687927 | 0.001235 | 0.001431 | 0.001095 |
| qi_repo_distinct.test | RUN | 0.895681 | 2.499709 | 2.886234 | 0.001305 | 0.001218 | 0.001059 |
| qi_repo_subrule.test | RUN | 2.854469 | 11.508417 | 11.878346 | 0.000962 | 0.000948 | 0.001019 |
| qi_repo_keywords.test | RUN | 2.837282 | 11.528521 | 12.147525 | 0.001007 | 0.001020 | 0.001000 |
| qi_repo_seek.test | RUN | 1.000192 | 3.942457 | 3.426756 | 0.001255 | 0.001246 | 0.001149 |
| karma_repo_confix.test | RUN | 0.915818 | 3.847669 | 3.417709 | 0.001393 | 0.001218 | 0.001245 |
| karma_repo_subrule.test | RUN | 1.584201 | 7.110270 | 7.386677 | 0.000885 | 0.000922 | 0.000895 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 0.996× | 1.010×, 0.983× | 1.007× |
| clang | 1.009× | 1.000×, 1.019× | 1.005× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44780058957).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| karma_repo_confix.test | 10 | 0.000839s | 0.000838s | 0.000861s | byte equality observed |
| karma_repo_subrule.test | 10 | 0.000861s | 0.000842s | 0.000873s | byte equality observed |
| qi_repo_advance.test | 10 | 0.000815s | 0.000819s | 0.000847s | byte equality observed |
| qi_repo_confix.test | 10 | 0.000862s | 0.000868s | 0.000870s | byte equality observed |
| qi_repo_distinct.test | 10 | 0.000799s | 0.000805s | 0.000818s | byte equality observed |
| qi_repo_keywords.test | 10 | 0.000944s | 0.000932s | 0.000916s | byte equality observed |
| qi_repo_seek.test | 10 | 0.000806s | 0.000814s | 0.000788s | byte equality observed |
| qi_repo_subrule.test | 10 | 0.000864s | 0.000850s | 0.000872s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44780058957).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
