# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.569428 | 1.763512 | 1.919324 | 0.002114 | 0.002663 | 0.002431 |
| covariance.test | RUN | 1.103002 | 4.715603 | 5.060434 | 0.002155 | 0.002428 | 0.002513 |
| droppable.test | RUN | 0.711564 | 2.448896 | 2.603681 | 0.002401 | 0.002628 | 0.002317 |
| error_of.test | RUN | 0.775129 | 2.351857 | 2.823092 | 0.001943 | 0.002210 | 0.002011 |
| extended_p_square.test | RUN | 0.822137 | 3.095774 | 2.968828 | 0.003641 | 0.004191 | 0.003670 |
| extended_p_square_quantile.test | RUN | 1.097834 | 4.914175 | 4.268044 | 0.006960 | 0.008125 | 0.006618 |
| external_accumulator.test | RUN | 0.688526 | 2.311171 | 2.586902 | 0.002232 | 0.002584 | 0.002082 |
| external_weights.test | RUN | 0.594365 | 1.816475 | 2.008212 | 0.001958 | 0.002496 | 0.002219 |
| kurtosis.test | RUN | 0.899629 | 2.968342 | 3.483117 | 0.002833 | 0.004216 | 0.003249 |
| max.test | RUN | 0.568416 | 1.749193 | 1.898761 | 0.002126 | 0.002608 | 0.002401 |
| mean.test | RUN | 0.747584 | 2.499392 | 2.782249 | 0.002325 | 0.002641 | 0.002448 |
| median.test | RUN | 1.057466 | 5.024606 | 4.318424 | 0.102475 | 0.122172 | 0.102212 |
| min.test | RUN | 0.568684 | 1.762070 | 1.891633 | 0.002264 | 0.002523 | 0.002368 |
| moment.test | RUN | 0.647816 | 1.985897 | 2.313833 | 0.002026 | 0.002571 | 0.002086 |
| p_square_cumul_dist.test | RUN | 0.857129 | 3.523451 | 3.176409 | 0.728942 | 0.899524 | 0.716898 |
| p_square_quantile.test | RUN | 0.770737 | 3.124589 | 2.701505 | 0.023270 | 0.024678 | 0.021510 |
| reference.test | RUN | 0.631947 | 1.984151 | 2.239188 | 0.001976 | 0.002402 | 0.002246 |
| rolling_count.test | RUN | 0.674835 | 2.069012 | 2.303076 | 0.002002 | 0.002600 | 0.002255 |
| rolling_sum.test | RUN | 0.651098 | 2.233538 | 2.189643 | 0.002345 | 0.002626 | 0.002186 |
| rolling_mean.test | RUN | 1.003456 | 4.118835 | 3.895193 | 0.002278 | 0.002819 | 0.002636 |
| rolling_variance.test | RUN | 1.131378 | 4.777030 | 4.467695 | 0.002240 | 0.002635 | 0.002337 |
| rolling_moment.test | RUN | 0.814139 | 2.743158 | 2.885279 | 0.002227 | 0.002762 | 0.002372 |
| skewness.test | RUN | 0.873545 | 2.828048 | 3.250590 | 0.002944 | 0.004301 | 0.002919 |
| sum.test | RUN | 0.605167 | 1.913502 | 2.134922 | 0.002146 | 0.002719 | 0.002195 |
| sum_kahan.test | RUN | 0.671029 | 2.054849 | 2.250653 | 0.011203 | 0.019298 | 0.011462 |
| tail.test | RUN | 0.706015 | 2.896426 | 2.496682 | 0.001901 | 0.002663 | 0.002168 |
| tail_mean.test | RUN | 0.988805 | 3.353773 | 3.695599 | 0.018080 | 0.021653 | 0.019002 |
| tail_quantile.test | RUN | 0.801619 | 2.740833 | 2.874444 | 0.021764 | 0.024617 | 0.020569 |
| variance.test | RUN | 0.775062 | 2.441946 | 2.834191 | 0.002016 | 0.002546 | 0.002222 |
| vector.test | RUN | 0.825388 | 3.039969 | 3.421705 | 0.002044 | 0.002589 | 0.002270 |
| weighted_covariance.test | RUN | 1.119827 | 4.716712 | 5.111186 | 0.001786 | 0.002357 | 0.001646 |
| weighted_extended_p_square.test | RUN | 0.763345 | 2.737630 | 2.615043 | 0.018764 | 0.021423 | 0.017160 |
| weighted_kurtosis.test | RUN | 0.900430 | 2.723868 | 3.253723 | 0.002899 | 0.004631 | 0.003119 |
| weighted_mean.test | RUN | 0.750318 | 2.402442 | 2.834818 | 0.002132 | 0.002419 | 0.002282 |
| weighted_median.test | RUN | 0.968401 | 3.329558 | 3.671375 | 0.975405 | 1.085627 | 0.979787 |
| weighted_moment.test | RUN | 0.607749 | 1.782190 | 2.066066 | 0.002116 | 0.002454 | 0.002206 |
| weighted_p_square_cumul_dist.test | RUN | 0.760409 | 2.809488 | 2.582034 | 0.097842 | 0.120066 | 0.097260 |
| weighted_p_square_quantile.test | RUN | 0.708539 | 2.709080 | 2.349851 | 0.021545 | 0.027689 | 0.022688 |
| weighted_skewness.test | RUN | 0.842359 | 2.432530 | 2.812892 | 0.002965 | 0.004319 | 0.003138 |
| weighted_sum.test | RUN | 0.516284 | 1.530465 | 1.660989 | 0.002220 | 0.002300 | 0.002099 |
| weighted_sum_kahan.test | RUN | 0.479849 | 1.630103 | 1.738341 | 0.006120 | 0.010881 | 0.006753 |
| weighted_variance.test | RUN | 0.893655 | 2.983769 | 3.534940 | 0.002396 | 0.002771 | 0.002365 |
| valarray.test | RUN | 0.865609 | 2.866935 | 3.266261 | 0.001929 | 0.002574 | 0.002022 |
| tail_variate_means.test | RUN | 1.125480 | 4.601479 | 4.566201 | 0.001912 | 0.002443 | 0.002146 |
| pot_quantile.test | RUN | 1.317491 | 5.079895 | 5.401969 | 0.009243 | 0.011369 | 0.008794 |
| weighted_pot_quantile.test | RUN | 1.328122 | 5.077415 | 5.510131 | 0.021023 | 0.027576 | 0.022355 |
| weighted_tail_mean.test | RUN | 1.140725 | 4.005040 | 4.620743 | 0.019680 | 0.022233 | 0.019991 |
| weighted_tail_quantile.test | RUN | 1.181878 | 3.485695 | 4.144150 | 0.015783 | 0.018326 | 0.015636 |
| weighted_tail_variate_means.test | RUN | 1.217831 | 4.056121 | 4.839125 | 0.001526 | 0.001673 | 0.001553 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.168× | 1.168×, 1.169× | 0.999× |
| clang | 1.002× | 0.995×, 1.010× | 1.006× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46092715613).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.001968s | 0.001971s | 0.001786s | byte equality observed |
| covariance.test | 1 | 0.002022s | 0.001917s | 0.001874s | byte equality observed |
| droppable.test | 1 | 0.001879s | 0.001936s | 0.001972s | byte equality observed |
| error_of.test | 1 | 0.001783s | 0.001886s | 0.001779s | byte equality observed |
| extended_p_square.test | 5 | 0.002846s | 0.003022s | 0.002744s | byte equality observed |
| extended_p_square_quantile.test | 3 | 0.006041s | 0.006541s | 0.005721s | byte equality observed |
| external_accumulator.test | 7 | 0.001577s | 0.001594s | 0.001537s | byte equality observed |
| external_weights.test | 7 | 0.001542s | 0.001538s | 0.001468s | byte equality observed |
| kurtosis.test | 6 | 0.002360s | 0.003099s | 0.002298s | byte equality observed |
| max.test | 8 | 0.001603s | 0.001566s | 0.001542s | byte equality observed |
| mean.test | 10 | 0.001603s | 0.001581s | 0.001531s | byte equality observed |
| median.test | 1 | 0.098293s | 0.113421s | 0.100395s | byte equality observed |
| min.test | 9 | 0.001584s | 0.001546s | 0.001522s | byte equality observed |
| moment.test | 8 | 0.001585s | 0.001525s | 0.001504s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.631488s | 0.814369s | 0.623361s | byte equality observed |
| p_square_quantile.test | 1 | 0.021761s | 0.023930s | 0.020477s | byte equality observed |
| pot_quantile.test | 2 | 0.008414s | 0.009540s | 0.008190s | byte equality observed |
| reference.test | 10 | 0.001570s | 0.001524s | 0.001495s | byte equality observed |
| rolling_count.test | 10 | 0.001602s | 0.001546s | 0.001531s | byte equality observed |
| rolling_mean.test | 9 | 0.001677s | 0.001635s | 0.001564s | byte equality observed |
| rolling_moment.test | 10 | 0.001652s | 0.001584s | 0.001579s | byte equality observed |
| rolling_sum.test | 10 | 0.001617s | 0.001538s | 0.001539s | byte equality observed |
| rolling_variance.test | 5 | 0.001685s | 0.001659s | 0.001628s | byte equality observed |
| skewness.test | 6 | 0.002323s | 0.003057s | 0.002319s | byte equality observed |
| sum.test | 7 | 0.001567s | 0.001526s | 0.001528s | byte equality observed |
| sum_kahan.test | 1 | 0.010579s | 0.017751s | 0.010328s | byte equality observed |
| tail.test | 10 | 0.001615s | 0.001518s | 0.001508s | byte equality observed |
| tail_mean.test | 2 | 0.017666s | 0.018566s | 0.018425s | byte equality observed |
| tail_quantile.test | 1 | 0.020297s | 0.024429s | 0.020326s | byte equality observed |
| tail_variate_means.test | 9 | 0.001590s | 0.001494s | 0.001548s | byte equality observed |
| valarray.test | 8 | 0.001550s | 0.001543s | 0.001491s | byte equality observed |
| variance.test | 8 | 0.001617s | 0.001540s | 0.001538s | byte equality observed |
| vector.test | 8 | 0.001521s | 0.001510s | 0.001459s | byte equality observed |
| weighted_covariance.test | 10 | 0.001545s | 0.001488s | 0.001442s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.017211s | 0.022189s | 0.017295s | byte equality observed |
| weighted_kurtosis.test | 6 | 0.002353s | 0.003475s | 0.002235s | byte equality observed |
| weighted_mean.test | 10 | 0.001517s | 0.001460s | 0.001437s | byte equality observed |
| weighted_median.test | 1 | 0.857131s | 0.935922s | 0.862409s | byte equality observed |
| weighted_moment.test | 8 | 0.001489s | 0.001447s | 0.001415s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.101877s | 0.118092s | 0.101544s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.021702s | 0.027362s | 0.021815s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.021853s | 0.023486s | 0.020925s | byte equality observed |
| weighted_skewness.test | 5 | 0.002304s | 0.003586s | 0.002363s | byte equality observed |
| weighted_sum.test | 10 | 0.001470s | 0.001459s | 0.001418s | byte equality observed |
| weighted_sum_kahan.test | 3 | 0.005810s | 0.009413s | 0.005750s | byte equality observed |
| weighted_tail_mean.test | 2 | 0.018371s | 0.020285s | 0.018304s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.019394s | 0.023614s | 0.019704s | byte equality observed |
| weighted_tail_variate_means.test | 9 | 0.001518s | 0.001507s | 0.001476s | byte equality observed |
| weighted_variance.test | 10 | 0.001637s | 0.001820s | 0.001590s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46092715613).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
