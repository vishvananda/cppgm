# Public benchmarks: Intel (GitHub)

Measured compiler: [`6d363dd28`](https://github.com/vishvananda/cppgm/commit/6d363dd28d9982fdbb0539bf97dab4f17cfbe369) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44686728157) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: Intel(R) Xeon(R) 6975P-C.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.31× | 74 | 2.96× | 74 |
| Compile CPU, `-O0` | 3.19× | 74 | 3.15× | 74 |
| Compile CPU, `-O3` | 4.30× | 80 | 3.86× | 80 |
| Compile peak RSS, `-O0` | 1.44× | 81 | 2.18× | 81 |
| Compile peak RSS, `-O3` | 1.70× | 81 | 2.29× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.12× | 81 | 1.08× | 81 |
| Run CPU, `-O3` | 1.00× | 80 | 1.01× | 80 |
| Run instructions, `-O3` | 1.00× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.950 to 1.026; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.063 | 0.251 | 3.98× | 0.212 | 3.37× | ok |
| Adobe-C++/loop_unroll | 0.062 | 0.562 | 9.06× | 0.170 | 2.74× | ok |
| Adobe-C++/simple_types_constant_folding | 0.051 | 0.663 | 13.00× | 0.207 | 4.06× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.044 | 0.475 | 10.80× | 0.179 | 4.07× | ok |
| Adobe-C++/stepanov_abstraction | 0.039 | 0.171 | 4.38× | 0.107 | 2.74× | ok |
| Adobe-C++/stepanov_vector | 0.075 | 0.304 | 4.05× | 0.190 | 2.53× | ok |
| Bullet | 4.708 | 16.830 | 3.57× | 16.609 | 3.53× | ok |
| CLAMR | 2.424 | 8.459 | 3.49× | 7.316 | 3.02× | ok |
| CoyoteBench/almabench | 0.026 | 0.064 | 2.46× | 0.076 | 2.92× | ok |
| CoyoteBench/fftbench | 0.098 | 0.244 | 2.49× | 0.342 | 3.49× | ok |
| CoyoteBench/huffbench | 0.023 | 0.060 | 2.61× | 0.079 | 3.43× | ok |
| CoyoteBench/lpbench | 0.029 | 0.072 | 2.48× | 0.086 | 2.97× | ok |
| DOE/HACCKernels | 0.106 | 0.287 | 2.71× | 0.310 | 2.92× | ok |
| DOE/HPCCG | 0.664 | 1.480 | 2.23× | 2.054 | 3.09× | ok |
| DOE/PENNANT | 1.345 | 3.649 | 2.71× | 3.907 | 2.90× | ok |
| DOE/miniFE | 0.604 | 2.072 | 3.43× | 2.156 | 3.57× | ok |
| Misc-C++-EH/spirit | 0.365 | 2.281 | 6.25× | 1.955 | 5.36× | ok |
| Misc-C++-Large/ray | 0.093 | 0.279 | 3.00× | 0.277 | 2.98× | ok |
| Misc-C++-Large/sphereflake | 0.080 | 0.199 | 2.49× | 0.267 | 3.34× | ok |
| Misc-C++/bigfib | 0.102 | 0.336 | 3.29× | 0.332 | 3.25× | ok |
| Misc-C++/oopack_v1p8 | 0.029 | 0.083 | 2.86× | 0.085 | 2.93× | ok |
| Misc-C++/stepanov_container | 0.141 | 0.567 | 4.02× | 0.444 | 3.15× | ok |
| Misc-C++/stepanov_v1p2 | 0.031 | 0.106 | 3.42× | 0.084 | 2.71× | ok |
| PAQ8p | 0.063 | 0.440 | 6.98× | 0.207 | 3.29× | ok |
| Prolangs-C++/life | 0.004 | 0.031 | — | 0.028 | — | ok |
| Prolangs-C++/ocean | 0.009 | 0.058 | — | 0.045 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.022 | — | 0.026 | — | ok |
| Shootout-C++-EH/except | 0.067 | 0.152 | 2.27× | 0.200 | 2.99× | ok |
| Shootout-C++/ackermann | 0.062 | 0.155 | 2.50× | 0.199 | 3.21× | ok |
| Shootout-C++/ary3 | 0.078 | 0.184 | 2.36× | 0.286 | 3.67× | ok |
| Shootout-C++/fibo | 0.064 | 0.146 | 2.28× | 0.188 | 2.94× | ok |
| Shootout-C++/hash | 0.090 | 0.263 | 2.92× | 0.281 | 3.12× | ok |
| Shootout-C++/hash2 | 0.103 | 0.307 | 2.98× | 0.364 | 3.53× | ok |
| Shootout-C++/heapsort | 0.076 | 0.168 | 2.21× | 0.223 | 2.93× | ok |
| Shootout-C++/lists | 0.077 | 0.192 | 2.49× | 0.222 | 2.88× | ok |
| Shootout-C++/lists1 | 0.079 | 0.207 | 2.62× | 0.246 | 3.11× | ok |
| Shootout-C++/matrix | 0.063 | 0.143 | 2.27× | 0.199 | 3.16× | ok |
| Shootout-C++/methcall | 0.060 | 0.142 | 2.37× | 0.197 | 3.28× | ok |
| Shootout-C++/moments | 0.090 | 0.240 | 2.67× | 0.244 | 2.71× | ok |
| Shootout-C++/random | 0.080 | 0.185 | 2.31× | 0.238 | 2.97× | ok |
| Shootout-C++/sieve | 0.085 | 0.212 | 2.49× | 0.271 | 3.19× | ok |
| SmallPT | 0.026 | 0.081 | 3.12× | 0.080 | 3.08× | ok |
| Stanford/Bubblesort | 0.008 | 0.026 | — | 0.029 | — | ok |
| Stanford/FloatMM | 0.009 | 0.025 | — | 0.030 | — | ok |
| Stanford/Puzzle | 0.009 | 0.034 | — | 0.033 | — | ok |
| Stanford/Treesort | 0.008 | 0.028 | — | 0.030 | — | ok |
| bg/binarytrees/2 | 0.065 | 0.149 | 2.29× | 0.205 | 3.15× | ok |
| bg/fannkuchredux/3 | 0.033 | 0.071 | 2.15× | 0.086 | 2.61× | ok |
| bg/fasta/1 | 0.051 | 0.127 | 2.49× | 0.137 | 2.69× | ok |
| bg/fasta/2 | 0.047 | 0.117 | 2.49× | 0.127 | 2.70× | ok |
| bg/fasta/3 | 0.081 | 0.183 | 2.26× | 0.227 | 2.80× | ok |
| bg/fasta/4 | 0.068 | 0.149 | 2.19× | 0.174 | 2.56× | ok |
| bg/fasta/6 | 0.118 | 0.365 | 3.09× | 0.400 | 3.39× | ok |
| bg/mandelbrot/0 | 0.143 | 0.435 | 3.04× | 0.411 | 2.87× | ok |
| bg/mandelbrot/2 | 0.084 | 0.195 | 2.32× | 0.265 | 3.15× | ok |
| bg/mandelbrot/3 | 0.089 | 0.200 | 2.25× | 0.254 | 2.85× | ok |
| bg/mandelbrot/5 | 0.042 | 0.108 | 2.57× | 0.118 | 2.81× | ok |
| bg/mandelbrot/7 | 0.050 | 0.124 | 2.48× | 0.129 | 2.58× | ok |
| bg/mandelbrot/9 | 0.038 | 0.111 | 2.92× | 0.120 | 3.16× | ok |
| bg/nbody/1 | 0.029 | 0.107 | 3.69× | 0.081 | 2.79× | ok |
| bg/nbody/2 | 0.029 | 0.068 | 2.34× | 0.073 | 2.52× | ok |
| bg/nbody/3 | 0.025 | 0.064 | 2.56× | 0.073 | 2.92× | ok |
| bg/nbody/6 | 0.029 | 0.098 | 3.38× | 0.087 | 3.00× | ok |
| bg/pidigits/4 | 0.113 | 0.297 | 2.63× | 0.409 | 3.62× | ok |
| bg/pidigits/5 | 0.078 | 0.160 | 2.05× | 0.212 | 2.72× | ok |
| bg/revcomp/1 | 0.081 | 0.211 | 2.60× | 0.261 | 3.22× | ok |
| bg/revcomp/5 | 0.080 | 0.207 | 2.59× | 0.276 | 3.45× | ok |
| bg/spectralnorm/1 | 0.103 | 0.239 | 2.32× | 0.320 | 3.11× | ok |
| box2d | 1.474 | 4.212 | 2.86× | 3.448 | 2.34× | ok |
| fmt | 0.457 | 2.461 | 5.39× | 2.017 | 4.41× | ok |
| hexxagon | 0.251 | 0.648 | 2.58× | 0.832 | 3.31× | ok |
| lambda | 0.050 | 0.300 | 6.00× | 0.208 | 4.16× | ok |
| minisat | 0.058 | 0.290 | 5.00× | 0.218 | 3.76× | ok |
| nlohmann-json | 0.436 | 1.923 | 4.41× | 1.837 | 4.21× | ok |
| pugixml | 0.264 | 1.237 | 4.69× | 0.984 | 3.73× | ok |
| pugixml-tests | 3.490 | 14.896 | 4.27× | 13.034 | 3.73× | ok |
| rapidjson | 0.113 | 0.483 | 4.27× | 0.349 | 3.09× | ok |
| re2 | 2.595 | 10.775 | 4.15× | 6.645 | 2.56× | ok |
| re2-test-re2 | 4.408 | 14.402 | 3.27× | 15.647 | 3.55× | ok |
| re2-test-search | 4.586 | 13.888 | 3.03× | 14.076 | 3.07× | ok |
| tramp3d-v4 | 0.689 | 8.502 | 12.34× | 2.571 | 3.73× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.108 | 0.806 | 7.46× | 0.483 | 4.47× | ok |
| Adobe-C++/loop_unroll | 0.434 | 5.246 | 12.09× | 4.013 | 9.25× | ok |
| Adobe-C++/simple_types_constant_folding | 0.246 | 2.949 | 11.99× | 2.230 | 9.07× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.245 | 2.152 | 8.78× | 1.793 | 7.32× | ok |
| Adobe-C++/stepanov_abstraction | 0.092 | 0.962 | 10.46× | 0.437 | 4.75× | ok |
| Adobe-C++/stepanov_vector | 0.126 | 1.292 | 10.25× | 0.514 | 4.08× | ok |
| Bullet | 6.027 | 36.628 | 6.08× | 26.205 | 4.35× | ok |
| CLAMR | 4.459 | 22.250 | 4.99× | 18.448 | 4.14× | ok |
| CoyoteBench/almabench | 0.035 | 0.145 | 4.14× | 0.112 | 3.20× | ok |
| CoyoteBench/fftbench | 0.126 | 0.406 | 3.22× | 0.485 | 3.85× | ok |
| CoyoteBench/huffbench | 0.038 | 0.189 | 4.97× | 0.142 | 3.74× | ok |
| CoyoteBench/lpbench | 0.037 | 0.187 | 5.05× | 0.205 | 5.54× | ok |
| DOE/HACCKernels | 0.110 | 0.400 | 3.64× | 0.372 | 3.38× | ok |
| DOE/HPCCG | 0.698 | 2.396 | 3.43× | 2.184 | 3.13× | ok |
| DOE/PENNANT | 1.667 | 5.703 | 3.42× | 5.254 | 3.15× | ok |
| DOE/miniFE | 0.856 | 4.118 | 4.81× | 3.537 | 4.13× | ok |
| Misc-C++-EH/spirit | 0.674 | 3.287 | 4.88× | 3.459 | 5.13× | ok |
| Misc-C++-Large/ray | 0.105 | 0.484 | 4.61× | 0.327 | 3.11× | ok |
| Misc-C++-Large/sphereflake | 0.106 | 0.688 | 6.49× | 0.325 | 3.07× | ok |
| Misc-C++/bigfib | 0.130 | 0.486 | 3.74× | 0.450 | 3.46× | ok |
| Misc-C++/oopack_v1p8 | 0.034 | 0.168 | 4.94× | 0.156 | 4.59× | ok |
| Misc-C++/stepanov_container | 0.197 | 0.766 | 3.89× | 0.866 | 4.40× | ok |
| Misc-C++/stepanov_v1p2 | 0.039 | 0.202 | 5.18× | 0.180 | 4.62× | ok |
| PAQ8p | 0.306 | 3.773 | 12.33× | 1.556 | 5.08× | ok |
| Prolangs-C++/life | 0.010 | 0.100 | 10.00× | 0.065 | 6.50× | ok |
| Prolangs-C++/ocean | 0.020 | 0.191 | 9.55× | 0.115 | 5.75× | ok |
| Prolangs-C++/primes | 0.007 | 0.035 | — | 0.036 | — | ok |
| Shootout-C++-EH/except | 0.068 | 0.181 | 2.66× | 0.216 | 3.18× | ok |
| Shootout-C++/ackermann | 0.071 | 0.194 | 2.73× | 0.209 | 2.94× | ok |
| Shootout-C++/ary3 | 0.086 | 0.227 | 2.64× | 0.303 | 3.52× | ok |
| Shootout-C++/fibo | 0.065 | 0.175 | 2.69× | 0.201 | 3.09× | ok |
| Shootout-C++/hash | 0.108 | 0.356 | 3.30× | 0.373 | 3.45× | ok |
| Shootout-C++/hash2 | 0.141 | 0.420 | 2.98× | 0.408 | 2.89× | ok |
| Shootout-C++/heapsort | 0.082 | 0.200 | 2.44× | 0.240 | 2.93× | ok |
| Shootout-C++/lists | 0.076 | 0.219 | 2.88× | 0.245 | 3.22× | ok |
| Shootout-C++/lists1 | 0.088 | 0.248 | 2.82× | 0.286 | 3.25× | ok |
| Shootout-C++/matrix | 0.070 | 0.203 | 2.90× | 0.315 | 4.50× | ok |
| Shootout-C++/methcall | 0.068 | 0.173 | 2.54× | 0.206 | 3.03× | ok |
| Shootout-C++/moments | 0.098 | 0.300 | 3.06× | 0.303 | 3.09× | ok |
| Shootout-C++/random | 0.085 | 0.194 | 2.28× | 0.250 | 2.94× | ok |
| Shootout-C++/sieve | 0.088 | 0.230 | 2.61× | 0.300 | 3.41× | ok |
| SmallPT | 0.037 | 0.280 | 7.57× | 0.153 | 4.14× | ok |
| Stanford/Bubblesort | 0.011 | 0.052 | 4.73× | 0.046 | 4.18× | ok |
| Stanford/FloatMM | 0.012 | 0.058 | 4.83× | 0.068 | 5.67× | ok |
| Stanford/Puzzle | 0.020 | 0.121 | 6.05× | 0.115 | 5.75× | ok |
| Stanford/Treesort | 0.014 | 0.084 | 6.00× | 0.050 | 3.57× | ok |
| bg/binarytrees/2 | 0.071 | 0.406 | 5.72× | 0.236 | 3.32× | ok |
| bg/fannkuchredux/3 | 0.038 | 0.121 | 3.18× | 0.117 | 3.08× | ok |
| bg/fasta/1 | 0.060 | 0.165 | 2.75× | 0.175 | 2.92× | ok |
| bg/fasta/2 | 0.054 | 0.151 | 2.80× | 0.170 | 3.15× | ok |
| bg/fasta/3 | 0.080 | 0.209 | 2.61× | 0.253 | 3.16× | ok |
| bg/fasta/4 | 0.072 | 0.174 | 2.42× | 0.198 | 2.75× | ok |
| bg/fasta/6 | 0.158 | 0.434 | 2.75× | 0.490 | 3.10× | ok |
| bg/mandelbrot/0 | 0.173 | 0.611 | 3.53× | 0.666 | 3.85× | ok |
| bg/mandelbrot/2 | 0.088 | 0.234 | 2.66× | 0.306 | 3.48× | ok |
| bg/mandelbrot/3 | 0.090 | 0.215 | 2.39× | 0.285 | 3.17× | ok |
| bg/mandelbrot/5 | 0.054 | 0.138 | 2.56× | 0.146 | 2.70× | ok |
| bg/mandelbrot/7 | 0.059 | 0.188 | 3.19× | 0.169 | 2.86× | ok |
| bg/mandelbrot/9 | 0.048 | 0.181 | 3.77× | 0.163 | 3.40× | ok |
| bg/nbody/1 | 0.043 | 0.161 | 3.74× | 0.165 | 3.84× | ok |
| bg/nbody/2 | 0.031 | 0.122 | 3.94× | 0.132 | 4.26× | ok |
| bg/nbody/3 | 0.030 | 0.110 | 3.67× | 0.103 | 3.43× | ok |
| bg/nbody/6 | 0.041 | 0.157 | 3.83× | 0.167 | 4.07× | ok |
| bg/pidigits/4 | 0.117 | 0.309 | 2.64× | 0.387 | 3.31× | ok |
| bg/pidigits/5 | 0.081 | 0.192 | 2.37× | 0.286 | 3.53× | ok |
| bg/revcomp/1 | 0.087 | 0.248 | 2.85× | 0.322 | 3.70× | ok |
| bg/revcomp/5 | 0.083 | 0.246 | 2.96× | 0.295 | 3.55× | ok |
| bg/spectralnorm/1 | 0.110 | 0.328 | 2.98× | 0.405 | 3.68× | ok |
| box2d | 1.755 | 7.396 | 4.21× | 4.512 | 2.57× | ok |
| fmt | 0.908 | 5.208 | 5.74× | 4.025 | 4.43× | ok |
| hexxagon | 0.278 | 1.075 | 3.87× | 1.076 | 3.87× | ok |
| lambda | 0.121 | 1.129 | 9.33× | 0.580 | 4.79× | ok |
| minisat | 0.140 | 0.994 | 7.10× | 0.636 | 4.54× | ok |
| nlohmann-json | 0.833 | 3.463 | 4.16× | 3.147 | 3.78× | ok |
| pugixml | 0.678 | 5.440 | 8.02× | 4.006 | 5.91× | ok |
| pugixml-tests | 5.121 | 34.304 | 6.70× | 24.873 | 4.86× | ok |
| rapidjson | 0.225 | 1.230 | 5.47× | 0.700 | 3.11× | ok |
| re2 | 2.898 | 18.578 | 6.41× | 9.892 | 3.41× | ok |
| re2-test-re2 | 5.758 | 26.020 | 4.52× | 22.240 | 3.86× | ok |
| re2-test-search | 5.833 | 23.260 | 3.99× | 21.382 | 3.67× | ok |
| tramp3d-v4 | 2.569 | 22.040 | 8.58× | 13.895 | 5.41× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.059 | 0.133 | 2.25× | 0.182 | 3.08× | ok |
| Adobe-C++/loop_unroll | 0.040 | 0.101 | 2.53× | 0.099 | 2.48× | ok |
| Adobe-C++/simple_types_constant_folding | 0.035 | 0.101 | 2.89× | 0.106 | 3.03× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.033 | 0.091 | 2.76× | 0.112 | 3.39× | ok |
| Adobe-C++/stepanov_abstraction | 0.032 | 0.065 | 2.03× | 0.090 | 2.81× | ok |
| Adobe-C++/stepanov_vector | 0.055 | 0.135 | 2.45× | 0.154 | 2.80× | ok |
| Bullet | 4.340 | 9.446 | 2.18× | 13.876 | 3.20× | ok |
| CLAMR | 2.124 | 4.450 | 2.10× | 6.764 | 3.18× | ok |
| CoyoteBench/almabench | 0.026 | 0.053 | 2.04× | 0.071 | 2.73× | ok |
| CoyoteBench/fftbench | 0.097 | 0.216 | 2.23× | 0.326 | 3.36× | ok |
| CoyoteBench/huffbench | 0.023 | 0.052 | 2.26× | 0.078 | 3.39× | ok |
| CoyoteBench/lpbench | 0.028 | 0.059 | 2.11× | 0.080 | 2.86× | ok |
| DOE/HACCKernels | 0.112 | 0.255 | 2.28× | 0.289 | 2.58× | ok |
| DOE/HPCCG | 0.627 | 1.299 | 2.07× | 2.047 | 3.26× | ok |
| DOE/PENNANT | 1.278 | 2.740 | 2.14× | 3.737 | 2.92× | ok |
| DOE/miniFE | 0.551 | 1.325 | 2.40× | 1.879 | 3.41× | ok |
| Misc-C++-EH/spirit | 0.275 | 0.786 | 2.86× | 1.267 | 4.61× | ok |
| Misc-C++-Large/ray | 0.090 | 0.220 | 2.44× | 0.252 | 2.80× | ok |
| Misc-C++-Large/sphereflake | 0.079 | 0.175 | 2.22× | 0.256 | 3.24× | ok |
| Misc-C++/bigfib | 0.094 | 0.223 | 2.37× | 0.288 | 3.06× | ok |
| Misc-C++/oopack_v1p8 | 0.027 | 0.058 | 2.15× | 0.077 | 2.85× | ok |
| Misc-C++/stepanov_container | 0.126 | 0.329 | 2.61× | 0.375 | 2.98× | ok |
| Misc-C++/stepanov_v1p2 | 0.029 | 0.056 | 1.93× | 0.071 | 2.45× | ok |
| PAQ8p | 0.041 | 0.114 | 2.78× | 0.117 | 2.85× | ok |
| Prolangs-C++/life | 0.003 | 0.010 | — | 0.022 | — | ok |
| Prolangs-C++/ocean | 0.008 | 0.019 | — | 0.030 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.015 | — | 0.024 | — | ok |
| Shootout-C++-EH/except | 0.068 | 0.153 | 2.25× | 0.191 | 2.81× | ok |
| Shootout-C++/ackermann | 0.063 | 0.158 | 2.51× | 0.197 | 3.13× | ok |
| Shootout-C++/ary3 | 0.074 | 0.170 | 2.30× | 0.263 | 3.55× | ok |
| Shootout-C++/fibo | 0.061 | 0.149 | 2.44× | 0.181 | 2.97× | ok |
| Shootout-C++/hash | 0.086 | 0.199 | 2.31× | 0.249 | 2.90× | ok |
| Shootout-C++/hash2 | 0.097 | 0.226 | 2.33× | 0.322 | 3.32× | ok |
| Shootout-C++/heapsort | 0.078 | 0.169 | 2.17× | 0.214 | 2.74× | ok |
| Shootout-C++/lists | 0.075 | 0.158 | 2.11× | 0.204 | 2.72× | ok |
| Shootout-C++/lists1 | 0.076 | 0.169 | 2.22× | 0.222 | 2.92× | ok |
| Shootout-C++/matrix | 0.064 | 0.141 | 2.20× | 0.192 | 3.00× | ok |
| Shootout-C++/methcall | 0.060 | 0.140 | 2.33× | 0.187 | 3.12× | ok |
| Shootout-C++/moments | 0.086 | 0.189 | 2.20× | 0.223 | 2.59× | ok |
| Shootout-C++/random | 0.079 | 0.183 | 2.32× | 0.230 | 2.91× | ok |
| Shootout-C++/sieve | 0.085 | 0.174 | 2.05× | 0.255 | 3.00× | ok |
| SmallPT | 0.025 | 0.053 | 2.12× | 0.072 | 2.88× | ok |
| Stanford/Bubblesort | 0.009 | 0.022 | — | 0.029 | — | ok |
| Stanford/FloatMM | 0.009 | 0.020 | — | 0.030 | — | ok |
| Stanford/Puzzle | 0.009 | 0.023 | — | 0.031 | — | ok |
| Stanford/Treesort | 0.009 | 0.022 | — | 0.029 | — | ok |
| bg/binarytrees/2 | 0.066 | 0.147 | 2.23× | 0.190 | 2.88× | ok |
| bg/fannkuchredux/3 | 0.032 | 0.062 | 1.94× | 0.082 | 2.56× | ok |
| bg/fasta/1 | 0.050 | 0.100 | 2.00× | 0.125 | 2.50× | ok |
| bg/fasta/2 | 0.045 | 0.092 | 2.04× | 0.117 | 2.60× | ok |
| bg/fasta/3 | 0.079 | 0.172 | 2.18× | 0.215 | 2.72× | ok |
| bg/fasta/4 | 0.066 | 0.142 | 2.15× | 0.167 | 2.53× | ok |
| bg/fasta/6 | 0.108 | 0.256 | 2.37× | 0.374 | 3.46× | ok |
| bg/mandelbrot/0 | 0.133 | 0.301 | 2.26× | 0.363 | 2.73× | ok |
| bg/mandelbrot/2 | 0.082 | 0.169 | 2.06× | 0.253 | 3.09× | ok |
| bg/mandelbrot/3 | 0.088 | 0.197 | 2.24× | 0.241 | 2.74× | ok |
| bg/mandelbrot/5 | 0.041 | 0.088 | 2.15× | 0.107 | 2.61× | ok |
| bg/mandelbrot/7 | 0.046 | 0.092 | 2.00× | 0.115 | 2.50× | ok |
| bg/mandelbrot/9 | 0.036 | 0.081 | 2.25× | 0.107 | 2.97× | ok |
| bg/nbody/1 | 0.028 | 0.062 | 2.21× | 0.069 | 2.46× | ok |
| bg/nbody/2 | 0.029 | 0.056 | 1.93× | 0.070 | 2.41× | ok |
| bg/nbody/3 | 0.025 | 0.053 | 2.12× | 0.069 | 2.76× | ok |
| bg/nbody/6 | 0.029 | 0.056 | 1.93× | 0.076 | 2.62× | ok |
| bg/pidigits/4 | 0.111 | 0.265 | 2.39× | 0.339 | 3.05× | ok |
| bg/pidigits/5 | 0.070 | 0.155 | 2.21× | 0.209 | 2.99× | ok |
| bg/revcomp/1 | 0.077 | 0.169 | 2.19× | 0.243 | 3.16× | ok |
| bg/revcomp/5 | 0.073 | 0.177 | 2.42× | 0.233 | 3.19× | ok |
| bg/spectralnorm/1 | 0.101 | 0.250 | 2.48× | 0.296 | 2.93× | ok |
| box2d | 1.320 | 2.923 | 2.21× | 3.255 | 2.47× | ok |
| fmt | 0.376 | 1.085 | 2.89× | 1.619 | 4.31× | ok |
| hexxagon | 0.244 | 0.584 | 2.39× | 0.790 | 3.24× | ok |
| lambda | 0.040 | 0.122 | 3.05× | 0.155 | 3.88× | ok |
| minisat | 0.049 | 0.126 | 2.57× | 0.160 | 3.27× | ok |
| nlohmann-json | 0.316 | 0.852 | 2.70× | 1.373 | 4.34× | ok |
| pugixml | 0.203 | 0.475 | 2.34× | 0.704 | 3.47× | ok |
| pugixml-tests | 2.954 | 7.246 | 2.45× | 9.455 | 3.20× | ok |
| rapidjson | 0.097 | 0.249 | 2.57× | 0.269 | 2.77× | ok |
| re2 | 2.620 | 6.862 | 2.62× | 5.642 | 2.15× | ok |
| re2-test-re2 | 3.973 | 9.323 | 2.35× | 12.450 | 3.13× | ok |
| re2-test-search | 4.086 | 9.110 | 2.23× | 13.272 | 3.25× | ok |
| tramp3d-v4 | 0.613 | 2.377 | 3.88× | 1.503 | 2.45× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
