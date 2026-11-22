#!/usr/bin/env python3
"""Use GCC and Clang to qualify pinned Csmith seeds before testing cppgm."""

import argparse
from pathlib import Path
import re
import shutil
import subprocess

from run_cxx11_ci_suite import describe, run_suite, validate_manifest
from upstream_dg_proxy import sha256, write_json


REVISION = '30dccd73b78652c4719f36572994778a5b233a4e'
SEEDS = range(1, 16)
GENERATOR_FLAGS = ['--max-funcs', '3', '--max-block-depth', '3']


def build_cases(generator, runtime, root):
    header_dir = root / 'include'
    shutil.copytree(runtime, header_dir)
    headers = [entry(path, root) for path in sorted(header_dir.rglob('*')) if path.is_file()]
    cases = []
    for seed in SEEDS:
        source = root / f'seed-{seed}.c'
        command = [generator, '--seed', str(seed), *GENERATOR_FLAGS]
        with source.open('wb') as stream, source.with_suffix('.stderr').open('wb') as error:
            subprocess.run(command, cwd=root, stdout=stream, stderr=error, check=True, timeout=30)
        for opt in ('0', '2'):
            flags = ['-O' + opt]
            cases.append(dict(id=f'seed-{seed}-O{opt}', seed=seed, **entry(source, root), dialect='c17',
                              action='run', expect='accept', candidate_flags=flags, upstream_flags=flags,
                              include_directories=['include'], input_files=headers))
    return cases


def entry(path, root):
    return dict(path=path.relative_to(root).as_posix(), sha256=sha256(path))


def reference_checksums(runs):
    by_seed = {}
    for name, run in runs.items():
        for result in run['results']:
            if result['status'] != 'passed':
                raise ValueError(f"{name} {result['id']} {result['status']}")
            execute = result['stages'][-1]
            stdout = Path(execute['stdout_path']).read_bytes()
            stderr = Path(execute['stderr_path']).read_bytes()
            seed = int(result['id'].split('-')[1])
            if stderr or not re.fullmatch(rb'checksum = [0-9A-Fa-f]+\n', stdout):
                raise ValueError(f"{name} {result['id']} did not produce a single checksum")
            if by_seed.setdefault(seed, stdout) != stdout:
                raise ValueError(f"native compilers disagree on seed {seed}")
    return by_seed


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--generator', default='csmith')
    parser.add_argument('--runtime-headers', type=Path, required=True)
    parser.add_argument('--candidate', required=True)
    parser.add_argument('--gcc', default='gcc-15')
    parser.add_argument('--clang', default='clang-21')
    parser.add_argument('--workers', type=int, default=2)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    if args.workers < 1:
        parser.error('--workers must be positive')

    output = args.output.resolve()
    root = output / 'corpus'
    root.mkdir(parents=True, exist_ok=False)
    tools = {name: describe(getattr(args, name)) for name in ('candidate', 'gcc', 'clang')}
    tools['generator'] = describe(args.generator, cwd=root)
    version = tools['generator']['version']
    if 'csmith 2.3.0\n' not in version or 'Git version: ' + REVISION[:7] not in version:
        raise ValueError('Csmith must match the pinned generator')
    cases = build_cases(tools['generator']['path'], args.runtime_headers, root)
    manifest = dict(schema=1, suite='csmith', language='c', edition=17, revision=REVISION, cases=cases,
                    generator_flags=GENERATOR_FLAGS, exclusions=[
                        dict(seed=16, reason='GCC and Clang both timed out at -O0 and -O2 during qualification')
                    ])
    validate_manifest(manifest, root)
    write_json(output / 'manifest.json', manifest)
    write_json(output / 'tools.json', tools)
    gcc = tools['gcc']['path']
    native = {}
    for name in ('gcc', 'clang'):
        native[name] = run_suite(cases, root, tools[name]['path'], gcc, 'upstream', output / name, args.workers)
        write_json(output / f'{name}.json', native[name])
        if native[name]['passed'] != len(cases) or native[name]['error']:
            raise ValueError(f'{name} did not qualify every pinned seed')

    checksums = reference_checksums(native)
    for seed, checksum in checksums.items():
        (root / f'seed-{seed}.expected').write_bytes(checksum)
    for case in cases:
        case['expected_output'] = entry(root / f"seed-{case['seed']}.expected", root)
    validate_manifest(manifest, root)
    write_json(output / 'manifest.json', manifest)
    result = run_suite(cases, root, tools['candidate']['path'], gcc, 'cppgm', output / 'cppgm', args.workers)
    write_json(output / 'cppgm.json', result)
    validate_manifest(manifest, root)
    if any(sha256(tool['path']) != tool['sha256'] for tool in tools.values()):
        raise ValueError('A tool changed during the differential run')
    summary = (f"### Csmith C17 differential checks\n\n"
               f"cppgm matched GCC and Clang on {result['passed']} of {len(cases)} configurations.\n"
               "The run used Linux x86-64 with the pinned seeds at -O0 and -O2.\n")
    (output / 'summary.md').write_text(summary)
    print(summary, end='')
    return int(result['passed'] != len(cases) or bool(result['error']))


if __name__ == '__main__':
    raise SystemExit(main())
