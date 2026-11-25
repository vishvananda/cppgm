# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.554393 | 1.720716 | 1.849550 | 0.002176 | 0.002272 | 0.001998 |
| covariance.test | RUN | 1.092661 | 4.532420 | 4.791997 | 0.002069 | 0.002266 | 0.002235 |
| droppable.test | RUN | 0.705513 | 2.380252 | 2.509625 | 0.002176 | 0.002278 | 0.002014 |
| error_of.test | RUN | 0.758564 | 2.275938 | 2.791061 | 0.001951 | 0.002233 | 0.001895 |
| extended_p_square.test | RUN | 0.796268 | 3.002941 | 2.866164 | 0.003549 | 0.003945 | 0.003199 |
| extended_p_square_quantile.test | RUN | 1.059387 | 4.732767 | 4.050000 | 0.006662 | 0.007504 | 0.005856 |
| external_accumulator.test | RUN | 0.670306 | 2.254793 | 2.433879 | 0.002101 | 0.002297 | 0.001975 |
| external_weights.test | RUN | 0.592268 | 1.725653 | 1.948991 | 0.001848 | 0.002329 | 0.001840 |
| kurtosis.test | RUN | 0.881158 | 2.832987 | 3.221933 | 0.002830 | 0.003907 | 0.002848 |
| max.test | RUN | 0.575528 | 1.710591 | 1.910049 | 0.002236 | 0.002434 | 0.002049 |
| mean.test | RUN | 0.742338 | 2.408675 | 2.720260 | 0.002222 | 0.002222 | 0.001955 |
| median.test | RUN | 1.046846 | 4.842057 | 4.141522 | 0.102952 | 0.118265 | 0.099880 |
| min.test | RUN | 0.559077 | 1.680548 | 1.828353 | 0.002104 | 0.002245 | 0.002120 |
| moment.test | RUN | 0.649212 | 1.976249 | 2.151014 | 0.002067 | 0.002432 | 0.002077 |
| p_square_cumul_dist.test | RUN | 0.844094 | 3.403581 | 3.142885 | 0.726876 | 0.907869 | 0.703756 |
| p_square_quantile.test | RUN | 0.739611 | 3.028722 | 2.576038 | 0.022138 | 0.024305 | 0.021319 |
| reference.test | RUN | 0.642138 | 1.892987 | 2.161714 | 0.002380 | 0.002234 | 0.001898 |
| rolling_count.test | RUN | 0.667364 | 2.202424 | 2.120350 | 0.002087 | 0.002299 | 0.002044 |
| rolling_sum.test | RUN | 0.636503 | 2.213750 | 2.275385 | 0.002101 | 0.002452 | 0.002117 |
| rolling_mean.test | RUN | 0.991703 | 3.935715 | 3.680457 | 0.002160 | 0.002554 | 0.002110 |
| rolling_variance.test | RUN | 1.119286 | 4.586510 | 4.173293 | 0.002125 | 0.002360 | 0.002064 |
| rolling_moment.test | RUN | 0.807993 | 2.653279 | 2.757006 | 0.002235 | 0.002423 | 0.002054 |
| skewness.test | RUN | 0.861677 | 2.709151 | 3.033441 | 0.002018 | 0.003862 | 0.002854 |
| sum.test | RUN | 0.593607 | 1.875480 | 1.978660 | 0.002210 | 0.002254 | 0.002125 |
| sum_kahan.test | RUN | 0.640598 | 1.973291 | 2.123721 | 0.011182 | 0.019039 | 0.011158 |
| tail.test | RUN | 0.703844 | 2.797589 | 2.385643 | 0.001825 | 0.002237 | 0.001875 |
| tail_mean.test | RUN | 0.959320 | 3.191680 | 3.481822 | 0.018668 | 0.021484 | 0.019375 |
| tail_quantile.test | RUN | 0.807174 | 2.635824 | 2.718720 | 0.021465 | 0.026558 | 0.019762 |
| variance.test | RUN | 0.768418 | 2.336904 | 2.697380 | 0.001932 | 0.002286 | 0.001997 |
| vector.test | RUN | 0.841284 | 2.887746 | 3.243023 | 0.001885 | 0.002363 | 0.002024 |
| weighted_covariance.test | RUN | 1.093661 | 4.473407 | 4.856497 | 0.002089 | 0.002332 | 0.001979 |
| weighted_extended_p_square.test | RUN | 0.753103 | 2.614251 | 2.491210 | 0.018079 | 0.021046 | 0.017187 |
| weighted_kurtosis.test | RUN | 0.881391 | 2.605620 | 3.075765 | 0.002742 | 0.004346 | 0.002991 |
| weighted_mean.test | RUN | 0.743920 | 2.306432 | 2.619786 | 0.001855 | 0.002051 | 0.001953 |
| weighted_median.test | RUN | 0.975704 | 3.167946 | 3.429662 | 0.972692 | 1.047755 | 0.974204 |
| weighted_moment.test | RUN | 0.615306 | 1.721985 | 2.036645 | 0.002006 | 0.002269 | 0.001977 |
| weighted_p_square_cumul_dist.test | RUN | 0.747484 | 2.559677 | 2.496892 | 0.097561 | 0.116873 | 0.098251 |
| weighted_p_square_quantile.test | RUN | 0.702006 | 2.632584 | 2.039915 | 0.022518 | 0.025689 | 0.021594 |
| weighted_skewness.test | RUN | 0.744718 | 2.465778 | 2.914057 | 0.003051 | 0.004278 | 0.002776 |
| weighted_sum.test | RUN | 0.506230 | 1.465129 | 1.587875 | 0.001641 | 0.002183 | 0.001810 |
| weighted_sum_kahan.test | RUN | 0.545996 | 1.559487 | 1.703050 | 0.006574 | 0.010640 | 0.006367 |
| weighted_variance.test | RUN | 0.898332 | 2.835447 | 3.348678 | 0.002394 | 0.002510 | 0.002131 |
| valarray.test | RUN | 0.863717 | 2.739903 | 3.137028 | 0.001889 | 0.002113 | 0.001904 |
| tail_variate_means.test | RUN | 1.117113 | 4.413248 | 4.430449 | 0.001970 | 0.002403 | 0.002055 |
| pot_quantile.test | RUN | 1.338868 | 4.885367 | 5.156237 | 0.008921 | 0.010984 | 0.007052 |
| weighted_pot_quantile.test | RUN | 1.339056 | 4.645016 | 5.135921 | 0.016689 | 0.018951 | 0.021727 |
| weighted_tail_mean.test | RUN | 1.165917 | 3.816278 | 4.447364 | 0.019708 | 0.022429 | 0.019150 |
| weighted_tail_quantile.test | RUN | 1.167388 | 3.324202 | 3.997861 | 0.015817 | 0.018242 | 0.015360 |
| weighted_tail_variate_means.test | RUN | 1.286973 | 4.107340 | 4.500049 | 0.001517 | 0.001517 | 0.001407 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.167× | 1.155×, 1.178× | 0.989× |
| clang | 0.992× | 0.988×, 0.997× | 0.998× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45651777895).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.001907s | 0.001714s | 0.001936s | byte equality observed |
| covariance.test | 1 | 0.002043s | 0.001986s | 0.001967s | byte equality observed |
| droppable.test | 1 | 0.001891s | 0.001927s | 0.001791s | byte equality observed |
| error_of.test | 1 | 0.001867s | 0.001809s | 0.001692s | byte equality observed |
| extended_p_square.test | 5 | 0.002839s | 0.003003s | 0.002716s | byte equality observed |
| extended_p_square_quantile.test | 3 | 0.005927s | 0.006544s | 0.005757s | byte equality observed |
| external_accumulator.test | 9 | 0.001577s | 0.001528s | 0.001525s | byte equality observed |
| external_weights.test | 6 | 0.001525s | 0.001491s | 0.001450s | byte equality observed |
| kurtosis.test | 6 | 0.002290s | 0.003028s | 0.002295s | byte equality observed |
| max.test | 10 | 0.001561s | 0.001533s | 0.001525s | byte equality observed |
| mean.test | 7 | 0.001591s | 0.001549s | 0.001579s | byte equality observed |
| median.test | 1 | 0.102407s | 0.113542s | 0.097523s | byte equality observed |
| min.test | 5 | 0.001568s | 0.001516s | 0.001539s | byte equality observed |
| moment.test | 6 | 0.001555s | 0.001521s | 0.001509s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.637379s | 0.804851s | 0.629314s | byte equality observed |
| p_square_quantile.test | 1 | 0.021604s | 0.023863s | 0.020696s | byte equality observed |
| pot_quantile.test | 2 | 0.008396s | 0.009508s | 0.008265s | byte equality observed |
| reference.test | 10 | 0.001539s | 0.001504s | 0.001503s | byte equality observed |
| rolling_count.test | 10 | 0.001559s | 0.001520s | 0.001558s | byte equality observed |
| rolling_mean.test | 10 | 0.001653s | 0.001605s | 0.001600s | byte equality observed |
| rolling_moment.test | 10 | 0.001590s | 0.001559s | 0.001569s | byte equality observed |
| rolling_sum.test | 10 | 0.001553s | 0.001514s | 0.001539s | byte equality observed |
| rolling_variance.test | 10 | 0.001658s | 0.001602s | 0.001592s | byte equality observed |
| skewness.test | 4 | 0.002216s | 0.003052s | 0.002290s | byte equality observed |
| sum.test | 9 | 0.001548s | 0.001487s | 0.001508s | byte equality observed |
| sum_kahan.test | 2 | 0.010144s | 0.017570s | 0.010489s | byte equality observed |
| tail.test | 9 | 0.001536s | 0.001484s | 0.001506s | byte equality observed |
| tail_mean.test | 2 | 0.017486s | 0.017977s | 0.018386s | byte equality observed |
| tail_quantile.test | 1 | 0.020369s | 0.022336s | 0.019849s | byte equality observed |
| tail_variate_means.test | 9 | 0.001577s | 0.001529s | 0.001535s | byte equality observed |
| valarray.test | 8 | 0.001515s | 0.001485s | 0.001453s | byte equality observed |
| variance.test | 8 | 0.001611s | 0.001517s | 0.001552s | byte equality observed |
| vector.test | 8 | 0.001539s | 0.001478s | 0.001479s | byte equality observed |
| weighted_covariance.test | 10 | 0.001520s | 0.001468s | 0.001459s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.016855s | 0.019969s | 0.016543s | byte equality observed |
| weighted_kurtosis.test | 6 | 0.002334s | 0.003577s | 0.002223s | byte equality observed |
| weighted_mean.test | 10 | 0.001490s | 0.001433s | 0.001435s | byte equality observed |
| weighted_median.test | 1 | 0.861271s | 0.932754s | 0.864748s | byte equality observed |
| weighted_moment.test | 7 | 0.001476s | 0.001450s | 0.001454s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.102055s | 0.130968s | 0.101704s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.021703s | 0.026959s | 0.021966s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.021614s | 0.023301s | 0.021170s | byte equality observed |
| weighted_skewness.test | 6 | 0.002258s | 0.003517s | 0.002395s | byte equality observed |
| weighted_sum.test | 10 | 0.001453s | 0.001397s | 0.001422s | byte equality observed |
| weighted_sum_kahan.test | 3 | 0.005766s | 0.009302s | 0.005715s | byte equality observed |
| weighted_tail_mean.test | 2 | 0.018601s | 0.019699s | 0.018874s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.019148s | 0.022684s | 0.019744s | byte equality observed |
| weighted_tail_variate_means.test | 10 | 0.001498s | 0.001468s | 0.001497s | byte equality observed |
| weighted_variance.test | 10 | 0.001637s | 0.001784s | 0.001611s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45651777895).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
