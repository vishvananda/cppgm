# WASI compiler self-build hosts

Each host retains its last measurement. Compare the CPU model and measured commit.

| Host | CPU | Measured compiler | Report |
|---|---|---|---|
| EPYC (CI) | AMD EPYC 9V74 80-Core Processor | `03db3c34a` | [Results](epyc/report.md) |
| Intel (CI) | Intel(R) Xeon(R) 6975P-C | `0bf4bdfe0` | [Results](github-intel/report.md) |
| Intel (dedicated) | INTEL(R) XEON(R) PLATINUM 8581C CPU @ 2.30GHz | `50b6ccfce` | [Results](intel/report.md) |
