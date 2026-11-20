# Public benchmarks: Intel (GitHub)

Measured compiler: [`94aaecc52`](https://github.com/vishvananda/cppgm/commit/94aaecc52ac26996bd3d654522334e3c28c68457) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44656576225) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: Intel(R) Xeon(R) 6975P-C.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.31× | 74 | 2.95× | 74 |
| Compile CPU, `-O0` | 3.24× | 74 | 3.18× | 74 |
| Compile CPU, `-O3` | 4.33× | 79 | 3.87× | 79 |
| Compile peak RSS, `-O0` | 1.43× | 81 | 2.18× | 81 |
| Compile peak RSS, `-O3` | 1.70× | 81 | 2.28× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.13× | 81 | 1.09× | 81 |
| Run CPU, `-O3` | 0.99× | 80 | 1.01× | 80 |
| Run instructions, `-O3` | 1.00× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.792 to 1.029; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.062 | 0.246 | 3.97× | 0.170 | 2.74× | ok |
| Adobe-C++/loop_unroll | 0.048 | 0.540 | 11.25× | 0.182 | 3.79× | ok |
| Adobe-C++/simple_types_constant_folding | 0.049 | 0.643 | 13.12× | 0.202 | 4.12× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.044 | 0.462 | 10.50× | 0.220 | 5.00× | ok |
| Adobe-C++/stepanov_abstraction | 0.036 | 0.182 | 5.06× | 0.117 | 3.25× | ok |
| Adobe-C++/stepanov_vector | 0.062 | 0.272 | 4.39× | 0.234 | 3.77× | ok |
| Bullet | 4.197 | 16.646 | 3.97× | 14.598 | 3.48× | ok |
| CLAMR | 2.241 | 9.344 | 4.17× | 6.912 | 3.08× | ok |
| CoyoteBench/almabench | 0.025 | 0.071 | 2.84× | 0.077 | 3.08× | ok |
| CoyoteBench/fftbench | 0.094 | 0.236 | 2.51× | 0.284 | 3.02× | ok |
| CoyoteBench/huffbench | 0.024 | 0.070 | 2.92× | 0.077 | 3.21× | ok |
| CoyoteBench/lpbench | 0.025 | 0.062 | 2.48× | 0.075 | 3.00× | ok |
| DOE/HACCKernels | 0.101 | 0.254 | 2.51× | 0.298 | 2.95× | ok |
| DOE/HPCCG | 0.581 | 1.527 | 2.63× | 1.853 | 3.19× | ok |
| DOE/PENNANT | 1.399 | 4.193 | 3.00× | 3.882 | 2.77× | ok |
| DOE/miniFE | 0.616 | 2.064 | 3.35× | 2.182 | 3.54× | ok |
| Misc-C++-EH/spirit | 0.367 | 2.264 | 6.17× | 1.888 | 5.14× | ok |
| Misc-C++-Large/ray | 0.100 | 0.270 | 2.70× | 0.336 | 3.36× | ok |
| Misc-C++-Large/sphereflake | 0.082 | 0.206 | 2.51× | 0.289 | 3.52× | ok |
| Misc-C++/bigfib | 0.107 | 0.383 | 3.58× | 0.399 | 3.73× | ok |
| Misc-C++/oopack_v1p8 | 0.027 | 0.081 | 3.00× | 0.083 | 3.07× | ok |
| Misc-C++/stepanov_container | 0.137 | 0.557 | 4.07× | 0.474 | 3.46× | ok |
| Misc-C++/stepanov_v1p2 | 0.028 | 0.103 | 3.68× | 0.084 | 3.00× | ok |
| PAQ8p | 0.062 | 0.434 | 7.00× | 0.228 | 3.68× | ok |
| Prolangs-C++/life | 0.003 | 0.028 | — | 0.023 | — | ok |
| Prolangs-C++/ocean | 0.009 | 0.056 | — | 0.038 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.021 | — | 0.024 | — | ok |
| Shootout-C++-EH/except | 0.068 | 0.138 | 2.03× | 0.234 | 3.44× | ok |
| Shootout-C++/ackermann | 0.060 | 0.138 | 2.30× | 0.185 | 3.08× | ok |
| Shootout-C++/ary3 | 0.076 | 0.194 | 2.55× | 0.260 | 3.42× | ok |
| Shootout-C++/fibo | 0.057 | 0.138 | 2.42× | 0.175 | 3.07× | ok |
| Shootout-C++/hash | 0.087 | 0.250 | 2.87× | 0.269 | 3.09× | ok |
| Shootout-C++/hash2 | 0.103 | 0.290 | 2.82× | 0.301 | 2.92× | ok |
| Shootout-C++/heapsort | 0.074 | 0.162 | 2.19× | 0.220 | 2.97× | ok |
| Shootout-C++/lists | 0.082 | 0.228 | 2.78× | 0.217 | 2.65× | ok |
| Shootout-C++/lists1 | 0.076 | 0.230 | 3.03× | 0.224 | 2.95× | ok |
| Shootout-C++/matrix | 0.061 | 0.137 | 2.25× | 0.184 | 3.02× | ok |
| Shootout-C++/methcall | 0.065 | 0.138 | 2.12× | 0.185 | 2.85× | ok |
| Shootout-C++/moments | 0.085 | 0.227 | 2.67× | 0.248 | 2.92× | ok |
| Shootout-C++/random | 0.075 | 0.166 | 2.21× | 0.225 | 3.00× | ok |
| Shootout-C++/sieve | 0.079 | 0.218 | 2.76× | 0.255 | 3.23× | ok |
| SmallPT | 0.027 | 0.086 | 3.19× | 0.077 | 2.85× | ok |
| Stanford/Bubblesort | 0.008 | 0.024 | — | 0.026 | — | ok |
| Stanford/FloatMM | 0.008 | 0.025 | — | 0.027 | — | ok |
| Stanford/Puzzle | 0.009 | 0.032 | — | 0.029 | — | ok |
| Stanford/Treesort | 0.008 | 0.026 | — | 0.028 | — | ok |
| bg/binarytrees/2 | 0.060 | 0.142 | 2.37× | 0.188 | 3.13× | ok |
| bg/fannkuchredux/3 | 0.029 | 0.066 | 2.28× | 0.076 | 2.62× | ok |
| bg/fasta/1 | 0.047 | 0.113 | 2.40× | 0.126 | 2.68× | ok |
| bg/fasta/2 | 0.047 | 0.113 | 2.40× | 0.122 | 2.60× | ok |
| bg/fasta/3 | 0.073 | 0.168 | 2.30× | 0.210 | 2.88× | ok |
| bg/fasta/4 | 0.068 | 0.143 | 2.10× | 0.170 | 2.50× | ok |
| bg/fasta/6 | 0.126 | 0.390 | 3.10× | 0.399 | 3.17× | ok |
| bg/mandelbrot/0 | 0.147 | 0.430 | 2.93× | 0.401 | 2.73× | ok |
| bg/mandelbrot/2 | 0.082 | 0.192 | 2.34× | 0.271 | 3.30× | ok |
| bg/mandelbrot/3 | 0.089 | 0.198 | 2.22× | 0.261 | 2.93× | ok |
| bg/mandelbrot/5 | 0.041 | 0.103 | 2.51× | 0.111 | 2.71× | ok |
| bg/mandelbrot/7 | 0.044 | 0.123 | 2.80× | 0.129 | 2.93× | ok |
| bg/mandelbrot/9 | 0.038 | 0.108 | 2.84× | 0.122 | 3.21× | ok |
| bg/nbody/1 | 0.026 | 0.096 | 3.69× | 0.081 | 3.12× | ok |
| bg/nbody/2 | 0.025 | 0.063 | 2.52× | 0.073 | 2.92× | ok |
| bg/nbody/3 | 0.027 | 0.067 | 2.48× | 0.069 | 2.56× | ok |
| bg/nbody/6 | 0.027 | 0.098 | 3.63× | 0.092 | 3.41× | ok |
| bg/pidigits/4 | 0.108 | 0.286 | 2.65× | 0.360 | 3.33× | ok |
| bg/pidigits/5 | 0.067 | 0.154 | 2.30× | 0.220 | 3.28× | ok |
| bg/revcomp/1 | 0.087 | 0.207 | 2.38× | 0.230 | 2.64× | ok |
| bg/revcomp/5 | 0.074 | 0.211 | 2.85× | 0.205 | 2.77× | ok |
| bg/spectralnorm/1 | 0.106 | 0.245 | 2.31× | 0.286 | 2.70× | ok |
| box2d | 1.364 | 3.909 | 2.87× | 3.386 | 2.48× | ok |
| fmt | 0.486 | 2.272 | 4.67× | 1.955 | 4.02× | ok |
| hexxagon | 0.205 | 0.529 | 2.58× | 0.680 | 3.32× | ok |
| lambda | 0.044 | 0.267 | 6.07× | 0.171 | 3.89× | ok |
| minisat | 0.052 | 0.250 | 4.81× | 0.204 | 3.92× | ok |
| nlohmann-json | 0.362 | 1.705 | 4.71× | 1.662 | 4.59× | ok |
| pugixml | 0.245 | 1.325 | 5.41× | 0.929 | 3.79× | ok |
| pugixml-tests | 3.082 | 14.510 | 4.71× | 11.320 | 3.67× | ok |
| rapidjson | 0.110 | 0.458 | 4.16× | 0.377 | 3.43× | ok |
| re2 | 2.796 | 10.067 | 3.60× | 6.320 | 2.26× | ok |
| re2-test-re2 | 4.205 | 14.710 | 3.50× | 14.546 | 3.46× | ok |
| re2-test-search | 4.178 | 13.111 | 3.14× | 13.981 | 3.35× | ok |
| tramp3d-v4 | 0.810 | 5.751 | 7.10× | 2.559 | 3.16× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.124 | 0.803 | 6.48× | 0.467 | 3.77× | ok |
| Adobe-C++/loop_unroll | 0.436 | 5.078 | 11.65× | 3.948 | 9.06× | ok |
| Adobe-C++/simple_types_constant_folding | 0.245 | 2.839 | 11.59× | 2.629 | 10.73× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.197 | 2.119 | 10.76× | 1.786 | 9.07× | ok |
| Adobe-C++/stepanov_abstraction | 0.097 | 0.918 | 9.46× | 0.466 | 4.80× | ok |
| Adobe-C++/stepanov_vector | 0.123 | 1.178 | 9.58× | 0.594 | 4.83× | ok |
| Bullet | 5.976 | 35.262 | 5.90× | 27.713 | 4.64× | ok |
| CLAMR | 3.972 | 21.984 | 5.53× | 16.136 | 4.06× | ok |
| CoyoteBench/almabench | 0.031 | 0.162 | 5.23× | 0.120 | 3.87× | ok |
| CoyoteBench/fftbench | 0.111 | 0.409 | 3.68× | 0.390 | 3.51× | ok |
| CoyoteBench/huffbench | 0.043 | 0.199 | 4.63× | 0.140 | 3.26× | ok |
| CoyoteBench/lpbench | 0.035 | 0.156 | 4.46× | 0.180 | 5.14× | ok |
| DOE/HACCKernels | 0.107 | 0.361 | 3.37× | 0.356 | 3.33× | ok |
| DOE/HPCCG | 0.637 | 2.200 | 3.45× | 2.193 | 3.44× | ok |
| DOE/PENNANT | 1.678 | 6.544 | 3.90× | 5.557 | 3.31× | ok |
| DOE/miniFE | 0.838 | 4.135 | 4.93× | 3.497 | 4.17× | ok |
| Misc-C++-EH/spirit | 0.583 | 3.313 | 5.68× | 3.345 | 5.74× | ok |
| Misc-C++-Large/ray | 0.108 | 0.472 | 4.37× | 0.399 | 3.69× | ok |
| Misc-C++-Large/sphereflake | 0.109 | 0.710 | 6.51× | 0.363 | 3.33× | ok |
| Misc-C++/bigfib | 0.134 | 0.548 | 4.09× | 0.447 | 3.34× | ok |
| Misc-C++/oopack_v1p8 | 0.034 | 0.166 | 4.88× | 0.156 | 4.59× | ok |
| Misc-C++/stepanov_container | 0.190 | 0.759 | 3.99× | 0.850 | 4.47× | ok |
| Misc-C++/stepanov_v1p2 | 0.039 | 0.188 | 4.82× | 0.166 | 4.26× | ok |
| PAQ8p | 0.304 | 3.712 | 12.21× | 1.653 | 5.44× | ok |
| Prolangs-C++/life | 0.009 | 0.093 | — | 0.060 | — | ok |
| Prolangs-C++/ocean | 0.019 | 0.183 | 9.63× | 0.101 | 5.32× | ok |
| Prolangs-C++/primes | 0.007 | 0.034 | — | 0.033 | — | ok |
| Shootout-C++-EH/except | 0.073 | 0.167 | 2.29× | 0.251 | 3.44× | ok |
| Shootout-C++/ackermann | 0.065 | 0.178 | 2.74× | 0.197 | 3.03× | ok |
| Shootout-C++/ary3 | 0.085 | 0.243 | 2.86× | 0.285 | 3.35× | ok |
| Shootout-C++/fibo | 0.063 | 0.179 | 2.84× | 0.193 | 3.06× | ok |
| Shootout-C++/hash | 0.105 | 0.338 | 3.22× | 0.362 | 3.45× | ok |
| Shootout-C++/hash2 | 0.125 | 0.440 | 3.52× | 0.439 | 3.51× | ok |
| Shootout-C++/heapsort | 0.078 | 0.201 | 2.58× | 0.236 | 3.03× | ok |
| Shootout-C++/lists | 0.075 | 0.258 | 3.44× | 0.240 | 3.20× | ok |
| Shootout-C++/lists1 | 0.085 | 0.252 | 2.96× | 0.264 | 3.11× | ok |
| Shootout-C++/matrix | 0.067 | 0.196 | 2.93× | 0.277 | 4.13× | ok |
| Shootout-C++/methcall | 0.065 | 0.182 | 2.80× | 0.225 | 3.46× | ok |
| Shootout-C++/moments | 0.097 | 0.284 | 2.93× | 0.307 | 3.16× | ok |
| Shootout-C++/random | 0.080 | 0.188 | 2.35× | 0.233 | 2.91× | ok |
| Shootout-C++/sieve | 0.087 | 0.242 | 2.78× | 0.279 | 3.21× | ok |
| SmallPT | 0.038 | 0.287 | 7.55× | 0.154 | 4.05× | ok |
| Stanford/Bubblesort | 0.010 | 0.047 | 4.70× | 0.041 | 4.10× | ok |
| Stanford/FloatMM | 0.012 | 0.058 | 4.83× | 0.063 | 5.25× | ok |
| Stanford/Puzzle | 0.019 | 0.115 | 6.05× | 0.107 | 5.63× | ok |
| Stanford/Treesort | 0.013 | 0.077 | 5.92× | 0.048 | 3.69× | ok |
| bg/binarytrees/2 | 0.067 | 0.386 | 5.76× | 0.207 | 3.09× | ok |
| bg/fannkuchredux/3 | 0.034 | 0.113 | 3.32× | 0.108 | 3.18× | ok |
| bg/fasta/1 | 0.054 | 0.152 | 2.81× | 0.162 | 3.00× | ok |
| bg/fasta/2 | 0.053 | 0.153 | 2.89× | 0.160 | 3.02× | ok |
| bg/fasta/3 | 0.077 | 0.225 | 2.92× | 0.249 | 3.23× | ok |
| bg/fasta/4 | 0.079 | 0.188 | 2.38× | 0.204 | 2.58× | ok |
| bg/fasta/6 | 0.133 | 0.443 | 3.33× | 0.464 | 3.49× | ok |
| bg/mandelbrot/0 | 0.170 | 0.560 | 3.29× | 0.655 | 3.85× | ok |
| bg/mandelbrot/2 | 0.092 | 0.243 | 2.64× | 0.303 | 3.29× | ok |
| bg/mandelbrot/3 | 0.087 | 0.213 | 2.45× | 0.272 | 3.13× | ok |
| bg/mandelbrot/5 | 0.047 | 0.141 | 3.00× | 0.175 | 3.72× | ok |
| bg/mandelbrot/7 | 0.056 | 0.178 | 3.18× | 0.173 | 3.09× | ok |
| bg/mandelbrot/9 | 0.049 | 0.172 | 3.51× | 0.159 | 3.24× | ok |
| bg/nbody/1 | 0.039 | 0.159 | 4.08× | 0.153 | 3.92× | ok |
| bg/nbody/2 | 0.030 | 0.128 | 4.27× | 0.133 | 4.43× | ok |
| bg/nbody/3 | 0.029 | 0.113 | 3.90× | 0.099 | 3.41× | ok |
| bg/nbody/6 | 0.040 | 0.163 | 4.08× | 0.164 | 4.10× | ok |
| bg/pidigits/4 | 0.111 | 0.304 | 2.74× | 0.443 | 3.99× | ok |
| bg/pidigits/5 | 0.078 | 0.185 | 2.37× | 0.248 | 3.18× | ok |
| bg/revcomp/1 | 0.079 | 0.234 | 2.96× | 0.270 | 3.42× | ok |
| bg/revcomp/5 | 0.083 | 0.233 | 2.81× | 0.238 | 2.87× | ok |
| bg/spectralnorm/1 | 0.126 | 0.327 | 2.60× | 0.335 | 2.66× | ok |
| box2d | 1.691 | 7.310 | 4.32× | 4.832 | 2.86× | ok |
| fmt | 0.983 | 5.224 | 5.31× | 3.998 | 4.07× | ok |
| hexxagon | 0.257 | 0.947 | 3.68× | 1.060 | 4.12× | ok |
| lambda | 0.107 | 0.992 | 9.27× | 0.481 | 4.50× | ok |
| minisat | 0.138 | 0.891 | 6.46× | 0.639 | 4.63× | ok |
| nlohmann-json | 0.739 | 3.182 | 4.31× | 2.856 | 3.86× | ok |
| pugixml | 0.641 | 5.440 | 8.49× | 3.633 | 5.67× | ok |
| pugixml-tests | 4.397 | 33.874 | 7.70× | 23.198 | 5.28× | ok |
| rapidjson | 0.236 | 1.185 | 5.02× | 0.713 | 3.02× | ok |
| re2 | 2.839 | 17.728 | 6.24× | 9.592 | 3.38× | ok |
| re2-test-re2 | 5.503 | 25.275 | 4.59× | 21.129 | 3.84× | ok |
| re2-test-search | 5.451 | 22.918 | 4.20× | 19.547 | 3.59× | ok |
| tramp3d-v4 | 2.565 | 21.501 | 8.38× | 13.579 | 5.29× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.058 | 0.106 | 1.83× | 0.174 | 3.00× | ok |
| Adobe-C++/loop_unroll | 0.033 | 0.093 | 2.82× | 0.107 | 3.24× | ok |
| Adobe-C++/simple_types_constant_folding | 0.034 | 0.099 | 2.91× | 0.105 | 3.09× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.033 | 0.088 | 2.67× | 0.115 | 3.48× | ok |
| Adobe-C++/stepanov_abstraction | 0.030 | 0.067 | 2.23× | 0.090 | 3.00× | ok |
| Adobe-C++/stepanov_vector | 0.053 | 0.121 | 2.28× | 0.189 | 3.57× | ok |
| Bullet | 3.871 | 10.684 | 2.76× | 12.438 | 3.21× | ok |
| CLAMR | 1.787 | 5.162 | 2.89× | 5.545 | 3.10× | ok |
| CoyoteBench/almabench | 0.026 | 0.060 | 2.31× | 0.072 | 2.77× | ok |
| CoyoteBench/fftbench | 0.093 | 0.209 | 2.25× | 0.264 | 2.84× | ok |
| CoyoteBench/huffbench | 0.024 | 0.060 | 2.50× | 0.075 | 3.12× | ok |
| CoyoteBench/lpbench | 0.025 | 0.050 | 2.00× | 0.070 | 2.80× | ok |
| DOE/HACCKernels | 0.099 | 0.224 | 2.26× | 0.278 | 2.81× | ok |
| DOE/HPCCG | 0.566 | 1.301 | 2.30× | 1.719 | 3.04× | ok |
| DOE/PENNANT | 1.300 | 3.160 | 2.43× | 3.609 | 2.78× | ok |
| DOE/miniFE | 0.560 | 1.337 | 2.39× | 1.841 | 3.29× | ok |
| Misc-C++-EH/spirit | 0.273 | 0.792 | 2.90× | 1.161 | 4.25× | ok |
| Misc-C++-Large/ray | 0.099 | 0.220 | 2.22× | 0.308 | 3.11× | ok |
| Misc-C++-Large/sphereflake | 0.082 | 0.182 | 2.22× | 0.273 | 3.33× | ok |
| Misc-C++/bigfib | 0.095 | 0.253 | 2.66× | 0.353 | 3.72× | ok |
| Misc-C++/oopack_v1p8 | 0.027 | 0.056 | 2.07× | 0.075 | 2.78× | ok |
| Misc-C++/stepanov_container | 0.123 | 0.323 | 2.63× | 0.399 | 3.24× | ok |
| Misc-C++/stepanov_v1p2 | 0.027 | 0.053 | 1.96× | 0.073 | 2.70× | ok |
| PAQ8p | 0.041 | 0.112 | 2.73× | 0.133 | 3.24× | ok |
| Prolangs-C++/life | 0.003 | 0.009 | — | 0.018 | — | ok |
| Prolangs-C++/ocean | 0.008 | 0.019 | — | 0.027 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.014 | — | 0.024 | — | ok |
| Shootout-C++-EH/except | 0.069 | 0.136 | 1.97× | 0.224 | 3.25× | ok |
| Shootout-C++/ackermann | 0.061 | 0.141 | 2.31× | 0.180 | 2.95× | ok |
| Shootout-C++/ary3 | 0.076 | 0.180 | 2.37× | 0.245 | 3.22× | ok |
| Shootout-C++/fibo | 0.058 | 0.142 | 2.45× | 0.171 | 2.95× | ok |
| Shootout-C++/hash | 0.084 | 0.190 | 2.26× | 0.242 | 2.88× | ok |
| Shootout-C++/hash2 | 0.100 | 0.222 | 2.22× | 0.267 | 2.67× | ok |
| Shootout-C++/heapsort | 0.075 | 0.163 | 2.17× | 0.212 | 2.83× | ok |
| Shootout-C++/lists | 0.080 | 0.192 | 2.40× | 0.198 | 2.48× | ok |
| Shootout-C++/lists1 | 0.075 | 0.186 | 2.48× | 0.206 | 2.75× | ok |
| Shootout-C++/matrix | 0.062 | 0.137 | 2.21× | 0.179 | 2.89× | ok |
| Shootout-C++/methcall | 0.065 | 0.136 | 2.09× | 0.179 | 2.75× | ok |
| Shootout-C++/moments | 0.083 | 0.179 | 2.16× | 0.225 | 2.71× | ok |
| Shootout-C++/random | 0.079 | 0.167 | 2.11× | 0.217 | 2.75× | ok |
| Shootout-C++/sieve | 0.077 | 0.179 | 2.32× | 0.233 | 3.03× | ok |
| SmallPT | 0.026 | 0.054 | 2.08× | 0.071 | 2.73× | ok |
| Stanford/Bubblesort | 0.008 | 0.021 | — | 0.027 | — | ok |
| Stanford/FloatMM | 0.008 | 0.020 | — | 0.027 | — | ok |
| Stanford/Puzzle | 0.009 | 0.022 | — | 0.028 | — | ok |
| Stanford/Treesort | 0.008 | 0.020 | — | 0.028 | — | ok |
| bg/binarytrees/2 | 0.061 | 0.141 | 2.31× | 0.182 | 2.98× | ok |
| bg/fannkuchredux/3 | 0.029 | 0.058 | 2.00× | 0.075 | 2.59× | ok |
| bg/fasta/1 | 0.046 | 0.090 | 1.96× | 0.117 | 2.54× | ok |
| bg/fasta/2 | 0.045 | 0.090 | 2.00× | 0.113 | 2.51× | ok |
| bg/fasta/3 | 0.073 | 0.158 | 2.16× | 0.200 | 2.74× | ok |
| bg/fasta/4 | 0.068 | 0.134 | 1.97× | 0.169 | 2.49× | ok |
| bg/fasta/6 | 0.127 | 0.262 | 2.06× | 0.347 | 2.73× | ok |
| bg/mandelbrot/0 | 0.132 | 0.278 | 2.11× | 0.358 | 2.71× | ok |
| bg/mandelbrot/2 | 0.080 | 0.169 | 2.11× | 0.253 | 3.16× | ok |
| bg/mandelbrot/3 | 0.089 | 0.194 | 2.18× | 0.260 | 2.92× | ok |
| bg/mandelbrot/5 | 0.040 | 0.085 | 2.12× | 0.103 | 2.57× | ok |
| bg/mandelbrot/7 | 0.042 | 0.091 | 2.17× | 0.114 | 2.71× | ok |
| bg/mandelbrot/9 | 0.037 | 0.087 | 2.35× | 0.102 | 2.76× | ok |
| bg/nbody/1 | 0.025 | 0.058 | 2.32× | 0.077 | 3.08× | ok |
| bg/nbody/2 | 0.025 | 0.051 | 2.04× | 0.069 | 2.76× | ok |
| bg/nbody/3 | 0.025 | 0.054 | 2.16× | 0.066 | 2.64× | ok |
| bg/nbody/6 | 0.026 | 0.057 | 2.19× | 0.075 | 2.88× | ok |
| bg/pidigits/4 | 0.106 | 0.258 | 2.43× | 0.303 | 2.86× | ok |
| bg/pidigits/5 | 0.071 | 0.152 | 2.14× | 0.190 | 2.68× | ok |
| bg/revcomp/1 | 0.076 | 0.166 | 2.18× | 0.208 | 2.74× | ok |
| bg/revcomp/5 | 0.072 | 0.151 | 2.10× | 0.185 | 2.57× | ok |
| bg/spectralnorm/1 | 0.111 | 0.228 | 2.05× | 0.270 | 2.43× | ok |
| box2d | 1.347 | 2.736 | 2.03× | 3.403 | 2.53× | ok |
| fmt | 0.427 | 0.952 | 2.23× | 1.487 | 3.48× | ok |
| hexxagon | 0.206 | 0.476 | 2.31× | 0.646 | 3.14× | ok |
| lambda | 0.035 | 0.105 | 3.00× | 0.127 | 3.63× | ok |
| minisat | 0.044 | 0.123 | 2.80× | 0.154 | 3.50× | ok |
| nlohmann-json | 0.288 | 0.744 | 2.58× | 1.293 | 4.49× | ok |
| pugixml | 0.200 | 0.506 | 2.53× | 0.676 | 3.38× | ok |
| pugixml-tests | 2.729 | 7.196 | 2.64× | 8.970 | 3.29× | ok |
| rapidjson | 0.090 | 0.231 | 2.57× | 0.292 | 3.24× | ok |
| re2 | 2.614 | 5.819 | 2.23× | 5.416 | 2.07× | ok |
| re2-test-re2 | 3.787 | 9.274 | 2.45× | 12.450 | 3.29× | ok |
| re2-test-search | 3.741 | 8.970 | 2.40× | 12.057 | 3.22× | ok |
| tramp3d-v4 | 0.597 | 2.177 | 3.65× | 1.493 | 2.50× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
