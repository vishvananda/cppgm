# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.557951 | 1.688986 | 1.921248 | 0.002258 | 0.002387 | 0.002131 |
| covariance.test | RUN | 1.085794 | 4.541889 | 5.030519 | 0.002008 | 0.002334 | 0.002103 |
| droppable.test | RUN | 0.713943 | 2.365121 | 2.558404 | 0.001956 | 0.002465 | 0.001964 |
| error_of.test | RUN | 0.759511 | 2.289720 | 2.807997 | 0.001870 | 0.002177 | 0.002065 |
| extended_p_square.test | RUN | 0.799448 | 2.932903 | 2.908178 | 0.003511 | 0.003848 | 0.003269 |
| extended_p_square_quantile.test | RUN | 1.048328 | 4.667038 | 4.182552 | 0.006498 | 0.007680 | 0.006748 |
| external_accumulator.test | RUN | 0.670061 | 2.191576 | 2.499402 | 0.001963 | 0.002353 | 0.002051 |
| external_weights.test | RUN | 0.590655 | 1.730347 | 2.058659 | 0.001859 | 0.002398 | 0.001969 |
| kurtosis.test | RUN | 0.907739 | 2.829961 | 3.390197 | 0.002881 | 0.003692 | 0.002959 |
| max.test | RUN | 0.558308 | 1.685435 | 1.915384 | 0.002293 | 0.002309 | 0.002222 |
| mean.test | RUN | 0.749326 | 2.399678 | 2.784591 | 0.002004 | 0.002389 | 0.002094 |
| median.test | RUN | 1.047109 | 4.820446 | 4.254267 | 0.103248 | 0.120618 | 0.105229 |
| min.test | RUN | 0.573529 | 1.664966 | 1.916865 | 0.001840 | 0.002367 | 0.002211 |
| moment.test | RUN | 0.643433 | 1.936691 | 2.209245 | 0.002058 | 0.002164 | 0.002195 |
| p_square_cumul_dist.test | RUN | 0.854561 | 3.395775 | 3.162671 | 0.726739 | 0.907538 | 0.696599 |
| p_square_quantile.test | RUN | 0.755811 | 3.033352 | 2.720738 | 0.022647 | 0.024042 | 0.020416 |
| reference.test | RUN | 0.631549 | 1.879372 | 2.140594 | 0.001834 | 0.001963 | 0.002017 |
| rolling_count.test | RUN | 0.676225 | 2.183066 | 2.330473 | 0.002096 | 0.002275 | 0.002195 |
| rolling_sum.test | RUN | 0.639377 | 2.223698 | 2.372774 | 0.002181 | 0.002274 | 0.002281 |
| rolling_mean.test | RUN | 0.997167 | 3.972706 | 3.791162 | 0.001933 | 0.002344 | 0.002320 |
| rolling_variance.test | RUN | 1.132068 | 4.635693 | 4.325560 | 0.002534 | 0.002350 | 0.002392 |
| rolling_moment.test | RUN | 0.808515 | 2.687606 | 2.913742 | 0.001972 | 0.002300 | 0.002525 |
| skewness.test | RUN | 0.848005 | 2.732911 | 3.208949 | 0.002907 | 0.003945 | 0.003075 |
| sum.test | RUN | 0.604058 | 1.854915 | 2.081235 | 0.002071 | 0.002268 | 0.002177 |
| sum_kahan.test | RUN | 0.639941 | 1.991593 | 2.151223 | 0.010991 | 0.018789 | 0.011185 |
| tail.test | RUN | 0.687103 | 2.791004 | 2.498923 | 0.001835 | 0.002440 | 0.002082 |
| tail_mean.test | RUN | 0.964657 | 3.166801 | 3.630507 | 0.018659 | 0.021521 | 0.019228 |
| tail_quantile.test | RUN | 0.794330 | 2.656546 | 2.777299 | 0.021433 | 0.026823 | 0.021083 |
| variance.test | RUN | 0.757542 | 2.410199 | 2.747058 | 0.001979 | 0.002389 | 0.002178 |
| vector.test | RUN | 0.811469 | 2.962739 | 3.342540 | 0.001912 | 0.002157 | 0.002177 |
| weighted_covariance.test | RUN | 1.080528 | 4.506524 | 5.018685 | 0.001847 | 0.002139 | 0.002128 |
| weighted_extended_p_square.test | RUN | 0.739267 | 2.657428 | 2.604079 | 0.017709 | 0.021268 | 0.017084 |
| weighted_kurtosis.test | RUN | 0.872381 | 2.624303 | 3.134974 | 0.002693 | 0.004584 | 0.002937 |
| weighted_mean.test | RUN | 0.735947 | 2.328765 | 2.730323 | 0.002052 | 0.002235 | 0.002124 |
| weighted_median.test | RUN | 0.951013 | 3.208059 | 3.543149 | 0.968302 | 1.096709 | 0.979386 |
| weighted_moment.test | RUN | 0.599147 | 1.736068 | 2.052917 | 0.002106 | 0.002126 | 0.002080 |
| weighted_p_square_cumul_dist.test | RUN | 0.742406 | 2.607525 | 2.505518 | 0.103615 | 0.142334 | 0.096070 |
| weighted_p_square_quantile.test | RUN | 0.688373 | 2.631194 | 2.143058 | 0.022479 | 0.027123 | 0.022431 |
| weighted_skewness.test | RUN | 0.827044 | 2.519591 | 3.001249 | 0.002412 | 0.004591 | 0.002915 |
| weighted_sum.test | RUN | 0.469584 | 1.451028 | 1.658217 | 0.001736 | 0.002156 | 0.002094 |
| weighted_sum_kahan.test | RUN | 0.524701 | 1.567331 | 1.765458 | 0.006325 | 0.010695 | 0.006507 |
| weighted_variance.test | RUN | 0.910474 | 2.906397 | 3.489353 | 0.002219 | 0.002591 | 0.002015 |
| valarray.test | RUN | 0.848261 | 2.727970 | 3.291105 | 0.001941 | 0.002174 | 0.001978 |
| tail_variate_means.test | RUN | 1.109448 | 4.428744 | 4.474786 | 0.002005 | 0.002059 | 0.002055 |
| pot_quantile.test | RUN | 1.275033 | 4.888598 | 5.345023 | 0.008793 | 0.010088 | 0.008975 |
| weighted_pot_quantile.test | RUN | 1.289316 | 4.803997 | 5.402028 | 0.021852 | 0.026975 | 0.022399 |
| weighted_tail_mean.test | RUN | 1.137335 | 3.810107 | 4.492087 | 0.019457 | 0.021306 | 0.019317 |
| weighted_tail_quantile.test | RUN | 1.123976 | 3.408386 | 4.033410 | 0.015611 | 0.018114 | 0.015464 |
| weighted_tail_variate_means.test | RUN | 1.297118 | 3.925637 | 4.648297 | 0.001437 | 0.001519 | 0.001462 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.159× | 1.165×, 1.153× | 0.996× |
| clang | 0.992× | 0.993×, 0.991× | 1.012× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44774088589).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.001935s | 0.001772s | 0.001886s | byte equality observed |
| covariance.test | 1 | 0.001927s | 0.001762s | 0.001802s | byte equality observed |
| droppable.test | 1 | 0.002004s | 0.002009s | 0.001809s | byte equality observed |
| error_of.test | 1 | 0.001765s | 0.001654s | 0.001770s | byte equality observed |
| extended_p_square.test | 5 | 0.002817s | 0.002856s | 0.002784s | byte equality observed |
| extended_p_square_quantile.test | 3 | 0.005990s | 0.006424s | 0.005824s | byte equality observed |
| external_accumulator.test | 9 | 0.001570s | 0.001561s | 0.001524s | byte equality observed |
| external_weights.test | 9 | 0.001526s | 0.001494s | 0.001452s | byte equality observed |
| kurtosis.test | 5 | 0.002297s | 0.003055s | 0.002295s | byte equality observed |
| max.test | 5 | 0.001593s | 0.001575s | 0.001535s | byte equality observed |
| mean.test | 9 | 0.001578s | 0.001565s | 0.001525s | byte equality observed |
| median.test | 1 | 0.101886s | 0.116774s | 0.103008s | byte equality observed |
| min.test | 10 | 0.001557s | 0.001537s | 0.001513s | byte equality observed |
| moment.test | 8 | 0.001573s | 0.001524s | 0.001484s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.637036s | 0.789599s | 0.628513s | byte equality observed |
| p_square_quantile.test | 1 | 0.021510s | 0.023828s | 0.020706s | byte equality observed |
| pot_quantile.test | 3 | 0.008337s | 0.009503s | 0.008075s | byte equality observed |
| reference.test | 10 | 0.001547s | 0.001496s | 0.001485s | byte equality observed |
| rolling_count.test | 10 | 0.001564s | 0.001529s | 0.001495s | byte equality observed |
| rolling_mean.test | 10 | 0.001640s | 0.001624s | 0.001556s | byte equality observed |
| rolling_moment.test | 10 | 0.001607s | 0.001580s | 0.001567s | byte equality observed |
| rolling_sum.test | 10 | 0.001561s | 0.001517s | 0.001516s | byte equality observed |
| rolling_variance.test | 8 | 0.001655s | 0.001620s | 0.001594s | byte equality observed |
| skewness.test | 6 | 0.002284s | 0.002971s | 0.002268s | byte equality observed |
| sum.test | 9 | 0.001551s | 0.001510s | 0.001521s | byte equality observed |
| sum_kahan.test | 2 | 0.010518s | 0.017607s | 0.010185s | byte equality observed |
| tail.test | 9 | 0.001530s | 0.001466s | 0.001488s | byte equality observed |
| tail_mean.test | 2 | 0.017931s | 0.017947s | 0.018644s | byte equality observed |
| tail_quantile.test | 1 | 0.020678s | 0.023090s | 0.019999s | byte equality observed |
| tail_variate_means.test | 8 | 0.001584s | 0.001540s | 0.001460s | byte equality observed |
| valarray.test | 8 | 0.001525s | 0.001504s | 0.001452s | byte equality observed |
| variance.test | 10 | 0.001612s | 0.001523s | 0.001540s | byte equality observed |
| vector.test | 10 | 0.001523s | 0.001485s | 0.001476s | byte equality observed |
| weighted_covariance.test | 10 | 0.001493s | 0.001479s | 0.001468s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.017557s | 0.019689s | 0.015688s | byte equality observed |
| weighted_kurtosis.test | 6 | 0.002233s | 0.003562s | 0.002320s | byte equality observed |
| weighted_mean.test | 10 | 0.001490s | 0.001450s | 0.001429s | byte equality observed |
| weighted_median.test | 1 | 0.855481s | 0.921765s | 0.859699s | byte equality observed |
| weighted_moment.test | 10 | 0.001453s | 0.001421s | 0.001420s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.099605s | 0.143011s | 0.096097s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.021649s | 0.026141s | 0.021741s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.021608s | 0.023286s | 0.020796s | byte equality observed |
| weighted_skewness.test | 6 | 0.002255s | 0.003565s | 0.002336s | byte equality observed |
| weighted_sum.test | 10 | 0.001446s | 0.001422s | 0.001388s | byte equality observed |
| weighted_sum_kahan.test | 3 | 0.005809s | 0.009271s | 0.005771s | byte equality observed |
| weighted_tail_mean.test | 2 | 0.018552s | 0.019075s | 0.018667s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.019857s | 0.021287s | 0.020111s | byte equality observed |
| weighted_tail_variate_means.test | 10 | 0.001505s | 0.001462s | 0.001461s | byte equality observed |
| weighted_variance.test | 10 | 0.001629s | 0.001788s | 0.001582s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44774088589).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
