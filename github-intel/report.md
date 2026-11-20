# Public benchmarks: Intel (GitHub)

Measured compiler: [`f4ee6ed21`](https://github.com/vishvananda/cppgm/commit/f4ee6ed21703be4d5350c45f5d8ed33dc706c992) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44667760294) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: Intel(R) Xeon(R) 6975P-C.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.29× | 74 | 2.92× | 74 |
| Compile CPU, `-O0` | 3.23× | 75 | 3.17× | 75 |
| Compile CPU, `-O3` | 4.35× | 79 | 3.86× | 79 |
| Compile peak RSS, `-O0` | 1.45× | 81 | 2.21× | 81 |
| Compile peak RSS, `-O3` | 1.71× | 81 | 2.31× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.13× | 81 | 1.09× | 81 |
| Run CPU, `-O3` | 0.99× | 80 | 1.01× | 80 |
| Run instructions, `-O3` | 1.00× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.912 to 1.011; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.065 | 0.255 | 3.92× | 0.218 | 3.35× | ok |
| Adobe-C++/loop_unroll | 0.050 | 0.562 | 11.24× | 0.172 | 3.44× | ok |
| Adobe-C++/simple_types_constant_folding | 0.051 | 0.665 | 13.04× | 0.209 | 4.10× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.045 | 0.482 | 10.71× | 0.231 | 5.13× | ok |
| Adobe-C++/stepanov_abstraction | 0.038 | 0.173 | 4.55× | 0.110 | 2.89× | ok |
| Adobe-C++/stepanov_vector | 0.064 | 0.307 | 4.80× | 0.196 | 3.06× | ok |
| Bullet | 5.108 | 17.141 | 3.36× | 17.465 | 3.42× | ok |
| CLAMR | 2.567 | 8.400 | 3.27× | 7.700 | 3.00× | ok |
| CoyoteBench/almabench | 0.027 | 0.067 | 2.48× | 0.078 | 2.89× | ok |
| CoyoteBench/fftbench | 0.102 | 0.252 | 2.47× | 0.312 | 3.06× | ok |
| CoyoteBench/huffbench | 0.027 | 0.065 | 2.41× | 0.087 | 3.22× | ok |
| CoyoteBench/lpbench | 0.030 | 0.072 | 2.40× | 0.087 | 2.90× | ok |
| DOE/HACCKernels | 0.104 | 0.293 | 2.82× | 0.319 | 3.07× | ok |
| DOE/HPCCG | 0.704 | 1.590 | 2.26× | 2.230 | 3.17× | ok |
| DOE/PENNANT | 1.370 | 3.989 | 2.91× | 3.923 | 2.86× | ok |
| DOE/miniFE | 0.577 | 2.150 | 3.73× | 1.868 | 3.24× | ok |
| Misc-C++-EH/spirit | 0.441 | 2.310 | 5.24× | 1.925 | 4.37× | ok |
| Misc-C++-Large/ray | 0.096 | 0.292 | 3.04× | 0.276 | 2.88× | ok |
| Misc-C++-Large/sphereflake | 0.082 | 0.202 | 2.46× | 0.258 | 3.15× | ok |
| Misc-C++/bigfib | 0.109 | 0.338 | 3.10× | 0.335 | 3.07× | ok |
| Misc-C++/oopack_v1p8 | 0.028 | 0.085 | 3.04× | 0.088 | 3.14× | ok |
| Misc-C++/stepanov_container | 0.142 | 0.573 | 4.04× | 0.445 | 3.13× | ok |
| Misc-C++/stepanov_v1p2 | 0.030 | 0.123 | 4.10× | 0.088 | 2.93× | ok |
| PAQ8p | 0.061 | 0.420 | 6.89× | 0.205 | 3.36× | ok |
| Prolangs-C++/life | 0.004 | 0.029 | — | 0.025 | — | ok |
| Prolangs-C++/ocean | 0.010 | 0.065 | 6.50× | 0.047 | 4.70× | ok |
| Prolangs-C++/primes | 0.005 | 0.022 | — | 0.026 | — | ok |
| Shootout-C++-EH/except | 0.063 | 0.147 | 2.33× | 0.198 | 3.14× | ok |
| Shootout-C++/ackermann | 0.069 | 0.164 | 2.38× | 0.201 | 2.91× | ok |
| Shootout-C++/ary3 | 0.084 | 0.183 | 2.18× | 0.236 | 2.81× | ok |
| Shootout-C++/fibo | 0.066 | 0.145 | 2.20× | 0.202 | 3.06× | ok |
| Shootout-C++/hash | 0.109 | 0.279 | 2.56× | 0.329 | 3.02× | ok |
| Shootout-C++/hash2 | 0.094 | 0.272 | 2.89× | 0.285 | 3.03× | ok |
| Shootout-C++/heapsort | 0.094 | 0.183 | 1.95× | 0.244 | 2.60× | ok |
| Shootout-C++/lists | 0.073 | 0.192 | 2.63× | 0.269 | 3.68× | ok |
| Shootout-C++/lists1 | 0.081 | 0.211 | 2.60× | 0.240 | 2.96× | ok |
| Shootout-C++/matrix | 0.061 | 0.142 | 2.33× | 0.195 | 3.20× | ok |
| Shootout-C++/methcall | 0.067 | 0.152 | 2.27× | 0.191 | 2.85× | ok |
| Shootout-C++/moments | 0.090 | 0.243 | 2.70× | 0.252 | 2.80× | ok |
| Shootout-C++/random | 0.080 | 0.170 | 2.12× | 0.234 | 2.92× | ok |
| Shootout-C++/sieve | 0.082 | 0.224 | 2.73× | 0.252 | 3.07× | ok |
| SmallPT | 0.025 | 0.077 | 3.08× | 0.085 | 3.40× | ok |
| Stanford/Bubblesort | 0.008 | 0.025 | — | 0.030 | — | ok |
| Stanford/FloatMM | 0.008 | 0.026 | — | 0.030 | — | ok |
| Stanford/Puzzle | 0.009 | 0.035 | — | 0.033 | — | ok |
| Stanford/Treesort | 0.009 | 0.030 | — | 0.032 | — | ok |
| bg/binarytrees/2 | 0.068 | 0.153 | 2.25× | 0.204 | 3.00× | ok |
| bg/fannkuchredux/3 | 0.030 | 0.069 | 2.30× | 0.078 | 2.60× | ok |
| bg/fasta/1 | 0.051 | 0.118 | 2.31× | 0.130 | 2.55× | ok |
| bg/fasta/2 | 0.047 | 0.119 | 2.53× | 0.122 | 2.60× | ok |
| bg/fasta/3 | 0.073 | 0.184 | 2.52× | 0.227 | 3.11× | ok |
| bg/fasta/4 | 0.069 | 0.159 | 2.30× | 0.165 | 2.39× | ok |
| bg/fasta/6 | 0.127 | 0.338 | 2.66× | 0.400 | 3.15× | ok |
| bg/mandelbrot/0 | 0.144 | 0.411 | 2.85× | 0.450 | 3.13× | ok |
| bg/mandelbrot/2 | 0.086 | 0.208 | 2.42× | 0.259 | 3.01× | ok |
| bg/mandelbrot/3 | 0.088 | 0.194 | 2.20× | 0.252 | 2.86× | ok |
| bg/mandelbrot/5 | 0.047 | 0.113 | 2.40× | 0.119 | 2.53× | ok |
| bg/mandelbrot/7 | 0.041 | 0.123 | 3.00× | 0.129 | 3.15× | ok |
| bg/mandelbrot/9 | 0.040 | 0.102 | 2.55× | 0.119 | 2.97× | ok |
| bg/nbody/1 | 0.028 | 0.096 | 3.43× | 0.089 | 3.18× | ok |
| bg/nbody/2 | 0.024 | 0.068 | 2.83× | 0.073 | 3.04× | ok |
| bg/nbody/3 | 0.025 | 0.067 | 2.68× | 0.072 | 2.88× | ok |
| bg/nbody/6 | 0.028 | 0.107 | 3.82× | 0.088 | 3.14× | ok |
| bg/pidigits/4 | 0.110 | 0.289 | 2.63× | 0.425 | 3.86× | ok |
| bg/pidigits/5 | 0.072 | 0.160 | 2.22× | 0.251 | 3.49× | ok |
| bg/revcomp/1 | 0.080 | 0.232 | 2.90× | 0.245 | 3.06× | ok |
| bg/revcomp/5 | 0.075 | 0.213 | 2.84× | 0.209 | 2.79× | ok |
| bg/spectralnorm/1 | 0.116 | 0.245 | 2.11× | 0.291 | 2.51× | ok |
| box2d | 1.464 | 4.040 | 2.76× | 4.307 | 2.94× | ok |
| fmt | 0.529 | 2.405 | 4.55× | 2.013 | 3.81× | ok |
| hexxagon | 0.218 | 0.646 | 2.96× | 0.725 | 3.33× | ok |
| lambda | 0.044 | 0.282 | 6.41× | 0.188 | 4.27× | ok |
| minisat | 0.053 | 0.260 | 4.91× | 0.218 | 4.11× | ok |
| nlohmann-json | 0.378 | 1.894 | 5.01× | 1.721 | 4.55× | ok |
| pugixml | 0.250 | 1.344 | 5.38× | 0.935 | 3.74× | ok |
| pugixml-tests | 3.503 | 14.420 | 4.12× | 12.176 | 3.48× | ok |
| rapidjson | 0.114 | 0.458 | 4.02× | 0.397 | 3.48× | ok |
| re2 | 2.832 | 10.335 | 3.65× | 6.706 | 2.37× | ok |
| re2-test-re2 | 4.502 | 15.392 | 3.42× | 14.837 | 3.30× | ok |
| re2-test-search | 4.491 | 13.950 | 3.11× | 14.928 | 3.32× | ok |
| tramp3d-v4 | 0.713 | 6.867 | 9.63× | 2.604 | 3.65× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.108 | 0.813 | 7.53× | 0.487 | 4.51× | ok |
| Adobe-C++/loop_unroll | 0.438 | 5.320 | 12.15× | 4.076 | 9.31× | ok |
| Adobe-C++/simple_types_constant_folding | 0.250 | 2.954 | 11.82× | 2.489 | 9.96× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.216 | 2.172 | 10.06× | 1.781 | 8.25× | ok |
| Adobe-C++/stepanov_abstraction | 0.093 | 1.110 | 11.94× | 0.445 | 4.78× | ok |
| Adobe-C++/stepanov_vector | 0.110 | 1.431 | 13.01× | 0.519 | 4.72× | ok |
| Bullet | 5.940 | 38.716 | 6.52× | 26.007 | 4.38× | ok |
| CLAMR | 4.639 | 23.137 | 4.99× | 19.165 | 4.13× | ok |
| CoyoteBench/almabench | 0.032 | 0.151 | 4.72× | 0.113 | 3.53× | ok |
| CoyoteBench/fftbench | 0.124 | 0.412 | 3.32× | 0.416 | 3.35× | ok |
| CoyoteBench/huffbench | 0.038 | 0.192 | 5.05× | 0.121 | 3.18× | ok |
| CoyoteBench/lpbench | 0.038 | 0.188 | 4.95× | 0.207 | 5.45× | ok |
| DOE/HACCKernels | 0.114 | 0.368 | 3.23× | 0.453 | 3.97× | ok |
| DOE/HPCCG | 0.711 | 2.520 | 3.54× | 2.442 | 3.43× | ok |
| DOE/PENNANT | 1.704 | 6.026 | 3.54× | 5.711 | 3.35× | ok |
| DOE/miniFE | 0.804 | 3.907 | 4.86× | 3.187 | 3.96× | ok |
| Misc-C++-EH/spirit | 0.688 | 3.861 | 5.61× | 3.570 | 5.19× | ok |
| Misc-C++-Large/ray | 0.104 | 0.442 | 4.25× | 0.333 | 3.20× | ok |
| Misc-C++-Large/sphereflake | 0.112 | 0.714 | 6.38× | 0.370 | 3.30× | ok |
| Misc-C++/bigfib | 0.137 | 0.498 | 3.64× | 0.457 | 3.34× | ok |
| Misc-C++/oopack_v1p8 | 0.034 | 0.169 | 4.97× | 0.187 | 5.50× | ok |
| Misc-C++/stepanov_container | 0.197 | 0.877 | 4.45× | 0.793 | 4.03× | ok |
| Misc-C++/stepanov_v1p2 | 0.038 | 0.214 | 5.63× | 0.176 | 4.63× | ok |
| PAQ8p | 0.296 | 3.603 | 12.17× | 1.514 | 5.11× | ok |
| Prolangs-C++/life | 0.009 | 0.094 | — | 0.062 | — | ok |
| Prolangs-C++/ocean | 0.021 | 0.200 | 9.52× | 0.124 | 5.90× | ok |
| Prolangs-C++/primes | 0.008 | 0.036 | — | 0.038 | — | ok |
| Shootout-C++-EH/except | 0.066 | 0.176 | 2.67× | 0.210 | 3.18× | ok |
| Shootout-C++/ackermann | 0.075 | 0.206 | 2.75× | 0.213 | 2.84× | ok |
| Shootout-C++/ary3 | 0.083 | 0.231 | 2.78× | 0.251 | 3.02× | ok |
| Shootout-C++/fibo | 0.069 | 0.189 | 2.74× | 0.210 | 3.04× | ok |
| Shootout-C++/hash | 0.128 | 0.373 | 2.91× | 0.420 | 3.28× | ok |
| Shootout-C++/hash2 | 0.117 | 0.404 | 3.45× | 0.412 | 3.52× | ok |
| Shootout-C++/heapsort | 0.085 | 0.220 | 2.59× | 0.256 | 3.01× | ok |
| Shootout-C++/lists | 0.082 | 0.249 | 3.04× | 0.258 | 3.15× | ok |
| Shootout-C++/lists1 | 0.089 | 0.252 | 2.83× | 0.280 | 3.15× | ok |
| Shootout-C++/matrix | 0.071 | 0.195 | 2.75× | 0.284 | 4.00× | ok |
| Shootout-C++/methcall | 0.065 | 0.186 | 2.86× | 0.208 | 3.20× | ok |
| Shootout-C++/moments | 0.101 | 0.300 | 2.97× | 0.312 | 3.09× | ok |
| Shootout-C++/random | 0.084 | 0.198 | 2.36× | 0.246 | 2.93× | ok |
| Shootout-C++/sieve | 0.089 | 0.243 | 2.73× | 0.280 | 3.15× | ok |
| SmallPT | 0.039 | 0.289 | 7.41× | 0.157 | 4.03× | ok |
| Stanford/Bubblesort | 0.011 | 0.051 | 4.64× | 0.046 | 4.18× | ok |
| Stanford/FloatMM | 0.012 | 0.059 | 4.92× | 0.066 | 5.50× | ok |
| Stanford/Puzzle | 0.019 | 0.123 | 6.47× | 0.111 | 5.84× | ok |
| Stanford/Treesort | 0.014 | 0.082 | 5.86× | 0.053 | 3.79× | ok |
| bg/binarytrees/2 | 0.072 | 0.409 | 5.68× | 0.216 | 3.00× | ok |
| bg/fannkuchredux/3 | 0.035 | 0.114 | 3.26× | 0.108 | 3.09× | ok |
| bg/fasta/1 | 0.059 | 0.153 | 2.59× | 0.168 | 2.85× | ok |
| bg/fasta/2 | 0.054 | 0.153 | 2.83× | 0.200 | 3.70× | ok |
| bg/fasta/3 | 0.079 | 0.226 | 2.86× | 0.282 | 3.57× | ok |
| bg/fasta/4 | 0.085 | 0.180 | 2.12× | 0.211 | 2.48× | ok |
| bg/fasta/6 | 0.135 | 0.456 | 3.38× | 0.491 | 3.64× | ok |
| bg/mandelbrot/0 | 0.174 | 0.629 | 3.61× | 0.664 | 3.82× | ok |
| bg/mandelbrot/2 | 0.093 | 0.258 | 2.77× | 0.315 | 3.39× | ok |
| bg/mandelbrot/3 | 0.093 | 0.212 | 2.28× | 0.283 | 3.04× | ok |
| bg/mandelbrot/5 | 0.048 | 0.141 | 2.94× | 0.153 | 3.19× | ok |
| bg/mandelbrot/7 | 0.061 | 0.197 | 3.23× | 0.171 | 2.80× | ok |
| bg/mandelbrot/9 | 0.048 | 0.165 | 3.44× | 0.159 | 3.31× | ok |
| bg/nbody/1 | 0.043 | 0.148 | 3.44× | 0.169 | 3.93× | ok |
| bg/nbody/2 | 0.032 | 0.130 | 4.06× | 0.109 | 3.41× | ok |
| bg/nbody/3 | 0.030 | 0.108 | 3.60× | 0.122 | 4.07× | ok |
| bg/nbody/6 | 0.040 | 0.162 | 4.05× | 0.192 | 4.80× | ok |
| bg/pidigits/4 | 0.115 | 0.329 | 2.86× | 0.383 | 3.33× | ok |
| bg/pidigits/5 | 0.075 | 0.217 | 2.89× | 0.252 | 3.36× | ok |
| bg/revcomp/1 | 0.086 | 0.255 | 2.97× | 0.283 | 3.29× | ok |
| bg/revcomp/5 | 0.085 | 0.236 | 2.78× | 0.291 | 3.42× | ok |
| bg/spectralnorm/1 | 0.127 | 0.354 | 2.79× | 0.342 | 2.69× | ok |
| box2d | 1.743 | 7.461 | 4.28× | 5.696 | 3.27× | ok |
| fmt | 0.997 | 5.442 | 5.46× | 4.057 | 4.07× | ok |
| hexxagon | 0.261 | 0.983 | 3.77× | 1.089 | 4.17× | ok |
| lambda | 0.110 | 1.014 | 9.22× | 0.503 | 4.57× | ok |
| minisat | 0.141 | 0.957 | 6.79× | 0.644 | 4.57× | ok |
| nlohmann-json | 0.744 | 3.472 | 4.67× | 2.980 | 4.01× | ok |
| pugixml | 0.661 | 5.764 | 8.72× | 3.774 | 5.71× | ok |
| pugixml-tests | 4.613 | 34.559 | 7.49× | 25.159 | 5.45× | ok |
| rapidjson | 0.234 | 1.158 | 4.95× | 0.688 | 2.94× | ok |
| re2 | 2.964 | 18.019 | 6.08× | 9.972 | 3.36× | ok |
| re2-test-re2 | 5.724 | 26.421 | 4.62× | 21.598 | 3.77× | ok |
| re2-test-search | 5.670 | 23.962 | 4.23× | 21.063 | 3.71× | ok |
| tramp3d-v4 | 2.597 | 22.317 | 8.59× | 14.071 | 5.42× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.062 | 0.136 | 2.19× | 0.184 | 2.97× | ok |
| Adobe-C++/loop_unroll | 0.034 | 0.098 | 2.88× | 0.101 | 2.97× | ok |
| Adobe-C++/simple_types_constant_folding | 0.034 | 0.104 | 3.06× | 0.107 | 3.15× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.033 | 0.092 | 2.79× | 0.116 | 3.52× | ok |
| Adobe-C++/stepanov_abstraction | 0.031 | 0.067 | 2.16× | 0.084 | 2.71× | ok |
| Adobe-C++/stepanov_vector | 0.067 | 0.136 | 2.03× | 0.158 | 2.36× | ok |
| Bullet | 4.544 | 10.504 | 2.31× | 13.497 | 2.97× | ok |
| CLAMR | 2.225 | 4.802 | 2.16× | 7.246 | 3.26× | ok |
| CoyoteBench/almabench | 0.026 | 0.054 | 2.08× | 0.071 | 2.73× | ok |
| CoyoteBench/fftbench | 0.099 | 0.223 | 2.25× | 0.286 | 2.89× | ok |
| CoyoteBench/huffbench | 0.026 | 0.055 | 2.12× | 0.083 | 3.19× | ok |
| CoyoteBench/lpbench | 0.030 | 0.058 | 1.93× | 0.084 | 2.80× | ok |
| DOE/HACCKernels | 0.101 | 0.256 | 2.53× | 0.298 | 2.95× | ok |
| DOE/HPCCG | 0.680 | 1.343 | 1.97× | 2.161 | 3.18× | ok |
| DOE/PENNANT | 1.297 | 3.106 | 2.39× | 3.733 | 2.88× | ok |
| DOE/miniFE | 0.525 | 1.380 | 2.63× | 1.579 | 3.01× | ok |
| Misc-C++-EH/spirit | 0.320 | 0.860 | 2.69× | 1.271 | 3.97× | ok |
| Misc-C++-Large/ray | 0.092 | 0.243 | 2.64× | 0.286 | 3.11× | ok |
| Misc-C++-Large/sphereflake | 0.081 | 0.177 | 2.19× | 0.241 | 2.98× | ok |
| Misc-C++/bigfib | 0.099 | 0.224 | 2.26× | 0.291 | 2.94× | ok |
| Misc-C++/oopack_v1p8 | 0.027 | 0.059 | 2.19× | 0.078 | 2.89× | ok |
| Misc-C++/stepanov_container | 0.129 | 0.326 | 2.53× | 0.375 | 2.91× | ok |
| Misc-C++/stepanov_v1p2 | 0.030 | 0.063 | 2.10× | 0.074 | 2.47× | ok |
| PAQ8p | 0.040 | 0.107 | 2.67× | 0.118 | 2.95× | ok |
| Prolangs-C++/life | 0.003 | 0.009 | — | 0.018 | — | ok |
| Prolangs-C++/ocean | 0.008 | 0.022 | — | 0.033 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.015 | — | 0.025 | — | ok |
| Shootout-C++-EH/except | 0.063 | 0.146 | 2.32× | 0.187 | 2.97× | ok |
| Shootout-C++/ackermann | 0.069 | 0.167 | 2.42× | 0.193 | 2.80× | ok |
| Shootout-C++/ary3 | 0.081 | 0.167 | 2.06× | 0.221 | 2.73× | ok |
| Shootout-C++/fibo | 0.065 | 0.149 | 2.29× | 0.192 | 2.95× | ok |
| Shootout-C++/hash | 0.103 | 0.208 | 2.02× | 0.299 | 2.90× | ok |
| Shootout-C++/hash2 | 0.088 | 0.200 | 2.27× | 0.251 | 2.85× | ok |
| Shootout-C++/heapsort | 0.094 | 0.184 | 1.96× | 0.233 | 2.48× | ok |
| Shootout-C++/lists | 0.071 | 0.158 | 2.23× | 0.245 | 3.45× | ok |
| Shootout-C++/lists1 | 0.076 | 0.173 | 2.28× | 0.219 | 2.88× | ok |
| Shootout-C++/matrix | 0.059 | 0.140 | 2.37× | 0.184 | 3.12× | ok |
| Shootout-C++/methcall | 0.066 | 0.149 | 2.26× | 0.182 | 2.76× | ok |
| Shootout-C++/moments | 0.085 | 0.189 | 2.22× | 0.228 | 2.68× | ok |
| Shootout-C++/random | 0.081 | 0.171 | 2.11× | 0.225 | 2.78× | ok |
| Shootout-C++/sieve | 0.079 | 0.182 | 2.30× | 0.231 | 2.92× | ok |
| SmallPT | 0.024 | 0.050 | 2.08× | 0.077 | 3.21× | ok |
| Stanford/Bubblesort | 0.008 | 0.022 | — | 0.030 | — | ok |
| Stanford/FloatMM | 0.008 | 0.021 | — | 0.029 | — | ok |
| Stanford/Puzzle | 0.009 | 0.026 | — | 0.031 | — | ok |
| Stanford/Treesort | 0.009 | 0.025 | — | 0.030 | — | ok |
| bg/binarytrees/2 | 0.066 | 0.151 | 2.29× | 0.193 | 2.92× | ok |
| bg/fannkuchredux/3 | 0.030 | 0.058 | 1.93× | 0.075 | 2.50× | ok |
| bg/fasta/1 | 0.050 | 0.093 | 1.86× | 0.118 | 2.36× | ok |
| bg/fasta/2 | 0.046 | 0.093 | 2.02× | 0.110 | 2.39× | ok |
| bg/fasta/3 | 0.072 | 0.172 | 2.39× | 0.215 | 2.99× | ok |
| bg/fasta/4 | 0.068 | 0.142 | 2.09× | 0.159 | 2.34× | ok |
| bg/fasta/6 | 0.114 | 0.284 | 2.49× | 0.359 | 3.15× | ok |
| bg/mandelbrot/0 | 0.150 | 0.276 | 1.84× | 0.400 | 2.67× | ok |
| bg/mandelbrot/2 | 0.082 | 0.191 | 2.33× | 0.241 | 2.94× | ok |
| bg/mandelbrot/3 | 0.087 | 0.191 | 2.20× | 0.239 | 2.75× | ok |
| bg/mandelbrot/5 | 0.046 | 0.087 | 1.89× | 0.107 | 2.33× | ok |
| bg/mandelbrot/7 | 0.038 | 0.090 | 2.37× | 0.115 | 3.03× | ok |
| bg/mandelbrot/9 | 0.038 | 0.075 | 1.97× | 0.120 | 3.16× | ok |
| bg/nbody/1 | 0.026 | 0.060 | 2.31× | 0.075 | 2.88× | ok |
| bg/nbody/2 | 0.024 | 0.056 | 2.33× | 0.069 | 2.88× | ok |
| bg/nbody/3 | 0.025 | 0.054 | 2.16× | 0.067 | 2.68× | ok |
| bg/nbody/6 | 0.026 | 0.061 | 2.35× | 0.074 | 2.85× | ok |
| bg/pidigits/4 | 0.109 | 0.261 | 2.39× | 0.360 | 3.30× | ok |
| bg/pidigits/5 | 0.072 | 0.174 | 2.42× | 0.192 | 2.67× | ok |
| bg/revcomp/1 | 0.076 | 0.172 | 2.26× | 0.221 | 2.91× | ok |
| bg/revcomp/5 | 0.073 | 0.177 | 2.42× | 0.189 | 2.59× | ok |
| bg/spectralnorm/1 | 0.114 | 0.222 | 1.95× | 0.273 | 2.39× | ok |
| box2d | 1.345 | 2.717 | 2.02× | 4.217 | 3.14× | ok |
| fmt | 0.439 | 0.972 | 2.21× | 1.530 | 3.49× | ok |
| hexxagon | 0.214 | 0.582 | 2.72× | 0.675 | 3.15× | ok |
| lambda | 0.035 | 0.110 | 3.14× | 0.134 | 3.83× | ok |
| minisat | 0.044 | 0.113 | 2.57× | 0.162 | 3.68× | ok |
| nlohmann-json | 0.324 | 0.761 | 2.35× | 1.342 | 4.14× | ok |
| pugixml | 0.209 | 0.493 | 2.36× | 0.688 | 3.29× | ok |
| pugixml-tests | 2.951 | 7.025 | 2.38× | 9.525 | 3.23× | ok |
| rapidjson | 0.093 | 0.235 | 2.53× | 0.300 | 3.23× | ok |
| re2 | 2.747 | 6.191 | 2.25× | 5.723 | 2.08× | ok |
| re2-test-re2 | 4.037 | 9.511 | 2.36× | 12.553 | 3.11× | ok |
| re2-test-search | 4.096 | 9.321 | 2.28× | 12.980 | 3.17× | ok |
| tramp3d-v4 | 0.639 | 2.394 | 3.75× | 1.519 | 2.38× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
