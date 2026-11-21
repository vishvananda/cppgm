# Public benchmarks: Intel (GitHub)

Measured compiler: [`44d3c4a29`](https://github.com/vishvananda/cppgm/commit/44d3c4a29971caff2cc064889ec96259f34e7504) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44815881069) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: Intel(R) Xeon(R) 6975P-C.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.33× | 74 | 2.94× | 74 |
| Compile CPU, `-O0` | 3.26× | 75 | 3.18× | 75 |
| Compile CPU, `-O3` | 4.34× | 79 | 3.89× | 79 |
| Compile peak RSS, `-O0` | 1.41× | 81 | 2.10× | 81 |
| Compile peak RSS, `-O3` | 1.68× | 81 | 2.18× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.12× | 81 | 1.08× | 81 |
| Run CPU, `-O3` | 0.99× | 80 | 1.00× | 80 |
| Run instructions, `-O3` | 1.00× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.941 to 1.035; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.063 | 0.247 | 3.92× | 0.210 | 3.33× | ok |
| Adobe-C++/loop_unroll | 0.048 | 0.562 | 11.71× | 0.170 | 3.54× | ok |
| Adobe-C++/simple_types_constant_folding | 0.050 | 0.659 | 13.18× | 0.204 | 4.08× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.045 | 0.485 | 10.78× | 0.231 | 5.13× | ok |
| Adobe-C++/stepanov_abstraction | 0.037 | 0.187 | 5.05× | 0.114 | 3.08× | ok |
| Adobe-C++/stepanov_vector | 0.072 | 0.271 | 3.76× | 0.237 | 3.29× | ok |
| Bullet | 4.135 | 17.283 | 4.18× | 15.345 | 3.71× | ok |
| CLAMR | 2.372 | 9.191 | 3.87× | 7.136 | 3.01× | ok |
| CoyoteBench/almabench | 0.026 | 0.074 | 2.85× | 0.079 | 3.04× | ok |
| CoyoteBench/fftbench | 0.094 | 0.247 | 2.63× | 0.291 | 3.10× | ok |
| CoyoteBench/huffbench | 0.026 | 0.072 | 2.77× | 0.073 | 2.81× | ok |
| CoyoteBench/lpbench | 0.025 | 0.064 | 2.56× | 0.069 | 2.76× | ok |
| DOE/HACCKernels | 0.099 | 0.233 | 2.35× | 0.298 | 3.01× | ok |
| DOE/HPCCG | 0.671 | 1.508 | 2.25× | 2.245 | 3.35× | ok |
| DOE/PENNANT | 1.286 | 3.618 | 2.81× | 3.953 | 3.07× | ok |
| DOE/miniFE | 0.558 | 1.875 | 3.36× | 1.784 | 3.20× | ok |
| Misc-C++-EH/spirit | 0.415 | 2.783 | 6.71× | 1.524 | 3.67× | ok |
| Misc-C++-Large/ray | 0.088 | 0.232 | 2.64× | 0.272 | 3.09× | ok |
| Misc-C++-Large/sphereflake | 0.076 | 0.198 | 2.61× | 0.268 | 3.53× | ok |
| Misc-C++/bigfib | 0.101 | 0.330 | 3.27× | 0.323 | 3.20× | ok |
| Misc-C++/oopack_v1p8 | 0.030 | 0.081 | 2.70× | 0.096 | 3.20× | ok |
| Misc-C++/stepanov_container | 0.134 | 0.566 | 4.22× | 0.437 | 3.26× | ok |
| Misc-C++/stepanov_v1p2 | 0.027 | 0.111 | 4.11× | 0.087 | 3.22× | ok |
| PAQ8p | 0.066 | 0.450 | 6.82× | 0.202 | 3.06× | ok |
| Prolangs-C++/life | 0.004 | 0.028 | — | 0.023 | — | ok |
| Prolangs-C++/ocean | 0.010 | 0.064 | 6.40× | 0.045 | 4.50× | ok |
| Prolangs-C++/primes | 0.005 | 0.022 | — | 0.024 | — | ok |
| Shootout-C++-EH/except | 0.060 | 0.144 | 2.40× | 0.193 | 3.22× | ok |
| Shootout-C++/ackermann | 0.066 | 0.153 | 2.32× | 0.224 | 3.39× | ok |
| Shootout-C++/ary3 | 0.069 | 0.176 | 2.55× | 0.217 | 3.14× | ok |
| Shootout-C++/fibo | 0.066 | 0.156 | 2.36× | 0.220 | 3.33× | ok |
| Shootout-C++/hash | 0.092 | 0.296 | 3.22× | 0.279 | 3.03× | ok |
| Shootout-C++/hash2 | 0.105 | 0.304 | 2.90× | 0.336 | 3.20× | ok |
| Shootout-C++/heapsort | 0.075 | 0.167 | 2.23× | 0.284 | 3.79× | ok |
| Shootout-C++/lists | 0.081 | 0.203 | 2.51× | 0.213 | 2.63× | ok |
| Shootout-C++/lists1 | 0.094 | 0.228 | 2.43× | 0.231 | 2.46× | ok |
| Shootout-C++/matrix | 0.063 | 0.148 | 2.35× | 0.192 | 3.05× | ok |
| Shootout-C++/methcall | 0.067 | 0.142 | 2.12× | 0.190 | 2.84× | ok |
| Shootout-C++/moments | 0.089 | 0.238 | 2.67× | 0.277 | 3.11× | ok |
| Shootout-C++/random | 0.078 | 0.171 | 2.19× | 0.230 | 2.95× | ok |
| Shootout-C++/sieve | 0.079 | 0.221 | 2.80× | 0.255 | 3.23× | ok |
| SmallPT | 0.026 | 0.077 | 2.96× | 0.080 | 3.08× | ok |
| Stanford/Bubblesort | 0.008 | 0.024 | — | 0.028 | — | ok |
| Stanford/FloatMM | 0.008 | 0.025 | — | 0.028 | — | ok |
| Stanford/Puzzle | 0.009 | 0.032 | — | 0.030 | — | ok |
| Stanford/Treesort | 0.008 | 0.026 | — | 0.029 | — | ok |
| bg/binarytrees/2 | 0.061 | 0.146 | 2.39× | 0.190 | 3.11× | ok |
| bg/fannkuchredux/3 | 0.030 | 0.066 | 2.20× | 0.079 | 2.63× | ok |
| bg/fasta/1 | 0.046 | 0.116 | 2.52× | 0.124 | 2.70× | ok |
| bg/fasta/2 | 0.048 | 0.118 | 2.46× | 0.118 | 2.46× | ok |
| bg/fasta/3 | 0.073 | 0.176 | 2.41× | 0.229 | 3.14× | ok |
| bg/fasta/4 | 0.068 | 0.141 | 2.07× | 0.175 | 2.57× | ok |
| bg/fasta/6 | 0.127 | 0.392 | 3.09× | 0.398 | 3.13× | ok |
| bg/mandelbrot/0 | 0.140 | 0.435 | 3.11× | 0.417 | 2.98× | ok |
| bg/mandelbrot/2 | 0.082 | 0.220 | 2.68× | 0.270 | 3.29× | ok |
| bg/mandelbrot/3 | 0.096 | 0.208 | 2.17× | 0.247 | 2.57× | ok |
| bg/mandelbrot/5 | 0.044 | 0.099 | 2.25× | 0.123 | 2.80× | ok |
| bg/mandelbrot/7 | 0.045 | 0.124 | 2.76× | 0.125 | 2.78× | ok |
| bg/mandelbrot/9 | 0.040 | 0.102 | 2.55× | 0.115 | 2.88× | ok |
| bg/nbody/1 | 0.029 | 0.101 | 3.48× | 0.084 | 2.90× | ok |
| bg/nbody/2 | 0.026 | 0.061 | 2.35× | 0.072 | 2.77× | ok |
| bg/nbody/3 | 0.026 | 0.064 | 2.46× | 0.074 | 2.85× | ok |
| bg/nbody/6 | 0.026 | 0.094 | 3.62× | 0.089 | 3.42× | ok |
| bg/pidigits/4 | 0.109 | 0.284 | 2.61× | 0.383 | 3.51× | ok |
| bg/pidigits/5 | 0.071 | 0.162 | 2.28× | 0.254 | 3.58× | ok |
| bg/revcomp/1 | 0.074 | 0.213 | 2.88× | 0.217 | 2.93× | ok |
| bg/revcomp/5 | 0.071 | 0.212 | 2.99× | 0.203 | 2.86× | ok |
| bg/spectralnorm/1 | 0.114 | 0.258 | 2.26× | 0.366 | 3.21× | ok |
| box2d | 1.322 | 4.026 | 3.05× | 4.634 | 3.51× | ok |
| fmt | 0.468 | 2.231 | 4.77× | 2.012 | 4.30× | ok |
| hexxagon | 0.244 | 0.631 | 2.59× | 0.802 | 3.29× | ok |
| lambda | 0.050 | 0.292 | 5.84× | 0.228 | 4.56× | ok |
| minisat | 0.057 | 0.290 | 5.09× | 0.203 | 3.56× | ok |
| nlohmann-json | 0.418 | 1.877 | 4.49× | 1.688 | 4.04× | ok |
| pugixml | 0.272 | 1.256 | 4.62× | 0.944 | 3.47× | ok |
| pugixml-tests | 2.996 | 14.981 | 5.00× | 10.917 | 3.64× | ok |
| rapidjson | 0.114 | 0.467 | 4.10× | 0.377 | 3.31× | ok |
| re2 | 2.629 | 10.191 | 3.88× | 6.459 | 2.46× | ok |
| re2-test-re2 | 4.400 | 14.916 | 3.39× | 14.634 | 3.33× | ok |
| re2-test-search | 4.423 | 13.813 | 3.12× | 13.691 | 3.10× | ok |
| tramp3d-v4 | 0.965 | 7.062 | 7.32× | 2.545 | 2.64× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.125 | 0.813 | 6.50× | 0.470 | 3.76× | ok |
| Adobe-C++/loop_unroll | 0.435 | 5.227 | 12.02× | 4.007 | 9.21× | ok |
| Adobe-C++/simple_types_constant_folding | 0.239 | 2.796 | 11.70× | 2.260 | 9.46× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.217 | 2.163 | 9.97× | 1.810 | 8.34× | ok |
| Adobe-C++/stepanov_abstraction | 0.092 | 0.961 | 10.45× | 0.492 | 5.35× | ok |
| Adobe-C++/stepanov_vector | 0.125 | 1.400 | 11.20× | 0.643 | 5.14× | ok |
| Bullet | 6.001 | 35.056 | 5.84× | 25.327 | 4.22× | ok |
| CLAMR | 3.993 | 22.497 | 5.63× | 16.845 | 4.22× | ok |
| CoyoteBench/almabench | 0.031 | 0.171 | 5.52× | 0.126 | 4.06× | ok |
| CoyoteBench/fftbench | 0.110 | 0.377 | 3.43× | 0.390 | 3.55× | ok |
| CoyoteBench/huffbench | 0.034 | 0.198 | 5.82× | 0.124 | 3.65× | ok |
| CoyoteBench/lpbench | 0.032 | 0.158 | 4.94× | 0.168 | 5.25× | ok |
| DOE/HACCKernels | 0.108 | 0.363 | 3.36× | 0.361 | 3.34× | ok |
| DOE/HPCCG | 0.733 | 2.111 | 2.88× | 2.564 | 3.50× | ok |
| DOE/PENNANT | 1.707 | 6.373 | 3.73× | 5.575 | 3.27× | ok |
| DOE/miniFE | 0.790 | 3.827 | 4.84× | 3.014 | 3.82× | ok |
| Misc-C++-EH/spirit | 0.607 | 3.796 | 6.25× | 3.335 | 5.49× | ok |
| Misc-C++-Large/ray | 0.102 | 0.424 | 4.16× | 0.323 | 3.17× | ok |
| Misc-C++-Large/sphereflake | 0.104 | 0.678 | 6.52× | 0.318 | 3.06× | ok |
| Misc-C++/bigfib | 0.128 | 0.484 | 3.78× | 0.447 | 3.49× | ok |
| Misc-C++/oopack_v1p8 | 0.033 | 0.166 | 5.03× | 0.177 | 5.36× | ok |
| Misc-C++/stepanov_container | 0.192 | 0.761 | 3.96× | 0.917 | 4.78× | ok |
| Misc-C++/stepanov_v1p2 | 0.039 | 0.195 | 5.00× | 0.175 | 4.49× | ok |
| PAQ8p | 0.292 | 3.888 | 13.32× | 1.493 | 5.11× | ok |
| Prolangs-C++/life | 0.009 | 0.093 | — | 0.060 | — | ok |
| Prolangs-C++/ocean | 0.021 | 0.204 | 9.71× | 0.114 | 5.43× | ok |
| Prolangs-C++/primes | 0.007 | 0.035 | — | 0.034 | — | ok |
| Shootout-C++-EH/except | 0.064 | 0.171 | 2.67× | 0.206 | 3.22× | ok |
| Shootout-C++/ackermann | 0.072 | 0.199 | 2.76× | 0.233 | 3.24× | ok |
| Shootout-C++/ary3 | 0.075 | 0.214 | 2.85× | 0.307 | 4.09× | ok |
| Shootout-C++/fibo | 0.071 | 0.199 | 2.80× | 0.244 | 3.44× | ok |
| Shootout-C++/hash | 0.109 | 0.402 | 3.69× | 0.371 | 3.40× | ok |
| Shootout-C++/hash2 | 0.131 | 0.448 | 3.42× | 0.444 | 3.39× | ok |
| Shootout-C++/heapsort | 0.078 | 0.202 | 2.59× | 0.257 | 3.29× | ok |
| Shootout-C++/lists | 0.075 | 0.223 | 2.97× | 0.252 | 3.36× | ok |
| Shootout-C++/lists1 | 0.096 | 0.287 | 2.99× | 0.269 | 2.80× | ok |
| Shootout-C++/matrix | 0.068 | 0.198 | 2.91× | 0.283 | 4.16× | ok |
| Shootout-C++/methcall | 0.080 | 0.186 | 2.33× | 0.208 | 2.60× | ok |
| Shootout-C++/moments | 0.101 | 0.297 | 2.94× | 0.313 | 3.10× | ok |
| Shootout-C++/random | 0.082 | 0.193 | 2.35× | 0.241 | 2.94× | ok |
| Shootout-C++/sieve | 0.086 | 0.239 | 2.78× | 0.285 | 3.31× | ok |
| SmallPT | 0.041 | 0.309 | 7.54× | 0.155 | 3.78× | ok |
| Stanford/Bubblesort | 0.010 | 0.049 | 4.90× | 0.044 | 4.40× | ok |
| Stanford/FloatMM | 0.012 | 0.058 | 4.83× | 0.064 | 5.33× | ok |
| Stanford/Puzzle | 0.019 | 0.115 | 6.05× | 0.108 | 5.68× | ok |
| Stanford/Treesort | 0.013 | 0.078 | 6.00× | 0.050 | 3.85× | ok |
| bg/binarytrees/2 | 0.067 | 0.393 | 5.87× | 0.209 | 3.12× | ok |
| bg/fannkuchredux/3 | 0.035 | 0.111 | 3.17× | 0.109 | 3.11× | ok |
| bg/fasta/1 | 0.054 | 0.153 | 2.83× | 0.177 | 3.28× | ok |
| bg/fasta/2 | 0.054 | 0.151 | 2.80× | 0.173 | 3.20× | ok |
| bg/fasta/3 | 0.078 | 0.219 | 2.81× | 0.256 | 3.28× | ok |
| bg/fasta/4 | 0.074 | 0.172 | 2.32× | 0.258 | 3.49× | ok |
| bg/fasta/6 | 0.144 | 0.437 | 3.03× | 0.518 | 3.60× | ok |
| bg/mandelbrot/0 | 0.170 | 0.608 | 3.58× | 0.591 | 3.48× | ok |
| bg/mandelbrot/2 | 0.092 | 0.257 | 2.79× | 0.307 | 3.34× | ok |
| bg/mandelbrot/3 | 0.101 | 0.247 | 2.45× | 0.272 | 2.69× | ok |
| bg/mandelbrot/5 | 0.050 | 0.136 | 2.72× | 0.152 | 3.04× | ok |
| bg/mandelbrot/7 | 0.056 | 0.190 | 3.39× | 0.178 | 3.18× | ok |
| bg/mandelbrot/9 | 0.050 | 0.165 | 3.30× | 0.158 | 3.16× | ok |
| bg/nbody/1 | 0.042 | 0.160 | 3.81× | 0.160 | 3.81× | ok |
| bg/nbody/2 | 0.029 | 0.120 | 4.14× | 0.111 | 3.83× | ok |
| bg/nbody/3 | 0.031 | 0.111 | 3.58× | 0.106 | 3.42× | ok |
| bg/nbody/6 | 0.040 | 0.156 | 3.90× | 0.161 | 4.03× | ok |
| bg/pidigits/4 | 0.115 | 0.310 | 2.70× | 0.369 | 3.21× | ok |
| bg/pidigits/5 | 0.074 | 0.196 | 2.65× | 0.228 | 3.08× | ok |
| bg/revcomp/1 | 0.080 | 0.232 | 2.90× | 0.336 | 4.20× | ok |
| bg/revcomp/5 | 0.080 | 0.249 | 3.11× | 0.285 | 3.56× | ok |
| bg/spectralnorm/1 | 0.122 | 0.348 | 2.85× | 0.433 | 3.55× | ok |
| box2d | 1.675 | 6.901 | 4.12× | 5.787 | 3.45× | ok |
| fmt | 0.977 | 5.380 | 5.51× | 3.708 | 3.80× | ok |
| hexxagon | 0.287 | 1.037 | 3.61× | 1.084 | 3.78× | ok |
| lambda | 0.121 | 1.141 | 9.43× | 0.530 | 4.38× | ok |
| minisat | 0.147 | 1.007 | 6.85× | 0.611 | 4.16× | ok |
| nlohmann-json | 0.797 | 3.523 | 4.42× | 3.015 | 3.78× | ok |
| pugixml | 0.701 | 5.239 | 7.47× | 3.749 | 5.35× | ok |
| pugixml-tests | 4.666 | 33.994 | 7.29× | 24.390 | 5.23× | ok |
| rapidjson | 0.230 | 1.207 | 5.25× | 0.721 | 3.13× | ok |
| re2 | 2.839 | 17.422 | 6.14× | 9.784 | 3.45× | ok |
| re2-test-re2 | 5.600 | 25.940 | 4.63× | 22.613 | 4.04× | ok |
| re2-test-search | 5.556 | 23.137 | 4.16× | 21.657 | 3.90× | ok |
| tramp3d-v4 | 2.552 | 21.485 | 8.42× | 13.677 | 5.36× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.058 | 0.131 | 2.26× | 0.181 | 3.12× | ok |
| Adobe-C++/loop_unroll | 0.033 | 0.097 | 2.94× | 0.099 | 3.00× | ok |
| Adobe-C++/simple_types_constant_folding | 0.035 | 0.100 | 2.86× | 0.105 | 3.00× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.033 | 0.091 | 2.76× | 0.119 | 3.61× | ok |
| Adobe-C++/stepanov_abstraction | 0.032 | 0.073 | 2.28× | 0.088 | 2.75× | ok |
| Adobe-C++/stepanov_vector | 0.063 | 0.120 | 1.90× | 0.190 | 3.02× | ok |
| Bullet | 3.727 | 9.867 | 2.65× | 12.845 | 3.45× | ok |
| CLAMR | 2.070 | 4.501 | 2.17× | 6.095 | 2.94× | ok |
| CoyoteBench/almabench | 0.026 | 0.063 | 2.42× | 0.073 | 2.81× | ok |
| CoyoteBench/fftbench | 0.093 | 0.211 | 2.27× | 0.268 | 2.88× | ok |
| CoyoteBench/huffbench | 0.026 | 0.061 | 2.35× | 0.071 | 2.73× | ok |
| CoyoteBench/lpbench | 0.024 | 0.051 | 2.12× | 0.066 | 2.75× | ok |
| DOE/HACCKernels | 0.099 | 0.205 | 2.07× | 0.275 | 2.78× | ok |
| DOE/HPCCG | 0.670 | 1.279 | 1.91× | 2.076 | 3.10× | ok |
| DOE/PENNANT | 1.274 | 2.795 | 2.19× | 3.509 | 2.75× | ok |
| DOE/miniFE | 0.506 | 1.205 | 2.38× | 1.532 | 3.03× | ok |
| Misc-C++-EH/spirit | 0.301 | 0.961 | 3.19× | 1.009 | 3.35× | ok |
| Misc-C++-Large/ray | 0.088 | 0.189 | 2.15× | 0.250 | 2.84× | ok |
| Misc-C++-Large/sphereflake | 0.077 | 0.174 | 2.26× | 0.255 | 3.31× | ok |
| Misc-C++/bigfib | 0.094 | 0.219 | 2.33× | 0.283 | 3.01× | ok |
| Misc-C++/oopack_v1p8 | 0.026 | 0.057 | 2.19× | 0.087 | 3.35× | ok |
| Misc-C++/stepanov_container | 0.125 | 0.326 | 2.61× | 0.364 | 2.91× | ok |
| Misc-C++/stepanov_v1p2 | 0.026 | 0.062 | 2.38× | 0.074 | 2.85× | ok |
| PAQ8p | 0.042 | 0.118 | 2.81× | 0.114 | 2.71× | ok |
| Prolangs-C++/life | 0.003 | 0.008 | — | 0.018 | — | ok |
| Prolangs-C++/ocean | 0.009 | 0.022 | — | 0.032 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.014 | — | 0.024 | — | ok |
| Shootout-C++-EH/except | 0.062 | 0.144 | 2.32× | 0.184 | 2.97× | ok |
| Shootout-C++/ackermann | 0.068 | 0.158 | 2.32× | 0.216 | 3.18× | ok |
| Shootout-C++/ary3 | 0.068 | 0.161 | 2.37× | 0.204 | 3.00× | ok |
| Shootout-C++/fibo | 0.068 | 0.161 | 2.37× | 0.215 | 3.16× | ok |
| Shootout-C++/hash | 0.086 | 0.225 | 2.62× | 0.250 | 2.91× | ok |
| Shootout-C++/hash2 | 0.100 | 0.223 | 2.23× | 0.299 | 2.99× | ok |
| Shootout-C++/heapsort | 0.076 | 0.167 | 2.20× | 0.255 | 3.36× | ok |
| Shootout-C++/lists | 0.080 | 0.168 | 2.10× | 0.194 | 2.43× | ok |
| Shootout-C++/lists1 | 0.092 | 0.204 | 2.22× | 0.210 | 2.28× | ok |
| Shootout-C++/matrix | 0.062 | 0.147 | 2.37× | 0.182 | 2.94× | ok |
| Shootout-C++/methcall | 0.067 | 0.139 | 2.07× | 0.183 | 2.73× | ok |
| Shootout-C++/moments | 0.084 | 0.187 | 2.23× | 0.227 | 2.70× | ok |
| Shootout-C++/random | 0.078 | 0.172 | 2.21× | 0.220 | 2.82× | ok |
| Shootout-C++/sieve | 0.076 | 0.181 | 2.38× | 0.235 | 3.09× | ok |
| SmallPT | 0.025 | 0.050 | 2.00× | 0.072 | 2.88× | ok |
| Stanford/Bubblesort | 0.008 | 0.021 | — | 0.028 | — | ok |
| Stanford/FloatMM | 0.008 | 0.020 | — | 0.027 | — | ok |
| Stanford/Puzzle | 0.009 | 0.022 | — | 0.029 | — | ok |
| Stanford/Treesort | 0.009 | 0.021 | — | 0.028 | — | ok |
| bg/binarytrees/2 | 0.062 | 0.143 | 2.31× | 0.186 | 3.00× | ok |
| bg/fannkuchredux/3 | 0.030 | 0.057 | 1.90× | 0.076 | 2.53× | ok |
| bg/fasta/1 | 0.045 | 0.093 | 2.07× | 0.115 | 2.56× | ok |
| bg/fasta/2 | 0.047 | 0.093 | 1.98× | 0.109 | 2.32× | ok |
| bg/fasta/3 | 0.075 | 0.166 | 2.21× | 0.215 | 2.87× | ok |
| bg/fasta/4 | 0.068 | 0.135 | 1.99× | 0.168 | 2.47× | ok |
| bg/fasta/6 | 0.119 | 0.306 | 2.57× | 0.350 | 2.94× | ok |
| bg/mandelbrot/0 | 0.128 | 0.306 | 2.39× | 0.367 | 2.87× | ok |
| bg/mandelbrot/2 | 0.081 | 0.197 | 2.43× | 0.252 | 3.11× | ok |
| bg/mandelbrot/3 | 0.096 | 0.206 | 2.15× | 0.246 | 2.56× | ok |
| bg/mandelbrot/5 | 0.042 | 0.084 | 2.00× | 0.112 | 2.67× | ok |
| bg/mandelbrot/7 | 0.042 | 0.090 | 2.14× | 0.112 | 2.67× | ok |
| bg/mandelbrot/9 | 0.038 | 0.073 | 1.92× | 0.102 | 2.68× | ok |
| bg/nbody/1 | 0.029 | 0.060 | 2.07× | 0.072 | 2.48× | ok |
| bg/nbody/2 | 0.027 | 0.051 | 1.89× | 0.069 | 2.56× | ok |
| bg/nbody/3 | 0.026 | 0.054 | 2.08× | 0.066 | 2.54× | ok |
| bg/nbody/6 | 0.025 | 0.056 | 2.24× | 0.074 | 2.96× | ok |
| bg/pidigits/4 | 0.110 | 0.255 | 2.32× | 0.328 | 2.98× | ok |
| bg/pidigits/5 | 0.071 | 0.163 | 2.30× | 0.197 | 2.77× | ok |
| bg/revcomp/1 | 0.071 | 0.164 | 2.31× | 0.201 | 2.83× | ok |
| bg/revcomp/5 | 0.067 | 0.175 | 2.61× | 0.185 | 2.76× | ok |
| bg/spectralnorm/1 | 0.107 | 0.213 | 1.99× | 0.346 | 3.23× | ok |
| box2d | 1.275 | 2.662 | 2.09× | 3.976 | 3.12× | ok |
| fmt | 0.414 | 0.969 | 2.34× | 1.558 | 3.76× | ok |
| hexxagon | 0.239 | 0.568 | 2.38× | 0.760 | 3.18× | ok |
| lambda | 0.040 | 0.121 | 3.02× | 0.165 | 4.12× | ok |
| minisat | 0.049 | 0.127 | 2.59× | 0.148 | 3.02× | ok |
| nlohmann-json | 0.324 | 0.856 | 2.64× | 1.348 | 4.16× | ok |
| pugixml | 0.213 | 0.466 | 2.19× | 0.692 | 3.25× | ok |
| pugixml-tests | 2.604 | 7.071 | 2.72× | 9.304 | 3.57× | ok |
| rapidjson | 0.094 | 0.242 | 2.57× | 0.297 | 3.16× | ok |
| re2 | 2.744 | 6.454 | 2.35× | 5.532 | 2.02× | ok |
| re2-test-re2 | 3.884 | 9.697 | 2.50× | 12.377 | 3.19× | ok |
| re2-test-search | 3.989 | 8.662 | 2.17× | 12.817 | 3.21× | ok |
| tramp3d-v4 | 0.424 | 2.324 | 5.48× | 1.470 | 3.47× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
