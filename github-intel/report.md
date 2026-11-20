# Public benchmarks: Intel (GitHub)

Measured compiler: [`897807fd4`](https://github.com/vishvananda/cppgm/commit/897807fd4b8c8a50f234a4480f91abe56a7760a8) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44780058957) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: Intel(R) Xeon(R) 6975P-C.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.28× | 74 | 2.95× | 74 |
| Compile CPU, `-O0` | 3.21× | 75 | 3.16× | 75 |
| Compile CPU, `-O3` | 4.33× | 79 | 3.88× | 79 |
| Compile peak RSS, `-O0` | 1.42× | 81 | 2.11× | 81 |
| Compile peak RSS, `-O3` | 1.69× | 81 | 2.19× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.12× | 81 | 1.08× | 81 |
| Run CPU, `-O3` | 0.99× | 80 | 1.00× | 80 |
| Run instructions, `-O3` | 1.00× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.879 to 1.020; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.065 | 0.249 | 3.83× | 0.175 | 2.69× | ok |
| Adobe-C++/loop_unroll | 0.053 | 0.572 | 10.79× | 0.173 | 3.26× | ok |
| Adobe-C++/simple_types_constant_folding | 0.061 | 0.681 | 11.16× | 0.213 | 3.49× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.047 | 0.486 | 10.34× | 0.192 | 4.09× | ok |
| Adobe-C++/stepanov_abstraction | 0.039 | 0.175 | 4.49× | 0.114 | 2.92× | ok |
| Adobe-C++/stepanov_vector | 0.063 | 0.274 | 4.35× | 0.197 | 3.13× | ok |
| Bullet | 4.397 | 18.534 | 4.22× | 15.832 | 3.60× | ok |
| CLAMR | 2.604 | 8.632 | 3.31× | 9.174 | 3.52× | ok |
| CoyoteBench/almabench | 0.026 | 0.068 | 2.62× | 0.091 | 3.50× | ok |
| CoyoteBench/fftbench | 0.103 | 0.271 | 2.63× | 0.310 | 3.01× | ok |
| CoyoteBench/huffbench | 0.028 | 0.070 | 2.50× | 0.082 | 2.93× | ok |
| CoyoteBench/lpbench | 0.026 | 0.071 | 2.73× | 0.074 | 2.85× | ok |
| DOE/HACCKernels | 0.102 | 0.251 | 2.46× | 0.317 | 3.11× | ok |
| DOE/HPCCG | 0.706 | 1.590 | 2.25× | 1.911 | 2.71× | ok |
| DOE/PENNANT | 1.461 | 3.762 | 2.57× | 4.113 | 2.82× | ok |
| DOE/miniFE | 0.580 | 2.134 | 3.68× | 1.888 | 3.26× | ok |
| Misc-C++-EH/spirit | 0.463 | 2.363 | 5.10× | 1.582 | 3.42× | ok |
| Misc-C++-Large/ray | 0.097 | 0.254 | 2.62× | 0.302 | 3.11× | ok |
| Misc-C++-Large/sphereflake | 0.094 | 0.227 | 2.41× | 0.297 | 3.16× | ok |
| Misc-C++/bigfib | 0.122 | 0.360 | 2.95× | 0.419 | 3.43× | ok |
| Misc-C++/oopack_v1p8 | 0.032 | 0.095 | 2.97× | 0.096 | 3.00× | ok |
| Misc-C++/stepanov_container | 0.159 | 0.576 | 3.62× | 0.565 | 3.55× | ok |
| Misc-C++/stepanov_v1p2 | 0.028 | 0.117 | 4.18× | 0.089 | 3.18× | ok |
| PAQ8p | 0.066 | 0.458 | 6.94× | 0.245 | 3.71× | ok |
| Prolangs-C++/life | 0.004 | 0.029 | — | 0.025 | — | ok |
| Prolangs-C++/ocean | 0.010 | 0.058 | 5.80× | 0.041 | 4.10× | ok |
| Prolangs-C++/primes | 0.005 | 0.021 | — | 0.024 | — | ok |
| Shootout-C++-EH/except | 0.064 | 0.148 | 2.31× | 0.199 | 3.11× | ok |
| Shootout-C++/ackermann | 0.073 | 0.160 | 2.19× | 0.246 | 3.37× | ok |
| Shootout-C++/ary3 | 0.074 | 0.184 | 2.49× | 0.228 | 3.08× | ok |
| Shootout-C++/fibo | 0.075 | 0.162 | 2.16× | 0.233 | 3.11× | ok |
| Shootout-C++/hash | 0.110 | 0.306 | 2.78× | 0.340 | 3.09× | ok |
| Shootout-C++/hash2 | 0.094 | 0.269 | 2.86× | 0.287 | 3.05× | ok |
| Shootout-C++/heapsort | 0.095 | 0.194 | 2.04× | 0.229 | 2.41× | ok |
| Shootout-C++/lists | 0.072 | 0.191 | 2.65× | 0.245 | 3.40× | ok |
| Shootout-C++/lists1 | 0.083 | 0.213 | 2.57× | 0.264 | 3.18× | ok |
| Shootout-C++/matrix | 0.068 | 0.175 | 2.57× | 0.204 | 3.00× | ok |
| Shootout-C++/methcall | 0.065 | 0.145 | 2.23× | 0.196 | 3.02× | ok |
| Shootout-C++/moments | 0.097 | 0.255 | 2.63× | 0.258 | 2.66× | ok |
| Shootout-C++/random | 0.081 | 0.205 | 2.53× | 0.233 | 2.88× | ok |
| Shootout-C++/sieve | 0.083 | 0.226 | 2.72× | 0.263 | 3.17× | ok |
| SmallPT | 0.028 | 0.084 | 3.00× | 0.086 | 3.07× | ok |
| Stanford/Bubblesort | 0.009 | 0.026 | — | 0.030 | — | ok |
| Stanford/FloatMM | 0.009 | 0.026 | — | 0.031 | — | ok |
| Stanford/Puzzle | 0.009 | 0.033 | — | 0.031 | — | ok |
| Stanford/Treesort | 0.009 | 0.028 | — | 0.030 | — | ok |
| bg/binarytrees/2 | 0.065 | 0.153 | 2.35× | 0.198 | 3.05× | ok |
| bg/fannkuchredux/3 | 0.031 | 0.068 | 2.19× | 0.083 | 2.68× | ok |
| bg/fasta/1 | 0.049 | 0.120 | 2.45× | 0.139 | 2.84× | ok |
| bg/fasta/2 | 0.052 | 0.121 | 2.33× | 0.156 | 3.00× | ok |
| bg/fasta/3 | 0.076 | 0.174 | 2.29× | 0.221 | 2.91× | ok |
| bg/fasta/4 | 0.065 | 0.150 | 2.31× | 0.167 | 2.57× | ok |
| bg/fasta/6 | 0.125 | 0.436 | 3.49× | 0.442 | 3.54× | ok |
| bg/mandelbrot/0 | 0.148 | 0.468 | 3.16× | 0.462 | 3.12× | ok |
| bg/mandelbrot/2 | 0.088 | 0.210 | 2.39× | 0.269 | 3.06× | ok |
| bg/mandelbrot/3 | 0.098 | 0.205 | 2.09× | 0.258 | 2.63× | ok |
| bg/mandelbrot/5 | 0.049 | 0.105 | 2.14× | 0.123 | 2.51× | ok |
| bg/mandelbrot/7 | 0.042 | 0.129 | 3.07× | 0.137 | 3.26× | ok |
| bg/mandelbrot/9 | 0.044 | 0.121 | 2.75× | 0.141 | 3.20× | ok |
| bg/nbody/1 | 0.027 | 0.098 | 3.63× | 0.095 | 3.52× | ok |
| bg/nbody/2 | 0.025 | 0.065 | 2.60× | 0.077 | 3.08× | ok |
| bg/nbody/3 | 0.025 | 0.063 | 2.52× | 0.075 | 3.00× | ok |
| bg/nbody/6 | 0.028 | 0.102 | 3.64× | 0.097 | 3.46× | ok |
| bg/pidigits/4 | 0.122 | 0.295 | 2.42× | 0.387 | 3.17× | ok |
| bg/pidigits/5 | 0.079 | 0.172 | 2.18× | 0.219 | 2.77× | ok |
| bg/revcomp/1 | 0.076 | 0.206 | 2.71× | 0.257 | 3.38× | ok |
| bg/revcomp/5 | 0.077 | 0.194 | 2.52× | 0.237 | 3.08× | ok |
| bg/spectralnorm/1 | 0.107 | 0.285 | 2.66× | 0.296 | 2.77× | ok |
| box2d | 1.441 | 4.338 | 3.01× | 4.371 | 3.03× | ok |
| fmt | 0.533 | 2.487 | 4.67× | 2.000 | 3.75× | ok |
| hexxagon | 0.227 | 0.637 | 2.81× | 0.741 | 3.26× | ok |
| lambda | 0.045 | 0.279 | 6.20× | 0.199 | 4.42× | ok |
| minisat | 0.054 | 0.262 | 4.85× | 0.222 | 4.11× | ok |
| nlohmann-json | 0.396 | 1.792 | 4.53× | 1.829 | 4.62× | ok |
| pugixml | 0.267 | 1.367 | 5.12× | 0.961 | 3.60× | ok |
| pugixml-tests | 3.136 | 14.943 | 4.76× | 11.249 | 3.59× | ok |
| rapidjson | 0.117 | 0.483 | 4.13× | 0.388 | 3.32× | ok |
| re2 | 2.885 | 10.519 | 3.65× | 6.876 | 2.38× | ok |
| re2-test-re2 | 4.736 | 15.314 | 3.23× | 16.104 | 3.40× | ok |
| re2-test-search | 4.673 | 14.324 | 3.07× | 14.357 | 3.07× | ok |
| tramp3d-v4 | 0.925 | 6.496 | 7.02× | 2.697 | 2.92× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.127 | 0.905 | 7.13× | 0.571 | 4.50× | ok |
| Adobe-C++/loop_unroll | 0.440 | 5.394 | 12.26× | 4.115 | 9.35× | ok |
| Adobe-C++/simple_types_constant_folding | 0.249 | 3.008 | 12.08× | 2.525 | 10.14× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.215 | 2.374 | 11.04× | 1.867 | 8.68× | ok |
| Adobe-C++/stepanov_abstraction | 0.098 | 1.052 | 10.73× | 0.454 | 4.63× | ok |
| Adobe-C++/stepanov_vector | 0.112 | 1.366 | 12.20× | 0.526 | 4.70× | ok |
| Bullet | 5.904 | 39.235 | 6.65× | 26.801 | 4.54× | ok |
| CLAMR | 4.666 | 24.598 | 5.27× | 18.584 | 3.98× | ok |
| CoyoteBench/almabench | 0.035 | 0.151 | 4.31× | 0.137 | 3.91× | ok |
| CoyoteBench/fftbench | 0.123 | 0.415 | 3.37× | 0.423 | 3.44× | ok |
| CoyoteBench/huffbench | 0.040 | 0.227 | 5.67× | 0.143 | 3.57× | ok |
| CoyoteBench/lpbench | 0.033 | 0.172 | 5.21× | 0.178 | 5.39× | ok |
| DOE/HACCKernels | 0.116 | 0.362 | 3.12× | 0.453 | 3.91× | ok |
| DOE/HPCCG | 0.762 | 2.256 | 2.96× | 2.228 | 2.92× | ok |
| DOE/PENNANT | 1.740 | 5.928 | 3.41× | 5.725 | 3.29× | ok |
| DOE/miniFE | 0.808 | 3.939 | 4.87× | 3.170 | 3.92× | ok |
| Misc-C++-EH/spirit | 0.620 | 3.939 | 6.35× | 2.928 | 4.72× | ok |
| Misc-C++-Large/ray | 0.106 | 0.513 | 4.84× | 0.360 | 3.40× | ok |
| Misc-C++-Large/sphereflake | 0.111 | 0.767 | 6.91× | 0.371 | 3.34× | ok |
| Misc-C++/bigfib | 0.151 | 0.571 | 3.78× | 0.555 | 3.68× | ok |
| Misc-C++/oopack_v1p8 | 0.039 | 0.189 | 4.85× | 0.167 | 4.28× | ok |
| Misc-C++/stepanov_container | 0.224 | 0.918 | 4.10× | 0.936 | 4.18× | ok |
| Misc-C++/stepanov_v1p2 | 0.045 | 0.198 | 4.40× | 0.182 | 4.04× | ok |
| PAQ8p | 0.310 | 3.994 | 12.88× | 1.714 | 5.53× | ok |
| Prolangs-C++/life | 0.009 | 0.094 | — | 0.062 | — | ok |
| Prolangs-C++/ocean | 0.019 | 0.187 | 9.84× | 0.107 | 5.63× | ok |
| Prolangs-C++/primes | 0.007 | 0.033 | — | 0.032 | — | ok |
| Shootout-C++-EH/except | 0.066 | 0.176 | 2.67× | 0.211 | 3.20× | ok |
| Shootout-C++/ackermann | 0.076 | 0.204 | 2.68× | 0.242 | 3.18× | ok |
| Shootout-C++/ary3 | 0.078 | 0.221 | 2.83× | 0.250 | 3.21× | ok |
| Shootout-C++/fibo | 0.075 | 0.206 | 2.75× | 0.251 | 3.35× | ok |
| Shootout-C++/hash | 0.129 | 0.409 | 3.17× | 0.466 | 3.61× | ok |
| Shootout-C++/hash2 | 0.117 | 0.403 | 3.44× | 0.412 | 3.52× | ok |
| Shootout-C++/heapsort | 0.082 | 0.236 | 2.88× | 0.242 | 2.95× | ok |
| Shootout-C++/lists | 0.085 | 0.222 | 2.61× | 0.260 | 3.06× | ok |
| Shootout-C++/lists1 | 0.092 | 0.259 | 2.82× | 0.305 | 3.32× | ok |
| Shootout-C++/matrix | 0.081 | 0.206 | 2.54× | 0.288 | 3.56× | ok |
| Shootout-C++/methcall | 0.069 | 0.181 | 2.62× | 0.209 | 3.03× | ok |
| Shootout-C++/moments | 0.109 | 0.317 | 2.91× | 0.320 | 2.94× | ok |
| Shootout-C++/random | 0.084 | 0.202 | 2.40× | 0.242 | 2.88× | ok |
| Shootout-C++/sieve | 0.091 | 0.246 | 2.70× | 0.283 | 3.11× | ok |
| SmallPT | 0.038 | 0.278 | 7.32× | 0.159 | 4.18× | ok |
| Stanford/Bubblesort | 0.011 | 0.052 | 4.73× | 0.047 | 4.27× | ok |
| Stanford/FloatMM | 0.012 | 0.059 | 4.92× | 0.065 | 5.42× | ok |
| Stanford/Puzzle | 0.020 | 0.120 | 6.00× | 0.110 | 5.50× | ok |
| Stanford/Treesort | 0.014 | 0.082 | 5.86× | 0.051 | 3.64× | ok |
| bg/binarytrees/2 | 0.068 | 0.404 | 5.94× | 0.216 | 3.18× | ok |
| bg/fannkuchredux/3 | 0.036 | 0.112 | 3.11× | 0.111 | 3.08× | ok |
| bg/fasta/1 | 0.056 | 0.157 | 2.80× | 0.175 | 3.12× | ok |
| bg/fasta/2 | 0.057 | 0.158 | 2.77× | 0.195 | 3.42× | ok |
| bg/fasta/3 | 0.083 | 0.214 | 2.58× | 0.311 | 3.75× | ok |
| bg/fasta/4 | 0.068 | 0.185 | 2.72× | 0.272 | 4.00× | ok |
| bg/fasta/6 | 0.155 | 0.464 | 2.99× | 0.502 | 3.24× | ok |
| bg/mandelbrot/0 | 0.169 | 0.619 | 3.66× | 0.679 | 4.02× | ok |
| bg/mandelbrot/2 | 0.087 | 0.255 | 2.93× | 0.321 | 3.69× | ok |
| bg/mandelbrot/3 | 0.093 | 0.233 | 2.51× | 0.283 | 3.04× | ok |
| bg/mandelbrot/5 | 0.049 | 0.137 | 2.80× | 0.148 | 3.02× | ok |
| bg/mandelbrot/7 | 0.052 | 0.200 | 3.85× | 0.185 | 3.56× | ok |
| bg/mandelbrot/9 | 0.055 | 0.186 | 3.38× | 0.164 | 2.98× | ok |
| bg/nbody/1 | 0.039 | 0.151 | 3.87× | 0.173 | 4.44× | ok |
| bg/nbody/2 | 0.031 | 0.121 | 3.90× | 0.131 | 4.23× | ok |
| bg/nbody/3 | 0.030 | 0.111 | 3.70× | 0.103 | 3.43× | ok |
| bg/nbody/6 | 0.041 | 0.177 | 4.32× | 0.162 | 3.95× | ok |
| bg/pidigits/4 | 0.129 | 0.337 | 2.61× | 0.411 | 3.19× | ok |
| bg/pidigits/5 | 0.085 | 0.211 | 2.48× | 0.241 | 2.84× | ok |
| bg/revcomp/1 | 0.085 | 0.238 | 2.80× | 0.306 | 3.60× | ok |
| bg/revcomp/5 | 0.085 | 0.234 | 2.75× | 0.295 | 3.47× | ok |
| bg/spectralnorm/1 | 0.128 | 0.370 | 2.89× | 0.345 | 2.70× | ok |
| box2d | 1.722 | 7.642 | 4.44× | 4.652 | 2.70× | ok |
| fmt | 1.022 | 5.245 | 5.13× | 4.119 | 4.03× | ok |
| hexxagon | 0.266 | 0.982 | 3.69× | 1.129 | 4.24× | ok |
| lambda | 0.112 | 1.022 | 9.12× | 0.501 | 4.47× | ok |
| minisat | 0.141 | 1.002 | 7.11× | 0.652 | 4.62× | ok |
| nlohmann-json | 0.771 | 3.361 | 4.36× | 3.128 | 4.06× | ok |
| pugixml | 0.675 | 5.618 | 8.32× | 3.822 | 5.66× | ok |
| pugixml-tests | 4.816 | 34.255 | 7.11× | 25.083 | 5.21× | ok |
| rapidjson | 0.232 | 1.224 | 5.28× | 0.738 | 3.18× | ok |
| re2 | 2.969 | 18.144 | 6.11× | 10.242 | 3.45× | ok |
| re2-test-re2 | 5.955 | 26.911 | 4.52× | 22.834 | 3.83× | ok |
| re2-test-search | 5.937 | 24.156 | 4.07× | 21.355 | 3.60× | ok |
| tramp3d-v4 | 2.626 | 20.401 | 7.77× | 14.374 | 5.47× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.060 | 0.136 | 2.27× | 0.150 | 2.50× | ok |
| Adobe-C++/loop_unroll | 0.038 | 0.098 | 2.58× | 0.101 | 2.66× | ok |
| Adobe-C++/simple_types_constant_folding | 0.041 | 0.103 | 2.51× | 0.108 | 2.63× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.034 | 0.093 | 2.74× | 0.100 | 2.94× | ok |
| Adobe-C++/stepanov_abstraction | 0.033 | 0.067 | 2.03× | 0.088 | 2.67× | ok |
| Adobe-C++/stepanov_vector | 0.055 | 0.121 | 2.20× | 0.159 | 2.89× | ok |
| Bullet | 4.554 | 10.269 | 2.25× | 12.412 | 2.73× | ok |
| CLAMR | 2.239 | 4.487 | 2.00× | 6.368 | 2.84× | ok |
| CoyoteBench/almabench | 0.026 | 0.055 | 2.12× | 0.088 | 3.38× | ok |
| CoyoteBench/fftbench | 0.099 | 0.221 | 2.23× | 0.285 | 2.88× | ok |
| CoyoteBench/huffbench | 0.027 | 0.058 | 2.15× | 0.082 | 3.04× | ok |
| CoyoteBench/lpbench | 0.025 | 0.057 | 2.28× | 0.067 | 2.68× | ok |
| DOE/HACCKernels | 0.099 | 0.220 | 2.22× | 0.304 | 3.07× | ok |
| DOE/HPCCG | 0.689 | 1.363 | 1.98× | 1.791 | 2.60× | ok |
| DOE/PENNANT | 1.345 | 2.807 | 2.09× | 3.517 | 2.61× | ok |
| DOE/miniFE | 0.527 | 1.396 | 2.65× | 1.590 | 3.02× | ok |
| Misc-C++-EH/spirit | 0.326 | 0.835 | 2.56× | 1.034 | 3.17× | ok |
| Misc-C++-Large/ray | 0.093 | 0.210 | 2.26× | 0.275 | 2.96× | ok |
| Misc-C++-Large/sphereflake | 0.091 | 0.190 | 2.09× | 0.275 | 3.02× | ok |
| Misc-C++/bigfib | 0.110 | 0.239 | 2.17× | 0.369 | 3.35× | ok |
| Misc-C++/oopack_v1p8 | 0.028 | 0.065 | 2.32× | 0.084 | 3.00× | ok |
| Misc-C++/stepanov_container | 0.143 | 0.331 | 2.31× | 0.462 | 3.23× | ok |
| Misc-C++/stepanov_v1p2 | 0.027 | 0.061 | 2.26× | 0.075 | 2.78× | ok |
| PAQ8p | 0.043 | 0.120 | 2.79× | 0.142 | 3.30× | ok |
| Prolangs-C++/life | 0.003 | 0.009 | — | 0.018 | — | ok |
| Prolangs-C++/ocean | 0.008 | 0.020 | — | 0.028 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.014 | — | 0.022 | — | ok |
| Shootout-C++-EH/except | 0.064 | 0.148 | 2.31× | 0.187 | 2.92× | ok |
| Shootout-C++/ackermann | 0.072 | 0.157 | 2.18× | 0.239 | 3.32× | ok |
| Shootout-C++/ary3 | 0.071 | 0.167 | 2.35× | 0.212 | 2.99× | ok |
| Shootout-C++/fibo | 0.072 | 0.166 | 2.31× | 0.222 | 3.08× | ok |
| Shootout-C++/hash | 0.103 | 0.231 | 2.24× | 0.290 | 2.82× | ok |
| Shootout-C++/hash2 | 0.088 | 0.197 | 2.24× | 0.253 | 2.88× | ok |
| Shootout-C++/heapsort | 0.093 | 0.196 | 2.11× | 0.219 | 2.35× | ok |
| Shootout-C++/lists | 0.069 | 0.159 | 2.30× | 0.266 | 3.86× | ok |
| Shootout-C++/lists1 | 0.079 | 0.174 | 2.20× | 0.238 | 3.01× | ok |
| Shootout-C++/matrix | 0.066 | 0.176 | 2.67× | 0.237 | 3.59× | ok |
| Shootout-C++/methcall | 0.064 | 0.142 | 2.22× | 0.186 | 2.91× | ok |
| Shootout-C++/moments | 0.092 | 0.200 | 2.17× | 0.255 | 2.77× | ok |
| Shootout-C++/random | 0.081 | 0.189 | 2.33× | 0.221 | 2.73× | ok |
| Shootout-C++/sieve | 0.079 | 0.185 | 2.34× | 0.238 | 3.01× | ok |
| SmallPT | 0.026 | 0.055 | 2.12× | 0.076 | 2.92× | ok |
| Stanford/Bubblesort | 0.009 | 0.022 | — | 0.029 | — | ok |
| Stanford/FloatMM | 0.009 | 0.021 | — | 0.028 | — | ok |
| Stanford/Puzzle | 0.009 | 0.023 | — | 0.029 | — | ok |
| Stanford/Treesort | 0.009 | 0.022 | — | 0.029 | — | ok |
| bg/binarytrees/2 | 0.063 | 0.147 | 2.33× | 0.189 | 3.00× | ok |
| bg/fannkuchredux/3 | 0.030 | 0.058 | 1.93× | 0.077 | 2.57× | ok |
| bg/fasta/1 | 0.047 | 0.094 | 2.00× | 0.128 | 2.72× | ok |
| bg/fasta/2 | 0.049 | 0.094 | 1.92× | 0.124 | 2.53× | ok |
| bg/fasta/3 | 0.079 | 0.162 | 2.05× | 0.239 | 3.03× | ok |
| bg/fasta/4 | 0.063 | 0.145 | 2.30× | 0.161 | 2.56× | ok |
| bg/fasta/6 | 0.122 | 0.276 | 2.26× | 0.389 | 3.19× | ok |
| bg/mandelbrot/0 | 0.143 | 0.290 | 2.03× | 0.375 | 2.62× | ok |
| bg/mandelbrot/2 | 0.082 | 0.189 | 2.30× | 0.268 | 3.27× | ok |
| bg/mandelbrot/3 | 0.096 | 0.203 | 2.11× | 0.246 | 2.56× | ok |
| bg/mandelbrot/5 | 0.047 | 0.087 | 1.85× | 0.123 | 2.62× | ok |
| bg/mandelbrot/7 | 0.040 | 0.094 | 2.35× | 0.120 | 3.00× | ok |
| bg/mandelbrot/9 | 0.041 | 0.084 | 2.05× | 0.103 | 2.51× | ok |
| bg/nbody/1 | 0.026 | 0.059 | 2.27× | 0.075 | 2.88× | ok |
| bg/nbody/2 | 0.030 | 0.053 | 1.77× | 0.072 | 2.40× | ok |
| bg/nbody/3 | 0.025 | 0.051 | 2.04× | 0.069 | 2.76× | ok |
| bg/nbody/6 | 0.027 | 0.060 | 2.22× | 0.081 | 3.00× | ok |
| bg/pidigits/4 | 0.108 | 0.270 | 2.50× | 0.338 | 3.13× | ok |
| bg/pidigits/5 | 0.070 | 0.175 | 2.50× | 0.207 | 2.96× | ok |
| bg/revcomp/1 | 0.076 | 0.166 | 2.18× | 0.263 | 3.46× | ok |
| bg/revcomp/5 | 0.073 | 0.153 | 2.10× | 0.212 | 2.90× | ok |
| bg/spectralnorm/1 | 0.114 | 0.243 | 2.13× | 0.279 | 2.45× | ok |
| box2d | 1.380 | 2.882 | 2.09× | 4.261 | 3.09× | ok |
| fmt | 0.450 | 1.092 | 2.43× | 1.619 | 3.60× | ok |
| hexxagon | 0.218 | 0.576 | 2.64× | 0.698 | 3.20× | ok |
| lambda | 0.036 | 0.110 | 3.06× | 0.140 | 3.89× | ok |
| minisat | 0.045 | 0.114 | 2.53× | 0.162 | 3.60× | ok |
| nlohmann-json | 0.312 | 0.787 | 2.52× | 1.391 | 4.46× | ok |
| pugixml | 0.198 | 0.523 | 2.64× | 0.702 | 3.55× | ok |
| pugixml-tests | 2.882 | 7.560 | 2.62× | 9.583 | 3.33× | ok |
| rapidjson | 0.095 | 0.248 | 2.61× | 0.299 | 3.15× | ok |
| re2 | 2.788 | 6.639 | 2.38× | 5.783 | 2.07× | ok |
| re2-test-re2 | 4.290 | 10.101 | 2.35× | 12.975 | 3.02× | ok |
| re2-test-search | 4.164 | 9.727 | 2.34× | 13.691 | 3.29× | ok |
| tramp3d-v4 | 0.663 | 2.391 | 3.61× | 1.574 | 2.37× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
