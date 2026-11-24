# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.702939 | 2.045999 | 2.305070 | 0.003610 | 0.003402 | 0.003281 |
| covariance.test | RUN | 1.334550 | 5.066113 | 5.957181 | 0.003230 | 0.003466 | 0.003154 |
| droppable.test | RUN | 0.870097 | 2.761148 | 3.268638 | 0.003047 | 0.003457 | 0.003259 |
| error_of.test | RUN | 0.968946 | 2.612051 | 3.436449 | 0.002867 | 0.003247 | 0.003049 |
| extended_p_square.test | RUN | 0.981627 | 3.295275 | 3.605097 | 0.004618 | 0.004962 | 0.004481 |
| extended_p_square_quantile.test | RUN | 1.292399 | 5.148388 | 5.051251 | 0.008426 | 0.009187 | 0.007214 |
| external_accumulator.test | RUN | 0.862979 | 2.518711 | 3.054524 | 0.003424 | 0.003289 | 0.002972 |
| external_weights.test | RUN | 0.735356 | 2.055848 | 2.437731 | 0.003034 | 0.003079 | 0.002327 |
| kurtosis.test | RUN | 1.141460 | 3.197914 | 4.137716 | 0.004101 | 0.004977 | 0.004198 |
| max.test | RUN | 0.733392 | 1.958401 | 2.226065 | 0.002899 | 0.003124 | 0.003233 |
| mean.test | RUN | 0.949006 | 2.838032 | 3.376270 | 0.003308 | 0.003532 | 0.003299 |
| median.test | RUN | 1.301546 | 5.297981 | 5.059378 | 0.110876 | 0.132656 | 0.112995 |
| min.test | RUN | 0.699852 | 1.936385 | 2.304572 | 0.003370 | 0.003284 | 0.003451 |
| moment.test | RUN | 0.822374 | 2.241975 | 2.701889 | 0.003337 | 0.003466 | 0.003115 |
| p_square_cumul_dist.test | RUN | 1.061228 | 3.858976 | 3.775175 | 0.817387 | 1.033663 | 0.809727 |
| p_square_quantile.test | RUN | 0.949007 | 3.443593 | 3.244919 | 0.026199 | 0.026786 | 0.024360 |
| reference.test | RUN | 0.807438 | 2.110662 | 2.795468 | 0.003103 | 0.003175 | 0.003178 |
| rolling_count.test | RUN | 0.823614 | 2.309713 | 2.645926 | 0.002898 | 0.003320 | 0.002846 |
| rolling_sum.test | RUN | 0.820815 | 2.432755 | 2.853784 | 0.003339 | 0.003398 | 0.003352 |
| rolling_mean.test | RUN | 1.185345 | 4.401143 | 4.545005 | 0.003107 | 0.003274 | 0.002919 |
| rolling_variance.test | RUN | 1.346364 | 5.098187 | 5.259870 | 0.003448 | 0.003256 | 0.003426 |
| rolling_moment.test | RUN | 1.032357 | 3.033243 | 3.489034 | 0.003108 | 0.003412 | 0.003425 |
| skewness.test | RUN | 1.090252 | 3.117442 | 3.835664 | 0.003962 | 0.004872 | 0.004318 |
| sum.test | RUN | 0.773375 | 2.150019 | 2.470147 | 0.003035 | 0.003268 | 0.003343 |
| sum_kahan.test | RUN | 0.793182 | 2.299891 | 2.655071 | 0.016532 | 0.027703 | 0.016883 |
| tail.test | RUN | 0.866719 | 3.130611 | 2.994950 | 0.003154 | 0.003340 | 0.003187 |
| tail_mean.test | RUN | 1.178282 | 3.723660 | 4.438028 | 0.021464 | 0.028477 | 0.022062 |
| tail_quantile.test | RUN | 0.979790 | 2.888798 | 3.439783 | 0.024488 | 0.031969 | 0.024056 |
| variance.test | RUN | 0.935612 | 2.726255 | 3.331992 | 0.003082 | 0.003156 | 0.003232 |
| vector.test | RUN | 1.003437 | 3.256526 | 4.043587 | 0.003103 | 0.003285 | 0.003063 |
| weighted_covariance.test | RUN | 1.360481 | 5.059184 | 6.247229 | 0.003079 | 0.003091 | 0.002851 |
| weighted_extended_p_square.test | RUN | 0.936644 | 3.004169 | 3.148960 | 0.021235 | 0.024186 | 0.019949 |
| weighted_kurtosis.test | RUN | 1.104304 | 3.112035 | 3.912720 | 0.004200 | 0.005264 | 0.004283 |
| weighted_mean.test | RUN | 0.929513 | 2.704071 | 3.417579 | 0.002591 | 0.002624 | 0.002780 |
| weighted_median.test | RUN | 1.195821 | 3.609370 | 4.311116 | 1.068437 | 1.179522 | 1.103115 |
| weighted_moment.test | RUN | 0.759242 | 2.027482 | 2.484412 | 0.003232 | 0.003093 | 0.003048 |
| weighted_p_square_cumul_dist.test | RUN | 0.925809 | 3.021086 | 3.130308 | 0.108039 | 0.137831 | 0.109681 |
| weighted_p_square_quantile.test | RUN | 0.878320 | 2.975763 | 2.689529 | 0.027425 | 0.030595 | 0.026437 |
| weighted_skewness.test | RUN | 1.051105 | 2.731210 | 3.646328 | 0.004216 | 0.005645 | 0.004322 |
| weighted_sum.test | RUN | 0.587688 | 1.654555 | 1.981962 | 0.002962 | 0.003167 | 0.002978 |
| weighted_sum_kahan.test | RUN | 0.684697 | 1.817787 | 2.149938 | 0.009523 | 0.015296 | 0.009787 |
| weighted_variance.test | RUN | 1.149877 | 3.369431 | 4.214759 | 0.003328 | 0.003474 | 0.002834 |
| valarray.test | RUN | 1.069084 | 3.105459 | 3.997722 | 0.002976 | 0.003372 | 0.003022 |
| tail_variate_means.test | RUN | 1.359991 | 5.001681 | 5.445453 | 0.003091 | 0.003158 | 0.003059 |
| pot_quantile.test | RUN | 1.627548 | 5.583939 | 6.639298 | 0.011048 | 0.012949 | 0.010294 |
| weighted_pot_quantile.test | RUN | 1.661365 | 5.430369 | 6.702230 | 0.025436 | 0.030662 | 0.025747 |
| weighted_tail_mean.test | RUN | 1.461421 | 4.385987 | 5.582201 | 0.022122 | 0.028023 | 0.022491 |
| weighted_tail_quantile.test | RUN | 1.451979 | 3.803467 | 5.151280 | 0.019177 | 0.024242 | 0.019432 |
| weighted_tail_variate_means.test | RUN | 1.654018 | 4.681523 | 5.703585 | 0.002311 | 0.002241 | 0.002171 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.222× | 1.227×, 1.218× | 0.999× |
| clang | 1.008× | 1.000×, 1.016× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45272062060).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.002649s | 0.002470s | 0.002517s | byte equality observed |
| covariance.test | 1 | 0.002633s | 0.002556s | 0.002322s | byte equality observed |
| droppable.test | 1 | 0.002533s | 0.002467s | 0.002472s | byte equality observed |
| error_of.test | 5 | 0.002093s | 0.002082s | 0.002028s | byte equality observed |
| extended_p_square.test | 5 | 0.003518s | 0.003703s | 0.003397s | byte equality observed |
| extended_p_square_quantile.test | 3 | 0.007074s | 0.007927s | 0.006531s | byte equality observed |
| external_accumulator.test | 5 | 0.002157s | 0.002088s | 0.002079s | byte equality observed |
| external_weights.test | 7 | 0.002025s | 0.001962s | 0.001901s | byte equality observed |
| kurtosis.test | 5 | 0.003118s | 0.003769s | 0.002941s | byte equality observed |
| max.test | 6 | 0.002134s | 0.002077s | 0.002015s | byte equality observed |
| mean.test | 6 | 0.002155s | 0.002075s | 0.002098s | byte equality observed |
| median.test | 1 | 0.107081s | 0.144523s | 0.108629s | byte equality observed |
| min.test | 6 | 0.002106s | 0.002017s | 0.002022s | byte equality observed |
| moment.test | 5 | 0.002109s | 0.002059s | 0.002054s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.747418s | 0.992797s | 0.775508s | byte equality observed |
| p_square_quantile.test | 1 | 0.027016s | 0.026940s | 0.024075s | byte equality observed |
| pot_quantile.test | 2 | 0.010156s | 0.011309s | 0.009645s | byte equality observed |
| reference.test | 8 | 0.002130s | 0.002052s | 0.002055s | byte equality observed |
| rolling_count.test | 9 | 0.002117s | 0.002011s | 0.002047s | byte equality observed |
| rolling_mean.test | 8 | 0.002204s | 0.002126s | 0.002138s | byte equality observed |
| rolling_moment.test | 8 | 0.002205s | 0.002130s | 0.002111s | byte equality observed |
| rolling_sum.test | 9 | 0.002123s | 0.002019s | 0.002035s | byte equality observed |
| rolling_variance.test | 6 | 0.002237s | 0.002127s | 0.002132s | byte equality observed |
| skewness.test | 4 | 0.003100s | 0.003742s | 0.003127s | byte equality observed |
| sum.test | 7 | 0.002071s | 0.002033s | 0.001989s | byte equality observed |
| sum_kahan.test | 1 | 0.015603s | 0.026533s | 0.015588s | byte equality observed |
| tail.test | 8 | 0.002082s | 0.001949s | 0.002045s | byte equality observed |
| tail_mean.test | 1 | 0.019668s | 0.021868s | 0.020425s | byte equality observed |
| tail_quantile.test | 1 | 0.022565s | 0.028395s | 0.022027s | byte equality observed |
| tail_variate_means.test | 8 | 0.002045s | 0.001939s | 0.001963s | byte equality observed |
| valarray.test | 9 | 0.002019s | 0.001942s | 0.001974s | byte equality observed |
| variance.test | 9 | 0.002094s | 0.002061s | 0.002048s | byte equality observed |
| vector.test | 9 | 0.002007s | 0.001980s | 0.001942s | byte equality observed |
| weighted_covariance.test | 9 | 0.002010s | 0.001953s | 0.001926s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.021262s | 0.025369s | 0.018526s | byte equality observed |
| weighted_kurtosis.test | 5 | 0.003168s | 0.004239s | 0.003003s | byte equality observed |
| weighted_mean.test | 6 | 0.001990s | 0.001939s | 0.001915s | byte equality observed |
| weighted_median.test | 1 | 0.989900s | 1.113187s | 1.014944s | byte equality observed |
| weighted_moment.test | 5 | 0.001990s | 0.001887s | 0.001878s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.118838s | 0.174201s | 0.110253s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.027479s | 0.033300s | 0.025686s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.025165s | 0.027058s | 0.023758s | byte equality observed |
| weighted_skewness.test | 4 | 0.003272s | 0.004227s | 0.003063s | byte equality observed |
| weighted_sum.test | 9 | 0.001974s | 0.001876s | 0.001891s | byte equality observed |
| weighted_sum_kahan.test | 2 | 0.008758s | 0.013869s | 0.008651s | byte equality observed |
| weighted_tail_mean.test | 1 | 0.020300s | 0.022490s | 0.020617s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.022063s | 0.025580s | 0.022182s | byte equality observed |
| weighted_tail_variate_means.test | 7 | 0.002000s | 0.001932s | 0.001995s | byte equality observed |
| weighted_variance.test | 8 | 0.002170s | 0.002268s | 0.002082s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45272062060).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
