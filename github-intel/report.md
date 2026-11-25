# Public benchmarks: Intel (GitHub)

Measured compiler: [`bf2f830a4`](https://github.com/vishvananda/cppgm/commit/bf2f830a479c21887e7ef6e44787b48dac78bf6d) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/45651777895) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: Intel(R) Xeon(R) 6975P-C.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.30× | 74 | 2.92× | 74 |
| Compile CPU, `-O0` | 3.22× | 76 | 3.20× | 76 |
| Compile CPU, `-O3` | 4.25× | 80 | 3.79× | 80 |
| Compile peak RSS, `-O0` | 1.42× | 81 | 2.15× | 81 |
| Compile peak RSS, `-O3` | 1.68× | 81 | 2.25× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.11× | 81 | 1.06× | 81 |
| Run CPU, `-O3` | 1.01× | 80 | 1.03× | 80 |
| Run instructions, `-O3` | 1.05× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.923 to 1.017; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.062 | 0.244 | 3.94× | 0.211 | 3.40× | ok |
| Adobe-C++/loop_unroll | 0.052 | 0.555 | 10.67× | 0.211 | 4.06× | ok |
| Adobe-C++/simple_types_constant_folding | 0.050 | 0.632 | 12.64× | 0.208 | 4.16× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.044 | 0.466 | 10.59× | 0.222 | 5.05× | ok |
| Adobe-C++/stepanov_abstraction | 0.035 | 0.169 | 4.83× | 0.109 | 3.11× | ok |
| Adobe-C++/stepanov_vector | 0.072 | 0.267 | 3.71× | 0.205 | 2.85× | ok |
| Bullet | 4.958 | 16.791 | 3.39× | 17.166 | 3.46× | ok |
| CLAMR | 2.395 | 8.620 | 3.60× | 7.898 | 3.30× | ok |
| CoyoteBench/almabench | 0.026 | 0.066 | 2.54× | 0.077 | 2.96× | ok |
| CoyoteBench/fftbench | 0.096 | 0.251 | 2.61× | 0.361 | 3.76× | ok |
| CoyoteBench/huffbench | 0.030 | 0.067 | 2.23× | 0.087 | 2.90× | ok |
| CoyoteBench/lpbench | 0.030 | 0.077 | 2.57× | 0.088 | 2.93× | ok |
| DOE/HACCKernels | 0.109 | 0.294 | 2.70× | 0.321 | 2.94× | ok |
| DOE/HPCCG | 0.706 | 1.565 | 2.22× | 2.322 | 3.29× | ok |
| DOE/PENNANT | 1.343 | 3.738 | 2.78× | 3.900 | 2.90× | ok |
| DOE/miniFE | 0.603 | 2.249 | 3.73× | 2.091 | 3.47× | ok |
| Misc-C++-EH/spirit | 0.466 | 2.513 | 5.39× | 1.561 | 3.35× | ok |
| Misc-C++-Large/ray | 0.104 | 0.277 | 2.66× | 0.280 | 2.69× | ok |
| Misc-C++-Large/sphereflake | 0.095 | 0.209 | 2.20× | 0.265 | 2.79× | ok |
| Misc-C++/bigfib | 0.106 | 0.335 | 3.16× | 0.390 | 3.68× | ok |
| Misc-C++/oopack_v1p8 | 0.029 | 0.084 | 2.90× | 0.085 | 2.93× | ok |
| Misc-C++/stepanov_container | 0.161 | 0.566 | 3.52× | 0.550 | 3.42× | ok |
| Misc-C++/stepanov_v1p2 | 0.028 | 0.105 | 3.75× | 0.088 | 3.14× | ok |
| PAQ8p | 0.065 | 0.453 | 6.97× | 0.225 | 3.46× | ok |
| Prolangs-C++/life | 0.004 | 0.031 | — | 0.030 | — | ok |
| Prolangs-C++/ocean | 0.010 | 0.066 | 6.60× | 0.049 | 4.90× | ok |
| Prolangs-C++/primes | 0.005 | 0.021 | — | 0.024 | — | ok |
| Shootout-C++-EH/except | 0.072 | 0.168 | 2.33× | 0.227 | 3.15× | ok |
| Shootout-C++/ackermann | 0.063 | 0.143 | 2.27× | 0.227 | 3.60× | ok |
| Shootout-C++/ary3 | 0.073 | 0.205 | 2.81× | 0.240 | 3.29× | ok |
| Shootout-C++/fibo | 0.071 | 0.159 | 2.24× | 0.200 | 2.82× | ok |
| Shootout-C++/hash | 0.098 | 0.279 | 2.85× | 0.295 | 3.01× | ok |
| Shootout-C++/hash2 | 0.109 | 0.295 | 2.71× | 0.284 | 2.61× | ok |
| Shootout-C++/heapsort | 0.090 | 0.176 | 1.96× | 0.289 | 3.21× | ok |
| Shootout-C++/lists | 0.072 | 0.191 | 2.65× | 0.219 | 3.04× | ok |
| Shootout-C++/lists1 | 0.100 | 0.245 | 2.45× | 0.248 | 2.48× | ok |
| Shootout-C++/matrix | 0.073 | 0.145 | 1.99× | 0.196 | 2.68× | ok |
| Shootout-C++/methcall | 0.064 | 0.153 | 2.39× | 0.200 | 3.12× | ok |
| Shootout-C++/moments | 0.088 | 0.251 | 2.85× | 0.253 | 2.88× | ok |
| Shootout-C++/random | 0.078 | 0.198 | 2.54× | 0.232 | 2.97× | ok |
| Shootout-C++/sieve | 0.091 | 0.222 | 2.44× | 0.268 | 2.95× | ok |
| SmallPT | 0.028 | 0.084 | 3.00× | 0.079 | 2.82× | ok |
| Stanford/Bubblesort | 0.009 | 0.027 | — | 0.030 | — | ok |
| Stanford/FloatMM | 0.009 | 0.025 | — | 0.032 | — | ok |
| Stanford/Puzzle | 0.010 | 0.033 | 3.30× | 0.034 | 3.40× | ok |
| Stanford/Treesort | 0.009 | 0.028 | — | 0.030 | — | ok |
| bg/binarytrees/2 | 0.068 | 0.152 | 2.24× | 0.205 | 3.01× | ok |
| bg/fannkuchredux/3 | 0.033 | 0.072 | 2.18× | 0.080 | 2.42× | ok |
| bg/fasta/1 | 0.052 | 0.118 | 2.27× | 0.136 | 2.62× | ok |
| bg/fasta/2 | 0.048 | 0.125 | 2.60× | 0.122 | 2.54× | ok |
| bg/fasta/3 | 0.074 | 0.173 | 2.34× | 0.230 | 3.11× | ok |
| bg/fasta/4 | 0.069 | 0.150 | 2.17× | 0.175 | 2.54× | ok |
| bg/fasta/6 | 0.119 | 0.388 | 3.26× | 0.407 | 3.42× | ok |
| bg/mandelbrot/0 | 0.145 | 0.459 | 3.17× | 0.435 | 3.00× | ok |
| bg/mandelbrot/2 | 0.086 | 0.236 | 2.74× | 0.319 | 3.71× | ok |
| bg/mandelbrot/3 | 0.092 | 0.201 | 2.18× | 0.256 | 2.78× | ok |
| bg/mandelbrot/5 | 0.043 | 0.107 | 2.49× | 0.119 | 2.77× | ok |
| bg/mandelbrot/7 | 0.051 | 0.116 | 2.27× | 0.139 | 2.73× | ok |
| bg/mandelbrot/9 | 0.041 | 0.113 | 2.76× | 0.127 | 3.10× | ok |
| bg/nbody/1 | 0.028 | 0.108 | 3.86× | 0.088 | 3.14× | ok |
| bg/nbody/2 | 0.025 | 0.067 | 2.68× | 0.079 | 3.16× | ok |
| bg/nbody/3 | 0.025 | 0.067 | 2.68× | 0.072 | 2.88× | ok |
| bg/nbody/6 | 0.027 | 0.102 | 3.78× | 0.104 | 3.85× | ok |
| bg/pidigits/4 | 0.112 | 0.302 | 2.70× | 0.356 | 3.18× | ok |
| bg/pidigits/5 | 0.071 | 0.155 | 2.18× | 0.211 | 2.97× | ok |
| bg/revcomp/1 | 0.088 | 0.211 | 2.40× | 0.247 | 2.81× | ok |
| bg/revcomp/5 | 0.071 | 0.198 | 2.79× | 0.236 | 3.32× | ok |
| bg/spectralnorm/1 | 0.104 | 0.254 | 2.44× | 0.365 | 3.51× | ok |
| box2d | 1.326 | 4.290 | 3.24× | 4.260 | 3.21× | ok |
| fmt | 0.502 | 2.439 | 4.86× | 1.988 | 3.96× | ok |
| hexxagon | 0.250 | 0.621 | 2.48× | 0.814 | 3.26× | ok |
| lambda | 0.051 | 0.299 | 5.86× | 0.230 | 4.51× | ok |
| minisat | 0.060 | 0.279 | 4.65× | 0.227 | 3.78× | ok |
| nlohmann-json | 0.406 | 1.946 | 4.79× | 1.784 | 4.39× | ok |
| pugixml | 0.251 | 1.235 | 4.92× | 0.935 | 3.73× | ok |
| pugixml-tests | 3.029 | 14.598 | 4.82× | 12.269 | 4.05× | ok |
| rapidjson | 0.117 | 0.466 | 3.98× | 0.375 | 3.21× | ok |
| re2 | 2.497 | 9.683 | 3.88× | 6.500 | 2.60× | ok |
| re2-test-re2 | 4.430 | 15.064 | 3.40× | 14.665 | 3.31× | ok |
| re2-test-search | 4.453 | 13.679 | 3.07× | 14.652 | 3.29× | ok |
| tramp3d-v4 | 0.702 | 7.739 | 11.02× | 2.547 | 3.63× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.109 | 0.803 | 7.37× | 0.504 | 4.62× | ok |
| Adobe-C++/loop_unroll | 0.478 | 5.192 | 10.86× | 4.066 | 8.51× | ok |
| Adobe-C++/simple_types_constant_folding | 0.296 | 2.864 | 9.68× | 2.479 | 8.38× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.247 | 2.137 | 8.65× | 1.789 | 7.24× | ok |
| Adobe-C++/stepanov_abstraction | 0.093 | 0.958 | 10.30× | 0.453 | 4.87× | ok |
| Adobe-C++/stepanov_vector | 0.128 | 1.410 | 11.02× | 0.516 | 4.03× | ok |
| Bullet | 6.258 | 37.719 | 6.03× | 26.808 | 4.28× | ok |
| CLAMR | 4.616 | 22.564 | 4.89× | 18.470 | 4.00× | ok |
| CoyoteBench/almabench | 0.032 | 0.148 | 4.62× | 0.115 | 3.59× | ok |
| CoyoteBench/fftbench | 0.130 | 0.402 | 3.09× | 0.494 | 3.80× | ok |
| CoyoteBench/huffbench | 0.037 | 0.204 | 5.51× | 0.137 | 3.70× | ok |
| CoyoteBench/lpbench | 0.040 | 0.190 | 4.75× | 0.207 | 5.17× | ok |
| DOE/HACCKernels | 0.115 | 0.409 | 3.56× | 0.386 | 3.36× | ok |
| DOE/HPCCG | 0.762 | 2.240 | 2.94× | 2.590 | 3.40× | ok |
| DOE/PENNANT | 1.705 | 5.896 | 3.46× | 5.492 | 3.22× | ok |
| DOE/miniFE | 0.929 | 4.112 | 4.43× | 3.396 | 3.66× | ok |
| Misc-C++-EH/spirit | 0.679 | 3.924 | 5.78× | 2.870 | 4.23× | ok |
| Misc-C++-Large/ray | 0.105 | 0.477 | 4.54× | 0.371 | 3.53× | ok |
| Misc-C++-Large/sphereflake | 0.109 | 0.691 | 6.34× | 0.377 | 3.46× | ok |
| Misc-C++/bigfib | 0.131 | 0.491 | 3.75× | 0.447 | 3.41× | ok |
| Misc-C++/oopack_v1p8 | 0.036 | 0.168 | 4.67× | 0.155 | 4.31× | ok |
| Misc-C++/stepanov_container | 0.216 | 0.805 | 3.73× | 0.934 | 4.32× | ok |
| Misc-C++/stepanov_v1p2 | 0.040 | 0.197 | 4.92× | 0.177 | 4.42× | ok |
| PAQ8p | 0.313 | 3.925 | 12.54× | 1.698 | 5.42× | ok |
| Prolangs-C++/life | 0.010 | 0.103 | 10.30× | 0.070 | 7.00× | ok |
| Prolangs-C++/ocean | 0.022 | 0.204 | 9.27× | 0.131 | 5.95× | ok |
| Prolangs-C++/primes | 0.007 | 0.032 | — | 0.032 | — | ok |
| Shootout-C++-EH/except | 0.075 | 0.197 | 2.63× | 0.246 | 3.28× | ok |
| Shootout-C++/ackermann | 0.075 | 0.180 | 2.40× | 0.245 | 3.27× | ok |
| Shootout-C++/ary3 | 0.086 | 0.219 | 2.55× | 0.284 | 3.30× | ok |
| Shootout-C++/fibo | 0.075 | 0.207 | 2.76× | 0.211 | 2.81× | ok |
| Shootout-C++/hash | 0.116 | 0.375 | 3.23× | 0.388 | 3.34× | ok |
| Shootout-C++/hash2 | 0.130 | 0.442 | 3.40× | 0.408 | 3.14× | ok |
| Shootout-C++/heapsort | 0.088 | 0.211 | 2.40× | 0.248 | 2.82× | ok |
| Shootout-C++/lists | 0.077 | 0.219 | 2.84× | 0.245 | 3.18× | ok |
| Shootout-C++/lists1 | 0.100 | 0.290 | 2.90× | 0.290 | 2.90× | ok |
| Shootout-C++/matrix | 0.073 | 0.236 | 3.23× | 0.297 | 4.07× | ok |
| Shootout-C++/methcall | 0.073 | 0.177 | 2.42× | 0.220 | 3.01× | ok |
| Shootout-C++/moments | 0.100 | 0.350 | 3.50× | 0.315 | 3.15× | ok |
| Shootout-C++/random | 0.085 | 0.194 | 2.28× | 0.242 | 2.85× | ok |
| Shootout-C++/sieve | 0.088 | 0.246 | 2.80× | 0.300 | 3.41× | ok |
| SmallPT | 0.038 | 0.282 | 7.42× | 0.153 | 4.03× | ok |
| Stanford/Bubblesort | 0.012 | 0.054 | 4.50× | 0.046 | 3.83× | ok |
| Stanford/FloatMM | 0.013 | 0.057 | 4.38× | 0.068 | 5.23× | ok |
| Stanford/Puzzle | 0.022 | 0.121 | 5.50× | 0.115 | 5.23× | ok |
| Stanford/Treesort | 0.014 | 0.084 | 6.00× | 0.051 | 3.64× | ok |
| bg/binarytrees/2 | 0.072 | 0.407 | 5.65× | 0.225 | 3.13× | ok |
| bg/fannkuchredux/3 | 0.038 | 0.122 | 3.21× | 0.110 | 2.89× | ok |
| bg/fasta/1 | 0.059 | 0.154 | 2.61× | 0.175 | 2.97× | ok |
| bg/fasta/2 | 0.054 | 0.164 | 3.04× | 0.172 | 3.19× | ok |
| bg/fasta/3 | 0.088 | 0.211 | 2.40× | 0.267 | 3.03× | ok |
| bg/fasta/4 | 0.076 | 0.181 | 2.38× | 0.212 | 2.79× | ok |
| bg/fasta/6 | 0.142 | 0.401 | 2.82× | 0.528 | 3.72× | ok |
| bg/mandelbrot/0 | 0.173 | 0.606 | 3.50× | 0.647 | 3.74× | ok |
| bg/mandelbrot/2 | 0.094 | 0.259 | 2.76× | 0.293 | 3.12× | ok |
| bg/mandelbrot/3 | 0.092 | 0.225 | 2.45× | 0.282 | 3.07× | ok |
| bg/mandelbrot/5 | 0.047 | 0.143 | 3.04× | 0.146 | 3.11× | ok |
| bg/mandelbrot/7 | 0.062 | 0.187 | 3.02× | 0.171 | 2.76× | ok |
| bg/mandelbrot/9 | 0.051 | 0.180 | 3.53× | 0.150 | 2.94× | ok |
| bg/nbody/1 | 0.042 | 0.166 | 3.95× | 0.181 | 4.31× | ok |
| bg/nbody/2 | 0.032 | 0.127 | 3.97× | 0.119 | 3.72× | ok |
| bg/nbody/3 | 0.031 | 0.116 | 3.74× | 0.102 | 3.29× | ok |
| bg/nbody/6 | 0.040 | 0.158 | 3.95× | 0.162 | 4.05× | ok |
| bg/pidigits/4 | 0.117 | 0.333 | 2.85× | 0.421 | 3.60× | ok |
| bg/pidigits/5 | 0.074 | 0.185 | 2.50× | 0.236 | 3.19× | ok |
| bg/revcomp/1 | 0.098 | 0.239 | 2.44× | 0.263 | 2.68× | ok |
| bg/revcomp/5 | 0.088 | 0.224 | 2.55× | 0.286 | 3.25× | ok |
| bg/spectralnorm/1 | 0.126 | 0.322 | 2.56× | 0.395 | 3.13× | ok |
| box2d | 1.797 | 7.435 | 4.14× | 6.656 | 3.70× | ok |
| fmt | 0.923 | 4.818 | 5.22× | 3.605 | 3.91× | ok |
| hexxagon | 0.288 | 1.047 | 3.64× | 1.090 | 3.78× | ok |
| lambda | 0.122 | 1.127 | 9.24× | 0.580 | 4.75× | ok |
| minisat | 0.143 | 0.903 | 6.31× | 0.641 | 4.48× | ok |
| nlohmann-json | 0.750 | 3.451 | 4.60× | 3.025 | 4.03× | ok |
| pugixml | 0.681 | 5.444 | 7.99× | 3.723 | 5.47× | ok |
| pugixml-tests | 4.655 | 33.742 | 7.25× | 24.693 | 5.30× | ok |
| rapidjson | 0.232 | 1.203 | 5.19× | 0.722 | 3.11× | ok |
| re2 | 3.084 | 17.487 | 5.67× | 9.806 | 3.18× | ok |
| re2-test-re2 | 5.664 | 25.871 | 4.57× | 21.093 | 3.72× | ok |
| re2-test-search | 5.617 | 23.402 | 4.17× | 20.419 | 3.64× | ok |
| tramp3d-v4 | 3.094 | 23.928 | 7.73× | 13.767 | 4.45× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.058 | 0.132 | 2.28× | 0.181 | 3.12× | ok |
| Adobe-C++/loop_unroll | 0.038 | 0.096 | 2.53× | 0.100 | 2.63× | ok |
| Adobe-C++/simple_types_constant_folding | 0.034 | 0.099 | 2.91× | 0.105 | 3.09× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.033 | 0.091 | 2.76× | 0.115 | 3.48× | ok |
| Adobe-C++/stepanov_abstraction | 0.029 | 0.065 | 2.24× | 0.087 | 3.00× | ok |
| Adobe-C++/stepanov_vector | 0.064 | 0.118 | 1.84× | 0.165 | 2.58× | ok |
| Bullet | 4.508 | 10.546 | 2.34× | 14.294 | 3.17× | ok |
| CLAMR | 2.140 | 5.199 | 2.43× | 7.178 | 3.35× | ok |
| CoyoteBench/almabench | 0.026 | 0.054 | 2.08× | 0.072 | 2.77× | ok |
| CoyoteBench/fftbench | 0.092 | 0.221 | 2.40× | 0.338 | 3.67× | ok |
| CoyoteBench/huffbench | 0.030 | 0.056 | 1.87× | 0.082 | 2.73× | ok |
| CoyoteBench/lpbench | 0.029 | 0.060 | 2.07× | 0.083 | 2.86× | ok |
| DOE/HACCKernels | 0.104 | 0.258 | 2.48× | 0.295 | 2.84× | ok |
| DOE/HPCCG | 0.685 | 1.355 | 1.98× | 2.154 | 3.14× | ok |
| DOE/PENNANT | 1.255 | 2.790 | 2.22× | 3.436 | 2.74× | ok |
| DOE/miniFE | 0.546 | 1.431 | 2.62× | 1.557 | 2.85× | ok |
| Misc-C++-EH/spirit | 0.332 | 1.001 | 3.02× | 1.009 | 3.04× | ok |
| Misc-C++-Large/ray | 0.101 | 0.231 | 2.29× | 0.253 | 2.50× | ok |
| Misc-C++-Large/sphereflake | 0.094 | 0.181 | 1.93× | 0.279 | 2.97× | ok |
| Misc-C++/bigfib | 0.096 | 0.223 | 2.32× | 0.284 | 2.96× | ok |
| Misc-C++/oopack_v1p8 | 0.027 | 0.058 | 2.15× | 0.075 | 2.78× | ok |
| Misc-C++/stepanov_container | 0.143 | 0.328 | 2.29× | 0.463 | 3.24× | ok |
| Misc-C++/stepanov_v1p2 | 0.028 | 0.056 | 2.00× | 0.075 | 2.68× | ok |
| PAQ8p | 0.042 | 0.118 | 2.81× | 0.136 | 3.24× | ok |
| Prolangs-C++/life | 0.003 | 0.010 | — | 0.021 | — | ok |
| Prolangs-C++/ocean | 0.008 | 0.022 | — | 0.033 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.015 | — | 0.022 | — | ok |
| Shootout-C++-EH/except | 0.072 | 0.165 | 2.29× | 0.215 | 2.99× | ok |
| Shootout-C++/ackermann | 0.063 | 0.144 | 2.29× | 0.219 | 3.48× | ok |
| Shootout-C++/ary3 | 0.070 | 0.186 | 2.66× | 0.225 | 3.21× | ok |
| Shootout-C++/fibo | 0.070 | 0.165 | 2.36× | 0.191 | 2.73× | ok |
| Shootout-C++/hash | 0.093 | 0.208 | 2.24× | 0.261 | 2.81× | ok |
| Shootout-C++/hash2 | 0.101 | 0.223 | 2.21× | 0.250 | 2.48× | ok |
| Shootout-C++/heapsort | 0.091 | 0.176 | 1.93× | 0.217 | 2.38× | ok |
| Shootout-C++/lists | 0.068 | 0.157 | 2.31× | 0.199 | 2.93× | ok |
| Shootout-C++/lists1 | 0.095 | 0.198 | 2.08× | 0.225 | 2.37× | ok |
| Shootout-C++/matrix | 0.072 | 0.144 | 2.00× | 0.187 | 2.60× | ok |
| Shootout-C++/methcall | 0.063 | 0.150 | 2.38× | 0.192 | 3.05× | ok |
| Shootout-C++/moments | 0.083 | 0.198 | 2.39× | 0.227 | 2.73× | ok |
| Shootout-C++/random | 0.079 | 0.193 | 2.44× | 0.220 | 2.78× | ok |
| Shootout-C++/sieve | 0.087 | 0.180 | 2.07× | 0.256 | 2.94× | ok |
| SmallPT | 0.025 | 0.053 | 2.12× | 0.070 | 2.80× | ok |
| Stanford/Bubblesort | 0.009 | 0.022 | — | 0.030 | — | ok |
| Stanford/FloatMM | 0.009 | 0.020 | — | 0.030 | — | ok |
| Stanford/Puzzle | 0.009 | 0.023 | — | 0.032 | — | ok |
| Stanford/Treesort | 0.009 | 0.022 | — | 0.030 | — | ok |
| bg/binarytrees/2 | 0.067 | 0.148 | 2.21× | 0.197 | 2.94× | ok |
| bg/fannkuchredux/3 | 0.033 | 0.062 | 1.88× | 0.076 | 2.30× | ok |
| bg/fasta/1 | 0.050 | 0.093 | 1.86× | 0.124 | 2.48× | ok |
| bg/fasta/2 | 0.050 | 0.098 | 1.96× | 0.113 | 2.26× | ok |
| bg/fasta/3 | 0.073 | 0.161 | 2.21× | 0.216 | 2.96× | ok |
| bg/fasta/4 | 0.068 | 0.150 | 2.21× | 0.169 | 2.49× | ok |
| bg/fasta/6 | 0.106 | 0.275 | 2.59× | 0.355 | 3.35× | ok |
| bg/mandelbrot/0 | 0.130 | 0.301 | 2.32× | 0.457 | 3.52× | ok |
| bg/mandelbrot/2 | 0.084 | 0.212 | 2.52× | 0.263 | 3.13× | ok |
| bg/mandelbrot/3 | 0.093 | 0.196 | 2.11× | 0.242 | 2.60× | ok |
| bg/mandelbrot/5 | 0.041 | 0.087 | 2.12× | 0.107 | 2.61× | ok |
| bg/mandelbrot/7 | 0.047 | 0.084 | 1.79× | 0.123 | 2.62× | ok |
| bg/mandelbrot/9 | 0.038 | 0.082 | 2.16× | 0.099 | 2.61× | ok |
| bg/nbody/1 | 0.027 | 0.060 | 2.22× | 0.074 | 2.74× | ok |
| bg/nbody/2 | 0.025 | 0.054 | 2.16× | 0.073 | 2.92× | ok |
| bg/nbody/3 | 0.025 | 0.054 | 2.16× | 0.068 | 2.72× | ok |
| bg/nbody/6 | 0.026 | 0.059 | 2.27× | 0.082 | 3.15× | ok |
| bg/pidigits/4 | 0.108 | 0.268 | 2.48× | 0.348 | 3.22× | ok |
| bg/pidigits/5 | 0.070 | 0.180 | 2.57× | 0.200 | 2.86× | ok |
| bg/revcomp/1 | 0.084 | 0.168 | 2.00× | 0.224 | 2.67× | ok |
| bg/revcomp/5 | 0.063 | 0.158 | 2.51× | 0.184 | 2.92× | ok |
| bg/spectralnorm/1 | 0.112 | 0.239 | 2.13× | 0.328 | 2.93× | ok |
| box2d | 1.300 | 2.818 | 2.17× | 3.447 | 2.65× | ok |
| fmt | 0.377 | 0.985 | 2.61× | 1.557 | 4.13× | ok |
| hexxagon | 0.238 | 0.563 | 2.37× | 0.721 | 3.03× | ok |
| lambda | 0.040 | 0.118 | 2.95× | 0.159 | 3.98× | ok |
| minisat | 0.051 | 0.123 | 2.41× | 0.164 | 3.22× | ok |
| nlohmann-json | 0.305 | 0.897 | 2.94× | 1.333 | 4.37× | ok |
| pugixml | 0.196 | 0.457 | 2.33× | 0.685 | 3.49× | ok |
| pugixml-tests | 2.787 | 7.156 | 2.57× | 9.374 | 3.36× | ok |
| rapidjson | 0.093 | 0.238 | 2.56× | 0.297 | 3.19× | ok |
| re2 | 2.640 | 6.178 | 2.34× | 5.548 | 2.10× | ok |
| re2-test-re2 | 4.001 | 9.719 | 2.43× | 12.449 | 3.11× | ok |
| re2-test-search | 4.011 | 9.029 | 2.25× | 12.774 | 3.18× | ok |
| tramp3d-v4 | 0.608 | 2.232 | 3.67× | 1.482 | 2.44× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
