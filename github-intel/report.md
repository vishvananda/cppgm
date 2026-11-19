# Public benchmarks: Intel (GitHub)

Measured compiler: [`6ddc5326a`](https://github.com/vishvananda/cppgm/commit/6ddc5326a8c4d8752e1d92ecedf5228df07a50e8) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44597827043) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: Intel(R) Xeon(R) 6975P-C.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.32× | 74 | 2.95× | 74 |
| Compile CPU, `-O0` | 3.25× | 74 | 3.18× | 74 |
| Compile CPU, `-O3` | 4.42× | 80 | 3.92× | 80 |
| Compile peak RSS, `-O0` | 1.46× | 81 | 2.22× | 81 |
| Compile peak RSS, `-O3` | 1.73× | 81 | 2.33× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.14× | 81 | 1.08× | 81 |
| Run CPU, `-O3` | 0.99× | 80 | 1.01× | 80 |
| Run instructions, `-O3` | 1.00× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.888 to 1.034; raw observations and block ratios are retained in the artifact.

## Slowest generated code, by run-time instructions

| Program | vs g++ |
| --- | ---: |
| bg/nbody/2 | 0.63× |
| bg/spectralnorm/1 | 0.75× |
| tramp3d-v4 | 0.78× |
| bg/nbody/1 | 0.82× |
| bg/mandelbrot/7 | 0.84× |
| bg/mandelbrot/9 | 0.84× |
| bg/nbody/3 | 0.86× |
| bg/mandelbrot/5 | 0.86× |
| bg/mandelbrot/2 | 0.86× |
| CoyoteBench/fftbench | 0.89× |

## Compile CPU times

Times are CPU seconds, excluding linking. Speed is reference time divided by cppgm time; higher is better. Every program is listed. Missing times show a dash. Ratios are omitted for failed programs or when either time is below 10 ms.

Compilation is measured once per compiler and level; the ABBA/BAAB repetitions apply to generated-program execution and self-built compiler speed.

### O0 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.061 | 0.246 | 4.03× | 0.171 | 2.80× | ok |
| Adobe-C++/loop_unroll | 0.047 | 0.554 | 11.79× | 0.168 | 3.57× | ok |
| Adobe-C++/simple_types_constant_folding | 0.051 | 0.641 | 12.57× | 0.201 | 3.94× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.044 | 0.464 | 10.55× | 0.225 | 5.11× | ok |
| Adobe-C++/stepanov_abstraction | 0.036 | 0.178 | 4.94× | 0.115 | 3.19× | ok |
| Adobe-C++/stepanov_vector | 0.070 | 0.260 | 3.71× | 0.188 | 2.69× | ok |
| Bullet | 4.198 | 16.390 | 3.90× | 16.127 | 3.84× | ok |
| CLAMR | 2.405 | 8.102 | 3.37× | 6.919 | 2.88× | ok |
| CoyoteBench/almabench | 0.026 | 0.073 | 2.81× | 0.076 | 2.92× | ok |
| CoyoteBench/fftbench | 0.096 | 0.239 | 2.49× | 0.343 | 3.57× | ok |
| CoyoteBench/huffbench | 0.028 | 0.063 | 2.25× | 0.072 | 2.57× | ok |
| CoyoteBench/lpbench | 0.028 | 0.068 | 2.43× | 0.085 | 3.04× | ok |
| DOE/HACCKernels | 0.111 | 0.286 | 2.58× | 0.309 | 2.78× | ok |
| DOE/HPCCG | 0.573 | 1.484 | 2.59× | 1.835 | 3.20× | ok |
| DOE/PENNANT | 1.287 | 4.267 | 3.32× | 3.889 | 3.02× | ok |
| DOE/miniFE | 0.574 | 1.867 | 3.25× | 2.218 | 3.86× | ok |
| Misc-C++-EH/spirit | 0.456 | 2.781 | 6.10× | 1.924 | 4.22× | ok |
| Misc-C++-Large/ray | 0.090 | 0.256 | 2.84× | 0.267 | 2.97× | ok |
| Misc-C++-Large/sphereflake | 0.076 | 0.219 | 2.88× | 0.234 | 3.08× | ok |
| Misc-C++/bigfib | 0.101 | 0.331 | 3.28× | 0.354 | 3.50× | ok |
| Misc-C++/oopack_v1p8 | 0.028 | 0.081 | 2.89× | 0.082 | 2.93× | ok |
| Misc-C++/stepanov_container | 0.147 | 0.478 | 3.25× | 0.433 | 2.95× | ok |
| Misc-C++/stepanov_v1p2 | 0.028 | 0.102 | 3.64× | 0.087 | 3.11× | ok |
| PAQ8p | 0.059 | 0.415 | 7.03× | 0.200 | 3.39× | ok |
| Prolangs-C++/life | 0.004 | 0.031 | — | 0.025 | — | ok |
| Prolangs-C++/ocean | 0.009 | 0.056 | — | 0.039 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.020 | — | 0.022 | — | ok |
| Shootout-C++-EH/except | 0.062 | 0.158 | 2.55× | 0.191 | 3.08× | ok |
| Shootout-C++/ackermann | 0.070 | 0.157 | 2.24× | 0.233 | 3.33× | ok |
| Shootout-C++/ary3 | 0.070 | 0.178 | 2.54× | 0.263 | 3.76× | ok |
| Shootout-C++/fibo | 0.064 | 0.155 | 2.42× | 0.222 | 3.47× | ok |
| Shootout-C++/hash | 0.099 | 0.295 | 2.98× | 0.342 | 3.45× | ok |
| Shootout-C++/hash2 | 0.094 | 0.257 | 2.73× | 0.283 | 3.01× | ok |
| Shootout-C++/heapsort | 0.075 | 0.187 | 2.49× | 0.221 | 2.95× | ok |
| Shootout-C++/lists | 0.076 | 0.188 | 2.47× | 0.220 | 2.89× | ok |
| Shootout-C++/lists1 | 0.079 | 0.221 | 2.80× | 0.247 | 3.13× | ok |
| Shootout-C++/matrix | 0.060 | 0.144 | 2.40× | 0.209 | 3.48× | ok |
| Shootout-C++/methcall | 0.061 | 0.144 | 2.36× | 0.187 | 3.07× | ok |
| Shootout-C++/moments | 0.083 | 0.235 | 2.83× | 0.236 | 2.84× | ok |
| Shootout-C++/random | 0.075 | 0.159 | 2.12× | 0.225 | 3.00× | ok |
| Shootout-C++/sieve | 0.080 | 0.266 | 3.33× | 0.277 | 3.46× | ok |
| SmallPT | 0.027 | 0.082 | 3.04× | 0.077 | 2.85× | ok |
| Stanford/Bubblesort | 0.008 | 0.024 | — | 0.027 | — | ok |
| Stanford/FloatMM | 0.008 | 0.025 | — | 0.029 | — | ok |
| Stanford/Puzzle | 0.009 | 0.032 | — | 0.029 | — | ok |
| Stanford/Treesort | 0.009 | 0.028 | — | 0.030 | — | ok |
| bg/binarytrees/2 | 0.062 | 0.154 | 2.48× | 0.195 | 3.15× | ok |
| bg/fannkuchredux/3 | 0.029 | 0.071 | 2.45× | 0.076 | 2.62× | ok |
| bg/fasta/1 | 0.051 | 0.114 | 2.24× | 0.125 | 2.45× | ok |
| bg/fasta/2 | 0.050 | 0.115 | 2.30× | 0.122 | 2.44× | ok |
| bg/fasta/3 | 0.075 | 0.167 | 2.23× | 0.211 | 2.81× | ok |
| bg/fasta/4 | 0.071 | 0.145 | 2.04× | 0.171 | 2.41× | ok |
| bg/fasta/6 | 0.121 | 0.374 | 3.09× | 0.358 | 2.96× | ok |
| bg/mandelbrot/0 | 0.141 | 0.410 | 2.91× | 0.406 | 2.88× | ok |
| bg/mandelbrot/2 | 0.092 | 0.192 | 2.09× | 0.248 | 2.70× | ok |
| bg/mandelbrot/3 | 0.087 | 0.185 | 2.13× | 0.249 | 2.86× | ok |
| bg/mandelbrot/5 | 0.042 | 0.106 | 2.52× | 0.143 | 3.40× | ok |
| bg/mandelbrot/7 | 0.044 | 0.114 | 2.59× | 0.126 | 2.86× | ok |
| bg/mandelbrot/9 | 0.037 | 0.125 | 3.38× | 0.109 | 2.95× | ok |
| bg/nbody/1 | 0.029 | 0.101 | 3.48× | 0.086 | 2.97× | ok |
| bg/nbody/2 | 0.025 | 0.067 | 2.68× | 0.071 | 2.84× | ok |
| bg/nbody/3 | 0.026 | 0.067 | 2.58× | 0.073 | 2.81× | ok |
| bg/nbody/6 | 0.027 | 0.096 | 3.56× | 0.099 | 3.67× | ok |
| bg/pidigits/4 | 0.114 | 0.287 | 2.52× | 0.348 | 3.05× | ok |
| bg/pidigits/5 | 0.073 | 0.162 | 2.22× | 0.212 | 2.90× | ok |
| bg/revcomp/1 | 0.085 | 0.200 | 2.35× | 0.251 | 2.95× | ok |
| bg/revcomp/5 | 0.074 | 0.189 | 2.55× | 0.204 | 2.76× | ok |
| bg/spectralnorm/1 | 0.112 | 0.253 | 2.26× | 0.358 | 3.20× | ok |
| box2d | 1.321 | 4.056 | 3.07× | 4.677 | 3.54× | ok |
| fmt | 0.452 | 2.400 | 5.31× | 1.922 | 4.25× | ok |
| hexxagon | 0.248 | 0.626 | 2.52× | 0.801 | 3.23× | ok |
| lambda | 0.050 | 0.296 | 5.92× | 0.223 | 4.46× | ok |
| minisat | 0.057 | 0.297 | 5.21× | 0.209 | 3.67× | ok |
| nlohmann-json | 0.363 | 1.901 | 5.24× | 1.732 | 4.77× | ok |
| pugixml | 0.255 | 1.327 | 5.20× | 0.999 | 3.92× | ok |
| pugixml-tests | 2.838 | 14.403 | 5.08× | 12.162 | 4.29× | ok |
| rapidjson | 0.111 | 0.466 | 4.20× | 0.385 | 3.47× | ok |
| re2 | 2.854 | 9.733 | 3.41× | 6.458 | 2.26× | ok |
| re2-test-re2 | 4.543 | 14.442 | 3.18× | 14.385 | 3.17× | ok |
| re2-test-search | 4.089 | 13.763 | 3.37× | 14.038 | 3.43× | ok |
| tramp3d-v4 | 0.697 | 8.319 | 11.94× | 2.501 | 3.59× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.118 | 0.801 | 6.79× | 0.486 | 4.12× | ok |
| Adobe-C++/loop_unroll | 0.433 | 5.115 | 11.81× | 4.055 | 9.36× | ok |
| Adobe-C++/simple_types_constant_folding | 0.240 | 2.794 | 11.64× | 2.217 | 9.24× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.207 | 2.133 | 10.30× | 1.793 | 8.66× | ok |
| Adobe-C++/stepanov_abstraction | 0.086 | 0.900 | 10.47× | 0.438 | 5.09× | ok |
| Adobe-C++/stepanov_vector | 0.102 | 1.375 | 13.48× | 0.596 | 5.84× | ok |
| Bullet | 6.111 | 36.314 | 5.94× | 28.278 | 4.63× | ok |
| CLAMR | 4.475 | 22.257 | 4.97× | 16.213 | 3.62× | ok |
| CoyoteBench/almabench | 0.031 | 0.152 | 4.90× | 0.108 | 3.48× | ok |
| CoyoteBench/fftbench | 0.125 | 0.373 | 2.98× | 0.447 | 3.58× | ok |
| CoyoteBench/huffbench | 0.034 | 0.188 | 5.53× | 0.139 | 4.09× | ok |
| CoyoteBench/lpbench | 0.035 | 0.185 | 5.29× | 0.199 | 5.69× | ok |
| DOE/HACCKernels | 0.113 | 0.403 | 3.57× | 0.360 | 3.19× | ok |
| DOE/HPCCG | 0.639 | 2.172 | 3.40× | 2.147 | 3.36× | ok |
| DOE/PENNANT | 1.694 | 6.588 | 3.89× | 5.645 | 3.33× | ok |
| DOE/miniFE | 0.824 | 4.023 | 4.88× | 3.579 | 4.34× | ok |
| Misc-C++-EH/spirit | 0.650 | 3.847 | 5.92× | 3.454 | 5.31× | ok |
| Misc-C++-Large/ray | 0.097 | 0.429 | 4.42× | 0.319 | 3.29× | ok |
| Misc-C++-Large/sphereflake | 0.095 | 0.678 | 7.14× | 0.359 | 3.78× | ok |
| Misc-C++/bigfib | 0.132 | 0.488 | 3.70× | 0.436 | 3.30× | ok |
| Misc-C++/oopack_v1p8 | 0.035 | 0.164 | 4.69× | 0.153 | 4.37× | ok |
| Misc-C++/stepanov_container | 0.193 | 0.885 | 4.59× | 0.783 | 4.06× | ok |
| Misc-C++/stepanov_v1p2 | 0.040 | 0.193 | 4.83× | 0.185 | 4.62× | ok |
| PAQ8p | 0.291 | 3.515 | 12.08× | 1.480 | 5.09× | ok |
| Prolangs-C++/life | 0.010 | 0.103 | 10.30× | 0.069 | 6.90× | ok |
| Prolangs-C++/ocean | 0.019 | 0.185 | 9.74× | 0.102 | 5.37× | ok |
| Prolangs-C++/primes | 0.007 | 0.032 | — | 0.037 | — | ok |
| Shootout-C++-EH/except | 0.065 | 0.169 | 2.60× | 0.203 | 3.12× | ok |
| Shootout-C++/ackermann | 0.070 | 0.200 | 2.86× | 0.239 | 3.41× | ok |
| Shootout-C++/ary3 | 0.086 | 0.215 | 2.50× | 0.244 | 2.84× | ok |
| Shootout-C++/fibo | 0.072 | 0.199 | 2.76× | 0.191 | 2.65× | ok |
| Shootout-C++/hash | 0.119 | 0.396 | 3.33× | 0.455 | 3.82× | ok |
| Shootout-C++/hash2 | 0.118 | 0.388 | 3.29× | 0.407 | 3.45× | ok |
| Shootout-C++/heapsort | 0.078 | 0.221 | 2.83× | 0.235 | 3.01× | ok |
| Shootout-C++/lists | 0.076 | 0.264 | 3.47× | 0.245 | 3.22× | ok |
| Shootout-C++/lists1 | 0.088 | 0.263 | 2.99× | 0.286 | 3.25× | ok |
| Shootout-C++/matrix | 0.069 | 0.191 | 2.77× | 0.270 | 3.91× | ok |
| Shootout-C++/methcall | 0.066 | 0.180 | 2.73× | 0.265 | 4.02× | ok |
| Shootout-C++/moments | 0.094 | 0.292 | 3.11× | 0.294 | 3.13× | ok |
| Shootout-C++/random | 0.080 | 0.188 | 2.35× | 0.236 | 2.95× | ok |
| Shootout-C++/sieve | 0.089 | 0.241 | 2.71× | 0.309 | 3.47× | ok |
| SmallPT | 0.037 | 0.275 | 7.43× | 0.151 | 4.08× | ok |
| Stanford/Bubblesort | 0.010 | 0.049 | 4.90× | 0.044 | 4.40× | ok |
| Stanford/FloatMM | 0.011 | 0.057 | 5.18× | 0.064 | 5.82× | ok |
| Stanford/Puzzle | 0.018 | 0.115 | 6.39× | 0.107 | 5.94× | ok |
| Stanford/Treesort | 0.014 | 0.082 | 5.86× | 0.053 | 3.79× | ok |
| bg/binarytrees/2 | 0.068 | 0.411 | 6.04× | 0.239 | 3.51× | ok |
| bg/fannkuchredux/3 | 0.035 | 0.120 | 3.43× | 0.106 | 3.03× | ok |
| bg/fasta/1 | 0.057 | 0.153 | 2.68× | 0.161 | 2.82× | ok |
| bg/fasta/2 | 0.063 | 0.152 | 2.41× | 0.170 | 2.70× | ok |
| bg/fasta/3 | 0.085 | 0.208 | 2.45× | 0.251 | 2.95× | ok |
| bg/fasta/4 | 0.079 | 0.177 | 2.24× | 0.207 | 2.62× | ok |
| bg/fasta/6 | 0.147 | 0.422 | 2.87× | 0.517 | 3.52× | ok |
| bg/mandelbrot/0 | 0.171 | 0.563 | 3.29× | 0.654 | 3.82× | ok |
| bg/mandelbrot/2 | 0.092 | 0.246 | 2.67× | 0.280 | 3.04× | ok |
| bg/mandelbrot/3 | 0.086 | 0.208 | 2.42× | 0.282 | 3.28× | ok |
| bg/mandelbrot/5 | 0.048 | 0.142 | 2.96× | 0.158 | 3.29× | ok |
| bg/mandelbrot/7 | 0.056 | 0.195 | 3.48× | 0.157 | 2.80× | ok |
| bg/mandelbrot/9 | 0.047 | 0.184 | 3.91× | 0.158 | 3.36× | ok |
| bg/nbody/1 | 0.042 | 0.162 | 3.86× | 0.162 | 3.86× | ok |
| bg/nbody/2 | 0.031 | 0.119 | 3.84× | 0.128 | 4.13× | ok |
| bg/nbody/3 | 0.029 | 0.120 | 4.14× | 0.105 | 3.62× | ok |
| bg/nbody/6 | 0.039 | 0.157 | 4.03× | 0.178 | 4.56× | ok |
| bg/pidigits/4 | 0.118 | 0.335 | 2.84× | 0.435 | 3.69× | ok |
| bg/pidigits/5 | 0.085 | 0.196 | 2.31× | 0.235 | 2.76× | ok |
| bg/revcomp/1 | 0.085 | 0.238 | 2.80× | 0.260 | 3.06× | ok |
| bg/revcomp/5 | 0.082 | 0.222 | 2.71× | 0.280 | 3.41× | ok |
| bg/spectralnorm/1 | 0.106 | 0.343 | 3.24× | 0.410 | 3.87× | ok |
| box2d | 1.625 | 7.455 | 4.59× | 4.756 | 2.93× | ok |
| fmt | 0.938 | 5.044 | 5.38× | 3.958 | 4.22× | ok |
| hexxagon | 0.277 | 1.054 | 3.81× | 1.056 | 3.81× | ok |
| lambda | 0.121 | 1.143 | 9.45× | 0.574 | 4.74× | ok |
| minisat | 0.139 | 1.001 | 7.20× | 0.629 | 4.53× | ok |
| nlohmann-json | 0.736 | 3.469 | 4.71× | 2.915 | 3.96× | ok |
| pugixml | 0.658 | 5.428 | 8.25× | 3.765 | 5.72× | ok |
| pugixml-tests | 4.556 | 33.280 | 7.30× | 23.347 | 5.12× | ok |
| rapidjson | 0.223 | 1.129 | 5.06× | 0.728 | 3.26× | ok |
| re2 | 2.881 | 17.786 | 6.17× | 9.709 | 3.37× | ok |
| re2-test-re2 | 5.426 | 26.235 | 4.84× | 21.158 | 3.90× | ok |
| re2-test-search | 5.220 | 23.207 | 4.45× | 19.892 | 3.81× | ok |
| tramp3d-v4 | 2.571 | 21.744 | 8.46× | 13.816 | 5.37× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.057 | 0.130 | 2.28× | 0.171 | 3.00× | ok |
| Adobe-C++/loop_unroll | 0.033 | 0.097 | 2.94× | 0.099 | 3.00× | ok |
| Adobe-C++/simple_types_constant_folding | 0.035 | 0.097 | 2.77× | 0.104 | 2.97× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.033 | 0.089 | 2.70× | 0.116 | 3.52× | ok |
| Adobe-C++/stepanov_abstraction | 0.030 | 0.074 | 2.47× | 0.086 | 2.87× | ok |
| Adobe-C++/stepanov_vector | 0.063 | 0.119 | 1.89× | 0.153 | 2.43× | ok |
| Bullet | 3.867 | 9.202 | 2.38× | 13.812 | 3.57× | ok |
| CLAMR | 2.061 | 4.383 | 2.13× | 6.375 | 3.09× | ok |
| CoyoteBench/almabench | 0.026 | 0.060 | 2.31× | 0.072 | 2.77× | ok |
| CoyoteBench/fftbench | 0.095 | 0.220 | 2.32× | 0.318 | 3.35× | ok |
| CoyoteBench/huffbench | 0.030 | 0.053 | 1.77× | 0.069 | 2.30× | ok |
| CoyoteBench/lpbench | 0.029 | 0.058 | 2.00× | 0.080 | 2.76× | ok |
| DOE/HACCKernels | 0.111 | 0.251 | 2.26× | 0.287 | 2.59× | ok |
| DOE/HPCCG | 0.554 | 1.281 | 2.31× | 1.705 | 3.08× | ok |
| DOE/PENNANT | 1.276 | 3.026 | 2.37× | 3.353 | 2.63× | ok |
| DOE/miniFE | 0.519 | 1.206 | 2.32× | 1.802 | 3.47× | ok |
| Misc-C++-EH/spirit | 0.257 | 0.921 | 3.58× | 1.290 | 5.02× | ok |
| Misc-C++-Large/ray | 0.088 | 0.227 | 2.58× | 0.244 | 2.77× | ok |
| Misc-C++-Large/sphereflake | 0.076 | 0.195 | 2.57× | 0.222 | 2.92× | ok |
| Misc-C++/bigfib | 0.093 | 0.219 | 2.35× | 0.282 | 3.03× | ok |
| Misc-C++/oopack_v1p8 | 0.027 | 0.055 | 2.04× | 0.079 | 2.93× | ok |
| Misc-C++/stepanov_container | 0.134 | 0.276 | 2.06× | 0.363 | 2.71× | ok |
| Misc-C++/stepanov_v1p2 | 0.026 | 0.054 | 2.08× | 0.073 | 2.81× | ok |
| PAQ8p | 0.039 | 0.107 | 2.74× | 0.115 | 2.95× | ok |
| Prolangs-C++/life | 0.003 | 0.010 | — | 0.021 | — | ok |
| Prolangs-C++/ocean | 0.007 | 0.019 | — | 0.027 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.014 | — | 0.021 | — | ok |
| Shootout-C++-EH/except | 0.062 | 0.162 | 2.61× | 0.181 | 2.92× | ok |
| Shootout-C++/ackermann | 0.068 | 0.161 | 2.37× | 0.225 | 3.31× | ok |
| Shootout-C++/ary3 | 0.068 | 0.161 | 2.37× | 0.246 | 3.62× | ok |
| Shootout-C++/fibo | 0.067 | 0.162 | 2.42× | 0.216 | 3.22× | ok |
| Shootout-C++/hash | 0.095 | 0.190 | 2.00× | 0.302 | 3.18× | ok |
| Shootout-C++/hash2 | 0.087 | 0.192 | 2.21× | 0.251 | 2.89× | ok |
| Shootout-C++/heapsort | 0.077 | 0.186 | 2.42× | 0.212 | 2.75× | ok |
| Shootout-C++/lists | 0.075 | 0.158 | 2.11× | 0.202 | 2.69× | ok |
| Shootout-C++/lists1 | 0.077 | 0.180 | 2.34× | 0.223 | 2.90× | ok |
| Shootout-C++/matrix | 0.061 | 0.143 | 2.34× | 0.202 | 3.31× | ok |
| Shootout-C++/methcall | 0.063 | 0.138 | 2.19× | 0.180 | 2.86× | ok |
| Shootout-C++/moments | 0.081 | 0.187 | 2.31× | 0.216 | 2.67× | ok |
| Shootout-C++/random | 0.077 | 0.160 | 2.08× | 0.217 | 2.82× | ok |
| Shootout-C++/sieve | 0.080 | 0.175 | 2.19× | 0.253 | 3.16× | ok |
| SmallPT | 0.025 | 0.054 | 2.16× | 0.070 | 2.80× | ok |
| Stanford/Bubblesort | 0.008 | 0.021 | — | 0.027 | — | ok |
| Stanford/FloatMM | 0.008 | 0.020 | — | 0.027 | — | ok |
| Stanford/Puzzle | 0.009 | 0.022 | — | 0.028 | — | ok |
| Stanford/Treesort | 0.009 | 0.022 | — | 0.030 | — | ok |
| bg/binarytrees/2 | 0.062 | 0.151 | 2.44× | 0.187 | 3.02× | ok |
| bg/fannkuchredux/3 | 0.029 | 0.062 | 2.14× | 0.073 | 2.52× | ok |
| bg/fasta/1 | 0.049 | 0.091 | 1.86× | 0.114 | 2.33× | ok |
| bg/fasta/2 | 0.049 | 0.091 | 1.86× | 0.113 | 2.31× | ok |
| bg/fasta/3 | 0.075 | 0.157 | 2.09× | 0.201 | 2.68× | ok |
| bg/fasta/4 | 0.068 | 0.141 | 2.07× | 0.166 | 2.44× | ok |
| bg/fasta/6 | 0.112 | 0.267 | 2.38× | 0.314 | 2.80× | ok |
| bg/mandelbrot/0 | 0.127 | 0.282 | 2.22× | 0.360 | 2.83× | ok |
| bg/mandelbrot/2 | 0.091 | 0.175 | 1.92× | 0.230 | 2.53× | ok |
| bg/mandelbrot/3 | 0.087 | 0.177 | 2.03× | 0.238 | 2.74× | ok |
| bg/mandelbrot/5 | 0.041 | 0.087 | 2.12× | 0.120 | 2.93× | ok |
| bg/mandelbrot/7 | 0.042 | 0.084 | 2.00× | 0.118 | 2.81× | ok |
| bg/mandelbrot/9 | 0.035 | 0.090 | 2.57× | 0.097 | 2.77× | ok |
| bg/nbody/1 | 0.028 | 0.059 | 2.11× | 0.073 | 2.61× | ok |
| bg/nbody/2 | 0.025 | 0.059 | 2.36× | 0.068 | 2.72× | ok |
| bg/nbody/3 | 0.026 | 0.055 | 2.12× | 0.070 | 2.69× | ok |
| bg/nbody/6 | 0.026 | 0.056 | 2.15× | 0.070 | 2.69× | ok |
| bg/pidigits/4 | 0.108 | 0.256 | 2.37× | 0.330 | 3.06× | ok |
| bg/pidigits/5 | 0.078 | 0.157 | 2.01× | 0.201 | 2.58× | ok |
| bg/revcomp/1 | 0.083 | 0.152 | 1.83× | 0.233 | 2.81× | ok |
| bg/revcomp/5 | 0.073 | 0.160 | 2.19× | 0.210 | 2.88× | ok |
| bg/spectralnorm/1 | 0.114 | 0.234 | 2.05× | 0.342 | 3.00× | ok |
| box2d | 1.305 | 2.674 | 2.05× | 3.422 | 2.62× | ok |
| fmt | 0.400 | 1.015 | 2.54× | 1.522 | 3.80× | ok |
| hexxagon | 0.246 | 0.571 | 2.32× | 0.776 | 3.15× | ok |
| lambda | 0.038 | 0.117 | 3.08× | 0.154 | 4.05× | ok |
| minisat | 0.048 | 0.126 | 2.62× | 0.155 | 3.23× | ok |
| nlohmann-json | 0.315 | 0.843 | 2.68× | 1.210 | 3.84× | ok |
| pugixml | 0.195 | 0.496 | 2.54× | 0.726 | 3.72× | ok |
| pugixml-tests | 2.420 | 7.093 | 2.93× | 9.154 | 3.78× | ok |
| rapidjson | 0.086 | 0.237 | 2.76× | 0.292 | 3.40× | ok |
| re2 | 2.704 | 6.455 | 2.39× | 5.477 | 2.03× | ok |
| re2-test-re2 | 4.128 | 9.441 | 2.29× | 12.248 | 2.97× | ok |
| re2-test-search | 3.661 | 9.033 | 2.47× | 12.019 | 3.28× | ok |
| tramp3d-v4 | 0.442 | 2.196 | 4.97× | 1.452 | 3.29× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
