# Public benchmarks: Intel (GitHub)

Measured compiler: [`fc7c4523c`](https://github.com/vishvananda/cppgm/commit/fc7c4523cba2e80b1a19ce5f207866232b207872) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/46032707836) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: Intel(R) Xeon(R) 6975P-C.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.28× | 74 | 2.93× | 74 |
| Compile CPU, `-O0` | 3.16× | 75 | 3.09× | 75 |
| Compile CPU, `-O3` | 4.35× | 80 | 3.83× | 80 |
| Compile peak RSS, `-O0` | 1.41× | 81 | 2.09× | 81 |
| Compile peak RSS, `-O3` | 1.68× | 81 | 2.18× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.11× | 81 | 1.07× | 81 |
| Run CPU, `-O3` | 1.01× | 80 | 1.02× | 80 |
| Run instructions, `-O3` | 1.05× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.953 to 1.066; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.062 | 0.250 | 4.03× | 0.172 | 2.77× | ok |
| Adobe-C++/loop_unroll | 0.050 | 0.553 | 11.06× | 0.166 | 3.32× | ok |
| Adobe-C++/simple_types_constant_folding | 0.058 | 0.644 | 11.10× | 0.210 | 3.62× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.049 | 0.475 | 9.69× | 0.190 | 3.88× | ok |
| Adobe-C++/stepanov_abstraction | 0.040 | 0.174 | 4.35× | 0.113 | 2.83× | ok |
| Adobe-C++/stepanov_vector | 0.075 | 0.267 | 3.56× | 0.234 | 3.12× | ok |
| Bullet | 4.774 | 16.300 | 3.41× | 15.365 | 3.22× | ok |
| CLAMR | 2.492 | 8.603 | 3.45× | 7.168 | 2.88× | ok |
| CoyoteBench/almabench | 0.031 | 0.076 | 2.45× | 0.082 | 2.65× | ok |
| CoyoteBench/fftbench | 0.099 | 0.250 | 2.53× | 0.309 | 3.12× | ok |
| CoyoteBench/huffbench | 0.026 | 0.066 | 2.54× | 0.073 | 2.81× | ok |
| CoyoteBench/lpbench | 0.027 | 0.072 | 2.67× | 0.073 | 2.70× | ok |
| DOE/HACCKernels | 0.102 | 0.261 | 2.56× | 0.318 | 3.12× | ok |
| DOE/HPCCG | 0.648 | 1.750 | 2.70× | 2.247 | 3.47× | ok |
| DOE/PENNANT | 1.473 | 3.759 | 2.55× | 4.006 | 2.72× | ok |
| DOE/miniFE | 0.560 | 1.915 | 3.42× | 1.857 | 3.32× | ok |
| Misc-C++-EH/spirit | 0.439 | 2.790 | 6.36× | 1.919 | 4.37× | ok |
| Misc-C++-Large/ray | 0.095 | 0.241 | 2.54× | 0.281 | 2.96× | ok |
| Misc-C++-Large/sphereflake | 0.082 | 0.201 | 2.45× | 0.262 | 3.20× | ok |
| Misc-C++/bigfib | 0.116 | 0.394 | 3.40× | 0.390 | 3.36× | ok |
| Misc-C++/oopack_v1p8 | 0.028 | 0.083 | 2.96× | 0.093 | 3.32× | ok |
| Misc-C++/stepanov_container | 0.153 | 0.571 | 3.73× | 0.434 | 2.84× | ok |
| Misc-C++/stepanov_v1p2 | 0.029 | 0.115 | 3.97× | 0.087 | 3.00× | ok |
| PAQ8p | 0.063 | 0.410 | 6.51× | 0.240 | 3.81× | ok |
| Prolangs-C++/life | 0.004 | 0.032 | — | 0.028 | — | ok |
| Prolangs-C++/ocean | 0.010 | 0.058 | 5.80× | 0.040 | 4.00× | ok |
| Prolangs-C++/primes | 0.005 | 0.021 | — | 0.024 | — | ok |
| Shootout-C++-EH/except | 0.069 | 0.164 | 2.38× | 0.231 | 3.35× | ok |
| Shootout-C++/ackermann | 0.062 | 0.142 | 2.29× | 0.190 | 3.06× | ok |
| Shootout-C++/ary3 | 0.078 | 0.204 | 2.62× | 0.228 | 2.92× | ok |
| Shootout-C++/fibo | 0.061 | 0.143 | 2.34× | 0.286 | 4.69× | ok |
| Shootout-C++/hash | 0.100 | 0.273 | 2.73× | 0.298 | 2.98× | ok |
| Shootout-C++/hash2 | 0.108 | 0.305 | 2.82× | 0.291 | 2.69× | ok |
| Shootout-C++/heapsort | 0.076 | 0.194 | 2.55× | 0.229 | 3.01× | ok |
| Shootout-C++/lists | 0.087 | 0.191 | 2.20× | 0.216 | 2.48× | ok |
| Shootout-C++/lists1 | 0.082 | 0.215 | 2.62× | 0.259 | 3.16× | ok |
| Shootout-C++/matrix | 0.065 | 0.155 | 2.38× | 0.194 | 2.98× | ok |
| Shootout-C++/methcall | 0.066 | 0.142 | 2.15× | 0.191 | 2.89× | ok |
| Shootout-C++/moments | 0.095 | 0.247 | 2.60× | 0.254 | 2.67× | ok |
| Shootout-C++/random | 0.082 | 0.171 | 2.09× | 0.231 | 2.82× | ok |
| Shootout-C++/sieve | 0.083 | 0.222 | 2.67× | 0.283 | 3.41× | ok |
| SmallPT | 0.026 | 0.084 | 3.23× | 0.079 | 3.04× | ok |
| Stanford/Bubblesort | 0.009 | 0.025 | — | 0.029 | — | ok |
| Stanford/FloatMM | 0.008 | 0.027 | — | 0.029 | — | ok |
| Stanford/Puzzle | 0.009 | 0.033 | — | 0.035 | — | ok |
| Stanford/Treesort | 0.009 | 0.030 | — | 0.032 | — | ok |
| bg/binarytrees/2 | 0.071 | 0.156 | 2.20× | 0.207 | 2.92× | ok |
| bg/fannkuchredux/3 | 0.033 | 0.073 | 2.21× | 0.087 | 2.64× | ok |
| bg/fasta/1 | 0.052 | 0.127 | 2.44× | 0.130 | 2.50× | ok |
| bg/fasta/2 | 0.051 | 0.119 | 2.33× | 0.139 | 2.73× | ok |
| bg/fasta/3 | 0.087 | 0.171 | 1.97× | 0.236 | 2.71× | ok |
| bg/fasta/4 | 0.084 | 0.162 | 1.93× | 0.173 | 2.06× | ok |
| bg/fasta/6 | 0.143 | 0.404 | 2.83× | 0.464 | 3.24× | ok |
| bg/mandelbrot/0 | 0.148 | 0.439 | 2.97× | 0.461 | 3.11× | ok |
| bg/mandelbrot/2 | 0.081 | 0.216 | 2.67× | 0.250 | 3.09× | ok |
| bg/mandelbrot/3 | 0.091 | 0.195 | 2.14× | 0.260 | 2.86× | ok |
| bg/mandelbrot/5 | 0.044 | 0.110 | 2.50× | 0.123 | 2.80× | ok |
| bg/mandelbrot/7 | 0.044 | 0.118 | 2.68× | 0.131 | 2.98× | ok |
| bg/mandelbrot/9 | 0.042 | 0.109 | 2.60× | 0.140 | 3.33× | ok |
| bg/nbody/1 | 0.026 | 0.100 | 3.85× | 0.082 | 3.15× | ok |
| bg/nbody/2 | 0.025 | 0.064 | 2.56× | 0.076 | 3.04× | ok |
| bg/nbody/3 | 0.027 | 0.066 | 2.44× | 0.074 | 2.74× | ok |
| bg/nbody/6 | 0.028 | 0.113 | 4.04× | 0.083 | 2.96× | ok |
| bg/pidigits/4 | 0.113 | 0.293 | 2.59× | 0.371 | 3.28× | ok |
| bg/pidigits/5 | 0.067 | 0.164 | 2.45× | 0.222 | 3.31× | ok |
| bg/revcomp/1 | 0.084 | 0.232 | 2.76× | 0.242 | 2.88× | ok |
| bg/revcomp/5 | 0.081 | 0.214 | 2.64× | 0.213 | 2.63× | ok |
| bg/spectralnorm/1 | 0.111 | 0.249 | 2.24× | 0.372 | 3.35× | ok |
| box2d | 1.446 | 4.173 | 2.89× | 3.897 | 2.70× | ok |
| fmt | 0.532 | 2.365 | 4.45× | 1.991 | 3.74× | ok |
| hexxagon | 0.231 | 0.555 | 2.40× | 0.740 | 3.20× | ok |
| lambda | 0.048 | 0.275 | 5.73× | 0.197 | 4.10× | ok |
| minisat | 0.067 | 0.264 | 3.94× | 0.224 | 3.34× | ok |
| nlohmann-json | 0.392 | 1.776 | 4.53× | 1.827 | 4.66× | ok |
| pugixml | 0.279 | 1.373 | 4.92× | 0.944 | 3.38× | ok |
| pugixml-tests | 3.151 | 14.861 | 4.72× | 11.134 | 3.53× | ok |
| rapidjson | 0.123 | 0.445 | 3.62× | 0.386 | 3.14× | ok |
| re2 | 2.603 | 10.648 | 4.09× | 6.489 | 2.49× | ok |
| re2-test-re2 | 4.484 | 14.435 | 3.22× | 15.274 | 3.41× | ok |
| re2-test-search | 4.411 | 13.855 | 3.14× | 14.594 | 3.31× | ok |
| tramp3d-v4 | 1.013 | 6.504 | 6.42× | 2.598 | 2.56× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.116 | 0.876 | 7.55× | 0.566 | 4.88× | ok |
| Adobe-C++/loop_unroll | 0.433 | 5.448 | 12.58× | 4.171 | 9.63× | ok |
| Adobe-C++/simple_types_constant_folding | 0.236 | 3.117 | 13.21× | 2.401 | 10.17× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.226 | 2.334 | 10.33× | 1.848 | 8.18× | ok |
| Adobe-C++/stepanov_abstraction | 0.092 | 0.956 | 10.39× | 0.447 | 4.86× | ok |
| Adobe-C++/stepanov_vector | 0.129 | 1.426 | 11.05× | 0.609 | 4.72× | ok |
| Bullet | 6.086 | 35.680 | 5.86× | 26.644 | 4.38× | ok |
| CLAMR | 4.126 | 22.503 | 5.45× | 17.412 | 4.22× | ok |
| CoyoteBench/almabench | 0.034 | 0.173 | 5.09× | 0.113 | 3.32× | ok |
| CoyoteBench/fftbench | 0.119 | 0.411 | 3.45× | 0.421 | 3.54× | ok |
| CoyoteBench/huffbench | 0.035 | 0.193 | 5.51× | 0.146 | 4.17× | ok |
| CoyoteBench/lpbench | 0.036 | 0.170 | 4.72× | 0.172 | 4.78× | ok |
| DOE/HACCKernels | 0.115 | 0.359 | 3.12× | 0.369 | 3.21× | ok |
| DOE/HPCCG | 0.695 | 2.536 | 3.65× | 2.594 | 3.73× | ok |
| DOE/PENNANT | 1.720 | 5.817 | 3.38× | 5.773 | 3.36× | ok |
| DOE/miniFE | 0.802 | 3.893 | 4.85× | 3.044 | 3.80× | ok |
| Misc-C++-EH/spirit | 0.616 | 3.764 | 6.11× | 2.871 | 4.66× | ok |
| Misc-C++-Large/ray | 0.100 | 0.439 | 4.39× | 0.406 | 4.06× | ok |
| Misc-C++-Large/sphereflake | 0.104 | 0.695 | 6.68× | 0.317 | 3.05× | ok |
| Misc-C++/bigfib | 0.140 | 0.574 | 4.10× | 0.457 | 3.26× | ok |
| Misc-C++/oopack_v1p8 | 0.035 | 0.163 | 4.66× | 0.172 | 4.91× | ok |
| Misc-C++/stepanov_container | 0.196 | 0.897 | 4.58× | 0.782 | 3.99× | ok |
| Misc-C++/stepanov_v1p2 | 0.041 | 0.205 | 5.00× | 0.175 | 4.27× | ok |
| PAQ8p | 0.314 | 3.853 | 12.27× | 1.694 | 5.39× | ok |
| Prolangs-C++/life | 0.010 | 0.104 | 10.40× | 0.068 | 6.80× | ok |
| Prolangs-C++/ocean | 0.020 | 0.187 | 9.35× | 0.105 | 5.25× | ok |
| Prolangs-C++/primes | 0.007 | 0.032 | — | 0.032 | — | ok |
| Shootout-C++-EH/except | 0.074 | 0.188 | 2.54× | 0.253 | 3.42× | ok |
| Shootout-C++/ackermann | 0.066 | 0.178 | 2.70× | 0.203 | 3.08× | ok |
| Shootout-C++/ary3 | 0.088 | 0.243 | 2.76× | 0.281 | 3.19× | ok |
| Shootout-C++/fibo | 0.064 | 0.188 | 2.94× | 0.207 | 3.23× | ok |
| Shootout-C++/hash | 0.115 | 0.369 | 3.21× | 0.395 | 3.43× | ok |
| Shootout-C++/hash2 | 0.143 | 0.460 | 3.22× | 0.421 | 2.94× | ok |
| Shootout-C++/heapsort | 0.082 | 0.213 | 2.60× | 0.245 | 2.99× | ok |
| Shootout-C++/lists | 0.086 | 0.261 | 3.03× | 0.254 | 2.95× | ok |
| Shootout-C++/lists1 | 0.092 | 0.257 | 2.79× | 0.304 | 3.30× | ok |
| Shootout-C++/matrix | 0.073 | 0.194 | 2.66× | 0.291 | 3.99× | ok |
| Shootout-C++/methcall | 0.074 | 0.184 | 2.49× | 0.210 | 2.84× | ok |
| Shootout-C++/moments | 0.106 | 0.312 | 2.94× | 0.315 | 2.97× | ok |
| Shootout-C++/random | 0.083 | 0.198 | 2.39× | 0.239 | 2.88× | ok |
| Shootout-C++/sieve | 0.095 | 0.243 | 2.56× | 0.305 | 3.21× | ok |
| SmallPT | 0.037 | 0.281 | 7.59× | 0.154 | 4.16× | ok |
| Stanford/Bubblesort | 0.011 | 0.051 | 4.64× | 0.047 | 4.27× | ok |
| Stanford/FloatMM | 0.012 | 0.059 | 4.92× | 0.064 | 5.33× | ok |
| Stanford/Puzzle | 0.021 | 0.116 | 5.52× | 0.115 | 5.48× | ok |
| Stanford/Treesort | 0.015 | 0.084 | 5.60× | 0.053 | 3.53× | ok |
| bg/binarytrees/2 | 0.077 | 0.411 | 5.34× | 0.215 | 2.79× | ok |
| bg/fannkuchredux/3 | 0.038 | 0.121 | 3.18× | 0.119 | 3.13× | ok |
| bg/fasta/1 | 0.059 | 0.167 | 2.83× | 0.168 | 2.85× | ok |
| bg/fasta/2 | 0.053 | 0.156 | 2.94× | 0.173 | 3.26× | ok |
| bg/fasta/3 | 0.079 | 0.232 | 2.94× | 0.306 | 3.87× | ok |
| bg/fasta/4 | 0.086 | 0.166 | 1.93× | 0.234 | 2.72× | ok |
| bg/fasta/6 | 0.142 | 0.460 | 3.24× | 0.533 | 3.75× | ok |
| bg/mandelbrot/0 | 0.171 | 0.657 | 3.84× | 0.665 | 3.89× | ok |
| bg/mandelbrot/2 | 0.094 | 0.253 | 2.69× | 0.283 | 3.01× | ok |
| bg/mandelbrot/3 | 0.095 | 0.219 | 2.31× | 0.276 | 2.91× | ok |
| bg/mandelbrot/5 | 0.054 | 0.143 | 2.65× | 0.150 | 2.78× | ok |
| bg/mandelbrot/7 | 0.059 | 0.180 | 3.05× | 0.166 | 2.81× | ok |
| bg/mandelbrot/9 | 0.053 | 0.173 | 3.26× | 0.167 | 3.15× | ok |
| bg/nbody/1 | 0.038 | 0.151 | 3.97× | 0.168 | 4.42× | ok |
| bg/nbody/2 | 0.032 | 0.127 | 3.97× | 0.122 | 3.81× | ok |
| bg/nbody/3 | 0.031 | 0.117 | 3.77× | 0.098 | 3.16× | ok |
| bg/nbody/6 | 0.041 | 0.166 | 4.05× | 0.192 | 4.68× | ok |
| bg/pidigits/4 | 0.118 | 0.335 | 2.84× | 0.415 | 3.52× | ok |
| bg/pidigits/5 | 0.082 | 0.217 | 2.65× | 0.268 | 3.27× | ok |
| bg/revcomp/1 | 0.087 | 0.269 | 3.09× | 0.282 | 3.24× | ok |
| bg/revcomp/5 | 0.085 | 0.223 | 2.62× | 0.243 | 2.86× | ok |
| bg/spectralnorm/1 | 0.119 | 0.339 | 2.85× | 0.341 | 2.87× | ok |
| box2d | 1.726 | 6.902 | 4.00× | 6.650 | 3.85× | ok |
| fmt | 1.004 | 5.571 | 5.55× | 4.102 | 4.09× | ok |
| hexxagon | 0.288 | 1.070 | 3.72× | 0.990 | 3.44× | ok |
| lambda | 0.115 | 1.032 | 8.97× | 0.526 | 4.57× | ok |
| minisat | 0.143 | 0.926 | 6.48× | 0.648 | 4.53× | ok |
| nlohmann-json | 0.771 | 3.359 | 4.36× | 2.960 | 3.84× | ok |
| pugixml | 0.718 | 5.752 | 8.01× | 3.742 | 5.21× | ok |
| pugixml-tests | 4.934 | 34.639 | 7.02× | 24.186 | 4.90× | ok |
| rapidjson | 0.236 | 1.224 | 5.19× | 0.737 | 3.12× | ok |
| re2 | 2.913 | 18.102 | 6.21× | 9.771 | 3.35× | ok |
| re2-test-re2 | 5.645 | 25.860 | 4.58× | 22.016 | 3.90× | ok |
| re2-test-search | 5.643 | 23.461 | 4.16× | 20.382 | 3.61× | ok |
| tramp3d-v4 | 3.119 | 22.795 | 7.31× | 13.750 | 4.41× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.057 | 0.134 | 2.35× | 0.147 | 2.58× | ok |
| Adobe-C++/loop_unroll | 0.035 | 0.094 | 2.69× | 0.103 | 2.94× | ok |
| Adobe-C++/simple_types_constant_folding | 0.040 | 0.102 | 2.55× | 0.106 | 2.65× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.038 | 0.091 | 2.39× | 0.099 | 2.61× | ok |
| Adobe-C++/stepanov_abstraction | 0.034 | 0.067 | 1.97× | 0.088 | 2.59× | ok |
| Adobe-C++/stepanov_vector | 0.066 | 0.118 | 1.79× | 0.196 | 2.97× | ok |
| Bullet | 4.177 | 9.695 | 2.32× | 12.265 | 2.94× | ok |
| CLAMR | 2.159 | 4.443 | 2.06× | 5.776 | 2.68× | ok |
| CoyoteBench/almabench | 0.031 | 0.062 | 2.00× | 0.076 | 2.45× | ok |
| CoyoteBench/fftbench | 0.096 | 0.221 | 2.30× | 0.286 | 2.98× | ok |
| CoyoteBench/huffbench | 0.026 | 0.057 | 2.19× | 0.071 | 2.73× | ok |
| CoyoteBench/lpbench | 0.027 | 0.057 | 2.11× | 0.068 | 2.52× | ok |
| DOE/HACCKernels | 0.098 | 0.212 | 2.16× | 0.297 | 3.03× | ok |
| DOE/HPCCG | 0.621 | 1.389 | 2.24× | 2.072 | 3.34× | ok |
| DOE/PENNANT | 1.337 | 2.809 | 2.10× | 3.543 | 2.65× | ok |
| DOE/miniFE | 0.515 | 1.224 | 2.38× | 1.566 | 3.04× | ok |
| Misc-C++-EH/spirit | 0.308 | 0.946 | 3.07× | 1.302 | 4.23× | ok |
| Misc-C++-Large/ray | 0.091 | 0.197 | 2.16× | 0.254 | 2.79× | ok |
| Misc-C++-Large/sphereflake | 0.080 | 0.176 | 2.20× | 0.243 | 3.04× | ok |
| Misc-C++/bigfib | 0.101 | 0.257 | 2.54× | 0.329 | 3.26× | ok |
| Misc-C++/oopack_v1p8 | 0.026 | 0.058 | 2.23× | 0.082 | 3.15× | ok |
| Misc-C++/stepanov_container | 0.150 | 0.327 | 2.18× | 0.370 | 2.47× | ok |
| Misc-C++/stepanov_v1p2 | 0.025 | 0.062 | 2.48× | 0.073 | 2.92× | ok |
| PAQ8p | 0.042 | 0.105 | 2.50× | 0.137 | 3.26× | ok |
| Prolangs-C++/life | 0.003 | 0.009 | — | 0.021 | — | ok |
| Prolangs-C++/ocean | 0.008 | 0.020 | — | 0.028 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.014 | — | 0.022 | — | ok |
| Shootout-C++-EH/except | 0.071 | 0.165 | 2.32× | 0.217 | 3.06× | ok |
| Shootout-C++/ackermann | 0.063 | 0.145 | 2.30× | 0.184 | 2.92× | ok |
| Shootout-C++/ary3 | 0.078 | 0.186 | 2.38× | 0.258 | 3.31× | ok |
| Shootout-C++/fibo | 0.061 | 0.145 | 2.38× | 0.354 | 5.80× | ok |
| Shootout-C++/hash | 0.093 | 0.206 | 2.22× | 0.265 | 2.85× | ok |
| Shootout-C++/hash2 | 0.101 | 0.223 | 2.21× | 0.267 | 2.64× | ok |
| Shootout-C++/heapsort | 0.078 | 0.202 | 2.59× | 0.220 | 2.82× | ok |
| Shootout-C++/lists | 0.082 | 0.159 | 1.94× | 0.198 | 2.41× | ok |
| Shootout-C++/lists1 | 0.079 | 0.177 | 2.24× | 0.235 | 2.97× | ok |
| Shootout-C++/matrix | 0.064 | 0.153 | 2.39× | 0.183 | 2.86× | ok |
| Shootout-C++/methcall | 0.065 | 0.141 | 2.17× | 0.183 | 2.82× | ok |
| Shootout-C++/moments | 0.089 | 0.194 | 2.18× | 0.231 | 2.60× | ok |
| Shootout-C++/random | 0.082 | 0.173 | 2.11× | 0.220 | 2.68× | ok |
| Shootout-C++/sieve | 0.079 | 0.180 | 2.28× | 0.266 | 3.37× | ok |
| SmallPT | 0.025 | 0.054 | 2.16× | 0.071 | 2.84× | ok |
| Stanford/Bubblesort | 0.009 | 0.022 | — | 0.029 | — | ok |
| Stanford/FloatMM | 0.009 | 0.021 | — | 0.028 | — | ok |
| Stanford/Puzzle | 0.009 | 0.022 | — | 0.032 | — | ok |
| Stanford/Treesort | 0.009 | 0.024 | — | 0.030 | — | ok |
| bg/binarytrees/2 | 0.066 | 0.154 | 2.33× | 0.200 | 3.03× | ok |
| bg/fannkuchredux/3 | 0.032 | 0.062 | 1.94× | 0.083 | 2.59× | ok |
| bg/fasta/1 | 0.049 | 0.101 | 2.06× | 0.121 | 2.47× | ok |
| bg/fasta/2 | 0.047 | 0.093 | 1.98× | 0.129 | 2.74× | ok |
| bg/fasta/3 | 0.077 | 0.159 | 2.06× | 0.229 | 2.97× | ok |
| bg/fasta/4 | 0.079 | 0.141 | 1.78× | 0.165 | 2.09× | ok |
| bg/fasta/6 | 0.117 | 0.273 | 2.33× | 0.384 | 3.28× | ok |
| bg/mandelbrot/0 | 0.133 | 0.300 | 2.26× | 0.400 | 3.01× | ok |
| bg/mandelbrot/2 | 0.082 | 0.180 | 2.20× | 0.233 | 2.84× | ok |
| bg/mandelbrot/3 | 0.088 | 0.218 | 2.48× | 0.247 | 2.81× | ok |
| bg/mandelbrot/5 | 0.042 | 0.089 | 2.12× | 0.112 | 2.67× | ok |
| bg/mandelbrot/7 | 0.042 | 0.087 | 2.07× | 0.116 | 2.76× | ok |
| bg/mandelbrot/9 | 0.040 | 0.079 | 1.97× | 0.112 | 2.80× | ok |
| bg/nbody/1 | 0.025 | 0.059 | 2.36× | 0.081 | 3.24× | ok |
| bg/nbody/2 | 0.025 | 0.053 | 2.12× | 0.072 | 2.88× | ok |
| bg/nbody/3 | 0.026 | 0.053 | 2.04× | 0.069 | 2.65× | ok |
| bg/nbody/6 | 0.027 | 0.064 | 2.37× | 0.069 | 2.56× | ok |
| bg/pidigits/4 | 0.111 | 0.266 | 2.40× | 0.357 | 3.22× | ok |
| bg/pidigits/5 | 0.066 | 0.177 | 2.68× | 0.205 | 3.11× | ok |
| bg/revcomp/1 | 0.079 | 0.170 | 2.15× | 0.214 | 2.71× | ok |
| bg/revcomp/5 | 0.077 | 0.156 | 2.03× | 0.216 | 2.81× | ok |
| bg/spectralnorm/1 | 0.102 | 0.225 | 2.21× | 0.342 | 3.35× | ok |
| box2d | 1.387 | 2.911 | 2.10× | 3.666 | 2.64× | ok |
| fmt | 0.442 | 1.087 | 2.46× | 1.610 | 3.64× | ok |
| hexxagon | 0.224 | 0.497 | 2.22× | 0.693 | 3.09× | ok |
| lambda | 0.037 | 0.110 | 2.97× | 0.142 | 3.84× | ok |
| minisat | 0.056 | 0.115 | 2.05× | 0.164 | 2.93× | ok |
| nlohmann-json | 0.306 | 0.884 | 2.89× | 1.351 | 4.42× | ok |
| pugixml | 0.209 | 0.519 | 2.48× | 0.691 | 3.31× | ok |
| pugixml-tests | 2.808 | 7.538 | 2.68× | 9.414 | 3.35× | ok |
| rapidjson | 0.093 | 0.238 | 2.56× | 0.309 | 3.32× | ok |
| re2 | 2.680 | 6.768 | 2.53× | 5.498 | 2.05× | ok |
| re2-test-re2 | 4.077 | 9.612 | 2.36× | 12.908 | 3.17× | ok |
| re2-test-search | 3.939 | 9.431 | 2.39× | 12.547 | 3.19× | ok |
| tramp3d-v4 | 0.621 | 2.423 | 3.90× | 1.530 | 2.46× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
