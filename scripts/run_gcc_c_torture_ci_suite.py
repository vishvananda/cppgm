#!/usr/bin/env python3
"""Check a pinned standalone GCC C torture sample in the scheduled lane."""

import argparse
from collections import Counter
import hashlib
import json
from pathlib import Path

from run_cxx11_ci_suite import describe, run_suite, validate_manifest
from upstream_dg_proxy import sha256, write_json


REVISION = '5115c7e447fc07457443df874bf57840e8316d5f'
CORPUS = Path('gcc/testsuite/gcc.c-torture/execute')
SAMPLE_SIZE = 64
SAMPLE_SHA256 = '5c4cd216305d4f88ed35882fe6600905636f449c314c34d0f21f24d975b28738'
GNU_FLAGS = ['-Wno-implicit-int', '-Wno-implicit-function-declaration',
             '-Wno-int-conversion', '-fno-strict-aliasing']


def build_manifest(root):
    candidates, exclusions = [], []
    for source in sorted((root / CORPUS).glob('*.c')):
        data = source.read_bytes()
        path = source.relative_to(root).as_posix()
        identity = dict(path=path, sha256=hashlib.sha256(data).hexdigest())
        sidecar = source.with_suffix('.x')
        if sidecar.exists():
            exclusions.append(dict(**identity, reason='GCC Tcl sidecar',
                                   sidecar=dict(path=sidecar.relative_to(root).as_posix(), sha256=sha256(sidecar))))
        elif any(marker in data for marker in (b'dg-', b'__has_include', b'#include "')):
            exclusions.append(dict(**identity, reason='GCC directives or local include closure'))
        else:
            candidates.append(identity)
    if len(candidates) < SAMPLE_SIZE:
        raise ValueError('Pinned GCC torture directory is incomplete')
    candidates.sort(key=lambda row: hashlib.sha256(Path(row['path']).name.encode()).digest())
    selected = candidates[:SAMPLE_SIZE]
    fingerprint = ''.join(f"{row['path']} {row['sha256']}\n" for row in selected)
    if hashlib.sha256(fingerprint.encode()).hexdigest() != SAMPLE_SHA256:
        raise ValueError('Selected GCC torture sources changed from the pinned revision')
    for identity in candidates[SAMPLE_SIZE:]:
        exclusions.append(dict(**identity, reason='Outside the initial standalone sample'))

    cases = []
    for source in selected:
        for opt in ('0', '2'):
            flags = [*GNU_FLAGS, '-O' + opt]
            cases.append(dict(id=f"{Path(source['path']).stem}-O{opt}", **source, dialect='gnu17',
                              action='run', expect='accept', candidate_flags=flags, upstream_flags=flags,
                              link_flags=['-lm']))
    return dict(schema=1, suite='gcc', language='c', edition=17, revision=REVISION,
                cases=cases, exclusions=exclusions)


def classify(candidate, reference, gap):
    outcome = candidate['status']
    if outcome == 'passed':
        if any(candidate['stages'][-1][stream] != reference['stages'][-1][stream]
               for stream in ('stdout_sha256', 'stderr_sha256')):
            return 'wrong-output'
        return 'resolved-known-failure' if gap else 'passed'
    if gap and outcome == gap['status']:
        diagnostic = Path(candidate['stages'][-1]['stderr_path']).read_text(errors='replace')
        if gap['diagnostic'] in diagnostic:
            return 'known-failure'
    return outcome


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--source-root', type=Path, required=True)
    parser.add_argument('--known-gaps', type=Path, required=True)
    parser.add_argument('--candidate', required=True)
    parser.add_argument('--gcc', default='gcc-15')
    parser.add_argument('--workers', type=int, default=2)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    if args.workers < 1:
        parser.error('--workers must be positive')
    root, output = args.source_root.resolve(), args.output.resolve()
    manifest = build_manifest(root)
    cases = manifest['cases']
    validate_manifest(manifest, root)
    gaps = json.loads(args.known_gaps.read_text())
    if not gaps.keys() <= {case['id'] for case in cases}:
        raise ValueError('A known gap references a source outside the frozen sample')

    tools = {name: describe(getattr(args, name)) for name in ('gcc', 'candidate')}
    output.mkdir(parents=True, exist_ok=False)
    write_json(output / 'manifest.json', manifest)
    write_json(output / 'known-gaps.json', gaps)
    write_json(output / 'tools.json', tools)
    gcc = tools['gcc']['path']
    native = run_suite(cases, root, gcc, gcc, 'upstream', output / 'gcc', args.workers)
    write_json(output / 'gcc.json', native)
    if native['passed'] != len(cases) or native['error']:
        raise ValueError('GCC did not qualify every pinned torture case')
    reference = {row['id']: row for row in native['results']}

    candidate = run_suite(cases, root, tools['candidate']['path'], gcc, 'cppgm', output / 'cppgm', args.workers)
    write_json(output / 'cppgm.json', candidate)
    outcomes = {row['id']: classify(row, reference[row['id']], gaps.get(row['id']))
                for row in candidate['results']}
    counts = Counter(outcomes.values())
    write_json(output / 'outcomes.json', outcomes)
    validate_manifest(manifest, root)
    for tool in tools.values():
        if sha256(tool['path']) != tool['sha256']:
            raise ValueError('A compiler changed during the torture run')
    summary = ('### GCC C torture standalone sample\n\n'
               f"cppgm matched GCC in {counts['passed']} of {len(cases)} GNU17 configurations. "
               f"{counts['known-failure']} failed with reviewed diagnostics.\n")
    (output / 'summary.md').write_text(summary)
    print(summary, end='')
    return int(counts['passed'] + counts['known-failure'] != len(cases) or bool(candidate['error']))


if __name__ == '__main__':
    raise SystemExit(main())
