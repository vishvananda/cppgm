# Public benchmarks: Intel (GitHub)

Measured compiler: [`dbbd227db`](https://github.com/vishvananda/cppgm/commit/dbbd227db37c255596e3fc11a4d3df8700ea7be7) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44922642903) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: Intel(R) Xeon(R) 6975P-C.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.32× | 74 | 2.95× | 74 |
| Compile CPU, `-O0` | 3.24× | 74 | 3.19× | 74 |
| Compile CPU, `-O3` | 4.30× | 79 | 3.84× | 79 |
| Compile peak RSS, `-O0` | 1.43× | 81 | 2.18× | 81 |
| Compile peak RSS, `-O3` | 1.70× | 81 | 2.28× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.11× | 81 | 1.07× | 81 |
| Run CPU, `-O3` | 1.01× | 80 | 1.02× | 80 |
| Run instructions, `-O3` | 1.05× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.904 to 1.014; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.064 | 0.252 | 3.94× | 0.209 | 3.27× | ok |
| Adobe-C++/loop_unroll | 0.050 | 0.568 | 11.36× | 0.174 | 3.48× | ok |
| Adobe-C++/simple_types_constant_folding | 0.051 | 0.671 | 13.16× | 0.210 | 4.12× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.045 | 0.480 | 10.67× | 0.228 | 5.07× | ok |
| Adobe-C++/stepanov_abstraction | 0.036 | 0.170 | 4.72× | 0.110 | 3.06× | ok |
| Adobe-C++/stepanov_vector | 0.072 | 0.301 | 4.18× | 0.189 | 2.62× | ok |
| Bullet | 5.007 | 16.710 | 3.34× | 16.955 | 3.39× | ok |
| CLAMR | 2.438 | 9.519 | 3.90× | 8.573 | 3.52× | ok |
| CoyoteBench/almabench | 0.026 | 0.076 | 2.92× | 0.080 | 3.08× | ok |
| CoyoteBench/fftbench | 0.103 | 0.240 | 2.33× | 0.360 | 3.50× | ok |
| CoyoteBench/huffbench | 0.024 | 0.060 | 2.50× | 0.073 | 3.04× | ok |
| CoyoteBench/lpbench | 0.028 | 0.075 | 2.68× | 0.087 | 3.11× | ok |
| DOE/HACCKernels | 0.101 | 0.287 | 2.84× | 0.317 | 3.14× | ok |
| DOE/HPCCG | 0.652 | 1.530 | 2.35× | 2.152 | 3.30× | ok |
| DOE/PENNANT | 1.213 | 4.134 | 3.41× | 3.883 | 3.20× | ok |
| DOE/miniFE | 0.607 | 1.844 | 3.04× | 2.167 | 3.57× | ok |
| Misc-C++-EH/spirit | 0.366 | 2.708 | 7.40× | 1.557 | 4.25× | ok |
| Misc-C++-Large/ray | 0.093 | 0.276 | 2.97× | 0.294 | 3.16× | ok |
| Misc-C++-Large/sphereflake | 0.089 | 0.220 | 2.47× | 0.273 | 3.07× | ok |
| Misc-C++/bigfib | 0.117 | 0.364 | 3.11× | 0.394 | 3.37× | ok |
| Misc-C++/oopack_v1p8 | 0.031 | 0.091 | 2.94× | 0.091 | 2.94× | ok |
| Misc-C++/stepanov_container | 0.156 | 0.565 | 3.62× | 0.525 | 3.37× | ok |
| Misc-C++/stepanov_v1p2 | 0.028 | 0.114 | 4.07× | 0.102 | 3.64× | ok |
| PAQ8p | 0.065 | 0.455 | 7.00× | 0.242 | 3.72× | ok |
| Prolangs-C++/life | 0.004 | 0.029 | — | 0.024 | — | ok |
| Prolangs-C++/ocean | 0.009 | 0.058 | — | 0.038 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.021 | — | 0.023 | — | ok |
| Shootout-C++-EH/except | 0.068 | 0.159 | 2.34× | 0.226 | 3.32× | ok |
| Shootout-C++/ackermann | 0.063 | 0.140 | 2.22× | 0.191 | 3.03× | ok |
| Shootout-C++/ary3 | 0.083 | 0.198 | 2.39× | 0.267 | 3.22× | ok |
| Shootout-C++/fibo | 0.063 | 0.144 | 2.29× | 0.192 | 3.05× | ok |
| Shootout-C++/hash | 0.092 | 0.253 | 2.75× | 0.280 | 3.04× | ok |
| Shootout-C++/hash2 | 0.104 | 0.303 | 2.91× | 0.281 | 2.70× | ok |
| Shootout-C++/heapsort | 0.081 | 0.165 | 2.04× | 0.248 | 3.06× | ok |
| Shootout-C++/lists | 0.067 | 0.188 | 2.81× | 0.218 | 3.25× | ok |
| Shootout-C++/lists1 | 0.078 | 0.211 | 2.71× | 0.279 | 3.58× | ok |
| Shootout-C++/matrix | 0.062 | 0.164 | 2.65× | 0.188 | 3.03× | ok |
| Shootout-C++/methcall | 0.067 | 0.143 | 2.13× | 0.213 | 3.18× | ok |
| Shootout-C++/moments | 0.086 | 0.227 | 2.64× | 0.242 | 2.81× | ok |
| Shootout-C++/random | 0.076 | 0.198 | 2.61× | 0.225 | 2.96× | ok |
| Shootout-C++/sieve | 0.079 | 0.212 | 2.68× | 0.258 | 3.27× | ok |
| SmallPT | 0.027 | 0.084 | 3.11× | 0.076 | 2.81× | ok |
| Stanford/Bubblesort | 0.008 | 0.025 | — | 0.028 | — | ok |
| Stanford/FloatMM | 0.008 | 0.025 | — | 0.028 | — | ok |
| Stanford/Puzzle | 0.009 | 0.032 | — | 0.032 | — | ok |
| Stanford/Treesort | 0.008 | 0.027 | — | 0.029 | — | ok |
| bg/binarytrees/2 | 0.068 | 0.157 | 2.31× | 0.199 | 2.93× | ok |
| bg/fannkuchredux/3 | 0.032 | 0.073 | 2.28× | 0.084 | 2.62× | ok |
| bg/fasta/1 | 0.046 | 0.123 | 2.67× | 0.124 | 2.70× | ok |
| bg/fasta/2 | 0.050 | 0.124 | 2.48× | 0.124 | 2.48× | ok |
| bg/fasta/3 | 0.076 | 0.166 | 2.18× | 0.238 | 3.13× | ok |
| bg/fasta/4 | 0.069 | 0.143 | 2.07× | 0.199 | 2.88× | ok |
| bg/fasta/6 | 0.122 | 0.384 | 3.15× | 0.384 | 3.15× | ok |
| bg/mandelbrot/0 | 0.149 | 0.445 | 2.99× | 0.430 | 2.89× | ok |
| bg/mandelbrot/2 | 0.076 | 0.210 | 2.76× | 0.260 | 3.42× | ok |
| bg/mandelbrot/3 | 0.088 | 0.193 | 2.19× | 0.264 | 3.00× | ok |
| bg/mandelbrot/5 | 0.046 | 0.108 | 2.35× | 0.128 | 2.78× | ok |
| bg/mandelbrot/7 | 0.044 | 0.121 | 2.75× | 0.130 | 2.95× | ok |
| bg/mandelbrot/9 | 0.038 | 0.104 | 2.74× | 0.117 | 3.08× | ok |
| bg/nbody/1 | 0.028 | 0.099 | 3.54× | 0.085 | 3.04× | ok |
| bg/nbody/2 | 0.028 | 0.064 | 2.29× | 0.071 | 2.54× | ok |
| bg/nbody/3 | 0.023 | 0.069 | 3.00× | 0.073 | 3.17× | ok |
| bg/nbody/6 | 0.027 | 0.093 | 3.44× | 0.099 | 3.67× | ok |
| bg/pidigits/4 | 0.127 | 0.302 | 2.38× | 0.373 | 2.94× | ok |
| bg/pidigits/5 | 0.081 | 0.170 | 2.10× | 0.212 | 2.62× | ok |
| bg/revcomp/1 | 0.074 | 0.208 | 2.81× | 0.249 | 3.36× | ok |
| bg/revcomp/5 | 0.076 | 0.196 | 2.58× | 0.209 | 2.75× | ok |
| bg/spectralnorm/1 | 0.116 | 0.245 | 2.11× | 0.350 | 3.02× | ok |
| box2d | 1.321 | 4.025 | 3.05× | 3.323 | 2.52× | ok |
| fmt | 0.509 | 2.429 | 4.77× | 2.054 | 4.04× | ok |
| hexxagon | 0.249 | 0.543 | 2.18× | 0.857 | 3.44× | ok |
| lambda | 0.050 | 0.304 | 6.08× | 0.232 | 4.64× | ok |
| minisat | 0.059 | 0.294 | 4.98× | 0.225 | 3.81× | ok |
| nlohmann-json | 0.392 | 2.067 | 5.27× | 1.718 | 4.38× | ok |
| pugixml | 0.276 | 1.360 | 4.93× | 0.980 | 3.55× | ok |
| pugixml-tests | 3.317 | 14.810 | 4.46× | 13.195 | 3.98× | ok |
| rapidjson | 0.110 | 0.458 | 4.16× | 0.345 | 3.14× | ok |
| re2 | 3.014 | 10.871 | 3.61× | 6.544 | 2.17× | ok |
| re2-test-re2 | 4.608 | 15.229 | 3.30× | 15.317 | 3.32× | ok |
| re2-test-search | 4.668 | 14.382 | 3.08× | 13.340 | 2.86× | ok |
| tramp3d-v4 | 0.682 | 8.509 | 12.48× | 2.463 | 3.61× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.109 | 0.807 | 7.40× | 0.485 | 4.45× | ok |
| Adobe-C++/loop_unroll | 0.448 | 5.260 | 11.74× | 4.044 | 9.03× | ok |
| Adobe-C++/simple_types_constant_folding | 0.251 | 2.894 | 11.53× | 2.243 | 8.94× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.248 | 2.168 | 8.74× | 1.785 | 7.20× | ok |
| Adobe-C++/stepanov_abstraction | 0.091 | 0.912 | 10.02× | 0.439 | 4.82× | ok |
| Adobe-C++/stepanov_vector | 0.104 | 1.406 | 13.52× | 0.624 | 6.00× | ok |
| Bullet | 6.028 | 38.165 | 6.33× | 25.654 | 4.26× | ok |
| CLAMR | 4.566 | 23.248 | 5.09× | 17.862 | 3.91× | ok |
| CoyoteBench/almabench | 0.036 | 0.148 | 4.11× | 0.111 | 3.08× | ok |
| CoyoteBench/fftbench | 0.127 | 0.396 | 3.12× | 0.486 | 3.83× | ok |
| CoyoteBench/huffbench | 0.040 | 0.192 | 4.80× | 0.133 | 3.33× | ok |
| CoyoteBench/lpbench | 0.038 | 0.186 | 4.89× | 0.203 | 5.34× | ok |
| DOE/HACCKernels | 0.111 | 0.364 | 3.28× | 0.375 | 3.38× | ok |
| DOE/HPCCG | 0.670 | 2.226 | 3.32× | 2.553 | 3.81× | ok |
| DOE/PENNANT | 1.679 | 5.833 | 3.47× | 6.012 | 3.58× | ok |
| DOE/miniFE | 0.854 | 4.153 | 4.86× | 3.543 | 4.15× | ok |
| Misc-C++-EH/spirit | 0.588 | 3.274 | 5.57× | 2.853 | 4.85× | ok |
| Misc-C++-Large/ray | 0.104 | 0.439 | 4.22× | 0.349 | 3.36× | ok |
| Misc-C++-Large/sphereflake | 0.099 | 0.753 | 7.61× | 0.370 | 3.74× | ok |
| Misc-C++/bigfib | 0.149 | 0.554 | 3.72× | 0.557 | 3.74× | ok |
| Misc-C++/oopack_v1p8 | 0.039 | 0.185 | 4.74× | 0.168 | 4.31× | ok |
| Misc-C++/stepanov_container | 0.223 | 0.893 | 4.00× | 0.923 | 4.14× | ok |
| Misc-C++/stepanov_v1p2 | 0.040 | 0.197 | 4.92× | 0.176 | 4.40× | ok |
| PAQ8p | 0.319 | 3.931 | 12.32× | 1.705 | 5.34× | ok |
| Prolangs-C++/life | 0.009 | 0.093 | — | 0.061 | — | ok |
| Prolangs-C++/ocean | 0.019 | 0.187 | 9.84× | 0.104 | 5.47× | ok |
| Prolangs-C++/primes | 0.007 | 0.031 | — | 0.032 | — | ok |
| Shootout-C++-EH/except | 0.073 | 0.194 | 2.66× | 0.244 | 3.34× | ok |
| Shootout-C++/ackermann | 0.066 | 0.179 | 2.71× | 0.201 | 3.05× | ok |
| Shootout-C++/ary3 | 0.087 | 0.243 | 2.79× | 0.299 | 3.44× | ok |
| Shootout-C++/fibo | 0.065 | 0.182 | 2.80× | 0.192 | 2.95× | ok |
| Shootout-C++/hash | 0.109 | 0.410 | 3.76× | 0.369 | 3.39× | ok |
| Shootout-C++/hash2 | 0.118 | 0.445 | 3.77× | 0.401 | 3.40× | ok |
| Shootout-C++/heapsort | 0.094 | 0.202 | 2.15× | 0.235 | 2.50× | ok |
| Shootout-C++/lists | 0.077 | 0.216 | 2.81× | 0.246 | 3.19× | ok |
| Shootout-C++/lists1 | 0.091 | 0.251 | 2.76× | 0.330 | 3.63× | ok |
| Shootout-C++/matrix | 0.070 | 0.198 | 2.83× | 0.342 | 4.89× | ok |
| Shootout-C++/methcall | 0.066 | 0.185 | 2.80× | 0.210 | 3.18× | ok |
| Shootout-C++/moments | 0.099 | 0.294 | 2.97× | 0.299 | 3.02× | ok |
| Shootout-C++/random | 0.081 | 0.193 | 2.38× | 0.237 | 2.93× | ok |
| Shootout-C++/sieve | 0.088 | 0.239 | 2.72× | 0.320 | 3.64× | ok |
| SmallPT | 0.036 | 0.312 | 8.67× | 0.162 | 4.50× | ok |
| Stanford/Bubblesort | 0.011 | 0.051 | 4.64× | 0.045 | 4.09× | ok |
| Stanford/FloatMM | 0.012 | 0.057 | 4.75× | 0.063 | 5.25× | ok |
| Stanford/Puzzle | 0.021 | 0.120 | 5.71× | 0.111 | 5.29× | ok |
| Stanford/Treesort | 0.014 | 0.081 | 5.79× | 0.052 | 3.71× | ok |
| bg/binarytrees/2 | 0.071 | 0.400 | 5.63× | 0.227 | 3.20× | ok |
| bg/fannkuchredux/3 | 0.038 | 0.121 | 3.18× | 0.116 | 3.05× | ok |
| bg/fasta/1 | 0.054 | 0.162 | 3.00× | 0.161 | 2.98× | ok |
| bg/fasta/2 | 0.057 | 0.163 | 2.86× | 0.167 | 2.93× | ok |
| bg/fasta/3 | 0.081 | 0.206 | 2.54× | 0.325 | 4.01× | ok |
| bg/fasta/4 | 0.084 | 0.175 | 2.08× | 0.215 | 2.56× | ok |
| bg/fasta/6 | 0.135 | 0.437 | 3.24× | 0.519 | 3.84× | ok |
| bg/mandelbrot/0 | 0.163 | 0.627 | 3.85× | 0.632 | 3.88× | ok |
| bg/mandelbrot/2 | 0.093 | 0.271 | 2.91× | 0.283 | 3.04× | ok |
| bg/mandelbrot/3 | 0.093 | 0.233 | 2.51× | 0.273 | 2.94× | ok |
| bg/mandelbrot/5 | 0.050 | 0.144 | 2.88× | 0.148 | 2.96× | ok |
| bg/mandelbrot/7 | 0.057 | 0.202 | 3.54× | 0.171 | 3.00× | ok |
| bg/mandelbrot/9 | 0.049 | 0.168 | 3.43× | 0.162 | 3.31× | ok |
| bg/nbody/1 | 0.044 | 0.155 | 3.52× | 0.162 | 3.68× | ok |
| bg/nbody/2 | 0.032 | 0.118 | 3.69× | 0.115 | 3.59× | ok |
| bg/nbody/3 | 0.028 | 0.108 | 3.86× | 0.107 | 3.82× | ok |
| bg/nbody/6 | 0.040 | 0.149 | 3.73× | 0.190 | 4.75× | ok |
| bg/pidigits/4 | 0.113 | 0.324 | 2.87× | 0.422 | 3.73× | ok |
| bg/pidigits/5 | 0.083 | 0.197 | 2.37× | 0.233 | 2.81× | ok |
| bg/revcomp/1 | 0.088 | 0.258 | 2.93× | 0.261 | 2.97× | ok |
| bg/revcomp/5 | 0.084 | 0.220 | 2.62× | 0.240 | 2.86× | ok |
| bg/spectralnorm/1 | 0.125 | 0.336 | 2.69× | 0.397 | 3.18× | ok |
| box2d | 1.709 | 6.809 | 3.98× | 4.459 | 2.61× | ok |
| fmt | 0.955 | 5.368 | 5.62× | 4.187 | 4.38× | ok |
| hexxagon | 0.296 | 1.062 | 3.59× | 1.081 | 3.65× | ok |
| lambda | 0.121 | 1.140 | 9.42× | 0.570 | 4.71× | ok |
| minisat | 0.153 | 1.011 | 6.61× | 0.648 | 4.24× | ok |
| nlohmann-json | 0.774 | 3.618 | 4.67× | 3.002 | 3.88× | ok |
| pugixml | 0.639 | 5.635 | 8.82× | 3.980 | 6.23× | ok |
| pugixml-tests | 4.938 | 34.266 | 6.94× | 24.548 | 4.97× | ok |
| rapidjson | 0.230 | 1.146 | 4.98× | 0.688 | 2.99× | ok |
| re2 | 2.867 | 17.688 | 6.17× | 9.718 | 3.39× | ok |
| re2-test-re2 | 5.905 | 26.909 | 4.56× | 21.197 | 3.59× | ok |
| re2-test-search | 5.823 | 23.313 | 4.00× | 20.464 | 3.51× | ok |
| tramp3d-v4 | 2.552 | 23.672 | 9.28× | 13.511 | 5.29× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.058 | 0.134 | 2.31× | 0.183 | 3.16× | ok |
| Adobe-C++/loop_unroll | 0.034 | 0.101 | 2.97× | 0.101 | 2.97× | ok |
| Adobe-C++/simple_types_constant_folding | 0.035 | 0.103 | 2.94× | 0.107 | 3.06× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.034 | 0.094 | 2.76× | 0.117 | 3.44× | ok |
| Adobe-C++/stepanov_abstraction | 0.030 | 0.067 | 2.23× | 0.085 | 2.83× | ok |
| Adobe-C++/stepanov_vector | 0.055 | 0.138 | 2.51× | 0.153 | 2.78× | ok |
| Bullet | 4.112 | 10.090 | 2.45× | 13.729 | 3.34× | ok |
| CLAMR | 2.109 | 4.557 | 2.16× | 7.097 | 3.37× | ok |
| CoyoteBench/almabench | 0.026 | 0.064 | 2.46× | 0.079 | 3.04× | ok |
| CoyoteBench/fftbench | 0.104 | 0.213 | 2.05× | 0.310 | 2.98× | ok |
| CoyoteBench/huffbench | 0.024 | 0.051 | 2.12× | 0.071 | 2.96× | ok |
| CoyoteBench/lpbench | 0.028 | 0.060 | 2.14× | 0.080 | 2.86× | ok |
| DOE/HACCKernels | 0.099 | 0.258 | 2.61× | 0.294 | 2.97× | ok |
| DOE/HPCCG | 0.630 | 1.323 | 2.10× | 1.971 | 3.13× | ok |
| DOE/PENNANT | 1.296 | 2.715 | 2.09× | 3.423 | 2.64× | ok |
| DOE/miniFE | 0.558 | 1.205 | 2.16× | 1.816 | 3.25× | ok |
| Misc-C++-EH/spirit | 0.286 | 0.934 | 3.27× | 1.016 | 3.55× | ok |
| Misc-C++-Large/ray | 0.092 | 0.223 | 2.42× | 0.271 | 2.95× | ok |
| Misc-C++-Large/sphereflake | 0.088 | 0.196 | 2.23× | 0.244 | 2.77× | ok |
| Misc-C++/bigfib | 0.106 | 0.231 | 2.18× | 0.346 | 3.26× | ok |
| Misc-C++/oopack_v1p8 | 0.029 | 0.062 | 2.14× | 0.081 | 2.79× | ok |
| Misc-C++/stepanov_container | 0.139 | 0.333 | 2.40× | 0.438 | 3.15× | ok |
| Misc-C++/stepanov_v1p2 | 0.027 | 0.060 | 2.22× | 0.085 | 3.15× | ok |
| PAQ8p | 0.041 | 0.119 | 2.90× | 0.138 | 3.37× | ok |
| Prolangs-C++/life | 0.003 | 0.009 | — | 0.018 | — | ok |
| Prolangs-C++/ocean | 0.008 | 0.020 | — | 0.027 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.014 | — | 0.021 | — | ok |
| Shootout-C++-EH/except | 0.068 | 0.159 | 2.34× | 0.219 | 3.22× | ok |
| Shootout-C++/ackermann | 0.063 | 0.141 | 2.24× | 0.182 | 2.89× | ok |
| Shootout-C++/ary3 | 0.077 | 0.178 | 2.31× | 0.253 | 3.29× | ok |
| Shootout-C++/fibo | 0.062 | 0.145 | 2.34× | 0.184 | 2.97× | ok |
| Shootout-C++/hash | 0.088 | 0.192 | 2.18× | 0.249 | 2.83× | ok |
| Shootout-C++/hash2 | 0.101 | 0.220 | 2.18× | 0.249 | 2.47× | ok |
| Shootout-C++/heapsort | 0.078 | 0.165 | 2.12× | 0.227 | 2.91× | ok |
| Shootout-C++/lists | 0.066 | 0.156 | 2.36× | 0.201 | 3.05× | ok |
| Shootout-C++/lists1 | 0.077 | 0.170 | 2.21× | 0.241 | 3.13× | ok |
| Shootout-C++/matrix | 0.063 | 0.160 | 2.54× | 0.180 | 2.86× | ok |
| Shootout-C++/methcall | 0.067 | 0.141 | 2.10× | 0.197 | 2.94× | ok |
| Shootout-C++/moments | 0.082 | 0.179 | 2.18× | 0.219 | 2.67× | ok |
| Shootout-C++/random | 0.076 | 0.181 | 2.38× | 0.218 | 2.87× | ok |
| Shootout-C++/sieve | 0.077 | 0.173 | 2.25× | 0.242 | 3.14× | ok |
| SmallPT | 0.026 | 0.055 | 2.12× | 0.069 | 2.65× | ok |
| Stanford/Bubblesort | 0.009 | 0.021 | — | 0.028 | — | ok |
| Stanford/FloatMM | 0.008 | 0.020 | — | 0.027 | — | ok |
| Stanford/Puzzle | 0.009 | 0.021 | — | 0.030 | — | ok |
| Stanford/Treesort | 0.009 | 0.021 | — | 0.029 | — | ok |
| bg/binarytrees/2 | 0.069 | 0.152 | 2.20× | 0.187 | 2.71× | ok |
| bg/fannkuchredux/3 | 0.032 | 0.062 | 1.94× | 0.080 | 2.50× | ok |
| bg/fasta/1 | 0.045 | 0.100 | 2.22× | 0.115 | 2.56× | ok |
| bg/fasta/2 | 0.048 | 0.099 | 2.06× | 0.120 | 2.50× | ok |
| bg/fasta/3 | 0.074 | 0.156 | 2.11× | 0.209 | 2.82× | ok |
| bg/fasta/4 | 0.068 | 0.137 | 2.01× | 0.168 | 2.47× | ok |
| bg/fasta/6 | 0.111 | 0.312 | 2.81× | 0.336 | 3.03× | ok |
| bg/mandelbrot/0 | 0.127 | 0.283 | 2.23× | 0.394 | 3.10× | ok |
| bg/mandelbrot/2 | 0.073 | 0.187 | 2.56× | 0.237 | 3.25× | ok |
| bg/mandelbrot/3 | 0.097 | 0.171 | 1.76× | 0.244 | 2.52× | ok |
| bg/mandelbrot/5 | 0.042 | 0.087 | 2.07× | 0.112 | 2.67× | ok |
| bg/mandelbrot/7 | 0.042 | 0.089 | 2.12× | 0.117 | 2.79× | ok |
| bg/mandelbrot/9 | 0.037 | 0.086 | 2.32× | 0.103 | 2.78× | ok |
| bg/nbody/1 | 0.026 | 0.057 | 2.19× | 0.073 | 2.81× | ok |
| bg/nbody/2 | 0.028 | 0.054 | 1.93× | 0.068 | 2.43× | ok |
| bg/nbody/3 | 0.026 | 0.056 | 2.15× | 0.070 | 2.69× | ok |
| bg/nbody/6 | 0.025 | 0.054 | 2.16× | 0.087 | 3.48× | ok |
| bg/pidigits/4 | 0.121 | 0.261 | 2.16× | 0.352 | 2.91× | ok |
| bg/pidigits/5 | 0.078 | 0.174 | 2.23× | 0.200 | 2.56× | ok |
| bg/revcomp/1 | 0.076 | 0.182 | 2.39× | 0.233 | 3.07× | ok |
| bg/revcomp/5 | 0.073 | 0.158 | 2.16× | 0.189 | 2.59× | ok |
| bg/spectralnorm/1 | 0.114 | 0.224 | 1.96× | 0.324 | 2.84× | ok |
| box2d | 1.329 | 2.703 | 2.03× | 3.344 | 2.52× | ok |
| fmt | 0.404 | 1.034 | 2.56× | 1.500 | 3.71× | ok |
| hexxagon | 0.242 | 0.486 | 2.01× | 0.754 | 3.12× | ok |
| lambda | 0.040 | 0.123 | 3.08× | 0.164 | 4.10× | ok |
| minisat | 0.050 | 0.126 | 2.52× | 0.166 | 3.32× | ok |
| nlohmann-json | 0.331 | 0.917 | 2.77× | 1.309 | 3.95× | ok |
| pugixml | 0.203 | 0.517 | 2.55× | 0.711 | 3.50× | ok |
| pugixml-tests | 2.861 | 7.461 | 2.61× | 9.594 | 3.35× | ok |
| rapidjson | 0.091 | 0.236 | 2.59× | 0.266 | 2.92× | ok |
| re2 | 2.602 | 6.919 | 2.66× | 5.556 | 2.14× | ok |
| re2-test-re2 | 4.149 | 9.622 | 2.32× | 12.510 | 3.02× | ok |
| re2-test-search | 4.142 | 8.989 | 2.17× | 13.009 | 3.14× | ok |
| tramp3d-v4 | 0.540 | 2.268 | 4.20× | 1.434 | 2.66× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
