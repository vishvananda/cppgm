# Public benchmarks: Intel (GitHub)

Measured compiler: [`49adadaef`](https://github.com/vishvananda/cppgm/commit/49adadaefcc6510c6c725be8d3c780b397e68bc5) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/45739944580) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: Intel(R) Xeon(R) 6975P-C.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.35× | 74 | 2.99× | 74 |
| Compile CPU, `-O0` | 3.28× | 75 | 3.22× | 75 |
| Compile CPU, `-O3` | 4.29× | 79 | 3.84× | 79 |
| Compile peak RSS, `-O0` | 1.42× | 81 | 2.16× | 81 |
| Compile peak RSS, `-O3` | 1.69× | 81 | 2.26× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.11× | 81 | 1.07× | 81 |
| Run CPU, `-O3` | 1.01× | 80 | 1.02× | 80 |
| Run instructions, `-O3` | 1.05× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.866 to 1.188; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.065 | 0.252 | 3.88× | 0.215 | 3.31× | ok |
| Adobe-C++/loop_unroll | 0.050 | 0.574 | 11.48× | 0.173 | 3.46× | ok |
| Adobe-C++/simple_types_constant_folding | 0.052 | 0.673 | 12.94× | 0.206 | 3.96× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.046 | 0.478 | 10.39× | 0.231 | 5.02× | ok |
| Adobe-C++/stepanov_abstraction | 0.037 | 0.172 | 4.65× | 0.109 | 2.95× | ok |
| Adobe-C++/stepanov_vector | 0.063 | 0.303 | 4.81× | 0.195 | 3.10× | ok |
| Bullet | 5.081 | 17.138 | 3.37× | 16.735 | 3.29× | ok |
| CLAMR | 2.545 | 8.724 | 3.43× | 9.168 | 3.60× | ok |
| CoyoteBench/almabench | 0.026 | 0.068 | 2.62× | 0.077 | 2.96× | ok |
| CoyoteBench/fftbench | 0.100 | 0.255 | 2.55× | 0.375 | 3.75× | ok |
| CoyoteBench/huffbench | 0.030 | 0.061 | 2.03× | 0.075 | 2.50× | ok |
| CoyoteBench/lpbench | 0.029 | 0.077 | 2.66× | 0.083 | 2.86× | ok |
| DOE/HACCKernels | 0.112 | 0.287 | 2.56× | 0.308 | 2.75× | ok |
| DOE/HPCCG | 0.584 | 1.530 | 2.62× | 1.825 | 3.12× | ok |
| DOE/PENNANT | 1.305 | 3.681 | 2.82× | 3.952 | 3.03× | ok |
| DOE/miniFE | 0.586 | 1.836 | 3.13× | 2.217 | 3.78× | ok |
| Misc-C++-EH/spirit | 0.433 | 2.836 | 6.55× | 1.563 | 3.61× | ok |
| Misc-C++-Large/ray | 0.092 | 0.268 | 2.91× | 0.310 | 3.37× | ok |
| Misc-C++-Large/sphereflake | 0.085 | 0.224 | 2.64× | 0.279 | 3.28× | ok |
| Misc-C++/bigfib | 0.117 | 0.358 | 3.06× | 0.412 | 3.52× | ok |
| Misc-C++/oopack_v1p8 | 0.031 | 0.089 | 2.87× | 0.097 | 3.13× | ok |
| Misc-C++/stepanov_container | 0.155 | 0.568 | 3.66× | 0.544 | 3.51× | ok |
| Misc-C++/stepanov_v1p2 | 0.026 | 0.118 | 4.54× | 0.081 | 3.12× | ok |
| PAQ8p | 0.065 | 0.459 | 7.06× | 0.231 | 3.55× | ok |
| Prolangs-C++/life | 0.004 | 0.029 | — | 0.024 | — | ok |
| Prolangs-C++/ocean | 0.010 | 0.058 | 5.80× | 0.043 | 4.30× | ok |
| Prolangs-C++/primes | 0.006 | 0.022 | — | 0.026 | — | ok |
| Shootout-C++-EH/except | 0.066 | 0.160 | 2.42× | 0.206 | 3.12× | ok |
| Shootout-C++/ackermann | 0.068 | 0.154 | 2.26× | 0.335 | 4.93× | ok |
| Shootout-C++/ary3 | 0.082 | 0.189 | 2.30× | 0.270 | 3.29× | ok |
| Shootout-C++/fibo | 0.063 | 0.142 | 2.25× | 0.183 | 2.90× | ok |
| Shootout-C++/hash | 0.091 | 0.306 | 3.36× | 0.276 | 3.03× | ok |
| Shootout-C++/hash2 | 0.105 | 0.301 | 2.87× | 0.303 | 2.89× | ok |
| Shootout-C++/heapsort | 0.074 | 0.168 | 2.27× | 0.242 | 3.27× | ok |
| Shootout-C++/lists | 0.073 | 0.234 | 3.21× | 0.216 | 2.96× | ok |
| Shootout-C++/lists1 | 0.091 | 0.223 | 2.45× | 0.232 | 2.55× | ok |
| Shootout-C++/matrix | 0.061 | 0.153 | 2.51× | 0.185 | 3.03× | ok |
| Shootout-C++/methcall | 0.066 | 0.141 | 2.14× | 0.206 | 3.12× | ok |
| Shootout-C++/moments | 0.093 | 0.237 | 2.55× | 0.255 | 2.74× | ok |
| Shootout-C++/random | 0.076 | 0.169 | 2.22× | 0.229 | 3.01× | ok |
| Shootout-C++/sieve | 0.078 | 0.224 | 2.87× | 0.288 | 3.69× | ok |
| SmallPT | 0.027 | 0.087 | 3.22× | 0.078 | 2.89× | ok |
| Stanford/Bubblesort | 0.008 | 0.024 | — | 0.027 | — | ok |
| Stanford/FloatMM | 0.008 | 0.025 | — | 0.028 | — | ok |
| Stanford/Puzzle | 0.009 | 0.033 | — | 0.033 | — | ok |
| Stanford/Treesort | 0.009 | 0.028 | — | 0.030 | — | ok |
| bg/binarytrees/2 | 0.062 | 0.148 | 2.39× | 0.204 | 3.29× | ok |
| bg/fannkuchredux/3 | 0.030 | 0.072 | 2.40× | 0.077 | 2.57× | ok |
| bg/fasta/1 | 0.052 | 0.114 | 2.19× | 0.135 | 2.60× | ok |
| bg/fasta/2 | 0.047 | 0.115 | 2.45× | 0.125 | 2.66× | ok |
| bg/fasta/3 | 0.075 | 0.183 | 2.44× | 0.226 | 3.01× | ok |
| bg/fasta/4 | 0.081 | 0.149 | 1.84× | 0.176 | 2.17× | ok |
| bg/fasta/6 | 0.133 | 0.374 | 2.81× | 0.381 | 2.86× | ok |
| bg/mandelbrot/0 | 0.146 | 0.418 | 2.86× | 0.424 | 2.90× | ok |
| bg/mandelbrot/2 | 0.078 | 0.215 | 2.76× | 0.259 | 3.32× | ok |
| bg/mandelbrot/3 | 0.087 | 0.192 | 2.21× | 0.259 | 2.98× | ok |
| bg/mandelbrot/5 | 0.040 | 0.103 | 2.57× | 0.116 | 2.90× | ok |
| bg/mandelbrot/7 | 0.044 | 0.135 | 3.07× | 0.122 | 2.77× | ok |
| bg/mandelbrot/9 | 0.044 | 0.119 | 2.70× | 0.117 | 2.66× | ok |
| bg/nbody/1 | 0.025 | 0.096 | 3.84× | 0.078 | 3.12× | ok |
| bg/nbody/2 | 0.024 | 0.064 | 2.67× | 0.070 | 2.92× | ok |
| bg/nbody/3 | 0.025 | 0.062 | 2.48× | 0.072 | 2.88× | ok |
| bg/nbody/6 | 0.027 | 0.089 | 3.30× | 0.087 | 3.22× | ok |
| bg/pidigits/4 | 0.110 | 0.284 | 2.58× | 0.366 | 3.33× | ok |
| bg/pidigits/5 | 0.064 | 0.162 | 2.53× | 0.260 | 4.06× | ok |
| bg/revcomp/1 | 0.072 | 0.209 | 2.90× | 0.237 | 3.29× | ok |
| bg/revcomp/5 | 0.075 | 0.190 | 2.53× | 0.264 | 3.52× | ok |
| bg/spectralnorm/1 | 0.102 | 0.246 | 2.41× | 0.290 | 2.84× | ok |
| box2d | 1.360 | 4.067 | 2.99× | 3.146 | 2.31× | ok |
| fmt | 0.512 | 2.417 | 4.72× | 2.005 | 3.92× | ok |
| hexxagon | 0.221 | 0.545 | 2.47× | 0.710 | 3.21× | ok |
| lambda | 0.045 | 0.270 | 6.00× | 0.186 | 4.13× | ok |
| minisat | 0.052 | 0.270 | 5.19× | 0.223 | 4.29× | ok |
| nlohmann-json | 0.380 | 1.723 | 4.53× | 1.727 | 4.54× | ok |
| pugixml | 0.234 | 1.350 | 5.77× | 0.955 | 4.08× | ok |
| pugixml-tests | 3.208 | 14.791 | 4.61× | 11.901 | 3.71× | ok |
| rapidjson | 0.113 | 0.464 | 4.11× | 0.389 | 3.44× | ok |
| re2 | 2.316 | 10.716 | 4.63× | 6.625 | 2.86× | ok |
| re2-test-re2 | 4.252 | 15.056 | 3.54× | 14.121 | 3.32× | ok |
| re2-test-search | 4.219 | 13.546 | 3.21× | 14.338 | 3.40× | ok |
| tramp3d-v4 | 0.817 | 8.202 | 10.04× | 2.484 | 3.04× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.109 | 0.817 | 7.50× | 0.488 | 4.48× | ok |
| Adobe-C++/loop_unroll | 0.453 | 5.287 | 11.67× | 4.161 | 9.19× | ok |
| Adobe-C++/simple_types_constant_folding | 0.251 | 2.949 | 11.75× | 2.410 | 9.60× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.251 | 2.292 | 9.13× | 1.792 | 7.14× | ok |
| Adobe-C++/stepanov_abstraction | 0.093 | 1.046 | 11.25× | 0.460 | 4.95× | ok |
| Adobe-C++/stepanov_vector | 0.112 | 1.418 | 12.66× | 0.524 | 4.68× | ok |
| Bullet | 6.323 | 39.794 | 6.29× | 27.731 | 4.39× | ok |
| CLAMR | 4.684 | 23.226 | 4.96× | 19.460 | 4.15× | ok |
| CoyoteBench/almabench | 0.033 | 0.150 | 4.55× | 0.114 | 3.45× | ok |
| CoyoteBench/fftbench | 0.131 | 0.417 | 3.18× | 0.496 | 3.79× | ok |
| CoyoteBench/huffbench | 0.039 | 0.196 | 5.03× | 0.135 | 3.46× | ok |
| CoyoteBench/lpbench | 0.038 | 0.190 | 5.00× | 0.202 | 5.32× | ok |
| DOE/HACCKernels | 0.111 | 0.407 | 3.67× | 0.385 | 3.47× | ok |
| DOE/HPCCG | 0.646 | 2.221 | 3.44× | 2.188 | 3.39× | ok |
| DOE/PENNANT | 1.672 | 6.509 | 3.89× | 5.610 | 3.36× | ok |
| DOE/miniFE | 0.833 | 3.834 | 4.60× | 3.605 | 4.33× | ok |
| Misc-C++-EH/spirit | 0.679 | 3.631 | 5.35× | 2.862 | 4.22× | ok |
| Misc-C++-Large/ray | 0.114 | 0.438 | 3.84× | 0.404 | 3.54× | ok |
| Misc-C++-Large/sphereflake | 0.101 | 0.710 | 7.03× | 0.364 | 3.60× | ok |
| Misc-C++/bigfib | 0.147 | 0.526 | 3.58× | 0.537 | 3.65× | ok |
| Misc-C++/oopack_v1p8 | 0.039 | 0.186 | 4.77× | 0.179 | 4.59× | ok |
| Misc-C++/stepanov_container | 0.218 | 0.897 | 4.11× | 0.961 | 4.41× | ok |
| Misc-C++/stepanov_v1p2 | 0.040 | 0.189 | 4.72× | 0.168 | 4.20× | ok |
| PAQ8p | 0.316 | 3.961 | 12.53× | 1.725 | 5.46× | ok |
| Prolangs-C++/life | 0.009 | 0.095 | — | 0.060 | — | ok |
| Prolangs-C++/ocean | 0.020 | 0.190 | 9.50× | 0.115 | 5.75× | ok |
| Prolangs-C++/primes | 0.007 | 0.034 | — | 0.035 | — | ok |
| Shootout-C++-EH/except | 0.069 | 0.193 | 2.80× | 0.219 | 3.17× | ok |
| Shootout-C++/ackermann | 0.070 | 0.195 | 2.79× | 0.204 | 2.91× | ok |
| Shootout-C++/ary3 | 0.087 | 0.264 | 3.03× | 0.306 | 3.52× | ok |
| Shootout-C++/fibo | 0.066 | 0.182 | 2.76× | 0.197 | 2.98× | ok |
| Shootout-C++/hash | 0.106 | 0.343 | 3.24× | 0.370 | 3.49× | ok |
| Shootout-C++/hash2 | 0.127 | 0.447 | 3.52× | 0.532 | 4.19× | ok |
| Shootout-C++/heapsort | 0.078 | 0.202 | 2.59× | 0.270 | 3.46× | ok |
| Shootout-C++/lists | 0.077 | 0.261 | 3.39× | 0.261 | 3.39× | ok |
| Shootout-C++/lists1 | 0.101 | 0.267 | 2.64× | 0.272 | 2.69× | ok |
| Shootout-C++/matrix | 0.068 | 0.197 | 2.90× | 0.285 | 4.19× | ok |
| Shootout-C++/methcall | 0.070 | 0.185 | 2.64× | 0.211 | 3.01× | ok |
| Shootout-C++/moments | 0.102 | 0.295 | 2.89× | 0.316 | 3.10× | ok |
| Shootout-C++/random | 0.081 | 0.190 | 2.35× | 0.236 | 2.91× | ok |
| Shootout-C++/sieve | 0.088 | 0.240 | 2.73× | 0.307 | 3.49× | ok |
| SmallPT | 0.038 | 0.276 | 7.26× | 0.152 | 4.00× | ok |
| Stanford/Bubblesort | 0.010 | 0.049 | 4.90× | 0.042 | 4.20× | ok |
| Stanford/FloatMM | 0.012 | 0.058 | 4.83× | 0.065 | 5.42× | ok |
| Stanford/Puzzle | 0.021 | 0.118 | 5.62× | 0.113 | 5.38× | ok |
| Stanford/Treesort | 0.014 | 0.082 | 5.86× | 0.060 | 4.29× | ok |
| bg/binarytrees/2 | 0.071 | 0.401 | 5.65× | 0.215 | 3.03× | ok |
| bg/fannkuchredux/3 | 0.035 | 0.121 | 3.46× | 0.107 | 3.06× | ok |
| bg/fasta/1 | 0.058 | 0.152 | 2.62× | 0.175 | 3.02× | ok |
| bg/fasta/2 | 0.054 | 0.153 | 2.83× | 0.162 | 3.00× | ok |
| bg/fasta/3 | 0.094 | 0.228 | 2.43× | 0.253 | 2.69× | ok |
| bg/fasta/4 | 0.074 | 0.188 | 2.54× | 0.195 | 2.64× | ok |
| bg/fasta/6 | 0.143 | 0.444 | 3.10× | 0.492 | 3.44× | ok |
| bg/mandelbrot/0 | 0.187 | 0.609 | 3.26× | 0.690 | 3.69× | ok |
| bg/mandelbrot/2 | 0.085 | 0.231 | 2.72× | 0.359 | 4.22× | ok |
| bg/mandelbrot/3 | 0.089 | 0.227 | 2.55× | 0.272 | 3.06× | ok |
| bg/mandelbrot/5 | 0.046 | 0.158 | 3.43× | 0.165 | 3.59× | ok |
| bg/mandelbrot/7 | 0.056 | 0.202 | 3.61× | 0.160 | 2.86× | ok |
| bg/mandelbrot/9 | 0.047 | 0.191 | 4.06× | 0.158 | 3.36× | ok |
| bg/nbody/1 | 0.037 | 0.157 | 4.24× | 0.170 | 4.59× | ok |
| bg/nbody/2 | 0.032 | 0.112 | 3.50× | 0.116 | 3.62× | ok |
| bg/nbody/3 | 0.030 | 0.104 | 3.47× | 0.105 | 3.50× | ok |
| bg/nbody/6 | 0.041 | 0.162 | 3.95× | 0.168 | 4.10× | ok |
| bg/pidigits/4 | 0.117 | 0.322 | 2.75× | 0.409 | 3.50× | ok |
| bg/pidigits/5 | 0.084 | 0.196 | 2.33× | 0.278 | 3.31× | ok |
| bg/revcomp/1 | 0.093 | 0.231 | 2.48× | 0.273 | 2.94× | ok |
| bg/revcomp/5 | 0.086 | 0.237 | 2.76× | 0.242 | 2.81× | ok |
| bg/spectralnorm/1 | 0.111 | 0.339 | 3.05× | 0.341 | 3.07× | ok |
| box2d | 1.705 | 6.926 | 4.06× | 5.912 | 3.47× | ok |
| fmt | 0.984 | 5.396 | 5.48× | 3.991 | 4.06× | ok |
| hexxagon | 0.278 | 0.966 | 3.47× | 1.082 | 3.89× | ok |
| lambda | 0.111 | 1.010 | 9.10× | 0.487 | 4.39× | ok |
| minisat | 0.140 | 0.916 | 6.54× | 0.621 | 4.44× | ok |
| nlohmann-json | 0.816 | 3.279 | 4.02× | 2.956 | 3.62× | ok |
| pugixml | 0.638 | 5.502 | 8.62× | 3.705 | 5.81× | ok |
| pugixml-tests | 4.936 | 34.159 | 6.92× | 23.807 | 4.82× | ok |
| rapidjson | 0.239 | 1.152 | 4.82× | 0.686 | 2.87× | ok |
| re2 | 2.889 | 17.939 | 6.21× | 9.968 | 3.45× | ok |
| re2-test-re2 | 5.543 | 25.739 | 4.64× | 21.012 | 3.79× | ok |
| re2-test-search | 5.339 | 23.203 | 4.35× | 19.956 | 3.74× | ok |
| tramp3d-v4 | 3.455 | 18.850 | 5.46× | 13.724 | 3.97× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.059 | 0.133 | 2.25× | 0.186 | 3.15× | ok |
| Adobe-C++/loop_unroll | 0.035 | 0.098 | 2.80× | 0.101 | 2.89× | ok |
| Adobe-C++/simple_types_constant_folding | 0.036 | 0.101 | 2.81× | 0.106 | 2.94× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.034 | 0.093 | 2.74× | 0.119 | 3.50× | ok |
| Adobe-C++/stepanov_abstraction | 0.031 | 0.067 | 2.16× | 0.085 | 2.74× | ok |
| Adobe-C++/stepanov_vector | 0.054 | 0.138 | 2.56× | 0.158 | 2.93× | ok |
| Bullet | 4.397 | 10.037 | 2.28× | 14.252 | 3.24× | ok |
| CLAMR | 2.103 | 4.807 | 2.29× | 7.260 | 3.45× | ok |
| CoyoteBench/almabench | 0.026 | 0.055 | 2.12× | 0.072 | 2.77× | ok |
| CoyoteBench/fftbench | 0.099 | 0.222 | 2.24× | 0.339 | 3.42× | ok |
| CoyoteBench/huffbench | 0.030 | 0.052 | 1.73× | 0.072 | 2.40× | ok |
| CoyoteBench/lpbench | 0.029 | 0.060 | 2.07× | 0.082 | 2.83× | ok |
| DOE/HACCKernels | 0.112 | 0.254 | 2.27× | 0.293 | 2.62× | ok |
| DOE/HPCCG | 0.565 | 1.322 | 2.34× | 1.717 | 3.04× | ok |
| DOE/PENNANT | 1.297 | 2.816 | 2.17× | 3.783 | 2.92× | ok |
| DOE/miniFE | 0.533 | 1.179 | 2.21× | 1.710 | 3.21× | ok |
| Misc-C++-EH/spirit | 0.260 | 0.966 | 3.72× | 1.018 | 3.92× | ok |
| Misc-C++-Large/ray | 0.090 | 0.224 | 2.49× | 0.302 | 3.36× | ok |
| Misc-C++-Large/sphereflake | 0.083 | 0.197 | 2.37× | 0.235 | 2.83× | ok |
| Misc-C++/bigfib | 0.107 | 0.238 | 2.22× | 0.362 | 3.38× | ok |
| Misc-C++/oopack_v1p8 | 0.029 | 0.062 | 2.14× | 0.088 | 3.03× | ok |
| Misc-C++/stepanov_container | 0.137 | 0.325 | 2.37× | 0.442 | 3.23× | ok |
| Misc-C++/stepanov_v1p2 | 0.025 | 0.062 | 2.48× | 0.069 | 2.76× | ok |
| PAQ8p | 0.043 | 0.120 | 2.79× | 0.125 | 2.91× | ok |
| Prolangs-C++/life | 0.003 | 0.009 | — | 0.018 | — | ok |
| Prolangs-C++/ocean | 0.008 | 0.020 | — | 0.030 | — | ok |
| Prolangs-C++/primes | 0.006 | 0.015 | — | 0.024 | — | ok |
| Shootout-C++-EH/except | 0.065 | 0.149 | 2.29× | 0.195 | 3.00× | ok |
| Shootout-C++/ackermann | 0.067 | 0.158 | 2.36× | 0.241 | 3.60× | ok |
| Shootout-C++/ary3 | 0.077 | 0.171 | 2.22× | 0.248 | 3.22× | ok |
| Shootout-C++/fibo | 0.062 | 0.145 | 2.34× | 0.178 | 2.87× | ok |
| Shootout-C++/hash | 0.086 | 0.232 | 2.70× | 0.247 | 2.87× | ok |
| Shootout-C++/hash2 | 0.099 | 0.220 | 2.22× | 0.272 | 2.75× | ok |
| Shootout-C++/heapsort | 0.075 | 0.167 | 2.23× | 0.234 | 3.12× | ok |
| Shootout-C++/lists | 0.072 | 0.194 | 2.69× | 0.199 | 2.76× | ok |
| Shootout-C++/lists1 | 0.089 | 0.179 | 2.01× | 0.212 | 2.38× | ok |
| Shootout-C++/matrix | 0.062 | 0.153 | 2.47× | 0.178 | 2.87× | ok |
| Shootout-C++/methcall | 0.066 | 0.139 | 2.11× | 0.197 | 2.98× | ok |
| Shootout-C++/moments | 0.088 | 0.187 | 2.12× | 0.230 | 2.61× | ok |
| Shootout-C++/random | 0.077 | 0.167 | 2.17× | 0.221 | 2.87× | ok |
| Shootout-C++/sieve | 0.077 | 0.181 | 2.35× | 0.245 | 3.18× | ok |
| SmallPT | 0.026 | 0.057 | 2.19× | 0.071 | 2.73× | ok |
| Stanford/Bubblesort | 0.008 | 0.021 | — | 0.027 | — | ok |
| Stanford/FloatMM | 0.008 | 0.020 | — | 0.028 | — | ok |
| Stanford/Puzzle | 0.009 | 0.023 | — | 0.031 | — | ok |
| Stanford/Treesort | 0.009 | 0.022 | — | 0.030 | — | ok |
| bg/binarytrees/2 | 0.063 | 0.150 | 2.38× | 0.195 | 3.10× | ok |
| bg/fannkuchredux/3 | 0.030 | 0.062 | 2.07× | 0.074 | 2.47× | ok |
| bg/fasta/1 | 0.050 | 0.091 | 1.82× | 0.127 | 2.54× | ok |
| bg/fasta/2 | 0.045 | 0.091 | 2.02× | 0.115 | 2.56× | ok |
| bg/fasta/3 | 0.073 | 0.171 | 2.34× | 0.217 | 2.97× | ok |
| bg/fasta/4 | 0.080 | 0.158 | 1.97× | 0.167 | 2.09× | ok |
| bg/fasta/6 | 0.106 | 0.294 | 2.77× | 0.334 | 3.15× | ok |
| bg/mandelbrot/0 | 0.129 | 0.278 | 2.16× | 0.375 | 2.91× | ok |
| bg/mandelbrot/2 | 0.074 | 0.194 | 2.62× | 0.238 | 3.22× | ok |
| bg/mandelbrot/3 | 0.086 | 0.188 | 2.19× | 0.249 | 2.90× | ok |
| bg/mandelbrot/5 | 0.039 | 0.082 | 2.10× | 0.107 | 2.74× | ok |
| bg/mandelbrot/7 | 0.042 | 0.088 | 2.10× | 0.108 | 2.57× | ok |
| bg/mandelbrot/9 | 0.041 | 0.086 | 2.10× | 0.106 | 2.59× | ok |
| bg/nbody/1 | 0.024 | 0.055 | 2.29× | 0.067 | 2.79× | ok |
| bg/nbody/2 | 0.023 | 0.052 | 2.26× | 0.066 | 2.87× | ok |
| bg/nbody/3 | 0.025 | 0.050 | 2.00× | 0.069 | 2.76× | ok |
| bg/nbody/6 | 0.026 | 0.053 | 2.04× | 0.075 | 2.88× | ok |
| bg/pidigits/4 | 0.109 | 0.257 | 2.36× | 0.361 | 3.31× | ok |
| bg/pidigits/5 | 0.065 | 0.156 | 2.40× | 0.243 | 3.74× | ok |
| bg/revcomp/1 | 0.071 | 0.174 | 2.45× | 0.212 | 2.99× | ok |
| bg/revcomp/5 | 0.072 | 0.151 | 2.10× | 0.233 | 3.24× | ok |
| bg/spectralnorm/1 | 0.101 | 0.223 | 2.21× | 0.273 | 2.70× | ok |
| box2d | 1.351 | 2.644 | 1.96× | 2.963 | 2.19× | ok |
| fmt | 0.426 | 1.057 | 2.48× | 1.545 | 3.63× | ok |
| hexxagon | 0.216 | 0.484 | 2.24× | 0.661 | 3.06× | ok |
| lambda | 0.036 | 0.105 | 2.92× | 0.133 | 3.69× | ok |
| minisat | 0.044 | 0.129 | 2.93× | 0.162 | 3.68× | ok |
| nlohmann-json | 0.299 | 0.758 | 2.54× | 1.324 | 4.43× | ok |
| pugixml | 0.202 | 0.509 | 2.52× | 0.708 | 3.50× | ok |
| pugixml-tests | 2.678 | 7.179 | 2.68× | 8.853 | 3.31× | ok |
| rapidjson | 0.085 | 0.240 | 2.82× | 0.298 | 3.51× | ok |
| re2 | 2.608 | 6.050 | 2.32× | 5.641 | 2.16× | ok |
| re2-test-re2 | 3.818 | 9.340 | 2.45× | 12.061 | 3.16× | ok |
| re2-test-search | 3.745 | 9.164 | 2.45× | 12.376 | 3.30× | ok |
| tramp3d-v4 | 0.416 | 2.113 | 5.08× | 1.449 | 3.48× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
