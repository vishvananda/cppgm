# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.566907 | 1.688396 | 1.891385 | 0.002555 | 0.002244 | 0.002207 |
| covariance.test | RUN | 1.136979 | 4.500463 | 4.889155 | 0.002276 | 0.002303 | 0.002111 |
| droppable.test | RUN | 0.717841 | 2.335194 | 2.576942 | 0.002410 | 0.002268 | 0.001967 |
| error_of.test | RUN | 0.796710 | 2.223225 | 2.837112 | 0.001979 | 0.002083 | 0.001965 |
| extended_p_square.test | RUN | 0.833604 | 2.903955 | 2.882854 | 0.003657 | 0.003804 | 0.003229 |
| extended_p_square_quantile.test | RUN | 1.099106 | 4.630827 | 4.154877 | 0.007162 | 0.007509 | 0.006633 |
| external_accumulator.test | RUN | 0.720390 | 2.225769 | 2.498958 | 0.002237 | 0.002285 | 0.002097 |
| external_weights.test | RUN | 0.619803 | 1.686292 | 2.025829 | 0.002114 | 0.002203 | 0.001910 |
| kurtosis.test | RUN | 0.930773 | 2.802333 | 3.310153 | 0.003303 | 0.003709 | 0.002846 |
| max.test | RUN | 0.576994 | 1.704665 | 1.838806 | 0.002477 | 0.002418 | 0.002187 |
| mean.test | RUN | 0.772977 | 2.370938 | 2.698082 | 0.002357 | 0.002334 | 0.002091 |
| median.test | RUN | 1.090209 | 4.817356 | 4.215957 | 0.102353 | 0.118010 | 0.103799 |
| min.test | RUN | 0.579774 | 1.689117 | 1.890856 | 0.002257 | 0.002229 | 0.002228 |
| moment.test | RUN | 0.668494 | 1.949950 | 2.221680 | 0.002194 | 0.002264 | 0.002236 |
| p_square_cumul_dist.test | RUN | 0.887680 | 3.414837 | 3.132608 | 0.729134 | 0.902782 | 0.701363 |
| p_square_quantile.test | RUN | 0.790766 | 3.014630 | 2.718508 | 0.022159 | 0.024179 | 0.021741 |
| reference.test | RUN | 0.654639 | 1.866175 | 2.064988 | 0.001937 | 0.001812 | 0.002285 |
| rolling_count.test | RUN | 0.694710 | 2.146219 | 2.315767 | 0.002166 | 0.002269 | 0.002196 |
| rolling_sum.test | RUN | 0.652953 | 2.013393 | 2.304619 | 0.002155 | 0.002103 | 0.002243 |
| rolling_mean.test | RUN | 1.004699 | 3.888017 | 3.834338 | 0.002310 | 0.002038 | 0.002258 |
| rolling_variance.test | RUN | 1.139624 | 4.508058 | 4.358259 | 0.002241 | 0.002325 | 0.002316 |
| rolling_moment.test | RUN | 0.829032 | 2.607929 | 2.870752 | 0.002428 | 0.002208 | 0.002423 |
| skewness.test | RUN | 0.859172 | 2.690138 | 3.194634 | 0.002977 | 0.003989 | 0.003106 |
| sum.test | RUN | 0.597116 | 1.871628 | 2.075112 | 0.002294 | 0.002365 | 0.002183 |
| sum_kahan.test | RUN | 0.658635 | 1.977127 | 2.225728 | 0.011362 | 0.018646 | 0.011192 |
| tail.test | RUN | 0.685846 | 2.785897 | 2.524715 | 0.002258 | 0.002219 | 0.002242 |
| tail_mean.test | RUN | 1.004259 | 3.173487 | 3.702612 | 0.019720 | 0.021095 | 0.019855 |
| tail_quantile.test | RUN | 0.810250 | 2.592600 | 2.838096 | 0.021614 | 0.029871 | 0.020382 |
| variance.test | RUN | 0.761350 | 2.348383 | 2.770677 | 0.002218 | 0.002194 | 0.002411 |
| vector.test | RUN | 0.833874 | 2.886592 | 3.349677 | 0.002227 | 0.002275 | 0.002152 |
| weighted_covariance.test | RUN | 1.130468 | 4.515296 | 5.027979 | 0.002051 | 0.002169 | 0.002381 |
| weighted_extended_p_square.test | RUN | 0.765296 | 2.638690 | 2.538815 | 0.018952 | 0.021367 | 0.016048 |
| weighted_kurtosis.test | RUN | 0.887239 | 2.616354 | 3.174433 | 0.003166 | 0.004328 | 0.003033 |
| weighted_mean.test | RUN | 0.755565 | 2.363987 | 2.770425 | 0.001996 | 0.001850 | 0.002243 |
| weighted_median.test | RUN | 0.983661 | 3.163241 | 3.644386 | 0.978706 | 1.050571 | 0.985363 |
| weighted_moment.test | RUN | 0.620969 | 1.759666 | 2.000848 | 0.002020 | 0.002031 | 0.002246 |
| weighted_p_square_cumul_dist.test | RUN | 0.752217 | 2.662276 | 2.564159 | 0.104005 | 0.120060 | 0.097235 |
| weighted_p_square_quantile.test | RUN | 0.705096 | 2.621222 | 2.345995 | 0.022108 | 0.027210 | 0.022270 |
| weighted_skewness.test | RUN | 0.830060 | 2.269526 | 2.820626 | 0.002763 | 0.004152 | 0.003066 |
| weighted_sum.test | RUN | 0.513186 | 1.470806 | 1.669005 | 0.002050 | 0.002019 | 0.002103 |
| weighted_sum_kahan.test | RUN | 0.477647 | 1.578620 | 1.745789 | 0.006162 | 0.010237 | 0.006757 |
| weighted_variance.test | RUN | 0.939662 | 2.906058 | 3.464085 | 0.002194 | 0.002467 | 0.002335 |
| valarray.test | RUN | 0.875066 | 2.743590 | 3.269390 | 0.002104 | 0.001884 | 0.002358 |
| tail_variate_means.test | RUN | 1.105592 | 4.382419 | 4.571727 | 0.002134 | 0.002392 | 0.002296 |
| pot_quantile.test | RUN | 1.347601 | 4.897158 | 5.347586 | 0.008810 | 0.010708 | 0.008654 |
| weighted_pot_quantile.test | RUN | 1.338701 | 4.692936 | 5.378420 | 0.016774 | 0.026268 | 0.022646 |
| weighted_tail_mean.test | RUN | 1.170575 | 3.732411 | 4.601665 | 0.019658 | 0.022253 | 0.019325 |
| weighted_tail_quantile.test | RUN | 1.161461 | 3.179339 | 4.010525 | 0.016028 | 0.018421 | 0.015677 |
| weighted_tail_variate_means.test | RUN | 1.326249 | 3.825201 | 4.681675 | 0.001599 | 0.001523 | 0.001564 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.172× | 1.161×, 1.183× | 1.005× |
| clang | 0.989× | 0.990×, 0.989× | 0.991× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45710374989).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.001915s | 0.001885s | 0.001818s | byte equality observed |
| covariance.test | 1 | 0.002013s | 0.001778s | 0.001934s | byte equality observed |
| droppable.test | 1 | 0.001944s | 0.001844s | 0.001802s | byte equality observed |
| error_of.test | 1 | 0.001909s | 0.001816s | 0.001956s | byte equality observed |
| extended_p_square.test | 5 | 0.002901s | 0.002994s | 0.002808s | byte equality observed |
| extended_p_square_quantile.test | 3 | 0.006104s | 0.006640s | 0.005784s | byte equality observed |
| external_accumulator.test | 9 | 0.001564s | 0.001528s | 0.001509s | byte equality observed |
| external_weights.test | 9 | 0.001540s | 0.001528s | 0.001477s | byte equality observed |
| kurtosis.test | 6 | 0.002310s | 0.003116s | 0.002258s | byte equality observed |
| max.test | 8 | 0.001585s | 0.001573s | 0.001535s | byte equality observed |
| mean.test | 9 | 0.001588s | 0.001563s | 0.001552s | byte equality observed |
| median.test | 1 | 0.100158s | 0.116657s | 0.098270s | byte equality observed |
| min.test | 8 | 0.001566s | 0.001538s | 0.001528s | byte equality observed |
| moment.test | 10 | 0.001561s | 0.001499s | 0.001495s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.633524s | 0.803260s | 0.618048s | byte equality observed |
| p_square_quantile.test | 1 | 0.021655s | 0.023834s | 0.020619s | byte equality observed |
| pot_quantile.test | 3 | 0.008383s | 0.009438s | 0.008124s | byte equality observed |
| reference.test | 10 | 0.001535s | 0.001506s | 0.001489s | byte equality observed |
| rolling_count.test | 10 | 0.001595s | 0.001534s | 0.001517s | byte equality observed |
| rolling_mean.test | 10 | 0.001669s | 0.001616s | 0.001594s | byte equality observed |
| rolling_moment.test | 10 | 0.001645s | 0.001578s | 0.001564s | byte equality observed |
| rolling_sum.test | 10 | 0.001578s | 0.001569s | 0.001526s | byte equality observed |
| rolling_variance.test | 9 | 0.001674s | 0.001633s | 0.001589s | byte equality observed |
| skewness.test | 6 | 0.002280s | 0.003024s | 0.002311s | byte equality observed |
| sum.test | 10 | 0.001535s | 0.001519s | 0.001505s | byte equality observed |
| sum_kahan.test | 2 | 0.010400s | 0.017537s | 0.010454s | byte equality observed |
| tail.test | 10 | 0.001538s | 0.001481s | 0.001477s | byte equality observed |
| tail_mean.test | 2 | 0.017578s | 0.018051s | 0.018489s | byte equality observed |
| tail_quantile.test | 1 | 0.020329s | 0.023477s | 0.020505s | byte equality observed |
| tail_variate_means.test | 10 | 0.001594s | 0.001511s | 0.001504s | byte equality observed |
| valarray.test | 10 | 0.001545s | 0.001487s | 0.001477s | byte equality observed |
| variance.test | 10 | 0.001573s | 0.001545s | 0.001529s | byte equality observed |
| vector.test | 10 | 0.001526s | 0.001489s | 0.001451s | byte equality observed |
| weighted_covariance.test | 10 | 0.001546s | 0.001473s | 0.001466s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.017986s | 0.020371s | 0.015858s | byte equality observed |
| weighted_kurtosis.test | 6 | 0.002252s | 0.003573s | 0.002350s | byte equality observed |
| weighted_mean.test | 10 | 0.001492s | 0.001443s | 0.001433s | byte equality observed |
| weighted_median.test | 1 | 0.856138s | 0.927655s | 0.859526s | byte equality observed |
| weighted_moment.test | 10 | 0.001474s | 0.001427s | 0.001401s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.101569s | 0.144581s | 0.101558s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.021659s | 0.026464s | 0.021628s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.021573s | 0.023424s | 0.020871s | byte equality observed |
| weighted_skewness.test | 5 | 0.002276s | 0.003523s | 0.002324s | byte equality observed |
| weighted_sum.test | 10 | 0.001456s | 0.001423s | 0.001403s | byte equality observed |
| weighted_sum_kahan.test | 3 | 0.005786s | 0.009370s | 0.005673s | byte equality observed |
| weighted_tail_mean.test | 2 | 0.018365s | 0.019709s | 0.017954s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.019433s | 0.022050s | 0.019015s | byte equality observed |
| weighted_tail_variate_means.test | 7 | 0.001519s | 0.001480s | 0.001464s | byte equality observed |
| weighted_variance.test | 7 | 0.001651s | 0.001787s | 0.001600s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45710374989).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
