# WASI compiler self-build hosts

Each host retains its last measurement. Compare the CPU model and measured commit.

| Host | CPU | Measured compiler | Report |
|---|---|---|---|
| EPYC (CI) | AMD EPYC 9V45 96-Core Processor | `992888a62` | [Results](epyc/report.md) |
| Intel (CI) | INTEL(R) XEON(R) PLATINUM 8573C | `44d3c4a29` | [Results](github-intel/report.md) |
| Intel (dedicated) | INTEL(R) XEON(R) PLATINUM 8581C CPU @ 2.30GHz | `50b6ccfce` | [Results](intel/report.md) |
