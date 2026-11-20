# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.563443 | 1.671929 | 1.895779 | 0.002125 | 0.002246 | 0.002216 |
| covariance.test | RUN | 1.095798 | 4.452606 | 4.896906 | 0.002226 | 0.002101 | 0.002284 |
| droppable.test | RUN | 0.701074 | 2.300005 | 2.583681 | 0.002208 | 0.002118 | 0.001971 |
| error_of.test | RUN | 0.771022 | 2.233175 | 2.822608 | 0.001765 | 0.002040 | 0.002207 |
| extended_p_square.test | RUN | 0.812374 | 2.871193 | 2.966298 | 0.003434 | 0.003559 | 0.003477 |
| extended_p_square_quantile.test | RUN | 1.081137 | 4.502092 | 4.154501 | 0.006573 | 0.007647 | 0.006891 |
| external_accumulator.test | RUN | 0.693583 | 2.182386 | 2.454968 | 0.002306 | 0.002208 | 0.002213 |
| external_weights.test | RUN | 0.616998 | 1.639591 | 1.995057 | 0.002104 | 0.002044 | 0.001952 |
| kurtosis.test | RUN | 0.910947 | 2.761397 | 3.400458 | 0.002714 | 0.003732 | 0.002940 |
| max.test | RUN | 0.570319 | 1.693528 | 1.871666 | 0.002209 | 0.002036 | 0.002183 |
| mean.test | RUN | 0.772017 | 2.307226 | 2.773990 | 0.002301 | 0.002129 | 0.002440 |
| median.test | RUN | 1.061141 | 4.649221 | 4.201471 | 0.104770 | 0.116534 | 0.102442 |
| min.test | RUN | 0.583858 | 1.629686 | 1.886756 | 0.002436 | 0.002031 | 0.001772 |
| moment.test | RUN | 0.662868 | 1.932442 | 2.250621 | 0.001881 | 0.002092 | 0.002235 |
| p_square_cumul_dist.test | RUN | 0.869734 | 3.298502 | 3.126495 | 0.724086 | 0.906428 | 0.724266 |
| p_square_quantile.test | RUN | 0.750701 | 2.953725 | 2.655248 | 0.022118 | 0.023849 | 0.022329 |
| reference.test | RUN | 0.648439 | 1.823798 | 2.230718 | 0.001956 | 0.002268 | 0.002027 |
| rolling_count.test | RUN | 0.673362 | 1.952056 | 2.313638 | 0.002041 | 0.002149 | 0.002290 |
| rolling_sum.test | RUN | 0.627877 | 2.126060 | 2.182260 | 0.002186 | 0.002092 | 0.002101 |
| rolling_mean.test | RUN | 0.998353 | 3.859451 | 3.842215 | 0.002271 | 0.002184 | 0.002290 |
| rolling_variance.test | RUN | 1.131602 | 4.470036 | 4.336479 | 0.002200 | 0.002150 | 0.002144 |
| rolling_moment.test | RUN | 0.808526 | 2.573426 | 2.856832 | 0.002384 | 0.002121 | 0.002332 |
| skewness.test | RUN | 0.876583 | 2.647662 | 3.223141 | 0.002859 | 0.003906 | 0.002976 |
| sum.test | RUN | 0.601291 | 1.828883 | 2.119929 | 0.002361 | 0.002253 | 0.002259 |
| sum_kahan.test | RUN | 0.638952 | 1.937082 | 2.190267 | 0.011132 | 0.018277 | 0.011192 |
| tail.test | RUN | 0.710760 | 2.716329 | 2.499412 | 0.002468 | 0.002138 | 0.002099 |
| tail_mean.test | RUN | 0.992586 | 3.192156 | 3.624559 | 0.018519 | 0.022218 | 0.019756 |
| tail_quantile.test | RUN | 0.805311 | 2.540973 | 2.816944 | 0.021542 | 0.024027 | 0.021067 |
| variance.test | RUN | 0.780202 | 2.268690 | 2.761940 | 0.002124 | 0.002292 | 0.002319 |
| vector.test | RUN | 0.846044 | 2.794628 | 3.394864 | 0.002153 | 0.002281 | 0.002030 |
| weighted_covariance.test | RUN | 1.111264 | 4.371212 | 5.032733 | 0.001887 | 0.002181 | 0.002354 |
| weighted_extended_p_square.test | RUN | 0.758944 | 2.567181 | 2.543375 | 0.018724 | 0.021510 | 0.015665 |
| weighted_kurtosis.test | RUN | 0.891020 | 2.546174 | 3.210829 | 0.003068 | 0.004186 | 0.003051 |
| weighted_mean.test | RUN | 0.743201 | 2.273662 | 2.785166 | 0.001877 | 0.002099 | 0.001995 |
| weighted_median.test | RUN | 0.963492 | 3.138962 | 3.561111 | 0.974828 | 1.060994 | 0.967160 |
| weighted_moment.test | RUN | 0.612401 | 1.709089 | 2.024394 | 0.002407 | 0.002035 | 0.002044 |
| weighted_p_square_cumul_dist.test | RUN | 0.748875 | 2.543275 | 2.306024 | 0.097078 | 0.143458 | 0.097070 |
| weighted_p_square_quantile.test | RUN | 0.699026 | 2.574800 | 2.361811 | 0.022654 | 0.026806 | 0.022629 |
| weighted_skewness.test | RUN | 0.745936 | 2.481366 | 2.981775 | 0.002614 | 0.004239 | 0.002842 |
| weighted_sum.test | RUN | 0.512922 | 1.418302 | 1.612544 | 0.002096 | 0.001493 | 0.002019 |
| weighted_sum_kahan.test | RUN | 0.561738 | 1.520588 | 1.725543 | 0.006447 | 0.010654 | 0.006524 |
| weighted_variance.test | RUN | 0.940256 | 2.877212 | 3.464261 | 0.002231 | 0.002410 | 0.002349 |
| valarray.test | RUN | 0.863904 | 2.701397 | 3.177570 | 0.001989 | 0.002199 | 0.002090 |
| tail_variate_means.test | RUN | 1.132023 | 4.402165 | 4.502921 | 0.001997 | 0.001957 | 0.002218 |
| pot_quantile.test | RUN | 1.345264 | 4.868611 | 5.308897 | 0.008827 | 0.010472 | 0.008736 |
| weighted_pot_quantile.test | RUN | 1.349982 | 4.769720 | 5.347841 | 0.016872 | 0.026760 | 0.021619 |
| weighted_tail_mean.test | RUN | 1.174685 | 3.786419 | 4.585556 | 0.019746 | 0.021665 | 0.019556 |
| weighted_tail_quantile.test | RUN | 1.152835 | 3.219555 | 4.069200 | 0.015927 | 0.018130 | 0.015754 |
| weighted_tail_variate_means.test | RUN | 1.367676 | 3.964445 | 4.621032 | 0.001576 | 0.001431 | 0.001507 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.168× | 1.169×, 1.167× | 1.005× |
| clang | 0.992× | 0.993×, 0.991× | 0.996× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44780058957).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.001978s | 0.001844s | 0.001882s | byte equality observed |
| covariance.test | 1 | 0.001987s | 0.001851s | 0.001845s | byte equality observed |
| droppable.test | 1 | 0.001822s | 0.001817s | 0.001783s | byte equality observed |
| error_of.test | 8 | 0.001548s | 0.001524s | 0.001502s | byte equality observed |
| extended_p_square.test | 5 | 0.002872s | 0.002973s | 0.002761s | byte equality observed |
| extended_p_square_quantile.test | 3 | 0.006011s | 0.006606s | 0.005836s | byte equality observed |
| external_accumulator.test | 9 | 0.001586s | 0.001518s | 0.001500s | byte equality observed |
| external_weights.test | 8 | 0.001501s | 0.001504s | 0.001481s | byte equality observed |
| kurtosis.test | 6 | 0.002287s | 0.003101s | 0.002229s | byte equality observed |
| max.test | 6 | 0.001586s | 0.001530s | 0.001495s | byte equality observed |
| mean.test | 8 | 0.001583s | 0.001531s | 0.001536s | byte equality observed |
| median.test | 1 | 0.099692s | 0.115049s | 0.095840s | byte equality observed |
| min.test | 9 | 0.001557s | 0.001505s | 0.001497s | byte equality observed |
| moment.test | 9 | 0.001570s | 0.001520s | 0.001500s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.633916s | 0.807753s | 0.628852s | byte equality observed |
| p_square_quantile.test | 1 | 0.021763s | 0.023968s | 0.020696s | byte equality observed |
| pot_quantile.test | 2 | 0.008381s | 0.009514s | 0.008153s | byte equality observed |
| reference.test | 10 | 0.001538s | 0.001506s | 0.001478s | byte equality observed |
| rolling_count.test | 10 | 0.001562s | 0.001524s | 0.001525s | byte equality observed |
| rolling_mean.test | 9 | 0.001656s | 0.001604s | 0.001571s | byte equality observed |
| rolling_moment.test | 10 | 0.001595s | 0.001579s | 0.001540s | byte equality observed |
| rolling_sum.test | 10 | 0.001562s | 0.001539s | 0.001516s | byte equality observed |
| rolling_variance.test | 10 | 0.001665s | 0.001623s | 0.001593s | byte equality observed |
| skewness.test | 6 | 0.002230s | 0.003044s | 0.002314s | byte equality observed |
| sum.test | 9 | 0.001527s | 0.001497s | 0.001503s | byte equality observed |
| sum_kahan.test | 2 | 0.010477s | 0.017809s | 0.010521s | byte equality observed |
| tail.test | 10 | 0.001526s | 0.001437s | 0.001484s | byte equality observed |
| tail_mean.test | 2 | 0.017852s | 0.017769s | 0.018288s | byte equality observed |
| tail_quantile.test | 1 | 0.020804s | 0.022979s | 0.019645s | byte equality observed |
| tail_variate_means.test | 10 | 0.001535s | 0.001498s | 0.001498s | byte equality observed |
| valarray.test | 10 | 0.001526s | 0.001473s | 0.001482s | byte equality observed |
| variance.test | 10 | 0.001565s | 0.001500s | 0.001512s | byte equality observed |
| vector.test | 9 | 0.001514s | 0.001469s | 0.001454s | byte equality observed |
| weighted_covariance.test | 10 | 0.001502s | 0.001432s | 0.001447s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.016891s | 0.021322s | 0.016733s | byte equality observed |
| weighted_kurtosis.test | 6 | 0.002328s | 0.003505s | 0.002219s | byte equality observed |
| weighted_mean.test | 9 | 0.001498s | 0.001465s | 0.001414s | byte equality observed |
| weighted_median.test | 1 | 0.859400s | 0.929284s | 0.866019s | byte equality observed |
| weighted_moment.test | 10 | 0.001469s | 0.001420s | 0.001385s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.101776s | 0.133669s | 0.096597s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.021595s | 0.026737s | 0.021830s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.021618s | 0.023438s | 0.020929s | byte equality observed |
| weighted_skewness.test | 6 | 0.002261s | 0.003493s | 0.002328s | byte equality observed |
| weighted_sum.test | 10 | 0.001439s | 0.001405s | 0.001377s | byte equality observed |
| weighted_sum_kahan.test | 3 | 0.005757s | 0.009366s | 0.005877s | byte equality observed |
| weighted_tail_mean.test | 2 | 0.018555s | 0.019161s | 0.019113s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.019417s | 0.021397s | 0.020246s | byte equality observed |
| weighted_tail_variate_means.test | 10 | 0.001501s | 0.001443s | 0.001461s | byte equality observed |
| weighted_variance.test | 10 | 0.001618s | 0.001774s | 0.001542s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44780058957).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
