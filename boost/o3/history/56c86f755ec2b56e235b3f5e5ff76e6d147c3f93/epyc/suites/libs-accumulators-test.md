# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.982725 | 2.751480 | 3.555119 | 0.004154 | 0.003899 | 0.003746 |
| covariance.test | RUN | 1.894824 | 6.897466 | 9.177762 | 0.004002 | 0.003801 | 0.004052 |
| droppable.test | RUN | 1.203727 | 3.666143 | 4.646877 | 0.004222 | 0.003920 | 0.004289 |
| error_of.test | RUN | 1.348711 | 3.648918 | 5.334737 | 0.003823 | 0.003522 | 0.003816 |
| extended_p_square.test | RUN | 1.407363 | 4.615459 | 5.362724 | 0.005888 | 0.005970 | 0.005958 |
| extended_p_square_quantile.test | RUN | 1.798453 | 7.224251 | 7.493663 | 0.011341 | 0.011763 | 0.010917 |
| external_accumulator.test | RUN | 1.182752 | 3.412792 | 4.681486 | 0.003781 | 0.004397 | 0.003703 |
| external_weights.test | RUN | 1.031107 | 2.822111 | 3.701066 | 0.003521 | 0.003895 | 0.003966 |
| kurtosis.test | RUN | 1.557488 | 4.457429 | 6.315890 | 0.004896 | 0.005887 | 0.005566 |
| max.test | RUN | 0.961793 | 2.769204 | 3.595954 | 0.003937 | 0.003796 | 0.003794 |
| mean.test | RUN | 1.344162 | 3.680065 | 4.984015 | 0.004359 | 0.004060 | 0.003969 |
| median.test | RUN | 1.795956 | 7.317841 | 7.520578 | 0.146966 | 0.185735 | 0.144657 |
| min.test | RUN | 0.984204 | 2.630991 | 3.467200 | 0.003893 | 0.004209 | 0.004126 |
| moment.test | RUN | 1.106969 | 3.062617 | 4.186649 | 0.004098 | 0.003765 | 0.003371 |
| p_square_cumul_dist.test | RUN | 1.432971 | 5.271469 | 5.634152 | 1.046305 | 1.308353 | 1.074760 |
| p_square_quantile.test | RUN | 1.269321 | 4.577655 | 4.954989 | 0.034982 | 0.039854 | 0.032307 |
| reference.test | RUN | 1.076352 | 3.103135 | 4.107087 | 0.004039 | 0.003936 | 0.003406 |
| rolling_count.test | RUN | 1.125689 | 3.286815 | 4.128965 | 0.003952 | 0.003949 | 0.003477 |
| rolling_sum.test | RUN | 1.108106 | 3.384671 | 3.890563 | 0.004109 | 0.003958 | 0.003853 |
| rolling_mean.test | RUN | 1.601054 | 6.182759 | 6.890767 | 0.004102 | 0.004348 | 0.004383 |
| rolling_variance.test | RUN | 1.818673 | 6.931737 | 7.681502 | 0.004154 | 0.004078 | 0.004123 |
| rolling_moment.test | RUN | 1.436360 | 4.150398 | 5.178096 | 0.004233 | 0.004118 | 0.004087 |
| skewness.test | RUN | 1.488810 | 4.322867 | 5.855083 | 0.005605 | 0.005851 | 0.005656 |
| sum.test | RUN | 1.033628 | 2.922739 | 3.659153 | 0.003796 | 0.004224 | 0.004238 |
| sum_kahan.test | RUN | 1.100465 | 3.083838 | 3.951670 | 0.019355 | 0.031710 | 0.019795 |
| tail.test | RUN | 1.197324 | 4.409498 | 4.626043 | 0.004099 | 0.004073 | 0.003603 |
| tail_mean.test | RUN | 1.667107 | 5.046716 | 6.749770 | 0.024528 | 0.039079 | 0.027602 |
| tail_quantile.test | RUN | 1.379767 | 4.136488 | 5.202120 | 0.030867 | 0.035483 | 0.030436 |
| variance.test | RUN | 1.281381 | 3.701820 | 5.162698 | 0.003923 | 0.003782 | 0.004066 |
| vector.test | RUN | 1.408880 | 4.612111 | 5.988207 | 0.003513 | 0.003797 | 0.003423 |
| weighted_covariance.test | RUN | 1.885340 | 7.069174 | 9.218755 | 0.003496 | 0.003823 | 0.003632 |
| weighted_extended_p_square.test | RUN | 1.306739 | 4.050960 | 4.816252 | 0.030243 | 0.032011 | 0.025722 |
| weighted_kurtosis.test | RUN | 1.485556 | 4.084573 | 5.976910 | 0.005288 | 0.006988 | 0.005263 |
| weighted_mean.test | RUN | 1.274401 | 3.698021 | 5.127410 | 0.003486 | 0.003601 | 0.003707 |
| weighted_median.test | RUN | 1.598857 | 4.977680 | 6.683967 | 1.271521 | 1.395883 | 1.290624 |
| weighted_moment.test | RUN | 1.027626 | 2.854380 | 3.916829 | 0.003674 | 0.003813 | 0.003478 |
| weighted_p_square_cumul_dist.test | RUN | 1.247208 | 4.267722 | 4.820155 | 0.138648 | 0.163901 | 0.137503 |
| weighted_p_square_quantile.test | RUN | 1.190511 | 4.163629 | 4.107099 | 0.036721 | 0.040742 | 0.034814 |
| weighted_skewness.test | RUN | 1.389398 | 3.772502 | 5.610988 | 0.005160 | 0.006558 | 0.005227 |
| weighted_sum.test | RUN | 0.781389 | 2.296392 | 3.082786 | 0.003272 | 0.003715 | 0.003619 |
| weighted_sum_kahan.test | RUN | 0.940701 | 2.449170 | 3.301689 | 0.011599 | 0.017890 | 0.010944 |
| weighted_variance.test | RUN | 1.564830 | 4.589369 | 6.563573 | 0.004067 | 0.004386 | 0.004021 |
| valarray.test | RUN | 1.447508 | 4.425931 | 5.987704 | 0.003737 | 0.003791 | 0.003632 |
| tail_variate_means.test | RUN | 1.825269 | 6.947615 | 8.291669 | 0.003832 | 0.003922 | 0.003728 |
| pot_quantile.test | RUN | 2.242791 | 7.681677 | 10.071004 | 0.014066 | 0.015721 | 0.014387 |
| weighted_pot_quantile.test | RUN | 2.260389 | 7.557085 | 9.960709 | 0.032385 | 0.041601 | 0.033479 |
| weighted_tail_mean.test | RUN | 1.966181 | 5.943724 | 8.451713 | 0.024292 | 0.038735 | 0.024042 |
| weighted_tail_quantile.test | RUN | 1.961927 | 4.965759 | 7.656355 | 0.022423 | 0.029496 | 0.022849 |
| weighted_tail_variate_means.test | RUN | 2.199186 | 6.497866 | 8.667648 | 0.002719 | 0.002742 | 0.002464 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.198× | 1.198×, 1.197× | 1.001× |
| clang | 0.998× | 1.005×, 0.991× | 0.995× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1360 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44612055398).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.003075s | 0.002910s | 0.002780s | byte equality observed |
| covariance.test | 1 | 0.003138s | 0.002936s | 0.002826s | byte equality observed |
| droppable.test | 1 | 0.003053s | 0.002952s | 0.002825s | byte equality observed |
| error_of.test | 1 | 0.002841s | 0.002768s | 0.002720s | byte equality observed |
| extended_p_square.test | 4 | 0.004622s | 0.004718s | 0.004377s | byte equality observed |
| extended_p_square_quantile.test | 2 | 0.009668s | 0.010402s | 0.009121s | byte equality observed |
| external_accumulator.test | 5 | 0.002726s | 0.002646s | 0.002601s | byte equality observed |
| external_weights.test | 6 | 0.002590s | 0.002455s | 0.002437s | byte equality observed |
| kurtosis.test | 4 | 0.004070s | 0.004712s | 0.004015s | byte equality observed |
| max.test | 7 | 0.002649s | 0.002630s | 0.002567s | byte equality observed |
| mean.test | 6 | 0.002684s | 0.002618s | 0.002644s | byte equality observed |
| median.test | 1 | 0.142886s | 0.167990s | 0.141965s | byte equality observed |
| min.test | 7 | 0.002650s | 0.002573s | 0.002557s | byte equality observed |
| moment.test | 5 | 0.002592s | 0.002539s | 0.002548s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.897249s | 1.182007s | 0.906169s | byte equality observed |
| p_square_quantile.test | 1 | 0.034687s | 0.035245s | 0.031238s | byte equality observed |
| pot_quantile.test | 2 | 0.012445s | 0.013507s | 0.012081s | byte equality observed |
| reference.test | 6 | 0.002641s | 0.002580s | 0.002579s | byte equality observed |
| rolling_count.test | 7 | 0.002637s | 0.002506s | 0.002625s | byte equality observed |
| rolling_mean.test | 6 | 0.002745s | 0.002632s | 0.002662s | byte equality observed |
| rolling_moment.test | 7 | 0.002723s | 0.002632s | 0.002646s | byte equality observed |
| rolling_sum.test | 6 | 0.002649s | 0.002541s | 0.002597s | byte equality observed |
| rolling_variance.test | 4 | 0.002772s | 0.002706s | 0.002702s | byte equality observed |
| skewness.test | 4 | 0.003927s | 0.004715s | 0.003940s | byte equality observed |
| sum.test | 5 | 0.002583s | 0.002514s | 0.002466s | byte equality observed |
| sum_kahan.test | 1 | 0.018504s | 0.029766s | 0.018378s | byte equality observed |
| tail.test | 4 | 0.002650s | 0.002427s | 0.002469s | byte equality observed |
| tail_mean.test | 1 | 0.023940s | 0.030752s | 0.025107s | byte equality observed |
| tail_quantile.test | 1 | 0.028559s | 0.036674s | 0.027758s | byte equality observed |
| tail_variate_means.test | 6 | 0.002643s | 0.002452s | 0.002537s | byte equality observed |
| valarray.test | 4 | 0.002566s | 0.002423s | 0.002515s | byte equality observed |
| variance.test | 6 | 0.002659s | 0.002660s | 0.002669s | byte equality observed |
| vector.test | 7 | 0.002591s | 0.002506s | 0.002499s | byte equality observed |
| weighted_covariance.test | 7 | 0.002577s | 0.002429s | 0.002470s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.027008s | 0.030618s | 0.024451s | byte equality observed |
| weighted_kurtosis.test | 2 | 0.004143s | 0.005148s | 0.003940s | byte equality observed |
| weighted_mean.test | 5 | 0.002491s | 0.002382s | 0.002351s | byte equality observed |
| weighted_median.test | 1 | 1.140732s | 1.268117s | 1.141198s | byte equality observed |
| weighted_moment.test | 6 | 0.002426s | 0.002331s | 0.002305s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.140916s | 0.165442s | 0.140651s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.033926s | 0.039884s | 0.033067s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.030778s | 0.032753s | 0.029375s | byte equality observed |
| weighted_skewness.test | 4 | 0.004125s | 0.005239s | 0.004016s | byte equality observed |
| weighted_sum.test | 7 | 0.002429s | 0.002335s | 0.002341s | byte equality observed |
| weighted_sum_kahan.test | 2 | 0.010294s | 0.015845s | 0.010105s | byte equality observed |
| weighted_tail_mean.test | 1 | 0.024215s | 0.032371s | 0.024747s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.027134s | 0.036791s | 0.026700s | byte equality observed |
| weighted_tail_variate_means.test | 7 | 0.002544s | 0.002504s | 0.002478s | byte equality observed |
| weighted_variance.test | 6 | 0.002725s | 0.002811s | 0.002693s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44612055398).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
