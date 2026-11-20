#!/usr/bin/env python3
"""Freeze AArch64 benchmark guests on x86 and measure those exact images on native Linux."""
import argparse
import json
import os
from pathlib import Path
import platform
import resource
import subprocess
import time

from benchmark_timing import observations, retain, sha, summarize
from public_benchmarks import cpu_model

ROOT = Path(__file__).resolve().parents[1]
CASES = ("lookup", "calls", "memory", "vectors")


def checked(command):
    return subprocess.check_output(list(map(str, command)), timeout=180)


def write(path, value):
    path.write_text(json.dumps(value, indent=2, sort_keys=True) + "\n")


def build(args):
    directory = args.directory.resolve()
    directory.mkdir(parents=True, exist_ok=False)
    clang = os.getenv("CPPGM_AARCH64_CLANG", "clang")
    gcc = os.getenv("CPPGM_AARCH64_GXX", "aarch64-linux-gnu-g++-14")
    linker = os.getenv("CPPGM_AARCH64_LLD", "ld.lld")
    runner = [os.getenv("CPPGM_AARCH64_QEMU", "qemu-aarch64"), "-cpu", "cortex-a53"]
    target = "--target=aarch64-linux-gnu"
    common = ["-march=armv8-a", "-fno-stack-protector", "-ffp-contract=off"]
    gcc_flags, clang_flags = [gcc, *common], [clang, target, *common]
    kernels = ["pa36/kernels/lookup.cpp", "pa36/kernels/accessor.cpp", "benchmarks/aarch64/neon.cpp"]
    sources = ["pa39/support/start.S", "benchmarks/aarch64/report.S", "benchmarks/aarch64/workload.cpp"]
    manifest = dict(inputs={s: sha(ROOT / s) for s in kernels + sources}, guests={}, checksums={}, commands=[])
    manifest["revision"] = checked(["git", "-C", ROOT, "rev-parse", "HEAD"]).decode().strip()
    def record(command):
        manifest["commands"].append(list(map(str, command)))
        return checked(command)
    fixed = []
    for index, source in enumerate(sources):
        obj = directory / f"common-{index}.o"
        record([*clang_flags, "-O3", "-c", ROOT / source, "-o", obj])
        fixed.append(obj)
    baseline = args.baseline.resolve() if args.baseline else args.compiler.resolve()
    producers = {"gcc": [*gcc_flags, "-O3"], "clang": [*clang_flags, "-O3"],
                 "baseline": [baseline, target, "-O3" if args.baseline else "-O0"],
                 "candidate": [args.compiler.resolve(), target, "-O3"]}
    manifest["tool_versions"] = {tool: checked([tool, "--version"]).decode().splitlines()[0]
                                 for tool in (clang, gcc, linker, runner[0])}
    manifest["compiler_hashes"] = {str(tool): sha(tool) for tool in (baseline, args.compiler.resolve())}
    for label, command in producers.items():
        objects = []
        for index, source in enumerate(kernels):
            obj = directory / f"{label}-{index}.o"
            record([*command, "-x", "c++", "-c", ROOT / source, "-o", obj])
            objects.append(obj)
        guest = directory / label
        record([linker, "-m", "aarch64elf", "-static", "-e", "_start", *fixed, *objects, "-o", guest])
        manifest["guests"][label] = {"sha256": sha(guest), "bytes": guest.stat().st_size}
        for case in CASES:
            output = checked([*runner, guest, case])
            if len(output) != 8 or output.hex() != manifest["checksums"].setdefault(case, output.hex()):
                raise ValueError(f"{label} disagrees on full-width checksum for {case}: {output.hex()}")
    write(directory / "manifest.json", manifest)
    print("Verified four checksums for all four compiler configurations under QEMU.")


def measure(args):
    if (platform.system(), platform.machine()) != ("Linux", "aarch64"):
        raise SystemExit("Native timing requires Linux AArch64.")
    directory, output = args.directory.resolve(), args.output.resolve()
    manifest = json.loads((directory / "manifest.json").read_text())
    output.mkdir(parents=True, exist_ok=False)
    def verify():
        for label, info in manifest["guests"].items():
            guest = directory / label
            if sha(guest) != info["sha256"]:
                raise ValueError(f"guest checksum mismatch for {label}")
            guest.chmod(0o555)
    verify()
    samples = output / "observations.jsonl"
    report = {"machine": platform.uname()._asdict(), "cpu": cpu_model(),
              "manifest_sha256": sha(directory / "manifest.json"),
              "revision": manifest.get("revision"), "cases": {}}
    for case in CASES:
        def run(label, phase, block, position):
            command = [directory / label, case]
            cpu_before = resource.getrusage(resource.RUSAGE_CHILDREN)
            start = time.monotonic()
            actual = checked(command)
            wall = time.monotonic() - start
            cpu = resource.getrusage(resource.RUSAGE_CHILDREN)
            row = dict(cpu=cpu.ru_utime - cpu_before.ru_utime + cpu.ru_stime - cpu_before.ru_stime,
                       wall=wall, checksum=actual.hex(), case=case, label=label, phase=phase, block=block, position=position)
            retain(samples, row)
            if row["checksum"] != manifest["checksums"][case]:
                raise ValueError(f"{case} checksum mismatch during timing")
            return row
        summary = report["cases"][case] = {}
        for phase, first, second in [("AA", "baseline", "baseline"), ("AB", "baseline", "candidate"),
                                     ("clang", "clang", "candidate"), ("gcc", "gcc", "candidate")]:
            summary[phase] = summarize(observations(run, first, second, 2 if phase == "AA" else args.blocks, phase))
        if args.perf:
            for label in manifest["guests"]:
                counters = output / f"{case}-{label}-perf.csv"
                result = checked(["perf", "stat", "-x,", "-e", "cycles,instructions,branches,branch-misses",
                                  "-o", counters, "--", directory / label, case])
                if result.hex() != manifest["checksums"][case]:
                    raise ValueError(f"{case} checksum mismatch under perf")
        write(output / "results.json", report)
    verify()
    lines = ["### Native Arm64 kernel runtime", "", "| Kernel | vs GCC O3 | vs Clang O3 |",
             "| --- | ---: | ---: |"]
    for case, measurements in report["cases"].items():
        speedups = []
        for reference in ("gcc", "clang"):
            ratio = measurements[reference]["ratio"]
            speedups.append(f"{1 / ratio:.2f}×" if ratio else "n/m")
        lines.append(f"| {case} | {' | '.join(speedups)} |")
    (output / "report.md").write_text("\n".join(lines) + "\n")


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    subs = parser.add_subparsers(dest="mode", required=True)
    pack = subs.add_parser("build")
    pack.add_argument("directory", type=Path)
    pack.add_argument("--compiler", type=Path, default=ROOT / "dev/cppgm")
    pack.add_argument("--baseline", type=Path, help="baseline compiler to compare at O3 (default: candidate at O0)")
    bench = subs.add_parser("measure")
    bench.add_argument("directory", type=Path)
    bench.add_argument("output", type=Path)
    bench.add_argument("--blocks", type=int, choices=range(2, 101), default=5)
    bench.add_argument("--perf", action="store_true", help="collect separate native hardware-counter observations")
    args = parser.parse_args()
    (build if args.mode == "build" else measure)(args)
