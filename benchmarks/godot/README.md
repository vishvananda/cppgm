# Godot build and headless performance

[Results by host](https://github.com/vishvananda/cppgm/blob/benchmark-badges/godot/report.md)
· [CI runs and artifacts](https://github.com/vishvananda/cppgm/actions/workflows/godot.yml)

This reference-compiler lane runs on pushes to main, manual requests and pull
requests that change the compiler or the files of this measurement. It builds
unmodified Godot 4.7.2, pinned to
`ed1daf0bf001b61586d9930840f2f1394092c079`, with cppgm, GCC and Clang. The full
headless release template retains all default engine modules, 3D, physics and
computed GDScript dispatch. Window, graphics and desktop-service dependencies
are disabled equally for all builds. This does not qualify graphical rendering.

All C++ uses the engine's C++17 release settings, including `-O3`, SSE4.2,
POPCNT and disabled exceptions. cppgm additionally selects `--full-asm`.
C files and final linking use GCC for all three builds; the compiler under test
owns C++ compilation. Full-build CPU/wall times include SCons and linking.
Each is one clean build, so small compile-time differences need repeated runs.
Compiler construction and source fetching are outside these measurements.

The checked [GDScript workloads](workload.gd) exercise dispatch, packed arrays,
string formatting, vector geometry and scene transforms. Every run must produce
a checksum calculated independently by Python. These measurements exercise
headless engine execution, rather than rendering or game frame rates.

Each observation records two times. Work wall time is the `elapsed_usec` value
that the script measures around its work loop. It excludes engine start-up and
exit. Process CPU time is user plus system time from the `wait4` resource usage
of the Godot process, in microseconds. It includes start-up and exit. The
runtime badge uses work wall time. Results that do not name a `badge_metric`
used process CPU time from `/usr/bin/time`, at 10 ms resolution.

A GCC pilot chooses identical repeats for at least 3 s of work (`--seconds`).
Three paired ABBA/BAAB blocks follow, with A/A calibration before and after each
comparison. Ratios are **reference time / cppgm time: higher is better**.
Reports flag A/A variation above 2% and retain every observation; performance
has no pass cutoff. Reports list each observation whose work wall time exceeds
its process CPU time. Such a process waited off the CPU during its work.
Runtime errors, bad checksums and failed builds prevent publication.

Measured runs use a fixed address-space layout (`setarch -R`) when the host
permits it. Docker's default seccomp profile refuses it. Hosted container runs
keep a random layout. `metadata.json` records the probe result as
`address_space`. It also records the run time, the kernel release, the CPU
vendor, family, model, stepping and microcode revision of the measuring CPU,
every file of `/sys/devices/system/cpu/vulnerabilities`, the transparent
hugepage mode and `randomize_va_space`. A file that the host hides is `null`.

`results.json` stores the median and least seconds per pass of each binary,
workload and time as `time_per_pass`. A pass is one call over 100,000
iterations. Publication compares the work wall time per pass of each reference
binary with the latest earlier published run that has the same binary SHA-256
and the same CPU model. Earlier results without `time_per_pass` are skipped.
A change above 5% reads **reference moved** in the report and in
`reference-drift.json`. The runtime badge for that reference then shows a gray
background and a dagger (`†`) after the value. Its tooltip names the workload
and both times. The ratio of that workload shows a change of the reference
binary or of the runner, not of cppgm. The hosted job summary shows the same
comparison against the published history.

Successful main runs publish alongside the other benchmark reports, retaining
history by compiler commit and host. EPYC and GitHub Intel results are separate.
PR results appear in the job summary and downloadable artifact. Artifacts retain
commands, compiler/workload hashes, build flags, raw times and calibration.
The `standard/` directory contains [shared version-1 records](../../docs/performance/results-format.md),
a host-specific summary and per-workload tables. Full builds use the `build`
phase; CPU and elapsed time stay separate. The runtime summary is an equal-weight
geometric mean of all five workloads; individual results and A/A warnings remain
in the detail report.

To reproduce on Linux x86-64 with GCC, Clang and SCons 4.10.1 installed:

```sh
make -C dev cppgm
python3 scripts/godot_ci.py run --output obj/godot-local --runtime-cpu 0
```

Choose an available quiet CPU and a new output directory. `--jobs`, `--gcc`,
`--cc`, `--clang` and `--scons` select build resources and installed tools;
`--source` reuses a clean upstream checkout at the pinned commit.
This lane is independent of the student assignment requirements.

To compare a run with the published history:

```sh
git fetch origin benchmark-badges
python3 scripts/godot_results.py drift obj/godot-local --history-ref origin/benchmark-badges
```

`--earlier` takes earlier run artifacts, newest first. For artifacts without
`time_per_pass`, the time per pass comes from `runtime-observations.jsonl`.
