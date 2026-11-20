# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.807714 | 2.382466 | 2.581723 | 0.003215 | 0.003037 | 0.002838 |
| covariance.test | RUN | 1.526631 | 6.077187 | 6.617367 | 0.003020 | 0.003048 | 0.003002 |
| droppable.test | RUN | 0.985590 | 3.258513 | 3.579363 | 0.003226 | 0.003190 | 0.002345 |
| error_of.test | RUN | 1.083119 | 3.206243 | 3.760167 | 0.002889 | 0.002915 | 0.002679 |
| extended_p_square.test | RUN | 1.149921 | 4.069018 | 4.017473 | 0.004833 | 0.005181 | 0.004588 |
| extended_p_square_quantile.test | RUN | 1.495025 | 6.136969 | 5.681646 | 0.008949 | 0.011015 | 0.008690 |
| external_accumulator.test | RUN | 0.958611 | 3.056009 | 3.440108 | 0.003018 | 0.003006 | 0.003006 |
| external_weights.test | RUN | 0.835181 | 2.408324 | 2.728407 | 0.002790 | 0.002930 | 0.002558 |
| kurtosis.test | RUN | 1.267226 | 3.993520 | 4.494143 | 0.004080 | 0.005146 | 0.004064 |
| max.test | RUN | 0.809751 | 2.346004 | 2.643214 | 0.003207 | 0.003064 | 0.002878 |
| mean.test | RUN | 1.080279 | 3.340775 | 3.754300 | 0.002873 | 0.002923 | 0.002780 |
| median.test | RUN | 1.471762 | 6.486340 | 5.655231 | 0.139004 | 0.161371 | 0.134628 |
| min.test | RUN | 0.818361 | 2.381710 | 2.554874 | 0.002800 | 0.003194 | 0.002868 |
| moment.test | RUN | 0.922463 | 2.697611 | 3.077026 | 0.002968 | 0.003119 | 0.002853 |
| p_square_cumul_dist.test | RUN | 1.229187 | 4.675157 | 4.276711 | 0.970281 | 1.181946 | 0.969653 |
| p_square_quantile.test | RUN | 1.081378 | 4.124316 | 3.610723 | 0.031490 | 0.033867 | 0.028547 |
| reference.test | RUN | 0.906818 | 2.652002 | 3.008760 | 0.003304 | 0.003217 | 0.002025 |
| rolling_count.test | RUN | 0.943425 | 3.015406 | 3.111131 | 0.002860 | 0.002978 | 0.002801 |
| rolling_sum.test | RUN | 0.945925 | 2.911251 | 2.971924 | 0.003152 | 0.003114 | 0.002918 |
| rolling_mean.test | RUN | 1.366083 | 5.431514 | 5.160636 | 0.003138 | 0.003289 | 0.003008 |
| rolling_variance.test | RUN | 1.558425 | 6.170077 | 5.849151 | 0.003233 | 0.003243 | 0.003111 |
| rolling_moment.test | RUN | 1.170703 | 3.707923 | 3.906269 | 0.003100 | 0.002998 | 0.003080 |
| skewness.test | RUN | 1.207512 | 3.725430 | 4.248694 | 0.004066 | 0.004980 | 0.004080 |
| sum.test | RUN | 0.831960 | 2.558081 | 2.851891 | 0.002981 | 0.003171 | 0.002852 |
| sum_kahan.test | RUN | 0.929212 | 2.731643 | 2.976432 | 0.013637 | 0.023946 | 0.014375 |
| tail.test | RUN | 0.983925 | 3.785587 | 3.398004 | 0.002964 | 0.003002 | 0.002825 |
| tail_mean.test | RUN | 1.359564 | 4.340027 | 4.897793 | 0.024942 | 0.026167 | 0.025722 |
| tail_quantile.test | RUN | 1.116164 | 3.683458 | 3.840072 | 0.028722 | 0.032559 | 0.027955 |
| variance.test | RUN | 1.053839 | 3.308764 | 3.770552 | 0.003187 | 0.003041 | 0.003071 |
| vector.test | RUN | 1.142461 | 3.944054 | 4.559937 | 0.002684 | 0.003011 | 0.002912 |
| weighted_covariance.test | RUN | 1.561952 | 6.068126 | 6.786243 | 0.002676 | 0.002710 | 0.002799 |
| weighted_extended_p_square.test | RUN | 1.092789 | 3.624017 | 3.474905 | 0.024552 | 0.029336 | 0.023529 |
| weighted_kurtosis.test | RUN | 1.240488 | 3.667315 | 4.295550 | 0.003906 | 0.005810 | 0.004113 |
| weighted_mean.test | RUN | 1.053767 | 3.242659 | 3.744578 | 0.002880 | 0.002979 | 0.002720 |
| weighted_median.test | RUN | 1.381547 | 4.387063 | 4.841306 | 1.311096 | 1.397271 | 1.319551 |
| weighted_moment.test | RUN | 0.865678 | 2.393457 | 2.778248 | 0.002835 | 0.002871 | 0.002739 |
| weighted_p_square_cumul_dist.test | RUN | 1.073549 | 3.805579 | 3.405928 | 0.131512 | 0.166117 | 0.128005 |
| weighted_p_square_quantile.test | RUN | 1.000880 | 3.543582 | 3.181551 | 0.030635 | 0.035003 | 0.030156 |
| weighted_skewness.test | RUN | 1.175297 | 3.443499 | 3.730917 | 0.003940 | 0.005644 | 0.003710 |
| weighted_sum.test | RUN | 0.647721 | 2.045103 | 2.209333 | 0.002634 | 0.002744 | 0.002656 |
| weighted_sum_kahan.test | RUN | 0.778245 | 2.163712 | 2.358516 | 0.008597 | 0.013383 | 0.008365 |
| weighted_variance.test | RUN | 1.256837 | 3.984853 | 4.663940 | 0.003253 | 0.003409 | 0.003013 |
| valarray.test | RUN | 1.197489 | 3.836123 | 4.367110 | 0.003079 | 0.002937 | 0.002745 |
| tail_variate_means.test | RUN | 1.539956 | 5.934534 | 6.026646 | 0.002724 | 0.002980 | 0.002692 |
| pot_quantile.test | RUN | 1.891967 | 6.617035 | 7.154138 | 0.012172 | 0.014456 | 0.011938 |
| weighted_pot_quantile.test | RUN | 1.871988 | 6.427675 | 7.180723 | 0.029997 | 0.025068 | 0.030074 |
| weighted_tail_mean.test | RUN | 1.642687 | 5.186325 | 6.028640 | 0.025776 | 0.029521 | 0.026444 |
| weighted_tail_quantile.test | RUN | 1.632652 | 4.537543 | 5.479554 | 0.020207 | 0.023695 | 0.020708 |
| weighted_tail_variate_means.test | RUN | 1.763018 | 5.550059 | 6.130028 | 0.002039 | 0.002034 | 0.002036 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.163× | 1.155×, 1.172× | 0.999× |
| clang | 0.990× | 0.990×, 0.989× | 1.002× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1361 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44667760294).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.002352s | 0.002348s | 0.002455s | byte equality observed |
| covariance.test | 1 | 0.002476s | 0.002354s | 0.002435s | byte equality observed |
| droppable.test | 1 | 0.002557s | 0.002442s | 0.002432s | byte equality observed |
| error_of.test | 1 | 0.002528s | 0.002435s | 0.002381s | byte equality observed |
| extended_p_square.test | 3 | 0.003813s | 0.004053s | 0.003747s | byte equality observed |
| extended_p_square_quantile.test | 2 | 0.007901s | 0.008395s | 0.007314s | byte equality observed |
| external_accumulator.test | 5 | 0.002186s | 0.002128s | 0.002098s | byte equality observed |
| external_weights.test | 7 | 0.002117s | 0.002056s | 0.002008s | byte equality observed |
| kurtosis.test | 4 | 0.003170s | 0.004107s | 0.003250s | byte equality observed |
| max.test | 7 | 0.002177s | 0.002077s | 0.002077s | byte equality observed |
| mean.test | 6 | 0.002201s | 0.002102s | 0.002143s | byte equality observed |
| median.test | 1 | 0.131461s | 0.164274s | 0.128681s | byte equality observed |
| min.test | 6 | 0.002158s | 0.002050s | 0.002060s | byte equality observed |
| moment.test | 5 | 0.002158s | 0.002087s | 0.002113s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.810831s | 1.020922s | 0.800807s | byte equality observed |
| p_square_quantile.test | 1 | 0.030898s | 0.032383s | 0.028808s | byte equality observed |
| pot_quantile.test | 2 | 0.011387s | 0.012777s | 0.011249s | byte equality observed |
| reference.test | 8 | 0.002157s | 0.002116s | 0.002129s | byte equality observed |
| rolling_count.test | 8 | 0.002201s | 0.002113s | 0.002132s | byte equality observed |
| rolling_mean.test | 8 | 0.002300s | 0.002155s | 0.002236s | byte equality observed |
| rolling_moment.test | 8 | 0.002246s | 0.002093s | 0.002195s | byte equality observed |
| rolling_sum.test | 8 | 0.002160s | 0.002108s | 0.002127s | byte equality observed |
| rolling_variance.test | 6 | 0.002337s | 0.002184s | 0.002227s | byte equality observed |
| skewness.test | 4 | 0.003160s | 0.004034s | 0.003165s | byte equality observed |
| sum.test | 7 | 0.002154s | 0.002052s | 0.002072s | byte equality observed |
| sum_kahan.test | 1 | 0.013709s | 0.022535s | 0.013173s | byte equality observed |
| tail.test | 8 | 0.002168s | 0.002087s | 0.002067s | byte equality observed |
| tail_mean.test | 1 | 0.023684s | 0.023927s | 0.025567s | byte equality observed |
| tail_quantile.test | 1 | 0.027370s | 0.030688s | 0.027733s | byte equality observed |
| tail_variate_means.test | 8 | 0.002106s | 0.002054s | 0.002042s | byte equality observed |
| valarray.test | 8 | 0.002090s | 0.002055s | 0.002028s | byte equality observed |
| variance.test | 8 | 0.002196s | 0.002088s | 0.002094s | byte equality observed |
| vector.test | 8 | 0.002084s | 0.002021s | 0.002011s | byte equality observed |
| weighted_covariance.test | 9 | 0.002088s | 0.001976s | 0.002034s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.022597s | 0.026814s | 0.021063s | byte equality observed |
| weighted_kurtosis.test | 4 | 0.003285s | 0.004842s | 0.003312s | byte equality observed |
| weighted_mean.test | 8 | 0.002060s | 0.002017s | 0.001976s | byte equality observed |
| weighted_median.test | 1 | 1.135120s | 1.229434s | 1.139175s | byte equality observed |
| weighted_moment.test | 7 | 0.002035s | 0.001984s | 0.001962s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.133236s | 0.184769s | 0.133464s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.029634s | 0.036583s | 0.028486s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.028798s | 0.031189s | 0.027359s | byte equality observed |
| weighted_skewness.test | 4 | 0.003223s | 0.004903s | 0.003283s | byte equality observed |
| weighted_sum.test | 9 | 0.002011s | 0.001985s | 0.001909s | byte equality observed |
| weighted_sum_kahan.test | 2 | 0.007513s | 0.012161s | 0.007490s | byte equality observed |
| weighted_tail_mean.test | 1 | 0.024092s | 0.025210s | 0.024061s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.025866s | 0.028349s | 0.025809s | byte equality observed |
| weighted_tail_variate_means.test | 6 | 0.002093s | 0.002083s | 0.002017s | byte equality observed |
| weighted_variance.test | 4 | 0.002245s | 0.002406s | 0.002286s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/44667760294).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
