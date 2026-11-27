# Public benchmarks: Intel (GitHub)

Measured compiler: [`c37fb6f9d`](https://github.com/vishvananda/cppgm/commit/c37fb6f9de8fa22d3ae66364951928f39bbd5e25) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/46045514956) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: Intel(R) Xeon(R) 6975P-C.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.31× | 74 | 2.97× | 74 |
| Compile CPU, `-O0` | 3.26× | 76 | 3.21× | 76 |
| Compile CPU, `-O3` | 4.33× | 80 | 3.88× | 80 |
| Compile peak RSS, `-O0` | 1.42× | 81 | 2.15× | 81 |
| Compile peak RSS, `-O3` | 1.69× | 81 | 2.26× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.11× | 81 | 1.07× | 81 |
| Run CPU, `-O3` | 1.01× | 80 | 1.03× | 80 |
| Run instructions, `-O3` | 1.05× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.953 to 1.041; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.062 | 0.249 | 4.02× | 0.175 | 2.82× | ok |
| Adobe-C++/loop_unroll | 0.049 | 0.551 | 11.24× | 0.167 | 3.41× | ok |
| Adobe-C++/simple_types_constant_folding | 0.058 | 0.650 | 11.21× | 0.205 | 3.53× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.045 | 0.467 | 10.38× | 0.221 | 4.91× | ok |
| Adobe-C++/stepanov_abstraction | 0.037 | 0.167 | 4.51× | 0.109 | 2.95× | ok |
| Adobe-C++/stepanov_vector | 0.073 | 0.304 | 4.16× | 0.234 | 3.21× | ok |
| Bullet | 4.320 | 15.737 | 3.64× | 14.816 | 3.43× | ok |
| CLAMR | 2.093 | 8.509 | 4.07× | 7.002 | 3.35× | ok |
| CoyoteBench/almabench | 0.027 | 0.076 | 2.81× | 0.086 | 3.19× | ok |
| CoyoteBench/fftbench | 0.097 | 0.246 | 2.54× | 0.303 | 3.12× | ok |
| CoyoteBench/huffbench | 0.031 | 0.067 | 2.16× | 0.080 | 2.58× | ok |
| CoyoteBench/lpbench | 0.027 | 0.070 | 2.59× | 0.075 | 2.78× | ok |
| DOE/HACCKernels | 0.097 | 0.258 | 2.66× | 0.322 | 3.32× | ok |
| DOE/HPCCG | 0.704 | 1.768 | 2.51× | 1.901 | 2.70× | ok |
| DOE/PENNANT | 1.476 | 3.732 | 2.53× | 3.944 | 2.67× | ok |
| DOE/miniFE | 0.647 | 2.105 | 3.25× | 2.255 | 3.49× | ok |
| Misc-C++-EH/spirit | 0.383 | 2.321 | 6.06× | 1.715 | 4.48× | ok |
| Misc-C++-Large/ray | 0.105 | 0.279 | 2.66× | 0.349 | 3.32× | ok |
| Misc-C++-Large/sphereflake | 0.086 | 0.213 | 2.48× | 0.296 | 3.44× | ok |
| Misc-C++/bigfib | 0.112 | 0.395 | 3.53× | 0.416 | 3.71× | ok |
| Misc-C++/oopack_v1p8 | 0.031 | 0.091 | 2.94× | 0.098 | 3.16× | ok |
| Misc-C++/stepanov_container | 0.143 | 0.585 | 4.09× | 0.495 | 3.46× | ok |
| Misc-C++/stepanov_v1p2 | 0.028 | 0.117 | 4.18× | 0.089 | 3.18× | ok |
| PAQ8p | 0.064 | 0.447 | 6.98× | 0.215 | 3.36× | ok |
| Prolangs-C++/life | 0.004 | 0.032 | — | 0.029 | — | ok |
| Prolangs-C++/ocean | 0.010 | 0.065 | 6.50× | 0.041 | 4.10× | ok |
| Prolangs-C++/primes | 0.006 | 0.022 | — | 0.026 | — | ok |
| Shootout-C++-EH/except | 0.062 | 0.145 | 2.34× | 0.195 | 3.15× | ok |
| Shootout-C++/ackermann | 0.070 | 0.161 | 2.30× | 0.240 | 3.43× | ok |
| Shootout-C++/ary3 | 0.073 | 0.181 | 2.48× | 0.217 | 2.97× | ok |
| Shootout-C++/fibo | 0.071 | 0.160 | 2.25× | 0.236 | 3.32× | ok |
| Shootout-C++/hash | 0.107 | 0.304 | 2.84× | 0.359 | 3.36× | ok |
| Shootout-C++/hash2 | 0.095 | 0.264 | 2.78× | 0.280 | 2.95× | ok |
| Shootout-C++/heapsort | 0.080 | 0.191 | 2.39× | 0.242 | 3.02× | ok |
| Shootout-C++/lists | 0.072 | 0.187 | 2.60× | 0.221 | 3.07× | ok |
| Shootout-C++/lists1 | 0.083 | 0.213 | 2.57× | 0.259 | 3.12× | ok |
| Shootout-C++/matrix | 0.064 | 0.164 | 2.56× | 0.213 | 3.33× | ok |
| Shootout-C++/methcall | 0.067 | 0.144 | 2.15× | 0.194 | 2.90× | ok |
| Shootout-C++/moments | 0.094 | 0.253 | 2.69× | 0.247 | 2.63× | ok |
| Shootout-C++/random | 0.077 | 0.169 | 2.19× | 0.236 | 3.06× | ok |
| Shootout-C++/sieve | 0.081 | 0.214 | 2.64× | 0.273 | 3.37× | ok |
| SmallPT | 0.026 | 0.085 | 3.27× | 0.076 | 2.92× | ok |
| Stanford/Bubblesort | 0.008 | 0.025 | — | 0.028 | — | ok |
| Stanford/FloatMM | 0.008 | 0.025 | — | 0.028 | — | ok |
| Stanford/Puzzle | 0.010 | 0.035 | 3.50× | 0.033 | 3.30× | ok |
| Stanford/Treesort | 0.009 | 0.028 | — | 0.031 | — | ok |
| bg/binarytrees/2 | 0.062 | 0.154 | 2.48× | 0.207 | 3.34× | ok |
| bg/fannkuchredux/3 | 0.032 | 0.072 | 2.25× | 0.085 | 2.66× | ok |
| bg/fasta/1 | 0.048 | 0.125 | 2.60× | 0.129 | 2.69× | ok |
| bg/fasta/2 | 0.050 | 0.116 | 2.32× | 0.124 | 2.48× | ok |
| bg/fasta/3 | 0.075 | 0.197 | 2.63× | 0.230 | 3.07× | ok |
| bg/fasta/4 | 0.068 | 0.149 | 2.19× | 0.176 | 2.59× | ok |
| bg/fasta/6 | 0.116 | 0.434 | 3.74× | 0.401 | 3.46× | ok |
| bg/mandelbrot/0 | 0.158 | 0.440 | 2.78× | 0.425 | 2.69× | ok |
| bg/mandelbrot/2 | 0.083 | 0.193 | 2.33× | 0.251 | 3.02× | ok |
| bg/mandelbrot/3 | 0.090 | 0.194 | 2.16× | 0.261 | 2.90× | ok |
| bg/mandelbrot/5 | 0.040 | 0.097 | 2.43× | 0.123 | 3.08× | ok |
| bg/mandelbrot/7 | 0.045 | 0.116 | 2.58× | 0.154 | 3.42× | ok |
| bg/mandelbrot/9 | 0.041 | 0.112 | 2.73× | 0.121 | 2.95× | ok |
| bg/nbody/1 | 0.028 | 0.102 | 3.64× | 0.083 | 2.96× | ok |
| bg/nbody/2 | 0.023 | 0.064 | 2.78× | 0.076 | 3.30× | ok |
| bg/nbody/3 | 0.025 | 0.061 | 2.44× | 0.074 | 2.96× | ok |
| bg/nbody/6 | 0.027 | 0.091 | 3.37× | 0.089 | 3.30× | ok |
| bg/pidigits/4 | 0.111 | 0.282 | 2.54× | 0.355 | 3.20× | ok |
| bg/pidigits/5 | 0.069 | 0.164 | 2.38× | 0.252 | 3.65× | ok |
| bg/revcomp/1 | 0.091 | 0.209 | 2.30× | 0.246 | 2.70× | ok |
| bg/revcomp/5 | 0.074 | 0.193 | 2.61× | 0.257 | 3.47× | ok |
| bg/spectralnorm/1 | 0.103 | 0.256 | 2.49× | 0.289 | 2.81× | ok |
| box2d | 1.387 | 4.296 | 3.10× | 4.663 | 3.36× | ok |
| fmt | 0.446 | 2.461 | 5.52× | 2.045 | 4.59× | ok |
| hexxagon | 0.242 | 0.616 | 2.55× | 0.824 | 3.40× | ok |
| lambda | 0.051 | 0.273 | 5.35× | 0.223 | 4.37× | ok |
| minisat | 0.056 | 0.292 | 5.21× | 0.205 | 3.66× | ok |
| nlohmann-json | 0.377 | 1.864 | 4.94× | 1.821 | 4.83× | ok |
| pugixml | 0.249 | 1.333 | 5.35× | 0.944 | 3.79× | ok |
| pugixml-tests | 3.131 | 14.777 | 4.72× | 12.620 | 4.03× | ok |
| rapidjson | 0.117 | 0.483 | 4.13× | 0.386 | 3.30× | ok |
| re2 | 2.958 | 10.778 | 3.64× | 6.584 | 2.23× | ok |
| re2-test-re2 | 4.455 | 15.158 | 3.40× | 14.867 | 3.34× | ok |
| re2-test-search | 4.408 | 14.070 | 3.19× | 14.314 | 3.25× | ok |
| tramp3d-v4 | 1.007 | 8.056 | 8.00× | 2.547 | 2.53× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.127 | 0.805 | 6.34× | 0.500 | 3.94× | ok |
| Adobe-C++/loop_unroll | 0.438 | 5.169 | 11.80× | 3.994 | 9.12× | ok |
| Adobe-C++/simple_types_constant_folding | 0.250 | 2.869 | 11.48× | 2.254 | 9.02× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.246 | 2.169 | 8.82× | 1.755 | 7.13× | ok |
| Adobe-C++/stepanov_abstraction | 0.091 | 1.088 | 11.96× | 0.462 | 5.08× | ok |
| Adobe-C++/stepanov_vector | 0.125 | 1.412 | 11.30× | 0.607 | 4.86× | ok |
| Bullet | 5.790 | 35.446 | 6.12× | 27.373 | 4.73× | ok |
| CLAMR | 4.119 | 22.630 | 5.49× | 16.343 | 3.97× | ok |
| CoyoteBench/almabench | 0.034 | 0.153 | 4.50× | 0.129 | 3.79× | ok |
| CoyoteBench/fftbench | 0.130 | 0.403 | 3.10× | 0.418 | 3.22× | ok |
| CoyoteBench/huffbench | 0.040 | 0.203 | 5.08× | 0.140 | 3.50× | ok |
| CoyoteBench/lpbench | 0.036 | 0.171 | 4.75× | 0.182 | 5.06× | ok |
| DOE/HACCKernels | 0.116 | 0.368 | 3.17× | 0.422 | 3.64× | ok |
| DOE/HPCCG | 0.739 | 2.515 | 3.40× | 2.210 | 2.99× | ok |
| DOE/PENNANT | 1.669 | 5.884 | 3.53× | 6.158 | 3.69× | ok |
| DOE/miniFE | 0.875 | 4.250 | 4.86× | 3.612 | 4.13× | ok |
| Misc-C++-EH/spirit | 0.605 | 3.384 | 5.59× | 3.512 | 5.80× | ok |
| Misc-C++-Large/ray | 0.117 | 0.477 | 4.08× | 0.408 | 3.49× | ok |
| Misc-C++-Large/sphereflake | 0.108 | 0.726 | 6.72× | 0.392 | 3.63× | ok |
| Misc-C++/bigfib | 0.149 | 0.570 | 3.83× | 0.562 | 3.77× | ok |
| Misc-C++/oopack_v1p8 | 0.039 | 0.184 | 4.72× | 0.172 | 4.41× | ok |
| Misc-C++/stepanov_container | 0.210 | 0.912 | 4.34× | 0.866 | 4.12× | ok |
| Misc-C++/stepanov_v1p2 | 0.041 | 0.199 | 4.85× | 0.171 | 4.17× | ok |
| PAQ8p | 0.315 | 3.792 | 12.04× | 1.491 | 4.73× | ok |
| Prolangs-C++/life | 0.010 | 0.103 | 10.30× | 0.069 | 6.90× | ok |
| Prolangs-C++/ocean | 0.021 | 0.205 | 9.76× | 0.125 | 5.95× | ok |
| Prolangs-C++/primes | 0.008 | 0.035 | — | 0.038 | — | ok |
| Shootout-C++-EH/except | 0.065 | 0.174 | 2.68× | 0.208 | 3.20× | ok |
| Shootout-C++/ackermann | 0.077 | 0.200 | 2.60× | 0.247 | 3.21× | ok |
| Shootout-C++/ary3 | 0.075 | 0.216 | 2.88× | 0.247 | 3.29× | ok |
| Shootout-C++/fibo | 0.076 | 0.202 | 2.66× | 0.247 | 3.25× | ok |
| Shootout-C++/hash | 0.125 | 0.405 | 3.24× | 0.445 | 3.56× | ok |
| Shootout-C++/hash2 | 0.115 | 0.395 | 3.43× | 0.407 | 3.54× | ok |
| Shootout-C++/heapsort | 0.095 | 0.217 | 2.28× | 0.236 | 2.48× | ok |
| Shootout-C++/lists | 0.077 | 0.220 | 2.86× | 0.251 | 3.26× | ok |
| Shootout-C++/lists1 | 0.092 | 0.254 | 2.76× | 0.318 | 3.46× | ok |
| Shootout-C++/matrix | 0.078 | 0.202 | 2.59× | 0.275 | 3.53× | ok |
| Shootout-C++/methcall | 0.068 | 0.189 | 2.78× | 0.209 | 3.07× | ok |
| Shootout-C++/moments | 0.103 | 0.315 | 3.06× | 0.306 | 2.97× | ok |
| Shootout-C++/random | 0.082 | 0.191 | 2.33× | 0.257 | 3.13× | ok |
| Shootout-C++/sieve | 0.088 | 0.232 | 2.64× | 0.317 | 3.60× | ok |
| SmallPT | 0.037 | 0.278 | 7.51× | 0.167 | 4.51× | ok |
| Stanford/Bubblesort | 0.010 | 0.050 | 5.00× | 0.044 | 4.40× | ok |
| Stanford/FloatMM | 0.012 | 0.058 | 4.83× | 0.069 | 5.75× | ok |
| Stanford/Puzzle | 0.022 | 0.121 | 5.50× | 0.115 | 5.23× | ok |
| Stanford/Treesort | 0.015 | 0.083 | 5.53× | 0.054 | 3.60× | ok |
| bg/binarytrees/2 | 0.069 | 0.413 | 5.99× | 0.226 | 3.28× | ok |
| bg/fannkuchredux/3 | 0.038 | 0.122 | 3.21× | 0.116 | 3.05× | ok |
| bg/fasta/1 | 0.055 | 0.168 | 3.05× | 0.165 | 3.00× | ok |
| bg/fasta/2 | 0.056 | 0.178 | 3.18× | 0.165 | 2.95× | ok |
| bg/fasta/3 | 0.082 | 0.209 | 2.55× | 0.262 | 3.20× | ok |
| bg/fasta/4 | 0.074 | 0.175 | 2.36× | 0.224 | 3.03× | ok |
| bg/fasta/6 | 0.144 | 0.443 | 3.08× | 0.540 | 3.75× | ok |
| bg/mandelbrot/0 | 0.171 | 0.599 | 3.50× | 0.600 | 3.51× | ok |
| bg/mandelbrot/2 | 0.091 | 0.271 | 2.98× | 0.301 | 3.31× | ok |
| bg/mandelbrot/3 | 0.090 | 0.232 | 2.58× | 0.316 | 3.51× | ok |
| bg/mandelbrot/5 | 0.054 | 0.142 | 2.63× | 0.160 | 2.96× | ok |
| bg/mandelbrot/7 | 0.063 | 0.194 | 3.08× | 0.159 | 2.52× | ok |
| bg/mandelbrot/9 | 0.052 | 0.167 | 3.21× | 0.158 | 3.04× | ok |
| bg/nbody/1 | 0.041 | 0.156 | 3.80× | 0.160 | 3.90× | ok |
| bg/nbody/2 | 0.034 | 0.113 | 3.32× | 0.119 | 3.50× | ok |
| bg/nbody/3 | 0.030 | 0.111 | 3.70× | 0.103 | 3.43× | ok |
| bg/nbody/6 | 0.040 | 0.162 | 4.05× | 0.166 | 4.15× | ok |
| bg/pidigits/4 | 0.117 | 0.329 | 2.81× | 0.439 | 3.75× | ok |
| bg/pidigits/5 | 0.085 | 0.195 | 2.29× | 0.276 | 3.25× | ok |
| bg/revcomp/1 | 0.083 | 0.239 | 2.88× | 0.262 | 3.16× | ok |
| bg/revcomp/5 | 0.082 | 0.235 | 2.87× | 0.297 | 3.62× | ok |
| bg/spectralnorm/1 | 0.112 | 0.360 | 3.21× | 0.338 | 3.02× | ok |
| box2d | 1.670 | 7.546 | 4.52× | 5.601 | 3.35× | ok |
| fmt | 0.924 | 5.197 | 5.62× | 3.979 | 4.31× | ok |
| hexxagon | 0.288 | 0.967 | 3.36× | 1.087 | 3.77× | ok |
| lambda | 0.123 | 1.020 | 8.29× | 0.576 | 4.68× | ok |
| minisat | 0.141 | 0.992 | 7.04× | 0.650 | 4.61× | ok |
| nlohmann-json | 0.757 | 3.428 | 4.53× | 3.056 | 4.04× | ok |
| pugixml | 0.677 | 5.498 | 8.12× | 3.697 | 5.46× | ok |
| pugixml-tests | 4.607 | 33.879 | 7.35× | 23.861 | 5.18× | ok |
| rapidjson | 0.237 | 1.219 | 5.14× | 0.671 | 2.83× | ok |
| re2 | 2.881 | 18.393 | 6.38× | 9.967 | 3.46× | ok |
| re2-test-re2 | 5.666 | 26.723 | 4.72× | 21.791 | 3.85× | ok |
| re2-test-search | 5.536 | 23.876 | 4.31× | 20.313 | 3.67× | ok |
| tramp3d-v4 | 2.540 | 23.509 | 9.26× | 13.825 | 5.44× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.058 | 0.132 | 2.28× | 0.143 | 2.47× | ok |
| Adobe-C++/loop_unroll | 0.034 | 0.100 | 2.94× | 0.099 | 2.91× | ok |
| Adobe-C++/simple_types_constant_folding | 0.040 | 0.099 | 2.48× | 0.106 | 2.65× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.034 | 0.090 | 2.65× | 0.115 | 3.38× | ok |
| Adobe-C++/stepanov_abstraction | 0.031 | 0.065 | 2.10× | 0.086 | 2.77× | ok |
| Adobe-C++/stepanov_vector | 0.056 | 0.135 | 2.41× | 0.183 | 3.27× | ok |
| Bullet | 3.936 | 9.353 | 2.38× | 12.153 | 3.09× | ok |
| CLAMR | 1.938 | 4.454 | 2.30× | 5.654 | 2.92× | ok |
| CoyoteBench/almabench | 0.027 | 0.063 | 2.33× | 0.075 | 2.78× | ok |
| CoyoteBench/fftbench | 0.095 | 0.217 | 2.28× | 0.280 | 2.95× | ok |
| CoyoteBench/huffbench | 0.031 | 0.057 | 1.84× | 0.076 | 2.45× | ok |
| CoyoteBench/lpbench | 0.027 | 0.055 | 2.04× | 0.071 | 2.63× | ok |
| DOE/HACCKernels | 0.095 | 0.227 | 2.39× | 0.297 | 3.13× | ok |
| DOE/HPCCG | 0.671 | 1.541 | 2.30× | 1.757 | 2.62× | ok |
| DOE/PENNANT | 1.325 | 2.804 | 2.12× | 3.450 | 2.60× | ok |
| DOE/miniFE | 0.595 | 1.368 | 2.30× | 1.905 | 3.20× | ok |
| Misc-C++-EH/spirit | 0.278 | 0.809 | 2.91× | 1.073 | 3.86× | ok |
| Misc-C++-Large/ray | 0.103 | 0.229 | 2.22× | 0.316 | 3.07× | ok |
| Misc-C++-Large/sphereflake | 0.083 | 0.186 | 2.24× | 0.276 | 3.33× | ok |
| Misc-C++/bigfib | 0.100 | 0.260 | 2.60× | 0.372 | 3.72× | ok |
| Misc-C++/oopack_v1p8 | 0.030 | 0.063 | 2.10× | 0.084 | 2.80× | ok |
| Misc-C++/stepanov_container | 0.128 | 0.341 | 2.66× | 0.417 | 3.26× | ok |
| Misc-C++/stepanov_v1p2 | 0.027 | 0.062 | 2.30× | 0.074 | 2.74× | ok |
| PAQ8p | 0.042 | 0.115 | 2.74× | 0.121 | 2.88× | ok |
| Prolangs-C++/life | 0.003 | 0.010 | — | 0.021 | — | ok |
| Prolangs-C++/ocean | 0.008 | 0.021 | — | 0.029 | — | ok |
| Prolangs-C++/primes | 0.006 | 0.015 | — | 0.025 | — | ok |
| Shootout-C++-EH/except | 0.063 | 0.142 | 2.25× | 0.185 | 2.94× | ok |
| Shootout-C++/ackermann | 0.071 | 0.163 | 2.30× | 0.231 | 3.25× | ok |
| Shootout-C++/ary3 | 0.070 | 0.165 | 2.36× | 0.202 | 2.89× | ok |
| Shootout-C++/fibo | 0.071 | 0.164 | 2.31× | 0.226 | 3.18× | ok |
| Shootout-C++/hash | 0.100 | 0.227 | 2.27× | 0.310 | 3.10× | ok |
| Shootout-C++/hash2 | 0.089 | 0.194 | 2.18× | 0.249 | 2.80× | ok |
| Shootout-C++/heapsort | 0.082 | 0.193 | 2.35× | 0.239 | 2.91× | ok |
| Shootout-C++/lists | 0.070 | 0.155 | 2.21× | 0.202 | 2.89× | ok |
| Shootout-C++/lists1 | 0.079 | 0.173 | 2.19× | 0.232 | 2.94× | ok |
| Shootout-C++/matrix | 0.064 | 0.162 | 2.53× | 0.212 | 3.31× | ok |
| Shootout-C++/methcall | 0.064 | 0.142 | 2.22× | 0.185 | 2.89× | ok |
| Shootout-C++/moments | 0.088 | 0.199 | 2.26× | 0.226 | 2.57× | ok |
| Shootout-C++/random | 0.078 | 0.170 | 2.18× | 0.224 | 2.87× | ok |
| Shootout-C++/sieve | 0.079 | 0.177 | 2.24× | 0.259 | 3.28× | ok |
| SmallPT | 0.025 | 0.055 | 2.20× | 0.070 | 2.80× | ok |
| Stanford/Bubblesort | 0.008 | 0.021 | — | 0.028 | — | ok |
| Stanford/FloatMM | 0.008 | 0.020 | — | 0.028 | — | ok |
| Stanford/Puzzle | 0.009 | 0.024 | — | 0.031 | — | ok |
| Stanford/Treesort | 0.009 | 0.022 | — | 0.030 | — | ok |
| bg/binarytrees/2 | 0.063 | 0.151 | 2.40× | 0.197 | 3.13× | ok |
| bg/fannkuchredux/3 | 0.033 | 0.062 | 1.88× | 0.080 | 2.42× | ok |
| bg/fasta/1 | 0.046 | 0.099 | 2.15× | 0.118 | 2.57× | ok |
| bg/fasta/2 | 0.048 | 0.092 | 1.92× | 0.115 | 2.40× | ok |
| bg/fasta/3 | 0.073 | 0.161 | 2.21× | 0.218 | 2.99× | ok |
| bg/fasta/4 | 0.067 | 0.142 | 2.12× | 0.168 | 2.51× | ok |
| bg/fasta/6 | 0.106 | 0.277 | 2.61× | 0.348 | 3.28× | ok |
| bg/mandelbrot/0 | 0.144 | 0.329 | 2.28× | 0.374 | 2.60× | ok |
| bg/mandelbrot/2 | 0.076 | 0.173 | 2.28× | 0.231 | 3.04× | ok |
| bg/mandelbrot/3 | 0.087 | 0.180 | 2.07× | 0.251 | 2.89× | ok |
| bg/mandelbrot/5 | 0.039 | 0.079 | 2.03× | 0.108 | 2.77× | ok |
| bg/mandelbrot/7 | 0.046 | 0.092 | 2.00× | 0.120 | 2.61× | ok |
| bg/mandelbrot/9 | 0.039 | 0.083 | 2.13× | 0.109 | 2.79× | ok |
| bg/nbody/1 | 0.027 | 0.057 | 2.11× | 0.072 | 2.67× | ok |
| bg/nbody/2 | 0.023 | 0.053 | 2.30× | 0.072 | 3.13× | ok |
| bg/nbody/3 | 0.025 | 0.050 | 2.00× | 0.070 | 2.80× | ok |
| bg/nbody/6 | 0.026 | 0.052 | 2.00× | 0.076 | 2.92× | ok |
| bg/pidigits/4 | 0.109 | 0.254 | 2.33× | 0.328 | 3.01× | ok |
| bg/pidigits/5 | 0.069 | 0.157 | 2.28× | 0.236 | 3.42× | ok |
| bg/revcomp/1 | 0.087 | 0.167 | 1.92× | 0.259 | 2.98× | ok |
| bg/revcomp/5 | 0.070 | 0.155 | 2.21× | 0.229 | 3.27× | ok |
| bg/spectralnorm/1 | 0.099 | 0.236 | 2.38× | 0.272 | 2.75× | ok |
| box2d | 1.311 | 2.877 | 2.19× | 4.046 | 3.09× | ok |
| fmt | 0.429 | 1.077 | 2.51× | 1.542 | 3.59× | ok |
| hexxagon | 0.243 | 0.560 | 2.30× | 0.779 | 3.21× | ok |
| lambda | 0.040 | 0.107 | 2.67× | 0.156 | 3.90× | ok |
| minisat | 0.048 | 0.126 | 2.62× | 0.157 | 3.27× | ok |
| nlohmann-json | 0.328 | 0.833 | 2.54× | 1.343 | 4.09× | ok |
| pugixml | 0.200 | 0.498 | 2.49× | 0.719 | 3.59× | ok |
| pugixml-tests | 2.935 | 7.426 | 2.53× | 9.494 | 3.23× | ok |
| rapidjson | 0.095 | 0.245 | 2.58× | 0.300 | 3.16× | ok |
| re2 | 2.698 | 6.873 | 2.55× | 5.617 | 2.08× | ok |
| re2-test-re2 | 3.928 | 9.614 | 2.45× | 12.762 | 3.25× | ok |
| re2-test-search | 3.981 | 8.887 | 2.23× | 12.415 | 3.12× | ok |
| tramp3d-v4 | 0.594 | 2.216 | 3.73× | 1.480 | 2.49× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
