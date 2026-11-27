# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.557222 | 1.670233 | 1.850351 | 0.002300 | 0.001983 | 0.001978 |
| covariance.test | RUN | 1.077217 | 4.413495 | 4.880722 | 0.002105 | 0.002028 | 0.002221 |
| droppable.test | RUN | 0.720511 | 2.286908 | 2.526399 | 0.002100 | 0.002108 | 0.001857 |
| error_of.test | RUN | 0.776593 | 2.229400 | 2.725376 | 0.001863 | 0.002102 | 0.001892 |
| extended_p_square.test | RUN | 0.812782 | 2.875409 | 2.911745 | 0.003126 | 0.004058 | 0.003207 |
| extended_p_square_quantile.test | RUN | 1.056061 | 4.615572 | 4.120277 | 0.006783 | 0.007751 | 0.006792 |
| external_accumulator.test | RUN | 0.696622 | 2.246792 | 2.450388 | 0.002064 | 0.002310 | 0.002166 |
| external_weights.test | RUN | 0.596463 | 1.665627 | 1.949388 | 0.002179 | 0.002138 | 0.001904 |
| kurtosis.test | RUN | 0.892309 | 2.793710 | 3.374783 | 0.002901 | 0.003797 | 0.002834 |
| max.test | RUN | 0.570445 | 1.688414 | 1.844727 | 0.002096 | 0.002052 | 0.002042 |
| mean.test | RUN | 0.737456 | 2.384877 | 2.665567 | 0.002233 | 0.002351 | 0.002072 |
| median.test | RUN | 1.035450 | 4.788753 | 4.212077 | 0.102473 | 0.116437 | 0.100089 |
| min.test | RUN | 0.566857 | 1.651130 | 1.829097 | 0.002385 | 0.002131 | 0.002149 |
| moment.test | RUN | 0.640905 | 1.906156 | 2.242747 | 0.002020 | 0.002108 | 0.002064 |
| p_square_cumul_dist.test | RUN | 0.839753 | 3.318422 | 3.098672 | 0.733255 | 0.900095 | 0.723333 |
| p_square_quantile.test | RUN | 0.763018 | 2.929383 | 2.591166 | 0.022315 | 0.024152 | 0.021631 |
| reference.test | RUN | 0.623578 | 1.837883 | 2.203089 | 0.002360 | 0.002142 | 0.002130 |
| rolling_count.test | RUN | 0.670268 | 2.115305 | 2.262315 | 0.002107 | 0.002240 | 0.001970 |
| rolling_sum.test | RUN | 0.640834 | 2.008875 | 2.126691 | 0.002340 | 0.002134 | 0.002104 |
| rolling_mean.test | RUN | 0.993947 | 3.823873 | 3.792145 | 0.002422 | 0.002222 | 0.002169 |
| rolling_variance.test | RUN | 1.138058 | 4.497331 | 4.331939 | 0.002236 | 0.002428 | 0.002325 |
| rolling_moment.test | RUN | 0.811313 | 2.572883 | 2.818326 | 0.002213 | 0.002183 | 0.002292 |
| skewness.test | RUN | 0.881147 | 2.694432 | 3.072969 | 0.002987 | 0.003964 | 0.002899 |
| sum.test | RUN | 0.604492 | 1.823356 | 2.042510 | 0.002341 | 0.002092 | 0.002096 |
| sum_kahan.test | RUN | 0.656697 | 1.952795 | 2.144410 | 0.010604 | 0.018393 | 0.011177 |
| tail.test | RUN | 0.708024 | 2.747074 | 2.447114 | 0.002081 | 0.002193 | 0.001900 |
| tail_mean.test | RUN | 0.975670 | 3.174538 | 3.581242 | 0.018527 | 0.020682 | 0.018725 |
| tail_quantile.test | RUN | 0.803884 | 2.550023 | 2.755543 | 0.021577 | 0.024616 | 0.020308 |
| variance.test | RUN | 0.761843 | 2.301254 | 2.724078 | 0.002064 | 0.002066 | 0.001981 |
| vector.test | RUN | 0.830622 | 2.864564 | 3.191652 | 0.002012 | 0.002144 | 0.001898 |
| weighted_covariance.test | RUN | 1.097192 | 4.547354 | 4.819592 | 0.001772 | 0.002067 | 0.001778 |
| weighted_extended_p_square.test | RUN | 0.756506 | 2.589728 | 2.494287 | 0.018259 | 0.021735 | 0.017239 |
| weighted_kurtosis.test | RUN | 0.878336 | 2.587394 | 3.014701 | 0.002863 | 0.004316 | 0.002916 |
| weighted_mean.test | RUN | 0.744974 | 2.363110 | 2.582940 | 0.001909 | 0.002047 | 0.001901 |
| weighted_median.test | RUN | 0.968879 | 3.172886 | 3.365371 | 0.980280 | 1.062841 | 0.972246 |
| weighted_moment.test | RUN | 0.603464 | 1.725135 | 1.998717 | 0.002099 | 0.002377 | 0.001813 |
| weighted_p_square_cumul_dist.test | RUN | 0.750184 | 2.656929 | 2.206901 | 0.098600 | 0.118884 | 0.098108 |
| weighted_p_square_quantile.test | RUN | 0.694112 | 2.598683 | 2.240350 | 0.022952 | 0.025155 | 0.021395 |
| weighted_skewness.test | RUN | 0.823496 | 2.206398 | 2.874392 | 0.002908 | 0.004110 | 0.002663 |
| weighted_sum.test | RUN | 0.446236 | 1.458954 | 1.559754 | 0.001861 | 0.002258 | 0.001703 |
| weighted_sum_kahan.test | RUN | 0.542650 | 1.574924 | 1.646232 | 0.006450 | 0.010582 | 0.006286 |
| weighted_variance.test | RUN | 0.867161 | 2.822653 | 3.326022 | 0.002228 | 0.002352 | 0.002118 |
| valarray.test | RUN | 0.854414 | 2.687368 | 3.059234 | 0.001987 | 0.002037 | 0.001974 |
| tail_variate_means.test | RUN | 1.107151 | 4.380622 | 4.273695 | 0.002203 | 0.002075 | 0.001836 |
| pot_quantile.test | RUN | 1.325975 | 4.860684 | 5.159618 | 0.009087 | 0.010792 | 0.008377 |
| weighted_pot_quantile.test | RUN | 1.351648 | 4.651556 | 5.191323 | 0.022369 | 0.026734 | 0.021892 |
| weighted_tail_mean.test | RUN | 1.161177 | 3.699094 | 4.326554 | 0.018900 | 0.021371 | 0.019576 |
| weighted_tail_quantile.test | RUN | 1.139157 | 3.234034 | 3.829501 | 0.015885 | 0.017874 | 0.015171 |
| weighted_tail_variate_means.test | RUN | 1.277943 | 3.842239 | 4.332561 | 0.001484 | 0.001456 | 0.001323 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.173× | 1.170×, 1.176× | 0.994× |
| clang | 0.991× | 0.986×, 0.996× | 0.982× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46032707836).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.001888s | 0.001912s | 0.001768s | byte equality observed |
| covariance.test | 1 | 0.001968s | 0.001804s | 0.001892s | byte equality observed |
| droppable.test | 1 | 0.001890s | 0.001948s | 0.001914s | byte equality observed |
| error_of.test | 6 | 0.001577s | 0.001562s | 0.001579s | byte equality observed |
| extended_p_square.test | 5 | 0.002865s | 0.003024s | 0.002793s | byte equality observed |
| extended_p_square_quantile.test | 3 | 0.006190s | 0.006627s | 0.005852s | byte equality observed |
| external_accumulator.test | 9 | 0.001573s | 0.001549s | 0.001511s | byte equality observed |
| external_weights.test | 10 | 0.001512s | 0.001480s | 0.001441s | byte equality observed |
| kurtosis.test | 6 | 0.002303s | 0.003092s | 0.002294s | byte equality observed |
| max.test | 9 | 0.001571s | 0.001568s | 0.001530s | byte equality observed |
| mean.test | 8 | 0.001588s | 0.001527s | 0.001555s | byte equality observed |
| median.test | 1 | 0.098831s | 0.114046s | 0.097873s | byte equality observed |
| min.test | 5 | 0.001566s | 0.001546s | 0.001520s | byte equality observed |
| moment.test | 9 | 0.001566s | 0.001502s | 0.001514s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.634274s | 0.823174s | 0.614791s | byte equality observed |
| p_square_quantile.test | 1 | 0.021744s | 0.023970s | 0.020767s | byte equality observed |
| pot_quantile.test | 2 | 0.008415s | 0.009590s | 0.008215s | byte equality observed |
| reference.test | 10 | 0.001534s | 0.001501s | 0.001469s | byte equality observed |
| rolling_count.test | 10 | 0.001591s | 0.001539s | 0.001536s | byte equality observed |
| rolling_mean.test | 10 | 0.001668s | 0.001616s | 0.001584s | byte equality observed |
| rolling_moment.test | 10 | 0.001608s | 0.001594s | 0.001560s | byte equality observed |
| rolling_sum.test | 10 | 0.001570s | 0.001544s | 0.001514s | byte equality observed |
| rolling_variance.test | 9 | 0.001663s | 0.001623s | 0.001610s | byte equality observed |
| skewness.test | 6 | 0.002257s | 0.003107s | 0.002246s | byte equality observed |
| sum.test | 10 | 0.001564s | 0.001519s | 0.001498s | byte equality observed |
| sum_kahan.test | 2 | 0.010167s | 0.017581s | 0.010114s | byte equality observed |
| tail.test | 9 | 0.001544s | 0.001496s | 0.001510s | byte equality observed |
| tail_mean.test | 2 | 0.017903s | 0.018418s | 0.018216s | byte equality observed |
| tail_quantile.test | 1 | 0.021369s | 0.021680s | 0.019967s | byte equality observed |
| tail_variate_means.test | 10 | 0.001563s | 0.001511s | 0.001491s | byte equality observed |
| valarray.test | 10 | 0.001534s | 0.001523s | 0.001465s | byte equality observed |
| variance.test | 8 | 0.001599s | 0.001515s | 0.001538s | byte equality observed |
| vector.test | 10 | 0.001501s | 0.001496s | 0.001457s | byte equality observed |
| weighted_covariance.test | 8 | 0.001525s | 0.001461s | 0.001447s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.016989s | 0.022099s | 0.016349s | byte equality observed |
| weighted_kurtosis.test | 6 | 0.002371s | 0.003430s | 0.002386s | byte equality observed |
| weighted_mean.test | 8 | 0.001517s | 0.001450s | 0.001430s | byte equality observed |
| weighted_median.test | 1 | 0.858473s | 0.938724s | 0.865216s | byte equality observed |
| weighted_moment.test | 9 | 0.001465s | 0.001429s | 0.001414s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.100576s | 0.118287s | 0.102477s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.021956s | 0.027438s | 0.021978s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.021934s | 0.023599s | 0.021135s | byte equality observed |
| weighted_skewness.test | 5 | 0.002316s | 0.003580s | 0.002376s | byte equality observed |
| weighted_sum.test | 10 | 0.001459s | 0.001426s | 0.001373s | byte equality observed |
| weighted_sum_kahan.test | 3 | 0.005827s | 0.009505s | 0.005723s | byte equality observed |
| weighted_tail_mean.test | 1 | 0.018499s | 0.019284s | 0.018396s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.019457s | 0.023802s | 0.019050s | byte equality observed |
| weighted_tail_variate_means.test | 10 | 0.001514s | 0.001513s | 0.001489s | byte equality observed |
| weighted_variance.test | 10 | 0.001647s | 0.001748s | 0.001588s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/46032707836).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
