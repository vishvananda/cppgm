# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.797617 | 2.342074 | 2.509742 | 0.002944 | 0.003082 | 0.002883 |
| covariance.test | RUN | 1.514180 | 6.011417 | 6.423393 | 0.002916 | 0.003043 | 0.002913 |
| droppable.test | RUN | 0.956855 | 3.228689 | 3.518245 | 0.002900 | 0.003247 | 0.002652 |
| error_of.test | RUN | 1.048118 | 3.149027 | 3.655924 | 0.002844 | 0.002896 | 0.002592 |
| extended_p_square.test | RUN | 1.127792 | 3.988131 | 3.896912 | 0.004492 | 0.004916 | 0.004455 |
| extended_p_square_quantile.test | RUN | 1.441764 | 6.023543 | 5.572566 | 0.010606 | 0.009885 | 0.008429 |
| external_accumulator.test | RUN | 0.931370 | 3.036855 | 3.323915 | 0.002906 | 0.002898 | 0.002778 |
| external_weights.test | RUN | 0.809260 | 2.307040 | 2.664726 | 0.002705 | 0.002684 | 0.002647 |
| kurtosis.test | RUN | 1.244270 | 3.834188 | 4.358026 | 0.004026 | 0.005239 | 0.003845 |
| max.test | RUN | 0.772764 | 2.343668 | 2.591925 | 0.003004 | 0.002939 | 0.003043 |
| mean.test | RUN | 1.018702 | 3.176625 | 3.651794 | 0.002796 | 0.003119 | 0.002701 |
| median.test | RUN | 1.442269 | 6.364765 | 5.589237 | 0.136872 | 0.150876 | 0.138012 |
| min.test | RUN | 0.776038 | 2.283718 | 2.518377 | 0.002614 | 0.002817 | 0.002786 |
| moment.test | RUN | 0.875499 | 2.706754 | 2.923620 | 0.002903 | 0.003040 | 0.002930 |
| p_square_cumul_dist.test | RUN | 1.168444 | 4.531017 | 4.106246 | 0.952859 | 1.152130 | 0.927463 |
| p_square_quantile.test | RUN | 1.036067 | 4.137871 | 3.570744 | 0.030607 | 0.032172 | 0.028019 |
| reference.test | RUN | 0.874123 | 2.579252 | 2.789514 | 0.003065 | 0.002996 | 0.002646 |
| rolling_count.test | RUN | 0.906477 | 2.947059 | 3.058257 | 0.002631 | 0.003003 | 0.002902 |
| rolling_sum.test | RUN | 0.930201 | 2.924545 | 3.075401 | 0.003036 | 0.003183 | 0.002798 |
| rolling_mean.test | RUN | 1.351854 | 5.279337 | 4.988738 | 0.002975 | 0.003206 | 0.003030 |
| rolling_variance.test | RUN | 1.478605 | 6.073063 | 5.668440 | 0.002976 | 0.003090 | 0.002716 |
| rolling_moment.test | RUN | 1.146578 | 3.601775 | 3.797911 | 0.003062 | 0.003069 | 0.003051 |
| skewness.test | RUN | 1.213037 | 3.680578 | 4.196181 | 0.004085 | 0.005118 | 0.004008 |
| sum.test | RUN | 0.841164 | 2.545340 | 2.747984 | 0.002881 | 0.002984 | 0.002781 |
| sum_kahan.test | RUN | 0.881764 | 2.700195 | 2.959290 | 0.013836 | 0.022884 | 0.013710 |
| tail.test | RUN | 0.972015 | 3.755502 | 3.266962 | 0.002788 | 0.002947 | 0.002704 |
| tail_mean.test | RUN | 1.366255 | 4.346716 | 4.803590 | 0.023822 | 0.026622 | 0.024952 |
| tail_quantile.test | RUN | 1.101135 | 3.411020 | 3.694192 | 0.027916 | 0.032236 | 0.027087 |
| variance.test | RUN | 1.059946 | 3.153556 | 3.605527 | 0.002666 | 0.002903 | 0.002825 |
| vector.test | RUN | 1.161389 | 3.982711 | 4.358916 | 0.002643 | 0.003090 | 0.002674 |
| weighted_covariance.test | RUN | 1.523392 | 5.989852 | 6.554225 | 0.002780 | 0.002662 | 0.002677 |
| weighted_extended_p_square.test | RUN | 1.023152 | 3.550354 | 3.367793 | 0.024070 | 0.028505 | 0.022695 |
| weighted_kurtosis.test | RUN | 1.188240 | 3.592750 | 4.202530 | 0.003777 | 0.005551 | 0.004072 |
| weighted_mean.test | RUN | 1.039932 | 3.193268 | 3.601869 | 0.002574 | 0.002746 | 0.002668 |
| weighted_median.test | RUN | 1.310606 | 4.227397 | 4.727245 | 1.290234 | 1.377186 | 1.282371 |
| weighted_moment.test | RUN | 0.826174 | 2.387121 | 2.700021 | 0.002773 | 0.002877 | 0.002622 |
| weighted_p_square_cumul_dist.test | RUN | 1.021680 | 3.667463 | 3.354784 | 0.128618 | 0.153270 | 0.126972 |
| weighted_p_square_quantile.test | RUN | 0.953685 | 3.647241 | 2.906103 | 0.029758 | 0.034200 | 0.028547 |
| weighted_skewness.test | RUN | 1.048306 | 3.177094 | 3.899015 | 0.003389 | 0.005700 | 0.003867 |
| weighted_sum.test | RUN | 0.691206 | 2.015642 | 2.138883 | 0.002189 | 0.003000 | 0.002640 |
| weighted_sum_kahan.test | RUN | 0.762462 | 2.150047 | 2.362998 | 0.008234 | 0.013495 | 0.008239 |
| weighted_variance.test | RUN | 1.270780 | 4.001127 | 4.504597 | 0.003108 | 0.003076 | 0.002904 |
| valarray.test | RUN | 1.127126 | 3.709046 | 4.280619 | 0.002947 | 0.002768 | 0.002672 |
| tail_variate_means.test | RUN | 1.501624 | 5.969328 | 5.893582 | 0.002662 | 0.002935 | 0.002682 |
| pot_quantile.test | RUN | 1.823121 | 6.605454 | 7.030467 | 0.011737 | 0.013693 | 0.011804 |
| weighted_pot_quantile.test | RUN | 1.848864 | 6.424449 | 6.997614 | 0.029451 | 0.034672 | 0.027366 |
| weighted_tail_mean.test | RUN | 1.587407 | 5.024848 | 5.947136 | 0.025746 | 0.028398 | 0.025203 |
| weighted_tail_quantile.test | RUN | 1.537620 | 4.573966 | 5.194263 | 0.019874 | 0.023111 | 0.019756 |
| weighted_tail_variate_means.test | RUN | 1.751401 | 5.143243 | 6.022359 | 0.002079 | 0.002043 | 0.001887 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.155× | 1.153×, 1.156× | 1.003× |
| clang | 0.993× | 0.994×, 0.991× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45754596224).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.002508s | 0.002424s | 0.002364s | byte equality observed |
| covariance.test | 1 | 0.002423s | 0.002377s | 0.002364s | byte equality observed |
| droppable.test | 1 | 0.002377s | 0.002303s | 0.002067s | byte equality observed |
| error_of.test | 1 | 0.002398s | 0.002230s | 0.002217s | byte equality observed |
| extended_p_square.test | 4 | 0.003839s | 0.003911s | 0.003675s | byte equality observed |
| extended_p_square_quantile.test | 2 | 0.007699s | 0.008404s | 0.007451s | byte equality observed |
| external_accumulator.test | 7 | 0.002090s | 0.002052s | 0.002029s | byte equality observed |
| external_weights.test | 6 | 0.002025s | 0.002000s | 0.001984s | byte equality observed |
| kurtosis.test | 5 | 0.003093s | 0.004084s | 0.002997s | byte equality observed |
| max.test | 7 | 0.002138s | 0.002066s | 0.002079s | byte equality observed |
| mean.test | 5 | 0.002149s | 0.002074s | 0.002062s | byte equality observed |
| median.test | 1 | 0.130207s | 0.167708s | 0.134264s | byte equality observed |
| min.test | 4 | 0.002098s | 0.002046s | 0.002005s | byte equality observed |
| moment.test | 4 | 0.002124s | 0.001968s | 0.002073s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.806893s | 1.010803s | 0.791646s | byte equality observed |
| p_square_quantile.test | 1 | 0.030261s | 0.031265s | 0.027187s | byte equality observed |
| pot_quantile.test | 2 | 0.011060s | 0.012587s | 0.010664s | byte equality observed |
| reference.test | 8 | 0.002093s | 0.002047s | 0.001992s | byte equality observed |
| rolling_count.test | 7 | 0.002123s | 0.001988s | 0.001968s | byte equality observed |
| rolling_mean.test | 7 | 0.002235s | 0.002128s | 0.002131s | byte equality observed |
| rolling_moment.test | 8 | 0.002177s | 0.002075s | 0.002039s | byte equality observed |
| rolling_sum.test | 7 | 0.002116s | 0.002000s | 0.002043s | byte equality observed |
| rolling_variance.test | 7 | 0.002280s | 0.002082s | 0.002119s | byte equality observed |
| skewness.test | 5 | 0.003117s | 0.003978s | 0.002946s | byte equality observed |
| sum.test | 8 | 0.002060s | 0.002018s | 0.001992s | byte equality observed |
| sum_kahan.test | 1 | 0.013243s | 0.022224s | 0.012774s | byte equality observed |
| tail.test | 8 | 0.002083s | 0.001968s | 0.002022s | byte equality observed |
| tail_mean.test | 1 | 0.022863s | 0.022907s | 0.023433s | byte equality observed |
| tail_quantile.test | 1 | 0.026007s | 0.029724s | 0.025522s | byte equality observed |
| tail_variate_means.test | 8 | 0.002060s | 0.002043s | 0.001953s | byte equality observed |
| valarray.test | 8 | 0.002080s | 0.002018s | 0.001972s | byte equality observed |
| variance.test | 8 | 0.002106s | 0.002065s | 0.002017s | byte equality observed |
| vector.test | 9 | 0.002032s | 0.001992s | 0.001978s | byte equality observed |
| weighted_covariance.test | 9 | 0.002008s | 0.001975s | 0.001950s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.022375s | 0.025448s | 0.020810s | byte equality observed |
| weighted_kurtosis.test | 3 | 0.003163s | 0.004746s | 0.003055s | byte equality observed |
| weighted_mean.test | 8 | 0.001992s | 0.001939s | 0.001886s | byte equality observed |
| weighted_median.test | 1 | 1.114847s | 1.194928s | 1.114874s | byte equality observed |
| weighted_moment.test | 9 | 0.001958s | 0.001928s | 0.001952s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.126435s | 0.152662s | 0.128688s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.029334s | 0.035573s | 0.029426s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.028229s | 0.029986s | 0.027499s | byte equality observed |
| weighted_skewness.test | 4 | 0.003137s | 0.004655s | 0.003202s | byte equality observed |
| weighted_sum.test | 7 | 0.001969s | 0.001926s | 0.001890s | byte equality observed |
| weighted_sum_kahan.test | 2 | 0.007416s | 0.011880s | 0.007219s | byte equality observed |
| weighted_tail_mean.test | 1 | 0.024537s | 0.025479s | 0.023775s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.026110s | 0.028816s | 0.025000s | byte equality observed |
| weighted_tail_variate_means.test | 8 | 0.002052s | 0.002017s | 0.001939s | byte equality observed |
| weighted_variance.test | 6 | 0.002200s | 0.002405s | 0.002190s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45754596224).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
