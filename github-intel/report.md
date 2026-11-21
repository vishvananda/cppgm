# Public benchmarks: Intel (GitHub)

Measured compiler: [`7bc2ee420`](https://github.com/vishvananda/cppgm/commit/7bc2ee42070147be1668ff16a16841c6e02b47e3) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44927958294) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: Intel(R) Xeon(R) 6975P-C.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.35× | 74 | 2.95× | 74 |
| Compile CPU, `-O0` | 3.28× | 75 | 3.20× | 75 |
| Compile CPU, `-O3` | 4.36× | 80 | 3.85× | 80 |
| Compile peak RSS, `-O0` | 1.42× | 81 | 2.15× | 81 |
| Compile peak RSS, `-O3` | 1.68× | 81 | 2.26× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.12× | 81 | 1.09× | 81 |
| Run CPU, `-O3` | 1.01× | 80 | 1.02× | 80 |
| Run instructions, `-O3` | 1.05× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.961 to 1.034; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.063 | 0.255 | 4.05× | 0.174 | 2.76× | ok |
| Adobe-C++/loop_unroll | 0.052 | 0.559 | 10.75× | 0.174 | 3.35× | ok |
| Adobe-C++/simple_types_constant_folding | 0.050 | 0.645 | 12.90× | 0.209 | 4.18× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.045 | 0.481 | 10.69× | 0.230 | 5.11× | ok |
| Adobe-C++/stepanov_abstraction | 0.034 | 0.172 | 5.06× | 0.111 | 3.26× | ok |
| Adobe-C++/stepanov_vector | 0.063 | 0.272 | 4.32× | 0.238 | 3.78× | ok |
| Bullet | 4.223 | 18.424 | 4.36× | 15.083 | 3.57× | ok |
| CLAMR | 2.208 | 9.669 | 4.38× | 7.185 | 3.25× | ok |
| CoyoteBench/almabench | 0.029 | 0.074 | 2.55× | 0.077 | 2.66× | ok |
| CoyoteBench/fftbench | 0.098 | 0.243 | 2.48× | 0.291 | 2.97× | ok |
| CoyoteBench/huffbench | 0.027 | 0.066 | 2.44× | 0.088 | 3.26× | ok |
| CoyoteBench/lpbench | 0.026 | 0.063 | 2.42× | 0.077 | 2.96× | ok |
| DOE/HACCKernels | 0.099 | 0.264 | 2.67× | 0.310 | 3.13× | ok |
| DOE/HPCCG | 0.702 | 1.663 | 2.37× | 2.353 | 3.35× | ok |
| DOE/PENNANT | 1.322 | 3.767 | 2.85× | 3.767 | 2.85× | ok |
| DOE/miniFE | 0.609 | 2.241 | 3.68× | 2.044 | 3.36× | ok |
| Misc-C++-EH/spirit | 0.393 | 2.416 | 6.15× | 1.583 | 4.03× | ok |
| Misc-C++-Large/ray | 0.106 | 0.271 | 2.56× | 0.349 | 3.29× | ok |
| Misc-C++-Large/sphereflake | 0.094 | 0.231 | 2.46× | 0.298 | 3.17× | ok |
| Misc-C++/bigfib | 0.110 | 0.361 | 3.28× | 0.424 | 3.85× | ok |
| Misc-C++/oopack_v1p8 | 0.032 | 0.092 | 2.88× | 0.099 | 3.09× | ok |
| Misc-C++/stepanov_container | 0.164 | 0.588 | 3.59× | 0.556 | 3.39× | ok |
| Misc-C++/stepanov_v1p2 | 0.030 | 0.124 | 4.13× | 0.084 | 2.80× | ok |
| PAQ8p | 0.067 | 0.461 | 6.88× | 0.212 | 3.16× | ok |
| Prolangs-C++/life | 0.004 | 0.029 | — | 0.029 | — | ok |
| Prolangs-C++/ocean | 0.010 | 0.067 | 6.70× | 0.045 | 4.50× | ok |
| Prolangs-C++/primes | 0.006 | 0.022 | — | 0.026 | — | ok |
| Shootout-C++-EH/except | 0.067 | 0.155 | 2.31× | 0.206 | 3.07× | ok |
| Shootout-C++/ackermann | 0.064 | 0.157 | 2.45× | 0.193 | 3.02× | ok |
| Shootout-C++/ary3 | 0.084 | 0.205 | 2.44× | 0.266 | 3.17× | ok |
| Shootout-C++/fibo | 0.061 | 0.143 | 2.34× | 0.217 | 3.56× | ok |
| Shootout-C++/hash | 0.090 | 0.256 | 2.84× | 0.275 | 3.06× | ok |
| Shootout-C++/hash2 | 0.110 | 0.285 | 2.59× | 0.284 | 2.58× | ok |
| Shootout-C++/heapsort | 0.078 | 0.166 | 2.13× | 0.231 | 2.96× | ok |
| Shootout-C++/lists | 0.072 | 0.190 | 2.64× | 0.226 | 3.14× | ok |
| Shootout-C++/lists1 | 0.079 | 0.208 | 2.63× | 0.236 | 2.99× | ok |
| Shootout-C++/matrix | 0.061 | 0.143 | 2.34× | 0.198 | 3.25× | ok |
| Shootout-C++/methcall | 0.060 | 0.152 | 2.53× | 0.197 | 3.28× | ok |
| Shootout-C++/moments | 0.087 | 0.252 | 2.90× | 0.251 | 2.89× | ok |
| Shootout-C++/random | 0.078 | 0.179 | 2.29× | 0.244 | 3.13× | ok |
| Shootout-C++/sieve | 0.079 | 0.222 | 2.81× | 0.254 | 3.22× | ok |
| SmallPT | 0.027 | 0.084 | 3.11× | 0.078 | 2.89× | ok |
| Stanford/Bubblesort | 0.009 | 0.026 | — | 0.031 | — | ok |
| Stanford/FloatMM | 0.008 | 0.026 | — | 0.031 | — | ok |
| Stanford/Puzzle | 0.009 | 0.032 | — | 0.033 | — | ok |
| Stanford/Treesort | 0.009 | 0.028 | — | 0.032 | — | ok |
| bg/binarytrees/2 | 0.065 | 0.178 | 2.74× | 0.207 | 3.18× | ok |
| bg/fannkuchredux/3 | 0.033 | 0.074 | 2.24× | 0.086 | 2.61× | ok |
| bg/fasta/1 | 0.048 | 0.125 | 2.60× | 0.128 | 2.67× | ok |
| bg/fasta/2 | 0.052 | 0.117 | 2.25× | 0.128 | 2.46× | ok |
| bg/fasta/3 | 0.074 | 0.184 | 2.49× | 0.228 | 3.08× | ok |
| bg/fasta/4 | 0.068 | 0.149 | 2.19× | 0.175 | 2.57× | ok |
| bg/fasta/6 | 0.130 | 0.431 | 3.32× | 0.407 | 3.13× | ok |
| bg/mandelbrot/0 | 0.149 | 0.427 | 2.87× | 0.513 | 3.44× | ok |
| bg/mandelbrot/2 | 0.080 | 0.196 | 2.45× | 0.287 | 3.59× | ok |
| bg/mandelbrot/3 | 0.088 | 0.196 | 2.23× | 0.268 | 3.05× | ok |
| bg/mandelbrot/5 | 0.042 | 0.106 | 2.52× | 0.120 | 2.86× | ok |
| bg/mandelbrot/7 | 0.045 | 0.140 | 3.11× | 0.120 | 2.67× | ok |
| bg/mandelbrot/9 | 0.043 | 0.126 | 2.93× | 0.121 | 2.81× | ok |
| bg/nbody/1 | 0.028 | 0.100 | 3.57× | 0.085 | 3.04× | ok |
| bg/nbody/2 | 0.024 | 0.067 | 2.79× | 0.075 | 3.12× | ok |
| bg/nbody/3 | 0.028 | 0.062 | 2.21× | 0.072 | 2.57× | ok |
| bg/nbody/6 | 0.027 | 0.092 | 3.41× | 0.080 | 2.96× | ok |
| bg/pidigits/4 | 0.112 | 0.284 | 2.54× | 0.389 | 3.47× | ok |
| bg/pidigits/5 | 0.067 | 0.171 | 2.55× | 0.215 | 3.21× | ok |
| bg/revcomp/1 | 0.087 | 0.227 | 2.61× | 0.267 | 3.07× | ok |
| bg/revcomp/5 | 0.074 | 0.191 | 2.58× | 0.206 | 2.78× | ok |
| bg/spectralnorm/1 | 0.107 | 0.245 | 2.29× | 0.349 | 3.26× | ok |
| box2d | 1.440 | 3.968 | 2.76× | 4.720 | 3.28× | ok |
| fmt | 0.467 | 2.407 | 5.15× | 1.990 | 4.26× | ok |
| hexxagon | 0.229 | 0.584 | 2.55× | 0.813 | 3.55× | ok |
| lambda | 0.048 | 0.294 | 6.12× | 0.203 | 4.23× | ok |
| minisat | 0.058 | 0.287 | 4.95× | 0.195 | 3.36× | ok |
| nlohmann-json | 0.424 | 1.891 | 4.46× | 1.630 | 3.84× | ok |
| pugixml | 0.271 | 1.209 | 4.46× | 0.945 | 3.49× | ok |
| pugixml-tests | 3.103 | 14.777 | 4.76× | 12.096 | 3.90× | ok |
| rapidjson | 0.118 | 0.452 | 3.83× | 0.381 | 3.23× | ok |
| re2 | 2.954 | 9.781 | 3.31× | 6.702 | 2.27× | ok |
| re2-test-re2 | 4.403 | 14.625 | 3.32× | 14.671 | 3.33× | ok |
| re2-test-search | 4.519 | 13.933 | 3.08× | 14.816 | 3.28× | ok |
| tramp3d-v4 | 0.702 | 8.297 | 11.82× | 2.618 | 3.73× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.108 | 0.806 | 7.46× | 0.569 | 5.27× | ok |
| Adobe-C++/loop_unroll | 0.503 | 5.428 | 10.79× | 4.054 | 8.06× | ok |
| Adobe-C++/simple_types_constant_folding | 0.252 | 3.035 | 12.04× | 2.532 | 10.05× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.251 | 2.156 | 8.59× | 1.852 | 7.38× | ok |
| Adobe-C++/stepanov_abstraction | 0.092 | 1.024 | 11.13× | 0.441 | 4.79× | ok |
| Adobe-C++/stepanov_vector | 0.128 | 1.189 | 9.29× | 0.636 | 4.97× | ok |
| Bullet | 6.202 | 35.293 | 5.69× | 26.987 | 4.35× | ok |
| CLAMR | 4.090 | 24.331 | 5.95× | 17.138 | 4.19× | ok |
| CoyoteBench/almabench | 0.031 | 0.172 | 5.55× | 0.115 | 3.71× | ok |
| CoyoteBench/fftbench | 0.112 | 0.382 | 3.41× | 0.399 | 3.56× | ok |
| CoyoteBench/huffbench | 0.038 | 0.204 | 5.37× | 0.143 | 3.76× | ok |
| CoyoteBench/lpbench | 0.036 | 0.170 | 4.72× | 0.183 | 5.08× | ok |
| DOE/HACCKernels | 0.110 | 0.355 | 3.23× | 0.459 | 4.17× | ok |
| DOE/HPCCG | 0.760 | 2.545 | 3.35× | 2.233 | 2.94× | ok |
| DOE/PENNANT | 1.709 | 5.942 | 3.48× | 5.317 | 3.11× | ok |
| DOE/miniFE | 0.852 | 4.159 | 4.88× | 3.687 | 4.33× | ok |
| Misc-C++-EH/spirit | 0.696 | 3.416 | 4.91× | 2.930 | 4.21× | ok |
| Misc-C++-Large/ray | 0.117 | 0.488 | 4.17× | 0.361 | 3.09× | ok |
| Misc-C++-Large/sphereflake | 0.111 | 0.724 | 6.52× | 0.371 | 3.34× | ok |
| Misc-C++/bigfib | 0.137 | 0.529 | 3.86× | 0.555 | 4.05× | ok |
| Misc-C++/oopack_v1p8 | 0.040 | 0.184 | 4.60× | 0.178 | 4.45× | ok |
| Misc-C++/stepanov_container | 0.226 | 0.939 | 4.15× | 0.931 | 4.12× | ok |
| Misc-C++/stepanov_v1p2 | 0.040 | 0.215 | 5.38× | 0.183 | 4.57× | ok |
| PAQ8p | 0.317 | 4.004 | 12.63× | 1.643 | 5.18× | ok |
| Prolangs-C++/life | 0.011 | 0.095 | 8.64× | 0.063 | 5.73× | ok |
| Prolangs-C++/ocean | 0.021 | 0.216 | 10.29× | 0.115 | 5.48× | ok |
| Prolangs-C++/primes | 0.007 | 0.036 | — | 0.036 | — | ok |
| Shootout-C++-EH/except | 0.070 | 0.190 | 2.71× | 0.218 | 3.11× | ok |
| Shootout-C++/ackermann | 0.067 | 0.197 | 2.94× | 0.203 | 3.03× | ok |
| Shootout-C++/ary3 | 0.085 | 0.244 | 2.87× | 0.267 | 3.14× | ok |
| Shootout-C++/fibo | 0.063 | 0.198 | 3.14× | 0.197 | 3.13× | ok |
| Shootout-C++/hash | 0.107 | 0.345 | 3.22× | 0.369 | 3.45× | ok |
| Shootout-C++/hash2 | 0.116 | 0.469 | 4.04× | 0.418 | 3.60× | ok |
| Shootout-C++/heapsort | 0.082 | 0.203 | 2.48× | 0.248 | 3.02× | ok |
| Shootout-C++/lists | 0.095 | 0.221 | 2.33× | 0.246 | 2.59× | ok |
| Shootout-C++/lists1 | 0.087 | 0.250 | 2.87× | 0.278 | 3.20× | ok |
| Shootout-C++/matrix | 0.068 | 0.191 | 2.81× | 0.299 | 4.40× | ok |
| Shootout-C++/methcall | 0.067 | 0.172 | 2.57× | 0.211 | 3.15× | ok |
| Shootout-C++/moments | 0.097 | 0.317 | 3.27× | 0.336 | 3.46× | ok |
| Shootout-C++/random | 0.082 | 0.210 | 2.56× | 0.253 | 3.09× | ok |
| Shootout-C++/sieve | 0.088 | 0.240 | 2.73× | 0.326 | 3.70× | ok |
| SmallPT | 0.038 | 0.291 | 7.66× | 0.164 | 4.32× | ok |
| Stanford/Bubblesort | 0.011 | 0.054 | 4.91× | 0.050 | 4.55× | ok |
| Stanford/FloatMM | 0.012 | 0.059 | 4.92× | 0.066 | 5.50× | ok |
| Stanford/Puzzle | 0.021 | 0.116 | 5.52× | 0.110 | 5.24× | ok |
| Stanford/Treesort | 0.014 | 0.084 | 6.00× | 0.054 | 3.86× | ok |
| bg/binarytrees/2 | 0.069 | 0.408 | 5.91× | 0.227 | 3.29× | ok |
| bg/fannkuchredux/3 | 0.038 | 0.123 | 3.24× | 0.116 | 3.05× | ok |
| bg/fasta/1 | 0.055 | 0.163 | 2.96× | 0.164 | 2.98× | ok |
| bg/fasta/2 | 0.058 | 0.153 | 2.64× | 0.166 | 2.86× | ok |
| bg/fasta/3 | 0.082 | 0.211 | 2.57× | 0.261 | 3.18× | ok |
| bg/fasta/4 | 0.073 | 0.181 | 2.48× | 0.220 | 3.01× | ok |
| bg/fasta/6 | 0.145 | 0.445 | 3.07× | 0.508 | 3.50× | ok |
| bg/mandelbrot/0 | 0.178 | 0.598 | 3.36× | 0.688 | 3.87× | ok |
| bg/mandelbrot/2 | 0.092 | 0.286 | 3.11× | 0.285 | 3.10× | ok |
| bg/mandelbrot/3 | 0.094 | 0.238 | 2.53× | 0.282 | 3.00× | ok |
| bg/mandelbrot/5 | 0.048 | 0.144 | 3.00× | 0.150 | 3.12× | ok |
| bg/mandelbrot/7 | 0.059 | 0.210 | 3.56× | 0.161 | 2.73× | ok |
| bg/mandelbrot/9 | 0.053 | 0.173 | 3.26× | 0.156 | 2.94× | ok |
| bg/nbody/1 | 0.043 | 0.164 | 3.81× | 0.160 | 3.72× | ok |
| bg/nbody/2 | 0.033 | 0.111 | 3.36× | 0.118 | 3.58× | ok |
| bg/nbody/3 | 0.030 | 0.113 | 3.77× | 0.097 | 3.23× | ok |
| bg/nbody/6 | 0.038 | 0.148 | 3.89× | 0.190 | 5.00× | ok |
| bg/pidigits/4 | 0.117 | 0.327 | 2.79× | 0.431 | 3.68× | ok |
| bg/pidigits/5 | 0.077 | 0.219 | 2.84× | 0.236 | 3.06× | ok |
| bg/revcomp/1 | 0.093 | 0.251 | 2.70× | 0.291 | 3.13× | ok |
| bg/revcomp/5 | 0.083 | 0.224 | 2.70× | 0.237 | 2.86× | ok |
| bg/spectralnorm/1 | 0.122 | 0.358 | 2.93× | 0.421 | 3.45× | ok |
| box2d | 1.710 | 6.742 | 3.94× | 5.122 | 3.00× | ok |
| fmt | 0.941 | 5.347 | 5.68× | 3.879 | 4.12× | ok |
| hexxagon | 0.283 | 1.041 | 3.68× | 1.064 | 3.76× | ok |
| lambda | 0.119 | 1.119 | 9.40× | 0.559 | 4.70× | ok |
| minisat | 0.133 | 0.994 | 7.47× | 0.620 | 4.66× | ok |
| nlohmann-json | 0.826 | 3.455 | 4.18× | 2.975 | 3.60× | ok |
| pugixml | 0.686 | 5.329 | 7.77× | 3.806 | 5.55× | ok |
| pugixml-tests | 4.812 | 34.649 | 7.20× | 24.800 | 5.15× | ok |
| rapidjson | 0.236 | 1.167 | 4.94× | 0.741 | 3.14× | ok |
| re2 | 2.949 | 18.227 | 6.18× | 9.955 | 3.38× | ok |
| re2-test-re2 | 5.740 | 25.975 | 4.53× | 21.562 | 3.76× | ok |
| re2-test-search | 5.690 | 23.609 | 4.15× | 20.900 | 3.67× | ok |
| tramp3d-v4 | 2.625 | 22.493 | 8.57× | 14.051 | 5.35× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.058 | 0.136 | 2.34× | 0.148 | 2.55× | ok |
| Adobe-C++/loop_unroll | 0.037 | 0.097 | 2.62× | 0.104 | 2.81× | ok |
| Adobe-C++/simple_types_constant_folding | 0.035 | 0.103 | 2.94× | 0.107 | 3.06× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.033 | 0.091 | 2.76× | 0.112 | 3.39× | ok |
| Adobe-C++/stepanov_abstraction | 0.028 | 0.066 | 2.36× | 0.086 | 3.07× | ok |
| Adobe-C++/stepanov_vector | 0.054 | 0.120 | 2.22× | 0.195 | 3.61× | ok |
| Bullet | 3.831 | 11.210 | 2.93× | 12.696 | 3.31× | ok |
| CLAMR | 2.101 | 5.298 | 2.52× | 5.821 | 2.77× | ok |
| CoyoteBench/almabench | 0.029 | 0.062 | 2.14× | 0.072 | 2.48× | ok |
| CoyoteBench/fftbench | 0.095 | 0.220 | 2.32× | 0.269 | 2.83× | ok |
| CoyoteBench/huffbench | 0.026 | 0.056 | 2.15× | 0.084 | 3.23× | ok |
| CoyoteBench/lpbench | 0.026 | 0.051 | 1.96× | 0.073 | 2.81× | ok |
| DOE/HACCKernels | 0.100 | 0.230 | 2.30× | 0.287 | 2.87× | ok |
| DOE/HPCCG | 0.678 | 1.396 | 2.06× | 2.094 | 3.09× | ok |
| DOE/PENNANT | 1.267 | 3.056 | 2.41× | 3.746 | 2.96× | ok |
| DOE/miniFE | 0.551 | 1.455 | 2.64× | 1.749 | 3.17× | ok |
| Misc-C++-EH/spirit | 0.301 | 0.813 | 2.70× | 1.036 | 3.44× | ok |
| Misc-C++-Large/ray | 0.102 | 0.232 | 2.27× | 0.317 | 3.11× | ok |
| Misc-C++-Large/sphereflake | 0.092 | 0.205 | 2.23× | 0.280 | 3.04× | ok |
| Misc-C++/bigfib | 0.102 | 0.240 | 2.35× | 0.367 | 3.60× | ok |
| Misc-C++/oopack_v1p8 | 0.029 | 0.063 | 2.17× | 0.086 | 2.97× | ok |
| Misc-C++/stepanov_container | 0.146 | 0.335 | 2.29× | 0.462 | 3.16× | ok |
| Misc-C++/stepanov_v1p2 | 0.029 | 0.065 | 2.24× | 0.073 | 2.52× | ok |
| PAQ8p | 0.043 | 0.121 | 2.81× | 0.120 | 2.79× | ok |
| Prolangs-C++/life | 0.003 | 0.009 | — | 0.022 | — | ok |
| Prolangs-C++/ocean | 0.009 | 0.023 | — | 0.030 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.015 | — | 0.024 | — | ok |
| Shootout-C++-EH/except | 0.066 | 0.152 | 2.30× | 0.194 | 2.94× | ok |
| Shootout-C++/ackermann | 0.063 | 0.159 | 2.52× | 0.186 | 2.95× | ok |
| Shootout-C++/ary3 | 0.080 | 0.187 | 2.34× | 0.247 | 3.09× | ok |
| Shootout-C++/fibo | 0.061 | 0.145 | 2.38× | 0.181 | 2.97× | ok |
| Shootout-C++/hash | 0.085 | 0.194 | 2.28× | 0.246 | 2.89× | ok |
| Shootout-C++/hash2 | 0.106 | 0.208 | 1.96× | 0.253 | 2.39× | ok |
| Shootout-C++/heapsort | 0.080 | 0.169 | 2.11× | 0.223 | 2.79× | ok |
| Shootout-C++/lists | 0.071 | 0.159 | 2.24× | 0.205 | 2.89× | ok |
| Shootout-C++/lists1 | 0.075 | 0.169 | 2.25× | 0.216 | 2.88× | ok |
| Shootout-C++/matrix | 0.061 | 0.141 | 2.31× | 0.191 | 3.13× | ok |
| Shootout-C++/methcall | 0.061 | 0.150 | 2.46× | 0.187 | 3.07× | ok |
| Shootout-C++/moments | 0.091 | 0.197 | 2.16× | 0.228 | 2.51× | ok |
| Shootout-C++/random | 0.079 | 0.189 | 2.39× | 0.242 | 3.06× | ok |
| Shootout-C++/sieve | 0.075 | 0.181 | 2.41× | 0.296 | 3.95× | ok |
| SmallPT | 0.025 | 0.054 | 2.16× | 0.071 | 2.84× | ok |
| Stanford/Bubblesort | 0.009 | 0.023 | — | 0.031 | — | ok |
| Stanford/FloatMM | 0.008 | 0.022 | — | 0.029 | — | ok |
| Stanford/Puzzle | 0.009 | 0.023 | — | 0.030 | — | ok |
| Stanford/Treesort | 0.009 | 0.023 | — | 0.031 | — | ok |
| bg/binarytrees/2 | 0.063 | 0.165 | 2.62× | 0.198 | 3.14× | ok |
| bg/fannkuchredux/3 | 0.033 | 0.063 | 1.91× | 0.081 | 2.45× | ok |
| bg/fasta/1 | 0.046 | 0.100 | 2.17× | 0.117 | 2.54× | ok |
| bg/fasta/2 | 0.050 | 0.092 | 1.84× | 0.115 | 2.30× | ok |
| bg/fasta/3 | 0.073 | 0.173 | 2.37× | 0.220 | 3.01× | ok |
| bg/fasta/4 | 0.067 | 0.143 | 2.13× | 0.170 | 2.54× | ok |
| bg/fasta/6 | 0.136 | 0.274 | 2.01× | 0.354 | 2.60× | ok |
| bg/mandelbrot/0 | 0.130 | 0.331 | 2.55× | 0.383 | 2.95× | ok |
| bg/mandelbrot/2 | 0.076 | 0.184 | 2.42× | 0.295 | 3.88× | ok |
| bg/mandelbrot/3 | 0.087 | 0.188 | 2.16× | 0.258 | 2.97× | ok |
| bg/mandelbrot/5 | 0.040 | 0.087 | 2.17× | 0.111 | 2.77× | ok |
| bg/mandelbrot/7 | 0.042 | 0.101 | 2.40× | 0.107 | 2.55× | ok |
| bg/mandelbrot/9 | 0.041 | 0.086 | 2.10× | 0.099 | 2.41× | ok |
| bg/nbody/1 | 0.026 | 0.058 | 2.23× | 0.074 | 2.85× | ok |
| bg/nbody/2 | 0.023 | 0.059 | 2.57× | 0.070 | 3.04× | ok |
| bg/nbody/3 | 0.028 | 0.052 | 1.86× | 0.068 | 2.43× | ok |
| bg/nbody/6 | 0.026 | 0.053 | 2.04× | 0.068 | 2.62× | ok |
| bg/pidigits/4 | 0.110 | 0.254 | 2.31× | 0.321 | 2.92× | ok |
| bg/pidigits/5 | 0.065 | 0.163 | 2.51× | 0.202 | 3.11× | ok |
| bg/revcomp/1 | 0.083 | 0.172 | 2.07× | 0.199 | 2.40× | ok |
| bg/revcomp/5 | 0.072 | 0.154 | 2.14× | 0.187 | 2.60× | ok |
| bg/spectralnorm/1 | 0.109 | 0.223 | 2.05× | 0.324 | 2.97× | ok |
| box2d | 1.286 | 2.653 | 2.06× | 2.985 | 2.32× | ok |
| fmt | 0.394 | 1.055 | 2.68× | 1.524 | 3.87× | ok |
| hexxagon | 0.234 | 0.479 | 2.05× | 0.757 | 3.24× | ok |
| lambda | 0.038 | 0.118 | 3.11× | 0.147 | 3.87× | ok |
| minisat | 0.049 | 0.125 | 2.55× | 0.145 | 2.96× | ok |
| nlohmann-json | 0.313 | 0.846 | 2.70× | 1.324 | 4.23× | ok |
| pugixml | 0.201 | 0.466 | 2.32× | 0.702 | 3.49× | ok |
| pugixml-tests | 2.800 | 7.137 | 2.55× | 9.556 | 3.41× | ok |
| rapidjson | 0.091 | 0.233 | 2.56× | 0.295 | 3.24× | ok |
| re2 | 2.753 | 6.565 | 2.38× | 5.658 | 2.06× | ok |
| re2-test-re2 | 3.923 | 9.813 | 2.50× | 12.737 | 3.25× | ok |
| re2-test-search | 4.044 | 9.254 | 2.29× | 12.840 | 3.18× | ok |
| tramp3d-v4 | 0.441 | 2.362 | 5.36× | 1.508 | 3.42× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
