# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.690182 | 1.973963 | 2.307199 | 0.003311 | 0.003354 | 0.003303 |
| covariance.test | RUN | 1.369008 | 4.939190 | 5.968398 | 0.003413 | 0.003084 | 0.003296 |
| droppable.test | RUN | 0.863025 | 2.705114 | 3.218010 | 0.003434 | 0.003379 | 0.003310 |
| error_of.test | RUN | 0.940731 | 2.609718 | 3.486256 | 0.003012 | 0.002987 | 0.002991 |
| extended_p_square.test | RUN | 1.011905 | 3.321816 | 3.520798 | 0.004628 | 0.004915 | 0.004453 |
| extended_p_square_quantile.test | RUN | 1.294556 | 5.099206 | 5.054849 | 0.008473 | 0.009249 | 0.008024 |
| external_accumulator.test | RUN | 0.869095 | 2.542787 | 3.105157 | 0.003208 | 0.003216 | 0.003185 |
| external_weights.test | RUN | 0.738518 | 1.916739 | 2.462780 | 0.003130 | 0.002920 | 0.003000 |
| kurtosis.test | RUN | 1.129111 | 3.173452 | 4.137795 | 0.004144 | 0.004671 | 0.004098 |
| max.test | RUN | 0.693788 | 1.958119 | 2.282267 | 0.003316 | 0.002941 | 0.003076 |
| mean.test | RUN | 0.958722 | 2.682003 | 3.351749 | 0.003286 | 0.003426 | 0.002722 |
| median.test | RUN | 1.386320 | 5.336917 | 5.051413 | 0.108910 | 0.150576 | 0.112411 |
| min.test | RUN | 0.713979 | 1.926103 | 2.249913 | 0.003164 | 0.003240 | 0.003154 |
| moment.test | RUN | 0.841760 | 2.218844 | 2.722996 | 0.003248 | 0.003356 | 0.002990 |
| p_square_cumul_dist.test | RUN | 1.058681 | 3.814702 | 3.739410 | 0.810879 | 1.055300 | 0.805759 |
| p_square_quantile.test | RUN | 0.911556 | 3.308021 | 3.235827 | 0.028090 | 0.026635 | 0.024183 |
| reference.test | RUN | 0.789940 | 2.189597 | 2.669717 | 0.003205 | 0.003084 | 0.002912 |
| rolling_count.test | RUN | 0.813579 | 2.452867 | 2.772825 | 0.002857 | 0.003176 | 0.003275 |
| rolling_sum.test | RUN | 0.815899 | 2.385689 | 2.833861 | 0.003226 | 0.003162 | 0.003195 |
| rolling_mean.test | RUN | 1.146802 | 4.465758 | 4.520267 | 0.002702 | 0.003107 | 0.003529 |
| rolling_variance.test | RUN | 1.326431 | 5.107601 | 5.229718 | 0.002648 | 0.003554 | 0.003344 |
| rolling_moment.test | RUN | 0.983119 | 2.999130 | 3.448038 | 0.003305 | 0.003090 | 0.003644 |
| skewness.test | RUN | 1.050404 | 3.195185 | 3.901456 | 0.004145 | 0.004883 | 0.005978 |
| sum.test | RUN | 0.739811 | 2.108083 | 2.548174 | 0.003164 | 0.003415 | 0.003084 |
| sum_kahan.test | RUN | 0.795810 | 2.254009 | 2.676642 | 0.016715 | 0.027841 | 0.016665 |
| tail.test | RUN | 0.846690 | 3.065939 | 3.050949 | 0.002981 | 0.003146 | 0.003192 |
| tail_mean.test | RUN | 1.183082 | 3.613427 | 4.390790 | 0.020897 | 0.027803 | 0.021654 |
| tail_quantile.test | RUN | 0.984156 | 3.000226 | 3.475518 | 0.023038 | 0.030246 | 0.024172 |
| variance.test | RUN | 0.938145 | 2.655906 | 3.392762 | 0.003211 | 0.003330 | 0.003275 |
| vector.test | RUN | 1.002636 | 3.260552 | 4.101708 | 0.002969 | 0.003213 | 0.002931 |
| weighted_covariance.test | RUN | 1.370350 | 5.020060 | 6.197307 | 0.002962 | 0.003211 | 0.003006 |
| weighted_extended_p_square.test | RUN | 0.927069 | 2.978311 | 3.163684 | 0.021102 | 0.024506 | 0.019767 |
| weighted_kurtosis.test | RUN | 1.068408 | 2.987358 | 3.945471 | 0.003957 | 0.005469 | 0.004096 |
| weighted_mean.test | RUN | 0.934935 | 2.659200 | 3.393227 | 0.002946 | 0.003182 | 0.002950 |
| weighted_median.test | RUN | 1.171399 | 3.612838 | 4.386127 | 1.068644 | 1.178574 | 1.101490 |
| weighted_moment.test | RUN | 0.749161 | 1.968700 | 2.548255 | 0.002878 | 0.003170 | 0.002954 |
| weighted_p_square_cumul_dist.test | RUN | 0.917420 | 3.093377 | 3.115875 | 0.115224 | 0.132766 | 0.110082 |
| weighted_p_square_quantile.test | RUN | 0.864593 | 2.902461 | 2.564914 | 0.026029 | 0.031023 | 0.025690 |
| weighted_skewness.test | RUN | 0.974194 | 2.733929 | 3.716890 | 0.003957 | 0.005527 | 0.004060 |
| weighted_sum.test | RUN | 0.635830 | 1.674509 | 1.998421 | 0.002853 | 0.002975 | 0.002959 |
| weighted_sum_kahan.test | RUN | 0.679400 | 1.825595 | 2.118895 | 0.009361 | 0.015272 | 0.009540 |
| weighted_variance.test | RUN | 1.160425 | 3.335941 | 4.261546 | 0.003165 | 0.003543 | 0.003155 |
| valarray.test | RUN | 1.061425 | 3.097748 | 3.905208 | 0.002999 | 0.003202 | 0.002941 |
| tail_variate_means.test | RUN | 1.394187 | 4.959531 | 5.468725 | 0.003044 | 0.003107 | 0.003027 |
| pot_quantile.test | RUN | 1.629753 | 5.608953 | 6.507105 | 0.011002 | 0.012550 | 0.010549 |
| weighted_pot_quantile.test | RUN | 1.634773 | 5.438849 | 6.664947 | 0.029218 | 0.030895 | 0.025245 |
| weighted_tail_mean.test | RUN | 1.448431 | 4.372134 | 5.551812 | 0.022395 | 0.026448 | 0.022319 |
| weighted_tail_quantile.test | RUN | 1.417242 | 3.903933 | 4.954944 | 0.019380 | 0.022377 | 0.019407 |
| weighted_tail_variate_means.test | RUN | 1.650998 | 4.548190 | 5.631121 | 0.002291 | 0.002282 | 0.002149 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.211× | 1.217×, 1.205× | 0.994× |
| clang | 0.997× | 0.996×, 0.999× | 1.003× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44813597235).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.002613s | 0.002544s | 0.002504s | byte equality observed |
| covariance.test | 1 | 0.002639s | 0.002491s | 0.002524s | byte equality observed |
| droppable.test | 1 | 0.002518s | 0.002545s | 0.002457s | byte equality observed |
| error_of.test | 1 | 0.002371s | 0.002354s | 0.002418s | byte equality observed |
| extended_p_square.test | 5 | 0.003461s | 0.003689s | 0.003454s | byte equality observed |
| extended_p_square_quantile.test | 3 | 0.006752s | 0.007636s | 0.006494s | byte equality observed |
| external_accumulator.test | 6 | 0.002145s | 0.002085s | 0.002080s | byte equality observed |
| external_weights.test | 8 | 0.002001s | 0.001959s | 0.001963s | byte equality observed |
| kurtosis.test | 3 | 0.003056s | 0.003752s | 0.002831s | byte equality observed |
| max.test | 8 | 0.002089s | 0.002029s | 0.002035s | byte equality observed |
| mean.test | 8 | 0.002112s | 0.002069s | 0.002053s | byte equality observed |
| median.test | 1 | 0.108540s | 0.153818s | 0.106444s | byte equality observed |
| min.test | 5 | 0.002083s | 0.002045s | 0.002019s | byte equality observed |
| moment.test | 7 | 0.002072s | 0.002048s | 0.002018s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.766799s | 0.978947s | 0.751500s | byte equality observed |
| p_square_quantile.test | 1 | 0.026879s | 0.025230s | 0.024405s | byte equality observed |
| pot_quantile.test | 2 | 0.010065s | 0.011345s | 0.009657s | byte equality observed |
| reference.test | 9 | 0.002091s | 0.002053s | 0.002066s | byte equality observed |
| rolling_count.test | 9 | 0.002124s | 0.002053s | 0.002041s | byte equality observed |
| rolling_mean.test | 8 | 0.002181s | 0.002123s | 0.002129s | byte equality observed |
| rolling_moment.test | 8 | 0.002196s | 0.002141s | 0.002136s | byte equality observed |
| rolling_sum.test | 8 | 0.002096s | 0.002060s | 0.002065s | byte equality observed |
| rolling_variance.test | 7 | 0.002185s | 0.002119s | 0.002156s | byte equality observed |
| skewness.test | 2 | 0.002987s | 0.003763s | 0.003178s | byte equality observed |
| sum.test | 9 | 0.002064s | 0.002005s | 0.002034s | byte equality observed |
| sum_kahan.test | 1 | 0.015745s | 0.026583s | 0.015773s | byte equality observed |
| tail.test | 8 | 0.002060s | 0.001991s | 0.002036s | byte equality observed |
| tail_mean.test | 1 | 0.020004s | 0.022010s | 0.021357s | byte equality observed |
| tail_quantile.test | 1 | 0.023019s | 0.028073s | 0.023376s | byte equality observed |
| tail_variate_means.test | 8 | 0.002030s | 0.001884s | 0.001982s | byte equality observed |
| valarray.test | 8 | 0.002024s | 0.001936s | 0.001956s | byte equality observed |
| variance.test | 9 | 0.002107s | 0.002051s | 0.002048s | byte equality observed |
| vector.test | 9 | 0.001990s | 0.001931s | 0.001877s | byte equality observed |
| weighted_covariance.test | 8 | 0.002009s | 0.001939s | 0.001922s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.021660s | 0.022052s | 0.020725s | byte equality observed |
| weighted_kurtosis.test | 4 | 0.003123s | 0.004237s | 0.002952s | byte equality observed |
| weighted_mean.test | 9 | 0.001987s | 0.001909s | 0.001924s | byte equality observed |
| weighted_median.test | 1 | 0.994073s | 1.118961s | 1.007610s | byte equality observed |
| weighted_moment.test | 8 | 0.001965s | 0.001895s | 0.001903s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.115402s | 0.176870s | 0.113889s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.026802s | 0.033172s | 0.025916s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.024778s | 0.027133s | 0.023877s | byte equality observed |
| weighted_skewness.test | 5 | 0.003166s | 0.004284s | 0.003141s | byte equality observed |
| weighted_sum.test | 9 | 0.001984s | 0.001917s | 0.001937s | byte equality observed |
| weighted_sum_kahan.test | 2 | 0.008793s | 0.013889s | 0.008733s | byte equality observed |
| weighted_tail_mean.test | 1 | 0.020152s | 0.022402s | 0.020402s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.022125s | 0.025456s | 0.022129s | byte equality observed |
| weighted_tail_variate_means.test | 6 | 0.002062s | 0.001909s | 0.002078s | byte equality observed |
| weighted_variance.test | 6 | 0.002181s | 0.002264s | 0.002166s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44813597235).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
