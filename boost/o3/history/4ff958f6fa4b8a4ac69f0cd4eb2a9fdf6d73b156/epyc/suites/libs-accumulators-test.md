# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.614471 | 1.679368 | 1.621266 | 0.003242 | 0.003059 | 0.002627 |
| covariance.test | RUN | 1.170223 | 4.036458 | 4.179894 | 0.003350 | 0.003001 | 0.003028 |
| droppable.test | RUN | 0.737187 | 2.099573 | 2.298215 | 0.003189 | 0.007425 | 0.002607 |
| error_of.test | RUN | 0.858272 | 2.044894 | 2.397216 | 0.002714 | 0.002945 | 0.002714 |
| extended_p_square.test | RUN | 0.884912 | 2.632696 | 2.455539 | 0.004357 | 0.004271 | 0.004030 |
| extended_p_square_quantile.test | RUN | 1.139235 | 4.117168 | 3.682979 | 0.007276 | 0.007573 | 0.006435 |
| external_accumulator.test | RUN | 0.742604 | 2.026653 | 2.182989 | 0.003409 | 0.002904 | 0.002842 |
| external_weights.test | RUN | 0.615162 | 1.503547 | 1.749830 | 0.002969 | 0.002842 | 0.002569 |
| kurtosis.test | RUN | 0.983827 | 2.555608 | 2.907455 | 0.003978 | 0.004046 | 0.003599 |
| max.test | RUN | 0.618013 | 1.587053 | 1.590417 | 0.002852 | 0.002655 | 0.002834 |
| mean.test | RUN | 0.794271 | 2.167543 | 2.393942 | 0.003556 | 0.003132 | 0.002661 |
| median.test | RUN | 1.102207 | 4.281112 | 3.614571 | 0.091642 | 0.097273 | 0.092562 |
| min.test | RUN | 0.600813 | 1.546195 | 1.619143 | 0.003342 | 0.002935 | 0.002705 |
| moment.test | RUN | 0.668150 | 1.763701 | 1.915952 | 0.003171 | 0.003055 | 0.002733 |
| p_square_cumul_dist.test | RUN | 0.929680 | 2.879662 | 2.809061 | 0.643927 | 0.726909 | 0.642374 |
| p_square_quantile.test | RUN | 0.863993 | 2.580324 | 2.295591 | 0.021972 | 0.020573 | 0.019530 |
| reference.test | RUN | 0.734992 | 1.693402 | 1.939302 | 0.002923 | 0.002963 | 0.002591 |
| rolling_count.test | RUN | 0.780678 | 1.823285 | 1.907288 | 0.003172 | 0.003308 | 0.002538 |
| rolling_sum.test | RUN | 0.715241 | 1.914826 | 2.022558 | 0.003278 | 0.003255 | 0.002913 |
| rolling_mean.test | RUN | 1.027172 | 3.516652 | 3.432286 | 0.003143 | 0.003142 | 0.003080 |
| rolling_variance.test | RUN | 1.139727 | 4.132963 | 3.848744 | 0.003413 | 0.003240 | 0.003022 |
| rolling_moment.test | RUN | 0.853819 | 2.434979 | 2.529227 | 0.002841 | 0.003191 | 0.003452 |
| skewness.test | RUN | 0.914390 | 2.431567 | 2.849392 | 0.003938 | 0.004453 | 0.003777 |
| sum.test | RUN | 0.644400 | 1.675627 | 1.782484 | 0.003168 | 0.003218 | 0.002957 |
| sum_kahan.test | RUN | 0.686144 | 1.784554 | 1.921903 | 0.012334 | 0.021038 | 0.011001 |
| tail.test | RUN | 0.743151 | 2.474203 | 2.164265 | 0.003323 | 0.003186 | 0.002813 |
| tail_mean.test | RUN | 1.082797 | 2.866191 | 3.196676 | 0.018255 | 0.021247 | 0.018720 |
| tail_quantile.test | RUN | 0.898745 | 2.331340 | 2.466005 | 0.021684 | 0.023257 | 0.019862 |
| variance.test | RUN | 0.846806 | 2.117445 | 2.412340 | 0.003138 | 0.003046 | 0.002984 |
| vector.test | RUN | 0.867827 | 2.612570 | 2.915995 | 0.003064 | 0.003103 | 0.002810 |
| weighted_covariance.test | RUN | 1.147369 | 4.009396 | 4.376998 | 0.003090 | 0.003061 | 0.002743 |
| weighted_extended_p_square.test | RUN | 0.801276 | 2.298647 | 2.238918 | 0.017354 | 0.019438 | 0.016278 |
| weighted_kurtosis.test | RUN | 0.920938 | 2.293298 | 2.750549 | 0.003709 | 0.004837 | 0.003514 |
| weighted_mean.test | RUN | 0.801960 | 2.093392 | 2.410308 | 0.002757 | 0.002839 | 0.002528 |
| weighted_median.test | RUN | 1.011131 | 2.895671 | 3.081813 | 0.874940 | 0.941744 | 0.873006 |
| weighted_moment.test | RUN | 0.640993 | 1.615231 | 1.744824 | 0.002680 | 0.002809 | 0.002690 |
| weighted_p_square_cumul_dist.test | RUN | 0.775642 | 2.385677 | 2.172879 | 0.087609 | 0.106759 | 0.088373 |
| weighted_p_square_quantile.test | RUN | 0.734847 | 2.323742 | 1.911572 | 0.020761 | 0.025007 | 0.019408 |
| weighted_skewness.test | RUN | 0.874614 | 2.181586 | 2.619432 | 0.003759 | 0.004596 | 0.003411 |
| weighted_sum.test | RUN | 0.540996 | 1.284614 | 1.415147 | 0.002800 | 0.002708 | 0.002453 |
| weighted_sum_kahan.test | RUN | 0.539794 | 1.421488 | 1.500009 | 0.007673 | 0.011796 | 0.006531 |
| weighted_variance.test | RUN | 0.984901 | 2.569986 | 3.036021 | 0.003288 | 0.002600 | 0.003042 |
| valarray.test | RUN | 0.914207 | 2.372987 | 2.882992 | 0.003032 | 0.002706 | 0.002684 |
| tail_variate_means.test | RUN | 1.170336 | 3.869530 | 3.970099 | 0.003340 | 0.002964 | 0.002660 |
| pot_quantile.test | RUN | 1.405155 | 4.291733 | 4.668260 | 0.009854 | 0.011199 | 0.008386 |
| weighted_pot_quantile.test | RUN | 1.425806 | 4.228024 | 4.580947 | 0.021959 | 0.025476 | 0.022093 |
| weighted_tail_mean.test | RUN | 1.247045 | 3.338697 | 3.829560 | 0.019522 | 0.021795 | 0.016315 |
| weighted_tail_quantile.test | RUN | 1.269969 | 3.091866 | 3.490952 | 0.016482 | 0.017350 | 0.014680 |
| weighted_tail_variate_means.test | RUN | 1.443608 | 3.617423 | 4.006028 | 0.002378 | 0.001974 | 0.002039 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.147×† | 1.179×, 1.116× | 1.011× |
| clang | 0.990× | 0.981×, 0.998× | 0.985× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45790989032).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.002378s | 0.002322s | 0.002196s | byte equality observed |
| covariance.test | 1 | 0.002392s | 0.002288s | 0.002204s | byte equality observed |
| droppable.test | 1 | 0.002370s | 0.002326s | 0.002291s | byte equality observed |
| error_of.test | 1 | 0.002318s | 0.002273s | 0.002111s | byte equality observed |
| extended_p_square.test | 5 | 0.003119s | 0.003010s | 0.002948s | byte equality observed |
| extended_p_square_quantile.test | 3 | 0.005521s | 0.005911s | 0.005168s | byte equality observed |
| external_accumulator.test | 5 | 0.001880s | 0.001791s | 0.001834s | byte equality observed |
| external_weights.test | 5 | 0.001824s | 0.001712s | 0.001760s | byte equality observed |
| kurtosis.test | 5 | 0.002600s | 0.003199s | 0.002533s | byte equality observed |
| max.test | 8 | 0.001866s | 0.001798s | 0.001818s | byte equality observed |
| mean.test | 5 | 0.001911s | 0.001820s | 0.001851s | byte equality observed |
| median.test | 1 | 0.086682s | 0.103273s | 0.085893s | byte equality observed |
| min.test | 5 | 0.001916s | 0.001782s | 0.001835s | byte equality observed |
| moment.test | 4 | 0.001903s | 0.001808s | 0.001856s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.600155s | 0.709863s | 0.602428s | byte equality observed |
| p_square_quantile.test | 1 | 0.020873s | 0.020219s | 0.019787s | byte equality observed |
| pot_quantile.test | 2 | 0.008255s | 0.009380s | 0.007977s | byte equality observed |
| reference.test | 8 | 0.001925s | 0.001811s | 0.001874s | byte equality observed |
| rolling_count.test | 8 | 0.001907s | 0.001794s | 0.001875s | byte equality observed |
| rolling_mean.test | 9 | 0.001990s | 0.001861s | 0.001934s | byte equality observed |
| rolling_moment.test | 7 | 0.001999s | 0.001880s | 0.001933s | byte equality observed |
| rolling_sum.test | 8 | 0.001888s | 0.001773s | 0.001804s | byte equality observed |
| rolling_variance.test | 8 | 0.001948s | 0.001886s | 0.001889s | byte equality observed |
| skewness.test | 6 | 0.002512s | 0.003154s | 0.002468s | byte equality observed |
| sum.test | 9 | 0.001865s | 0.001785s | 0.001802s | byte equality observed |
| sum_kahan.test | 1 | 0.011332s | 0.019419s | 0.009879s | byte equality observed |
| tail.test | 9 | 0.001840s | 0.001772s | 0.001780s | byte equality observed |
| tail_mean.test | 2 | 0.016732s | 0.018244s | 0.017239s | byte equality observed |
| tail_quantile.test | 1 | 0.020111s | 0.022690s | 0.018521s | byte equality observed |
| tail_variate_means.test | 9 | 0.001825s | 0.001729s | 0.001778s | byte equality observed |
| valarray.test | 10 | 0.001795s | 0.001743s | 0.001730s | byte equality observed |
| variance.test | 9 | 0.001880s | 0.001769s | 0.001851s | byte equality observed |
| vector.test | 10 | 0.001792s | 0.001686s | 0.001722s | byte equality observed |
| weighted_covariance.test | 9 | 0.001793s | 0.001734s | 0.001724s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.016099s | 0.018293s | 0.014798s | byte equality observed |
| weighted_kurtosis.test | 4 | 0.002552s | 0.003667s | 0.002515s | byte equality observed |
| weighted_mean.test | 8 | 0.001799s | 0.001712s | 0.001731s | byte equality observed |
| weighted_median.test | 1 | 0.803648s | 0.866638s | 0.816721s | byte equality observed |
| weighted_moment.test | 9 | 0.001787s | 0.001695s | 0.001719s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.092064s | 0.114751s | 0.092055s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.020182s | 0.025780s | 0.019748s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.020289s | 0.021701s | 0.020015s | byte equality observed |
| weighted_skewness.test | 6 | 0.002586s | 0.003746s | 0.002555s | byte equality observed |
| weighted_sum.test | 10 | 0.001756s | 0.001735s | 0.001733s | byte equality observed |
| weighted_sum_kahan.test | 2 | 0.006561s | 0.010680s | 0.005773s | byte equality observed |
| weighted_tail_mean.test | 2 | 0.017706s | 0.019248s | 0.017787s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.018549s | 0.021526s | 0.018271s | byte equality observed |
| weighted_tail_variate_means.test | 8 | 0.001802s | 0.001764s | 0.001751s | byte equality observed |
| weighted_variance.test | 9 | 0.001913s | 0.002010s | 0.001847s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45790989032).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
