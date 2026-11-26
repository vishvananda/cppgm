# Public benchmarks: Intel (GitHub)

Measured compiler: [`dc54668b7`](https://github.com/vishvananda/cppgm/commit/dc54668b7b4a2cc926fb1fd6ebcf88a0cb513fb6) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/45710374989) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: Intel(R) Xeon(R) 6975P-C.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.32× | 74 | 3.00× | 74 |
| Compile CPU, `-O0` | 3.26× | 75 | 3.20× | 75 |
| Compile CPU, `-O3` | 4.34× | 80 | 3.87× | 80 |
| Compile peak RSS, `-O0` | 1.42× | 81 | 2.15× | 81 |
| Compile peak RSS, `-O3` | 1.67× | 81 | 2.24× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.12× | 81 | 1.08× | 81 |
| Run CPU, `-O3` | 1.01× | 80 | 1.02× | 80 |
| Run instructions, `-O3` | 1.05× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.963 to 1.012; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.065 | 0.268 | 4.12× | 0.213 | 3.28× | ok |
| Adobe-C++/loop_unroll | 0.054 | 0.567 | 10.50× | 0.209 | 3.87× | ok |
| Adobe-C++/simple_types_constant_folding | 0.053 | 0.680 | 12.83× | 0.211 | 3.98× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.045 | 0.481 | 10.69× | 0.230 | 5.11× | ok |
| Adobe-C++/stepanov_abstraction | 0.040 | 0.177 | 4.42× | 0.113 | 2.83× | ok |
| Adobe-C++/stepanov_vector | 0.076 | 0.272 | 3.58× | 0.244 | 3.21× | ok |
| Bullet | 4.418 | 17.122 | 3.88× | 16.345 | 3.70× | ok |
| CLAMR | 2.500 | 8.505 | 3.40× | 7.163 | 2.87× | ok |
| CoyoteBench/almabench | 0.028 | 0.075 | 2.68× | 0.081 | 2.89× | ok |
| CoyoteBench/fftbench | 0.098 | 0.233 | 2.38× | 0.292 | 2.98× | ok |
| CoyoteBench/huffbench | 0.032 | 0.071 | 2.22× | 0.073 | 2.28× | ok |
| CoyoteBench/lpbench | 0.029 | 0.071 | 2.45× | 0.087 | 3.00× | ok |
| DOE/HACCKernels | 0.106 | 0.263 | 2.48× | 0.308 | 2.91× | ok |
| DOE/HPCCG | 0.703 | 1.563 | 2.22× | 1.899 | 2.70× | ok |
| DOE/PENNANT | 1.301 | 3.970 | 3.05× | 3.886 | 2.99× | ok |
| DOE/miniFE | 0.562 | 1.879 | 3.34× | 2.283 | 4.06× | ok |
| Misc-C++-EH/spirit | 0.389 | 2.771 | 7.12× | 1.888 | 4.85× | ok |
| Misc-C++-Large/ray | 0.098 | 0.281 | 2.87× | 0.272 | 2.78× | ok |
| Misc-C++-Large/sphereflake | 0.078 | 0.222 | 2.85× | 0.236 | 3.03× | ok |
| Misc-C++/bigfib | 0.114 | 0.380 | 3.33× | 0.406 | 3.56× | ok |
| Misc-C++/oopack_v1p8 | 0.030 | 0.089 | 2.97× | 0.092 | 3.07× | ok |
| Misc-C++/stepanov_container | 0.159 | 0.578 | 3.64× | 0.508 | 3.19× | ok |
| Misc-C++/stepanov_v1p2 | 0.029 | 0.114 | 3.93× | 0.099 | 3.41× | ok |
| PAQ8p | 0.063 | 0.416 | 6.60× | 0.207 | 3.29× | ok |
| Prolangs-C++/life | 0.004 | 0.031 | — | 0.027 | — | ok |
| Prolangs-C++/ocean | 0.010 | 0.058 | 5.80× | 0.049 | 4.90× | ok |
| Prolangs-C++/primes | 0.005 | 0.023 | — | 0.026 | — | ok |
| Shootout-C++-EH/except | 0.066 | 0.163 | 2.47× | 0.203 | 3.08× | ok |
| Shootout-C++/ackermann | 0.070 | 0.160 | 2.29× | 0.227 | 3.24× | ok |
| Shootout-C++/ary3 | 0.073 | 0.179 | 2.45× | 0.226 | 3.10× | ok |
| Shootout-C++/fibo | 0.070 | 0.162 | 2.31× | 0.235 | 3.36× | ok |
| Shootout-C++/hash | 0.108 | 0.304 | 2.81× | 0.310 | 2.87× | ok |
| Shootout-C++/hash2 | 0.092 | 0.266 | 2.89× | 0.285 | 3.10× | ok |
| Shootout-C++/heapsort | 0.092 | 0.179 | 1.95× | 0.243 | 2.64× | ok |
| Shootout-C++/lists | 0.072 | 0.189 | 2.62× | 0.266 | 3.69× | ok |
| Shootout-C++/lists1 | 0.079 | 0.252 | 3.19× | 0.240 | 3.04× | ok |
| Shootout-C++/matrix | 0.063 | 0.144 | 2.29× | 0.192 | 3.05× | ok |
| Shootout-C++/methcall | 0.066 | 0.153 | 2.32× | 0.192 | 2.91× | ok |
| Shootout-C++/moments | 0.090 | 0.239 | 2.66× | 0.248 | 2.76× | ok |
| Shootout-C++/random | 0.079 | 0.169 | 2.14× | 0.231 | 2.92× | ok |
| Shootout-C++/sieve | 0.083 | 0.225 | 2.71× | 0.262 | 3.16× | ok |
| SmallPT | 0.028 | 0.092 | 3.29× | 0.079 | 2.82× | ok |
| Stanford/Bubblesort | 0.008 | 0.025 | — | 0.029 | — | ok |
| Stanford/FloatMM | 0.008 | 0.026 | — | 0.031 | — | ok |
| Stanford/Puzzle | 0.009 | 0.033 | — | 0.033 | — | ok |
| Stanford/Treesort | 0.008 | 0.027 | — | 0.029 | — | ok |
| bg/binarytrees/2 | 0.063 | 0.147 | 2.33× | 0.201 | 3.19× | ok |
| bg/fannkuchredux/3 | 0.030 | 0.069 | 2.30× | 0.085 | 2.83× | ok |
| bg/fasta/1 | 0.048 | 0.124 | 2.58× | 0.135 | 2.81× | ok |
| bg/fasta/2 | 0.048 | 0.116 | 2.42× | 0.141 | 2.94× | ok |
| bg/fasta/3 | 0.075 | 0.182 | 2.43× | 0.211 | 2.81× | ok |
| bg/fasta/4 | 0.070 | 0.146 | 2.09× | 0.181 | 2.59× | ok |
| bg/fasta/6 | 0.149 | 0.359 | 2.41× | 0.400 | 2.68× | ok |
| bg/mandelbrot/0 | 0.135 | 0.413 | 3.06× | 0.430 | 3.19× | ok |
| bg/mandelbrot/2 | 0.093 | 0.201 | 2.16× | 0.262 | 2.82× | ok |
| bg/mandelbrot/3 | 0.084 | 0.201 | 2.39× | 0.260 | 3.10× | ok |
| bg/mandelbrot/5 | 0.040 | 0.104 | 2.60× | 0.122 | 3.05× | ok |
| bg/mandelbrot/7 | 0.043 | 0.138 | 3.21× | 0.121 | 2.81× | ok |
| bg/mandelbrot/9 | 0.041 | 0.125 | 3.05× | 0.118 | 2.88× | ok |
| bg/nbody/1 | 0.028 | 0.100 | 3.57× | 0.088 | 3.14× | ok |
| bg/nbody/2 | 0.025 | 0.067 | 2.68× | 0.074 | 2.96× | ok |
| bg/nbody/3 | 0.025 | 0.064 | 2.56× | 0.072 | 2.88× | ok |
| bg/nbody/6 | 0.027 | 0.091 | 3.37× | 0.088 | 3.26× | ok |
| bg/pidigits/4 | 0.112 | 0.294 | 2.62× | 0.370 | 3.30× | ok |
| bg/pidigits/5 | 0.076 | 0.152 | 2.00× | 0.214 | 2.82× | ok |
| bg/revcomp/1 | 0.080 | 0.216 | 2.70× | 0.253 | 3.16× | ok |
| bg/revcomp/5 | 0.077 | 0.220 | 2.86× | 0.263 | 3.42× | ok |
| bg/spectralnorm/1 | 0.099 | 0.262 | 2.65× | 0.365 | 3.69× | ok |
| box2d | 1.357 | 4.224 | 3.11× | 3.805 | 2.80× | ok |
| fmt | 0.458 | 2.260 | 4.93× | 2.003 | 4.37× | ok |
| hexxagon | 0.256 | 0.642 | 2.51× | 0.827 | 3.23× | ok |
| lambda | 0.051 | 0.302 | 5.92× | 0.233 | 4.57× | ok |
| minisat | 0.059 | 0.294 | 4.98× | 0.211 | 3.58× | ok |
| nlohmann-json | 0.434 | 1.954 | 4.50× | 1.663 | 3.83× | ok |
| pugixml | 0.267 | 1.215 | 4.55× | 0.991 | 3.71× | ok |
| pugixml-tests | 3.066 | 14.701 | 4.79× | 12.703 | 4.14× | ok |
| rapidjson | 0.112 | 0.464 | 4.14× | 0.330 | 2.95× | ok |
| re2 | 2.169 | 10.541 | 4.86× | 6.652 | 3.07× | ok |
| re2-test-re2 | 4.280 | 14.848 | 3.47× | 14.177 | 3.31× | ok |
| re2-test-search | 4.153 | 14.056 | 3.38× | 14.130 | 3.40× | ok |
| tramp3d-v4 | 0.888 | 7.575 | 8.53× | 2.652 | 2.99× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.109 | 0.815 | 7.48× | 0.566 | 5.19× | ok |
| Adobe-C++/loop_unroll | 0.497 | 5.251 | 10.57× | 4.054 | 8.16× | ok |
| Adobe-C++/simple_types_constant_folding | 0.301 | 2.893 | 9.61× | 2.251 | 7.48× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.248 | 2.180 | 8.79× | 1.865 | 7.52× | ok |
| Adobe-C++/stepanov_abstraction | 0.091 | 0.968 | 10.64× | 0.457 | 5.02× | ok |
| Adobe-C++/stepanov_vector | 0.130 | 1.423 | 10.95× | 0.612 | 4.71× | ok |
| Bullet | 6.215 | 36.758 | 5.91× | 26.089 | 4.20× | ok |
| CLAMR | 4.082 | 22.626 | 5.54× | 16.679 | 4.09× | ok |
| CoyoteBench/almabench | 0.033 | 0.169 | 5.12× | 0.112 | 3.39× | ok |
| CoyoteBench/fftbench | 0.118 | 0.391 | 3.31× | 0.396 | 3.36× | ok |
| CoyoteBench/huffbench | 0.039 | 0.203 | 5.21× | 0.138 | 3.54× | ok |
| CoyoteBench/lpbench | 0.040 | 0.188 | 4.70× | 0.207 | 5.17× | ok |
| DOE/HACCKernels | 0.112 | 0.369 | 3.29× | 0.371 | 3.31× | ok |
| DOE/HPCCG | 0.757 | 2.498 | 3.30× | 2.623 | 3.46× | ok |
| DOE/PENNANT | 1.631 | 5.938 | 3.64× | 5.713 | 3.50× | ok |
| DOE/miniFE | 0.843 | 3.881 | 4.60× | 3.691 | 4.38× | ok |
| Misc-C++-EH/spirit | 0.607 | 3.768 | 6.21× | 3.455 | 5.69× | ok |
| Misc-C++-Large/ray | 0.099 | 0.475 | 4.80× | 0.325 | 3.28× | ok |
| Misc-C++-Large/sphereflake | 0.097 | 0.680 | 7.01× | 0.363 | 3.74× | ok |
| Misc-C++/bigfib | 0.143 | 0.562 | 3.93× | 0.554 | 3.87× | ok |
| Misc-C++/oopack_v1p8 | 0.039 | 0.182 | 4.67× | 0.171 | 4.38× | ok |
| Misc-C++/stepanov_container | 0.196 | 0.921 | 4.70× | 0.859 | 4.38× | ok |
| Misc-C++/stepanov_v1p2 | 0.042 | 0.200 | 4.76× | 0.179 | 4.26× | ok |
| PAQ8p | 0.315 | 3.539 | 11.23× | 1.559 | 4.95× | ok |
| Prolangs-C++/life | 0.011 | 0.101 | 9.18× | 0.067 | 6.09× | ok |
| Prolangs-C++/ocean | 0.020 | 0.191 | 9.55× | 0.124 | 6.20× | ok |
| Prolangs-C++/primes | 0.007 | 0.032 | — | 0.036 | — | ok |
| Shootout-C++-EH/except | 0.071 | 0.173 | 2.44× | 0.216 | 3.04× | ok |
| Shootout-C++/ackermann | 0.075 | 0.194 | 2.59× | 0.236 | 3.15× | ok |
| Shootout-C++/ary3 | 0.079 | 0.217 | 2.75× | 0.247 | 3.13× | ok |
| Shootout-C++/fibo | 0.073 | 0.205 | 2.81× | 0.257 | 3.52× | ok |
| Shootout-C++/hash | 0.124 | 0.407 | 3.28× | 0.407 | 3.28× | ok |
| Shootout-C++/hash2 | 0.117 | 0.396 | 3.38× | 0.404 | 3.45× | ok |
| Shootout-C++/heapsort | 0.084 | 0.218 | 2.60× | 0.257 | 3.06× | ok |
| Shootout-C++/lists | 0.082 | 0.269 | 3.28× | 0.255 | 3.11× | ok |
| Shootout-C++/lists1 | 0.087 | 0.248 | 2.85× | 0.280 | 3.22× | ok |
| Shootout-C++/matrix | 0.069 | 0.195 | 2.83× | 0.283 | 4.10× | ok |
| Shootout-C++/methcall | 0.064 | 0.194 | 3.03× | 0.204 | 3.19× | ok |
| Shootout-C++/moments | 0.101 | 0.301 | 2.98× | 0.309 | 3.06× | ok |
| Shootout-C++/random | 0.083 | 0.195 | 2.35× | 0.273 | 3.29× | ok |
| Shootout-C++/sieve | 0.089 | 0.241 | 2.71× | 0.284 | 3.19× | ok |
| SmallPT | 0.039 | 0.290 | 7.44× | 0.155 | 3.97× | ok |
| Stanford/Bubblesort | 0.011 | 0.052 | 4.73× | 0.047 | 4.27× | ok |
| Stanford/FloatMM | 0.012 | 0.058 | 4.83× | 0.065 | 5.42× | ok |
| Stanford/Puzzle | 0.021 | 0.117 | 5.57× | 0.110 | 5.24× | ok |
| Stanford/Treesort | 0.014 | 0.080 | 5.71× | 0.051 | 3.64× | ok |
| bg/binarytrees/2 | 0.068 | 0.399 | 5.87× | 0.223 | 3.28× | ok |
| bg/fannkuchredux/3 | 0.038 | 0.115 | 3.03× | 0.116 | 3.05× | ok |
| bg/fasta/1 | 0.054 | 0.151 | 2.80× | 0.173 | 3.20× | ok |
| bg/fasta/2 | 0.054 | 0.151 | 2.80× | 0.169 | 3.13× | ok |
| bg/fasta/3 | 0.083 | 0.222 | 2.67× | 0.254 | 3.06× | ok |
| bg/fasta/4 | 0.074 | 0.176 | 2.38× | 0.248 | 3.35× | ok |
| bg/fasta/6 | 0.144 | 0.442 | 3.07× | 0.519 | 3.60× | ok |
| bg/mandelbrot/0 | 0.173 | 0.630 | 3.64× | 0.682 | 3.94× | ok |
| bg/mandelbrot/2 | 0.087 | 0.244 | 2.80× | 0.285 | 3.28× | ok |
| bg/mandelbrot/3 | 0.095 | 0.232 | 2.44× | 0.285 | 3.00× | ok |
| bg/mandelbrot/5 | 0.047 | 0.149 | 3.17× | 0.151 | 3.21× | ok |
| bg/mandelbrot/7 | 0.060 | 0.207 | 3.45× | 0.160 | 2.67× | ok |
| bg/mandelbrot/9 | 0.056 | 0.176 | 3.14× | 0.158 | 2.82× | ok |
| bg/nbody/1 | 0.041 | 0.157 | 3.83× | 0.165 | 4.02× | ok |
| bg/nbody/2 | 0.033 | 0.119 | 3.61× | 0.133 | 4.03× | ok |
| bg/nbody/3 | 0.030 | 0.109 | 3.63× | 0.118 | 3.93× | ok |
| bg/nbody/6 | 0.040 | 0.159 | 3.98× | 0.175 | 4.38× | ok |
| bg/pidigits/4 | 0.118 | 0.334 | 2.83× | 0.462 | 3.92× | ok |
| bg/pidigits/5 | 0.077 | 0.206 | 2.68× | 0.237 | 3.08× | ok |
| bg/revcomp/1 | 0.091 | 0.243 | 2.67× | 0.262 | 2.88× | ok |
| bg/revcomp/5 | 0.082 | 0.245 | 2.99× | 0.300 | 3.66× | ok |
| bg/spectralnorm/1 | 0.106 | 0.330 | 3.11× | 0.397 | 3.75× | ok |
| box2d | 1.699 | 7.430 | 4.37× | 4.503 | 2.65× | ok |
| fmt | 0.893 | 5.187 | 5.81× | 3.918 | 4.39× | ok |
| hexxagon | 0.278 | 1.057 | 3.80× | 1.078 | 3.88× | ok |
| lambda | 0.123 | 1.125 | 9.15× | 0.569 | 4.63× | ok |
| minisat | 0.144 | 1.012 | 7.03× | 0.637 | 4.42× | ok |
| nlohmann-json | 0.823 | 3.440 | 4.18× | 2.947 | 3.58× | ok |
| pugixml | 0.705 | 5.424 | 7.69× | 3.896 | 5.53× | ok |
| pugixml-tests | 4.647 | 34.316 | 7.38× | 24.530 | 5.28× | ok |
| rapidjson | 0.222 | 1.147 | 5.17× | 0.669 | 3.01× | ok |
| re2 | 2.979 | 17.380 | 5.83× | 9.957 | 3.34× | ok |
| re2-test-re2 | 5.499 | 26.443 | 4.81× | 20.713 | 3.77× | ok |
| re2-test-search | 5.335 | 23.181 | 4.35× | 20.013 | 3.75× | ok |
| tramp3d-v4 | 3.329 | 20.136 | 6.05× | 14.339 | 4.31× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.060 | 0.130 | 2.17× | 0.182 | 3.03× | ok |
| Adobe-C++/loop_unroll | 0.038 | 0.101 | 2.66× | 0.104 | 2.74× | ok |
| Adobe-C++/simple_types_constant_folding | 0.035 | 0.104 | 2.97× | 0.107 | 3.06× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.033 | 0.095 | 2.88× | 0.116 | 3.52× | ok |
| Adobe-C++/stepanov_abstraction | 0.031 | 0.068 | 2.19× | 0.085 | 2.74× | ok |
| Adobe-C++/stepanov_vector | 0.064 | 0.119 | 1.86× | 0.189 | 2.95× | ok |
| Bullet | 4.040 | 9.651 | 2.39× | 13.996 | 3.46× | ok |
| CLAMR | 2.146 | 4.532 | 2.11× | 7.019 | 3.27× | ok |
| CoyoteBench/almabench | 0.027 | 0.063 | 2.33× | 0.076 | 2.81× | ok |
| CoyoteBench/fftbench | 0.096 | 0.209 | 2.18× | 0.270 | 2.81× | ok |
| CoyoteBench/huffbench | 0.030 | 0.061 | 2.03× | 0.071 | 2.37× | ok |
| CoyoteBench/lpbench | 0.029 | 0.057 | 1.97× | 0.080 | 2.76× | ok |
| DOE/HACCKernels | 0.102 | 0.234 | 2.29× | 0.289 | 2.83× | ok |
| DOE/HPCCG | 0.676 | 1.359 | 2.01× | 1.909 | 2.82× | ok |
| DOE/PENNANT | 1.291 | 2.970 | 2.30× | 3.802 | 2.95× | ok |
| DOE/miniFE | 0.512 | 1.230 | 2.40× | 1.709 | 3.34× | ok |
| Misc-C++-EH/spirit | 0.265 | 0.959 | 3.62× | 1.157 | 4.37× | ok |
| Misc-C++-Large/ray | 0.098 | 0.232 | 2.37× | 0.246 | 2.51× | ok |
| Misc-C++-Large/sphereflake | 0.077 | 0.199 | 2.58× | 0.223 | 2.90× | ok |
| Misc-C++/bigfib | 0.103 | 0.244 | 2.37× | 0.346 | 3.36× | ok |
| Misc-C++/oopack_v1p8 | 0.028 | 0.062 | 2.21× | 0.084 | 3.00× | ok |
| Misc-C++/stepanov_container | 0.143 | 0.326 | 2.28× | 0.479 | 3.35× | ok |
| Misc-C++/stepanov_v1p2 | 0.027 | 0.060 | 2.22× | 0.086 | 3.19× | ok |
| PAQ8p | 0.041 | 0.116 | 2.83× | 0.119 | 2.90× | ok |
| Prolangs-C++/life | 0.003 | 0.010 | — | 0.021 | — | ok |
| Prolangs-C++/ocean | 0.008 | 0.019 | — | 0.033 | — | ok |
| Prolangs-C++/primes | 0.006 | 0.015 | — | 0.025 | — | ok |
| Shootout-C++-EH/except | 0.066 | 0.160 | 2.42× | 0.192 | 2.91× | ok |
| Shootout-C++/ackermann | 0.069 | 0.167 | 2.42× | 0.219 | 3.17× | ok |
| Shootout-C++/ary3 | 0.070 | 0.164 | 2.34× | 0.208 | 2.97× | ok |
| Shootout-C++/fibo | 0.070 | 0.164 | 2.34× | 0.226 | 3.23× | ok |
| Shootout-C++/hash | 0.101 | 0.233 | 2.31× | 0.273 | 2.70× | ok |
| Shootout-C++/hash2 | 0.086 | 0.196 | 2.28× | 0.255 | 2.97× | ok |
| Shootout-C++/heapsort | 0.093 | 0.180 | 1.94× | 0.234 | 2.52× | ok |
| Shootout-C++/lists | 0.070 | 0.156 | 2.23× | 0.242 | 3.46× | ok |
| Shootout-C++/lists1 | 0.076 | 0.202 | 2.66× | 0.219 | 2.88× | ok |
| Shootout-C++/matrix | 0.061 | 0.142 | 2.33× | 0.219 | 3.59× | ok |
| Shootout-C++/methcall | 0.066 | 0.150 | 2.27× | 0.184 | 2.79× | ok |
| Shootout-C++/moments | 0.086 | 0.188 | 2.19× | 0.224 | 2.60× | ok |
| Shootout-C++/random | 0.079 | 0.169 | 2.14× | 0.222 | 2.81× | ok |
| Shootout-C++/sieve | 0.079 | 0.183 | 2.32× | 0.238 | 3.01× | ok |
| SmallPT | 0.026 | 0.054 | 2.08× | 0.071 | 2.73× | ok |
| Stanford/Bubblesort | 0.009 | 0.021 | — | 0.029 | — | ok |
| Stanford/FloatMM | 0.008 | 0.021 | — | 0.029 | — | ok |
| Stanford/Puzzle | 0.009 | 0.023 | — | 0.030 | — | ok |
| Stanford/Treesort | 0.009 | 0.022 | — | 0.028 | — | ok |
| bg/binarytrees/2 | 0.063 | 0.146 | 2.32× | 0.190 | 3.02× | ok |
| bg/fannkuchredux/3 | 0.031 | 0.059 | 1.90× | 0.081 | 2.61× | ok |
| bg/fasta/1 | 0.046 | 0.099 | 2.15× | 0.131 | 2.85× | ok |
| bg/fasta/2 | 0.045 | 0.091 | 2.02× | 0.146 | 3.24× | ok |
| bg/fasta/3 | 0.074 | 0.171 | 2.31× | 0.202 | 2.73× | ok |
| bg/fasta/4 | 0.069 | 0.140 | 2.03× | 0.174 | 2.52× | ok |
| bg/fasta/6 | 0.126 | 0.258 | 2.05× | 0.353 | 2.80× | ok |
| bg/mandelbrot/0 | 0.120 | 0.282 | 2.35× | 0.377 | 3.14× | ok |
| bg/mandelbrot/2 | 0.093 | 0.182 | 1.96× | 0.241 | 2.59× | ok |
| bg/mandelbrot/3 | 0.083 | 0.183 | 2.20× | 0.249 | 3.00× | ok |
| bg/mandelbrot/5 | 0.041 | 0.082 | 2.00× | 0.111 | 2.71× | ok |
| bg/mandelbrot/7 | 0.041 | 0.100 | 2.44× | 0.107 | 2.61× | ok |
| bg/mandelbrot/9 | 0.039 | 0.089 | 2.28× | 0.113 | 2.90× | ok |
| bg/nbody/1 | 0.027 | 0.058 | 2.15× | 0.077 | 2.85× | ok |
| bg/nbody/2 | 0.025 | 0.050 | 2.00× | 0.070 | 2.80× | ok |
| bg/nbody/3 | 0.025 | 0.052 | 2.08× | 0.069 | 2.76× | ok |
| bg/nbody/6 | 0.026 | 0.053 | 2.04× | 0.085 | 3.27× | ok |
| bg/pidigits/4 | 0.110 | 0.264 | 2.40× | 0.308 | 2.80× | ok |
| bg/pidigits/5 | 0.067 | 0.147 | 2.19× | 0.200 | 2.99× | ok |
| bg/revcomp/1 | 0.076 | 0.168 | 2.21× | 0.229 | 3.01× | ok |
| bg/revcomp/5 | 0.073 | 0.164 | 2.25× | 0.240 | 3.29× | ok |
| bg/spectralnorm/1 | 0.110 | 0.217 | 1.97× | 0.328 | 2.98× | ok |
| box2d | 1.297 | 2.813 | 2.17× | 3.809 | 2.94× | ok |
| fmt | 0.394 | 0.972 | 2.47× | 1.590 | 4.04× | ok |
| hexxagon | 0.250 | 0.584 | 2.34× | 0.793 | 3.17× | ok |
| lambda | 0.040 | 0.121 | 3.02× | 0.160 | 4.00× | ok |
| minisat | 0.049 | 0.126 | 2.57× | 0.152 | 3.10× | ok |
| nlohmann-json | 0.311 | 0.856 | 2.75× | 1.306 | 4.20× | ok |
| pugixml | 0.200 | 0.470 | 2.35× | 0.729 | 3.65× | ok |
| pugixml-tests | 2.670 | 7.279 | 2.73× | 8.690 | 3.25× | ok |
| rapidjson | 0.090 | 0.240 | 2.67× | 0.262 | 2.91× | ok |
| re2 | 2.537 | 6.657 | 2.62× | 5.664 | 2.23× | ok |
| re2-test-re2 | 3.863 | 9.299 | 2.41× | 12.131 | 3.14× | ok |
| re2-test-search | 3.533 | 8.610 | 2.44× | 12.360 | 3.50× | ok |
| tramp3d-v4 | 0.618 | 2.179 | 3.53× | 1.543 | 2.50× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
