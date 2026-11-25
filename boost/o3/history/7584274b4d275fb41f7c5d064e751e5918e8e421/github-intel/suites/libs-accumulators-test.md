# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.583467 | 1.762835 | 1.921465 | 0.002490 | 0.002518 | 0.001900 |
| covariance.test | RUN | 1.147010 | 4.670048 | 5.026238 | 0.002268 | 0.002043 | 0.002418 |
| droppable.test | RUN | 0.734064 | 2.426111 | 2.641990 | 0.002704 | 0.002212 | 0.002098 |
| error_of.test | RUN | 0.795928 | 2.317955 | 2.903822 | 0.002032 | 0.002528 | 0.001894 |
| extended_p_square.test | RUN | 0.853316 | 3.103410 | 3.015000 | 0.003731 | 0.003976 | 0.003310 |
| extended_p_square_quantile.test | RUN | 1.115761 | 4.863477 | 4.225878 | 0.007010 | 0.007600 | 0.006498 |
| external_accumulator.test | RUN | 0.707738 | 2.275104 | 2.501337 | 0.002275 | 0.002534 | 0.002003 |
| external_weights.test | RUN | 0.617484 | 1.759409 | 2.038963 | 0.002071 | 0.002262 | 0.001964 |
| kurtosis.test | RUN | 0.945194 | 2.979261 | 3.424100 | 0.003005 | 0.004260 | 0.003258 |
| max.test | RUN | 0.584411 | 1.704448 | 1.957469 | 0.002338 | 0.002404 | 0.002178 |
| mean.test | RUN | 0.774391 | 2.535378 | 2.844607 | 0.002469 | 0.002352 | 0.002286 |
| median.test | RUN | 1.102048 | 4.949537 | 4.340165 | 0.104324 | 0.120414 | 0.102284 |
| min.test | RUN | 0.582102 | 1.741678 | 1.881954 | 0.002357 | 0.002311 | 0.002196 |
| moment.test | RUN | 0.667468 | 1.965455 | 2.312736 | 0.002365 | 0.002507 | 0.002242 |
| p_square_cumul_dist.test | RUN | 0.891927 | 3.454182 | 3.228597 | 0.724022 | 0.906155 | 0.695137 |
| p_square_quantile.test | RUN | 0.781995 | 3.040263 | 2.669050 | 0.021855 | 0.024289 | 0.021843 |
| reference.test | RUN | 0.655194 | 1.919518 | 2.107577 | 0.001966 | 0.002416 | 0.002252 |
| rolling_count.test | RUN | 0.681761 | 2.201177 | 2.383101 | 0.002164 | 0.001991 | 0.002199 |
| rolling_sum.test | RUN | 0.652675 | 2.243259 | 2.362756 | 0.002628 | 0.002412 | 0.002228 |
| rolling_mean.test | RUN | 1.015749 | 3.981495 | 3.860185 | 0.002606 | 0.002289 | 0.002349 |
| rolling_variance.test | RUN | 1.163162 | 4.711684 | 4.390678 | 0.002313 | 0.002523 | 0.002264 |
| rolling_moment.test | RUN | 0.844509 | 2.672439 | 2.927880 | 0.002620 | 0.002417 | 0.002218 |
| skewness.test | RUN | 0.887077 | 2.770217 | 3.201902 | 0.003066 | 0.003974 | 0.003162 |
| sum.test | RUN | 0.627784 | 1.877604 | 2.117887 | 0.002350 | 0.002284 | 0.002318 |
| sum_kahan.test | RUN | 0.666363 | 2.002922 | 2.188593 | 0.012724 | 0.019276 | 0.011220 |
| tail.test | RUN | 0.726313 | 2.869688 | 2.498037 | 0.002108 | 0.002505 | 0.002054 |
| tail_mean.test | RUN | 1.024474 | 3.239897 | 3.723213 | 0.018879 | 0.023489 | 0.020135 |
| tail_quantile.test | RUN | 0.827240 | 2.749949 | 2.849457 | 0.022090 | 0.024600 | 0.020830 |
| variance.test | RUN | 0.765784 | 2.437340 | 2.815934 | 0.002200 | 0.002491 | 0.002258 |
| vector.test | RUN | 0.853805 | 3.019525 | 3.445734 | 0.002046 | 0.002329 | 0.002307 |
| weighted_covariance.test | RUN | 1.127263 | 4.761566 | 5.143408 | 0.002359 | 0.002323 | 0.002088 |
| weighted_extended_p_square.test | RUN | 0.776634 | 2.714273 | 2.641678 | 0.018328 | 0.022273 | 0.015892 |
| weighted_kurtosis.test | RUN | 0.907040 | 2.738092 | 3.244292 | 0.002790 | 0.004529 | 0.003129 |
| weighted_mean.test | RUN | 0.767204 | 2.444410 | 2.796155 | 0.001997 | 0.002266 | 0.002064 |
| weighted_median.test | RUN | 0.998443 | 3.298190 | 3.652571 | 0.992782 | 1.058928 | 0.971736 |
| weighted_moment.test | RUN | 0.625092 | 1.778428 | 2.073571 | 0.002142 | 0.002315 | 0.002098 |
| weighted_p_square_cumul_dist.test | RUN | 0.766776 | 2.562562 | 2.395824 | 0.096715 | 0.128621 | 0.097594 |
| weighted_p_square_quantile.test | RUN | 0.721663 | 2.747682 | 2.318133 | 0.022691 | 0.027150 | 0.022420 |
| weighted_skewness.test | RUN | 0.772310 | 2.625301 | 3.072551 | 0.002722 | 0.004516 | 0.002941 |
| weighted_sum.test | RUN | 0.521926 | 1.494290 | 1.683626 | 0.002203 | 0.002254 | 0.002028 |
| weighted_sum_kahan.test | RUN | 0.567554 | 1.610629 | 1.783377 | 0.006634 | 0.010981 | 0.006634 |
| weighted_variance.test | RUN | 0.973401 | 2.985515 | 3.506211 | 0.002282 | 0.002777 | 0.002225 |
| valarray.test | RUN | 0.865516 | 2.812009 | 3.328546 | 0.002507 | 0.002292 | 0.002118 |
| tail_variate_means.test | RUN | 1.172749 | 4.584694 | 4.591279 | 0.002490 | 0.002497 | 0.002192 |
| pot_quantile.test | RUN | 1.384593 | 5.061456 | 5.463317 | 0.009072 | 0.011553 | 0.009076 |
| weighted_pot_quantile.test | RUN | 1.384805 | 4.939148 | 5.451475 | 0.016917 | 0.026647 | 0.022152 |
| weighted_tail_mean.test | RUN | 1.209701 | 3.920134 | 4.458342 | 0.020540 | 0.022504 | 0.015682 |
| weighted_tail_quantile.test | RUN | 1.217659 | 3.297362 | 4.173468 | 0.016005 | 0.018453 | 0.015511 |
| weighted_tail_variate_means.test | RUN | 1.351061 | 4.341623 | 4.831951 | 0.001591 | 0.001610 | 0.001508 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.171× | 1.169×, 1.173× | 1.001× |
| clang | 0.994× | 0.999×, 0.990× | 1.004× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45617981312).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.001876s | 0.001911s | 0.001863s | byte equality observed |
| covariance.test | 1 | 0.002056s | 0.001888s | 0.001950s | byte equality observed |
| droppable.test | 1 | 0.001924s | 0.001926s | 0.001716s | byte equality observed |
| error_of.test | 1 | 0.001847s | 0.001765s | 0.001732s | byte equality observed |
| extended_p_square.test | 5 | 0.002883s | 0.002997s | 0.002817s | byte equality observed |
| extended_p_square_quantile.test | 3 | 0.006105s | 0.006653s | 0.005911s | byte equality observed |
| external_accumulator.test | 5 | 0.001602s | 0.001523s | 0.001567s | byte equality observed |
| external_weights.test | 8 | 0.001538s | 0.001488s | 0.001497s | byte equality observed |
| kurtosis.test | 5 | 0.002341s | 0.003099s | 0.002325s | byte equality observed |
| max.test | 9 | 0.001605s | 0.001564s | 0.001524s | byte equality observed |
| mean.test | 9 | 0.001593s | 0.001567s | 0.001587s | byte equality observed |
| median.test | 1 | 0.101303s | 0.114646s | 0.100463s | byte equality observed |
| min.test | 10 | 0.001578s | 0.001547s | 0.001571s | byte equality observed |
| moment.test | 4 | 0.001599s | 0.001560s | 0.001525s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.628042s | 0.802569s | 0.618130s | byte equality observed |
| p_square_quantile.test | 1 | 0.021665s | 0.023930s | 0.020398s | byte equality observed |
| pot_quantile.test | 3 | 0.008364s | 0.009522s | 0.008158s | byte equality observed |
| reference.test | 10 | 0.001548s | 0.001505s | 0.001511s | byte equality observed |
| rolling_count.test | 8 | 0.001608s | 0.001536s | 0.001530s | byte equality observed |
| rolling_mean.test | 8 | 0.001679s | 0.001635s | 0.001593s | byte equality observed |
| rolling_moment.test | 8 | 0.001655s | 0.001590s | 0.001558s | byte equality observed |
| rolling_sum.test | 10 | 0.001603s | 0.001551s | 0.001535s | byte equality observed |
| rolling_variance.test | 9 | 0.001676s | 0.001634s | 0.001601s | byte equality observed |
| skewness.test | 6 | 0.002297s | 0.003065s | 0.002355s | byte equality observed |
| sum.test | 8 | 0.001570s | 0.001524s | 0.001527s | byte equality observed |
| sum_kahan.test | 2 | 0.010430s | 0.017212s | 0.010480s | byte equality observed |
| tail.test | 10 | 0.001563s | 0.001588s | 0.001517s | byte equality observed |
| tail_mean.test | 2 | 0.017769s | 0.019671s | 0.018274s | byte equality observed |
| tail_quantile.test | 1 | 0.020594s | 0.024409s | 0.019662s | byte equality observed |
| tail_variate_means.test | 10 | 0.001563s | 0.001513s | 0.001522s | byte equality observed |
| valarray.test | 10 | 0.001534s | 0.001523s | 0.001501s | byte equality observed |
| variance.test | 10 | 0.001569s | 0.001552s | 0.001546s | byte equality observed |
| vector.test | 10 | 0.001545s | 0.001498s | 0.001492s | byte equality observed |
| weighted_covariance.test | 10 | 0.001522s | 0.001488s | 0.001474s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.016711s | 0.019009s | 0.016376s | byte equality observed |
| weighted_kurtosis.test | 6 | 0.002348s | 0.003586s | 0.002352s | byte equality observed |
| weighted_mean.test | 10 | 0.001505s | 0.001476s | 0.001440s | byte equality observed |
| weighted_median.test | 1 | 0.853505s | 0.925018s | 0.856868s | byte equality observed |
| weighted_moment.test | 10 | 0.001485s | 0.001448s | 0.001421s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.102080s | 0.132256s | 0.101322s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.021737s | 0.026584s | 0.021757s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.021697s | 0.023414s | 0.021094s | byte equality observed |
| weighted_skewness.test | 5 | 0.002289s | 0.003512s | 0.002399s | byte equality observed |
| weighted_sum.test | 10 | 0.001461s | 0.001434s | 0.001412s | byte equality observed |
| weighted_sum_kahan.test | 3 | 0.005780s | 0.009408s | 0.005712s | byte equality observed |
| weighted_tail_mean.test | 1 | 0.018572s | 0.019659s | 0.018058s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.019218s | 0.023141s | 0.019083s | byte equality observed |
| weighted_tail_variate_means.test | 6 | 0.001557s | 0.001503s | 0.001475s | byte equality observed |
| weighted_variance.test | 6 | 0.001645s | 0.001825s | 0.001655s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45617981312).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
