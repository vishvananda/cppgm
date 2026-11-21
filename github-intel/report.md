# Public benchmarks: Intel (GitHub)

Measured compiler: [`992888a62`](https://github.com/vishvananda/cppgm/commit/992888a62d0d19fee6e2973c68195aed2b02a9b7) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44813597235) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: Intel(R) Xeon(R) 6975P-C.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.32× | 74 | 2.93× | 74 |
| Compile CPU, `-O0` | 3.26× | 75 | 3.21× | 75 |
| Compile CPU, `-O3` | 4.43× | 80 | 3.94× | 80 |
| Compile peak RSS, `-O0` | 1.45× | 81 | 2.21× | 81 |
| Compile peak RSS, `-O3` | 1.73× | 81 | 2.33× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.12× | 81 | 1.09× | 81 |
| Run CPU, `-O3` | 0.99× | 80 | 1.00× | 80 |
| Run instructions, `-O3` | 1.00× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.911 to 1.007; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.065 | 0.262 | 4.03× | 0.215 | 3.31× | ok |
| Adobe-C++/loop_unroll | 0.049 | 0.567 | 11.57× | 0.171 | 3.49× | ok |
| Adobe-C++/simple_types_constant_folding | 0.053 | 0.697 | 13.15× | 0.209 | 3.94× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.045 | 0.485 | 10.78× | 0.199 | 4.42× | ok |
| Adobe-C++/stepanov_abstraction | 0.038 | 0.173 | 4.55× | 0.118 | 3.11× | ok |
| Adobe-C++/stepanov_vector | 0.074 | 0.309 | 4.18× | 0.198 | 2.68× | ok |
| Bullet | 4.467 | 16.880 | 3.78× | 17.682 | 3.96× | ok |
| CLAMR | 2.539 | 8.393 | 3.31× | 9.273 | 3.65× | ok |
| CoyoteBench/almabench | 0.031 | 0.078 | 2.52× | 0.086 | 2.77× | ok |
| CoyoteBench/fftbench | 0.100 | 0.252 | 2.52× | 0.329 | 3.29× | ok |
| CoyoteBench/huffbench | 0.028 | 0.064 | 2.29× | 0.076 | 2.71× | ok |
| CoyoteBench/lpbench | 0.031 | 0.079 | 2.55× | 0.090 | 2.90× | ok |
| DOE/HACCKernels | 0.106 | 0.296 | 2.79× | 0.391 | 3.69× | ok |
| DOE/HPCCG | 0.706 | 1.583 | 2.24× | 2.312 | 3.27× | ok |
| DOE/PENNANT | 1.440 | 3.748 | 2.60× | 3.860 | 2.68× | ok |
| DOE/miniFE | 0.573 | 1.874 | 3.27× | 1.852 | 3.23× | ok |
| Misc-C++-EH/spirit | 0.390 | 2.875 | 7.37× | 1.977 | 5.07× | ok |
| Misc-C++-Large/ray | 0.106 | 0.277 | 2.61× | 0.338 | 3.19× | ok |
| Misc-C++-Large/sphereflake | 0.086 | 0.235 | 2.73× | 0.307 | 3.57× | ok |
| Misc-C++/bigfib | 0.108 | 0.397 | 3.68× | 0.335 | 3.10× | ok |
| Misc-C++/oopack_v1p8 | 0.029 | 0.084 | 2.90× | 0.096 | 3.31× | ok |
| Misc-C++/stepanov_container | 0.138 | 0.584 | 4.23× | 0.444 | 3.22× | ok |
| Misc-C++/stepanov_v1p2 | 0.029 | 0.119 | 4.10× | 0.089 | 3.07× | ok |
| PAQ8p | 0.060 | 0.421 | 7.02× | 0.209 | 3.48× | ok |
| Prolangs-C++/life | 0.004 | 0.033 | — | 0.026 | — | ok |
| Prolangs-C++/ocean | 0.010 | 0.060 | 6.00× | 0.042 | 4.20× | ok |
| Prolangs-C++/primes | 0.005 | 0.021 | — | 0.025 | — | ok |
| Shootout-C++-EH/except | 0.065 | 0.151 | 2.32× | 0.202 | 3.11× | ok |
| Shootout-C++/ackermann | 0.076 | 0.155 | 2.04× | 0.201 | 2.64× | ok |
| Shootout-C++/ary3 | 0.085 | 0.197 | 2.32× | 0.232 | 2.73× | ok |
| Shootout-C++/fibo | 0.066 | 0.148 | 2.24× | 0.198 | 3.00× | ok |
| Shootout-C++/hash | 0.098 | 0.274 | 2.80× | 0.297 | 3.03× | ok |
| Shootout-C++/hash2 | 0.107 | 0.300 | 2.80× | 0.292 | 2.73× | ok |
| Shootout-C++/heapsort | 0.080 | 0.175 | 2.19× | 0.237 | 2.96× | ok |
| Shootout-C++/lists | 0.073 | 0.191 | 2.62× | 0.277 | 3.79× | ok |
| Shootout-C++/lists1 | 0.080 | 0.213 | 2.66× | 0.243 | 3.04× | ok |
| Shootout-C++/matrix | 0.062 | 0.146 | 2.35× | 0.194 | 3.13× | ok |
| Shootout-C++/methcall | 0.064 | 0.154 | 2.41× | 0.189 | 2.95× | ok |
| Shootout-C++/moments | 0.087 | 0.237 | 2.72× | 0.252 | 2.90× | ok |
| Shootout-C++/random | 0.079 | 0.172 | 2.18× | 0.229 | 2.90× | ok |
| Shootout-C++/sieve | 0.081 | 0.222 | 2.74× | 0.250 | 3.09× | ok |
| SmallPT | 0.027 | 0.076 | 2.81× | 0.083 | 3.07× | ok |
| Stanford/Bubblesort | 0.008 | 0.025 | — | 0.030 | — | ok |
| Stanford/FloatMM | 0.008 | 0.026 | — | 0.035 | — | ok |
| Stanford/Puzzle | 0.009 | 0.033 | — | 0.032 | — | ok |
| Stanford/Treesort | 0.009 | 0.028 | — | 0.031 | — | ok |
| bg/binarytrees/2 | 0.063 | 0.151 | 2.40× | 0.196 | 3.11× | ok |
| bg/fannkuchredux/3 | 0.030 | 0.069 | 2.30× | 0.078 | 2.60× | ok |
| bg/fasta/1 | 0.057 | 0.117 | 2.05× | 0.126 | 2.21× | ok |
| bg/fasta/2 | 0.051 | 0.126 | 2.47× | 0.133 | 2.61× | ok |
| bg/fasta/3 | 0.073 | 0.179 | 2.45× | 0.215 | 2.95× | ok |
| bg/fasta/4 | 0.068 | 0.143 | 2.10× | 0.207 | 3.04× | ok |
| bg/fasta/6 | 0.145 | 0.409 | 2.82× | 0.433 | 2.99× | ok |
| bg/mandelbrot/0 | 0.144 | 0.443 | 3.08× | 0.427 | 2.97× | ok |
| bg/mandelbrot/2 | 0.079 | 0.235 | 2.97× | 0.275 | 3.48× | ok |
| bg/mandelbrot/3 | 0.094 | 0.195 | 2.07× | 0.269 | 2.86× | ok |
| bg/mandelbrot/5 | 0.042 | 0.108 | 2.57× | 0.119 | 2.83× | ok |
| bg/mandelbrot/7 | 0.042 | 0.125 | 2.98× | 0.121 | 2.88× | ok |
| bg/mandelbrot/9 | 0.040 | 0.116 | 2.90× | 0.112 | 2.80× | ok |
| bg/nbody/1 | 0.028 | 0.098 | 3.50× | 0.090 | 3.21× | ok |
| bg/nbody/2 | 0.024 | 0.070 | 2.92× | 0.073 | 3.04× | ok |
| bg/nbody/3 | 0.025 | 0.063 | 2.52× | 0.078 | 3.12× | ok |
| bg/nbody/6 | 0.027 | 0.102 | 3.78× | 0.092 | 3.41× | ok |
| bg/pidigits/4 | 0.117 | 0.296 | 2.53× | 0.382 | 3.26× | ok |
| bg/pidigits/5 | 0.072 | 0.166 | 2.31× | 0.260 | 3.61× | ok |
| bg/revcomp/1 | 0.086 | 0.212 | 2.47× | 0.238 | 2.77× | ok |
| bg/revcomp/5 | 0.081 | 0.191 | 2.36× | 0.260 | 3.21× | ok |
| bg/spectralnorm/1 | 0.101 | 0.276 | 2.73× | 0.351 | 3.48× | ok |
| box2d | 1.396 | 4.228 | 3.03× | 4.973 | 3.56× | ok |
| fmt | 0.453 | 2.265 | 5.00× | 2.051 | 4.53× | ok |
| hexxagon | 0.249 | 0.646 | 2.59× | 0.845 | 3.39× | ok |
| lambda | 0.050 | 0.297 | 5.94× | 0.224 | 4.48× | ok |
| minisat | 0.064 | 0.294 | 4.59× | 0.209 | 3.27× | ok |
| nlohmann-json | 0.438 | 1.983 | 4.53× | 1.767 | 4.03× | ok |
| pugixml | 0.260 | 1.248 | 4.80× | 1.054 | 4.05× | ok |
| pugixml-tests | 3.073 | 15.089 | 4.91× | 13.356 | 4.35× | ok |
| rapidjson | 0.117 | 0.482 | 4.12× | 0.354 | 3.03× | ok |
| re2 | 2.884 | 11.020 | 3.82× | 6.582 | 2.28× | ok |
| re2-test-re2 | 4.581 | 15.041 | 3.28× | 15.324 | 3.35× | ok |
| re2-test-search | 4.542 | 14.137 | 3.11× | 13.870 | 3.05× | ok |
| tramp3d-v4 | 0.736 | 8.940 | 12.15× | 2.566 | 3.49× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.124 | 0.823 | 6.64× | 0.475 | 3.83× | ok |
| Adobe-C++/loop_unroll | 0.430 | 5.394 | 12.54× | 4.048 | 9.41× | ok |
| Adobe-C++/simple_types_constant_folding | 0.246 | 2.885 | 11.73× | 2.277 | 9.26× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.217 | 2.161 | 9.96× | 1.817 | 8.37× | ok |
| Adobe-C++/stepanov_abstraction | 0.094 | 0.965 | 10.27× | 0.454 | 4.83× | ok |
| Adobe-C++/stepanov_vector | 0.111 | 1.446 | 13.03× | 0.667 | 6.01× | ok |
| Bullet | 6.241 | 39.265 | 6.29× | 26.832 | 4.30× | ok |
| CLAMR | 4.716 | 22.973 | 4.87× | 17.654 | 3.74× | ok |
| CoyoteBench/almabench | 0.036 | 0.176 | 4.89× | 0.125 | 3.47× | ok |
| CoyoteBench/fftbench | 0.133 | 0.414 | 3.11× | 0.507 | 3.81× | ok |
| CoyoteBench/huffbench | 0.040 | 0.204 | 5.10× | 0.126 | 3.15× | ok |
| CoyoteBench/lpbench | 0.038 | 0.194 | 5.11× | 0.212 | 5.58× | ok |
| DOE/HACCKernels | 0.118 | 0.373 | 3.16× | 0.409 | 3.47× | ok |
| DOE/HPCCG | 0.667 | 2.368 | 3.55× | 2.646 | 3.97× | ok |
| DOE/PENNANT | 1.704 | 6.326 | 3.71× | 5.430 | 3.19× | ok |
| DOE/miniFE | 0.802 | 3.939 | 4.91× | 3.524 | 4.39× | ok |
| Misc-C++-EH/spirit | 0.648 | 3.866 | 5.97× | 3.450 | 5.32× | ok |
| Misc-C++-Large/ray | 0.117 | 0.492 | 4.21× | 0.393 | 3.36× | ok |
| Misc-C++-Large/sphereflake | 0.102 | 0.728 | 7.14× | 0.316 | 3.10× | ok |
| Misc-C++/bigfib | 0.135 | 0.562 | 4.16× | 0.454 | 3.36× | ok |
| Misc-C++/oopack_v1p8 | 0.035 | 0.172 | 4.91× | 0.172 | 4.91× | ok |
| Misc-C++/stepanov_container | 0.197 | 0.903 | 4.58× | 0.798 | 4.05× | ok |
| Misc-C++/stepanov_v1p2 | 0.038 | 0.216 | 5.68× | 0.212 | 5.58× | ok |
| PAQ8p | 0.295 | 3.617 | 12.26× | 1.557 | 5.28× | ok |
| Prolangs-C++/life | 0.010 | 0.103 | 10.30× | 0.065 | 6.50× | ok |
| Prolangs-C++/ocean | 0.020 | 0.193 | 9.65× | 0.109 | 5.45× | ok |
| Prolangs-C++/primes | 0.007 | 0.033 | — | 0.035 | — | ok |
| Shootout-C++-EH/except | 0.068 | 0.182 | 2.68× | 0.233 | 3.43× | ok |
| Shootout-C++/ackermann | 0.068 | 0.194 | 2.85× | 0.224 | 3.29× | ok |
| Shootout-C++/ary3 | 0.082 | 0.245 | 2.99× | 0.280 | 3.41× | ok |
| Shootout-C++/fibo | 0.069 | 0.186 | 2.70× | 0.210 | 3.04× | ok |
| Shootout-C++/hash | 0.115 | 0.370 | 3.22× | 0.390 | 3.39× | ok |
| Shootout-C++/hash2 | 0.115 | 0.450 | 3.91× | 0.423 | 3.68× | ok |
| Shootout-C++/heapsort | 0.083 | 0.224 | 2.70× | 0.262 | 3.16× | ok |
| Shootout-C++/lists | 0.090 | 0.221 | 2.46× | 0.252 | 2.80× | ok |
| Shootout-C++/lists1 | 0.089 | 0.254 | 2.85× | 0.284 | 3.19× | ok |
| Shootout-C++/matrix | 0.070 | 0.198 | 2.83× | 0.285 | 4.07× | ok |
| Shootout-C++/methcall | 0.075 | 0.184 | 2.45× | 0.205 | 2.73× | ok |
| Shootout-C++/moments | 0.100 | 0.294 | 2.94× | 0.314 | 3.14× | ok |
| Shootout-C++/random | 0.089 | 0.196 | 2.20× | 0.243 | 2.73× | ok |
| Shootout-C++/sieve | 0.089 | 0.242 | 2.72× | 0.280 | 3.15× | ok |
| SmallPT | 0.039 | 0.290 | 7.44× | 0.163 | 4.18× | ok |
| Stanford/Bubblesort | 0.011 | 0.050 | 4.55× | 0.047 | 4.27× | ok |
| Stanford/FloatMM | 0.012 | 0.059 | 4.92× | 0.067 | 5.58× | ok |
| Stanford/Puzzle | 0.019 | 0.116 | 6.11× | 0.112 | 5.89× | ok |
| Stanford/Treesort | 0.014 | 0.082 | 5.86× | 0.053 | 3.79× | ok |
| bg/binarytrees/2 | 0.068 | 0.403 | 5.93× | 0.211 | 3.10× | ok |
| bg/fannkuchredux/3 | 0.035 | 0.114 | 3.26× | 0.108 | 3.09× | ok |
| bg/fasta/1 | 0.056 | 0.153 | 2.73× | 0.174 | 3.11× | ok |
| bg/fasta/2 | 0.056 | 0.164 | 2.93× | 0.199 | 3.55× | ok |
| bg/fasta/3 | 0.080 | 0.221 | 2.76× | 0.254 | 3.17× | ok |
| bg/fasta/4 | 0.072 | 0.175 | 2.43× | 0.260 | 3.61× | ok |
| bg/fasta/6 | 0.148 | 0.436 | 2.95× | 0.526 | 3.55× | ok |
| bg/mandelbrot/0 | 0.175 | 0.654 | 3.74× | 0.661 | 3.78× | ok |
| bg/mandelbrot/2 | 0.086 | 0.255 | 2.97× | 0.311 | 3.62× | ok |
| bg/mandelbrot/3 | 0.097 | 0.235 | 2.42× | 0.295 | 3.04× | ok |
| bg/mandelbrot/5 | 0.047 | 0.144 | 3.06× | 0.149 | 3.17× | ok |
| bg/mandelbrot/7 | 0.057 | 0.192 | 3.37× | 0.159 | 2.79× | ok |
| bg/mandelbrot/9 | 0.053 | 0.181 | 3.42× | 0.175 | 3.30× | ok |
| bg/nbody/1 | 0.040 | 0.151 | 3.77× | 0.171 | 4.28× | ok |
| bg/nbody/2 | 0.031 | 0.115 | 3.71× | 0.117 | 3.77× | ok |
| bg/nbody/3 | 0.028 | 0.121 | 4.32× | 0.107 | 3.82× | ok |
| bg/nbody/6 | 0.039 | 0.166 | 4.26× | 0.167 | 4.28× | ok |
| bg/pidigits/4 | 0.121 | 0.334 | 2.76× | 0.410 | 3.39× | ok |
| bg/pidigits/5 | 0.073 | 0.200 | 2.74× | 0.221 | 3.03× | ok |
| bg/revcomp/1 | 0.096 | 0.242 | 2.52× | 0.279 | 2.91× | ok |
| bg/revcomp/5 | 0.085 | 0.235 | 2.76× | 0.298 | 3.51× | ok |
| bg/spectralnorm/1 | 0.106 | 0.360 | 3.40× | 0.388 | 3.66× | ok |
| box2d | 1.765 | 7.509 | 4.25× | 6.786 | 3.84× | ok |
| fmt | 0.939 | 5.288 | 5.63× | 4.119 | 4.39× | ok |
| hexxagon | 0.274 | 1.051 | 3.84× | 1.093 | 3.99× | ok |
| lambda | 0.119 | 1.133 | 9.52× | 0.558 | 4.69× | ok |
| minisat | 0.140 | 1.013 | 7.24× | 0.650 | 4.64× | ok |
| nlohmann-json | 0.841 | 3.297 | 3.92× | 3.042 | 3.62× | ok |
| pugixml | 0.689 | 5.482 | 7.96× | 4.093 | 5.94× | ok |
| pugixml-tests | 4.854 | 34.597 | 7.13× | 25.200 | 5.19× | ok |
| rapidjson | 0.230 | 1.233 | 5.36× | 0.710 | 3.09× | ok |
| re2 | 2.984 | 18.684 | 6.26× | 9.889 | 3.31× | ok |
| re2-test-re2 | 5.810 | 26.641 | 4.59× | 22.318 | 3.84× | ok |
| re2-test-search | 5.674 | 24.211 | 4.27× | 20.820 | 3.67× | ok |
| tramp3d-v4 | 2.623 | 25.180 | 9.60× | 13.896 | 5.30× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.059 | 0.130 | 2.20× | 0.187 | 3.17× | ok |
| Adobe-C++/loop_unroll | 0.034 | 0.103 | 3.03× | 0.100 | 2.94× | ok |
| Adobe-C++/simple_types_constant_folding | 0.036 | 0.101 | 2.81× | 0.105 | 2.92× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.034 | 0.093 | 2.74× | 0.097 | 2.85× | ok |
| Adobe-C++/stepanov_abstraction | 0.031 | 0.075 | 2.42× | 0.089 | 2.87× | ok |
| Adobe-C++/stepanov_vector | 0.065 | 0.138 | 2.12× | 0.158 | 2.43× | ok |
| Bullet | 4.018 | 9.943 | 2.47× | 14.146 | 3.52× | ok |
| CLAMR | 2.190 | 4.486 | 2.05× | 7.423 | 3.39× | ok |
| CoyoteBench/almabench | 0.031 | 0.066 | 2.13× | 0.075 | 2.42× | ok |
| CoyoteBench/fftbench | 0.097 | 0.222 | 2.29× | 0.321 | 3.31× | ok |
| CoyoteBench/huffbench | 0.028 | 0.053 | 1.89× | 0.073 | 2.61× | ok |
| CoyoteBench/lpbench | 0.030 | 0.064 | 2.13× | 0.086 | 2.87× | ok |
| DOE/HACCKernels | 0.103 | 0.265 | 2.57× | 0.335 | 3.25× | ok |
| DOE/HPCCG | 0.689 | 1.457 | 2.11× | 1.909 | 2.77× | ok |
| DOE/PENNANT | 1.318 | 3.143 | 2.38× | 3.476 | 2.64× | ok |
| DOE/miniFE | 0.526 | 1.247 | 2.37× | 1.588 | 3.02× | ok |
| Misc-C++-EH/spirit | 0.326 | 0.982 | 3.01× | 1.317 | 4.04× | ok |
| Misc-C++-Large/ray | 0.103 | 0.227 | 2.20× | 0.302 | 2.93× | ok |
| Misc-C++-Large/sphereflake | 0.084 | 0.207 | 2.46× | 0.256 | 3.05× | ok |
| Misc-C++/bigfib | 0.098 | 0.265 | 2.70× | 0.290 | 2.96× | ok |
| Misc-C++/oopack_v1p8 | 0.026 | 0.058 | 2.23× | 0.083 | 3.19× | ok |
| Misc-C++/stepanov_container | 0.123 | 0.334 | 2.72× | 0.373 | 3.03× | ok |
| Misc-C++/stepanov_v1p2 | 0.028 | 0.066 | 2.36× | 0.074 | 2.64× | ok |
| PAQ8p | 0.040 | 0.107 | 2.67× | 0.119 | 2.97× | ok |
| Prolangs-C++/life | 0.003 | 0.010 | — | 0.020 | — | ok |
| Prolangs-C++/ocean | 0.008 | 0.020 | — | 0.029 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.014 | — | 0.024 | — | ok |
| Shootout-C++-EH/except | 0.065 | 0.152 | 2.34× | 0.217 | 3.34× | ok |
| Shootout-C++/ackermann | 0.071 | 0.159 | 2.24× | 0.193 | 2.72× | ok |
| Shootout-C++/ary3 | 0.080 | 0.174 | 2.17× | 0.218 | 2.72× | ok |
| Shootout-C++/fibo | 0.066 | 0.148 | 2.24× | 0.191 | 2.89× | ok |
| Shootout-C++/hash | 0.091 | 0.206 | 2.26× | 0.261 | 2.87× | ok |
| Shootout-C++/hash2 | 0.102 | 0.224 | 2.20× | 0.258 | 2.53× | ok |
| Shootout-C++/heapsort | 0.081 | 0.176 | 2.17× | 0.229 | 2.83× | ok |
| Shootout-C++/lists | 0.071 | 0.160 | 2.25× | 0.259 | 3.65× | ok |
| Shootout-C++/lists1 | 0.077 | 0.173 | 2.25× | 0.220 | 2.86× | ok |
| Shootout-C++/matrix | 0.062 | 0.142 | 2.29× | 0.186 | 3.00× | ok |
| Shootout-C++/methcall | 0.065 | 0.172 | 2.65× | 0.182 | 2.80× | ok |
| Shootout-C++/moments | 0.084 | 0.186 | 2.21× | 0.228 | 2.71× | ok |
| Shootout-C++/random | 0.080 | 0.172 | 2.15× | 0.219 | 2.74× | ok |
| Shootout-C++/sieve | 0.078 | 0.182 | 2.33× | 0.230 | 2.95× | ok |
| SmallPT | 0.025 | 0.050 | 2.00× | 0.076 | 3.04× | ok |
| Stanford/Bubblesort | 0.008 | 0.022 | — | 0.030 | — | ok |
| Stanford/FloatMM | 0.008 | 0.021 | — | 0.033 | — | ok |
| Stanford/Puzzle | 0.009 | 0.022 | — | 0.031 | — | ok |
| Stanford/Treesort | 0.009 | 0.022 | — | 0.030 | — | ok |
| bg/binarytrees/2 | 0.064 | 0.148 | 2.31× | 0.187 | 2.92× | ok |
| bg/fannkuchredux/3 | 0.030 | 0.058 | 1.93× | 0.075 | 2.50× | ok |
| bg/fasta/1 | 0.053 | 0.093 | 1.75× | 0.116 | 2.19× | ok |
| bg/fasta/2 | 0.051 | 0.099 | 1.94× | 0.122 | 2.39× | ok |
| bg/fasta/3 | 0.072 | 0.168 | 2.33× | 0.203 | 2.82× | ok |
| bg/fasta/4 | 0.070 | 0.138 | 1.97× | 0.169 | 2.41× | ok |
| bg/fasta/6 | 0.136 | 0.285 | 2.10× | 0.379 | 2.79× | ok |
| bg/mandelbrot/0 | 0.130 | 0.282 | 2.17× | 0.374 | 2.88× | ok |
| bg/mandelbrot/2 | 0.077 | 0.180 | 2.34× | 0.254 | 3.30× | ok |
| bg/mandelbrot/3 | 0.092 | 0.191 | 2.08× | 0.258 | 2.80× | ok |
| bg/mandelbrot/5 | 0.040 | 0.086 | 2.15× | 0.117 | 2.92× | ok |
| bg/mandelbrot/7 | 0.040 | 0.092 | 2.30× | 0.107 | 2.67× | ok |
| bg/mandelbrot/9 | 0.038 | 0.082 | 2.16× | 0.098 | 2.58× | ok |
| bg/nbody/1 | 0.026 | 0.059 | 2.27× | 0.076 | 2.92× | ok |
| bg/nbody/2 | 0.024 | 0.055 | 2.29× | 0.069 | 2.88× | ok |
| bg/nbody/3 | 0.025 | 0.051 | 2.04× | 0.076 | 3.04× | ok |
| bg/nbody/6 | 0.026 | 0.059 | 2.27× | 0.074 | 2.85× | ok |
| bg/pidigits/4 | 0.113 | 0.266 | 2.35× | 0.329 | 2.91× | ok |
| bg/pidigits/5 | 0.073 | 0.160 | 2.19× | 0.246 | 3.37× | ok |
| bg/revcomp/1 | 0.085 | 0.166 | 1.95× | 0.213 | 2.51× | ok |
| bg/revcomp/5 | 0.077 | 0.155 | 2.01× | 0.239 | 3.10× | ok |
| bg/spectralnorm/1 | 0.112 | 0.254 | 2.27× | 0.334 | 2.98× | ok |
| box2d | 1.324 | 2.780 | 2.10× | 3.395 | 2.56× | ok |
| fmt | 0.423 | 0.978 | 2.31× | 1.638 | 3.87× | ok |
| hexxagon | 0.252 | 0.593 | 2.35× | 0.763 | 3.03× | ok |
| lambda | 0.040 | 0.121 | 3.02× | 0.155 | 3.88× | ok |
| minisat | 0.052 | 0.128 | 2.46× | 0.150 | 2.88× | ok |
| nlohmann-json | 0.302 | 0.960 | 3.18× | 1.354 | 4.48× | ok |
| pugixml | 0.212 | 0.469 | 2.21× | 0.764 | 3.60× | ok |
| pugixml-tests | 2.642 | 7.299 | 2.76× | 9.515 | 3.60× | ok |
| rapidjson | 0.093 | 0.250 | 2.69× | 0.274 | 2.95× | ok |
| re2 | 2.611 | 6.994 | 2.68× | 5.630 | 2.16× | ok |
| re2-test-re2 | 4.091 | 9.511 | 2.32× | 13.164 | 3.22× | ok |
| re2-test-search | 4.086 | 9.302 | 2.28× | 12.698 | 3.11× | ok |
| tramp3d-v4 | 0.648 | 2.419 | 3.73× | 1.491 | 2.30× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
