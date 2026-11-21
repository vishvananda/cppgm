# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.555105 | 1.708699 | 1.830783 | 0.002099 | 0.002303 | 0.002134 |
| covariance.test | RUN | 1.077973 | 4.413712 | 4.800330 | 0.002087 | 0.002272 | 0.002150 |
| droppable.test | RUN | 0.699912 | 2.298540 | 2.477373 | 0.002017 | 0.002250 | 0.001923 |
| error_of.test | RUN | 0.752503 | 2.274059 | 2.768480 | 0.001932 | 0.002088 | 0.001861 |
| extended_p_square.test | RUN | 0.790227 | 2.884916 | 2.879754 | 0.003225 | 0.003693 | 0.003215 |
| extended_p_square_quantile.test | RUN | 1.061316 | 4.604242 | 4.092496 | 0.006827 | 0.007537 | 0.006334 |
| external_accumulator.test | RUN | 0.683006 | 2.136597 | 2.434315 | 0.001747 | 0.002241 | 0.002016 |
| external_weights.test | RUN | 0.579027 | 1.719758 | 1.968218 | 0.001998 | 0.002169 | 0.001946 |
| kurtosis.test | RUN | 0.889588 | 2.753813 | 3.355802 | 0.002765 | 0.003986 | 0.002932 |
| max.test | RUN | 0.570485 | 1.659711 | 1.849274 | 0.002193 | 0.002116 | 0.002124 |
| mean.test | RUN | 0.740011 | 2.376180 | 2.705290 | 0.002009 | 0.002210 | 0.002086 |
| median.test | RUN | 1.028855 | 4.782772 | 4.132562 | 0.102957 | 0.123259 | 0.102371 |
| min.test | RUN | 0.556576 | 1.677735 | 1.891327 | 0.001861 | 0.002181 | 0.002150 |
| moment.test | RUN | 0.649972 | 1.878251 | 2.242973 | 0.001920 | 0.002201 | 0.001774 |
| p_square_cumul_dist.test | RUN | 0.849051 | 3.332186 | 3.082298 | 0.730500 | 0.907495 | 0.715840 |
| p_square_quantile.test | RUN | 0.740146 | 2.921151 | 2.631867 | 0.022053 | 0.024110 | 0.021627 |
| reference.test | RUN | 0.638412 | 1.844486 | 2.125271 | 0.002131 | 0.002102 | 0.001730 |
| rolling_count.test | RUN | 0.672970 | 1.972895 | 2.227234 | 0.001993 | 0.002116 | 0.002033 |
| rolling_sum.test | RUN | 0.669825 | 2.172375 | 2.105681 | 0.002398 | 0.002278 | 0.002044 |
| rolling_mean.test | RUN | 0.929980 | 3.895066 | 3.739335 | 0.002208 | 0.002270 | 0.002229 |
| rolling_variance.test | RUN | 1.114152 | 4.461614 | 4.179692 | 0.002100 | 0.002464 | 0.002146 |
| rolling_moment.test | RUN | 0.812214 | 2.594495 | 2.777933 | 0.002109 | 0.002138 | 0.002312 |
| skewness.test | RUN | 0.855883 | 2.651007 | 3.119946 | 0.003015 | 0.003989 | 0.002853 |
| sum.test | RUN | 0.587546 | 1.830021 | 2.029595 | 0.002345 | 0.002337 | 0.002017 |
| sum_kahan.test | RUN | 0.660352 | 1.920650 | 2.122664 | 0.011007 | 0.019179 | 0.011118 |
| tail.test | RUN | 0.708247 | 2.720981 | 2.370275 | 0.001979 | 0.002193 | 0.002009 |
| tail_mean.test | RUN | 0.992120 | 3.143666 | 3.488322 | 0.018663 | 0.021491 | 0.018478 |
| tail_quantile.test | RUN | 0.803351 | 2.535757 | 2.759345 | 0.020364 | 0.023912 | 0.020640 |
| variance.test | RUN | 0.759181 | 2.309616 | 2.664810 | 0.002048 | 0.002168 | 0.002053 |
| vector.test | RUN | 0.837217 | 2.838290 | 3.247166 | 0.001874 | 0.002067 | 0.001837 |
| weighted_covariance.test | RUN | 1.075824 | 4.407928 | 4.872670 | 0.002001 | 0.002059 | 0.001756 |
| weighted_extended_p_square.test | RUN | 0.754863 | 2.568308 | 2.468349 | 0.018626 | 0.021874 | 0.016544 |
| weighted_kurtosis.test | RUN | 0.869612 | 2.558209 | 3.051496 | 0.002886 | 0.004173 | 0.002627 |
| weighted_mean.test | RUN | 0.741340 | 2.275008 | 2.623469 | 0.001866 | 0.001939 | 0.001745 |
| weighted_median.test | RUN | 0.953451 | 3.153162 | 3.514002 | 0.973030 | 1.054876 | 0.972072 |
| weighted_moment.test | RUN | 0.597528 | 1.707264 | 1.978490 | 0.002161 | 0.001922 | 0.001926 |
| weighted_p_square_cumul_dist.test | RUN | 0.747621 | 2.551593 | 2.272734 | 0.101677 | 0.143261 | 0.098239 |
| weighted_p_square_quantile.test | RUN | 0.682120 | 2.587075 | 2.230339 | 0.022374 | 0.026670 | 0.022185 |
| weighted_skewness.test | RUN | 0.833155 | 2.462819 | 2.873405 | 0.002821 | 0.004196 | 0.002556 |
| weighted_sum.test | RUN | 0.508940 | 1.429760 | 1.579053 | 0.001751 | 0.002101 | 0.001863 |
| weighted_sum_kahan.test | RUN | 0.474114 | 1.526641 | 1.700214 | 0.005955 | 0.010566 | 0.006379 |
| weighted_variance.test | RUN | 0.906502 | 2.782845 | 3.341690 | 0.002193 | 0.002391 | 0.002082 |
| valarray.test | RUN | 0.822517 | 2.701253 | 3.190808 | 0.001980 | 0.002237 | 0.001992 |
| tail_variate_means.test | RUN | 1.106633 | 4.346161 | 4.406887 | 0.001893 | 0.001998 | 0.002007 |
| pot_quantile.test | RUN | 1.309897 | 4.715337 | 5.298836 | 0.008616 | 0.011135 | 0.008693 |
| weighted_pot_quantile.test | RUN | 1.305680 | 4.718741 | 5.213651 | 0.022778 | 0.026498 | 0.022321 |
| weighted_tail_mean.test | RUN | 1.169647 | 3.746819 | 4.224057 | 0.019497 | 0.021257 | 0.019309 |
| weighted_tail_quantile.test | RUN | 1.140209 | 3.323191 | 3.919890 | 0.015740 | 0.018264 | 0.015356 |
| weighted_tail_variate_means.test | RUN | 1.234413 | 3.764383 | 4.587793 | 0.001482 | 0.001423 | 0.001382 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.167× | 1.167×, 1.168× | 0.987× |
| clang | 0.985× | 0.984×, 0.987× | 1.001× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44818861403).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.001870s | 0.001782s | 0.001712s | byte equality observed |
| covariance.test | 1 | 0.001857s | 0.001927s | 0.001965s | byte equality observed |
| droppable.test | 1 | 0.001828s | 0.001952s | 0.001853s | byte equality observed |
| error_of.test | 1 | 0.001771s | 0.001799s | 0.001692s | byte equality observed |
| extended_p_square.test | 6 | 0.002811s | 0.002986s | 0.002726s | byte equality observed |
| extended_p_square_quantile.test | 3 | 0.005831s | 0.006672s | 0.005672s | byte equality observed |
| external_accumulator.test | 7 | 0.001578s | 0.001532s | 0.001518s | byte equality observed |
| external_weights.test | 10 | 0.001513s | 0.001488s | 0.001469s | byte equality observed |
| kurtosis.test | 6 | 0.002293s | 0.003078s | 0.002233s | byte equality observed |
| max.test | 8 | 0.001556s | 0.001572s | 0.001512s | byte equality observed |
| mean.test | 7 | 0.001600s | 0.001546s | 0.001555s | byte equality observed |
| median.test | 1 | 0.100447s | 0.118882s | 0.098884s | byte equality observed |
| min.test | 6 | 0.001584s | 0.001517s | 0.001507s | byte equality observed |
| moment.test | 10 | 0.001554s | 0.001520s | 0.001528s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.635868s | 0.802960s | 0.616956s | byte equality observed |
| p_square_quantile.test | 1 | 0.021505s | 0.023779s | 0.020452s | byte equality observed |
| pot_quantile.test | 3 | 0.008334s | 0.009378s | 0.008112s | byte equality observed |
| reference.test | 10 | 0.001515s | 0.001501s | 0.001458s | byte equality observed |
| rolling_count.test | 8 | 0.001569s | 0.001515s | 0.001530s | byte equality observed |
| rolling_mean.test | 10 | 0.001659s | 0.001599s | 0.001579s | byte equality observed |
| rolling_moment.test | 10 | 0.001626s | 0.001549s | 0.001559s | byte equality observed |
| rolling_sum.test | 10 | 0.001578s | 0.001522s | 0.001513s | byte equality observed |
| rolling_variance.test | 8 | 0.001649s | 0.001602s | 0.001590s | byte equality observed |
| skewness.test | 6 | 0.002217s | 0.002996s | 0.002278s | byte equality observed |
| sum.test | 10 | 0.001546s | 0.001488s | 0.001503s | byte equality observed |
| sum_kahan.test | 2 | 0.010358s | 0.017312s | 0.010456s | byte equality observed |
| tail.test | 9 | 0.001531s | 0.001495s | 0.001507s | byte equality observed |
| tail_mean.test | 2 | 0.017593s | 0.018590s | 0.018132s | byte equality observed |
| tail_quantile.test | 1 | 0.020286s | 0.022192s | 0.019622s | byte equality observed |
| tail_variate_means.test | 8 | 0.001599s | 0.001507s | 0.001544s | byte equality observed |
| valarray.test | 10 | 0.001522s | 0.001483s | 0.001454s | byte equality observed |
| variance.test | 10 | 0.001562s | 0.001548s | 0.001533s | byte equality observed |
| vector.test | 10 | 0.001532s | 0.001464s | 0.001461s | byte equality observed |
| weighted_covariance.test | 10 | 0.001516s | 0.001458s | 0.001476s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.016865s | 0.022068s | 0.015773s | byte equality observed |
| weighted_kurtosis.test | 6 | 0.002320s | 0.003451s | 0.002264s | byte equality observed |
| weighted_mean.test | 10 | 0.001485s | 0.001468s | 0.001386s | byte equality observed |
| weighted_median.test | 1 | 0.856494s | 0.927950s | 0.857431s | byte equality observed |
| weighted_moment.test | 10 | 0.001457s | 0.001418s | 0.001393s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.101333s | 0.130774s | 0.100657s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.021641s | 0.027013s | 0.021577s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.021528s | 0.023270s | 0.020746s | byte equality observed |
| weighted_skewness.test | 5 | 0.002274s | 0.003523s | 0.002321s | byte equality observed |
| weighted_sum.test | 10 | 0.001447s | 0.001396s | 0.001385s | byte equality observed |
| weighted_sum_kahan.test | 3 | 0.005758s | 0.009259s | 0.005631s | byte equality observed |
| weighted_tail_mean.test | 2 | 0.018475s | 0.019668s | 0.017872s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.019312s | 0.022570s | 0.018951s | byte equality observed |
| weighted_tail_variate_means.test | 10 | 0.001497s | 0.001473s | 0.001437s | byte equality observed |
| weighted_variance.test | 9 | 0.001624s | 0.001780s | 0.001601s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44818861403).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
