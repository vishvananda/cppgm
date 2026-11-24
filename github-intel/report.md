# Public benchmarks: Intel (GitHub)

Measured compiler: [`80079d548`](https://github.com/vishvananda/cppgm/commit/80079d548d66a02401ca1238a27cd7ff792c6d93) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/45272062060) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: Intel(R) Xeon(R) 6975P-C.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.28× | 74 | 2.96× | 74 |
| Compile CPU, `-O0` | 3.22× | 74 | 3.18× | 74 |
| Compile CPU, `-O3` | 4.37× | 80 | 3.89× | 80 |
| Compile peak RSS, `-O0` | 1.44× | 81 | 2.17× | 81 |
| Compile peak RSS, `-O3` | 1.69× | 81 | 2.27× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.12× | 81 | 1.07× | 81 |
| Run CPU, `-O3` | 1.01× | 80 | 1.02× | 80 |
| Run instructions, `-O3` | 1.05× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.875 to 1.018; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.063 | 0.250 | 3.97× | 0.174 | 2.76× | ok |
| Adobe-C++/loop_unroll | 0.052 | 0.577 | 11.10× | 0.170 | 3.27× | ok |
| Adobe-C++/simple_types_constant_folding | 0.054 | 0.671 | 12.43× | 0.202 | 3.74× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.045 | 0.488 | 10.84× | 0.243 | 5.40× | ok |
| Adobe-C++/stepanov_abstraction | 0.037 | 0.169 | 4.57× | 0.108 | 2.92× | ok |
| Adobe-C++/stepanov_vector | 0.073 | 0.273 | 3.74× | 0.228 | 3.12× | ok |
| Bullet | 4.712 | 16.131 | 3.42× | 14.785 | 3.14× | ok |
| CLAMR | 2.366 | 8.785 | 3.71× | 7.062 | 2.98× | ok |
| CoyoteBench/almabench | 0.025 | 0.066 | 2.64× | 0.077 | 3.08× | ok |
| CoyoteBench/fftbench | 0.093 | 0.247 | 2.66× | 0.286 | 3.08× | ok |
| CoyoteBench/huffbench | 0.026 | 0.070 | 2.69× | 0.088 | 3.38× | ok |
| CoyoteBench/lpbench | 0.024 | 0.062 | 2.58× | 0.078 | 3.25× | ok |
| DOE/HACCKernels | 0.110 | 0.254 | 2.31× | 0.299 | 2.72× | ok |
| DOE/HPCCG | 0.644 | 1.540 | 2.39× | 2.241 | 3.48× | ok |
| DOE/PENNANT | 1.470 | 3.675 | 2.50× | 3.675 | 2.50× | ok |
| DOE/miniFE | 0.543 | 1.907 | 3.51× | 1.798 | 3.31× | ok |
| Misc-C++-EH/spirit | 0.426 | 2.310 | 5.42× | 1.542 | 3.62× | ok |
| Misc-C++-Large/ray | 0.094 | 0.237 | 2.52× | 0.277 | 2.95× | ok |
| Misc-C++-Large/sphereflake | 0.080 | 0.198 | 2.48× | 0.257 | 3.21× | ok |
| Misc-C++/bigfib | 0.121 | 0.339 | 2.80× | 0.336 | 2.78× | ok |
| Misc-C++/oopack_v1p8 | 0.028 | 0.083 | 2.96× | 0.097 | 3.46× | ok |
| Misc-C++/stepanov_container | 0.159 | 0.560 | 3.52× | 0.543 | 3.42× | ok |
| Misc-C++/stepanov_v1p2 | 0.028 | 0.114 | 4.07× | 0.087 | 3.11× | ok |
| PAQ8p | 0.063 | 0.446 | 7.08× | 0.201 | 3.19× | ok |
| Prolangs-C++/life | 0.004 | 0.029 | — | 0.026 | — | ok |
| Prolangs-C++/ocean | 0.009 | 0.057 | — | 0.039 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.022 | — | 0.024 | — | ok |
| Shootout-C++-EH/except | 0.061 | 0.144 | 2.36× | 0.191 | 3.13× | ok |
| Shootout-C++/ackermann | 0.067 | 0.159 | 2.37× | 0.189 | 2.82× | ok |
| Shootout-C++/ary3 | 0.082 | 0.176 | 2.15× | 0.263 | 3.21× | ok |
| Shootout-C++/fibo | 0.071 | 0.133 | 1.87× | 0.180 | 2.54× | ok |
| Shootout-C++/hash | 0.089 | 0.257 | 2.89× | 0.272 | 3.06× | ok |
| Shootout-C++/hash2 | 0.101 | 0.301 | 2.98× | 0.299 | 2.96× | ok |
| Shootout-C++/heapsort | 0.071 | 0.161 | 2.27× | 0.228 | 3.21× | ok |
| Shootout-C++/lists | 0.071 | 0.230 | 3.24× | 0.214 | 3.01× | ok |
| Shootout-C++/lists1 | 0.075 | 0.200 | 2.67× | 0.233 | 3.11× | ok |
| Shootout-C++/matrix | 0.062 | 0.145 | 2.34× | 0.192 | 3.10× | ok |
| Shootout-C++/methcall | 0.068 | 0.141 | 2.07× | 0.234 | 3.44× | ok |
| Shootout-C++/moments | 0.085 | 0.229 | 2.69× | 0.244 | 2.87× | ok |
| Shootout-C++/random | 0.076 | 0.166 | 2.18× | 0.224 | 2.95× | ok |
| Shootout-C++/sieve | 0.077 | 0.217 | 2.82× | 0.249 | 3.23× | ok |
| SmallPT | 0.026 | 0.080 | 3.08× | 0.083 | 3.19× | ok |
| Stanford/Bubblesort | 0.008 | 0.024 | — | 0.027 | — | ok |
| Stanford/FloatMM | 0.008 | 0.025 | — | 0.029 | — | ok |
| Stanford/Puzzle | 0.009 | 0.032 | — | 0.031 | — | ok |
| Stanford/Treesort | 0.008 | 0.027 | — | 0.030 | — | ok |
| bg/binarytrees/2 | 0.062 | 0.148 | 2.39× | 0.191 | 3.08× | ok |
| bg/fannkuchredux/3 | 0.029 | 0.067 | 2.31× | 0.077 | 2.66× | ok |
| bg/fasta/1 | 0.045 | 0.115 | 2.56× | 0.121 | 2.69× | ok |
| bg/fasta/2 | 0.049 | 0.121 | 2.47× | 0.146 | 2.98× | ok |
| bg/fasta/3 | 0.070 | 0.165 | 2.36× | 0.205 | 2.93× | ok |
| bg/fasta/4 | 0.076 | 0.148 | 1.95× | 0.184 | 2.42× | ok |
| bg/fasta/6 | 0.123 | 0.417 | 3.39× | 0.419 | 3.41× | ok |
| bg/mandelbrot/0 | 0.141 | 0.480 | 3.40× | 0.415 | 2.94× | ok |
| bg/mandelbrot/2 | 0.084 | 0.180 | 2.14× | 0.242 | 2.88× | ok |
| bg/mandelbrot/3 | 0.084 | 0.183 | 2.18× | 0.244 | 2.90× | ok |
| bg/mandelbrot/5 | 0.041 | 0.104 | 2.54× | 0.111 | 2.71× | ok |
| bg/mandelbrot/7 | 0.043 | 0.117 | 2.72× | 0.138 | 3.21× | ok |
| bg/mandelbrot/9 | 0.041 | 0.109 | 2.66× | 0.113 | 2.76× | ok |
| bg/nbody/1 | 0.029 | 0.099 | 3.41× | 0.088 | 3.03× | ok |
| bg/nbody/2 | 0.024 | 0.064 | 2.67× | 0.072 | 3.00× | ok |
| bg/nbody/3 | 0.023 | 0.062 | 2.70× | 0.070 | 3.04× | ok |
| bg/nbody/6 | 0.026 | 0.089 | 3.42× | 0.097 | 3.73× | ok |
| bg/pidigits/4 | 0.108 | 0.296 | 2.74× | 0.362 | 3.35× | ok |
| bg/pidigits/5 | 0.070 | 0.157 | 2.24× | 0.206 | 2.94× | ok |
| bg/revcomp/1 | 0.073 | 0.212 | 2.90× | 0.232 | 3.18× | ok |
| bg/revcomp/5 | 0.074 | 0.197 | 2.66× | 0.267 | 3.61× | ok |
| bg/spectralnorm/1 | 0.094 | 0.246 | 2.62× | 0.361 | 3.84× | ok |
| box2d | 1.308 | 4.026 | 3.08× | 3.849 | 2.94× | ok |
| fmt | 0.439 | 2.392 | 5.45× | 1.965 | 4.48× | ok |
| hexxagon | 0.236 | 0.639 | 2.71× | 0.800 | 3.39× | ok |
| lambda | 0.049 | 0.297 | 6.06× | 0.211 | 4.31× | ok |
| minisat | 0.057 | 0.297 | 5.21× | 0.200 | 3.51× | ok |
| nlohmann-json | 0.408 | 1.885 | 4.62× | 1.740 | 4.26× | ok |
| pugixml | 0.242 | 1.207 | 4.99× | 0.926 | 3.83× | ok |
| pugixml-tests | 2.905 | 14.482 | 4.99× | 11.194 | 3.85× | ok |
| rapidjson | 0.110 | 0.458 | 4.16× | 0.375 | 3.41× | ok |
| re2 | 2.610 | 9.951 | 3.81× | 6.467 | 2.48× | ok |
| re2-test-re2 | 4.219 | 14.555 | 3.45× | 15.018 | 3.56× | ok |
| re2-test-search | 4.245 | 13.508 | 3.18× | 13.843 | 3.26× | ok |
| tramp3d-v4 | 0.792 | 8.291 | 10.47× | 2.469 | 3.12× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.128 | 0.818 | 6.39× | 0.572 | 4.47× | ok |
| Adobe-C++/loop_unroll | 0.453 | 5.466 | 12.07× | 4.103 | 9.06× | ok |
| Adobe-C++/simple_types_constant_folding | 0.249 | 3.086 | 12.39× | 2.234 | 8.97× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.204 | 2.154 | 10.56× | 1.863 | 9.13× | ok |
| Adobe-C++/stepanov_abstraction | 0.092 | 0.939 | 10.21× | 0.445 | 4.84× | ok |
| Adobe-C++/stepanov_vector | 0.110 | 1.404 | 12.76× | 0.516 | 4.69× | ok |
| Bullet | 6.033 | 35.729 | 5.92× | 25.995 | 4.31× | ok |
| CLAMR | 4.312 | 22.286 | 5.17× | 18.866 | 4.38× | ok |
| CoyoteBench/almabench | 0.029 | 0.148 | 5.10× | 0.115 | 3.97× | ok |
| CoyoteBench/fftbench | 0.113 | 0.387 | 3.42× | 0.388 | 3.43× | ok |
| CoyoteBench/huffbench | 0.039 | 0.215 | 5.51× | 0.157 | 4.03× | ok |
| CoyoteBench/lpbench | 0.033 | 0.157 | 4.76× | 0.180 | 5.45× | ok |
| DOE/HACCKernels | 0.108 | 0.364 | 3.37× | 0.375 | 3.47× | ok |
| DOE/HPCCG | 0.665 | 2.488 | 3.74× | 2.158 | 3.25× | ok |
| DOE/PENNANT | 1.684 | 5.946 | 3.53× | 5.262 | 3.12× | ok |
| DOE/miniFE | 0.777 | 3.823 | 4.92× | 3.024 | 3.89× | ok |
| Misc-C++-EH/spirit | 0.676 | 3.810 | 5.64× | 2.837 | 4.20× | ok |
| Misc-C++-Large/ray | 0.102 | 0.429 | 4.21× | 0.328 | 3.22× | ok |
| Misc-C++-Large/sphereflake | 0.100 | 0.689 | 6.89× | 0.348 | 3.48× | ok |
| Misc-C++/bigfib | 0.153 | 0.494 | 3.23× | 0.453 | 2.96× | ok |
| Misc-C++/oopack_v1p8 | 0.035 | 0.168 | 4.80× | 0.174 | 4.97× | ok |
| Misc-C++/stepanov_container | 0.221 | 0.898 | 4.06× | 0.854 | 3.86× | ok |
| Misc-C++/stepanov_v1p2 | 0.038 | 0.191 | 5.03× | 0.206 | 5.42× | ok |
| PAQ8p | 0.316 | 3.920 | 12.41× | 1.499 | 4.74× | ok |
| Prolangs-C++/life | 0.010 | 0.094 | 9.40× | 0.069 | 6.90× | ok |
| Prolangs-C++/ocean | 0.019 | 0.187 | 9.84× | 0.106 | 5.58× | ok |
| Prolangs-C++/primes | 0.007 | 0.035 | — | 0.033 | — | ok |
| Shootout-C++-EH/except | 0.063 | 0.174 | 2.76× | 0.206 | 3.27× | ok |
| Shootout-C++/ackermann | 0.073 | 0.198 | 2.71× | 0.202 | 2.77× | ok |
| Shootout-C++/ary3 | 0.085 | 0.218 | 2.56× | 0.285 | 3.35× | ok |
| Shootout-C++/fibo | 0.064 | 0.172 | 2.69× | 0.194 | 3.03× | ok |
| Shootout-C++/hash | 0.104 | 0.347 | 3.34× | 0.365 | 3.51× | ok |
| Shootout-C++/hash2 | 0.126 | 0.441 | 3.50× | 0.438 | 3.48× | ok |
| Shootout-C++/heapsort | 0.081 | 0.196 | 2.42× | 0.246 | 3.04× | ok |
| Shootout-C++/lists | 0.076 | 0.224 | 2.95× | 0.251 | 3.30× | ok |
| Shootout-C++/lists1 | 0.085 | 0.243 | 2.86× | 0.273 | 3.21× | ok |
| Shootout-C++/matrix | 0.070 | 0.200 | 2.86× | 0.279 | 3.99× | ok |
| Shootout-C++/methcall | 0.070 | 0.187 | 2.67× | 0.202 | 2.89× | ok |
| Shootout-C++/moments | 0.095 | 0.285 | 3.00× | 0.383 | 4.03× | ok |
| Shootout-C++/random | 0.080 | 0.189 | 2.36× | 0.239 | 2.99× | ok |
| Shootout-C++/sieve | 0.088 | 0.236 | 2.68× | 0.276 | 3.14× | ok |
| SmallPT | 0.039 | 0.285 | 7.31× | 0.161 | 4.13× | ok |
| Stanford/Bubblesort | 0.010 | 0.048 | 4.80× | 0.043 | 4.30× | ok |
| Stanford/FloatMM | 0.012 | 0.057 | 4.75× | 0.066 | 5.50× | ok |
| Stanford/Puzzle | 0.021 | 0.116 | 5.52× | 0.111 | 5.29× | ok |
| Stanford/Treesort | 0.014 | 0.080 | 5.71× | 0.052 | 3.71× | ok |
| bg/binarytrees/2 | 0.068 | 0.401 | 5.90× | 0.214 | 3.15× | ok |
| bg/fannkuchredux/3 | 0.035 | 0.113 | 3.23× | 0.107 | 3.06× | ok |
| bg/fasta/1 | 0.053 | 0.153 | 2.89× | 0.162 | 3.06× | ok |
| bg/fasta/2 | 0.057 | 0.162 | 2.84× | 0.167 | 2.93× | ok |
| bg/fasta/3 | 0.078 | 0.208 | 2.67× | 0.238 | 3.05× | ok |
| bg/fasta/4 | 0.071 | 0.177 | 2.49× | 0.216 | 3.04× | ok |
| bg/fasta/6 | 0.141 | 0.478 | 3.39× | 0.481 | 3.41× | ok |
| bg/mandelbrot/0 | 0.170 | 0.593 | 3.49× | 0.617 | 3.63× | ok |
| bg/mandelbrot/2 | 0.091 | 0.250 | 2.75× | 0.277 | 3.04× | ok |
| bg/mandelbrot/3 | 0.101 | 0.226 | 2.24× | 0.274 | 2.71× | ok |
| bg/mandelbrot/5 | 0.045 | 0.133 | 2.96× | 0.146 | 3.24× | ok |
| bg/mandelbrot/7 | 0.057 | 0.183 | 3.21× | 0.177 | 3.11× | ok |
| bg/mandelbrot/9 | 0.048 | 0.177 | 3.69× | 0.159 | 3.31× | ok |
| bg/nbody/1 | 0.040 | 0.155 | 3.88× | 0.150 | 3.75× | ok |
| bg/nbody/2 | 0.032 | 0.125 | 3.91× | 0.115 | 3.59× | ok |
| bg/nbody/3 | 0.028 | 0.118 | 4.21× | 0.102 | 3.64× | ok |
| bg/nbody/6 | 0.039 | 0.171 | 4.38× | 0.191 | 4.90× | ok |
| bg/pidigits/4 | 0.110 | 0.331 | 3.01× | 0.415 | 3.77× | ok |
| bg/pidigits/5 | 0.082 | 0.188 | 2.29× | 0.245 | 2.99× | ok |
| bg/revcomp/1 | 0.089 | 0.260 | 2.92× | 0.270 | 3.03× | ok |
| bg/revcomp/5 | 0.081 | 0.220 | 2.72× | 0.300 | 3.70× | ok |
| bg/spectralnorm/1 | 0.104 | 0.328 | 3.15× | 0.401 | 3.86× | ok |
| box2d | 1.685 | 7.349 | 4.36× | 6.189 | 3.67× | ok |
| fmt | 0.909 | 5.149 | 5.66× | 3.911 | 4.30× | ok |
| hexxagon | 0.266 | 1.044 | 3.92× | 1.061 | 3.99× | ok |
| lambda | 0.118 | 1.125 | 9.53× | 0.546 | 4.63× | ok |
| minisat | 0.140 | 0.990 | 7.07× | 0.641 | 4.58× | ok |
| nlohmann-json | 0.743 | 3.389 | 4.56× | 2.934 | 3.95× | ok |
| pugixml | 0.658 | 5.439 | 8.27× | 3.606 | 5.48× | ok |
| pugixml-tests | 4.362 | 33.248 | 7.62× | 22.764 | 5.22× | ok |
| rapidjson | 0.235 | 1.187 | 5.05× | 0.722 | 3.07× | ok |
| re2 | 2.888 | 17.996 | 6.23× | 9.669 | 3.35× | ok |
| re2-test-re2 | 5.522 | 25.376 | 4.60× | 22.774 | 4.12× | ok |
| re2-test-search | 5.651 | 23.047 | 4.08× | 21.458 | 3.80× | ok |
| tramp3d-v4 | 2.957 | 17.258 | 5.84× | 13.394 | 4.53× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.058 | 0.139 | 2.40× | 0.149 | 2.57× | ok |
| Adobe-C++/loop_unroll | 0.037 | 0.099 | 2.68× | 0.100 | 2.70× | ok |
| Adobe-C++/simple_types_constant_folding | 0.041 | 0.099 | 2.41× | 0.104 | 2.54× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.033 | 0.091 | 2.76× | 0.126 | 3.82× | ok |
| Adobe-C++/stepanov_abstraction | 0.032 | 0.066 | 2.06× | 0.084 | 2.62× | ok |
| Adobe-C++/stepanov_vector | 0.056 | 0.121 | 2.16× | 0.182 | 3.25× | ok |
| Bullet | 4.237 | 10.268 | 2.42× | 12.767 | 3.01× | ok |
| CLAMR | 2.038 | 4.387 | 2.15× | 5.676 | 2.79× | ok |
| CoyoteBench/almabench | 0.025 | 0.053 | 2.12× | 0.074 | 2.96× | ok |
| CoyoteBench/fftbench | 0.091 | 0.218 | 2.40× | 0.264 | 2.90× | ok |
| CoyoteBench/huffbench | 0.026 | 0.060 | 2.31× | 0.085 | 3.27× | ok |
| CoyoteBench/lpbench | 0.024 | 0.050 | 2.08× | 0.072 | 3.00× | ok |
| DOE/HACCKernels | 0.100 | 0.226 | 2.26× | 0.281 | 2.81× | ok |
| DOE/HPCCG | 0.643 | 1.288 | 2.00× | 2.016 | 3.14× | ok |
| DOE/PENNANT | 1.306 | 2.751 | 2.11× | 3.505 | 2.68× | ok |
| DOE/miniFE | 0.500 | 1.205 | 2.41× | 1.537 | 3.07× | ok |
| Misc-C++-EH/spirit | 0.307 | 0.797 | 2.60× | 1.002 | 3.26× | ok |
| Misc-C++-Large/ray | 0.098 | 0.192 | 1.96× | 0.252 | 2.57× | ok |
| Misc-C++-Large/sphereflake | 0.078 | 0.174 | 2.23× | 0.240 | 3.08× | ok |
| Misc-C++/bigfib | 0.107 | 0.226 | 2.11× | 0.302 | 2.82× | ok |
| Misc-C++/oopack_v1p8 | 0.028 | 0.057 | 2.04× | 0.086 | 3.07× | ok |
| Misc-C++/stepanov_container | 0.140 | 0.327 | 2.34× | 0.450 | 3.21× | ok |
| Misc-C++/stepanov_v1p2 | 0.028 | 0.056 | 2.00× | 0.074 | 2.64× | ok |
| PAQ8p | 0.042 | 0.114 | 2.71× | 0.115 | 2.74× | ok |
| Prolangs-C++/life | 0.003 | 0.009 | — | 0.020 | — | ok |
| Prolangs-C++/ocean | 0.008 | 0.019 | — | 0.028 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.015 | — | 0.023 | — | ok |
| Shootout-C++-EH/except | 0.062 | 0.141 | 2.27× | 0.183 | 2.95× | ok |
| Shootout-C++/ackermann | 0.067 | 0.162 | 2.42× | 0.183 | 2.73× | ok |
| Shootout-C++/ary3 | 0.070 | 0.163 | 2.33× | 0.237 | 3.39× | ok |
| Shootout-C++/fibo | 0.074 | 0.137 | 1.85× | 0.177 | 2.39× | ok |
| Shootout-C++/hash | 0.085 | 0.196 | 2.31× | 0.246 | 2.89× | ok |
| Shootout-C++/hash2 | 0.101 | 0.222 | 2.20× | 0.271 | 2.68× | ok |
| Shootout-C++/heapsort | 0.074 | 0.164 | 2.22× | 0.221 | 2.99× | ok |
| Shootout-C++/lists | 0.070 | 0.194 | 2.77× | 0.196 | 2.80× | ok |
| Shootout-C++/lists1 | 0.074 | 0.164 | 2.22× | 0.213 | 2.88× | ok |
| Shootout-C++/matrix | 0.062 | 0.143 | 2.31× | 0.184 | 2.97× | ok |
| Shootout-C++/methcall | 0.066 | 0.139 | 2.11× | 0.235 | 3.56× | ok |
| Shootout-C++/moments | 0.083 | 0.183 | 2.20× | 0.224 | 2.70× | ok |
| Shootout-C++/random | 0.078 | 0.168 | 2.15× | 0.233 | 2.99× | ok |
| Shootout-C++/sieve | 0.076 | 0.178 | 2.34× | 0.227 | 2.99× | ok |
| SmallPT | 0.025 | 0.051 | 2.04× | 0.076 | 3.04× | ok |
| Stanford/Bubblesort | 0.008 | 0.021 | — | 0.029 | — | ok |
| Stanford/FloatMM | 0.008 | 0.021 | — | 0.029 | — | ok |
| Stanford/Puzzle | 0.009 | 0.023 | — | 0.030 | — | ok |
| Stanford/Treesort | 0.009 | 0.022 | — | 0.030 | — | ok |
| bg/binarytrees/2 | 0.063 | 0.146 | 2.32× | 0.185 | 2.94× | ok |
| bg/fannkuchredux/3 | 0.029 | 0.057 | 1.97× | 0.074 | 2.55× | ok |
| bg/fasta/1 | 0.045 | 0.091 | 2.02× | 0.113 | 2.51× | ok |
| bg/fasta/2 | 0.048 | 0.097 | 2.02× | 0.122 | 2.54× | ok |
| bg/fasta/3 | 0.071 | 0.157 | 2.21× | 0.248 | 3.49× | ok |
| bg/fasta/4 | 0.078 | 0.147 | 1.88× | 0.214 | 2.74× | ok |
| bg/fasta/6 | 0.108 | 0.270 | 2.50× | 0.346 | 3.20× | ok |
| bg/mandelbrot/0 | 0.130 | 0.292 | 2.25× | 0.369 | 2.84× | ok |
| bg/mandelbrot/2 | 0.079 | 0.184 | 2.33× | 0.227 | 2.87× | ok |
| bg/mandelbrot/3 | 0.086 | 0.182 | 2.12× | 0.239 | 2.78× | ok |
| bg/mandelbrot/5 | 0.040 | 0.085 | 2.12× | 0.114 | 2.85× | ok |
| bg/mandelbrot/7 | 0.042 | 0.086 | 2.05× | 0.113 | 2.69× | ok |
| bg/mandelbrot/9 | 0.035 | 0.082 | 2.34× | 0.111 | 3.17× | ok |
| bg/nbody/1 | 0.028 | 0.056 | 2.00× | 0.073 | 2.61× | ok |
| bg/nbody/2 | 0.024 | 0.053 | 2.21× | 0.071 | 2.96× | ok |
| bg/nbody/3 | 0.023 | 0.051 | 2.22× | 0.068 | 2.96× | ok |
| bg/nbody/6 | 0.026 | 0.052 | 2.00× | 0.086 | 3.31× | ok |
| bg/pidigits/4 | 0.109 | 0.240 | 2.20× | 0.328 | 3.01× | ok |
| bg/pidigits/5 | 0.077 | 0.152 | 1.97× | 0.189 | 2.45× | ok |
| bg/revcomp/1 | 0.075 | 0.175 | 2.33× | 0.210 | 2.80× | ok |
| bg/revcomp/5 | 0.072 | 0.159 | 2.21× | 0.241 | 3.35× | ok |
| bg/spectralnorm/1 | 0.100 | 0.231 | 2.31× | 0.335 | 3.35× | ok |
| box2d | 1.292 | 2.570 | 1.99× | 3.723 | 2.88× | ok |
| fmt | 0.368 | 1.042 | 2.83× | 1.574 | 4.28× | ok |
| hexxagon | 0.242 | 0.574 | 2.37× | 0.781 | 3.23× | ok |
| lambda | 0.039 | 0.118 | 3.03× | 0.154 | 3.95× | ok |
| minisat | 0.049 | 0.129 | 2.63× | 0.152 | 3.10× | ok |
| nlohmann-json | 0.311 | 0.836 | 2.69× | 1.311 | 4.22× | ok |
| pugixml | 0.206 | 0.455 | 2.21× | 0.673 | 3.27× | ok |
| pugixml-tests | 2.671 | 7.019 | 2.63× | 8.998 | 3.37× | ok |
| rapidjson | 0.089 | 0.236 | 2.65× | 0.292 | 3.28× | ok |
| re2 | 2.689 | 6.254 | 2.33× | 5.503 | 2.05× | ok |
| re2-test-re2 | 3.706 | 9.319 | 2.51× | 12.542 | 3.38× | ok |
| re2-test-search | 3.776 | 8.900 | 2.36× | 12.272 | 3.25× | ok |
| tramp3d-v4 | 0.590 | 2.207 | 3.74× | 1.414 | 2.40× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
