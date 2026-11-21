# Public benchmarks: AMD EPYC

Measured compiler: [`0eb0fe355`](https://github.com/vishvananda/cppgm/commit/0eb0fe355ff3f83f0f2ffe697f97c7e8f251dea6) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44801983152) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: AMD EPYC 9V74 80-Core Processor.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.24× | 79 | 2.94× | 79 |
| Compile CPU, `-O0` | 3.02× | 79 | 3.15× | 79 |
| Compile CPU, `-O3` | 4.13× | 80 | 3.82× | 80 |
| Compile peak RSS, `-O0` | 1.47× | 81 | 2.37× | 81 |
| Compile peak RSS, `-O3` | 1.74× | 81 | 2.48× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.21× | 81 | 1.24× | 81 |
| Run CPU, `-O3` | 1.00× | 80 | 1.00× | 80 |
| Run instructions, `-O3` | 1.00× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.931 to 1.036; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.081 | 0.291 | 3.59× | 0.223 | 2.75× | ok |
| Adobe-C++/loop_unroll | 0.067 | 0.604 | 9.01× | 0.228 | 3.40× | ok |
| Adobe-C++/simple_types_constant_folding | 0.065 | 0.698 | 10.74× | 0.295 | 4.54× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.058 | 0.516 | 8.90× | 0.239 | 4.12× | ok |
| Adobe-C++/stepanov_abstraction | 0.047 | 0.224 | 4.77× | 0.140 | 2.98× | ok |
| Adobe-C++/stepanov_vector | 0.083 | 0.336 | 4.05× | 0.244 | 2.94× | ok |
| Bullet | 5.787 | 20.673 | 3.57× | 19.953 | 3.45× | ok |
| CLAMR | 3.051 | 10.570 | 3.46× | 8.769 | 2.87× | ok |
| CoyoteBench/almabench | 0.036 | 0.093 | 2.58× | 0.102 | 2.83× | ok |
| CoyoteBench/fftbench | 0.120 | 0.284 | 2.37× | 0.365 | 3.04× | ok |
| CoyoteBench/huffbench | 0.035 | 0.078 | 2.23× | 0.093 | 2.66× | ok |
| CoyoteBench/lpbench | 0.040 | 0.085 | 2.12× | 0.112 | 2.80× | ok |
| DOE/HACCKernels | 0.124 | 0.352 | 2.84× | 0.380 | 3.06× | ok |
| DOE/HPCCG | 0.876 | 1.857 | 2.12× | 2.980 | 3.40× | ok |
| DOE/PENNANT | 1.615 | 4.644 | 2.88× | 5.111 | 3.16× | ok |
| DOE/miniFE | 0.835 | 2.271 | 2.72× | 2.885 | 3.46× | ok |
| Misc-C++-EH/spirit | 0.450 | 2.727 | 6.06× | 2.036 | 4.52× | ok |
| Misc-C++-Large/ray | 0.118 | 0.296 | 2.51× | 0.355 | 3.01× | ok |
| Misc-C++-Large/sphereflake | 0.122 | 0.241 | 1.98× | 0.287 | 2.35× | ok |
| Misc-C++/bigfib | 0.149 | 0.436 | 2.93× | 0.500 | 3.36× | ok |
| Misc-C++/oopack_v1p8 | 0.038 | 0.114 | 3.00× | 0.114 | 3.00× | ok |
| Misc-C++/stepanov_container | 0.199 | 0.651 | 3.27× | 0.674 | 3.39× | ok |
| Misc-C++/stepanov_v1p2 | 0.036 | 0.130 | 3.61× | 0.114 | 3.17× | ok |
| PAQ8p | 0.087 | 0.535 | 6.15× | 0.292 | 3.36× | ok |
| Prolangs-C++/life | 0.004 | 0.035 | — | 0.030 | — | ok |
| Prolangs-C++/ocean | 0.013 | 0.072 | 5.54× | 0.054 | 4.15× | ok |
| Prolangs-C++/primes | 0.006 | 0.027 | — | 0.029 | — | ok |
| Shootout-C++-EH/except | 0.084 | 0.181 | 2.15× | 0.256 | 3.05× | ok |
| Shootout-C++/ackermann | 0.089 | 0.212 | 2.38× | 0.247 | 2.78× | ok |
| Shootout-C++/ary3 | 0.093 | 0.222 | 2.39× | 0.289 | 3.11× | ok |
| Shootout-C++/fibo | 0.084 | 0.178 | 2.12× | 0.257 | 3.06× | ok |
| Shootout-C++/hash | 0.123 | 0.329 | 2.67× | 0.383 | 3.11× | ok |
| Shootout-C++/hash2 | 0.124 | 0.329 | 2.65× | 0.338 | 2.73× | ok |
| Shootout-C++/heapsort | 0.104 | 0.227 | 2.18× | 0.291 | 2.80× | ok |
| Shootout-C++/lists | 0.089 | 0.222 | 2.49× | 0.298 | 3.35× | ok |
| Shootout-C++/lists1 | 0.105 | 0.252 | 2.40× | 0.306 | 2.91× | ok |
| Shootout-C++/matrix | 0.083 | 0.175 | 2.11× | 0.262 | 3.16× | ok |
| Shootout-C++/methcall | 0.079 | 0.172 | 2.18× | 0.242 | 3.06× | ok |
| Shootout-C++/moments | 0.114 | 0.290 | 2.54× | 0.320 | 2.81× | ok |
| Shootout-C++/random | 0.099 | 0.216 | 2.18× | 0.317 | 3.20× | ok |
| Shootout-C++/sieve | 0.103 | 0.260 | 2.52× | 0.324 | 3.15× | ok |
| SmallPT | 0.033 | 0.103 | 3.12× | 0.103 | 3.12× | ok |
| Stanford/Bubblesort | 0.011 | 0.032 | 2.91× | 0.035 | 3.18× | ok |
| Stanford/FloatMM | 0.011 | 0.032 | 2.91× | 0.035 | 3.18× | ok |
| Stanford/Puzzle | 0.011 | 0.038 | 3.45× | 0.038 | 3.45× | ok |
| Stanford/Treesort | 0.011 | 0.034 | 3.09× | 0.038 | 3.45× | ok |
| bg/binarytrees/2 | 0.081 | 0.164 | 2.02× | 0.252 | 3.11× | ok |
| bg/fannkuchredux/3 | 0.039 | 0.082 | 2.10× | 0.101 | 2.59× | ok |
| bg/fasta/1 | 0.060 | 0.142 | 2.37× | 0.158 | 2.63× | ok |
| bg/fasta/2 | 0.061 | 0.147 | 2.41× | 0.168 | 2.75× | ok |
| bg/fasta/3 | 0.102 | 0.211 | 2.07× | 0.277 | 2.72× | ok |
| bg/fasta/4 | 0.086 | 0.179 | 2.08× | 0.217 | 2.52× | ok |
| bg/fasta/6 | 0.154 | 0.452 | 2.94× | 0.488 | 3.17× | ok |
| bg/mandelbrot/0 | 0.173 | 0.554 | 3.20× | 0.523 | 3.02× | ok |
| bg/mandelbrot/2 | 0.102 | 0.273 | 2.68× | 0.307 | 3.01× | ok |
| bg/mandelbrot/3 | 0.106 | 0.233 | 2.20× | 0.313 | 2.95× | ok |
| bg/mandelbrot/5 | 0.052 | 0.120 | 2.31× | 0.157 | 3.02× | ok |
| bg/mandelbrot/7 | 0.057 | 0.127 | 2.23× | 0.196 | 3.44× | ok |
| bg/mandelbrot/9 | 0.049 | 0.146 | 2.98× | 0.139 | 2.84× | ok |
| bg/nbody/1 | 0.034 | 0.135 | 3.97× | 0.119 | 3.50× | ok |
| bg/nbody/2 | 0.032 | 0.075 | 2.34× | 0.090 | 2.81× | ok |
| bg/nbody/3 | 0.034 | 0.078 | 2.29× | 0.094 | 2.76× | ok |
| bg/nbody/6 | 0.034 | 0.112 | 3.29× | 0.107 | 3.15× | ok |
| bg/pidigits/4 | 0.137 | 0.332 | 2.42× | 0.434 | 3.17× | ok |
| bg/pidigits/5 | 0.086 | 0.197 | 2.29× | 0.267 | 3.10× | ok |
| bg/revcomp/1 | 0.093 | 0.251 | 2.70× | 0.297 | 3.19× | ok |
| bg/revcomp/5 | 0.100 | 0.218 | 2.18× | 0.268 | 2.68× | ok |
| bg/spectralnorm/1 | 0.128 | 0.282 | 2.20× | 0.411 | 3.21× | ok |
| box2d | 1.898 | 4.849 | 2.55× | 6.506 | 3.43× | ok |
| fmt | 0.569 | 2.387 | 4.20× | 2.467 | 4.34× | ok |
| hexxagon | 0.330 | 0.708 | 2.15× | 1.052 | 3.19× | ok |
| lambda | 0.067 | 0.342 | 5.10× | 0.260 | 3.88× | ok |
| minisat | 0.075 | 0.332 | 4.43× | 0.280 | 3.73× | ok |
| nlohmann-json | 0.498 | 1.991 | 4.00× | 2.139 | 4.30× | ok |
| pugixml | 0.272 | 1.295 | 4.76× | 1.058 | 3.89× | ok |
| pugixml-tests | 4.485 | 17.009 | 3.79× | 15.834 | 3.53× | ok |
| rapidjson | 0.136 | 0.521 | 3.83× | 0.442 | 3.25× | ok |
| re2 | 3.889 | 11.458 | 2.95× | 8.243 | 2.12× | ok |
| re2-test-re2 | 5.615 | 16.987 | 3.03× | 19.487 | 3.47× | ok |
| re2-test-search | 5.916 | 16.514 | 2.79× | 17.866 | 3.02× | ok |
| tramp3d-v4 | 0.822 | 9.523 | 11.59× | 3.066 | 3.73× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.141 | 1.075 | 7.62× | 0.576 | 4.09× | ok |
| Adobe-C++/loop_unroll | 0.471 | 5.838 | 12.39× | 4.774 | 10.14× | ok |
| Adobe-C++/simple_types_constant_folding | 0.281 | 2.935 | 10.44× | 2.532 | 9.01× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.245 | 2.475 | 10.10× | 2.128 | 8.69× | ok |
| Adobe-C++/stepanov_abstraction | 0.105 | 1.201 | 11.44× | 0.523 | 4.98× | ok |
| Adobe-C++/stepanov_vector | 0.131 | 1.371 | 10.47× | 0.700 | 5.34× | ok |
| Bullet | 7.352 | 41.185 | 5.60× | 33.661 | 4.58× | ok |
| CLAMR | 5.034 | 26.037 | 5.17× | 19.104 | 3.79× | ok |
| CoyoteBench/almabench | 0.040 | 0.175 | 4.38× | 0.153 | 3.82× | ok |
| CoyoteBench/fftbench | 0.137 | 0.442 | 3.23× | 0.475 | 3.47× | ok |
| CoyoteBench/huffbench | 0.045 | 0.216 | 4.80× | 0.147 | 3.27× | ok |
| CoyoteBench/lpbench | 0.049 | 0.220 | 4.49× | 0.254 | 5.18× | ok |
| DOE/HACCKernels | 0.142 | 0.490 | 3.45× | 0.443 | 3.12× | ok |
| DOE/HPCCG | 0.938 | 2.630 | 2.80× | 3.386 | 3.61× | ok |
| DOE/PENNANT | 2.026 | 6.748 | 3.33× | 6.769 | 3.34× | ok |
| DOE/miniFE | 1.056 | 4.837 | 4.58× | 3.640 | 3.45× | ok |
| Misc-C++-EH/spirit | 0.685 | 4.255 | 6.21× | 4.113 | 6.00× | ok |
| Misc-C++-Large/ray | 0.126 | 0.497 | 3.94× | 0.575 | 4.56× | ok |
| Misc-C++-Large/sphereflake | 0.142 | 0.784 | 5.52× | 0.460 | 3.24× | ok |
| Misc-C++/bigfib | 0.186 | 0.665 | 3.58× | 0.620 | 3.33× | ok |
| Misc-C++/oopack_v1p8 | 0.046 | 0.198 | 4.30× | 0.189 | 4.11× | ok |
| Misc-C++/stepanov_container | 0.279 | 1.050 | 3.76× | 1.087 | 3.90× | ok |
| Misc-C++/stepanov_v1p2 | 0.046 | 0.244 | 5.30× | 0.237 | 5.15× | ok |
| PAQ8p | 0.331 | 4.330 | 13.08× | 1.884 | 5.69× | ok |
| Prolangs-C++/life | 0.011 | 0.107 | 9.73× | 0.074 | 6.73× | ok |
| Prolangs-C++/ocean | 0.023 | 0.210 | 9.13× | 0.124 | 5.39× | ok |
| Prolangs-C++/primes | 0.009 | 0.039 | — | 0.038 | — | ok |
| Shootout-C++-EH/except | 0.085 | 0.212 | 2.49× | 0.264 | 3.11× | ok |
| Shootout-C++/ackermann | 0.087 | 0.238 | 2.74× | 0.270 | 3.10× | ok |
| Shootout-C++/ary3 | 0.101 | 0.261 | 2.58× | 0.343 | 3.40× | ok |
| Shootout-C++/fibo | 0.088 | 0.223 | 2.53× | 0.258 | 2.93× | ok |
| Shootout-C++/hash | 0.153 | 0.433 | 2.83× | 0.458 | 2.99× | ok |
| Shootout-C++/hash2 | 0.162 | 0.472 | 2.91× | 0.497 | 3.07× | ok |
| Shootout-C++/heapsort | 0.110 | 0.271 | 2.46× | 0.297 | 2.70× | ok |
| Shootout-C++/lists | 0.104 | 0.251 | 2.41× | 0.314 | 3.02× | ok |
| Shootout-C++/lists1 | 0.114 | 0.312 | 2.74× | 0.346 | 3.04× | ok |
| Shootout-C++/matrix | 0.085 | 0.235 | 2.76× | 0.341 | 4.01× | ok |
| Shootout-C++/methcall | 0.083 | 0.232 | 2.80× | 0.257 | 3.10× | ok |
| Shootout-C++/moments | 0.126 | 0.356 | 2.83× | 0.386 | 3.06× | ok |
| Shootout-C++/random | 0.104 | 0.234 | 2.25× | 0.313 | 3.01× | ok |
| Shootout-C++/sieve | 0.109 | 0.248 | 2.28× | 0.323 | 2.96× | ok |
| SmallPT | 0.047 | 0.326 | 6.94× | 0.183 | 3.89× | ok |
| Stanford/Bubblesort | 0.013 | 0.059 | 4.54× | 0.053 | 4.08× | ok |
| Stanford/FloatMM | 0.015 | 0.067 | 4.47× | 0.070 | 4.67× | ok |
| Stanford/Puzzle | 0.023 | 0.127 | 5.52× | 0.126 | 5.48× | ok |
| Stanford/Treesort | 0.016 | 0.090 | 5.62× | 0.060 | 3.75× | ok |
| bg/binarytrees/2 | 0.086 | 0.413 | 4.80× | 0.271 | 3.15× | ok |
| bg/fannkuchredux/3 | 0.044 | 0.131 | 2.98× | 0.132 | 3.00× | ok |
| bg/fasta/1 | 0.067 | 0.181 | 2.70× | 0.198 | 2.96× | ok |
| bg/fasta/2 | 0.073 | 0.184 | 2.52× | 0.208 | 2.85× | ok |
| bg/fasta/3 | 0.099 | 0.257 | 2.60× | 0.321 | 3.24× | ok |
| bg/fasta/4 | 0.089 | 0.227 | 2.55× | 0.254 | 2.85× | ok |
| bg/fasta/6 | 0.171 | 0.483 | 2.82× | 0.630 | 3.68× | ok |
| bg/mandelbrot/0 | 0.197 | 0.697 | 3.54× | 0.681 | 3.46× | ok |
| bg/mandelbrot/2 | 0.108 | 0.308 | 2.85× | 0.348 | 3.22× | ok |
| bg/mandelbrot/3 | 0.108 | 0.282 | 2.61× | 0.335 | 3.10× | ok |
| bg/mandelbrot/5 | 0.063 | 0.162 | 2.57× | 0.202 | 3.21× | ok |
| bg/mandelbrot/7 | 0.066 | 0.192 | 2.91× | 0.214 | 3.24× | ok |
| bg/mandelbrot/9 | 0.059 | 0.199 | 3.37× | 0.182 | 3.08× | ok |
| bg/nbody/1 | 0.047 | 0.177 | 3.77× | 0.192 | 4.09× | ok |
| bg/nbody/2 | 0.038 | 0.144 | 3.79× | 0.137 | 3.61× | ok |
| bg/nbody/3 | 0.039 | 0.133 | 3.41× | 0.126 | 3.23× | ok |
| bg/nbody/6 | 0.046 | 0.177 | 3.85× | 0.197 | 4.28× | ok |
| bg/pidigits/4 | 0.140 | 0.369 | 2.64× | 0.484 | 3.46× | ok |
| bg/pidigits/5 | 0.090 | 0.233 | 2.59× | 0.287 | 3.19× | ok |
| bg/revcomp/1 | 0.106 | 0.278 | 2.62× | 0.337 | 3.18× | ok |
| bg/revcomp/5 | 0.108 | 0.265 | 2.45× | 0.300 | 2.78× | ok |
| bg/spectralnorm/1 | 0.136 | 0.368 | 2.71× | 0.469 | 3.45× | ok |
| box2d | 2.232 | 8.135 | 3.64× | 8.392 | 3.76× | ok |
| fmt | 1.005 | 5.568 | 5.54× | 3.816 | 3.80× | ok |
| hexxagon | 0.373 | 1.318 | 3.53× | 1.170 | 3.14× | ok |
| lambda | 0.134 | 1.257 | 9.38× | 0.666 | 4.97× | ok |
| minisat | 0.161 | 1.132 | 7.03× | 0.741 | 4.60× | ok |
| nlohmann-json | 0.868 | 3.884 | 4.47× | 3.376 | 3.89× | ok |
| pugixml | 0.621 | 5.161 | 8.31× | 3.748 | 6.04× | ok |
| pugixml-tests | 6.091 | 38.347 | 6.30× | 28.224 | 4.63× | ok |
| rapidjson | 0.266 | 1.329 | 5.00× | 0.779 | 2.93× | ok |
| re2 | 3.805 | 18.990 | 4.99× | 11.583 | 3.04× | ok |
| re2-test-re2 | 6.807 | 30.436 | 4.47× | 26.624 | 3.91× | ok |
| re2-test-search | 7.069 | 27.367 | 3.87× | 23.788 | 3.37× | ok |
| tramp3d-v4 | 2.703 | 18.774 | 6.95× | 14.816 | 5.48× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.072 | 0.163 | 2.26× | 0.200 | 2.78× | ok |
| Adobe-C++/loop_unroll | 0.048 | 0.121 | 2.52× | 0.131 | 2.73× | ok |
| Adobe-C++/simple_types_constant_folding | 0.047 | 0.128 | 2.72× | 0.145 | 3.09× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.043 | 0.113 | 2.63× | 0.128 | 2.98× | ok |
| Adobe-C++/stepanov_abstraction | 0.041 | 0.096 | 2.34× | 0.107 | 2.61× | ok |
| Adobe-C++/stepanov_vector | 0.073 | 0.159 | 2.18× | 0.198 | 2.71× | ok |
| Bullet | 5.339 | 12.557 | 2.35× | 17.014 | 3.19× | ok |
| CLAMR | 2.595 | 5.707 | 2.20× | 7.432 | 2.86× | ok |
| CoyoteBench/almabench | 0.034 | 0.078 | 2.29× | 0.095 | 2.79× | ok |
| CoyoteBench/fftbench | 0.117 | 0.255 | 2.18× | 0.337 | 2.88× | ok |
| CoyoteBench/huffbench | 0.036 | 0.067 | 1.86× | 0.087 | 2.42× | ok |
| CoyoteBench/lpbench | 0.040 | 0.072 | 1.80× | 0.102 | 2.55× | ok |
| DOE/HACCKernels | 0.122 | 0.325 | 2.66× | 0.353 | 2.89× | ok |
| DOE/HPCCG | 0.854 | 1.619 | 1.90× | 2.797 | 3.28× | ok |
| DOE/PENNANT | 1.724 | 3.918 | 2.27× | 4.407 | 2.56× | ok |
| DOE/miniFE | 0.720 | 1.534 | 2.13× | 2.534 | 3.52× | ok |
| Misc-C++-EH/spirit | 0.343 | 0.973 | 2.84× | 1.333 | 3.89× | ok |
| Misc-C++-Large/ray | 0.114 | 0.249 | 2.18× | 0.327 | 2.87× | ok |
| Misc-C++-Large/sphereflake | 0.120 | 0.216 | 1.80× | 0.291 | 2.42× | ok |
| Misc-C++/bigfib | 0.137 | 0.265 | 1.93× | 0.437 | 3.19× | ok |
| Misc-C++/oopack_v1p8 | 0.037 | 0.084 | 2.27× | 0.103 | 2.78× | ok |
| Misc-C++/stepanov_container | 0.183 | 0.408 | 2.23× | 0.581 | 3.17× | ok |
| Misc-C++/stepanov_v1p2 | 0.035 | 0.075 | 2.14× | 0.090 | 2.57× | ok |
| PAQ8p | 0.055 | 0.160 | 2.91× | 0.176 | 3.20× | ok |
| Prolangs-C++/life | 0.004 | 0.012 | — | 0.024 | — | ok |
| Prolangs-C++/ocean | 0.011 | 0.028 | 2.55× | 0.037 | 3.36× | ok |
| Prolangs-C++/primes | 0.007 | 0.019 | — | 0.028 | — | ok |
| Shootout-C++-EH/except | 0.083 | 0.180 | 2.17× | 0.241 | 2.90× | ok |
| Shootout-C++/ackermann | 0.089 | 0.220 | 2.47× | 0.238 | 2.67× | ok |
| Shootout-C++/ary3 | 0.090 | 0.205 | 2.28× | 0.272 | 3.02× | ok |
| Shootout-C++/fibo | 0.084 | 0.183 | 2.18× | 0.241 | 2.87× | ok |
| Shootout-C++/hash | 0.118 | 0.254 | 2.15× | 0.342 | 2.90× | ok |
| Shootout-C++/hash2 | 0.119 | 0.250 | 2.10× | 0.301 | 2.53× | ok |
| Shootout-C++/heapsort | 0.105 | 0.218 | 2.08× | 0.282 | 2.69× | ok |
| Shootout-C++/lists | 0.086 | 0.185 | 2.15× | 0.273 | 3.17× | ok |
| Shootout-C++/lists1 | 0.099 | 0.210 | 2.12× | 0.276 | 2.79× | ok |
| Shootout-C++/matrix | 0.082 | 0.176 | 2.15× | 0.250 | 3.05× | ok |
| Shootout-C++/methcall | 0.078 | 0.170 | 2.18× | 0.234 | 3.00× | ok |
| Shootout-C++/moments | 0.111 | 0.231 | 2.08× | 0.291 | 2.62× | ok |
| Shootout-C++/random | 0.101 | 0.210 | 2.08× | 0.272 | 2.69× | ok |
| Shootout-C++/sieve | 0.100 | 0.229 | 2.29× | 0.296 | 2.96× | ok |
| SmallPT | 0.032 | 0.069 | 2.16× | 0.094 | 2.94× | ok |
| Stanford/Bubblesort | 0.011 | 0.028 | 2.55× | 0.035 | 3.18× | ok |
| Stanford/FloatMM | 0.011 | 0.028 | 2.55× | 0.035 | 3.18× | ok |
| Stanford/Puzzle | 0.011 | 0.028 | 2.55× | 0.036 | 3.27× | ok |
| Stanford/Treesort | 0.011 | 0.028 | 2.55× | 0.036 | 3.27× | ok |
| bg/binarytrees/2 | 0.081 | 0.179 | 2.21× | 0.240 | 2.96× | ok |
| bg/fannkuchredux/3 | 0.039 | 0.071 | 1.82× | 0.097 | 2.49× | ok |
| bg/fasta/1 | 0.058 | 0.115 | 1.98× | 0.145 | 2.50× | ok |
| bg/fasta/2 | 0.060 | 0.119 | 1.98× | 0.153 | 2.55× | ok |
| bg/fasta/3 | 0.093 | 0.200 | 2.15× | 0.271 | 2.91× | ok |
| bg/fasta/4 | 0.084 | 0.176 | 2.10× | 0.208 | 2.48× | ok |
| bg/fasta/6 | 0.142 | 0.318 | 2.24× | 0.429 | 3.02× | ok |
| bg/mandelbrot/0 | 0.159 | 0.345 | 2.17× | 0.464 | 2.92× | ok |
| bg/mandelbrot/2 | 0.100 | 0.238 | 2.38× | 0.296 | 2.96× | ok |
| bg/mandelbrot/3 | 0.104 | 0.235 | 2.26× | 0.299 | 2.88× | ok |
| bg/mandelbrot/5 | 0.051 | 0.099 | 1.94× | 0.144 | 2.82× | ok |
| bg/mandelbrot/7 | 0.053 | 0.094 | 1.77× | 0.130 | 2.45× | ok |
| bg/mandelbrot/9 | 0.047 | 0.112 | 2.38× | 0.124 | 2.64× | ok |
| bg/nbody/1 | 0.034 | 0.076 | 2.24× | 0.093 | 2.74× | ok |
| bg/nbody/2 | 0.033 | 0.063 | 1.91× | 0.086 | 2.61× | ok |
| bg/nbody/3 | 0.033 | 0.065 | 1.97× | 0.089 | 2.70× | ok |
| bg/nbody/6 | 0.033 | 0.067 | 2.03× | 0.092 | 2.79× | ok |
| bg/pidigits/4 | 0.132 | 0.318 | 2.41× | 0.399 | 3.02× | ok |
| bg/pidigits/5 | 0.084 | 0.193 | 2.30× | 0.250 | 2.98× | ok |
| bg/revcomp/1 | 0.098 | 0.208 | 2.12× | 0.269 | 2.74× | ok |
| bg/revcomp/5 | 0.095 | 0.180 | 1.89× | 0.287 | 3.02× | ok |
| bg/spectralnorm/1 | 0.127 | 0.258 | 2.03× | 0.348 | 2.74× | ok |
| box2d | 1.732 | 3.374 | 1.95× | 6.068 | 3.50× | ok |
| fmt | 0.491 | 1.095 | 2.23× | 2.067 | 4.21× | ok |
| hexxagon | 0.322 | 0.702 | 2.18× | 1.032 | 3.20× | ok |
| lambda | 0.053 | 0.156 | 2.94× | 0.196 | 3.70× | ok |
| minisat | 0.065 | 0.154 | 2.37× | 0.222 | 3.42× | ok |
| nlohmann-json | 0.412 | 0.900 | 2.18× | 1.608 | 3.90× | ok |
| pugixml | 0.213 | 0.508 | 2.38× | 0.783 | 3.68× | ok |
| pugixml-tests | 3.828 | 8.632 | 2.25× | 12.109 | 3.16× | ok |
| rapidjson | 0.119 | 0.286 | 2.40× | 0.346 | 2.91× | ok |
| re2 | 3.521 | 7.448 | 2.12× | 6.940 | 1.97× | ok |
| re2-test-re2 | 5.258 | 10.991 | 2.09× | 16.462 | 3.13× | ok |
| re2-test-search | 4.666 | 10.389 | 2.23× | 17.004 | 3.64× | ok |
| tramp3d-v4 | 0.502 | 2.777 | 5.53× | 1.810 | 3.61× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
