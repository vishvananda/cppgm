# Public benchmarks: Intel (GitHub)

Measured compiler: [`4ff958f6f`](https://github.com/vishvananda/cppgm/commit/4ff958f6fa4b8a4ac69f0cd4eb2a9fdf6d73b156) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/45850603565) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: Intel(R) Xeon(R) 6975P-C.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.29× | 74 | 2.92× | 74 |
| Compile CPU, `-O0` | 3.28× | 75 | 3.17× | 75 |
| Compile CPU, `-O3` | 4.33× | 79 | 3.84× | 79 |
| Compile peak RSS, `-O0` | 1.42× | 81 | 2.15× | 81 |
| Compile peak RSS, `-O3` | 1.68× | 81 | 2.26× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.11× | 81 | 1.08× | 81 |
| Run CPU, `-O3` | 1.01× | 80 | 1.02× | 80 |
| Run instructions, `-O3` | 1.05× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.959 to 1.026; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.063 | 0.246 | 3.90× | 0.174 | 2.76× | ok |
| Adobe-C++/loop_unroll | 0.052 | 0.559 | 10.75× | 0.170 | 3.27× | ok |
| Adobe-C++/simple_types_constant_folding | 0.058 | 0.635 | 10.95× | 0.204 | 3.52× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.045 | 0.474 | 10.53× | 0.229 | 5.09× | ok |
| Adobe-C++/stepanov_abstraction | 0.037 | 0.169 | 4.57× | 0.111 | 3.00× | ok |
| Adobe-C++/stepanov_vector | 0.062 | 0.268 | 4.32× | 0.233 | 3.76× | ok |
| Bullet | 4.223 | 16.596 | 3.93× | 16.394 | 3.88× | ok |
| CLAMR | 2.424 | 8.552 | 3.53× | 7.046 | 2.91× | ok |
| CoyoteBench/almabench | 0.029 | 0.075 | 2.59× | 0.104 | 3.59× | ok |
| CoyoteBench/fftbench | 0.103 | 0.244 | 2.37× | 0.350 | 3.40× | ok |
| CoyoteBench/huffbench | 0.026 | 0.064 | 2.46× | 0.073 | 2.81× | ok |
| CoyoteBench/lpbench | 0.029 | 0.073 | 2.52× | 0.087 | 3.00× | ok |
| DOE/HACCKernels | 0.116 | 0.289 | 2.49× | 0.303 | 2.61× | ok |
| DOE/HPCCG | 0.677 | 1.540 | 2.27× | 2.217 | 3.27× | ok |
| DOE/PENNANT | 1.431 | 3.625 | 2.53× | 3.904 | 2.73× | ok |
| DOE/miniFE | 0.564 | 1.847 | 3.27× | 1.809 | 3.21× | ok |
| Misc-C++-EH/spirit | 0.433 | 2.770 | 6.40× | 1.536 | 3.55× | ok |
| Misc-C++-Large/ray | 0.092 | 0.238 | 2.59× | 0.271 | 2.95× | ok |
| Misc-C++-Large/sphereflake | 0.080 | 0.198 | 2.48× | 0.254 | 3.17× | ok |
| Misc-C++/bigfib | 0.110 | 0.388 | 3.53× | 0.404 | 3.67× | ok |
| Misc-C++/oopack_v1p8 | 0.029 | 0.088 | 3.03× | 0.095 | 3.28× | ok |
| Misc-C++/stepanov_container | 0.157 | 0.563 | 3.59× | 0.545 | 3.47× | ok |
| Misc-C++/stepanov_v1p2 | 0.027 | 0.117 | 4.33× | 0.102 | 3.78× | ok |
| PAQ8p | 0.065 | 0.446 | 6.86× | 0.228 | 3.51× | ok |
| Prolangs-C++/life | 0.004 | 0.028 | — | 0.022 | — | ok |
| Prolangs-C++/ocean | 0.010 | 0.061 | 6.10× | 0.045 | 4.50× | ok |
| Prolangs-C++/primes | 0.005 | 0.020 | — | 0.021 | — | ok |
| Shootout-C++-EH/except | 0.067 | 0.163 | 2.43× | 0.219 | 3.27× | ok |
| Shootout-C++/ackermann | 0.059 | 0.134 | 2.27× | 0.184 | 3.12× | ok |
| Shootout-C++/ary3 | 0.075 | 0.189 | 2.52× | 0.217 | 2.89× | ok |
| Shootout-C++/fibo | 0.065 | 0.146 | 2.25× | 0.217 | 3.34× | ok |
| Shootout-C++/hash | 0.097 | 0.287 | 2.96× | 0.301 | 3.10× | ok |
| Shootout-C++/hash2 | 0.087 | 0.257 | 2.95× | 0.271 | 3.11× | ok |
| Shootout-C++/heapsort | 0.084 | 0.179 | 2.13× | 0.282 | 3.36× | ok |
| Shootout-C++/lists | 0.067 | 0.181 | 2.70× | 0.210 | 3.13× | ok |
| Shootout-C++/lists1 | 0.074 | 0.235 | 3.18× | 0.228 | 3.08× | ok |
| Shootout-C++/matrix | 0.060 | 0.146 | 2.43× | 0.183 | 3.05× | ok |
| Shootout-C++/methcall | 0.063 | 0.136 | 2.16× | 0.181 | 2.87× | ok |
| Shootout-C++/moments | 0.083 | 0.221 | 2.66× | 0.238 | 2.87× | ok |
| Shootout-C++/random | 0.074 | 0.158 | 2.14× | 0.219 | 2.96× | ok |
| Shootout-C++/sieve | 0.076 | 0.218 | 2.87× | 0.241 | 3.17× | ok |
| SmallPT | 0.029 | 0.079 | 2.72× | 0.079 | 2.72× | ok |
| Stanford/Bubblesort | 0.008 | 0.025 | — | 0.028 | — | ok |
| Stanford/FloatMM | 0.008 | 0.025 | — | 0.030 | — | ok |
| Stanford/Puzzle | 0.009 | 0.032 | — | 0.031 | — | ok |
| Stanford/Treesort | 0.009 | 0.027 | — | 0.029 | — | ok |
| bg/binarytrees/2 | 0.060 | 0.151 | 2.52× | 0.187 | 3.12× | ok |
| bg/fannkuchredux/3 | 0.029 | 0.064 | 2.21× | 0.073 | 2.52× | ok |
| bg/fasta/1 | 0.045 | 0.112 | 2.49× | 0.122 | 2.71× | ok |
| bg/fasta/2 | 0.046 | 0.112 | 2.43× | 0.121 | 2.63× | ok |
| bg/fasta/3 | 0.071 | 0.162 | 2.28× | 0.210 | 2.96× | ok |
| bg/fasta/4 | 0.065 | 0.139 | 2.14× | 0.166 | 2.55× | ok |
| bg/fasta/6 | 0.122 | 0.426 | 3.49× | 0.369 | 3.02× | ok |
| bg/mandelbrot/0 | 0.127 | 0.464 | 3.65× | 0.486 | 3.83× | ok |
| bg/mandelbrot/2 | 0.080 | 0.226 | 2.83× | 0.265 | 3.31× | ok |
| bg/mandelbrot/3 | 0.081 | 0.175 | 2.16× | 0.244 | 3.01× | ok |
| bg/mandelbrot/5 | 0.038 | 0.097 | 2.55× | 0.113 | 2.97× | ok |
| bg/mandelbrot/7 | 0.041 | 0.135 | 3.29× | 0.124 | 3.02× | ok |
| bg/mandelbrot/9 | 0.039 | 0.121 | 3.10× | 0.109 | 2.79× | ok |
| bg/nbody/1 | 0.027 | 0.095 | 3.52× | 0.078 | 2.89× | ok |
| bg/nbody/2 | 0.022 | 0.065 | 2.95× | 0.071 | 3.23× | ok |
| bg/nbody/3 | 0.024 | 0.059 | 2.46× | 0.069 | 2.88× | ok |
| bg/nbody/6 | 0.026 | 0.086 | 3.31× | 0.083 | 3.19× | ok |
| bg/pidigits/4 | 0.102 | 0.280 | 2.75× | 0.363 | 3.56× | ok |
| bg/pidigits/5 | 0.076 | 0.156 | 2.05× | 0.205 | 2.70× | ok |
| bg/revcomp/1 | 0.080 | 0.221 | 2.76× | 0.216 | 2.70× | ok |
| bg/revcomp/5 | 0.070 | 0.184 | 2.63× | 0.216 | 3.09× | ok |
| bg/spectralnorm/1 | 0.112 | 0.242 | 2.16× | 0.280 | 2.50× | ok |
| box2d | 1.342 | 3.779 | 2.82× | 2.888 | 2.15× | ok |
| fmt | 0.483 | 2.334 | 4.83× | 1.974 | 4.09× | ok |
| hexxagon | 0.206 | 0.594 | 2.88× | 0.671 | 3.26× | ok |
| lambda | 0.045 | 0.301 | 6.69× | 0.169 | 3.76× | ok |
| minisat | 0.057 | 0.250 | 4.39× | 0.203 | 3.56× | ok |
| nlohmann-json | 0.380 | 1.807 | 4.76× | 1.658 | 4.36× | ok |
| pugixml | 0.243 | 1.197 | 4.93× | 0.911 | 3.75× | ok |
| pugixml-tests | 3.139 | 14.218 | 4.53× | 11.648 | 3.71× | ok |
| rapidjson | 0.107 | 0.438 | 4.09× | 0.365 | 3.41× | ok |
| re2 | 1.938 | 9.366 | 4.83× | 6.083 | 3.14× | ok |
| re2-test-re2 | 4.177 | 14.355 | 3.44× | 13.643 | 3.27× | ok |
| re2-test-search | 3.648 | 13.109 | 3.59× | 13.737 | 3.77× | ok |
| tramp3d-v4 | 0.920 | 7.246 | 7.88× | 2.343 | 2.55× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.126 | 0.807 | 6.40× | 0.444 | 3.52× | ok |
| Adobe-C++/loop_unroll | 0.464 | 5.312 | 11.45× | 4.091 | 8.82× | ok |
| Adobe-C++/simple_types_constant_folding | 0.247 | 2.973 | 12.04× | 2.200 | 8.91× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.201 | 2.127 | 10.58× | 1.763 | 8.77× | ok |
| Adobe-C++/stepanov_abstraction | 0.091 | 1.022 | 11.23× | 0.511 | 5.62× | ok |
| Adobe-C++/stepanov_vector | 0.111 | 1.185 | 10.68× | 0.631 | 5.68× | ok |
| Bullet | 6.279 | 35.250 | 5.61× | 25.368 | 4.04× | ok |
| CLAMR | 4.003 | 22.522 | 5.63× | 16.824 | 4.20× | ok |
| CoyoteBench/almabench | 0.031 | 0.170 | 5.48× | 0.109 | 3.52× | ok |
| CoyoteBench/fftbench | 0.130 | 0.401 | 3.08× | 0.434 | 3.34× | ok |
| CoyoteBench/huffbench | 0.040 | 0.188 | 4.70× | 0.124 | 3.10× | ok |
| CoyoteBench/lpbench | 0.039 | 0.187 | 4.79× | 0.203 | 5.21× | ok |
| DOE/HACCKernels | 0.107 | 0.406 | 3.79× | 0.377 | 3.52× | ok |
| DOE/HPCCG | 0.679 | 2.206 | 3.25× | 2.600 | 3.83× | ok |
| DOE/PENNANT | 1.705 | 5.963 | 3.50× | 5.523 | 3.24× | ok |
| DOE/miniFE | 0.791 | 3.827 | 4.84× | 2.982 | 3.77× | ok |
| Misc-C++-EH/spirit | 0.603 | 3.737 | 6.20× | 2.795 | 4.64× | ok |
| Misc-C++-Large/ray | 0.100 | 0.434 | 4.34× | 0.398 | 3.98× | ok |
| Misc-C++-Large/sphereflake | 0.101 | 0.685 | 6.78× | 0.373 | 3.69× | ok |
| Misc-C++/bigfib | 0.147 | 0.559 | 3.80× | 0.546 | 3.71× | ok |
| Misc-C++/oopack_v1p8 | 0.036 | 0.183 | 5.08× | 0.173 | 4.81× | ok |
| Misc-C++/stepanov_container | 0.216 | 0.898 | 4.16× | 0.916 | 4.24× | ok |
| Misc-C++/stepanov_v1p2 | 0.039 | 0.193 | 4.95× | 0.165 | 4.23× | ok |
| PAQ8p | 0.318 | 3.883 | 12.21× | 1.651 | 5.19× | ok |
| Prolangs-C++/life | 0.009 | 0.092 | — | 0.059 | — | ok |
| Prolangs-C++/ocean | 0.020 | 0.202 | 10.10× | 0.116 | 5.80× | ok |
| Prolangs-C++/primes | 0.006 | 0.030 | — | 0.027 | — | ok |
| Shootout-C++-EH/except | 0.067 | 0.193 | 2.88× | 0.229 | 3.42× | ok |
| Shootout-C++/ackermann | 0.065 | 0.174 | 2.68× | 0.221 | 3.40× | ok |
| Shootout-C++/ary3 | 0.076 | 0.237 | 3.12× | 0.238 | 3.13× | ok |
| Shootout-C++/fibo | 0.071 | 0.198 | 2.79× | 0.243 | 3.42× | ok |
| Shootout-C++/hash | 0.114 | 0.385 | 3.38× | 0.439 | 3.85× | ok |
| Shootout-C++/hash2 | 0.114 | 0.382 | 3.35× | 0.397 | 3.48× | ok |
| Shootout-C++/heapsort | 0.094 | 0.219 | 2.33× | 0.248 | 2.64× | ok |
| Shootout-C++/lists | 0.075 | 0.213 | 2.84× | 0.236 | 3.15× | ok |
| Shootout-C++/lists1 | 0.082 | 0.285 | 3.48× | 0.263 | 3.21× | ok |
| Shootout-C++/matrix | 0.068 | 0.194 | 2.85× | 0.275 | 4.04× | ok |
| Shootout-C++/methcall | 0.065 | 0.181 | 2.78× | 0.209 | 3.22× | ok |
| Shootout-C++/moments | 0.094 | 0.281 | 2.99× | 0.297 | 3.16× | ok |
| Shootout-C++/random | 0.079 | 0.183 | 2.32× | 0.246 | 3.11× | ok |
| Shootout-C++/sieve | 0.091 | 0.237 | 2.60× | 0.268 | 2.95× | ok |
| SmallPT | 0.039 | 0.273 | 7.00× | 0.154 | 3.95× | ok |
| Stanford/Bubblesort | 0.010 | 0.050 | 5.00× | 0.042 | 4.20× | ok |
| Stanford/FloatMM | 0.012 | 0.060 | 5.00× | 0.066 | 5.50× | ok |
| Stanford/Puzzle | 0.020 | 0.116 | 5.80× | 0.108 | 5.40× | ok |
| Stanford/Treesort | 0.013 | 0.080 | 6.15× | 0.047 | 3.62× | ok |
| bg/binarytrees/2 | 0.065 | 0.394 | 6.06× | 0.205 | 3.15× | ok |
| bg/fannkuchredux/3 | 0.033 | 0.110 | 3.33× | 0.106 | 3.21× | ok |
| bg/fasta/1 | 0.053 | 0.148 | 2.79× | 0.161 | 3.04× | ok |
| bg/fasta/2 | 0.054 | 0.161 | 2.98× | 0.160 | 2.96× | ok |
| bg/fasta/3 | 0.076 | 0.216 | 2.84× | 0.301 | 3.96× | ok |
| bg/fasta/4 | 0.070 | 0.170 | 2.43× | 0.253 | 3.61× | ok |
| bg/fasta/6 | 0.142 | 0.416 | 2.93× | 0.430 | 3.03× | ok |
| bg/mandelbrot/0 | 0.169 | 0.634 | 3.75× | 0.639 | 3.78× | ok |
| bg/mandelbrot/2 | 0.090 | 0.250 | 2.78× | 0.276 | 3.07× | ok |
| bg/mandelbrot/3 | 0.082 | 0.225 | 2.74× | 0.264 | 3.22× | ok |
| bg/mandelbrot/5 | 0.050 | 0.132 | 2.64× | 0.148 | 2.96× | ok |
| bg/mandelbrot/7 | 0.051 | 0.200 | 3.92× | 0.157 | 3.08× | ok |
| bg/mandelbrot/9 | 0.056 | 0.170 | 3.04× | 0.168 | 3.00× | ok |
| bg/nbody/1 | 0.040 | 0.138 | 3.45× | 0.148 | 3.70× | ok |
| bg/nbody/2 | 0.032 | 0.112 | 3.50× | 0.114 | 3.56× | ok |
| bg/nbody/3 | 0.030 | 0.102 | 3.40× | 0.100 | 3.33× | ok |
| bg/nbody/6 | 0.039 | 0.164 | 4.21× | 0.163 | 4.18× | ok |
| bg/pidigits/4 | 0.109 | 0.320 | 2.94× | 0.393 | 3.61× | ok |
| bg/pidigits/5 | 0.079 | 0.190 | 2.41× | 0.225 | 2.85× | ok |
| bg/revcomp/1 | 0.076 | 0.225 | 2.96× | 0.288 | 3.79× | ok |
| bg/revcomp/5 | 0.082 | 0.228 | 2.78× | 0.269 | 3.28× | ok |
| bg/spectralnorm/1 | 0.103 | 0.319 | 3.10× | 0.344 | 3.34× | ok |
| box2d | 1.682 | 7.139 | 4.24× | 5.412 | 3.22× | ok |
| fmt | 0.934 | 4.889 | 5.23× | 3.507 | 3.75× | ok |
| hexxagon | 0.253 | 0.992 | 3.92× | 1.008 | 3.98× | ok |
| lambda | 0.108 | 0.990 | 9.17× | 0.476 | 4.41× | ok |
| minisat | 0.140 | 0.975 | 6.96× | 0.638 | 4.56× | ok |
| nlohmann-json | 0.766 | 3.381 | 4.41× | 2.819 | 3.68× | ok |
| pugixml | 0.656 | 5.319 | 8.11× | 3.569 | 5.44× | ok |
| pugixml-tests | 4.764 | 33.460 | 7.02× | 23.551 | 4.94× | ok |
| rapidjson | 0.221 | 1.120 | 5.07× | 0.712 | 3.22× | ok |
| re2 | 2.877 | 17.245 | 5.99× | 9.317 | 3.24× | ok |
| re2-test-re2 | 5.216 | 25.229 | 4.84× | 20.274 | 3.89× | ok |
| re2-test-search | 5.310 | 23.109 | 4.35× | 19.465 | 3.67× | ok |
| tramp3d-v4 | 3.167 | 19.361 | 6.11× | 12.923 | 4.08× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.058 | 0.133 | 2.29× | 0.153 | 2.64× | ok |
| Adobe-C++/loop_unroll | 0.037 | 0.097 | 2.62× | 0.099 | 2.68× | ok |
| Adobe-C++/simple_types_constant_folding | 0.039 | 0.099 | 2.54× | 0.104 | 2.67× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.033 | 0.071 | 2.15× | 0.118 | 3.58× | ok |
| Adobe-C++/stepanov_abstraction | 0.030 | 0.066 | 2.20× | 0.086 | 2.87× | ok |
| Adobe-C++/stepanov_vector | 0.054 | 0.118 | 2.19× | 0.192 | 3.56× | ok |
| Bullet | 3.784 | 9.510 | 2.51× | 14.094 | 3.72× | ok |
| CLAMR | 2.041 | 4.425 | 2.17× | 5.648 | 2.77× | ok |
| CoyoteBench/almabench | 0.030 | 0.062 | 2.07× | 0.094 | 3.13× | ok |
| CoyoteBench/fftbench | 0.103 | 0.217 | 2.11× | 0.321 | 3.12× | ok |
| CoyoteBench/huffbench | 0.026 | 0.054 | 2.08× | 0.071 | 2.73× | ok |
| CoyoteBench/lpbench | 0.029 | 0.060 | 2.07× | 0.080 | 2.76× | ok |
| DOE/HACCKernels | 0.113 | 0.259 | 2.29× | 0.281 | 2.49× | ok |
| DOE/HPCCG | 0.661 | 1.316 | 1.99× | 2.028 | 3.07× | ok |
| DOE/PENNANT | 1.318 | 2.744 | 2.08× | 3.971 | 3.01× | ok |
| DOE/miniFE | 0.505 | 1.219 | 2.41× | 1.548 | 3.07× | ok |
| Misc-C++-EH/spirit | 0.308 | 0.924 | 3.00× | 0.997 | 3.24× | ok |
| Misc-C++-Large/ray | 0.092 | 0.196 | 2.13× | 0.247 | 2.68× | ok |
| Misc-C++-Large/sphereflake | 0.078 | 0.172 | 2.21× | 0.238 | 3.05× | ok |
| Misc-C++/bigfib | 0.097 | 0.254 | 2.62× | 0.355 | 3.66× | ok |
| Misc-C++/oopack_v1p8 | 0.027 | 0.062 | 2.30× | 0.081 | 3.00× | ok |
| Misc-C++/stepanov_container | 0.141 | 0.329 | 2.33× | 0.457 | 3.24× | ok |
| Misc-C++/stepanov_v1p2 | 0.026 | 0.062 | 2.38× | 0.079 | 3.04× | ok |
| PAQ8p | 0.043 | 0.116 | 2.70× | 0.133 | 3.09× | ok |
| Prolangs-C++/life | 0.003 | 0.009 | — | 0.017 | — | ok |
| Prolangs-C++/ocean | 0.008 | 0.020 | — | 0.031 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.014 | — | 0.021 | — | ok |
| Shootout-C++-EH/except | 0.068 | 0.159 | 2.34× | 0.212 | 3.12× | ok |
| Shootout-C++/ackermann | 0.061 | 0.138 | 2.26× | 0.180 | 2.95× | ok |
| Shootout-C++/ary3 | 0.075 | 0.168 | 2.24× | 0.204 | 2.72× | ok |
| Shootout-C++/fibo | 0.067 | 0.158 | 2.36× | 0.212 | 3.16× | ok |
| Shootout-C++/hash | 0.095 | 0.220 | 2.32× | 0.287 | 3.02× | ok |
| Shootout-C++/hash2 | 0.084 | 0.190 | 2.26× | 0.244 | 2.90× | ok |
| Shootout-C++/heapsort | 0.079 | 0.182 | 2.30× | 0.270 | 3.42× | ok |
| Shootout-C++/lists | 0.066 | 0.152 | 2.30× | 0.194 | 2.94× | ok |
| Shootout-C++/lists1 | 0.073 | 0.189 | 2.59× | 0.207 | 2.84× | ok |
| Shootout-C++/matrix | 0.061 | 0.149 | 2.44× | 0.178 | 2.92× | ok |
| Shootout-C++/methcall | 0.065 | 0.135 | 2.08× | 0.177 | 2.72× | ok |
| Shootout-C++/moments | 0.084 | 0.214 | 2.55× | 0.218 | 2.60× | ok |
| Shootout-C++/random | 0.076 | 0.157 | 2.07× | 0.214 | 2.82× | ok |
| Shootout-C++/sieve | 0.075 | 0.178 | 2.37× | 0.223 | 2.97× | ok |
| SmallPT | 0.028 | 0.051 | 1.82× | 0.074 | 2.64× | ok |
| Stanford/Bubblesort | 0.009 | 0.022 | — | 0.029 | — | ok |
| Stanford/FloatMM | 0.008 | 0.021 | — | 0.030 | — | ok |
| Stanford/Puzzle | 0.009 | 0.022 | — | 0.030 | — | ok |
| Stanford/Treesort | 0.009 | 0.021 | — | 0.029 | — | ok |
| bg/binarytrees/2 | 0.062 | 0.141 | 2.27× | 0.182 | 2.94× | ok |
| bg/fannkuchredux/3 | 0.030 | 0.055 | 1.83× | 0.070 | 2.33× | ok |
| bg/fasta/1 | 0.045 | 0.089 | 1.98× | 0.115 | 2.56× | ok |
| bg/fasta/2 | 0.045 | 0.091 | 2.02× | 0.113 | 2.51× | ok |
| bg/fasta/3 | 0.073 | 0.155 | 2.12× | 0.206 | 2.82× | ok |
| bg/fasta/4 | 0.066 | 0.132 | 2.00× | 0.161 | 2.44× | ok |
| bg/fasta/6 | 0.116 | 0.296 | 2.55× | 0.326 | 2.81× | ok |
| bg/mandelbrot/0 | 0.130 | 0.322 | 2.48× | 0.369 | 2.84× | ok |
| bg/mandelbrot/2 | 0.079 | 0.175 | 2.22× | 0.287 | 3.63× | ok |
| bg/mandelbrot/3 | 0.090 | 0.169 | 1.88× | 0.236 | 2.62× | ok |
| bg/mandelbrot/5 | 0.038 | 0.079 | 2.08× | 0.105 | 2.76× | ok |
| bg/mandelbrot/7 | 0.040 | 0.087 | 2.17× | 0.112 | 2.80× | ok |
| bg/mandelbrot/9 | 0.042 | 0.079 | 1.88× | 0.098 | 2.33× | ok |
| bg/nbody/1 | 0.026 | 0.055 | 2.12× | 0.070 | 2.69× | ok |
| bg/nbody/2 | 0.022 | 0.053 | 2.41× | 0.069 | 3.14× | ok |
| bg/nbody/3 | 0.025 | 0.047 | 1.88× | 0.067 | 2.68× | ok |
| bg/nbody/6 | 0.026 | 0.049 | 1.88× | 0.072 | 2.77× | ok |
| bg/pidigits/4 | 0.104 | 0.260 | 2.50× | 0.347 | 3.34× | ok |
| bg/pidigits/5 | 0.077 | 0.151 | 1.96× | 0.197 | 2.56× | ok |
| bg/revcomp/1 | 0.081 | 0.168 | 2.07× | 0.197 | 2.43× | ok |
| bg/revcomp/5 | 0.067 | 0.164 | 2.45× | 0.219 | 3.27× | ok |
| bg/spectralnorm/1 | 0.107 | 0.226 | 2.11× | 0.266 | 2.49× | ok |
| box2d | 1.309 | 2.540 | 1.94× | 2.552 | 1.95× | ok |
| fmt | 0.418 | 1.009 | 2.41× | 1.509 | 3.61× | ok |
| hexxagon | 0.205 | 0.541 | 2.64× | 0.636 | 3.10× | ok |
| lambda | 0.035 | 0.117 | 3.34× | 0.126 | 3.60× | ok |
| minisat | 0.048 | 0.109 | 2.27× | 0.153 | 3.19× | ok |
| nlohmann-json | 0.308 | 0.809 | 2.63× | 1.230 | 3.99× | ok |
| pugixml | 0.191 | 0.441 | 2.31× | 0.670 | 3.51× | ok |
| pugixml-tests | 2.627 | 6.898 | 2.63× | 8.829 | 3.36× | ok |
| rapidjson | 0.085 | 0.223 | 2.62× | 0.280 | 3.29× | ok |
| re2 | 2.426 | 5.873 | 2.42× | 5.210 | 2.15× | ok |
| re2-test-re2 | 3.777 | 9.320 | 2.47× | 11.744 | 3.11× | ok |
| re2-test-search | 3.384 | 8.827 | 2.61× | 11.917 | 3.52× | ok |
| tramp3d-v4 | 0.571 | 2.067 | 3.62× | 1.363 | 2.39× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
