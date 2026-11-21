# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.837564 | 2.525561 | 2.788031 | 0.002972 | 0.002912 | 0.002853 |
| covariance.test | RUN | 1.643725 | 6.367743 | 7.212774 | 0.003038 | 0.002945 | 0.002866 |
| droppable.test | RUN | 1.054766 | 3.429331 | 3.793749 | 0.002965 | 0.003046 | 0.002871 |
| error_of.test | RUN | 1.132949 | 3.399373 | 4.229920 | 0.002753 | 0.002837 | 0.002708 |
| extended_p_square.test | RUN | 1.221333 | 4.217859 | 4.275904 | 0.004602 | 0.005108 | 0.004366 |
| extended_p_square_quantile.test | RUN | 1.536490 | 6.495434 | 6.039339 | 0.009845 | 0.010754 | 0.009593 |
| external_accumulator.test | RUN | 1.011078 | 3.321751 | 3.680291 | 0.002961 | 0.002935 | 0.002701 |
| external_weights.test | RUN | 0.903964 | 2.480649 | 2.944571 | 0.002788 | 0.002782 | 0.002669 |
| kurtosis.test | RUN | 1.366336 | 4.110226 | 5.000936 | 0.004129 | 0.004805 | 0.004112 |
| max.test | RUN | 0.865069 | 2.491420 | 2.715595 | 0.003021 | 0.002608 | 0.002781 |
| mean.test | RUN | 1.137330 | 3.466624 | 3.973292 | 0.003080 | 0.003075 | 0.002876 |
| median.test | RUN | 1.526260 | 6.744493 | 6.114527 | 0.143541 | 0.161319 | 0.137845 |
| min.test | RUN | 0.859736 | 2.442996 | 2.732439 | 0.002521 | 0.003031 | 0.002623 |
| moment.test | RUN | 0.989853 | 2.821529 | 3.350344 | 0.002978 | 0.002886 | 0.002852 |
| p_square_cumul_dist.test | RUN | 1.292767 | 4.881859 | 4.654356 | 0.991945 | 1.234637 | 0.951698 |
| p_square_quantile.test | RUN | 1.135350 | 4.399524 | 3.889310 | 0.033388 | 0.035059 | 0.029061 |
| reference.test | RUN | 0.965028 | 2.746644 | 3.306041 | 0.002853 | 0.002628 | 0.002941 |
| rolling_count.test | RUN | 0.991378 | 3.163523 | 3.250650 | 0.002901 | 0.002526 | 0.002741 |
| rolling_sum.test | RUN | 0.994916 | 3.128613 | 3.371041 | 0.003072 | 0.002804 | 0.002796 |
| rolling_mean.test | RUN | 1.466591 | 5.651213 | 5.598948 | 0.002994 | 0.003079 | 0.003044 |
| rolling_variance.test | RUN | 1.626888 | 6.461987 | 6.404161 | 0.002813 | 0.003078 | 0.002990 |
| rolling_moment.test | RUN | 1.202820 | 3.803611 | 4.189520 | 0.002946 | 0.002904 | 0.003075 |
| skewness.test | RUN | 1.259286 | 3.995676 | 4.684198 | 0.004307 | 0.004867 | 0.004145 |
| sum.test | RUN | 0.889714 | 2.750372 | 3.082217 | 0.002803 | 0.002881 | 0.002840 |
| sum_kahan.test | RUN | 0.951882 | 2.884048 | 3.297669 | 0.023287 | 0.030013 | 0.022159 |
| tail.test | RUN | 1.024486 | 4.063331 | 3.677703 | 0.002710 | 0.002939 | 0.002745 |
| tail_mean.test | RUN | 1.402531 | 4.628729 | 5.400481 | 0.022474 | 0.027581 | 0.024211 |
| tail_quantile.test | RUN | 1.195929 | 3.831158 | 4.188113 | 0.026742 | 0.031550 | 0.025732 |
| variance.test | RUN | 1.122534 | 3.400189 | 4.017141 | 0.003111 | 0.003007 | 0.002869 |
| vector.test | RUN | 1.208264 | 4.186929 | 4.877418 | 0.002779 | 0.002991 | 0.002755 |
| weighted_covariance.test | RUN | 1.618279 | 6.329754 | 7.425665 | 0.002593 | 0.002723 | 0.002675 |
| weighted_extended_p_square.test | RUN | 1.124953 | 3.872556 | 3.806717 | 0.026571 | 0.030056 | 0.024062 |
| weighted_kurtosis.test | RUN | 1.293156 | 3.845317 | 4.747464 | 0.003948 | 0.005578 | 0.004002 |
| weighted_mean.test | RUN | 1.113191 | 3.451483 | 4.036723 | 0.002736 | 0.002784 | 0.002629 |
| weighted_median.test | RUN | 1.429988 | 4.706432 | 5.290726 | 1.256067 | 1.341268 | 1.270085 |
| weighted_moment.test | RUN | 0.904289 | 2.519105 | 3.057239 | 0.002641 | 0.002796 | 0.002717 |
| weighted_p_square_cumul_dist.test | RUN | 1.104479 | 3.884063 | 3.741430 | 0.143506 | 0.181922 | 0.132151 |
| weighted_p_square_quantile.test | RUN | 1.022280 | 3.809617 | 3.473847 | 0.034535 | 0.037898 | 0.031340 |
| weighted_skewness.test | RUN | 1.247227 | 3.665659 | 4.229601 | 0.004051 | 0.005005 | 0.004167 |
| weighted_sum.test | RUN | 0.758032 | 2.085904 | 2.422371 | 0.002866 | 0.002847 | 0.002684 |
| weighted_sum_kahan.test | RUN | 0.755670 | 2.269139 | 2.581039 | 0.012736 | 0.016286 | 0.012364 |
| weighted_variance.test | RUN | 1.353730 | 4.291163 | 5.158639 | 0.002939 | 0.003251 | 0.003015 |
| valarray.test | RUN | 1.276739 | 3.989641 | 4.784586 | 0.002714 | 0.002860 | 0.002790 |
| tail_variate_means.test | RUN | 1.630441 | 6.288949 | 6.646550 | 0.002893 | 0.002945 | 0.002751 |
| pot_quantile.test | RUN | 1.914414 | 6.903189 | 7.914952 | 0.013242 | 0.013272 | 0.012314 |
| weighted_pot_quantile.test | RUN | 1.978035 | 6.702367 | 7.774702 | 0.020937 | 0.023015 | 0.028642 |
| weighted_tail_mean.test | RUN | 1.719736 | 5.379348 | 6.617747 | 0.023757 | 0.026925 | 0.023380 |
| weighted_tail_quantile.test | RUN | 1.664465 | 4.652387 | 6.027325 | 0.019018 | 0.021943 | 0.018285 |
| weighted_tail_variate_means.test | RUN | 1.954826 | 5.767853 | 6.607980 | 0.002070 | 0.001847 | 0.001904 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.121× | 1.120×, 1.122× | 0.998× |
| clang | 0.985× | 0.981×, 0.990× | 0.997× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1359 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44927958294).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.002450s | 0.002379s | 0.002387s | byte equality observed |
| covariance.test | 1 | 0.002472s | 0.002623s | 0.002749s | byte equality observed |
| droppable.test | 1 | 0.002461s | 0.002430s | 0.002448s | byte equality observed |
| error_of.test | 1 | 0.002438s | 0.002647s | 0.002424s | byte equality observed |
| extended_p_square.test | 4 | 0.003792s | 0.003926s | 0.003650s | byte equality observed |
| extended_p_square_quantile.test | 2 | 0.008703s | 0.009330s | 0.008140s | byte equality observed |
| external_accumulator.test | 5 | 0.002169s | 0.002130s | 0.002049s | byte equality observed |
| external_weights.test | 6 | 0.002057s | 0.001999s | 0.002007s | byte equality observed |
| kurtosis.test | 5 | 0.003282s | 0.003950s | 0.003400s | byte equality observed |
| max.test | 6 | 0.002122s | 0.002076s | 0.002071s | byte equality observed |
| mean.test | 6 | 0.002150s | 0.002085s | 0.002012s | byte equality observed |
| median.test | 1 | 0.147965s | 0.154604s | 0.135597s | byte equality observed |
| min.test | 7 | 0.002109s | 0.002108s | 0.002065s | byte equality observed |
| moment.test | 6 | 0.002110s | 0.002078s | 0.002076s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.830429s | 1.000448s | 0.803849s | byte equality observed |
| p_square_quantile.test | 1 | 0.031848s | 0.034780s | 0.029492s | byte equality observed |
| pot_quantile.test | 2 | 0.012961s | 0.012000s | 0.012039s | byte equality observed |
| reference.test | 6 | 0.002116s | 0.002136s | 0.002074s | byte equality observed |
| rolling_count.test | 8 | 0.002137s | 0.002101s | 0.002080s | byte equality observed |
| rolling_mean.test | 8 | 0.002226s | 0.002219s | 0.002190s | byte equality observed |
| rolling_moment.test | 8 | 0.002151s | 0.002160s | 0.002126s | byte equality observed |
| rolling_sum.test | 9 | 0.002090s | 0.002097s | 0.002114s | byte equality observed |
| rolling_variance.test | 7 | 0.002227s | 0.002244s | 0.002182s | byte equality observed |
| skewness.test | 5 | 0.003102s | 0.004010s | 0.003461s | byte equality observed |
| sum.test | 7 | 0.002048s | 0.002078s | 0.002031s | byte equality observed |
| sum_kahan.test | 1 | 0.022523s | 0.028778s | 0.021282s | byte equality observed |
| tail.test | 8 | 0.002125s | 0.002034s | 0.002043s | byte equality observed |
| tail_mean.test | 1 | 0.021448s | 0.022108s | 0.022173s | byte equality observed |
| tail_quantile.test | 1 | 0.025464s | 0.029482s | 0.023725s | byte equality observed |
| tail_variate_means.test | 8 | 0.002073s | 0.001982s | 0.002001s | byte equality observed |
| valarray.test | 9 | 0.002051s | 0.001994s | 0.001993s | byte equality observed |
| variance.test | 9 | 0.002089s | 0.002067s | 0.002016s | byte equality observed |
| vector.test | 9 | 0.002042s | 0.002007s | 0.002015s | byte equality observed |
| weighted_covariance.test | 7 | 0.002082s | 0.001991s | 0.001953s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.026102s | 0.028624s | 0.023567s | byte equality observed |
| weighted_kurtosis.test | 4 | 0.003523s | 0.004606s | 0.003620s | byte equality observed |
| weighted_mean.test | 8 | 0.002068s | 0.002004s | 0.001953s | byte equality observed |
| weighted_median.test | 1 | 1.081338s | 1.154802s | 1.084125s | byte equality observed |
| weighted_moment.test | 8 | 0.002025s | 0.001939s | 0.001918s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.143749s | 0.168067s | 0.141618s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.035561s | 0.038487s | 0.033155s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.030835s | 0.030128s | 0.028349s | byte equality observed |
| weighted_skewness.test | 4 | 0.003610s | 0.004652s | 0.003656s | byte equality observed |
| weighted_sum.test | 8 | 0.002036s | 0.001990s | 0.001929s | byte equality observed |
| weighted_sum_kahan.test | 2 | 0.012263s | 0.015274s | 0.011499s | byte equality observed |
| weighted_tail_mean.test | 1 | 0.022492s | 0.023129s | 0.022922s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.025108s | 0.026590s | 0.023994s | byte equality observed |
| weighted_tail_variate_means.test | 7 | 0.002128s | 0.002052s | 0.002041s | byte equality observed |
| weighted_variance.test | 7 | 0.002327s | 0.002427s | 0.002246s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44927958294).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
