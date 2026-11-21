# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.690965 | 1.990751 | 2.310660 | 0.003381 | 0.003296 | 0.003156 |
| covariance.test | RUN | 1.318546 | 5.170361 | 6.022298 | 0.003283 | 0.003463 | 0.003351 |
| droppable.test | RUN | 0.859059 | 2.683108 | 3.156378 | 0.003369 | 0.003486 | 0.003320 |
| error_of.test | RUN | 0.953694 | 2.663827 | 3.434599 | 0.002916 | 0.003164 | 0.003135 |
| extended_p_square.test | RUN | 1.010698 | 3.410688 | 3.515237 | 0.004642 | 0.005026 | 0.003955 |
| extended_p_square_quantile.test | RUN | 1.300939 | 5.165814 | 4.966986 | 0.008186 | 0.009426 | 0.007810 |
| external_accumulator.test | RUN | 0.850283 | 2.507771 | 3.075213 | 0.002980 | 0.003370 | 0.003262 |
| external_weights.test | RUN | 0.762096 | 2.043085 | 2.451207 | 0.003064 | 0.003123 | 0.002995 |
| kurtosis.test | RUN | 1.118941 | 3.285127 | 4.119072 | 0.004314 | 0.005081 | 0.004280 |
| max.test | RUN | 0.737984 | 2.026079 | 2.307629 | 0.003028 | 0.003061 | 0.003188 |
| mean.test | RUN | 0.918491 | 2.763154 | 3.316621 | 0.003417 | 0.003674 | 0.003355 |
| median.test | RUN | 1.308620 | 5.393552 | 5.004987 | 0.108922 | 0.128695 | 0.113687 |
| min.test | RUN | 0.723565 | 1.931194 | 2.346740 | 0.002827 | 0.003422 | 0.003102 |
| moment.test | RUN | 0.752485 | 2.253224 | 2.739907 | 0.003001 | 0.003121 | 0.003096 |
| p_square_cumul_dist.test | RUN | 0.990087 | 3.767120 | 3.774727 | 0.809133 | 1.056051 | 0.811613 |
| p_square_quantile.test | RUN | 0.918291 | 3.399376 | 3.243256 | 0.026248 | 0.027097 | 0.024549 |
| reference.test | RUN | 0.787705 | 2.226092 | 2.788818 | 0.003201 | 0.003255 | 0.003125 |
| rolling_count.test | RUN | 0.782316 | 2.411461 | 2.641118 | 0.002858 | 0.003341 | 0.003076 |
| rolling_sum.test | RUN | 0.820823 | 2.483439 | 2.827008 | 0.003406 | 0.003418 | 0.003313 |
| rolling_mean.test | RUN | 1.176803 | 4.421264 | 4.581660 | 0.003144 | 0.003459 | 0.003374 |
| rolling_variance.test | RUN | 1.334304 | 5.115905 | 5.199322 | 0.003323 | 0.003161 | 0.003385 |
| rolling_moment.test | RUN | 0.978865 | 3.022651 | 3.517208 | 0.003204 | 0.003465 | 0.003056 |
| skewness.test | RUN | 1.048559 | 3.080946 | 3.893195 | 0.004045 | 0.004720 | 0.004275 |
| sum.test | RUN | 0.742725 | 2.103233 | 2.520299 | 0.002792 | 0.003448 | 0.003115 |
| sum_kahan.test | RUN | 0.778685 | 2.234389 | 2.680608 | 0.016949 | 0.027786 | 0.016745 |
| tail.test | RUN | 0.851194 | 3.100642 | 3.038662 | 0.003174 | 0.003464 | 0.002961 |
| tail_mean.test | RUN | 1.194564 | 3.690518 | 4.457188 | 0.020378 | 0.027282 | 0.022354 |
| tail_quantile.test | RUN | 0.984017 | 3.016055 | 3.428254 | 0.023262 | 0.032254 | 0.023524 |
| variance.test | RUN | 0.908398 | 2.651785 | 3.345544 | 0.003022 | 0.003277 | 0.003187 |
| vector.test | RUN | 0.999960 | 3.247702 | 4.073084 | 0.003012 | 0.003283 | 0.003084 |
| weighted_covariance.test | RUN | 1.339360 | 4.976688 | 6.158597 | 0.002651 | 0.003231 | 0.003066 |
| weighted_extended_p_square.test | RUN | 0.937595 | 2.980769 | 3.079674 | 0.021049 | 0.025011 | 0.019842 |
| weighted_kurtosis.test | RUN | 1.103579 | 2.990169 | 3.827144 | 0.004048 | 0.005459 | 0.003813 |
| weighted_mean.test | RUN | 0.927687 | 2.674308 | 3.361456 | 0.002719 | 0.003278 | 0.003070 |
| weighted_median.test | RUN | 1.159145 | 3.648214 | 4.275994 | 1.057204 | 1.195841 | 1.100386 |
| weighted_moment.test | RUN | 0.756544 | 2.017718 | 2.533570 | 0.002981 | 0.003006 | 0.003005 |
| weighted_p_square_cumul_dist.test | RUN | 0.918150 | 3.044631 | 3.124072 | 0.109650 | 0.178522 | 0.109793 |
| weighted_p_square_quantile.test | RUN | 0.866410 | 2.986373 | 2.613031 | 0.026333 | 0.031316 | 0.025885 |
| weighted_skewness.test | RUN | 1.006203 | 2.913929 | 3.703590 | 0.004092 | 0.005557 | 0.004042 |
| weighted_sum.test | RUN | 0.567048 | 1.640143 | 1.965012 | 0.002767 | 0.003029 | 0.002906 |
| weighted_sum_kahan.test | RUN | 0.672339 | 1.828009 | 2.141123 | 0.009655 | 0.015305 | 0.009953 |
| weighted_variance.test | RUN | 1.148903 | 3.317673 | 4.217588 | 0.003104 | 0.003698 | 0.003129 |
| valarray.test | RUN | 1.044909 | 3.201841 | 3.927735 | 0.002935 | 0.003228 | 0.003025 |
| tail_variate_means.test | RUN | 1.378191 | 5.076699 | 5.485165 | 0.003266 | 0.003227 | 0.002919 |
| pot_quantile.test | RUN | 1.662659 | 5.574712 | 6.597616 | 0.010989 | 0.013165 | 0.010766 |
| weighted_pot_quantile.test | RUN | 1.689289 | 5.473489 | 6.649188 | 0.025873 | 0.030741 | 0.025025 |
| weighted_tail_mean.test | RUN | 1.478106 | 4.300294 | 5.628226 | 0.022280 | 0.026372 | 0.022107 |
| weighted_tail_quantile.test | RUN | 1.386556 | 3.999873 | 4.991605 | 0.019041 | 0.022396 | 0.019358 |
| weighted_tail_variate_means.test | RUN | 1.580158 | 4.581068 | 5.811653 | 0.002283 | 0.002234 | 0.002147 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.207× | 1.216×, 1.198× | 0.986× |
| clang | 1.007× | 1.013×, 1.002× | 0.992× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44922642903).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.002615s | 0.002551s | 0.002505s | byte equality observed |
| covariance.test | 1 | 0.002607s | 0.002619s | 0.002610s | byte equality observed |
| droppable.test | 1 | 0.002561s | 0.002353s | 0.002515s | byte equality observed |
| error_of.test | 1 | 0.002534s | 0.002344s | 0.002498s | byte equality observed |
| extended_p_square.test | 5 | 0.003556s | 0.003627s | 0.003476s | byte equality observed |
| extended_p_square_quantile.test | 3 | 0.006589s | 0.007922s | 0.006605s | byte equality observed |
| external_accumulator.test | 4 | 0.002166s | 0.002038s | 0.002149s | byte equality observed |
| external_weights.test | 6 | 0.002047s | 0.001959s | 0.001995s | byte equality observed |
| kurtosis.test | 5 | 0.003082s | 0.003755s | 0.003100s | byte equality observed |
| max.test | 6 | 0.002136s | 0.002054s | 0.002076s | byte equality observed |
| mean.test | 8 | 0.002148s | 0.002042s | 0.002119s | byte equality observed |
| median.test | 1 | 0.107396s | 0.128894s | 0.109830s | byte equality observed |
| min.test | 7 | 0.002118s | 0.002034s | 0.002069s | byte equality observed |
| moment.test | 7 | 0.002106s | 0.002057s | 0.002111s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.750374s | 1.006918s | 0.751067s | byte equality observed |
| p_square_quantile.test | 1 | 0.026994s | 0.028475s | 0.024526s | byte equality observed |
| pot_quantile.test | 2 | 0.010216s | 0.011358s | 0.009849s | byte equality observed |
| reference.test | 9 | 0.002128s | 0.002058s | 0.002165s | byte equality observed |
| rolling_count.test | 9 | 0.002153s | 0.002055s | 0.002137s | byte equality observed |
| rolling_mean.test | 8 | 0.002257s | 0.002110s | 0.002176s | byte equality observed |
| rolling_moment.test | 8 | 0.002213s | 0.002110s | 0.002171s | byte equality observed |
| rolling_sum.test | 7 | 0.002155s | 0.002050s | 0.002095s | byte equality observed |
| rolling_variance.test | 6 | 0.002250s | 0.002130s | 0.002191s | byte equality observed |
| skewness.test | 4 | 0.003121s | 0.003744s | 0.003192s | byte equality observed |
| sum.test | 9 | 0.002089s | 0.002008s | 0.002061s | byte equality observed |
| sum_kahan.test | 1 | 0.015777s | 0.026496s | 0.015822s | byte equality observed |
| tail.test | 9 | 0.002105s | 0.001966s | 0.002050s | byte equality observed |
| tail_mean.test | 1 | 0.019401s | 0.022013s | 0.020453s | byte equality observed |
| tail_quantile.test | 1 | 0.022865s | 0.027641s | 0.022339s | byte equality observed |
| tail_variate_means.test | 9 | 0.002066s | 0.001928s | 0.002072s | byte equality observed |
| valarray.test | 9 | 0.002041s | 0.001941s | 0.002012s | byte equality observed |
| variance.test | 9 | 0.002158s | 0.002089s | 0.002081s | byte equality observed |
| vector.test | 7 | 0.002047s | 0.001938s | 0.001990s | byte equality observed |
| weighted_covariance.test | 9 | 0.002029s | 0.001961s | 0.001979s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.019775s | 0.023629s | 0.018652s | byte equality observed |
| weighted_kurtosis.test | 5 | 0.003205s | 0.004230s | 0.003128s | byte equality observed |
| weighted_mean.test | 8 | 0.001984s | 0.001916s | 0.001953s | byte equality observed |
| weighted_median.test | 1 | 0.990274s | 1.113447s | 1.014153s | byte equality observed |
| weighted_moment.test | 8 | 0.002012s | 0.001880s | 0.001918s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.119248s | 0.175032s | 0.119608s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.027311s | 0.033536s | 0.026350s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.025373s | 0.027341s | 0.024552s | byte equality observed |
| weighted_skewness.test | 5 | 0.003343s | 0.004193s | 0.003380s | byte equality observed |
| weighted_sum.test | 9 | 0.002011s | 0.001883s | 0.001973s | byte equality observed |
| weighted_sum_kahan.test | 2 | 0.008865s | 0.013834s | 0.008752s | byte equality observed |
| weighted_tail_mean.test | 1 | 0.020375s | 0.022767s | 0.020948s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.022264s | 0.026349s | 0.022095s | byte equality observed |
| weighted_tail_variate_means.test | 6 | 0.002101s | 0.001925s | 0.002142s | byte equality observed |
| weighted_variance.test | 8 | 0.002169s | 0.002256s | 0.002164s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44922642903).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
