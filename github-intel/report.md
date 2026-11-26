# Public benchmarks: Intel (GitHub)

Measured compiler: [`61c93cf80`](https://github.com/vishvananda/cppgm/commit/61c93cf80bbefb800c9a2a397bacf09b138c2ed3) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/45754596224) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: Intel(R) Xeon(R) 6975P-C.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.29× | 74 | 2.91× | 74 |
| Compile CPU, `-O0` | 3.20× | 75 | 3.12× | 75 |
| Compile CPU, `-O3` | 4.31× | 79 | 3.85× | 79 |
| Compile peak RSS, `-O0` | 1.42× | 81 | 2.15× | 81 |
| Compile peak RSS, `-O3` | 1.69× | 81 | 2.26× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.11× | 81 | 1.07× | 81 |
| Run CPU, `-O3` | 1.01× | 80 | 1.03× | 80 |
| Run instructions, `-O3` | 1.05× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.884 to 1.033; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.062 | 0.255 | 4.11× | 0.173 | 2.79× | ok |
| Adobe-C++/loop_unroll | 0.054 | 0.556 | 10.30× | 0.170 | 3.15× | ok |
| Adobe-C++/simple_types_constant_folding | 0.057 | 0.656 | 11.51× | 0.213 | 3.74× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.048 | 0.476 | 9.92× | 0.187 | 3.90× | ok |
| Adobe-C++/stepanov_abstraction | 0.037 | 0.171 | 4.62× | 0.109 | 2.95× | ok |
| Adobe-C++/stepanov_vector | 0.062 | 0.270 | 4.35× | 0.230 | 3.71× | ok |
| Bullet | 4.171 | 17.012 | 4.08× | 15.644 | 3.75× | ok |
| CLAMR | 2.550 | 8.746 | 3.43× | 7.082 | 2.78× | ok |
| CoyoteBench/almabench | 0.028 | 0.074 | 2.64× | 0.079 | 2.82× | ok |
| CoyoteBench/fftbench | 0.094 | 0.244 | 2.60× | 0.287 | 3.05× | ok |
| CoyoteBench/huffbench | 0.027 | 0.072 | 2.67× | 0.073 | 2.70× | ok |
| CoyoteBench/lpbench | 0.025 | 0.069 | 2.76× | 0.071 | 2.84× | ok |
| DOE/HACCKernels | 0.097 | 0.238 | 2.45× | 0.302 | 3.11× | ok |
| DOE/HPCCG | 0.605 | 1.527 | 2.52× | 1.887 | 3.12× | ok |
| DOE/PENNANT | 1.448 | 4.275 | 2.95× | 4.054 | 2.80× | ok |
| DOE/miniFE | 0.569 | 1.841 | 3.24× | 1.841 | 3.24× | ok |
| Misc-C++-EH/spirit | 0.456 | 2.769 | 6.07× | 1.889 | 4.14× | ok |
| Misc-C++-Large/ray | 0.096 | 0.282 | 2.94× | 0.349 | 3.64× | ok |
| Misc-C++-Large/sphereflake | 0.086 | 0.202 | 2.35× | 0.262 | 3.05× | ok |
| Misc-C++/bigfib | 0.115 | 0.393 | 3.42× | 0.425 | 3.70× | ok |
| Misc-C++/oopack_v1p8 | 0.031 | 0.092 | 2.97× | 0.096 | 3.10× | ok |
| Misc-C++/stepanov_container | 0.167 | 0.586 | 3.51× | 0.545 | 3.26× | ok |
| Misc-C++/stepanov_v1p2 | 0.028 | 0.118 | 4.21× | 0.087 | 3.11× | ok |
| PAQ8p | 0.067 | 0.456 | 6.81× | 0.242 | 3.61× | ok |
| Prolangs-C++/life | 0.004 | 0.029 | — | 0.025 | — | ok |
| Prolangs-C++/ocean | 0.010 | 0.058 | 5.80× | 0.041 | 4.10× | ok |
| Prolangs-C++/primes | 0.006 | 0.023 | — | 0.027 | — | ok |
| Shootout-C++-EH/except | 0.074 | 0.148 | 2.00× | 0.233 | 3.15× | ok |
| Shootout-C++/ackermann | 0.063 | 0.143 | 2.27× | 0.201 | 3.19× | ok |
| Shootout-C++/ary3 | 0.082 | 0.205 | 2.50× | 0.250 | 3.05× | ok |
| Shootout-C++/fibo | 0.064 | 0.146 | 2.28× | 0.200 | 3.12× | ok |
| Shootout-C++/hash | 0.092 | 0.304 | 3.30× | 0.282 | 3.07× | ok |
| Shootout-C++/hash2 | 0.105 | 0.308 | 2.93× | 0.356 | 3.39× | ok |
| Shootout-C++/heapsort | 0.076 | 0.169 | 2.22× | 0.223 | 2.93× | ok |
| Shootout-C++/lists | 0.074 | 0.204 | 2.76× | 0.234 | 3.16× | ok |
| Shootout-C++/lists1 | 0.083 | 0.214 | 2.58× | 0.250 | 3.01× | ok |
| Shootout-C++/matrix | 0.061 | 0.141 | 2.31× | 0.193 | 3.16× | ok |
| Shootout-C++/methcall | 0.066 | 0.149 | 2.26× | 0.193 | 2.92× | ok |
| Shootout-C++/moments | 0.089 | 0.238 | 2.67× | 0.251 | 2.82× | ok |
| Shootout-C++/random | 0.077 | 0.167 | 2.17× | 0.232 | 3.01× | ok |
| Shootout-C++/sieve | 0.083 | 0.215 | 2.59× | 0.251 | 3.02× | ok |
| SmallPT | 0.028 | 0.086 | 3.07× | 0.082 | 2.93× | ok |
| Stanford/Bubblesort | 0.008 | 0.025 | — | 0.029 | — | ok |
| Stanford/FloatMM | 0.008 | 0.026 | — | 0.029 | — | ok |
| Stanford/Puzzle | 0.009 | 0.032 | — | 0.036 | — | ok |
| Stanford/Treesort | 0.009 | 0.027 | — | 0.031 | — | ok |
| bg/binarytrees/2 | 0.064 | 0.150 | 2.34× | 0.197 | 3.08× | ok |
| bg/fannkuchredux/3 | 0.030 | 0.068 | 2.27× | 0.078 | 2.60× | ok |
| bg/fasta/1 | 0.047 | 0.116 | 2.47× | 0.136 | 2.89× | ok |
| bg/fasta/2 | 0.051 | 0.124 | 2.43× | 0.134 | 2.63× | ok |
| bg/fasta/3 | 0.072 | 0.169 | 2.35× | 0.219 | 3.04× | ok |
| bg/fasta/4 | 0.067 | 0.150 | 2.24× | 0.173 | 2.58× | ok |
| bg/fasta/6 | 0.147 | 0.380 | 2.59× | 0.432 | 2.94× | ok |
| bg/mandelbrot/0 | 0.143 | 0.422 | 2.95× | 0.410 | 2.87× | ok |
| bg/mandelbrot/2 | 0.087 | 0.199 | 2.29× | 0.251 | 2.89× | ok |
| bg/mandelbrot/3 | 0.090 | 0.217 | 2.41× | 0.265 | 2.94× | ok |
| bg/mandelbrot/5 | 0.048 | 0.111 | 2.31× | 0.116 | 2.42× | ok |
| bg/mandelbrot/7 | 0.046 | 0.116 | 2.52× | 0.134 | 2.91× | ok |
| bg/mandelbrot/9 | 0.042 | 0.112 | 2.67× | 0.121 | 2.88× | ok |
| bg/nbody/1 | 0.030 | 0.099 | 3.30× | 0.086 | 2.87× | ok |
| bg/nbody/2 | 0.025 | 0.066 | 2.64× | 0.072 | 2.88× | ok |
| bg/nbody/3 | 0.027 | 0.064 | 2.37× | 0.082 | 3.04× | ok |
| bg/nbody/6 | 0.025 | 0.094 | 3.76× | 0.087 | 3.48× | ok |
| bg/pidigits/4 | 0.116 | 0.296 | 2.55× | 0.375 | 3.23× | ok |
| bg/pidigits/5 | 0.069 | 0.169 | 2.45× | 0.216 | 3.13× | ok |
| bg/revcomp/1 | 0.091 | 0.234 | 2.57× | 0.226 | 2.48× | ok |
| bg/revcomp/5 | 0.077 | 0.194 | 2.52× | 0.210 | 2.73× | ok |
| bg/spectralnorm/1 | 0.108 | 0.240 | 2.22× | 0.361 | 3.34× | ok |
| box2d | 1.414 | 4.290 | 3.03× | 3.280 | 2.32× | ok |
| fmt | 0.469 | 2.465 | 5.26× | 1.876 | 4.00× | ok |
| hexxagon | 0.250 | 0.544 | 2.18× | 0.816 | 3.26× | ok |
| lambda | 0.051 | 0.302 | 5.92× | 0.228 | 4.47× | ok |
| minisat | 0.061 | 0.279 | 4.57× | 0.232 | 3.80× | ok |
| nlohmann-json | 0.432 | 1.952 | 4.52× | 1.776 | 4.11× | ok |
| pugixml | 0.284 | 1.258 | 4.43× | 0.922 | 3.25× | ok |
| pugixml-tests | 3.164 | 14.990 | 4.74× | 11.135 | 3.52× | ok |
| rapidjson | 0.117 | 0.474 | 4.05× | 0.390 | 3.33× | ok |
| re2 | 2.444 | 10.641 | 4.35× | 6.484 | 2.65× | ok |
| re2-test-re2 | 4.477 | 14.466 | 3.23× | 15.823 | 3.53× | ok |
| re2-test-search | 4.662 | 13.998 | 3.00× | 14.179 | 3.04× | ok |
| tramp3d-v4 | 0.907 | 6.895 | 7.60× | 2.561 | 2.82× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.120 | 0.920 | 7.67× | 0.564 | 4.70× | ok |
| Adobe-C++/loop_unroll | 0.503 | 5.407 | 10.75× | 4.115 | 8.18× | ok |
| Adobe-C++/simple_types_constant_folding | 0.247 | 3.145 | 12.73× | 2.215 | 8.97× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.217 | 2.298 | 10.59× | 1.842 | 8.49× | ok |
| Adobe-C++/stepanov_abstraction | 0.091 | 0.984 | 10.81× | 0.490 | 5.38× | ok |
| Adobe-C++/stepanov_vector | 0.126 | 1.188 | 9.43× | 0.515 | 4.09× | ok |
| Bullet | 6.167 | 36.625 | 5.94× | 28.236 | 4.58× | ok |
| CLAMR | 4.508 | 22.816 | 5.06× | 17.208 | 3.82× | ok |
| CoyoteBench/almabench | 0.032 | 0.169 | 5.28× | 0.120 | 3.75× | ok |
| CoyoteBench/fftbench | 0.116 | 0.395 | 3.41× | 0.417 | 3.59× | ok |
| CoyoteBench/huffbench | 0.039 | 0.203 | 5.21× | 0.126 | 3.23× | ok |
| CoyoteBench/lpbench | 0.033 | 0.159 | 4.82× | 0.172 | 5.21× | ok |
| DOE/HACCKernels | 0.111 | 0.340 | 3.06× | 0.366 | 3.30× | ok |
| DOE/HPCCG | 0.672 | 2.321 | 3.45× | 2.463 | 3.67× | ok |
| DOE/PENNANT | 1.736 | 6.673 | 3.84× | 5.512 | 3.18× | ok |
| DOE/miniFE | 0.809 | 3.854 | 4.76× | 3.034 | 3.75× | ok |
| Misc-C++-EH/spirit | 0.615 | 3.824 | 6.22× | 2.942 | 4.78× | ok |
| Misc-C++-Large/ray | 0.103 | 0.438 | 4.25× | 0.399 | 3.87× | ok |
| Misc-C++-Large/sphereflake | 0.102 | 0.695 | 6.81× | 0.372 | 3.65× | ok |
| Misc-C++/bigfib | 0.139 | 0.572 | 4.12× | 0.562 | 4.04× | ok |
| Misc-C++/oopack_v1p8 | 0.040 | 0.184 | 4.60× | 0.175 | 4.38× | ok |
| Misc-C++/stepanov_container | 0.198 | 0.933 | 4.71× | 0.925 | 4.67× | ok |
| Misc-C++/stepanov_v1p2 | 0.038 | 0.213 | 5.61× | 0.213 | 5.61× | ok |
| PAQ8p | 0.322 | 3.969 | 12.33× | 1.735 | 5.39× | ok |
| Prolangs-C++/life | 0.009 | 0.094 | — | 0.062 | — | ok |
| Prolangs-C++/ocean | 0.019 | 0.190 | 10.00× | 0.106 | 5.58× | ok |
| Prolangs-C++/primes | 0.008 | 0.036 | — | 0.037 | — | ok |
| Shootout-C++-EH/except | 0.076 | 0.176 | 2.32× | 0.248 | 3.26× | ok |
| Shootout-C++/ackermann | 0.067 | 0.182 | 2.72× | 0.210 | 3.13× | ok |
| Shootout-C++/ary3 | 0.077 | 0.247 | 3.21× | 0.311 | 4.04× | ok |
| Shootout-C++/fibo | 0.081 | 0.186 | 2.30× | 0.251 | 3.10× | ok |
| Shootout-C++/hash | 0.109 | 0.344 | 3.16× | 0.372 | 3.41× | ok |
| Shootout-C++/hash2 | 0.134 | 0.450 | 3.36× | 0.472 | 3.52× | ok |
| Shootout-C++/heapsort | 0.080 | 0.205 | 2.56× | 0.240 | 3.00× | ok |
| Shootout-C++/lists | 0.085 | 0.264 | 3.11× | 0.254 | 2.99× | ok |
| Shootout-C++/lists1 | 0.093 | 0.256 | 2.75× | 0.291 | 3.13× | ok |
| Shootout-C++/matrix | 0.071 | 0.194 | 2.73× | 0.276 | 3.89× | ok |
| Shootout-C++/methcall | 0.065 | 0.187 | 2.88× | 0.209 | 3.22× | ok |
| Shootout-C++/moments | 0.100 | 0.296 | 2.96× | 0.309 | 3.09× | ok |
| Shootout-C++/random | 0.082 | 0.194 | 2.37× | 0.252 | 3.07× | ok |
| Shootout-C++/sieve | 0.089 | 0.231 | 2.60× | 0.279 | 3.13× | ok |
| SmallPT | 0.039 | 0.289 | 7.41× | 0.152 | 3.90× | ok |
| Stanford/Bubblesort | 0.011 | 0.050 | 4.55× | 0.047 | 4.27× | ok |
| Stanford/FloatMM | 0.012 | 0.058 | 4.83× | 0.065 | 5.42× | ok |
| Stanford/Puzzle | 0.021 | 0.115 | 5.48× | 0.110 | 5.24× | ok |
| Stanford/Treesort | 0.014 | 0.079 | 5.64× | 0.052 | 3.71× | ok |
| bg/binarytrees/2 | 0.069 | 0.395 | 5.72× | 0.225 | 3.26× | ok |
| bg/fannkuchredux/3 | 0.035 | 0.113 | 3.23× | 0.108 | 3.09× | ok |
| bg/fasta/1 | 0.054 | 0.152 | 2.81× | 0.174 | 3.22× | ok |
| bg/fasta/2 | 0.060 | 0.164 | 2.73× | 0.157 | 2.62× | ok |
| bg/fasta/3 | 0.079 | 0.209 | 2.65× | 0.263 | 3.33× | ok |
| bg/fasta/4 | 0.074 | 0.182 | 2.46× | 0.208 | 2.81× | ok |
| bg/fasta/6 | 0.147 | 0.428 | 2.91× | 0.496 | 3.37× | ok |
| bg/mandelbrot/0 | 0.174 | 0.593 | 3.41× | 0.604 | 3.47× | ok |
| bg/mandelbrot/2 | 0.087 | 0.277 | 3.18× | 0.313 | 3.60× | ok |
| bg/mandelbrot/3 | 0.091 | 0.226 | 2.48× | 0.312 | 3.43× | ok |
| bg/mandelbrot/5 | 0.049 | 0.144 | 2.94× | 0.149 | 3.04× | ok |
| bg/mandelbrot/7 | 0.057 | 0.180 | 3.16× | 0.163 | 2.86× | ok |
| bg/mandelbrot/9 | 0.052 | 0.181 | 3.48× | 0.162 | 3.12× | ok |
| bg/nbody/1 | 0.041 | 0.157 | 3.83× | 0.160 | 3.90× | ok |
| bg/nbody/2 | 0.032 | 0.114 | 3.56× | 0.122 | 3.81× | ok |
| bg/nbody/3 | 0.033 | 0.114 | 3.45× | 0.110 | 3.33× | ok |
| bg/nbody/6 | 0.037 | 0.163 | 4.41× | 0.162 | 4.38× | ok |
| bg/pidigits/4 | 0.110 | 0.314 | 2.85× | 0.439 | 3.99× | ok |
| bg/pidigits/5 | 0.078 | 0.220 | 2.82× | 0.239 | 3.06× | ok |
| bg/revcomp/1 | 0.089 | 0.249 | 2.80× | 0.295 | 3.31× | ok |
| bg/revcomp/5 | 0.084 | 0.225 | 2.68× | 0.244 | 2.90× | ok |
| bg/spectralnorm/1 | 0.124 | 0.326 | 2.63× | 0.409 | 3.30× | ok |
| box2d | 1.680 | 6.802 | 4.05× | 4.779 | 2.84× | ok |
| fmt | 0.923 | 5.432 | 5.89× | 3.697 | 4.01× | ok |
| hexxagon | 0.292 | 1.045 | 3.58× | 1.061 | 3.63× | ok |
| lambda | 0.122 | 1.135 | 9.30× | 0.574 | 4.70× | ok |
| minisat | 0.144 | 1.001 | 6.95× | 0.620 | 4.31× | ok |
| nlohmann-json | 0.803 | 3.521 | 4.38× | 3.055 | 3.80× | ok |
| pugixml | 0.714 | 5.265 | 7.37× | 3.754 | 5.26× | ok |
| pugixml-tests | 4.845 | 34.268 | 7.07× | 24.798 | 5.12× | ok |
| rapidjson | 0.237 | 1.215 | 5.13× | 0.675 | 2.85× | ok |
| re2 | 2.876 | 18.569 | 6.46× | 9.608 | 3.34× | ok |
| re2-test-re2 | 5.847 | 26.103 | 4.46× | 22.831 | 3.90× | ok |
| re2-test-search | 5.888 | 23.128 | 3.93× | 21.971 | 3.73× | ok |
| tramp3d-v4 | 2.572 | 23.661 | 9.20× | 13.892 | 5.40× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.065 | 0.136 | 2.09× | 0.148 | 2.28× | ok |
| Adobe-C++/loop_unroll | 0.038 | 0.100 | 2.63× | 0.101 | 2.66× | ok |
| Adobe-C++/simple_types_constant_folding | 0.038 | 0.103 | 2.71× | 0.105 | 2.76× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.034 | 0.095 | 2.79× | 0.101 | 2.97× | ok |
| Adobe-C++/stepanov_abstraction | 0.031 | 0.066 | 2.13× | 0.088 | 2.84× | ok |
| Adobe-C++/stepanov_vector | 0.055 | 0.119 | 2.16× | 0.194 | 3.53× | ok |
| Bullet | 3.870 | 9.559 | 2.47× | 12.493 | 3.23× | ok |
| CLAMR | 2.075 | 4.484 | 2.16× | 6.419 | 3.09× | ok |
| CoyoteBench/almabench | 0.029 | 0.062 | 2.14× | 0.075 | 2.59× | ok |
| CoyoteBench/fftbench | 0.093 | 0.209 | 2.25× | 0.267 | 2.87× | ok |
| CoyoteBench/huffbench | 0.027 | 0.060 | 2.22× | 0.071 | 2.63× | ok |
| CoyoteBench/lpbench | 0.025 | 0.055 | 2.20× | 0.067 | 2.68× | ok |
| DOE/HACCKernels | 0.095 | 0.209 | 2.20× | 0.281 | 2.96× | ok |
| DOE/HPCCG | 0.582 | 1.290 | 2.22× | 1.740 | 2.99× | ok |
| DOE/PENNANT | 1.340 | 3.106 | 2.32× | 3.556 | 2.65× | ok |
| DOE/miniFE | 0.517 | 1.240 | 2.40× | 1.565 | 3.03× | ok |
| Misc-C++-EH/spirit | 0.305 | 0.960 | 3.15× | 1.166 | 3.82× | ok |
| Misc-C++-Large/ray | 0.091 | 0.226 | 2.48× | 0.312 | 3.43× | ok |
| Misc-C++-Large/sphereflake | 0.083 | 0.176 | 2.12× | 0.243 | 2.93× | ok |
| Misc-C++/bigfib | 0.100 | 0.258 | 2.58× | 0.369 | 3.69× | ok |
| Misc-C++/oopack_v1p8 | 0.029 | 0.063 | 2.17× | 0.086 | 2.97× | ok |
| Misc-C++/stepanov_container | 0.145 | 0.343 | 2.37× | 0.441 | 3.04× | ok |
| Misc-C++/stepanov_v1p2 | 0.027 | 0.061 | 2.26× | 0.074 | 2.74× | ok |
| PAQ8p | 0.045 | 0.118 | 2.62× | 0.140 | 3.11× | ok |
| Prolangs-C++/life | 0.003 | 0.009 | — | 0.019 | — | ok |
| Prolangs-C++/ocean | 0.008 | 0.020 | — | 0.028 | — | ok |
| Prolangs-C++/primes | 0.006 | 0.016 | — | 0.024 | — | ok |
| Shootout-C++-EH/except | 0.072 | 0.146 | 2.03× | 0.232 | 3.22× | ok |
| Shootout-C++/ackermann | 0.063 | 0.146 | 2.32× | 0.184 | 2.92× | ok |
| Shootout-C++/ary3 | 0.079 | 0.187 | 2.37× | 0.208 | 2.63× | ok |
| Shootout-C++/fibo | 0.065 | 0.148 | 2.28× | 0.191 | 2.94× | ok |
| Shootout-C++/hash | 0.087 | 0.230 | 2.64× | 0.251 | 2.89× | ok |
| Shootout-C++/hash2 | 0.101 | 0.224 | 2.22× | 0.310 | 3.07× | ok |
| Shootout-C++/heapsort | 0.077 | 0.168 | 2.18× | 0.214 | 2.78× | ok |
| Shootout-C++/lists | 0.072 | 0.171 | 2.38× | 0.215 | 2.99× | ok |
| Shootout-C++/lists1 | 0.079 | 0.175 | 2.22× | 0.227 | 2.87× | ok |
| Shootout-C++/matrix | 0.061 | 0.140 | 2.30× | 0.184 | 3.02× | ok |
| Shootout-C++/methcall | 0.065 | 0.147 | 2.26× | 0.183 | 2.82× | ok |
| Shootout-C++/moments | 0.085 | 0.186 | 2.19× | 0.227 | 2.67× | ok |
| Shootout-C++/random | 0.077 | 0.167 | 2.17× | 0.223 | 2.90× | ok |
| Shootout-C++/sieve | 0.078 | 0.177 | 2.27× | 0.230 | 2.95× | ok |
| SmallPT | 0.029 | 0.055 | 1.90× | 0.074 | 2.55× | ok |
| Stanford/Bubblesort | 0.008 | 0.021 | — | 0.029 | — | ok |
| Stanford/FloatMM | 0.009 | 0.021 | — | 0.029 | — | ok |
| Stanford/Puzzle | 0.009 | 0.022 | — | 0.035 | — | ok |
| Stanford/Treesort | 0.009 | 0.022 | — | 0.030 | — | ok |
| bg/binarytrees/2 | 0.063 | 0.147 | 2.33× | 0.187 | 2.97× | ok |
| bg/fannkuchredux/3 | 0.030 | 0.057 | 1.90× | 0.074 | 2.47× | ok |
| bg/fasta/1 | 0.046 | 0.092 | 2.00× | 0.124 | 2.70× | ok |
| bg/fasta/2 | 0.048 | 0.098 | 2.04× | 0.117 | 2.44× | ok |
| bg/fasta/3 | 0.072 | 0.159 | 2.21× | 0.212 | 2.94× | ok |
| bg/fasta/4 | 0.067 | 0.143 | 2.13× | 0.164 | 2.45× | ok |
| bg/fasta/6 | 0.116 | 0.270 | 2.33× | 0.376 | 3.24× | ok |
| bg/mandelbrot/0 | 0.130 | 0.326 | 2.51× | 0.363 | 2.79× | ok |
| bg/mandelbrot/2 | 0.087 | 0.210 | 2.41× | 0.230 | 2.64× | ok |
| bg/mandelbrot/3 | 0.089 | 0.197 | 2.21× | 0.253 | 2.84× | ok |
| bg/mandelbrot/5 | 0.047 | 0.087 | 1.85× | 0.106 | 2.26× | ok |
| bg/mandelbrot/7 | 0.043 | 0.084 | 1.95× | 0.136 | 3.16× | ok |
| bg/mandelbrot/9 | 0.039 | 0.080 | 2.05× | 0.107 | 2.74× | ok |
| bg/nbody/1 | 0.028 | 0.058 | 2.07× | 0.073 | 2.61× | ok |
| bg/nbody/2 | 0.025 | 0.054 | 2.16× | 0.069 | 2.76× | ok |
| bg/nbody/3 | 0.028 | 0.052 | 1.86× | 0.076 | 2.71× | ok |
| bg/nbody/6 | 0.024 | 0.054 | 2.25× | 0.074 | 3.08× | ok |
| bg/pidigits/4 | 0.124 | 0.257 | 2.07× | 0.339 | 2.73× | ok |
| bg/pidigits/5 | 0.070 | 0.170 | 2.43× | 0.205 | 2.93× | ok |
| bg/revcomp/1 | 0.085 | 0.167 | 1.96× | 0.203 | 2.39× | ok |
| bg/revcomp/5 | 0.072 | 0.155 | 2.15× | 0.190 | 2.64× | ok |
| bg/spectralnorm/1 | 0.112 | 0.223 | 1.99× | 0.333 | 2.97× | ok |
| box2d | 1.313 | 2.834 | 2.16× | 2.777 | 2.12× | ok |
| fmt | 0.414 | 1.027 | 2.48× | 1.629 | 3.93× | ok |
| hexxagon | 0.249 | 0.490 | 1.97× | 0.786 | 3.16× | ok |
| lambda | 0.040 | 0.125 | 3.12× | 0.165 | 4.12× | ok |
| minisat | 0.051 | 0.123 | 2.41× | 0.167 | 3.27× | ok |
| nlohmann-json | 0.331 | 0.832 | 2.51× | 1.301 | 3.93× | ok |
| pugixml | 0.212 | 0.467 | 2.20× | 0.691 | 3.26× | ok |
| pugixml-tests | 2.714 | 7.073 | 2.61× | 9.381 | 3.46× | ok |
| rapidjson | 0.097 | 0.246 | 2.54× | 0.295 | 3.04× | ok |
| re2 | 2.792 | 6.575 | 2.35× | 5.522 | 1.98× | ok |
| re2-test-re2 | 3.965 | 9.364 | 2.36× | 12.629 | 3.19× | ok |
| re2-test-search | 4.118 | 9.011 | 2.19× | 13.396 | 3.25× | ok |
| tramp3d-v4 | 0.435 | 2.490 | 5.72× | 1.495 | 3.44× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
