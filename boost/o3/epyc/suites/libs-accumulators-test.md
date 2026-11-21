# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.720156 | 1.981446 | 2.427395 | 0.003278 | 0.003293 | 0.003204 |
| covariance.test | RUN | 1.391193 | 4.954083 | 6.270048 | 0.003292 | 0.003315 | 0.003328 |
| droppable.test | RUN | 0.865972 | 2.715874 | 3.315423 | 0.003351 | 0.003431 | 0.003327 |
| error_of.test | RUN | 0.954184 | 2.541864 | 3.535751 | 0.003027 | 0.003035 | 0.003109 |
| extended_p_square.test | RUN | 1.035605 | 3.262219 | 3.610284 | 0.004576 | 0.004852 | 0.004073 |
| extended_p_square_quantile.test | RUN | 1.292100 | 5.018989 | 5.286346 | 0.007928 | 0.009298 | 0.008043 |
| external_accumulator.test | RUN | 0.872833 | 2.486855 | 3.188698 | 0.003073 | 0.003508 | 0.003234 |
| external_weights.test | RUN | 0.747203 | 2.024115 | 2.473976 | 0.002762 | 0.003115 | 0.003043 |
| kurtosis.test | RUN | 1.138012 | 3.247268 | 4.272522 | 0.004100 | 0.004824 | 0.004627 |
| max.test | RUN | 0.727568 | 1.839660 | 2.284004 | 0.003128 | 0.003454 | 0.003276 |
| mean.test | RUN | 0.962206 | 2.789619 | 3.472011 | 0.003326 | 0.003154 | 0.003400 |
| median.test | RUN | 1.317926 | 5.225747 | 5.155290 | 0.110560 | 0.136773 | 0.112098 |
| min.test | RUN | 0.712475 | 1.969310 | 2.366458 | 0.003236 | 0.003379 | 0.003401 |
| moment.test | RUN | 0.791722 | 2.179081 | 2.845289 | 0.003354 | 0.003298 | 0.003198 |
| p_square_cumul_dist.test | RUN | 1.058225 | 3.748718 | 3.945822 | 0.816296 | 1.033364 | 0.797200 |
| p_square_quantile.test | RUN | 0.927718 | 3.260132 | 3.337665 | 0.026416 | 0.028141 | 0.024871 |
| reference.test | RUN | 0.817433 | 2.182866 | 2.661143 | 0.003037 | 0.003159 | 0.003465 |
| rolling_count.test | RUN | 0.839199 | 2.367915 | 2.911420 | 0.002983 | 0.003343 | 0.003356 |
| rolling_sum.test | RUN | 0.828255 | 2.402780 | 2.914696 | 0.003319 | 0.003338 | 0.003267 |
| rolling_mean.test | RUN | 1.184353 | 4.403756 | 4.744124 | 0.003292 | 0.003572 | 0.003130 |
| rolling_variance.test | RUN | 1.352234 | 5.004874 | 5.428161 | 0.002839 | 0.003524 | 0.003310 |
| rolling_moment.test | RUN | 1.023774 | 3.003480 | 3.566635 | 0.003694 | 0.003078 | 0.003628 |
| skewness.test | RUN | 1.077458 | 3.059547 | 3.995428 | 0.004082 | 0.004913 | 0.004252 |
| sum.test | RUN | 0.760986 | 2.071989 | 2.613696 | 0.003568 | 0.003164 | 0.003429 |
| sum_kahan.test | RUN | 0.816079 | 2.221073 | 2.812794 | 0.016773 | 0.027867 | 0.016937 |
| tail.test | RUN | 0.873840 | 3.115509 | 3.190446 | 0.002443 | 0.003282 | 0.003248 |
| tail_mean.test | RUN | 1.182677 | 3.557200 | 4.642918 | 0.020604 | 0.027289 | 0.022000 |
| tail_quantile.test | RUN | 0.984619 | 2.961933 | 3.567563 | 0.023653 | 0.028778 | 0.024041 |
| variance.test | RUN | 0.962588 | 2.623415 | 3.482160 | 0.003367 | 0.003328 | 0.003292 |
| vector.test | RUN | 1.030953 | 3.202657 | 4.228547 | 0.002896 | 0.003190 | 0.003026 |
| weighted_covariance.test | RUN | 1.414563 | 4.928348 | 6.386880 | 0.002861 | 0.003192 | 0.003288 |
| weighted_extended_p_square.test | RUN | 0.951979 | 2.965232 | 3.267608 | 0.019340 | 0.025061 | 0.018998 |
| weighted_kurtosis.test | RUN | 1.136320 | 3.000323 | 4.027828 | 0.004169 | 0.005351 | 0.003738 |
| weighted_mean.test | RUN | 0.923597 | 2.624088 | 3.470344 | 0.002861 | 0.003098 | 0.003105 |
| weighted_median.test | RUN | 1.223769 | 3.610082 | 4.531811 | 1.056442 | 1.178753 | 1.098860 |
| weighted_moment.test | RUN | 0.762902 | 2.024142 | 2.692761 | 0.002778 | 0.003079 | 0.003007 |
| weighted_p_square_cumul_dist.test | RUN | 0.915906 | 3.012887 | 2.946980 | 0.109600 | 0.137766 | 0.120549 |
| weighted_p_square_quantile.test | RUN | 0.886656 | 2.968326 | 3.044751 | 0.027108 | 0.031045 | 0.026312 |
| weighted_skewness.test | RUN | 1.038893 | 2.672101 | 3.862179 | 0.003996 | 0.005122 | 0.004042 |
| weighted_sum.test | RUN | 0.586628 | 1.675671 | 2.028141 | 0.002886 | 0.003044 | 0.002799 |
| weighted_sum_kahan.test | RUN | 0.683013 | 1.760233 | 2.233630 | 0.009840 | 0.015295 | 0.009922 |
| weighted_variance.test | RUN | 1.184383 | 3.225282 | 4.384591 | 0.003158 | 0.003373 | 0.003556 |
| valarray.test | RUN | 1.099007 | 3.110520 | 4.154881 | 0.002998 | 0.003150 | 0.003299 |
| tail_variate_means.test | RUN | 1.367700 | 4.798847 | 5.682571 | 0.002973 | 0.003183 | 0.002938 |
| pot_quantile.test | RUN | 1.628849 | 5.362703 | 6.804788 | 0.010919 | 0.012996 | 0.010818 |
| weighted_pot_quantile.test | RUN | 1.677629 | 5.305846 | 6.833333 | 0.025600 | 0.031225 | 0.025263 |
| weighted_tail_mean.test | RUN | 1.451628 | 4.268961 | 5.793530 | 0.021886 | 0.027312 | 0.022680 |
| weighted_tail_quantile.test | RUN | 1.442411 | 3.814607 | 5.245235 | 0.019097 | 0.022645 | 0.023559 |
| weighted_tail_variate_means.test | RUN | 1.692516 | 4.545966 | 5.935059 | 0.002293 | 0.002243 | 0.002162 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.211× | 1.219×, 1.203× | 0.992× |
| clang | 1.005× | 1.000×, 1.009× | 0.996× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44815881069).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.002382s | 0.002534s | 0.002528s | byte equality observed |
| covariance.test | 1 | 0.002489s | 0.002561s | 0.002485s | byte equality observed |
| droppable.test | 1 | 0.002654s | 0.002453s | 0.002370s | byte equality observed |
| error_of.test | 4 | 0.002113s | 0.002094s | 0.002046s | byte equality observed |
| extended_p_square.test | 4 | 0.003430s | 0.003666s | 0.003402s | byte equality observed |
| extended_p_square_quantile.test | 3 | 0.006942s | 0.007845s | 0.006483s | byte equality observed |
| external_accumulator.test | 6 | 0.002121s | 0.002036s | 0.002069s | byte equality observed |
| external_weights.test | 5 | 0.001975s | 0.001943s | 0.001943s | byte equality observed |
| kurtosis.test | 4 | 0.003005s | 0.003746s | 0.002962s | byte equality observed |
| max.test | 9 | 0.002104s | 0.002011s | 0.002029s | byte equality observed |
| mean.test | 7 | 0.002111s | 0.002080s | 0.002040s | byte equality observed |
| median.test | 1 | 0.112770s | 0.130567s | 0.109580s | byte equality observed |
| min.test | 4 | 0.002083s | 0.002047s | 0.002038s | byte equality observed |
| moment.test | 5 | 0.002055s | 0.002028s | 0.002030s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.751418s | 0.963580s | 0.758410s | byte equality observed |
| p_square_quantile.test | 1 | 0.025621s | 0.028459s | 0.024321s | byte equality observed |
| pot_quantile.test | 2 | 0.010022s | 0.011324s | 0.009662s | byte equality observed |
| reference.test | 8 | 0.002113s | 0.002021s | 0.002043s | byte equality observed |
| rolling_count.test | 8 | 0.002104s | 0.002025s | 0.002046s | byte equality observed |
| rolling_mean.test | 8 | 0.002194s | 0.002119s | 0.002123s | byte equality observed |
| rolling_moment.test | 8 | 0.002180s | 0.002101s | 0.002104s | byte equality observed |
| rolling_sum.test | 8 | 0.002097s | 0.002025s | 0.002087s | byte equality observed |
| rolling_variance.test | 7 | 0.002174s | 0.002117s | 0.002119s | byte equality observed |
| skewness.test | 5 | 0.003091s | 0.003717s | 0.003042s | byte equality observed |
| sum.test | 7 | 0.002067s | 0.001979s | 0.002022s | byte equality observed |
| sum_kahan.test | 1 | 0.015595s | 0.026400s | 0.015672s | byte equality observed |
| tail.test | 9 | 0.002065s | 0.001993s | 0.001977s | byte equality observed |
| tail_mean.test | 1 | 0.019241s | 0.023940s | 0.021642s | byte equality observed |
| tail_quantile.test | 1 | 0.022494s | 0.027949s | 0.023348s | byte equality observed |
| tail_variate_means.test | 9 | 0.001990s | 0.001924s | 0.001924s | byte equality observed |
| valarray.test | 9 | 0.002021s | 0.001917s | 0.001930s | byte equality observed |
| variance.test | 9 | 0.002098s | 0.002042s | 0.002053s | byte equality observed |
| vector.test | 9 | 0.001987s | 0.001934s | 0.001940s | byte equality observed |
| weighted_covariance.test | 9 | 0.001985s | 0.001912s | 0.001935s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.020133s | 0.025548s | 0.019747s | byte equality observed |
| weighted_kurtosis.test | 5 | 0.003149s | 0.004183s | 0.002998s | byte equality observed |
| weighted_mean.test | 8 | 0.001955s | 0.001891s | 0.001904s | byte equality observed |
| weighted_median.test | 1 | 0.989326s | 1.119336s | 1.009361s | byte equality observed |
| weighted_moment.test | 9 | 0.001954s | 0.001883s | 0.001870s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.119287s | 0.176704s | 0.112893s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.027023s | 0.033524s | 0.025632s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.024900s | 0.026977s | 0.023796s | byte equality observed |
| weighted_skewness.test | 5 | 0.003174s | 0.004247s | 0.003027s | byte equality observed |
| weighted_sum.test | 5 | 0.001963s | 0.001902s | 0.001891s | byte equality observed |
| weighted_sum_kahan.test | 2 | 0.008715s | 0.013877s | 0.008663s | byte equality observed |
| weighted_tail_mean.test | 1 | 0.020067s | 0.022489s | 0.020471s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.021658s | 0.025435s | 0.022379s | byte equality observed |
| weighted_tail_variate_means.test | 8 | 0.001991s | 0.001908s | 0.002040s | byte equality observed |
| weighted_variance.test | 8 | 0.002162s | 0.002269s | 0.002017s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44815881069).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
