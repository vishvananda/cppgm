# Public benchmarks: Intel (GitHub)

Measured compiler: [`7584274b4`](https://github.com/vishvananda/cppgm/commit/7584274b4d275fb41f7c5d064e751e5918e8e421) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/45617981312) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: Intel(R) Xeon(R) 6975P-C.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.32× | 74 | 2.97× | 74 |
| Compile CPU, `-O0` | 3.23× | 74 | 3.19× | 74 |
| Compile CPU, `-O3` | 4.35× | 80 | 3.89× | 80 |
| Compile peak RSS, `-O0` | 1.43× | 81 | 2.18× | 81 |
| Compile peak RSS, `-O3` | 1.70× | 81 | 2.29× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.12× | 81 | 1.07× | 81 |
| Run CPU, `-O3` | 1.01× | 80 | 1.02× | 80 |
| Run instructions, `-O3` | 1.05× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.902 to 1.063; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.063 | 0.257 | 4.08× | 0.172 | 2.73× | ok |
| Adobe-C++/loop_unroll | 0.047 | 0.566 | 12.04× | 0.171 | 3.64× | ok |
| Adobe-C++/simple_types_constant_folding | 0.049 | 0.664 | 13.55× | 0.206 | 4.20× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.046 | 0.474 | 10.30× | 0.181 | 3.93× | ok |
| Adobe-C++/stepanov_abstraction | 0.037 | 0.183 | 4.95× | 0.111 | 3.00× | ok |
| Adobe-C++/stepanov_vector | 0.077 | 0.268 | 3.48× | 0.239 | 3.10× | ok |
| Bullet | 4.305 | 17.224 | 4.00× | 15.080 | 3.50× | ok |
| CLAMR | 2.507 | 8.506 | 3.39× | 7.060 | 2.82× | ok |
| CoyoteBench/almabench | 0.026 | 0.074 | 2.85× | 0.079 | 3.04× | ok |
| CoyoteBench/fftbench | 0.095 | 0.240 | 2.53× | 0.306 | 3.22× | ok |
| CoyoteBench/huffbench | 0.026 | 0.066 | 2.54× | 0.085 | 3.27× | ok |
| CoyoteBench/lpbench | 0.026 | 0.069 | 2.65× | 0.076 | 2.92× | ok |
| DOE/HACCKernels | 0.098 | 0.241 | 2.46× | 0.308 | 3.14× | ok |
| DOE/HPCCG | 0.665 | 1.566 | 2.35× | 2.102 | 3.16× | ok |
| DOE/PENNANT | 1.250 | 3.695 | 2.96× | 3.737 | 2.99× | ok |
| DOE/miniFE | 0.590 | 2.197 | 3.72× | 1.981 | 3.36× | ok |
| Misc-C++-EH/spirit | 0.356 | 2.396 | 6.73× | 1.958 | 5.50× | ok |
| Misc-C++-Large/ray | 0.090 | 0.267 | 2.97× | 0.295 | 3.28× | ok |
| Misc-C++-Large/sphereflake | 0.086 | 0.217 | 2.52× | 0.291 | 3.38× | ok |
| Misc-C++/bigfib | 0.119 | 0.352 | 2.96× | 0.409 | 3.44× | ok |
| Misc-C++/oopack_v1p8 | 0.028 | 0.082 | 2.93× | 0.091 | 3.25× | ok |
| Misc-C++/stepanov_container | 0.158 | 0.569 | 3.60× | 0.575 | 3.64× | ok |
| Misc-C++/stepanov_v1p2 | 0.028 | 0.113 | 4.04× | 0.083 | 2.96× | ok |
| PAQ8p | 0.062 | 0.437 | 7.05× | 0.208 | 3.35× | ok |
| Prolangs-C++/life | 0.004 | 0.031 | — | 0.027 | — | ok |
| Prolangs-C++/ocean | 0.009 | 0.057 | — | 0.046 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.022 | — | 0.024 | — | ok |
| Shootout-C++-EH/except | 0.064 | 0.145 | 2.27× | 0.200 | 3.12× | ok |
| Shootout-C++/ackermann | 0.061 | 0.149 | 2.44× | 0.199 | 3.26× | ok |
| Shootout-C++/ary3 | 0.087 | 0.183 | 2.10× | 0.266 | 3.06× | ok |
| Shootout-C++/fibo | 0.060 | 0.143 | 2.38× | 0.199 | 3.32× | ok |
| Shootout-C++/hash | 0.092 | 0.271 | 2.95× | 0.287 | 3.12× | ok |
| Shootout-C++/hash2 | 0.106 | 0.290 | 2.74× | 0.284 | 2.68× | ok |
| Shootout-C++/heapsort | 0.076 | 0.178 | 2.34× | 0.234 | 3.08× | ok |
| Shootout-C++/lists | 0.069 | 0.189 | 2.74× | 0.222 | 3.22× | ok |
| Shootout-C++/lists1 | 0.078 | 0.205 | 2.63× | 0.232 | 2.97× | ok |
| Shootout-C++/matrix | 0.058 | 0.138 | 2.38× | 0.188 | 3.24× | ok |
| Shootout-C++/methcall | 0.062 | 0.153 | 2.47× | 0.188 | 3.03× | ok |
| Shootout-C++/moments | 0.085 | 0.235 | 2.76× | 0.250 | 2.94× | ok |
| Shootout-C++/random | 0.076 | 0.167 | 2.20× | 0.223 | 2.93× | ok |
| Shootout-C++/sieve | 0.079 | 0.217 | 2.75× | 0.256 | 3.24× | ok |
| SmallPT | 0.027 | 0.083 | 3.07× | 0.078 | 2.89× | ok |
| Stanford/Bubblesort | 0.008 | 0.024 | — | 0.027 | — | ok |
| Stanford/FloatMM | 0.008 | 0.025 | — | 0.028 | — | ok |
| Stanford/Puzzle | 0.009 | 0.031 | — | 0.029 | — | ok |
| Stanford/Treesort | 0.008 | 0.026 | — | 0.029 | — | ok |
| bg/binarytrees/2 | 0.059 | 0.144 | 2.44× | 0.189 | 3.20× | ok |
| bg/fannkuchredux/3 | 0.029 | 0.068 | 2.34× | 0.079 | 2.72× | ok |
| bg/fasta/1 | 0.046 | 0.113 | 2.46× | 0.126 | 2.74× | ok |
| bg/fasta/2 | 0.045 | 0.130 | 2.89× | 0.155 | 3.44× | ok |
| bg/fasta/3 | 0.073 | 0.167 | 2.29× | 0.210 | 2.88× | ok |
| bg/fasta/4 | 0.072 | 0.138 | 1.92× | 0.173 | 2.40× | ok |
| bg/fasta/6 | 0.138 | 0.329 | 2.38× | 0.414 | 3.00× | ok |
| bg/mandelbrot/0 | 0.134 | 0.469 | 3.50× | 0.427 | 3.19× | ok |
| bg/mandelbrot/2 | 0.080 | 0.212 | 2.65× | 0.243 | 3.04× | ok |
| bg/mandelbrot/3 | 0.087 | 0.199 | 2.29× | 0.283 | 3.25× | ok |
| bg/mandelbrot/5 | 0.040 | 0.108 | 2.70× | 0.121 | 3.02× | ok |
| bg/mandelbrot/7 | 0.048 | 0.134 | 2.79× | 0.130 | 2.71× | ok |
| bg/mandelbrot/9 | 0.038 | 0.119 | 3.13× | 0.114 | 3.00× | ok |
| bg/nbody/1 | 0.028 | 0.096 | 3.43× | 0.078 | 2.79× | ok |
| bg/nbody/2 | 0.025 | 0.065 | 2.60× | 0.070 | 2.80× | ok |
| bg/nbody/3 | 0.025 | 0.061 | 2.44× | 0.072 | 2.88× | ok |
| bg/nbody/6 | 0.027 | 0.097 | 3.59× | 0.081 | 3.00× | ok |
| bg/pidigits/4 | 0.111 | 0.282 | 2.54× | 0.366 | 3.30× | ok |
| bg/pidigits/5 | 0.071 | 0.162 | 2.28× | 0.250 | 3.52× | ok |
| bg/revcomp/1 | 0.076 | 0.215 | 2.83× | 0.232 | 3.05× | ok |
| bg/revcomp/5 | 0.075 | 0.183 | 2.44× | 0.206 | 2.75× | ok |
| bg/spectralnorm/1 | 0.104 | 0.241 | 2.32× | 0.348 | 3.35× | ok |
| box2d | 1.294 | 3.940 | 3.04× | 4.744 | 3.67× | ok |
| fmt | 0.498 | 2.409 | 4.84× | 1.896 | 3.81× | ok |
| hexxagon | 0.227 | 0.585 | 2.58× | 0.713 | 3.14× | ok |
| lambda | 0.049 | 0.295 | 6.02× | 0.187 | 3.82× | ok |
| minisat | 0.052 | 0.254 | 4.88× | 0.201 | 3.87× | ok |
| nlohmann-json | 0.375 | 1.720 | 4.59× | 1.701 | 4.54× | ok |
| pugixml | 0.245 | 1.326 | 5.41× | 0.975 | 3.98× | ok |
| pugixml-tests | 2.867 | 14.439 | 5.04× | 11.857 | 4.14× | ok |
| rapidjson | 0.111 | 0.463 | 4.17× | 0.382 | 3.44× | ok |
| re2 | 2.954 | 10.617 | 3.59× | 6.609 | 2.24× | ok |
| re2-test-re2 | 4.377 | 14.889 | 3.40× | 14.456 | 3.30× | ok |
| re2-test-search | 4.434 | 13.359 | 3.01× | 14.688 | 3.31× | ok |
| tramp3d-v4 | 1.019 | 5.877 | 5.77× | 2.600 | 2.55× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.119 | 0.794 | 6.67× | 0.467 | 3.92× | ok |
| Adobe-C++/loop_unroll | 0.440 | 5.289 | 12.02× | 4.044 | 9.19× | ok |
| Adobe-C++/simple_types_constant_folding | 0.249 | 3.049 | 12.24× | 2.244 | 9.01× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.217 | 2.151 | 9.91× | 1.815 | 8.36× | ok |
| Adobe-C++/stepanov_abstraction | 0.094 | 0.960 | 10.21× | 0.447 | 4.76× | ok |
| Adobe-C++/stepanov_vector | 0.106 | 1.414 | 13.34× | 0.609 | 5.75× | ok |
| Bullet | 5.879 | 35.943 | 6.11× | 26.424 | 4.49× | ok |
| CLAMR | 4.012 | 22.295 | 5.56× | 16.423 | 4.09× | ok |
| CoyoteBench/almabench | 0.033 | 0.166 | 5.03× | 0.116 | 3.52× | ok |
| CoyoteBench/fftbench | 0.117 | 0.402 | 3.44× | 0.415 | 3.55× | ok |
| CoyoteBench/huffbench | 0.038 | 0.200 | 5.26× | 0.132 | 3.47× | ok |
| CoyoteBench/lpbench | 0.035 | 0.171 | 4.89× | 0.183 | 5.23× | ok |
| DOE/HACCKernels | 0.111 | 0.342 | 3.08× | 0.366 | 3.30× | ok |
| DOE/HPCCG | 0.722 | 2.480 | 3.43× | 2.236 | 3.10× | ok |
| DOE/PENNANT | 1.594 | 5.809 | 3.64× | 5.231 | 3.28× | ok |
| DOE/miniFE | 0.831 | 4.059 | 4.88× | 3.506 | 4.22× | ok |
| Misc-C++-EH/spirit | 0.662 | 3.230 | 4.88× | 3.302 | 4.99× | ok |
| Misc-C++-Large/ray | 0.104 | 0.437 | 4.20× | 0.352 | 3.38× | ok |
| Misc-C++-Large/sphereflake | 0.108 | 0.756 | 7.00× | 0.340 | 3.15× | ok |
| Misc-C++/bigfib | 0.148 | 0.508 | 3.43× | 0.545 | 3.68× | ok |
| Misc-C++/oopack_v1p8 | 0.036 | 0.166 | 4.61× | 0.170 | 4.72× | ok |
| Misc-C++/stepanov_container | 0.195 | 0.885 | 4.54× | 0.853 | 4.37× | ok |
| Misc-C++/stepanov_v1p2 | 0.040 | 0.205 | 5.12× | 0.173 | 4.32× | ok |
| PAQ8p | 0.312 | 3.739 | 11.98× | 1.553 | 4.98× | ok |
| Prolangs-C++/life | 0.010 | 0.101 | 10.10× | 0.065 | 6.50× | ok |
| Prolangs-C++/ocean | 0.019 | 0.191 | 10.05× | 0.116 | 6.11× | ok |
| Prolangs-C++/primes | 0.007 | 0.033 | — | 0.034 | — | ok |
| Shootout-C++-EH/except | 0.064 | 0.178 | 2.78× | 0.214 | 3.34× | ok |
| Shootout-C++/ackermann | 0.067 | 0.191 | 2.85× | 0.208 | 3.10× | ok |
| Shootout-C++/ary3 | 0.085 | 0.224 | 2.64× | 0.278 | 3.27× | ok |
| Shootout-C++/fibo | 0.072 | 0.182 | 2.53× | 0.206 | 2.86× | ok |
| Shootout-C++/hash | 0.110 | 0.360 | 3.27× | 0.402 | 3.65× | ok |
| Shootout-C++/hash2 | 0.143 | 0.448 | 3.13× | 0.418 | 2.92× | ok |
| Shootout-C++/heapsort | 0.082 | 0.211 | 2.57× | 0.245 | 2.99× | ok |
| Shootout-C++/lists | 0.094 | 0.217 | 2.31× | 0.247 | 2.63× | ok |
| Shootout-C++/lists1 | 0.087 | 0.248 | 2.85× | 0.273 | 3.14× | ok |
| Shootout-C++/matrix | 0.067 | 0.189 | 2.82× | 0.280 | 4.18× | ok |
| Shootout-C++/methcall | 0.069 | 0.182 | 2.64× | 0.214 | 3.10× | ok |
| Shootout-C++/moments | 0.097 | 0.288 | 2.97× | 0.307 | 3.16× | ok |
| Shootout-C++/random | 0.080 | 0.191 | 2.39× | 0.234 | 2.92× | ok |
| Shootout-C++/sieve | 0.087 | 0.239 | 2.75× | 0.280 | 3.22× | ok |
| SmallPT | 0.038 | 0.286 | 7.53× | 0.153 | 4.03× | ok |
| Stanford/Bubblesort | 0.010 | 0.048 | 4.80× | 0.043 | 4.30× | ok |
| Stanford/FloatMM | 0.012 | 0.058 | 4.83× | 0.063 | 5.25× | ok |
| Stanford/Puzzle | 0.020 | 0.115 | 5.75× | 0.106 | 5.30× | ok |
| Stanford/Treesort | 0.013 | 0.078 | 6.00× | 0.049 | 3.77× | ok |
| bg/binarytrees/2 | 0.066 | 0.388 | 5.88× | 0.208 | 3.15× | ok |
| bg/fannkuchredux/3 | 0.035 | 0.113 | 3.23× | 0.109 | 3.11× | ok |
| bg/fasta/1 | 0.053 | 0.152 | 2.87× | 0.196 | 3.70× | ok |
| bg/fasta/2 | 0.056 | 0.174 | 3.11× | 0.192 | 3.43× | ok |
| bg/fasta/3 | 0.082 | 0.233 | 2.84× | 0.266 | 3.24× | ok |
| bg/fasta/4 | 0.074 | 0.177 | 2.39× | 0.196 | 2.65× | ok |
| bg/fasta/6 | 0.137 | 0.408 | 2.98× | 0.485 | 3.54× | ok |
| bg/mandelbrot/0 | 0.171 | 0.631 | 3.69× | 0.685 | 4.01× | ok |
| bg/mandelbrot/2 | 0.087 | 0.247 | 2.84× | 0.358 | 4.11× | ok |
| bg/mandelbrot/3 | 0.095 | 0.223 | 2.35× | 0.293 | 3.08× | ok |
| bg/mandelbrot/5 | 0.048 | 0.136 | 2.83× | 0.176 | 3.67× | ok |
| bg/mandelbrot/7 | 0.051 | 0.209 | 4.10× | 0.170 | 3.33× | ok |
| bg/mandelbrot/9 | 0.047 | 0.191 | 4.06× | 0.158 | 3.36× | ok |
| bg/nbody/1 | 0.041 | 0.149 | 3.63× | 0.172 | 4.20× | ok |
| bg/nbody/2 | 0.031 | 0.125 | 4.03× | 0.110 | 3.55× | ok |
| bg/nbody/3 | 0.030 | 0.106 | 3.53× | 0.102 | 3.40× | ok |
| bg/nbody/6 | 0.040 | 0.158 | 3.95× | 0.188 | 4.70× | ok |
| bg/pidigits/4 | 0.117 | 0.323 | 2.76× | 0.402 | 3.44× | ok |
| bg/pidigits/5 | 0.081 | 0.196 | 2.42× | 0.273 | 3.37× | ok |
| bg/revcomp/1 | 0.082 | 0.230 | 2.80× | 0.273 | 3.33× | ok |
| bg/revcomp/5 | 0.083 | 0.226 | 2.72× | 0.239 | 2.88× | ok |
| bg/spectralnorm/1 | 0.115 | 0.339 | 2.95× | 0.393 | 3.42× | ok |
| box2d | 1.727 | 6.917 | 4.01× | 6.468 | 3.75× | ok |
| fmt | 0.962 | 5.180 | 5.38× | 3.928 | 4.08× | ok |
| hexxagon | 0.266 | 1.037 | 3.90× | 0.970 | 3.65× | ok |
| lambda | 0.109 | 1.107 | 10.16× | 0.491 | 4.50× | ok |
| minisat | 0.139 | 0.893 | 6.42× | 0.644 | 4.63× | ok |
| nlohmann-json | 0.737 | 3.221 | 4.37× | 2.934 | 3.98× | ok |
| pugixml | 0.647 | 5.431 | 8.39× | 3.304 | 5.11× | ok |
| pugixml-tests | 4.324 | 33.154 | 7.67× | 23.346 | 5.40× | ok |
| rapidjson | 0.239 | 1.180 | 4.94× | 0.739 | 3.09× | ok |
| re2 | 2.973 | 17.636 | 5.93× | 9.891 | 3.33× | ok |
| re2-test-re2 | 5.625 | 25.351 | 4.51× | 20.966 | 3.73× | ok |
| re2-test-search | 5.616 | 23.459 | 4.18× | 20.428 | 3.64× | ok |
| tramp3d-v4 | 3.042 | 16.882 | 5.55× | 13.757 | 4.52× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.059 | 0.133 | 2.25× | 0.147 | 2.49× | ok |
| Adobe-C++/loop_unroll | 0.033 | 0.095 | 2.88× | 0.100 | 3.03× | ok |
| Adobe-C++/simple_types_constant_folding | 0.035 | 0.105 | 3.00× | 0.106 | 3.03× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.034 | 0.093 | 2.74× | 0.100 | 2.94× | ok |
| Adobe-C++/stepanov_abstraction | 0.031 | 0.074 | 2.39× | 0.087 | 2.81× | ok |
| Adobe-C++/stepanov_vector | 0.063 | 0.120 | 1.90× | 0.192 | 3.05× | ok |
| Bullet | 3.993 | 9.555 | 2.39× | 12.215 | 3.06× | ok |
| CLAMR | 2.189 | 4.461 | 2.04× | 5.660 | 2.59× | ok |
| CoyoteBench/almabench | 0.026 | 0.062 | 2.38× | 0.074 | 2.85× | ok |
| CoyoteBench/fftbench | 0.094 | 0.212 | 2.26× | 0.283 | 3.01× | ok |
| CoyoteBench/huffbench | 0.031 | 0.058 | 1.87× | 0.082 | 2.65× | ok |
| CoyoteBench/lpbench | 0.026 | 0.055 | 2.12× | 0.072 | 2.77× | ok |
| DOE/HACCKernels | 0.095 | 0.211 | 2.22× | 0.285 | 3.00× | ok |
| DOE/HPCCG | 0.658 | 1.317 | 2.00× | 2.147 | 3.26× | ok |
| DOE/PENNANT | 1.233 | 2.841 | 2.30× | 3.360 | 2.73× | ok |
| DOE/miniFE | 0.533 | 1.396 | 2.62× | 1.686 | 3.16× | ok |
| Misc-C++-EH/spirit | 0.286 | 0.771 | 2.70× | 1.179 | 4.12× | ok |
| Misc-C++-Large/ray | 0.089 | 0.217 | 2.44× | 0.270 | 3.03× | ok |
| Misc-C++-Large/sphereflake | 0.087 | 0.194 | 2.23× | 0.273 | 3.14× | ok |
| Misc-C++/bigfib | 0.107 | 0.233 | 2.18× | 0.354 | 3.31× | ok |
| Misc-C++/oopack_v1p8 | 0.026 | 0.057 | 2.19× | 0.080 | 3.08× | ok |
| Misc-C++/stepanov_container | 0.142 | 0.330 | 2.32× | 0.469 | 3.30× | ok |
| Misc-C++/stepanov_v1p2 | 0.027 | 0.061 | 2.26× | 0.072 | 2.67× | ok |
| PAQ8p | 0.041 | 0.113 | 2.76× | 0.116 | 2.83× | ok |
| Prolangs-C++/life | 0.003 | 0.010 | — | 0.021 | — | ok |
| Prolangs-C++/ocean | 0.008 | 0.019 | — | 0.031 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.015 | — | 0.023 | — | ok |
| Shootout-C++-EH/except | 0.067 | 0.143 | 2.13× | 0.191 | 2.85× | ok |
| Shootout-C++/ackermann | 0.063 | 0.153 | 2.43× | 0.220 | 3.49× | ok |
| Shootout-C++/ary3 | 0.080 | 0.167 | 2.09× | 0.203 | 2.54× | ok |
| Shootout-C++/fibo | 0.062 | 0.147 | 2.37× | 0.227 | 3.66× | ok |
| Shootout-C++/hash | 0.089 | 0.202 | 2.27× | 0.257 | 2.89× | ok |
| Shootout-C++/hash2 | 0.100 | 0.210 | 2.10× | 0.253 | 2.53× | ok |
| Shootout-C++/heapsort | 0.078 | 0.177 | 2.27× | 0.225 | 2.88× | ok |
| Shootout-C++/lists | 0.068 | 0.158 | 2.32× | 0.203 | 2.99× | ok |
| Shootout-C++/lists1 | 0.075 | 0.167 | 2.23× | 0.213 | 2.84× | ok |
| Shootout-C++/matrix | 0.061 | 0.136 | 2.23× | 0.180 | 2.95× | ok |
| Shootout-C++/methcall | 0.064 | 0.151 | 2.36× | 0.181 | 2.83× | ok |
| Shootout-C++/moments | 0.083 | 0.185 | 2.23× | 0.224 | 2.70× | ok |
| Shootout-C++/random | 0.079 | 0.169 | 2.14× | 0.216 | 2.73× | ok |
| Shootout-C++/sieve | 0.078 | 0.173 | 2.22× | 0.235 | 3.01× | ok |
| SmallPT | 0.026 | 0.055 | 2.12× | 0.072 | 2.77× | ok |
| Stanford/Bubblesort | 0.008 | 0.021 | — | 0.027 | — | ok |
| Stanford/FloatMM | 0.008 | 0.020 | — | 0.028 | — | ok |
| Stanford/Puzzle | 0.009 | 0.021 | — | 0.028 | — | ok |
| Stanford/Treesort | 0.008 | 0.020 | — | 0.028 | — | ok |
| bg/binarytrees/2 | 0.061 | 0.142 | 2.33× | 0.183 | 3.00× | ok |
| bg/fannkuchredux/3 | 0.029 | 0.058 | 2.00× | 0.076 | 2.62× | ok |
| bg/fasta/1 | 0.045 | 0.091 | 2.02× | 0.117 | 2.60× | ok |
| bg/fasta/2 | 0.045 | 0.108 | 2.40× | 0.147 | 3.27× | ok |
| bg/fasta/3 | 0.074 | 0.158 | 2.14× | 0.202 | 2.73× | ok |
| bg/fasta/4 | 0.071 | 0.135 | 1.90× | 0.168 | 2.37× | ok |
| bg/fasta/6 | 0.131 | 0.237 | 1.81× | 0.365 | 2.79× | ok |
| bg/mandelbrot/0 | 0.119 | 0.289 | 2.43× | 0.376 | 3.16× | ok |
| bg/mandelbrot/2 | 0.081 | 0.178 | 2.20× | 0.226 | 2.79× | ok |
| bg/mandelbrot/3 | 0.082 | 0.192 | 2.34× | 0.252 | 3.07× | ok |
| bg/mandelbrot/5 | 0.039 | 0.085 | 2.18× | 0.111 | 2.85× | ok |
| bg/mandelbrot/7 | 0.044 | 0.094 | 2.14× | 0.116 | 2.64× | ok |
| bg/mandelbrot/9 | 0.036 | 0.088 | 2.44× | 0.102 | 2.83× | ok |
| bg/nbody/1 | 0.027 | 0.056 | 2.07× | 0.067 | 2.48× | ok |
| bg/nbody/2 | 0.025 | 0.054 | 2.16× | 0.067 | 2.68× | ok |
| bg/nbody/3 | 0.025 | 0.051 | 2.04× | 0.071 | 2.84× | ok |
| bg/nbody/6 | 0.026 | 0.056 | 2.15× | 0.070 | 2.69× | ok |
| bg/pidigits/4 | 0.110 | 0.252 | 2.29× | 0.351 | 3.19× | ok |
| bg/pidigits/5 | 0.064 | 0.159 | 2.48× | 0.240 | 3.75× | ok |
| bg/revcomp/1 | 0.074 | 0.187 | 2.53× | 0.212 | 2.86× | ok |
| bg/revcomp/5 | 0.073 | 0.174 | 2.38× | 0.187 | 2.56× | ok |
| bg/spectralnorm/1 | 0.099 | 0.220 | 2.22× | 0.325 | 3.28× | ok |
| box2d | 1.302 | 2.618 | 2.01× | 3.365 | 2.58× | ok |
| fmt | 0.408 | 1.051 | 2.58× | 1.550 | 3.80× | ok |
| hexxagon | 0.229 | 0.474 | 2.07× | 0.674 | 2.94× | ok |
| lambda | 0.038 | 0.115 | 3.03× | 0.134 | 3.53× | ok |
| minisat | 0.043 | 0.111 | 2.58× | 0.156 | 3.63× | ok |
| nlohmann-json | 0.290 | 0.747 | 2.58× | 1.305 | 4.50× | ok |
| pugixml | 0.191 | 0.498 | 2.61× | 0.622 | 3.26× | ok |
| pugixml-tests | 2.600 | 7.179 | 2.76× | 8.864 | 3.41× | ok |
| rapidjson | 0.084 | 0.239 | 2.85× | 0.289 | 3.44× | ok |
| re2 | 2.686 | 6.013 | 2.24× | 5.596 | 2.08× | ok |
| re2-test-re2 | 3.775 | 9.550 | 2.53× | 12.394 | 3.28× | ok |
| re2-test-search | 4.025 | 9.208 | 2.29× | 12.774 | 3.17× | ok |
| tramp3d-v4 | 0.424 | 2.266 | 5.34× | 1.515 | 3.57× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
