#!/usr/bin/env python3
"""Replay a pinned LLVM C runtime cohort with compiled objects and LLVM oracles."""

import argparse
from collections import Counter
from concurrent.futures import ProcessPoolExecutor
import hashlib
import json
from pathlib import Path
import re
import subprocess

from run_cxx11_ci_suite import LIMITS, describe
from run_gcc_c_torture_ci_suite import CORPUS as GCC_CORPUS
from upstream_clang_language import elf_object
from upstream_dg_proxy import execute, sha256, write_json


REVISION = '28d2f36a29e8bb5de329a828f07729de66df0a9c'
SINGLE = Path('SingleSource/Regression/C')
MIBENCH = Path('MultiSource/Benchmarks/MiBench')
FLAGS = ('-x', 'c', '-Wno-implicit-int', '-Wno-implicit-function-declaration',
         '-Wno-int-conversion', '-Wno-error=incompatible-pointer-types')
JPEG_IMAGE = '12574e15b69a374b77e6c03c5ebd56e2f3c183fc16d8e3c77fce6ac9c1cd723c'


def cohort(root, gcc_root):
    programs = []
    for source in sorted((root / SINGLE).glob('*.c')):
        dialect = 'gnu90' if source.stem == 'DuffsDevice' else 'gnu17'
        programs.append(dict(id=source.stem, sources=(source,), dialect=dialect,
                             reference=source.with_suffix('.reference_output')))
    for name, args, flags in (
        ('automotive-basicmath', (), ()),
        ('telecomm-FFT', ('8', '32768', '-i'), ('-DFP_ABSTOLERANCE=1e-5',)),
        ('consumer-jpeg', ('-dct', 'int', '-ppm', '-outfile', 'image.ppm'), ()),
    ):
        directory = root / MIBENCH / name
        sources = tuple(sorted(directory.glob('*.c')))
        if len(sources) < 2:
            raise ValueError(f'Missing multiple source files for {name}')
        reference, = directory.glob('*.reference_output')
        program = dict(id=name, sources=sources, args=args, flags=flags, reference=reference, dialect='gnu17')
        if name == 'consumer-jpeg':
            program.update(args=(*args, str(directory / 'input_large.jpg')), image=JPEG_IMAGE)
        programs.append(program)
    if len(programs) != 39 or not (gcc_root / GCC_CORPUS).is_dir():
        raise ValueError('The pinned C runtime cohort or GCC execute corpus is incomplete')

    excluded = []
    torture = root / SINGLE / 'gcc-c-torture' / 'execute'
    for source in sorted(torture.rglob('*.c')):
        counterpart = gcc_root / GCC_CORPUS / source.relative_to(torture)
        row = dict(path=source.relative_to(root).as_posix(), sha256=sha256(source))
        if counterpart.is_file():
            row.update(gcc_path=counterpart.relative_to(gcc_root).as_posix(), gcc_sha256=sha256(counterpart),
                       reason='The pinned GCC corpus owns this case')
        else:
            row.update(reason='LLVM archive case outside the standalone samples')
        excluded.append(row)
    if not excluded:
        raise ValueError('Missing the bundled GCC torture inventory')

    files = {path for program in programs for path in (*program['sources'], program['reference'])}
    for program in programs:
        if len(program['sources']) > 1:
            files.update(program['sources'][0].parent.glob('*.h'))
    files.update([root / 'LICENSE.TXT', root / MIBENCH / 'consumer-jpeg/input_large.jpg'])
    return programs, excluded, {path.relative_to(root).as_posix(): sha256(path) for path in sorted(files)}


def matches_output(reference, stdout, returncode):
    output = stdout + f'exit {returncode}\n'.encode()
    if re.fullmatch(rb'[0-9a-f]{32}\n', reference):
        # LLVM's large-output oracle hashes the stream including the exit line.
        return (hashlib.md5(output, usedforsecurity=False).hexdigest() + '\n').encode() == reference
    return output == reference


def classify(last, output_directory, program, diagnostic, gap):
    if last['name'] == 'run' and last['classification'] == 'success':
        stdout = Path(last['stdout_path'])
        matches = matches_output(program['reference'].read_bytes(), stdout.read_bytes(), last['returncode'])
        if 'image' in program:
            image = output_directory / 'image.ppm'
            matches &= image.is_file() and sha256(image) == program['image']
        if matches:
            return 'resolved-known-failure' if gap else 'passed'
        if gap and gap.get('stdout') == stdout.read_text() and not Path(last['stderr_path']).stat().st_size:
            return 'known-failure'
        return 'wrong-output'
    if (gap and last['name'].startswith('compile-') and last['classification'] == 'rejection' and
            last['returncode'] == 1 and gap.get('diagnostic') and gap['diagnostic'] in diagnostic):
        return 'known-failure'
    return f"{last['name']}-{last['classification']}"


def run_program(task):
    program, level, compiler, linker, output, gap = task
    directory = output / f"{program['id']}-O{level}"
    directory.mkdir(parents=True)
    objects = [str(directory / f'{index}.o') for index in range(len(program['sources']))]
    binary = str(directory / 'test')
    stages = []

    def stage(name, command, runtime=False):
        result, _, diagnostic = execute(command, directory / name, dict(
            LIMITS, compiler_error_scan=not runtime, combine_output=runtime), cwd=directory)
        result['name'] = name
        stages.append(result)
        return result, diagnostic

    for index, (source, obj) in enumerate(zip(program['sources'], objects)):
        result, diagnostic = stage(f'compile-{index}', [compiler, *FLAGS, '-std=' + program['dialect'],
                                                       '-O' + level, *program.get('flags', ()),
                                                       '-c', str(source), '-o', obj])
        if result['classification'] != 'success':
            break
        if not Path(obj).is_file() or not elf_object(Path(obj)):
            result['classification'] = 'invalid-object'
            break
    else:
        result, diagnostic = stage('link', [linker, *objects, '-lm', '-o', binary])
        if result['classification'] == 'success':
            result, diagnostic = stage('run', [binary, *program.get('args', ())], runtime=True)
    status = classify(result, directory, program, diagnostic, gap)
    return dict(id=program['id'], optimization='O' + level, status=status, stages=stages)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--source-root', type=Path, required=True)
    parser.add_argument('--gcc-source-root', type=Path, required=True)
    parser.add_argument('--known-gaps', type=Path, required=True)
    parser.add_argument('--candidate', required=True)
    parser.add_argument('--gcc', default='gcc-15')
    parser.add_argument('--workers', type=int, default=2)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    if args.workers < 1:
        parser.error('--workers must be positive')
    root, output = args.source_root.resolve(), args.output.resolve()
    revision = subprocess.check_output(['git', '-C', root, 'rev-parse', 'HEAD'], text=True).strip()
    if revision != REVISION or subprocess.run(['git', '-C', root, 'diff', '--quiet', 'HEAD']).returncode:
        raise ValueError('Use an unmodified checkout of LLVM test-suite at the pinned revision')
    programs, excluded, files = cohort(root, args.gcc_source_root.resolve())
    gaps = json.loads(args.known_gaps.read_text())
    if not gaps.keys() <= {program['id'] for program in programs}:
        raise ValueError('A known gap references a test outside the LLVM C runtime cohort')
    if any(set(gap) not in ({'reason', 'diagnostic'}, {'reason', 'stdout'}) or
           not all(isinstance(value, str) and value for value in gap.values()) for gap in gaps.values()):
        raise ValueError('Malformed LLVM C runtime known gap')
    tools = {name: describe(getattr(args, name)) for name in ('gcc', 'candidate')}
    output.mkdir(parents=True)
    write_json(output / 'manifest.json', dict(schema=1, revision=revision, tools=tools, inputs=files,
        cases=[{**program, 'sources': [p.relative_to(root).as_posix() for p in program['sources']],
                'reference': program['reference'].relative_to(root).as_posix()} for program in programs],
        exclusions=excluded, known_gaps=gaps))
    (output / 'LICENSE.TXT').write_bytes((root / 'LICENSE.TXT').read_bytes())
    controls = ('gcc', 'candidate')
    counts = {}
    gcc = tools['gcc']['path']
    for name in controls:
        tasks = [(program, level, tools[name]['path'], gcc, output / name,
                  gaps.get(program['id']) if name == 'candidate' else None)
                 for program in programs for level in ('0', '2')]
        with ProcessPoolExecutor(max_workers=args.workers) as pool:
            runs = list(pool.map(run_program, tasks))
        write_json(output / f'{name}.json', runs)
        counts[name] = Counter(run['status'] for run in runs)
        if name == 'gcc' and counts[name]['passed'] != len(tasks):
            raise ValueError('GCC failed to qualify the LLVM oracles on this platform')
    if any(sha256(root / path) != digest for path, digest in files.items()) or any(
            sha256(tool['path']) != tool['sha256'] for tool in tools.values()):
        raise ValueError('A compiler or LLVM input changed during the run')
    candidate = counts['candidate']
    summary = ('### LLVM C runtime checks\n\n'
               f"cppgm matched {candidate['passed']} of {len(tasks)} runs at -O0 and -O2. "
               f"{candidate['known-failure']} runs reproduced reviewed gaps.\n")
    (output / 'summary.md').write_text(summary)
    print(summary, end='')
    return int(candidate['passed'] + candidate['known-failure'] != len(tasks))


if __name__ == '__main__':
    raise SystemExit(main())
