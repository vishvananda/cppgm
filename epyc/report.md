# Public benchmarks: AMD EPYC

Measured compiler: [`4ff958f6f`](https://github.com/vishvananda/cppgm/commit/4ff958f6fa4b8a4ac69f0cd4eb2a9fdf6d73b156) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/45790989032) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: AMD EPYC 9V74 80-Core Processor.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.20× | 79 | 2.90× | 79 |
| Compile CPU, `-O0` | 2.96× | 79 | 3.10× | 79 |
| Compile CPU, `-O3` | 4.13× | 80 | 3.88× | 80 |
| Compile peak RSS, `-O0` | 1.46× | 81 | 2.35× | 81 |
| Compile peak RSS, `-O3` | 1.72× | 81 | 2.44× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.21× | 81 | 1.24× | 81 |
| Run CPU, `-O3` | 1.01× | 80 | 1.02× | 80 |
| Run instructions, `-O3` | 1.05× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.944 to 1.076; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.088 | 0.304 | 3.45× | 0.259 | 2.94× | ok |
| Adobe-C++/loop_unroll | 0.067 | 0.613 | 9.15× | 0.240 | 3.58× | ok |
| Adobe-C++/simple_types_constant_folding | 0.082 | 0.707 | 8.62× | 0.305 | 3.72× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.067 | 0.526 | 7.85× | 0.268 | 4.00× | ok |
| Adobe-C++/stepanov_abstraction | 0.053 | 0.214 | 4.04× | 0.185 | 3.49× | ok |
| Adobe-C++/stepanov_vector | 0.090 | 0.353 | 3.92× | 0.254 | 2.82× | ok |
| Bullet | 6.140 | 20.227 | 3.29× | 19.394 | 3.16× | ok |
| CLAMR | 2.831 | 10.649 | 3.76× | 9.352 | 3.30× | ok |
| CoyoteBench/almabench | 0.039 | 0.094 | 2.41× | 0.115 | 2.95× | ok |
| CoyoteBench/fftbench | 0.123 | 0.305 | 2.48× | 0.363 | 2.95× | ok |
| CoyoteBench/huffbench | 0.037 | 0.081 | 2.19× | 0.094 | 2.54× | ok |
| CoyoteBench/lpbench | 0.042 | 0.096 | 2.29× | 0.096 | 2.29× | ok |
| DOE/HACCKernels | 0.138 | 0.304 | 2.20× | 0.401 | 2.91× | ok |
| DOE/HPCCG | 0.784 | 1.904 | 2.43× | 2.408 | 3.07× | ok |
| DOE/PENNANT | 1.955 | 4.381 | 2.24× | 5.189 | 2.65× | ok |
| DOE/miniFE | 0.749 | 2.247 | 3.00× | 2.928 | 3.91× | ok |
| Misc-C++-EH/spirit | 0.578 | 2.858 | 4.94× | 2.029 | 3.51× | ok |
| Misc-C++-Large/ray | 0.123 | 0.343 | 2.79× | 0.348 | 2.83× | ok |
| Misc-C++-Large/sphereflake | 0.111 | 0.251 | 2.26× | 0.307 | 2.77× | ok |
| Misc-C++/bigfib | 0.136 | 0.401 | 2.95× | 0.502 | 3.69× | ok |
| Misc-C++/oopack_v1p8 | 0.039 | 0.098 | 2.51× | 0.110 | 2.82× | ok |
| Misc-C++/stepanov_container | 0.210 | 0.583 | 2.78× | 0.690 | 3.29× | ok |
| Misc-C++/stepanov_v1p2 | 0.039 | 0.133 | 3.41× | 0.115 | 2.95× | ok |
| PAQ8p | 0.083 | 0.522 | 6.29× | 0.277 | 3.34× | ok |
| Prolangs-C++/life | 0.005 | 0.038 | — | 0.035 | — | ok |
| Prolangs-C++/ocean | 0.015 | 0.074 | 4.93× | 0.060 | 4.00× | ok |
| Prolangs-C++/primes | 0.007 | 0.029 | — | 0.033 | — | ok |
| Shootout-C++-EH/except | 0.095 | 0.226 | 2.38× | 0.341 | 3.59× | ok |
| Shootout-C++/ackermann | 0.089 | 0.201 | 2.26× | 0.319 | 3.58× | ok |
| Shootout-C++/ary3 | 0.099 | 0.233 | 2.35× | 0.387 | 3.91× | ok |
| Shootout-C++/fibo | 0.092 | 0.187 | 2.03× | 0.254 | 2.76× | ok |
| Shootout-C++/hash | 0.128 | 0.337 | 2.63× | 0.357 | 2.79× | ok |
| Shootout-C++/hash2 | 0.129 | 0.404 | 3.13× | 0.399 | 3.09× | ok |
| Shootout-C++/heapsort | 0.112 | 0.226 | 2.02× | 0.305 | 2.72× | ok |
| Shootout-C++/lists | 0.108 | 0.236 | 2.19× | 0.310 | 2.87× | ok |
| Shootout-C++/lists1 | 0.105 | 0.265 | 2.52× | 0.322 | 3.07× | ok |
| Shootout-C++/matrix | 0.084 | 0.181 | 2.15× | 0.255 | 3.04× | ok |
| Shootout-C++/methcall | 0.087 | 0.184 | 2.11× | 0.253 | 2.91× | ok |
| Shootout-C++/moments | 0.121 | 0.299 | 2.47× | 0.331 | 2.74× | ok |
| Shootout-C++/random | 0.102 | 0.220 | 2.16× | 0.307 | 3.01× | ok |
| Shootout-C++/sieve | 0.109 | 0.274 | 2.51× | 0.323 | 2.96× | ok |
| SmallPT | 0.037 | 0.105 | 2.84× | 0.101 | 2.73× | ok |
| Stanford/Bubblesort | 0.011 | 0.033 | 3.00× | 0.038 | 3.45× | ok |
| Stanford/FloatMM | 0.011 | 0.033 | 3.00× | 0.040 | 3.64× | ok |
| Stanford/Puzzle | 0.013 | 0.042 | 3.23× | 0.041 | 3.15× | ok |
| Stanford/Treesort | 0.012 | 0.035 | 2.92× | 0.041 | 3.42× | ok |
| bg/binarytrees/2 | 0.088 | 0.203 | 2.31× | 0.249 | 2.83× | ok |
| bg/fannkuchredux/3 | 0.041 | 0.088 | 2.15× | 0.103 | 2.51× | ok |
| bg/fasta/1 | 0.064 | 0.148 | 2.31× | 0.166 | 2.59× | ok |
| bg/fasta/2 | 0.065 | 0.144 | 2.22× | 0.167 | 2.57× | ok |
| bg/fasta/3 | 0.104 | 0.211 | 2.03× | 0.315 | 3.03× | ok |
| bg/fasta/4 | 0.088 | 0.179 | 2.03× | 0.234 | 2.66× | ok |
| bg/fasta/6 | 0.153 | 0.448 | 2.93× | 0.519 | 3.39× | ok |
| bg/mandelbrot/0 | 0.176 | 0.516 | 2.93× | 0.539 | 3.06× | ok |
| bg/mandelbrot/2 | 0.108 | 0.285 | 2.64× | 0.332 | 3.07× | ok |
| bg/mandelbrot/3 | 0.133 | 0.235 | 1.77× | 0.360 | 2.71× | ok |
| bg/mandelbrot/5 | 0.050 | 0.140 | 2.80× | 0.151 | 3.02× | ok |
| bg/mandelbrot/7 | 0.057 | 0.146 | 2.56× | 0.168 | 2.95× | ok |
| bg/mandelbrot/9 | 0.053 | 0.140 | 2.64× | 0.160 | 3.02× | ok |
| bg/nbody/1 | 0.037 | 0.118 | 3.19× | 0.115 | 3.11× | ok |
| bg/nbody/2 | 0.038 | 0.084 | 2.21× | 0.091 | 2.39× | ok |
| bg/nbody/3 | 0.035 | 0.080 | 2.29× | 0.094 | 2.69× | ok |
| bg/nbody/6 | 0.036 | 0.116 | 3.22× | 0.108 | 3.00× | ok |
| bg/pidigits/4 | 0.152 | 0.362 | 2.38× | 0.539 | 3.55× | ok |
| bg/pidigits/5 | 0.093 | 0.215 | 2.31× | 0.275 | 2.96× | ok |
| bg/revcomp/1 | 0.105 | 0.254 | 2.42× | 0.354 | 3.37× | ok |
| bg/revcomp/5 | 0.087 | 0.232 | 2.67× | 0.272 | 3.13× | ok |
| bg/spectralnorm/1 | 0.143 | 0.338 | 2.36× | 0.420 | 2.94× | ok |
| box2d | 1.787 | 5.386 | 3.01× | 7.033 | 3.94× | ok |
| fmt | 0.629 | 2.505 | 3.98× | 1.986 | 3.16× | ok |
| hexxagon | 0.317 | 0.736 | 2.32× | 1.044 | 3.29× | ok |
| lambda | 0.077 | 0.362 | 4.70× | 0.250 | 3.25× | ok |
| minisat | 0.079 | 0.355 | 4.49× | 0.275 | 3.48× | ok |
| nlohmann-json | 0.480 | 2.138 | 4.45× | 2.158 | 4.50× | ok |
| pugixml | 0.357 | 1.503 | 4.21× | 1.106 | 3.10× | ok |
| pugixml-tests | 4.423 | 16.628 | 3.76× | 14.514 | 3.28× | ok |
| rapidjson | 0.146 | 0.508 | 3.48× | 0.501 | 3.43× | ok |
| re2 | 3.856 | 11.785 | 3.06× | 8.286 | 2.15× | ok |
| re2-test-re2 | 5.903 | 17.674 | 2.99× | 19.517 | 3.31× | ok |
| re2-test-search | 5.385 | 16.152 | 3.00× | 18.914 | 3.51× | ok |
| tramp3d-v4 | 0.878 | 9.669 | 11.01× | 3.103 | 3.53× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.132 | 1.013 | 7.67× | 0.572 | 4.33× | ok |
| Adobe-C++/loop_unroll | 0.509 | 6.216 | 12.21× | 5.160 | 10.14× | ok |
| Adobe-C++/simple_types_constant_folding | 0.288 | 3.245 | 11.27× | 2.581 | 8.96× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.287 | 2.616 | 9.11× | 2.103 | 7.33× | ok |
| Adobe-C++/stepanov_abstraction | 0.119 | 1.234 | 10.37× | 0.564 | 4.74× | ok |
| Adobe-C++/stepanov_vector | 0.138 | 1.632 | 11.83× | 0.708 | 5.13× | ok |
| Bullet | 7.754 | 40.313 | 5.20× | 30.422 | 3.92× | ok |
| CLAMR | 4.743 | 26.666 | 5.62× | 19.543 | 4.12× | ok |
| CoyoteBench/almabench | 0.044 | 0.211 | 4.80× | 0.156 | 3.55× | ok |
| CoyoteBench/fftbench | 0.142 | 0.475 | 3.35× | 0.626 | 4.41× | ok |
| CoyoteBench/huffbench | 0.046 | 0.262 | 5.70× | 0.153 | 3.33× | ok |
| CoyoteBench/lpbench | 0.044 | 0.228 | 5.18× | 0.243 | 5.52× | ok |
| DOE/HACCKernels | 0.145 | 0.424 | 2.92× | 0.462 | 3.19× | ok |
| DOE/HPCCG | 0.838 | 2.663 | 3.18× | 2.772 | 3.31× | ok |
| DOE/PENNANT | 2.134 | 6.808 | 3.19× | 7.349 | 3.44× | ok |
| DOE/miniFE | 1.089 | 4.342 | 3.99× | 3.858 | 3.54× | ok |
| Misc-C++-EH/spirit | 0.738 | 4.387 | 5.94× | 4.061 | 5.50× | ok |
| Misc-C++-Large/ray | 0.125 | 0.507 | 4.06× | 0.408 | 3.26× | ok |
| Misc-C++-Large/sphereflake | 0.125 | 0.811 | 6.49× | 0.486 | 3.89× | ok |
| Misc-C++/bigfib | 0.159 | 0.601 | 3.78× | 0.535 | 3.36× | ok |
| Misc-C++/oopack_v1p8 | 0.046 | 0.183 | 3.98× | 0.211 | 4.59× | ok |
| Misc-C++/stepanov_container | 0.251 | 1.002 | 3.99× | 1.203 | 4.79× | ok |
| Misc-C++/stepanov_v1p2 | 0.048 | 0.250 | 5.21× | 0.254 | 5.29× | ok |
| PAQ8p | 0.338 | 4.370 | 12.93× | 2.065 | 6.11× | ok |
| Prolangs-C++/life | 0.011 | 0.115 | 10.45× | 0.078 | 7.09× | ok |
| Prolangs-C++/ocean | 0.029 | 0.215 | 7.41× | 0.134 | 4.62× | ok |
| Prolangs-C++/primes | 0.009 | 0.040 | — | 0.040 | — | ok |
| Shootout-C++-EH/except | 0.097 | 0.257 | 2.65× | 0.349 | 3.60× | ok |
| Shootout-C++/ackermann | 0.103 | 0.225 | 2.18× | 0.309 | 3.00× | ok |
| Shootout-C++/ary3 | 0.127 | 0.271 | 2.13× | 0.417 | 3.28× | ok |
| Shootout-C++/fibo | 0.091 | 0.238 | 2.62× | 0.260 | 2.86× | ok |
| Shootout-C++/hash | 0.146 | 0.437 | 2.99× | 0.452 | 3.10× | ok |
| Shootout-C++/hash2 | 0.154 | 0.518 | 3.36× | 0.520 | 3.38× | ok |
| Shootout-C++/heapsort | 0.113 | 0.294 | 2.60× | 0.322 | 2.85× | ok |
| Shootout-C++/lists | 0.101 | 0.273 | 2.70× | 0.321 | 3.18× | ok |
| Shootout-C++/lists1 | 0.116 | 0.309 | 2.66× | 0.361 | 3.11× | ok |
| Shootout-C++/matrix | 0.093 | 0.237 | 2.55× | 0.355 | 3.82× | ok |
| Shootout-C++/methcall | 0.086 | 0.221 | 2.57× | 0.272 | 3.16× | ok |
| Shootout-C++/moments | 0.129 | 0.364 | 2.82× | 0.396 | 3.07× | ok |
| Shootout-C++/random | 0.108 | 0.245 | 2.27× | 0.325 | 3.01× | ok |
| Shootout-C++/sieve | 0.106 | 0.268 | 2.53× | 0.360 | 3.40× | ok |
| SmallPT | 0.046 | 0.330 | 7.17× | 0.188 | 4.09× | ok |
| Stanford/Bubblesort | 0.014 | 0.062 | 4.43× | 0.055 | 3.93× | ok |
| Stanford/FloatMM | 0.015 | 0.070 | 4.67× | 0.076 | 5.07× | ok |
| Stanford/Puzzle | 0.025 | 0.139 | 5.56× | 0.132 | 5.28× | ok |
| Stanford/Treesort | 0.017 | 0.093 | 5.47× | 0.062 | 3.65× | ok |
| bg/binarytrees/2 | 0.091 | 0.471 | 5.18× | 0.268 | 2.95× | ok |
| bg/fannkuchredux/3 | 0.046 | 0.135 | 2.93× | 0.135 | 2.93× | ok |
| bg/fasta/1 | 0.067 | 0.185 | 2.76× | 0.205 | 3.06× | ok |
| bg/fasta/2 | 0.070 | 0.183 | 2.61× | 0.262 | 3.74× | ok |
| bg/fasta/3 | 0.107 | 0.255 | 2.38× | 0.356 | 3.33× | ok |
| bg/fasta/4 | 0.093 | 0.208 | 2.24× | 0.270 | 2.90× | ok |
| bg/fasta/6 | 0.180 | 0.495 | 2.75× | 0.630 | 3.50× | ok |
| bg/mandelbrot/0 | 0.206 | 0.779 | 3.78× | 0.755 | 3.67× | ok |
| bg/mandelbrot/2 | 0.110 | 0.337 | 3.06× | 0.354 | 3.22× | ok |
| bg/mandelbrot/3 | 0.119 | 0.272 | 2.29× | 0.375 | 3.15× | ok |
| bg/mandelbrot/5 | 0.055 | 0.150 | 2.73× | 0.233 | 4.24× | ok |
| bg/mandelbrot/7 | 0.066 | 0.223 | 3.38× | 0.201 | 3.05× | ok |
| bg/mandelbrot/9 | 0.060 | 0.200 | 3.33× | 0.193 | 3.22× | ok |
| bg/nbody/1 | 0.049 | 0.173 | 3.53× | 0.200 | 4.08× | ok |
| bg/nbody/2 | 0.041 | 0.146 | 3.56× | 0.132 | 3.22× | ok |
| bg/nbody/3 | 0.040 | 0.137 | 3.43× | 0.138 | 3.45× | ok |
| bg/nbody/6 | 0.049 | 0.184 | 3.76× | 0.202 | 4.12× | ok |
| bg/pidigits/4 | 0.154 | 0.421 | 2.73× | 0.615 | 3.99× | ok |
| bg/pidigits/5 | 0.097 | 0.241 | 2.48× | 0.289 | 2.98× | ok |
| bg/revcomp/1 | 0.110 | 0.281 | 2.55× | 0.429 | 3.90× | ok |
| bg/revcomp/5 | 0.095 | 0.259 | 2.73× | 0.309 | 3.25× | ok |
| bg/spectralnorm/1 | 0.150 | 0.412 | 2.75× | 0.531 | 3.54× | ok |
| box2d | 2.288 | 8.476 | 3.70× | 8.658 | 3.78× | ok |
| fmt | 1.099 | 5.440 | 4.95× | 3.947 | 3.59× | ok |
| hexxagon | 0.359 | 1.178 | 3.28× | 1.339 | 3.73× | ok |
| lambda | 0.129 | 1.268 | 9.83× | 0.608 | 4.71× | ok |
| minisat | 0.169 | 1.175 | 6.95× | 0.690 | 4.08× | ok |
| nlohmann-json | 0.975 | 3.903 | 4.00× | 3.214 | 3.30× | ok |
| pugixml | 0.776 | 6.217 | 8.01× | 4.234 | 5.46× | ok |
| pugixml-tests | 6.266 | 38.685 | 6.17× | 29.071 | 4.64× | ok |
| rapidjson | 0.271 | 1.178 | 4.35× | 0.879 | 3.24× | ok |
| re2 | 3.818 | 19.682 | 5.16× | 11.534 | 3.02× | ok |
| re2-test-re2 | 7.012 | 31.045 | 4.43× | 27.374 | 3.90× | ok |
| re2-test-search | 6.835 | 27.532 | 4.03× | 21.809 | 3.19× | ok |
| tramp3d-v4 | 2.564 | 19.225 | 7.50× | 15.006 | 5.85× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.082 | 0.165 | 2.01× | 0.199 | 2.43× | ok |
| Adobe-C++/loop_unroll | 0.047 | 0.122 | 2.60× | 0.138 | 2.94× | ok |
| Adobe-C++/simple_types_constant_folding | 0.056 | 0.129 | 2.30× | 0.150 | 2.68× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.050 | 0.118 | 2.36× | 0.174 | 3.48× | ok |
| Adobe-C++/stepanov_abstraction | 0.044 | 0.093 | 2.11× | 0.150 | 3.41× | ok |
| Adobe-C++/stepanov_vector | 0.089 | 0.165 | 1.85× | 0.204 | 2.29× | ok |
| Bullet | 5.657 | 13.042 | 2.31× | 17.421 | 3.08× | ok |
| CLAMR | 2.570 | 5.932 | 2.31× | 7.698 | 3.00× | ok |
| CoyoteBench/almabench | 0.039 | 0.079 | 2.03× | 0.110 | 2.82× | ok |
| CoyoteBench/fftbench | 0.120 | 0.272 | 2.27× | 0.345 | 2.88× | ok |
| CoyoteBench/huffbench | 0.036 | 0.070 | 1.94× | 0.091 | 2.53× | ok |
| CoyoteBench/lpbench | 0.039 | 0.083 | 2.13× | 0.091 | 2.33× | ok |
| DOE/HACCKernels | 0.133 | 0.280 | 2.11× | 0.367 | 2.76× | ok |
| DOE/HPCCG | 0.761 | 1.667 | 2.19× | 2.251 | 2.96× | ok |
| DOE/PENNANT | 1.805 | 3.418 | 1.89× | 4.948 | 2.74× | ok |
| DOE/miniFE | 0.671 | 1.501 | 2.24× | 2.699 | 4.02× | ok |
| Misc-C++-EH/spirit | 0.419 | 1.035 | 2.47× | 1.327 | 3.17× | ok |
| Misc-C++-Large/ray | 0.119 | 0.308 | 2.59× | 0.333 | 2.80× | ok |
| Misc-C++-Large/sphereflake | 0.103 | 0.225 | 2.18× | 0.288 | 2.80× | ok |
| Misc-C++/bigfib | 0.125 | 0.271 | 2.17× | 0.369 | 2.95× | ok |
| Misc-C++/oopack_v1p8 | 0.037 | 0.071 | 1.92× | 0.097 | 2.62× | ok |
| Misc-C++/stepanov_container | 0.194 | 0.351 | 1.81× | 0.620 | 3.20× | ok |
| Misc-C++/stepanov_v1p2 | 0.037 | 0.084 | 2.27× | 0.096 | 2.59× | ok |
| PAQ8p | 0.056 | 0.154 | 2.75× | 0.183 | 3.27× | ok |
| Prolangs-C++/life | 0.004 | 0.013 | — | 0.025 | — | ok |
| Prolangs-C++/ocean | 0.012 | 0.029 | 2.42× | 0.045 | 3.75× | ok |
| Prolangs-C++/primes | 0.007 | 0.021 | — | 0.029 | — | ok |
| Shootout-C++-EH/except | 0.091 | 0.221 | 2.43× | 0.335 | 3.68× | ok |
| Shootout-C++/ackermann | 0.094 | 0.208 | 2.21× | 0.292 | 3.11× | ok |
| Shootout-C++/ary3 | 0.095 | 0.213 | 2.24× | 0.373 | 3.93× | ok |
| Shootout-C++/fibo | 0.091 | 0.195 | 2.14× | 0.243 | 2.67× | ok |
| Shootout-C++/hash | 0.124 | 0.258 | 2.08× | 0.323 | 2.60× | ok |
| Shootout-C++/hash2 | 0.123 | 0.307 | 2.50× | 0.334 | 2.72× | ok |
| Shootout-C++/heapsort | 0.113 | 0.228 | 2.02× | 0.290 | 2.57× | ok |
| Shootout-C++/lists | 0.102 | 0.195 | 1.91× | 0.281 | 2.75× | ok |
| Shootout-C++/lists1 | 0.101 | 0.214 | 2.12× | 0.309 | 3.06× | ok |
| Shootout-C++/matrix | 0.082 | 0.178 | 2.17× | 0.240 | 2.93× | ok |
| Shootout-C++/methcall | 0.086 | 0.190 | 2.21× | 0.239 | 2.78× | ok |
| Shootout-C++/moments | 0.115 | 0.233 | 2.03× | 0.301 | 2.62× | ok |
| Shootout-C++/random | 0.102 | 0.224 | 2.20× | 0.292 | 2.86× | ok |
| Shootout-C++/sieve | 0.105 | 0.226 | 2.15× | 0.294 | 2.80× | ok |
| SmallPT | 0.037 | 0.070 | 1.89× | 0.093 | 2.51× | ok |
| Stanford/Bubblesort | 0.012 | 0.029 | 2.42× | 0.036 | 3.00× | ok |
| Stanford/FloatMM | 0.012 | 0.028 | 2.33× | 0.036 | 3.00× | ok |
| Stanford/Puzzle | 0.012 | 0.030 | 2.50× | 0.035 | 2.92× | ok |
| Stanford/Treesort | 0.012 | 0.029 | 2.42× | 0.037 | 3.08× | ok |
| bg/binarytrees/2 | 0.089 | 0.191 | 2.15× | 0.239 | 2.69× | ok |
| bg/fannkuchredux/3 | 0.040 | 0.082 | 2.05× | 0.098 | 2.45× | ok |
| bg/fasta/1 | 0.062 | 0.117 | 1.89× | 0.153 | 2.47× | ok |
| bg/fasta/2 | 0.063 | 0.114 | 1.81× | 0.157 | 2.49× | ok |
| bg/fasta/3 | 0.100 | 0.193 | 1.93× | 0.334 | 3.34× | ok |
| bg/fasta/4 | 0.088 | 0.203 | 2.31× | 0.224 | 2.55× | ok |
| bg/fasta/6 | 0.144 | 0.327 | 2.27× | 0.507 | 3.52× | ok |
| bg/mandelbrot/0 | 0.160 | 0.362 | 2.26× | 0.475 | 2.97× | ok |
| bg/mandelbrot/2 | 0.105 | 0.235 | 2.24× | 0.303 | 2.89× | ok |
| bg/mandelbrot/3 | 0.127 | 0.230 | 1.81× | 0.378 | 2.98× | ok |
| bg/mandelbrot/5 | 0.048 | 0.112 | 2.33× | 0.142 | 2.96× | ok |
| bg/mandelbrot/7 | 0.054 | 0.105 | 1.94× | 0.145 | 2.69× | ok |
| bg/mandelbrot/9 | 0.050 | 0.126 | 2.52× | 0.140 | 2.80× | ok |
| bg/nbody/1 | 0.035 | 0.070 | 2.00× | 0.097 | 2.77× | ok |
| bg/nbody/2 | 0.037 | 0.071 | 1.92× | 0.085 | 2.30× | ok |
| bg/nbody/3 | 0.034 | 0.066 | 1.94× | 0.086 | 2.53× | ok |
| bg/nbody/6 | 0.035 | 0.070 | 2.00× | 0.091 | 2.60× | ok |
| bg/pidigits/4 | 0.145 | 0.305 | 2.10× | 0.481 | 3.32× | ok |
| bg/pidigits/5 | 0.089 | 0.200 | 2.25× | 0.254 | 2.85× | ok |
| bg/revcomp/1 | 0.098 | 0.208 | 2.12× | 0.278 | 2.84× | ok |
| bg/revcomp/5 | 0.085 | 0.187 | 2.20× | 0.246 | 2.89× | ok |
| bg/spectralnorm/1 | 0.143 | 0.331 | 2.31× | 0.400 | 2.80× | ok |
| box2d | 1.743 | 3.646 | 2.09× | 6.147 | 3.53× | ok |
| fmt | 0.560 | 1.155 | 2.06× | 1.567 | 2.80× | ok |
| hexxagon | 0.306 | 0.727 | 2.38× | 1.030 | 3.37× | ok |
| lambda | 0.061 | 0.152 | 2.49× | 0.182 | 2.98× | ok |
| minisat | 0.066 | 0.162 | 2.45× | 0.203 | 3.08× | ok |
| nlohmann-json | 0.425 | 1.016 | 2.39× | 1.614 | 3.80× | ok |
| pugixml | 0.249 | 0.635 | 2.55× | 0.795 | 3.19× | ok |
| pugixml-tests | 3.803 | 8.960 | 2.36× | 12.203 | 3.21× | ok |
| rapidjson | 0.127 | 0.270 | 2.13× | 0.367 | 2.89× | ok |
| re2 | 3.579 | 7.685 | 2.15× | 7.036 | 1.97× | ok |
| re2-test-re2 | 5.413 | 11.517 | 2.13× | 17.229 | 3.18× | ok |
| re2-test-search | 5.128 | 11.400 | 2.22× | 16.668 | 3.25× | ok |
| tramp3d-v4 | 0.548 | 2.629 | 4.80× | 1.833 | 3.34× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
