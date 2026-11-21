# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.723882 | 2.099087 | 2.425990 | 0.003447 | 0.003274 | 0.003458 |
| covariance.test | RUN | 1.436737 | 5.385080 | 6.210104 | 0.003474 | 0.003498 | 0.003422 |
| droppable.test | RUN | 0.950721 | 2.746765 | 3.380028 | 0.003556 | 0.003355 | 0.003597 |
| error_of.test | RUN | 1.018802 | 2.752574 | 3.583743 | 0.003136 | 0.003071 | 0.003272 |
| extended_p_square.test | RUN | 1.034540 | 3.504887 | 3.645395 | 0.004724 | 0.005380 | 0.004567 |
| extended_p_square_quantile.test | RUN | 1.381032 | 5.510411 | 5.249385 | 0.008637 | 0.009375 | 0.008325 |
| external_accumulator.test | RUN | 0.905945 | 2.668463 | 3.178710 | 0.003316 | 0.003267 | 0.002995 |
| external_weights.test | RUN | 0.788740 | 2.097201 | 2.581481 | 0.003019 | 0.003234 | 0.003125 |
| kurtosis.test | RUN | 1.176197 | 3.335136 | 4.356563 | 0.004594 | 0.005224 | 0.004564 |
| max.test | RUN | 0.734867 | 1.997556 | 2.401473 | 0.003377 | 0.003360 | 0.003239 |
| mean.test | RUN | 0.983968 | 2.861535 | 3.488741 | 0.003539 | 0.003307 | 0.003480 |
| median.test | RUN | 1.366146 | 5.617647 | 5.365665 | 0.108438 | 0.133702 | 0.109696 |
| min.test | RUN | 0.746174 | 2.041824 | 2.319449 | 0.003574 | 0.003528 | 0.003523 |
| moment.test | RUN | 0.860102 | 2.309864 | 2.842767 | 0.003472 | 0.003445 | 0.003580 |
| p_square_cumul_dist.test | RUN | 1.123188 | 3.906368 | 4.023364 | 0.813962 | 1.036208 | 0.811413 |
| p_square_quantile.test | RUN | 0.965518 | 3.546966 | 3.409998 | 0.028319 | 0.028868 | 0.024789 |
| reference.test | RUN | 0.859252 | 2.322404 | 2.861135 | 0.003335 | 0.003167 | 0.003064 |
| rolling_count.test | RUN | 0.873927 | 2.571030 | 2.875951 | 0.003158 | 0.003450 | 0.003270 |
| rolling_sum.test | RUN | 0.871070 | 2.548188 | 2.737711 | 0.003466 | 0.003503 | 0.003340 |
| rolling_mean.test | RUN | 1.265619 | 4.680075 | 4.850521 | 0.003367 | 0.003350 | 0.003444 |
| rolling_variance.test | RUN | 1.435911 | 5.442181 | 5.569952 | 0.003467 | 0.003596 | 0.003469 |
| rolling_moment.test | RUN | 1.051965 | 3.142193 | 3.603549 | 0.003315 | 0.003463 | 0.003462 |
| skewness.test | RUN | 1.146592 | 3.209784 | 4.019829 | 0.004270 | 0.005145 | 0.004470 |
| sum.test | RUN | 0.807325 | 2.203325 | 2.678212 | 0.003374 | 0.003582 | 0.003386 |
| sum_kahan.test | RUN | 0.840100 | 2.363049 | 2.794349 | 0.017086 | 0.028215 | 0.017277 |
| tail.test | RUN | 0.902462 | 3.270409 | 3.182219 | 0.003282 | 0.003450 | 0.003534 |
| tail_mean.test | RUN | 1.300784 | 3.886346 | 4.748684 | 0.020687 | 0.029348 | 0.021325 |
| tail_quantile.test | RUN | 1.021445 | 3.189859 | 3.585448 | 0.024355 | 0.031418 | 0.023731 |
| variance.test | RUN | 1.009350 | 2.756714 | 3.543688 | 0.003344 | 0.003563 | 0.003458 |
| vector.test | RUN | 1.061589 | 3.448030 | 4.171826 | 0.003155 | 0.003337 | 0.003209 |
| weighted_covariance.test | RUN | 1.414481 | 5.219937 | 6.476168 | 0.003083 | 0.003350 | 0.002751 |
| weighted_extended_p_square.test | RUN | 0.975774 | 3.040057 | 3.213889 | 0.021238 | 0.024184 | 0.019702 |
| weighted_kurtosis.test | RUN | 1.147925 | 3.125646 | 4.111856 | 0.004038 | 0.005586 | 0.004340 |
| weighted_mean.test | RUN | 0.973022 | 2.756377 | 3.526799 | 0.002944 | 0.003160 | 0.002768 |
| weighted_median.test | RUN | 1.231703 | 3.827765 | 4.623859 | 1.056088 | 1.170613 | 1.101187 |
| weighted_moment.test | RUN | 0.790608 | 2.050019 | 2.642697 | 0.002889 | 0.003448 | 0.003062 |
| weighted_p_square_cumul_dist.test | RUN | 0.963590 | 3.195665 | 3.257938 | 0.117485 | 0.136556 | 0.109164 |
| weighted_p_square_quantile.test | RUN | 0.894871 | 3.076810 | 3.013625 | 0.026428 | 0.031126 | 0.025632 |
| weighted_skewness.test | RUN | 1.098265 | 2.963401 | 3.606551 | 0.004084 | 0.005913 | 0.004347 |
| weighted_sum.test | RUN | 0.599578 | 1.758510 | 2.110455 | 0.002992 | 0.003047 | 0.003106 |
| weighted_sum_kahan.test | RUN | 0.731604 | 1.923938 | 2.233726 | 0.010009 | 0.015388 | 0.009948 |
| weighted_variance.test | RUN | 1.237741 | 3.510894 | 4.510334 | 0.003479 | 0.003539 | 0.003609 |
| valarray.test | RUN | 1.124551 | 3.246282 | 4.119747 | 0.003557 | 0.003126 | 0.003251 |
| tail_variate_means.test | RUN | 1.441944 | 5.293694 | 5.754787 | 0.003215 | 0.003219 | 0.003054 |
| pot_quantile.test | RUN | 1.751836 | 5.829612 | 6.962260 | 0.011311 | 0.012962 | 0.010979 |
| weighted_pot_quantile.test | RUN | 1.720911 | 5.688112 | 7.018969 | 0.025667 | 0.030620 | 0.024872 |
| weighted_tail_mean.test | RUN | 1.554594 | 4.526322 | 5.928081 | 0.022182 | 0.028620 | 0.022732 |
| weighted_tail_quantile.test | RUN | 1.552399 | 3.975786 | 5.348629 | 0.019522 | 0.022740 | 0.019710 |
| weighted_tail_variate_means.test | RUN | 1.705670 | 5.038933 | 6.061603 | 0.002442 | 0.002372 | 0.002305 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.204× | 1.201×, 1.208× | 0.999× |
| clang | 1.005× | 1.003×, 1.007× | 0.999× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44830361139).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.002567s | 0.002494s | 0.002614s | byte equality observed |
| covariance.test | 1 | 0.002671s | 0.002584s | 0.002485s | byte equality observed |
| droppable.test | 1 | 0.002590s | 0.002463s | 0.002448s | byte equality observed |
| error_of.test | 1 | 0.002449s | 0.002401s | 0.002396s | byte equality observed |
| extended_p_square.test | 3 | 0.003541s | 0.003733s | 0.003416s | byte equality observed |
| extended_p_square_quantile.test | 3 | 0.006996s | 0.007226s | 0.006462s | byte equality observed |
| external_accumulator.test | 5 | 0.002137s | 0.002099s | 0.002036s | byte equality observed |
| external_weights.test | 5 | 0.002001s | 0.001944s | 0.001967s | byte equality observed |
| kurtosis.test | 4 | 0.003018s | 0.003587s | 0.002819s | byte equality observed |
| max.test | 8 | 0.002087s | 0.001919s | 0.002006s | byte equality observed |
| mean.test | 6 | 0.002125s | 0.002037s | 0.002049s | byte equality observed |
| median.test | 1 | 0.109694s | 0.124522s | 0.107168s | byte equality observed |
| min.test | 7 | 0.002069s | 0.002030s | 0.002048s | byte equality observed |
| moment.test | 5 | 0.002077s | 0.001958s | 0.002026s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.744375s | 1.014698s | 0.750232s | byte equality observed |
| p_square_quantile.test | 1 | 0.026868s | 0.028906s | 0.024310s | byte equality observed |
| pot_quantile.test | 2 | 0.010119s | 0.011333s | 0.009636s | byte equality observed |
| reference.test | 6 | 0.002106s | 0.002044s | 0.002058s | byte equality observed |
| rolling_count.test | 8 | 0.002101s | 0.002035s | 0.002045s | byte equality observed |
| rolling_mean.test | 8 | 0.002195s | 0.002101s | 0.002121s | byte equality observed |
| rolling_moment.test | 8 | 0.002180s | 0.002104s | 0.002112s | byte equality observed |
| rolling_sum.test | 7 | 0.002118s | 0.002049s | 0.001939s | byte equality observed |
| rolling_variance.test | 7 | 0.002205s | 0.002122s | 0.002127s | byte equality observed |
| skewness.test | 5 | 0.002976s | 0.003739s | 0.003050s | byte equality observed |
| sum.test | 7 | 0.002045s | 0.001974s | 0.001962s | byte equality observed |
| sum_kahan.test | 1 | 0.015659s | 0.026426s | 0.015634s | byte equality observed |
| tail.test | 9 | 0.002070s | 0.001973s | 0.001993s | byte equality observed |
| tail_mean.test | 1 | 0.019583s | 0.022784s | 0.020726s | byte equality observed |
| tail_quantile.test | 1 | 0.022926s | 0.026782s | 0.022804s | byte equality observed |
| tail_variate_means.test | 8 | 0.001992s | 0.001905s | 0.001981s | byte equality observed |
| valarray.test | 8 | 0.001981s | 0.001888s | 0.001965s | byte equality observed |
| variance.test | 8 | 0.002087s | 0.002035s | 0.002078s | byte equality observed |
| vector.test | 8 | 0.001999s | 0.001954s | 0.001920s | byte equality observed |
| weighted_covariance.test | 8 | 0.001983s | 0.001936s | 0.001912s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.019736s | 0.023241s | 0.019671s | byte equality observed |
| weighted_kurtosis.test | 4 | 0.003096s | 0.004146s | 0.002940s | byte equality observed |
| weighted_mean.test | 8 | 0.001992s | 0.001903s | 0.001895s | byte equality observed |
| weighted_median.test | 1 | 0.988648s | 1.127901s | 1.007273s | byte equality observed |
| weighted_moment.test | 8 | 0.001938s | 0.001882s | 0.001865s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.113254s | 0.139049s | 0.117116s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.026978s | 0.033846s | 0.025580s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.024903s | 0.027206s | 0.023574s | byte equality observed |
| weighted_skewness.test | 4 | 0.003185s | 0.004249s | 0.003103s | byte equality observed |
| weighted_sum.test | 8 | 0.001958s | 0.001904s | 0.001922s | byte equality observed |
| weighted_sum_kahan.test | 2 | 0.008723s | 0.013912s | 0.008630s | byte equality observed |
| weighted_tail_mean.test | 1 | 0.020379s | 0.023245s | 0.020481s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.021850s | 0.028124s | 0.021929s | byte equality observed |
| weighted_tail_variate_means.test | 7 | 0.002040s | 0.001902s | 0.001960s | byte equality observed |
| weighted_variance.test | 7 | 0.002176s | 0.002293s | 0.002102s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44830361139).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
