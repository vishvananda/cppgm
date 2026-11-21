# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.567094 | 1.708345 | 1.897733 | 0.002394 | 0.002246 | 0.002259 |
| covariance.test | RUN | 1.105179 | 4.464410 | 4.953525 | 0.002278 | 0.002110 | 0.002205 |
| droppable.test | RUN | 0.711913 | 2.349025 | 2.652764 | 0.001871 | 0.002294 | 0.002238 |
| error_of.test | RUN | 0.786655 | 2.285029 | 2.780804 | 0.002074 | 0.002230 | 0.001960 |
| extended_p_square.test | RUN | 0.826987 | 2.955694 | 2.913909 | 0.003583 | 0.003811 | 0.003387 |
| extended_p_square_quantile.test | RUN | 1.091199 | 4.587848 | 4.172942 | 0.006945 | 0.007462 | 0.006447 |
| external_accumulator.test | RUN | 0.700345 | 2.176495 | 2.578061 | 0.002143 | 0.001991 | 0.002222 |
| external_weights.test | RUN | 0.608710 | 1.704744 | 2.015650 | 0.001855 | 0.002054 | 0.001912 |
| kurtosis.test | RUN | 0.899507 | 2.800679 | 3.359971 | 0.002949 | 0.003808 | 0.003129 |
| max.test | RUN | 0.574472 | 1.671823 | 1.943713 | 0.002377 | 0.002209 | 0.002251 |
| mean.test | RUN | 0.774255 | 2.387368 | 2.707383 | 0.002189 | 0.002401 | 0.002166 |
| median.test | RUN | 1.055612 | 4.773977 | 4.246108 | 0.101826 | 0.122123 | 0.100830 |
| min.test | RUN | 0.575558 | 1.696340 | 1.849203 | 0.002356 | 0.002369 | 0.002086 |
| moment.test | RUN | 0.693109 | 1.912516 | 2.272412 | 0.002344 | 0.002207 | 0.002391 |
| p_square_cumul_dist.test | RUN | 0.869792 | 3.373115 | 3.178164 | 0.719436 | 0.902059 | 0.697115 |
| p_square_quantile.test | RUN | 0.777578 | 2.967562 | 2.659453 | 0.022653 | 0.024061 | 0.021647 |
| reference.test | RUN | 0.648907 | 1.886345 | 2.109599 | 0.002497 | 0.002204 | 0.001868 |
| rolling_count.test | RUN | 0.641558 | 2.052208 | 2.320633 | 0.001851 | 0.002362 | 0.002177 |
| rolling_sum.test | RUN | 0.674607 | 2.173605 | 2.322599 | 0.002537 | 0.002074 | 0.002110 |
| rolling_mean.test | RUN | 1.016182 | 3.926600 | 3.823410 | 0.001719 | 0.002331 | 0.002445 |
| rolling_variance.test | RUN | 1.104183 | 4.576051 | 4.318952 | 0.002133 | 0.002286 | 0.002438 |
| rolling_moment.test | RUN | 0.829289 | 2.664118 | 2.892099 | 0.002327 | 0.002537 | 0.002235 |
| skewness.test | RUN | 0.868247 | 2.654696 | 3.123374 | 0.003039 | 0.003889 | 0.003131 |
| sum.test | RUN | 0.626191 | 1.826627 | 2.078933 | 0.002087 | 0.002337 | 0.001920 |
| sum_kahan.test | RUN | 0.658086 | 1.960019 | 2.160183 | 0.011032 | 0.018963 | 0.011115 |
| tail.test | RUN | 0.706730 | 2.722370 | 2.510659 | 0.002194 | 0.002258 | 0.002108 |
| tail_mean.test | RUN | 1.014911 | 3.164179 | 3.638436 | 0.019032 | 0.021285 | 0.019816 |
| tail_quantile.test | RUN | 0.829484 | 2.581208 | 2.760345 | 0.022149 | 0.025800 | 0.020670 |
| variance.test | RUN | 0.776293 | 2.334866 | 2.753588 | 0.002166 | 0.002400 | 0.002083 |
| vector.test | RUN | 0.840634 | 2.874552 | 3.380127 | 0.002117 | 0.002074 | 0.002009 |
| weighted_covariance.test | RUN | 1.137057 | 4.454024 | 4.973474 | 0.002185 | 0.002075 | 0.001947 |
| weighted_extended_p_square.test | RUN | 0.772429 | 2.614987 | 2.522261 | 0.017894 | 0.021462 | 0.017516 |
| weighted_kurtosis.test | RUN | 0.895389 | 2.607486 | 3.201792 | 0.003013 | 0.004206 | 0.003028 |
| weighted_mean.test | RUN | 0.753229 | 2.302655 | 2.776815 | 0.002054 | 0.002223 | 0.002063 |
| weighted_median.test | RUN | 0.997391 | 3.187806 | 3.606483 | 0.970453 | 1.045764 | 0.981169 |
| weighted_moment.test | RUN | 0.616533 | 1.709277 | 2.049936 | 0.002320 | 0.002217 | 0.002030 |
| weighted_p_square_cumul_dist.test | RUN | 0.762462 | 2.693713 | 2.508919 | 0.096923 | 0.117591 | 0.095222 |
| weighted_p_square_quantile.test | RUN | 0.702245 | 2.469080 | 2.332433 | 0.022060 | 0.025736 | 0.022167 |
| weighted_skewness.test | RUN | 0.846080 | 2.510469 | 2.735372 | 0.002551 | 0.004278 | 0.002810 |
| weighted_sum.test | RUN | 0.452127 | 1.435203 | 1.646213 | 0.001898 | 0.002048 | 0.002071 |
| weighted_sum_kahan.test | RUN | 0.561803 | 1.571317 | 1.722161 | 0.006655 | 0.010182 | 0.006718 |
| weighted_variance.test | RUN | 0.942079 | 2.892732 | 3.467634 | 0.002344 | 0.002580 | 0.002161 |
| valarray.test | RUN | 0.851992 | 2.758001 | 3.182076 | 0.002449 | 0.002154 | 0.002113 |
| tail_variate_means.test | RUN | 1.156032 | 4.344456 | 4.500741 | 0.001943 | 0.002081 | 0.002056 |
| pot_quantile.test | RUN | 1.350262 | 4.866358 | 5.332597 | 0.008995 | 0.010874 | 0.008298 |
| weighted_pot_quantile.test | RUN | 1.353218 | 4.576094 | 5.364648 | 0.021443 | 0.018870 | 0.022256 |
| weighted_tail_mean.test | RUN | 1.176019 | 3.768481 | 4.511970 | 0.019177 | 0.022517 | 0.019943 |
| weighted_tail_quantile.test | RUN | 1.148587 | 3.383242 | 4.045889 | 0.015868 | 0.017960 | 0.015383 |
| weighted_tail_variate_means.test | RUN | 1.334120 | 4.127919 | 4.712263 | 0.001592 | 0.001495 | 0.001524 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.169× | 1.157×, 1.181× | 1.001× |
| clang | 0.994× | 0.990×, 0.997× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44801983152).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.001809s | 0.001919s | 0.001772s | byte equality observed |
| covariance.test | 1 | 0.001961s | 0.001847s | 0.001752s | byte equality observed |
| droppable.test | 1 | 0.001803s | 0.001828s | 0.001636s | byte equality observed |
| error_of.test | 1 | 0.001893s | 0.001841s | 0.001631s | byte equality observed |
| extended_p_square.test | 6 | 0.002865s | 0.003010s | 0.002730s | byte equality observed |
| extended_p_square_quantile.test | 3 | 0.006113s | 0.006811s | 0.005787s | byte equality observed |
| external_accumulator.test | 6 | 0.001580s | 0.001592s | 0.001530s | byte equality observed |
| external_weights.test | 8 | 0.001530s | 0.001530s | 0.001467s | byte equality observed |
| kurtosis.test | 5 | 0.002296s | 0.003111s | 0.002322s | byte equality observed |
| max.test | 10 | 0.001564s | 0.001550s | 0.001521s | byte equality observed |
| mean.test | 9 | 0.001597s | 0.001568s | 0.001554s | byte equality observed |
| median.test | 1 | 0.099211s | 0.130034s | 0.099813s | byte equality observed |
| min.test | 9 | 0.001574s | 0.001456s | 0.001491s | byte equality observed |
| moment.test | 10 | 0.001538s | 0.001511s | 0.001491s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.624883s | 0.794222s | 0.620503s | byte equality observed |
| p_square_quantile.test | 1 | 0.021568s | 0.023151s | 0.020351s | byte equality observed |
| pot_quantile.test | 2 | 0.008288s | 0.009763s | 0.008142s | byte equality observed |
| reference.test | 10 | 0.001525s | 0.001497s | 0.001460s | byte equality observed |
| rolling_count.test | 10 | 0.001570s | 0.001507s | 0.001484s | byte equality observed |
| rolling_mean.test | 10 | 0.001643s | 0.001568s | 0.001597s | byte equality observed |
| rolling_moment.test | 10 | 0.001608s | 0.001575s | 0.001549s | byte equality observed |
| rolling_sum.test | 10 | 0.001561s | 0.001529s | 0.001525s | byte equality observed |
| rolling_variance.test | 10 | 0.001658s | 0.001585s | 0.001587s | byte equality observed |
| skewness.test | 6 | 0.002220s | 0.003024s | 0.002273s | byte equality observed |
| sum.test | 10 | 0.001546s | 0.001517s | 0.001498s | byte equality observed |
| sum_kahan.test | 2 | 0.010469s | 0.017473s | 0.010189s | byte equality observed |
| tail.test | 10 | 0.001545s | 0.001443s | 0.001507s | byte equality observed |
| tail_mean.test | 2 | 0.017799s | 0.017859s | 0.017781s | byte equality observed |
| tail_quantile.test | 1 | 0.020838s | 0.021995s | 0.019907s | byte equality observed |
| tail_variate_means.test | 8 | 0.001575s | 0.001520s | 0.001566s | byte equality observed |
| valarray.test | 10 | 0.001522s | 0.001440s | 0.001442s | byte equality observed |
| variance.test | 10 | 0.001571s | 0.001517s | 0.001522s | byte equality observed |
| vector.test | 10 | 0.001511s | 0.001467s | 0.001488s | byte equality observed |
| weighted_covariance.test | 10 | 0.001493s | 0.001465s | 0.001449s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.018242s | 0.019984s | 0.015659s | byte equality observed |
| weighted_kurtosis.test | 6 | 0.002296s | 0.003555s | 0.002355s | byte equality observed |
| weighted_mean.test | 10 | 0.001481s | 0.001460s | 0.001424s | byte equality observed |
| weighted_median.test | 1 | 0.850868s | 0.914508s | 0.856790s | byte equality observed |
| weighted_moment.test | 10 | 0.001461s | 0.001428s | 0.001431s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.100868s | 0.142992s | 0.099726s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.021600s | 0.026242s | 0.021679s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.021443s | 0.023172s | 0.020807s | byte equality observed |
| weighted_skewness.test | 6 | 0.002269s | 0.003492s | 0.002328s | byte equality observed |
| weighted_sum.test | 10 | 0.001446s | 0.001402s | 0.001394s | byte equality observed |
| weighted_sum_kahan.test | 3 | 0.005753s | 0.009251s | 0.005690s | byte equality observed |
| weighted_tail_mean.test | 2 | 0.018132s | 0.019103s | 0.018187s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.019188s | 0.021137s | 0.019530s | byte equality observed |
| weighted_tail_variate_means.test | 10 | 0.001502s | 0.001448s | 0.001445s | byte equality observed |
| weighted_variance.test | 10 | 0.001628s | 0.001775s | 0.001564s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44801983152).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
