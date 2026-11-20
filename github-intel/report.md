# Public benchmarks: Intel (GitHub)

Measured compiler: [`0bf4bdfe0`](https://github.com/vishvananda/cppgm/commit/0bf4bdfe0b8e6703ee3dafe7ac8c410e2097974a) · [CI run](https://github.com/vishvananda/cppgm/actions/runs/44774088589) · [Raw program results](results.json)

81 of 81 programs built with cppgm and g++ and agreed. Each number is the reference over cppgm, so above 1× means cppgm is smaller or faster.

CPU: INTEL(R) XEON(R) PLATINUM 8573C.

| Measure | vs g++ | Programs | vs clang++ | Programs |
| --- | ---: | ---: | ---: | ---: |
| Frontend CPU, `-fsyntax-only` | 2.33× | 79 | 2.87× | 79 |
| Compile CPU, `-O0` | 3.21× | 79 | 3.08× | 79 |
| Compile CPU, `-O3` | 4.39× | 80 | 3.79× | 80 |
| Compile peak RSS, `-O0` | 1.41× | 81 | 2.09× | 81 |
| Compile peak RSS, `-O3` | 1.67× | 81 | 2.17× | 81 |
| Executable size, `-O0` | 0.93× | 81 | 0.87× | 81 |
| Executable size, `-O3` | 0.97× | 81 | 0.93× | 81 |
| Run CPU, `-O0` | 1.15× | 81 | 1.08× | 81 |
| Run CPU, `-O3` | 1.02× | 81 | 1.01× | 81 |
| Run instructions, `-O3` | 1.00× | 43 | - | 0 |

O3 execution uses paired ABBA/BAAB blocks. GCC A/A CPU ratios ranged from 0.980 to 1.027; raw observations and block ratios are retained in the artifact.

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
| Adobe-C++/functionobjects | 0.092 | 0.365 | 3.97× | 0.252 | 2.74× | ok |
| Adobe-C++/loop_unroll | 0.070 | 0.793 | 11.33× | 0.245 | 3.50× | ok |
| Adobe-C++/simple_types_constant_folding | 0.084 | 0.908 | 10.81× | 0.295 | 3.51× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.068 | 0.689 | 10.13× | 0.273 | 4.01× | ok |
| Adobe-C++/stepanov_abstraction | 0.051 | 0.259 | 5.08× | 0.159 | 3.12× | ok |
| Adobe-C++/stepanov_vector | 0.102 | 0.404 | 3.96× | 0.285 | 2.79× | ok |
| Bullet | 7.280 | 24.132 | 3.31× | 21.626 | 2.97× | ok |
| CLAMR | 3.414 | 13.491 | 3.95× | 11.224 | 3.29× | ok |
| CoyoteBench/almabench | 0.034 | 0.110 | 3.24× | 0.098 | 2.88× | ok |
| CoyoteBench/fftbench | 0.145 | 0.364 | 2.51× | 0.424 | 2.92× | ok |
| CoyoteBench/huffbench | 0.039 | 0.092 | 2.36× | 0.113 | 2.90× | ok |
| CoyoteBench/lpbench | 0.039 | 0.100 | 2.56× | 0.099 | 2.54× | ok |
| DOE/HACCKernels | 0.164 | 0.358 | 2.18× | 0.430 | 2.62× | ok |
| DOE/HPCCG | 0.875 | 2.143 | 2.45× | 3.021 | 3.45× | ok |
| DOE/PENNANT | 2.095 | 6.021 | 2.87× | 5.568 | 2.66× | ok |
| DOE/miniFE | 0.814 | 3.060 | 3.76× | 2.555 | 3.14× | ok |
| Misc-C++-EH/spirit | 0.524 | 3.433 | 6.55× | 2.143 | 4.09× | ok |
| Misc-C++-Large/ray | 0.141 | 0.359 | 2.55× | 0.456 | 3.23× | ok |
| Misc-C++-Large/sphereflake | 0.127 | 0.287 | 2.26× | 0.364 | 2.87× | ok |
| Misc-C++/bigfib | 0.165 | 0.546 | 3.31× | 0.563 | 3.41× | ok |
| Misc-C++/oopack_v1p8 | 0.042 | 0.128 | 3.05× | 0.127 | 3.02× | ok |
| Misc-C++/stepanov_container | 0.220 | 0.729 | 3.31× | 0.720 | 3.27× | ok |
| Misc-C++/stepanov_v1p2 | 0.040 | 0.162 | 4.05× | 0.119 | 2.97× | ok |
| PAQ8p | 0.087 | 0.609 | 7.00× | 0.322 | 3.70× | ok |
| Prolangs-C++/life | 0.005 | 0.042 | — | 0.035 | — | ok |
| Prolangs-C++/ocean | 0.013 | 0.079 | 6.08× | 0.063 | 4.85× | ok |
| Prolangs-C++/primes | 0.007 | 0.030 | — | 0.031 | — | ok |
| Shootout-C++-EH/except | 0.096 | 0.208 | 2.17× | 0.277 | 2.89× | ok |
| Shootout-C++/ackermann | 0.099 | 0.208 | 2.10× | 0.311 | 3.14× | ok |
| Shootout-C++/ary3 | 0.104 | 0.257 | 2.47× | 0.291 | 2.80× | ok |
| Shootout-C++/fibo | 0.096 | 0.219 | 2.28× | 0.306 | 3.19× | ok |
| Shootout-C++/hash | 0.145 | 0.407 | 2.81× | 0.458 | 3.16× | ok |
| Shootout-C++/hash2 | 0.132 | 0.380 | 2.88× | 0.387 | 2.93× | ok |
| Shootout-C++/heapsort | 0.111 | 0.262 | 2.36× | 0.307 | 2.77× | ok |
| Shootout-C++/lists | 0.118 | 0.288 | 2.44× | 0.300 | 2.54× | ok |
| Shootout-C++/lists1 | 0.112 | 0.304 | 2.71× | 0.316 | 2.82× | ok |
| Shootout-C++/matrix | 0.093 | 0.211 | 2.27× | 0.274 | 2.95× | ok |
| Shootout-C++/methcall | 0.090 | 0.209 | 2.32× | 0.280 | 3.11× | ok |
| Shootout-C++/moments | 0.127 | 0.340 | 2.68× | 0.331 | 2.61× | ok |
| Shootout-C++/random | 0.107 | 0.236 | 2.21× | 0.384 | 3.59× | ok |
| Shootout-C++/sieve | 0.112 | 0.281 | 2.51× | 0.350 | 3.12× | ok |
| SmallPT | 0.036 | 0.116 | 3.22× | 0.113 | 3.14× | ok |
| Stanford/Bubblesort | 0.012 | 0.035 | 2.92× | 0.039 | 3.25× | ok |
| Stanford/FloatMM | 0.011 | 0.037 | 3.36× | 0.039 | 3.55× | ok |
| Stanford/Puzzle | 0.013 | 0.045 | 3.46× | 0.045 | 3.46× | ok |
| Stanford/Treesort | 0.012 | 0.038 | 3.17× | 0.040 | 3.33× | ok |
| bg/binarytrees/2 | 0.092 | 0.210 | 2.28× | 0.274 | 2.98× | ok |
| bg/fannkuchredux/3 | 0.044 | 0.091 | 2.07× | 0.105 | 2.39× | ok |
| bg/fasta/1 | 0.068 | 0.163 | 2.40× | 0.170 | 2.50× | ok |
| bg/fasta/2 | 0.074 | 0.174 | 2.35× | 0.177 | 2.39× | ok |
| bg/fasta/3 | 0.109 | 0.218 | 2.00× | 0.308 | 2.83× | ok |
| bg/fasta/4 | 0.099 | 0.204 | 2.06× | 0.232 | 2.34× | ok |
| bg/fasta/6 | 0.197 | 0.540 | 2.74× | 0.567 | 2.88× | ok |
| bg/mandelbrot/0 | 0.204 | 0.685 | 3.36× | 0.565 | 2.77× | ok |
| bg/mandelbrot/2 | 0.113 | 0.320 | 2.83× | 0.356 | 3.15× | ok |
| bg/mandelbrot/3 | 0.124 | 0.288 | 2.32× | 0.333 | 2.69× | ok |
| bg/mandelbrot/5 | 0.059 | 0.148 | 2.51× | 0.156 | 2.64× | ok |
| bg/mandelbrot/7 | 0.061 | 0.173 | 2.84× | 0.184 | 3.02× | ok |
| bg/mandelbrot/9 | 0.058 | 0.152 | 2.62× | 0.158 | 2.72× | ok |
| bg/nbody/1 | 0.039 | 0.123 | 3.15× | 0.118 | 3.03× | ok |
| bg/nbody/2 | 0.033 | 0.092 | 2.79× | 0.100 | 3.03× | ok |
| bg/nbody/3 | 0.040 | 0.094 | 2.35× | 0.103 | 2.57× | ok |
| bg/nbody/6 | 0.038 | 0.124 | 3.26× | 0.117 | 3.08× | ok |
| bg/pidigits/4 | 0.165 | 0.419 | 2.54× | 0.528 | 3.20× | ok |
| bg/pidigits/5 | 0.099 | 0.230 | 2.32× | 0.310 | 3.13× | ok |
| bg/revcomp/1 | 0.113 | 0.293 | 2.59× | 0.324 | 2.87× | ok |
| bg/revcomp/5 | 0.101 | 0.269 | 2.66× | 0.338 | 3.35× | ok |
| bg/spectralnorm/1 | 0.147 | 0.366 | 2.49× | 0.463 | 3.15× | ok |
| box2d | 1.960 | 6.098 | 3.11× | 6.155 | 3.14× | ok |
| fmt | 0.669 | 3.326 | 4.97× | 2.289 | 3.42× | ok |
| hexxagon | 0.333 | 0.855 | 2.57× | 1.063 | 3.19× | ok |
| lambda | 0.067 | 0.412 | 6.15× | 0.286 | 4.27× | ok |
| minisat | 0.081 | 0.407 | 5.02× | 0.281 | 3.47× | ok |
| nlohmann-json | 0.534 | 2.493 | 4.67× | 2.349 | 4.40× | ok |
| pugixml | 0.348 | 1.670 | 4.80× | 1.248 | 3.59× | ok |
| pugixml-tests | 4.569 | 19.664 | 4.30× | 16.413 | 3.59× | ok |
| rapidjson | 0.154 | 0.618 | 4.01× | 0.505 | 3.28× | ok |
| re2 | 3.347 | 14.284 | 4.27× | 8.517 | 2.54× | ok |
| re2-test-re2 | 5.831 | 19.839 | 3.40× | 19.566 | 3.36× | ok |
| re2-test-search | 5.988 | 18.351 | 3.06× | 18.382 | 3.07× | ok |
| tramp3d-v4 | 1.233 | 9.116 | 7.39× | 3.251 | 2.64× | ok |

### O3 compilation

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.162 | 1.171 | 7.23× | 0.665 | 4.10× | ok |
| Adobe-C++/loop_unroll | 0.628 | 7.747 | 12.34× | 5.688 | 9.06× | ok |
| Adobe-C++/simple_types_constant_folding | 0.359 | 4.376 | 12.19× | 3.165 | 8.82× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.317 | 3.203 | 10.10× | 2.515 | 7.93× | ok |
| Adobe-C++/stepanov_abstraction | 0.131 | 1.521 | 11.61× | 0.599 | 4.57× | ok |
| Adobe-C++/stepanov_vector | 0.177 | 1.999 | 11.29× | 0.891 | 5.03× | ok |
| Bullet | 8.073 | 52.394 | 6.49× | 39.441 | 4.89× | ok |
| CLAMR | 5.875 | 32.146 | 5.47× | 25.811 | 4.39× | ok |
| CoyoteBench/almabench | 0.045 | 0.242 | 5.38× | 0.158 | 3.51× | ok |
| CoyoteBench/fftbench | 0.172 | 0.604 | 3.51× | 0.577 | 3.35× | ok |
| CoyoteBench/huffbench | 0.050 | 0.315 | 6.30× | 0.172 | 3.44× | ok |
| CoyoteBench/lpbench | 0.045 | 0.244 | 5.42× | 0.246 | 5.47× | ok |
| DOE/HACCKernels | 0.169 | 0.496 | 2.93× | 0.504 | 2.98× | ok |
| DOE/HPCCG | 0.943 | 3.124 | 3.31× | 3.740 | 3.97× | ok |
| DOE/PENNANT | 2.347 | 9.040 | 3.85× | 7.479 | 3.19× | ok |
| DOE/miniFE | 1.122 | 5.441 | 4.85× | 4.254 | 3.79× | ok |
| Misc-C++-EH/spirit | 0.827 | 5.107 | 6.18× | 3.945 | 4.77× | ok |
| Misc-C++-Large/ray | 0.157 | 0.657 | 4.18× | 0.544 | 3.46× | ok |
| Misc-C++-Large/sphereflake | 0.151 | 1.041 | 6.89× | 0.503 | 3.33× | ok |
| Misc-C++/bigfib | 0.203 | 0.781 | 3.85× | 0.753 | 3.71× | ok |
| Misc-C++/oopack_v1p8 | 0.053 | 0.248 | 4.68× | 0.226 | 4.26× | ok |
| Misc-C++/stepanov_container | 0.295 | 1.263 | 4.28× | 1.243 | 4.21× | ok |
| Misc-C++/stepanov_v1p2 | 0.057 | 0.273 | 4.79× | 0.237 | 4.16× | ok |
| PAQ8p | 0.409 | 5.327 | 13.02× | 2.340 | 5.72× | ok |
| Prolangs-C++/life | 0.013 | 0.135 | 10.38× | 0.088 | 6.77× | ok |
| Prolangs-C++/ocean | 0.026 | 0.258 | 9.92× | 0.157 | 6.04× | ok |
| Prolangs-C++/primes | 0.009 | 0.047 | — | 0.041 | — | ok |
| Shootout-C++-EH/except | 0.099 | 0.268 | 2.71× | 0.288 | 2.91× | ok |
| Shootout-C++/ackermann | 0.103 | 0.255 | 2.48× | 0.321 | 3.12× | ok |
| Shootout-C++/ary3 | 0.106 | 0.305 | 2.88× | 0.341 | 3.22× | ok |
| Shootout-C++/fibo | 0.102 | 0.274 | 2.69× | 0.304 | 2.98× | ok |
| Shootout-C++/hash | 0.165 | 0.548 | 3.32× | 0.581 | 3.52× | ok |
| Shootout-C++/hash2 | 0.164 | 0.547 | 3.34× | 0.650 | 3.96× | ok |
| Shootout-C++/heapsort | 0.115 | 0.317 | 2.76× | 0.345 | 3.00× | ok |
| Shootout-C++/lists | 0.118 | 0.357 | 3.03× | 0.336 | 2.85× | ok |
| Shootout-C++/lists1 | 0.124 | 0.349 | 2.81× | 0.364 | 2.94× | ok |
| Shootout-C++/matrix | 0.103 | 0.253 | 2.46× | 0.357 | 3.47× | ok |
| Shootout-C++/methcall | 0.093 | 0.246 | 2.65× | 0.299 | 3.22× | ok |
| Shootout-C++/moments | 0.142 | 0.424 | 2.99× | 0.412 | 2.90× | ok |
| Shootout-C++/random | 0.118 | 0.261 | 2.21× | 0.326 | 2.76× | ok |
| Shootout-C++/sieve | 0.124 | 0.332 | 2.68× | 0.385 | 3.10× | ok |
| SmallPT | 0.050 | 0.380 | 7.60× | 0.221 | 4.42× | ok |
| Stanford/Bubblesort | 0.016 | 0.072 | 4.50× | 0.061 | 3.81× | ok |
| Stanford/FloatMM | 0.016 | 0.082 | 5.12× | 0.086 | 5.37× | ok |
| Stanford/Puzzle | 0.026 | 0.162 | 6.23× | 0.149 | 5.73× | ok |
| Stanford/Treesort | 0.018 | 0.111 | 6.17× | 0.067 | 3.72× | ok |
| bg/binarytrees/2 | 0.096 | 0.547 | 5.70× | 0.306 | 3.19× | ok |
| bg/fannkuchredux/3 | 0.049 | 0.151 | 3.08× | 0.143 | 2.92× | ok |
| bg/fasta/1 | 0.076 | 0.212 | 2.79× | 0.219 | 2.88× | ok |
| bg/fasta/2 | 0.083 | 0.227 | 2.73× | 0.237 | 2.86× | ok |
| bg/fasta/3 | 0.131 | 0.288 | 2.20× | 0.347 | 2.65× | ok |
| bg/fasta/4 | 0.105 | 0.253 | 2.41× | 0.278 | 2.65× | ok |
| bg/fasta/6 | 0.189 | 0.608 | 3.22× | 0.660 | 3.49× | ok |
| bg/mandelbrot/0 | 0.216 | 0.852 | 3.94× | 0.792 | 3.67× | ok |
| bg/mandelbrot/2 | 0.123 | 0.352 | 2.86× | 0.406 | 3.30× | ok |
| bg/mandelbrot/3 | 0.127 | 0.319 | 2.51× | 0.376 | 2.96× | ok |
| bg/mandelbrot/5 | 0.071 | 0.197 | 2.77× | 0.213 | 3.00× | ok |
| bg/mandelbrot/7 | 0.076 | 0.265 | 3.49× | 0.229 | 3.01× | ok |
| bg/mandelbrot/9 | 0.072 | 0.243 | 3.38× | 0.200 | 2.78× | ok |
| bg/nbody/1 | 0.055 | 0.192 | 3.49× | 0.222 | 4.04× | ok |
| bg/nbody/2 | 0.038 | 0.174 | 4.58× | 0.159 | 4.18× | ok |
| bg/nbody/3 | 0.041 | 0.162 | 3.95× | 0.139 | 3.39× | ok |
| bg/nbody/6 | 0.054 | 0.210 | 3.89× | 0.222 | 4.11× | ok |
| bg/pidigits/4 | 0.153 | 0.447 | 2.92× | 0.558 | 3.65× | ok |
| bg/pidigits/5 | 0.113 | 0.277 | 2.45× | 0.326 | 2.88× | ok |
| bg/revcomp/1 | 0.119 | 0.331 | 2.78× | 0.374 | 3.14× | ok |
| bg/revcomp/5 | 0.111 | 0.341 | 3.07× | 0.384 | 3.46× | ok |
| bg/spectralnorm/1 | 0.159 | 0.466 | 2.93× | 0.535 | 3.36× | ok |
| box2d | 2.321 | 9.637 | 4.15× | 6.493 | 2.80× | ok |
| fmt | 1.253 | 6.775 | 5.41× | 4.781 | 3.82× | ok |
| hexxagon | 0.387 | 1.423 | 3.68× | 1.399 | 3.61× | ok |
| lambda | 0.160 | 1.486 | 9.29× | 0.733 | 4.58× | ok |
| minisat | 0.186 | 1.339 | 7.20× | 0.837 | 4.50× | ok |
| nlohmann-json | 1.041 | 4.281 | 4.11× | 3.773 | 3.62× | ok |
| pugixml | 0.910 | 7.194 | 7.91× | 4.880 | 5.36× | ok |
| pugixml-tests | 6.525 | 45.569 | 6.98× | 32.511 | 4.98× | ok |
| rapidjson | 0.312 | 1.513 | 4.85× | 0.901 | 2.89× | ok |
| re2 | 3.808 | 24.238 | 6.37× | 12.763 | 3.35× | ok |
| re2-test-re2 | 7.578 | 34.554 | 4.56× | 29.863 | 3.94× | ok |
| re2-test-search | 7.524 | 31.387 | 4.17× | 28.221 | 3.75× | ok |
| tramp3d-v4 | 3.312 | 22.802 | 6.88× | 17.748 | 5.36× | ok |

### Frontend only: -fsyntax-only

| Program | cppgm (s) | GCC (s) | Speed vs GCC ↑ | Clang (s) | Speed vs Clang ↑ | Status |
| --- | ---: | ---: | ---: | ---: | ---: | --- |
| Adobe-C++/functionobjects | 0.085 | 0.206 | 2.42× | 0.233 | 2.74× | ok |
| Adobe-C++/loop_unroll | 0.049 | 0.141 | 2.88× | 0.142 | 2.90× | ok |
| Adobe-C++/simple_types_constant_folding | 0.057 | 0.149 | 2.61× | 0.147 | 2.58× | ok |
| Adobe-C++/simple_types_loop_invariant | 0.049 | 0.134 | 2.73× | 0.142 | 2.90× | ok |
| Adobe-C++/stepanov_abstraction | 0.042 | 0.103 | 2.45× | 0.121 | 2.88× | ok |
| Adobe-C++/stepanov_vector | 0.078 | 0.183 | 2.35× | 0.227 | 2.91× | ok |
| Bullet | 6.593 | 16.077 | 2.44× | 16.881 | 2.56× | ok |
| CLAMR | 3.009 | 7.053 | 2.34× | 9.901 | 3.29× | ok |
| CoyoteBench/almabench | 0.033 | 0.090 | 2.73× | 0.091 | 2.76× | ok |
| CoyoteBench/fftbench | 0.142 | 0.323 | 2.27× | 0.391 | 2.75× | ok |
| CoyoteBench/huffbench | 0.037 | 0.077 | 2.08× | 0.107 | 2.89× | ok |
| CoyoteBench/lpbench | 0.038 | 0.081 | 2.13× | 0.091 | 2.39× | ok |
| DOE/HACCKernels | 0.160 | 0.319 | 1.99× | 0.403 | 2.52× | ok |
| DOE/HPCCG | 0.848 | 1.924 | 2.27× | 2.724 | 3.21× | ok |
| DOE/PENNANT | 1.826 | 4.125 | 2.26× | 4.896 | 2.68× | ok |
| DOE/miniFE | 0.732 | 2.016 | 2.75× | 2.171 | 2.97× | ok |
| Misc-C++-EH/spirit | 0.422 | 1.169 | 2.77× | 1.401 | 3.32× | ok |
| Misc-C++-Large/ray | 0.136 | 0.287 | 2.11× | 0.420 | 3.09× | ok |
| Misc-C++-Large/sphereflake | 0.124 | 0.273 | 2.20× | 0.352 | 2.84× | ok |
| Misc-C++/bigfib | 0.150 | 0.362 | 2.41× | 0.489 | 3.26× | ok |
| Misc-C++/oopack_v1p8 | 0.042 | 0.091 | 2.17× | 0.112 | 2.67× | ok |
| Misc-C++/stepanov_container | 0.199 | 0.430 | 2.16× | 0.600 | 3.02× | ok |
| Misc-C++/stepanov_v1p2 | 0.037 | 0.085 | 2.30× | 0.100 | 2.70× | ok |
| PAQ8p | 0.061 | 0.163 | 2.67× | 0.182 | 2.98× | ok |
| Prolangs-C++/life | 0.004 | 0.013 | — | 0.025 | — | ok |
| Prolangs-C++/ocean | 0.011 | 0.027 | 2.45× | 0.040 | 3.64× | ok |
| Prolangs-C++/primes | 0.007 | 0.021 | — | 0.028 | — | ok |
| Shootout-C++-EH/except | 0.095 | 0.209 | 2.20× | 0.256 | 2.69× | ok |
| Shootout-C++/ackermann | 0.098 | 0.210 | 2.14× | 0.295 | 3.01× | ok |
| Shootout-C++/ary3 | 0.100 | 0.235 | 2.35× | 0.273 | 2.73× | ok |
| Shootout-C++/fibo | 0.095 | 0.224 | 2.36× | 0.296 | 3.12× | ok |
| Shootout-C++/hash | 0.134 | 0.310 | 2.31× | 0.410 | 3.06× | ok |
| Shootout-C++/hash2 | 0.125 | 0.281 | 2.25× | 0.345 | 2.76× | ok |
| Shootout-C++/heapsort | 0.112 | 0.269 | 2.40× | 0.295 | 2.63× | ok |
| Shootout-C++/lists | 0.113 | 0.249 | 2.20× | 0.272 | 2.41× | ok |
| Shootout-C++/lists1 | 0.108 | 0.249 | 2.31× | 0.285 | 2.64× | ok |
| Shootout-C++/matrix | 0.093 | 0.207 | 2.23× | 0.280 | 3.01× | ok |
| Shootout-C++/methcall | 0.088 | 0.209 | 2.38× | 0.312 | 3.55× | ok |
| Shootout-C++/moments | 0.121 | 0.269 | 2.22× | 0.301 | 2.49× | ok |
| Shootout-C++/random | 0.109 | 0.233 | 2.14× | 0.303 | 2.78× | ok |
| Shootout-C++/sieve | 0.107 | 0.230 | 2.15× | 0.320 | 2.99× | ok |
| SmallPT | 0.035 | 0.075 | 2.14× | 0.101 | 2.89× | ok |
| Stanford/Bubblesort | 0.012 | 0.030 | 2.50× | 0.038 | 3.17× | ok |
| Stanford/FloatMM | 0.012 | 0.030 | 2.50× | 0.037 | 3.08× | ok |
| Stanford/Puzzle | 0.012 | 0.032 | 2.67× | 0.043 | 3.58× | ok |
| Stanford/Treesort | 0.012 | 0.031 | 2.58× | 0.037 | 3.08× | ok |
| bg/binarytrees/2 | 0.090 | 0.207 | 2.30× | 0.256 | 2.84× | ok |
| bg/fannkuchredux/3 | 0.043 | 0.078 | 1.81× | 0.100 | 2.33× | ok |
| bg/fasta/1 | 0.065 | 0.131 | 2.02× | 0.154 | 2.37× | ok |
| bg/fasta/2 | 0.070 | 0.140 | 2.00× | 0.186 | 2.66× | ok |
| bg/fasta/3 | 0.115 | 0.199 | 1.73× | 0.297 | 2.58× | ok |
| bg/fasta/4 | 0.097 | 0.200 | 2.06× | 0.226 | 2.33× | ok |
| bg/fasta/6 | 0.163 | 0.364 | 2.23× | 0.575 | 3.53× | ok |
| bg/mandelbrot/0 | 0.178 | 0.427 | 2.40× | 0.501 | 2.81× | ok |
| bg/mandelbrot/2 | 0.110 | 0.274 | 2.49× | 0.334 | 3.04× | ok |
| bg/mandelbrot/3 | 0.122 | 0.296 | 2.43× | 0.324 | 2.66× | ok |
| bg/mandelbrot/5 | 0.056 | 0.121 | 2.16× | 0.142 | 2.54× | ok |
| bg/mandelbrot/7 | 0.058 | 0.127 | 2.19× | 0.158 | 2.72× | ok |
| bg/mandelbrot/9 | 0.054 | 0.112 | 2.07× | 0.141 | 2.61× | ok |
| bg/nbody/1 | 0.037 | 0.071 | 1.92× | 0.098 | 2.65× | ok |
| bg/nbody/2 | 0.034 | 0.076 | 2.24× | 0.094 | 2.76× | ok |
| bg/nbody/3 | 0.040 | 0.077 | 1.92× | 0.103 | 2.57× | ok |
| bg/nbody/6 | 0.037 | 0.072 | 1.95× | 0.102 | 2.76× | ok |
| bg/pidigits/4 | 0.153 | 0.381 | 2.49× | 0.447 | 2.92× | ok |
| bg/pidigits/5 | 0.105 | 0.230 | 2.19× | 0.300 | 2.86× | ok |
| bg/revcomp/1 | 0.104 | 0.236 | 2.27× | 0.295 | 2.84× | ok |
| bg/revcomp/5 | 0.095 | 0.241 | 2.54× | 0.302 | 3.18× | ok |
| bg/spectralnorm/1 | 0.158 | 0.328 | 2.08× | 0.440 | 2.78× | ok |
| box2d | 1.799 | 4.174 | 2.32× | 4.880 | 2.71× | ok |
| fmt | 0.580 | 1.472 | 2.54× | 1.819 | 3.14× | ok |
| hexxagon | 0.332 | 0.773 | 2.33× | 1.001 | 3.02× | ok |
| lambda | 0.053 | 0.167 | 3.15× | 0.199 | 3.75× | ok |
| minisat | 0.068 | 0.178 | 2.62× | 0.204 | 3.00× | ok |
| nlohmann-json | 0.403 | 1.113 | 2.76× | 1.731 | 4.30× | ok |
| pugixml | 0.268 | 0.631 | 2.35× | 0.924 | 3.45× | ok |
| pugixml-tests | 3.954 | 9.753 | 2.47× | 12.238 | 3.10× | ok |
| rapidjson | 0.123 | 0.322 | 2.62× | 0.395 | 3.21× | ok |
| re2 | 3.637 | 9.124 | 2.51× | 7.252 | 1.99× | ok |
| re2-test-re2 | 5.309 | 12.757 | 2.40× | 16.570 | 3.12× | ok |
| re2-test-search | 5.442 | 12.597 | 2.31× | 16.495 | 3.03× | ok |
| tramp3d-v4 | 0.785 | 2.817 | 3.59× | 1.929 | 2.46× | ok |


## Toolchains

- **gcc**: g++ (Ubuntu 15.2.0-16ubuntu1) 15.2.0
- **clang**: Ubuntu clang version 21.1.8 (6ubuntu1)
- **valgrind**: valgrind-3.26.0

[Compiler build and codegen results](self-build.md) have their own measured revision.
