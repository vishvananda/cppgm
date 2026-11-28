# Public benchmarks: AMD EPYC

Measured compiler: [`cebc59908`](https://github.com/vishvananda/cppgm/commit/cebc59908fc34cebd8df5bff4a28b5fb14820320) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/46092715613) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: AMD EPYC 9V74 80-Core Processor.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.21× | 79 | 2.93× | 79 |
| Compile CPU, `-O0` | 2.97× | 79 | 3.13× | 79 |
| Compile CPU, `-O3` | 4.10× | 81 | 3.77× | 81 |
| Compile peak RSS, `-O0` | 1.46× | 81 | 2.33× | 81 |
| Compile peak RSS, `-O3` | 1.72× | 81 | 2.44× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.22× | 81 | 1.24× | 81 |
| Run CPU, `-O3` | 1.01× | 80 | 1.02× | 80 |
| Run instructions, `-O3` | 1.05× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.905 to 1.043; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.087 | 0.290 | 3.33× | 0.245 | 2.82× | ok |
| Adobe-C++/loop_unroll | 0.069 | 0.618 | 8.96× | 0.229 | 3.32× | ok |
| Adobe-C++/simple_types_constant_folding | 0.069 | 0.724 | 10.49× | 0.296 | 4.29× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.061 | 0.500 | 8.20× | 0.252 | 4.13× | ok |
| Adobe-C++/stepanov_abstraction | 0.048 | 0.210 | 4.38× | 0.142 | 2.96× | ok |
| Adobe-C++/stepanov_vector | 0.089 | 0.355 | 3.99× | 0.254 | 2.85× | ok |
| Bullet | 6.131 | 21.072 | 3.44× | 20.861 | 3.40× | ok |
| CLAMR | 3.232 | 11.268 | 3.49× | 10.026 | 3.10× | ok |
| CoyoteBench/almabench | 0.042 | 0.095 | 2.26× | 0.100 | 2.38× | ok |
| CoyoteBench/fftbench | 0.130 | 0.304 | 2.34× | 0.453 | 3.48× | ok |
| CoyoteBench/huffbench | 0.034 | 0.081 | 2.38× | 0.128 | 3.76× | ok |
| CoyoteBench/lpbench | 0.043 | 0.106 | 2.47× | 0.118 | 2.74× | ok |
| DOE/HACCKernels | 0.141 | 0.368 | 2.61× | 0.404 | 2.87× | ok |
| DOE/HPCCG | 0.796 | 1.880 | 2.36× | 2.486 | 3.12× | ok |
| DOE/PENNANT | 1.713 | 4.502 | 2.63× | 5.158 | 3.01× | ok |
| DOE/miniFE | 0.739 | 2.270 | 3.07× | 2.373 | 3.21× | ok |
| Misc-C++-EH/spirit | 0.501 | 3.137 | 6.26× | 2.081 | 4.15× | ok |
| Misc-C++-Large/ray | 0.136 | 0.333 | 2.45× | 0.420 | 3.09× | ok |
| Misc-C++-Large/sphereflake | 0.128 | 0.278 | 2.17× | 0.351 | 2.74× | ok |
| Misc-C++/bigfib | 0.144 | 0.461 | 3.20× | 0.482 | 3.35× | ok |
| Misc-C++/oopack_v1p8 | 0.042 | 0.109 | 2.60× | 0.157 | 3.74× | ok |
| Misc-C++/stepanov_container | 0.185 | 0.644 | 3.48× | 0.588 | 3.18× | ok |
| Misc-C++/stepanov_v1p2 | 0.040 | 0.129 | 3.23× | 0.114 | 2.85× | ok |
| PAQ8p | 0.090 | 0.538 | 5.98× | 0.265 | 2.94× | ok |
| Prolangs-C++/life | 0.005 | 0.036 | — | 0.034 | — | ok |
| Prolangs-C++/ocean | 0.015 | 0.080 | 5.33× | 0.056 | 3.73× | ok |
| Prolangs-C++/primes | 0.008 | 0.028 | — | 0.036 | — | ok |
| Shootout-C++-EH/except | 0.096 | 0.190 | 1.98× | 0.283 | 2.95× | ok |
| Shootout-C++/ackermann | 0.093 | 0.189 | 2.03× | 0.264 | 2.84× | ok |
| Shootout-C++/ary3 | 0.098 | 0.230 | 2.35× | 0.297 | 3.03× | ok |
| Shootout-C++/fibo | 0.091 | 0.223 | 2.45× | 0.270 | 2.97× | ok |
| Shootout-C++/hash | 0.123 | 0.348 | 2.83× | 0.368 | 2.99× | ok |
| Shootout-C++/hash2 | 0.116 | 0.346 | 2.98× | 0.362 | 3.12× | ok |
| Shootout-C++/heapsort | 0.111 | 0.231 | 2.08× | 0.305 | 2.75× | ok |
| Shootout-C++/lists | 0.095 | 0.230 | 2.42× | 0.296 | 3.12× | ok |
| Shootout-C++/lists1 | 0.109 | 0.240 | 2.20× | 0.314 | 2.88× | ok |
| Shootout-C++/matrix | 0.083 | 0.178 | 2.14× | 0.269 | 3.24× | ok |
| Shootout-C++/methcall | 0.087 | 0.188 | 2.16× | 0.270 | 3.10× | ok |
| Shootout-C++/moments | 0.121 | 0.300 | 2.48× | 0.372 | 3.07× | ok |
| Shootout-C++/random | 0.109 | 0.217 | 1.99× | 0.304 | 2.79× | ok |
| Shootout-C++/sieve | 0.115 | 0.251 | 2.18× | 0.332 | 2.89× | ok |
| SmallPT | 0.034 | 0.103 | 3.03× | 0.101 | 2.97× | ok |
| Stanford/Bubblesort | 0.012 | 0.036 | 3.00× | 0.041 | 3.42× | ok |
| Stanford/FloatMM | 0.012 | 0.035 | 2.92× | 0.040 | 3.33× | ok |
| Stanford/Puzzle | 0.012 | 0.044 | 3.67× | 0.046 | 3.83× | ok |
| Stanford/Treesort | 0.012 | 0.038 | 3.17× | 0.048 | 4.00× | ok |
| bg/binarytrees/2 | 0.085 | 0.203 | 2.39× | 0.272 | 3.20× | ok |
| bg/fannkuchredux/3 | 0.048 | 0.086 | 1.79× | 0.112 | 2.33× | ok |
| bg/fasta/1 | 0.063 | 0.154 | 2.44× | 0.170 | 2.70× | ok |
| bg/fasta/2 | 0.067 | 0.145 | 2.16× | 0.176 | 2.63× | ok |
| bg/fasta/3 | 0.101 | 0.220 | 2.18× | 0.289 | 2.86× | ok |
| bg/fasta/4 | 0.091 | 0.177 | 1.95× | 0.275 | 3.02× | ok |
| bg/fasta/6 | 0.169 | 0.435 | 2.57× | 0.556 | 3.29× | ok |
| bg/mandelbrot/0 | 0.183 | 0.550 | 3.01× | 0.585 | 3.20× | ok |
| bg/mandelbrot/2 | 0.111 | 0.285 | 2.57× | 0.322 | 2.90× | ok |
| bg/mandelbrot/3 | 0.115 | 0.239 | 2.08× | 0.337 | 2.93× | ok |
| bg/mandelbrot/5 | 0.049 | 0.125 | 2.55× | 0.165 | 3.37× | ok |
| bg/mandelbrot/7 | 0.057 | 0.144 | 2.53× | 0.161 | 2.82× | ok |
| bg/mandelbrot/9 | 0.052 | 0.134 | 2.58× | 0.159 | 3.06× | ok |
| bg/nbody/1 | 0.037 | 0.115 | 3.11× | 0.106 | 2.86× | ok |
| bg/nbody/2 | 0.037 | 0.081 | 2.19× | 0.097 | 2.62× | ok |
| bg/nbody/3 | 0.033 | 0.080 | 2.42× | 0.093 | 2.82× | ok |
| bg/nbody/6 | 0.037 | 0.122 | 3.30× | 0.112 | 3.03× | ok |
| bg/pidigits/4 | 0.147 | 0.359 | 2.44× | 0.460 | 3.13× | ok |
| bg/pidigits/5 | 0.091 | 0.203 | 2.23× | 0.321 | 3.53× | ok |
| bg/revcomp/1 | 0.101 | 0.248 | 2.46× | 0.312 | 3.09× | ok |
| bg/revcomp/5 | 0.108 | 0.230 | 2.13× | 0.285 | 2.64× | ok |
| bg/spectralnorm/1 | 0.136 | 0.318 | 2.34× | 0.388 | 2.85× | ok |
| box2d | 2.002 | 4.845 | 2.42× | 7.177 | 3.58× | ok |
| fmt | 0.604 | 2.779 | 4.60× | 2.041 | 3.38× | ok |
| hexxagon | 0.346 | 0.710 | 2.05× | 1.082 | 3.13× | ok |
| lambda | 0.080 | 0.344 | 4.30× | 0.295 | 3.69× | ok |
| minisat | 0.080 | 0.360 | 4.50× | 0.282 | 3.52× | ok |
| nlohmann-json | 0.530 | 2.266 | 4.28× | 2.272 | 4.29× | ok |
| pugixml | 0.294 | 1.329 | 4.52× | 1.061 | 3.61× | ok |
| pugixml-tests | 4.663 | 17.860 | 3.83× | 16.425 | 3.52× | ok |
| rapidjson | 0.157 | 0.555 | 3.54× | 0.459 | 2.92× | ok |
| re2 | 4.008 | 12.079 | 3.01× | 8.681 | 2.17× | ok |
| re2-test-re2 | 5.964 | 17.992 | 3.02× | 20.039 | 3.36× | ok |
| re2-test-search | 5.939 | 17.966 | 3.03× | 17.271 | 2.91× | ok |
| tramp3d-v4 | 0.858 | 9.961 | 11.61× | 3.316 | 3.86× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.118 | 1.091 | 9.25× | 0.516 | 4.37× | ok |
| Adobe-C++/loop_unroll | 0.481 | 6.072 | 12.62× | 4.846 | 10.07× | ok |
| Adobe-C++/simple_types_constant_folding | 0.285 | 3.007 | 10.55× | 2.619 | 9.19× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.240 | 2.565 | 10.69× | 2.007 | 8.36× | ok |
| Adobe-C++/stepanov_abstraction | 0.105 | 1.128 | 10.74× | 0.574 | 5.47× | ok |
| Adobe-C++/stepanov_vector | 0.133 | 1.437 | 10.80× | 0.716 | 5.38× | ok |
| Bullet | 7.809 | 44.173 | 5.66× | 30.641 | 3.92× | ok |
| CLAMR | 5.244 | 27.221 | 5.19× | 19.894 | 3.79× | ok |
| CoyoteBench/almabench | 0.044 | 0.197 | 4.48× | 0.133 | 3.02× | ok |
| CoyoteBench/fftbench | 0.158 | 0.481 | 3.04× | 0.580 | 3.67× | ok |
| CoyoteBench/huffbench | 0.050 | 0.231 | 4.62× | 0.185 | 3.70× | ok |
| CoyoteBench/lpbench | 0.053 | 0.227 | 4.28× | 0.257 | 4.85× | ok |
| DOE/HACCKernels | 0.147 | 0.447 | 3.04× | 0.460 | 3.13× | ok |
| DOE/HPCCG | 0.852 | 2.628 | 3.08× | 2.815 | 3.30× | ok |
| DOE/PENNANT | 2.167 | 6.796 | 3.14× | 6.933 | 3.20× | ok |
| DOE/miniFE | 0.959 | 4.483 | 4.67× | 4.155 | 4.33× | ok |
| Misc-C++-EH/spirit | 0.803 | 3.893 | 4.85× | 3.662 | 4.56× | ok |
| Misc-C++-Large/ray | 0.149 | 0.550 | 3.69× | 0.527 | 3.54× | ok |
| Misc-C++-Large/sphereflake | 0.133 | 0.831 | 6.25× | 0.429 | 3.23× | ok |
| Misc-C++/bigfib | 0.173 | 0.642 | 3.71× | 0.640 | 3.70× | ok |
| Misc-C++/oopack_v1p8 | 0.050 | 0.219 | 4.38× | 0.204 | 4.08× | ok |
| Misc-C++/stepanov_container | 0.245 | 0.915 | 3.73× | 1.050 | 4.29× | ok |
| Misc-C++/stepanov_v1p2 | 0.050 | 0.240 | 4.80× | 0.204 | 4.08× | ok |
| PAQ8p | 0.344 | 4.505 | 13.10× | 1.968 | 5.72× | ok |
| Prolangs-C++/life | 0.011 | 0.121 | 11.00× | 0.074 | 6.73× | ok |
| Prolangs-C++/ocean | 0.028 | 0.237 | 8.46× | 0.126 | 4.50× | ok |
| Prolangs-C++/primes | 0.010 | 0.039 | 3.90× | 0.044 | 4.40× | ok |
| Shootout-C++-EH/except | 0.096 | 0.225 | 2.34× | 0.269 | 2.80× | ok |
| Shootout-C++/ackermann | 0.096 | 0.257 | 2.68× | 0.266 | 2.77× | ok |
| Shootout-C++/ary3 | 0.106 | 0.276 | 2.60× | 0.377 | 3.56× | ok |
| Shootout-C++/fibo | 0.094 | 0.277 | 2.95× | 0.273 | 2.90× | ok |
| Shootout-C++/hash | 0.144 | 0.449 | 3.12× | 0.460 | 3.19× | ok |
| Shootout-C++/hash2 | 0.140 | 0.443 | 3.16× | 0.491 | 3.51× | ok |
| Shootout-C++/heapsort | 0.113 | 0.274 | 2.42× | 0.327 | 2.89× | ok |
| Shootout-C++/lists | 0.107 | 0.266 | 2.49× | 0.431 | 4.03× | ok |
| Shootout-C++/lists1 | 0.119 | 0.280 | 2.35× | 0.359 | 3.02× | ok |
| Shootout-C++/matrix | 0.098 | 0.231 | 2.36× | 0.383 | 3.91× | ok |
| Shootout-C++/methcall | 0.089 | 0.217 | 2.44× | 0.264 | 2.97× | ok |
| Shootout-C++/moments | 0.136 | 0.368 | 2.71× | 0.408 | 3.00× | ok |
| Shootout-C++/random | 0.113 | 0.248 | 2.19× | 0.311 | 2.75× | ok |
| Shootout-C++/sieve | 0.122 | 0.305 | 2.50× | 0.359 | 2.94× | ok |
| SmallPT | 0.046 | 0.302 | 6.57× | 0.182 | 3.96× | ok |
| Stanford/Bubblesort | 0.015 | 0.065 | 4.33× | 0.058 | 3.87× | ok |
| Stanford/FloatMM | 0.016 | 0.073 | 4.56× | 0.078 | 4.88× | ok |
| Stanford/Puzzle | 0.023 | 0.141 | 6.13× | 0.143 | 6.22× | ok |
| Stanford/Treesort | 0.020 | 0.096 | 4.80× | 0.062 | 3.10× | ok |
| bg/binarytrees/2 | 0.090 | 0.485 | 5.39× | 0.291 | 3.23× | ok |
| bg/fannkuchredux/3 | 0.051 | 0.130 | 2.55× | 0.145 | 2.84× | ok |
| bg/fasta/1 | 0.071 | 0.178 | 2.51× | 0.209 | 2.94× | ok |
| bg/fasta/2 | 0.070 | 0.188 | 2.69× | 0.206 | 2.94× | ok |
| bg/fasta/3 | 0.108 | 0.265 | 2.45× | 0.318 | 2.94× | ok |
| bg/fasta/4 | 0.114 | 0.215 | 1.89× | 0.261 | 2.29× | ok |
| bg/fasta/6 | 0.186 | 0.565 | 3.04× | 0.604 | 3.25× | ok |
| bg/mandelbrot/0 | 0.202 | 0.754 | 3.73× | 0.751 | 3.72× | ok |
| bg/mandelbrot/2 | 0.137 | 0.334 | 2.44× | 0.367 | 2.68× | ok |
| bg/mandelbrot/3 | 0.120 | 0.279 | 2.33× | 0.347 | 2.89× | ok |
| bg/mandelbrot/5 | 0.055 | 0.168 | 3.05× | 0.180 | 3.27× | ok |
| bg/mandelbrot/7 | 0.073 | 0.217 | 2.97× | 0.198 | 2.71× | ok |
| bg/mandelbrot/9 | 0.060 | 0.203 | 3.38× | 0.203 | 3.38× | ok |
| bg/nbody/1 | 0.050 | 0.177 | 3.54× | 0.192 | 3.84× | ok |
| bg/nbody/2 | 0.042 | 0.145 | 3.45× | 0.136 | 3.24× | ok |
| bg/nbody/3 | 0.037 | 0.135 | 3.65× | 0.123 | 3.32× | ok |
| bg/nbody/6 | 0.049 | 0.192 | 3.92× | 0.234 | 4.78× | ok |
| bg/pidigits/4 | 0.149 | 0.411 | 2.76× | 0.507 | 3.40× | ok |
| bg/pidigits/5 | 0.100 | 0.251 | 2.51× | 0.298 | 2.98× | ok |
| bg/revcomp/1 | 0.109 | 0.293 | 2.69× | 0.396 | 3.63× | ok |
| bg/revcomp/5 | 0.106 | 0.290 | 2.74× | 0.310 | 2.92× | ok |
| bg/spectralnorm/1 | 0.145 | 0.394 | 2.72× | 0.435 | 3.00× | ok |
| box2d | 2.389 | 8.797 | 3.68× | 8.891 | 3.72× | ok |
| fmt | 1.041 | 6.117 | 5.88× | 4.042 | 3.88× | ok |
| hexxagon | 0.377 | 1.309 | 3.47× | 1.330 | 3.53× | ok |
| lambda | 0.149 | 1.295 | 8.69× | 0.685 | 4.60× | ok |
| minisat | 0.166 | 1.208 | 7.28× | 0.806 | 4.86× | ok |
| nlohmann-json | 0.921 | 4.100 | 4.45× | 3.676 | 3.99× | ok |
| pugixml | 0.673 | 5.264 | 7.82× | 4.297 | 6.38× | ok |
| pugixml-tests | 6.550 | 39.919 | 6.09× | 30.253 | 4.62× | ok |
| rapidjson | 0.269 | 1.403 | 5.22× | 0.876 | 3.26× | ok |
| re2 | 3.934 | 21.061 | 5.35× | 12.241 | 3.11× | ok |
| re2-test-re2 | 7.041 | 31.769 | 4.51× | 28.014 | 3.98× | ok |
| re2-test-search | 7.047 | 28.165 | 4.00× | 18.995 | 2.70× | ok |
| tramp3d-v4 | 2.657 | 19.879 | 7.48× | 15.829 | 5.96× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.080 | 0.171 | 2.14× | 0.204 | 2.55× | ok |
| Adobe-C++/loop_unroll | 0.049 | 0.121 | 2.47× | 0.133 | 2.71× | ok |
| Adobe-C++/simple_types_constant_folding | 0.047 | 0.127 | 2.70× | 0.148 | 3.15× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.045 | 0.117 | 2.60× | 0.132 | 2.93× | ok |
| Adobe-C++/stepanov_abstraction | 0.039 | 0.091 | 2.33× | 0.106 | 2.72× | ok |
| Adobe-C++/stepanov_vector | 0.075 | 0.164 | 2.19× | 0.206 | 2.75× | ok |
| Bullet | 5.685 | 12.997 | 2.29× | 17.681 | 3.11× | ok |
| CLAMR | 2.761 | 5.895 | 2.14× | 8.628 | 3.12× | ok |
| CoyoteBench/almabench | 0.041 | 0.080 | 1.95× | 0.088 | 2.15× | ok |
| CoyoteBench/fftbench | 0.133 | 0.273 | 2.05× | 0.423 | 3.18× | ok |
| CoyoteBench/huffbench | 0.033 | 0.070 | 2.12× | 0.126 | 3.82× | ok |
| CoyoteBench/lpbench | 0.041 | 0.081 | 1.98× | 0.114 | 2.78× | ok |
| DOE/HACCKernels | 0.137 | 0.347 | 2.53× | 0.376 | 2.74× | ok |
| DOE/HPCCG | 0.772 | 1.652 | 2.14× | 2.279 | 2.95× | ok |
| DOE/PENNANT | 1.734 | 3.424 | 1.97× | 4.713 | 2.72× | ok |
| DOE/miniFE | 0.740 | 1.478 | 2.00× | 2.044 | 2.76× | ok |
| Misc-C++-EH/spirit | 0.399 | 1.080 | 2.71× | 1.652 | 4.14× | ok |
| Misc-C++-Large/ray | 0.133 | 0.277 | 2.08× | 0.361 | 2.71× | ok |
| Misc-C++-Large/sphereflake | 0.124 | 0.248 | 2.00× | 0.324 | 2.61× | ok |
| Misc-C++/bigfib | 0.131 | 0.316 | 2.41× | 0.427 | 3.26× | ok |
| Misc-C++/oopack_v1p8 | 0.044 | 0.079 | 1.80× | 0.146 | 3.32× | ok |
| Misc-C++/stepanov_container | 0.167 | 0.409 | 2.45× | 0.496 | 2.97× | ok |
| Misc-C++/stepanov_v1p2 | 0.037 | 0.075 | 2.03× | 0.094 | 2.54× | ok |
| PAQ8p | 0.059 | 0.168 | 2.85× | 0.156 | 2.64× | ok |
| Prolangs-C++/life | 0.004 | 0.012 | — | 0.024 | — | ok |
| Prolangs-C++/ocean | 0.013 | 0.032 | 2.46× | 0.038 | 2.92× | ok |
| Prolangs-C++/primes | 0.008 | 0.020 | — | 0.032 | — | ok |
| Shootout-C++-EH/except | 0.092 | 0.215 | 2.34× | 0.258 | 2.80× | ok |
| Shootout-C++/ackermann | 0.090 | 0.196 | 2.18× | 0.253 | 2.81× | ok |
| Shootout-C++/ary3 | 0.094 | 0.215 | 2.29× | 0.276 | 2.94× | ok |
| Shootout-C++/fibo | 0.093 | 0.215 | 2.31× | 0.252 | 2.71× | ok |
| Shootout-C++/hash | 0.122 | 0.267 | 2.19× | 0.326 | 2.67× | ok |
| Shootout-C++/hash2 | 0.113 | 0.257 | 2.27× | 0.323 | 2.86× | ok |
| Shootout-C++/heapsort | 0.112 | 0.234 | 2.09× | 0.293 | 2.62× | ok |
| Shootout-C++/lists | 0.091 | 0.193 | 2.12× | 0.272 | 2.99× | ok |
| Shootout-C++/lists1 | 0.107 | 0.202 | 1.89× | 0.286 | 2.67× | ok |
| Shootout-C++/matrix | 0.081 | 0.179 | 2.21× | 0.261 | 3.22× | ok |
| Shootout-C++/methcall | 0.085 | 0.190 | 2.24× | 0.263 | 3.09× | ok |
| Shootout-C++/moments | 0.121 | 0.237 | 1.96× | 0.386 | 3.19× | ok |
| Shootout-C++/random | 0.105 | 0.220 | 2.10× | 0.300 | 2.86× | ok |
| Shootout-C++/sieve | 0.113 | 0.239 | 2.12× | 0.291 | 2.58× | ok |
| SmallPT | 0.032 | 0.070 | 2.19× | 0.092 | 2.88× | ok |
| Stanford/Bubblesort | 0.012 | 0.031 | 2.58× | 0.038 | 3.17× | ok |
| Stanford/FloatMM | 0.012 | 0.030 | 2.50× | 0.037 | 3.08× | ok |
| Stanford/Puzzle | 0.012 | 0.032 | 2.67× | 0.042 | 3.50× | ok |
| Stanford/Treesort | 0.012 | 0.031 | 2.58× | 0.043 | 3.58× | ok |
| bg/binarytrees/2 | 0.084 | 0.190 | 2.26× | 0.258 | 3.07× | ok |
| bg/fannkuchredux/3 | 0.046 | 0.076 | 1.65× | 0.107 | 2.33× | ok |
| bg/fasta/1 | 0.062 | 0.125 | 2.02× | 0.151 | 2.44× | ok |
| bg/fasta/2 | 0.063 | 0.118 | 1.87× | 0.154 | 2.44× | ok |
| bg/fasta/3 | 0.097 | 0.204 | 2.10× | 0.271 | 2.79× | ok |
| bg/fasta/4 | 0.089 | 0.168 | 1.89× | 0.233 | 2.62× | ok |
| bg/fasta/6 | 0.157 | 0.314 | 2.00× | 0.506 | 3.22× | ok |
| bg/mandelbrot/0 | 0.168 | 0.363 | 2.16× | 0.507 | 3.02× | ok |
| bg/mandelbrot/2 | 0.108 | 0.245 | 2.27× | 0.305 | 2.82× | ok |
| bg/mandelbrot/3 | 0.114 | 0.233 | 2.04× | 0.321 | 2.82× | ok |
| bg/mandelbrot/5 | 0.047 | 0.103 | 2.19× | 0.148 | 3.15× | ok |
| bg/mandelbrot/7 | 0.053 | 0.108 | 2.04× | 0.140 | 2.64× | ok |
| bg/mandelbrot/9 | 0.048 | 0.098 | 2.04× | 0.141 | 2.94× | ok |
| bg/nbody/1 | 0.035 | 0.069 | 1.97× | 0.090 | 2.57× | ok |
| bg/nbody/2 | 0.035 | 0.069 | 1.97× | 0.092 | 2.63× | ok |
| bg/nbody/3 | 0.032 | 0.066 | 2.06× | 0.085 | 2.66× | ok |
| bg/nbody/6 | 0.035 | 0.076 | 2.17× | 0.094 | 2.69× | ok |
| bg/pidigits/4 | 0.143 | 0.320 | 2.24× | 0.416 | 2.91× | ok |
| bg/pidigits/5 | 0.093 | 0.216 | 2.32× | 0.324 | 3.48× | ok |
| bg/revcomp/1 | 0.097 | 0.213 | 2.20× | 0.274 | 2.82× | ok |
| bg/revcomp/5 | 0.103 | 0.229 | 2.22× | 0.253 | 2.46× | ok |
| bg/spectralnorm/1 | 0.129 | 0.268 | 2.08× | 0.357 | 2.77× | ok |
| box2d | 1.849 | 3.504 | 1.90× | 6.283 | 3.40× | ok |
| fmt | 0.566 | 1.137 | 2.01× | 1.915 | 3.38× | ok |
| hexxagon | 0.354 | 0.642 | 1.81× | 1.072 | 3.03× | ok |
| lambda | 0.066 | 0.152 | 2.30× | 0.240 | 3.64× | ok |
| minisat | 0.068 | 0.165 | 2.43× | 0.208 | 3.06× | ok |
| nlohmann-json | 0.428 | 1.121 | 2.62× | 1.851 | 4.32× | ok |
| pugixml | 0.233 | 0.532 | 2.28× | 0.785 | 3.37× | ok |
| pugixml-tests | 4.044 | 8.845 | 2.19× | 13.639 | 3.37× | ok |
| rapidjson | 0.126 | 0.299 | 2.37× | 0.359 | 2.85× | ok |
| re2 | 3.798 | 8.000 | 2.11× | 7.438 | 1.96× | ok |
| re2-test-re2 | 5.365 | 12.305 | 2.29× | 17.234 | 3.21× | ok |
| re2-test-search | 5.540 | 11.789 | 2.13× | 17.601 | 3.18× | ok |
| tramp3d-v4 | 0.529 | 2.939 | 5.56× | 1.967 | 3.72× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
