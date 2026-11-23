# Public benchmarks: AMD EPYC

Measured compiler: [`cc79604cd`](https://github.com/vishvananda/cppgm/commit/cc79604cdc196d46abdebb888158e8b90d3cac52) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/45241427099) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: AMD EPYC 7763 64-Core Processor.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.27× | 79 | 3.36× | 79 |
| Compile CPU, `-O0` | 2.97× | 79 | 3.52× | 79 |
| Compile CPU, `-O3` | 4.22× | 81 | 4.22× | 81 |
| Compile peak RSS, `-O0` | 1.45× | 81 | 2.20× | 81 |
| Compile peak RSS, `-O3` | 1.70× | 81 | 2.30× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.20× | 81 | 1.23× | 81 |
| Run CPU, `-O3` | 1.04× | 81 | 1.02× | 80 |
| Run instructions, `-O3` | 1.05× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.906 to 1.041; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.116 | 0.408 | 3.52× | 0.338 | 2.91× | ok |
| Adobe-C++/loop_unroll | 0.089 | 0.805 | 9.04× | 0.368 | 4.13× | ok |
| Adobe-C++/simple_types_constant_folding | 0.099 | 0.944 | 9.54× | 0.450 | 4.55× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.084 | 0.687 | 8.18× | 0.374 | 4.45× | ok |
| Adobe-C++/stepanov_abstraction | 0.061 | 0.263 | 4.31× | 0.236 | 3.87× | ok |
| Adobe-C++/stepanov_vector | 0.133 | 0.446 | 3.35× | 0.496 | 3.73× | ok |
| Bullet | 9.737 | 27.995 | 2.88× | 29.931 | 3.07× | ok |
| CLAMR | 3.629 | 13.733 | 3.78× | 16.442 | 4.53× | ok |
| CoyoteBench/almabench | 0.046 | 0.110 | 2.39× | 0.219 | 4.76× | ok |
| CoyoteBench/fftbench | 0.169 | 0.407 | 2.41× | 0.561 | 3.32× | ok |
| CoyoteBench/huffbench | 0.047 | 0.107 | 2.28× | 0.204 | 4.34× | ok |
| CoyoteBench/lpbench | 0.046 | 0.141 | 3.07× | 0.142 | 3.09× | ok |
| DOE/HACCKernels | 0.179 | 0.531 | 2.97× | 0.568 | 3.17× | ok |
| DOE/HPCCG | 1.020 | 2.393 | 2.35× | 3.545 | 3.48× | ok |
| DOE/PENNANT | 2.554 | 5.853 | 2.29× | 7.369 | 2.89× | ok |
| DOE/miniFE | 1.078 | 2.869 | 2.66× | 4.047 | 3.75× | ok |
| Misc-C++-EH/spirit | 0.708 | 3.982 | 5.62× | 3.540 | 5.00× | ok |
| Misc-C++-Large/ray | 0.189 | 0.518 | 2.74× | 0.838 | 4.43× | ok |
| Misc-C++-Large/sphereflake | 0.159 | 0.389 | 2.45× | 0.548 | 3.45× | ok |
| Misc-C++/bigfib | 0.180 | 0.543 | 3.02× | 0.884 | 4.91× | ok |
| Misc-C++/oopack_v1p8 | 0.056 | 0.151 | 2.70× | 0.153 | 2.73× | ok |
| Misc-C++/stepanov_container | 0.308 | 0.766 | 2.49× | 1.080 | 3.51× | ok |
| Misc-C++/stepanov_v1p2 | 0.064 | 0.188 | 2.94× | 0.172 | 2.69× | ok |
| PAQ8p | 0.100 | 0.785 | 7.85× | 0.376 | 3.76× | ok |
| Prolangs-C++/life | 0.005 | 0.043 | — | 0.040 | — | ok |
| Prolangs-C++/ocean | 0.018 | 0.094 | 5.22× | 0.070 | 3.89× | ok |
| Prolangs-C++/primes | 0.009 | 0.034 | — | 0.037 | — | ok |
| Shootout-C++-EH/except | 0.112 | 0.241 | 2.15× | 0.406 | 3.62× | ok |
| Shootout-C++/ackermann | 0.110 | 0.300 | 2.73× | 0.471 | 4.28× | ok |
| Shootout-C++/ary3 | 0.126 | 0.340 | 2.70× | 0.440 | 3.49× | ok |
| Shootout-C++/fibo | 0.103 | 0.244 | 2.37× | 0.373 | 3.62× | ok |
| Shootout-C++/hash | 0.159 | 0.407 | 2.56× | 0.559 | 3.52× | ok |
| Shootout-C++/hash2 | 0.216 | 0.546 | 2.53× | 0.571 | 2.64× | ok |
| Shootout-C++/heapsort | 0.130 | 0.290 | 2.23× | 0.444 | 3.42× | ok |
| Shootout-C++/lists | 0.122 | 0.319 | 2.61× | 0.444 | 3.64× | ok |
| Shootout-C++/lists1 | 0.143 | 0.340 | 2.38× | 0.463 | 3.24× | ok |
| Shootout-C++/matrix | 0.108 | 0.234 | 2.17× | 0.375 | 3.47× | ok |
| Shootout-C++/methcall | 0.111 | 0.234 | 2.11× | 0.362 | 3.26× | ok |
| Shootout-C++/moments | 0.145 | 0.391 | 2.70× | 0.483 | 3.33× | ok |
| Shootout-C++/random | 0.132 | 0.272 | 2.06× | 0.449 | 3.40× | ok |
| Shootout-C++/sieve | 0.138 | 0.334 | 2.42× | 0.493 | 3.57× | ok |
| SmallPT | 0.044 | 0.144 | 3.27× | 0.146 | 3.32× | ok |
| Stanford/Bubblesort | 0.014 | 0.044 | 3.14× | 0.050 | 3.57× | ok |
| Stanford/FloatMM | 0.015 | 0.043 | 2.87× | 0.065 | 4.33× | ok |
| Stanford/Puzzle | 0.016 | 0.054 | 3.38× | 0.055 | 3.44× | ok |
| Stanford/Treesort | 0.014 | 0.045 | 3.21× | 0.051 | 3.64× | ok |
| bg/binarytrees/2 | 0.126 | 0.278 | 2.21× | 0.390 | 3.10× | ok |
| bg/fannkuchredux/3 | 0.061 | 0.130 | 2.13× | 0.152 | 2.49× | ok |
| bg/fasta/1 | 0.090 | 0.191 | 2.12× | 0.281 | 3.12× | ok |
| bg/fasta/2 | 0.081 | 0.203 | 2.51× | 0.245 | 3.02× | ok |
| bg/fasta/3 | 0.129 | 0.282 | 2.19× | 0.436 | 3.38× | ok |
| bg/fasta/4 | 0.115 | 0.252 | 2.19× | 0.339 | 2.95× | ok |
| bg/fasta/6 | 0.221 | 0.581 | 2.63× | 0.919 | 4.16× | ok |
| bg/mandelbrot/0 | 0.236 | 0.716 | 3.03× | 0.795 | 3.37× | ok |
| bg/mandelbrot/2 | 0.133 | 0.325 | 2.44× | 0.466 | 3.50× | ok |
| bg/mandelbrot/3 | 0.191 | 0.303 | 1.59× | 0.484 | 2.53× | ok |
| bg/mandelbrot/5 | 0.072 | 0.162 | 2.25× | 0.220 | 3.06× | ok |
| bg/mandelbrot/7 | 0.083 | 0.177 | 2.13× | 0.281 | 3.39× | ok |
| bg/mandelbrot/9 | 0.073 | 0.221 | 3.03× | 0.208 | 2.85× | ok |
| bg/nbody/1 | 0.049 | 0.151 | 3.08× | 0.160 | 3.27× | ok |
| bg/nbody/2 | 0.041 | 0.101 | 2.46× | 0.159 | 3.88× | ok |
| bg/nbody/3 | 0.047 | 0.106 | 2.26× | 0.141 | 3.00× | ok |
| bg/nbody/6 | 0.059 | 0.146 | 2.47× | 0.173 | 2.93× | ok |
| bg/pidigits/4 | 0.226 | 0.494 | 2.19× | 0.679 | 3.00× | ok |
| bg/pidigits/5 | 0.130 | 0.274 | 2.11× | 0.452 | 3.48× | ok |
| bg/revcomp/1 | 0.138 | 0.355 | 2.57× | 0.443 | 3.21× | ok |
| bg/revcomp/5 | 0.138 | 0.302 | 2.19× | 0.535 | 3.88× | ok |
| bg/spectralnorm/1 | 0.173 | 0.509 | 2.94× | 0.576 | 3.33× | ok |
| box2d | 2.607 | 7.033 | 2.70× | 10.366 | 3.98× | ok |
| fmt | 0.829 | 3.351 | 4.04× | 3.702 | 4.47× | ok |
| hexxagon | 0.472 | 1.069 | 2.26× | 1.578 | 3.34× | ok |
| lambda | 0.100 | 0.482 | 4.82× | 0.383 | 3.83× | ok |
| minisat | 0.118 | 0.480 | 4.07× | 0.487 | 4.13× | ok |
| nlohmann-json | 0.747 | 2.760 | 3.69× | 2.828 | 3.79× | ok |
| pugixml | 0.459 | 2.110 | 4.60× | 1.924 | 4.19× | ok |
| pugixml-tests | 6.203 | 22.561 | 3.64× | 25.392 | 4.09× | ok |
| rapidjson | 0.191 | 0.709 | 3.71× | 0.686 | 3.59× | ok |
| re2 | 5.458 | 16.465 | 3.02× | 12.905 | 2.36× | ok |
| re2-test-re2 | 7.927 | 23.710 | 2.99× | 30.816 | 3.89× | ok |
| re2-test-search | 7.675 | 23.188 | 3.02× | 28.827 | 3.76× | ok |
| tramp3d-v4 | 1.124 | 12.273 | 10.92× | 5.004 | 4.45× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.169 | 1.326 | 7.85× | 1.023 | 6.05× | ok |
| Adobe-C++/loop_unroll | 0.644 | 7.736 | 12.01× | 6.358 | 9.87× | ok |
| Adobe-C++/simple_types_constant_folding | 0.380 | 4.210 | 11.08× | 3.402 | 8.95× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.309 | 3.298 | 10.67× | 2.708 | 8.76× | ok |
| Adobe-C++/stepanov_abstraction | 0.149 | 1.506 | 10.11× | 0.869 | 5.83× | ok |
| Adobe-C++/stepanov_vector | 0.180 | 2.202 | 12.23× | 0.871 | 4.84× | ok |
| Bullet | 9.627 | 56.624 | 5.88× | 43.753 | 4.54× | ok |
| CLAMR | 6.126 | 33.959 | 5.54× | 32.830 | 5.36× | ok |
| CoyoteBench/almabench | 0.063 | 0.232 | 3.68× | 0.199 | 3.16× | ok |
| CoyoteBench/fftbench | 0.187 | 0.648 | 3.47× | 0.814 | 4.35× | ok |
| CoyoteBench/huffbench | 0.060 | 0.375 | 6.25× | 0.217 | 3.62× | ok |
| CoyoteBench/lpbench | 0.057 | 0.257 | 4.51× | 0.408 | 7.16× | ok |
| DOE/HACCKernels | 0.184 | 0.731 | 3.97× | 0.706 | 3.84× | ok |
| DOE/HPCCG | 1.097 | 3.397 | 3.10× | 4.005 | 3.65× | ok |
| DOE/PENNANT | 2.722 | 8.785 | 3.23× | 10.761 | 3.95× | ok |
| DOE/miniFE | 1.395 | 6.538 | 4.69× | 6.339 | 4.54× | ok |
| Misc-C++-EH/spirit | 1.002 | 5.684 | 5.67× | 6.049 | 6.04× | ok |
| Misc-C++-Large/ray | 0.201 | 0.736 | 3.66× | 0.641 | 3.19× | ok |
| Misc-C++-Large/sphereflake | 0.176 | 1.039 | 5.90× | 0.580 | 3.30× | ok |
| Misc-C++/bigfib | 0.209 | 0.759 | 3.63× | 0.980 | 4.69× | ok |
| Misc-C++/oopack_v1p8 | 0.070 | 0.297 | 4.24× | 0.244 | 3.49× | ok |
| Misc-C++/stepanov_container | 0.392 | 1.351 | 3.45× | 1.478 | 3.77× | ok |
| Misc-C++/stepanov_v1p2 | 0.063 | 0.306 | 4.86× | 0.316 | 5.02× | ok |
| PAQ8p | 0.406 | 5.727 | 14.11× | 2.728 | 6.72× | ok |
| Prolangs-C++/life | 0.013 | 0.135 | 10.38× | 0.096 | 7.38× | ok |
| Prolangs-C++/ocean | 0.031 | 0.287 | 9.26× | 0.160 | 5.16× | ok |
| Prolangs-C++/primes | 0.010 | 0.048 | 4.80× | 0.049 | 4.90× | ok |
| Shootout-C++-EH/except | 0.114 | 0.285 | 2.50× | 0.408 | 3.58× | ok |
| Shootout-C++/ackermann | 0.127 | 0.293 | 2.31× | 0.391 | 3.08× | ok |
| Shootout-C++/ary3 | 0.133 | 0.352 | 2.65× | 0.472 | 3.55× | ok |
| Shootout-C++/fibo | 0.115 | 0.275 | 2.39× | 0.387 | 3.37× | ok |
| Shootout-C++/hash | 0.177 | 0.539 | 3.05× | 0.694 | 3.92× | ok |
| Shootout-C++/hash2 | 0.198 | 0.818 | 4.13× | 0.740 | 3.74× | ok |
| Shootout-C++/heapsort | 0.135 | 0.334 | 2.47× | 0.450 | 3.33× | ok |
| Shootout-C++/lists | 0.137 | 0.364 | 2.66× | 0.470 | 3.43× | ok |
| Shootout-C++/lists1 | 0.154 | 0.406 | 2.64× | 0.514 | 3.34× | ok |
| Shootout-C++/matrix | 0.121 | 0.310 | 2.56× | 0.527 | 4.36× | ok |
| Shootout-C++/methcall | 0.113 | 0.284 | 2.51× | 0.409 | 3.62× | ok |
| Shootout-C++/moments | 0.157 | 0.473 | 3.01× | 0.572 | 3.64× | ok |
| Shootout-C++/random | 0.141 | 0.319 | 2.26× | 0.471 | 3.34× | ok |
| Shootout-C++/sieve | 0.148 | 0.374 | 2.53× | 0.580 | 3.92× | ok |
| SmallPT | 0.058 | 0.415 | 7.16× | 0.259 | 4.47× | ok |
| Stanford/Bubblesort | 0.018 | 0.078 | 4.33× | 0.072 | 4.00× | ok |
| Stanford/FloatMM | 0.019 | 0.091 | 4.79× | 0.101 | 5.32× | ok |
| Stanford/Puzzle | 0.032 | 0.184 | 5.75× | 0.179 | 5.59× | ok |
| Stanford/Treesort | 0.020 | 0.123 | 6.15× | 0.100 | 5.00× | ok |
| bg/binarytrees/2 | 0.123 | 0.662 | 5.38× | 0.413 | 3.36× | ok |
| bg/fannkuchredux/3 | 0.060 | 0.204 | 3.40× | 0.190 | 3.17× | ok |
| bg/fasta/1 | 0.105 | 0.242 | 2.30× | 0.321 | 3.06× | ok |
| bg/fasta/2 | 0.088 | 0.258 | 2.93× | 0.291 | 3.31× | ok |
| bg/fasta/3 | 0.156 | 0.341 | 2.19× | 0.478 | 3.06× | ok |
| bg/fasta/4 | 0.122 | 0.278 | 2.28× | 0.399 | 3.27× | ok |
| bg/fasta/6 | 0.269 | 0.769 | 2.86× | 0.867 | 3.22× | ok |
| bg/mandelbrot/0 | 0.261 | 1.002 | 3.84× | 1.087 | 4.16× | ok |
| bg/mandelbrot/2 | 0.145 | 0.403 | 2.78× | 0.567 | 3.91× | ok |
| bg/mandelbrot/3 | 0.146 | 0.358 | 2.45× | 0.495 | 3.39× | ok |
| bg/mandelbrot/5 | 0.072 | 0.220 | 3.06× | 0.270 | 3.75× | ok |
| bg/mandelbrot/7 | 0.086 | 0.270 | 3.14× | 0.304 | 3.53× | ok |
| bg/mandelbrot/9 | 0.080 | 0.274 | 3.43× | 0.265 | 3.31× | ok |
| bg/nbody/1 | 0.065 | 0.232 | 3.57× | 0.277 | 4.26× | ok |
| bg/nbody/2 | 0.048 | 0.183 | 3.81× | 0.244 | 5.08× | ok |
| bg/nbody/3 | 0.051 | 0.188 | 3.69× | 0.179 | 3.51× | ok |
| bg/nbody/6 | 0.076 | 0.226 | 2.97× | 0.279 | 3.67× | ok |
| bg/pidigits/4 | 0.215 | 0.541 | 2.52× | 0.899 | 4.18× | ok |
| bg/pidigits/5 | 0.133 | 0.331 | 2.49× | 0.552 | 4.15× | ok |
| bg/revcomp/1 | 0.138 | 0.393 | 2.85× | 0.521 | 3.78× | ok |
| bg/revcomp/5 | 0.138 | 0.357 | 2.59× | 0.619 | 4.49× | ok |
| bg/spectralnorm/1 | 0.184 | 0.566 | 3.08× | 0.643 | 3.49× | ok |
| box2d | 3.184 | 12.125 | 3.81× | 11.101 | 3.49× | ok |
| fmt | 1.424 | 7.499 | 5.27× | 6.948 | 4.88× | ok |
| hexxagon | 0.468 | 1.694 | 3.62× | 1.683 | 3.60× | ok |
| lambda | 0.186 | 1.765 | 9.49× | 0.896 | 4.82× | ok |
| minisat | 0.222 | 1.556 | 7.01× | 1.079 | 4.86× | ok |
| nlohmann-json | 1.180 | 5.618 | 4.76× | 5.448 | 4.62× | ok |
| pugixml | 0.991 | 8.559 | 8.64× | 6.238 | 6.29× | ok |
| pugixml-tests | 8.806 | 54.154 | 6.15× | 44.387 | 5.04× | ok |
| rapidjson | 0.348 | 1.870 | 5.37× | 1.227 | 3.53× | ok |
| re2 | 5.192 | 27.420 | 5.28× | 17.571 | 3.38× | ok |
| re2-test-re2 | 9.592 | 43.663 | 4.55× | 41.553 | 4.33× | ok |
| re2-test-search | 9.754 | 39.397 | 4.04× | 28.470 | 2.92× | ok |
| tramp3d-v4 | 3.700 | 29.573 | 7.99× | 21.782 | 5.89× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.103 | 0.234 | 2.27× | 0.297 | 2.88× | ok |
| Adobe-C++/loop_unroll | 0.060 | 0.169 | 2.82× | 0.216 | 3.60× | ok |
| Adobe-C++/simple_types_constant_folding | 0.066 | 0.188 | 2.85× | 0.230 | 3.48× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.059 | 0.161 | 2.73× | 0.202 | 3.42× | ok |
| Adobe-C++/stepanov_abstraction | 0.050 | 0.110 | 2.20× | 0.182 | 3.64× | ok |
| Adobe-C++/stepanov_vector | 0.120 | 0.216 | 1.80× | 0.419 | 3.49× | ok |
| Bullet | 8.524 | 16.998 | 1.99× | 24.682 | 2.90× | ok |
| CLAMR | 3.241 | 8.119 | 2.51× | 11.630 | 3.59× | ok |
| CoyoteBench/almabench | 0.045 | 0.092 | 2.04× | 0.185 | 4.11× | ok |
| CoyoteBench/fftbench | 0.165 | 0.370 | 2.24× | 0.533 | 3.23× | ok |
| CoyoteBench/huffbench | 0.046 | 0.094 | 2.04× | 0.201 | 4.37× | ok |
| CoyoteBench/lpbench | 0.045 | 0.117 | 2.60× | 0.134 | 2.98× | ok |
| DOE/HACCKernels | 0.174 | 0.482 | 2.77× | 0.533 | 3.06× | ok |
| DOE/HPCCG | 0.999 | 2.192 | 2.19× | 3.332 | 3.34× | ok |
| DOE/PENNANT | 2.242 | 4.548 | 2.03× | 6.602 | 2.94× | ok |
| DOE/miniFE | 0.991 | 1.983 | 2.00× | 3.254 | 3.28× | ok |
| Misc-C++-EH/spirit | 0.532 | 1.407 | 2.64× | 2.057 | 3.87× | ok |
| Misc-C++-Large/ray | 0.190 | 0.437 | 2.30× | 0.702 | 3.69× | ok |
| Misc-C++-Large/sphereflake | 0.152 | 0.385 | 2.53× | 0.520 | 3.42× | ok |
| Misc-C++/bigfib | 0.161 | 0.375 | 2.33× | 0.760 | 4.72× | ok |
| Misc-C++/oopack_v1p8 | 0.058 | 0.116 | 2.00× | 0.163 | 2.81× | ok |
| Misc-C++/stepanov_container | 0.276 | 0.475 | 1.72× | 0.909 | 3.29× | ok |
| Misc-C++/stepanov_v1p2 | 0.061 | 0.108 | 1.77× | 0.144 | 2.36× | ok |
| PAQ8p | 0.071 | 0.243 | 3.42× | 0.231 | 3.25× | ok |
| Prolangs-C++/life | 0.004 | 0.014 | — | 0.028 | — | ok |
| Prolangs-C++/ocean | 0.015 | 0.037 | 2.47× | 0.046 | 3.07× | ok |
| Prolangs-C++/primes | 0.008 | 0.024 | — | 0.033 | — | ok |
| Shootout-C++-EH/except | 0.110 | 0.242 | 2.20× | 0.386 | 3.51× | ok |
| Shootout-C++/ackermann | 0.108 | 0.306 | 2.83× | 0.444 | 4.11× | ok |
| Shootout-C++/ary3 | 0.121 | 0.319 | 2.64× | 0.408 | 3.37× | ok |
| Shootout-C++/fibo | 0.101 | 0.252 | 2.50× | 0.351 | 3.48× | ok |
| Shootout-C++/hash | 0.151 | 0.314 | 2.08× | 0.499 | 3.30× | ok |
| Shootout-C++/hash2 | 0.208 | 0.447 | 2.15× | 0.515 | 2.48× | ok |
| Shootout-C++/heapsort | 0.131 | 0.293 | 2.24× | 0.429 | 3.27× | ok |
| Shootout-C++/lists | 0.118 | 0.275 | 2.33× | 0.407 | 3.45× | ok |
| Shootout-C++/lists1 | 0.135 | 0.286 | 2.12× | 0.432 | 3.20× | ok |
| Shootout-C++/matrix | 0.106 | 0.233 | 2.20× | 0.359 | 3.39× | ok |
| Shootout-C++/methcall | 0.111 | 0.234 | 2.11× | 0.353 | 3.18× | ok |
| Shootout-C++/moments | 0.139 | 0.320 | 2.30× | 0.435 | 3.13× | ok |
| Shootout-C++/random | 0.132 | 0.276 | 2.09× | 0.439 | 3.33× | ok |
| Shootout-C++/sieve | 0.132 | 0.276 | 2.09× | 0.488 | 3.70× | ok |
| SmallPT | 0.042 | 0.096 | 2.29× | 0.131 | 3.12× | ok |
| Stanford/Bubblesort | 0.014 | 0.039 | 2.79× | 0.049 | 3.50× | ok |
| Stanford/FloatMM | 0.015 | 0.038 | 2.53× | 0.061 | 4.07× | ok |
| Stanford/Puzzle | 0.015 | 0.039 | 2.60× | 0.049 | 3.27× | ok |
| Stanford/Treesort | 0.014 | 0.038 | 2.71× | 0.048 | 3.43× | ok |
| bg/binarytrees/2 | 0.115 | 0.277 | 2.41× | 0.367 | 3.19× | ok |
| bg/fannkuchredux/3 | 0.059 | 0.114 | 1.93× | 0.141 | 2.39× | ok |
| bg/fasta/1 | 0.088 | 0.157 | 1.78× | 0.260 | 2.95× | ok |
| bg/fasta/2 | 0.078 | 0.156 | 2.00× | 0.225 | 2.88× | ok |
| bg/fasta/3 | 0.126 | 0.272 | 2.16× | 0.404 | 3.21× | ok |
| bg/fasta/4 | 0.117 | 0.235 | 2.01× | 0.328 | 2.80× | ok |
| bg/fasta/6 | 0.198 | 0.426 | 2.15× | 0.814 | 4.11× | ok |
| bg/mandelbrot/0 | 0.213 | 0.537 | 2.52× | 0.709 | 3.33× | ok |
| bg/mandelbrot/2 | 0.128 | 0.300 | 2.34× | 0.443 | 3.46× | ok |
| bg/mandelbrot/3 | 0.146 | 0.301 | 2.06× | 0.474 | 3.25× | ok |
| bg/mandelbrot/5 | 0.068 | 0.139 | 2.04× | 0.201 | 2.96× | ok |
| bg/mandelbrot/7 | 0.073 | 0.135 | 1.85× | 0.278 | 3.81× | ok |
| bg/mandelbrot/9 | 0.068 | 0.177 | 2.60× | 0.188 | 2.76× | ok |
| bg/nbody/1 | 0.045 | 0.095 | 2.11× | 0.138 | 3.07× | ok |
| bg/nbody/2 | 0.040 | 0.085 | 2.12× | 0.154 | 3.85× | ok |
| bg/nbody/3 | 0.045 | 0.087 | 1.93× | 0.132 | 2.93× | ok |
| bg/nbody/6 | 0.058 | 0.089 | 1.53× | 0.151 | 2.60× | ok |
| bg/pidigits/4 | 0.197 | 0.443 | 2.25× | 0.656 | 3.33× | ok |
| bg/pidigits/5 | 0.117 | 0.257 | 2.20× | 0.525 | 4.49× | ok |
| bg/revcomp/1 | 0.139 | 0.314 | 2.26× | 0.445 | 3.20× | ok |
| bg/revcomp/5 | 0.138 | 0.252 | 1.83× | 0.484 | 3.51× | ok |
| bg/spectralnorm/1 | 0.196 | 0.409 | 2.09× | 0.543 | 2.77× | ok |
| box2d | 2.246 | 4.816 | 2.14× | 10.104 | 4.50× | ok |
| fmt | 0.706 | 1.572 | 2.23× | 3.004 | 4.25× | ok |
| hexxagon | 0.461 | 0.983 | 2.13× | 1.600 | 3.47× | ok |
| lambda | 0.078 | 0.198 | 2.54× | 0.284 | 3.64× | ok |
| minisat | 0.100 | 0.233 | 2.33× | 0.339 | 3.39× | ok |
| nlohmann-json | 0.536 | 1.219 | 2.27× | 2.165 | 4.04× | ok |
| pugixml | 0.396 | 0.844 | 2.13× | 1.455 | 3.67× | ok |
| pugixml-tests | 5.161 | 12.907 | 2.50× | 20.029 | 3.88× | ok |
| rapidjson | 0.156 | 0.394 | 2.53× | 0.552 | 3.54× | ok |
| re2 | 5.103 | 10.813 | 2.12× | 11.231 | 2.20× | ok |
| re2-test-re2 | 7.024 | 16.583 | 2.36× | 27.794 | 3.96× | ok |
| re2-test-search | 7.061 | 16.277 | 2.31× | 26.342 | 3.73× | ok |
| tramp3d-v4 | 0.661 | 3.861 | 5.84× | 2.891 | 4.37× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
