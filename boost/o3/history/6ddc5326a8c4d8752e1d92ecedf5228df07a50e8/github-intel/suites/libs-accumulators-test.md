# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.779622 | 2.342174 | 2.502327 | 0.003156 | 0.003127 | 0.002587 |
| covariance.test | RUN | 1.529438 | 5.996394 | 6.520083 | 0.003415 | 0.002998 | 0.003020 |
| droppable.test | RUN | 0.977388 | 3.163868 | 3.422752 | 0.003073 | 0.003048 | 0.002841 |
| error_of.test | RUN | 1.101994 | 3.087704 | 3.729880 | 0.002846 | 0.002962 | 0.002536 |
| extended_p_square.test | RUN | 1.156300 | 3.979705 | 3.864694 | 0.004854 | 0.004948 | 0.004520 |
| extended_p_square_quantile.test | RUN | 1.489550 | 6.129485 | 5.505210 | 0.009088 | 0.009609 | 0.008265 |
| external_accumulator.test | RUN | 0.956091 | 2.967679 | 3.350105 | 0.002880 | 0.002926 | 0.002791 |
| external_weights.test | RUN | 0.823744 | 2.340372 | 2.659409 | 0.002948 | 0.002785 | 0.002784 |
| kurtosis.test | RUN | 1.255374 | 3.821245 | 4.473580 | 0.003975 | 0.004905 | 0.003934 |
| max.test | RUN | 0.796259 | 2.276118 | 2.483801 | 0.002945 | 0.003071 | 0.002945 |
| mean.test | RUN | 1.022651 | 3.241214 | 3.637102 | 0.003094 | 0.003111 | 0.002961 |
| median.test | RUN | 1.446114 | 6.312238 | 5.588196 | 0.136239 | 0.151430 | 0.136595 |
| min.test | RUN | 0.793721 | 2.278783 | 2.513211 | 0.003035 | 0.002916 | 0.002759 |
| moment.test | RUN | 0.899968 | 2.707311 | 3.023237 | 0.003024 | 0.002974 | 0.003445 |
| p_square_cumul_dist.test | RUN | 1.176329 | 4.556132 | 4.187634 | 0.936288 | 1.154646 | 0.938613 |
| p_square_quantile.test | RUN | 1.029072 | 4.107035 | 3.528598 | 0.029084 | 0.033010 | 0.028424 |
| reference.test | RUN | 0.897303 | 2.537343 | 2.926063 | 0.003104 | 0.002969 | 0.002856 |
| rolling_count.test | RUN | 0.918808 | 2.812180 | 3.040819 | 0.003014 | 0.003027 | 0.002942 |
| rolling_sum.test | RUN | 0.895270 | 2.951333 | 2.920688 | 0.003045 | 0.003047 | 0.002969 |
| rolling_mean.test | RUN | 1.352267 | 5.284563 | 5.115710 | 0.003203 | 0.003181 | 0.003119 |
| rolling_variance.test | RUN | 1.517894 | 6.032582 | 5.855576 | 0.004259 | 0.003023 | 0.003002 |
| rolling_moment.test | RUN | 1.115130 | 3.579014 | 3.815086 | 0.003146 | 0.003209 | 0.002989 |
| skewness.test | RUN | 1.228373 | 3.641813 | 4.281362 | 0.004051 | 0.004748 | 0.003950 |
| sum.test | RUN | 0.854487 | 2.505785 | 2.832469 | 0.003209 | 0.003041 | 0.002939 |
| sum_kahan.test | RUN | 0.919003 | 2.637073 | 3.012533 | 0.014194 | 0.023362 | 0.013966 |
| tail.test | RUN | 0.976454 | 3.715180 | 3.332402 | 0.002910 | 0.003047 | 0.002882 |
| tail_mean.test | RUN | 1.335595 | 4.259143 | 4.844390 | 0.024099 | 0.026514 | 0.024732 |
| tail_quantile.test | RUN | 1.102166 | 3.503368 | 3.762161 | 0.027868 | 0.034263 | 0.027066 |
| variance.test | RUN | 1.041874 | 3.152810 | 3.702083 | 0.002757 | 0.002874 | 0.002887 |
| vector.test | RUN | 1.117830 | 3.887922 | 4.494339 | 0.002974 | 0.003002 | 0.002754 |
| weighted_covariance.test | RUN | 1.505607 | 5.868435 | 6.617619 | 0.002732 | 0.002882 | 0.002707 |
| weighted_extended_p_square.test | RUN | 1.041061 | 3.560210 | 3.430816 | 0.024747 | 0.028798 | 0.022857 |
| weighted_kurtosis.test | RUN | 1.227369 | 3.562745 | 4.237113 | 0.004187 | 0.005679 | 0.003912 |
| weighted_mean.test | RUN | 1.022035 | 3.163832 | 3.608476 | 0.002697 | 0.003080 | 0.002810 |
| weighted_median.test | RUN | 1.343950 | 4.334680 | 4.725170 | 1.275558 | 1.375228 | 1.280728 |
| weighted_moment.test | RUN | 0.848594 | 2.307607 | 2.728493 | 0.002719 | 0.002883 | 0.002736 |
| weighted_p_square_cumul_dist.test | RUN | 1.043595 | 3.482753 | 3.338610 | 0.129155 | 0.175793 | 0.127310 |
| weighted_p_square_quantile.test | RUN | 0.982482 | 3.630137 | 2.911217 | 0.029755 | 0.035860 | 0.029632 |
| weighted_skewness.test | RUN | 1.168239 | 3.382001 | 4.014277 | 0.004090 | 0.005614 | 0.003855 |
| weighted_sum.test | RUN | 0.719536 | 1.961942 | 2.181935 | 0.002568 | 0.002908 | 0.002544 |
| weighted_sum_kahan.test | RUN | 0.667058 | 2.138522 | 2.323744 | 0.008254 | 0.012828 | 0.008229 |
| weighted_variance.test | RUN | 1.303678 | 3.884922 | 4.633778 | 0.003017 | 0.003277 | 0.002651 |
| valarray.test | RUN | 1.221827 | 3.677691 | 4.348899 | 0.002934 | 0.002707 | 0.002828 |
| tail_variate_means.test | RUN | 1.538749 | 5.776940 | 5.986516 | 0.002790 | 0.002800 | 0.002744 |
| pot_quantile.test | RUN | 1.816080 | 6.491565 | 7.038689 | 0.012300 | 0.014225 | 0.011497 |
| weighted_pot_quantile.test | RUN | 1.806156 | 6.306205 | 7.221315 | 0.021028 | 0.033850 | 0.029021 |
| weighted_tail_mean.test | RUN | 1.626365 | 4.939278 | 6.002695 | 0.026212 | 0.028023 | 0.020449 |
| weighted_tail_quantile.test | RUN | 1.589417 | 4.213419 | 5.302438 | 0.020125 | 0.023582 | 0.019901 |
| weighted_tail_variate_means.test | RUN | 1.817604 | 5.335692 | 6.299484 | 0.002124 | 0.001974 | 0.001948 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.160× | 1.155×, 1.165× | 1.007× |
| clang | 1.000× | 0.989×, 1.011× | 0.993× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44597827043).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.002394s | 0.002549s | 0.002303s | byte equality observed |
| covariance.test | 1 | 0.002375s | 0.002361s | 0.002318s | byte equality observed |
| droppable.test | 1 | 0.002376s | 0.002417s | 0.002419s | byte equality observed |
| error_of.test | 1 | 0.002289s | 0.002204s | 0.002278s | byte equality observed |
| extended_p_square.test | 4 | 0.003802s | 0.003900s | 0.003511s | byte equality observed |
| extended_p_square_quantile.test | 3 | 0.007776s | 0.008300s | 0.007226s | byte equality observed |
| external_accumulator.test | 7 | 0.002116s | 0.002113s | 0.002068s | byte equality observed |
| external_weights.test | 7 | 0.002032s | 0.001988s | 0.001984s | byte equality observed |
| kurtosis.test | 5 | 0.003102s | 0.004075s | 0.003016s | byte equality observed |
| max.test | 6 | 0.002123s | 0.002087s | 0.002077s | byte equality observed |
| mean.test | 7 | 0.002138s | 0.002074s | 0.002084s | byte equality observed |
| median.test | 1 | 0.130395s | 0.166631s | 0.126881s | byte equality observed |
| min.test | 6 | 0.002122s | 0.002025s | 0.002041s | byte equality observed |
| moment.test | 6 | 0.002093s | 0.002011s | 0.002079s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.795012s | 0.990507s | 0.783532s | byte equality observed |
| p_square_quantile.test | 1 | 0.030381s | 0.031136s | 0.027967s | byte equality observed |
| pot_quantile.test | 2 | 0.011177s | 0.012702s | 0.010846s | byte equality observed |
| reference.test | 8 | 0.002151s | 0.002069s | 0.002047s | byte equality observed |
| rolling_count.test | 9 | 0.002156s | 0.002076s | 0.002065s | byte equality observed |
| rolling_mean.test | 8 | 0.002261s | 0.002170s | 0.002147s | byte equality observed |
| rolling_moment.test | 9 | 0.002211s | 0.002087s | 0.002105s | byte equality observed |
| rolling_sum.test | 9 | 0.002123s | 0.002030s | 0.002018s | byte equality observed |
| rolling_variance.test | 7 | 0.002218s | 0.002114s | 0.002107s | byte equality observed |
| skewness.test | 5 | 0.003107s | 0.004077s | 0.003077s | byte equality observed |
| sum.test | 7 | 0.002083s | 0.002032s | 0.001956s | byte equality observed |
| sum_kahan.test | 1 | 0.012960s | 0.021794s | 0.013016s | byte equality observed |
| tail.test | 9 | 0.002107s | 0.002056s | 0.002008s | byte equality observed |
| tail_mean.test | 1 | 0.022899s | 0.023462s | 0.023657s | byte equality observed |
| tail_quantile.test | 1 | 0.026620s | 0.028258s | 0.025604s | byte equality observed |
| tail_variate_means.test | 8 | 0.002073s | 0.001992s | 0.001973s | byte equality observed |
| valarray.test | 8 | 0.002067s | 0.002006s | 0.001930s | byte equality observed |
| variance.test | 8 | 0.002127s | 0.002042s | 0.001996s | byte equality observed |
| vector.test | 5 | 0.002065s | 0.001996s | 0.001942s | byte equality observed |
| weighted_covariance.test | 7 | 0.002031s | 0.001988s | 0.001962s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.022469s | 0.025708s | 0.020895s | byte equality observed |
| weighted_kurtosis.test | 4 | 0.003146s | 0.004741s | 0.003215s | byte equality observed |
| weighted_mean.test | 9 | 0.002024s | 0.001972s | 0.001919s | byte equality observed |
| weighted_median.test | 1 | 1.112500s | 1.197655s | 1.111811s | byte equality observed |
| weighted_moment.test | 8 | 0.001998s | 0.001917s | 0.001933s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.125772s | 0.179949s | 0.129045s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.029463s | 0.034601s | 0.028800s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.028644s | 0.030234s | 0.027368s | byte equality observed |
| weighted_skewness.test | 4 | 0.003274s | 0.004732s | 0.003186s | byte equality observed |
| weighted_sum.test | 8 | 0.002024s | 0.001923s | 0.001863s | byte equality observed |
| weighted_sum_kahan.test | 2 | 0.007456s | 0.011977s | 0.007253s | byte equality observed |
| weighted_tail_mean.test | 1 | 0.024341s | 0.024551s | 0.023330s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.025145s | 0.027689s | 0.024999s | byte equality observed |
| weighted_tail_variate_means.test | 7 | 0.002074s | 0.002010s | 0.001909s | byte equality observed |
| weighted_variance.test | 8 | 0.002216s | 0.002364s | 0.002138s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44597827043).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
