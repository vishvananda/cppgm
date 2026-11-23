# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.555479 | 1.696343 | 1.846717 | 0.002311 | 0.002128 | 0.001980 |
| covariance.test | RUN | 1.095837 | 4.512353 | 4.761449 | 0.002236 | 0.001995 | 0.002108 |
| droppable.test | RUN | 0.699071 | 2.270540 | 2.591424 | 0.002277 | 0.001996 | 0.001943 |
| error_of.test | RUN | 0.754390 | 2.205157 | 2.676428 | 0.002003 | 0.002128 | 0.001786 |
| extended_p_square.test | RUN | 0.824464 | 2.911743 | 2.844131 | 0.003718 | 0.003557 | 0.003271 |
| extended_p_square_quantile.test | RUN | 1.081365 | 4.639688 | 4.017061 | 0.006802 | 0.007626 | 0.006892 |
| external_accumulator.test | RUN | 0.687251 | 2.172264 | 2.434747 | 0.002023 | 0.002204 | 0.002013 |
| external_weights.test | RUN | 0.606902 | 1.635127 | 2.003008 | 0.002091 | 0.001973 | 0.001841 |
| kurtosis.test | RUN | 0.897210 | 2.756064 | 3.262070 | 0.002733 | 0.003681 | 0.002802 |
| max.test | RUN | 0.573394 | 1.685246 | 1.814468 | 0.002465 | 0.002134 | 0.002025 |
| mean.test | RUN | 0.751067 | 2.367532 | 2.699464 | 0.002163 | 0.002207 | 0.002014 |
| median.test | RUN | 1.045417 | 4.759766 | 4.158530 | 0.101737 | 0.115762 | 0.104820 |
| min.test | RUN | 0.578424 | 1.678770 | 1.878342 | 0.002379 | 0.002185 | 0.001913 |
| moment.test | RUN | 0.661585 | 1.909174 | 2.164508 | 0.002004 | 0.002107 | 0.001923 |
| p_square_cumul_dist.test | RUN | 0.854381 | 3.350506 | 3.133297 | 0.728264 | 0.908512 | 0.704470 |
| p_square_quantile.test | RUN | 0.777728 | 2.950008 | 2.576418 | 0.021761 | 0.024005 | 0.020985 |
| reference.test | RUN | 0.620259 | 1.830856 | 2.176706 | 0.002023 | 0.002247 | 0.001920 |
| rolling_count.test | RUN | 0.672149 | 2.157727 | 2.151112 | 0.002157 | 0.002054 | 0.001711 |
| rolling_sum.test | RUN | 0.675796 | 2.119153 | 2.255878 | 0.002364 | 0.002181 | 0.001993 |
| rolling_mean.test | RUN | 0.946120 | 3.850396 | 3.717484 | 0.002265 | 0.002386 | 0.002179 |
| rolling_variance.test | RUN | 1.107685 | 4.553593 | 4.292834 | 0.002127 | 0.002350 | 0.002062 |
| rolling_moment.test | RUN | 0.809708 | 2.654991 | 2.799369 | 0.002224 | 0.002509 | 0.002057 |
| skewness.test | RUN | 0.880875 | 2.696430 | 3.083253 | 0.002899 | 0.003729 | 0.002886 |
| sum.test | RUN | 0.591371 | 1.817336 | 2.082556 | 0.002264 | 0.002299 | 0.001934 |
| sum_kahan.test | RUN | 0.658040 | 1.904328 | 2.133811 | 0.010853 | 0.019109 | 0.011229 |
| tail.test | RUN | 0.701118 | 2.671448 | 2.445983 | 0.002015 | 0.002223 | 0.002060 |
| tail_mean.test | RUN | 0.976801 | 3.144518 | 3.522177 | 0.018429 | 0.021436 | 0.019221 |
| tail_quantile.test | RUN | 0.795907 | 2.630715 | 2.764966 | 0.020622 | 0.025521 | 0.020984 |
| variance.test | RUN | 0.776795 | 2.267859 | 2.658842 | 0.002198 | 0.002094 | 0.001955 |
| vector.test | RUN | 0.825920 | 2.869125 | 3.234261 | 0.001909 | 0.002012 | 0.001925 |
| weighted_covariance.test | RUN | 1.118805 | 4.421936 | 4.909313 | 0.001902 | 0.002005 | 0.001802 |
| weighted_extended_p_square.test | RUN | 0.752150 | 2.604243 | 2.494579 | 0.017975 | 0.020576 | 0.016848 |
| weighted_kurtosis.test | RUN | 0.885815 | 2.569538 | 3.098656 | 0.002903 | 0.004232 | 0.002467 |
| weighted_mean.test | RUN | 0.751023 | 2.258988 | 2.632832 | 0.002258 | 0.002207 | 0.001794 |
| weighted_median.test | RUN | 0.969797 | 3.122698 | 3.424826 | 0.980934 | 1.055494 | 0.977643 |
| weighted_moment.test | RUN | 0.599256 | 1.703850 | 1.992421 | 0.001915 | 0.002053 | 0.001820 |
| weighted_p_square_cumul_dist.test | RUN | 0.751038 | 2.532664 | 2.459912 | 0.104064 | 0.143022 | 0.095383 |
| weighted_p_square_quantile.test | RUN | 0.707678 | 2.592868 | 2.250672 | 0.022143 | 0.025373 | 0.022274 |
| weighted_skewness.test | RUN | 0.842114 | 2.453572 | 2.632516 | 0.002695 | 0.004117 | 0.002638 |
| weighted_sum.test | RUN | 0.510981 | 1.469966 | 1.602843 | 0.002066 | 0.002040 | 0.002066 |
| weighted_sum_kahan.test | RUN | 0.471505 | 1.539129 | 1.670451 | 0.006027 | 0.010295 | 0.006510 |
| weighted_variance.test | RUN | 0.933762 | 2.832998 | 3.343255 | 0.002078 | 0.002212 | 0.002116 |
| valarray.test | RUN | 0.865851 | 2.680996 | 3.124093 | 0.002136 | 0.001960 | 0.001740 |
| tail_variate_means.test | RUN | 1.104480 | 4.362844 | 4.381130 | 0.002056 | 0.002143 | 0.001802 |
| pot_quantile.test | RUN | 1.332272 | 4.767328 | 5.191715 | 0.008893 | 0.010809 | 0.008549 |
| weighted_pot_quantile.test | RUN | 1.339859 | 4.642624 | 5.211104 | 0.022750 | 0.018838 | 0.021934 |
| weighted_tail_mean.test | RUN | 1.173482 | 3.661569 | 4.444350 | 0.020037 | 0.021590 | 0.018964 |
| weighted_tail_quantile.test | RUN | 1.160309 | 3.182474 | 3.944603 | 0.015782 | 0.018336 | 0.015376 |
| weighted_tail_variate_means.test | RUN | 1.275918 | 3.840648 | 4.531640 | 0.001505 | 0.001414 | 0.001361 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.167× | 1.160×, 1.173× | 0.998× |
| clang | 0.996× | 1.005×, 0.986× | 1.000× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1363 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45241427099).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.001961s | 0.001699s | 0.001821s | byte equality observed |
| covariance.test | 1 | 0.001942s | 0.001771s | 0.002002s | byte equality observed |
| droppable.test | 1 | 0.001856s | 0.001792s | 0.001733s | byte equality observed |
| error_of.test | 8 | 0.001565s | 0.001552s | 0.001505s | byte equality observed |
| extended_p_square.test | 4 | 0.002902s | 0.002946s | 0.002689s | byte equality observed |
| extended_p_square_quantile.test | 3 | 0.006080s | 0.006546s | 0.005657s | byte equality observed |
| external_accumulator.test | 8 | 0.001574s | 0.001544s | 0.001528s | byte equality observed |
| external_weights.test | 9 | 0.001508s | 0.001507s | 0.001454s | byte equality observed |
| kurtosis.test | 6 | 0.002270s | 0.003111s | 0.002251s | byte equality observed |
| max.test | 7 | 0.001608s | 0.001517s | 0.001516s | byte equality observed |
| mean.test | 9 | 0.001582s | 0.001565s | 0.001558s | byte equality observed |
| median.test | 1 | 0.100166s | 0.124800s | 0.095359s | byte equality observed |
| min.test | 9 | 0.001578s | 0.001515s | 0.001509s | byte equality observed |
| moment.test | 7 | 0.001569s | 0.001550s | 0.001522s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.634503s | 0.794501s | 0.626819s | byte equality observed |
| p_square_quantile.test | 1 | 0.021508s | 0.023567s | 0.020613s | byte equality observed |
| pot_quantile.test | 2 | 0.008407s | 0.009637s | 0.008179s | byte equality observed |
| reference.test | 8 | 0.001556s | 0.001497s | 0.001511s | byte equality observed |
| rolling_count.test | 10 | 0.001581s | 0.001551s | 0.001522s | byte equality observed |
| rolling_mean.test | 10 | 0.001662s | 0.001610s | 0.001589s | byte equality observed |
| rolling_moment.test | 10 | 0.001632s | 0.001579s | 0.001556s | byte equality observed |
| rolling_sum.test | 10 | 0.001590s | 0.001537s | 0.001541s | byte equality observed |
| rolling_variance.test | 9 | 0.001687s | 0.001588s | 0.001561s | byte equality observed |
| skewness.test | 6 | 0.002221s | 0.003046s | 0.002279s | byte equality observed |
| sum.test | 9 | 0.001566s | 0.001510s | 0.001492s | byte equality observed |
| sum_kahan.test | 2 | 0.010244s | 0.017507s | 0.010620s | byte equality observed |
| tail.test | 8 | 0.001569s | 0.001543s | 0.001484s | byte equality observed |
| tail_mean.test | 2 | 0.017688s | 0.019033s | 0.018049s | byte equality observed |
| tail_quantile.test | 1 | 0.020526s | 0.022895s | 0.019756s | byte equality observed |
| tail_variate_means.test | 9 | 0.001585s | 0.001476s | 0.001522s | byte equality observed |
| valarray.test | 10 | 0.001540s | 0.001490s | 0.001495s | byte equality observed |
| variance.test | 9 | 0.001580s | 0.001534s | 0.001592s | byte equality observed |
| vector.test | 10 | 0.001510s | 0.001497s | 0.001477s | byte equality observed |
| weighted_covariance.test | 9 | 0.001521s | 0.001498s | 0.001484s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.016547s | 0.018904s | 0.015659s | byte equality observed |
| weighted_kurtosis.test | 6 | 0.002337s | 0.003567s | 0.002387s | byte equality observed |
| weighted_mean.test | 10 | 0.001497s | 0.001460s | 0.001441s | byte equality observed |
| weighted_median.test | 1 | 0.857644s | 0.930165s | 0.862699s | byte equality observed |
| weighted_moment.test | 8 | 0.001481s | 0.001435s | 0.001426s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.101393s | 0.143662s | 0.102844s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.021717s | 0.026876s | 0.021881s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.021678s | 0.023493s | 0.020908s | byte equality observed |
| weighted_skewness.test | 6 | 0.002279s | 0.003569s | 0.002357s | byte equality observed |
| weighted_sum.test | 9 | 0.001459s | 0.001427s | 0.001420s | byte equality observed |
| weighted_sum_kahan.test | 3 | 0.005739s | 0.009296s | 0.005721s | byte equality observed |
| weighted_tail_mean.test | 2 | 0.018565s | 0.019405s | 0.018304s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.019330s | 0.021621s | 0.019066s | byte equality observed |
| weighted_tail_variate_means.test | 10 | 0.001526s | 0.001481s | 0.001459s | byte equality observed |
| weighted_variance.test | 10 | 0.001637s | 0.001793s | 0.001596s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45241427099).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
