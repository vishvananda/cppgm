# Public benchmarks: Intel (GitHub)

Measured compiler: [`f14c300df`](https://github.com/vishvananda/cppgm/commit/f14c300df24c805416e28f06d41b201a035b60c7) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44743598642) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: Intel(R) Xeon(R) 6975P-C.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.29× | 74 | 2.97× | 74 |
| Compile CPU, `-O0` | 3.24× | 74 | 3.18× | 74 |
| Compile CPU, `-O3` | 4.44× | 80 | 3.91× | 80 |
| Compile peak RSS, `-O0` | 1.44× | 81 | 2.18× | 81 |
| Compile peak RSS, `-O3` | 1.70× | 81 | 2.29× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.12× | 81 | 1.08× | 81 |
| Run CPU, `-O3` | 0.99× | 80 | 1.01× | 80 |
| Run instructions, `-O3` | 1.00× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.915 to 1.063; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.061 | 0.250 | 4.10× | 0.211 | 3.46× | ok |
| Adobe-C++/loop_unroll | 0.047 | 0.555 | 11.81× | 0.164 | 3.49× | ok |
| Adobe-C++/simple_types_constant_folding | 0.049 | 0.637 | 13.00× | 0.199 | 4.06× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.044 | 0.468 | 10.64× | 0.221 | 5.02× | ok |
| Adobe-C++/stepanov_abstraction | 0.037 | 0.165 | 4.46× | 0.108 | 2.92× | ok |
| Adobe-C++/stepanov_vector | 0.072 | 0.296 | 4.11× | 0.239 | 3.32× | ok |
| Bullet | 4.222 | 15.914 | 3.77× | 14.758 | 3.50× | ok |
| CLAMR | 2.466 | 8.417 | 3.41× | 8.905 | 3.61× | ok |
| CoyoteBench/almabench | 0.029 | 0.075 | 2.59× | 0.085 | 2.93× | ok |
| CoyoteBench/fftbench | 0.094 | 0.242 | 2.57× | 0.299 | 3.18× | ok |
| CoyoteBench/huffbench | 0.025 | 0.068 | 2.72× | 0.080 | 3.20× | ok |
| CoyoteBench/lpbench | 0.026 | 0.069 | 2.65× | 0.076 | 2.92× | ok |
| DOE/HACCKernels | 0.103 | 0.258 | 2.50× | 0.303 | 2.94× | ok |
| DOE/HPCCG | 0.590 | 1.741 | 2.95× | 1.875 | 3.18× | ok |
| DOE/PENNANT | 1.322 | 4.204 | 3.18× | 3.887 | 2.94× | ok |
| DOE/miniFE | 0.615 | 2.085 | 3.39× | 1.974 | 3.21× | ok |
| Misc-C++-EH/spirit | 0.364 | 2.336 | 6.42× | 1.527 | 4.20× | ok |
| Misc-C++-Large/ray | 0.096 | 0.275 | 2.86× | 0.297 | 3.09× | ok |
| Misc-C++-Large/sphereflake | 0.092 | 0.225 | 2.45× | 0.287 | 3.12× | ok |
| Misc-C++/bigfib | 0.114 | 0.353 | 3.10× | 0.413 | 3.62× | ok |
| Misc-C++/oopack_v1p8 | 0.031 | 0.090 | 2.90× | 0.093 | 3.00× | ok |
| Misc-C++/stepanov_container | 0.155 | 0.573 | 3.70× | 0.549 | 3.54× | ok |
| Misc-C++/stepanov_v1p2 | 0.031 | 0.117 | 3.77× | 0.086 | 2.77× | ok |
| PAQ8p | 0.060 | 0.447 | 7.45× | 0.211 | 3.52× | ok |
| Prolangs-C++/life | 0.004 | 0.031 | — | 0.026 | — | ok |
| Prolangs-C++/ocean | 0.009 | 0.060 | — | 0.049 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.022 | — | 0.024 | — | ok |
| Shootout-C++-EH/except | 0.062 | 0.151 | 2.44× | 0.201 | 3.24× | ok |
| Shootout-C++/ackermann | 0.063 | 0.152 | 2.41× | 0.198 | 3.14× | ok |
| Shootout-C++/ary3 | 0.076 | 0.184 | 2.42× | 0.272 | 3.58× | ok |
| Shootout-C++/fibo | 0.061 | 0.142 | 2.33× | 0.210 | 3.44× | ok |
| Shootout-C++/hash | 0.091 | 0.255 | 2.80× | 0.303 | 3.33× | ok |
| Shootout-C++/hash2 | 0.092 | 0.266 | 2.89× | 0.280 | 3.04× | ok |
| Shootout-C++/heapsort | 0.093 | 0.179 | 1.92× | 0.221 | 2.38× | ok |
| Shootout-C++/lists | 0.072 | 0.191 | 2.65× | 0.220 | 3.06× | ok |
| Shootout-C++/lists1 | 0.099 | 0.245 | 2.47× | 0.247 | 2.49× | ok |
| Shootout-C++/matrix | 0.073 | 0.146 | 2.00× | 0.194 | 2.66× | ok |
| Shootout-C++/methcall | 0.063 | 0.153 | 2.43× | 0.187 | 2.97× | ok |
| Shootout-C++/moments | 0.088 | 0.234 | 2.66× | 0.244 | 2.77× | ok |
| Shootout-C++/random | 0.076 | 0.166 | 2.18× | 0.228 | 3.00× | ok |
| Shootout-C++/sieve | 0.079 | 0.217 | 2.75× | 0.245 | 3.10× | ok |
| SmallPT | 0.026 | 0.074 | 2.85× | 0.079 | 3.04× | ok |
| Stanford/Bubblesort | 0.008 | 0.024 | — | 0.027 | — | ok |
| Stanford/FloatMM | 0.008 | 0.025 | — | 0.029 | — | ok |
| Stanford/Puzzle | 0.009 | 0.031 | — | 0.030 | — | ok |
| Stanford/Treesort | 0.008 | 0.026 | — | 0.029 | — | ok |
| bg/binarytrees/2 | 0.060 | 0.145 | 2.42× | 0.198 | 3.30× | ok |
| bg/fannkuchredux/3 | 0.029 | 0.065 | 2.24× | 0.075 | 2.59× | ok |
| bg/fasta/1 | 0.045 | 0.111 | 2.47× | 0.120 | 2.67× | ok |
| bg/fasta/2 | 0.047 | 0.119 | 2.53× | 0.118 | 2.51× | ok |
| bg/fasta/3 | 0.070 | 0.169 | 2.41× | 0.210 | 3.00× | ok |
| bg/fasta/4 | 0.063 | 0.140 | 2.22× | 0.164 | 2.60× | ok |
| bg/fasta/6 | 0.112 | 0.346 | 3.09× | 0.384 | 3.43× | ok |
| bg/mandelbrot/0 | 0.125 | 0.438 | 3.50× | 0.404 | 3.23× | ok |
| bg/mandelbrot/2 | 0.073 | 0.215 | 2.95× | 0.249 | 3.41× | ok |
| bg/mandelbrot/3 | 0.089 | 0.173 | 1.94× | 0.235 | 2.64× | ok |
| bg/mandelbrot/5 | 0.040 | 0.103 | 2.57× | 0.112 | 2.80× | ok |
| bg/mandelbrot/7 | 0.041 | 0.115 | 2.80× | 0.119 | 2.90× | ok |
| bg/mandelbrot/9 | 0.041 | 0.109 | 2.66× | 0.133 | 3.24× | ok |
| bg/nbody/1 | 0.027 | 0.099 | 3.67× | 0.082 | 3.04× | ok |
| bg/nbody/2 | 0.023 | 0.063 | 2.74× | 0.070 | 3.04× | ok |
| bg/nbody/3 | 0.024 | 0.063 | 2.62× | 0.066 | 2.75× | ok |
| bg/nbody/6 | 0.026 | 0.086 | 3.31× | 0.098 | 3.77× | ok |
| bg/pidigits/4 | 0.104 | 0.277 | 2.66× | 0.365 | 3.51× | ok |
| bg/pidigits/5 | 0.074 | 0.155 | 2.09× | 0.241 | 3.26× | ok |
| bg/revcomp/1 | 0.069 | 0.195 | 2.83× | 0.226 | 3.28× | ok |
| bg/revcomp/5 | 0.071 | 0.187 | 2.63× | 0.264 | 3.72× | ok |
| bg/spectralnorm/1 | 0.110 | 0.237 | 2.15× | 0.282 | 2.56× | ok |
| box2d | 1.339 | 3.957 | 2.96× | 3.677 | 2.75× | ok |
| fmt | 0.498 | 2.140 | 4.30× | 1.742 | 3.50× | ok |
| hexxagon | 0.220 | 0.589 | 2.68× | 0.706 | 3.21× | ok |
| lambda | 0.044 | 0.267 | 6.07× | 0.171 | 3.89× | ok |
| minisat | 0.052 | 0.256 | 4.92× | 0.222 | 4.27× | ok |
| nlohmann-json | 0.409 | 1.745 | 4.27× | 1.722 | 4.21× | ok |
| pugixml | 0.270 | 1.369 | 5.07× | 0.942 | 3.49× | ok |
| pugixml-tests | 3.320 | 14.174 | 4.27× | 11.957 | 3.60× | ok |
| rapidjson | 0.113 | 0.463 | 4.10× | 0.338 | 2.99× | ok |
| re2 | 2.862 | 9.902 | 3.46× | 6.726 | 2.35× | ok |
| re2-test-re2 | 4.216 | 14.841 | 3.52× | 14.509 | 3.44× | ok |
| re2-test-search | 4.269 | 13.205 | 3.09× | 13.899 | 3.26× | ok |
| tramp3d-v4 | 0.675 | 8.095 | 11.99× | 2.593 | 3.84× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.107 | 0.797 | 7.45× | 0.480 | 4.49× | ok |
| Adobe-C++/loop_unroll | 0.431 | 5.163 | 11.98× | 3.990 | 9.26× | ok |
| Adobe-C++/simple_types_constant_folding | 0.244 | 2.882 | 11.81× | 2.239 | 9.18× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.242 | 2.135 | 8.82× | 1.753 | 7.24× | ok |
| Adobe-C++/stepanov_abstraction | 0.090 | 0.996 | 11.07× | 0.448 | 4.98× | ok |
| Adobe-C++/stepanov_vector | 0.109 | 1.392 | 12.77× | 0.638 | 5.85× | ok |
| Bullet | 5.798 | 37.545 | 6.48× | 27.002 | 4.66× | ok |
| CLAMR | 4.028 | 21.914 | 5.44× | 16.938 | 4.21× | ok |
| CoyoteBench/almabench | 0.030 | 0.169 | 5.63× | 0.113 | 3.77× | ok |
| CoyoteBench/fftbench | 0.115 | 0.397 | 3.45× | 0.407 | 3.54× | ok |
| CoyoteBench/huffbench | 0.040 | 0.199 | 4.98× | 0.138 | 3.45× | ok |
| CoyoteBench/lpbench | 0.034 | 0.169 | 4.97× | 0.182 | 5.35× | ok |
| DOE/HACCKernels | 0.109 | 0.367 | 3.37× | 0.364 | 3.34× | ok |
| DOE/HPCCG | 0.647 | 2.481 | 3.83× | 2.187 | 3.38× | ok |
| DOE/PENNANT | 1.625 | 6.245 | 3.84× | 5.482 | 3.37× | ok |
| DOE/miniFE | 0.826 | 4.176 | 5.06× | 3.563 | 4.31× | ok |
| Misc-C++-EH/spirit | 0.624 | 3.439 | 5.51× | 3.501 | 5.61× | ok |
| Misc-C++-Large/ray | 0.105 | 0.443 | 4.22× | 0.356 | 3.39× | ok |
| Misc-C++-Large/sphereflake | 0.109 | 0.752 | 6.90× | 0.372 | 3.41× | ok |
| Misc-C++/bigfib | 0.147 | 0.516 | 3.51× | 0.549 | 3.73× | ok |
| Misc-C++/oopack_v1p8 | 0.039 | 0.181 | 4.64× | 0.175 | 4.49× | ok |
| Misc-C++/stepanov_container | 0.217 | 0.895 | 4.12× | 0.911 | 4.20× | ok |
| Misc-C++/stepanov_v1p2 | 0.040 | 0.221 | 5.53× | 0.165 | 4.12× | ok |
| PAQ8p | 0.291 | 3.889 | 13.36× | 1.639 | 5.63× | ok |
| Prolangs-C++/life | 0.010 | 0.102 | 10.20× | 0.069 | 6.90× | ok |
| Prolangs-C++/ocean | 0.019 | 0.198 | 10.42× | 0.120 | 6.32× | ok |
| Prolangs-C++/primes | 0.007 | 0.035 | — | 0.034 | — | ok |
| Shootout-C++-EH/except | 0.069 | 0.175 | 2.54× | 0.215 | 3.12× | ok |
| Shootout-C++/ackermann | 0.068 | 0.191 | 2.81× | 0.211 | 3.10× | ok |
| Shootout-C++/ary3 | 0.089 | 0.224 | 2.52× | 0.245 | 2.75× | ok |
| Shootout-C++/fibo | 0.063 | 0.209 | 3.32× | 0.196 | 3.11× | ok |
| Shootout-C++/hash | 0.110 | 0.347 | 3.15× | 0.403 | 3.66× | ok |
| Shootout-C++/hash2 | 0.114 | 0.393 | 3.45× | 0.409 | 3.59× | ok |
| Shootout-C++/heapsort | 0.087 | 0.242 | 2.78× | 0.246 | 2.83× | ok |
| Shootout-C++/lists | 0.077 | 0.216 | 2.81× | 0.247 | 3.21× | ok |
| Shootout-C++/lists1 | 0.103 | 0.291 | 2.83× | 0.279 | 2.71× | ok |
| Shootout-C++/matrix | 0.070 | 0.218 | 3.11× | 0.278 | 3.97× | ok |
| Shootout-C++/methcall | 0.064 | 0.176 | 2.75× | 0.200 | 3.12× | ok |
| Shootout-C++/moments | 0.101 | 0.290 | 2.87× | 0.308 | 3.05× | ok |
| Shootout-C++/random | 0.081 | 0.194 | 2.40× | 0.240 | 2.96× | ok |
| Shootout-C++/sieve | 0.087 | 0.235 | 2.70× | 0.271 | 3.11× | ok |
| SmallPT | 0.038 | 0.281 | 7.39× | 0.159 | 4.18× | ok |
| Stanford/Bubblesort | 0.010 | 0.049 | 4.90× | 0.045 | 4.50× | ok |
| Stanford/FloatMM | 0.012 | 0.057 | 4.75× | 0.064 | 5.33× | ok |
| Stanford/Puzzle | 0.019 | 0.113 | 5.95× | 0.105 | 5.53× | ok |
| Stanford/Treesort | 0.013 | 0.077 | 5.92× | 0.048 | 3.69× | ok |
| bg/binarytrees/2 | 0.066 | 0.399 | 6.05× | 0.216 | 3.27× | ok |
| bg/fannkuchredux/3 | 0.035 | 0.109 | 3.11× | 0.106 | 3.03× | ok |
| bg/fasta/1 | 0.053 | 0.150 | 2.83× | 0.159 | 3.00× | ok |
| bg/fasta/2 | 0.054 | 0.160 | 2.96× | 0.201 | 3.72× | ok |
| bg/fasta/3 | 0.083 | 0.206 | 2.48× | 0.247 | 2.98× | ok |
| bg/fasta/4 | 0.070 | 0.177 | 2.53× | 0.197 | 2.81× | ok |
| bg/fasta/6 | 0.138 | 0.434 | 3.14× | 0.429 | 3.11× | ok |
| bg/mandelbrot/0 | 0.158 | 0.583 | 3.69× | 0.647 | 4.09× | ok |
| bg/mandelbrot/2 | 0.088 | 0.245 | 2.78× | 0.281 | 3.19× | ok |
| bg/mandelbrot/3 | 0.095 | 0.220 | 2.32× | 0.322 | 3.39× | ok |
| bg/mandelbrot/5 | 0.049 | 0.139 | 2.84× | 0.139 | 2.84× | ok |
| bg/mandelbrot/7 | 0.051 | 0.196 | 3.84× | 0.174 | 3.41× | ok |
| bg/mandelbrot/9 | 0.050 | 0.176 | 3.52× | 0.144 | 2.88× | ok |
| bg/nbody/1 | 0.040 | 0.152 | 3.80× | 0.144 | 3.60× | ok |
| bg/nbody/2 | 0.027 | 0.111 | 4.11× | 0.110 | 4.07× | ok |
| bg/nbody/3 | 0.029 | 0.124 | 4.28× | 0.094 | 3.24× | ok |
| bg/nbody/6 | 0.037 | 0.147 | 3.97× | 0.165 | 4.46× | ok |
| bg/pidigits/4 | 0.109 | 0.312 | 2.86× | 0.403 | 3.70× | ok |
| bg/pidigits/5 | 0.068 | 0.189 | 2.78× | 0.261 | 3.84× | ok |
| bg/revcomp/1 | 0.090 | 0.256 | 2.84× | 0.266 | 2.96× | ok |
| bg/revcomp/5 | 0.082 | 0.232 | 2.83× | 0.291 | 3.55× | ok |
| bg/spectralnorm/1 | 0.097 | 0.342 | 3.53× | 0.330 | 3.40× | ok |
| box2d | 1.679 | 7.195 | 4.29× | 6.098 | 3.63× | ok |
| fmt | 0.991 | 5.330 | 5.38× | 3.705 | 3.74× | ok |
| hexxagon | 0.255 | 0.945 | 3.71× | 1.105 | 4.33× | ok |
| lambda | 0.120 | 0.992 | 8.27× | 0.477 | 3.98× | ok |
| minisat | 0.133 | 0.906 | 6.81× | 0.665 | 5.00× | ok |
| nlohmann-json | 0.804 | 3.305 | 4.11× | 2.888 | 3.59× | ok |
| pugixml | 0.684 | 5.830 | 8.52× | 3.588 | 5.25× | ok |
| pugixml-tests | 4.728 | 33.816 | 7.15× | 23.654 | 5.00× | ok |
| rapidjson | 0.220 | 1.197 | 5.44× | 0.719 | 3.27× | ok |
| re2 | 2.952 | 17.415 | 5.90× | 10.037 | 3.40× | ok |
| re2-test-re2 | 5.528 | 25.760 | 4.66× | 22.678 | 4.10× | ok |
| re2-test-search | 5.471 | 23.010 | 4.21× | 21.501 | 3.93× | ok |
| tramp3d-v4 | 2.606 | 20.951 | 8.04× | 14.066 | 5.40× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.057 | 0.132 | 2.32× | 0.184 | 3.23× | ok |
| Adobe-C++/loop_unroll | 0.033 | 0.099 | 3.00× | 0.099 | 3.00× | ok |
| Adobe-C++/simple_types_constant_folding | 0.034 | 0.098 | 2.88× | 0.103 | 3.03× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.033 | 0.090 | 2.73× | 0.114 | 3.45× | ok |
| Adobe-C++/stepanov_abstraction | 0.032 | 0.065 | 2.03× | 0.086 | 2.69× | ok |
| Adobe-C++/stepanov_vector | 0.056 | 0.132 | 2.36× | 0.196 | 3.50× | ok |
| Bullet | 3.849 | 9.259 | 2.41× | 11.985 | 3.11× | ok |
| CLAMR | 2.064 | 4.419 | 2.14× | 7.051 | 3.42× | ok |
| CoyoteBench/almabench | 0.030 | 0.062 | 2.07× | 0.076 | 2.53× | ok |
| CoyoteBench/fftbench | 0.093 | 0.214 | 2.30× | 0.280 | 3.01× | ok |
| CoyoteBench/huffbench | 0.025 | 0.057 | 2.28× | 0.076 | 3.04× | ok |
| CoyoteBench/lpbench | 0.026 | 0.056 | 2.15× | 0.072 | 2.77× | ok |
| DOE/HACCKernels | 0.101 | 0.226 | 2.24× | 0.284 | 2.81× | ok |
| DOE/HPCCG | 0.581 | 1.525 | 2.62× | 1.731 | 2.98× | ok |
| DOE/PENNANT | 1.253 | 2.909 | 2.32× | 4.101 | 3.27× | ok |
| DOE/miniFE | 0.549 | 1.346 | 2.45× | 1.686 | 3.07× | ok |
| Misc-C++-EH/spirit | 0.285 | 0.826 | 2.90× | 0.982 | 3.45× | ok |
| Misc-C++-Large/ray | 0.092 | 0.223 | 2.42× | 0.273 | 2.97× | ok |
| Misc-C++-Large/sphereflake | 0.091 | 0.196 | 2.15× | 0.275 | 3.02× | ok |
| Misc-C++/bigfib | 0.104 | 0.235 | 2.26× | 0.354 | 3.40× | ok |
| Misc-C++/oopack_v1p8 | 0.029 | 0.062 | 2.14× | 0.084 | 2.90× | ok |
| Misc-C++/stepanov_container | 0.140 | 0.325 | 2.32× | 0.468 | 3.34× | ok |
| Misc-C++/stepanov_v1p2 | 0.028 | 0.061 | 2.18× | 0.074 | 2.64× | ok |
| PAQ8p | 0.039 | 0.119 | 3.05× | 0.120 | 3.08× | ok |
| Prolangs-C++/life | 0.003 | 0.010 | — | 0.020 | — | ok |
| Prolangs-C++/ocean | 0.008 | 0.021 | — | 0.034 | — | ok |
| Prolangs-C++/primes | 0.005 | 0.015 | — | 0.023 | — | ok |
| Shootout-C++-EH/except | 0.063 | 0.157 | 2.49× | 0.191 | 3.03× | ok |
| Shootout-C++/ackermann | 0.064 | 0.155 | 2.42× | 0.190 | 2.97× | ok |
| Shootout-C++/ary3 | 0.072 | 0.169 | 2.35× | 0.263 | 3.65× | ok |
| Shootout-C++/fibo | 0.061 | 0.144 | 2.36× | 0.207 | 3.39× | ok |
| Shootout-C++/hash | 0.086 | 0.195 | 2.27× | 0.271 | 3.15× | ok |
| Shootout-C++/hash2 | 0.087 | 0.194 | 2.23× | 0.246 | 2.83× | ok |
| Shootout-C++/heapsort | 0.096 | 0.180 | 1.88× | 0.214 | 2.23× | ok |
| Shootout-C++/lists | 0.070 | 0.159 | 2.27× | 0.202 | 2.89× | ok |
| Shootout-C++/lists1 | 0.094 | 0.180 | 1.91× | 0.223 | 2.37× | ok |
| Shootout-C++/matrix | 0.073 | 0.144 | 1.97× | 0.183 | 2.51× | ok |
| Shootout-C++/methcall | 0.062 | 0.151 | 2.44× | 0.178 | 2.87× | ok |
| Shootout-C++/moments | 0.085 | 0.184 | 2.16× | 0.223 | 2.62× | ok |
| Shootout-C++/random | 0.078 | 0.168 | 2.15× | 0.220 | 2.82× | ok |
| Shootout-C++/sieve | 0.077 | 0.171 | 2.22× | 0.225 | 2.92× | ok |
| SmallPT | 0.025 | 0.049 | 1.96× | 0.074 | 2.96× | ok |
| Stanford/Bubblesort | 0.008 | 0.021 | — | 0.028 | — | ok |
| Stanford/FloatMM | 0.008 | 0.020 | — | 0.029 | — | ok |
| Stanford/Puzzle | 0.009 | 0.021 | — | 0.029 | — | ok |
| Stanford/Treesort | 0.008 | 0.020 | — | 0.029 | — | ok |
| bg/binarytrees/2 | 0.062 | 0.144 | 2.32× | 0.196 | 3.16× | ok |
| bg/fannkuchredux/3 | 0.029 | 0.056 | 1.93× | 0.074 | 2.55× | ok |
| bg/fasta/1 | 0.045 | 0.089 | 1.98× | 0.113 | 2.51× | ok |
| bg/fasta/2 | 0.046 | 0.096 | 2.09× | 0.108 | 2.35× | ok |
| bg/fasta/3 | 0.071 | 0.155 | 2.18× | 0.202 | 2.85× | ok |
| bg/fasta/4 | 0.065 | 0.139 | 2.14× | 0.162 | 2.49× | ok |
| bg/fasta/6 | 0.108 | 0.250 | 2.31× | 0.337 | 3.12× | ok |
| bg/mandelbrot/0 | 0.122 | 0.269 | 2.20× | 0.366 | 3.00× | ok |
| bg/mandelbrot/2 | 0.073 | 0.175 | 2.40× | 0.235 | 3.22× | ok |
| bg/mandelbrot/3 | 0.094 | 0.177 | 1.88× | 0.229 | 2.44× | ok |
| bg/mandelbrot/5 | 0.040 | 0.089 | 2.22× | 0.106 | 2.65× | ok |
| bg/mandelbrot/7 | 0.039 | 0.082 | 2.10× | 0.108 | 2.77× | ok |
| bg/mandelbrot/9 | 0.039 | 0.080 | 2.05× | 0.122 | 3.13× | ok |
| bg/nbody/1 | 0.026 | 0.053 | 2.04× | 0.069 | 2.65× | ok |
| bg/nbody/2 | 0.023 | 0.053 | 2.30× | 0.069 | 3.00× | ok |
| bg/nbody/3 | 0.025 | 0.050 | 2.00× | 0.063 | 2.52× | ok |
| bg/nbody/6 | 0.025 | 0.048 | 1.92× | 0.079 | 3.16× | ok |
| bg/pidigits/4 | 0.107 | 0.259 | 2.42× | 0.331 | 3.09× | ok |
| bg/pidigits/5 | 0.078 | 0.152 | 1.95× | 0.235 | 3.01× | ok |
| bg/revcomp/1 | 0.069 | 0.158 | 2.29× | 0.206 | 2.99× | ok |
| bg/revcomp/5 | 0.071 | 0.145 | 2.04× | 0.241 | 3.39× | ok |
| bg/spectralnorm/1 | 0.096 | 0.223 | 2.32× | 0.268 | 2.79× | ok |
| box2d | 1.323 | 2.513 | 1.90× | 3.633 | 2.75× | ok |
| fmt | 0.409 | 1.012 | 2.47× | 1.463 | 3.58× | ok |
| hexxagon | 0.207 | 0.541 | 2.61× | 0.673 | 3.25× | ok |
| lambda | 0.035 | 0.104 | 2.97× | 0.126 | 3.60× | ok |
| minisat | 0.044 | 0.111 | 2.52× | 0.163 | 3.70× | ok |
| nlohmann-json | 0.361 | 0.759 | 2.10× | 1.243 | 3.44× | ok |
| pugixml | 0.203 | 0.470 | 2.32× | 0.693 | 3.41× | ok |
| pugixml-tests | 2.787 | 7.330 | 2.63× | 8.942 | 3.21× | ok |
| rapidjson | 0.094 | 0.235 | 2.50× | 0.287 | 3.05× | ok |
| re2 | 2.580 | 5.760 | 2.23× | 5.628 | 2.18× | ok |
| re2-test-re2 | 3.787 | 9.392 | 2.48× | 12.306 | 3.25× | ok |
| re2-test-search | 3.809 | 9.326 | 2.45× | 12.635 | 3.32× | ok |
| tramp3d-v4 | 0.568 | 2.234 | 3.93× | 1.525 | 2.68× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
