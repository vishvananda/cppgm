# Public benchmarks: Intel (GitHub)

Measured compiler: [`56c86f755`](https://github.com/vishvananda/cppgm/commit/56c86f755ec2b56e235b3f5e5ff76e6d147c3f93) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44612055398) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: INTEL(R) XEON(R) PLATINUM 8573C.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.30× | 79 | 2.87× | 79 |
| Compile CPU, `-O0` | 3.18× | 79 | 3.07× | 79 |
| Compile CPU, `-O3` | 4.34× | 80 | 3.76× | 80 |
| Compile peak RSS, `-O0` | 1.42× | 81 | 2.11× | 81 |
| Compile peak RSS, `-O3` | 1.69× | 81 | 2.19× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.15× | 81 | 1.08× | 81 |
| Run CPU, `-O3` | 1.02× | 81 | 1.01× | 81 |
| Run instructions, `-O3` | 1.00× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.932 to 1.022; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.089 | 0.340 | 3.82× | 0.236 | 2.65× | ok |
| Adobe-C++/loop_unroll | 0.069 | 0.760 | 11.01× | 0.231 | 3.35× | ok |
| Adobe-C++/simple_types_constant_folding | 0.078 | 0.881 | 11.29× | 0.281 | 3.60× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.062 | 0.639 | 10.31× | 0.317 | 5.11× | ok |
| Adobe-C++/stepanov_abstraction | 0.049 | 0.247 | 5.04× | 0.180 | 3.67× | ok |
| Adobe-C++/stepanov_vector | 0.100 | 0.392 | 3.92× | 0.328 | 3.28× | ok |
| Bullet | 6.104 | 22.598 | 3.70× | 21.509 | 3.52× | ok |
| CLAMR | 3.012 | 11.477 | 3.81× | 9.825 | 3.26× | ok |
| CoyoteBench/almabench | 0.042 | 0.089 | 2.12× | 0.104 | 2.48× | ok |
| CoyoteBench/fftbench | 0.130 | 0.305 | 2.35× | 0.377 | 2.90× | ok |
| CoyoteBench/huffbench | 0.036 | 0.091 | 2.53× | 0.101 | 2.81× | ok |
| CoyoteBench/lpbench | 0.034 | 0.086 | 2.53× | 0.116 | 3.41× | ok |
| DOE/HACCKernels | 0.157 | 0.397 | 2.53× | 0.423 | 2.69× | ok |
| DOE/HPCCG | 0.894 | 2.343 | 2.62× | 3.061 | 3.42× | ok |
| DOE/PENNANT | 1.962 | 5.544 | 2.83× | 5.442 | 2.77× | ok |
| DOE/miniFE | 0.784 | 2.757 | 3.52× | 2.455 | 3.13× | ok |
| Misc-C++-EH/spirit | 0.569 | 3.151 | 5.54× | 2.482 | 4.36× | ok |
| Misc-C++-Large/ray | 0.129 | 0.391 | 3.03× | 0.388 | 3.01× | ok |
| Misc-C++-Large/sphereflake | 0.132 | 0.279 | 2.11× | 0.353 | 2.67× | ok |
| Misc-C++/bigfib | 0.144 | 0.503 | 3.49× | 0.451 | 3.13× | ok |
| Misc-C++/oopack_v1p8 | 0.038 | 0.109 | 2.87× | 0.129 | 3.39× | ok |
| Misc-C++/stepanov_container | 0.225 | 0.714 | 3.17× | 0.598 | 2.66× | ok |
| Misc-C++/stepanov_v1p2 | 0.037 | 0.147 | 3.97× | 0.113 | 3.05× | ok |
| PAQ8p | 0.088 | 0.562 | 6.39× | 0.278 | 3.16× | ok |
| Prolangs-C++/life | 0.004 | 0.038 | — | 0.032 | — | ok |
| Prolangs-C++/ocean | 0.014 | 0.087 | 6.21× | 0.060 | 4.29× | ok |
| Prolangs-C++/primes | 0.007 | 0.028 | — | 0.031 | — | ok |
| Shootout-C++-EH/except | 0.099 | 0.221 | 2.23× | 0.307 | 3.10× | ok |
| Shootout-C++/ackermann | 0.091 | 0.200 | 2.20× | 0.259 | 2.85× | ok |
| Shootout-C++/ary3 | 0.110 | 0.272 | 2.47× | 0.355 | 3.23× | ok |
| Shootout-C++/fibo | 0.088 | 0.195 | 2.22× | 0.238 | 2.70× | ok |
| Shootout-C++/hash | 0.129 | 0.333 | 2.58× | 0.381 | 2.95× | ok |
| Shootout-C++/hash2 | 0.143 | 0.413 | 2.89× | 0.411 | 2.87× | ok |
| Shootout-C++/heapsort | 0.106 | 0.236 | 2.23× | 0.308 | 2.91× | ok |
| Shootout-C++/lists | 0.115 | 0.270 | 2.35× | 0.356 | 3.10× | ok |
| Shootout-C++/lists1 | 0.113 | 0.299 | 2.65× | 0.341 | 3.02× | ok |
| Shootout-C++/matrix | 0.089 | 0.199 | 2.24× | 0.269 | 3.02× | ok |
| Shootout-C++/methcall | 0.083 | 0.235 | 2.83× | 0.258 | 3.11× | ok |
| Shootout-C++/moments | 0.141 | 0.321 | 2.28× | 0.320 | 2.27× | ok |
| Shootout-C++/random | 0.108 | 0.243 | 2.25× | 0.305 | 2.82× | ok |
| Shootout-C++/sieve | 0.115 | 0.282 | 2.45× | 0.347 | 3.02× | ok |
| SmallPT | 0.037 | 0.116 | 3.14× | 0.104 | 2.81× | ok |
| Stanford/Bubblesort | 0.011 | 0.033 | 3.00× | 0.037 | 3.36× | ok |
| Stanford/FloatMM | 0.011 | 0.034 | 3.09× | 0.039 | 3.55× | ok |
| Stanford/Puzzle | 0.012 | 0.044 | 3.67× | 0.040 | 3.33× | ok |
| Stanford/Treesort | 0.012 | 0.037 | 3.08× | 0.038 | 3.17× | ok |
| bg/binarytrees/2 | 0.091 | 0.202 | 2.22× | 0.289 | 3.18× | ok |
| bg/fannkuchredux/3 | 0.041 | 0.094 | 2.29× | 0.106 | 2.59× | ok |
| bg/fasta/1 | 0.067 | 0.163 | 2.43× | 0.181 | 2.70× | ok |
| bg/fasta/2 | 0.072 | 0.164 | 2.28× | 0.175 | 2.43× | ok |
| bg/fasta/3 | 0.106 | 0.254 | 2.40× | 0.287 | 2.71× | ok |
| bg/fasta/4 | 0.094 | 0.204 | 2.17× | 0.260 | 2.77× | ok |
| bg/fasta/6 | 0.202 | 0.587 | 2.91× | 0.520 | 2.57× | ok |
| bg/mandelbrot/0 | 0.192 | 0.612 | 3.19× | 0.591 | 3.08× | ok |
| bg/mandelbrot/2 | 0.118 | 0.304 | 2.58× | 0.317 | 2.69× | ok |
| bg/mandelbrot/3 | 0.123 | 0.269 | 2.19× | 0.334 | 2.72× | ok |
| bg/mandelbrot/5 | 0.059 | 0.149 | 2.53× | 0.152 | 2.58× | ok |
| bg/mandelbrot/7 | 0.059 | 0.149 | 2.53× | 0.173 | 2.93× | ok |
| bg/mandelbrot/9 | 0.055 | 0.155 | 2.82× | 0.152 | 2.76× | ok |
| bg/nbody/1 | 0.042 | 0.133 | 3.17× | 0.119 | 2.83× | ok |
| bg/nbody/2 | 0.036 | 0.083 | 2.31× | 0.098 | 2.72× | ok |
| bg/nbody/3 | 0.036 | 0.086 | 2.39× | 0.101 | 2.81× | ok |
| bg/nbody/6 | 0.038 | 0.122 | 3.21× | 0.116 | 3.05× | ok |
| bg/pidigits/4 | 0.154 | 0.393 | 2.55× | 0.495 | 3.21× | ok |
| bg/pidigits/5 | 0.106 | 0.226 | 2.13× | 0.288 | 2.72× | ok |
| bg/revcomp/1 | 0.108 | 0.282 | 2.61× | 0.379 | 3.51× | ok |
| bg/revcomp/5 | 0.109 | 0.257 | 2.36× | 0.325 | 2.98× | ok |
| bg/spectralnorm/1 | 0.149 | 0.366 | 2.46× | 0.405 | 2.72× | ok |
| box2d | 2.015 | 5.628 | 2.79× | 4.051 | 2.01× | ok |
| fmt | 0.646 | 3.031 | 4.69× | 2.621 | 4.06× | ok |
| hexxagon | 0.330 | 0.838 | 2.54× | 1.084 | 3.28× | ok |
| lambda | 0.068 | 0.408 | 6.00× | 0.290 | 4.26× | ok |
| minisat | 0.079 | 0.394 | 4.99× | 0.276 | 3.49× | ok |
| nlohmann-json | 0.524 | 2.498 | 4.77× | 2.166 | 4.13× | ok |
| pugixml | 0.375 | 1.706 | 4.55× | 1.389 | 3.70× | ok |
| pugixml-tests | 4.467 | 19.615 | 4.39× | 15.621 | 3.50× | ok |
| rapidjson | 0.154 | 0.602 | 3.91× | 0.512 | 3.32× | ok |
| re2 | 3.280 | 13.369 | 4.08× | 8.467 | 2.58× | ok |
| re2-test-re2 | 5.803 | 19.441 | 3.35× | 19.234 | 3.31× | ok |
| re2-test-search | 5.857 | 18.290 | 3.12× | 18.749 | 3.20× | ok |
| tramp3d-v4 | 0.878 | 10.572 | 12.04× | 3.211 | 3.66× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.174 | 1.289 | 7.41× | 0.666 | 3.83× | ok |
| Adobe-C++/loop_unroll | 0.653 | 7.167 | 10.98× | 5.662 | 8.67× | ok |
| Adobe-C++/simple_types_constant_folding | 0.347 | 3.857 | 11.12× | 2.967 | 8.55× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.326 | 3.154 | 9.67× | 2.404 | 7.37× | ok |
| Adobe-C++/stepanov_abstraction | 0.134 | 1.313 | 9.80× | 0.591 | 4.41× | ok |
| Adobe-C++/stepanov_vector | 0.170 | 1.886 | 11.09× | 0.688 | 4.05× | ok |
| Bullet | 8.558 | 49.389 | 5.77× | 35.082 | 4.10× | ok |
| CLAMR | 5.319 | 31.210 | 5.87× | 24.865 | 4.67× | ok |
| CoyoteBench/almabench | 0.044 | 0.211 | 4.80× | 0.154 | 3.50× | ok |
| CoyoteBench/fftbench | 0.153 | 0.512 | 3.35× | 0.533 | 3.48× | ok |
| CoyoteBench/huffbench | 0.050 | 0.272 | 5.44× | 0.162 | 3.24× | ok |
| CoyoteBench/lpbench | 0.054 | 0.213 | 3.94× | 0.276 | 5.11× | ok |
| DOE/HACCKernels | 0.160 | 0.550 | 3.44× | 0.592 | 3.70× | ok |
| DOE/HPCCG | 0.932 | 3.365 | 3.61× | 3.380 | 3.63× | ok |
| DOE/PENNANT | 2.340 | 7.765 | 3.32× | 7.679 | 3.28× | ok |
| DOE/miniFE | 1.086 | 5.214 | 4.80× | 4.680 | 4.31× | ok |
| Misc-C++-EH/spirit | 0.889 | 4.833 | 5.44× | 4.542 | 5.11× | ok |
| Misc-C++-Large/ray | 0.137 | 0.582 | 4.25× | 0.450 | 3.28× | ok |
| Misc-C++-Large/sphereflake | 0.150 | 0.961 | 6.41× | 0.504 | 3.36× | ok |
| Misc-C++/bigfib | 0.181 | 0.663 | 3.66× | 0.690 | 3.81× | ok |
| Misc-C++/oopack_v1p8 | 0.048 | 0.214 | 4.46× | 0.200 | 4.17× | ok |
| Misc-C++/stepanov_container | 0.278 | 1.225 | 4.41× | 1.072 | 3.86× | ok |
| Misc-C++/stepanov_v1p2 | 0.052 | 0.257 | 4.94× | 0.236 | 4.54× | ok |
| PAQ8p | 0.409 | 5.088 | 12.44× | 2.065 | 5.05× | ok |
| Prolangs-C++/life | 0.012 | 0.126 | 10.50× | 0.080 | 6.67× | ok |
| Prolangs-C++/ocean | 0.028 | 0.274 | 9.79× | 0.156 | 5.57× | ok |
| Prolangs-C++/primes | 0.009 | 0.043 | — | 0.040 | — | ok |
| Shootout-C++-EH/except | 0.099 | 0.262 | 2.65× | 0.330 | 3.33× | ok |
| Shootout-C++/ackermann | 0.095 | 0.252 | 2.65× | 0.271 | 2.85× | ok |
| Shootout-C++/ary3 | 0.115 | 0.325 | 2.83× | 0.389 | 3.38× | ok |
| Shootout-C++/fibo | 0.083 | 0.249 | 3.00× | 0.275 | 3.31× | ok |
| Shootout-C++/hash | 0.154 | 0.452 | 2.94× | 0.502 | 3.26× | ok |
| Shootout-C++/hash2 | 0.179 | 0.591 | 3.30× | 0.586 | 3.27× | ok |
| Shootout-C++/heapsort | 0.114 | 0.280 | 2.46× | 0.325 | 2.85× | ok |
| Shootout-C++/lists | 0.115 | 0.352 | 3.06× | 0.329 | 2.86× | ok |
| Shootout-C++/lists1 | 0.126 | 0.357 | 2.83× | 0.395 | 3.13× | ok |
| Shootout-C++/matrix | 0.100 | 0.266 | 2.66× | 0.425 | 4.25× | ok |
| Shootout-C++/methcall | 0.093 | 0.234 | 2.52× | 0.273 | 2.94× | ok |
| Shootout-C++/moments | 0.139 | 0.402 | 2.89× | 0.396 | 2.85× | ok |
| Shootout-C++/random | 0.113 | 0.262 | 2.32× | 0.314 | 2.78× | ok |
| Shootout-C++/sieve | 0.125 | 0.323 | 2.58× | 0.382 | 3.06× | ok |
| SmallPT | 0.053 | 0.396 | 7.47× | 0.220 | 4.15× | ok |
| Stanford/Bubblesort | 0.013 | 0.070 | 5.38× | 0.058 | 4.46× | ok |
| Stanford/FloatMM | 0.016 | 0.079 | 4.94× | 0.084 | 5.25× | ok |
| Stanford/Puzzle | 0.025 | 0.159 | 6.36× | 0.146 | 5.84× | ok |
| Stanford/Treesort | 0.018 | 0.110 | 6.11× | 0.066 | 3.67× | ok |
| bg/binarytrees/2 | 0.097 | 0.532 | 5.48× | 0.297 | 3.06× | ok |
| bg/fannkuchredux/3 | 0.049 | 0.151 | 3.08× | 0.144 | 2.94× | ok |
| bg/fasta/1 | 0.076 | 0.210 | 2.76× | 0.230 | 3.03× | ok |
| bg/fasta/2 | 0.082 | 0.212 | 2.59× | 0.223 | 2.72× | ok |
| bg/fasta/3 | 0.112 | 0.292 | 2.61× | 0.339 | 3.03× | ok |
| bg/fasta/4 | 0.102 | 0.247 | 2.42× | 0.289 | 2.83× | ok |
| bg/fasta/6 | 0.196 | 0.604 | 3.08× | 0.656 | 3.35× | ok |
| bg/mandelbrot/0 | 0.237 | 0.889 | 3.75× | 0.839 | 3.54× | ok |
| bg/mandelbrot/2 | 0.125 | 0.345 | 2.76× | 0.362 | 2.90× | ok |
| bg/mandelbrot/3 | 0.129 | 0.316 | 2.45× | 0.391 | 3.03× | ok |
| bg/mandelbrot/5 | 0.065 | 0.198 | 3.05× | 0.189 | 2.91× | ok |
| bg/mandelbrot/7 | 0.074 | 0.231 | 3.12× | 0.218 | 2.95× | ok |
| bg/mandelbrot/9 | 0.065 | 0.253 | 3.89× | 0.209 | 3.22× | ok |
| bg/nbody/1 | 0.048 | 0.201 | 4.19× | 0.229 | 4.77× | ok |
| bg/nbody/2 | 0.042 | 0.173 | 4.12× | 0.156 | 3.71× | ok |
| bg/nbody/3 | 0.041 | 0.163 | 3.98× | 0.138 | 3.37× | ok |
| bg/nbody/6 | 0.053 | 0.200 | 3.77× | 0.227 | 4.28× | ok |
| bg/pidigits/4 | 0.162 | 0.452 | 2.79× | 0.530 | 3.27× | ok |
| bg/pidigits/5 | 0.105 | 0.269 | 2.56× | 0.309 | 2.94× | ok |
| bg/revcomp/1 | 0.119 | 0.343 | 2.88× | 0.354 | 2.97× | ok |
| bg/revcomp/5 | 0.110 | 0.299 | 2.72× | 0.367 | 3.34× | ok |
| bg/spectralnorm/1 | 0.170 | 0.482 | 2.84× | 0.564 | 3.32× | ok |
| box2d | 2.279 | 9.982 | 4.38× | 5.705 | 2.50× | ok |
| fmt | 1.277 | 6.926 | 5.42× | 4.738 | 3.71× | ok |
| hexxagon | 0.397 | 1.402 | 3.53× | 1.416 | 3.57× | ok |
| lambda | 0.161 | 1.510 | 9.38× | 0.732 | 4.55× | ok |
| minisat | 0.192 | 1.317 | 6.86× | 0.843 | 4.39× | ok |
| nlohmann-json | 1.098 | 4.553 | 4.15× | 3.812 | 3.47× | ok |
| pugixml | 0.889 | 7.224 | 8.13× | 4.967 | 5.59× | ok |
| pugixml-tests | 6.724 | 45.410 | 6.75× | 31.659 | 4.71× | ok |
| rapidjson | 0.304 | 1.516 | 4.99× | 0.965 | 3.17× | ok |
| re2 | 3.706 | 23.819 | 6.43× | 12.547 | 3.39× | ok |
| re2-test-re2 | 7.550 | 35.319 | 4.68× | 27.957 | 3.70× | ok |
| re2-test-search | 7.420 | 31.519 | 4.25× | 26.069 | 3.51× | ok |
| tramp3d-v4 | 3.268 | 27.429 | 8.39× | 17.366 | 5.31× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.081 | 0.184 | 2.27× | 0.231 | 2.85× | ok |
| Adobe-C++/loop_unroll | 0.048 | 0.135 | 2.81× | 0.133 | 2.77× | ok |
| Adobe-C++/simple_types_constant_folding | 0.049 | 0.141 | 2.88× | 0.142 | 2.90× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.047 | 0.126 | 2.68× | 0.159 | 3.38× | ok |
| Adobe-C++/stepanov_abstraction | 0.041 | 0.095 | 2.32× | 0.135 | 3.29× | ok |
| Adobe-C++/stepanov_vector | 0.082 | 0.177 | 2.16× | 0.250 | 3.05× | ok |
| Bullet | 6.192 | 14.606 | 2.36× | 17.499 | 2.83× | ok |
| CLAMR | 2.719 | 6.950 | 2.56× | 7.732 | 2.84× | ok |
| CoyoteBench/almabench | 0.041 | 0.073 | 1.78× | 0.096 | 2.34× | ok |
| CoyoteBench/fftbench | 0.127 | 0.282 | 2.22× | 0.350 | 2.76× | ok |
| CoyoteBench/huffbench | 0.036 | 0.078 | 2.17× | 0.096 | 2.67× | ok |
| CoyoteBench/lpbench | 0.034 | 0.070 | 2.06× | 0.103 | 3.03× | ok |
| DOE/HACCKernels | 0.155 | 0.346 | 2.23× | 0.399 | 2.57× | ok |
| DOE/HPCCG | 0.896 | 1.863 | 2.08× | 2.801 | 3.13× | ok |
| DOE/PENNANT | 1.832 | 4.203 | 2.29× | 4.778 | 2.61× | ok |
| DOE/miniFE | 0.701 | 1.811 | 2.58× | 2.090 | 2.98× | ok |
| Misc-C++-EH/spirit | 0.376 | 1.117 | 2.97× | 1.613 | 4.29× | ok |
| Misc-C++-Large/ray | 0.124 | 0.312 | 2.52× | 0.372 | 3.00× | ok |
| Misc-C++-Large/sphereflake | 0.130 | 0.256 | 1.97× | 0.367 | 2.82× | ok |
| Misc-C++/bigfib | 0.131 | 0.302 | 2.31× | 0.389 | 2.97× | ok |
| Misc-C++/oopack_v1p8 | 0.041 | 0.075 | 1.83× | 0.112 | 2.73× | ok |
| Misc-C++/stepanov_container | 0.182 | 0.380 | 2.09× | 0.502 | 2.76× | ok |
| Misc-C++/stepanov_v1p2 | 0.036 | 0.079 | 2.19× | 0.096 | 2.67× | ok |
| PAQ8p | 0.060 | 0.150 | 2.50× | 0.156 | 2.60× | ok |
| Prolangs-C++/life | 0.004 | 0.012 | — | 0.023 | — | ok |
| Prolangs-C++/ocean | 0.011 | 0.029 | 2.64× | 0.040 | 3.64× | ok |
| Prolangs-C++/primes | 0.007 | 0.020 | — | 0.028 | — | ok |
| Shootout-C++-EH/except | 0.096 | 0.217 | 2.26× | 0.291 | 3.03× | ok |
| Shootout-C++/ackermann | 0.091 | 0.204 | 2.24× | 0.250 | 2.75× | ok |
| Shootout-C++/ary3 | 0.103 | 0.253 | 2.46× | 0.331 | 3.21× | ok |
| Shootout-C++/fibo | 0.088 | 0.199 | 2.26× | 0.230 | 2.61× | ok |
| Shootout-C++/hash | 0.124 | 0.252 | 2.03× | 0.338 | 2.73× | ok |
| Shootout-C++/hash2 | 0.134 | 0.304 | 2.27× | 0.360 | 2.69× | ok |
| Shootout-C++/heapsort | 0.109 | 0.239 | 2.19× | 0.292 | 2.68× | ok |
| Shootout-C++/lists | 0.112 | 0.228 | 2.04× | 0.332 | 2.96× | ok |
| Shootout-C++/lists1 | 0.110 | 0.249 | 2.26× | 0.310 | 2.82× | ok |
| Shootout-C++/matrix | 0.087 | 0.199 | 2.29× | 0.258 | 2.97× | ok |
| Shootout-C++/methcall | 0.081 | 0.232 | 2.86× | 0.247 | 3.05× | ok |
| Shootout-C++/moments | 0.137 | 0.255 | 1.86× | 0.292 | 2.13× | ok |
| Shootout-C++/random | 0.110 | 0.248 | 2.25× | 0.294 | 2.67× | ok |
| Shootout-C++/sieve | 0.110 | 0.230 | 2.09× | 0.319 | 2.90× | ok |
| SmallPT | 0.036 | 0.076 | 2.11× | 0.093 | 2.58× | ok |
| Stanford/Bubblesort | 0.011 | 0.029 | 2.64× | 0.037 | 3.36× | ok |
| Stanford/FloatMM | 0.012 | 0.029 | 2.42× | 0.036 | 3.00× | ok |
| Stanford/Puzzle | 0.012 | 0.030 | 2.50× | 0.037 | 3.08× | ok |
| Stanford/Treesort | 0.012 | 0.031 | 2.58× | 0.037 | 3.08× | ok |
| bg/binarytrees/2 | 0.090 | 0.200 | 2.22× | 0.275 | 3.06× | ok |
| bg/fannkuchredux/3 | 0.041 | 0.088 | 2.15× | 0.101 | 2.46× | ok |
| bg/fasta/1 | 0.065 | 0.128 | 1.97× | 0.165 | 2.54× | ok |
| bg/fasta/2 | 0.069 | 0.130 | 1.88× | 0.158 | 2.29× | ok |
| bg/fasta/3 | 0.103 | 0.240 | 2.33× | 0.274 | 2.66× | ok |
| bg/fasta/4 | 0.093 | 0.198 | 2.13× | 0.268 | 2.88× | ok |
| bg/fasta/6 | 0.165 | 0.390 | 2.36× | 0.452 | 2.74× | ok |
| bg/mandelbrot/0 | 0.176 | 0.453 | 2.57× | 0.522 | 2.97× | ok |
| bg/mandelbrot/2 | 0.109 | 0.264 | 2.42× | 0.299 | 2.74× | ok |
| bg/mandelbrot/3 | 0.122 | 0.266 | 2.18× | 0.320 | 2.62× | ok |
| bg/mandelbrot/5 | 0.056 | 0.122 | 2.18× | 0.139 | 2.48× | ok |
| bg/mandelbrot/7 | 0.055 | 0.108 | 1.96× | 0.153 | 2.78× | ok |
| bg/mandelbrot/9 | 0.052 | 0.112 | 2.15× | 0.137 | 2.63× | ok |
| bg/nbody/1 | 0.040 | 0.076 | 1.90× | 0.100 | 2.50× | ok |
| bg/nbody/2 | 0.037 | 0.069 | 1.86× | 0.093 | 2.51× | ok |
| bg/nbody/3 | 0.036 | 0.069 | 1.92× | 0.100 | 2.78× | ok |
| bg/nbody/6 | 0.036 | 0.072 | 2.00× | 0.098 | 2.72× | ok |
| bg/pidigits/4 | 0.152 | 0.353 | 2.32× | 0.469 | 3.09× | ok |
| bg/pidigits/5 | 0.110 | 0.215 | 1.95× | 0.270 | 2.45× | ok |
| bg/revcomp/1 | 0.103 | 0.227 | 2.20× | 0.321 | 3.12× | ok |
| bg/revcomp/5 | 0.104 | 0.212 | 2.04× | 0.296 | 2.85× | ok |
| bg/spectralnorm/1 | 0.151 | 0.348 | 2.30× | 0.383 | 2.54× | ok |
| box2d | 1.846 | 3.881 | 2.10× | 4.344 | 2.35× | ok |
| fmt | 0.578 | 1.326 | 2.29× | 2.027 | 3.51× | ok |
| hexxagon | 0.326 | 0.765 | 2.35× | 1.012 | 3.10× | ok |
| lambda | 0.051 | 0.149 | 2.92× | 0.204 | 4.00× | ok |
| minisat | 0.067 | 0.171 | 2.55× | 0.199 | 2.97× | ok |
| nlohmann-json | 0.435 | 1.127 | 2.59× | 1.693 | 3.89× | ok |
| pugixml | 0.273 | 0.645 | 2.36× | 1.004 | 3.68× | ok |
| pugixml-tests | 3.913 | 9.757 | 2.49× | 12.058 | 3.08× | ok |
| rapidjson | 0.120 | 0.315 | 2.62× | 0.391 | 3.26× | ok |
| re2 | 3.522 | 8.753 | 2.49× | 7.126 | 2.02× | ok |
| re2-test-re2 | 5.294 | 13.101 | 2.47× | 16.472 | 3.11× | ok |
| re2-test-search | 5.357 | 12.219 | 2.28× | 16.116 | 3.01× | ok |
| tramp3d-v4 | 0.601 | 2.795 | 4.65× | 1.870 | 3.11× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
