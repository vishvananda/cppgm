#!/usr/bin/env python3
"""Freeze the c-testsuite single-executable corpus for the upstream CI runner."""
import argparse
import json
from pathlib import Path
import subprocess

from upstream_dg_proxy import sha256, write_json


REVISION = '5c7275656d751de0e68b2d340a95b5681858ed07'
TESTS = Path('tests/single-exec')


def build(root, gaps):
    revision = subprocess.check_output(['git', 'rev-parse', 'HEAD'], cwd=root, text=True).strip()
    if revision != REVISION:
        raise ValueError(f'c-testsuite checkout must be at {REVISION}, found {revision}')
    subprocess.run(['git', 'diff', '--exit-code', 'HEAD', '--', str(TESTS)], cwd=root, check=True)
    sources = sorted((root / TESTS).glob('*.c'))
    if len(sources) != 220:
        raise ValueError(f'Expected 220 c-testsuite sources, found {len(sources)}')
    if not set(gaps).issubset(source.name for source in sources):
        raise ValueError('Known gap references an absent c-testsuite source')

    def entry(path):
        return dict(path=path.relative_to(root).as_posix(), sha256=sha256(path))

    cases, exclusions = [], []
    for source in sources:
        gap = gaps.get(source.name)
        if gap and 'exclude' in gap:
            exclusions.append(dict(**entry(source), reason=gap['exclude']))
            continue
        provenance = [entry(source.with_suffix('.c.tags'))]
        origin = source.with_suffix('.c.otags')
        if origin.is_file():
            provenance.append(entry(origin))
        oracle = entry(source.with_suffix('.c.expected'))
        for dialect in ('c17', 'gnu17'):
            for opt in ('O0', 'O2'):
                case = dict(id=f'{source.stem}-{dialect}-{opt}', **entry(source), dialect=dialect,
                            action='run', expect='accept', candidate_flags=['-' + opt], upstream_flags=['-' + opt],
                            link_flags=['-lm'], input_files=provenance, expected_output=oracle)
                if gap:
                    case['known_failure'] = dict(status='compile-failed', **gap)
                cases.append(case)
    return dict(schema=1, suite='c-testsuite', language='c', edition=17, revision=revision, cases=cases,
                exclusions=exclusions, coverage='All non-excluded single-executable cases in C17 and GNU17 at -O0 and -O2.',
                limitations=['Includes GNU extensions accepted by the native control. The results measure suite compatibility.',
                             'Both compilers use the pinned C driver for linking. Output combines stdout and stderr.'])


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--source-root', type=Path, required=True)
    parser.add_argument('--known-gaps', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    write_json(args.output, build(args.source_root.resolve(), json.loads(args.known_gaps.read_text())))


if __name__ == '__main__':
    main()
