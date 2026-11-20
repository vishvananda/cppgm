# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.587102 | 1.756314 | 1.836243 | 0.002241 | 0.002274 | 0.002242 |
| covariance.test | RUN | 1.150911 | 4.518849 | 4.824562 | 0.002460 | 0.002316 | 0.002174 |
| droppable.test | RUN | 0.730078 | 2.362022 | 2.610379 | 0.002157 | 0.002286 | 0.002060 |
| error_of.test | RUN | 0.805744 | 2.260601 | 2.741321 | 0.002270 | 0.002159 | 0.001950 |
| extended_p_square.test | RUN | 0.850443 | 2.984563 | 2.877487 | 0.003682 | 0.003723 | 0.003267 |
| extended_p_square_quantile.test | RUN | 1.083659 | 4.695679 | 4.155476 | 0.006841 | 0.007632 | 0.006700 |
| external_accumulator.test | RUN | 0.746119 | 2.186945 | 2.504347 | 0.002114 | 0.002360 | 0.002123 |
| external_weights.test | RUN | 0.623614 | 1.742446 | 1.952263 | 0.001948 | 0.002383 | 0.001817 |
| kurtosis.test | RUN | 0.920770 | 2.850033 | 3.358521 | 0.002926 | 0.003946 | 0.003009 |
| max.test | RUN | 0.578815 | 1.721400 | 1.836556 | 0.002311 | 0.002260 | 0.002085 |
| mean.test | RUN | 0.795440 | 2.405925 | 2.719615 | 0.002079 | 0.002293 | 0.001801 |
| median.test | RUN | 1.080763 | 4.777889 | 4.117114 | 0.103790 | 0.117512 | 0.099681 |
| min.test | RUN | 0.609073 | 1.709321 | 1.878877 | 0.002335 | 0.002153 | 0.002116 |
| moment.test | RUN | 0.678641 | 1.904840 | 2.234389 | 0.002042 | 0.002366 | 0.002184 |
| p_square_cumul_dist.test | RUN | 0.899589 | 3.431213 | 3.093665 | 0.728553 | 0.905403 | 0.720810 |
| p_square_quantile.test | RUN | 0.807213 | 2.993449 | 2.610950 | 0.022730 | 0.024037 | 0.021837 |
| reference.test | RUN | 0.674832 | 1.947055 | 2.170145 | 0.002496 | 0.002226 | 0.002226 |
| rolling_count.test | RUN | 0.678250 | 2.175841 | 2.267051 | 0.002113 | 0.001828 | 0.001774 |
| rolling_sum.test | RUN | 0.675425 | 2.172216 | 2.147750 | 0.002401 | 0.002181 | 0.002064 |
| rolling_mean.test | RUN | 1.036484 | 3.970783 | 3.773536 | 0.002506 | 0.002531 | 0.002189 |
| rolling_variance.test | RUN | 1.185880 | 4.624329 | 4.312025 | 0.002189 | 0.002417 | 0.002191 |
| rolling_moment.test | RUN | 0.860637 | 2.649463 | 2.847729 | 0.002324 | 0.002594 | 0.002304 |
| skewness.test | RUN | 0.912351 | 2.720276 | 3.153642 | 0.003083 | 0.003750 | 0.002830 |
| sum.test | RUN | 0.654673 | 1.893951 | 2.039120 | 0.002573 | 0.002160 | 0.002180 |
| sum_kahan.test | RUN | 0.703407 | 2.015646 | 2.173688 | 0.011229 | 0.018757 | 0.011315 |
| tail.test | RUN | 0.721711 | 2.798861 | 2.426225 | 0.002111 | 0.002477 | 0.002112 |
| tail_mean.test | RUN | 1.028338 | 3.272028 | 3.627290 | 0.018747 | 0.021136 | 0.019537 |
| tail_quantile.test | RUN | 0.843951 | 2.591279 | 2.825069 | 0.021637 | 0.027126 | 0.019780 |
| variance.test | RUN | 0.810557 | 2.370052 | 2.751632 | 0.002259 | 0.002433 | 0.002126 |
| vector.test | RUN | 0.874842 | 2.889757 | 3.358197 | 0.002018 | 0.002437 | 0.001953 |
| weighted_covariance.test | RUN | 1.160420 | 4.586808 | 4.936536 | 0.002166 | 0.002464 | 0.001936 |
| weighted_extended_p_square.test | RUN | 0.792861 | 2.668117 | 2.553712 | 0.017472 | 0.021646 | 0.017099 |
| weighted_kurtosis.test | RUN | 0.927090 | 2.649538 | 3.175224 | 0.002824 | 0.004566 | 0.002784 |
| weighted_mean.test | RUN | 0.782168 | 2.366540 | 2.712100 | 0.002106 | 0.002168 | 0.001909 |
| weighted_median.test | RUN | 1.024864 | 3.245725 | 3.602499 | 0.979838 | 1.049819 | 0.975527 |
| weighted_moment.test | RUN | 0.631798 | 1.731269 | 2.029935 | 0.001956 | 0.002338 | 0.001914 |
| weighted_p_square_cumul_dist.test | RUN | 0.792536 | 2.754135 | 2.324400 | 0.105061 | 0.120429 | 0.098038 |
| weighted_p_square_quantile.test | RUN | 0.736832 | 2.575210 | 2.281171 | 0.022341 | 0.028042 | 0.022116 |
| weighted_skewness.test | RUN | 0.809226 | 2.498950 | 2.999210 | 0.002849 | 0.004406 | 0.002856 |
| weighted_sum.test | RUN | 0.540756 | 1.475675 | 1.582949 | 0.002219 | 0.002389 | 0.002044 |
| weighted_sum_kahan.test | RUN | 0.583237 | 1.583259 | 1.764610 | 0.006774 | 0.010398 | 0.006523 |
| weighted_variance.test | RUN | 0.993754 | 2.973224 | 3.482193 | 0.002409 | 0.002639 | 0.002322 |
| valarray.test | RUN | 0.889308 | 2.778493 | 3.224029 | 0.002272 | 0.002219 | 0.002058 |
| tail_variate_means.test | RUN | 1.174903 | 4.422903 | 4.569660 | 0.002225 | 0.002375 | 0.002189 |
| pot_quantile.test | RUN | 1.377117 | 4.937103 | 5.342271 | 0.009090 | 0.010871 | 0.008800 |
| weighted_pot_quantile.test | RUN | 1.363842 | 4.814133 | 5.423992 | 0.023076 | 0.026593 | 0.022258 |
| weighted_tail_mean.test | RUN | 1.202986 | 3.859835 | 4.531109 | 0.018982 | 0.022341 | 0.019506 |
| weighted_tail_quantile.test | RUN | 1.197780 | 3.237196 | 4.012416 | 0.016018 | 0.018256 | 0.015695 |
| weighted_tail_variate_means.test | RUN | 1.355447 | 4.240618 | 4.658148 | 0.001535 | 0.001569 | 0.001512 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.161× | 1.166×, 1.157× | 0.990× |
| clang | 0.988× | 0.987×, 0.988× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44656576225).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.001953s | 0.001985s | 0.001798s | byte equality observed |
| covariance.test | 1 | 0.001929s | 0.001938s | 0.001881s | byte equality observed |
| droppable.test | 1 | 0.001965s | 0.001840s | 0.001610s | byte equality observed |
| error_of.test | 1 | 0.001866s | 0.001755s | 0.001826s | byte equality observed |
| extended_p_square.test | 5 | 0.002874s | 0.003050s | 0.002797s | byte equality observed |
| extended_p_square_quantile.test | 3 | 0.006048s | 0.006650s | 0.005936s | byte equality observed |
| external_accumulator.test | 9 | 0.001580s | 0.001547s | 0.001525s | byte equality observed |
| external_weights.test | 10 | 0.001539s | 0.001480s | 0.001490s | byte equality observed |
| kurtosis.test | 6 | 0.002299s | 0.003066s | 0.002298s | byte equality observed |
| max.test | 7 | 0.001583s | 0.001548s | 0.001530s | byte equality observed |
| mean.test | 8 | 0.001603s | 0.001576s | 0.001527s | byte equality observed |
| median.test | 1 | 0.104192s | 0.114350s | 0.096190s | byte equality observed |
| min.test | 8 | 0.001539s | 0.001538s | 0.001522s | byte equality observed |
| moment.test | 9 | 0.001588s | 0.001534s | 0.001515s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.633112s | 0.791471s | 0.617861s | byte equality observed |
| p_square_quantile.test | 1 | 0.021537s | 0.023953s | 0.020682s | byte equality observed |
| pot_quantile.test | 3 | 0.008328s | 0.009573s | 0.008179s | byte equality observed |
| reference.test | 8 | 0.001546s | 0.001554s | 0.001491s | byte equality observed |
| rolling_count.test | 10 | 0.001607s | 0.001549s | 0.001537s | byte equality observed |
| rolling_mean.test | 8 | 0.001651s | 0.001643s | 0.001609s | byte equality observed |
| rolling_moment.test | 10 | 0.001591s | 0.001614s | 0.001565s | byte equality observed |
| rolling_sum.test | 10 | 0.001595s | 0.001567s | 0.001554s | byte equality observed |
| rolling_variance.test | 9 | 0.001689s | 0.001633s | 0.001613s | byte equality observed |
| skewness.test | 6 | 0.002283s | 0.003087s | 0.002341s | byte equality observed |
| sum.test | 10 | 0.001576s | 0.001524s | 0.001528s | byte equality observed |
| sum_kahan.test | 2 | 0.010407s | 0.017557s | 0.010395s | byte equality observed |
| tail.test | 10 | 0.001558s | 0.001462s | 0.001477s | byte equality observed |
| tail_mean.test | 1 | 0.017801s | 0.017865s | 0.018298s | byte equality observed |
| tail_quantile.test | 1 | 0.020505s | 0.021512s | 0.019938s | byte equality observed |
| tail_variate_means.test | 8 | 0.001549s | 0.001480s | 0.001542s | byte equality observed |
| valarray.test | 10 | 0.001550s | 0.001503s | 0.001472s | byte equality observed |
| variance.test | 10 | 0.001629s | 0.001546s | 0.001508s | byte equality observed |
| vector.test | 10 | 0.001553s | 0.001485s | 0.001457s | byte equality observed |
| weighted_covariance.test | 9 | 0.001529s | 0.001491s | 0.001468s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.017875s | 0.020274s | 0.015265s | byte equality observed |
| weighted_kurtosis.test | 6 | 0.002338s | 0.003605s | 0.002351s | byte equality observed |
| weighted_mean.test | 10 | 0.001512s | 0.001475s | 0.001433s | byte equality observed |
| weighted_median.test | 1 | 0.858246s | 0.928069s | 0.861363s | byte equality observed |
| weighted_moment.test | 10 | 0.001496s | 0.001452s | 0.001414s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.101862s | 0.143372s | 0.103449s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.021711s | 0.026880s | 0.021824s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.021888s | 0.023792s | 0.021068s | byte equality observed |
| weighted_skewness.test | 5 | 0.002364s | 0.003649s | 0.002376s | byte equality observed |
| weighted_sum.test | 10 | 0.001484s | 0.001454s | 0.001413s | byte equality observed |
| weighted_sum_kahan.test | 3 | 0.005826s | 0.009375s | 0.005732s | byte equality observed |
| weighted_tail_mean.test | 2 | 0.018511s | 0.019523s | 0.018361s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.019381s | 0.021496s | 0.019186s | byte equality observed |
| weighted_tail_variate_means.test | 8 | 0.001552s | 0.001472s | 0.001468s | byte equality observed |
| weighted_variance.test | 8 | 0.001652s | 0.001805s | 0.001609s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44656576225).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
