# libs/accumulators/test

All original oracles passed for all three compilers. Seconds are child CPU, one clean campaign per compiler. Test execution includes startup and GDB; small timings need repeats.

| Test | Kind | Compile cppgm | GCC | Clang | Test cppgm | GCC | Clang |
|---|---|---:|---:|---:|---:|---:|---:|
| count.test | RUN | 0.549149 | 1.733091 | 1.839099 | 0.002317 | 0.002208 | 0.002192 |
| covariance.test | RUN | 1.102149 | 4.637618 | 4.737800 | 0.002078 | 0.002390 | 0.002179 |
| droppable.test | RUN | 0.701525 | 2.349077 | 2.579185 | 0.002274 | 0.002200 | 0.001794 |
| error_of.test | RUN | 0.765274 | 2.288009 | 2.673826 | 0.001938 | 0.002206 | 0.001843 |
| extended_p_square.test | RUN | 0.812110 | 2.973774 | 2.833352 | 0.003484 | 0.004041 | 0.003206 |
| extended_p_square_quantile.test | RUN | 1.042927 | 4.750012 | 4.035301 | 0.006685 | 0.007677 | 0.006332 |
| external_accumulator.test | RUN | 0.715049 | 2.294182 | 2.468594 | 0.002147 | 0.002399 | 0.001934 |
| external_weights.test | RUN | 0.592678 | 1.758672 | 1.948137 | 0.002147 | 0.002354 | 0.001765 |
| kurtosis.test | RUN | 0.891501 | 2.673767 | 3.313018 | 0.002970 | 0.004012 | 0.002801 |
| max.test | RUN | 0.567202 | 1.698362 | 1.821058 | 0.002381 | 0.002185 | 0.002018 |
| mean.test | RUN | 0.745041 | 2.439368 | 2.704210 | 0.002221 | 0.002539 | 0.002133 |
| median.test | RUN | 1.054839 | 4.860759 | 4.161749 | 0.103942 | 0.118057 | 0.105782 |
| min.test | RUN | 0.567334 | 1.689127 | 1.827043 | 0.002085 | 0.002400 | 0.002047 |
| moment.test | RUN | 0.644128 | 1.943458 | 2.183693 | 0.001990 | 0.002224 | 0.001949 |
| p_square_cumul_dist.test | RUN | 0.848844 | 3.417009 | 3.153358 | 0.732392 | 0.902514 | 0.703893 |
| p_square_quantile.test | RUN | 0.729184 | 3.038563 | 2.575768 | 0.021687 | 0.024334 | 0.021519 |
| reference.test | RUN | 0.634891 | 1.925115 | 2.071930 | 0.002087 | 0.002331 | 0.001766 |
| rolling_count.test | RUN | 0.671706 | 2.011472 | 2.277216 | 0.002064 | 0.002188 | 0.001957 |
| rolling_sum.test | RUN | 0.662489 | 2.200245 | 2.297108 | 0.002189 | 0.002366 | 0.001963 |
| rolling_mean.test | RUN | 0.941813 | 4.001330 | 3.728056 | 0.002188 | 0.002620 | 0.002155 |
| rolling_variance.test | RUN | 1.106079 | 4.614410 | 4.230052 | 0.002242 | 0.002565 | 0.002007 |
| rolling_moment.test | RUN | 0.811823 | 2.691985 | 2.816506 | 0.002112 | 0.002430 | 0.002290 |
| skewness.test | RUN | 0.867049 | 2.708078 | 3.022037 | 0.002905 | 0.003941 | 0.002973 |
| sum.test | RUN | 0.593147 | 1.872063 | 2.023159 | 0.002256 | 0.002604 | 0.002003 |
| sum_kahan.test | RUN | 0.638491 | 1.984229 | 2.125265 | 0.010586 | 0.018949 | 0.011033 |
| tail.test | RUN | 0.710956 | 2.818874 | 2.397843 | 0.001919 | 0.002472 | 0.001924 |
| tail_mean.test | RUN | 0.992741 | 3.239495 | 3.523696 | 0.018584 | 0.021318 | 0.017866 |
| tail_quantile.test | RUN | 0.805324 | 2.641254 | 2.743588 | 0.021496 | 0.025628 | 0.020723 |
| variance.test | RUN | 0.771175 | 2.389888 | 2.691960 | 0.002203 | 0.002180 | 0.002024 |
| vector.test | RUN | 0.840680 | 2.945245 | 3.199280 | 0.002016 | 0.002181 | 0.001828 |
| weighted_covariance.test | RUN | 1.116559 | 4.598184 | 4.865844 | 0.001919 | 0.002170 | 0.001839 |
| weighted_extended_p_square.test | RUN | 0.763503 | 2.664426 | 2.521222 | 0.017840 | 0.022174 | 0.017289 |
| weighted_kurtosis.test | RUN | 0.893635 | 2.659577 | 3.059330 | 0.002950 | 0.004428 | 0.002912 |
| weighted_mean.test | RUN | 0.755010 | 2.381332 | 2.681474 | 0.002044 | 0.002258 | 0.001949 |
| weighted_median.test | RUN | 0.969297 | 3.211835 | 3.531074 | 0.972254 | 1.062952 | 0.974239 |
| weighted_moment.test | RUN | 0.609567 | 1.741965 | 2.025545 | 0.002158 | 0.002033 | 0.002087 |
| weighted_p_square_cumul_dist.test | RUN | 0.745491 | 2.711622 | 2.468227 | 0.098805 | 0.119739 | 0.097359 |
| weighted_p_square_quantile.test | RUN | 0.697132 | 2.654793 | 2.106951 | 0.022483 | 0.028032 | 0.021431 |
| weighted_skewness.test | RUN | 0.834886 | 2.327035 | 2.926074 | 0.002806 | 0.004566 | 0.002676 |
| weighted_sum.test | RUN | 0.448935 | 1.498185 | 1.547414 | 0.001853 | 0.002312 | 0.001896 |
| weighted_sum_kahan.test | RUN | 0.546940 | 1.608366 | 1.695654 | 0.006546 | 0.010964 | 0.006411 |
| weighted_variance.test | RUN | 0.878528 | 2.957847 | 3.381494 | 0.002398 | 0.002858 | 0.002133 |
| valarray.test | RUN | 0.867214 | 2.804963 | 3.102021 | 0.001978 | 0.002229 | 0.001917 |
| tail_variate_means.test | RUN | 1.128674 | 4.518572 | 4.379627 | 0.002002 | 0.002470 | 0.001896 |
| pot_quantile.test | RUN | 1.314527 | 4.968260 | 5.171647 | 0.008704 | 0.011225 | 0.008497 |
| weighted_pot_quantile.test | RUN | 1.334076 | 4.766927 | 5.233400 | 0.022814 | 0.019299 | 0.021859 |
| weighted_tail_mean.test | RUN | 1.161800 | 3.867124 | 4.412223 | 0.019622 | 0.022810 | 0.019447 |
| weighted_tail_quantile.test | RUN | 1.142960 | 3.307423 | 3.908851 | 0.015812 | 0.018328 | 0.015265 |
| weighted_tail_variate_means.test | RUN | 1.289977 | 4.180379 | 4.604694 | 0.001572 | 0.001518 | 0.001349 |

## Native runtime replay

Child CPU of successful native tests, with process startup included; GDB and expected-failure executions are correctness-only. Two warmups per compiler, four A/A observations per reference and mirrored ABBA/BAAB blocks. Short tests repeat up to ten times, identically across compilers; CPU is divided by repetitions before summing tests. Executable hashes and output checks stay outside process timers. All runs must pass their original native oracle. Output hashes record equality or variation across the complete campaign; test reports may print times or addresses.

| Reference | CPU speedup ↑ | Paired blocks | A/A speedup |
|---|---:|---|---:|
| gcc | 1.153× | 1.146×, 1.159× | 1.009× |
| clang | 0.996× | 0.991×, 1.001× | 1.012× |

† A/A drift or paired-block spread exceeds 5%; small differences are unresolved. 1375 native tests in the full cohort; 1364 have byte-identical output throughout. [Raw replay evidence in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45739944580).

| Test | Repeats | CPU cppgm | GCC | Clang | Output check |
|---|---:|---:|---:|---:|---|
| count.test | 1 | 0.001905s | 0.001854s | 0.001917s | byte equality observed |
| covariance.test | 1 | 0.002019s | 0.001979s | 0.001966s | byte equality observed |
| droppable.test | 1 | 0.001819s | 0.001818s | 0.001763s | byte equality observed |
| error_of.test | 1 | 0.001788s | 0.001689s | 0.001762s | byte equality observed |
| extended_p_square.test | 5 | 0.002850s | 0.002925s | 0.002668s | byte equality observed |
| extended_p_square_quantile.test | 3 | 0.006030s | 0.006417s | 0.005602s | byte equality observed |
| external_accumulator.test | 5 | 0.001592s | 0.001546s | 0.001546s | byte equality observed |
| external_weights.test | 8 | 0.001520s | 0.001469s | 0.001454s | byte equality observed |
| kurtosis.test | 5 | 0.002244s | 0.003023s | 0.002311s | byte equality observed |
| max.test | 7 | 0.001559s | 0.001534s | 0.001526s | byte equality observed |
| mean.test | 9 | 0.001576s | 0.001533s | 0.001535s | byte equality observed |
| median.test | 1 | 0.101978s | 0.112656s | 0.100404s | byte equality observed |
| min.test | 9 | 0.001543s | 0.001521s | 0.001502s | byte equality observed |
| moment.test | 9 | 0.001539s | 0.001506s | 0.001476s | byte equality observed |
| p_square_cumul_dist.test | 1 | 0.645664s | 0.798876s | 0.634227s | byte equality observed |
| p_square_quantile.test | 1 | 0.021631s | 0.023861s | 0.020715s | byte equality observed |
| pot_quantile.test | 2 | 0.008373s | 0.009412s | 0.008176s | byte equality observed |
| reference.test | 10 | 0.001529s | 0.001490s | 0.001468s | byte equality observed |
| rolling_count.test | 10 | 0.001543s | 0.001518s | 0.001508s | byte equality observed |
| rolling_mean.test | 10 | 0.001636s | 0.001577s | 0.001568s | byte equality observed |
| rolling_moment.test | 10 | 0.001618s | 0.001537s | 0.001547s | byte equality observed |
| rolling_sum.test | 10 | 0.001570s | 0.001530s | 0.001526s | byte equality observed |
| rolling_variance.test | 10 | 0.001645s | 0.001582s | 0.001583s | byte equality observed |
| skewness.test | 6 | 0.002274s | 0.003060s | 0.002314s | byte equality observed |
| sum.test | 10 | 0.001522s | 0.001471s | 0.001487s | byte equality observed |
| sum_kahan.test | 2 | 0.010488s | 0.017425s | 0.010533s | byte equality observed |
| tail.test | 9 | 0.001530s | 0.001436s | 0.001461s | byte equality observed |
| tail_mean.test | 2 | 0.017664s | 0.017444s | 0.018125s | byte equality observed |
| tail_quantile.test | 1 | 0.020377s | 0.023328s | 0.019554s | byte equality observed |
| tail_variate_means.test | 10 | 0.001580s | 0.001471s | 0.001503s | byte equality observed |
| valarray.test | 10 | 0.001499s | 0.001437s | 0.001442s | byte equality observed |
| variance.test | 10 | 0.001564s | 0.001471s | 0.001478s | byte equality observed |
| vector.test | 10 | 0.001488s | 0.001480s | 0.001469s | byte equality observed |
| weighted_covariance.test | 10 | 0.001485s | 0.001449s | 0.001466s | byte equality observed |
| weighted_extended_p_square.test | 1 | 0.017920s | 0.021072s | 0.016764s | byte equality observed |
| weighted_kurtosis.test | 6 | 0.002330s | 0.003520s | 0.002309s | byte equality observed |
| weighted_mean.test | 10 | 0.001461s | 0.001431s | 0.001414s | byte equality observed |
| weighted_median.test | 1 | 0.857136s | 0.924586s | 0.862506s | byte equality observed |
| weighted_moment.test | 10 | 0.001448s | 0.001428s | 0.001383s | byte equality observed |
| weighted_p_square_cumul_dist.test | 1 | 0.100983s | 0.131014s | 0.100011s | byte equality observed |
| weighted_p_square_quantile.test | 1 | 0.021636s | 0.027005s | 0.021553s | byte equality observed |
| weighted_pot_quantile.test | 1 | 0.021539s | 0.023235s | 0.020712s | byte equality observed |
| weighted_skewness.test | 6 | 0.002220s | 0.003515s | 0.002308s | byte equality observed |
| weighted_sum.test | 10 | 0.001430s | 0.001403s | 0.001382s | byte equality observed |
| weighted_sum_kahan.test | 3 | 0.005745s | 0.009331s | 0.005670s | byte equality observed |
| weighted_tail_mean.test | 2 | 0.018583s | 0.019355s | 0.018544s | byte equality observed |
| weighted_tail_quantile.test | 1 | 0.019904s | 0.022402s | 0.019220s | byte equality observed |
| weighted_tail_variate_means.test | 10 | 0.001505s | 0.001441s | 0.001435s | byte equality observed |
| weighted_variance.test | 10 | 0.001605s | 0.001762s | 0.001550s | byte equality observed |

[Raw outcomes, commands and timing observations in CI artifacts](https://github.com/vishvananda/cppgm/actions/runs/45739944580).

[Comparison records](../results.json) · [Host and toolchains](../metadata.json)
