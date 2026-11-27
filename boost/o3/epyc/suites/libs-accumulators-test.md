# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.965373 | 2.782789 | 3.577436 | 0.004307 | 0.003990 | 0.004118 |
| covariance.test | RUN | 1.828083 | 6.542525 | 8.843319 | 0.003931 | 0.004122 | 0.003869 |
| droppable.test | RUN | 1.221315 | 3.671671 | 4.668702 | 0.004858 | 0.004189 | 0.004360 |
| error_of.test | RUN | 1.329489 | 3.523572 | 5.200862 | 0.003703 | 0.003708 | 0.003667 |
| extended_p_square.test | RUN | 1.382758 | 4.421310 | 5.254485 | 0.005766 | 0.005993 | 0.005675 |
| extended_p_square_quantile.test | RUN | 1.775845 | 6.761725 | 7.536632 | 0.011278 | 0.011853 | 0.010388 |
| external_accumulator.test | RUN | 1.205616 | 3.404483 | 4.519017 | 0.004067 | 0.003648 | 0.003980 |
| external_weights.test | RUN | 1.032931 | 2.818071 | 3.621386 | 0.003458 | 0.003731 | 0.003665 |
| kurtosis.test | RUN | 1.556083 | 4.442357 | 6.177109 | 0.005426 | 0.005935 | 0.005377 |
| max.test | RUN | 0.999546 | 2.633024 | 3.297266 | 0.003693 | 0.003900 | 0.003849 |
| mean.test | RUN | 1.260795 | 3.555454 | 4.971592 | 0.003797 | 0.003655 | 0.004078 |
| median.test | RUN | 1.766229 | 6.967093 | 7.544004 | 0.146679 | 0.177231 | 0.147639 |
| min.test | RUN | 0.957835 | 2.563953 | 3.349552 | 0.003901 | 0.004139 | 0.004110 |
| moment.test | RUN | 1.102497 | 3.112541 | 4.150370 | 0.003843 | 0.003801 | 0.003588 |
| p_square_cumul_dist.test | RUN | 1.402078 | 5.149146 | 5.789811 | 1.048115 | 1.297977 | 1.057716 |
| p_square_quantile.test | RUN | 1.197208 | 4.644998 | 4.762625 | 0.035562 | 0.037990 | 0.033002 |
| reference.test | RUN | 1.121880 | 2.877489 | 3.866470 | 0.003903 | 0.003444 | 0.004135 |
| rolling_count.test | RUN | 1.132140 | 3.294486 | 4.251824 | 0.003469 | 0.003790 | 0.003844 |
| rolling_sum.test | RUN | 1.142541 | 3.325742 | 4.259131 | 0.004033 | 0.003759 | 0.003589 |
| rolling_mean.test | RUN | 1.622877 | 5.866022 | 6.795768 | 0.004160 | 0.004228 | 0.004043 |
| rolling_variance.test | RUN | 1.757558 | 6.717048 | 7.574954 | 0.003837 | 0.003830 | 0.003906 |
| rolling_moment.test | RUN | 1.346701 | 4.035157 | 5.251288 | 0.003941 | 0.003964 | 0.004294 |
| skewness.test | RUN | 1.447388 | 4.188814 | 5.799207 | 0.005130 | 0.006321 | 0.005568 |
| sum.test | RUN | 1.000084 | 2.841733 | 3.796959 | 0.004108 | 0.004050 | 0.004020 |
| sum_kahan.test | RUN | 1.125647 | 3.023772 | 3.941938 | 0.019315 | 0.031282 | 0.019900 |
| tail.test | RUN | 1.157882 | 4.238765 | 4.505348 | 0.003565 | 0.004089 | 0.003971 |
| tail_mean.test | RUN | 1.609278 | 4.888323 | 6.573668 | 0.024528 | 0.040020 | 0.027568 |
| tail_quantile.test | RUN | 1.336127 | 4.072304 | 5.101608 | 0.030399 | 0.042137 | 0.030993 |
| variance.test | RUN | 1.268801 | 3.514336 | 4.949013 | 0.003686 | 0.004130 | 0.004126 |
| vector.test | RUN | 1.333633 | 4.352982 | 6.032057 | 0.003729 | 0.003937 | 0.003931 |
| weighted_covariance.test | RUN | 1.807454 | 6.595819 | 9.093816 | 0.003730 | 0.003500 | 0.003556 |
| weighted_extended_p_square.test | RUN | 1.261383 | 4.075471 | 4.750807 | 0.028875 | 0.032496 | 0.026162 |
| weighted_kurtosis.test | RUN | 1.470209 | 4.051700 | 5.872764 | 0.005413 | 0.006454 | 0.005096 |
| weighted_mean.test | RUN | 1.236655 | 3.576758 | 5.037408 | 0.003313 | 0.003868 | 0.003667 |
| weighted_median.test | RUN | 1.624053 | 4.935612 | 6.543731 | 1.269031 | 1.387255 | 1.293329 |
| weighted_moment.test | RUN | 1.020499 | 2.611231 | 3.821825 | 0.003574 | 0.003874 | 0.003310 |
| weighted_p_square_cumul_dist.test | RUN | 1.243461 | 4.109436 | 4.614304 | 0.136839 | 0.166648 | 0.137625 |
| weighted_p_square_quantile.test | RUN | 1.211330 | 4.003010 | 4.093989 | 0.036717 | 0.040616 | 0.036782 |
| weighted_skewness.test | RUN | 1.408560 | 3.801343 | 5.477281 | 0.005026 | 0.006240 | 0.005208 |
| weighted_sum.test | RUN | 0.884931 | 2.237604 | 3.001475 | 0.003386 | 0.003848 | 0.003382 |
| weighted_sum_kahan.test | RUN | 0.804544 | 2.448016 | 3.284944 | 0.011049 | 0.017535 | 0.011588 |
| weighted_variance.test | RUN | 1.566919 | 4.489053 | 6.285836 | 0.003850 | 0.004032 | 0.004080 |
| valarray.test | RUN | 1.441092 | 4.143521 | 5.826292 | 0.003623 | 0.003488 | 0.003930 |
| tail_variate_means.test | RUN | 1.834111 | 6.631169 | 8.096378 | 0.003627 | 0.003777 | 0.003736 |
| pot_quantile.test | RUN | 2.209105 | 7.389471 | 9.746409 | 0.014123 | 0.016505 | 0.014154 |
| weighted_pot_quantile.test | RUN | 2.156698 | 7.041889 | 9.974409 | 0.032596 | 0.040575 | 0.033801 |
| weighted_tail_mean.test | RUN | 1.923570 | 5.843954 | 8.155021 | 0.027274 | 0.039164 | 0.022138 |
| weighted_tail_quantile.test | RUN | 1.930173 | 4.817016 | 7.454393 | 0.022363 | 0.027964 | 0.023483 |
| weighted_tail_variate_means.test | RUN | 2.165170 | 5.928473 | 8.268886 | 0.002737 | 0.002635 | 0.002545 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.182× | 1.183×, 1.182× | 1.002× |
| clang | 0.999× | 0.997×, 1.001× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1362 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46045514956).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.002896s | 0.002838s | 0.002843s | byte equality observed |
| covariance.test | 1 | 0.002866s | 0.002939s | 0.002878s | byte equality observed |
| droppable.test | 1 | 0.002857s | 0.002861s | 0.002794s | byte equality observed |
| error_of.test | 1 | 0.002756s | 0.002779s | 0.002622s | byte equality observed |
| extended_p_square.test | 4 | 0.004513s | 0.004605s | 0.004231s | byte equality observed |
| extended_p_square_quantile.test | 2 | 0.009392s | 0.009685s | 0.009302s | byte equality observed |
| external_accumulator.test | 4 | 0.002671s | 0.002588s | 0.002572s | byte equality observed |
| external_weights.test | 5 | 0.002500s | 0.002456s | 0.002432s | byte equality observed |
| kurtosis.test | 4 | 0.004013s | 0.004666s | 0.003929s | byte equality observed |
| max.test | 7 | 0.002645s | 0.002555s | 0.002590s | byte equality observed |
| mean.test | 4 | 0.002649s | 0.002593s | 0.002663s | byte equality observed |
| median.test | 1 | 0.140980s | 0.160069s | 0.140877s | byte equality observed |
| min.test | 5 | 0.002633s | 0.002471s | 0.002505s | byte equality observed |
| moment.test | 6 | 0.002569s | 0.002476s | 0.002533s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.903204s | 1.164687s | 0.905045s | byte equality observed |
| p_square_quantile.test | 1 | 0.034133s | 0.035022s | 0.031027s | byte equality observed |
| pot_quantile.test | 2 | 0.012557s | 0.013358s | 0.011879s | byte equality observed |
| reference.test | 6 | 0.002552s | 0.002494s | 0.002471s | byte equality observed |
| rolling_count.test | 6 | 0.002569s | 0.002464s | 0.002476s | byte equality observed |
| rolling_mean.test | 7 | 0.002708s | 0.002605s | 0.002564s | byte equality observed |
| rolling_moment.test | 7 | 0.002643s | 0.002575s | 0.002558s | byte equality observed |
| rolling_sum.test | 6 | 0.002597s | 0.002458s | 0.002491s | byte equality observed |
| rolling_variance.test | 6 | 0.002723s | 0.002588s | 0.002635s | byte equality observed |
| skewness.test | 4 | 0.003904s | 0.004633s | 0.003859s | byte equality observed |
| sum.test | 6 | 0.002534s | 0.002480s | 0.002515s | byte equality observed |
| sum_kahan.test | 1 | 0.018257s | 0.029624s | 0.018387s | byte equality observed |
| tail.test | 6 | 0.002540s | 0.002436s | 0.002378s | byte equality observed |
| tail_mean.test | 1 | 0.022987s | 0.028529s | 0.024184s | byte equality observed |
| tail_quantile.test | 1 | 0.029438s | 0.038723s | 0.028213s | byte equality observed |
| tail_variate_means.test | 7 | 0.002514s | 0.002403s | 0.002409s | byte equality observed |
| valarray.test | 5 | 0.002556s | 0.002383s | 0.002415s | byte equality observed |
| variance.test | 7 | 0.002652s | 0.002528s | 0.002608s | byte equality observed |
| vector.test | 6 | 0.002521s | 0.002401s | 0.002436s | byte equality observed |
| weighted_covariance.test | 6 | 0.002482s | 0.002478s | 0.002444s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.026894s | 0.031859s | 0.024363s | byte equality observed |
| weighted_kurtosis.test | 3 | 0.003931s | 0.005174s | 0.003928s | byte equality observed |
| weighted_mean.test | 6 | 0.002413s | 0.002382s | 0.002352s | byte equality observed |
| weighted_median.test | 1 | 1.142015s | 1.244258s | 1.143741s | byte equality observed |
| weighted_moment.test | 5 | 0.002368s | 0.002324s | 0.002309s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.136396s | 0.187786s | 0.139145s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.034169s | 0.039439s | 0.032845s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.030355s | 0.032256s | 0.029056s | byte equality observed |
| weighted_skewness.test | 4 | 0.003890s | 0.005067s | 0.003735s | byte equality observed |
| weighted_sum.test | 8 | 0.002361s | 0.002287s | 0.002299s | byte equality observed |
| weighted_sum_kahan.test | 2 | 0.010124s | 0.015772s | 0.010006s | byte equality observed |
| weighted_tail_mean.test | 1 | 0.024354s | 0.027307s | 0.025037s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.028245s | 0.031945s | 0.027366s | byte equality observed |
| weighted_tail_variate_means.test | 6 | 0.002533s | 0.002329s | 0.002383s | byte equality observed |
| weighted_variance.test | 7 | 0.002673s | 0.002778s | 0.002617s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46045514956).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
