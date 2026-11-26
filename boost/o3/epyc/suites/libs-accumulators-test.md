# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.953792 | 2.757581 | 3.526629 | 0.004234 | 0.003765 | 0.004112 |
| covariance.test | RUN | 1.833466 | 6.782334 | 8.948506 | 0.003997 | 0.004043 | 0.004182 |
| droppable.test | RUN | 1.195411 | 3.633595 | 4.750090 | 0.004082 | 0.003891 | 0.004239 |
| error_of.test | RUN | 1.343840 | 3.624998 | 5.183296 | 0.003599 | 0.003560 | 0.003886 |
| extended_p_square.test | RUN | 1.390878 | 4.535189 | 5.360342 | 0.007237 | 0.006218 | 0.005909 |
| extended_p_square_quantile.test | RUN | 1.797334 | 6.705223 | 7.481210 | 0.011304 | 0.011715 | 0.010140 |
| external_accumulator.test | RUN | 1.214881 | 3.563088 | 4.627971 | 0.003985 | 0.003753 | 0.003890 |
| external_weights.test | RUN | 1.090374 | 2.792485 | 3.711569 | 0.003552 | 0.003308 | 0.003471 |
| kurtosis.test | RUN | 1.559689 | 4.484524 | 6.260805 | 0.005224 | 0.006113 | 0.005589 |
| max.test | RUN | 1.006375 | 2.672650 | 3.368622 | 0.004034 | 0.003863 | 0.003925 |
| mean.test | RUN | 1.282827 | 3.760731 | 5.022878 | 0.004079 | 0.003718 | 0.003546 |
| median.test | RUN | 1.790719 | 7.067904 | 7.572028 | 0.139783 | 0.167339 | 0.148693 |
| min.test | RUN | 0.980568 | 2.575764 | 3.491001 | 0.003777 | 0.004276 | 0.003607 |
| moment.test | RUN | 1.138877 | 3.150948 | 4.241632 | 0.003933 | 0.004102 | 0.003975 |
| p_square_cumul_dist.test | RUN | 1.474177 | 5.188698 | 5.696526 | 1.051193 | 1.288810 | 1.064693 |
| p_square_quantile.test | RUN | 1.322795 | 4.724615 | 4.891903 | 0.037054 | 0.038968 | 0.033215 |
| reference.test | RUN | 1.137955 | 2.925048 | 3.875812 | 0.003807 | 0.003898 | 0.004140 |
| rolling_count.test | RUN | 1.087813 | 3.111955 | 4.243438 | 0.003581 | 0.004104 | 0.003694 |
| rolling_sum.test | RUN | 1.143382 | 3.334868 | 4.289757 | 0.004101 | 0.004197 | 0.004092 |
| rolling_mean.test | RUN | 1.586070 | 6.067699 | 6.768098 | 0.003819 | 0.003951 | 0.004264 |
| rolling_variance.test | RUN | 1.840574 | 6.794883 | 7.798168 | 0.003706 | 0.003814 | 0.004053 |
| rolling_moment.test | RUN | 1.363292 | 4.172355 | 5.305055 | 0.004009 | 0.003857 | 0.003796 |
| skewness.test | RUN | 1.495412 | 4.212395 | 5.839608 | 0.005470 | 0.006341 | 0.004834 |
| sum.test | RUN | 1.056978 | 2.818770 | 3.828415 | 0.003736 | 0.003743 | 0.004048 |
| sum_kahan.test | RUN | 1.144400 | 3.048560 | 3.980370 | 0.019957 | 0.030977 | 0.019781 |
| tail.test | RUN | 1.205630 | 4.436637 | 4.548530 | 0.003785 | 0.004090 | 0.004096 |
| tail_mean.test | RUN | 1.695263 | 5.022688 | 6.681881 | 0.024571 | 0.034043 | 0.028017 |
| tail_quantile.test | RUN | 1.344984 | 4.026028 | 5.214734 | 0.031019 | 0.040468 | 0.030642 |
| variance.test | RUN | 1.281751 | 3.687045 | 4.937481 | 0.003636 | 0.003314 | 0.004063 |
| vector.test | RUN | 1.406892 | 4.455334 | 6.036458 | 0.003775 | 0.003965 | 0.003521 |
| weighted_covariance.test | RUN | 1.849857 | 6.819690 | 9.236468 | 0.003556 | 0.003879 | 0.003845 |
| weighted_extended_p_square.test | RUN | 1.272168 | 3.987673 | 4.776477 | 0.029795 | 0.032855 | 0.027331 |
| weighted_kurtosis.test | RUN | 1.503101 | 4.048378 | 5.927264 | 0.005176 | 0.006512 | 0.005455 |
| weighted_mean.test | RUN | 1.267086 | 3.659301 | 5.032749 | 0.003342 | 0.004119 | 0.003477 |
| weighted_median.test | RUN | 1.613688 | 4.931017 | 6.662577 | 1.283592 | 1.400796 | 1.295051 |
| weighted_moment.test | RUN | 1.050546 | 2.717690 | 3.875494 | 0.003642 | 0.003428 | 0.003311 |
| weighted_p_square_cumul_dist.test | RUN | 1.254730 | 4.258432 | 4.752126 | 0.137430 | 0.165266 | 0.137072 |
| weighted_p_square_quantile.test | RUN | 1.198428 | 4.109669 | 4.007243 | 0.036929 | 0.040331 | 0.037158 |
| weighted_skewness.test | RUN | 1.431330 | 3.741494 | 5.607673 | 0.005291 | 0.006231 | 0.004966 |
| weighted_sum.test | RUN | 0.787261 | 2.301459 | 2.951348 | 0.003420 | 0.003369 | 0.003837 |
| weighted_sum_kahan.test | RUN | 0.956587 | 2.420221 | 3.255399 | 0.011153 | 0.017055 | 0.011677 |
| weighted_variance.test | RUN | 1.605425 | 4.466871 | 6.555333 | 0.003899 | 0.004001 | 0.004132 |
| valarray.test | RUN | 1.430890 | 4.211517 | 5.954582 | 0.003585 | 0.003369 | 0.003987 |
| tail_variate_means.test | RUN | 1.882548 | 6.523598 | 8.384305 | 0.004158 | 0.003824 | 0.003973 |
| pot_quantile.test | RUN | 2.295545 | 7.376486 | 9.978685 | 0.014424 | 0.014114 | 0.014257 |
| weighted_pot_quantile.test | RUN | 2.251552 | 7.038507 | 10.121035 | 0.023478 | 0.041366 | 0.033260 |
| weighted_tail_mean.test | RUN | 1.970148 | 5.628951 | 8.645358 | 0.027090 | 0.037805 | 0.028433 |
| weighted_tail_quantile.test | RUN | 1.957167 | 4.632056 | 7.656567 | 0.022587 | 0.028861 | 0.023052 |
| weighted_tail_variate_means.test | RUN | 2.136505 | 6.100475 | 8.551427 | 0.002646 | 0.002519 | 0.002528 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.184× | 1.187×, 1.181× | 1.006× |
| clang | 0.995× | 1.002×, 0.989× | 0.992× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45850603565).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.002969s | 0.002766s | 0.002762s | byte equality observed |
| covariance.test | 1 | 0.003011s | 0.002832s | 0.002731s | byte equality observed |
| droppable.test | 1 | 0.002935s | 0.002951s | 0.002828s | byte equality observed |
| error_of.test | 3 | 0.002669s | 0.002626s | 0.002501s | byte equality observed |
| extended_p_square.test | 3 | 0.004514s | 0.004649s | 0.004342s | byte equality observed |
| extended_p_square_quantile.test | 2 | 0.009658s | 0.010103s | 0.009171s | byte equality observed |
| external_accumulator.test | 5 | 0.002637s | 0.002626s | 0.002641s | byte equality observed |
| external_weights.test | 4 | 0.002560s | 0.002454s | 0.002546s | byte equality observed |
| kurtosis.test | 4 | 0.004069s | 0.004733s | 0.003957s | byte equality observed |
| max.test | 3 | 0.002689s | 0.002614s | 0.002563s | byte equality observed |
| mean.test | 4 | 0.002648s | 0.002636s | 0.002663s | byte equality observed |
| median.test | 1 | 0.141988s | 0.163191s | 0.142236s | byte equality observed |
| min.test | 4 | 0.002634s | 0.002543s | 0.002588s | byte equality observed |
| moment.test | 4 | 0.002581s | 0.002493s | 0.002547s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.896898s | 1.159439s | 0.902256s | byte equality observed |
| p_square_quantile.test | 1 | 0.034418s | 0.035319s | 0.031016s | byte equality observed |
| pot_quantile.test | 1 | 0.012393s | 0.013359s | 0.011935s | byte equality observed |
| reference.test | 4 | 0.002530s | 0.002458s | 0.002450s | byte equality observed |
| rolling_count.test | 7 | 0.002578s | 0.002451s | 0.002575s | byte equality observed |
| rolling_mean.test | 2 | 0.002778s | 0.002647s | 0.002719s | byte equality observed |
| rolling_moment.test | 7 | 0.002702s | 0.002566s | 0.002635s | byte equality observed |
| rolling_sum.test | 7 | 0.002579s | 0.002467s | 0.002493s | byte equality observed |
| rolling_variance.test | 7 | 0.002708s | 0.002602s | 0.002591s | byte equality observed |
| skewness.test | 4 | 0.003891s | 0.004571s | 0.003951s | byte equality observed |
| sum.test | 3 | 0.002620s | 0.002469s | 0.002496s | byte equality observed |
| sum_kahan.test | 1 | 0.018250s | 0.029350s | 0.018191s | byte equality observed |
| tail.test | 4 | 0.002601s | 0.002455s | 0.002401s | byte equality observed |
| tail_mean.test | 1 | 0.023039s | 0.031142s | 0.024533s | byte equality observed |
| tail_quantile.test | 1 | 0.027603s | 0.032445s | 0.027867s | byte equality observed |
| tail_variate_means.test | 6 | 0.002623s | 0.002385s | 0.002539s | byte equality observed |
| valarray.test | 6 | 0.002541s | 0.002446s | 0.002422s | byte equality observed |
| variance.test | 3 | 0.002661s | 0.002601s | 0.002574s | byte equality observed |
| vector.test | 2 | 0.002567s | 0.002410s | 0.002538s | byte equality observed |
| weighted_covariance.test | 7 | 0.002486s | 0.002424s | 0.002375s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.027376s | 0.029997s | 0.025321s | byte equality observed |
| weighted_kurtosis.test | 4 | 0.003968s | 0.005114s | 0.003872s | byte equality observed |
| weighted_mean.test | 5 | 0.002484s | 0.002457s | 0.002403s | byte equality observed |
| weighted_median.test | 1 | 1.143635s | 1.268415s | 1.141764s | byte equality observed |
| weighted_moment.test | 7 | 0.002431s | 0.002368s | 0.002349s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.136732s | 0.166051s | 0.138008s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.034284s | 0.039924s | 0.032607s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.030570s | 0.031876s | 0.029101s | byte equality observed |
| weighted_skewness.test | 4 | 0.003907s | 0.005016s | 0.003763s | byte equality observed |
| weighted_sum.test | 7 | 0.002381s | 0.002298s | 0.002290s | byte equality observed |
| weighted_sum_kahan.test | 2 | 0.010180s | 0.015790s | 0.009974s | byte equality observed |
| weighted_tail_mean.test | 1 | 0.025173s | 0.031353s | 0.023934s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.028525s | 0.035852s | 0.026574s | byte equality observed |
| weighted_tail_variate_means.test | 7 | 0.002529s | 0.002414s | 0.002319s | byte equality observed |
| weighted_variance.test | 6 | 0.002694s | 0.002800s | 0.002591s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45850603565).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
