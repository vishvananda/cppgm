# Public benchmarks: Intel (GitHub)

Measured compiler: [`b3e8ffd61`](https://github.com/vishvananda/cppgm/commit/b3e8ffd61d008c80042a09444d6d607c4b7d7f0c) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44818861403) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: Intel(R) Xeon(R) 6975P-C.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.31× | 74 | 2.98× | 74 |
| Compile CPU, `-O0` | 3.24× | 75 | 3.22× | 75 |
| Compile CPU, `-O3` | 4.35× | 80 | 3.88× | 80 |
| Compile peak RSS, `-O0` | 1.44× | 81 | 2.17× | 81 |
| Compile peak RSS, `-O3` | 1.69× | 81 | 2.27× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.11× | 81 | 1.06× | 81 |
| Run CPU, `-O3` | 0.99× | 80 | 1.00× | 80 |
| Run instructions, `-O3` | 1.00× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.909 to 1.020; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.062 | 0.250 | 4.03× | 0.176 | 2.84× | ok |
| Adobe-C++/loop_unroll | 0.053 | 0.558 | 10.53× | 0.172 | 3.25× | ok |
| Adobe-C++/simple_types_constant_folding | 0.058 | 0.654 | 11.28× | 0.208 | 3.59× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.046 | 0.481 | 10.46× | 0.239 | 5.20× | ok |
| Adobe-C++/stepanov_abstraction | 0.037 | 0.172 | 4.65× | 0.110 | 2.97× | ok |
| Adobe-C++/stepanov_vector | 0.073 | 0.303 | 4.15× | 0.236 | 3.23× | ok |
| Bullet | 4.692 | 17.573 | 3.75× | 15.735 | 3.35× | ok |
| CLAMR | 2.264 | 8.512 | 3.76× | 8.934 | 3.95× | ok |
| CoyoteBench/almabench | 0.028 | 0.064 | 2.29× | 0.078 | 2.79× | ok |
| CoyoteBench/fftbench | 0.093 | 0.234 | 2.52× | 0.294 | 3.16× | ok |
| CoyoteBench/huffbench | 0.027 | 0.071 | 2.63× | 0.084 | 3.11× | ok |
| CoyoteBench/lpbench | 0.025 | 0.063 | 2.52× | 0.073 | 2.92× | ok |
| DOE/HACCKernels | 0.098 | 0.239 | 2.44× | 0.310 | 3.16× | ok |
| DOE/HPCCG | 0.708 | 1.528 | 2.16× | 2.194 | 3.10× | ok |
| DOE/PENNANT | 1.252 | 3.982 | 3.18× | 4.158 | 3.32× | ok |
| DOE/miniFE | 0.586 | 2.213 | 3.78× | 2.343 | 4.00× | ok |
| Misc-C++-EH/spirit | 0.382 | 2.325 | 6.09× | 1.565 | 4.10× | ok |
| Misc-C++-Large/ray | 0.100 | 0.269 | 2.69× | 0.342 | 3.42× | ok |
| Misc-C++-Large/sphereflake | 0.083 | 0.223 | 2.69× | 0.281 | 3.39× | ok |
| Misc-C++/bigfib | 0.123 | 0.388 | 3.15× | 0.420 | 3.41× | ok |
| Misc-C++/oopack_v1p8 | 0.031 | 0.092 | 2.97× | 0.095 | 3.06× | ok |
| Misc-C++/stepanov_container | 0.158 | 0.583 | 3.69× | 0.555 | 3.51× | ok |
| Misc-C++/stepanov_v1p2 | 0.028 | 0.118 | 4.21× | 0.106 | 3.79× | ok |
| PAQ8p | 0.065 | 0.454 | 6.98× | 0.204 | 3.14× | ok |
| Prolangs-C++/life | 0.004 | 0.029 | — | 0.027 | — | ok |
| Prolangs-C++/ocean | 0.010 | 0.064 | 6.40× | 0.046 | 4.60× | ok |
| Prolangs-C++/primes | 0.006 | 0.022 | — | 0.025 | — | ok |
| Shootout-C++-EH/except | 0.061 | 0.145 | 2.38× | 0.193 | 3.16× | ok |
| Shootout-C++/ackermann | 0.069 | 0.161 | 2.33× | 0.231 | 3.35× | ok |
| Shootout-C++/ary3 | 0.071 | 0.179 | 2.52× | 0.225 | 3.17× | ok |
| Shootout-C++/fibo | 0.067 | 0.161 | 2.40× | 0.193 | 2.88× | ok |
| Shootout-C++/hash | 0.092 | 0.257 | 2.79× | 0.280 | 3.04× | ok |
| Shootout-C++/hash2 | 0.101 | 0.310 | 3.07× | 0.373 | 3.69× | ok |
| Shootout-C++/heapsort | 0.074 | 0.167 | 2.26× | 0.222 | 3.00× | ok |
| Shootout-C++/lists | 0.069 | 0.201 | 2.91× | 0.218 | 3.16× | ok |
| Shootout-C++/lists1 | 0.081 | 0.221 | 2.73× | 0.251 | 3.10× | ok |
| Shootout-C++/matrix | 0.061 | 0.150 | 2.46× | 0.204 | 3.34× | ok |
| Shootout-C++/methcall | 0.065 | 0.143 | 2.20× | 0.225 | 3.46× | ok |
| Shootout-C++/moments | 0.093 | 0.241 | 2.59× | 0.259 | 2.78× | ok |
| Shootout-C++/random | 0.077 | 0.169 | 2.19× | 0.237 | 3.08× | ok |
| Shootout-C++/sieve | 0.079 | 0.219 | 2.77× | 0.257 | 3.25× | ok |
| SmallPT | 0.027 | 0.082 | 3.04× | 0.081 | 3.00× | ok |
| Stanford/Bubblesort | 0.008 | 0.025 | — | 0.030 | — | ok |
| Stanford/FloatMM | 0.008 | 0.026 | — | 0.030 | — | ok |
| Stanford/Puzzle | 0.009 | 0.032 | — | 0.031 | — | ok |
| Stanford/Treesort | 0.008 | 0.026 | — | 0.029 | — | ok |
| bg/binarytrees/2 | 0.063 | 0.148 | 2.35× | 0.208 | 3.30× | ok |
| bg/fannkuchredux/3 | 0.030 | 0.068 | 2.27× | 0.081 | 2.70× | ok |
| bg/fasta/1 | 0.052 | 0.124 | 2.38× | 0.140 | 2.69× | ok |
| bg/fasta/2 | 0.047 | 0.117 | 2.49× | 0.134 | 2.85× | ok |
| bg/fasta/3 | 0.077 | 0.182 | 2.36× | 0.251 | 3.26× | ok |
| bg/fasta/4 | 0.067 | 0.144 | 2.15× | 0.174 | 2.60× | ok |
| bg/fasta/6 | 0.125 | 0.369 | 2.95× | 0.387 | 3.10× | ok |
| bg/mandelbrot/0 | 0.136 | 0.489 | 3.60× | 0.412 | 3.03× | ok |
| bg/mandelbrot/2 | 0.081 | 0.209 | 2.58× | 0.236 | 2.91× | ok |
| bg/mandelbrot/3 | 0.090 | 0.206 | 2.29× | 0.270 | 3.00× | ok |
| bg/mandelbrot/5 | 0.041 | 0.096 | 2.34× | 0.114 | 2.78× | ok |
| bg/mandelbrot/7 | 0.049 | 0.126 | 2.57× | 0.128 | 2.61× | ok |
| bg/mandelbrot/9 | 0.044 | 0.113 | 2.57× | 0.121 | 2.75× | ok |
| bg/nbody/1 | 0.030 | 0.102 | 3.40× | 0.089 | 2.97× | ok |
| bg/nbody/2 | 0.025 | 0.061 | 2.44× | 0.076 | 3.04× | ok |
| bg/nbody/3 | 0.027 | 0.067 | 2.48× | 0.074 | 2.74× | ok |
| bg/nbody/6 | 0.028 | 0.100 | 3.57× | 0.091 | 3.25× | ok |
| bg/pidigits/4 | 0.113 | 0.297 | 2.63× | 0.411 | 3.64× | ok |
| bg/pidigits/5 | 0.069 | 0.162 | 2.35× | 0.262 | 3.80× | ok |
| bg/revcomp/1 | 0.081 | 0.221 | 2.73× | 0.237 | 2.93× | ok |
| bg/revcomp/5 | 0.077 | 0.192 | 2.49× | 0.212 | 2.75× | ok |
| bg/spectralnorm/1 | 0.117 | 0.272 | 2.32× | 0.367 | 3.14× | ok |
| box2d | 1.405 | 4.098 | 2.92× | 3.241 | 2.31× | ok |
| fmt | 0.475 | 2.348 | 4.94× | 1.956 | 4.12× | ok |
| hexxagon | 0.245 | 0.551 | 2.25× | 0.825 | 3.37× | ok |
| lambda | 0.050 | 0.300 | 6.00× | 0.237 | 4.74× | ok |
| minisat | 0.061 | 0.297 | 4.87× | 0.205 | 3.36× | ok |
| nlohmann-json | 0.425 | 1.941 | 4.57× | 1.820 | 4.28× | ok |
| pugixml | 0.273 | 1.276 | 4.67× | 0.992 | 3.63× | ok |
| pugixml-tests | 3.393 | 14.965 | 4.41× | 13.299 | 3.92× | ok |
| rapidjson | 0.115 | 0.480 | 4.17× | 0.364 | 3.17× | ok |
| re2 | 2.958 | 10.998 | 3.72× | 6.531 | 2.21× | ok |
| re2-test-re2 | 4.518 | 15.418 | 3.41× | 15.000 | 3.32× | ok |
| re2-test-search | 4.506 | 14.609 | 3.24× | 14.877 | 3.30× | ok |
| tramp3d-v4 | 1.008 | 8.704 | 8.63× | 2.613 | 2.59× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.128 | 0.815 | 6.37× | 0.566 | 4.42× | ok |
| Adobe-C++/loop_unroll | 0.436 | 5.409 | 12.41× | 4.057 | 9.31× | ok |
| Adobe-C++/simple_types_constant_folding | 0.247 | 3.001 | 12.15× | 2.247 | 9.10× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.204 | 2.210 | 10.83× | 1.850 | 9.07× | ok |
| Adobe-C++/stepanov_abstraction | 0.101 | 0.962 | 9.52× | 0.461 | 4.56× | ok |
| Adobe-C++/stepanov_vector | 0.130 | 1.412 | 10.86× | 0.514 | 3.95× | ok |
| Bullet | 6.146 | 37.650 | 6.13× | 27.224 | 4.43× | ok |
| CLAMR | 4.025 | 23.504 | 5.84× | 18.524 | 4.60× | ok |
| CoyoteBench/almabench | 0.032 | 0.149 | 4.66× | 0.118 | 3.69× | ok |
| CoyoteBench/fftbench | 0.113 | 0.399 | 3.53× | 0.395 | 3.50× | ok |
| CoyoteBench/huffbench | 0.037 | 0.225 | 6.08× | 0.137 | 3.70× | ok |
| CoyoteBench/lpbench | 0.033 | 0.160 | 4.85× | 0.170 | 5.15× | ok |
| DOE/HACCKernels | 0.110 | 0.355 | 3.23× | 0.375 | 3.41× | ok |
| DOE/HPCCG | 0.763 | 2.287 | 3.00× | 2.597 | 3.40× | ok |
| DOE/PENNANT | 1.746 | 5.872 | 3.36× | 5.632 | 3.23× | ok |
| DOE/miniFE | 0.833 | 4.104 | 4.93× | 3.664 | 4.40× | ok |
| Misc-C++-EH/spirit | 0.584 | 3.885 | 6.65× | 2.898 | 4.96× | ok |
| Misc-C++-Large/ray | 0.111 | 0.443 | 3.99× | 0.402 | 3.62× | ok |
| Misc-C++-Large/sphereflake | 0.102 | 0.718 | 7.04× | 0.387 | 3.79× | ok |
| Misc-C++/bigfib | 0.149 | 0.559 | 3.75× | 0.558 | 3.74× | ok |
| Misc-C++/oopack_v1p8 | 0.040 | 0.185 | 4.62× | 0.176 | 4.40× | ok |
| Misc-C++/stepanov_container | 0.220 | 0.954 | 4.34× | 0.937 | 4.26× | ok |
| Misc-C++/stepanov_v1p2 | 0.039 | 0.198 | 5.08× | 0.179 | 4.59× | ok |
| PAQ8p | 0.307 | 3.941 | 12.84× | 1.508 | 4.91× | ok |
| Prolangs-C++/life | 0.010 | 0.094 | 9.40× | 0.069 | 6.90× | ok |
| Prolangs-C++/ocean | 0.021 | 0.208 | 9.90× | 0.126 | 6.00× | ok |
| Prolangs-C++/primes | 0.008 | 0.035 | — | 0.035 | — | ok |
| Shootout-C++-EH/except | 0.066 | 0.173 | 2.62× | 0.207 | 3.14× | ok |
| Shootout-C++/ackermann | 0.073 | 0.202 | 2.77× | 0.250 | 3.42× | ok |
| Shootout-C++/ary3 | 0.077 | 0.217 | 2.82× | 0.299 | 3.88× | ok |
| Shootout-C++/fibo | 0.074 | 0.204 | 2.76× | 0.192 | 2.59× | ok |
| Shootout-C++/hash | 0.109 | 0.415 | 3.81× | 0.369 | 3.39× | ok |
| Shootout-C++/hash2 | 0.143 | 0.427 | 2.99× | 0.530 | 3.71× | ok |
| Shootout-C++/heapsort | 0.079 | 0.204 | 2.58× | 0.235 | 2.97× | ok |
| Shootout-C++/lists | 0.077 | 0.217 | 2.82× | 0.252 | 3.27× | ok |
| Shootout-C++/lists1 | 0.091 | 0.254 | 2.79× | 0.295 | 3.24× | ok |
| Shootout-C++/matrix | 0.071 | 0.200 | 2.82× | 0.347 | 4.89× | ok |
| Shootout-C++/methcall | 0.066 | 0.187 | 2.83× | 0.208 | 3.15× | ok |
| Shootout-C++/moments | 0.105 | 0.349 | 3.32× | 0.324 | 3.09× | ok |
| Shootout-C++/random | 0.080 | 0.192 | 2.40× | 0.249 | 3.11× | ok |
| Shootout-C++/sieve | 0.088 | 0.239 | 2.72× | 0.278 | 3.16× | ok |
| SmallPT | 0.037 | 0.285 | 7.70× | 0.156 | 4.22× | ok |
| Stanford/Bubblesort | 0.011 | 0.050 | 4.55× | 0.048 | 4.36× | ok |
| Stanford/FloatMM | 0.012 | 0.058 | 4.83× | 0.067 | 5.58× | ok |
| Stanford/Puzzle | 0.019 | 0.117 | 6.16× | 0.109 | 5.74× | ok |
| Stanford/Treesort | 0.013 | 0.078 | 6.00× | 0.050 | 3.85× | ok |
| bg/binarytrees/2 | 0.068 | 0.400 | 5.88× | 0.227 | 3.34× | ok |
| bg/fannkuchredux/3 | 0.035 | 0.113 | 3.23× | 0.116 | 3.31× | ok |
| bg/fasta/1 | 0.059 | 0.155 | 2.63× | 0.177 | 3.00× | ok |
| bg/fasta/2 | 0.055 | 0.156 | 2.84× | 0.206 | 3.75× | ok |
| bg/fasta/3 | 0.084 | 0.226 | 2.69× | 0.262 | 3.12× | ok |
| bg/fasta/4 | 0.074 | 0.175 | 2.36× | 0.209 | 2.82× | ok |
| bg/fasta/6 | 0.146 | 0.520 | 3.56× | 0.530 | 3.63× | ok |
| bg/mandelbrot/0 | 0.188 | 0.612 | 3.26× | 0.627 | 3.34× | ok |
| bg/mandelbrot/2 | 0.087 | 0.258 | 2.97× | 0.271 | 3.11× | ok |
| bg/mandelbrot/3 | 0.094 | 0.230 | 2.45× | 0.269 | 2.86× | ok |
| bg/mandelbrot/5 | 0.054 | 0.150 | 2.78× | 0.141 | 2.61× | ok |
| bg/mandelbrot/7 | 0.057 | 0.199 | 3.49× | 0.160 | 2.81× | ok |
| bg/mandelbrot/9 | 0.059 | 0.172 | 2.92× | 0.163 | 2.76× | ok |
| bg/nbody/1 | 0.042 | 0.162 | 3.86× | 0.165 | 3.93× | ok |
| bg/nbody/2 | 0.032 | 0.118 | 3.69× | 0.121 | 3.78× | ok |
| bg/nbody/3 | 0.028 | 0.116 | 4.14× | 0.104 | 3.71× | ok |
| bg/nbody/6 | 0.045 | 0.166 | 3.69× | 0.169 | 3.76× | ok |
| bg/pidigits/4 | 0.132 | 0.334 | 2.53× | 0.485 | 3.67× | ok |
| bg/pidigits/5 | 0.084 | 0.196 | 2.33× | 0.285 | 3.39× | ok |
| bg/revcomp/1 | 0.088 | 0.256 | 2.91× | 0.277 | 3.15× | ok |
| bg/revcomp/5 | 0.085 | 0.239 | 2.81× | 0.243 | 2.86× | ok |
| bg/spectralnorm/1 | 0.126 | 0.371 | 2.94× | 0.388 | 3.08× | ok |
| box2d | 1.749 | 6.890 | 3.94× | 5.836 | 3.34× | ok |
| fmt | 0.993 | 5.497 | 5.54× | 3.700 | 3.73× | ok |
| hexxagon | 0.292 | 1.053 | 3.61× | 1.085 | 3.72× | ok |
| lambda | 0.123 | 1.143 | 9.29× | 0.529 | 4.30× | ok |
| minisat | 0.149 | 1.021 | 6.85× | 0.654 | 4.39× | ok |
| nlohmann-json | 0.782 | 3.593 | 4.59× | 3.079 | 3.94× | ok |
| pugixml | 0.686 | 5.621 | 8.19× | 4.056 | 5.91× | ok |
| pugixml-tests | 5.109 | 33.980 | 6.65× | 24.612 | 4.82× | ok |
| rapidjson | 0.232 | 1.175 | 5.06× | 0.684 | 2.95× | ok |
| re2 | 2.873 | 18.072 | 6.29× | 9.857 | 3.43× | ok |
| re2-test-re2 | 5.749 | 27.350 | 4.76× | 23.099 | 4.02× | ok |
| re2-test-search | 5.671 | 24.289 | 4.28× | 21.332 | 3.76× | ok |
| tramp3d-v4 | 2.685 | 17.229 | 6.42× | 14.092 | 5.25× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.058 | 0.134 | 2.31× | 0.150 | 2.59× | ok |
| Adobe-C++/loop_unroll | 0.037 | 0.100 | 2.70× | 0.100 | 2.70× | ok |
| Adobe-C++/simple_types_constant_folding | 0.042 | 0.100 | 2.38× | 0.106 | 2.52× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.034 | 0.091 | 2.68× | 0.119 | 3.50× | ok |
| Adobe-C++/stepanov_abstraction | 0.031 | 0.066 | 2.13× | 0.085 | 2.74× | ok |
| Adobe-C++/stepanov_vector | 0.054 | 0.130 | 2.41× | 0.198 | 3.67× | ok |
| Bullet | 4.304 | 9.631 | 2.24× | 13.037 | 3.03× | ok |
| CLAMR | 1.926 | 4.493 | 2.33× | 5.725 | 2.97× | ok |
| CoyoteBench/almabench | 0.028 | 0.053 | 1.89× | 0.074 | 2.64× | ok |
| CoyoteBench/fftbench | 0.092 | 0.209 | 2.27× | 0.271 | 2.95× | ok |
| CoyoteBench/huffbench | 0.027 | 0.061 | 2.26× | 0.081 | 3.00× | ok |
| CoyoteBench/lpbench | 0.025 | 0.051 | 2.04× | 0.068 | 2.72× | ok |
| DOE/HACCKernels | 0.095 | 0.208 | 2.19× | 0.289 | 3.04× | ok |
| DOE/HPCCG | 0.687 | 1.346 | 1.96× | 2.141 | 3.12× | ok |
| DOE/PENNANT | 1.225 | 2.862 | 2.34× | 3.801 | 3.10× | ok |
| DOE/miniFE | 0.546 | 1.371 | 2.51× | 1.735 | 3.18× | ok |
| Misc-C++-EH/spirit | 0.262 | 0.841 | 3.21× | 1.033 | 3.94× | ok |
| Misc-C++-Large/ray | 0.101 | 0.223 | 2.21× | 0.306 | 3.03× | ok |
| Misc-C++-Large/sphereflake | 0.082 | 0.195 | 2.38× | 0.250 | 3.05× | ok |
| Misc-C++/bigfib | 0.110 | 0.259 | 2.35× | 0.368 | 3.35× | ok |
| Misc-C++/oopack_v1p8 | 0.030 | 0.063 | 2.10× | 0.086 | 2.87× | ok |
| Misc-C++/stepanov_container | 0.145 | 0.339 | 2.34× | 0.462 | 3.19× | ok |
| Misc-C++/stepanov_v1p2 | 0.027 | 0.061 | 2.26× | 0.086 | 3.19× | ok |
| PAQ8p | 0.042 | 0.119 | 2.83× | 0.115 | 2.74× | ok |
| Prolangs-C++/life | 0.003 | 0.009 | — | 0.021 | — | ok |
| Prolangs-C++/ocean | 0.009 | 0.022 | — | 0.033 | — | ok |
| Prolangs-C++/primes | 0.006 | 0.015 | — | 0.025 | — | ok |
| Shootout-C++-EH/except | 0.063 | 0.142 | 2.25× | 0.184 | 2.92× | ok |
| Shootout-C++/ackermann | 0.070 | 0.163 | 2.33× | 0.220 | 3.14× | ok |
| Shootout-C++/ary3 | 0.069 | 0.165 | 2.39× | 0.210 | 3.04× | ok |
| Shootout-C++/fibo | 0.071 | 0.166 | 2.34× | 0.183 | 2.58× | ok |
| Shootout-C++/hash | 0.087 | 0.195 | 2.24× | 0.249 | 2.86× | ok |
| Shootout-C++/hash2 | 0.097 | 0.225 | 2.32× | 0.328 | 3.38× | ok |
| Shootout-C++/heapsort | 0.075 | 0.168 | 2.24× | 0.211 | 2.81× | ok |
| Shootout-C++/lists | 0.068 | 0.166 | 2.44× | 0.201 | 2.96× | ok |
| Shootout-C++/lists1 | 0.078 | 0.180 | 2.31× | 0.228 | 2.92× | ok |
| Shootout-C++/matrix | 0.062 | 0.147 | 2.37× | 0.193 | 3.11× | ok |
| Shootout-C++/methcall | 0.068 | 0.141 | 2.07× | 0.198 | 2.91× | ok |
| Shootout-C++/moments | 0.087 | 0.190 | 2.18× | 0.232 | 2.67× | ok |
| Shootout-C++/random | 0.079 | 0.171 | 2.16× | 0.227 | 2.87× | ok |
| Shootout-C++/sieve | 0.077 | 0.180 | 2.34× | 0.237 | 3.08× | ok |
| SmallPT | 0.026 | 0.052 | 2.00× | 0.074 | 2.85× | ok |
| Stanford/Bubblesort | 0.008 | 0.022 | — | 0.029 | — | ok |
| Stanford/FloatMM | 0.008 | 0.021 | — | 0.030 | — | ok |
| Stanford/Puzzle | 0.009 | 0.022 | — | 0.029 | — | ok |
| Stanford/Treesort | 0.008 | 0.021 | — | 0.029 | — | ok |
| bg/binarytrees/2 | 0.063 | 0.147 | 2.33× | 0.196 | 3.11× | ok |
| bg/fannkuchredux/3 | 0.030 | 0.058 | 1.93× | 0.078 | 2.60× | ok |
| bg/fasta/1 | 0.050 | 0.099 | 1.98× | 0.134 | 2.68× | ok |
| bg/fasta/2 | 0.045 | 0.092 | 2.04× | 0.123 | 2.73× | ok |
| bg/fasta/3 | 0.076 | 0.173 | 2.28× | 0.240 | 3.16× | ok |
| bg/fasta/4 | 0.067 | 0.142 | 2.12× | 0.167 | 2.49× | ok |
| bg/fasta/6 | 0.112 | 0.268 | 2.39× | 0.338 | 3.02× | ok |
| bg/mandelbrot/0 | 0.122 | 0.316 | 2.59× | 0.365 | 2.99× | ok |
| bg/mandelbrot/2 | 0.079 | 0.182 | 2.30× | 0.220 | 2.78× | ok |
| bg/mandelbrot/3 | 0.088 | 0.199 | 2.26× | 0.256 | 2.91× | ok |
| bg/mandelbrot/5 | 0.040 | 0.077 | 1.92× | 0.105 | 2.62× | ok |
| bg/mandelbrot/7 | 0.042 | 0.091 | 2.17× | 0.132 | 3.14× | ok |
| bg/mandelbrot/9 | 0.041 | 0.088 | 2.15× | 0.110 | 2.68× | ok |
| bg/nbody/1 | 0.028 | 0.060 | 2.14× | 0.075 | 2.68× | ok |
| bg/nbody/2 | 0.025 | 0.050 | 2.00× | 0.072 | 2.88× | ok |
| bg/nbody/3 | 0.028 | 0.055 | 1.96× | 0.070 | 2.50× | ok |
| bg/nbody/6 | 0.029 | 0.059 | 2.03× | 0.083 | 2.86× | ok |
| bg/pidigits/4 | 0.126 | 0.268 | 2.13× | 0.406 | 3.22× | ok |
| bg/pidigits/5 | 0.068 | 0.158 | 2.32× | 0.240 | 3.53× | ok |
| bg/revcomp/1 | 0.076 | 0.169 | 2.22× | 0.217 | 2.86× | ok |
| bg/revcomp/5 | 0.075 | 0.156 | 2.08× | 0.190 | 2.53× | ok |
| bg/spectralnorm/1 | 0.111 | 0.262 | 2.36× | 0.349 | 3.14× | ok |
| box2d | 1.320 | 2.740 | 2.08× | 3.373 | 2.56× | ok |
| fmt | 0.426 | 0.997 | 2.34× | 1.410 | 3.31× | ok |
| hexxagon | 0.236 | 0.494 | 2.09× | 0.758 | 3.21× | ok |
| lambda | 0.041 | 0.120 | 2.93× | 0.161 | 3.93× | ok |
| minisat | 0.051 | 0.127 | 2.49× | 0.149 | 2.92× | ok |
| nlohmann-json | 0.332 | 0.867 | 2.61× | 1.373 | 4.14× | ok |
| pugixml | 0.204 | 0.508 | 2.49× | 0.719 | 3.52× | ok |
| pugixml-tests | 2.867 | 7.432 | 2.59× | 9.883 | 3.45× | ok |
| rapidjson | 0.091 | 0.240 | 2.64× | 0.286 | 3.14× | ok |
| re2 | 2.811 | 7.039 | 2.50× | 5.549 | 1.97× | ok |
| re2-test-re2 | 4.214 | 9.656 | 2.29× | 12.549 | 2.98× | ok |
| re2-test-search | 4.083 | 9.374 | 2.30× | 13.123 | 3.21× | ok |
| tramp3d-v4 | 0.427 | 2.495 | 5.84× | 1.504 | 3.52× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
