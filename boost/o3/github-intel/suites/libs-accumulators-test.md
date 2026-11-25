# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.577810 | 1.727997 | 1.886262 | 0.002382 | 0.002527 | 0.002184 |
| covariance.test | RUN | 1.159765 | 4.618704 | 4.975124 | 0.002228 | 0.002234 | 0.002446 |
| droppable.test | RUN | 0.728540 | 2.374537 | 2.612997 | 0.002327 | 0.002363 | 0.002286 |
| error_of.test | RUN | 0.801755 | 2.275027 | 2.869613 | 0.002077 | 0.002263 | 0.002046 |
| extended_p_square.test | RUN | 0.841847 | 3.009130 | 2.938270 | 0.003724 | 0.003900 | 0.003511 |
| extended_p_square_quantile.test | RUN | 1.126395 | 4.800245 | 4.130804 | 0.007087 | 0.007546 | 0.006846 |
| external_accumulator.test | RUN | 0.698817 | 2.190874 | 2.504527 | 0.002252 | 0.002530 | 0.002143 |
| external_weights.test | RUN | 0.624833 | 1.751689 | 2.057103 | 0.002134 | 0.002303 | 0.002316 |
| kurtosis.test | RUN | 0.934603 | 2.905900 | 3.380010 | 0.003270 | 0.003998 | 0.002983 |
| max.test | RUN | 0.591363 | 1.710125 | 1.891319 | 0.002546 | 0.002382 | 0.002236 |
| mean.test | RUN | 0.780119 | 2.462741 | 2.765521 | 0.002590 | 0.002510 | 0.002451 |
| median.test | RUN | 1.104374 | 4.866911 | 4.237878 | 0.103980 | 0.119328 | 0.099992 |
| min.test | RUN | 0.581335 | 1.684999 | 1.913566 | 0.002172 | 0.002342 | 0.002111 |
| moment.test | RUN | 0.672055 | 2.003928 | 2.307611 | 0.002278 | 0.002244 | 0.002058 |
| p_square_cumul_dist.test | RUN | 0.890450 | 3.429336 | 3.199637 | 0.732702 | 0.907195 | 0.718292 |
| p_square_quantile.test | RUN | 0.787684 | 3.039645 | 2.696678 | 0.022039 | 0.024295 | 0.022250 |
| reference.test | RUN | 0.669477 | 1.887905 | 2.301129 | 0.002230 | 0.001953 | 0.002326 |
| rolling_count.test | RUN | 0.699842 | 2.223660 | 2.361518 | 0.002044 | 0.002281 | 0.002286 |
| rolling_sum.test | RUN | 0.709567 | 2.219759 | 2.222445 | 0.002438 | 0.002408 | 0.002396 |
| rolling_mean.test | RUN | 1.038870 | 4.009754 | 3.837792 | 0.002369 | 0.002409 | 0.002408 |
| rolling_variance.test | RUN | 1.136821 | 4.673246 | 4.385853 | 0.002314 | 0.002648 | 0.002296 |
| rolling_moment.test | RUN | 0.852925 | 2.685124 | 2.900875 | 0.002310 | 0.002252 | 0.002380 |
| skewness.test | RUN | 0.897953 | 2.756446 | 3.175798 | 0.003457 | 0.003982 | 0.002991 |
| sum.test | RUN | 0.618294 | 1.862507 | 2.118538 | 0.001991 | 0.002467 | 0.002228 |
| sum_kahan.test | RUN | 0.673128 | 2.010934 | 2.172447 | 0.011196 | 0.018621 | 0.011490 |
| tail.test | RUN | 0.723791 | 2.789999 | 2.517647 | 0.002053 | 0.002439 | 0.002108 |
| tail_mean.test | RUN | 1.028971 | 3.245156 | 3.654354 | 0.019041 | 0.022825 | 0.019154 |
| tail_quantile.test | RUN | 0.833781 | 2.675558 | 2.872773 | 0.021291 | 0.024502 | 0.021305 |
| variance.test | RUN | 0.784084 | 2.391108 | 2.800405 | 0.002133 | 0.002353 | 0.002364 |
| vector.test | RUN | 0.859752 | 3.015765 | 3.401001 | 0.002175 | 0.002410 | 0.002080 |
| weighted_covariance.test | RUN | 1.142690 | 4.622997 | 5.042584 | 0.002100 | 0.002485 | 0.002109 |
| weighted_extended_p_square.test | RUN | 0.788331 | 2.676052 | 2.622003 | 0.018777 | 0.021574 | 0.017733 |
| weighted_kurtosis.test | RUN | 0.909949 | 2.654732 | 3.161605 | 0.002752 | 0.004308 | 0.003054 |
| weighted_mean.test | RUN | 0.771881 | 2.397496 | 2.752573 | 0.002228 | 0.002162 | 0.002037 |
| weighted_median.test | RUN | 1.012237 | 3.168215 | 3.617574 | 0.986625 | 1.055611 | 0.985475 |
| weighted_moment.test | RUN | 0.622818 | 1.744418 | 2.083610 | 0.002368 | 0.002262 | 0.002246 |
| weighted_p_square_cumul_dist.test | RUN | 0.776159 | 2.721845 | 2.560575 | 0.099646 | 0.118116 | 0.096432 |
| weighted_p_square_quantile.test | RUN | 0.721900 | 2.678917 | 2.145965 | 0.022221 | 0.026631 | 0.022018 |
| weighted_skewness.test | RUN | 0.793698 | 2.280683 | 3.029829 | 0.003007 | 0.004525 | 0.002606 |
| weighted_sum.test | RUN | 0.536523 | 1.494209 | 1.639695 | 0.002321 | 0.002126 | 0.002241 |
| weighted_sum_kahan.test | RUN | 0.566952 | 1.582082 | 1.715773 | 0.006129 | 0.010495 | 0.006629 |
| weighted_variance.test | RUN | 0.975285 | 2.875908 | 3.537390 | 0.002210 | 0.002655 | 0.002267 |
| valarray.test | RUN | 0.907916 | 2.771569 | 3.293477 | 0.002159 | 0.002314 | 0.002110 |
| tail_variate_means.test | RUN | 1.131470 | 4.412958 | 4.572727 | 0.002334 | 0.002270 | 0.002066 |
| pot_quantile.test | RUN | 1.376122 | 4.876151 | 5.408771 | 0.008938 | 0.010943 | 0.008592 |
| weighted_pot_quantile.test | RUN | 1.376976 | 4.580865 | 5.471278 | 0.016861 | 0.027017 | 0.022609 |
| weighted_tail_mean.test | RUN | 1.214604 | 3.785327 | 4.504721 | 0.019784 | 0.021871 | 0.015734 |
| weighted_tail_quantile.test | RUN | 1.219587 | 3.256764 | 4.142288 | 0.015912 | 0.018283 | 0.015616 |
| weighted_tail_variate_means.test | RUN | 1.354121 | 4.088430 | 4.955933 | 0.001610 | 0.001588 | 0.001538 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.149× | 1.154×, 1.145× | 1.007× |
| clang | 0.988× | 0.977×, 1.000× | 0.992× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45697047144).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.001905s | 0.001855s | 0.001886s | byte equality observed |
| covariance.test | 1 | 0.002013s | 0.001968s | 0.001789s | byte equality observed |
| droppable.test | 1 | 0.001922s | 0.001711s | 0.001810s | byte equality observed |
| error_of.test | 1 | 0.001790s | 0.001786s | 0.001809s | byte equality observed |
| extended_p_square.test | 5 | 0.002860s | 0.002983s | 0.002726s | byte equality observed |
| extended_p_square_quantile.test | 3 | 0.005980s | 0.006687s | 0.005805s | byte equality observed |
| external_accumulator.test | 7 | 0.001588s | 0.001563s | 0.001548s | byte equality observed |
| external_weights.test | 8 | 0.001536s | 0.001507s | 0.001502s | byte equality observed |
| kurtosis.test | 6 | 0.002294s | 0.003030s | 0.002295s | byte equality observed |
| max.test | 8 | 0.001605s | 0.001558s | 0.001543s | byte equality observed |
| mean.test | 8 | 0.001626s | 0.001563s | 0.001586s | byte equality observed |
| median.test | 1 | 0.105825s | 0.113574s | 0.098559s | byte equality observed |
| min.test | 8 | 0.001578s | 0.001516s | 0.001531s | byte equality observed |
| moment.test | 6 | 0.001573s | 0.001544s | 0.001542s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.644050s | 0.787635s | 0.624089s | byte equality observed |
| p_square_quantile.test | 1 | 0.021538s | 0.024005s | 0.020772s | byte equality observed |
| pot_quantile.test | 3 | 0.008327s | 0.009512s | 0.008224s | byte equality observed |
| reference.test | 10 | 0.001548s | 0.001514s | 0.001509s | byte equality observed |
| rolling_count.test | 10 | 0.001582s | 0.001544s | 0.001554s | byte equality observed |
| rolling_mean.test | 10 | 0.001664s | 0.001601s | 0.001630s | byte equality observed |
| rolling_moment.test | 10 | 0.001611s | 0.001602s | 0.001596s | byte equality observed |
| rolling_sum.test | 10 | 0.001581s | 0.001549s | 0.001576s | byte equality observed |
| rolling_variance.test | 7 | 0.001670s | 0.001648s | 0.001609s | byte equality observed |
| skewness.test | 5 | 0.002295s | 0.003047s | 0.002332s | byte equality observed |
| sum.test | 10 | 0.001561s | 0.001517s | 0.001519s | byte equality observed |
| sum_kahan.test | 2 | 0.010392s | 0.017422s | 0.010803s | byte equality observed |
| tail.test | 10 | 0.001540s | 0.001503s | 0.001493s | byte equality observed |
| tail_mean.test | 1 | 0.017735s | 0.018343s | 0.018419s | byte equality observed |
| tail_quantile.test | 1 | 0.020400s | 0.023097s | 0.020130s | byte equality observed |
| tail_variate_means.test | 9 | 0.001604s | 0.001506s | 0.001558s | byte equality observed |
| valarray.test | 10 | 0.001535s | 0.001504s | 0.001470s | byte equality observed |
| variance.test | 9 | 0.001579s | 0.001544s | 0.001569s | byte equality observed |
| vector.test | 10 | 0.001518s | 0.001519s | 0.001485s | byte equality observed |
| weighted_covariance.test | 10 | 0.001520s | 0.001476s | 0.001477s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.017707s | 0.019779s | 0.016314s | byte equality observed |
| weighted_kurtosis.test | 5 | 0.002340s | 0.003600s | 0.002412s | byte equality observed |
| weighted_mean.test | 10 | 0.001477s | 0.001471s | 0.001462s | byte equality observed |
| weighted_median.test | 1 | 0.860151s | 0.926808s | 0.864646s | byte equality observed |
| weighted_moment.test | 8 | 0.001484s | 0.001452s | 0.001448s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.099659s | 0.143091s | 0.101918s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.021758s | 0.026547s | 0.021790s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.021752s | 0.023365s | 0.021153s | byte equality observed |
| weighted_skewness.test | 5 | 0.002322s | 0.003566s | 0.002428s | byte equality observed |
| weighted_sum.test | 10 | 0.001462s | 0.001434s | 0.001421s | byte equality observed |
| weighted_sum_kahan.test | 3 | 0.005816s | 0.009342s | 0.005712s | byte equality observed |
| weighted_tail_mean.test | 1 | 0.018711s | 0.019210s | 0.018492s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.019932s | 0.021904s | 0.019147s | byte equality observed |
| weighted_tail_variate_means.test | 10 | 0.001521s | 0.001497s | 0.001485s | byte equality observed |
| weighted_variance.test | 10 | 0.001634s | 0.001776s | 0.001632s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45697047144).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
