# Public benchmarks: Intel (GitHub)

Measured compiler: [`d8c559893`](https://github.com/vishvananda/cppgm/commit/d8c559893a923e5683c44df6cb98076271dd6f01) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/45697047144) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: Intel(R) Xeon(R) 6975P-C.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.28× | 74 | 2.94× | 74 |
| Compile CPU, `-O0` | 3.21× | 75 | 3.18× | 75 |
| Compile CPU, `-O3` | 4.31× | 80 | 3.88× | 80 |
| Compile peak RSS, `-O0` | 1.44× | 81 | 2.19× | 81 |
| Compile peak RSS, `-O3` | 1.70× | 81 | 2.30× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.11× | 81 | 1.08× | 81 |
| Run CPU, `-O3` | 1.01× | 80 | 1.03× | 80 |
| Run instructions, `-O3` | 1.05× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.907 to 1.075; raw observations and block ratios are retained in the artifact.

## Slowest generated code, by run-time instructions

| Program | vs g++ |
| --- | ---: |
| tramp3d-v4 | 0.78× |
| bg/spectralnorm/1 | 0.83× |
| bg/nbody/2 | 0.86× |
| bg/nbody/3 | 0.87× |
| bg/mandelbrot/7 | 0.88× |
| bg/mandelbrot/9 | 0.89× |
| bg/mandelbrot/5 | 0.89× |
| CoyoteBench/fftbench | 0.89× |
| DOE/PENNANT | 0.90× |
| bg/mandelbrot/2 | 0.93× |

## Compile CPU times

Times are CPU seconds, excluding linking. Speed is reference time divided by cppgm time; higher is better. Every program is listed. Missing times show a dash. Ratios are omitted for failed programs or when either time is below 10 ms.

Compilation is measured once per compiler and level; the ABBA/BAAB repetitions apply to generated-program execution and self-built compiler speed.

### O0 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.065 | 0.253 | 3.89× | 0.218 | 3.35× | ok |
| Adobe-C++/loop_unroll | 0.050 | 0.572 | 11.44× | 0.172 | 3.44× | ok |
| Adobe-C++/simple_types_constant_folding | 0.056 | 0.645 | 11.52× | 0.209 | 3.73× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.047 | 0.489 | 10.40× | 0.230 | 4.89× | ok |
| Adobe-C++/stepanov_abstraction | 0.042 | 0.172 | 4.10× | 0.112 | 2.67× | ok |
| Adobe-C++/stepanov_vector | 0.063 | 0.302 | 4.79× | 0.243 | 3.86× | ok |
| Bullet | 4.310 | 17.830 | 4.14× | 15.531 | 3.60× | ok |
| CLAMR | 2.362 | 8.960 | 3.79× | 7.344 | 3.11× | ok |
| CoyoteBench/almabench | 0.030 | 0.076 | 2.53× | 0.081 | 2.70× | ok |
| CoyoteBench/fftbench | 0.100 | 0.237 | 2.37× | 0.296 | 2.96× | ok |
| CoyoteBench/huffbench | 0.026 | 0.073 | 2.81× | 0.084 | 3.23× | ok |
| CoyoteBench/lpbench | 0.026 | 0.066 | 2.54× | 0.076 | 2.92× | ok |
| DOE/HACCKernels | 0.100 | 0.244 | 2.44× | 0.396 | 3.96× | ok |
| DOE/HPCCG | 0.621 | 1.579 | 2.54× | 1.860 | 3.00× | ok |
| DOE/PENNANT | 1.485 | 3.776 | 2.54× | 4.280 | 2.88× | ok |
| DOE/miniFE | 0.637 | 2.121 | 3.33× | 2.235 | 3.51× | ok |
| Misc-C++-EH/spirit | 0.396 | 2.311 | 5.84× | 1.583 | 4.00× | ok |
| Misc-C++-Large/ray | 0.107 | 0.283 | 2.64× | 0.337 | 3.15× | ok |
| Misc-C++-Large/sphereflake | 0.086 | 0.233 | 2.71× | 0.273 | 3.17× | ok |
| Misc-C++/bigfib | 0.113 | 0.346 | 3.06× | 0.343 | 3.04× | ok |
| Misc-C++/oopack_v1p8 | 0.029 | 0.086 | 2.97× | 0.094 | 3.24× | ok |
| Misc-C++/stepanov_container | 0.166 | 0.590 | 3.55× | 0.562 | 3.39× | ok |
| Misc-C++/stepanov_v1p2 | 0.030 | 0.123 | 4.10× | 0.088 | 2.93× | ok |
| PAQ8p | 0.063 | 0.449 | 7.13× | 0.212 | 3.37× | ok |
| Prolangs-C++/life | 0.004 | 0.031 | — | 0.025 | — | ok |
| Prolangs-C++/ocean | 0.010 | 0.058 | 5.80× | 0.044 | 4.40× | ok |
| Prolangs-C++/primes | 0.005 | 0.022 | — | 0.026 | — | ok |
| Shootout-C++-EH/except | 0.062 | 0.145 | 2.34× | 0.197 | 3.18× | ok |
| Shootout-C++/ackermann | 0.072 | 0.159 | 2.21× | 0.230 | 3.19× | ok |
| Shootout-C++/ary3 | 0.074 | 0.183 | 2.47× | 0.282 | 3.81× | ok |
| Shootout-C++/fibo | 0.064 | 0.161 | 2.52× | 0.186 | 2.91× | ok |
| Shootout-C++/hash | 0.093 | 0.261 | 2.81× | 0.284 | 3.05× | ok |
| Shootout-C++/hash2 | 0.095 | 0.314 | 3.31× | 0.280 | 2.95× | ok |
| Shootout-C++/heapsort | 0.092 | 0.169 | 1.84× | 0.241 | 2.62× | ok |
| Shootout-C++/lists | 0.072 | 0.189 | 2.62× | 0.219 | 3.04× | ok |
| Shootout-C++/lists1 | 0.098 | 0.220 | 2.24× | 0.232 | 2.37× | ok |
| Shootout-C++/matrix | 0.063 | 0.156 | 2.48× | 0.193 | 3.06× | ok |
| Shootout-C++/methcall | 0.068 | 0.143 | 2.10× | 0.190 | 2.79× | ok |
| Shootout-C++/moments | 0.090 | 0.237 | 2.63× | 0.250 | 2.78× | ok |
| Shootout-C++/random | 0.075 | 0.170 | 2.27× | 0.228 | 3.04× | ok |
| Shootout-C++/sieve | 0.079 | 0.222 | 2.81× | 0.248 | 3.14× | ok |
| SmallPT | 0.027 | 0.075 | 2.78× | 0.083 | 3.07× | ok |
| Stanford/Bubblesort | 0.008 | 0.024 | — | 0.029 | — | ok |
| Stanford/FloatMM | 0.008 | 0.025 | — | 0.029 | — | ok |
| Stanford/Puzzle | 0.009 | 0.032 | — | 0.031 | — | ok |
| Stanford/Treesort | 0.009 | 0.027 | — | 0.030 | — | ok |
| bg/binarytrees/2 | 0.063 | 0.152 | 2.41× | 0.193 | 3.06× | ok |
| bg/fannkuchredux/3 | 0.030 | 0.067 | 2.23× | 0.078 | 2.60× | ok |
| bg/fasta/1 | 0.047 | 0.115 | 2.45× | 0.129 | 2.74× | ok |
| bg/fasta/2 | 0.048 | 0.119 | 2.48× | 0.133 | 2.77× | ok |
| bg/fasta/3 | 0.079 | 0.176 | 2.23× | 0.217 | 2.75× | ok |
| bg/fasta/4 | 0.068 | 0.147 | 2.16× | 0.170 | 2.50× | ok |
| bg/fasta/6 | 0.127 | 0.391 | 3.08× | 0.362 | 2.85× | ok |
| bg/mandelbrot/0 | 0.141 | 0.411 | 2.91× | 0.423 | 3.00× | ok |
| bg/mandelbrot/2 | 0.081 | 0.199 | 2.46× | 0.259 | 3.20× | ok |
| bg/mandelbrot/3 | 0.085 | 0.214 | 2.52× | 0.250 | 2.94× | ok |
| bg/mandelbrot/5 | 0.041 | 0.099 | 2.41× | 0.116 | 2.83× | ok |
| bg/mandelbrot/7 | 0.042 | 0.114 | 2.71× | 0.130 | 3.10× | ok |
| bg/mandelbrot/9 | 0.040 | 0.115 | 2.88× | 0.141 | 3.52× | ok |
| bg/nbody/1 | 0.026 | 0.095 | 3.65× | 0.086 | 3.31× | ok |
| bg/nbody/2 | 0.027 | 0.063 | 2.33× | 0.071 | 2.63× | ok |
| bg/nbody/3 | 0.024 | 0.059 | 2.46× | 0.077 | 3.21× | ok |
| bg/nbody/6 | 0.027 | 0.092 | 3.41× | 0.089 | 3.30× | ok |
| bg/pidigits/4 | 0.115 | 0.297 | 2.58× | 0.380 | 3.30× | ok |
| bg/pidigits/5 | 0.074 | 0.159 | 2.15× | 0.253 | 3.42× | ok |
| bg/revcomp/1 | 0.088 | 0.211 | 2.40× | 0.233 | 2.65× | ok |
| bg/revcomp/5 | 0.073 | 0.189 | 2.59× | 0.223 | 3.05× | ok |
| bg/spectralnorm/1 | 0.100 | 0.247 | 2.47× | 0.352 | 3.52× | ok |
| box2d | 1.405 | 4.235 | 3.01× | 4.291 | 3.05× | ok |
| fmt | 0.459 | 2.451 | 5.34× | 2.067 | 4.50× | ok |
| hexxagon | 0.237 | 0.616 | 2.60× | 0.807 | 3.41× | ok |
| lambda | 0.050 | 0.296 | 5.92× | 0.225 | 4.50× | ok |
| minisat | 0.058 | 0.278 | 4.79× | 0.211 | 3.64× | ok |
| nlohmann-json | 0.389 | 1.945 | 5.00× | 1.732 | 4.45× | ok |
| pugixml | 0.281 | 1.220 | 4.34× | 0.967 | 3.44× | ok |
| pugixml-tests | 3.077 | 14.837 | 4.82× | 11.343 | 3.69× | ok |
| rapidjson | 0.118 | 0.456 | 3.86× | 0.378 | 3.20× | ok |
| re2 | 2.893 | 10.254 | 3.54× | 6.687 | 2.31× | ok |
| re2-test-re2 | 4.478 | 15.273 | 3.41× | 14.880 | 3.32× | ok |
| re2-test-search | 4.438 | 14.140 | 3.19× | 14.363 | 3.24× | ok |
| tramp3d-v4 | 0.907 | 7.225 | 7.97× | 2.642 | 2.91× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.110 | 0.820 | 7.45× | 0.486 | 4.42× | ok |
| Adobe-C++/loop_unroll | 0.447 | 5.323 | 11.91× | 4.117 | 9.21× | ok |
| Adobe-C++/simple_types_constant_folding | 0.253 | 2.946 | 11.64× | 2.286 | 9.04× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.250 | 2.187 | 8.75× | 1.801 | 7.20× | ok |
| Adobe-C++/stepanov_abstraction | 0.103 | 0.974 | 9.46× | 0.528 | 5.13× | ok |
| Adobe-C++/stepanov_vector | 0.128 | 1.448 | 11.31× | 0.633 | 4.95× | ok |
| Bullet | 6.378 | 35.902 | 5.63× | 28.274 | 4.43× | ok |
| CLAMR | 4.126 | 24.288 | 5.89× | 17.214 | 4.17× | ok |
| CoyoteBench/almabench | 0.034 | 0.170 | 5.00× | 0.120 | 3.53× | ok |
| CoyoteBench/fftbench | 0.116 | 0.409 | 3.53× | 0.406 | 3.50× | ok |
| CoyoteBench/huffbench | 0.039 | 0.229 | 5.87× | 0.140 | 3.59× | ok |
| CoyoteBench/lpbench | 0.035 | 0.163 | 4.66× | 0.185 | 5.29× | ok |
| DOE/HACCKernels | 0.114 | 0.358 | 3.14× | 0.452 | 3.96× | ok |
| DOE/HPCCG | 0.668 | 2.556 | 3.83× | 2.175 | 3.26× | ok |
| DOE/PENNANT | 1.680 | 6.761 | 4.02× | 5.595 | 3.33× | ok |
| DOE/miniFE | 0.888 | 4.258 | 4.80× | 3.695 | 4.16× | ok |
| Misc-C++-EH/spirit | 0.721 | 3.433 | 4.76× | 3.484 | 4.83× | ok |
| Misc-C++-Large/ray | 0.115 | 0.494 | 4.30× | 0.421 | 3.66× | ok |
| Misc-C++-Large/sphereflake | 0.103 | 0.725 | 7.04× | 0.356 | 3.46× | ok |
| Misc-C++/bigfib | 0.137 | 0.497 | 3.63× | 0.464 | 3.39× | ok |
| Misc-C++/oopack_v1p8 | 0.036 | 0.171 | 4.75× | 0.178 | 4.94× | ok |
| Misc-C++/stepanov_container | 0.217 | 0.894 | 4.12× | 0.881 | 4.06× | ok |
| Misc-C++/stepanov_v1p2 | 0.039 | 0.191 | 4.90× | 0.175 | 4.49× | ok |
| PAQ8p | 0.315 | 3.833 | 12.17× | 1.560 | 4.95× | ok |
| Prolangs-C++/life | 0.010 | 0.104 | 10.40× | 0.070 | 7.00× | ok |
| Prolangs-C++/ocean | 0.021 | 0.200 | 9.52× | 0.120 | 5.71× | ok |
| Prolangs-C++/primes | 0.008 | 0.035 | — | 0.038 | — | ok |
| Shootout-C++-EH/except | 0.066 | 0.174 | 2.64× | 0.209 | 3.17× | ok |
| Shootout-C++/ackermann | 0.074 | 0.204 | 2.76× | 0.256 | 3.46× | ok |
| Shootout-C++/ary3 | 0.091 | 0.221 | 2.43× | 0.297 | 3.26× | ok |
| Shootout-C++/fibo | 0.065 | 0.184 | 2.83× | 0.201 | 3.09× | ok |
| Shootout-C++/hash | 0.109 | 0.350 | 3.21× | 0.374 | 3.43× | ok |
| Shootout-C++/hash2 | 0.114 | 0.395 | 3.46× | 0.408 | 3.58× | ok |
| Shootout-C++/heapsort | 0.096 | 0.230 | 2.40× | 0.292 | 3.04× | ok |
| Shootout-C++/lists | 0.077 | 0.219 | 2.84× | 0.249 | 3.23× | ok |
| Shootout-C++/lists1 | 0.112 | 0.264 | 2.36× | 0.273 | 2.44× | ok |
| Shootout-C++/matrix | 0.070 | 0.198 | 2.83× | 0.283 | 4.04× | ok |
| Shootout-C++/methcall | 0.066 | 0.186 | 2.82× | 0.205 | 3.11× | ok |
| Shootout-C++/moments | 0.101 | 0.295 | 2.92× | 0.314 | 3.11× | ok |
| Shootout-C++/random | 0.081 | 0.194 | 2.40× | 0.242 | 2.99× | ok |
| Shootout-C++/sieve | 0.088 | 0.239 | 2.72× | 0.275 | 3.13× | ok |
| SmallPT | 0.039 | 0.268 | 6.87× | 0.153 | 3.92× | ok |
| Stanford/Bubblesort | 0.010 | 0.049 | 4.90× | 0.046 | 4.60× | ok |
| Stanford/FloatMM | 0.012 | 0.058 | 4.83× | 0.066 | 5.50× | ok |
| Stanford/Puzzle | 0.021 | 0.116 | 5.52× | 0.111 | 5.29× | ok |
| Stanford/Treesort | 0.014 | 0.080 | 5.71× | 0.052 | 3.71× | ok |
| bg/binarytrees/2 | 0.068 | 0.405 | 5.96× | 0.211 | 3.10× | ok |
| bg/fannkuchredux/3 | 0.035 | 0.113 | 3.23× | 0.108 | 3.09× | ok |
| bg/fasta/1 | 0.054 | 0.153 | 2.83× | 0.174 | 3.22× | ok |
| bg/fasta/2 | 0.055 | 0.153 | 2.78× | 0.164 | 2.98× | ok |
| bg/fasta/3 | 0.081 | 0.218 | 2.69× | 0.328 | 4.05× | ok |
| bg/fasta/4 | 0.074 | 0.179 | 2.42× | 0.211 | 2.85× | ok |
| bg/fasta/6 | 0.145 | 0.430 | 2.97× | 0.491 | 3.39× | ok |
| bg/mandelbrot/0 | 0.170 | 0.602 | 3.54× | 0.637 | 3.75× | ok |
| bg/mandelbrot/2 | 0.091 | 0.246 | 2.70× | 0.291 | 3.20× | ok |
| bg/mandelbrot/3 | 0.093 | 0.229 | 2.46× | 0.272 | 2.92× | ok |
| bg/mandelbrot/5 | 0.053 | 0.148 | 2.79× | 0.144 | 2.72× | ok |
| bg/mandelbrot/7 | 0.053 | 0.178 | 3.36× | 0.172 | 3.25× | ok |
| bg/mandelbrot/9 | 0.047 | 0.180 | 3.83× | 0.151 | 3.21× | ok |
| bg/nbody/1 | 0.039 | 0.154 | 3.95× | 0.163 | 4.18× | ok |
| bg/nbody/2 | 0.032 | 0.125 | 3.91× | 0.115 | 3.59× | ok |
| bg/nbody/3 | 0.032 | 0.107 | 3.34× | 0.110 | 3.44× | ok |
| bg/nbody/6 | 0.040 | 0.148 | 3.70× | 0.167 | 4.17× | ok |
| bg/pidigits/4 | 0.107 | 0.313 | 2.93× | 0.416 | 3.89× | ok |
| bg/pidigits/5 | 0.071 | 0.192 | 2.70× | 0.274 | 3.86× | ok |
| bg/revcomp/1 | 0.094 | 0.248 | 2.64× | 0.275 | 2.93× | ok |
| bg/revcomp/5 | 0.083 | 0.230 | 2.77× | 0.284 | 3.42× | ok |
| bg/spectralnorm/1 | 0.125 | 0.327 | 2.62× | 0.416 | 3.33× | ok |
| box2d | 1.727 | 7.262 | 4.20× | 5.724 | 3.31× | ok |
| fmt | 0.922 | 5.181 | 5.62× | 3.614 | 3.92× | ok |
| hexxagon | 0.287 | 1.031 | 3.59× | 1.061 | 3.70× | ok |
| lambda | 0.119 | 1.129 | 9.49× | 0.580 | 4.87× | ok |
| minisat | 0.142 | 1.005 | 7.08× | 0.626 | 4.41× | ok |
| nlohmann-json | 0.780 | 3.443 | 4.41× | 2.945 | 3.78× | ok |
| pugixml | 0.714 | 5.497 | 7.70× | 3.728 | 5.22× | ok |
| pugixml-tests | 4.668 | 34.274 | 7.34× | 24.588 | 5.27× | ok |
| rapidjson | 0.236 | 1.217 | 5.16× | 0.730 | 3.09× | ok |
| re2 | 3.044 | 17.640 | 5.80× | 9.962 | 3.27× | ok |
| re2-test-re2 | 5.717 | 27.157 | 4.75× | 22.729 | 3.98× | ok |
| re2-test-search | 5.494 | 24.262 | 4.42× | 21.393 | 3.89× | ok |
| tramp3d-v4 | 3.132 | 17.466 | 5.58× | 14.359 | 4.58× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.060 | 0.139 | 2.32× | 0.186 | 3.10× | ok |
| Adobe-C++/loop_unroll | 0.034 | 0.101 | 2.97× | 0.101 | 2.97× | ok |
| Adobe-C++/simple_types_constant_folding | 0.038 | 0.103 | 2.71× | 0.106 | 2.79× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.034 | 0.076 | 2.24× | 0.116 | 3.41× | ok |
| Adobe-C++/stepanov_abstraction | 0.033 | 0.067 | 2.03× | 0.087 | 2.64× | ok |
| Adobe-C++/stepanov_vector | 0.055 | 0.138 | 2.51× | 0.198 | 3.60× | ok |
| Bullet | 3.899 | 10.726 | 2.75× | 13.223 | 3.39× | ok |
| CLAMR | 1.974 | 5.318 | 2.69× | 5.897 | 2.99× | ok |
| CoyoteBench/almabench | 0.031 | 0.064 | 2.06× | 0.076 | 2.45× | ok |
| CoyoteBench/fftbench | 0.097 | 0.211 | 2.18× | 0.275 | 2.84× | ok |
| CoyoteBench/huffbench | 0.027 | 0.062 | 2.30× | 0.079 | 2.93× | ok |
| CoyoteBench/lpbench | 0.026 | 0.053 | 2.04× | 0.073 | 2.81× | ok |
| DOE/HACCKernels | 0.097 | 0.216 | 2.23× | 0.300 | 3.09× | ok |
| DOE/HPCCG | 0.593 | 1.291 | 2.18× | 1.754 | 2.96× | ok |
| DOE/PENNANT | 1.333 | 2.814 | 2.11× | 4.112 | 3.08× | ok |
| DOE/miniFE | 0.573 | 1.358 | 2.37× | 1.945 | 3.39× | ok |
| Misc-C++-EH/spirit | 0.294 | 0.805 | 2.74× | 1.033 | 3.51× | ok |
| Misc-C++-Large/ray | 0.103 | 0.231 | 2.24× | 0.314 | 3.05× | ok |
| Misc-C++-Large/sphereflake | 0.084 | 0.206 | 2.45× | 0.261 | 3.11× | ok |
| Misc-C++/bigfib | 0.102 | 0.230 | 2.25× | 0.300 | 2.94× | ok |
| Misc-C++/oopack_v1p8 | 0.027 | 0.060 | 2.22× | 0.084 | 3.11× | ok |
| Misc-C++/stepanov_container | 0.146 | 0.344 | 2.36× | 0.472 | 3.23× | ok |
| Misc-C++/stepanov_v1p2 | 0.028 | 0.064 | 2.29× | 0.075 | 2.68× | ok |
| PAQ8p | 0.042 | 0.116 | 2.76× | 0.121 | 2.88× | ok |
| Prolangs-C++/life | 0.003 | 0.010 | — | 0.021 | — | ok |
| Prolangs-C++/ocean | 0.008 | 0.019 | — | 0.030 | — | ok |
| Prolangs-C++/primes | 0.006 | 0.016 | — | 0.025 | — | ok |
| Shootout-C++-EH/except | 0.062 | 0.142 | 2.29× | 0.185 | 2.98× | ok |
| Shootout-C++/ackermann | 0.072 | 0.165 | 2.29× | 0.225 | 3.13× | ok |
| Shootout-C++/ary3 | 0.071 | 0.166 | 2.34× | 0.269 | 3.79× | ok |
| Shootout-C++/fibo | 0.063 | 0.165 | 2.62× | 0.180 | 2.86× | ok |
| Shootout-C++/hash | 0.087 | 0.195 | 2.24× | 0.252 | 2.90× | ok |
| Shootout-C++/hash2 | 0.089 | 0.232 | 2.61× | 0.250 | 2.81× | ok |
| Shootout-C++/heapsort | 0.093 | 0.170 | 1.83× | 0.252 | 2.71× | ok |
| Shootout-C++/lists | 0.069 | 0.156 | 2.26× | 0.200 | 2.90× | ok |
| Shootout-C++/lists1 | 0.092 | 0.179 | 1.95× | 0.212 | 2.30× | ok |
| Shootout-C++/matrix | 0.063 | 0.155 | 2.46× | 0.185 | 2.94× | ok |
| Shootout-C++/methcall | 0.067 | 0.140 | 2.09× | 0.182 | 2.72× | ok |
| Shootout-C++/moments | 0.086 | 0.187 | 2.17× | 0.225 | 2.62× | ok |
| Shootout-C++/random | 0.078 | 0.172 | 2.21× | 0.219 | 2.81× | ok |
| Shootout-C++/sieve | 0.077 | 0.182 | 2.36× | 0.228 | 2.96× | ok |
| SmallPT | 0.026 | 0.049 | 1.88× | 0.075 | 2.88× | ok |
| Stanford/Bubblesort | 0.008 | 0.021 | — | 0.029 | — | ok |
| Stanford/FloatMM | 0.009 | 0.020 | — | 0.029 | — | ok |
| Stanford/Puzzle | 0.009 | 0.022 | — | 0.030 | — | ok |
| Stanford/Treesort | 0.009 | 0.021 | — | 0.030 | — | ok |
| bg/binarytrees/2 | 0.063 | 0.148 | 2.35× | 0.184 | 2.92× | ok |
| bg/fannkuchredux/3 | 0.030 | 0.057 | 1.90× | 0.075 | 2.50× | ok |
| bg/fasta/1 | 0.046 | 0.091 | 1.98× | 0.117 | 2.54× | ok |
| bg/fasta/2 | 0.047 | 0.094 | 2.00× | 0.124 | 2.64× | ok |
| bg/fasta/3 | 0.079 | 0.167 | 2.11× | 0.199 | 2.52× | ok |
| bg/fasta/4 | 0.068 | 0.137 | 2.01× | 0.166 | 2.44× | ok |
| bg/fasta/6 | 0.120 | 0.318 | 2.65× | 0.316 | 2.63× | ok |
| bg/mandelbrot/0 | 0.145 | 0.279 | 1.92× | 0.374 | 2.58× | ok |
| bg/mandelbrot/2 | 0.078 | 0.183 | 2.35× | 0.244 | 3.13× | ok |
| bg/mandelbrot/3 | 0.085 | 0.179 | 2.11× | 0.278 | 3.27× | ok |
| bg/mandelbrot/5 | 0.039 | 0.080 | 2.05× | 0.107 | 2.74× | ok |
| bg/mandelbrot/7 | 0.041 | 0.084 | 2.05× | 0.115 | 2.80× | ok |
| bg/mandelbrot/9 | 0.039 | 0.082 | 2.10× | 0.107 | 2.74× | ok |
| bg/nbody/1 | 0.025 | 0.053 | 2.12× | 0.073 | 2.92× | ok |
| bg/nbody/2 | 0.026 | 0.053 | 2.04× | 0.068 | 2.62× | ok |
| bg/nbody/3 | 0.024 | 0.048 | 2.00× | 0.075 | 3.12× | ok |
| bg/nbody/6 | 0.026 | 0.060 | 2.31× | 0.076 | 2.92× | ok |
| bg/pidigits/4 | 0.123 | 0.258 | 2.10× | 0.367 | 2.98× | ok |
| bg/pidigits/5 | 0.078 | 0.167 | 2.14× | 0.236 | 3.03× | ok |
| bg/revcomp/1 | 0.085 | 0.169 | 1.99× | 0.214 | 2.52× | ok |
| bg/revcomp/5 | 0.071 | 0.154 | 2.17× | 0.185 | 2.61× | ok |
| bg/spectralnorm/1 | 0.099 | 0.232 | 2.34× | 0.325 | 3.28× | ok |
| box2d | 1.289 | 2.802 | 2.17× | 3.250 | 2.52× | ok |
| fmt | 0.410 | 1.068 | 2.60× | 1.574 | 3.84× | ok |
| hexxagon | 0.237 | 0.565 | 2.38× | 0.771 | 3.25× | ok |
| lambda | 0.038 | 0.119 | 3.13× | 0.158 | 4.16× | ok |
| minisat | 0.049 | 0.123 | 2.51× | 0.156 | 3.18× | ok |
| nlohmann-json | 0.318 | 0.826 | 2.60× | 1.321 | 4.15× | ok |
| pugixml | 0.211 | 0.454 | 2.15× | 0.714 | 3.38× | ok |
| pugixml-tests | 2.880 | 7.051 | 2.45× | 9.499 | 3.30× | ok |
| rapidjson | 0.096 | 0.242 | 2.52× | 0.298 | 3.10× | ok |
| re2 | 2.761 | 6.501 | 2.35× | 5.664 | 2.05× | ok |
| re2-test-re2 | 4.086 | 9.870 | 2.42× | 12.829 | 3.14× | ok |
| re2-test-search | 4.010 | 9.101 | 2.27× | 12.346 | 3.08× | ok |
| tramp3d-v4 | 0.616 | 2.047 | 3.32× | 1.540 | 2.50× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
